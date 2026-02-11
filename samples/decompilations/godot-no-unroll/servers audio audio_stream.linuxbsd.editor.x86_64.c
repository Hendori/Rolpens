
/* AudioStreamPlayback::start_playback(double) */

void AudioStreamPlayback::start_playback(double param_1)

{
  long *in_RDI;
  
                    /* WARNING: Could not recover jumptable at 0x00100007. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*in_RDI + 0x150))();
  return;
}



/* AudioStreamPlayback::stop_playback() */

void __thiscall AudioStreamPlayback::stop_playback(AudioStreamPlayback *this)

{
                    /* WARNING: Could not recover jumptable at 0x00100017. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x158))();
  return;
}



/* AudioStreamPlayback::seek_playback(double) */

void AudioStreamPlayback::seek_playback(double param_1)

{
  long *in_RDI;
  
                    /* WARNING: Could not recover jumptable at 0x00100027. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*in_RDI + 0x178))();
  return;
}



/* AudioStreamPlaybackResampled::begin_resample() */

void __thiscall AudioStreamPlaybackResampled::begin_resample(AudioStreamPlaybackResampled *this)

{
  *(undefined1 (*) [16])(this + 0x270) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x280) = (undefined1  [16])0x0;
  (**(code **)(*(long *)this + 0x1c0))(this,this + 0x290,0x80);
  *(undefined8 *)(this + 0x698) = 0;
  return;
}



/* AudioStreamPlaybackMicrophone::get_playback_position() const */

undefined8 AudioStreamPlaybackMicrophone::get_playback_position(void)

{
  return 0;
}



/* AudioStreamMicrophone::is_monophonic() const */

undefined8 AudioStreamMicrophone::is_monophonic(void)

{
  return 1;
}



/* AudioStreamPlaybackMicrophone::is_playing() const */

AudioStreamPlaybackMicrophone __thiscall
AudioStreamPlaybackMicrophone::is_playing(AudioStreamPlaybackMicrophone *this)

{
  return this[0x6d0];
}



/* AudioStreamPlaybackMicrophone::get_loop_count() const */

undefined8 AudioStreamPlaybackMicrophone::get_loop_count(void)

{
  return 0;
}



/* AudioStreamPlaybackMicrophone::seek(double) */

void AudioStreamPlaybackMicrophone::seek(double param_1)

{
  return;
}



/* AudioStreamRandomizer::get_streams_count() const */

undefined4 __thiscall AudioStreamRandomizer::get_streams_count(AudioStreamRandomizer *this)

{
  if (*(long *)(this + 0x3c0) != 0) {
    return *(undefined4 *)(*(long *)(this + 0x3c0) + -8);
  }
  return 0;
}



/* AudioStreamRandomizer::set_random_pitch(float) */

void __thiscall AudioStreamRandomizer::set_random_pitch(AudioStreamRandomizer *this,float param_1)

{
  float fVar1;
  
  fVar1 = _LC1;
  if (_LC1 <= param_1) {
    fVar1 = param_1;
  }
  *(float *)(this + 0x3c8) = fVar1;
  return;
}



/* AudioStreamRandomizer::get_random_pitch() const */

undefined4 __thiscall AudioStreamRandomizer::get_random_pitch(AudioStreamRandomizer *this)

{
  return *(undefined4 *)(this + 0x3c8);
}



/* AudioStreamRandomizer::set_random_volume_offset_db(float) */

void __thiscall
AudioStreamRandomizer::set_random_volume_offset_db(AudioStreamRandomizer *this,float param_1)

{
  if (param_1 < 0.0) {
    param_1 = 0.0;
  }
  *(float *)(this + 0x3cc) = param_1;
  return;
}



/* AudioStreamRandomizer::get_random_volume_offset_db() const */

undefined4 __thiscall
AudioStreamRandomizer::get_random_volume_offset_db(AudioStreamRandomizer *this)

{
  return *(undefined4 *)(this + 0x3cc);
}



/* AudioStreamRandomizer::set_playback_mode(AudioStreamRandomizer::PlaybackMode) */

void __thiscall
AudioStreamRandomizer::set_playback_mode(AudioStreamRandomizer *this,undefined4 param_2)

{
  *(undefined4 *)(this + 0x3d8) = param_2;
  return;
}



/* AudioStreamRandomizer::get_playback_mode() const */

undefined4 __thiscall AudioStreamRandomizer::get_playback_mode(AudioStreamRandomizer *this)

{
  return *(undefined4 *)(this + 0x3d8);
}



/* AudioStreamRandomizer::is_monophonic() const */

undefined8 __thiscall AudioStreamRandomizer::is_monophonic(AudioStreamRandomizer *this)

{
  undefined8 uVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = *(long **)(this + 0x3c0);
  if (plVar2 != (long *)0x0) {
    plVar3 = plVar2 + plVar2[-1] * 2;
    for (; plVar3 != plVar2; plVar2 = plVar2 + 2) {
      if (((long *)*plVar2 != (long *)0x0) &&
         (uVar1 = (**(code **)(*(long *)*plVar2 + 0x200))(), (char)uVar1 != '\0')) {
        return uVar1;
      }
    }
  }
  return 0;
}



/* AudioStreamPlaybackRandomizer::stop() */

void __thiscall AudioStreamPlaybackRandomizer::stop(AudioStreamPlaybackRandomizer *this)

{
  if (*(long **)(this + 0x280) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x001001d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x280) + 0x158))();
    return;
  }
  return;
}



/* AudioStreamPlaybackRandomizer::is_playing() const */

undefined8 __thiscall AudioStreamPlaybackRandomizer::is_playing(AudioStreamPlaybackRandomizer *this)

{
  undefined8 uVar1;
  
  if (*(long **)(this + 0x280) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00100203. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(long **)(this + 0x280) + 0x160))();
    return uVar1;
  }
  return 0;
}



/* AudioStreamPlaybackRandomizer::get_loop_count() const */

undefined8 __thiscall
AudioStreamPlaybackRandomizer::get_loop_count(AudioStreamPlaybackRandomizer *this)

{
  undefined8 uVar1;
  
  if (*(long **)(this + 0x280) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00100233. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(long **)(this + 0x280) + 0x168))();
    return uVar1;
  }
  return 0;
}



/* AudioStreamPlaybackRandomizer::get_playback_position() const */

undefined8 __thiscall
AudioStreamPlaybackRandomizer::get_playback_position(AudioStreamPlaybackRandomizer *this)

{
  undefined8 uVar1;
  
  if (*(long **)(this + 0x280) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00100263. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(long **)(this + 0x280) + 0x170))();
    return uVar1;
  }
  return 0;
}



/* AudioStreamPlaybackRandomizer::seek(double) */

void AudioStreamPlaybackRandomizer::seek(double param_1)

{
  long in_RDI;
  
  if (*(long **)(in_RDI + 0x280) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00100293. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(in_RDI + 0x280) + 0x178))();
    return;
  }
  return;
}



/* AudioStreamPlaybackRandomizer::mix(AudioFrame*, float, int) */

ulong AudioStreamPlaybackRandomizer::mix(AudioFrame *param_1,float param_2,int param_3)

{
  ulong uVar1;
  uint in_EDX;
  undefined4 in_register_00000034;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 in_register_00001204 [12];
  undefined1 auVar5 [16];
  
  puVar2 = (undefined8 *)CONCAT44(in_register_00000034,param_3);
  if (*(long **)(param_1 + 0x280) != (long *)0x0) {
    auVar5._0_4_ = param_2 * *(float *)(param_1 + 0x288);
    auVar5._4_12_ = in_register_00001204;
    uVar1 = (**(code **)(**(long **)(param_1 + 0x280) + 0x198))(auVar5._0_8_);
    if (0 < (int)uVar1) {
      puVar3 = puVar2;
      do {
        puVar4 = puVar3 + 1;
        *puVar3 = CONCAT44((float)((ulong)*puVar3 >> 0x20) * *(float *)(param_1 + 0x28c),
                           (float)*puVar3 * *(float *)(param_1 + 0x28c));
        puVar3 = puVar4;
      } while (puVar4 != puVar2 + (int)uVar1);
    }
    return uVar1;
  }
  if (0 < (int)in_EDX) {
    puVar3 = puVar2 + (int)in_EDX;
    do {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    } while (puVar2 != puVar3);
  }
  return (ulong)in_EDX;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AudioStreamPlaybackResampled::mix(AudioFrame*, float, int) */

int __thiscall
AudioStreamPlaybackResampled::mix
          (AudioStreamPlaybackResampled *this,AudioFrame *param_1,float param_2,int param_3)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  bool bVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  double dVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  plVar2 = (long *)AudioServer::get_singleton();
  fVar8 = (float)(**(code **)(*plVar2 + 0x188))(plVar2);
  AudioServer::get_singleton();
  fVar9 = (float)AudioServer::get_playback_speed_scale();
  fVar10 = (float)(**(code **)(*(long *)this + 0x1c8))(this);
  dVar11 = ((double)(fVar10 * param_2 * fVar9) / (double)fVar8) * __LC3;
  if (_LC4 <= dVar11) {
    uVar4 = (long)(dVar11 - _LC4) ^ 0x8000000000000000;
  }
  else {
    uVar4 = (ulong)dVar11;
  }
  if (param_3 < 1) {
    bVar7 = true;
    iVar5 = -1;
    iVar1 = 0;
  }
  else {
    lVar6 = 0;
    iVar5 = -1;
    do {
      uVar3 = *(ulong *)(this + 0x698);
      iVar1 = (int)(uVar3 >> 0x10);
      fVar8 = (float)(uVar3 & 0xffff) * __LC5;
      bVar7 = iVar5 == -1;
      if ((*(uint *)(this + 0x690) <= iVar1 + 4U) && (bVar7)) {
        bVar7 = false;
        iVar5 = (int)lVar6;
      }
      fVar14 = (float)*(undefined8 *)(this + (ulong)(iVar1 + 2) * 8 + 0x270);
      fVar15 = (float)((ulong)*(undefined8 *)(this + (ulong)(iVar1 + 2) * 8 + 0x270) >> 0x20);
      uVar3 = uVar3 + uVar4;
      fVar12 = (fVar8 - _LC1) * fVar8 * fVar8;
      fVar13 = fVar8 * fVar8 - fVar12;
      fVar8 = fVar8 - fVar13;
      fVar13 = fVar13 - fVar12;
      fVar9 = (float)*(undefined8 *)(this + (ulong)(iVar1 + 3) * 8 + 0x270);
      fVar10 = (float)((ulong)*(undefined8 *)(this + (ulong)(iVar1 + 3) * 8 + 0x270) >> 0x20);
      *(ulong *)(param_1 + lVar6 * 8) =
           CONCAT44((((float)((ulong)*(undefined8 *)(this + (ulong)(iVar1 + 4U) * 8 + 0x270) >> 0x20
                             ) - fVar15) * fVar12 +
                    fVar8 * (fVar10 - (float)((ulong)*(undefined8 *)
                                                      (this + (ulong)(iVar1 + 1) * 8 + 0x270) >>
                                             0x20))) * _LC6._4_4_ +
                    (fVar10 - fVar15) * fVar13 + fVar15,
                    (((float)*(undefined8 *)(this + (ulong)(iVar1 + 4U) * 8 + 0x270) - fVar14) *
                     fVar12 + fVar8 * (fVar9 - (float)*(undefined8 *)
                                                       (this + (ulong)(iVar1 + 1) * 8 + 0x270))) *
                    (float)_LC6 + (fVar9 - fVar14) * fVar13 + fVar14);
      *(ulong *)(this + 0x698) = uVar3;
      while (0x7fffff < uVar3) {
        *(undefined8 *)(this + 0x270) = *(undefined8 *)(this + 0x670);
        *(undefined8 *)(this + 0x278) = *(undefined8 *)(this + 0x678);
        *(undefined8 *)(this + 0x280) = *(undefined8 *)(this + 0x680);
        *(undefined8 *)(this + 0x288) = *(undefined8 *)(this + 0x688);
        iVar1 = (**(code **)(*(long *)this + 0x1c0))(this,this + 0x290,0x80);
        if (iVar1 == 0x80) {
          iVar1 = -1;
        }
        *(int *)(this + 0x690) = iVar1;
        uVar3 = *(long *)(this + 0x698) - 0x800000;
        *(ulong *)(this + 0x698) = uVar3;
      }
      lVar6 = lVar6 + 1;
      iVar1 = param_3;
    } while (param_3 != lVar6);
  }
  if ((param_3 == iVar1) && (bVar7)) {
    iVar5 = param_3;
  }
  return iVar5;
}



/* AudioStreamPlaybackMicrophone::mix(AudioFrame*, float, int) */

void __thiscall
AudioStreamPlaybackMicrophone::mix
          (AudioStreamPlaybackMicrophone *this,AudioFrame *param_1,float param_2,int param_3)

{
  AudioStreamPlaybackResampled::mix((AudioStreamPlaybackResampled *)this,param_1,param_2,param_3);
  return;
}



/* AudioStreamRandomizer::get_stream_probability_weight(int) const */

undefined4 __thiscall
AudioStreamRandomizer::get_stream_probability_weight(AudioStreamRandomizer *this,int param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(this + 0x3c0);
  lVar2 = (long)param_1;
  if (param_1 < 0) {
    if (lVar1 != 0) {
      lVar3 = *(long *)(lVar1 + -8);
      goto LAB_00100619;
    }
  }
  else if (lVar1 != 0) {
    lVar3 = *(long *)(lVar1 + -8);
    if (lVar2 < lVar3) {
      return *(undefined4 *)(lVar1 + 8 + lVar2 * 0x10);
    }
    goto LAB_00100619;
  }
  lVar3 = 0;
LAB_00100619:
  _err_print_index_error
            ("get_stream_probability_weight","servers/audio/audio_stream.cpp",0x22c,lVar2,lVar3,
             "p_index","audio_stream_pool.size()","",false,false);
  return 0;
}



/* CowData<int>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<int>::_copy_on_write(CowData<int> *this)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  ulong uVar5;
  size_t __n;
  
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
  __n = lVar2 * 4;
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



/* CowData<AudioFrame>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<AudioFrame>::_copy_on_write(CowData<AudioFrame> *this)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  lVar5 = *(long *)(*(long *)this + -8);
  uVar7 = 0x10;
  lVar6 = lVar5 * 8;
  if (lVar6 != 0) {
    uVar7 = lVar6 - 1U | lVar6 - 1U >> 1;
    uVar7 = uVar7 | uVar7 >> 2;
    uVar7 = uVar7 | uVar7 >> 4;
    uVar7 = uVar7 | uVar7 >> 8;
    uVar7 = uVar7 | uVar7 >> 0x10;
    uVar7 = (uVar7 | uVar7 >> 0x20) + 0x11;
  }
  puVar4 = (undefined8 *)Memory::alloc_static(uVar7,false);
  if (puVar4 == (undefined8 *)0x0) {
    _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                     "Parameter \"mem_new\" is null.",0,0);
    return;
  }
  *puVar4 = 1;
  puVar4[1] = lVar5;
  lVar2 = *(long *)this;
  if (lVar5 == 0) {
    if (lVar2 == 0) goto LAB_0010086f;
  }
  else {
    lVar5 = 0;
    do {
      *(undefined8 *)((long)puVar4 + lVar5 + 0x10) = *(undefined8 *)(lVar2 + lVar5);
      lVar5 = lVar5 + 8;
    } while (lVar6 != lVar5);
  }
  LOCK();
  plVar1 = (long *)(lVar2 + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    lVar5 = *(long *)this;
    *(undefined8 *)this = 0;
    Memory::free_static((void *)(lVar5 + -0x10),false);
  }
LAB_0010086f:
  *(undefined8 **)this = puVar4 + 2;
  return;
}



/* CowData<Vector2>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Vector2>::_copy_on_write(CowData<Vector2> *this)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  ulong uVar5;
  size_t __n;
  
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
  __n = lVar2 * 8;
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



/* AudioStreamPlaybackMicrophone::get_stream_sampling_rate() */

undefined8 AudioStreamPlaybackMicrophone::get_stream_sampling_rate(void)

{
  code *pcVar1;
  int iVar2;
  long *plVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  plVar3 = (long *)AudioDriver::get_singleton();
  pcVar1 = *(code **)(*plVar3 + 0x20);
  if (pcVar1 == AudioDriver::get_input_mix_rate) {
    iVar2 = (**(code **)(*plVar3 + 0x18))();
    auVar4._4_12_ = SUB1612((undefined1  [16])0x0,4);
    auVar4._0_4_ = (float)iVar2;
    return auVar4._0_8_;
  }
  iVar2 = (*pcVar1)(plVar3);
  auVar5._4_12_ = SUB1612((undefined1  [16])0x0,4);
  auVar5._0_4_ = (float)iVar2;
  return auVar5._0_8_;
}



/* AudioStreamPlaybackMicrophone::stop() */

void __thiscall AudioStreamPlaybackMicrophone::stop(AudioStreamPlaybackMicrophone *this)

{
  long *plVar1;
  
  if (this[0x6d0] == (AudioStreamPlaybackMicrophone)0x0) {
    return;
  }
  plVar1 = (long *)AudioDriver::get_singleton();
  if (*(code **)(*plVar1 + 0x70) != AudioDriver::input_stop) {
    (**(code **)(*plVar1 + 0x70))(plVar1);
  }
  this[0x6d0] = (AudioStreamPlaybackMicrophone)0x0;
  return;
}



/* AudioStreamPlayback::get_sample_playback() const */

AudioStreamPlayback * __thiscall AudioStreamPlayback::get_sample_playback(AudioStreamPlayback *this)

{
  *(undefined8 *)this = 0;
  return this;
}



/* AudioStreamRandomizer::get_stream_name() const */

AudioStreamRandomizer * __thiscall
AudioStreamRandomizer::get_stream_name(AudioStreamRandomizer *this)

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



/* AudioStreamMicrophone::get_stream_name() const */

AudioStreamMicrophone * __thiscall
AudioStreamMicrophone::get_stream_name(AudioStreamMicrophone *this)

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



/* AudioStreamPlaybackMicrophone::start(double) */

double AudioStreamPlaybackMicrophone::start(double param_1)

{
  bool bVar1;
  int iVar2;
  long *plVar3;
  long *in_RDI;
  long in_FS_OFFSET;
  double extraout_XMM0_Qa;
  double extraout_XMM0_Qa_00;
  double dVar4;
  long local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((char)in_RDI[0xda] == '\0') {
    ProjectSettings::get_singleton();
    StringName::StringName((StringName *)&local_50,"audio/driver/enable_input",false);
    ProjectSettings::get_setting_with_override((StringName *)local_48);
    bVar1 = Variant::operator_cast_to_bool((Variant *)local_48);
    if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_50 != 0)) {
      StringName::unref();
    }
    if (!bVar1) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        dVar4 = (double)_err_print_error("start","servers/audio/audio_stream.cpp",0x1c6,
                                         "You must enable the project setting \"audio/driver/enable_input\" to use audio capture."
                                         ,0,1);
        return dVar4;
      }
      goto LAB_00100ce5;
    }
    *(undefined4 *)((long)in_RDI + 0x6d4) = 0;
    plVar3 = (long *)AudioDriver::get_singleton();
    param_1 = extraout_XMM0_Qa;
    if (*(code **)(*plVar3 + 0x68) != AudioDriver::input_start) {
      iVar2 = (**(code **)(*plVar3 + 0x68))(plVar3);
      param_1 = extraout_XMM0_Qa_00;
      if (iVar2 == 0) {
        *(undefined1 *)(in_RDI + 0xda) = 1;
        *(undefined1 (*) [16])(in_RDI + 0x4e) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(in_RDI + 0x50) = (undefined1  [16])0x0;
        param_1 = (double)(**(code **)(*in_RDI + 0x1c0))();
        in_RDI[0xd3] = 0;
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
LAB_00100ce5:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Ref<AudioStream>::TEMPNAMEPLACEHOLDERVALUE(Ref<AudioStream> const&) [clone .isra.0] */

void __thiscall Ref<AudioStream>::operator=(Ref<AudioStream> *this,Ref *param_1)

{
  Object *pOVar1;
  char cVar2;
  
  pOVar1 = *(Object **)this;
  if (pOVar1 != (Object *)param_1) {
    *(Ref **)this = param_1;
    if (param_1 != (Ref *)0x0) {
      cVar2 = RefCounted::reference();
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



/* Ref<AudioStreamPlayback>::TEMPNAMEPLACEHOLDERVALUE(Ref<AudioStreamPlayback> const&) [clone
   .isra.0] */

void __thiscall Ref<AudioStreamPlayback>::operator=(Ref<AudioStreamPlayback> *this,Ref *param_1)

{
  Object *pOVar1;
  char cVar2;
  
  pOVar1 = *(Object **)this;
  if (pOVar1 != (Object *)param_1) {
    *(Ref **)this = param_1;
    if (param_1 != (Ref *)0x0) {
      cVar2 = RefCounted::reference();
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



/* CowData<Vector2>::_ref(CowData<Vector2> const&) [clone .part.0] */

void __thiscall CowData<Vector2>::_ref(CowData<Vector2> *this,CowData *param_1)

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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AudioStreamPlaybackRandomizer::start(double) */

void __thiscall
AudioStreamPlaybackRandomizer::start(AudioStreamPlaybackRandomizer *this,double param_1)

{
  Object *pOVar1;
  Object *pOVar2;
  char cVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  
  pOVar1 = *(Object **)(this + 0x278);
  pOVar2 = *(Object **)(this + 0x280);
  if (pOVar1 != pOVar2) {
    *(Object **)(this + 0x280) = pOVar1;
    if (pOVar1 != (Object *)0x0) {
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        *(undefined8 *)(this + 0x280) = 0;
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
  fVar5 = *(float *)(*(long *)(this + 0x270) + 0x3c8);
  fVar6 = _LC1 / fVar5;
  uVar4 = Math::rand();
  *(float *)(this + 0x288) = (float)uVar4 * __LC25 * (fVar5 - fVar6) + fVar6;
  fVar5 = *(float *)(*(long *)(this + 0x270) + 0x3cc);
  uVar4 = Math::rand();
  fVar5 = expf(((float)uVar4 * __LC25 * (fVar5 + fVar5) - fVar5) * __LC26);
  *(float *)(this + 0x28c) = fVar5;
  if (*(long **)(this + 0x280) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00100fa5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x280) + 0x150))(param_1);
    return;
  }
  return;
}



/* AudioStreamPlayback::~AudioStreamPlayback() */

void __thiscall AudioStreamPlayback::~AudioStreamPlayback(AudioStreamPlayback *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(undefined ***)this = &PTR__initialize_classv_0012dec8;
  if (bVar1) {
    if (*(long *)(this + 600) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00101150;
    }
    if (*(long *)(this + 0x240) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00101150;
    }
    if (*(long *)(this + 0x228) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00101150;
    }
    if (*(long *)(this + 0x210) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00101150;
    }
    if (*(long *)(this + 0x1f8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00101150;
    }
    if (*(long *)(this + 0x1e0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00101150;
    }
    if (*(long *)(this + 0x1c8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00101150;
    }
    if (*(long *)(this + 0x1b0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00101150;
    }
    if (*(long *)(this + 0x198) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00101150;
    }
    if (*(long *)(this + 0x180) != 0) {
      StringName::unref();
    }
  }
LAB_00101150:
  *(undefined ***)this = &PTR__initialize_classv_0012dc08;
  Object::~Object((Object *)this);
  return;
}



/* AudioStreamPlayback::~AudioStreamPlayback() */

void __thiscall AudioStreamPlayback::~AudioStreamPlayback(AudioStreamPlayback *this)

{
  ~AudioStreamPlayback(this);
  operator_delete(this,0x270);
  return;
}



/* AudioStreamPlaybackRandomizer::~AudioStreamPlaybackRandomizer() */

void __thiscall
AudioStreamPlaybackRandomizer::~AudioStreamPlaybackRandomizer(AudioStreamPlaybackRandomizer *this)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint *puVar4;
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
  ulong uVar43;
  uint *puVar44;
  ulong uVar45;
  ulong uVar46;
  uint uVar47;
  
  lVar6 = *(long *)(this + 0x270);
  *(undefined ***)this = &PTR__initialize_classv_0012eb00;
  lVar7 = *(long *)(lVar6 + 0x390);
  if ((lVar7 != 0) && (*(int *)(lVar6 + 0x3b4) != 0)) {
    lVar8 = *(long *)(lVar6 + 0x3a8);
    uVar34 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar6 + 0x3b0) * 4);
    uVar45 = CONCAT44(0,uVar34);
    lVar9 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar6 + 0x3b0) * 8);
    uVar35 = (long)this * 0x3ffff - 1;
    uVar35 = (uVar35 ^ uVar35 >> 0x1f) * 0x15;
    uVar35 = (uVar35 ^ uVar35 >> 0xb) * 0x41;
    uVar35 = uVar35 >> 0x16 ^ uVar35;
    uVar43 = uVar35 & 0xffffffff;
    if ((int)uVar35 == 0) {
      uVar43 = 1;
    }
    auVar13._8_8_ = 0;
    auVar13._0_8_ = uVar43 * lVar9;
    auVar23._8_8_ = 0;
    auVar23._0_8_ = uVar45;
    lVar40 = SUB168(auVar13 * auVar23,8);
    uVar47 = *(uint *)(lVar8 + lVar40 * 4);
    iVar38 = SUB164(auVar13 * auVar23,8);
    if (uVar47 != 0) {
      uVar36 = 0;
      do {
        if ((uint)uVar43 == uVar47) {
          lVar10 = *(long *)(lVar6 + 0x398);
          uVar47 = *(uint *)(lVar10 + lVar40 * 4);
          uVar35 = (ulong)uVar47;
          if (this == *(AudioStreamPlaybackRandomizer **)(lVar7 + uVar35 * 8)) {
            lVar11 = *(long *)(lVar6 + 0x3a0);
            puVar1 = (uint *)(lVar11 + uVar35 * 4);
            uVar36 = *puVar1;
            uVar43 = (ulong)uVar36;
            auVar17._8_8_ = 0;
            auVar17._0_8_ = (ulong)(uVar36 + 1) * lVar9;
            auVar27._8_8_ = 0;
            auVar27._0_8_ = uVar45;
            lVar40 = SUB168(auVar17 * auVar27,8) * 4;
            uVar39 = SUB164(auVar17 * auVar27,8);
            uVar46 = (ulong)uVar39;
            puVar42 = (uint *)(lVar8 + lVar40);
            if ((*puVar42 == 0) ||
               (auVar18._8_8_ = 0, auVar18._0_8_ = (ulong)*puVar42 * lVar9, auVar28._8_8_ = 0,
               auVar28._0_8_ = uVar45, auVar19._8_8_ = 0,
               auVar19._0_8_ = (ulong)((uVar39 + uVar34) - SUB164(auVar18 * auVar28,8)) * lVar9,
               auVar29._8_8_ = 0, auVar29._0_8_ = uVar45, SUB164(auVar19 * auVar29,8) == 0)) {
              uVar46 = (ulong)uVar36;
            }
            else {
              while( true ) {
                puVar37 = (uint *)(lVar40 + lVar10);
                puVar4 = (uint *)(lVar10 + uVar43 * 4);
                puVar44 = (uint *)(uVar43 * 4 + lVar8);
                puVar2 = (undefined4 *)(lVar11 + (ulong)*puVar37 * 4);
                puVar3 = (undefined4 *)(lVar11 + (ulong)*puVar4 * 4);
                uVar5 = *puVar3;
                *puVar3 = *puVar2;
                *puVar2 = uVar5;
                uVar36 = *puVar42;
                *puVar42 = *puVar44;
                *puVar44 = uVar36;
                uVar36 = *puVar37;
                *puVar37 = *puVar4;
                *puVar4 = uVar36;
                auVar22._8_8_ = 0;
                auVar22._0_8_ = (ulong)((int)uVar46 + 1) * lVar9;
                auVar32._8_8_ = 0;
                auVar32._0_8_ = uVar45;
                uVar41 = SUB168(auVar22 * auVar32,8);
                lVar40 = uVar41 * 4;
                puVar42 = (uint *)(lVar8 + lVar40);
                if ((*puVar42 == 0) ||
                   (auVar20._8_8_ = 0, auVar20._0_8_ = (ulong)*puVar42 * lVar9, auVar30._8_8_ = 0,
                   auVar30._0_8_ = uVar45, auVar21._8_8_ = 0,
                   auVar21._0_8_ =
                        (ulong)((SUB164(auVar22 * auVar32,8) + uVar34) - SUB164(auVar20 * auVar30,8)
                               ) * lVar9, auVar31._8_8_ = 0, auVar31._0_8_ = uVar45,
                   SUB164(auVar21 * auVar31,8) == 0)) break;
                uVar43 = uVar46;
                uVar46 = uVar41 & 0xffffffff;
              }
            }
            *(undefined4 *)(lVar8 + uVar46 * 4) = 0;
            uVar34 = *(int *)(lVar6 + 0x3b4) - 1;
            *(uint *)(lVar6 + 0x3b4) = uVar34;
            if (uVar47 < uVar34) {
              uVar36 = *(uint *)(lVar11 + (ulong)uVar34 * 4);
              *(undefined8 *)(lVar7 + uVar35 * 8) = *(undefined8 *)(lVar7 + (ulong)uVar34 * 8);
              *puVar1 = uVar36;
              *(uint *)(lVar10 + (ulong)*(uint *)(lVar11 + (ulong)*(uint *)(lVar6 + 0x3b4) * 4) * 4)
                   = uVar47;
            }
            break;
          }
        }
        uVar36 = uVar36 + 1;
        auVar14._8_8_ = 0;
        auVar14._0_8_ = (ulong)(iVar38 + 1) * lVar9;
        auVar24._8_8_ = 0;
        auVar24._0_8_ = uVar45;
        lVar40 = SUB168(auVar14 * auVar24,8);
        uVar47 = *(uint *)(lVar8 + lVar40 * 4);
        iVar38 = SUB164(auVar14 * auVar24,8);
      } while ((uVar47 != 0) &&
              (auVar15._8_8_ = 0, auVar15._0_8_ = (ulong)uVar47 * lVar9, auVar25._8_8_ = 0,
              auVar25._0_8_ = uVar45, auVar16._8_8_ = 0,
              auVar16._0_8_ = (ulong)((uVar34 + iVar38) - SUB164(auVar15 * auVar25,8)) * lVar9,
              auVar26._8_8_ = 0, auVar26._0_8_ = uVar45, uVar36 <= SUB164(auVar16 * auVar26,8)));
    }
  }
  if ((*(long *)(this + 0x280) != 0) && (cVar33 = RefCounted::unreference(), cVar33 != '\0')) {
    pOVar12 = *(Object **)(this + 0x280);
    cVar33 = predelete_handler(pOVar12);
    if (cVar33 != '\0') {
      (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
      Memory::free_static(pOVar12,false);
    }
  }
  if ((*(long *)(this + 0x278) != 0) && (cVar33 = RefCounted::unreference(), cVar33 != '\0')) {
    pOVar12 = *(Object **)(this + 0x278);
    cVar33 = predelete_handler(pOVar12);
    if (cVar33 != '\0') {
      (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
      Memory::free_static(pOVar12,false);
    }
  }
  if ((*(long *)(this + 0x270) != 0) && (cVar33 = RefCounted::unreference(), cVar33 != '\0')) {
    pOVar12 = *(Object **)(this + 0x270);
    cVar33 = predelete_handler(pOVar12);
    if (cVar33 != '\0') {
      (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
      Memory::free_static(pOVar12,false);
    }
  }
  AudioStreamPlayback::~AudioStreamPlayback((AudioStreamPlayback *)this);
  return;
}



/* AudioStreamPlaybackRandomizer::~AudioStreamPlaybackRandomizer() */

void __thiscall
AudioStreamPlaybackRandomizer::~AudioStreamPlaybackRandomizer(AudioStreamPlaybackRandomizer *this)

{
  ~AudioStreamPlaybackRandomizer(this);
  operator_delete(this,0x290);
  return;
}



/* AudioStreamPlaybackMicrophone::~AudioStreamPlaybackMicrophone() */

void __thiscall
AudioStreamPlaybackMicrophone::~AudioStreamPlaybackMicrophone(AudioStreamPlaybackMicrophone *this)

{
  uint *puVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  AudioStreamPlaybackMicrophone AVar5;
  undefined4 uVar6;
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
  long *plVar36;
  uint uVar37;
  uint *puVar38;
  int iVar39;
  uint uVar40;
  long lVar41;
  ulong uVar42;
  uint *puVar43;
  ulong uVar44;
  uint *puVar45;
  ulong uVar46;
  long lVar47;
  uint uVar48;
  ulong uVar49;
  bool bVar50;
  
  lVar47 = *(long *)(this + 0x6d8);
  *(undefined ***)this = &PTR__initialize_classv_0012e6e8;
  lVar7 = *(long *)(lVar47 + 0x348);
  if ((lVar7 != 0) && (*(int *)(lVar47 + 0x36c) != 0)) {
    lVar8 = *(long *)(lVar47 + 0x360);
    uVar34 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar47 + 0x368) * 4);
    lVar9 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar47 + 0x368) * 8);
    uVar46 = CONCAT44(0,uVar34);
    uVar35 = (long)this * 0x3ffff - 1;
    uVar35 = (uVar35 ^ uVar35 >> 0x1f) * 0x15;
    uVar35 = (uVar35 ^ uVar35 >> 0xb) * 0x41;
    uVar35 = uVar35 >> 0x16 ^ uVar35;
    uVar44 = uVar35 & 0xffffffff;
    if ((int)uVar35 == 0) {
      uVar44 = 1;
    }
    auVar13._8_8_ = 0;
    auVar13._0_8_ = uVar44 * lVar9;
    auVar23._8_8_ = 0;
    auVar23._0_8_ = uVar46;
    lVar41 = SUB168(auVar13 * auVar23,8);
    uVar48 = *(uint *)(lVar8 + lVar41 * 4);
    iVar39 = SUB164(auVar13 * auVar23,8);
    if (uVar48 != 0) {
      uVar37 = 0;
LAB_001016cd:
      if ((uint)uVar44 != uVar48) goto LAB_00101680;
      lVar10 = *(long *)(lVar47 + 0x350);
      uVar48 = *(uint *)(lVar10 + lVar41 * 4);
      uVar35 = (ulong)uVar48;
      if (this != *(AudioStreamPlaybackMicrophone **)(lVar7 + uVar35 * 8)) goto LAB_00101680;
      lVar11 = *(long *)(lVar47 + 0x358);
      puVar1 = (uint *)(lVar11 + uVar35 * 4);
      uVar37 = *puVar1;
      uVar44 = (ulong)uVar37;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = (ulong)(uVar37 + 1) * lVar9;
      auVar27._8_8_ = 0;
      auVar27._0_8_ = uVar46;
      lVar41 = SUB168(auVar17 * auVar27,8) * 4;
      uVar40 = SUB164(auVar17 * auVar27,8);
      uVar49 = (ulong)uVar40;
      puVar43 = (uint *)(lVar8 + lVar41);
      if ((*puVar43 == 0) ||
         (auVar18._8_8_ = 0, auVar18._0_8_ = (ulong)*puVar43 * lVar9, auVar28._8_8_ = 0,
         auVar28._0_8_ = uVar46, auVar19._8_8_ = 0,
         auVar19._0_8_ = (ulong)((uVar34 + uVar40) - SUB164(auVar18 * auVar28,8)) * lVar9,
         auVar29._8_8_ = 0, auVar29._0_8_ = uVar46, SUB164(auVar19 * auVar29,8) == 0)) {
        uVar49 = (ulong)uVar37;
      }
      else {
        while( true ) {
          puVar38 = (uint *)(lVar41 + lVar10);
          puVar2 = (uint *)(lVar10 + uVar44 * 4);
          puVar45 = (uint *)(uVar44 * 4 + lVar8);
          puVar3 = (undefined4 *)(lVar11 + (ulong)*puVar38 * 4);
          puVar4 = (undefined4 *)(lVar11 + (ulong)*puVar2 * 4);
          uVar6 = *puVar4;
          *puVar4 = *puVar3;
          *puVar3 = uVar6;
          uVar37 = *puVar43;
          *puVar43 = *puVar45;
          *puVar45 = uVar37;
          uVar37 = *puVar38;
          *puVar38 = *puVar2;
          *puVar2 = uVar37;
          auVar22._8_8_ = 0;
          auVar22._0_8_ = (ulong)((int)uVar49 + 1) * lVar9;
          auVar32._8_8_ = 0;
          auVar32._0_8_ = uVar46;
          uVar42 = SUB168(auVar22 * auVar32,8);
          lVar41 = uVar42 * 4;
          puVar43 = (uint *)(lVar8 + lVar41);
          if ((*puVar43 == 0) ||
             (auVar20._8_8_ = 0, auVar20._0_8_ = (ulong)*puVar43 * lVar9, auVar30._8_8_ = 0,
             auVar30._0_8_ = uVar46, auVar21._8_8_ = 0,
             auVar21._0_8_ =
                  (ulong)((SUB164(auVar22 * auVar32,8) + uVar34) - SUB164(auVar20 * auVar30,8)) *
                  lVar9, auVar31._8_8_ = 0, auVar31._0_8_ = uVar46, SUB164(auVar21 * auVar31,8) == 0
             )) break;
          uVar44 = uVar49;
          uVar49 = uVar42 & 0xffffffff;
        }
      }
      *(undefined4 *)(lVar8 + uVar49 * 4) = 0;
      uVar34 = *(int *)(lVar47 + 0x36c) - 1;
      *(uint *)(lVar47 + 0x36c) = uVar34;
      if (uVar34 <= uVar48) goto LAB_0010181a;
      uVar37 = *(uint *)(lVar11 + (ulong)uVar34 * 4);
      AVar5 = this[0x6d0];
      *(undefined8 *)(lVar7 + uVar35 * 8) = *(undefined8 *)(lVar7 + (ulong)uVar34 * 8);
      *puVar1 = uVar37;
      *(uint *)(lVar10 + (ulong)*(uint *)(lVar11 + (ulong)*(uint *)(lVar47 + 0x36c) * 4) * 4) =
           uVar48;
      goto joined_r0x001018c9;
    }
  }
LAB_0010181a:
  AVar5 = this[0x6d0];
joined_r0x001018c9:
  if (AVar5 != (AudioStreamPlaybackMicrophone)0x0) goto LAB_001018cf;
LAB_00101828:
  cVar33 = RefCounted::unreference();
  if (cVar33 != '\0') {
    pOVar12 = *(Object **)(this + 0x6d8);
    cVar33 = predelete_handler(pOVar12);
    if (cVar33 != '\0') {
      (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
      Memory::free_static(pOVar12,false);
    }
  }
LAB_00101838:
  bVar50 = StringName::configured != '\0';
  *(undefined ***)this = &PTR__initialize_classv_0012e098;
  if ((bVar50) &&
     (((*(long *)(this + 0x6b8) == 0 || (StringName::unref(), StringName::configured != '\0')) &&
      (*(long *)(this + 0x6a0) != 0)))) {
    StringName::unref();
  }
  AudioStreamPlayback::~AudioStreamPlayback((AudioStreamPlayback *)this);
  return;
LAB_00101680:
  uVar37 = uVar37 + 1;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = (ulong)(iVar39 + 1) * lVar9;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = uVar46;
  lVar41 = SUB168(auVar14 * auVar24,8);
  uVar48 = *(uint *)(lVar8 + lVar41 * 4);
  iVar39 = SUB164(auVar14 * auVar24,8);
  if ((uVar48 == 0) ||
     (auVar15._8_8_ = 0, auVar15._0_8_ = (ulong)uVar48 * lVar9, auVar25._8_8_ = 0,
     auVar25._0_8_ = uVar46, auVar16._8_8_ = 0,
     auVar16._0_8_ = (ulong)((uVar34 + iVar39) - SUB164(auVar15 * auVar25,8)) * lVar9,
     auVar26._8_8_ = 0, auVar26._0_8_ = uVar46, SUB164(auVar16 * auVar26,8) < uVar37))
  goto LAB_00101960;
  goto LAB_001016cd;
LAB_00101960:
  if (this[0x6d0] != (AudioStreamPlaybackMicrophone)0x0) {
LAB_001018cf:
    plVar36 = (long *)AudioDriver::get_singleton();
    if (*(code **)(*plVar36 + 0x70) != AudioDriver::input_stop) {
      (**(code **)(*plVar36 + 0x70))(plVar36);
    }
    this[0x6d0] = (AudioStreamPlaybackMicrophone)0x0;
    lVar47 = *(long *)(this + 0x6d8);
  }
  if (lVar47 == 0) goto LAB_00101838;
  goto LAB_00101828;
}



/* AudioStreamPlaybackMicrophone::~AudioStreamPlaybackMicrophone() */

void __thiscall
AudioStreamPlaybackMicrophone::~AudioStreamPlaybackMicrophone(AudioStreamPlaybackMicrophone *this)

{
  ~AudioStreamPlaybackMicrophone(this);
  operator_delete(this,0x6e0);
  return;
}



/* AudioStream::generate_sample() const */

void AudioStream::generate_sample(void)

{
  Object *pOVar1;
  code *pcVar2;
  undefined8 uVar3;
  char cVar4;
  RefCounted *this;
  Object *pOVar5;
  long lVar6;
  Object *pOVar7;
  Object *in_RSI;
  undefined8 *in_RDI;
  RefCounted *pRVar8;
  long in_FS_OFFSET;
  byte bVar9;
  int local_48 [6];
  long local_30;
  
  bVar9 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(code **)(*(long *)in_RSI + 0x210) != can_be_sampled) {
    cVar4 = (**(code **)(*(long *)in_RSI + 0x210))();
    if (cVar4 != '\0') {
      this = (RefCounted *)operator_new(0x1b0,"");
      pRVar8 = this;
      for (lVar6 = 0x36; lVar6 != 0; lVar6 = lVar6 + -1) {
        *(undefined8 *)pRVar8 = 0;
        pRVar8 = pRVar8 + (ulong)bVar9 * -0x10 + 8;
      }
      RefCounted::RefCounted(this);
      *(undefined8 *)(this + 0x180) = 0;
      *(undefined ***)this = &PTR__initialize_classv_0012dd68;
      uVar3 = _LC38;
      *(undefined8 *)(this + 400) = 0;
      *(undefined8 *)(this + 0x198) = uVar3;
      *(undefined4 *)(this + 0x1a0) = 0;
      *(undefined8 *)(this + 0x1a4) = 0;
      postinitialize_handler((Object *)this);
      cVar4 = RefCounted::init_ref();
      if (cVar4 == '\0') {
        Variant::Variant((Variant *)local_48,in_RSI);
        Variant::get_validated_object();
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      cVar4 = RefCounted::reference();
      pOVar7 = (Object *)0x0;
      if (cVar4 != '\0') {
        pOVar7 = (Object *)this;
      }
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') {
        cVar4 = predelete_handler((Object *)this);
        if (cVar4 != '\0') {
          (**(code **)(*(long *)this + 0x140))(this);
          Memory::free_static(this,false);
        }
      }
      Variant::Variant((Variant *)local_48,in_RSI);
      pOVar5 = (Object *)Variant::get_validated_object();
      pOVar1 = *(Object **)(pOVar7 + 0x180);
      if (pOVar5 != pOVar1) {
        if (pOVar5 == (Object *)0x0) {
          if (pOVar1 != (Object *)0x0) {
            *(undefined8 *)(pOVar7 + 0x180) = 0;
LAB_00101b36:
            cVar4 = RefCounted::unreference();
            if (cVar4 != '\0') {
              cVar4 = predelete_handler(pOVar1);
              if (cVar4 != '\0') {
                (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
                Memory::free_static(pOVar1,false);
              }
            }
          }
        }
        else {
          pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&typeinfo,0);
          if (pOVar1 != pOVar5) {
            *(Object **)(pOVar7 + 0x180) = pOVar5;
            if (pOVar5 != (Object *)0x0) {
              cVar4 = RefCounted::reference();
              if (cVar4 == '\0') {
                *(undefined8 *)(pOVar7 + 0x180) = 0;
              }
            }
            if (pOVar1 != (Object *)0x0) goto LAB_00101b36;
          }
        }
      }
      if (Variant::needs_deinit[local_48[0]] != '\0') {
        Variant::_clear_internal();
      }
      *in_RDI = pOVar7;
      cVar4 = RefCounted::reference();
      if (cVar4 == '\0') {
        *in_RDI = 0;
      }
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') {
        cVar4 = predelete_handler(pOVar7);
        if (cVar4 != '\0') {
          (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
          Memory::free_static(pOVar7,false);
        }
      }
      goto LAB_001019fe;
    }
  }
  _err_print_error("generate_sample","servers/audio/audio_stream.cpp",0x14c,
                   "Condition \"!can_be_sampled()\" is true. Returning: nullptr",
                   "Cannot generate a sample for a stream that cannot be sampled.",0,0);
  *in_RDI = 0;
LAB_001019fe:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AudioStreamRandomizer::get_stream(int) const */

long * AudioStreamRandomizer::get_stream(int param_1)

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
  lVar1 = *(long *)(in_RSI + 0x3c0);
  if (in_EDX < 0) {
    if (lVar1 != 0) {
      lVar5 = *(long *)(lVar1 + -8);
      goto LAB_00101cc1;
    }
  }
  else if (lVar1 != 0) {
    lVar5 = *(long *)(lVar1 + -8);
    if (lVar3 < lVar5) {
      *plVar4 = 0;
      lVar1 = *(long *)(lVar1 + lVar3 * 0x10);
      if (lVar1 != 0) {
        *plVar4 = lVar1;
        cVar2 = RefCounted::reference();
        if (cVar2 == '\0') {
          *plVar4 = 0;
        }
      }
      return plVar4;
    }
    goto LAB_00101cc1;
  }
  lVar5 = 0;
LAB_00101cc1:
  _err_print_index_error
            ("get_stream","servers/audio/audio_stream.cpp",0x221,lVar3,lVar5,"p_index",
             "audio_stream_pool.size()","",false,false);
  *plVar4 = 0;
  return plVar4;
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



/* PropertyInfo::TEMPNAMEPLACEHOLDERVALUE(PropertyInfo&&) [clone .isra.0] */

void __thiscall PropertyInfo::operator=(PropertyInfo *this,PropertyInfo *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 8);
  *(undefined4 *)this = *(undefined4 *)param_1;
  lVar2 = *(long *)(this + 8);
  if (lVar2 != lVar3) {
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar3 = *(long *)(this + 8);
        *(undefined8 *)(this + 8) = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
        lVar3 = *(long *)(param_1 + 8);
      }
      else {
        *(undefined8 *)(this + 8) = 0;
        lVar3 = *(long *)(param_1 + 8);
      }
    }
    *(long *)(this + 8) = lVar3;
    *(undefined8 *)(param_1 + 8) = 0;
  }
  if (*(long *)(this + 0x10) != *(long *)(param_1 + 0x10)) {
    StringName::unref();
    *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  lVar3 = *(long *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  lVar2 = *(long *)(this + 0x20);
  if (lVar2 != lVar3) {
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar3 = *(long *)(this + 0x20);
        *(undefined8 *)(this + 0x20) = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
        lVar3 = *(long *)(param_1 + 0x20);
      }
      else {
        *(undefined8 *)(this + 0x20) = 0;
        lVar3 = *(long *)(param_1 + 0x20);
      }
    }
    *(long *)(this + 0x20) = lVar3;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  return;
}



/* AudioStreamPlayback::AudioStreamPlayback() */

void __thiscall AudioStreamPlayback::AudioStreamPlayback(AudioStreamPlayback *this)

{
  RefCounted::RefCounted((RefCounted *)this);
  *(undefined ***)this = &PTR__initialize_classv_0012dec8;
  StringName::StringName((StringName *)(this + 0x180),"_start",false);
  this[0x188] = (AudioStreamPlayback)0x0;
  *(undefined8 *)(this + 400) = 0;
  StringName::StringName((StringName *)(this + 0x198),"_stop",false);
  this[0x1a0] = (AudioStreamPlayback)0x0;
  *(undefined8 *)(this + 0x1a8) = 0;
  StringName::StringName((StringName *)(this + 0x1b0),"_is_playing",false);
  this[0x1b8] = (AudioStreamPlayback)0x0;
  *(undefined8 *)(this + 0x1c0) = 0;
  StringName::StringName((StringName *)(this + 0x1c8),"_get_loop_count",false);
  this[0x1d0] = (AudioStreamPlayback)0x0;
  *(undefined8 *)(this + 0x1d8) = 0;
  StringName::StringName((StringName *)(this + 0x1e0),"_get_playback_position",false);
  this[0x1e8] = (AudioStreamPlayback)0x0;
  *(undefined8 *)(this + 0x1f0) = 0;
  StringName::StringName((StringName *)(this + 0x1f8),"_seek",false);
  this[0x200] = (AudioStreamPlayback)0x0;
  *(undefined8 *)(this + 0x208) = 0;
  StringName::StringName((StringName *)(this + 0x210),"_mix",false);
  this[0x218] = (AudioStreamPlayback)0x0;
  *(undefined8 *)(this + 0x220) = 0;
  StringName::StringName((StringName *)(this + 0x228),"_tag_used_streams",false);
  this[0x230] = (AudioStreamPlayback)0x0;
  *(undefined8 *)(this + 0x238) = 0;
  StringName::StringName((StringName *)(this + 0x240),"_set_parameter",false);
  this[0x248] = (AudioStreamPlayback)0x0;
  *(undefined8 *)(this + 0x250) = 0;
  StringName::StringName((StringName *)(this + 600),"_get_parameter",false);
  this[0x260] = (AudioStreamPlayback)0x0;
  *(undefined8 *)(this + 0x268) = 0;
  return;
}



/* AudioStream::tag_used(float) */

void __thiscall AudioStream::tag_used(AudioStream *this,float param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = *(long *)(this + 0x240);
  AudioServer::get_singleton();
  lVar3 = AudioServer::get_mixed_frames();
  if (lVar1 != lVar3) {
    *(undefined8 *)(this + 0x248) = 0;
    AudioServer::get_singleton();
    uVar4 = AudioServer::get_mixed_frames();
    *(undefined8 *)(this + 0x240) = uVar4;
  }
  uVar2 = *(ulong *)(this + 0x248);
  if (uVar2 < 8) {
    *(ulong *)(this + 0x248) = uVar2 + 1;
    *(float *)(this + uVar2 * 4 + 0x250) = param_1;
  }
  return;
}



/* AudioStreamPlaybackMicrophone::tag_used_streams() */

void __thiscall AudioStreamPlaybackMicrophone::tag_used_streams(AudioStreamPlaybackMicrophone *this)

{
  AudioStream::tag_used(*(AudioStream **)(this + 0x6d8),0.0);
  return;
}



/* AudioStreamPlaybackRandomizer::tag_used_streams() */

void __thiscall AudioStreamPlaybackRandomizer::tag_used_streams(AudioStreamPlaybackRandomizer *this)

{
  Object *pOVar1;
  char cVar2;
  
  pOVar1 = *(Object **)(this + 0x280);
  if (pOVar1 != (Object *)0x0) {
    cVar2 = RefCounted::reference();
    if (cVar2 != '\0') {
      (**(code **)(*(long *)pOVar1 + 0x180))(pOVar1);
      AudioStream::tag_used(*(AudioStream **)(this + 0x270),0.0);
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
        cVar2 = predelete_handler(pOVar1);
        if (cVar2 != '\0') {
          (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
          Memory::free_static(pOVar1,false);
          return;
        }
      }
      return;
    }
  }
  AudioStream::tag_used(*(AudioStream **)(this + 0x270),0.0);
  return;
}



/* AudioStream::get_tagged_frame() const */

undefined8 __thiscall AudioStream::get_tagged_frame(AudioStream *this)

{
  return *(undefined8 *)(this + 0x240);
}



/* AudioStream::get_tagged_frame_count() const */

undefined4 __thiscall AudioStream::get_tagged_frame_count(AudioStream *this)

{
  return *(undefined4 *)(this + 0x248);
}



/* AudioStream::get_tagged_frame_offset(int) const */

undefined4 __thiscall AudioStream::get_tagged_frame_offset(AudioStream *this,int param_1)

{
  if ((uint)param_1 < 8) {
    return *(undefined4 *)(this + (long)param_1 * 4 + 0x250);
  }
  _err_print_index_error
            ("get_tagged_frame_offset","servers/audio/audio_stream.cpp",0x13d,(long)param_1,8,
             "p_index","MAX_TAGGED_OFFSETS","",false,false);
  return 0;
}



/* AudioStreamPlaybackMicrophone::AudioStreamPlaybackMicrophone() */

void __thiscall
AudioStreamPlaybackMicrophone::AudioStreamPlaybackMicrophone(AudioStreamPlaybackMicrophone *this)

{
  ulong uVar1;
  undefined8 *puVar2;
  byte bVar3;
  
  bVar3 = 0;
  AudioStreamPlayback::AudioStreamPlayback((AudioStreamPlayback *)this);
  *(undefined ***)this = &PTR__initialize_classv_0012e098;
  *(undefined8 *)(this + 0x270) = 0;
  *(undefined8 *)(this + 0x688) = 0;
  puVar2 = (undefined8 *)((ulong)(this + 0x278) & 0xfffffffffffffff8);
  for (uVar1 = (ulong)(((int)this - (int)(undefined8 *)((ulong)(this + 0x278) & 0xfffffffffffffff8))
                       + 0x690U >> 3); uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * -2 + 1;
  }
  *(undefined4 *)(this + 0x690) = 0xffffffff;
  *(undefined8 *)(this + 0x698) = 0;
  StringName::StringName((StringName *)(this + 0x6a0),"_mix_resampled",false);
  this[0x6a8] = (AudioStreamPlaybackMicrophone)0x0;
  *(undefined8 *)(this + 0x6b0) = 0;
  StringName::StringName((StringName *)(this + 0x6b8),"_get_stream_sampling_rate",false);
  this[0x6c0] = (AudioStreamPlaybackMicrophone)0x0;
  *(undefined8 *)(this + 0x6c8) = 0;
  *(undefined8 *)(this + 0x698) = 0;
  *(undefined ***)this = &PTR__initialize_classv_0012e6e8;
  this[0x6d0] = (AudioStreamPlaybackMicrophone)0x0;
  *(undefined4 *)(this + 0x6d4) = 0;
  *(undefined8 *)(this + 0x6d8) = 0;
  return;
}



/* AudioStreamRandomizer::AudioStreamRandomizer() */

void __thiscall AudioStreamRandomizer::AudioStreamRandomizer(AudioStreamRandomizer *this)

{
  undefined8 uVar1;
  
  Resource::Resource((Resource *)this);
  *(undefined ***)this = &PTR__initialize_classv_0012e278;
  *(undefined1 (*) [16])(this + 0x240) = (undefined1  [16])0x0;
  StringName::StringName((StringName *)(this + 0x270),"_instantiate_playback",false);
  this[0x278] = (AudioStreamRandomizer)0x0;
  *(undefined8 *)(this + 0x280) = 0;
  StringName::StringName((StringName *)(this + 0x288),"_get_stream_name",false);
  this[0x290] = (AudioStreamRandomizer)0x0;
  *(undefined8 *)(this + 0x298) = 0;
  StringName::StringName((StringName *)(this + 0x2a0),"_get_length",false);
  this[0x2a8] = (AudioStreamRandomizer)0x0;
  *(undefined8 *)(this + 0x2b0) = 0;
  StringName::StringName((StringName *)(this + 0x2b8),"_is_monophonic",false);
  this[0x2c0] = (AudioStreamRandomizer)0x0;
  *(undefined8 *)(this + 0x2c8) = 0;
  StringName::StringName((StringName *)(this + 0x2d0),"_get_bpm",false);
  this[0x2d8] = (AudioStreamRandomizer)0x0;
  *(undefined8 *)(this + 0x2e0) = 0;
  StringName::StringName((StringName *)(this + 0x2e8),"_has_loop",false);
  this[0x2f0] = (AudioStreamRandomizer)0x0;
  *(undefined8 *)(this + 0x2f8) = 0;
  StringName::StringName((StringName *)(this + 0x300),"_get_bar_beats",false);
  this[0x308] = (AudioStreamRandomizer)0x0;
  *(undefined8 *)(this + 0x310) = 0;
  StringName::StringName((StringName *)(this + 0x318),"_get_beat_count",false);
  this[800] = (AudioStreamRandomizer)0x0;
  *(undefined8 *)(this + 0x328) = 0;
  StringName::StringName((StringName *)(this + 0x330),"_get_parameter_list",false);
  this[0x338] = (AudioStreamRandomizer)0x0;
  *(undefined ***)this = &PTR__initialize_classv_0012e8c8;
  uVar1 = _LC67;
  *(undefined8 *)(this + 0x350) = 0;
  *(undefined8 *)(this + 0x380) = uVar1;
  *(undefined8 *)(this + 0x3a8) = 0;
  *(undefined8 *)(this + 0x3b0) = uVar1;
  *(undefined8 *)(this + 0x3c0) = 0;
  *(undefined8 *)(this + 0x3c8) = 0x3f800000;
  *(undefined8 *)(this + 0x3d0) = 0;
  *(undefined4 *)(this + 0x3d8) = 0;
  *(undefined1 (*) [16])(this + 0x340) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x360) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x370) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x388) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x398) = (undefined1  [16])0x0;
  PropertyListHelper::setup_for_instance
            ((PropertyListHelper *)(this + 0x348),(Object *)base_property_helper);
  return;
}



/* AudioStreamMicrophone::instantiate_playback() */

void AudioStreamMicrophone::instantiate_playback(void)

{
  Object *pOVar1;
  char cVar2;
  AudioStreamPlayback *this;
  long lVar3;
  ulong uVar4;
  Object *pOVar5;
  AudioStreamPlayback *pAVar6;
  Object *in_RSI;
  long *in_RDI;
  undefined8 *puVar7;
  long in_FS_OFFSET;
  byte bVar8;
  AudioStreamPlaybackMicrophone *local_48 [3];
  long local_30;
  
  bVar8 = 0;
  pAVar6 = (AudioStreamPlayback *)0x0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  this = (AudioStreamPlayback *)operator_new(0x6e0,"");
  AudioStreamPlayback::AudioStreamPlayback(this);
  *(undefined ***)this = &PTR__initialize_classv_0012e098;
  *(undefined8 *)(this + 0x270) = 0;
  *(undefined8 *)(this + 0x688) = 0;
  puVar7 = (undefined8 *)((ulong)(this + 0x278) & 0xfffffffffffffff8);
  for (uVar4 = (ulong)(((int)this - (int)(undefined8 *)((ulong)(this + 0x278) & 0xfffffffffffffff8))
                       + 0x690U >> 3); uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar7 = 0;
    puVar7 = puVar7 + (ulong)bVar8 * -2 + 1;
  }
  *(undefined4 *)(this + 0x690) = 0xffffffff;
  *(undefined8 *)(this + 0x698) = 0;
  StringName::StringName((StringName *)(this + 0x6a0),"_mix_resampled",false);
  this[0x6a8] = (AudioStreamPlayback)0x0;
  *(undefined8 *)(this + 0x6b0) = 0;
  StringName::StringName((StringName *)(this + 0x6b8),"_get_stream_sampling_rate",false);
  this[0x6c0] = (AudioStreamPlayback)0x0;
  *(undefined ***)this = &PTR__initialize_classv_0012e6e8;
  *(undefined8 *)(this + 0x6c8) = 0;
  *(undefined8 *)(this + 0x698) = 0;
  this[0x6d0] = (AudioStreamPlayback)0x0;
  *(undefined4 *)(this + 0x6d4) = 0;
  *(undefined8 *)(this + 0x6d8) = 0;
  postinitialize_handler((Object *)this);
  cVar2 = RefCounted::init_ref();
  if (cVar2 != '\0') {
    cVar2 = RefCounted::reference();
    if (cVar2 != '\0') {
      pAVar6 = this;
    }
    cVar2 = RefCounted::unreference();
    if ((cVar2 != '\0') && (cVar2 = predelete_handler((Object *)this), cVar2 != '\0')) {
      (**(code **)(*(long *)this + 0x140))(this);
      Memory::free_static(this,false);
    }
  }
  HashSet<AudioStreamPlaybackMicrophone*,HashMapHasherDefault,HashMapComparatorDefault<AudioStreamPlaybackMicrophone*>>
  ::insert(local_48);
  cVar2 = RefCounted::init_ref();
  pOVar1 = *(Object **)((Object *)pAVar6 + 0x6d8);
  if (cVar2 == '\0') {
    if (pOVar1 != (Object *)0x0) {
      *(undefined8 *)((Object *)pAVar6 + 0x6d8) = 0;
      cVar2 = RefCounted::unreference();
      if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar1), cVar2 != '\0')) {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  else {
    pOVar5 = pOVar1;
    if (in_RSI != pOVar1) {
      *(Object **)((Object *)pAVar6 + 0x6d8) = in_RSI;
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        *(undefined8 *)((Object *)pAVar6 + 0x6d8) = 0;
      }
      pOVar5 = in_RSI;
      if (((pOVar1 != (Object *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) &&
         (cVar2 = predelete_handler(pOVar1), cVar2 != '\0')) {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
    cVar2 = RefCounted::unreference();
    if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar5), cVar2 != '\0')) {
      (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
      Memory::free_static(pOVar5,false);
      ((Object *)pAVar6)[0x6d0] = (Object)0x0;
      *in_RDI = 0;
      goto LAB_00102797;
    }
  }
  ((Object *)pAVar6)[0x6d0] = (Object)0x0;
  *in_RDI = 0;
LAB_00102797:
  lVar3 = __dynamic_cast(pAVar6,&Object::typeinfo,&AudioStreamPlayback::typeinfo,0);
  if (lVar3 != 0) {
    *in_RDI = lVar3;
    cVar2 = RefCounted::reference();
    if (cVar2 == '\0') {
      *in_RDI = 0;
    }
  }
  cVar2 = RefCounted::unreference();
  if ((cVar2 != '\0') && (cVar2 = predelete_handler((Object *)pAVar6), cVar2 != '\0')) {
    (**(code **)(*(long *)pAVar6 + 0x140))(pAVar6);
    Memory::free_static(pAVar6,false);
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* AudioStreamPlaybackMicrophone::_mix_internal(AudioFrame*, int) */

int __thiscall
AudioStreamPlaybackMicrophone::_mix_internal
          (AudioStreamPlaybackMicrophone *this,AudioFrame *param_1,int param_2)

{
  uint uVar1;
  AudioFrame *pAVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  code *pcVar7;
  float fVar8;
  char cVar9;
  int iVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  uint uVar15;
  long lVar16;
  int *piVar17;
  int *piVar18;
  int iVar19;
  long in_FS_OFFSET;
  bool bVar20;
  undefined8 uVar21;
  String *local_e0;
  undefined8 local_c8;
  undefined8 local_c0;
  String local_b8 [8];
  CowData<char32_t> local_b0 [8];
  String local_a8 [8];
  undefined8 local_a0;
  String local_98 [8];
  CowData<char32_t> local_90 [8];
  String local_88 [8];
  undefined8 local_80;
  String local_78 [8];
  CowData<char32_t> local_70 [8];
  String local_68 [8];
  Variant local_60 [8];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  plVar11 = (long *)AudioDriver::get_singleton();
  (**(code **)(*plVar11 + 0x38))(plVar11);
  lVar12 = AudioDriver::get_singleton();
  plVar11 = (long *)(*(long *)(lVar12 + 0x30) + -0x10);
  if (*(long *)(lVar12 + 0x30) != 0) {
    do {
      lVar13 = *plVar11;
      if (lVar13 == 0) goto LAB_001029b8;
      LOCK();
      lVar16 = *plVar11;
      bVar20 = lVar13 == lVar16;
      if (bVar20) {
        *plVar11 = lVar13 + 1;
        lVar16 = lVar13;
      }
      UNLOCK();
    } while (!bVar20);
    if (lVar16 != -1) {
      piVar18 = *(int **)(lVar12 + 0x30);
      goto LAB_001029bb;
    }
  }
LAB_001029b8:
  piVar18 = (int *)0x0;
LAB_001029bb:
  lVar12 = AudioDriver::get_singleton();
  uVar4 = *(uint *)(lVar12 + 0x3c);
  plVar11 = (long *)AudioDriver::get_singleton();
  pcVar7 = *(code **)(*plVar11 + 0x20);
  if (pcVar7 == AudioDriver::get_input_mix_rate) {
    iVar10 = (**(code **)(*plVar11 + 0x18))();
  }
  else {
    iVar10 = (*pcVar7)(plVar11);
  }
  if (piVar18 == (int *)0x0) {
    lVar12 = 0;
  }
  else {
    lVar12 = *(long *)(piVar18 + -2) >> 1;
  }
  lVar13 = AudioDriver::get_singleton();
  fVar8 = _LC78;
  uVar5 = *(uint *)(lVar13 + 0x38);
  uVar15 = (iVar10 / 0x14) * 2;
  if (lVar12 < (int)uVar15) {
    uVar15 = (uint)lVar12;
  }
  iVar10 = param_2;
  if (uVar4 < uVar15) {
    if (0 < param_2) {
      pAVar2 = param_1 + (long)param_2 * 8;
      do {
        *(undefined8 *)param_1 = 0;
        param_1 = param_1 + 8;
      } while (pAVar2 != param_1);
    }
    *(undefined4 *)(this + 0x6d4) = 0;
  }
  else {
    uVar15 = *(uint *)(this + 0x6d4);
    lVar12 = 0;
    iVar19 = param_2;
    if (0 < param_2) {
      do {
        if (uVar15 < uVar4) {
          if (piVar18 == (int *)0x0) {
            if ((long)(int)uVar15 < 0) {
              lVar13 = 0;
              *(uint *)(this + 0x6d4) = uVar15 + 1;
LAB_00102e77:
              uVar14 = (ulong)uVar15;
LAB_00102e95:
              _err_print_index_error
                        ("get","./core/templates/cowdata.h",0xdb,uVar14,lVar13,"p_index","size()",""
                         ,false,true);
              _err_flush_stdout();
                    /* WARNING: Does not return */
              pcVar7 = (code *)invalidInstructionException();
              (*pcVar7)();
            }
            goto LAB_00102da5;
          }
          lVar13 = *(long *)(piVar18 + -2);
          if (lVar13 <= (int)uVar15) goto LAB_00102da5;
          uVar1 = uVar15 + 1;
          *(uint *)(this + 0x6d4) = uVar1;
          if (lVar13 <= (long)(ulong)uVar15) goto LAB_00102e77;
          sVar3 = *(short *)((long)piVar18 + (ulong)uVar15 * 4 + 2);
          if ((int)uVar1 < lVar13) {
            uVar15 = uVar15 + 2;
            uVar14 = (ulong)uVar1;
            *(uint *)(this + 0x6d4) = uVar15;
            if (lVar13 <= (long)uVar14) goto LAB_00102e95;
            lVar16 = (long)(int)uVar15;
            piVar17 = piVar18 + uVar14;
          }
          else {
            lVar16 = 1;
            uVar15 = 1;
            *(undefined4 *)(this + 0x6d4) = 1;
            piVar17 = piVar18;
          }
          iVar6 = *piVar17;
          if (lVar13 <= lVar16) {
            uVar15 = 0;
          }
          *(uint *)(this + 0x6d4) = uVar15;
          uVar21 = CONCAT44((float)(iVar6 >> 0x10) * fVar8,(float)(int)sVar3 * fVar8);
        }
        else {
LAB_00102da5:
          bVar20 = param_2 == iVar10;
          uVar21 = 0;
          iVar10 = iVar19;
          if (bVar20) {
            iVar10 = (int)lVar12;
            iVar19 = (int)lVar12;
          }
        }
        *(undefined8 *)(param_1 + lVar12 * 8) = uVar21;
        lVar12 = lVar12 + 1;
      } while (lVar12 != param_2);
    }
    if (((uVar5 < uVar15) && ((int)(uVar15 - uVar5) < param_2 * 2)) &&
       (cVar9 = is_print_verbose_enabled(), cVar9 != '\0')) {
      itos((long)local_70);
      local_80 = 0;
      String::parse_latin1((String *)&local_80," input_size=");
      itos((long)local_90);
      local_a0 = 0;
      String::parse_latin1((String *)&local_a0," input_ofs=");
      itos((long)local_b0);
      local_c0 = 0;
      String::parse_latin1((String *)&local_c0," buffer underrun: input_position=");
      if (*(long *)(this + 8) == 0) {
        plVar11 = *(long **)(this + 0x118);
        if (plVar11 == (long *)0x0) {
          plVar11 = (long *)(**(code **)(*(long *)this + 0x40))(this);
        }
      }
      else {
        plVar11 = (long *)(*(long *)(this + 8) + 0x20);
      }
      lVar12 = *plVar11;
      if (lVar12 == 0) {
        local_c8 = 0;
      }
      else {
        local_c8 = 0;
        if (*(char **)(lVar12 + 8) == (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)(lVar12 + 0x10));
        }
        else {
          String::parse_latin1((String *)&local_c8,*(char **)(lVar12 + 8));
        }
      }
      local_e0 = (String *)&local_c8;
      String::operator+(local_b8,local_e0);
      String::operator+(local_a8,local_b8);
      String::operator+(local_98,local_a8);
      String::operator+(local_88,local_98);
      String::operator+(local_78,local_88);
      String::operator+(local_68,local_78);
      Variant::Variant((Variant *)local_58,local_68);
      stringify_variants(local_60);
      __print_line((String *)local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_e0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
      CowData<char32_t>::_unref(local_b0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
      CowData<char32_t>::_unref(local_90);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      CowData<char32_t>::_unref(local_70);
    }
  }
  plVar11 = (long *)AudioDriver::get_singleton();
  (**(code **)(*plVar11 + 0x40))(plVar11);
  if (piVar18 != (int *)0x0) {
    plVar11 = (long *)(piVar18 + -4);
    LOCK();
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (*plVar11 == 0) {
      Memory::free_static(plVar11,false);
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar10;
}



/* AudioStreamRandomizer::_bind_methods() */

void AudioStreamRandomizer::_bind_methods(void)

{
  StringName *this;
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  MethodBind *pMVar4;
  undefined4 *puVar5;
  uint uVar6;
  long in_FS_OFFSET;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  long local_170;
  long local_168;
  long local_160;
  char *local_158;
  undefined8 local_150;
  char *local_148;
  undefined8 local_140;
  long local_138;
  undefined4 local_130;
  CowData local_128 [8];
  undefined4 local_120;
  char *local_118;
  undefined *puStack_110;
  undefined8 local_108;
  char *local_f8;
  undefined *puStack_f0;
  undefined8 local_e8;
  char *local_d8;
  char *pcStack_d0;
  undefined8 local_c8;
  Variant *local_b8;
  undefined *puStack_b0;
  char *local_a8;
  undefined8 local_a0;
  Variant *local_98;
  undefined1 auStack_90 [16];
  ulong local_80;
  CowData<char32_t> local_78 [8];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  int local_68 [2];
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  long local_40;
  
  puVar3 = PTR__LC97_0012f830;
  puVar2 = PTR__LC96_0012f828;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_b8 = (Variant *)0x113c28;
  puStack_b0 = PTR__LC97_0012f830;
  local_a8 = "weight";
  local_a0 = 0;
  auStack_90._8_8_ = &local_a8;
  auStack_90._0_8_ = &puStack_b0;
  uVar6 = (uint)(Variant *)&local_98;
  local_98 = (Variant *)&local_b8;
  D_METHODP((char *)&local_148,(char ***)"add_stream",uVar6);
  Variant::Variant((Variant *)&local_98,_LC101);
  _local_78 = (undefined1  [16])0x0;
  local_80 = 0;
  local_b8 = (Variant *)&local_98;
  pMVar4 = create_method_bind<AudioStreamRandomizer,int,Ref<AudioStream>,float>(add_stream);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_148,&local_b8,1);
  if (Variant::needs_deinit[(int)local_80] == '\0') {
    cVar1 = Variant::needs_deinit[(int)local_98];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[(int)local_98];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_148);
  auStack_90._0_8_ = &pcStack_d0;
  local_c8 = 0;
  local_d8 = "index_from";
  pcStack_d0 = "index_to";
  local_98 = (Variant *)&local_d8;
  D_METHODP((char *)&local_148,(char ***)"move_stream",uVar6);
  auStack_90 = (undefined1  [16])0x0;
  local_98 = (Variant *)0x0;
  pMVar4 = create_method_bind<AudioStreamRandomizer,int,int>(move_stream);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_148,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_98] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_148);
  puStack_b0 = (undefined *)0x0;
  local_b8 = (Variant *)0x113c28;
  local_98 = (Variant *)&local_b8;
  D_METHODP((char *)&local_148,(char ***)"remove_stream",uVar6);
  auStack_90 = (undefined1  [16])0x0;
  local_98 = (Variant *)0x0;
  pMVar4 = create_method_bind<AudioStreamRandomizer,int>(remove_stream);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_148,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_98] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_148);
  local_e8 = 0;
  local_f8 = "index";
  puStack_f0 = puVar3;
  auStack_90._0_8_ = &puStack_f0;
  local_98 = (Variant *)&local_f8;
  D_METHODP((char *)&local_148,(char ***)"set_stream",uVar6);
  auStack_90 = (undefined1  [16])0x0;
  local_98 = (Variant *)0x0;
  pMVar4 = create_method_bind<AudioStreamRandomizer,int,Ref<AudioStream>>(set_stream);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_148,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_98] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_148);
  puStack_b0 = (undefined *)0x0;
  local_b8 = (Variant *)0x113c28;
  local_98 = (Variant *)&local_b8;
  D_METHODP((char *)&local_148,(char ***)"get_stream",uVar6);
  auStack_90 = (undefined1  [16])0x0;
  local_98 = (Variant *)0x0;
  pMVar4 = create_method_bind<AudioStreamRandomizer,Ref<AudioStream>,int>(get_stream);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_148,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_98] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_148);
  local_108 = 0;
  local_118 = "index";
  puStack_110 = puVar2;
  auStack_90._0_8_ = &puStack_110;
  local_98 = (Variant *)&local_118;
  D_METHODP((char *)&local_148,(char ***)"set_stream_probability_weight",uVar6);
  auStack_90 = (undefined1  [16])0x0;
  local_98 = (Variant *)0x0;
  pMVar4 = create_method_bind<AudioStreamRandomizer,int,float>(set_stream_probability_weight);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_148,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_98] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_148);
  puStack_b0 = (undefined *)0x0;
  local_b8 = (Variant *)0x113c28;
  local_98 = (Variant *)&local_b8;
  D_METHODP((char *)&local_148,(char ***)"get_stream_probability_weight",uVar6);
  auStack_90 = (undefined1  [16])0x0;
  local_98 = (Variant *)0x0;
  pMVar4 = create_method_bind<AudioStreamRandomizer,float,int>(get_stream_probability_weight);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_148,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_98] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_148);
  local_b8 = (Variant *)0x113c9e;
  puStack_b0 = (undefined *)0x0;
  local_98 = (Variant *)&local_b8;
  D_METHODP((char *)&local_148,(char ***)"set_streams_count",uVar6);
  auStack_90 = (undefined1  [16])0x0;
  local_98 = (Variant *)0x0;
  pMVar4 = create_method_bind<AudioStreamRandomizer,int>(set_streams_count);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_148,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_98] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_148);
  D_METHODP((char *)&local_148,(char ***)"get_streams_count",0);
  auStack_90 = (undefined1  [16])0x0;
  local_98 = (Variant *)0x0;
  pMVar4 = create_method_bind<AudioStreamRandomizer,int>(get_streams_count);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_148,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_98] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_148);
  local_b8 = (Variant *)0x113cc8;
  puStack_b0 = (undefined *)0x0;
  local_98 = (Variant *)&local_b8;
  D_METHODP((char *)&local_148,(char ***)"set_random_pitch",uVar6);
  auStack_90 = (undefined1  [16])0x0;
  local_98 = (Variant *)0x0;
  pMVar4 = create_method_bind<AudioStreamRandomizer,float>(set_random_pitch);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_148,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_98] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_148);
  D_METHODP((char *)&local_148,(char ***)"get_random_pitch",0);
  auStack_90 = (undefined1  [16])0x0;
  local_98 = (Variant *)0x0;
  pMVar4 = create_method_bind<AudioStreamRandomizer,float>(get_random_pitch);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_148,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_98] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_148);
  local_b8 = (Variant *)0x113cf0;
  puStack_b0 = (undefined *)0x0;
  local_98 = (Variant *)&local_b8;
  D_METHODP((char *)&local_148,(char ***)"set_random_volume_offset_db",uVar6);
  auStack_90 = (undefined1  [16])0x0;
  local_98 = (Variant *)0x0;
  pMVar4 = create_method_bind<AudioStreamRandomizer,float>(set_random_volume_offset_db);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_148,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_98] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_148);
  D_METHODP((char *)&local_148,(char ***)"get_random_volume_offset_db",0);
  auStack_90 = (undefined1  [16])0x0;
  local_98 = (Variant *)0x0;
  pMVar4 = create_method_bind<AudioStreamRandomizer,float>(get_random_volume_offset_db);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_148,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_98] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_148);
  puStack_b0 = (undefined *)0x0;
  local_b8 = (Variant *)&_LC115;
  local_98 = (Variant *)&local_b8;
  D_METHODP((char *)&local_148,(char ***)"set_playback_mode",uVar6);
  auStack_90 = (undefined1  [16])0x0;
  local_98 = (Variant *)0x0;
  pMVar4 = create_method_bind<AudioStreamRandomizer,AudioStreamRandomizer::PlaybackMode>
                     (set_playback_mode);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_148,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_98] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_148);
  D_METHODP((char *)&local_148,(char ***)"get_playback_mode",0);
  auStack_90 = (undefined1  [16])0x0;
  local_98 = (Variant *)0x0;
  pMVar4 = create_method_bind<AudioStreamRandomizer,AudioStreamRandomizer::PlaybackMode>
                     (get_playback_mode);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_148,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_98] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_148);
  _scs_create((char *)&local_160,true);
  _scs_create((char *)&local_168,true);
  local_148 = "Random (Avoid Repeats),Random,Sequential";
  local_170 = 0;
  local_178 = 0;
  local_140 = 0x28;
  String::parse_latin1((StrRange *)&local_178);
  local_148 = "playback_mode";
  local_180 = 0;
  local_140 = 0xd;
  String::parse_latin1((StrRange *)&local_180);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_148,2,(StrRange *)&local_180,2,(StrRange *)&local_178,6,
             (StrRange *)&local_170);
  local_188 = 0;
  local_158 = "AudioStreamRandomizer";
  local_150 = 0x15;
  String::parse_latin1((StrRange *)&local_188);
  StringName::StringName((StringName *)&local_158,(String *)&local_188,false);
  ClassDB::add_property
            ((StringName *)&local_158,(PropertyInfo *)&local_148,(StringName *)&local_168,
             (StringName *)&local_160,-1);
  if ((StringName::configured != '\0') && (local_158 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_148);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_180);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  if ((((StringName::configured != '\0') &&
       ((local_170 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_168 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_160 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_160,true);
  _scs_create((char *)&local_168,true);
  local_148 = "1,16,0.01";
  local_170 = 0;
  local_178 = 0;
  local_140 = 9;
  String::parse_latin1((StrRange *)&local_178);
  local_148 = "random_pitch";
  local_180 = 0;
  local_140 = 0xc;
  String::parse_latin1((StrRange *)&local_180);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_148,3,(StrRange *)&local_180,1,(StrRange *)&local_178,6,
             (StrRange *)&local_170);
  local_158 = "AudioStreamRandomizer";
  local_188 = 0;
  local_150 = 0x15;
  String::parse_latin1((StrRange *)&local_188);
  StringName::StringName((StringName *)&local_158,(String *)&local_188,false);
  ClassDB::add_property
            ((StringName *)&local_158,(PropertyInfo *)&local_148,(StringName *)&local_168,
             (StringName *)&local_160,-1);
  if ((StringName::configured != '\0') && (local_158 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_148);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_180);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  if (((StringName::configured != '\0') &&
      ((local_170 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (((local_168 == 0 || (StringName::unref(), StringName::configured != '\0')) && (local_160 != 0)
      ))) {
    StringName::unref();
  }
  _scs_create((char *)&local_160,true);
  _scs_create((char *)&local_168,true);
  local_148 = "0,40,0.01,suffix:dB";
  local_170 = 0;
  local_178 = 0;
  local_140 = 0x13;
  String::parse_latin1((StrRange *)&local_178);
  local_148 = "random_volume_offset_db";
  local_180 = 0;
  local_140 = 0x17;
  String::parse_latin1((StrRange *)&local_180);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_148,3,(StrRange *)&local_180,1,(StrRange *)&local_178,6,
             (StrRange *)&local_170);
  local_158 = "AudioStreamRandomizer";
  local_188 = 0;
  local_150 = 0x15;
  String::parse_latin1((StrRange *)&local_188);
  StringName::StringName((StringName *)&local_158,(String *)&local_188,false);
  ClassDB::add_property
            ((StringName *)&local_158,(PropertyInfo *)&local_148,(StringName *)&local_168,
             (StringName *)&local_160,-1);
  if ((StringName::configured != '\0') && (local_158 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_148);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_180);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  if ((((StringName::configured != '\0') &&
       ((local_170 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_168 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_160 != 0)) {
    StringName::unref();
  }
  local_158 = (char *)0x0;
  local_148 = "stream_";
  local_140 = 7;
  String::parse_latin1((StrRange *)&local_158);
  StringName::StringName((StringName *)&local_160,"streams",false);
  local_148 = "AudioStreamRandomizer";
  local_168 = 0;
  local_140 = 0x15;
  String::parse_latin1((StrRange *)&local_168);
  StringName::StringName((StringName *)&local_148,(String *)&local_168,false);
  ClassDB::add_property_array
            ((StringName *)&local_148,(StringName *)&local_160,(String *)&local_158);
  if ((StringName::configured != '\0') && (local_148 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  if ((StringName::configured != '\0') && (local_160 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
  _scs_create((char *)&local_160,true);
  _scs_create((char *)&local_168,true);
  local_148 = "";
  local_170 = 0;
  local_178 = 0;
  local_140 = 0;
  String::parse_latin1((StrRange *)&local_178);
  local_148 = "streams_count";
  local_180 = 0;
  local_140 = 0xd;
  String::parse_latin1((StrRange *)&local_180);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_148,2,(StrRange *)&local_180,0,(StrRange *)&local_178,2,
             (StrRange *)&local_170);
  local_158 = "AudioStreamRandomizer";
  local_188 = 0;
  local_150 = 0x15;
  String::parse_latin1((StrRange *)&local_188);
  StringName::StringName((StringName *)&local_158,(String *)&local_188,false);
  ClassDB::add_property
            ((StringName *)&local_158,(PropertyInfo *)&local_148,(StringName *)&local_168,
             (StringName *)&local_160,-1);
  if ((StringName::configured != '\0') && (local_158 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_148);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_180);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  if (((StringName::configured != '\0') &&
      ((local_170 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (((local_168 == 0 || (StringName::unref(), StringName::configured != '\0')) && (local_160 != 0)
      ))) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_158,"PLAYBACK_RANDOM_NO_REPEATS",false);
  local_168 = 0;
  local_148 = "PLAYBACK_RANDOM_NO_REPEATS";
  local_140 = 0x1a;
  String::parse_latin1((StrRange *)&local_168);
  GetTypeInfo<AudioStreamRandomizer::PlaybackMode,void>::get_class_info
            ((GetTypeInfo<AudioStreamRandomizer::PlaybackMode,void> *)&local_148);
  local_160 = local_138;
  local_138 = 0;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_148);
  local_148 = "AudioStreamRandomizer";
  local_170 = 0;
  local_140 = 0x15;
  String::parse_latin1((StrRange *)&local_170);
  StringName::StringName((StringName *)&local_148,(String *)&local_170,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_148,(StringName *)&local_160,(StringName *)&local_158,0,false);
  if ((StringName::configured != '\0') && (local_148 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_170);
  if ((StringName::configured != '\0') && (local_160 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  if ((StringName::configured != '\0') && (local_158 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_158,"PLAYBACK_RANDOM",false);
  local_168 = 0;
  local_148 = "PLAYBACK_RANDOM";
  local_140 = 0xf;
  String::parse_latin1((StrRange *)&local_168);
  GetTypeInfo<AudioStreamRandomizer::PlaybackMode,void>::get_class_info
            ((GetTypeInfo<AudioStreamRandomizer::PlaybackMode,void> *)&local_148);
  local_160 = local_138;
  local_138 = 0;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_148);
  local_148 = "AudioStreamRandomizer";
  local_170 = 0;
  local_140 = 0x15;
  String::parse_latin1((StrRange *)&local_170);
  StringName::StringName((StringName *)&local_148,(String *)&local_170,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_148,(StringName *)&local_160,(StringName *)&local_158,1,false);
  if ((StringName::configured != '\0') && (local_148 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_170);
  if ((StringName::configured != '\0') && (local_160 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  if ((StringName::configured != '\0') && (local_158 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_158,"PLAYBACK_SEQUENTIAL",false);
  local_168 = 0;
  local_148 = "PLAYBACK_SEQUENTIAL";
  local_140 = 0x13;
  String::parse_latin1((StrRange *)&local_168);
  GetTypeInfo<AudioStreamRandomizer::PlaybackMode,void>::get_class_info
            ((GetTypeInfo<AudioStreamRandomizer::PlaybackMode,void> *)&local_148);
  local_160 = local_138;
  local_138 = 0;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_148);
  local_148 = "AudioStreamRandomizer";
  local_170 = 0;
  local_140 = 0x15;
  String::parse_latin1((StrRange *)&local_170);
  StringName::StringName((StringName *)&local_148,(String *)&local_170,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_148,(StringName *)&local_160,(StringName *)&local_158,2,false);
  if ((StringName::configured != '\0') && (local_148 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_170);
  if ((StringName::configured != '\0') && (local_160 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  if ((StringName::configured != '\0') && (local_158 != (char *)0x0)) {
    StringName::unref();
  }
  local_158 = (char *)0x0;
  local_148 = "stream_";
  local_140 = 7;
  String::parse_latin1((StrRange *)&local_158);
  PropertyListHelper::set_prefix((String *)base_property_helper);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
  base_property_helper._8_8_ = create_method_bind<AudioStreamRandomizer,int>(get_streams_count);
  Variant::Variant((Variant *)&local_b8,(Object *)0x0);
  local_148 = "AudioStream";
  local_158 = (char *)0x0;
  local_160 = 0;
  local_140 = 0xb;
  String::parse_latin1((StrRange *)&local_160);
  local_168 = 0;
  local_148 = "stream";
  local_140 = 6;
  String::parse_latin1((StrRange *)&local_168);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_148,0x18,(StrRange *)&local_168,0x11,(StringName *)&local_160,6,
             (StringName *)&local_158);
  auStack_90 = (undefined1  [16])0x0;
  local_98 = (Variant *)CONCAT44(local_98._4_4_,local_148._0_4_);
  local_60 = (undefined1  [16])0x0;
  local_50 = (undefined1  [16])0x0;
  local_80 = local_80 & 0xffffffff00000000;
  _local_78 = ZEXT412(6) << 0x40;
  local_68[0] = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)auStack_90,(CowData *)&local_140);
  this = (StringName *)(auStack_90 + 8);
  StringName::operator=(this,(StringName *)&local_138);
  local_80 = CONCAT44(local_80._4_4_,local_130);
  CowData<char32_t>::_ref(local_78,local_128);
  uStack_70 = local_120;
  Variant::operator=((Variant *)local_68,(Variant *)&local_b8);
  pMVar4 = create_method_bind<AudioStreamRandomizer,int,Ref<AudioStream>>(set_stream);
  local_50._0_8_ = pMVar4;
  pMVar4 = create_method_bind<AudioStreamRandomizer,Ref<AudioStream>,int>(get_stream);
  local_50._8_8_ = pMVar4;
  puVar5 = (undefined4 *)
           HashMap<String,PropertyListHelper::Property,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,PropertyListHelper::Property>>>
           ::operator[]((HashMap<String,PropertyListHelper::Property,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,PropertyListHelper::Property>>>
                         *)(base_property_helper + 0x10),(CowData *)&local_140);
  *puVar5 = (int)local_98;
  CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)auStack_90);
  StringName::operator=((StringName *)(puVar5 + 4),this);
  puVar5[6] = (int)local_80;
  CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)local_78);
  puVar5[10] = uStack_70;
  Variant::operator=((Variant *)(puVar5 + 0xc),(Variant *)local_68);
  *(undefined8 *)(puVar5 + 0x12) = local_50._0_8_;
  *(undefined8 *)(puVar5 + 0x14) = local_50._8_8_;
  if (Variant::needs_deinit[local_68[0]] != '\0') {
    Variant::_clear_internal();
  }
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_98);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_148);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_160);
  if ((StringName::configured != '\0') && (local_158 != (char *)0x0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_b8] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)&local_b8,_LC1);
  local_148 = "0,100,0.001,or_greater";
  local_158 = (char *)0x0;
  local_160 = 0;
  local_140 = 0x16;
  String::parse_latin1((StrRange *)&local_160);
  local_168 = 0;
  local_148 = "weight";
  local_140 = 6;
  String::parse_latin1((StrRange *)&local_168);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_148,3,(StrRange *)&local_168,1,(StringName *)&local_160,6,
             (StringName *)&local_158);
  auStack_90 = (undefined1  [16])0x0;
  local_60 = (undefined1  [16])0x0;
  local_50 = (undefined1  [16])0x0;
  local_98 = (Variant *)CONCAT44(local_98._4_4_,local_148._0_4_);
  local_80 = local_80 & 0xffffffff00000000;
  _local_78 = ZEXT412(6) << 0x40;
  local_68[0] = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)auStack_90,(CowData *)&local_140);
  StringName::operator=(this,(StringName *)&local_138);
  local_80 = CONCAT44(local_80._4_4_,local_130);
  CowData<char32_t>::_ref(local_78,local_128);
  uStack_70 = local_120;
  Variant::operator=((Variant *)local_68,(Variant *)&local_b8);
  pMVar4 = create_method_bind<AudioStreamRandomizer,int,float>(set_stream_probability_weight);
  local_50._0_8_ = pMVar4;
  pMVar4 = create_method_bind<AudioStreamRandomizer,float,int>(get_stream_probability_weight);
  local_50._8_8_ = pMVar4;
  puVar5 = (undefined4 *)
           HashMap<String,PropertyListHelper::Property,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,PropertyListHelper::Property>>>
           ::operator[]((HashMap<String,PropertyListHelper::Property,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,PropertyListHelper::Property>>>
                         *)(base_property_helper + 0x10),(CowData *)&local_140);
  *puVar5 = (int)local_98;
  CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)auStack_90);
  StringName::operator=((StringName *)(puVar5 + 4),this);
  puVar5[6] = (int)local_80;
  CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)local_78);
  puVar5[10] = uStack_70;
  Variant::operator=((Variant *)(puVar5 + 0xc),(Variant *)local_68);
  *(undefined8 *)(puVar5 + 0x12) = local_50._0_8_;
  *(undefined8 *)(puVar5 + 0x14) = local_50._8_8_;
  if (Variant::needs_deinit[local_68[0]] != '\0') {
    Variant::_clear_internal();
  }
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_98);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_148);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_160);
  if ((StringName::configured != '\0') && (local_158 != (char *)0x0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_b8] != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  PropertyListHelper::register_base_helper((PropertyListHelper *)base_property_helper);
  return;
}



/* AudioStream::_bind_methods() */

void AudioStream::_bind_methods(void)

{
  MethodBind *pMVar1;
  long in_FS_OFFSET;
  long local_120;
  undefined8 local_118;
  undefined8 local_110;
  long local_108;
  undefined8 local_100;
  char *local_f8;
  undefined8 local_f0;
  char *local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  ulong local_70;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  D_METHODP((char *)&local_c8,(char ***)"get_length",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  pMVar1 = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(pMVar1);
  *(undefined ***)pMVar1 = &PTR__gen_argument_type_0012ef10;
  *(undefined8 *)(pMVar1 + 0x58) = 0x1f9;
  *(undefined8 *)(pMVar1 + 0x60) = 0;
  MethodBind::_set_returns(SUB81(pMVar1,0));
  MethodBind::_set_const(SUB81(pMVar1,0));
  MethodBind::_generate_argument_types((int)pMVar1);
  *(undefined4 *)(pMVar1 + 0x34) = 0;
  local_108 = 0;
  local_f8 = "AudioStream";
  local_f0 = 0xb;
  String::parse_latin1((StrRange *)&local_108);
  StringName::StringName((StringName *)&local_f8,(String *)&local_108,false);
  StringName::operator=((StringName *)(pMVar1 + 0x18),(StringName *)&local_f8);
  if ((StringName::configured != '\0') && (local_f8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_c8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_c8);
  D_METHODP((char *)&local_c8,(char ***)"is_monophonic",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  pMVar1 = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(pMVar1);
  *(undefined ***)pMVar1 = &PTR__gen_argument_type_0012ef70;
  *(undefined8 *)(pMVar1 + 0x58) = 0x201;
  *(undefined8 *)(pMVar1 + 0x60) = 0;
  MethodBind::_set_returns(SUB81(pMVar1,0));
  MethodBind::_set_const(SUB81(pMVar1,0));
  MethodBind::_generate_argument_types((int)pMVar1);
  *(undefined4 *)(pMVar1 + 0x34) = 0;
  local_108 = 0;
  local_f8 = "AudioStream";
  local_f0 = 0xb;
  String::parse_latin1((StrRange *)&local_108);
  StringName::StringName((StringName *)&local_f8,(String *)&local_108,false);
  StringName::operator=((StringName *)(pMVar1 + 0x18),(StringName *)&local_f8);
  if ((StringName::configured != '\0') && (local_f8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_c8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_c8);
  D_METHODP((char *)&local_c8,(char ***)"instantiate_playback",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  pMVar1 = create_method_bind<AudioStream,Ref<AudioStreamPlayback>>((_func_Ref *)0x1c9);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_c8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_c8);
  D_METHODP((char *)&local_c8,(char ***)"can_be_sampled",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  pMVar1 = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(pMVar1);
  *(undefined ***)pMVar1 = &PTR__gen_argument_type_0012ef70;
  *(undefined8 *)(pMVar1 + 0x58) = 0x211;
  *(undefined8 *)(pMVar1 + 0x60) = 0;
  MethodBind::_set_returns(SUB81(pMVar1,0));
  MethodBind::_set_const(SUB81(pMVar1,0));
  MethodBind::_generate_argument_types((int)pMVar1);
  *(undefined4 *)(pMVar1 + 0x34) = 0;
  local_108 = 0;
  local_f8 = "AudioStream";
  local_f0 = 0xb;
  String::parse_latin1((StrRange *)&local_108);
  StringName::StringName((StringName *)&local_f8,(String *)&local_108,false);
  StringName::operator=((StringName *)(pMVar1 + 0x18),(StringName *)&local_f8);
  if ((StringName::configured != '\0') && (local_f8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_c8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_c8);
  D_METHODP((char *)&local_c8,(char ***)"generate_sample",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  pMVar1 = create_method_bind<AudioStream,Ref<AudioSample>>((_func_Ref *)0x219);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_c8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_c8);
  D_METHODP((char *)&local_c8,(char ***)"is_meta_stream",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  pMVar1 = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(pMVar1);
  *(undefined ***)pMVar1 = &PTR__gen_argument_type_0012ef70;
  *(undefined8 *)(pMVar1 + 0x58) = 0x221;
  *(undefined8 *)(pMVar1 + 0x60) = 0;
  MethodBind::_set_returns(SUB81(pMVar1,0));
  MethodBind::_set_const(SUB81(pMVar1,0));
  MethodBind::_generate_argument_types((int)pMVar1);
  *(undefined4 *)(pMVar1 + 0x34) = 0;
  local_108 = 0;
  local_f8 = "AudioStream";
  local_f0 = 0xb;
  String::parse_latin1((StrRange *)&local_108);
  StringName::StringName((StringName *)&local_f8,(String *)&local_108,false);
  StringName::operator=((StringName *)(pMVar1 + 0x18),(StringName *)&local_f8);
  if ((StringName::configured != '\0') && (local_f8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_c8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_c8);
  local_b8 = (undefined1  [16])0x0;
  local_f8 = "_instantiate_playback";
  local_100 = 0;
  local_c8 = (char *)0x0;
  local_c0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 6;
  local_90 = 1;
  local_88 = 0;
  local_78 = 0;
  local_70 = 0;
  local_60 = 0;
  local_f0 = 0x15;
  String::parse_latin1((StrRange *)&local_c8);
  local_120 = 0;
  local_90 = CONCAT44(local_90._4_4_,0xc);
  local_118 = 0;
  local_f8 = "AudioStreamPlayback";
  local_f0 = 0x13;
  String::parse_latin1((StrRange *)&local_118);
  local_110 = 0;
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_f8,0x18,(CowData<char32_t> *)&local_110,0x11,
             (StrRange *)&local_118,6,&local_120);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
  if ((StringName::configured != '\0') && (local_120 != 0)) {
    StringName::unref();
  }
  PropertyInfo::operator=((PropertyInfo *)&local_c0,(PropertyInfo *)&local_f8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
  local_f8 = "AudioStream";
  local_70 = local_70 & 0xffffffff00000000;
  local_110 = 0;
  local_f0 = 0xb;
  String::parse_latin1((StrRange *)&local_110);
  StringName::StringName((StringName *)&local_f8,(String *)&local_110,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_f8,(MethodInfo *)&local_c8,true,(StrRange *)&local_108,false);
  if ((StringName::configured != '\0') && (local_f8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  MethodInfo::~MethodInfo((MethodInfo *)&local_c8);
  CowData<String>::_unref((CowData<String> *)&local_100);
  local_b8 = (undefined1  [16])0x0;
  local_f8 = "_get_stream_name";
  local_100 = 0;
  local_c8 = (char *)0x0;
  local_c0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 6;
  local_90 = 1;
  local_88 = 0;
  local_78 = 0;
  local_70 = 0;
  local_60 = 0;
  local_f0 = 0x10;
  String::parse_latin1((StrRange *)&local_c8);
  local_90 = CONCAT44(local_90._4_4_,0xc);
  local_120 = 0;
  local_118 = 0;
  local_f8 = "";
  local_f0 = 0;
  String::parse_latin1((StrRange *)&local_118);
  local_110 = 0;
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_f8,4,(CowData<char32_t> *)&local_110,0,(StrRange *)&local_118,6,
             &local_120);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
  if ((StringName::configured != '\0') && (local_120 != 0)) {
    StringName::unref();
  }
  PropertyInfo::operator=((PropertyInfo *)&local_c0,(PropertyInfo *)&local_f8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
  local_f8 = "AudioStream";
  local_70 = local_70 & 0xffffffff00000000;
  local_110 = 0;
  local_f0 = 0xb;
  String::parse_latin1((StrRange *)&local_110);
  StringName::StringName((StringName *)&local_f8,(String *)&local_110,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_f8,(MethodInfo *)&local_c8,true,(StrRange *)&local_108,false);
  if ((StringName::configured != '\0') && (local_f8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  MethodInfo::~MethodInfo((MethodInfo *)&local_c8);
  CowData<String>::_unref((CowData<String> *)&local_100);
  local_b8 = (undefined1  [16])0x0;
  local_f8 = "_get_length";
  local_100 = 0;
  local_c8 = (char *)0x0;
  local_c0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 6;
  local_90 = 1;
  local_88 = 0;
  local_78 = 0;
  local_70 = 0;
  local_60 = 0;
  local_f0 = 0xb;
  String::parse_latin1((StrRange *)&local_c8);
  local_90 = CONCAT44(local_90._4_4_,0xc);
  GetTypeInfo<double,void>::get_class_info((GetTypeInfo<double,void> *)&local_f8);
  PropertyInfo::operator=((PropertyInfo *)&local_c0,(PropertyInfo *)&local_f8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
  local_f8 = "AudioStream";
  local_70 = CONCAT44(local_70._4_4_,10);
  local_110 = 0;
  local_f0 = 0xb;
  String::parse_latin1((StrRange *)&local_110);
  StringName::StringName((StringName *)&local_f8,(String *)&local_110,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_f8,(MethodInfo *)&local_c8,true,(StrRange *)&local_108,false);
  if ((StringName::configured != '\0') && (local_f8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  MethodInfo::~MethodInfo((MethodInfo *)&local_c8);
  CowData<String>::_unref((CowData<String> *)&local_100);
  local_b8 = (undefined1  [16])0x0;
  local_f8 = "_is_monophonic";
  local_100 = 0;
  local_c8 = (char *)0x0;
  local_c0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 6;
  local_90 = 1;
  local_88 = 0;
  local_78 = 0;
  local_70 = 0;
  local_60 = 0;
  local_f0 = 0xe;
  String::parse_latin1((StrRange *)&local_c8);
  local_90 = CONCAT44(local_90._4_4_,0xc);
  GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void> *)&local_f8);
  PropertyInfo::operator=((PropertyInfo *)&local_c0,(PropertyInfo *)&local_f8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
  local_f8 = "AudioStream";
  local_70 = local_70 & 0xffffffff00000000;
  local_110 = 0;
  local_f0 = 0xb;
  String::parse_latin1((StrRange *)&local_110);
  StringName::StringName((StringName *)&local_f8,(String *)&local_110,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_f8,(MethodInfo *)&local_c8,true,(StrRange *)&local_108,false);
  if ((StringName::configured != '\0') && (local_f8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  MethodInfo::~MethodInfo((MethodInfo *)&local_c8);
  CowData<String>::_unref((CowData<String> *)&local_100);
  local_b8 = (undefined1  [16])0x0;
  local_f8 = "_get_bpm";
  local_100 = 0;
  local_c8 = (char *)0x0;
  local_c0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 6;
  local_90 = 1;
  local_88 = 0;
  local_78 = 0;
  local_70 = 0;
  local_60 = 0;
  local_f0 = 8;
  String::parse_latin1((StrRange *)&local_c8);
  local_90 = CONCAT44(local_90._4_4_,0xc);
  GetTypeInfo<double,void>::get_class_info((GetTypeInfo<double,void> *)&local_f8);
  PropertyInfo::operator=((PropertyInfo *)&local_c0,(PropertyInfo *)&local_f8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
  local_f8 = "AudioStream";
  local_70 = CONCAT44(local_70._4_4_,10);
  local_110 = 0;
  local_f0 = 0xb;
  String::parse_latin1((StrRange *)&local_110);
  StringName::StringName((StringName *)&local_f8,(String *)&local_110,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_f8,(MethodInfo *)&local_c8,true,(StrRange *)&local_108,false);
  if ((StringName::configured != '\0') && (local_f8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  MethodInfo::~MethodInfo((MethodInfo *)&local_c8);
  CowData<String>::_unref((CowData<String> *)&local_100);
  local_b8 = (undefined1  [16])0x0;
  local_f8 = "_get_beat_count";
  local_100 = 0;
  local_c8 = (char *)0x0;
  local_c0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 6;
  local_90 = 1;
  local_88 = 0;
  local_78 = 0;
  local_70 = 0;
  local_60 = 0;
  local_f0 = 0xf;
  String::parse_latin1((StrRange *)&local_c8);
  local_90 = CONCAT44(local_90._4_4_,0xc);
  GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)&local_f8);
  PropertyInfo::operator=((PropertyInfo *)&local_c0,(PropertyInfo *)&local_f8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
  local_f8 = "AudioStream";
  local_70 = CONCAT44(local_70._4_4_,3);
  local_110 = 0;
  local_f0 = 0xb;
  String::parse_latin1((StrRange *)&local_110);
  StringName::StringName((StringName *)&local_f8,(String *)&local_110,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_f8,(MethodInfo *)&local_c8,true,(StrRange *)&local_108,false);
  if ((StringName::configured != '\0') && (local_f8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  MethodInfo::~MethodInfo((MethodInfo *)&local_c8);
  CowData<String>::_unref((CowData<String> *)&local_100);
  local_b8 = (undefined1  [16])0x0;
  local_f8 = "_get_parameter_list";
  local_100 = 0;
  local_c8 = (char *)0x0;
  local_c0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 6;
  local_90 = 1;
  local_88 = 0;
  local_78 = 0;
  local_70 = 0;
  local_60 = 0;
  local_f0 = 0x13;
  String::parse_latin1((StrRange *)&local_c8);
  local_90 = CONCAT44(local_90._4_4_,0xc);
  local_120 = 0;
  Variant::get_type_name((StrRange *)&local_118,0x1b);
  local_110 = 0;
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_f8,0x1c,(CowData<char32_t> *)&local_110,0x1f,
             (StrRange *)&local_118,6,&local_120);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
  if ((StringName::configured != '\0') && (local_120 != 0)) {
    StringName::unref();
  }
  PropertyInfo::operator=((PropertyInfo *)&local_c0,(PropertyInfo *)&local_f8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
  local_f8 = "AudioStream";
  local_70 = local_70 & 0xffffffff00000000;
  local_110 = 0;
  local_f0 = 0xb;
  String::parse_latin1((StrRange *)&local_110);
  StringName::StringName((StringName *)&local_f8,(String *)&local_110,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_f8,(MethodInfo *)&local_c8,true,(StrRange *)&local_108,false);
  if ((StringName::configured != '\0') && (local_f8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  MethodInfo::~MethodInfo((MethodInfo *)&local_c8);
  CowData<String>::_unref((CowData<String> *)&local_100);
  local_b8 = (undefined1  [16])0x0;
  local_f8 = "_has_loop";
  local_100 = 0;
  local_c8 = (char *)0x0;
  local_c0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 6;
  local_90 = 1;
  local_88 = 0;
  local_78 = 0;
  local_70 = 0;
  local_60 = 0;
  local_f0 = 9;
  String::parse_latin1((StrRange *)&local_c8);
  local_90 = CONCAT44(local_90._4_4_,0xc);
  GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void> *)&local_f8);
  PropertyInfo::operator=((PropertyInfo *)&local_c0,(PropertyInfo *)&local_f8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
  local_f8 = "AudioStream";
  local_70 = local_70 & 0xffffffff00000000;
  local_110 = 0;
  local_f0 = 0xb;
  String::parse_latin1((StrRange *)&local_110);
  StringName::StringName((StringName *)&local_f8,(String *)&local_110,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_f8,(MethodInfo *)&local_c8,true,(StrRange *)&local_108,false);
  if ((StringName::configured != '\0') && (local_f8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  MethodInfo::~MethodInfo((MethodInfo *)&local_c8);
  CowData<String>::_unref((CowData<String> *)&local_100);
  local_b8 = (undefined1  [16])0x0;
  local_f8 = "_get_bar_beats";
  local_100 = 0;
  local_c8 = (char *)0x0;
  local_c0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 6;
  local_90 = 1;
  local_88 = 0;
  local_78 = 0;
  local_70 = 0;
  local_60 = 0;
  local_f0 = 0xe;
  String::parse_latin1((StrRange *)&local_c8);
  local_90 = CONCAT44(local_90._4_4_,0xc);
  GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)&local_f8);
  PropertyInfo::operator=((PropertyInfo *)&local_c0,(PropertyInfo *)&local_f8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
  local_f8 = "AudioStream";
  local_70 = CONCAT44(local_70._4_4_,3);
  local_110 = 0;
  local_f0 = 0xb;
  String::parse_latin1((StrRange *)&local_110);
  StringName::StringName((StringName *)&local_f8,(String *)&local_110,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_f8,(MethodInfo *)&local_c8,true,(StrRange *)&local_108,false);
  if ((StringName::configured != '\0') && (local_f8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  MethodInfo::~MethodInfo((MethodInfo *)&local_c8);
  CowData<String>::_unref((CowData<String> *)&local_100);
  local_108 = 0;
  local_c8 = "parameter_list_changed";
  local_c0 = 0x16;
  String::parse_latin1((StrRange *)&local_108);
  local_c8 = (char *)0x0;
  local_c0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 6;
  local_90 = 1;
  local_88 = 0;
  local_78 = 0;
  local_70 = 0;
  local_60 = 0;
  local_b8 = (undefined1  [16])0x0;
  if (local_108 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)&local_108);
  }
  local_f8 = "AudioStream";
  local_110 = 0;
  local_f0 = 0xb;
  String::parse_latin1((StrRange *)&local_110);
  StringName::StringName((StringName *)&local_f8,(String *)&local_110,false);
  ClassDB::add_signal((StringName *)&local_f8,(MethodInfo *)&local_c8);
  if ((StringName::configured != '\0') && (local_f8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  MethodInfo::~MethodInfo((MethodInfo *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AudioStream::initialize_class() [clone .part.0] */

void AudioStream::initialize_class(void)

{
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
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
      if ((code *)PTR__bind_methods_00137008 != RefCounted::_bind_methods) {
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
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
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
  _bind_methods();
  initialize_class()::initialized = 1;
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



/* AudioStreamPlayback::stop() */

void __thiscall AudioStreamPlayback::stop(AudioStreamPlayback *this)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  code *UNRECOVERED_JUMPTABLE;
  long in_FS_OFFSET;
  undefined8 local_e8;
  long local_e0;
  StringName local_d8 [8];
  long local_d0;
  int local_c8 [4];
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  plVar4 = *(long **)(this + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar4 == (long *)0x0) {
LAB_0010667f:
    if ((*(long *)(this + 8) != 0) && (this[0x1a0] == (AudioStreamPlayback)0x0)) {
      local_c8[0] = 0;
      local_c8[1] = 0;
      local_b8 = (undefined1  [16])0x0;
      local_c8[2] = 0;
      local_c8[3] = 0;
      local_a8 = 0;
      local_a0 = 0;
      local_98 = 6;
      local_90 = 1;
      local_88 = 0;
      local_78 = 0;
      local_70 = 0;
      local_60 = 0;
      String::parse_latin1((String *)local_c8,"_stop");
      local_90 = CONCAT44(local_90._4_4_,8);
      uVar1 = MethodInfo::get_compatibility_hash();
      lVar3 = *(long *)(this + 8);
      *(undefined8 *)(this + 0x1a8) = 0;
      UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 0xd8);
      if (((UNRECOVERED_JUMPTABLE == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
         (UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 0xd0), UNRECOVERED_JUMPTABLE == (code *)0x0)) {
        local_e8 = 0;
        String::parse_latin1((String *)&local_e8,"AudioStreamPlayback");
        StringName::StringName((StringName *)&local_e0,(String *)&local_e8,false);
        ClassDB::get_virtual_method_compatibility_hashes(local_d8,(StringName *)&local_e0);
        if (local_d0 == 0) {
          CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&local_d0);
          if ((StringName::configured != '\0') && (lVar3 = 0, local_e0 != 0)) goto LAB_00106907;
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
LAB_0010691c:
          lVar3 = *(long *)(this + 8);
          UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 200);
          if (((UNRECOVERED_JUMPTABLE == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
             (UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 0xc0), UNRECOVERED_JUMPTABLE == (code *)0x0
             )) goto LAB_00106859;
          uVar2 = (*UNRECOVERED_JUMPTABLE)(*(undefined8 *)(lVar3 + 0xa0),this + 0x198);
          *(undefined8 *)(this + 0x1a8) = uVar2;
        }
        else {
          lVar3 = *(long *)(local_d0 + -8);
          CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&local_d0);
          if ((StringName::configured != '\0') && (local_e0 != 0)) {
LAB_00106907:
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
          if (lVar3 == 0) goto LAB_0010691c;
        }
        lVar3 = *(long *)(this + 8);
      }
      else {
        uVar2 = (*UNRECOVERED_JUMPTABLE)(*(undefined8 *)(lVar3 + 0xa0),this + 0x198,uVar1);
        *(undefined8 *)(this + 0x1a8) = uVar2;
        lVar3 = *(long *)(this + 8);
      }
LAB_00106859:
      if (*(char *)(lVar3 + 0x29) != '\0') {
        plVar4 = (long *)operator_new(0x18,"");
        *plVar4 = (long)(this + 0x1a8);
        plVar4[1] = (long)(this + 0x1a0);
        plVar4[2] = *(long *)(this + 0x168);
        *(long **)(this + 0x168) = plVar4;
      }
      this[0x1a0] = (AudioStreamPlayback)0x1;
      MethodInfo::~MethodInfo((MethodInfo *)local_c8);
    }
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x1a8);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
      if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010677c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)(*(undefined8 *)(this + 0x10),0,0);
          return;
        }
      }
      else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001066e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)(this + 8) + 0xe0))
                  (*(undefined8 *)(this + 0x10),this + 0x198,UNRECOVERED_JUMPTABLE,0,0);
        return;
      }
      goto LAB_0010698f;
    }
    _err_print_error(&_LC149,"servers/audio/audio_stream.cpp",0x2d,"Method/function failed.",
                     "AudioStreamPlayback::stop unimplemented!",0,0);
  }
  else {
    local_c8[0] = 0;
    local_c8[1] = 0;
    local_c8[2] = 0;
    (**(code **)(*plVar4 + 0x60))(local_58,plVar4,this + 0x198,0,0,local_c8);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (local_c8[0] != 0) goto LAB_0010667f;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010698f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AudioStreamPlayback::is_playing() const */

bool __thiscall AudioStreamPlayback::is_playing(AudioStreamPlayback *this)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  long in_FS_OFFSET;
  bool bVar6;
  undefined8 local_108;
  long local_100;
  GetTypeInfo<bool,void> local_f8 [8];
  long local_f0 [5];
  int local_c8 [2];
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  ulong local_70;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  plVar4 = *(long **)(this + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar4 != (long *)0x0) {
    local_c8[0] = 0;
    local_c8[1] = 0;
    uStack_c0 = 0;
    (**(code **)(*plVar4 + 0x60))((Variant *)local_58,plVar4,this + 0x1b0,0,0,local_c8);
    if (local_c8[0] == 0) {
      bVar6 = Variant::operator_cast_to_bool((Variant *)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_00106aba;
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(this + 8) != 0) && (this[0x1b8] == (AudioStreamPlayback)0x0)) {
    local_c8[0] = 0;
    local_c8[1] = 0;
    local_b8 = (undefined1  [16])0x0;
    uStack_c0 = 0;
    uStack_bc = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_98 = 6;
    local_90 = 1;
    local_88 = 0;
    local_78 = 0;
    local_70 = 0;
    local_60 = 0;
    String::parse_latin1((String *)local_c8,"_is_playing");
    local_90 = CONCAT44(local_90._4_4_,0xc);
    GetTypeInfo<bool,void>::get_class_info(local_f8);
    PropertyInfo::operator=((PropertyInfo *)&uStack_c0,(PropertyInfo *)local_f8);
    PropertyInfo::~PropertyInfo((PropertyInfo *)local_f8);
    local_70 = local_70 & 0xffffffff00000000;
    uVar1 = MethodInfo::get_compatibility_hash();
    lVar3 = *(long *)(this + 8);
    *(undefined8 *)(this + 0x1c0) = 0;
    pcVar5 = *(code **)(lVar3 + 0xd8);
    if (((pcVar5 == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
       (pcVar5 = *(code **)(lVar3 + 0xd0), pcVar5 == (code *)0x0)) {
      local_108 = 0;
      String::parse_latin1((String *)&local_108,"AudioStreamPlayback");
      StringName::StringName((StringName *)&local_100,(String *)&local_108,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)local_f8,(StringName *)&local_100);
      if (local_f0[0] == 0) {
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (lVar3 = 0, local_100 != 0)) goto LAB_00106d48;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
LAB_00106d5d:
        lVar3 = *(long *)(this + 8);
        pcVar5 = *(code **)(lVar3 + 200);
        if (((pcVar5 == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
           (pcVar5 = *(code **)(lVar3 + 0xc0), pcVar5 == (code *)0x0)) goto LAB_00106c98;
        uVar2 = (*pcVar5)(*(undefined8 *)(lVar3 + 0xa0),this + 0x1b0);
        *(undefined8 *)(this + 0x1c0) = uVar2;
      }
      else {
        lVar3 = *(long *)(local_f0[0] + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (local_100 != 0)) {
LAB_00106d48:
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
        if (lVar3 == 0) goto LAB_00106d5d;
      }
      lVar3 = *(long *)(this + 8);
    }
    else {
      uVar2 = (*pcVar5)(*(undefined8 *)(lVar3 + 0xa0),this + 0x1b0,uVar1);
      *(undefined8 *)(this + 0x1c0) = uVar2;
      lVar3 = *(long *)(this + 8);
    }
LAB_00106c98:
    if (*(char *)(lVar3 + 0x29) != '\0') {
      plVar4 = (long *)operator_new(0x18,"");
      *plVar4 = (long)(this + 0x1c0);
      plVar4[1] = (long)(this + 0x1b8);
      plVar4[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar4;
    }
    this[0x1b8] = (AudioStreamPlayback)0x1;
    MethodInfo::~MethodInfo((MethodInfo *)local_c8);
  }
  pcVar5 = *(code **)(this + 0x1c0);
  if (pcVar5 == (code *)0x0) {
    _err_print_error("is_playing","servers/audio/audio_stream.cpp",0x34,
                     "Method/function failed. Returning: false",
                     "AudioStreamPlayback::is_playing unimplemented!",0,0);
    bVar6 = false;
  }
  else if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
    (*pcVar5)(*(undefined8 *)(this + 0x10),0,local_c8);
    bVar6 = local_c8[0]._0_1_ != (String)0x0;
  }
  else {
    (**(code **)(*(long *)(this + 8) + 0xe0))
              (*(undefined8 *)(this + 0x10),this + 0x1b0,pcVar5,0,local_c8);
    bVar6 = local_c8[0]._0_1_ != (String)0x0;
  }
LAB_00106aba:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar6;
}



/* AudioStreamPlayback::get_loop_count() const */

int __thiscall AudioStreamPlayback::get_loop_count(AudioStreamPlayback *this)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  code *pcVar6;
  long in_FS_OFFSET;
  undefined8 local_108;
  long local_100;
  GetTypeInfo<int,void> local_f8 [8];
  long local_f0 [5];
  int local_c8 [2];
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  plVar5 = *(long **)(this + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar5 != (long *)0x0) {
    local_c8[0] = 0;
    local_c8[1] = 0;
    uStack_c0 = 0;
    (**(code **)(*plVar5 + 0x60))((Variant *)local_58,plVar5,this + 0x1c8,0,0,local_c8);
    if (local_c8[0] == 0) {
      iVar1 = Variant::operator_cast_to_int((Variant *)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_00106ef3;
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(this + 8) != 0) && (this[0x1d0] == (AudioStreamPlayback)0x0)) {
    local_c8[0] = 0;
    local_c8[1] = 0;
    local_b8 = (undefined1  [16])0x0;
    uStack_c0 = 0;
    uStack_bc = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_98 = 6;
    local_90 = 1;
    local_88 = 0;
    local_78 = 0;
    local_70 = 0;
    local_60 = 0;
    String::parse_latin1((String *)local_c8,"_get_loop_count");
    local_90 = CONCAT44(local_90._4_4_,0xc);
    GetTypeInfo<int,void>::get_class_info(local_f8);
    PropertyInfo::operator=((PropertyInfo *)&uStack_c0,(PropertyInfo *)local_f8);
    PropertyInfo::~PropertyInfo((PropertyInfo *)local_f8);
    local_70 = CONCAT44(local_70._4_4_,3);
    uVar2 = MethodInfo::get_compatibility_hash();
    lVar4 = *(long *)(this + 8);
    *(undefined8 *)(this + 0x1d8) = 0;
    pcVar6 = *(code **)(lVar4 + 0xd8);
    if (((pcVar6 == (code *)0x0) || (*(long *)(lVar4 + 0xe0) == 0)) &&
       (pcVar6 = *(code **)(lVar4 + 0xd0), pcVar6 == (code *)0x0)) {
      local_108 = 0;
      String::parse_latin1((String *)&local_108,"AudioStreamPlayback");
      StringName::StringName((StringName *)&local_100,(String *)&local_108,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)local_f8,(StringName *)&local_100);
      if (local_f0[0] == 0) {
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (lVar4 = 0, local_100 != 0)) goto LAB_00107128;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
LAB_0010713d:
        lVar4 = *(long *)(this + 8);
        pcVar6 = *(code **)(lVar4 + 200);
        if (((pcVar6 == (code *)0x0) || (*(long *)(lVar4 + 0xe0) == 0)) &&
           (pcVar6 = *(code **)(lVar4 + 0xc0), pcVar6 == (code *)0x0)) goto LAB_00107078;
        uVar3 = (*pcVar6)(*(undefined8 *)(lVar4 + 0xa0),this + 0x1c8);
        *(undefined8 *)(this + 0x1d8) = uVar3;
      }
      else {
        lVar4 = *(long *)(local_f0[0] + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (local_100 != 0)) {
LAB_00107128:
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
        if (lVar4 == 0) goto LAB_0010713d;
      }
      lVar4 = *(long *)(this + 8);
    }
    else {
      uVar3 = (*pcVar6)(*(undefined8 *)(lVar4 + 0xa0),this + 0x1c8,uVar2);
      *(undefined8 *)(this + 0x1d8) = uVar3;
      lVar4 = *(long *)(this + 8);
    }
LAB_00107078:
    if (*(char *)(lVar4 + 0x29) != '\0') {
      plVar5 = (long *)operator_new(0x18,"");
      *plVar5 = (long)(this + 0x1d8);
      plVar5[1] = (long)(this + 0x1d0);
      plVar5[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar5;
    }
    this[0x1d0] = (AudioStreamPlayback)0x1;
    MethodInfo::~MethodInfo((MethodInfo *)local_c8);
  }
  pcVar6 = *(code **)(this + 0x1d8);
  iVar1 = 0;
  if (pcVar6 != (code *)0x0) {
    if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
      (*pcVar6)(*(undefined8 *)(this + 0x10),0,local_c8);
      iVar1 = local_c8[0];
    }
    else {
      (**(code **)(*(long *)(this + 8) + 0xe0))
                (*(undefined8 *)(this + 0x10),this + 0x1c8,pcVar6,0,local_c8);
      iVar1 = local_c8[0];
    }
  }
LAB_00106ef3:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}



/* AudioStreamPlayback::get_playback_position() const */

double __thiscall AudioStreamPlayback::get_playback_position(AudioStreamPlayback *this)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  long in_FS_OFFSET;
  double dVar6;
  undefined8 local_108;
  long local_100;
  GetTypeInfo<double,void> local_f8 [8];
  long local_f0 [5];
  int local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  plVar4 = *(long **)(this + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar4 != (long *)0x0) {
    local_c8 = 0;
    uStack_c4 = 0;
    uStack_c0 = 0;
    (**(code **)(*plVar4 + 0x60))((Variant *)local_58,plVar4,this + 0x1e0,0,0,&local_c8);
    if (local_c8 == 0) {
      dVar6 = Variant::operator_cast_to_double((Variant *)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_001072d8;
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(this + 8) != 0) && (this[0x1e8] == (AudioStreamPlayback)0x0)) {
    local_c8 = 0;
    uStack_c4 = 0;
    local_b8 = (undefined1  [16])0x0;
    uStack_c0 = 0;
    uStack_bc = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_98 = 6;
    local_90 = 1;
    local_88 = 0;
    local_78 = 0;
    local_70 = 0;
    local_60 = 0;
    String::parse_latin1((String *)&local_c8,"_get_playback_position");
    local_90 = CONCAT44(local_90._4_4_,0xc);
    GetTypeInfo<double,void>::get_class_info(local_f8);
    PropertyInfo::operator=((PropertyInfo *)&uStack_c0,(PropertyInfo *)local_f8);
    PropertyInfo::~PropertyInfo((PropertyInfo *)local_f8);
    local_70 = CONCAT44(local_70._4_4_,10);
    uVar1 = MethodInfo::get_compatibility_hash();
    lVar3 = *(long *)(this + 8);
    *(undefined8 *)(this + 0x1f0) = 0;
    pcVar5 = *(code **)(lVar3 + 0xd8);
    if (((pcVar5 == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
       (pcVar5 = *(code **)(lVar3 + 0xd0), pcVar5 == (code *)0x0)) {
      local_108 = 0;
      String::parse_latin1((String *)&local_108,"AudioStreamPlayback");
      StringName::StringName((StringName *)&local_100,(String *)&local_108,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)local_f8,(StringName *)&local_100);
      if (local_f0[0] == 0) {
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (lVar3 = 0, local_100 != 0)) goto LAB_00107558;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
LAB_0010756d:
        lVar3 = *(long *)(this + 8);
        pcVar5 = *(code **)(lVar3 + 200);
        if (((pcVar5 == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
           (pcVar5 = *(code **)(lVar3 + 0xc0), pcVar5 == (code *)0x0)) goto LAB_001074b0;
        uVar2 = (*pcVar5)(*(undefined8 *)(lVar3 + 0xa0),this + 0x1e0);
        *(undefined8 *)(this + 0x1f0) = uVar2;
      }
      else {
        lVar3 = *(long *)(local_f0[0] + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (local_100 != 0)) {
LAB_00107558:
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
        if (lVar3 == 0) goto LAB_0010756d;
      }
      lVar3 = *(long *)(this + 8);
    }
    else {
      uVar2 = (*pcVar5)(*(undefined8 *)(lVar3 + 0xa0),this + 0x1e0,uVar1);
      *(undefined8 *)(this + 0x1f0) = uVar2;
      lVar3 = *(long *)(this + 8);
    }
LAB_001074b0:
    if (*(char *)(lVar3 + 0x29) != '\0') {
      plVar4 = (long *)operator_new(0x18,"");
      *plVar4 = (long)(this + 0x1f0);
      plVar4[1] = (long)(this + 0x1e8);
      plVar4[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar4;
    }
    this[0x1e8] = (AudioStreamPlayback)0x1;
    MethodInfo::~MethodInfo((MethodInfo *)&local_c8);
  }
  pcVar5 = *(code **)(this + 0x1f0);
  if (pcVar5 == (code *)0x0) {
    _err_print_error("get_playback_position","servers/audio/audio_stream.cpp",0x42,
                     "Method/function failed. Returning: 0",
                     "AudioStreamPlayback::get_playback_position unimplemented!",0,0);
    dVar6 = 0.0;
  }
  else if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
    (*pcVar5)(*(undefined8 *)(this + 0x10),0,&local_c8);
    dVar6 = (double)CONCAT44(uStack_c4,local_c8);
  }
  else {
    (**(code **)(*(long *)(this + 8) + 0xe0))
              (*(undefined8 *)(this + 0x10),this + 0x1e0,pcVar5,0,&local_c8);
    dVar6 = (double)CONCAT44(uStack_c4,local_c8);
  }
LAB_001072d8:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return dVar6;
}



/* AudioStreamPlayback::tag_used_streams() */

void __thiscall AudioStreamPlayback::tag_used_streams(AudioStreamPlayback *this)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  code *UNRECOVERED_JUMPTABLE;
  long in_FS_OFFSET;
  undefined8 local_e8;
  long local_e0;
  StringName local_d8 [8];
  long local_d0;
  int local_c8 [4];
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  plVar4 = *(long **)(this + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar4 == (long *)0x0) {
LAB_001076bb:
    if ((*(long *)(this + 8) != 0) && (this[0x230] == (AudioStreamPlayback)0x0)) {
      local_c8[0] = 0;
      local_c8[1] = 0;
      local_b8 = (undefined1  [16])0x0;
      local_c8[2] = 0;
      local_c8[3] = 0;
      local_a8 = 0;
      local_a0 = 0;
      local_98 = 6;
      local_90 = 1;
      local_88 = 0;
      local_78 = 0;
      local_70 = 0;
      local_60 = 0;
      String::parse_latin1((String *)local_c8,"_tag_used_streams");
      local_90 = CONCAT44(local_90._4_4_,8);
      uVar1 = MethodInfo::get_compatibility_hash();
      lVar3 = *(long *)(this + 8);
      *(undefined8 *)(this + 0x238) = 0;
      UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 0xd8);
      if (((UNRECOVERED_JUMPTABLE == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
         (UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 0xd0), UNRECOVERED_JUMPTABLE == (code *)0x0)) {
        local_e8 = 0;
        String::parse_latin1((String *)&local_e8,"AudioStreamPlayback");
        StringName::StringName((StringName *)&local_e0,(String *)&local_e8,false);
        ClassDB::get_virtual_method_compatibility_hashes(local_d8,(StringName *)&local_e0);
        if (local_d0 == 0) {
          CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&local_d0);
          if ((StringName::configured != '\0') && (lVar3 = 0, local_e0 != 0)) goto LAB_00107907;
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
LAB_0010791c:
          lVar3 = *(long *)(this + 8);
          UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 200);
          if (((UNRECOVERED_JUMPTABLE == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
             (UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 0xc0), UNRECOVERED_JUMPTABLE == (code *)0x0
             )) goto LAB_00107859;
          uVar2 = (*UNRECOVERED_JUMPTABLE)(*(undefined8 *)(lVar3 + 0xa0),this + 0x228);
          *(undefined8 *)(this + 0x238) = uVar2;
        }
        else {
          lVar3 = *(long *)(local_d0 + -8);
          CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&local_d0);
          if ((StringName::configured != '\0') && (local_e0 != 0)) {
LAB_00107907:
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
          if (lVar3 == 0) goto LAB_0010791c;
        }
        lVar3 = *(long *)(this + 8);
      }
      else {
        uVar2 = (*UNRECOVERED_JUMPTABLE)(*(undefined8 *)(lVar3 + 0xa0),this + 0x228,uVar1);
        *(undefined8 *)(this + 0x238) = uVar2;
        lVar3 = *(long *)(this + 8);
      }
LAB_00107859:
      if (*(char *)(lVar3 + 0x29) != '\0') {
        plVar4 = (long *)operator_new(0x18,"");
        *plVar4 = (long)(this + 0x238);
        plVar4[1] = (long)(this + 0x230);
        plVar4[2] = *(long *)(this + 0x168);
        *(long **)(this + 0x168) = plVar4;
      }
      this[0x230] = (AudioStreamPlayback)0x1;
      MethodInfo::~MethodInfo((MethodInfo *)local_c8);
    }
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x238);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
      if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010777c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)(*(undefined8 *)(this + 0x10),0,0);
          return;
        }
      }
      else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010771d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)(this + 8) + 0xe0))
                  (*(undefined8 *)(this + 0x10),this + 0x228,UNRECOVERED_JUMPTABLE,0,0);
        return;
      }
      goto LAB_0010798f;
    }
  }
  else {
    local_c8[0] = 0;
    local_c8[1] = 0;
    local_c8[2] = 0;
    (**(code **)(*plVar4 + 0x60))(local_58,plVar4,this + 0x228,0,0,local_c8);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (local_c8[0] != 0) goto LAB_001076bb;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010798f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AudioStreamPlaybackResampled::get_stream_sampling_rate() */

void __thiscall
AudioStreamPlaybackResampled::get_stream_sampling_rate(AudioStreamPlaybackResampled *this)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  long in_FS_OFFSET;
  CowData<char32_t> local_128 [8];
  CowData<char32_t> local_120 [8];
  undefined8 local_118;
  String local_110 [8];
  undefined8 local_108;
  long local_100;
  undefined8 local_f8;
  long local_f0 [5];
  int local_c8 [2];
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  plVar4 = *(long **)(this + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar4 != (long *)0x0) {
    local_c8[0] = 0;
    local_c8[1] = 0;
    uStack_c0 = 0;
    (**(code **)(*plVar4 + 0x60))((Variant *)local_58,plVar4,this + 0x6b8,0,0,local_c8);
    if (local_c8[0] == 0) {
      Variant::operator_cast_to_float((Variant *)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_00107abc;
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(this + 8) != 0) && (this[0x6c0] == (AudioStreamPlaybackResampled)0x0)) {
    local_c8[0] = 0;
    local_c8[1] = 0;
    local_b8 = (undefined1  [16])0x0;
    uStack_c0 = 0;
    uStack_bc = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_98 = 6;
    local_90 = 1;
    local_88 = 0;
    local_78 = 0;
    local_70 = 0;
    local_60 = 0;
    String::parse_latin1((String *)local_c8,"_get_stream_sampling_rate");
    local_90 = CONCAT44(local_90._4_4_,0x8c);
    GetTypeInfo<float,void>::get_class_info((GetTypeInfo<float,void> *)&local_f8);
    PropertyInfo::operator=((PropertyInfo *)&uStack_c0,(PropertyInfo *)&local_f8);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
    local_70 = CONCAT44(local_70._4_4_,9);
    uVar1 = MethodInfo::get_compatibility_hash();
    lVar3 = *(long *)(this + 8);
    *(undefined8 *)(this + 0x6c8) = 0;
    pcVar5 = *(code **)(lVar3 + 0xd8);
    if (((pcVar5 == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
       (pcVar5 = *(code **)(lVar3 + 0xd0), pcVar5 == (code *)0x0)) {
      local_108 = 0;
      String::parse_latin1((String *)&local_108,"AudioStreamPlaybackResampled");
      StringName::StringName((StringName *)&local_100,(String *)&local_108,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)&local_f8,(StringName *)&local_100);
      if (local_f0[0] == 0) {
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (lVar3 = 0, local_100 != 0)) goto LAB_00107e90;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
LAB_00107ea5:
        lVar3 = *(long *)(this + 8);
        pcVar5 = *(code **)(lVar3 + 200);
        if (((pcVar5 == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
           (pcVar5 = *(code **)(lVar3 + 0xc0), pcVar5 == (code *)0x0)) goto LAB_00107de2;
        uVar2 = (*pcVar5)(*(undefined8 *)(lVar3 + 0xa0),this + 0x6b8);
        *(undefined8 *)(this + 0x6c8) = uVar2;
      }
      else {
        lVar3 = *(long *)(local_f0[0] + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (local_100 != 0)) {
LAB_00107e90:
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
        if (lVar3 == 0) goto LAB_00107ea5;
      }
      lVar3 = *(long *)(this + 8);
    }
    else {
      uVar2 = (*pcVar5)(*(undefined8 *)(lVar3 + 0xa0),this + 0x6b8,uVar1);
      *(undefined8 *)(this + 0x6c8) = uVar2;
      lVar3 = *(long *)(this + 8);
    }
LAB_00107de2:
    if (*(char *)(lVar3 + 0x29) != '\0') {
      plVar4 = (long *)operator_new(0x18,"");
      *plVar4 = (long)(this + 0x6c8);
      plVar4[1] = (long)(this + 0x6c0);
      plVar4[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar4;
    }
    this[0x6c0] = (AudioStreamPlaybackResampled)0x1;
    MethodInfo::~MethodInfo((MethodInfo *)local_c8);
  }
  pcVar5 = *(code **)(this + 0x6c8);
  if (pcVar5 == (code *)0x0) {
    if (_gdvirtual__get_stream_sampling_rate_call(float&)::first_print != '\0') {
      local_f8 = 0;
      local_c8[0] = 0x114308;
      local_c8[1] = 0;
      uStack_c0 = 0x23;
      uStack_bc = 0;
      String::parse_latin1((StrRange *)&local_f8);
      local_108 = 0;
      local_c8[0] = 0x113b62;
      local_c8[1] = 0;
      uStack_c0 = 0x19;
      uStack_bc = 0;
      String::parse_latin1((StrRange *)&local_108);
      local_c8[0] = 0x1204f4;
      local_c8[1] = 0;
      local_118 = 0;
      uStack_c0 = 2;
      uStack_bc = 0;
      String::parse_latin1((StrRange *)&local_118);
      (**(code **)(*(long *)this + 0x48))(local_128,this);
      operator+((char *)local_120,(String *)"Required virtual method ");
      String::operator+(local_110,(String *)local_120);
      String::operator+((String *)&local_100,local_110);
      String::operator+((String *)local_c8,(String *)&local_100);
      _err_print_error("_gdvirtual__get_stream_sampling_rate_call","servers/audio/audio_stream.h",
                       0x95,(String *)local_c8,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_c8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_110);
      CowData<char32_t>::_unref(local_120);
      CowData<char32_t>::_unref(local_128);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
      _gdvirtual__get_stream_sampling_rate_call(float&)::first_print = '\0';
    }
  }
  else if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
    (*pcVar5)(*(undefined8 *)(this + 0x10),0,local_c8);
  }
  else {
    (**(code **)(*(long *)(this + 8) + 0xe0))
              (*(undefined8 *)(this + 0x10),this + 0x6b8,pcVar5,0,local_c8);
  }
LAB_00107abc:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* AudioStream::get_stream_name() const */

void AudioStream::get_stream_name(void)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  code *pcVar6;
  long in_RSI;
  CowData<char32_t> *in_RDI;
  long in_FS_OFFSET;
  undefined8 local_108;
  long local_100;
  long local_f8;
  long local_f0 [5];
  int local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  ulong local_70;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  plVar5 = *(long **)(in_RSI + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)in_RDI = 0;
  if (plVar5 != (long *)0x0) {
    local_c8 = 0;
    uStack_c4 = 0;
    uStack_c0 = 0;
    (**(code **)(*plVar5 + 0x60))(local_58,plVar5,in_RSI + 0x288,0,0,&local_c8);
    if (local_c8 == 0) {
      Variant::operator_cast_to_String((Variant *)&local_f8);
      if (*(long *)in_RDI != local_f8) {
        CowData<char32_t>::_unref(in_RDI);
        lVar4 = local_f8;
        local_f8 = 0;
        *(long *)in_RDI = lVar4;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_0010809d;
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(in_RSI + 8) != 0) && (*(char *)(in_RSI + 0x290) == '\0')) {
    local_c8 = 0;
    uStack_c4 = 0;
    local_b8 = (undefined1  [16])0x0;
    uStack_c0 = 0;
    uStack_bc = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_98 = 6;
    local_90 = 1;
    local_88 = 0;
    local_78 = 0;
    local_70 = 0;
    local_60 = 0;
    String::parse_latin1((String *)&local_c8,"_get_stream_name");
    local_90 = CONCAT44(local_90._4_4_,0xc);
    GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void> *)&local_f8);
    PropertyInfo::operator=((PropertyInfo *)&uStack_c0,(PropertyInfo *)&local_f8);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
    local_70 = local_70 & 0xffffffff00000000;
    uVar2 = MethodInfo::get_compatibility_hash();
    lVar4 = *(long *)(in_RSI + 8);
    *(undefined8 *)(in_RSI + 0x298) = 0;
    pcVar6 = *(code **)(lVar4 + 0xd8);
    if (((pcVar6 == (code *)0x0) || (*(long *)(lVar4 + 0xe0) == 0)) &&
       (pcVar6 = *(code **)(lVar4 + 0xd0), pcVar6 == (code *)0x0)) {
      local_108 = 0;
      String::parse_latin1((String *)&local_108,"AudioStream");
      StringName::StringName((StringName *)&local_100,(String *)&local_108,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)&local_f8,(StringName *)&local_100);
      if (local_f0[0] == 0) {
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (lVar4 = 0, local_100 != 0)) goto LAB_0010832f;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
LAB_00108344:
        lVar4 = *(long *)(in_RSI + 8);
        pcVar6 = *(code **)(lVar4 + 200);
        if (((pcVar6 == (code *)0x0) || (*(long *)(lVar4 + 0xe0) == 0)) &&
           (pcVar6 = *(code **)(lVar4 + 0xc0), pcVar6 == (code *)0x0)) goto LAB_00108281;
        uVar3 = (*pcVar6)(*(undefined8 *)(lVar4 + 0xa0),in_RSI + 0x288);
        *(undefined8 *)(in_RSI + 0x298) = uVar3;
      }
      else {
        lVar4 = *(long *)(local_f0[0] + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (local_100 != 0)) {
LAB_0010832f:
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
        if (lVar4 == 0) goto LAB_00108344;
      }
      lVar4 = *(long *)(in_RSI + 8);
    }
    else {
      uVar3 = (*pcVar6)(*(undefined8 *)(lVar4 + 0xa0),in_RSI + 0x288,uVar2);
      *(undefined8 *)(in_RSI + 0x298) = uVar3;
      lVar4 = *(long *)(in_RSI + 8);
    }
LAB_00108281:
    if (*(char *)(lVar4 + 0x29) != '\0') {
      plVar5 = (long *)operator_new(0x18,"");
      *plVar5 = in_RSI + 0x298;
      plVar5[1] = in_RSI + 0x290;
      plVar5[2] = *(long *)(in_RSI + 0x168);
      *(long **)(in_RSI + 0x168) = plVar5;
    }
    *(undefined1 *)(in_RSI + 0x290) = 1;
    MethodInfo::~MethodInfo((MethodInfo *)&local_c8);
  }
  pcVar6 = *(code **)(in_RSI + 0x298);
  if (pcVar6 != (code *)0x0) {
    local_f8 = 0;
    pcVar1 = *(code **)(*(long *)(in_RSI + 8) + 0xe0);
    if (pcVar1 == (code *)0x0) {
      (*pcVar6)(*(undefined8 *)(in_RSI + 0x10),0,(CowData<char32_t> *)&local_f8);
      local_c8 = 0;
      uStack_c4 = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)&local_f8);
      lVar4 = CONCAT44(uStack_c4,local_c8);
    }
    else {
      (*pcVar1)(*(undefined8 *)(in_RSI + 0x10),in_RSI + 0x288,pcVar6,0,
                (CowData<char32_t> *)&local_f8);
      local_c8 = 0;
      uStack_c4 = 0;
      lVar4 = local_f8;
      if (local_f8 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)&local_f8);
        lVar4 = CONCAT44(uStack_c4,local_c8);
      }
    }
    if (*(long *)in_RDI != lVar4) {
      CowData<char32_t>::_unref(in_RDI);
      *(long *)in_RDI = lVar4;
      local_c8 = 0;
      uStack_c4 = 0;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  }
LAB_0010809d:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* AudioStream::get_length() const */

double __thiscall AudioStream::get_length(AudioStream *this)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  long in_FS_OFFSET;
  double dVar6;
  undefined8 local_108;
  long local_100;
  GetTypeInfo<double,void> local_f8 [8];
  long local_f0 [5];
  int local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  plVar4 = *(long **)(this + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar4 != (long *)0x0) {
    local_c8 = 0;
    uStack_c4 = 0;
    uStack_c0 = 0;
    (**(code **)(*plVar4 + 0x60))((Variant *)local_58,plVar4,this + 0x2a0,0,0,&local_c8);
    if (local_c8 == 0) {
      dVar6 = Variant::operator_cast_to_double((Variant *)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_001084dc;
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(this + 8) != 0) && (this[0x2a8] == (AudioStream)0x0)) {
    local_c8 = 0;
    uStack_c4 = 0;
    local_b8 = (undefined1  [16])0x0;
    uStack_c0 = 0;
    uStack_bc = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_98 = 6;
    local_90 = 1;
    local_88 = 0;
    local_78 = 0;
    local_70 = 0;
    local_60 = 0;
    String::parse_latin1((String *)&local_c8,"_get_length");
    local_90 = CONCAT44(local_90._4_4_,0xc);
    GetTypeInfo<double,void>::get_class_info(local_f8);
    PropertyInfo::operator=((PropertyInfo *)&uStack_c0,(PropertyInfo *)local_f8);
    PropertyInfo::~PropertyInfo((PropertyInfo *)local_f8);
    local_70 = CONCAT44(local_70._4_4_,10);
    uVar1 = MethodInfo::get_compatibility_hash();
    lVar3 = *(long *)(this + 8);
    *(undefined8 *)(this + 0x2b0) = 0;
    pcVar5 = *(code **)(lVar3 + 0xd8);
    if (((pcVar5 == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
       (pcVar5 = *(code **)(lVar3 + 0xd0), pcVar5 == (code *)0x0)) {
      local_108 = 0;
      String::parse_latin1((String *)&local_108,"AudioStream");
      StringName::StringName((StringName *)&local_100,(String *)&local_108,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)local_f8,(StringName *)&local_100);
      if (local_f0[0] == 0) {
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (lVar3 = 0, local_100 != 0)) goto LAB_00108718;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
LAB_0010872d:
        lVar3 = *(long *)(this + 8);
        pcVar5 = *(code **)(lVar3 + 200);
        if (((pcVar5 == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
           (pcVar5 = *(code **)(lVar3 + 0xc0), pcVar5 == (code *)0x0)) goto LAB_00108670;
        uVar2 = (*pcVar5)(*(undefined8 *)(lVar3 + 0xa0),this + 0x2a0);
        *(undefined8 *)(this + 0x2b0) = uVar2;
      }
      else {
        lVar3 = *(long *)(local_f0[0] + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (local_100 != 0)) {
LAB_00108718:
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
        if (lVar3 == 0) goto LAB_0010872d;
      }
      lVar3 = *(long *)(this + 8);
    }
    else {
      uVar2 = (*pcVar5)(*(undefined8 *)(lVar3 + 0xa0),this + 0x2a0,uVar1);
      *(undefined8 *)(this + 0x2b0) = uVar2;
      lVar3 = *(long *)(this + 8);
    }
LAB_00108670:
    if (*(char *)(lVar3 + 0x29) != '\0') {
      plVar4 = (long *)operator_new(0x18,"");
      *plVar4 = (long)(this + 0x2b0);
      plVar4[1] = (long)(this + 0x2a8);
      plVar4[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar4;
    }
    this[0x2a8] = (AudioStream)0x1;
    MethodInfo::~MethodInfo((MethodInfo *)&local_c8);
  }
  pcVar5 = *(code **)(this + 0x2b0);
  dVar6 = 0.0;
  if (pcVar5 != (code *)0x0) {
    if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
      (*pcVar5)(*(undefined8 *)(this + 0x10),0,&local_c8);
      dVar6 = (double)CONCAT44(uStack_c4,local_c8);
    }
    else {
      (**(code **)(*(long *)(this + 8) + 0xe0))
                (*(undefined8 *)(this + 0x10),this + 0x2a0,pcVar5,0,&local_c8);
      dVar6 = (double)CONCAT44(uStack_c4,local_c8);
    }
  }
LAB_001084dc:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return dVar6;
}



/* AudioStream::is_monophonic() const */

bool __thiscall AudioStream::is_monophonic(AudioStream *this)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  long in_FS_OFFSET;
  bool bVar6;
  undefined8 local_108;
  long local_100;
  GetTypeInfo<bool,void> local_f8 [8];
  long local_f0 [5];
  int local_c8 [2];
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  ulong local_70;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  plVar4 = *(long **)(this + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar4 != (long *)0x0) {
    local_c8[0] = 0;
    local_c8[1] = 0;
    uStack_c0 = 0;
    (**(code **)(*plVar4 + 0x60))((Variant *)local_58,plVar4,this + 0x2b8,0,0,local_c8);
    if (local_c8[0] == 0) {
      bVar6 = Variant::operator_cast_to_bool((Variant *)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_001088ce;
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(this + 8) != 0) && (this[0x2c0] == (AudioStream)0x0)) {
    local_c8[0] = 0;
    local_c8[1] = 0;
    local_b8 = (undefined1  [16])0x0;
    uStack_c0 = 0;
    uStack_bc = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_98 = 6;
    local_90 = 1;
    local_88 = 0;
    local_78 = 0;
    local_70 = 0;
    local_60 = 0;
    String::parse_latin1((String *)local_c8,"_is_monophonic");
    local_90 = CONCAT44(local_90._4_4_,0xc);
    GetTypeInfo<bool,void>::get_class_info(local_f8);
    PropertyInfo::operator=((PropertyInfo *)&uStack_c0,(PropertyInfo *)local_f8);
    PropertyInfo::~PropertyInfo((PropertyInfo *)local_f8);
    local_70 = local_70 & 0xffffffff00000000;
    uVar1 = MethodInfo::get_compatibility_hash();
    lVar3 = *(long *)(this + 8);
    *(undefined8 *)(this + 0x2c8) = 0;
    pcVar5 = *(code **)(lVar3 + 0xd8);
    if (((pcVar5 == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
       (pcVar5 = *(code **)(lVar3 + 0xd0), pcVar5 == (code *)0x0)) {
      local_108 = 0;
      String::parse_latin1((String *)&local_108,"AudioStream");
      StringName::StringName((StringName *)&local_100,(String *)&local_108,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)local_f8,(StringName *)&local_100);
      if (local_f0[0] == 0) {
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (lVar3 = 0, local_100 != 0)) goto LAB_00108b08;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
LAB_00108b1d:
        lVar3 = *(long *)(this + 8);
        pcVar5 = *(code **)(lVar3 + 200);
        if (((pcVar5 == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
           (pcVar5 = *(code **)(lVar3 + 0xc0), pcVar5 == (code *)0x0)) goto LAB_00108a60;
        uVar2 = (*pcVar5)(*(undefined8 *)(lVar3 + 0xa0),this + 0x2b8);
        *(undefined8 *)(this + 0x2c8) = uVar2;
      }
      else {
        lVar3 = *(long *)(local_f0[0] + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (local_100 != 0)) {
LAB_00108b08:
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
        if (lVar3 == 0) goto LAB_00108b1d;
      }
      lVar3 = *(long *)(this + 8);
    }
    else {
      uVar2 = (*pcVar5)(*(undefined8 *)(lVar3 + 0xa0),this + 0x2b8,uVar1);
      *(undefined8 *)(this + 0x2c8) = uVar2;
      lVar3 = *(long *)(this + 8);
    }
LAB_00108a60:
    if (*(char *)(lVar3 + 0x29) != '\0') {
      plVar4 = (long *)operator_new(0x18,"");
      *plVar4 = (long)(this + 0x2c8);
      plVar4[1] = (long)(this + 0x2c0);
      plVar4[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar4;
    }
    this[0x2c0] = (AudioStream)0x1;
    MethodInfo::~MethodInfo((MethodInfo *)local_c8);
  }
  pcVar5 = *(code **)(this + 0x2c8);
  bVar6 = true;
  if (pcVar5 != (code *)0x0) {
    if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
      (*pcVar5)(*(undefined8 *)(this + 0x10),0,local_c8);
      bVar6 = local_c8[0]._0_1_ != (String)0x0;
    }
    else {
      (**(code **)(*(long *)(this + 8) + 0xe0))
                (*(undefined8 *)(this + 0x10),this + 0x2b8,pcVar5,0,local_c8);
      bVar6 = local_c8[0]._0_1_ != (String)0x0;
    }
  }
LAB_001088ce:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar6;
}



/* AudioStream::get_bpm() const */

double __thiscall AudioStream::get_bpm(AudioStream *this)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  long in_FS_OFFSET;
  double dVar6;
  undefined8 local_108;
  long local_100;
  GetTypeInfo<double,void> local_f8 [8];
  long local_f0 [5];
  int local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  plVar4 = *(long **)(this + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar4 != (long *)0x0) {
    local_c8 = 0;
    uStack_c4 = 0;
    uStack_c0 = 0;
    (**(code **)(*plVar4 + 0x60))((Variant *)local_58,plVar4,this + 0x2d0,0,0,&local_c8);
    if (local_c8 == 0) {
      dVar6 = Variant::operator_cast_to_double((Variant *)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_00108cbc;
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(this + 8) != 0) && (this[0x2d8] == (AudioStream)0x0)) {
    local_c8 = 0;
    uStack_c4 = 0;
    local_b8 = (undefined1  [16])0x0;
    uStack_c0 = 0;
    uStack_bc = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_98 = 6;
    local_90 = 1;
    local_88 = 0;
    local_78 = 0;
    local_70 = 0;
    local_60 = 0;
    String::parse_latin1((String *)&local_c8,"_get_bpm");
    local_90 = CONCAT44(local_90._4_4_,0xc);
    GetTypeInfo<double,void>::get_class_info(local_f8);
    PropertyInfo::operator=((PropertyInfo *)&uStack_c0,(PropertyInfo *)local_f8);
    PropertyInfo::~PropertyInfo((PropertyInfo *)local_f8);
    local_70 = CONCAT44(local_70._4_4_,10);
    uVar1 = MethodInfo::get_compatibility_hash();
    lVar3 = *(long *)(this + 8);
    *(undefined8 *)(this + 0x2e0) = 0;
    pcVar5 = *(code **)(lVar3 + 0xd8);
    if (((pcVar5 == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
       (pcVar5 = *(code **)(lVar3 + 0xd0), pcVar5 == (code *)0x0)) {
      local_108 = 0;
      String::parse_latin1((String *)&local_108,"AudioStream");
      StringName::StringName((StringName *)&local_100,(String *)&local_108,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)local_f8,(StringName *)&local_100);
      if (local_f0[0] == 0) {
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (lVar3 = 0, local_100 != 0)) goto LAB_00108ef8;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
LAB_00108f0d:
        lVar3 = *(long *)(this + 8);
        pcVar5 = *(code **)(lVar3 + 200);
        if (((pcVar5 == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
           (pcVar5 = *(code **)(lVar3 + 0xc0), pcVar5 == (code *)0x0)) goto LAB_00108e50;
        uVar2 = (*pcVar5)(*(undefined8 *)(lVar3 + 0xa0),this + 0x2d0);
        *(undefined8 *)(this + 0x2e0) = uVar2;
      }
      else {
        lVar3 = *(long *)(local_f0[0] + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (local_100 != 0)) {
LAB_00108ef8:
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
        if (lVar3 == 0) goto LAB_00108f0d;
      }
      lVar3 = *(long *)(this + 8);
    }
    else {
      uVar2 = (*pcVar5)(*(undefined8 *)(lVar3 + 0xa0),this + 0x2d0,uVar1);
      *(undefined8 *)(this + 0x2e0) = uVar2;
      lVar3 = *(long *)(this + 8);
    }
LAB_00108e50:
    if (*(char *)(lVar3 + 0x29) != '\0') {
      plVar4 = (long *)operator_new(0x18,"");
      *plVar4 = (long)(this + 0x2e0);
      plVar4[1] = (long)(this + 0x2d8);
      plVar4[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar4;
    }
    this[0x2d8] = (AudioStream)0x1;
    MethodInfo::~MethodInfo((MethodInfo *)&local_c8);
  }
  pcVar5 = *(code **)(this + 0x2e0);
  dVar6 = 0.0;
  if (pcVar5 != (code *)0x0) {
    if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
      (*pcVar5)(*(undefined8 *)(this + 0x10),0,&local_c8);
      dVar6 = (double)CONCAT44(uStack_c4,local_c8);
    }
    else {
      (**(code **)(*(long *)(this + 8) + 0xe0))
                (*(undefined8 *)(this + 0x10),this + 0x2d0,pcVar5,0,&local_c8);
      dVar6 = (double)CONCAT44(uStack_c4,local_c8);
    }
  }
LAB_00108cbc:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return dVar6;
}



/* AudioStream::has_loop() const */

bool __thiscall AudioStream::has_loop(AudioStream *this)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  long in_FS_OFFSET;
  bool bVar6;
  undefined8 local_108;
  long local_100;
  GetTypeInfo<bool,void> local_f8 [8];
  long local_f0 [5];
  int local_c8 [2];
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  ulong local_70;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  plVar4 = *(long **)(this + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar4 != (long *)0x0) {
    local_c8[0] = 0;
    local_c8[1] = 0;
    uStack_c0 = 0;
    (**(code **)(*plVar4 + 0x60))((Variant *)local_58,plVar4,this + 0x2e8,0,0,local_c8);
    if (local_c8[0] == 0) {
      bVar6 = Variant::operator_cast_to_bool((Variant *)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_001090a7;
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(this + 8) != 0) && (this[0x2f0] == (AudioStream)0x0)) {
    local_c8[0] = 0;
    local_c8[1] = 0;
    local_b8 = (undefined1  [16])0x0;
    uStack_c0 = 0;
    uStack_bc = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_98 = 6;
    local_90 = 1;
    local_88 = 0;
    local_78 = 0;
    local_70 = 0;
    local_60 = 0;
    String::parse_latin1((String *)local_c8,"_has_loop");
    local_90 = CONCAT44(local_90._4_4_,0xc);
    GetTypeInfo<bool,void>::get_class_info(local_f8);
    PropertyInfo::operator=((PropertyInfo *)&uStack_c0,(PropertyInfo *)local_f8);
    PropertyInfo::~PropertyInfo((PropertyInfo *)local_f8);
    local_70 = local_70 & 0xffffffff00000000;
    uVar1 = MethodInfo::get_compatibility_hash();
    lVar3 = *(long *)(this + 8);
    *(undefined8 *)(this + 0x2f8) = 0;
    pcVar5 = *(code **)(lVar3 + 0xd8);
    if (((pcVar5 == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
       (pcVar5 = *(code **)(lVar3 + 0xd0), pcVar5 == (code *)0x0)) {
      local_108 = 0;
      String::parse_latin1((String *)&local_108,"AudioStream");
      StringName::StringName((StringName *)&local_100,(String *)&local_108,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)local_f8,(StringName *)&local_100);
      if (local_f0[0] == 0) {
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (lVar3 = 0, local_100 != 0)) goto LAB_001092d8;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
LAB_001092ed:
        lVar3 = *(long *)(this + 8);
        pcVar5 = *(code **)(lVar3 + 200);
        if (((pcVar5 == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
           (pcVar5 = *(code **)(lVar3 + 0xc0), pcVar5 == (code *)0x0)) goto LAB_00109230;
        uVar2 = (*pcVar5)(*(undefined8 *)(lVar3 + 0xa0),this + 0x2e8);
        *(undefined8 *)(this + 0x2f8) = uVar2;
      }
      else {
        lVar3 = *(long *)(local_f0[0] + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (local_100 != 0)) {
LAB_001092d8:
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
        if (lVar3 == 0) goto LAB_001092ed;
      }
      lVar3 = *(long *)(this + 8);
    }
    else {
      uVar2 = (*pcVar5)(*(undefined8 *)(lVar3 + 0xa0),this + 0x2e8,uVar1);
      *(undefined8 *)(this + 0x2f8) = uVar2;
      lVar3 = *(long *)(this + 8);
    }
LAB_00109230:
    if (*(char *)(lVar3 + 0x29) != '\0') {
      plVar4 = (long *)operator_new(0x18,"");
      *plVar4 = (long)(this + 0x2f8);
      plVar4[1] = (long)(this + 0x2f0);
      plVar4[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar4;
    }
    this[0x2f0] = (AudioStream)0x1;
    MethodInfo::~MethodInfo((MethodInfo *)local_c8);
  }
  pcVar5 = *(code **)(this + 0x2f8);
  bVar6 = false;
  if (pcVar5 != (code *)0x0) {
    if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
      (*pcVar5)(*(undefined8 *)(this + 0x10),0,local_c8);
      bVar6 = local_c8[0]._0_1_ != (String)0x0;
    }
    else {
      (**(code **)(*(long *)(this + 8) + 0xe0))
                (*(undefined8 *)(this + 0x10),this + 0x2e8,pcVar5,0,local_c8);
      bVar6 = local_c8[0]._0_1_ != (String)0x0;
    }
  }
LAB_001090a7:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar6;
}



/* AudioStream::get_bar_beats() const */

int __thiscall AudioStream::get_bar_beats(AudioStream *this)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  code *pcVar6;
  long in_FS_OFFSET;
  undefined8 local_108;
  long local_100;
  GetTypeInfo<int,void> local_f8 [8];
  long local_f0 [5];
  int local_c8 [2];
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  plVar5 = *(long **)(this + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar5 != (long *)0x0) {
    local_c8[0] = 0;
    local_c8[1] = 0;
    uStack_c0 = 0;
    (**(code **)(*plVar5 + 0x60))((Variant *)local_58,plVar5,this + 0x300,0,0,local_c8);
    if (local_c8[0] == 0) {
      iVar1 = Variant::operator_cast_to_int((Variant *)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_00109483;
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(this + 8) != 0) && (this[0x308] == (AudioStream)0x0)) {
    local_c8[0] = 0;
    local_c8[1] = 0;
    local_b8 = (undefined1  [16])0x0;
    uStack_c0 = 0;
    uStack_bc = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_98 = 6;
    local_90 = 1;
    local_88 = 0;
    local_78 = 0;
    local_70 = 0;
    local_60 = 0;
    String::parse_latin1((String *)local_c8,"_get_bar_beats");
    local_90 = CONCAT44(local_90._4_4_,0xc);
    GetTypeInfo<int,void>::get_class_info(local_f8);
    PropertyInfo::operator=((PropertyInfo *)&uStack_c0,(PropertyInfo *)local_f8);
    PropertyInfo::~PropertyInfo((PropertyInfo *)local_f8);
    local_70 = CONCAT44(local_70._4_4_,3);
    uVar2 = MethodInfo::get_compatibility_hash();
    lVar4 = *(long *)(this + 8);
    *(undefined8 *)(this + 0x310) = 0;
    pcVar6 = *(code **)(lVar4 + 0xd8);
    if (((pcVar6 == (code *)0x0) || (*(long *)(lVar4 + 0xe0) == 0)) &&
       (pcVar6 = *(code **)(lVar4 + 0xd0), pcVar6 == (code *)0x0)) {
      local_108 = 0;
      String::parse_latin1((String *)&local_108,"AudioStream");
      StringName::StringName((StringName *)&local_100,(String *)&local_108,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)local_f8,(StringName *)&local_100);
      if (local_f0[0] == 0) {
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (lVar4 = 0, local_100 != 0)) goto LAB_001096b8;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
LAB_001096cd:
        lVar4 = *(long *)(this + 8);
        pcVar6 = *(code **)(lVar4 + 200);
        if (((pcVar6 == (code *)0x0) || (*(long *)(lVar4 + 0xe0) == 0)) &&
           (pcVar6 = *(code **)(lVar4 + 0xc0), pcVar6 == (code *)0x0)) goto LAB_00109608;
        uVar3 = (*pcVar6)(*(undefined8 *)(lVar4 + 0xa0),this + 0x300);
        *(undefined8 *)(this + 0x310) = uVar3;
      }
      else {
        lVar4 = *(long *)(local_f0[0] + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (local_100 != 0)) {
LAB_001096b8:
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
        if (lVar4 == 0) goto LAB_001096cd;
      }
      lVar4 = *(long *)(this + 8);
    }
    else {
      uVar3 = (*pcVar6)(*(undefined8 *)(lVar4 + 0xa0),this + 0x300,uVar2);
      *(undefined8 *)(this + 0x310) = uVar3;
      lVar4 = *(long *)(this + 8);
    }
LAB_00109608:
    if (*(char *)(lVar4 + 0x29) != '\0') {
      plVar5 = (long *)operator_new(0x18,"");
      *plVar5 = (long)(this + 0x310);
      plVar5[1] = (long)(this + 0x308);
      plVar5[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar5;
    }
    this[0x308] = (AudioStream)0x1;
    MethodInfo::~MethodInfo((MethodInfo *)local_c8);
  }
  pcVar6 = *(code **)(this + 0x310);
  iVar1 = 0;
  if (pcVar6 != (code *)0x0) {
    if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
      (*pcVar6)(*(undefined8 *)(this + 0x10),0,local_c8);
      iVar1 = local_c8[0];
    }
    else {
      (**(code **)(*(long *)(this + 8) + 0xe0))
                (*(undefined8 *)(this + 0x10),this + 0x300,pcVar6,0,local_c8);
      iVar1 = local_c8[0];
    }
  }
LAB_00109483:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}



/* AudioStream::get_beat_count() const */

int __thiscall AudioStream::get_beat_count(AudioStream *this)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  code *pcVar6;
  long in_FS_OFFSET;
  undefined8 local_108;
  long local_100;
  GetTypeInfo<int,void> local_f8 [8];
  long local_f0 [5];
  int local_c8 [2];
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  plVar5 = *(long **)(this + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar5 != (long *)0x0) {
    local_c8[0] = 0;
    local_c8[1] = 0;
    uStack_c0 = 0;
    (**(code **)(*plVar5 + 0x60))((Variant *)local_58,plVar5,this + 0x318,0,0,local_c8);
    if (local_c8[0] == 0) {
      iVar1 = Variant::operator_cast_to_int((Variant *)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_00109863;
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(this + 8) != 0) && (this[800] == (AudioStream)0x0)) {
    local_c8[0] = 0;
    local_c8[1] = 0;
    local_b8 = (undefined1  [16])0x0;
    uStack_c0 = 0;
    uStack_bc = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_98 = 6;
    local_90 = 1;
    local_88 = 0;
    local_78 = 0;
    local_70 = 0;
    local_60 = 0;
    String::parse_latin1((String *)local_c8,"_get_beat_count");
    local_90 = CONCAT44(local_90._4_4_,0xc);
    GetTypeInfo<int,void>::get_class_info(local_f8);
    PropertyInfo::operator=((PropertyInfo *)&uStack_c0,(PropertyInfo *)local_f8);
    PropertyInfo::~PropertyInfo((PropertyInfo *)local_f8);
    local_70 = CONCAT44(local_70._4_4_,3);
    uVar2 = MethodInfo::get_compatibility_hash();
    lVar4 = *(long *)(this + 8);
    *(undefined8 *)(this + 0x328) = 0;
    pcVar6 = *(code **)(lVar4 + 0xd8);
    if (((pcVar6 == (code *)0x0) || (*(long *)(lVar4 + 0xe0) == 0)) &&
       (pcVar6 = *(code **)(lVar4 + 0xd0), pcVar6 == (code *)0x0)) {
      local_108 = 0;
      String::parse_latin1((String *)&local_108,"AudioStream");
      StringName::StringName((StringName *)&local_100,(String *)&local_108,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)local_f8,(StringName *)&local_100);
      if (local_f0[0] == 0) {
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (lVar4 = 0, local_100 != 0)) goto LAB_00109a98;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
LAB_00109aad:
        lVar4 = *(long *)(this + 8);
        pcVar6 = *(code **)(lVar4 + 200);
        if (((pcVar6 == (code *)0x0) || (*(long *)(lVar4 + 0xe0) == 0)) &&
           (pcVar6 = *(code **)(lVar4 + 0xc0), pcVar6 == (code *)0x0)) goto LAB_001099e8;
        uVar3 = (*pcVar6)(*(undefined8 *)(lVar4 + 0xa0),this + 0x318);
        *(undefined8 *)(this + 0x328) = uVar3;
      }
      else {
        lVar4 = *(long *)(local_f0[0] + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (local_100 != 0)) {
LAB_00109a98:
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
        if (lVar4 == 0) goto LAB_00109aad;
      }
      lVar4 = *(long *)(this + 8);
    }
    else {
      uVar3 = (*pcVar6)(*(undefined8 *)(lVar4 + 0xa0),this + 0x318,uVar2);
      *(undefined8 *)(this + 0x328) = uVar3;
      lVar4 = *(long *)(this + 8);
    }
LAB_001099e8:
    if (*(char *)(lVar4 + 0x29) != '\0') {
      plVar5 = (long *)operator_new(0x18,"");
      *plVar5 = (long)(this + 0x328);
      plVar5[1] = (long)(this + 800);
      plVar5[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar5;
    }
    this[800] = (AudioStream)0x1;
    MethodInfo::~MethodInfo((MethodInfo *)local_c8);
  }
  pcVar6 = *(code **)(this + 0x328);
  iVar1 = 0;
  if (pcVar6 != (code *)0x0) {
    if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
      (*pcVar6)(*(undefined8 *)(this + 0x10),0,local_c8);
      iVar1 = local_c8[0];
    }
    else {
      (**(code **)(*(long *)(this + 8) + 0xe0))
                (*(undefined8 *)(this + 0x10),this + 0x318,pcVar6,0,local_c8);
      iVar1 = local_c8[0];
    }
  }
LAB_00109863:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}



/* AudioStream::get_parameter_list(List<AudioStream::Parameter, DefaultAllocator>*) */

void __thiscall AudioStream::get_parameter_list(AudioStream *this,List *param_1)

{
  undefined1 auVar1 [16];
  char cVar2;
  int iVar3;
  Variant *pVVar4;
  undefined4 *puVar5;
  undefined1 (*pauVar6) [16];
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  code *pcVar10;
  uint uVar11;
  int iVar12;
  long in_FS_OFFSET;
  long local_1c8;
  Array local_180 [8];
  long local_178;
  long local_170;
  long local_168;
  long local_160;
  long local_158;
  undefined4 local_150;
  long local_148;
  undefined4 local_140;
  int local_138;
  undefined4 uStack_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  long lStack_128;
  undefined4 local_120;
  undefined4 uStack_11c;
  long local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_e8;
  ulong local_e0;
  undefined8 local_d0;
  int local_c8 [8];
  int local_a8 [2];
  undefined1 local_a0 [16];
  int local_88 [2];
  undefined1 local_80 [16];
  undefined4 local_70;
  long local_68;
  undefined4 local_60;
  int local_58 [2];
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Array::Array(local_180);
  local_88[0] = 0;
  local_88[1] = 0;
  local_138 = 0;
  uStack_134 = 0;
  local_80 = (undefined1  [16])0x0;
  uVar11 = (uint)local_180;
  Array::set_typed(uVar11,(StringName *)0x1b,(Variant *)&local_138);
  if ((StringName::configured != '\0') && (CONCAT44(uStack_134,local_138) != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_88[0]] != '\0') {
    Variant::_clear_internal();
  }
  plVar9 = *(long **)(this + 0x98);
  if (plVar9 != (long *)0x0) {
    local_138 = 0;
    uStack_134 = 0;
    local_130 = 0;
    (**(code **)(*plVar9 + 0x60))(local_a8,plVar9,this + 0x330,0,0,(Array *)&local_138);
    if (local_138 == 0) {
      Variant::operator_cast_to_Array((Variant *)&local_170);
      Array::Array((Array *)&local_168);
      local_88[0] = 0;
      local_88[1] = 0;
      local_178 = 0;
      local_80 = (undefined1  [16])0x0;
      Array::set_typed((uint)(Array *)&local_168,(StringName *)0x1b,(Variant *)&local_178);
      if ((StringName::configured != '\0') && (local_178 != 0)) {
        StringName::unref();
      }
      if (Variant::needs_deinit[local_88[0]] != '\0') {
        Variant::_clear_internal();
      }
      cVar2 = Array::is_same_typed((Array *)&local_168);
      if (cVar2 == '\0') {
        Array::assign((Array *)&local_168);
      }
      else {
        Array::_ref((Array *)&local_168);
      }
      Array::~Array((Array *)&local_170);
      Array::operator=(local_180,(Array *)&local_168);
      Array::~Array((Array *)&local_168);
      if (Variant::needs_deinit[local_a8[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_00109caf;
    }
    if (Variant::needs_deinit[local_a8[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(this + 8) != 0) && (this[0x338] == (AudioStream)0x0)) {
    local_138 = 0;
    uStack_134 = 0;
    lStack_128 = 0;
    local_120 = 0;
    uStack_11c = 0;
    local_130 = 0;
    uStack_12c = 0;
    local_118 = 0;
    local_110 = 0;
    local_108 = 6;
    local_100 = 1;
    local_f8 = 0;
    local_e8 = 0;
    local_e0 = 0;
    local_d0 = 0;
    String::parse_latin1((String *)&local_138,"_get_parameter_list");
    local_100 = CONCAT44(local_100._4_4_,0xc);
    GetTypeInfo<TypedArray<Dictionary>,void>::get_class_info
              ((GetTypeInfo<TypedArray<Dictionary>,void> *)&local_168);
    PropertyInfo::operator=((PropertyInfo *)&local_130,(PropertyInfo *)&local_168);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_168);
    local_e0 = local_e0 & 0xffffffff00000000;
    MethodInfo::get_compatibility_hash();
    *(undefined8 *)(this + 0x340) = 0;
    lVar8 = *(long *)(this + 8);
    pcVar10 = *(code **)(lVar8 + 0xd8);
    if (((pcVar10 == (code *)0x0) || (*(long *)(lVar8 + 0xe0) == 0)) &&
       (pcVar10 = *(code **)(lVar8 + 0xd0), pcVar10 == (code *)0x0)) {
      local_178 = 0;
      String::parse_latin1((String *)&local_178,"AudioStream");
      StringName::StringName((StringName *)&local_170,(String *)&local_178,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)&local_168,(StringName *)&local_170);
      if (local_160 == 0) {
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&local_160);
        local_1c8 = 0;
        if (StringName::configured != '\0') goto LAB_0010a72c;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
LAB_0010a74e:
        lVar8 = *(long *)(this + 8);
        pcVar10 = *(code **)(lVar8 + 200);
        if (((pcVar10 == (code *)0x0) || (*(long *)(lVar8 + 0xe0) == 0)) &&
           (pcVar10 = *(code **)(lVar8 + 0xc0), pcVar10 == (code *)0x0)) goto LAB_0010a649;
        uVar7 = (*pcVar10)(*(undefined8 *)(lVar8 + 0xa0),this + 0x330);
        *(undefined8 *)(this + 0x340) = uVar7;
      }
      else {
        local_1c8 = *(long *)(local_160 + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&local_160);
        if (StringName::configured != '\0') {
LAB_0010a72c:
          if (local_170 != 0) {
            StringName::unref();
          }
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
        if (local_1c8 == 0) goto LAB_0010a74e;
      }
      lVar8 = *(long *)(this + 8);
    }
    else {
      uVar7 = (*pcVar10)(*(undefined8 *)(lVar8 + 0xa0),this + 0x330);
      *(undefined8 *)(this + 0x340) = uVar7;
      lVar8 = *(long *)(this + 8);
    }
LAB_0010a649:
    if (*(char *)(lVar8 + 0x29) != '\0') {
      plVar9 = (long *)operator_new(0x18,"");
      *plVar9 = (long)(this + 0x340);
      plVar9[1] = (long)(this + 0x338);
      plVar9[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar9;
    }
    this[0x338] = (AudioStream)0x1;
    MethodInfo::~MethodInfo((MethodInfo *)&local_138);
  }
  if (*(long *)(this + 0x340) != 0) {
    Array::Array((Array *)&local_170);
    if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
      (**(code **)(this + 0x340))(*(undefined8 *)(this + 0x10),0,(Array *)&local_170);
    }
    else {
      (**(code **)(*(long *)(this + 8) + 0xe0))
                (*(undefined8 *)(this + 0x10),this + 0x330,*(undefined8 *)(this + 0x340),0,
                 (Array *)&local_170);
    }
    Array::Array((Array *)&local_138);
    local_88[0] = 0;
    local_88[1] = 0;
    local_168 = 0;
    local_80 = (undefined1  [16])0x0;
    Array::set_typed((uint)(Array *)&local_138,(StringName *)0x1b,(Variant *)&local_168);
    if ((StringName::configured != '\0') && (local_168 != 0)) {
      StringName::unref();
    }
    if (Variant::needs_deinit[local_88[0]] != '\0') {
      Variant::_clear_internal();
    }
    cVar2 = Array::is_same_typed((Array *)&local_138);
    if (cVar2 == '\0') {
      Array::assign((Array *)&local_138);
    }
    else {
      Array::_ref((Array *)&local_138);
    }
    Array::operator=(local_180,(Array *)&local_138);
    Array::~Array((Array *)&local_138);
    Array::~Array((Array *)&local_170);
  }
LAB_00109caf:
  iVar12 = 0;
  do {
    iVar3 = Array::size();
    if (iVar3 <= iVar12) {
      Array::~Array(local_180);
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    Array::operator[](uVar11);
    Variant::operator_cast_to_Dictionary((Variant *)&local_170);
    Variant::Variant((Variant *)local_88,"default_value");
    cVar2 = Dictionary::has((Variant *)&local_170);
    if (Variant::needs_deinit[local_88[0]] == '\0') {
      if (cVar2 == '\0') goto LAB_0010a270;
LAB_00109e6c:
      Variant::Variant((Variant *)local_c8,"default_value");
      pVVar4 = (Variant *)Dictionary::operator[]((Variant *)&local_170);
      PropertyInfo::from_dict((Dictionary *)&local_168);
      local_80 = (undefined1  [16])0x0;
      local_70 = 0;
      local_68 = 0;
      local_60 = 6;
      local_58[0] = 0;
      local_88[0] = (undefined4)local_168;
      local_50 = (undefined1  [16])0x0;
      if (local_160 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)local_80,(CowData *)&local_160);
      }
      StringName::operator=((StringName *)(local_80 + 8),(StringName *)&local_158);
      local_70 = local_150;
      if (local_68 != local_148) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)&local_148);
      }
      local_60 = local_140;
      Variant::operator=((Variant *)local_58,pVVar4);
      if (*(long *)param_1 == 0) {
        pauVar6 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
        *(undefined1 (**) [16])param_1 = pauVar6;
        *(undefined4 *)pauVar6[1] = 0;
        *pauVar6 = (undefined1  [16])0x0;
      }
      puVar5 = (undefined4 *)operator_new(0x60,DefaultAllocator::alloc);
      local_a8[0] = 0;
      local_a8[1] = 0;
      local_138 = 0;
      uStack_134 = 0;
      local_120 = 0;
      uStack_11c = 0;
      local_118 = 0;
      local_110 = CONCAT44(local_110._4_4_,6);
      local_a0 = (undefined1  [16])0x0;
      local_130 = 0;
      uStack_12c = 0;
      lStack_128 = 0;
      *puVar5 = 0;
      puVar5[6] = 0;
      *(undefined8 *)(puVar5 + 8) = 0;
      puVar5[10] = 6;
      puVar5[0xc] = 0;
      *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(puVar5 + 0xe) = (undefined1  [16])0x0;
      StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&lStack_128);
      puVar5[6] = local_120;
      if (*(long *)(puVar5 + 8) != local_118) {
        CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_118);
      }
      puVar5[10] = (undefined4)local_110;
      Variant::operator=((Variant *)(puVar5 + 0xc),(Variant *)local_a8);
      lVar8 = local_118;
      if (local_118 != 0) {
        LOCK();
        plVar9 = (long *)(local_118 + -0x10);
        *plVar9 = *plVar9 + -1;
        UNLOCK();
        if (*plVar9 == 0) {
          local_118 = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (lStack_128 != 0)) {
        StringName::unref();
      }
      if (CONCAT44(uStack_12c,local_130) != 0) {
        LOCK();
        plVar9 = (long *)(CONCAT44(uStack_12c,local_130) + -0x10);
        *plVar9 = *plVar9 + -1;
        UNLOCK();
        if (*plVar9 == 0) {
          lVar8 = CONCAT44(uStack_12c,local_130);
          local_130 = 0;
          uStack_12c = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
        }
      }
      if (Variant::needs_deinit[local_a8[0]] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined8 *)(puVar5 + 0x16) = 0;
      *(undefined1 (*) [16])(puVar5 + 0x12) = (undefined1  [16])0x0;
      *puVar5 = local_88[0];
      if (*(long *)(puVar5 + 2) != local_80._0_8_) {
        CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)local_80);
      }
      StringName::operator=((StringName *)(puVar5 + 4),(StringName *)(local_80 + 8));
      puVar5[6] = local_70;
      if (*(long *)(puVar5 + 8) != local_68) {
        CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_68);
      }
      puVar5[10] = local_60;
      Variant::operator=((Variant *)(puVar5 + 0xc),(Variant *)local_58);
      uVar7 = *(undefined8 *)(*(long *)param_1 + 8);
      *(long *)(puVar5 + 0x16) = *(long *)param_1;
      plVar9 = *(long **)param_1;
      *(undefined8 *)(puVar5 + 0x12) = 0;
      *(undefined8 *)(puVar5 + 0x14) = uVar7;
      if (plVar9[1] != 0) {
        *(undefined4 **)(plVar9[1] + 0x48) = puVar5;
      }
      plVar9[1] = (long)puVar5;
      if (*plVar9 == 0) {
        *plVar9 = (long)puVar5;
      }
      *(int *)(plVar9 + 2) = (int)plVar9[2] + 1;
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      lVar8 = local_68;
      if (local_68 != 0) {
        LOCK();
        plVar9 = (long *)(local_68 + -0x10);
        *plVar9 = *plVar9 + -1;
        UNLOCK();
        if (*plVar9 == 0) {
          local_68 = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_80._8_8_ != 0)) {
        StringName::unref();
      }
      uVar7 = local_80._0_8_;
      if (local_80._0_8_ != 0) {
        LOCK();
        plVar9 = (long *)(local_80._0_8_ + -0x10);
        *plVar9 = *plVar9 + -1;
        UNLOCK();
        if (*plVar9 == 0) {
          auVar1._8_8_ = 0;
          auVar1._0_8_ = local_80._8_8_;
          local_80 = auVar1 << 0x40;
          Memory::free_static((void *)(uVar7 + -0x10),false);
        }
      }
      lVar8 = local_148;
      if (local_148 != 0) {
        LOCK();
        plVar9 = (long *)(local_148 + -0x10);
        *plVar9 = *plVar9 + -1;
        UNLOCK();
        if (*plVar9 == 0) {
          local_148 = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_158 != 0)) {
        StringName::unref();
      }
      lVar8 = local_160;
      if (local_160 != 0) {
        LOCK();
        plVar9 = (long *)(local_160 + -0x10);
        *plVar9 = *plVar9 + -1;
        UNLOCK();
        if (*plVar9 == 0) {
          local_160 = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
        }
      }
      if (Variant::needs_deinit[local_c8[0]] != '\0') {
        Variant::_clear_internal();
      }
      Dictionary::~Dictionary((Dictionary *)&local_170);
    }
    else {
      Variant::_clear_internal();
      if (cVar2 != '\0') goto LAB_00109e6c;
LAB_0010a270:
      _err_print_error("get_parameter_list","servers/audio/audio_stream.cpp",0x146,
                       "Condition \"!d.has(\"default_value\")\" is true. Continuing.",0,0);
      Dictionary::~Dictionary((Dictionary *)&local_170);
    }
    iVar12 = iVar12 + 1;
  } while( true );
}



/* AudioStream::instantiate_playback() */

void AudioStream::instantiate_playback(void)

{
  code *pcVar1;
  Object *pOVar2;
  char cVar3;
  undefined4 uVar4;
  long lVar5;
  Ref *pRVar6;
  undefined8 uVar7;
  long *plVar8;
  code *pcVar9;
  Object *pOVar10;
  long in_RSI;
  undefined8 *in_RDI;
  long in_FS_OFFSET;
  Object *local_110;
  undefined8 local_108;
  Ref *local_100;
  Object *local_f8;
  long local_f0 [5];
  int local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  ulong local_70;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  plVar8 = *(long **)(in_RSI + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_110 = (Object *)0x0;
  if (plVar8 == (long *)0x0) {
LAB_0010a8ab:
    if ((*(long *)(in_RSI + 8) != 0) && (*(char *)(in_RSI + 0x278) == '\0')) {
      local_c8 = 0;
      uStack_c4 = 0;
      local_b8 = (undefined1  [16])0x0;
      uStack_c0 = 0;
      uStack_bc = 0;
      local_a8 = 0;
      local_a0 = 0;
      local_98 = 6;
      local_90 = 1;
      local_88 = 0;
      local_78 = 0;
      local_70 = 0;
      local_60 = 0;
      String::parse_latin1((String *)&local_c8,"_instantiate_playback");
      local_90 = CONCAT44(local_90._4_4_,0xc);
      GetTypeInfo<Ref<AudioStreamPlayback>,void>::get_class_info
                ((GetTypeInfo<Ref<AudioStreamPlayback>,void> *)&local_f8);
      PropertyInfo::operator=((PropertyInfo *)&uStack_c0,(PropertyInfo *)&local_f8);
      PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
      local_70 = local_70 & 0xffffffff00000000;
      uVar4 = MethodInfo::get_compatibility_hash();
      lVar5 = *(long *)(in_RSI + 8);
      *(undefined8 *)(in_RSI + 0x280) = 0;
      pcVar9 = *(code **)(lVar5 + 0xd8);
      if (((pcVar9 == (code *)0x0) || (*(long *)(lVar5 + 0xe0) == 0)) &&
         (pcVar9 = *(code **)(lVar5 + 0xd0), pcVar9 == (code *)0x0)) {
        local_108 = 0;
        String::parse_latin1((String *)&local_108,"AudioStream");
        StringName::StringName((StringName *)&local_100,(String *)&local_108,false);
        ClassDB::get_virtual_method_compatibility_hashes
                  ((StringName *)&local_f8,(StringName *)&local_100);
        if (local_f0[0] == 0) {
          CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
          if ((StringName::configured != '\0') && (lVar5 = 0, local_100 != (Ref *)0x0))
          goto LAB_0010ad73;
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
LAB_0010ad88:
          lVar5 = *(long *)(in_RSI + 8);
          pcVar9 = *(code **)(lVar5 + 200);
          if (((pcVar9 == (code *)0x0) || (*(long *)(lVar5 + 0xe0) == 0)) &&
             (pcVar9 = *(code **)(lVar5 + 0xc0), pcVar9 == (code *)0x0)) goto LAB_0010ac8b;
          uVar7 = (*pcVar9)(*(undefined8 *)(lVar5 + 0xa0),in_RSI + 0x270);
          *(undefined8 *)(in_RSI + 0x280) = uVar7;
        }
        else {
          lVar5 = *(long *)(local_f0[0] + -8);
          CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
          if ((StringName::configured != '\0') && (local_100 != (Ref *)0x0)) {
LAB_0010ad73:
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
          if (lVar5 == 0) goto LAB_0010ad88;
        }
        lVar5 = *(long *)(in_RSI + 8);
      }
      else {
        uVar7 = (*pcVar9)(*(undefined8 *)(lVar5 + 0xa0),in_RSI + 0x270,uVar4);
        *(undefined8 *)(in_RSI + 0x280) = uVar7;
        lVar5 = *(long *)(in_RSI + 8);
      }
LAB_0010ac8b:
      if (*(char *)(lVar5 + 0x29) != '\0') {
        plVar8 = (long *)operator_new(0x18,"");
        *plVar8 = in_RSI + 0x280;
        plVar8[1] = in_RSI + 0x278;
        plVar8[2] = *(long *)(in_RSI + 0x168);
        *(long **)(in_RSI + 0x168) = plVar8;
      }
      *(undefined1 *)(in_RSI + 0x278) = 1;
      MethodInfo::~MethodInfo((MethodInfo *)&local_c8);
    }
    pcVar9 = *(code **)(in_RSI + 0x280);
    if (pcVar9 == (code *)0x0) {
      _err_print_error("instantiate_playback","servers/audio/audio_stream.cpp",0x100,
                       "Method/function failed. Returning: Ref<AudioStreamPlayback>()",
                       "Method must be implemented!",0,0);
      *in_RDI = 0;
      goto LAB_0010a9e0;
    }
    local_f8 = (Object *)0x0;
    pcVar1 = *(code **)(*(long *)(in_RSI + 8) + 0xe0);
    if (pcVar1 == (code *)0x0) {
      (*pcVar9)(*(undefined8 *)(in_RSI + 0x10),0,&local_f8);
      local_c8 = 0;
      uStack_c4 = 0;
      Ref<AudioStreamPlayback>::operator=((Ref<AudioStreamPlayback> *)&local_c8,(Ref *)local_f8);
      Ref<AudioStreamPlayback>::operator=
                ((Ref<AudioStreamPlayback> *)&local_110,(Ref *)CONCAT44(uStack_c4,local_c8));
      Ref<AudioStreamPlayback>::unref((Ref<AudioStreamPlayback> *)&local_c8);
      pOVar10 = local_110;
    }
    else {
      (*pcVar1)(*(undefined8 *)(in_RSI + 0x10),in_RSI + 0x270,pcVar9,0,&local_f8);
      pOVar10 = local_f8;
      if (local_f8 == (Object *)0x0) {
LAB_0010a92c:
        uStack_c4 = 0;
        local_c8 = 0;
        pOVar10 = local_110;
      }
      else {
        local_c8 = (int)local_f8;
        uStack_c4 = (undefined4)((ulong)local_f8 >> 0x20);
        cVar3 = RefCounted::reference();
        if (cVar3 == '\0') goto LAB_0010a92c;
        local_110 = pOVar10;
        cVar3 = RefCounted::reference();
        if (cVar3 == '\0') {
          local_110 = (Object *)0x0;
          pOVar10 = (Object *)0x0;
        }
      }
      Ref<AudioStreamPlayback>::unref((Ref<AudioStreamPlayback> *)&local_c8);
    }
    if (((local_f8 != (Object *)0x0) &&
        (cVar3 = RefCounted::unreference(), pOVar2 = local_f8, cVar3 != '\0')) &&
       (cVar3 = predelete_handler(local_f8), cVar3 != '\0')) {
      (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
      Memory::free_static(pOVar2,false);
    }
  }
  else {
    local_c8 = 0;
    uStack_c4 = 0;
    uStack_c0 = 0;
    (**(code **)(*plVar8 + 0x60))(local_58,plVar8,in_RSI + 0x270,0,0,&local_c8);
    if (local_c8 != 0) {
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_0010a8ab;
    }
    local_100 = (Ref *)0x0;
    lVar5 = Variant::get_validated_object();
    if ((lVar5 == 0) ||
       (pRVar6 = (Ref *)__dynamic_cast(lVar5,&Object::typeinfo,&AudioStreamPlayback::typeinfo,0),
       pRVar6 == (Ref *)0x0)) {
      pRVar6 = (Ref *)0x0;
    }
    else {
      local_f8 = (Object *)0x0;
      local_100 = pRVar6;
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        local_100 = (Ref *)0x0;
        pRVar6 = (Ref *)0x0;
      }
      Ref<AudioStreamPlayback>::unref((Ref<AudioStreamPlayback> *)&local_f8);
    }
    Ref<AudioStreamPlayback>::operator=((Ref<AudioStreamPlayback> *)&local_110,pRVar6);
    Ref<AudioStreamPlayback>::unref((Ref<AudioStreamPlayback> *)&local_100);
    pOVar10 = local_110;
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
      pOVar10 = local_110;
    }
  }
  if (pOVar10 == (Object *)0x0) {
    *in_RDI = 0;
  }
  else {
    *in_RDI = pOVar10;
    cVar3 = RefCounted::reference();
    if (cVar3 == '\0') {
      *in_RDI = 0;
    }
    cVar3 = RefCounted::unreference();
    if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar10), cVar3 != '\0')) {
      (**(code **)(*(long *)pOVar10 + 0x140))(pOVar10);
      Memory::free_static(pOVar10,false);
    }
  }
LAB_0010a9e0:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Error CowData<AudioFrame>::resize<false>(long) [clone .isra.0] */

void __thiscall CowData<AudioFrame>::resize<false>(CowData<AudioFrame> *this,long param_1)

{
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
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return;
  }
  lVar10 = *(long *)this;
  if (lVar10 == 0) {
    if (param_1 == 0) {
      return;
    }
    _copy_on_write(this);
    lVar11 = 0;
    pCVar3 = (CowData<AudioFrame> *)0x0;
  }
  else {
    lVar11 = *(long *)(lVar10 + -8);
    if (param_1 == lVar11) {
      return;
    }
    if (param_1 == 0) {
      LOCK();
      plVar1 = (long *)(lVar10 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) {
        *(undefined8 *)this = 0;
        return;
      }
      lVar10 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar10 + -0x10),false);
      return;
    }
    _copy_on_write(this);
    pCVar3 = (CowData<AudioFrame> *)(lVar11 * 8);
    if (pCVar3 != (CowData<AudioFrame> *)0x0) {
      uVar4 = (ulong)(pCVar3 + -1) | (ulong)(pCVar3 + -1) >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      pCVar3 = (CowData<AudioFrame> *)((uVar4 | uVar4 >> 0x20) + 1);
    }
  }
  if (param_1 * 8 != 0) {
    uVar4 = param_1 * 8 - 1;
    uVar4 = uVar4 | uVar4 >> 1;
    uVar4 = uVar4 | uVar4 >> 2;
    uVar4 = uVar4 | uVar4 >> 4;
    uVar4 = uVar4 | uVar4 >> 8;
    uVar4 = uVar4 | uVar4 >> 0x10;
    pCVar9 = (CowData<AudioFrame> *)(uVar4 | uVar4 >> 0x20);
    pCVar8 = pCVar9 + 1;
    if (pCVar8 != (CowData<AudioFrame> *)0x0) {
      if (param_1 <= lVar11) {
        if ((pCVar8 != pCVar3) && (iVar2 = _realloc(this,(long)pCVar8), iVar2 != 0)) {
          return;
        }
        if (*(long *)this != 0) {
          *(long *)(*(long *)this + -8) = param_1;
          return;
        }
        FUN_001145f8();
        return;
      }
      if (pCVar8 == pCVar3) {
LAB_0010affc:
        puVar12 = *(undefined8 **)this;
        if (puVar12 == (undefined8 *)0x0) {
          resize<false>((long)pCVar9);
          return;
        }
        lVar10 = puVar12[-1];
        if (param_1 <= lVar10) goto LAB_0010af8d;
      }
      else {
        if (lVar11 != 0) {
          pCVar9 = this;
          iVar2 = _realloc(this,(long)pCVar8);
          if (iVar2 != 0) {
            return;
          }
          goto LAB_0010affc;
        }
        puVar5 = (undefined8 *)Memory::alloc_static((ulong)(pCVar9 + 0x11),false);
        if (puVar5 == (undefined8 *)0x0) {
          uVar7 = 0x171;
          pcVar6 = "Parameter \"mem_new\" is null.";
          goto LAB_0010b0a2;
        }
        puVar12 = puVar5 + 2;
        *puVar5 = 1;
        puVar5[1] = 0;
        *(undefined8 **)this = puVar12;
        lVar10 = 0;
      }
      memset(puVar12 + lVar10,0,(param_1 - lVar10) * 8);
LAB_0010af8d:
      puVar12[-1] = param_1;
      return;
    }
  }
  uVar7 = 0x16a;
  pcVar6 = 
  "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
  ;
LAB_0010b0a2:
  _err_print_error("resize","./core/templates/cowdata.h",uVar7,pcVar6,0,0);
  return;
}



/* AudioStreamPlayback::mix_audio(float, int) */

long AudioStreamPlayback::mix_audio(float param_1,int param_2)

{
  CowData<AudioFrame> *this;
  code *pcVar1;
  int iVar2;
  int in_EDX;
  long *in_RSI;
  undefined4 in_register_0000003c;
  long lVar3;
  
  lVar3 = CONCAT44(in_register_0000003c,param_2);
  this = (CowData<AudioFrame> *)(lVar3 + 8);
  *(undefined8 *)(lVar3 + 8) = 0;
  CowData<AudioFrame>::resize<false>(this,(long)in_EDX);
  pcVar1 = *(code **)(*in_RSI + 0x198);
  CowData<AudioFrame>::_copy_on_write(this);
  iVar2 = (*pcVar1)(param_1);
  CowData<AudioFrame>::resize<false>(this,(long)iVar2);
  return lVar3;
}



/* AudioStreamPlayback::_mix_audio_bind(float, int) */

long AudioStreamPlayback::_mix_audio_bind(float param_1,int param_2)

{
  CowData<Vector2> *this;
  long *plVar1;
  code *pcVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  int in_EDX;
  size_t __n;
  long *in_RSI;
  long lVar8;
  undefined4 in_register_0000003c;
  long lVar9;
  long lVar10;
  long lVar11;
  long in_FS_OFFSET;
  long local_40 [2];
  long local_30;
  
  lVar9 = CONCAT44(in_register_0000003c,param_2);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_40[0] = 0;
  CowData<AudioFrame>::resize<false>((CowData<AudioFrame> *)local_40,(long)in_EDX);
  pcVar2 = *(code **)(*in_RSI + 0x198);
  CowData<AudioFrame>::_copy_on_write((CowData<AudioFrame> *)local_40);
  iVar3 = (*pcVar2)(param_1);
  CowData<AudioFrame>::resize<false>((CowData<AudioFrame> *)local_40,(long)iVar3);
  lVar11 = local_40[0];
  *(undefined8 *)(lVar9 + 8) = 0;
  if (local_40[0] == 0) {
    CowData<Vector2>::_copy_on_write((CowData<Vector2> *)(lVar9 + 8));
    goto LAB_0010b2ee;
  }
  lVar7 = *(long *)(local_40[0] + -8);
  this = (CowData<Vector2> *)(lVar9 + 8);
  if (lVar7 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
LAB_0010b33d:
    CowData<Vector2>::_copy_on_write(this);
    lVar7 = *(long *)(lVar11 + -8);
    lVar8 = *(long *)(lVar9 + 8);
    lVar10 = lVar11;
    if (0 < lVar7) {
LAB_0010b2b9:
      lVar6 = 0;
      do {
        *(undefined8 *)(lVar8 + lVar6) = *(undefined8 *)(lVar11 + lVar6);
        lVar6 = lVar6 + 8;
      } while (lVar7 * 8 != lVar6);
      goto LAB_0010b2d1;
    }
  }
  else {
    if (lVar7 == 0) goto LAB_0010b33d;
    CowData<Vector2>::_copy_on_write(this);
    __n = lVar7 * 8;
    if ((__n == 0) ||
       (uVar4 = __n - 1 | __n - 1 >> 1, uVar4 = uVar4 | uVar4 >> 2, uVar4 = uVar4 | uVar4 >> 4,
       uVar4 = uVar4 | uVar4 >> 8, uVar4 = uVar4 | uVar4 >> 0x10, uVar4 = uVar4 | uVar4 >> 0x20,
       uVar4 == 0xffffffffffffffff)) {
      _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                       "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                       ,0,0);
      goto LAB_0010b33d;
    }
    puVar5 = (undefined8 *)Memory::alloc_static(uVar4 + 0x11,false);
    if (puVar5 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      goto LAB_0010b33d;
    }
    *puVar5 = 1;
    *(undefined8 **)(lVar9 + 8) = puVar5 + 2;
    memset(puVar5 + 2,0,__n);
    lVar10 = local_40[0];
    puVar5[1] = lVar7;
    CowData<Vector2>::_copy_on_write(this);
    lVar7 = *(long *)(lVar11 + -8);
    lVar8 = *(long *)(lVar9 + 8);
    if (0 < lVar7) goto LAB_0010b2b9;
LAB_0010b2d1:
    lVar11 = lVar10;
    if (lVar10 == 0) goto LAB_0010b2ee;
  }
  LOCK();
  plVar1 = (long *)(lVar11 + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    Memory::free_static((void *)(local_40[0] + -0x10),false);
  }
LAB_0010b2ee:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar9;
}



/* CowData<AudioStreamRandomizer::PoolEntry>::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<AudioStreamRandomizer::PoolEntry>::_copy_on_write
          (CowData<AudioStreamRandomizer::PoolEntry> *this)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  char cVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  
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
  if (lVar1 * 0x10 != 0) {
    uVar7 = lVar1 * 0x10 - 1;
    uVar7 = uVar7 | uVar7 >> 1;
    uVar7 = uVar7 | uVar7 >> 2;
    uVar7 = uVar7 | uVar7 >> 4;
    uVar7 = uVar7 | uVar7 >> 8;
    uVar7 = uVar7 | uVar7 >> 0x10;
    uVar7 = (uVar7 | uVar7 >> 0x20) + 0x11;
  }
  puVar5 = (undefined8 *)Memory::alloc_static(uVar7,false);
  if (puVar5 != (undefined8 *)0x0) {
    lVar9 = 0;
    *puVar5 = 1;
    puVar5[1] = lVar1;
    plVar6 = puVar5 + 2;
    if (lVar1 != 0) {
      do {
        plVar8 = (long *)(lVar9 * 0x10 + *(long *)this);
        *plVar6 = 0;
        lVar2 = *plVar8;
        if (lVar2 != 0) {
          *plVar6 = lVar2;
          cVar4 = RefCounted::reference();
          if (cVar4 == '\0') {
            *plVar6 = 0;
          }
        }
        lVar9 = lVar9 + 1;
        *(int *)(plVar6 + 1) = (int)plVar8[1];
        plVar6 = plVar6 + 2;
      } while (lVar1 != lVar9);
    }
    _unref(this);
    *(undefined8 **)this = puVar5 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* AudioStreamRandomizer::set_stream_probability_weight(int, float) */

void __thiscall
AudioStreamRandomizer::set_stream_probability_weight
          (AudioStreamRandomizer *this,int param_1,float param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long in_FS_OFFSET;
  
  lVar3 = (long)param_1;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  lVar4 = *(long *)(this + 0x3c0);
  if (param_1 < 0) {
    if (lVar4 == 0) goto LAB_0010b640;
    lVar4 = *(long *)(lVar4 + -8);
  }
  else if (lVar4 == 0) {
LAB_0010b640:
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(lVar4 + -8);
    if (lVar3 < lVar4) {
      CowData<AudioStreamRandomizer::PoolEntry>::_copy_on_write
                ((CowData<AudioStreamRandomizer::PoolEntry> *)(this + 0x3c0));
      lVar4 = CoreStringNames::singleton + 8;
      lVar2 = *(long *)this;
      *(float *)(lVar3 * 0x10 + *(long *)(this + 0x3c0) + 8) = param_2;
      (**(code **)(lVar2 + 0xd0))(this,lVar4,0,0);
      if (Variant::needs_deinit[0] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_0010b5cc;
    }
  }
  _err_print_index_error
            ("set_stream_probability_weight","servers/audio/audio_stream.cpp",0x226,lVar3,lVar4,
             "p_index","audio_stream_pool.size()","",false,false);
LAB_0010b5cc:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AudioStreamRandomizer::set_stream(int, Ref<AudioStream>) */

void __thiscall
AudioStreamRandomizer::set_stream(AudioStreamRandomizer *this,int param_1,long *param_3)

{
  long lVar1;
  Object *pOVar2;
  Object *pOVar3;
  char cVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long in_FS_OFFSET;
  
  lVar5 = (long)param_1;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  lVar7 = *(long *)(this + 0x3c0);
  if (param_1 < 0) {
    if (lVar7 == 0) goto LAB_0010b7e0;
    lVar7 = *(long *)(lVar7 + -8);
  }
  else if (lVar7 == 0) {
LAB_0010b7e0:
    lVar7 = 0;
  }
  else {
    lVar7 = *(long *)(lVar7 + -8);
    if (lVar5 < lVar7) {
      CowData<AudioStreamRandomizer::PoolEntry>::_copy_on_write
                ((CowData<AudioStreamRandomizer::PoolEntry> *)(this + 0x3c0));
      plVar6 = (long *)(lVar5 * 0x10 + *(long *)(this + 0x3c0));
      pOVar2 = (Object *)*param_3;
      pOVar3 = (Object *)*plVar6;
      if (pOVar2 != pOVar3) {
        *plVar6 = (long)pOVar2;
        if (pOVar2 != (Object *)0x0) {
          cVar4 = RefCounted::reference();
          if (cVar4 == '\0') {
            *plVar6 = 0;
          }
        }
        if (pOVar3 != (Object *)0x0) {
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
      (**(code **)(*(long *)this + 0xd0))(this,CoreStringNames::singleton + 8,0,0);
      if (Variant::needs_deinit[0] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_0010b72a;
    }
  }
  _err_print_index_error
            ("set_stream","servers/audio/audio_stream.cpp",0x21b,lVar5,lVar7,"p_index",
             "audio_stream_pool.size()","",false,false);
LAB_0010b72a:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AudioStreamRandomizer::set_streams_count(int) */

void __thiscall AudioStreamRandomizer::set_streams_count(AudioStreamRandomizer *this,int param_1)

{
  CowData<AudioStreamRandomizer::PoolEntry>::resize<false>
            ((CowData<AudioStreamRandomizer::PoolEntry> *)(this + 0x3c0),(long)param_1);
  return;
}



/* CowData<AudioStreamRandomizer::PoolEntry>::insert(long, AudioStreamRandomizer::PoolEntry const&)
   [clone .isra.0] */

void __thiscall
CowData<AudioStreamRandomizer::PoolEntry>::insert
          (CowData<AudioStreamRandomizer::PoolEntry> *this,long param_1,PoolEntry *param_2)

{
  Object *pOVar1;
  Object *pOVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  if (*(long *)this == 0) {
    lVar5 = 1;
    lVar7 = 0;
  }
  else {
    lVar7 = *(long *)(*(long *)this + -8);
    lVar5 = lVar7 + 1;
  }
  if ((-1 < param_1) && (param_1 < lVar5)) {
    iVar4 = resize<false>(this,lVar5);
    if (iVar4 != 0) {
      _err_print_error("insert","./core/templates/cowdata.h",0xf2,
                       "Condition \"err\" is true. Returning: err",0,0);
      return;
    }
    _copy_on_write(this);
    lVar5 = *(long *)this;
    plVar6 = (long *)(lVar7 * 0x10 + lVar5);
    if (param_1 < lVar7) {
      do {
        pOVar1 = (Object *)plVar6[-2];
        pOVar2 = (Object *)*plVar6;
        if (pOVar1 != pOVar2) {
          *plVar6 = (long)pOVar1;
          if ((pOVar1 != (Object *)0x0) && (cVar3 = RefCounted::reference(), cVar3 == '\0')) {
            *plVar6 = 0;
          }
          if (((pOVar2 != (Object *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) &&
             (cVar3 = predelete_handler(pOVar2), cVar3 != '\0')) {
            (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
            Memory::free_static(pOVar2,false);
          }
        }
        lVar7 = lVar7 + -1;
        *(int *)(plVar6 + 1) = (int)plVar6[-1];
        plVar6 = plVar6 + -2;
      } while (param_1 != lVar7);
    }
    pOVar1 = *(Object **)param_2;
    plVar6 = (long *)(lVar5 + param_1 * 0x10);
    pOVar2 = (Object *)*plVar6;
    if (pOVar1 != pOVar2) {
      *plVar6 = (long)pOVar1;
      if ((pOVar1 != (Object *)0x0) && (cVar3 = RefCounted::reference(), cVar3 == '\0')) {
        *plVar6 = 0;
      }
      if (((pOVar2 != (Object *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) &&
         (cVar3 = predelete_handler(pOVar2), cVar3 != '\0')) {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
    *(undefined4 *)(plVar6 + 1) = *(undefined4 *)(param_2 + 8);
    return;
  }
  _err_print_index_error
            ("insert","./core/templates/cowdata.h",0xf0,param_1,lVar5,"p_pos","new_size","",false,
             false);
  return;
}



/* AudioStreamRandomizer::move_stream(int, int) */

void __thiscall
AudioStreamRandomizer::move_stream(AudioStreamRandomizer *this,int param_1,int param_2)

{
  undefined8 *puVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  char *pcVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long in_FS_OFFSET;
  Object *local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  lVar9 = (long)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = *(long *)(this + 0x3c0);
  if (param_1 < 0) {
    if (lVar2 == 0) goto LAB_0010bc88;
    lVar8 = *(long *)(lVar2 + -8);
  }
  else if (lVar2 == 0) {
LAB_0010bc88:
    lVar8 = 0;
  }
  else {
    lVar8 = *(long *)(lVar2 + -8);
    if (lVar9 < lVar8) {
      if (param_2 < 0) {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar6 = 0x207;
          pcVar5 = "Condition \"p_index_to < 0\" is true.";
LAB_0010bc62:
          _err_print_error("move_stream","servers/audio/audio_stream.cpp",uVar6,pcVar5,0,0);
          return;
        }
      }
      else {
        lVar7 = (long)param_2;
        if (lVar8 < lVar7) {
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            uVar6 = 0x208;
            pcVar5 = "Condition \"p_index_to > audio_stream_pool.size()\" is true.";
            goto LAB_0010bc62;
          }
        }
        else {
          puVar1 = (undefined8 *)(lVar2 + lVar9 * 0x10);
          pOVar3 = (Object *)*puVar1;
          if ((pOVar3 == (Object *)0x0) ||
             (local_68 = pOVar3, cVar4 = RefCounted::reference(), cVar4 == '\0')) {
            local_68 = (Object *)0x0;
            local_60 = *(undefined4 *)(puVar1 + 1);
            CowData<AudioStreamRandomizer::PoolEntry>::insert
                      ((CowData<AudioStreamRandomizer::PoolEntry> *)(this + 0x3c0),lVar7,
                       (PoolEntry *)&local_68);
          }
          else {
            local_60 = *(undefined4 *)(puVar1 + 1);
            CowData<AudioStreamRandomizer::PoolEntry>::insert
                      ((CowData<AudioStreamRandomizer::PoolEntry> *)(this + 0x3c0),lVar7,
                       (PoolEntry *)&local_68);
            cVar4 = RefCounted::unreference();
            if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar3), cVar4 != '\0')) {
              (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
              Memory::free_static(pOVar3,false);
            }
          }
          if (param_2 < param_1) {
            lVar9 = (long)(param_1 + 1);
          }
          Vector<AudioStreamRandomizer::PoolEntry>::remove_at
                    ((Vector<AudioStreamRandomizer::PoolEntry> *)(this + 0x3b8),lVar9);
          local_58 = 0;
          local_50 = (undefined1  [16])0x0;
          (**(code **)(*(long *)this + 0xd0))(this,CoreStringNames::singleton + 8,0,0);
          if (Variant::needs_deinit[(int)local_58] != '\0') {
            Variant::_clear_internal();
          }
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            Object::notify_property_list_changed();
            return;
          }
        }
      }
      goto LAB_0010bcc7;
    }
  }
  _err_print_index_error
            ("move_stream","servers/audio/audio_stream.cpp",0x205,lVar9,lVar8,"p_index_from",
             "audio_stream_pool.size()","",false,false);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010bcc7:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AudioStreamRandomizer::add_stream(int, Ref<AudioStream>, float) */

void __thiscall
AudioStreamRandomizer::add_stream
          (undefined4 param_1_00,AudioStreamRandomizer *this,int param_1,undefined8 *param_4)

{
  char cVar1;
  long lVar2;
  long lVar3;
  Object *pOVar4;
  long in_FS_OFFSET;
  Object *local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined1 local_40 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = *(long *)(this + 0x3c0);
  if (param_1 < 0) {
    if (lVar2 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = (long)(int)*(long *)(lVar2 + -8);
      if (*(long *)(lVar2 + -8) < lVar3) goto LAB_0010be81;
    }
  }
  else {
    lVar3 = (long)param_1;
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = *(long *)(lVar2 + -8);
    }
    if (lVar2 < lVar3) {
LAB_0010be81:
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        _err_print_error("add_stream","servers/audio/audio_stream.cpp",0x1fb,
                         "Condition \"p_index > audio_stream_pool.size()\" is true.",0,0);
        return;
      }
      goto LAB_0010bf37;
    }
  }
  pOVar4 = (Object *)*param_4;
  local_50 = param_1_00;
  if (pOVar4 == (Object *)0x0) {
LAB_0010bd34:
    pOVar4 = (Object *)0x0;
    local_58 = (Object *)0x0;
    CowData<AudioStreamRandomizer::PoolEntry>::insert
              ((CowData<AudioStreamRandomizer::PoolEntry> *)(this + 0x3c0),lVar3,
               (PoolEntry *)&local_58);
  }
  else {
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') goto LAB_0010bd34;
    local_58 = pOVar4;
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      local_58 = (Object *)0x0;
      CowData<AudioStreamRandomizer::PoolEntry>::insert
                ((CowData<AudioStreamRandomizer::PoolEntry> *)(this + 0x3c0),lVar3,
                 (PoolEntry *)&local_58);
    }
    else {
      CowData<AudioStreamRandomizer::PoolEntry>::insert
                ((CowData<AudioStreamRandomizer::PoolEntry> *)(this + 0x3c0),lVar3,
                 (PoolEntry *)&local_58);
      cVar1 = RefCounted::unreference();
      if (cVar1 != '\0') {
        cVar1 = predelete_handler(pOVar4);
        if (cVar1 != '\0') {
          (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
          Memory::free_static(pOVar4,false);
        }
      }
    }
  }
  local_48 = 0;
  local_40 = (undefined1  [16])0x0;
  (**(code **)(*(long *)this + 0xd0))(this,CoreStringNames::singleton + 8,0,0);
  if (Variant::needs_deinit[(int)local_48] != '\0') {
    Variant::_clear_internal();
  }
  Object::notify_property_list_changed();
  if (pOVar4 != (Object *)0x0) {
    cVar1 = RefCounted::unreference();
    if (cVar1 != '\0') {
      cVar1 = predelete_handler(pOVar4);
      if (cVar1 != '\0') {
        (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
          Memory::free_static(pOVar4,false);
          return;
        }
        goto LAB_0010bf37;
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010bf37:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Vector<AudioStreamRandomizer::PoolEntry>::push_back(AudioStreamRandomizer::PoolEntry) [clone
   .isra.0] */

void __thiscall
Vector<AudioStreamRandomizer::PoolEntry>::push_back
          (Vector<AudioStreamRandomizer::PoolEntry> *this,long *param_2)

{
  Object *pOVar1;
  Object *pOVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  if (*(long *)(this + 8) == 0) {
    lVar7 = 1;
  }
  else {
    lVar7 = *(long *)(*(long *)(this + 8) + -8) + 1;
  }
  iVar4 = CowData<AudioStreamRandomizer::PoolEntry>::resize<false>
                    ((CowData<AudioStreamRandomizer::PoolEntry> *)(this + 8),lVar7);
  if (iVar4 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar5 = -1;
      lVar7 = 0;
    }
    else {
      lVar7 = *(long *)(*(long *)(this + 8) + -8);
      lVar5 = lVar7 + -1;
      if (-1 < lVar5) {
        CowData<AudioStreamRandomizer::PoolEntry>::_copy_on_write
                  ((CowData<AudioStreamRandomizer::PoolEntry> *)(this + 8));
        plVar6 = (long *)(lVar5 * 0x10 + *(long *)(this + 8));
        pOVar1 = (Object *)*param_2;
        pOVar2 = (Object *)*plVar6;
        if (pOVar1 != pOVar2) {
          *plVar6 = (long)pOVar1;
          if ((pOVar1 != (Object *)0x0) && (cVar3 = RefCounted::reference(), cVar3 == '\0')) {
            *plVar6 = 0;
          }
          if (((pOVar2 != (Object *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) &&
             (cVar3 = predelete_handler(pOVar2), cVar3 != '\0')) {
            (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
            Memory::free_static(pOVar2,false);
          }
        }
        *(int *)(plVar6 + 1) = (int)param_2[1];
        return;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar5,lVar7,"p_index","size()","",false,false
              );
    return;
  }
  _err_print_error("push_back","./core/templates/vector.h",0x142,
                   "Condition \"err\" is true. Returning: true",0,0);
  return;
}



/* AudioStreamRandomizer::instance_playback_random() */

long * AudioStreamRandomizer::instance_playback_random(void)

{
  code *pcVar1;
  Object *pOVar2;
  char cVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  Object *pOVar8;
  Object *in_RSI;
  long *in_RDI;
  undefined8 *puVar9;
  Object *pOVar10;
  long in_FS_OFFSET;
  double dVar11;
  double dVar12;
  double local_98;
  Object *local_70;
  Object *local_68;
  undefined8 *local_60;
  Object *local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = (Object *)0x0;
  Ref<AudioStreamPlaybackRandomizer>::instantiate<>((Ref<AudioStreamPlaybackRandomizer> *)&local_70)
  ;
  pOVar2 = local_70;
  local_68 = local_70;
  HashSet<AudioStreamPlaybackRandomizer*,HashMapHasherDefault,HashMapComparatorDefault<AudioStreamPlaybackRandomizer*>>
  ::insert((AudioStreamPlaybackRandomizer **)&local_58);
  cVar3 = RefCounted::init_ref();
  if (cVar3 == '\0') {
    pOVar10 = *(Object **)(pOVar2 + 0x270);
    if (pOVar10 != (Object *)0x0) {
      *(undefined8 *)(pOVar2 + 0x270) = 0;
      cVar3 = RefCounted::unreference();
      if (cVar3 != '\0') {
        cVar3 = predelete_handler(pOVar10);
        pOVar8 = (Object *)0x0;
        if (cVar3 != '\0') goto LAB_0010c5c2;
      }
    }
  }
  else {
    pOVar10 = *(Object **)(pOVar2 + 0x270);
    pOVar8 = pOVar10;
    if (in_RSI != pOVar10) {
      *(Object **)(pOVar2 + 0x270) = in_RSI;
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        *(undefined8 *)(pOVar2 + 0x270) = 0;
      }
      pOVar8 = in_RSI;
      if (((pOVar10 != (Object *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) &&
         (cVar3 = predelete_handler(pOVar10), cVar3 != '\0')) {
LAB_0010c5c2:
        (**(code **)(*(long *)pOVar10 + 0x140))(pOVar10);
        Memory::free_static(pOVar10,false);
        if (pOVar8 == (Object *)0x0) goto LAB_0010c161;
      }
    }
    cVar3 = RefCounted::unreference();
    if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar8), cVar3 != '\0')) {
      (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
      Memory::free_static(pOVar8,false);
    }
  }
LAB_0010c161:
  local_60 = (undefined8 *)0x0;
  CowData<AudioStreamRandomizer::PoolEntry>::_copy_on_write
            ((CowData<AudioStreamRandomizer::PoolEntry> *)(in_RSI + 0x3c0));
  puVar7 = *(undefined8 **)(in_RSI + 0x3c0);
  CowData<AudioStreamRandomizer::PoolEntry>::_copy_on_write
            ((CowData<AudioStreamRandomizer::PoolEntry> *)(in_RSI + 0x3c0));
  puVar9 = *(undefined8 **)(in_RSI + 0x3c0);
  if (puVar9 != (undefined8 *)0x0) {
    puVar9 = puVar9 + puVar9[-1] * 2;
  }
  local_98 = 0.0;
  if (puVar7 == puVar9) {
LAB_0010c568:
    *in_RDI = 0;
    lVar4 = __dynamic_cast(pOVar2,&Object::typeinfo,&AudioStreamPlayback::typeinfo,0);
    if (lVar4 == 0) goto LAB_0010c3af;
    *in_RDI = lVar4;
    cVar3 = RefCounted::reference();
  }
  else {
    do {
      while ((pOVar10 = (Object *)*puVar7, pOVar10 != (Object *)0x0 &&
             (0.0 < *(float *)(puVar7 + 1)))) {
        local_58 = pOVar10;
        cVar3 = RefCounted::reference();
        if (cVar3 == '\0') {
          local_50 = *(undefined4 *)(puVar7 + 1);
          local_58 = (Object *)0x0;
          Vector<AudioStreamRandomizer::PoolEntry>::push_back
                    ((Vector<AudioStreamRandomizer::PoolEntry> *)&local_68,
                     (Ref<AudioStreamPlayback> *)&local_58);
        }
        else {
          local_50 = *(undefined4 *)(puVar7 + 1);
          Vector<AudioStreamRandomizer::PoolEntry>::push_back
                    ((Vector<AudioStreamRandomizer::PoolEntry> *)&local_68);
          cVar3 = RefCounted::unreference();
          if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar10), cVar3 != '\0')) {
            (**(code **)(*(long *)pOVar10 + 0x140))(pOVar10);
            Memory::free_static(pOVar10,false);
          }
        }
        puVar5 = puVar7 + 2;
        local_98 = (double)*(float *)(puVar7 + 1) + local_98;
        puVar7 = puVar5;
        if (puVar9 == puVar5) goto LAB_0010c229;
      }
      puVar7 = puVar7 + 2;
    } while (puVar9 != puVar7);
LAB_0010c229:
    if (local_60 == (undefined8 *)0x0) goto LAB_0010c568;
    dVar11 = (double)Math::random(0.0,local_98);
    CowData<AudioStreamRandomizer::PoolEntry>::_copy_on_write
              ((CowData<AudioStreamRandomizer::PoolEntry> *)&local_60);
    puVar7 = local_60;
    CowData<AudioStreamRandomizer::PoolEntry>::_copy_on_write
              ((CowData<AudioStreamRandomizer::PoolEntry> *)&local_60);
    puVar9 = local_60;
    if (local_60 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)0x0;
      if (puVar7 != (undefined8 *)0x0) goto LAB_0010c28c;
      if (*(long *)(pOVar2 + 0x278) != 0) goto LAB_0010c366;
LAB_0010c646:
      lVar4 = 0;
      lVar6 = -1;
      goto LAB_0010c650;
    }
    lVar4 = local_60[-1];
    puVar5 = local_60 + lVar4 * 2;
    if (puVar7 == puVar5) {
      if (*(long *)(pOVar2 + 0x278) == 0) goto LAB_0010c4dd;
LAB_0010c366:
      *in_RDI = 0;
    }
    else {
LAB_0010c28c:
      dVar12 = 0.0;
      do {
        dVar12 = dVar12 + (double)*(float *)(puVar7 + 1);
        if (dVar11 < dVar12) {
          (**(code **)(*(long *)*puVar7 + 0x1c8))((Ref<AudioStreamPlayback> *)&local_58);
          pOVar10 = *(Object **)(pOVar2 + 0x278);
          if (local_58 != pOVar10) {
            *(Object **)(pOVar2 + 0x278) = local_58;
            if ((local_58 != (Object *)0x0) && (cVar3 = RefCounted::reference(), cVar3 == '\0')) {
              *(undefined8 *)(pOVar2 + 0x278) = 0;
            }
            if (((pOVar10 != (Object *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0'))
               && (cVar3 = predelete_handler(pOVar10), cVar3 != '\0')) {
              (**(code **)(*(long *)pOVar10 + 0x140))(pOVar10);
              Memory::free_static(pOVar10,false);
            }
          }
          Ref<AudioStreamPlayback>::unref((Ref<AudioStreamPlayback> *)&local_58);
          Ref<AudioStream>::operator=((Ref<AudioStream> *)(in_RSI + 0x3d0),(Ref *)*puVar7);
          break;
        }
        puVar7 = puVar7 + 2;
      } while (puVar5 != puVar7);
      if (*(long *)(pOVar2 + 0x278) != 0) goto LAB_0010c366;
      if (puVar9 == (undefined8 *)0x0) goto LAB_0010c646;
      lVar4 = puVar9[-1];
LAB_0010c4dd:
      lVar6 = lVar4 + -1;
      if (lVar6 < 0) {
LAB_0010c650:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar6,lVar4,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      Ref<AudioStream>::operator=((Ref<AudioStream> *)(in_RSI + 0x3d0),(Ref *)puVar9[lVar6 * 2]);
      lVar4 = puVar9[-1] + -1;
      if (lVar4 < 0) {
        _err_print_index_error
                  ("operator[]","./core/templates/vector.h",0x38,lVar4,puVar9[-1],"p_index",
                   "((Vector<T> *)(this))->_cowdata.size()","",false,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      CowData<AudioStreamRandomizer::PoolEntry>::_copy_on_write
                ((CowData<AudioStreamRandomizer::PoolEntry> *)&local_60);
      (**(code **)(*(long *)local_60[lVar4 * 2] + 0x1c8))((Ref<AudioStreamPlayback> *)&local_58);
      Ref<AudioStreamPlayback>::operator=
                ((Ref<AudioStreamPlayback> *)(pOVar2 + 0x278),(Ref *)local_58);
      Ref<AudioStreamPlayback>::unref((Ref<AudioStreamPlayback> *)&local_58);
      *in_RDI = 0;
    }
    lVar4 = __dynamic_cast(pOVar2,&Object::typeinfo,&AudioStreamPlayback::typeinfo,0);
    if (lVar4 == 0) goto LAB_0010c3af;
    *in_RDI = lVar4;
    cVar3 = RefCounted::reference();
  }
  if (cVar3 == '\0') {
    *in_RDI = 0;
  }
LAB_0010c3af:
  CowData<AudioStreamRandomizer::PoolEntry>::_unref
            ((CowData<AudioStreamRandomizer::PoolEntry> *)&local_60);
  cVar3 = RefCounted::unreference();
  if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar2), cVar3 != '\0')) {
    (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
    Memory::free_static(pOVar2,false);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return in_RDI;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AudioStreamRandomizer::instance_playback_no_repeats() */

void AudioStreamRandomizer::instance_playback_no_repeats(void)

{
  code *pcVar1;
  char cVar2;
  Object *pOVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  Object *pOVar8;
  Object *in_RSI;
  long *in_RDI;
  undefined8 *puVar9;
  Object *pOVar10;
  long in_FS_OFFSET;
  double dVar11;
  double dVar12;
  double local_88;
  Object *local_78;
  Object *local_70;
  Vector<AudioStreamRandomizer::PoolEntry> local_68 [8];
  undefined8 *local_60;
  Object *local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = (Object *)0x0;
  local_60 = (undefined8 *)0x0;
  CowData<AudioStreamRandomizer::PoolEntry>::_copy_on_write
            ((CowData<AudioStreamRandomizer::PoolEntry> *)(in_RSI + 0x3c0));
  puVar7 = *(undefined8 **)(in_RSI + 0x3c0);
  CowData<AudioStreamRandomizer::PoolEntry>::_copy_on_write
            ((CowData<AudioStreamRandomizer::PoolEntry> *)(in_RSI + 0x3c0));
  puVar9 = *(undefined8 **)(in_RSI + 0x3c0);
  if (puVar9 != (undefined8 *)0x0) {
    puVar9 = puVar9 + puVar9[-1] * 2;
  }
  local_88 = 0.0;
  if (puVar7 == puVar9) {
LAB_0010cbd0:
    instance_playback_random();
    if (((local_58 == (Object *)0x0) ||
        (pOVar3 = (Object *)
                  __dynamic_cast(local_58,&Object::typeinfo,&AudioStreamPlaybackRandomizer::typeinfo
                                 ,0), pOVar3 == (Object *)0x0)) ||
       (local_78 = pOVar3, cVar2 = RefCounted::reference(), cVar2 == '\0')) {
      Ref<AudioStreamPlayback>::unref((Ref<AudioStreamPlayback> *)&local_58);
      *in_RDI = 0;
      CowData<AudioStreamRandomizer::PoolEntry>::_unref
                ((CowData<AudioStreamRandomizer::PoolEntry> *)&local_60);
      goto LAB_0010ca26;
    }
    Ref<AudioStreamPlayback>::unref((Ref<AudioStreamPlayback> *)&local_58);
    *in_RDI = 0;
    lVar4 = __dynamic_cast(pOVar3,&Object::typeinfo,&AudioStreamPlayback::typeinfo,0);
    if (lVar4 != 0) {
      *in_RDI = lVar4;
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        *in_RDI = 0;
      }
    }
    CowData<AudioStreamRandomizer::PoolEntry>::_unref
              ((CowData<AudioStreamRandomizer::PoolEntry> *)&local_60);
  }
  else {
    do {
      while (((pOVar3 = (Object *)*puVar7, *(Object **)(in_RSI + 0x3d0) == pOVar3 ||
              (pOVar3 == (Object *)0x0)) || (*(float *)(puVar7 + 1) <= 0.0))) {
        puVar7 = puVar7 + 2;
        if (puVar9 == puVar7) goto LAB_0010c85b;
      }
      local_58 = pOVar3;
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        local_50 = *(undefined4 *)(puVar7 + 1);
        local_58 = (Object *)0x0;
        Vector<AudioStreamRandomizer::PoolEntry>::push_back
                  (local_68,(Ref<AudioStreamPlayback> *)&local_58);
      }
      else {
        local_50 = *(undefined4 *)(puVar7 + 1);
        Vector<AudioStreamRandomizer::PoolEntry>::push_back(local_68);
        cVar2 = RefCounted::unreference();
        if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar3), cVar2 != '\0')) {
          (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
          Memory::free_static(pOVar3,false);
        }
      }
      puVar5 = puVar7 + 2;
      local_88 = (double)*(float *)(puVar7 + 1) + local_88;
      puVar7 = puVar5;
    } while (puVar9 != puVar5);
LAB_0010c85b:
    if (local_60 == (undefined8 *)0x0) goto LAB_0010cbd0;
    Ref<AudioStreamPlaybackRandomizer>::instantiate<>
              ((Ref<AudioStreamPlaybackRandomizer> *)&local_78);
    pOVar3 = local_78;
    local_70 = local_78;
    HashSet<AudioStreamPlaybackRandomizer*,HashMapHasherDefault,HashMapComparatorDefault<AudioStreamPlaybackRandomizer*>>
    ::insert((AudioStreamPlaybackRandomizer **)&local_58);
    cVar2 = RefCounted::init_ref();
    if (cVar2 == '\0') {
      pOVar10 = *(Object **)(pOVar3 + 0x270);
      if (pOVar10 != (Object *)0x0) {
        *(undefined8 *)(pOVar3 + 0x270) = 0;
        cVar2 = RefCounted::unreference();
        if (cVar2 != '\0') {
          cVar2 = predelete_handler(pOVar10);
          pOVar8 = (Object *)0x0;
          if (cVar2 != '\0') goto LAB_0010cc8a;
        }
      }
    }
    else {
      pOVar10 = *(Object **)(pOVar3 + 0x270);
      pOVar8 = pOVar10;
      if (in_RSI != pOVar10) {
        *(Object **)(pOVar3 + 0x270) = in_RSI;
        cVar2 = RefCounted::reference();
        if (cVar2 == '\0') {
          *(undefined8 *)(pOVar3 + 0x270) = 0;
        }
        pOVar8 = in_RSI;
        if (((pOVar10 != (Object *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) &&
           (cVar2 = predelete_handler(pOVar10), cVar2 != '\0')) {
LAB_0010cc8a:
          (**(code **)(*(long *)pOVar10 + 0x140))(pOVar10);
          Memory::free_static(pOVar10,false);
          if (pOVar8 == (Object *)0x0) goto LAB_0010c8c7;
        }
      }
      cVar2 = RefCounted::unreference();
      if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar8), cVar2 != '\0')) {
        (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
        Memory::free_static(pOVar8,false);
      }
    }
LAB_0010c8c7:
    dVar11 = (double)Math::random(0.0,local_88);
    CowData<AudioStreamRandomizer::PoolEntry>::_copy_on_write
              ((CowData<AudioStreamRandomizer::PoolEntry> *)&local_60);
    puVar7 = local_60;
    CowData<AudioStreamRandomizer::PoolEntry>::_copy_on_write
              ((CowData<AudioStreamRandomizer::PoolEntry> *)&local_60);
    puVar9 = local_60;
    if (local_60 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)0x0;
      if (puVar7 != (undefined8 *)0x0) goto LAB_0010c927;
      if (*(long *)(pOVar3 + 0x278) != 0) goto LAB_0010c9cb;
LAB_0010ccf5:
      lVar4 = 0;
      lVar6 = -1;
      goto LAB_0010ccff;
    }
    lVar4 = local_60[-1];
    puVar5 = local_60 + lVar4 * 2;
    if (puVar7 == puVar5) {
      if (*(long *)(pOVar3 + 0x278) != 0) goto LAB_0010c9cb;
LAB_0010cb4d:
      lVar6 = lVar4 + -1;
      if (lVar6 < 0) {
LAB_0010ccff:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar6,lVar4,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      Ref<AudioStream>::operator=((Ref<AudioStream> *)(in_RSI + 0x3d0),(Ref *)puVar9[lVar6 * 2]);
      lVar4 = puVar9[-1] + -1;
      if (lVar4 < 0) {
        _err_print_index_error
                  ("operator[]","./core/templates/vector.h",0x38,lVar4,puVar9[-1],"p_index",
                   "((Vector<T> *)(this))->_cowdata.size()","",false,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      CowData<AudioStreamRandomizer::PoolEntry>::_copy_on_write
                ((CowData<AudioStreamRandomizer::PoolEntry> *)&local_60);
      (**(code **)(*(long *)local_60[lVar4 * 2] + 0x1c8))((Ref<AudioStreamPlayback> *)&local_58);
      Ref<AudioStreamPlayback>::operator=
                ((Ref<AudioStreamPlayback> *)(pOVar3 + 0x278),(Ref *)local_58);
      Ref<AudioStreamPlayback>::unref((Ref<AudioStreamPlayback> *)&local_58);
      *in_RDI = 0;
    }
    else {
LAB_0010c927:
      dVar12 = 0.0;
      do {
        dVar12 = dVar12 + (double)*(float *)(puVar7 + 1);
        if (dVar11 < dVar12) {
          Ref<AudioStream>::operator=((Ref<AudioStream> *)(in_RSI + 0x3d0),(Ref *)*puVar7);
          (**(code **)(*(long *)*puVar7 + 0x1c8))((Ref<AudioStreamPlayback> *)&local_58);
          pOVar10 = *(Object **)(pOVar3 + 0x278);
          if (local_58 != pOVar10) {
            *(Object **)(pOVar3 + 0x278) = local_58;
            if ((local_58 != (Object *)0x0) && (cVar2 = RefCounted::reference(), cVar2 == '\0')) {
              *(undefined8 *)(pOVar3 + 0x278) = 0;
            }
            if (((pOVar10 != (Object *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0'))
               && (cVar2 = predelete_handler(pOVar10), cVar2 != '\0')) {
              (**(code **)(*(long *)pOVar10 + 0x140))(pOVar10);
              Memory::free_static(pOVar10,false);
            }
          }
          Ref<AudioStreamPlayback>::unref((Ref<AudioStreamPlayback> *)&local_58);
          break;
        }
        puVar7 = puVar7 + 2;
      } while (puVar5 != puVar7);
      if (*(long *)(pOVar3 + 0x278) == 0) {
        if (puVar9 == (undefined8 *)0x0) goto LAB_0010ccf5;
        lVar4 = puVar9[-1];
        goto LAB_0010cb4d;
      }
LAB_0010c9cb:
      *in_RDI = 0;
    }
    lVar4 = __dynamic_cast(pOVar3,&Object::typeinfo,&AudioStreamPlayback::typeinfo,0);
    if (lVar4 != 0) {
      *in_RDI = lVar4;
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        *in_RDI = 0;
      }
    }
    CowData<AudioStreamRandomizer::PoolEntry>::_unref
              ((CowData<AudioStreamRandomizer::PoolEntry> *)&local_60);
    if (pOVar3 == (Object *)0x0) goto LAB_0010ca26;
  }
  cVar2 = RefCounted::unreference();
  if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar3), cVar2 != '\0')) {
    (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
    Memory::free_static(pOVar3,false);
  }
LAB_0010ca26:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* AudioStreamRandomizer::remove_stream(int) */

void __thiscall AudioStreamRandomizer::remove_stream(AudioStreamRandomizer *this,int param_1)

{
  long lVar1;
  Object *pOVar2;
  Object *pOVar3;
  char cVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long in_FS_OFFSET;
  
  lVar8 = (long)param_1;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  lVar7 = *(long *)(this + 0x3c0);
  if (param_1 < 0) {
    if (lVar7 == 0) goto LAB_0010cff8;
    lVar7 = *(long *)(lVar7 + -8);
  }
  else if (lVar7 == 0) {
LAB_0010cff8:
    lVar7 = 0;
  }
  else {
    lVar7 = *(long *)(lVar7 + -8);
    if (lVar8 < lVar7) {
      CowData<AudioStreamRandomizer::PoolEntry>::_copy_on_write
                ((CowData<AudioStreamRandomizer::PoolEntry> *)(this + 0x3c0));
      lVar7 = *(long *)(this + 0x3c0);
      if (lVar7 == 0) {
        lVar6 = -1;
      }
      else {
        lVar6 = *(long *)(lVar7 + -8) + -1;
        if (lVar8 < lVar6) {
          plVar5 = (long *)(lVar7 + lVar8 * 0x10);
          do {
            pOVar2 = (Object *)plVar5[2];
            pOVar3 = (Object *)*plVar5;
            if (pOVar2 != pOVar3) {
              *plVar5 = (long)pOVar2;
              if (pOVar2 != (Object *)0x0) {
                cVar4 = RefCounted::reference();
                if (cVar4 == '\0') {
                  *plVar5 = 0;
                }
              }
              if (pOVar3 != (Object *)0x0) {
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
            lVar8 = lVar8 + 1;
            *(int *)(plVar5 + 1) = (int)plVar5[3];
            plVar5 = plVar5 + 2;
          } while (lVar8 != lVar6);
        }
      }
      CowData<AudioStreamRandomizer::PoolEntry>::resize<false>
                ((CowData<AudioStreamRandomizer::PoolEntry> *)(this + 0x3c0),lVar6);
      (**(code **)(*(long *)this + 0xd0))(this,CoreStringNames::singleton + 8,0,0);
      if (Variant::needs_deinit[0] != '\0') {
        Variant::_clear_internal();
      }
      if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
        Object::notify_property_list_changed();
        return;
      }
      goto LAB_0010cffd;
    }
  }
  _err_print_index_error
            ("remove_stream","servers/audio/audio_stream.cpp",0x214,lVar8,lVar7,"p_index",
             "audio_stream_pool.size()","",false,false);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010cffd:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<Ref<AudioStream> >::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Ref<AudioStream>>::_copy_on_write(CowData<Ref<AudioStream>> *this)

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



/* Vector<int>::push_back(int) [clone .isra.0] */

void __thiscall Vector<int>::push_back(Vector<int> *this,int param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)(this + 8) == 0) {
    lVar2 = 1;
  }
  else {
    lVar2 = *(long *)(*(long *)(this + 8) + -8) + 1;
  }
  iVar1 = CowData<int>::resize<false>((CowData<int> *)(this + 8),lVar2);
  if (iVar1 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar3 = -1;
      lVar2 = 0;
    }
    else {
      lVar2 = *(long *)(*(long *)(this + 8) + -8);
      lVar3 = lVar2 + -1;
      if (-1 < lVar3) {
        CowData<int>::_copy_on_write((CowData<int> *)(this + 8));
        *(int *)(*(long *)(this + 8) + lVar3 * 4) = param_1;
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



/* AudioStreamPlaybackResampled::_bind_methods() */

void AudioStreamPlaybackResampled::_bind_methods(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  MethodBind *pMVar3;
  long in_FS_OFFSET;
  long local_128;
  long local_120;
  undefined8 local_118;
  long local_110;
  Vector<String> local_108 [8];
  undefined8 local_100;
  char *local_f8;
  undefined1 local_f0 [16];
  int local_e0;
  long local_d8;
  undefined4 local_d0;
  char *local_c8;
  undefined8 local_c0;
  long local_b8;
  long lStack_b0;
  undefined8 local_a8;
  long local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88 [2];
  undefined8 local_78;
  undefined8 local_70;
  Vector<int> local_68 [8];
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_f0._8_8_ = local_f0._0_8_;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  D_METHODP((char *)&local_c8,(char ***)"begin_resample",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  pMVar3 = create_method_bind<AudioStreamPlaybackResampled>(begin_resample);
  ClassDB::bind_methodfi(1,pMVar3,false,(MethodDefinition *)&local_c8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_c8);
  local_100 = 0;
  local_f8 = (char *)0x0;
  local_c8 = "dst_buffer";
  local_c0 = 10;
  String::parse_latin1((StrRange *)&local_f8);
  local_c8 = (char *)0x0;
  if (local_f8 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)&local_f8);
  }
  Vector<String>::push_back(local_108,(MethodDefinition *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  local_110 = 0;
  local_c8 = "frame_count";
  local_c0 = 0xb;
  String::parse_latin1((StrRange *)&local_110);
  local_c8 = (char *)0x0;
  if (local_110 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)&local_110);
  }
  Vector<String>::push_back(local_108,(MethodDefinition *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  local_b8 = 0;
  lStack_b0 = 0;
  local_f8 = "_mix_resampled";
  local_c8 = (char *)0x0;
  local_c0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 6;
  local_90 = 1;
  local_88[0] = 0;
  local_78 = 0;
  local_70 = 0;
  local_60 = 0;
  local_f0._0_8_ = 0xe;
  String::parse_latin1((StrRange *)&local_c8);
  local_90 = CONCAT44(local_90._4_4_,0x88);
  GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)&local_f8);
  local_c0 = CONCAT44(local_c0._4_4_,local_f8._0_4_);
  if (local_b8 != local_f0._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    local_b8 = local_f0._0_8_;
    local_f0._0_8_ = 0;
  }
  if (lStack_b0 != local_f0._8_8_) {
    StringName::unref();
    lStack_b0 = local_f0._8_8_;
    local_f0._8_8_ = 0;
  }
  local_a8 = CONCAT44(local_a8._4_4_,local_e0);
  if (local_a0 != local_d8) {
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    local_a0 = local_d8;
    local_d8 = 0;
  }
  local_98 = CONCAT44(local_98._4_4_,local_d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_f0._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_f0);
  local_70 = CONCAT44(local_70._4_4_,3);
  local_128 = 0;
  local_120 = 0;
  local_f8 = "AudioFrame";
  local_f0._0_8_ = 10;
  String::parse_latin1((StrRange *)&local_120);
  local_118 = 0;
  local_f8 = (char *)CONCAT44(local_f8._4_4_,2);
  local_e0 = 0x1e;
  local_d8 = 0;
  local_f0 = (undefined1  [16])0x0;
  if (local_120 == 0) {
LAB_0010d648:
    local_d0 = 6;
    StringName::operator=((StringName *)(local_f0 + 8),(StringName *)&local_128);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_d8,(CowData *)&local_120);
    local_d0 = 6;
    if (local_e0 != 0x11) goto LAB_0010d648;
    StringName::StringName((StringName *)&local_110,(String *)&local_d8,false);
    if (local_f0._8_8_ == local_110) {
      if ((StringName::configured != '\0') && (local_110 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_f0._8_8_ = local_110;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
  if ((StringName::configured != '\0') && (local_128 != 0)) {
    StringName::unref();
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_88,(PropertyInfo *)&local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_f0._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_f0);
  Vector<int>::push_back(local_68,0);
  GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)&local_f8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_88,(PropertyInfo *)&local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_f0._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_f0);
  Vector<int>::push_back(local_68,3);
  local_f8 = "AudioStreamPlaybackResampled";
  local_110 = 0;
  local_f0._0_8_ = 0x1c;
  String::parse_latin1((StrRange *)&local_110);
  StringName::StringName((StringName *)&local_f8,(String *)&local_110,false);
  ClassDB::add_virtual_method((StringName *)&local_f8,(MethodInfo *)&local_c8,true,local_108,false);
  if ((StringName::configured != '\0') && (local_f8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  MethodInfo::~MethodInfo((MethodInfo *)&local_c8);
  CowData<String>::_unref((CowData<String> *)&local_100);
  local_b8 = 0;
  lStack_b0 = 0;
  local_f8 = "_get_stream_sampling_rate";
  local_100 = 0;
  local_c8 = (char *)0x0;
  local_c0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 6;
  local_90 = 1;
  local_88[0] = 0;
  local_78 = 0;
  local_70 = 0;
  local_60 = 0;
  local_f0._0_8_ = 0x19;
  String::parse_latin1((StrRange *)&local_c8);
  local_90 = CONCAT44(local_90._4_4_,0x8c);
  local_128 = 0;
  local_120 = 0;
  local_f8 = "";
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_f0._8_8_;
  local_f0 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_120);
  local_118 = 0;
  local_f8 = (char *)CONCAT44(local_f8._4_4_,3);
  local_e0 = 0;
  local_d8 = 0;
  local_f0 = (undefined1  [16])0x0;
  if (local_120 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_d8,(CowData *)&local_120);
    local_d0 = 6;
    if (local_e0 == 0x11) {
      StringName::StringName((StringName *)&local_110,(String *)&local_d8,false);
      if (local_f0._8_8_ == local_110) {
        if ((StringName::configured != '\0') && (local_110 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_f0._8_8_ = local_110;
      }
      goto LAB_0010d947;
    }
  }
  local_d0 = 6;
  StringName::operator=((StringName *)(local_f0 + 8),(StringName *)&local_128);
LAB_0010d947:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
  if ((StringName::configured != '\0') && (local_128 != 0)) {
    StringName::unref();
  }
  local_c0 = CONCAT44(local_c0._4_4_,local_f8._0_4_);
  if (local_b8 != local_f0._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    local_b8 = local_f0._0_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_f0._8_8_;
    local_f0 = auVar1 << 0x40;
  }
  if (lStack_b0 != local_f0._8_8_) {
    StringName::unref();
    lStack_b0 = local_f0._8_8_;
    local_f0._8_8_ = 0;
  }
  local_a8 = CONCAT44(local_a8._4_4_,local_e0);
  if (local_a0 != local_d8) {
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    local_a0 = local_d8;
    local_d8 = 0;
  }
  local_98 = CONCAT44(local_98._4_4_,local_d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_f0._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_f0);
  local_f8 = "AudioStreamPlaybackResampled";
  local_70 = CONCAT44(local_70._4_4_,9);
  local_110 = 0;
  local_f0._0_8_ = 0x1c;
  String::parse_latin1((StrRange *)&local_110);
  StringName::StringName((StringName *)&local_f8,(String *)&local_110,false);
  ClassDB::add_virtual_method((StringName *)&local_f8,(MethodInfo *)&local_c8,true,local_108,false);
  if ((StringName::configured != '\0') && (local_f8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  MethodInfo::~MethodInfo((MethodInfo *)&local_c8);
  CowData<String>::_unref((CowData<String> *)&local_100);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* AudioStreamPlayback::_bind_methods() */

void AudioStreamPlayback::_bind_methods(void)

{
  char cVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined *puVar4;
  MethodBind *pMVar5;
  uint uVar6;
  long in_FS_OFFSET;
  long local_178;
  long local_170;
  long local_168;
  long local_160;
  undefined8 local_158;
  undefined8 local_150;
  char *local_148;
  undefined1 local_140 [16];
  int local_130;
  undefined8 local_128;
  undefined4 local_120;
  char *local_118;
  undefined8 local_110;
  undefined1 local_108 [16];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8 [2];
  undefined8 local_c8;
  ulong local_c0;
  Vector<int> local_b8 [8];
  undefined8 local_b0;
  char *local_a8;
  undefined8 local_a0;
  Variant *local_98;
  char *pcStack_90;
  undefined8 local_88;
  Variant **local_78;
  undefined1 auStack_70 [16];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  puVar4 = PTR__LC182_0012f838;
  local_140._8_8_ = local_140._0_8_;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_150 = 0;
  local_148 = (char *)0x0;
  local_118 = "from_pos";
  local_110 = 8;
  String::parse_latin1((StrRange *)&local_148);
  local_118 = (char *)0x0;
  if (local_148 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_118,(CowData *)&local_148);
  }
  Vector<String>::push_back((Vector<String> *)&local_158,(CowData<char32_t> *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
  local_108 = (undefined1  [16])0x0;
  local_148 = "_start";
  local_118 = (char *)0x0;
  local_110 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 6;
  local_e0 = 1;
  local_d8[0] = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b0 = 0;
  local_140._0_8_ = 6;
  String::parse_latin1((StrRange *)&local_118);
  local_e0 = CONCAT44(local_e0._4_4_,8);
  GetTypeInfo<double,void>::get_class_info((GetTypeInfo<double,void> *)&local_148);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_d8,(PropertyInfo *)&local_148);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_148);
  Vector<int>::push_back(local_b8,10);
  local_148 = "AudioStreamPlayback";
  local_160 = 0;
  local_140._0_8_ = 0x13;
  String::parse_latin1((StrRange *)&local_160);
  StringName::StringName((StringName *)&local_148,(String *)&local_160,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_148,(MethodInfo *)&local_118,true,(StrRange *)&local_158,false);
  if ((StringName::configured != '\0') && (local_148 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_160);
  MethodInfo::~MethodInfo((MethodInfo *)&local_118);
  CowData<String>::_unref((CowData<String> *)&local_150);
  local_108 = (undefined1  [16])0x0;
  local_148 = "_stop";
  local_150 = 0;
  local_118 = (char *)0x0;
  local_110 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 6;
  local_e0 = 1;
  local_d8[0] = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b0 = 0;
  local_140._0_8_ = 5;
  String::parse_latin1((StrRange *)&local_118);
  local_148 = "AudioStreamPlayback";
  local_e0 = CONCAT44(local_e0._4_4_,8);
  local_160 = 0;
  local_140._0_8_ = 0x13;
  String::parse_latin1((StrRange *)&local_160);
  StringName::StringName((StringName *)&local_148,(String *)&local_160,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_148,(MethodInfo *)&local_118,true,(StrRange *)&local_158,false);
  if ((StringName::configured != '\0') && (local_148 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_160);
  MethodInfo::~MethodInfo((MethodInfo *)&local_118);
  CowData<String>::_unref((CowData<String> *)&local_150);
  local_108 = (undefined1  [16])0x0;
  local_148 = "_is_playing";
  local_150 = 0;
  local_118 = (char *)0x0;
  local_110 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 6;
  local_e0 = 1;
  local_d8[0] = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b0 = 0;
  local_140._0_8_ = 0xb;
  String::parse_latin1((StrRange *)&local_118);
  local_e0 = CONCAT44(local_e0._4_4_,0xc);
  GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void> *)&local_148);
  PropertyInfo::operator=((PropertyInfo *)&local_110,(PropertyInfo *)&local_148);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_148);
  local_148 = "AudioStreamPlayback";
  local_c0 = local_c0 & 0xffffffff00000000;
  local_160 = 0;
  local_140._0_8_ = 0x13;
  String::parse_latin1((StrRange *)&local_160);
  StringName::StringName((StringName *)&local_148,(String *)&local_160,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_148,(MethodInfo *)&local_118,true,(StrRange *)&local_158,false);
  if ((StringName::configured != '\0') && (local_148 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_160);
  MethodInfo::~MethodInfo((MethodInfo *)&local_118);
  CowData<String>::_unref((CowData<String> *)&local_150);
  local_108 = (undefined1  [16])0x0;
  local_148 = "_get_loop_count";
  local_150 = 0;
  local_118 = (char *)0x0;
  local_110 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 6;
  local_e0 = 1;
  local_d8[0] = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b0 = 0;
  local_140._0_8_ = 0xf;
  String::parse_latin1((StrRange *)&local_118);
  local_e0 = CONCAT44(local_e0._4_4_,0xc);
  GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)&local_148);
  PropertyInfo::operator=((PropertyInfo *)&local_110,(PropertyInfo *)&local_148);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_148);
  local_148 = "AudioStreamPlayback";
  local_c0 = CONCAT44(local_c0._4_4_,3);
  local_160 = 0;
  local_140._0_8_ = 0x13;
  String::parse_latin1((StrRange *)&local_160);
  StringName::StringName((StringName *)&local_148,(String *)&local_160,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_148,(MethodInfo *)&local_118,true,(StrRange *)&local_158,false);
  if ((StringName::configured != '\0') && (local_148 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_160);
  MethodInfo::~MethodInfo((MethodInfo *)&local_118);
  CowData<String>::_unref((CowData<String> *)&local_150);
  local_108 = (undefined1  [16])0x0;
  local_148 = "_get_playback_position";
  local_150 = 0;
  local_118 = (char *)0x0;
  local_110 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 6;
  local_e0 = 1;
  local_d8[0] = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b0 = 0;
  local_140._0_8_ = 0x16;
  String::parse_latin1((StrRange *)&local_118);
  local_e0 = CONCAT44(local_e0._4_4_,0xc);
  GetTypeInfo<double,void>::get_class_info((GetTypeInfo<double,void> *)&local_148);
  PropertyInfo::operator=((PropertyInfo *)&local_110,(PropertyInfo *)&local_148);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_148);
  local_148 = "AudioStreamPlayback";
  local_c0 = CONCAT44(local_c0._4_4_,10);
  local_160 = 0;
  local_140._0_8_ = 0x13;
  String::parse_latin1((StrRange *)&local_160);
  StringName::StringName((StringName *)&local_148,(String *)&local_160,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_148,(MethodInfo *)&local_118,true,(StrRange *)&local_158,false);
  if ((StringName::configured != '\0') && (local_148 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_160);
  MethodInfo::~MethodInfo((MethodInfo *)&local_118);
  CowData<String>::_unref((CowData<String> *)&local_150);
  local_150 = 0;
  local_148 = (char *)0x0;
  local_118 = "position";
  local_110 = 8;
  String::parse_latin1((StrRange *)&local_148);
  local_118 = (char *)0x0;
  if (local_148 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_118,(CowData *)&local_148);
  }
  Vector<String>::push_back((Vector<String> *)&local_158,(CowData<char32_t> *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
  local_108 = (undefined1  [16])0x0;
  local_148 = "_seek";
  local_118 = (char *)0x0;
  local_110 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 6;
  local_e0 = 1;
  local_d8[0] = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b0 = 0;
  local_140._0_8_ = 5;
  String::parse_latin1((StrRange *)&local_118);
  local_e0 = CONCAT44(local_e0._4_4_,8);
  GetTypeInfo<double,void>::get_class_info((GetTypeInfo<double,void> *)&local_148);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_d8,(PropertyInfo *)&local_148);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_148);
  Vector<int>::push_back(local_b8,10);
  local_148 = "AudioStreamPlayback";
  local_160 = 0;
  local_140._0_8_ = 0x13;
  String::parse_latin1((StrRange *)&local_160);
  StringName::StringName((StringName *)&local_148,(String *)&local_160,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_148,(MethodInfo *)&local_118,true,(StrRange *)&local_158,false);
  if ((StringName::configured != '\0') && (local_148 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_160);
  MethodInfo::~MethodInfo((MethodInfo *)&local_118);
  CowData<String>::_unref((CowData<String> *)&local_150);
  local_150 = 0;
  local_148 = (char *)0x0;
  local_118 = "buffer";
  local_110 = 6;
  String::parse_latin1((StrRange *)&local_148);
  local_118 = (char *)0x0;
  if (local_148 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_118,(CowData *)&local_148);
  }
  Vector<String>::push_back((Vector<String> *)&local_158,(CowData<char32_t> *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
  local_168 = 0;
  local_118 = "rate_scale";
  local_110 = 10;
  String::parse_latin1((StrRange *)&local_168);
  local_118 = (char *)0x0;
  if (local_168 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_118,(CowData *)&local_168);
  }
  Vector<String>::push_back((Vector<String> *)&local_158,(CowData<char32_t> *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
  local_160 = 0;
  local_118 = "frames";
  local_110 = 6;
  String::parse_latin1((StrRange *)&local_160);
  local_118 = (char *)0x0;
  if (local_160 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_118,(CowData *)&local_160);
  }
  Vector<String>::push_back((Vector<String> *)&local_158,(CowData<char32_t> *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_160);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
  local_108 = (undefined1  [16])0x0;
  local_148 = "_mix";
  local_118 = (char *)0x0;
  local_110 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 6;
  local_e0 = 1;
  local_d8[0] = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b0 = 0;
  local_140._0_8_ = 4;
  String::parse_latin1((StrRange *)&local_118);
  local_e0 = CONCAT44(local_e0._4_4_,0x88);
  GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)&local_148);
  PropertyInfo::operator=((PropertyInfo *)&local_110,(PropertyInfo *)&local_148);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_148);
  local_c0 = CONCAT44(local_c0._4_4_,3);
  local_178 = 0;
  local_170 = 0;
  local_148 = "AudioFrame";
  local_140._0_8_ = 10;
  String::parse_latin1((StrRange *)&local_170);
  local_168 = 0;
  local_148 = (char *)CONCAT44(local_148._4_4_,2);
  local_130 = 0x1e;
  local_128 = 0;
  local_140 = (undefined1  [16])0x0;
  if (local_170 == 0) {
LAB_0010e89b:
    local_120 = 6;
    StringName::operator=((StringName *)(local_140 + 8),(StringName *)&local_178);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_128,(CowData *)&local_170);
    local_120 = 6;
    if (local_130 != 0x11) goto LAB_0010e89b;
    StringName::StringName((StringName *)&local_160,(String *)&local_128,false);
    if (local_140._8_8_ == local_160) {
      if ((StringName::configured != '\0') && (local_160 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_140._8_8_ = local_160;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_170);
  if ((StringName::configured != '\0') && (local_178 != 0)) {
    StringName::unref();
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_d8,(PropertyInfo *)&local_148);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_148);
  Vector<int>::push_back(local_b8,0);
  GetTypeInfo<float,void>::get_class_info((GetTypeInfo<float,void> *)&local_148);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_d8,(PropertyInfo *)&local_148);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_148);
  Vector<int>::push_back(local_b8,9);
  GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)&local_148);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_d8,(PropertyInfo *)&local_148);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_148);
  Vector<int>::push_back(local_b8,3);
  local_148 = "AudioStreamPlayback";
  local_160 = 0;
  local_140._0_8_ = 0x13;
  String::parse_latin1((StrRange *)&local_160);
  StringName::StringName((StringName *)&local_148,(String *)&local_160,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_148,(MethodInfo *)&local_118,true,(StrRange *)&local_158,false);
  if ((StringName::configured != '\0') && (local_148 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_160);
  MethodInfo::~MethodInfo((MethodInfo *)&local_118);
  CowData<String>::_unref((CowData<String> *)&local_150);
  local_108 = (undefined1  [16])0x0;
  local_148 = "_tag_used_streams";
  local_150 = 0;
  local_118 = (char *)0x0;
  local_110 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 6;
  local_e0 = 1;
  local_d8[0] = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b0 = 0;
  local_140._0_8_ = 0x11;
  String::parse_latin1((StrRange *)&local_118);
  local_148 = "AudioStreamPlayback";
  local_e0 = CONCAT44(local_e0._4_4_,8);
  local_160 = 0;
  local_140._0_8_ = 0x13;
  String::parse_latin1((StrRange *)&local_160);
  StringName::StringName((StringName *)&local_148,(String *)&local_160,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_148,(MethodInfo *)&local_118,true,(StrRange *)&local_158,false);
  if ((StringName::configured != '\0') && (local_148 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_160);
  MethodInfo::~MethodInfo((MethodInfo *)&local_118);
  CowData<String>::_unref((CowData<String> *)&local_150);
  local_150 = 0;
  local_148 = (char *)0x0;
  local_118 = "name";
  local_110 = 4;
  String::parse_latin1((StrRange *)&local_148);
  local_118 = (char *)0x0;
  if (local_148 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_118,(CowData *)&local_148);
  }
  Vector<String>::push_back((Vector<String> *)&local_158,(CowData<char32_t> *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
  local_160 = 0;
  local_118 = "value";
  local_110 = 5;
  String::parse_latin1((StrRange *)&local_160);
  local_118 = (char *)0x0;
  if (local_160 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_118,(CowData *)&local_160);
  }
  Vector<String>::push_back((Vector<String> *)&local_158,(CowData<char32_t> *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_160);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
  local_108 = (undefined1  [16])0x0;
  local_148 = "_set_parameter";
  local_118 = (char *)0x0;
  local_110 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 6;
  local_e0 = 1;
  local_d8[0] = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b0 = 0;
  local_140._0_8_ = 0xe;
  String::parse_latin1((StrRange *)&local_118);
  local_e0 = CONCAT44(local_e0._4_4_,8);
  local_178 = 0;
  local_170 = 0;
  local_148 = "";
  auVar3._8_8_ = 0;
  auVar3._0_8_ = local_140._8_8_;
  local_140 = auVar3 << 0x40;
  String::parse_latin1((StrRange *)&local_170);
  local_168 = 0;
  local_148 = (char *)CONCAT44(local_148._4_4_,0x15);
  local_130 = 0;
  local_128 = 0;
  local_140 = (undefined1  [16])0x0;
  if (local_170 == 0) {
LAB_0010eda3:
    local_120 = 6;
    StringName::operator=((StringName *)(local_140 + 8),(StringName *)&local_178);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_128,(CowData *)&local_170);
    local_120 = 6;
    if (local_130 != 0x11) goto LAB_0010eda3;
    StringName::StringName((StringName *)&local_160,(String *)&local_128,false);
    if (local_140._8_8_ == local_160) {
      if ((StringName::configured != '\0') && (local_160 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_140._8_8_ = local_160;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_170);
  if ((StringName::configured != '\0') && (local_178 != 0)) {
    StringName::unref();
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_d8,(PropertyInfo *)&local_148);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_148);
  Vector<int>::push_back(local_b8,0);
  local_170 = 0;
  local_168 = 0;
  local_160 = 0;
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_148,0,(StrRange *)&local_160,0,(StrRange *)&local_168,0x20006,
             (StrRange *)&local_170);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_160);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  if ((StringName::configured != '\0') && (local_170 != 0)) {
    StringName::unref();
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_d8,(PropertyInfo *)&local_148);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_148);
  Vector<int>::push_back(local_b8,0);
  local_148 = "AudioStreamPlayback";
  local_160 = 0;
  local_140._0_8_ = 0x13;
  String::parse_latin1((StrRange *)&local_160);
  StringName::StringName((StringName *)&local_148,(String *)&local_160,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_148,(MethodInfo *)&local_118,true,(StrRange *)&local_158,false);
  if ((StringName::configured != '\0') && (local_148 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_160);
  MethodInfo::~MethodInfo((MethodInfo *)&local_118);
  CowData<String>::_unref((CowData<String> *)&local_150);
  local_150 = 0;
  local_148 = (char *)0x0;
  local_118 = "name";
  local_110 = 4;
  String::parse_latin1((StrRange *)&local_148);
  local_118 = (char *)0x0;
  if (local_148 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_118,(CowData *)&local_148);
  }
  Vector<String>::push_back((Vector<String> *)&local_158,(CowData<char32_t> *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
  local_118 = (char *)0x0;
  local_110 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 6;
  local_e0 = 1;
  local_d8[0] = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b0 = 0;
  local_148 = "_get_parameter";
  local_140._0_8_ = 0xe;
  local_108 = (undefined1  [16])0x0;
  String::parse_latin1((StrRange *)&local_118);
  local_e0 = CONCAT44(local_e0._4_4_,0xc);
  local_170 = 0;
  local_168 = 0;
  local_160 = 0;
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_148,0,(StrRange *)&local_160,0,(StrRange *)&local_168,0x20006,
             (StrRange *)&local_170);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_160);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  if ((StringName::configured != '\0') && (local_170 != 0)) {
    StringName::unref();
  }
  PropertyInfo::operator=((PropertyInfo *)&local_110,(PropertyInfo *)&local_148);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_148);
  local_c0 = local_c0 & 0xffffffff00000000;
  local_178 = 0;
  local_170 = 0;
  local_148 = "";
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_140._8_8_;
  local_140 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_170);
  local_168 = 0;
  local_148 = (char *)CONCAT44(local_148._4_4_,0x15);
  local_130 = 0;
  local_128 = 0;
  local_140 = (undefined1  [16])0x0;
  if (local_170 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_128,(CowData *)&local_170);
    local_120 = 6;
    if (local_130 == 0x11) {
      StringName::StringName((StringName *)&local_160,(String *)&local_128,false);
      if (local_140._8_8_ == local_160) {
        if ((StringName::configured != '\0') && (local_160 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_140._8_8_ = local_160;
      }
      goto LAB_0010f1cd;
    }
  }
  local_120 = 6;
  StringName::operator=((StringName *)(local_140 + 8),(StringName *)&local_178);
LAB_0010f1cd:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_170);
  if ((StringName::configured != '\0') && (local_178 != 0)) {
    StringName::unref();
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_d8,(PropertyInfo *)&local_148);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_148);
  Vector<int>::push_back(local_b8,0);
  local_148 = "AudioStreamPlayback";
  local_160 = 0;
  local_140._0_8_ = 0x13;
  String::parse_latin1((StrRange *)&local_160);
  StringName::StringName((StringName *)&local_148,(String *)&local_160,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_148,(MethodInfo *)&local_118,true,(StrRange *)&local_158,false);
  if ((StringName::configured != '\0') && (local_148 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_160);
  MethodInfo::~MethodInfo((MethodInfo *)&local_118);
  CowData<String>::_unref((CowData<String> *)&local_150);
  local_a0 = 0;
  local_a8 = "playback_sample";
  local_78 = (Variant **)&local_a8;
  uVar6 = (uint)(Variant *)&local_78;
  D_METHODP((char *)&local_118,(char ***)"set_sample_playback",uVar6);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar5 = create_method_bind<AudioStreamPlayback,Ref<AudioSamplePlayback>const&>
                     ((_func_void_Ref_ptr *)0x1b9);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_118,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_118);
  D_METHODP((char *)&local_118,(char ***)"get_sample_playback",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar5 = create_method_bind<AudioStreamPlayback,Ref<AudioSamplePlayback>>((_func_Ref *)0x1b1);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_118,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_118);
  local_88 = 0;
  local_98 = (Variant *)puVar4;
  pcStack_90 = "frames";
  auStack_70._0_8_ = &pcStack_90;
  local_78 = &local_98;
  D_METHODP((char *)&local_118,(char ***)"mix_audio",uVar6);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar5 = create_method_bind<AudioStreamPlayback,Vector<Vector2>,float,int>(_mix_audio_bind);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_118,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_118);
  pcStack_90 = (char *)0x0;
  local_98 = (Variant *)0x113fc2;
  local_78 = &local_98;
  D_METHODP((char *)&local_118,(char ***)"start",uVar6);
  Variant::Variant((Variant *)&local_78,0.0);
  local_58 = (undefined1  [16])0x0;
  local_60 = 0;
  local_98 = (Variant *)&local_78;
  pMVar5 = create_method_bind<AudioStreamPlayback,double>(start_playback);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_118,&local_98,1);
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
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_118);
  pcStack_90 = (char *)0x0;
  local_98 = (Variant *)&_LC193;
  local_78 = &local_98;
  D_METHODP((char *)&local_118,(char ***)&_LC194,uVar6);
  Variant::Variant((Variant *)&local_78,0.0);
  local_58 = (undefined1  [16])0x0;
  local_60 = 0;
  local_98 = (Variant *)&local_78;
  pMVar5 = create_method_bind<AudioStreamPlayback,double>(seek_playback);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_118,&local_98,1);
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
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_118);
  D_METHODP((char *)&local_118,(char ***)&_LC149,0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar5 = create_method_bind<AudioStreamPlayback>(stop_playback);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_118,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_118);
  D_METHODP((char *)&local_118,(char ***)"get_loop_count",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar5 = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(pMVar5);
  *(undefined ***)pMVar5 = &PTR__gen_argument_type_0012eeb0;
  *(undefined8 *)(pMVar5 + 0x58) = 0x169;
  *(undefined8 *)(pMVar5 + 0x60) = 0;
  MethodBind::_set_returns(SUB81(pMVar5,0));
  MethodBind::_set_const(SUB81(pMVar5,0));
  MethodBind::_generate_argument_types((int)pMVar5);
  *(undefined4 *)(pMVar5 + 0x34) = 0;
  local_158 = 0;
  local_148 = "AudioStreamPlayback";
  local_140._0_8_ = 0x13;
  String::parse_latin1((StrRange *)&local_158);
  StringName::StringName((StringName *)&local_148,(String *)&local_158,false);
  StringName::operator=((StringName *)(pMVar5 + 0x18),(StringName *)&local_148);
  if ((StringName::configured != '\0') && (local_148 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_118,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_118);
  D_METHODP((char *)&local_118,(char ***)"get_playback_position",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar5 = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(pMVar5);
  *(undefined ***)pMVar5 = &PTR__gen_argument_type_0012ef10;
  *(undefined8 *)(pMVar5 + 0x58) = 0x171;
  *(undefined8 *)(pMVar5 + 0x60) = 0;
  MethodBind::_set_returns(SUB81(pMVar5,0));
  MethodBind::_set_const(SUB81(pMVar5,0));
  MethodBind::_generate_argument_types((int)pMVar5);
  *(undefined4 *)(pMVar5 + 0x34) = 0;
  local_158 = 0;
  local_148 = "AudioStreamPlayback";
  local_140._0_8_ = 0x13;
  String::parse_latin1((StrRange *)&local_158);
  StringName::StringName((StringName *)&local_148,(String *)&local_158,false);
  StringName::operator=((StringName *)(pMVar5 + 0x18),(StringName *)&local_148);
  if ((StringName::configured != '\0') && (local_148 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_118,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_118);
  D_METHODP((char *)&local_118,(char ***)"is_playing",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar5 = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(pMVar5);
  *(undefined ***)pMVar5 = &PTR__gen_argument_type_0012ef70;
  *(undefined8 *)(pMVar5 + 0x58) = 0x161;
  *(undefined8 *)(pMVar5 + 0x60) = 0;
  MethodBind::_set_returns(SUB81(pMVar5,0));
  MethodBind::_set_const(SUB81(pMVar5,0));
  MethodBind::_generate_argument_types((int)pMVar5);
  *(undefined4 *)(pMVar5 + 0x34) = 0;
  local_158 = 0;
  local_148 = "AudioStreamPlayback";
  local_140._0_8_ = 0x13;
  String::parse_latin1((StrRange *)&local_158);
  StringName::StringName((StringName *)&local_148,(String *)&local_158,false);
  StringName::operator=((StringName *)(pMVar5 + 0x18),(StringName *)&local_148);
  if ((StringName::configured != '\0') && (local_148 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_118,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_118);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* AudioStreamPlaybackResampled::_mix_internal(AudioFrame*, int) */

int __thiscall
AudioStreamPlaybackResampled::_mix_internal
          (AudioStreamPlaybackResampled *this,AudioFrame *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  code *pcVar6;
  long in_FS_OFFSET;
  CowData<char32_t> local_178 [8];
  CowData<char32_t> local_170 [8];
  undefined8 local_168;
  String local_160 [8];
  undefined8 local_158;
  AudioFrame *local_150;
  long local_148;
  long local_140 [5];
  int local_118 [2];
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined1 local_108 [16];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8 [2];
  undefined8 local_c8;
  undefined8 local_c0;
  Vector<int> local_b8 [8];
  undefined8 local_b0;
  Variant *local_a8;
  Variant *pVStack_a0;
  int local_98 [8];
  AudioFrame **local_78;
  long *plStack_70;
  int local_60 [8];
  long local_40;
  
  plVar5 = *(long **)(this + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar5 != (long *)0x0) {
    local_118[0] = 0;
    local_118[1] = 0;
    uStack_110 = 0;
    Variant::Variant((Variant *)&local_78,(ulong)param_1);
    Variant::Variant((Variant *)local_60,param_2);
    local_a8 = (Variant *)&local_78;
    pVStack_a0 = (Variant *)local_60;
    (**(code **)(*plVar5 + 0x60))((Variant *)local_98,plVar5,this + 0x6a0,&local_a8,2,local_118);
    if (local_118[0] == 0) {
      iVar1 = Variant::operator_cast_to_int((Variant *)local_98);
      if (Variant::needs_deinit[local_98[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_60[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[(int)local_78] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_0010fcce;
    }
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_60[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(this + 8) != 0) && (this[0x6a8] == (AudioStreamPlaybackResampled)0x0)) {
    local_118[0] = 0;
    local_118[1] = 0;
    local_108 = (undefined1  [16])0x0;
    uStack_110 = 0;
    uStack_10c = 0;
    local_f8 = 0;
    local_f0 = 0;
    local_e8 = 6;
    local_e0 = 1;
    local_d8[0] = 0;
    local_c8 = 0;
    local_c0 = 0;
    local_b0 = 0;
    String::parse_latin1((String *)local_118,"_mix_resampled");
    local_e0 = CONCAT44(local_e0._4_4_,0x88);
    GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)&local_148);
    PropertyInfo::operator=((PropertyInfo *)&uStack_110,(PropertyInfo *)&local_148);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_148);
    local_c0 = CONCAT44(local_c0._4_4_,3);
    GetTypeInfo<GDExtensionPtr<AudioFrame>,void>::get_class_info
              ((GetTypeInfo<GDExtensionPtr<AudioFrame>,void> *)&local_148);
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)local_d8,(PropertyInfo *)&local_148);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_148);
    Vector<int>::push_back(local_b8,0);
    GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)&local_148);
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)local_d8,(PropertyInfo *)&local_148);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_148);
    Vector<int>::push_back(local_b8,3);
    uVar2 = MethodInfo::get_compatibility_hash();
    *(undefined8 *)(this + 0x6b0) = 0;
    lVar4 = *(long *)(this + 8);
    pcVar6 = *(code **)(lVar4 + 0xd8);
    if (((pcVar6 == (code *)0x0) || (*(long *)(lVar4 + 0xe0) == 0)) &&
       (pcVar6 = *(code **)(lVar4 + 0xd0), pcVar6 == (code *)0x0)) {
      local_158 = 0;
      String::parse_latin1((String *)&local_158,"AudioStreamPlaybackResampled");
      StringName::StringName((StringName *)&local_150,(String *)&local_158,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)&local_148,(StringName *)&local_150);
      if (local_140[0] == 0) {
        lVar4 = 0;
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_140);
        if (StringName::configured != '\0') goto LAB_0011018b;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
LAB_001101aa:
        lVar4 = *(long *)(this + 8);
        pcVar6 = *(code **)(lVar4 + 200);
        if (((pcVar6 == (code *)0x0) || (*(long *)(lVar4 + 0xe0) == 0)) &&
           (pcVar6 = *(code **)(lVar4 + 0xc0), pcVar6 == (code *)0x0)) goto LAB_0011008c;
        uVar3 = (*pcVar6)(*(undefined8 *)(lVar4 + 0xa0),this + 0x6a0);
        *(undefined8 *)(this + 0x6b0) = uVar3;
      }
      else {
        lVar4 = *(long *)(local_140[0] + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_140);
        if (StringName::configured != '\0') {
LAB_0011018b:
          if (local_150 != (AudioFrame *)0x0) {
            StringName::unref();
          }
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
        if (lVar4 == 0) goto LAB_001101aa;
      }
      lVar4 = *(long *)(this + 8);
    }
    else {
      uVar3 = (*pcVar6)(*(undefined8 *)(lVar4 + 0xa0),this + 0x6a0,uVar2);
      *(undefined8 *)(this + 0x6b0) = uVar3;
      lVar4 = *(long *)(this + 8);
    }
LAB_0011008c:
    if (*(char *)(lVar4 + 0x29) != '\0') {
      plVar5 = (long *)operator_new(0x18,"");
      *plVar5 = (long)(this + 0x6b0);
      plVar5[1] = (long)(this + 0x6a8);
      plVar5[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar5;
    }
    this[0x6a8] = (AudioStreamPlaybackResampled)0x1;
    MethodInfo::~MethodInfo((MethodInfo *)local_118);
  }
  pcVar6 = *(code **)(this + 0x6b0);
  if (pcVar6 == (code *)0x0) {
    if (_gdvirtual__mix_resampled_call(GDExtensionPtr<AudioFrame>,int,int&)::first_print == '\0') {
      iVar1 = 0;
    }
    else {
      local_148 = 0;
      local_118[0] = 0x114308;
      local_118[1] = 0;
      uStack_110 = 0x23;
      uStack_10c = 0;
      String::parse_latin1((StrRange *)&local_148);
      local_158 = 0;
      local_118[0] = 0x113b53;
      local_118[1] = 0;
      uStack_110 = 0xe;
      uStack_10c = 0;
      String::parse_latin1((StrRange *)&local_158);
      local_168 = 0;
      local_118[0] = 0x1204f4;
      local_118[1] = 0;
      uStack_110 = 2;
      uStack_10c = 0;
      String::parse_latin1((StrRange *)&local_168);
      (**(code **)(*(long *)this + 0x48))(local_178,this);
      operator+((char *)local_170,(String *)"Required virtual method ");
      String::operator+(local_160,(String *)local_170);
      String::operator+((String *)&local_150,local_160);
      String::operator+((String *)local_118,(String *)&local_150);
      _err_print_error("_gdvirtual__mix_resampled_call","servers/audio/audio_stream.h",0x94,
                       (String *)local_118,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_118);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_150);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_160);
      CowData<char32_t>::_unref(local_170);
      CowData<char32_t>::_unref(local_178);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
      _gdvirtual__mix_resampled_call(GDExtensionPtr<AudioFrame>,int,int&)::first_print = '\0';
      iVar1 = 0;
    }
  }
  else {
    plStack_70 = &local_148;
    local_78 = &local_150;
    local_150 = param_1;
    local_148 = (long)param_2;
    if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
      (*pcVar6)(*(undefined8 *)(this + 0x10),&local_78,local_118);
      iVar1 = local_118[0];
    }
    else {
      (**(code **)(*(long *)(this + 8) + 0xe0))
                (*(undefined8 *)(this + 0x10),this + 0x6a0,pcVar6,&local_78,local_118);
      iVar1 = local_118[0];
    }
  }
LAB_0010fcce:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}



/* AudioStreamPlayback::get_parameter(StringName const&) const */

StringName * AudioStreamPlayback::get_parameter(StringName *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  StringName *in_RDX;
  long in_RSI;
  long in_FS_OFFSET;
  undefined8 local_158;
  long local_150;
  GetTypeInfo<Variant,void> local_148 [8];
  long local_140 [5];
  int local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined1 local_108 [16];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8 [2];
  undefined8 local_c8;
  ulong local_c0;
  Vector<int> local_b8 [8];
  undefined8 local_b0;
  Variant *local_a0;
  StringName *local_98 [4];
  int local_78 [2];
  undefined1 local_70 [16];
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  plVar4 = *(long **)(in_RSI + 0x98);
  *(undefined4 *)param_1 = 0;
  if (plVar4 != (long *)0x0) {
    local_118 = 0;
    uStack_114 = 0;
    uStack_110 = 0;
    Variant::Variant((Variant *)local_98,in_RDX);
    local_a0 = (Variant *)local_98;
    (**(code **)(*plVar4 + 0x60))((Variant *)local_78,plVar4,in_RSI + 600,&local_a0,1,&local_118);
    if (local_118 == 0) {
      Variant::Variant((Variant *)local_58,(Variant *)local_78);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_58[0];
      *(undefined8 *)(param_1 + 8) = local_50;
      *(undefined8 *)(param_1 + 0x10) = uStack_48;
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[(int)local_98[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_00110360;
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[(int)local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(in_RSI + 8) != 0) && (*(char *)(in_RSI + 0x260) == '\0')) {
    local_108 = (undefined1  [16])0x0;
    local_118 = 0;
    uStack_114 = 0;
    uStack_110 = 0;
    uStack_10c = 0;
    local_f8 = 0;
    local_f0 = 0;
    local_e8 = 6;
    local_e0 = 1;
    local_d8[0] = 0;
    local_c8 = 0;
    local_c0 = 0;
    local_b0 = 0;
    String::parse_latin1((String *)&local_118,"_get_parameter");
    local_e0 = CONCAT44(local_e0._4_4_,0xc);
    GetTypeInfo<Variant,void>::get_class_info(local_148);
    PropertyInfo::operator=((PropertyInfo *)&uStack_110,(PropertyInfo *)local_148);
    PropertyInfo::~PropertyInfo((PropertyInfo *)local_148);
    local_c0 = local_c0 & 0xffffffff00000000;
    GetTypeInfo<StringName_const&,void>::get_class_info
              ((GetTypeInfo<StringName_const&,void> *)local_148);
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)local_d8,(PropertyInfo *)local_148);
    PropertyInfo::~PropertyInfo((PropertyInfo *)local_148);
    Vector<int>::push_back(local_b8,0);
    uVar1 = MethodInfo::get_compatibility_hash();
    lVar3 = *(long *)(in_RSI + 8);
    *(undefined8 *)(in_RSI + 0x268) = 0;
    pcVar5 = *(code **)(lVar3 + 0xd8);
    if (((pcVar5 == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
       (pcVar5 = *(code **)(lVar3 + 0xd0), pcVar5 == (code *)0x0)) {
      local_158 = 0;
      String::parse_latin1((String *)&local_158,"AudioStreamPlayback");
      StringName::StringName((StringName *)&local_150,(String *)&local_158,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)local_148,(StringName *)&local_150);
      if (local_140[0] == 0) {
        lVar3 = 0;
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_140);
        if (StringName::configured != '\0') goto LAB_001107dd;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
      }
      else {
        lVar3 = *(long *)(local_140[0] + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_140);
        if (StringName::configured != '\0') {
LAB_001107dd:
          if (local_150 != 0) {
            StringName::unref();
          }
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
        if (lVar3 != 0) {
          lVar3 = *(long *)(in_RSI + 8);
          goto LAB_001106af;
        }
      }
      lVar3 = *(long *)(in_RSI + 8);
      pcVar5 = *(code **)(lVar3 + 200);
      if (((pcVar5 != (code *)0x0) && (*(long *)(lVar3 + 0xe0) != 0)) ||
         (pcVar5 = *(code **)(lVar3 + 0xc0), pcVar5 != (code *)0x0)) {
        uVar2 = (*pcVar5)(*(undefined8 *)(lVar3 + 0xa0),in_RSI + 600);
        *(undefined8 *)(in_RSI + 0x268) = uVar2;
        lVar3 = *(long *)(in_RSI + 8);
      }
    }
    else {
      uVar2 = (*pcVar5)(*(undefined8 *)(lVar3 + 0xa0),in_RSI + 600,uVar1);
      *(undefined8 *)(in_RSI + 0x268) = uVar2;
      lVar3 = *(long *)(in_RSI + 8);
    }
LAB_001106af:
    if (*(char *)(lVar3 + 0x29) != '\0') {
      plVar4 = (long *)operator_new(0x18,"");
      *plVar4 = in_RSI + 0x268;
      plVar4[1] = in_RSI + 0x260;
      plVar4[2] = *(long *)(in_RSI + 0x168);
      *(long **)(in_RSI + 0x168) = plVar4;
    }
    *(undefined1 *)(in_RSI + 0x260) = 1;
    MethodInfo::~MethodInfo((MethodInfo *)&local_118);
  }
  if (*(long *)(in_RSI + 0x268) != 0) {
    StringName::StringName((StringName *)&local_118,in_RDX);
    local_78[0] = 0;
    local_78[1] = 0;
    local_70 = (undefined1  [16])0x0;
    pcVar5 = *(code **)(*(long *)(in_RSI + 8) + 0xe0);
    local_98[0] = (StringName *)&local_118;
    if (pcVar5 == (code *)0x0) {
      (**(code **)(in_RSI + 0x268))(*(undefined8 *)(in_RSI + 0x10),local_98,(Variant *)local_78);
      Variant::Variant((Variant *)local_58,(Variant *)local_78);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined8 *)(param_1 + 8) = local_50;
      *(undefined8 *)(param_1 + 0x10) = uStack_48;
      *(undefined4 *)param_1 = local_58[0];
    }
    else {
      (*pcVar5)(*(undefined8 *)(in_RSI + 0x10),in_RSI + 600,*(undefined8 *)(in_RSI + 0x268),local_98
                ,(Variant *)local_78);
      Variant::Variant((Variant *)local_58,(Variant *)local_78);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_58[0];
      *(undefined8 *)(param_1 + 8) = local_50;
      *(undefined8 *)(param_1 + 0x10) = uStack_48;
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (CONCAT44(uStack_114,local_118) != 0)) {
      StringName::unref();
    }
  }
LAB_00110360:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* AudioStreamPlayback::set_parameter(StringName const&, Variant const&) */

void __thiscall
AudioStreamPlayback::set_parameter(AudioStreamPlayback *this,StringName *param_1,Variant *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  long in_FS_OFFSET;
  undefined8 local_158;
  long local_150;
  GetTypeInfo<StringName_const&,void> local_148 [8];
  long local_140 [5];
  int local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined1 local_108 [16];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8 [2];
  undefined8 local_c8;
  undefined8 local_c0;
  Vector<int> local_b8 [8];
  undefined8 local_b0;
  Variant *local_a8;
  Variant *pVStack_a0;
  StringName *local_98;
  Variant *pVStack_90;
  int local_78 [6];
  int local_60 [8];
  long local_40;
  
  plVar4 = *(long **)(this + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar4 != (long *)0x0) {
    local_118 = 0;
    uStack_114 = 0;
    uStack_110 = 0;
    Variant::Variant((Variant *)local_78,param_1);
    Variant::Variant((Variant *)local_60,param_2);
    local_a8 = (Variant *)local_78;
    pVStack_a0 = (Variant *)local_60;
    (**(code **)(*plVar4 + 0x60))(&local_98,plVar4,this + 0x240,&local_a8,2,&local_118);
    if (Variant::needs_deinit[(int)local_98] != '\0') {
      Variant::_clear_internal();
    }
    if (local_118 == 0) {
      if (Variant::needs_deinit[local_60[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_00110a0b;
    }
    if (Variant::needs_deinit[local_60[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(this + 8) != 0) && (this[0x248] == (AudioStreamPlayback)0x0)) {
    local_118 = 0;
    uStack_114 = 0;
    local_108 = (undefined1  [16])0x0;
    uStack_110 = 0;
    uStack_10c = 0;
    local_f8 = 0;
    local_f0 = 0;
    local_e8 = 6;
    local_e0 = 1;
    local_d8[0] = 0;
    local_c8 = 0;
    local_c0 = 0;
    local_b0 = 0;
    String::parse_latin1((String *)&local_118,"_set_parameter");
    local_e0 = CONCAT44(local_e0._4_4_,8);
    GetTypeInfo<StringName_const&,void>::get_class_info(local_148);
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)local_d8,(PropertyInfo *)local_148);
    PropertyInfo::~PropertyInfo((PropertyInfo *)local_148);
    Vector<int>::push_back(local_b8,0);
    GetTypeInfo<Variant_const&,void>::get_class_info((GetTypeInfo<Variant_const&,void> *)local_148);
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)local_d8,(PropertyInfo *)local_148);
    PropertyInfo::~PropertyInfo((PropertyInfo *)local_148);
    Vector<int>::push_back(local_b8,0);
    uVar1 = MethodInfo::get_compatibility_hash();
    lVar3 = *(long *)(this + 8);
    *(undefined8 *)(this + 0x250) = 0;
    pcVar5 = *(code **)(lVar3 + 0xd8);
    if (((pcVar5 == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
       (pcVar5 = *(code **)(lVar3 + 0xd0), pcVar5 == (code *)0x0)) {
      local_158 = 0;
      String::parse_latin1((String *)&local_158,"AudioStreamPlayback");
      StringName::StringName((StringName *)&local_150,(String *)&local_158,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)local_148,(StringName *)&local_150);
      if (local_140[0] == 0) {
        lVar3 = 0;
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_140);
        if (StringName::configured != '\0') goto LAB_00110d81;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
LAB_00110da0:
        lVar3 = *(long *)(this + 8);
        pcVar5 = *(code **)(lVar3 + 200);
        if (((pcVar5 == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
           (pcVar5 = *(code **)(lVar3 + 0xc0), pcVar5 == (code *)0x0)) goto LAB_00110c98;
        uVar2 = (*pcVar5)(*(undefined8 *)(lVar3 + 0xa0),this + 0x240);
        *(undefined8 *)(this + 0x250) = uVar2;
      }
      else {
        lVar3 = *(long *)(local_140[0] + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_140);
        if (StringName::configured != '\0') {
LAB_00110d81:
          if (local_150 != 0) {
            StringName::unref();
          }
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
        if (lVar3 == 0) goto LAB_00110da0;
      }
      lVar3 = *(long *)(this + 8);
    }
    else {
      uVar2 = (*pcVar5)(*(undefined8 *)(lVar3 + 0xa0),this + 0x240,uVar1);
      *(undefined8 *)(this + 0x250) = uVar2;
      lVar3 = *(long *)(this + 8);
    }
LAB_00110c98:
    if (*(char *)(lVar3 + 0x29) != '\0') {
      plVar4 = (long *)operator_new(0x18,"");
      *plVar4 = (long)(this + 0x250);
      plVar4[1] = (long)(this + 0x248);
      plVar4[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar4;
    }
    this[0x248] = (AudioStreamPlayback)0x1;
    MethodInfo::~MethodInfo((MethodInfo *)&local_118);
  }
  if (*(long *)(this + 0x250) != 0) {
    StringName::StringName((StringName *)&local_118,param_1);
    Variant::Variant((Variant *)local_78,param_2);
    local_98 = (StringName *)&local_118;
    pVStack_90 = (Variant *)local_78;
    if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
      (**(code **)(this + 0x250))(*(undefined8 *)(this + 0x10),&local_98,0);
    }
    else {
      (**(code **)(*(long *)(this + 8) + 0xe0))
                (*(undefined8 *)(this + 0x10),this + 0x240,*(undefined8 *)(this + 0x250),&local_98,0
                );
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (CONCAT44(uStack_114,local_118) != 0)) {
      StringName::unref();
    }
  }
LAB_00110a0b:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* AudioStreamPlayback::mix(AudioFrame*, float, int) */

int __thiscall
AudioStreamPlayback::mix(AudioStreamPlayback *this,AudioFrame *param_1,float param_2,int param_3)

{
  Variant *pVVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  code *pcVar7;
  Variant *pVVar8;
  long in_FS_OFFSET;
  CowData<char32_t> local_198 [8];
  CowData<char32_t> local_190 [8];
  undefined8 local_188;
  String local_180 [8];
  AudioFrame *local_178;
  double local_170;
  long local_168;
  long local_160 [5];
  int local_138 [2];
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined1 local_128 [16];
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8 [2];
  undefined8 local_e8;
  undefined8 local_e0;
  Vector<int> local_d8 [8];
  undefined8 local_d0;
  Variant *local_c8;
  Variant *pVStack_c0;
  Variant *local_b8;
  int local_a8 [8];
  AudioFrame **local_88;
  double *pdStack_80;
  long *local_78;
  Variant local_70 [24];
  Variant local_58 [24];
  long local_40 [2];
  
  plVar6 = *(long **)(this + 0x98);
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar6 != (long *)0x0) {
    local_138[0] = 0;
    local_138[1] = 0;
    uStack_130 = 0;
    Variant::Variant((Variant *)&local_88,(ulong)param_1);
    Variant::Variant(local_70,param_2);
    Variant::Variant(local_58,param_3);
    local_c8 = (Variant *)&local_88;
    pVStack_c0 = local_70;
    local_b8 = local_58;
    (**(code **)(*plVar6 + 0x60))((Variant *)local_a8,plVar6,this + 0x210,&local_c8,3,local_138);
    if (local_138[0] == 0) {
      iVar2 = Variant::operator_cast_to_int((Variant *)local_a8);
      if (Variant::needs_deinit[local_a8[0]] != '\0') {
        Variant::_clear_internal();
      }
      pVVar8 = (Variant *)local_40;
      do {
        pVVar1 = pVVar8 + -0x18;
        pVVar8 = pVVar8 + -0x18;
        if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
          Variant::_clear_internal();
        }
      } while (pVVar8 != (Variant *)&local_88);
      goto LAB_00111030;
    }
    if (Variant::needs_deinit[local_a8[0]] != '\0') {
      Variant::_clear_internal();
    }
    pVVar8 = (Variant *)local_40;
    do {
      pVVar1 = pVVar8 + -0x18;
      pVVar8 = pVVar8 + -0x18;
      if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
        Variant::_clear_internal();
      }
    } while (pVVar8 != (Variant *)&local_88);
  }
  if ((*(long *)(this + 8) != 0) && (this[0x218] == (AudioStreamPlayback)0x0)) {
    local_138[0] = 0;
    local_138[1] = 0;
    local_128 = (undefined1  [16])0x0;
    uStack_130 = 0;
    uStack_12c = 0;
    local_118 = 0;
    local_110 = 0;
    local_108 = 6;
    local_100 = 1;
    local_f8[0] = 0;
    local_e8 = 0;
    local_e0 = 0;
    local_d0 = 0;
    String::parse_latin1((String *)local_138,"_mix");
    local_100 = CONCAT44(local_100._4_4_,0x88);
    GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)&local_168);
    PropertyInfo::operator=((PropertyInfo *)&uStack_130,(PropertyInfo *)&local_168);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_168);
    local_e0 = CONCAT44(local_e0._4_4_,3);
    GetTypeInfo<GDExtensionPtr<AudioFrame>,void>::get_class_info
              ((GetTypeInfo<GDExtensionPtr<AudioFrame>,void> *)&local_168);
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)local_f8,(PropertyInfo *)&local_168);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_168);
    Vector<int>::push_back(local_d8,0);
    GetTypeInfo<float,void>::get_class_info((GetTypeInfo<float,void> *)&local_168);
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)local_f8,(PropertyInfo *)&local_168);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_168);
    Vector<int>::push_back(local_d8,9);
    GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)&local_168);
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)local_f8,(PropertyInfo *)&local_168);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_168);
    Vector<int>::push_back(local_d8,3);
    uVar3 = MethodInfo::get_compatibility_hash();
    *(undefined8 *)(this + 0x220) = 0;
    lVar5 = *(long *)(this + 8);
    pcVar7 = *(code **)(lVar5 + 0xd8);
    if (((pcVar7 == (code *)0x0) || (*(long *)(lVar5 + 0xe0) == 0)) &&
       (pcVar7 = *(code **)(lVar5 + 0xd0), pcVar7 == (code *)0x0)) {
      local_178 = (AudioFrame *)0x0;
      String::parse_latin1((String *)&local_178,"AudioStreamPlayback");
      StringName::StringName((StringName *)&local_170,(String *)&local_178,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)&local_168,(StringName *)&local_170);
      if (local_160[0] == 0) {
        lVar5 = 0;
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_160);
        if (StringName::configured != '\0') goto LAB_001114cf;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
LAB_001114ee:
        lVar5 = *(long *)(this + 8);
        pcVar7 = *(code **)(lVar5 + 200);
        if (((pcVar7 == (code *)0x0) || (*(long *)(lVar5 + 0xe0) == 0)) &&
           (pcVar7 = *(code **)(lVar5 + 0xc0), pcVar7 == (code *)0x0)) goto LAB_001113f0;
        uVar4 = (*pcVar7)(*(undefined8 *)(lVar5 + 0xa0),this + 0x210);
        *(undefined8 *)(this + 0x220) = uVar4;
      }
      else {
        lVar5 = *(long *)(local_160[0] + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_160);
        if (StringName::configured != '\0') {
LAB_001114cf:
          if (local_170 != 0.0) {
            StringName::unref();
          }
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
        if (lVar5 == 0) goto LAB_001114ee;
      }
      lVar5 = *(long *)(this + 8);
    }
    else {
      uVar4 = (*pcVar7)(*(undefined8 *)(lVar5 + 0xa0),this + 0x210,uVar3);
      *(undefined8 *)(this + 0x220) = uVar4;
      lVar5 = *(long *)(this + 8);
    }
LAB_001113f0:
    if (*(char *)(lVar5 + 0x29) != '\0') {
      plVar6 = (long *)operator_new(0x18,"");
      *plVar6 = (long)(this + 0x220);
      plVar6[1] = (long)(this + 0x218);
      plVar6[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar6;
    }
    this[0x218] = (AudioStreamPlayback)0x1;
    MethodInfo::~MethodInfo((MethodInfo *)local_138);
  }
  pcVar7 = *(code **)(this + 0x220);
  if (pcVar7 == (code *)0x0) {
    if (_gdvirtual__mix_call(GDExtensionPtr<AudioFrame>,float,int,int&)::first_print == '\0') {
      iVar2 = 0;
    }
    else {
      local_168 = 0;
      String::parse_latin1((String *)&local_168," must be overridden before calling.");
      local_178 = (AudioFrame *)0x0;
      String::parse_latin1((String *)&local_178,"_mix");
      local_188 = 0;
      String::parse_latin1((String *)&local_188,"::");
      (**(code **)(*(long *)this + 0x48))(local_198,this);
      operator+((char *)local_190,(String *)"Required virtual method ");
      String::operator+(local_180,(String *)local_190);
      String::operator+((String *)&local_170,local_180);
      String::operator+((String *)local_138,(String *)&local_170);
      _err_print_error("_gdvirtual__mix_call","servers/audio/audio_stream.h",0x5b,
                       (String *)local_138,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_138);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_170);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_180);
      CowData<char32_t>::_unref(local_190);
      CowData<char32_t>::_unref(local_198);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
      _gdvirtual__mix_call(GDExtensionPtr<AudioFrame>,float,int,int&)::first_print = '\0';
      iVar2 = 0;
    }
  }
  else {
    pdStack_80 = &local_170;
    local_88 = &local_178;
    local_78 = &local_168;
    local_170 = (double)param_2;
    local_178 = param_1;
    local_168 = (long)param_3;
    if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
      (*pcVar7)(*(undefined8 *)(this + 0x10),&local_88,local_138);
      iVar2 = local_138[0];
    }
    else {
      (**(code **)(*(long *)(this + 8) + 0xe0))
                (*(undefined8 *)(this + 0x10),this + 0x210,pcVar7,&local_88,local_138);
      iVar2 = local_138[0];
    }
  }
LAB_00111030:
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



/* AudioStreamPlayback::seek(double) */

void __thiscall AudioStreamPlayback::seek(AudioStreamPlayback *this,double param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  long in_FS_OFFSET;
  undefined8 local_138;
  long local_130;
  GetTypeInfo<double,void> local_128 [8];
  long local_120 [5];
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8 [2];
  undefined8 local_a8;
  undefined8 local_a0;
  Vector<int> local_98 [8];
  undefined8 local_90;
  Variant *local_80;
  int local_78 [8];
  undefined8 *local_58 [3];
  long local_40;
  
  plVar4 = *(long **)(this + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar4 != (long *)0x0) {
    local_f8._0_4_ = 0;
    local_f8._4_4_ = 0;
    uStack_f0 = 0;
    Variant::Variant((Variant *)local_78,param_1);
    local_80 = (Variant *)local_78;
    (**(code **)(*plVar4 + 0x60))(local_58,plVar4,this + 0x1f8,&local_80,1,&local_f8);
    if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((int)local_f8 == 0) {
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_001116d0;
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(this + 8) != 0) && (this[0x200] == (AudioStreamPlayback)0x0)) {
    local_e8 = (undefined1  [16])0x0;
    local_f8._0_4_ = 0;
    local_f8._4_4_ = 0;
    uStack_f0 = 0;
    uStack_ec = 0;
    local_d8 = 0;
    local_d0 = 0;
    local_c8 = 6;
    local_c0 = 1;
    local_b8[0] = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_90 = 0;
    String::parse_latin1((String *)&local_f8,"_seek");
    local_c0 = CONCAT44(local_c0._4_4_,8);
    GetTypeInfo<double,void>::get_class_info(local_128);
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)local_b8,(PropertyInfo *)local_128);
    PropertyInfo::~PropertyInfo((PropertyInfo *)local_128);
    Vector<int>::push_back(local_98,10);
    uVar1 = MethodInfo::get_compatibility_hash();
    lVar3 = *(long *)(this + 8);
    *(undefined8 *)(this + 0x208) = 0;
    pcVar5 = *(code **)(lVar3 + 0xd8);
    if (((pcVar5 == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
       (pcVar5 = *(code **)(lVar3 + 0xd0), pcVar5 == (code *)0x0)) {
      local_138 = 0;
      String::parse_latin1((String *)&local_138,"AudioStreamPlayback");
      StringName::StringName((StringName *)&local_130,(String *)&local_138,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)local_128,(StringName *)&local_130);
      if (local_120[0] == 0) {
        lVar3 = 0;
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_120);
        if (StringName::configured != '\0') goto LAB_00111946;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
      }
      else {
        lVar3 = *(long *)(local_120[0] + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_120);
        if (StringName::configured != '\0') {
LAB_00111946:
          if (local_130 != 0) {
            StringName::unref();
          }
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
        if (lVar3 != 0) {
          lVar3 = *(long *)(this + 8);
          goto LAB_0011187a;
        }
      }
      lVar3 = *(long *)(this + 8);
      pcVar5 = *(code **)(lVar3 + 200);
      if (((pcVar5 != (code *)0x0) && (*(long *)(lVar3 + 0xe0) != 0)) ||
         (pcVar5 = *(code **)(lVar3 + 0xc0), pcVar5 != (code *)0x0)) {
        uVar2 = (*pcVar5)(*(undefined8 *)(lVar3 + 0xa0),this + 0x1f8);
        *(undefined8 *)(this + 0x208) = uVar2;
        lVar3 = *(long *)(this + 8);
      }
    }
    else {
      uVar2 = (*pcVar5)(*(undefined8 *)(lVar3 + 0xa0),this + 0x1f8,uVar1);
      *(undefined8 *)(this + 0x208) = uVar2;
      lVar3 = *(long *)(this + 8);
    }
LAB_0011187a:
    if (*(char *)(lVar3 + 0x29) != '\0') {
      plVar4 = (long *)operator_new(0x18,"");
      *plVar4 = (long)(this + 0x208);
      plVar4[1] = (long)(this + 0x200);
      plVar4[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar4;
    }
    this[0x200] = (AudioStreamPlayback)0x1;
    MethodInfo::~MethodInfo((MethodInfo *)&local_f8);
  }
  pcVar5 = *(code **)(this + 0x208);
  if (pcVar5 != (code *)0x0) {
    local_58[0] = &local_f8;
    local_f8 = param_1;
    if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
      (*pcVar5)(*(undefined8 *)(this + 0x10),local_58,0);
    }
    else {
      (**(code **)(*(long *)(this + 8) + 0xe0))
                (*(undefined8 *)(this + 0x10),this + 0x1f8,pcVar5,local_58,0);
    }
  }
LAB_001116d0:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* AudioStreamPlayback::start(double) */

void __thiscall AudioStreamPlayback::start(AudioStreamPlayback *this,double param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  long in_FS_OFFSET;
  undefined8 local_138;
  long local_130;
  GetTypeInfo<double,void> local_128 [8];
  long local_120 [5];
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8 [2];
  undefined8 local_a8;
  undefined8 local_a0;
  Vector<int> local_98 [8];
  undefined8 local_90;
  Variant *local_80;
  int local_78 [8];
  undefined8 *local_58 [3];
  long local_40;
  
  plVar4 = *(long **)(this + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar4 != (long *)0x0) {
    local_f8._0_4_ = 0;
    local_f8._4_4_ = 0;
    uStack_f0 = 0;
    Variant::Variant((Variant *)local_78,param_1);
    local_80 = (Variant *)local_78;
    (**(code **)(*plVar4 + 0x60))(local_58,plVar4,this + 0x180,&local_80,1,&local_f8);
    if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((int)local_f8 == 0) {
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_00111ba4;
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(this + 8) != 0) && (this[0x188] == (AudioStreamPlayback)0x0)) {
    local_e8 = (undefined1  [16])0x0;
    local_f8._0_4_ = 0;
    local_f8._4_4_ = 0;
    uStack_f0 = 0;
    uStack_ec = 0;
    local_d8 = 0;
    local_d0 = 0;
    local_c8 = 6;
    local_c0 = 1;
    local_b8[0] = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_90 = 0;
    String::parse_latin1((String *)&local_f8,"_start");
    local_c0 = CONCAT44(local_c0._4_4_,8);
    GetTypeInfo<double,void>::get_class_info(local_128);
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)local_b8,(PropertyInfo *)local_128);
    PropertyInfo::~PropertyInfo((PropertyInfo *)local_128);
    Vector<int>::push_back(local_98,10);
    uVar1 = MethodInfo::get_compatibility_hash();
    lVar3 = *(long *)(this + 8);
    *(undefined8 *)(this + 400) = 0;
    pcVar5 = *(code **)(lVar3 + 0xd8);
    if (((pcVar5 == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
       (pcVar5 = *(code **)(lVar3 + 0xd0), pcVar5 == (code *)0x0)) {
      local_138 = 0;
      String::parse_latin1((String *)&local_138,"AudioStreamPlayback");
      StringName::StringName((StringName *)&local_130,(String *)&local_138,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)local_128,(StringName *)&local_130);
      if (local_120[0] == 0) {
        lVar3 = 0;
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_120);
        if (StringName::configured != '\0') goto LAB_00111e56;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
      }
      else {
        lVar3 = *(long *)(local_120[0] + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_120);
        if (StringName::configured != '\0') {
LAB_00111e56:
          if (local_130 != 0) {
            StringName::unref();
          }
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
        if (lVar3 != 0) {
          lVar3 = *(long *)(this + 8);
          goto LAB_00111d8a;
        }
      }
      lVar3 = *(long *)(this + 8);
      pcVar5 = *(code **)(lVar3 + 200);
      if (((pcVar5 != (code *)0x0) && (*(long *)(lVar3 + 0xe0) != 0)) ||
         (pcVar5 = *(code **)(lVar3 + 0xc0), pcVar5 != (code *)0x0)) {
        uVar2 = (*pcVar5)(*(undefined8 *)(lVar3 + 0xa0),this + 0x180);
        *(undefined8 *)(this + 400) = uVar2;
        lVar3 = *(long *)(this + 8);
      }
    }
    else {
      uVar2 = (*pcVar5)(*(undefined8 *)(lVar3 + 0xa0),this + 0x180,uVar1);
      *(undefined8 *)(this + 400) = uVar2;
      lVar3 = *(long *)(this + 8);
    }
LAB_00111d8a:
    if (*(char *)(lVar3 + 0x29) != '\0') {
      plVar4 = (long *)operator_new(0x18,"");
      *plVar4 = (long)(this + 400);
      plVar4[1] = (long)(this + 0x188);
      plVar4[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar4;
    }
    this[0x188] = (AudioStreamPlayback)0x1;
    MethodInfo::~MethodInfo((MethodInfo *)&local_f8);
  }
  pcVar5 = *(code **)(this + 400);
  if (pcVar5 == (code *)0x0) {
    _err_print_error("start","servers/audio/audio_stream.cpp",0x27,"Method/function failed.",
                     "AudioStreamPlayback::start unimplemented!",0,0);
  }
  else {
    local_58[0] = &local_f8;
    local_f8 = param_1;
    if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
      (*pcVar5)(*(undefined8 *)(this + 0x10),local_58,0);
    }
    else {
      (**(code **)(*(long *)(this + 8) + 0xe0))
                (*(undefined8 *)(this + 0x10),this + 0x180,pcVar5,local_58,0);
    }
  }
LAB_00111ba4:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Type propagation algorithm not settling */
/* AudioStreamRandomizer::instance_playback_sequential() */

long * AudioStreamRandomizer::instance_playback_sequential(void)

{
  long *plVar1;
  code *pcVar2;
  Object *pOVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  Object *pOVar10;
  Object *in_RSI;
  long *in_RDI;
  Object *pOVar11;
  long *plVar12;
  long in_FS_OFFSET;
  Object *local_68;
  Object *local_60;
  AudioStreamPlaybackRandomizer *local_58;
  long *local_50 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = (Object *)0x0;
  Ref<AudioStreamPlaybackRandomizer>::instantiate<>((Ref<AudioStreamPlaybackRandomizer> *)&local_68)
  ;
  pOVar3 = local_68;
  local_60 = local_68;
  HashSet<AudioStreamPlaybackRandomizer*,HashMapHasherDefault,HashMapComparatorDefault<AudioStreamPlaybackRandomizer*>>
  ::insert(&local_58);
  cVar4 = RefCounted::init_ref();
  if (cVar4 == '\0') {
    pOVar11 = *(Object **)(pOVar3 + 0x270);
    if (pOVar11 != (Object *)0x0) {
      *(undefined8 *)(pOVar3 + 0x270) = 0;
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') {
        cVar4 = predelete_handler(pOVar11);
        pOVar10 = (Object *)0x0;
        if (cVar4 != '\0') goto LAB_001125b6;
      }
    }
  }
  else {
    pOVar11 = *(Object **)(pOVar3 + 0x270);
    pOVar10 = pOVar11;
    if (in_RSI != pOVar11) {
      *(Object **)(pOVar3 + 0x270) = in_RSI;
      cVar4 = RefCounted::reference();
      if (cVar4 == '\0') {
        *(undefined8 *)(pOVar3 + 0x270) = 0;
      }
      pOVar10 = in_RSI;
      if (((pOVar11 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) &&
         (cVar4 = predelete_handler(pOVar11), cVar4 != '\0')) {
LAB_001125b6:
        (**(code **)(*(long *)pOVar11 + 0x140))(pOVar11);
        Memory::free_static(pOVar11,false);
        if (pOVar10 == (Object *)0x0) goto LAB_0011201c;
      }
    }
    cVar4 = RefCounted::unreference();
    if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar10), cVar4 != '\0')) {
      (**(code **)(*(long *)pOVar10 + 0x140))(pOVar10);
      Memory::free_static(pOVar10,false);
    }
  }
LAB_0011201c:
  local_50[0] = (long *)0x0;
  CowData<AudioStreamRandomizer::PoolEntry>::_copy_on_write
            ((CowData<AudioStreamRandomizer::PoolEntry> *)(in_RSI + 0x3c0));
  plVar9 = *(long **)(in_RSI + 0x3c0);
  CowData<AudioStreamRandomizer::PoolEntry>::_copy_on_write
            ((CowData<AudioStreamRandomizer::PoolEntry> *)(in_RSI + 0x3c0));
  plVar12 = *(long **)(in_RSI + 0x3c0);
  if (plVar12 != (long *)0x0) {
    plVar12 = plVar12 + plVar12[-1] * 2;
  }
  plVar8 = (long *)0x0;
  if (plVar9 != plVar12) {
    do {
      pOVar11 = (Object *)*plVar9;
      if (pOVar11 != (Object *)0x0) {
        if (plVar8 == (long *)0x0) {
          cVar4 = RefCounted::reference();
          lVar7 = 1;
          if (cVar4 == '\0') {
            pOVar11 = (Object *)0x0;
          }
        }
        else {
          lVar7 = plVar8[-1];
          if (lVar7 == 0) {
            cVar4 = RefCounted::reference();
            if (cVar4 == '\0') {
              pOVar11 = (Object *)0x0;
            }
          }
          else {
            if (0 < lVar7) {
              lVar6 = 0;
              do {
                if (pOVar11 == (Object *)plVar8[lVar6]) {
                  _err_print_error("instance_playback_sequential","servers/audio/audio_stream.cpp",
                                   0x2af,"Duplicate stream in sequential playback pool",0,1);
                  goto LAB_001120f3;
                }
                lVar6 = lVar6 + 1;
              } while (lVar7 != lVar6);
            }
            cVar4 = RefCounted::reference();
            if (cVar4 == '\0') {
              pOVar11 = (Object *)0x0;
            }
          }
          lVar7 = plVar8[-1] + 1;
        }
        iVar5 = CowData<Ref<AudioStream>>::resize<false>
                          ((CowData<Ref<AudioStream>> *)local_50,lVar7);
        if (iVar5 == 0) {
          if (local_50[0] == (long *)0x0) {
            lVar6 = -1;
            lVar7 = 0;
LAB_0011255c:
            _err_print_index_error
                      ("set","./core/templates/cowdata.h",0xcf,lVar6,lVar7,"p_index","size()","",
                       false,false);
            plVar8 = local_50[0];
            goto joined_r0x001122d5;
          }
          lVar7 = local_50[0][-1];
          lVar6 = lVar7 + -1;
          if (lVar6 < 0) goto LAB_0011255c;
          CowData<Ref<AudioStream>>::_copy_on_write((CowData<Ref<AudioStream>> *)local_50);
          plVar8 = local_50[0];
          plVar1 = local_50[0] + lVar6;
          pOVar10 = (Object *)*plVar1;
          if (pOVar11 == pOVar10) goto joined_r0x001122d5;
          *plVar1 = (long)pOVar11;
          if (pOVar11 == (Object *)0x0) {
            if (((pOVar10 == (Object *)0x0) || (cVar4 = RefCounted::unreference(), cVar4 == '\0'))
               || (cVar4 = predelete_handler(pOVar10), cVar4 == '\0')) goto LAB_001120f3;
LAB_00112341:
            (**(code **)(*(long *)pOVar10 + 0x140))(pOVar10);
            Memory::free_static(pOVar10,false);
            plVar8 = local_50[0];
            goto joined_r0x001122d5;
          }
          cVar4 = RefCounted::reference();
          if (cVar4 == '\0') {
            *plVar1 = 0;
            if (pOVar10 != (Object *)0x0) {
              cVar4 = RefCounted::unreference();
              goto joined_r0x0011238a;
            }
          }
          else if (pOVar10 != (Object *)0x0) {
            cVar4 = RefCounted::unreference();
joined_r0x0011238a:
            if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar10), cVar4 != '\0'))
            goto LAB_00112341;
          }
          cVar4 = RefCounted::unreference();
          plVar8 = local_50[0];
        }
        else {
          _err_print_error("push_back","./core/templates/vector.h",0x142,
                           "Condition \"err\" is true. Returning: true",0,0);
          plVar8 = local_50[0];
joined_r0x001122d5:
          local_50[0] = plVar8;
          if (pOVar11 == (Object *)0x0) goto LAB_001120f3;
          cVar4 = RefCounted::unreference();
          plVar8 = local_50[0];
        }
        local_50[0] = plVar8;
        if ((cVar4 != '\0') &&
           (cVar4 = predelete_handler(pOVar11), plVar8 = local_50[0], cVar4 != '\0')) {
          (**(code **)(*(long *)pOVar11 + 0x140))(pOVar11);
          Memory::free_static(pOVar11,false);
        }
      }
LAB_001120f3:
      plVar9 = plVar9 + 2;
    } while (plVar12 != plVar9);
    if (plVar8 != (long *)0x0) {
      CowData<Ref<AudioStream>>::_copy_on_write((CowData<Ref<AudioStream>> *)local_50);
      plVar9 = local_50[0];
      CowData<Ref<AudioStream>>::_copy_on_write((CowData<Ref<AudioStream>> *)local_50);
      plVar12 = local_50[0];
      if (local_50[0] == (long *)0x0) {
        plVar8 = (long *)0x0;
        if (plVar9 != (long *)0x0) goto LAB_0011214b;
        if (*(long *)(pOVar3 + 0x278) != 0) goto LAB_0011217c;
LAB_00112633:
        lVar7 = 0;
        goto LAB_00112636;
      }
      lVar7 = local_50[0][-1];
      plVar8 = local_50[0] + lVar7;
      if (plVar9 == plVar8) {
        if (*(long *)(pOVar3 + 0x278) != 0) goto LAB_0011217c;
      }
      else {
LAB_0011214b:
        do {
          lVar7 = *plVar9;
          plVar9 = plVar9 + 1;
          if (plVar9 == plVar8) {
            lVar7 = *(long *)(pOVar3 + 0x278);
            goto joined_r0x00112176;
          }
        } while (lVar7 != *(long *)(in_RSI + 0x3d0));
        Ref<AudioStream>::operator=((Ref<AudioStream> *)(in_RSI + 0x3d0),(Ref *)*plVar9);
        (**(code **)(*(long *)*plVar9 + 0x1c8))((Ref<AudioStreamPlayback> *)&local_60);
        pOVar11 = *(Object **)(pOVar3 + 0x278);
        if (local_60 != pOVar11) {
          *(Object **)(pOVar3 + 0x278) = local_60;
          if ((local_60 != (Object *)0x0) && (cVar4 = RefCounted::reference(), cVar4 == '\0')) {
            *(undefined8 *)(pOVar3 + 0x278) = 0;
          }
          if (((pOVar11 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) &&
             (cVar4 = predelete_handler(pOVar11), cVar4 != '\0')) {
            (**(code **)(*(long *)pOVar11 + 0x140))(pOVar11);
            Memory::free_static(pOVar11,false);
          }
        }
        Ref<AudioStreamPlayback>::unref((Ref<AudioStreamPlayback> *)&local_60);
        lVar7 = *(long *)(pOVar3 + 0x278);
joined_r0x00112176:
        if (lVar7 != 0) goto LAB_0011217c;
        if (plVar12 == (long *)0x0) goto LAB_00112633;
        lVar7 = plVar12[-1];
      }
      if (lVar7 < 1) {
LAB_00112636:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,0,lVar7,"p_index","size()","",false,true)
        ;
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      Ref<AudioStream>::operator=((Ref<AudioStream> *)(in_RSI + 0x3d0),(Ref *)*plVar12);
      if (plVar12[-1] < 1) {
        _err_print_index_error
                  ("operator[]","./core/templates/vector.h",0x38,0,plVar12[-1],"p_index",
                   "((Vector<T> *)(this))->_cowdata.size()","",false,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      CowData<Ref<AudioStream>>::_copy_on_write((CowData<Ref<AudioStream>> *)local_50);
      (**(code **)(*(long *)*local_50[0] + 0x1c8))((Ref<AudioStreamPlayback> *)&local_60);
      Ref<AudioStreamPlayback>::operator=
                ((Ref<AudioStreamPlayback> *)(pOVar3 + 0x278),(Ref *)local_60);
      Ref<AudioStreamPlayback>::unref((Ref<AudioStreamPlayback> *)&local_60);
      *in_RDI = 0;
      goto LAB_00112184;
    }
  }
LAB_0011217c:
  *in_RDI = 0;
LAB_00112184:
  lVar7 = __dynamic_cast(pOVar3,&Object::typeinfo,&AudioStreamPlayback::typeinfo,0);
  if (lVar7 != 0) {
    *in_RDI = lVar7;
    cVar4 = RefCounted::reference();
    if (cVar4 == '\0') {
      *in_RDI = 0;
    }
  }
  CowData<Ref<AudioStream>>::_unref((CowData<Ref<AudioStream>> *)local_50);
  cVar4 = RefCounted::unreference();
  if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar3), cVar4 != '\0')) {
    (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
    Memory::free_static(pOVar3,false);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return in_RDI;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AudioStreamRandomizer::instantiate_playback() */

void AudioStreamRandomizer::instantiate_playback(void)

{
  int iVar1;
  long lVar2;
  long in_RSI;
  undefined8 *in_RDI;
  long in_FS_OFFSET;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = *(int *)(in_RSI + 0x3d8);
  if (iVar1 == 1) {
    instance_playback_random();
  }
  else if (iVar1 == 2) {
    instance_playback_sequential();
  }
  else if (iVar1 == 0) {
    instance_playback_no_repeats();
  }
  else {
    _err_print_error("instantiate_playback","servers/audio/audio_stream.cpp",0x2d3,
                     "Method/function failed. Returning: nullptr","Unhandled playback mode.",0,0);
    *in_RDI = 0;
  }
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
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



/* RefCounted::is_class_ptr(void*) const */

uint __thiscall RefCounted::is_class_ptr(RefCounted *this,void *param_1)

{
  return (uint)CONCAT71(0x12f5,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12f5,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
}



/* RefCounted::_getv(StringName const&, Variant&) const */

undefined8 RefCounted::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* RefCounted::_setv(StringName const&, Variant const&) */

undefined8 RefCounted::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* RefCounted::_validate_propertyv(PropertyInfo&) const */

void RefCounted::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* RefCounted::_property_can_revertv(StringName const&) const */

undefined8 RefCounted::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* RefCounted::_property_get_revertv(StringName const&, Variant&) const */

undefined8 RefCounted::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* RefCounted::_notificationv(int, bool) */

void RefCounted::_notificationv(int param_1,bool param_2)

{
  return;
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



/* AudioDriver::get_input_mix_rate() const */

void __thiscall AudioDriver::get_input_mix_rate(AudioDriver *this)

{
                    /* WARNING: Could not recover jumptable at 0x00112927. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x18))();
  return;
}



/* AudioDriver::input_start() */

undefined8 AudioDriver::input_start(void)

{
  return 1;
}



/* AudioDriver::input_stop() */

undefined8 AudioDriver::input_stop(void)

{
  return 1;
}



/* AudioSample::is_class_ptr(void*) const */

uint __thiscall AudioSample::is_class_ptr(AudioSample *this,void *param_1)

{
  return (uint)CONCAT71(0x12f5,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12f5,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12f5,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* AudioSample::_getv(StringName const&, Variant&) const */

undefined8 AudioSample::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* AudioSample::_setv(StringName const&, Variant const&) */

undefined8 AudioSample::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* AudioSample::_validate_propertyv(PropertyInfo&) const */

void AudioSample::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* AudioSample::_property_can_revertv(StringName const&) const */

undefined8 AudioSample::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* AudioSample::_property_get_revertv(StringName const&, Variant&) const */

undefined8 AudioSample::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* AudioSample::_notificationv(int, bool) */

void AudioSample::_notificationv(int param_1,bool param_2)

{
  return;
}



/* AudioStreamPlayback::is_class_ptr(void*) const */

uint __thiscall AudioStreamPlayback::is_class_ptr(AudioStreamPlayback *this,void *param_1)

{
  return (uint)CONCAT71(0x12f5,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12f5,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12f5,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* AudioStreamPlayback::_getv(StringName const&, Variant&) const */

undefined8 AudioStreamPlayback::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* AudioStreamPlayback::_setv(StringName const&, Variant const&) */

undefined8 AudioStreamPlayback::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* AudioStreamPlayback::_validate_propertyv(PropertyInfo&) const */

void AudioStreamPlayback::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* AudioStreamPlayback::_property_can_revertv(StringName const&) const */

undefined8 AudioStreamPlayback::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* AudioStreamPlayback::_property_get_revertv(StringName const&, Variant&) const */

undefined8 AudioStreamPlayback::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* AudioStreamPlayback::_notificationv(int, bool) */

void AudioStreamPlayback::_notificationv(int param_1,bool param_2)

{
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



/* AudioStreamPlaybackResampled::is_class_ptr(void*) const */

uint __thiscall
AudioStreamPlaybackResampled::is_class_ptr(AudioStreamPlaybackResampled *this,void *param_1)

{
  return (uint)CONCAT71(0x12f5,(undefined4 *)param_1 ==
                               &AudioStreamPlayback::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12f5,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12f5,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12f5,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* AudioStreamPlaybackResampled::_getv(StringName const&, Variant&) const */

undefined8 AudioStreamPlaybackResampled::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* AudioStreamPlaybackResampled::_setv(StringName const&, Variant const&) */

undefined8 AudioStreamPlaybackResampled::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* AudioStreamPlaybackResampled::_validate_propertyv(PropertyInfo&) const */

void AudioStreamPlaybackResampled::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* AudioStreamPlaybackResampled::_property_can_revertv(StringName const&) const */

undefined8 AudioStreamPlaybackResampled::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* AudioStreamPlaybackResampled::_property_get_revertv(StringName const&, Variant&) const */

undefined8 AudioStreamPlaybackResampled::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* AudioStreamPlaybackResampled::_notificationv(int, bool) */

void AudioStreamPlaybackResampled::_notificationv(int param_1,bool param_2)

{
  return;
}



/* AudioStream::is_class_ptr(void*) const */

uint __thiscall AudioStream::is_class_ptr(AudioStream *this,void *param_1)

{
  return (uint)CONCAT71(0x12f5,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12f5,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12f5,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12f5,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* AudioStream::_getv(StringName const&, Variant&) const */

undefined8 AudioStream::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* AudioStream::_setv(StringName const&, Variant const&) */

undefined8 AudioStream::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* AudioStream::_validate_propertyv(PropertyInfo&) const */

void AudioStream::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* AudioStream::_property_can_revertv(StringName const&) const */

undefined8 AudioStream::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* AudioStream::_property_get_revertv(StringName const&, Variant&) const */

undefined8 AudioStream::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* AudioStream::_notificationv(int, bool) */

void AudioStream::_notificationv(int param_1,bool param_2)

{
  return;
}



/* AudioStream::can_be_sampled() const */

undefined8 AudioStream::can_be_sampled(void)

{
  return 0;
}



/* AudioStream::is_meta_stream() const */

undefined8 AudioStream::is_meta_stream(void)

{
  return 0;
}



/* AudioStreamMicrophone::is_class_ptr(void*) const */

uint __thiscall AudioStreamMicrophone::is_class_ptr(AudioStreamMicrophone *this,void *param_1)

{
  return (uint)CONCAT71(0x12f5,(undefined4 *)param_1 == &AudioStream::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12f5,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12f5,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12f5,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12f5,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* AudioStreamMicrophone::_getv(StringName const&, Variant&) const */

undefined8 AudioStreamMicrophone::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* AudioStreamMicrophone::_setv(StringName const&, Variant const&) */

undefined8 AudioStreamMicrophone::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* AudioStreamMicrophone::_validate_propertyv(PropertyInfo&) const */

void AudioStreamMicrophone::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* AudioStreamMicrophone::_property_can_revertv(StringName const&) const */

undefined8 AudioStreamMicrophone::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* AudioStreamMicrophone::_property_get_revertv(StringName const&, Variant&) const */

undefined8 AudioStreamMicrophone::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* AudioStreamMicrophone::_notificationv(int, bool) */

void AudioStreamMicrophone::_notificationv(int param_1,bool param_2)

{
  return;
}



/* AudioStreamPlaybackMicrophone::is_class_ptr(void*) const */

uint __thiscall
AudioStreamPlaybackMicrophone::is_class_ptr(AudioStreamPlaybackMicrophone *this,void *param_1)

{
  return (uint)CONCAT71(0x12f5,(undefined4 *)param_1 ==
                               &AudioStreamPlaybackResampled::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12f5,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12f5,(undefined4 *)param_1 ==
                               &AudioStreamPlayback::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12f5,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12f5,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* AudioStreamPlaybackMicrophone::_getv(StringName const&, Variant&) const */

undefined8 AudioStreamPlaybackMicrophone::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* AudioStreamPlaybackMicrophone::_setv(StringName const&, Variant const&) */

undefined8 AudioStreamPlaybackMicrophone::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* AudioStreamPlaybackMicrophone::_validate_propertyv(PropertyInfo&) const */

void AudioStreamPlaybackMicrophone::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* AudioStreamPlaybackMicrophone::_property_can_revertv(StringName const&) const */

undefined8 AudioStreamPlaybackMicrophone::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* AudioStreamPlaybackMicrophone::_property_get_revertv(StringName const&, Variant&) const */

undefined8
AudioStreamPlaybackMicrophone::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* AudioStreamPlaybackMicrophone::_notificationv(int, bool) */

void AudioStreamPlaybackMicrophone::_notificationv(int param_1,bool param_2)

{
  return;
}



/* AudioStreamRandomizer::is_class_ptr(void*) const */

uint __thiscall AudioStreamRandomizer::is_class_ptr(AudioStreamRandomizer *this,void *param_1)

{
  return (uint)CONCAT71(0x12f5,(undefined4 *)param_1 == &AudioStream::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12f4,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12f5,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12f5,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12f5,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* AudioStreamRandomizer::_validate_propertyv(PropertyInfo&) const */

void AudioStreamRandomizer::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* AudioStreamRandomizer::_notificationv(int, bool) */

void AudioStreamRandomizer::_notificationv(int param_1,bool param_2)

{
  return;
}



/* AudioStreamRandomizer::is_meta_stream() const */

undefined8 AudioStreamRandomizer::is_meta_stream(void)

{
  return 1;
}



/* AudioStreamPlaybackRandomizer::is_class_ptr(void*) const */

uint __thiscall
AudioStreamPlaybackRandomizer::is_class_ptr(AudioStreamPlaybackRandomizer *this,void *param_1)

{
  return (uint)CONCAT71(0x12f5,(undefined4 *)param_1 ==
                               &AudioStreamPlayback::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12f4,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12f5,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12f5,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* AudioStreamPlaybackRandomizer::_getv(StringName const&, Variant&) const */

undefined8 AudioStreamPlaybackRandomizer::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* AudioStreamPlaybackRandomizer::_setv(StringName const&, Variant const&) */

undefined8 AudioStreamPlaybackRandomizer::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* AudioStreamPlaybackRandomizer::_validate_propertyv(PropertyInfo&) const */

void AudioStreamPlaybackRandomizer::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* AudioStreamPlaybackRandomizer::_property_can_revertv(StringName const&) const */

undefined8 AudioStreamPlaybackRandomizer::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* AudioStreamPlaybackRandomizer::_property_get_revertv(StringName const&, Variant&) const */

undefined8
AudioStreamPlaybackRandomizer::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* AudioStreamPlaybackRandomizer::_notificationv(int, bool) */

void AudioStreamPlaybackRandomizer::_notificationv(int param_1,bool param_2)

{
  return;
}



/* MethodBindTRC<AudioStreamRandomizer::PlaybackMode>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<AudioStreamRandomizer::PlaybackMode>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<AudioStreamRandomizer::PlaybackMode>::get_argument_meta(int) const */

undefined8 MethodBindTRC<AudioStreamRandomizer::PlaybackMode>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<AudioStreamRandomizer::PlaybackMode>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<AudioStreamRandomizer::PlaybackMode>::_gen_argument_type
          (MethodBindT<AudioStreamRandomizer::PlaybackMode> *this,int param_1)

{
  return (param_1 == 0) * '\x02';
}



/* MethodBindT<AudioStreamRandomizer::PlaybackMode>::get_argument_meta(int) const */

undefined8 MethodBindT<AudioStreamRandomizer::PlaybackMode>::get_argument_meta(int param_1)

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



/* MethodBindT<int, int>::_gen_argument_type(int) const */

char __thiscall MethodBindT<int,int>::_gen_argument_type(MethodBindT<int,int> *this,int param_1)

{
  return ((uint)param_1 < 2) * '\x02';
}



/* MethodBindT<int, int>::get_argument_meta(int) const */

byte __thiscall MethodBindT<int,int>::get_argument_meta(MethodBindT<int,int> *this,int param_1)

{
  return -((uint)param_1 < 2) & 3;
}



/* MethodBindT<int, Ref<AudioStream>, float>::get_argument_meta(int) const */

char __thiscall
MethodBindT<int,Ref<AudioStream>,float>::get_argument_meta
          (MethodBindT<int,Ref<AudioStream>,float> *this,int param_1)

{
  char cVar1;
  
  cVar1 = '\x03';
  if (param_1 != 0) {
    cVar1 = (param_1 == 2) * '\t';
  }
  return cVar1;
}



/* MethodBindTRC<Ref<AudioSample>>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<Ref<AudioSample>>::_gen_argument_type(int param_1)

{
  return 0x18;
}



/* MethodBindTRC<Ref<AudioSample>>::get_argument_meta(int) const */

undefined8 MethodBindTRC<Ref<AudioSample>>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTR<Ref<AudioStreamPlayback>>::_gen_argument_type(int) const */

undefined8 MethodBindTR<Ref<AudioStreamPlayback>>::_gen_argument_type(int param_1)

{
  return 0x18;
}



/* MethodBindTR<Ref<AudioStreamPlayback>>::get_argument_meta(int) const */

undefined8 MethodBindTR<Ref<AudioStreamPlayback>>::get_argument_meta(int param_1)

{
  return 0;
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



/* MethodBindTR<Vector<Vector2>, float, int>::_gen_argument_type(int) const */

char __thiscall
MethodBindTR<Vector<Vector2>,float,int>::_gen_argument_type
          (MethodBindTR<Vector<Vector2>,float,int> *this,int param_1)

{
  char cVar1;
  
  cVar1 = (param_1 == 0) + '\x02';
  if (1 < (uint)param_1) {
    cVar1 = '#';
  }
  return cVar1;
}



/* MethodBindTR<Vector<Vector2>, float, int>::get_argument_meta(int) const */

char __thiscall
MethodBindTR<Vector<Vector2>,float,int>::get_argument_meta
          (MethodBindTR<Vector<Vector2>,float,int> *this,int param_1)

{
  char cVar1;
  
  cVar1 = '\0';
  if ((-1 < param_1) && (cVar1 = '\t', param_1 != 0)) {
    cVar1 = (param_1 == 1) * '\x03';
  }
  return cVar1;
}



/* MethodBindTRC<Ref<AudioSamplePlayback>>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<Ref<AudioSamplePlayback>>::_gen_argument_type(int param_1)

{
  return 0x18;
}



/* MethodBindTRC<Ref<AudioSamplePlayback>>::get_argument_meta(int) const */

undefined8 MethodBindTRC<Ref<AudioSamplePlayback>>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Ref<AudioSamplePlayback> const&>::_gen_argument_type(int) const */

byte __thiscall
MethodBindT<Ref<AudioSamplePlayback>const&>::_gen_argument_type
          (MethodBindT<Ref<AudioSamplePlayback>const&> *this,int param_1)

{
  return -(param_1 == 0) & 0x18;
}



/* MethodBindT<Ref<AudioSamplePlayback> const&>::get_argument_meta(int) const */

undefined8 MethodBindT<Ref<AudioSamplePlayback>const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* AudioStream::~AudioStream() */

void __thiscall AudioStream::~AudioStream(AudioStream *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(undefined ***)this = &PTR__initialize_classv_0012e278;
  if (bVar1) {
    if (*(long *)(this + 0x330) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001132ed;
    }
    if (*(long *)(this + 0x318) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001132ed;
    }
    if (*(long *)(this + 0x300) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001132ed;
    }
    if (*(long *)(this + 0x2e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001132ed;
    }
    if (*(long *)(this + 0x2d0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001132ed;
    }
    if (*(long *)(this + 0x2b8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001132ed;
    }
    if (*(long *)(this + 0x2a0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001132ed;
    }
    if (*(long *)(this + 0x288) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001132ed;
    }
    if (*(long *)(this + 0x270) != 0) {
      StringName::unref();
    }
  }
LAB_001132ed:
  Resource::~Resource((Resource *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0012dc08;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0012dc08;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
}



/* MethodBindT<Ref<AudioSamplePlayback> const&>::~MethodBindT() */

void __thiscall
MethodBindT<Ref<AudioSamplePlayback>const&>::~MethodBindT
          (MethodBindT<Ref<AudioSamplePlayback>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012ecd0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Ref<AudioSamplePlayback> const&>::~MethodBindT() */

void __thiscall
MethodBindT<Ref<AudioSamplePlayback>const&>::~MethodBindT
          (MethodBindT<Ref<AudioSamplePlayback>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012ecd0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Ref<AudioSamplePlayback>>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Ref<AudioSamplePlayback>>::~MethodBindTRC
          (MethodBindTRC<Ref<AudioSamplePlayback>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012ed30;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Ref<AudioSamplePlayback>>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Ref<AudioSamplePlayback>>::~MethodBindTRC
          (MethodBindTRC<Ref<AudioSamplePlayback>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012ed30;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<Vector<Vector2>, float, int>::~MethodBindTR() */

void __thiscall
MethodBindTR<Vector<Vector2>,float,int>::~MethodBindTR
          (MethodBindTR<Vector<Vector2>,float,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012ed90;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Vector<Vector2>, float, int>::~MethodBindTR() */

void __thiscall
MethodBindTR<Vector<Vector2>,float,int>::~MethodBindTR
          (MethodBindTR<Vector<Vector2>,float,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012ed90;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<double>::~MethodBindT() */

void __thiscall MethodBindT<double>::~MethodBindT(MethodBindT<double> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012edf0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<double>::~MethodBindT() */

void __thiscall MethodBindT<double>::~MethodBindT(MethodBindT<double> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012edf0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012ee50;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012ee50;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012eeb0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012eeb0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<double>::~MethodBindTRC() */

void __thiscall MethodBindTRC<double>::~MethodBindTRC(MethodBindTRC<double> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012ef10;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<double>::~MethodBindTRC() */

void __thiscall MethodBindTRC<double>::~MethodBindTRC(MethodBindTRC<double> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012ef10;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012ef70;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012ef70;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<Ref<AudioStreamPlayback>>::~MethodBindTR() */

void __thiscall
MethodBindTR<Ref<AudioStreamPlayback>>::~MethodBindTR(MethodBindTR<Ref<AudioStreamPlayback>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012efd0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Ref<AudioStreamPlayback>>::~MethodBindTR() */

void __thiscall
MethodBindTR<Ref<AudioStreamPlayback>>::~MethodBindTR(MethodBindTR<Ref<AudioStreamPlayback>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012efd0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Ref<AudioSample>>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Ref<AudioSample>>::~MethodBindTRC(MethodBindTRC<Ref<AudioSample>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012f030;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Ref<AudioSample>>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Ref<AudioSample>>::~MethodBindTRC(MethodBindTRC<Ref<AudioSample>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012f030;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<int, Ref<AudioStream>, float>::~MethodBindT() */

void __thiscall
MethodBindT<int,Ref<AudioStream>,float>::~MethodBindT(MethodBindT<int,Ref<AudioStream>,float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012f090;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<int, Ref<AudioStream>, float>::~MethodBindT() */

void __thiscall
MethodBindT<int,Ref<AudioStream>,float>::~MethodBindT(MethodBindT<int,Ref<AudioStream>,float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012f090;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<int, int>::~MethodBindT() */

void __thiscall MethodBindT<int,int>::~MethodBindT(MethodBindT<int,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012f0f0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<int, int>::~MethodBindT() */

void __thiscall MethodBindT<int,int>::~MethodBindT(MethodBindT<int,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012f0f0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<int, Ref<AudioStream> >::~MethodBindT() */

void __thiscall
MethodBindT<int,Ref<AudioStream>>::~MethodBindT(MethodBindT<int,Ref<AudioStream>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012f1b0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<int, Ref<AudioStream> >::~MethodBindT() */

void __thiscall
MethodBindT<int,Ref<AudioStream>>::~MethodBindT(MethodBindT<int,Ref<AudioStream>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012f1b0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Ref<AudioStream>, int>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Ref<AudioStream>,int>::~MethodBindTRC(MethodBindTRC<Ref<AudioStream>,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012f210;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Ref<AudioStream>, int>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Ref<AudioStream>,int>::~MethodBindTRC(MethodBindTRC<Ref<AudioStream>,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012f210;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<int, float>::~MethodBindT() */

void __thiscall MethodBindT<int,float>::~MethodBindT(MethodBindT<int,float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012f270;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<int, float>::~MethodBindT() */

void __thiscall MethodBindT<int,float>::~MethodBindT(MethodBindT<int,float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012f270;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<float, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<float,int>::~MethodBindTRC(MethodBindTRC<float,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012f2d0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<float, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<float,int>::~MethodBindTRC(MethodBindTRC<float,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012f2d0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<int>::~MethodBindT() */

void __thiscall MethodBindT<int>::~MethodBindT(MethodBindT<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012f150;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<int>::~MethodBindT() */

void __thiscall MethodBindT<int>::~MethodBindT(MethodBindT<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012f150;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<float>::~MethodBindT() */

void __thiscall MethodBindT<float>::~MethodBindT(MethodBindT<float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012f330;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<float>::~MethodBindT() */

void __thiscall MethodBindT<float>::~MethodBindT(MethodBindT<float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012f330;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<float>::~MethodBindTRC() */

void __thiscall MethodBindTRC<float>::~MethodBindTRC(MethodBindTRC<float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012f390;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<float>::~MethodBindTRC() */

void __thiscall MethodBindTRC<float>::~MethodBindTRC(MethodBindTRC<float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012f390;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<AudioStreamRandomizer::PlaybackMode>::~MethodBindT() */

void __thiscall
MethodBindT<AudioStreamRandomizer::PlaybackMode>::~MethodBindT
          (MethodBindT<AudioStreamRandomizer::PlaybackMode> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012f3f0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<AudioStreamRandomizer::PlaybackMode>::~MethodBindT() */

void __thiscall
MethodBindT<AudioStreamRandomizer::PlaybackMode>::~MethodBindT
          (MethodBindT<AudioStreamRandomizer::PlaybackMode> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012f3f0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<AudioStreamRandomizer::PlaybackMode>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<AudioStreamRandomizer::PlaybackMode>::~MethodBindTRC
          (MethodBindTRC<AudioStreamRandomizer::PlaybackMode> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012f450;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<AudioStreamRandomizer::PlaybackMode>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<AudioStreamRandomizer::PlaybackMode>::~MethodBindTRC
          (MethodBindTRC<AudioStreamRandomizer::PlaybackMode> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012f450;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<int, Ref<AudioStream>, float>::_gen_argument_type(int) const */

undefined8 __thiscall
MethodBindT<int,Ref<AudioStream>,float>::_gen_argument_type
          (MethodBindT<int,Ref<AudioStream>,float> *this,int param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((((uint)param_1 < 3) && (uVar1 = 2, param_1 != 0)) && (uVar1 = 3, param_1 == 1)) {
    uVar1 = 0x18;
  }
  return uVar1;
}



/* CowData<int>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<int>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<AudioFrame>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<AudioFrame>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Vector2>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Vector2>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* AudioStream::generate_sample() const [clone .cold] */

void AudioStream::generate_sample(void)

{
  code *pcVar1;
  Object *unaff_R13;
  
  Variant::Variant((Variant *)&stack0x00000000,unaff_R13);
  Variant::get_validated_object();
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



/* Error CowData<AudioFrame>::resize<false>(long) [clone .isra.0] [clone .cold] */

void CowData<AudioFrame>::resize<false>(long param_1)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001145f8(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<AudioStreamRandomizer::PoolEntry>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<AudioStreamRandomizer::PoolEntry>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Ref<AudioStream> >::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Ref<AudioStream>>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
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



/* AudioStream::get_save_class() const */

AudioStream * __thiscall AudioStream::get_save_class(AudioStream *this)

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



/* AudioSample::~AudioSample() */

void __thiscall AudioSample::~AudioSample(AudioSample *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  
  *(undefined ***)this = &PTR__initialize_classv_0012dd68;
  if (*(long *)(this + 400) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 400) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 400);
      *(undefined8 *)(this + 400) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x180) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0x180);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  *(undefined ***)this = &PTR__initialize_classv_0012dc08;
  Object::~Object((Object *)this);
  return;
}



/* AudioSample::~AudioSample() */

void __thiscall AudioSample::~AudioSample(AudioSample *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  
  *(undefined ***)this = &PTR__initialize_classv_0012dd68;
  if (*(long *)(this + 400) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 400) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 400);
      *(undefined8 *)(this + 400) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x180) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0x180);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  *(undefined ***)this = &PTR__initialize_classv_0012dc08;
  Object::~Object((Object *)this);
  operator_delete(this,0x1b0);
  return;
}



/* AudioStreamPlaybackRandomizer::_get_class_namev() const */

undefined8 * AudioStreamPlaybackRandomizer::_get_class_namev(void)

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
LAB_001148b3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001148b3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "AudioStreamPlaybackRandomizer");
      goto LAB_0011491e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"AudioStreamPlaybackRandomizer");
LAB_0011491e:
  return &_get_class_namev()::_class_name_static;
}



/* RefCounted::_get_class_namev() const */

undefined8 * RefCounted::_get_class_namev(void)

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
LAB_00114993:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00114993;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_001149fe;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_001149fe:
  return &_get_class_namev()::_class_name_static;
}



/* AudioStreamPlaybackResampled::_get_class_namev() const */

undefined8 * AudioStreamPlaybackResampled::_get_class_namev(void)

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
LAB_00114a93:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00114a93;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "AudioStreamPlaybackResampled");
      goto LAB_00114afe;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"AudioStreamPlaybackResampled");
LAB_00114afe:
  return &_get_class_namev()::_class_name_static;
}



/* AudioStreamPlayback::_get_class_namev() const */

undefined8 * AudioStreamPlayback::_get_class_namev(void)

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
LAB_00114b83:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00114b83;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"AudioStreamPlayback");
      goto LAB_00114bee;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"AudioStreamPlayback");
LAB_00114bee:
  return &_get_class_namev()::_class_name_static;
}



/* AudioSample::_get_class_namev() const */

undefined8 * AudioSample::_get_class_namev(void)

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
LAB_00114c63:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00114c63;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"AudioSample");
      goto LAB_00114cce;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"AudioSample");
LAB_00114cce:
  return &_get_class_namev()::_class_name_static;
}



/* AudioStreamRandomizer::_get_class_namev() const */

undefined8 * AudioStreamRandomizer::_get_class_namev(void)

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
LAB_00114d53:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00114d53;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"AudioStreamRandomizer");
      goto LAB_00114dbe;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"AudioStreamRandomizer");
LAB_00114dbe:
  return &_get_class_namev()::_class_name_static;
}



/* AudioStreamMicrophone::_get_class_namev() const */

undefined8 * AudioStreamMicrophone::_get_class_namev(void)

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
LAB_00114e43:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00114e43;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"AudioStreamMicrophone");
      goto LAB_00114eae;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"AudioStreamMicrophone");
LAB_00114eae:
  return &_get_class_namev()::_class_name_static;
}



/* AudioStream::_get_class_namev() const */

undefined8 * AudioStream::_get_class_namev(void)

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
LAB_00114f23:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00114f23;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"AudioStream");
      goto LAB_00114f8e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"AudioStream");
LAB_00114f8e:
  return &_get_class_namev()::_class_name_static;
}



/* AudioStreamPlaybackMicrophone::_get_class_namev() const */

undefined8 * AudioStreamPlaybackMicrophone::_get_class_namev(void)

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
LAB_00115023:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00115023;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "AudioStreamPlaybackMicrophone");
      goto LAB_0011508e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"AudioStreamPlaybackMicrophone");
LAB_0011508e:
  return &_get_class_namev()::_class_name_static;
}



/* AudioStreamPlaybackResampled::~AudioStreamPlaybackResampled() */

void __thiscall
AudioStreamPlaybackResampled::~AudioStreamPlaybackResampled(AudioStreamPlaybackResampled *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(undefined ***)this = &PTR__initialize_classv_0012e098;
  if (bVar1) {
    if (*(long *)(this + 0x6b8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00115120;
    }
    if (*(long *)(this + 0x6a0) != 0) {
      StringName::unref();
    }
  }
LAB_00115120:
  AudioStreamPlayback::~AudioStreamPlayback((AudioStreamPlayback *)this);
  return;
}



/* AudioStreamPlaybackResampled::~AudioStreamPlaybackResampled() */

void __thiscall
AudioStreamPlaybackResampled::~AudioStreamPlaybackResampled(AudioStreamPlaybackResampled *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(undefined ***)this = &PTR__initialize_classv_0012e098;
  if (bVar1) {
    if (*(long *)(this + 0x6b8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00115180;
    }
    if (*(long *)(this + 0x6a0) != 0) {
      StringName::unref();
    }
  }
LAB_00115180:
  AudioStreamPlayback::~AudioStreamPlayback((AudioStreamPlayback *)this);
  operator_delete(this,0x6d0);
  return;
}



/* AudioStream::~AudioStream() */

void __thiscall AudioStream::~AudioStream(AudioStream *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(undefined ***)this = &PTR__initialize_classv_0012e278;
  if (bVar1) {
    if (*(long *)(this + 0x330) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001152dd;
    }
    if (*(long *)(this + 0x318) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001152dd;
    }
    if (*(long *)(this + 0x300) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001152dd;
    }
    if (*(long *)(this + 0x2e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001152dd;
    }
    if (*(long *)(this + 0x2d0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001152dd;
    }
    if (*(long *)(this + 0x2b8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001152dd;
    }
    if (*(long *)(this + 0x2a0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001152dd;
    }
    if (*(long *)(this + 0x288) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001152dd;
    }
    if (*(long *)(this + 0x270) != 0) {
      StringName::unref();
    }
  }
LAB_001152dd:
  Resource::~Resource((Resource *)this);
  operator_delete(this,0x348);
  return;
}



/* AudioStreamMicrophone::~AudioStreamMicrophone() */

void __thiscall AudioStreamMicrophone::~AudioStreamMicrophone(AudioStreamMicrophone *this)

{
  void *pvVar1;
  bool bVar2;
  
  pvVar1 = *(void **)(this + 0x348);
  *(undefined ***)this = &PTR__initialize_classv_0012e4b0;
  if (pvVar1 != (void *)0x0) {
    if (*(int *)(this + 0x36c) != 0) {
      if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x368) * 4) != 0) {
        memset(*(void **)(this + 0x360),0,
               (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x368) * 4) << 2);
      }
      *(undefined4 *)(this + 0x36c) = 0;
    }
    Memory::free_static(pvVar1,false);
    Memory::free_static(*(void **)(this + 0x358),false);
    Memory::free_static(*(void **)(this + 0x350),false);
    Memory::free_static(*(void **)(this + 0x360),false);
  }
  bVar2 = StringName::configured != '\0';
  *(undefined ***)this = &PTR__initialize_classv_0012e278;
  if (bVar2) {
    if (*(long *)(this + 0x330) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001154c6;
    }
    if (*(long *)(this + 0x318) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001154c6;
    }
    if (*(long *)(this + 0x300) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001154c6;
    }
    if (*(long *)(this + 0x2e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001154c6;
    }
    if (*(long *)(this + 0x2d0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001154c6;
    }
    if (*(long *)(this + 0x2b8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001154c6;
    }
    if (*(long *)(this + 0x2a0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001154c6;
    }
    if (*(long *)(this + 0x288) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001154c6;
    }
    if (*(long *)(this + 0x270) != 0) {
      StringName::unref();
    }
  }
LAB_001154c6:
  Resource::~Resource((Resource *)this);
  return;
}



/* AudioStreamMicrophone::~AudioStreamMicrophone() */

void __thiscall AudioStreamMicrophone::~AudioStreamMicrophone(AudioStreamMicrophone *this)

{
  void *pvVar1;
  bool bVar2;
  
  pvVar1 = *(void **)(this + 0x348);
  *(undefined ***)this = &PTR__initialize_classv_0012e4b0;
  if (pvVar1 != (void *)0x0) {
    if (*(int *)(this + 0x36c) != 0) {
      if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x368) * 4) != 0) {
        memset(*(void **)(this + 0x360),0,
               (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x368) * 4) << 2);
      }
      *(undefined4 *)(this + 0x36c) = 0;
    }
    Memory::free_static(pvVar1,false);
    Memory::free_static(*(void **)(this + 0x358),false);
    Memory::free_static(*(void **)(this + 0x350),false);
    Memory::free_static(*(void **)(this + 0x360),false);
  }
  bVar2 = StringName::configured != '\0';
  *(undefined ***)this = &PTR__initialize_classv_0012e278;
  if (bVar2) {
    if (*(long *)(this + 0x330) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001156a6;
    }
    if (*(long *)(this + 0x318) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001156a6;
    }
    if (*(long *)(this + 0x300) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001156a6;
    }
    if (*(long *)(this + 0x2e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001156a6;
    }
    if (*(long *)(this + 0x2d0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001156a6;
    }
    if (*(long *)(this + 0x2b8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001156a6;
    }
    if (*(long *)(this + 0x2a0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001156a6;
    }
    if (*(long *)(this + 0x288) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001156a6;
    }
    if (*(long *)(this + 0x270) != 0) {
      StringName::unref();
    }
  }
LAB_001156a6:
  Resource::~Resource((Resource *)this);
  operator_delete(this,0x370);
  return;
}



/* AudioStreamMicrophone::get_class() const */

void AudioStreamMicrophone::get_class(void)

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



/* AudioStreamPlaybackResampled::get_class() const */

void AudioStreamPlaybackResampled::get_class(void)

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



/* AudioStreamPlaybackMicrophone::get_class() const */

void AudioStreamPlaybackMicrophone::get_class(void)

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



/* AudioStream::get_class() const */

void AudioStream::get_class(void)

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



/* AudioStreamPlaybackRandomizer::get_class() const */

void AudioStreamPlaybackRandomizer::get_class(void)

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



/* AudioStreamRandomizer::get_class() const */

void AudioStreamRandomizer::get_class(void)

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



/* AudioStreamPlayback::get_class() const */

void AudioStreamPlayback::get_class(void)

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



/* AudioSample::get_class() const */

void AudioSample::get_class(void)

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



/* RefCounted::get_class() const */

void RefCounted::get_class(void)

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



/* AudioStreamRandomizer::_property_can_revertv(StringName const&) const */

ulong __thiscall
AudioStreamRandomizer::_property_can_revertv(AudioStreamRandomizer *this,StringName *param_1)

{
  long *plVar1;
  long lVar2;
  char *__s;
  ulong uVar3;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  size_t local_30;
  long local_20;
  
  lVar2 = *(long *)param_1;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar2 == 0) {
    local_40 = 0;
  }
  else {
    __s = *(char **)(lVar2 + 8);
    local_40 = 0;
    if (__s == (char *)0x0) {
      if (*(long *)(lVar2 + 0x10) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_40,(CowData *)(lVar2 + 0x10));
      }
    }
    else {
      local_30 = strlen(__s);
      local_38 = __s;
      String::parse_latin1((StrRange *)&local_40);
    }
  }
  uVar3 = PropertyListHelper::property_can_revert(this + 0x348);
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      uVar3 = uVar3 & 0xff;
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AudioStreamRandomizer::_property_get_revertv(StringName const&, Variant&) const */

ulong AudioStreamRandomizer::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  long *plVar1;
  long lVar2;
  char *__s;
  ulong uVar3;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  size_t local_30;
  long local_20;
  
  lVar2 = *(long *)param_2;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar2 == 0) {
    local_40 = 0;
  }
  else {
    __s = *(char **)(lVar2 + 8);
    local_40 = 0;
    if (__s == (char *)0x0) {
      if (*(long *)(lVar2 + 0x10) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_40,(CowData *)(lVar2 + 0x10));
      }
    }
    else {
      local_30 = strlen(__s);
      local_38 = __s;
      String::parse_latin1((StrRange *)&local_40);
    }
  }
  uVar3 = PropertyListHelper::property_get_revert(param_1 + 0x348,(Variant *)&local_40);
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      uVar3 = uVar3 & 0xff;
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AudioStreamRandomizer::_getv(StringName const&, Variant&) const */

ulong AudioStreamRandomizer::_getv(StringName *param_1,Variant *param_2)

{
  long *plVar1;
  long lVar2;
  char *__s;
  ulong uVar3;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  size_t local_30;
  long local_20;
  
  lVar2 = *(long *)param_2;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar2 == 0) {
    local_40 = 0;
  }
  else {
    __s = *(char **)(lVar2 + 8);
    local_40 = 0;
    if (__s == (char *)0x0) {
      if (*(long *)(lVar2 + 0x10) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_40,(CowData *)(lVar2 + 0x10));
      }
    }
    else {
      local_30 = strlen(__s);
      local_38 = __s;
      String::parse_latin1((StrRange *)&local_40);
    }
  }
  uVar3 = PropertyListHelper::property_get_value(param_1 + 0x348,(Variant *)&local_40);
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      uVar3 = uVar3 & 0xff;
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AudioStreamRandomizer::_setv(StringName const&, Variant const&) */

ulong AudioStreamRandomizer::_setv(StringName *param_1,Variant *param_2)

{
  long *plVar1;
  long lVar2;
  char *__s;
  ulong uVar3;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  size_t local_30;
  long local_20;
  
  lVar2 = *(long *)param_2;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar2 == 0) {
    local_40 = 0;
  }
  else {
    __s = *(char **)(lVar2 + 8);
    local_40 = 0;
    if (__s == (char *)0x0) {
      if (*(long *)(lVar2 + 0x10) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_40,(CowData *)(lVar2 + 0x10));
      }
    }
    else {
      local_30 = strlen(__s);
      local_38 = __s;
      String::parse_latin1((StrRange *)&local_40);
    }
  }
  uVar3 = PropertyListHelper::property_set_value(param_1 + 0x348,(Variant *)&local_40);
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      uVar3 = uVar3 & 0xff;
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RefCounted::is_class(String const&) const */

undefined8 __thiscall RefCounted::is_class(RefCounted *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
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
    lVar5 = *(long *)(lVar2 + 0x20);
    if (lVar5 == 0) {
      local_60 = 0;
    }
    else {
      pcVar4 = *(char **)(lVar5 + 8);
      local_60 = 0;
      if (pcVar4 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar5 + 0x10) + -0x10);
        if (*(long *)(lVar5 + 0x10) != 0) {
          do {
            lVar3 = *plVar1;
            if (lVar3 == 0) goto LAB_001162bf;
            LOCK();
            lVar7 = *plVar1;
            bVar9 = lVar3 == lVar7;
            if (bVar9) {
              *plVar1 = lVar3 + 1;
              lVar7 = lVar3;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar7 != -1) {
            local_60 = *(long *)(lVar5 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar4);
        local_58 = pcVar4;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_001162bf:
    cVar6 = String::operator==((String *)param_1,(StrRange *)&local_60);
    lVar5 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar5 + -0x10),false);
      }
    }
    if (cVar6 != '\0') goto LAB_00116373;
  }
  cVar6 = String::operator==((String *)param_1,"RefCounted");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar5 = *(long *)(lVar2 + 0x20);
      if (lVar5 == 0) {
        local_60 = 0;
      }
      else {
        pcVar4 = *(char **)(lVar5 + 8);
        local_60 = 0;
        if (pcVar4 == (char *)0x0) {
          if (*(long *)(lVar5 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar5 + 0x10));
          }
        }
        else {
          local_50 = strlen(pcVar4);
          local_58 = pcVar4;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar6 = String::operator==((String *)param_1,(StrRange *)&local_60);
      lVar5 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar1 = (long *)(local_60 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar5 + -0x10),false);
        }
      }
      if (cVar6 != '\0') goto LAB_00116373;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar8 = String::operator==((String *)param_1,"Object");
      return uVar8;
    }
  }
  else {
LAB_00116373:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AudioSample::is_class(String const&) const */

undefined8 __thiscall AudioSample::is_class(AudioSample *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_0011651f;
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
LAB_0011651f:
    cVar5 = String::operator==((String *)param_1,(StrRange *)&local_60);
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
    if (cVar5 != '\0') goto LAB_001165d3;
  }
  cVar5 = String::operator==((String *)param_1,"AudioSample");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_001165d3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AudioStreamPlayback::is_class(String const&) const */

undefined8 __thiscall AudioStreamPlayback::is_class(AudioStreamPlayback *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_0011669f;
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
LAB_0011669f:
    cVar5 = String::operator==((String *)param_1,(StrRange *)&local_60);
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
    if (cVar5 != '\0') goto LAB_00116753;
  }
  cVar5 = String::operator==((String *)param_1,"AudioStreamPlayback");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_00116753:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AudioStream::is_class(String const&) const */

undefined8 __thiscall AudioStream::is_class(AudioStream *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
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
    lVar5 = *(long *)(lVar2 + 0x20);
    if (lVar5 == 0) {
      local_60 = 0;
    }
    else {
      pcVar4 = *(char **)(lVar5 + 8);
      local_60 = 0;
      if (pcVar4 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar5 + 0x10) + -0x10);
        if (*(long *)(lVar5 + 0x10) != 0) {
          do {
            lVar3 = *plVar1;
            if (lVar3 == 0) goto LAB_0011682f;
            LOCK();
            lVar7 = *plVar1;
            bVar9 = lVar3 == lVar7;
            if (bVar9) {
              *plVar1 = lVar3 + 1;
              lVar7 = lVar3;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar7 != -1) {
            local_60 = *(long *)(lVar5 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar4);
        local_58 = pcVar4;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_0011682f:
    cVar6 = String::operator==((String *)param_1,(StrRange *)&local_60);
    lVar5 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar5 + -0x10),false);
      }
    }
    if (cVar6 != '\0') goto LAB_001168e3;
  }
  cVar6 = String::operator==((String *)param_1,"AudioStream");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar5 = *(long *)(lVar2 + 0x20);
      if (lVar5 == 0) {
        local_60 = 0;
      }
      else {
        pcVar4 = *(char **)(lVar5 + 8);
        local_60 = 0;
        if (pcVar4 == (char *)0x0) {
          if (*(long *)(lVar5 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar5 + 0x10));
          }
        }
        else {
          local_50 = strlen(pcVar4);
          local_58 = pcVar4;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar6 = String::operator==((String *)param_1,(StrRange *)&local_60);
      lVar5 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar1 = (long *)(local_60 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar5 + -0x10),false);
        }
      }
      if (cVar6 != '\0') goto LAB_001168e3;
    }
    cVar6 = String::operator==((String *)param_1,"Resource");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar8 = RefCounted::is_class((RefCounted *)this,param_1);
        return uVar8;
      }
      goto LAB_00116a28;
    }
  }
LAB_001168e3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00116a28:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AudioStreamRandomizer::is_class(String const&) const */

undefined8 __thiscall AudioStreamRandomizer::is_class(AudioStreamRandomizer *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_00116a9f;
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
LAB_00116a9f:
    cVar5 = String::operator==((String *)param_1,(StrRange *)&local_60);
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
    if (cVar5 != '\0') goto LAB_00116b53;
  }
  cVar5 = String::operator==((String *)param_1,"AudioStreamRandomizer");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = AudioStream::is_class((AudioStream *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_00116b53:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AudioStreamMicrophone::is_class(String const&) const */

undefined8 __thiscall AudioStreamMicrophone::is_class(AudioStreamMicrophone *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_00116c1f;
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
LAB_00116c1f:
    cVar5 = String::operator==((String *)param_1,(StrRange *)&local_60);
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
    if (cVar5 != '\0') goto LAB_00116cd3;
  }
  cVar5 = String::operator==((String *)param_1,"AudioStreamMicrophone");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = AudioStream::is_class((AudioStream *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_00116cd3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AudioStreamPlaybackMicrophone::is_class(String const&) const */

undefined8 __thiscall
AudioStreamPlaybackMicrophone::is_class(AudioStreamPlaybackMicrophone *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
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
    lVar5 = *(long *)(lVar2 + 0x20);
    if (lVar5 == 0) {
      local_60 = 0;
    }
    else {
      pcVar4 = *(char **)(lVar5 + 8);
      local_60 = 0;
      if (pcVar4 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar5 + 0x10) + -0x10);
        if (*(long *)(lVar5 + 0x10) != 0) {
          do {
            lVar3 = *plVar1;
            if (lVar3 == 0) goto LAB_00116d9f;
            LOCK();
            lVar7 = *plVar1;
            bVar9 = lVar3 == lVar7;
            if (bVar9) {
              *plVar1 = lVar3 + 1;
              lVar7 = lVar3;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar7 != -1) {
            local_60 = *(long *)(lVar5 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar4);
        local_58 = pcVar4;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_00116d9f:
    cVar6 = String::operator==((String *)param_1,(StrRange *)&local_60);
    lVar5 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar5 + -0x10),false);
      }
    }
    if (cVar6 != '\0') goto LAB_00116e53;
  }
  cVar6 = String::operator==((String *)param_1,"AudioStreamPlaybackMicrophone");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar5 = *(long *)(lVar2 + 0x20);
      if (lVar5 == 0) {
        local_60 = 0;
      }
      else {
        pcVar4 = *(char **)(lVar5 + 8);
        local_60 = 0;
        if (pcVar4 == (char *)0x0) {
          if (*(long *)(lVar5 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar5 + 0x10));
          }
        }
        else {
          local_50 = strlen(pcVar4);
          local_58 = pcVar4;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar6 = String::operator==((String *)param_1,(StrRange *)&local_60);
      lVar5 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar1 = (long *)(local_60 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar5 + -0x10),false);
        }
      }
      if (cVar6 != '\0') goto LAB_00116e53;
    }
    cVar6 = String::operator==((String *)param_1,"AudioStreamPlaybackResampled");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar8 = AudioStreamPlayback::is_class((AudioStreamPlayback *)this,param_1);
        return uVar8;
      }
      goto LAB_00116f98;
    }
  }
LAB_00116e53:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00116f98:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AudioStreamPlaybackResampled::is_class(String const&) const */

undefined8 __thiscall
AudioStreamPlaybackResampled::is_class(AudioStreamPlaybackResampled *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
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
    lVar5 = *(long *)(lVar2 + 0x20);
    if (lVar5 == 0) {
      local_60 = 0;
    }
    else {
      pcVar4 = *(char **)(lVar5 + 8);
      local_60 = 0;
      if (pcVar4 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar5 + 0x10) + -0x10);
        if (*(long *)(lVar5 + 0x10) != 0) {
          do {
            lVar3 = *plVar1;
            if (lVar3 == 0) goto LAB_0011700f;
            LOCK();
            lVar7 = *plVar1;
            bVar9 = lVar3 == lVar7;
            if (bVar9) {
              *plVar1 = lVar3 + 1;
              lVar7 = lVar3;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar7 != -1) {
            local_60 = *(long *)(lVar5 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar4);
        local_58 = pcVar4;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_0011700f:
    cVar6 = String::operator==((String *)param_1,(StrRange *)&local_60);
    lVar5 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar5 + -0x10),false);
      }
    }
    if (cVar6 != '\0') goto LAB_001170c3;
  }
  cVar6 = String::operator==((String *)param_1,"AudioStreamPlaybackResampled");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar5 = *(long *)(lVar2 + 0x20);
      if (lVar5 == 0) {
        local_60 = 0;
      }
      else {
        pcVar4 = *(char **)(lVar5 + 8);
        local_60 = 0;
        if (pcVar4 == (char *)0x0) {
          if (*(long *)(lVar5 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar5 + 0x10));
          }
        }
        else {
          local_50 = strlen(pcVar4);
          local_58 = pcVar4;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar6 = String::operator==((String *)param_1,(StrRange *)&local_60);
      lVar5 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar1 = (long *)(local_60 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar5 + -0x10),false);
        }
      }
      if (cVar6 != '\0') goto LAB_001170c3;
    }
    cVar6 = String::operator==((String *)param_1,"AudioStreamPlayback");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar8 = RefCounted::is_class((RefCounted *)this,param_1);
        return uVar8;
      }
      goto LAB_00117208;
    }
  }
LAB_001170c3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00117208:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AudioStreamPlaybackRandomizer::is_class(String const&) const */

undefined8 __thiscall
AudioStreamPlaybackRandomizer::is_class(AudioStreamPlaybackRandomizer *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
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
    lVar5 = *(long *)(lVar2 + 0x20);
    if (lVar5 == 0) {
      local_60 = 0;
    }
    else {
      pcVar4 = *(char **)(lVar5 + 8);
      local_60 = 0;
      if (pcVar4 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar5 + 0x10) + -0x10);
        if (*(long *)(lVar5 + 0x10) != 0) {
          do {
            lVar3 = *plVar1;
            if (lVar3 == 0) goto LAB_0011727f;
            LOCK();
            lVar7 = *plVar1;
            bVar9 = lVar3 == lVar7;
            if (bVar9) {
              *plVar1 = lVar3 + 1;
              lVar7 = lVar3;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar7 != -1) {
            local_60 = *(long *)(lVar5 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar4);
        local_58 = pcVar4;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_0011727f:
    cVar6 = String::operator==((String *)param_1,(StrRange *)&local_60);
    lVar5 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar5 + -0x10),false);
      }
    }
    if (cVar6 != '\0') goto LAB_00117333;
  }
  cVar6 = String::operator==((String *)param_1,"AudioStreamPlaybackRandomizer");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar5 = *(long *)(lVar2 + 0x20);
      if (lVar5 == 0) {
        local_60 = 0;
      }
      else {
        pcVar4 = *(char **)(lVar5 + 8);
        local_60 = 0;
        if (pcVar4 == (char *)0x0) {
          if (*(long *)(lVar5 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar5 + 0x10));
          }
        }
        else {
          local_50 = strlen(pcVar4);
          local_58 = pcVar4;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar6 = String::operator==((String *)param_1,(StrRange *)&local_60);
      lVar5 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar1 = (long *)(local_60 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar5 + -0x10),false);
        }
      }
      if (cVar6 != '\0') goto LAB_00117333;
    }
    cVar6 = String::operator==((String *)param_1,"AudioStreamPlayback");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar8 = RefCounted::is_class((RefCounted *)this,param_1);
        return uVar8;
      }
      goto LAB_00117478;
    }
  }
LAB_00117333:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00117478:
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
  local_48 = &_LC10;
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
      goto joined_r0x001175bc;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x001175bc:
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
  local_48 = &_LC10;
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
      goto joined_r0x0011773c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0011773c:
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



/* MethodBindTRC<Ref<AudioSample>>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Ref<AudioSample>>::_gen_argument_type_info(int param_1)

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
  local_48 = "AudioSample";
  local_40 = 0xb;
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
      goto LAB_00117830;
    }
  }
  StringName::StringName((StringName *)&local_48,(String *)(puVar3 + 8),false);
  if (*(char **)(puVar3 + 4) == local_48) {
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  else {
    StringName::unref();
    *(char **)(puVar3 + 4) = local_48;
  }
LAB_00117830:
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
  local_48 = &_LC10;
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
      goto joined_r0x00117a4c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x00117a4c:
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
  local_48 = &_LC10;
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
      goto joined_r0x00117bcc;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x00117bcc:
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



/* MethodBindTRC<Ref<AudioSamplePlayback>>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Ref<AudioSamplePlayback>>::_gen_argument_type_info(int param_1)

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
  local_48 = "AudioSamplePlayback";
  local_40 = 0x13;
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
      goto LAB_00117ce0;
    }
  }
  StringName::StringName((StringName *)&local_48,(String *)(puVar3 + 8),false);
  if (*(char **)(puVar3 + 4) == local_48) {
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  else {
    StringName::unref();
    *(char **)(puVar3 + 4) = local_48;
  }
LAB_00117ce0:
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



/* MethodBindTR<Ref<AudioStreamPlayback>>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTR<Ref<AudioStreamPlayback>>::_gen_argument_type_info(int param_1)

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
  local_48 = "AudioStreamPlayback";
  local_40 = 0x13;
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
      goto LAB_00117e70;
    }
  }
  StringName::StringName((StringName *)&local_48,(String *)(puVar3 + 8),false);
  if (*(char **)(puVar3 + 4) == local_48) {
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  else {
    StringName::unref();
    *(char **)(puVar3 + 4) = local_48;
  }
LAB_00117e70:
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



/* GetTypeInfo<bool, void>::get_class_info() */

GetTypeInfo<bool,void> * __thiscall
GetTypeInfo<bool,void>::get_class_info(GetTypeInfo<bool,void> *this)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC10;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *(undefined4 *)this = 1;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    *(undefined4 *)(this + 0x28) = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x20),(CowData *)&local_58);
    *(undefined4 *)(this + 0x28) = 6;
    if (*(int *)(this + 0x18) == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(this + 0x20),false);
      if (*(undefined **)(this + 0x10) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(undefined **)(this + 0x10) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x0011829c;
    }
  }
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0011829c:
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
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GetTypeInfo<int, void>::get_class_info() */

GetTypeInfo<int,void> * __thiscall
GetTypeInfo<int,void>::get_class_info(GetTypeInfo<int,void> *this)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC10;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *(undefined4 *)this = 2;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    *(undefined4 *)(this + 0x28) = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x20),(CowData *)&local_58);
    *(undefined4 *)(this + 0x28) = 6;
    if (*(int *)(this + 0x18) == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(this + 0x20),false);
      if (*(undefined **)(this + 0x10) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(undefined **)(this + 0x10) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x0011841c;
    }
  }
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0011841c:
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
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GetTypeInfo<float, void>::get_class_info() */

GetTypeInfo<float,void> * __thiscall
GetTypeInfo<float,void>::get_class_info(GetTypeInfo<float,void> *this)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC10;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *(undefined4 *)this = 3;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    *(undefined4 *)(this + 0x28) = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x20),(CowData *)&local_58);
    *(undefined4 *)(this + 0x28) = 6;
    if (*(int *)(this + 0x18) == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(this + 0x20),false);
      if (*(undefined **)(this + 0x10) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(undefined **)(this + 0x10) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x0011859c;
    }
  }
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0011859c:
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
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GetTypeInfo<double, void>::get_class_info() */

GetTypeInfo<double,void> * __thiscall
GetTypeInfo<double,void>::get_class_info(GetTypeInfo<double,void> *this)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC10;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *(undefined4 *)this = 3;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    *(undefined4 *)(this + 0x28) = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x20),(CowData *)&local_58);
    *(undefined4 *)(this + 0x28) = 6;
    if (*(int *)(this + 0x18) == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(this + 0x20),false);
      if (*(undefined **)(this + 0x10) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(undefined **)(this + 0x10) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x0011871c;
    }
  }
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0011871c:
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
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GetTypeInfo<String, void>::get_class_info() */

GetTypeInfo<String,void> * __thiscall
GetTypeInfo<String,void>::get_class_info(GetTypeInfo<String,void> *this)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC10;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *(undefined4 *)this = 4;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    *(undefined4 *)(this + 0x28) = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x20),(CowData *)&local_58);
    *(undefined4 *)(this + 0x28) = 6;
    if (*(int *)(this + 0x18) == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(this + 0x20),false);
      if (*(undefined **)(this + 0x10) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(undefined **)(this + 0x10) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x0011889c;
    }
  }
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0011889c:
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
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GetTypeInfo<StringName const&, void>::get_class_info() */

GetTypeInfo<StringName_const&,void> * __thiscall
GetTypeInfo<StringName_const&,void>::get_class_info(GetTypeInfo<StringName_const&,void> *this)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC10;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *(undefined4 *)this = 0x15;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    *(undefined4 *)(this + 0x28) = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x20),(CowData *)&local_58);
    *(undefined4 *)(this + 0x28) = 6;
    if (*(int *)(this + 0x18) == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(this + 0x20),false);
      if (*(undefined **)(this + 0x10) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(undefined **)(this + 0x10) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x00118a1c;
    }
  }
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x00118a1c:
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
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GetTypeInfo<Variant, void>::get_class_info() */

GetTypeInfo<Variant,void> * __thiscall
GetTypeInfo<Variant,void>::get_class_info(GetTypeInfo<Variant,void> *this)

{
  long in_FS_OFFSET;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 0x20006;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  local_28 = 0;
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_28);
  if ((StringName::configured != '\0') && (local_28 != 0)) {
    StringName::unref();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GetTypeInfo<Variant const&, void>::get_class_info() */

GetTypeInfo<Variant_const&,void> * __thiscall
GetTypeInfo<Variant_const&,void>::get_class_info(GetTypeInfo<Variant_const&,void> *this)

{
  long in_FS_OFFSET;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 0x20006;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  local_28 = 0;
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_28);
  if ((StringName::configured != '\0') && (local_28 != 0)) {
    StringName::unref();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GetTypeInfo<TypedArray<Dictionary>, void>::get_class_info() */

GetTypeInfo<TypedArray<Dictionary>,void> * __thiscall
GetTypeInfo<TypedArray<Dictionary>,void>::get_class_info
          (GetTypeInfo<TypedArray<Dictionary>,void> *this)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_38;
  long local_30;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = 0;
  Variant::get_type_name(&local_38,0x1b);
  *(undefined4 *)this = 0x1c;
  *(undefined4 *)(this + 0x18) = 0x1f;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  if (local_38 == 0) {
    *(undefined4 *)(this + 0x28) = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x20),(CowData *)&local_38);
    *(undefined4 *)(this + 0x28) = 6;
    if (*(int *)(this + 0x18) == 0x11) {
      StringName::StringName((StringName *)&local_28,(String *)(this + 0x20),false);
      if (*(long *)(this + 0x10) == local_28) {
        lVar2 = local_38;
        if ((StringName::configured != '\0') && (local_28 != 0)) {
          StringName::unref();
          lVar2 = local_38;
        }
      }
      else {
        StringName::unref();
        *(long *)(this + 0x10) = local_28;
        lVar2 = local_38;
      }
      goto joined_r0x00118c9c;
    }
  }
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_30);
  lVar2 = local_38;
joined_r0x00118c9c:
  local_38 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_38 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_30 != 0)) {
    StringName::unref();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
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



/* CowData<char32_t>::_ref(CowData<char32_t> const&) */

void __thiscall CowData<char32_t>::_ref(CowData<char32_t> *this,CowData *param_1)

{
  if (*(long *)this != *(long *)param_1) {
    _ref(this,param_1);
    return;
  }
  return;
}



/* GetTypeInfo<GDExtensionPtr<AudioFrame>, void>::get_class_info() */

GetTypeInfo<GDExtensionPtr<AudioFrame>,void> * __thiscall
GetTypeInfo<GDExtensionPtr<AudioFrame>,void>::get_class_info
          (GetTypeInfo<GDExtensionPtr<AudioFrame>,void> *this)

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
  local_50 = 0;
  local_58 = 0;
  local_48 = "AudioFrame";
  local_40 = 10;
  String::parse_latin1((StrRange *)&local_58);
  *(undefined4 *)this = 2;
  *(undefined4 *)(this + 0x18) = 0x1e;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    *(undefined4 *)(this + 0x28) = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x20),(CowData *)&local_58);
    *(undefined4 *)(this + 0x28) = 6;
    if (*(int *)(this + 0x18) == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(this + 0x20),false);
      if (*(char **)(this + 0x10) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(char **)(this + 0x10) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x00118efc;
    }
  }
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x00118efc:
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
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GetTypeInfo<Ref<AudioStreamPlayback>, void>::get_class_info() */

GetTypeInfo<Ref<AudioStreamPlayback>,void> * __thiscall
GetTypeInfo<Ref<AudioStreamPlayback>,void>::get_class_info
          (GetTypeInfo<Ref<AudioStreamPlayback>,void> *this)

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
  local_50 = 0;
  local_58 = 0;
  local_48 = "AudioStreamPlayback";
  local_40 = 0x13;
  String::parse_latin1((StrRange *)&local_58);
  *(undefined4 *)this = 0x18;
  *(undefined4 *)(this + 0x18) = 0x11;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    *(undefined4 *)(this + 0x28) = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x20),(CowData *)&local_58);
    *(undefined4 *)(this + 0x28) = 6;
    if (*(int *)(this + 0x18) != 0x11) {
      StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_50);
      goto LAB_00118ff0;
    }
  }
  StringName::StringName((StringName *)&local_48,(String *)(this + 0x20),false);
  if (*(char **)(this + 0x10) == local_48) {
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  else {
    StringName::unref();
    *(char **)(this + 0x10) = local_48;
  }
LAB_00118ff0:
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
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashSet<AudioStreamPlaybackMicrophone*, HashMapHasherDefault,
   HashMapComparatorDefault<AudioStreamPlaybackMicrophone*> >::insert(AudioStreamPlaybackMicrophone*
   const&) */

undefined1  [16]
HashSet<AudioStreamPlaybackMicrophone*,HashMapHasherDefault,HashMapComparatorDefault<AudioStreamPlaybackMicrophone*>>
::insert(AudioStreamPlaybackMicrophone **param_1)

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
  AudioStreamPlaybackMicrophone *local_88;
  ulong local_70;
  
  uVar32 = *(uint *)(in_RSI + 4);
  uVar31 = *(uint *)(hash_table_size_primes + (ulong)uVar32 * 4);
  local_88 = (AudioStreamPlaybackMicrophone *)*in_RSI;
  if (local_88 == (AudioStreamPlaybackMicrophone *)0x0) {
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
    local_88 = (AudioStreamPlaybackMicrophone *)*in_RSI;
    if (local_88 != (AudioStreamPlaybackMicrophone *)0x0) goto LAB_001191cf;
  }
  else {
    uVar44 = *(uint *)((long)in_RSI + 0x24);
    lVar34 = *in_RDX;
LAB_001191cf:
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
            if (*(long *)(local_88 + uStack_98 * 8) == lVar34) goto LAB_00119671;
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
  if ((float)uVar31 * __LC71 < (float)(uVar44 + 1)) {
    if (uVar32 == 0x1c) {
      uStack_98 = 0;
      _err_print_error("_insert","./core/templates/hash_set.h",0xbf,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1"
                       ,"Hash table maximum capacity reached, aborting insertion.",0);
      uVar44 = *(uint *)((long)in_RSI + 0x24);
      uVar37 = 0xffffffff;
      local_88 = (AudioStreamPlaybackMicrophone *)*in_RSI;
      goto LAB_00119671;
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
    local_88 = (AudioStreamPlaybackMicrophone *)*in_RSI;
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
LAB_00119671:
  *(uint *)((long)param_1 + 0xc) = uVar37;
  *param_1 = local_88;
  *(uint *)(param_1 + 1) = uVar44;
  auVar45._8_8_ = uStack_98;
  auVar45._0_8_ = param_1;
  return auVar45;
}



/* void Ref<AudioStreamPlaybackRandomizer>::instantiate<>() */

void __thiscall
Ref<AudioStreamPlaybackRandomizer>::instantiate<>(Ref<AudioStreamPlaybackRandomizer> *this)

{
  char cVar1;
  AudioStreamPlayback *this_00;
  long lVar2;
  AudioStreamPlayback *pAVar3;
  Object *pOVar4;
  Object *pOVar5;
  byte bVar6;
  
  bVar6 = 0;
  this_00 = (AudioStreamPlayback *)operator_new(0x290,"");
  pAVar3 = this_00;
  for (lVar2 = 0x52; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined8 *)pAVar3 = 0;
    pAVar3 = pAVar3 + (ulong)bVar6 * -0x10 + 8;
  }
  AudioStreamPlayback::AudioStreamPlayback(this_00);
  *(undefined ***)this_00 = &PTR__initialize_classv_0012eb00;
  *(undefined8 *)(this_00 + 0x280) = 0;
  *(undefined1 (*) [16])(this_00 + 0x270) = (undefined1  [16])0x0;
  postinitialize_handler((Object *)this_00);
  cVar1 = RefCounted::init_ref();
  if (cVar1 == '\0') {
    pOVar5 = *(Object **)this;
    if (pOVar5 == (Object *)0x0) {
      return;
    }
    *(undefined8 *)this = 0;
    cVar1 = RefCounted::unreference();
    if (cVar1 == '\0') {
      return;
    }
    this_00 = (AudioStreamPlayback *)0x0;
    cVar1 = predelete_handler(pOVar5);
    if (cVar1 == '\0') {
      return;
    }
  }
  else {
    pOVar5 = *(Object **)this;
    pOVar4 = pOVar5;
    if (this_00 == (AudioStreamPlayback *)pOVar5) goto LAB_00119875;
    *(AudioStreamPlayback **)this = this_00;
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *(undefined8 *)this = 0;
    }
    pOVar4 = (Object *)this_00;
    if (((pOVar5 == (Object *)0x0) || (cVar1 = RefCounted::unreference(), cVar1 == '\0')) ||
       (cVar1 = predelete_handler(pOVar5), cVar1 == '\0')) goto LAB_00119875;
  }
  (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
  Memory::free_static(pOVar5,false);
  pOVar4 = (Object *)this_00;
  if (this_00 == (AudioStreamPlayback *)0x0) {
    return;
  }
LAB_00119875:
  cVar1 = RefCounted::unreference();
  if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar4), cVar1 != '\0')) {
    (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
    Memory::free_static(pOVar4,false);
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashSet<AudioStreamPlaybackRandomizer*, HashMapHasherDefault,
   HashMapComparatorDefault<AudioStreamPlaybackRandomizer*> >::insert(AudioStreamPlaybackRandomizer*
   const&) */

undefined1  [16]
HashSet<AudioStreamPlaybackRandomizer*,HashMapHasherDefault,HashMapComparatorDefault<AudioStreamPlaybackRandomizer*>>
::insert(AudioStreamPlaybackRandomizer **param_1)

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
  AudioStreamPlaybackRandomizer *local_88;
  ulong local_70;
  
  uVar32 = *(uint *)(in_RSI + 4);
  uVar31 = *(uint *)(hash_table_size_primes + (ulong)uVar32 * 4);
  local_88 = (AudioStreamPlaybackRandomizer *)*in_RSI;
  if (local_88 == (AudioStreamPlaybackRandomizer *)0x0) {
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
    local_88 = (AudioStreamPlaybackRandomizer *)*in_RSI;
    if (local_88 != (AudioStreamPlaybackRandomizer *)0x0) goto LAB_0011994f;
  }
  else {
    uVar44 = *(uint *)((long)in_RSI + 0x24);
    lVar34 = *in_RDX;
LAB_0011994f:
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
            if (*(long *)(local_88 + uStack_98 * 8) == lVar34) goto LAB_00119df1;
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
  if ((float)uVar31 * __LC71 < (float)(uVar44 + 1)) {
    if (uVar32 == 0x1c) {
      uStack_98 = 0;
      _err_print_error("_insert","./core/templates/hash_set.h",0xbf,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1"
                       ,"Hash table maximum capacity reached, aborting insertion.",0);
      uVar44 = *(uint *)((long)in_RSI + 0x24);
      uVar37 = 0xffffffff;
      local_88 = (AudioStreamPlaybackRandomizer *)*in_RSI;
      goto LAB_00119df1;
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
    local_88 = (AudioStreamPlaybackRandomizer *)*in_RSI;
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
LAB_00119df1:
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
        if (pvVar5 == (void *)0x0) goto LAB_0011a0b4;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_0011a0b4:
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  return;
}



/* RefCounted::_initialize_classv() */

void RefCounted::_initialize_classv(void)

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
    Object::initialize_class();
    local_58 = 0;
    local_40 = 6;
    local_48 = "Object";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "RefCounted";
    local_60 = 0;
    local_40 = 10;
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
    if ((code *)PTR__bind_methods_00137010 != Object::_bind_methods) {
      RefCounted::_bind_methods();
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AudioSample::_initialize_classv() */

void AudioSample::_initialize_classv(void)

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
    if (RefCounted::initialize_class()::initialized == '\0') {
      Object::initialize_class();
      local_58 = 0;
      local_40 = 6;
      local_48 = "Object";
      String::parse_latin1((StrRange *)&local_58);
      StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
      local_48 = "RefCounted";
      local_60 = 0;
      local_40 = 10;
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
      if ((code *)PTR__bind_methods_00137010 != Object::_bind_methods) {
        RefCounted::_bind_methods();
      }
      RefCounted::initialize_class()::initialized = '\x01';
    }
    local_48 = "RefCounted";
    local_58 = 0;
    local_40 = 10;
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "AudioSample";
    local_60 = 0;
    local_40 = 0xb;
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
    initialize_class()::initialized = '\x01';
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* RefCounted::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void RefCounted::_get_property_listv(List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
  undefined4 *puVar4;
  undefined7 in_register_00000031;
  List *pLVar5;
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
  
  pLVar5 = (List *)CONCAT71(in_register_00000031,param_2);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = "RefCounted";
  local_88 = 0;
  local_90 = 0;
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
LAB_0011a61d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0011a61d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar5;
      local_68 = local_80;
      goto joined_r0x0011a63f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar5;
joined_r0x0011a63f:
  if (lVar2 == 0) {
    pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])pLVar5 = pauVar3;
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
  plVar1 = *(long **)pLVar5;
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
  StringName::StringName((StringName *)&local_78,"RefCounted",false);
  ClassDB::get_property_list((StringName *)&local_78,pLVar5,true,(Object *)param_1);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AudioSample::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall AudioSample::_get_property_listv(AudioSample *this,List *param_1,bool param_2)

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
    RefCounted::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "AudioSample";
  local_70 = 0xb;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "AudioSample";
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
LAB_0011a99d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0011a99d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0011a9bf;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0011a9bf:
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
  StringName::StringName((StringName *)&local_78,"AudioSample",false);
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



/* Resource::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Resource::_get_property_listv(Resource *this,List *param_1,bool param_2)

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
LAB_0011ad7d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0011ad7d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0011ad9f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0011ad9f:
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



/* AudioStream::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall AudioStream::_get_property_listv(AudioStream *this,List *param_1,bool param_2)

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
LAB_0011b15d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0011b15d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0011b17f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0011b17f:
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



/* AudioStreamMicrophone::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
AudioStreamMicrophone::_get_property_listv(AudioStreamMicrophone *this,List *param_1,bool param_2)

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
    AudioStream::_get_property_listv((AudioStream *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "AudioStreamMicrophone";
  local_70 = 0x15;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "AudioStreamMicrophone";
  local_98 = 0;
  local_70 = 0x15;
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
LAB_0011b53d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0011b53d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0011b55f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0011b55f:
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
  StringName::StringName((StringName *)&local_78,"AudioStreamMicrophone",false);
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



/* AudioStreamPlayback::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
AudioStreamPlayback::_get_property_listv(AudioStreamPlayback *this,List *param_1,bool param_2)

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
LAB_0011b91d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0011b91d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0011b93f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0011b93f:
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



/* AudioStreamPlaybackRandomizer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */

void __thiscall
AudioStreamPlaybackRandomizer::_get_property_listv
          (AudioStreamPlaybackRandomizer *this,List *param_1,bool param_2)

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
    AudioStreamPlayback::_get_property_listv((AudioStreamPlayback *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "AudioStreamPlaybackRandomizer";
  local_70 = 0x1d;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "AudioStreamPlaybackRandomizer";
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
LAB_0011bcfd:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0011bcfd;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0011bd1f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0011bd1f:
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
  StringName::StringName((StringName *)&local_78,"AudioStreamPlaybackRandomizer",false);
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



/* AudioStreamPlaybackResampled::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */

void __thiscall
AudioStreamPlaybackResampled::_get_property_listv
          (AudioStreamPlaybackResampled *this,List *param_1,bool param_2)

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
    AudioStreamPlayback::_get_property_listv((AudioStreamPlayback *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "AudioStreamPlaybackResampled";
  local_70 = 0x1c;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "AudioStreamPlaybackResampled";
  local_98 = 0;
  local_70 = 0x1c;
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
LAB_0011c0dd:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0011c0dd;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0011c0ff;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0011c0ff:
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
  StringName::StringName((StringName *)&local_78,"AudioStreamPlaybackResampled",false);
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



/* AudioStreamPlaybackMicrophone::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */

void __thiscall
AudioStreamPlaybackMicrophone::_get_property_listv
          (AudioStreamPlaybackMicrophone *this,List *param_1,bool param_2)

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
    AudioStreamPlaybackResampled::_get_property_listv
              ((AudioStreamPlaybackResampled *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "AudioStreamPlaybackMicrophone";
  local_70 = 0x1d;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "AudioStreamPlaybackMicrophone";
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
LAB_0011c4bd:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0011c4bd;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0011c4df;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0011c4df:
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
  StringName::StringName((StringName *)&local_78,"AudioStreamPlaybackMicrophone",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      AudioStreamPlaybackResampled::_get_property_listv
                ((AudioStreamPlaybackResampled *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AudioStreamRandomizer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
AudioStreamRandomizer::_get_property_listv(AudioStreamRandomizer *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
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
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    AudioStream::_get_property_listv((AudioStream *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "AudioStreamRandomizer";
  local_70 = 0x15;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "AudioStreamRandomizer";
  local_98 = 0;
  local_70 = 0x15;
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
LAB_0011c8aa:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0011c8aa;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0011c8cc;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0011c8cc:
  if (lVar2 == 0) {
    pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar3;
    *(undefined4 *)pauVar3[1] = 0;
    *pauVar3 = (undefined1  [16])0x0;
  }
  local_a8 = (StringName *)&local_68;
  local_c0 = (CowData *)&local_58;
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
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),local_c0);
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
  CowData<char32_t>::_unref((CowData<char32_t> *)local_c0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"AudioStreamRandomizer",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  PropertyListHelper::get_property_list((List *)(this + 0x348));
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



/* List<PropertyInfo, DefaultAllocator>::~List() */

void __thiscall
List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = *(long **)this;
  if (plVar4 == (long *)0x0) {
    return;
  }
  do {
    pvVar1 = (void *)*plVar4;
    if (pvVar1 == (void *)0x0) {
      if ((int)plVar4[2] != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if (*(long **)((long)pvVar1 + 0x40) == plVar4) {
      lVar3 = *(long *)((long)pvVar1 + 0x30);
      lVar2 = *(long *)((long)pvVar1 + 0x38);
      *plVar4 = lVar3;
      if (pvVar1 == (void *)plVar4[1]) {
        plVar4[1] = lVar2;
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0x30) = lVar3;
        lVar3 = *(long *)((long)pvVar1 + 0x30);
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x38) = lVar2;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar1 + 0x20));
      if ((StringName::configured != '\0') && (*(long *)((long)pvVar1 + 0x10) != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar1 + 8));
      Memory::free_static(pvVar1,false);
      *(int *)(plVar4 + 2) = (int)plVar4[2] + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    plVar4 = *(long **)this;
  } while ((int)plVar4[2] != 0);
  Memory::free_static(plVar4,false);
  return;
}



/* MethodInfo::~MethodInfo() */

void __thiscall MethodInfo::~MethodInfo(MethodInfo *this)

{
  long *plVar1;
  int *piVar2;
  long lVar3;
  code *pcVar4;
  int *piVar5;
  long lVar6;
  
  if (*(long *)(this + 0x68) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x68) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(this + 0x68);
      *(undefined8 *)(this + 0x68) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x50) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x50) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      piVar2 = *(int **)(this + 0x50);
      if (piVar2 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar3 = *(long *)(piVar2 + -2);
      *(undefined8 *)(this + 0x50) = 0;
      if (lVar3 != 0) {
        lVar6 = 0;
        piVar5 = piVar2;
        do {
          if (Variant::needs_deinit[*piVar5] != '\0') {
            Variant::_clear_internal();
          }
          lVar6 = lVar6 + 1;
          piVar5 = piVar5 + 6;
        } while (lVar3 != lVar6);
      }
      Memory::free_static(piVar2 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)(this + 0x40));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x28));
  if ((StringName::configured != '\0') && (*(long *)(this + 0x18) != 0)) {
    StringName::unref();
  }
  if (*(long *)(this + 0x10) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x10) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(this + 0x10);
      *(undefined8 *)(this + 0x10) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  return;
}



/* MethodBindTRC<Ref<AudioStream>, int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Ref<AudioStream>,int>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  undefined8 local_a8;
  long local_a0;
  long local_98;
  undefined1 local_90 [16];
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  char *local_68;
  undefined8 local_60;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_98 = 0;
  if (in_EDX == 0) {
    local_80 = 0;
    local_90 = (undefined1  [16])0x0;
    local_78 = 0;
    local_70 = 6;
    GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)&local_68);
    PropertyInfo::operator=((PropertyInfo *)&local_98,(PropertyInfo *)&local_68);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
    uVar2 = local_90._0_8_;
    uVar3 = local_90._8_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_90._8_8_;
    local_90 = auVar1 << 0x40;
    *puVar4 = (undefined4)local_98;
    *(undefined8 *)(puVar4 + 2) = uVar2;
    *(undefined8 *)(puVar4 + 4) = uVar3;
    puVar4[6] = (undefined4)local_80;
    *(undefined8 *)(puVar4 + 8) = local_78;
    puVar4[10] = local_70;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
    goto LAB_0011cea4;
  }
  local_a0 = 0;
  local_60 = 0xb;
  local_68 = "AudioStream";
  String::parse_latin1((StrRange *)&local_a0);
  local_a8 = 0;
  *puVar4 = 0x18;
  puVar4[6] = 0x11;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (local_a0 == 0) {
    puVar4[10] = 6;
LAB_0011cf9f:
    StringName::StringName((StringName *)&local_68,(String *)(puVar4 + 8),false);
    if (*(char **)(puVar4 + 4) == local_68) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(char **)(puVar4 + 4) = local_68;
    }
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_a0);
    puVar4[10] = 6;
    if (puVar4[6] == 0x11) goto LAB_0011cf9f;
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_98);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  if ((StringName::configured != '\0') && (local_98 != 0)) {
    StringName::unref();
  }
LAB_0011cea4:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<float, int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<float,int>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  long local_a8;
  long local_a0;
  undefined8 local_98;
  undefined1 local_90 [16];
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined *local_68;
  undefined8 local_60;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_98 = 0;
    local_90 = (undefined1  [16])0x0;
    local_80 = 0;
    local_78 = 0;
    local_70 = 6;
    GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)&local_68);
    PropertyInfo::operator=((PropertyInfo *)&local_98,(PropertyInfo *)&local_68);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
    uVar2 = local_90._0_8_;
    uVar3 = local_90._8_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_90._8_8_;
    local_90 = auVar1 << 0x40;
    *puVar4 = (undefined4)local_98;
    *(undefined8 *)(puVar4 + 2) = uVar2;
    *(undefined8 *)(puVar4 + 4) = uVar3;
    puVar4[6] = (undefined4)local_80;
    *(undefined8 *)(puVar4 + 8) = local_78;
    puVar4[10] = local_70;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
    goto LAB_0011d0b4;
  }
  local_a8 = 0;
  local_a0 = 0;
  local_68 = &_LC10;
  local_60 = 0;
  String::parse_latin1((StrRange *)&local_a0);
  local_98 = 0;
  *puVar4 = 3;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (local_a0 == 0) {
    puVar4[10] = 6;
LAB_0011d19f:
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_a8);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_a0);
    puVar4[10] = 6;
    if (puVar4[6] != 0x11) goto LAB_0011d19f;
    StringName::StringName((StringName *)&local_68,(String *)(puVar4 + 8),false);
    if (*(undefined **)(puVar4 + 4) == local_68) {
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(undefined **)(puVar4 + 4) = local_68;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  if ((StringName::configured != '\0') && (local_a8 != 0)) {
    StringName::unref();
  }
LAB_0011d0b4:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Vector<Vector2>, float, int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTR<Vector<Vector2>,float,int>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  uint in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  undefined8 local_a8;
  long local_a0;
  long local_98;
  undefined1 local_90 [16];
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined *local_68;
  undefined8 local_60;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_98 = 0;
  if (in_EDX < 2) {
    local_80 = 0;
    local_78 = 0;
    local_70 = 6;
    local_90 = (undefined1  [16])0x0;
    if (in_EDX == 0) {
      GetTypeInfo<float,void>::get_class_info((GetTypeInfo<float,void> *)&local_68);
    }
    else {
      GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)&local_68);
    }
    PropertyInfo::operator=((PropertyInfo *)&local_98,(PropertyInfo *)&local_68);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
    uVar2 = local_90._0_8_;
    uVar3 = local_90._8_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_90._8_8_;
    local_90 = auVar1 << 0x40;
    *puVar4 = (undefined4)local_98;
    *(undefined8 *)(puVar4 + 2) = uVar2;
    *(undefined8 *)(puVar4 + 4) = uVar3;
    puVar4[6] = (undefined4)local_80;
    *(undefined8 *)(puVar4 + 8) = local_78;
    puVar4[10] = local_70;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
    goto LAB_0011d387;
  }
  local_a0 = 0;
  local_60 = 0;
  local_68 = &_LC10;
  String::parse_latin1((StrRange *)&local_a0);
  local_a8 = 0;
  *puVar4 = 0x23;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (local_a0 == 0) {
    puVar4[10] = 6;
LAB_0011d3b7:
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_98);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_a0);
    puVar4[10] = 6;
    if (puVar4[6] != 0x11) goto LAB_0011d3b7;
    StringName::StringName((StringName *)&local_68,(String *)(puVar4 + 8),false);
    if (*(undefined **)(puVar4 + 4) == local_68) {
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(undefined **)(puVar4 + 4) = local_68;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  if ((StringName::configured != '\0') && (local_98 != 0)) {
    StringName::unref();
  }
LAB_0011d387:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<double>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<double>::_gen_argument_type_info(int param_1)

{
  long lVar1;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar2;
  long in_FS_OFFSET;
  undefined4 local_48 [2];
  long local_40;
  long local_38;
  undefined4 local_30;
  long local_28;
  undefined4 local_20;
  long local_10;
  
  puVar2 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar2 = 0;
  puVar2[6] = 0;
  *(undefined8 *)(puVar2 + 8) = 0;
  puVar2[10] = 6;
  *(undefined1 (*) [16])(puVar2 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    GetTypeInfo<double,void>::get_class_info((GetTypeInfo<double,void> *)local_48);
    *puVar2 = local_48[0];
    if (*(long *)(puVar2 + 2) != local_40) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + 2));
      lVar1 = local_40;
      local_40 = 0;
      *(long *)(puVar2 + 2) = lVar1;
    }
    if (*(long *)(puVar2 + 4) != local_38) {
      StringName::unref();
      lVar1 = local_38;
      local_38 = 0;
      *(long *)(puVar2 + 4) = lVar1;
    }
    puVar2[6] = local_30;
    if (*(long *)(puVar2 + 8) != local_28) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + 8));
      lVar1 = local_28;
      local_28 = 0;
      *(long *)(puVar2 + 8) = lVar1;
    }
    puVar2[10] = local_20;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_28);
    if ((StringName::configured != '\0') && (local_38 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
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
  undefined4 local_48 [2];
  long local_40;
  long local_38;
  undefined4 local_30;
  long local_28;
  undefined4 local_20;
  long local_10;
  
  puVar2 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar2 = 0;
  puVar2[6] = 0;
  *(undefined8 *)(puVar2 + 8) = 0;
  puVar2[10] = 6;
  *(undefined1 (*) [16])(puVar2 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    GetTypeInfo<float,void>::get_class_info((GetTypeInfo<float,void> *)local_48);
    *puVar2 = local_48[0];
    if (*(long *)(puVar2 + 2) != local_40) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + 2));
      lVar1 = local_40;
      local_40 = 0;
      *(long *)(puVar2 + 2) = lVar1;
    }
    if (*(long *)(puVar2 + 4) != local_38) {
      StringName::unref();
      lVar1 = local_38;
      local_38 = 0;
      *(long *)(puVar2 + 4) = lVar1;
    }
    puVar2[6] = local_30;
    if (*(long *)(puVar2 + 8) != local_28) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + 8));
      lVar1 = local_28;
      local_28 = 0;
      *(long *)(puVar2 + 8) = lVar1;
    }
    puVar2[10] = local_20;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_28);
    if ((StringName::configured != '\0') && (local_38 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<int>::_gen_argument_type_info(int param_1)

{
  long lVar1;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar2;
  long in_FS_OFFSET;
  undefined4 local_48 [2];
  long local_40;
  long local_38;
  undefined4 local_30;
  long local_28;
  undefined4 local_20;
  long local_10;
  
  puVar2 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar2 = 0;
  puVar2[6] = 0;
  *(undefined8 *)(puVar2 + 8) = 0;
  puVar2[10] = 6;
  *(undefined1 (*) [16])(puVar2 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)local_48);
    *puVar2 = local_48[0];
    if (*(long *)(puVar2 + 2) != local_40) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + 2));
      lVar1 = local_40;
      local_40 = 0;
      *(long *)(puVar2 + 2) = lVar1;
    }
    if (*(long *)(puVar2 + 4) != local_38) {
      StringName::unref();
      lVar1 = local_38;
      local_38 = 0;
      *(long *)(puVar2 + 4) = lVar1;
    }
    puVar2[6] = local_30;
    if (*(long *)(puVar2 + 8) != local_28) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + 8));
      lVar1 = local_28;
      local_28 = 0;
      *(long *)(puVar2 + 8) = lVar1;
    }
    puVar2[10] = local_20;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_28);
    if ((StringName::configured != '\0') && (local_38 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<AudioSamplePlayback> const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<Ref<AudioSamplePlayback>const&>::_gen_argument_type_info(int param_1)

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
  if (in_EDX != 0) goto LAB_0011d7f9;
  local_78 = 0;
  local_68 = "AudioSamplePlayback";
  local_80 = 0;
  local_60._0_8_ = 0x13;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (char *)CONCAT44(local_68._4_4_,0x18);
  local_50 = 0x11;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_0011d9b5:
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
    if (local_50 == 0x11) goto LAB_0011d9b5;
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
LAB_0011d7f9:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar4;
}



/* MethodBindT<int, int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<int,int>::_gen_argument_type_info(int param_1)

{
  long lVar1;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar2;
  long in_FS_OFFSET;
  undefined4 local_58 [2];
  long local_50;
  long local_48;
  undefined4 local_40;
  long local_38;
  undefined4 local_30;
  long local_20;
  
  puVar2 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar2 = 0;
  puVar2[6] = 0;
  *(undefined8 *)(puVar2 + 8) = 0;
  puVar2[10] = 6;
  *(undefined1 (*) [16])(puVar2 + 2) = (undefined1  [16])0x0;
  if ((in_EDX == 0) || (in_EDX == 1)) {
    GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)local_58);
    *puVar2 = local_58[0];
    if (*(long *)(puVar2 + 2) != local_50) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + 2));
      lVar1 = local_50;
      local_50 = 0;
      *(long *)(puVar2 + 2) = lVar1;
    }
    if (*(long *)(puVar2 + 4) != local_48) {
      StringName::unref();
      lVar1 = local_48;
      local_48 = 0;
      *(long *)(puVar2 + 4) = lVar1;
    }
    puVar2[6] = local_40;
    if (*(long *)(puVar2 + 8) != local_38) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + 8));
      lVar1 = local_38;
      local_38 = 0;
      *(long *)(puVar2 + 8) = lVar1;
    }
    puVar2[10] = local_30;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
    if ((StringName::configured != '\0') && (local_48 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, float>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<int,float>::_gen_argument_type_info(int param_1)

{
  long lVar1;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar2;
  long in_FS_OFFSET;
  undefined4 local_58 [2];
  long local_50;
  long local_48;
  undefined4 local_40;
  long local_38;
  undefined4 local_30;
  long local_20;
  
  puVar2 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar2 = 0;
  puVar2[6] = 0;
  *(undefined8 *)(puVar2 + 8) = 0;
  puVar2[10] = 6;
  *(undefined1 (*) [16])(puVar2 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)local_58);
  }
  else {
    if (in_EDX != 1) goto LAB_0011dbb2;
    GetTypeInfo<float,void>::get_class_info((GetTypeInfo<float,void> *)local_58);
  }
  *puVar2 = local_58[0];
  if (*(long *)(puVar2 + 2) != local_50) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + 2));
    lVar1 = local_50;
    local_50 = 0;
    *(long *)(puVar2 + 2) = lVar1;
  }
  if (*(long *)(puVar2 + 4) != local_48) {
    StringName::unref();
    lVar1 = local_48;
    local_48 = 0;
    *(long *)(puVar2 + 4) = lVar1;
  }
  puVar2[6] = local_40;
  if (*(long *)(puVar2 + 8) != local_38) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + 8));
    lVar1 = local_38;
    local_38 = 0;
    *(long *)(puVar2 + 8) = lVar1;
  }
  puVar2[10] = local_30;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
  if ((StringName::configured != '\0') && (local_48 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
LAB_0011dbb2:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, Ref<AudioStream>, float>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<int,Ref<AudioStream>,float>::_gen_argument_type_info(int param_1)

{
  long lVar1;
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *this;
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
  
  this = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 6;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)&local_68);
  }
  else {
    if (in_EDX != 1) {
      if (in_EDX == 2) {
        GetTypeInfo<float,void>::get_class_info((GetTypeInfo<float,void> *)&local_68);
        *(undefined4 *)this = local_68._0_4_;
        if (*(long *)(this + 8) != local_60) {
          CowData<char32_t>::_unref((CowData<char32_t> *)(this + 8));
          lVar1 = local_60;
          local_60 = 0;
          *(long *)(this + 8) = lVar1;
        }
        if (*(long *)(this + 0x10) != local_58) {
          StringName::unref();
          lVar1 = local_58;
          local_58 = 0;
          *(long *)(this + 0x10) = lVar1;
        }
        *(undefined4 *)(this + 0x18) = local_50;
        if (*(long *)(this + 0x20) != local_48) {
          CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x20));
          lVar1 = local_48;
          local_48 = 0;
          *(long *)(this + 0x20) = lVar1;
        }
        *(undefined4 *)(this + 0x28) = local_40;
        PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
      }
      goto LAB_0011dd0d;
    }
    local_70 = 0;
    local_78 = 0;
    local_68 = "AudioStream";
    local_60 = 0xb;
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
  }
  PropertyInfo::operator=(this,(PropertyInfo *)&local_68);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
LAB_0011dd0d:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, Ref<AudioStream> >::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<int,Ref<AudioStream>>::_gen_argument_type_info(int param_1)

{
  long lVar1;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar2;
  long in_FS_OFFSET;
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
  
  puVar2 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar2 = 0;
  puVar2[6] = 0;
  *(undefined8 *)(puVar2 + 8) = 0;
  puVar2[10] = 6;
  *(undefined1 (*) [16])(puVar2 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)&local_78);
  }
  else {
    if (in_EDX != 1) goto LAB_0011df1a;
    local_80 = 0;
    local_88 = 0;
    local_78 = "AudioStream";
    local_70 = 0xb;
    String::parse_latin1((StrRange *)&local_88);
    local_90 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_78,0x18,(CowData<char32_t> *)&local_90,0x11,
               (StrRange *)&local_88,6,&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
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
LAB_0011df1a:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Ref<AudioStreamPlayback>::unref() */

void __thiscall Ref<AudioStreamPlayback>::unref(Ref<AudioStreamPlayback> *this)

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



/* Ref<AudioStream>::unref() */

void __thiscall Ref<AudioStream>::unref(Ref<AudioStream> *this)

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



/* MethodBind* create_method_bind<AudioStreamPlayback, Ref<AudioSamplePlayback> const&>(void
   (AudioStreamPlayback::*)(Ref<AudioSamplePlayback> const&)) */

MethodBind *
create_method_bind<AudioStreamPlayback,Ref<AudioSamplePlayback>const&>(_func_void_Ref_ptr *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_0012ecd0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "AudioStreamPlayback";
  local_30 = 0x13;
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



/* MethodBind* create_method_bind<AudioStreamPlayback,
   Ref<AudioSamplePlayback>>(Ref<AudioSamplePlayback> (AudioStreamPlayback::*)() const) */

MethodBind * create_method_bind<AudioStreamPlayback,Ref<AudioSamplePlayback>>(_func_Ref *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_0012ed30;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "AudioStreamPlayback";
  local_30 = 0x13;
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



/* MethodBind* create_method_bind<AudioStreamPlayback, Vector<Vector2>, float, int>(Vector<Vector2>
   (AudioStreamPlayback::*)(float, int)) */

MethodBind *
create_method_bind<AudioStreamPlayback,Vector<Vector2>,float,int>(_func_Vector_float_int *param_1)

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
  *(_func_Vector_float_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012ed90;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "AudioStreamPlayback";
  local_30 = 0x13;
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



/* MethodBind* create_method_bind<AudioStreamPlayback, double>(void
   (AudioStreamPlayback::*)(double)) */

MethodBind * create_method_bind<AudioStreamPlayback,double>(_func_void_double *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_0012edf0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "AudioStreamPlayback";
  local_30 = 0x13;
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



/* MethodBind* create_method_bind<AudioStreamPlayback>(void (AudioStreamPlayback::*)()) */

MethodBind * create_method_bind<AudioStreamPlayback>(_func_void *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_0012ee50;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "AudioStreamPlayback";
  local_30 = 0x13;
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



/* MethodBind* create_method_bind<AudioStreamPlaybackResampled>(void
   (AudioStreamPlaybackResampled::*)()) */

MethodBind * create_method_bind<AudioStreamPlaybackResampled>(_func_void *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_0012ee50;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "AudioStreamPlaybackResampled";
  local_30 = 0x1c;
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



/* MethodBind* create_method_bind<AudioStream, Ref<AudioStreamPlayback>>(Ref<AudioStreamPlayback>
   (AudioStream::*)()) */

MethodBind * create_method_bind<AudioStream,Ref<AudioStreamPlayback>>(_func_Ref *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_0012efd0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "AudioStream";
  local_30 = 0xb;
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



/* MethodBind* create_method_bind<AudioStream, Ref<AudioSample>>(Ref<AudioSample> (AudioStream::*)()
   const) */

MethodBind * create_method_bind<AudioStream,Ref<AudioSample>>(_func_Ref *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_0012f030;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "AudioStream";
  local_30 = 0xb;
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



/* MethodBind* create_method_bind<AudioStreamRandomizer, int, Ref<AudioStream>, float>(void
   (AudioStreamRandomizer::*)(int, Ref<AudioStream>, float)) */

MethodBind *
create_method_bind<AudioStreamRandomizer,int,Ref<AudioStream>,float>
          (_func_void_int_Ref_float *param_1)

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
  *(_func_void_int_Ref_float **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012f090;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 3;
  local_40 = 0;
  local_38 = "AudioStreamRandomizer";
  local_30 = 0x15;
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



/* MethodBind* create_method_bind<AudioStreamRandomizer, int, int>(void
   (AudioStreamRandomizer::*)(int, int)) */

MethodBind * create_method_bind<AudioStreamRandomizer,int,int>(_func_void_int_int *param_1)

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
  *(_func_void_int_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012f0f0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "AudioStreamRandomizer";
  local_30 = 0x15;
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



/* MethodBind* create_method_bind<AudioStreamRandomizer, int>(void (AudioStreamRandomizer::*)(int))
    */

MethodBind * create_method_bind<AudioStreamRandomizer,int>(_func_void_int *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_0012f150;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "AudioStreamRandomizer";
  local_30 = 0x15;
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



/* MethodBind* create_method_bind<AudioStreamRandomizer, int, Ref<AudioStream> >(void
   (AudioStreamRandomizer::*)(int, Ref<AudioStream>)) */

MethodBind *
create_method_bind<AudioStreamRandomizer,int,Ref<AudioStream>>(_func_void_int_Ref *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_0012f1b0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "AudioStreamRandomizer";
  local_30 = 0x15;
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



/* MethodBind* create_method_bind<AudioStreamRandomizer, Ref<AudioStream>, int>(Ref<AudioStream>
   (AudioStreamRandomizer::*)(int) const) */

MethodBind * create_method_bind<AudioStreamRandomizer,Ref<AudioStream>,int>(_func_Ref_int *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_0012f210;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "AudioStreamRandomizer";
  local_30 = 0x15;
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



/* MethodBind* create_method_bind<AudioStreamRandomizer, int, float>(void
   (AudioStreamRandomizer::*)(int, float)) */

MethodBind * create_method_bind<AudioStreamRandomizer,int,float>(_func_void_int_float *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_0012f270;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "AudioStreamRandomizer";
  local_30 = 0x15;
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



/* MethodBind* create_method_bind<AudioStreamRandomizer, float, int>(float
   (AudioStreamRandomizer::*)(int) const) */

MethodBind * create_method_bind<AudioStreamRandomizer,float,int>(_func_float_int *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_0012f2d0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "AudioStreamRandomizer";
  local_30 = 0x15;
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



/* MethodBind* create_method_bind<AudioStreamRandomizer, int>(int (AudioStreamRandomizer::*)()
   const) */

MethodBind * create_method_bind<AudioStreamRandomizer,int>(_func_int *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_0012eeb0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "AudioStreamRandomizer";
  local_30 = 0x15;
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



/* MethodBind* create_method_bind<AudioStreamRandomizer, float>(void
   (AudioStreamRandomizer::*)(float)) */

MethodBind * create_method_bind<AudioStreamRandomizer,float>(_func_void_float *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_0012f330;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "AudioStreamRandomizer";
  local_30 = 0x15;
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



/* MethodBind* create_method_bind<AudioStreamRandomizer, float>(float (AudioStreamRandomizer::*)()
   const) */

MethodBind * create_method_bind<AudioStreamRandomizer,float>(_func_float *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_0012f390;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "AudioStreamRandomizer";
  local_30 = 0x15;
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



/* MethodBind* create_method_bind<AudioStreamRandomizer, AudioStreamRandomizer::PlaybackMode>(void
   (AudioStreamRandomizer::*)(AudioStreamRandomizer::PlaybackMode)) */

MethodBind *
create_method_bind<AudioStreamRandomizer,AudioStreamRandomizer::PlaybackMode>
          (_func_void_PlaybackMode *param_1)

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
  *(_func_void_PlaybackMode **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012f3f0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "AudioStreamRandomizer";
  local_30 = 0x15;
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



/* MethodBind* create_method_bind<AudioStreamRandomizer,
   AudioStreamRandomizer::PlaybackMode>(AudioStreamRandomizer::PlaybackMode
   (AudioStreamRandomizer::*)() const) */

MethodBind *
create_method_bind<AudioStreamRandomizer,AudioStreamRandomizer::PlaybackMode>
          (_func_PlaybackMode *param_1)

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
  *(_func_PlaybackMode **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012f450;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "AudioStreamRandomizer";
  local_30 = 0x15;
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<String, PropertyListHelper::Property, HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String,
   PropertyListHelper::Property> > >::operator[](String const&) */

undefined8 * __thiscall
HashMap<String,PropertyListHelper::Property,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,PropertyListHelper::Property>>>
::operator[](HashMap<String,PropertyListHelper::Property,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,PropertyListHelper::Property>>>
             *this,String *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  void *__s;
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
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  char cVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  ulong uVar39;
  undefined8 uVar40;
  void *__s_00;
  undefined8 *puVar41;
  void *pvVar42;
  int iVar43;
  long lVar44;
  long lVar45;
  ulong uVar46;
  undefined8 uVar47;
  uint uVar48;
  long lVar49;
  ulong uVar50;
  long lVar51;
  uint uVar52;
  uint *puVar53;
  uint uVar54;
  undefined8 *puVar55;
  undefined8 *puVar56;
  long in_FS_OFFSET;
  undefined4 local_118 [2];
  undefined1 local_110 [16];
  undefined4 local_100;
  long local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  int aiStack_e8 [3];
  undefined1 auStack_dc [12];
  undefined1 local_d0 [16];
  undefined1 local_b8 [16];
  long local_a8;
  undefined4 local_a0 [2];
  long local_98;
  StringName local_90 [8];
  undefined4 local_88;
  long local_80;
  undefined4 local_78;
  int local_70 [6];
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  lVar49 = *(long *)(this + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar52 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  if (lVar49 == 0) {
LAB_00120133:
    local_118[0] = 0;
    local_ec = 0;
    aiStack_e8[0] = 0;
    aiStack_e8[1] = 0;
    local_d0 = (undefined1  [16])0x0;
    uVar52 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    local_110 = (undefined1  [16])0x0;
    local_100 = 0;
    local_f8 = 0;
    local_f0 = 6;
    aiStack_e8[2] = 0;
    auStack_dc = SUB1612((undefined1  [16])0x0,4);
    if (lVar49 != 0) goto LAB_0011f9bf;
    uVar46 = (ulong)uVar52;
    uVar39 = uVar46 * 4;
    uVar50 = uVar46 * 8;
    uVar40 = Memory::alloc_static(uVar39,false);
    *(undefined8 *)(this + 0x10) = uVar40;
    pvVar42 = (void *)Memory::alloc_static(uVar50,false);
    *(void **)(this + 8) = pvVar42;
    if (uVar52 != 0) {
      pvVar2 = *(void **)(this + 0x10);
      if ((pvVar2 < (void *)((long)pvVar42 + uVar50)) && (pvVar42 < (void *)((long)pvVar2 + uVar39))
         ) {
        uVar39 = 0;
        do {
          *(undefined4 *)((long)pvVar2 + uVar39 * 4) = 0;
          *(undefined8 *)((long)pvVar42 + uVar39 * 8) = 0;
          uVar39 = uVar39 + 1;
        } while (uVar46 != uVar39);
      }
      else {
        memset(pvVar2,0,uVar39);
        memset(pvVar42,0,uVar50);
      }
      goto LAB_0011f9bf;
    }
    iVar43 = *(int *)(this + 0x2c);
    if (pvVar42 == (void *)0x0) goto LAB_0011fbaf;
    if (*(int *)(this + 0x2c) != 0) goto LAB_0011f9ce;
LAB_0011fbd5:
    uVar52 = *(uint *)(this + 0x28);
    if (uVar52 == 0x1c) {
      puVar41 = (undefined8 *)0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_001200c7;
    }
    uVar39 = (ulong)(uVar52 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar38 = *(uint *)(hash_table_size_primes + (ulong)uVar52 * 4);
    if (uVar52 + 1 < 2) {
      uVar39 = 2;
    }
    uVar52 = *(uint *)(hash_table_size_primes + uVar39 * 4);
    uVar46 = (ulong)uVar52;
    *(int *)(this + 0x28) = (int)uVar39;
    pvVar42 = *(void **)(this + 8);
    uVar39 = uVar46 * 4;
    uVar50 = uVar46 * 8;
    pvVar2 = *(void **)(this + 0x10);
    uVar40 = Memory::alloc_static(uVar39,false);
    *(undefined8 *)(this + 0x10) = uVar40;
    __s_00 = (void *)Memory::alloc_static(uVar50,false);
    *(void **)(this + 8) = __s_00;
    if (uVar52 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar50)) && (__s_00 < (void *)((long)__s + uVar39))) {
        uVar39 = 0;
        do {
          *(undefined4 *)((long)__s + uVar39 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar39 * 8) = 0;
          uVar39 = uVar39 + 1;
        } while (uVar39 != uVar46);
      }
      else {
        memset(__s,0,uVar39);
        memset(__s_00,0,uVar50);
      }
    }
    if (uVar38 != 0) {
      uVar39 = 0;
      do {
        uVar52 = *(uint *)((long)pvVar2 + uVar39 * 4);
        if (uVar52 != 0) {
          lVar49 = *(long *)(this + 0x10);
          uVar48 = 0;
          uVar37 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar50 = CONCAT44(0,uVar37);
          lVar51 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar11._8_8_ = 0;
          auVar11._0_8_ = (ulong)uVar52 * lVar51;
          auVar27._8_8_ = 0;
          auVar27._0_8_ = uVar50;
          lVar44 = SUB168(auVar11 * auVar27,8);
          puVar53 = (uint *)(lVar49 + lVar44 * 4);
          iVar43 = SUB164(auVar11 * auVar27,8);
          uVar36 = *puVar53;
          uVar40 = *(undefined8 *)((long)pvVar42 + uVar39 * 8);
          while (uVar36 != 0) {
            auVar12._8_8_ = 0;
            auVar12._0_8_ = (ulong)uVar36 * lVar51;
            auVar28._8_8_ = 0;
            auVar28._0_8_ = uVar50;
            auVar13._8_8_ = 0;
            auVar13._0_8_ = (ulong)((uVar37 + iVar43) - SUB164(auVar12 * auVar28,8)) * lVar51;
            auVar29._8_8_ = 0;
            auVar29._0_8_ = uVar50;
            uVar54 = SUB164(auVar13 * auVar29,8);
            uVar47 = uVar40;
            if (uVar54 < uVar48) {
              *puVar53 = uVar52;
              puVar41 = (undefined8 *)((long)__s_00 + lVar44 * 8);
              uVar47 = *puVar41;
              *puVar41 = uVar40;
              uVar52 = uVar36;
              uVar48 = uVar54;
            }
            uVar48 = uVar48 + 1;
            auVar14._8_8_ = 0;
            auVar14._0_8_ = (ulong)(iVar43 + 1) * lVar51;
            auVar30._8_8_ = 0;
            auVar30._0_8_ = uVar50;
            lVar44 = SUB168(auVar14 * auVar30,8);
            puVar53 = (uint *)(lVar49 + lVar44 * 4);
            iVar43 = SUB164(auVar14 * auVar30,8);
            uVar40 = uVar47;
            uVar36 = *puVar53;
          }
          *(undefined8 *)((long)__s_00 + lVar44 * 8) = uVar40;
          *puVar53 = uVar52;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar39 = uVar39 + 1;
      } while (uVar38 != uVar39);
      Memory::free_static(pvVar42,false);
      Memory::free_static(pvVar2,false);
    }
  }
  else {
    if (*(int *)(this + 0x2c) != 0) {
      lVar51 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      uVar37 = String::hash();
      uVar39 = CONCAT44(0,uVar52);
      lVar44 = *(long *)(this + 0x10);
      uVar38 = 1;
      if (uVar37 != 0) {
        uVar38 = uVar37;
      }
      auVar7._8_8_ = 0;
      auVar7._0_8_ = (ulong)uVar38 * lVar51;
      auVar23._8_8_ = 0;
      auVar23._0_8_ = uVar39;
      lVar45 = SUB168(auVar7 * auVar23,8);
      uVar37 = *(uint *)(lVar44 + lVar45 * 4);
      uVar36 = SUB164(auVar7 * auVar23,8);
      if (uVar37 == 0) {
        lVar49 = *(long *)(this + 8);
      }
      else {
        lVar49 = *(long *)(this + 8);
        uVar48 = 0;
        do {
          if (uVar38 == uVar37) {
            cVar35 = String::operator==((String *)(*(long *)(lVar49 + lVar45 * 8) + 0x10),param_1);
            if (cVar35 != '\0') {
              puVar41 = *(undefined8 **)(*(long *)(this + 8) + (ulong)uVar36 * 8);
              goto LAB_001200ec;
            }
            lVar49 = *(long *)(this + 8);
            lVar44 = *(long *)(this + 0x10);
          }
          uVar48 = uVar48 + 1;
          auVar8._8_8_ = 0;
          auVar8._0_8_ = (ulong)(uVar36 + 1) * lVar51;
          auVar24._8_8_ = 0;
          auVar24._0_8_ = uVar39;
          lVar45 = SUB168(auVar8 * auVar24,8);
          uVar37 = *(uint *)(lVar44 + lVar45 * 4);
          uVar36 = SUB164(auVar8 * auVar24,8);
        } while ((uVar37 != 0) &&
                (auVar9._8_8_ = 0, auVar9._0_8_ = (ulong)uVar37 * lVar51, auVar25._8_8_ = 0,
                auVar25._0_8_ = uVar39, auVar10._8_8_ = 0,
                auVar10._0_8_ = (ulong)((uVar36 + uVar52) - SUB164(auVar9 * auVar25,8)) * lVar51,
                auVar26._8_8_ = 0, auVar26._0_8_ = uVar39, uVar48 <= SUB164(auVar10 * auVar26,8)));
      }
      goto LAB_00120133;
    }
    local_118[0] = 0;
    local_ec = 0;
    aiStack_e8[0] = 0;
    aiStack_e8[1] = 0;
    local_d0 = (undefined1  [16])0x0;
    uVar52 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    local_100 = 0;
    local_f8 = 0;
    local_f0 = 6;
    local_110 = (undefined1  [16])0x0;
    aiStack_e8[2] = 0;
    auStack_dc = SUB1612((undefined1  [16])0x0,4);
LAB_0011f9bf:
    iVar43 = *(int *)(this + 0x2c);
    uVar46 = (ulong)uVar52;
    if (iVar43 != 0) {
LAB_0011f9ce:
      uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      lVar49 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      uVar36 = String::hash();
      uVar39 = CONCAT44(0,uVar38);
      lVar51 = *(long *)(this + 0x10);
      uVar37 = 1;
      if (uVar36 != 0) {
        uVar37 = uVar36;
      }
      uVar54 = 0;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)uVar37 * lVar49;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = uVar39;
      lVar44 = SUB168(auVar3 * auVar19,8);
      uVar36 = *(uint *)(lVar51 + lVar44 * 4);
      uVar48 = SUB164(auVar3 * auVar19,8);
      if (uVar36 != 0) {
        do {
          if (uVar37 == uVar36) {
            cVar35 = String::operator==((String *)
                                        (*(long *)(*(long *)(this + 8) + lVar44 * 8) + 0x10),param_1
                                       );
            if (cVar35 != '\0') {
              lVar49 = *(long *)(*(long *)(this + 8) + (ulong)uVar48 * 8);
              *(undefined4 *)(lVar49 + 0x18) = local_118[0];
              if (*(long *)(lVar49 + 0x20) != local_110._0_8_) {
                CowData<char32_t>::_ref((CowData<char32_t> *)(lVar49 + 0x20),(CowData *)local_110);
              }
              StringName::operator=((StringName *)(lVar49 + 0x28),(StringName *)(local_110 + 8));
              *(undefined4 *)(lVar49 + 0x30) = local_100;
              if (*(long *)(lVar49 + 0x38) != local_f8) {
                CowData<char32_t>::_ref((CowData<char32_t> *)(lVar49 + 0x38),(CowData *)&local_f8);
              }
              *(undefined4 *)(lVar49 + 0x40) = local_f0;
              Variant::operator=((Variant *)(lVar49 + 0x48),(Variant *)aiStack_e8);
              puVar41 = *(undefined8 **)(*(long *)(this + 8) + (ulong)uVar48 * 8);
              *(undefined8 *)(lVar49 + 0x60) = local_d0._0_8_;
              *(undefined8 *)(lVar49 + 0x68) = local_d0._8_8_;
              goto LAB_001200c7;
            }
            lVar51 = *(long *)(this + 0x10);
          }
          uVar54 = uVar54 + 1;
          auVar4._8_8_ = 0;
          auVar4._0_8_ = (ulong)(uVar48 + 1) * lVar49;
          auVar20._8_8_ = 0;
          auVar20._0_8_ = uVar39;
          lVar44 = SUB168(auVar4 * auVar20,8);
          uVar36 = *(uint *)(lVar51 + lVar44 * 4);
          uVar48 = SUB164(auVar4 * auVar20,8);
        } while ((uVar36 != 0) &&
                (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar36 * lVar49, auVar21._8_8_ = 0,
                auVar21._0_8_ = uVar39, auVar6._8_8_ = 0,
                auVar6._0_8_ = (ulong)((uVar38 + uVar48) - SUB164(auVar5 * auVar21,8)) * lVar49,
                auVar22._8_8_ = 0, auVar22._0_8_ = uVar39, uVar54 <= SUB164(auVar6 * auVar22,8)));
      }
      iVar43 = *(int *)(this + 0x2c);
      uVar46 = (ulong)uVar52;
    }
LAB_0011fbaf:
    if ((float)uVar46 * __LC71 < (float)(iVar43 + 1)) goto LAB_0011fbd5;
  }
  local_a8 = 0;
  local_b8 = (undefined1  [16])0x0;
  if (*(long *)param_1 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_a8,(CowData *)param_1);
  }
  local_98 = 0;
  local_a0[0] = local_118[0];
  if (local_110._0_8_ != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_98,(CowData *)local_110);
  }
  StringName::StringName(local_90,(StringName *)(local_110 + 8));
  local_80 = 0;
  local_88 = local_100;
  if (local_f8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_80,(CowData *)&local_f8);
  }
  local_78 = local_f0;
  Variant::Variant((Variant *)local_70,(Variant *)aiStack_e8);
  local_58 = local_d0._0_8_;
  uStack_50 = local_d0._8_8_;
  puVar41 = (undefined8 *)operator_new(0x70,"");
  puVar41[2] = 0;
  *puVar41 = local_b8._0_8_;
  puVar41[1] = local_b8._8_8_;
  if (local_a8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar41 + 2),(CowData *)&local_a8);
  }
  puVar41[4] = 0;
  *(undefined4 *)(puVar41 + 3) = local_a0[0];
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar41 + 4),(CowData *)&local_98);
  }
  StringName::StringName((StringName *)(puVar41 + 5),local_90);
  puVar41[7] = 0;
  *(undefined4 *)(puVar41 + 6) = local_88;
  if (local_80 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar41 + 7),(CowData *)&local_80);
  }
  *(undefined4 *)(puVar41 + 8) = local_78;
  Variant::Variant((Variant *)(puVar41 + 9),(Variant *)local_70);
  puVar41[0xc] = local_58;
  puVar41[0xd] = uStack_50;
  if (Variant::needs_deinit[local_70[0]] != '\0') {
    Variant::_clear_internal();
  }
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  if (*(undefined8 **)(this + 0x20) == (undefined8 *)0x0) {
    *(undefined8 **)(this + 0x18) = puVar41;
  }
  else {
    **(undefined8 **)(this + 0x20) = puVar41;
    puVar41[1] = *(undefined8 *)(this + 0x20);
  }
  *(undefined8 **)(this + 0x20) = puVar41;
  uVar38 = String::hash();
  lVar49 = *(long *)(this + 0x10);
  uVar52 = 1;
  if (uVar38 != 0) {
    uVar52 = uVar38;
  }
  lVar51 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar39 = CONCAT44(0,uVar38);
  auVar15._8_8_ = 0;
  auVar15._0_8_ = (ulong)uVar52 * lVar51;
  auVar31._8_8_ = 0;
  auVar31._0_8_ = uVar39;
  lVar45 = SUB168(auVar15 * auVar31,8);
  lVar44 = *(long *)(this + 8);
  puVar53 = (uint *)(lVar49 + lVar45 * 4);
  iVar43 = SUB164(auVar15 * auVar31,8);
  uVar37 = *puVar53;
  puVar56 = puVar41;
  if (uVar37 != 0) {
    uVar36 = 0;
    puVar55 = puVar41;
    do {
      auVar16._8_8_ = 0;
      auVar16._0_8_ = (ulong)uVar37 * lVar51;
      auVar32._8_8_ = 0;
      auVar32._0_8_ = uVar39;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = (ulong)((iVar43 + uVar38) - SUB164(auVar16 * auVar32,8)) * lVar51;
      auVar33._8_8_ = 0;
      auVar33._0_8_ = uVar39;
      uVar48 = SUB164(auVar17 * auVar33,8);
      puVar56 = puVar55;
      if (uVar48 < uVar36) {
        *puVar53 = uVar52;
        puVar1 = (undefined8 *)(lVar44 + lVar45 * 8);
        puVar56 = (undefined8 *)*puVar1;
        *puVar1 = puVar55;
        uVar36 = uVar48;
        uVar52 = uVar37;
      }
      uVar36 = uVar36 + 1;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = (ulong)(iVar43 + 1) * lVar51;
      auVar34._8_8_ = 0;
      auVar34._0_8_ = uVar39;
      lVar45 = SUB168(auVar18 * auVar34,8);
      puVar53 = (uint *)(lVar49 + lVar45 * 4);
      iVar43 = SUB164(auVar18 * auVar34,8);
      uVar37 = *puVar53;
      puVar55 = puVar56;
    } while (uVar37 != 0);
  }
  *(undefined8 **)(lVar44 + lVar45 * 8) = puVar56;
  *puVar53 = uVar52;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_001200c7:
  if (Variant::needs_deinit[aiStack_e8[0]] != '\0') {
    Variant::_clear_internal();
  }
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_118);
LAB_001200ec:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar41 + 3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<Vector2>::_realloc(long) */

undefined8 __thiscall CowData<Vector2>::_realloc(CowData<Vector2> *this,long param_1)

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



/* GetTypeInfo<AudioStreamRandomizer::PlaybackMode, void>::get_class_info() */

GetTypeInfo<AudioStreamRandomizer::PlaybackMode,void> * __thiscall
GetTypeInfo<AudioStreamRandomizer::PlaybackMode,void>::get_class_info
          (GetTypeInfo<AudioStreamRandomizer::PlaybackMode,void> *this)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long in_FS_OFFSET;
  undefined8 local_80;
  CowData<char32_t> local_78 [8];
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = 0;
  local_58 = "AudioStreamRandomizer::PlaybackMode";
  local_50 = 0x23;
  String::parse_latin1((StrRange *)&local_80);
  String::split((char *)&local_68,SUB81((StrRange *)&local_80,0),0x1204f4);
  if ((local_60 != 0) && (2 < *(long *)(local_60 + -8))) {
    local_70 = 0;
    local_58 = ".";
    local_50 = 1;
    String::parse_latin1((StrRange *)&local_70);
    if (local_60 == 0) {
      lVar2 = -2;
      lVar3 = 0;
    }
    else {
      lVar3 = *(long *)(local_60 + -8);
      lVar2 = lVar3 + -2;
      if (-1 < lVar2) {
        String::operator+((String *)&local_58,(String *)(local_60 + lVar2 * 8));
        String::operator+((String *)local_78,(String *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        goto LAB_001205d5;
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
  local_70 = 0;
  local_58 = ".";
  local_50 = 1;
  String::parse_latin1((StrRange *)&local_70);
  String::join(local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
LAB_001205d5:
  CowData<String>::_unref((CowData<String> *)&local_60);
  StringName::StringName((StringName *)&local_58,(String *)local_78,false);
  *(undefined4 *)this = 2;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 0x10006;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  local_68 = 0;
  local_70 = 0;
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  if ((StringName::configured != '\0') && (local_58 != (undefined *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref(local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<AudioStreamRandomizer::PlaybackMode>::_gen_argument_type_info(int) const */

undefined8 MethodBindTRC<AudioStreamRandomizer::PlaybackMode>::_gen_argument_type_info(int param_1)

{
  long lVar1;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  GetTypeInfo<AudioStreamRandomizer::PlaybackMode,void>::get_class_info
            ((GetTypeInfo<AudioStreamRandomizer::PlaybackMode,void> *)
             CONCAT44(in_register_0000003c,param_1));
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return CONCAT44(in_register_0000003c,param_1);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<AudioStreamRandomizer::PlaybackMode>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<AudioStreamRandomizer::PlaybackMode>::_gen_argument_type_info(int param_1)

{
  long lVar1;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar2;
  long in_FS_OFFSET;
  undefined4 local_48 [2];
  long local_40;
  long local_38;
  undefined4 local_30;
  long local_28;
  undefined4 local_20;
  long local_10;
  
  puVar2 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar2 = 0;
  puVar2[6] = 0;
  *(undefined8 *)(puVar2 + 8) = 0;
  puVar2[10] = 6;
  *(undefined1 (*) [16])(puVar2 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    GetTypeInfo<AudioStreamRandomizer::PlaybackMode,void>::get_class_info
              ((GetTypeInfo<AudioStreamRandomizer::PlaybackMode,void> *)local_48);
    *puVar2 = local_48[0];
    if (*(long *)(puVar2 + 2) != local_40) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + 2));
      lVar1 = local_40;
      local_40 = 0;
      *(long *)(puVar2 + 2) = lVar1;
    }
    if (*(long *)(puVar2 + 4) != local_38) {
      StringName::unref();
      lVar1 = local_38;
      local_38 = 0;
      *(long *)(puVar2 + 4) = lVar1;
    }
    puVar2[6] = local_30;
    if (*(long *)(puVar2 + 8) != local_28) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + 8));
      lVar1 = local_28;
      local_28 = 0;
      *(long *)(puVar2 + 8) = lVar1;
    }
    puVar2[10] = local_20;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_28);
    if ((StringName::configured != '\0') && (local_38 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AudioStreamMicrophone::_initialize_classv() */

void AudioStreamMicrophone::_initialize_classv(void)

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
    if (AudioStream::initialize_class()::initialized == '\0') {
      AudioStream::initialize_class();
    }
    local_58 = 0;
    local_40 = 0xb;
    local_48 = "AudioStream";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "AudioStreamMicrophone";
    local_60 = 0;
    local_40 = 0x15;
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
    initialize_class()::initialized = '\x01';
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AudioStreamRandomizer::_initialize_classv() */

void AudioStreamRandomizer::_initialize_classv(void)

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
    if (AudioStream::initialize_class()::initialized == '\0') {
      AudioStream::initialize_class();
    }
    local_58 = 0;
    local_40 = 0xb;
    local_48 = "AudioStream";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "AudioStreamRandomizer";
    local_60 = 0;
    local_40 = 0x15;
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



/* AudioStream::_initialize_classv() */

void AudioStream::_initialize_classv(void)

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
        if ((code *)PTR__bind_methods_00137008 != RefCounted::_bind_methods) {
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
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
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
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
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
LAB_00121220:
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
  if (lVar10 == 0) goto LAB_00121220;
  if (param_1 <= lVar6) {
    lVar6 = *(long *)this;
    uVar8 = param_1;
    while (lVar6 != 0) {
      if (*(ulong *)(lVar6 + -8) <= uVar8) {
LAB_001210f9:
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
        if (*(ulong *)(lVar6 + -8) <= uVar8) goto LAB_001210f9;
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
    goto LAB_00121276;
  }
  if (lVar10 == lVar7) {
LAB_0012119f:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
LAB_00121276:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar6 = puVar9[-1];
    if (param_1 <= lVar6) goto LAB_0012118a;
  }
  else {
    if (lVar6 != 0) {
      uVar4 = _realloc(this,lVar10);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      goto LAB_0012119f;
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
LAB_0012118a:
  puVar9[-1] = param_1;
  return 0;
}



/* CowData<unsigned int>::_unref() */

void __thiscall CowData<unsigned_int>::_unref(CowData<unsigned_int> *this)

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



/* CowData<AudioFrame>::_realloc(long) */

undefined8 __thiscall CowData<AudioFrame>::_realloc(CowData<AudioFrame> *this,long param_1)

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



/* CowData<AudioStreamRandomizer::PoolEntry>::_unref() */

void __thiscall
CowData<AudioStreamRandomizer::PoolEntry>::_unref(CowData<AudioStreamRandomizer::PoolEntry> *this)

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
LAB_0012138d:
    do {
      if (*plVar6 != 0) {
        cVar5 = RefCounted::unreference();
        if (cVar5 != '\0') {
          pOVar3 = (Object *)*plVar6;
          cVar5 = predelete_handler(pOVar3);
          if (cVar5 != '\0') {
            lVar7 = lVar7 + 1;
            plVar6 = plVar6 + 2;
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
            if (lVar2 == lVar7) break;
            goto LAB_0012138d;
          }
        }
      }
      lVar7 = lVar7 + 1;
      plVar6 = plVar6 + 2;
    } while (lVar2 != lVar7);
  }
  Memory::free_static(plVar1 + -2,false);
  return;
}



/* AudioStreamRandomizer::~AudioStreamRandomizer() */

void __thiscall AudioStreamRandomizer::~AudioStreamRandomizer(AudioStreamRandomizer *this)

{
  uint uVar1;
  Object *pOVar2;
  char cVar3;
  long lVar4;
  void *pvVar5;
  bool bVar6;
  
  *(undefined ***)this = &PTR__initialize_classv_0012e8c8;
  if (*(long *)(this + 0x3d0) != 0) {
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      pOVar2 = *(Object **)(this + 0x3d0);
      cVar3 = predelete_handler(pOVar2);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
  CowData<AudioStreamRandomizer::PoolEntry>::_unref
            ((CowData<AudioStreamRandomizer::PoolEntry> *)(this + 0x3c0));
  pvVar5 = *(void **)(this + 0x390);
  if (pvVar5 != (void *)0x0) {
    if (*(int *)(this + 0x3b4) != 0) {
      if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x3b0) * 4) != 0) {
        memset(*(void **)(this + 0x3a8),0,
               (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x3b0) * 4) << 2);
      }
      *(undefined4 *)(this + 0x3b4) = 0;
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x3a0),false);
    Memory::free_static(*(void **)(this + 0x398),false);
    Memory::free_static(*(void **)(this + 0x3a8),false);
  }
  pvVar5 = *(void **)(this + 0x360);
  if (pvVar5 != (void *)0x0) {
    if (*(int *)(this + 900) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x380) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 900) = 0;
        *(undefined1 (*) [16])(this + 0x370) = (undefined1  [16])0x0;
      }
      else {
        lVar4 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x368) + lVar4) != 0) {
            pvVar5 = *(void **)((long)pvVar5 + lVar4 * 2);
            *(int *)(*(long *)(this + 0x368) + lVar4) = 0;
            if (Variant::needs_deinit[*(int *)((long)pvVar5 + 0x48)] != '\0') {
              Variant::_clear_internal();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar5 + 0x38));
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar5 + 0x28) != 0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar5 + 0x20));
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar5 + 0x10));
            Memory::free_static(pvVar5,false);
            pvVar5 = *(void **)(this + 0x360);
            *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
          }
          lVar4 = lVar4 + 4;
        } while (lVar4 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 900) = 0;
        *(undefined1 (*) [16])(this + 0x370) = (undefined1  [16])0x0;
        if (pvVar5 == (void *)0x0) goto LAB_001215c4;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x368),false);
  }
LAB_001215c4:
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x348));
  bVar6 = StringName::configured != '\0';
  *(undefined ***)this = &PTR__initialize_classv_0012e278;
  if (bVar6) {
    if (*(long *)(this + 0x330) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00121705;
    }
    if (*(long *)(this + 0x318) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00121705;
    }
    if (*(long *)(this + 0x300) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00121705;
    }
    if (*(long *)(this + 0x2e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00121705;
    }
    if (*(long *)(this + 0x2d0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00121705;
    }
    if (*(long *)(this + 0x2b8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00121705;
    }
    if (*(long *)(this + 0x2a0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00121705;
    }
    if (*(long *)(this + 0x288) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00121705;
    }
    if (*(long *)(this + 0x270) != 0) {
      StringName::unref();
    }
  }
LAB_00121705:
  Resource::~Resource((Resource *)this);
  return;
}



/* AudioStreamRandomizer::~AudioStreamRandomizer() */

void __thiscall AudioStreamRandomizer::~AudioStreamRandomizer(AudioStreamRandomizer *this)

{
  ~AudioStreamRandomizer(this);
  operator_delete(this,0x3e0);
  return;
}



/* CowData<AudioStreamRandomizer::PoolEntry>::_realloc(long) */

undefined8 __thiscall
CowData<AudioStreamRandomizer::PoolEntry>::_realloc
          (CowData<AudioStreamRandomizer::PoolEntry> *this,long param_1)

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
/* Error CowData<AudioStreamRandomizer::PoolEntry>::resize<false>(long) */

undefined8 __thiscall
CowData<AudioStreamRandomizer::PoolEntry>::resize<false>
          (CowData<AudioStreamRandomizer::PoolEntry> *this,long param_1)

{
  Object *pOVar1;
  code *pcVar2;
  undefined4 uVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  
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
    lVar8 = 0;
    lVar10 = 0;
  }
  else {
    lVar8 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar8) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar10 = lVar8 * 0x10;
    if (lVar10 != 0) {
      uVar11 = lVar10 - 1U | lVar10 - 1U >> 1;
      uVar11 = uVar11 | uVar11 >> 2;
      uVar11 = uVar11 | uVar11 >> 4;
      uVar11 = uVar11 | uVar11 >> 8;
      uVar11 = uVar11 | uVar11 >> 0x10;
      lVar10 = (uVar11 | uVar11 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x10 == 0) {
LAB_00121b20:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar11 = param_1 * 0x10 - 1;
  uVar11 = uVar11 >> 1 | uVar11;
  uVar11 = uVar11 | uVar11 >> 2;
  uVar11 = uVar11 | uVar11 >> 4;
  uVar11 = uVar11 | uVar11 >> 8;
  uVar11 = uVar11 | uVar11 >> 0x10;
  uVar11 = uVar11 | uVar11 >> 0x20;
  lVar12 = uVar11 + 1;
  if (lVar12 == 0) goto LAB_00121b20;
  if (param_1 <= lVar8) {
    lVar8 = *(long *)this;
    uVar11 = param_1;
    while (lVar8 != 0) {
      if (*(ulong *)(lVar8 + -8) <= uVar11) {
LAB_001219aa:
        if (lVar12 != lVar10) {
          uVar5 = _realloc(this,lVar12);
          if ((int)uVar5 != 0) {
            return uVar5;
          }
          lVar8 = *(long *)this;
          if (lVar8 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
        }
        *(long *)(lVar8 + -8) = param_1;
        return 0;
      }
      while (plVar13 = (long *)(uVar11 * 0x10 + lVar8), *plVar13 == 0) {
        uVar11 = uVar11 + 1;
        if (*(ulong *)(lVar8 + -8) <= uVar11) goto LAB_001219aa;
      }
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') {
        pOVar1 = (Object *)*plVar13;
        cVar4 = predelete_handler(pOVar1);
        if (cVar4 != '\0') {
          (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
          Memory::free_static(pOVar1,false);
        }
      }
      uVar11 = uVar11 + 1;
      lVar8 = *(long *)this;
    }
    goto LAB_00121976;
  }
  if (lVar12 == lVar10) {
LAB_00121a93:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
LAB_00121976:
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar8 = puVar9[-1];
    if (param_1 <= lVar8) goto LAB_00121a75;
  }
  else {
    if (lVar8 != 0) {
      uVar5 = _realloc(this,lVar12);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      goto LAB_00121a93;
    }
    puVar6 = (undefined8 *)Memory::alloc_static(uVar11 + 0x11,false);
    if (puVar6 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar9 = puVar6 + 2;
    *puVar6 = 1;
    puVar6[1] = 0;
    *(undefined8 **)this = puVar9;
    lVar8 = 0;
  }
  uVar3 = _LC1;
  puVar6 = puVar9 + lVar8 * 2;
  do {
    *puVar6 = 0;
    puVar7 = puVar6 + 2;
    *(undefined4 *)(puVar6 + 1) = uVar3;
    puVar6 = puVar7;
  } while (puVar7 != puVar9 + param_1 * 2);
LAB_00121a75:
  puVar9[-1] = param_1;
  return 0;
}



/* Vector<AudioStreamRandomizer::PoolEntry>::remove_at(long) */

void __thiscall
Vector<AudioStreamRandomizer::PoolEntry>::remove_at
          (Vector<AudioStreamRandomizer::PoolEntry> *this,long param_1)

{
  Object *pOVar1;
  Object *pOVar2;
  char cVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)(this + 8);
  if (param_1 < 0) {
    if (lVar5 != 0) {
      lVar5 = *(long *)(lVar5 + -8);
      goto LAB_00121c89;
    }
  }
  else if (lVar5 != 0) {
    lVar5 = *(long *)(lVar5 + -8);
    if (param_1 < lVar5) {
      CowData<AudioStreamRandomizer::PoolEntry>::_copy_on_write
                ((CowData<AudioStreamRandomizer::PoolEntry> *)(this + 8));
      lVar5 = *(long *)(this + 8);
      if (lVar5 == 0) {
        lVar6 = -1;
      }
      else {
        lVar6 = *(long *)(lVar5 + -8) + -1;
        if (param_1 < lVar6) {
          plVar4 = (long *)(lVar5 + param_1 * 0x10);
          do {
            pOVar1 = (Object *)plVar4[2];
            pOVar2 = (Object *)*plVar4;
            if (pOVar1 != pOVar2) {
              *plVar4 = (long)pOVar1;
              if (pOVar1 != (Object *)0x0) {
                cVar3 = RefCounted::reference();
                if (cVar3 == '\0') {
                  *plVar4 = 0;
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
            param_1 = param_1 + 1;
            *(int *)(plVar4 + 1) = (int)plVar4[3];
            plVar4 = plVar4 + 2;
          } while (param_1 != lVar6);
        }
      }
      CowData<AudioStreamRandomizer::PoolEntry>::resize<false>
                ((CowData<AudioStreamRandomizer::PoolEntry> *)(this + 8),lVar6);
      return;
    }
    goto LAB_00121c89;
  }
  lVar5 = 0;
LAB_00121c89:
  _err_print_index_error
            ("remove_at","./core/templates/cowdata.h",0xe4,param_1,lVar5,"p_index","size()","",false
             ,false);
  return;
}



/* CowData<Ref<AudioStream> >::_unref() */

void __thiscall CowData<Ref<AudioStream>>::_unref(CowData<Ref<AudioStream>> *this)

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
LAB_00121d3d:
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
            goto LAB_00121d3d;
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



/* CowData<int>::_realloc(long) */

undefined8 __thiscall CowData<int>::_realloc(CowData<int> *this,long param_1)

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
/* Error CowData<int>::resize<false>(long) */

undefined8 __thiscall CowData<int>::resize<false>(CowData<int> *this,long param_1)

{
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
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return 0x1f;
  }
  lVar3 = *(long *)this;
  if (lVar3 == 0) {
    if (param_1 == 0) {
      return 0;
    }
    _copy_on_write(this);
    lVar9 = 0;
    lVar3 = 0;
  }
  else {
    lVar9 = *(long *)(lVar3 + -8);
    if (param_1 == lVar9) {
      return 0;
    }
    if (param_1 == 0) {
      LOCK();
      plVar1 = (long *)(lVar3 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) {
        *(undefined8 *)this = 0;
        return 0;
      }
      lVar3 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
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
      lVar3 = (uVar4 | uVar4 >> 0x20) + 1;
    }
  }
  if (param_1 * 4 == 0) {
LAB_00122040:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
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
  if (lVar8 == 0) goto LAB_00122040;
  if (lVar9 < param_1) {
    if (lVar8 != lVar3) {
      if (lVar9 == 0) {
        puVar5 = (undefined8 *)Memory::alloc_static(uVar4 + 0x11,false);
        if (puVar5 == (undefined8 *)0x0) {
          _err_print_error("resize","./core/templates/cowdata.h",0x171,
                           "Parameter \"mem_new\" is null.",0,0);
          return 6;
        }
        puVar7 = puVar5 + 2;
        *puVar5 = 1;
        puVar5[1] = 0;
        *(undefined8 **)this = puVar7;
        goto LAB_00121f51;
      }
      uVar6 = _realloc(this,lVar8);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
    }
    puVar7 = *(undefined8 **)this;
    if (puVar7 != (undefined8 *)0x0) {
LAB_00121f51:
      puVar7[-1] = param_1;
      return 0;
    }
  }
  else {
    if ((lVar8 != lVar3) && (uVar6 = _realloc(this,lVar8), (int)uVar6 != 0)) {
      return uVar6;
    }
    if (*(long *)this != 0) {
      *(long *)(*(long *)this + -8) = param_1;
      return 0;
    }
  }
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



/* AudioStreamPlaybackMicrophone::_initialize_classv() */

void AudioStreamPlaybackMicrophone::_initialize_classv(void)

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
    if (AudioStreamPlaybackResampled::initialize_class()::initialized == '\0') {
      if (AudioStreamPlayback::initialize_class()::initialized == '\0') {
        if (RefCounted::initialize_class()::initialized == '\0') {
          Object::initialize_class();
          local_58 = 0;
          local_40 = 6;
          local_48 = "Object";
          String::parse_latin1((StrRange *)&local_58);
          StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
          local_48 = "RefCounted";
          local_60 = 0;
          local_40 = 10;
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
          if ((code *)PTR__bind_methods_00137010 != Object::_bind_methods) {
            RefCounted::_bind_methods();
          }
          RefCounted::initialize_class()::initialized = '\x01';
        }
        local_48 = "RefCounted";
        local_58 = 0;
        local_40 = 10;
        String::parse_latin1((StrRange *)&local_58);
        StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
        local_48 = "AudioStreamPlayback";
        local_60 = 0;
        local_40 = 0x13;
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
        AudioStreamPlayback::_bind_methods();
        AudioStreamPlayback::initialize_class()::initialized = '\x01';
      }
      local_48 = "AudioStreamPlayback";
      local_58 = 0;
      local_40 = 0x13;
      String::parse_latin1((StrRange *)&local_58);
      StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
      local_48 = "AudioStreamPlaybackResampled";
      local_60 = 0;
      local_40 = 0x1c;
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
      AudioStreamPlaybackResampled::_bind_methods();
      AudioStreamPlaybackResampled::initialize_class()::initialized = '\x01';
    }
    local_48 = "AudioStreamPlaybackResampled";
    local_58 = 0;
    local_40 = 0x1c;
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "AudioStreamPlaybackMicrophone";
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
    initialize_class()::initialized = '\x01';
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* AudioStreamPlayback::_initialize_classv() */

void AudioStreamPlayback::_initialize_classv(void)

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
    if (RefCounted::initialize_class()::initialized == '\0') {
      Object::initialize_class();
      local_58 = 0;
      local_40 = 6;
      local_48 = "Object";
      String::parse_latin1((StrRange *)&local_58);
      StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
      local_48 = "RefCounted";
      local_60 = 0;
      local_40 = 10;
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
      if ((code *)PTR__bind_methods_00137010 != Object::_bind_methods) {
        RefCounted::_bind_methods();
      }
      RefCounted::initialize_class()::initialized = '\x01';
    }
    local_48 = "RefCounted";
    local_58 = 0;
    local_40 = 10;
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "AudioStreamPlayback";
    local_60 = 0;
    local_40 = 0x13;
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
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* AudioStreamPlaybackRandomizer::_initialize_classv() */

void AudioStreamPlaybackRandomizer::_initialize_classv(void)

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
    if (AudioStreamPlayback::initialize_class()::initialized == '\0') {
      if (RefCounted::initialize_class()::initialized == '\0') {
        Object::initialize_class();
        local_58 = 0;
        local_40 = 6;
        local_48 = "Object";
        String::parse_latin1((StrRange *)&local_58);
        StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
        local_48 = "RefCounted";
        local_60 = 0;
        local_40 = 10;
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
        if ((code *)PTR__bind_methods_00137010 != Object::_bind_methods) {
          RefCounted::_bind_methods();
        }
        RefCounted::initialize_class()::initialized = '\x01';
      }
      local_48 = "RefCounted";
      local_58 = 0;
      local_40 = 10;
      String::parse_latin1((StrRange *)&local_58);
      StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
      local_48 = "AudioStreamPlayback";
      local_60 = 0;
      local_40 = 0x13;
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
      AudioStreamPlayback::_bind_methods();
      AudioStreamPlayback::initialize_class()::initialized = '\x01';
    }
    local_48 = "AudioStreamPlayback";
    local_58 = 0;
    local_40 = 0x13;
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "AudioStreamPlaybackRandomizer";
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
    initialize_class()::initialized = '\x01';
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* AudioStreamPlaybackResampled::_initialize_classv() */

void AudioStreamPlaybackResampled::_initialize_classv(void)

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
    if (AudioStreamPlayback::initialize_class()::initialized == '\0') {
      if (RefCounted::initialize_class()::initialized == '\0') {
        Object::initialize_class();
        local_58 = 0;
        local_40 = 6;
        local_48 = "Object";
        String::parse_latin1((StrRange *)&local_58);
        StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
        local_48 = "RefCounted";
        local_60 = 0;
        local_40 = 10;
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
        if ((code *)PTR__bind_methods_00137010 != Object::_bind_methods) {
          RefCounted::_bind_methods();
        }
        RefCounted::initialize_class()::initialized = '\x01';
      }
      local_48 = "RefCounted";
      local_58 = 0;
      local_40 = 10;
      String::parse_latin1((StrRange *)&local_58);
      StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
      local_48 = "AudioStreamPlayback";
      local_60 = 0;
      local_40 = 0x13;
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
      AudioStreamPlayback::_bind_methods();
      AudioStreamPlayback::initialize_class()::initialized = '\x01';
    }
    local_48 = "AudioStreamPlayback";
    local_58 = 0;
    local_40 = 0x13;
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "AudioStreamPlaybackResampled";
    local_60 = 0;
    local_40 = 0x1c;
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
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CowData<Ref<AudioStream> >::_realloc(long) */

undefined8 __thiscall
CowData<Ref<AudioStream>>::_realloc(CowData<Ref<AudioStream>> *this,long param_1)

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
/* Error CowData<Ref<AudioStream> >::resize<false>(long) */

undefined8 __thiscall
CowData<Ref<AudioStream>>::resize<false>(CowData<Ref<AudioStream>> *this,long param_1)

{
  long *plVar1;
  Object *pOVar2;
  code *pcVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  
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
    lVar7 = 0;
    lVar8 = 0;
  }
  else {
    lVar7 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar7) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar8 = lVar7 * 8;
    if (lVar8 != 0) {
      uVar9 = lVar8 - 1U | lVar8 - 1U >> 1;
      uVar9 = uVar9 | uVar9 >> 2;
      uVar9 = uVar9 | uVar9 >> 4;
      uVar9 = uVar9 | uVar9 >> 8;
      uVar9 = uVar9 | uVar9 >> 0x10;
      lVar8 = (uVar9 | uVar9 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 == 0) {
LAB_00123050:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar9 = param_1 * 8 - 1;
  uVar9 = uVar9 >> 1 | uVar9;
  uVar9 = uVar9 | uVar9 >> 2;
  uVar9 = uVar9 | uVar9 >> 4;
  uVar9 = uVar9 | uVar9 >> 8;
  uVar9 = uVar9 | uVar9 >> 0x10;
  uVar9 = uVar9 | uVar9 >> 0x20;
  lVar11 = uVar9 + 1;
  if (lVar11 == 0) goto LAB_00123050;
  if (param_1 <= lVar7) {
    lVar7 = *(long *)this;
    uVar9 = param_1;
    while (lVar7 != 0) {
      if (*(ulong *)(lVar7 + -8) <= uVar9) {
LAB_00122efa:
        if (lVar11 != lVar8) {
          uVar5 = _realloc(this,lVar11);
          if ((int)uVar5 != 0) {
            return uVar5;
          }
          lVar7 = *(long *)this;
          if (lVar7 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
        }
        *(long *)(lVar7 + -8) = param_1;
        return 0;
      }
      while (plVar1 = (long *)(lVar7 + uVar9 * 8), *plVar1 == 0) {
        uVar9 = uVar9 + 1;
        if (*(ulong *)(lVar7 + -8) <= uVar9) goto LAB_00122efa;
      }
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') {
        pOVar2 = (Object *)*plVar1;
        cVar4 = predelete_handler(pOVar2);
        if (cVar4 != '\0') {
          (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
          Memory::free_static(pOVar2,false);
        }
      }
      uVar9 = uVar9 + 1;
      lVar7 = *(long *)this;
    }
    goto LAB_00122ec0;
  }
  if (lVar11 == lVar8) {
LAB_00122fcb:
    puVar10 = *(undefined8 **)this;
    if (puVar10 == (undefined8 *)0x0) {
LAB_00122ec0:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar7 = puVar10[-1];
    if (param_1 <= lVar7) goto LAB_00122fab;
  }
  else {
    if (lVar7 != 0) {
      uVar5 = _realloc(this,lVar11);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      goto LAB_00122fcb;
    }
    puVar6 = (undefined8 *)Memory::alloc_static(uVar9 + 0x11,false);
    if (puVar6 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar10 = puVar6 + 2;
    *puVar6 = 1;
    puVar6[1] = 0;
    *(undefined8 **)this = puVar10;
    lVar7 = 0;
  }
  memset(puVar10 + lVar7,0,(param_1 - lVar7) * 8);
LAB_00122fab:
  puVar10[-1] = param_1;
  return 0;
}



/* WARNING: Removing unreachable block (ram,0x00123248) */
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



/* MethodBindTRC<AudioStreamRandomizer::PlaybackMode>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTRC<AudioStreamRandomizer::PlaybackMode>::call
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
      _err_print_error(&_LC212,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_001235c0;
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
LAB_001235c0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<AudioStreamRandomizer::PlaybackMode>::validated_call(Object*, Variant const**,
   Variant*) const */

void __thiscall
MethodBindTRC<AudioStreamRandomizer::PlaybackMode>::validated_call
          (MethodBindTRC<AudioStreamRandomizer::PlaybackMode> *this,Object *param_1,
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
      goto LAB_00123864;
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
LAB_00123864:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<AudioStreamRandomizer::PlaybackMode>::ptrcall(Object*, void const**, void*) const
    */

void __thiscall
MethodBindTRC<AudioStreamRandomizer::PlaybackMode>::ptrcall
          (MethodBindTRC<AudioStreamRandomizer::PlaybackMode> *this,Object *param_1,void **param_2,
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
      goto LAB_00123a23;
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
LAB_00123a23:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<AudioStreamRandomizer::PlaybackMode>::validated_call(Object*, Variant const**,
   Variant*) const */

void MethodBindT<AudioStreamRandomizer::PlaybackMode>::validated_call
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
      goto LAB_00123d61;
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
                    /* WARNING: Could not recover jumptable at 0x00123bec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_00123d61:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<AudioStreamRandomizer::PlaybackMode>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<AudioStreamRandomizer::PlaybackMode>::ptrcall
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
      goto LAB_00123f41;
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
                    /* WARNING: Could not recover jumptable at 0x00123dcb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_00123f41:
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
      _err_print_error(&_LC212,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00124010;
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
LAB_00124010:
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
      goto LAB_00124228;
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
LAB_00124228:
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
      goto LAB_001243e7;
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
LAB_001243e7:
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
      goto LAB_00124739;
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
                    /* WARNING: Could not recover jumptable at 0x001245c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(auVar2._0_8_,(long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_00124739:
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
      goto LAB_00124919;
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
                    /* WARNING: Could not recover jumptable at 0x001247a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(auVar2._0_8_,(long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_00124919:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<float, int>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<float,int>::validated_call
          (MethodBindTRC<float,int> *this,Object *param_1,Variant **param_2,Variant *param_3)

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
      goto LAB_0012496e;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  fVar3 = (float)(*pcVar1)(param_1 + *(long *)(this + 0x60),*(undefined4 *)(*param_2 + 8));
  *(double *)(param_3 + 8) = (double)fVar3;
LAB_0012496e:
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
      goto LAB_00124b4c;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  fVar3 = (float)(*pcVar1)(param_1 + *(long *)(this + 0x60),**param_2);
  *(double *)param_3 = (double)fVar3;
LAB_00124b4c:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, float>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<int,float>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

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
      goto LAB_00124ec1;
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
    auVar2._0_4_ = (float)*(double *)(*(long *)(param_3 + 8) + 8);
                    /* WARNING: Could not recover jumptable at 0x00124d49. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              (auVar2._0_8_,(long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_00124ec1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, float>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<int,float>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_001250b1;
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
    auVar2._4_12_ = SUB1612((undefined1  [16])0x0,4);
    auVar2._0_4_ = (float)**(double **)((long)param_3 + 8);
                    /* WARNING: Could not recover jumptable at 0x00124f37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              (auVar2._0_8_,(long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_001250b1:
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
      goto LAB_00125291;
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
                    /* WARNING: Could not recover jumptable at 0x0012511c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_00125291:
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
      goto LAB_00125471;
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
                    /* WARNING: Could not recover jumptable at 0x001252fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_00125471:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, int>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<int,int>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

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
      goto LAB_00125659;
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
                    /* WARNING: Could not recover jumptable at 0x001254e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8),*(undefined4 *)(*(long *)(param_3 + 8) + 8));
    return;
  }
LAB_00125659:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, int>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<int,int>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_00125839;
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
                    /* WARNING: Could not recover jumptable at 0x001256c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3,
               **(undefined4 **)((long)param_3 + 8));
    return;
  }
LAB_00125839:
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
      _err_print_error(&_LC212,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00125900;
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
LAB_00125900:
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
      goto LAB_00125b12;
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
LAB_00125b12:
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
      goto LAB_00125cc1;
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
LAB_00125cc1:
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
      _err_print_error(&_LC212,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00125ef0;
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
LAB_00125ef0:
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
      goto LAB_00126104;
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
LAB_00126104:
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
      goto LAB_001262b3;
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
LAB_001262b3:
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
      _err_print_error(&_LC212,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_001264e0;
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
LAB_001264e0:
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
      goto LAB_001266f4;
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
LAB_001266f4:
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
      goto LAB_001268a3;
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
LAB_001268a3:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
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
      _err_print_error(&_LC212,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00126b30;
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
LAB_00126b30:
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
      goto LAB_00126eaf;
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
                    /* WARNING: Could not recover jumptable at 0x00126d56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_00126eaf:
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
      goto LAB_0012706f;
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
                    /* WARNING: Could not recover jumptable at 0x00126f16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0012706f:
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
      goto LAB_00127251;
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
                    /* WARNING: Could not recover jumptable at 0x001270de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              (*(undefined8 *)(*(long *)param_3 + 8),
               (long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_00127251:
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
      goto LAB_00127431;
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
                    /* WARNING: Could not recover jumptable at 0x001272bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(**param_3,(long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_00127431:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Vector<Vector2>, float, int>::validated_call(Object*, Variant const**, Variant*)
   const */

void __thiscall
MethodBindTR<Vector<Vector2>,float,int>::validated_call
          (MethodBindTR<Vector<Vector2>,float,int> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
  undefined1 auVar4 [16];
  long local_58;
  undefined8 local_50;
  char *local_48;
  long local_40 [2];
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
      local_40[0] = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001274ec;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  auVar4._4_12_ = SUB1612((undefined1  [16])0x0,4);
  auVar4._0_4_ = (float)*(double *)(*param_2 + 8);
  (*pcVar2)(auVar4._0_8_,(StringName *)&local_48,param_1 + *(long *)(this + 0x60),
            *(undefined4 *)(param_2[1] + 8));
  if (*(long *)(*(long *)(param_3 + 8) + 0x18) != local_40[0]) {
    CowData<Vector2>::_ref((CowData<Vector2> *)(*(long *)(param_3 + 8) + 0x18),(CowData *)local_40);
  }
  lVar1 = local_40[0];
  if (local_40[0] != 0) {
    LOCK();
    plVar3 = (long *)(local_40[0] + -0x10);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      local_40[0] = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
LAB_001274ec:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Vector<Vector2>, float, int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<Vector<Vector2>,float,int>::ptrcall
          (MethodBindTR<Vector<Vector2>,float,int> *this,Object *param_1,void **param_2,
          void *param_3)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
  undefined1 auVar4 [16];
  long local_58;
  undefined8 local_50;
  char *local_48;
  long local_40 [2];
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
      local_40[0] = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00127718;
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
  auVar4._4_12_ = SUB1612((undefined1  [16])0x0,4);
  auVar4._0_4_ = (float)**param_2;
                    /* WARNING: Load size is inaccurate */
  (*pcVar2)(auVar4._0_8_,(StringName *)&local_48,param_1 + *(long *)(this + 0x60),*param_2[1]);
  if (*(long *)((long)param_3 + 8) != local_40[0]) {
    CowData<Vector2>::_ref((CowData<Vector2> *)((long)param_3 + 8),(CowData *)local_40);
  }
  lVar1 = local_40[0];
  if (local_40[0] != 0) {
    LOCK();
    plVar3 = (long *)(local_40[0] + -0x10);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      local_40[0] = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
LAB_00127718:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
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
      local_48 = (Object *)0x123418;
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
      goto LAB_00127959;
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
    if (pOVar5 == (Object *)0x0) goto LAB_00127959;
    *(undefined8 *)param_3 = 0;
    goto LAB_001279a1;
  }
  pOVar3 = (Object *)__dynamic_cast(local_48,&Object::typeinfo,&RefCounted::typeinfo,0);
                    /* WARNING: Load size is inaccurate */
  pOVar5 = *param_3;
  if (pOVar5 != pOVar3) {
    *(Object **)param_3 = pOVar3;
    if (pOVar3 == (Object *)0x0) {
      if (pOVar5 != (Object *)0x0) goto LAB_001279a1;
    }
    else {
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        *(undefined8 *)param_3 = 0;
      }
      if (pOVar5 != (Object *)0x0) {
LAB_001279a1:
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(pOVar5);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
      if (local_48 == (Object *)0x0) goto LAB_00127959;
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
LAB_00127959:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, Ref<AudioStream>, float>::validated_call(Object*, Variant const**, Variant*)
   const */

void MethodBindT<int,Ref<AudioStream>,float>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  double dVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  Object *pOVar5;
  Variant *pVVar6;
  code *pcVar7;
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
      pVVar6 = param_2[0x23];
      if (pVVar6 == (Variant *)0x0) {
        pVVar6 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar6 = param_2[1] + 0x20;
    }
    if (local_68 == (Object *)*(long *)pVVar6) {
      if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = (Object *)0x123418;
      local_70 = 0;
      local_60 = 0x35;
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
      goto LAB_00127ca1;
    }
    if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar7 = *(code **)(param_1 + 0x58);
  lVar2 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar7 & 1) != 0) {
    pcVar7 = *(code **)(pcVar7 + *(long *)((long)param_2 + lVar2) + -1);
  }
  dVar1 = *(double *)(*(long *)(param_3 + 0x10) + 8);
  Variant::Variant((Variant *)local_58,*(Object **)(*(long *)(param_3 + 8) + 0x10));
  local_68 = (Object *)0x0;
  pOVar5 = (Object *)Variant::get_validated_object();
  pOVar3 = local_68;
  if (pOVar5 != local_68) {
    if (pOVar5 == (Object *)0x0) {
      if (local_68 != (Object *)0x0) {
        local_68 = (Object *)0x0;
LAB_00127c53:
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
      pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&AudioStream::typeinfo,0);
      if (pOVar3 != pOVar5) {
        local_68 = pOVar5;
        if (pOVar5 != (Object *)0x0) {
          cVar4 = RefCounted::reference();
          if (cVar4 == '\0') {
            local_68 = (Object *)0x0;
          }
        }
        if (pOVar3 != (Object *)0x0) goto LAB_00127c53;
      }
    }
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  (*pcVar7)((float)dVar1,(long *)((long)param_2 + lVar2),*(undefined4 *)(*(long *)param_3 + 8),
            (StringName *)&local_68);
  if (local_68 != (Object *)0x0) {
    cVar4 = RefCounted::unreference();
    pOVar3 = local_68;
    if (cVar4 != '\0') {
      cVar4 = predelete_handler(local_68);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
LAB_00127ca1:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
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
      local_68 = (Object *)0x123418;
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
      goto LAB_00127fc9;
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
LAB_00127f80:
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
        if (pOVar2 != (Object *)0x0) goto LAB_00127f80;
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
LAB_00127fc9:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, Ref<AudioStream>, float>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<int,Ref<AudioStream>,float>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      local_48 = (Object *)0x123418;
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
      goto LAB_00128291;
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
LAB_00128266:
    local_48 = (Object *)0x0;
  }
  else {
    cVar3 = RefCounted::init_ref();
    if (cVar3 == '\0') goto LAB_00128266;
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
LAB_00128291:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
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
      local_48 = (Object *)0x123418;
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
      goto LAB_001284c8;
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
LAB_0012849d:
    local_48 = (Object *)0x0;
  }
  else {
    cVar3 = RefCounted::init_ref();
    if (cVar3 == '\0') goto LAB_0012849d;
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
LAB_001284c8:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<AudioSample>>::call(Object*, Variant const**, int, Callable::CallError&) const
    */

Object * MethodBindTRC<Ref<AudioSample>>::call
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
      local_58 = (Object *)0x123418;
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC212,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00128770;
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
LAB_00128770:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<AudioSample>>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Ref<AudioSample>>::ptrcall
          (MethodBindTRC<Ref<AudioSample>> *this,Object *param_1,void **param_2,void *param_3)

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
      local_48 = (Object *)0x123418;
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
      goto LAB_001289f6;
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
    if (pOVar5 == (Object *)0x0) goto LAB_001289f6;
    *(undefined8 *)param_3 = 0;
    goto LAB_00128a39;
  }
  pOVar3 = (Object *)__dynamic_cast(local_48,&Object::typeinfo,&RefCounted::typeinfo,0);
                    /* WARNING: Load size is inaccurate */
  pOVar5 = *param_3;
  if (pOVar5 != pOVar3) {
    *(Object **)param_3 = pOVar3;
    if (pOVar3 == (Object *)0x0) {
      if (pOVar5 != (Object *)0x0) goto LAB_00128a39;
    }
    else {
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        *(undefined8 *)param_3 = 0;
      }
      if (pOVar5 != (Object *)0x0) {
LAB_00128a39:
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(pOVar5);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
      if (local_48 == (Object *)0x0) goto LAB_001289f6;
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
LAB_001289f6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<AudioStreamPlayback>>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindTR<Ref<AudioStreamPlayback>>::call
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
      local_58 = (Object *)0x123418;
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC212,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00128d10;
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
LAB_00128d10:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<AudioStreamPlayback>>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<Ref<AudioStreamPlayback>>::ptrcall
          (MethodBindTR<Ref<AudioStreamPlayback>> *this,Object *param_1,void **param_2,void *param_3
          )

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
      local_48 = (Object *)0x123418;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00128f96;
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
    if (pOVar5 == (Object *)0x0) goto LAB_00128f96;
    *(undefined8 *)param_3 = 0;
    goto LAB_00128fd9;
  }
  pOVar3 = (Object *)__dynamic_cast(local_48,&Object::typeinfo,&RefCounted::typeinfo,0);
                    /* WARNING: Load size is inaccurate */
  pOVar5 = *param_3;
  if (pOVar5 != pOVar3) {
    *(Object **)param_3 = pOVar3;
    if (pOVar3 == (Object *)0x0) {
      if (pOVar5 != (Object *)0x0) goto LAB_00128fd9;
    }
    else {
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        *(undefined8 *)param_3 = 0;
      }
      if (pOVar5 != (Object *)0x0) {
LAB_00128fd9:
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(pOVar5);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
      if (local_48 == (Object *)0x0) goto LAB_00128f96;
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
LAB_00128f96:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<AudioSamplePlayback>>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTRC<Ref<AudioSamplePlayback>>::call
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
      local_58 = (Object *)0x123418;
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC212,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_001292b0;
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
LAB_001292b0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<AudioSamplePlayback>>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Ref<AudioSamplePlayback>>::ptrcall
          (MethodBindTRC<Ref<AudioSamplePlayback>> *this,Object *param_1,void **param_2,
          void *param_3)

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
      local_48 = (Object *)0x123418;
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
      goto LAB_00129536;
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
    if (pOVar5 == (Object *)0x0) goto LAB_00129536;
    *(undefined8 *)param_3 = 0;
    goto LAB_00129579;
  }
  pOVar3 = (Object *)__dynamic_cast(local_48,&Object::typeinfo,&RefCounted::typeinfo,0);
                    /* WARNING: Load size is inaccurate */
  pOVar5 = *param_3;
  if (pOVar5 != pOVar3) {
    *(Object **)param_3 = pOVar3;
    if (pOVar3 == (Object *)0x0) {
      if (pOVar5 != (Object *)0x0) goto LAB_00129579;
    }
    else {
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        *(undefined8 *)param_3 = 0;
      }
      if (pOVar5 != (Object *)0x0) {
LAB_00129579:
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(pOVar5);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
      if (local_48 == (Object *)0x0) goto LAB_00129536;
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
LAB_00129536:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<AudioSamplePlayback> const&>::validated_call(Object*, Variant const**, Variant*)
   const */

void MethodBindT<Ref<AudioSamplePlayback>const&>::validated_call
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
      local_58 = (Object *)0x123418;
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
      goto LAB_00129838;
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
LAB_001297f6:
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
      pOVar4 = (Object *)__dynamic_cast(pOVar4,&Object::typeinfo,&AudioSamplePlayback::typeinfo,0);
      if (pOVar2 != pOVar4) {
        local_58 = pOVar4;
        if (pOVar4 != (Object *)0x0) {
          cVar3 = RefCounted::reference();
          if (cVar3 == '\0') {
            local_58 = (Object *)0x0;
          }
        }
        if (pOVar2 != (Object *)0x0) goto LAB_001297f6;
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
LAB_00129838:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<AudioSamplePlayback> const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Ref<AudioSamplePlayback>const&>::ptrcall
               (Object *param_1,void **param_2,void *param_3)

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
      local_48 = (Object *)0x123418;
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
      goto LAB_00129afc;
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
LAB_00129ad8:
    local_48 = (Object *)0x0;
  }
  else {
    cVar3 = RefCounted::init_ref();
    if (cVar3 == '\0') goto LAB_00129ad8;
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
LAB_00129afc:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Vector<Vector2>, float, int>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTR<Vector<Vector2>,float,int>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  long *plVar8;
  long lVar9;
  Variant *pVVar10;
  undefined4 in_register_00000014;
  long *plVar11;
  Variant *this;
  int iVar12;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar13;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  char *local_68;
  long local_60;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  plVar11 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar11 != (long *)0x0) && (plVar11[1] != 0)) && (*(char *)(plVar11[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar11[1] == 0) {
      plVar8 = (long *)plVar11[0x23];
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*plVar11 + 0x40))(plVar11);
      }
    }
    else {
      plVar8 = (long *)(plVar11[1] + 0x20);
    }
    if (local_68 == (char *)*plVar8) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC212,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_00129e60;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar13 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 3) {
    pVVar10 = param_2[5];
    iVar6 = 2 - in_R8D;
    if (pVVar10 == (Variant *)0x0) {
      if (iVar6 != 0) goto LAB_00129ea8;
      this = *(Variant **)param_4;
LAB_00129ebd:
      pVVar10 = *(Variant **)(param_4 + 8);
    }
    else {
      lVar2 = *(long *)(pVVar10 + -8);
      iVar12 = (int)lVar2;
      if (iVar12 < iVar6) {
LAB_00129ea8:
        uVar7 = 4;
        goto LAB_00129e95;
      }
      if (in_R8D == 0) {
        lVar9 = (long)(iVar12 + -2);
        if (lVar2 <= lVar9) goto LAB_00129f80;
        this = pVVar10 + lVar9 * 0x18;
      }
      else {
        this = *(Variant **)param_4;
        if (in_R8D == 2) goto LAB_00129ebd;
      }
      lVar9 = (long)(int)((in_R8D ^ 1) + (iVar12 - iVar6));
      if (lVar2 <= lVar9) {
LAB_00129f80:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar10 = pVVar10 + lVar9 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar13 & 1) != 0) {
      pVVar13 = *(Variant **)(pVVar13 + *(long *)((long)plVar11 + (long)pVVar1) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar10,2);
    uVar4 = _LC217;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    iVar6 = Variant::operator_cast_to_int(pVVar10);
    cVar5 = Variant::can_convert_strict(*(undefined4 *)this,3);
    uVar4 = _LC218;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_float(this);
    (*(code *)pVVar13)(&local_68,(Variant *)((long)plVar11 + (long)pVVar1),iVar6);
    Variant::Variant((Variant *)local_58,(Vector *)&local_68);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    lVar2 = local_60;
    *(undefined4 *)param_1 = local_58[0];
    *(undefined8 *)(param_1 + 8) = local_50;
    *(undefined8 *)(param_1 + 0x10) = uStack_48;
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
  }
  else {
    uVar7 = 3;
LAB_00129e95:
    *in_R9 = uVar7;
    in_R9[2] = 2;
  }
LAB_00129e60:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<AudioStream>, int>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindTRC<Ref<AudioStream>,int>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
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
  Object *local_68;
  undefined8 local_60;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  plVar10 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar10 != (long *)0x0) && (plVar10[1] != 0)) && (*(char *)(plVar10[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar10[1] == 0) {
      plVar8 = (long *)plVar10[0x23];
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*plVar10 + 0x40))(plVar10);
      }
    }
    else {
      plVar8 = (long *)(plVar10[1] + 0x20);
    }
    if (local_68 == (Object *)*plVar8) {
      if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = (Object *)0x123418;
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC212,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_0012a210;
    }
    if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pVVar12 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar11 = param_2[5];
    if (pVVar11 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_0012a260;
LAB_0012a250:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0012a260:
        uVar7 = 4;
        goto LAB_0012a205;
      }
      if (in_R8D == 1) goto LAB_0012a250;
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
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar11,2);
    uVar4 = _LC219;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    iVar6 = Variant::operator_cast_to_int(pVVar11);
    (*(code *)pVVar12)((Ref<AudioStream> *)&local_68,(Variant *)((long)plVar10 + (long)pVVar1),iVar6
                      );
    Variant::Variant((Variant *)local_58,local_68);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_58[0];
    *(undefined8 *)(param_1 + 8) = local_50;
    *(undefined8 *)(param_1 + 0x10) = uStack_48;
    Ref<AudioStream>::unref((Ref<AudioStream> *)&local_68);
  }
  else {
    uVar7 = 3;
LAB_0012a205:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_0012a210:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTRC<float, int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<float,int>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
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
  float fVar13;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar10 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
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
      _err_print_error(&_LC212,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0012a598;
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
      if (in_R8D != 1) goto LAB_0012a5e0;
LAB_0012a5d0:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0012a5e0:
        uVar7 = 4;
        goto LAB_0012a58d;
      }
      if (in_R8D == 1) goto LAB_0012a5d0;
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
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar11,2);
    uVar4 = _LC219;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    iVar6 = Variant::operator_cast_to_int(pVVar11);
    fVar13 = (float)(*(code *)pVVar12)((Variant *)((long)plVar10 + (long)pVVar1),iVar6);
    Variant::Variant((Variant *)local_48,fVar13);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_48[0];
    *(undefined8 *)(param_1 + 8) = local_40;
    *(undefined8 *)(param_1 + 0x10) = uStack_38;
  }
  else {
    uVar7 = 3;
LAB_0012a58d:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_0012a598:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindT<int, Ref<AudioStream>, float>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<int,Ref<AudioStream>,float>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  char *pcVar3;
  code *pcVar4;
  undefined8 uVar5;
  char cVar6;
  undefined4 uVar7;
  int iVar8;
  long lVar9;
  char *pcVar10;
  long *plVar11;
  uint uVar12;
  undefined4 in_register_00000014;
  long *plVar13;
  Variant *pVVar14;
  long lVar15;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar16;
  long in_FS_OFFSET;
  float fVar17;
  long local_78;
  char *local_70;
  char *local_68;
  undefined8 local_60;
  Variant *local_58 [3];
  long local_40;
  
  plVar13 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar13 != (long *)0x0) && (plVar13[1] != 0)) && (*(char *)(plVar13[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar13[1] == 0) {
      plVar11 = (long *)plVar13[0x23];
      if (plVar11 == (long *)0x0) {
        plVar11 = (long *)(**(code **)(*plVar13 + 0x40))(plVar13);
      }
    }
    else {
      plVar11 = (long *)(plVar13[1] + 0x20);
    }
    if (local_68 == (char *)*plVar11) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = (char *)0x0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC212,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_0012a9d2;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar16 = param_2[0xb];
  pVVar1 = param_2[0xc];
  uVar7 = 3;
  if (in_R8D < 4) {
    pVVar2 = param_2[5];
    if (pVVar2 == (Variant *)0x0) {
      iVar8 = 0;
      lVar15 = 0;
    }
    else {
      lVar15 = *(long *)(pVVar2 + -8);
      iVar8 = (int)lVar15;
    }
    if ((int)(3 - in_R8D) <= iVar8) {
      lVar9 = 0;
      do {
        if ((int)lVar9 < (int)in_R8D) {
          pVVar14 = *(Variant **)(param_4 + lVar9 * 8);
        }
        else {
          uVar12 = iVar8 + -3 + (int)lVar9;
          if (lVar15 <= (int)uVar12) {
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,(long)(int)uVar12,lVar15,"p_index",
                       "size()","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          pVVar14 = pVVar2 + (ulong)uVar12 * 0x18;
        }
        local_58[lVar9] = pVVar14;
        lVar9 = lVar9 + 1;
      } while (lVar9 != 3);
      *in_R9 = 0;
      if (((ulong)pVVar16 & 1) != 0) {
        pVVar16 = *(Variant **)(pVVar16 + *(long *)((long)plVar13 + (long)pVVar1) + -1);
      }
      cVar6 = Variant::can_convert_strict(*(undefined4 *)local_58[2],3);
      uVar5 = _LC220;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar5;
      }
      fVar17 = Variant::operator_cast_to_float(local_58[2]);
      cVar6 = Variant::can_convert_strict(*(undefined4 *)local_58[1],0x18);
      uVar5 = _LC221;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar5;
      }
      local_70 = (char *)0x0;
      pcVar10 = (char *)Variant::get_validated_object();
      pcVar3 = local_70;
      if (pcVar10 != local_70) {
        if (pcVar10 == (char *)0x0) {
          if (local_70 != (char *)0x0) {
            local_70 = (char *)0x0;
            local_68 = pcVar3;
            goto LAB_0012a960;
          }
        }
        else {
          pcVar10 = (char *)__dynamic_cast(pcVar10,&Object::typeinfo,&AudioStream::typeinfo,0);
          if (pcVar3 != pcVar10) {
            local_68 = pcVar3;
            local_70 = pcVar10;
            if (pcVar10 != (char *)0x0) {
              cVar6 = RefCounted::reference();
              if (cVar6 == '\0') {
                local_70 = (char *)0x0;
              }
            }
LAB_0012a960:
            Ref<AudioStream>::unref((Ref<AudioStream> *)&local_68);
          }
        }
      }
      cVar6 = Variant::can_convert_strict(*(undefined4 *)local_58[0],2);
      uVar5 = _LC219;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar5;
      }
      iVar8 = Variant::operator_cast_to_int(local_58[0]);
      (*(code *)pVVar16)(fVar17,(Variant *)((long)plVar13 + (long)pVVar1),iVar8,
                         (Ref<AudioStream> *)&local_70);
      Ref<AudioStream>::unref((Ref<AudioStream> *)&local_70);
      goto LAB_0012a9d2;
    }
    uVar7 = 4;
  }
  *in_R9 = uVar7;
  in_R9[2] = 3;
LAB_0012a9d2:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<AudioSamplePlayback> const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<Ref<AudioSamplePlayback>const&>::call
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
      local_48 = (Object *)0x123418;
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC212,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0012adc0;
    }
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pVVar13 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (1 < in_R8D) {
    uVar7 = 3;
LAB_0012adb5:
    *in_R9 = uVar7;
    in_R9[2] = 1;
    goto LAB_0012adc0;
  }
  pVVar12 = param_2[5];
  if (pVVar12 == (Variant *)0x0) {
    if (in_R8D != 1) goto LAB_0012ae10;
LAB_0012ae00:
    pVVar12 = *(Variant **)param_4;
  }
  else {
    lVar2 = *(long *)(pVVar12 + -8);
    if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0012ae10:
      uVar7 = 4;
      goto LAB_0012adb5;
    }
    if (in_R8D == 1) goto LAB_0012ae00;
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
  uVar4 = _LC222;
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
LAB_0012af2d:
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
      pOVar8 = (Object *)__dynamic_cast(pOVar8,&Object::typeinfo,&AudioSamplePlayback::typeinfo,0);
      if (pOVar5 != pOVar8) {
        local_48 = pOVar8;
        if (pOVar8 != (Object *)0x0) {
          cVar6 = RefCounted::reference();
          if (cVar6 == '\0') {
            local_48 = (Object *)0x0;
          }
        }
        if (pOVar5 != (Object *)0x0) goto LAB_0012af2d;
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
LAB_0012adc0:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
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
      goto LAB_0012b0dc;
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
LAB_0012b0dc:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<AudioSample>>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Ref<AudioSample>>::validated_call
          (MethodBindTRC<Ref<AudioSample>> *this,Object *param_1,Variant **param_2,Variant *param_3)

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
      local_48 = (Variant **)0x123418;
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
      goto LAB_0012b326;
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
LAB_0012b326:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<AudioStreamPlayback>>::validated_call(Object*, Variant const**, Variant*) const
    */

void __thiscall
MethodBindTR<Ref<AudioStreamPlayback>>::validated_call
          (MethodBindTR<Ref<AudioStreamPlayback>> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

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
      local_48 = (Variant **)0x123418;
      local_50 = (Object *)0x0;
      local_40 = (Object *)0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0012b556;
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
LAB_0012b556:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<AudioSamplePlayback>>::validated_call(Object*, Variant const**, Variant*) const
    */

void __thiscall
MethodBindTRC<Ref<AudioSamplePlayback>>::validated_call
          (MethodBindTRC<Ref<AudioSamplePlayback>> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

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
      local_48 = (Variant **)0x123418;
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
      goto LAB_0012b786;
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
LAB_0012b786:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass,
   AudioStreamRandomizer::PlaybackMode>(__UnexistingClass*, void
   (__UnexistingClass::*)(AudioStreamRandomizer::PlaybackMode), Variant const**, int,
   Callable::CallError&, Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,AudioStreamRandomizer::PlaybackMode>
               (__UnexistingClass *param_1,_func_void_PlaybackMode *param_2,Variant **param_3,
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
    goto LAB_0012ba2d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_0012ba90;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_0012ba90:
      uVar6 = 4;
LAB_0012ba2d:
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
      goto LAB_0012b9ab;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0012b9ab:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_PlaybackMode **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC219;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_long(this);
                    /* WARNING: Could not recover jumptable at 0x0012ba06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)((char)(param_1 + (long)param_3));
  return;
}



/* MethodBindT<AudioStreamRandomizer::PlaybackMode>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<AudioStreamRandomizer::PlaybackMode>::call
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
      _err_print_error(&_LC212,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_0012baf6;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,AudioStreamRandomizer::PlaybackMode>
            (p_Var2,(_func_void_PlaybackMode *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,
             in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_0012baf6:
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
    param_2 = *(_func_void_float **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,3);
  uVar4 = _LC218;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  fVar9 = Variant::operator_cast_to_float(this);
                    /* WARNING: Could not recover jumptable at 0x0012bd94. Too many branches */
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
      _err_print_error(&_LC212,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
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
  call_with_variant_args_dv<__UnexistingClass,float>
            (p_Var2,(_func_void_float *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,
             in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_0012be86:
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
    goto LAB_0012c185;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  iVar6 = 2 - uVar10;
  if (lVar1 == 0) {
    if (iVar6 == 0) {
      this = (Variant *)*plVar8;
LAB_0012c1bd:
      this_00 = (Variant *)plVar8[1];
      goto LAB_0012c0e5;
    }
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    iVar11 = (int)lVar2;
    if (iVar6 <= iVar11) {
      if (uVar10 == 0) {
        lVar9 = (long)(iVar11 + -2);
        if (lVar2 <= lVar9) goto LAB_0012c1d8;
        this = (Variant *)(lVar1 + lVar9 * 0x18);
      }
      else {
        this = (Variant *)*plVar8;
        if (uVar10 == 2) goto LAB_0012c1bd;
      }
      lVar9 = (long)(int)((uVar10 ^ 1) + (iVar11 - iVar6));
      if (lVar2 <= lVar9) {
LAB_0012c1d8:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this_00 = (Variant *)(lVar1 + lVar9 * 0x18);
LAB_0012c0e5:
      *(undefined4 *)param_6 = 0;
      if (((ulong)param_2 & 1) != 0) {
        param_2 = *(_func_void_int_float **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
      }
      cVar5 = Variant::can_convert_strict(*(undefined4 *)this_00,3);
      uVar4 = _LC223;
      if (cVar5 == '\0') {
        *(undefined4 *)param_6 = 2;
        *(undefined8 *)(param_6 + 4) = uVar4;
      }
      fVar12 = Variant::operator_cast_to_float(this_00);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
      uVar4 = _LC219;
      if (cVar5 == '\0') {
        *(undefined4 *)param_6 = 2;
        *(undefined8 *)(param_6 + 4) = uVar4;
      }
      Variant::operator_cast_to_int(this);
                    /* WARNING: Could not recover jumptable at 0x0012c16f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*param_2)((int)(param_1 + (long)param_3),fVar12);
      return;
    }
  }
  uVar7 = 4;
LAB_0012c185:
  *(undefined4 *)param_6 = uVar7;
  *(undefined4 *)(param_6 + 8) = 2;
  return;
}



/* MethodBindT<int, float>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<int,float>::call
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
      _err_print_error(&_LC212,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_0012c276;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,int,float>
            (p_Var2,(_func_void_int_float *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8
             ,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_0012c276:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, int, Ref<AudioStream> >(__UnexistingClass*,
   void (__UnexistingClass::*)(int, Ref<AudioStream>), Variant const**, int, Callable::CallError&,
   Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,int,Ref<AudioStream>>
               (__UnexistingClass *param_1,_func_void_int_Ref *param_2,Variant **param_3,int param_4
               ,CallError *param_5,Vector *param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  Object *pOVar9;
  undefined4 in_register_0000000c;
  long *plVar10;
  long lVar11;
  uint uVar12;
  int iVar13;
  Variant *this;
  undefined4 *puVar14;
  long in_FS_OFFSET;
  long in_stack_00000008;
  Object *pOVar15;
  Object *pOVar16;
  
  plVar10 = (long *)CONCAT44(in_register_0000000c,param_4);
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar12 = (uint)param_5;
  if (2 < uVar12) {
    uVar8 = 3;
LAB_0012c615:
    *(undefined4 *)param_6 = uVar8;
    *(undefined4 *)(param_6 + 8) = 2;
    goto LAB_0012c61e;
  }
  lVar2 = *(long *)(in_stack_00000008 + 8);
  iVar7 = 2 - uVar12;
  if (lVar2 == 0) {
    if (iVar7 != 0) goto LAB_0012c610;
    this = (Variant *)*plVar10;
LAB_0012c65d:
    puVar14 = (undefined4 *)plVar10[1];
  }
  else {
    lVar3 = *(long *)(lVar2 + -8);
    iVar13 = (int)lVar3;
    if (iVar13 < iVar7) {
LAB_0012c610:
      uVar8 = 4;
      goto LAB_0012c615;
    }
    if (uVar12 == 0) {
      lVar11 = (long)(iVar13 + -2);
      if (lVar3 <= lVar11) goto LAB_0012c6c8;
      this = (Variant *)(lVar2 + lVar11 * 0x18);
    }
    else {
      this = (Variant *)*plVar10;
      if (uVar12 == 2) goto LAB_0012c65d;
    }
    lVar11 = (long)(int)((uVar12 ^ 1) + (iVar13 - iVar7));
    if (lVar3 <= lVar11) {
LAB_0012c6c8:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,lVar11,lVar3,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    puVar14 = (undefined4 *)(lVar2 + lVar11 * 0x18);
  }
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_int_Ref **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar6 = Variant::can_convert_strict(*puVar14);
  uVar5 = _LC221;
  if (cVar6 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar5;
  }
  pOVar15 = (Object *)0x0;
  pOVar9 = (Object *)Variant::get_validated_object();
  pOVar16 = pOVar15;
  if (pOVar9 != pOVar15) {
    if (pOVar9 == (Object *)0x0) {
      if (pOVar15 != (Object *)0x0) {
        pOVar9 = (Object *)0x0;
LAB_0012c681:
        cVar6 = RefCounted::unreference();
        pOVar16 = pOVar9;
        if ((cVar6 != '\0') && (cVar6 = predelete_handler(pOVar15), pOVar16 = pOVar9, cVar6 != '\0')
           ) {
          (**(code **)(*(long *)pOVar15 + 0x140))(pOVar15);
          Memory::free_static(pOVar15,false);
          pOVar16 = pOVar9;
        }
      }
    }
    else {
      pOVar9 = (Object *)__dynamic_cast(pOVar9,&Object::typeinfo,&AudioStream::typeinfo,0);
      if (pOVar15 != pOVar9) {
        if ((pOVar9 != (Object *)0x0) && (cVar6 = RefCounted::reference(), cVar6 == '\0')) {
          pOVar9 = (Object *)0x0;
        }
        pOVar16 = pOVar9;
        if (pOVar15 != (Object *)0x0) goto LAB_0012c681;
      }
    }
  }
  cVar6 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar5 = _LC219;
  if (cVar6 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar5;
  }
  Variant::operator_cast_to_int(this);
  (*param_2)((int)(param_1 + (long)param_3),SUB81(pOVar16,0));
  if (((pOVar16 != (Object *)0x0) && (cVar6 = RefCounted::unreference(), cVar6 != '\0')) &&
     (cVar6 = predelete_handler(pOVar16), cVar6 != '\0')) {
    (**(code **)(*(long *)pOVar16 + 0x140))(pOVar16);
    Memory::free_static(pOVar16,false);
  }
LAB_0012c61e:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindT<int, Ref<AudioStream> >::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindT<int,Ref<AudioStream>>::call
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
      _err_print_error(&_LC212,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_0012c766;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,int,Ref<AudioStream>>
            (p_Var2,(_func_void_int_Ref *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,
             in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_0012c766:
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
    goto LAB_0012ca2d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_0012ca90;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_0012ca90:
      uVar6 = 4;
LAB_0012ca2d:
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
      goto LAB_0012c9ab;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0012c9ab:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_int **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC219;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_int(this);
                    /* WARNING: Could not recover jumptable at 0x0012ca06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)((int)(param_1 + (long)param_3));
  return;
}



/* MethodBindT<int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<int>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

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
      _err_print_error(&_LC212,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_0012caf6;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,int>
            (p_Var2,(_func_void_int *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,in_R9
            );
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_0012caf6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, int, int>(__UnexistingClass*, void
   (__UnexistingClass::*)(int, int), Variant const**, int, Callable::CallError&, Vector<Variant>
   const&) */

void call_with_variant_args_dv<__UnexistingClass,int,int>
               (__UnexistingClass *param_1,_func_void_int_int *param_2,Variant **param_3,int param_4
               ,CallError *param_5,Vector *param_6)

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
    goto LAB_0012cded;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  iVar6 = 2 - uVar10;
  if (lVar1 == 0) {
    if (iVar6 == 0) {
      this = (Variant *)*plVar8;
LAB_0012ce1d:
      this_00 = (Variant *)plVar8[1];
      goto LAB_0012cd55;
    }
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    iVar11 = (int)lVar2;
    if (iVar6 <= iVar11) {
      if (uVar10 == 0) {
        lVar9 = (long)(iVar11 + -2);
        if (lVar2 <= lVar9) goto LAB_0012ce38;
        this = (Variant *)(lVar1 + lVar9 * 0x18);
      }
      else {
        this = (Variant *)*plVar8;
        if (uVar10 == 2) goto LAB_0012ce1d;
      }
      lVar9 = (long)(int)((uVar10 ^ 1) + (iVar11 - iVar6));
      if (lVar2 <= lVar9) {
LAB_0012ce38:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this_00 = (Variant *)(lVar1 + lVar9 * 0x18);
LAB_0012cd55:
      *(undefined4 *)param_6 = 0;
      if (((ulong)param_2 & 1) != 0) {
        param_2 = *(_func_void_int_int **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
      }
      cVar5 = Variant::can_convert_strict(*(undefined4 *)this_00,2);
      uVar4 = _LC217;
      if (cVar5 == '\0') {
        *(undefined4 *)param_6 = 2;
        *(undefined8 *)(param_6 + 4) = uVar4;
      }
      Variant::operator_cast_to_int(this_00);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
      uVar4 = _LC219;
      if (cVar5 == '\0') {
        *(undefined4 *)param_6 = 2;
        *(undefined8 *)(param_6 + 4) = uVar4;
      }
      iVar6 = Variant::operator_cast_to_int(this);
                    /* WARNING: Could not recover jumptable at 0x0012cddb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*param_2)((int)(param_1 + (long)param_3),iVar6);
      return;
    }
  }
  uVar7 = 4;
LAB_0012cded:
  *(undefined4 *)param_6 = uVar7;
  *(undefined4 *)(param_6 + 8) = 2;
  return;
}



/* MethodBindT<int, int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<int,int>::call
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
      _err_print_error(&_LC212,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_0012ced6;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,int,int>
            (p_Var2,(_func_void_int_int *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,
             in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_0012ced6:
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
    goto LAB_0012d19d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_0012d200;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_0012d200:
      uVar6 = 4;
LAB_0012d19d:
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
      goto LAB_0012d11b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0012d11b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_double **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,3);
  uVar4 = _LC218;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  dVar9 = Variant::operator_cast_to_double(this);
                    /* WARNING: Could not recover jumptable at 0x0012d174. Too many branches */
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
      _err_print_error(&_LC212,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_0012d266;
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
LAB_0012d266:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AudioStreamPlayback::start(double) */

void AudioStreamPlayback::_GLOBAL__sub_I_start(void)

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
/* AudioStreamRandomizer::~AudioStreamRandomizer() */

void __thiscall AudioStreamRandomizer::~AudioStreamRandomizer(AudioStreamRandomizer *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodInfo::~MethodInfo() */

void __thiscall MethodInfo::~MethodInfo(MethodInfo *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
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
/* PropertyListHelper::~PropertyListHelper() */

void __thiscall PropertyListHelper::~PropertyListHelper(PropertyListHelper *this)

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
/* AudioStreamMicrophone::~AudioStreamMicrophone() */

void __thiscall AudioStreamMicrophone::~AudioStreamMicrophone(AudioStreamMicrophone *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* AudioStreamPlaybackResampled::~AudioStreamPlaybackResampled() */

void __thiscall
AudioStreamPlaybackResampled::~AudioStreamPlaybackResampled(AudioStreamPlaybackResampled *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* AudioSample::~AudioSample() */

void __thiscall AudioSample::~AudioSample(AudioSample *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<AudioStreamRandomizer::PlaybackMode>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<AudioStreamRandomizer::PlaybackMode>::~MethodBindTRC
          (MethodBindTRC<AudioStreamRandomizer::PlaybackMode> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<AudioStreamRandomizer::PlaybackMode>::~MethodBindT() */

void __thiscall
MethodBindT<AudioStreamRandomizer::PlaybackMode>::~MethodBindT
          (MethodBindT<AudioStreamRandomizer::PlaybackMode> *this)

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
/* MethodBindT<int>::~MethodBindT() */

void __thiscall MethodBindT<int>::~MethodBindT(MethodBindT<int> *this)

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
/* MethodBindT<int, int>::~MethodBindT() */

void __thiscall MethodBindT<int,int>::~MethodBindT(MethodBindT<int,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<int, Ref<AudioStream>, float>::~MethodBindT() */

void __thiscall
MethodBindT<int,Ref<AudioStream>,float>::~MethodBindT(MethodBindT<int,Ref<AudioStream>,float> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Ref<AudioSample>>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Ref<AudioSample>>::~MethodBindTRC(MethodBindTRC<Ref<AudioSample>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<Ref<AudioStreamPlayback>>::~MethodBindTR() */

void __thiscall
MethodBindTR<Ref<AudioStreamPlayback>>::~MethodBindTR(MethodBindTR<Ref<AudioStreamPlayback>> *this)

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
/* MethodBindTRC<double>::~MethodBindTRC() */

void __thiscall MethodBindTRC<double>::~MethodBindTRC(MethodBindTRC<double> *this)

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
/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

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
/* MethodBindTR<Vector<Vector2>, float, int>::~MethodBindTR() */

void __thiscall
MethodBindTR<Vector<Vector2>,float,int>::~MethodBindTR
          (MethodBindTR<Vector<Vector2>,float,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Ref<AudioSamplePlayback>>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Ref<AudioSamplePlayback>>::~MethodBindTRC
          (MethodBindTRC<Ref<AudioSamplePlayback>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Ref<AudioSamplePlayback> const&>::~MethodBindT() */

void __thiscall
MethodBindT<Ref<AudioSamplePlayback>const&>::~MethodBindT
          (MethodBindT<Ref<AudioSamplePlayback>const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* AudioStream::~AudioStream() */

void __thiscall AudioStream::~AudioStream(AudioStream *this)

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



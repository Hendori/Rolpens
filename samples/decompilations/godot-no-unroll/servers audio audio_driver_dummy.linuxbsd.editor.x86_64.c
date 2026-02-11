
/* AudioDriverDummy::get_mix_rate() const */

undefined4 __thiscall AudioDriverDummy::get_mix_rate(AudioDriverDummy *this)

{
  return *(undefined4 *)(this + 0x84);
}



/* AudioDriverDummy::get_speaker_mode() const */

undefined4 __thiscall AudioDriverDummy::get_speaker_mode(AudioDriverDummy *this)

{
  return *(undefined4 *)(this + 0x88);
}



/* AudioDriverDummy::start() */

void __thiscall AudioDriverDummy::start(AudioDriverDummy *this)

{
  this[0x90] = (AudioDriverDummy)0x1;
  return;
}



/* AudioDriverDummy::init() */

undefined8 __thiscall AudioDriverDummy::init(AudioDriverDummy *this)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  this[0x90] = (AudioDriverDummy)0x0;
  this[0x91] = (AudioDriverDummy)0x0;
  *(undefined8 *)(this + 0x78) = 0;
  if (*(int *)(this + 0x84) == -1) {
    uVar2 = AudioDriver::_get_configured_mix_rate();
    *(undefined4 *)(this + 0x84) = uVar2;
  }
  lVar4 = (ulong)*(uint *)(this + 0x80) *
          (long)*(int *)(get_channels()::channels_for_mode + (long)*(int *)(this + 0x88) * 4);
  *(int *)(this + 0x8c) =
       *(int *)(get_channels()::channels_for_mode + (long)*(int *)(this + 0x88) * 4);
  if (lVar4 != 0) {
    lVar3 = Memory::alloc_static(lVar4 * 4,true);
    if (lVar3 != 0) {
      *(long *)(lVar3 + -8) = lVar4;
      goto LAB_001000b6;
    }
    _err_print_error("memnew_arr_template","./core/os/memory.h",0xb6,"Parameter \"mem\" is null.",0,
                     0);
  }
  lVar3 = 0;
LAB_001000b6:
  *(long *)(this + 0x78) = lVar3;
  if (this[0x92] != (AudioDriverDummy)0x0) {
    Thread::start((_func_void_void_ptr *)(this + 0x40),thread_func,(Settings *)this);
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AudioDriverDummy::unlock() */

void __thiscall AudioDriverDummy::unlock(AudioDriverDummy *this)

{
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x50));
  return;
}



/* AudioDriverDummy::finish() */

void __thiscall AudioDriverDummy::finish(AudioDriverDummy *this)

{
  char cVar1;
  
  if (this[0x92] != (AudioDriverDummy)0x0) {
    this[0x91] = (AudioDriverDummy)0x1;
    cVar1 = Thread::is_started();
    if (cVar1 != '\0') {
      Thread::wait_to_finish();
    }
  }
  if (*(void **)(this + 0x78) != (void *)0x0) {
    Memory::free_static(*(void **)(this + 0x78),true);
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AudioDriverDummy::thread_func(void*) */

void AudioDriverDummy::thread_func(void *param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 uVar5;
  float fVar6;
  
  fVar6 = ((float)*(uint *)((long)param_1 + 0x80) / (float)*(int *)((long)param_1 + 0x84)) * __LC7;
  if (__LC8 <= fVar6) {
    uVar5 = (undefined4)(long)(fVar6 - __LC8);
  }
  else {
    uVar5 = (undefined4)(long)fVar6;
  }
  do {
    if (*(char *)((long)param_1 + 0x91) != '\0') {
      return;
    }
    if (*(char *)((long)param_1 + 0x90) != '\0') {
                    /* WARNING: Load size is inaccurate */
      if (*(code **)(*param_1 + 0x38) == lock) {
        iVar1 = pthread_mutex_lock((pthread_mutex_t *)((long)param_1 + 0x50));
        if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
          std::__throw_system_error(iVar1);
        }
      }
      else {
        (**(code **)(*param_1 + 0x38))(param_1);
      }
      plVar2 = (long *)OS::get_singleton();
      uVar3 = (**(code **)(*plVar2 + 0x208))(plVar2);
      *(undefined8 *)((long)param_1 + 0x18) = uVar3;
      AudioDriver::audio_server_process
                ((int)param_1,(int *)(ulong)*(uint *)((long)param_1 + 0x80),
                 SUB81(*(undefined8 *)((long)param_1 + 0x78),0));
      plVar2 = (long *)OS::get_singleton();
      lVar4 = (**(code **)(*plVar2 + 0x208))(plVar2);
      LOCK();
      *(long *)((long)param_1 + 0x20) =
           *(long *)((long)param_1 + 0x20) + (lVar4 - *(long *)((long)param_1 + 0x18));
      UNLOCK();
                    /* WARNING: Load size is inaccurate */
      if (*(code **)(*param_1 + 0x40) == unlock) {
        pthread_mutex_unlock((pthread_mutex_t *)((long)param_1 + 0x50));
      }
      else {
        (**(code **)(*param_1 + 0x40))(param_1);
      }
    }
    plVar2 = (long *)OS::get_singleton();
    (**(code **)(*plVar2 + 0x1f8))(plVar2,uVar5);
  } while( true );
}



/* AudioDriverDummy::lock() */

void __thiscall AudioDriverDummy::lock(AudioDriverDummy *this)

{
  int iVar1;
  
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x50));
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_system_error(iVar1);
}



/* AudioDriverDummy::set_use_threads(bool) */

void __thiscall AudioDriverDummy::set_use_threads(AudioDriverDummy *this,bool param_1)

{
  this[0x92] = (AudioDriverDummy)param_1;
  return;
}



/* AudioDriverDummy::set_speaker_mode(AudioDriver::SpeakerMode) */

void __thiscall AudioDriverDummy::set_speaker_mode(AudioDriverDummy *this,undefined4 param_2)

{
  *(undefined4 *)(this + 0x88) = param_2;
  return;
}



/* AudioDriverDummy::set_mix_rate(int) */

void __thiscall AudioDriverDummy::set_mix_rate(AudioDriverDummy *this,int param_1)

{
  *(int *)(this + 0x84) = param_1;
  return;
}



/* AudioDriverDummy::get_channels() const */

undefined4 __thiscall AudioDriverDummy::get_channels(AudioDriverDummy *this)

{
  return *(undefined4 *)(get_channels()::channels_for_mode + (long)*(int *)(this + 0x88) * 4);
}



/* AudioDriverDummy::mix_audio(int, int*) */

void __thiscall AudioDriverDummy::mix_audio(AudioDriverDummy *this,int param_1,int *param_2)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  
  if (this[0x90] == (AudioDriverDummy)0x0) {
    _err_print_error("mix_audio","servers/audio/audio_driver_dummy.cpp",0x72,
                     "Condition \"!active.is_set()\" is true.",0,0);
    return;
  }
  if (this[0x92] != (AudioDriverDummy)0x0) {
    _err_print_error("mix_audio","servers/audio/audio_driver_dummy.cpp",0x73,
                     "Condition \"use_threads == true\" is true.",0,0);
    return;
  }
  if (param_1 != 0) {
    do {
      uVar5 = *(uint *)(this + 0x80);
      if ((uint)param_1 <= *(uint *)(this + 0x80)) {
        uVar5 = param_1;
      }
      if (*(code **)(*(long *)this + 0x38) == lock) {
        iVar2 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x50));
        if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
          std::__throw_system_error(iVar2);
        }
      }
      else {
        (**(code **)(*(long *)this + 0x38))(this);
      }
      AudioDriver::audio_server_process
                ((int)this,(int *)(ulong)uVar5,SUB81(*(undefined8 *)(this + 0x78),0));
      if (*(code **)(*(long *)this + 0x40) == unlock) {
        pthread_mutex_unlock((pthread_mutex_t *)(this + 0x50));
      }
      else {
        (**(code **)(*(long *)this + 0x40))(this);
      }
      uVar3 = *(int *)(this + 0x8c) * uVar5;
      if (uVar3 != 0) {
        lVar1 = *(long *)(this + 0x78);
        lVar4 = 0;
        do {
          *(undefined4 *)((long)param_2 + lVar4) = *(undefined4 *)(lVar1 + lVar4);
          lVar4 = lVar4 + 4;
        } while ((ulong)uVar3 * 4 - lVar4 != 0);
      }
      param_2 = param_2 + uVar3;
      param_1 = param_1 - uVar5;
    } while (param_1 != 0);
  }
  return;
}



/* AudioDriverDummy::AudioDriverDummy() */

void __thiscall AudioDriverDummy::AudioDriverDummy(AudioDriverDummy *this)

{
  *(code **)this = Thread::Thread;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined ***)this = &PTR_get_name_001009c0;
  Thread::Thread((Thread *)(this + 0x40));
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined1 (*) [16])(this + 0x60) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x60) = 1;
  *(undefined4 *)(this + 0x80) = 0x1000;
  *(undefined4 *)(this + 0x84) = 0xffffffff;
  *(undefined4 *)(this + 0x88) = 0;
  *(undefined1 (*) [16])(this + 0x50) = (undefined1  [16])0x0;
  this[0x90] = (AudioDriverDummy)0x0;
  this[0x91] = (AudioDriverDummy)0x0;
  this[0x92] = (AudioDriverDummy)0x1;
  singleton = this;
  return;
}



/* AudioDriver::get_latency() */

undefined8 AudioDriver::get_latency(void)

{
  return 0;
}



/* AudioDriver::set_output_device(String const&) */

void AudioDriver::set_output_device(String *param_1)

{
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



/* AudioDriver::set_input_device(String const&) */

void AudioDriver::set_input_device(String *param_1)

{
  return;
}



/* AudioDriver::is_stream_registered_as_sample(Ref<AudioStream> const&) const */

undefined8 AudioDriver::is_stream_registered_as_sample(Ref *param_1)

{
  return 0;
}



/* AudioDriver::register_sample(Ref<AudioSample> const&) */

void AudioDriver::register_sample(Ref *param_1)

{
  return;
}



/* AudioDriver::unregister_sample(Ref<AudioSample> const&) */

void AudioDriver::unregister_sample(Ref *param_1)

{
  return;
}



/* AudioDriver::stop_sample_playback(Ref<AudioSamplePlayback> const&) */

void AudioDriver::stop_sample_playback(Ref *param_1)

{
  return;
}



/* AudioDriver::set_sample_playback_pause(Ref<AudioSamplePlayback> const&, bool) */

void AudioDriver::set_sample_playback_pause(Ref *param_1,bool param_2)

{
  return;
}



/* AudioDriver::is_sample_playback_active(Ref<AudioSamplePlayback> const&) */

undefined8 AudioDriver::is_sample_playback_active(Ref *param_1)

{
  return 0;
}



/* AudioDriver::get_sample_playback_position(Ref<AudioSamplePlayback> const&) */

undefined8 AudioDriver::get_sample_playback_position(Ref *param_1)

{
  return 0;
}



/* AudioDriver::update_sample_playback_pitch_scale(Ref<AudioSamplePlayback> const&, float) */

void AudioDriver::update_sample_playback_pitch_scale(Ref *param_1,float param_2)

{
  return;
}



/* AudioDriver::set_sample_playback_bus_volumes_linear(Ref<AudioSamplePlayback> const&,
   HashMap<StringName, Vector<AudioFrame>, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   Vector<AudioFrame> > > > const&) */

void AudioDriver::set_sample_playback_bus_volumes_linear(Ref *param_1,HashMap *param_2)

{
  return;
}



/* AudioDriver::set_sample_bus_count(int) */

void AudioDriver::set_sample_bus_count(int param_1)

{
  return;
}



/* AudioDriver::remove_sample_bus(int) */

void AudioDriver::remove_sample_bus(int param_1)

{
  return;
}



/* AudioDriver::add_sample_bus(int) */

void AudioDriver::add_sample_bus(int param_1)

{
  return;
}



/* AudioDriver::move_sample_bus(int, int) */

void AudioDriver::move_sample_bus(int param_1,int param_2)

{
  return;
}



/* AudioDriver::set_sample_bus_send(int, StringName const&) */

void AudioDriver::set_sample_bus_send(int param_1,StringName *param_2)

{
  return;
}



/* AudioDriver::set_sample_bus_volume_db(int, float) */

void AudioDriver::set_sample_bus_volume_db(int param_1,float param_2)

{
  return;
}



/* AudioDriver::set_sample_bus_solo(int, bool) */

void AudioDriver::set_sample_bus_solo(int param_1,bool param_2)

{
  return;
}



/* AudioDriver::set_sample_bus_mute(int, bool) */

void AudioDriver::set_sample_bus_mute(int param_1,bool param_2)

{
  return;
}



/* AudioDriverDummy::get_name() const */

char * AudioDriverDummy::get_name(void)

{
  return "Dummy";
}



/* AudioDriver::get_input_device() */

AudioDriver * __thiscall AudioDriver::get_input_device(AudioDriver *this)

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



/* AudioDriver::get_input_mix_rate() const */

ulong __thiscall AudioDriver::get_input_mix_rate(AudioDriver *this)

{
  ulong uVar1;
  
  if (*(code **)(*(long *)this + 0x18) == AudioDriverDummy::get_mix_rate) {
    return (ulong)*(uint *)(this + 0x84);
  }
                    /* WARNING: Could not recover jumptable at 0x00100820. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(long *)this + 0x18))();
  return uVar1;
}



/* AudioDriverDummy::~AudioDriverDummy() */

void __thiscall AudioDriverDummy::~AudioDriverDummy(AudioDriverDummy *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR_get_name_001009c0;
  Thread::~Thread((Thread *)(this + 0x40));
  *(code **)this = Thread::Thread;
  if (*(long *)(this + 0x30) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x30) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x30);
      *(undefined8 *)(this + 0x30) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      operator_delete(this,0x98);
      return;
    }
  }
  operator_delete(this,0x98);
  return;
}



/* AudioDriverDummy::~AudioDriverDummy() */

void __thiscall AudioDriverDummy::~AudioDriverDummy(AudioDriverDummy *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR_get_name_001009c0;
  Thread::~Thread((Thread *)(this + 0x40));
  *(code **)this = Thread::Thread;
  if (*(long *)(this + 0x30) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x30) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x30);
      *(undefined8 *)(this + 0x30) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
  }
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* AudioDriverDummy::~AudioDriverDummy() */

void __thiscall AudioDriverDummy::~AudioDriverDummy(AudioDriverDummy *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}




/* AudioStreamPlaybackOggVorbis::stop() */

void __thiscall AudioStreamPlaybackOggVorbis::stop(AudioStreamPlaybackOggVorbis *this)

{
  this[0x6d4] = (AudioStreamPlaybackOggVorbis)0x0;
  return;
}



/* AudioStreamPlaybackOggVorbis::is_playing() const */

AudioStreamPlaybackOggVorbis __thiscall
AudioStreamPlaybackOggVorbis::is_playing(AudioStreamPlaybackOggVorbis *this)

{
  return this[0x6d4];
}



/* AudioStreamPlaybackOggVorbis::get_loop_count() const */

undefined4 __thiscall
AudioStreamPlaybackOggVorbis::get_loop_count(AudioStreamPlaybackOggVorbis *this)

{
  return *(undefined4 *)(this + 0x6d8);
}



/* AudioStreamPlaybackOggVorbis::set_is_sample(bool) */

void __thiscall
AudioStreamPlaybackOggVorbis::set_is_sample(AudioStreamPlaybackOggVorbis *this,bool param_1)

{
  this[0x10a8] = (AudioStreamPlaybackOggVorbis)param_1;
  return;
}



/* AudioStreamPlaybackOggVorbis::get_is_sample() const */

AudioStreamPlaybackOggVorbis __thiscall
AudioStreamPlaybackOggVorbis::get_is_sample(AudioStreamPlaybackOggVorbis *this)

{
  return this[0x10a8];
}



/* AudioStreamOggVorbis::set_loop(bool) */

void __thiscall AudioStreamOggVorbis::set_loop(AudioStreamOggVorbis *this,bool param_1)

{
  this[0x358] = (AudioStreamOggVorbis)param_1;
  return;
}



/* AudioStreamOggVorbis::has_loop() const */

AudioStreamOggVorbis __thiscall AudioStreamOggVorbis::has_loop(AudioStreamOggVorbis *this)

{
  return this[0x358];
}



/* AudioStreamOggVorbis::set_loop_offset(double) */

void __thiscall AudioStreamOggVorbis::set_loop_offset(AudioStreamOggVorbis *this,double param_1)

{
  *(double *)(this + 0x360) = param_1;
  return;
}



/* AudioStreamOggVorbis::get_loop_offset() const */

undefined8 __thiscall AudioStreamOggVorbis::get_loop_offset(AudioStreamOggVorbis *this)

{
  return *(undefined8 *)(this + 0x360);
}



/* AudioStreamOggVorbis::get_bpm() const */

undefined8 __thiscall AudioStreamOggVorbis::get_bpm(AudioStreamOggVorbis *this)

{
  return *(undefined8 *)(this + 0x370);
}



/* AudioStreamOggVorbis::get_beat_count() const */

undefined4 __thiscall AudioStreamOggVorbis::get_beat_count(AudioStreamOggVorbis *this)

{
  return *(undefined4 *)(this + 0x378);
}



/* AudioStreamOggVorbis::get_bar_beats() const */

undefined4 __thiscall AudioStreamOggVorbis::get_bar_beats(AudioStreamOggVorbis *this)

{
  return *(undefined4 *)(this + 0x37c);
}



/* AudioStreamOggVorbis::is_monophonic() const */

undefined8 AudioStreamOggVorbis::is_monophonic(void)

{
  return 0;
}



/* AudioStreamPlaybackOggVorbis::get_stream_sampling_rate() */

void AudioStreamPlaybackOggVorbis::get_stream_sampling_rate(void)

{
  OggPacketSequence::get_sampling_rate();
  return;
}



/* AudioStreamPlaybackOggVorbis::get_playback_position() const */

double __thiscall
AudioStreamPlaybackOggVorbis::get_playback_position(AudioStreamPlaybackOggVorbis *this)

{
  uint uVar1;
  float fVar2;
  
  uVar1 = *(uint *)(this + 0x6d0);
  fVar2 = (float)OggPacketSequence::get_sampling_rate();
  return (double)uVar1 / (double)fVar2;
}



/* AudioStreamPlaybackOggVorbis::start(double) */

void AudioStreamPlaybackOggVorbis::start(double param_1)

{
  long *in_RDI;
  
  if (*(char *)((long)in_RDI + 0x108c) != '\0') {
    *(undefined4 *)((long)in_RDI + 0xedc) = 0x100;
    *(undefined1 *)((long)in_RDI + 0x6d4) = 1;
    (**(code **)(*in_RDI + 0x178))();
    *(undefined4 *)(in_RDI + 0xdb) = 0;
    AudioStreamPlaybackResampled::begin_resample();
    return;
  }
  _err_print_error("start","modules/vorbis/audio_stream_ogg_vorbis.cpp",0xe5,
                   "Condition \"!ready\" is true.",0,0);
  return;
}



/* AudioStreamOggVorbis::set_bpm(double) */

void __thiscall AudioStreamOggVorbis::set_bpm(AudioStreamOggVorbis *this,double param_1)

{
  if (0.0 <= param_1) {
    *(double *)(this + 0x370) = param_1;
    Resource::emit_changed();
    return;
  }
  _err_print_error("set_bpm","modules/vorbis/audio_stream_ogg_vorbis.cpp",0x1f2,
                   "Condition \"p_bpm < 0\" is true.",0,0);
  return;
}



/* AudioStreamOggVorbis::set_beat_count(int) */

void __thiscall AudioStreamOggVorbis::set_beat_count(AudioStreamOggVorbis *this,int param_1)

{
  if (-1 < param_1) {
    *(int *)(this + 0x378) = param_1;
    Resource::emit_changed();
    return;
  }
  _err_print_error("set_beat_count","modules/vorbis/audio_stream_ogg_vorbis.cpp",0x1fc,
                   "Condition \"p_beat_count < 0\" is true.",0,0);
  return;
}



/* AudioStreamOggVorbis::set_bar_beats(int) */

void __thiscall AudioStreamOggVorbis::set_bar_beats(AudioStreamOggVorbis *this,int param_1)

{
  if (1 < param_1) {
    *(int *)(this + 0x37c) = param_1;
    Resource::emit_changed();
    return;
  }
  _err_print_error("set_bar_beats","modules/vorbis/audio_stream_ogg_vorbis.cpp",0x206,
                   "Condition \"p_bar_beats < 2\" is true.",0,0);
  return;
}



/* AudioStreamOggVorbis::get_length() const */

double __thiscall AudioStreamOggVorbis::get_length(AudioStreamOggVorbis *this)

{
  float fVar1;
  
  if (*(long *)(this + 0x368) != 0) {
    fVar1 = (float)OggPacketSequence::get_length();
    return (double)fVar1;
  }
  _err_print_error("get_length","modules/vorbis/audio_stream_ogg_vorbis.cpp",0x1ed,
                   "Condition \"packet_sequence.is_null()\" is true. Returning: 0",0,0);
  return 0.0;
}



/* AudioStreamPlaybackOggVorbis::get_parameter(StringName const&) const */

StringName * AudioStreamPlaybackOggVorbis::get_parameter(StringName *param_1)

{
  long lVar1;
  int iVar2;
  long *in_RDX;
  long in_RSI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(char *)(in_RSI + 0x6d5) != '\0') {
    if (const::{lambda()#1}::operator()()::sname == '\0') {
      iVar2 = __cxa_guard_acquire(&const::{lambda()#1}::operator()()::sname);
      if (iVar2 != 0) {
        _scs_create((char *)&const::{lambda()#1}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&const::{lambda()#1}::operator()()::sname,&__dso_handle
                    );
        __cxa_guard_release(&const::{lambda()#1}::operator()()::sname);
      }
    }
    if (*in_RDX == const::{lambda()#1}::operator()()::sname) {
      Variant::Variant((Variant *)param_1,*(bool *)(in_RSI + 0x6d6));
      goto LAB_001002fa;
    }
  }
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_001002fa:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AudioStreamPlaybackOggVorbis::set_parameter(StringName const&, Variant const&) */

void __thiscall
AudioStreamPlaybackOggVorbis::set_parameter
          (AudioStreamPlaybackOggVorbis *this,StringName *param_1,Variant *param_2)

{
  char cVar1;
  AudioStreamPlaybackOggVorbis AVar2;
  int iVar3;
  long in_FS_OFFSET;
  int local_48 [2];
  undefined1 local_40 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (set_parameter(StringName_const&,Variant_const&)::{lambda()#1}::operator()()::sname == '\0') {
    iVar3 = __cxa_guard_acquire(&set_parameter(StringName_const&,Variant_const&)::{lambda()#1}::
                                 operator()()::sname);
    if (iVar3 == 0) goto LAB_001003e4;
    _scs_create((char *)&set_parameter(StringName_const&,Variant_const&)::{lambda()#1}::operator()()
                         ::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &set_parameter(StringName_const&,Variant_const&)::{lambda()#1}::operator()()::sname
                 ,&__dso_handle);
    __cxa_guard_release(&set_parameter(StringName_const&,Variant_const&)::{lambda()#1}::operator()()
                         ::sname);
    if (*(long *)param_1 !=
        set_parameter(StringName_const&,Variant_const&)::{lambda()#1}::operator()()::sname)
    goto LAB_001003f4;
  }
  else {
LAB_001003e4:
    if (*(long *)param_1 !=
        set_parameter(StringName_const&,Variant_const&)::{lambda()#1}::operator()()::sname)
    goto LAB_001003f4;
  }
  local_48[0] = 0;
  local_48[1] = 0;
  local_40 = (undefined1  [16])0x0;
  cVar1 = Variant::operator==(param_2,(Variant *)local_48);
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (cVar1 == '\0') {
    this[0x6d5] = (AudioStreamPlaybackOggVorbis)0x1;
    AVar2 = (AudioStreamPlaybackOggVorbis)Variant::operator_cast_to_bool(param_2);
    this[0x6d6] = AVar2;
  }
  else {
    *(undefined2 *)(this + 0x6d5) = 0;
  }
LAB_001003f4:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AudioStreamPlaybackOggVorbis::tag_used_streams() */

void __thiscall AudioStreamPlaybackOggVorbis::tag_used_streams(AudioStreamPlaybackOggVorbis *this)

{
  uint uVar1;
  float fVar2;
  double dVar3;
  
  if (*(code **)(*(long *)this + 0x170) == get_playback_position) {
    uVar1 = *(uint *)(this + 0x6d0);
    fVar2 = (float)OggPacketSequence::get_sampling_rate();
    dVar3 = (double)uVar1 / (double)fVar2;
  }
  else {
    dVar3 = (double)(**(code **)(*(long *)this + 0x170))();
  }
  AudioStream::tag_used((float)dVar3);
  return;
}



/* AudioStreamPlaybackOggVorbis::get_sample_playback() const */

void AudioStreamPlaybackOggVorbis::get_sample_playback(void)

{
  char cVar1;
  long in_RSI;
  long *in_RDI;
  
  *in_RDI = 0;
  if (*(long *)(in_RSI + 0x10b0) != 0) {
    *in_RDI = *(long *)(in_RSI + 0x10b0);
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *in_RDI = 0;
    }
  }
  return;
}



/* AudioStreamOggVorbis::generate_sample() const */

void AudioStreamOggVorbis::generate_sample(void)

{
  double dVar1;
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
  int local_48 [6];
  long local_30;
  
  bVar8 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *in_RDI = 0;
  this = (RefCounted *)operator_new(0x1b0,"");
  pRVar6 = this;
  for (lVar5 = 0x36; lVar5 != 0; lVar5 = lVar5 + -1) {
    *(undefined8 *)pRVar6 = 0;
    pRVar6 = pRVar6 + (ulong)bVar8 * -0x10 + 8;
  }
  RefCounted::RefCounted(this);
  *(undefined8 *)(this + 0x180) = 0;
  *(undefined ***)this = &PTR__initialize_classv_001137a0;
  uVar2 = _LC15;
  *(undefined8 *)(this + 400) = 0;
  *(undefined8 *)(this + 0x198) = uVar2;
  *(undefined4 *)(this + 0x1a0) = 0;
  *(undefined8 *)(this + 0x1a4) = 0;
  postinitialize_handler((Object *)this);
  cVar3 = RefCounted::init_ref();
  if (cVar3 == '\0') {
    pOVar7 = (Object *)*in_RDI;
    if (pOVar7 != (Object *)0x0) {
      *in_RDI = 0;
      cVar3 = RefCounted::unreference();
      if (cVar3 != '\0') {
        this = (RefCounted *)0x0;
        cVar3 = predelete_handler(pOVar7);
        if (cVar3 != '\0') goto LAB_00100843;
      }
    }
  }
  else {
    pOVar7 = (Object *)*in_RDI;
    pOVar4 = pOVar7;
    if (this != (RefCounted *)pOVar7) {
      *in_RDI = (long)this;
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        *in_RDI = 0;
      }
      pOVar4 = (Object *)this;
      if (((pOVar7 != (Object *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) &&
         (cVar3 = predelete_handler(pOVar7), cVar3 != '\0')) {
LAB_00100843:
        (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
        Memory::free_static(pOVar7,false);
        pOVar4 = (Object *)this;
        if (this == (RefCounted *)0x0) goto LAB_00100682;
      }
    }
    cVar3 = RefCounted::unreference();
    if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar4), cVar3 != '\0')) {
      (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
      Memory::free_static(pOVar4,false);
    }
  }
LAB_00100682:
  Variant::Variant((Variant *)local_48,in_RSI);
  lVar5 = *in_RDI;
  pOVar4 = (Object *)Variant::get_validated_object();
  pOVar7 = *(Object **)(lVar5 + 0x180);
  if (pOVar4 == pOVar7) goto LAB_001006fa;
  if (pOVar4 == (Object *)0x0) {
    if (pOVar7 == (Object *)0x0) goto LAB_001006fa;
    *(undefined8 *)(lVar5 + 0x180) = 0;
  }
  else {
    pOVar4 = (Object *)__dynamic_cast(pOVar4,&Object::typeinfo,&AudioStream::typeinfo,0);
    if (pOVar7 == pOVar4) goto LAB_001006fa;
    *(Object **)(lVar5 + 0x180) = pOVar4;
    if ((pOVar4 != (Object *)0x0) && (cVar3 = RefCounted::reference(), cVar3 == '\0')) {
      *(undefined8 *)(lVar5 + 0x180) = 0;
    }
    if (pOVar7 == (Object *)0x0) goto LAB_001006fa;
  }
  cVar3 = RefCounted::unreference();
  if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar7), cVar3 != '\0')) {
    (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
    Memory::free_static(pOVar7,false);
  }
LAB_001006fa:
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  lVar5 = *in_RDI;
  *(uint *)(lVar5 + 0x1a0) = (uint)(byte)in_RSI[0x358];
  dVar1 = *(double *)(in_RSI + 0x360);
  *(undefined4 *)(lVar5 + 0x1a8) = 0;
  *(int *)(lVar5 + 0x1a4) = (int)dVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* AudioStreamPlaybackOggVorbis::set_sample_playback(Ref<AudioSamplePlayback> const&) */

void __thiscall
AudioStreamPlaybackOggVorbis::set_sample_playback(AudioStreamPlaybackOggVorbis *this,Ref *param_1)

{
  long lVar1;
  char cVar2;
  Object *pOVar3;
  Object *pOVar4;
  
  pOVar4 = *(Object **)param_1;
  pOVar3 = *(Object **)(this + 0x10b0);
  if (pOVar4 != pOVar3) {
    *(Object **)(this + 0x10b0) = pOVar4;
    if (pOVar4 == (Object *)0x0) {
LAB_001008de:
      if (pOVar3 == (Object *)0x0) {
        return;
      }
      cVar2 = RefCounted::unreference();
joined_r0x001008ed:
      if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar3), cVar2 != '\0')) {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
    else {
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        *(undefined8 *)(this + 0x10b0) = 0;
        goto LAB_001008de;
      }
      if (pOVar3 != (Object *)0x0) {
        cVar2 = RefCounted::unreference();
        goto joined_r0x001008ed;
      }
    }
    pOVar3 = *(Object **)(this + 0x10b0);
  }
  if (pOVar3 == (Object *)0x0) {
    return;
  }
  cVar2 = RefCounted::init_ref();
  if (cVar2 == '\0') {
    pOVar4 = *(Object **)(*(long *)(this + 0x10b0) + 0x188);
    if (pOVar4 == (Object *)0x0) {
      return;
    }
    *(undefined8 *)(*(long *)(this + 0x10b0) + 0x188) = 0;
    cVar2 = RefCounted::unreference();
    if (cVar2 == '\0') {
      return;
    }
    this = (AudioStreamPlaybackOggVorbis *)0x0;
    cVar2 = predelete_handler(pOVar4);
    if (cVar2 == '\0') {
      return;
    }
  }
  else {
    lVar1 = *(long *)(this + 0x10b0);
    pOVar4 = *(Object **)(lVar1 + 0x188);
    if (pOVar4 == (Object *)this) goto LAB_00100981;
    *(AudioStreamPlaybackOggVorbis **)(lVar1 + 0x188) = this;
    cVar2 = RefCounted::reference();
    if (cVar2 == '\0') {
      *(undefined8 *)(lVar1 + 0x188) = 0;
    }
    if (((pOVar4 == (Object *)0x0) || (cVar2 = RefCounted::unreference(), cVar2 == '\0')) ||
       (cVar2 = predelete_handler(pOVar4), cVar2 == '\0')) goto LAB_00100981;
  }
  (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
  Memory::free_static(pOVar4,false);
  if (this == (AudioStreamPlaybackOggVorbis *)0x0) {
    return;
  }
LAB_00100981:
  cVar2 = RefCounted::unreference();
  if ((cVar2 != '\0') && (cVar2 = predelete_handler((Object *)this), cVar2 != '\0')) {
    (**(code **)(*(long *)this + 0x140))(this);
    Memory::free_static(this,false);
    return;
  }
  return;
}



/* AudioStreamOggVorbis::get_stream_name() const */

AudioStreamOggVorbis * __thiscall AudioStreamOggVorbis::get_stream_name(AudioStreamOggVorbis *this)

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



/* CowData<unsigned char>::_ref(CowData<unsigned char> const&) [clone .part.0] */

void __thiscall CowData<unsigned_char>::_ref(CowData<unsigned_char> *this,CowData *param_1)

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



/* AudioStreamPlaybackOggVorbis::_alloc_vorbis() */

undefined4 __thiscall
AudioStreamPlaybackOggVorbis::_alloc_vorbis(AudioStreamPlaybackOggVorbis *this)

{
  AudioStreamPlaybackOggVorbis *pAVar1;
  long lVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  Object *pOVar6;
  Object *pOVar7;
  int iVar8;
  long in_FS_OFFSET;
  Object *local_48;
  
  pAVar1 = this + 0xee0;
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  vorbis_info_init(pAVar1);
  this[0x1088] = (AudioStreamPlaybackOggVorbis)0x1;
  vorbis_comment_init(this + 0xf18);
  this[0x1089] = (AudioStreamPlaybackOggVorbis)0x1;
  if (*(long *)(this + 0x1090) == 0) {
    uVar4 = 0;
    _err_print_error("_alloc_vorbis","modules/vorbis/audio_stream_ogg_vorbis.cpp",199,
                     "Condition \"vorbis_data.is_null()\" is true. Returning: false",0,0);
    goto LAB_00100e44;
  }
  OggPacketSequence::instantiate_playback();
  pOVar7 = *(Object **)(this + 0x1098);
  pOVar6 = pOVar7;
  if (local_48 == pOVar7) {
LAB_00100da2:
    if (((pOVar6 != (Object *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) &&
       (cVar3 = predelete_handler(local_48), cVar3 != '\0')) {
      (**(code **)(*(long *)local_48 + 0x140))(local_48);
      Memory::free_static(local_48,false);
    }
    pOVar7 = *(Object **)(this + 0x1098);
  }
  else {
    *(Object **)(this + 0x1098) = local_48;
    pOVar6 = local_48;
    if (local_48 != (Object *)0x0) {
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        *(undefined8 *)(this + 0x1098) = 0;
      }
      if (pOVar7 != (Object *)0x0) {
        cVar3 = RefCounted::unreference();
        goto joined_r0x00100e83;
      }
      goto LAB_00100da2;
    }
    if (pOVar7 != (Object *)0x0) {
      cVar3 = RefCounted::unreference();
joined_r0x00100e83:
      if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar7), cVar3 != '\0')) {
        (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
        Memory::free_static(pOVar7,false);
      }
      goto LAB_00100da2;
    }
  }
  iVar8 = 3;
  while (uVar4 = OggPacketSequencePlayback::next_ogg_packet((ogg_packet **)pOVar7),
        (char)uVar4 != '\0') {
    iVar5 = vorbis_synthesis_headerin(pAVar1,this + 0xf18,local_48);
    if (iVar5 != 0) {
      uVar4 = 0;
      _err_print_error("_alloc_vorbis","modules/vorbis/audio_stream_ogg_vorbis.cpp",0xd4,
                       "Condition \"err != 0\" is true. Returning: false","Error parsing header",0,0
                      );
      goto LAB_00100e44;
    }
    iVar8 = iVar8 + -1;
    if (iVar8 == 0) {
      iVar8 = vorbis_synthesis_init(this + 0xf38,pAVar1);
      if (iVar8 == 0) {
        this[0x108a] = (AudioStreamPlaybackOggVorbis)0x1;
        iVar8 = vorbis_block_init(this + 0xf38,this + 0xfc8);
        if (iVar8 == 0) {
          *(undefined2 *)(this + 0x108b) = 0x101;
        }
        else {
          uVar4 = 0;
          _err_print_error("_alloc_vorbis","modules/vorbis/audio_stream_ogg_vorbis.cpp",0xdc,
                           "Condition \"err != 0\" is true. Returning: false",
                           "Error initializing block",0);
        }
      }
      else {
        uVar4 = 0;
        _err_print_error("_alloc_vorbis","modules/vorbis/audio_stream_ogg_vorbis.cpp",0xd8,
                         "Condition \"err != 0\" is true. Returning: false",
                         "Error initializing dsp state",0,0);
      }
      goto LAB_00100e44;
    }
    pOVar7 = *(Object **)(this + 0x1098);
  }
  uVar4 = 0;
  _err_print_error("_alloc_vorbis","modules/vorbis/audio_stream_ogg_vorbis.cpp",0xcf,
                   "Not enough packets to parse header",0,1);
LAB_00100e44:
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AudioStreamOggVorbis::AudioStreamOggVorbis() */

void __thiscall AudioStreamOggVorbis::AudioStreamOggVorbis(AudioStreamOggVorbis *this)

{
  undefined8 uVar1;
  
  Resource::Resource((Resource *)this);
  *(code **)this = vorbis_synthesis;
  *(undefined1 (*) [16])(this + 0x240) = (undefined1  [16])0x0;
  StringName::StringName((StringName *)(this + 0x270),"_instantiate_playback",false);
  this[0x278] = (AudioStreamOggVorbis)0x0;
  *(undefined8 *)(this + 0x280) = 0;
  StringName::StringName((StringName *)(this + 0x288),"_get_stream_name",false);
  this[0x290] = (AudioStreamOggVorbis)0x0;
  *(undefined8 *)(this + 0x298) = 0;
  StringName::StringName((StringName *)(this + 0x2a0),"_get_length",false);
  this[0x2a8] = (AudioStreamOggVorbis)0x0;
  *(undefined8 *)(this + 0x2b0) = 0;
  StringName::StringName((StringName *)(this + 0x2b8),"_is_monophonic",false);
  this[0x2c0] = (AudioStreamOggVorbis)0x0;
  *(undefined8 *)(this + 0x2c8) = 0;
  StringName::StringName((StringName *)(this + 0x2d0),"_get_bpm",false);
  this[0x2d8] = (AudioStreamOggVorbis)0x0;
  *(undefined8 *)(this + 0x2e0) = 0;
  StringName::StringName((StringName *)(this + 0x2e8),"_has_loop",false);
  this[0x2f0] = (AudioStreamOggVorbis)0x0;
  *(undefined8 *)(this + 0x2f8) = 0;
  StringName::StringName((StringName *)(this + 0x300),"_get_bar_beats",false);
  this[0x308] = (AudioStreamOggVorbis)0x0;
  *(undefined8 *)(this + 0x310) = 0;
  StringName::StringName((StringName *)(this + 0x318),"_get_beat_count",false);
  this[800] = (AudioStreamOggVorbis)0x0;
  *(undefined8 *)(this + 0x328) = 0;
  StringName::StringName((StringName *)(this + 0x330),"_get_parameter_list",false);
  this[0x338] = (AudioStreamOggVorbis)0x0;
  *(undefined ***)this = &PTR__initialize_classv_00113cb8;
  uVar1 = _LC40;
  *(undefined8 *)(this + 0x340) = 0;
  *(undefined4 *)(this + 0x348) = 1;
  *(undefined8 *)(this + 0x350) = 0;
  this[0x358] = (AudioStreamOggVorbis)0x0;
  *(undefined8 *)(this + 0x360) = 0;
  *(undefined8 *)(this + 0x368) = 0;
  *(undefined8 *)(this + 0x370) = 0;
  *(undefined8 *)(this + 0x378) = uVar1;
  return;
}



/* AudioStreamPlaybackOggVorbis::_mix_frames_vorbis(AudioFrame*, int) */

int __thiscall
AudioStreamPlaybackOggVorbis::_mix_frames_vorbis
          (AudioStreamPlaybackOggVorbis *this,AudioFrame *param_1,int param_2)

{
  undefined4 uVar1;
  AudioStreamPlaybackOggVorbis AVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long in_FS_OFFSET;
  CowData<char32_t> local_50 [8];
  long *local_48;
  long local_40;
  
  AVar2 = this[0x108c];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (AVar2 == (AudioStreamPlaybackOggVorbis)0x0) {
    _err_print_error("_mix_frames_vorbis","modules/vorbis/audio_stream_ogg_vorbis.cpp",0x90,
                     "Condition \"!ready\" is true. Returning: p_frames",0,0);
    goto LAB_00101329;
  }
  if (this[0x108d] == (AudioStreamPlaybackOggVorbis)0x0) {
    cVar4 = OggPacketSequencePlayback::next_ogg_packet(*(ogg_packet ***)(this + 0x1098));
    if (cVar4 == '\0') {
      this[0x108e] = (AudioStreamPlaybackOggVorbis)0x0;
      param_2 = -1;
      _err_print_error("_mix_frames_vorbis","modules/vorbis/audio_stream_ogg_vorbis.cpp",0x97,
                       "ran out of packets in stream",0,1);
      goto LAB_00101329;
    }
    iVar5 = vorbis_synthesis(this + 0xfc8,0);
    if (iVar5 == 0) {
      iVar5 = vorbis_synthesis_blockin(this + 0xf38,this + 0xfc8);
      if (iVar5 == 0) {
        this[0x108e] = (AudioStreamPlaybackOggVorbis)(lRam0000000000000018 == 0);
        goto LAB_001012b0;
      }
      itos((long)local_50);
      operator+((char *)&local_48,(String *)"Error during vorbis block processing ");
      uVar8 = 0x9f;
    }
    else {
      itos((long)local_50);
      operator+((char *)&local_48,(String *)"Error during vorbis synthesis ");
      uVar8 = 0x9c;
    }
    _err_print_error("_mix_frames_vorbis","modules/vorbis/audio_stream_ogg_vorbis.cpp",uVar8,
                     "Condition \"err != 0\" is true. Returning: p_frames",
                     (CowData<char32_t> *)&local_48,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    CowData<char32_t>::_unref(local_50);
    goto LAB_00101329;
  }
LAB_001012b0:
  iVar5 = vorbis_synthesis_pcmout(this + 0xf38,&local_48);
  if (param_2 < iVar5) {
    this[0x108d] = AVar2;
    if (1 < *(int *)(this + 0xee4)) goto LAB_001012e0;
LAB_00101367:
    if (0 < param_2) {
      lVar3 = *local_48;
      lVar7 = 0;
      do {
        uVar1 = *(undefined4 *)(lVar3 + lVar7 * 4);
        *(ulong *)(param_1 + lVar7 * 8) = CONCAT44(uVar1,uVar1);
        lVar7 = lVar7 + 1;
      } while (param_2 != lVar7);
    }
  }
  else {
    this[0x108d] = (AudioStreamPlaybackOggVorbis)0x0;
    param_2 = iVar5;
    if (*(int *)(this + 0xee4) < 2) goto LAB_00101367;
LAB_001012e0:
    if (0 < param_2) {
      lVar3 = *local_48;
      lVar7 = local_48[1];
      lVar6 = 0;
      do {
        *(undefined4 *)(param_1 + lVar6 * 2) = *(undefined4 *)(lVar3 + lVar6);
        *(undefined4 *)(param_1 + lVar6 * 2 + 4) = *(undefined4 *)(lVar7 + lVar6);
        lVar6 = lVar6 + 4;
      } while ((long)param_2 * 4 != lVar6);
    }
  }
  vorbis_synthesis_read(this + 0xf38,param_2);
LAB_00101329:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_2;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AudioStreamPlaybackOggVorbis::_mix_internal(AudioFrame*, int) */

int __thiscall
AudioStreamPlaybackOggVorbis::_mix_internal
          (AudioStreamPlaybackOggVorbis *this,AudioFrame *param_1,int param_2)

{
  AudioStreamPlaybackOggVorbis AVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  AudioStreamPlaybackOggVorbis *pAVar10;
  AudioFrame *pAVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  float fVar15;
  double dVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  
  if (this[0x108c] == (AudioStreamPlaybackOggVorbis)0x0) {
    _err_print_error("_mix_internal","modules/vorbis/audio_stream_ogg_vorbis.cpp",0x24,
                     "Condition \"!ready\" is true. Returning: 0",0,0);
    return 0;
  }
  if (this[0x6d4] == (AudioStreamPlaybackOggVorbis)0x0) {
    return 0;
  }
  if (this[0x6d5] == (AudioStreamPlaybackOggVorbis)0x0) {
    AVar1 = *(AudioStreamPlaybackOggVorbis *)(*(long *)(this + 0x10a0) + 0x358);
  }
  else {
    AVar1 = this[0x6d6];
  }
  if (AVar1 != (AudioStreamPlaybackOggVorbis)0x0) {
    pcVar2 = *(code **)(**(long **)(this + 0x10a0) + 0x1d8);
    if (pcVar2 == AudioStreamOggVorbis::get_bpm) {
      dVar16 = (double)(*(long **)(this + 0x10a0))[0x6e];
    }
    else {
      dVar16 = (double)(*pcVar2)();
    }
    if (0.0 < dVar16) {
      pcVar2 = *(code **)(**(long **)(this + 0x10a0) + 0x1f0);
      if (pcVar2 == AudioStreamOggVorbis::get_beat_count) {
        iVar14 = (int)(*(long **)(this + 0x10a0))[0x6f];
        if (0 < iVar14) {
LAB_0010157c:
          fVar15 = (float)OggPacketSequence::get_sampling_rate();
          fVar15 = (float)iVar14 * fVar15 * __LC50;
          pcVar2 = *(code **)(**(long **)(this + 0x10a0) + 0x1d8);
          if (pcVar2 == AudioStreamOggVorbis::get_bpm) {
            dVar16 = (double)(*(long **)(this + 0x10a0))[0x6e];
          }
          else {
            dVar16 = (double)(*pcVar2)();
          }
          iVar14 = (int)((double)fVar15 / dVar16);
          goto LAB_001015ff;
        }
      }
      else {
        iVar14 = (*pcVar2)();
        if (0 < iVar14) {
          pcVar2 = *(code **)(**(long **)(this + 0x10a0) + 0x1f0);
          if (pcVar2 == AudioStreamOggVorbis::get_beat_count) {
            iVar14 = (int)(*(long **)(this + 0x10a0))[0x6f];
          }
          else {
            iVar14 = (*pcVar2)();
          }
          goto LAB_0010157c;
        }
      }
    }
  }
  iVar14 = -1;
LAB_001015ff:
  uVar13 = param_2;
  if (param_2 < 1) {
    return 0;
  }
LAB_001016d4:
  do {
    if (this[0x6d4] == (AudioStreamPlaybackOggVorbis)0x0) {
      return param_2 - uVar13;
    }
    uVar5 = uVar13;
    if (-1 < iVar14) {
      uVar4 = iVar14 - *(int *)(this + 0x6d0);
      uVar5 = 0;
      if (-1 < (int)uVar4) {
        uVar5 = uVar4;
      }
      if ((int)uVar13 <= (int)uVar4) {
        uVar5 = uVar13;
      }
    }
    uVar5 = _mix_frames_vorbis(this,param_1 + (long)(int)(param_2 - uVar13) * 8,uVar5);
    if ((int)uVar5 < 0) {
      _err_print_error("_mix_internal","modules/vorbis/audio_stream_ogg_vorbis.cpp",0x3d,
                       "Condition \"mixed < 0\" is true. Returning: 0",0,0);
      return 0;
    }
    iVar7 = *(int *)(this + 0x6d0);
    iVar19 = *(int *)(this + 0xedc);
    lVar8 = (long)iVar19;
    uVar4 = uVar13 - uVar5;
    *(uint *)(this + 0x6d0) = iVar7 + uVar5;
    if (iVar19 < 0x100) {
      uVar3 = 0x100U - iVar19;
      if ((int)uVar5 < (int)(0x100U - iVar19)) {
        uVar3 = uVar5;
      }
      iVar12 = iVar19 + uVar3;
      if (iVar19 < iVar12) {
        lVar9 = 0;
        iVar20 = iVar19;
        do {
          iVar17 = (int)_LC52 - iVar19;
          iVar18 = _LC52._4_4_ - iVar20;
          iVar19 = iVar19 + (int)_LC54;
          iVar20 = iVar20 + _LC54._4_4_;
          *(ulong *)(param_1 + lVar9 + ((long)param_2 - (long)(int)uVar13) * 8) =
               CONCAT44((float)((ulong)*(undefined8 *)(this + lVar9 + lVar8 * 8 + 0x6dc) >> 0x20) *
                        (float)iVar18 * _LC53._4_4_ +
                        (float)((ulong)*(undefined8 *)
                                        (param_1 + lVar9 + ((long)param_2 - (long)(int)uVar13) * 8)
                               >> 0x20),
                        (float)*(undefined8 *)(this + lVar9 + lVar8 * 8 + 0x6dc) *
                        (float)iVar17 * (float)_LC53 +
                        (float)*(undefined8 *)
                                (param_1 + lVar9 + ((long)param_2 - (long)(int)uVar13) * 8));
          lVar9 = lVar9 + 8;
        } while (lVar9 != (ulong)uVar3 * 8);
      }
      *(int *)(this + 0xedc) = iVar12;
    }
    uVar13 = uVar4;
    if (((iVar14 < 0) || (AVar1 == (AudioStreamPlaybackOggVorbis)0x0)) ||
       ((int)(iVar7 + uVar5) < iVar14)) {
      iVar7 = param_2 - uVar4;
      if ((this[0x108e] == (AudioStreamPlaybackOggVorbis)0x0) &&
         (this[0x108d] == (AudioStreamPlaybackOggVorbis)0x0)) {
        if (uVar5 == 0) {
          pcVar2 = *(code **)(**(long **)(this + 0x10a0) + 0x1f8);
          if (pcVar2 == AudioStreamOggVorbis::get_length) {
            if ((*(long **)(this + 0x10a0))[0x6d] != 0) {
              fVar15 = (float)OggPacketSequence::get_length();
              dVar16 = (double)fVar15;
              goto LAB_00101681;
            }
            _err_print_error("get_length","modules/vorbis/audio_stream_ogg_vorbis.cpp",0x1ed,
                             "Condition \"packet_sequence.is_null()\" is true. Returning: 0",0,0);
          }
          else {
            dVar16 = (double)(*pcVar2)();
LAB_00101681:
            if (0.0 < dVar16) goto LAB_0010168f;
          }
          if (param_2 <= iVar7) {
            this[0x6d4] = (AudioStreamPlaybackOggVorbis)0x0;
            goto LAB_001016d4;
          }
LAB_00101901:
          pAVar11 = param_1 + (long)iVar7 * 8;
          do {
            *(undefined8 *)pAVar11 = 0;
            pAVar11 = pAVar11 + 8;
          } while (pAVar11 != param_1 + ((ulong)uVar4 + (long)iVar7) * 8);
        }
        else {
LAB_0010168f:
          if (AVar1 != (AudioStreamPlaybackOggVorbis)0x0) {
            (**(code **)(*(long *)this + 0x178))
                      (*(undefined8 *)(*(long *)(this + 0x10a0) + 0x360),this);
            *(int *)(this + 0x6d8) = *(int *)(this + 0x6d8) + 1;
            goto joined_r0x001016cb;
          }
          if (iVar7 < param_2) goto LAB_00101901;
        }
        this[0x6d4] = (AudioStreamPlaybackOggVorbis)0x0;
      }
    }
    else {
      if ((this[0x108e] != (AudioStreamPlaybackOggVorbis)0x0) ||
         (uVar6 = 0x100, this[0x108d] != (AudioStreamPlaybackOggVorbis)0x0)) {
        iVar7 = _mix_frames_vorbis(this,(AudioFrame *)(this + 0x6dc),0x100);
        if (iVar7 < 0x100) {
          pAVar10 = this + (long)iVar7 * 8;
          do {
            *(undefined8 *)(pAVar10 + 0x6dc) = 0;
            pAVar10 = pAVar10 + 8;
          } while (pAVar10 != this + ((ulong)(0xff - iVar7) + (long)iVar7) * 8 + 8);
        }
        uVar6 = 0;
      }
      *(undefined4 *)(this + 0xedc) = uVar6;
      (**(code **)(*(long *)this + 0x178))(*(undefined8 *)(*(long *)(this + 0x10a0) + 0x360),this);
      *(int *)(this + 0x6d8) = *(int *)(this + 0x6d8) + 1;
      iVar7 = param_2 - uVar4;
    }
joined_r0x001016cb:
    if ((int)uVar4 < 1) {
      return iVar7;
    }
  } while( true );
}



/* AudioStreamPlaybackOggVorbis::seek(double) */

void __thiscall
AudioStreamPlaybackOggVorbis::seek(AudioStreamPlaybackOggVorbis *this,double param_1)

{
  AudioStreamPlaybackOggVorbis *pAVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  char *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  long in_FS_OFFSET;
  float fVar14;
  double dVar15;
  double local_78;
  long local_68;
  CowData<char32_t> local_60 [8];
  String local_58 [8];
  undefined8 local_50;
  String local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (this[0x108c] == (AudioStreamPlaybackOggVorbis)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar10 = 0;
      uVar9 = 0x115;
      pcVar8 = "Condition \"!ready\" is true.";
LAB_00101cd9:
      _err_print_error(&_LC55,"modules/vorbis/audio_stream_ogg_vorbis.cpp",uVar9,pcVar8,0,uVar10);
      return;
    }
    goto LAB_0010210a;
  }
  plVar2 = *(long **)(this + 0x10a0);
  if (plVar2 == (long *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar10 = 0;
      uVar9 = 0x116;
      pcVar8 = "Condition \"vorbis_stream.is_null()\" is true.";
      goto LAB_00101cd9;
    }
    goto LAB_0010210a;
  }
  if (this[0x6d4] != (AudioStreamPlaybackOggVorbis)0x0) {
    if (*(code **)(*plVar2 + 0x1f8) == AudioStreamOggVorbis::get_length) {
      if (plVar2[0x6d] == 0) {
        _err_print_error("get_length","modules/vorbis/audio_stream_ogg_vorbis.cpp",0x1ed,
                         "Condition \"packet_sequence.is_null()\" is true. Returning: 0",0,0);
        dVar15 = 0.0;
      }
      else {
        fVar14 = (float)OggPacketSequence::get_length();
        dVar15 = (double)fVar14;
      }
    }
    else {
      dVar15 = (double)(**(code **)(*plVar2 + 0x1f8))();
    }
    local_78 = param_1;
    if (dVar15 <= param_1) {
      local_78 = 0.0;
    }
    fVar14 = (float)OggPacketSequence::get_sampling_rate();
    *(int *)(this + 0x6d0) = (int)(long)((double)fVar14 * local_78);
    if (*(code **)(*(long *)this + 0x1c8) == get_stream_sampling_rate) {
      fVar14 = (float)OggPacketSequence::get_sampling_rate();
    }
    else {
      fVar14 = (float)(**(code **)(*(long *)this + 0x1c8))(this);
    }
    lVar12 = (long)((double)fVar14 * local_78);
    cVar4 = OggPacketSequencePlayback::seek_page(*(long *)(this + 0x1098));
    if (cVar4 != '\0') {
      pAVar1 = this + 0xf38;
      lVar7 = OggPacketSequencePlayback::get_page_number();
      lVar13 = lVar7 + -1;
      if (lVar7 + -1 < 0) {
        lVar13 = 0;
      }
LAB_00101b75:
      lVar7 = -1;
      OggPacketSequencePlayback::set_page_number(*(long *)(this + 0x1098));
      vorbis_synthesis_restart(pAVar1);
      do {
        cVar4 = OggPacketSequencePlayback::next_ogg_packet(*(ogg_packet ***)(this + 0x1098));
        if (cVar4 == '\0') {
          if (seek(double)::first_print != '\0') {
            _err_print_error(&_LC55,"modules/vorbis/audio_stream_ogg_vorbis.cpp",0x13d,
                             "Seeking beyond limits",0,1);
            seek(double)::first_print = '\0';
          }
          goto LAB_00101c50;
        }
        iVar5 = vorbis_synthesis(this + 0xfc8,local_68);
        if (iVar5 == -0x87) goto LAB_00101c1c;
        if (iVar5 != 0) {
          local_50 = 0;
          String::parse_latin1((String *)&local_50,".");
          itos((long)local_60);
          operator+((char *)local_58,(String *)"Error during vorbis synthesis ");
          String::operator+(local_48,local_58);
          uVar9 = 0x143;
LAB_00101d83:
          _err_print_error(&_LC55,"modules/vorbis/audio_stream_ogg_vorbis.cpp",uVar9,
                           "Condition \"err != 0\" is true.",(CowData<char32_t> *)local_48,0,0);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_48);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
          CowData<char32_t>::_unref(local_60);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
          goto LAB_00101c50;
        }
        iVar5 = vorbis_synthesis_blockin(pAVar1,this + 0xfc8);
        if (iVar5 != 0) {
          local_50 = 0;
          String::parse_latin1((String *)&local_50,".");
          itos((long)local_60);
          operator+((char *)local_58,(String *)"Error during vorbis block processing ");
          String::operator+(local_48,local_58);
          uVar9 = 0x146;
          goto LAB_00101d83;
        }
        iVar5 = vorbis_synthesis_pcmout(pAVar1,0);
        if (-1 < lVar7) {
          if (iVar5 + lVar7 < lVar12) {
            iVar6 = vorbis_synthesis_read(pAVar1,iVar5);
            lVar7 = iVar5 + lVar7;
            if (iVar6 == 0) goto LAB_00101c1c;
            local_50 = 0;
            String::parse_latin1((String *)&local_50,".");
            itos((long)local_60);
            operator+((char *)local_58,(String *)"Error during vorbis read updating ");
            String::operator+(local_48,local_58);
            uVar9 = 0x15a;
          }
          else {
            iVar11 = (int)lVar12 - (int)lVar7;
            iVar6 = vorbis_synthesis_read(pAVar1,iVar11);
            if (iVar6 == 0) {
              this[0x108d] = (AudioStreamPlaybackOggVorbis)(iVar11 < iVar5);
              this[0x108e] = (AudioStreamPlaybackOggVorbis)(*(long *)(local_68 + 0x18) == 0);
              goto LAB_00101c50;
            }
            local_50 = 0;
            String::parse_latin1((String *)&local_50,".");
            itos((long)local_60);
            operator+((char *)local_58,(String *)"Error during vorbis read updating ");
            String::operator+(local_48,local_58);
            uVar9 = 0x153;
          }
          _err_print_error(&_LC55,"modules/vorbis/audio_stream_ogg_vorbis.cpp",uVar9,
                           "Condition \"err != 0\" is true.",(CowData<char32_t> *)local_48,0,0);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_48);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
          CowData<char32_t>::_unref(local_60);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
          goto LAB_00101c50;
        }
        iVar5 = vorbis_synthesis_read(pAVar1,iVar5);
        if (iVar5 != 0) {
          local_50 = 0;
          String::parse_latin1((String *)&local_50,".");
          itos((long)local_60);
          operator+((char *)local_58,(String *)"Error during vorbis read updating ");
          String::operator+(local_48,local_58);
          uVar9 = 0x14d;
          goto LAB_00101d83;
        }
LAB_00101c1c:
        lVar3 = *(long *)(local_68 + 0x20);
        if ((lVar3 != -1) && (lVar7 = lVar3, lVar12 < lVar3)) goto LAB_00102048;
        if (*(long *)(local_68 + 0x18) != 0) {
          *(undefined2 *)(this + 0x108d) = 0;
          goto LAB_00101c50;
        }
      } while( true );
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar10 = 1;
      uVar9 = 0x124;
      pcVar8 = "seek failed";
      goto LAB_00101cd9;
    }
    goto LAB_0010210a;
  }
  goto LAB_00101c50;
LAB_00102048:
  if (lVar13 == 0) goto LAB_0010210f;
  lVar13 = lVar13 + -1;
  goto LAB_00101b75;
LAB_0010210f:
  lVar12 = *(long *)(local_68 + 0x18);
  this[0x108d] = (AudioStreamPlaybackOggVorbis)0x0;
  this[0x108e] = (AudioStreamPlaybackOggVorbis)(lVar12 == 0);
LAB_00101c50:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010210a:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AudioStreamOggVorbis::maybe_update_info() */

void __thiscall AudioStreamOggVorbis::maybe_update_info(AudioStreamOggVorbis *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  long in_FS_OFFSET;
  Object *local_e0;
  long local_d8;
  CowData<char32_t> local_d0 [8];
  CowData<char32_t> local_c8 [8];
  undefined8 local_c0;
  String local_b8 [8];
  CowData<char32_t> local_b0 [8];
  undefined *local_a8;
  undefined8 local_a0;
  undefined1 local_98 [32];
  undefined1 local_78 [8];
  long local_70;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x368) == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("maybe_update_info","modules/vorbis/audio_stream_ogg_vorbis.cpp",0x1b0,
                       "Condition \"packet_sequence.is_null()\" is true.",0,0);
      return;
    }
  }
  else {
    iVar3 = 0;
    vorbis_info_init(local_78);
    vorbis_comment_init(local_98);
    OggPacketSequence::instantiate_playback();
    do {
      cVar1 = OggPacketSequencePlayback::next_ogg_packet((ogg_packet **)local_e0);
      if (cVar1 == '\0') {
        _err_print_error("maybe_update_info","modules/vorbis/audio_stream_ogg_vorbis.cpp",0x1be,
                         "Failed to get header packet",0,1);
        break;
      }
      if (iVar3 == 0) {
        *(undefined8 *)(local_d8 + 0x10) = 1;
        iVar2 = vorbis_synthesis_idheader(local_d8);
        if (iVar2 == 0) {
          _err_print_error("maybe_update_info","modules/vorbis/audio_stream_ogg_vorbis.cpp",0x1c4,
                           "Condition \"!vorbis_synthesis_idheader(packet)\" is true.",0,0);
          goto LAB_001021ff;
        }
        iVar2 = vorbis_synthesis_headerin(local_78,local_98,local_d8);
      }
      else {
        iVar2 = vorbis_synthesis_headerin(local_78);
      }
      if (iVar2 != 0) {
        itos((long)local_b0);
        local_c0 = 0;
        local_a8 = &_LC71;
        local_a0 = 2;
        String::parse_latin1((StrRange *)&local_c0);
        itos((long)local_d0);
        operator+((char *)local_c8,(String *)"Error parsing header packet ");
        String::operator+(local_b8,(String *)local_c8);
        String::operator+((String *)&local_a8,local_b8);
        _err_print_error("maybe_update_info","modules/vorbis/audio_stream_ogg_vorbis.cpp",0x1c8,
                         "Condition \"err != 0\" is true.",(String *)&local_a8,0,0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
        CowData<char32_t>::_unref(local_c8);
        CowData<char32_t>::_unref(local_d0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
        CowData<char32_t>::_unref(local_b0);
        goto LAB_001021ff;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 != 3);
    OggPacketSequence::set_sampling_rate((float)local_70);
    vorbis_comment_clear(local_98);
    vorbis_info_clear(local_78);
LAB_001021ff:
    if (((local_e0 != (Object *)0x0) && (cVar1 = RefCounted::unreference(), cVar1 != '\0')) &&
       (cVar1 = predelete_handler(local_e0), cVar1 != '\0')) {
      (**(code **)(*(long *)local_e0 + 0x140))(local_e0);
      Memory::free_static(local_e0,false);
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AudioStreamOggVorbis::get_parameter_list(List<AudioStream::Parameter, DefaultAllocator>*) */

void __thiscall AudioStreamOggVorbis::get_parameter_list(AudioStreamOggVorbis *this,List *param_1)

{
  undefined8 uVar1;
  long *plVar2;
  undefined4 *puVar3;
  undefined1 (*pauVar4) [16];
  long in_FS_OFFSET;
  StringName *local_190;
  long local_140;
  long local_138;
  long local_130;
  undefined4 local_128;
  long local_120;
  char *local_118;
  int local_110;
  long local_108;
  undefined4 local_100;
  char *local_f8;
  undefined1 local_f0 [16];
  undefined8 local_e0;
  long local_d8;
  undefined4 local_d0;
  int local_c8 [2];
  undefined1 local_c0 [16];
  int local_a8 [2];
  undefined1 local_a0 [16];
  undefined4 local_88;
  undefined1 local_80 [16];
  int local_70;
  long local_68;
  undefined4 local_60;
  int local_58 [2];
  undefined1 local_50 [16];
  long local_40;
  
  local_f0._8_8_ = local_f0._0_8_;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_c0 = (undefined1  [16])0x0;
  local_f8 = "";
  local_c8[0] = 0;
  local_c8[1] = 0;
  local_130 = 0;
  local_138 = 0;
  local_f0._0_8_ = 0;
  String::parse_latin1((StrRange *)&local_138);
  local_f8 = "looping";
  local_140 = 0;
  local_f0._0_8_ = 7;
  String::parse_latin1((StrRange *)&local_140);
  local_128 = 1;
  local_120 = 0;
  if (local_140 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_120,(CowData *)&local_140);
  }
  local_118 = (char *)0x0;
  local_110 = 0;
  local_108 = 0;
  if (local_138 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_108,(CowData *)&local_138);
    local_100 = 0x16;
    if (local_110 == 0x11) {
      StringName::StringName((StringName *)&local_f8,(String *)&local_108,false);
      if (local_118 == local_f8) {
        if ((StringName::configured != '\0') && (local_f8 != (char *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_118 = local_f8;
      }
      goto LAB_0010260d;
    }
  }
  local_100 = 0x16;
  StringName::operator=((StringName *)&local_118,(StringName *)&local_130);
LAB_0010260d:
  local_190 = (StringName *)&local_118;
  local_70 = 0;
  local_80 = (undefined1  [16])0x0;
  local_88 = local_128;
  local_68 = 0;
  local_60 = 6;
  local_58[0] = 0;
  local_50 = (undefined1  [16])0x0;
  if (local_120 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)local_80,(CowData *)&local_120);
  }
  StringName::operator=((StringName *)(local_80 + 8),local_190);
  local_70 = local_110;
  if (local_68 != local_108) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)&local_108);
  }
  local_60 = local_100;
  Variant::operator=((Variant *)local_58,(Variant *)local_c8);
  if (*(long *)param_1 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar3 = (undefined4 *)operator_new(0x60,DefaultAllocator::alloc);
  local_f8 = (char *)0x0;
  local_f0 = (undefined1  [16])0x0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 6;
  local_a0 = (undefined1  [16])0x0;
  local_a8[0] = 0;
  local_a8[1] = 0;
  puVar3[6] = 0;
  *puVar3 = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  puVar3[10] = 6;
  puVar3[0xc] = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar3 + 0xe) = (undefined1  [16])0x0;
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)(local_f0 + 8));
  puVar3[6] = (undefined4)local_e0;
  if (*(long *)(puVar3 + 8) != local_d8) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_d8);
  }
  puVar3[10] = local_d0;
  Variant::operator=((Variant *)(puVar3 + 0xc),(Variant *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_f0._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_f0);
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  *(undefined8 *)(puVar3 + 0x16) = 0;
  *(undefined1 (*) [16])(puVar3 + 0x12) = (undefined1  [16])0x0;
  *puVar3 = local_88;
  if (*(long *)(puVar3 + 2) != local_80._0_8_) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 2),(CowData *)local_80);
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)(local_80 + 8));
  puVar3[6] = local_70;
  if (*(long *)(puVar3 + 8) != local_68) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_68);
  }
  puVar3[10] = local_60;
  Variant::operator=((Variant *)(puVar3 + 0xc),(Variant *)local_58);
  uVar1 = *(undefined8 *)(*(long *)param_1 + 8);
  *(long *)(puVar3 + 0x16) = *(long *)param_1;
  *(undefined8 *)(puVar3 + 0x12) = 0;
  plVar2 = *(long **)param_1;
  *(undefined8 *)(puVar3 + 0x14) = uVar1;
  if (plVar2[1] != 0) {
    *(undefined4 **)(plVar2[1] + 0x48) = puVar3;
  }
  plVar2[1] = (long)puVar3;
  if (*plVar2 == 0) {
    *plVar2 = (long)puVar3;
  }
  *(int *)(plVar2 + 2) = (int)plVar2[2] + 1;
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  if ((StringName::configured != '\0') && (local_80._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  if ((StringName::configured != '\0') && (local_118 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
  if ((StringName::configured != '\0') && (local_130 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_c8[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* AudioStreamOggVorbis::_bind_methods() */

void AudioStreamOggVorbis::_bind_methods(void)

{
  MethodBind *pMVar1;
  uint uVar2;
  long in_FS_OFFSET;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  char *local_a8;
  undefined8 local_a0;
  char *local_98;
  undefined8 local_90;
  char *local_68;
  undefined8 local_60;
  char **local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = 0;
  local_68 = "stream_data";
  uVar2 = (uint)&local_58;
  local_58 = &local_68;
  D_METHODP((char *)&local_98,(char ***)"load_from_buffer",uVar2);
  StringName::StringName((StringName *)&local_a8,"AudioStreamOggVorbis",false);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar1 = (MethodBind *)operator_new(0x60,"");
  MethodBind::MethodBind(pMVar1);
  *(undefined ***)pMVar1 = &PTR__gen_argument_type_00113ef0;
  *(code **)(pMVar1 + 0x58) = load_from_buffer;
  MethodBind::_generate_argument_types((int)pMVar1);
  *(undefined4 *)(pMVar1 + 0x34) = 1;
  MethodBind::_set_static(SUB81(pMVar1,0));
  MethodBind::_set_returns(SUB81(pMVar1,0));
  StringName::operator=((StringName *)(pMVar1 + 0x18),(StringName *)&local_a8);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_98);
  local_60 = 0;
  local_68 = "path";
  local_58 = &local_68;
  D_METHODP((char *)&local_98,(char ***)"load_from_file",uVar2);
  StringName::StringName((StringName *)&local_a8,"AudioStreamOggVorbis",false);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar1 = (MethodBind *)operator_new(0x60,"");
  MethodBind::MethodBind(pMVar1);
  *(undefined ***)pMVar1 = &PTR__gen_argument_type_00113f50;
  *(code **)(pMVar1 + 0x58) = load_from_file;
  MethodBind::_generate_argument_types((int)pMVar1);
  *(undefined4 *)(pMVar1 + 0x34) = 1;
  MethodBind::_set_static(SUB81(pMVar1,0));
  MethodBind::_set_returns(SUB81(pMVar1,0));
  StringName::operator=((StringName *)(pMVar1 + 0x18),(StringName *)&local_a8);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_98);
  local_60 = 0;
  local_68 = "packet_sequence";
  local_58 = &local_68;
  D_METHODP((char *)&local_98,(char ***)"set_packet_sequence",uVar2);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar1 = create_method_bind<AudioStreamOggVorbis,Ref<OggPacketSequence>>(set_packet_sequence);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_98);
  D_METHODP((char *)&local_98,(char ***)"get_packet_sequence",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar1 = create_method_bind<AudioStreamOggVorbis,Ref<OggPacketSequence>>(get_packet_sequence);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_98);
  local_60 = 0;
  local_68 = "enable";
  local_58 = &local_68;
  D_METHODP((char *)&local_98,(char ***)"set_loop",uVar2);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar1 = create_method_bind<AudioStreamOggVorbis,bool>(set_loop);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_98);
  D_METHODP((char *)&local_98,(char ***)"has_loop",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar1 = create_method_bind<AudioStreamOggVorbis,bool>((_func_bool *)0x1e1);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_98);
  local_60 = 0;
  local_68 = "seconds";
  local_58 = &local_68;
  D_METHODP((char *)&local_98,(char ***)"set_loop_offset",uVar2);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar1 = create_method_bind<AudioStreamOggVorbis,double>(set_loop_offset);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_98);
  D_METHODP((char *)&local_98,(char ***)"get_loop_offset",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar1 = create_method_bind<AudioStreamOggVorbis,double>(get_loop_offset);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_98);
  local_60 = 0;
  local_68 = "bpm";
  local_58 = &local_68;
  D_METHODP((char *)&local_98,(char ***)"set_bpm",uVar2);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar1 = create_method_bind<AudioStreamOggVorbis,double>(set_bpm);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_98);
  D_METHODP((char *)&local_98,(char ***)"get_bpm",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar1 = create_method_bind<AudioStreamOggVorbis,double>((_func_double *)0x1d9);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_98);
  local_68 = "count";
  local_60 = 0;
  local_58 = &local_68;
  D_METHODP((char *)&local_98,(char ***)"set_beat_count",uVar2);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar1 = create_method_bind<AudioStreamOggVorbis,int>(set_beat_count);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_98);
  D_METHODP((char *)&local_98,(char ***)"get_beat_count",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar1 = create_method_bind<AudioStreamOggVorbis,int>((_func_int *)0x1f1);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_98);
  local_68 = "count";
  local_60 = 0;
  local_58 = &local_68;
  D_METHODP((char *)&local_98,(char ***)"set_bar_beats",uVar2);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar1 = create_method_bind<AudioStreamOggVorbis,int>(set_bar_beats);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_98);
  D_METHODP((char *)&local_98,(char ***)"get_bar_beats",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar1 = create_method_bind<AudioStreamOggVorbis,int>((_func_int *)0x1e9);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_98);
  _scs_create((char *)&local_b0,true);
  _scs_create((char *)&local_b8,true);
  local_98 = "";
  local_c0 = 0;
  local_c8 = 0;
  local_90 = 0;
  String::parse_latin1((StrRange *)&local_c8);
  local_d0 = 0;
  local_98 = "packet_sequence";
  local_90 = 0xf;
  String::parse_latin1((StrRange *)&local_d0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_98,0x18,(StrRange *)&local_d0,0,(StrRange *)&local_c8,2,
             &local_c0);
  local_a8 = "AudioStreamOggVorbis";
  local_d8 = 0;
  local_a0 = 0x14;
  String::parse_latin1((StrRange *)&local_d8);
  StringName::StringName((StringName *)&local_a8,(String *)&local_d8,false);
  ClassDB::add_property
            ((StringName *)&local_a8,(PropertyInfo *)&local_98,(StringName *)&local_b8,
             (StringName *)&local_b0,-1);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if (StringName::configured != '\0') {
    if (local_c0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001034da;
    }
    if (local_b8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001034da;
    }
    if (local_b0 != 0) {
      StringName::unref();
    }
  }
LAB_001034da:
  _scs_create((char *)&local_b0,true);
  _scs_create((char *)&local_b8,true);
  local_98 = "0,400,0.01,or_greater";
  local_c0 = 0;
  local_c8 = 0;
  local_90 = 0x15;
  String::parse_latin1((StrRange *)&local_c8);
  local_98 = "bpm";
  local_d0 = 0;
  local_90 = 3;
  String::parse_latin1((StrRange *)&local_d0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_98,3,(StrRange *)&local_d0,1,(StrRange *)&local_c8,6,&local_c0);
  local_a8 = "AudioStreamOggVorbis";
  local_d8 = 0;
  local_a0 = 0x14;
  String::parse_latin1((StrRange *)&local_d8);
  StringName::StringName((StringName *)&local_a8,(String *)&local_d8,false);
  ClassDB::add_property
            ((StringName *)&local_a8,(PropertyInfo *)&local_98,(StringName *)&local_b8,
             (StringName *)&local_b0,-1);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if (StringName::configured != '\0') {
    if (local_c0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00103657;
    }
    if (local_b8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00103657;
    }
    if (local_b0 != 0) {
      StringName::unref();
    }
  }
LAB_00103657:
  _scs_create((char *)&local_b0,true);
  _scs_create((char *)&local_b8,true);
  local_98 = "0,512,1,or_greater";
  local_c0 = 0;
  local_c8 = 0;
  local_90 = 0x12;
  String::parse_latin1((StrRange *)&local_c8);
  local_98 = "beat_count";
  local_d0 = 0;
  local_90 = 10;
  String::parse_latin1((StrRange *)&local_d0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_98,2,(StrRange *)&local_d0,1,(StrRange *)&local_c8,6,&local_c0);
  local_a8 = "AudioStreamOggVorbis";
  local_d8 = 0;
  local_a0 = 0x14;
  String::parse_latin1((StrRange *)&local_d8);
  StringName::StringName((StringName *)&local_a8,(String *)&local_d8,false);
  ClassDB::add_property
            ((StringName *)&local_a8,(PropertyInfo *)&local_98,(StringName *)&local_b8,
             (StringName *)&local_b0,-1);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if (StringName::configured != '\0') {
    if (local_c0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001037d5;
    }
    if (local_b8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001037d5;
    }
    if (local_b0 != 0) {
      StringName::unref();
    }
  }
LAB_001037d5:
  _scs_create((char *)&local_b0,true);
  _scs_create((char *)&local_b8,true);
  local_98 = "2,32,1,or_greater";
  local_c0 = 0;
  local_c8 = 0;
  local_90 = 0x11;
  String::parse_latin1((StrRange *)&local_c8);
  local_98 = "bar_beats";
  local_d0 = 0;
  local_90 = 9;
  String::parse_latin1((StrRange *)&local_d0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_98,2,(StrRange *)&local_d0,1,(StrRange *)&local_c8,6,&local_c0);
  local_a8 = "AudioStreamOggVorbis";
  local_d8 = 0;
  local_a0 = 0x14;
  String::parse_latin1((StrRange *)&local_d8);
  StringName::StringName((StringName *)&local_a8,(String *)&local_d8,false);
  ClassDB::add_property
            ((StringName *)&local_a8,(PropertyInfo *)&local_98,(StringName *)&local_b8,
             (StringName *)&local_b0,-1);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if (StringName::configured != '\0') {
    if (local_c0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00103952;
    }
    if (local_b8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00103952;
    }
    if (local_b0 != 0) {
      StringName::unref();
    }
  }
LAB_00103952:
  _scs_create((char *)&local_b0,true);
  _scs_create((char *)&local_b8,true);
  local_98 = "";
  local_c0 = 0;
  local_c8 = 0;
  local_90 = 0;
  String::parse_latin1((StrRange *)&local_c8);
  local_98 = "loop";
  local_d0 = 0;
  local_90 = 4;
  String::parse_latin1((StrRange *)&local_d0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_98,1,(StrRange *)&local_d0,0,(StrRange *)&local_c8,6,&local_c0);
  local_a8 = "AudioStreamOggVorbis";
  local_d8 = 0;
  local_a0 = 0x14;
  String::parse_latin1((StrRange *)&local_d8);
  StringName::StringName((StringName *)&local_a8,(String *)&local_d8,false);
  ClassDB::add_property
            ((StringName *)&local_a8,(PropertyInfo *)&local_98,(StringName *)&local_b8,
             (StringName *)&local_b0,-1);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if (StringName::configured != '\0') {
    if (local_c0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00103acb;
    }
    if (local_b8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00103acb;
    }
    if (local_b0 != 0) {
      StringName::unref();
    }
  }
LAB_00103acb:
  _scs_create((char *)&local_b0,true);
  _scs_create((char *)&local_b8,true);
  local_98 = "";
  local_c0 = 0;
  local_c8 = 0;
  local_90 = 0;
  String::parse_latin1((StrRange *)&local_c8);
  local_98 = "loop_offset";
  local_d0 = 0;
  local_90 = 0xb;
  String::parse_latin1((StrRange *)&local_d0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_98,3,(StrRange *)&local_d0,0,(StrRange *)&local_c8,6,&local_c0);
  local_a8 = "AudioStreamOggVorbis";
  local_d8 = 0;
  local_a0 = 0x14;
  String::parse_latin1((StrRange *)&local_d8);
  StringName::StringName((StringName *)&local_a8,(String *)&local_d8,false);
  ClassDB::add_property
            ((StringName *)&local_a8,(PropertyInfo *)&local_98,(StringName *)&local_b8,
             (StringName *)&local_b0,-1);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if (StringName::configured != '\0') {
    if (local_c0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00103c44;
    }
    if (local_b8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00103c44;
    }
    if (local_b0 != 0) {
      StringName::unref();
    }
  }
LAB_00103c44:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<Vector<unsigned char> >::_ref(CowData<Vector<unsigned char> > const&) [clone .part.0] */

void __thiscall
CowData<Vector<unsigned_char>>::_ref(CowData<Vector<unsigned_char>> *this,CowData *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  
  _unref(this);
  if (*(long *)param_1 != 0) {
    plVar1 = (long *)(*(long *)param_1 + -0x10);
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



/* CowData<Vector<unsigned char> >::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Vector<unsigned_char>>::_copy_on_write(CowData<Vector<unsigned_char>> *this)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  CowData<unsigned_char> *this_00;
  long lVar6;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar5 = 0x10;
  if (lVar1 * 0x10 != 0) {
    uVar5 = lVar1 * 0x10 - 1;
    uVar5 = uVar5 | uVar5 >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    uVar5 = (uVar5 | uVar5 >> 0x20) + 0x11;
  }
  puVar3 = (undefined8 *)Memory::alloc_static(uVar5,false);
  if (puVar3 == (undefined8 *)0x0) {
    _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                     "Parameter \"mem_new\" is null.",0,0);
    return;
  }
  this_00 = (CowData<unsigned_char> *)(puVar3 + 3);
  lVar6 = 0;
  *puVar3 = 1;
  puVar3[1] = lVar1;
  if (lVar1 != 0) {
    do {
      lVar4 = lVar6 * 0x10 + *(long *)this;
      *(undefined8 *)this_00 = 0;
      if (*(long *)(lVar4 + 8) != 0) {
        CowData<unsigned_char>::_ref(this_00,(CowData *)(lVar4 + 8));
      }
      lVar6 = lVar6 + 1;
      this_00 = this_00 + 0x10;
    } while (lVar1 != lVar6);
  }
  _unref(this);
  *(undefined8 **)this = puVar3 + 2;
  return;
}



/* AudioStreamOggVorbis::~AudioStreamOggVorbis() */

void __thiscall AudioStreamOggVorbis::~AudioStreamOggVorbis(AudioStreamOggVorbis *this)

{
  char cVar1;
  bool bVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_00113cb8;
  if (*(long *)(this + 0x368) != 0) {
    cVar1 = RefCounted::unreference();
    if (cVar1 != '\0') {
      memdelete<OggPacketSequence>(*(OggPacketSequence **)(this + 0x368));
    }
  }
  bVar2 = StringName::configured != '\0';
  *(code **)this = vorbis_synthesis;
  if (bVar2) {
    if (*(long *)(this + 0x330) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104040;
    }
    if (*(long *)(this + 0x318) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104040;
    }
    if (*(long *)(this + 0x300) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104040;
    }
    if (*(long *)(this + 0x2e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104040;
    }
    if (*(long *)(this + 0x2d0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104040;
    }
    if (*(long *)(this + 0x2b8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104040;
    }
    if (*(long *)(this + 0x2a0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104040;
    }
    if (*(long *)(this + 0x288) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104040;
    }
    if (*(long *)(this + 0x270) != 0) {
      StringName::unref();
    }
  }
LAB_00104040:
  Resource::~Resource((Resource *)this);
  return;
}



/* AudioStreamOggVorbis::~AudioStreamOggVorbis() */

void __thiscall AudioStreamOggVorbis::~AudioStreamOggVorbis(AudioStreamOggVorbis *this)

{
  char cVar1;
  bool bVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_00113cb8;
  if (*(long *)(this + 0x368) != 0) {
    cVar1 = RefCounted::unreference();
    if (cVar1 != '\0') {
      memdelete<OggPacketSequence>(*(OggPacketSequence **)(this + 0x368));
    }
  }
  bVar2 = StringName::configured != '\0';
  *(code **)this = vorbis_synthesis;
  if (bVar2) {
    if (*(long *)(this + 0x330) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001041d0;
    }
    if (*(long *)(this + 0x318) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001041d0;
    }
    if (*(long *)(this + 0x300) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001041d0;
    }
    if (*(long *)(this + 0x2e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001041d0;
    }
    if (*(long *)(this + 0x2d0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001041d0;
    }
    if (*(long *)(this + 0x2b8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001041d0;
    }
    if (*(long *)(this + 0x2a0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001041d0;
    }
    if (*(long *)(this + 0x288) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001041d0;
    }
    if (*(long *)(this + 0x270) != 0) {
      StringName::unref();
    }
  }
LAB_001041d0:
  Resource::~Resource((Resource *)this);
  operator_delete(this,0x380);
  return;
}



/* AudioStreamOggVorbis::get_packet_sequence() const */

void AudioStreamOggVorbis::get_packet_sequence(void)

{
  char cVar1;
  long in_RSI;
  long *in_RDI;
  
  *in_RDI = 0;
  if (*(long *)(in_RSI + 0x368) != 0) {
    *in_RDI = *(long *)(in_RSI + 0x368);
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *in_RDI = 0;
    }
  }
  return;
}



/* AudioStreamOggVorbis::set_packet_sequence(Ref<OggPacketSequence>) */

void __thiscall AudioStreamOggVorbis::set_packet_sequence(AudioStreamOggVorbis *this,long *param_2)

{
  OggPacketSequence *pOVar1;
  char cVar2;
  OggPacketSequence *pOVar3;
  
  pOVar1 = (OggPacketSequence *)*param_2;
  pOVar3 = *(OggPacketSequence **)(this + 0x368);
  if (pOVar1 == pOVar3) goto LAB_001042a4;
  *(OggPacketSequence **)(this + 0x368) = pOVar1;
  if (pOVar1 == (OggPacketSequence *)0x0) {
LAB_0010428c:
    if (pOVar3 == (OggPacketSequence *)0x0) {
      return;
    }
    cVar2 = RefCounted::unreference();
joined_r0x0010429b:
    if (cVar2 != '\0') {
      memdelete<OggPacketSequence>(pOVar3);
    }
  }
  else {
    cVar2 = RefCounted::reference();
    if (cVar2 == '\0') {
      *(undefined8 *)(this + 0x368) = 0;
      goto LAB_0010428c;
    }
    if (pOVar3 != (OggPacketSequence *)0x0) {
      cVar2 = RefCounted::unreference();
      goto joined_r0x0010429b;
    }
  }
  pOVar3 = *(OggPacketSequence **)(this + 0x368);
LAB_001042a4:
  if (pOVar3 != (OggPacketSequence *)0x0) {
    maybe_update_info(this);
    return;
  }
  return;
}



/* AudioStreamPlaybackOggVorbis::~AudioStreamPlaybackOggVorbis() */

void __thiscall
AudioStreamPlaybackOggVorbis::~AudioStreamPlaybackOggVorbis(AudioStreamPlaybackOggVorbis *this)

{
  Object *pOVar1;
  char cVar2;
  bool bVar3;
  
  *(undefined ***)this = &PTR__initialize_classv_00113ad8;
  if (this[0x108b] != (AudioStreamPlaybackOggVorbis)0x0) {
    vorbis_block_clear(this + 0xfc8);
  }
  if (this[0x108a] != (AudioStreamPlaybackOggVorbis)0x0) {
    vorbis_dsp_clear(this + 0xf38);
  }
  if (this[0x1089] != (AudioStreamPlaybackOggVorbis)0x0) {
    vorbis_comment_clear(this + 0xf18);
  }
  if (this[0x1088] != (AudioStreamPlaybackOggVorbis)0x0) {
    vorbis_info_clear(this + 0xee0);
  }
  if (*(long *)(this + 0x10b0) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x10b0);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0x10a0) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      memdelete<AudioStreamOggVorbis>(*(AudioStreamOggVorbis **)(this + 0x10a0));
    }
  }
  if (*(long *)(this + 0x1098) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x1098);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0x1090) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      memdelete<OggPacketSequence>(*(OggPacketSequence **)(this + 0x1090));
    }
  }
  bVar3 = StringName::configured != '\0';
  *(code **)this = vorbis_dsp_clear;
  if (bVar3) {
    if (*(long *)(this + 0x6b8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001043e7;
    }
    if (*(long *)(this + 0x6a0) != 0) {
      StringName::unref();
    }
  }
LAB_001043e7:
  AudioStreamPlayback::~AudioStreamPlayback((AudioStreamPlayback *)this);
  return;
}



/* AudioStreamPlaybackOggVorbis::~AudioStreamPlaybackOggVorbis() */

void __thiscall
AudioStreamPlaybackOggVorbis::~AudioStreamPlaybackOggVorbis(AudioStreamPlaybackOggVorbis *this)

{
  ~AudioStreamPlaybackOggVorbis(this);
  operator_delete(this,0x10b8);
  return;
}



/* AudioStreamOggVorbis::instantiate_playback() */

void AudioStreamOggVorbis::instantiate_playback(void)

{
  AudioStreamOggVorbis *pAVar1;
  OggPacketSequence *pOVar2;
  OggPacketSequence *pOVar3;
  char cVar4;
  AudioStreamPlayback *this;
  long lVar5;
  ulong uVar6;
  AudioStreamOggVorbis *pAVar7;
  AudioStreamPlayback *this_00;
  AudioStreamOggVorbis *in_RSI;
  long *in_RDI;
  undefined8 *puVar8;
  byte bVar9;
  
  bVar9 = 0;
  if (*(long *)(in_RSI + 0x368) == 0) {
    _err_print_error("instantiate_playback","modules/vorbis/audio_stream_ogg_vorbis.cpp",0x19c,
                     "Condition \"packet_sequence.is_null()\" is true. Returning: nullptr",0,0);
    *in_RDI = 0;
    return;
  }
  this_00 = (AudioStreamPlayback *)0x0;
  this = (AudioStreamPlayback *)operator_new(0x10b8,"");
  AudioStreamPlayback::AudioStreamPlayback(this);
  *(code **)this = vorbis_dsp_clear;
  *(undefined8 *)(this + 0x270) = 0;
  *(undefined8 *)(this + 0x688) = 0;
  puVar8 = (undefined8 *)((ulong)(this + 0x278) & 0xfffffffffffffff8);
  for (uVar6 = (ulong)(((int)this - (int)(undefined8 *)((ulong)(this + 0x278) & 0xfffffffffffffff8))
                       + 0x690U >> 3); uVar6 != 0; uVar6 = uVar6 - 1) {
    *puVar8 = 0;
    puVar8 = puVar8 + (ulong)bVar9 * -2 + 1;
  }
  *(undefined4 *)(this + 0x690) = 0xffffffff;
  *(undefined8 *)(this + 0x698) = 0;
  StringName::StringName((StringName *)(this + 0x6a0),"_mix_resampled",false);
  this[0x6a8] = (AudioStreamPlayback)0x0;
  *(undefined8 *)(this + 0x6b0) = 0;
  StringName::StringName((StringName *)(this + 0x6b8),"_get_stream_sampling_rate",false);
  *(undefined ***)this = &PTR__initialize_classv_00113ad8;
  *(undefined2 *)(this + 0x6d4) = 0;
  this[0x6c0] = (AudioStreamPlayback)0x0;
  *(undefined8 *)(this + 0x6c8) = 0;
  this[0x6d6] = (AudioStreamPlayback)0x0;
  *(undefined8 *)(this + 0x698) = 0;
  *(undefined4 *)(this + 0x6d0) = 0;
  *(undefined4 *)(this + 0x6d8) = 0;
  *(undefined8 *)(this + 0x6dc) = 0;
  *(undefined8 *)(this + 0xed4) = 0;
  puVar8 = (undefined8 *)((ulong)(this + 0x6e4) & 0xfffffffffffffff8);
  for (uVar6 = (ulong)(((int)this - (int)(undefined8 *)((ulong)(this + 0x6e4) & 0xfffffffffffffff8))
                       + 0xedcU >> 3); uVar6 != 0; uVar6 = uVar6 - 1) {
    *puVar8 = 0;
    puVar8 = puVar8 + (ulong)bVar9 * -2 + 1;
  }
  *(undefined2 *)(this + 0x108c) = 0;
  *(undefined4 *)(this + 0xedc) = 0x100;
  *(undefined4 *)(this + 0x1088) = 0;
  this[0x108e] = (AudioStreamPlayback)0x0;
  *(undefined8 *)(this + 0x10a0) = 0;
  this[0x10a8] = (AudioStreamPlayback)0x0;
  *(undefined8 *)(this + 0x10b0) = 0;
  *(undefined1 (*) [16])(this + 0x1090) = (undefined1  [16])0x0;
  postinitialize_handler((Object *)this);
  cVar4 = RefCounted::init_ref();
  if (cVar4 != '\0') {
    cVar4 = RefCounted::reference();
    if (cVar4 != '\0') {
      this_00 = this;
    }
    cVar4 = RefCounted::unreference();
    if ((cVar4 != '\0') && (cVar4 = predelete_handler((Object *)this), cVar4 != '\0')) {
      (**(code **)(*(long *)this + 0x140))(this);
      Memory::free_static(this,false);
    }
  }
  cVar4 = RefCounted::init_ref();
  pAVar1 = *(AudioStreamOggVorbis **)((AudioStreamPlaybackOggVorbis *)this_00 + 0x10a0);
  if (cVar4 == '\0') {
    if (pAVar1 == (AudioStreamOggVorbis *)0x0) goto LAB_00104709;
    *(undefined8 *)((AudioStreamPlaybackOggVorbis *)this_00 + 0x10a0) = 0;
    cVar4 = RefCounted::unreference();
  }
  else {
    pAVar7 = pAVar1;
    if (in_RSI != pAVar1) {
      *(AudioStreamOggVorbis **)((AudioStreamPlaybackOggVorbis *)this_00 + 0x10a0) = in_RSI;
      cVar4 = RefCounted::reference();
      if (cVar4 == '\0') {
        *(undefined8 *)((AudioStreamPlaybackOggVorbis *)this_00 + 0x10a0) = 0;
      }
      pAVar7 = in_RSI;
      if ((pAVar1 != (AudioStreamOggVorbis *)0x0) &&
         (cVar4 = RefCounted::unreference(), cVar4 != '\0')) {
        memdelete<AudioStreamOggVorbis>(pAVar1);
      }
    }
    cVar4 = RefCounted::unreference();
    pAVar1 = pAVar7;
  }
  if (cVar4 != '\0') {
    memdelete<AudioStreamOggVorbis>(pAVar1);
  }
LAB_00104709:
  pOVar2 = *(OggPacketSequence **)(in_RSI + 0x368);
  pOVar3 = *(OggPacketSequence **)((AudioStreamPlaybackOggVorbis *)this_00 + 0x1090);
  if (pOVar2 != pOVar3) {
    *(OggPacketSequence **)((AudioStreamPlaybackOggVorbis *)this_00 + 0x1090) = pOVar2;
    if ((pOVar2 != (OggPacketSequence *)0x0) && (cVar4 = RefCounted::reference(), cVar4 == '\0')) {
      *(undefined8 *)((AudioStreamPlaybackOggVorbis *)this_00 + 0x1090) = 0;
    }
    if ((pOVar3 != (OggPacketSequence *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0'))
    {
      memdelete<OggPacketSequence>(pOVar3);
    }
  }
  *(undefined4 *)((AudioStreamPlaybackOggVorbis *)this_00 + 0x6d0) = 0;
  ((AudioStreamPlaybackOggVorbis *)this_00)[0x6d4] = (AudioStreamPlaybackOggVorbis)0x0;
  *(undefined4 *)((AudioStreamPlaybackOggVorbis *)this_00 + 0x6d8) = 0;
  cVar4 = AudioStreamPlaybackOggVorbis::_alloc_vorbis((AudioStreamPlaybackOggVorbis *)this_00);
  *in_RDI = 0;
  if ((cVar4 != '\0') &&
     (lVar5 = __dynamic_cast(this_00,&Object::typeinfo,&AudioStreamPlayback::typeinfo,0), lVar5 != 0
     )) {
    *in_RDI = lVar5;
    cVar4 = RefCounted::reference();
    if (cVar4 == '\0') {
      *in_RDI = 0;
    }
  }
  cVar4 = RefCounted::unreference();
  if ((cVar4 != '\0') && (cVar4 = predelete_handler((Object *)this_00), cVar4 != '\0')) {
    (**(code **)(*(long *)this_00 + 0x140))(this_00);
    Memory::free_static(this_00,false);
    return;
  }
  return;
}



/* Vector<Vector<unsigned char> >::push_back(Vector<unsigned char>) [clone .isra.0] */

void __thiscall
Vector<Vector<unsigned_char>>::push_back(Vector<Vector<unsigned_char>> *this,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)(this + 8) == 0) {
    lVar3 = 1;
  }
  else {
    lVar3 = *(long *)(*(long *)(this + 8) + -8) + 1;
  }
  iVar1 = CowData<Vector<unsigned_char>>::resize<false>
                    ((CowData<Vector<unsigned_char>> *)(this + 8),lVar3);
  if (iVar1 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar2 = -1;
      lVar3 = 0;
    }
    else {
      lVar3 = *(long *)(*(long *)(this + 8) + -8);
      lVar2 = lVar3 + -1;
      if (-1 < lVar2) {
        CowData<Vector<unsigned_char>>::_copy_on_write((CowData<Vector<unsigned_char>> *)(this + 8))
        ;
        lVar3 = *(long *)(this + 8) + lVar2 * 0x10;
        if (*(long *)(lVar3 + 8) == *(long *)(param_2 + 8)) {
          return;
        }
        CowData<unsigned_char>::_ref((CowData<unsigned_char> *)(lVar3 + 8),(CowData *)(param_2 + 8))
        ;
        return;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar2,lVar3,"p_index","size()","",false,false
              );
    return;
  }
  _err_print_error("push_back","./core/templates/vector.h",0x142,
                   "Condition \"err\" is true. Returning: true",0,0);
  return;
}



/* AudioStreamOggVorbis::load_from_buffer(Vector<unsigned char> const&) */

Vector * AudioStreamOggVorbis::load_from_buffer(Vector *param_1)

{
  long lVar1;
  size_t __n;
  code *pcVar2;
  OggPacketSequence *pOVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  AudioStreamOggVorbis *this;
  Resource *this_00;
  undefined8 *puVar8;
  long lVar9;
  ulong *puVar10;
  long *plVar11;
  long lVar12;
  Vector *pVVar13;
  char *in_RCX;
  ulong uVar14;
  undefined8 uVar15;
  long *plVar16;
  uint uVar17;
  AudioStreamOggVorbis *pAVar18;
  ulong uVar19;
  ulong *__dest;
  long in_RSI;
  undefined8 *puVar20;
  ulong uVar21;
  long lVar22;
  void *__src;
  bool bVar23;
  ulong uVar24;
  long in_FS_OFFSET;
  bool bVar25;
  byte bVar26;
  OggPacketSequence *local_330;
  long local_318;
  undefined1 *local_300;
  CowData *local_2f0;
  ulong local_2d0 [2];
  ulong *local_2c0;
  Vector<Vector<unsigned_char>> local_2b8 [8];
  long local_2b0;
  undefined4 *local_2a8;
  long *local_2a0;
  undefined4 local_298;
  OggPacketSequence *local_288;
  long local_280;
  undefined8 local_278 [2];
  undefined1 local_268 [32];
  undefined1 local_248 [32];
  void *local_228;
  ulong local_220;
  ulong local_208;
  int local_1f8 [8];
  undefined1 local_1d8 [408];
  long local_40;
  
  bVar26 = 0;
  pAVar18 = (AudioStreamOggVorbis *)0x0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  this = (AudioStreamOggVorbis *)operator_new(0x380,"");
  AudioStreamOggVorbis(this);
  postinitialize_handler((Object *)this);
  cVar4 = RefCounted::init_ref();
  if (cVar4 != '\0') {
    cVar4 = RefCounted::reference();
    if (cVar4 != '\0') {
      pAVar18 = this;
    }
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      memdelete<AudioStreamOggVorbis>(this);
    }
  }
  this_00 = (Resource *)operator_new(0x278,"");
  Resource::Resource(this_00);
  *(undefined8 *)(this_00 + 0x248) = 0;
  *(undefined ***)this_00 = &PTR__initialize_classv_00113900;
  *(undefined8 *)(this_00 + 600) = 0;
  *(undefined8 *)(this_00 + 0x260) = 0;
  *(undefined8 *)(this_00 + 0x268) = 0;
  *(undefined8 *)(this_00 + 0x270) = 0;
  postinitialize_handler((Object *)this_00);
  cVar4 = RefCounted::init_ref();
  local_330 = (OggPacketSequence *)0x0;
  if (cVar4 != '\0') {
    cVar4 = RefCounted::reference();
    local_330 = (OggPacketSequence *)(Resource *)0x0;
    if (cVar4 != '\0') {
      local_330 = (OggPacketSequence *)this_00;
    }
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      memdelete<OggPacketSequence>((OggPacketSequence *)this_00);
    }
  }
  uVar24 = 0;
  bVar23 = false;
  ogg_sync_init(local_268);
  local_318 = 0;
  do {
    iVar5 = ogg_sync_check(local_268);
    if (iVar5 != 0) {
      itos((long)&local_2a8);
      operator+((char *)&local_288,(String *)"Ogg sync error ");
      uVar15 = 0x238;
LAB_00104da2:
      _err_print_error("load_from_buffer","modules/vorbis/audio_stream_ogg_vorbis.cpp",uVar15,
                       "Condition \"err != 0\" is true. Returning: Ref<AudioStreamOggVorbis>()",
                       (CowData<char32_t> *)&local_288,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_288);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_2a8);
      *(undefined8 *)param_1 = 0;
LAB_00104dd4:
      if (local_330 != (OggPacketSequence *)0x0) {
LAB_00104ddc:
        cVar4 = RefCounted::unreference();
        if (cVar4 != '\0') {
          memdelete<OggPacketSequence>(local_330);
        }
      }
      if (pAVar18 != (AudioStreamOggVorbis *)0x0) {
LAB_00104df3:
        cVar4 = RefCounted::unreference();
        if (cVar4 != '\0') {
          memdelete<AudioStreamOggVorbis>(pAVar18);
        }
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return param_1;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    while (iVar5 = ogg_sync_pageout(local_268,local_248), iVar5 != 1) {
      if ((*(long *)(in_RSI + 8) == 0) || (*(ulong *)(*(long *)(in_RSI + 8) + -8) <= uVar24)) {
        if (bVar23) {
          ogg_stream_clear(local_1d8);
        }
        ogg_sync_clear(local_268);
        OggPacketSequence::get_packet_granule_positions();
        lVar9 = local_280;
        if (local_280 == 0) {
          _err_print_error("load_from_buffer","modules/vorbis/audio_stream_ogg_vorbis.cpp",0x293,
                           "Method/function failed. Returning: Ref<AudioStreamOggVorbis>()",
                           "Ogg Vorbis decoding failed. Check that your data is a valid Ogg Vorbis audio stream."
                           ,0,0,in_RCX);
          *(undefined8 *)param_1 = 0;
          goto LAB_00104ddc;
        }
        LOCK();
        plVar11 = (long *)(local_280 + -0x10);
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (*plVar11 == 0) {
          local_280 = 0;
          Memory::free_static((void *)(lVar9 + -0x10),false);
        }
        local_288 = local_330;
        cVar4 = RefCounted::reference();
        if (cVar4 == '\0') {
          local_288 = (OggPacketSequence *)0x0;
        }
        set_packet_sequence(pAVar18,&local_288);
        pOVar3 = local_288;
        if ((local_288 != (OggPacketSequence *)0x0) &&
           (cVar4 = RefCounted::unreference(), cVar4 != '\0')) {
          memdelete<OggPacketSequence>(pOVar3);
        }
        *(AudioStreamOggVorbis **)param_1 = pAVar18;
        cVar4 = RefCounted::reference();
        if (cVar4 == '\0') {
          *(undefined8 *)param_1 = 0;
          cVar4 = RefCounted::unreference();
        }
        else {
          cVar4 = RefCounted::unreference();
        }
        if (cVar4 != '\0') {
          memdelete<OggPacketSequence>(local_330);
        }
        goto LAB_00104df3;
      }
      iVar5 = ogg_sync_check(local_268);
      if (iVar5 != 0) {
        itos((long)&local_2a8);
        operator+((char *)&local_288,(String *)"Ogg sync error ");
        uVar15 = 0x23f;
        goto LAB_00104da2;
      }
      puVar8 = (undefined8 *)ogg_sync_buffer(local_268,0x2000);
      iVar5 = ogg_sync_check(local_268);
      if (iVar5 != 0) {
        itos((long)&local_2a8);
        operator+((char *)&local_288,(String *)"Ogg sync error ");
        uVar15 = 0x242;
        goto LAB_00104da2;
      }
      lVar9 = *(long *)(in_RSI + 8);
      if (lVar9 == 0) {
        lVar22 = 0;
LAB_00104d13:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,uVar24,lVar22,"p_index","size()","",false
                   ,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar22 = *(long *)(lVar9 + -8);
      uVar19 = lVar22 - uVar24;
      if (0x2000 < uVar19) {
        uVar19 = 0x2000;
      }
      if ((lVar22 <= (long)uVar24) || ((long)uVar24 < 0)) goto LAB_00104d13;
      puVar20 = (undefined8 *)(lVar9 + uVar24);
      uVar17 = (uint)uVar19;
      in_RCX = (char *)(uVar19 & 0xffffffff);
      if (uVar17 < 8) {
        if ((uVar19 & 4) == 0) {
          if ((uVar17 != 0) && (*(undefined1 *)puVar8 = *(undefined1 *)puVar20, (uVar19 & 2) != 0))
          {
            *(undefined2 *)((undefined1 *)((long)puVar8 + -2) + (long)in_RCX) =
                 *(undefined2 *)((undefined1 *)((long)puVar20 + -2) + (long)in_RCX);
          }
        }
        else {
          *(undefined4 *)puVar8 = *(undefined4 *)puVar20;
          *(undefined4 *)((long)((long)puVar8 + -4) + (long)in_RCX) =
               *(undefined4 *)((long)((long)puVar20 + -4) + (long)in_RCX);
        }
      }
      else {
        *puVar8 = *puVar20;
        *(undefined8 *)((long)puVar8 + ((uVar19 & 0xffffffff) - 8)) =
             *(undefined8 *)((long)puVar20 + ((uVar19 & 0xffffffff) - 8));
        lVar9 = (long)puVar8 - (long)((ulong)(puVar8 + 1) & 0xfffffffffffffff8);
        puVar20 = (undefined8 *)((long)puVar20 - lVar9);
        puVar8 = (undefined8 *)((ulong)(puVar8 + 1) & 0xfffffffffffffff8);
        for (uVar14 = (ulong)(uVar17 + (int)lVar9 >> 3); uVar14 != 0; uVar14 = uVar14 - 1) {
          *puVar8 = *puVar20;
          puVar20 = puVar20 + (ulong)bVar26 * -2 + 1;
          puVar8 = puVar8 + (ulong)bVar26 * -2 + 1;
        }
        in_RCX = (char *)0x0;
      }
      uVar24 = uVar24 + uVar19;
      ogg_sync_wrote(local_268,uVar19);
      iVar5 = ogg_sync_check(local_268);
      if (iVar5 != 0) {
        itos((long)&local_2a8);
        operator+((char *)&local_288,(String *)"Ogg sync error ");
        uVar15 = 0x24b;
        goto LAB_00104da2;
      }
    }
    iVar5 = ogg_sync_check(local_268);
    if (iVar5 != 0) {
      itos((long)&local_2a8);
      operator+((char *)&local_288,(String *)"Ogg sync error ");
      uVar15 = 0x251;
      goto LAB_00104da2;
    }
    if (!bVar23) {
      uVar7 = ogg_page_serialno(local_248);
      iVar5 = ogg_stream_init(local_1d8,uVar7);
      if (iVar5 != 0) {
        _err_print_error("load_from_buffer","modules/vorbis/audio_stream_ogg_vorbis.cpp",0x256,
                         "Method/function failed. Returning: Ref<AudioStreamOggVorbis>()",
                         "Failed allocating memory for Ogg Vorbis stream.",0,0,0);
        *(undefined8 *)param_1 = 0;
        goto LAB_00104dd4;
      }
    }
    local_300 = local_1d8;
    ogg_stream_pagein(local_300,local_248);
    iVar5 = ogg_stream_check(local_300);
    if (iVar5 != 0) {
      itos((long)&local_2a8);
      operator+((char *)&local_288,(String *)"Ogg stream error ");
      uVar15 = 0x25c;
      goto LAB_00104da2;
    }
    uVar19 = 0;
    local_2a8 = (undefined4 *)0x0;
    local_2a0 = &_GlobalNilClass::_nil;
    local_298 = 0;
    iVar5 = 0;
    while( true ) {
      while (iVar6 = ogg_stream_packetout(local_300), iVar6 == -1) {
        iVar5 = iVar5 + 1;
        if (load_from_buffer(Vector<unsigned_char>const&)::first_print != '\0') {
          in_RCX = "Desync during ogg import.";
          _err_print_error("load_from_buffer","modules/vorbis/audio_stream_ogg_vorbis.cpp",0x267);
          load_from_buffer(Vector<unsigned_char>const&)::first_print = '\0';
        }
        if (100 < iVar5) {
          _err_print_error("load_from_buffer","modules/vorbis/audio_stream_ogg_vorbis.cpp",0x268,
                           "Condition \"desync_iters > 100\" is true. Returning: Ref<AudioStreamOggVorbis>()"
                           ,"Packet sync issue during Ogg import",0,0);
          *(undefined8 *)param_1 = 0;
          RBMap<unsigned_long,Vector<Vector<unsigned_char>>,Comparator<unsigned_long>,DefaultAllocator>
          ::~RBMap((RBMap<unsigned_long,Vector<Vector<unsigned_char>>,Comparator<unsigned_long>,DefaultAllocator>
                    *)&local_2a8);
          goto LAB_00104dd4;
        }
      }
      if (iVar6 == 0) {
        bVar23 = true;
        goto LAB_001052b4;
      }
      if ((local_318 == 0) && (iVar6 = vorbis_synthesis_idheader(&local_228), iVar6 == 0)) break;
      uVar14 = local_220;
      if ((long)uVar19 < (long)local_208) {
        uVar19 = local_208;
      }
      if (0 < (long)local_220) {
        local_2c0 = (ulong *)0x0;
        uVar21 = local_220 - 1 | local_220 - 1 >> 1;
        uVar21 = uVar21 | uVar21 >> 2;
        uVar21 = uVar21 | uVar21 >> 4;
        uVar21 = uVar21 | uVar21 >> 8;
        uVar21 = uVar21 | uVar21 >> 0x10;
        puVar10 = (ulong *)Memory::alloc_static((uVar21 | uVar21 >> 0x20) + 0x11,false);
        uVar21 = local_220;
        __src = local_228;
        if (puVar10 == (ulong *)0x0) {
          in_RCX = "Parameter \"mem_new\" is null.";
          _err_print_error("resize","./core/templates/cowdata.h",0x171);
          __dest = (ulong *)0x0;
          uVar21 = local_220;
          __src = local_228;
        }
        else {
          __dest = puVar10 + 2;
          *puVar10 = 1;
          puVar10[1] = uVar14;
          local_2c0 = __dest;
          if (1 < *puVar10) {
            if (__dest == (ulong *)0x0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            __n = puVar10[1];
            uVar14 = 0x10;
            if (__n != 0) {
              uVar14 = __n - 1 | __n - 1 >> 1;
              uVar14 = uVar14 | uVar14 >> 2;
              uVar14 = uVar14 | uVar14 >> 4;
              uVar14 = uVar14 | uVar14 >> 8;
              uVar14 = uVar14 | uVar14 >> 0x10;
              uVar14 = (uVar14 | uVar14 >> 0x20) + 0x11;
            }
            puVar8 = (undefined8 *)Memory::alloc_static(uVar14,false);
            if (puVar8 == (undefined8 *)0x0) {
              in_RCX = "Parameter \"mem_new\" is null.";
              _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a);
            }
            else {
              __dest = puVar8 + 2;
              *puVar8 = 1;
              puVar8[1] = __n;
              memcpy(__dest,local_2c0,__n);
              CowData<unsigned_char>::_unref((CowData<unsigned_char> *)&local_2c0);
              local_2c0 = __dest;
            }
          }
        }
        local_2f0 = (CowData *)&local_2c0;
        memcpy(__dest,__src,uVar21);
        local_2d0[0] = uVar19;
        if (local_2a8 == (undefined4 *)0x0) {
          local_2a8 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
          local_2b0 = 0;
          local_288 = (OggPacketSequence *)0x0;
          local_278[0] = 0;
          *local_2a8 = 0;
          *(undefined8 *)(local_2a8 + 10) = 0;
          *(undefined8 *)(local_2a8 + 0xc) = 0;
          *(undefined8 *)(local_2a8 + 0x10) = 0;
          *(undefined1 (*) [16])(local_2a8 + 2) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(local_2a8 + 6) = (undefined1  [16])0x0;
          CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)local_278);
          CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)&local_2b0);
          *local_2a8 = 1;
          *(long **)(local_2a8 + 2) = local_2a0;
          *(long **)(local_2a8 + 4) = local_2a0;
          *(long **)(local_2a8 + 6) = local_2a0;
        }
        else {
          for (plVar11 = *(long **)(local_2a8 + 4); local_2a0 != plVar11;
              plVar11 = (long *)plVar11[1]) {
            while (uVar19 < (ulong)plVar11[6]) {
              plVar11 = (long *)plVar11[2];
              if (local_2a0 == plVar11) goto LAB_001050f3;
            }
            if (uVar19 <= (ulong)plVar11[6]) goto LAB_00105139;
          }
        }
LAB_001050f3:
        local_280 = 0;
        plVar11 = (long *)RBMap<unsigned_long,Vector<Vector<unsigned_char>>,Comparator<unsigned_long>,DefaultAllocator>
                          ::_insert((RBMap<unsigned_long,Vector<Vector<unsigned_char>>,Comparator<unsigned_long>,DefaultAllocator>
                                     *)&local_2a8,local_2d0,(Vector *)&local_288);
        CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)&local_280);
LAB_00105139:
        local_280 = 0;
        CowData<unsigned_char>::_ref((CowData<unsigned_char> *)&local_280,local_2f0);
        Vector<Vector<unsigned_char>>::push_back
                  ((Vector<Vector<unsigned_char>> *)(plVar11 + 7),&local_288);
        CowData<unsigned_char>::_unref((CowData<unsigned_char> *)&local_280);
        local_318 = local_318 + 1;
        CowData<unsigned_char>::_unref((CowData<unsigned_char> *)local_2f0);
      }
    }
    cVar4 = is_print_verbose_enabled();
    if (cVar4 != '\0') {
      Variant::Variant((Variant *)local_1f8,"Found a non-vorbis-header packet in a header position")
      ;
      stringify_variants((Variant *)&local_288);
      __print_line((String *)&local_288);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_288);
      if (Variant::needs_deinit[local_1f8[0]] != '\0') {
        Variant::_clear_internal();
      }
    }
    bVar23 = false;
    ogg_stream_clear(local_300);
LAB_001052b4:
    local_2b0 = 0;
    if ((local_2a8 != (undefined4 *)0x0) &&
       (plVar11 = *(long **)(local_2a8 + 4), in_RCX = (char *)local_2a0,
       *(long **)(local_2a8 + 4) != local_2a0)) {
      do {
        plVar16 = plVar11;
        plVar11 = (long *)plVar16[2];
      } while (local_2a0 != (long *)plVar16[2]);
      do {
        lVar9 = plVar16[8];
        if ((lVar9 != 0) && (lVar22 = lVar9 + *(long *)(lVar9 + -8) * 0x10, lVar22 != lVar9)) {
          do {
            while( true ) {
              local_280 = 0;
              in_RCX = (char *)(*(long *)(lVar9 + 8) + -0x10);
              if (*(long *)(lVar9 + 8) != 0) break;
              lVar9 = lVar9 + 0x10;
              Vector<Vector<unsigned_char>>::push_back(local_2b8,&local_288);
              if (lVar22 == lVar9) goto LAB_001053e3;
            }
            do {
              lVar1 = *(long *)in_RCX;
              if (lVar1 == 0) goto LAB_0010537d;
              LOCK();
              lVar12 = *(long *)in_RCX;
              bVar25 = lVar1 == lVar12;
              if (bVar25) {
                *(long *)in_RCX = lVar1 + 1;
                lVar12 = lVar1;
              }
              UNLOCK();
            } while (!bVar25);
            if (lVar12 != -1) {
              local_280 = *(long *)(lVar9 + 8);
            }
LAB_0010537d:
            lVar1 = local_280;
            Vector<Vector<unsigned_char>>::push_back(local_2b8);
            if (lVar1 != 0) {
              LOCK();
              plVar11 = (long *)(lVar1 + -0x10);
              *plVar11 = *plVar11 + -1;
              UNLOCK();
              if (*plVar11 == 0) {
                Memory::free_static((void *)(local_280 + -0x10),false);
              }
            }
            lVar9 = lVar9 + 0x10;
          } while (lVar22 != lVar9);
        }
LAB_001053e3:
        plVar16 = (long *)plVar16[4];
      } while (plVar16 != (long *)0x0);
      if (((bVar23) && (local_2b0 != 0)) && (0 < *(long *)(local_2b0 + -8))) {
        pVVar13 = (Vector *)ogg_page_granulepos(local_248);
        OggPacketSequence::push_page((long)local_330,pVVar13);
      }
    }
    CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)&local_2b0);
    RBMap<unsigned_long,Vector<Vector<unsigned_char>>,Comparator<unsigned_long>,DefaultAllocator>::
    ~RBMap((RBMap<unsigned_long,Vector<Vector<unsigned_char>>,Comparator<unsigned_long>,DefaultAllocator>
            *)&local_2a8);
  } while( true );
}



/* AudioStreamOggVorbis::load_from_file(String const&) */

AudioStreamOggVorbis * __thiscall
AudioStreamOggVorbis::load_from_file(AudioStreamOggVorbis *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long in_FS_OFFSET;
  bool bVar4;
  undefined8 local_68;
  undefined8 local_60;
  String local_58 [8];
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FileAccess::get_file_as_bytes(local_58,param_1);
  if (local_50 == 0) {
    local_60 = 0;
    plVar1 = (long *)(*(long *)param_1 + -0x10);
    if (*(long *)param_1 != 0) {
      do {
        lVar2 = *plVar1;
        if (lVar2 == 0) goto LAB_00105a08;
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
        local_60 = *(undefined8 *)param_1;
      }
    }
LAB_00105a08:
    local_40 = 0x16;
    local_48 = "Cannot open file \'%s\'.";
    local_68 = 0;
    String::parse_latin1((StrRange *)&local_68);
    vformat<String>((CowData<char32_t> *)&local_48,&local_68,(CowData<char32_t> *)&local_60);
    _err_print_error("load_from_file","modules/vorbis/audio_stream_ogg_vorbis.cpp",0x29d,
                     "Condition \"stream_data.is_empty()\" is true. Returning: Ref<AudioStreamOggVorbis>()"
                     ,(CowData<char32_t> *)&local_48,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    *(undefined8 *)this = 0;
  }
  else {
    load_from_buffer(this);
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
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
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
  return (uint)CONCAT71(0x1143,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1143,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
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



/* AudioSample::is_class_ptr(void*) const */

uint __thiscall AudioSample::is_class_ptr(AudioSample *this,void *param_1)

{
  return (uint)CONCAT71(0x1143,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1143,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1143,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
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



/* AudioStream::is_meta_stream() const */

undefined8 AudioStream::is_meta_stream(void)

{
  return 0;
}



/* OggPacketSequence::is_class_ptr(void*) const */

uint __thiscall OggPacketSequence::is_class_ptr(OggPacketSequence *this,void *param_1)

{
  return (uint)CONCAT71(0x1143,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1142,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1143,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1143,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* OggPacketSequence::_getv(StringName const&, Variant&) const */

undefined8 OggPacketSequence::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* OggPacketSequence::_setv(StringName const&, Variant const&) */

undefined8 OggPacketSequence::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* OggPacketSequence::_validate_propertyv(PropertyInfo&) const */

void OggPacketSequence::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* OggPacketSequence::_property_can_revertv(StringName const&) const */

undefined8 OggPacketSequence::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* OggPacketSequence::_property_get_revertv(StringName const&, Variant&) const */

undefined8 OggPacketSequence::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* OggPacketSequence::_notificationv(int, bool) */

void OggPacketSequence::_notificationv(int param_1,bool param_2)

{
  return;
}



/* AudioStreamPlaybackOggVorbis::is_class_ptr(void*) const */

uint __thiscall
AudioStreamPlaybackOggVorbis::is_class_ptr(AudioStreamPlaybackOggVorbis *this,void *param_1)

{
  return (uint)CONCAT71(0x1143,(undefined4 *)param_1 ==
                               &AudioStreamPlaybackResampled::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1142,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1143,(undefined4 *)param_1 ==
                               &AudioStreamPlayback::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1143,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1143,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* AudioStreamPlaybackOggVorbis::_getv(StringName const&, Variant&) const */

undefined8 AudioStreamPlaybackOggVorbis::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* AudioStreamPlaybackOggVorbis::_setv(StringName const&, Variant const&) */

undefined8 AudioStreamPlaybackOggVorbis::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* AudioStreamPlaybackOggVorbis::_validate_propertyv(PropertyInfo&) const */

void AudioStreamPlaybackOggVorbis::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* AudioStreamPlaybackOggVorbis::_property_can_revertv(StringName const&) const */

undefined8 AudioStreamPlaybackOggVorbis::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* AudioStreamPlaybackOggVorbis::_property_get_revertv(StringName const&, Variant&) const */

undefined8 AudioStreamPlaybackOggVorbis::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* AudioStreamPlaybackOggVorbis::_notificationv(int, bool) */

void AudioStreamPlaybackOggVorbis::_notificationv(int param_1,bool param_2)

{
  return;
}



/* AudioStreamOggVorbis::is_class_ptr(void*) const */

uint __thiscall AudioStreamOggVorbis::is_class_ptr(AudioStreamOggVorbis *this,void *param_1)

{
  return (uint)CONCAT71(0x1143,(undefined4 *)param_1 == &AudioStream::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1142,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1143,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1143,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1143,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* AudioStreamOggVorbis::_getv(StringName const&, Variant&) const */

undefined8 AudioStreamOggVorbis::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* AudioStreamOggVorbis::_setv(StringName const&, Variant const&) */

undefined8 AudioStreamOggVorbis::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* AudioStreamOggVorbis::_validate_propertyv(PropertyInfo&) const */

void AudioStreamOggVorbis::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* AudioStreamOggVorbis::_property_can_revertv(StringName const&) const */

undefined8 AudioStreamOggVorbis::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* AudioStreamOggVorbis::_property_get_revertv(StringName const&, Variant&) const */

undefined8 AudioStreamOggVorbis::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* AudioStreamOggVorbis::_notificationv(int, bool) */

void AudioStreamOggVorbis::_notificationv(int param_1,bool param_2)

{
  return;
}



/* AudioStreamOggVorbis::can_be_sampled() const */

undefined8 AudioStreamOggVorbis::can_be_sampled(void)

{
  return 1;
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



/* MethodBindT<bool>::_gen_argument_type(int) const */

bool __thiscall MethodBindT<bool>::_gen_argument_type(MethodBindT<bool> *this,int param_1)

{
  return param_1 == 0;
}



/* MethodBindT<bool>::get_argument_meta(int) const */

undefined8 MethodBindT<bool>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<Ref<OggPacketSequence>>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<Ref<OggPacketSequence>>::_gen_argument_type(int param_1)

{
  return 0x18;
}



/* MethodBindTRC<Ref<OggPacketSequence>>::get_argument_meta(int) const */

undefined8 MethodBindTRC<Ref<OggPacketSequence>>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Ref<OggPacketSequence> >::_gen_argument_type(int) const */

byte __thiscall
MethodBindT<Ref<OggPacketSequence>>::_gen_argument_type
          (MethodBindT<Ref<OggPacketSequence>> *this,int param_1)

{
  return -(param_1 == 0) & 0x18;
}



/* MethodBindT<Ref<OggPacketSequence> >::get_argument_meta(int) const */

undefined8 MethodBindT<Ref<OggPacketSequence>>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRS<Ref<AudioStreamOggVorbis>, String const&>::_gen_argument_type(int) const */

int __thiscall
MethodBindTRS<Ref<AudioStreamOggVorbis>,String_const&>::_gen_argument_type
          (MethodBindTRS<Ref<AudioStreamOggVorbis>,String_const&> *this,int param_1)

{
  return (-(uint)(param_1 == 0) & 0xffffffec) + 0x18;
}



/* MethodBindTRS<Ref<AudioStreamOggVorbis>, String const&>::get_argument_meta(int) const */

undefined8 MethodBindTRS<Ref<AudioStreamOggVorbis>,String_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRS<Ref<AudioStreamOggVorbis>, Vector<unsigned char> const&>::_gen_argument_type(int)
   const */

char __thiscall
MethodBindTRS<Ref<AudioStreamOggVorbis>,Vector<unsigned_char>const&>::_gen_argument_type
          (MethodBindTRS<Ref<AudioStreamOggVorbis>,Vector<unsigned_char>const&> *this,int param_1)

{
  return (-(param_1 == 0) & 5U) + 0x18;
}



/* MethodBindTRS<Ref<AudioStreamOggVorbis>, Vector<unsigned char> const&>::get_argument_meta(int)
   const */

undefined8
MethodBindTRS<Ref<AudioStreamOggVorbis>,Vector<unsigned_char>const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00113640;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00113640;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
}



/* MethodBindTRS<Ref<AudioStreamOggVorbis>, Vector<unsigned char> const&>::~MethodBindTRS() */

void __thiscall
MethodBindTRS<Ref<AudioStreamOggVorbis>,Vector<unsigned_char>const&>::~MethodBindTRS
          (MethodBindTRS<Ref<AudioStreamOggVorbis>,Vector<unsigned_char>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00113ef0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRS<Ref<AudioStreamOggVorbis>, Vector<unsigned char> const&>::~MethodBindTRS() */

void __thiscall
MethodBindTRS<Ref<AudioStreamOggVorbis>,Vector<unsigned_char>const&>::~MethodBindTRS
          (MethodBindTRS<Ref<AudioStreamOggVorbis>,Vector<unsigned_char>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00113ef0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x60);
  return;
}



/* MethodBindTRS<Ref<AudioStreamOggVorbis>, String const&>::~MethodBindTRS() */

void __thiscall
MethodBindTRS<Ref<AudioStreamOggVorbis>,String_const&>::~MethodBindTRS
          (MethodBindTRS<Ref<AudioStreamOggVorbis>,String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00113f50;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRS<Ref<AudioStreamOggVorbis>, String const&>::~MethodBindTRS() */

void __thiscall
MethodBindTRS<Ref<AudioStreamOggVorbis>,String_const&>::~MethodBindTRS
          (MethodBindTRS<Ref<AudioStreamOggVorbis>,String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00113f50;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x60);
  return;
}



/* MethodBindT<Ref<OggPacketSequence> >::~MethodBindT() */

void __thiscall
MethodBindT<Ref<OggPacketSequence>>::~MethodBindT(MethodBindT<Ref<OggPacketSequence>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00113fb0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Ref<OggPacketSequence> >::~MethodBindT() */

void __thiscall
MethodBindT<Ref<OggPacketSequence>>::~MethodBindT(MethodBindT<Ref<OggPacketSequence>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00113fb0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Ref<OggPacketSequence>>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Ref<OggPacketSequence>>::~MethodBindTRC(MethodBindTRC<Ref<OggPacketSequence>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00114010;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Ref<OggPacketSequence>>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Ref<OggPacketSequence>>::~MethodBindTRC(MethodBindTRC<Ref<OggPacketSequence>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00114010;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<bool>::~MethodBindT() */

void __thiscall MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00114070;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<bool>::~MethodBindT() */

void __thiscall MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00114070;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001140d0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001140d0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<double>::~MethodBindT() */

void __thiscall MethodBindT<double>::~MethodBindT(MethodBindT<double> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00114130;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<double>::~MethodBindT() */

void __thiscall MethodBindT<double>::~MethodBindT(MethodBindT<double> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00114130;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<double>::~MethodBindTRC() */

void __thiscall MethodBindTRC<double>::~MethodBindTRC(MethodBindTRC<double> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00114190;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<double>::~MethodBindTRC() */

void __thiscall MethodBindTRC<double>::~MethodBindTRC(MethodBindTRC<double> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00114190;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<int>::~MethodBindT() */

void __thiscall MethodBindT<int>::~MethodBindT(MethodBindT<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001141f0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<int>::~MethodBindT() */

void __thiscall MethodBindT<int>::~MethodBindT(MethodBindT<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001141f0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00114250;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00114250;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
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
LAB_00106da3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00106da3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"AudioSample");
      goto LAB_00106e0e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"AudioSample");
LAB_00106e0e:
  return &_get_class_namev()::_class_name_static;
}



/* AudioSample::~AudioSample() */

void __thiscall AudioSample::~AudioSample(AudioSample *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  
  *(undefined ***)this = &PTR__initialize_classv_001137a0;
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
  *(undefined ***)this = &PTR__initialize_classv_00113640;
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
  
  *(undefined ***)this = &PTR__initialize_classv_001137a0;
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
  *(undefined ***)this = &PTR__initialize_classv_00113640;
  Object::~Object((Object *)this);
  operator_delete(this,0x1b0);
  return;
}



/* AudioStreamOggVorbis::get_save_class() const */

AudioStreamOggVorbis * __thiscall AudioStreamOggVorbis::get_save_class(AudioStreamOggVorbis *this)

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



/* AudioStreamOggVorbis::get_base_extension() const */

AudioStreamOggVorbis * __thiscall
AudioStreamOggVorbis::get_base_extension(AudioStreamOggVorbis *this)

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



/* AudioStreamOggVorbis::_get_class_namev() const */

undefined8 * AudioStreamOggVorbis::_get_class_namev(void)

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
LAB_00107163:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00107163;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"AudioStreamOggVorbis");
      goto LAB_001071ce;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"AudioStreamOggVorbis");
LAB_001071ce:
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
LAB_00107243:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00107243;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_001072ae;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_001072ae:
  return &_get_class_namev()::_class_name_static;
}



/* OggPacketSequence::_get_class_namev() const */

undefined8 * OggPacketSequence::_get_class_namev(void)

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
LAB_00107333:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00107333;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"OggPacketSequence");
      goto LAB_0010739e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"OggPacketSequence");
LAB_0010739e:
  return &_get_class_namev()::_class_name_static;
}



/* AudioStreamPlaybackOggVorbis::_get_class_namev() const */

undefined8 * AudioStreamPlaybackOggVorbis::_get_class_namev(void)

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
LAB_00107433:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00107433;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "AudioStreamPlaybackOggVorbis");
      goto LAB_0010749e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"AudioStreamPlaybackOggVorbis");
LAB_0010749e:
  return &_get_class_namev()::_class_name_static;
}



/* OggPacketSequence::get_class() const */

void OggPacketSequence::get_class(void)

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



/* AudioStreamPlaybackOggVorbis::get_class() const */

void AudioStreamPlaybackOggVorbis::get_class(void)

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



/* AudioStreamOggVorbis::get_class() const */

void AudioStreamOggVorbis::get_class(void)

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



/* WARNING: Removing unreachable block (ram,0x00107d88) */
/* String vformat<String>(String const&, String const) */

undefined8 * vformat<String>(undefined8 *param_1,bool *param_2,String *param_3)

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
        if (pvVar5 == (void *)0x0) goto LAB_001080b4;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_001080b4:
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
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
            if (lVar5 == 0) goto LAB_0010818f;
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
LAB_0010818f:
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
    if (cVar6 != '\0') goto LAB_00108243;
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
              if (lVar5 == 0) goto LAB_001082ef;
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
LAB_001082ef:
      cVar6 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar6 != '\0') goto LAB_00108243;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = String::operator==(param_1,"Object");
      return uVar7;
    }
  }
  else {
LAB_00108243:
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
            if (lVar4 == 0) goto LAB_001083df;
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
LAB_001083df:
    cVar5 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar5 != '\0') goto LAB_00108493;
  }
  cVar5 = String::operator==(param_1,"AudioSample");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_00108493:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AudioStreamOggVorbis::is_class(String const&) const */

undefined8 __thiscall AudioStreamOggVorbis::is_class(AudioStreamOggVorbis *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_0010856f;
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
LAB_0010856f:
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
    if (cVar6 != '\0') goto LAB_00108623;
  }
  cVar6 = String::operator==(param_1,"AudioStreamOggVorbis");
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
              if (lVar5 == 0) goto LAB_00108707;
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
LAB_00108707:
      cVar6 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar6 != '\0') goto LAB_00108623;
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
                if (lVar5 == 0) goto LAB_001087bb;
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
LAB_001087bb:
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
        if (cVar6 != '\0') goto LAB_00108623;
      }
      cVar6 = String::operator==(param_1,"Resource");
      if (cVar6 == '\0') {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
          return uVar7;
        }
        goto LAB_00108864;
      }
    }
  }
LAB_00108623:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00108864:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AudioStreamPlaybackResampled::is_class(String const&) const */

undefined8 __thiscall
AudioStreamPlaybackResampled::is_class(AudioStreamPlaybackResampled *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_0010890f;
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
LAB_0010890f:
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
    if (cVar6 != '\0') goto LAB_001089c3;
  }
  cVar6 = String::operator==(param_1,"AudioStreamPlaybackResampled");
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
              if (lVar5 == 0) goto LAB_00108a7f;
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
LAB_00108a7f:
      cVar6 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar6 != '\0') goto LAB_001089c3;
    }
    cVar6 = String::operator==(param_1,"AudioStreamPlayback");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
        return uVar7;
      }
      goto LAB_00108af1;
    }
  }
LAB_001089c3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00108af1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AudioStreamPlaybackOggVorbis::is_class(String const&) const */

undefined8 __thiscall
AudioStreamPlaybackOggVorbis::is_class(AudioStreamPlaybackOggVorbis *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_00108b6f;
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
LAB_00108b6f:
    cVar5 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar5 != '\0') goto LAB_00108c23;
  }
  cVar5 = String::operator==(param_1,"AudioStreamPlaybackOggVorbis");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = AudioStreamPlaybackResampled::is_class((AudioStreamPlaybackResampled *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_00108c23:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
    if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) {
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



/* OggPacketSequence::_initialize_classv() */

void OggPacketSequence::_initialize_classv(void)

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
        if ((code *)PTR__bind_methods_00119010 != RefCounted::_bind_methods) {
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
    local_58 = "OggPacketSequence";
    local_70 = 0;
    local_50 = 0x11;
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
    if ((code *)PTR__bind_methods_00119008 != Resource::_bind_methods) {
      OggPacketSequence::_bind_methods();
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
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
      if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) {
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



/* MethodBindTRC<bool>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<bool>::_gen_argument_type_info(int param_1)

{
  undefined4 in_register_0000003c;
  undefined4 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar1 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC14;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  local_60 = 0;
  *puVar1 = 1;
  puVar1[6] = 0;
  *(undefined8 *)(puVar1 + 8) = 0;
  *(undefined1 (*) [16])(puVar1 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar1[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar1 + 8),(CowData *)&local_58);
    puVar1[10] = 6;
    if (puVar1[6] == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(puVar1 + 8),false);
      if (*(undefined **)(puVar1 + 4) == local_48) {
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar1 + 4) = local_48;
      }
      goto LAB_00109455;
    }
  }
  StringName::operator=((StringName *)(puVar1 + 4),(StringName *)&local_50);
LAB_00109455:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<int>::_gen_argument_type_info(int param_1)

{
  undefined4 in_register_0000003c;
  undefined4 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar1 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC14;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  local_60 = 0;
  *puVar1 = 2;
  puVar1[6] = 0;
  *(undefined8 *)(puVar1 + 8) = 0;
  *(undefined1 (*) [16])(puVar1 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar1[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar1 + 8),(CowData *)&local_58);
    puVar1[10] = 6;
    if (puVar1[6] == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(puVar1 + 8),false);
      if (*(undefined **)(puVar1 + 4) == local_48) {
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar1 + 4) = local_48;
      }
      goto LAB_001095b5;
    }
  }
  StringName::operator=((StringName *)(puVar1 + 4),(StringName *)&local_50);
LAB_001095b5:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<double>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<double>::_gen_argument_type_info(int param_1)

{
  undefined4 in_register_0000003c;
  undefined4 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar1 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC14;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  local_60 = 0;
  *puVar1 = 3;
  puVar1[6] = 0;
  *(undefined8 *)(puVar1 + 8) = 0;
  *(undefined1 (*) [16])(puVar1 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar1[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar1 + 8),(CowData *)&local_58);
    puVar1[10] = 6;
    if (puVar1[6] == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(puVar1 + 8),false);
      if (*(undefined **)(puVar1 + 4) == local_48) {
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar1 + 4) = local_48;
      }
      goto LAB_00109715;
    }
  }
  StringName::operator=((StringName *)(puVar1 + 4),(StringName *)&local_50);
LAB_00109715:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<OggPacketSequence>>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Ref<OggPacketSequence>>::_gen_argument_type_info(int param_1)

{
  undefined4 in_register_0000003c;
  undefined4 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar1 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = "OggPacketSequence";
  local_40 = 0x11;
  String::parse_latin1((StrRange *)&local_58);
  local_60 = 0;
  *puVar1 = 0x18;
  puVar1[6] = 0x11;
  *(undefined8 *)(puVar1 + 8) = 0;
  *(undefined1 (*) [16])(puVar1 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar1[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar1 + 8),(CowData *)&local_58);
    puVar1[10] = 6;
    if (puVar1[6] != 0x11) {
      StringName::operator=((StringName *)(puVar1 + 4),(StringName *)&local_50);
      goto LAB_00109835;
    }
  }
  StringName::StringName((StringName *)&local_48,(String *)(puVar1 + 8),false);
  if (*(char **)(puVar1 + 4) == local_48) {
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  else {
    StringName::unref();
    *(char **)(puVar1 + 4) = local_48;
  }
LAB_00109835:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AudioStreamPlaybackOggVorbis::_initialize_classv() */

void AudioStreamPlaybackOggVorbis::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (AudioStreamPlaybackResampled::initialize_class()::initialized == '\0') {
      if (AudioStreamPlayback::initialize_class()::initialized == '\0') {
        if (RefCounted::initialize_class()::initialized == '\0') {
          Object::initialize_class();
          local_60 = 0;
          local_50 = 6;
          local_58 = "Object";
          String::parse_latin1((StrRange *)&local_60);
          StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
          local_70 = 0;
          String::parse_latin1((String *)&local_70,"RefCounted");
          StringName::StringName((StringName *)&local_68,(String *)&local_70,false);
          ClassDB::_add_class2((StringName *)&local_68,(StringName *)&local_58);
          if ((StringName::configured != '\0') && (local_68 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
          if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          if ((code *)PTR__bind_methods_00119010 != RefCounted::_bind_methods) {
            RefCounted::_bind_methods();
          }
          RefCounted::initialize_class()::initialized = '\x01';
        }
        local_68 = 0;
        local_58 = "RefCounted";
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
        AudioStreamPlayback::_bind_methods();
        AudioStreamPlayback::initialize_class()::initialized = '\x01';
      }
      local_58 = "AudioStreamPlayback";
      local_68 = 0;
      local_50 = 0x13;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "AudioStreamPlaybackResampled";
      local_70 = 0;
      local_50 = 0x1c;
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
      if ((code *)PTR__bind_methods_00119018 != AudioStreamPlayback::_bind_methods) {
        AudioStreamPlaybackResampled::_bind_methods();
      }
      AudioStreamPlaybackResampled::initialize_class()::initialized = '\x01';
    }
    local_58 = "AudioStreamPlaybackResampled";
    local_68 = 0;
    local_50 = 0x1c;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "AudioStreamPlaybackOggVorbis";
    local_70 = 0;
    local_50 = 0x1c;
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
    initialize_class()::initialized = '\x01';
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<int>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
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
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar5 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar5 = 0;
  puVar5[6] = 0;
  *(undefined8 *)(puVar5 + 8) = 0;
  puVar5[10] = 6;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  if (in_EDX != 0) goto LAB_00109d5b;
  local_78 = 0;
  local_80 = 0;
  local_68 = &_LC14;
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
LAB_00109e50:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00109e50;
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
  *puVar5 = local_68._0_4_;
  if (*(long *)(puVar5 + 2) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar5 + 2));
    uVar3 = local_60._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *(undefined8 *)(puVar5 + 2) = uVar3;
  }
  if (*(long *)(puVar5 + 4) != local_60._8_8_) {
    StringName::unref();
    uVar3 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(puVar5 + 4) = uVar3;
  }
  puVar5[6] = local_50;
  if (*(long *)(puVar5 + 8) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar5 + 8));
    lVar4 = local_48;
    local_48 = 0;
    *(long *)(puVar5 + 8) = lVar4;
  }
  puVar5[10] = local_40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
LAB_00109d5b:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
}



/* MethodBindT<bool>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<bool>::_gen_argument_type_info(int param_1)

{
  long lVar1;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar2;
  long in_FS_OFFSET;
  undefined8 local_80;
  undefined8 local_78;
  long local_70;
  undefined *local_68;
  long local_60;
  long local_58;
  undefined4 local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar2 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar2 = 0;
  puVar2[6] = 0;
  *(undefined8 *)(puVar2 + 8) = 0;
  puVar2[10] = 6;
  *(undefined1 (*) [16])(puVar2 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    local_70 = 0;
    local_78 = 0;
    local_68 = &_LC14;
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_78);
    local_80 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_68,1,(CowData<char32_t> *)&local_80,0,(StrRange *)&local_78,6,
               &local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    if ((StringName::configured != '\0') && (local_70 != 0)) {
      StringName::unref();
    }
    *puVar2 = local_68._0_4_;
    if (*(long *)(puVar2 + 2) != local_60) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + 2));
      lVar1 = local_60;
      local_60 = 0;
      *(long *)(puVar2 + 2) = lVar1;
    }
    if (*(long *)(puVar2 + 4) != local_58) {
      StringName::unref();
      lVar1 = local_58;
      local_58 = 0;
      *(long *)(puVar2 + 4) = lVar1;
    }
    puVar2[6] = local_50;
    if (*(long *)(puVar2 + 8) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + 8));
      lVar1 = local_48;
      local_48 = 0;
      *(long *)(puVar2 + 8) = lVar1;
    }
    puVar2[10] = local_40;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<OggPacketSequence> >::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<Ref<OggPacketSequence>>::_gen_argument_type_info(int param_1)

{
  long lVar1;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar2;
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
  
  puVar2 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar2 = 0;
  puVar2[6] = 0;
  *(undefined8 *)(puVar2 + 8) = 0;
  puVar2[10] = 6;
  *(undefined1 (*) [16])(puVar2 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    local_70 = 0;
    local_78 = 0;
    local_68 = "OggPacketSequence";
    local_60 = 0x11;
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
    *puVar2 = local_68._0_4_;
    if (*(long *)(puVar2 + 2) != local_60) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + 2));
      lVar1 = local_60;
      local_60 = 0;
      *(long *)(puVar2 + 2) = lVar1;
    }
    if (*(long *)(puVar2 + 4) != local_58) {
      StringName::unref();
      lVar1 = local_58;
      local_58 = 0;
      *(long *)(puVar2 + 4) = lVar1;
    }
    puVar2[6] = local_50;
    if (*(long *)(puVar2 + 8) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + 8));
      lVar1 = local_48;
      local_48 = 0;
      *(long *)(puVar2 + 8) = lVar1;
    }
    puVar2[10] = local_40;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar2;
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
  undefined8 local_80;
  undefined8 local_78;
  long local_70;
  undefined *local_68;
  long local_60;
  long local_58;
  undefined4 local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar2 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar2 = 0;
  puVar2[6] = 0;
  *(undefined8 *)(puVar2 + 8) = 0;
  puVar2[10] = 6;
  *(undefined1 (*) [16])(puVar2 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    local_70 = 0;
    local_78 = 0;
    local_68 = &_LC14;
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_78);
    local_80 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_68,3,(CowData<char32_t> *)&local_80,0,(StrRange *)&local_78,6,
               &local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    if ((StringName::configured != '\0') && (local_70 != 0)) {
      StringName::unref();
    }
    *puVar2 = local_68._0_4_;
    if (*(long *)(puVar2 + 2) != local_60) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + 2));
      lVar1 = local_60;
      local_60 = 0;
      *(long *)(puVar2 + 2) = lVar1;
    }
    if (*(long *)(puVar2 + 4) != local_58) {
      StringName::unref();
      lVar1 = local_58;
      local_58 = 0;
      *(long *)(puVar2 + 4) = lVar1;
    }
    puVar2[6] = local_50;
    if (*(long *)(puVar2 + 8) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + 8));
      lVar1 = local_48;
      local_48 = 0;
      *(long *)(puVar2 + 8) = lVar1;
    }
    puVar2[10] = local_40;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OggPacketSequence::is_class(String const&) const */

undefined8 __thiscall OggPacketSequence::is_class(OggPacketSequence *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_0010a4cf;
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
LAB_0010a4cf:
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
    if (cVar6 != '\0') goto LAB_0010a583;
  }
  cVar6 = String::operator==(param_1,"OggPacketSequence");
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
              if (lVar5 == 0) goto LAB_0010a63f;
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
LAB_0010a63f:
      cVar6 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar6 != '\0') goto LAB_0010a583;
    }
    cVar6 = String::operator==(param_1,"Resource");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
        return uVar7;
      }
      goto LAB_0010a6b1;
    }
  }
LAB_0010a583:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010a6b1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RefCounted::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void RefCounted::_get_property_listv(List *param_1,bool param_2)

{
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
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
      StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_0010a81c;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010a81c:
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)CONCAT71(in_register_00000031,param_2),
             (PropertyInfo *)&local_78);
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
  ClassDB::get_property_list
            ((StringName *)&local_78,(List *)CONCAT71(in_register_00000031,param_2),true,
             (Object *)param_1);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* AudioStreamPlayback::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
AudioStreamPlayback::_get_property_listv(AudioStreamPlayback *this,List *param_1,bool param_2)

{
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
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
      StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_0010aa81;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010aa81:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
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



/* AudioSample::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall AudioSample::_get_property_listv(AudioSample *this,List *param_1,bool param_2)

{
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
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
      StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_0010ad31;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010ad31:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
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



/* AudioStreamPlaybackResampled::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */

void __thiscall
AudioStreamPlaybackResampled::_get_property_listv
          (AudioStreamPlaybackResampled *this,List *param_1,bool param_2)

{
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
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
      StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_0010afe1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010afe1:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
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



/* AudioStreamPlaybackOggVorbis::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */

void __thiscall
AudioStreamPlaybackOggVorbis::_get_property_listv
          (AudioStreamPlaybackOggVorbis *this,List *param_1,bool param_2)

{
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
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    AudioStreamPlaybackResampled::_get_property_listv
              ((AudioStreamPlaybackResampled *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "AudioStreamPlaybackOggVorbis";
  local_70 = 0x1c;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "AudioStreamPlaybackOggVorbis";
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
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
      StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_0010b291;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010b291:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"AudioStreamPlaybackOggVorbis",false);
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



/* Resource::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Resource::_get_property_listv(Resource *this,List *param_1,bool param_2)

{
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
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
      StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_0010b541;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010b541:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
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



/* OggPacketSequence::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
OggPacketSequence::_get_property_listv(OggPacketSequence *this,List *param_1,bool param_2)

{
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
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    Resource::_get_property_listv((Resource *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "OggPacketSequence";
  local_70 = 0x11;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "OggPacketSequence";
  local_98 = 0;
  local_70 = 0x11;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
      StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_0010b7f1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010b7f1:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"OggPacketSequence",false);
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



/* AudioStream::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall AudioStream::_get_property_listv(AudioStream *this,List *param_1,bool param_2)

{
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
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
      StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_0010baa1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010baa1:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
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



/* AudioStreamOggVorbis::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
AudioStreamOggVorbis::_get_property_listv(AudioStreamOggVorbis *this,List *param_1,bool param_2)

{
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
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    AudioStream::_get_property_listv((AudioStream *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "AudioStreamOggVorbis";
  local_70 = 0x14;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "AudioStreamOggVorbis";
  local_98 = 0;
  local_70 = 0x14;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
      StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_0010bd51;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010bd51:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"AudioStreamOggVorbis",false);
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



/* MethodBindTRS<Ref<AudioStreamOggVorbis>, Vector<unsigned char>
   const&>::_gen_argument_type_info(int) const */

undefined4 *
MethodBindTRS<Ref<AudioStreamOggVorbis>,Vector<unsigned_char>const&>::_gen_argument_type_info
          (int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  undefined8 local_b0;
  undefined8 local_a8;
  long local_a0;
  long local_98;
  undefined1 local_90 [16];
  undefined8 local_80;
  long local_78;
  undefined4 local_70;
  char *local_68;
  long local_60;
  ulong local_58;
  undefined4 local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_98 = 0;
  if (in_EDX == 0) {
    local_80 = 0;
    local_90._0_8_ = 0;
    local_90._8_8_ = 0;
    local_78 = 0;
    local_70 = 6;
    local_a0 = 0;
    local_a8 = 0;
    String::parse_latin1((String *)&local_a8,"");
    local_b0 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_68,0x1d,(CowData<char32_t> *)&local_b0,0,(String *)&local_a8,6
               ,&local_a0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    if ((StringName::configured != '\0') && (local_a0 != 0)) {
      StringName::unref();
    }
    local_98 = CONCAT44(local_98._4_4_,local_68._0_4_);
    if (local_90._0_8_ != local_60) {
      CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
      local_90._0_8_ = local_60;
      local_60 = 0;
    }
    if (local_90._8_8_ != local_58) {
      StringName::unref();
      local_90._8_8_ = local_58;
      local_58 = 0;
    }
    local_80 = CONCAT44(local_80._4_4_,local_50);
    if (local_78 != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      local_78 = local_48;
      local_48 = 0;
    }
    local_70 = local_40;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
    uVar3 = local_90._8_8_;
    uVar2 = local_90._0_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_90._8_8_;
    local_90 = auVar1 << 0x40;
    *puVar4 = (undefined4)local_98;
    *(undefined8 *)(puVar4 + 2) = uVar2;
    *(undefined8 *)(puVar4 + 4) = uVar3;
    puVar4[6] = (undefined4)local_80;
    *(long *)(puVar4 + 8) = local_78;
    puVar4[10] = local_70;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
    goto LAB_0010c114;
  }
  local_a0 = 0;
  local_60 = 0x14;
  local_68 = "AudioStreamOggVorbis";
  String::parse_latin1((StrRange *)&local_a0);
  local_a8 = 0;
  *puVar4 = 0x18;
  puVar4[6] = 0x11;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (local_a0 == 0) {
    puVar4[10] = 6;
LAB_0010c147:
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
    if (puVar4[6] == 0x11) goto LAB_0010c147;
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_98);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  if ((StringName::configured != '\0') && (local_98 != 0)) {
    StringName::unref();
  }
LAB_0010c114:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRS<Ref<AudioStreamOggVorbis>, String const&>::_gen_argument_type_info(int) const */

undefined4 *
MethodBindTRS<Ref<AudioStreamOggVorbis>,String_const&>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  undefined8 local_b0;
  undefined8 local_a8;
  long local_a0;
  long local_98;
  undefined1 local_90 [16];
  undefined8 local_80;
  long local_78;
  undefined4 local_70;
  char *local_68;
  long local_60;
  ulong local_58;
  undefined4 local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_98 = 0;
  if (in_EDX == 0) {
    local_80 = 0;
    local_90._0_8_ = 0;
    local_90._8_8_ = 0;
    local_78 = 0;
    local_70 = 6;
    local_a0 = 0;
    local_a8 = 0;
    String::parse_latin1((String *)&local_a8,"");
    local_b0 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_68,4,(CowData<char32_t> *)&local_b0,0,(String *)&local_a8,6,
               &local_a0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    if ((StringName::configured != '\0') && (local_a0 != 0)) {
      StringName::unref();
    }
    local_98 = CONCAT44(local_98._4_4_,local_68._0_4_);
    if (local_90._0_8_ != local_60) {
      CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
      local_90._0_8_ = local_60;
      local_60 = 0;
    }
    if (local_90._8_8_ != local_58) {
      StringName::unref();
      local_90._8_8_ = local_58;
      local_58 = 0;
    }
    local_80 = CONCAT44(local_80._4_4_,local_50);
    if (local_78 != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      local_78 = local_48;
      local_48 = 0;
    }
    local_70 = local_40;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
    uVar3 = local_90._8_8_;
    uVar2 = local_90._0_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_90._8_8_;
    local_90 = auVar1 << 0x40;
    *puVar4 = (undefined4)local_98;
    *(undefined8 *)(puVar4 + 2) = uVar2;
    *(undefined8 *)(puVar4 + 4) = uVar3;
    puVar4[6] = (undefined4)local_80;
    *(long *)(puVar4 + 8) = local_78;
    puVar4[10] = local_70;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
    goto LAB_0010c434;
  }
  local_a0 = 0;
  local_60 = 0x14;
  local_68 = "AudioStreamOggVorbis";
  String::parse_latin1((StrRange *)&local_a0);
  local_a8 = 0;
  *puVar4 = 0x18;
  puVar4[6] = 0x11;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (local_a0 == 0) {
    puVar4[10] = 6;
LAB_0010c467:
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
    if (puVar4[6] == 0x11) goto LAB_0010c467;
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_98);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  if ((StringName::configured != '\0') && (local_98 != 0)) {
    StringName::unref();
  }
LAB_0010c434:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<AudioStreamOggVorbis, Ref<OggPacketSequence> >(void
   (AudioStreamOggVorbis::*)(Ref<OggPacketSequence>)) */

MethodBind *
create_method_bind<AudioStreamOggVorbis,Ref<OggPacketSequence>>(_func_void_Ref *param_1)

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
  *(_func_void_Ref **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00113fb0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "AudioStreamOggVorbis";
  local_30 = 0x14;
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



/* MethodBind* create_method_bind<AudioStreamOggVorbis,
   Ref<OggPacketSequence>>(Ref<OggPacketSequence> (AudioStreamOggVorbis::*)() const) */

MethodBind * create_method_bind<AudioStreamOggVorbis,Ref<OggPacketSequence>>(_func_Ref *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_00114010;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "AudioStreamOggVorbis";
  local_30 = 0x14;
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



/* MethodBind* create_method_bind<AudioStreamOggVorbis, bool>(void (AudioStreamOggVorbis::*)(bool))
    */

MethodBind * create_method_bind<AudioStreamOggVorbis,bool>(_func_void_bool *param_1)

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
  *(_func_void_bool **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00114070;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "AudioStreamOggVorbis";
  local_30 = 0x14;
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



/* MethodBind* create_method_bind<AudioStreamOggVorbis, bool>(bool (AudioStreamOggVorbis::*)()
   const) */

MethodBind * create_method_bind<AudioStreamOggVorbis,bool>(_func_bool *param_1)

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
  *(_func_bool **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001140d0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "AudioStreamOggVorbis";
  local_30 = 0x14;
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



/* MethodBind* create_method_bind<AudioStreamOggVorbis, double>(void
   (AudioStreamOggVorbis::*)(double)) */

MethodBind * create_method_bind<AudioStreamOggVorbis,double>(_func_void_double *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_00114130;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "AudioStreamOggVorbis";
  local_30 = 0x14;
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



/* MethodBind* create_method_bind<AudioStreamOggVorbis, double>(double (AudioStreamOggVorbis::*)()
   const) */

MethodBind * create_method_bind<AudioStreamOggVorbis,double>(_func_double *param_1)

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
  *(_func_double **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00114190;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "AudioStreamOggVorbis";
  local_30 = 0x14;
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



/* MethodBind* create_method_bind<AudioStreamOggVorbis, int>(void (AudioStreamOggVorbis::*)(int)) */

MethodBind * create_method_bind<AudioStreamOggVorbis,int>(_func_void_int *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_001141f0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "AudioStreamOggVorbis";
  local_30 = 0x14;
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



/* MethodBind* create_method_bind<AudioStreamOggVorbis, int>(int (AudioStreamOggVorbis::*)() const)
    */

MethodBind * create_method_bind<AudioStreamOggVorbis,int>(_func_int *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_00114250;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "AudioStreamOggVorbis";
  local_30 = 0x14;
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



/* AudioStreamOggVorbis::_initialize_classv() */

void AudioStreamOggVorbis::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_70;
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
          local_60 = 0;
          String::parse_latin1((String *)&local_60,"Object");
          StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
          local_70 = 0;
          String::parse_latin1((String *)&local_70,"RefCounted");
          StringName::StringName((StringName *)&local_68,(String *)&local_70,false);
          ClassDB::_add_class2((StringName *)&local_68,(StringName *)&local_58);
          if ((StringName::configured != '\0') && (local_68 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
          if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          if ((code *)PTR__bind_methods_00119010 != RefCounted::_bind_methods) {
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
      if ((code *)PTR__bind_methods_00119020 != Resource::_bind_methods) {
        AudioStream::_bind_methods();
      }
      AudioStream::initialize_class()::initialized = '\x01';
    }
    local_58 = "AudioStream";
    local_68 = 0;
    local_50 = 0xb;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "AudioStreamOggVorbis";
    local_70 = 0;
    local_50 = 0x14;
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
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<unsigned char>::_unref() */

void __thiscall CowData<unsigned_char>::_unref(CowData<unsigned_char> *this)

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



/* CowData<unsigned char>::_realloc(long) */

undefined8 __thiscall CowData<unsigned_char>::_realloc(CowData<unsigned_char> *this,long param_1)

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



/* CowData<Vector<unsigned char> >::_unref() */

void __thiscall CowData<Vector<unsigned_char>>::_unref(CowData<Vector<unsigned_char>> *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    lVar2 = *(long *)this;
    if (lVar2 != 0) {
      lVar3 = *(long *)(lVar2 + -8);
      *(undefined8 *)this = 0;
      if (lVar3 != 0) {
        lVar7 = 0;
        lVar6 = lVar2;
        do {
          if (*(long *)(lVar6 + 8) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(lVar6 + 8) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar4 = *(long *)(lVar6 + 8);
              *(undefined8 *)(lVar6 + 8) = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          lVar7 = lVar7 + 1;
          lVar6 = lVar6 + 0x10;
        } while (lVar3 != lVar7);
      }
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* OggPacketSequence::~OggPacketSequence() */

void __thiscall OggPacketSequence::~OggPacketSequence(OggPacketSequence *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  CowData<Vector<unsigned_char>> *this_00;
  
  *(undefined ***)this = &PTR__initialize_classv_00113900;
  if (*(long *)(this + 600) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 600) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 600);
      *(undefined8 *)(this + 600) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x248) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x248) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x248);
      if (lVar2 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar3 = *(long *)(lVar2 + -8);
      *(undefined8 *)(this + 0x248) = 0;
      if (lVar3 != 0) {
        lVar5 = 0;
        this_00 = (CowData<Vector<unsigned_char>> *)(lVar2 + 8);
        do {
          lVar5 = lVar5 + 1;
          CowData<Vector<unsigned_char>>::_unref(this_00);
          this_00 = this_00 + 0x10;
        } while (lVar3 != lVar5);
      }
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  Resource::~Resource((Resource *)this);
  return;
}



/* CowData<Vector<unsigned char> >::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Vector<unsigned_char>>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* AudioStreamOggVorbis::load_from_buffer(Vector<unsigned char> const&) [clone .cold] */

void AudioStreamOggVorbis::load_from_buffer(Vector *param_1)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* RBMap<unsigned long, Vector<Vector<unsigned char> >, Comparator<unsigned long>,
   DefaultAllocator>::_cleanup_tree(RBMap<unsigned long, Vector<Vector<unsigned char> >,
   Comparator<unsigned long>, DefaultAllocator>::Element*) [clone .part.0] */

void __thiscall
RBMap<unsigned_long,Vector<Vector<unsigned_char>>,Comparator<unsigned_long>,DefaultAllocator>::
_cleanup_tree(RBMap<unsigned_long,Vector<Vector<unsigned_char>>,Comparator<unsigned_long>,DefaultAllocator>
              *this,Element *param_1)

{
  Element *pEVar1;
  Element *pEVar2;
  Element *pEVar3;
  Element *pEVar4;
  Element *pEVar5;
  Element *pEVar6;
  
  pEVar1 = *(Element **)(param_1 + 0x10);
  pEVar2 = *(Element **)(this + 8);
  if (pEVar1 != pEVar2) {
    pEVar3 = *(Element **)(pEVar1 + 0x10);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar3 + 0x10);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar2 != pEVar6) {
          pEVar4 = *(Element **)(pEVar6 + 0x10);
          if (pEVar2 != pEVar4) {
            _cleanup_tree(this,pEVar4);
            pEVar4 = *(Element **)(this + 8);
          }
          if (pEVar4 != *(Element **)(pEVar6 + 8)) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)(pEVar6 + 0x40));
          Memory::free_static(pEVar6,false);
          pEVar6 = *(Element **)(this + 8);
        }
        pEVar2 = *(Element **)(pEVar5 + 8);
        if (pEVar2 != pEVar6) {
          pEVar4 = *(Element **)(pEVar2 + 0x10);
          if (pEVar6 != pEVar4) {
            _cleanup_tree(this,pEVar4);
            pEVar4 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar2 + 8) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 8));
          }
          CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)(pEVar2 + 0x40));
          Memory::free_static(pEVar2,false);
        }
        CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)(pEVar5 + 0x40));
        Memory::free_static(pEVar5,false);
        pEVar5 = *(Element **)(this + 8);
      }
      pEVar2 = *(Element **)(pEVar3 + 8);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar2 + 0x10);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)(pEVar6 + 0x40));
          Memory::free_static(pEVar6,false);
          pEVar5 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar2 + 8);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)(pEVar6 + 0x40));
          Memory::free_static(pEVar6,false);
        }
        CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)(pEVar2 + 0x40));
        Memory::free_static(pEVar2,false);
      }
      CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)(pEVar3 + 0x40));
      Memory::free_static(pEVar3,false);
      pEVar3 = *(Element **)(this + 8);
    }
    pEVar2 = *(Element **)(pEVar1 + 8);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar2 + 0x10);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)(pEVar6 + 0x40));
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)(pEVar6 + 0x40));
          Memory::free_static(pEVar6,false);
        }
        CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)(pEVar5 + 0x40));
        Memory::free_static(pEVar5,false);
        pEVar3 = *(Element **)(this + 8);
      }
      pEVar5 = *(Element **)(pEVar2 + 8);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)(pEVar6 + 0x40));
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)(pEVar6 + 0x40));
          Memory::free_static(pEVar6,false);
        }
        CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)(pEVar5 + 0x40));
        Memory::free_static(pEVar5,false);
      }
      CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)(pEVar2 + 0x40));
      Memory::free_static(pEVar2,false);
    }
    CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)(pEVar1 + 0x40));
    Memory::free_static(pEVar1,false);
    pEVar2 = *(Element **)(this + 8);
  }
  pEVar1 = *(Element **)(param_1 + 8);
  if (pEVar1 != pEVar2) {
    pEVar3 = *(Element **)(pEVar1 + 0x10);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar3 + 0x10);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar2 != pEVar6) {
          pEVar4 = *(Element **)(pEVar6 + 0x10);
          if (pEVar2 != pEVar4) {
            _cleanup_tree(this,pEVar4);
            pEVar4 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)(pEVar6 + 0x40));
          Memory::free_static(pEVar6,false);
          pEVar6 = *(Element **)(this + 8);
        }
        pEVar2 = *(Element **)(pEVar5 + 8);
        if (pEVar2 != pEVar6) {
          if (*(Element **)(pEVar2 + 0x10) != pEVar6) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 0x10));
            pEVar6 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar2 + 8) != pEVar6) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 8));
          }
          CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)(pEVar2 + 0x40));
          Memory::free_static(pEVar2,false);
        }
        CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)(pEVar5 + 0x40));
        Memory::free_static(pEVar5,false);
        pEVar5 = *(Element **)(this + 8);
      }
      pEVar2 = *(Element **)(pEVar3 + 8);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar2 + 0x10);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)(pEVar6 + 0x40));
          Memory::free_static(pEVar6,false);
          pEVar5 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar2 + 8);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)(pEVar6 + 0x40));
          Memory::free_static(pEVar6,false);
        }
        CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)(pEVar2 + 0x40));
        Memory::free_static(pEVar2,false);
      }
      CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)(pEVar3 + 0x40));
      Memory::free_static(pEVar3,false);
      pEVar3 = *(Element **)(this + 8);
    }
    pEVar2 = *(Element **)(pEVar1 + 8);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar2 + 0x10);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)(pEVar6 + 0x40));
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)(pEVar6 + 0x40));
          Memory::free_static(pEVar6,false);
        }
        CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)(pEVar5 + 0x40));
        Memory::free_static(pEVar5,false);
        pEVar3 = *(Element **)(this + 8);
      }
      pEVar5 = *(Element **)(pEVar2 + 8);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)(pEVar6 + 0x40));
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)(pEVar6 + 0x40));
          Memory::free_static(pEVar6,false);
        }
        CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)(pEVar5 + 0x40));
        Memory::free_static(pEVar5,false);
      }
      CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)(pEVar2 + 0x40));
      Memory::free_static(pEVar2,false);
    }
    CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)(pEVar1 + 0x40));
    Memory::free_static(pEVar1,false);
  }
  CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)(param_1 + 0x40));
  Memory::free_static(param_1,false);
  return;
}



/* RBMap<unsigned long, Vector<Vector<unsigned char> >, Comparator<unsigned long>,
   DefaultAllocator>::~RBMap() */

void __thiscall
RBMap<unsigned_long,Vector<Vector<unsigned_char>>,Comparator<unsigned_long>,DefaultAllocator>::
~RBMap(RBMap<unsigned_long,Vector<Vector<unsigned_char>>,Comparator<unsigned_long>,DefaultAllocator>
       *this)

{
  Element *pEVar1;
  Element *pEVar2;
  Element *pEVar3;
  Element *pEVar4;
  void *pvVar5;
  Element *pEVar6;
  Element *pEVar7;
  
  pvVar5 = *(void **)this;
  if (pvVar5 != (void *)0x0) {
    pEVar1 = *(Element **)((long)pvVar5 + 0x10);
    pEVar3 = *(Element **)(this + 8);
    if (pEVar1 != pEVar3) {
      pEVar4 = *(Element **)(pEVar1 + 0x10);
      if (pEVar3 != pEVar4) {
        pEVar7 = *(Element **)(pEVar4 + 0x10);
        if (pEVar3 != pEVar7) {
          pEVar6 = *(Element **)(pEVar7 + 0x10);
          if (pEVar3 != pEVar6) {
            _cleanup_tree(this,pEVar6);
            pEVar6 = *(Element **)(this + 8);
          }
          if (pEVar6 != *(Element **)(pEVar7 + 8)) {
            _cleanup_tree(this,*(Element **)(pEVar7 + 8));
          }
          CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)(pEVar7 + 0x40));
          Memory::free_static(pEVar7,false);
          pEVar7 = *(Element **)(this + 8);
        }
        pEVar3 = *(Element **)(pEVar4 + 8);
        if (pEVar7 != pEVar3) {
          pEVar6 = *(Element **)(pEVar3 + 0x10);
          if (pEVar7 != pEVar6) {
            _cleanup_tree(this,pEVar6);
            pEVar6 = *(Element **)(this + 8);
          }
          pEVar7 = *(Element **)(pEVar3 + 8);
          if (pEVar7 != pEVar6) {
            if (*(Element **)(pEVar7 + 0x10) != pEVar6) {
              _cleanup_tree(this,*(Element **)(pEVar7 + 0x10));
              pEVar6 = *(Element **)(this + 8);
            }
            if (*(Element **)(pEVar7 + 8) != pEVar6) {
              _cleanup_tree(this,*(Element **)(pEVar7 + 8));
            }
            CowData<Vector<unsigned_char>>::_unref
                      ((CowData<Vector<unsigned_char>> *)(pEVar7 + 0x40));
            Memory::free_static(pEVar7,false);
          }
          CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)(pEVar3 + 0x40));
          Memory::free_static(pEVar3,false);
        }
        CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)(pEVar4 + 0x40));
        Memory::free_static(pEVar4,false);
        pEVar4 = *(Element **)(this + 8);
      }
      pEVar3 = *(Element **)(pEVar1 + 8);
      if (pEVar3 != pEVar4) {
        pEVar7 = *(Element **)(pEVar3 + 0x10);
        if (pEVar4 != pEVar7) {
          pEVar6 = *(Element **)(pEVar7 + 0x10);
          if (pEVar4 != pEVar6) {
            _cleanup_tree(this,pEVar6);
            pEVar6 = *(Element **)(this + 8);
          }
          pEVar4 = *(Element **)(pEVar7 + 8);
          if (pEVar6 != pEVar4) {
            pEVar2 = *(Element **)(pEVar4 + 0x10);
            if (pEVar6 != pEVar2) {
              _cleanup_tree(this,pEVar2);
              pEVar2 = *(Element **)(this + 8);
            }
            if (*(Element **)(pEVar4 + 8) != pEVar2) {
              _cleanup_tree(this,*(Element **)(pEVar4 + 8));
            }
            CowData<Vector<unsigned_char>>::_unref
                      ((CowData<Vector<unsigned_char>> *)(pEVar4 + 0x40));
            Memory::free_static(pEVar4,false);
          }
          CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)(pEVar7 + 0x40));
          Memory::free_static(pEVar7,false);
          pEVar7 = *(Element **)(this + 8);
        }
        pEVar4 = *(Element **)(pEVar3 + 8);
        if (pEVar4 != pEVar7) {
          pEVar6 = *(Element **)(pEVar4 + 0x10);
          if (pEVar6 != pEVar7) {
            if (*(Element **)(pEVar6 + 0x10) != pEVar7) {
              _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
              pEVar7 = *(Element **)(this + 8);
            }
            if (pEVar7 != *(Element **)(pEVar6 + 8)) {
              _cleanup_tree(this,*(Element **)(pEVar6 + 8));
            }
            CowData<Vector<unsigned_char>>::_unref
                      ((CowData<Vector<unsigned_char>> *)(pEVar6 + 0x40));
            Memory::free_static(pEVar6,false);
            pEVar7 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar4 + 8) != pEVar7) {
            _cleanup_tree(this,*(Element **)(pEVar4 + 8));
          }
          CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)(pEVar4 + 0x40));
          Memory::free_static(pEVar4,false);
        }
        CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)(pEVar3 + 0x40));
        Memory::free_static(pEVar3,false);
      }
      CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)(pEVar1 + 0x40));
      Memory::free_static(pEVar1,false);
      pvVar5 = *(void **)this;
      pEVar3 = *(Element **)(this + 8);
    }
    *(Element **)((long)pvVar5 + 0x10) = pEVar3;
    *(undefined4 *)(this + 0x10) = 0;
    CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)((long)pvVar5 + 0x40));
    Memory::free_static(pvVar5,false);
    return;
  }
  return;
}



/* OggPacketSequence::~OggPacketSequence() */

void __thiscall OggPacketSequence::~OggPacketSequence(OggPacketSequence *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  CowData<Vector<unsigned_char>> *this_00;
  
  *(undefined ***)this = &PTR__initialize_classv_00113900;
  if (*(long *)(this + 600) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 600) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 600);
      *(undefined8 *)(this + 600) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x248) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x248) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x248);
      if (lVar2 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar3 = *(long *)(lVar2 + -8);
      *(undefined8 *)(this + 0x248) = 0;
      if (lVar3 != 0) {
        lVar5 = 0;
        this_00 = (CowData<Vector<unsigned_char>> *)(lVar2 + 8);
        do {
          lVar5 = lVar5 + 1;
          CowData<Vector<unsigned_char>>::_unref(this_00);
          this_00 = this_00 + 0x10;
        } while (lVar3 != lVar5);
      }
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  Resource::~Resource((Resource *)this);
  operator_delete(this,0x278);
  return;
}



/* void memdelete<OggPacketSequence>(OggPacketSequence*) */

void memdelete<OggPacketSequence>(OggPacketSequence *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  char cVar5;
  long lVar6;
  CowData<Vector<unsigned_char>> *this;
  
  cVar5 = predelete_handler((Object *)param_1);
  if (cVar5 == '\0') {
    return;
  }
  if (*(code **)(*(long *)param_1 + 0x140) != OggPacketSequence::~OggPacketSequence) {
    (**(code **)(*(long *)param_1 + 0x140))(param_1);
    goto LAB_0010e0f8;
  }
  *(undefined ***)param_1 = &PTR__initialize_classv_00113900;
  if (*(long *)(param_1 + 600) == 0) {
LAB_0010e088:
    lVar2 = *(long *)(param_1 + 0x248);
  }
  else {
    LOCK();
    plVar1 = (long *)(*(long *)(param_1 + 600) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 != 0) goto LAB_0010e088;
    lVar2 = *(long *)(param_1 + 600);
    *(undefined8 *)(param_1 + 600) = 0;
    Memory::free_static((void *)(lVar2 + -0x10),false);
    lVar2 = *(long *)(param_1 + 0x248);
  }
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(param_1 + 0x248);
      if (lVar2 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar3 = *(long *)(lVar2 + -8);
      *(undefined8 *)(param_1 + 0x248) = 0;
      if (lVar3 != 0) {
        lVar6 = 0;
        this = (CowData<Vector<unsigned_char>> *)(lVar2 + 8);
        do {
          lVar6 = lVar6 + 1;
          CowData<Vector<unsigned_char>>::_unref(this);
          this = this + 0x10;
        } while (lVar3 != lVar6);
      }
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  Resource::~Resource((Resource *)param_1);
LAB_0010e0f8:
  Memory::free_static(param_1,false);
  return;
}



/* void memdelete<AudioStreamOggVorbis>(AudioStreamOggVorbis*) */

void memdelete<AudioStreamOggVorbis>(AudioStreamOggVorbis *param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = predelete_handler((Object *)param_1);
  if (cVar1 == '\0') {
    return;
  }
  if (*(code **)(*(long *)param_1 + 0x140) != AudioStreamOggVorbis::~AudioStreamOggVorbis) {
    (**(code **)(*(long *)param_1 + 0x140))(param_1);
    Memory::free_static(param_1,false);
    return;
  }
  *(undefined ***)param_1 = &PTR__initialize_classv_00113cb8;
  if (*(long *)(param_1 + 0x368) != 0) {
    cVar1 = RefCounted::unreference();
    if (cVar1 != '\0') {
      memdelete<OggPacketSequence>(*(OggPacketSequence **)(param_1 + 0x368));
    }
  }
  bVar2 = StringName::configured != '\0';
  *(code **)param_1 = vorbis_synthesis;
  if (bVar2) {
    if (*(long *)(param_1 + 0x330) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010e2f7;
    }
    if (*(long *)(param_1 + 0x318) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010e2f7;
    }
    if (*(long *)(param_1 + 0x300) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010e2f7;
    }
    if (*(long *)(param_1 + 0x2e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010e2f7;
    }
    if (*(long *)(param_1 + 0x2d0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010e2f7;
    }
    if (*(long *)(param_1 + 0x2b8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010e2f7;
    }
    if (*(long *)(param_1 + 0x2a0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010e2f7;
    }
    if (*(long *)(param_1 + 0x288) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010e2f7;
    }
    if (*(long *)(param_1 + 0x270) != 0) {
      StringName::unref();
    }
  }
LAB_0010e2f7:
  Resource::~Resource((Resource *)param_1);
  Memory::free_static(param_1,false);
  return;
}



/* MethodBindTRS<Ref<AudioStreamOggVorbis>, String const&>::validated_call(Object*, Variant const**,
   Variant*) const */

void __thiscall
MethodBindTRS<Ref<AudioStreamOggVorbis>,String_const&>::validated_call
          (MethodBindTRS<Ref<AudioStreamOggVorbis>,String_const&> *this,Object *param_1,
          Variant **param_2,Variant *param_3)

{
  char cVar1;
  long in_FS_OFFSET;
  AudioStreamOggVorbis *local_30;
  undefined8 local_28;
  AudioStreamOggVorbis *local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(this + 0x58))(&local_30,*param_2 + 8,param_2,0);
  if (local_30 == (AudioStreamOggVorbis *)0x0) {
    Variant::ObjData::unref();
  }
  else {
    local_28 = *(undefined8 *)(local_30 + 0x60);
    local_20 = local_30;
    Variant::ObjData::ref((ObjData *)(param_3 + 8));
  }
  if (local_30 != (AudioStreamOggVorbis *)0x0) {
    cVar1 = RefCounted::unreference();
    if (cVar1 != '\0') {
      memdelete<AudioStreamOggVorbis>(local_30);
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRS<Ref<AudioStreamOggVorbis>, Vector<unsigned char> const&>::validated_call(Object*,
   Variant const**, Variant*) const */

void __thiscall
MethodBindTRS<Ref<AudioStreamOggVorbis>,Vector<unsigned_char>const&>::validated_call
          (MethodBindTRS<Ref<AudioStreamOggVorbis>,Vector<unsigned_char>const&> *this,
          Object *param_1,Variant **param_2,Variant *param_3)

{
  char cVar1;
  long in_FS_OFFSET;
  AudioStreamOggVorbis *local_30;
  undefined8 local_28;
  AudioStreamOggVorbis *local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(this + 0x58))(&local_30,*(long *)(*param_2 + 8) + 0x10,*param_2,0);
  if (local_30 == (AudioStreamOggVorbis *)0x0) {
    Variant::ObjData::unref();
  }
  else {
    local_28 = *(undefined8 *)(local_30 + 0x60);
    local_20 = local_30;
    Variant::ObjData::ref((ObjData *)(param_3 + 8));
  }
  if (local_30 != (AudioStreamOggVorbis *)0x0) {
    cVar1 = RefCounted::unreference();
    if (cVar1 != '\0') {
      memdelete<AudioStreamOggVorbis>(local_30);
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRS<Ref<AudioStreamOggVorbis>, String const&>::ptrcall(Object*, void const**, void*)
   const */

void __thiscall
MethodBindTRS<Ref<AudioStreamOggVorbis>,String_const&>::ptrcall
          (MethodBindTRS<Ref<AudioStreamOggVorbis>,String_const&> *this,Object *param_1,
          void **param_2,void *param_3)

{
  char cVar1;
  Object *pOVar2;
  Object *pOVar3;
  long in_FS_OFFSET;
  AudioStreamOggVorbis *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(this + 0x58))(&local_28,*param_2,param_2,0);
  if (local_28 == (AudioStreamOggVorbis *)0x0) {
                    /* WARNING: Load size is inaccurate */
    pOVar3 = *param_3;
    if (pOVar3 == (Object *)0x0) goto LAB_0010e521;
    *(undefined8 *)param_3 = 0;
    goto LAB_0010e56f;
  }
  pOVar2 = (Object *)__dynamic_cast(local_28,&Object::typeinfo,&RefCounted::typeinfo,0);
                    /* WARNING: Load size is inaccurate */
  pOVar3 = *param_3;
  if (pOVar3 != pOVar2) {
    *(Object **)param_3 = pOVar2;
    if (pOVar2 == (Object *)0x0) {
      if (pOVar3 != (Object *)0x0) goto LAB_0010e56f;
    }
    else {
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        *(undefined8 *)param_3 = 0;
      }
      if (pOVar3 != (Object *)0x0) {
LAB_0010e56f:
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(pOVar3);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
          }
        }
      }
      if (local_28 == (AudioStreamOggVorbis *)0x0) goto LAB_0010e521;
    }
  }
  cVar1 = RefCounted::unreference();
  if (cVar1 != '\0') {
    memdelete<AudioStreamOggVorbis>(local_28);
  }
LAB_0010e521:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRS<Ref<AudioStreamOggVorbis>, Vector<unsigned char> const&>::ptrcall(Object*, void
   const**, void*) const */

void __thiscall
MethodBindTRS<Ref<AudioStreamOggVorbis>,Vector<unsigned_char>const&>::ptrcall
          (MethodBindTRS<Ref<AudioStreamOggVorbis>,Vector<unsigned_char>const&> *this,
          Object *param_1,void **param_2,void *param_3)

{
  char cVar1;
  Object *pOVar2;
  Object *pOVar3;
  long in_FS_OFFSET;
  AudioStreamOggVorbis *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(this + 0x58))(&local_28,*param_2,param_2,0);
  if (local_28 == (AudioStreamOggVorbis *)0x0) {
                    /* WARNING: Load size is inaccurate */
    pOVar3 = *param_3;
    if (pOVar3 == (Object *)0x0) goto LAB_0010e631;
    *(undefined8 *)param_3 = 0;
    goto LAB_0010e67f;
  }
  pOVar2 = (Object *)__dynamic_cast(local_28,&Object::typeinfo,&RefCounted::typeinfo,0);
                    /* WARNING: Load size is inaccurate */
  pOVar3 = *param_3;
  if (pOVar3 != pOVar2) {
    *(Object **)param_3 = pOVar2;
    if (pOVar2 == (Object *)0x0) {
      if (pOVar3 != (Object *)0x0) goto LAB_0010e67f;
    }
    else {
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        *(undefined8 *)param_3 = 0;
      }
      if (pOVar3 != (Object *)0x0) {
LAB_0010e67f:
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(pOVar3);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
          }
        }
      }
      if (local_28 == (AudioStreamOggVorbis *)0x0) goto LAB_0010e631;
    }
  }
  cVar1 = RefCounted::unreference();
  if (cVar1 != '\0') {
    memdelete<AudioStreamOggVorbis>(local_28);
  }
LAB_0010e631:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRS<Ref<AudioStreamOggVorbis>, Vector<unsigned char> const&>::call(Object*, Variant
   const**, int, Callable::CallError&) const */

Object * MethodBindTRS<Ref<AudioStreamOggVorbis>,Vector<unsigned_char>const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  long lVar7;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar8;
  long in_FS_OFFSET;
  Object *local_60;
  Variant local_58 [8];
  CowData<unsigned_char> local_50 [8];
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  pVVar1 = param_2[0xb];
  *(undefined4 *)param_1 = 0;
  if (in_R8D < 2) {
    pVVar8 = param_2[5];
    if (pVVar8 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_0010e888;
LAB_0010e808:
      pVVar8 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar8 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0010e888:
        uVar6 = 4;
        goto LAB_0010e815;
      }
      if (in_R8D == 1) goto LAB_0010e808;
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
      pVVar8 = pVVar8 + lVar7 * 0x18;
    }
    *in_R9 = 0;
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar8,0x1d);
    uVar4 = _LC110;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_Vector(local_58);
    (*(code *)pVVar1)(&local_60,local_58);
    Variant::Variant((Variant *)local_48,local_60);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_48[0];
    *(undefined8 *)(param_1 + 8) = local_40;
    *(undefined8 *)(param_1 + 0x10) = uStack_38;
    if ((local_60 != (Object *)0x0) && (cVar5 = RefCounted::unreference(), cVar5 != '\0')) {
      memdelete<AudioStreamOggVorbis>((AudioStreamOggVorbis *)local_60);
    }
    CowData<unsigned_char>::_unref(local_50);
  }
  else {
    uVar6 = 3;
LAB_0010e815:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTRS<Ref<AudioStreamOggVorbis>, String const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTRS<Ref<AudioStreamOggVorbis>,String_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  long lVar7;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar8;
  long in_FS_OFFSET;
  Object *local_58;
  Variant local_50 [8];
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  pVVar1 = param_2[0xb];
  *(undefined4 *)param_1 = 0;
  if (in_R8D < 2) {
    pVVar8 = param_2[5];
    if (pVVar8 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_0010ea68;
LAB_0010e9e0:
      pVVar8 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar8 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0010ea68:
        uVar6 = 4;
        goto LAB_0010e9f5;
      }
      if (in_R8D == 1) goto LAB_0010e9e0;
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
      pVVar8 = pVVar8 + lVar7 * 0x18;
    }
    *in_R9 = 0;
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar8,4);
    uVar4 = _LC40;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_String(local_50);
    (*(code *)pVVar1)(&local_58,local_50);
    Variant::Variant((Variant *)local_48,local_58);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_48[0];
    *(undefined8 *)(param_1 + 8) = local_40;
    *(undefined8 *)(param_1 + 0x10) = uStack_38;
    if ((local_58 != (Object *)0x0) && (cVar5 = RefCounted::unreference(), cVar5 != '\0')) {
      memdelete<AudioStreamOggVorbis>((AudioStreamOggVorbis *)local_58);
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
  }
  else {
    uVar6 = 3;
LAB_0010e9f5:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* RBMap<unsigned long, Vector<Vector<unsigned char> >, Comparator<unsigned long>,
   DefaultAllocator>::_insert_rb_fix(RBMap<unsigned long, Vector<Vector<unsigned char> >,
   Comparator<unsigned long>, DefaultAllocator>::Element*) */

void __thiscall
RBMap<unsigned_long,Vector<Vector<unsigned_char>>,Comparator<unsigned_long>,DefaultAllocator>::
_insert_rb_fix(RBMap<unsigned_long,Vector<Vector<unsigned_char>>,Comparator<unsigned_long>,DefaultAllocator>
               *this,Element *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  Element *pEVar5;
  Element *pEVar6;
  Element *pEVar7;
  Element *pEVar8;
  
  iVar1 = *(int *)*(Element **)(param_1 + 0x18);
  pEVar7 = *(Element **)(param_1 + 0x18);
  do {
    while( true ) {
      pEVar8 = pEVar7;
      if (iVar1 != 0) {
        **(undefined4 **)(*(long *)this + 0x10) = 1;
        return;
      }
      pEVar5 = *(Element **)(pEVar8 + 0x18);
      pEVar6 = *(Element **)(pEVar5 + 0x10);
      pEVar7 = pEVar8;
      if (pEVar6 == pEVar8) break;
      if (*(int *)pEVar6 == 0) goto LAB_0010eb9d;
      if (*(Element **)(pEVar8 + 0x10) == param_1) {
        lVar2 = *(long *)(this + 8);
        lVar3 = *(long *)(param_1 + 8);
        *(long *)(pEVar8 + 0x10) = lVar3;
        pEVar7 = pEVar5;
        if (lVar2 != lVar3) {
          *(Element **)(lVar3 + 0x18) = pEVar8;
          pEVar7 = *(Element **)(pEVar8 + 0x18);
        }
        *(Element **)(param_1 + 0x18) = pEVar7;
        if (pEVar8 == *(Element **)(pEVar7 + 8)) {
          *(Element **)(pEVar7 + 8) = param_1;
        }
        else {
          *(Element **)(pEVar7 + 0x10) = param_1;
        }
        *(Element **)(param_1 + 8) = pEVar8;
        *(Element **)(pEVar8 + 0x18) = param_1;
        pEVar6 = *(Element **)(this + 8);
        *(int *)param_1 = 1;
        pEVar7 = param_1;
        if (pEVar5 == pEVar6) goto LAB_0010ecc0;
LAB_0010eb46:
        *(int *)pEVar5 = 0;
      }
      else {
        pEVar6 = *(Element **)(this + 8);
        *(int *)pEVar8 = 1;
        pEVar8 = param_1;
        if (pEVar5 != pEVar6) goto LAB_0010eb46;
LAB_0010ecc0:
        _err_print_error("_set_color","./core/templates/rb_map.h",0xed,
                         "Condition \"p_node == _data._nil && p_color == RED\" is true.",0,0);
      }
      lVar2 = *(long *)(pEVar5 + 8);
      lVar3 = *(long *)(this + 8);
      lVar4 = *(long *)(lVar2 + 0x10);
      *(long *)(pEVar5 + 8) = lVar4;
      if (lVar3 != lVar4) {
        *(Element **)(lVar4 + 0x18) = pEVar5;
      }
      lVar3 = *(long *)(pEVar5 + 0x18);
      *(long *)(lVar2 + 0x18) = lVar3;
      if (pEVar5 == *(Element **)(lVar3 + 0x10)) {
        *(long *)(lVar3 + 0x10) = lVar2;
      }
      else {
        *(long *)(lVar3 + 8) = lVar2;
      }
      *(Element **)(lVar2 + 0x10) = pEVar5;
      *(long *)(pEVar5 + 0x18) = lVar2;
LAB_0010eb83:
      iVar1 = *(int *)pEVar7;
      param_1 = pEVar8;
    }
    pEVar6 = *(Element **)(pEVar5 + 8);
    if (*(int *)pEVar6 != 0) {
      if (*(Element **)(pEVar8 + 8) == param_1) {
        lVar2 = *(long *)(this + 8);
        lVar3 = *(long *)(param_1 + 0x10);
        *(long *)(pEVar8 + 8) = lVar3;
        if (lVar2 == lVar3) {
          *(Element **)(param_1 + 0x18) = pEVar5;
          pEVar7 = pEVar5;
LAB_0010edb2:
          *(Element **)(pEVar7 + 0x10) = param_1;
        }
        else {
          *(Element **)(lVar3 + 0x18) = pEVar8;
          pEVar7 = *(Element **)(pEVar8 + 0x18);
          *(Element **)(param_1 + 0x18) = pEVar7;
          if (pEVar8 == *(Element **)(pEVar7 + 0x10)) goto LAB_0010edb2;
          *(Element **)(pEVar7 + 8) = param_1;
        }
        *(Element **)(param_1 + 0x10) = pEVar8;
        *(Element **)(pEVar8 + 0x18) = param_1;
        pEVar6 = *(Element **)(this + 8);
        *(int *)param_1 = 1;
        pEVar7 = param_1;
        if (pEVar5 == pEVar6) goto LAB_0010ed80;
LAB_0010ec10:
        *(int *)pEVar5 = 0;
      }
      else {
        pEVar6 = *(Element **)(this + 8);
        *(int *)pEVar8 = 1;
        pEVar8 = param_1;
        if (pEVar5 != pEVar6) goto LAB_0010ec10;
LAB_0010ed80:
        _err_print_error("_set_color","./core/templates/rb_map.h",0xed,
                         "Condition \"p_node == _data._nil && p_color == RED\" is true.",0,0);
      }
      lVar2 = *(long *)(pEVar5 + 0x10);
      lVar3 = *(long *)(this + 8);
      lVar4 = *(long *)(lVar2 + 8);
      *(long *)(pEVar5 + 0x10) = lVar4;
      if (lVar3 != lVar4) {
        *(Element **)(lVar4 + 0x18) = pEVar5;
      }
      lVar3 = *(long *)(pEVar5 + 0x18);
      *(long *)(lVar2 + 0x18) = lVar3;
      if (pEVar5 == *(Element **)(lVar3 + 8)) {
        *(long *)(lVar3 + 8) = lVar2;
      }
      else {
        *(long *)(lVar3 + 0x10) = lVar2;
      }
      *(Element **)(lVar2 + 8) = pEVar5;
      *(long *)(pEVar5 + 0x18) = lVar2;
      goto LAB_0010eb83;
    }
LAB_0010eb9d:
    pEVar7 = *(Element **)(this + 8);
    *(int *)pEVar8 = 1;
    *(int *)pEVar6 = 1;
    if (pEVar5 == pEVar7) {
      _err_print_error("_set_color","./core/templates/rb_map.h",0xed,
                       "Condition \"p_node == _data._nil && p_color == RED\" is true.",0,0);
    }
    else {
      *(int *)pEVar5 = 0;
    }
    iVar1 = *(int *)*(Element **)(pEVar5 + 0x18);
    pEVar7 = *(Element **)(pEVar5 + 0x18);
    param_1 = pEVar5;
  } while( true );
}



/* RBMap<unsigned long, Vector<Vector<unsigned char> >, Comparator<unsigned long>,
   DefaultAllocator>::_insert(unsigned long const&, Vector<Vector<unsigned char> > const&) */

Element * __thiscall
RBMap<unsigned_long,Vector<Vector<unsigned_char>>,Comparator<unsigned_long>,DefaultAllocator>::
_insert(RBMap<unsigned_long,Vector<Vector<unsigned_char>>,Comparator<unsigned_long>,DefaultAllocator>
        *this,ulong *param_1,Vector *param_2)

{
  ulong uVar1;
  Element *pEVar2;
  Element *pEVar3;
  Element *pEVar4;
  Element *pEVar5;
  Element *pEVar6;
  Element *pEVar7;
  Element *pEVar8;
  Element *pEVar9;
  long in_FS_OFFSET;
  bool bVar10;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pEVar8 = *(Element **)this;
  if (*(Element **)(pEVar8 + 0x10) != *(Element **)(this + 8)) {
    pEVar2 = *(Element **)(pEVar8 + 0x10);
    do {
      pEVar8 = pEVar2;
      if (*param_1 < *(ulong *)(pEVar8 + 0x30)) {
        pEVar2 = *(Element **)(pEVar8 + 0x10);
      }
      else {
        if (*param_1 <= *(ulong *)(pEVar8 + 0x30)) {
          if (*(long *)(pEVar8 + 0x40) != *(long *)(param_2 + 8)) {
            CowData<Vector<unsigned_char>>::_ref
                      ((CowData<Vector<unsigned_char>> *)(pEVar8 + 0x40),(CowData *)(param_2 + 8));
          }
          goto LAB_0010efe8;
        }
        pEVar2 = *(Element **)(pEVar8 + 8);
      }
    } while (*(Element **)(this + 8) != pEVar2);
  }
  pEVar2 = (Element *)operator_new(0x48,DefaultAllocator::alloc);
  local_48 = 0;
  uVar1 = *param_1;
  if (*(long *)(param_2 + 8) == 0) {
    *(ulong *)(pEVar2 + 0x30) = uVar1;
    *(undefined4 *)pEVar2 = 0;
    *(undefined8 *)(pEVar2 + 0x28) = 0;
    *(undefined8 *)(pEVar2 + 0x40) = 0;
    *(undefined1 (*) [16])(pEVar2 + 8) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(pEVar2 + 0x18) = (undefined1  [16])0x0;
  }
  else {
    CowData<Vector<unsigned_char>>::_ref
              ((CowData<Vector<unsigned_char>> *)&local_48,(CowData *)(param_2 + 8));
    *(undefined4 *)pEVar2 = 0;
    *(undefined8 *)(pEVar2 + 0x28) = 0;
    *(ulong *)(pEVar2 + 0x30) = uVar1;
    *(undefined8 *)(pEVar2 + 0x40) = 0;
    *(undefined1 (*) [16])(pEVar2 + 8) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(pEVar2 + 0x18) = (undefined1  [16])0x0;
    if (local_48 != 0) {
      CowData<Vector<unsigned_char>>::_ref
                ((CowData<Vector<unsigned_char>> *)(pEVar2 + 0x40),(CowData *)&local_48);
    }
  }
  CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)&local_48);
  *(Element **)(pEVar2 + 0x18) = pEVar8;
  pEVar6 = *(Element **)(this + 8);
  *(Element **)(pEVar2 + 8) = pEVar6;
  *(Element **)(pEVar2 + 0x10) = pEVar6;
  if ((*(Element **)this == pEVar8) || (*param_1 < *(ulong *)(pEVar8 + 0x30))) {
    *(Element **)(pEVar8 + 0x10) = pEVar2;
    pEVar7 = *(Element **)(this + 8);
    pEVar5 = *(Element **)(pEVar2 + 0x10);
    pEVar9 = *(Element **)this;
    if (pEVar7 == pEVar6) {
      pEVar4 = pEVar8;
      pEVar3 = pEVar8;
      if (pEVar2 == *(Element **)(pEVar8 + 8)) goto LAB_0010ef80;
      goto LAB_0010ef8d;
    }
LAB_0010f030:
    do {
      pEVar4 = pEVar6;
      pEVar6 = *(Element **)(pEVar4 + 0x10);
    } while (*(Element **)(pEVar4 + 0x10) != pEVar7);
  }
  else {
    *(Element **)(pEVar8 + 8) = pEVar2;
    pEVar7 = *(Element **)(this + 8);
    pEVar9 = *(Element **)this;
    pEVar3 = pEVar8;
    pEVar5 = pEVar6;
    pEVar6 = *(Element **)(pEVar2 + 8);
    if (pEVar7 != *(Element **)(pEVar2 + 8)) goto LAB_0010f030;
LAB_0010ef80:
    do {
      pEVar4 = *(Element **)(pEVar3 + 0x18);
      bVar10 = pEVar3 == *(Element **)(pEVar4 + 8);
      pEVar3 = pEVar4;
    } while (bVar10);
LAB_0010ef8d:
    if (pEVar4 == pEVar9) {
      pEVar4 = (Element *)0x0;
    }
  }
  *(Element **)(pEVar2 + 0x20) = pEVar4;
  if (*(Element **)(this + 8) == pEVar5) {
    pEVar6 = pEVar2;
    pEVar7 = pEVar8;
    if (pEVar2 == *(Element **)(pEVar8 + 0x10)) {
      do {
        pEVar8 = *(Element **)(pEVar7 + 0x18);
        bVar10 = *(Element **)(pEVar8 + 0x10) == pEVar7;
        pEVar6 = pEVar7;
        pEVar7 = pEVar8;
      } while (bVar10);
    }
    if (*(Element **)this != pEVar6) goto LAB_0010efbc;
    *(undefined8 *)(pEVar2 + 0x28) = 0;
    if (pEVar4 == (Element *)0x0) goto LAB_0010efd8;
LAB_0010efc6:
    *(Element **)(pEVar4 + 0x28) = pEVar2;
    pEVar8 = *(Element **)(pEVar2 + 0x28);
    if (pEVar8 == (Element *)0x0) goto LAB_0010efd8;
  }
  else {
    do {
      pEVar8 = pEVar5;
      pEVar5 = *(Element **)(pEVar8 + 8);
    } while (*(Element **)(this + 8) != *(Element **)(pEVar8 + 8));
LAB_0010efbc:
    *(Element **)(pEVar2 + 0x28) = pEVar8;
    if (pEVar4 != (Element *)0x0) goto LAB_0010efc6;
  }
  *(Element **)(pEVar8 + 0x20) = pEVar2;
LAB_0010efd8:
  *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
  _insert_rb_fix(this,pEVar2);
  pEVar8 = pEVar2;
LAB_0010efe8:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pEVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<Vector<unsigned char> >::_realloc(long) */

undefined8 __thiscall
CowData<Vector<unsigned_char>>::_realloc(CowData<Vector<unsigned_char>> *this,long param_1)

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
/* Error CowData<Vector<unsigned char> >::resize<false>(long) */

undefined8 __thiscall
CowData<Vector<unsigned_char>>::resize<false>(CowData<Vector<unsigned_char>> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
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
    lVar8 = 0;
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
    lVar8 = lVar6 * 0x10;
    if (lVar8 != 0) {
      uVar9 = lVar8 - 1U | lVar8 - 1U >> 1;
      uVar9 = uVar9 | uVar9 >> 2;
      uVar9 = uVar9 | uVar9 >> 4;
      uVar9 = uVar9 | uVar9 >> 8;
      uVar9 = uVar9 | uVar9 >> 0x10;
      lVar8 = (uVar9 | uVar9 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x10 == 0) {
LAB_0010f480:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar9 = param_1 * 0x10 - 1;
  uVar9 = uVar9 >> 1 | uVar9;
  uVar9 = uVar9 | uVar9 >> 2;
  uVar9 = uVar9 | uVar9 >> 4;
  uVar9 = uVar9 | uVar9 >> 8;
  uVar9 = uVar9 | uVar9 >> 0x10;
  uVar9 = uVar9 | uVar9 >> 0x20;
  lVar10 = uVar9 + 1;
  if (lVar10 == 0) goto LAB_0010f480;
  if (param_1 <= lVar6) {
    lVar6 = *(long *)this;
    uVar9 = param_1;
    while (lVar6 != 0) {
      if (*(ulong *)(lVar6 + -8) <= uVar9) {
LAB_0010f332:
        if (lVar10 != lVar8) {
          uVar4 = _realloc(this,lVar10);
          if ((int)uVar4 != 0) {
            return uVar4;
          }
          lVar6 = *(long *)this;
          if (lVar6 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
        }
        *(long *)(lVar6 + -8) = param_1;
        return 0;
      }
      while( true ) {
        lVar3 = uVar9 * 0x10 + lVar6;
        if (*(long *)(lVar3 + 8) != 0) break;
        uVar9 = uVar9 + 1;
        if (*(ulong *)(lVar6 + -8) <= uVar9) goto LAB_0010f332;
      }
      LOCK();
      plVar1 = (long *)(*(long *)(lVar3 + 8) + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar6 = *(long *)(lVar3 + 8);
        *(undefined8 *)(lVar3 + 8) = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
      uVar9 = uVar9 + 1;
      lVar6 = *(long *)this;
    }
    goto LAB_0010f4d6;
  }
  if (lVar10 == lVar8) {
LAB_0010f3ef:
    puVar7 = *(undefined8 **)this;
    if (puVar7 == (undefined8 *)0x0) {
LAB_0010f4d6:
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar6 = puVar7[-1];
    if (param_1 <= lVar6) goto LAB_0010f3d1;
  }
  else {
    if (lVar6 != 0) {
      uVar4 = _realloc(this,lVar10);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      goto LAB_0010f3ef;
    }
    puVar5 = (undefined8 *)Memory::alloc_static(uVar9 + 0x11,false);
    if (puVar5 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar7 = puVar5 + 2;
    *puVar5 = 1;
    puVar5[1] = 0;
    *(undefined8 **)this = puVar7;
    lVar6 = 0;
  }
  puVar5 = puVar7 + lVar6 * 2;
  do {
    puVar5[1] = 0;
    puVar5 = puVar5 + 2;
  } while (puVar5 != puVar7 + param_1 * 2);
LAB_0010f3d1:
  puVar7[-1] = param_1;
  return 0;
}



/* WARNING: Removing unreachable block (ram,0x0010f608) */
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
      _err_print_error(&_LC142,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010f980;
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
LAB_0010f980:
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
      goto LAB_0010fc24;
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
LAB_0010fc24:
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
      goto LAB_0010fde3;
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
LAB_0010fde3:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
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
      goto LAB_00110121;
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
                    /* WARNING: Could not recover jumptable at 0x0010ffac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_00110121:
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
      goto LAB_00110301;
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
                    /* WARNING: Could not recover jumptable at 0x0011018b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_00110301:
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
      _err_print_error(&_LC142,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_001103d0;
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
LAB_001103d0:
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
      goto LAB_001105e4;
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
LAB_001105e4:
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
      goto LAB_00110793;
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
LAB_00110793:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
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
      goto LAB_00110ad1;
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
                    /* WARNING: Could not recover jumptable at 0x0011095e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              (*(undefined8 *)(*(long *)param_3 + 8),
               (long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_00110ad1:
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
      goto LAB_00110cb1;
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
                    /* WARNING: Could not recover jumptable at 0x00110b3d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(**param_3,(long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_00110cb1:
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
      _err_print_error(&_LC142,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00110d80;
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
LAB_00110d80:
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
      goto LAB_00110f92;
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
LAB_00110f92:
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
      goto LAB_00111141;
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
LAB_00111141:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<bool>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<bool>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

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
      goto LAB_00111481;
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
                    /* WARNING: Could not recover jumptable at 0x0011130d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined1 *)(*(long *)param_3 + 8));
    return;
  }
LAB_00111481:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<bool>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<bool>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_00111669;
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
                    /* WARNING: Could not recover jumptable at 0x001114f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3 != '\0');
    return;
  }
LAB_00111669:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<OggPacketSequence>>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindTRC<Ref<OggPacketSequence>>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  char cVar2;
  Variant *pVVar3;
  long *plVar4;
  undefined4 in_register_00000014;
  long *plVar5;
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
    if (local_58 == (Object *)*plVar4) {
      if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = (Object *)0x10f7d8;
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC142,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00111760;
    }
    if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
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
      (*(code *)pVVar3)(&local_58);
      Variant::Variant((Variant *)local_48,local_58);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
      if (local_58 != (Object *)0x0) {
        cVar2 = RefCounted::unreference();
        if (cVar2 != '\0') {
          memdelete<OggPacketSequence>((OggPacketSequence *)local_58);
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
LAB_00111760:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<OggPacketSequence>>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Ref<OggPacketSequence>>::ptrcall
          (MethodBindTRC<Ref<OggPacketSequence>> *this,Object *param_1,void **param_2,void *param_3)

{
  char cVar1;
  code *pcVar2;
  Object *pOVar3;
  long *plVar4;
  OggPacketSequence *extraout_RDX;
  Object *pOVar5;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  OggPacketSequence *local_48;
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
    if (local_48 == (OggPacketSequence *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (OggPacketSequence *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (OggPacketSequence *)0x10f7d8;
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
      goto LAB_001119e6;
    }
    param_2 = (void **)local_48;
    if ((StringName::configured != '\0') && (local_48 != (OggPacketSequence *)0x0)) {
      StringName::unref();
      param_2 = (void **)extraout_RDX;
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    param_2 = *(void ***)(param_1 + *(long *)(this + 0x60));
    pcVar2 = *(code **)((OggPacketSequence *)((long)param_2 + -1) + (long)pcVar2);
  }
  (*pcVar2)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  if (local_48 == (OggPacketSequence *)0x0) {
                    /* WARNING: Load size is inaccurate */
    pOVar5 = *param_3;
    if (pOVar5 == (Object *)0x0) goto LAB_001119e6;
    *(undefined8 *)param_3 = 0;
    goto LAB_00111a29;
  }
  pOVar3 = (Object *)__dynamic_cast(local_48,&Object::typeinfo,&RefCounted::typeinfo,0);
                    /* WARNING: Load size is inaccurate */
  pOVar5 = *param_3;
  if (pOVar5 != pOVar3) {
    *(Object **)param_3 = pOVar3;
    if (pOVar3 == (Object *)0x0) {
      if (pOVar5 != (Object *)0x0) goto LAB_00111a29;
    }
    else {
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        *(undefined8 *)param_3 = 0;
      }
      if (pOVar5 != (Object *)0x0) {
LAB_00111a29:
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(pOVar5);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
      if (local_48 == (OggPacketSequence *)0x0) goto LAB_001119e6;
    }
  }
  cVar1 = RefCounted::unreference();
  if (cVar1 != '\0') {
    memdelete<OggPacketSequence>(local_48);
  }
LAB_001119e6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<OggPacketSequence> >::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Ref<OggPacketSequence>>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  OggPacketSequence *pOVar2;
  char cVar3;
  OggPacketSequence *pOVar4;
  Variant *pVVar5;
  code *pcVar6;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  OggPacketSequence *local_58;
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
    if (local_58 == (OggPacketSequence *)*(long *)pVVar5) {
      if ((StringName::configured != '\0') && (local_58 != (OggPacketSequence *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = (OggPacketSequence *)0x10f7d8;
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
      goto LAB_00111cc8;
    }
    if ((StringName::configured != '\0') && (local_58 != (OggPacketSequence *)0x0)) {
      StringName::unref();
    }
  }
  pcVar6 = *(code **)(param_1 + 0x58);
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar6 & 1) != 0) {
    pcVar6 = *(code **)(pcVar6 + *(long *)((long)param_2 + lVar1) + -1);
  }
  Variant::Variant((Variant *)local_48,*(Object **)(*(long *)param_3 + 0x10));
  local_58 = (OggPacketSequence *)0x0;
  pOVar4 = (OggPacketSequence *)Variant::get_validated_object();
  pOVar2 = local_58;
  if (pOVar4 != local_58) {
    if (pOVar4 == (OggPacketSequence *)0x0) {
      if (local_58 != (OggPacketSequence *)0x0) {
        local_58 = (OggPacketSequence *)0x0;
LAB_00111c86:
        cVar3 = RefCounted::unreference();
        if (cVar3 != '\0') {
          memdelete<OggPacketSequence>(pOVar2);
        }
      }
    }
    else {
      pOVar4 = (OggPacketSequence *)
               __dynamic_cast(pOVar4,&Object::typeinfo,&OggPacketSequence::typeinfo,0);
      if (pOVar2 != pOVar4) {
        local_58 = pOVar4;
        if (pOVar4 != (OggPacketSequence *)0x0) {
          cVar3 = RefCounted::reference();
          if (cVar3 == '\0') {
            local_58 = (OggPacketSequence *)0x0;
          }
        }
        if (pOVar2 != (OggPacketSequence *)0x0) goto LAB_00111c86;
      }
    }
  }
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  (*pcVar6)((long *)((long)param_2 + lVar1),(StringName *)&local_58);
  if (local_58 != (OggPacketSequence *)0x0) {
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      memdelete<OggPacketSequence>(local_58);
    }
  }
LAB_00111cc8:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<OggPacketSequence> >::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Ref<OggPacketSequence>>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  char cVar2;
  long *plVar3;
  code *pcVar4;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  OggPacketSequence *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar3 = (long *)param_2[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar3 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (OggPacketSequence *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (OggPacketSequence *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (OggPacketSequence *)0x10f7d8;
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
      goto LAB_00111f4c;
    }
    if ((StringName::configured != '\0') && (local_48 != (OggPacketSequence *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(param_1 + 0x58);
                    /* WARNING: Load size is inaccurate */
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)((long)param_2 + lVar1) + -1);
  }
  if ((*param_3 == (long *)0x0) ||
     (local_48 = (OggPacketSequence *)**param_3, local_48 == (OggPacketSequence *)0x0)) {
LAB_00111f28:
    local_48 = (OggPacketSequence *)0x0;
  }
  else {
    cVar2 = RefCounted::init_ref();
    if (cVar2 == '\0') goto LAB_00111f28;
  }
  (*pcVar4)((long *)((long)param_2 + lVar1),(StringName *)&local_48);
  if (local_48 != (OggPacketSequence *)0x0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      memdelete<OggPacketSequence>(local_48);
    }
  }
LAB_00111f4c:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<OggPacketSequence> >::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindT<Ref<OggPacketSequence>>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  OggPacketSequence *pOVar5;
  char cVar6;
  undefined4 uVar7;
  OggPacketSequence *pOVar8;
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
  OggPacketSequence *local_48;
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
    if (local_48 == (OggPacketSequence *)*plVar9) {
      if ((StringName::configured != '\0') && (local_48 != (OggPacketSequence *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (OggPacketSequence *)0x10f7d8;
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC142,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001122f0;
    }
    if ((StringName::configured != '\0') && (local_48 != (OggPacketSequence *)0x0)) {
      StringName::unref();
    }
  }
  pVVar13 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (1 < in_R8D) {
    uVar7 = 3;
LAB_001122e5:
    *in_R9 = uVar7;
    in_R9[2] = 1;
    goto LAB_001122f0;
  }
  pVVar12 = param_2[5];
  if (pVVar12 == (Variant *)0x0) {
    if (in_R8D != 1) goto LAB_00112340;
LAB_00112330:
    pVVar12 = *(Variant **)param_4;
  }
  else {
    lVar2 = *(long *)(pVVar12 + -8);
    if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00112340:
      uVar7 = 4;
      goto LAB_001122e5;
    }
    if (in_R8D == 1) goto LAB_00112330;
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
  cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar12,0x18);
  uVar4 = _LC147;
  if (cVar6 == '\0') {
    *in_R9 = 2;
    *(undefined8 *)(in_R9 + 1) = uVar4;
  }
  local_48 = (OggPacketSequence *)0x0;
  pOVar8 = (OggPacketSequence *)Variant::get_validated_object();
  pOVar5 = local_48;
  if (pOVar8 != local_48) {
    if (pOVar8 == (OggPacketSequence *)0x0) {
      if (local_48 != (OggPacketSequence *)0x0) {
        local_48 = (OggPacketSequence *)0x0;
LAB_0011245d:
        cVar6 = RefCounted::unreference();
        if (cVar6 != '\0') {
          memdelete<OggPacketSequence>(pOVar5);
        }
      }
    }
    else {
      pOVar8 = (OggPacketSequence *)
               __dynamic_cast(pOVar8,&Object::typeinfo,&OggPacketSequence::typeinfo,0);
      if (pOVar5 != pOVar8) {
        local_48 = pOVar8;
        if (pOVar8 != (OggPacketSequence *)0x0) {
          cVar6 = RefCounted::reference();
          if (cVar6 == '\0') {
            local_48 = (OggPacketSequence *)0x0;
          }
        }
        if (pOVar5 != (OggPacketSequence *)0x0) goto LAB_0011245d;
      }
    }
  }
  (*(code *)pVVar13)((Variant *)((long)plVar11 + (long)pVVar1),&local_48);
  if (local_48 != (OggPacketSequence *)0x0) {
    cVar6 = RefCounted::unreference();
    if (cVar6 != '\0') {
      memdelete<OggPacketSequence>(local_48);
    }
  }
LAB_001122f0:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<OggPacketSequence>>::validated_call(Object*, Variant const**, Variant*) const
    */

void __thiscall
MethodBindTRC<Ref<OggPacketSequence>>::validated_call
          (MethodBindTRC<Ref<OggPacketSequence>> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  char cVar1;
  code *pcVar2;
  long *plVar3;
  Variant **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  OggPacketSequence *local_50;
  Variant **local_48;
  OggPacketSequence *local_40;
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
    if (local_48 == (Variant **)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Variant **)0x10f7d8;
      local_50 = (OggPacketSequence *)0x0;
      local_40 = (OggPacketSequence *)0x35;
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
      goto LAB_001125e6;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    param_2 = *(Variant ***)(param_1 + *(long *)(this + 0x60));
    pcVar2 = *(code **)(pcVar2 + (long)param_2 + -1);
  }
  (*pcVar2)(&local_50,param_1 + *(long *)(this + 0x60),param_2);
  if (local_50 == (OggPacketSequence *)0x0) {
    Variant::ObjData::unref();
  }
  else {
    local_48 = *(Variant ***)(local_50 + 0x60);
    local_40 = local_50;
    Variant::ObjData::ref((ObjData *)(param_3 + 8));
  }
  if (local_50 != (OggPacketSequence *)0x0) {
    cVar1 = RefCounted::unreference();
    if (cVar1 != '\0') {
      memdelete<OggPacketSequence>(local_50);
    }
  }
LAB_001125e6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
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
    goto LAB_0011286d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_001128d0;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_001128d0:
      uVar6 = 4;
LAB_0011286d:
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
      goto LAB_001127eb;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_001127eb:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_int **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC148;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_int(this);
                    /* WARNING: Could not recover jumptable at 0x00112846. Too many branches */
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
      _err_print_error(&_LC142,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00112936;
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
LAB_00112936:
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
    goto LAB_00112bfd;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_00112c60;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_00112c60:
      uVar6 = 4;
LAB_00112bfd:
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
      goto LAB_00112b7b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_00112b7b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_double **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,3);
  uVar4 = _LC149;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  dVar9 = Variant::operator_cast_to_double(this);
                    /* WARNING: Could not recover jumptable at 0x00112bd4. Too many branches */
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
      _err_print_error(&_LC142,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00112cc6;
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
LAB_00112cc6:
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
    goto LAB_00112f8d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_00112ff0;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_00112ff0:
      uVar6 = 4;
LAB_00112f8d:
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
      goto LAB_00112f0b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_00112f0b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_bool **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,1);
  uVar4 = _LC150;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_bool(this);
                    /* WARNING: Could not recover jumptable at 0x00112f67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)(SUB81(param_1 + (long)param_3,0));
  return;
}



/* MethodBindT<bool>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<bool>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

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
      _err_print_error(&_LC142,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00113056;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,bool>
            (p_Var2,(_func_void_bool *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,
             in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00113056:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AudioStreamPlaybackOggVorbis::_mix_internal(AudioFrame*, int) */

void AudioStreamPlaybackOggVorbis::_GLOBAL__sub_I__mix_internal(void)

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
/* RBMap<unsigned long, Vector<Vector<unsigned char> >, Comparator<unsigned long>,
   DefaultAllocator>::~RBMap() */

void __thiscall
RBMap<unsigned_long,Vector<Vector<unsigned_char>>,Comparator<unsigned_long>,DefaultAllocator>::
~RBMap(RBMap<unsigned_long,Vector<Vector<unsigned_char>>,Comparator<unsigned_long>,DefaultAllocator>
       *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* OggPacketSequence::~OggPacketSequence() */

void __thiscall OggPacketSequence::~OggPacketSequence(OggPacketSequence *this)

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
/* AudioSample::~AudioSample() */

void __thiscall AudioSample::~AudioSample(AudioSample *this)

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
/* MethodBindTRC<double>::~MethodBindTRC() */

void __thiscall MethodBindTRC<double>::~MethodBindTRC(MethodBindTRC<double> *this)

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
/* MethodBindTRC<Ref<OggPacketSequence>>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Ref<OggPacketSequence>>::~MethodBindTRC(MethodBindTRC<Ref<OggPacketSequence>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Ref<OggPacketSequence> >::~MethodBindT() */

void __thiscall
MethodBindT<Ref<OggPacketSequence>>::~MethodBindT(MethodBindT<Ref<OggPacketSequence>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRS<Ref<AudioStreamOggVorbis>, String const&>::~MethodBindTRS() */

void __thiscall
MethodBindTRS<Ref<AudioStreamOggVorbis>,String_const&>::~MethodBindTRS
          (MethodBindTRS<Ref<AudioStreamOggVorbis>,String_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRS<Ref<AudioStreamOggVorbis>, Vector<unsigned char> const&>::~MethodBindTRS() */

void __thiscall
MethodBindTRS<Ref<AudioStreamOggVorbis>,Vector<unsigned_char>const&>::~MethodBindTRS
          (MethodBindTRS<Ref<AudioStreamOggVorbis>,Vector<unsigned_char>const&> *this)

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
/* StringName::~StringName() */

void __thiscall StringName::~StringName(StringName *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}




/* AudioStreamInteractive::get_initial_clip() const */

undefined4 __thiscall AudioStreamInteractive::get_initial_clip(AudioStreamInteractive *this)

{
  return *(undefined4 *)(this + 0x350);
}



/* AudioStreamInteractive::get_clip_count() const */

undefined4 __thiscall AudioStreamInteractive::get_clip_count(AudioStreamInteractive *this)

{
  return *(undefined4 *)(this + 0x980);
}



/* AudioStreamPlaybackInteractive::seek(double) */

void AudioStreamPlaybackInteractive::seek(double param_1)

{
  return;
}



/* AudioStreamPlaybackInteractive::switch_to_clip(int) */

void __thiscall
AudioStreamPlaybackInteractive::switch_to_clip(AudioStreamPlaybackInteractive *this,int param_1)

{
  *(int *)(this + 0x524c) = param_1;
  return;
}



/* AudioStreamPlaybackInteractive::get_current_clip_index() const */

undefined4 __thiscall
AudioStreamPlaybackInteractive::get_current_clip_index(AudioStreamPlaybackInteractive *this)

{
  return *(undefined4 *)(this + 0x5240);
}



/* AudioStreamPlaybackInteractive::get_loop_count() const */

undefined8 AudioStreamPlaybackInteractive::get_loop_count(void)

{
  return 0;
}



/* AudioStreamPlaybackInteractive::get_playback_position() const */

undefined8 AudioStreamPlaybackInteractive::get_playback_position(void)

{
  return 0;
}



/* AudioStreamPlaybackInteractive::is_playing() const */

AudioStreamPlaybackInteractive __thiscall
AudioStreamPlaybackInteractive::is_playing(AudioStreamPlaybackInteractive *this)

{
  return this[0x5244];
}



/* AudioStreamPlaybackInteractive::tag_used_streams() */

void __thiscall
AudioStreamPlaybackInteractive::tag_used_streams(AudioStreamPlaybackInteractive *this)

{
  char cVar1;
  AudioStreamPlaybackInteractive *pAVar2;
  int iVar3;
  long lVar4;
  double dVar5;
  
  lVar4 = *(long *)(this + 0x270);
  if (0 < *(int *)(lVar4 + 0x980)) {
    pAVar2 = this + 0x4280;
    iVar3 = 0;
    do {
      if ((pAVar2[0x10] != (AudioStreamPlaybackInteractive)0x0) &&
         (pAVar2[0x34] == (AudioStreamPlaybackInteractive)0x0)) {
        cVar1 = (**(code **)(**(long **)(pAVar2 + 8) + 0x160))();
        if (cVar1 != '\0') {
          dVar5 = (double)(**(code **)(**(long **)(pAVar2 + 8) + 0x170))();
          AudioStream::tag_used((float)dVar5);
        }
        lVar4 = *(long *)(this + 0x270);
      }
      iVar3 = iVar3 + 1;
      pAVar2 = pAVar2 + 0x40;
    } while (iVar3 < *(int *)(lVar4 + 0x980));
  }
  AudioStream::tag_used(0.0);
  return;
}



/* AudioStreamInteractive::set_clip_auto_advance(int, AudioStreamInteractive::AutoAdvanceMode) */

void __thiscall
AudioStreamInteractive::set_clip_auto_advance
          (AudioStreamInteractive *this,uint param_1,uint param_3)

{
  if (param_1 < 0x3f) {
    if (param_3 < 3) {
      *(uint *)(this + (long)(int)param_1 * 0x18 + 0x370) = param_3;
      Object::notify_property_list_changed();
      return;
    }
    _err_print_index_error
              ("set_clip_auto_advance","modules/interactive_music/audio_stream_interactive.cpp",0x99
               ,(ulong)param_3,3,"p_mode","3","",false,false);
  }
  else {
    _err_print_index_error
              ("set_clip_auto_advance","modules/interactive_music/audio_stream_interactive.cpp",0x98
               ,(long)(int)param_1,0x3f,"p_clip","MAX_CLIPS","",false,false);
  }
  return;
}



/* AudioStreamInteractive::get_clip_auto_advance(int) const */

undefined4 __thiscall
AudioStreamInteractive::get_clip_auto_advance(AudioStreamInteractive *this,int param_1)

{
  if ((uint)param_1 < 0x3f) {
    return *(undefined4 *)(this + (long)param_1 * 0x18 + 0x370);
  }
  _err_print_index_error
            ("get_clip_auto_advance","modules/interactive_music/audio_stream_interactive.cpp",0x9f,
             (long)param_1,0x3f,"p_clip","MAX_CLIPS","",false,false);
  return 0;
}



/* AudioStreamInteractive::set_clip_auto_advance_next_clip(int, int) */

void __thiscall
AudioStreamInteractive::set_clip_auto_advance_next_clip
          (AudioStreamInteractive *this,int param_1,int param_2)

{
  if ((uint)param_1 < 0x3f) {
    *(int *)(this + (long)param_1 * 0x18 + 0x374) = param_2;
    return;
  }
  _err_print_index_error
            ("set_clip_auto_advance_next_clip",
             "modules/interactive_music/audio_stream_interactive.cpp",0xa4,(long)param_1,0x3f,
             "p_clip","MAX_CLIPS","",false,false);
  return;
}



/* AudioStreamInteractive::get_clip_auto_advance_next_clip(int) const */

undefined4 __thiscall
AudioStreamInteractive::get_clip_auto_advance_next_clip(AudioStreamInteractive *this,int param_1)

{
  if ((uint)param_1 < 0x3f) {
    return *(undefined4 *)(this + (long)param_1 * 0x18 + 0x374);
  }
  _err_print_index_error
            ("get_clip_auto_advance_next_clip",
             "modules/interactive_music/audio_stream_interactive.cpp",0xa9,(long)param_1,0x3f,
             "p_clip","MAX_CLIPS","",false,false);
  return 0xffffffff;
}



/* AudioStreamInteractive::set_clip_name(int, StringName const&) */

void __thiscall
AudioStreamInteractive::set_clip_name(AudioStreamInteractive *this,int param_1,StringName *param_2)

{
  if ((uint)param_1 < 0x3f) {
    StringName::operator=((StringName *)(this + (long)param_1 * 0x18 + 0x360),param_2);
    return;
  }
  _err_print_index_error
            ("set_clip_name","modules/interactive_music/audio_stream_interactive.cpp",0x65,
             (long)param_1,0x3f,"p_clip","MAX_CLIPS","",false,false);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AudioStreamPlaybackInteractive::stop() */

void __thiscall AudioStreamPlaybackInteractive::stop(AudioStreamPlaybackInteractive *this)

{
  long lVar1;
  long lVar2;
  AudioStreamPlaybackInteractive *pAVar3;
  AudioStreamPlaybackInteractive *pAVar4;
  
  if (this[0x5244] != (AudioStreamPlaybackInteractive)0x0) {
    this[0x5244] = (AudioStreamPlaybackInteractive)0x0;
    pAVar3 = this + 0x4288;
    do {
      if (*(long **)pAVar3 != (long *)0x0) {
        (**(code **)(**(long **)pAVar3 + 0x158))();
      }
      lVar2 = _LC185;
      lVar1 = __LC13;
      pAVar3[8] = (AudioStreamPlaybackInteractive)0x0;
      pAVar4 = pAVar3 + 0x40;
      *(long *)(pAVar3 + 0x20) = 0;
      *(long *)(pAVar3 + 0x10) = lVar1;
      *(long *)(pAVar3 + 0x18) = lVar2;
      *(undefined4 *)(pAVar3 + 0x28) = 0xffffffff;
      pAVar3[0x2c] = (AudioStreamPlaybackInteractive)0x1;
      pAVar3 = pAVar4;
    } while (pAVar4 != this + 0x5248);
    return;
  }
  return;
}



/* AudioStreamInteractive::set_initial_clip(int) */

void __thiscall AudioStreamInteractive::set_initial_clip(AudioStreamInteractive *this,int param_1)

{
  if ((-1 < param_1) && (param_1 < *(int *)(this + 0x980))) {
    *(int *)(this + 0x350) = param_1;
    return;
  }
  _err_print_index_error
            ("set_initial_clip","modules/interactive_music/audio_stream_interactive.cpp",0x58,
             (long)param_1,(long)*(int *)(this + 0x980),"p_clip","clip_count","",false,false);
  return;
}



/* CowData<AudioStreamInteractive::TransitionKey>::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<AudioStreamInteractive::TransitionKey>::_copy_on_write
          (CowData<AudioStreamInteractive::TransitionKey> *this)

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



/* CowData<Vector2i>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Vector2i>::_copy_on_write(CowData<Vector2i> *this)

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



/* AudioStreamPlaybackInteractive::~AudioStreamPlaybackInteractive() */

void __thiscall
AudioStreamPlaybackInteractive::~AudioStreamPlaybackInteractive
          (AudioStreamPlaybackInteractive *this)

{
  Object *pOVar1;
  char cVar2;
  AudioStreamPlaybackInteractive *pAVar3;
  
  pAVar3 = this + 0x5200;
  *(undefined ***)this = &PTR__initialize_classv_001254c0;
  do {
    while( true ) {
      if ((*(long *)(pAVar3 + 8) != 0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) {
        pOVar1 = *(Object **)(pAVar3 + 8);
        cVar2 = predelete_handler(pOVar1);
        if (cVar2 != '\0') {
          (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
          Memory::free_static(pOVar1,false);
        }
      }
      if ((*(long *)pAVar3 != 0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) break;
LAB_00100831:
      pAVar3 = pAVar3 + -0x40;
      if (pAVar3 == this + 0x4240) goto LAB_001008b0;
    }
    pOVar1 = *(Object **)pAVar3;
    cVar2 = predelete_handler(pOVar1);
    if (cVar2 == '\0') goto LAB_00100831;
    pAVar3 = pAVar3 + -0x40;
    (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
    Memory::free_static(pOVar1,false);
  } while (pAVar3 != this + 0x4240);
LAB_001008b0:
  if ((*(long *)(this + 0x270) != 0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) {
    pOVar1 = *(Object **)(this + 0x270);
    cVar2 = predelete_handler(pOVar1);
    if (cVar2 != '\0') {
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      Memory::free_static(pOVar1,false);
    }
  }
  AudioStreamPlayback::~AudioStreamPlayback((AudioStreamPlayback *)this);
  return;
}



/* AudioStreamPlaybackInteractive::~AudioStreamPlaybackInteractive() */

void __thiscall
AudioStreamPlaybackInteractive::~AudioStreamPlaybackInteractive
          (AudioStreamPlaybackInteractive *this)

{
  ~AudioStreamPlaybackInteractive(this);
  operator_delete(this,0x5250);
  return;
}



/* AudioStreamInteractive::get_stream_name() const */

AudioStreamInteractive * __thiscall
AudioStreamInteractive::get_stream_name(AudioStreamInteractive *this)

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



/* AudioStreamInteractive::get_clip_stream(int) const */

long * AudioStreamInteractive::get_clip_stream(int param_1)

{
  long lVar1;
  char cVar2;
  uint in_EDX;
  long in_RSI;
  undefined4 in_register_0000003c;
  long *plVar3;
  
  plVar3 = (long *)CONCAT44(in_register_0000003c,param_1);
  if (in_EDX < 0x3f) {
    *plVar3 = 0;
    lVar1 = *(long *)(in_RSI + 0x368 + (long)(int)in_EDX * 0x18);
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
            ("get_clip_stream","modules/interactive_music/audio_stream_interactive.cpp",0x93,
             (long)(int)in_EDX,0x3f,"p_clip","MAX_CLIPS","",false,false);
  *plVar3 = 0;
  return plVar3;
}



/* CowData<int>::_ref(CowData<int> const&) [clone .part.0] */

void __thiscall CowData<int>::_ref(CowData<int> *this,CowData *param_1)

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



/* AudioStreamInteractive::set_clip_count(int) */

void __thiscall AudioStreamInteractive::set_clip_count(AudioStreamInteractive *this,int param_1)

{
  long lVar1;
  undefined8 *puVar2;
  int iVar3;
  long *plVar4;
  AudioStreamInteractive *pAVar5;
  int iVar6;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if ((uint)param_1 < 0x40) {
    plVar4 = (long *)AudioServer::get_singleton();
    (**(code **)(*plVar4 + 0x170))(plVar4);
    if (param_1 < *(int *)(this + 0x980)) {
      *(long *)(this + 0x978) = *(long *)(this + 0x978) + 1;
    }
    String::parse_latin1((StrRange *)(this + 0x9b0));
    iVar3 = *(int *)(this + 0x980);
    if (param_1 < iVar3) {
      pAVar5 = this + 0x374;
      iVar6 = 0;
      do {
        if (param_1 <= *(int *)pAVar5) {
          *(int *)pAVar5 = 0;
          *(int *)(pAVar5 + -4) = 0;
        }
        iVar6 = iVar6 + 1;
        pAVar5 = pAVar5 + 0x18;
      } while (iVar6 < iVar3);
      for (puVar2 = *(undefined8 **)(this + 0x960); puVar2 != (undefined8 *)0x0;
          puVar2 = (undefined8 *)*puVar2) {
        if (param_1 <= *(int *)((long)puVar2 + 0x2c)) {
          *(undefined1 *)(puVar2 + 5) = 0;
          *(undefined4 *)((long)puVar2 + 0x2c) = 0;
        }
      }
      if (param_1 <= *(int *)(this + 0x350)) {
        *(undefined4 *)(this + 0x350) = 0;
      }
    }
    *(int *)(this + 0x980) = param_1;
    plVar4 = (long *)AudioServer::get_singleton();
    (**(code **)(*plVar4 + 0x178))(plVar4);
    Object::notify_property_list_changed();
    if ((set_clip_count(int)::{lambda()#1}::operator()()::sname == '\0') &&
       (iVar3 = __cxa_guard_acquire(&set_clip_count(int)::{lambda()#1}::operator()()::sname),
       iVar3 != 0)) {
      _scs_create((char *)&set_clip_count(int)::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&set_clip_count(int)::{lambda()#1}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&set_clip_count(int)::{lambda()#1}::operator()()::sname);
    }
    (**(code **)(*(long *)this + 0xd0))
              (this,&set_clip_count(int)::{lambda()#1}::operator()()::sname,0,0);
    if (Variant::needs_deinit[0] != '\0') {
      Variant::_clear_internal();
    }
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    _err_print_error("set_clip_count","modules/interactive_music/audio_stream_interactive.cpp",0x32,
                     "Condition \"p_count < 0 || p_count > MAX_CLIPS\" is true.",0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AudioStreamInteractive::has_transition(int, int) const */

undefined8 __thiscall
AudioStreamInteractive::has_transition(AudioStreamInteractive *this,int param_1,int param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  uint uVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  
  if (*(long *)(this + 0x950) == 0) {
    return 0;
  }
  if (*(int *)(this + 0x974) != 0) {
    uVar14 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x970) * 4));
    lVar1 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x970) * 8);
    uVar10 = (param_1 * 0x16a88000 | (uint)(param_1 * -0x3361d2af) >> 0x11) * 0x1b873593 ^ 0x7f07c65
    ;
    uVar10 = (uVar10 << 0xd | uVar10 >> 0x13) * 5 + 0xe6546b64 ^
             (param_2 * 0x16a88000 | (uint)(param_2 * -0x3361d2af) >> 0x11) * 0x1b873593;
    uVar10 = (uVar10 << 0xd | uVar10 >> 0x13) * 5 + 0xe6546b64;
    uVar13 = (ulong)uVar10;
    if (uVar10 == 0) {
      uVar13 = 1;
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar13 * lVar1;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar14;
    lVar12 = SUB168(auVar2 * auVar6,8);
    uVar10 = *(uint *)(*(long *)(this + 0x958) + lVar12 * 4);
    iVar11 = SUB164(auVar2 * auVar6,8);
    if (uVar10 != 0) {
      uVar15 = 0;
      do {
        if ((((uint)uVar13 == uVar10) &&
            (lVar12 = *(long *)(*(long *)(this + 0x950) + lVar12 * 8),
            param_1 == *(int *)(lVar12 + 0x10))) && (param_2 == *(int *)(lVar12 + 0x14))) {
          return 1;
        }
        uVar15 = uVar15 + 1;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = (ulong)(iVar11 + 1) * lVar1;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = uVar14;
        lVar12 = SUB168(auVar3 * auVar7,8);
        uVar10 = *(uint *)(*(long *)(this + 0x958) + lVar12 * 4);
        iVar11 = SUB164(auVar3 * auVar7,8);
        if (uVar10 == 0) {
          return 0;
        }
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)uVar10 * lVar1;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar14;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = (ulong)((*(uint *)(hash_table_size_primes +
                                         (ulong)*(uint *)(this + 0x970) * 4) + iVar11) -
                              SUB164(auVar4 * auVar8,8)) * lVar1;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar14;
      } while (uVar15 <= SUB164(auVar5 * auVar9,8));
      return 0;
    }
  }
  return 0;
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



/* AudioStreamInteractive::get_transition_from_time(int, int) const */

undefined4 __thiscall
AudioStreamInteractive::get_transition_from_time
          (AudioStreamInteractive *this,int param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
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
  code *pcVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  long lVar23;
  long lVar24;
  uint uVar25;
  uint uVar26;
  ulong uVar27;
  ulong uVar28;
  
  lVar2 = *(long *)(this + 0x950);
  if ((lVar2 != 0) && (*(int *)(this + 0x974) != 0)) {
    lVar3 = *(long *)(this + 0x958);
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x970) * 4);
    uVar27 = CONCAT44(0,uVar1);
    lVar4 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x970) * 8);
    uVar20 = (param_1 * 0x16a88000 | (uint)(param_1 * -0x3361d2af) >> 0x11) * 0x1b873593 ^ 0x7f07c65
    ;
    uVar20 = (uVar20 << 0xd | uVar20 >> 0x13) * 5 + 0xe6546b64 ^
             (param_2 * 0x16a88000 | (uint)(param_2 * -0x3361d2af) >> 0x11) * 0x1b873593;
    uVar20 = (uVar20 << 0xd | uVar20 >> 0x13) * 5 + 0xe6546b64;
    uVar28 = (ulong)uVar20;
    if (uVar20 == 0) {
      uVar28 = 1;
    }
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar28 * lVar4;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = uVar27;
    lVar23 = SUB168(auVar5 * auVar12,8);
    uVar20 = *(uint *)(lVar3 + lVar23 * 4);
    uVar21 = SUB164(auVar5 * auVar12,8);
    if (uVar20 != 0) {
      uVar25 = 0;
      lVar24 = lVar23;
      uVar26 = uVar20;
      uVar22 = uVar21;
      do {
        if ((((uint)uVar28 == uVar26) &&
            (lVar24 = *(long *)(lVar2 + lVar24 * 8), param_1 == *(int *)(lVar24 + 0x10))) &&
           (param_2 == *(int *)(lVar24 + 0x14))) {
          uVar26 = 0;
          while ((((uint)uVar28 != uVar20 ||
                  (lVar23 = *(long *)(lVar2 + lVar23 * 8), param_1 != *(int *)(lVar23 + 0x10))) ||
                 (param_2 != *(int *)(lVar23 + 0x14)))) {
            uVar26 = uVar26 + 1;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = (ulong)(uVar21 + 1) * lVar4;
            auVar16._8_8_ = 0;
            auVar16._0_8_ = uVar27;
            lVar23 = SUB168(auVar9 * auVar16,8);
            uVar20 = *(uint *)(lVar3 + lVar23 * 4);
            uVar21 = SUB164(auVar9 * auVar16,8);
            if ((uVar20 == 0) ||
               (auVar10._8_8_ = 0, auVar10._0_8_ = (ulong)uVar20 * lVar4, auVar17._8_8_ = 0,
               auVar17._0_8_ = uVar27, auVar11._8_8_ = 0,
               auVar11._0_8_ = (ulong)((uVar1 + uVar21) - SUB164(auVar10 * auVar17,8)) * lVar4,
               auVar18._8_8_ = 0, auVar18._0_8_ = uVar27, SUB164(auVar11 * auVar18,8) < uVar26)) {
              _err_print_error("operator[]","./core/templates/hash_map.h",0x245,
                               "FATAL: Condition \"!exists\" is true.",0,0);
              _err_flush_stdout();
                    /* WARNING: Does not return */
              pcVar19 = (code *)invalidInstructionException();
              (*pcVar19)();
            }
          }
          return *(undefined4 *)(*(long *)(lVar2 + (ulong)uVar21 * 8) + 0x18);
        }
        uVar25 = uVar25 + 1;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = (ulong)(uVar22 + 1) * lVar4;
        auVar13._8_8_ = 0;
        auVar13._0_8_ = uVar27;
        lVar24 = SUB168(auVar6 * auVar13,8);
        uVar26 = *(uint *)(lVar3 + lVar24 * 4);
        uVar22 = SUB164(auVar6 * auVar13,8);
      } while ((uVar26 != 0) &&
              (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar26 * lVar4, auVar14._8_8_ = 0,
              auVar14._0_8_ = uVar27, auVar8._8_8_ = 0,
              auVar8._0_8_ = (ulong)((uVar1 + uVar22) - SUB164(auVar7 * auVar14,8)) * lVar4,
              auVar15._8_8_ = 0, auVar15._0_8_ = uVar27, uVar25 <= SUB164(auVar8 * auVar15,8)));
    }
  }
  _err_print_error("get_transition_from_time",
                   "modules/interactive_music/audio_stream_interactive.cpp",0x111,
                   "Condition \"!transition_map.has(tk)\" is true. Returning: TRANSITION_FROM_TIME_END"
                   ,0,0);
  return 3;
}



/* AudioStreamInteractive::is_transition_holding_previous(int, int) const */

undefined1 __thiscall
AudioStreamInteractive::is_transition_holding_previous
          (AudioStreamInteractive *this,int param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
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
  code *pcVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  long lVar23;
  long lVar24;
  uint uVar25;
  uint uVar26;
  ulong uVar27;
  ulong uVar28;
  
  lVar2 = *(long *)(this + 0x950);
  if ((lVar2 != 0) && (*(int *)(this + 0x974) != 0)) {
    lVar3 = *(long *)(this + 0x958);
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x970) * 4);
    uVar27 = CONCAT44(0,uVar1);
    lVar4 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x970) * 8);
    uVar20 = (param_1 * 0x16a88000 | (uint)(param_1 * -0x3361d2af) >> 0x11) * 0x1b873593 ^ 0x7f07c65
    ;
    uVar20 = (uVar20 << 0xd | uVar20 >> 0x13) * 5 + 0xe6546b64 ^
             (param_2 * 0x16a88000 | (uint)(param_2 * -0x3361d2af) >> 0x11) * 0x1b873593;
    uVar20 = (uVar20 << 0xd | uVar20 >> 0x13) * 5 + 0xe6546b64;
    uVar28 = (ulong)uVar20;
    if (uVar20 == 0) {
      uVar28 = 1;
    }
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar28 * lVar4;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = uVar27;
    lVar23 = SUB168(auVar5 * auVar12,8);
    uVar20 = *(uint *)(lVar3 + lVar23 * 4);
    uVar21 = SUB164(auVar5 * auVar12,8);
    if (uVar20 != 0) {
      uVar25 = 0;
      lVar24 = lVar23;
      uVar26 = uVar20;
      uVar22 = uVar21;
      do {
        if ((((uint)uVar28 == uVar26) &&
            (lVar24 = *(long *)(lVar2 + lVar24 * 8), param_1 == *(int *)(lVar24 + 0x10))) &&
           (param_2 == *(int *)(lVar24 + 0x14))) {
          uVar26 = 0;
          while ((((uint)uVar28 != uVar20 ||
                  (lVar23 = *(long *)(lVar2 + lVar23 * 8), param_1 != *(int *)(lVar23 + 0x10))) ||
                 (param_2 != *(int *)(lVar23 + 0x14)))) {
            uVar26 = uVar26 + 1;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = (ulong)(uVar21 + 1) * lVar4;
            auVar16._8_8_ = 0;
            auVar16._0_8_ = uVar27;
            lVar23 = SUB168(auVar9 * auVar16,8);
            uVar20 = *(uint *)(lVar3 + lVar23 * 4);
            uVar21 = SUB164(auVar9 * auVar16,8);
            if ((uVar20 == 0) ||
               (auVar10._8_8_ = 0, auVar10._0_8_ = (ulong)uVar20 * lVar4, auVar17._8_8_ = 0,
               auVar17._0_8_ = uVar27, auVar11._8_8_ = 0,
               auVar11._0_8_ = (ulong)((uVar1 + uVar21) - SUB164(auVar10 * auVar17,8)) * lVar4,
               auVar18._8_8_ = 0, auVar18._0_8_ = uVar27, SUB164(auVar11 * auVar18,8) < uVar26)) {
              _err_print_error("operator[]","./core/templates/hash_map.h",0x245,
                               "FATAL: Condition \"!exists\" is true.",0,0);
              _err_flush_stdout();
                    /* WARNING: Does not return */
              pcVar19 = (code *)invalidInstructionException();
              (*pcVar19)();
            }
          }
          return *(undefined1 *)(*(long *)(lVar2 + (ulong)uVar21 * 8) + 0x30);
        }
        uVar25 = uVar25 + 1;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = (ulong)(uVar22 + 1) * lVar4;
        auVar13._8_8_ = 0;
        auVar13._0_8_ = uVar27;
        lVar24 = SUB168(auVar6 * auVar13,8);
        uVar26 = *(uint *)(lVar3 + lVar24 * 4);
        uVar22 = SUB164(auVar6 * auVar13,8);
      } while ((uVar26 != 0) &&
              (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar26 * lVar4, auVar14._8_8_ = 0,
              auVar14._0_8_ = uVar27, auVar8._8_8_ = 0,
              auVar8._0_8_ = (ulong)((uVar1 + uVar22) - SUB164(auVar7 * auVar14,8)) * lVar4,
              auVar15._8_8_ = 0, auVar15._0_8_ = uVar27, uVar25 <= SUB164(auVar8 * auVar15,8)));
    }
  }
  _err_print_error("is_transition_holding_previous",
                   "modules/interactive_music/audio_stream_interactive.cpp",0x135,
                   "Condition \"!transition_map.has(tk)\" is true. Returning: false",0,0);
  return 0;
}



/* AudioStreamInteractive::get_transition_fade_mode(int, int) const */

undefined4 __thiscall
AudioStreamInteractive::get_transition_fade_mode
          (AudioStreamInteractive *this,int param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
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
  code *pcVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  long lVar23;
  long lVar24;
  uint uVar25;
  uint uVar26;
  ulong uVar27;
  ulong uVar28;
  
  lVar2 = *(long *)(this + 0x950);
  if ((lVar2 != 0) && (*(int *)(this + 0x974) != 0)) {
    lVar3 = *(long *)(this + 0x958);
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x970) * 4);
    uVar27 = CONCAT44(0,uVar1);
    lVar4 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x970) * 8);
    uVar20 = (param_1 * 0x16a88000 | (uint)(param_1 * -0x3361d2af) >> 0x11) * 0x1b873593 ^ 0x7f07c65
    ;
    uVar20 = (uVar20 << 0xd | uVar20 >> 0x13) * 5 + 0xe6546b64 ^
             (param_2 * 0x16a88000 | (uint)(param_2 * -0x3361d2af) >> 0x11) * 0x1b873593;
    uVar20 = (uVar20 << 0xd | uVar20 >> 0x13) * 5 + 0xe6546b64;
    uVar28 = (ulong)uVar20;
    if (uVar20 == 0) {
      uVar28 = 1;
    }
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar28 * lVar4;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = uVar27;
    lVar23 = SUB168(auVar5 * auVar12,8);
    uVar20 = *(uint *)(lVar3 + lVar23 * 4);
    uVar21 = SUB164(auVar5 * auVar12,8);
    if (uVar20 != 0) {
      uVar25 = 0;
      lVar24 = lVar23;
      uVar26 = uVar20;
      uVar22 = uVar21;
      do {
        if ((((uint)uVar28 == uVar26) &&
            (lVar24 = *(long *)(lVar2 + lVar24 * 8), param_1 == *(int *)(lVar24 + 0x10))) &&
           (param_2 == *(int *)(lVar24 + 0x14))) {
          uVar26 = 0;
          while ((((uint)uVar28 != uVar20 ||
                  (lVar23 = *(long *)(lVar2 + lVar23 * 8), param_1 != *(int *)(lVar23 + 0x10))) ||
                 (param_2 != *(int *)(lVar23 + 0x14)))) {
            uVar26 = uVar26 + 1;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = (ulong)(uVar21 + 1) * lVar4;
            auVar16._8_8_ = 0;
            auVar16._0_8_ = uVar27;
            lVar23 = SUB168(auVar9 * auVar16,8);
            uVar20 = *(uint *)(lVar3 + lVar23 * 4);
            uVar21 = SUB164(auVar9 * auVar16,8);
            if ((uVar20 == 0) ||
               (auVar10._8_8_ = 0, auVar10._0_8_ = (ulong)uVar20 * lVar4, auVar17._8_8_ = 0,
               auVar17._0_8_ = uVar27, auVar11._8_8_ = 0,
               auVar11._0_8_ = (ulong)((uVar1 + uVar21) - SUB164(auVar10 * auVar17,8)) * lVar4,
               auVar18._8_8_ = 0, auVar18._0_8_ = uVar27, SUB164(auVar11 * auVar18,8) < uVar26)) {
              _err_print_error("operator[]","./core/templates/hash_map.h",0x245,
                               "FATAL: Condition \"!exists\" is true.",0,0);
              _err_flush_stdout();
                    /* WARNING: Does not return */
              pcVar19 = (code *)invalidInstructionException();
              (*pcVar19)();
            }
          }
          return *(undefined4 *)(*(long *)(lVar2 + (ulong)uVar21 * 8) + 0x20);
        }
        uVar25 = uVar25 + 1;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = (ulong)(uVar22 + 1) * lVar4;
        auVar13._8_8_ = 0;
        auVar13._0_8_ = uVar27;
        lVar24 = SUB168(auVar6 * auVar13,8);
        uVar26 = *(uint *)(lVar3 + lVar24 * 4);
        uVar22 = SUB164(auVar6 * auVar13,8);
      } while ((uVar26 != 0) &&
              (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar26 * lVar4, auVar14._8_8_ = 0,
              auVar14._0_8_ = uVar27, auVar8._8_8_ = 0,
              auVar8._0_8_ = (ulong)((uVar1 + uVar22) - SUB164(auVar7 * auVar14,8)) * lVar4,
              auVar15._8_8_ = 0, auVar15._0_8_ = uVar27, uVar25 <= SUB164(auVar8 * auVar15,8)));
    }
  }
  _err_print_error("get_transition_fade_mode",
                   "modules/interactive_music/audio_stream_interactive.cpp",0x11d,
                   "Condition \"!transition_map.has(tk)\" is true. Returning: FADE_DISABLED",0,0);
  return 0;
}



/* AudioStreamInteractive::get_transition_filler_clip(int, int) const */

undefined4 __thiscall
AudioStreamInteractive::get_transition_filler_clip
          (AudioStreamInteractive *this,int param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
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
  code *pcVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  long lVar23;
  long lVar24;
  uint uVar25;
  uint uVar26;
  ulong uVar27;
  ulong uVar28;
  
  lVar2 = *(long *)(this + 0x950);
  if ((lVar2 != 0) && (*(int *)(this + 0x974) != 0)) {
    lVar3 = *(long *)(this + 0x958);
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x970) * 4);
    uVar27 = CONCAT44(0,uVar1);
    lVar4 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x970) * 8);
    uVar20 = (param_1 * 0x16a88000 | (uint)(param_1 * -0x3361d2af) >> 0x11) * 0x1b873593 ^ 0x7f07c65
    ;
    uVar20 = (uVar20 << 0xd | uVar20 >> 0x13) * 5 + 0xe6546b64 ^
             (param_2 * 0x16a88000 | (uint)(param_2 * -0x3361d2af) >> 0x11) * 0x1b873593;
    uVar20 = (uVar20 << 0xd | uVar20 >> 0x13) * 5 + 0xe6546b64;
    uVar28 = (ulong)uVar20;
    if (uVar20 == 0) {
      uVar28 = 1;
    }
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar28 * lVar4;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = uVar27;
    lVar23 = SUB168(auVar5 * auVar12,8);
    uVar20 = *(uint *)(lVar3 + lVar23 * 4);
    uVar21 = SUB164(auVar5 * auVar12,8);
    if (uVar20 != 0) {
      uVar25 = 0;
      lVar24 = lVar23;
      uVar26 = uVar20;
      uVar22 = uVar21;
      do {
        if ((((uint)uVar28 == uVar26) &&
            (lVar24 = *(long *)(lVar2 + lVar24 * 8), param_1 == *(int *)(lVar24 + 0x10))) &&
           (param_2 == *(int *)(lVar24 + 0x14))) {
          uVar26 = 0;
          while ((((uint)uVar28 != uVar20 ||
                  (lVar23 = *(long *)(lVar2 + lVar23 * 8), param_1 != *(int *)(lVar23 + 0x10))) ||
                 (param_2 != *(int *)(lVar23 + 0x14)))) {
            uVar26 = uVar26 + 1;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = (ulong)(uVar21 + 1) * lVar4;
            auVar16._8_8_ = 0;
            auVar16._0_8_ = uVar27;
            lVar23 = SUB168(auVar9 * auVar16,8);
            uVar20 = *(uint *)(lVar3 + lVar23 * 4);
            uVar21 = SUB164(auVar9 * auVar16,8);
            if ((uVar20 == 0) ||
               (auVar10._8_8_ = 0, auVar10._0_8_ = (ulong)uVar20 * lVar4, auVar17._8_8_ = 0,
               auVar17._0_8_ = uVar27, auVar11._8_8_ = 0,
               auVar11._0_8_ = (ulong)((uVar1 + uVar21) - SUB164(auVar10 * auVar17,8)) * lVar4,
               auVar18._8_8_ = 0, auVar18._0_8_ = uVar27, SUB164(auVar11 * auVar18,8) < uVar26)) {
              _err_print_error("operator[]","./core/templates/hash_map.h",0x245,
                               "FATAL: Condition \"!exists\" is true.",0,0);
              _err_flush_stdout();
                    /* WARNING: Does not return */
              pcVar19 = (code *)invalidInstructionException();
              (*pcVar19)();
            }
          }
          return *(undefined4 *)(*(long *)(lVar2 + (ulong)uVar21 * 8) + 0x2c);
        }
        uVar25 = uVar25 + 1;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = (ulong)(uVar22 + 1) * lVar4;
        auVar13._8_8_ = 0;
        auVar13._0_8_ = uVar27;
        lVar24 = SUB168(auVar6 * auVar13,8);
        uVar26 = *(uint *)(lVar3 + lVar24 * 4);
        uVar22 = SUB164(auVar6 * auVar13,8);
      } while ((uVar26 != 0) &&
              (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar26 * lVar4, auVar14._8_8_ = 0,
              auVar14._0_8_ = uVar27, auVar8._8_8_ = 0,
              auVar8._0_8_ = (ulong)((uVar1 + uVar22) - SUB164(auVar7 * auVar14,8)) * lVar4,
              auVar15._8_8_ = 0, auVar15._0_8_ = uVar27, uVar25 <= SUB164(auVar8 * auVar15,8)));
    }
  }
  _err_print_error("get_transition_filler_clip",
                   "modules/interactive_music/audio_stream_interactive.cpp",0x12f,
                   "Condition \"!transition_map.has(tk)\" is true. Returning: -1",0,0);
  return 0xffffffff;
}



/* AudioStreamInteractive::get_transition_fade_beats(int, int) const */

undefined4 __thiscall
AudioStreamInteractive::get_transition_fade_beats
          (AudioStreamInteractive *this,int param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
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
  code *pcVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  long lVar23;
  long lVar24;
  uint uVar25;
  uint uVar26;
  ulong uVar27;
  ulong uVar28;
  
  lVar2 = *(long *)(this + 0x950);
  if ((lVar2 != 0) && (*(int *)(this + 0x974) != 0)) {
    lVar3 = *(long *)(this + 0x958);
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x970) * 4);
    uVar27 = CONCAT44(0,uVar1);
    lVar4 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x970) * 8);
    uVar20 = (param_1 * 0x16a88000 | (uint)(param_1 * -0x3361d2af) >> 0x11) * 0x1b873593 ^ 0x7f07c65
    ;
    uVar20 = (uVar20 << 0xd | uVar20 >> 0x13) * 5 + 0xe6546b64 ^
             (param_2 * 0x16a88000 | (uint)(param_2 * -0x3361d2af) >> 0x11) * 0x1b873593;
    uVar20 = (uVar20 << 0xd | uVar20 >> 0x13) * 5 + 0xe6546b64;
    uVar28 = (ulong)uVar20;
    if (uVar20 == 0) {
      uVar28 = 1;
    }
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar28 * lVar4;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = uVar27;
    lVar23 = SUB168(auVar5 * auVar12,8);
    uVar20 = *(uint *)(lVar3 + lVar23 * 4);
    uVar21 = SUB164(auVar5 * auVar12,8);
    if (uVar20 != 0) {
      uVar25 = 0;
      lVar24 = lVar23;
      uVar26 = uVar20;
      uVar22 = uVar21;
      do {
        if ((((uint)uVar28 == uVar26) &&
            (lVar24 = *(long *)(lVar2 + lVar24 * 8), param_1 == *(int *)(lVar24 + 0x10))) &&
           (param_2 == *(int *)(lVar24 + 0x14))) {
          uVar26 = 0;
          while ((((uint)uVar28 != uVar20 ||
                  (lVar23 = *(long *)(lVar2 + lVar23 * 8), param_1 != *(int *)(lVar23 + 0x10))) ||
                 (param_2 != *(int *)(lVar23 + 0x14)))) {
            uVar26 = uVar26 + 1;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = (ulong)(uVar21 + 1) * lVar4;
            auVar16._8_8_ = 0;
            auVar16._0_8_ = uVar27;
            lVar23 = SUB168(auVar9 * auVar16,8);
            uVar20 = *(uint *)(lVar3 + lVar23 * 4);
            uVar21 = SUB164(auVar9 * auVar16,8);
            if ((uVar20 == 0) ||
               (auVar10._8_8_ = 0, auVar10._0_8_ = (ulong)uVar20 * lVar4, auVar17._8_8_ = 0,
               auVar17._0_8_ = uVar27, auVar11._8_8_ = 0,
               auVar11._0_8_ = (ulong)((uVar1 + uVar21) - SUB164(auVar10 * auVar17,8)) * lVar4,
               auVar18._8_8_ = 0, auVar18._0_8_ = uVar27, SUB164(auVar11 * auVar18,8) < uVar26)) {
              _err_print_error("operator[]","./core/templates/hash_map.h",0x245,
                               "FATAL: Condition \"!exists\" is true.",0,0);
              _err_flush_stdout();
                    /* WARNING: Does not return */
              pcVar19 = (code *)invalidInstructionException();
              (*pcVar19)();
            }
          }
          return *(undefined4 *)(*(long *)(lVar2 + (ulong)uVar21 * 8) + 0x24);
        }
        uVar25 = uVar25 + 1;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = (ulong)(uVar22 + 1) * lVar4;
        auVar13._8_8_ = 0;
        auVar13._0_8_ = uVar27;
        lVar24 = SUB168(auVar6 * auVar13,8);
        uVar26 = *(uint *)(lVar3 + lVar24 * 4);
        uVar22 = SUB164(auVar6 * auVar13,8);
      } while ((uVar26 != 0) &&
              (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar26 * lVar4, auVar14._8_8_ = 0,
              auVar14._0_8_ = uVar27, auVar8._8_8_ = 0,
              auVar8._0_8_ = (ulong)((uVar1 + uVar22) - SUB164(auVar7 * auVar14,8)) * lVar4,
              auVar15._8_8_ = 0, auVar15._0_8_ = uVar27, uVar25 <= SUB164(auVar8 * auVar15,8)));
    }
  }
  _err_print_error("get_transition_fade_beats",
                   "modules/interactive_music/audio_stream_interactive.cpp",0x123,
                   "Condition \"!transition_map.has(tk)\" is true. Returning: -1",0,0);
  return _LC45;
}



/* AudioStreamInteractive::get_transition_to_time(int, int) const */

undefined4 __thiscall
AudioStreamInteractive::get_transition_to_time(AudioStreamInteractive *this,int param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
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
  code *pcVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  long lVar23;
  long lVar24;
  uint uVar25;
  uint uVar26;
  ulong uVar27;
  ulong uVar28;
  
  lVar2 = *(long *)(this + 0x950);
  if ((lVar2 != 0) && (*(int *)(this + 0x974) != 0)) {
    lVar3 = *(long *)(this + 0x958);
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x970) * 4);
    uVar27 = CONCAT44(0,uVar1);
    lVar4 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x970) * 8);
    uVar20 = (param_1 * 0x16a88000 | (uint)(param_1 * -0x3361d2af) >> 0x11) * 0x1b873593 ^ 0x7f07c65
    ;
    uVar20 = (uVar20 << 0xd | uVar20 >> 0x13) * 5 + 0xe6546b64 ^
             (param_2 * 0x16a88000 | (uint)(param_2 * -0x3361d2af) >> 0x11) * 0x1b873593;
    uVar20 = (uVar20 << 0xd | uVar20 >> 0x13) * 5 + 0xe6546b64;
    uVar28 = (ulong)uVar20;
    if (uVar20 == 0) {
      uVar28 = 1;
    }
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar28 * lVar4;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = uVar27;
    lVar23 = SUB168(auVar5 * auVar12,8);
    uVar20 = *(uint *)(lVar3 + lVar23 * 4);
    uVar21 = SUB164(auVar5 * auVar12,8);
    if (uVar20 != 0) {
      uVar25 = 0;
      lVar24 = lVar23;
      uVar26 = uVar20;
      uVar22 = uVar21;
      do {
        if ((((uint)uVar28 == uVar26) &&
            (lVar24 = *(long *)(lVar2 + lVar24 * 8), param_1 == *(int *)(lVar24 + 0x10))) &&
           (param_2 == *(int *)(lVar24 + 0x14))) {
          uVar26 = 0;
          while ((((uint)uVar28 != uVar20 ||
                  (lVar23 = *(long *)(lVar2 + lVar23 * 8), param_1 != *(int *)(lVar23 + 0x10))) ||
                 (param_2 != *(int *)(lVar23 + 0x14)))) {
            uVar26 = uVar26 + 1;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = (ulong)(uVar21 + 1) * lVar4;
            auVar16._8_8_ = 0;
            auVar16._0_8_ = uVar27;
            lVar23 = SUB168(auVar9 * auVar16,8);
            uVar20 = *(uint *)(lVar3 + lVar23 * 4);
            uVar21 = SUB164(auVar9 * auVar16,8);
            if ((uVar20 == 0) ||
               (auVar10._8_8_ = 0, auVar10._0_8_ = (ulong)uVar20 * lVar4, auVar17._8_8_ = 0,
               auVar17._0_8_ = uVar27, auVar11._8_8_ = 0,
               auVar11._0_8_ = (ulong)((uVar1 + uVar21) - SUB164(auVar10 * auVar17,8)) * lVar4,
               auVar18._8_8_ = 0, auVar18._0_8_ = uVar27, SUB164(auVar11 * auVar18,8) < uVar26)) {
              _err_print_error("operator[]","./core/templates/hash_map.h",0x245,
                               "FATAL: Condition \"!exists\" is true.",0,0);
              _err_flush_stdout();
                    /* WARNING: Does not return */
              pcVar19 = (code *)invalidInstructionException();
              (*pcVar19)();
            }
          }
          return *(undefined4 *)(*(long *)(lVar2 + (ulong)uVar21 * 8) + 0x1c);
        }
        uVar25 = uVar25 + 1;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = (ulong)(uVar22 + 1) * lVar4;
        auVar13._8_8_ = 0;
        auVar13._0_8_ = uVar27;
        lVar24 = SUB168(auVar6 * auVar13,8);
        uVar26 = *(uint *)(lVar3 + lVar24 * 4);
        uVar22 = SUB164(auVar6 * auVar13,8);
      } while ((uVar26 != 0) &&
              (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar26 * lVar4, auVar14._8_8_ = 0,
              auVar14._0_8_ = uVar27, auVar8._8_8_ = 0,
              auVar8._0_8_ = (ulong)((uVar1 + uVar22) - SUB164(auVar7 * auVar14,8)) * lVar4,
              auVar15._8_8_ = 0, auVar15._0_8_ = uVar27, uVar25 <= SUB164(auVar8 * auVar15,8)));
    }
  }
  _err_print_error("get_transition_to_time","modules/interactive_music/audio_stream_interactive.cpp"
                   ,0x117,
                   "Condition \"!transition_map.has(tk)\" is true. Returning: TRANSITION_TO_TIME_START"
                   ,0,0);
  return 1;
}



/* AudioStreamInteractive::is_transition_using_filler_clip(int, int) const */

undefined1 __thiscall
AudioStreamInteractive::is_transition_using_filler_clip
          (AudioStreamInteractive *this,int param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
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
  code *pcVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  long lVar23;
  long lVar24;
  uint uVar25;
  uint uVar26;
  ulong uVar27;
  ulong uVar28;
  
  lVar2 = *(long *)(this + 0x950);
  if ((lVar2 != 0) && (*(int *)(this + 0x974) != 0)) {
    lVar3 = *(long *)(this + 0x958);
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x970) * 4);
    uVar27 = CONCAT44(0,uVar1);
    lVar4 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x970) * 8);
    uVar20 = (param_1 * 0x16a88000 | (uint)(param_1 * -0x3361d2af) >> 0x11) * 0x1b873593 ^ 0x7f07c65
    ;
    uVar20 = (uVar20 << 0xd | uVar20 >> 0x13) * 5 + 0xe6546b64 ^
             (param_2 * 0x16a88000 | (uint)(param_2 * -0x3361d2af) >> 0x11) * 0x1b873593;
    uVar20 = (uVar20 << 0xd | uVar20 >> 0x13) * 5 + 0xe6546b64;
    uVar28 = (ulong)uVar20;
    if (uVar20 == 0) {
      uVar28 = 1;
    }
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar28 * lVar4;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = uVar27;
    lVar23 = SUB168(auVar5 * auVar12,8);
    uVar20 = *(uint *)(lVar3 + lVar23 * 4);
    uVar21 = SUB164(auVar5 * auVar12,8);
    if (uVar20 != 0) {
      uVar25 = 0;
      lVar24 = lVar23;
      uVar26 = uVar20;
      uVar22 = uVar21;
      do {
        if ((((uint)uVar28 == uVar26) &&
            (lVar24 = *(long *)(lVar2 + lVar24 * 8), param_1 == *(int *)(lVar24 + 0x10))) &&
           (param_2 == *(int *)(lVar24 + 0x14))) {
          uVar26 = 0;
          while ((((uint)uVar28 != uVar20 ||
                  (lVar23 = *(long *)(lVar2 + lVar23 * 8), param_1 != *(int *)(lVar23 + 0x10))) ||
                 (param_2 != *(int *)(lVar23 + 0x14)))) {
            uVar26 = uVar26 + 1;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = (ulong)(uVar21 + 1) * lVar4;
            auVar16._8_8_ = 0;
            auVar16._0_8_ = uVar27;
            lVar23 = SUB168(auVar9 * auVar16,8);
            uVar20 = *(uint *)(lVar3 + lVar23 * 4);
            uVar21 = SUB164(auVar9 * auVar16,8);
            if ((uVar20 == 0) ||
               (auVar10._8_8_ = 0, auVar10._0_8_ = (ulong)uVar20 * lVar4, auVar17._8_8_ = 0,
               auVar17._0_8_ = uVar27, auVar11._8_8_ = 0,
               auVar11._0_8_ = (ulong)((uVar1 + uVar21) - SUB164(auVar10 * auVar17,8)) * lVar4,
               auVar18._8_8_ = 0, auVar18._0_8_ = uVar27, SUB164(auVar11 * auVar18,8) < uVar26)) {
              _err_print_error("operator[]","./core/templates/hash_map.h",0x245,
                               "FATAL: Condition \"!exists\" is true.",0,0);
              _err_flush_stdout();
                    /* WARNING: Does not return */
              pcVar19 = (code *)invalidInstructionException();
              (*pcVar19)();
            }
          }
          return *(undefined1 *)(*(long *)(lVar2 + (ulong)uVar21 * 8) + 0x28);
        }
        uVar25 = uVar25 + 1;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = (ulong)(uVar22 + 1) * lVar4;
        auVar13._8_8_ = 0;
        auVar13._0_8_ = uVar27;
        lVar24 = SUB168(auVar6 * auVar13,8);
        uVar26 = *(uint *)(lVar3 + lVar24 * 4);
        uVar22 = SUB164(auVar6 * auVar13,8);
      } while ((uVar26 != 0) &&
              (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar26 * lVar4, auVar14._8_8_ = 0,
              auVar14._0_8_ = uVar27, auVar8._8_8_ = 0,
              auVar8._0_8_ = (ulong)((uVar1 + uVar22) - SUB164(auVar7 * auVar14,8)) * lVar4,
              auVar15._8_8_ = 0, auVar15._0_8_ = uVar27, uVar25 <= SUB164(auVar8 * auVar15,8)));
    }
  }
  _err_print_error("is_transition_using_filler_clip",
                   "modules/interactive_music/audio_stream_interactive.cpp",0x129,
                   "Condition \"!transition_map.has(tk)\" is true. Returning: false",0,0);
  return 0;
}



/* HashMap<AudioStreamInteractive::TransitionKey, AudioStreamInteractive::Transition,
   AudioStreamInteractive::TransitionKeyHasher,
   HashMapComparatorDefault<AudioStreamInteractive::TransitionKey>,
   DefaultTypedAllocator<HashMapElement<AudioStreamInteractive::TransitionKey,
   AudioStreamInteractive::Transition> > >::erase(AudioStreamInteractive::TransitionKey const&)
   [clone .isra.0] */

void __thiscall
HashMap<AudioStreamInteractive::TransitionKey,AudioStreamInteractive::Transition,AudioStreamInteractive::TransitionKeyHasher,HashMapComparatorDefault<AudioStreamInteractive::TransitionKey>,DefaultTypedAllocator<HashMapElement<AudioStreamInteractive::TransitionKey,AudioStreamInteractive::Transition>>>
::erase(HashMap<AudioStreamInteractive::TransitionKey,AudioStreamInteractive::Transition,AudioStreamInteractive::TransitionKeyHasher,HashMapComparatorDefault<AudioStreamInteractive::TransitionKey>,DefaultTypedAllocator<HashMapElement<AudioStreamInteractive::TransitionKey,AudioStreamInteractive::Transition>>>
        *this,TransitionKey *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
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
  ulong uVar33;
  uint uVar34;
  uint uVar35;
  long lVar36;
  ulong uVar37;
  ulong uVar38;
  ulong uVar39;
  long *plVar40;
  ulong uVar41;
  uint uVar42;
  uint *puVar43;
  
  lVar8 = *(long *)(this + 8);
  if ((lVar8 != 0) && (*(int *)(this + 0x2c) != 0)) {
    iVar5 = *(int *)param_1;
    iVar6 = *(int *)(param_1 + 4);
    lVar9 = *(long *)(this + 0x10);
    uVar7 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    uVar41 = CONCAT44(0,uVar7);
    lVar10 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    uVar34 = (iVar5 * 0x16a88000 | (uint)(iVar5 * -0x3361d2af) >> 0x11) * 0x1b873593 ^ 0x7f07c65;
    uVar34 = (uVar34 << 0xd | uVar34 >> 0x13) * 5 + 0xe6546b64 ^
             (iVar6 * 0x16a88000 | (uint)(iVar6 * -0x3361d2af) >> 0x11) * 0x1b873593;
    uVar34 = (uVar34 << 0xd | uVar34 >> 0x13) * 5 + 0xe6546b64;
    uVar37 = (ulong)uVar34;
    if (uVar34 == 0) {
      uVar37 = 1;
    }
    auVar13._8_8_ = 0;
    auVar13._0_8_ = uVar37 * lVar10;
    auVar23._8_8_ = 0;
    auVar23._0_8_ = uVar41;
    lVar36 = SUB168(auVar13 * auVar23,8);
    uVar34 = *(uint *)(lVar9 + lVar36 * 4);
    uVar35 = SUB164(auVar13 * auVar23,8);
    if (uVar34 != 0) {
      uVar42 = 0;
      do {
        uVar38 = (ulong)uVar35;
        if ((((uint)uVar37 == uVar34) &&
            (lVar36 = *(long *)(lVar8 + lVar36 * 8), iVar5 == *(int *)(lVar36 + 0x10))) &&
           (iVar6 == *(int *)(lVar36 + 0x14))) {
          auVar17._8_8_ = 0;
          auVar17._0_8_ = (ulong)(uVar35 + 1) * lVar10;
          auVar27._8_8_ = 0;
          auVar27._0_8_ = uVar41;
          uVar37 = SUB168(auVar17 * auVar27,8);
          puVar43 = (uint *)(lVar9 + uVar37 * 4);
          uVar35 = SUB164(auVar17 * auVar27,8);
          uVar34 = *puVar43;
          if ((uVar34 != 0) &&
             (auVar18._8_8_ = 0, auVar18._0_8_ = (ulong)uVar34 * lVar10, auVar28._8_8_ = 0,
             auVar28._0_8_ = uVar41, auVar19._8_8_ = 0,
             auVar19._0_8_ = (ulong)((uVar35 + uVar7) - SUB164(auVar18 * auVar28,8)) * lVar10,
             auVar29._8_8_ = 0, auVar29._0_8_ = uVar41, uVar33 = (ulong)uVar35, uVar39 = uVar38,
             SUB164(auVar19 * auVar29,8) != 0)) {
            while( true ) {
              uVar38 = uVar33;
              puVar1 = (uint *)(lVar9 + uVar39 * 4);
              *puVar43 = *puVar1;
              puVar2 = (undefined8 *)(lVar8 + uVar37 * 8);
              *puVar1 = uVar34;
              puVar3 = (undefined8 *)(lVar8 + uVar39 * 8);
              uVar11 = *puVar2;
              *puVar2 = *puVar3;
              *puVar3 = uVar11;
              auVar22._8_8_ = 0;
              auVar22._0_8_ = (ulong)((int)uVar38 + 1) * lVar10;
              auVar32._8_8_ = 0;
              auVar32._0_8_ = uVar41;
              uVar37 = SUB168(auVar22 * auVar32,8);
              puVar43 = (uint *)(lVar9 + uVar37 * 4);
              uVar34 = *puVar43;
              if ((uVar34 == 0) ||
                 (auVar20._8_8_ = 0, auVar20._0_8_ = (ulong)uVar34 * lVar10, auVar30._8_8_ = 0,
                 auVar30._0_8_ = uVar41, auVar21._8_8_ = 0,
                 auVar21._0_8_ =
                      (ulong)((SUB164(auVar22 * auVar32,8) + uVar7) - SUB164(auVar20 * auVar30,8)) *
                      lVar10, auVar31._8_8_ = 0, auVar31._0_8_ = uVar41,
                 SUB164(auVar21 * auVar31,8) == 0)) break;
              uVar33 = uVar37 & 0xffffffff;
              uVar39 = uVar38;
            }
          }
          plVar4 = (long *)(lVar8 + uVar38 * 8);
          *(undefined4 *)(lVar9 + uVar38 * 4) = 0;
          plVar40 = (long *)*plVar4;
          if (*(long **)(this + 0x18) == plVar40) {
            *(long *)(this + 0x18) = *plVar40;
            plVar40 = (long *)*plVar4;
            if (*(long **)(this + 0x20) != plVar40) goto LAB_00102079;
          }
          else if (*(long **)(this + 0x20) != plVar40) {
LAB_00102079:
            plVar12 = (long *)plVar40[1];
            goto joined_r0x00102080;
          }
          *(long *)(this + 0x20) = plVar40[1];
          plVar40 = (long *)*plVar4;
          plVar12 = (long *)plVar40[1];
joined_r0x00102080:
          if (plVar12 != (long *)0x0) {
            *plVar12 = *plVar40;
            plVar40 = (long *)*plVar4;
          }
          if (*plVar40 != 0) {
            *(long *)(*plVar40 + 8) = plVar40[1];
            plVar40 = (long *)*plVar4;
          }
          Memory::free_static(plVar40,false);
          *(undefined8 *)(*(long *)(this + 8) + uVar38 * 8) = 0;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + -1;
          return;
        }
        uVar42 = uVar42 + 1;
        auVar14._8_8_ = 0;
        auVar14._0_8_ = (ulong)(uVar35 + 1) * lVar10;
        auVar24._8_8_ = 0;
        auVar24._0_8_ = uVar41;
        lVar36 = SUB168(auVar14 * auVar24,8);
        uVar34 = *(uint *)(lVar9 + lVar36 * 4);
        uVar35 = SUB164(auVar14 * auVar24,8);
      } while ((uVar34 != 0) &&
              (auVar15._8_8_ = 0, auVar15._0_8_ = (ulong)uVar34 * lVar10, auVar25._8_8_ = 0,
              auVar25._0_8_ = uVar41, auVar16._8_8_ = 0,
              auVar16._0_8_ = (ulong)((uVar7 + uVar35) - SUB164(auVar15 * auVar25,8)) * lVar10,
              auVar26._8_8_ = 0, auVar26._0_8_ = uVar41, uVar42 <= SUB164(auVar16 * auVar26,8)));
    }
  }
  return;
}



/* AudioStreamInteractive::erase_transition(int, int) */

void __thiscall
AudioStreamInteractive::erase_transition(AudioStreamInteractive *this,int param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  uint uVar11;
  long *plVar12;
  int iVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long in_FS_OFFSET;
  int local_48;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = param_1;
  local_44 = param_2;
  if ((*(long *)(this + 0x950) != 0) && (*(int *)(this + 0x974) != 0)) {
    uVar17 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x970) * 4));
    lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x970) * 8);
    uVar11 = (param_1 * 0x16a88000 | (uint)(param_1 * -0x3361d2af) >> 0x11) * 0x1b873593 ^ 0x7f07c65
    ;
    uVar11 = (uVar11 << 0xd | uVar11 >> 0x13) * 5 + 0xe6546b64 ^
             (param_2 * 0x16a88000 | (uint)(param_2 * -0x3361d2af) >> 0x11) * 0x1b873593;
    uVar11 = (uVar11 << 0xd | uVar11 >> 0x13) * 5 + 0xe6546b64;
    uVar15 = (ulong)uVar11;
    if (uVar11 == 0) {
      uVar15 = 1;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar15 * lVar2;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar17;
    lVar14 = SUB168(auVar3 * auVar7,8);
    uVar11 = *(uint *)(*(long *)(this + 0x958) + lVar14 * 4);
    uVar16 = (ulong)uVar11;
    iVar13 = SUB164(auVar3 * auVar7,8);
    if (uVar11 != 0) {
      uVar11 = 0;
      do {
        if ((((int)uVar15 == (int)uVar16) &&
            (lVar14 = *(long *)(*(long *)(this + 0x950) + lVar14 * 8),
            param_1 == *(int *)(lVar14 + 0x10))) && (param_2 == *(int *)(lVar14 + 0x14))) {
          plVar12 = (long *)AudioDriver::get_singleton();
          (**(code **)(*plVar12 + 0x38))(plVar12);
          HashMap<AudioStreamInteractive::TransitionKey,AudioStreamInteractive::Transition,AudioStreamInteractive::TransitionKeyHasher,HashMapComparatorDefault<AudioStreamInteractive::TransitionKey>,DefaultTypedAllocator<HashMapElement<AudioStreamInteractive::TransitionKey,AudioStreamInteractive::Transition>>>
          ::erase((HashMap<AudioStreamInteractive::TransitionKey,AudioStreamInteractive::Transition,AudioStreamInteractive::TransitionKeyHasher,HashMapComparatorDefault<AudioStreamInteractive::TransitionKey>,DefaultTypedAllocator<HashMapElement<AudioStreamInteractive::TransitionKey,AudioStreamInteractive::Transition>>>
                   *)(this + 0x948),(TransitionKey *)&local_48);
          plVar12 = (long *)AudioDriver::get_singleton();
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001022b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar12 + 0x40))();
            return;
          }
          goto LAB_001022fb;
        }
        uVar11 = uVar11 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(iVar13 + 1) * lVar2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar17;
        lVar14 = SUB168(auVar4 * auVar8,8);
        uVar1 = *(uint *)(*(long *)(this + 0x958) + lVar14 * 4);
        uVar16 = (ulong)uVar1;
        iVar13 = SUB164(auVar4 * auVar8,8);
      } while ((uVar1 != 0) &&
              (auVar5._8_8_ = 0, auVar5._0_8_ = uVar16 * lVar2, auVar9._8_8_ = 0,
              auVar9._0_8_ = uVar17, auVar6._8_8_ = 0,
              auVar6._0_8_ = (ulong)((*(uint *)(hash_table_size_primes +
                                               (ulong)*(uint *)(this + 0x970) * 4) + iVar13) -
                                    SUB164(auVar5 * auVar9,8)) * lVar2, auVar10._8_8_ = 0,
              auVar10._0_8_ = uVar17, uVar11 <= SUB164(auVar6 * auVar10,8)));
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    _err_print_error("erase_transition","modules/interactive_music/audio_stream_interactive.cpp",
                     0xe8,"Condition \"!transition_map.has(tk)\" is true.",0,0);
    return;
  }
LAB_001022fb:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AudioStreamInteractive::AudioStreamInteractive() */

void __thiscall AudioStreamInteractive::AudioStreamInteractive(AudioStreamInteractive *this)

{
  undefined8 uVar1;
  AudioStreamInteractive *pAVar2;
  AudioStreamInteractive *pAVar3;
  
  Resource::Resource((Resource *)this);
  *(code **)this = AudioStreamPlayback::AudioStreamPlayback;
  *(undefined1 (*) [16])(this + 0x240) = (undefined1  [16])0x0;
  StringName::StringName((StringName *)(this + 0x270),"_instantiate_playback",false);
  this[0x278] = (AudioStreamInteractive)0x0;
  *(undefined8 *)(this + 0x280) = 0;
  StringName::StringName((StringName *)(this + 0x288),"_get_stream_name",false);
  this[0x290] = (AudioStreamInteractive)0x0;
  *(undefined8 *)(this + 0x298) = 0;
  StringName::StringName((StringName *)(this + 0x2a0),"_get_length",false);
  this[0x2a8] = (AudioStreamInteractive)0x0;
  *(undefined8 *)(this + 0x2b0) = 0;
  StringName::StringName((StringName *)(this + 0x2b8),"_is_monophonic",false);
  this[0x2c0] = (AudioStreamInteractive)0x0;
  *(undefined8 *)(this + 0x2c8) = 0;
  StringName::StringName((StringName *)(this + 0x2d0),"_get_bpm",false);
  this[0x2d8] = (AudioStreamInteractive)0x0;
  *(undefined8 *)(this + 0x2e0) = 0;
  StringName::StringName((StringName *)(this + 0x2e8),"_has_loop",false);
  this[0x2f0] = (AudioStreamInteractive)0x0;
  *(undefined8 *)(this + 0x2f8) = 0;
  StringName::StringName((StringName *)(this + 0x300),"_get_bar_beats",false);
  this[0x308] = (AudioStreamInteractive)0x0;
  *(undefined8 *)(this + 0x310) = 0;
  StringName::StringName((StringName *)(this + 0x318),"_get_beat_count",false);
  this[800] = (AudioStreamInteractive)0x0;
  *(undefined8 *)(this + 0x328) = 0;
  StringName::StringName((StringName *)(this + 0x330),"_get_parameter_list",false);
  this[0x338] = (AudioStreamInteractive)0x0;
  this[0x34c] = (AudioStreamInteractive)0x1;
  *(undefined8 *)(this + 0x340) = 0;
  *(undefined4 *)(this + 0x348) = 0xac44;
  *(undefined4 *)(this + 0x350) = 0;
  *(undefined8 *)(this + 0x358) = 0;
  *(undefined ***)this = &PTR__initialize_classv_00125288;
  pAVar2 = this + 0x360;
  do {
    *(undefined4 *)(pAVar2 + 0x10) = 0;
    pAVar3 = pAVar2 + 0x18;
    *(undefined1 (*) [16])pAVar2 = (undefined1  [16])0x0;
    *(undefined4 *)(pAVar2 + 0x14) = 0;
    uVar1 = _LC65;
    pAVar2 = pAVar3;
  } while (pAVar3 != this + 0x948);
  *(undefined8 *)(this + 0x978) = 1;
  *(undefined4 *)(this + 0x980) = 0;
  *(undefined8 *)(this + 0x970) = uVar1;
  *(undefined8 *)(this + 0x9a8) = uVar1;
  *(undefined8 *)(this + 0x9b0) = 0;
  *(undefined1 (*) [16])(this + 0x950) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x960) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x988) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x998) = (undefined1  [16])0x0;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AudioStreamPlaybackInteractive::AudioStreamPlaybackInteractive() */

void __thiscall
AudioStreamPlaybackInteractive::AudioStreamPlaybackInteractive(AudioStreamPlaybackInteractive *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  AudioStreamPlaybackInteractive *pAVar3;
  AudioStreamPlaybackInteractive *pAVar4;
  ulong uVar5;
  undefined8 *puVar6;
  byte bVar7;
  
  bVar7 = 0;
  AudioStreamPlayback::AudioStreamPlayback((AudioStreamPlayback *)this);
  *(undefined8 *)(this + 0x270) = 0;
  *(undefined ***)this = &PTR__initialize_classv_001254c0;
  *(undefined8 *)(this + 0x278) = 0;
  *(undefined8 *)(this + 0x280) = 0;
  *(undefined8 *)(this + 0x2278) = 0;
  puVar6 = (undefined8 *)((ulong)(this + 0x288) & 0xfffffffffffffff8);
  for (uVar5 = (ulong)(((int)this - (int)(undefined8 *)((ulong)(this + 0x288) & 0xfffffffffffffff8))
                       + 0x2280U >> 3); uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar6 = 0;
    puVar6 = puVar6 + (ulong)bVar7 * -2 + 1;
  }
  *(undefined8 *)(this + 0x2280) = 0;
  *(undefined8 *)(this + 0x4278) = 0;
  puVar6 = (undefined8 *)((ulong)(this + 0x2288) & 0xfffffffffffffff8);
  for (uVar5 = (ulong)(((int)this - (int)(undefined8 *)((ulong)(this + 0x2288) & 0xfffffffffffffff8)
                       ) + 0x4280U >> 3); uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar6 = 0;
    puVar6 = puVar6 + (ulong)bVar7 * -2 + 1;
  }
  *(undefined1 (*) [16])(this + 0x4280) = (undefined1  [16])0x0;
  uVar2 = _LC185;
  uVar1 = __LC13;
  this[0x4290] = (AudioStreamPlaybackInteractive)0x0;
  *(undefined8 *)(this + 0x42a8) = 0;
  *(undefined4 *)(this + 0x42b0) = 0xffffffff;
  this[0x42b4] = (AudioStreamPlaybackInteractive)0x1;
  *(undefined8 *)(this + 0x42b8) = 0;
  *(undefined8 *)(this + 0x4298) = uVar1;
  *(undefined8 *)(this + 0x42a0) = uVar2;
  pAVar3 = this + 0x42c0;
  do {
    pAVar3[0x10] = (AudioStreamPlaybackInteractive)0x0;
    pAVar4 = pAVar3 + 0x40;
    *(undefined1 (*) [16])pAVar3 = (undefined1  [16])0x0;
    *(undefined8 *)(pAVar3 + 0x18) = uVar1;
    *(undefined8 *)(pAVar3 + 0x20) = uVar2;
    *(undefined8 *)(pAVar3 + 0x28) = 0;
    *(undefined4 *)(pAVar3 + 0x30) = 0xffffffff;
    pAVar3[0x34] = (AudioStreamPlaybackInteractive)0x1;
    *(undefined8 *)(pAVar3 + 0x38) = 0;
    pAVar3 = pAVar4;
  } while (pAVar4 != this + 0x5240);
  *(undefined4 *)(this + 0x5240) = 0xffffffff;
  this[0x5244] = (AudioStreamPlaybackInteractive)0x0;
  *(undefined8 *)(this + 0x5248) = 0xffffffffffffffff;
  return;
}



/* AudioStreamInteractive::instantiate_playback() */

void AudioStreamInteractive::instantiate_playback(void)

{
  Object *pOVar1;
  char cVar2;
  AudioStreamPlaybackInteractive *this;
  long lVar3;
  Object *pOVar4;
  AudioStreamPlaybackInteractive *pAVar5;
  Object *in_RSI;
  long *in_RDI;
  
  pAVar5 = (AudioStreamPlaybackInteractive *)0x0;
  this = (AudioStreamPlaybackInteractive *)operator_new(0x5250,"");
  AudioStreamPlaybackInteractive::AudioStreamPlaybackInteractive(this);
  postinitialize_handler((Object *)this);
  cVar2 = RefCounted::init_ref();
  if (cVar2 != '\0') {
    cVar2 = RefCounted::reference();
    if (cVar2 != '\0') {
      pAVar5 = this;
    }
    cVar2 = RefCounted::unreference();
    if ((cVar2 != '\0') && (cVar2 = predelete_handler((Object *)this), cVar2 != '\0')) {
      (**(code **)(*(long *)this + 0x140))(this);
      Memory::free_static(this,false);
    }
  }
  cVar2 = RefCounted::init_ref();
  pOVar1 = *(Object **)((Object *)pAVar5 + 0x270);
  if (cVar2 == '\0') {
    if (pOVar1 != (Object *)0x0) {
      *(undefined8 *)((Object *)pAVar5 + 0x270) = 0;
      cVar2 = RefCounted::unreference();
      if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar1), cVar2 != '\0')) {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  else {
    pOVar4 = pOVar1;
    if (in_RSI != pOVar1) {
      *(Object **)((Object *)pAVar5 + 0x270) = in_RSI;
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        *(undefined8 *)((Object *)pAVar5 + 0x270) = 0;
      }
      pOVar4 = in_RSI;
      if (((pOVar1 != (Object *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) &&
         (cVar2 = predelete_handler(pOVar1), cVar2 != '\0')) {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
    cVar2 = RefCounted::unreference();
    if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar4), cVar2 != '\0')) {
      (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
      Memory::free_static(pOVar4,false);
      *in_RDI = 0;
      goto LAB_00102723;
    }
  }
  *in_RDI = 0;
LAB_00102723:
  lVar3 = __dynamic_cast(pAVar5,&Object::typeinfo,&AudioStreamPlayback::typeinfo,0);
  if (lVar3 != 0) {
    *in_RDI = lVar3;
    cVar2 = RefCounted::reference();
    if (cVar2 == '\0') {
      *in_RDI = 0;
    }
  }
  cVar2 = RefCounted::unreference();
  if ((cVar2 != '\0') && (cVar2 = predelete_handler((Object *)pAVar5), cVar2 != '\0')) {
    (**(code **)(*(long *)pAVar5 + 0x140))(pAVar5);
    Memory::free_static(pAVar5,false);
    return;
  }
  return;
}



/* AudioStreamInteractive::get_clip_name(int) const */

StringName * AudioStreamInteractive::get_clip_name(int param_1)

{
  int in_EDX;
  long in_RSI;
  undefined4 in_register_0000003c;
  StringName *this;
  long in_FS_OFFSET;
  undefined8 local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  this = (StringName *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX + 1U < 0x40) {
    if (in_EDX == -1) {
      local_50 = 0;
      local_40 = 0;
      local_48 = "";
      String::parse_latin1((StrRange *)&local_50);
      local_48 = "All Clips";
      local_58 = 0;
      local_40 = 9;
      String::parse_latin1((StrRange *)&local_58);
      RTR((String *)&local_48,(String *)&local_58);
      StringName::StringName(this,(String *)&local_48,false);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
    }
    else {
      StringName::StringName(this,(StringName *)(in_RSI + 0x360 + (long)in_EDX * 0x18));
    }
  }
  else {
    _err_print_error("get_clip_name","modules/interactive_music/audio_stream_interactive.cpp",0x6a,
                     "Condition \"p_clip < -1 || p_clip >= MAX_CLIPS\" is true. Returning: StringName()"
                     ,0,0);
    *(undefined8 *)this = 0;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AudioStreamPlaybackInteractive::get_parameter(StringName const&) const */

StringName * AudioStreamPlaybackInteractive::get_parameter(StringName *param_1)

{
  int iVar1;
  long lVar2;
  char *__s;
  int iVar3;
  int iVar4;
  long *in_RDX;
  long in_RSI;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  size_t local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((const::{lambda()#1}::operator()()::sname == '\0') &&
     (iVar3 = __cxa_guard_acquire(&const::{lambda()#1}::operator()()::sname), iVar3 != 0)) {
    _scs_create((char *)&const::{lambda()#1}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&const::{lambda()#1}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&const::{lambda()#1}::operator()()::sname);
    if (const::{lambda()#1}::operator()()::sname == *in_RDX) goto LAB_00102b00;
  }
  else if (const::{lambda()#1}::operator()()::sname == *in_RDX) {
LAB_00102b00:
    lVar2 = *(long *)(in_RSI + 0x270);
    iVar3 = *(int *)(lVar2 + 0x980);
    if (0 < iVar3) {
      iVar1 = *(int *)(in_RSI + 0x524c);
      iVar4 = 0;
      if (iVar1 != -1) {
        if (iVar1 != 0) {
          do {
            iVar4 = iVar4 + 1;
            if (iVar3 == iVar4) goto LAB_00102c88;
          } while (iVar1 != iVar4);
        }
        if (iVar1 + 1U < 0x40) {
          StringName::StringName
                    ((StringName *)&local_58,(StringName *)(lVar2 + 0x360 + (long)iVar1 * 0x18));
          if (local_58 == 0) goto LAB_00102d2b;
          __s = *(char **)(local_58 + 8);
          local_50 = 0;
          if (__s == (char *)0x0) {
            if (*(long *)(local_58 + 0x10) != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_50,(CowData *)(local_58 + 0x10));
            }
          }
          else {
            local_40 = strlen(__s);
            local_48 = __s;
            String::parse_latin1((StrRange *)&local_50);
          }
        }
        else {
          _err_print_error("get_clip_name","modules/interactive_music/audio_stream_interactive.cpp",
                           0x6a,
                           "Condition \"p_clip < -1 || p_clip >= MAX_CLIPS\" is true. Returning: StringName()"
                           ,0,0);
          local_58 = 0;
LAB_00102d2b:
          local_50 = 0;
        }
        Variant::Variant((Variant *)param_1,(String *)&local_50);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
        if ((StringName::configured != '\0') && (local_58 != 0)) {
          StringName::unref();
        }
        goto LAB_00102a73;
      }
      do {
        if (*(int *)(in_RSI + 0x5240) == iVar4) {
          if (iVar4 + 1U < 0x40) {
            StringName::StringName
                      ((StringName *)&local_50,(StringName *)(lVar2 + 0x360 + (long)iVar4 * 0x18));
            if (local_50 == 0) goto LAB_00102ceb;
            local_48 = (char *)0x0;
            if (*(char **)(local_50 + 8) == (char *)0x0) {
              if (*(long *)(local_50 + 0x10) != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)(local_50 + 0x10))
                ;
              }
            }
            else {
              String::parse_latin1((String *)&local_48,*(char **)(local_50 + 8));
            }
          }
          else {
            _err_print_error("get_clip_name",
                             "modules/interactive_music/audio_stream_interactive.cpp",0x6a,
                             "Condition \"p_clip < -1 || p_clip >= MAX_CLIPS\" is true. Returning: StringName()"
                             ,0,0);
            local_50 = 0;
LAB_00102ceb:
            local_48 = (char *)0x0;
          }
          Variant::Variant((Variant *)param_1,(String *)&local_48);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
          if ((StringName::configured != '\0') && (local_50 != 0)) {
            StringName::unref();
          }
          goto LAB_00102a73;
        }
        iVar4 = iVar4 + 1;
      } while (iVar3 != iVar4);
    }
LAB_00102c88:
    Variant::Variant((Variant *)param_1,"");
    goto LAB_00102a73;
  }
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00102a73:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* AudioStreamPlaybackInteractive::switch_to_clip_by_name(StringName const&) */

void __thiscall
AudioStreamPlaybackInteractive::switch_to_clip_by_name
          (AudioStreamPlaybackInteractive *this,StringName *param_1)

{
  long *plVar1;
  char *pcVar2;
  char *pcVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  long in_FS_OFFSET;
  bool bVar9;
  undefined8 local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  lVar4 = *(long *)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar4 == 0) {
    *(undefined4 *)(this + 0x524c) = 0xffffffff;
    goto LAB_00102e57;
  }
  lVar7 = *(long *)(this + 0x270);
  if (lVar7 == 0) {
    _err_print_error("switch_to_clip_by_name",
                     "modules/interactive_music/audio_stream_interactive.cpp",0x3d7,
                     "Condition \"stream.is_null()\" is true.",
                     "Attempted to switch while not playing back any stream.",0,0);
    goto LAB_00102e57;
  }
  lVar6 = 0x360;
  uVar8 = 0;
  if (*(int *)(lVar7 + 0x980) < 1) {
LAB_00102e8d:
    pcVar2 = *(char **)(lVar4 + 8);
    local_60 = 0;
    if (pcVar2 == (char *)0x0) {
      plVar1 = (long *)(*(long *)(lVar4 + 0x10) + -0x10);
      if (*(long *)(lVar4 + 0x10) != 0) {
        do {
          lVar7 = *plVar1;
          if (lVar7 == 0) goto LAB_00102f69;
          LOCK();
          lVar6 = *plVar1;
          bVar9 = lVar7 == lVar6;
          if (bVar9) {
            *plVar1 = lVar7 + 1;
            lVar6 = lVar7;
          }
          UNLOCK();
        } while (!bVar9);
        if (lVar6 != -1) {
          local_60 = *(undefined8 *)(lVar4 + 0x10);
          goto LAB_00102eca;
        }
      }
      goto LAB_00102f69;
    }
    local_50 = strlen(pcVar2);
    local_58 = pcVar2;
    String::parse_latin1((StrRange *)&local_60);
  }
  else {
    do {
      uVar5 = uVar8 + 1;
      if (uVar5 < 0x40) {
        StringName::StringName((StringName *)&local_58,(StringName *)(lVar7 + lVar6));
        pcVar3 = local_58;
        pcVar2 = *(char **)param_1;
        if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
          StringName::unref();
        }
        if (pcVar3 == pcVar2) goto LAB_00102e50;
      }
      else {
        _err_print_error("get_clip_name","modules/interactive_music/audio_stream_interactive.cpp",
                         0x6a,
                         "Condition \"p_clip < -1 || p_clip >= MAX_CLIPS\" is true. Returning: StringName()"
                         ,0,0);
        if (*(long *)param_1 == 0) {
LAB_00102e50:
          *(uint *)(this + 0x524c) = uVar8;
          goto LAB_00102e57;
        }
      }
      lVar7 = *(long *)(this + 0x270);
      lVar6 = lVar6 + 0x18;
      uVar8 = uVar5;
    } while ((int)uVar5 < *(int *)(lVar7 + 0x980));
    lVar4 = *(long *)param_1;
    if (lVar4 != 0) goto LAB_00102e8d;
LAB_00102f69:
    local_60 = 0;
  }
LAB_00102eca:
  operator+((char *)&local_58,(String *)"Clip not found: ");
  _err_print_error("switch_to_clip_by_name","modules/interactive_music/audio_stream_interactive.cpp"
                   ,0x3df,"Method/function failed.",(CowData<char32_t> *)&local_58,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
LAB_00102e57:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* AudioStreamPlaybackInteractive::set_parameter(StringName const&, Variant const&) */

void AudioStreamPlaybackInteractive::set_parameter(StringName *param_1,Variant *param_2)

{
  int iVar1;
  long in_FS_OFFSET;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (set_parameter(StringName_const&,Variant_const&)::{lambda()#1}::operator()()::sname == '\0') {
    iVar1 = __cxa_guard_acquire(&set_parameter(StringName_const&,Variant_const&)::{lambda()#1}::
                                 operator()()::sname);
    if (iVar1 == 0) goto LAB_00103004;
    _scs_create((char *)&set_parameter(StringName_const&,Variant_const&)::{lambda()#1}::operator()()
                         ::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &set_parameter(StringName_const&,Variant_const&)::{lambda()#1}::operator()()::sname
                 ,&__dso_handle);
    __cxa_guard_release(&set_parameter(StringName_const&,Variant_const&)::{lambda()#1}::operator()()
                         ::sname);
    if (*(long *)param_2 !=
        set_parameter(StringName_const&,Variant_const&)::{lambda()#1}::operator()()::sname)
    goto LAB_00103014;
  }
  else {
LAB_00103004:
    if (*(long *)param_2 !=
        set_parameter(StringName_const&,Variant_const&)::{lambda()#1}::operator()()::sname)
    goto LAB_00103014;
  }
  Variant::operator_cast_to_StringName((Variant *)&local_38);
  switch_to_clip_by_name((AudioStreamPlaybackInteractive *)param_1,(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != 0)) {
    StringName::unref();
  }
LAB_00103014:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AudioStreamInteractive::_get_streams_hint() const */

CowData<char32_t> * AudioStreamInteractive::_get_streams_hint(void)

{
  long *plVar1;
  char *pcVar2;
  undefined8 uVar3;
  long lVar4;
  char cVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long in_RSI;
  CowData<char32_t> *in_RDI;
  long *plVar9;
  long in_FS_OFFSET;
  bool bVar10;
  char *local_70;
  CowData<char32_t> local_68 [8];
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((*(long *)(in_RSI + 0x9b0) == 0) || (*(uint *)(*(long *)(in_RSI + 0x9b0) + -8) < 2)) &&
     (0 < *(int *)(in_RSI + 0x980))) {
    plVar9 = (long *)(in_RSI + 0x368);
    lVar8 = 0;
    do {
      if (lVar8 == 0) {
        lVar7 = plVar9[-1];
        if (lVar7 == 0) goto LAB_0010334e;
LAB_00103177:
        pcVar2 = *(char **)(lVar7 + 8);
        local_60 = 0;
        if (pcVar2 == (char *)0x0) {
          plVar1 = (long *)(*(long *)(lVar7 + 0x10) + -0x10);
          if (*(long *)(lVar7 + 0x10) != 0) {
            do {
              lVar4 = *plVar1;
              if (lVar4 == 0) goto LAB_001031b6;
              LOCK();
              lVar6 = *plVar1;
              bVar10 = lVar4 == lVar6;
              if (bVar10) {
                *plVar1 = lVar4 + 1;
                lVar6 = lVar4;
              }
              UNLOCK();
            } while (!bVar10);
            if (lVar6 != -1) {
              local_60 = *(long *)(lVar7 + 0x10);
            }
          }
        }
        else {
          local_50 = strlen(pcVar2);
          local_58 = pcVar2;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      else {
        String::operator+=((String *)(in_RSI + 0x9b0),",");
        lVar7 = plVar9[-1];
        if (lVar7 != 0) goto LAB_00103177;
LAB_0010334e:
        local_60 = 0;
      }
LAB_001031b6:
      String::replace((char *)&local_70,(char *)&local_60);
      lVar7 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar1 = (long *)(local_60 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
      cVar5 = String::operator==((String *)&local_70,"");
      if ((cVar5 != '\0') && (*plVar9 != 0)) {
        Resource::get_name();
        pcVar2 = local_58;
        if (local_58 != (char *)0x0) {
          uVar3 = *(undefined8 *)(local_58 + -8);
          if ((int)uVar3 == 0) {
            LOCK();
            plVar1 = (long *)(local_58 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_58 = (char *)0x0;
              Memory::free_static(pcVar2 + -0x10,false);
            }
          }
          else {
            LOCK();
            plVar1 = (long *)(local_58 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_58 = (char *)0x0;
              Memory::free_static(pcVar2 + -0x10,false);
            }
            if ((int)uVar3 != 1) {
              Resource::get_name();
              String::replace((char *)&local_58,(char *)&local_60);
              if (local_70 != local_58) {
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
                local_70 = local_58;
                local_58 = (char *)0x0;
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
              goto LAB_00103280;
            }
          }
        }
        Resource::get_path();
        cVar5 = String::is_resource_file();
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
        if (cVar5 != '\0') {
          Resource::get_path();
          String::get_file();
          String::replace((char *)&local_58,(char *)&local_60);
          if (local_70 != local_58) {
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
            local_70 = local_58;
            local_58 = (char *)0x0;
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          CowData<char32_t>::_unref(local_68);
        }
      }
LAB_00103280:
      cVar5 = String::operator==((String *)&local_70,"");
      if (cVar5 != '\0') {
        itos((long)&local_60);
        operator+((char *)&local_58,(String *)"Clip ");
        pcVar2 = local_58;
        if (local_70 == local_58) {
          if (local_58 != (char *)0x0) {
            LOCK();
            plVar1 = (long *)(local_58 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_58 = (char *)0x0;
              Memory::free_static(pcVar2 + -0x10,false);
            }
          }
        }
        else {
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
          local_70 = local_58;
        }
        lVar7 = local_60;
        if (local_60 != 0) {
          LOCK();
          plVar1 = (long *)(local_60 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_60 = 0;
            Memory::free_static((void *)(lVar7 + -0x10),false);
          }
        }
      }
      String::operator+=((String *)(in_RSI + 0x9b0),(String *)&local_70);
      pcVar2 = local_70;
      if (local_70 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_70 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_70 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar8 = lVar8 + 1;
      plVar9 = plVar9 + 3;
    } while ((int)lVar8 < *(int *)(in_RSI + 0x980));
  }
  *(undefined8 *)in_RDI = 0;
  if (*(long *)(in_RSI + 0x9b0) != 0) {
    CowData<char32_t>::_ref(in_RDI,(CowData *)(in_RSI + 0x9b0));
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return in_RDI;
}



/* AudioStreamInteractive::_validate_property(PropertyInfo&) const */

void __thiscall
AudioStreamInteractive::_validate_property(AudioStreamInteractive *this,PropertyInfo *param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  long in_FS_OFFSET;
  bool bVar6;
  undefined8 local_68;
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = 0;
  if (*(long *)(param_1 + 8) != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 8) + -0x10);
    do {
      lVar2 = *plVar1;
      if (lVar2 == 0) goto LAB_00103600;
      LOCK();
      lVar5 = *plVar1;
      bVar6 = lVar2 == lVar5;
      if (bVar6) {
        *plVar1 = lVar2 + 1;
        lVar5 = lVar2;
      }
      UNLOCK();
    } while (!bVar6);
    if (lVar5 != -1) {
      local_68 = *(undefined8 *)(param_1 + 8);
    }
  }
LAB_00103600:
  cVar3 = String::operator==((String *)&local_68,"switch_to");
  if ((cVar3 == '\0') &&
     (cVar3 = String::operator==((String *)&local_68,"initial_clip"), cVar3 == '\0')) {
    cVar3 = String::begins_with((char *)&local_68);
    if ((cVar3 == '\0') ||
       (cVar3 = String::operator!=((String *)&local_68,"clip_count"), cVar3 == '\0'))
    goto LAB_00103664;
    String::get_slicec((wchar32)(CowData<char32_t> *)&local_48,(int)(String *)&local_68);
    iVar4 = String::to_int();
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    if (*(int *)(this + 0x980) <= iVar4) {
      *(undefined4 *)(param_1 + 0x28) = 8;
      goto LAB_00103664;
    }
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"/next_clip");
    itos((long)local_60);
    operator+((char *)local_58,(String *)"clip_");
    String::operator+((String *)&local_48,(String *)local_58);
    cVar3 = String::operator==((String *)&local_68,(CowData<char32_t> *)&local_48);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    CowData<char32_t>::_unref(local_58);
    CowData<char32_t>::_unref(local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
    if (cVar3 == '\0') goto LAB_00103664;
    if (*(int *)(this + (long)iVar4 * 0x18 + 0x370) != 1) {
      *(undefined4 *)(param_1 + 0x28) = 0;
      goto LAB_00103664;
    }
  }
  _get_streams_hint();
  if (*(long *)(param_1 + 0x20) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0x20));
    *(long *)(param_1 + 0x20) = local_48;
    local_48 = 0;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
LAB_00103664:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* AudioStreamInteractive::set_clip_stream(int, Ref<AudioStream> const&) */

void __thiscall
AudioStreamInteractive::set_clip_stream(AudioStreamInteractive *this,int param_1,Ref *param_2)

{
  Object *pOVar1;
  Object *pOVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long in_FS_OFFSET;
  undefined *local_88;
  CowData<char32_t> local_80 [8];
  CowData<char32_t> local_78 [8];
  CowData<char32_t> local_70 [8];
  undefined *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  lVar8 = (long)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (0x3e < (uint)param_1) {
    _err_print_index_error
              ("set_clip_stream","modules/interactive_music/audio_stream_interactive.cpp",0x72,
               (long)param_1,0x3f,"p_clip","MAX_CLIPS","",false,false);
    goto LAB_0010391d;
  }
  plVar6 = (long *)AudioServer::get_singleton();
  (**(code **)(*plVar6 + 0x170))(plVar6);
  pOVar1 = *(Object **)(this + lVar8 * 0x18 + 0x368);
  if (pOVar1 == (Object *)0x0) {
    if (*(long *)param_2 != 0) {
      *(long *)(this + lVar8 * 0x18 + 0x368) = *(long *)param_2;
      cVar4 = RefCounted::reference();
      if (cVar4 == '\0') {
        *(undefined8 *)(this + lVar8 * 0x18 + 0x368) = 0;
      }
    }
  }
  else {
    pOVar2 = *(Object **)param_2;
    *(long *)(this + 0x978) = *(long *)(this + 0x978) + 1;
    if (pOVar1 != pOVar2) {
      *(Object **)(this + lVar8 * 0x18 + 0x368) = pOVar2;
      if (pOVar2 != (Object *)0x0) {
        cVar4 = RefCounted::reference();
        if (cVar4 == '\0') {
          *(undefined8 *)(this + lVar8 * 0x18 + 0x368) = 0;
        }
      }
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
  plVar6 = (long *)AudioServer::get_singleton();
  (**(code **)(*plVar6 + 0x178))(plVar6);
  lVar7 = Engine::get_singleton();
  if (((*(char *)(lVar7 + 0xc0) != '\0') && (*(long *)(this + lVar8 * 0x18 + 0x360) == 0)) &&
     (*(long *)param_2 != 0)) {
    local_88 = (undefined *)0x0;
    Resource::get_name();
    if ((local_68 == (undefined *)0x0) || (uVar3 = *(undefined8 *)(local_68 + -8), (int)uVar3 == 0))
    {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
LAB_00103b65:
      Resource::get_path();
      cVar4 = String::is_resource_file();
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      if (cVar4 != '\0') {
        Resource::get_path();
        String::get_file();
        String::get_basename();
        String::replace((char *)&local_68,(char *)local_70);
        if (local_88 != local_68) {
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
          local_88 = local_68;
          local_68 = (undefined *)0x0;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        CowData<char32_t>::_unref(local_70);
        CowData<char32_t>::_unref(local_78);
        CowData<char32_t>::_unref(local_80);
        String::capitalize();
        if (local_88 != local_68) {
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
          local_88 = local_68;
          local_68 = (undefined *)0x0;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      }
    }
    else {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      if ((int)uVar3 == 1) goto LAB_00103b65;
      Resource::get_name();
      String::replace((char *)&local_68,(char *)local_70);
      if (local_88 != local_68) {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
        local_88 = local_68;
        local_68 = (undefined *)0x0;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref(local_70);
    }
    cVar4 = String::operator!=((String *)&local_88,"");
    if (cVar4 != '\0') {
      StringName::StringName((StringName *)&local_68,(String *)&local_88,false);
      if (*(undefined **)(this + lVar8 * 0x18 + 0x360) == local_68) {
        if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        *(undefined **)(this + lVar8 * 0x18 + 0x360) = local_68;
      }
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  }
  local_68 = &_LC5;
  local_60 = 0;
  String::parse_latin1((StrRange *)(this + 0x9b0));
  Object::notify_property_list_changed();
  if (set_clip_stream(int,Ref<AudioStream>const&)::{lambda()#1}::operator()()::sname == '\0') {
    iVar5 = __cxa_guard_acquire(&set_clip_stream(int,Ref<AudioStream>const&)::{lambda()#1}::
                                 operator()()::sname);
    if (iVar5 != 0) {
      _scs_create((char *)&set_clip_stream(int,Ref<AudioStream>const&)::{lambda()#1}::operator()()::
                           sname,true);
      __cxa_atexit(StringName::~StringName,
                   &set_clip_stream(int,Ref<AudioStream>const&)::{lambda()#1}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&set_clip_stream(int,Ref<AudioStream>const&)::{lambda()#1}::operator()()::
                           sname);
    }
  }
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  (**(code **)(*(long *)this + 0xd0))
            (this,&set_clip_stream(int,Ref<AudioStream>const&)::{lambda()#1}::operator()()::sname,0,
             0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
LAB_0010391d:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AudioStreamInteractive::get_parameter_list(List<AudioStream::Parameter, DefaultAllocator>*) */

void __thiscall
AudioStreamInteractive::get_parameter_list(AudioStreamInteractive *this,List *param_1)

{
  long *plVar1;
  char *__s;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  size_t sVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined1 (*pauVar8) [16];
  long lVar9;
  long in_FS_OFFSET;
  bool bVar10;
  StringName *local_1a8;
  StringName *local_190;
  long local_140;
  long local_138;
  long local_130;
  long local_128;
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
  int local_c8 [8];
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
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_140 = 0;
  if (0 < *(int *)(this + 0x980)) {
    lVar9 = 0;
    do {
      String::operator+=((String *)&local_140,",");
      lVar2 = *(long *)(this + lVar9 * 0x18 + 0x360);
      if (lVar2 == 0) {
        local_128 = 0;
      }
      else {
        __s = *(char **)(lVar2 + 8);
        local_128 = 0;
        if (__s == (char *)0x0) {
          plVar1 = (long *)(*(long *)(lVar2 + 0x10) + -0x10);
          if (*(long *)(lVar2 + 0x10) != 0) {
            do {
              lVar3 = *plVar1;
              if (lVar3 == 0) goto LAB_00103da5;
              LOCK();
              lVar6 = *plVar1;
              bVar10 = lVar3 == lVar6;
              if (bVar10) {
                *plVar1 = lVar3 + 1;
                lVar6 = lVar3;
              }
              UNLOCK();
            } while (!bVar10);
            if (lVar6 != -1) {
              local_128 = *(long *)(lVar2 + 0x10);
            }
          }
        }
        else {
          sVar5 = strlen(__s);
          local_f0._0_8_ = sVar5;
          local_f8 = __s;
          String::parse_latin1((StrRange *)&local_128);
        }
      }
LAB_00103da5:
      String::operator+=((String *)&local_140,(String *)&local_128);
      lVar2 = local_128;
      if (local_128 != 0) {
        LOCK();
        plVar1 = (long *)(local_128 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_128 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      lVar9 = lVar9 + 1;
    } while ((int)lVar9 < *(int *)(this + 0x980));
  }
  local_1a8 = (StringName *)&local_f8;
  Variant::Variant((Variant *)local_c8,"");
  local_f8 = "switch_to_clip";
  local_130 = 0;
  local_138 = 0;
  local_f0._0_8_ = 0xe;
  String::parse_latin1((StrRange *)&local_138);
  local_128 = CONCAT44(local_128._4_4_,4);
  local_120 = 0;
  if (local_138 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_120,(CowData *)&local_138);
  }
  local_118 = (char *)0x0;
  local_110 = 2;
  local_108 = 0;
  if (local_140 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_108,(CowData *)&local_140);
    local_100 = 4;
    if (local_110 == 0x11) {
      StringName::StringName(local_1a8,(CowData<char32_t> *)&local_108,false);
      if (local_118 == local_f8) {
        if ((StringName::configured != '\0') && (local_f8 != (char *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_118 = local_f8;
      }
      goto LAB_00103fdd;
    }
  }
  local_100 = 4;
  StringName::operator=((StringName *)&local_118,(StringName *)&local_130);
LAB_00103fdd:
  local_190 = (StringName *)&local_118;
  local_70 = 0;
  local_80 = (undefined1  [16])0x0;
  local_88 = (undefined4)local_128;
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
    pauVar8 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar8;
    *(undefined4 *)pauVar8[1] = 0;
    *pauVar8 = (undefined1  [16])0x0;
  }
  puVar7 = (undefined4 *)operator_new(0x60,DefaultAllocator::alloc);
  local_f8 = (char *)0x0;
  local_f0 = (undefined1  [16])0x0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 6;
  local_a0 = (undefined1  [16])0x0;
  local_a8[0] = 0;
  local_a8[1] = 0;
  puVar7[6] = 0;
  *puVar7 = 0;
  *(undefined8 *)(puVar7 + 8) = 0;
  puVar7[10] = 6;
  puVar7[0xc] = 0;
  *(undefined1 (*) [16])(puVar7 + 2) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar7 + 0xe) = (undefined1  [16])0x0;
  StringName::operator=((StringName *)(puVar7 + 4),(StringName *)(local_f0 + 8));
  puVar7[6] = (undefined4)local_e0;
  if (*(long *)(puVar7 + 8) != local_d8) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar7 + 8),(CowData *)&local_d8);
  }
  puVar7[10] = local_d0;
  Variant::operator=((Variant *)(puVar7 + 0xc),(Variant *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_f0._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_f0);
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  *(undefined8 *)(puVar7 + 0x16) = 0;
  *(undefined1 (*) [16])(puVar7 + 0x12) = (undefined1  [16])0x0;
  *puVar7 = local_88;
  if (*(long *)(puVar7 + 2) != local_80._0_8_) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar7 + 2),(CowData *)local_80);
  }
  StringName::operator=((StringName *)(puVar7 + 4),(StringName *)(local_80 + 8));
  puVar7[6] = local_70;
  if (*(long *)(puVar7 + 8) != local_68) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar7 + 8),(CowData *)&local_68);
  }
  puVar7[10] = local_60;
  Variant::operator=((Variant *)(puVar7 + 0xc),(Variant *)local_58);
  uVar4 = *(undefined8 *)(*(long *)param_1 + 8);
  *(long *)(puVar7 + 0x16) = *(long *)param_1;
  *(undefined8 *)(puVar7 + 0x12) = 0;
  plVar1 = *(long **)param_1;
  *(undefined8 *)(puVar7 + 0x14) = uVar4;
  if (plVar1[1] != 0) {
    *(undefined4 **)(plVar1[1] + 0x48) = puVar7;
  }
  plVar1[1] = (long)puVar7;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar7;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
  if ((StringName::configured != '\0') && (local_130 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_c8[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* AudioStreamPlaybackInteractive::_bind_methods() */

void AudioStreamPlaybackInteractive::_bind_methods(void)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  MethodBind *pMVar4;
  long *plVar5;
  long lVar6;
  long in_FS_OFFSET;
  undefined8 local_a0;
  char *local_98;
  undefined8 local_90;
  long local_88 [2];
  long *local_78;
  char *local_68;
  undefined8 local_60;
  char **local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = 0;
  local_68 = "clip_name";
  local_58 = &local_68;
  D_METHODP((char *)local_88,(char ***)"switch_to_clip_by_name",(uint)&local_58);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<AudioStreamPlaybackInteractive,StringName_const&>
                     (switch_to_clip_by_name);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)local_88,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_78;
  if (local_78 != (long *)0x0) {
    LOCK();
    plVar5 = local_78 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_78 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_78[-1];
      local_78 = (long *)0x0;
      if (lVar1 != 0) {
        lVar6 = 0;
        plVar5 = plVar3;
        do {
          if ((StringName::configured != '\0') && (*plVar5 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar5 = plVar5 + 1;
        } while (lVar1 != lVar6);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_88[0] != 0)) {
    StringName::unref();
  }
  local_68 = "clip_index";
  local_60 = 0;
  local_58 = &local_68;
  D_METHODP((char *)local_88,(char ***)"switch_to_clip",(uint)&local_58);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<AudioStreamPlaybackInteractive,int>(switch_to_clip);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)local_88,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_78;
  if (local_78 != (long *)0x0) {
    LOCK();
    plVar5 = local_78 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_78 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_78[-1];
      local_78 = (long *)0x0;
      if (lVar1 != 0) {
        lVar6 = 0;
        plVar5 = plVar3;
        do {
          if ((StringName::configured != '\0') && (*plVar5 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar5 = plVar5 + 1;
        } while (lVar1 != lVar6);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_88[0] != 0)) {
    StringName::unref();
  }
  D_METHODP((char *)local_88,(char ***)"get_current_clip_index",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(pMVar4);
  *(undefined ***)pMVar4 = &PTR__gen_argument_type_001257b0;
  *(code **)(pMVar4 + 0x58) = get_current_clip_index;
  *(undefined8 *)(pMVar4 + 0x60) = 0;
  MethodBind::_set_returns(SUB81(pMVar4,0));
  MethodBind::_set_const(SUB81(pMVar4,0));
  MethodBind::_generate_argument_types((int)pMVar4);
  *(undefined4 *)(pMVar4 + 0x34) = 0;
  local_a0 = 0;
  local_98 = "AudioStreamPlaybackInteractive";
  local_90 = 0x1e;
  String::parse_latin1((StrRange *)&local_a0);
  StringName::StringName((StringName *)&local_98,(StrRange *)&local_a0,false);
  StringName::operator=((StringName *)(pMVar4 + 0x18),(StringName *)&local_98);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)local_88,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_78;
  if (local_78 != (long *)0x0) {
    LOCK();
    plVar5 = local_78 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_78 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_78[-1];
      local_78 = (long *)0x0;
      if (lVar1 != 0) {
        lVar6 = 0;
        plVar5 = plVar3;
        do {
          if ((StringName::configured != '\0') && (*plVar5 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar5 = plVar5 + 1;
        } while (lVar1 != lVar6);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_88[0] != 0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AudioStreamInteractive::_bind_methods() */

void AudioStreamInteractive::_bind_methods(void)

{
  long *plVar1;
  Variant *pVVar2;
  undefined1 auVar3 [16];
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  MethodBind *pMVar7;
  Variant *pVVar8;
  uint uVar9;
  Variant **ppVVar10;
  int iVar11;
  long lVar12;
  long in_FS_OFFSET;
  undefined8 local_1e0;
  CowData<char32_t> local_1d8 [8];
  long local_1d0;
  long local_1c8;
  long local_1c0;
  long local_1b8;
  long local_1b0;
  long local_1a8;
  long local_1a0;
  long local_198;
  char *local_190;
  char *local_188;
  undefined8 local_180;
  char *local_178;
  long local_170;
  char *local_168;
  int local_160;
  long local_158;
  undefined4 local_150;
  char *local_148;
  undefined *puStack_140;
  char *local_138;
  char *pcStack_130;
  char *local_128;
  char *pcStack_120;
  char *local_118;
  char *pcStack_110;
  char *local_108;
  undefined8 local_100;
  Variant *local_f8;
  undefined1 auStack_f0 [72];
  Variant **local_a8;
  undefined1 local_a0 [16];
  Variant local_90 [24];
  Variant local_78 [24];
  undefined8 local_60;
  undefined1 local_58 [16];
  Variant local_48 [8];
  long local_40;
  
  puVar5 = PTR__LC105_00126270;
  puVar4 = PTR__LC104_00126268;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  D_METHOD<char_const*,char_const*>((char *)&local_178,"_get_linked_undo_properties","for_property")
  ;
  auStack_f0._0_16_ = (undefined1  [16])0x0;
  local_f8 = (Variant *)0x0;
  pMVar7 = create_method_bind<AudioStreamInteractive,Vector<String>,String_const&,Variant_const&>
                     (_get_linked_undo_properties);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_178,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_f8] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_178);
  D_METHOD<char_const*,char_const*>((char *)&local_178,"_inspector_array_swap_clip","a");
  auStack_f0._0_16_ = (undefined1  [16])0x0;
  local_f8 = (Variant *)0x0;
  pMVar7 = create_method_bind<AudioStreamInteractive,unsigned_int,unsigned_int>
                     (_inspector_array_swap_clip);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_178,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_f8] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_178);
  local_148 = "clip_count";
  pVVar8 = (Variant *)&local_148;
  puStack_140 = (undefined *)0x0;
  uVar9 = (uint)&local_f8;
  local_f8 = pVVar8;
  D_METHODP((char *)&local_178,(char ***)"set_clip_count",uVar9);
  auStack_f0._0_16_ = (undefined1  [16])0x0;
  local_f8 = (Variant *)0x0;
  pMVar7 = create_method_bind<AudioStreamInteractive,int>(set_clip_count);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_178,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_f8] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_178);
  D_METHODP((char *)&local_178,(char ***)"get_clip_count",0);
  auStack_f0._0_16_ = (undefined1  [16])0x0;
  local_f8 = (Variant *)0x0;
  pMVar7 = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(pMVar7);
  *(undefined ***)pMVar7 = &PTR__gen_argument_type_001257b0;
  *(code **)(pMVar7 + 0x58) = get_clip_count;
  *(undefined8 *)(pMVar7 + 0x60) = 0;
  MethodBind::_set_returns(SUB81(pMVar7,0));
  MethodBind::_set_const(SUB81(pMVar7,0));
  MethodBind::_generate_argument_types((int)pMVar7);
  *(undefined4 *)(pMVar7 + 0x34) = 0;
  local_188 = "AudioStreamInteractive";
  local_190 = (char *)0x0;
  local_180 = 0x16;
  String::parse_latin1((StrRange *)&local_190);
  StringName::StringName((StringName *)&local_188,(StrRange *)&local_190,false);
  StringName::operator=((StringName *)(pMVar7 + 0x18),(StringName *)&local_188);
  if ((StringName::configured != '\0') && (local_188 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_190);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_178,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_f8] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_178);
  puStack_140 = (undefined *)0x0;
  local_148 = "clip_index";
  local_f8 = pVVar8;
  D_METHODP((char *)&local_178,(char ***)"set_initial_clip",uVar9);
  auStack_f0._0_16_ = (undefined1  [16])0x0;
  local_f8 = (Variant *)0x0;
  pMVar7 = create_method_bind<AudioStreamInteractive,int>(set_initial_clip);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_178,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_f8] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_178);
  D_METHODP((char *)&local_178,(char ***)"get_initial_clip",0);
  auStack_f0._0_16_ = (undefined1  [16])0x0;
  local_f8 = (Variant *)0x0;
  pMVar7 = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(pMVar7);
  *(undefined ***)pMVar7 = &PTR__gen_argument_type_001257b0;
  *(undefined8 *)(pMVar7 + 0x58) = 0x100000;
  *(undefined8 *)(pMVar7 + 0x60) = 0;
  MethodBind::_set_returns(SUB81(pMVar7,0));
  MethodBind::_set_const(SUB81(pMVar7,0));
  MethodBind::_generate_argument_types((int)pMVar7);
  *(undefined4 *)(pMVar7 + 0x34) = 0;
  local_188 = "AudioStreamInteractive";
  local_190 = (char *)0x0;
  local_180 = 0x16;
  String::parse_latin1((StrRange *)&local_190);
  StringName::StringName((StringName *)&local_188,(StrRange *)&local_190,false);
  StringName::operator=((StringName *)(pMVar7 + 0x18),(StringName *)&local_188);
  if ((StringName::configured != '\0') && (local_188 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_190);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_178,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_f8] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_178);
  D_METHOD<char_const*,char_const*>((char *)&local_178,"set_clip_name","clip_index");
  auStack_f0._0_16_ = (undefined1  [16])0x0;
  local_f8 = (Variant *)0x0;
  pMVar7 = create_method_bind<AudioStreamInteractive,int,StringName_const&>(set_clip_name);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_178,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_f8] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_178);
  puStack_140 = (undefined *)0x0;
  local_148 = "clip_index";
  local_f8 = pVVar8;
  D_METHODP((char *)&local_178,(char ***)"get_clip_name",uVar9);
  auStack_f0._0_16_ = (undefined1  [16])0x0;
  local_f8 = (Variant *)0x0;
  pMVar7 = create_method_bind<AudioStreamInteractive,StringName,int>(get_clip_name);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_178,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_f8] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_178);
  D_METHOD<char_const*,char_const*>((char *)&local_178,"set_clip_stream","clip_index");
  auStack_f0._0_16_ = (undefined1  [16])0x0;
  local_f8 = (Variant *)0x0;
  pMVar7 = create_method_bind<AudioStreamInteractive,int,Ref<AudioStream>const&>(set_clip_stream);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_178,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_f8] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_178);
  puStack_140 = (undefined *)0x0;
  local_148 = "clip_index";
  local_f8 = pVVar8;
  D_METHODP((char *)&local_178,(char ***)"get_clip_stream",uVar9);
  auStack_f0._0_16_ = (undefined1  [16])0x0;
  local_f8 = (Variant *)0x0;
  pMVar7 = create_method_bind<AudioStreamInteractive,Ref<AudioStream>,int>(get_clip_stream);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_178,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_f8] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_178);
  D_METHOD<char_const*,char_const*>((char *)&local_178,"set_clip_auto_advance","clip_index");
  auStack_f0._0_16_ = (undefined1  [16])0x0;
  local_f8 = (Variant *)0x0;
  pMVar7 = create_method_bind<AudioStreamInteractive,int,AudioStreamInteractive::AutoAdvanceMode>
                     (set_clip_auto_advance);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_178,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_f8] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_178);
  puStack_140 = (undefined *)0x0;
  local_148 = "clip_index";
  local_f8 = pVVar8;
  D_METHODP((char *)&local_178,(char ***)"get_clip_auto_advance",uVar9);
  auStack_f0._0_16_ = (undefined1  [16])0x0;
  local_f8 = (Variant *)0x0;
  pMVar7 = create_method_bind<AudioStreamInteractive,AudioStreamInteractive::AutoAdvanceMode,int>
                     (get_clip_auto_advance);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_178,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_f8] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_178);
  D_METHOD<char_const*,char_const*>
            ((char *)&local_178,"set_clip_auto_advance_next_clip","clip_index");
  auStack_f0._0_16_ = (undefined1  [16])0x0;
  local_f8 = (Variant *)0x0;
  pMVar7 = create_method_bind<AudioStreamInteractive,int,int>(set_clip_auto_advance_next_clip);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_178,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_f8] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_178);
  puStack_140 = (undefined *)0x0;
  local_148 = "clip_index";
  local_f8 = pVVar8;
  D_METHODP((char *)&local_178,(char ***)"get_clip_auto_advance_next_clip",uVar9);
  auStack_f0._0_16_ = (undefined1  [16])0x0;
  local_f8 = (Variant *)0x0;
  pMVar7 = create_method_bind<AudioStreamInteractive,int,int>(get_clip_auto_advance_next_clip);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_178,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_f8] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_178);
  _scs_create((char *)&local_190,true);
  _scs_create((char *)&local_198,true);
  local_1c0 = 0;
  local_178 = "";
  local_170 = 0;
  String::parse_latin1((StrRange *)&local_1c0);
  local_178 = "Add Clip";
  local_1c8 = 0;
  local_170 = 8;
  String::parse_latin1((StrRange *)&local_1c8);
  RTR((String *)&local_1b8,(String *)&local_1c8);
  operator+((char *)&local_1b0,
            (String *)
            "Clips,clip_,page_size=999,unfoldable,numbered,swap_method=_inspector_array_swap_clip,add_button_text="
           );
  StringName::StringName((StringName *)&local_1a0,(CowData<char32_t> *)&local_1b0,false);
  itos((long)local_1d8);
  operator+((char *)&local_1d0,(String *)&_LC126);
  local_1a8 = 0;
  local_178 = "clip_count";
  local_170 = 10;
  String::parse_latin1((StrRange *)&local_1a8);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_178,2,(StrRange *)&local_1a8,1,(CowData<char32_t> *)&local_1d0,
             0x40006,(StringName *)&local_1a0);
  local_1e0 = 0;
  local_188 = "AudioStreamInteractive";
  local_180 = 0x16;
  String::parse_latin1((StrRange *)&local_1e0);
  StringName::StringName((StringName *)&local_188,(StrRange *)&local_1e0,false);
  ClassDB::add_property
            ((StringName *)&local_188,(PropertyInfo *)&local_178,(StringName *)&local_198,
             (StringName *)&local_190,-1);
  if ((StringName::configured != '\0') && (local_188 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e0);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_178);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1d0);
  CowData<char32_t>::_unref(local_1d8);
  if ((StringName::configured != '\0') && (local_1a0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  if ((StringName::configured != '\0') &&
     (((local_198 == 0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_190 != (char *)0x0)))) {
    StringName::unref();
  }
  lVar12 = 0;
  do {
    iVar11 = (int)lVar12;
    _scs_create((char *)&local_190,true);
    _scs_create((char *)&local_198,true);
    local_178 = "";
    local_1a0 = 0;
    local_1a8 = 0;
    local_170 = 0;
    String::parse_latin1((StrRange *)&local_1a8);
    local_178 = "/name";
    local_1b8 = 0;
    local_170 = 5;
    String::parse_latin1((StrRange *)&local_1b8);
    itos((long)&local_1c8);
    operator+((char *)&local_1c0,(String *)"clip_");
    String::operator+((String *)&local_1b0,(String *)&local_1c0);
    local_178 = (char *)CONCAT44(local_178._4_4_,0x15);
    local_170 = 0;
    if (local_1b0 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_170,(CowData *)&local_1b0);
    }
    local_168 = (char *)0x0;
    local_160 = 0;
    local_158 = 0;
    if (local_1a8 == 0) {
LAB_00106633:
      local_150 = 0xe;
      StringName::operator=((StringName *)&local_168,(StringName *)&local_1a0);
    }
    else {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_158,(CowData *)&local_1a8);
      local_150 = 0xe;
      if (local_160 != 0x11) goto LAB_00106633;
      StringName::StringName((StringName *)&local_188,(CowData<char32_t> *)&local_158,false);
      if (local_168 == local_188) {
        if ((StringName::configured != '\0') && (local_188 != (char *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_168 = local_188;
      }
    }
    local_1d0 = 0;
    local_188 = "AudioStreamInteractive";
    local_180 = 0x16;
    String::parse_latin1((StrRange *)&local_1d0);
    StringName::StringName((StringName *)&local_188,(CowData<char32_t> *)&local_1d0,false);
    ClassDB::add_property
              ((StringName *)&local_188,(PropertyInfo *)&local_178,(StringName *)&local_198,
               (StringName *)&local_190,iVar11);
    if ((StringName::configured != '\0') && (local_188 != (char *)0x0)) {
      StringName::unref();
    }
    lVar6 = local_1d0;
    if (local_1d0 != 0) {
      LOCK();
      plVar1 = (long *)(local_1d0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_1d0 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
    lVar6 = local_158;
    if (local_158 != 0) {
      LOCK();
      plVar1 = (long *)(local_158 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_158 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
    if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
      StringName::unref();
    }
    lVar6 = local_170;
    if (local_170 != 0) {
      LOCK();
      plVar1 = (long *)(local_170 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_170 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
    lVar6 = local_1b0;
    if (local_1b0 != 0) {
      LOCK();
      plVar1 = (long *)(local_1b0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_1b0 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
    lVar6 = local_1c0;
    if (local_1c0 != 0) {
      LOCK();
      plVar1 = (long *)(local_1c0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_1c0 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
    lVar6 = local_1c8;
    if (local_1c8 != 0) {
      LOCK();
      plVar1 = (long *)(local_1c8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_1c8 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
    lVar6 = local_1b8;
    if (local_1b8 != 0) {
      LOCK();
      plVar1 = (long *)(local_1b8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_1b8 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
    lVar6 = local_1a8;
    if (local_1a8 != 0) {
      LOCK();
      plVar1 = (long *)(local_1a8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_1a8 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
    if ((((StringName::configured != '\0') &&
         ((local_1a0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
        ((local_198 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
       (local_190 != (char *)0x0)) {
      StringName::unref();
    }
    _scs_create((char *)&local_190,true);
    _scs_create((char *)&local_198,true);
    local_178 = "AudioStream";
    local_1a0 = 0;
    local_1a8 = 0;
    local_170 = 0xb;
    String::parse_latin1((StrRange *)&local_1a8);
    local_178 = "/stream";
    local_1b8 = 0;
    local_170 = 7;
    String::parse_latin1((StrRange *)&local_1b8);
    itos((long)&local_1c8);
    operator+((char *)&local_1c0,(String *)"clip_");
    String::operator+((String *)&local_1b0,(String *)&local_1c0);
    local_178 = (char *)CONCAT44(local_178._4_4_,0x18);
    local_170 = 0;
    if (local_1b0 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_170,(CowData *)&local_1b0);
    }
    local_168 = (char *)0x0;
    local_160 = 0x11;
    local_158 = 0;
    if (local_1a8 == 0) {
LAB_0010665b:
      local_150 = 0xe;
      StringName::StringName((StringName *)&local_188,(CowData<char32_t> *)&local_158,false);
      if (local_168 == local_188) {
        if ((StringName::configured != '\0') && (local_188 != (char *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_168 = local_188;
      }
    }
    else {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_158,(CowData *)&local_1a8);
      local_150 = 0xe;
      if (local_160 == 0x11) goto LAB_0010665b;
      StringName::operator=((StringName *)&local_168,(StringName *)&local_1a0);
    }
    local_1d0 = 0;
    local_188 = "AudioStreamInteractive";
    local_180 = 0x16;
    String::parse_latin1((StrRange *)&local_1d0);
    StringName::StringName((StringName *)&local_188,(CowData<char32_t> *)&local_1d0,false);
    ClassDB::add_property
              ((StringName *)&local_188,(PropertyInfo *)&local_178,(StringName *)&local_198,
               (StringName *)&local_190,iVar11);
    if ((StringName::configured != '\0') && (local_188 != (char *)0x0)) {
      StringName::unref();
    }
    lVar6 = local_1d0;
    if (local_1d0 != 0) {
      LOCK();
      plVar1 = (long *)(local_1d0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_1d0 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
    lVar6 = local_158;
    if (local_158 != 0) {
      LOCK();
      plVar1 = (long *)(local_158 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_158 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
    if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
      StringName::unref();
    }
    lVar6 = local_170;
    if (local_170 != 0) {
      LOCK();
      plVar1 = (long *)(local_170 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_170 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
    lVar6 = local_1b0;
    if (local_1b0 != 0) {
      LOCK();
      plVar1 = (long *)(local_1b0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_1b0 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
    lVar6 = local_1c0;
    if (local_1c0 != 0) {
      LOCK();
      plVar1 = (long *)(local_1c0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_1c0 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
    lVar6 = local_1c8;
    if (local_1c8 != 0) {
      LOCK();
      plVar1 = (long *)(local_1c8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_1c8 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
    lVar6 = local_1b8;
    if (local_1b8 != 0) {
      LOCK();
      plVar1 = (long *)(local_1b8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_1b8 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
    lVar6 = local_1a8;
    if (local_1a8 != 0) {
      LOCK();
      plVar1 = (long *)(local_1a8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_1a8 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
    if (((StringName::configured != '\0') &&
        ((local_1a0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
       (((local_198 == 0 || (StringName::unref(), StringName::configured != '\0')) &&
        (local_190 != (char *)0x0)))) {
      StringName::unref();
    }
    _scs_create((char *)&local_190,true);
    _scs_create((char *)&local_198,true);
    local_178 = "Disabled,Enabled,ReturnToHold";
    local_1a0 = 0;
    local_1a8 = 0;
    local_170 = 0x1d;
    String::parse_latin1((StrRange *)&local_1a8);
    local_178 = "/auto_advance";
    local_1b8 = 0;
    local_170 = 0xd;
    String::parse_latin1((StrRange *)&local_1b8);
    itos((long)&local_1c8);
    operator+((char *)&local_1c0,(String *)"clip_");
    String::operator+((String *)&local_1b0,(String *)&local_1c0);
    local_178 = (char *)CONCAT44(local_178._4_4_,2);
    local_170 = 0;
    if (local_1b0 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_170,(CowData *)&local_1b0);
    }
    local_168 = (char *)0x0;
    local_160 = 2;
    local_158 = 0;
    if (local_1a8 == 0) {
LAB_0010660b:
      local_150 = 0xe;
      StringName::operator=((StringName *)&local_168,(StringName *)&local_1a0);
    }
    else {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_158,(CowData *)&local_1a8);
      local_150 = 0xe;
      if (local_160 != 0x11) goto LAB_0010660b;
      StringName::StringName((StringName *)&local_188,(CowData<char32_t> *)&local_158,false);
      if (local_168 == local_188) {
        if ((StringName::configured != '\0') && (local_188 != (char *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_168 = local_188;
      }
    }
    local_1d0 = 0;
    local_188 = "AudioStreamInteractive";
    local_180 = 0x16;
    String::parse_latin1((StrRange *)&local_1d0);
    StringName::StringName((StringName *)&local_188,(CowData<char32_t> *)&local_1d0,false);
    ClassDB::add_property
              ((StringName *)&local_188,(PropertyInfo *)&local_178,(StringName *)&local_198,
               (StringName *)&local_190,iVar11);
    if ((StringName::configured != '\0') && (local_188 != (char *)0x0)) {
      StringName::unref();
    }
    lVar6 = local_1d0;
    if (local_1d0 != 0) {
      LOCK();
      plVar1 = (long *)(local_1d0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_1d0 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
    lVar6 = local_158;
    if (local_158 != 0) {
      LOCK();
      plVar1 = (long *)(local_158 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_158 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
    if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
      StringName::unref();
    }
    lVar6 = local_170;
    if (local_170 != 0) {
      LOCK();
      plVar1 = (long *)(local_170 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_170 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
    lVar6 = local_1b0;
    if (local_1b0 != 0) {
      LOCK();
      plVar1 = (long *)(local_1b0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_1b0 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
    lVar6 = local_1c0;
    if (local_1c0 != 0) {
      LOCK();
      plVar1 = (long *)(local_1c0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_1c0 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
    lVar6 = local_1c8;
    if (local_1c8 != 0) {
      LOCK();
      plVar1 = (long *)(local_1c8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_1c8 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
    lVar6 = local_1b8;
    if (local_1b8 != 0) {
      LOCK();
      plVar1 = (long *)(local_1b8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_1b8 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
    lVar6 = local_1a8;
    if (local_1a8 != 0) {
      LOCK();
      plVar1 = (long *)(local_1a8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_1a8 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
    if ((((StringName::configured != '\0') &&
         ((local_1a0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
        ((local_198 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
       (local_190 != (char *)0x0)) {
      StringName::unref();
    }
    _scs_create((char *)&local_190,true);
    _scs_create((char *)&local_198,true);
    local_178 = "";
    local_1a0 = 0;
    local_1a8 = 0;
    local_170 = 0;
    String::parse_latin1((StrRange *)&local_1a8);
    local_178 = "/next_clip";
    local_1b8 = 0;
    local_170 = 10;
    String::parse_latin1((StrRange *)&local_1b8);
    itos((long)&local_1c8);
    operator+((char *)&local_1c0,(String *)"clip_");
    String::operator+((String *)&local_1b0,(String *)&local_1c0);
    local_178 = (char *)CONCAT44(local_178._4_4_,2);
    local_170 = 0;
    if (local_1b0 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_170,(CowData *)&local_1b0);
    }
    local_168 = (char *)0x0;
    local_160 = 2;
    local_158 = 0;
    if (local_1a8 == 0) {
LAB_001065e6:
      local_150 = 0xe;
      StringName::operator=((StringName *)&local_168,(StringName *)&local_1a0);
    }
    else {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_158,(CowData *)&local_1a8);
      local_150 = 0xe;
      if (local_160 != 0x11) goto LAB_001065e6;
      StringName::StringName((StringName *)&local_188,(CowData<char32_t> *)&local_158,false);
      if (local_168 == local_188) {
        if ((StringName::configured != '\0') && (local_188 != (char *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_168 = local_188;
      }
    }
    local_1d0 = 0;
    local_188 = "AudioStreamInteractive";
    local_180 = 0x16;
    String::parse_latin1((StrRange *)&local_1d0);
    StringName::StringName((StringName *)&local_188,(CowData<char32_t> *)&local_1d0,false);
    ClassDB::add_property
              ((StringName *)&local_188,(PropertyInfo *)&local_178,(StringName *)&local_198,
               (StringName *)&local_190,iVar11);
    if ((StringName::configured != '\0') && (local_188 != (char *)0x0)) {
      StringName::unref();
    }
    lVar6 = local_1d0;
    if (local_1d0 != 0) {
      LOCK();
      plVar1 = (long *)(local_1d0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_1d0 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
    lVar6 = local_158;
    if (local_158 != 0) {
      LOCK();
      plVar1 = (long *)(local_158 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_158 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
    if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
      StringName::unref();
    }
    lVar6 = local_170;
    if (local_170 != 0) {
      LOCK();
      plVar1 = (long *)(local_170 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_170 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
    lVar6 = local_1b0;
    if (local_1b0 != 0) {
      LOCK();
      plVar1 = (long *)(local_1b0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_1b0 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
    lVar6 = local_1c0;
    if (local_1c0 != 0) {
      LOCK();
      plVar1 = (long *)(local_1c0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_1c0 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
    lVar6 = local_1c8;
    if (local_1c8 != 0) {
      LOCK();
      plVar1 = (long *)(local_1c8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_1c8 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
    lVar6 = local_1b8;
    if (local_1b8 != 0) {
      LOCK();
      plVar1 = (long *)(local_1b8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_1b8 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
    lVar6 = local_1a8;
    if (local_1a8 != 0) {
      LOCK();
      plVar1 = (long *)(local_1a8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_1a8 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
    if (((StringName::configured != '\0') &&
        ((local_1a0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
       (((local_198 == 0 || (StringName::unref(), StringName::configured != '\0')) &&
        (local_190 != (char *)0x0)))) {
      StringName::unref();
    }
    lVar12 = lVar12 + 1;
    if (lVar12 == 0x3f) {
      _scs_create((char *)&local_190,true);
      _scs_create((char *)&local_198,true);
      local_178 = "";
      local_1a0 = 0;
      local_1a8 = 0;
      local_170 = 0;
      String::parse_latin1((StrRange *)&local_1a8);
      local_178 = "initial_clip";
      local_1b0 = 0;
      local_170 = 0xc;
      String::parse_latin1((StrRange *)&local_1b0);
      PropertyInfo::PropertyInfo
                ((PropertyInfo *)&local_178,2,(CowData<char32_t> *)&local_1b0,2,
                 (StrRange *)&local_1a8,6,(StringName *)&local_1a0);
      local_188 = "AudioStreamInteractive";
      local_1b8 = 0;
      local_180 = 0x16;
      String::parse_latin1((StrRange *)&local_1b8);
      StringName::StringName((StringName *)&local_188,(String *)&local_1b8,false);
      ClassDB::add_property
                ((StringName *)&local_188,(PropertyInfo *)&local_178,(StringName *)&local_198,
                 (StringName *)&local_190,-1);
      if ((StringName::configured != '\0') && (local_188 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
      PropertyInfo::~PropertyInfo((PropertyInfo *)&local_178);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a8);
      if ((((StringName::configured != '\0') &&
           ((local_1a0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
          ((local_198 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
         (local_190 != (char *)0x0)) {
        StringName::unref();
      }
      local_100 = 0;
      local_148 = puVar4;
      puStack_140 = puVar5;
      local_138 = "from_time";
      pcStack_130 = "to_time";
      local_128 = "fade_mode";
      pcStack_120 = "fade_beats";
      local_108 = "hold_previous";
      local_118 = "use_filler_clip";
      pcStack_110 = "filler_clip";
      ppVVar10 = &local_f8;
      do {
        *ppVVar10 = pVVar8;
        pVVar8 = pVVar8 + 8;
        ppVVar10 = ppVVar10 + 1;
      } while (pVVar8 != (Variant *)&local_100);
      D_METHODP((char *)&local_178,(char ***)"add_transition",uVar9);
      Variant::Variant((Variant *)&local_a8,false);
      Variant::Variant(local_90,-1);
      Variant::Variant(local_78,false);
      pVVar8 = local_48;
      local_58 = (undefined1  [16])0x0;
      auStack_f0._8_8_ = local_78;
      auStack_f0._0_8_ = local_90;
      local_60 = 0;
      local_f8 = (Variant *)&local_a8;
      pMVar7 = create_method_bind<AudioStreamInteractive,int,int,AudioStreamInteractive::TransitionFromTime,AudioStreamInteractive::TransitionToTime,AudioStreamInteractive::FadeMode,float,bool,int,bool>
                         (add_transition);
      ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_178,&local_f8,3);
      do {
        pVVar2 = pVVar8 + -0x18;
        pVVar8 = pVVar8 + -0x18;
        if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
          Variant::_clear_internal();
        }
      } while (pVVar8 != (Variant *)&local_a8);
      MethodDefinition::~MethodDefinition((MethodDefinition *)&local_178);
      D_METHOD<char_const*,char_const*>((char *)&local_178,"has_transition","from_clip");
      local_a0 = (undefined1  [16])0x0;
      local_a8 = (Variant **)0x0;
      pMVar7 = create_method_bind<AudioStreamInteractive,bool,int,int>(has_transition);
      ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_178,(Variant **)0x0,0);
      if (Variant::needs_deinit[(int)local_a8] != '\0') {
        Variant::_clear_internal();
      }
      MethodDefinition::~MethodDefinition((MethodDefinition *)&local_178);
      D_METHOD<char_const*,char_const*>((char *)&local_178,"erase_transition","from_clip");
      local_a0 = (undefined1  [16])0x0;
      local_a8 = (Variant **)0x0;
      pMVar7 = create_method_bind<AudioStreamInteractive,int,int>(erase_transition);
      ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_178,(Variant **)0x0,0);
      if (Variant::needs_deinit[(int)local_a8] != '\0') {
        Variant::_clear_internal();
      }
      MethodDefinition::~MethodDefinition((MethodDefinition *)&local_178);
      D_METHODP((char *)&local_178,(char ***)"get_transition_list",0);
      local_a0 = (undefined1  [16])0x0;
      local_a8 = (Variant **)0x0;
      pMVar7 = create_method_bind<AudioStreamInteractive,Vector<int>>(get_transition_list);
      ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_178,(Variant **)0x0,0);
      if (Variant::needs_deinit[(int)local_a8] != '\0') {
        Variant::_clear_internal();
      }
      MethodDefinition::~MethodDefinition((MethodDefinition *)&local_178);
      D_METHOD<char_const*,char_const*>((char *)&local_178,"get_transition_from_time","from_clip");
      local_a0 = (undefined1  [16])0x0;
      local_a8 = (Variant **)0x0;
      pMVar7 = create_method_bind<AudioStreamInteractive,AudioStreamInteractive::TransitionFromTime,int,int>
                         (get_transition_from_time);
      ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_178,(Variant **)0x0,0);
      if (Variant::needs_deinit[(int)local_a8] != '\0') {
        Variant::_clear_internal();
      }
      MethodDefinition::~MethodDefinition((MethodDefinition *)&local_178);
      D_METHOD<char_const*,char_const*>((char *)&local_178,"get_transition_to_time","from_clip");
      local_a0 = (undefined1  [16])0x0;
      local_a8 = (Variant **)0x0;
      pMVar7 = create_method_bind<AudioStreamInteractive,AudioStreamInteractive::TransitionToTime,int,int>
                         (get_transition_to_time);
      ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_178,(Variant **)0x0,0);
      if (Variant::needs_deinit[(int)local_a8] != '\0') {
        Variant::_clear_internal();
      }
      MethodDefinition::~MethodDefinition((MethodDefinition *)&local_178);
      D_METHOD<char_const*,char_const*>((char *)&local_178,"get_transition_fade_mode","from_clip");
      local_a0 = (undefined1  [16])0x0;
      local_a8 = (Variant **)0x0;
      pMVar7 = create_method_bind<AudioStreamInteractive,AudioStreamInteractive::FadeMode,int,int>
                         (get_transition_fade_mode);
      ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_178,(Variant **)0x0,0);
      if (Variant::needs_deinit[(int)local_a8] != '\0') {
        Variant::_clear_internal();
      }
      MethodDefinition::~MethodDefinition((MethodDefinition *)&local_178);
      D_METHOD<char_const*,char_const*>((char *)&local_178,"get_transition_fade_beats","from_clip");
      local_a0 = (undefined1  [16])0x0;
      local_a8 = (Variant **)0x0;
      pMVar7 = create_method_bind<AudioStreamInteractive,float,int,int>(get_transition_fade_beats);
      ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_178,(Variant **)0x0,0);
      if (Variant::needs_deinit[(int)local_a8] != '\0') {
        Variant::_clear_internal();
      }
      MethodDefinition::~MethodDefinition((MethodDefinition *)&local_178);
      D_METHOD<char_const*,char_const*>
                ((char *)&local_178,"is_transition_using_filler_clip","from_clip");
      local_a0 = (undefined1  [16])0x0;
      local_a8 = (Variant **)0x0;
      pMVar7 = create_method_bind<AudioStreamInteractive,bool,int,int>
                         (is_transition_using_filler_clip);
      ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_178,(Variant **)0x0,0);
      if (Variant::needs_deinit[(int)local_a8] != '\0') {
        Variant::_clear_internal();
      }
      MethodDefinition::~MethodDefinition((MethodDefinition *)&local_178);
      D_METHOD<char_const*,char_const*>((char *)&local_178,"get_transition_filler_clip","from_clip")
      ;
      local_a0 = (undefined1  [16])0x0;
      local_a8 = (Variant **)0x0;
      pMVar7 = create_method_bind<AudioStreamInteractive,int,int,int>(get_transition_filler_clip);
      ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_178,(Variant **)0x0,0);
      if (Variant::needs_deinit[(int)local_a8] != '\0') {
        Variant::_clear_internal();
      }
      MethodDefinition::~MethodDefinition((MethodDefinition *)&local_178);
      D_METHOD<char_const*,char_const*>
                ((char *)&local_178,"is_transition_holding_previous","from_clip");
      local_a0 = (undefined1  [16])0x0;
      local_a8 = (Variant **)0x0;
      pMVar7 = create_method_bind<AudioStreamInteractive,bool,int,int>
                         (is_transition_holding_previous);
      ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_178,(Variant **)0x0,0);
      if (Variant::needs_deinit[(int)local_a8] != '\0') {
        Variant::_clear_internal();
      }
      MethodDefinition::~MethodDefinition((MethodDefinition *)&local_178);
      local_f8 = (Variant *)0x10d0e8;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = auStack_f0._8_8_;
      auStack_f0._0_16_ = auVar3 << 0x40;
      local_a8 = &local_f8;
      D_METHODP((char *)&local_178,(char ***)"_set_transitions",(uint)(Variant *)&local_a8);
      local_a0 = (undefined1  [16])0x0;
      local_a8 = (Variant **)0x0;
      pMVar7 = create_method_bind<AudioStreamInteractive,Dictionary_const&>(_set_transitions);
      ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_178,(Variant **)0x0,0);
      if (Variant::needs_deinit[(int)local_a8] != '\0') {
        Variant::_clear_internal();
      }
      MethodDefinition::~MethodDefinition((MethodDefinition *)&local_178);
      D_METHODP((char *)&local_178,(char ***)"_get_transitions",0);
      local_a0 = (undefined1  [16])0x0;
      local_a8 = (Variant **)0x0;
      pMVar7 = create_method_bind<AudioStreamInteractive,Dictionary>(_get_transitions);
      ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_178,(Variant **)0x0,0);
      if (Variant::needs_deinit[(int)local_a8] != '\0') {
        Variant::_clear_internal();
      }
      MethodDefinition::~MethodDefinition((MethodDefinition *)&local_178);
      _scs_create((char *)&local_190,true);
      _scs_create((char *)&local_198,true);
      local_178 = "";
      local_1a0 = 0;
      local_1a8 = 0;
      local_170 = 0;
      String::parse_latin1((StrRange *)&local_1a8);
      local_178 = "_transitions";
      local_1b0 = 0;
      local_170 = 0xc;
      String::parse_latin1((StrRange *)&local_1b0);
      PropertyInfo::PropertyInfo
                ((PropertyInfo *)&local_178,0x1b,(CowData<char32_t> *)&local_1b0,0,
                 (StrRange *)&local_1a8,10,(StringName *)&local_1a0);
      local_188 = "AudioStreamInteractive";
      local_1b8 = 0;
      local_180 = 0x16;
      String::parse_latin1((StrRange *)&local_1b8);
      StringName::StringName((StringName *)&local_188,(String *)&local_1b8,false);
      ClassDB::add_property
                ((StringName *)&local_188,(PropertyInfo *)&local_178,(StringName *)&local_198,
                 (StringName *)&local_190,-1);
      if ((StringName::configured != '\0') && (local_188 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
      PropertyInfo::~PropertyInfo((PropertyInfo *)&local_178);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a8);
      if ((((StringName::configured != '\0') &&
           ((local_1a0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
          ((local_198 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
         (local_190 != (char *)0x0)) {
        StringName::unref();
      }
      StringName::StringName((StringName *)&local_188,"TRANSITION_FROM_TIME_IMMEDIATE",false);
      local_198 = 0;
      local_178 = "TRANSITION_FROM_TIME_IMMEDIATE";
      local_170 = 0x1e;
      String::parse_latin1((StrRange *)&local_198);
      GetTypeInfo<AudioStreamInteractive::TransitionFromTime,void>::get_class_info
                ((GetTypeInfo<AudioStreamInteractive::TransitionFromTime,void> *)&local_178);
      local_190 = local_168;
      local_168 = (char *)0x0;
      PropertyInfo::~PropertyInfo((PropertyInfo *)&local_178);
      local_178 = "AudioStreamInteractive";
      local_1a0 = 0;
      local_170 = 0x16;
      String::parse_latin1((StrRange *)&local_1a0);
      StringName::StringName((StringName *)&local_178,(StringName *)&local_1a0,false);
      ClassDB::bind_integer_constant
                ((StringName *)&local_178,(StringName *)&local_190,(StringName *)&local_188,0,false)
      ;
      if ((StringName::configured != '\0') && (local_178 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a0);
      if ((StringName::configured != '\0') && (local_190 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
      if ((StringName::configured != '\0') && (local_188 != (char *)0x0)) {
        StringName::unref();
      }
      StringName::StringName((StringName *)&local_188,"TRANSITION_FROM_TIME_NEXT_BEAT",false);
      local_198 = 0;
      local_178 = "TRANSITION_FROM_TIME_NEXT_BEAT";
      local_170 = 0x1e;
      String::parse_latin1((StrRange *)&local_198);
      GetTypeInfo<AudioStreamInteractive::TransitionFromTime,void>::get_class_info
                ((GetTypeInfo<AudioStreamInteractive::TransitionFromTime,void> *)&local_178);
      local_190 = local_168;
      local_168 = (char *)0x0;
      PropertyInfo::~PropertyInfo((PropertyInfo *)&local_178);
      local_178 = "AudioStreamInteractive";
      local_1a0 = 0;
      local_170 = 0x16;
      String::parse_latin1((StrRange *)&local_1a0);
      StringName::StringName((StringName *)&local_178,(StringName *)&local_1a0,false);
      ClassDB::bind_integer_constant
                ((StringName *)&local_178,(StringName *)&local_190,(StringName *)&local_188,1,false)
      ;
      if ((StringName::configured != '\0') && (local_178 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a0);
      if ((StringName::configured != '\0') && (local_190 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
      if ((StringName::configured != '\0') && (local_188 != (char *)0x0)) {
        StringName::unref();
      }
      StringName::StringName((StringName *)&local_188,"TRANSITION_FROM_TIME_NEXT_BAR",false);
      local_198 = 0;
      local_178 = "TRANSITION_FROM_TIME_NEXT_BAR";
      local_170 = 0x1d;
      String::parse_latin1((StrRange *)&local_198);
      GetTypeInfo<AudioStreamInteractive::TransitionFromTime,void>::get_class_info
                ((GetTypeInfo<AudioStreamInteractive::TransitionFromTime,void> *)&local_178);
      local_190 = local_168;
      local_168 = (char *)0x0;
      PropertyInfo::~PropertyInfo((PropertyInfo *)&local_178);
      local_178 = "AudioStreamInteractive";
      local_1a0 = 0;
      local_170 = 0x16;
      String::parse_latin1((StrRange *)&local_1a0);
      StringName::StringName((StringName *)&local_178,(StringName *)&local_1a0,false);
      ClassDB::bind_integer_constant
                ((StringName *)&local_178,(StringName *)&local_190,(StringName *)&local_188,2,false)
      ;
      if ((StringName::configured != '\0') && (local_178 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a0);
      if ((StringName::configured != '\0') && (local_190 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
      if ((StringName::configured != '\0') && (local_188 != (char *)0x0)) {
        StringName::unref();
      }
      StringName::StringName((StringName *)&local_188,"TRANSITION_FROM_TIME_END",false);
      local_198 = 0;
      local_178 = "TRANSITION_FROM_TIME_END";
      local_170 = 0x18;
      String::parse_latin1((StrRange *)&local_198);
      GetTypeInfo<AudioStreamInteractive::TransitionFromTime,void>::get_class_info
                ((GetTypeInfo<AudioStreamInteractive::TransitionFromTime,void> *)&local_178);
      local_190 = local_168;
      local_168 = (char *)0x0;
      PropertyInfo::~PropertyInfo((PropertyInfo *)&local_178);
      local_178 = "AudioStreamInteractive";
      local_1a0 = 0;
      local_170 = 0x16;
      String::parse_latin1((StrRange *)&local_1a0);
      StringName::StringName((StringName *)&local_178,(StringName *)&local_1a0,false);
      ClassDB::bind_integer_constant
                ((StringName *)&local_178,(StringName *)&local_190,(StringName *)&local_188,3,false)
      ;
      if ((StringName::configured != '\0') && (local_178 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a0);
      if ((StringName::configured != '\0') && (local_190 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
      if ((StringName::configured != '\0') && (local_188 != (char *)0x0)) {
        StringName::unref();
      }
      StringName::StringName((StringName *)&local_188,"TRANSITION_TO_TIME_SAME_POSITION",false);
      local_198 = 0;
      local_178 = "TRANSITION_TO_TIME_SAME_POSITION";
      local_170 = 0x20;
      String::parse_latin1((StrRange *)&local_198);
      GetTypeInfo<AudioStreamInteractive::TransitionToTime,void>::get_class_info
                ((GetTypeInfo<AudioStreamInteractive::TransitionToTime,void> *)&local_178);
      local_190 = local_168;
      local_168 = (char *)0x0;
      PropertyInfo::~PropertyInfo((PropertyInfo *)&local_178);
      local_178 = "AudioStreamInteractive";
      local_1a0 = 0;
      local_170 = 0x16;
      String::parse_latin1((StrRange *)&local_1a0);
      StringName::StringName((StringName *)&local_178,(StringName *)&local_1a0,false);
      ClassDB::bind_integer_constant
                ((StringName *)&local_178,(StringName *)&local_190,(StringName *)&local_188,0,false)
      ;
      if ((StringName::configured != '\0') && (local_178 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a0);
      if ((StringName::configured != '\0') && (local_190 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
      if ((StringName::configured != '\0') && (local_188 != (char *)0x0)) {
        StringName::unref();
      }
      StringName::StringName((StringName *)&local_188,"TRANSITION_TO_TIME_START",false);
      local_198 = 0;
      local_178 = "TRANSITION_TO_TIME_START";
      local_170 = 0x18;
      String::parse_latin1((StrRange *)&local_198);
      GetTypeInfo<AudioStreamInteractive::TransitionToTime,void>::get_class_info
                ((GetTypeInfo<AudioStreamInteractive::TransitionToTime,void> *)&local_178);
      local_190 = local_168;
      local_168 = (char *)0x0;
      PropertyInfo::~PropertyInfo((PropertyInfo *)&local_178);
      local_178 = "AudioStreamInteractive";
      local_1a0 = 0;
      local_170 = 0x16;
      String::parse_latin1((StrRange *)&local_1a0);
      StringName::StringName((StringName *)&local_178,(StringName *)&local_1a0,false);
      ClassDB::bind_integer_constant
                ((StringName *)&local_178,(StringName *)&local_190,(StringName *)&local_188,1,false)
      ;
      if ((StringName::configured != '\0') && (local_178 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a0);
      if ((StringName::configured != '\0') && (local_190 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
      if ((StringName::configured != '\0') && (local_188 != (char *)0x0)) {
        StringName::unref();
      }
      StringName::StringName((StringName *)&local_188,"FADE_DISABLED",false);
      local_198 = 0;
      local_178 = "FADE_DISABLED";
      local_170 = 0xd;
      String::parse_latin1((StrRange *)&local_198);
      GetTypeInfo<AudioStreamInteractive::FadeMode,void>::get_class_info
                ((GetTypeInfo<AudioStreamInteractive::FadeMode,void> *)&local_178);
      local_190 = local_168;
      local_168 = (char *)0x0;
      PropertyInfo::~PropertyInfo((PropertyInfo *)&local_178);
      local_178 = "AudioStreamInteractive";
      local_1a0 = 0;
      local_170 = 0x16;
      String::parse_latin1((StrRange *)&local_1a0);
      StringName::StringName((StringName *)&local_178,(StringName *)&local_1a0,false);
      ClassDB::bind_integer_constant
                ((StringName *)&local_178,(StringName *)&local_190,(StringName *)&local_188,0,false)
      ;
      if ((StringName::configured != '\0') && (local_178 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a0);
      if ((StringName::configured != '\0') && (local_190 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
      if ((StringName::configured != '\0') && (local_188 != (char *)0x0)) {
        StringName::unref();
      }
      StringName::StringName((StringName *)&local_188,"FADE_IN",false);
      local_198 = 0;
      local_178 = "FADE_IN";
      local_170 = 7;
      String::parse_latin1((StrRange *)&local_198);
      GetTypeInfo<AudioStreamInteractive::FadeMode,void>::get_class_info
                ((GetTypeInfo<AudioStreamInteractive::FadeMode,void> *)&local_178);
      local_190 = local_168;
      local_168 = (char *)0x0;
      PropertyInfo::~PropertyInfo((PropertyInfo *)&local_178);
      local_178 = "AudioStreamInteractive";
      local_1a0 = 0;
      local_170 = 0x16;
      String::parse_latin1((StrRange *)&local_1a0);
      StringName::StringName((StringName *)&local_178,(StringName *)&local_1a0,false);
      ClassDB::bind_integer_constant
                ((StringName *)&local_178,(StringName *)&local_190,(StringName *)&local_188,1,false)
      ;
      if ((StringName::configured != '\0') && (local_178 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a0);
      if ((StringName::configured != '\0') && (local_190 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
      if ((StringName::configured != '\0') && (local_188 != (char *)0x0)) {
        StringName::unref();
      }
      StringName::StringName((StringName *)&local_188,"FADE_OUT",false);
      local_198 = 0;
      local_178 = "FADE_OUT";
      local_170 = 8;
      String::parse_latin1((StrRange *)&local_198);
      GetTypeInfo<AudioStreamInteractive::FadeMode,void>::get_class_info
                ((GetTypeInfo<AudioStreamInteractive::FadeMode,void> *)&local_178);
      local_190 = local_168;
      local_168 = (char *)0x0;
      PropertyInfo::~PropertyInfo((PropertyInfo *)&local_178);
      local_178 = "AudioStreamInteractive";
      local_1a0 = 0;
      local_170 = 0x16;
      String::parse_latin1((StrRange *)&local_1a0);
      StringName::StringName((StringName *)&local_178,(StringName *)&local_1a0,false);
      ClassDB::bind_integer_constant
                ((StringName *)&local_178,(StringName *)&local_190,(StringName *)&local_188,2,false)
      ;
      if ((StringName::configured != '\0') && (local_178 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a0);
      if ((StringName::configured != '\0') && (local_190 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
      if ((StringName::configured != '\0') && (local_188 != (char *)0x0)) {
        StringName::unref();
      }
      StringName::StringName((StringName *)&local_188,"FADE_CROSS",false);
      local_198 = 0;
      local_178 = "FADE_CROSS";
      local_170 = 10;
      String::parse_latin1((StrRange *)&local_198);
      GetTypeInfo<AudioStreamInteractive::FadeMode,void>::get_class_info
                ((GetTypeInfo<AudioStreamInteractive::FadeMode,void> *)&local_178);
      local_190 = local_168;
      local_168 = (char *)0x0;
      PropertyInfo::~PropertyInfo((PropertyInfo *)&local_178);
      local_178 = "AudioStreamInteractive";
      local_1a0 = 0;
      local_170 = 0x16;
      String::parse_latin1((StrRange *)&local_1a0);
      StringName::StringName((StringName *)&local_178,(StringName *)&local_1a0,false);
      ClassDB::bind_integer_constant
                ((StringName *)&local_178,(StringName *)&local_190,(StringName *)&local_188,3,false)
      ;
      if ((StringName::configured != '\0') && (local_178 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a0);
      if ((StringName::configured != '\0') && (local_190 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
      if ((StringName::configured != '\0') && (local_188 != (char *)0x0)) {
        StringName::unref();
      }
      StringName::StringName((StringName *)&local_188,"FADE_AUTOMATIC",false);
      local_198 = 0;
      local_178 = "FADE_AUTOMATIC";
      local_170 = 0xe;
      String::parse_latin1((StrRange *)&local_198);
      GetTypeInfo<AudioStreamInteractive::FadeMode,void>::get_class_info
                ((GetTypeInfo<AudioStreamInteractive::FadeMode,void> *)&local_178);
      local_190 = local_168;
      local_168 = (char *)0x0;
      PropertyInfo::~PropertyInfo((PropertyInfo *)&local_178);
      local_178 = "AudioStreamInteractive";
      local_1a0 = 0;
      local_170 = 0x16;
      String::parse_latin1((StrRange *)&local_1a0);
      StringName::StringName((StringName *)&local_178,(StringName *)&local_1a0,false);
      ClassDB::bind_integer_constant
                ((StringName *)&local_178,(StringName *)&local_190,(StringName *)&local_188,4,false)
      ;
      if ((StringName::configured != '\0') && (local_178 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a0);
      if ((StringName::configured != '\0') && (local_190 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
      if ((StringName::configured != '\0') && (local_188 != (char *)0x0)) {
        StringName::unref();
      }
      StringName::StringName((StringName *)&local_188,"AUTO_ADVANCE_DISABLED",false);
      local_198 = 0;
      local_178 = "AUTO_ADVANCE_DISABLED";
      local_170 = 0x15;
      String::parse_latin1((StrRange *)&local_198);
      GetTypeInfo<AudioStreamInteractive::AutoAdvanceMode,void>::get_class_info
                ((GetTypeInfo<AudioStreamInteractive::AutoAdvanceMode,void> *)&local_178);
      local_190 = local_168;
      local_168 = (char *)0x0;
      PropertyInfo::~PropertyInfo((PropertyInfo *)&local_178);
      local_178 = "AudioStreamInteractive";
      local_1a0 = 0;
      local_170 = 0x16;
      String::parse_latin1((StrRange *)&local_1a0);
      StringName::StringName((StringName *)&local_178,(StringName *)&local_1a0,false);
      ClassDB::bind_integer_constant
                ((StringName *)&local_178,(StringName *)&local_190,(StringName *)&local_188,0,false)
      ;
      if ((StringName::configured != '\0') && (local_178 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a0);
      if ((StringName::configured != '\0') && (local_190 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
      if ((StringName::configured != '\0') && (local_188 != (char *)0x0)) {
        StringName::unref();
      }
      StringName::StringName((StringName *)&local_188,"AUTO_ADVANCE_ENABLED",false);
      local_198 = 0;
      local_178 = "AUTO_ADVANCE_ENABLED";
      local_170 = 0x14;
      String::parse_latin1((StrRange *)&local_198);
      GetTypeInfo<AudioStreamInteractive::AutoAdvanceMode,void>::get_class_info
                ((GetTypeInfo<AudioStreamInteractive::AutoAdvanceMode,void> *)&local_178);
      local_190 = local_168;
      local_168 = (char *)0x0;
      PropertyInfo::~PropertyInfo((PropertyInfo *)&local_178);
      local_178 = "AudioStreamInteractive";
      local_1a0 = 0;
      local_170 = 0x16;
      String::parse_latin1((StrRange *)&local_1a0);
      StringName::StringName((StringName *)&local_178,(StringName *)&local_1a0,false);
      ClassDB::bind_integer_constant
                ((StringName *)&local_178,(StringName *)&local_190,(StringName *)&local_188,1,false)
      ;
      if ((StringName::configured != '\0') && (local_178 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a0);
      if ((StringName::configured != '\0') && (local_190 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
      if ((StringName::configured != '\0') && (local_188 != (char *)0x0)) {
        StringName::unref();
      }
      StringName::StringName((StringName *)&local_188,"AUTO_ADVANCE_RETURN_TO_HOLD",false);
      local_198 = 0;
      local_178 = "AUTO_ADVANCE_RETURN_TO_HOLD";
      local_170 = 0x1b;
      String::parse_latin1((StrRange *)&local_198);
      GetTypeInfo<AudioStreamInteractive::AutoAdvanceMode,void>::get_class_info
                ((GetTypeInfo<AudioStreamInteractive::AutoAdvanceMode,void> *)&local_178);
      local_190 = local_168;
      local_168 = (char *)0x0;
      PropertyInfo::~PropertyInfo((PropertyInfo *)&local_178);
      local_178 = "AudioStreamInteractive";
      local_1a0 = 0;
      local_170 = 0x16;
      String::parse_latin1((StrRange *)&local_1a0);
      StringName::StringName((StringName *)&local_178,(StringName *)&local_1a0,false);
      ClassDB::bind_integer_constant
                ((StringName *)&local_178,(StringName *)&local_190,(StringName *)&local_188,2,false)
      ;
      if ((StringName::configured != '\0') && (local_178 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a0);
      if ((StringName::configured != '\0') && (local_190 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
      if ((StringName::configured != '\0') && (local_188 != (char *)0x0)) {
        StringName::unref();
      }
      StringName::StringName((StringName *)&local_188,"CLIP_ANY",false);
      local_178 = "AudioStreamInteractive";
      local_190 = (char *)0x0;
      local_198 = 0;
      local_170 = 0x16;
      String::parse_latin1((StrRange *)&local_198);
      StringName::StringName((StringName *)&local_178,(StrRange *)&local_198,false);
      ClassDB::bind_integer_constant
                ((StringName *)&local_178,(StringName *)&local_190,(StringName *)&local_188,-1,false
                );
      if ((StringName::configured != '\0') && (local_178 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
      if ((StringName::configured != '\0') &&
         (((local_190 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
          (local_188 != (char *)0x0)))) {
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



/* CowData<String>::_ref(CowData<String> const&) [clone .part.0] */

void __thiscall CowData<String>::_ref(CowData<String> *this,CowData *param_1)

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



/* AudioStreamInteractive::_get_linked_undo_properties(String const&, Variant const&) const */

String * AudioStreamInteractive::_get_linked_undo_properties(String *param_1,Variant *param_2)

{
  char cVar1;
  int iVar2;
  Variant *in_RCX;
  String *in_RDX;
  int iVar3;
  Variant *pVVar4;
  long in_FS_OFFSET;
  CowData<char32_t> local_70 [8];
  String local_68 [8];
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(param_1 + 8) = 0;
  cVar1 = String::begins_with((char *)in_RDX);
  if (cVar1 != '\0') {
    cVar1 = String::ends_with((char *)in_RDX);
    if (cVar1 != '\0') {
      String::get_slicec((wchar32)(CowData<char32_t> *)&local_58,(int)in_RDX);
      iVar2 = String::to_int();
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      if (iVar2 < *(int *)(param_2 + 0x980)) {
        local_60 = 0;
        local_58 = "/name";
        local_50 = 5;
        String::parse_latin1((StrRange *)&local_60);
        itos((long)local_70);
        operator+((char *)local_68,(String *)"clip_");
        String::operator+((String *)&local_58,local_68);
        Vector<String>::push_back((Vector<String> *)param_1,(CowData<char32_t> *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
        CowData<char32_t>::_unref(local_70);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      }
    }
  }
  cVar1 = String::operator==(in_RDX,"clip_count");
  if (cVar1 != '\0') {
    iVar2 = Variant::operator_cast_to_int(in_RCX);
    if (iVar2 < *(int *)(param_2 + 0x980)) {
      if (0 < *(int *)(param_2 + 0x980)) {
        pVVar4 = param_2 + 0x374;
        iVar3 = 0;
        do {
          if (iVar2 <= *(int *)pVVar4) {
            local_58 = "/auto_advance";
            local_60 = 0;
            local_50 = 0xd;
            String::parse_latin1((StrRange *)&local_60);
            itos((long)local_70);
            operator+((char *)local_68,(String *)"clip_");
            String::operator+((String *)&local_58,local_68);
            Vector<String>::push_back((Vector<String> *)param_1,(String *)&local_58);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
            CowData<char32_t>::_unref(local_70);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
            local_58 = "/next_clip";
            local_60 = 0;
            local_50 = 10;
            String::parse_latin1((StrRange *)&local_60);
            itos((long)local_70);
            operator+((char *)local_68,(String *)"clip_");
            String::operator+((String *)&local_58,local_68);
            Vector<String>::push_back((Vector<String> *)param_1,(String *)&local_58);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
            CowData<char32_t>::_unref(local_70);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          }
          iVar3 = iVar3 + 1;
          pVVar4 = pVVar4 + 0x18;
        } while (iVar3 < *(int *)(param_2 + 0x980));
      }
      local_58 = "_transitions";
      local_60 = 0;
      local_50 = 0xc;
      String::parse_latin1((StrRange *)&local_60);
      Vector<String>::push_back((Vector<String> *)param_1,(StrRange *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (iVar2 <= *(int *)(param_2 + 0x350)) {
        local_60 = 0;
        local_58 = "initial_clip";
        local_50 = 0xc;
        String::parse_latin1((StrRange *)&local_60);
        Vector<String>::push_back((Vector<String> *)param_1,(StrRange *)&local_60);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AudioStreamInteractive::add_transition(int, int, AudioStreamInteractive::TransitionFromTime,
   AudioStreamInteractive::TransitionToTime, AudioStreamInteractive::FadeMode, float, bool, int,
   bool) */

void __thiscall
AudioStreamInteractive::add_transition
          (uint param_1_00,AudioStreamInteractive *this,int param_1,int param_2,uint param_5,
          uint param_6,uint param_7,undefined1 param_8,uint param_9,undefined1 param_10)

{
  long *plVar1;
  uint *puVar2;
  char *pcVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  int local_48;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 < -1) || (*(int *)(this + 0x980) <= param_1)) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar4 = 0xf9;
      pcVar3 = "Condition \"p_from_clip < CLIP_ANY || p_from_clip >= clip_count\" is true.";
LAB_00108cee:
      _err_print_error("add_transition","modules/interactive_music/audio_stream_interactive.cpp",
                       uVar4,pcVar3,0,0);
      return;
    }
  }
  else if ((param_2 < *(int *)(this + 0x980)) && (-2 < param_2)) {
    if ((int)param_5 < 4) {
      if ((int)param_6 < 3) {
        if ((int)param_7 < 5) {
          local_48 = param_1;
          local_44 = param_2;
          plVar1 = (long *)AudioDriver::get_singleton();
          (**(code **)(*plVar1 + 0x38))(plVar1);
          puVar2 = (uint *)HashMap<AudioStreamInteractive::TransitionKey,AudioStreamInteractive::Transition,AudioStreamInteractive::TransitionKeyHasher,HashMapComparatorDefault<AudioStreamInteractive::TransitionKey>,DefaultTypedAllocator<HashMapElement<AudioStreamInteractive::TransitionKey,AudioStreamInteractive::Transition>>>
                           ::operator[]((HashMap<AudioStreamInteractive::TransitionKey,AudioStreamInteractive::Transition,AudioStreamInteractive::TransitionKeyHasher,HashMapComparatorDefault<AudioStreamInteractive::TransitionKey>,DefaultTypedAllocator<HashMapElement<AudioStreamInteractive::TransitionKey,AudioStreamInteractive::Transition>>>
                                         *)(this + 0x948),(TransitionKey *)&local_48);
          *puVar2 = param_5;
          puVar2[1] = param_6;
          puVar2[2] = param_7;
          *(undefined1 *)(puVar2 + 4) = param_8;
          puVar2[5] = param_9;
          *(undefined1 *)(puVar2 + 6) = param_10;
          puVar2[3] = param_1_00;
          plVar1 = (long *)AudioDriver::get_singleton();
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00108c58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar1 + 0x40))();
            return;
          }
          goto LAB_00108dcd;
        }
        _err_print_index_error
                  ("add_transition","modules/interactive_music/audio_stream_interactive.cpp",0xfd,
                   (ulong)param_7,5,"p_fade_mode","FADE_MAX","",false,false);
      }
      else {
        _err_print_index_error
                  ("add_transition","modules/interactive_music/audio_stream_interactive.cpp",0xfc,
                   (ulong)param_6,3,"p_to_time","TRANSITION_TO_TIME_MAX","",false,false);
      }
    }
    else {
      _err_print_index_error
                ("add_transition","modules/interactive_music/audio_stream_interactive.cpp",0xfb,
                 (ulong)param_5,4,"p_from_time","TRANSITION_FROM_TIME_MAX","",false,false);
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    uVar4 = 0xfa;
    pcVar3 = "Condition \"p_to_clip < CLIP_ANY || p_to_clip >= clip_count\" is true.";
    goto LAB_00108cee;
  }
LAB_00108dcd:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AudioStreamInteractive::_set_transitions(Dictionary const&) */

void __thiscall
AudioStreamInteractive::_set_transitions(AudioStreamInteractive *this,Dictionary *param_1)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  Variant *pVVar9;
  Variant *this_00;
  long in_FS_OFFSET;
  AudioStreamInteractive *pAVar10;
  int local_e0;
  long *local_c8;
  Variant local_c0 [8];
  int local_b8 [8];
  int local_98 [8];
  int local_78 [8];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_c8 = (long *)0x0;
  Dictionary::get_key_list((List *)param_1);
  if ((local_c8 != (long *)0x0) && (this_00 = (Variant *)*local_c8, this_00 != (Variant *)0x0)) {
    do {
      uVar8 = Variant::operator_cast_to_Vector2i(this_00);
      Dictionary::operator[]((Variant *)param_1);
      Variant::operator_cast_to_Dictionary(local_c0);
      Variant::Variant((Variant *)local_58,"from_time");
      cVar2 = Dictionary::has(local_c0);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (cVar2 == '\0') {
        _err_print_error("_set_transitions","modules/interactive_music/audio_stream_interactive.cpp"
                         ,0xb5,"Condition \"!data.has(\"from_time\")\" is true. Continuing.",0,0);
      }
      else {
        Variant::Variant((Variant *)local_58,"to_time");
        cVar2 = Dictionary::has(local_c0);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (cVar2 == '\0') {
          _err_print_error("_set_transitions",
                           "modules/interactive_music/audio_stream_interactive.cpp",0xb6,
                           "Condition \"!data.has(\"to_time\")\" is true. Continuing.",0,0);
        }
        else {
          Variant::Variant((Variant *)local_58,"fade_mode");
          cVar2 = Dictionary::has(local_c0);
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          if (cVar2 == '\0') {
            _err_print_error("_set_transitions",
                             "modules/interactive_music/audio_stream_interactive.cpp",0xb7,
                             "Condition \"!data.has(\"fade_mode\")\" is true. Continuing.",0,0);
          }
          else {
            Variant::Variant((Variant *)local_58,"fade_beats");
            cVar2 = Dictionary::has(local_c0);
            if (Variant::needs_deinit[local_58[0]] != '\0') {
              Variant::_clear_internal();
            }
            if (cVar2 == '\0') {
              _err_print_error("_set_transitions",
                               "modules/interactive_music/audio_stream_interactive.cpp",0xb8,
                               "Condition \"!data.has(\"fade_beats\")\" is true. Continuing.",0,0);
            }
            else {
              Variant::Variant((Variant *)local_78,"use_filler_clip");
              cVar2 = Dictionary::has(local_c0);
              if (cVar2 == '\0') {
                if (Variant::needs_deinit[local_78[0]] != '\0') {
                  Variant::_clear_internal();
                }
LAB_00108fa5:
                bVar4 = false;
                local_e0 = 0;
              }
              else {
                Variant::Variant((Variant *)local_58,"filler_clip");
                cVar2 = Dictionary::has(local_c0);
                if (Variant::needs_deinit[local_58[0]] == '\0') {
                  cVar1 = Variant::needs_deinit[local_78[0]];
                }
                else {
                  Variant::_clear_internal();
                  cVar1 = Variant::needs_deinit[local_78[0]];
                }
                if (cVar1 != '\0') {
                  Variant::_clear_internal();
                }
                if (cVar2 == '\0') goto LAB_00108fa5;
                Variant::Variant((Variant *)local_58,"use_filler_clip");
                pVVar9 = (Variant *)Dictionary::operator[](local_c0);
                bVar4 = Variant::operator_cast_to_bool(pVVar9);
                if (Variant::needs_deinit[local_58[0]] != '\0') {
                  Variant::_clear_internal();
                }
                Variant::Variant((Variant *)local_58,"filler_clip");
                pVVar9 = (Variant *)Dictionary::operator[](local_c0);
                local_e0 = Variant::operator_cast_to_int(pVVar9);
                if (Variant::needs_deinit[local_58[0]] != '\0') {
                  Variant::_clear_internal();
                }
              }
              Variant::Variant((Variant *)local_78,"hold_previous");
              cVar2 = Dictionary::has(local_c0);
              bVar3 = false;
              if (cVar2 == '\0') {
                cVar2 = Variant::needs_deinit[local_78[0]];
              }
              else {
                Variant::Variant((Variant *)local_58,"hold_previous");
                pVVar9 = (Variant *)Dictionary::operator[](local_c0);
                bVar3 = Variant::operator_cast_to_bool(pVVar9);
                if (Variant::needs_deinit[local_58[0]] != '\0') {
                  Variant::_clear_internal();
                }
                cVar2 = Variant::needs_deinit[local_78[0]];
              }
              if (cVar2 != '\0') {
                Variant::_clear_internal();
              }
              Variant::Variant((Variant *)local_58,"fade_beats");
              pVVar9 = (Variant *)Dictionary::operator[](local_c0);
              pAVar10._0_4_ = (AudioStreamInteractive *)Variant::operator_cast_to_float(pVVar9);
              Variant::Variant((Variant *)local_78,"fade_mode");
              pVVar9 = (Variant *)Dictionary::operator[](local_c0);
              iVar5 = Variant::operator_cast_to_int(pVVar9);
              Variant::Variant((Variant *)local_98,"to_time");
              pVVar9 = (Variant *)Dictionary::operator[](local_c0);
              iVar6 = Variant::operator_cast_to_int(pVVar9);
              Variant::Variant((Variant *)local_b8,"from_time");
              pVVar9 = (Variant *)Dictionary::operator[](local_c0);
              iVar7 = Variant::operator_cast_to_int(pVVar9);
              add_transition(pAVar10._0_4_,this,uVar8 & 0xffffffff,uVar8 >> 0x20,iVar7,iVar6,iVar5,
                             bVar4,local_e0,bVar3);
              if (Variant::needs_deinit[local_b8[0]] != '\0') {
                Variant::_clear_internal();
              }
              if (Variant::needs_deinit[local_98[0]] != '\0') {
                Variant::_clear_internal();
              }
              if (Variant::needs_deinit[local_78[0]] != '\0') {
                Variant::_clear_internal();
              }
              if (Variant::needs_deinit[local_58[0]] != '\0') {
                Variant::_clear_internal();
              }
            }
          }
        }
      }
      Dictionary::~Dictionary((Dictionary *)local_c0);
      this_00 = *(Variant **)(this_00 + 0x18);
    } while (this_00 != (Variant *)0x0);
  }
  List<Variant,DefaultAllocator>::~List((List<Variant,DefaultAllocator> *)&local_c8);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AudioStreamPlaybackInteractive::_queue(int, bool) */

void __thiscall
AudioStreamPlaybackInteractive::_queue
          (AudioStreamPlaybackInteractive *this,int param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  char cVar11;
  undefined8 uVar12;
  uint uVar13;
  int iVar14;
  long lVar15;
  long lVar16;
  int *piVar17;
  long lVar18;
  int iVar19;
  int iVar20;
  long lVar21;
  int iVar22;
  uint uVar23;
  TransitionKey *pTVar24;
  ulong uVar25;
  ulong uVar26;
  AudioStreamPlaybackInteractive *pAVar27;
  long in_FS_OFFSET;
  ushort in_FPUStatusWord;
  float fVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  float local_a8;
  float local_a0;
  char local_90;
  byte local_85;
  float local_84;
  float local_78;
  float local_74;
  int local_68 [8];
  TransitionKey local_48 [8];
  long local_40;
  
  dVar29 = _LC185;
  uVar12 = __LC13;
  lVar18 = *(long *)(this + 0x270);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 < 0) || (*(int *)(lVar18 + 0x980) <= param_1)) {
    _err_print_index_error
              ("_queue","modules/interactive_music/audio_stream_interactive.cpp",0x25c,(long)param_1
               ,(long)*(int *)(lVar18 + 0x980),"p_to_clip_index","stream->clip_count","",false,false
              );
  }
  else {
    lVar15 = (long)param_1;
    lVar16 = lVar15 * 0x40;
    plVar1 = *(long **)(this + lVar16 + 0x4288);
    if (plVar1 == (long *)0x0) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        _err_print_error("_queue","modules/interactive_music/audio_stream_interactive.cpp",0x25d,
                         "Condition \"states[p_to_clip_index].playback.is_null()\" is true.",0,0);
        return;
      }
      goto LAB_0010a301;
    }
    iVar14 = *(int *)(this + 0x5240);
    pAVar27 = this + 0x4288;
    iVar22 = 0;
    if (iVar14 == -1) {
      this[lVar16 + 0x4290] = (AudioStreamPlaybackInteractive)0x1;
      *(undefined8 *)(this + lVar16 + 0x4298) = uVar12;
      *(double *)(this + lVar16 + 0x4298 + 8) = dVar29;
      lVar18 = *plVar1;
      *(undefined8 *)(this + lVar16 + 0x42a8) = 0;
      this[lVar16 + 0x42b4] = (AudioStreamPlaybackInteractive)0x1;
      (**(code **)(lVar18 + 0x150))(0);
      *(int *)(this + 0x5240) = param_1;
      lVar18 = *(long *)(this + 0x270) + lVar15 * 0x18;
      if ((((*(int *)(lVar18 + 0x370) == 1) && (iVar14 = *(int *)(lVar18 + 0x374), -1 < iVar14)) &&
          (iVar14 < *(int *)(*(long *)(this + 0x270) + 0x980))) && (iVar14 != param_1)) {
        *(int *)(this + lVar16 + 0x42b0) = iVar14;
      }
      goto LAB_00109cbc;
    }
    do {
      if (((iVar22 != iVar14) && (param_1 != iVar22)) &&
         ((pAVar27[8] != (AudioStreamPlaybackInteractive)0x0 && (0.0 < *(double *)(pAVar27 + 0x10)))
         )) {
        (**(code **)(**(long **)pAVar27 + 0x158))();
        dVar29 = _LC185;
        uVar12 = __LC13;
        pAVar27[8] = (AudioStreamPlaybackInteractive)0x0;
        *(undefined8 *)(pAVar27 + 0x20) = 0;
        lVar18 = *(long *)(this + 0x270);
        *(undefined8 *)(pAVar27 + 0x10) = uVar12;
        *(double *)(pAVar27 + 0x18) = dVar29;
        iVar14 = *(int *)(this + 0x5240);
      }
      iVar22 = iVar22 + 1;
      pAVar27 = pAVar27 + 0x40;
    } while (iVar22 < *(int *)(lVar18 + 0x980));
    local_68[0] = iVar14;
    pTVar24 = (TransitionKey *)local_68;
    local_68[1] = param_1;
    local_68[2] = iVar14;
    local_68[3] = -1;
    local_68[4] = -1;
    local_68[5] = param_1;
    local_68[6] = -1;
    local_68[7] = -1;
    if (*(long *)(lVar18 + 0x950) == 0) {
      do {
        pTVar24 = pTVar24 + 8;
      } while (pTVar24 != local_48);
LAB_0010998c:
      local_a8 = _LC183;
      local_90 = '\0';
      local_a0 = _LC183;
      cVar11 = '\0';
      iVar22 = 0;
      iVar20 = 1;
      iVar19 = 1;
      uVar23 = 0;
      uVar13 = 2;
    }
    else {
LAB_001095cd:
      do {
        if (*(int *)(lVar18 + 0x974) != 0) {
          iVar22 = *(int *)pTVar24;
          iVar20 = *(int *)(pTVar24 + 4);
          uVar25 = CONCAT44(0,*(uint *)(hash_table_size_primes +
                                       (ulong)*(uint *)(lVar18 + 0x970) * 4));
          lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar18 + 0x970) * 8);
          uVar13 = (iVar22 * 0x16a88000 | (uint)(iVar22 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
                   0x7f07c65;
          uVar13 = (uVar13 << 0xd | uVar13 >> 0x13) * 5 + 0xe6546b64 ^
                   (iVar20 * 0x16a88000 | (uint)(iVar20 * -0x3361d2af) >> 0x11) * 0x1b873593;
          uVar13 = (uVar13 << 0xd | uVar13 >> 0x13) * 5 + 0xe6546b64;
          uVar26 = (ulong)uVar13;
          if (uVar13 == 0) {
            uVar26 = 1;
          }
          auVar3._8_8_ = 0;
          auVar3._0_8_ = uVar26 * lVar2;
          auVar7._8_8_ = 0;
          auVar7._0_8_ = uVar25;
          lVar21 = SUB168(auVar3 * auVar7,8);
          uVar13 = *(uint *)(*(long *)(lVar18 + 0x958) + lVar21 * 4);
          iVar19 = SUB164(auVar3 * auVar7,8);
          if (uVar13 == 0) {
            pTVar24 = pTVar24 + 8;
            if (pTVar24 == local_48) {
              cVar11 = '\0';
              iVar20 = 1;
              local_90 = '\0';
              iVar19 = 1;
              uVar13 = 2;
              iVar22 = 0;
              local_a0 = _LC183;
              local_a8 = _LC183;
              uVar23 = 0;
              goto LAB_0010975e;
            }
          }
          else {
            uVar23 = 0;
            do {
              if ((((uint)uVar26 == uVar13) &&
                  (lVar21 = *(long *)(*(long *)(lVar18 + 0x950) + lVar21 * 8),
                  iVar22 == *(int *)(lVar21 + 0x10))) && (iVar20 == *(int *)(lVar21 + 0x14))) {
                piVar17 = (int *)HashMap<AudioStreamInteractive::TransitionKey,AudioStreamInteractive::Transition,AudioStreamInteractive::TransitionKeyHasher,HashMapComparatorDefault<AudioStreamInteractive::TransitionKey>,DefaultTypedAllocator<HashMapElement<AudioStreamInteractive::TransitionKey,AudioStreamInteractive::Transition>>>
                                 ::operator[]((HashMap<AudioStreamInteractive::TransitionKey,AudioStreamInteractive::Transition,AudioStreamInteractive::TransitionKeyHasher,HashMapComparatorDefault<AudioStreamInteractive::TransitionKey>,DefaultTypedAllocator<HashMapElement<AudioStreamInteractive::TransitionKey,AudioStreamInteractive::Transition>>>
                                               *)(lVar18 + 0x948),pTVar24);
                iVar22 = piVar17[5];
                uVar13 = piVar17[2];
                local_a8 = (float)piVar17[3];
                iVar20 = *piVar17;
                iVar19 = piVar17[1];
                local_90 = (char)piVar17[4];
                cVar11 = (char)piVar17[6];
                if (uVar13 == 4) {
                  if (iVar19 == 1) {
                    uVar23 = 0;
                    uVar13 = 2;
                    local_a0 = _LC183;
                  }
                  else {
                    uVar23 = 1;
                    uVar13 = 3;
                    local_a0 = _LC183;
                  }
                }
                else {
                  uVar23 = uVar13 & 0xfffffffd;
                  local_a0 = _LC183;
                }
                goto LAB_0010975e;
              }
              uVar23 = uVar23 + 1;
              auVar4._8_8_ = 0;
              auVar4._0_8_ = (ulong)(iVar19 + 1) * lVar2;
              auVar8._8_8_ = 0;
              auVar8._0_8_ = uVar25;
              lVar21 = SUB168(auVar4 * auVar8,8);
              uVar13 = *(uint *)(*(long *)(lVar18 + 0x958) + lVar21 * 4);
              iVar19 = SUB164(auVar4 * auVar8,8);
              if (uVar13 == 0) {
                pTVar24 = pTVar24 + 8;
                if (pTVar24 != local_48) goto LAB_001095cd;
                cVar11 = '\0';
                iVar20 = 1;
                local_90 = '\0';
                iVar19 = 1;
                uVar13 = 2;
                iVar22 = 0;
                local_a0 = _LC183;
                local_a8 = _LC183;
                uVar23 = 0;
                goto LAB_0010975e;
              }
              auVar5._8_8_ = 0;
              auVar5._0_8_ = (ulong)uVar13 * lVar2;
              auVar9._8_8_ = 0;
              auVar9._0_8_ = uVar25;
              auVar6._8_8_ = 0;
              auVar6._0_8_ = (ulong)((*(uint *)(hash_table_size_primes +
                                               (ulong)*(uint *)(lVar18 + 0x970) * 4) + iVar19) -
                                    SUB164(auVar5 * auVar9,8)) * lVar2;
              auVar10._8_8_ = 0;
              auVar10._0_8_ = uVar25;
            } while (uVar23 <= SUB164(auVar6 * auVar10,8));
            pTVar24 = pTVar24 + 8;
            if (pTVar24 == local_48) goto LAB_0010998c;
          }
          goto LAB_001095cd;
        }
        pTVar24 = pTVar24 + 8;
      } while (local_48 != pTVar24);
      cVar11 = '\0';
      iVar20 = 1;
      local_90 = '\0';
      iVar19 = 1;
      uVar13 = 2;
      iVar22 = 0;
      local_a0 = _LC183;
      local_a8 = _LC183;
      uVar23 = 0;
    }
LAB_0010975e:
    lVar18 = (long)iVar14;
    _LC183 = local_a0;
    if (param_2) {
      if (iVar19 == 0) {
        iVar19 = 1;
      }
      dVar29 = (double)(**(code **)(**(long **)(this + lVar18 * 0x40 + 0x4288) + 0x170))();
      local_78 = (float)dVar29;
      dVar29 = (double)(**(code **)(**(long **)(this + lVar18 * 0x40 + 0x4280) + 0x1d8))();
      if (dVar29 != 0.0) {
        dVar29 = (double)(**(code **)(**(long **)(this + lVar18 * 0x40 + 0x4280) + 0x1d8))();
        local_74 = _LC190 / (float)dVar29;
LAB_001097f3:
        iVar14 = (**(code **)(**(long **)(this + lVar18 * 0x40 + 0x4280) + 0x1f0))();
        if (iVar14 < 1) {
          dVar29 = (double)(**(code **)(**(long **)(this + lVar18 * 0x40 + 0x4280) + 0x1f8))();
          fVar28 = (float)dVar29;
        }
        else {
          iVar14 = (**(code **)(**(long **)(this + lVar18 * 0x40 + 0x4280) + 0x1f0))();
          fVar28 = (float)iVar14 * local_74;
        }
        local_84 = 0.0;
        if (fVar28 != 0.0) {
          local_84 = fVar28 - local_78;
        }
        local_85 = (**(code **)(**(long **)(this + lVar18 * 0x40 + 0x4280) + 0x1e0))();
        iVar20 = 3;
        local_85 = local_85 ^ 1;
        goto LAB_00109865;
      }
LAB_00109d70:
      dVar29 = (double)(**(code **)(**(long **)(this + lVar18 * 0x40 + 0x4280) + 0x1f8))();
      if (dVar29 <= 0.0) {
        local_85 = 0;
        iVar20 = 3;
LAB_00109ab2:
        local_84 = 0.0;
      }
      else {
        dVar29 = (double)(**(code **)(**(long **)(this + lVar18 * 0x40 + 0x4280) + 0x1f8))();
        local_84 = (float)dVar29 - local_78;
        local_85 = (**(code **)(**(long **)(this + lVar18 * 0x40 + 0x4280) + 0x1e0))();
        iVar20 = 3;
        local_85 = local_85 ^ 1;
      }
      local_a0 = local_a0 / local_a8;
      if (iVar19 == 2) goto LAB_0010988a;
LAB_00109ad5:
      if (((iVar20 == 3) || (iVar19 != 0)) ||
         (dVar29 = (double)(**(code **)(**(long **)(this + lVar16 + 0x4280) + 0x1f8))(),
         dVar29 <= 0.0)) goto LAB_00109b78;
      dVar29 = (double)(**(code **)(**(long **)(this + lVar16 + 0x4280) + 0x1d8))();
      if ((dVar29 <= 0.0) ||
         (iVar14 = (**(code **)(**(long **)(this + lVar16 + 0x4280) + 0x1f0))(), iVar14 == 0)) {
        dVar29 = (double)(**(code **)(**(long **)(this + lVar16 + 0x4280) + 0x1f8))();
        fVar28 = (float)dVar29;
      }
      else {
        dVar29 = (double)(**(code **)(**(long **)(this + lVar16 + 0x4280) + 0x1d8))();
        fVar28 = _LC190 / (float)dVar29;
        iVar14 = (**(code **)(**(long **)(this + lVar16 + 0x4280) + 0x1f0))();
        fVar28 = (float)iVar14 * fVar28;
      }
      if (fVar28 < local_78 + local_84) goto LAB_00109b78;
      dVar29 = (double)(local_78 + local_84);
LAB_00109b7c:
      if (1 < uVar13) goto LAB_00109b86;
LAB_001098d6:
      if (local_85 == 0) {
        dVar31 = (double)local_84;
        dVar30 = _LC184;
        dVar32 = dVar31;
      }
      else {
        dVar31 = 0.0;
        dVar30 = 0.0;
        dVar32 = (double)local_84;
      }
    }
    else {
      dVar29 = (double)(**(code **)(**(long **)(this + lVar18 * 0x40 + 0x4288) + 0x170))();
      local_78 = (float)dVar29;
      dVar29 = (double)(**(code **)(**(long **)(this + lVar18 * 0x40 + 0x4280) + 0x1d8))();
      local_85 = param_2;
      if (dVar29 == 0.0) {
        if (iVar20 == 3) goto LAB_00109d70;
        goto LAB_00109ab2;
      }
      dVar29 = (double)(**(code **)(**(long **)(this + lVar18 * 0x40 + 0x4280) + 0x1d8))();
      local_74 = _LC190 / (float)dVar29;
      if (iVar20 == 2) {
        iVar14 = (**(code **)(**(long **)(this + lVar18 * 0x40 + 0x4280) + 0x1e8))();
        if (iVar14 < 1) {
LAB_00109d32:
          local_84 = 0.0;
        }
        else {
          iVar14 = (**(code **)(**(long **)(this + lVar18 * 0x40 + 0x4280) + 0x1e8))();
          local_84 = (float)iVar14 * local_74;
          fVar28 = local_78;
          do {
            fVar28 = fVar28 - (fVar28 / local_84) * local_84;
          } while ((in_FPUStatusWord & 0x400) != 0);
          if (NAN(fVar28)) {
            fmodf(local_78,local_84);
          }
          local_84 = local_84 - fVar28;
        }
      }
      else {
        if (iVar20 == 3) goto LAB_001097f3;
        local_84 = local_78;
        if (iVar20 != 1) goto LAB_00109d32;
        do {
          local_84 = local_84 - (local_84 / local_74) * local_74;
        } while ((in_FPUStatusWord & 0x400) != 0);
        if (NAN(local_84)) {
          fmodf(local_78,local_74);
        }
        local_84 = local_74 - local_84;
      }
LAB_00109865:
      local_a0 = local_a0 / (local_74 * local_a8);
      if (iVar19 != 2) goto LAB_00109ad5;
LAB_0010988a:
      dVar29 = (double)(**(code **)(**(long **)(this + lVar16 + 0x4280) + 0x1f8))();
      if (dVar29 <= 0.0) {
LAB_00109b78:
        dVar29 = 0.0;
        goto LAB_00109b7c;
      }
      dVar29 = (double)(float)*(double *)(this + lVar15 * 0x40 + 0x42b8);
      if (uVar13 < 2) goto LAB_001098d6;
LAB_00109b86:
      dVar31 = (double)local_84;
      dVar30 = (double)(float)((uint)local_a0 ^ __LC191);
      dVar32 = dVar31;
    }
    *(double *)(this + lVar18 * 0x40 + 0x4298) = dVar31;
    *(double *)(this + lVar18 * 0x40 + 0x42a8) = dVar30;
    (**(code **)(**(long **)(this + lVar16 + 0x4288) + 0x150))(dVar29);
    lVar16 = *(long *)(this + 0x270);
    this[lVar15 * 0x40 + 0x4290] = (AudioStreamPlaybackInteractive)0x1;
    *(undefined8 *)(this + lVar15 * 0x40 + 0x42a0) = 0;
    this[lVar15 * 0x40 + 0x42b4] = (AudioStreamPlaybackInteractive)0x1;
    lVar18 = lVar16 + lVar15 * 0x18;
    iVar14 = *(int *)(lVar18 + 0x370);
    if (iVar14 == 1) {
      iVar20 = *(int *)(lVar18 + 0x374);
      if (((iVar20 < 0) || (iVar14 = *(int *)(lVar16 + 0x980), iVar14 <= iVar20)) ||
         ((*(long *)(this + (long)iVar20 * 0x40 + 0x4288) == 0 || (param_1 == iVar20))))
      goto LAB_00109e90;
      if ((iVar20 != iVar22) || (local_90 != '\x01')) goto LAB_00109c4c;
      iVar20 = -1;
      if (cVar11 != '\0') {
        *(undefined4 *)(this + 0x5248) = *(undefined4 *)(this + 0x5240);
        goto LAB_00109f28;
      }
LAB_00109f2e:
      if (iVar22 < iVar14) {
        if (((*(long **)(this + (long)iVar22 * 0x40 + 0x4288) != (long *)0x0) &&
            (*(int *)(this + 0x5240) != iVar22)) && (param_1 != iVar22)) {
          (**(code **)(**(long **)(this + (long)iVar22 * 0x40 + 0x4288) + 0x150))(0);
          dVar29 = _LC185;
          plVar1 = *(long **)(this + (long)iVar22 * 0x40 + 0x4280);
          this[(long)iVar22 * 0x40 + 0x4290] = (AudioStreamPlaybackInteractive)0x1;
          this[(long)iVar22 * 0x40 + 0x42b4] = (AudioStreamPlaybackInteractive)0x1;
          *(double *)(this + (long)iVar22 * 0x40 + 0x42a0) = dVar29;
          lVar18 = *plVar1;
          *(undefined8 *)(this + (long)iVar22 * 0x40 + 0x42a8) = 0;
          *(double *)(this + (long)iVar22 * 0x40 + 0x4298) = dVar32;
          dVar29 = (double)(**(code **)(lVar18 + 0x1d8))();
          if ((dVar29 <= 0.0) ||
             (iVar14 = (**(code **)(**(long **)(this + (long)iVar22 * 0x40 + 0x4280) + 0x1f0))(),
             iVar14 < 1)) {
            dVar29 = (double)(**(code **)(**(long **)(this + (long)iVar22 * 0x40 + 0x4280) + 0x1f8))
                                       ();
            fVar28 = (float)dVar29;
          }
          else {
            dVar29 = (double)(**(code **)(**(long **)(this + (long)iVar22 * 0x40 + 0x4280) + 0x1d8))
                                       ();
            fVar28 = _LC190 / (float)dVar29;
            iVar14 = (**(code **)(**(long **)(this + (long)iVar22 * 0x40 + 0x4280) + 0x1f0))();
            fVar28 = (float)iVar14 * fVar28;
          }
          (**(code **)(**(long **)(this + (long)iVar22 * 0x40 + 0x4280) + 0x1e0))();
          dVar29 = _LC185;
          if (uVar23 != 0) {
            dVar29 = (double)local_a0;
          }
          *(double *)(this + lVar15 * 0x40 + 0x42a8) = dVar29;
          *(undefined8 *)(this + lVar15 * 0x40 + 0x42a0) = 0;
          *(double *)(this + lVar15 * 0x40 + 0x4298) = (double)(local_84 + fVar28);
          goto LAB_00109cbc;
        }
      }
    }
    else {
      iVar20 = *(int *)(this + 0x5248);
      if ((iVar14 == 2) && (iVar20 != -1)) {
        *(undefined4 *)(this + 0x5248) = 0xffffffff;
      }
      else {
LAB_00109e90:
        iVar20 = -1;
      }
LAB_00109c4c:
      if (cVar11 != '\0') {
        *(undefined4 *)(this + 0x5248) = *(undefined4 *)(this + 0x5240);
      }
      if ((-1 < iVar22) && (local_90 != '\0')) {
LAB_00109f28:
        iVar14 = *(int *)(lVar16 + 0x980);
        goto LAB_00109f2e;
      }
    }
    *(double *)(this + lVar15 * 0x40 + 0x4298) = dVar32;
    if (uVar23 == 0) {
      dVar29 = 0.0;
      *(double *)(this + lVar15 * 0x40 + 0x42a0) = _LC185;
    }
    else {
      dVar29 = (double)local_a0;
    }
    *(int *)(this + lVar15 * 0x40 + 0x42b0) = iVar20;
    *(double *)(this + lVar15 * 0x40 + 0x42a8) = dVar29;
  }
LAB_00109cbc:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010a301:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AudioStreamPlaybackInteractive::start(double) */

void AudioStreamPlaybackInteractive::start(double param_1)

{
  char cVar1;
  long lVar2;
  AudioStreamPlaybackInteractive *pAVar3;
  Object *pOVar4;
  AudioStreamPlaybackInteractive *in_RDI;
  int iVar5;
  Object *pOVar6;
  Object *pOVar7;
  long lVar8;
  long in_FS_OFFSET;
  double extraout_XMM0_Qa;
  double extraout_XMM0_Qa_00;
  double extraout_XMM0_Qa_01;
  Object *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_RDI[0x5244] != (AudioStreamPlaybackInteractive)0x0) {
    param_1 = (double)(**(code **)(*(long *)in_RDI + 0x158))();
  }
  lVar2 = *(long *)(in_RDI + 0x270);
  if (*(long *)(in_RDI + 0x278) != *(long *)(lVar2 + 0x978)) {
    pAVar3 = in_RDI + 0x4280;
    lVar8 = 0x368;
    iVar5 = 0;
    do {
      if ((iVar5 < *(int *)(lVar2 + 0x980)) &&
         (pOVar4 = *(Object **)(lVar2 + lVar8), pOVar4 != (Object *)0x0)) {
        cVar1 = RefCounted::reference();
        pOVar7 = *(Object **)pAVar3;
        if (cVar1 == '\0') {
          param_1 = extraout_XMM0_Qa_00;
          if (pOVar7 != (Object *)0x0) goto LAB_0010a3e1;
        }
        else {
          if (pOVar7 != pOVar4) {
            if (pOVar7 != (Object *)0x0) goto LAB_0010a3e3;
            if (*(long *)(pAVar3 + 8) == 0) goto LAB_0010a5b7;
            goto LAB_0010a404;
          }
LAB_0010a4ab:
          cVar1 = RefCounted::unreference();
          param_1 = extraout_XMM0_Qa;
          if ((cVar1 != '\0') &&
             (cVar1 = predelete_handler(pOVar4), param_1 = extraout_XMM0_Qa_01, cVar1 != '\0')) {
            (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
            param_1 = (double)Memory::free_static(pOVar4,false);
          }
        }
        lVar2 = *(long *)(in_RDI + 0x270);
      }
      else if (*(long *)pAVar3 != 0) {
LAB_0010a3e1:
        pOVar4 = (Object *)0x0;
LAB_0010a3e3:
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          pOVar7 = *(Object **)pAVar3;
          cVar1 = predelete_handler(pOVar7);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
            Memory::free_static(pOVar7,false);
          }
        }
        *(long *)pAVar3 = 0;
        if (*(long *)(pAVar3 + 8) == 0) {
          if (pOVar4 != (Object *)0x0) {
LAB_0010a5b7:
            *(Object **)pAVar3 = pOVar4;
            pOVar7 = (Object *)0x0;
LAB_0010a5bd:
            cVar1 = RefCounted::reference();
            if (cVar1 == '\0') {
              *(long *)pAVar3 = 0;
            }
            goto LAB_0010a42d;
          }
        }
        else {
LAB_0010a404:
          cVar1 = RefCounted::unreference();
          if (cVar1 != '\0') {
            pOVar7 = *(Object **)(pAVar3 + 8);
            cVar1 = predelete_handler(pOVar7);
            if (cVar1 != '\0') {
              (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
              Memory::free_static(pOVar7,false);
            }
          }
          pOVar7 = *(Object **)pAVar3;
          *(long *)(pAVar3 + 8) = 0;
          if (pOVar4 != pOVar7) {
            *(Object **)pAVar3 = pOVar4;
            if (pOVar4 != (Object *)0x0) goto LAB_0010a5bd;
LAB_0010a42d:
            if (((pOVar7 != (Object *)0x0) && (cVar1 = RefCounted::unreference(), cVar1 != '\0')) &&
               (cVar1 = predelete_handler(pOVar7), cVar1 != '\0')) {
              (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
              Memory::free_static(pOVar7,false);
            }
          }
        }
        (**(code **)(*(long *)pOVar4 + 0x1c8))(&local_48);
        pOVar7 = *(Object **)(pAVar3 + 8);
        pOVar6 = pOVar7;
        if (local_48 != pOVar7) {
          *(Object **)(pAVar3 + 8) = local_48;
          if (local_48 == (Object *)0x0) {
            if (pOVar7 == (Object *)0x0) goto LAB_0010a4ab;
            cVar1 = RefCounted::unreference();
          }
          else {
            cVar1 = RefCounted::reference();
            if (cVar1 == '\0') {
              *(long *)(pAVar3 + 8) = 0;
            }
            pOVar6 = local_48;
            if (pOVar7 == (Object *)0x0) goto LAB_0010a496;
            cVar1 = RefCounted::unreference();
          }
          pOVar6 = local_48;
          if ((cVar1 != '\0') &&
             (cVar1 = predelete_handler(pOVar7), pOVar6 = local_48, cVar1 != '\0')) {
            (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
            Memory::free_static(pOVar7,false);
            pOVar6 = local_48;
          }
        }
LAB_0010a496:
        if (((pOVar6 != (Object *)0x0) &&
            (cVar1 = RefCounted::unreference(), pOVar7 = local_48, cVar1 != '\0')) &&
           (cVar1 = predelete_handler(local_48), cVar1 != '\0')) {
          (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
          Memory::free_static(pOVar7,false);
        }
        goto LAB_0010a4ab;
      }
      iVar5 = iVar5 + 1;
      pAVar3 = pAVar3 + 0x40;
      lVar8 = lVar8 + 0x18;
    } while (iVar5 != 0x3f);
    *(undefined8 *)(in_RDI + 0x278) = *(undefined8 *)(lVar2 + 0x978);
  }
  iVar5 = *(int *)(lVar2 + 0x350);
  if (((iVar5 < 0) || (*(int *)(lVar2 + 0x980) <= iVar5)) ||
     (*(long *)(in_RDI + (long)iVar5 * 0x40 + 0x4288) == 0)) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    in_RDI[0x5244] = (AudioStreamPlaybackInteractive)0x1;
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _queue(in_RDI,iVar5,false);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}



/* AudioStreamPlaybackInteractive::_mix_internal_state(int, int) */

void __thiscall
AudioStreamPlaybackInteractive::_mix_internal_state
          (AudioStreamPlaybackInteractive *this,int param_1,int param_2)

{
  double dVar1;
  char cVar2;
  long *plVar3;
  AudioStreamPlaybackInteractive *pAVar4;
  AudioStreamPlaybackInteractive *pAVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  long local_40;
  
  lVar7 = (long)param_1;
  plVar3 = (long *)AudioServer::get_singleton();
  fVar11 = (float)(**(code **)(*plVar3 + 0x188))(plVar3);
  dVar15 = _LC185 / (double)fVar11;
  if (this[lVar7 * 0x40 + 0x42b4] == (AudioStreamPlaybackInteractive)0x0) {
    local_40 = 0;
    iVar9 = -1;
    iVar8 = 0;
    iVar6 = param_2;
  }
  else {
    dVar1 = *(double *)(this + lVar7 * 0x40 + 0x4298);
    if ((double)param_2 * dVar15 <= dVar1) {
      *(double *)(this + lVar7 * 0x40 + 0x4298) = dVar1 - (double)param_2 * dVar15;
      return;
    }
    *(undefined8 *)(this + lVar7 * 0x40 + 0x4298) = 0;
    iVar8 = (int)(dVar1 * (double)fVar11);
    if (*(double *)(this + lVar7 * 0x40 + 0x42a8) == 0.0) {
      iVar9 = *(int *)(this + lVar7 * 0x40 + 0x42b0);
    }
    else {
      iVar9 = -1;
    }
    *(int *)(this + 0x5240) = param_1;
    this[lVar7 * 0x40 + 0x42b4] = (AudioStreamPlaybackInteractive)0x0;
    local_40 = (long)iVar8 << 3;
    iVar6 = param_2 - iVar8;
  }
  lVar10 = lVar7 * 0x40;
  uVar13 = (**(code **)(**(long **)(this + lVar10 + 0x4288) + 0x170))();
  *(undefined8 *)(this + lVar10 + 0x42b8) = uVar13;
  (**(code **)(**(long **)(this + lVar10 + 0x4288) + 0x198))
            (*(long **)(this + lVar10 + 0x4288),this + local_40 + 0x2280,iVar6);
  fVar11 = _LC183;
  uVar13 = _LC193;
  dVar1 = _LC185;
  dVar16 = *(double *)(this + lVar10 + 0x42a8) * dVar15;
  if (iVar8 < param_2) {
    pAVar5 = this + (long)iVar8 * 8;
    do {
      if (*(double *)(this + lVar10 + 0x4298) == 0.0) {
        dVar14 = *(double *)(this + lVar10 + 0x42a0);
        if (dVar16 <= 0.0) {
          if (dVar16 < 0.0) {
            dVar14 = dVar14 + dVar16;
            *(double *)(this + lVar10 + 0x42a0) = dVar14;
            if (dVar14 <= 0.0) {
              *(undefined1 (*) [16])(this + lVar10 + 0x42a0) = (undefined1  [16])0x0;
              (**(code **)(**(long **)(this + lVar10 + 0x4288) + 0x158))();
              break;
            }
          }
        }
        else {
          dVar14 = dVar14 + dVar16;
          *(double *)(this + lVar10 + 0x42a0) = dVar14;
          if (dVar1 <= dVar14) {
            *(undefined8 *)(this + lVar10 + 0x42a0) = uVar13;
            *(undefined8 *)(this + lVar10 + 0x42a0 + 8) = 0;
            iVar9 = *(int *)(this + lVar10 + 0x42b0);
            dVar16 = 0.0;
            fVar12 = fVar11;
            goto LAB_0010a90a;
          }
        }
        fVar12 = (float)dVar14;
      }
      else {
        dVar14 = *(double *)(this + lVar10 + 0x4298) - dVar15;
        *(double *)(this + lVar10 + 0x4298) = dVar14;
        if (dVar14 < 0.0) {
          *(undefined8 *)(this + lVar10 + 0x4298) = 0;
          fVar12 = (float)*(double *)(this + lVar10 + 0x42a0);
        }
        else {
          fVar12 = (float)*(double *)(this + lVar10 + 0x42a0);
        }
      }
LAB_0010a90a:
      pAVar4 = pAVar5 + 8;
      dVar14 = *(double *)(this + lVar10 + 0x42b8);
      *(ulong *)(pAVar5 + 0x280) =
           CONCAT44((float)((ulong)*(undefined8 *)(pAVar5 + 0x280) >> 0x20) +
                    fVar12 * (float)((ulong)*(undefined8 *)(pAVar5 + 0x2280) >> 0x20),
                    (float)*(undefined8 *)(pAVar5 + 0x280) +
                    fVar12 * (float)*(undefined8 *)(pAVar5 + 0x2280));
      *(double *)(this + lVar10 + 0x42b8) = dVar14 + dVar15;
      pAVar5 = pAVar4;
    } while (this + ((ulong)(uint)(param_2 - iVar8) + (long)iVar8) * 8 != pAVar4);
  }
  cVar2 = (**(code **)(**(long **)(this + lVar10 + 0x4288) + 0x160))();
  if (cVar2 == '\0') {
    this[lVar7 * 0x40 + 0x4290] = (AudioStreamPlaybackInteractive)0x0;
  }
  if (iVar9 != -1) {
    _queue(this,iVar9,true);
    return;
  }
  return;
}



/* AudioStreamPlaybackInteractive::_mix_internal(int) */

void __thiscall
AudioStreamPlaybackInteractive::_mix_internal(AudioStreamPlaybackInteractive *this,int param_1)

{
  AudioStreamPlaybackInteractive *pAVar1;
  long lVar2;
  long lVar3;
  
  if (0 < param_1) {
    pAVar1 = this;
    do {
      *(undefined8 *)(pAVar1 + 0x280) = 0;
      pAVar1 = pAVar1 + 8;
    } while (pAVar1 != this + (long)param_1 * 8);
  }
  lVar2 = *(long *)(this + 0x270);
  if (0 < *(int *)(lVar2 + 0x980)) {
    lVar3 = 0;
    do {
      if (this[lVar3 * 0x40 + 0x4290] != (AudioStreamPlaybackInteractive)0x0) {
        _mix_internal_state(this,(int)lVar3,param_1);
        lVar2 = *(long *)(this + 0x270);
      }
      lVar3 = lVar3 + 1;
    } while ((int)lVar3 < *(int *)(lVar2 + 0x980));
  }
  return;
}



/* AudioStreamPlaybackInteractive::mix(AudioFrame*, float, int) */

int AudioStreamPlaybackInteractive::mix(AudioFrame *param_1,float param_2,int param_3)

{
  long lVar1;
  int in_EDX;
  long lVar2;
  undefined4 in_register_00000034;
  int iVar3;
  int iVar4;
  
  lVar2 = CONCAT44(in_register_00000034,param_3);
  if (param_1[0x5244] == (AudioFrame)0x0) {
    iVar4 = *(int *)(param_1 + 0x524c);
    if (iVar4 == -1) {
      return 0;
    }
LAB_0010ab71:
    _queue((AudioStreamPlaybackInteractive *)param_1,iVar4,false);
    *(undefined4 *)(param_1 + 0x524c) = 0xffffffff;
  }
  else {
    if (*(long *)(param_1 + 0x278) == *(long *)(*(long *)(param_1 + 0x270) + 0x978)) {
      iVar4 = *(int *)(param_1 + 0x524c);
      if (iVar4 == -1) goto LAB_0010ab92;
      goto LAB_0010ab71;
    }
    (**(code **)(*(long *)param_1 + 0x158))();
    iVar4 = *(int *)(param_1 + 0x524c);
    if (iVar4 != -1) goto LAB_0010ab71;
  }
  if (param_1[0x5244] == (AudioFrame)0x0) {
    return 0;
  }
LAB_0010ab92:
  iVar4 = in_EDX;
  if (in_EDX == 0) {
    return 0;
  }
  do {
    iVar3 = 0x400;
    if (iVar4 < 0x401) {
      iVar3 = iVar4;
    }
    _mix_internal((AudioStreamPlaybackInteractive *)param_1,iVar3);
    if (0 < iVar4) {
      lVar1 = 0;
      do {
        *(undefined4 *)(lVar2 + lVar1 * 8) = *(undefined4 *)(param_1 + lVar1 * 8 + 0x280);
        *(undefined4 *)(lVar2 + 4 + lVar1 * 8) = *(undefined4 *)(param_1 + lVar1 * 8 + 0x284);
        lVar1 = lVar1 + 1;
      } while ((int)lVar1 < iVar3);
    }
    lVar2 = lVar2 + (long)iVar3 * 8;
    iVar4 = iVar4 - iVar3;
  } while (iVar4 != 0);
  return in_EDX;
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



/* AudioStreamInteractive::get_transition_list() const */

void AudioStreamInteractive::get_transition_list(void)

{
  undefined8 *puVar1;
  long in_RSI;
  Vector<int> *in_RDI;
  
  puVar1 = *(undefined8 **)(in_RSI + 0x960);
  *(undefined8 *)(in_RDI + 8) = 0;
  for (; puVar1 != (undefined8 *)0x0; puVar1 = (undefined8 *)*puVar1) {
    Vector<int>::push_back(in_RDI,*(int *)(puVar1 + 2));
    Vector<int>::push_back(in_RDI,*(int *)((long)puVar1 + 0x14));
  }
  return;
}



/* AudioStreamInteractive::_get_transitions() const */

Dictionary * AudioStreamInteractive::_get_transitions(void)

{
  Vector2i *pVVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  code *pcVar13;
  int iVar14;
  uint uVar15;
  Variant *pVVar16;
  uint uVar17;
  long *plVar18;
  Vector2i *pVVar19;
  ulong uVar20;
  long in_RSI;
  long lVar21;
  Dictionary *in_RDI;
  ulong uVar22;
  uint uVar23;
  long lVar24;
  long in_FS_OFFSET;
  long local_c8;
  Dictionary local_90 [8];
  Vector<Vector2i> local_88 [8];
  Vector2i *local_80;
  int local_78 [8];
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  plVar18 = *(long **)(in_RSI + 0x960);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = (Vector2i *)0x0;
  if (plVar18 != (long *)0x0) {
    do {
      lVar4 = plVar18[2];
      if (local_80 == (Vector2i *)0x0) {
        lVar21 = 1;
      }
      else {
        lVar21 = *(long *)(local_80 + -8) + 1;
      }
      iVar14 = CowData<Vector2i>::resize<false>((CowData<Vector2i> *)&local_80,lVar21);
      if (iVar14 == 0) {
        if (local_80 == (Vector2i *)0x0) {
          lVar24 = -1;
          lVar21 = 0;
        }
        else {
          lVar21 = *(long *)(local_80 + -8);
          lVar24 = lVar21 + -1;
          if (-1 < lVar24) {
            CowData<Vector2i>::_copy_on_write((CowData<Vector2i> *)&local_80);
            *(long *)(local_80 + lVar24 * 8) = lVar4;
            goto LAB_0010ae3a;
          }
        }
        _err_print_index_error
                  ("set","./core/templates/cowdata.h",0xcf,lVar24,lVar21,"p_index","size()","",false
                   ,false);
      }
      else {
        _err_print_error("push_back","./core/templates/vector.h",0x142,
                         "Condition \"err\" is true. Returning: true",0,0);
      }
LAB_0010ae3a:
      plVar18 = (long *)*plVar18;
    } while (plVar18 != (long *)0x0);
  }
  Vector<Vector2i>::sort_custom<_DefaultComparator<Vector2i>,true>(local_88);
  Dictionary::Dictionary(in_RDI);
  pVVar1 = local_80;
  if (local_80 != (Vector2i *)0x0) {
    pVVar19 = local_80;
    for (local_c8 = 0; local_c8 < *(long *)(pVVar1 + -8); local_c8 = local_c8 + 1) {
      iVar14 = *(int *)(pVVar19 + 4);
      iVar3 = *(int *)pVVar19;
      lVar4 = *(long *)(in_RSI + 0x950);
      if ((lVar4 == 0) || (*(int *)(in_RSI + 0x974) == 0)) {
LAB_0010b490:
        _err_print_error("operator[]","./core/templates/hash_map.h",0x245,
                         "FATAL: Condition \"!exists\" is true.",0,0);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar13 = (code *)invalidInstructionException();
        (*pcVar13)();
      }
      uVar22 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 0x970) * 4));
      lVar21 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 0x970) * 8);
      uVar15 = (iVar3 * 0x16a88000 | (uint)(iVar3 * -0x3361d2af) >> 0x11) * 0x1b873593 ^ 0x7f07c65;
      uVar15 = (uVar15 << 0xd | uVar15 >> 0x13) * 5 + 0xe6546b64 ^
               (iVar14 * 0x16a88000 | (uint)(iVar14 * -0x3361d2af) >> 0x11) * 0x1b873593;
      uVar15 = (uVar15 << 0xd | uVar15 >> 0x13) * 5 + 0xe6546b64;
      uVar20 = (ulong)uVar15;
      if (uVar15 == 0) {
        uVar20 = 1;
      }
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar20 * lVar21;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = uVar22;
      lVar24 = SUB168(auVar5 * auVar9,8);
      uVar15 = *(uint *)(*(long *)(in_RSI + 0x958) + lVar24 * 4);
      uVar17 = SUB164(auVar5 * auVar9,8);
      if (uVar15 == 0) goto LAB_0010b490;
      uVar23 = 0;
      while ((((uint)uVar20 != uVar15 ||
              (lVar24 = *(long *)(lVar4 + lVar24 * 8), iVar3 != *(int *)(lVar24 + 0x10))) ||
             (iVar14 != *(int *)(lVar24 + 0x14)))) {
        uVar23 = uVar23 + 1;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = (ulong)(uVar17 + 1) * lVar21;
        auVar10._8_8_ = 0;
        auVar10._0_8_ = uVar22;
        lVar24 = SUB168(auVar6 * auVar10,8);
        uVar15 = *(uint *)(*(long *)(in_RSI + 0x958) + lVar24 * 4);
        uVar17 = SUB164(auVar6 * auVar10,8);
        if ((uVar15 == 0) ||
           (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar15 * lVar21, auVar11._8_8_ = 0,
           auVar11._0_8_ = uVar22, auVar8._8_8_ = 0,
           auVar8._0_8_ = (ulong)((*(uint *)(hash_table_size_primes +
                                            (ulong)*(uint *)(in_RSI + 0x970) * 4) + uVar17) -
                                 SUB164(auVar7 * auVar11,8)) * lVar21, auVar12._8_8_ = 0,
           auVar12._0_8_ = uVar22, SUB164(auVar8 * auVar12,8) < uVar23)) goto LAB_0010b490;
      }
      lVar4 = *(long *)(lVar4 + (ulong)uVar17 * 8);
      Dictionary::Dictionary(local_90);
      Variant::Variant((Variant *)local_58,*(int *)(lVar4 + 0x18));
      Variant::Variant((Variant *)local_78,"from_time");
      pVVar16 = (Variant *)Dictionary::operator[]((Variant *)local_90);
      if (pVVar16 != (Variant *)local_58) {
        if (Variant::needs_deinit[*(int *)pVVar16] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)pVVar16 = 0;
        *(int *)pVVar16 = local_58[0];
        *(undefined8 *)(pVVar16 + 8) = local_50;
        *(undefined8 *)(pVVar16 + 0x10) = uStack_48;
        local_58[0] = 0;
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_58,*(int *)(lVar4 + 0x1c));
      Variant::Variant((Variant *)local_78,"to_time");
      pVVar16 = (Variant *)Dictionary::operator[]((Variant *)local_90);
      if (pVVar16 != (Variant *)local_58) {
        if (Variant::needs_deinit[*(int *)pVVar16] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)pVVar16 = 0;
        *(int *)pVVar16 = local_58[0];
        *(undefined8 *)(pVVar16 + 8) = local_50;
        *(undefined8 *)(pVVar16 + 0x10) = uStack_48;
        local_58[0] = 0;
      }
      if (Variant::needs_deinit[local_78[0]] == '\0') {
        cVar2 = Variant::needs_deinit[local_58[0]];
      }
      else {
        Variant::_clear_internal();
        cVar2 = Variant::needs_deinit[local_58[0]];
      }
      if (cVar2 != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_58,*(int *)(lVar4 + 0x20));
      Variant::Variant((Variant *)local_78,"fade_mode");
      pVVar16 = (Variant *)Dictionary::operator[]((Variant *)local_90);
      if (pVVar16 != (Variant *)local_58) {
        if (Variant::needs_deinit[*(int *)pVVar16] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)pVVar16 = 0;
        *(int *)pVVar16 = local_58[0];
        *(undefined8 *)(pVVar16 + 8) = local_50;
        *(undefined8 *)(pVVar16 + 0x10) = uStack_48;
        local_58[0] = 0;
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_58,*(float *)(lVar4 + 0x24));
      Variant::Variant((Variant *)local_78,"fade_beats");
      pVVar16 = (Variant *)Dictionary::operator[]((Variant *)local_90);
      if (pVVar16 != (Variant *)local_58) {
        if (Variant::needs_deinit[*(int *)pVVar16] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)pVVar16 = 0;
        *(int *)pVVar16 = local_58[0];
        *(undefined8 *)(pVVar16 + 8) = local_50;
        *(undefined8 *)(pVVar16 + 0x10) = uStack_48;
        local_58[0] = 0;
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (*(char *)(lVar4 + 0x28) != '\0') {
        Variant::Variant((Variant *)local_58,true);
        Variant::Variant((Variant *)local_78,"use_filler_clip");
        pVVar16 = (Variant *)Dictionary::operator[]((Variant *)local_90);
        if (pVVar16 != (Variant *)local_58) {
          if (Variant::needs_deinit[*(int *)pVVar16] != '\0') {
            Variant::_clear_internal();
          }
          *(undefined4 *)pVVar16 = 0;
          *(int *)pVVar16 = local_58[0];
          *(undefined8 *)(pVVar16 + 8) = local_50;
          *(undefined8 *)(pVVar16 + 0x10) = uStack_48;
          local_58[0] = 0;
        }
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        Variant::Variant((Variant *)local_58,*(int *)(lVar4 + 0x2c));
        Variant::Variant((Variant *)local_78,"filler_clip");
        pVVar16 = (Variant *)Dictionary::operator[]((Variant *)local_90);
        if (pVVar16 != (Variant *)local_58) {
          if (Variant::needs_deinit[*(int *)pVVar16] != '\0') {
            Variant::_clear_internal();
          }
          *(undefined4 *)pVVar16 = 0;
          *(int *)pVVar16 = local_58[0];
          *(undefined8 *)(pVVar16 + 8) = local_50;
          *(undefined8 *)(pVVar16 + 0x10) = uStack_48;
          local_58[0] = 0;
        }
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
      }
      if (*(char *)(lVar4 + 0x30) != '\0') {
        Variant::Variant((Variant *)local_58,true);
        Variant::Variant((Variant *)local_78,"hold_previous");
        pVVar16 = (Variant *)Dictionary::operator[]((Variant *)local_90);
        if (pVVar16 != (Variant *)local_58) {
          if (Variant::needs_deinit[*(int *)pVVar16] != '\0') {
            Variant::_clear_internal();
          }
          *(undefined4 *)pVVar16 = 0;
          *(int *)pVVar16 = local_58[0];
          *(undefined8 *)(pVVar16 + 8) = local_50;
          *(undefined8 *)(pVVar16 + 0x10) = uStack_48;
          local_58[0] = 0;
        }
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
      }
      Variant::Variant((Variant *)local_58,local_90);
      if (*(long *)(pVVar1 + -8) <= local_c8) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,local_c8,*(long *)(pVVar1 + -8),"p_index"
                   ,"size()","",false,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar13 = (code *)invalidInstructionException();
        (*pcVar13)();
      }
      Variant::Variant((Variant *)local_78,pVVar19);
      pVVar16 = (Variant *)Dictionary::operator[]((Variant *)in_RDI);
      if (pVVar16 != (Variant *)local_58) {
        if (Variant::needs_deinit[*(int *)pVVar16] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)pVVar16 = 0;
        *(int *)pVVar16 = local_58[0];
        *(undefined8 *)(pVVar16 + 8) = local_50;
        *(undefined8 *)(pVVar16 + 0x10) = uStack_48;
        local_58[0] = 0;
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      pVVar19 = pVVar19 + 8;
      Dictionary::~Dictionary(local_90);
    }
    LOCK();
    pVVar1 = pVVar1 + -0x10;
    *(long *)pVVar1 = *(long *)pVVar1 + -1;
    UNLOCK();
    if (*(long *)pVVar1 == 0) {
      Memory::free_static(local_80 + -0x10,false);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return in_RDI;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AudioStreamInteractive::_inspector_array_swap_clip(unsigned int, unsigned int) */

void __thiscall
AudioStreamInteractive::_inspector_array_swap_clip
          (AudioStreamInteractive *this,uint param_1,uint param_2)

{
  AudioStreamInteractive *pAVar1;
  int *piVar2;
  uint uVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char cVar9;
  int iVar10;
  AudioStreamInteractive *pAVar11;
  long *plVar12;
  long lVar13;
  Object *pOVar14;
  int *piVar15;
  ulong uVar16;
  undefined8 *puVar17;
  long lVar18;
  Object *pOVar19;
  long lVar20;
  long *plVar21;
  long in_FS_OFFSET;
  long local_b0;
  undefined8 local_a8;
  Object *local_a0;
  undefined8 local_98;
  HashMap<AudioStreamInteractive::TransitionKey,AudioStreamInteractive::Transition,AudioStreamInteractive::TransitionKeyHasher,HashMapComparatorDefault<AudioStreamInteractive::TransitionKey>,DefaultTypedAllocator<HashMapElement<AudioStreamInteractive::TransitionKey,AudioStreamInteractive::Transition>>>
  local_88 [8];
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  uVar6 = (ulong)param_1;
  uVar3 = *(uint *)(this + 0x980);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 < uVar3) {
    uVar16 = (ulong)param_2;
    if (param_2 < uVar3) {
      if (0 < (int)uVar3) {
        pAVar11 = this + 0x374;
        pAVar1 = pAVar11 + (long)(int)uVar3 * 0x18;
        do {
          while (param_1 == *(uint *)pAVar11) {
            *(uint *)pAVar11 = param_2;
            pAVar11 = pAVar11 + 0x18;
            if (pAVar11 == pAVar1) goto LAB_0010b788;
          }
          if (param_2 == *(uint *)pAVar11) {
            *(uint *)pAVar11 = param_1;
          }
          pAVar11 = pAVar11 + 0x18;
        } while (pAVar11 != pAVar1);
      }
LAB_0010b788:
      lVar18 = 0;
      plVar21 = *(long **)(this + 0x960);
      local_b0 = 0;
      local_60 = 2;
      local_80 = (undefined1  [16])0x0;
      local_70 = (undefined1  [16])0x0;
      if (plVar21 != (long *)0x0) {
        do {
          while( true ) {
            if ((((*(uint *)(plVar21 + 2) != param_1) && (*(uint *)(plVar21 + 2) != param_2)) &&
                (param_1 != *(uint *)((long)plVar21 + 0x14))) &&
               (param_2 != *(uint *)((long)plVar21 + 0x14))) break;
            if (lVar18 == 0) {
              lVar18 = 1;
            }
            else {
              lVar18 = *(long *)(lVar18 + -8) + 1;
            }
            lVar4 = plVar21[2];
            iVar10 = CowData<AudioStreamInteractive::TransitionKey>::resize<false>
                               ((CowData<AudioStreamInteractive::TransitionKey> *)&local_b0,lVar18);
            lVar18 = local_b0;
            if (iVar10 == 0) {
              if (local_b0 == 0) {
                lVar13 = -1;
                lVar20 = 0;
              }
              else {
                lVar20 = *(long *)(local_b0 + -8);
                lVar13 = lVar20 + -1;
                if (-1 < lVar13) {
                  CowData<AudioStreamInteractive::TransitionKey>::_copy_on_write
                            ((CowData<AudioStreamInteractive::TransitionKey> *)&local_b0);
                  *(long *)(local_b0 + lVar13 * 8) = lVar4;
                  lVar18 = local_b0;
                  goto LAB_0010b860;
                }
              }
              _err_print_index_error
                        ("set","./core/templates/cowdata.h",0xcf,lVar13,lVar20,"p_index","size()",""
                         ,false,false);
            }
            else {
              _err_print_error("push_back","./core/templates/vector.h",0x142,
                               "Condition \"err\" is true. Returning: true",0,0);
              lVar18 = local_b0;
            }
LAB_0010b860:
            puVar5 = (undefined *)plVar21[2];
            local_a8._4_4_ = (uint)((ulong)puVar5 >> 0x20);
            if (param_1 == (uint)puVar5) {
              local_a8 = (undefined *)CONCAT44(local_a8._4_4_,param_2);
              puVar5 = local_a8;
            }
            else if (param_2 == (uint)puVar5) {
              local_a8 = (undefined *)CONCAT44(local_a8._4_4_,param_1);
              puVar5 = local_a8;
            }
            local_a8 = puVar5;
            if (param_1 == local_a8._4_4_) {
              local_a8 = (undefined *)CONCAT44(param_2,(undefined4)local_a8);
            }
            else if (param_2 == local_a8._4_4_) {
              local_a8 = (undefined *)CONCAT44(param_1,(undefined4)local_a8);
            }
            plVar12 = (long *)HashMap<AudioStreamInteractive::TransitionKey,AudioStreamInteractive::Transition,AudioStreamInteractive::TransitionKeyHasher,HashMapComparatorDefault<AudioStreamInteractive::TransitionKey>,DefaultTypedAllocator<HashMapElement<AudioStreamInteractive::TransitionKey,AudioStreamInteractive::Transition>>>
                              ::operator[](local_88,(TransitionKey *)&local_a8);
            lVar4 = plVar21[4];
            *plVar12 = plVar21[3];
            plVar12[1] = lVar4;
            puVar17 = (undefined8 *)((long)plVar21 + 0x21);
            uVar7 = *(undefined8 *)((long)plVar21 + 0x29);
            plVar21 = (long *)*plVar21;
            *(undefined8 *)((long)plVar12 + 9) = *puVar17;
            *(undefined8 *)((long)plVar12 + 0x11) = uVar7;
            if (plVar21 == (long *)0x0) goto LAB_0010b8bb;
          }
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
LAB_0010b8bb:
        puVar17 = (undefined8 *)local_70._0_8_;
        if ((lVar18 != 0) && (0 < *(long *)(lVar18 + -8))) {
          do {
            lVar4 = (long)plVar21 * 8;
            plVar21 = (long *)((long)plVar21 + 1);
            HashMap<AudioStreamInteractive::TransitionKey,AudioStreamInteractive::Transition,AudioStreamInteractive::TransitionKeyHasher,HashMapComparatorDefault<AudioStreamInteractive::TransitionKey>,DefaultTypedAllocator<HashMapElement<AudioStreamInteractive::TransitionKey,AudioStreamInteractive::Transition>>>
            ::erase((HashMap<AudioStreamInteractive::TransitionKey,AudioStreamInteractive::Transition,AudioStreamInteractive::TransitionKeyHasher,HashMapComparatorDefault<AudioStreamInteractive::TransitionKey>,DefaultTypedAllocator<HashMapElement<AudioStreamInteractive::TransitionKey,AudioStreamInteractive::Transition>>>
                     *)(this + 0x948),(TransitionKey *)(lVar18 + lVar4));
          } while ((long)plVar21 < *(long *)(lVar18 + -8));
        }
        for (; puVar17 != (undefined8 *)0x0; puVar17 = (undefined8 *)*puVar17) {
          HashMap<AudioStreamInteractive::TransitionKey,AudioStreamInteractive::Transition,AudioStreamInteractive::TransitionKeyHasher,HashMapComparatorDefault<AudioStreamInteractive::TransitionKey>,DefaultTypedAllocator<HashMapElement<AudioStreamInteractive::TransitionKey,AudioStreamInteractive::Transition>>>
          ::insert((TransitionKey *)&local_a8,(Transition *)(this + 0x948),
                   (bool)((char)puVar17 + '\x10'));
        }
      }
      local_a0 = (Object *)0x0;
      pAVar11 = this + uVar6 * 0x18 + 0x360;
      pOVar19 = *(Object **)(this + uVar6 * 0x18 + 0x368);
      local_a8 = *(undefined **)pAVar11;
      *(undefined8 *)pAVar11 = 0;
      if (pOVar19 != (Object *)0x0) {
        local_a0 = pOVar19;
        cVar9 = RefCounted::reference();
        if (cVar9 == '\0') {
          local_a0 = (Object *)0x0;
        }
        pOVar19 = *(Object **)pAVar11;
      }
      local_98 = *(undefined8 *)(this + uVar6 * 0x18 + 0x370);
      if (*(Object **)(this + uVar16 * 0x18 + 0x360) != pOVar19) {
        StringName::unref();
        *(undefined8 *)(this + uVar6 * 0x18 + 0x360) = *(undefined8 *)(this + uVar16 * 0x18 + 0x360)
        ;
        *(undefined8 *)(this + uVar16 * 0x18 + 0x360) = 0;
      }
      pOVar19 = *(Object **)(this + uVar16 * 0x18 + 0x368);
      pOVar14 = *(Object **)(this + uVar6 * 0x18 + 0x368);
      if (pOVar19 != pOVar14) {
        *(Object **)(this + uVar6 * 0x18 + 0x368) = pOVar19;
        if ((pOVar19 != (Object *)0x0) && (cVar9 = RefCounted::reference(), cVar9 == '\0')) {
          *(undefined8 *)(this + uVar6 * 0x18 + 0x368) = 0;
        }
        if (((pOVar14 != (Object *)0x0) && (cVar9 = RefCounted::unreference(), cVar9 != '\0')) &&
           (cVar9 = predelete_handler(pOVar14), cVar9 != '\0')) {
          (**(code **)(*(long *)pOVar14 + 0x140))(pOVar14);
          Memory::free_static(pOVar14,false);
        }
      }
      *(undefined4 *)(this + uVar6 * 0x18 + 0x370) = *(undefined4 *)(this + uVar16 * 0x18 + 0x370);
      *(undefined4 *)(this + uVar6 * 0x18 + 0x374) = *(undefined4 *)(this + uVar16 * 0x18 + 0x374);
      if ((undefined *)*(long *)(this + uVar16 * 0x18 + 0x360) != local_a8) {
        StringName::unref();
        lVar18 = (long)local_a8;
        local_a8 = (undefined *)0x0;
        *(long *)(this + uVar16 * 0x18 + 0x360) = lVar18;
      }
      pOVar19 = *(Object **)(this + uVar16 * 0x18 + 0x368);
      pOVar14 = pOVar19;
      if (local_a0 != pOVar19) {
        *(Object **)(this + uVar16 * 0x18 + 0x368) = local_a0;
        if ((local_a0 != (Object *)0x0) && (cVar9 = RefCounted::reference(), cVar9 == '\0')) {
          *(undefined8 *)(this + uVar16 * 0x18 + 0x368) = 0;
        }
        pOVar14 = local_a0;
        if (((pOVar19 != (Object *)0x0) &&
            (cVar9 = RefCounted::unreference(), pOVar14 = local_a0, cVar9 != '\0')) &&
           (cVar9 = predelete_handler(pOVar19), pOVar14 = local_a0, cVar9 != '\0')) {
          (**(code **)(*(long *)pOVar19 + 0x140))(pOVar19);
          Memory::free_static(pOVar19,false);
          pOVar14 = local_a0;
        }
      }
      *(undefined8 *)(this + uVar16 * 0x18 + 0x370) = local_98;
      if (((pOVar14 != (Object *)0x0) &&
          (cVar9 = RefCounted::unreference(), pOVar19 = local_a0, cVar9 != '\0')) &&
         (cVar9 = predelete_handler(local_a0), cVar9 != '\0')) {
        (**(code **)(*(long *)pOVar19 + 0x140))(pOVar19);
        Memory::free_static(pOVar19,false);
      }
      if ((StringName::configured != '\0') && (local_a8 != (undefined *)0x0)) {
        StringName::unref();
      }
      local_a0 = (Object *)0x0;
      local_a8 = &_LC5;
      String::parse_latin1((StrRange *)(this + 0x9b0));
      Object::notify_property_list_changed();
      if ((_inspector_array_swap_clip(unsigned_int,unsigned_int)::{lambda()#1}::operator()()::sname
           == '\0') &&
         (iVar10 = __cxa_guard_acquire(&_inspector_array_swap_clip(unsigned_int,unsigned_int)::
                                        {lambda()#1}::operator()()::sname), iVar10 != 0)) {
        _scs_create((char *)&_inspector_array_swap_clip(unsigned_int,unsigned_int)::{lambda()#1}::
                             operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &_inspector_array_swap_clip(unsigned_int,unsigned_int)::{lambda()#1}::
                      operator()()::sname,&__dso_handle);
        __cxa_guard_release(&_inspector_array_swap_clip(unsigned_int,unsigned_int)::{lambda()#1}::
                             operator()()::sname);
      }
      local_50 = (undefined1  [16])0x0;
      local_58 = 0;
      (**(code **)(*(long *)this + 0xd0))
                (this,&_inspector_array_swap_clip(unsigned_int,unsigned_int)::{lambda()#1}::
                       operator()()::sname,0,0);
      if (Variant::needs_deinit[(int)local_58] != '\0') {
        Variant::_clear_internal();
      }
      uVar7 = local_80._0_8_;
      if ((undefined8 *)local_80._0_8_ != (undefined8 *)0x0) {
        uVar8 = local_80._8_8_;
        if ((local_60._4_4_ != 0) &&
           (*(uint *)(hash_table_size_primes + (local_60 & 0xffffffff) * 4) != 0)) {
          piVar2 = (int *)(local_80._8_8_ +
                          (ulong)*(uint *)(hash_table_size_primes + (local_60 & 0xffffffff) * 4) * 4
                          );
          piVar15 = (int *)local_80._8_8_;
          puVar17 = (undefined8 *)local_80._0_8_;
          do {
            if (*piVar15 != 0) {
              *piVar15 = 0;
              Memory::free_static((void *)*puVar17,false);
              *puVar17 = 0;
            }
            piVar15 = piVar15 + 1;
            puVar17 = puVar17 + 1;
          } while (piVar15 != piVar2);
        }
        Memory::free_static((void *)uVar7,false);
        Memory::free_static((void *)uVar8,false);
      }
      if (local_b0 != 0) {
        LOCK();
        plVar21 = (long *)(local_b0 + -0x10);
        *plVar21 = *plVar21 + -1;
        UNLOCK();
        if (*plVar21 == 0) {
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            Memory::free_static((void *)(local_b0 + -0x10),false);
            return;
          }
          goto LAB_0010bef2;
        }
      }
    }
    else {
      _err_print_index_error
                ("_inspector_array_swap_clip",
                 "modules/interactive_music/audio_stream_interactive.cpp",0x164,(ulong)param_2,
                 (ulong)uVar3,"p_item_b","(uint32_t)clip_count","",false,false);
    }
  }
  else {
    _err_print_index_error
              ("_inspector_array_swap_clip","modules/interactive_music/audio_stream_interactive.cpp"
               ,0x163,uVar6,(ulong)uVar3,"p_item_a","(uint32_t)clip_count","",false,false);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010bef2:
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



/* AudioStreamInteractive::is_class_ptr(void*) const */

uint __thiscall AudioStreamInteractive::is_class_ptr(AudioStreamInteractive *this,void *param_1)

{
  return (uint)CONCAT71(0x125f,(undefined4 *)param_1 == &AudioStream::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x125f,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x125f,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x125f,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x125f,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* AudioStreamInteractive::_getv(StringName const&, Variant&) const */

undefined8 AudioStreamInteractive::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* AudioStreamInteractive::_setv(StringName const&, Variant const&) */

undefined8 AudioStreamInteractive::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* AudioStreamInteractive::_property_can_revertv(StringName const&) const */

undefined8 AudioStreamInteractive::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* AudioStreamInteractive::_property_get_revertv(StringName const&, Variant&) const */

undefined8 AudioStreamInteractive::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* AudioStreamInteractive::_notificationv(int, bool) */

void AudioStreamInteractive::_notificationv(int param_1,bool param_2)

{
  return;
}



/* AudioStreamInteractive::get_length() const */

undefined8 AudioStreamInteractive::get_length(void)

{
  return 0;
}



/* AudioStreamInteractive::is_meta_stream() const */

undefined8 AudioStreamInteractive::is_meta_stream(void)

{
  return 1;
}



/* AudioStreamPlaybackInteractive::is_class_ptr(void*) const */

uint __thiscall
AudioStreamPlaybackInteractive::is_class_ptr(AudioStreamPlaybackInteractive *this,void *param_1)

{
  return (uint)CONCAT71(0x125f,(undefined4 *)param_1 ==
                               &AudioStreamPlayback::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x125f,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x125f,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x125f,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* AudioStreamPlaybackInteractive::_getv(StringName const&, Variant&) const */

undefined8 AudioStreamPlaybackInteractive::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* AudioStreamPlaybackInteractive::_setv(StringName const&, Variant const&) */

undefined8 AudioStreamPlaybackInteractive::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* AudioStreamPlaybackInteractive::_validate_propertyv(PropertyInfo&) const */

void AudioStreamPlaybackInteractive::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* AudioStreamPlaybackInteractive::_property_can_revertv(StringName const&) const */

undefined8 AudioStreamPlaybackInteractive::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* AudioStreamPlaybackInteractive::_property_get_revertv(StringName const&, Variant&) const */

undefined8
AudioStreamPlaybackInteractive::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* AudioStreamPlaybackInteractive::_notificationv(int, bool) */

void AudioStreamPlaybackInteractive::_notificationv(int param_1,bool param_2)

{
  return;
}



/* MethodBindT<StringName const&>::_gen_argument_type(int) const */

byte __thiscall
MethodBindT<StringName_const&>::_gen_argument_type(MethodBindT<StringName_const&> *this,int param_1)

{
  return -(param_1 == 0) & 0x15;
}



/* MethodBindT<StringName const&>::get_argument_meta(int) const */

undefined8 MethodBindT<StringName_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<Dictionary>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<Dictionary>::_gen_argument_type(int param_1)

{
  return 0x1b;
}



/* MethodBindTRC<Dictionary>::get_argument_meta(int) const */

undefined8 MethodBindTRC<Dictionary>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Dictionary const&>::_gen_argument_type(int) const */

byte __thiscall
MethodBindT<Dictionary_const&>::_gen_argument_type(MethodBindT<Dictionary_const&> *this,int param_1)

{
  return -(param_1 == 0) & 0x1b;
}



/* MethodBindT<Dictionary const&>::get_argument_meta(int) const */

undefined8 MethodBindT<Dictionary_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<int, int, int>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<int,int,int>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<int, int, int>::get_argument_meta(int) const */

char __thiscall
MethodBindTRC<int,int,int>::get_argument_meta(MethodBindTRC<int,int,int> *this,int param_1)

{
  return (param_1 < 2) * '\x03';
}



/* MethodBindTRC<float, int, int>::_gen_argument_type(int) const */

char __thiscall
MethodBindTRC<float,int,int>::_gen_argument_type(MethodBindTRC<float,int,int> *this,int param_1)

{
  return (1U < (uint)param_1) + '\x02';
}



/* MethodBindTRC<float, int, int>::get_argument_meta(int) const */

byte __thiscall
MethodBindTRC<float,int,int>::get_argument_meta(MethodBindTRC<float,int,int> *this,int param_1)

{
  if (-1 < param_1) {
    return -((uint)param_1 < 2) & 3;
  }
  return 9;
}



/* MethodBindTRC<AudioStreamInteractive::FadeMode, int, int>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<AudioStreamInteractive::FadeMode,int,int>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<AudioStreamInteractive::FadeMode, int, int>::get_argument_meta(int) const */

byte __thiscall
MethodBindTRC<AudioStreamInteractive::FadeMode,int,int>::get_argument_meta
          (MethodBindTRC<AudioStreamInteractive::FadeMode,int,int> *this,int param_1)

{
  return -((uint)param_1 < 2) & 3;
}



/* MethodBindTRC<AudioStreamInteractive::TransitionToTime, int, int>::_gen_argument_type(int) const
    */

undefined8
MethodBindTRC<AudioStreamInteractive::TransitionToTime,int,int>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<AudioStreamInteractive::TransitionToTime, int, int>::get_argument_meta(int) const
    */

byte __thiscall
MethodBindTRC<AudioStreamInteractive::TransitionToTime,int,int>::get_argument_meta
          (MethodBindTRC<AudioStreamInteractive::TransitionToTime,int,int> *this,int param_1)

{
  return -((uint)param_1 < 2) & 3;
}



/* MethodBindTRC<AudioStreamInteractive::TransitionFromTime, int, int>::_gen_argument_type(int)
   const */

undefined8
MethodBindTRC<AudioStreamInteractive::TransitionFromTime,int,int>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<AudioStreamInteractive::TransitionFromTime, int, int>::get_argument_meta(int) const
    */

byte __thiscall
MethodBindTRC<AudioStreamInteractive::TransitionFromTime,int,int>::get_argument_meta
          (MethodBindTRC<AudioStreamInteractive::TransitionFromTime,int,int> *this,int param_1)

{
  return -((uint)param_1 < 2) & 3;
}



/* MethodBindTRC<Vector<int>>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<Vector<int>>::_gen_argument_type(int param_1)

{
  return 0x1e;
}



/* MethodBindTRC<Vector<int>>::get_argument_meta(int) const */

undefined8 MethodBindTRC<Vector<int>>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<bool, int, int>::_gen_argument_type(int) const */

char __thiscall
MethodBindTRC<bool,int,int>::_gen_argument_type(MethodBindTRC<bool,int,int> *this,int param_1)

{
  return ((uint)param_1 < 2) + '\x01';
}



/* MethodBindTRC<bool, int, int>::get_argument_meta(int) const */

byte __thiscall
MethodBindTRC<bool,int,int>::get_argument_meta(MethodBindTRC<bool,int,int> *this,int param_1)

{
  return -((uint)param_1 < 2) & 3;
}



/* MethodBindTRC<int, int>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<int,int>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<int, int>::get_argument_meta(int) const */

char __thiscall MethodBindTRC<int,int>::get_argument_meta(MethodBindTRC<int,int> *this,int param_1)

{
  return (param_1 < 1) * '\x03';
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



/* MethodBindTRC<AudioStreamInteractive::AutoAdvanceMode, int>::_gen_argument_type(int) const */

undefined8
MethodBindTRC<AudioStreamInteractive::AutoAdvanceMode,int>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<AudioStreamInteractive::AutoAdvanceMode, int>::get_argument_meta(int) const */

byte __thiscall
MethodBindTRC<AudioStreamInteractive::AutoAdvanceMode,int>::get_argument_meta
          (MethodBindTRC<AudioStreamInteractive::AutoAdvanceMode,int> *this,int param_1)

{
  return -(param_1 == 0) & 3;
}



/* MethodBindT<int, AudioStreamInteractive::AutoAdvanceMode>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<int,AudioStreamInteractive::AutoAdvanceMode>::_gen_argument_type
          (MethodBindT<int,AudioStreamInteractive::AutoAdvanceMode> *this,int param_1)

{
  return ((uint)param_1 < 2) * '\x02';
}



/* MethodBindT<int, AudioStreamInteractive::AutoAdvanceMode>::get_argument_meta(int) const */

byte __thiscall
MethodBindT<int,AudioStreamInteractive::AutoAdvanceMode>::get_argument_meta
          (MethodBindT<int,AudioStreamInteractive::AutoAdvanceMode> *this,int param_1)

{
  return -(param_1 == 0) & 3;
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



/* MethodBindT<int, Ref<AudioStream> const&>::_gen_argument_type(int) const */

int __thiscall
MethodBindT<int,Ref<AudioStream>const&>::_gen_argument_type
          (MethodBindT<int,Ref<AudioStream>const&> *this,int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if ((uint)param_1 < 2) {
    iVar1 = (-(uint)(param_1 == 0) & 0xffffffea) + 0x18;
  }
  return iVar1;
}



/* MethodBindT<int, Ref<AudioStream> const&>::get_argument_meta(int) const */

byte __thiscall
MethodBindT<int,Ref<AudioStream>const&>::get_argument_meta
          (MethodBindT<int,Ref<AudioStream>const&> *this,int param_1)

{
  return -(param_1 == 0) & 3;
}



/* MethodBindTRC<StringName, int>::_gen_argument_type(int) const */

int __thiscall
MethodBindTRC<StringName,int>::_gen_argument_type(MethodBindTRC<StringName,int> *this,int param_1)

{
  return (-(uint)(param_1 == 0) & 0xffffffed) + 0x15;
}



/* MethodBindTRC<StringName, int>::get_argument_meta(int) const */

byte __thiscall
MethodBindTRC<StringName,int>::get_argument_meta(MethodBindTRC<StringName,int> *this,int param_1)

{
  return -(param_1 == 0) & 3;
}



/* MethodBindT<int, StringName const&>::_gen_argument_type(int) const */

int __thiscall
MethodBindT<int,StringName_const&>::_gen_argument_type
          (MethodBindT<int,StringName_const&> *this,int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if ((uint)param_1 < 2) {
    iVar1 = (-(uint)(param_1 == 0) & 0xffffffed) + 0x15;
  }
  return iVar1;
}



/* MethodBindT<int, StringName const&>::get_argument_meta(int) const */

byte __thiscall
MethodBindT<int,StringName_const&>::get_argument_meta
          (MethodBindT<int,StringName_const&> *this,int param_1)

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



/* MethodBindT<unsigned int, unsigned int>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<unsigned_int,unsigned_int>::_gen_argument_type
          (MethodBindT<unsigned_int,unsigned_int> *this,int param_1)

{
  return ((uint)param_1 < 2) * '\x02';
}



/* MethodBindT<unsigned int, unsigned int>::get_argument_meta(int) const */

byte __thiscall
MethodBindT<unsigned_int,unsigned_int>::get_argument_meta
          (MethodBindT<unsigned_int,unsigned_int> *this,int param_1)

{
  return -((uint)param_1 < 2) & 7;
}



/* MethodBindTRC<Vector<String>, String const&, Variant const&>::_gen_argument_type(int) const */

uint __thiscall
MethodBindTRC<Vector<String>,String_const&,Variant_const&>::_gen_argument_type
          (MethodBindTRC<Vector<String>,String_const&,Variant_const&> *this,int param_1)

{
  uint uVar1;
  
  uVar1 = param_1 * 4 ^ 4;
  if (1 < (uint)param_1) {
    uVar1 = 0x22;
  }
  return uVar1;
}



/* MethodBindTRC<Vector<String>, String const&, Variant const&>::get_argument_meta(int) const */

undefined8
MethodBindTRC<Vector<String>,String_const&,Variant_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<int, int, AudioStreamInteractive::TransitionFromTime,
   AudioStreamInteractive::TransitionToTime, AudioStreamInteractive::FadeMode, float, bool, int,
   bool>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<int,int,AudioStreamInteractive::TransitionFromTime,AudioStreamInteractive::TransitionToTime,AudioStreamInteractive::FadeMode,float,bool,int,bool>
::_gen_argument_type
          (MethodBindT<int,int,AudioStreamInteractive::TransitionFromTime,AudioStreamInteractive::TransitionToTime,AudioStreamInteractive::FadeMode,float,bool,int,bool>
           *this,int param_1)

{
  char cVar1;
  
  cVar1 = '\0';
  if (((((uint)param_1 < 9) && (cVar1 = '\x02', param_1 != 0)) && (3 < param_1 - 1U)) &&
     ((cVar1 = '\x03', param_1 != 5 && (cVar1 = '\x01', param_1 != 6)))) {
    return (param_1 == 7) + '\x01';
  }
  return cVar1;
}



/* MethodBindT<int, int, AudioStreamInteractive::TransitionFromTime,
   AudioStreamInteractive::TransitionToTime, AudioStreamInteractive::FadeMode, float, bool, int,
   bool>::get_argument_meta(int) const */

char __thiscall
MethodBindT<int,int,AudioStreamInteractive::TransitionFromTime,AudioStreamInteractive::TransitionToTime,AudioStreamInteractive::FadeMode,float,bool,int,bool>
::get_argument_meta(MethodBindT<int,int,AudioStreamInteractive::TransitionFromTime,AudioStreamInteractive::TransitionToTime,AudioStreamInteractive::FadeMode,float,bool,int,bool>
                    *this,int param_1)

{
  char cVar1;
  
  cVar1 = '\x03';
  if ((((param_1 != 0) && (param_1 != 1)) && (cVar1 = '\0', param_1 != 2)) &&
     (((param_1 != 3 && (param_1 != 4)) &&
      ((cVar1 = '\t', param_1 != 5 && (cVar1 = '\0', param_1 != 6)))))) {
    return (param_1 == 7) * '\x03';
  }
  return cVar1;
}



/* MethodBindTRC<Vector<String>, String const&, Variant const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Vector<String>,String_const&,Variant_const&>::~MethodBindTRC
          (MethodBindTRC<Vector<String>,String_const&,Variant_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00125690;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Vector<String>, String const&, Variant const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Vector<String>,String_const&,Variant_const&>::~MethodBindTRC
          (MethodBindTRC<Vector<String>,String_const&,Variant_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00125690;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<unsigned int, unsigned int>::~MethodBindT() */

void __thiscall
MethodBindT<unsigned_int,unsigned_int>::~MethodBindT(MethodBindT<unsigned_int,unsigned_int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001256f0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<unsigned int, unsigned int>::~MethodBindT() */

void __thiscall
MethodBindT<unsigned_int,unsigned_int>::~MethodBindT(MethodBindT<unsigned_int,unsigned_int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001256f0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<int>::~MethodBindT() */

void __thiscall MethodBindT<int>::~MethodBindT(MethodBindT<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00125750;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<int>::~MethodBindT() */

void __thiscall MethodBindT<int>::~MethodBindT(MethodBindT<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00125750;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001257b0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001257b0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<int, StringName const&>::~MethodBindT() */

void __thiscall
MethodBindT<int,StringName_const&>::~MethodBindT(MethodBindT<int,StringName_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00125810;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<int, StringName const&>::~MethodBindT() */

void __thiscall
MethodBindT<int,StringName_const&>::~MethodBindT(MethodBindT<int,StringName_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00125810;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<StringName, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<StringName,int>::~MethodBindTRC(MethodBindTRC<StringName,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00125870;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<StringName, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<StringName,int>::~MethodBindTRC(MethodBindTRC<StringName,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00125870;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<int, Ref<AudioStream> const&>::~MethodBindT() */

void __thiscall
MethodBindT<int,Ref<AudioStream>const&>::~MethodBindT(MethodBindT<int,Ref<AudioStream>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001258d0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<int, Ref<AudioStream> const&>::~MethodBindT() */

void __thiscall
MethodBindT<int,Ref<AudioStream>const&>::~MethodBindT(MethodBindT<int,Ref<AudioStream>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001258d0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Ref<AudioStream>, int>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Ref<AudioStream>,int>::~MethodBindTRC(MethodBindTRC<Ref<AudioStream>,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00125930;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Ref<AudioStream>, int>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Ref<AudioStream>,int>::~MethodBindTRC(MethodBindTRC<Ref<AudioStream>,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00125930;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<int, AudioStreamInteractive::AutoAdvanceMode>::~MethodBindT() */

void __thiscall
MethodBindT<int,AudioStreamInteractive::AutoAdvanceMode>::~MethodBindT
          (MethodBindT<int,AudioStreamInteractive::AutoAdvanceMode> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00125990;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<int, AudioStreamInteractive::AutoAdvanceMode>::~MethodBindT() */

void __thiscall
MethodBindT<int,AudioStreamInteractive::AutoAdvanceMode>::~MethodBindT
          (MethodBindT<int,AudioStreamInteractive::AutoAdvanceMode> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00125990;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<AudioStreamInteractive::AutoAdvanceMode, int>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<AudioStreamInteractive::AutoAdvanceMode,int>::~MethodBindTRC
          (MethodBindTRC<AudioStreamInteractive::AutoAdvanceMode,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001259f0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<AudioStreamInteractive::AutoAdvanceMode, int>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<AudioStreamInteractive::AutoAdvanceMode,int>::~MethodBindTRC
          (MethodBindTRC<AudioStreamInteractive::AutoAdvanceMode,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001259f0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<int, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int,int>::~MethodBindTRC(MethodBindTRC<int,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00125ab0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<int, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int,int>::~MethodBindTRC(MethodBindTRC<int,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00125ab0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<int, int, AudioStreamInteractive::TransitionFromTime,
   AudioStreamInteractive::TransitionToTime, AudioStreamInteractive::FadeMode, float, bool, int,
   bool>::~MethodBindT() */

void __thiscall
MethodBindT<int,int,AudioStreamInteractive::TransitionFromTime,AudioStreamInteractive::TransitionToTime,AudioStreamInteractive::FadeMode,float,bool,int,bool>
::~MethodBindT(MethodBindT<int,int,AudioStreamInteractive::TransitionFromTime,AudioStreamInteractive::TransitionToTime,AudioStreamInteractive::FadeMode,float,bool,int,bool>
               *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00125b10;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<int, int, AudioStreamInteractive::TransitionFromTime,
   AudioStreamInteractive::TransitionToTime, AudioStreamInteractive::FadeMode, float, bool, int,
   bool>::~MethodBindT() */

void __thiscall
MethodBindT<int,int,AudioStreamInteractive::TransitionFromTime,AudioStreamInteractive::TransitionToTime,AudioStreamInteractive::FadeMode,float,bool,int,bool>
::~MethodBindT(MethodBindT<int,int,AudioStreamInteractive::TransitionFromTime,AudioStreamInteractive::TransitionToTime,AudioStreamInteractive::FadeMode,float,bool,int,bool>
               *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00125b10;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<int, int>::~MethodBindT() */

void __thiscall MethodBindT<int,int>::~MethodBindT(MethodBindT<int,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00125a50;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<int, int>::~MethodBindT() */

void __thiscall MethodBindT<int,int>::~MethodBindT(MethodBindT<int,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00125a50;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Vector<int>>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Vector<int>>::~MethodBindTRC(MethodBindTRC<Vector<int>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00125bd0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Vector<int>>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Vector<int>>::~MethodBindTRC(MethodBindTRC<Vector<int>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00125bd0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<AudioStreamInteractive::TransitionFromTime, int, int>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<AudioStreamInteractive::TransitionFromTime,int,int>::~MethodBindTRC
          (MethodBindTRC<AudioStreamInteractive::TransitionFromTime,int,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00125c30;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<AudioStreamInteractive::TransitionFromTime, int, int>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<AudioStreamInteractive::TransitionFromTime,int,int>::~MethodBindTRC
          (MethodBindTRC<AudioStreamInteractive::TransitionFromTime,int,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00125c30;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<AudioStreamInteractive::TransitionToTime, int, int>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<AudioStreamInteractive::TransitionToTime,int,int>::~MethodBindTRC
          (MethodBindTRC<AudioStreamInteractive::TransitionToTime,int,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00125c90;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<AudioStreamInteractive::TransitionToTime, int, int>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<AudioStreamInteractive::TransitionToTime,int,int>::~MethodBindTRC
          (MethodBindTRC<AudioStreamInteractive::TransitionToTime,int,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00125c90;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<AudioStreamInteractive::FadeMode, int, int>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<AudioStreamInteractive::FadeMode,int,int>::~MethodBindTRC
          (MethodBindTRC<AudioStreamInteractive::FadeMode,int,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00125cf0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<AudioStreamInteractive::FadeMode, int, int>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<AudioStreamInteractive::FadeMode,int,int>::~MethodBindTRC
          (MethodBindTRC<AudioStreamInteractive::FadeMode,int,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00125cf0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<float, int, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<float,int,int>::~MethodBindTRC(MethodBindTRC<float,int,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00125d50;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<float, int, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<float,int,int>::~MethodBindTRC(MethodBindTRC<float,int,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00125d50;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<int, int, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int,int,int>::~MethodBindTRC(MethodBindTRC<int,int,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00125db0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<int, int, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int,int,int>::~MethodBindTRC(MethodBindTRC<int,int,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00125db0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<bool, int, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool,int,int>::~MethodBindTRC(MethodBindTRC<bool,int,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00125b70;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<bool, int, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool,int,int>::~MethodBindTRC(MethodBindTRC<bool,int,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00125b70;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Dictionary const&>::~MethodBindT() */

void __thiscall MethodBindT<Dictionary_const&>::~MethodBindT(MethodBindT<Dictionary_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00125e10;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Dictionary const&>::~MethodBindT() */

void __thiscall MethodBindT<Dictionary_const&>::~MethodBindT(MethodBindT<Dictionary_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00125e10;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Dictionary>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Dictionary>::~MethodBindTRC(MethodBindTRC<Dictionary> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00125e70;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Dictionary>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Dictionary>::~MethodBindTRC(MethodBindTRC<Dictionary> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00125e70;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<StringName const&>::~MethodBindT() */

void __thiscall MethodBindT<StringName_const&>::~MethodBindT(MethodBindT<StringName_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00125ed0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<StringName const&>::~MethodBindT() */

void __thiscall MethodBindT<StringName_const&>::~MethodBindT(MethodBindT<StringName_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00125ed0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* CowData<AudioStreamInteractive::TransitionKey>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<AudioStreamInteractive::TransitionKey>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Vector2i>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Vector2i>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<int>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<int>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* AudioStreamPlaybackInteractive::_bind_methods() [clone .cold] */

void AudioStreamPlaybackInteractive::_bind_methods(void)

{
  code *pcVar1;
  
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



/* AudioStreamInteractive::get_save_class() const */

AudioStreamInteractive * __thiscall
AudioStreamInteractive::get_save_class(AudioStreamInteractive *this)

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



/* SortArray<Vector2i, _DefaultComparator<Vector2i>, true>::introsort(long, long, Vector2i*, long)
   const [clone .isra.0] */

void SortArray<Vector2i,_DefaultComparator<Vector2i>,true>::introsort
               (long param_1,long param_2,Vector2i *param_3,long param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  Vector2i *pVVar5;
  long lVar6;
  Vector2i *pVVar7;
  Vector2i *pVVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  Vector2i *pVVar16;
  bool bVar17;
  
  lVar13 = param_2 - param_1;
  if (lVar13 < 0x11) {
    return;
  }
  if (param_4 != 0) {
    pVVar16 = param_3 + param_1 * 8;
    lVar14 = param_2;
LAB_0010dacb:
    iVar1 = *(int *)pVVar16;
    param_4 = param_4 + -1;
    pVVar7 = param_3 + ((lVar13 >> 1) + param_1) * 8;
    iVar2 = *(int *)pVVar7;
    bVar17 = iVar1 < iVar2;
    if (iVar1 == iVar2) {
      bVar17 = *(int *)(pVVar16 + 4) < *(int *)(pVVar7 + 4);
    }
    pVVar8 = param_3 + lVar14 * 8 + -8;
    iVar3 = *(int *)pVVar8;
    if (bVar17) {
      bVar17 = iVar2 < iVar3;
      if (iVar2 == iVar3) {
        bVar17 = *(int *)(pVVar7 + 4) < *(int *)(pVVar8 + 4);
      }
      pVVar5 = pVVar7;
      iVar11 = iVar2;
      if (!bVar17) {
        bVar17 = iVar1 < iVar3;
        if (iVar1 == iVar3) {
          bVar17 = *(int *)(pVVar16 + 4) < *(int *)(pVVar8 + 4);
        }
        pVVar5 = pVVar8;
        iVar11 = iVar3;
        if (!bVar17) {
          pVVar5 = pVVar16;
          iVar11 = iVar1;
        }
      }
    }
    else {
      bVar17 = iVar1 < iVar3;
      if (iVar1 == iVar3) {
        bVar17 = *(int *)(pVVar16 + 4) < *(int *)(pVVar8 + 4);
      }
      pVVar5 = pVVar16;
      iVar11 = iVar1;
      if (!bVar17) {
        bVar17 = iVar2 < iVar3;
        if (iVar2 == iVar3) {
          bVar17 = *(int *)(pVVar7 + 4) < *(int *)(pVVar8 + 4);
        }
        pVVar5 = pVVar8;
        iVar11 = iVar3;
        if (!bVar17) {
          pVVar5 = pVVar7;
          iVar11 = iVar2;
        }
      }
    }
    iVar1 = *(int *)(pVVar5 + 4);
    lVar13 = lVar14;
    param_2 = param_1;
    do {
      if (*(int *)(param_3 + param_2 * 8) == iVar11) {
        if (iVar1 <= *(int *)(param_3 + param_2 * 8 + 4)) goto LAB_0010db91;
LAB_0010db72:
        if (lVar14 + -1 == param_2) {
          _err_print_error("partitioner","./core/templates/sort_array.h",0xb2,
                           "bad comparison function; sorting will be broken",0,0);
          goto LAB_0010db91;
        }
      }
      else {
        if (*(int *)(param_3 + param_2 * 8) < iVar11) goto LAB_0010db72;
LAB_0010db91:
        pVVar7 = param_3 + lVar13 * 8 + -8;
        do {
          pVVar8 = pVVar7;
          lVar13 = lVar13 + -1;
          bVar17 = iVar11 < *(int *)pVVar8;
          if (*(int *)pVVar8 == iVar11) {
            bVar17 = iVar1 < *(int *)(pVVar8 + 4);
          }
          if (!bVar17) goto joined_r0x0010dbc6;
          pVVar7 = pVVar8 + -8;
        } while (param_1 != lVar13);
        _err_print_error("partitioner","./core/templates/sort_array.h",0xb9,
                         "bad comparison function; sorting will be broken",0,0);
joined_r0x0010dbc6:
        if (lVar13 <= param_2) goto LAB_0010dc2e;
        uVar4 = *(undefined8 *)(param_3 + param_2 * 8);
        *(undefined8 *)(param_3 + param_2 * 8) = *(undefined8 *)pVVar8;
        *(undefined8 *)pVVar8 = uVar4;
      }
      param_2 = param_2 + 1;
    } while( true );
  }
LAB_0010dd28:
  lVar12 = lVar13 + -2 >> 1;
  lVar14 = lVar12 * 2 + 2;
  pVVar16 = param_3 + (param_1 + lVar12) * 8;
  do {
    uVar4 = *(undefined8 *)pVVar16;
    lVar10 = lVar12;
    lVar6 = lVar14;
    pVVar7 = pVVar16;
    while (lVar6 < lVar13) {
      pVVar8 = param_3 + (param_1 + lVar6) * 8;
      pVVar7 = param_3 + (param_1 + lVar6 + -1) * 8;
      bVar17 = *(int *)pVVar8 < *(int *)pVVar7;
      if (*(int *)pVVar7 == *(int *)pVVar8) {
        bVar17 = *(int *)(pVVar8 + 4) < *(int *)(pVVar7 + 4);
      }
      lVar15 = lVar6 + -1;
      lVar9 = lVar6;
      if (!bVar17) {
        lVar9 = lVar6 + 1;
        lVar15 = lVar6;
        pVVar7 = pVVar8;
      }
      *(undefined8 *)(param_3 + (lVar10 + param_1) * 8) = *(undefined8 *)pVVar7;
      lVar10 = lVar15;
      lVar6 = lVar9 * 2;
    }
    if (lVar6 == lVar13) {
      *(undefined8 *)pVVar7 = *(undefined8 *)(param_3 + (param_1 + lVar13 + -1) * 8);
      lVar10 = lVar13 + -1;
      pVVar7 = param_3 + (param_1 + lVar13 + -1) * 8;
    }
    lVar6 = lVar10 + -1;
    if (lVar12 < lVar10) {
      do {
        lVar15 = lVar6 >> 1;
        pVVar7 = param_3 + (param_1 + lVar15) * 8;
        bVar17 = *(int *)pVVar7 < (int)uVar4;
        if (*(int *)pVVar7 == (int)uVar4) {
          bVar17 = *(int *)(pVVar7 + 4) < (int)((ulong)uVar4 >> 0x20);
        }
        if (!bVar17) {
          *(undefined8 *)(param_3 + (lVar10 + param_1) * 8) = uVar4;
          goto joined_r0x0010de64;
        }
        *(undefined8 *)(param_3 + (lVar10 + param_1) * 8) = *(undefined8 *)pVVar7;
        lVar6 = (lVar15 + -1) - (lVar15 + -1 >> 0x3f);
        lVar10 = lVar15;
      } while (lVar12 < lVar15);
      *(undefined8 *)pVVar7 = uVar4;
joined_r0x0010de64:
      if (lVar12 == 0) goto LAB_0010de83;
    }
    else {
      *(undefined8 *)pVVar7 = uVar4;
    }
    lVar12 = lVar12 + -1;
    pVVar16 = pVVar16 + -8;
    lVar14 = lVar14 + -2;
  } while( true );
LAB_0010dc2e:
  introsort(param_2,lVar14,param_3,param_4);
  lVar13 = param_2 - param_1;
  if (lVar13 < 0x11) {
    return;
  }
  lVar14 = param_2;
  if (param_4 == 0) goto LAB_0010dd28;
  goto LAB_0010dacb;
LAB_0010de83:
  pVVar7 = param_3 + param_1 * 8;
  pVVar16 = param_3 + (param_2 + -1) * 8 + -8;
  lVar13 = (param_2 + -1) - param_1;
LAB_0010de9c:
  do {
    uVar4 = *(undefined8 *)(pVVar16 + 8);
    *(undefined8 *)(pVVar16 + 8) = *(undefined8 *)pVVar7;
    if (lVar13 < 3) {
      pVVar8 = pVVar7;
      if (lVar13 != 2) {
        *(undefined8 *)pVVar7 = uVar4;
        return;
      }
LAB_0010dfc7:
      *(undefined8 *)pVVar8 = *(undefined8 *)pVVar16;
      lVar6 = lVar13 + -1;
      lVar14 = lVar13 + -2 >> 1;
    }
    else {
      lVar14 = 2;
      lVar12 = 0;
      do {
        pVVar5 = param_3 + (param_1 + lVar14) * 8;
        pVVar8 = param_3 + (param_1 + lVar14 + -1) * 8;
        bVar17 = *(int *)pVVar5 < *(int *)pVVar8;
        if (*(int *)pVVar8 == *(int *)pVVar5) {
          bVar17 = *(int *)(pVVar5 + 4) < *(int *)(pVVar8 + 4);
        }
        lVar6 = lVar14 + -1;
        lVar10 = lVar14;
        if (!bVar17) {
          lVar10 = lVar14 + 1;
          lVar6 = lVar14;
          pVVar8 = pVVar5;
        }
        lVar14 = lVar10 * 2;
        *(undefined8 *)(param_3 + (param_1 + lVar12) * 8) = *(undefined8 *)pVVar8;
        lVar12 = lVar6;
      } while (lVar14 < lVar13);
      if (lVar14 == lVar13) goto LAB_0010dfc7;
      lVar14 = (lVar6 + -1) / 2;
      if (lVar6 == 0) {
        *(undefined8 *)pVVar8 = uVar4;
        lVar13 = lVar13 + -1;
        pVVar16 = pVVar16 + -8;
        goto LAB_0010de9c;
      }
    }
    do {
      pVVar8 = param_3 + (param_1 + lVar14) * 8;
      bVar17 = *(int *)pVVar8 < (int)uVar4;
      if (*(int *)pVVar8 == (int)uVar4) {
        bVar17 = *(int *)(pVVar8 + 4) < (int)((ulong)uVar4 >> 0x20);
      }
      if (!bVar17) {
        *(undefined8 *)(param_3 + (lVar6 + param_1) * 8) = uVar4;
        goto joined_r0x0010dfb7;
      }
      *(undefined8 *)(param_3 + (lVar6 + param_1) * 8) = *(undefined8 *)pVVar8;
      bVar17 = lVar14 != 0;
      lVar6 = lVar14;
      lVar14 = (lVar14 + -1) / 2;
    } while (bVar17);
    *(undefined8 *)pVVar8 = uVar4;
joined_r0x0010dfb7:
    bVar17 = lVar13 < 2;
    pVVar16 = pVVar16 + -8;
    lVar13 = lVar13 + -1;
    if (bVar17) {
      return;
    }
  } while( true );
}



/* AudioStreamInteractive::_get_class_namev() const */

undefined8 * AudioStreamInteractive::_get_class_namev(void)

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
LAB_0010e083:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010e083;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"AudioStreamInteractive");
      goto LAB_0010e0ee;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"AudioStreamInteractive");
LAB_0010e0ee:
  return &_get_class_namev()::_class_name_static;
}



/* AudioStreamPlaybackInteractive::_get_class_namev() const */

undefined8 * AudioStreamPlaybackInteractive::_get_class_namev(void)

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
LAB_0010e183:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010e183;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "AudioStreamPlaybackInteractive");
      goto LAB_0010e1ee;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"AudioStreamPlaybackInteractive")
  ;
LAB_0010e1ee:
  return &_get_class_namev()::_class_name_static;
}



/* AudioStreamPlaybackInteractive::get_class() const */

void AudioStreamPlaybackInteractive::get_class(void)

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



/* AudioStreamInteractive::get_class() const */

void AudioStreamInteractive::get_class(void)

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



/* MethodBindTRC<Vector<int>>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Vector<int>>::_gen_argument_type_info(int param_1)

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
  *puVar3 = 0x1e;
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
      StringName::StringName((StringName *)&local_48,(CowData<char32_t> *)(puVar3 + 8),false);
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
      goto joined_r0x0010e50c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010e50c:
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
      StringName::StringName((StringName *)&local_48,(CowData<char32_t> *)(puVar3 + 8),false);
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
      goto joined_r0x0010e68c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010e68c:
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



/* MethodBindTRC<Dictionary>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Dictionary>::_gen_argument_type_info(int param_1)

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
  *puVar3 = 0x1b;
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
      StringName::StringName((StringName *)&local_48,(CowData<char32_t> *)(puVar3 + 8),false);
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
      goto joined_r0x0010e80c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010e80c:
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
        if (pvVar5 == (void *)0x0) goto LAB_0010e9a4;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_0010e9a4:
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
    StringName::StringName((StringName *)&local_48,(CowData<char32_t> *)(this + 0x20),false);
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
            if (lVar5 == 0) goto LAB_0010ecbf;
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
LAB_0010ecbf:
    cVar6 = String::operator==((String *)param_1,(StrRange *)&local_60);
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
    if (cVar6 != '\0') goto LAB_0010ed73;
  }
  cVar6 = String::operator==((String *)param_1,"RefCounted");
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
              if (lVar5 == 0) goto LAB_0010ee23;
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
LAB_0010ee23:
      cVar6 = String::operator==((String *)param_1,(StrRange *)&local_60);
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
      if (cVar6 != '\0') goto LAB_0010ed73;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = String::operator==((String *)param_1,"Object");
      return uVar7;
    }
  }
  else {
LAB_0010ed73:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AudioStreamPlaybackInteractive::is_class(String const&) const */

undefined8 __thiscall
AudioStreamPlaybackInteractive::is_class(AudioStreamPlaybackInteractive *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_0010ef5f;
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
LAB_0010ef5f:
    cVar6 = String::operator==((String *)param_1,(StrRange *)&local_60);
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
    if (cVar6 != '\0') goto LAB_0010f013;
  }
  cVar6 = String::operator==((String *)param_1,"AudioStreamPlaybackInteractive");
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
              if (lVar5 == 0) goto LAB_0010f0d3;
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
LAB_0010f0d3:
      cVar6 = String::operator==((String *)param_1,(StrRange *)&local_60);
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
      if (cVar6 != '\0') goto LAB_0010f013;
    }
    cVar6 = String::operator==((String *)param_1,"AudioStreamPlayback");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
        return uVar7;
      }
      goto LAB_0010f17c;
    }
  }
LAB_0010f013:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010f17c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AudioStream::is_class(String const&) const */

undefined8 __thiscall AudioStream::is_class(AudioStream *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_0010f1ff;
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
LAB_0010f1ff:
    cVar6 = String::operator==((String *)param_1,(StrRange *)&local_60);
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
    if (cVar6 != '\0') goto LAB_0010f2b3;
  }
  cVar6 = String::operator==((String *)param_1,"AudioStream");
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
              if (lVar5 == 0) goto LAB_0010f373;
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
LAB_0010f373:
      cVar6 = String::operator==((String *)param_1,(StrRange *)&local_60);
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
      if (cVar6 != '\0') goto LAB_0010f2b3;
    }
    cVar6 = String::operator==((String *)param_1,"Resource");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
        return uVar7;
      }
      goto LAB_0010f41c;
    }
  }
LAB_0010f2b3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010f41c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AudioStreamInteractive::is_class(String const&) const */

undefined8 __thiscall AudioStreamInteractive::is_class(AudioStreamInteractive *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_0010f49f;
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
LAB_0010f49f:
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
    if (cVar5 != '\0') goto LAB_0010f553;
  }
  cVar5 = String::operator==((String *)param_1,"AudioStreamInteractive");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = AudioStream::is_class((AudioStream *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_0010f553:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
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



/* List<Variant, DefaultAllocator>::~List() */

void __thiscall List<Variant,DefaultAllocator>::~List(List<Variant,DefaultAllocator> *this)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)this;
  if (puVar2 == (undefined8 *)0x0) {
    return;
  }
  do {
    piVar1 = (int *)*puVar2;
    if (piVar1 == (int *)0x0) {
      if (*(int *)(puVar2 + 2) != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if (*(undefined8 **)(piVar1 + 10) == puVar2) {
      *puVar2 = *(undefined8 *)(piVar1 + 6);
      if (piVar1 == (int *)puVar2[1]) {
        puVar2[1] = *(undefined8 *)(piVar1 + 8);
      }
      if (*(long *)(piVar1 + 8) != 0) {
        *(undefined8 *)(*(long *)(piVar1 + 8) + 0x18) = *(undefined8 *)(piVar1 + 6);
      }
      if (*(long *)(piVar1 + 6) != 0) {
        *(undefined8 *)(*(long *)(piVar1 + 6) + 0x20) = *(undefined8 *)(piVar1 + 8);
      }
      if (Variant::needs_deinit[*piVar1] != '\0') {
        Variant::_clear_internal();
      }
      Memory::free_static(piVar1,false);
      *(int *)(puVar2 + 2) = *(int *)(puVar2 + 2) + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    puVar2 = *(undefined8 **)this;
  } while (*(int *)(puVar2 + 2) != 0);
  Memory::free_static(puVar2,false);
  return;
}



/* MethodDefinition D_METHOD<char const*, char const*>(char const*, char const* const, char const*
   const) */

char * D_METHOD<char_const*,char_const*>(char *param_1,char *param_2,char *param_3)

{
  long in_FS_OFFSET;
  char *local_48;
  undefined1 local_40 [8];
  undefined8 local_38;
  undefined1 *local_28;
  undefined1 *puStack_20;
  long local_10;
  
  local_28 = (undefined1 *)&local_48;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puStack_20 = local_40;
  local_38 = 0;
  local_48 = param_3;
  D_METHODP(param_1,(char ***)param_2,(uint)&local_28);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
  
  pLVar6 = (List *)CONCAT71(in_register_00000031,param_2);
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
LAB_0010fa58:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0010fa58;
    StringName::StringName((StringName *)&local_80,(CowData<char32_t> *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x0010fa79;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x0010fa79:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])pLVar6 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  local_a8 = (StringName *)&local_68;
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
  StringName::operator=((StringName *)(puVar5 + 4),local_a8);
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
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



/* AudioStreamInteractive::~AudioStreamInteractive() */

void __thiscall AudioStreamInteractive::~AudioStreamInteractive(AudioStreamInteractive *this)

{
  uint uVar1;
  Object *pOVar2;
  char cVar3;
  long lVar4;
  AudioStreamInteractive *pAVar5;
  AudioStreamInteractive *pAVar6;
  void *pvVar7;
  bool bVar8;
  
  *(undefined ***)this = &PTR__initialize_classv_00125288;
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x9b0));
  pvVar7 = *(void **)(this + 0x988);
  if (pvVar7 != (void *)0x0) {
    if (*(int *)(this + 0x9ac) != 0) {
      if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x9a8) * 4) != 0) {
        memset(*(void **)(this + 0x9a0),0,
               (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x9a8) * 4) * 4);
      }
      *(undefined4 *)(this + 0x9ac) = 0;
    }
    Memory::free_static(pvVar7,false);
    Memory::free_static(*(void **)(this + 0x998),false);
    Memory::free_static(*(void **)(this + 0x990),false);
    Memory::free_static(*(void **)(this + 0x9a0),false);
  }
  pvVar7 = *(void **)(this + 0x950);
  if (pvVar7 != (void *)0x0) {
    if (*(int *)(this + 0x974) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x970) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x974) = 0;
        *(undefined1 (*) [16])(this + 0x960) = (undefined1  [16])0x0;
      }
      else {
        lVar4 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x958) + lVar4) != 0) {
            *(int *)(*(long *)(this + 0x958) + lVar4) = 0;
            Memory::free_static(*(void **)((long)pvVar7 + lVar4 * 2),false);
            pvVar7 = *(void **)(this + 0x950);
            *(undefined8 *)((long)pvVar7 + lVar4 * 2) = 0;
          }
          lVar4 = lVar4 + 4;
        } while ((ulong)uVar1 * 4 - lVar4 != 0);
        *(undefined4 *)(this + 0x974) = 0;
        *(undefined1 (*) [16])(this + 0x960) = (undefined1  [16])0x0;
        if (pvVar7 == (void *)0x0) goto LAB_0010fdd9;
      }
    }
    Memory::free_static(pvVar7,false);
    Memory::free_static(*(void **)(this + 0x958),false);
  }
LAB_0010fdd9:
  pAVar5 = this + 0x948;
  do {
    pAVar6 = pAVar5 + -0x18;
    if (*(long *)(pAVar5 + -0x10) != 0) {
      cVar3 = RefCounted::unreference();
      if (cVar3 != '\0') {
        pOVar2 = *(Object **)(pAVar5 + -0x10);
        cVar3 = predelete_handler(pOVar2);
        if (cVar3 != '\0') {
          (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
          Memory::free_static(pOVar2,false);
        }
      }
    }
    if ((StringName::configured != '\0') && (*(long *)pAVar6 != 0)) {
      StringName::unref();
    }
    pAVar5 = pAVar6;
  } while (pAVar6 != this + 0x360);
  bVar8 = StringName::configured != '\0';
  *(code **)this = AudioStreamPlayback::AudioStreamPlayback;
  if (bVar8) {
    if (*(long *)(this + 0x330) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010ff86;
    }
    if (*(long *)(this + 0x318) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010ff86;
    }
    if (*(long *)(this + 0x300) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010ff86;
    }
    if (*(long *)(this + 0x2e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010ff86;
    }
    if (*(long *)(this + 0x2d0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010ff86;
    }
    if (*(long *)(this + 0x2b8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010ff86;
    }
    if (*(long *)(this + 0x2a0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010ff86;
    }
    if (*(long *)(this + 0x288) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010ff86;
    }
    if (*(long *)(this + 0x270) != 0) {
      StringName::unref();
    }
  }
LAB_0010ff86:
  Resource::~Resource((Resource *)this);
  return;
}



/* AudioStreamInteractive::~AudioStreamInteractive() */

void __thiscall AudioStreamInteractive::~AudioStreamInteractive(AudioStreamInteractive *this)

{
  ~AudioStreamInteractive(this);
  operator_delete(this,0x9b8);
  return;
}



/* AudioStreamInteractive::_validate_propertyv(PropertyInfo&) const */

void __thiscall
AudioStreamInteractive::_validate_propertyv(AudioStreamInteractive *this,PropertyInfo *param_1)

{
  _validate_property(this,param_1);
  return;
}



/* Resource::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Resource::_get_property_listv(Resource *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
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
LAB_0011019d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0011019d;
    StringName::StringName((StringName *)&local_80,(CowData<char32_t> *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x001101bf;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x001101bf:
  if (lVar2 == 0) {
    pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar3;
    *(undefined4 *)pauVar3[1] = 0;
    *pauVar3 = (undefined1  [16])0x0;
  }
  local_a0 = (StringName *)&local_68;
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
  StringName::operator=((StringName *)(puVar4 + 4),local_a0);
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
LAB_0011057d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0011057d;
    StringName::StringName((StringName *)&local_80,(CowData<char32_t> *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0011059f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0011059f:
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



/* AudioStreamInteractive::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
AudioStreamInteractive::_get_property_listv(AudioStreamInteractive *this,List *param_1,bool param_2)

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
  local_78 = "AudioStreamInteractive";
  local_70 = 0x16;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "AudioStreamInteractive";
  local_98 = 0;
  local_70 = 0x16;
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
LAB_00110965:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00110965;
    StringName::StringName((StringName *)&local_80,(CowData<char32_t> *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00110987;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00110987:
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
  StringName::StringName((StringName *)&local_78,"AudioStreamInteractive",false);
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
LAB_00110d5d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00110d5d;
    StringName::StringName((StringName *)&local_80,(CowData<char32_t> *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00110d7f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00110d7f:
  if (lVar2 == 0) {
    pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar3;
    *(undefined4 *)pauVar3[1] = 0;
    *pauVar3 = (undefined1  [16])0x0;
  }
  local_a0 = (StringName *)&local_68;
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
  StringName::operator=((StringName *)(puVar4 + 4),local_a0);
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



/* AudioStreamPlaybackInteractive::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */

void __thiscall
AudioStreamPlaybackInteractive::_get_property_listv
          (AudioStreamPlaybackInteractive *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
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
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    AudioStreamPlayback::_get_property_listv((AudioStreamPlayback *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "AudioStreamPlaybackInteractive";
  local_70 = 0x1e;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "AudioStreamPlaybackInteractive";
  local_98 = 0;
  local_70 = 0x1e;
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
LAB_00111148:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00111148;
    StringName::StringName((StringName *)&local_80,(CowData<char32_t> *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0011116a;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0011116a:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  local_a0 = (StringName *)&local_68;
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
  StringName::operator=((StringName *)(puVar5 + 4),local_a0);
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"AudioStreamPlaybackInteractive",false);
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
  if (in_EDX != 0) goto LAB_001113eb;
  local_78 = 0;
  local_80 = 0;
  local_68 = &_LC5;
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
LAB_001114e0:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_001114e0;
    StringName::StringName((StringName *)&local_70,(CowData<char32_t> *)&local_48,false);
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
LAB_001113eb:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
}



/* MethodBindT<Dictionary const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<Dictionary_const&>::_gen_argument_type_info(int param_1)

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
  if (in_EDX != 0) goto LAB_0011162b;
  local_78 = 0;
  local_80 = 0;
  local_68 = &_LC5;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,0x1b);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00111720:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00111720;
    StringName::StringName((StringName *)&local_70,(CowData<char32_t> *)&local_48,false);
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
LAB_0011162b:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
}



/* MethodBindT<int, int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<int,int>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uVar4;
  long lVar5;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar6;
  long in_FS_OFFSET;
  undefined8 local_98;
  long local_90;
  long local_88;
  long local_80;
  undefined *local_78;
  undefined1 local_70 [16];
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  puVar6 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar6 = 0;
  puVar6[6] = 0;
  *(undefined8 *)(puVar6 + 8) = 0;
  puVar6[10] = 6;
  *(undefined1 (*) [16])(puVar6 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    local_88 = 0;
    local_90 = 0;
    local_78 = &_LC5;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_70._8_8_;
    local_70 = auVar1 << 0x40;
    String::parse_latin1((StrRange *)&local_90);
    local_98 = 0;
    local_78 = (undefined *)CONCAT44(local_78._4_4_,2);
    local_60 = 0;
    local_58 = 0;
    local_70 = (undefined1  [16])0x0;
    if (local_90 == 0) {
LAB_00111aa8:
      local_50 = 6;
      StringName::operator=((StringName *)(local_70 + 8),(StringName *)&local_88);
    }
    else {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
      local_50 = 6;
      if (local_60 != 0x11) goto LAB_00111aa8;
      StringName::StringName((StringName *)&local_80,(CowData<char32_t> *)&local_58,false);
      if (local_70._8_8_ == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_70._8_8_ = local_80;
      }
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    if ((StringName::configured != '\0') && (local_88 != 0)) {
      StringName::unref();
    }
  }
  else {
    if (in_EDX != 1) goto LAB_0011187a;
    local_80 = 0;
    local_88 = 0;
    local_78 = &_LC5;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_70._8_8_;
    local_70 = auVar2 << 0x40;
    String::parse_latin1((StrRange *)&local_88);
    local_90 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_78,2,(CowData<char32_t> *)&local_90,0,(StrRange *)&local_88,6,
               &local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  *puVar6 = local_78._0_4_;
  if (*(long *)(puVar6 + 2) != local_70._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar6 + 2));
    uVar4 = local_70._0_8_;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = local_70._8_8_;
    local_70 = auVar3 << 0x40;
    *(undefined8 *)(puVar6 + 2) = uVar4;
  }
  if (*(long *)(puVar6 + 4) != local_70._8_8_) {
    StringName::unref();
    uVar4 = local_70._8_8_;
    local_70._8_8_ = 0;
    *(undefined8 *)(puVar6 + 4) = uVar4;
  }
  puVar6[6] = local_60;
  if (*(long *)(puVar6 + 8) != local_58) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar6 + 8));
    lVar5 = local_58;
    local_58 = 0;
    *(long *)(puVar6 + 8) = lVar5;
  }
  puVar6[10] = local_50;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
LAB_0011187a:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar6;
}



/* void Vector<Vector2i>::sort_custom<_DefaultComparator<Vector2i>, true>() */

void __thiscall
Vector<Vector2i>::sort_custom<_DefaultComparator<Vector2i>,true>(Vector<Vector2i> *this)

{
  undefined8 uVar1;
  long lVar2;
  Vector2i *__src;
  undefined8 uVar3;
  bool bVar4;
  Vector2i *pVVar5;
  long lVar6;
  long lVar7;
  Vector2i *pVVar8;
  int iVar9;
  int iVar10;
  
  if (*(long *)(this + 8) == 0) {
    return;
  }
  lVar2 = *(long *)(*(long *)(this + 8) + -8);
  if (lVar2 != 0) {
    CowData<Vector2i>::_copy_on_write((CowData<Vector2i> *)(this + 8));
    __src = *(Vector2i **)(this + 8);
    if (lVar2 == 1) {
      SortArray<Vector2i,_DefaultComparator<Vector2i>,true>::introsort(0,1,__src,0);
      return;
    }
    lVar6 = 0;
    lVar7 = lVar2;
    do {
      lVar7 = lVar7 >> 1;
      lVar6 = lVar6 + 1;
    } while (lVar7 != 1);
    SortArray<Vector2i,_DefaultComparator<Vector2i>,true>::introsort(0,lVar2,__src,lVar6 * 2);
    if (0x10 < lVar2) {
      lVar7 = 1;
      do {
        while( true ) {
          lVar6 = lVar7;
          uVar1 = *(undefined8 *)(__src + lVar6 * 8);
          uVar3 = *(undefined8 *)(__src + lVar6 * 8);
          iVar9 = (int)uVar1;
          iVar10 = (int)((ulong)uVar1 >> 0x20);
          if (*(int *)__src == iVar9) break;
          if (iVar9 < *(int *)__src) goto LAB_00111be2;
LAB_00111c2c:
          pVVar8 = __src + lVar6 * 8;
          while( true ) {
            bVar4 = iVar9 < *(int *)(pVVar8 + -8);
            if (*(int *)(pVVar8 + -8) == iVar9) {
              bVar4 = iVar10 < *(int *)(pVVar8 + -4);
            }
            if (!bVar4) {
              *(undefined8 *)pVVar8 = uVar3;
              goto LAB_00111c60;
            }
            pVVar5 = pVVar8 + -8;
            if (__src == pVVar5) break;
            *(undefined8 *)pVVar8 = *(undefined8 *)pVVar5;
            pVVar8 = pVVar5;
          }
          _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                           "bad comparison function; sorting will be broken",0,0);
          *(undefined8 *)pVVar8 = uVar3;
LAB_00111c60:
          lVar7 = lVar6 + 1;
          if (lVar6 + 1 == 0x10) goto LAB_00111c6a;
        }
        if (*(int *)(__src + 4) <= iVar10) goto LAB_00111c2c;
LAB_00111be2:
        memmove(__src + 8,__src,lVar6 * 8);
        *(undefined8 *)__src = uVar1;
        lVar7 = lVar6 + 1;
      } while (lVar6 + 1 != 0x10);
LAB_00111c6a:
      lVar6 = lVar6 + 1;
LAB_00111c90:
      uVar1 = *(undefined8 *)(__src + lVar6 * 8);
      lVar7 = lVar6;
      do {
        if ((int)uVar1 == *(int *)(__src + lVar7 * 8 + -8)) {
          if (*(int *)(__src + lVar7 * 8 + -4) <= (int)((ulong)uVar1 >> 0x20)) {
LAB_00111cd1:
            lVar6 = lVar6 + 1;
            *(undefined8 *)(__src + lVar7 * 8) = uVar1;
            if (lVar2 == lVar6) {
              return;
            }
            goto LAB_00111c90;
          }
        }
        else if (*(int *)(__src + lVar7 * 8 + -8) <= (int)uVar1) goto LAB_00111cd1;
        lVar7 = lVar7 + -1;
        if (lVar7 == 0) goto LAB_00111e10;
        *(undefined8 *)(__src + lVar7 * 8 + 8) = *(undefined8 *)(__src + lVar7 * 8);
      } while( true );
    }
    lVar7 = 1;
    pVVar8 = __src + 8;
    do {
      uVar1 = *(undefined8 *)pVVar8;
      uVar3 = *(undefined8 *)pVVar8;
      iVar9 = (int)uVar1;
      iVar10 = (int)((ulong)uVar1 >> 0x20);
      pVVar5 = pVVar8;
      lVar6 = lVar7;
      if (*(int *)__src == iVar9) {
        if (*(int *)(__src + 4) <= iVar10) goto LAB_00111da9;
LAB_00111d3a:
        memmove(__src + 8,__src,lVar7 * 8);
        *(undefined8 *)__src = uVar1;
      }
      else {
        if (iVar9 < *(int *)__src) goto LAB_00111d3a;
LAB_00111da9:
        while( true ) {
          bVar4 = iVar9 < *(int *)(pVVar5 + -8);
          if (*(int *)(pVVar5 + -8) == iVar9) {
            bVar4 = iVar10 < *(int *)(pVVar5 + -4);
          }
          if (!bVar4) {
            *(undefined8 *)pVVar5 = uVar3;
            goto LAB_00111d5b;
          }
          if (lVar6 + -1 == 0) break;
          *(undefined8 *)pVVar5 = *(undefined8 *)(pVVar5 + -8);
          pVVar5 = pVVar5 + -8;
          lVar6 = lVar6 + -1;
        }
        _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                         "bad comparison function; sorting will be broken",0,0);
        *(undefined8 *)pVVar5 = uVar3;
      }
LAB_00111d5b:
      lVar7 = lVar7 + 1;
      pVVar8 = pVVar8 + 8;
    } while (lVar2 != lVar7);
  }
  return;
LAB_00111e10:
  lVar6 = lVar6 + 1;
  _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                   "bad comparison function; sorting will be broken",0,0);
  *(undefined8 *)(__src + 8) = uVar1;
  if (lVar2 == lVar6) {
    return;
  }
  goto LAB_00111c90;
}



/* MethodBind* create_method_bind<AudioStreamInteractive, Vector<String>, String const&, Variant
   const&>(Vector<String> (AudioStreamInteractive::*)(String const&, Variant const&) const) */

MethodBind *
create_method_bind<AudioStreamInteractive,Vector<String>,String_const&,Variant_const&>
          (_func_Vector_String_ptr_Variant_ptr *param_1)

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
  *(_func_Vector_String_ptr_Variant_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00125690;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "AudioStreamInteractive";
  local_30 = 0x16;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(StrRange *)&local_40,false);
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



/* MethodBind* create_method_bind<AudioStreamInteractive, unsigned int, unsigned int>(void
   (AudioStreamInteractive::*)(unsigned int, unsigned int)) */

MethodBind *
create_method_bind<AudioStreamInteractive,unsigned_int,unsigned_int>(_func_void_uint_uint *param_1)

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
  *(_func_void_uint_uint **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001256f0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "AudioStreamInteractive";
  local_30 = 0x16;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(StrRange *)&local_40,false);
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



/* MethodBind* create_method_bind<AudioStreamInteractive, int>(void
   (AudioStreamInteractive::*)(int)) */

MethodBind * create_method_bind<AudioStreamInteractive,int>(_func_void_int *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_00125750;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "AudioStreamInteractive";
  local_30 = 0x16;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(StrRange *)&local_40,false);
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



/* MethodBind* create_method_bind<AudioStreamInteractive, int, StringName const&>(void
   (AudioStreamInteractive::*)(int, StringName const&)) */

MethodBind *
create_method_bind<AudioStreamInteractive,int,StringName_const&>
          (_func_void_int_StringName_ptr *param_1)

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
  *(_func_void_int_StringName_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00125810;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "AudioStreamInteractive";
  local_30 = 0x16;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(StrRange *)&local_40,false);
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



/* MethodBind* create_method_bind<AudioStreamInteractive, StringName, int>(StringName
   (AudioStreamInteractive::*)(int) const) */

MethodBind *
create_method_bind<AudioStreamInteractive,StringName,int>(_func_StringName_int *param_1)

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
  *(_func_StringName_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00125870;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "AudioStreamInteractive";
  local_30 = 0x16;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(StrRange *)&local_40,false);
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



/* MethodBind* create_method_bind<AudioStreamInteractive, int, Ref<AudioStream> const&>(void
   (AudioStreamInteractive::*)(int, Ref<AudioStream> const&)) */

MethodBind *
create_method_bind<AudioStreamInteractive,int,Ref<AudioStream>const&>
          (_func_void_int_Ref_ptr *param_1)

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
  *(_func_void_int_Ref_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001258d0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "AudioStreamInteractive";
  local_30 = 0x16;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(StrRange *)&local_40,false);
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



/* MethodBind* create_method_bind<AudioStreamInteractive, Ref<AudioStream>, int>(Ref<AudioStream>
   (AudioStreamInteractive::*)(int) const) */

MethodBind * create_method_bind<AudioStreamInteractive,Ref<AudioStream>,int>(_func_Ref_int *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_00125930;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "AudioStreamInteractive";
  local_30 = 0x16;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(StrRange *)&local_40,false);
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



/* MethodBind* create_method_bind<AudioStreamInteractive, int,
   AudioStreamInteractive::AutoAdvanceMode>(void (AudioStreamInteractive::*)(int,
   AudioStreamInteractive::AutoAdvanceMode)) */

MethodBind *
create_method_bind<AudioStreamInteractive,int,AudioStreamInteractive::AutoAdvanceMode>
          (_func_void_int_AutoAdvanceMode *param_1)

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
  *(_func_void_int_AutoAdvanceMode **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00125990;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "AudioStreamInteractive";
  local_30 = 0x16;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(StrRange *)&local_40,false);
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



/* MethodBind* create_method_bind<AudioStreamInteractive, AudioStreamInteractive::AutoAdvanceMode,
   int>(AudioStreamInteractive::AutoAdvanceMode (AudioStreamInteractive::*)(int) const) */

MethodBind *
create_method_bind<AudioStreamInteractive,AudioStreamInteractive::AutoAdvanceMode,int>
          (_func_AutoAdvanceMode_int *param_1)

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
  *(_func_AutoAdvanceMode_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001259f0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "AudioStreamInteractive";
  local_30 = 0x16;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(StrRange *)&local_40,false);
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



/* MethodBind* create_method_bind<AudioStreamInteractive, int, int>(void
   (AudioStreamInteractive::*)(int, int)) */

MethodBind * create_method_bind<AudioStreamInteractive,int,int>(_func_void_int_int *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_00125a50;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "AudioStreamInteractive";
  local_30 = 0x16;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(StrRange *)&local_40,false);
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



/* MethodBind* create_method_bind<AudioStreamInteractive, int, int>(int
   (AudioStreamInteractive::*)(int) const) */

MethodBind * create_method_bind<AudioStreamInteractive,int,int>(_func_int_int *param_1)

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
  *(_func_int_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00125ab0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "AudioStreamInteractive";
  local_30 = 0x16;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(StrRange *)&local_40,false);
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



/* MethodBind* create_method_bind<AudioStreamInteractive, int, int,
   AudioStreamInteractive::TransitionFromTime, AudioStreamInteractive::TransitionToTime,
   AudioStreamInteractive::FadeMode, float, bool, int, bool>(void (AudioStreamInteractive::*)(int,
   int, AudioStreamInteractive::TransitionFromTime, AudioStreamInteractive::TransitionToTime,
   AudioStreamInteractive::FadeMode, float, bool, int, bool)) */

MethodBind *
create_method_bind<AudioStreamInteractive,int,int,AudioStreamInteractive::TransitionFromTime,AudioStreamInteractive::TransitionToTime,AudioStreamInteractive::FadeMode,float,bool,int,bool>
          (_func_void_int_int_TransitionFromTime_TransitionToTime_FadeMode_float_bool_int_bool
           *param_1)

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
  *(_func_void_int_int_TransitionFromTime_TransitionToTime_FadeMode_float_bool_int_bool **)
   (this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00125b10;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 9;
  local_40 = 0;
  local_38 = "AudioStreamInteractive";
  local_30 = 0x16;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(StrRange *)&local_40,false);
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



/* MethodBind* create_method_bind<AudioStreamInteractive, bool, int, int>(bool
   (AudioStreamInteractive::*)(int, int) const) */

MethodBind * create_method_bind<AudioStreamInteractive,bool,int,int>(_func_bool_int_int *param_1)

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
  *(_func_bool_int_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00125b70;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "AudioStreamInteractive";
  local_30 = 0x16;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(StrRange *)&local_40,false);
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



/* MethodBind* create_method_bind<AudioStreamInteractive, Vector<int>>(Vector<int>
   (AudioStreamInteractive::*)() const) */

MethodBind * create_method_bind<AudioStreamInteractive,Vector<int>>(_func_Vector *param_1)

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
  *(_func_Vector **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00125bd0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "AudioStreamInteractive";
  local_30 = 0x16;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(StrRange *)&local_40,false);
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



/* MethodBind* create_method_bind<AudioStreamInteractive,
   AudioStreamInteractive::TransitionFromTime, int, int>(AudioStreamInteractive::TransitionFromTime
   (AudioStreamInteractive::*)(int, int) const) */

MethodBind *
create_method_bind<AudioStreamInteractive,AudioStreamInteractive::TransitionFromTime,int,int>
          (_func_TransitionFromTime_int_int *param_1)

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
  *(_func_TransitionFromTime_int_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00125c30;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "AudioStreamInteractive";
  local_30 = 0x16;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(StrRange *)&local_40,false);
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



/* MethodBind* create_method_bind<AudioStreamInteractive, AudioStreamInteractive::TransitionToTime,
   int, int>(AudioStreamInteractive::TransitionToTime (AudioStreamInteractive::*)(int, int) const)
    */

MethodBind *
create_method_bind<AudioStreamInteractive,AudioStreamInteractive::TransitionToTime,int,int>
          (_func_TransitionToTime_int_int *param_1)

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
  *(_func_TransitionToTime_int_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00125c90;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "AudioStreamInteractive";
  local_30 = 0x16;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(StrRange *)&local_40,false);
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



/* MethodBind* create_method_bind<AudioStreamInteractive, AudioStreamInteractive::FadeMode, int,
   int>(AudioStreamInteractive::FadeMode (AudioStreamInteractive::*)(int, int) const) */

MethodBind *
create_method_bind<AudioStreamInteractive,AudioStreamInteractive::FadeMode,int,int>
          (_func_FadeMode_int_int *param_1)

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
  *(_func_FadeMode_int_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00125cf0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "AudioStreamInteractive";
  local_30 = 0x16;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(StrRange *)&local_40,false);
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



/* MethodBind* create_method_bind<AudioStreamInteractive, float, int, int>(float
   (AudioStreamInteractive::*)(int, int) const) */

MethodBind * create_method_bind<AudioStreamInteractive,float,int,int>(_func_float_int_int *param_1)

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
  *(_func_float_int_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00125d50;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "AudioStreamInteractive";
  local_30 = 0x16;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(StrRange *)&local_40,false);
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



/* MethodBind* create_method_bind<AudioStreamInteractive, int, int, int>(int
   (AudioStreamInteractive::*)(int, int) const) */

MethodBind * create_method_bind<AudioStreamInteractive,int,int,int>(_func_int_int_int *param_1)

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
  *(_func_int_int_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00125db0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "AudioStreamInteractive";
  local_30 = 0x16;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(StrRange *)&local_40,false);
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



/* MethodBind* create_method_bind<AudioStreamInteractive, Dictionary const&>(void
   (AudioStreamInteractive::*)(Dictionary const&)) */

MethodBind *
create_method_bind<AudioStreamInteractive,Dictionary_const&>(_func_void_Dictionary_ptr *param_1)

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
  *(_func_void_Dictionary_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00125e10;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "AudioStreamInteractive";
  local_30 = 0x16;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(StrRange *)&local_40,false);
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



/* MethodBind* create_method_bind<AudioStreamInteractive, Dictionary>(Dictionary
   (AudioStreamInteractive::*)() const) */

MethodBind * create_method_bind<AudioStreamInteractive,Dictionary>(_func_Dictionary *param_1)

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
  *(_func_Dictionary **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00125e70;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "AudioStreamInteractive";
  local_30 = 0x16;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(StrRange *)&local_40,false);
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



/* MethodBind* create_method_bind<AudioStreamPlaybackInteractive, StringName const&>(void
   (AudioStreamPlaybackInteractive::*)(StringName const&)) */

MethodBind *
create_method_bind<AudioStreamPlaybackInteractive,StringName_const&>
          (_func_void_StringName_ptr *param_1)

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
  *(_func_void_StringName_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00125ed0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "AudioStreamPlaybackInteractive";
  local_30 = 0x1e;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(StrRange *)&local_40,false);
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



/* MethodBind* create_method_bind<AudioStreamPlaybackInteractive, int>(void
   (AudioStreamPlaybackInteractive::*)(int)) */

MethodBind * create_method_bind<AudioStreamPlaybackInteractive,int>(_func_void_int *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_00125750;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "AudioStreamPlaybackInteractive";
  local_30 = 0x1e;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(StrRange *)&local_40,false);
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



/* AudioStreamPlaybackInteractive::_initialize_classv() */

void AudioStreamPlaybackInteractive::_initialize_classv(void)

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
    if (AudioStreamPlayback::initialize_class()::initialized == '\0') {
      if (RefCounted::initialize_class()::initialized == '\0') {
        Object::initialize_class();
        local_68 = 0;
        local_50 = 6;
        local_58 = "Object";
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(StrRange *)&local_68,false);
        local_58 = "RefCounted";
        local_70 = 0;
        local_50 = 10;
        String::parse_latin1((StrRange *)&local_70);
        StringName::StringName((StringName *)&local_58,(StrRange *)&local_70,false);
        ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
        if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        if ((StringName::configured != '\0') && (local_60 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        if ((code *)PTR__bind_methods_0012d008 != RefCounted::_bind_methods) {
          RefCounted::_bind_methods();
        }
        RefCounted::initialize_class()::initialized = '\x01';
      }
      local_58 = "RefCounted";
      local_68 = 0;
      local_50 = 10;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(StrRange *)&local_68,false);
      local_58 = "AudioStreamPlayback";
      local_70 = 0;
      local_50 = 0x13;
      String::parse_latin1((StrRange *)&local_70);
      StringName::StringName((StringName *)&local_58,(StrRange *)&local_70,false);
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
    StringName::StringName((StringName *)&local_60,(StrRange *)&local_68,false);
    local_58 = "AudioStreamPlaybackInteractive";
    local_70 = 0;
    local_50 = 0x1e;
    String::parse_latin1((StrRange *)&local_70);
    StringName::StringName((StringName *)&local_58,(StrRange *)&local_70,false);
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



/* godot::details::enum_qualified_name_to_class_info_name(String const&) */

details * __thiscall
godot::details::enum_qualified_name_to_class_info_name(details *this,String *param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long in_FS_OFFSET;
  long local_60;
  char local_58 [8];
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  String::split(local_58,SUB81(param_1,0),0x113dba);
  if ((local_50 != 0) && (2 < *(long *)(local_50 + -8))) {
    local_60 = 0;
    local_48 = &_LC96;
    local_40 = 1;
    String::parse_latin1((StrRange *)&local_60);
    if (local_50 == 0) {
      lVar4 = 0;
      lVar3 = -2;
    }
    else {
      lVar4 = *(long *)(local_50 + -8);
      lVar3 = lVar4 + -2;
      if (-1 < lVar3) {
        String::operator+((String *)&local_48,(String *)(local_50 + lVar3 * 8));
        String::operator+((String *)this,(String *)&local_48);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        goto LAB_00113e9b;
      }
    }
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,lVar3,lVar4,"p_index","size()","",false,true)
    ;
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  local_60 = 0;
  local_48 = &_LC96;
  local_40 = 1;
  String::parse_latin1((StrRange *)&local_60);
  String::join(this);
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
LAB_00113e9b:
  CowData<String>::_unref((CowData<String> *)&local_50);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GetTypeInfo<AudioStreamInteractive::AutoAdvanceMode, void>::get_class_info() */

GetTypeInfo<AudioStreamInteractive::AutoAdvanceMode,void> * __thiscall
GetTypeInfo<AudioStreamInteractive::AutoAdvanceMode,void>::get_class_info
          (GetTypeInfo<AudioStreamInteractive::AutoAdvanceMode,void> *this)

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
  local_58 = 0;
  local_48 = "AudioStreamInteractive::AutoAdvanceMode";
  local_40 = 0x27;
  String::parse_latin1((StrRange *)&local_58);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_50,(String *)&local_58);
  StringName::StringName((StringName *)&local_48,(details *)&local_50,false);
  *(undefined4 *)this = 2;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 0x10006;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_48);
  if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
    StringName::unref();
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
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GetTypeInfo<AudioStreamInteractive::TransitionFromTime, void>::get_class_info() */

GetTypeInfo<AudioStreamInteractive::TransitionFromTime,void> * __thiscall
GetTypeInfo<AudioStreamInteractive::TransitionFromTime,void>::get_class_info
          (GetTypeInfo<AudioStreamInteractive::TransitionFromTime,void> *this)

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
  local_58 = 0;
  local_48 = "AudioStreamInteractive::TransitionFromTime";
  local_40 = 0x2a;
  String::parse_latin1((StrRange *)&local_58);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_50,(String *)&local_58);
  StringName::StringName((StringName *)&local_48,(details *)&local_50,false);
  *(undefined4 *)this = 2;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 0x10006;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_48);
  if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
    StringName::unref();
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
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GetTypeInfo<AudioStreamInteractive::TransitionToTime, void>::get_class_info() */

GetTypeInfo<AudioStreamInteractive::TransitionToTime,void> * __thiscall
GetTypeInfo<AudioStreamInteractive::TransitionToTime,void>::get_class_info
          (GetTypeInfo<AudioStreamInteractive::TransitionToTime,void> *this)

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
  local_58 = 0;
  local_48 = "AudioStreamInteractive::TransitionToTime";
  local_40 = 0x28;
  String::parse_latin1((StrRange *)&local_58);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_50,(String *)&local_58);
  StringName::StringName((StringName *)&local_48,(details *)&local_50,false);
  *(undefined4 *)this = 2;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 0x10006;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_48);
  if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
    StringName::unref();
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
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GetTypeInfo<AudioStreamInteractive::FadeMode, void>::get_class_info() */

GetTypeInfo<AudioStreamInteractive::FadeMode,void> * __thiscall
GetTypeInfo<AudioStreamInteractive::FadeMode,void>::get_class_info
          (GetTypeInfo<AudioStreamInteractive::FadeMode,void> *this)

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
  local_58 = 0;
  local_48 = "AudioStreamInteractive::FadeMode";
  local_40 = 0x20;
  String::parse_latin1((StrRange *)&local_58);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_50,(String *)&local_58);
  StringName::StringName((StringName *)&local_48,(details *)&local_50,false);
  *(undefined4 *)this = 2;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 0x10006;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_48);
  if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
    StringName::unref();
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
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AudioStreamInteractive::_initialize_classv() */

void AudioStreamInteractive::_initialize_classv(void)

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
    if (AudioStream::initialize_class()::initialized == '\0') {
      if (Resource::initialize_class()::initialized == '\0') {
        if (RefCounted::initialize_class()::initialized == '\0') {
          Object::initialize_class();
          local_68 = 0;
          local_50 = 6;
          local_58 = "Object";
          String::parse_latin1((StrRange *)&local_68);
          StringName::StringName((StringName *)&local_60,(StrRange *)&local_68,false);
          local_58 = "RefCounted";
          local_70 = 0;
          local_50 = 10;
          String::parse_latin1((StrRange *)&local_70);
          StringName::StringName((StringName *)&local_58,(StrRange *)&local_70,false);
          ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
          if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
          if ((StringName::configured != '\0') && (local_60 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
          if ((code *)PTR__bind_methods_0012d008 != RefCounted::_bind_methods) {
            RefCounted::_bind_methods();
          }
          RefCounted::initialize_class()::initialized = '\x01';
        }
        local_68 = 0;
        local_58 = "RefCounted";
        local_50 = 10;
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(StrRange *)&local_68,false);
        local_58 = "Resource";
        local_70 = 0;
        local_50 = 8;
        String::parse_latin1((StrRange *)&local_70);
        StringName::StringName((StringName *)&local_58,(StrRange *)&local_70,false);
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
      StringName::StringName((StringName *)&local_60,(StrRange *)&local_68,false);
      local_58 = "AudioStream";
      local_70 = 0;
      local_50 = 0xb;
      String::parse_latin1((StrRange *)&local_70);
      StringName::StringName((StringName *)&local_58,(StrRange *)&local_70,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      if ((code *)PTR__bind_methods_0012d010 != Resource::_bind_methods) {
        AudioStream::_bind_methods();
      }
      AudioStream::initialize_class()::initialized = '\x01';
    }
    local_58 = "AudioStream";
    local_68 = 0;
    local_50 = 0xb;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(StrRange *)&local_68,false);
    local_58 = "AudioStreamInteractive";
    local_70 = 0;
    local_50 = 0x16;
    String::parse_latin1((StrRange *)&local_70);
    StringName::StringName((StringName *)&local_58,(StrRange *)&local_70,false);
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



/* MethodBindT<int, AudioStreamInteractive::AutoAdvanceMode>::_gen_argument_type_info(int) const */

undefined4 *
MethodBindT<int,AudioStreamInteractive::AutoAdvanceMode>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar5;
  long in_FS_OFFSET;
  long local_a0;
  undefined8 local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined1 local_70 [16];
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  puVar5 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar5 = 0;
  puVar5[6] = 0;
  *(undefined8 *)(puVar5 + 8) = 0;
  puVar5[10] = 6;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    local_88 = 0;
    local_90 = 0;
    local_78 = "";
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_70._8_8_;
    local_70 = auVar1 << 0x40;
    String::parse_latin1((StrRange *)&local_90);
    local_98 = 0;
    local_78 = (char *)CONCAT44(local_78._4_4_,2);
    local_60 = 0;
    local_58 = 0;
    local_70 = (undefined1  [16])0x0;
    if (local_90 == 0) {
LAB_00114c80:
      local_50 = 6;
      StringName::operator=((StringName *)(local_70 + 8),(StringName *)&local_88);
    }
    else {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
      local_50 = 6;
      if (local_60 != 0x11) goto LAB_00114c80;
      StringName::StringName((StringName *)&local_80,(CowData<char32_t> *)&local_58,false);
      if (local_70._8_8_ == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_70._8_8_ = local_80;
      }
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    if ((StringName::configured != '\0') && (local_88 != 0)) {
      StringName::unref();
    }
  }
  else {
    if (in_EDX != 1) goto LAB_001149fd;
    local_90 = 0;
    local_70._0_8_ = 0x27;
    local_78 = "AudioStreamInteractive::AutoAdvanceMode";
    String::parse_latin1((StrRange *)&local_90);
    godot::details::enum_qualified_name_to_class_info_name
              ((details *)&local_98,(StrRange *)&local_90);
    StringName::StringName((StringName *)&local_a0,(details *)&local_98,false);
    local_88 = 0;
    local_80 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_78,2,(CowData<char32_t> *)&local_80,0,
               (CowData<char32_t> *)&local_88,0x10006,(StringName *)&local_a0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if ((StringName::configured != '\0') && (local_a0 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  }
  *puVar5 = local_78._0_4_;
  if (*(long *)(puVar5 + 2) != local_70._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar5 + 2));
    uVar3 = local_70._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_70._8_8_;
    local_70 = auVar2 << 0x40;
    *(undefined8 *)(puVar5 + 2) = uVar3;
  }
  if (*(long *)(puVar5 + 4) != local_70._8_8_) {
    StringName::unref();
    uVar3 = local_70._8_8_;
    local_70._8_8_ = 0;
    *(undefined8 *)(puVar5 + 4) = uVar3;
  }
  puVar5[6] = local_60;
  if (*(long *)(puVar5 + 8) != local_58) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar5 + 8));
    lVar4 = local_58;
    local_58 = 0;
    *(long *)(puVar5 + 8) = lVar4;
  }
  puVar5[10] = local_50;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
LAB_001149fd:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
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
LAB_00115090:
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
  if (lVar10 == 0) goto LAB_00115090;
  if (param_1 <= lVar6) {
    lVar6 = *(long *)this;
    uVar8 = param_1;
    while (lVar6 != 0) {
      if (*(ulong *)(lVar6 + -8) <= uVar8) {
LAB_00114f69:
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
        if (*(ulong *)(lVar6 + -8) <= uVar8) goto LAB_00114f69;
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
    goto LAB_001150e6;
  }
  if (lVar10 == lVar7) {
LAB_0011500f:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
LAB_001150e6:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar6 = puVar9[-1];
    if (param_1 <= lVar6) goto LAB_00114ffa;
  }
  else {
    if (lVar6 != 0) {
      uVar4 = _realloc(this,lVar10);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      goto LAB_0011500f;
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
LAB_00114ffa:
  puVar9[-1] = param_1;
  return 0;
}



/* HashMap<AudioStreamInteractive::TransitionKey, AudioStreamInteractive::Transition,
   AudioStreamInteractive::TransitionKeyHasher,
   HashMapComparatorDefault<AudioStreamInteractive::TransitionKey>,
   DefaultTypedAllocator<HashMapElement<AudioStreamInteractive::TransitionKey,
   AudioStreamInteractive::Transition> > >::_resize_and_rehash(unsigned int) */

void __thiscall
HashMap<AudioStreamInteractive::TransitionKey,AudioStreamInteractive::Transition,AudioStreamInteractive::TransitionKeyHasher,HashMapComparatorDefault<AudioStreamInteractive::TransitionKey>,DefaultTypedAllocator<HashMapElement<AudioStreamInteractive::TransitionKey,AudioStreamInteractive::Transition>>>
::_resize_and_rehash
          (HashMap<AudioStreamInteractive::TransitionKey,AudioStreamInteractive::Transition,AudioStreamInteractive::TransitionKeyHasher,HashMapComparatorDefault<AudioStreamInteractive::TransitionKey>,DefaultTypedAllocator<HashMapElement<AudioStreamInteractive::TransitionKey,AudioStreamInteractive::Transition>>>
           *this,uint param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  void *pvVar6;
  void *pvVar7;
  void *__s;
  long lVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 uVar18;
  void *__s_00;
  int iVar19;
  long lVar20;
  uint uVar21;
  ulong uVar22;
  undefined8 uVar23;
  uint uVar24;
  ulong uVar25;
  ulong uVar26;
  uint local_78;
  
  *(undefined4 *)(this + 0x2c) = 0;
  uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  if (param_1 < 2) {
    param_1 = 2;
  }
  *(uint *)(this + 0x28) = param_1;
  uVar21 = *(uint *)(hash_table_size_primes + (ulong)param_1 * 4);
  uVar22 = (ulong)uVar21;
  pvVar6 = *(void **)(this + 8);
  pvVar7 = *(void **)(this + 0x10);
  uVar26 = uVar22 * 4;
  uVar25 = uVar22 * 8;
  uVar18 = Memory::alloc_static(uVar26,false);
  *(undefined8 *)(this + 0x10) = uVar18;
  __s_00 = (void *)Memory::alloc_static(uVar25,false);
  *(void **)(this + 8) = __s_00;
  if (uVar21 != 0) {
    __s = *(void **)(this + 0x10);
    if ((__s < (void *)((long)__s_00 + uVar25)) && (__s_00 < (void *)((long)__s + uVar26))) {
      uVar26 = 0;
      do {
        *(undefined4 *)((long)__s + uVar26 * 4) = 0;
        *(undefined8 *)((long)__s_00 + uVar26 * 8) = 0;
        uVar26 = uVar26 + 1;
      } while (uVar22 != uVar26);
    }
    else {
      memset(__s,0,uVar26);
      memset(__s_00,0,uVar25);
    }
  }
  if (uVar3 != 0) {
    uVar26 = 0;
    do {
      uVar21 = *(uint *)((long)pvVar7 + uVar26 * 4);
      if (uVar21 != 0) {
        uVar24 = 0;
        lVar8 = *(long *)(this + 0x10);
        uVar4 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
        uVar25 = CONCAT44(0,uVar4);
        lVar9 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        auVar10._8_8_ = 0;
        auVar10._0_8_ = (ulong)uVar21 * lVar9;
        auVar14._8_8_ = 0;
        auVar14._0_8_ = uVar25;
        lVar20 = SUB168(auVar10 * auVar14,8);
        puVar1 = (uint *)(lVar8 + lVar20 * 4);
        iVar19 = SUB164(auVar10 * auVar14,8);
        uVar5 = *puVar1;
        uVar18 = *(undefined8 *)((long)pvVar6 + uVar26 * 8);
        while (uVar5 != 0) {
          auVar11._8_8_ = 0;
          auVar11._0_8_ = (ulong)uVar5 * lVar9;
          auVar15._8_8_ = 0;
          auVar15._0_8_ = uVar25;
          auVar12._8_8_ = 0;
          auVar12._0_8_ = (ulong)((uVar4 + iVar19) - SUB164(auVar11 * auVar15,8)) * lVar9;
          auVar16._8_8_ = 0;
          auVar16._0_8_ = uVar25;
          local_78 = SUB164(auVar12 * auVar16,8);
          uVar23 = uVar18;
          if (local_78 < uVar24) {
            *puVar1 = uVar21;
            puVar2 = (undefined8 *)((long)__s_00 + lVar20 * 8);
            uVar23 = *puVar2;
            *puVar2 = uVar18;
            uVar21 = uVar5;
            uVar24 = local_78;
          }
          uVar24 = uVar24 + 1;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = (ulong)(iVar19 + 1) * lVar9;
          auVar17._8_8_ = 0;
          auVar17._0_8_ = uVar25;
          lVar20 = SUB168(auVar13 * auVar17,8);
          puVar1 = (uint *)(lVar8 + lVar20 * 4);
          iVar19 = SUB164(auVar13 * auVar17,8);
          uVar18 = uVar23;
          uVar5 = *puVar1;
        }
        *(undefined8 *)((long)__s_00 + lVar20 * 8) = uVar18;
        *puVar1 = uVar21;
        *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
      }
      uVar26 = uVar26 + 1;
    } while (uVar26 != uVar3);
    Memory::free_static(pvVar6,false);
    Memory::free_static(pvVar7,false);
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<AudioStreamInteractive::TransitionKey, AudioStreamInteractive::Transition,
   AudioStreamInteractive::TransitionKeyHasher,
   HashMapComparatorDefault<AudioStreamInteractive::TransitionKey>,
   DefaultTypedAllocator<HashMapElement<AudioStreamInteractive::TransitionKey,
   AudioStreamInteractive::Transition> > >::operator[](AudioStreamInteractive::TransitionKey const&)
    */

undefined1  [16] __thiscall
HashMap<AudioStreamInteractive::TransitionKey,AudioStreamInteractive::Transition,AudioStreamInteractive::TransitionKeyHasher,HashMapComparatorDefault<AudioStreamInteractive::TransitionKey>,DefaultTypedAllocator<HashMapElement<AudioStreamInteractive::TransitionKey,AudioStreamInteractive::Transition>>>
::operator[](HashMap<AudioStreamInteractive::TransitionKey,AudioStreamInteractive::Transition,AudioStreamInteractive::TransitionKeyHasher,HashMapComparatorDefault<AudioStreamInteractive::TransitionKey>,DefaultTypedAllocator<HashMapElement<AudioStreamInteractive::TransitionKey,AudioStreamInteractive::Transition>>>
             *this,TransitionKey *param_1)

{
  uint *puVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  void *__s;
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
  undefined1 (*pauVar29) [16];
  undefined8 uVar30;
  uint uVar31;
  uint uVar32;
  undefined1 (*pauVar33) [16];
  undefined8 uVar34;
  void *__s_00;
  ulong uVar35;
  int iVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  ulong uVar40;
  uint uVar41;
  ulong uVar42;
  uint uVar43;
  ulong uVar44;
  undefined1 (*pauVar45) [16];
  undefined1 auVar46 [16];
  long lStack_e0;
  int local_c8;
  int local_ac;
  
  local_c8 = *(int *)(param_1 + 4);
  __s_00 = *(void **)(this + 8);
  iVar36 = *(int *)param_1;
  uVar35 = (ulong)*(uint *)(this + 0x28);
  uVar32 = *(uint *)(hash_table_size_primes + uVar35 * 4);
  uVar40 = CONCAT44(0,uVar32);
  if (__s_00 == (void *)0x0) {
    uVar35 = uVar40 * 4;
    uVar42 = uVar40 * 8;
    uVar34 = Memory::alloc_static(uVar35,false);
    *(undefined8 *)(this + 0x10) = uVar34;
    lStack_e0 = 0x115913;
    __s_00 = (void *)Memory::alloc_static(uVar42,false);
    *(void **)(this + 8) = __s_00;
    if (uVar32 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar42)) && (__s_00 < (void *)((long)__s + uVar35))) {
        uVar35 = 0;
        do {
          *(undefined4 *)((long)__s + uVar35 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar35 * 8) = 0;
          uVar35 = uVar35 + 1;
        } while (uVar40 != uVar35);
      }
      else {
        memset(__s,0,uVar35);
        lStack_e0 = 0x115962;
        memset(__s_00,0,uVar42);
      }
      local_c8 = *(int *)(param_1 + 4);
      iVar36 = *(int *)param_1;
      local_ac = *(int *)(this + 0x2c);
LAB_00115979:
      if (local_ac == 0) goto LAB_001158c1;
      uVar35 = (ulong)*(uint *)(this + 0x28);
      lVar39 = *(long *)(this + 0x10);
      goto LAB_00115550;
    }
    local_c8 = *(int *)(param_1 + 4);
    iVar36 = *(int *)param_1;
    local_ac = *(int *)(this + 0x2c);
    if (__s_00 != (void *)0x0) goto LAB_00115979;
  }
  else {
    local_ac = *(int *)(this + 0x2c);
    if (local_ac == 0) {
LAB_001158c1:
      local_ac = 0;
    }
    else {
      lVar3 = *(long *)(hash_table_size_primes_inv + uVar35 * 8);
      lVar39 = *(long *)(this + 0x10);
      uVar31 = (iVar36 * 0x16a88000 | (uint)(iVar36 * -0x3361d2af) >> 0x11) * 0x1b873593 ^ 0x7f07c65
      ;
      uVar31 = (uVar31 << 0xd | uVar31 >> 0x13) * 5 + 0xe6546b64 ^
               (local_c8 * 0x16a88000 | (uint)(local_c8 * -0x3361d2af) >> 0x11) * 0x1b873593;
      uVar31 = (uVar31 << 0xd | uVar31 >> 0x13) * 5 + 0xe6546b64;
      uVar42 = (ulong)uVar31;
      if (uVar31 == 0) {
        uVar42 = 1;
      }
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar40;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = uVar42 * lVar3;
      lVar37 = SUB168(auVar5 * auVar17,8);
      uVar31 = *(uint *)(lVar39 + lVar37 * 4);
      uVar43 = SUB164(auVar5 * auVar17,8);
      if (uVar31 != 0) {
        uVar41 = 0;
        lVar38 = lVar37;
        do {
          if ((((uint)uVar42 == uVar31) &&
              (lVar37 = *(long *)((long)__s_00 + lVar37 * 8), iVar36 == *(int *)(lVar37 + 0x10))) &&
             (local_c8 == *(int *)(lVar37 + 0x14))) {
            pauVar33 = *(undefined1 (**) [16])((long)__s_00 + (ulong)uVar43 * 8);
            lStack_e0 = lVar38;
            goto LAB_00115523;
          }
          uVar41 = uVar41 + 1;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (ulong)(uVar43 + 1) * lVar3;
          auVar18._8_8_ = 0;
          auVar18._0_8_ = uVar40;
          lVar37 = SUB168(auVar6 * auVar18,8);
          uVar31 = *(uint *)(lVar39 + lVar37 * 4);
          uVar43 = SUB164(auVar6 * auVar18,8);
        } while ((uVar31 != 0) &&
                (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar31 * lVar3, auVar19._8_8_ = 0,
                auVar19._0_8_ = uVar40, auVar8._8_8_ = 0,
                auVar8._0_8_ = (ulong)((uVar43 + uVar32) - SUB164(auVar7 * auVar19,8)) * lVar3,
                auVar20._8_8_ = 0, auVar20._0_8_ = uVar40, lVar38 = SUB168(auVar8 * auVar20,8),
                uVar41 <= SUB164(auVar8 * auVar20,8)));
      }
LAB_00115550:
      lVar3 = *(long *)(hash_table_size_primes_inv + uVar35 * 8);
      uVar42 = CONCAT44(0,*(uint *)(hash_table_size_primes + uVar35 * 4));
      uVar32 = (iVar36 * 0x16a88000 | (uint)(iVar36 * -0x3361d2af) >> 0x11) * 0x1b873593 ^ 0x7f07c65
      ;
      uVar32 = (uVar32 << 0xd | uVar32 >> 0x13) * 5 + 0xe6546b64 ^
               (local_c8 * 0x16a88000 | (uint)(local_c8 * -0x3361d2af) >> 0x11) * 0x1b873593;
      uVar32 = (uVar32 << 0xd | uVar32 >> 0x13) * 5 + 0xe6546b64;
      uVar44 = (ulong)uVar32;
      if (uVar32 == 0) {
        uVar44 = 1;
      }
      auVar9._8_8_ = 0;
      auVar9._0_8_ = uVar44 * lVar3;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar42;
      lVar37 = SUB168(auVar9 * auVar21,8);
      uVar32 = *(uint *)(lVar39 + lVar37 * 4);
      uVar31 = SUB164(auVar9 * auVar21,8);
      if (uVar32 != 0) {
        uVar43 = 0;
        lVar38 = lVar37;
        do {
          if ((((uint)uVar44 == uVar32) &&
              (lVar37 = *(long *)((long)__s_00 + lVar37 * 8), iVar36 == *(int *)(lVar37 + 0x10))) &&
             (local_c8 == *(int *)(lVar37 + 0x14))) {
            pauVar33 = *(undefined1 (**) [16])((long)__s_00 + (ulong)uVar31 * 8);
            *(undefined8 *)(pauVar33[1] + 8) = _LC169;
            *(undefined8 *)pauVar33[2] = 0x3f80000000000004;
            *(undefined8 *)(pauVar33[2] + 1) = 0x3f800000000000;
            *(undefined8 *)(pauVar33[2] + 9) = 0;
            lStack_e0 = lVar38;
            goto LAB_00115523;
          }
          uVar43 = uVar43 + 1;
          auVar10._8_8_ = 0;
          auVar10._0_8_ = (ulong)(uVar31 + 1) * lVar3;
          auVar22._8_8_ = 0;
          auVar22._0_8_ = uVar42;
          lVar37 = SUB168(auVar10 * auVar22,8);
          uVar32 = *(uint *)(lVar39 + lVar37 * 4);
          uVar31 = SUB164(auVar10 * auVar22,8);
        } while ((uVar32 != 0) &&
                (auVar11._8_8_ = 0, auVar11._0_8_ = (ulong)uVar32 * lVar3, auVar23._8_8_ = 0,
                auVar23._0_8_ = uVar42, auVar12._8_8_ = 0,
                auVar12._0_8_ =
                     (ulong)((*(uint *)(hash_table_size_primes + uVar35 * 4) + uVar31) -
                            SUB164(auVar11 * auVar23,8)) * lVar3, auVar24._8_8_ = 0,
                auVar24._0_8_ = uVar42, lVar38 = SUB168(auVar12 * auVar24,8),
                uVar43 <= SUB164(auVar12 * auVar24,8)));
      }
    }
  }
  if ((float)uVar40 * __LC165 < (float)(local_ac + 1)) {
    if (*(int *)(this + 0x28) == 0x1c) {
      pauVar33 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_00115523;
    }
    _resize_and_rehash(this,*(int *)(this + 0x28) + 1);
  }
  uVar30 = _LC169;
  uVar34 = *(undefined8 *)param_1;
  pauVar33 = (undefined1 (*) [16])operator_new(0x38,"");
  *pauVar33 = (undefined1  [16])0x0;
  *(undefined8 *)pauVar33[1] = uVar34;
  puVar4 = *(undefined8 **)(this + 0x20);
  *(undefined8 *)(pauVar33[1] + 8) = uVar30;
  *(undefined8 *)pauVar33[2] = 0x3f80000000000004;
  *(undefined8 *)(pauVar33[2] + 4) = 0x3f800000;
  *(undefined8 *)(pauVar33[2] + 0xc) = 0;
  if (puVar4 == (undefined8 *)0x0) {
    *(undefined1 (**) [16])(this + 0x18) = pauVar33;
  }
  else {
    *puVar4 = pauVar33;
    *(undefined8 **)(*pauVar33 + 8) = puVar4;
  }
  iVar36 = *(int *)param_1;
  iVar2 = *(int *)(param_1 + 4);
  lVar39 = *(long *)(this + 0x10);
  *(undefined1 (**) [16])(this + 0x20) = pauVar33;
  uVar32 = (iVar36 * 0x16a88000 | (uint)(iVar36 * -0x3361d2af) >> 0x11) * 0x1b873593 ^ 0x7f07c65;
  uVar32 = (uVar32 << 0xd | uVar32 >> 0x13) * 5 + 0xe6546b64 ^
           (iVar2 * 0x16a88000 | (uint)(iVar2 * -0x3361d2af) >> 0x11) * 0x1b873593;
  uVar32 = (uVar32 << 0xd | uVar32 >> 0x13) * 5 + 0xe6546b64;
  uVar35 = (ulong)uVar32;
  if (uVar32 == 0) {
    uVar35 = 1;
  }
  uVar41 = 0;
  lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar43 = (uint)uVar35;
  uVar32 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar40 = CONCAT44(0,uVar32);
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar35 * lVar3;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = uVar40;
  lStack_e0 = SUB168(auVar13 * auVar25,8);
  lVar37 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar39 + lStack_e0 * 4);
  iVar36 = SUB164(auVar13 * auVar25,8);
  uVar31 = *puVar1;
  pauVar29 = pauVar33;
  while (uVar31 != 0) {
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)uVar31 * lVar3;
    auVar26._8_8_ = 0;
    auVar26._0_8_ = uVar40;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)((uVar32 + iVar36) - SUB164(auVar14 * auVar26,8)) * lVar3;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar40;
    uVar43 = SUB164(auVar15 * auVar27,8);
    pauVar45 = pauVar29;
    if (uVar43 < uVar41) {
      *puVar1 = (uint)uVar35;
      uVar35 = (ulong)uVar31;
      puVar4 = (undefined8 *)(lVar37 + lStack_e0 * 8);
      pauVar45 = (undefined1 (*) [16])*puVar4;
      *puVar4 = pauVar29;
      uVar41 = uVar43;
    }
    uVar43 = (uint)uVar35;
    uVar41 = uVar41 + 1;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = (ulong)(iVar36 + 1) * lVar3;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar40;
    lStack_e0 = SUB168(auVar16 * auVar28,8);
    puVar1 = (uint *)(lVar39 + lStack_e0 * 4);
    iVar36 = SUB164(auVar16 * auVar28,8);
    pauVar29 = pauVar45;
    uVar31 = *puVar1;
  }
  *(undefined1 (**) [16])(lVar37 + lStack_e0 * 8) = pauVar29;
  *puVar1 = uVar43;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_00115523:
  auVar46._0_8_ = pauVar33[1] + 8;
  auVar46._8_8_ = lStack_e0;
  return auVar46;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<AudioStreamInteractive::TransitionKey, AudioStreamInteractive::Transition,
   AudioStreamInteractive::TransitionKeyHasher,
   HashMapComparatorDefault<AudioStreamInteractive::TransitionKey>,
   DefaultTypedAllocator<HashMapElement<AudioStreamInteractive::TransitionKey,
   AudioStreamInteractive::Transition> > >::insert(AudioStreamInteractive::TransitionKey const&,
   AudioStreamInteractive::Transition const&, bool) */

void HashMap<AudioStreamInteractive::TransitionKey,AudioStreamInteractive::Transition,AudioStreamInteractive::TransitionKeyHasher,HashMapComparatorDefault<AudioStreamInteractive::TransitionKey>,DefaultTypedAllocator<HashMapElement<AudioStreamInteractive::TransitionKey,AudioStreamInteractive::Transition>>>
     ::insert(TransitionKey *param_1,Transition *param_2,bool param_3)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  void *__s;
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
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined1 (*pauVar26) [16];
  uint uVar27;
  uint uVar28;
  uint uVar29;
  undefined1 (*pauVar30) [16];
  undefined8 uVar31;
  ulong uVar32;
  undefined8 *in_RCX;
  int iVar33;
  undefined7 in_register_00000011;
  int *piVar34;
  long lVar35;
  long lVar36;
  char in_R8B;
  ulong uVar37;
  uint uVar38;
  undefined1 (*pauVar39) [16];
  ulong uVar40;
  void *local_b8;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  piVar34 = (int *)CONCAT71(in_register_00000011,param_3);
  uVar28 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  local_b8 = *(void **)(param_2 + 8);
  if (local_b8 == (void *)0x0) {
    uVar40 = (ulong)uVar28;
    uVar32 = uVar40 * 4;
    uVar37 = uVar40 * 8;
    uVar31 = Memory::alloc_static(uVar32,false);
    *(undefined8 *)(param_2 + 0x10) = uVar31;
    local_b8 = (void *)Memory::alloc_static(uVar37,false);
    *(void **)(param_2 + 8) = local_b8;
    if (uVar28 != 0) {
      __s = *(void **)(param_2 + 0x10);
      if ((__s < (void *)((long)local_b8 + uVar37)) && (local_b8 < (void *)((long)__s + uVar32))) {
        uVar32 = 0;
        do {
          *(undefined4 *)((long)__s + uVar32 * 4) = 0;
          *(undefined8 *)((long)local_b8 + uVar32 * 8) = 0;
          uVar32 = uVar32 + 1;
        } while (uVar40 != uVar32);
      }
      else {
        memset(__s,0,uVar32);
        memset(local_b8,0,uVar37);
      }
      goto LAB_00115a5a;
    }
    iVar2 = *piVar34;
    iVar33 = *(int *)(param_2 + 0x2c);
    iVar3 = piVar34[1];
    if (local_b8 != (void *)0x0) goto LAB_00115a6b;
  }
  else {
LAB_00115a5a:
    iVar2 = *piVar34;
    iVar33 = *(int *)(param_2 + 0x2c);
    iVar3 = piVar34[1];
LAB_00115a6b:
    if (iVar33 != 0) {
      uVar32 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4));
      lVar4 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
      uVar27 = (iVar2 * 0x16a88000 | (uint)(iVar2 * -0x3361d2af) >> 0x11) * 0x1b873593 ^ 0x7f07c65;
      uVar27 = (uVar27 << 0xd | uVar27 >> 0x13) * 5 + 0xe6546b64 ^
               (iVar3 * 0x16a88000 | (uint)(iVar3 * -0x3361d2af) >> 0x11) * 0x1b873593;
      uVar27 = (uVar27 << 0xd | uVar27 >> 0x13) * 5 + 0xe6546b64;
      uVar37 = (ulong)uVar27;
      if (uVar27 == 0) {
        uVar37 = 1;
      }
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar37 * lVar4;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = uVar32;
      lVar35 = SUB168(auVar7 * auVar15,8);
      uVar27 = *(uint *)(*(long *)(param_2 + 0x10) + lVar35 * 4);
      uVar29 = SUB164(auVar7 * auVar15,8);
      if (uVar27 != 0) {
        uVar38 = 0;
        do {
          if ((((uint)uVar37 == uVar27) &&
              (lVar35 = *(long *)((long)local_b8 + lVar35 * 8), iVar2 == *(int *)(lVar35 + 0x10)))
             && (iVar3 == *(int *)(lVar35 + 0x14))) {
            uVar31 = in_RCX[1];
            pauVar30 = *(undefined1 (**) [16])((long)local_b8 + (ulong)uVar29 * 8);
            *(undefined8 *)(pauVar30[1] + 8) = *in_RCX;
            *(undefined8 *)pauVar30[2] = uVar31;
            uVar31 = *(undefined8 *)((long)in_RCX + 0x11);
            *(undefined8 *)(pauVar30[2] + 1) = *(undefined8 *)((long)in_RCX + 9);
            *(undefined8 *)(pauVar30[2] + 9) = uVar31;
            goto LAB_00115d79;
          }
          uVar38 = uVar38 + 1;
          auVar8._8_8_ = 0;
          auVar8._0_8_ = (ulong)(uVar29 + 1) * lVar4;
          auVar16._8_8_ = 0;
          auVar16._0_8_ = uVar32;
          lVar35 = SUB168(auVar8 * auVar16,8);
          uVar27 = *(uint *)(*(long *)(param_2 + 0x10) + lVar35 * 4);
          uVar29 = SUB164(auVar8 * auVar16,8);
        } while ((uVar27 != 0) &&
                (auVar9._8_8_ = 0, auVar9._0_8_ = (ulong)uVar27 * lVar4, auVar17._8_8_ = 0,
                auVar17._0_8_ = uVar32, auVar10._8_8_ = 0,
                auVar10._0_8_ =
                     (ulong)((*(uint *)(hash_table_size_primes +
                                       (ulong)*(uint *)(param_2 + 0x28) * 4) + uVar29) -
                            SUB164(auVar9 * auVar17,8)) * lVar4, auVar18._8_8_ = 0,
                auVar18._0_8_ = uVar32, uVar38 <= SUB164(auVar10 * auVar18,8)));
      }
    }
  }
  if ((float)uVar28 * __LC165 < (float)(iVar33 + 1)) {
    if (*(int *)(param_2 + 0x28) == 0x1c) {
      pauVar30 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_00115d79;
    }
    _resize_and_rehash((HashMap<AudioStreamInteractive::TransitionKey,AudioStreamInteractive::Transition,AudioStreamInteractive::TransitionKeyHasher,HashMapComparatorDefault<AudioStreamInteractive::TransitionKey>,DefaultTypedAllocator<HashMapElement<AudioStreamInteractive::TransitionKey,AudioStreamInteractive::Transition>>>
                        *)param_2,*(int *)(param_2 + 0x28) + 1);
  }
  uVar31 = *(undefined8 *)piVar34;
  uVar23 = *in_RCX;
  uVar24 = *(undefined8 *)((long)in_RCX + 0xc);
  uVar25 = *(undefined8 *)((long)in_RCX + 0x14);
  uStack_58 = (undefined4)in_RCX[1];
  uStack_54 = (undefined4)uVar24;
  pauVar30 = (undefined1 (*) [16])operator_new(0x38,"");
  *pauVar30 = (undefined1  [16])0x0;
  *(undefined8 *)(pauVar30[1] + 8) = uVar23;
  *(ulong *)pauVar30[2] = CONCAT44(uStack_54,uStack_58);
  *(undefined8 *)pauVar30[1] = uVar31;
  puVar5 = *(undefined8 **)(param_2 + 0x20);
  *(undefined8 *)(pauVar30[2] + 4) = uVar24;
  *(undefined8 *)(pauVar30[2] + 0xc) = uVar25;
  if (puVar5 == (undefined8 *)0x0) {
    *(undefined1 (**) [16])(param_2 + 0x18) = pauVar30;
    *(undefined1 (**) [16])(param_2 + 0x20) = pauVar30;
  }
  else if (in_R8B == '\0') {
    *puVar5 = pauVar30;
    *(undefined8 **)(*pauVar30 + 8) = puVar5;
    *(undefined1 (**) [16])(param_2 + 0x20) = pauVar30;
  }
  else {
    lVar4 = *(long *)(param_2 + 0x18);
    *(undefined1 (**) [16])(lVar4 + 8) = pauVar30;
    *(long *)*pauVar30 = lVar4;
    *(undefined1 (**) [16])(param_2 + 0x18) = pauVar30;
  }
  lVar4 = *(long *)(param_2 + 0x10);
  uVar28 = (*piVar34 * 0x16a88000 | (uint)(*piVar34 * -0x3361d2af) >> 0x11) * 0x1b873593 ^ 0x7f07c65
  ;
  uVar28 = (uVar28 << 0xd | uVar28 >> 0x13) * 5 + 0xe6546b64 ^
           (piVar34[1] * 0x16a88000 | (uint)(piVar34[1] * -0x3361d2af) >> 0x11) * 0x1b873593;
  uVar28 = (uVar28 << 0xd | uVar28 >> 0x13) * 5 + 0xe6546b64;
  uVar32 = (ulong)uVar28;
  if (uVar28 == 0) {
    uVar32 = 1;
  }
  uVar38 = 0;
  lVar35 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
  uVar29 = (uint)uVar32;
  uVar28 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  uVar37 = CONCAT44(0,uVar28);
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar32 * lVar35;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uVar37;
  lVar36 = SUB168(auVar11 * auVar19,8);
  lVar6 = *(long *)(param_2 + 8);
  puVar1 = (uint *)(lVar4 + lVar36 * 4);
  iVar33 = SUB164(auVar11 * auVar19,8);
  uVar27 = *puVar1;
  pauVar26 = pauVar30;
  while (uVar27 != 0) {
    auVar12._8_8_ = 0;
    auVar12._0_8_ = (ulong)uVar27 * lVar35;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = uVar37;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = (ulong)((uVar28 + iVar33) - SUB164(auVar12 * auVar20,8)) * lVar35;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar37;
    uVar29 = SUB164(auVar13 * auVar21,8);
    pauVar39 = pauVar26;
    if (uVar29 < uVar38) {
      *puVar1 = (uint)uVar32;
      uVar32 = (ulong)uVar27;
      puVar5 = (undefined8 *)(lVar6 + lVar36 * 8);
      pauVar39 = (undefined1 (*) [16])*puVar5;
      *puVar5 = pauVar26;
      uVar38 = uVar29;
    }
    uVar29 = (uint)uVar32;
    uVar38 = uVar38 + 1;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)(iVar33 + 1) * lVar35;
    auVar22._8_8_ = 0;
    auVar22._0_8_ = uVar37;
    lVar36 = SUB168(auVar14 * auVar22,8);
    puVar1 = (uint *)(lVar4 + lVar36 * 4);
    iVar33 = SUB164(auVar14 * auVar22,8);
    pauVar26 = pauVar39;
    uVar27 = *puVar1;
  }
  *(undefined1 (**) [16])(lVar6 + lVar36 * 8) = pauVar26;
  *puVar1 = uVar29;
  *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 1;
LAB_00115d79:
  *(undefined1 (**) [16])param_1 = pauVar30;
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
LAB_00116140:
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
  if (lVar8 == 0) goto LAB_00116140;
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
        goto LAB_00116051;
      }
      uVar6 = _realloc(this,lVar8);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
    }
    puVar7 = *(undefined8 **)this;
    if (puVar7 != (undefined8 *)0x0) {
LAB_00116051:
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



/* CowData<Vector2i>::_realloc(long) */

undefined8 __thiscall CowData<Vector2i>::_realloc(CowData<Vector2i> *this,long param_1)

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
/* Error CowData<Vector2i>::resize<false>(long) */

undefined8 __thiscall CowData<Vector2i>::resize<false>(CowData<Vector2i> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  
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
    lVar8 = 0;
    lVar3 = 0;
  }
  else {
    lVar8 = *(long *)(lVar3 + -8);
    if (param_1 == lVar8) {
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
    lVar3 = lVar8 * 8;
    if (lVar3 != 0) {
      uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      lVar3 = (uVar4 | uVar4 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 == 0) {
LAB_00116450:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar4 = param_1 * 8 - 1;
  uVar4 = uVar4 >> 1 | uVar4;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  uVar4 = uVar4 | uVar4 >> 0x10;
  uVar4 = uVar4 | uVar4 >> 0x20;
  lVar7 = uVar4 + 1;
  if (lVar7 == 0) goto LAB_00116450;
  if (param_1 <= lVar8) {
    if ((lVar7 != lVar3) && (uVar6 = _realloc(this,lVar7), (int)uVar6 != 0)) {
      return uVar6;
    }
    if (*(long *)this != 0) {
      *(long *)(*(long *)this + -8) = param_1;
      return 0;
    }
    _DAT_00000000 = 0;
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (lVar7 == lVar3) {
LAB_001163bc:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar3 = puVar9[-1];
    if (param_1 <= lVar3) goto LAB_00116351;
  }
  else {
    if (lVar8 != 0) {
      uVar6 = _realloc(this,lVar7);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      goto LAB_001163bc;
    }
    puVar5 = (undefined8 *)Memory::alloc_static(uVar4 + 0x11,false);
    if (puVar5 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar9 = puVar5 + 2;
    *puVar5 = 1;
    puVar5[1] = 0;
    *(undefined8 **)this = puVar9;
    lVar3 = 0;
  }
  memset(puVar9 + lVar3,0,(param_1 - lVar3) * 8);
LAB_00116351:
  puVar9[-1] = param_1;
  return 0;
}



/* CowData<AudioStreamInteractive::TransitionKey>::_realloc(long) */

undefined8 __thiscall
CowData<AudioStreamInteractive::TransitionKey>::_realloc
          (CowData<AudioStreamInteractive::TransitionKey> *this,long param_1)

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
/* Error CowData<AudioStreamInteractive::TransitionKey>::resize<false>(long) */

undefined8 __thiscall
CowData<AudioStreamInteractive::TransitionKey>::resize<false>
          (CowData<AudioStreamInteractive::TransitionKey> *this,long param_1)

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
    lVar3 = lVar9 * 8;
    if (lVar3 != 0) {
      uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      lVar3 = (uVar4 | uVar4 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 == 0) {
LAB_00116780:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar4 = param_1 * 8 - 1;
  uVar4 = uVar4 >> 1 | uVar4;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  uVar4 = uVar4 | uVar4 >> 0x10;
  uVar4 = uVar4 | uVar4 >> 0x20;
  lVar8 = uVar4 + 1;
  if (lVar8 == 0) goto LAB_00116780;
  if (param_1 <= lVar9) {
    if ((lVar8 != lVar3) && (uVar6 = _realloc(this,lVar8), (int)uVar6 != 0)) {
      return uVar6;
    }
    if (*(long *)this != 0) {
      *(long *)(*(long *)this + -8) = param_1;
      return 0;
    }
    _DAT_00000000 = 0;
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (lVar8 == lVar3) {
LAB_001166ec:
    puVar7 = *(undefined8 **)this;
    if (puVar7 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar3 = puVar7[-1];
    if (param_1 <= lVar3) goto LAB_00116678;
  }
  else {
    if (lVar9 != 0) {
      uVar6 = _realloc(this,lVar8);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      goto LAB_001166ec;
    }
    puVar5 = (undefined8 *)Memory::alloc_static(uVar4 + 0x11,false);
    if (puVar5 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar7 = puVar5 + 2;
    *puVar5 = 1;
    puVar5[1] = 0;
    *(undefined8 **)this = puVar7;
    lVar3 = 0;
  }
  puVar5 = puVar7 + lVar3;
  do {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  } while (puVar5 != puVar7 + param_1);
LAB_00116678:
  puVar7[-1] = param_1;
  return 0;
}



/* WARNING: Removing unreachable block (ram,0x00116978) */
/* WARNING: Removing unreachable block (ram,0x00116b0d) */
/* WARNING: Removing unreachable block (ram,0x00116b19) */
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



/* MethodBindT<StringName const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<StringName_const&>::validated_call
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
      goto LAB_00116e21;
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
                    /* WARNING: Could not recover jumptable at 0x00116cad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8);
    return;
  }
LAB_00116e21:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<StringName const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<StringName_const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_00117001;
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
                    /* WARNING: Could not recover jumptable at 0x00116e89. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3);
    return;
  }
LAB_00117001:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Dictionary>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<Dictionary>::call
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
      _err_print_error(&_LC210,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00117170;
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
      (*(code *)pVVar2)((Dictionary *)&local_58);
      Variant::Variant((Variant *)local_48,(Dictionary *)&local_58);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
      Dictionary::~Dictionary((Dictionary *)&local_58);
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
LAB_00117170:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Dictionary>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Dictionary>::validated_call
          (MethodBindTRC<Dictionary> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  code *pcVar1;
  long *plVar2;
  Variant **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  Variant **local_48;
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
    if (local_48 == (Variant **)*plVar2) {
      if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Variant **)0x116b68;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((Dictionary *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Dictionary *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00117399;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    param_2 = *(Variant ***)(param_1 + *(long *)(this + 0x60));
    pcVar1 = *(code **)(pcVar1 + (long)param_2 + -1);
  }
  (*pcVar1)((Dictionary *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  Dictionary::operator=((Dictionary *)(param_3 + 8),(Dictionary *)&local_48);
  Dictionary::~Dictionary((Dictionary *)&local_48);
LAB_00117399:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Dictionary>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Dictionary>::ptrcall
          (MethodBindTRC<Dictionary> *this,Object *param_1,void **param_2,void *param_3)

{
  code *pcVar1;
  long *plVar2;
  void **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  void **local_48;
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
    if (local_48 == (void **)*plVar2) {
      if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (void **)0x116b68;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((Dictionary *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Dictionary *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011756a;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    param_2 = *(void ***)(param_1 + *(long *)(this + 0x60));
    pcVar1 = *(code **)(pcVar1 + (long)param_2 + -1);
  }
  (*pcVar1)((Dictionary *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  Dictionary::operator=((Dictionary *)param_3,(Dictionary *)&local_48);
  Dictionary::~Dictionary((Dictionary *)&local_48);
LAB_0011756a:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Dictionary const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Dictionary_const&>::validated_call
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
      goto LAB_001178b1;
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
                    /* WARNING: Could not recover jumptable at 0x0011773d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8);
    return;
  }
LAB_001178b1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Dictionary const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Dictionary_const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_00117a91;
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
                    /* WARNING: Could not recover jumptable at 0x00117919. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3);
    return;
  }
LAB_00117a91:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int, int, int>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<int,int,int>::validated_call
          (MethodBindTRC<int,int,int> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  int iVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
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
      goto LAB_00117af1;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  iVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60),*(undefined4 *)(*param_2 + 8),
                    *(undefined4 *)(param_2[1] + 8));
  *(long *)(param_3 + 8) = (long)iVar1;
LAB_00117af1:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int, int, int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<int,int,int>::ptrcall
          (MethodBindTRC<int,int,int> *this,Object *param_1,void **param_2,void *param_3)

{
  int iVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
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
      goto LAB_00117cce;
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
                    /* WARNING: Load size is inaccurate */
  iVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60),**param_2,*param_2[1]);
  *(long *)param_3 = (long)iVar1;
LAB_00117cce:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<float, int, int>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<float,int,int>::validated_call
          (MethodBindTRC<float,int,int> *this,Object *param_1,Variant **param_2,Variant *param_3)

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
      goto LAB_00117eb5;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  fVar3 = (float)(*pcVar1)(param_1 + *(long *)(this + 0x60),*(undefined4 *)(*param_2 + 8),
                           *(undefined4 *)(param_2[1] + 8));
  *(double *)(param_3 + 8) = (double)fVar3;
LAB_00117eb5:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<float, int, int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<float,int,int>::ptrcall
          (MethodBindTRC<float,int,int> *this,Object *param_1,void **param_2,void *param_3)

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
      goto LAB_00118092;
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
                    /* WARNING: Load size is inaccurate */
  fVar3 = (float)(*pcVar1)(param_1 + *(long *)(this + 0x60),**param_2,*param_2[1]);
  *(double *)param_3 = (double)fVar3;
LAB_00118092:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<AudioStreamInteractive::FadeMode, int, int>::validated_call(Object*, Variant
   const**, Variant*) const */

void __thiscall
MethodBindTRC<AudioStreamInteractive::FadeMode,int,int>::validated_call
          (MethodBindTRC<AudioStreamInteractive::FadeMode,int,int> *this,Object *param_1,
          Variant **param_2,Variant *param_3)

{
  uint uVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
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
      goto LAB_00118271;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60),*(undefined4 *)(*param_2 + 8),
                    *(undefined4 *)(param_2[1] + 8));
  *(ulong *)(param_3 + 8) = (ulong)uVar1;
LAB_00118271:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<AudioStreamInteractive::FadeMode, int, int>::ptrcall(Object*, void const**, void*)
   const */

void __thiscall
MethodBindTRC<AudioStreamInteractive::FadeMode,int,int>::ptrcall
          (MethodBindTRC<AudioStreamInteractive::FadeMode,int,int> *this,Object *param_1,
          void **param_2,void *param_3)

{
  uint uVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
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
      goto LAB_0011844e;
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
                    /* WARNING: Load size is inaccurate */
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60),**param_2,*param_2[1]);
  *(ulong *)param_3 = (ulong)uVar1;
LAB_0011844e:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<AudioStreamInteractive::TransitionToTime, int, int>::validated_call(Object*,
   Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<AudioStreamInteractive::TransitionToTime,int,int>::validated_call
          (MethodBindTRC<AudioStreamInteractive::TransitionToTime,int,int> *this,Object *param_1,
          Variant **param_2,Variant *param_3)

{
  uint uVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
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
      goto LAB_00118631;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60),*(undefined4 *)(*param_2 + 8),
                    *(undefined4 *)(param_2[1] + 8));
  *(ulong *)(param_3 + 8) = (ulong)uVar1;
LAB_00118631:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<AudioStreamInteractive::TransitionToTime, int, int>::ptrcall(Object*, void const**,
   void*) const */

void __thiscall
MethodBindTRC<AudioStreamInteractive::TransitionToTime,int,int>::ptrcall
          (MethodBindTRC<AudioStreamInteractive::TransitionToTime,int,int> *this,Object *param_1,
          void **param_2,void *param_3)

{
  uint uVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
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
      goto LAB_0011880e;
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
                    /* WARNING: Load size is inaccurate */
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60),**param_2,*param_2[1]);
  *(ulong *)param_3 = (ulong)uVar1;
LAB_0011880e:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<AudioStreamInteractive::TransitionFromTime, int, int>::validated_call(Object*,
   Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<AudioStreamInteractive::TransitionFromTime,int,int>::validated_call
          (MethodBindTRC<AudioStreamInteractive::TransitionFromTime,int,int> *this,Object *param_1,
          Variant **param_2,Variant *param_3)

{
  uint uVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
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
      goto LAB_001189f1;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60),*(undefined4 *)(*param_2 + 8),
                    *(undefined4 *)(param_2[1] + 8));
  *(ulong *)(param_3 + 8) = (ulong)uVar1;
LAB_001189f1:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<AudioStreamInteractive::TransitionFromTime, int, int>::ptrcall(Object*, void
   const**, void*) const */

void __thiscall
MethodBindTRC<AudioStreamInteractive::TransitionFromTime,int,int>::ptrcall
          (MethodBindTRC<AudioStreamInteractive::TransitionFromTime,int,int> *this,Object *param_1,
          void **param_2,void *param_3)

{
  uint uVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
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
      goto LAB_00118bce;
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
                    /* WARNING: Load size is inaccurate */
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60),**param_2,*param_2[1]);
  *(ulong *)param_3 = (ulong)uVar1;
LAB_00118bce:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector<int>>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<Vector<int>>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
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
      _err_print_error(&_LC210,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00118e60;
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
      (*(code *)pVVar3)(&local_58);
      Variant::Variant((Variant *)local_48,(Vector *)&local_58);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      lVar2 = local_50;
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
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
LAB_00118e60:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector<int>>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Vector<int>>::validated_call
          (MethodBindTRC<Vector<int>> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  Variant **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  Variant **local_48;
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
    if (local_48 == (Variant **)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Variant **)0x116b68;
      local_40[0] = 0x35;
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
      goto LAB_001190cb;
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
  (*pcVar2)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  if (*(long *)(*(long *)(param_3 + 8) + 0x18) != local_40[0]) {
    CowData<int>::_ref((CowData<int> *)(*(long *)(param_3 + 8) + 0x18),(CowData *)local_40);
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
LAB_001190cb:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector<int>>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Vector<int>>::ptrcall
          (MethodBindTRC<Vector<int>> *this,Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  void **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  void **local_48;
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
    if (local_48 == (void **)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (void **)0x116b68;
      local_40[0] = 0x35;
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
      goto LAB_001192c7;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    param_2 = *(void ***)(param_1 + *(long *)(this + 0x60));
    pcVar2 = *(code **)(pcVar2 + (long)param_2 + -1);
  }
  (*pcVar2)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  if (*(long *)((long)param_3 + 8) != local_40[0]) {
    CowData<int>::_ref((CowData<int> *)((long)param_3 + 8),(CowData *)local_40);
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
LAB_001192c7:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool, int, int>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<bool,int,int>::validated_call
          (MethodBindTRC<bool,int,int> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  Variant VVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
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
      goto LAB_0011947f;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  VVar1 = (Variant)(*pcVar2)(param_1 + *(long *)(this + 0x60),*(undefined4 *)(*param_2 + 8),
                             *(undefined4 *)(param_2[1] + 8));
  param_3[8] = VVar1;
LAB_0011947f:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool, int, int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<bool,int,int>::ptrcall
          (MethodBindTRC<bool,int,int> *this,Object *param_1,void **param_2,void *param_3)

{
  undefined1 uVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
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
      goto LAB_0011965c;
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
                    /* WARNING: Load size is inaccurate */
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60),**param_2,*param_2[1]);
  *(undefined1 *)param_3 = uVar1;
LAB_0011965c:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, int, AudioStreamInteractive::TransitionFromTime,
   AudioStreamInteractive::TransitionToTime, AudioStreamInteractive::FadeMode, float, bool, int,
   bool>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<int,int,AudioStreamInteractive::TransitionFromTime,AudioStreamInteractive::TransitionToTime,AudioStreamInteractive::FadeMode,float,bool,int,bool>
     ::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  code *pcVar1;
  Variant *pVVar2;
  long in_FS_OFFSET;
  undefined1 auVar3 [16];
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
      pVVar2 = param_2[0x23];
      if (pVVar2 == (Variant *)0x0) {
        pVVar2 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar2 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar2) {
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
      goto LAB_0011988f;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(param_1 + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(*(long *)(param_1 + 0x60) + (long)param_2) + -1);
  }
  auVar3._4_12_ = SUB1612((undefined1  [16])0x0,4);
  auVar3._0_4_ = (float)*(double *)(*(long *)(param_3 + 0x28) + 8);
  (*pcVar1)(auVar3._0_8_,(long *)(*(long *)(param_1 + 0x60) + (long)param_2),
            *(undefined8 *)(*(long *)param_3 + 8),*(undefined8 *)(*(long *)(param_3 + 8) + 8),
            *(undefined8 *)(*(long *)(param_3 + 0x10) + 8),
            *(undefined8 *)(*(long *)(param_3 + 0x18) + 8),
            *(undefined8 *)(*(long *)(param_3 + 0x20) + 8),
            *(undefined1 *)(*(long *)(param_3 + 0x30) + 8),
            *(undefined8 *)(*(long *)(param_3 + 0x38) + 8),
            *(undefined1 *)(*(long *)(param_3 + 0x40) + 8));
LAB_0011988f:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, int, AudioStreamInteractive::TransitionFromTime,
   AudioStreamInteractive::TransitionToTime, AudioStreamInteractive::FadeMode, float, bool, int,
   bool>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<int,int,AudioStreamInteractive::TransitionFromTime,AudioStreamInteractive::TransitionToTime,AudioStreamInteractive::FadeMode,float,bool,int,bool>
     ::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  undefined1 auVar3 [16];
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
      plVar2 = (long *)param_2[0x23];
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar2 = (long *)((long)param_2[1] + 0x20);
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
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00119aaa;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(param_1 + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(*(long *)(param_1 + 0x60) + (long)param_2) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  auVar3._4_12_ = SUB1612((undefined1  [16])0x0,4);
  auVar3._0_4_ = (float)**(double **)((long)param_3 + 0x28);
  (*pcVar1)(auVar3._0_8_,(long *)(*(long *)(param_1 + 0x60) + (long)param_2),**param_3,
            **(undefined8 **)((long)param_3 + 8),**(undefined8 **)((long)param_3 + 0x10),
            **(undefined8 **)((long)param_3 + 0x18),**(undefined8 **)((long)param_3 + 0x20),
            **(char **)((long)param_3 + 0x30) != '\0',**(undefined8 **)((long)param_3 + 0x38),
            **(char **)((long)param_3 + 0x40) != '\0');
LAB_00119aaa:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int, int>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<int,int>::validated_call
          (MethodBindTRC<int,int> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  int iVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
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
      goto LAB_00119c6a;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  iVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60),*(undefined4 *)(*param_2 + 8));
  *(long *)(param_3 + 8) = (long)iVar1;
LAB_00119c6a:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int, int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<int,int>::ptrcall
          (MethodBindTRC<int,int> *this,Object *param_1,void **param_2,void *param_3)

{
  int iVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
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
      goto LAB_00119e48;
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
  iVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60),**param_2);
  *(long *)param_3 = (long)iVar1;
LAB_00119e48:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
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
      goto LAB_0011a1b9;
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
                    /* WARNING: Could not recover jumptable at 0x0011a043. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8),*(undefined4 *)(*(long *)(param_3 + 8) + 8));
    return;
  }
LAB_0011a1b9:
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
      goto LAB_0011a399;
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
                    /* WARNING: Could not recover jumptable at 0x0011a221. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3,
               **(undefined4 **)((long)param_3 + 8));
    return;
  }
LAB_0011a399:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<AudioStreamInteractive::AutoAdvanceMode, int>::validated_call(Object*, Variant
   const**, Variant*) const */

void __thiscall
MethodBindTRC<AudioStreamInteractive::AutoAdvanceMode,int>::validated_call
          (MethodBindTRC<AudioStreamInteractive::AutoAdvanceMode,int> *this,Object *param_1,
          Variant **param_2,Variant *param_3)

{
  uint uVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
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
      goto LAB_0011a3eb;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60),*(undefined4 *)(*param_2 + 8));
  *(ulong *)(param_3 + 8) = (ulong)uVar1;
LAB_0011a3eb:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<AudioStreamInteractive::AutoAdvanceMode, int>::ptrcall(Object*, void const**,
   void*) const */

void __thiscall
MethodBindTRC<AudioStreamInteractive::AutoAdvanceMode,int>::ptrcall
          (MethodBindTRC<AudioStreamInteractive::AutoAdvanceMode,int> *this,Object *param_1,
          void **param_2,void *param_3)

{
  uint uVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
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
      goto LAB_0011a5ca;
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
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60),**param_2);
  *(ulong *)param_3 = (ulong)uVar1;
LAB_0011a5ca:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, AudioStreamInteractive::AutoAdvanceMode>::validated_call(Object*, Variant
   const**, Variant*) const */

void MethodBindT<int,AudioStreamInteractive::AutoAdvanceMode>::validated_call
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
      goto LAB_0011a939;
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
                    /* WARNING: Could not recover jumptable at 0x0011a7c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8),*(undefined4 *)(*(long *)(param_3 + 8) + 8));
    return;
  }
LAB_0011a939:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, AudioStreamInteractive::AutoAdvanceMode>::ptrcall(Object*, void const**, void*)
   const */

void MethodBindT<int,AudioStreamInteractive::AutoAdvanceMode>::ptrcall
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
      goto LAB_0011ab19;
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
                    /* WARNING: Could not recover jumptable at 0x0011a9a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3,
               **(undefined4 **)((long)param_3 + 8));
    return;
  }
LAB_0011ab19:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<StringName, int>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<StringName,int>::validated_call
          (MethodBindTRC<StringName,int> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
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
      goto LAB_0011ab90;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar1)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),*(undefined4 *)(*param_2 + 8));
  StringName::operator=((StringName *)(param_3 + 8),(StringName *)&local_48);
  if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
    StringName::unref();
  }
LAB_0011ab90:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<StringName, int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<StringName,int>::ptrcall
          (MethodBindTRC<StringName,int> *this,Object *param_1,void **param_2,void *param_3)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
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
      goto LAB_0011ad8e;
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
  (*pcVar1)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),**param_2);
  StringName::operator=((StringName *)param_3,(StringName *)&local_48);
  if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
    StringName::unref();
  }
LAB_0011ad8e:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, StringName const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<int,StringName_const&>::validated_call
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
      goto LAB_0011b0df;
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
                    /* WARNING: Could not recover jumptable at 0x0011af89. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8),*(long *)(param_3 + 8) + 8);
    return;
  }
LAB_0011b0df:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, StringName const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<int,StringName_const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_0011b2c9;
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
                    /* WARNING: Could not recover jumptable at 0x0011b152. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3,
               *(undefined8 *)((long)param_3 + 8));
    return;
  }
LAB_0011b2c9:
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
      _err_print_error(&_LC210,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011b390;
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
LAB_0011b390:
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
      goto LAB_0011b5a4;
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
LAB_0011b5a4:
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
      goto LAB_0011b753;
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
LAB_0011b753:
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
      goto LAB_0011ba91;
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
                    /* WARNING: Could not recover jumptable at 0x0011b91c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_0011ba91:
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
      goto LAB_0011bc71;
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
                    /* WARNING: Could not recover jumptable at 0x0011bafb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_0011bc71:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<unsigned int, unsigned int>::validated_call(Object*, Variant const**, Variant*) const
    */

void MethodBindT<unsigned_int,unsigned_int>::validated_call
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
      goto LAB_0011be59;
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
                    /* WARNING: Could not recover jumptable at 0x0011bce3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8),*(undefined4 *)(*(long *)(param_3 + 8) + 8));
    return;
  }
LAB_0011be59:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<unsigned int, unsigned int>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<unsigned_int,unsigned_int>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_0011c039;
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
                    /* WARNING: Could not recover jumptable at 0x0011bec1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3,
               **(undefined4 **)((long)param_3 + 8));
    return;
  }
LAB_0011c039:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector<String>, String const&, Variant const&>::validated_call(Object*, Variant
   const**, Variant*) const */

void __thiscall
MethodBindTRC<Vector<String>,String_const&,Variant_const&>::validated_call
          (MethodBindTRC<Vector<String>,String_const&,Variant_const&> *this,Object *param_1,
          Variant **param_2,Variant *param_3)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
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
      local_40[0] = 0x35;
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
      goto LAB_0011c0c2;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar1)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),*param_2 + 8,param_2[1]);
  if (*(long *)(*(long *)(param_3 + 8) + 0x18) != local_40[0]) {
    CowData<String>::_ref((CowData<String> *)(*(long *)(param_3 + 8) + 0x18),(CowData *)local_40);
  }
  CowData<String>::_unref((CowData<String> *)local_40);
LAB_0011c0c2:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector<String>, String const&, Variant const&>::ptrcall(Object*, void const**,
   void*) const */

void __thiscall
MethodBindTRC<Vector<String>,String_const&,Variant_const&>::ptrcall
          (MethodBindTRC<Vector<String>,String_const&,Variant_const&> *this,Object *param_1,
          void **param_2,void *param_3)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
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
      local_40[0] = 0x35;
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
      goto LAB_0011c2ba;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar1)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),*param_2,param_2[1]);
  if (*(long *)((long)param_3 + 8) != local_40[0]) {
    CowData<String>::_ref((CowData<String> *)((long)param_3 + 8),(CowData *)local_40);
  }
  CowData<String>::_unref((CowData<String> *)local_40);
LAB_0011c2ba:
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
      local_48 = (Object *)0x116b68;
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
      goto LAB_0011c4f9;
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
    if (pOVar5 == (Object *)0x0) goto LAB_0011c4f9;
    *(undefined8 *)param_3 = 0;
    goto LAB_0011c541;
  }
  pOVar3 = (Object *)__dynamic_cast(local_48,&Object::typeinfo,&RefCounted::typeinfo,0);
                    /* WARNING: Load size is inaccurate */
  pOVar5 = *param_3;
  if (pOVar5 != pOVar3) {
    *(Object **)param_3 = pOVar3;
    if (pOVar3 == (Object *)0x0) {
      if (pOVar5 != (Object *)0x0) goto LAB_0011c541;
    }
    else {
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        *(undefined8 *)param_3 = 0;
      }
      if (pOVar5 != (Object *)0x0) {
LAB_0011c541:
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(pOVar5);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
      if (local_48 == (Object *)0x0) goto LAB_0011c4f9;
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
LAB_0011c4f9:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, Ref<AudioStream> const&>::validated_call(Object*, Variant const**, Variant*)
   const */

void MethodBindT<int,Ref<AudioStream>const&>::validated_call
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
      local_68 = (Object *)0x116b68;
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
      goto LAB_0011c829;
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
LAB_0011c7e0:
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
        if (pOVar2 != (Object *)0x0) goto LAB_0011c7e0;
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
LAB_0011c829:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, Ref<AudioStream> const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<int,Ref<AudioStream>const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      local_48 = (Object *)0x116b68;
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
      goto LAB_0011cad8;
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
LAB_0011caad:
    local_48 = (Object *)0x0;
  }
  else {
    cVar3 = RefCounted::init_ref();
    if (cVar3 == '\0') goto LAB_0011caad;
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
LAB_0011cad8:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<StringName const&>::call(Object*, Variant const**, int, Callable::CallError&) const
    */

Object * MethodBindT<StringName_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
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
  
  plVar9 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar9 != (long *)0x0) && (plVar9[1] != 0)) && (*(char *)(plVar9[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (plVar9[1] == 0) {
      plVar7 = (long *)plVar9[0x23];
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)(**(code **)(*plVar9 + 0x40))(plVar9);
      }
    }
    else {
      plVar7 = (long *)(plVar9[1] + 0x20);
    }
    if (local_48 == (char *)*plVar7) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC210,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011ce20;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar11 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar10 = param_2[5];
    if (pVVar10 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_0011ce70;
LAB_0011ce60:
      pVVar10 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar10 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0011ce70:
        uVar6 = 4;
        goto LAB_0011ce15;
      }
      if (in_R8D == 1) goto LAB_0011ce60;
      lVar8 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar8) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar8,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar10 = pVVar10 + lVar8 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar11 & 1) != 0) {
      pVVar11 = *(Variant **)(pVVar11 + *(long *)((long)plVar9 + (long)pVVar1) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar10,0x15);
    uVar4 = _LC212;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_StringName((Variant *)&local_48);
    (*(code *)pVVar11)((Variant *)((long)plVar9 + (long)pVVar1),(Variant *)&local_48);
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  else {
    uVar6 = 3;
LAB_0011ce15:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_0011ce20:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Dictionary const&>::call(Object*, Variant const**, int, Callable::CallError&) const
    */

Object * MethodBindT<Dictionary_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
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
  
  plVar9 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar9 != (long *)0x0) && (plVar9[1] != 0)) && (*(char *)(plVar9[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (plVar9[1] == 0) {
      plVar7 = (long *)plVar9[0x23];
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)(**(code **)(*plVar9 + 0x40))(plVar9);
      }
    }
    else {
      plVar7 = (long *)(plVar9[1] + 0x20);
    }
    if (local_48 == (char *)*plVar7) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC210,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011d170;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar11 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar10 = param_2[5];
    if (pVVar10 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_0011d1c0;
LAB_0011d1b0:
      pVVar10 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar10 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0011d1c0:
        uVar6 = 4;
        goto LAB_0011d165;
      }
      if (in_R8D == 1) goto LAB_0011d1b0;
      lVar8 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar8) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar8,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar10 = pVVar10 + lVar8 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar11 & 1) != 0) {
      pVVar11 = *(Variant **)(pVVar11 + *(long *)((long)plVar9 + (long)pVVar1) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar10,0x1b);
    uVar4 = _LC213;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_Dictionary((Variant *)&local_48);
    (*(code *)pVVar11)((Variant *)((long)plVar9 + (long)pVVar1),(Variant *)&local_48);
    Dictionary::~Dictionary((Dictionary *)&local_48);
  }
  else {
    uVar6 = 3;
LAB_0011d165:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_0011d170:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<StringName, int>::call(Object*, Variant const**, int, Callable::CallError&) const
    */

Object * MethodBindTRC<StringName,int>::call
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
  bool bVar13;
  long local_78;
  undefined8 local_70;
  char *local_68;
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
      _err_print_error(&_LC210,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_0011d4e0;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar12 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar11 = param_2[5];
    if (pVVar11 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_0011d530;
LAB_0011d520:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0011d530:
        uVar7 = 4;
        goto LAB_0011d4d5;
      }
      if (in_R8D == 1) goto LAB_0011d520;
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
    uVar4 = _LC214;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    iVar6 = Variant::operator_cast_to_int(pVVar11);
    (*(code *)pVVar12)((StringName *)&local_68,(Variant *)((long)plVar10 + (long)pVVar1),iVar6);
    Variant::Variant((Variant *)local_58,(StringName *)&local_68);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    bVar13 = StringName::configured != '\0';
    *(undefined4 *)param_1 = local_58[0];
    *(undefined8 *)(param_1 + 8) = local_50;
    *(undefined8 *)(param_1 + 0x10) = uStack_48;
    if ((bVar13) && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  else {
    uVar7 = 3;
LAB_0011d4d5:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_0011d4e0:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
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
  Object *pOVar5;
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
  long local_68;
  undefined8 local_60;
  Object *local_58;
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
    if (local_58 == (Object *)*plVar9) {
      if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = (Object *)0x116b68;
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC210,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011d8b0;
    }
    if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pVVar13 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar12 = param_2[5];
    if (pVVar12 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_0011d8f0;
LAB_0011d8e0:
      pVVar12 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar12 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0011d8f0:
        uVar8 = 4;
        goto LAB_0011d8a5;
      }
      if (in_R8D == 1) goto LAB_0011d8e0;
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
    uVar4 = _LC214;
    if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    iVar7 = Variant::operator_cast_to_int(pVVar12);
    (*(code *)pVVar13)(&local_58,(Variant *)((long)plVar11 + (long)pVVar1),iVar7);
    Variant::Variant((Variant *)local_48,local_58);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_48[0];
    *(undefined8 *)(param_1 + 8) = local_40;
    *(undefined8 *)(param_1 + 0x10) = uStack_38;
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
  }
  else {
    uVar8 = 3;
LAB_0011d8a5:
    *in_R9 = uVar8;
    in_R9[2] = 1;
  }
LAB_0011d8b0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<AudioStreamInteractive::AutoAdvanceMode, int>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTRC<AudioStreamInteractive::AutoAdvanceMode,int>::call
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
      _err_print_error(&_LC210,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011dc30;
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
      if (in_R8D != 1) goto LAB_0011dc70;
LAB_0011dc60:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0011dc70:
        uVar7 = 4;
        goto LAB_0011dc25;
      }
      if (in_R8D == 1) goto LAB_0011dc60;
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
    uVar4 = _LC214;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    iVar6 = Variant::operator_cast_to_int(pVVar11);
    iVar6 = (*(code *)pVVar12)((Variant *)((long)plVar10 + (long)pVVar1),iVar6);
    Variant::Variant((Variant *)local_48,iVar6);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_48[0];
    *(undefined8 *)(param_1 + 8) = local_40;
    *(undefined8 *)(param_1 + 0x10) = uStack_38;
  }
  else {
    uVar7 = 3;
LAB_0011dc25:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_0011dc30:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int, int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<int,int>::call
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
      _err_print_error(&_LC210,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011dfb0;
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
      if (in_R8D != 1) goto LAB_0011dff0;
LAB_0011dfe0:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0011dff0:
        uVar7 = 4;
        goto LAB_0011dfa5;
      }
      if (in_R8D == 1) goto LAB_0011dfe0;
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
    uVar4 = _LC214;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    iVar6 = Variant::operator_cast_to_int(pVVar11);
    iVar6 = (*(code *)pVVar12)((Variant *)((long)plVar10 + (long)pVVar1),iVar6);
    Variant::Variant((Variant *)local_48,iVar6);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_48[0];
    *(undefined8 *)(param_1 + 8) = local_40;
    *(undefined8 *)(param_1 + 0x10) = uStack_38;
  }
  else {
    uVar7 = 3;
LAB_0011dfa5:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_0011dfb0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, int, AudioStreamInteractive::TransitionFromTime,
   AudioStreamInteractive::TransitionToTime, AudioStreamInteractive::FadeMode, float, bool, int,
   bool>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<int,int,AudioStreamInteractive::TransitionFromTime,AudioStreamInteractive::TransitionToTime,AudioStreamInteractive::FadeMode,float,bool,int,bool>
         ::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  uint uVar17;
  undefined4 in_register_00000014;
  long *plVar18;
  long lVar19;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar20;
  long in_FS_OFFSET;
  long local_a8;
  undefined8 local_a0;
  char *local_98;
  undefined8 local_90;
  Variant *local_88 [9];
  long local_40;
  
  plVar18 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar18 != (long *)0x0) && (plVar18[1] != 0)) && (*(char *)(plVar18[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_98,(StringName *)(param_2 + 3));
    if (plVar18[1] == 0) {
      plVar16 = (long *)plVar18[0x23];
      if (plVar16 == (long *)0x0) {
        plVar16 = (long *)(**(code **)(*plVar18 + 0x40))();
      }
    }
    else {
      plVar16 = (long *)(plVar18[1] + 0x20);
    }
    if (local_98 == (char *)*plVar16) {
      if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_98 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_a0 = 0;
      local_90 = 0x35;
      String::parse_latin1((StrRange *)&local_a0);
      vformat<StringName>((StringName *)&local_98,(StrRange *)&local_a0,&local_a8);
      _err_print_error(&_LC210,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_98,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
      if ((StringName::configured != '\0') && (local_a8 != 0)) {
        StringName::unref();
      }
      goto LAB_0011e540;
    }
    if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar20 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 10) {
    pVVar2 = param_2[5];
    if (pVVar2 == (Variant *)0x0) {
      iVar8 = 0;
      lVar19 = 0;
    }
    else {
      lVar19 = *(long *)(pVVar2 + -8);
      iVar8 = (int)lVar19;
    }
    if ((int)(9 - in_R8D) <= iVar8) {
      lVar12 = 0;
      do {
        while ((int)in_R8D <= (int)lVar12) {
          uVar17 = iVar8 + -9 + (int)lVar12;
          if (lVar19 <= (int)uVar17) {
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,(long)(int)uVar17,lVar19,"p_index",
                       "size()","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          local_88[lVar12] = pVVar2 + (ulong)uVar17 * 0x18;
          lVar12 = lVar12 + 1;
          if (lVar12 == 9) goto LAB_0011e2c0;
        }
        local_88[lVar12] = *(Variant **)(param_4 + lVar12 * 8);
        lVar12 = lVar12 + 1;
      } while (lVar12 != 9);
LAB_0011e2c0:
      *in_R9 = 0;
      if (((ulong)pVVar20 & 1) != 0) {
        pVVar20 = *(Variant **)(pVVar20 + *(long *)((long)plVar18 + (long)pVVar1) + -1);
      }
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_88[8],1);
      uVar4 = _LC215;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      bVar6 = Variant::operator_cast_to_bool(local_88[8]);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_88[7],2);
      uVar4 = _LC216;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      iVar8 = Variant::operator_cast_to_int(local_88[7]);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_88[6],1);
      uVar4 = _LC217;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      bVar7 = Variant::operator_cast_to_bool(local_88[6]);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_88[5],3);
      uVar4 = _LC218;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      Variant::operator_cast_to_float(local_88[5]);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_88[4],2);
      uVar4 = _LC219;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      uVar13 = Variant::operator_cast_to_long(local_88[4]);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_88[3],2);
      uVar4 = _LC220;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      uVar14 = Variant::operator_cast_to_long(local_88[3]);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_88[2],2);
      uVar4 = _LC221;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      uVar15 = Variant::operator_cast_to_long(local_88[2]);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_88[1],2);
      uVar4 = _LC222;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      iVar9 = Variant::operator_cast_to_int(local_88[1]);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_88[0],2);
      uVar4 = _LC214;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      iVar10 = Variant::operator_cast_to_int(local_88[0]);
      (*(code *)pVVar20)((Variant *)((long)plVar18 + (long)pVVar1),iVar10,iVar9,uVar15 & 0xffffffff,
                         uVar14 & 0xffffffff,uVar13 & 0xffffffff,bVar7,iVar8,bVar6);
      goto LAB_0011e540;
    }
    uVar11 = 4;
  }
  else {
    uVar11 = 3;
  }
  *in_R9 = uVar11;
  in_R9[2] = 9;
LAB_0011e540:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, Ref<AudioStream> const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<int,Ref<AudioStream>const&>::call
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
      local_58 = (Object *)0x116b68;
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC210,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011e930;
    }
    if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pVVar14 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (2 < in_R8D) {
    uVar8 = 3;
LAB_0011e925:
    *in_R9 = uVar8;
    in_R9[2] = 2;
    goto LAB_0011e930;
  }
  pVVar15 = param_2[5];
  iVar7 = 2 - in_R8D;
  if (pVVar15 == (Variant *)0x0) {
    if (iVar7 != 0) goto LAB_0011e968;
    this = *(Variant **)param_4;
LAB_0011e97d:
    pVVar15 = *(Variant **)(param_4 + 8);
  }
  else {
    lVar2 = *(long *)(pVVar15 + -8);
    iVar13 = (int)lVar2;
    if (iVar13 < iVar7) {
LAB_0011e968:
      uVar8 = 4;
      goto LAB_0011e925;
    }
    if (in_R8D == 0) {
      lVar11 = (long)(iVar13 + -2);
      if (lVar2 <= lVar11) goto LAB_0011eaa0;
      this = pVVar15 + lVar11 * 0x18;
    }
    else {
      this = *(Variant **)param_4;
      if (in_R8D == 2) goto LAB_0011e97d;
    }
    lVar11 = (long)(int)((in_R8D ^ 1) + (iVar13 - iVar7));
    if (lVar2 <= lVar11) {
LAB_0011eaa0:
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
  uVar4 = _LC223;
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
LAB_0011e899:
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
        if (pOVar5 != (Object *)0x0) goto LAB_0011e899;
      }
    }
  }
  cVar6 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC214;
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
LAB_0011e930:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector<String>, String const&, Variant const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTRC<Vector<String>,String_const&,Variant_const&>::call
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
  Variant *pVVar12;
  int iVar13;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar14;
  long in_FS_OFFSET;
  long local_98;
  undefined8 local_90;
  char *local_88;
  undefined8 local_80;
  undefined4 local_78 [2];
  undefined8 local_70;
  undefined8 uStack_68;
  int local_58 [6];
  long local_40;
  
  plVar11 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar11 != (long *)0x0) && (plVar11[1] != 0)) && (*(char *)(plVar11[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_88,(StringName *)(param_2 + 3));
    if (plVar11[1] == 0) {
      plVar8 = (long *)plVar11[0x23];
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*plVar11 + 0x40))(plVar11);
      }
    }
    else {
      plVar8 = (long *)(plVar11[1] + 0x20);
    }
    if (local_88 == (char *)*plVar8) {
      if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_88 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_90 = 0;
      local_80 = 0x35;
      String::parse_latin1((StrRange *)&local_90);
      vformat<StringName>((StringName *)&local_88,(StrRange *)&local_90,&local_98);
      _err_print_error(&_LC210,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_88,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      if ((StringName::configured != '\0') && (local_98 != 0)) {
        StringName::unref();
      }
      goto LAB_0011ed90;
    }
    if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar14 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 3) {
    pVVar10 = param_2[5];
    iVar6 = 2 - in_R8D;
    if (pVVar10 == (Variant *)0x0) {
      if (iVar6 != 0) goto LAB_0011edd8;
      pVVar12 = *(Variant **)param_4;
LAB_0011eded:
      pVVar10 = *(Variant **)(param_4 + 8);
    }
    else {
      lVar2 = *(long *)(pVVar10 + -8);
      iVar13 = (int)lVar2;
      if (iVar13 < iVar6) {
LAB_0011edd8:
        uVar7 = 4;
        goto LAB_0011edc5;
      }
      if (in_R8D == 0) {
        lVar9 = (long)(iVar13 + -2);
        if (lVar2 <= lVar9) goto LAB_0011eeb0;
        pVVar12 = pVVar10 + lVar9 * 0x18;
      }
      else {
        pVVar12 = *(Variant **)param_4;
        if (in_R8D == 2) goto LAB_0011eded;
      }
      lVar9 = (long)(int)((in_R8D ^ 1) + (iVar13 - iVar6));
      if (lVar2 <= lVar9) {
LAB_0011eeb0:
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
    if (((ulong)pVVar14 & 1) != 0) {
      pVVar14 = *(Variant **)(pVVar14 + *(long *)((long)plVar11 + (long)pVVar1) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar10,0);
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = 1;
    }
    Variant::Variant((Variant *)local_58,pVVar10);
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar12,4);
    uVar4 = _LC225;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_String((Variant *)&local_90);
    (*(code *)pVVar14)(&local_88,(Variant *)((long)plVar11 + (long)pVVar1),(Variant *)&local_90,
                       (Variant *)local_58);
    Variant::Variant((Variant *)local_78,(Vector *)&local_88);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_78[0];
    *(undefined8 *)(param_1 + 8) = local_70;
    *(undefined8 *)(param_1 + 0x10) = uStack_68;
    CowData<String>::_unref((CowData<String> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  else {
    uVar7 = 3;
LAB_0011edc5:
    *in_R9 = uVar7;
    in_R9[2] = 2;
  }
LAB_0011ed90:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
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
      goto LAB_0011f08c;
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
LAB_0011f08c:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_retc_dv<__UnexistingClass, int, int, int>(__UnexistingClass*, int
   (__UnexistingClass::*)(int, int) const, Variant const**, int, Variant&, Callable::CallError&,
   Vector<Variant> const&) */

void call_with_variant_args_retc_dv<__UnexistingClass,int,int,int>
               (__UnexistingClass *param_1,_func_int_int_int *param_2,Variant **param_3,int param_4,
               Variant *param_5,CallError *param_6,Vector *param_7)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  undefined4 in_register_0000000c;
  long *plVar7;
  long lVar8;
  Variant *this;
  uint uVar9;
  int iVar10;
  int iVar11;
  Variant *this_00;
  long in_FS_OFFSET;
  long in_stack_00000010;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  plVar7 = (long *)CONCAT44(in_register_0000000c,param_4);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar9 = (uint)param_5;
  if (uVar9 < 3) {
    lVar1 = *(long *)(in_stack_00000010 + 8);
    iVar10 = 2 - uVar9;
    if (lVar1 == 0) {
      if (iVar10 != 0) goto LAB_0011f3c8;
      this = (Variant *)*plVar7;
LAB_0011f41d:
      this_00 = (Variant *)plVar7[1];
    }
    else {
      lVar2 = *(long *)(lVar1 + -8);
      iVar11 = (int)lVar2;
      if (iVar11 < iVar10) {
LAB_0011f3c8:
        uVar6 = 4;
        goto LAB_0011f3cd;
      }
      if (uVar9 == 0) {
        lVar8 = (long)(iVar11 + -2);
        if (lVar2 <= lVar8) goto LAB_0011f438;
        this = (Variant *)(lVar1 + lVar8 * 0x18);
      }
      else {
        this = (Variant *)*plVar7;
        if (uVar9 == 2) goto LAB_0011f41d;
      }
      lVar8 = (long)(int)((iVar11 - iVar10) + (uVar9 ^ 1));
      if (lVar2 <= lVar8) {
LAB_0011f438:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar8,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this_00 = (Variant *)(lVar1 + lVar8 * 0x18);
    }
    *(undefined4 *)param_7 = 0;
    if (((ulong)param_2 & 1) != 0) {
      param_2 = *(_func_int_int_int **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)this_00,2);
    uVar4 = _LC222;
    if (cVar5 == '\0') {
      *(undefined4 *)param_7 = 2;
      *(undefined8 *)(param_7 + 4) = uVar4;
    }
    Variant::operator_cast_to_int(this_00);
    cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
    uVar4 = _LC214;
    if (cVar5 == '\0') {
      *(undefined4 *)param_7 = 2;
      *(undefined8 *)(param_7 + 4) = uVar4;
    }
    iVar10 = Variant::operator_cast_to_int(this);
    iVar10 = (*param_2)((int)(param_1 + (long)param_3),iVar10);
    Variant::Variant((Variant *)local_58,iVar10);
    if (Variant::needs_deinit[*(int *)param_6] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_6 = local_58[0];
    *(undefined8 *)(param_6 + 8) = local_50;
    *(undefined8 *)(param_6 + 0x10) = uStack_48;
  }
  else {
    uVar6 = 3;
LAB_0011f3cd:
    *(undefined4 *)param_7 = uVar6;
    *(undefined4 *)(param_7 + 8) = 2;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int, int, int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<int,int,int>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long *plVar1;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var2;
  Variant *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var2 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
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
    in_R8 = (Variant *)((ulong)in_R8 & 0xffffffff);
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
      _err_print_error(&_LC210,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011f4f6;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_retc_dv<__UnexistingClass,int,int,int>
            (p_Var2,(_func_int_int_int *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,
             (CallError *)param_1,in_R9);
LAB_0011f4f6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_retc_dv<__UnexistingClass, float, int, int>(__UnexistingClass*, float
   (__UnexistingClass::*)(int, int) const, Variant const**, int, Variant&, Callable::CallError&,
   Vector<Variant> const&) */

void call_with_variant_args_retc_dv<__UnexistingClass,float,int,int>
               (__UnexistingClass *param_1,_func_float_int_int *param_2,Variant **param_3,
               int param_4,Variant *param_5,CallError *param_6,Vector *param_7)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  undefined4 in_register_0000000c;
  long *plVar7;
  long lVar8;
  Variant *this;
  uint uVar9;
  int iVar10;
  int iVar11;
  Variant *this_00;
  long in_FS_OFFSET;
  float fVar12;
  long in_stack_00000010;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  plVar7 = (long *)CONCAT44(in_register_0000000c,param_4);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar9 = (uint)param_5;
  if (uVar9 < 3) {
    lVar1 = *(long *)(in_stack_00000010 + 8);
    iVar10 = 2 - uVar9;
    if (lVar1 == 0) {
      if (iVar10 != 0) goto LAB_0011f828;
      this = (Variant *)*plVar7;
LAB_0011f87d:
      this_00 = (Variant *)plVar7[1];
    }
    else {
      lVar2 = *(long *)(lVar1 + -8);
      iVar11 = (int)lVar2;
      if (iVar11 < iVar10) {
LAB_0011f828:
        uVar6 = 4;
        goto LAB_0011f82d;
      }
      if (uVar9 == 0) {
        lVar8 = (long)(iVar11 + -2);
        if (lVar2 <= lVar8) goto LAB_0011f898;
        this = (Variant *)(lVar1 + lVar8 * 0x18);
      }
      else {
        this = (Variant *)*plVar7;
        if (uVar9 == 2) goto LAB_0011f87d;
      }
      lVar8 = (long)(int)((iVar11 - iVar10) + (uVar9 ^ 1));
      if (lVar2 <= lVar8) {
LAB_0011f898:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar8,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this_00 = (Variant *)(lVar1 + lVar8 * 0x18);
    }
    *(undefined4 *)param_7 = 0;
    if (((ulong)param_2 & 1) != 0) {
      param_2 = *(_func_float_int_int **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)this_00,2);
    uVar4 = _LC222;
    if (cVar5 == '\0') {
      *(undefined4 *)param_7 = 2;
      *(undefined8 *)(param_7 + 4) = uVar4;
    }
    Variant::operator_cast_to_int(this_00);
    cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
    uVar4 = _LC214;
    if (cVar5 == '\0') {
      *(undefined4 *)param_7 = 2;
      *(undefined8 *)(param_7 + 4) = uVar4;
    }
    iVar10 = Variant::operator_cast_to_int(this);
    fVar12 = (*param_2)((int)(param_1 + (long)param_3),iVar10);
    Variant::Variant((Variant *)local_58,fVar12);
    if (Variant::needs_deinit[*(int *)param_6] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_6 = local_58[0];
    *(undefined8 *)(param_6 + 8) = local_50;
    *(undefined8 *)(param_6 + 0x10) = uStack_48;
  }
  else {
    uVar6 = 3;
LAB_0011f82d:
    *(undefined4 *)param_7 = uVar6;
    *(undefined4 *)(param_7 + 8) = 2;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<float, int, int>::call(Object*, Variant const**, int, Callable::CallError&) const
    */

Object * MethodBindTRC<float,int,int>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long *plVar1;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var2;
  Variant *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var2 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
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
    in_R8 = (Variant *)((ulong)in_R8 & 0xffffffff);
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
      _err_print_error(&_LC210,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011f956;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_retc_dv<__UnexistingClass,float,int,int>
            (p_Var2,(_func_float_int_int *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,
             (CallError *)param_1,in_R9);
LAB_0011f956:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_retc_dv<__UnexistingClass, AudioStreamInteractive::FadeMode, int,
   int>(__UnexistingClass*, AudioStreamInteractive::FadeMode (__UnexistingClass::*)(int, int) const,
   Variant const**, int, Variant&, Callable::CallError&, Vector<Variant> const&) */

void call_with_variant_args_retc_dv<__UnexistingClass,AudioStreamInteractive::FadeMode,int,int>
               (__UnexistingClass *param_1,_func_FadeMode_int_int *param_2,Variant **param_3,
               int param_4,Variant *param_5,CallError *param_6,Vector *param_7)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  FadeMode FVar6;
  undefined3 extraout_var;
  undefined4 uVar7;
  undefined4 in_register_0000000c;
  long *plVar8;
  long lVar9;
  Variant *this;
  uint uVar10;
  int iVar11;
  int iVar12;
  Variant *this_00;
  long in_FS_OFFSET;
  long in_stack_00000010;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  plVar8 = (long *)CONCAT44(in_register_0000000c,param_4);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar10 = (uint)param_5;
  if (uVar10 < 3) {
    lVar1 = *(long *)(in_stack_00000010 + 8);
    iVar11 = 2 - uVar10;
    if (lVar1 == 0) {
      if (iVar11 != 0) goto LAB_0011fc88;
      this = (Variant *)*plVar8;
LAB_0011fcdd:
      this_00 = (Variant *)plVar8[1];
    }
    else {
      lVar2 = *(long *)(lVar1 + -8);
      iVar12 = (int)lVar2;
      if (iVar12 < iVar11) {
LAB_0011fc88:
        uVar7 = 4;
        goto LAB_0011fc8d;
      }
      if (uVar10 == 0) {
        lVar9 = (long)(iVar12 + -2);
        if (lVar2 <= lVar9) goto LAB_0011fcf8;
        this = (Variant *)(lVar1 + lVar9 * 0x18);
      }
      else {
        this = (Variant *)*plVar8;
        if (uVar10 == 2) goto LAB_0011fcdd;
      }
      lVar9 = (long)(int)((iVar12 - iVar11) + (uVar10 ^ 1));
      if (lVar2 <= lVar9) {
LAB_0011fcf8:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this_00 = (Variant *)(lVar1 + lVar9 * 0x18);
    }
    *(undefined4 *)param_7 = 0;
    if (((ulong)param_2 & 1) != 0) {
      param_2 = *(_func_FadeMode_int_int **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)this_00,2);
    uVar4 = _LC222;
    if (cVar5 == '\0') {
      *(undefined4 *)param_7 = 2;
      *(undefined8 *)(param_7 + 4) = uVar4;
    }
    Variant::operator_cast_to_int(this_00);
    cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
    uVar4 = _LC214;
    if (cVar5 == '\0') {
      *(undefined4 *)param_7 = 2;
      *(undefined8 *)(param_7 + 4) = uVar4;
    }
    iVar11 = Variant::operator_cast_to_int(this);
    FVar6 = (*param_2)((int)(param_1 + (long)param_3),iVar11);
    Variant::Variant((Variant *)local_58,CONCAT31(extraout_var,FVar6));
    if (Variant::needs_deinit[*(int *)param_6] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_6 = local_58[0];
    *(undefined8 *)(param_6 + 8) = local_50;
    *(undefined8 *)(param_6 + 0x10) = uStack_48;
  }
  else {
    uVar7 = 3;
LAB_0011fc8d:
    *(undefined4 *)param_7 = uVar7;
    *(undefined4 *)(param_7 + 8) = 2;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<AudioStreamInteractive::FadeMode, int, int>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTRC<AudioStreamInteractive::FadeMode,int,int>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long *plVar1;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var2;
  Variant *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var2 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
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
    in_R8 = (Variant *)((ulong)in_R8 & 0xffffffff);
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
      _err_print_error(&_LC210,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011fdb6;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_retc_dv<__UnexistingClass,AudioStreamInteractive::FadeMode,int,int>
            (p_Var2,(_func_FadeMode_int_int *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,
             in_R8,(CallError *)param_1,in_R9);
LAB_0011fdb6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_retc_dv<__UnexistingClass, AudioStreamInteractive::TransitionToTime,
   int, int>(__UnexistingClass*, AudioStreamInteractive::TransitionToTime
   (__UnexistingClass::*)(int, int) const, Variant const**, int, Variant&, Callable::CallError&,
   Vector<Variant> const&) */

void call_with_variant_args_retc_dv<__UnexistingClass,AudioStreamInteractive::TransitionToTime,int,int>
               (__UnexistingClass *param_1,_func_TransitionToTime_int_int *param_2,Variant **param_3
               ,int param_4,Variant *param_5,CallError *param_6,Vector *param_7)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  TransitionToTime TVar6;
  undefined3 extraout_var;
  undefined4 uVar7;
  undefined4 in_register_0000000c;
  long *plVar8;
  long lVar9;
  Variant *this;
  uint uVar10;
  int iVar11;
  int iVar12;
  Variant *this_00;
  long in_FS_OFFSET;
  long in_stack_00000010;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  plVar8 = (long *)CONCAT44(in_register_0000000c,param_4);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar10 = (uint)param_5;
  if (uVar10 < 3) {
    lVar1 = *(long *)(in_stack_00000010 + 8);
    iVar11 = 2 - uVar10;
    if (lVar1 == 0) {
      if (iVar11 != 0) goto LAB_001200e8;
      this = (Variant *)*plVar8;
LAB_0012013d:
      this_00 = (Variant *)plVar8[1];
    }
    else {
      lVar2 = *(long *)(lVar1 + -8);
      iVar12 = (int)lVar2;
      if (iVar12 < iVar11) {
LAB_001200e8:
        uVar7 = 4;
        goto LAB_001200ed;
      }
      if (uVar10 == 0) {
        lVar9 = (long)(iVar12 + -2);
        if (lVar2 <= lVar9) goto LAB_00120158;
        this = (Variant *)(lVar1 + lVar9 * 0x18);
      }
      else {
        this = (Variant *)*plVar8;
        if (uVar10 == 2) goto LAB_0012013d;
      }
      lVar9 = (long)(int)((iVar12 - iVar11) + (uVar10 ^ 1));
      if (lVar2 <= lVar9) {
LAB_00120158:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this_00 = (Variant *)(lVar1 + lVar9 * 0x18);
    }
    *(undefined4 *)param_7 = 0;
    if (((ulong)param_2 & 1) != 0) {
      param_2 = *(_func_TransitionToTime_int_int **)
                 (param_2 + *(long *)(param_1 + (long)param_3) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)this_00,2);
    uVar4 = _LC222;
    if (cVar5 == '\0') {
      *(undefined4 *)param_7 = 2;
      *(undefined8 *)(param_7 + 4) = uVar4;
    }
    Variant::operator_cast_to_int(this_00);
    cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
    uVar4 = _LC214;
    if (cVar5 == '\0') {
      *(undefined4 *)param_7 = 2;
      *(undefined8 *)(param_7 + 4) = uVar4;
    }
    iVar11 = Variant::operator_cast_to_int(this);
    TVar6 = (*param_2)((int)(param_1 + (long)param_3),iVar11);
    Variant::Variant((Variant *)local_58,CONCAT31(extraout_var,TVar6));
    if (Variant::needs_deinit[*(int *)param_6] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_6 = local_58[0];
    *(undefined8 *)(param_6 + 8) = local_50;
    *(undefined8 *)(param_6 + 0x10) = uStack_48;
  }
  else {
    uVar7 = 3;
LAB_001200ed:
    *(undefined4 *)param_7 = uVar7;
    *(undefined4 *)(param_7 + 8) = 2;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<AudioStreamInteractive::TransitionToTime, int, int>::call(Object*, Variant const**,
   int, Callable::CallError&) const */

Object * MethodBindTRC<AudioStreamInteractive::TransitionToTime,int,int>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long *plVar1;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var2;
  Variant *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var2 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
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
    in_R8 = (Variant *)((ulong)in_R8 & 0xffffffff);
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
      _err_print_error(&_LC210,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00120216;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_retc_dv<__UnexistingClass,AudioStreamInteractive::TransitionToTime,int,int>
            (p_Var2,(_func_TransitionToTime_int_int *)param_2[0xb],(Variant **)param_2[0xc],
             (int)param_4,in_R8,(CallError *)param_1,in_R9);
LAB_00120216:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_retc_dv<__UnexistingClass,
   AudioStreamInteractive::TransitionFromTime, int, int>(__UnexistingClass*,
   AudioStreamInteractive::TransitionFromTime (__UnexistingClass::*)(int, int) const, Variant
   const**, int, Variant&, Callable::CallError&, Vector<Variant> const&) */

void call_with_variant_args_retc_dv<__UnexistingClass,AudioStreamInteractive::TransitionFromTime,int,int>
               (__UnexistingClass *param_1,_func_TransitionFromTime_int_int *param_2,
               Variant **param_3,int param_4,Variant *param_5,CallError *param_6,Vector *param_7)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  TransitionFromTime TVar6;
  undefined3 extraout_var;
  undefined4 uVar7;
  undefined4 in_register_0000000c;
  long *plVar8;
  long lVar9;
  Variant *this;
  uint uVar10;
  int iVar11;
  int iVar12;
  Variant *this_00;
  long in_FS_OFFSET;
  long in_stack_00000010;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  plVar8 = (long *)CONCAT44(in_register_0000000c,param_4);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar10 = (uint)param_5;
  if (uVar10 < 3) {
    lVar1 = *(long *)(in_stack_00000010 + 8);
    iVar11 = 2 - uVar10;
    if (lVar1 == 0) {
      if (iVar11 != 0) goto LAB_00120548;
      this = (Variant *)*plVar8;
LAB_0012059d:
      this_00 = (Variant *)plVar8[1];
    }
    else {
      lVar2 = *(long *)(lVar1 + -8);
      iVar12 = (int)lVar2;
      if (iVar12 < iVar11) {
LAB_00120548:
        uVar7 = 4;
        goto LAB_0012054d;
      }
      if (uVar10 == 0) {
        lVar9 = (long)(iVar12 + -2);
        if (lVar2 <= lVar9) goto LAB_001205b8;
        this = (Variant *)(lVar1 + lVar9 * 0x18);
      }
      else {
        this = (Variant *)*plVar8;
        if (uVar10 == 2) goto LAB_0012059d;
      }
      lVar9 = (long)(int)((iVar12 - iVar11) + (uVar10 ^ 1));
      if (lVar2 <= lVar9) {
LAB_001205b8:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this_00 = (Variant *)(lVar1 + lVar9 * 0x18);
    }
    *(undefined4 *)param_7 = 0;
    if (((ulong)param_2 & 1) != 0) {
      param_2 = *(_func_TransitionFromTime_int_int **)
                 (param_2 + *(long *)(param_1 + (long)param_3) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)this_00,2);
    uVar4 = _LC222;
    if (cVar5 == '\0') {
      *(undefined4 *)param_7 = 2;
      *(undefined8 *)(param_7 + 4) = uVar4;
    }
    Variant::operator_cast_to_int(this_00);
    cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
    uVar4 = _LC214;
    if (cVar5 == '\0') {
      *(undefined4 *)param_7 = 2;
      *(undefined8 *)(param_7 + 4) = uVar4;
    }
    iVar11 = Variant::operator_cast_to_int(this);
    TVar6 = (*param_2)((int)(param_1 + (long)param_3),iVar11);
    Variant::Variant((Variant *)local_58,CONCAT31(extraout_var,TVar6));
    if (Variant::needs_deinit[*(int *)param_6] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_6 = local_58[0];
    *(undefined8 *)(param_6 + 8) = local_50;
    *(undefined8 *)(param_6 + 0x10) = uStack_48;
  }
  else {
    uVar7 = 3;
LAB_0012054d:
    *(undefined4 *)param_7 = uVar7;
    *(undefined4 *)(param_7 + 8) = 2;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<AudioStreamInteractive::TransitionFromTime, int, int>::call(Object*, Variant
   const**, int, Callable::CallError&) const */

Object * MethodBindTRC<AudioStreamInteractive::TransitionFromTime,int,int>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long *plVar1;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var2;
  Variant *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var2 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
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
    in_R8 = (Variant *)((ulong)in_R8 & 0xffffffff);
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
      _err_print_error(&_LC210,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00120676;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_retc_dv<__UnexistingClass,AudioStreamInteractive::TransitionFromTime,int,int>
            (p_Var2,(_func_TransitionFromTime_int_int *)param_2[0xb],(Variant **)param_2[0xc],
             (int)param_4,in_R8,(CallError *)param_1,in_R9);
LAB_00120676:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_retc_dv<__UnexistingClass, bool, int, int>(__UnexistingClass*, bool
   (__UnexistingClass::*)(int, int) const, Variant const**, int, Variant&, Callable::CallError&,
   Vector<Variant> const&) */

void call_with_variant_args_retc_dv<__UnexistingClass,bool,int,int>
               (__UnexistingClass *param_1,_func_bool_int_int *param_2,Variant **param_3,int param_4
               ,Variant *param_5,CallError *param_6,Vector *param_7)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  undefined4 uVar7;
  undefined4 in_register_0000000c;
  long *plVar8;
  long lVar9;
  Variant *this;
  uint uVar10;
  int iVar11;
  int iVar12;
  Variant *this_00;
  long in_FS_OFFSET;
  long in_stack_00000010;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  plVar8 = (long *)CONCAT44(in_register_0000000c,param_4);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar10 = (uint)param_5;
  if (uVar10 < 3) {
    lVar1 = *(long *)(in_stack_00000010 + 8);
    iVar11 = 2 - uVar10;
    if (lVar1 == 0) {
      if (iVar11 != 0) goto LAB_001209a8;
      this = (Variant *)*plVar8;
LAB_001209fd:
      this_00 = (Variant *)plVar8[1];
    }
    else {
      lVar2 = *(long *)(lVar1 + -8);
      iVar12 = (int)lVar2;
      if (iVar12 < iVar11) {
LAB_001209a8:
        uVar7 = 4;
        goto LAB_001209ad;
      }
      if (uVar10 == 0) {
        lVar9 = (long)(iVar12 + -2);
        if (lVar2 <= lVar9) goto LAB_00120a18;
        this = (Variant *)(lVar1 + lVar9 * 0x18);
      }
      else {
        this = (Variant *)*plVar8;
        if (uVar10 == 2) goto LAB_001209fd;
      }
      lVar9 = (long)(int)((iVar12 - iVar11) + (uVar10 ^ 1));
      if (lVar2 <= lVar9) {
LAB_00120a18:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this_00 = (Variant *)(lVar1 + lVar9 * 0x18);
    }
    *(undefined4 *)param_7 = 0;
    if (((ulong)param_2 & 1) != 0) {
      param_2 = *(_func_bool_int_int **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)this_00,2);
    uVar4 = _LC222;
    if (cVar5 == '\0') {
      *(undefined4 *)param_7 = 2;
      *(undefined8 *)(param_7 + 4) = uVar4;
    }
    Variant::operator_cast_to_int(this_00);
    cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
    uVar4 = _LC214;
    if (cVar5 == '\0') {
      *(undefined4 *)param_7 = 2;
      *(undefined8 *)(param_7 + 4) = uVar4;
    }
    iVar11 = Variant::operator_cast_to_int(this);
    bVar6 = (*param_2)((int)(param_1 + (long)param_3),iVar11);
    Variant::Variant((Variant *)local_58,bVar6);
    if (Variant::needs_deinit[*(int *)param_6] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_6 = local_58[0];
    *(undefined8 *)(param_6 + 8) = local_50;
    *(undefined8 *)(param_6 + 0x10) = uStack_48;
  }
  else {
    uVar7 = 3;
LAB_001209ad:
    *(undefined4 *)param_7 = uVar7;
    *(undefined4 *)(param_7 + 8) = 2;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool, int, int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<bool,int,int>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long *plVar1;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var2;
  Variant *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var2 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
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
    in_R8 = (Variant *)((ulong)in_R8 & 0xffffffff);
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
      _err_print_error(&_LC210,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00120ad6;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_retc_dv<__UnexistingClass,bool,int,int>
            (p_Var2,(_func_bool_int_int *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,
             (CallError *)param_1,in_R9);
LAB_00120ad6:
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
    goto LAB_00120dbd;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  iVar6 = 2 - uVar10;
  if (lVar1 == 0) {
    if (iVar6 == 0) {
      this = (Variant *)*plVar8;
LAB_00120ded:
      this_00 = (Variant *)plVar8[1];
      goto LAB_00120d25;
    }
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    iVar11 = (int)lVar2;
    if (iVar6 <= iVar11) {
      if (uVar10 == 0) {
        lVar9 = (long)(iVar11 + -2);
        if (lVar2 <= lVar9) goto LAB_00120e08;
        this = (Variant *)(lVar1 + lVar9 * 0x18);
      }
      else {
        this = (Variant *)*plVar8;
        if (uVar10 == 2) goto LAB_00120ded;
      }
      lVar9 = (long)(int)((uVar10 ^ 1) + (iVar11 - iVar6));
      if (lVar2 <= lVar9) {
LAB_00120e08:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this_00 = (Variant *)(lVar1 + lVar9 * 0x18);
LAB_00120d25:
      *(undefined4 *)param_6 = 0;
      if (((ulong)param_2 & 1) != 0) {
        param_2 = *(_func_void_int_int **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
      }
      cVar5 = Variant::can_convert_strict(*(undefined4 *)this_00,2);
      uVar4 = _LC222;
      if (cVar5 == '\0') {
        *(undefined4 *)param_6 = 2;
        *(undefined8 *)(param_6 + 4) = uVar4;
      }
      Variant::operator_cast_to_int(this_00);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
      uVar4 = _LC214;
      if (cVar5 == '\0') {
        *(undefined4 *)param_6 = 2;
        *(undefined8 *)(param_6 + 4) = uVar4;
      }
      iVar6 = Variant::operator_cast_to_int(this);
                    /* WARNING: Could not recover jumptable at 0x00120dab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*param_2)((int)(param_1 + (long)param_3),iVar6);
      return;
    }
  }
  uVar7 = 4;
LAB_00120dbd:
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
      _err_print_error(&_LC210,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00120ea6;
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
LAB_00120ea6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, int,
   AudioStreamInteractive::AutoAdvanceMode>(__UnexistingClass*, void (__UnexistingClass::*)(int,
   AudioStreamInteractive::AutoAdvanceMode), Variant const**, int, Callable::CallError&,
   Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,int,AudioStreamInteractive::AutoAdvanceMode>
               (__UnexistingClass *param_1,_func_void_int_AutoAdvanceMode *param_2,Variant **param_3
               ,int param_4,CallError *param_5,Vector *param_6)

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
    goto LAB_0012119d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  iVar6 = 2 - uVar10;
  if (lVar1 == 0) {
    if (iVar6 == 0) {
      this = (Variant *)*plVar8;
LAB_001211cd:
      this_00 = (Variant *)plVar8[1];
      goto LAB_00121105;
    }
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    iVar11 = (int)lVar2;
    if (iVar6 <= iVar11) {
      if (uVar10 == 0) {
        lVar9 = (long)(iVar11 + -2);
        if (lVar2 <= lVar9) goto LAB_001211e8;
        this = (Variant *)(lVar1 + lVar9 * 0x18);
      }
      else {
        this = (Variant *)*plVar8;
        if (uVar10 == 2) goto LAB_001211cd;
      }
      lVar9 = (long)(int)((uVar10 ^ 1) + (iVar11 - iVar6));
      if (lVar2 <= lVar9) {
LAB_001211e8:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this_00 = (Variant *)(lVar1 + lVar9 * 0x18);
LAB_00121105:
      *(undefined4 *)param_6 = 0;
      if (((ulong)param_2 & 1) != 0) {
        param_2 = *(_func_void_int_AutoAdvanceMode **)
                   (param_2 + *(long *)(param_1 + (long)param_3) + -1);
      }
      cVar5 = Variant::can_convert_strict(*(undefined4 *)this_00,2);
      uVar4 = _LC222;
      if (cVar5 == '\0') {
        *(undefined4 *)param_6 = 2;
        *(undefined8 *)(param_6 + 4) = uVar4;
      }
      Variant::operator_cast_to_long(this_00);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
      uVar4 = _LC214;
      if (cVar5 == '\0') {
        *(undefined4 *)param_6 = 2;
        *(undefined8 *)(param_6 + 4) = uVar4;
      }
      iVar6 = Variant::operator_cast_to_int(this);
                    /* WARNING: Could not recover jumptable at 0x0012118b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*param_2)((int)(param_1 + (long)param_3),(char)iVar6);
      return;
    }
  }
  uVar7 = 4;
LAB_0012119d:
  *(undefined4 *)param_6 = uVar7;
  *(undefined4 *)(param_6 + 8) = 2;
  return;
}



/* MethodBindT<int, AudioStreamInteractive::AutoAdvanceMode>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<int,AudioStreamInteractive::AutoAdvanceMode>::call
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
      _err_print_error(&_LC210,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00121286;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,int,AudioStreamInteractive::AutoAdvanceMode>
            (p_Var2,(_func_void_int_AutoAdvanceMode *)param_2[0xb],(Variant **)param_2[0xc],
             (int)param_4,in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00121286:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, int, StringName const&>(__UnexistingClass*,
   void (__UnexistingClass::*)(int, StringName const&), Variant const**, int, Callable::CallError&,
   Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,int,StringName_const&>
               (__UnexistingClass *param_1,_func_void_int_StringName_ptr *param_2,Variant **param_3,
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
  undefined4 *puVar12;
  long in_FS_OFFSET;
  long in_stack_00000008;
  long local_48;
  long local_40;
  
  plVar8 = (long *)CONCAT44(in_register_0000000c,param_4);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar10 = (uint)param_5;
  if (uVar10 < 3) {
    lVar1 = *(long *)(in_stack_00000008 + 8);
    iVar6 = 2 - uVar10;
    if (lVar1 == 0) {
      if (iVar6 != 0) goto LAB_001215a0;
      this = (Variant *)*plVar8;
LAB_001215ed:
      puVar12 = (undefined4 *)plVar8[1];
    }
    else {
      lVar2 = *(long *)(lVar1 + -8);
      iVar11 = (int)lVar2;
      if (iVar11 < iVar6) {
LAB_001215a0:
        uVar7 = 4;
        goto LAB_001215a5;
      }
      if (uVar10 == 0) {
        lVar9 = (long)(iVar11 + -2);
        if (lVar2 <= lVar9) goto LAB_00121608;
        this = (Variant *)(lVar1 + lVar9 * 0x18);
      }
      else {
        this = (Variant *)*plVar8;
        if (uVar10 == 2) goto LAB_001215ed;
      }
      lVar9 = (long)(int)((uVar10 ^ 1) + (iVar11 - iVar6));
      if (lVar2 <= lVar9) {
LAB_00121608:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      puVar12 = (undefined4 *)(lVar1 + lVar9 * 0x18);
    }
    *(undefined4 *)param_6 = 0;
    if (((ulong)param_2 & 1) != 0) {
      param_2 = *(_func_void_int_StringName_ptr **)
                 (param_2 + *(long *)(param_1 + (long)param_3) + -1);
    }
    cVar5 = Variant::can_convert_strict(*puVar12,0x15);
    uVar4 = _LC226;
    if (cVar5 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = uVar4;
    }
    Variant::operator_cast_to_StringName((Variant *)&local_48);
    cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
    uVar4 = _LC214;
    if (cVar5 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = uVar4;
    }
    iVar6 = Variant::operator_cast_to_int(this);
    (*param_2)((int)(param_1 + (long)param_3),(StringName *)iVar6);
    if ((StringName::configured != '\0') && (local_48 != 0)) {
      StringName::unref();
    }
  }
  else {
    uVar7 = 3;
LAB_001215a5:
    *(undefined4 *)param_6 = uVar7;
    *(undefined4 *)(param_6 + 8) = 2;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, StringName const&>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindT<int,StringName_const&>::call
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
      _err_print_error(&_LC210,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_001216a6;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,int,StringName_const&>
            (p_Var2,(_func_void_int_StringName_ptr *)param_2[0xb],(Variant **)param_2[0xc],
             (int)param_4,in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_001216a6:
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
    goto LAB_0012196d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_001219d0;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_001219d0:
      uVar6 = 4;
LAB_0012196d:
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
      goto LAB_001218eb;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_001218eb:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_int **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC214;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_int(this);
                    /* WARNING: Could not recover jumptable at 0x00121946. Too many branches */
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
      _err_print_error(&_LC210,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00121a36;
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
LAB_00121a36:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, unsigned int, unsigned int>(__UnexistingClass*,
   void (__UnexistingClass::*)(unsigned int, unsigned int), Variant const**, int,
   Callable::CallError&, Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,unsigned_int,unsigned_int>
               (__UnexistingClass *param_1,_func_void_uint_uint *param_2,Variant **param_3,
               int param_4,CallError *param_5,Vector *param_6)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 in_register_0000000c;
  long *plVar9;
  long lVar10;
  Variant *this;
  int iVar11;
  Variant *this_00;
  long in_stack_00000008;
  
  plVar9 = (long *)CONCAT44(in_register_0000000c,param_4);
  uVar7 = (uint)param_5;
  if (2 < uVar7) {
    uVar8 = 3;
    goto LAB_00121d2d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  iVar6 = 2 - uVar7;
  if (lVar1 == 0) {
    if (iVar6 == 0) {
      this = (Variant *)*plVar9;
LAB_00121d5d:
      this_00 = (Variant *)plVar9[1];
      goto LAB_00121c95;
    }
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    iVar11 = (int)lVar2;
    if (iVar6 <= iVar11) {
      if (uVar7 == 0) {
        lVar10 = (long)(iVar11 + -2);
        if (lVar2 <= lVar10) goto LAB_00121d78;
        this = (Variant *)(lVar1 + lVar10 * 0x18);
      }
      else {
        this = (Variant *)*plVar9;
        if (uVar7 == 2) goto LAB_00121d5d;
      }
      lVar10 = (long)(int)((uVar7 ^ 1) + (iVar11 - iVar6));
      if (lVar2 <= lVar10) {
LAB_00121d78:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar10,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this_00 = (Variant *)(lVar1 + lVar10 * 0x18);
LAB_00121c95:
      *(undefined4 *)param_6 = 0;
      if (((ulong)param_2 & 1) != 0) {
        param_2 = *(_func_void_uint_uint **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
      }
      cVar5 = Variant::can_convert_strict(*(undefined4 *)this_00,2);
      uVar4 = _LC222;
      if (cVar5 == '\0') {
        *(undefined4 *)param_6 = 2;
        *(undefined8 *)(param_6 + 4) = uVar4;
      }
      Variant::operator_cast_to_unsigned_int(this_00);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
      uVar4 = _LC214;
      if (cVar5 == '\0') {
        *(undefined4 *)param_6 = 2;
        *(undefined8 *)(param_6 + 4) = uVar4;
      }
      uVar7 = Variant::operator_cast_to_unsigned_int(this);
                    /* WARNING: Could not recover jumptable at 0x00121d1b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*param_2)((uint)(param_1 + (long)param_3),uVar7);
      return;
    }
  }
  uVar8 = 4;
LAB_00121d2d:
  *(undefined4 *)param_6 = uVar8;
  *(undefined4 *)(param_6 + 8) = 2;
  return;
}



/* MethodBindT<unsigned int, unsigned int>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<unsigned_int,unsigned_int>::call
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
      _err_print_error(&_LC210,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00121e16;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,unsigned_int,unsigned_int>
            (p_Var2,(_func_void_uint_uint *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8
             ,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00121e16:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info<String const&, Variant const&>(int, PropertyInfo&) */

void call_get_argument_type_info<String_const&,Variant_const&>(int param_1,PropertyInfo *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uVar4;
  long lVar5;
  long in_FS_OFFSET;
  undefined8 local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  ulong local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != 0) {
    if (param_1 == 1) {
      local_70 = 0;
      local_60 = (undefined1  [16])0x0;
      local_78 = 0;
      local_80 = 0;
      local_68 = (undefined *)0x0;
      local_50 = 0;
      local_48 = 0;
      local_40 = 0x20006;
      StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      if ((StringName::configured != '\0') && (local_70 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_2 = local_68._0_4_;
      if (*(long *)(param_2 + 8) != local_60._0_8_) {
        CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 8));
        uVar4 = local_60._0_8_;
        auVar2._8_8_ = 0;
        auVar2._0_8_ = local_60._8_8_;
        local_60 = auVar2 << 0x40;
        *(undefined8 *)(param_2 + 8) = uVar4;
      }
      if (*(long *)(param_2 + 0x10) != local_60._8_8_) {
        StringName::unref();
        uVar4 = local_60._8_8_;
        local_60._8_8_ = 0;
        *(undefined8 *)(param_2 + 0x10) = uVar4;
      }
      *(int *)(param_2 + 0x18) = (int)local_50;
      if (*(long *)(param_2 + 0x20) != local_48) {
        CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 0x20));
        lVar5 = local_48;
        local_48 = 0;
        *(long *)(param_2 + 0x20) = lVar5;
      }
      *(undefined4 *)(param_2 + 0x28) = local_40;
      PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
    }
    goto LAB_00122020;
  }
  local_78 = 0;
  local_80 = 0;
  local_68 = &_LC5;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,4);
  local_50 = local_50 & 0xffffffff00000000;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00122248:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if ((int)local_50 != 0x11) goto LAB_00122248;
    StringName::StringName((StringName *)&local_70,(CowData<char32_t> *)&local_48,false);
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
  *(undefined4 *)param_2 = local_68._0_4_;
  if (*(long *)(param_2 + 8) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 8));
    uVar4 = local_60._0_8_;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = local_60._8_8_;
    local_60 = auVar3 << 0x40;
    *(undefined8 *)(param_2 + 8) = uVar4;
  }
  if (*(long *)(param_2 + 0x10) != local_60._8_8_) {
    StringName::unref();
    uVar4 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(param_2 + 0x10) = uVar4;
  }
  *(int *)(param_2 + 0x18) = (int)local_50;
  if (*(long *)(param_2 + 0x20) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 0x20));
    lVar5 = local_48;
    local_48 = 0;
    *(long *)(param_2 + 0x20) = lVar5;
  }
  *(undefined4 *)(param_2 + 0x28) = local_40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
LAB_00122020:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindTRC<Vector<String>, String const&, Variant const&>::_gen_argument_type_info(int) const
    */

undefined4 *
MethodBindTRC<Vector<String>,String_const&,Variant_const&>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined8 uVar4;
  uint in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar5;
  long in_FS_OFFSET;
  undefined8 local_80;
  long local_78;
  long local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar5 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX < 2) {
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info<String_const&,Variant_const&>(in_EDX,(PropertyInfo *)&local_68);
    uVar3 = local_60._0_8_;
    uVar4 = local_60._8_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_60._8_8_;
    local_60 = auVar1 << 0x40;
    *puVar5 = local_68._0_4_;
    *(undefined8 *)(puVar5 + 2) = uVar3;
    *(undefined8 *)(puVar5 + 4) = uVar4;
    puVar5[6] = (undefined4)local_50;
    *(undefined8 *)(puVar5 + 8) = local_48;
    puVar5[10] = local_40;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
    goto LAB_001224a2;
  }
  local_70 = 0;
  local_78 = 0;
  local_68 = &_LC5;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._0_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_78);
  local_80 = 0;
  *puVar5 = 0x22;
  puVar5[6] = 0;
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar5[10] = 6;
LAB_001224c7:
    StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_70);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_78);
    puVar5[10] = 6;
    if (puVar5[6] != 0x11) goto LAB_001224c7;
    StringName::StringName((StringName *)&local_68,(CowData<char32_t> *)(puVar5 + 8),false);
    if (*(undefined **)(puVar5 + 4) == local_68) {
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(undefined **)(puVar5 + 4) = local_68;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_001224a2:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info_helper<StringName const&>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<StringName_const&>
               (int param_1,int *param_2,PropertyInfo *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  long in_FS_OFFSET;
  undefined8 local_98;
  long local_90;
  long local_88;
  long local_80;
  undefined *local_78;
  undefined1 local_70 [16];
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar5 = *param_2;
  if (iVar5 != param_1) goto LAB_00122559;
  local_88 = 0;
  local_90 = 0;
  local_78 = &_LC5;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_70._8_8_;
  local_70 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_90);
  local_98 = 0;
  local_78 = (undefined *)CONCAT44(local_78._4_4_,0x15);
  local_60 = 0;
  local_58 = 0;
  local_70 = (undefined1  [16])0x0;
  if (local_90 == 0) {
LAB_00122658:
    local_50 = 6;
    StringName::operator=((StringName *)(local_70 + 8),(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 6;
    if (local_60 != 0x11) goto LAB_00122658;
    StringName::StringName((StringName *)&local_80,(CowData<char32_t> *)&local_58,false);
    if (local_70._8_8_ == local_80) {
      if ((StringName::configured != '\0') && (local_80 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_70._8_8_ = local_80;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  *(undefined4 *)param_3 = local_78._0_4_;
  if (*(long *)(param_3 + 8) != local_70._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 8));
    uVar3 = local_70._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_70._8_8_;
    local_70 = auVar2 << 0x40;
    *(undefined8 *)(param_3 + 8) = uVar3;
  }
  if (*(long *)(param_3 + 0x10) != local_70._8_8_) {
    StringName::unref();
    uVar3 = local_70._8_8_;
    local_70._8_8_ = 0;
    *(undefined8 *)(param_3 + 0x10) = uVar3;
  }
  *(int *)(param_3 + 0x18) = local_60;
  if (*(long *)(param_3 + 0x20) != local_58) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 0x20));
    lVar4 = local_58;
    local_58 = 0;
    *(long *)(param_3 + 0x20) = lVar4;
  }
  *(undefined4 *)(param_3 + 0x28) = local_50;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
  iVar5 = *param_2;
LAB_00122559:
  *param_2 = iVar5 + 1;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindT<StringName const&>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<StringName_const&>::_gen_argument_type_info(int param_1)

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
  call_get_argument_type_info_helper<StringName_const&>(in_EDX,&local_14,pPVar1);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, StringName const&>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<int,StringName_const&>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar5;
  long in_FS_OFFSET;
  int local_9c;
  undefined8 local_98;
  long local_90;
  long local_88;
  long local_80;
  undefined *local_78;
  undefined1 local_70 [16];
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  pPVar5 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)pPVar5 = 0;
  *(undefined4 *)(pPVar5 + 0x18) = 0;
  *(undefined8 *)(pPVar5 + 0x20) = 0;
  *(undefined4 *)(pPVar5 + 0x28) = 6;
  local_9c = 0;
  *(undefined1 (*) [16])(pPVar5 + 8) = (undefined1  [16])0x0;
  if (in_EDX != 0) goto LAB_00122837;
  local_88 = 0;
  local_90 = 0;
  local_78 = &_LC5;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_70._8_8_;
  local_70 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_90);
  local_98 = 0;
  local_78 = (undefined *)CONCAT44(local_78._4_4_,2);
  local_60 = 0;
  local_58 = 0;
  local_70 = (undefined1  [16])0x0;
  if (local_90 == 0) {
LAB_00122948:
    local_50 = 6;
    StringName::operator=((StringName *)(local_70 + 8),(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 6;
    if (local_60 != 0x11) goto LAB_00122948;
    StringName::StringName((StringName *)&local_80,(CowData<char32_t> *)&local_58,false);
    if (local_70._8_8_ == local_80) {
      if ((StringName::configured != '\0') && (local_80 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_70._8_8_ = local_80;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  *(undefined4 *)pPVar5 = local_78._0_4_;
  if (*(long *)(pPVar5 + 8) != local_70._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(pPVar5 + 8));
    uVar3 = local_70._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_70._8_8_;
    local_70 = auVar2 << 0x40;
    *(undefined8 *)(pPVar5 + 8) = uVar3;
  }
  if (*(long *)(pPVar5 + 0x10) != local_70._8_8_) {
    StringName::unref();
    uVar3 = local_70._8_8_;
    local_70._8_8_ = 0;
    *(undefined8 *)(pPVar5 + 0x10) = uVar3;
  }
  *(int *)(pPVar5 + 0x18) = local_60;
  if (*(long *)(pPVar5 + 0x20) != local_58) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(pPVar5 + 0x20));
    lVar4 = local_58;
    local_58 = 0;
    *(long *)(pPVar5 + 0x20) = lVar4;
  }
  *(undefined4 *)(pPVar5 + 0x28) = local_50;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
LAB_00122837:
  local_9c = 1;
  call_get_argument_type_info_helper<StringName_const&>(in_EDX,&local_9c,pPVar5);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pPVar5;
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
  undefined8 local_98;
  long local_90;
  long local_88;
  long local_80;
  undefined *local_78;
  undefined1 local_70 [16];
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar5 = *param_2;
  if (iVar5 != param_1) goto LAB_00122a79;
  local_88 = 0;
  local_90 = 0;
  local_78 = &_LC5;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_70._8_8_;
  local_70 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_90);
  local_98 = 0;
  local_78 = (undefined *)CONCAT44(local_78._4_4_,2);
  local_60 = 0;
  local_58 = 0;
  local_70 = (undefined1  [16])0x0;
  if (local_90 == 0) {
LAB_00122b78:
    local_50 = 6;
    StringName::operator=((StringName *)(local_70 + 8),(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 6;
    if (local_60 != 0x11) goto LAB_00122b78;
    StringName::StringName((StringName *)&local_80,(CowData<char32_t> *)&local_58,false);
    if (local_70._8_8_ == local_80) {
      if ((StringName::configured != '\0') && (local_80 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_70._8_8_ = local_80;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  *(undefined4 *)param_3 = local_78._0_4_;
  if (*(long *)(param_3 + 8) != local_70._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 8));
    uVar3 = local_70._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_70._8_8_;
    local_70 = auVar2 << 0x40;
    *(undefined8 *)(param_3 + 8) = uVar3;
  }
  if (*(long *)(param_3 + 0x10) != local_70._8_8_) {
    StringName::unref();
    uVar3 = local_70._8_8_;
    local_70._8_8_ = 0;
    *(undefined8 *)(param_3 + 0x10) = uVar3;
  }
  *(int *)(param_3 + 0x18) = local_60;
  if (*(long *)(param_3 + 0x20) != local_58) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 0x20));
    lVar4 = local_58;
    local_58 = 0;
    *(long *)(param_3 + 0x20) = lVar4;
  }
  *(undefined4 *)(param_3 + 0x28) = local_50;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
  iVar5 = *param_2;
LAB_00122a79:
  *param_2 = iVar5 + 1;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindTRC<StringName, int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<StringName,int>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined8 uVar4;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar5;
  long in_FS_OFFSET;
  undefined8 local_80;
  long local_78;
  ulong local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar5 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<int>(0,(int *)&local_70,(PropertyInfo *)&local_68);
    uVar3 = local_60._0_8_;
    uVar4 = local_60._8_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_60._8_8_;
    local_60 = auVar1 << 0x40;
    *puVar5 = local_68._0_4_;
    *(undefined8 *)(puVar5 + 2) = uVar3;
    *(undefined8 *)(puVar5 + 4) = uVar4;
    puVar5[6] = (undefined4)local_50;
    *(undefined8 *)(puVar5 + 8) = local_48;
    puVar5[10] = local_40;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
    goto LAB_00122d28;
  }
  local_70 = 0;
  local_78 = 0;
  local_68 = &_LC5;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._0_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_78);
  local_80 = 0;
  *puVar5 = 0x15;
  puVar5[6] = 0;
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar5[10] = 6;
LAB_00122e0f:
    StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_70);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_78);
    puVar5[10] = 6;
    if (puVar5[6] != 0x11) goto LAB_00122e0f;
    StringName::StringName((StringName *)&local_68,(CowData<char32_t> *)(puVar5 + 8),false);
    if (*(undefined **)(puVar5 + 4) == local_68) {
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(undefined **)(puVar5 + 4) = local_68;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_00122d28:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
  undefined8 local_80;
  long local_78;
  ulong local_70;
  char *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_68 = (char *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<int>(0,(int *)&local_70,(PropertyInfo *)&local_68);
    uVar2 = local_60._0_8_;
    uVar3 = local_60._8_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_60._8_8_;
    local_60 = auVar1 << 0x40;
    *puVar4 = local_68._0_4_;
    *(undefined8 *)(puVar4 + 2) = uVar2;
    *(undefined8 *)(puVar4 + 4) = uVar3;
    puVar4[6] = (undefined4)local_50;
    *(undefined8 *)(puVar4 + 8) = local_48;
    puVar4[10] = local_40;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
    goto LAB_00122f28;
  }
  local_70 = 0;
  local_78 = 0;
  local_68 = "AudioStream";
  local_60._8_8_ = local_60._0_8_;
  local_60._0_8_ = 0xb;
  String::parse_latin1((StrRange *)&local_78);
  local_80 = 0;
  *puVar4 = 0x18;
  puVar4[6] = 0x11;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar4[10] = 6;
LAB_00123027:
    StringName::StringName((StringName *)&local_68,(CowData<char32_t> *)(puVar4 + 8),false);
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
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_78);
    puVar4[10] = 6;
    if (puVar4[6] == 0x11) goto LAB_00123027;
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_70);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_00122f28:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<AudioStreamInteractive::AutoAdvanceMode, int>::_gen_argument_type_info(int) const
    */

undefined4 *
MethodBindTRC<AudioStreamInteractive::AutoAdvanceMode,int>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  long local_88;
  details local_80 [8];
  undefined8 local_78;
  ulong local_70;
  char *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_68 = (char *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<int>(0,(int *)&local_70,(PropertyInfo *)&local_68);
    uVar2 = local_60._0_8_;
    uVar3 = local_60._8_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_60._8_8_;
    local_60 = auVar1 << 0x40;
    *puVar4 = local_68._0_4_;
    *(undefined8 *)(puVar4 + 2) = uVar2;
    *(undefined8 *)(puVar4 + 4) = uVar3;
    puVar4[6] = (undefined4)local_50;
    *(undefined8 *)(puVar4 + 8) = local_48;
    puVar4[10] = local_40;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
  }
  else {
    local_78 = 0;
    local_68 = "AudioStreamInteractive::AutoAdvanceMode";
    local_60._8_8_ = local_60._0_8_;
    local_60._0_8_ = 0x27;
    String::parse_latin1((StrRange *)&local_78);
    godot::details::enum_qualified_name_to_class_info_name(local_80,(StrRange *)&local_78);
    StringName::StringName((StringName *)&local_88,local_80,false);
    *puVar4 = 2;
    puVar4[6] = 0;
    *(undefined8 *)(puVar4 + 8) = 0;
    puVar4[10] = 0x10006;
    *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
    local_70 = 0;
    local_68 = (char *)0x0;
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    if ((StringName::configured != '\0') && (local_88 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int, int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<int,int>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined8 uVar4;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar5;
  long in_FS_OFFSET;
  undefined8 local_80;
  long local_78;
  ulong local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar5 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<int>(0,(int *)&local_70,(PropertyInfo *)&local_68);
    uVar3 = local_60._0_8_;
    uVar4 = local_60._8_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_60._8_8_;
    local_60 = auVar1 << 0x40;
    *puVar5 = local_68._0_4_;
    *(undefined8 *)(puVar5 + 2) = uVar3;
    *(undefined8 *)(puVar5 + 4) = uVar4;
    puVar5[6] = (undefined4)local_50;
    *(undefined8 *)(puVar5 + 8) = local_48;
    puVar5[10] = local_40;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
    goto LAB_001232d8;
  }
  local_70 = 0;
  local_78 = 0;
  local_68 = &_LC5;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._0_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_78);
  local_80 = 0;
  *puVar5 = 2;
  puVar5[6] = 0;
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar5[10] = 6;
LAB_001233bf:
    StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_70);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_78);
    puVar5[10] = 6;
    if (puVar5[6] != 0x11) goto LAB_001233bf;
    StringName::StringName((StringName *)&local_68,(CowData<char32_t> *)(puVar5 + 8),false);
    if (*(undefined **)(puVar5 + 4) == local_68) {
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(undefined **)(puVar5 + 4) = local_68;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_001232d8:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<float, int, int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<float,int,int>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined8 uVar4;
  uint in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar5;
  long in_FS_OFFSET;
  undefined8 local_80;
  long local_78;
  ulong local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar5 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX < 2) {
    local_60 = (undefined1  [16])0x0;
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    call_get_argument_type_info_helper<int>(in_EDX,(int *)&local_70,(PropertyInfo *)&local_68);
    call_get_argument_type_info_helper<int>(in_EDX,(int *)&local_70,(PropertyInfo *)&local_68);
    uVar3 = local_60._0_8_;
    uVar4 = local_60._8_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_60._8_8_;
    local_60 = auVar1 << 0x40;
    *puVar5 = local_68._0_4_;
    *(undefined8 *)(puVar5 + 2) = uVar3;
    *(undefined8 *)(puVar5 + 4) = uVar4;
    puVar5[6] = (undefined4)local_50;
    *(undefined8 *)(puVar5 + 8) = local_48;
    puVar5[10] = local_40;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
    goto LAB_001235b4;
  }
  local_70 = 0;
  local_78 = 0;
  local_68 = &_LC5;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._0_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_78);
  local_80 = 0;
  *puVar5 = 3;
  puVar5[6] = 0;
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar5[10] = 6;
LAB_001235df:
    StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_70);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_78);
    puVar5[10] = 6;
    if (puVar5[6] != 0x11) goto LAB_001235df;
    StringName::StringName((StringName *)&local_68,(CowData<char32_t> *)(puVar5 + 8),false);
    if (*(undefined **)(puVar5 + 4) == local_68) {
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(undefined **)(puVar5 + 4) = local_68;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_001235b4:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info<int, int, AudioStreamInteractive::TransitionFromTime,
   AudioStreamInteractive::TransitionToTime, AudioStreamInteractive::FadeMode, float, bool, int,
   bool>(int, PropertyInfo&) */

void call_get_argument_type_info<int,int,AudioStreamInteractive::TransitionFromTime,AudioStreamInteractive::TransitionToTime,AudioStreamInteractive::FadeMode,float,bool,int,bool>
               (int param_1,PropertyInfo *param_2)

{
  int iVar1;
  long lVar2;
  long in_FS_OFFSET;
  int local_94;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  undefined *local_78;
  long local_70;
  long local_68;
  undefined4 local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_94 = 0;
  call_get_argument_type_info_helper<int>(param_1,&local_94,param_2);
  call_get_argument_type_info_helper<int>(param_1,&local_94,param_2);
  iVar1 = local_94;
  if (param_1 == local_94) {
    GetTypeInfo<AudioStreamInteractive::TransitionFromTime,void>::get_class_info
              ((GetTypeInfo<AudioStreamInteractive::TransitionFromTime,void> *)&local_78);
  }
  else {
    local_94 = local_94 + 1;
    if (param_1 == local_94) {
      GetTypeInfo<AudioStreamInteractive::TransitionToTime,void>::get_class_info
                ((GetTypeInfo<AudioStreamInteractive::TransitionToTime,void> *)&local_78);
      *(undefined4 *)param_2 = local_78._0_4_;
      if (*(long *)(param_2 + 8) != local_70) {
        CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 8));
        lVar2 = local_70;
        local_70 = 0;
        *(long *)(param_2 + 8) = lVar2;
      }
      if (*(long *)(param_2 + 0x10) != local_68) {
        StringName::unref();
        lVar2 = local_68;
        local_68 = 0;
        *(long *)(param_2 + 0x10) = lVar2;
      }
      *(undefined4 *)(param_2 + 0x18) = local_60;
      if (*(long *)(param_2 + 0x20) != local_58) {
        CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 0x20));
        lVar2 = local_58;
        local_58 = 0;
        *(long *)(param_2 + 0x20) = lVar2;
      }
      *(undefined4 *)(param_2 + 0x28) = local_50;
      PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
    }
    local_94 = iVar1 + 2;
    if (param_1 != local_94) goto joined_r0x001237ce;
    GetTypeInfo<AudioStreamInteractive::FadeMode,void>::get_class_info
              ((GetTypeInfo<AudioStreamInteractive::FadeMode,void> *)&local_78);
  }
  *(undefined4 *)param_2 = local_78._0_4_;
  if (*(long *)(param_2 + 8) != local_70) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 8));
    lVar2 = local_70;
    local_70 = 0;
    *(long *)(param_2 + 8) = lVar2;
  }
  if (*(long *)(param_2 + 0x10) != local_68) {
    StringName::unref();
    lVar2 = local_68;
    local_68 = 0;
    *(long *)(param_2 + 0x10) = lVar2;
  }
  *(undefined4 *)(param_2 + 0x18) = local_60;
  if (*(long *)(param_2 + 0x20) != local_58) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 0x20));
    lVar2 = local_58;
    local_58 = 0;
    *(long *)(param_2 + 0x20) = lVar2;
  }
  *(undefined4 *)(param_2 + 0x28) = local_50;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
joined_r0x001237ce:
  if (param_1 == iVar1 + 3) {
    local_94 = iVar1 + 3;
    local_80 = 0;
    local_88 = 0;
    local_78 = &_LC5;
    local_70 = 0;
    String::parse_latin1((StrRange *)&local_88);
    local_90 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_78,3,(CowData<char32_t> *)&local_90,0,(StrRange *)&local_88,6,
               &local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
    *(undefined4 *)param_2 = local_78._0_4_;
    if (*(long *)(param_2 + 8) != local_70) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 8));
      lVar2 = local_70;
      local_70 = 0;
      *(long *)(param_2 + 8) = lVar2;
    }
    if (*(long *)(param_2 + 0x10) != local_68) {
      StringName::unref();
      lVar2 = local_68;
      local_68 = 0;
      *(long *)(param_2 + 0x10) = lVar2;
    }
    *(undefined4 *)(param_2 + 0x18) = local_60;
    if (*(long *)(param_2 + 0x20) != local_58) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 0x20));
      lVar2 = local_58;
      local_58 = 0;
      *(long *)(param_2 + 0x20) = lVar2;
    }
    *(undefined4 *)(param_2 + 0x28) = local_50;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
  }
  if (param_1 == iVar1 + 4) {
    local_94 = iVar1 + 4;
    local_80 = 0;
    local_88 = 0;
    local_78 = &_LC5;
    local_70 = 0;
    String::parse_latin1((StrRange *)&local_88);
    local_90 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_78,1,(CowData<char32_t> *)&local_90,0,(StrRange *)&local_88,6,
               &local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
    *(undefined4 *)param_2 = local_78._0_4_;
    if (*(long *)(param_2 + 8) != local_70) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 8));
      lVar2 = local_70;
      local_70 = 0;
      *(long *)(param_2 + 8) = lVar2;
    }
    if (*(long *)(param_2 + 0x10) != local_68) {
      StringName::unref();
      lVar2 = local_68;
      local_68 = 0;
      *(long *)(param_2 + 0x10) = lVar2;
    }
    *(undefined4 *)(param_2 + 0x18) = local_60;
    if (*(long *)(param_2 + 0x20) != local_58) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 0x20));
      lVar2 = local_58;
      local_58 = 0;
      *(long *)(param_2 + 0x20) = lVar2;
    }
    *(undefined4 *)(param_2 + 0x28) = local_50;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
  }
  local_94 = iVar1 + 5;
  call_get_argument_type_info_helper<int>(param_1,&local_94,param_2);
  if (param_1 == local_94) {
    local_80 = 0;
    local_88 = 0;
    local_78 = &_LC5;
    local_70 = 0;
    String::parse_latin1((StrRange *)&local_88);
    local_90 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_78,1,(CowData<char32_t> *)&local_90,0,(StrRange *)&local_88,6,
               &local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
    *(undefined4 *)param_2 = local_78._0_4_;
    if (*(long *)(param_2 + 8) != local_70) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 8));
      lVar2 = local_70;
      local_70 = 0;
      *(long *)(param_2 + 8) = lVar2;
    }
    if (*(long *)(param_2 + 0x10) != local_68) {
      StringName::unref();
      lVar2 = local_68;
      local_68 = 0;
      *(long *)(param_2 + 0x10) = lVar2;
    }
    *(undefined4 *)(param_2 + 0x18) = local_60;
    if (*(long *)(param_2 + 0x20) != local_58) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 0x20));
      lVar2 = local_58;
      local_58 = 0;
      *(long *)(param_2 + 0x20) = lVar2;
    }
    *(undefined4 *)(param_2 + 0x28) = local_50;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindT<int, int, AudioStreamInteractive::TransitionFromTime,
   AudioStreamInteractive::TransitionToTime, AudioStreamInteractive::FadeMode, float, bool, int,
   bool>::_gen_argument_type_info(int) const */

PropertyInfo *
MethodBindT<int,int,AudioStreamInteractive::TransitionFromTime,AudioStreamInteractive::TransitionToTime,AudioStreamInteractive::FadeMode,float,bool,int,bool>
::_gen_argument_type_info(int param_1)

{
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar1;
  
  pPVar1 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  *(undefined4 *)pPVar1 = 0;
  *(undefined4 *)(pPVar1 + 0x18) = 0;
  *(undefined8 *)(pPVar1 + 0x20) = 0;
  *(undefined4 *)(pPVar1 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar1 + 8) = (undefined1  [16])0x0;
  call_get_argument_type_info<int,int,AudioStreamInteractive::TransitionFromTime,AudioStreamInteractive::TransitionToTime,AudioStreamInteractive::FadeMode,float,bool,int,bool>
            (in_EDX,pPVar1);
  return pPVar1;
}



/* MethodBindT<int, Ref<AudioStream> const&>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<int,Ref<AudioStream>const&>::_gen_argument_type_info(int param_1)

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
  if (in_EDX != local_8c) goto LAB_00123cf6;
  local_78 = 0;
  local_80 = 0;
  local_68 = "AudioStream";
  local_60._0_8_ = 0xb;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (char *)CONCAT44(local_68._4_4_,0x18);
  local_50 = 0x11;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00123e95:
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
    if (local_50 == 0x11) goto LAB_00123e95;
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
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
LAB_00123cf6:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pPVar4;
}



/* MethodBindTRC<AudioStreamInteractive::TransitionToTime, int, int>::_gen_argument_type_info(int)
   const */

undefined4 *
MethodBindTRC<AudioStreamInteractive::TransitionToTime,int,int>::_gen_argument_type_info
          (int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  uint in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  long local_88;
  details local_80 [8];
  undefined8 local_78;
  ulong local_70;
  char *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX < 2) {
    local_60 = (undefined1  [16])0x0;
    local_68 = (char *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    call_get_argument_type_info_helper<int>(in_EDX,(int *)&local_70,(PropertyInfo *)&local_68);
    call_get_argument_type_info_helper<int>(in_EDX,(int *)&local_70,(PropertyInfo *)&local_68);
    uVar2 = local_60._0_8_;
    uVar3 = local_60._8_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_60._8_8_;
    local_60 = auVar1 << 0x40;
    *puVar4 = local_68._0_4_;
    *(undefined8 *)(puVar4 + 2) = uVar2;
    *(undefined8 *)(puVar4 + 4) = uVar3;
    puVar4[6] = (undefined4)local_50;
    *(undefined8 *)(puVar4 + 8) = local_48;
    puVar4[10] = local_40;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
  }
  else {
    local_78 = 0;
    local_68 = "AudioStreamInteractive::TransitionToTime";
    local_60._8_8_ = local_60._0_8_;
    local_60._0_8_ = 0x28;
    String::parse_latin1((StrRange *)&local_78);
    godot::details::enum_qualified_name_to_class_info_name(local_80,(StrRange *)&local_78);
    StringName::StringName((StringName *)&local_88,local_80,false);
    *puVar4 = 2;
    puVar4[6] = 0;
    *(undefined8 *)(puVar4 + 8) = 0;
    puVar4[10] = 0x10006;
    *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
    local_70 = 0;
    local_68 = (char *)0x0;
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    if ((StringName::configured != '\0') && (local_88 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int, int, int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<int,int,int>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined8 uVar4;
  uint in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar5;
  long in_FS_OFFSET;
  undefined8 local_80;
  long local_78;
  ulong local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar5 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX < 2) {
    local_60 = (undefined1  [16])0x0;
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    call_get_argument_type_info_helper<int>(in_EDX,(int *)&local_70,(PropertyInfo *)&local_68);
    call_get_argument_type_info_helper<int>(in_EDX,(int *)&local_70,(PropertyInfo *)&local_68);
    uVar3 = local_60._0_8_;
    uVar4 = local_60._8_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_60._8_8_;
    local_60 = auVar1 << 0x40;
    *puVar5 = local_68._0_4_;
    *(undefined8 *)(puVar5 + 2) = uVar3;
    *(undefined8 *)(puVar5 + 4) = uVar4;
    puVar5[6] = (undefined4)local_50;
    *(undefined8 *)(puVar5 + 8) = local_48;
    puVar5[10] = local_40;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
    goto LAB_00124244;
  }
  local_70 = 0;
  local_78 = 0;
  local_68 = &_LC5;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._0_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_78);
  local_80 = 0;
  *puVar5 = 2;
  puVar5[6] = 0;
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar5[10] = 6;
LAB_0012426f:
    StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_70);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_78);
    puVar5[10] = 6;
    if (puVar5[6] != 0x11) goto LAB_0012426f;
    StringName::StringName((StringName *)&local_68,(CowData<char32_t> *)(puVar5 + 8),false);
    if (*(undefined **)(puVar5 + 4) == local_68) {
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(undefined **)(puVar5 + 4) = local_68;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_00124244:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<AudioStreamInteractive::FadeMode, int, int>::_gen_argument_type_info(int) const */

undefined4 *
MethodBindTRC<AudioStreamInteractive::FadeMode,int,int>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  uint in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  long local_88;
  details local_80 [8];
  undefined8 local_78;
  ulong local_70;
  char *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX < 2) {
    local_60 = (undefined1  [16])0x0;
    local_68 = (char *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    call_get_argument_type_info_helper<int>(in_EDX,(int *)&local_70,(PropertyInfo *)&local_68);
    call_get_argument_type_info_helper<int>(in_EDX,(int *)&local_70,(PropertyInfo *)&local_68);
    uVar2 = local_60._0_8_;
    uVar3 = local_60._8_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_60._8_8_;
    local_60 = auVar1 << 0x40;
    *puVar4 = local_68._0_4_;
    *(undefined8 *)(puVar4 + 2) = uVar2;
    *(undefined8 *)(puVar4 + 4) = uVar3;
    puVar4[6] = (undefined4)local_50;
    *(undefined8 *)(puVar4 + 8) = local_48;
    puVar4[10] = local_40;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
  }
  else {
    local_78 = 0;
    local_68 = "AudioStreamInteractive::FadeMode";
    local_60._8_8_ = local_60._0_8_;
    local_60._0_8_ = 0x20;
    String::parse_latin1((StrRange *)&local_78);
    godot::details::enum_qualified_name_to_class_info_name(local_80,(StrRange *)&local_78);
    StringName::StringName((StringName *)&local_88,local_80,false);
    *puVar4 = 2;
    puVar4[6] = 0;
    *(undefined8 *)(puVar4 + 8) = 0;
    puVar4[10] = 0x10006;
    *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
    local_70 = 0;
    local_68 = (char *)0x0;
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    if ((StringName::configured != '\0') && (local_88 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<AudioStreamInteractive::TransitionFromTime, int, int>::_gen_argument_type_info(int)
   const */

undefined4 *
MethodBindTRC<AudioStreamInteractive::TransitionFromTime,int,int>::_gen_argument_type_info
          (int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  uint in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  long local_88;
  details local_80 [8];
  undefined8 local_78;
  ulong local_70;
  char *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX < 2) {
    local_60 = (undefined1  [16])0x0;
    local_68 = (char *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    call_get_argument_type_info_helper<int>(in_EDX,(int *)&local_70,(PropertyInfo *)&local_68);
    call_get_argument_type_info_helper<int>(in_EDX,(int *)&local_70,(PropertyInfo *)&local_68);
    uVar2 = local_60._0_8_;
    uVar3 = local_60._8_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_60._8_8_;
    local_60 = auVar1 << 0x40;
    *puVar4 = local_68._0_4_;
    *(undefined8 *)(puVar4 + 2) = uVar2;
    *(undefined8 *)(puVar4 + 4) = uVar3;
    puVar4[6] = (undefined4)local_50;
    *(undefined8 *)(puVar4 + 8) = local_48;
    puVar4[10] = local_40;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
  }
  else {
    local_78 = 0;
    local_68 = "AudioStreamInteractive::TransitionFromTime";
    local_60._8_8_ = local_60._0_8_;
    local_60._0_8_ = 0x2a;
    String::parse_latin1((StrRange *)&local_78);
    godot::details::enum_qualified_name_to_class_info_name(local_80,(StrRange *)&local_78);
    StringName::StringName((StringName *)&local_88,local_80,false);
    *puVar4 = 2;
    puVar4[6] = 0;
    *(undefined8 *)(puVar4 + 8) = 0;
    puVar4[10] = 0x10006;
    *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
    local_70 = 0;
    local_68 = (char *)0x0;
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    if ((StringName::configured != '\0') && (local_88 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool, int, int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<bool,int,int>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined8 uVar4;
  uint in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar5;
  long in_FS_OFFSET;
  undefined8 local_80;
  long local_78;
  ulong local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar5 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX < 2) {
    local_60 = (undefined1  [16])0x0;
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    call_get_argument_type_info_helper<int>(in_EDX,(int *)&local_70,(PropertyInfo *)&local_68);
    call_get_argument_type_info_helper<int>(in_EDX,(int *)&local_70,(PropertyInfo *)&local_68);
    uVar3 = local_60._0_8_;
    uVar4 = local_60._8_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_60._8_8_;
    local_60 = auVar1 << 0x40;
    *puVar5 = local_68._0_4_;
    *(undefined8 *)(puVar5 + 2) = uVar3;
    *(undefined8 *)(puVar5 + 4) = uVar4;
    puVar5[6] = (undefined4)local_50;
    *(undefined8 *)(puVar5 + 8) = local_48;
    puVar5[10] = local_40;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
    goto LAB_001247d4;
  }
  local_70 = 0;
  local_78 = 0;
  local_68 = &_LC5;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._0_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_78);
  local_80 = 0;
  *puVar5 = 1;
  puVar5[6] = 0;
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar5[10] = 6;
LAB_001247ff:
    StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_70);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_78);
    puVar5[10] = 6;
    if (puVar5[6] != 0x11) goto LAB_001247ff;
    StringName::StringName((StringName *)&local_68,(CowData<char32_t> *)(puVar5 + 8),false);
    if (*(undefined **)(puVar5 + 4) == local_68) {
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(undefined **)(puVar5 + 4) = local_68;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_001247d4:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info_helper<unsigned int>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<unsigned_int>
               (int param_1,int *param_2,PropertyInfo *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  long in_FS_OFFSET;
  undefined8 local_98;
  long local_90;
  long local_88;
  long local_80;
  undefined *local_78;
  undefined1 local_70 [16];
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar5 = *param_2;
  if (iVar5 != param_1) goto LAB_00124889;
  local_88 = 0;
  local_90 = 0;
  local_78 = &_LC5;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_70._8_8_;
  local_70 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_90);
  local_98 = 0;
  local_78 = (undefined *)CONCAT44(local_78._4_4_,2);
  local_60 = 0;
  local_58 = 0;
  local_70 = (undefined1  [16])0x0;
  if (local_90 == 0) {
LAB_00124988:
    local_50 = 6;
    StringName::operator=((StringName *)(local_70 + 8),(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 6;
    if (local_60 != 0x11) goto LAB_00124988;
    StringName::StringName((StringName *)&local_80,(CowData<char32_t> *)&local_58,false);
    if (local_70._8_8_ == local_80) {
      if ((StringName::configured != '\0') && (local_80 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_70._8_8_ = local_80;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  *(undefined4 *)param_3 = local_78._0_4_;
  if (*(long *)(param_3 + 8) != local_70._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 8));
    uVar3 = local_70._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_70._8_8_;
    local_70 = auVar2 << 0x40;
    *(undefined8 *)(param_3 + 8) = uVar3;
  }
  if (*(long *)(param_3 + 0x10) != local_70._8_8_) {
    StringName::unref();
    uVar3 = local_70._8_8_;
    local_70._8_8_ = 0;
    *(undefined8 *)(param_3 + 0x10) = uVar3;
  }
  *(int *)(param_3 + 0x18) = local_60;
  if (*(long *)(param_3 + 0x20) != local_58) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 0x20));
    lVar4 = local_58;
    local_58 = 0;
    *(long *)(param_3 + 0x20) = lVar4;
  }
  *(undefined4 *)(param_3 + 0x28) = local_50;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
  iVar5 = *param_2;
LAB_00124889:
  *param_2 = iVar5 + 1;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindT<unsigned int, unsigned int>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<unsigned_int,unsigned_int>::_gen_argument_type_info(int param_1)

{
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar1;
  long in_FS_OFFSET;
  int local_24;
  long local_20;
  
  pPVar1 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)pPVar1 = 0;
  *(undefined4 *)(pPVar1 + 0x18) = 0;
  *(undefined8 *)(pPVar1 + 0x20) = 0;
  *(undefined4 *)(pPVar1 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar1 + 8) = (undefined1  [16])0x0;
  local_24 = 0;
  call_get_argument_type_info_helper<unsigned_int>(in_EDX,&local_24,pPVar1);
  call_get_argument_type_info_helper<unsigned_int>(in_EDX,&local_24,pPVar1);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AudioStreamInteractive::AudioStreamInteractive() */

void AudioStreamInteractive::_GLOBAL__sub_I_AudioStreamInteractive(void)

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
/* AudioStreamInteractive::~AudioStreamInteractive() */

void __thiscall AudioStreamInteractive::~AudioStreamInteractive(AudioStreamInteractive *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<Variant, DefaultAllocator>::~List() */

void __thiscall List<Variant,DefaultAllocator>::~List(List<Variant,DefaultAllocator> *this)

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
/* PropertyListHelper::~PropertyListHelper() */

void __thiscall PropertyListHelper::~PropertyListHelper(PropertyListHelper *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<StringName const&>::~MethodBindT() */

void __thiscall MethodBindT<StringName_const&>::~MethodBindT(MethodBindT<StringName_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Dictionary>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Dictionary>::~MethodBindTRC(MethodBindTRC<Dictionary> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Dictionary const&>::~MethodBindT() */

void __thiscall MethodBindT<Dictionary_const&>::~MethodBindT(MethodBindT<Dictionary_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<bool, int, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool,int,int>::~MethodBindTRC(MethodBindTRC<bool,int,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<int, int, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int,int,int>::~MethodBindTRC(MethodBindTRC<int,int,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<float, int, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<float,int,int>::~MethodBindTRC(MethodBindTRC<float,int,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<AudioStreamInteractive::FadeMode, int, int>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<AudioStreamInteractive::FadeMode,int,int>::~MethodBindTRC
          (MethodBindTRC<AudioStreamInteractive::FadeMode,int,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<AudioStreamInteractive::TransitionToTime, int, int>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<AudioStreamInteractive::TransitionToTime,int,int>::~MethodBindTRC
          (MethodBindTRC<AudioStreamInteractive::TransitionToTime,int,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<AudioStreamInteractive::TransitionFromTime, int, int>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<AudioStreamInteractive::TransitionFromTime,int,int>::~MethodBindTRC
          (MethodBindTRC<AudioStreamInteractive::TransitionFromTime,int,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Vector<int>>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Vector<int>>::~MethodBindTRC(MethodBindTRC<Vector<int>> *this)

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
/* MethodBindT<int, int, AudioStreamInteractive::TransitionFromTime,
   AudioStreamInteractive::TransitionToTime, AudioStreamInteractive::FadeMode, float, bool, int,
   bool>::~MethodBindT() */

void __thiscall
MethodBindT<int,int,AudioStreamInteractive::TransitionFromTime,AudioStreamInteractive::TransitionToTime,AudioStreamInteractive::FadeMode,float,bool,int,bool>
::~MethodBindT(MethodBindT<int,int,AudioStreamInteractive::TransitionFromTime,AudioStreamInteractive::TransitionToTime,AudioStreamInteractive::FadeMode,float,bool,int,bool>
               *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<int, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int,int>::~MethodBindTRC(MethodBindTRC<int,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<AudioStreamInteractive::AutoAdvanceMode, int>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<AudioStreamInteractive::AutoAdvanceMode,int>::~MethodBindTRC
          (MethodBindTRC<AudioStreamInteractive::AutoAdvanceMode,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<int, AudioStreamInteractive::AutoAdvanceMode>::~MethodBindT() */

void __thiscall
MethodBindT<int,AudioStreamInteractive::AutoAdvanceMode>::~MethodBindT
          (MethodBindT<int,AudioStreamInteractive::AutoAdvanceMode> *this)

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
/* MethodBindT<int, Ref<AudioStream> const&>::~MethodBindT() */

void __thiscall
MethodBindT<int,Ref<AudioStream>const&>::~MethodBindT(MethodBindT<int,Ref<AudioStream>const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<StringName, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<StringName,int>::~MethodBindTRC(MethodBindTRC<StringName,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<int, StringName const&>::~MethodBindT() */

void __thiscall
MethodBindT<int,StringName_const&>::~MethodBindT(MethodBindT<int,StringName_const&> *this)

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
/* MethodBindT<unsigned int, unsigned int>::~MethodBindT() */

void __thiscall
MethodBindT<unsigned_int,unsigned_int>::~MethodBindT(MethodBindT<unsigned_int,unsigned_int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Vector<String>, String const&, Variant const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Vector<String>,String_const&,Variant_const&>::~MethodBindTRC
          (MethodBindTRC<Vector<String>,String_const&,Variant_const&> *this)

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




/* VideoStreamPlayback::set_mix_callback(int (*)(void*, float const*, int), void*) */

void __thiscall
VideoStreamPlayback::set_mix_callback
          (VideoStreamPlayback *this,_func_int_void_ptr_float_ptr_int *param_1,void *param_2)

{
  *(_func_int_void_ptr_float_ptr_int **)(this + 0x240) = param_1;
  *(void **)(this + 0x248) = param_2;
  return;
}



/* VideoStream::set_audio_track(int) */

void __thiscall VideoStream::set_audio_track(VideoStream *this,int param_1)

{
  *(int *)(this + 0x260) = param_1;
  return;
}



/* VideoStreamPlayback::mix_audio(int, Vector<float>, int) */

undefined8 __thiscall
VideoStreamPlayback::mix_audio(VideoStreamPlayback *this,int param_1,long param_3,int param_4)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  if (param_1 < 1) {
    return 0;
  }
  if (*(code **)(this + 0x240) == (code *)0x0) {
    return 0xffffffff;
  }
  lVar6 = (long)param_4;
  lVar1 = *(long *)(param_3 + 8);
  if (param_4 < 0) {
    if (lVar1 != 0) {
      lVar5 = *(long *)(lVar1 + -8);
      goto LAB_001000bd;
    }
  }
  else if (lVar1 != 0) {
    lVar5 = *(long *)(lVar1 + -8);
    if (lVar6 < lVar5) {
      iVar3 = 1;
      if (0 < *(int *)(this + 0x250)) {
        iVar3 = *(int *)(this + 0x250);
      }
      lVar4 = (long)(iVar3 * param_1 + -1);
      if (lVar5 - lVar6 <= lVar4) {
        _err_print_index_error
                  ("mix_audio","scene/resources/video_stream.cpp",0x98,lVar4,lVar5 - lVar6,
                   "(_channel_count < 1 ? 1 : _channel_count) * num_frames - 1",
                   "buffer.size() - offset","",false,false);
        return 0xffffffff;
      }
                    /* WARNING: Could not recover jumptable at 0x0010009e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(this + 0x240))(*(undefined8 *)(this + 0x248),lVar1 + lVar6 * 4,param_1);
      return uVar2;
    }
    goto LAB_001000bd;
  }
  lVar5 = 0;
LAB_001000bd:
  _err_print_index_error
            ("mix_audio","scene/resources/video_stream.cpp",0x97,lVar6,lVar5,"offset",
             "buffer.size()","",false,false);
  return 0xffffffff;
}



/* VideoStreamPlayback::~VideoStreamPlayback() */

void __thiscall VideoStreamPlayback::~VideoStreamPlayback(VideoStreamPlayback *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(undefined ***)this = &PTR__initialize_classv_0010d028;
  if (bVar1) {
    if (*(long *)(this + 0x378) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00100329;
    }
    if (*(long *)(this + 0x360) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00100329;
    }
    if (*(long *)(this + 0x348) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00100329;
    }
    if (*(long *)(this + 0x330) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00100329;
    }
    if (*(long *)(this + 0x318) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00100329;
    }
    if (*(long *)(this + 0x300) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00100329;
    }
    if (*(long *)(this + 0x2e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00100329;
    }
    if (*(long *)(this + 0x2d0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00100329;
    }
    if (*(long *)(this + 0x2b8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00100329;
    }
    if (*(long *)(this + 0x2a0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00100329;
    }
    if (*(long *)(this + 0x288) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00100329;
    }
    if (*(long *)(this + 0x270) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00100329;
    }
    if (*(long *)(this + 600) != 0) {
      StringName::unref();
    }
  }
LAB_00100329:
  Resource::~Resource((Resource *)this);
  return;
}



/* VideoStreamPlayback::~VideoStreamPlayback() */

void __thiscall VideoStreamPlayback::~VideoStreamPlayback(VideoStreamPlayback *this)

{
  ~VideoStreamPlayback(this);
  operator_delete(this,0x390);
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



/* VideoStream::~VideoStream() */

void __thiscall VideoStream::~VideoStream(VideoStream *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_0010d270;
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
  if ((StringName::configured != '\0') && (*(long *)(this + 0x240) != 0)) {
    StringName::unref();
  }
  Resource::~Resource((Resource *)this);
  return;
}



/* VideoStream::~VideoStream() */

void __thiscall VideoStream::~VideoStream(VideoStream *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_0010d270;
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
  if ((StringName::configured != '\0') && (*(long *)(this + 0x240) != 0)) {
    StringName::unref();
  }
  Resource::~Resource((Resource *)this);
  operator_delete(this,0x268);
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



/* VideoStream::get_file() */

void VideoStream::get_file(void)

{
  long in_RSI;
  CowData<char32_t> *in_RDI;
  
  *(undefined8 *)in_RDI = 0;
  if (*(long *)(in_RSI + 600) != 0) {
    CowData<char32_t>::_ref(in_RDI,(CowData *)(in_RSI + 600));
  }
  return;
}



/* VideoStream::set_file(String const&) */

void __thiscall VideoStream::set_file(VideoStream *this,String *param_1)

{
  if (*(long *)(this + 600) != *(long *)param_1) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 600),(CowData *)param_1);
  }
  Resource::emit_changed();
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



/* VideoStreamPlayback::VideoStreamPlayback() */

void __thiscall VideoStreamPlayback::VideoStreamPlayback(VideoStreamPlayback *this)

{
  Resource::Resource((Resource *)this);
  *(undefined8 *)(this + 0x240) = 0;
  *(undefined ***)this = &PTR__initialize_classv_0010d028;
  *(undefined8 *)(this + 0x248) = 0;
  *(undefined4 *)(this + 0x250) = 0;
  StringName::StringName((StringName *)(this + 600),"_stop",false);
  this[0x260] = (VideoStreamPlayback)0x0;
  *(undefined8 *)(this + 0x268) = 0;
  StringName::StringName((StringName *)(this + 0x270),"_play",false);
  this[0x278] = (VideoStreamPlayback)0x0;
  *(undefined8 *)(this + 0x280) = 0;
  StringName::StringName((StringName *)(this + 0x288),"_is_playing",false);
  this[0x290] = (VideoStreamPlayback)0x0;
  *(undefined8 *)(this + 0x298) = 0;
  StringName::StringName((StringName *)(this + 0x2a0),"_set_paused",false);
  this[0x2a8] = (VideoStreamPlayback)0x0;
  *(undefined8 *)(this + 0x2b0) = 0;
  StringName::StringName((StringName *)(this + 0x2b8),"_is_paused",false);
  this[0x2c0] = (VideoStreamPlayback)0x0;
  *(undefined8 *)(this + 0x2c8) = 0;
  StringName::StringName((StringName *)(this + 0x2d0),"_get_length",false);
  this[0x2d8] = (VideoStreamPlayback)0x0;
  *(undefined8 *)(this + 0x2e0) = 0;
  StringName::StringName((StringName *)(this + 0x2e8),"_get_playback_position",false);
  this[0x2f0] = (VideoStreamPlayback)0x0;
  *(undefined8 *)(this + 0x2f8) = 0;
  StringName::StringName((StringName *)(this + 0x300),"_seek",false);
  this[0x308] = (VideoStreamPlayback)0x0;
  *(undefined8 *)(this + 0x310) = 0;
  StringName::StringName((StringName *)(this + 0x318),"_set_audio_track",false);
  this[800] = (VideoStreamPlayback)0x0;
  *(undefined8 *)(this + 0x328) = 0;
  StringName::StringName((StringName *)(this + 0x330),"_get_texture",false);
  this[0x338] = (VideoStreamPlayback)0x0;
  *(undefined8 *)(this + 0x340) = 0;
  StringName::StringName((StringName *)(this + 0x348),"_update",false);
  this[0x350] = (VideoStreamPlayback)0x0;
  *(undefined8 *)(this + 0x358) = 0;
  StringName::StringName((StringName *)(this + 0x360),"_get_channels",false);
  this[0x368] = (VideoStreamPlayback)0x0;
  *(undefined8 *)(this + 0x370) = 0;
  StringName::StringName((StringName *)(this + 0x378),"_get_mix_rate",false);
  this[0x380] = (VideoStreamPlayback)0x0;
  *(undefined8 *)(this + 0x388) = 0;
  return;
}



/* VideoStream::VideoStream() */

void __thiscall VideoStream::VideoStream(VideoStream *this)

{
  Resource::Resource((Resource *)this);
  *(undefined ***)this = &PTR__initialize_classv_0010d270;
  StringName::StringName((StringName *)(this + 0x240),"_instantiate_playback",false);
  this[0x248] = (VideoStream)0x0;
  *(undefined4 *)(this + 0x260) = 0;
  *(undefined1 (*) [16])(this + 0x250) = (undefined1  [16])0x0;
  return;
}



/* VideoStream::_bind_methods() */

void VideoStream::_bind_methods(void)

{
  long lVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uVar6;
  MethodBind *pMVar7;
  long *plVar8;
  long lVar9;
  long in_FS_OFFSET;
  CowData<char32_t> *local_150;
  undefined8 local_140;
  long local_138;
  long local_130;
  long local_128;
  long local_120;
  long local_118;
  undefined8 local_110;
  char *local_108;
  undefined1 local_100 [16];
  int local_f0;
  long local_e8;
  undefined4 local_e0;
  undefined *local_d8;
  undefined8 local_d0;
  undefined1 local_c8 [16];
  int local_b8 [2];
  long local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_88;
  ulong local_80;
  undefined8 local_70;
  undefined *local_68;
  undefined8 local_60;
  undefined **local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = &local_68;
  local_60 = 0;
  local_68 = &_LC37;
  D_METHODP((char *)&local_d8,(char ***)"set_file",(uint)&local_58);
  local_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar7 = create_method_bind<VideoStream,String_const&>(set_file);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  uVar6 = local_c8._0_8_;
  if ((long *)local_c8._0_8_ != (long *)0x0) {
    LOCK();
    plVar8 = (long *)(local_c8._0_8_ + -0x10);
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (*plVar8 == 0) {
      if ((long *)local_c8._0_8_ == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = *(long *)(local_c8._0_8_ + -8);
      lVar9 = 0;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = local_c8._8_8_;
      local_c8 = auVar3 << 0x40;
      plVar8 = (long *)uVar6;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar8 != 0)) {
            StringName::unref();
          }
          lVar9 = lVar9 + 1;
          plVar8 = plVar8 + 1;
        } while (lVar1 != lVar9);
      }
      Memory::free_static((long *)(uVar6 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_d8 != (undefined *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_d8,(char ***)"get_file",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar7 = create_method_bind<VideoStream,String>(get_file);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  uVar6 = local_c8._0_8_;
  if ((long *)local_c8._0_8_ != (long *)0x0) {
    LOCK();
    plVar8 = (long *)(local_c8._0_8_ + -0x10);
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (*plVar8 == 0) {
      if ((long *)local_c8._0_8_ == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = *(long *)(local_c8._0_8_ + -8);
      lVar9 = 0;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_c8._8_8_;
      local_c8 = auVar4 << 0x40;
      plVar8 = (long *)uVar6;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar8 != 0)) {
            StringName::unref();
          }
          lVar9 = lVar9 + 1;
          plVar8 = plVar8 + 1;
        } while (lVar1 != lVar9);
      }
      Memory::free_static((long *)(uVar6 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_d8 != (undefined *)0x0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_118,true);
  _scs_create((char *)&local_120,true);
  local_d8 = &_LC3;
  local_128 = 0;
  local_130 = 0;
  local_d0 = 0;
  String::parse_latin1((StrRange *)&local_130);
  local_d8 = &_LC37;
  local_138 = 0;
  local_d0 = 4;
  String::parse_latin1((StrRange *)&local_138);
  local_d8 = (undefined *)CONCAT44(local_d8._4_4_,4);
  local_d0 = 0;
  if (local_138 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_d0,(CowData *)&local_138);
  }
  local_c8._0_12_ = ZEXT812(0);
  local_b8[0] = 0;
  local_b8[1] = 0;
  if (local_130 == 0) {
    local_b0 = CONCAT44(local_b0._4_4_,6);
LAB_00100ec3:
    StringName::operator=((StringName *)local_c8,(StringName *)&local_128);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)local_b8,(CowData *)&local_130);
    local_b0 = CONCAT44(local_b0._4_4_,6);
    if (local_c8._8_4_ != 0x11) goto LAB_00100ec3;
    StringName::StringName((StringName *)&local_108,(String *)local_b8,false);
    if ((char *)local_c8._0_8_ == local_108) {
      if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_c8._0_8_ = local_108;
    }
  }
  local_150 = (CowData<char32_t> *)&local_128;
  local_140 = 0;
  local_108 = "VideoStream";
  local_100._0_8_ = 0xb;
  String::parse_latin1((StrRange *)&local_140);
  StringName::StringName((StringName *)&local_108,(String *)&local_140,false);
  ClassDB::add_property
            ((StringName *)&local_108,(PropertyInfo *)&local_d8,(StringName *)&local_120,
             (StringName *)&local_118,-1);
  if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_130);
  if (StringName::configured != '\0') {
    if (local_128 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00100fc0;
    }
    if (local_120 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00100fc0;
    }
    if (local_118 != 0) {
      StringName::unref();
    }
  }
LAB_00100fc0:
  local_c8._0_8_ = 0;
  local_c8._8_8_ = 0;
  local_108 = "_instantiate_playback";
  local_110 = 0;
  local_d8 = (undefined *)0x0;
  local_d0 = 0;
  local_b8[0] = 0;
  local_b8[1] = 0;
  local_b0 = 0;
  local_a8 = 6;
  local_a0 = 1;
  local_98 = 0;
  local_88 = 0;
  local_80 = 0;
  local_70 = 0;
  local_100._0_8_ = 0x15;
  String::parse_latin1((StrRange *)&local_d8);
  local_a0 = CONCAT44(local_a0._4_4_,8);
  local_138 = 0;
  local_130 = 0;
  local_108 = "VideoStreamPlayback";
  local_100._0_8_ = 0x13;
  String::parse_latin1((StrRange *)&local_130);
  local_128 = 0;
  local_108 = (char *)CONCAT44(local_108._4_4_,0x18);
  local_f0 = 0x11;
  local_e8 = 0;
  local_100 = (undefined1  [16])0x0;
  if (local_130 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,(CowData *)&local_130);
    local_e0 = 6;
    if (local_f0 != 0x11) {
      StringName::operator=((StringName *)(local_100 + 8),(StringName *)&local_138);
      goto LAB_00101119;
    }
  }
  local_e0 = 6;
  StringName::StringName((StringName *)&local_120,(String *)&local_e8,false);
  if (local_100._8_8_ == local_120) {
    if ((StringName::configured != '\0') && (local_120 != 0)) {
      StringName::unref();
    }
  }
  else {
    StringName::unref();
    local_100._8_8_ = local_120;
  }
LAB_00101119:
  CowData<char32_t>::_unref(local_150);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_130);
  if ((StringName::configured != '\0') && (local_138 != 0)) {
    StringName::unref();
  }
  local_d0 = CONCAT44(local_d0._4_4_,local_108._0_4_);
  if (local_c8._0_8_ != local_100._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)local_c8);
    local_c8._0_8_ = local_100._0_8_;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = local_100._8_8_;
    local_100 = auVar5 << 0x40;
  }
  if (local_c8._8_8_ != local_100._8_8_) {
    StringName::unref();
    local_c8._8_8_ = local_100._8_8_;
    local_100._8_8_ = 0;
  }
  local_b8[0] = local_f0;
  if (local_b0 != local_e8) {
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    local_b0 = local_e8;
    local_e8 = 0;
  }
  local_a8 = CONCAT44(local_a8._4_4_,local_e0);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_108);
  local_108 = "VideoStream";
  local_80 = local_80 & 0xffffffff00000000;
  local_120 = 0;
  local_100._0_8_ = 0xb;
  String::parse_latin1((StrRange *)&local_120);
  StringName::StringName((StringName *)&local_108,(String *)&local_120,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_108,(MethodInfo *)&local_d8,true,(StringName *)&local_118,false);
  if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
  MethodInfo::~MethodInfo((MethodInfo *)&local_d8);
  CowData<String>::_unref((CowData<String> *)&local_110);
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



/* VideoStreamPlayback::stop() */

void __thiscall VideoStreamPlayback::stop(VideoStreamPlayback *this)

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
LAB_0010163b:
    if ((*(long *)(this + 8) != 0) && (this[0x260] == (VideoStreamPlayback)0x0)) {
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
      *(undefined8 *)(this + 0x268) = 0;
      UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 0xd8);
      if (((UNRECOVERED_JUMPTABLE == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
         (UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 0xd0), UNRECOVERED_JUMPTABLE == (code *)0x0)) {
        local_e8 = 0;
        String::parse_latin1((String *)&local_e8,"VideoStreamPlayback");
        StringName::StringName((StringName *)&local_e0,(String *)&local_e8,false);
        ClassDB::get_virtual_method_compatibility_hashes(local_d8,(StringName *)&local_e0);
        if (local_d0 == 0) {
          CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&local_d0);
          if ((StringName::configured != '\0') && (lVar3 = 0, local_e0 != 0)) goto LAB_00101887;
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
LAB_0010189c:
          lVar3 = *(long *)(this + 8);
          UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 200);
          if (((UNRECOVERED_JUMPTABLE == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
             (UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 0xc0), UNRECOVERED_JUMPTABLE == (code *)0x0
             )) goto LAB_001017d9;
          uVar2 = (*UNRECOVERED_JUMPTABLE)(*(undefined8 *)(lVar3 + 0xa0),this + 600);
          *(undefined8 *)(this + 0x268) = uVar2;
        }
        else {
          lVar3 = *(long *)(local_d0 + -8);
          CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&local_d0);
          if ((StringName::configured != '\0') && (local_e0 != 0)) {
LAB_00101887:
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
          if (lVar3 == 0) goto LAB_0010189c;
        }
        lVar3 = *(long *)(this + 8);
      }
      else {
        uVar2 = (*UNRECOVERED_JUMPTABLE)(*(undefined8 *)(lVar3 + 0xa0),this + 600,uVar1);
        *(undefined8 *)(this + 0x268) = uVar2;
        lVar3 = *(long *)(this + 8);
      }
LAB_001017d9:
      if (*(char *)(lVar3 + 0x29) != '\0') {
        plVar4 = (long *)operator_new(0x18,"");
        *plVar4 = (long)(this + 0x268);
        plVar4[1] = (long)(this + 0x260);
        plVar4[2] = *(long *)(this + 0x168);
        *(long **)(this + 0x168) = plVar4;
      }
      this[0x260] = (VideoStreamPlayback)0x1;
      MethodInfo::~MethodInfo((MethodInfo *)local_c8);
    }
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x268);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
      if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001016fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)(*(undefined8 *)(this + 0x10),0,0);
          return;
        }
      }
      else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010169d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)(this + 8) + 0xe0))
                  (*(undefined8 *)(this + 0x10),this + 600,UNRECOVERED_JUMPTABLE,0,0);
        return;
      }
      goto LAB_0010190f;
    }
  }
  else {
    local_c8[0] = 0;
    local_c8[1] = 0;
    local_c8[2] = 0;
    (**(code **)(*plVar4 + 0x60))(local_58,plVar4,this + 600,0,0,local_c8);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (local_c8[0] != 0) goto LAB_0010163b;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010190f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VideoStreamPlayback::play() */

void __thiscall VideoStreamPlayback::play(VideoStreamPlayback *this)

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
LAB_001019eb:
    if ((*(long *)(this + 8) != 0) && (this[0x278] == (VideoStreamPlayback)0x0)) {
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
      String::parse_latin1((String *)local_c8,"_play");
      local_90 = CONCAT44(local_90._4_4_,8);
      uVar1 = MethodInfo::get_compatibility_hash();
      lVar3 = *(long *)(this + 8);
      *(undefined8 *)(this + 0x280) = 0;
      UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 0xd8);
      if (((UNRECOVERED_JUMPTABLE == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
         (UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 0xd0), UNRECOVERED_JUMPTABLE == (code *)0x0)) {
        local_e8 = 0;
        String::parse_latin1((String *)&local_e8,"VideoStreamPlayback");
        StringName::StringName((StringName *)&local_e0,(String *)&local_e8,false);
        ClassDB::get_virtual_method_compatibility_hashes(local_d8,(StringName *)&local_e0);
        if (local_d0 == 0) {
          CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&local_d0);
          if ((StringName::configured != '\0') && (lVar3 = 0, local_e0 != 0)) goto LAB_00101c37;
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
LAB_00101c4c:
          lVar3 = *(long *)(this + 8);
          UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 200);
          if (((UNRECOVERED_JUMPTABLE == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
             (UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 0xc0), UNRECOVERED_JUMPTABLE == (code *)0x0
             )) goto LAB_00101b89;
          uVar2 = (*UNRECOVERED_JUMPTABLE)(*(undefined8 *)(lVar3 + 0xa0),this + 0x270);
          *(undefined8 *)(this + 0x280) = uVar2;
        }
        else {
          lVar3 = *(long *)(local_d0 + -8);
          CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&local_d0);
          if ((StringName::configured != '\0') && (local_e0 != 0)) {
LAB_00101c37:
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
          if (lVar3 == 0) goto LAB_00101c4c;
        }
        lVar3 = *(long *)(this + 8);
      }
      else {
        uVar2 = (*UNRECOVERED_JUMPTABLE)(*(undefined8 *)(lVar3 + 0xa0),this + 0x270,uVar1);
        *(undefined8 *)(this + 0x280) = uVar2;
        lVar3 = *(long *)(this + 8);
      }
LAB_00101b89:
      if (*(char *)(lVar3 + 0x29) != '\0') {
        plVar4 = (long *)operator_new(0x18,"");
        *plVar4 = (long)(this + 0x280);
        plVar4[1] = (long)(this + 0x278);
        plVar4[2] = *(long *)(this + 0x168);
        *(long **)(this + 0x168) = plVar4;
      }
      this[0x278] = (VideoStreamPlayback)0x1;
      MethodInfo::~MethodInfo((MethodInfo *)local_c8);
    }
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x280);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
      if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00101aac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)(*(undefined8 *)(this + 0x10),0,0);
          return;
        }
      }
      else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00101a4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)(this + 8) + 0xe0))
                  (*(undefined8 *)(this + 0x10),this + 0x270,UNRECOVERED_JUMPTABLE,0,0);
        return;
      }
      goto LAB_00101cbf;
    }
  }
  else {
    local_c8[0] = 0;
    local_c8[1] = 0;
    local_c8[2] = 0;
    (**(code **)(*plVar4 + 0x60))(local_58,plVar4,this + 0x270,0,0,local_c8);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (local_c8[0] != 0) goto LAB_001019eb;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00101cbf:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VideoStreamPlayback::is_playing() const */

bool __thiscall VideoStreamPlayback::is_playing(VideoStreamPlayback *this)

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
    (**(code **)(*plVar4 + 0x60))((Variant *)local_58,plVar4,this + 0x288,0,0,local_c8);
    if (local_c8[0] == 0) {
      bVar6 = Variant::operator_cast_to_bool((Variant *)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_00101de7;
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(this + 8) != 0) && (this[0x290] == (VideoStreamPlayback)0x0)) {
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
    *(undefined8 *)(this + 0x298) = 0;
    pcVar5 = *(code **)(lVar3 + 0xd8);
    if (((pcVar5 == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
       (pcVar5 = *(code **)(lVar3 + 0xd0), pcVar5 == (code *)0x0)) {
      local_108 = 0;
      String::parse_latin1((String *)&local_108,"VideoStreamPlayback");
      StringName::StringName((StringName *)&local_100,(String *)&local_108,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)local_f8,(StringName *)&local_100);
      if (local_f0[0] == 0) {
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (lVar3 = 0, local_100 != 0)) goto LAB_00102018;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
LAB_0010202d:
        lVar3 = *(long *)(this + 8);
        pcVar5 = *(code **)(lVar3 + 200);
        if (((pcVar5 == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
           (pcVar5 = *(code **)(lVar3 + 0xc0), pcVar5 == (code *)0x0)) goto LAB_00101f70;
        uVar2 = (*pcVar5)(*(undefined8 *)(lVar3 + 0xa0),this + 0x288);
        *(undefined8 *)(this + 0x298) = uVar2;
      }
      else {
        lVar3 = *(long *)(local_f0[0] + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (local_100 != 0)) {
LAB_00102018:
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
        if (lVar3 == 0) goto LAB_0010202d;
      }
      lVar3 = *(long *)(this + 8);
    }
    else {
      uVar2 = (*pcVar5)(*(undefined8 *)(lVar3 + 0xa0),this + 0x288,uVar1);
      *(undefined8 *)(this + 0x298) = uVar2;
      lVar3 = *(long *)(this + 8);
    }
LAB_00101f70:
    if (*(char *)(lVar3 + 0x29) != '\0') {
      plVar4 = (long *)operator_new(0x18,"");
      *plVar4 = (long)(this + 0x298);
      plVar4[1] = (long)(this + 0x290);
      plVar4[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar4;
    }
    this[0x290] = (VideoStreamPlayback)0x1;
    MethodInfo::~MethodInfo((MethodInfo *)local_c8);
  }
  pcVar5 = *(code **)(this + 0x298);
  bVar6 = false;
  if (pcVar5 != (code *)0x0) {
    if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
      (*pcVar5)(*(undefined8 *)(this + 0x10),0,local_c8);
      bVar6 = local_c8[0]._0_1_ != (String)0x0;
    }
    else {
      (**(code **)(*(long *)(this + 8) + 0xe0))
                (*(undefined8 *)(this + 0x10),this + 0x288,pcVar5,0,local_c8);
      bVar6 = local_c8[0]._0_1_ != (String)0x0;
    }
  }
LAB_00101de7:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar6;
}



/* VideoStreamPlayback::is_paused() const */

bool __thiscall VideoStreamPlayback::is_paused(VideoStreamPlayback *this)

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
      goto LAB_001021c7;
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(this + 8) != 0) && (this[0x2c0] == (VideoStreamPlayback)0x0)) {
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
    String::parse_latin1((String *)local_c8,"_is_paused");
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
      String::parse_latin1((String *)&local_108,"VideoStreamPlayback");
      StringName::StringName((StringName *)&local_100,(String *)&local_108,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)local_f8,(StringName *)&local_100);
      if (local_f0[0] == 0) {
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (lVar3 = 0, local_100 != 0)) goto LAB_001023f8;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
LAB_0010240d:
        lVar3 = *(long *)(this + 8);
        pcVar5 = *(code **)(lVar3 + 200);
        if (((pcVar5 == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
           (pcVar5 = *(code **)(lVar3 + 0xc0), pcVar5 == (code *)0x0)) goto LAB_00102350;
        uVar2 = (*pcVar5)(*(undefined8 *)(lVar3 + 0xa0),this + 0x2b8);
        *(undefined8 *)(this + 0x2c8) = uVar2;
      }
      else {
        lVar3 = *(long *)(local_f0[0] + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (local_100 != 0)) {
LAB_001023f8:
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
        if (lVar3 == 0) goto LAB_0010240d;
      }
      lVar3 = *(long *)(this + 8);
    }
    else {
      uVar2 = (*pcVar5)(*(undefined8 *)(lVar3 + 0xa0),this + 0x2b8,uVar1);
      *(undefined8 *)(this + 0x2c8) = uVar2;
      lVar3 = *(long *)(this + 8);
    }
LAB_00102350:
    if (*(char *)(lVar3 + 0x29) != '\0') {
      plVar4 = (long *)operator_new(0x18,"");
      *plVar4 = (long)(this + 0x2c8);
      plVar4[1] = (long)(this + 0x2c0);
      plVar4[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar4;
    }
    this[0x2c0] = (VideoStreamPlayback)0x1;
    MethodInfo::~MethodInfo((MethodInfo *)local_c8);
  }
  pcVar5 = *(code **)(this + 0x2c8);
  bVar6 = false;
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
LAB_001021c7:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar6;
}



/* VideoStreamPlayback::get_length() const */

double __thiscall VideoStreamPlayback::get_length(VideoStreamPlayback *this)

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
      goto LAB_001025ac;
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(this + 8) != 0) && (this[0x2d8] == (VideoStreamPlayback)0x0)) {
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
    *(undefined8 *)(this + 0x2e0) = 0;
    pcVar5 = *(code **)(lVar3 + 0xd8);
    if (((pcVar5 == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
       (pcVar5 = *(code **)(lVar3 + 0xd0), pcVar5 == (code *)0x0)) {
      local_108 = 0;
      String::parse_latin1((String *)&local_108,"VideoStreamPlayback");
      StringName::StringName((StringName *)&local_100,(String *)&local_108,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)local_f8,(StringName *)&local_100);
      if (local_f0[0] == 0) {
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (lVar3 = 0, local_100 != 0)) goto LAB_001027e8;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
LAB_001027fd:
        lVar3 = *(long *)(this + 8);
        pcVar5 = *(code **)(lVar3 + 200);
        if (((pcVar5 == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
           (pcVar5 = *(code **)(lVar3 + 0xc0), pcVar5 == (code *)0x0)) goto LAB_00102740;
        uVar2 = (*pcVar5)(*(undefined8 *)(lVar3 + 0xa0),this + 0x2d0);
        *(undefined8 *)(this + 0x2e0) = uVar2;
      }
      else {
        lVar3 = *(long *)(local_f0[0] + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (local_100 != 0)) {
LAB_001027e8:
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
        if (lVar3 == 0) goto LAB_001027fd;
      }
      lVar3 = *(long *)(this + 8);
    }
    else {
      uVar2 = (*pcVar5)(*(undefined8 *)(lVar3 + 0xa0),this + 0x2d0,uVar1);
      *(undefined8 *)(this + 0x2e0) = uVar2;
      lVar3 = *(long *)(this + 8);
    }
LAB_00102740:
    if (*(char *)(lVar3 + 0x29) != '\0') {
      plVar4 = (long *)operator_new(0x18,"");
      *plVar4 = (long)(this + 0x2e0);
      plVar4[1] = (long)(this + 0x2d8);
      plVar4[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar4;
    }
    this[0x2d8] = (VideoStreamPlayback)0x1;
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
LAB_001025ac:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return dVar6;
}



/* VideoStreamPlayback::get_playback_position() const */

double __thiscall VideoStreamPlayback::get_playback_position(VideoStreamPlayback *this)

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
    (**(code **)(*plVar4 + 0x60))((Variant *)local_58,plVar4,this + 0x2e8,0,0,&local_c8);
    if (local_c8 == 0) {
      dVar6 = Variant::operator_cast_to_double((Variant *)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_0010299c;
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(this + 8) != 0) && (this[0x2f0] == (VideoStreamPlayback)0x0)) {
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
    *(undefined8 *)(this + 0x2f8) = 0;
    pcVar5 = *(code **)(lVar3 + 0xd8);
    if (((pcVar5 == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
       (pcVar5 = *(code **)(lVar3 + 0xd0), pcVar5 == (code *)0x0)) {
      local_108 = 0;
      String::parse_latin1((String *)&local_108,"VideoStreamPlayback");
      StringName::StringName((StringName *)&local_100,(String *)&local_108,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)local_f8,(StringName *)&local_100);
      if (local_f0[0] == 0) {
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (lVar3 = 0, local_100 != 0)) goto LAB_00102bd8;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
LAB_00102bed:
        lVar3 = *(long *)(this + 8);
        pcVar5 = *(code **)(lVar3 + 200);
        if (((pcVar5 == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
           (pcVar5 = *(code **)(lVar3 + 0xc0), pcVar5 == (code *)0x0)) goto LAB_00102b30;
        uVar2 = (*pcVar5)(*(undefined8 *)(lVar3 + 0xa0),this + 0x2e8);
        *(undefined8 *)(this + 0x2f8) = uVar2;
      }
      else {
        lVar3 = *(long *)(local_f0[0] + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (local_100 != 0)) {
LAB_00102bd8:
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
        if (lVar3 == 0) goto LAB_00102bed;
      }
      lVar3 = *(long *)(this + 8);
    }
    else {
      uVar2 = (*pcVar5)(*(undefined8 *)(lVar3 + 0xa0),this + 0x2e8,uVar1);
      *(undefined8 *)(this + 0x2f8) = uVar2;
      lVar3 = *(long *)(this + 8);
    }
LAB_00102b30:
    if (*(char *)(lVar3 + 0x29) != '\0') {
      plVar4 = (long *)operator_new(0x18,"");
      *plVar4 = (long)(this + 0x2f8);
      plVar4[1] = (long)(this + 0x2f0);
      plVar4[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar4;
    }
    this[0x2f0] = (VideoStreamPlayback)0x1;
    MethodInfo::~MethodInfo((MethodInfo *)&local_c8);
  }
  pcVar5 = *(code **)(this + 0x2f8);
  dVar6 = 0.0;
  if (pcVar5 != (code *)0x0) {
    if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
      (*pcVar5)(*(undefined8 *)(this + 0x10),0,&local_c8);
      dVar6 = (double)CONCAT44(uStack_c4,local_c8);
    }
    else {
      (**(code **)(*(long *)(this + 8) + 0xe0))
                (*(undefined8 *)(this + 0x10),this + 0x2e8,pcVar5,0,&local_c8);
      dVar6 = (double)CONCAT44(uStack_c4,local_c8);
    }
  }
LAB_0010299c:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return dVar6;
}



/* VideoStreamPlayback::get_channels() const */

int __thiscall VideoStreamPlayback::get_channels(VideoStreamPlayback *this)

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
  if (plVar5 == (long *)0x0) {
LAB_00102d3f:
    if ((*(long *)(this + 8) != 0) && (this[0x368] == (VideoStreamPlayback)0x0)) {
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
      String::parse_latin1((String *)local_c8,"_get_channels");
      local_90 = CONCAT44(local_90._4_4_,0xc);
      GetTypeInfo<int,void>::get_class_info(local_f8);
      PropertyInfo::operator=((PropertyInfo *)&uStack_c0,(PropertyInfo *)local_f8);
      PropertyInfo::~PropertyInfo((PropertyInfo *)local_f8);
      local_70 = CONCAT44(local_70._4_4_,3);
      uVar2 = MethodInfo::get_compatibility_hash();
      lVar4 = *(long *)(this + 8);
      *(undefined8 *)(this + 0x370) = 0;
      pcVar6 = *(code **)(lVar4 + 0xd8);
      if (((pcVar6 == (code *)0x0) || (*(long *)(lVar4 + 0xe0) == 0)) &&
         (pcVar6 = *(code **)(lVar4 + 0xd0), pcVar6 == (code *)0x0)) {
        local_108 = 0;
        String::parse_latin1((String *)&local_108,"VideoStreamPlayback");
        StringName::StringName((StringName *)&local_100,(String *)&local_108,false);
        ClassDB::get_virtual_method_compatibility_hashes
                  ((StringName *)local_f8,(StringName *)&local_100);
        if (local_f0[0] == 0) {
          CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
          if ((StringName::configured != '\0') && (lVar4 = 0, local_100 != 0)) goto LAB_00102fc8;
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
LAB_00102fdd:
          lVar4 = *(long *)(this + 8);
          pcVar6 = *(code **)(lVar4 + 200);
          if (((pcVar6 == (code *)0x0) || (*(long *)(lVar4 + 0xe0) == 0)) &&
             (pcVar6 = *(code **)(lVar4 + 0xc0), pcVar6 == (code *)0x0)) goto LAB_00102f18;
          uVar3 = (*pcVar6)(*(undefined8 *)(lVar4 + 0xa0),this + 0x360);
          *(undefined8 *)(this + 0x370) = uVar3;
        }
        else {
          lVar4 = *(long *)(local_f0[0] + -8);
          CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
          if ((StringName::configured != '\0') && (local_100 != 0)) {
LAB_00102fc8:
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
          if (lVar4 == 0) goto LAB_00102fdd;
        }
        lVar4 = *(long *)(this + 8);
      }
      else {
        uVar3 = (*pcVar6)(*(undefined8 *)(lVar4 + 0xa0),this + 0x360,uVar2);
        *(undefined8 *)(this + 0x370) = uVar3;
        lVar4 = *(long *)(this + 8);
      }
LAB_00102f18:
      if (*(char *)(lVar4 + 0x29) != '\0') {
        plVar5 = (long *)operator_new(0x18,"");
        *plVar5 = (long)(this + 0x370);
        plVar5[1] = (long)(this + 0x368);
        plVar5[2] = *(long *)(this + 0x168);
        *(long **)(this + 0x168) = plVar5;
      }
      this[0x368] = (VideoStreamPlayback)0x1;
      MethodInfo::~MethodInfo((MethodInfo *)local_c8);
    }
    pcVar6 = *(code **)(this + 0x370);
    iVar1 = 0;
    if (pcVar6 == (code *)0x0) goto LAB_00102d8d;
    if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
      (*pcVar6)(*(undefined8 *)(this + 0x10),0,local_c8);
      iVar1 = local_c8[0];
    }
    else {
      (**(code **)(*(long *)(this + 8) + 0xe0))
                (*(undefined8 *)(this + 0x10),this + 0x360,pcVar6,0,local_c8);
      iVar1 = local_c8[0];
    }
  }
  else {
    local_c8[0] = 0;
    local_c8[1] = 0;
    uStack_c0 = 0;
    (**(code **)(*plVar5 + 0x60))((Variant *)local_58,plVar5,this + 0x360,0,0,local_c8);
    if (local_c8[0] != 0) {
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_00102d3f;
    }
    iVar1 = Variant::operator_cast_to_int((Variant *)local_58);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  *(int *)(this + 0x250) = iVar1;
LAB_00102d8d:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}



/* VideoStreamPlayback::get_mix_rate() const */

int __thiscall VideoStreamPlayback::get_mix_rate(VideoStreamPlayback *this)

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
    (**(code **)(*plVar5 + 0x60))((Variant *)local_58,plVar5,this + 0x378,0,0,local_c8);
    if (local_c8[0] == 0) {
      iVar1 = Variant::operator_cast_to_int((Variant *)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_00103173;
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(this + 8) != 0) && (this[0x380] == (VideoStreamPlayback)0x0)) {
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
    String::parse_latin1((String *)local_c8,"_get_mix_rate");
    local_90 = CONCAT44(local_90._4_4_,0xc);
    GetTypeInfo<int,void>::get_class_info(local_f8);
    PropertyInfo::operator=((PropertyInfo *)&uStack_c0,(PropertyInfo *)local_f8);
    PropertyInfo::~PropertyInfo((PropertyInfo *)local_f8);
    local_70 = CONCAT44(local_70._4_4_,3);
    uVar2 = MethodInfo::get_compatibility_hash();
    lVar4 = *(long *)(this + 8);
    *(undefined8 *)(this + 0x388) = 0;
    pcVar6 = *(code **)(lVar4 + 0xd8);
    if (((pcVar6 == (code *)0x0) || (*(long *)(lVar4 + 0xe0) == 0)) &&
       (pcVar6 = *(code **)(lVar4 + 0xd0), pcVar6 == (code *)0x0)) {
      local_108 = 0;
      String::parse_latin1((String *)&local_108,"VideoStreamPlayback");
      StringName::StringName((StringName *)&local_100,(String *)&local_108,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)local_f8,(StringName *)&local_100);
      if (local_f0[0] == 0) {
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (lVar4 = 0, local_100 != 0)) goto LAB_001033a8;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
LAB_001033bd:
        lVar4 = *(long *)(this + 8);
        pcVar6 = *(code **)(lVar4 + 200);
        if (((pcVar6 == (code *)0x0) || (*(long *)(lVar4 + 0xe0) == 0)) &&
           (pcVar6 = *(code **)(lVar4 + 0xc0), pcVar6 == (code *)0x0)) goto LAB_001032f8;
        uVar3 = (*pcVar6)(*(undefined8 *)(lVar4 + 0xa0),this + 0x378);
        *(undefined8 *)(this + 0x388) = uVar3;
      }
      else {
        lVar4 = *(long *)(local_f0[0] + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (local_100 != 0)) {
LAB_001033a8:
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
        if (lVar4 == 0) goto LAB_001033bd;
      }
      lVar4 = *(long *)(this + 8);
    }
    else {
      uVar3 = (*pcVar6)(*(undefined8 *)(lVar4 + 0xa0),this + 0x378,uVar2);
      *(undefined8 *)(this + 0x388) = uVar3;
      lVar4 = *(long *)(this + 8);
    }
LAB_001032f8:
    if (*(char *)(lVar4 + 0x29) != '\0') {
      plVar5 = (long *)operator_new(0x18,"");
      *plVar5 = (long)(this + 0x388);
      plVar5[1] = (long)(this + 0x380);
      plVar5[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar5;
    }
    this[0x380] = (VideoStreamPlayback)0x1;
    MethodInfo::~MethodInfo((MethodInfo *)local_c8);
  }
  pcVar6 = *(code **)(this + 0x388);
  iVar1 = 0;
  if (pcVar6 != (code *)0x0) {
    if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
      (*pcVar6)(*(undefined8 *)(this + 0x10),0,local_c8);
      iVar1 = local_c8[0];
    }
    else {
      (**(code **)(*(long *)(this + 8) + 0xe0))
                (*(undefined8 *)(this + 0x10),this + 0x378,pcVar6,0,local_c8);
      iVar1 = local_c8[0];
    }
  }
LAB_00103173:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}



/* VideoStreamPlayback::get_texture() const */

void VideoStreamPlayback::get_texture(void)

{
  code *pcVar1;
  char cVar2;
  undefined4 uVar3;
  long lVar4;
  Object *pOVar5;
  undefined8 uVar6;
  long *plVar7;
  code *pcVar8;
  Object *pOVar9;
  long in_RSI;
  undefined8 *in_RDI;
  long in_FS_OFFSET;
  undefined8 local_108;
  long local_100;
  GetTypeInfo<Ref<Texture2D>,void> local_f8 [8];
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
  
  plVar7 = *(long **)(in_RSI + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar7 == (long *)0x0) {
LAB_00103512:
    if ((*(long *)(in_RSI + 8) != 0) && (*(char *)(in_RSI + 0x338) == '\0')) {
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
      String::parse_latin1((String *)&local_c8,"_get_texture");
      local_90 = CONCAT44(local_90._4_4_,0xc);
      GetTypeInfo<Ref<Texture2D>,void>::get_class_info(local_f8);
      PropertyInfo::operator=((PropertyInfo *)&uStack_c0,(PropertyInfo *)local_f8);
      PropertyInfo::~PropertyInfo((PropertyInfo *)local_f8);
      local_70 = local_70 & 0xffffffff00000000;
      uVar3 = MethodInfo::get_compatibility_hash();
      lVar4 = *(long *)(in_RSI + 8);
      *(undefined8 *)(in_RSI + 0x340) = 0;
      pcVar8 = *(code **)(lVar4 + 0xd8);
      if (((pcVar8 == (code *)0x0) || (*(long *)(lVar4 + 0xe0) == 0)) &&
         (pcVar8 = *(code **)(lVar4 + 0xd0), pcVar8 == (code *)0x0)) {
        local_108 = 0;
        String::parse_latin1((String *)&local_108,"VideoStreamPlayback");
        StringName::StringName((StringName *)&local_100,(String *)&local_108,false);
        ClassDB::get_virtual_method_compatibility_hashes
                  ((StringName *)local_f8,(StringName *)&local_100);
        if (local_f0[0] == 0) {
          CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
          if ((StringName::configured != '\0') && (lVar4 = 0, local_100 != 0)) goto LAB_001039d2;
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
LAB_001039e7:
          lVar4 = *(long *)(in_RSI + 8);
          pcVar8 = *(code **)(lVar4 + 200);
          if (((pcVar8 == (code *)0x0) || (*(long *)(lVar4 + 0xe0) == 0)) &&
             (pcVar8 = *(code **)(lVar4 + 0xc0), pcVar8 == (code *)0x0)) goto LAB_001038d9;
          uVar6 = (*pcVar8)(*(undefined8 *)(lVar4 + 0xa0));
          *(undefined8 *)(in_RSI + 0x340) = uVar6;
        }
        else {
          lVar4 = *(long *)(local_f0[0] + -8);
          CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
          if ((StringName::configured != '\0') && (local_100 != 0)) {
LAB_001039d2:
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
          if (lVar4 == 0) goto LAB_001039e7;
        }
        lVar4 = *(long *)(in_RSI + 8);
      }
      else {
        uVar6 = (*pcVar8)(*(undefined8 *)(lVar4 + 0xa0),in_RSI + 0x330,uVar3);
        *(undefined8 *)(in_RSI + 0x340) = uVar6;
        lVar4 = *(long *)(in_RSI + 8);
      }
LAB_001038d9:
      if (*(char *)(lVar4 + 0x29) != '\0') {
        plVar7 = (long *)operator_new(0x18,"");
        *plVar7 = in_RSI + 0x340;
        plVar7[1] = in_RSI + 0x338;
        plVar7[2] = *(long *)(in_RSI + 0x168);
        *(long **)(in_RSI + 0x168) = plVar7;
      }
      *(undefined1 *)(in_RSI + 0x338) = 1;
      MethodInfo::~MethodInfo((MethodInfo *)&local_c8);
    }
    pcVar8 = *(code **)(in_RSI + 0x340);
    if (pcVar8 != (code *)0x0) {
      local_c8 = 0;
      uStack_c4 = 0;
      pcVar1 = *(code **)(*(long *)(in_RSI + 8) + 0xe0);
      if (pcVar1 == (code *)0x0) {
        (*pcVar8)(*(undefined8 *)(in_RSI + 0x10),0,&local_c8);
        pOVar5 = (Object *)CONCAT44(uStack_c4,local_c8);
        if (pOVar5 != (Object *)0x0) {
          cVar2 = RefCounted::reference();
          if (cVar2 != '\0') {
            cVar2 = RefCounted::reference();
            pOVar9 = (Object *)0x0;
            if (cVar2 != '\0') {
              pOVar9 = pOVar5;
            }
            cVar2 = RefCounted::unreference();
            goto joined_r0x0010377f;
          }
LAB_001036a8:
          pOVar9 = (Object *)0x0;
          if (CONCAT44(uStack_c4,local_c8) != 0) {
            cVar2 = RefCounted::unreference();
            goto joined_r0x001035b0;
          }
        }
      }
      else {
        (*pcVar1)(*(undefined8 *)(in_RSI + 0x10),in_RSI + 0x330,pcVar8,0,&local_c8);
        pOVar5 = (Object *)CONCAT44(uStack_c4,local_c8);
        if (pOVar5 != (Object *)0x0) {
          cVar2 = RefCounted::reference();
          if (cVar2 == '\0') goto LAB_001036a8;
          cVar2 = RefCounted::reference();
          pOVar9 = (Object *)0x0;
          if (cVar2 != '\0') {
            pOVar9 = pOVar5;
          }
          cVar2 = RefCounted::unreference();
joined_r0x0010377f:
          if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar5), cVar2 != '\0')) {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
          if (CONCAT44(uStack_c4,local_c8) == 0) goto LAB_001035b6;
          cVar2 = RefCounted::unreference();
joined_r0x001035b0:
          if (cVar2 != '\0') {
            pOVar5 = (Object *)CONCAT44(uStack_c4,local_c8);
            cVar2 = predelete_handler(pOVar5);
            if (cVar2 != '\0') {
              (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
              Memory::free_static(pOVar5,false);
            }
          }
          goto LAB_001035b6;
        }
      }
    }
  }
  else {
    local_c8 = 0;
    uStack_c4 = 0;
    uStack_c0 = 0;
    (**(code **)(*plVar7 + 0x60))(local_58,plVar7,in_RSI + 0x330,0,0,&local_c8);
    if (local_c8 != 0) {
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_00103512;
    }
    lVar4 = Variant::get_validated_object();
    if (((lVar4 == 0) ||
        (pOVar5 = (Object *)__dynamic_cast(lVar4,&Object::typeinfo,&Texture2D::typeinfo,0),
        pOVar5 == (Object *)0x0)) || (cVar2 = RefCounted::reference(), cVar2 == '\0')) {
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
    }
    else {
      cVar2 = RefCounted::reference();
      pOVar9 = (Object *)0x0;
      if (cVar2 != '\0') {
        pOVar9 = pOVar5;
      }
      cVar2 = RefCounted::unreference();
      if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar5), cVar2 != '\0')) {
        (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
        Memory::free_static(pOVar5,false);
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
LAB_001035b6:
      if (pOVar9 != (Object *)0x0) {
        *in_RDI = pOVar9;
        cVar2 = RefCounted::reference();
        if (cVar2 == '\0') {
          *in_RDI = 0;
        }
        cVar2 = RefCounted::unreference();
        if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar9), cVar2 != '\0')) {
          (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
          Memory::free_static(pOVar9,false);
        }
        goto LAB_00103677;
      }
    }
  }
  *in_RDI = 0;
LAB_00103677:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* VideoStream::instantiate_playback() */

void VideoStream::instantiate_playback(void)

{
  code *pcVar1;
  char cVar2;
  undefined4 uVar3;
  long lVar4;
  Object *pOVar5;
  undefined8 uVar6;
  long *plVar7;
  code *pcVar8;
  Object *pOVar9;
  long in_RSI;
  undefined8 *in_RDI;
  long in_FS_OFFSET;
  undefined8 local_108;
  long local_100;
  GetTypeInfo<Ref<VideoStreamPlayback>,void> local_f8 [8];
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
  
  plVar7 = *(long **)(in_RSI + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar7 == (long *)0x0) {
LAB_00103b32:
    if ((*(long *)(in_RSI + 8) != 0) && (*(char *)(in_RSI + 0x248) == '\0')) {
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
      local_90 = CONCAT44(local_90._4_4_,8);
      GetTypeInfo<Ref<VideoStreamPlayback>,void>::get_class_info(local_f8);
      PropertyInfo::operator=((PropertyInfo *)&uStack_c0,(PropertyInfo *)local_f8);
      PropertyInfo::~PropertyInfo((PropertyInfo *)local_f8);
      local_70 = local_70 & 0xffffffff00000000;
      uVar3 = MethodInfo::get_compatibility_hash();
      lVar4 = *(long *)(in_RSI + 8);
      *(undefined8 *)(in_RSI + 0x250) = 0;
      pcVar8 = *(code **)(lVar4 + 0xd8);
      if (((pcVar8 == (code *)0x0) || (*(long *)(lVar4 + 0xe0) == 0)) &&
         (pcVar8 = *(code **)(lVar4 + 0xd0), pcVar8 == (code *)0x0)) {
        local_108 = 0;
        String::parse_latin1((String *)&local_108,"VideoStream");
        StringName::StringName((StringName *)&local_100,(String *)&local_108,false);
        ClassDB::get_virtual_method_compatibility_hashes
                  ((StringName *)local_f8,(StringName *)&local_100);
        if (local_f0[0] == 0) {
          CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
          if ((StringName::configured != '\0') && (lVar4 = 0, local_100 != 0)) goto LAB_0010402a;
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
LAB_0010403f:
          lVar4 = *(long *)(in_RSI + 8);
          pcVar8 = *(code **)(lVar4 + 200);
          if (((pcVar8 == (code *)0x0) || (*(long *)(lVar4 + 0xe0) == 0)) &&
             (pcVar8 = *(code **)(lVar4 + 0xc0), pcVar8 == (code *)0x0)) goto LAB_00103f45;
          uVar6 = (*pcVar8)(*(undefined8 *)(lVar4 + 0xa0));
          *(undefined8 *)(in_RSI + 0x250) = uVar6;
        }
        else {
          lVar4 = *(long *)(local_f0[0] + -8);
          CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
          if ((StringName::configured != '\0') && (local_100 != 0)) {
LAB_0010402a:
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
          if (lVar4 == 0) goto LAB_0010403f;
        }
        lVar4 = *(long *)(in_RSI + 8);
      }
      else {
        uVar6 = (*pcVar8)(*(undefined8 *)(lVar4 + 0xa0),in_RSI + 0x240,uVar3);
        *(undefined8 *)(in_RSI + 0x250) = uVar6;
        lVar4 = *(long *)(in_RSI + 8);
      }
LAB_00103f45:
      if (*(char *)(lVar4 + 0x29) != '\0') {
        plVar7 = (long *)operator_new(0x18,"");
        *plVar7 = in_RSI + 0x250;
        plVar7[1] = in_RSI + 0x248;
        plVar7[2] = *(long *)(in_RSI + 0x168);
        *(long **)(in_RSI + 0x168) = plVar7;
      }
      *(undefined1 *)(in_RSI + 0x248) = 1;
      MethodInfo::~MethodInfo((MethodInfo *)&local_c8);
    }
    pcVar8 = *(code **)(in_RSI + 0x250);
    if (pcVar8 == (code *)0x0) {
      *in_RDI = 0;
      goto LAB_00103c47;
    }
    local_c8 = 0;
    uStack_c4 = 0;
    pcVar1 = *(code **)(*(long *)(in_RSI + 8) + 0xe0);
    if (pcVar1 == (code *)0x0) {
      (*pcVar8)(*(undefined8 *)(in_RSI + 0x10),0,&local_c8);
      pOVar5 = (Object *)CONCAT44(uStack_c4,local_c8);
      if (pOVar5 != (Object *)0x0) {
        cVar2 = RefCounted::reference();
        if (cVar2 == '\0') goto LAB_00103c78;
        cVar2 = RefCounted::reference();
        pOVar9 = (Object *)0x0;
        if (cVar2 != '\0') {
          pOVar9 = pOVar5;
        }
        cVar2 = RefCounted::unreference();
joined_r0x00103def:
        if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar5), cVar2 != '\0')) {
          (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
          Memory::free_static(pOVar5,false);
        }
        if (CONCAT44(uStack_c4,local_c8) != 0) {
LAB_00103bc9:
          cVar2 = RefCounted::unreference();
          if (cVar2 != '\0') {
            pOVar5 = (Object *)CONCAT44(uStack_c4,local_c8);
            cVar2 = predelete_handler(pOVar5);
            if (cVar2 != '\0') {
              (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
              Memory::free_static(pOVar5,false);
            }
          }
        }
        goto LAB_00103bd6;
      }
    }
    else {
      (*pcVar1)(*(undefined8 *)(in_RSI + 0x10),in_RSI + 0x240,pcVar8,0,&local_c8);
      pOVar5 = (Object *)CONCAT44(uStack_c4,local_c8);
      if (pOVar5 != (Object *)0x0) {
        cVar2 = RefCounted::reference();
        if (cVar2 != '\0') {
          cVar2 = RefCounted::reference();
          pOVar9 = (Object *)0x0;
          if (cVar2 != '\0') {
            pOVar9 = pOVar5;
          }
          cVar2 = RefCounted::unreference();
          goto joined_r0x00103def;
        }
LAB_00103c78:
        pOVar9 = (Object *)0x0;
        if (CONCAT44(uStack_c4,local_c8) != 0) goto LAB_00103bc9;
      }
    }
  }
  else {
    local_c8 = 0;
    uStack_c4 = 0;
    uStack_c0 = 0;
    (**(code **)(*plVar7 + 0x60))(local_58,plVar7,in_RSI + 0x240,0,0,&local_c8);
    if (local_c8 != 0) {
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_00103b32;
    }
    lVar4 = Variant::get_validated_object();
    if (((lVar4 == 0) ||
        (pOVar5 = (Object *)__dynamic_cast(lVar4,&Object::typeinfo,&VideoStreamPlayback::typeinfo,0)
        , pOVar5 == (Object *)0x0)) || (cVar2 = RefCounted::reference(), cVar2 == '\0')) {
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_00103c88;
    }
    cVar2 = RefCounted::reference();
    pOVar9 = (Object *)0x0;
    if (cVar2 != '\0') {
      pOVar9 = pOVar5;
    }
    cVar2 = RefCounted::unreference();
    if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar5), cVar2 != '\0')) {
      (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
      Memory::free_static(pOVar5,false);
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
LAB_00103bd6:
    if (pOVar9 != (Object *)0x0) {
      (**(code **)(*(long *)pOVar9 + 0x208))(pOVar9);
      *in_RDI = pOVar9;
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        *in_RDI = 0;
      }
      cVar2 = RefCounted::unreference();
      if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar9), cVar2 != '\0')) {
        (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
        Memory::free_static(pOVar9,false);
      }
      goto LAB_00103c47;
    }
  }
LAB_00103c88:
  _err_print_error("instantiate_playback","scene/resources/video_stream.cpp",0xa1,
                   "Condition \"ret.is_null()\" is true. Returning: nullptr",
                   "Plugin returned null playback",0,0);
  *in_RDI = 0;
LAB_00103c47:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* VideoStreamPlayback::_bind_methods() */

void VideoStreamPlayback::_bind_methods(void)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uVar7;
  MethodBind *pMVar8;
  Variant *pVVar9;
  long *plVar10;
  long lVar11;
  long in_FS_OFFSET;
  long local_198;
  long local_190;
  undefined8 local_188;
  long local_180;
  Vector<String> local_178 [8];
  undefined8 local_170;
  char *local_168;
  undefined1 local_160 [16];
  int local_150;
  undefined8 local_148;
  undefined4 local_140;
  char *local_138;
  undefined8 local_130;
  undefined1 local_128 [16];
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8 [2];
  undefined8 local_e8;
  ulong local_e0;
  Vector<int> local_d8 [8];
  undefined8 local_d0;
  char *local_c8;
  char *pcStack_c0;
  char *local_b8;
  undefined8 local_b0;
  Variant *local_a8;
  Variant *pVStack_a0;
  char **local_98;
  Variant local_88 [24];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  auVar6._8_8_ = 0;
  auVar6._0_8_ = local_160._0_8_;
  local_160 = auVar6 << 0x40;
  local_b0 = 0;
  local_b8 = "offset";
  local_a8 = (Variant *)&local_c8;
  local_c8 = "num_frames";
  pcStack_c0 = "buffer";
  pVStack_a0 = (Variant *)&pcStack_c0;
  local_98 = &local_b8;
  D_METHODP((char *)&local_138,(char ***)"mix_audio",(uint)&local_a8);
  Variant::Variant(local_88,(StringName *)&local_168);
  pVVar9 = (Variant *)local_40;
  Variant::Variant(local_70,0);
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  local_a8 = local_88;
  pVStack_a0 = local_70;
  pMVar8 = create_method_bind<VideoStreamPlayback,int,int,Vector<float>,int>(mix_audio);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_138,&local_a8,2);
  do {
    pVVar1 = pVVar9 + -0x18;
    pVVar9 = pVVar9 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar9 != local_88);
  uVar7 = local_128._0_8_;
  if ((long *)local_128._0_8_ != (long *)0x0) {
    LOCK();
    plVar10 = (long *)(local_128._0_8_ + -0x10);
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (*plVar10 == 0) {
      if ((long *)local_128._0_8_ == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = *(long *)(local_128._0_8_ + -8);
      lVar11 = 0;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_128._8_8_;
      local_128 = auVar4 << 0x40;
      plVar10 = (long *)uVar7;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar10 != 0)) {
            StringName::unref();
          }
          lVar11 = lVar11 + 1;
          plVar10 = plVar10 + 1;
        } while (lVar2 != lVar11);
      }
      Memory::free_static((long *)(uVar7 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_138 != (char *)0x0)) {
    StringName::unref();
  }
  uVar7 = local_160._0_8_;
  if (local_160._0_8_ != 0) {
    LOCK();
    plVar10 = (long *)(local_160._0_8_ + -0x10);
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (*plVar10 == 0) {
      auVar5._8_8_ = 0;
      auVar5._0_8_ = local_160._8_8_;
      local_160 = auVar5 << 0x40;
      Memory::free_static((void *)(uVar7 + -0x10),false);
    }
  }
  local_128 = (undefined1  [16])0x0;
  local_168 = "_stop";
  local_170 = 0;
  local_138 = (char *)0x0;
  local_130 = 0;
  local_118 = 0;
  local_110 = 0;
  local_108 = 6;
  local_100 = 1;
  local_f8[0] = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d0 = 0;
  local_160._0_8_ = 5;
  String::parse_latin1((StrRange *)&local_138);
  local_168 = "VideoStreamPlayback";
  local_100 = CONCAT44(local_100._4_4_,8);
  local_180 = 0;
  local_160._0_8_ = 0x13;
  String::parse_latin1((StrRange *)&local_180);
  StringName::StringName((StringName *)&local_168,(String *)&local_180,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_168,(MethodInfo *)&local_138,true,local_178,false);
  if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_180);
  MethodInfo::~MethodInfo((MethodInfo *)&local_138);
  CowData<String>::_unref((CowData<String> *)&local_170);
  local_128 = (undefined1  [16])0x0;
  local_168 = "_play";
  local_170 = 0;
  local_138 = (char *)0x0;
  local_130 = 0;
  local_118 = 0;
  local_110 = 0;
  local_108 = 6;
  local_100 = 1;
  local_f8[0] = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d0 = 0;
  local_160._0_8_ = 5;
  String::parse_latin1((StrRange *)&local_138);
  local_168 = "VideoStreamPlayback";
  local_100 = CONCAT44(local_100._4_4_,8);
  local_180 = 0;
  local_160._0_8_ = 0x13;
  String::parse_latin1((StrRange *)&local_180);
  StringName::StringName((StringName *)&local_168,(String *)&local_180,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_168,(MethodInfo *)&local_138,true,local_178,false);
  if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_180);
  MethodInfo::~MethodInfo((MethodInfo *)&local_138);
  CowData<String>::_unref((CowData<String> *)&local_170);
  local_128 = (undefined1  [16])0x0;
  local_168 = "_is_playing";
  local_170 = 0;
  local_138 = (char *)0x0;
  local_130 = 0;
  local_118 = 0;
  local_110 = 0;
  local_108 = 6;
  local_100 = 1;
  local_f8[0] = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d0 = 0;
  local_160._0_8_ = 0xb;
  String::parse_latin1((StrRange *)&local_138);
  local_100 = CONCAT44(local_100._4_4_,0xc);
  GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void> *)&local_168);
  PropertyInfo::operator=((PropertyInfo *)&local_130,(PropertyInfo *)&local_168);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_168);
  local_168 = "VideoStreamPlayback";
  local_e0 = local_e0 & 0xffffffff00000000;
  local_180 = 0;
  local_160._0_8_ = 0x13;
  String::parse_latin1((StrRange *)&local_180);
  StringName::StringName((StringName *)&local_168,(String *)&local_180,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_168,(MethodInfo *)&local_138,true,local_178,false);
  if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_180);
  MethodInfo::~MethodInfo((MethodInfo *)&local_138);
  CowData<String>::_unref((CowData<String> *)&local_170);
  local_170 = 0;
  local_168 = (char *)0x0;
  local_138 = "paused";
  local_130 = 6;
  String::parse_latin1((StrRange *)&local_168);
  local_138 = (char *)0x0;
  if (local_168 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_138,(CowData *)&local_168);
  }
  Vector<String>::push_back(local_178,(StrRange *)&local_138);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  local_128 = (undefined1  [16])0x0;
  local_168 = "_set_paused";
  local_138 = (char *)0x0;
  local_130 = 0;
  local_118 = 0;
  local_110 = 0;
  local_108 = 6;
  local_100 = 1;
  local_f8[0] = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d0 = 0;
  local_160._0_8_ = 0xb;
  String::parse_latin1((StrRange *)&local_138);
  local_100 = CONCAT44(local_100._4_4_,8);
  GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void> *)&local_168);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_f8,(PropertyInfo *)&local_168);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_168);
  Vector<int>::push_back(local_d8,0);
  local_168 = "VideoStreamPlayback";
  local_180 = 0;
  local_160._0_8_ = 0x13;
  String::parse_latin1((StrRange *)&local_180);
  StringName::StringName((StringName *)&local_168,(String *)&local_180,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_168,(MethodInfo *)&local_138,true,local_178,false);
  if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_180);
  MethodInfo::~MethodInfo((MethodInfo *)&local_138);
  CowData<String>::_unref((CowData<String> *)&local_170);
  local_128 = (undefined1  [16])0x0;
  local_168 = "_is_paused";
  local_170 = 0;
  local_138 = (char *)0x0;
  local_130 = 0;
  local_118 = 0;
  local_110 = 0;
  local_108 = 6;
  local_100 = 1;
  local_f8[0] = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d0 = 0;
  local_160._0_8_ = 10;
  String::parse_latin1((StrRange *)&local_138);
  local_100 = CONCAT44(local_100._4_4_,0xc);
  GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void> *)&local_168);
  PropertyInfo::operator=((PropertyInfo *)&local_130,(PropertyInfo *)&local_168);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_168);
  local_168 = "VideoStreamPlayback";
  local_e0 = local_e0 & 0xffffffff00000000;
  local_180 = 0;
  local_160._0_8_ = 0x13;
  String::parse_latin1((StrRange *)&local_180);
  StringName::StringName((StringName *)&local_168,(String *)&local_180,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_168,(MethodInfo *)&local_138,true,local_178,false);
  if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_180);
  MethodInfo::~MethodInfo((MethodInfo *)&local_138);
  CowData<String>::_unref((CowData<String> *)&local_170);
  local_128 = (undefined1  [16])0x0;
  local_168 = "_get_length";
  local_170 = 0;
  local_138 = (char *)0x0;
  local_130 = 0;
  local_118 = 0;
  local_110 = 0;
  local_108 = 6;
  local_100 = 1;
  local_f8[0] = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d0 = 0;
  local_160._0_8_ = 0xb;
  String::parse_latin1((StrRange *)&local_138);
  local_100 = CONCAT44(local_100._4_4_,0xc);
  GetTypeInfo<double,void>::get_class_info((GetTypeInfo<double,void> *)&local_168);
  PropertyInfo::operator=((PropertyInfo *)&local_130,(PropertyInfo *)&local_168);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_168);
  local_168 = "VideoStreamPlayback";
  local_e0 = CONCAT44(local_e0._4_4_,10);
  local_180 = 0;
  local_160._0_8_ = 0x13;
  String::parse_latin1((StrRange *)&local_180);
  StringName::StringName((StringName *)&local_168,(String *)&local_180,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_168,(MethodInfo *)&local_138,true,local_178,false);
  if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_180);
  MethodInfo::~MethodInfo((MethodInfo *)&local_138);
  CowData<String>::_unref((CowData<String> *)&local_170);
  local_128 = (undefined1  [16])0x0;
  local_168 = "_get_playback_position";
  local_170 = 0;
  local_138 = (char *)0x0;
  local_130 = 0;
  local_118 = 0;
  local_110 = 0;
  local_108 = 6;
  local_100 = 1;
  local_f8[0] = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d0 = 0;
  local_160._0_8_ = 0x16;
  String::parse_latin1((StrRange *)&local_138);
  local_100 = CONCAT44(local_100._4_4_,0xc);
  GetTypeInfo<double,void>::get_class_info((GetTypeInfo<double,void> *)&local_168);
  PropertyInfo::operator=((PropertyInfo *)&local_130,(PropertyInfo *)&local_168);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_168);
  local_168 = "VideoStreamPlayback";
  local_e0 = CONCAT44(local_e0._4_4_,10);
  local_180 = 0;
  local_160._0_8_ = 0x13;
  String::parse_latin1((StrRange *)&local_180);
  StringName::StringName((StringName *)&local_168,(String *)&local_180,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_168,(MethodInfo *)&local_138,true,local_178,false);
  if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_180);
  MethodInfo::~MethodInfo((MethodInfo *)&local_138);
  CowData<String>::_unref((CowData<String> *)&local_170);
  local_170 = 0;
  local_168 = (char *)0x0;
  local_138 = "time";
  local_130 = 4;
  String::parse_latin1((StrRange *)&local_168);
  local_138 = (char *)0x0;
  if (local_168 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_138,(CowData *)&local_168);
  }
  Vector<String>::push_back(local_178,(StrRange *)&local_138);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  local_128 = (undefined1  [16])0x0;
  local_168 = "_seek";
  local_138 = (char *)0x0;
  local_130 = 0;
  local_118 = 0;
  local_110 = 0;
  local_108 = 6;
  local_100 = 1;
  local_f8[0] = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d0 = 0;
  local_160._0_8_ = 5;
  String::parse_latin1((StrRange *)&local_138);
  local_100 = CONCAT44(local_100._4_4_,8);
  GetTypeInfo<double,void>::get_class_info((GetTypeInfo<double,void> *)&local_168);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_f8,(PropertyInfo *)&local_168);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_168);
  Vector<int>::push_back(local_d8,10);
  local_168 = "VideoStreamPlayback";
  local_180 = 0;
  local_160._0_8_ = 0x13;
  String::parse_latin1((StrRange *)&local_180);
  StringName::StringName((StringName *)&local_168,(String *)&local_180,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_168,(MethodInfo *)&local_138,true,local_178,false);
  if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_180);
  MethodInfo::~MethodInfo((MethodInfo *)&local_138);
  CowData<String>::_unref((CowData<String> *)&local_170);
  local_170 = 0;
  local_168 = (char *)0x0;
  local_138 = "idx";
  local_130 = 3;
  String::parse_latin1((StrRange *)&local_168);
  local_138 = (char *)0x0;
  if (local_168 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_138,(CowData *)&local_168);
  }
  Vector<String>::push_back(local_178,(StrRange *)&local_138);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  local_128 = (undefined1  [16])0x0;
  local_168 = "_set_audio_track";
  local_138 = (char *)0x0;
  local_130 = 0;
  local_118 = 0;
  local_110 = 0;
  local_108 = 6;
  local_100 = 1;
  local_f8[0] = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d0 = 0;
  local_160._0_8_ = 0x10;
  String::parse_latin1((StrRange *)&local_138);
  local_100 = CONCAT44(local_100._4_4_,8);
  GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)&local_168);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_f8,(PropertyInfo *)&local_168);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_168);
  Vector<int>::push_back(local_d8,3);
  local_168 = "VideoStreamPlayback";
  local_180 = 0;
  local_160._0_8_ = 0x13;
  String::parse_latin1((StrRange *)&local_180);
  StringName::StringName((StringName *)&local_168,(String *)&local_180,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_168,(MethodInfo *)&local_138,true,local_178,false);
  if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_180);
  MethodInfo::~MethodInfo((MethodInfo *)&local_138);
  CowData<String>::_unref((CowData<String> *)&local_170);
  local_128 = (undefined1  [16])0x0;
  local_168 = "_get_texture";
  local_170 = 0;
  local_138 = (char *)0x0;
  local_130 = 0;
  local_118 = 0;
  local_110 = 0;
  local_108 = 6;
  local_100 = 1;
  local_f8[0] = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d0 = 0;
  local_160._0_8_ = 0xc;
  String::parse_latin1((StrRange *)&local_138);
  local_100 = CONCAT44(local_100._4_4_,0xc);
  local_168 = "Texture2D";
  local_198 = 0;
  local_190 = 0;
  local_160._0_8_ = 9;
  String::parse_latin1((StrRange *)&local_190);
  local_188 = 0;
  local_168 = (char *)CONCAT44(local_168._4_4_,0x18);
  local_150 = 0x11;
  local_148 = 0;
  local_160 = (undefined1  [16])0x0;
  if (local_190 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_148,(CowData *)&local_190);
    local_140 = 6;
    if (local_150 != 0x11) {
      StringName::operator=((StringName *)(local_160 + 8),(StringName *)&local_198);
      goto LAB_001052c1;
    }
  }
  local_140 = 6;
  StringName::StringName((StringName *)&local_180,(String *)&local_148,false);
  if (local_160._8_8_ == local_180) {
    if ((StringName::configured != '\0') && (local_180 != 0)) {
      StringName::unref();
    }
  }
  else {
    StringName::unref();
    local_160._8_8_ = local_180;
  }
LAB_001052c1:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_190);
  if ((StringName::configured != '\0') && (local_198 != 0)) {
    StringName::unref();
  }
  PropertyInfo::operator=((PropertyInfo *)&local_130,(PropertyInfo *)&local_168);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_168);
  local_168 = "VideoStreamPlayback";
  local_e0 = local_e0 & 0xffffffff00000000;
  local_180 = 0;
  local_160._0_8_ = 0x13;
  String::parse_latin1((StrRange *)&local_180);
  StringName::StringName((StringName *)&local_168,(String *)&local_180,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_168,(MethodInfo *)&local_138,true,local_178,false);
  if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_180);
  MethodInfo::~MethodInfo((MethodInfo *)&local_138);
  CowData<String>::_unref((CowData<String> *)&local_170);
  local_170 = 0;
  local_168 = (char *)0x0;
  local_138 = "delta";
  local_130 = 5;
  String::parse_latin1((StrRange *)&local_168);
  local_138 = (char *)0x0;
  if (local_168 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_138,(CowData *)&local_168);
  }
  Vector<String>::push_back(local_178,(StrRange *)&local_138);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  local_128 = (undefined1  [16])0x0;
  local_168 = "_update";
  local_138 = (char *)0x0;
  local_130 = 0;
  local_118 = 0;
  local_110 = 0;
  local_108 = 6;
  local_100 = 1;
  local_f8[0] = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d0 = 0;
  local_160._0_8_ = 7;
  String::parse_latin1((StrRange *)&local_138);
  local_100 = CONCAT44(local_100._4_4_,0x88);
  GetTypeInfo<double,void>::get_class_info((GetTypeInfo<double,void> *)&local_168);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_f8,(PropertyInfo *)&local_168);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_168);
  Vector<int>::push_back(local_d8,10);
  local_168 = "VideoStreamPlayback";
  local_180 = 0;
  local_160._0_8_ = 0x13;
  String::parse_latin1((StrRange *)&local_180);
  StringName::StringName((StringName *)&local_168,(String *)&local_180,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_168,(MethodInfo *)&local_138,true,local_178,false);
  if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_180);
  MethodInfo::~MethodInfo((MethodInfo *)&local_138);
  CowData<String>::_unref((CowData<String> *)&local_170);
  local_128 = (undefined1  [16])0x0;
  local_168 = "_get_channels";
  local_170 = 0;
  local_138 = (char *)0x0;
  local_130 = 0;
  local_118 = 0;
  local_110 = 0;
  local_108 = 6;
  local_100 = 1;
  local_f8[0] = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d0 = 0;
  local_160._0_8_ = 0xd;
  String::parse_latin1((StrRange *)&local_138);
  local_100 = CONCAT44(local_100._4_4_,0xc);
  GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)&local_168);
  PropertyInfo::operator=((PropertyInfo *)&local_130,(PropertyInfo *)&local_168);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_168);
  local_168 = "VideoStreamPlayback";
  local_e0 = CONCAT44(local_e0._4_4_,3);
  local_180 = 0;
  local_160._0_8_ = 0x13;
  String::parse_latin1((StrRange *)&local_180);
  StringName::StringName((StringName *)&local_168,(String *)&local_180,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_168,(MethodInfo *)&local_138,true,local_178,false);
  if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_180);
  MethodInfo::~MethodInfo((MethodInfo *)&local_138);
  CowData<String>::_unref((CowData<String> *)&local_170);
  local_128 = (undefined1  [16])0x0;
  local_168 = "_get_mix_rate";
  local_170 = 0;
  local_138 = (char *)0x0;
  local_130 = 0;
  local_118 = 0;
  local_110 = 0;
  local_108 = 6;
  local_100 = 1;
  local_f8[0] = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d0 = 0;
  local_160._0_8_ = 0xd;
  String::parse_latin1((StrRange *)&local_138);
  local_100 = CONCAT44(local_100._4_4_,0xc);
  GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)&local_168);
  PropertyInfo::operator=((PropertyInfo *)&local_130,(PropertyInfo *)&local_168);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_168);
  local_168 = "VideoStreamPlayback";
  local_e0 = CONCAT44(local_e0._4_4_,3);
  local_180 = 0;
  local_160._0_8_ = 0x13;
  String::parse_latin1((StrRange *)&local_180);
  StringName::StringName((StringName *)&local_168,(String *)&local_180,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_168,(MethodInfo *)&local_138,true,local_178,false);
  if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_180);
  MethodInfo::~MethodInfo((MethodInfo *)&local_138);
  CowData<String>::_unref((CowData<String> *)&local_170);
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* VideoStreamPlayback::update(double) */

void __thiscall VideoStreamPlayback::update(VideoStreamPlayback *this,double param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  char *pcVar6;
  long in_FS_OFFSET;
  CowData<char32_t> *local_160;
  undefined8 local_158;
  CowData<char32_t> local_150 [8];
  undefined8 local_148;
  String local_140 [8];
  undefined8 local_138;
  long local_130;
  undefined8 local_128;
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
    (**(code **)(*plVar4 + 0x60))(local_58,plVar4,this + 0x348,&local_80,1,&local_f8);
    if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((int)local_f8 == 0) {
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_001059ef;
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(this + 8) != 0) && (this[0x350] == (VideoStreamPlayback)0x0)) {
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
    String::parse_latin1((String *)&local_f8,"_update");
    local_c0 = CONCAT44(local_c0._4_4_,0x88);
    GetTypeInfo<double,void>::get_class_info((GetTypeInfo<double,void> *)&local_128);
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)local_b8,(PropertyInfo *)&local_128);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_128);
    Vector<int>::push_back(local_98,10);
    uVar1 = MethodInfo::get_compatibility_hash();
    lVar3 = *(long *)(this + 8);
    *(undefined8 *)(this + 0x358) = 0;
    pcVar5 = *(code **)(lVar3 + 0xd8);
    if (((pcVar5 == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
       (pcVar5 = *(code **)(lVar3 + 0xd0), pcVar5 == (code *)0x0)) {
      local_138 = 0;
      String::parse_latin1((String *)&local_138,"VideoStreamPlayback");
      StringName::StringName((StringName *)&local_130,(String *)&local_138,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)&local_128,(StringName *)&local_130);
      if (local_120[0] == 0) {
        lVar3 = 0;
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_120);
        if (StringName::configured != '\0') goto LAB_00105ea5;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
      }
      else {
        lVar3 = *(long *)(local_120[0] + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_120);
        if (StringName::configured != '\0') {
LAB_00105ea5:
          if (local_130 != 0) {
            StringName::unref();
          }
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
        if (lVar3 != 0) {
          lVar3 = *(long *)(this + 8);
          goto LAB_00105d68;
        }
      }
      lVar3 = *(long *)(this + 8);
      pcVar5 = *(code **)(lVar3 + 200);
      if (((pcVar5 != (code *)0x0) && (*(long *)(lVar3 + 0xe0) != 0)) ||
         (pcVar5 = *(code **)(lVar3 + 0xc0), pcVar5 != (code *)0x0)) {
        uVar2 = (*pcVar5)(*(undefined8 *)(lVar3 + 0xa0),this + 0x348);
        *(undefined8 *)(this + 0x358) = uVar2;
        lVar3 = *(long *)(this + 8);
      }
    }
    else {
      uVar2 = (*pcVar5)(*(undefined8 *)(lVar3 + 0xa0),this + 0x348,uVar1);
      *(undefined8 *)(this + 0x358) = uVar2;
      lVar3 = *(long *)(this + 8);
    }
LAB_00105d68:
    if (*(char *)(lVar3 + 0x29) != '\0') {
      plVar4 = (long *)operator_new(0x18,"");
      *plVar4 = (long)(this + 0x358);
      plVar4[1] = (long)(this + 0x350);
      plVar4[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar4;
    }
    this[0x350] = (VideoStreamPlayback)0x1;
    MethodInfo::~MethodInfo((MethodInfo *)&local_f8);
  }
  pcVar5 = *(code **)(this + 0x358);
  if (pcVar5 != (code *)0x0) {
    local_58[0] = &local_f8;
    local_f8 = param_1;
    if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
      (*pcVar5)(*(undefined8 *)(this + 0x10),local_58,0);
    }
    else {
      (**(code **)(*(long *)(this + 8) + 0xe0))
                (*(undefined8 *)(this + 0x10),this + 0x348,pcVar5,local_58,0);
    }
    goto LAB_001059ef;
  }
  if (_gdvirtual__update_call(double)::first_print == '\0') goto LAB_001059ef;
  local_128 = 0;
  local_f8._0_4_ = 0x107330;
  local_f8._4_4_ = 0;
  uStack_f0 = 0x23;
  uStack_ec = 0;
  String::parse_latin1((StrRange *)&local_128);
  local_f8._0_4_ = 0x107149;
  local_f8._4_4_ = 0;
  local_138 = 0;
  uStack_f0 = 7;
  uStack_ec = 0;
  String::parse_latin1((StrRange *)&local_138);
  local_148 = 0;
  local_f8._0_4_ = 0x10722c;
  local_f8._4_4_ = 0;
  uStack_f0 = 2;
  uStack_ec = 0;
  String::parse_latin1((StrRange *)&local_148);
  if (*(code **)(*(long *)this + 0x48) == get_class) {
    if (*(long *)(this + 8) == 0) {
      pcVar6 = "VideoStreamPlayback";
LAB_00105b0e:
      local_158 = 0;
      String::parse_latin1((String *)&local_158,pcVar6);
    }
    else {
      lVar3 = *(long *)(*(long *)(this + 8) + 0x20);
      if (lVar3 == 0) {
        local_158 = 0;
      }
      else {
        pcVar6 = *(char **)(lVar3 + 8);
        local_158 = 0;
        if (pcVar6 != (char *)0x0) goto LAB_00105b0e;
        if (*(long *)(lVar3 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_158,(CowData *)(lVar3 + 0x10));
        }
      }
    }
  }
  else {
    (**(code **)(*(long *)this + 0x48))(&local_158,this);
  }
  local_160 = (CowData<char32_t> *)&local_158;
  operator+((char *)local_150,(String *)"Required virtual method ");
  String::operator+(local_140,(String *)local_150);
  String::operator+((String *)&local_130,local_140);
  String::operator+((String *)&local_f8,(String *)&local_130);
  _err_print_error("_gdvirtual__update_call","scene/resources/video_stream.h",0x3a,
                   (String *)&local_f8,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_130);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_140);
  CowData<char32_t>::_unref(local_150);
  CowData<char32_t>::_unref(local_160);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
  _gdvirtual__update_call(double)::first_print = '\0';
LAB_001059ef:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* VideoStreamPlayback::set_audio_track(int) */

void __thiscall VideoStreamPlayback::set_audio_track(VideoStreamPlayback *this,int param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  long in_FS_OFFSET;
  undefined8 local_138;
  long local_130;
  GetTypeInfo<int,void> local_128 [8];
  long local_120 [5];
  int local_f8;
  int iStack_f4;
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
  int *local_58 [3];
  long local_40;
  
  plVar4 = *(long **)(this + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar4 != (long *)0x0) {
    local_f8 = 0;
    iStack_f4 = 0;
    uStack_f0 = 0;
    Variant::Variant((Variant *)local_78,param_1);
    local_80 = (Variant *)local_78;
    (**(code **)(*plVar4 + 0x60))(local_58,plVar4,this + 0x318,&local_80,1,&local_f8);
    if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (local_f8 == 0) {
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_001060e9;
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(this + 8) != 0) && (this[800] == (VideoStreamPlayback)0x0)) {
    local_f8 = 0;
    iStack_f4 = 0;
    local_e8 = (undefined1  [16])0x0;
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
    String::parse_latin1((String *)&local_f8,"_set_audio_track");
    local_c0 = CONCAT44(local_c0._4_4_,8);
    GetTypeInfo<int,void>::get_class_info(local_128);
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)local_b8,(PropertyInfo *)local_128);
    PropertyInfo::~PropertyInfo((PropertyInfo *)local_128);
    Vector<int>::push_back(local_98,3);
    uVar1 = MethodInfo::get_compatibility_hash();
    lVar3 = *(long *)(this + 8);
    *(undefined8 *)(this + 0x328) = 0;
    pcVar5 = *(code **)(lVar3 + 0xd8);
    if (((pcVar5 == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
       (pcVar5 = *(code **)(lVar3 + 0xd0), pcVar5 == (code *)0x0)) {
      local_138 = 0;
      String::parse_latin1((String *)&local_138,"VideoStreamPlayback");
      StringName::StringName((StringName *)&local_130,(String *)&local_138,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)local_128,(StringName *)&local_130);
      if (local_120[0] == 0) {
        lVar3 = 0;
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_120);
        if (StringName::configured != '\0') goto LAB_00106317;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
LAB_00106334:
        lVar3 = *(long *)(this + 8);
        pcVar5 = *(code **)(lVar3 + 200);
        if (((pcVar5 == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
           (pcVar5 = *(code **)(lVar3 + 0xc0), pcVar5 == (code *)0x0)) goto LAB_00106272;
        uVar2 = (*pcVar5)(*(undefined8 *)(lVar3 + 0xa0),this + 0x318);
        *(undefined8 *)(this + 0x328) = uVar2;
      }
      else {
        lVar3 = *(long *)(local_120[0] + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_120);
        if (StringName::configured != '\0') {
LAB_00106317:
          if (local_130 != 0) {
            StringName::unref();
          }
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
        if (lVar3 == 0) goto LAB_00106334;
      }
      lVar3 = *(long *)(this + 8);
    }
    else {
      uVar2 = (*pcVar5)(*(undefined8 *)(lVar3 + 0xa0),this + 0x318,uVar1);
      *(undefined8 *)(this + 0x328) = uVar2;
      lVar3 = *(long *)(this + 8);
    }
LAB_00106272:
    if (*(char *)(lVar3 + 0x29) != '\0') {
      plVar4 = (long *)operator_new(0x18,"");
      *plVar4 = (long)(this + 0x328);
      plVar4[1] = (long)(this + 800);
      plVar4[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar4;
    }
    this[800] = (VideoStreamPlayback)0x1;
    MethodInfo::~MethodInfo((MethodInfo *)&local_f8);
  }
  pcVar5 = *(code **)(this + 0x328);
  if (pcVar5 != (code *)0x0) {
    local_58[0] = &local_f8;
    iStack_f4 = param_1 >> 0x1f;
    local_f8 = param_1;
    if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
      (*pcVar5)(*(undefined8 *)(this + 0x10),local_58,0);
    }
    else {
      (**(code **)(*(long *)(this + 8) + 0xe0))
                (*(undefined8 *)(this + 0x10),this + 0x318,pcVar5,local_58,0);
    }
  }
LAB_001060e9:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* VideoStreamPlayback::seek(double) */

void __thiscall VideoStreamPlayback::seek(VideoStreamPlayback *this,double param_1)

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
    (**(code **)(*plVar4 + 0x60))(local_58,plVar4,this + 0x300,&local_80,1,&local_f8);
    if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((int)local_f8 == 0) {
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_00106520;
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(this + 8) != 0) && (this[0x308] == (VideoStreamPlayback)0x0)) {
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
    *(undefined8 *)(this + 0x310) = 0;
    pcVar5 = *(code **)(lVar3 + 0xd8);
    if (((pcVar5 == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
       (pcVar5 = *(code **)(lVar3 + 0xd0), pcVar5 == (code *)0x0)) {
      local_138 = 0;
      String::parse_latin1((String *)&local_138,"VideoStreamPlayback");
      StringName::StringName((StringName *)&local_130,(String *)&local_138,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)local_128,(StringName *)&local_130);
      if (local_120[0] == 0) {
        lVar3 = 0;
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_120);
        if (StringName::configured != '\0') goto LAB_00106796;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
      }
      else {
        lVar3 = *(long *)(local_120[0] + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_120);
        if (StringName::configured != '\0') {
LAB_00106796:
          if (local_130 != 0) {
            StringName::unref();
          }
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
        if (lVar3 != 0) {
          lVar3 = *(long *)(this + 8);
          goto LAB_001066ca;
        }
      }
      lVar3 = *(long *)(this + 8);
      pcVar5 = *(code **)(lVar3 + 200);
      if (((pcVar5 != (code *)0x0) && (*(long *)(lVar3 + 0xe0) != 0)) ||
         (pcVar5 = *(code **)(lVar3 + 0xc0), pcVar5 != (code *)0x0)) {
        uVar2 = (*pcVar5)(*(undefined8 *)(lVar3 + 0xa0),this + 0x300);
        *(undefined8 *)(this + 0x310) = uVar2;
        lVar3 = *(long *)(this + 8);
      }
    }
    else {
      uVar2 = (*pcVar5)(*(undefined8 *)(lVar3 + 0xa0),this + 0x300,uVar1);
      *(undefined8 *)(this + 0x310) = uVar2;
      lVar3 = *(long *)(this + 8);
    }
LAB_001066ca:
    if (*(char *)(lVar3 + 0x29) != '\0') {
      plVar4 = (long *)operator_new(0x18,"");
      *plVar4 = (long)(this + 0x310);
      plVar4[1] = (long)(this + 0x308);
      plVar4[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar4;
    }
    this[0x308] = (VideoStreamPlayback)0x1;
    MethodInfo::~MethodInfo((MethodInfo *)&local_f8);
  }
  pcVar5 = *(code **)(this + 0x310);
  if (pcVar5 != (code *)0x0) {
    local_58[0] = &local_f8;
    local_f8 = param_1;
    if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
      (*pcVar5)(*(undefined8 *)(this + 0x10),local_58,0);
    }
    else {
      (**(code **)(*(long *)(this + 8) + 0xe0))
                (*(undefined8 *)(this + 0x10),this + 0x300,pcVar5,local_58,0);
    }
  }
LAB_00106520:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* VideoStreamPlayback::set_paused(bool) */

void __thiscall VideoStreamPlayback::set_paused(VideoStreamPlayback *this,bool param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  long in_FS_OFFSET;
  undefined8 local_138;
  long local_130;
  GetTypeInfo<bool,void> local_128 [8];
  long local_120 [5];
  int local_f8 [4];
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
  int *local_58 [3];
  long local_40;
  
  plVar4 = *(long **)(this + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar4 != (long *)0x0) {
    local_f8[0] = 0;
    local_f8[1] = 0;
    local_f8[2] = 0;
    Variant::Variant((Variant *)local_78,param_1);
    local_80 = (Variant *)local_78;
    (**(code **)(*plVar4 + 0x60))(local_58,plVar4,this + 0x2a0,&local_80,1,local_f8);
    if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (local_f8[0] == 0) {
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_001069ea;
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(this + 8) != 0) && (this[0x2a8] == (VideoStreamPlayback)0x0)) {
    local_f8[0] = 0;
    local_f8[1] = 0;
    local_e8 = (undefined1  [16])0x0;
    local_f8[2] = 0;
    local_f8[3] = 0;
    local_d8 = 0;
    local_d0 = 0;
    local_c8 = 6;
    local_c0 = 1;
    local_b8[0] = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_90 = 0;
    String::parse_latin1((String *)local_f8,"_set_paused");
    local_c0 = CONCAT44(local_c0._4_4_,8);
    GetTypeInfo<bool,void>::get_class_info(local_128);
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)local_b8,(PropertyInfo *)local_128);
    PropertyInfo::~PropertyInfo((PropertyInfo *)local_128);
    Vector<int>::push_back(local_98,0);
    uVar1 = MethodInfo::get_compatibility_hash();
    lVar3 = *(long *)(this + 8);
    *(undefined8 *)(this + 0x2b0) = 0;
    pcVar5 = *(code **)(lVar3 + 0xd8);
    if (((pcVar5 == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
       (pcVar5 = *(code **)(lVar3 + 0xd0), pcVar5 == (code *)0x0)) {
      local_138 = 0;
      String::parse_latin1((String *)&local_138,"VideoStreamPlayback");
      StringName::StringName((StringName *)&local_130,(String *)&local_138,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)local_128,(StringName *)&local_130);
      if (local_120[0] == 0) {
        lVar3 = 0;
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_120);
        if (StringName::configured != '\0') goto LAB_00106c17;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
LAB_00106c34:
        lVar3 = *(long *)(this + 8);
        pcVar5 = *(code **)(lVar3 + 200);
        if (((pcVar5 == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
           (pcVar5 = *(code **)(lVar3 + 0xc0), pcVar5 == (code *)0x0)) goto LAB_00106b6f;
        uVar2 = (*pcVar5)(*(undefined8 *)(lVar3 + 0xa0),this + 0x2a0);
        *(undefined8 *)(this + 0x2b0) = uVar2;
      }
      else {
        lVar3 = *(long *)(local_120[0] + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_120);
        if (StringName::configured != '\0') {
LAB_00106c17:
          if (local_130 != 0) {
            StringName::unref();
          }
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
        if (lVar3 == 0) goto LAB_00106c34;
      }
      lVar3 = *(long *)(this + 8);
    }
    else {
      uVar2 = (*pcVar5)(*(undefined8 *)(lVar3 + 0xa0),this + 0x2a0,uVar1);
      *(undefined8 *)(this + 0x2b0) = uVar2;
      lVar3 = *(long *)(this + 8);
    }
LAB_00106b6f:
    if (*(char *)(lVar3 + 0x29) != '\0') {
      plVar4 = (long *)operator_new(0x18,"");
      *plVar4 = (long)(this + 0x2b0);
      plVar4[1] = (long)(this + 0x2a8);
      plVar4[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar4;
    }
    this[0x2a8] = (VideoStreamPlayback)0x1;
    MethodInfo::~MethodInfo((MethodInfo *)local_f8);
  }
  pcVar5 = *(code **)(this + 0x2b0);
  if (pcVar5 != (code *)0x0) {
    local_58[0] = local_f8;
    local_f8[0] = CONCAT31(local_f8[0]._1_3_,param_1);
    if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
      (*pcVar5)(*(undefined8 *)(this + 0x10),local_58,0);
    }
    else {
      (**(code **)(*(long *)(this + 8) + 0xe0))
                (*(undefined8 *)(this + 0x10),this + 0x2a0,pcVar5,local_58,0);
    }
  }
LAB_001069ea:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
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



/* VideoStreamPlayback::is_class_ptr(void*) const */

uint __thiscall VideoStreamPlayback::is_class_ptr(VideoStreamPlayback *this,void *param_1)

{
  return (uint)CONCAT71(0x10d5,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10d5,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10d5,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10d5,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* VideoStreamPlayback::_getv(StringName const&, Variant&) const */

undefined8 VideoStreamPlayback::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* VideoStreamPlayback::_setv(StringName const&, Variant const&) */

undefined8 VideoStreamPlayback::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* VideoStreamPlayback::_validate_propertyv(PropertyInfo&) const */

void VideoStreamPlayback::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* VideoStreamPlayback::_property_can_revertv(StringName const&) const */

undefined8 VideoStreamPlayback::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* VideoStreamPlayback::_property_get_revertv(StringName const&, Variant&) const */

undefined8 VideoStreamPlayback::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* VideoStreamPlayback::_notificationv(int, bool) */

void VideoStreamPlayback::_notificationv(int param_1,bool param_2)

{
  return;
}



/* VideoStream::is_class_ptr(void*) const */

uint __thiscall VideoStream::is_class_ptr(VideoStream *this,void *param_1)

{
  return (uint)CONCAT71(0x10d5,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10d5,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10d5,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10d5,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* VideoStream::_getv(StringName const&, Variant&) const */

undefined8 VideoStream::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* VideoStream::_setv(StringName const&, Variant const&) */

undefined8 VideoStream::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* VideoStream::_validate_propertyv(PropertyInfo&) const */

void VideoStream::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* VideoStream::_property_can_revertv(StringName const&) const */

undefined8 VideoStream::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* VideoStream::_property_get_revertv(StringName const&, Variant&) const */

undefined8 VideoStream::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* VideoStream::_notificationv(int, bool) */

void VideoStream::_notificationv(int param_1,bool param_2)

{
  return;
}



/* MethodBindTR<String>::_gen_argument_type(int) const */

undefined8 MethodBindTR<String>::_gen_argument_type(int param_1)

{
  return 4;
}



/* MethodBindTR<String>::get_argument_meta(int) const */

undefined8 MethodBindTR<String>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<String const&>::_gen_argument_type(int) const */

long __thiscall
MethodBindT<String_const&>::_gen_argument_type(MethodBindT<String_const&> *this,int param_1)

{
  return (ulong)(param_1 == 0) << 2;
}



/* MethodBindT<String const&>::get_argument_meta(int) const */

undefined8 MethodBindT<String_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTR<int, int, Vector<float>, int>::_gen_argument_type(int) const */

undefined8 __thiscall
MethodBindTR<int,int,Vector<float>,int>::_gen_argument_type
          (MethodBindTR<int,int,Vector<float>,int> *this,int param_1)

{
  undefined8 uVar1;
  
  uVar1 = 2;
  if (param_1 == 1) {
    uVar1 = 0x20;
  }
  return uVar1;
}



/* MethodBindTR<int, int, Vector<float>, int>::get_argument_meta(int) const */

char __thiscall
MethodBindTR<int,int,Vector<float>,int>::get_argument_meta
          (MethodBindTR<int,int,Vector<float>,int> *this,int param_1)

{
  if (0 < param_1) {
    return (param_1 == 2) * '\x03';
  }
  return '\x03';
}



/* MethodBindTR<int, int, Vector<float>, int>::~MethodBindTR() */

void __thiscall
MethodBindTR<int,int,Vector<float>,int>::~MethodBindTR
          (MethodBindTR<int,int,Vector<float>,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010d458;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<int, int, Vector<float>, int>::~MethodBindTR() */

void __thiscall
MethodBindTR<int,int,Vector<float>,int>::~MethodBindTR
          (MethodBindTR<int,int,Vector<float>,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010d458;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<String const&>::~MethodBindT() */

void __thiscall MethodBindT<String_const&>::~MethodBindT(MethodBindT<String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010d4b8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<String const&>::~MethodBindT() */

void __thiscall MethodBindT<String_const&>::~MethodBindT(MethodBindT<String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010d4b8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<String>::~MethodBindTR() */

void __thiscall MethodBindTR<String>::~MethodBindTR(MethodBindTR<String> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010d518;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<String>::~MethodBindTR() */

void __thiscall MethodBindTR<String>::~MethodBindTR(MethodBindTR<String> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010d518;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* CowData<int>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<int>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* VideoStream::_bind_methods() [clone .cold] */

void VideoStream::_bind_methods(void)

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



/* VideoStreamPlayback::_bind_methods() [clone .cold] */

void VideoStreamPlayback::_bind_methods(void)

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



/* VideoStream::get_save_class() const */

VideoStream * __thiscall VideoStream::get_save_class(VideoStream *this)

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



/* VideoStreamPlayback::_get_class_namev() const */

undefined8 * VideoStreamPlayback::_get_class_namev(void)

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
LAB_001074d3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001074d3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"VideoStreamPlayback");
      goto LAB_0010753e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"VideoStreamPlayback");
LAB_0010753e:
  return &_get_class_namev()::_class_name_static;
}



/* VideoStream::_get_class_namev() const */

undefined8 * VideoStream::_get_class_namev(void)

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
LAB_001075b3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001075b3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"VideoStream");
      goto LAB_0010761e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"VideoStream");
LAB_0010761e:
  return &_get_class_namev()::_class_name_static;
}



/* VideoStream::get_class() const */

void VideoStream::get_class(void)

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



/* VideoStreamPlayback::get_class() const */

void VideoStreamPlayback::get_class(void)

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



/* MethodBindTR<String>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTR<String>::_gen_argument_type_info(int param_1)

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
  local_48 = &_LC3;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 4;
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
      goto joined_r0x0010793c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010793c:
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
  local_48 = &_LC3;
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
      goto joined_r0x00107b9c;
    }
  }
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x00107b9c:
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
  local_48 = &_LC3;
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
      goto joined_r0x00107d1c;
    }
  }
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x00107d1c:
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
  local_48 = &_LC3;
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
      goto joined_r0x00107e9c;
    }
  }
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x00107e9c:
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



/* GetTypeInfo<Ref<Texture2D>, void>::get_class_info() */

GetTypeInfo<Ref<Texture2D>,void> * __thiscall
GetTypeInfo<Ref<Texture2D>,void>::get_class_info(GetTypeInfo<Ref<Texture2D>,void> *this)

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
  local_48 = "Texture2D";
  local_40 = 9;
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
      goto LAB_00107fa0;
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
LAB_00107fa0:
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



/* GetTypeInfo<Ref<VideoStreamPlayback>, void>::get_class_info() */

GetTypeInfo<Ref<VideoStreamPlayback>,void> * __thiscall
GetTypeInfo<Ref<VideoStreamPlayback>,void>::get_class_info
          (GetTypeInfo<Ref<VideoStreamPlayback>,void> *this)

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
  local_48 = "VideoStreamPlayback";
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
      goto LAB_00108130;
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
LAB_00108130:
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



/* Resource::is_class(String const&) const */

undefined8 __thiscall Resource::is_class(Resource *this,String *param_1)

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
            if (lVar3 == 0) goto LAB_001082df;
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
LAB_001082df:
    cVar6 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar6 != '\0') goto LAB_00108393;
  }
  cVar6 = String::operator==(param_1,"Resource");
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
      cVar6 = String::operator==(param_1,(String *)&local_60);
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
      if (cVar6 != '\0') goto LAB_00108393;
    }
    cVar6 = String::operator==(param_1,"RefCounted");
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
        cVar6 = String::operator==(param_1,(String *)&local_60);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        if (cVar6 != '\0') goto LAB_00108393;
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar8 = String::operator==(param_1,"Object");
        return uVar8;
      }
      goto LAB_00108575;
    }
  }
LAB_00108393:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00108575:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VideoStream::is_class(String const&) const */

undefined8 __thiscall VideoStream::is_class(VideoStream *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_001085ef;
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
LAB_001085ef:
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
    if (cVar5 != '\0') goto LAB_001086a3;
  }
  cVar5 = String::operator==(param_1,"VideoStream");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = Resource::is_class((Resource *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_001086a3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VideoStreamPlayback::is_class(String const&) const */

undefined8 __thiscall VideoStreamPlayback::is_class(VideoStreamPlayback *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_0010876f;
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
LAB_0010876f:
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
    if (cVar5 != '\0') goto LAB_00108823;
  }
  cVar5 = String::operator==(param_1,"VideoStreamPlayback");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = Resource::is_class((Resource *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_00108823:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
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
  if (*(long *)(this + 0x28) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x28) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(this + 0x28);
      *(undefined8 *)(this + 0x28) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
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
  if (*(long *)this != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)this + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
      return;
    }
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
LAB_00108d5d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00108d5d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar5;
      local_68 = local_80;
      goto joined_r0x00108d7f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar5;
joined_r0x00108d7f:
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
LAB_001090dd:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001090dd;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x001090ff;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x001090ff:
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



/* VideoStream::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall VideoStream::_get_property_listv(VideoStream *this,List *param_1,bool param_2)

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
  local_78 = "VideoStream";
  local_70 = 0xb;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "VideoStream";
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
LAB_001094bd:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001094bd;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x001094df;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x001094df:
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
  StringName::StringName((StringName *)&local_78,"VideoStream",false);
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



/* VideoStreamPlayback::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
VideoStreamPlayback::_get_property_listv(VideoStreamPlayback *this,List *param_1,bool param_2)

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
  local_78 = "VideoStreamPlayback";
  local_70 = 0x13;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "VideoStreamPlayback";
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
LAB_0010989d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0010989d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x001098bf;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x001098bf:
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
  StringName::StringName((StringName *)&local_78,"VideoStreamPlayback",false);
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



/* MethodBindT<String const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<String_const&>::_gen_argument_type_info(int param_1)

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
  if (in_EDX != 0) goto LAB_00109b2b;
  local_78 = 0;
  local_80 = 0;
  local_68 = &_LC3;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,4);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00109c20:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00109c20;
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
LAB_00109b2b:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
}



/* MethodBind* create_method_bind<VideoStreamPlayback, int, int, Vector<float>, int>(int
   (VideoStreamPlayback::*)(int, Vector<float>, int)) */

MethodBind *
create_method_bind<VideoStreamPlayback,int,int,Vector<float>,int>(_func_int_int_Vector_int *param_1)

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
  *(_func_int_int_Vector_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010d458;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 3;
  local_40 = 0;
  local_38 = "VideoStreamPlayback";
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



/* MethodBind* create_method_bind<VideoStream, String const&>(void (VideoStream::*)(String const&))
    */

MethodBind * create_method_bind<VideoStream,String_const&>(_func_void_String_ptr *param_1)

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
  *(_func_void_String_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010d4b8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "VideoStream";
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



/* MethodBind* create_method_bind<VideoStream, String>(String (VideoStream::*)()) */

MethodBind * create_method_bind<VideoStream,String>(_func_String *param_1)

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
  *(_func_String **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010d518;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "VideoStream";
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



/* VideoStream::_initialize_classv() */

void VideoStream::_initialize_classv(void)

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
    local_58 = "VideoStream";
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
LAB_0010a830:
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
  if (lVar10 == 0) goto LAB_0010a830;
  if (param_1 <= lVar6) {
    lVar6 = *(long *)this;
    uVar8 = param_1;
    while (lVar6 != 0) {
      if (*(ulong *)(lVar6 + -8) <= uVar8) {
LAB_0010a709:
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
        if (*(ulong *)(lVar6 + -8) <= uVar8) goto LAB_0010a709;
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
    goto LAB_0010a886;
  }
  if (lVar10 == lVar7) {
LAB_0010a7af:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
LAB_0010a886:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar6 = puVar9[-1];
    if (param_1 <= lVar6) goto LAB_0010a79a;
  }
  else {
    if (lVar6 != 0) {
      uVar4 = _realloc(this,lVar10);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      goto LAB_0010a7af;
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
LAB_0010a79a:
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
LAB_0010ab50:
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
  if (lVar8 == 0) goto LAB_0010ab50;
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
        goto LAB_0010aa61;
      }
      uVar6 = _realloc(this,lVar8);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
    }
    puVar7 = *(undefined8 **)this;
    if (puVar7 != (undefined8 *)0x0) {
LAB_0010aa61:
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



/* VideoStreamPlayback::_initialize_classv() */

void VideoStreamPlayback::_initialize_classv(void)

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
    local_58 = "VideoStreamPlayback";
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
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x0010b078) */
/* WARNING: Removing unreachable block (ram,0x0010b20d) */
/* WARNING: Removing unreachable block (ram,0x0010b219) */
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



/* MethodBindTR<String>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTR<String>::call
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
      _err_print_error(&_LC78,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010b420;
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
      (*(code *)pVVar2)((CowData<char32_t> *)&local_58);
      Variant::Variant((Variant *)local_48,(String *)&local_58);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
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
LAB_0010b420:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<String>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTR<String>::validated_call
          (MethodBindTR<String> *this,Object *param_1,Variant **param_2,Variant *param_3)

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
      local_48 = (Variant **)0x10b268;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((CowData<char32_t> *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(CowData<char32_t> *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010b6ec;
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
  (*pcVar1)((CowData<char32_t> *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  if (*(Variant ***)(param_3 + 8) != local_48) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(param_3 + 8),(CowData *)&local_48);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
LAB_0010b6ec:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<String>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<String>::ptrcall
          (MethodBindTR<String> *this,Object *param_1,void **param_2,void *param_3)

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
      local_48 = (void **)0x10b268;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((CowData<char32_t> *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(CowData<char32_t> *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010b8bd;
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
  (*pcVar1)((CowData<char32_t> *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
                    /* WARNING: Load size is inaccurate */
  if (*param_3 != local_48) {
    CowData<char32_t>::_ref((CowData<char32_t> *)param_3,(CowData *)&local_48);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
LAB_0010b8bd:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<String_const&>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

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
      goto LAB_0010bbf1;
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
                    /* WARNING: Could not recover jumptable at 0x0010ba7d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8);
    return;
  }
LAB_0010bbf1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<String_const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_0010bdd1;
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
                    /* WARNING: Could not recover jumptable at 0x0010bc59. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3);
    return;
  }
LAB_0010bdd1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<int, int, Vector<float>, int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<int,int,Vector<float>,int>::ptrcall
          (MethodBindTR<int,int,Vector<float>,int> *this,Object *param_1,void **param_2,
          void *param_3)

{
  undefined4 uVar1;
  long lVar2;
  void *pvVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  code *pcVar8;
  long in_FS_OFFSET;
  bool bVar9;
  long local_58;
  undefined8 local_50;
  char *local_48;
  long local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar7 = *(long **)(param_1 + 0x118);
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar7 = (long *)(*(long *)(param_1 + 8) + 0x20);
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
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010beb2;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar8 = *(code **)(this + 0x58);
  lVar2 = *(long *)(this + 0x60);
  if (((ulong)pcVar8 & 1) != 0) {
    pcVar8 = *(code **)(pcVar8 + *(long *)(param_1 + lVar2) + -1);
  }
  pvVar3 = param_2[1];
                    /* WARNING: Load size is inaccurate */
  uVar1 = *param_2[2];
  local_40 = 0;
  lVar4 = *(long *)((long)pvVar3 + 8);
  plVar7 = (long *)(lVar4 + -0x10);
  if (lVar4 != 0) {
    do {
      lVar4 = *plVar7;
      if (lVar4 == 0) goto LAB_0010be73;
      LOCK();
      lVar6 = *plVar7;
      bVar9 = lVar4 == lVar6;
      if (bVar9) {
        *plVar7 = lVar4 + 1;
        lVar6 = lVar4;
      }
      UNLOCK();
    } while (!bVar9);
    if (lVar6 != -1) {
      local_40 = *(long *)((long)pvVar3 + 8);
    }
  }
LAB_0010be73:
                    /* WARNING: Load size is inaccurate */
  iVar5 = (*pcVar8)(param_1 + lVar2,**param_2,(StringName *)&local_48,uVar1);
  lVar2 = local_40;
  *(long *)param_3 = (long)iVar5;
  if (local_40 != 0) {
    LOCK();
    plVar7 = (long *)(local_40 + -0x10);
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
LAB_0010beb2:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindTR<int, int, Vector<float>, int>::validated_call(Object*, Variant const**, Variant*)
   const */

void __thiscall
MethodBindTR<int,int,Vector<float>,int>::validated_call
          (MethodBindTR<int,int,Vector<float>,int> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  code *pcVar8;
  long in_FS_OFFSET;
  bool bVar9;
  long local_58;
  undefined8 local_50;
  char *local_48;
  long local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar7 = *(long **)(param_1 + 0x118);
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar7 = (long *)(*(long *)(param_1 + 8) + 0x20);
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
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010c118;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar8 = *(code **)(this + 0x58);
  lVar2 = *(long *)(this + 0x60);
  if (((ulong)pcVar8 & 1) != 0) {
    pcVar8 = *(code **)(pcVar8 + *(long *)(param_1 + lVar2) + -1);
  }
  uVar1 = *(undefined4 *)(param_2[2] + 8);
  lVar3 = *(long *)(param_2[1] + 8);
  local_40 = 0;
  lVar4 = *(long *)(lVar3 + 0x18);
  plVar7 = (long *)(lVar4 + -0x10);
  if (lVar4 != 0) {
    do {
      lVar4 = *plVar7;
      if (lVar4 == 0) goto LAB_0010c0d8;
      LOCK();
      lVar6 = *plVar7;
      bVar9 = lVar4 == lVar6;
      if (bVar9) {
        *plVar7 = lVar4 + 1;
        lVar6 = lVar4;
      }
      UNLOCK();
    } while (!bVar9);
    if (lVar6 != -1) {
      local_40 = *(long *)(lVar3 + 0x18);
    }
  }
LAB_0010c0d8:
  iVar5 = (*pcVar8)(param_1 + lVar2,*(undefined4 *)(*param_2 + 8),(StringName *)&local_48,uVar1);
  lVar2 = local_40;
  *(long *)(param_3 + 8) = (long)iVar5;
  if (local_40 != 0) {
    LOCK();
    plVar7 = (long *)(local_40 + -0x10);
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
LAB_0010c118:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindT<String const&>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<String_const&>::call
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
      _err_print_error(&_LC78,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010c450;
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
      if (in_R8D != 1) goto LAB_0010c4a0;
LAB_0010c490:
      pVVar10 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar10 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0010c4a0:
        uVar6 = 4;
        goto LAB_0010c445;
      }
      if (in_R8D == 1) goto LAB_0010c490;
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
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar10,4);
    uVar4 = _LC84;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_String((Variant *)&local_48);
    (*(code *)pVVar11)((Variant *)((long)plVar9 + (long)pVVar1),(Variant *)&local_48);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  }
  else {
    uVar6 = 3;
LAB_0010c445:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_0010c450:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<int, int, Vector<float>, int>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTR<int,int,Vector<float>,int>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  uint uVar11;
  Variant *pVVar12;
  undefined4 in_register_00000014;
  long *plVar13;
  long lVar14;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar15;
  long in_FS_OFFSET;
  long local_98;
  undefined8 local_90;
  char *local_88;
  long local_80;
  Variant *local_78 [4];
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  plVar13 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar13 != (long *)0x0) && (plVar13[1] != 0)) && (*(char *)(plVar13[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_88,(StringName *)(param_2 + 3));
    if (plVar13[1] == 0) {
      plVar10 = (long *)plVar13[0x23];
      if (plVar10 == (long *)0x0) {
        plVar10 = (long *)(**(code **)(*plVar13 + 0x40))();
      }
    }
    else {
      plVar10 = (long *)(plVar13[1] + 0x20);
    }
    if (local_88 == (char *)*plVar10) {
      if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_88 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_90 = 0;
      local_80 = 0x35;
      String::parse_latin1((StrRange *)&local_90);
      vformat<StringName>((StringName *)&local_88,(StrRange *)&local_90,&local_98);
      _err_print_error(&_LC78,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_88,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      if ((StringName::configured != '\0') && (local_98 != 0)) {
        StringName::unref();
      }
      goto LAB_0010c852;
    }
    if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar15 = param_2[0xb];
  pVVar1 = param_2[0xc];
  uVar6 = 3;
  if (in_R8D < 4) {
    pVVar2 = param_2[5];
    if (pVVar2 == (Variant *)0x0) {
      iVar7 = 0;
      lVar14 = 0;
    }
    else {
      lVar14 = *(long *)(pVVar2 + -8);
      iVar7 = (int)lVar14;
    }
    if ((int)(3 - in_R8D) <= iVar7) {
      lVar9 = 0;
      do {
        if ((int)lVar9 < (int)in_R8D) {
          pVVar12 = *(Variant **)(param_4 + lVar9 * 8);
        }
        else {
          uVar11 = iVar7 + -3 + (int)lVar9;
          if (lVar14 <= (int)uVar11) {
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,(long)(int)uVar11,lVar14,"p_index",
                       "size()","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          pVVar12 = pVVar2 + (ulong)uVar11 * 0x18;
        }
        local_78[lVar9] = pVVar12;
        lVar9 = lVar9 + 1;
      } while (lVar9 != 3);
      *in_R9 = 0;
      if (((ulong)pVVar15 & 1) != 0) {
        pVVar15 = *(Variant **)(pVVar15 + *(long *)((long)plVar13 + (long)pVVar1) + -1);
      }
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_78[2],2);
      uVar4 = _LC86;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      iVar7 = Variant::operator_cast_to_int(local_78[2]);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_78[1],0x20);
      uVar4 = _LC87;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      Variant::operator_cast_to_Vector((Variant *)&local_88);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_78[0],2);
      uVar4 = _LC88;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      iVar8 = Variant::operator_cast_to_int(local_78[0]);
      iVar7 = (*(code *)pVVar15)((Variant *)((long)plVar13 + (long)pVVar1),iVar8,
                                 (Variant *)&local_88,iVar7);
      Variant::Variant((Variant *)local_58,iVar7);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      lVar14 = local_80;
      *(undefined4 *)param_1 = local_58[0];
      *(undefined8 *)(param_1 + 8) = local_50;
      *(undefined8 *)(param_1 + 0x10) = uStack_48;
      if (local_80 != 0) {
        LOCK();
        plVar13 = (long *)(local_80 + -0x10);
        *plVar13 = *plVar13 + -1;
        UNLOCK();
        if (*plVar13 == 0) {
          local_80 = 0;
          Memory::free_static((void *)(lVar14 + -0x10),false);
        }
      }
      goto LAB_0010c852;
    }
    uVar6 = 4;
  }
  *in_R9 = uVar6;
  in_R9[2] = 3;
LAB_0010c852:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info<int, Vector<float>, int>(int, PropertyInfo&) */

void call_get_argument_type_info<int,Vector<float>,int>(int param_1,PropertyInfo *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
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
  if (param_1 == 0) {
    GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)&local_68);
    PropertyInfo::operator=(param_2,(PropertyInfo *)&local_68);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
    goto LAB_0010cad9;
  }
  if (param_1 == 1) {
    local_78 = 0;
    local_80 = 0;
    local_68 = &_LC3;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    String::parse_latin1((StrRange *)&local_80);
    local_88 = 0;
    local_68 = (undefined *)CONCAT44(local_68._4_4_,0x20);
    local_50 = 0;
    local_48 = 0;
    local_60 = (undefined1  [16])0x0;
    if (local_80 == 0) {
LAB_0010cca0:
      local_40 = 6;
      StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
    }
    else {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_0010cca0;
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
  }
  else {
    if (param_1 != 2) goto LAB_0010cad9;
    GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)&local_68);
  }
  *(undefined4 *)param_2 = local_68._0_4_;
  if (*(long *)(param_2 + 8) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 8));
    uVar3 = local_60._0_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_60._8_8_;
    local_60 = auVar1 << 0x40;
    *(undefined8 *)(param_2 + 8) = uVar3;
  }
  if (*(long *)(param_2 + 0x10) != local_60._8_8_) {
    StringName::unref();
    uVar3 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(param_2 + 0x10) = uVar3;
  }
  *(int *)(param_2 + 0x18) = local_50;
  if (*(long *)(param_2 + 0x20) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 0x20));
    lVar4 = local_48;
    local_48 = 0;
    *(long *)(param_2 + 0x20) = lVar4;
  }
  *(undefined4 *)(param_2 + 0x28) = local_40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
LAB_0010cad9:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindTR<int, int, Vector<float>, int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTR<int,int,Vector<float>,int>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
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
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar5 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX < 3) {
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info<int,Vector<float>,int>(in_EDX,(PropertyInfo *)&local_68);
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
    goto LAB_0010cdac;
  }
  local_80 = 0;
  local_78 = 0;
  local_68 = &_LC3;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._0_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_78);
  local_70 = 0;
  *puVar5 = 2;
  puVar5[6] = 0;
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar5[10] = 6;
LAB_0010ce8f:
    StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_80);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_78);
    puVar5[10] = 6;
    if (puVar5[6] != 0x11) goto LAB_0010ce8f;
    StringName::StringName((StringName *)&local_68,(String *)(puVar5 + 8),false);
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  if ((StringName::configured != '\0') && (local_80 != 0)) {
    StringName::unref();
  }
LAB_0010cdac:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* StringName::~StringName() */

void __thiscall StringName::~StringName(StringName *this)

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
/* PropertyInfo::~PropertyInfo() */

void __thiscall PropertyInfo::~PropertyInfo(PropertyInfo *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<String>::~MethodBindTR() */

void __thiscall MethodBindTR<String>::~MethodBindTR(MethodBindTR<String> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<String const&>::~MethodBindT() */

void __thiscall MethodBindT<String_const&>::~MethodBindT(MethodBindT<String_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<int, int, Vector<float>, int>::~MethodBindTR() */

void __thiscall
MethodBindTR<int,int,Vector<float>,int>::~MethodBindTR
          (MethodBindTR<int,int,Vector<float>,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



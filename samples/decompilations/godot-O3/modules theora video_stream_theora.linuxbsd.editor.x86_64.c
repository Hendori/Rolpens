
/* VideoStreamPlaybackTheora::get_playback_position() const */

double __thiscall VideoStreamPlaybackTheora::get_playback_position(VideoStreamPlaybackTheora *this)

{
  return *(double *)(this + 0x990) - *(double *)(this + 0x9a8);
}



/* VideoStreamPlaybackTheora::is_playing() const */

VideoStreamPlaybackTheora __thiscall
VideoStreamPlaybackTheora::is_playing(VideoStreamPlaybackTheora *this)

{
  return this[0x984];
}



/* VideoStreamPlaybackTheora::set_paused(bool) */

void __thiscall VideoStreamPlaybackTheora::set_paused(VideoStreamPlaybackTheora *this,bool param_1)

{
  this[0x986] = (VideoStreamPlaybackTheora)param_1;
  return;
}



/* VideoStreamPlaybackTheora::is_paused() const */

VideoStreamPlaybackTheora __thiscall
VideoStreamPlaybackTheora::is_paused(VideoStreamPlaybackTheora *this)

{
  return this[0x986];
}



/* VideoStreamPlaybackTheora::get_length() const */

undefined8 VideoStreamPlaybackTheora::get_length(void)

{
  return 0;
}



/* VideoStreamPlaybackTheora::get_channels() const */

undefined4 __thiscall VideoStreamPlaybackTheora::get_channels(VideoStreamPlaybackTheora *this)

{
  return *(undefined4 *)(this + 0x7bc);
}



/* VideoStreamPlaybackTheora::set_audio_track(int) */

void __thiscall
VideoStreamPlaybackTheora::set_audio_track(VideoStreamPlaybackTheora *this,int param_1)

{
  *(int *)(this + 0x9b8) = param_1;
  return;
}



/* VideoStreamPlaybackTheora::get_mix_rate() const */

undefined4 __thiscall VideoStreamPlaybackTheora::get_mix_rate(VideoStreamPlaybackTheora *this)

{
  return *(undefined4 *)(this + 0x7c0);
}



/* ResourceFormatLoaderTheora::handles_type(String const&) const */

undefined4 __thiscall
ResourceFormatLoaderTheora::handles_type(ResourceFormatLoaderTheora *this,String *param_1)

{
  undefined4 uVar1;
  long in_FS_OFFSET;
  long local_30;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  StringName::StringName((StringName *)&local_28,"VideoStream",false);
  StringName::StringName((StringName *)&local_30,param_1,false);
  uVar1 = ClassDB::is_parent_class((StringName *)&local_30,(StringName *)&local_28);
  if (StringName::configured != '\0') {
    if (local_30 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00100116;
    }
    if (local_28 != 0) {
      StringName::unref();
    }
  }
LAB_00100116:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VideoStreamPlaybackTheora::seek(double) */

void VideoStreamPlaybackTheora::seek(double param_1)

{
  if (seek(double)::first_print == '\0') {
    return;
  }
  _err_print_error(&_LC4,"modules/theora/video_stream_theora.cpp",0x1f0,
                   "Seeking in Theora videos is not implemented yet (it\'s only supported for GDExtension-provided video streams)."
                   ,0,1);
  seek(double)::first_print = 0;
  return;
}



/* CowData<unsigned char>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<unsigned_char>::_copy_on_write(CowData<unsigned_char> *this)

{
  long *plVar1;
  size_t __n;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  ulong uVar5;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  __n = *(size_t *)(*(long *)this + -8);
  uVar5 = 0x10;
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
    puVar4[1] = __n;
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



/* VideoStreamPlaybackTheora::get_texture() const */

void VideoStreamPlaybackTheora::get_texture(void)

{
  char cVar1;
  long lVar2;
  long in_RSI;
  long *in_RDI;
  
  *in_RDI = 0;
  if (*(long *)(in_RSI + 0x9b0) != 0) {
    lVar2 = __dynamic_cast(*(long *)(in_RSI + 0x9b0),&Object::typeinfo,&Texture2D::typeinfo,0);
    if (lVar2 != 0) {
      *in_RDI = lVar2;
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        *in_RDI = 0;
      }
    }
  }
  return;
}



/* ResourceFormatLoaderTheora::load(String const&, String const&, Error*, bool, float*,
   ResourceFormatLoader::CacheMode) */

long * ResourceFormatLoaderTheora::load
                 (long *param_1,undefined8 param_2,int param_3,undefined8 param_4,
                 undefined4 *param_5)

{
  char cVar1;
  VideoStream *this;
  long lVar2;
  long in_FS_OFFSET;
  Object *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FileAccess::open((String *)&local_38,param_3,(Error *)0x1);
  if (local_38 == (Object *)0x0) {
    if (param_5 != (undefined4 *)0x0) {
      *param_5 = 0x13;
    }
    *param_1 = 0;
  }
  else {
    this = (VideoStream *)operator_new(0x268,"");
    VideoStream::VideoStream(this);
    *(undefined4 *)(this + 0x260) = 0;
    *(undefined ***)this = &PTR__initialize_classv_00107dd8;
    postinitialize_handler((Object *)this);
    VideoStream::set_file((String *)this);
    cVar1 = RefCounted::init_ref();
    if (cVar1 == '\0') {
      if (param_5 == (undefined4 *)0x0) {
        *param_1 = 0;
      }
      else {
        *param_5 = 0;
        *param_1 = 0;
      }
    }
    else {
      if (param_5 != (undefined4 *)0x0) {
        *param_5 = 0;
      }
      *param_1 = 0;
      lVar2 = __dynamic_cast(this,&Object::typeinfo,&Resource::typeinfo,0);
      if (lVar2 != 0) {
        *param_1 = lVar2;
        cVar1 = RefCounted::reference();
        if (cVar1 == '\0') {
          *param_1 = 0;
        }
      }
      cVar1 = RefCounted::unreference();
      if (cVar1 != '\0') {
        cVar1 = predelete_handler((Object *)this);
        if (cVar1 != '\0') {
          (**(code **)(*(long *)this + 0x140))(this);
          Memory::free_static(this,false);
        }
      }
    }
    if (local_38 != (Object *)0x0) {
      cVar1 = RefCounted::unreference();
      if (cVar1 != '\0') {
        cVar1 = predelete_handler(local_38);
        if (cVar1 != '\0') {
          (**(code **)(*(long *)local_38 + 0x140))(local_38);
          Memory::free_static(local_38,false);
        }
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* ResourceFormatLoaderTheora::get_resource_type(String const&) const */

String * ResourceFormatLoaderTheora::get_resource_type(String *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  char cVar4;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  String::get_extension();
  String::to_lower();
  pcVar3 = local_38;
  if (local_38 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)((long)local_38 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_38 = (char *)0x0;
      Memory::free_static((void *)((long)pcVar3 + -0x10),false);
    }
  }
  cVar4 = String::operator==((String *)&local_40,"ogv");
  *(undefined8 *)param_1 = 0;
  if (cVar4 == '\0') {
    local_30 = 0;
    local_38 = "";
    String::parse_latin1((StrRange *)param_1);
  }
  else {
    local_30 = 0x11;
    local_38 = "VideoStreamTheora";
    String::parse_latin1((StrRange *)param_1);
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
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ResourceFormatLoaderTheora::get_recognized_extensions(List<String, DefaultAllocator>*) const */

void __thiscall
ResourceFormatLoaderTheora::get_recognized_extensions
          (ResourceFormatLoaderTheora *this,List *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  CowData<char32_t> *this_00;
  undefined1 (*pauVar4) [16];
  long in_FS_OFFSET;
  long local_40;
  undefined *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = 0;
  local_38 = &_LC15;
  local_30 = 3;
  String::parse_latin1((StrRange *)&local_40);
  if (*(long *)param_1 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  this_00 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
  *(undefined1 (*) [16])this_00 = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x10) = (undefined1  [16])0x0;
  if (local_40 != 0) {
    CowData<char32_t>::_ref(this_00,(CowData *)&local_40);
  }
  lVar3 = local_40;
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(undefined8 *)(this_00 + 8) = 0;
  *(long **)(this_00 + 0x18) = plVar1;
  *(long *)(this_00 + 0x10) = lVar2;
  if (lVar2 != 0) {
    *(CowData<char32_t> **)(lVar2 + 8) = this_00;
  }
  plVar1[1] = (long)this_00;
  if (*plVar1 == 0) {
    *plVar1 = (long)this_00;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Resource::initialize_class() [clone .part.0] */

void Resource::initialize_class(void)

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
    if ((code *)PTR__bind_methods_0010c008 != RefCounted::_bind_methods) {
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
  if ((code *)_GLOBAL_OFFSET_TABLE_ != RefCounted::_bind_methods) {
    Resource::_bind_methods();
  }
  initialize_class()::initialized = 1;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* VideoStreamPlaybackTheora::buffer_data() */

ulong __thiscall VideoStreamPlaybackTheora::buffer_data(VideoStreamPlaybackTheora *this)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar1 = ogg_sync_buffer(this + 0x3e0,0x1000);
  uVar2 = (**(code **)(**(long **)(this + 0x3b0) + 0x220))(*(long **)(this + 0x3b0),uVar1,0x1000);
  ogg_sync_wrote(this + 0x3e0,uVar2);
  return uVar2 & 0xffffffff;
}



/* VideoStreamPlaybackTheora::queue_page(ogg_page*) */

undefined8 __thiscall
VideoStreamPlaybackTheora::queue_page(VideoStreamPlaybackTheora *this,ogg_page *param_1)

{
  int iVar1;
  
  if ((*(int *)(this + 0x970) == 0) ||
     (ogg_stream_pagein(this + 0x5b8,param_1), *(int *)(this + 0x728) == 0)) {
    iVar1 = *(int *)(this + 0x974);
  }
  else {
    iVar1 = *(int *)(this + 0x974);
    this[0x3d8] = (VideoStreamPlaybackTheora)0x1;
  }
  if ((iVar1 != 0) && (ogg_stream_pagein(this + 0x420,param_1), *(int *)(this + 0x590) != 0)) {
    this[0x3d9] = (VideoStreamPlaybackTheora)0x1;
    return 0;
  }
  return 0;
}



/* VideoStreamPlaybackTheora::clear() */

void __thiscall VideoStreamPlaybackTheora::clear(VideoStreamPlaybackTheora *this)

{
  Object *pOVar1;
  char cVar2;
  
  if (*(long *)(this + 0x3b0) != 0) {
    if (*(int *)(this + 0x974) != 0) {
      ogg_stream_clear(this + 0x420);
      if (2 < *(int *)(this + 0x974)) {
        vorbis_block_clear(this + 0x880);
        vorbis_dsp_clear(this + 0x7f0);
      }
      vorbis_comment_clear(this + 0x940);
      vorbis_info_clear(this + 0x7b8);
      *(undefined4 *)(this + 0x974) = 0;
    }
    if (*(int *)(this + 0x970) != 0) {
      ogg_stream_clear(this + 0x5b8);
      th_decode_free(*(undefined8 *)(this + 0x7b0));
      th_comment_clear(this + 0x790);
      th_info_clear(this + 0x750);
      *(undefined4 *)(this + 0x970) = 0;
    }
    ogg_sync_clear(this + 0x3e0);
    *(undefined2 *)(this + 0x3d8) = 0;
    *(undefined8 *)(this + 0x970) = 0;
    *(undefined2 *)(this + 0x988) = 0;
    this[0x98a] = (VideoStreamPlaybackTheora)0x0;
    *(undefined1 (*) [16])(this + 0x998) = (undefined1  [16])0x0;
    if (*(long *)(this + 0x3b0) != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
        pOVar1 = *(Object **)(this + 0x3b0);
        cVar2 = predelete_handler(pOVar1);
        if (cVar2 != '\0') {
          (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
          Memory::free_static(pOVar1,false);
        }
      }
    }
    *(undefined8 *)(this + 0x3b0) = 0;
    this[0x984] = (VideoStreamPlaybackTheora)0x0;
    return;
  }
  return;
}



/* VideoStreamPlaybackTheora::~VideoStreamPlaybackTheora() */

void __thiscall
VideoStreamPlaybackTheora::~VideoStreamPlaybackTheora(VideoStreamPlaybackTheora *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  
  *(undefined ***)this = &PTR__initialize_classv_00107fc0;
  clear(this);
  if (*(long *)(this + 0x9b0) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0x9b0);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  if (*(long *)(this + 0x3b8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x3b8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x3b8);
      *(undefined8 *)(this + 0x3b8) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x3b0) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0x3b0);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  if (*(long *)(this + 0x3a0) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x3a0) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x3a0);
      *(undefined8 *)(this + 0x3a0) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      VideoStreamPlayback::~VideoStreamPlayback((VideoStreamPlayback *)this);
      return;
    }
  }
  VideoStreamPlayback::~VideoStreamPlayback((VideoStreamPlayback *)this);
  return;
}



/* VideoStreamPlaybackTheora::~VideoStreamPlaybackTheora() */

void __thiscall
VideoStreamPlaybackTheora::~VideoStreamPlaybackTheora(VideoStreamPlaybackTheora *this)

{
  ~VideoStreamPlaybackTheora(this);
  operator_delete(this,0x9c0);
  return;
}



/* VideoStreamPlaybackTheora::VideoStreamPlaybackTheora() */

void __thiscall
VideoStreamPlaybackTheora::VideoStreamPlaybackTheora(VideoStreamPlaybackTheora *this)

{
  char cVar1;
  ImageTexture *this_00;
  Object *pOVar2;
  Object *pOVar3;
  
  VideoStreamPlayback::VideoStreamPlayback((VideoStreamPlayback *)this);
  *(undefined1 (*) [16])(this + 0x3b0) = (undefined1  [16])0x0;
  *(undefined ***)this = &PTR__initialize_classv_00107fc0;
  *(undefined2 *)(this + 0x988) = 0;
  *(undefined1 (*) [16])(this + 0x7b8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x7c8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x7d8) = (undefined1  [16])0x0;
  *(undefined4 *)(this + 0x390) = 0;
  *(undefined8 *)(this + 0x3a0) = 0;
  *(undefined4 *)(this + 0x3a8) = 0;
  *(undefined8 *)(this + 0x3c0) = 0;
  *(undefined8 *)(this + 0x3c8) = 0;
  *(undefined8 *)(this + 0x3d0) = 0;
  *(undefined2 *)(this + 0x3d8) = 0;
  *(undefined8 *)(this + 0x7b0) = 0;
  *(undefined8 *)(this + 0x7e8) = 0;
  *(undefined8 *)(this + 0x980) = 0;
  this[0x98a] = (VideoStreamPlaybackTheora)0x0;
  *(undefined8 *)(this + 0x9b0) = 0;
  *(undefined4 *)(this + 0x9b8) = 0;
  *(undefined1 (*) [16])(this + 0x970) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x990) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x9a0) = (undefined1  [16])0x0;
  this_00 = (ImageTexture *)operator_new(0x318,"");
  ImageTexture::ImageTexture(this_00);
  postinitialize_handler((Object *)this_00);
  cVar1 = RefCounted::init_ref();
  if (cVar1 == '\0') {
    pOVar3 = *(Object **)(this + 0x9b0);
    if (pOVar3 == (Object *)0x0) {
      return;
    }
    *(undefined8 *)(this + 0x9b0) = 0;
    cVar1 = RefCounted::unreference();
    if (cVar1 == '\0') {
      return;
    }
    this_00 = (ImageTexture *)0x0;
    cVar1 = predelete_handler(pOVar3);
    if (cVar1 == '\0') {
      return;
    }
  }
  else {
    pOVar3 = *(Object **)(this + 0x9b0);
    pOVar2 = pOVar3;
    if (this_00 == (ImageTexture *)pOVar3) goto LAB_00101016;
    *(ImageTexture **)(this + 0x9b0) = this_00;
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *(undefined8 *)(this + 0x9b0) = 0;
    }
    pOVar2 = (Object *)this_00;
    if (((pOVar3 == (Object *)0x0) || (cVar1 = RefCounted::unreference(), cVar1 == '\0')) ||
       (cVar1 = predelete_handler(pOVar3), cVar1 == '\0')) goto LAB_00101016;
  }
  (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
  Memory::free_static(pOVar3,false);
  pOVar2 = (Object *)this_00;
  if (this_00 == (ImageTexture *)0x0) {
    return;
  }
LAB_00101016:
  cVar1 = RefCounted::unreference();
  if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar2), cVar1 != '\0')) {
    (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
    Memory::free_static(pOVar2,false);
    return;
  }
  return;
}



/* VideoStreamTheora::_bind_methods() */

void VideoStreamTheora::_bind_methods(void)

{
  return;
}



/* WARNING: Removing unreachable block (ram,0x0010128d) */
/* WARNING: Removing unreachable block (ram,0x001011db) */
/* WARNING: Removing unreachable block (ram,0x00101811) */
/* WARNING: Removing unreachable block (ram,0x00101821) */
/* WARNING: Removing unreachable block (ram,0x00101fed) */
/* VideoStreamPlaybackTheora::video_write(th_img_plane*) */

void __thiscall
VideoStreamPlaybackTheora::video_write(VideoStreamPlaybackTheora *this,th_img_plane *param_1)

{
  long *plVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  Object *pOVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  uint uVar11;
  byte *pbVar12;
  long lVar13;
  undefined1 *puVar14;
  ulong uVar15;
  byte *pbVar16;
  int iVar17;
  byte *pbVar18;
  byte *pbVar19;
  long lVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  byte *pbVar25;
  int iVar26;
  uint uVar27;
  long in_FS_OFFSET;
  bool bVar28;
  Object *local_60;
  undefined1 local_58 [8];
  long local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)(this + 0x3a0));
  iVar3 = *(int *)(param_1 + 8);
  iVar21 = *(int *)(param_1 + 0x20);
  puVar9 = *(undefined1 **)(this + 0x3a0);
  uVar11 = *(int *)(this + 0x3cc) * iVar3 + *(int *)(this + 0x3c8);
  uVar15 = (ulong)(uint)(*(int *)(this + 0x3cc) * iVar21 + *(int *)(this + 0x3c8));
  iVar26 = *(int *)(this + 0x960);
  if (iVar26 == 3) {
    pbVar25 = (byte *)((ulong)uVar11 + *(long *)(param_1 + 0x10));
    iVar26 = *(int *)(this + 0x3d4);
    iVar24 = *(int *)(this + 0x3d0);
    pbVar16 = (byte *)(*(long *)(param_1 + 0x40) + uVar15);
    pbVar12 = (byte *)(uVar15 + *(long *)(param_1 + 0x28));
    if (iVar26 < 1) goto LAB_00101134;
    iVar21 = iVar21 - iVar24;
    do {
      iVar26 = iVar26 + iVar24 * -0x10000;
      uVar11 = iVar26 + 0x10000;
      if ((int)uVar11 < 0) {
        lVar13 = 0;
        uVar11 = -iVar26 - 0x10001U >> 0x11;
        uVar15 = (ulong)(uVar11 + 1);
        puVar14 = puVar9;
        do {
          uVar27 = *(int *)(tables + (ulong)pbVar12[lVar13] * 4 + 0x400) +
                   *(int *)(tables + (ulong)pbVar16[lVar13] * 4 + 0x800) +
                   *(int *)(tables + (ulong)pbVar25[lVar13] * 4);
          uVar22 = uVar27 & 0x40080100;
          if (uVar22 != 0) {
            uVar27 = uVar22 - ((int)uVar22 >> 8) | uVar27;
            uVar27 = (~(uVar27 >> 9) & 0x400801) + uVar27;
          }
          puVar14[2] = (char)uVar27;
          puVar14[3] = 0xff;
          *puVar14 = (char)(uVar27 >> 0xb);
          puVar14[1] = (char)(uVar27 >> 0x16);
          uVar27 = *(int *)(tables + (ulong)pbVar16[lVar13 + 1] * 4 + 0x800) +
                   *(int *)(tables + (ulong)pbVar12[lVar13 + 1] * 4 + 0x400) +
                   *(int *)(tables + (ulong)pbVar25[lVar13 + 1] * 4);
          uVar22 = uVar27 & 0x40080100;
          if (uVar22 != 0) {
            uVar27 = uVar22 - ((int)uVar22 >> 8) | uVar27;
            uVar27 = (~(uVar27 >> 9) & 0x400801) + uVar27;
          }
          puVar14[6] = (char)uVar27;
          puVar10 = puVar14 + 8;
          lVar13 = lVar13 + 2;
          puVar14[4] = (char)(uVar27 >> 0xb);
          puVar14[5] = (char)(uVar27 >> 0x16);
          puVar14[7] = 0xff;
          puVar14 = puVar10;
        } while (puVar9 + uVar15 * 8 != puVar10);
        lVar13 = uVar15 * 2;
        pbVar12 = pbVar12 + lVar13;
        pbVar16 = pbVar16 + lVar13;
        pbVar25 = pbVar25 + lVar13;
        uVar11 = iVar26 + 0x30000 + uVar11 * 0x20000;
        puVar9 = puVar9 + uVar15 * 8;
      }
      puVar14 = puVar9;
      pbVar18 = pbVar12;
      pbVar19 = pbVar25;
      if (uVar11 >> 0x10 == 0) {
        bVar2 = *pbVar16;
        pbVar18 = pbVar12 + 1;
        pbVar16 = pbVar16 + 1;
        pbVar19 = pbVar25 + 1;
        uVar27 = *(int *)(tables + (ulong)bVar2 * 4 + 0x800) +
                 *(int *)(tables + (ulong)*pbVar12 * 4 + 0x400) +
                 *(int *)(tables + (ulong)*pbVar25 * 4);
        uVar22 = uVar27 & 0x40080100;
        if (uVar22 != 0) {
          uVar27 = uVar27 | uVar22 - ((int)uVar22 >> 8);
          uVar27 = uVar27 + (~(uVar27 >> 9) & 0x400801);
        }
        puVar9[2] = (char)uVar27;
        puVar9[3] = 0xff;
        puVar14 = puVar9 + 4;
        *puVar9 = (char)(uVar27 >> 0xb);
        puVar9[1] = (char)(uVar27 >> 0x16);
      }
      pbVar19 = pbVar19 + (iVar3 - iVar24);
      pbVar18 = pbVar18 + iVar21;
      pbVar16 = pbVar16 + iVar21;
      iVar26 = (short)uVar11 + -1;
      if (iVar26 == 0) break;
      iVar26 = iVar26 + iVar24 * -0x10000;
      uVar11 = iVar26 + 0x10000;
      puVar10 = puVar14;
      if ((int)uVar11 < 0) {
        lVar13 = 0;
        uVar11 = -iVar26 - 0x10001U >> 0x11;
        uVar15 = (ulong)(uVar11 + 1);
        puVar10 = puVar14 + uVar15 * 8;
        do {
          uVar27 = *(int *)(tables + (ulong)pbVar18[lVar13] * 4 + 0x400) +
                   *(int *)(tables + (ulong)pbVar16[lVar13] * 4 + 0x800) +
                   *(int *)(tables + (ulong)pbVar19[lVar13] * 4);
          uVar22 = uVar27 & 0x40080100;
          if (uVar22 != 0) {
            uVar27 = uVar22 - ((int)uVar22 >> 8) | uVar27;
            uVar27 = (~(uVar27 >> 9) & 0x400801) + uVar27;
          }
          puVar14[2] = (char)uVar27;
          puVar14[3] = 0xff;
          *puVar14 = (char)(uVar27 >> 0xb);
          puVar14[1] = (char)(uVar27 >> 0x16);
          uVar27 = *(int *)(tables + (ulong)pbVar18[lVar13 + 1] * 4 + 0x400) +
                   *(int *)(tables + (ulong)pbVar16[lVar13 + 1] * 4 + 0x800) +
                   *(int *)(tables + (ulong)pbVar19[lVar13 + 1] * 4);
          uVar22 = uVar27 & 0x40080100;
          if (uVar22 != 0) {
            uVar27 = uVar22 - ((int)uVar22 >> 8) | uVar27;
            uVar27 = (~(uVar27 >> 9) & 0x400801) + uVar27;
          }
          puVar14[6] = (char)uVar27;
          puVar9 = puVar14 + 8;
          lVar13 = lVar13 + 2;
          puVar14[4] = (char)(uVar27 >> 0xb);
          puVar14[5] = (char)(uVar27 >> 0x16);
          puVar14[7] = 0xff;
          puVar14 = puVar9;
        } while (puVar9 != puVar10);
        lVar13 = uVar15 * 2;
        pbVar18 = pbVar18 + lVar13;
        pbVar16 = pbVar16 + lVar13;
        pbVar19 = pbVar19 + lVar13;
        uVar11 = iVar26 + 0x30000 + uVar11 * 0x20000;
      }
      puVar9 = puVar10;
      pbVar12 = pbVar18;
      pbVar25 = pbVar19;
      if (uVar11 >> 0x10 == 0) {
        bVar2 = *pbVar16;
        pbVar12 = pbVar18 + 1;
        pbVar16 = pbVar16 + 1;
        pbVar25 = pbVar19 + 1;
        uVar27 = *(int *)(tables + (ulong)bVar2 * 4 + 0x800) +
                 *(int *)(tables + (ulong)*pbVar18 * 4 + 0x400) +
                 *(int *)(tables + (ulong)*pbVar19 * 4);
        uVar22 = uVar27 & 0x40080100;
        if (uVar22 != 0) {
          uVar27 = uVar27 | uVar22 - ((int)uVar22 >> 8);
          uVar27 = uVar27 + (~(uVar27 >> 9) & 0x400801);
        }
        puVar10[2] = (char)uVar27;
        puVar10[3] = 0xff;
        puVar9 = puVar10 + 4;
        *puVar10 = (char)(uVar27 >> 0xb);
        puVar10[1] = (char)(uVar27 >> 0x16);
      }
      pbVar25 = pbVar25 + (iVar3 - iVar24);
      pbVar12 = pbVar12 + iVar21;
      iVar26 = (short)uVar11 + -1;
      pbVar16 = pbVar16 + iVar21;
    } while (0 < iVar26);
  }
  else if (iVar26 == 2) {
    pbVar12 = (byte *)((ulong)uVar11 + *(long *)(param_1 + 0x10));
    iVar26 = *(int *)(this + 0x3d0);
    iVar24 = *(int *)(this + 0x3d4);
    pbVar16 = (byte *)(*(long *)(param_1 + 0x40) + uVar15);
    pbVar25 = (byte *)(uVar15 + *(long *)(param_1 + 0x28));
    if (iVar24 < 1) goto LAB_00101134;
    iVar21 = iVar21 - (iVar26 >> 1);
    do {
      iVar24 = iVar24 + iVar26 * -0x10000;
      uVar11 = iVar24 + 0x10000;
      if ((int)uVar11 < 0) {
        lVar13 = 0;
        uVar11 = -iVar24 - 0x10001U >> 0x11;
        uVar15 = (ulong)(uVar11 + 1);
        puVar14 = puVar9;
        do {
          uVar22 = *(int *)(tables + (ulong)pbVar12[lVar13 * 2] * 4) +
                   *(int *)(tables + (ulong)pbVar16[lVar13] * 4 + 0x800) +
                   *(int *)(tables + (ulong)pbVar25[lVar13] * 4 + 0x400);
          uVar27 = *(int *)(tables + (ulong)pbVar16[lVar13] * 4 + 0x800) +
                   *(int *)(tables + (ulong)pbVar25[lVar13] * 4 + 0x400) +
                   *(int *)(tables + (ulong)pbVar12[lVar13 * 2 + 1] * 4);
          uVar23 = uVar22 & 0x40080100;
          if (uVar23 != 0) {
            uVar22 = uVar23 - ((int)uVar23 >> 8) | uVar22;
            uVar22 = (~(uVar22 >> 9) & 0x400801) + uVar22;
          }
          uVar23 = uVar27 & 0x40080100;
          if (uVar23 != 0) {
            uVar27 = uVar23 - ((int)uVar23 >> 8) | uVar27;
            uVar27 = (~(uVar27 >> 9) & 0x400801) + uVar27;
          }
          puVar14[2] = (char)uVar22;
          puVar10 = puVar14 + 8;
          lVar13 = lVar13 + 1;
          puVar14[3] = 0xff;
          *puVar14 = (char)(uVar22 >> 0xb);
          puVar14[6] = (char)uVar27;
          puVar14[4] = (char)(uVar27 >> 0xb);
          puVar14[1] = (char)(uVar22 >> 0x16);
          puVar14[5] = (char)(uVar27 >> 0x16);
          puVar14[7] = 0xff;
          puVar14 = puVar10;
        } while (puVar9 + uVar15 * 8 != puVar10);
        pbVar25 = pbVar25 + uVar15;
        pbVar16 = pbVar16 + uVar15;
        pbVar12 = pbVar12 + uVar15 * 2;
        uVar11 = iVar24 + 0x30000 + uVar11 * 0x20000;
        puVar9 = puVar9 + uVar15 * 8;
      }
      pbVar18 = pbVar12;
      puVar14 = puVar9;
      if (uVar11 >> 0x10 == 0) {
        pbVar18 = pbVar12 + 1;
        uVar27 = *(int *)(tables + (ulong)*pbVar16 * 4 + 0x800) +
                 *(int *)(tables + (ulong)*pbVar25 * 4 + 0x400) +
                 *(int *)(tables + (ulong)*pbVar12 * 4);
        uVar22 = uVar27 & 0x40080100;
        if (uVar22 != 0) {
          uVar27 = uVar27 | uVar22 - ((int)uVar22 >> 8);
          uVar27 = uVar27 + (~(uVar27 >> 9) & 0x400801);
        }
        puVar9[2] = (char)uVar27;
        puVar14 = puVar9 + 4;
        puVar9[3] = 0xff;
        *puVar9 = (char)(uVar27 >> 0xb);
        puVar9[1] = (char)(uVar27 >> 0x16);
      }
      pbVar18 = pbVar18 + (iVar3 - iVar26);
      pbVar25 = pbVar25 + iVar21;
      pbVar16 = pbVar16 + iVar21;
      iVar24 = (short)uVar11 + -1;
      if (iVar24 == 0) break;
      iVar24 = iVar24 + iVar26 * -0x10000;
      uVar11 = iVar24 + 0x10000;
      puVar10 = puVar14;
      if ((int)uVar11 < 0) {
        lVar13 = 0;
        uVar11 = -iVar24 - 0x10001U >> 0x11;
        uVar15 = (ulong)(uVar11 + 1);
        puVar10 = puVar14 + uVar15 * 8;
        do {
          uVar22 = *(int *)(tables + (ulong)pbVar18[lVar13 * 2] * 4) +
                   *(int *)(tables + (ulong)pbVar16[lVar13] * 4 + 0x800) +
                   *(int *)(tables + (ulong)pbVar25[lVar13] * 4 + 0x400);
          uVar27 = *(int *)(tables + (ulong)pbVar16[lVar13] * 4 + 0x800) +
                   *(int *)(tables + (ulong)pbVar25[lVar13] * 4 + 0x400) +
                   *(int *)(tables + (ulong)pbVar18[lVar13 * 2 + 1] * 4);
          uVar23 = uVar22 & 0x40080100;
          if (uVar23 != 0) {
            uVar22 = uVar23 - ((int)uVar23 >> 8) | uVar22;
            uVar22 = (~(uVar22 >> 9) & 0x400801) + uVar22;
          }
          uVar23 = uVar27 & 0x40080100;
          if (uVar23 != 0) {
            uVar27 = uVar23 - ((int)uVar23 >> 8) | uVar27;
            uVar27 = (~(uVar27 >> 9) & 0x400801) + uVar27;
          }
          puVar14[2] = (char)uVar22;
          puVar9 = puVar14 + 8;
          lVar13 = lVar13 + 1;
          puVar14[3] = 0xff;
          *puVar14 = (char)(uVar22 >> 0xb);
          puVar14[6] = (char)uVar27;
          puVar14[4] = (char)(uVar27 >> 0xb);
          puVar14[1] = (char)(uVar22 >> 0x16);
          puVar14[5] = (char)(uVar27 >> 0x16);
          puVar14[7] = 0xff;
          puVar14 = puVar9;
        } while (puVar10 != puVar9);
        pbVar25 = pbVar25 + uVar15;
        pbVar16 = pbVar16 + uVar15;
        pbVar18 = pbVar18 + uVar15 * 2;
        uVar11 = iVar24 + 0x30000 + uVar11 * 0x20000;
      }
      pbVar12 = pbVar18;
      puVar9 = puVar10;
      if (uVar11 >> 0x10 == 0) {
        pbVar12 = pbVar18 + 1;
        uVar27 = *(int *)(tables + (ulong)*pbVar16 * 4 + 0x800) +
                 *(int *)(tables + (ulong)*pbVar25 * 4 + 0x400) +
                 *(int *)(tables + (ulong)*pbVar18 * 4);
        uVar22 = uVar27 & 0x40080100;
        if (uVar22 != 0) {
          uVar27 = uVar27 | uVar22 - ((int)uVar22 >> 8);
          uVar27 = uVar27 + (~(uVar27 >> 9) & 0x400801);
        }
        puVar10[2] = (char)uVar27;
        puVar9 = puVar10 + 4;
        puVar10[3] = 0xff;
        *puVar10 = (char)(uVar27 >> 0xb);
        puVar10[1] = (char)(uVar27 >> 0x16);
      }
      pbVar12 = pbVar12 + (iVar3 - iVar26);
      pbVar25 = pbVar25 + iVar21;
      iVar24 = (short)uVar11 + -1;
      pbVar16 = pbVar16 + iVar21;
    } while (0 < iVar24);
  }
  else {
    if (iVar26 != 0) goto LAB_00101134;
    pbVar12 = (byte *)((ulong)uVar11 + *(long *)(param_1 + 0x10));
    iVar24 = *(int *)(this + 0x3d0);
    pbVar25 = (byte *)(*(long *)(param_1 + 0x40) + uVar15);
    pbVar16 = (byte *)(uVar15 + *(long *)(param_1 + 0x28));
    iVar26 = *(int *)(this + 0x3d4) + -1;
    if (0 < iVar26) {
      lVar13 = (long)iVar3;
      iVar21 = iVar21 - (iVar24 >> 1);
      do {
        iVar26 = iVar26 + iVar24 * -0x10000;
        uVar11 = iVar26 + 0x10000;
        if ((int)uVar11 < 0) {
          lVar20 = 0;
          uVar11 = -iVar26 - 0x10001U >> 0x11;
          uVar15 = (ulong)(uVar11 + 1);
          puVar14 = puVar9;
          puVar10 = puVar9 + iVar24 * 4;
          do {
            iVar17 = *(int *)(tables + (ulong)pbVar25[lVar20] * 4 + 0x800) +
                     *(int *)(tables + (ulong)pbVar16[lVar20] * 4 + 0x400);
            uVar22 = *(int *)(tables + (ulong)pbVar12[lVar20 * 2 + lVar13] * 4) + iVar17;
            uVar27 = *(int *)(tables + (ulong)pbVar12[lVar20 * 2] * 4) + iVar17;
            uVar23 = uVar22 & 0x40080100;
            if (uVar23 != 0) {
              uVar22 = uVar23 - ((int)uVar23 >> 8) | uVar22;
              uVar22 = (~(uVar22 >> 9) & 0x400801) + uVar22;
            }
            uVar23 = uVar27 & 0x40080100;
            if (uVar23 != 0) {
              uVar27 = uVar23 - ((int)uVar23 >> 8) | uVar27;
              uVar27 = (~(uVar27 >> 9) & 0x400801) + uVar27;
            }
            puVar10[2] = (char)uVar22;
            puVar10[3] = 0xff;
            *puVar10 = (char)(uVar22 >> 0xb);
            puVar10[1] = (char)(uVar22 >> 0x16);
            *puVar14 = (char)(uVar27 >> 0xb);
            puVar14[2] = (char)uVar27;
            puVar14[1] = (char)(uVar27 >> 0x16);
            puVar14[3] = 0xff;
            uVar22 = *(int *)(tables + (ulong)pbVar12[lVar20 * 2 + lVar13 + 1] * 4) + iVar17;
            uVar27 = iVar17 + *(int *)(tables + (ulong)pbVar12[lVar20 * 2 + 1] * 4);
            uVar23 = uVar22 & 0x40080100;
            if (uVar23 != 0) {
              uVar22 = uVar23 - ((int)uVar23 >> 8) | uVar22;
              uVar22 = (~(uVar22 >> 9) & 0x400801) + uVar22;
            }
            uVar23 = uVar27 & 0x40080100;
            if (uVar23 != 0) {
              uVar27 = uVar23 - ((int)uVar23 >> 8) | uVar27;
              uVar27 = (~(uVar27 >> 9) & 0x400801) + uVar27;
            }
            puVar10[6] = (char)uVar22;
            puVar8 = puVar14 + 8;
            lVar20 = lVar20 + 1;
            puVar10[7] = 0xff;
            puVar10[4] = (char)(uVar22 >> 0xb);
            puVar10[5] = (char)(uVar22 >> 0x16);
            puVar14[4] = (char)(uVar27 >> 0xb);
            puVar14[6] = (char)uVar27;
            puVar14[5] = (char)(uVar27 >> 0x16);
            puVar14[7] = 0xff;
            puVar14 = puVar8;
            puVar10 = puVar10 + 8;
          } while (puVar9 + uVar15 * 8 != puVar8);
          pbVar16 = pbVar16 + uVar15;
          pbVar12 = pbVar12 + uVar15 * 2;
          pbVar25 = pbVar25 + uVar15;
          uVar11 = iVar26 + 0x30000 + uVar11 * 0x20000;
          puVar9 = puVar9 + uVar15 * 8;
        }
        pbVar18 = pbVar12;
        puVar14 = puVar9;
        if (uVar11 >> 0x10 == 0) {
          pbVar18 = pbVar12 + 1;
          puVar10 = puVar9 + iVar24 * 4;
          uVar23 = *(int *)(tables + (ulong)pbVar12[lVar13] * 4) +
                   *(int *)(tables + (ulong)*pbVar25 * 4 + 0x800) +
                   *(int *)(tables + (ulong)*pbVar16 * 4 + 0x400);
          uVar27 = *(int *)(tables + (ulong)*pbVar25 * 4 + 0x800) +
                   *(int *)(tables + (ulong)*pbVar16 * 4 + 0x400) +
                   *(int *)(tables + (ulong)*pbVar12 * 4);
          uVar22 = uVar23 & 0x40080100;
          if (uVar22 != 0) {
            uVar23 = uVar22 - ((int)uVar22 >> 8) | uVar23;
            uVar23 = (~(uVar23 >> 9) & 0x400801) + uVar23;
          }
          uVar22 = uVar27 & 0x40080100;
          if (uVar22 != 0) {
            uVar27 = uVar22 - ((int)uVar22 >> 8) | uVar27;
            uVar27 = (~(uVar27 >> 9) & 0x400801) + uVar27;
          }
          puVar10[2] = (char)uVar27;
          puVar14 = puVar9 + 4;
          puVar10[3] = 0xff;
          *puVar10 = (char)(uVar27 >> 0xb);
          puVar10[1] = (char)(uVar27 >> 0x16);
          *puVar9 = (char)(uVar23 >> 0xb);
          puVar9[2] = (char)uVar23;
          puVar9[1] = (char)(uVar23 >> 0x16);
          puVar9[3] = 0xff;
        }
        pbVar16 = pbVar16 + iVar21;
        iVar26 = (short)uVar11 + -2;
        pbVar25 = pbVar25 + iVar21;
        puVar9 = puVar14 + (iVar24 << 2);
        pbVar12 = pbVar18 + (iVar3 * 2 - iVar24);
      } while (0 < iVar26);
    }
    if (iVar26 == 0) {
      uVar11 = iVar24 * -0x10000 + 0x10000;
      if ((int)uVar11 < 0) {
        lVar13 = 0;
        uVar15 = (ulong)((~uVar11 >> 0x11) + 1);
        puVar14 = puVar9;
        do {
          uVar23 = *(int *)(tables + (ulong)pbVar12[lVar13 * 2] * 4) +
                   *(int *)(tables + (ulong)pbVar25[lVar13] * 4 + 0x800) +
                   *(int *)(tables + (ulong)pbVar16[lVar13] * 4 + 0x400);
          uVar27 = *(int *)(tables + (ulong)pbVar25[lVar13] * 4 + 0x800) +
                   *(int *)(tables + (ulong)pbVar16[lVar13] * 4 + 0x400) +
                   *(int *)(tables + (ulong)pbVar12[lVar13 * 2 + 1] * 4);
          uVar22 = uVar23 & 0x40080100;
          if (uVar22 != 0) {
            uVar23 = uVar22 - ((int)uVar22 >> 8) | uVar23;
            uVar23 = (~(uVar23 >> 9) & 0x400801) + uVar23;
          }
          uVar22 = uVar27 & 0x40080100;
          if (uVar22 != 0) {
            uVar27 = uVar22 - ((int)uVar22 >> 8) | uVar27;
            uVar27 = (~(uVar27 >> 9) & 0x400801) + uVar27;
          }
          puVar14[2] = (char)uVar23;
          puVar10 = puVar14 + 8;
          lVar13 = lVar13 + 1;
          puVar14[3] = 0xff;
          *puVar14 = (char)(uVar23 >> 0xb);
          puVar14[6] = (char)uVar27;
          puVar14[4] = (char)(uVar27 >> 0xb);
          puVar14[1] = (char)(uVar23 >> 0x16);
          puVar14[5] = (char)(uVar27 >> 0x16);
          puVar14[7] = 0xff;
          puVar14 = puVar10;
        } while (puVar9 + uVar15 * 8 != puVar10);
        pbVar16 = pbVar16 + uVar15;
        pbVar12 = pbVar12 + uVar15 * 2;
        pbVar25 = pbVar25 + uVar15;
        uVar11 = (~uVar11 >> 0x11) * 0x20000 + iVar24 * -0x10000 + 0x30000;
        puVar9 = puVar9 + uVar15 * 8;
      }
      if (uVar11 == 0) {
        uVar11 = *(int *)(tables + (ulong)*pbVar25 * 4 + 0x800) +
                 *(int *)(tables + (ulong)*pbVar16 * 4 + 0x400) +
                 *(int *)(tables + (ulong)*pbVar12 * 4);
        uVar27 = uVar11 & 0x40080100;
        if (uVar27 != 0) {
          uVar11 = uVar11 | uVar27 - ((int)uVar27 >> 8);
          uVar11 = uVar11 + (~(uVar11 >> 9) & 0x400801);
        }
        puVar9[2] = (char)uVar11;
        puVar9[3] = 0xff;
        *puVar9 = (char)(uVar11 >> 0xb);
        puVar9[1] = (char)(uVar11 >> 0x16);
      }
    }
  }
  puVar9 = *(undefined1 **)(this + 0x3a0);
LAB_00101134:
  local_60 = (Object *)0x0;
  plVar1 = (long *)(puVar9 + -0x10);
  local_50 = 0;
  if (puVar9 != (undefined1 *)0x0) {
    do {
      lVar13 = *plVar1;
      if (lVar13 == 0) goto LAB_00101179;
      LOCK();
      lVar20 = *plVar1;
      bVar28 = lVar13 == lVar20;
      if (bVar28) {
        *plVar1 = lVar13 + 1;
        lVar20 = lVar13;
      }
      UNLOCK();
    } while (!bVar28);
    if (lVar20 != -1) {
      local_50 = *(long *)(this + 0x3a0);
    }
  }
LAB_00101179:
  uVar4 = *(undefined4 *)(this + 0x3d4);
  uVar5 = *(undefined4 *)(this + 0x3d0);
  pOVar7 = (Object *)operator_new(0x268,"");
  Image::Image((Image *)pOVar7,uVar5,uVar4,0,5,local_58);
  postinitialize_handler(pOVar7);
  cVar6 = RefCounted::init_ref();
  if (cVar6 != '\0') {
    if ((pOVar7 != (Object *)0x0) &&
       (cVar6 = RefCounted::reference(), local_60 = pOVar7, cVar6 == '\0')) {
      local_60 = (Object *)0x0;
    }
    cVar6 = RefCounted::unreference();
    if (cVar6 != '\0') {
      memdelete<Image>((Image *)pOVar7);
    }
  }
  lVar13 = local_50;
  if (local_50 != 0) {
    LOCK();
    plVar1 = (long *)(local_50 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_50 = 0;
      Memory::free_static((void *)(lVar13 + -0x10),false);
    }
  }
  ImageTexture::update(*(Ref **)(this + 0x9b0));
  if ((local_60 != (Object *)0x0) && (cVar6 = RefCounted::unreference(), cVar6 != '\0')) {
    memdelete<Image>((Image *)local_60);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VideoStreamPlaybackTheora::set_file(String const&) */

void __thiscall VideoStreamPlaybackTheora::set_file(VideoStreamPlaybackTheora *this,String *param_1)

{
  Image *pIVar1;
  long *plVar2;
  VideoStreamPlaybackTheora *pVVar3;
  VideoStreamPlaybackTheora *pVVar4;
  VideoStreamPlaybackTheora *pVVar5;
  VideoStreamPlaybackTheora *pVVar6;
  VideoStreamPlaybackTheora *pVVar7;
  VideoStreamPlaybackTheora *pVVar8;
  Object *pOVar9;
  long lVar10;
  long lVar11;
  Image *pIVar12;
  char cVar13;
  int iVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  ulong uVar17;
  undefined8 *puVar18;
  int iVar19;
  ulong uVar20;
  undefined8 *puVar21;
  long lVar22;
  CowData<unsigned_char> *pCVar23;
  CowData<unsigned_char> *this_00;
  Object *pOVar24;
  long in_FS_OFFSET;
  byte bVar25;
  int local_23c;
  undefined8 local_220;
  long local_218;
  Image *local_210;
  Object *local_208;
  undefined8 local_200;
  undefined8 local_1d8 [50];
  undefined8 local_48;
  long local_40;
  
  bVar25 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (this[0x984] != (VideoStreamPlaybackTheora)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("set_file","modules/theora/video_stream_theora.cpp",0x7a,
                       "Condition \"playing\" is true.",0,0);
      return;
    }
    goto LAB_00102c0f;
  }
  local_220 = 0;
  if (*(long *)(this + 0x3b8) != *(long *)param_1) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x3b8),(CowData *)param_1);
  }
  FileAccess::open((String *)&local_208,(int)param_1,(Error *)0x1);
  pOVar9 = *(Object **)(this + 0x3b0);
  pOVar24 = pOVar9;
  if (local_208 == pOVar9) {
LAB_001020cb:
    if (((pOVar24 != (Object *)0x0) &&
        (cVar13 = RefCounted::unreference(), pOVar9 = local_208, cVar13 != '\0')) &&
       (cVar13 = predelete_handler(local_208), cVar13 != '\0')) {
      (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
      Memory::free_static(pOVar9,false);
    }
    if (*(long *)(this + 0x3b0) == 0) goto LAB_001025d9;
    pVVar3 = this + 0x3e0;
    pVVar4 = this + 0x790;
    pVVar5 = this + 0x750;
    pVVar6 = this + 0x400;
    ogg_sync_init(pVVar3);
    pVVar7 = this + 0x7b8;
    vorbis_info_init(pVVar7);
    pVVar8 = this + 0x940;
    vorbis_comment_init(pVVar8);
    th_comment_init(pVVar4);
    th_info_init(pVVar5);
    local_23c = *(int *)(this + 0x9b8);
    *(undefined2 *)(this + 0x3d8) = 0;
LAB_00102179:
    uVar16 = ogg_sync_buffer(pVVar3,0x1000);
    uVar16 = (**(code **)(**(long **)(this + 0x3b0) + 0x220))
                       (*(long **)(this + 0x3b0),uVar16,0x1000);
    ogg_sync_wrote(pVVar3,uVar16);
    if ((int)uVar16 != 0) {
LAB_001021c0:
      iVar14 = ogg_sync_pageout(pVVar3,pVVar6);
      if (0 < iVar14) {
        iVar14 = ogg_page_bos(pVVar6);
        while( true ) {
          if (iVar14 == 0) {
            if ((*(int *)(this + 0x970) == 0) ||
               (ogg_stream_pagein(this + 0x5b8,pVVar6), *(int *)(this + 0x728) == 0)) {
              iVar14 = *(int *)(this + 0x974);
            }
            else {
              iVar14 = *(int *)(this + 0x974);
              this[0x3d8] = (VideoStreamPlaybackTheora)0x1;
            }
            if ((iVar14 != 0) &&
               (ogg_stream_pagein(this + 0x420,pVVar6), *(int *)(this + 0x590) != 0)) {
              this[0x3d9] = (VideoStreamPlaybackTheora)0x1;
            }
            goto LAB_001022c6;
          }
          uVar15 = ogg_page_serialno(pVVar6);
          ogg_stream_init(local_1d8,uVar15);
          ogg_stream_pagein(local_1d8,pVVar6);
          ogg_stream_packetout(local_1d8,(String *)&local_208);
          if ((*(int *)(this + 0x970) == 0) &&
             (iVar14 = th_decode_headerin(pVVar5,pVVar4,&local_220,(String *)&local_208),
             -1 < iVar14)) break;
          if ((*(int *)(this + 0x974) != 0) ||
             (iVar14 = vorbis_synthesis_headerin(pVVar7,pVVar8,(String *)&local_208), iVar14 < 0)) {
            ogg_stream_clear(local_1d8);
            goto LAB_001021c0;
          }
          if (local_23c == 0) goto LAB_00102430;
          vorbis_info_clear(pVVar7);
          vorbis_comment_clear(pVVar8);
          ogg_stream_clear(local_1d8);
          vorbis_info_init(pVVar7);
          vorbis_comment_init(pVVar8);
          local_23c = local_23c + -1;
          iVar14 = ogg_sync_pageout(pVVar3,pVVar6);
          if (iVar14 < 1) goto LAB_00102179;
          iVar14 = ogg_page_bos(pVVar6);
        }
        *(undefined8 *)(this + 0x5b8) = local_1d8[0];
        *(undefined8 *)(this + 0x748) = local_48;
        puVar18 = (undefined8 *)
                  ((long)local_1d8 -
                  (long)(this + (0x5b8 - (long)((ulong)(this + 0x5c0) & 0xfffffffffffffff8))));
        puVar21 = (undefined8 *)((ulong)(this + 0x5c0) & 0xfffffffffffffff8);
        for (uVar20 = (ulong)((int)(this + (0x5b8 - (long)((ulong)(this + 0x5c0) &
                                                          0xfffffffffffffff8))) + 0x198U >> 3);
            uVar20 != 0; uVar20 = uVar20 - 1) {
          *puVar21 = *puVar18;
          puVar18 = puVar18 + (ulong)bVar25 * -2 + 1;
          puVar21 = puVar21 + (ulong)bVar25 * -2 + 1;
        }
        *(undefined4 *)(this + 0x970) = 1;
        goto LAB_001021c0;
      }
      goto LAB_00102179;
    }
LAB_001022c6:
LAB_001022cb:
    do {
      iVar14 = *(int *)(this + 0x970);
      if ((iVar14 == 0) || (2 < iVar14)) {
        if ((*(int *)(this + 0x974) == 0) || (2 < *(int *)(this + 0x974))) {
          if (iVar14 == 0) {
            th_info_clear(pVVar5);
            th_comment_clear(pVVar4);
          }
          else {
            uVar16 = th_decode_alloc(pVVar5,local_220);
            *(undefined8 *)(this + 0x7b0) = uVar16;
            iVar14 = *(int *)(this + 0x780);
            *(int *)(this + 0x960) = iVar14;
            if ((iVar14 != 0) && (1 < iVar14 - 2U)) {
              puts(" video\n  (UNKNOWN Chroma sampling!)");
              uVar16 = *(undefined8 *)(this + 0x7b0);
            }
            th_decode_ctl(uVar16,1,this + 0x978,4);
            *(undefined4 *)(this + 0x97c) = 0;
            this_00 = (CowData<unsigned_char> *)(this + 0x3a0);
            th_decode_ctl(*(undefined8 *)(this + 0x7b0),3,this + 0x97c,4);
            *(undefined4 *)(this + 0x980) = 0;
            *(undefined8 *)(this + 0x3c0) = *(undefined8 *)(this + 0x754);
            *(undefined8 *)(this + 0x3c8) = *(undefined8 *)(this + 0x764);
            uVar20 = *(ulong *)(this + 0x75c);
            *(ulong *)(this + 0x3d0) = uVar20;
            Image::create_empty(&local_210,uVar20 & 0xffffffff,uVar20 >> 0x20,0);
            ImageTexture::set_image(*(Ref **)(this + 0x9b0));
            lVar22 = (long)(*(int *)(this + 0x3d0) * *(int *)(this + 0x3d4) * 4);
            if (lVar22 < 0) {
              _err_print_error("resize","./core/templates/cowdata.h",0x157,
                               "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",
                               0,0);
            }
            else {
              lVar10 = *(long *)(this + 0x3a0);
              if (lVar10 == 0) {
                if (lVar22 != 0) {
                  CowData<unsigned_char>::_copy_on_write(this_00);
LAB_00102c46:
                  uVar20 = lVar22 - 1U >> 1 | lVar22 - 1U;
                  uVar20 = uVar20 | uVar20 >> 2;
                  uVar20 = uVar20 >> 4 | uVar20;
                  uVar20 = uVar20 | uVar20 >> 8;
                  puVar18 = (undefined8 *)
                            Memory::alloc_static((uVar20 >> 0x10 | uVar20) + 0x11,false);
                  if (puVar18 == (undefined8 *)0x0) {
                    _err_print_error("resize","./core/templates/cowdata.h",0x171,
                                     "Parameter \"mem_new\" is null.",0,0);
                  }
                  else {
                    puVar21 = puVar18 + 2;
                    *puVar18 = 1;
                    puVar18[1] = 0;
                    *(undefined8 **)(this + 0x3a0) = puVar21;
LAB_00102bc5:
                    puVar21[-1] = lVar22;
                  }
                }
              }
              else {
                lVar11 = *(long *)(lVar10 + -8);
                if (lVar22 != lVar11) {
                  if (lVar22 == 0) {
                    LOCK();
                    plVar2 = (long *)(lVar10 + -0x10);
                    *plVar2 = *plVar2 + -1;
                    UNLOCK();
                    if (*plVar2 == 0) {
                      lVar22 = *(long *)(this + 0x3a0);
                      *(undefined8 *)(this + 0x3a0) = 0;
                      Memory::free_static((void *)(lVar22 + -0x10),false);
                    }
                    else {
                      *(undefined8 *)(this + 0x3a0) = 0;
                    }
                  }
                  else {
                    pCVar23 = this_00;
                    CowData<unsigned_char>::_copy_on_write(this_00);
                    uVar20 = lVar22 - 1U >> 1 | lVar22 - 1U;
                    uVar20 = uVar20 >> 2 | uVar20;
                    uVar20 = uVar20 >> 4 | uVar20;
                    uVar20 = uVar20 >> 8 | uVar20;
                    uVar20 = uVar20 >> 0x10 | uVar20;
                    if (lVar11 == 0) goto LAB_00102c46;
                    uVar17 = lVar11 - 1U | lVar11 - 1U >> 1;
                    uVar17 = uVar17 | uVar17 >> 2;
                    uVar17 = uVar17 | uVar17 >> 4;
                    uVar17 = uVar17 | uVar17 >> 8;
                    uVar17 = uVar17 | uVar17 >> 0x10;
                    uVar17 = uVar17 | uVar17 >> 0x20;
                    if (lVar11 < lVar22) {
                      if ((uVar17 == uVar20) ||
                         (iVar14 = CowData<unsigned_char>::_realloc(this_00,uVar20 + 1),
                         pCVar23 = this_00, iVar14 == 0)) {
                        puVar21 = *(undefined8 **)(this + 0x3a0);
                        if (puVar21 == (undefined8 *)0x0) {
                          set_file((String *)pCVar23);
                          return;
                        }
                        goto LAB_00102bc5;
                      }
                    }
                    else if ((uVar17 == uVar20) ||
                            (iVar14 = CowData<unsigned_char>::_realloc(this_00,uVar20 + 1),
                            pCVar23 = this_00, iVar14 == 0)) {
                      if (*(long *)(this + 0x3a0) == 0) {
                        set_file((String *)pCVar23);
                        return;
                      }
                      *(long *)(*(long *)(this + 0x3a0) + -8) = lVar22;
                    }
                  }
                }
              }
            }
            *(double *)(this + 0x968) =
                 (double)*(uint *)(this + 0x770) / (double)*(uint *)(this + 0x76c);
            if ((local_210 != (Image *)0x0) && (cVar13 = RefCounted::unreference(), cVar13 != '\0'))
            {
              memdelete<Image>(local_210);
            }
          }
          th_setup_free(local_220);
          if (*(int *)(this + 0x974) == 0) {
            vorbis_info_clear(pVVar7);
            vorbis_comment_clear(pVVar8);
          }
          else {
            vorbis_synthesis_init(this + 0x7f0,pVVar7);
            vorbis_block_init(this + 0x7f0,this + 0x880);
          }
          *(undefined8 *)(this + 0x990) = 0;
          *(undefined2 *)(this + 0x984) = 0x100;
          this[0x989] = (VideoStreamPlaybackTheora)(*(int *)(this + 0x970) == 0);
          this[0x98a] = (VideoStreamPlaybackTheora)(*(int *)(this + 0x974) == 0);
          goto LAB_0010237f;
        }
LAB_00102517:
        iVar14 = ogg_stream_packetout(this + 0x420,(String *)&local_208);
        if (*(int *)(this + 0x974) < 3 && *(int *)(this + 0x974) != 0) {
          while (iVar14 != 0) {
            if ((iVar14 < 0) ||
               (iVar14 = vorbis_synthesis_headerin(pVVar7,pVVar8,(String *)&local_208), iVar14 != 0)
               ) {
              fwrite("Error parsing Vorbis stream headers; corrupt stream?\n",1,0x35,_stderr);
              clear(this);
              goto LAB_0010237f;
            }
            iVar14 = *(int *)(this + 0x974);
            *(int *)(this + 0x974) = iVar14 + 1;
            if ((iVar14 + 1 == 3) ||
               (iVar14 = ogg_stream_packetout(this + 0x420,(String *)&local_208),
               *(int *)(this + 0x974) == 0 || 2 < *(int *)(this + 0x974))) break;
          }
        }
      }
      else {
        iVar14 = ogg_stream_packetout(this + 0x5b8,(String *)&local_208);
        if ((*(int *)(this + 0x970) < 3) && (*(int *)(this + 0x970) != 0)) {
          while (iVar14 != 0) {
            if ((iVar14 < 0) ||
               (iVar14 = th_decode_headerin(pVVar5,pVVar4,&local_220,(String *)&local_208),
               iVar14 == 0)) {
              fwrite("Error parsing Theora stream headers; corrupt stream?\n",1,0x35,_stderr);
              clear(this);
              goto LAB_0010237f;
            }
            iVar14 = ogg_stream_packetout(this + 0x5b8,(String *)&local_208);
            iVar19 = *(int *)(this + 0x970) + 1;
            *(int *)(this + 0x970) = iVar19;
            if ((iVar19 == 0) || (2 < iVar19)) break;
          }
        }
        if (*(int *)(this + 0x974) != 0 && *(int *)(this + 0x974) < 3) goto LAB_00102517;
      }
      pVVar6 = this + 0x400;
      iVar14 = ogg_sync_pageout(pVVar3,pVVar6);
      if (0 < iVar14) {
        if ((*(int *)(this + 0x970) != 0) &&
           (ogg_stream_pagein(this + 0x5b8,pVVar6), *(int *)(this + 0x728) != 0)) {
          this[0x3d8] = (VideoStreamPlaybackTheora)0x1;
        }
        if ((*(int *)(this + 0x974) != 0) &&
           (ogg_stream_pagein(this + 0x420,pVVar6), *(int *)(this + 0x590) != 0)) {
          this[0x3d9] = (VideoStreamPlaybackTheora)0x1;
        }
        goto LAB_001022cb;
      }
      uVar16 = ogg_sync_buffer(pVVar3,0x1000);
      uVar16 = (**(code **)(**(long **)(this + 0x3b0) + 0x220))
                         (*(long **)(this + 0x3b0),uVar16,0x1000);
      ogg_sync_wrote(pVVar3,uVar16);
    } while ((int)uVar16 != 0);
    fwrite("End of file while searching for codec headers.\n",1,0x2f,_stderr);
    clear(this);
  }
  else {
    *(Object **)(this + 0x3b0) = local_208;
    if (local_208 != (Object *)0x0) {
      cVar13 = RefCounted::reference();
      if (cVar13 == '\0') {
        *(undefined8 *)(this + 0x3b0) = 0;
      }
      pOVar24 = local_208;
      if (pOVar9 != (Object *)0x0) goto LAB_001020b6;
      goto LAB_001020cb;
    }
    if (pOVar9 != (Object *)0x0) {
LAB_001020b6:
      cVar13 = RefCounted::unreference();
      pOVar24 = local_208;
      if ((cVar13 != '\0') &&
         (cVar13 = predelete_handler(pOVar9), pOVar24 = local_208, cVar13 != '\0')) {
        (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
        Memory::free_static(pOVar9,false);
        pOVar24 = local_208;
      }
      goto LAB_001020cb;
    }
LAB_001025d9:
    local_210 = (Image *)0x0;
    local_208 = (Object *)&_LC22;
    local_200 = 2;
    String::parse_latin1((StrRange *)&local_210);
    operator+((char *)&local_218,(String *)"Cannot open file \'");
    String::operator+((String *)&local_208,(String *)&local_218);
    _err_print_error("set_file","modules/theora/video_stream_theora.cpp",0x80,
                     "Condition \"file.is_null()\" is true.",(String *)&local_208,0,0);
    pOVar9 = local_208;
    if (local_208 != (Object *)0x0) {
      LOCK();
      pOVar24 = local_208 + -0x10;
      *(long *)pOVar24 = *(long *)pOVar24 + -1;
      UNLOCK();
      if (*(long *)pOVar24 == 0) {
        local_208 = (Object *)0x0;
        Memory::free_static(pOVar9 + -0x10,false);
      }
    }
    lVar22 = local_218;
    if (local_218 != 0) {
      LOCK();
      plVar2 = (long *)(local_218 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        local_218 = 0;
        Memory::free_static((void *)(lVar22 + -0x10),false);
      }
    }
    pIVar12 = local_210;
    if (local_210 != (Image *)0x0) {
      LOCK();
      pIVar1 = local_210 + -0x10;
      *(long *)pIVar1 = *(long *)pIVar1 + -1;
      UNLOCK();
      if (*(long *)pIVar1 == 0) {
        local_210 = (Image *)0x0;
        Memory::free_static(pIVar12 + -0x10,false);
      }
    }
  }
LAB_0010237f:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00102c0f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00102430:
  *(undefined8 *)(this + 0x420) = local_1d8[0];
  lVar22 = (long)(this + 0x420) - (long)((ulong)(this + 0x428) & 0xfffffffffffffff8);
  *(undefined8 *)(this + 0x5b0) = local_48;
  puVar18 = (undefined8 *)((long)local_1d8 - lVar22);
  puVar21 = (undefined8 *)((ulong)(this + 0x428) & 0xfffffffffffffff8);
  for (uVar20 = (ulong)((int)lVar22 + 0x198U >> 3); uVar20 != 0; uVar20 = uVar20 - 1) {
    *puVar21 = *puVar18;
    puVar18 = puVar18 + (ulong)bVar25 * -2 + 1;
    puVar21 = puVar21 + (ulong)bVar25 * -2 + 1;
  }
  *(undefined4 *)(this + 0x974) = 1;
  goto LAB_001021c0;
}



/* VideoStreamPlaybackTheora::stop() */

void __thiscall VideoStreamPlaybackTheora::stop(VideoStreamPlaybackTheora *this)

{
  if (this[0x984] != (VideoStreamPlaybackTheora)0x0) {
    clear(this);
    set_file(this,(String *)(this + 0x3b8));
  }
  this[0x984] = (VideoStreamPlaybackTheora)0x0;
  *(undefined8 *)(this + 0x990) = 0;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VideoStreamPlaybackTheora::play() */

void __thiscall VideoStreamPlaybackTheora::play(VideoStreamPlaybackTheora *this)

{
  long in_FS_OFFSET;
  double dVar1;
  long local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (this[0x984] != (VideoStreamPlaybackTheora)0x0) {
    if (*(code **)(*(long *)this + 0x1c8) != stop) {
      (**(code **)(*(long *)this + 0x1c8))();
      goto LAB_00102d83;
    }
    clear(this);
    set_file(this,(String *)(this + 0x3b8));
  }
  *(undefined8 *)(this + 0x990) = 0;
LAB_00102d83:
  this[0x984] = (VideoStreamPlaybackTheora)0x1;
  ProjectSettings::get_singleton();
  StringName::StringName((StringName *)&local_50,"audio/video/video_delay_compensation_ms",false);
  ProjectSettings::get_setting_with_override((StringName *)local_48);
  dVar1 = Variant::operator_cast_to_double((Variant *)local_48);
  *(double *)(this + 0x9a8) = dVar1;
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  *(double *)(this + 0x9a8) = *(double *)(this + 0x9a8) / __LC34;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VideoStreamPlaybackTheora::update(double) [clone .part.0] */

void __thiscall VideoStreamPlaybackTheora::update(VideoStreamPlaybackTheora *this,double param_1)

{
  VideoStreamPlaybackTheora *pVVar1;
  VideoStreamPlaybackTheora *pVVar2;
  double dVar3;
  long lVar4;
  code *pcVar5;
  long *plVar6;
  undefined1 *puVar7;
  VideoStreamPlaybackTheora VVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  undefined1 *puVar16;
  int iVar17;
  VideoStreamPlaybackTheora VVar18;
  long in_FS_OFFSET;
  double dVar19;
  double dVar20;
  undefined1 local_4030 [16384];
  
  puVar7 = &stack0xffffffffffffffd0;
  do {
    puVar16 = puVar7;
    *(undefined8 *)(puVar16 + -0x1000) = *(undefined8 *)(puVar16 + -0x1000);
    puVar7 = puVar16 + -0x1000;
  } while (puVar16 + -0x1000 != local_4030);
  VVar18 = (VideoStreamPlaybackTheora)0x0;
  dVar20 = *(double *)(this + 0x990);
  *(undefined8 *)(puVar16 + 0x2ff0) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  *(double *)(this + 0x990) = dVar20 + param_1;
  *(double *)(puVar16 + -0x1070) = (dVar20 + param_1) - *(double *)(this + 0x9a8);
LAB_00102eb2:
  if (VVar18 == (VideoStreamPlaybackTheora)0x0) goto LAB_0010300d;
LAB_00102ebb:
  if (this[0x988] == (VideoStreamPlaybackTheora)0x0) goto code_r0x00102ec8;
LAB_00103362:
  dVar20 = *(double *)(puVar16 + -0x1070);
LAB_00103368:
  if (*(double *)(this + 0x9a0) <= dVar20) {
    if (this[0x987] == (VideoStreamPlaybackTheora)0x0) {
      uVar14 = *(undefined8 *)(this + 0x7b0);
      *(undefined8 *)(puVar16 + -0x1080) = 0x1033ea;
      th_decode_ycbcr_out(uVar14,(th_img_plane *)(puVar16 + -0x1018));
      *(undefined8 *)(puVar16 + -0x1080) = 0x1033f5;
      video_write(this,(th_img_plane *)(puVar16 + -0x1018));
    }
    *(undefined2 *)(this + 0x987) = 0;
    *(undefined8 *)(this + 0x9a0) = *(undefined8 *)(this + 0x998);
  }
  goto LAB_00103339;
LAB_00103268:
  lVar15 = lVar15 + 4;
  if ((long)iVar11 * 4 == lVar15) goto LAB_001030e3;
  goto LAB_0010309d;
LAB_001032dd:
  VVar18 = VVar8;
  VVar8 = this[0x989];
  goto LAB_00102ed7;
code_r0x00102ec8:
  VVar8 = this[0x989];
  if (VVar8 == (VideoStreamPlaybackTheora)0x0) {
LAB_00102ed7:
    do {
      if (VVar8 != (VideoStreamPlaybackTheora)0x0) {
        VVar8 = this[0x988];
LAB_00102f8f:
        if (VVar18 == (VideoStreamPlaybackTheora)0x0) goto LAB_00103135;
        if (VVar8 == (VideoStreamPlaybackTheora)0x0) goto LAB_00103135;
LAB_00102fa0:
        VVar18 = (VideoStreamPlaybackTheora)0x1;
        do {
          if (*(double *)(this + 0x998) - *(double *)(puVar16 + -0x1070) <=
              (_LC36 * (double)*(uint *)(this + 0x770)) / (double)*(uint *)(this + 0x76c)) {
            if (*(double *)(this + 0x998) - *(double *)(puVar16 + -0x1070) <
                ((double)*(uint *)(this + 0x770) * __LC37) / (double)*(uint *)(this + 0x76c)) {
              *(uint *)(this + 0x980) = -(uint)(0 < *(int *)(this + 0x97c));
            }
            goto LAB_00102eb2;
          }
          *(uint *)(this + 0x980) = (uint)(*(int *)(this + 0x97c) < *(int *)(this + 0x978));
          if (VVar18 != (VideoStreamPlaybackTheora)0x0) goto LAB_00102ebb;
LAB_0010300d:
          VVar8 = this[0x98a];
          if (VVar8 != (VideoStreamPlaybackTheora)0x0) {
            if (this[0x988] != (VideoStreamPlaybackTheora)0x0) goto LAB_00103362;
            if (this[0x989] != (VideoStreamPlaybackTheora)0x0) goto LAB_00103330;
          }
          pVVar1 = this + 0x7f0;
          *(undefined1 **)(puVar16 + -0x1068) = puVar16 + -0x1050;
          while (VVar8 == (VideoStreamPlaybackTheora)0x0) {
            *(undefined8 *)(puVar16 + -0x1080) = 0x103058;
            iVar9 = vorbis_synthesis_pcmout(pVVar1,*(undefined8 *)(puVar16 + -0x1068));
            if (iVar9 < 1) {
              *(undefined8 *)(puVar16 + -0x1080) = 0x10328e;
              iVar9 = ogg_stream_packetout(this + 0x420,puVar16 + -0x1048);
              if (iVar9 < 1) {
                this[0x98a] = this[0x3d9];
                if (this[0x988] != (VideoStreamPlaybackTheora)0x0) goto LAB_00103135;
                VVar8 = this[0x989];
                VVar18 = (VideoStreamPlaybackTheora)0x0;
                goto LAB_00102ed7;
              }
              *(undefined8 *)(puVar16 + -0x1080) = 0x1032a4;
              iVar9 = vorbis_synthesis(this + 0x880,puVar16 + -0x1048);
              if (iVar9 == 0) {
                *(undefined8 *)(puVar16 + -0x1080) = 0x1032b7;
                vorbis_synthesis_blockin(pVVar1,this + 0x880);
              }
            }
            else {
              *(int *)(puVar16 + -0x105c) = iVar9;
              do {
                iVar12 = *(int *)(this + 0x7bc);
                iVar11 = (int)(0x1000 / (long)iVar12);
                if (iVar9 < iVar11) {
                  iVar11 = iVar9;
                }
                if (0 < iVar11) {
                  lVar4 = *(long *)(puVar16 + -0x1050);
                  lVar15 = 0;
LAB_0010309d:
                  if (iVar12 < 1) goto LAB_00103268;
                  iVar17 = 0;
                  do {
                    lVar13 = 0;
                    do {
                      *(undefined4 *)(puVar16 + -0x1018 + lVar13 * 4 + (long)iVar17 * 4) =
                           *(undefined4 *)(*(long *)(lVar4 + lVar13 * 8) + lVar15);
                      lVar13 = lVar13 + 1;
                    } while (iVar12 != lVar13);
                    lVar15 = lVar15 + 4;
                    iVar17 = iVar17 + iVar12;
                  } while (lVar15 != (long)iVar11 * 4);
                }
LAB_001030e3:
                uVar14 = *(undefined8 *)(this + 0x248);
                pcVar5 = *(code **)(this + 0x240);
                *(undefined8 *)(puVar16 + -0x1080) = 0x1030f6;
                iVar12 = (*pcVar5)(uVar14,puVar16 + -0x1018,iVar11);
                iVar9 = iVar9 - iVar12;
                if (iVar11 != iVar12) {
                  *(undefined8 *)(puVar16 + -0x1080) = 0x1032cb;
                  vorbis_synthesis_read(pVVar1,*(int *)(puVar16 + -0x105c) - iVar9);
                  if (this[0x988] != (VideoStreamPlaybackTheora)0x0) goto LAB_00102fa0;
                  VVar8 = (VideoStreamPlaybackTheora)0x1;
                  goto LAB_001032dd;
                }
              } while (iVar9 != 0);
              *(undefined8 *)(puVar16 + -0x1080) = 0x103117;
              vorbis_synthesis_read(pVVar1,*(undefined4 *)(puVar16 + -0x105c));
            }
            VVar8 = this[0x98a];
          }
          VVar8 = this[0x988];
          if (this[0x988] == (VideoStreamPlaybackTheora)0x0) goto LAB_001032dd;
LAB_00103135:
          pVVar1 = this + 0x3e0;
          *(undefined8 *)(puVar16 + -0x1080) = 0x103149;
          uVar14 = ogg_sync_buffer(pVVar1,0x1000);
          plVar6 = *(long **)(this + 0x3b0);
          pcVar5 = *(code **)(*plVar6 + 0x220);
          *(undefined8 *)(puVar16 + -0x1080) = 0x103161;
          uVar14 = (*pcVar5)(plVar6,uVar14,0x1000);
          *(undefined8 *)(puVar16 + -0x1080) = 0x10316f;
          ogg_sync_wrote(pVVar1,uVar14);
          if ((int)uVar14 < 1) {
            dVar20 = *(double *)(puVar16 + -0x1070);
            *(undefined2 *)(this + 0x3d8) = 0x101;
            if (this[0x988] == (VideoStreamPlaybackTheora)0x0) goto LAB_00103330;
            goto LAB_00103368;
          }
          pVVar2 = this + 0x400;
          while( true ) {
            *(undefined8 *)(puVar16 + -0x1080) = 0x103190;
            iVar9 = ogg_sync_pageout(pVVar1,pVVar2);
            if (iVar9 < 1) break;
            if (*(int *)(this + 0x970) != 0) {
              *(undefined8 *)(puVar16 + -0x1080) = 0x103227;
              ogg_stream_pagein(this + 0x5b8,pVVar2);
              if (*(int *)(this + 0x728) != 0) {
                this[0x3d8] = (VideoStreamPlaybackTheora)0x1;
              }
            }
            if (*(int *)(this + 0x974) != 0) {
              *(undefined8 *)(puVar16 + -0x1080) = 0x1031bd;
              ogg_stream_pagein(this + 0x420,pVVar2);
              if (*(int *)(this + 0x590) != 0) {
                this[0x3d9] = (VideoStreamPlaybackTheora)0x1;
              }
            }
          }
        } while( true );
      }
      *(undefined8 *)(puVar16 + -0x1080) = 0x102f0b;
      iVar9 = ogg_stream_packetout(this + 0x5b8,puVar16 + -0x1048);
      if (iVar9 < 1) {
        this[0x989] = this[0x3d8];
        VVar8 = this[0x988];
        goto LAB_00102f8f;
      }
      if (-1 < *(long *)(puVar16 + -0x1028)) {
        uVar14 = *(undefined8 *)(this + 0x7b0);
        *(undefined8 *)(puVar16 + -0x1080) = 0x102f36;
        th_decode_ctl(uVar14,5,puVar16 + -0x1028);
      }
      uVar14 = *(undefined8 *)(this + 0x7b0);
      *(undefined8 *)(puVar16 + -0x1080) = 0x102f4a;
      uVar10 = th_decode_packetin(uVar14,puVar16 + -0x1048,puVar16 + -0x1050);
      if (uVar10 < 2) {
        uVar14 = *(undefined8 *)(this + 0x7b0);
        *(undefined8 *)(puVar16 + -0x1080) = 0x102f62;
        dVar19 = (double)th_granule_time(uVar14,*(undefined8 *)(puVar16 + -0x1050));
        dVar20 = *(double *)(puVar16 + -0x1070);
        dVar3 = *(double *)(puVar16 + -0x1070);
        *(double *)(this + 0x998) = dVar19;
        if (dVar19 < dVar3 || dVar19 == dVar20) {
          *(uint *)(this + 0x980) = -(uint)(0 < *(int *)(this + 0x97c));
          goto LAB_00102ede;
        }
        this[0x987] = SUB41(uVar10,0);
        this[0x987] = (VideoStreamPlaybackTheora)((byte)this[0x987] & 1);
        this[0x988] = (VideoStreamPlaybackTheora)0x1;
LAB_00102f8a:
        VVar8 = (VideoStreamPlaybackTheora)0x1;
        goto LAB_00102f8f;
      }
LAB_00102ede:
      if (this[0x988] != (VideoStreamPlaybackTheora)0x0) goto LAB_00102f8a;
      VVar8 = this[0x989];
    } while( true );
  }
LAB_00103330:
  if ((this[0x989] != (VideoStreamPlaybackTheora)0x0) &&
     (this[0x98a] != (VideoStreamPlaybackTheora)0x0)) {
    if (*(code **)(*(long *)this + 0x1c8) != stop) {
      if (*(long *)(puVar16 + 0x2ff0) == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010341e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)this + 0x1c8))(this);
        return;
      }
      goto LAB_00103420;
    }
    if (this[0x984] != (VideoStreamPlaybackTheora)0x0) {
      *(undefined8 *)(puVar16 + -0x1080) = 0x103430;
      clear(this);
      *(undefined8 *)(puVar16 + -0x1080) = 0x10343f;
      set_file(this,(String *)(this + 0x3b8));
    }
    this[0x984] = (VideoStreamPlaybackTheora)0x0;
    *(undefined8 *)(this + 0x990) = 0;
  }
LAB_00103339:
  if (*(long *)(puVar16 + 0x2ff0) == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00103420:
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar16 + -0x1080) = &UNK_00103425;
  __stack_chk_fail();
}



/* VideoStreamPlaybackTheora::update(double) */

void __thiscall VideoStreamPlaybackTheora::update(VideoStreamPlaybackTheora *this,double param_1)

{
  if (((*(long *)(this + 0x3b0) != 0) && (this[0x984] != (VideoStreamPlaybackTheora)0x0)) &&
     (this[0x986] == (VideoStreamPlaybackTheora)0x0)) {
    update(this,param_1);
    return;
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



/* RefCounted::is_class_ptr(void*) const */

uint __thiscall RefCounted::is_class_ptr(RefCounted *this,void *param_1)

{
  return (uint)CONCAT71(0x1090,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1090,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
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



/* ResourceFormatLoader::is_class_ptr(void*) const */

uint __thiscall ResourceFormatLoader::is_class_ptr(ResourceFormatLoader *this,void *param_1)

{
  return (uint)CONCAT71(0x1090,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1090,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1090,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* ResourceFormatLoader::_getv(StringName const&, Variant&) const */

undefined8 ResourceFormatLoader::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ResourceFormatLoader::_setv(StringName const&, Variant const&) */

undefined8 ResourceFormatLoader::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ResourceFormatLoader::_validate_propertyv(PropertyInfo&) const */

void ResourceFormatLoader::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* ResourceFormatLoader::_property_can_revertv(StringName const&) const */

undefined8 ResourceFormatLoader::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* ResourceFormatLoader::_property_get_revertv(StringName const&, Variant&) const */

undefined8 ResourceFormatLoader::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ResourceFormatLoader::_notificationv(int, bool) */

void ResourceFormatLoader::_notificationv(int param_1,bool param_2)

{
  return;
}



/* ResourceFormatLoader::is_import_valid(String const&) const */

undefined8 ResourceFormatLoader::is_import_valid(String *param_1)

{
  return 1;
}



/* ResourceFormatLoader::is_imported(String const&) const */

undefined8 ResourceFormatLoader::is_imported(String *param_1)

{
  return 0;
}



/* ResourceFormatLoader::get_import_order(String const&) const */

undefined8 ResourceFormatLoader::get_import_order(String *param_1)

{
  return 0;
}



/* VideoStreamPlaybackTheora::is_class_ptr(void*) const */

uint __thiscall
VideoStreamPlaybackTheora::is_class_ptr(VideoStreamPlaybackTheora *this,void *param_1)

{
  return (uint)CONCAT71(0x1090,(undefined4 *)param_1 ==
                               &VideoStreamPlayback::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x108f,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1090,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1090,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1090,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* VideoStreamPlaybackTheora::_getv(StringName const&, Variant&) const */

undefined8 VideoStreamPlaybackTheora::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* VideoStreamPlaybackTheora::_setv(StringName const&, Variant const&) */

undefined8 VideoStreamPlaybackTheora::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* VideoStreamPlaybackTheora::_validate_propertyv(PropertyInfo&) const */

void VideoStreamPlaybackTheora::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* VideoStreamPlaybackTheora::_property_can_revertv(StringName const&) const */

undefined8 VideoStreamPlaybackTheora::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* VideoStreamPlaybackTheora::_property_get_revertv(StringName const&, Variant&) const */

undefined8 VideoStreamPlaybackTheora::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* VideoStreamPlaybackTheora::_notificationv(int, bool) */

void VideoStreamPlaybackTheora::_notificationv(int param_1,bool param_2)

{
  return;
}



/* VideoStreamTheora::is_class_ptr(void*) const */

uint __thiscall VideoStreamTheora::is_class_ptr(VideoStreamTheora *this,void *param_1)

{
  return (uint)CONCAT71(0x1090,(undefined4 *)param_1 == &VideoStream::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x108f,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1090,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1090,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1090,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* VideoStreamTheora::_getv(StringName const&, Variant&) const */

undefined8 VideoStreamTheora::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* VideoStreamTheora::_setv(StringName const&, Variant const&) */

undefined8 VideoStreamTheora::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* VideoStreamTheora::_validate_propertyv(PropertyInfo&) const */

void VideoStreamTheora::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* VideoStreamTheora::_property_can_revertv(StringName const&) const */

undefined8 VideoStreamTheora::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* VideoStreamTheora::_property_get_revertv(StringName const&, Variant&) const */

undefined8 VideoStreamTheora::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* VideoStreamTheora::_notificationv(int, bool) */

void VideoStreamTheora::_notificationv(int param_1,bool param_2)

{
  return;
}



/* VideoStreamTheora::set_audio_track(int) */

void __thiscall VideoStreamTheora::set_audio_track(VideoStreamTheora *this,int param_1)

{
  *(int *)(this + 0x260) = param_1;
  return;
}



/* VideoStreamTheora::~VideoStreamTheora() */

void __thiscall VideoStreamTheora::~VideoStreamTheora(VideoStreamTheora *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00107dd8;
  VideoStream::~VideoStream((VideoStream *)this);
  return;
}



/* VideoStreamTheora::~VideoStreamTheora() */

void __thiscall VideoStreamTheora::~VideoStreamTheora(VideoStreamTheora *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00107dd8;
  VideoStream::~VideoStream((VideoStream *)this);
  operator_delete(this,0x268);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00107c78;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00107c78;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
}



/* CowData<unsigned char>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<unsigned_char>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VideoStreamPlaybackTheora::set_file(String const&) [clone .cold] */

void VideoStreamPlaybackTheora::set_file(String *param_1)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
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
LAB_00103b73:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00103b73;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_00103bde;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_00103bde:
  return &_get_class_namev()::_class_name_static;
}



/* ResourceFormatLoader::_get_class_namev() const */

undefined8 * ResourceFormatLoader::_get_class_namev(void)

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
LAB_00103c63:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00103c63;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"ResourceFormatLoader");
      goto LAB_00103cce;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"ResourceFormatLoader");
LAB_00103cce:
  return &_get_class_namev()::_class_name_static;
}



/* VideoStreamTheora::_get_class_namev() const */

undefined8 * VideoStreamTheora::_get_class_namev(void)

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
LAB_00103d53:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00103d53;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"VideoStreamTheora");
      goto LAB_00103dbe;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"VideoStreamTheora");
LAB_00103dbe:
  return &_get_class_namev()::_class_name_static;
}



/* VideoStreamPlaybackTheora::_get_class_namev() const */

undefined8 * VideoStreamPlaybackTheora::_get_class_namev(void)

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
LAB_00103e43:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00103e43;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"VideoStreamPlaybackTheora");
      goto LAB_00103eae;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"VideoStreamPlaybackTheora");
LAB_00103eae:
  return &_get_class_namev()::_class_name_static;
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



/* ResourceFormatLoader::get_import_group_file(String const&) const */

String * ResourceFormatLoader::get_import_group_file(String *param_1)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)param_1 = 0;
  String::parse_latin1((StrRange *)param_1);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Image::~Image() */

void __thiscall Image::~Image(Image *this)

{
  long *plVar1;
  long lVar2;
  
  *(code **)this = strlen;
  if (*(long *)(this + 0x250) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x250) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x250);
      *(undefined8 *)(this + 0x250) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      Resource::~Resource((Resource *)this);
      return;
    }
  }
  Resource::~Resource((Resource *)this);
  return;
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



/* ResourceFormatLoader::get_class() const */

void ResourceFormatLoader::get_class(void)

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



/* VideoStreamPlaybackTheora::get_class() const */

void VideoStreamPlaybackTheora::get_class(void)

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



/* VideoStreamTheora::get_class() const */

void VideoStreamTheora::get_class(void)

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
            if (lVar5 == 0) goto LAB_0010443f;
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
LAB_0010443f:
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
    if (cVar6 != '\0') goto LAB_001044f3;
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
              if (lVar5 == 0) goto LAB_001045a3;
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
LAB_001045a3:
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
      if (cVar6 != '\0') goto LAB_001044f3;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = String::operator==(param_1,"Object");
      return uVar7;
    }
  }
  else {
LAB_001044f3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ResourceFormatLoader::is_class(String const&) const */

undefined8 __thiscall ResourceFormatLoader::is_class(ResourceFormatLoader *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_001046cf;
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
LAB_001046cf:
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
    if (cVar5 != '\0') goto LAB_00104783;
  }
  cVar5 = String::operator==(param_1,"ResourceFormatLoader");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_00104783:
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
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_50;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    Object::initialize_class();
    local_48 = 0;
    local_38 = "Object";
    local_30 = 6;
    String::parse_latin1((StrRange *)&local_48);
    StringName::StringName((StringName *)&local_40,(String *)&local_48,false);
    local_38 = "RefCounted";
    local_50 = 0;
    local_30 = 10;
    String::parse_latin1((StrRange *)&local_50);
    StringName::StringName((StringName *)&local_38,(String *)&local_50,false);
    ClassDB::_add_class2((StringName *)&local_38,(StringName *)&local_40);
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
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
    if ((StringName::configured != '\0') && (local_40 != 0)) {
      StringName::unref();
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
    if ((code *)PTR__bind_methods_0010c010 != Object::_bind_methods) {
      RefCounted::_bind_methods();
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
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
LAB_00104ae8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00104ae8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x00104b06;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x00104b06:
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



/* ResourceFormatLoader::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
ResourceFormatLoader::_get_property_listv(ResourceFormatLoader *this,List *param_1,bool param_2)

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
  local_78 = "ResourceFormatLoader";
  local_70 = 0x14;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "ResourceFormatLoader";
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
  if (local_90 == 0) {
LAB_00104ee8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00104ee8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00104f05;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00104f05:
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
  StringName::StringName((StringName *)&local_78,"ResourceFormatLoader",false);
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



/* VideoStreamPlaybackTheora::_initialize_classv() */

void VideoStreamPlaybackTheora::_initialize_classv(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_60;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (VideoStreamPlayback::initialize_class()::initialized == '\0') {
      if (Resource::initialize_class()::initialized == '\0') {
        Resource::initialize_class();
      }
      local_58 = 0;
      local_40 = 8;
      local_48 = "Resource";
      String::parse_latin1((StrRange *)&local_58);
      StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
      local_48 = "VideoStreamPlayback";
      local_60 = 0;
      local_40 = 0x13;
      String::parse_latin1((StrRange *)&local_60);
      StringName::StringName((StringName *)&local_48,(String *)&local_60,false);
      ClassDB::_add_class2((StringName *)&local_48,(StringName *)&local_50);
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      lVar2 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar1 = (long *)(local_60 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_50 != 0)) {
        StringName::unref();
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
      if ((code *)PTR__bind_methods_0010c018 != Resource::_bind_methods) {
        VideoStreamPlayback::_bind_methods();
      }
      VideoStreamPlayback::initialize_class()::initialized = '\x01';
    }
    local_48 = "VideoStreamPlayback";
    local_58 = 0;
    local_40 = 0x13;
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "VideoStreamPlaybackTheora";
    local_60 = 0;
    local_40 = 0x19;
    String::parse_latin1((StrRange *)&local_60);
    StringName::StringName((StringName *)&local_48,(String *)&local_60,false);
    ClassDB::_add_class2((StringName *)&local_48,(StringName *)&local_50);
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
    lVar2 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    if ((StringName::configured != '\0') && (local_50 != 0)) {
      StringName::unref();
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
    initialize_class()::initialized = '\x01';
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* VideoStreamTheora::_initialize_classv() */

void VideoStreamTheora::_initialize_classv(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_60;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (VideoStream::initialize_class()::initialized == '\0') {
      if (Resource::initialize_class()::initialized == '\0') {
        Resource::initialize_class();
      }
      local_58 = 0;
      local_40 = 8;
      local_48 = "Resource";
      String::parse_latin1((StrRange *)&local_58);
      StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
      local_48 = "VideoStream";
      local_60 = 0;
      local_40 = 0xb;
      String::parse_latin1((StrRange *)&local_60);
      StringName::StringName((StringName *)&local_48,(String *)&local_60,false);
      ClassDB::_add_class2((StringName *)&local_48,(StringName *)&local_50);
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      lVar2 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar1 = (long *)(local_60 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_50 != 0)) {
        StringName::unref();
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
      if ((code *)PTR__bind_methods_0010c020 != Resource::_bind_methods) {
        VideoStream::_bind_methods();
      }
      VideoStream::initialize_class()::initialized = '\x01';
    }
    local_48 = "VideoStream";
    local_58 = 0;
    local_40 = 0xb;
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "VideoStreamTheora";
    local_60 = 0;
    local_40 = 0x11;
    String::parse_latin1((StrRange *)&local_60);
    StringName::StringName((StringName *)&local_48,(String *)&local_60,false);
    ClassDB::_add_class2((StringName *)&local_48,(StringName *)&local_50);
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
    lVar2 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    if ((StringName::configured != '\0') && (local_50 != 0)) {
      StringName::unref();
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
    initialize_class()::initialized = '\x01';
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ResourceFormatLoader::_initialize_classv() */

void ResourceFormatLoader::_initialize_classv(void)

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
  if (initialize_class()::initialized != '\0') goto LAB_001058fb;
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
    if (local_68 == 0) {
LAB_00105a0a:
      if ((code *)PTR__bind_methods_0010c008 != RefCounted::_bind_methods) {
LAB_00105a1a:
        RefCounted::_bind_methods();
      }
    }
    else {
      LOCK();
      plVar1 = (long *)(local_68 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) goto LAB_00105a0a;
      local_68 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      if ((code *)PTR__bind_methods_0010c008 != RefCounted::_bind_methods) goto LAB_00105a1a;
    }
    RefCounted::initialize_class()::initialized = '\x01';
  }
  local_58 = "RefCounted";
  local_68 = 0;
  local_50 = 10;
  String::parse_latin1((StrRange *)&local_68);
  StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
  local_58 = "ResourceFormatLoader";
  local_70 = 0;
  local_50 = 0x14;
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
  if ((code *)PTR__bind_methods_0010c028 != RefCounted::_bind_methods) {
    ResourceFormatLoader::_bind_methods();
  }
  initialize_class()::initialized = '\x01';
LAB_001058fb:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Resource::is_class(String const&) const */

undefined8 __thiscall Resource::is_class(Resource *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_00105aff;
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
LAB_00105aff:
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
    if (cVar5 != '\0') goto LAB_00105bb3;
  }
  cVar5 = String::operator==(param_1,"Resource");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_00105bb3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VideoStreamTheora::is_class(String const&) const */

undefined8 __thiscall VideoStreamTheora::is_class(VideoStreamTheora *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_00105c7f;
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
LAB_00105c7f:
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
    if (cVar6 != '\0') goto LAB_00105d33;
  }
  cVar6 = String::operator==(param_1,"VideoStreamTheora");
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
              if (lVar5 == 0) goto LAB_00105df3;
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
LAB_00105df3:
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
      if (cVar6 != '\0') goto LAB_00105d33;
    }
    cVar6 = String::operator==(param_1,"VideoStream");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = Resource::is_class((Resource *)this,param_1);
        return uVar7;
      }
      goto LAB_00105e9c;
    }
  }
LAB_00105d33:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00105e9c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VideoStreamPlaybackTheora::is_class(String const&) const */

undefined8 __thiscall
VideoStreamPlaybackTheora::is_class(VideoStreamPlaybackTheora *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_00105f1f;
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
LAB_00105f1f:
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
    if (cVar6 != '\0') goto LAB_00105fd3;
  }
  cVar6 = String::operator==(param_1,"VideoStreamPlaybackTheora");
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
              if (lVar5 == 0) goto LAB_00106093;
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
LAB_00106093:
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
      if (cVar6 != '\0') goto LAB_00105fd3;
    }
    cVar6 = String::operator==(param_1,"VideoStreamPlayback");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = Resource::is_class((Resource *)this,param_1);
        return uVar7;
      }
      goto LAB_0010613c;
    }
  }
LAB_00105fd3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010613c:
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
LAB_001062c8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001062c8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x001062e5;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x001062e5:
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



/* ResourceFormatLoader::~ResourceFormatLoader() */

void __thiscall ResourceFormatLoader::~ResourceFormatLoader(ResourceFormatLoader *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = ogg_sync_wrote;
  if (bVar1) {
    if (*(long *)(this + 0x270) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00106723;
    }
    if (*(long *)(this + 600) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00106723;
    }
    if (*(long *)(this + 0x240) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00106723;
    }
    if (*(long *)(this + 0x228) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00106723;
    }
    if (*(long *)(this + 0x210) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00106723;
    }
    if (*(long *)(this + 0x1f8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00106723;
    }
    if (*(long *)(this + 0x1e0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00106723;
    }
    if (*(long *)(this + 0x1c8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00106723;
    }
    if (*(long *)(this + 0x1b0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00106723;
    }
    if (*(long *)(this + 0x198) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00106723;
    }
    if (*(long *)(this + 0x180) != 0) {
      StringName::unref();
    }
  }
LAB_00106723:
  *(undefined ***)this = &PTR__initialize_classv_00107c78;
  Object::~Object((Object *)this);
  return;
}



/* ResourceFormatLoaderTheora::~ResourceFormatLoaderTheora() */

void __thiscall
ResourceFormatLoaderTheora::~ResourceFormatLoaderTheora(ResourceFormatLoaderTheora *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00108208;
  ResourceFormatLoader::~ResourceFormatLoader((ResourceFormatLoader *)this);
  return;
}



/* ResourceFormatLoaderTheora::~ResourceFormatLoaderTheora() */

void __thiscall
ResourceFormatLoaderTheora::~ResourceFormatLoaderTheora(ResourceFormatLoaderTheora *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00108208;
  ResourceFormatLoader::~ResourceFormatLoader((ResourceFormatLoader *)this);
  operator_delete(this,0x288);
  return;
}



/* ResourceFormatLoader::~ResourceFormatLoader() */

void __thiscall ResourceFormatLoader::~ResourceFormatLoader(ResourceFormatLoader *this)

{
  ~ResourceFormatLoader(this);
  operator_delete(this,0x288);
  return;
}



/* Image::~Image() */

void __thiscall Image::~Image(Image *this)

{
  long *plVar1;
  long lVar2;
  
  *(code **)this = strlen;
  if (*(long *)(this + 0x250) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x250) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x250);
      *(undefined8 *)(this + 0x250) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  Resource::~Resource((Resource *)this);
  operator_delete(this,0x268);
  return;
}



/* VideoStreamPlayback::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
VideoStreamPlayback::_get_property_listv(VideoStreamPlayback *this,List *param_1,bool param_2)

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
LAB_00106988:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00106988;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x001069a5;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x001069a5:
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



/* VideoStreamPlaybackTheora::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const
    */

void __thiscall
VideoStreamPlaybackTheora::_get_property_listv
          (VideoStreamPlaybackTheora *this,List *param_1,bool param_2)

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
    VideoStreamPlayback::_get_property_listv((VideoStreamPlayback *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "VideoStreamPlaybackTheora";
  local_70 = 0x19;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "VideoStreamPlaybackTheora";
  local_98 = 0;
  local_70 = 0x19;
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
LAB_00106dd8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00106dd8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00106df5;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00106df5:
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
  StringName::StringName((StringName *)&local_78,"VideoStreamPlaybackTheora",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      VideoStreamPlayback::_get_property_listv((VideoStreamPlayback *)this,param_1,true);
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
LAB_00107228:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00107228;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00107245;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00107245:
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



/* VideoStreamTheora::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
VideoStreamTheora::_get_property_listv(VideoStreamTheora *this,List *param_1,bool param_2)

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
    VideoStream::_get_property_listv((VideoStream *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "VideoStreamTheora";
  local_70 = 0x11;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "VideoStreamTheora";
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
  if (local_90 == 0) {
LAB_00107678:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00107678;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00107695;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00107695:
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
  StringName::StringName((StringName *)&local_78,"VideoStreamTheora",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      VideoStream::_get_property_listv((VideoStream *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void memdelete<Image>(Image*) */

void memdelete<Image>(Image *param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  
  cVar3 = predelete_handler((Object *)param_1);
  if (cVar3 == '\0') {
    return;
  }
  if (*(code **)(*(long *)param_1 + 0x140) == Image::~Image) {
    *(code **)param_1 = strlen;
    if (*(long *)(param_1 + 0x250) != 0) {
      LOCK();
      plVar1 = (long *)(*(long *)(param_1 + 0x250) + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar2 = *(long *)(param_1 + 0x250);
        *(undefined8 *)(param_1 + 0x250) = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    Resource::~Resource((Resource *)param_1);
    Memory::free_static(param_1,false);
    return;
  }
  (**(code **)(*(long *)param_1 + 0x140))(param_1);
  Memory::free_static(param_1,false);
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



/* VideoStreamTheora::instantiate_playback() */

void VideoStreamTheora::instantiate_playback(void)

{
  code *pcVar1;
  char cVar2;
  VideoStreamPlaybackTheora *this;
  long lVar3;
  long in_RSI;
  long *in_RDI;
  
  this = (VideoStreamPlaybackTheora *)operator_new(0x9c0,"");
  VideoStreamPlaybackTheora::VideoStreamPlaybackTheora(this);
  postinitialize_handler((Object *)this);
  cVar2 = RefCounted::init_ref();
  if (cVar2 == '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (*(code **)(*(long *)this + 0x208) == VideoStreamPlaybackTheora::set_audio_track) {
    *(undefined4 *)(this + 0x9b8) = *(undefined4 *)(in_RSI + 0x260);
    VideoStreamPlaybackTheora::set_file(this,(String *)(in_RSI + 600));
    *in_RDI = 0;
  }
  else {
    (**(code **)(*(long *)this + 0x208))(this);
    VideoStreamPlaybackTheora::set_file(this,(String *)(in_RSI + 600));
    *in_RDI = 0;
  }
  lVar3 = __dynamic_cast(this,&Object::typeinfo,&VideoStreamPlayback::typeinfo,0);
  if (lVar3 != 0) {
    *in_RDI = lVar3;
    cVar2 = RefCounted::reference();
    if (cVar2 == '\0') {
      *in_RDI = 0;
    }
  }
  cVar2 = RefCounted::unreference();
  if (cVar2 != '\0') {
    cVar2 = predelete_handler((Object *)this);
    if (cVar2 != '\0') {
      (**(code **)(*(long *)this + 0x140))(this);
      Memory::free_static(this,false);
      return;
    }
  }
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* StringName::~StringName() */

void __thiscall StringName::~StringName(StringName *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* ResourceFormatLoaderTheora::~ResourceFormatLoaderTheora() */

void __thiscall
ResourceFormatLoaderTheora::~ResourceFormatLoaderTheora(ResourceFormatLoaderTheora *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* ResourceFormatLoader::~ResourceFormatLoader() */

void __thiscall ResourceFormatLoader::~ResourceFormatLoader(ResourceFormatLoader *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* Image::~Image() */

void __thiscall Image::~Image(Image *this)

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
/* VideoStreamTheora::~VideoStreamTheora() */

void __thiscall VideoStreamTheora::~VideoStreamTheora(VideoStreamTheora *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// This is taking way too long.
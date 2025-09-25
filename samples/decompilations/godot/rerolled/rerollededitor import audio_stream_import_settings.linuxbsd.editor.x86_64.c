/* AudioStreamImportSettingsDialog::_preview_zoom_offset_changed(double) */

void AudioStreamImportSettingsDialog::_preview_zoom_offset_changed(double param_1)

{
  CanvasItem::queue_redraw();
  CanvasItem::queue_redraw();
  return;
}



/* AudioStreamImportSettingsDialog::_on_indicator_mouse_exited() */

void __thiscall
AudioStreamImportSettingsDialog::_on_indicator_mouse_exited(AudioStreamImportSettingsDialog *this)

{
  *(undefined4 *)(this + 0xe6c) = 0xffffffff;
  CanvasItem::queue_redraw();
  return;
}



/* AudioStreamImportSettingsDialog::_preview_zoom_reset() */

void __thiscall
AudioStreamImportSettingsDialog::_preview_zoom_reset(AudioStreamImportSettingsDialog *this)

{
  double dVar1;
  
  if (*(long **)(this + 0xe00) != (long *)0x0) {
    dVar1 = (double)(**(code **)(**(long **)(this + 0xe00) + 0x1f8))();
    Range::set_max(dVar1);
    dVar1 = (double)Range::get_max();
    Range::set_page(dVar1);
    Range::set_value(0.0);
    CanvasItem::queue_redraw();
    CanvasItem::queue_redraw();
    return;
  }
  return;
}



/* AudioStreamImportSettingsDialog::_audio_changed() */

void AudioStreamImportSettingsDialog::_audio_changed(void)

{
  char cVar1;
  
  cVar1 = Window::is_visible();
  if (cVar1 == '\0') {
    return;
  }
  CanvasItem::queue_redraw();
  CanvasItem::queue_redraw();
  CanvasItem::queue_redraw();
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AudioStreamImportSettingsDialog::_preview_zoom_in() */

void __thiscall
AudioStreamImportSettingsDialog::_preview_zoom_in(AudioStreamImportSettingsDialog *this)

{
  double dVar1;
  double dVar2;
  
  if (*(long *)(this + 0xe00) != 0) {
    dVar1 = (double)Range::get_page();
    Range::set_page((double)(float)dVar1 * __LC1);
    dVar2 = (double)Range::get_value();
    Range::set_value(dVar2 + (double)(float)dVar1 * __LC2);
    CanvasItem::queue_redraw();
    CanvasItem::queue_redraw();
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AudioStreamImportSettingsDialog::_preview_zoom_out() */

void __thiscall
AudioStreamImportSettingsDialog::_preview_zoom_out(AudioStreamImportSettingsDialog *this)

{
  double dVar1;
  double dVar2;
  
  if (*(long *)(this + 0xe00) != 0) {
    dVar1 = (double)Range::get_page();
    dVar2 = (double)(float)dVar1;
    dVar1 = (double)Range::get_max();
    if (dVar2 + dVar2 <= dVar1) {
      dVar1 = dVar2 + dVar2;
    }
    Range::set_page(dVar1);
    dVar1 = (double)Range::get_value();
    Range::set_value(dVar1 - dVar2 * __LC1);
    CanvasItem::queue_redraw();
    CanvasItem::queue_redraw();
    return;
  }
  return;
}



/* AudioStreamImportSettingsDialog::_preview_changed(ObjectID) */

void __thiscall
AudioStreamImportSettingsDialog::_preview_changed
          (AudioStreamImportSettingsDialog *this,long param_2)

{
  if ((*(long *)(this + 0xe00) != 0) && (*(long *)(*(long *)(this + 0xe00) + 0x60) == param_2)) {
    CanvasItem::queue_redraw();
    return;
  }
  return;
}



/* AudioStreamImportSettingsDialog::_stop() */

void __thiscall AudioStreamImportSettingsDialog::_stop(AudioStreamImportSettingsDialog *this)

{
  Ref *pRVar1;
  char cVar2;
  int iVar3;
  long in_FS_OFFSET;
  Object *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  AudioStreamPlayer::stop();
  pRVar1 = *(Ref **)(this + 0xe50);
  if (_stop()::{lambda()#1}::operator()()::sname == '\0') {
    iVar3 = __cxa_guard_acquire(&_stop()::{lambda()#1}::operator()()::sname);
    if (iVar3 != 0) {
      _scs_create((char *)&_stop()::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_stop()::{lambda()#1}::operator()()::sname,&__dso_handle
                  );
      __cxa_guard_release(&_stop()::{lambda()#1}::operator()()::sname);
    }
  }
  Window::get_editor_theme_icon((StringName *)&local_38);
  Button::set_button_icon(pRVar1);
  if (local_38 != (Object *)0x0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(local_38);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)local_38 + 0x140))(local_38);
        Memory::free_static(local_38,false);
      }
    }
  }
  *(undefined4 *)(this + 0xe64) = 0;
  CanvasItem::queue_redraw();
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    Node::set_process(SUB81(this,0));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AudioStreamImportSettingsDialog::_on_finished() */

void __thiscall AudioStreamImportSettingsDialog::_on_finished(AudioStreamImportSettingsDialog *this)

{
  Ref *pRVar1;
  char cVar2;
  int iVar3;
  long in_FS_OFFSET;
  Object *local_38;
  long local_30;
  
  pRVar1 = *(Ref **)(this + 0xe50);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (_on_finished()::{lambda()#1}::operator()()::sname == '\0') {
    iVar3 = __cxa_guard_acquire(&_on_finished()::{lambda()#1}::operator()()::sname);
    if (iVar3 != 0) {
      _scs_create((char *)&_on_finished()::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_on_finished()::{lambda()#1}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_on_finished()::{lambda()#1}::operator()()::sname);
    }
  }
  Window::get_editor_theme_icon((StringName *)&local_38);
  Button::set_button_icon(pRVar1);
  if (local_38 != (Object *)0x0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(local_38);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)local_38 + 0x140))(local_38);
        Memory::free_static(local_38,false);
      }
    }
  }
  if (this[0xe6a] == (AudioStreamImportSettingsDialog)0x0) {
    *(undefined4 *)(this + 0xe64) = 0;
    CanvasItem::queue_redraw();
  }
  else {
    this[0xe6a] = (AudioStreamImportSettingsDialog)0x0;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    Node::set_process(SUB81(this,0));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AudioStreamImportSettingsDialog::_play() */

void __thiscall AudioStreamImportSettingsDialog::_play(AudioStreamImportSettingsDialog *this)

{
  Ref *pRVar1;
  char cVar2;
  int iVar3;
  long in_FS_OFFSET;
  Object *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  cVar2 = AudioStreamPlayer::is_playing();
  if (cVar2 == '\0') {
    AudioStreamPlayer::play(*(float *)(this + 0xe64));
    pRVar1 = *(Ref **)(this + 0xe50);
    if ((_play()::{lambda()#2}::operator()()::sname == '\0') &&
       (iVar3 = __cxa_guard_acquire(&_play()::{lambda()#2}::operator()()::sname), iVar3 != 0)) {
      _scs_create((char *)&_play()::{lambda()#2}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_play()::{lambda()#2}::operator()()::sname,&__dso_handle
                  );
      __cxa_guard_release(&_play()::{lambda()#2}::operator()()::sname);
    }
    Window::get_editor_theme_icon((StringName *)&local_38);
    Button::set_button_icon(pRVar1);
    if (((local_38 != (Object *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) &&
       (cVar2 = predelete_handler(local_38), cVar2 != '\0')) {
      (**(code **)(*(long *)local_38 + 0x140))(local_38);
      Memory::free_static(local_38,false);
    }
    if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_001007c5;
  }
  else {
    this[0xe6a] = (AudioStreamImportSettingsDialog)0x1;
    AudioStreamPlayer::stop();
    pRVar1 = *(Ref **)(this + 0xe50);
    if ((_play()::{lambda()#1}::operator()()::sname == '\0') &&
       (iVar3 = __cxa_guard_acquire(&_play()::{lambda()#1}::operator()()::sname), iVar3 != 0)) {
      _scs_create((char *)&_play()::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_play()::{lambda()#1}::operator()()::sname,&__dso_handle
                  );
      __cxa_guard_release(&_play()::{lambda()#1}::operator()()::sname);
    }
    Window::get_editor_theme_icon((StringName *)&local_38);
    Button::set_button_icon(pRVar1);
    if (((local_38 != (Object *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) &&
       (cVar2 = predelete_handler(local_38), cVar2 != '\0')) {
      (**(code **)(*(long *)local_38 + 0x140))(local_38);
      Memory::free_static(local_38,false);
    }
    if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
LAB_001007c5:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  Node::set_process(SUB81(this,0));
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AudioStreamImportSettingsDialog::_get_beat_at_pos(float) */

int __thiscall
AudioStreamImportSettingsDialog::_get_beat_at_pos
          (AudioStreamImportSettingsDialog *this,float param_1)

{
  int iVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  
  dVar3 = (double)Range::get_value();
  dVar4 = (double)Range::get_page();
  fVar2 = (float)Control::get_size();
  fVar2 = (float)(((double)param_1 * dVar4) / (double)fVar2 + dVar3);
  dVar3 = (double)(**(code **)(**(long **)(this + 0xe00) + 0x1f8))();
  if (fVar2 < 0.0) {
    fVar2 = 0.0;
  }
  else if (dVar3 < (double)fVar2) {
    fVar2 = (float)dVar3;
  }
  dVar3 = (double)(**(code **)(**(long **)(this + 0xe00) + 0x1d8))();
  fVar5 = _LC21 / (float)dVar3;
  iVar1 = (int)((double)(fVar2 / fVar5) + __LC1);
  dVar3 = (double)(**(code **)(**(long **)(this + 0xe00) + 0x1f8))();
  return iVar1 - (uint)(dVar3 + _LC22 < (double)((float)iVar1 * fVar5));
}



/* AudioStreamImportSettingsDialog::_seek_to(float) */

void AudioStreamImportSettingsDialog::_seek_to(float param_1)

{
  long lVar1;
  long in_RDI;
  float fVar2;
  double dVar3;
  double dVar4;
  float in_XMM1_Da;
  
  dVar3 = (double)Range::get_value();
  Control::get_rect();
  dVar4 = (double)Range::get_page();
  lVar1 = **(long **)(in_RDI + 0xe00);
  *(float *)(in_RDI + 0xe64) = (float)(dVar4 * (double)(param_1 / in_XMM1_Da) + dVar3);
  dVar3 = (double)(**(code **)(lVar1 + 0x1f8))();
  fVar2 = *(float *)(in_RDI + 0xe64);
  if (fVar2 < 0.0) {
    fVar2 = 0.0;
  }
  else if (dVar3 < (double)fVar2) {
    fVar2 = (float)dVar3;
  }
  *(float *)(in_RDI + 0xe64) = fVar2;
  AudioStreamPlayer::seek(fVar2);
  CanvasItem::queue_redraw();
  return;
}



/* AudioStreamImportSettingsDialog::_reimport() */

void __thiscall AudioStreamImportSettingsDialog::_reimport(AudioStreamImportSettingsDialog *this)

{
  HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
  *this_00;
  bool bVar1;
  char cVar2;
  Variant *pVVar3;
  int iVar4;
  long in_FS_OFFSET;
  double dVar5;
  long local_60;
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  this_00 = (HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
             *)(this + 0xe70);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  bVar1 = (bool)BaseButton::is_pressed();
  Variant::Variant((Variant *)local_58,bVar1);
  StringName::StringName((StringName *)&local_60,"loop",false);
  pVVar3 = (Variant *)
           HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
           ::operator[](this_00,(StringName *)&local_60);
  if (pVVar3 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar3] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar3 = 0;
    *(int *)pVVar3 = local_58[0];
    *(undefined8 *)(pVVar3 + 8) = local_50;
    *(undefined8 *)(pVVar3 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  dVar5 = (double)Range::get_value();
  Variant::Variant((Variant *)local_58,dVar5);
  StringName::StringName((StringName *)&local_60,"loop_offset",false);
  pVVar3 = (Variant *)
           HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
           ::operator[](this_00,(StringName *)&local_60);
  if (pVVar3 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar3] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar3 = 0;
    *(int *)pVVar3 = local_58[0];
    *(undefined8 *)(pVVar3 + 8) = local_50;
    *(undefined8 *)(pVVar3 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  cVar2 = BaseButton::is_pressed();
  dVar5 = 0.0;
  if (cVar2 != '\0') {
    dVar5 = (double)Range::get_value();
  }
  Variant::Variant((Variant *)local_58,dVar5);
  StringName::StringName((StringName *)&local_60,"bpm",false);
  pVVar3 = (Variant *)
           HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
           ::operator[](this_00,(StringName *)&local_60);
  if (pVVar3 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar3] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar3 = 0;
    *(int *)pVVar3 = local_58[0];
    *(undefined8 *)(pVVar3 + 8) = local_50;
    *(undefined8 *)(pVVar3 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  cVar2 = BaseButton::is_pressed();
  if (cVar2 != '\0') {
    cVar2 = BaseButton::is_pressed();
    if (cVar2 != '\0') {
      dVar5 = (double)Range::get_value();
      iVar4 = (int)dVar5;
      goto LAB_00100ec8;
    }
  }
  iVar4 = 0;
LAB_00100ec8:
  Variant::Variant((Variant *)local_58,iVar4);
  StringName::StringName((StringName *)&local_60,"beat_count",false);
  pVVar3 = (Variant *)
           HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
           ::operator[](this_00,(StringName *)&local_60);
  if (pVVar3 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar3] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar3 = 0;
    *(int *)pVVar3 = local_58[0];
    *(undefined8 *)(pVVar3 + 8) = local_50;
    *(undefined8 *)(pVVar3 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  cVar2 = BaseButton::is_pressed();
  iVar4 = 4;
  if (cVar2 != '\0') {
    dVar5 = (double)Range::get_value();
    iVar4 = (int)dVar5;
  }
  Variant::Variant((Variant *)local_58,iVar4);
  StringName::StringName((StringName *)&local_60,"bar_beats",false);
  pVVar3 = (Variant *)
           HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
           ::operator[](this_00,(StringName *)&local_60);
  if (pVVar3 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar3] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar3 = 0;
    *(int *)pVVar3 = local_58[0];
    *(undefined8 *)(pVVar3 + 8) = local_50;
    *(undefined8 *)(pVVar3 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    EditorFileSystem::reimport_file_with_custom_parameters
              (EditorFileSystem::singleton,(String *)(this + 0xea8),(HashMap *)(this + 0xea0));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Type propagation algorithm not settling */
/* AudioStreamImportSettingsDialog::_settings_changed() [clone .part.0] */

void __thiscall
AudioStreamImportSettingsDialog::_settings_changed(AudioStreamImportSettingsDialog *this)

{
  long *plVar1;
  undefined8 uVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  long in_FS_OFFSET;
  double dVar6;
  double dVar7;
  float fVar8;
  long local_e0;
  int local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  Variant *local_c8 [2];
  int local_b8 [2];
  undefined1 local_b0 [16];
  int local_98 [8];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  plVar1 = *(long **)(this + 0xe00);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  this[0xe60] = (AudioStreamImportSettingsDialog)0x1;
  bVar3 = (bool)BaseButton::is_pressed();
  StringName::StringName((StringName *)&local_e0,"set_loop",false);
  Variant::Variant((Variant *)local_78,bVar3);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  local_d8 = 0;
  uStack_d4 = 0;
  uStack_d0 = 0;
  local_c8[0] = (Variant *)local_78;
  (**(code **)(*plVar1 + 0x68))
            ((Variant *)local_98,plVar1,(StringName *)&local_e0,local_c8,1,(StringName *)&local_d8);
  if (local_d8 == 0) {
    Variant::Variant((Variant *)local_b8,(Variant *)local_98);
  }
  else {
    local_b8[0] = 0;
    local_b0 = (undefined1  [16])0x0;
  }
  if (Variant::needs_deinit[local_98[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[(int)local_60] == '\0') {
    cVar4 = Variant::needs_deinit[local_78[0]];
  }
  else {
    Variant::_clear_internal();
    cVar4 = Variant::needs_deinit[local_78[0]];
  }
  if (cVar4 == '\0') {
    cVar4 = Variant::needs_deinit[local_b8[0]];
  }
  else {
    Variant::_clear_internal();
    cVar4 = Variant::needs_deinit[local_b8[0]];
  }
  if (cVar4 != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_e0 != 0)) {
    StringName::unref();
  }
  plVar1 = *(long **)(this + 0xe00);
  dVar6 = (double)Range::get_value();
  StringName::StringName((StringName *)&local_e0,"set_loop_offset",false);
  Variant::Variant((Variant *)local_78,dVar6);
  local_58 = (undefined1  [16])0x0;
  local_60 = 0;
  local_d8 = 0;
  uStack_d4 = 0;
  uStack_d0 = 0;
  local_c8[0] = (Variant *)local_78;
  (**(code **)(*plVar1 + 0x68))
            ((Variant *)local_98,plVar1,(StringName *)&local_e0,local_c8,1,(StringName *)&local_d8);
  if (local_d8 == 0) {
    Variant::Variant((Variant *)local_b8,(Variant *)local_98);
    cVar4 = Variant::needs_deinit[local_98[0]];
  }
  else {
    local_b8[0] = 0;
    local_b0 = (undefined1  [16])0x0;
    cVar4 = Variant::needs_deinit[local_98[0]];
  }
  if (cVar4 == '\0') {
    cVar4 = Variant::needs_deinit[(int)local_60];
  }
  else {
    Variant::_clear_internal();
    cVar4 = Variant::needs_deinit[(int)local_60];
  }
  if (cVar4 == '\0') {
    cVar4 = Variant::needs_deinit[local_78[0]];
  }
  else {
    Variant::_clear_internal();
    cVar4 = Variant::needs_deinit[local_78[0]];
  }
  if (cVar4 == '\0') {
    cVar4 = Variant::needs_deinit[local_b8[0]];
  }
  else {
    Variant::_clear_internal();
    cVar4 = Variant::needs_deinit[local_b8[0]];
  }
  if (cVar4 != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_e0 != 0)) {
    StringName::unref();
  }
  cVar4 = BaseButton::is_pressed();
  if (cVar4 == '\0') {
    SpinBox::set_editable(SUB81(*(undefined8 *)(this + 0xdf0),0));
  }
  else {
    SpinBox::set_editable(SUB81(*(undefined8 *)(this + 0xdf0),0));
  }
  cVar4 = BaseButton::is_pressed();
  uVar2 = *(undefined8 *)(this + 0xe00);
  if (cVar4 == '\0') {
    StringName::StringName((StringName *)&local_d8,"set_bpm",false);
    Object::call<int>((StringName *)local_78,(int)uVar2);
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (CONCAT44(uStack_d4,local_d8) != 0)) {
      StringName::unref();
    }
    uVar2 = *(undefined8 *)(this + 0xe00);
    StringName::StringName((StringName *)&local_d8,"set_bar_beats",false);
    Object::call<int>((StringName *)local_78,(int)uVar2);
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (CONCAT44(uStack_d4,local_d8) != 0)) {
      StringName::unref();
    }
    BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xdc8),0));
    SpinBox::set_editable(SUB81(*(undefined8 *)(this + 0xdd0),0));
    SpinBox::set_editable(SUB81(*(undefined8 *)(this + 0xde0),0));
  }
  else {
    dVar6 = (double)Range::get_value();
    StringName::StringName((StringName *)&local_d8,"set_bpm",false);
    Object::call<double>((StringName *)local_78,dVar6);
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (CONCAT44(uStack_d4,local_d8) != 0)) {
      StringName::unref();
    }
    BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xdc8),0));
    SpinBox::set_editable(SUB81(*(undefined8 *)(this + 0xdd0),0));
    SpinBox::set_editable(SUB81(*(undefined8 *)(this + 0xde0),0));
    dVar6 = (double)Range::get_value();
    if (0.0 < dVar6) {
      fVar8 = _LC21 / (float)dVar6;
      dVar6 = (double)(**(code **)(**(long **)(this + 0xe00) + 0x1f8))();
      iVar5 = (int)((dVar6 + _LC22) / (double)fVar8);
      dVar6 = (double)Range::get_value();
      dVar7 = (double)iVar5;
      Range::set_max(dVar7);
      if (iVar5 < (int)dVar6) {
        Range::set_value(dVar7);
        uVar2 = *(undefined8 *)(this + 0xe00);
        StringName::StringName((StringName *)&local_d8,"set_beat_count",false);
        Object::call<int>((StringName *)local_78,(int)uVar2);
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (CONCAT44(uStack_d4,local_d8) != 0)) {
          StringName::unref();
        }
      }
    }
    dVar6 = (double)Range::get_value();
    StringName::StringName((StringName *)&local_d8,"set_bar_beats",false);
    Object::call<double>((StringName *)local_78,dVar6);
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (CONCAT44(uStack_d4,local_d8) != 0)) {
      StringName::unref();
    }
  }
  cVar4 = BaseButton::is_pressed();
  if ((cVar4 == '\0') || (cVar4 = BaseButton::is_pressed(), cVar4 == '\0')) {
    plVar1 = *(long **)(this + 0xe00);
    StringName::StringName((StringName *)&local_e0,"set_beat_count",false);
    Variant::Variant((Variant *)local_78,0);
    local_58 = (undefined1  [16])0x0;
    local_60 = 0;
    local_d8 = 0;
    uStack_d4 = 0;
    uStack_d0 = 0;
    local_c8[0] = (Variant *)local_78;
    (**(code **)(*plVar1 + 0x68))
              ((Variant *)local_98,plVar1,(StringName *)&local_e0,local_c8,1,(StringName *)&local_d8
              );
    if (local_d8 == 0) {
      Variant::Variant((Variant *)local_b8,(Variant *)local_98);
    }
    else {
      local_b8[0] = 0;
      local_b0 = (undefined1  [16])0x0;
    }
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[(int)local_60] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_b8[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_e0 != 0)) {
      StringName::unref();
    }
  }
  else {
    dVar6 = (double)Range::get_value();
    StringName::StringName((StringName *)&local_d8,"set_beat_count",false);
    Object::call<double>((StringName *)local_78,dVar6);
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (CONCAT44(uStack_d4,local_d8) != 0)) {
      StringName::unref();
    }
  }
  this[0xe60] = (AudioStreamImportSettingsDialog)0x0;
  CanvasItem::queue_redraw();
  CanvasItem::queue_redraw();
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  CanvasItem::queue_redraw();
  return;
}



/* AudioStreamImportSettingsDialog::_settings_changed() */

void __thiscall
AudioStreamImportSettingsDialog::_settings_changed(AudioStreamImportSettingsDialog *this)

{
  if (this[0xe60] != (AudioStreamImportSettingsDialog)0x0) {
    return;
  }
  _settings_changed(this);
  return;
}



/* AudioStreamImportSettingsDialog::_set_beat_len_to(float) */

void __thiscall
AudioStreamImportSettingsDialog::_set_beat_len_to
          (AudioStreamImportSettingsDialog *this,float param_1)

{
  int iVar1;
  
  iVar1 = _get_beat_at_pos(this,param_1);
  this[0xe60] = (AudioStreamImportSettingsDialog)0x1;
  BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xdc8),0));
  if (iVar1 < 1) {
    iVar1 = 1;
  }
  Range::set_value((double)iVar1);
  this[0xe60] = (AudioStreamImportSettingsDialog)0x0;
  _settings_changed(this);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AudioStreamImportSettingsDialog::AudioStreamImportSettingsDialog() */

void __thiscall
AudioStreamImportSettingsDialog::AudioStreamImportSettingsDialog
          (AudioStreamImportSettingsDialog *this)

{
  long *plVar1;
  code *pcVar2;
  Vector2 *pVVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  String *pSVar8;
  BoxContainer *pBVar9;
  BoxContainer *pBVar10;
  CheckBox *pCVar11;
  Label *pLVar12;
  SpinBox *pSVar13;
  Control *pCVar14;
  AudioStreamPlayer *this_00;
  Object *pOVar15;
  Button *pBVar16;
  CallableCustom *pCVar17;
  int iVar18;
  int iVar19;
  long in_FS_OFFSET;
  float fVar20;
  String local_80 [8];
  undefined8 local_78 [2];
  long local_68 [2];
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ConfirmationDialog::ConfirmationDialog((ConfirmationDialog *)this);
  *(undefined8 *)(this + 0xe58) = 0;
  pSVar8 = *(String **)(this + 0xd88);
  *(undefined ***)this = &PTR__initialize_classv_00114320;
  *(undefined2 *)(this + 0xe68) = 0;
  this[0xe60] = (AudioStreamImportSettingsDialog)0x0;
  *(undefined4 *)(this + 0xe64) = 0;
  this[0xe6a] = (AudioStreamImportSettingsDialog)0x0;
  *(undefined4 *)(this + 0xe6c) = 0xffffffff;
  *(undefined8 *)(this + 0xe98) = 2;
  *(undefined1 (*) [16])(this + 0xdb8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xdc8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xdd8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xde8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xdf8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xe08) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xe18) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xe28) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xe38) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xe48) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xe78) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xe88) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xea0) = (undefined1  [16])0x0;
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"");
  local_78[0] = 0;
  String::parse_latin1((String *)local_78,"Reimport");
  TTR(local_80,(String *)local_78);
  Button::set_text(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  pSVar8 = (String *)ConfirmationDialog::get_cancel_button();
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"");
  local_78[0] = 0;
  String::parse_latin1((String *)local_78,"Close");
  TTR(local_80,(String *)local_78);
  Button::set_text(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  pBVar9 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar9,true);
  pBVar9[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar9 = &PTR__initialize_classv_001139c0;
  postinitialize_handler((Object *)pBVar9);
  Node::add_child(this,pBVar9,0,0);
  pBVar10 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar10,false);
  pBVar10[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar10 = &PTR__initialize_classv_00113648;
  postinitialize_handler((Object *)pBVar10);
  EditorScale::get_scale();
  StringName::StringName((StringName *)local_68,"separation",false);
  iVar18 = (int)(String *)local_68;
  Control::add_theme_constant_override((StringName *)pBVar10,iVar18);
  if ((StringName::configured != '\0') && (local_68[0] != 0)) {
    StringName::unref();
  }
  pCVar11 = (CheckBox *)operator_new(0xc60,"");
  local_68[0] = 0;
  CheckBox::CheckBox(pCVar11,(String *)local_68);
  postinitialize_handler((Object *)pCVar11);
  *(CheckBox **)(this + 0xde8) = pCVar11;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  pSVar8 = *(String **)(this + 0xde8);
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"");
  local_78[0] = 0;
  String::parse_latin1((String *)local_78,"Enable");
  TTR(local_80,(String *)local_78);
  Button::set_text(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  pSVar8 = *(String **)(this + 0xde8);
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"");
  local_78[0] = 0;
  String::parse_latin1((String *)local_78,"Enable looping.");
  TTR(local_80,(String *)local_78);
  Control::set_tooltip_text(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  plVar1 = *(long **)(this + 0xde8);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  create_custom_callable_function_pointer<AudioStreamImportSettingsDialog>
            ((AudioStreamImportSettingsDialog *)local_68,(char *)this,
             (_func_void *)"&AudioStreamImportSettingsDialog::_settings_changed");
  iVar19 = (int)(String *)local_78;
  Callable::unbind(iVar19);
  (*pcVar2)(plVar1,SceneStringNames::singleton + 0x248,(String *)local_78,0);
  Callable::~Callable((Callable *)local_78);
  Callable::~Callable((Callable *)local_68);
  Node::add_child(pBVar10,*(undefined8 *)(this + 0xde8),0,0);
  BoxContainer::add_spacer(SUB81(pBVar10,0));
  pLVar12 = (Label *)operator_new(0xad8,"");
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"");
  local_78[0] = 0;
  String::parse_latin1((String *)local_78,"Offset:");
  TTR(local_80,(String *)local_78);
  Label::Label(pLVar12,local_80);
  postinitialize_handler((Object *)pLVar12);
  Node::add_child(pBVar10,pLVar12,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  pSVar13 = (SpinBox *)operator_new(0xba8,"");
  SpinBox::SpinBox(pSVar13);
  postinitialize_handler((Object *)pSVar13);
  *(SpinBox **)(this + 0xdf0) = pSVar13;
  Range::set_max(_LC61);
  Range::set_step(_LC22);
  pSVar8 = *(String **)(this + 0xdf0);
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"sec");
  SpinBox::set_suffix(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  pSVar8 = *(String **)(this + 0xdf0);
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"");
  local_78[0] = 0;
  String::parse_latin1
            ((String *)local_78,
             "Loop offset (from beginning). Note that if BPM is set, this setting will be ignored.")
  ;
  TTR(local_80,(String *)local_78);
  Control::set_tooltip_text(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  plVar1 = *(long **)(this + 0xdf0);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  create_custom_callable_function_pointer<AudioStreamImportSettingsDialog>
            ((AudioStreamImportSettingsDialog *)local_68,(char *)this,
             (_func_void *)"&AudioStreamImportSettingsDialog::_settings_changed");
  Callable::unbind(iVar19);
  (*pcVar2)(plVar1,SceneStringNames::singleton + 0x280,(String *)local_78,0);
  Callable::~Callable((Callable *)local_78);
  Callable::~Callable((Callable *)local_68);
  Node::add_child(pBVar10,*(undefined8 *)(this + 0xdf0),0,0);
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"");
  local_78[0] = 0;
  String::parse_latin1((String *)local_78,"Loop:");
  TTR(local_80,(String *)local_78);
  VBoxContainer::add_margin_child((String *)pBVar9,(Control *)local_80,SUB81(pBVar10,0));
  CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  pBVar10 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar10,false);
  pBVar10[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar10 = &PTR__initialize_classv_00113648;
  postinitialize_handler((Object *)pBVar10);
  EditorScale::get_scale();
  StringName::StringName((StringName *)local_68,"separation",false);
  Control::add_theme_constant_override((StringName *)pBVar10,iVar18);
  if ((StringName::configured != '\0') && (local_68[0] != 0)) {
    StringName::unref();
  }
  pCVar11 = (CheckBox *)operator_new(0xc60,"");
  local_68[0] = 0;
  CheckBox::CheckBox(pCVar11,(String *)local_68);
  postinitialize_handler((Object *)pCVar11);
  *(CheckBox **)(this + 0xdb8) = pCVar11;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  pSVar8 = *(String **)(this + 0xdb8);
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"");
  local_78[0] = 0;
  String::parse_latin1((String *)local_78,"BPM:");
  TTR(local_80,(String *)local_78);
  Button::set_text(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  plVar1 = *(long **)(this + 0xdb8);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  create_custom_callable_function_pointer<AudioStreamImportSettingsDialog>
            ((AudioStreamImportSettingsDialog *)local_68,(char *)this,
             (_func_void *)"&AudioStreamImportSettingsDialog::_settings_changed");
  Callable::unbind(iVar19);
  (*pcVar2)(plVar1,SceneStringNames::singleton + 0x248,(String *)local_78,0);
  Callable::~Callable((Callable *)local_78);
  Callable::~Callable((Callable *)local_68);
  Node::add_child(pBVar10,*(undefined8 *)(this + 0xdb8),0,0);
  pSVar13 = (SpinBox *)operator_new(0xba8,"");
  SpinBox::SpinBox(pSVar13);
  postinitialize_handler((Object *)pSVar13);
  *(SpinBox **)(this + 0xdc0) = pSVar13;
  Range::set_max(_LC66);
  Range::set_step(_LC67);
  pSVar8 = *(String **)(this + 0xdc0);
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"");
  local_78[0] = 0;
  String::parse_latin1
            ((String *)local_78,
             "Configure the Beats Per Measure (tempo) used for the interactive streams.\nThis is required in order to configure beat information."
            );
  TTR(local_80,(String *)local_78);
  Control::set_tooltip_text(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  plVar1 = *(long **)(this + 0xdc0);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  create_custom_callable_function_pointer<AudioStreamImportSettingsDialog>
            ((AudioStreamImportSettingsDialog *)local_68,(char *)this,
             (_func_void *)"&AudioStreamImportSettingsDialog::_settings_changed");
  Callable::unbind(iVar19);
  (*pcVar2)(plVar1,SceneStringNames::singleton + 0x280,(String *)local_78,0);
  Callable::~Callable((Callable *)local_78);
  Callable::~Callable((Callable *)local_68);
  Node::add_child(pBVar10,*(undefined8 *)(this + 0xdc0),0,0);
  BoxContainer::add_spacer(SUB81(pBVar10,0));
  pCVar11 = (CheckBox *)operator_new(0xc60,"");
  local_68[0] = 0;
  CheckBox::CheckBox(pCVar11,(String *)local_68);
  postinitialize_handler((Object *)pCVar11);
  *(CheckBox **)(this + 0xdc8) = pCVar11;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  pSVar8 = *(String **)(this + 0xdc8);
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"");
  local_78[0] = 0;
  String::parse_latin1((String *)local_78,"Beat Count:");
  TTR(local_80,(String *)local_78);
  Button::set_text(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  plVar1 = *(long **)(this + 0xdc8);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  create_custom_callable_function_pointer<AudioStreamImportSettingsDialog>
            ((AudioStreamImportSettingsDialog *)local_68,(char *)this,
             (_func_void *)"&AudioStreamImportSettingsDialog::_settings_changed");
  Callable::unbind(iVar19);
  (*pcVar2)(plVar1,SceneStringNames::singleton + 0x248,(String *)local_78,0);
  Callable::~Callable((Callable *)local_78);
  Callable::~Callable((Callable *)local_68);
  Node::add_child(pBVar10,*(undefined8 *)(this + 0xdc8),0,0);
  pSVar13 = (SpinBox *)operator_new(0xba8,"");
  SpinBox::SpinBox(pSVar13);
  postinitialize_handler((Object *)pSVar13);
  *(SpinBox **)(this + 0xdd0) = pSVar13;
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"");
  local_78[0] = 0;
  String::parse_latin1
            ((String *)local_78,
             "Configure the amount of Beats used for music-aware looping. If zero, it will be autodetected from the length.\nIt is recommended to set this value (either manually or by clicking on a beat number in the preview) to ensure looping works properly."
            );
  TTR(local_80,(String *)local_78);
  Control::set_tooltip_text((String *)pSVar13);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  Range::set_max(_LC71);
  plVar1 = *(long **)(this + 0xdd0);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  create_custom_callable_function_pointer<AudioStreamImportSettingsDialog>
            ((AudioStreamImportSettingsDialog *)local_68,(char *)this,
             (_func_void *)"&AudioStreamImportSettingsDialog::_settings_changed");
  Callable::unbind(iVar19);
  (*pcVar2)(plVar1,SceneStringNames::singleton + 0x280,(String *)local_78);
  Callable::~Callable((Callable *)local_78);
  Callable::~Callable((Callable *)local_68);
  Node::add_child(pBVar10,*(undefined8 *)(this + 0xdd0),0,0);
  pLVar12 = (Label *)operator_new(0xad8,"");
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"");
  local_78[0] = 0;
  String::parse_latin1((String *)local_78,"Bar Beats:");
  TTR(local_80,(String *)local_78);
  Label::Label(pLVar12,local_80);
  postinitialize_handler((Object *)pLVar12);
  *(Label **)(this + 0xdd8) = pLVar12;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  Node::add_child(pBVar10,*(undefined8 *)(this + 0xdd8),0,0);
  pSVar13 = (SpinBox *)operator_new(0xba8,"");
  SpinBox::SpinBox(pSVar13);
  postinitialize_handler((Object *)pSVar13);
  *(SpinBox **)(this + 0xde0) = pSVar13;
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"");
  local_78[0] = 0;
  String::parse_latin1
            ((String *)local_78,
             "Configure the Beats Per Bar. This used for music-aware transitions between AudioStreams."
            );
  TTR(local_80,(String *)local_78);
  Control::set_tooltip_text((String *)pSVar13);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  Range::set_min(_LC74);
  Range::set_max(_LC75);
  plVar1 = *(long **)(this + 0xde0);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  create_custom_callable_function_pointer<AudioStreamImportSettingsDialog>
            ((AudioStreamImportSettingsDialog *)local_68,(char *)this,
             (_func_void *)"&AudioStreamImportSettingsDialog::_settings_changed");
  Callable::unbind(iVar19);
  (*pcVar2)(plVar1,SceneStringNames::singleton + 0x280,(String *)local_78,0);
  Callable::~Callable((Callable *)local_78);
  Callable::~Callable((Callable *)local_68);
  Node::add_child(pBVar10,*(undefined8 *)(this + 0xde0),0,0);
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"");
  local_78[0] = 0;
  String::parse_latin1((String *)local_78,"Music Playback:");
  TTR(local_80,(String *)local_78);
  VBoxContainer::add_margin_child((String *)pBVar9,(Control *)local_80,SUB81(pBVar10,0));
  CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  pCVar14 = (Control *)operator_new(0x9d8,"");
  Control::Control(pCVar14);
  uVar6 = _LC78;
  *(undefined ***)pCVar14 = &PTR__initialize_classv_001132e0;
  *(undefined4 *)(pCVar14 + 0x9c8) = uVar6;
  *(undefined4 *)(pCVar14 + 0x9cc) = uVar6;
  *(undefined4 *)(pCVar14 + 0x9d0) = uVar6;
  *(undefined4 *)(pCVar14 + 0x9d4) = uVar6;
  postinitialize_handler((Object *)pCVar14);
  *(Control **)(this + 0xdf8) = pCVar14;
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"");
  local_78[0] = 0;
  String::parse_latin1((String *)local_78,"Preview:");
  TTR(local_80,(String *)local_78);
  VBoxContainer::add_margin_child((String *)pBVar9,(Control *)local_80,SUB81(pCVar14,0));
  CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  pVVar3 = *(Vector2 **)(this + 0xdf8);
  fVar20 = (float)EditorScale::get_scale();
  local_58 = CONCAT44(fVar20 * _LC80._4_4_,fVar20 * (float)_LC80);
  Control::set_custom_minimum_size(pVVar3);
  Control::set_v_size_flags(*(undefined8 *)(this + 0xdf8),3);
  this_00 = (AudioStreamPlayer *)operator_new(0x418,"");
  AudioStreamPlayer::AudioStreamPlayer(this_00);
  postinitialize_handler((Object *)this_00);
  lVar4 = *(long *)this_00;
  *(AudioStreamPlayer **)(this + 0xe08) = this_00;
  pcVar2 = *(code **)(lVar4 + 0x108);
  create_custom_callable_function_pointer<AudioStreamImportSettingsDialog>
            ((AudioStreamImportSettingsDialog *)local_68,(char *)this,
             (_func_void *)"&AudioStreamImportSettingsDialog::_on_finished");
  (*pcVar2)(this_00,SceneStringNames::singleton + 0xf8,(String *)local_68,0);
  Callable::~Callable((Callable *)local_68);
  Node::add_child(*(undefined8 *)(this + 0xdf8),*(undefined8 *)(this + 0xe08),0,0);
  pBVar9 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar9,true);
  pBVar9[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar9 = &PTR__initialize_classv_001139c0;
  postinitialize_handler((Object *)pBVar9);
  Control::set_anchors_and_offsets_preset(pBVar9,0xf,0,0);
  Node::add_child(*(undefined8 *)(this + 0xdf8),pBVar9,0,0);
  Control::set_v_size_flags(pBVar9,3);
  pCVar14 = (Control *)operator_new(0x9d8,"");
  Control::Control(pCVar14);
  uVar7 = _UNK_00114c08;
  uVar5 = CONCAT44(_UNK_00114c04,_LC78);
  *(undefined ***)pCVar14 = &PTR__initialize_classv_001132e0;
  *(undefined8 *)(pCVar14 + 0x9c8) = uVar5;
  *(undefined8 *)(pCVar14 + 0x9d0) = uVar7;
  postinitialize_handler((Object *)pCVar14);
  *(Control **)(this + 0xe10) = pCVar14;
  Control::set_v_size_flags(pCVar14,3);
  plVar1 = *(long **)(this + 0xe10);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  create_custom_callable_function_pointer<AudioStreamImportSettingsDialog>
            ((AudioStreamImportSettingsDialog *)local_68,(char *)this,
             (_func_void *)"&AudioStreamImportSettingsDialog::_draw_preview");
  (*pcVar2)(plVar1,SceneStringNames::singleton + 8,(String *)local_68,0);
  Callable::~Callable((Callable *)local_68);
  Control::set_v_size_flags(*(undefined8 *)(this + 0xe10),3);
  Node::add_child(pBVar9,*(undefined8 *)(this + 0xe10),0,0);
  pBVar10 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar10,false);
  pBVar10[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar10 = &PTR__initialize_classv_00113648;
  postinitialize_handler((Object *)pBVar10);
  pOVar15 = (Object *)operator_new(0xac8,"");
  ScrollBar::ScrollBar((ScrollBar *)pOVar15,0);
  *(undefined ***)pOVar15 = &PTR__initialize_classv_00113fb0;
  Control::set_v_size_flags(pOVar15,0);
  postinitialize_handler(pOVar15);
  *(Object **)(this + 0xe30) = pOVar15;
  pBVar16 = (Button *)operator_new(0xc10,"");
  local_68[0] = 0;
  Button::Button(pBVar16,(String *)local_68);
  postinitialize_handler((Object *)pBVar16);
  *(Button **)(this + 0xe38) = pBVar16;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  Button::set_flat(SUB81(*(undefined8 *)(this + 0xe38),0));
  pBVar16 = (Button *)operator_new(0xc10,"");
  local_68[0] = 0;
  Button::Button(pBVar16,(String *)local_68);
  postinitialize_handler((Object *)pBVar16);
  *(Button **)(this + 0xe40) = pBVar16;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  Button::set_flat(SUB81(*(undefined8 *)(this + 0xe40),0));
  pBVar16 = (Button *)operator_new(0xc10,"");
  local_68[0] = 0;
  Button::Button(pBVar16,(String *)local_68);
  postinitialize_handler((Object *)pBVar16);
  *(Button **)(this + 0xe48) = pBVar16;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  Button::set_flat(SUB81(*(undefined8 *)(this + 0xe48),0));
  Node::add_child(pBVar10,*(undefined8 *)(this + 0xe30),0,0);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xe30),3);
  Control::set_v_size_flags(*(undefined8 *)(this + 0xe30),3);
  Node::add_child(pBVar10,*(undefined8 *)(this + 0xe48),0,0);
  Node::add_child(pBVar10,*(undefined8 *)(this + 0xe40),0,0);
  Node::add_child(pBVar10,*(undefined8 *)(this + 0xe38),0,0);
  plVar1 = *(long **)(this + 0xe38);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  create_custom_callable_function_pointer<AudioStreamImportSettingsDialog>
            ((AudioStreamImportSettingsDialog *)local_68,(char *)this,
             (_func_void *)"&AudioStreamImportSettingsDialog::_preview_zoom_in");
  (*pcVar2)(plVar1,SceneStringNames::singleton + 0x238,(String *)local_68,0);
  Callable::~Callable((Callable *)local_68);
  plVar1 = *(long **)(this + 0xe40);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  create_custom_callable_function_pointer<AudioStreamImportSettingsDialog>
            ((AudioStreamImportSettingsDialog *)local_68,(char *)this,
             (_func_void *)"&AudioStreamImportSettingsDialog::_preview_zoom_reset");
  (*pcVar2)(plVar1,SceneStringNames::singleton + 0x238,(String *)local_68,0);
  Callable::~Callable((Callable *)local_68);
  plVar1 = *(long **)(this + 0xe48);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  create_custom_callable_function_pointer<AudioStreamImportSettingsDialog>
            ((AudioStreamImportSettingsDialog *)local_68,(char *)this,
             (_func_void *)"&AudioStreamImportSettingsDialog::_preview_zoom_out");
  (*pcVar2)(plVar1,SceneStringNames::singleton + 0x238,(String *)local_68,0);
  Callable::~Callable((Callable *)local_68);
  plVar1 = *(long **)(this + 0xe30);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  pCVar17 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar17);
  *(undefined **)(pCVar17 + 0x20) = &_LC23;
  *(undefined1 (*) [16])(pCVar17 + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(pCVar17 + 0x40) = 0;
  uVar5 = *(undefined8 *)(this + 0x60);
  *(undefined ***)pCVar17 = &PTR_hash_001146b8;
  *(undefined8 *)(pCVar17 + 0x30) = uVar5;
  *(undefined8 *)(pCVar17 + 0x38) = 0x100000;
  *(undefined8 *)(pCVar17 + 0x10) = 0;
  *(AudioStreamImportSettingsDialog **)(pCVar17 + 0x28) = this;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar17,(int)pCVar17 + 0x28);
  *(char **)(pCVar17 + 0x20) = "AudioStreamImportSettingsDialog::_preview_zoom_offset_changed";
  Callable::Callable((Callable *)local_68,pCVar17);
  (*pcVar2)(plVar1,SceneStringNames::singleton + 0x280,(String *)local_68,0);
  Callable::~Callable((Callable *)local_68);
  Node::add_child(pBVar9,pBVar10,0,0);
  pCVar14 = (Control *)operator_new(0x9c8,"");
  Control::Control(pCVar14);
  postinitialize_handler((Object *)pCVar14);
  *(Control **)(this + 0xe18) = pCVar14;
  Control::set_anchors_and_offsets_preset(pCVar14,0xf,0,0);
  plVar1 = *(long **)(this + 0xe18);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  create_custom_callable_function_pointer<AudioStreamImportSettingsDialog>
            ((AudioStreamImportSettingsDialog *)local_68,(char *)this,
             (_func_void *)"&AudioStreamImportSettingsDialog::_draw_indicator");
  (*pcVar2)(plVar1,SceneStringNames::singleton + 8,(String *)local_68,0);
  Callable::~Callable((Callable *)local_68);
  plVar1 = *(long **)(this + 0xe18);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  pCVar17 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar17);
  *(undefined **)(pCVar17 + 0x20) = &_LC23;
  *(undefined1 (*) [16])(pCVar17 + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(pCVar17 + 0x40) = 0;
  uVar5 = *(undefined8 *)(this + 0x60);
  *(undefined ***)pCVar17 = &PTR_hash_00114748;
  *(undefined8 *)(pCVar17 + 0x30) = uVar5;
  *(code **)(pCVar17 + 0x38) = _on_input_indicator;
  *(undefined8 *)(pCVar17 + 0x10) = 0;
  *(AudioStreamImportSettingsDialog **)(pCVar17 + 0x28) = this;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar17,(int)pCVar17 + 0x28);
  *(char **)(pCVar17 + 0x20) = "AudioStreamImportSettingsDialog::_on_input_indicator";
  Callable::Callable((Callable *)local_68,pCVar17);
  (*pcVar2)(plVar1,SceneStringNames::singleton + 0x28,(String *)local_68,0);
  Callable::~Callable((Callable *)local_68);
  plVar1 = *(long **)(this + 0xe18);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  create_custom_callable_function_pointer<AudioStreamImportSettingsDialog>
            ((AudioStreamImportSettingsDialog *)local_68,(char *)this,
             (_func_void *)"&AudioStreamImportSettingsDialog::_on_indicator_mouse_exited");
  (*pcVar2)(plVar1,SceneStringNames::singleton + 0xc0,(String *)local_68,0);
  Callable::~Callable((Callable *)local_68);
  Node::add_child(*(undefined8 *)(this + 0xe10),*(undefined8 *)(this + 0xe18),0,0);
  pBVar10 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar10,false);
  pBVar10[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar10 = &PTR__initialize_classv_00113648;
  postinitialize_handler((Object *)pBVar10);
  StringName::StringName((StringName *)local_68,"separation",false);
  Control::add_theme_constant_override((StringName *)pBVar10,iVar18);
  if ((StringName::configured != '\0') && (local_68[0] != 0)) {
    StringName::unref();
  }
  Node::add_child(pBVar9,pBVar10,0,0);
  pBVar16 = (Button *)operator_new(0xc10,"");
  local_68[0] = 0;
  Button::Button(pBVar16,(String *)local_68);
  postinitialize_handler((Object *)pBVar16);
  *(Button **)(this + 0xe50) = pBVar16;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  Button::set_flat(SUB81(*(undefined8 *)(this + 0xe50),0));
  Node::add_child(pBVar10,*(undefined8 *)(this + 0xe50),0,0);
  Control::set_focus_mode(*(undefined8 *)(this + 0xe50),0);
  plVar1 = *(long **)(this + 0xe50);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  create_custom_callable_function_pointer<AudioStreamImportSettingsDialog>
            ((AudioStreamImportSettingsDialog *)local_68,(char *)this,
             (_func_void *)"&AudioStreamImportSettingsDialog::_play");
  (*pcVar2)(plVar1,SceneStringNames::singleton + 0x238,(String *)local_68,0);
  Callable::~Callable((Callable *)local_68);
  pBVar16 = (Button *)operator_new(0xc10,"");
  local_68[0] = 0;
  Button::Button(pBVar16,(String *)local_68);
  postinitialize_handler((Object *)pBVar16);
  *(Button **)(this + 0xe58) = pBVar16;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  Button::set_flat(SUB81(*(undefined8 *)(this + 0xe58),0));
  Node::add_child(pBVar10,*(undefined8 *)(this + 0xe58),0,0);
  Control::set_focus_mode(*(undefined8 *)(this + 0xe58),0);
  plVar1 = *(long **)(this + 0xe58);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  create_custom_callable_function_pointer<AudioStreamImportSettingsDialog>
            ((AudioStreamImportSettingsDialog *)local_68,(char *)this,
             (_func_void *)"&AudioStreamImportSettingsDialog::_stop");
  (*pcVar2)(plVar1,SceneStringNames::singleton + 0x238,(String *)local_68,0);
  Callable::~Callable((Callable *)local_68);
  pLVar12 = (Label *)operator_new(0xad8,"");
  local_68[0] = 0;
  Label::Label(pLVar12,(String *)local_68);
  postinitialize_handler((Object *)pLVar12);
  *(Label **)(this + 0xe20) = pLVar12;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  Label::set_horizontal_alignment(*(undefined8 *)(this + 0xe20),2);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xe20),3);
  local_58 = __LC92;
  uStack_50 = _UNK_00114c18;
  CanvasItem::set_modulate(*(Color **)(this + 0xe20));
  Node::add_child(pBVar10,*(undefined8 *)(this + 0xe20),0,0);
  pLVar12 = (Label *)operator_new(0xad8,"");
  local_68[0] = 0;
  Label::Label(pLVar12,(String *)local_68);
  postinitialize_handler((Object *)pLVar12);
  *(Label **)(this + 0xe28) = pLVar12;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  Node::add_child(pBVar10,*(undefined8 *)(this + 0xe28),0,0);
  singleton = this;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AudioStreamImportSettingsDialog::_draw_indicator() */

void __thiscall
AudioStreamImportSettingsDialog::_draw_indicator(AudioStreamImportSettingsDialog *this)

{
  float fVar1;
  String *pSVar2;
  Vector2 *pVVar3;
  Ref *pRVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  Object *pOVar7;
  char cVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  long in_FS_OFFSET;
  float fVar13;
  float fVar14;
  float fVar15;
  float extraout_XMM0_Db;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined8 extraout_XMM1_Qa;
  float fVar19;
  Object *local_98;
  CowData<char32_t> local_90 [8];
  CowData<char32_t> local_88 [8];
  Object *local_80;
  Object *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0xe00) != 0) {
    Control::get_rect();
    fVar1 = (float)extraout_XMM1_Qa;
    fVar19 = (float)((ulong)extraout_XMM1_Qa >> 0x20);
    if ((_draw_indicator()::{lambda()#1}::operator()()::sname == '\0') &&
       (iVar10 = __cxa_guard_acquire(&_draw_indicator()::{lambda()#1}::operator()()::sname),
       iVar10 != 0)) {
      _scs_create((char *)&_draw_indicator()::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_draw_indicator()::{lambda()#1}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_draw_indicator()::{lambda()#1}::operator()()::sname);
    }
    Window::get_theme_font((StringName *)&local_98,(StringName *)this);
    if ((_draw_indicator()::{lambda()#2}::operator()()::sname == '\0') &&
       (iVar10 = __cxa_guard_acquire(&_draw_indicator()::{lambda()#2}::operator()()::sname),
       iVar10 != 0)) {
      _scs_create((char *)&_draw_indicator()::{lambda()#2}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_draw_indicator()::{lambda()#2}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_draw_indicator()::{lambda()#2}::operator()()::sname);
    }
    uVar9 = Window::get_theme_font_size
                      ((StringName *)this,
                       (StringName *)&_draw_indicator()::{lambda()#2}::operator()()::sname);
    dVar16 = (double)(**(code **)(**(long **)(this + 0xe00) + 0x1d8))();
    fVar13 = extraout_XMM0_Db;
    if (0.0 < dVar16) {
      fVar13 = (float)(**(code **)(*(long *)local_98 + 0x218))(local_98,uVar9);
      fVar14 = (float)EditorScale::get_scale();
      fVar14 = (float)(int)(fVar14 * _LC56 + fVar13);
      fVar13 = extraout_XMM0_Db + fVar14;
      fVar19 = fVar19 - fVar14;
    }
    pSVar2 = *(String **)(this + 0xe20);
    local_80 = (Object *)0x0;
    local_78 = (Object *)&_LC96;
    local_70 = 2;
    String::parse_latin1((StrRange *)&local_80);
    String::num((double)*(float *)(this + 0xe64),(int)local_90);
    String::pad_decimals((int)local_88);
    String::operator+((String *)&local_78,(String *)local_88);
    Label::set_text(pSVar2);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref(local_88);
    CowData<char32_t>::_unref(local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    fVar14 = *(float *)(this + 0xe64);
    dVar16 = (double)Range::get_value();
    dVar17 = (double)Range::get_page();
    auVar6._8_8_ = local_58._8_8_;
    auVar6._0_8_ = local_58._0_8_;
    fVar14 = (float)((((double)fVar14 - dVar16) * (double)fVar1) / dVar17);
    if ((0.0 <= fVar14) && (local_58 = auVar6, fVar14 < fVar1)) {
      if ((_draw_indicator()::{lambda()#3}::operator()()::sname == '\0') &&
         (iVar10 = __cxa_guard_acquire(&_draw_indicator()::{lambda()#3}::operator()()::sname),
         iVar10 != 0)) {
        _scs_create((char *)&_draw_indicator()::{lambda()#3}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_draw_indicator()::{lambda()#3}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_draw_indicator()::{lambda()#3}::operator()()::sname);
      }
      local_58 = Window::get_theme_color
                           ((StringName *)this,
                            (StringName *)&_draw_indicator()::{lambda()#3}::operator()()::sname);
      pVVar3 = *(Vector2 **)(this + 0xe18);
      fVar15 = (float)EditorScale::get_scale();
      fVar15 = roundf(fVar15 + fVar15);
      local_68 = CONCAT44(fVar13,fVar14);
      local_60 = CONCAT44(fVar19 + fVar13,fVar14);
      CanvasItem::draw_line(pVVar3,(Vector2 *)&local_68,(Color *)&local_60,fVar15,SUB81(local_58,0))
      ;
      pRVar4 = *(Ref **)(this + 0xe18);
      if (_draw_indicator()::{lambda()#5}::operator()()::sname == '\0') {
        iVar10 = __cxa_guard_acquire(&_draw_indicator()::{lambda()#5}::operator()()::sname);
        if (iVar10 != 0) {
          _scs_create((char *)&_draw_indicator()::{lambda()#5}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,&_draw_indicator()::{lambda()#5}::operator()()::sname
                       ,&__dso_handle);
          __cxa_guard_release(&_draw_indicator()::{lambda()#5}::operator()()::sname);
        }
      }
      Window::get_editor_theme_icon((StringName *)&local_78);
      iVar10 = (**(code **)(*(long *)local_78 + 0x1c8))();
      local_60 = CONCAT44(fVar13,(float)((double)fVar14 - (double)iVar10 * __LC1));
      if (_draw_indicator()::{lambda()#4}::operator()()::sname == '\0') {
        iVar10 = __cxa_guard_acquire(&_draw_indicator()::{lambda()#4}::operator()()::sname);
        if (iVar10 != 0) {
          _scs_create((char *)&_draw_indicator()::{lambda()#4}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,&_draw_indicator()::{lambda()#4}::operator()()::sname
                       ,&__dso_handle);
          __cxa_guard_release(&_draw_indicator()::{lambda()#4}::operator()()::sname);
        }
      }
      Window::get_editor_theme_icon((StringName *)&local_80);
      CanvasItem::draw_texture(pRVar4,(Vector2 *)&local_80,(Color *)&local_60);
      if (local_80 != (Object *)0x0) {
        cVar8 = RefCounted::unreference();
        pOVar7 = local_80;
        if (cVar8 != '\0') {
          cVar8 = predelete_handler(local_80);
          if (cVar8 != '\0') {
            (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
            Memory::free_static(pOVar7,false);
          }
        }
      }
      if (local_78 != (Object *)0x0) {
        cVar8 = RefCounted::unreference();
        pOVar7 = local_78;
        if (cVar8 != '\0') {
          cVar8 = predelete_handler(local_78);
          if (cVar8 != '\0') {
            (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
            Memory::free_static(pOVar7,false);
          }
        }
      }
      dVar16 = (double)(**(code **)(**(long **)(this + 0xe00) + 0x1d8))();
      if ((0.0 < dVar16) && (*(int *)(this + 0xe6c) != -1)) {
        iVar11 = 0;
        iVar10 = 0;
        dVar16 = (double)Range::get_value();
        dVar17 = (double)Range::get_page();
        dVar18 = (double)(**(code **)(**(long **)(this + 0xe00) + 0x1d8))();
        fVar13 = _LC21 / (float)dVar18;
        fVar19 = 0.0;
        if (0.0 < fVar1) {
          do {
            iVar12 = (int)(((fVar19 * (float)dVar17) / fVar1 + (float)dVar16) / fVar13);
            if (iVar12 != iVar10) {
              itos((long)&local_78);
              fVar19 = (float)(**(code **)(*(long *)local_98 + 0x288))
                                        (local_98,(String *)&local_78,0,0x10,3,0,0);
              fVar14 = (float)(iVar11 - (int)fVar19 / 2);
              fVar19 = (float)EditorScale::get_scale();
              if ((fVar19 + fVar19 < fVar14) && (*(int *)(this + 0xe6c) == iVar12)) {
                uVar5 = *(undefined8 *)(this + 0xe18);
                fVar19 = (float)EditorScale::get_scale();
                fVar13 = (float)(**(code **)(*(long *)local_98 + 0x220))(local_98,uVar9);
                local_60 = CONCAT44(fVar19 + fVar19 + fVar13,fVar14);
                CanvasItem::draw_string
                          (fVar1 - fVar14,uVar5,(StringName *)&local_98,(Color *)&local_60,
                           (String *)&local_78,0,0x10,local_58,3,0,0);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
                break;
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
            }
            iVar11 = iVar11 + 1;
            fVar19 = (float)iVar11;
            iVar10 = iVar12;
          } while (fVar19 < fVar1);
        }
      }
    }
    if (local_98 != (Object *)0x0) {
      cVar8 = RefCounted::unreference();
      if (cVar8 != '\0') {
        cVar8 = predelete_handler(local_98);
        if (cVar8 != '\0') {
          (**(code **)(*(long *)local_98 + 0x140))(local_98);
          Memory::free_static(local_98,false);
        }
      }
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* AudioStreamImportSettingsDialog::edit(String const&, String const&, Ref<AudioStream> const&) */

void __thiscall
AudioStreamImportSettingsDialog::edit
          (AudioStreamImportSettingsDialog *this,String *param_1,String *param_2,Ref *param_3)

{
  Callable *pCVar1;
  Object *pOVar2;
  undefined8 uVar3;
  void *pvVar4;
  char cVar5;
  int iVar6;
  RefCounted *this_00;
  String *pSVar7;
  uint uVar8;
  RefCounted *pRVar9;
  Object *pOVar10;
  long lVar11;
  String *pSVar12;
  long in_FS_OFFSET;
  byte bVar13;
  double dVar14;
  String *local_f0;
  String local_b0 [8];
  undefined8 local_a8;
  undefined8 local_a0;
  long *local_98;
  undefined8 local_90;
  Object *local_88;
  undefined8 local_80;
  int local_78 [2];
  undefined1 local_70 [16];
  ulong local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  bVar13 = 0;
  pCVar1 = *(Callable **)(this + 0xe00);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (pCVar1 != (Callable *)0x0) {
    create_custom_callable_function_pointer<AudioStreamImportSettingsDialog>
              ((AudioStreamImportSettingsDialog *)&local_88,(char *)this,
               (_func_void *)"&AudioStreamImportSettingsDialog::_audio_changed");
    Resource::disconnect_changed(pCVar1);
    Callable::~Callable((Callable *)&local_88);
  }
  if (*(long *)(this + 0xea0) != *(long *)param_2) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0xea0),(CowData *)param_2);
  }
  if (*(long *)(this + 0xea8) != *(long *)param_1) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0xea8),(CowData *)param_1);
  }
  pOVar2 = *(Object **)param_3;
  pOVar10 = *(Object **)(this + 0xe00);
  if (pOVar2 != pOVar10) {
    *(Object **)(this + 0xe00) = pOVar2;
    if ((pOVar2 != (Object *)0x0) && (cVar5 = RefCounted::reference(), cVar5 == '\0')) {
      *(undefined8 *)(this + 0xe00) = 0;
    }
    if (((pOVar10 != (Object *)0x0) && (cVar5 = RefCounted::unreference(), cVar5 != '\0')) &&
       (cVar5 = predelete_handler(pOVar10), cVar5 != '\0')) {
      (**(code **)(*(long *)pOVar10 + 0x140))(pOVar10);
      Memory::free_static(pOVar10,false);
    }
    pOVar10 = *(Object **)(this + 0xe00);
  }
  uVar3 = *(undefined8 *)(this + 0xe08);
  if ((pOVar10 == (Object *)0x0) ||
     (local_88 = pOVar10, cVar5 = RefCounted::reference(), cVar5 == '\0')) {
    local_88 = (Object *)0x0;
  }
  AudioStreamPlayer::set_stream(uVar3);
  if (((local_88 != (Object *)0x0) &&
      (cVar5 = RefCounted::unreference(), pOVar2 = local_88, cVar5 != '\0')) &&
     (cVar5 = predelete_handler(local_88), cVar5 != '\0')) {
    (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
    Memory::free_static(pOVar2,false);
  }
  *(undefined4 *)(this + 0xe64) = 0;
  local_88 = (Object *)&_LC107;
  local_90 = 0;
  local_80 = 1;
  String::parse_latin1((StrRange *)&local_90);
  dVar14 = (double)(**(code **)(**(long **)(this + 0xe00) + 0x1f8))();
  String::num(dVar14,(int)(CowData<char32_t> *)&local_98);
  uVar8 = (uint)(AudioStreamImportSettingsDialog *)&local_88;
  String::pad_decimals(uVar8);
  String::operator+(local_b0,(String *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  Label::set_text(*(String **)(this + 0xe28));
  pCVar1 = *(Callable **)(this + 0xe00);
  if (pCVar1 == (Callable *)0x0) {
    Window::hide();
  }
  else {
    create_custom_callable_function_pointer<AudioStreamImportSettingsDialog>
              ((AudioStreamImportSettingsDialog *)&local_88,(char *)this,
               (_func_void *)"&AudioStreamImportSettingsDialog::_audio_changed");
    Resource::connect_changed(pCVar1,uVar8);
    Callable::~Callable((Callable *)&local_88);
    CanvasItem::queue_redraw();
    CanvasItem::queue_redraw();
    CanvasItem::queue_redraw();
  }
  if ((*(long *)(this + 0xe78) != 0) && (*(int *)(this + 0xe9c) != 0)) {
    lVar11 = 0;
    uVar8 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xe98) * 4);
    if (uVar8 != 0) {
      do {
        if (*(int *)(*(long *)(this + 0xe80) + lVar11) != 0) {
          *(int *)(*(long *)(this + 0xe80) + lVar11) = 0;
          pvVar4 = *(void **)(*(long *)(this + 0xe78) + lVar11 * 2);
          if (Variant::needs_deinit[*(int *)((long)pvVar4 + 0x18)] != '\0') {
            Variant::_clear_internal();
          }
          if ((StringName::configured != '\0') && (*(long *)((long)pvVar4 + 0x10) != 0)) {
            StringName::unref();
          }
          Memory::free_static(pvVar4,false);
          *(undefined8 *)(*(long *)(this + 0xe78) + lVar11 * 2) = 0;
        }
        lVar11 = lVar11 + 4;
      } while (lVar11 != (ulong)uVar8 << 2);
    }
    *(undefined4 *)(this + 0xe9c) = 0;
    *(undefined1 (*) [16])(this + 0xe88) = (undefined1  [16])0x0;
  }
  if (*(long *)(this + 0xe00) != 0) {
    this_00 = (RefCounted *)operator_new(0x1b0,"");
    pRVar9 = this_00;
    for (lVar11 = 0x36; lVar11 != 0; lVar11 = lVar11 + -1) {
      *(undefined8 *)pRVar9 = 0;
      pRVar9 = pRVar9 + (ulong)bVar13 * -0x10 + 8;
    }
    RefCounted::RefCounted(this_00);
    *(undefined ***)this_00 = &PTR__initialize_classv_00113180;
    *(undefined8 *)(this_00 + 0x1a8) = 2;
    *(undefined1 (*) [16])(this_00 + 0x188) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(this_00 + 0x198) = (undefined1  [16])0x0;
    postinitialize_handler((Object *)this_00);
    cVar5 = RefCounted::init_ref();
    local_f0 = (String *)0x0;
    if (cVar5 != '\0') {
      cVar5 = RefCounted::reference();
      local_f0 = (String *)(RefCounted *)0x0;
      if (cVar5 != '\0') {
        local_f0 = (String *)this_00;
      }
      cVar5 = RefCounted::unreference();
      if ((cVar5 != '\0') && (cVar5 = predelete_handler((Object *)this_00), cVar5 != '\0')) {
        (**(code **)(*(long *)this_00 + 0x140))(this_00);
        Memory::free_static(this_00,false);
      }
    }
    local_90 = 0;
    String::parse_latin1((String *)&local_90,".import");
    String::operator+((String *)&local_88,param_1);
    iVar6 = ConfigFile::load(local_f0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    this[0xe60] = (AudioStreamImportSettingsDialog)0x1;
    if (iVar6 == 0) {
      Variant::Variant((Variant *)local_78,0);
      local_88 = (Object *)0x0;
      String::parse_latin1((String *)&local_88,"bpm");
      local_90 = 0;
      String::parse_latin1((String *)&local_90,"params");
      ConfigFile::get_value((String *)&local_58,local_f0,(Variant *)&local_90);
      dVar14 = Variant::operator_cast_to_double((Variant *)&local_58);
      if (Variant::needs_deinit[(int)local_58] != '\0') {
        Variant::_clear_internal();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_78,0);
      local_88 = (Object *)0x0;
      String::parse_latin1((String *)&local_88,"beat_count");
      local_90 = 0;
      String::parse_latin1((String *)&local_90,"params");
      ConfigFile::get_value((String *)&local_58,local_f0,(Variant *)&local_90);
      iVar6 = Variant::operator_cast_to_int((Variant *)&local_58);
      if (Variant::needs_deinit[(int)local_58] != '\0') {
        Variant::_clear_internal();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (dVar14 <= 0.0) {
        dVar14 = _LC105;
      }
      Range::set_value(dVar14);
      BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xdb8),0));
      Range::set_value((double)iVar6);
      BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xdc8),0));
      uVar3 = *(undefined8 *)(this + 0xde8);
      Variant::Variant((Variant *)local_78,false);
      local_88 = (Object *)0x0;
      String::parse_latin1((String *)&local_88,"loop");
      local_90 = 0;
      String::parse_latin1((String *)&local_90,"params");
      ConfigFile::get_value((String *)&local_58,local_f0,(Variant *)&local_90);
      Variant::operator_cast_to_bool((Variant *)&local_58);
      BaseButton::set_pressed(SUB81(uVar3,0));
      if (Variant::needs_deinit[(int)local_58] != '\0') {
        Variant::_clear_internal();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_78,0);
      local_88 = (Object *)0x0;
      String::parse_latin1((String *)&local_88,"loop_offset");
      local_90 = 0;
      String::parse_latin1((String *)&local_90,"params");
      ConfigFile::get_value((String *)&local_58,local_f0,(Variant *)&local_90);
      dVar14 = Variant::operator_cast_to_double((Variant *)&local_58);
      Range::set_value(dVar14);
      if (Variant::needs_deinit[(int)local_58] != '\0') {
        Variant::_clear_internal();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_78,4);
      local_88 = (Object *)0x0;
      String::parse_latin1((String *)&local_88,"bar_beats");
      local_90 = 0;
      String::parse_latin1((String *)&local_90,"params");
      ConfigFile::get_value((String *)&local_58,local_f0,(Variant *)&local_90);
      dVar14 = Variant::operator_cast_to_double((Variant *)&local_58);
      Range::set_value(dVar14);
      if (Variant::needs_deinit[(int)local_58] != '\0') {
        Variant::_clear_internal();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      local_98 = (long *)0x0;
      local_88 = (Object *)0x0;
      String::parse_latin1((String *)&local_88,"params");
      ConfigFile::get_section_keys(local_f0,(List *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      if ((local_98 != (long *)0x0) && (pSVar12 = (String *)*local_98, pSVar12 != (String *)0x0)) {
        do {
          local_88 = (Object *)0x108b27;
          local_70 = (undefined1  [16])0x0;
          local_78[0] = 0;
          local_78[1] = 0;
          local_90 = 0;
          local_80 = 6;
          String::parse_latin1((StrRange *)&local_90);
          ConfigFile::get_value((String *)&local_58,local_f0,(Variant *)&local_90);
          StringName::StringName((StringName *)&local_88,pSVar12,false);
          pSVar7 = (String *)
                   HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                   ::operator[]((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                                 *)(this + 0xe70),(StringName *)&local_88);
          if (pSVar7 != (String *)&local_58) {
            if (Variant::needs_deinit[*(int *)pSVar7] != '\0') {
              Variant::_clear_internal();
            }
            *(undefined4 *)pSVar7 = 0;
            *(int *)pSVar7 = (int)local_58;
            *(undefined8 *)(pSVar7 + 8) = local_50;
            *(undefined8 *)(pSVar7 + 0x10) = uStack_48;
            local_58 = local_58 & 0xffffffff00000000;
          }
          if ((StringName::configured != '\0') && (local_88 != (Object *)0x0)) {
            StringName::unref();
          }
          if (Variant::needs_deinit[(int)local_58] != '\0') {
            Variant::_clear_internal();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
          if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
          }
          pSVar12 = *(String **)(pSVar12 + 8);
        } while (pSVar12 != (String *)0x0);
      }
      List<String,DefaultAllocator>::~List((List<String,DefaultAllocator> *)&local_98);
    }
    else {
      Range::set_value(0.0);
      BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xdb8),0));
      Range::set_value(0.0);
      BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xdc8),0));
      Range::set_value(_LC110);
      BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xde8),0));
      Range::set_value(0.0);
    }
    _preview_zoom_reset(this);
    this[0xe60] = (AudioStreamImportSettingsDialog)0x0;
    _settings_changed(this);
    String::get_file();
    local_a0 = 0;
    String::parse_latin1((String *)&local_a0,"");
    local_a8 = 0;
    String::parse_latin1((String *)&local_a8,"Audio Stream Importer: %s");
    TTR((String *)&local_98,(String *)&local_a8);
    vformat<String>((AudioStreamImportSettingsDialog *)&local_88,(CowData<char32_t> *)&local_98,
                    (StrRange *)&local_90);
    Window::set_title((String *)this);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    local_58 = 0;
    Window::popup_centered((Vector2i *)this);
    cVar5 = RefCounted::unreference();
    if ((cVar5 != '\0') && (cVar5 = predelete_handler((Object *)local_f0), cVar5 != '\0')) {
      (**(code **)(*(long *)local_f0 + 0x140))(local_f0);
      Memory::free_static(local_f0,false);
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b0);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Control::initialize_class() [clone .part.0] */

void Control::initialize_class(void)

{
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (CanvasItem::initialize_class()::initialized == '\0') {
    if (Node::initialize_class()::initialized == '\0') {
      Object::initialize_class();
      local_68 = 0;
      local_50 = 6;
      local_58 = "Object";
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "Node";
      local_70 = 0;
      local_50 = 4;
      String::parse_latin1((StrRange *)&local_70);
      StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
      if ((StringName::configured != '\0') && (local_58 != (undefined *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      if ((code *)PTR__bind_methods_00119010 != Node::_bind_methods) {
        Node::_bind_methods();
      }
      Node::initialize_class()::initialized = '\x01';
    }
    local_68 = 0;
    local_58 = "Node";
    local_50 = 4;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "CanvasItem";
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
    CanvasItem::_bind_methods();
    if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_bind_compatibility_methods) {
      CanvasItem::_bind_compatibility_methods();
    }
    CanvasItem::initialize_class()::initialized = '\x01';
  }
  local_58 = "CanvasItem";
  local_68 = 0;
  local_50 = 10;
  String::parse_latin1((StrRange *)&local_68);
  StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
  local_58 = "Control";
  local_70 = 0;
  local_50 = 7;
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
  if ((code *)PTR__bind_methods_00119008 != CanvasItem::_bind_methods) {
    Control::_bind_methods();
  }
  initialize_class()::initialized = 1;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AudioStreamImportSettingsDialog::_on_input_indicator(Ref<InputEvent>) */

void __thiscall
AudioStreamImportSettingsDialog::_on_input_indicator
          (AudioStreamImportSettingsDialog *this,long *param_2)

{
  char cVar1;
  AudioStreamImportSettingsDialog AVar2;
  int iVar3;
  Object *pOVar4;
  Object *pOVar5;
  long lVar6;
  long in_FS_OFFSET;
  float fVar7;
  float fVar8;
  double dVar9;
  float extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  Object *local_48;
  long local_40;
  
  lVar6 = *param_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar6 != 0) {
    pOVar4 = (Object *)__dynamic_cast(lVar6,&Object::typeinfo,&InputEventMouseButton::typeinfo,0);
    if (pOVar4 == (Object *)0x0) {
LAB_00104d50:
      pOVar5 = (Object *)__dynamic_cast(lVar6,&Object::typeinfo,&InputEventMouseMotion::typeinfo,0);
      if ((pOVar5 != (Object *)0x0) && (cVar1 = RefCounted::reference(), cVar1 != '\0')) {
        pOVar4 = (Object *)0x0;
LAB_00104d7a:
        if (this[0xe68] == (AudioStreamImportSettingsDialog)0x0) {
          AVar2 = this[0xe69];
        }
        else {
          fVar7 = (float)InputEventMouse::get_position();
          _seek_to(fVar7);
          AVar2 = this[0xe69];
        }
        if (AVar2 != (AudioStreamImportSettingsDialog)0x0) {
          fVar7 = (float)InputEventMouse::get_position();
          iVar3 = _get_beat_at_pos(this,fVar7);
          this[0xe60] = (AudioStreamImportSettingsDialog)0x1;
          BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xdc8),0));
          if (iVar3 < 1) {
            iVar3 = 1;
          }
          Range::set_value((double)iVar3);
          this[0xe60] = (AudioStreamImportSettingsDialog)0x0;
          _settings_changed(this);
        }
        dVar9 = (double)(**(code **)(**(long **)(this + 0xe00) + 0x1d8))();
        if (0.0 < dVar9) {
          if ((_on_input_indicator(Ref<InputEvent>)::{lambda()#3}::operator()()::sname == '\0') &&
             (iVar3 = __cxa_guard_acquire(&_on_input_indicator(Ref<InputEvent>)::{lambda()#3}::
                                           operator()()::sname), iVar3 != 0)) {
            _scs_create((char *)&_on_input_indicator(Ref<InputEvent>)::{lambda()#3}::operator()()::
                                 sname,true);
            __cxa_atexit(StringName::~StringName,
                         &_on_input_indicator(Ref<InputEvent>)::{lambda()#3}::operator()()::sname,
                         &__dso_handle);
            __cxa_guard_release(&_on_input_indicator(Ref<InputEvent>)::{lambda()#3}::operator()()::
                                 sname);
          }
          Window::get_theme_font_size
                    ((StringName *)this,
                     (StringName *)
                     &_on_input_indicator(Ref<InputEvent>)::{lambda()#3}::operator()()::sname);
          if ((_on_input_indicator(Ref<InputEvent>)::{lambda()#4}::operator()()::sname == '\0') &&
             (iVar3 = __cxa_guard_acquire(&_on_input_indicator(Ref<InputEvent>)::{lambda()#4}::
                                           operator()()::sname), iVar3 != 0)) {
            _scs_create((char *)&_on_input_indicator(Ref<InputEvent>)::{lambda()#4}::operator()()::
                                 sname,true);
            __cxa_atexit(StringName::~StringName,
                         &_on_input_indicator(Ref<InputEvent>)::{lambda()#4}::operator()()::sname,
                         &__dso_handle);
            __cxa_guard_release(&_on_input_indicator(Ref<InputEvent>)::{lambda()#4}::operator()()::
                                 sname);
          }
          Window::get_theme_font((StringName *)&local_48,(StringName *)this);
          fVar7 = (float)(**(code **)(*(long *)local_48 + 0x218))();
          fVar8 = (float)EditorScale::get_scale();
          InputEventMouse::get_position();
          if (extraout_XMM0_Db < (float)(int)(fVar7 + fVar8 * _LC56)) {
            fVar7 = (float)InputEventMouse::get_position();
            iVar3 = _get_beat_at_pos(this,fVar7);
            if (*(int *)(this + 0xe6c) != iVar3) {
              *(int *)(this + 0xe6c) = iVar3;
              CanvasItem::queue_redraw();
            }
          }
          else if (*(int *)(this + 0xe6c) != -1) {
            *(undefined4 *)(this + 0xe6c) = 0xffffffff;
            CanvasItem::queue_redraw();
          }
          if (((local_48 != (Object *)0x0) && (cVar1 = RefCounted::unreference(), cVar1 != '\0')) &&
             (cVar1 = predelete_handler(local_48), cVar1 != '\0')) {
            (**(code **)(*(long *)local_48 + 0x140))(local_48);
            Memory::free_static(local_48,false);
          }
        }
        cVar1 = RefCounted::unreference();
        if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar5), cVar1 != '\0')) {
          (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
          Memory::free_static(pOVar5,false);
        }
        if (pOVar4 != (Object *)0x0) {
LAB_00104e33:
          cVar1 = RefCounted::unreference();
          if (cVar1 != '\0') goto LAB_00104e3f;
        }
      }
    }
    else {
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        lVar6 = *param_2;
        if (lVar6 == 0) goto LAB_00104dcb;
        goto LAB_00104d50;
      }
      iVar3 = InputEventMouseButton::get_button_index();
      if (iVar3 != 1) {
LAB_00104e01:
        if (((*param_2 != 0) &&
            (pOVar5 = (Object *)
                      __dynamic_cast(*param_2,&Object::typeinfo,&InputEventMouseMotion::typeinfo,0),
            pOVar5 != (Object *)0x0)) && (cVar1 = RefCounted::reference(), cVar1 != '\0'))
        goto LAB_00104d7a;
        goto LAB_00104e33;
      }
      dVar9 = (double)(**(code **)(**(long **)(this + 0xe00) + 0x1d8))();
      if (dVar9 <= 0.0) {
LAB_00105085:
        cVar1 = InputEvent::is_pressed();
        if (cVar1 != '\0') {
          fVar7 = (float)InputEventMouse::get_position();
          _seek_to(fVar7);
        }
        AVar2 = (AudioStreamImportSettingsDialog)InputEvent::is_pressed();
        this[0xe68] = AVar2;
        goto LAB_00104e01;
      }
      if ((_on_input_indicator(Ref<InputEvent>)::{lambda()#1}::operator()()::sname == '\0') &&
         (iVar3 = __cxa_guard_acquire(&_on_input_indicator(Ref<InputEvent>)::{lambda()#1}::
                                       operator()()::sname), iVar3 != 0)) {
        _scs_create((char *)&_on_input_indicator(Ref<InputEvent>)::{lambda()#1}::operator()()::sname
                    ,true);
        __cxa_atexit(StringName::~StringName,
                     &_on_input_indicator(Ref<InputEvent>)::{lambda()#1}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_on_input_indicator(Ref<InputEvent>)::{lambda()#1}::operator()()::sname
                           );
      }
      Window::get_theme_font_size
                ((StringName *)this,
                 (StringName *)
                 &_on_input_indicator(Ref<InputEvent>)::{lambda()#1}::operator()()::sname);
      if ((_on_input_indicator(Ref<InputEvent>)::{lambda()#2}::operator()()::sname == '\0') &&
         (iVar3 = __cxa_guard_acquire(&_on_input_indicator(Ref<InputEvent>)::{lambda()#2}::
                                       operator()()::sname), iVar3 != 0)) {
        _scs_create((char *)&_on_input_indicator(Ref<InputEvent>)::{lambda()#2}::operator()()::sname
                    ,true);
        __cxa_atexit(StringName::~StringName,
                     &_on_input_indicator(Ref<InputEvent>)::{lambda()#2}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_on_input_indicator(Ref<InputEvent>)::{lambda()#2}::operator()()::sname
                           );
      }
      Window::get_theme_font((StringName *)&local_48,(StringName *)this);
      fVar7 = (float)(**(code **)(*(long *)local_48 + 0x218))();
      fVar8 = (float)EditorScale::get_scale();
      if (((this[0xe68] != (AudioStreamImportSettingsDialog)0x0) ||
          (InputEventMouse::get_position(),
          (float)(int)(fVar7 + fVar8 * _LC56) <= extraout_XMM0_Db_00)) &&
         (this[0xe69] == (AudioStreamImportSettingsDialog)0x0)) {
        Ref<Font>::unref((Ref<Font> *)&local_48);
        goto LAB_00105085;
      }
      AVar2 = (AudioStreamImportSettingsDialog)InputEvent::is_pressed();
      if (AVar2 != (AudioStreamImportSettingsDialog)0x0) {
        fVar7 = (float)InputEventMouse::get_position();
        _set_beat_len_to(this,fVar7);
      }
      this[0xe69] = AVar2;
      Ref<Font>::unref((Ref<Font> *)&local_48);
      cVar1 = RefCounted::unreference();
      if (cVar1 == '\0') goto LAB_00104dcb;
LAB_00104e3f:
      cVar1 = predelete_handler(pOVar4);
      if (cVar1 != '\0') {
        (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          Memory::free_static(pOVar4,false);
          return;
        }
        goto LAB_001053e5;
      }
    }
  }
LAB_00104dcb:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001053e5:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AudioStreamImportSettingsDialog::_notification(int) */

void AudioStreamImportSettingsDialog::_notification(int param_1)

{
  Ref *pRVar1;
  Color *pCVar2;
  StringName *pSVar3;
  code *pcVar4;
  undefined8 uVar5;
  long *plVar6;
  Object *pOVar7;
  char cVar8;
  int iVar9;
  CallableCustom *this;
  int in_ESI;
  undefined4 in_register_0000003c;
  StringName *this_00;
  long in_FS_OFFSET;
  undefined4 uVar10;
  long local_70;
  Object *local_68 [2];
  undefined8 local_58;
  long local_40;
  
  plVar6 = AudioStreamPreviewGenerator::singleton;
  this_00 = (StringName *)CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_ESI == 0x1e) {
    cVar8 = Window::is_visible();
    if (cVar8 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        _stop((AudioStreamImportSettingsDialog *)this_00);
        return;
      }
      goto LAB_00105e39;
    }
  }
  else if (in_ESI < 0x1f) {
    if (in_ESI == 0xd) {
      pcVar4 = *(code **)(*AudioStreamPreviewGenerator::singleton + 0x108);
      this = (CallableCustom *)operator_new(0x48,"");
      CallableCustom::CallableCustom(this);
      *(undefined **)(this + 0x20) = &_LC23;
      *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
      *(undefined ***)this = &PTR_hash_00114598;
      *(undefined8 *)(this + 0x40) = 0;
      uVar5 = *(undefined8 *)(this_00 + 0x60);
      *(undefined8 *)(this + 0x10) = 0;
      *(undefined8 *)(this + 0x30) = uVar5;
      *(code **)(this + 0x38) = _preview_changed;
      *(StringName **)(this + 0x28) = this_00;
      CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
      *(char **)(this + 0x20) = "AudioStreamImportSettingsDialog::_preview_changed";
      Callable::Callable((Callable *)local_68,this);
      StringName::StringName((StringName *)&local_70,"preview_updated",false);
      (*pcVar4)(plVar6,(StringName *)&local_70,(Callable *)local_68,0);
      if ((StringName::configured != '\0') && (local_70 != 0)) {
        StringName::unref();
      }
      Callable::~Callable((Callable *)local_68);
      pcVar4 = *(code **)(*(long *)this_00 + 0x108);
      create_custom_callable_function_pointer<AudioStreamImportSettingsDialog>
                ((AudioStreamImportSettingsDialog *)local_68,(char *)this_00,
                 (_func_void *)"&AudioStreamImportSettingsDialog::_reimport");
      (*pcVar4)(this_00,SceneStringNames::singleton + 0x268,(Callable *)local_68,0);
      Callable::~Callable((Callable *)local_68);
    }
    else if (in_ESI == 0x11) {
      uVar10 = AudioStreamPlayer::get_playback_position();
      *(undefined4 *)(this_00 + 0xe64) = uVar10;
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) goto LAB_0010581f;
      goto LAB_00105e39;
    }
  }
  else if (in_ESI == 0x20) {
    pRVar1 = *(Ref **)(this_00 + 0xe50);
    if ((_notification(int)::{lambda()#1}::operator()()::sname == '\0') &&
       (iVar9 = __cxa_guard_acquire(&_notification(int)::{lambda()#1}::operator()()::sname),
       iVar9 != 0)) {
      _scs_create((char *)&_notification(int)::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#1}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#1}::operator()()::sname);
    }
    Window::get_editor_theme_icon((StringName *)local_68);
    Button::set_button_icon(pRVar1);
    if (((local_68[0] != (Object *)0x0) &&
        (cVar8 = RefCounted::unreference(), pOVar7 = local_68[0], cVar8 != '\0')) &&
       (cVar8 = predelete_handler(local_68[0]), cVar8 != '\0')) {
      (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
      Memory::free_static(pOVar7,false);
    }
    pRVar1 = *(Ref **)(this_00 + 0xe58);
    if ((_notification(int)::{lambda()#2}::operator()()::sname == '\0') &&
       (iVar9 = __cxa_guard_acquire(&_notification(int)::{lambda()#2}::operator()()::sname),
       iVar9 != 0)) {
      _scs_create((char *)&_notification(int)::{lambda()#2}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#2}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#2}::operator()()::sname);
    }
    Window::get_editor_theme_icon((StringName *)local_68);
    Button::set_button_icon(pRVar1);
    Ref<Texture2D>::unref((Ref<Texture2D> *)local_68);
    pCVar2 = *(Color **)(this_00 + 0xe10);
    if ((_notification(int)::{lambda()#3}::operator()()::sname == '\0') &&
       (iVar9 = __cxa_guard_acquire(&_notification(int)::{lambda()#3}::operator()()::sname),
       iVar9 != 0)) {
      _scs_create((char *)&_notification(int)::{lambda()#3}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#3}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#3}::operator()()::sname);
    }
    local_58 = Window::get_theme_color
                         (this_00,(StringName *)
                                  &_notification(int)::{lambda()#3}::operator()()::sname);
    ColorRect::set_color(pCVar2);
    pCVar2 = *(Color **)(this_00 + 0xdf8);
    if ((_notification(int)::{lambda()#4}::operator()()::sname == '\0') &&
       (iVar9 = __cxa_guard_acquire(&_notification(int)::{lambda()#4}::operator()()::sname),
       iVar9 != 0)) {
      _scs_create((char *)&_notification(int)::{lambda()#4}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#4}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#4}::operator()()::sname);
    }
    local_58 = Window::get_theme_color
                         (this_00,(StringName *)
                                  &_notification(int)::{lambda()#4}::operator()()::sname);
    ColorRect::set_color(pCVar2);
    Control::begin_bulk_theme_override();
    pSVar3 = *(StringName **)(this_00 + 0xe20);
    if ((_notification(int)::{lambda()#5}::operator()()::sname == '\0') &&
       (iVar9 = __cxa_guard_acquire(&_notification(int)::{lambda()#5}::operator()()::sname),
       iVar9 != 0)) {
      _scs_create((char *)&_notification(int)::{lambda()#5}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#5}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#5}::operator()()::sname);
    }
    Window::get_theme_font((StringName *)local_68,this_00);
    Control::add_theme_font_override(pSVar3,(Ref *)(SceneStringNames::singleton + 0xa0));
    if (((local_68[0] != (Object *)0x0) &&
        (cVar8 = RefCounted::unreference(), pOVar7 = local_68[0], cVar8 != '\0')) &&
       (cVar8 = predelete_handler(local_68[0]), cVar8 != '\0')) {
      (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
      Memory::free_static(pOVar7,false);
    }
    pSVar3 = *(StringName **)(this_00 + 0xe20);
    if ((_notification(int)::{lambda()#6}::operator()()::sname == '\0') &&
       (iVar9 = __cxa_guard_acquire(&_notification(int)::{lambda()#6}::operator()()::sname),
       iVar9 != 0)) {
      _scs_create((char *)&_notification(int)::{lambda()#6}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#6}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#6}::operator()()::sname);
    }
    Window::get_theme_font_size
              (this_00,(StringName *)&_notification(int)::{lambda()#6}::operator()()::sname);
    Control::add_theme_font_size_override(pSVar3,(int)SceneStringNames::singleton + 0xa8);
    Control::end_bulk_theme_override();
    Control::begin_bulk_theme_override();
    pSVar3 = *(StringName **)(this_00 + 0xe28);
    if ((_notification(int)::{lambda()#7}::operator()()::sname == '\0') &&
       (iVar9 = __cxa_guard_acquire(&_notification(int)::{lambda()#7}::operator()()::sname),
       iVar9 != 0)) {
      _scs_create((char *)&_notification(int)::{lambda()#7}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#7}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#7}::operator()()::sname);
    }
    Window::get_theme_font((StringName *)local_68,this_00);
    Control::add_theme_font_override(pSVar3,(Ref *)(SceneStringNames::singleton + 0xa0));
    if (((local_68[0] != (Object *)0x0) && (cVar8 = RefCounted::unreference(), cVar8 != '\0')) &&
       (cVar8 = predelete_handler(local_68[0]), cVar8 != '\0')) {
      (**(code **)(*(long *)local_68[0] + 0x140))(local_68[0]);
      Memory::free_static(local_68[0],false);
    }
    pSVar3 = *(StringName **)(this_00 + 0xe28);
    if ((_notification(int)::{lambda()#8}::operator()()::sname == '\0') &&
       (iVar9 = __cxa_guard_acquire(&_notification(int)::{lambda()#8}::operator()()::sname),
       iVar9 != 0)) {
      _scs_create((char *)&_notification(int)::{lambda()#8}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#8}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#8}::operator()()::sname);
    }
    Window::get_theme_font_size
              (this_00,(StringName *)&_notification(int)::{lambda()#8}::operator()()::sname);
    Control::add_theme_font_size_override(pSVar3,(int)SceneStringNames::singleton + 0xa8);
    Control::end_bulk_theme_override();
    pRVar1 = *(Ref **)(this_00 + 0xe38);
    if ((_notification(int)::{lambda()#9}::operator()()::sname == '\0') &&
       (iVar9 = __cxa_guard_acquire(&_notification(int)::{lambda()#9}::operator()()::sname),
       iVar9 != 0)) {
      _scs_create((char *)&_notification(int)::{lambda()#9}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#9}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#9}::operator()()::sname);
    }
    Window::get_editor_theme_icon((StringName *)local_68);
    Button::set_button_icon(pRVar1);
    Ref<Texture2D>::unref((Ref<Texture2D> *)local_68);
    pRVar1 = *(Ref **)(this_00 + 0xe48);
    if ((_notification(int)::{lambda()#10}::operator()()::sname == '\0') &&
       (iVar9 = __cxa_guard_acquire(&_notification(int)::{lambda()#10}::operator()()::sname),
       iVar9 != 0)) {
      _scs_create((char *)&_notification(int)::{lambda()#10}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#10}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#10}::operator()()::sname);
    }
    Window::get_editor_theme_icon((StringName *)local_68);
    Button::set_button_icon(pRVar1);
    Ref<Texture2D>::unref((Ref<Texture2D> *)local_68);
    pRVar1 = *(Ref **)(this_00 + 0xe40);
    if ((_notification(int)::{lambda()#11}::operator()()::sname == '\0') &&
       (iVar9 = __cxa_guard_acquire(&_notification(int)::{lambda()#11}::operator()()::sname),
       iVar9 != 0)) {
      _scs_create((char *)&_notification(int)::{lambda()#11}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#11}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#11}::operator()()::sname);
    }
    Window::get_editor_theme_icon((StringName *)local_68);
    Button::set_button_icon(pRVar1);
    Ref<Texture2D>::unref((Ref<Texture2D> *)local_68);
    CanvasItem::queue_redraw();
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
LAB_0010581f:
      CanvasItem::queue_redraw();
      return;
    }
    goto LAB_00105e39;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00105e39:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AudioStreamImportSettingsDialog::_draw_preview() */

void __thiscall
AudioStreamImportSettingsDialog::_draw_preview(AudioStreamImportSettingsDialog *this)

{
  float fVar1;
  Rect2 *pRVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  char cVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  int iVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  size_t __n;
  int iVar21;
  int iVar22;
  int iVar23;
  long lVar24;
  long in_FS_OFFSET;
  float fVar25;
  float fVar26;
  float fVar27;
  float extraout_XMM0_Db;
  double dVar28;
  double dVar29;
  float fVar30;
  float fVar31;
  undefined8 extraout_XMM1_Qa;
  float fVar32;
  float fVar33;
  undefined1 auVar34 [16];
  float local_14c;
  float local_140;
  int local_13c;
  float local_124;
  Object *local_100;
  long *local_f8;
  CowData<char32_t> local_f0 [8];
  undefined1 local_e8 [8];
  undefined8 *local_e0;
  undefined1 local_d8 [8];
  undefined8 *local_d0;
  undefined8 local_c8;
  undefined4 uStack_c0;
  float fStack_bc;
  undefined8 local_b8;
  undefined4 uStack_b0;
  float fStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  float fStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 local_78 [12];
  float fStack_6c;
  int local_68;
  int local_64;
  undefined4 local_60;
  int iStack_5c;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Control::get_rect();
  fVar1 = (float)extraout_XMM1_Qa;
  local_140 = (float)((ulong)extraout_XMM1_Qa >> 0x20);
  iVar23 = (int)fVar1;
  AudioStreamPreviewGenerator::generate_preview((Ref *)&local_100);
  dVar28 = (double)Range::get_value();
  fVar32 = (float)dVar28;
  dVar28 = (double)Range::get_page();
  fVar33 = (float)dVar28;
  if ((_draw_preview()::{lambda()#1}::operator()()::sname == '\0') &&
     (iVar9 = __cxa_guard_acquire(&_draw_preview()::{lambda()#1}::operator()()::sname), iVar9 != 0))
  {
    _scs_create((char *)&_draw_preview()::{lambda()#1}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_draw_preview()::{lambda()#1}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_draw_preview()::{lambda()#1}::operator()()::sname);
  }
  Window::get_theme_font((StringName *)&local_f8,(StringName *)this);
  if ((_draw_preview()::{lambda()#2}::operator()()::sname == '\0') &&
     (iVar9 = __cxa_guard_acquire(&_draw_preview()::{lambda()#2}::operator()()::sname), iVar9 != 0))
  {
    _scs_create((char *)&_draw_preview()::{lambda()#2}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_draw_preview()::{lambda()#2}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_draw_preview()::{lambda()#2}::operator()()::sname);
  }
  uVar8 = Window::get_theme_font_size
                    ((StringName *)this,
                     (StringName *)&_draw_preview()::{lambda()#2}::operator()()::sname);
  lVar17 = (long)(iVar23 * 2);
  local_e0 = (undefined8 *)0x0;
  if (lVar17 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER");
    if (_draw_preview()::{lambda()#3}::operator()()::sname == '\0') goto LAB_0010650b;
    auVar34 = Window::get_theme_color
                        ((StringName *)this,
                         (StringName *)&_draw_preview()::{lambda()#3}::operator()()::sname);
    local_c8 = auVar34._0_8_;
    local_d0 = (undefined8 *)0x0;
    uStack_c0 = auVar34._8_4_;
    fStack_bc = auVar34._12_4_;
    _uStack_b0 = CONCAT44(_LC141 * fStack_bc,uStack_c0);
    local_b8 = local_c8;
    if (iVar23 == 0) goto LAB_0010614d;
LAB_00106134:
    local_d0 = (undefined8 *)0x0;
    local_b8 = local_c8;
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER");
  }
  else {
    if (lVar17 == 0) {
      if (_draw_preview()::{lambda()#3}::operator()()::sname != '\0') {
        auVar34 = Window::get_theme_color
                            ((StringName *)this,
                             (StringName *)&_draw_preview()::{lambda()#3}::operator()()::sname);
        local_c8 = auVar34._0_8_;
        local_d0 = (undefined8 *)0x0;
        uStack_c0 = auVar34._8_4_;
        fStack_bc = auVar34._12_4_;
        _uStack_b0 = CONCAT44(_LC141 * fStack_bc,uStack_c0);
        local_b8 = local_c8;
        goto LAB_0010614d;
      }
LAB_0010650b:
      iVar9 = __cxa_guard_acquire(&_draw_preview()::{lambda()#3}::operator()()::sname);
      if (iVar9 != 0) {
        _scs_create((char *)&_draw_preview()::{lambda()#3}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_draw_preview()::{lambda()#3}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_draw_preview()::{lambda()#3}::operator()()::sname);
      }
      auVar34 = Window::get_theme_color
                          ((StringName *)this,
                           (StringName *)&_draw_preview()::{lambda()#3}::operator()()::sname);
      local_c8 = auVar34._0_8_;
      uStack_c0 = auVar34._8_4_;
      fStack_bc = auVar34._12_4_;
      _uStack_b0 = CONCAT44(_LC141 * fStack_bc,uStack_c0);
      local_b8 = local_c8;
      if (iVar23 < 0) goto LAB_00106134;
    }
    else {
      CowData<Vector2>::_copy_on_write((CowData<Vector2> *)&local_e0);
      uVar19 = lVar17 * 8 - 1;
      uVar19 = uVar19 | uVar19 >> 1;
      uVar19 = uVar19 | uVar19 >> 2;
      uVar19 = uVar19 | uVar19 >> 4;
      uVar19 = uVar19 | uVar19 >> 8;
      uVar19 = uVar19 | uVar19 >> 0x10;
      puVar11 = (undefined8 *)Memory::alloc_static((uVar19 | uVar19 >> 0x20) + 0x11,false);
      if (puVar11 == (undefined8 *)0x0) {
        _err_print_error("resize","./core/templates/cowdata.h",0x171,
                         "Parameter \"mem_new\" is null.");
      }
      else {
        local_e0 = puVar11 + 2;
        *puVar11 = 1;
        memset(local_e0,0,lVar17 * 8);
        puVar11[1] = lVar17;
      }
      if (_draw_preview()::{lambda()#3}::operator()()::sname == '\0') goto LAB_0010650b;
      auVar34 = Window::get_theme_color
                          ((StringName *)this,
                           (StringName *)&_draw_preview()::{lambda()#3}::operator()()::sname);
      local_b8 = auVar34._0_8_;
      uStack_c0 = auVar34._8_4_;
      fStack_bc = auVar34._12_4_;
      _uStack_b0 = CONCAT44(_LC141 * fStack_bc,uStack_c0);
    }
    local_d0 = (undefined8 *)0x0;
    lVar17 = (long)iVar23;
    local_c8 = local_b8;
    if (lVar17 != 0) {
      uVar19 = lVar17 * 0x10 - 1;
      uVar19 = uVar19 | uVar19 >> 1;
      uVar19 = uVar19 | uVar19 >> 2;
      uVar19 = uVar19 | uVar19 >> 4;
      uVar19 = uVar19 | uVar19 >> 8;
      uVar19 = uVar19 | uVar19 >> 0x10;
      puVar11 = (undefined8 *)Memory::alloc_static((uVar19 | uVar19 >> 0x20) + 0x11,false);
      if (puVar11 == (undefined8 *)0x0) {
        _err_print_error("resize","./core/templates/cowdata.h",0x171,
                         "Parameter \"mem_new\" is null.");
      }
      else {
        local_d0 = puVar11 + 2;
        *puVar11 = 1;
        uVar5 = _UNK_00114c28;
        uVar3 = __LC143;
        puVar15 = puVar11;
        if ((lVar17 * 0x10 & 0x10U) == 0) goto LAB_00106630;
        puVar11[2] = __LC143;
        puVar11[3] = uVar5;
        puVar15 = local_d0;
        while (puVar11 + lVar17 * 2 != puVar15) {
LAB_00106630:
          puVar15[2] = uVar3;
          puVar15[3] = uVar5;
          puVar15[4] = uVar3;
          puVar15[5] = uVar5;
          puVar15 = puVar15 + 4;
        }
        puVar11[1] = lVar17;
      }
    }
  }
LAB_0010614d:
  dVar28 = (double)(**(code **)(**(long **)(this + 0xe00) + 0x1d8))();
  if (dVar28 <= 0.0) {
    local_124 = 0.0;
    iVar9 = 0;
    fVar25 = _LC138;
    local_14c = extraout_XMM0_Db;
  }
  else {
    dVar28 = (double)(**(code **)(**(long **)(this + 0xe00) + 0x1d8))();
    local_124 = _LC21 / (float)dVar28;
    fVar25 = (float)(**(code **)(*local_f8 + 0x218))();
    fVar26 = (float)EditorScale::get_scale();
    fVar25 = (float)(int)(fVar26 * _LC56 + fVar25);
    local_14c = extraout_XMM0_Db + fVar25;
    local_140 = local_140 - fVar25;
    iVar9 = (**(code **)(**(long **)(this + 0xe00) + 0x1f0))();
    if (iVar9 < 1) {
      iVar9 = 0;
      fVar25 = _LC138;
    }
    else {
      iVar9 = (**(code **)(**(long **)(this + 0xe00) + 0x1f0))();
      fVar25 = (float)iVar9 * local_124;
    }
  }
  if (0 < iVar23) {
    lVar24 = 1;
    lVar17 = 0;
    do {
      fVar30 = (float)((int)lVar17 + 1);
      fVar31 = (fVar30 * fVar33) / fVar1 + fVar32;
      fVar26 = ((float)(int)lVar17 * fVar33) / fVar1 + fVar32;
      fVar27 = (float)AudioStreamPreview::get_max(fVar26,fVar31);
      dVar28 = (double)fVar27 * __LC1 + __LC1;
      fVar27 = (float)AudioStreamPreview::get_min(fVar26,fVar31);
      lVar18 = lVar17 * 2;
      dVar29 = (double)fVar27 * __LC1 + __LC1;
      if (local_e0 == (undefined8 *)0x0) {
        lVar20 = 0;
LAB_0010668e:
        _err_print_index_error
                  ("operator[]","./core/templates/vector.h",0x38,lVar18,lVar20,"p_index",
                   "((Vector<T> *)(this))->_cowdata.size()","",false,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar20 = local_e0[-1];
      if (lVar20 <= lVar18) goto LAB_0010668e;
      CowData<Vector2>::_copy_on_write((CowData<Vector2> *)&local_e0);
      local_e0[lVar17 * 2] = CONCAT44((float)dVar29 * local_140 + local_14c,fVar30);
      lVar18 = lVar24;
      if (local_e0 == (undefined8 *)0x0) {
        lVar20 = 0;
        goto LAB_0010668e;
      }
      lVar20 = local_e0[-1];
      if (lVar20 <= lVar24) goto LAB_0010668e;
      CowData<Vector2>::_copy_on_write((CowData<Vector2> *)&local_e0);
      local_e0[lVar24] = CONCAT44((float)dVar28 * local_140 + local_14c,fVar30);
      puVar11 = &local_b8;
      if (fVar26 <= fVar25) {
        puVar11 = &local_c8;
      }
      lVar18 = lVar17;
      if (local_d0 == (undefined8 *)0x0) {
        lVar20 = 0;
        goto LAB_0010668e;
      }
      lVar20 = local_d0[-1];
      if (lVar20 <= lVar17) goto LAB_0010668e;
      if (1 < (ulong)local_d0[-2]) {
        if (local_d0 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        lVar18 = local_d0[-1];
        uVar19 = 0x10;
        __n = lVar18 * 0x10;
        if (__n != 0) {
          uVar19 = __n - 1 | __n - 1 >> 1;
          uVar19 = uVar19 | uVar19 >> 2;
          uVar19 = uVar19 | uVar19 >> 4;
          uVar19 = uVar19 | uVar19 >> 8;
          uVar19 = uVar19 | uVar19 >> 0x10;
          uVar19 = (uVar19 | uVar19 >> 0x20) + 0x11;
        }
        puVar13 = (undefined8 *)Memory::alloc_static(uVar19,false);
        puVar15 = local_d0;
        if (puVar13 == (undefined8 *)0x0) {
          _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                           "Parameter \"mem_new\" is null.",0,0);
        }
        else {
          *puVar13 = 1;
          puVar13[1] = lVar18;
          puVar14 = (undefined8 *)memcpy(puVar13 + 2,local_d0,__n);
          puVar13 = local_d0;
          LOCK();
          plVar12 = puVar15 + -2;
          *plVar12 = *plVar12 + -1;
          UNLOCK();
          local_d0 = puVar14;
          if (*plVar12 == 0) {
            local_d0 = (undefined8 *)0x0;
            Memory::free_static(puVar13 + -2,false);
            local_d0 = puVar14;
          }
        }
      }
      uVar3 = puVar11[1];
      lVar18 = lVar17 + 1;
      lVar24 = lVar24 + 2;
      local_d0[lVar17 * 2] = *puVar11;
      (local_d0 + lVar17 * 2)[1] = uVar3;
      lVar17 = lVar18;
    } while (lVar18 != iVar23);
  }
  if (local_e0 != (undefined8 *)0x0) {
    plVar12 = (long *)RenderingServer::get_singleton();
    (**(code **)(*plVar12 + 0xf08))
              (plVar12,*(undefined8 *)(*(long *)(this + 0xe10) + 0x428),local_e8,local_d8);
  }
  if (local_124 != 0.0) {
    local_98 = CONCAT44(_UNK_00114c04,_LC78);
    iVar16 = 0;
    local_78._8_4_ = uStack_c0;
    local_78._0_8_ = local_c8;
    uStack_90 = _UNK_00114c08;
    local_a8 = _LC78;
    uStack_a4 = _LC78;
    uStack_a0 = _LC78;
    _uStack_80 = CONCAT44(0x3f19999a,(int)_UNK_00114c08);
    fStack_9c = 0.4;
    local_58._0_8_ = 0;
    fStack_6c = (float)((double)fStack_bc * __LC150);
    local_58._8_8_ = CONCAT44(local_14c,fVar1);
    local_88 = local_98;
    CanvasItem::draw_rect(*(Rect2 **)(this + 0xe10),(Color *)local_58,SUB81(local_78,0),_LC99,true);
    iVar10 = (**(code **)(**(long **)(this + 0xe00) + 0x1e8))();
    if (0 < iVar23) {
      local_13c = 0;
      iVar21 = 0;
      do {
        iVar22 = (int)((((float)iVar16 * fVar33) / fVar1 + fVar32) / local_124);
        if (iVar22 != iVar21) {
          itos((long)local_f0);
          fVar25 = (float)(**(code **)(*local_f8 + 0x288))(local_f8,local_f0,0,0x10,3,0,0);
          fVar27 = (float)(iVar16 - (int)fVar25 / 2);
          fVar26 = (float)EditorScale::get_scale();
          if (fVar26 + fVar26 + (float)local_13c < fVar27) {
            uVar3 = *(undefined8 *)(this + 0xe10);
            fVar26 = (float)EditorScale::get_scale();
            fVar30 = (float)(**(code **)(*local_f8 + 0x220))(local_f8,uVar8);
            local_58._0_8_ = CONCAT44(fVar30 + fVar26 + fVar26,fVar27);
            CanvasItem::draw_string
                      (uVar3,(StringName *)&local_f8,(Color *)local_58,local_f0,0,0x10,&local_c8,3,0
                       ,0);
            local_13c = iVar16 + (int)fVar25 / 2;
          }
          pRVar2 = *(Rect2 **)(this + 0xe10);
          local_64 = (int)local_14c;
          local_68 = iVar16;
          if (iVar9 == iVar22) {
            _local_60 = CONCAT44((int)local_140,2);
            auVar34 = Rect2i::operator_cast_to_Rect2((Rect2i *)&local_68);
            local_58 = auVar34;
            CanvasItem::draw_rect(pRVar2,(Color *)local_58,SUB81(&local_98,0),_LC99,true);
            fStack_9c = (float)((double)fStack_9c * _LC151);
            fStack_bc = (float)((double)fStack_bc * _LC151);
          }
          else {
            _local_60 = CONCAT44((int)local_140,1);
            uVar7 = (char)&local_88;
            if (iVar22 % iVar10 != 0) {
              uVar7 = (char)&local_a8;
            }
            auVar34 = Rect2i::operator_cast_to_Rect2((Rect2i *)&local_68);
            local_58 = auVar34;
            CanvasItem::draw_rect(pRVar2,(Color *)local_58,(bool)uVar7,_LC99,true);
          }
          CowData<char32_t>::_unref(local_f0);
        }
        iVar16 = iVar16 + 1;
        iVar21 = iVar22;
      } while (iVar23 != iVar16);
    }
  }
  puVar11 = local_d0;
  if (local_d0 != (undefined8 *)0x0) {
    LOCK();
    plVar12 = local_d0 + -2;
    *plVar12 = *plVar12 + -1;
    UNLOCK();
    if (*plVar12 == 0) {
      local_d0 = (undefined8 *)0x0;
      Memory::free_static(puVar11 + -2,false);
    }
  }
  puVar11 = local_e0;
  if (local_e0 != (undefined8 *)0x0) {
    LOCK();
    plVar12 = local_e0 + -2;
    *plVar12 = *plVar12 + -1;
    UNLOCK();
    if (*plVar12 == 0) {
      local_e0 = (undefined8 *)0x0;
      Memory::free_static(puVar11 + -2,false);
    }
  }
  Ref<Font>::unref((Ref<Font> *)&local_f8);
  if (local_100 != (Object *)0x0) {
    cVar6 = RefCounted::unreference();
    if (cVar6 != '\0') {
      cVar6 = predelete_handler(local_100);
      if (cVar6 != '\0') {
        (**(code **)(*(long *)local_100 + 0x140))(local_100);
        Memory::free_static(local_100,false);
      }
    }
  }
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



/* Object::_bind_compatibility_methods() */

void Object::_bind_compatibility_methods(void)

{
  return;
}



/* Object::_set(StringName const&, Variant const&) */

undefined8 Object::_set(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Object::_get(StringName const&, Variant&) const */

undefined8 Object::_get(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Object::_get_property_list(List<PropertyInfo, DefaultAllocator>*) const */

void Object::_get_property_list(List *param_1)

{
  return;
}



/* Object::_validate_property(PropertyInfo&) const */

void Object::_validate_property(PropertyInfo *param_1)

{
  return;
}



/* Object::_property_can_revert(StringName const&) const */

undefined8 Object::_property_can_revert(StringName *param_1)

{
  return 0;
}



/* Object::_property_get_revert(StringName const&, Variant&) const */

undefined8 Object::_property_get_revert(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Object::_notification(int) */

void Object::_notification(int param_1)

{
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
  return (uint)CONCAT71(0x1149,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1149,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
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



/* ConfigFile::is_class_ptr(void*) const */

uint __thiscall ConfigFile::is_class_ptr(ConfigFile *this,void *param_1)

{
  return (uint)CONCAT71(0x1149,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1149,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1149,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* ConfigFile::_getv(StringName const&, Variant&) const */

undefined8 ConfigFile::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ConfigFile::_setv(StringName const&, Variant const&) */

undefined8 ConfigFile::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ConfigFile::_validate_propertyv(PropertyInfo&) const */

void ConfigFile::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* ConfigFile::_property_can_revertv(StringName const&) const */

undefined8 ConfigFile::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* ConfigFile::_property_get_revertv(StringName const&, Variant&) const */

undefined8 ConfigFile::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ConfigFile::_notificationv(int, bool) */

void ConfigFile::_notificationv(int param_1,bool param_2)

{
  return;
}



/* Control::_top_level_changed() */

void Control::_top_level_changed(void)

{
  return;
}



/* ColorRect::is_class_ptr(void*) const */

uint __thiscall ColorRect::is_class_ptr(ColorRect *this,void *param_1)

{
  return (uint)CONCAT71(0x1149,(undefined4 *)param_1 == &Control::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1149,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1149,(undefined4 *)param_1 == &CanvasItem::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1149,(undefined4 *)param_1 == &Node::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1149,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* Viewport::is_size_2d_override_stretch_enabled() const */

undefined8 Viewport::is_size_2d_override_stretch_enabled(void)

{
  return 1;
}



/* Viewport::is_sub_viewport() const */

undefined8 Viewport::is_sub_viewport(void)

{
  return 0;
}



/* Window::_popup_adjust_rect() const */

undefined1  [16] Window::_popup_adjust_rect(void)

{
  return ZEXT816(0);
}



/* AcceptDialog::ok_pressed() */

void AcceptDialog::ok_pressed(void)

{
  return;
}



/* AcceptDialog::cancel_pressed() */

void AcceptDialog::cancel_pressed(void)

{
  return;
}



/* AcceptDialog::custom_action(String const&) */

void AcceptDialog::custom_action(String *param_1)

{
  return;
}



/* ConfirmationDialog::is_class_ptr(void*) const */

uint ConfirmationDialog::is_class_ptr(void *param_1)

{
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  return (uint)CONCAT71(0x1148,in_RSI == &AcceptDialog::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1148,in_RSI == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1148,in_RSI == &Window::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1148,in_RSI == &Viewport::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1149,in_RSI == &Node::get_class_ptr_static()::ptr) |
         CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
}



/* ConfirmationDialog::_property_can_revertv(StringName const&) const */

undefined8 ConfirmationDialog::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* ConfirmationDialog::_property_get_revertv(StringName const&, Variant&) const */

undefined8 ConfirmationDialog::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* AudioStreamImportSettingsDialog::_property_can_revertv(StringName const&) const */

undefined8 AudioStreamImportSettingsDialog::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* AudioStreamImportSettingsDialog::_property_get_revertv(StringName const&, Variant&) const */

undefined8
AudioStreamImportSettingsDialog::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* CallableCustomMethodPointer<AudioStreamImportSettingsDialog, void, Ref<InputEvent>
   >::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AudioStreamImportSettingsDialog,void,Ref<InputEvent>>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AudioStreamImportSettingsDialog,void,Ref<InputEvent>> *this)

{
  return;
}



/* CallableCustomMethodPointer<AudioStreamImportSettingsDialog, void,
   double>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AudioStreamImportSettingsDialog,void,double>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AudioStreamImportSettingsDialog,void,double> *this)

{
  return;
}



/* CallableCustomMethodPointer<AudioStreamImportSettingsDialog,
   void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AudioStreamImportSettingsDialog,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AudioStreamImportSettingsDialog,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<AudioStreamImportSettingsDialog, void,
   ObjectID>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AudioStreamImportSettingsDialog,void,ObjectID>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AudioStreamImportSettingsDialog,void,ObjectID> *this)

{
  return;
}



/* CallableCustomMethodPointer<AudioStreamImportSettingsDialog, void, Ref<InputEvent>
   >::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<AudioStreamImportSettingsDialog,void,Ref<InputEvent>>::
get_argument_count(CallableCustomMethodPointer<AudioStreamImportSettingsDialog,void,Ref<InputEvent>>
                   *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<AudioStreamImportSettingsDialog, void,
   double>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<AudioStreamImportSettingsDialog,void,double>::get_argument_count
          (CallableCustomMethodPointer<AudioStreamImportSettingsDialog,void,double> *this,
          bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<AudioStreamImportSettingsDialog, void>::get_argument_count(bool&)
   const */

undefined8 __thiscall
CallableCustomMethodPointer<AudioStreamImportSettingsDialog,void>::get_argument_count
          (CallableCustomMethodPointer<AudioStreamImportSettingsDialog,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<AudioStreamImportSettingsDialog, void,
   ObjectID>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<AudioStreamImportSettingsDialog,void,ObjectID>::get_argument_count
          (CallableCustomMethodPointer<AudioStreamImportSettingsDialog,void,ObjectID> *this,
          bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointerBase::get_method() const */

void CallableCustomMethodPointerBase::get_method(void)

{
  long in_RSI;
  StringName *in_RDI;
  
  StringName::StringName(in_RDI,*(char **)(in_RSI + 0x20),false);
  return;
}



/* CallableCustomMethodPointer<AudioStreamImportSettingsDialog, void,
   ObjectID>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AudioStreamImportSettingsDialog,void,ObjectID>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AudioStreamImportSettingsDialog,void,ObjectID> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<AudioStreamImportSettingsDialog,
   void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AudioStreamImportSettingsDialog,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AudioStreamImportSettingsDialog,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<AudioStreamImportSettingsDialog, void,
   double>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AudioStreamImportSettingsDialog,void,double>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AudioStreamImportSettingsDialog,void,double> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<AudioStreamImportSettingsDialog, void, Ref<InputEvent>
   >::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AudioStreamImportSettingsDialog,void,Ref<InputEvent>>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AudioStreamImportSettingsDialog,void,Ref<InputEvent>> *this)

{
  operator_delete(this,0x48);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00113020;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00113020;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
}



/* ConfirmationDialog::~ConfirmationDialog() */

void __thiscall ConfirmationDialog::~ConfirmationDialog(ConfirmationDialog *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00113d38;
  AcceptDialog::~AcceptDialog((AcceptDialog *)this);
  return;
}



/* ConfirmationDialog::~ConfirmationDialog() */

void __thiscall ConfirmationDialog::~ConfirmationDialog(ConfirmationDialog *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00113d38;
  AcceptDialog::~AcceptDialog((AcceptDialog *)this);
  operator_delete(this,0xdb8);
  return;
}



/* ConfirmationDialog::_getv(StringName const&, Variant&) const */

undefined8 ConfirmationDialog::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__get_00119018 != Object::_get) {
    uVar1 = Window::_get(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* AudioStreamImportSettingsDialog::_getv(StringName const&, Variant&) const */

undefined8 AudioStreamImportSettingsDialog::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__get_00119018 != Object::_get) {
    uVar1 = Window::_get(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* ConfirmationDialog::_setv(StringName const&, Variant const&) */

undefined8 ConfirmationDialog::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__set_00119020 != Object::_set) {
    uVar1 = Window::_set(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* AudioStreamImportSettingsDialog::_setv(StringName const&, Variant const&) */

undefined8 AudioStreamImportSettingsDialog::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__set_00119020 != Object::_set) {
    uVar1 = Window::_set(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* ColorRect::~ColorRect() */

void __thiscall ColorRect::~ColorRect(ColorRect *this)

{
  *(undefined ***)this = &PTR__initialize_classv_001132e0;
  Control::~Control((Control *)this);
  return;
}



/* ColorRect::~ColorRect() */

void __thiscall ColorRect::~ColorRect(ColorRect *this)

{
  *(undefined ***)this = &PTR__initialize_classv_001132e0;
  Control::~Control((Control *)this);
  operator_delete(this,0x9d8);
  return;
}



/* ColorRect::_property_get_revertv(StringName const&, Variant&) const */

undefined8 ColorRect::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_00119028 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* HBoxContainer::_property_get_revertv(StringName const&, Variant&) const */

undefined8 HBoxContainer::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_00119028 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* VBoxContainer::_property_get_revertv(StringName const&, Variant&) const */

undefined8 VBoxContainer::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_00119028 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* HScrollBar::_property_get_revertv(StringName const&, Variant&) const */

undefined8 HScrollBar::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_00119028 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* ColorRect::_property_can_revertv(StringName const&) const */

undefined8 ColorRect::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00119030 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* HBoxContainer::_property_can_revertv(StringName const&) const */

undefined8 HBoxContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00119030 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* VBoxContainer::_property_can_revertv(StringName const&) const */

undefined8 VBoxContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00119030 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* HScrollBar::_property_can_revertv(StringName const&) const */

undefined8 HScrollBar::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00119030 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* HScrollBar::~HScrollBar() */

void __thiscall HScrollBar::~HScrollBar(HScrollBar *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00113fb0;
  ScrollBar::~ScrollBar((ScrollBar *)this);
  return;
}



/* HScrollBar::~HScrollBar() */

void __thiscall HScrollBar::~HScrollBar(HScrollBar *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00113fb0;
  ScrollBar::~ScrollBar((ScrollBar *)this);
  operator_delete(this,0xac8);
  return;
}



/* AudioStreamImportSettingsDialog::_get_class_namev() const */

undefined8 * AudioStreamImportSettingsDialog::_get_class_namev(void)

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
LAB_001078b3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001078b3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "AudioStreamImportSettingsDialog");
      goto LAB_0010791e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"AudioStreamImportSettingsDialog"
            );
LAB_0010791e:
  return &_get_class_namev()::_class_name_static;
}



/* CallableCustomMethodPointer<AudioStreamImportSettingsDialog, void, ObjectID>::get_object() const
    */

undefined8 __thiscall
CallableCustomMethodPointer<AudioStreamImportSettingsDialog,void,ObjectID>::get_object
          (CallableCustomMethodPointer<AudioStreamImportSettingsDialog,void,ObjectID> *this)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong *puVar4;
  long in_FS_OFFSET;
  bool bVar5;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar3 < (uint)ObjectDB::slot_max) {
    while( true ) {
      LOCK();
      bVar5 = (char)ObjectDB::spin_lock == '\0';
      if (bVar5) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar5) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar4 = (ulong *)((ulong)uVar3 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar4 & 0x7fffffffff)) {
      uVar2 = 0;
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_00107a4d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00107a4d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00107a4d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<AudioStreamImportSettingsDialog, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<AudioStreamImportSettingsDialog,void>::get_object
          (CallableCustomMethodPointer<AudioStreamImportSettingsDialog,void> *this)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong *puVar4;
  long in_FS_OFFSET;
  bool bVar5;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar3 < (uint)ObjectDB::slot_max) {
    while( true ) {
      LOCK();
      bVar5 = (char)ObjectDB::spin_lock == '\0';
      if (bVar5) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar5) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar4 = (ulong *)((ulong)uVar3 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar4 & 0x7fffffffff)) {
      uVar2 = 0;
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_00107b4d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00107b4d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00107b4d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<AudioStreamImportSettingsDialog, void, double>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<AudioStreamImportSettingsDialog,void,double>::get_object
          (CallableCustomMethodPointer<AudioStreamImportSettingsDialog,void,double> *this)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong *puVar4;
  long in_FS_OFFSET;
  bool bVar5;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar3 < (uint)ObjectDB::slot_max) {
    while( true ) {
      LOCK();
      bVar5 = (char)ObjectDB::spin_lock == '\0';
      if (bVar5) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar5) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar4 = (ulong *)((ulong)uVar3 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar4 & 0x7fffffffff)) {
      uVar2 = 0;
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_00107c4d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00107c4d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00107c4d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<AudioStreamImportSettingsDialog, void, Ref<InputEvent>
   >::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<AudioStreamImportSettingsDialog,void,Ref<InputEvent>>::get_object
          (CallableCustomMethodPointer<AudioStreamImportSettingsDialog,void,Ref<InputEvent>> *this)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong *puVar4;
  long in_FS_OFFSET;
  bool bVar5;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar3 < (uint)ObjectDB::slot_max) {
    while( true ) {
      LOCK();
      bVar5 = (char)ObjectDB::spin_lock == '\0';
      if (bVar5) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar5) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar4 = (ulong *)((ulong)uVar3 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar4 & 0x7fffffffff)) {
      uVar2 = 0;
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_00107d4d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00107d4d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00107d4d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* ConfirmationDialog::_validate_propertyv(PropertyInfo&) const */

void ConfirmationDialog::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  Viewport::_validate_property(param_1);
  if ((code *)PTR__validate_property_00119038 == Viewport::_validate_property) {
    return;
  }
  Window::_validate_property(param_1);
  return;
}



/* AudioStreamImportSettingsDialog::_validate_propertyv(PropertyInfo&) const */

void AudioStreamImportSettingsDialog::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  Viewport::_validate_property(param_1);
  if ((code *)PTR__validate_property_00119038 == Viewport::_validate_property) {
    return;
  }
  Window::_validate_property(param_1);
  return;
}



/* HScrollBar::is_class_ptr(void*) const */

uint HScrollBar::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x1148,in_RSI == &Range::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1148,in_RSI == &ScrollBar::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1149,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1149,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1149,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* HScrollBar::_validate_propertyv(PropertyInfo&) const */

void HScrollBar::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  if ((code *)PTR__validate_property_00119040 == CanvasItem::_validate_property) {
    return;
  }
  Control::_validate_property(param_1);
  return;
}



/* ColorRect::_validate_propertyv(PropertyInfo&) const */

void ColorRect::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  if ((code *)PTR__validate_property_00119040 == CanvasItem::_validate_property) {
    return;
  }
  Control::_validate_property(param_1);
  return;
}



/* VBoxContainer::_validate_propertyv(PropertyInfo&) const */

void VBoxContainer::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_00119048 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* HBoxContainer::_validate_propertyv(PropertyInfo&) const */

void HBoxContainer::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_00119048 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* ConfirmationDialog::_notificationv(int, bool) */

void __thiscall
ConfirmationDialog::_notificationv(ConfirmationDialog *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_00119050 != Window::_notification) {
      AcceptDialog::_notification(iVar1);
    }
    Window::_notification(iVar1);
    Viewport::_notification(iVar1);
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  Viewport::_notification(iVar1);
  Window::_notification(iVar1);
  if ((code *)PTR__notification_00119050 == Window::_notification) {
    return;
  }
  AcceptDialog::_notification(iVar1);
  return;
}



/* HBoxContainer::is_class_ptr(void*) const */

uint HBoxContainer::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x1149,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1149,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1149,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1149,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1149,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* VBoxContainer::is_class_ptr(void*) const */

uint VBoxContainer::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x1149,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1149,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1149,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1149,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1149,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* AudioStreamImportSettingsDialog::is_class_ptr(void*) const */

uint AudioStreamImportSettingsDialog::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x1148,in_RSI == &AcceptDialog::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1148,in_RSI == &ConfirmationDialog::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1148,in_RSI == &Window::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1148,in_RSI == &Viewport::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1149,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* HScrollBar::_setv(StringName const&, Variant const&) */

undefined8 HScrollBar::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_00119058 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* ColorRect::_setv(StringName const&, Variant const&) */

undefined8 ColorRect::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_00119058 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* VBoxContainer::_setv(StringName const&, Variant const&) */

undefined8 VBoxContainer::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_00119058 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* HBoxContainer::_setv(StringName const&, Variant const&) */

undefined8 HBoxContainer::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_00119058 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x001085b8) */
/* VBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 VBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00119060 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00108628) */
/* HBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 HBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00119060 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00108698) */
/* HScrollBar::_getv(StringName const&, Variant&) const */

undefined8 HScrollBar::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00119060 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00108708) */
/* ColorRect::_getv(StringName const&, Variant&) const */

undefined8 ColorRect::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00119060 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x001087da) */
/* ColorRect::_notificationv(int, bool) */

void __thiscall ColorRect::_notificationv(ColorRect *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_00119068 != Control::_notification) {
      ColorRect::_notification(iVar1);
    }
    Control::_notification(iVar1);
    CanvasItem::_notification(iVar1);
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  CanvasItem::_notification(iVar1);
  Control::_notification(iVar1);
  if ((code *)PTR__notification_00119068 == Control::_notification) {
    return;
  }
  ColorRect::_notification(iVar1);
  return;
}



/* VBoxContainer::~VBoxContainer() */

void __thiscall VBoxContainer::~VBoxContainer(VBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = Window::get_editor_theme_icon;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00108870;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00108870:
  Control::~Control((Control *)this);
  return;
}



/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = Window::get_editor_theme_icon;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001088d0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_001088d0:
  Control::~Control((Control *)this);
  return;
}



/* VBoxContainer::~VBoxContainer() */

void __thiscall VBoxContainer::~VBoxContainer(VBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = Window::get_editor_theme_icon;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00108930;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00108930:
  Control::~Control((Control *)this);
  operator_delete(this,0xa10);
  return;
}



/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = Window::get_editor_theme_icon;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001089a0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_001089a0:
  Control::~Control((Control *)this);
  operator_delete(this,0xa10);
  return;
}



/* ColorRect::_get_class_namev() const */

undefined8 * ColorRect::_get_class_namev(void)

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
LAB_00108c53:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00108c53;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"ColorRect");
      goto LAB_00108cbe;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"ColorRect");
LAB_00108cbe:
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
LAB_00108d33:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00108d33;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_00108d9e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_00108d9e:
  return &_get_class_namev()::_class_name_static;
}



/* HBoxContainer::_get_class_namev() const */

undefined8 * HBoxContainer::_get_class_namev(void)

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
LAB_00108e23:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00108e23;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
      goto LAB_00108e8e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
LAB_00108e8e:
  return &_get_class_namev()::_class_name_static;
}



/* ConfirmationDialog::_get_class_namev() const */

undefined8 * ConfirmationDialog::_get_class_namev(void)

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
LAB_00108f13:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00108f13;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"ConfirmationDialog");
      goto LAB_00108f7e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"ConfirmationDialog");
LAB_00108f7e:
  return &_get_class_namev()::_class_name_static;
}



/* ConfigFile::_get_class_namev() const */

undefined8 * ConfigFile::_get_class_namev(void)

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
LAB_00108ff3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00108ff3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"ConfigFile");
      goto LAB_0010905e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"ConfigFile");
LAB_0010905e:
  return &_get_class_namev()::_class_name_static;
}



/* VBoxContainer::_get_class_namev() const */

undefined8 * VBoxContainer::_get_class_namev(void)

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
LAB_001090e3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001090e3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
      goto LAB_0010914e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
LAB_0010914e:
  return &_get_class_namev()::_class_name_static;
}



/* HScrollBar::_get_class_namev() const */

undefined8 * HScrollBar::_get_class_namev(void)

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
LAB_001091c3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001091c3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"HScrollBar");
      goto LAB_0010922e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"HScrollBar");
LAB_0010922e:
  return &_get_class_namev()::_class_name_static;
}



/* CallableCustomMethodPointerBase::get_as_text() const */

void CallableCustomMethodPointerBase::get_as_text(void)

{
  char *__s;
  long lVar1;
  long in_RSI;
  StrRange *in_RDI;
  long in_FS_OFFSET;
  
  __s = *(char **)(in_RSI + 0x20);
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)in_RDI = 0;
  if (__s != (char *)0x0) {
    strlen(__s);
  }
  String::parse_latin1(in_RDI);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HScrollBar::_notificationv(int, bool) */

void __thiscall HScrollBar::_notificationv(HScrollBar *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_00119070 != Control::_notification) {
      ScrollBar::_notification(iVar1);
    }
    Control::_notification(iVar1);
    CanvasItem::_notification(iVar1);
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  CanvasItem::_notification(iVar1);
  Control::_notification(iVar1);
  if ((code *)PTR__notification_00119070 == Control::_notification) {
    return;
  }
  ScrollBar::_notification(iVar1);
  return;
}



/* HBoxContainer::_notificationv(int, bool) */

void __thiscall HBoxContainer::_notificationv(HBoxContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_00119078 != Container::_notification) {
      BoxContainer::_notification(iVar1);
    }
    Container::_notification(iVar1);
    Control::_notification(iVar1);
    CanvasItem::_notification(iVar1);
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  CanvasItem::_notification(iVar1);
  Control::_notification(iVar1);
  Container::_notification(iVar1);
  if ((code *)PTR__notification_00119078 == Container::_notification) {
    return;
  }
  BoxContainer::_notification(iVar1);
  return;
}



/* VBoxContainer::_notificationv(int, bool) */

void __thiscall VBoxContainer::_notificationv(VBoxContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_00119078 != Container::_notification) {
      BoxContainer::_notification(iVar1);
    }
    Container::_notification(iVar1);
    Control::_notification(iVar1);
    CanvasItem::_notification(iVar1);
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  CanvasItem::_notification(iVar1);
  Control::_notification(iVar1);
  Container::_notification(iVar1);
  if ((code *)PTR__notification_00119078 == Container::_notification) {
    return;
  }
  BoxContainer::_notification(iVar1);
  return;
}



/* CowData<Vector2>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Vector2>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* AudioStreamImportSettingsDialog::_draw_preview() [clone .cold] */

void AudioStreamImportSettingsDialog::_draw_preview(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* ConfirmationDialog::get_class() const */

void ConfirmationDialog::get_class(void)

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



/* VBoxContainer::get_class() const */

void VBoxContainer::get_class(void)

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



/* CowData<char32_t>::_ref(CowData<char32_t> const&) */

void __thiscall CowData<char32_t>::_ref(CowData<char32_t> *this,CowData *param_1)

{
  if (*(long *)this != *(long *)param_1) {
    _ref(this,param_1);
    return;
  }
  return;
}



/* AudioStreamImportSettingsDialog::get_class() const */

void AudioStreamImportSettingsDialog::get_class(void)

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
        CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
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



/* HScrollBar::get_class() const */

void HScrollBar::get_class(void)

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
        CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
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



/* HBoxContainer::get_class() const */

void HBoxContainer::get_class(void)

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
        CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
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



/* ColorRect::get_class() const */

void ColorRect::get_class(void)

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
        CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
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



/* ConfigFile::get_class() const */

void ConfigFile::get_class(void)

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
        CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
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



/* Callable
   create_custom_callable_function_pointer<AudioStreamImportSettingsDialog>(AudioStreamImportSettingsDialog*,
   char const*, void (AudioStreamImportSettingsDialog::*)()) */

AudioStreamImportSettingsDialog *
create_custom_callable_function_pointer<AudioStreamImportSettingsDialog>
          (AudioStreamImportSettingsDialog *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC23;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00114628;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_void **)(this + 0x20) = param_3 + 1;
  Callable::Callable((Callable *)param_1,this);
  return param_1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Variant> > >::operator[](StringName const&) */

Variant * __thiscall
HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
::operator[](HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
             *this,StringName *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *__s;
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
  undefined1 auVar35 [16];
  uint uVar36;
  uint uVar37;
  uint uVar38;
  ulong uVar39;
  undefined8 uVar40;
  void *__s_00;
  undefined8 *puVar41;
  void *pvVar42;
  ulong uVar43;
  int iVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  ulong uVar48;
  undefined8 uVar49;
  uint uVar50;
  uint uVar51;
  uint uVar52;
  long lVar53;
  undefined8 *puVar54;
  long in_FS_OFFSET;
  Variant *local_c8;
  int local_98 [2];
  undefined1 local_90 [16];
  undefined1 local_78 [16];
  long local_68;
  int local_60 [8];
  long local_40;
  
  lVar53 = *(long *)(this + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar37 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar39 = CONCAT44(0,uVar37);
  if (lVar53 == 0) {
LAB_0010a5f8:
    local_90 = (undefined1  [16])0x0;
    local_98[0] = 0;
    local_98[1] = 0;
    uVar43 = uVar39 * 4;
    uVar48 = uVar39 * 8;
    uVar40 = Memory::alloc_static(uVar43,false);
    *(undefined8 *)(this + 0x10) = uVar40;
    pvVar42 = (void *)Memory::alloc_static(uVar48,false);
    *(void **)(this + 8) = pvVar42;
    if ((int)uVar39 != 0) {
      pvVar3 = *(void **)(this + 0x10);
      if ((pvVar3 < (void *)((long)pvVar42 + uVar48)) && (pvVar42 < (void *)((long)pvVar3 + uVar43))
         ) {
        uVar43 = 0;
        do {
          *(undefined4 *)((long)pvVar3 + uVar43 * 4) = 0;
          *(undefined8 *)((long)pvVar42 + uVar43 * 8) = 0;
          uVar43 = uVar43 + 1;
        } while (uVar39 != uVar43);
      }
      else {
        memset(pvVar3,0,uVar43);
        memset(pvVar42,0,uVar48);
      }
LAB_0010a00e:
      iVar44 = *(int *)(this + 0x2c);
      if (iVar44 != 0) {
LAB_0010a01e:
        uVar37 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
        uVar43 = CONCAT44(0,uVar37);
        lVar53 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        if (*(long *)param_1 == 0) {
          uVar38 = StringName::get_empty_hash();
        }
        else {
          uVar38 = *(uint *)(*(long *)param_1 + 0x20);
        }
        if (uVar38 == 0) {
          uVar38 = 1;
        }
        uVar52 = 0;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = (ulong)uVar38 * lVar53;
        auVar24._8_8_ = 0;
        auVar24._0_8_ = uVar43;
        lVar46 = SUB168(auVar8 * auVar24,8);
        uVar51 = SUB164(auVar8 * auVar24,8);
        uVar50 = *(uint *)(*(long *)(this + 0x10) + lVar46 * 4);
        if (uVar50 != 0) {
          do {
            if ((uVar38 == uVar50) &&
               (*(long *)(*(long *)(*(long *)(this + 8) + lVar46 * 8) + 0x10) == *(long *)param_1))
            {
              Variant::operator=((Variant *)
                                 (*(long *)(*(long *)(this + 8) + (ulong)uVar51 * 8) + 0x18),
                                 (Variant *)local_98);
              local_c8 = (Variant *)(*(long *)(*(long *)(this + 8) + (ulong)uVar51 * 8) + 0x18);
              goto LAB_0010a53b;
            }
            uVar52 = uVar52 + 1;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = (ulong)(uVar51 + 1) * lVar53;
            auVar25._8_8_ = 0;
            auVar25._0_8_ = uVar43;
            lVar46 = SUB168(auVar9 * auVar25,8);
            uVar50 = *(uint *)(*(long *)(this + 0x10) + lVar46 * 4);
            uVar51 = SUB164(auVar9 * auVar25,8);
          } while ((uVar50 != 0) &&
                  (auVar10._8_8_ = 0, auVar10._0_8_ = (ulong)uVar50 * lVar53, auVar26._8_8_ = 0,
                  auVar26._0_8_ = uVar43, auVar11._8_8_ = 0,
                  auVar11._0_8_ = (ulong)((uVar37 + uVar51) - SUB164(auVar10 * auVar26,8)) * lVar53,
                  auVar27._8_8_ = 0, auVar27._0_8_ = uVar43, uVar52 <= SUB164(auVar11 * auVar27,8)))
          ;
        }
        iVar44 = *(int *)(this + 0x2c);
      }
      goto LAB_0010a145;
    }
    iVar44 = *(int *)(this + 0x2c);
    if (pvVar42 == (void *)0x0) goto LAB_0010a145;
    if (*(int *)(this + 0x2c) != 0) goto LAB_0010a01e;
LAB_0010a16b:
    uVar37 = *(uint *)(this + 0x28);
    if (uVar37 == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      local_c8 = (Variant *)0x18;
      goto LAB_0010a53b;
    }
    uVar39 = (ulong)(uVar37 + 1);
    uVar38 = *(uint *)(hash_table_size_primes + (ulong)uVar37 * 4);
    *(undefined4 *)(this + 0x2c) = 0;
    if (uVar37 + 1 < 2) {
      uVar39 = 2;
    }
    uVar37 = *(uint *)(hash_table_size_primes + uVar39 * 4);
    uVar48 = (ulong)uVar37;
    *(int *)(this + 0x28) = (int)uVar39;
    pvVar42 = *(void **)(this + 8);
    uVar39 = uVar48 * 4;
    uVar43 = uVar48 * 8;
    pvVar3 = *(void **)(this + 0x10);
    uVar40 = Memory::alloc_static(uVar39,false);
    *(undefined8 *)(this + 0x10) = uVar40;
    __s_00 = (void *)Memory::alloc_static(uVar43,false);
    *(void **)(this + 8) = __s_00;
    if (uVar37 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar43)) && (__s_00 < (void *)((long)__s + uVar39))) {
        uVar39 = 0;
        do {
          *(undefined4 *)((long)__s + uVar39 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar39 * 8) = 0;
          uVar39 = uVar39 + 1;
        } while (uVar39 != uVar48);
      }
      else {
        memset(__s,0,uVar39);
        memset(__s_00,0,uVar43);
      }
    }
    if (uVar38 != 0) {
      local_c8 = (Variant *)0x0;
      do {
        uVar37 = *(uint *)((long)pvVar3 + (long)local_c8 * 4);
        if (uVar37 != 0) {
          uVar52 = 0;
          lVar53 = *(long *)(this + 0x10);
          uVar50 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar39 = CONCAT44(0,uVar50);
          lVar46 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar12._8_8_ = 0;
          auVar12._0_8_ = (ulong)uVar37 * lVar46;
          auVar28._8_8_ = 0;
          auVar28._0_8_ = uVar39;
          lVar45 = SUB168(auVar12 * auVar28,8);
          puVar1 = (uint *)(lVar53 + lVar45 * 4);
          iVar44 = SUB164(auVar12 * auVar28,8);
          uVar51 = *puVar1;
          uVar40 = *(undefined8 *)((long)pvVar42 + (long)local_c8 * 8);
          while (uVar51 != 0) {
            auVar13._8_8_ = 0;
            auVar13._0_8_ = (ulong)uVar51 * lVar46;
            auVar29._8_8_ = 0;
            auVar29._0_8_ = uVar39;
            auVar14._8_8_ = 0;
            auVar14._0_8_ = (ulong)((uVar50 + iVar44) - SUB164(auVar13 * auVar29,8)) * lVar46;
            auVar30._8_8_ = 0;
            auVar30._0_8_ = uVar39;
            uVar36 = SUB164(auVar14 * auVar30,8);
            uVar49 = uVar40;
            if (uVar36 < uVar52) {
              puVar41 = (undefined8 *)((long)__s_00 + lVar45 * 8);
              *puVar1 = uVar37;
              uVar49 = *puVar41;
              *puVar41 = uVar40;
              uVar37 = uVar51;
              uVar52 = uVar36;
            }
            uVar52 = uVar52 + 1;
            auVar15._8_8_ = 0;
            auVar15._0_8_ = (ulong)(iVar44 + 1) * lVar46;
            auVar31._8_8_ = 0;
            auVar31._0_8_ = uVar39;
            lVar45 = SUB168(auVar15 * auVar31,8);
            puVar1 = (uint *)(lVar53 + lVar45 * 4);
            iVar44 = SUB164(auVar15 * auVar31,8);
            uVar40 = uVar49;
            uVar51 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar45 * 8) = uVar40;
          *puVar1 = uVar37;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        local_c8 = (Variant *)((long)local_c8 + 1);
      } while ((Variant *)(ulong)uVar38 != local_c8);
      Memory::free_static(pvVar42,false);
      Memory::free_static(pvVar3,false);
    }
  }
  else {
    if (*(int *)(this + 0x2c) != 0) {
      lVar46 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      if (*(long *)param_1 == 0) {
        uVar38 = StringName::get_empty_hash();
        lVar53 = *(long *)(this + 8);
      }
      else {
        uVar38 = *(uint *)(*(long *)param_1 + 0x20);
      }
      if (uVar38 == 0) {
        uVar38 = 1;
      }
      auVar4._8_8_ = 0;
      auVar4._0_8_ = (ulong)uVar38 * lVar46;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar39;
      lVar45 = SUB168(auVar4 * auVar20,8);
      uVar51 = SUB164(auVar4 * auVar20,8);
      uVar50 = *(uint *)(*(long *)(this + 0x10) + lVar45 * 4);
      if (uVar50 != 0) {
        uVar52 = 0;
        do {
          if ((uVar38 == uVar50) &&
             (*(long *)(*(long *)(lVar53 + lVar45 * 8) + 0x10) == *(long *)param_1)) {
            local_c8 = (Variant *)(*(long *)(lVar53 + (ulong)uVar51 * 8) + 0x18);
            goto LAB_00109fb4;
          }
          uVar52 = uVar52 + 1;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = (ulong)(uVar51 + 1) * lVar46;
          auVar21._8_8_ = 0;
          auVar21._0_8_ = uVar39;
          lVar45 = SUB168(auVar5 * auVar21,8);
          uVar50 = *(uint *)(*(long *)(this + 0x10) + lVar45 * 4);
          uVar51 = SUB164(auVar5 * auVar21,8);
        } while ((uVar50 != 0) &&
                (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar50 * lVar46, auVar22._8_8_ = 0,
                auVar22._0_8_ = uVar39, auVar7._8_8_ = 0,
                auVar7._0_8_ = (ulong)((uVar51 + uVar37) - SUB164(auVar6 * auVar22,8)) * lVar46,
                auVar23._8_8_ = 0, auVar23._0_8_ = uVar39, uVar52 <= SUB164(auVar7 * auVar23,8)));
      }
      local_98[0] = 0;
      local_98[1] = 0;
      local_90 = (undefined1  [16])0x0;
      uVar39 = (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      if (lVar53 == 0) goto LAB_0010a5f8;
      goto LAB_0010a00e;
    }
    local_98[0] = 0;
    local_98[1] = 0;
    local_90 = (undefined1  [16])0x0;
    iVar44 = 0;
LAB_0010a145:
    if ((float)uVar39 * __LC24 < (float)(iVar44 + 1)) goto LAB_0010a16b;
  }
  local_78 = (undefined1  [16])0x0;
  StringName::StringName((StringName *)&local_68,param_1);
  Variant::Variant((Variant *)local_60,(Variant *)local_98);
  puVar41 = (undefined8 *)operator_new(0x30,"");
  *puVar41 = local_78._0_8_;
  puVar41[1] = local_78._8_8_;
  StringName::StringName((StringName *)(puVar41 + 2),(StringName *)&local_68);
  local_c8 = (Variant *)(puVar41 + 3);
  Variant::Variant(local_c8,(Variant *)local_60);
  if (Variant::needs_deinit[local_60[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  if (*(undefined8 **)(this + 0x20) == (undefined8 *)0x0) {
    *(undefined8 **)(this + 0x18) = puVar41;
  }
  else {
    **(undefined8 **)(this + 0x20) = puVar41;
    puVar41[1] = *(undefined8 *)(this + 0x20);
  }
  *(undefined8 **)(this + 0x20) = puVar41;
  if (*(long *)param_1 == 0) {
    uVar37 = StringName::get_empty_hash();
  }
  else {
    uVar37 = *(uint *)(*(long *)param_1 + 0x20);
  }
  if (uVar37 == 0) {
    uVar37 = 1;
  }
  uVar39 = (ulong)uVar37;
  uVar51 = 0;
  lVar53 = *(long *)(this + 0x10);
  uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar43 = CONCAT44(0,uVar38);
  lVar46 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  auVar16._8_8_ = 0;
  auVar16._0_8_ = uVar39 * lVar46;
  auVar32._8_8_ = 0;
  auVar32._0_8_ = uVar43;
  lVar47 = SUB168(auVar16 * auVar32,8);
  lVar45 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar53 + lVar47 * 4);
  iVar44 = SUB164(auVar16 * auVar32,8);
  uVar50 = *puVar1;
  while (uVar50 != 0) {
    auVar17._8_8_ = 0;
    auVar17._0_8_ = (ulong)uVar50 * lVar46;
    auVar33._8_8_ = 0;
    auVar33._0_8_ = uVar43;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = (ulong)((uVar38 + iVar44) - SUB164(auVar17 * auVar33,8)) * lVar46;
    auVar34._8_8_ = 0;
    auVar34._0_8_ = uVar43;
    uVar37 = SUB164(auVar18 * auVar34,8);
    puVar54 = puVar41;
    if (uVar37 < uVar51) {
      puVar2 = (undefined8 *)(lVar45 + lVar47 * 8);
      *puVar1 = (uint)uVar39;
      uVar39 = (ulong)uVar50;
      puVar54 = (undefined8 *)*puVar2;
      *puVar2 = puVar41;
      uVar51 = uVar37;
    }
    uVar37 = (uint)uVar39;
    uVar51 = uVar51 + 1;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = (ulong)(iVar44 + 1) * lVar46;
    auVar35._8_8_ = 0;
    auVar35._0_8_ = uVar43;
    lVar47 = SUB168(auVar19 * auVar35,8);
    puVar1 = (uint *)(lVar53 + lVar47 * 4);
    iVar44 = SUB164(auVar19 * auVar35,8);
    puVar41 = puVar54;
    uVar50 = *puVar1;
  }
  *(undefined8 **)(lVar45 + lVar47 * 8) = puVar41;
  *puVar1 = uVar37;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_0010a53b:
  if (Variant::needs_deinit[local_98[0]] != '\0') {
    Variant::_clear_internal();
  }
LAB_00109fb4:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_c8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x0010a7c7) */
/* Variant Object::call<double>(StringName const&, double) */

StringName * Object::call<double>(StringName *param_1,double param_2)

{
  char cVar1;
  long *in_RSI;
  long in_FS_OFFSET;
  int local_88 [8];
  int local_68 [6];
  undefined8 local_50;
  undefined1 local_48 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_68,param_2);
  local_50 = 0;
  local_48 = (undefined1  [16])0x0;
  (**(code **)(*in_RSI + 0x68))((Variant *)local_88);
  Variant::Variant((Variant *)param_1,(Variant *)local_88);
  if (Variant::needs_deinit[local_88[0]] == '\0') {
    cVar1 = Variant::needs_deinit[(int)local_50];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[(int)local_50];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_68[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* WARNING: Removing unreachable block (ram,0x0010a8f9) */
/* Variant Object::call<int>(StringName const&, int) */

StringName * Object::call<int>(StringName *param_1,int param_2)

{
  char cVar1;
  int in_ECX;
  undefined4 in_register_00000034;
  long in_FS_OFFSET;
  int local_88 [8];
  int local_68 [6];
  undefined8 local_50;
  undefined1 local_48 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_68,in_ECX);
  local_50 = 0;
  local_48 = (undefined1  [16])0x0;
  (**(code **)(*(long *)CONCAT44(in_register_00000034,param_2) + 0x68))
            ((Variant *)local_88,(long *)CONCAT44(in_register_00000034,param_2));
  Variant::Variant((Variant *)param_1,(Variant *)local_88);
  if (Variant::needs_deinit[local_88[0]] == '\0') {
    cVar1 = Variant::needs_deinit[(int)local_50];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[(int)local_50];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_68[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
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



/* AudioStreamImportSettingsDialog::_initialize_classv() */

void AudioStreamImportSettingsDialog::_initialize_classv(void)

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
    if (ConfirmationDialog::initialize_class()::initialized == '\0') {
      if (AcceptDialog::initialize_class()::initialized == '\0') {
        if (Window::initialize_class()::initialized == '\0') {
          if (Viewport::initialize_class()::initialized == '\0') {
            if (Node::initialize_class()::initialized == '\0') {
              Object::initialize_class();
              local_60 = 0;
              String::parse_latin1((String *)&local_60,"Object");
              StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
              local_70 = 0;
              String::parse_latin1((String *)&local_70,"Node");
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
              if ((code *)PTR__bind_methods_00119010 != Node::_bind_methods) {
                Node::_bind_methods();
              }
              Node::initialize_class()::initialized = '\x01';
            }
            local_60 = 0;
            String::parse_latin1((String *)&local_60,"Node");
            StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
            local_70 = 0;
            String::parse_latin1((String *)&local_70,"Viewport");
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
            Viewport::_bind_methods();
            Viewport::initialize_class()::initialized = '\x01';
          }
          local_60 = 0;
          String::parse_latin1((String *)&local_60,"Viewport");
          StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
          local_70 = 0;
          String::parse_latin1((String *)&local_70,"Window");
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
          Window::_bind_methods();
          Window::initialize_class()::initialized = '\x01';
        }
        local_68 = 0;
        local_58 = "Window";
        local_50 = 6;
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
        local_58 = "AcceptDialog";
        local_70 = 0;
        local_50 = 0xc;
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
        AcceptDialog::_bind_methods();
        if ((code *)PTR__bind_compatibility_methods_00119080 != Object::_bind_compatibility_methods)
        {
          AcceptDialog::_bind_compatibility_methods();
        }
        AcceptDialog::initialize_class()::initialized = '\x01';
      }
      local_58 = "AcceptDialog";
      local_68 = 0;
      local_50 = 0xc;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "ConfirmationDialog";
      local_70 = 0;
      local_50 = 0x12;
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
      if ((code *)PTR__bind_methods_00119088 != AcceptDialog::_bind_methods) {
        ConfirmationDialog::_bind_methods();
      }
      ConfirmationDialog::initialize_class()::initialized = '\x01';
    }
    local_58 = "ConfirmationDialog";
    local_68 = 0;
    local_50 = 0x12;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "AudioStreamImportSettingsDialog";
    local_70 = 0;
    local_50 = 0x1f;
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
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x0010b1e8) */
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



/* AudioStreamImportSettingsDialog::~AudioStreamImportSettingsDialog() */

void __thiscall
AudioStreamImportSettingsDialog::~AudioStreamImportSettingsDialog
          (AudioStreamImportSettingsDialog *this)

{
  uint uVar1;
  Object *pOVar2;
  char cVar3;
  long lVar4;
  void *pvVar5;
  
  *(undefined ***)this = &PTR__initialize_classv_00114320;
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xea8));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xea0));
  pvVar5 = *(void **)(this + 0xe78);
  if (pvVar5 != (void *)0x0) {
    if (*(int *)(this + 0xe9c) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xe98) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0xe9c) = 0;
        *(undefined1 (*) [16])(this + 0xe88) = (undefined1  [16])0x0;
      }
      else {
        lVar4 = 0;
        do {
          if (*(int *)(*(long *)(this + 0xe80) + lVar4) != 0) {
            pvVar5 = *(void **)((long)pvVar5 + lVar4 * 2);
            *(int *)(*(long *)(this + 0xe80) + lVar4) = 0;
            if (Variant::needs_deinit[*(int *)((long)pvVar5 + 0x18)] != '\0') {
              Variant::_clear_internal();
            }
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar5 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar5,false);
            pvVar5 = *(void **)(this + 0xe78);
            *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
          }
          lVar4 = lVar4 + 4;
        } while (lVar4 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0xe9c) = 0;
        *(undefined1 (*) [16])(this + 0xe88) = (undefined1  [16])0x0;
        if (pvVar5 == (void *)0x0) goto LAB_0010ba85;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0xe80),false);
  }
LAB_0010ba85:
  if (*(long *)(this + 0xe00) != 0) {
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      pOVar2 = *(Object **)(this + 0xe00);
      cVar3 = predelete_handler(pOVar2);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
  *(undefined ***)this = &PTR__initialize_classv_00113d38;
  AcceptDialog::~AcceptDialog((AcceptDialog *)this);
  return;
}



/* AudioStreamImportSettingsDialog::~AudioStreamImportSettingsDialog() */

void __thiscall
AudioStreamImportSettingsDialog::~AudioStreamImportSettingsDialog
          (AudioStreamImportSettingsDialog *this)

{
  ~AudioStreamImportSettingsDialog(this);
  operator_delete(this,0xeb0);
  return;
}



/* List<String, DefaultAllocator>::~List() */

void __thiscall List<String,DefaultAllocator>::~List(List<String,DefaultAllocator> *this)

{
  CowData<char32_t> *this_00;
  long lVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = *(long **)this;
  if (plVar3 == (long *)0x0) {
    return;
  }
  do {
    this_00 = (CowData<char32_t> *)*plVar3;
    if (this_00 == (CowData<char32_t> *)0x0) {
      if ((int)plVar3[2] != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if (*(long **)(this_00 + 0x18) == plVar3) {
      lVar2 = *(long *)(this_00 + 8);
      lVar1 = *(long *)(this_00 + 0x10);
      *plVar3 = lVar2;
      if (this_00 == (CowData<char32_t> *)plVar3[1]) {
        plVar3[1] = lVar1;
      }
      if (lVar1 != 0) {
        *(long *)(lVar1 + 8) = lVar2;
        lVar2 = *(long *)(this_00 + 8);
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0x10) = lVar1;
      }
      CowData<char32_t>::_unref(this_00);
      Memory::free_static(this_00,false);
      *(int *)(plVar3 + 2) = (int)plVar3[2] + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    plVar3 = *(long **)this;
  } while ((int)plVar3[2] != 0);
  Memory::free_static(plVar3,false);
  return;
}



/* CallableCustomMethodPointer<AudioStreamImportSettingsDialog, void>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<AudioStreamImportSettingsDialog,void>::call
          (CallableCustomMethodPointer<AudioStreamImportSettingsDialog,void> *this,Variant **param_1
          ,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  ulong *puVar4;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar5;
  long in_FS_OFFSET;
  bool bVar6;
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar3 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar5 = (ulong)local_48 >> 8;
      local_48 = (char *)(uVar5 << 8);
      LOCK();
      bVar6 = (char)ObjectDB::spin_lock == '\0';
      if (bVar6) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar6) break;
      local_48 = (char *)(uVar5 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar4 = (ulong *)((ulong)uVar3 * 0x10 + ObjectDB::object_slots);
    uVar5 = *(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff;
    if (uVar5 != (*puVar4 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0010bebf;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_0010bebf;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010be98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_0010bf81;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0010bebf:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC116,"./core/object/callable_method_pointer.h",0x67,
                     "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                     (String *)&local_48,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    CowData<char32_t>::_unref(local_58);
    CowData<char32_t>::_unref(local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010bf81:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<AudioStreamImportSettingsDialog, void, Ref<InputEvent>
   >::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<AudioStreamImportSettingsDialog,void,Ref<InputEvent>>::call
          (CallableCustomMethodPointer<AudioStreamImportSettingsDialog,void,Ref<InputEvent>> *this,
          Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  Object *pOVar5;
  char cVar6;
  Object *pOVar7;
  uint uVar8;
  ulong *puVar9;
  code *pcVar10;
  long in_FS_OFFSET;
  bool bVar11;
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  Object *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar8 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar8 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar3 = (ulong)local_48 >> 8;
      local_48 = (Object *)(uVar3 << 8);
      LOCK();
      bVar11 = (char)ObjectDB::spin_lock == '\0';
      if (bVar11) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar11) break;
      local_48 = (Object *)(uVar3 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar9 = (ulong *)((ulong)uVar8 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) == (*puVar9 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar9[1] != 0) {
        lVar1 = *(long *)(this + 0x28);
        pcVar10 = *(code **)(this + 0x38);
        lVar2 = *(long *)(this + 0x40);
        if (1 < (uint)param_2) {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 1;
          goto LAB_0010c05e;
        }
        if (param_2 == 0) {
          *(undefined4 *)param_4 = 4;
          *(undefined4 *)(param_4 + 8) = 1;
          goto LAB_0010c05e;
        }
        *(undefined4 *)param_4 = 0;
        if (((ulong)pcVar10 & 1) != 0) {
          pcVar10 = *(code **)(pcVar10 + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar6 = Variant::can_convert_strict(*(undefined4 *)*param_1);
        uVar4 = _LC117;
        if (cVar6 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        local_48 = (Object *)0x0;
        pOVar7 = (Object *)Variant::get_validated_object();
        pOVar5 = local_48;
        if (pOVar7 != local_48) {
          if (pOVar7 == (Object *)0x0) {
            if (local_48 != (Object *)0x0) {
              local_48 = (Object *)0x0;
LAB_0010c12d:
              cVar6 = RefCounted::unreference();
              if ((cVar6 != '\0') && (cVar6 = predelete_handler(pOVar5), cVar6 != '\0')) {
                (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
                Memory::free_static(pOVar5,false);
              }
            }
          }
          else {
            pOVar7 = (Object *)__dynamic_cast(pOVar7,&Object::typeinfo,&InputEvent::typeinfo,0);
            if (pOVar5 != pOVar7) {
              local_48 = pOVar7;
              if ((pOVar7 != (Object *)0x0) && (cVar6 = RefCounted::reference(), cVar6 == '\0')) {
                local_48 = (Object *)0x0;
              }
              if (pOVar5 != (Object *)0x0) goto LAB_0010c12d;
            }
          }
        }
        (*pcVar10)((long *)(lVar1 + lVar2));
        if (((local_48 != (Object *)0x0) &&
            (cVar6 = RefCounted::unreference(), pOVar5 = local_48, cVar6 != '\0')) &&
           (cVar6 = predelete_handler(local_48), cVar6 != '\0')) {
          (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
          Memory::free_static(pOVar5,false);
        }
        goto LAB_0010c05e;
      }
    }
    else {
      ObjectDB::spin_lock._0_1_ = '\0';
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  local_50 = 0;
  local_48 = (Object *)0x10bccf;
  local_40 = 0x15;
  String::parse_latin1((StrRange *)&local_50);
  uitos((ulong)local_60);
  operator+((char *)local_58,(String *)"Invalid Object id \'");
  String::operator+((String *)&local_48,(String *)local_58);
  _err_print_error(&_LC116,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (String *)&local_48,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref(local_58);
  CowData<char32_t>::_unref(local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
LAB_0010c05e:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<AudioStreamImportSettingsDialog, void, double>::call(Variant const**,
   int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<AudioStreamImportSettingsDialog,void,double>::call
          (CallableCustomMethodPointer<AudioStreamImportSettingsDialog,void,double> *this,
          Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  char cVar4;
  uint uVar5;
  ulong *puVar6;
  code *UNRECOVERED_JUMPTABLE;
  long in_FS_OFFSET;
  bool bVar7;
  CowData<char32_t> local_50 [8];
  CowData<char32_t> local_48 [8];
  undefined8 local_40;
  String local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar5 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar5 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_38[0] = (String)0x0;
      LOCK();
      bVar7 = (char)ObjectDB::spin_lock == '\0';
      if (bVar7) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar7) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar6 = (ulong *)((ulong)uVar5 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar6 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0010c4c6;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar6[1] == 0) goto LAB_0010c4c6;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if ((uint)param_2 < 2) {
      if (param_2 != 0) {
        *(undefined4 *)param_4 = 0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,3);
        uVar3 = _LC118;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        Variant::operator_cast_to_double(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010c475. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2));
          return;
        }
        goto LAB_0010c577;
      }
      *(undefined4 *)param_4 = 4;
      *(undefined4 *)(param_4 + 8) = 1;
    }
    else {
      *(undefined4 *)param_4 = 3;
      *(undefined4 *)(param_4 + 8) = 1;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0010c4c6:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC116,"./core/object/callable_method_pointer.h",0x67,
                     "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                     local_38,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_38);
    CowData<char32_t>::_unref(local_48);
    CowData<char32_t>::_unref(local_50);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010c577:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<AudioStreamImportSettingsDialog, void, ObjectID>::call(Variant
   const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<AudioStreamImportSettingsDialog,void,ObjectID>::call
          (CallableCustomMethodPointer<AudioStreamImportSettingsDialog,void,ObjectID> *this,
          Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  char cVar3;
  undefined8 uVar4;
  uint uVar5;
  ulong *puVar6;
  code *UNRECOVERED_JUMPTABLE;
  long in_FS_OFFSET;
  bool bVar7;
  CowData<char32_t> local_50 [8];
  CowData<char32_t> local_48 [8];
  undefined8 local_40;
  String local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar5 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar5 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_38[0] = (String)0x0;
      LOCK();
      bVar7 = (char)ObjectDB::spin_lock == '\0';
      if (bVar7) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar7) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar6 = (ulong *)((ulong)uVar5 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar6 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0010c739;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar6[1] == 0) goto LAB_0010c739;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if ((uint)param_2 < 2) {
      if (param_2 != 0) {
        *(undefined4 *)param_4 = 0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar3 = Variant::can_convert_strict(*(undefined4 *)*param_1,2);
        uVar4 = _LC119;
        if (cVar3 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        uVar4 = Variant::operator_cast_to_ObjectID(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010c6e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar4);
          return;
        }
        goto LAB_0010c7ea;
      }
      *(undefined4 *)param_4 = 4;
      *(undefined4 *)(param_4 + 8) = 1;
    }
    else {
      *(undefined4 *)param_4 = 3;
      *(undefined4 *)(param_4 + 8) = 1;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0010c739:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC116,"./core/object/callable_method_pointer.h",0x67,
                     "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                     local_38,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_38);
    CowData<char32_t>::_unref(local_48);
    CowData<char32_t>::_unref(local_50);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010c7ea:
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
    if ((code *)PTR__bind_methods_00119090 != Object::_bind_methods) {
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



/* ConfigFile::_initialize_classv() */

void ConfigFile::_initialize_classv(void)

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
    local_58 = "RefCounted";
    local_68 = 0;
    local_50 = 10;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "ConfigFile";
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
    if ((code *)PTR__bind_methods_00119098 != RefCounted::_bind_methods) {
      ConfigFile::_bind_methods();
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ColorRect::_initialize_classv() */

void ColorRect::_initialize_classv(void)

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
    if (Control::initialize_class()::initialized == '\0') {
      Control::initialize_class();
    }
    local_58 = 0;
    local_40 = 7;
    local_48 = "Control";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "ColorRect";
    local_60 = 0;
    local_40 = 9;
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
    if ((code *)PTR__bind_methods_001190a0 != Control::_bind_methods) {
      ColorRect::_bind_methods();
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HScrollBar::_initialize_classv() */

void HScrollBar::_initialize_classv(void)

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
    if (ScrollBar::initialize_class()::initialized == '\0') {
      if (Range::initialize_class()::initialized == '\0') {
        if (Control::initialize_class()::initialized == '\0') {
          Control::initialize_class();
        }
        local_68 = 0;
        local_50 = 7;
        local_58 = "Control";
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
        local_58 = "Range";
        local_70 = 0;
        local_50 = 5;
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
        if ((code *)PTR__bind_methods_00119008 != Range::_bind_methods) {
          Range::_bind_methods();
        }
        Range::initialize_class()::initialized = '\x01';
      }
      local_58 = "Range";
      local_68 = 0;
      local_50 = 5;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "ScrollBar";
      local_70 = 0;
      local_50 = 9;
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
      if ((code *)PTR__bind_methods_001190a8 != Range::_bind_methods) {
        ScrollBar::_bind_methods();
      }
      ScrollBar::initialize_class()::initialized = '\x01';
    }
    local_58 = "ScrollBar";
    local_68 = 0;
    local_50 = 9;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "HScrollBar";
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
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* VBoxContainer::_initialize_classv() */

void VBoxContainer::_initialize_classv(void)

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
    if (BoxContainer::initialize_class()::initialized == '\0') {
      if (Container::initialize_class()::initialized == '\0') {
        if (Control::initialize_class()::initialized == '\0') {
          Control::initialize_class();
        }
        local_68 = 0;
        local_50 = 7;
        local_58 = "Control";
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
        local_58 = "Container";
        local_70 = 0;
        local_50 = 9;
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
        if ((code *)PTR__bind_methods_00119008 != Container::_bind_methods) {
          Container::_bind_methods();
        }
        Container::initialize_class()::initialized = '\x01';
      }
      local_58 = "Container";
      local_68 = 0;
      local_50 = 9;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "BoxContainer";
      local_70 = 0;
      local_50 = 0xc;
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
      if ((code *)PTR__bind_methods_001190b0 != Container::_bind_methods) {
        BoxContainer::_bind_methods();
      }
      BoxContainer::initialize_class()::initialized = '\x01';
    }
    local_58 = "BoxContainer";
    local_68 = 0;
    local_50 = 0xc;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "VBoxContainer";
    local_70 = 0;
    local_50 = 0xd;
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
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* HBoxContainer::_initialize_classv() */

void HBoxContainer::_initialize_classv(void)

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
    if (BoxContainer::initialize_class()::initialized == '\0') {
      if (Container::initialize_class()::initialized == '\0') {
        if (Control::initialize_class()::initialized == '\0') {
          Control::initialize_class();
        }
        local_68 = 0;
        local_50 = 7;
        local_58 = "Control";
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
        local_58 = "Container";
        local_70 = 0;
        local_50 = 9;
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
        if ((code *)PTR__bind_methods_00119008 != Container::_bind_methods) {
          Container::_bind_methods();
        }
        Container::initialize_class()::initialized = '\x01';
      }
      local_58 = "Container";
      local_68 = 0;
      local_50 = 9;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "BoxContainer";
      local_70 = 0;
      local_50 = 0xc;
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
      if ((code *)PTR__bind_methods_001190b0 != Container::_bind_methods) {
        BoxContainer::_bind_methods();
      }
      BoxContainer::initialize_class()::initialized = '\x01';
    }
    local_58 = "BoxContainer";
    local_68 = 0;
    local_50 = 0xc;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "HBoxContainer";
    local_70 = 0;
    local_50 = 0xd;
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
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ConfirmationDialog::_initialize_classv() */

void ConfirmationDialog::_initialize_classv(void)

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
    if (AcceptDialog::initialize_class()::initialized == '\0') {
      if (Window::initialize_class()::initialized == '\0') {
        if (Viewport::initialize_class()::initialized == '\0') {
          if (Node::initialize_class()::initialized == '\0') {
            Object::initialize_class();
            local_60 = 0;
            String::parse_latin1((String *)&local_60,"Object");
            StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
            local_70 = 0;
            String::parse_latin1((String *)&local_70,"Node");
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
            if ((code *)PTR__bind_methods_00119010 != Node::_bind_methods) {
              Node::_bind_methods();
            }
            Node::initialize_class()::initialized = '\x01';
          }
          local_60 = 0;
          String::parse_latin1((String *)&local_60,"Node");
          StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
          local_70 = 0;
          String::parse_latin1((String *)&local_70,"Viewport");
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
          Viewport::_bind_methods();
          Viewport::initialize_class()::initialized = '\x01';
        }
        local_58 = "Viewport";
        local_68 = 0;
        local_50 = 8;
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
        local_58 = "Window";
        local_70 = 0;
        local_50 = 6;
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
        Window::_bind_methods();
        Window::initialize_class()::initialized = '\x01';
      }
      local_68 = 0;
      local_58 = "Window";
      local_50 = 6;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "AcceptDialog";
      local_70 = 0;
      local_50 = 0xc;
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
      AcceptDialog::_bind_methods();
      if ((code *)PTR__bind_compatibility_methods_00119080 != Object::_bind_compatibility_methods) {
        AcceptDialog::_bind_compatibility_methods();
      }
      AcceptDialog::initialize_class()::initialized = '\x01';
    }
    local_58 = "AcceptDialog";
    local_68 = 0;
    local_50 = 0xc;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "ConfirmationDialog";
    local_70 = 0;
    local_50 = 0x12;
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
    if ((code *)PTR__bind_methods_00119088 != AcceptDialog::_bind_methods) {
      ConfirmationDialog::_bind_methods();
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
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
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar5 + 0x20));
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
        if (pvVar5 == (void *)0x0) goto LAB_0010dd35;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_0010dd35:
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  return;
}



/* Node::is_class(String const&) const */

undefined8 __thiscall Node::is_class(Node *this,String *param_1)

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
            if (lVar3 == 0) goto LAB_0010ddff;
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
LAB_0010ddff:
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
    if (cVar6 != '\0') goto LAB_0010deb3;
  }
  cVar6 = String::operator==(param_1,"Node");
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
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar5 + 0x10));
        }
        else {
          local_50 = strlen(pcVar4);
          local_58 = pcVar4;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar6 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar6 != '\0') goto LAB_0010deb3;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar8 = String::operator==(param_1,"Object");
      return uVar8;
    }
  }
  else {
LAB_0010deb3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Control::is_class(String const&) const */

undefined8 __thiscall Control::is_class(Control *this,String *param_1)

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
            if (lVar3 == 0) goto LAB_0010e02f;
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
LAB_0010e02f:
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
    if (cVar6 != '\0') goto LAB_0010e0e3;
  }
  cVar6 = String::operator==(param_1,"Control");
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
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar5 + 0x10));
        }
        else {
          local_50 = strlen(pcVar4);
          local_58 = pcVar4;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar6 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar6 != '\0') goto LAB_0010e0e3;
    }
    cVar6 = String::operator==(param_1,"CanvasItem");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar8 = Node::is_class((Node *)this,param_1);
        return uVar8;
      }
      goto LAB_0010e1ee;
    }
  }
LAB_0010e0e3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010e1ee:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ColorRect::is_class(String const&) const */

undefined8 __thiscall ColorRect::is_class(ColorRect *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_0010e26f;
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
LAB_0010e26f:
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
    if (cVar5 != '\0') goto LAB_0010e323;
  }
  cVar5 = String::operator==(param_1,"ColorRect");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = Control::is_class((Control *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_0010e323:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ScrollBar::is_class(String const&) const */

undefined8 __thiscall ScrollBar::is_class(ScrollBar *this,String *param_1)

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
            if (lVar3 == 0) goto LAB_0010e3ef;
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
LAB_0010e3ef:
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
    if (cVar6 != '\0') goto LAB_0010e4a3;
  }
  cVar6 = String::operator==(param_1,"ScrollBar");
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
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar5 + 0x10));
        }
        else {
          local_50 = strlen(pcVar4);
          local_58 = pcVar4;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar6 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar6 != '\0') goto LAB_0010e4a3;
    }
    cVar6 = String::operator==(param_1,"Range");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar8 = Control::is_class((Control *)this,param_1);
        return uVar8;
      }
      goto LAB_0010e5ae;
    }
  }
LAB_0010e4a3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010e5ae:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HScrollBar::is_class(String const&) const */

undefined8 __thiscall HScrollBar::is_class(HScrollBar *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_0010e62f;
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
LAB_0010e62f:
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
    if (cVar5 != '\0') goto LAB_0010e6e3;
  }
  cVar5 = String::operator==(param_1,"HScrollBar");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = ScrollBar::is_class((ScrollBar *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_0010e6e3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* BoxContainer::is_class(String const&) const */

undefined8 __thiscall BoxContainer::is_class(BoxContainer *this,String *param_1)

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
            if (lVar3 == 0) goto LAB_0010e7af;
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
LAB_0010e7af:
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
    if (cVar6 != '\0') goto LAB_0010e863;
  }
  cVar6 = String::operator==(param_1,"BoxContainer");
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
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar5 + 0x10));
        }
        else {
          local_50 = strlen(pcVar4);
          local_58 = pcVar4;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar6 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar6 != '\0') goto LAB_0010e863;
    }
    cVar6 = String::operator==(param_1,"Container");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar8 = Control::is_class((Control *)this,param_1);
        return uVar8;
      }
      goto LAB_0010e96e;
    }
  }
LAB_0010e863:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010e96e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VBoxContainer::is_class(String const&) const */

undefined8 __thiscall VBoxContainer::is_class(VBoxContainer *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_0010e9ef;
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
LAB_0010e9ef:
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
    if (cVar5 != '\0') goto LAB_0010eaa3;
  }
  cVar5 = String::operator==(param_1,"VBoxContainer");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = BoxContainer::is_class((BoxContainer *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_0010eaa3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HBoxContainer::is_class(String const&) const */

undefined8 __thiscall HBoxContainer::is_class(HBoxContainer *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_0010eb6f;
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
LAB_0010eb6f:
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
    if (cVar5 != '\0') goto LAB_0010ec23;
  }
  cVar5 = String::operator==(param_1,"HBoxContainer");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = BoxContainer::is_class((BoxContainer *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_0010ec23:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AcceptDialog::is_class(String const&) const */

undefined8 __thiscall AcceptDialog::is_class(AcceptDialog *this,String *param_1)

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
            if (lVar3 == 0) goto LAB_0010ecef;
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
LAB_0010ecef:
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
    if (cVar6 != '\0') goto LAB_0010eda3;
  }
  cVar6 = String::operator==(param_1,"AcceptDialog");
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
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar5 + 0x10));
        }
        else {
          local_50 = strlen(pcVar4);
          local_58 = pcVar4;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar6 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar6 != '\0') goto LAB_0010eda3;
    }
    cVar6 = String::operator==(param_1,"Window");
    if (cVar6 == '\0') {
      for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
        lVar5 = *(long *)(lVar2 + 0x20);
        if (lVar5 == 0) {
          local_58 = (char *)0x0;
        }
        else {
          local_58 = (char *)0x0;
          if (*(char **)(lVar5 + 8) == (char *)0x0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)(lVar5 + 0x10));
          }
          else {
            String::parse_latin1((String *)&local_58,*(char **)(lVar5 + 8));
          }
        }
        cVar6 = String::operator==(param_1,(String *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
        if (cVar6 != '\0') goto LAB_0010eda3;
      }
      cVar6 = String::operator==(param_1,"Viewport");
      if (cVar6 == '\0') {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar8 = Node::is_class((Node *)this,param_1);
          return uVar8;
        }
        goto LAB_0010ef3e;
      }
    }
  }
LAB_0010eda3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010ef3e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ConfirmationDialog::is_class(String const&) const */

undefined8 __thiscall ConfirmationDialog::is_class(ConfirmationDialog *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_0010efbf;
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
LAB_0010efbf:
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
    if (cVar5 != '\0') goto LAB_0010f073;
  }
  cVar5 = String::operator==(param_1,"ConfirmationDialog");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = AcceptDialog::is_class((AcceptDialog *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_0010f073:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
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
            if (lVar3 == 0) goto LAB_0010f13f;
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
LAB_0010f13f:
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
    if (cVar6 != '\0') goto LAB_0010f1f3;
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
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar5 + 0x10));
        }
        else {
          local_50 = strlen(pcVar4);
          local_58 = pcVar4;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar6 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar6 != '\0') goto LAB_0010f1f3;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar8 = String::operator==(param_1,"Object");
      return uVar8;
    }
  }
  else {
LAB_0010f1f3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ConfigFile::is_class(String const&) const */

undefined8 __thiscall ConfigFile::is_class(ConfigFile *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_0010f36f;
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
LAB_0010f36f:
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
    if (cVar5 != '\0') goto LAB_0010f423;
  }
  cVar5 = String::operator==(param_1,"ConfigFile");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_0010f423:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AudioStreamImportSettingsDialog::is_class(String const&) const */

undefined8 __thiscall
AudioStreamImportSettingsDialog::is_class(AudioStreamImportSettingsDialog *this,String *param_1)

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
            if (lVar3 == 0) goto LAB_0010f4ef;
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
LAB_0010f4ef:
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
    if (cVar6 != '\0') goto LAB_0010f5a3;
  }
  cVar6 = String::operator==(param_1,"AudioStreamImportSettingsDialog");
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
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar5 + 0x10));
        }
        else {
          local_50 = strlen(pcVar4);
          local_58 = pcVar4;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar6 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar6 != '\0') goto LAB_0010f5a3;
    }
    cVar6 = String::operator==(param_1,"ConfirmationDialog");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar8 = AcceptDialog::is_class((AcceptDialog *)this,param_1);
        return uVar8;
      }
      goto LAB_0010f6ae;
    }
  }
LAB_0010f5a3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010f6ae:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Node::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void Node::_get_property_listv(List *param_1,bool param_2)

{
  undefined7 in_register_00000031;
  long in_FS_OFFSET;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  undefined *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = &_LC42;
  local_88 = 0;
  local_90 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = &_LC42;
  local_98 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (undefined *)((ulong)local_78 & 0xffffffff00000000);
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
      goto LAB_0010f81c;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010f81c:
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
  StringName::StringName((StringName *)&local_78,"Node",false);
  ClassDB::get_property_list
            ((StringName *)&local_78,(List *)CONCAT71(in_register_00000031,param_2),true,
             (Object *)param_1);
  if ((StringName::configured != '\0') && (local_78 != (undefined *)0x0)) {
    StringName::unref();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
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
      goto LAB_0010fa6c;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010fa6c:
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



/* ConfigFile::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall ConfigFile::_get_property_listv(ConfigFile *this,List *param_1,bool param_2)

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
  local_78 = "ConfigFile";
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "ConfigFile";
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
      goto LAB_0010fcd1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010fcd1:
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
  StringName::StringName((StringName *)&local_78,"ConfigFile",false);
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



/* Viewport::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Viewport::_get_property_listv(Viewport *this,List *param_1,bool param_2)

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
    Node::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "Viewport";
  local_70 = 8;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Viewport";
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
      goto LAB_0010ff81;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010ff81:
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
  StringName::StringName((StringName *)&local_78,"Viewport",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Node::_get_property_listv((List *)this,SUB81(param_1,0));
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Window::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Window::_get_property_listv(Window *this,List *param_1,bool param_2)

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
    Viewport::_get_property_listv((Viewport *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "Window";
  local_70 = 6;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Window";
  local_98 = 0;
  local_70 = 6;
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
      goto LAB_00110231;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00110231:
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
  StringName::StringName((StringName *)&local_78,"Window",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if ((code *)PTR__get_property_list_001190b8 != Object::_get_property_list) {
    Window::_get_property_list((List *)this);
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Viewport::_get_property_listv((Viewport *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AcceptDialog::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall AcceptDialog::_get_property_listv(AcceptDialog *this,List *param_1,bool param_2)

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
    Window::_get_property_listv((Window *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "AcceptDialog";
  local_70 = 0xc;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "AcceptDialog";
  local_98 = 0;
  local_70 = 0xc;
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
      goto LAB_00110501;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00110501:
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
  StringName::StringName((StringName *)&local_78,"AcceptDialog",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Window::_get_property_listv((Window *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ConfirmationDialog::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
ConfirmationDialog::_get_property_listv(ConfirmationDialog *this,List *param_1,bool param_2)

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
    AcceptDialog::_get_property_listv((AcceptDialog *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "ConfirmationDialog";
  local_70 = 0x12;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "ConfirmationDialog";
  local_98 = 0;
  local_70 = 0x12;
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
      goto LAB_001107b1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001107b1:
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
  StringName::StringName((StringName *)&local_78,"ConfirmationDialog",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      AcceptDialog::_get_property_listv((AcceptDialog *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AudioStreamImportSettingsDialog::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */

void __thiscall
AudioStreamImportSettingsDialog::_get_property_listv
          (AudioStreamImportSettingsDialog *this,List *param_1,bool param_2)

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
    ConfirmationDialog::_get_property_listv((ConfirmationDialog *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "AudioStreamImportSettingsDialog";
  local_70 = 0x1f;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "AudioStreamImportSettingsDialog";
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
      goto LAB_00110a61;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00110a61:
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
  StringName::StringName((StringName *)&local_78,"AudioStreamImportSettingsDialog",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      ConfirmationDialog::_get_property_listv((ConfirmationDialog *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CanvasItem::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall CanvasItem::_get_property_listv(CanvasItem *this,List *param_1,bool param_2)

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
    Node::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "CanvasItem";
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "CanvasItem";
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
      goto LAB_00110d11;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00110d11:
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
  StringName::StringName((StringName *)&local_78,"CanvasItem",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if ((code *)PTR__get_property_list_001190c0 != Object::_get_property_list) {
    CanvasItem::_get_property_list((List *)this);
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Node::_get_property_listv((List *)this,SUB81(param_1,0));
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Control::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Control::_get_property_listv(Control *this,List *param_1,bool param_2)

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
    CanvasItem::_get_property_listv((CanvasItem *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "Control";
  local_70 = 7;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Control";
  local_98 = 0;
  local_70 = 7;
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
      goto LAB_00110fe1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00110fe1:
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
  StringName::StringName((StringName *)&local_78,"Control",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if ((code *)PTR__get_property_list_001190c8 != CanvasItem::_get_property_list) {
    Control::_get_property_list((List *)this);
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      CanvasItem::_get_property_listv((CanvasItem *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Container::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Container::_get_property_listv(Container *this,List *param_1,bool param_2)

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
    Control::_get_property_listv((Control *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "Container";
  local_70 = 9;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Container";
  local_98 = 0;
  local_70 = 9;
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
      goto LAB_001112b1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001112b1:
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
  StringName::StringName((StringName *)&local_78,"Container",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Control::_get_property_listv((Control *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* BoxContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall BoxContainer::_get_property_listv(BoxContainer *this,List *param_1,bool param_2)

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
    Container::_get_property_listv((Container *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "BoxContainer";
  local_70 = 0xc;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "BoxContainer";
  local_98 = 0;
  local_70 = 0xc;
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
      goto LAB_00111561;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00111561:
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
  StringName::StringName((StringName *)&local_78,"BoxContainer",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Container::_get_property_listv((Container *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VBoxContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall VBoxContainer::_get_property_listv(VBoxContainer *this,List *param_1,bool param_2)

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
    BoxContainer::_get_property_listv((BoxContainer *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "VBoxContainer";
  local_70 = 0xd;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "VBoxContainer";
  local_98 = 0;
  local_70 = 0xd;
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
      goto LAB_00111811;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00111811:
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
  StringName::StringName((StringName *)&local_78,"VBoxContainer",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      BoxContainer::_get_property_listv((BoxContainer *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HBoxContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall HBoxContainer::_get_property_listv(HBoxContainer *this,List *param_1,bool param_2)

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
    BoxContainer::_get_property_listv((BoxContainer *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "HBoxContainer";
  local_70 = 0xd;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "HBoxContainer";
  local_98 = 0;
  local_70 = 0xd;
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
      goto LAB_00111ac1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00111ac1:
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
  StringName::StringName((StringName *)&local_78,"HBoxContainer",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      BoxContainer::_get_property_listv((BoxContainer *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ColorRect::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall ColorRect::_get_property_listv(ColorRect *this,List *param_1,bool param_2)

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
    Control::_get_property_listv((Control *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "ColorRect";
  local_70 = 9;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "ColorRect";
  local_98 = 0;
  local_70 = 9;
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
      goto LAB_00111d71;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00111d71:
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
  StringName::StringName((StringName *)&local_78,"ColorRect",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Control::_get_property_listv((Control *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Range::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Range::_get_property_listv(Range *this,List *param_1,bool param_2)

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
    Control::_get_property_listv((Control *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "Range";
  local_70 = 5;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Range";
  local_98 = 0;
  local_70 = 5;
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
      goto LAB_00112021;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00112021:
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
  StringName::StringName((StringName *)&local_78,"Range",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Control::_get_property_listv((Control *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ScrollBar::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall ScrollBar::_get_property_listv(ScrollBar *this,List *param_1,bool param_2)

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
    Range::_get_property_listv((Range *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "ScrollBar";
  local_70 = 9;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "ScrollBar";
  local_98 = 0;
  local_70 = 9;
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
      goto LAB_001122d1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001122d1:
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
  StringName::StringName((StringName *)&local_78,"ScrollBar",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Range::_get_property_listv((Range *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HScrollBar::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall HScrollBar::_get_property_listv(HScrollBar *this,List *param_1,bool param_2)

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
    ScrollBar::_get_property_listv((ScrollBar *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "HScrollBar";
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "HScrollBar";
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
      goto LAB_00112581;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00112581:
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
  StringName::StringName((StringName *)&local_78,"HScrollBar",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      ScrollBar::_get_property_listv((ScrollBar *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Ref<Font>::unref() */

void __thiscall Ref<Font>::unref(Ref<Font> *this)

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



/* Ref<Texture2D>::unref() */

void __thiscall Ref<Texture2D>::unref(Ref<Texture2D> *this)

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



/* AudioStreamImportSettingsDialog::_notificationv(int, bool) */

void __thiscall
AudioStreamImportSettingsDialog::_notificationv
          (AudioStreamImportSettingsDialog *this,int param_1,bool param_2)

{
  if (param_2) {
    _notification((int)this);
    ConfirmationDialog::_notificationv((ConfirmationDialog *)this,param_1,true);
    return;
  }
  ConfirmationDialog::_notificationv((ConfirmationDialog *)this,param_1,false);
  _notification((int)this);
  return;
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



/* CowData<Color>::_realloc(long) */

undefined8 __thiscall CowData<Color>::_realloc(CowData<Color> *this,long param_1)

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



/* void memdelete<HashMapElement<String, HashMap<String, Variant, HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String, Variant> > > >
   >(HashMapElement<String, HashMap<String, Variant, HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String, Variant> > > >*)
    */

void memdelete<HashMapElement<String,HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>>>
               (HashMapElement *param_1)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  
  pvVar5 = *(void **)(param_1 + 0x20);
  if (pvVar5 != (void *)0x0) {
    if (*(int *)(param_1 + 0x44) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_1 + 0x40) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(param_1 + 0x44) = 0;
        *(undefined1 (*) [16])(param_1 + 0x30) = (undefined1  [16])0x0;
      }
      else {
        lVar4 = 0;
        do {
          if (*(int *)(*(long *)(param_1 + 0x28) + lVar4) != 0) {
            pvVar5 = *(void **)((long)pvVar5 + lVar4 * 2);
            *(int *)(*(long *)(param_1 + 0x28) + lVar4) = 0;
            if (Variant::needs_deinit[*(int *)((long)pvVar5 + 0x18)] != '\0') {
              Variant::_clear_internal();
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
            pvVar5 = *(void **)(param_1 + 0x20);
            *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
          }
          lVar4 = lVar4 + 4;
        } while (lVar4 != (ulong)uVar2 << 2);
        *(undefined4 *)(param_1 + 0x44) = 0;
        *(undefined1 (*) [16])(param_1 + 0x30) = (undefined1  [16])0x0;
        if (pvVar5 == (void *)0x0) goto LAB_001129b1;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(param_1 + 0x28),false);
  }
LAB_001129b1:
  CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0x10));
  Memory::free_static(param_1,false);
  return;
}



/* ConfigFile::~ConfigFile() */

void __thiscall ConfigFile::~ConfigFile(ConfigFile *this)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  
  *(undefined ***)this = &PTR__initialize_classv_00113180;
  pvVar3 = *(void **)(this + 0x188);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(this + 0x1ac) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1a8) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x1ac) = 0;
        *(undefined1 (*) [16])(this + 0x198) = (undefined1  [16])0x0;
      }
      else {
        lVar2 = 0;
        do {
          if (*(int *)(*(long *)(this + 400) + lVar2) != 0) {
            *(int *)(*(long *)(this + 400) + lVar2) = 0;
            memdelete<HashMapElement<String,HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>>>
                      (*(HashMapElement **)((long)pvVar3 + lVar2 * 2));
            pvVar3 = *(void **)(this + 0x188);
            *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
          }
          lVar2 = lVar2 + 4;
        } while (lVar2 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0x1ac) = 0;
        *(undefined1 (*) [16])(this + 0x198) = (undefined1  [16])0x0;
        if (pvVar3 == (void *)0x0) goto LAB_00112ac1;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 400),false);
  }
LAB_00112ac1:
  *(undefined ***)this = &PTR__initialize_classv_00113020;
  Object::~Object((Object *)this);
  return;
}



/* ConfigFile::~ConfigFile() */

void __thiscall ConfigFile::~ConfigFile(ConfigFile *this)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  
  *(undefined ***)this = &PTR__initialize_classv_00113180;
  pvVar3 = *(void **)(this + 0x188);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(this + 0x1ac) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1a8) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x1ac) = 0;
        *(undefined1 (*) [16])(this + 0x198) = (undefined1  [16])0x0;
      }
      else {
        lVar2 = 0;
        do {
          if (*(int *)(*(long *)(this + 400) + lVar2) != 0) {
            *(int *)(*(long *)(this + 400) + lVar2) = 0;
            memdelete<HashMapElement<String,HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>>>
                      (*(HashMapElement **)((long)pvVar3 + lVar2 * 2));
            pvVar3 = *(void **)(this + 0x188);
            *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
          }
          lVar2 = lVar2 + 4;
        } while (lVar2 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0x1ac) = 0;
        *(undefined1 (*) [16])(this + 0x198) = (undefined1  [16])0x0;
        if (pvVar3 == (void *)0x0) goto LAB_00112bb1;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 400),false);
  }
LAB_00112bb1:
  *(undefined ***)this = &PTR__initialize_classv_00113020;
  Object::~Object((Object *)this);
  operator_delete(this,0x1b0);
  return;
}



/* AudioStreamImportSettingsDialog::singleton */

void AudioStreamImportSettingsDialog::_GLOBAL__sub_I_singleton(void)

{
  undefined8 uStack_8;
  
  if (PopupMenu::base_property_helper == '\0') {
    PopupMenu::base_property_helper = '\x01';
    PopupMenu::base_property_helper._64_8_ = 0;
    PopupMenu::base_property_helper._0_16_ = (undefined1  [16])0x0;
    PopupMenu::base_property_helper._24_16_ = (undefined1  [16])0x0;
    PopupMenu::base_property_helper._40_16_ = (undefined1  [16])0x0;
    PopupMenu::base_property_helper._56_8_ = 2;
    __cxa_atexit(PropertyListHelper::~PropertyListHelper,PopupMenu::base_property_helper,
                 &__dso_handle);
  }
  if (AudioStreamRandomizer::base_property_helper != '\0') {
    return;
  }
  AudioStreamRandomizer::base_property_helper = 1;
  AudioStreamRandomizer::base_property_helper._64_8_ = 0;
  AudioStreamRandomizer::base_property_helper._56_8_ = 2;
  AudioStreamRandomizer::base_property_helper._0_16_ = (undefined1  [16])0x0;
  AudioStreamRandomizer::base_property_helper._24_16_ = (undefined1  [16])0x0;
  AudioStreamRandomizer::base_property_helper._40_16_ = (undefined1  [16])0x0;
  __cxa_atexit(PropertyListHelper::~PropertyListHelper,AudioStreamRandomizer::base_property_helper,
               &__dso_handle,uStack_8);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* ConfigFile::~ConfigFile() */

void __thiscall ConfigFile::~ConfigFile(ConfigFile *this)

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
/* List<String, DefaultAllocator>::~List() */

void __thiscall List<String,DefaultAllocator>::~List(List<String,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* AudioStreamImportSettingsDialog::~AudioStreamImportSettingsDialog() */

void __thiscall
AudioStreamImportSettingsDialog::~AudioStreamImportSettingsDialog
          (AudioStreamImportSettingsDialog *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* VBoxContainer::~VBoxContainer() */

void __thiscall VBoxContainer::~VBoxContainer(VBoxContainer *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* HScrollBar::~HScrollBar() */

void __thiscall HScrollBar::~HScrollBar(HScrollBar *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* ColorRect::~ColorRect() */

void __thiscall ColorRect::~ColorRect(ColorRect *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* ConfirmationDialog::~ConfirmationDialog() */

void __thiscall ConfirmationDialog::~ConfirmationDialog(ConfirmationDialog *this)

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
/* CallableCustomMethodPointer<AudioStreamImportSettingsDialog, void,
   ObjectID>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AudioStreamImportSettingsDialog,void,ObjectID>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AudioStreamImportSettingsDialog,void,ObjectID> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<AudioStreamImportSettingsDialog,
   void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AudioStreamImportSettingsDialog,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AudioStreamImportSettingsDialog,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<AudioStreamImportSettingsDialog, void,
   double>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AudioStreamImportSettingsDialog,void,double>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AudioStreamImportSettingsDialog,void,double> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<AudioStreamImportSettingsDialog, void, Ref<InputEvent>
   >::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AudioStreamImportSettingsDialog,void,Ref<InputEvent>>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AudioStreamImportSettingsDialog,void,Ref<InputEvent>> *this)

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




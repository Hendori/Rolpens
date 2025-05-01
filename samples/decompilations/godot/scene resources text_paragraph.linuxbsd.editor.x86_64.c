
/* TextParagraph::get_rid() const */

undefined8 __thiscall TextParagraph::get_rid(TextParagraph *this)

{
  return *(undefined8 *)(this + 0x1c8);
}



/* TextParagraph::get_dropcap_rid() const */

undefined8 __thiscall TextParagraph::get_dropcap_rid(TextParagraph *this)

{
  return *(undefined8 *)(this + 0x1a8);
}



/* TextParagraph::get_alignment() const */

undefined4 __thiscall TextParagraph::get_alignment(TextParagraph *this)

{
  return *(undefined4 *)(this + 0x20c);
}



/* TextParagraph::get_justification_flags() const */

undefined8 __thiscall TextParagraph::get_justification_flags(TextParagraph *this)

{
  return *(undefined8 *)(this + 0x1f8);
}



/* TextParagraph::get_break_flags() const */

undefined8 __thiscall TextParagraph::get_break_flags(TextParagraph *this)

{
  return *(undefined8 *)(this + 0x1f0);
}



/* TextParagraph::get_text_overrun_behavior() const */

undefined4 __thiscall TextParagraph::get_text_overrun_behavior(TextParagraph *this)

{
  return *(undefined4 *)(this + 0x208);
}



/* TextParagraph::get_width() const */

undefined4 __thiscall TextParagraph::get_width(TextParagraph *this)

{
  return *(undefined4 *)(this + 0x1e8);
}



/* TextParagraph::get_max_lines_visible() const */

undefined4 __thiscall TextParagraph::get_max_lines_visible(TextParagraph *this)

{
  return *(undefined4 *)(this + 0x1ec);
}



/* TextParagraph::get_line_spacing() const */

undefined4 __thiscall TextParagraph::get_line_spacing(TextParagraph *this)

{
  return *(undefined4 *)(this + 0x1e4);
}



/* TextParagraph::get_dropcap_lines() const */

undefined4 __thiscall TextParagraph::get_dropcap_lines(TextParagraph *this)

{
  return *(undefined4 *)(this + 0x1b0);
}



/* TextParagraph::set_max_lines_visible(int) */

void __thiscall TextParagraph::set_max_lines_visible(TextParagraph *this,int param_1)

{
  int iVar1;
  
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x180));
  if (iVar1 == 0) {
    if (*(int *)(this + 0x1ec) != param_1) {
      *(int *)(this + 0x1ec) = param_1;
      this[0x1e0] = (TextParagraph)0x1;
    }
    pthread_mutex_unlock((pthread_mutex_t *)(this + 0x180));
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_system_error(iVar1);
}



/* TextParagraph::set_width(float) */

void __thiscall TextParagraph::set_width(TextParagraph *this,float param_1)

{
  pthread_mutex_t *__mutex;
  int iVar1;
  
  __mutex = (pthread_mutex_t *)(this + 0x180);
  iVar1 = pthread_mutex_lock(__mutex);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar1);
  }
  if (param_1 != *(float *)(this + 0x1e8)) {
    this[0x1e0] = (TextParagraph)0x1;
    *(float *)(this + 0x1e8) = param_1;
    pthread_mutex_unlock(__mutex);
    return;
  }
  pthread_mutex_unlock(__mutex);
  return;
}



/* TextParagraph::set_line_spacing(float) */

void __thiscall TextParagraph::set_line_spacing(TextParagraph *this,float param_1)

{
  pthread_mutex_t *__mutex;
  int iVar1;
  
  __mutex = (pthread_mutex_t *)(this + 0x180);
  iVar1 = pthread_mutex_lock(__mutex);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar1);
  }
  if (param_1 != *(float *)(this + 0x1e4)) {
    this[0x1e0] = (TextParagraph)0x1;
    *(float *)(this + 0x1e4) = param_1;
    pthread_mutex_unlock(__mutex);
    return;
  }
  pthread_mutex_unlock(__mutex);
  return;
}



/* TextParagraph::set_text_overrun_behavior(TextServer::OverrunBehavior) */

void __thiscall TextParagraph::set_text_overrun_behavior(TextParagraph *this,int param_2)

{
  int iVar1;
  
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x180));
  if (iVar1 == 0) {
    if (*(int *)(this + 0x208) != param_2) {
      *(int *)(this + 0x208) = param_2;
      this[0x1e0] = (TextParagraph)0x1;
    }
    pthread_mutex_unlock((pthread_mutex_t *)(this + 0x180));
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_system_error(iVar1);
}



/* TextParagraph::set_justification_flags(BitField<TextServer::JustificationFlag>) */

void __thiscall TextParagraph::set_justification_flags(TextParagraph *this,long param_2)

{
  int iVar1;
  
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x180));
  if (iVar1 == 0) {
    if (*(long *)(this + 0x1f8) != param_2) {
      *(long *)(this + 0x1f8) = param_2;
      this[0x1e0] = (TextParagraph)0x1;
    }
    pthread_mutex_unlock((pthread_mutex_t *)(this + 0x180));
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_system_error(iVar1);
}



/* TextParagraph::set_break_flags(BitField<TextServer::LineBreakFlag>) */

void __thiscall TextParagraph::set_break_flags(TextParagraph *this,long param_2)

{
  int iVar1;
  
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x180));
  if (iVar1 == 0) {
    if (*(long *)(this + 0x1f0) != param_2) {
      *(long *)(this + 0x1f0) = param_2;
      this[0x1e0] = (TextParagraph)0x1;
    }
    pthread_mutex_unlock((pthread_mutex_t *)(this + 0x180));
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_system_error(iVar1);
}



/* TextParagraph::set_alignment(HorizontalAlignment) */

void __thiscall TextParagraph::set_alignment(TextParagraph *this,int param_2)

{
  pthread_mutex_t *__mutex;
  int iVar1;
  
  __mutex = (pthread_mutex_t *)(this + 0x180);
  iVar1 = pthread_mutex_lock(__mutex);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar1);
  }
  iVar1 = *(int *)(this + 0x20c);
  if ((iVar1 != param_2) && ((*(int *)(this + 0x20c) = param_2, param_2 == 3 || (iVar1 == 3)))) {
    this[0x1e0] = (TextParagraph)0x1;
    pthread_mutex_unlock(__mutex);
    return;
  }
  pthread_mutex_unlock(__mutex);
  return;
}



/* TextParagraph::tab_align(Vector<float> const&) */

void __thiscall TextParagraph::tab_align(TextParagraph *this,Vector *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  bool bVar5;
  
  iVar2 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x180));
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar2);
  }
  lVar1 = *(long *)(this + 0x218);
  lVar3 = *(long *)(param_1 + 8);
  if (lVar1 != lVar3) {
    if (lVar1 != 0) {
      LOCK();
      plVar4 = (long *)(lVar1 + -0x10);
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (*plVar4 == 0) {
        lVar1 = *(long *)(this + 0x218);
        *(undefined8 *)(this + 0x218) = 0;
        Memory::free_static((void *)(lVar1 + -0x10),false);
        lVar3 = *(long *)(param_1 + 8);
      }
      else {
        *(undefined8 *)(this + 0x218) = 0;
        lVar3 = *(long *)(param_1 + 8);
      }
    }
    if (lVar3 != 0) {
      plVar4 = (long *)(lVar3 + -0x10);
      do {
        lVar1 = *plVar4;
        if (lVar1 == 0) goto LAB_001003ae;
        LOCK();
        lVar3 = *plVar4;
        bVar5 = lVar1 == lVar3;
        if (bVar5) {
          *plVar4 = lVar1 + 1;
          lVar3 = lVar1;
        }
        UNLOCK();
      } while (!bVar5);
      if (lVar3 != -1) {
        *(undefined8 *)(this + 0x218) = *(undefined8 *)(param_1 + 8);
      }
    }
  }
LAB_001003ae:
  this[0x1e0] = (TextParagraph)0x1;
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x180));
  return;
}



/* TextParagraph::get_preserve_control() const */

undefined4 __thiscall TextParagraph::get_preserve_control(TextParagraph *this)

{
  pthread_mutex_t *__mutex;
  code *pcVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  Object *pOVar5;
  
  __mutex = (pthread_mutex_t *)(this + 0x180);
  iVar3 = pthread_mutex_lock(__mutex);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar3);
  }
  pOVar5 = *(Object **)(TextServerManager::singleton + 0x178);
  if (pOVar5 != (Object *)0x0) {
    cVar2 = RefCounted::reference();
    if (cVar2 == '\0') {
      pOVar5 = (Object *)0x0;
    }
    uVar4 = (**(code **)(*(long *)pOVar5 + 0x610))(pOVar5);
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(pOVar5);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
        Memory::free_static(pOVar5,false);
        pthread_mutex_unlock(__mutex);
        return uVar4;
      }
    }
    pthread_mutex_unlock(__mutex);
    return uVar4;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* TextParagraph::get_custom_punctuation() const */

void TextParagraph::get_custom_punctuation(void)

{
  long lVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  Object *pOVar5;
  long in_RSI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  iVar4 = pthread_mutex_lock((pthread_mutex_t *)(in_RSI + 0x180));
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar4);
  }
  pOVar5 = *(Object **)(TextServerManager::singleton + 0x178);
  if (pOVar5 != (Object *)0x0) {
    cVar3 = RefCounted::reference();
    if (cVar3 == '\0') {
      pOVar5 = (Object *)0x0;
    }
    (**(code **)(*(long *)pOVar5 + 0x5d0))();
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(pOVar5);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
        Memory::free_static(pOVar5,false);
      }
    }
    pthread_mutex_unlock((pthread_mutex_t *)(in_RSI + 0x180));
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



/* TextParagraph::get_preserve_invalid() const */

undefined4 __thiscall TextParagraph::get_preserve_invalid(TextParagraph *this)

{
  pthread_mutex_t *__mutex;
  code *pcVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  Object *pOVar5;
  
  __mutex = (pthread_mutex_t *)(this + 0x180);
  iVar3 = pthread_mutex_lock(__mutex);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar3);
  }
  pOVar5 = *(Object **)(TextServerManager::singleton + 0x178);
  if (pOVar5 != (Object *)0x0) {
    cVar2 = RefCounted::reference();
    if (cVar2 == '\0') {
      pOVar5 = (Object *)0x0;
    }
    uVar4 = (**(code **)(*(long *)pOVar5 + 0x600))(pOVar5);
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(pOVar5);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
        Memory::free_static(pOVar5,false);
        pthread_mutex_unlock(__mutex);
        return uVar4;
      }
    }
    pthread_mutex_unlock(__mutex);
    return uVar4;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* TextParagraph::set_bidi_override(Array const&) */

void __thiscall TextParagraph::set_bidi_override(TextParagraph *this,Array *param_1)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  Object *pOVar4;
  
  iVar3 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x180));
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar3);
  }
  pOVar4 = *(Object **)(TextServerManager::singleton + 0x178);
  if (pOVar4 != (Object *)0x0) {
    cVar2 = RefCounted::reference();
    if (cVar2 == '\0') {
      pOVar4 = (Object *)0x0;
    }
    (**(code **)(*(long *)pOVar4 + 0x5c0))(pOVar4,this + 0x1c8,param_1);
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(pOVar4);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        Memory::free_static(pOVar4,false);
      }
    }
    this[0x1e0] = (TextParagraph)0x1;
    pthread_mutex_unlock((pthread_mutex_t *)(this + 0x180));
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* TextParagraph::set_custom_punctuation(String const&) */

void __thiscall TextParagraph::set_custom_punctuation(TextParagraph *this,String *param_1)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  Object *pOVar4;
  
  iVar3 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x180));
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar3);
  }
  pOVar4 = *(Object **)(TextServerManager::singleton + 0x178);
  if (pOVar4 != (Object *)0x0) {
    cVar2 = RefCounted::reference();
    if (cVar2 == '\0') {
      pOVar4 = (Object *)0x0;
    }
    (**(code **)(*(long *)pOVar4 + 0x5c8))(pOVar4,this + 0x1c8,param_1);
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(pOVar4);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        Memory::free_static(pOVar4,false);
      }
    }
    this[0x1e0] = (TextParagraph)0x1;
    pthread_mutex_unlock((pthread_mutex_t *)(this + 0x180));
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* TextParagraph::clear_dropcap() */

void __thiscall TextParagraph::clear_dropcap(TextParagraph *this)

{
  code *pcVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  Object *pOVar5;
  
  iVar4 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x180));
  lVar2 = TextServerManager::singleton;
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar4);
  }
  *(undefined8 *)(this + 0x1b4) = 0;
  *(undefined8 *)(this + 0x1bc) = 0;
  pOVar5 = *(Object **)(lVar2 + 0x178);
  if (pOVar5 != (Object *)0x0) {
    cVar3 = RefCounted::reference();
    if (cVar3 == '\0') {
      pOVar5 = (Object *)0x0;
    }
    (**(code **)(*(long *)pOVar5 + 0x5a0))(pOVar5);
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(pOVar5);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
        Memory::free_static(pOVar5,false);
      }
    }
    this[0x1e0] = (TextParagraph)0x1;
    pthread_mutex_unlock((pthread_mutex_t *)(this + 0x180));
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* TextParagraph::resize_object(Variant, Vector2 const&, InlineAlignment, float) */

undefined4 __thiscall
TextParagraph::resize_object
          (float param_1,TextParagraph *this,undefined8 param_3,undefined8 param_4,
          undefined4 param_5)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  Object *pOVar5;
  
  iVar3 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x180));
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar3);
  }
  pOVar5 = *(Object **)(TextServerManager::singleton + 0x178);
  if (pOVar5 != (Object *)0x0) {
    cVar2 = RefCounted::reference();
    if (cVar2 == '\0') {
      pOVar5 = (Object *)0x0;
    }
    uVar4 = (**(code **)(*(long *)pOVar5 + 0x638))
                      ((double)param_1,pOVar5,this + 0x1c8,param_3,param_4,param_5);
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(pOVar5);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
        Memory::free_static(pOVar5,false);
      }
    }
    this[0x1e0] = (TextParagraph)0x1;
    pthread_mutex_unlock((pthread_mutex_t *)(this + 0x180));
    return uVar4;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* TextParagraph::add_object(Variant, Vector2 const&, InlineAlignment, int, float) */

undefined4 __thiscall
TextParagraph::add_object
          (float param_1,TextParagraph *this,undefined8 param_3,undefined8 param_4,
          undefined4 param_5,int param_6)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  Object *pOVar5;
  
  iVar3 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x180));
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar3);
  }
  pOVar5 = *(Object **)(TextServerManager::singleton + 0x178);
  if (pOVar5 != (Object *)0x0) {
    cVar2 = RefCounted::reference();
    if (cVar2 == '\0') {
      pOVar5 = (Object *)0x0;
    }
    uVar4 = (**(code **)(*(long *)pOVar5 + 0x630))
                      ((double)param_1,pOVar5,this + 0x1c8,param_3,param_4,param_5,(long)param_6);
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(pOVar5);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
        Memory::free_static(pOVar5,false);
      }
    }
    this[0x1e0] = (TextParagraph)0x1;
    pthread_mutex_unlock((pthread_mutex_t *)(this + 0x180));
    return uVar4;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* TextParagraph::get_dropcap_size() const */

undefined8 __thiscall TextParagraph::get_dropcap_size(TextParagraph *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  Object *pOVar6;
  undefined8 uVar7;
  
  iVar5 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x180));
  if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar5);
  }
  pOVar6 = *(Object **)(TextServerManager::singleton + 0x178);
  if (pOVar6 != (Object *)0x0) {
    cVar4 = RefCounted::reference();
    if (cVar4 == '\0') {
      pOVar6 = (Object *)0x0;
    }
    uVar7 = (**(code **)(*(long *)pOVar6 + 0x720))(pOVar6);
    uVar1 = *(undefined8 *)(this + 0x1bc);
    uVar2 = *(undefined8 *)(this + 0x1b4);
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      cVar4 = predelete_handler(pOVar6);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
        Memory::free_static(pOVar6,false);
      }
    }
    pthread_mutex_unlock((pthread_mutex_t *)(this + 0x180));
    return CONCAT44((float)((ulong)uVar7 >> 0x20) + (float)((ulong)uVar1 >> 0x20) +
                    (float)((ulong)uVar2 >> 0x20),(float)uVar7 + (float)uVar1 + (float)uVar2);
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}



/* TextParagraph::add_string(String const&, Ref<Font> const&, int, String const&, Variant const&) */

undefined4 __thiscall
TextParagraph::add_string
          (TextParagraph *this,String *param_1,Ref *param_2,int param_3,String *param_4,
          Variant *param_5)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  Object *pOVar5;
  long in_FS_OFFSET;
  Array local_50 [8];
  Dictionary local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x180));
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar3);
  }
  if (*(long *)param_2 == 0) {
    uVar4 = 0;
    _err_print_error("add_string","scene/resources/text_paragraph.cpp",0x1ad,
                     "Condition \"p_font.is_null()\" is true. Returning: false",0,0);
  }
  else {
    pOVar5 = *(Object **)(TextServerManager::singleton + 0x178);
    if (pOVar5 == (Object *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    cVar2 = RefCounted::reference();
    if (cVar2 == '\0') {
      pOVar5 = (Object *)0x0;
    }
    pcVar1 = *(code **)(*(long *)pOVar5 + 0x628);
    (**(code **)(**(long **)param_2 + 0x278))(local_48);
    (**(code **)(**(long **)param_2 + 0x210))(local_50);
    uVar4 = (*pcVar1)(pOVar5,this + 0x1c8,param_1,local_50,(long)param_3,local_48,param_4,param_5);
    Array::~Array(local_50);
    Dictionary::~Dictionary(local_48);
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(pOVar5);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
        Memory::free_static(pOVar5,false);
      }
    }
    this[0x1e0] = (TextParagraph)0x1;
  }
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x180));
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TextParagraph::set_preserve_control(bool) */

void __thiscall TextParagraph::set_preserve_control(TextParagraph *this,bool param_1)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  Object *pOVar4;
  
  iVar3 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x180));
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar3);
  }
  pOVar4 = *(Object **)(TextServerManager::singleton + 0x178);
  if (pOVar4 != (Object *)0x0) {
    cVar2 = RefCounted::reference();
    if (cVar2 == '\0') {
      pOVar4 = (Object *)0x0;
    }
    (**(code **)(*(long *)pOVar4 + 0x608))(pOVar4,this + 0x1c8,param_1);
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(pOVar4);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        Memory::free_static(pOVar4,false);
      }
    }
    pOVar4 = *(Object **)(TextServerManager::singleton + 0x178);
    if (pOVar4 != (Object *)0x0) {
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        pOVar4 = (Object *)0x0;
      }
      (**(code **)(*(long *)pOVar4 + 0x608))(pOVar4,this + 0x1a8,param_1);
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
        cVar2 = predelete_handler(pOVar4);
        if (cVar2 != '\0') {
          (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
          Memory::free_static(pOVar4,false);
        }
      }
      this[0x1e0] = (TextParagraph)0x1;
      pthread_mutex_unlock((pthread_mutex_t *)(this + 0x180));
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* TextParagraph::set_preserve_invalid(bool) */

void __thiscall TextParagraph::set_preserve_invalid(TextParagraph *this,bool param_1)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  Object *pOVar4;
  
  iVar3 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x180));
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar3);
  }
  pOVar4 = *(Object **)(TextServerManager::singleton + 0x178);
  if (pOVar4 != (Object *)0x0) {
    cVar2 = RefCounted::reference();
    if (cVar2 == '\0') {
      pOVar4 = (Object *)0x0;
    }
    (**(code **)(*(long *)pOVar4 + 0x5f8))(pOVar4,this + 0x1c8,param_1);
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(pOVar4);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        Memory::free_static(pOVar4,false);
      }
    }
    pOVar4 = *(Object **)(TextServerManager::singleton + 0x178);
    if (pOVar4 != (Object *)0x0) {
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        pOVar4 = (Object *)0x0;
      }
      (**(code **)(*(long *)pOVar4 + 0x5f8))(pOVar4,this + 0x1a8,param_1);
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
        cVar2 = predelete_handler(pOVar4);
        if (cVar2 != '\0') {
          (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
          Memory::free_static(pOVar4,false);
        }
      }
      this[0x1e0] = (TextParagraph)0x1;
      pthread_mutex_unlock((pthread_mutex_t *)(this + 0x180));
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* TextParagraph::set_orientation(TextServer::Orientation) */

void __thiscall TextParagraph::set_orientation(TextParagraph *this,undefined4 param_2)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  Object *pOVar4;
  
  iVar3 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x180));
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar3);
  }
  pOVar4 = *(Object **)(TextServerManager::singleton + 0x178);
  if (pOVar4 != (Object *)0x0) {
    cVar2 = RefCounted::reference();
    if (cVar2 == '\0') {
      pOVar4 = (Object *)0x0;
    }
    (**(code **)(*(long *)pOVar4 + 0x5e8))(pOVar4,this + 0x1c8,param_2);
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(pOVar4);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        Memory::free_static(pOVar4,false);
      }
    }
    pOVar4 = *(Object **)(TextServerManager::singleton + 0x178);
    if (pOVar4 != (Object *)0x0) {
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        pOVar4 = (Object *)0x0;
      }
      (**(code **)(*(long *)pOVar4 + 0x5e8))(pOVar4,this + 0x1a8,param_2);
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
        cVar2 = predelete_handler(pOVar4);
        if (cVar2 != '\0') {
          (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
          Memory::free_static(pOVar4,false);
        }
      }
      this[0x1e0] = (TextParagraph)0x1;
      pthread_mutex_unlock((pthread_mutex_t *)(this + 0x180));
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* TextParagraph::set_direction(TextServer::Direction) */

void __thiscall TextParagraph::set_direction(TextParagraph *this,undefined4 param_2)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  Object *pOVar4;
  
  iVar3 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x180));
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar3);
  }
  pOVar4 = *(Object **)(TextServerManager::singleton + 0x178);
  if (pOVar4 != (Object *)0x0) {
    cVar2 = RefCounted::reference();
    if (cVar2 == '\0') {
      pOVar4 = (Object *)0x0;
    }
    (**(code **)(*(long *)pOVar4 + 0x5a8))(pOVar4,this + 0x1c8,param_2);
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(pOVar4);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        Memory::free_static(pOVar4,false);
      }
    }
    pOVar4 = *(Object **)(TextServerManager::singleton + 0x178);
    if (pOVar4 != (Object *)0x0) {
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        pOVar4 = (Object *)0x0;
      }
      (**(code **)(*(long *)pOVar4 + 0x5a8))(pOVar4,this + 0x1a8,param_2);
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
        cVar2 = predelete_handler(pOVar4);
        if (cVar2 != '\0') {
          (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
          Memory::free_static(pOVar4,false);
        }
      }
      this[0x1e0] = (TextParagraph)0x1;
      pthread_mutex_unlock((pthread_mutex_t *)(this + 0x180));
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* TextParagraph::set_dropcap(String const&, Ref<Font> const&, int, Rect2 const&, String const&) */

undefined4 __thiscall
TextParagraph::set_dropcap
          (TextParagraph *this,String *param_1,Ref *param_2,int param_3,Rect2 *param_4,
          String *param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  Object *pOVar6;
  long in_FS_OFFSET;
  Array local_68 [8];
  Dictionary local_60 [8];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar4 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x180));
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar4);
  }
  if (*(long *)param_2 != 0) {
    pOVar6 = *(Object **)(TextServerManager::singleton + 0x178);
    if (pOVar6 != (Object *)0x0) {
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        pOVar6 = (Object *)0x0;
      }
      (**(code **)(*(long *)pOVar6 + 0x5a0))(pOVar6);
      cVar3 = RefCounted::unreference();
      if (cVar3 != '\0') {
        cVar3 = predelete_handler(pOVar6);
        if (cVar3 != '\0') {
          (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
          Memory::free_static(pOVar6,false);
        }
      }
      uVar2 = *(undefined8 *)(param_4 + 8);
      pOVar6 = *(Object **)(TextServerManager::singleton + 0x178);
      *(undefined8 *)(this + 0x1b4) = *(undefined8 *)param_4;
      *(undefined8 *)(this + 0x1bc) = uVar2;
      if (pOVar6 != (Object *)0x0) {
        cVar3 = RefCounted::reference();
        if (cVar3 == '\0') {
          pOVar6 = (Object *)0x0;
        }
        local_50 = (undefined1  [16])0x0;
        local_58 = 0;
        pcVar1 = *(code **)(*(long *)pOVar6 + 0x628);
        (**(code **)(**(long **)param_2 + 0x278))(local_60);
        (**(code **)(**(long **)param_2 + 0x210))(local_68);
        uVar5 = (*pcVar1)(pOVar6,this + 0x1a8,param_1,local_68,(long)param_3,local_60,param_5,
                          &local_58);
        Array::~Array(local_68);
        Dictionary::~Dictionary(local_60);
        if (::Variant::needs_deinit[(int)local_58] != '\0') {
          ::Variant::_clear_internal();
        }
        cVar3 = RefCounted::unreference();
        if (cVar3 != '\0') {
          cVar3 = predelete_handler(pOVar6);
          if (cVar3 != '\0') {
            (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
            Memory::free_static(pOVar6,false);
          }
        }
        this[0x1e0] = (TextParagraph)0x1;
        goto LAB_001013c0;
      }
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  uVar5 = 0;
  _err_print_error("set_dropcap","scene/resources/text_paragraph.cpp",0x19c,
                   "Condition \"p_font.is_null()\" is true. Returning: false",0,0);
LAB_001013c0:
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x180));
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TextParagraph::clear() */

void __thiscall TextParagraph::clear(TextParagraph *this)

{
  long lVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  Object *pOVar6;
  long lVar7;
  
  iVar4 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x180));
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar4);
  }
  uVar5 = *(uint *)(this + 0x1d0);
  lVar7 = *(long *)(this + 0x1d8);
  lVar1 = lVar7 + (ulong)uVar5 * 8;
  if (lVar7 != lVar1) {
LAB_00101501:
    do {
      pOVar6 = *(Object **)(TextServerManager::singleton + 0x178);
      if (pOVar6 == (Object *)0x0) goto TextParagraph_clear;
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        pOVar6 = (Object *)0x0;
      }
      (**(code **)(*(long *)pOVar6 + 0x168))(pOVar6);
      cVar3 = RefCounted::unreference();
      if (cVar3 != '\0') {
        cVar3 = predelete_handler(pOVar6);
        if (cVar3 != '\0') {
          lVar7 = lVar7 + 8;
          (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
          Memory::free_static(pOVar6,false);
          if (lVar1 == lVar7) break;
          goto LAB_00101501;
        }
      }
      lVar7 = lVar7 + 8;
    } while (lVar1 != lVar7);
    uVar5 = *(uint *)(this + 0x1d0);
  }
  if (uVar5 != 0) {
    *(undefined4 *)(this + 0x1d0) = 0;
  }
  pOVar6 = *(Object **)(TextServerManager::singleton + 0x178);
  if (pOVar6 != (Object *)0x0) {
    cVar3 = RefCounted::reference();
    if (cVar3 == '\0') {
      pOVar6 = (Object *)0x0;
    }
    (**(code **)(*(long *)pOVar6 + 0x5a0))(pOVar6);
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(pOVar6);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
        Memory::free_static(pOVar6,false);
      }
    }
    pOVar6 = *(Object **)(TextServerManager::singleton + 0x178);
    if (pOVar6 != (Object *)0x0) {
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        pOVar6 = (Object *)0x0;
      }
      (**(code **)(*(long *)pOVar6 + 0x5a0))(pOVar6);
      cVar3 = RefCounted::unreference();
      if (cVar3 != '\0') {
        cVar3 = predelete_handler(pOVar6);
        if (cVar3 != '\0') {
          (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
          Memory::free_static(pOVar6,false);
        }
      }
      pthread_mutex_unlock((pthread_mutex_t *)(this + 0x180));
      return;
    }
  }
TextParagraph_clear:
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
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



/* TextParagraph::get_ellipsis_char() const */

void TextParagraph::get_ellipsis_char(void)

{
  long in_RSI;
  CowData<char32_t> *in_RDI;
  
  *(undefined8 *)in_RDI = 0;
  if (*(long *)(in_RSI + 0x200) != 0) {
    CowData<char32_t>::_ref(in_RDI,(CowData *)(in_RSI + 0x200));
  }
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



/* TextParagraph::is_dirty() */

TextParagraph __thiscall TextParagraph::is_dirty(TextParagraph *this)

{
  return this[0x1e0];
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TextParagraph::TextParagraph(String const&, Ref<Font> const&, int, String const&, float,
   TextServer::Direction, TextServer::Orientation) */

void __thiscall
TextParagraph::TextParagraph
          (undefined4 param_5,TextParagraph *this,undefined8 param_1,long *param_2,int param_3,
          undefined8 param_4,undefined4 param_7,undefined4 param_8)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  Object *pOVar6;
  long in_FS_OFFSET;
  Array local_70 [8];
  undefined *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  RefCounted::RefCounted((RefCounted *)this);
  *(undefined ***)this = &PTR__initialize_classv_0012ced8;
  uVar5 = _LC24;
  *(undefined1 (*) [16])(this + 400) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x1e4) = uVar5;
  *(undefined1 (*) [16])(this + 0x180) = (undefined1  [16])0x0;
  uVar2 = _UNK_0012e0c8;
  uVar5 = __LC25;
  *(undefined8 *)(this + 0x1a0) = 0;
  *(undefined4 *)(this + 400) = 1;
  *(undefined8 *)(this + 0x1a8) = 0;
  *(undefined4 *)(this + 0x1b0) = 0;
  *(undefined8 *)(this + 0x1b4) = 0;
  *(undefined8 *)(this + 0x1bc) = 0;
  *(undefined8 *)(this + 0x1c8) = 0;
  *(undefined8 *)(this + 0x1d0) = 0;
  *(undefined8 *)(this + 0x1d8) = 0;
  this[0x1e0] = (TextParagraph)0x1;
  *(undefined4 *)(this + 0x1ec) = 0xffffffff;
  *(undefined8 *)(this + 0x200) = 0;
  *(undefined8 *)(this + 0x1f0) = uVar5;
  *(undefined8 *)(this + 0x1f8) = uVar2;
  local_68 = &_LC26;
  local_60 = 1;
  String::parse_utf32((StrRange *)(this + 0x200));
  lVar3 = TextServerManager::singleton;
  *(undefined8 *)(this + 0x208) = 0;
  *(undefined8 *)(this + 0x218) = 0;
  pOVar6 = *(Object **)(lVar3 + 0x178);
  if (pOVar6 == (Object *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  cVar4 = RefCounted::reference();
  if (cVar4 == '\0') {
    pOVar6 = (Object *)0x0;
  }
  uVar5 = (**(code **)(*(long *)pOVar6 + 0x598))(pOVar6,param_7,param_8);
  *(undefined8 *)(this + 0x1c8) = uVar5;
  cVar4 = RefCounted::unreference();
  if (cVar4 != '\0') {
    cVar4 = predelete_handler(pOVar6);
    if (cVar4 != '\0') {
      (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
      Memory::free_static(pOVar6,false);
    }
  }
  if (*param_2 != 0) {
    pOVar6 = *(Object **)(TextServerManager::singleton + 0x178);
    if (pOVar6 == (Object *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    cVar4 = RefCounted::reference();
    if (cVar4 == '\0') {
      pOVar6 = (Object *)0x0;
    }
    local_50 = (undefined1  [16])0x0;
    local_58 = 0;
    pcVar1 = *(code **)(*(long *)pOVar6 + 0x628);
    (**(code **)(*(long *)*param_2 + 0x278))((Dictionary *)&local_68);
    (**(code **)(*(long *)*param_2 + 0x210))(local_70);
    (*pcVar1)(pOVar6,this + 0x1c8,param_1,local_70,(long)param_3,(Dictionary *)&local_68,param_4,
              &local_58,param_1,param_5,&local_58);
    Array::~Array(local_70);
    Dictionary::~Dictionary((Dictionary *)&local_68);
    if (::Variant::needs_deinit[(int)local_58] != '\0') {
      ::Variant::_clear_internal();
    }
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      cVar4 = predelete_handler(pOVar6);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
        Memory::free_static(pOVar6,false);
      }
    }
  }
  *(undefined4 *)(this + 0x1e8) = param_5;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TextParagraph::TextParagraph() */

void __thiscall TextParagraph::TextParagraph(TextParagraph *this)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  char cVar5;
  undefined8 uVar6;
  Object *pOVar7;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  RefCounted::RefCounted((RefCounted *)this);
  *(undefined ***)this = &PTR__initialize_classv_0012ced8;
  uVar6 = _LC24;
  *(undefined1 (*) [16])(this + 400) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x1e4) = uVar6;
  *(undefined1 (*) [16])(this + 0x180) = (undefined1  [16])0x0;
  uVar3 = _UNK_0012e0c8;
  uVar6 = __LC25;
  *(undefined8 *)(this + 0x1a0) = 0;
  *(undefined4 *)(this + 400) = 1;
  *(undefined8 *)(this + 0x1a8) = 0;
  *(undefined4 *)(this + 0x1b0) = 0;
  *(undefined8 *)(this + 0x1b4) = 0;
  *(undefined8 *)(this + 0x1bc) = 0;
  *(undefined8 *)(this + 0x1c8) = 0;
  *(undefined8 *)(this + 0x1d0) = 0;
  *(undefined8 *)(this + 0x1d8) = 0;
  this[0x1e0] = (TextParagraph)0x1;
  *(undefined4 *)(this + 0x1ec) = 0xffffffff;
  *(undefined8 *)(this + 0x200) = 0;
  *(undefined8 *)(this + 0x1f0) = uVar6;
  *(undefined8 *)(this + 0x1f8) = uVar3;
  String::parse_utf32((StrRange *)(this + 0x200));
  lVar4 = TextServerManager::singleton;
  *(undefined8 *)(this + 0x208) = 0;
  *(undefined8 *)(this + 0x218) = 0;
  pOVar7 = *(Object **)(lVar4 + 0x178);
  if (pOVar7 == (Object *)0x0) {
TextParagraph_TextParagraph:
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  cVar5 = RefCounted::reference();
  if (cVar5 == '\0') {
    pOVar7 = (Object *)0x0;
  }
  uVar6 = (**(code **)(*(long *)pOVar7 + 0x598))(pOVar7,0,0);
  *(undefined8 *)(this + 0x1c8) = uVar6;
  cVar5 = RefCounted::unreference();
  if (cVar5 != '\0') {
    cVar5 = predelete_handler(pOVar7);
    if (cVar5 != '\0') {
      (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
      Memory::free_static(pOVar7,false);
    }
  }
  pOVar7 = *(Object **)(TextServerManager::singleton + 0x178);
  if (pOVar7 == (Object *)0x0) goto TextParagraph_TextParagraph;
  cVar5 = RefCounted::reference();
  if (cVar5 == '\0') {
    pOVar7 = (Object *)0x0;
  }
  uVar6 = (**(code **)(*(long *)pOVar7 + 0x598))(pOVar7,0,0);
  *(undefined8 *)(this + 0x1a8) = uVar6;
  cVar5 = RefCounted::unreference();
  if (cVar5 != '\0') {
    cVar5 = predelete_handler(pOVar7);
    if (cVar5 != '\0') {
      (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
      if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
        Memory::free_static(pOVar7,false);
        return;
      }
      goto LAB_00101db9;
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00101db9:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TextParagraph::~TextParagraph() */

void __thiscall TextParagraph::~TextParagraph(TextParagraph *this)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  char cVar4;
  uint uVar5;
  Object *pOVar6;
  long lVar7;
  
  lVar7 = *(long *)(this + 0x1d8);
  uVar5 = *(uint *)(this + 0x1d0);
  *(undefined ***)this = &PTR__initialize_classv_0012ced8;
  lVar2 = lVar7 + (ulong)uVar5 * 8;
  if (lVar7 != lVar2) {
    do {
      while( true ) {
        pOVar6 = *(Object **)(TextServerManager::singleton + 0x178);
        if (pOVar6 == (Object *)0x0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        cVar4 = RefCounted::reference();
        if (cVar4 == '\0') {
          pOVar6 = (Object *)0x0;
        }
        (**(code **)(*(long *)pOVar6 + 0x168))(pOVar6);
        cVar4 = RefCounted::unreference();
        if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar6), cVar4 != '\0')) break;
        lVar7 = lVar7 + 8;
        if (lVar2 == lVar7) goto LAB_00101e78;
      }
      lVar7 = lVar7 + 8;
      (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
      Memory::free_static(pOVar6,false);
    } while (lVar2 != lVar7);
LAB_00101e78:
    uVar5 = *(uint *)(this + 0x1d0);
  }
  if (uVar5 != 0) {
    *(undefined4 *)(this + 0x1d0) = 0;
  }
  pOVar6 = *(Object **)(TextServerManager::singleton + 0x178);
  if (pOVar6 == (Object *)0x0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  cVar4 = RefCounted::reference();
  if (cVar4 == '\0') {
    pOVar6 = (Object *)0x0;
  }
  (**(code **)(*(long *)pOVar6 + 0x168))(pOVar6);
  cVar4 = RefCounted::unreference();
  if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar6), cVar4 != '\0')) {
    (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
    Memory::free_static(pOVar6,false);
  }
  pOVar6 = *(Object **)(TextServerManager::singleton + 0x178);
  if (pOVar6 == (Object *)0x0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  cVar4 = RefCounted::reference();
  if (cVar4 == '\0') {
    pOVar6 = (Object *)0x0;
  }
  (**(code **)(*(long *)pOVar6 + 0x168))(pOVar6);
  cVar4 = RefCounted::unreference();
  if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar6), cVar4 != '\0')) {
    (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
    Memory::free_static(pOVar6,false);
  }
  if (*(long *)(this + 0x218) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x218) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x218);
      *(undefined8 *)(this + 0x218) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x200));
  if (*(void **)(this + 0x1d8) != (void *)0x0) {
    if (*(int *)(this + 0x1d0) != 0) {
      *(undefined4 *)(this + 0x1d0) = 0;
    }
    Memory::free_static(*(void **)(this + 0x1d8),false);
  }
  *(undefined ***)this = &PTR__initialize_classv_0012cd78;
  Object::~Object((Object *)this);
  return;
}



/* TextParagraph::~TextParagraph() */

void __thiscall TextParagraph::~TextParagraph(TextParagraph *this)

{
  ~TextParagraph(this);
  operator_delete(this,0x220);
  return;
}



/* TextParagraph::set_ellipsis_char(String const&) */

void __thiscall TextParagraph::set_ellipsis_char(TextParagraph *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  char cVar4;
  long lVar5;
  long in_FS_OFFSET;
  bool bVar6;
  char *local_68;
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = (char *)0x0;
  if (*(long *)param_1 != 0) {
    plVar1 = (long *)(*(long *)param_1 + -0x10);
    do {
      lVar2 = *plVar1;
      if (lVar2 == 0) goto LAB_001020c2;
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
      local_68 = *(char **)param_1;
    }
LAB_001020c2:
    if ((local_68 != (char *)0x0) && (2 < *(int *)(local_68 + -8))) {
      local_50 = 0;
      local_40 = 0x13;
      local_48 = " characters given).";
      String::parse_latin1((StrRange *)&local_50);
      itos((long)local_60);
      operator+((char *)local_58,(String *)"Ellipsis must be exactly one character long (");
      String::operator+((String *)&local_48,(String *)local_58);
      _err_print_error("set_ellipsis_char","scene/resources/text_paragraph.cpp",0x20c,
                       (String *)&local_48,0,1);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref(local_58);
      CowData<char32_t>::_unref(local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      String::left((int)(String *)&local_48);
      if (local_68 != local_48) {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        local_68 = local_48;
        local_48 = (char *)0x0;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    }
  }
  cVar4 = String::operator==((String *)(this + 0x200),(String *)&local_68);
  if (cVar4 == '\0') {
    if (*(char **)(this + 0x200) != local_68) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x200),(CowData *)&local_68);
    }
    pcVar3 = local_68;
    this[0x1e0] = (TextParagraph)0x1;
    if (local_68 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_68 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_68 = (char *)0x0;
        Memory::free_static(pcVar3 + -0x10,false);
      }
    }
  }
  else {
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TextParagraph::_shape_lines() const */

void __thiscall TextParagraph::_shape_lines(TextParagraph *this)

{
  TextParagraph *pTVar1;
  float fVar2;
  int iVar3;
  code *pcVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  uint uVar7;
  char cVar8;
  char cVar9;
  int iVar10;
  uint uVar11;
  int extraout_var;
  void *pvVar12;
  undefined4 uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  int iVar20;
  Object *pOVar21;
  TextParagraph *pTVar22;
  long *plVar23;
  uint uVar24;
  ulong uVar25;
  long in_FS_OFFSET;
  float fVar26;
  float fVar27;
  float extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  float extraout_XMM0_Db_01;
  double dVar28;
  float local_80;
  undefined8 local_78;
  long *local_70;
  long *local_68;
  long local_60;
  long *local_58;
  long local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Ref<TextServer>::Ref((Ref<TextServer> *)&local_68,(Ref *)(TextServerManager::singleton + 0x178));
  pTVar1 = this + 0x1c8;
  cVar8 = (**(code **)(*local_68 + 0x698))(local_68,pTVar1);
  if (cVar8 == '\0') {
    Ref<TextServer>::unref((Ref<TextServer> *)&local_68);
LAB_00102310:
    uVar11 = *(uint *)(this + 0x1d0);
    lVar15 = *(long *)(this + 0x1d8);
    this[0x1e0] = (TextParagraph)0x1;
    lVar18 = lVar15 + (ulong)uVar11 * 8;
    if (lVar18 != lVar15) {
LAB_00102339:
      do {
        pOVar21 = *(Object **)(TextServerManager::singleton + 0x178);
        if (pOVar21 == (Object *)0x0) goto TextParagraph__shape_lines;
        cVar8 = RefCounted::reference();
        if (cVar8 == '\0') {
          pOVar21 = (Object *)0x0;
        }
        cVar8 = (**(code **)(*(long *)pOVar21 + 0x698))(pOVar21);
        cVar9 = RefCounted::unreference();
        if ((cVar9 != '\0') && (cVar9 = predelete_handler(pOVar21), cVar9 != '\0')) {
          (**(code **)(*(long *)pOVar21 + 0x140))(pOVar21);
          Memory::free_static(pOVar21,false);
        }
        if (cVar8 == '\0') {
          this[0x1e0] = (TextParagraph)0x1;
          goto LAB_001023c9;
        }
        lVar15 = lVar15 + 8;
      } while (lVar18 != lVar15);
      if (this[0x1e0] == (TextParagraph)0x0) goto LAB_001029df;
LAB_001023c9:
      uVar11 = *(uint *)(this + 0x1d0);
      lVar15 = *(long *)(this + 0x1d8);
      lVar18 = lVar15 + (ulong)uVar11 * 8;
      if (lVar18 != lVar15) {
LAB_001023f9:
        do {
          pOVar21 = *(Object **)(TextServerManager::singleton + 0x178);
          if (pOVar21 == (Object *)0x0) {
TextParagraph__shape_lines:
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          cVar8 = RefCounted::reference();
          if (cVar8 == '\0') {
            pOVar21 = (Object *)0x0;
          }
          (**(code **)(*(long *)pOVar21 + 0x168))(pOVar21);
          cVar8 = RefCounted::unreference();
          if ((cVar8 == '\0') || (cVar8 = predelete_handler(pOVar21), cVar8 == '\0')) {
            lVar15 = lVar15 + 8;
            if (lVar18 == lVar15) break;
            goto LAB_001023f9;
          }
          lVar15 = lVar15 + 8;
          (**(code **)(*(long *)pOVar21 + 0x140))(pOVar21);
          Memory::free_static(pOVar21,false);
        } while (lVar18 != lVar15);
        uVar11 = *(uint *)(this + 0x1d0);
      }
    }
  }
  else {
    Ref<TextServer>::Ref((Ref<TextServer> *)&local_58,(Ref *)(TextServerManager::singleton + 0x178))
    ;
    cVar8 = (**(code **)(*local_58 + 0x698))(local_58,this + 0x1a8);
    if (cVar8 == '\0') {
      Ref<TextServer>::unref((Ref<TextServer> *)&local_58);
      Ref<TextServer>::unref((Ref<TextServer> *)&local_68);
      goto LAB_00102310;
    }
    Ref<TextServer>::unref((Ref<TextServer> *)&local_58);
    Ref<TextServer>::unref((Ref<TextServer> *)&local_68);
    uVar11 = *(uint *)(this + 0x1d0);
    lVar15 = *(long *)(this + 0x1d8);
    lVar18 = lVar15 + (ulong)uVar11 * 8;
    if (lVar15 != lVar18) goto LAB_00102339;
    if (this[0x1e0] == (TextParagraph)0x0) goto LAB_001029df;
  }
  pTVar22 = this + 0x1a8;
  if (uVar11 != 0) {
    *(undefined4 *)(this + 0x1d0) = 0;
  }
  if (*(long *)(this + 0x218) != 0) {
    Ref<TextServer>::Ref((Ref<TextServer> *)&local_58,(Ref *)(TextServerManager::singleton + 0x178))
    ;
    (**(code **)(*local_58 + 0x678))(local_58,pTVar1,this + 0x210);
    Ref<TextServer>::unref((Ref<TextServer> *)&local_58);
  }
  lVar18 = TextServerManager::singleton;
  *(undefined4 *)(this + 0x1b0) = 0;
  Ref<TextServer>::Ref((Ref<TextServer> *)&local_58,(Ref *)(lVar18 + 0x178));
  iVar10 = (**(code **)(*local_58 + 0x5f0))(local_58,pTVar22);
  Ref<TextServer>::unref((Ref<TextServer> *)&local_58);
  if (iVar10 == 0) {
    Ref<TextServer>::Ref((Ref<TextServer> *)&local_58,(Ref *)(TextServerManager::singleton + 0x178))
    ;
    fVar26 = (float)(**(code **)(*local_58 + 0x720))(local_58,pTVar22);
    local_80 = fVar26 + *(float *)(this + 0x1bc) + *(float *)(this + 0x1b4);
    Ref<TextServer>::unref((Ref<TextServer> *)&local_58);
    Ref<TextServer>::Ref((Ref<TextServer> *)&local_58,(Ref *)(TextServerManager::singleton + 0x178))
    ;
    (**(code **)(*local_58 + 0x720))(local_58,pTVar22);
    fVar26 = extraout_XMM0_Db_00 + *(float *)(this + 0x1c0) + *(float *)(this + 0x1b8);
    Ref<TextServer>::unref((Ref<TextServer> *)&local_58);
  }
  else {
    Ref<TextServer>::Ref((Ref<TextServer> *)&local_58,(Ref *)(TextServerManager::singleton + 0x178))
    ;
    (**(code **)(*local_58 + 0x720))(local_58,pTVar22);
    local_80 = extraout_XMM0_Db + *(float *)(this + 0x1c0) + *(float *)(this + 0x1b8);
    Ref<TextServer>::unref((Ref<TextServer> *)&local_58);
    Ref<TextServer>::Ref((Ref<TextServer> *)&local_58,(Ref *)(TextServerManager::singleton + 0x178))
    ;
    fVar26 = (float)(**(code **)(*local_58 + 0x720))(local_58,pTVar22);
    fVar26 = fVar26 + *(float *)(this + 0x1bc) + *(float *)(this + 0x1b4);
    Ref<TextServer>::unref((Ref<TextServer> *)&local_58);
  }
  Ref<TextServer>::Ref((Ref<TextServer> *)&local_58,(Ref *)(TextServerManager::singleton + 0x178));
  (**(code **)(*local_58 + 0x6b8))(local_58,pTVar1);
  Ref<TextServer>::unref((Ref<TextServer> *)&local_58);
  if (0.0 < local_80) {
    lVar18 = 0;
    iVar10 = 0;
    Ref<TextServer>::Ref((Ref<TextServer> *)&local_58,(Ref *)(TextServerManager::singleton + 0x178))
    ;
    (**(code **)(*local_58 + 0x6c8))
              ((double)(*(float *)(this + 0x1e8) - local_80),(Ref<TextServer> *)&local_68,local_58,
               pTVar1);
    Ref<TextServer>::unref((Ref<TextServer> *)&local_58);
    if (local_60 == 0) goto LAB_001025fd;
    do {
      if (*(long *)(local_60 + -8) <= lVar18) {
LAB_001033a0:
        lVar18 = local_60;
        if (local_60 != 0) {
          LOCK();
          plVar23 = (long *)(local_60 + -0x10);
          *plVar23 = *plVar23 + -1;
          UNLOCK();
          if (*plVar23 == 0) {
            local_60 = 0;
            Memory::free_static((void *)(lVar18 + -0x10),false);
          }
        }
        break;
      }
      Ref<TextServer>::Ref
                ((Ref<TextServer> *)&local_58,(Ref *)(TextServerManager::singleton + 0x178));
      lVar15 = lVar18 + 1;
      if (local_60 == 0) {
        lVar17 = 0;
        goto LAB_00102d6e;
      }
      lVar17 = *(long *)(local_60 + -8);
      if ((lVar17 <= lVar15) || (lVar15 = lVar18, lVar17 <= lVar18)) goto LAB_00102d6e;
      iVar10 = *(int *)(local_60 + lVar18 * 4);
      local_78 = (**(code **)(*local_58 + 0x660))
                           (local_58,pTVar1,(long)iVar10,
                            (long)(*(int *)(local_60 + 4 + lVar18 * 4) - iVar10));
      Ref<TextServer>::unref((Ref<TextServer> *)&local_58);
      Ref<TextServer>::Ref
                ((Ref<TextServer> *)&local_70,(Ref *)(TextServerManager::singleton + 0x178));
      iVar10 = (**(code **)(*local_70 + 0x5f0))(local_70,&local_78);
      if (iVar10 == 0) {
        Ref<TextServer>::Ref
                  ((Ref<TextServer> *)&local_58,(Ref *)(TextServerManager::singleton + 0x178));
        (**(code **)(*local_58 + 0x720))(local_58,&local_78);
        Ref<TextServer>::unref((Ref<TextServer> *)&local_58);
        fVar27 = extraout_XMM0_Db_01;
      }
      else {
        Ref<TextServer>::Ref
                  ((Ref<TextServer> *)&local_58,(Ref *)(TextServerManager::singleton + 0x178));
        fVar27 = (float)(**(code **)(*local_58 + 0x720))(local_58,&local_78);
        Ref<TextServer>::unref((Ref<TextServer> *)&local_58);
      }
      Ref<TextServer>::unref((Ref<TextServer> *)&local_70);
      fVar2 = *(float *)(this + 0x1e4);
      if (*(long *)(this + 0x218) != 0) {
        Ref<TextServer>::Ref
                  ((Ref<TextServer> *)&local_58,(Ref *)(TextServerManager::singleton + 0x178));
        (**(code **)(*local_58 + 0x678))(local_58,&local_78,this + 0x210);
        Ref<TextServer>::unref((Ref<TextServer> *)&local_58);
      }
      uVar6 = local_78;
      iVar10 = extraout_var;
      if ((local_60 != 0) && (lVar17 = *(long *)(local_60 + -8), lVar18 < lVar17 + -2)) {
        uVar11 = (int)lVar18 + 2;
        lVar15 = (long)(int)uVar11;
        if (lVar17 <= (int)uVar11) goto LAB_00102d6e;
        iVar10 = *(int *)(local_60 + (ulong)uVar11 * 4);
      }
      uVar11 = *(uint *)(this + 0x1d0);
      pvVar12 = *(void **)(this + 0x1d8);
      if (uVar11 == *(uint *)(this + 0x1d4)) {
        uVar19 = (ulong)(uVar11 * 2);
        if (uVar11 * 2 == 0) {
          uVar19 = 1;
        }
        *(int *)(this + 0x1d4) = (int)uVar19;
        pvVar12 = (void *)Memory::realloc_static(pvVar12,uVar19 * 8,false);
        *(void **)(this + 0x1d8) = pvVar12;
        if (pvVar12 == (void *)0x0) goto LAB_00102f64;
        uVar11 = *(uint *)(this + 0x1d0);
      }
      *(uint *)(this + 0x1d0) = uVar11 + 1;
      *(undefined8 *)((long)pvVar12 + (ulong)uVar11 * 8) = uVar6;
      if (fVar26 < fVar27 + fVar2) goto LAB_001033a0;
      fVar26 = fVar26 - (fVar27 + fVar2);
      lVar18 = lVar18 + 2;
      *(int *)(this + 0x1b0) = *(int *)(this + 0x1b0) + 1;
    } while (local_60 != 0);
    if ((iVar10 == 0) || (iVar10 < extraout_var)) goto LAB_001025fd;
  }
  else {
LAB_001025fd:
    Ref<TextServer>::Ref((Ref<TextServer> *)&local_68,(Ref *)(TextServerManager::singleton + 0x178))
    ;
    lVar18 = 1;
    (**(code **)(*local_68 + 0x6c8))
              ((double)*(float *)(this + 0x1e8),(Ref<TextServer> *)&local_58,local_68,pTVar1);
    lVar16 = 0;
    Ref<TextServer>::unref((Ref<TextServer> *)&local_68);
    lVar15 = local_50;
    while (local_50 = lVar15, lVar15 != 0) {
      if (*(long *)(lVar15 + -8) <= lVar16) {
        LOCK();
        plVar23 = (long *)(lVar15 + -0x10);
        *plVar23 = *plVar23 + -1;
        UNLOCK();
        if (*plVar23 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar15 + -0x10),false);
        }
        break;
      }
      plVar23 = *(long **)(TextServerManager::singleton + 0x178);
      if ((plVar23 == (long *)0x0) ||
         (local_68 = plVar23, cVar8 = RefCounted::reference(), cVar8 == '\0')) {
        local_68 = (long *)0x0;
        plVar23 = (long *)0x0;
        pcVar4 = *(code **)(_DAT_00000000 + 0x660);
      }
      else {
        pcVar4 = *(code **)(*plVar23 + 0x660);
      }
      lVar15 = lVar18;
      if (local_50 == 0) {
        lVar17 = 0;
        goto LAB_00102d6e;
      }
      lVar17 = *(long *)(local_50 + -8);
      if ((lVar17 <= lVar18) || (lVar15 = lVar16, lVar17 <= lVar16)) goto LAB_00102d6e;
      iVar10 = *(int *)(local_50 + lVar16 * 4);
      local_70 = (long *)(*pcVar4)(plVar23,pTVar1,(long)iVar10,
                                   (long)(*(int *)(local_50 + lVar18 * 4) - iVar10));
      Ref<TextServer>::unref((Ref<TextServer> *)&local_68);
      if (*(long *)(this + 0x218) != 0) {
        Ref<TextServer>::Ref
                  ((Ref<TextServer> *)&local_68,(Ref *)(TextServerManager::singleton + 0x178));
        (**(code **)(*local_68 + 0x678))(local_68,&local_70,this + 0x210);
        Ref<TextServer>::unref((Ref<TextServer> *)&local_68);
      }
      plVar23 = local_70;
      uVar11 = *(uint *)(this + 0x1d0);
      pvVar12 = *(void **)(this + 0x1d8);
      if (uVar11 == *(uint *)(this + 0x1d4)) {
        uVar19 = (ulong)(uVar11 * 2);
        if (uVar11 * 2 == 0) {
          uVar19 = 1;
        }
        *(int *)(this + 0x1d4) = (int)uVar19;
        pvVar12 = (void *)Memory::realloc_static(pvVar12,uVar19 * 8,false);
        *(void **)(this + 0x1d8) = pvVar12;
        if (pvVar12 == (void *)0x0) {
LAB_00102f64:
          _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                           "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        uVar11 = *(uint *)(this + 0x1d0);
      }
      lVar16 = lVar16 + 2;
      lVar18 = lVar18 + 2;
      *(uint *)(this + 0x1d0) = uVar11 + 1;
      *(long **)((long)pvVar12 + (ulong)uVar11 * 8) = plVar23;
      lVar15 = local_50;
    }
  }
  uVar19 = 0;
  if (*(uint *)(this + 0x208) - 1 < 4) {
    uVar19 = (ulong)*(uint *)(this + 0x208) * 2 - 1;
  }
  iVar10 = *(int *)(this + 0x1d0);
  if (((byte)this[0x1f0] & 6) == 0) {
    uVar14 = *(ulong *)(this + 0x1f8);
    if ((iVar10 == 1) && ((uVar14 & 0x80) != 0)) {
      uVar11 = 1;
    }
    else {
      uVar24 = iVar10 + -1 + (uint)((uVar14 & 0x20) == 0);
      uVar11 = uVar24;
      if ((uVar14 & 0x40) != 0) {
        uVar11 = iVar10 - 1;
        if ((int)uVar11 < 0) goto LAB_001028ee;
        do {
          Ref<TextServer>::Ref
                    ((Ref<TextServer> *)&local_58,(Ref *)(TextServerManager::singleton + 0x178));
          uVar14 = (ulong)*(uint *)(this + 0x1d0);
          if (*(uint *)(this + 0x1d0) <= uVar11) {
            uVar25 = (ulong)uVar11;
            goto LAB_00103152;
          }
          cVar8 = TextServer::shaped_text_has_visible_chars((RID *)local_58);
          Ref<TextServer>::unref((Ref<TextServer> *)&local_58);
          if (cVar8 != '\0') {
            iVar10 = *(int *)(this + 0x1d0);
            goto LAB_00103244;
          }
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0xffffffff);
        iVar10 = *(int *)(this + 0x1d0);
        uVar11 = uVar24;
      }
LAB_00103244:
      if (iVar10 < 1) goto LAB_001028ee;
    }
    uVar25 = 0;
    do {
      fVar26 = *(float *)(this + 0x1e8);
      uVar24 = (uint)uVar25;
      if ((int)uVar24 <= *(int *)(this + 0x1b0)) {
        fVar26 = fVar26 - local_80;
      }
      if (((int)uVar24 < (int)uVar11) && (*(int *)(this + 0x20c) == 3)) {
        Ref<TextServer>::Ref
                  ((Ref<TextServer> *)&local_58,(Ref *)(TextServerManager::singleton + 0x178));
        uVar14 = (ulong)*(uint *)(this + 0x1d0);
        dVar28 = (double)fVar26;
        if (*(uint *)(this + 0x1d0) <= uVar24) goto LAB_00103152;
        uVar19 = uVar19 | 0x10;
        lVar18 = uVar25 * 8;
        (**(code **)(*local_58 + 0x670))
                  (dVar28,local_58,*(long *)(this + 0x1d8) + lVar18,*(undefined8 *)(this + 0x1f8));
        Ref<TextServer>::unref((Ref<TextServer> *)&local_58);
        Ref<TextServer>::Ref
                  ((Ref<TextServer> *)&local_58,(Ref *)(TextServerManager::singleton + 0x178));
        puVar5 = *(undefined4 **)(this + 0x200);
        if (puVar5 == (undefined4 *)0x0) {
          uVar13 = 0x2026;
        }
        else {
          lVar17 = *(long *)(puVar5 + -2);
          uVar13 = 0x2026;
          if (1 < (int)lVar17) {
            if (lVar17 < 1) goto LAB_001035ab;
            uVar13 = *puVar5;
          }
        }
        uVar14 = (ulong)*(uint *)(this + 0x1d0);
        if (*(uint *)(this + 0x1d0) <= uVar24) goto LAB_00103152;
        (**(code **)(*local_58 + 0x5d8))(local_58,*(long *)(this + 0x1d8) + lVar18,uVar13);
        Ref<TextServer>::unref((Ref<TextServer> *)&local_58);
        Ref<TextServer>::Ref
                  ((Ref<TextServer> *)&local_58,(Ref *)(TextServerManager::singleton + 0x178));
        uVar14 = (ulong)*(uint *)(this + 0x1d0);
        if (*(uint *)(this + 0x1d0) <= uVar24) goto LAB_00103152;
        (**(code **)(*local_58 + 0x6f8))(dVar28,local_58,*(long *)(this + 0x1d8) + lVar18,uVar19);
        Ref<TextServer>::unref((Ref<TextServer> *)&local_58);
        Ref<TextServer>::Ref
                  ((Ref<TextServer> *)&local_58,(Ref *)(TextServerManager::singleton + 0x178));
        uVar14 = (ulong)*(uint *)(this + 0x1d0);
        if (*(uint *)(this + 0x1d0) <= uVar24) goto LAB_00103152;
        (**(code **)(*local_58 + 0x670))
                  (dVar28,local_58,*(long *)(this + 0x1d8) + lVar18,*(ulong *)(this + 0x1f8) | 0x10)
        ;
        Ref<TextServer>::unref((Ref<TextServer> *)&local_58);
      }
      else {
        Ref<TextServer>::Ref
                  ((Ref<TextServer> *)&local_58,(Ref *)(TextServerManager::singleton + 0x178));
        puVar5 = *(undefined4 **)(this + 0x200);
        if (puVar5 == (undefined4 *)0x0) {
          uVar13 = 0x2026;
        }
        else {
          lVar17 = *(long *)(puVar5 + -2);
          uVar13 = 0x2026;
          if (1 < (int)lVar17) {
            if (lVar17 < 1) goto LAB_001035ab;
            uVar13 = *puVar5;
          }
        }
        uVar14 = (ulong)*(uint *)(this + 0x1d0);
        if (*(uint *)(this + 0x1d0) <= uVar24) goto LAB_00103152;
        (**(code **)(*local_58 + 0x5d8))(local_58,*(long *)(this + 0x1d8) + uVar25 * 8,uVar13);
        Ref<TextServer>::unref((Ref<TextServer> *)&local_58);
        Ref<TextServer>::Ref
                  ((Ref<TextServer> *)&local_58,(Ref *)(TextServerManager::singleton + 0x178));
        uVar14 = (ulong)*(uint *)(this + 0x1d0);
        if (*(uint *)(this + 0x1d0) <= uVar24) goto LAB_00103152;
        (**(code **)(*local_58 + 0x6f8))
                  ((double)fVar26,local_58,*(long *)(this + 0x1d8) + uVar25 * 8,uVar19);
        Ref<TextServer>::unref((Ref<TextServer> *)&local_58);
      }
      uVar25 = uVar25 + 1;
    } while ((int)uVar25 < *(int *)(this + 0x1d0));
  }
  else {
    iVar20 = *(int *)(this + 0x1ec);
    iVar3 = *(int *)(this + 0x20c);
    if (iVar20 < 0) {
      iVar20 = iVar10;
      if (0 < iVar10) goto LAB_00102e90;
      if (iVar3 == 3) goto LAB_00103097;
    }
    else {
      if (iVar10 < iVar20) {
        iVar20 = iVar10;
      }
      if ((iVar20 < 1) || (iVar10 <= iVar20)) {
LAB_00102e90:
        if (iVar3 == 3) {
          uVar14 = *(ulong *)(this + 0x1f8);
          if ((iVar10 != 1) || ((uVar14 & 0x80) == 0)) goto LAB_0010309f;
          uVar11 = 1;
          goto LAB_00102eb9;
        }
      }
      else {
        uVar19 = uVar19 | 8;
        if (iVar3 != 3) {
          Ref<TextServer>::Ref
                    ((Ref<TextServer> *)&local_58,(Ref *)(TextServerManager::singleton + 0x178));
          puVar5 = *(undefined4 **)(this + 0x200);
          if (puVar5 == (undefined4 *)0x0) {
            uVar13 = 0x2026;
          }
          else {
            lVar17 = *(long *)(puVar5 + -2);
            uVar13 = 0x2026;
            if (1 < (int)lVar17) {
              if (lVar17 < 1) {
LAB_001035ab:
                lVar15 = 0;
LAB_00102d6e:
                _err_print_index_error
                          ("get","./core/templates/cowdata.h",0xdb,lVar15,lVar17,"p_index","size()",
                           "",false,true);
                _err_flush_stdout();
                    /* WARNING: Does not return */
                pcVar4 = (code *)invalidInstructionException();
                (*pcVar4)();
              }
              uVar13 = *puVar5;
            }
          }
          uVar14 = (ulong)*(uint *)(this + 0x1d0);
          uVar11 = iVar20 - 1;
          if (*(uint *)(this + 0x1d0) <= uVar11) {
            uVar25 = (ulong)(int)uVar11;
LAB_00103152:
            _err_print_index_error
                      ("operator[]","./core/templates/local_vector.h",0xb2,uVar25,uVar14,"p_index",
                       "count","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          uVar25 = (ulong)(int)uVar11;
          (**(code **)(*local_58 + 0x5d8))(local_58,*(long *)(this + 0x1d8) + uVar25 * 8,uVar13);
          Ref<TextServer>::unref((Ref<TextServer> *)&local_58);
          Ref<TextServer>::Ref
                    ((Ref<TextServer> *)&local_58,(Ref *)(TextServerManager::singleton + 0x178));
          if (*(int *)(this + 0x1b0) < (int)uVar11) {
            local_80 = *(float *)(this + 0x1e8);
          }
          else {
            local_80 = *(float *)(this + 0x1e8) - local_80;
          }
          uVar14 = (ulong)*(uint *)(this + 0x1d0);
          if (*(uint *)(this + 0x1d0) <= uVar11) goto LAB_00103152;
          (**(code **)(*local_58 + 0x6f8))
                    ((double)local_80,local_58,*(long *)(this + 0x1d8) + uVar25 * 8,uVar19);
          Ref<TextServer>::unref((Ref<TextServer> *)&local_58);
          goto LAB_001028ee;
        }
LAB_00103097:
        uVar14 = *(ulong *)(this + 0x1f8);
LAB_0010309f:
        uVar24 = iVar20 + -1 + (uint)((uVar14 & 0x20) == 0);
        uVar11 = uVar24;
        if (((uVar14 & 0x40) != 0) && (uVar7 = iVar20 - 1U, -1 < (int)(iVar20 - 1U))) {
          do {
            uVar11 = uVar7;
            uVar25 = (ulong)uVar11;
            Ref<TextServer>::Ref
                      ((Ref<TextServer> *)&local_58,(Ref *)(TextServerManager::singleton + 0x178));
            uVar14 = (ulong)*(uint *)(this + 0x1d0);
            if (*(uint *)(this + 0x1d0) <= uVar11) goto LAB_00103152;
            cVar8 = TextServer::shaped_text_has_visible_chars((RID *)local_58);
            Ref<TextServer>::unref((Ref<TextServer> *)&local_58);
            if (cVar8 != '\0') {
              iVar10 = *(int *)(this + 0x1d0);
              goto LAB_0010338b;
            }
            uVar7 = uVar11 - 1;
          } while (uVar11 - 1 != 0xffffffff);
          iVar10 = *(int *)(this + 0x1d0);
          uVar11 = uVar24;
        }
LAB_0010338b:
        if (0 < iVar10) {
LAB_00102eb9:
          uVar25 = 0;
          do {
            fVar26 = *(float *)(this + 0x1e8);
            uVar24 = (uint)uVar25;
            if ((int)uVar24 <= *(int *)(this + 0x1b0)) {
              fVar26 = fVar26 - local_80;
            }
            if ((int)uVar24 < (int)uVar11) {
              Ref<TextServer>::Ref
                        ((Ref<TextServer> *)&local_58,(Ref *)(TextServerManager::singleton + 0x178))
              ;
              uVar14 = (ulong)*(uint *)(this + 0x1d0);
              if (*(uint *)(this + 0x1d0) <= uVar24) goto LAB_00103152;
              (**(code **)(*local_58 + 0x670))
                        ((double)fVar26,local_58,*(long *)(this + 0x1d8) + uVar25 * 8,
                         *(undefined8 *)(this + 0x1f8));
              Ref<TextServer>::unref((Ref<TextServer> *)&local_58);
            }
            else if (iVar20 - 1U == uVar24) {
              Ref<TextServer>::Ref
                        ((Ref<TextServer> *)&local_58,(Ref *)(TextServerManager::singleton + 0x178))
              ;
              puVar5 = *(undefined4 **)(this + 0x200);
              if (puVar5 == (undefined4 *)0x0) {
                uVar13 = 0x2026;
              }
              else {
                lVar17 = *(long *)(puVar5 + -2);
                uVar13 = 0x2026;
                if (1 < (int)lVar17) {
                  if (lVar17 < 1) goto LAB_001035ab;
                  uVar13 = *puVar5;
                }
              }
              uVar14 = (ulong)*(uint *)(this + 0x1d0);
              if (*(uint *)(this + 0x1d0) <= uVar24) goto LAB_00103152;
              (**(code **)(*local_58 + 0x5d8))(local_58,uVar25 * 8 + *(long *)(this + 0x1d8),uVar13)
              ;
              Ref<TextServer>::unref((Ref<TextServer> *)&local_58);
              Ref<TextServer>::Ref
                        ((Ref<TextServer> *)&local_58,(Ref *)(TextServerManager::singleton + 0x178))
              ;
              uVar14 = (ulong)*(uint *)(this + 0x1d0);
              if (*(uint *)(this + 0x1d0) <= uVar24) goto LAB_00103152;
              (**(code **)(*local_58 + 0x6f8))
                        ((double)fVar26,local_58,uVar25 * 8 + *(long *)(this + 0x1d8),uVar19);
              Ref<TextServer>::unref((Ref<TextServer> *)&local_58);
            }
            uVar25 = uVar25 + 1;
          } while ((int)uVar25 < *(int *)(this + 0x1d0));
        }
      }
    }
  }
LAB_001028ee:
  this[0x1e0] = (TextParagraph)0x0;
LAB_001029df:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* TextParagraph::get_line_rid(int) const */

undefined8 __thiscall TextParagraph::get_line_rid(TextParagraph *this,int param_1)

{
  pthread_mutex_t *__mutex;
  uint uVar1;
  undefined8 uVar2;
  code *pcVar3;
  int iVar4;
  
  __mutex = (pthread_mutex_t *)(this + 0x180);
  iVar4 = pthread_mutex_lock(__mutex);
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar4);
  }
  _shape_lines(this);
  if (-1 < param_1) {
    uVar1 = *(uint *)(this + 0x1d0);
    if (param_1 < (int)uVar1) {
      if ((uint)param_1 < uVar1) {
        uVar2 = *(undefined8 *)(*(long *)(this + 0x1d8) + (long)param_1 * 8);
        pthread_mutex_unlock(__mutex);
        return uVar2;
      }
      _err_print_index_error
                ("operator[]","./core/templates/local_vector.h",0xb2,(long)param_1,(ulong)uVar1,
                 "p_index","count","",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
  }
  _err_print_error("get_line_rid","scene/resources/text_paragraph.cpp",0x140,
                   "Condition \"p_line < 0 || p_line >= (int)lines_rid.size()\" is true. Returning: RID()"
                   ,0,0);
  pthread_mutex_unlock(__mutex);
  return 0;
}



/* TextParagraph::get_direction() const */

undefined4 __thiscall TextParagraph::get_direction(TextParagraph *this)

{
  pthread_mutex_t *__mutex;
  code *pcVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  Object *pOVar5;
  
  __mutex = (pthread_mutex_t *)(this + 0x180);
  iVar3 = pthread_mutex_lock(__mutex);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar3);
  }
  _shape_lines(this);
  pOVar5 = *(Object **)(TextServerManager::singleton + 0x178);
  if (pOVar5 != (Object *)0x0) {
    cVar2 = RefCounted::reference();
    if (cVar2 == '\0') {
      pOVar5 = (Object *)0x0;
    }
    uVar4 = (**(code **)(*(long *)pOVar5 + 0x5b0))(pOVar5);
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(pOVar5);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
        Memory::free_static(pOVar5,false);
        pthread_mutex_unlock(__mutex);
        return uVar4;
      }
    }
    pthread_mutex_unlock(__mutex);
    return uVar4;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* TextParagraph::get_orientation() const */

undefined4 __thiscall TextParagraph::get_orientation(TextParagraph *this)

{
  pthread_mutex_t *__mutex;
  code *pcVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  Object *pOVar5;
  
  __mutex = (pthread_mutex_t *)(this + 0x180);
  iVar3 = pthread_mutex_lock(__mutex);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar3);
  }
  _shape_lines(this);
  pOVar5 = *(Object **)(TextServerManager::singleton + 0x178);
  if (pOVar5 != (Object *)0x0) {
    cVar2 = RefCounted::reference();
    if (cVar2 == '\0') {
      pOVar5 = (Object *)0x0;
    }
    uVar4 = (**(code **)(*(long *)pOVar5 + 0x5f0))(pOVar5);
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(pOVar5);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
        Memory::free_static(pOVar5,false);
        pthread_mutex_unlock(__mutex);
        return uVar4;
      }
    }
    pthread_mutex_unlock(__mutex);
    return uVar4;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* TextParagraph::get_non_wrapped_size() const */

undefined8 __thiscall TextParagraph::get_non_wrapped_size(TextParagraph *this)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  Object *pOVar4;
  undefined8 uVar5;
  
  iVar3 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x180));
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar3);
  }
  _shape_lines(this);
  pOVar4 = *(Object **)(TextServerManager::singleton + 0x178);
  if (pOVar4 != (Object *)0x0) {
    cVar2 = RefCounted::reference();
    if (cVar2 == '\0') {
      pOVar4 = (Object *)0x0;
    }
    uVar5 = (**(code **)(*(long *)pOVar4 + 0x720))(pOVar4);
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(pOVar4);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        Memory::free_static(pOVar4,false);
      }
    }
    pthread_mutex_unlock((pthread_mutex_t *)(this + 0x180));
    return uVar5;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* TextParagraph::get_line_count() const */

undefined4 __thiscall TextParagraph::get_line_count(TextParagraph *this)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x180));
  if (iVar2 == 0) {
    _shape_lines(this);
    uVar1 = *(undefined4 *)(this + 0x1d0);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 0x180));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_system_error(iVar2);
}



/* TextParagraph::get_line_objects(int) const */

Array * TextParagraph::get_line_objects(int param_1)

{
  long lVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  uint in_EDX;
  Object *pOVar5;
  TextParagraph *in_RSI;
  undefined4 in_register_0000003c;
  Array *this;
  long in_FS_OFFSET;
  
  this = (Array *)CONCAT44(in_register_0000003c,param_1);
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  iVar4 = pthread_mutex_lock((pthread_mutex_t *)(in_RSI + 0x180));
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar4);
  }
  _shape_lines(in_RSI);
  if (((int)in_EDX < 0) || (*(int *)(in_RSI + 0x1d0) <= (int)in_EDX)) {
    _err_print_error("get_line_objects","scene/resources/text_paragraph.cpp",0x284,
                     "Condition \"p_line < 0 || p_line >= (int)lines_rid.size()\" is true. Returning: Array()"
                     ,0,0);
    Array::Array(this);
  }
  else {
    pOVar5 = *(Object **)(TextServerManager::singleton + 0x178);
    if (pOVar5 == (Object *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    cVar3 = RefCounted::reference();
    if (cVar3 == '\0') {
      pOVar5 = (Object *)0x0;
    }
    if (*(uint *)(in_RSI + 0x1d0) <= in_EDX) {
      _err_print_index_error
                ("operator[]","./core/templates/local_vector.h",0xb2,(long)(int)in_EDX,
                 (ulong)*(uint *)(in_RSI + 0x1d0),"p_index","count","",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    (**(code **)(*(long *)pOVar5 + 0x700))
              (this,pOVar5,*(long *)(in_RSI + 0x1d8) + (long)(int)in_EDX * 8);
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(pOVar5);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
        Memory::free_static(pOVar5,false);
      }
    }
  }
  pthread_mutex_unlock((pthread_mutex_t *)(in_RSI + 0x180));
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TextParagraph::get_line_size(int) const */

undefined8 __thiscall TextParagraph::get_line_size(TextParagraph *this,int param_1)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  Object *pOVar4;
  undefined8 local_30;
  
  iVar3 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x180));
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar3);
  }
  _shape_lines(this);
  if ((param_1 < 0) || (*(int *)(this + 0x1d0) <= param_1)) {
    _err_print_error("get_line_size","scene/resources/text_paragraph.cpp",0x2e7,
                     "Condition \"p_line < 0 || p_line >= (int)lines_rid.size()\" is true. Returning: Size2()"
                     ,0,0);
    local_30 = 0;
  }
  else {
    pOVar4 = *(Object **)(TextServerManager::singleton + 0x178);
    if (pOVar4 == (Object *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    cVar2 = RefCounted::reference();
    if (cVar2 == '\0') {
      pOVar4 = (Object *)0x0;
    }
    if (*(uint *)(this + 0x1d0) <= (uint)param_1) {
      _err_print_index_error
                ("operator[]","./core/templates/local_vector.h",0xb2,(long)param_1,
                 (ulong)*(uint *)(this + 0x1d0),"p_index","count","",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    local_30 = (**(code **)(*(long *)pOVar4 + 0x720))(pOVar4);
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(pOVar4);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        Memory::free_static(pOVar4,false);
      }
    }
  }
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x180));
  return local_30;
}



/* TextParagraph::get_line_range(int) const */

undefined8 __thiscall TextParagraph::get_line_range(TextParagraph *this,int param_1)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  Object *pOVar5;
  
  iVar3 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x180));
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar3);
  }
  _shape_lines(this);
  if ((param_1 < 0) || (*(int *)(this + 0x1d0) <= param_1)) {
    uVar4 = 0;
    _err_print_error("get_line_range","scene/resources/text_paragraph.cpp",0x2ef,
                     "Condition \"p_line < 0 || p_line >= (int)lines_rid.size()\" is true. Returning: Vector2i()"
                     ,0,0);
  }
  else {
    pOVar5 = *(Object **)(TextServerManager::singleton + 0x178);
    if (pOVar5 == (Object *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    cVar2 = RefCounted::reference();
    if (cVar2 == '\0') {
      pOVar5 = (Object *)0x0;
    }
    if (*(uint *)(this + 0x1d0) <= (uint)param_1) {
      _err_print_index_error
                ("operator[]","./core/templates/local_vector.h",0xb2,(long)param_1,
                 (ulong)*(uint *)(this + 0x1d0),"p_index","count","",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    uVar4 = (**(code **)(*(long *)pOVar5 + 0x6b8))(pOVar5);
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(pOVar5);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
        Memory::free_static(pOVar5,false);
      }
    }
  }
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x180));
  return uVar4;
}



/* TextParagraph::get_line_ascent(int) const */

float __thiscall TextParagraph::get_line_ascent(TextParagraph *this,int param_1)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  Object *pOVar4;
  double dVar5;
  float fVar6;
  
  iVar3 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x180));
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar3);
  }
  _shape_lines(this);
  if ((param_1 < 0) || (*(int *)(this + 0x1d0) <= param_1)) {
    fVar6 = 0.0;
    _err_print_error("get_line_ascent","scene/resources/text_paragraph.cpp",0x2f7,
                     "Condition \"p_line < 0 || p_line >= (int)lines_rid.size()\" is true. Returning: 0.f"
                     ,0,0);
  }
  else {
    pOVar4 = *(Object **)(TextServerManager::singleton + 0x178);
    if (pOVar4 == (Object *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    cVar2 = RefCounted::reference();
    if (cVar2 == '\0') {
      pOVar4 = (Object *)0x0;
    }
    if (*(uint *)(this + 0x1d0) <= (uint)param_1) {
      _err_print_index_error
                ("operator[]","./core/templates/local_vector.h",0xb2,(long)param_1,
                 (ulong)*(uint *)(this + 0x1d0),"p_index","count","",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    dVar5 = (double)(**(code **)(*(long *)pOVar4 + 0x728))(pOVar4);
    fVar6 = (float)dVar5;
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(pOVar4);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        Memory::free_static(pOVar4,false);
      }
    }
  }
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x180));
  return fVar6;
}



/* TextParagraph::get_line_descent(int) const */

float __thiscall TextParagraph::get_line_descent(TextParagraph *this,int param_1)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  Object *pOVar4;
  double dVar5;
  float fVar6;
  
  iVar3 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x180));
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar3);
  }
  _shape_lines(this);
  if ((param_1 < 0) || (*(int *)(this + 0x1d0) <= param_1)) {
    fVar6 = 0.0;
    _err_print_error("get_line_descent","scene/resources/text_paragraph.cpp",0x2ff,
                     "Condition \"p_line < 0 || p_line >= (int)lines_rid.size()\" is true. Returning: 0.f"
                     ,0,0);
  }
  else {
    pOVar4 = *(Object **)(TextServerManager::singleton + 0x178);
    if (pOVar4 == (Object *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    cVar2 = RefCounted::reference();
    if (cVar2 == '\0') {
      pOVar4 = (Object *)0x0;
    }
    if (*(uint *)(this + 0x1d0) <= (uint)param_1) {
      _err_print_index_error
                ("operator[]","./core/templates/local_vector.h",0xb2,(long)param_1,
                 (ulong)*(uint *)(this + 0x1d0),"p_index","count","",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    dVar5 = (double)(**(code **)(*(long *)pOVar4 + 0x730))(pOVar4);
    fVar6 = (float)dVar5;
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(pOVar4);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        Memory::free_static(pOVar4,false);
      }
    }
  }
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x180));
  return fVar6;
}



/* TextParagraph::get_line_width(int) const */

float __thiscall TextParagraph::get_line_width(TextParagraph *this,int param_1)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  Object *pOVar4;
  double dVar5;
  float fVar6;
  
  iVar3 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x180));
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar3);
  }
  _shape_lines(this);
  if ((param_1 < 0) || (*(int *)(this + 0x1d0) <= param_1)) {
    fVar6 = 0.0;
    _err_print_error("get_line_width","scene/resources/text_paragraph.cpp",0x307,
                     "Condition \"p_line < 0 || p_line >= (int)lines_rid.size()\" is true. Returning: 0.f"
                     ,0,0);
  }
  else {
    pOVar4 = *(Object **)(TextServerManager::singleton + 0x178);
    if (pOVar4 == (Object *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    cVar2 = RefCounted::reference();
    if (cVar2 == '\0') {
      pOVar4 = (Object *)0x0;
    }
    if (*(uint *)(this + 0x1d0) <= (uint)param_1) {
      _err_print_index_error
                ("operator[]","./core/templates/local_vector.h",0xb2,(long)param_1,
                 (ulong)*(uint *)(this + 0x1d0),"p_index","count","",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    dVar5 = (double)(**(code **)(*(long *)pOVar4 + 0x738))(pOVar4);
    fVar6 = (float)dVar5;
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(pOVar4);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        Memory::free_static(pOVar4,false);
      }
    }
  }
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x180));
  return fVar6;
}



/* TextParagraph::get_line_underline_position(int) const */

float __thiscall TextParagraph::get_line_underline_position(TextParagraph *this,int param_1)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  Object *pOVar4;
  double dVar5;
  float fVar6;
  
  iVar3 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x180));
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar3);
  }
  _shape_lines(this);
  if ((param_1 < 0) || (*(int *)(this + 0x1d0) <= param_1)) {
    fVar6 = 0.0;
    _err_print_error("get_line_underline_position","scene/resources/text_paragraph.cpp",0x30f,
                     "Condition \"p_line < 0 || p_line >= (int)lines_rid.size()\" is true. Returning: 0.f"
                     ,0,0);
  }
  else {
    pOVar4 = *(Object **)(TextServerManager::singleton + 0x178);
    if (pOVar4 == (Object *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    cVar2 = RefCounted::reference();
    if (cVar2 == '\0') {
      pOVar4 = (Object *)0x0;
    }
    if (*(uint *)(this + 0x1d0) <= (uint)param_1) {
      _err_print_index_error
                ("operator[]","./core/templates/local_vector.h",0xb2,(long)param_1,
                 (ulong)*(uint *)(this + 0x1d0),"p_index","count","",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    dVar5 = (double)(**(code **)(*(long *)pOVar4 + 0x740))(pOVar4);
    fVar6 = (float)dVar5;
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(pOVar4);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        Memory::free_static(pOVar4,false);
      }
    }
  }
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x180));
  return fVar6;
}



/* TextParagraph::get_line_underline_thickness(int) const */

float __thiscall TextParagraph::get_line_underline_thickness(TextParagraph *this,int param_1)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  Object *pOVar4;
  double dVar5;
  float fVar6;
  
  iVar3 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x180));
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar3);
  }
  _shape_lines(this);
  if ((param_1 < 0) || (*(int *)(this + 0x1d0) <= param_1)) {
    fVar6 = 0.0;
    _err_print_error("get_line_underline_thickness","scene/resources/text_paragraph.cpp",0x317,
                     "Condition \"p_line < 0 || p_line >= (int)lines_rid.size()\" is true. Returning: 0.f"
                     ,0,0);
  }
  else {
    pOVar4 = *(Object **)(TextServerManager::singleton + 0x178);
    if (pOVar4 == (Object *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    cVar2 = RefCounted::reference();
    if (cVar2 == '\0') {
      pOVar4 = (Object *)0x0;
    }
    if (*(uint *)(this + 0x1d0) <= (uint)param_1) {
      _err_print_index_error
                ("operator[]","./core/templates/local_vector.h",0xb2,(long)param_1,
                 (ulong)*(uint *)(this + 0x1d0),"p_index","count","",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    dVar5 = (double)(**(code **)(*(long *)pOVar4 + 0x748))(pOVar4);
    fVar6 = (float)dVar5;
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(pOVar4);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        Memory::free_static(pOVar4,false);
      }
    }
  }
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x180));
  return fVar6;
}



/* TextParagraph::get_size() const */

undefined8 __thiscall TextParagraph::get_size(TextParagraph *this)

{
  TextParagraph *pTVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  Object *pOVar9;
  long *plVar10;
  long lVar11;
  long in_FS_OFFSET;
  float fVar12;
  float extraout_XMM0_Db;
  undefined8 uVar13;
  float extraout_XMM0_Db_00;
  float local_80;
  float local_7c;
  float local_78;
  Ref<TextServer> *local_60;
  float local_50;
  float local_4c;
  long *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar7 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x180));
  if (iVar7 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar7);
  }
  _shape_lines(this);
  pOVar9 = *(Object **)(TextServerManager::singleton + 0x178);
  if (pOVar9 != (Object *)0x0) {
    cVar6 = RefCounted::reference();
    if (cVar6 == '\0') {
      pOVar9 = (Object *)0x0;
    }
    pTVar1 = this + 0x1a8;
    iVar7 = (**(code **)(*(long *)pOVar9 + 0x5f0))(pOVar9);
    cVar6 = RefCounted::unreference();
    if ((cVar6 != '\0') && (cVar6 = predelete_handler(pOVar9), cVar6 != '\0')) {
      (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
      Memory::free_static(pOVar9,false);
    }
    plVar10 = *(long **)(TextServerManager::singleton + 0x178);
    local_48 = plVar10;
    if (iVar7 == 0) {
      if ((plVar10 == (long *)0x0) || (cVar6 = RefCounted::reference(), cVar6 == '\0')) {
        local_48 = (long *)0x0;
        plVar10 = (long *)0x0;
      }
      fVar12 = (float)(**(code **)(*plVar10 + 0x720))(plVar10,pTVar1);
      local_50 = fVar12 + *(float *)(this + 0x1bc) + *(float *)(this + 0x1b4);
      Ref<TextServer>::unref((Ref<TextServer> *)&local_48);
      plVar10 = *(long **)(TextServerManager::singleton + 0x178);
      if ((plVar10 == (long *)0x0) ||
         (local_48 = plVar10, cVar6 = RefCounted::reference(), cVar6 == '\0')) {
        local_48 = (long *)0x0;
        plVar10 = (long *)0x0;
      }
      (**(code **)(*plVar10 + 0x720))(plVar10,pTVar1);
      local_4c = extraout_XMM0_Db + *(float *)(this + 0x1c0) + *(float *)(this + 0x1b8);
      Ref<TextServer>::unref((Ref<TextServer> *)&local_48);
    }
    else {
      if ((plVar10 == (long *)0x0) || (cVar6 = RefCounted::reference(), cVar6 == '\0')) {
        local_48 = (long *)0x0;
        plVar10 = (long *)0x0;
      }
      (**(code **)(*plVar10 + 0x720))(plVar10,pTVar1);
      local_50 = extraout_XMM0_Db_00 + *(float *)(this + 0x1c0) + *(float *)(this + 0x1b8);
      Ref<TextServer>::unref((Ref<TextServer> *)&local_48);
      plVar10 = *(long **)(TextServerManager::singleton + 0x178);
      if ((plVar10 == (long *)0x0) ||
         (local_48 = plVar10, cVar6 = RefCounted::reference(), cVar6 == '\0')) {
        local_48 = (long *)0x0;
        plVar10 = (long *)0x0;
      }
      fVar12 = (float)(**(code **)(*plVar10 + 0x720))(plVar10,pTVar1);
      local_4c = fVar12 + *(float *)(this + 0x1bc) + *(float *)(this + 0x1b4);
      Ref<TextServer>::unref((Ref<TextServer> *)&local_48);
    }
    local_60 = (Ref<TextServer> *)&local_48;
    iVar7 = *(int *)(this + 0x1ec);
    iVar2 = *(int *)(this + 0x1d0);
    iVar5 = iVar7;
    if (iVar2 <= iVar7) {
      iVar5 = iVar2;
    }
    if (-1 < iVar7) {
      iVar2 = iVar5;
    }
    if (iVar2 < 1) {
      fVar12 = 0.0;
      local_80 = 0.0;
    }
    else {
      fVar12 = 0.0;
      lVar11 = 0;
      local_80 = 0.0;
      do {
        pOVar9 = *(Object **)(TextServerManager::singleton + 0x178);
        if (pOVar9 == (Object *)0x0) goto TextParagraph_get_size;
        cVar6 = RefCounted::reference();
        uVar3 = *(uint *)(this + 0x1d0);
        uVar8 = (uint)lVar11;
        if (cVar6 == '\0') {
          pOVar9 = (Object *)0x0;
        }
        if (uVar3 <= uVar8) {
LAB_00104a68:
          _err_print_index_error
                    ("operator[]","./core/templates/local_vector.h",0xb2,lVar11,(ulong)uVar3,
                     "p_index","count","",false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        uVar13 = (**(code **)(*(long *)pOVar9 + 0x720))(pOVar9);
        local_7c = (float)uVar13;
        local_78 = (float)((ulong)uVar13 >> 0x20);
        cVar6 = RefCounted::unreference();
        if ((cVar6 != '\0') && (cVar6 = predelete_handler(pOVar9), cVar6 != '\0')) {
          (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
          Memory::free_static(pOVar9,false);
        }
        pOVar9 = *(Object **)(TextServerManager::singleton + 0x178);
        if (pOVar9 == (Object *)0x0) goto TextParagraph_get_size;
        cVar6 = RefCounted::reference();
        uVar3 = *(uint *)(this + 0x1d0);
        if (cVar6 == '\0') {
          pOVar9 = (Object *)0x0;
        }
        if (uVar3 <= uVar8) goto LAB_00104a68;
        iVar7 = (**(code **)(*(long *)pOVar9 + 0x5f0))(pOVar9);
        cVar6 = RefCounted::unreference();
        if ((cVar6 != '\0') && (cVar6 = predelete_handler(pOVar9), cVar6 != '\0')) {
          (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
          Memory::free_static(pOVar9,false);
        }
        if (iVar7 == 0) {
          if ((0.0 < local_50) && ((int)uVar8 <= *(int *)(this + 0x1b0))) {
            local_7c = local_7c + local_50;
          }
          if (local_80 <= local_7c) {
            local_80 = local_7c;
          }
          fVar12 = fVar12 + local_78;
          if (iVar2 - 1U != uVar8) {
            fVar12 = fVar12 + *(float *)(this + 0x1e4);
          }
        }
        else {
          if ((0.0 < local_50) && ((int)uVar8 <= *(int *)(this + 0x1b0))) {
            local_78 = local_78 + local_50;
          }
          local_80 = local_80 + local_7c;
          if (fVar12 <= local_78) {
            fVar12 = local_78;
          }
          if (iVar2 - 1U != uVar8) {
            local_80 = local_80 + *(float *)(this + 0x1e4);
          }
        }
        lVar11 = lVar11 + 1;
      } while (iVar2 != lVar11);
    }
    if (0.0 < local_50) {
      Ref<TextServer>::Ref(local_60,(Ref *)(TextServerManager::singleton + 0x178));
      iVar7 = (**(code **)(*local_48 + 0x5f0))(local_48,pTVar1);
      Ref<TextServer>::unref(local_60);
      if (iVar7 == 0) {
        if (fVar12 <= local_4c) {
          fVar12 = local_4c;
        }
      }
      else if (local_80 <= local_4c) {
        local_80 = local_4c;
      }
    }
    pthread_mutex_unlock((pthread_mutex_t *)(this + 0x180));
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return CONCAT44(fVar12,local_80);
  }
TextParagraph_get_size:
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TextParagraph::get_line_object_rect(int, Variant) const */

undefined1  [16] __thiscall
TextParagraph::get_line_object_rect(TextParagraph *this,uint param_1,undefined8 param_3)

{
  TextParagraph *pTVar1;
  long lVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  ulong uVar10;
  Object *pOVar11;
  uint uVar12;
  long in_FS_OFFSET;
  bool bVar13;
  float extraout_XMM0_Db;
  double dVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  float local_7c;
  float local_58;
  long *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar5 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x180));
  if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar5);
  }
  _shape_lines(this);
  if (((int)param_1 < 0) || (*(int *)(this + 0x1d0) <= (int)param_1)) {
    uVar9 = 0;
    _err_print_error("get_line_object_rect","scene/resources/text_paragraph.cpp",0x28c,
                     "Condition \"p_line < 0 || p_line >= (int)lines_rid.size()\" is true. Returning: Rect2()"
                     ,0,0);
    uVar15 = 0;
  }
  else {
    plVar8 = *(long **)(TextServerManager::singleton + 0x178);
    if ((plVar8 == (long *)0x0) ||
       (local_48 = plVar8, cVar4 = RefCounted::reference(), cVar4 == '\0')) {
      local_48 = (long *)0x0;
      plVar8 = (long *)0x0;
    }
    pTVar1 = this + 0x1a8;
    iVar5 = (**(code **)(*plVar8 + 0x5f0))(plVar8,pTVar1);
    Ref<TextServer>::unref((Ref<TextServer> *)&local_48);
    if (iVar5 == 0) {
      Ref<TextServer>::Ref
                ((Ref<TextServer> *)&local_48,(Ref *)(TextServerManager::singleton + 0x178));
      fVar18 = (float)(**(code **)(*local_48 + 0x720))(local_48,pTVar1);
      local_58 = fVar18 + *(float *)(this + 0x1bc) + *(float *)(this + 0x1b4);
      Ref<TextServer>::unref((Ref<TextServer> *)&local_48);
    }
    else {
      Ref<TextServer>::Ref
                ((Ref<TextServer> *)&local_48,(Ref *)(TextServerManager::singleton + 0x178));
      (**(code **)(*local_48 + 0x720))(local_48,pTVar1);
      local_58 = extraout_XMM0_Db + *(float *)(this + 0x1c0) + *(float *)(this + 0x1b8);
      Ref<TextServer>::unref((Ref<TextServer> *)&local_48);
    }
    lVar6 = (long)(int)param_1;
    fVar18 = 0.0;
    fVar16 = 0.0;
    lVar7 = 0;
    do {
      local_7c = *(float *)(this + 0x1e8);
      pOVar11 = *(Object **)(TextServerManager::singleton + 0x178);
      if (pOVar11 == (Object *)0x0) {
TextParagraph_get_line_object_rect:
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      uVar12 = (uint)lVar7;
      cVar4 = RefCounted::reference();
      uVar10 = (ulong)*(uint *)(this + 0x1d0);
      if (cVar4 == '\0') {
        pOVar11 = (Object *)0x0;
      }
      if (*(uint *)(this + 0x1d0) <= uVar12) goto LAB_001051ae;
      lVar2 = lVar7 * 8;
      iVar5 = (**(code **)(*(long *)pOVar11 + 0x5f0))(pOVar11);
      cVar4 = RefCounted::unreference();
      if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar11), cVar4 != '\0')) {
        (**(code **)(*(long *)pOVar11 + 0x140))(pOVar11);
        Memory::free_static(pOVar11,false);
      }
      plVar8 = *(long **)(TextServerManager::singleton + 0x178);
      local_48 = plVar8;
      if (iVar5 == 0) {
        if ((plVar8 == (long *)0x0) || (cVar4 = RefCounted::reference(), cVar4 == '\0')) {
          local_48 = (long *)0x0;
          plVar8 = (long *)0x0;
        }
        uVar10 = (ulong)*(uint *)(this + 0x1d0);
        if (*(uint *)(this + 0x1d0) <= uVar12) goto LAB_001051ae;
        dVar14 = (double)(**(code **)(*plVar8 + 0x728))(plVar8,*(long *)(this + 0x1d8) + lVar2);
        fVar18 = (float)(dVar14 + (double)fVar18);
        Ref<TextServer>::unref((Ref<TextServer> *)&local_48);
        fVar16 = 0.0;
        if ((int)uVar12 <= *(int *)(this + 0x1b0)) {
          Ref<TextServer>::Ref
                    ((Ref<TextServer> *)&local_48,(Ref *)(TextServerManager::singleton + 0x178));
          iVar5 = (**(code **)(*local_48 + 0x5b8))(local_48,pTVar1);
          Ref<TextServer>::unref((Ref<TextServer> *)&local_48);
          if (iVar5 == 1) {
            fVar16 = 0.0 - local_58;
          }
          local_7c = local_7c - local_58;
        }
      }
      else {
        if ((plVar8 == (long *)0x0) || (cVar4 = RefCounted::reference(), cVar4 == '\0')) {
          local_48 = (long *)0x0;
          plVar8 = (long *)0x0;
        }
        uVar10 = (ulong)*(uint *)(this + 0x1d0);
        if (*(uint *)(this + 0x1d0) <= uVar12) goto LAB_001051ae;
        dVar14 = (double)(**(code **)(*plVar8 + 0x728))(plVar8,*(long *)(this + 0x1d8) + lVar2);
        fVar16 = (float)(dVar14 + (double)fVar16);
        Ref<TextServer>::unref((Ref<TextServer> *)&local_48);
        fVar18 = 0.0;
        if ((int)uVar12 <= *(int *)(this + 0x1b0)) {
          Ref<TextServer>::Ref
                    ((Ref<TextServer> *)&local_48,(Ref *)(TextServerManager::singleton + 0x178));
          iVar5 = (**(code **)(*local_48 + 0x5b8))(local_48,pTVar1);
          Ref<TextServer>::unref((Ref<TextServer> *)&local_48);
          if (iVar5 == 1) {
            fVar18 = 0.0 - local_58;
          }
          local_7c = local_7c - local_58;
        }
      }
      pOVar11 = *(Object **)(TextServerManager::singleton + 0x178);
      if (pOVar11 == (Object *)0x0) goto TextParagraph_get_line_object_rect;
      cVar4 = RefCounted::reference();
      uVar10 = (ulong)*(uint *)(this + 0x1d0);
      if (cVar4 == '\0') {
        pOVar11 = (Object *)0x0;
      }
      if (*(uint *)(this + 0x1d0) <= uVar12) goto LAB_001051ae;
      dVar14 = (double)(**(code **)(*(long *)pOVar11 + 0x738))(pOVar11);
      cVar4 = RefCounted::unreference();
      if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar11), cVar4 != '\0')) {
        (**(code **)(*(long *)pOVar11 + 0x140))(pOVar11);
        Memory::free_static(pOVar11,false);
      }
      if (*(float *)(this + 0x1e8) <= 0.0) goto LAB_00104f50;
      iVar5 = *(int *)(this + 0x20c);
      fVar17 = (float)dVar14;
      if (iVar5 == 2) {
LAB_00105308:
        Ref<TextServer>::Ref
                  ((Ref<TextServer> *)&local_48,(Ref *)(TextServerManager::singleton + 0x178));
        uVar10 = (ulong)*(uint *)(this + 0x1d0);
        if (*(uint *)(this + 0x1d0) <= uVar12) goto LAB_001051ae;
        iVar5 = (**(code **)(*local_48 + 0x5f0))(local_48,*(long *)(this + 0x1d8) + lVar2);
        Ref<TextServer>::unref((Ref<TextServer> *)&local_48);
        if (iVar5 == 0) {
          fVar16 = (local_7c - fVar17) + fVar16;
        }
        else {
          fVar18 = (local_7c - fVar17) + fVar18;
        }
      }
      else if (iVar5 == 3) {
LAB_00104f01:
        Ref<TextServer>::Ref
                  ((Ref<TextServer> *)&local_48,(Ref *)(TextServerManager::singleton + 0x178));
        uVar10 = (ulong)*(uint *)(this + 0x1d0);
        if (*(uint *)(this + 0x1d0) <= uVar12) goto LAB_001051ae;
        iVar5 = (**(code **)(*local_48 + 0x5b8))(local_48,*(long *)(this + 0x1d8) + lVar2);
        Ref<TextServer>::unref((Ref<TextServer> *)&local_48);
        if (iVar5 == 2) goto LAB_00105308;
      }
      else if (iVar5 == 1) {
        if (local_7c < fVar17) goto LAB_00104f01;
        Ref<TextServer>::Ref
                  ((Ref<TextServer> *)&local_48,(Ref *)(TextServerManager::singleton + 0x178));
        uVar10 = (ulong)*(uint *)(this + 0x1d0);
        if (*(uint *)(this + 0x1d0) <= uVar12) goto LAB_001051ae;
        iVar5 = (**(code **)(*local_48 + 0x5f0))(local_48,*(long *)(this + 0x1d8) + lVar2);
        Ref<TextServer>::unref((Ref<TextServer> *)&local_48);
        dVar14 = (double)(local_7c - fVar17) * __LC83;
        if (iVar5 == 0) {
          if ((double)((ulong)dVar14 & _LC87) < _LC84) {
            dVar14 = (double)((ulong)((double)(long)dVar14 -
                                     (double)(-(ulong)(dVar14 < (double)(long)dVar14) & _LC86)) |
                             ~_LC87 & (ulong)dVar14);
          }
          fVar16 = (float)((double)fVar16 + dVar14);
        }
        else {
          if ((double)((ulong)dVar14 & _LC87) < _LC84) {
            dVar14 = (double)((ulong)((double)(long)dVar14 -
                                     (double)(-(ulong)(dVar14 < (double)(long)dVar14) & _LC86)) |
                             ~_LC87 & (ulong)dVar14);
          }
          fVar18 = (float)((double)fVar18 + dVar14);
        }
      }
LAB_00104f50:
      if (lVar7 == lVar6) break;
      plVar8 = *(long **)(TextServerManager::singleton + 0x178);
      if ((plVar8 == (long *)0x0) ||
         (local_48 = plVar8, cVar4 = RefCounted::reference(), cVar4 == '\0')) {
        local_48 = (long *)0x0;
        plVar8 = (long *)0x0;
      }
      uVar10 = (ulong)*(uint *)(this + 0x1d0);
      if (*(uint *)(this + 0x1d0) <= uVar12) goto LAB_001051ae;
      iVar5 = (**(code **)(*plVar8 + 0x5f0))(plVar8,*(long *)(this + 0x1d8) + lVar2);
      Ref<TextServer>::unref((Ref<TextServer> *)&local_48);
      if (iVar5 == 0) {
        Ref<TextServer>::Ref
                  ((Ref<TextServer> *)&local_48,(Ref *)(TextServerManager::singleton + 0x178));
        uVar10 = (ulong)*(uint *)(this + 0x1d0);
        if (*(uint *)(this + 0x1d0) <= uVar12) goto LAB_001051ae;
        dVar14 = (double)(**(code **)(*local_48 + 0x730))(local_48,*(long *)(this + 0x1d8) + lVar2);
        fVar18 = (float)((double)fVar18 + (double)*(float *)(this + 0x1e4) + dVar14);
        Ref<TextServer>::unref((Ref<TextServer> *)&local_48);
        fVar16 = 0.0;
      }
      else {
        Ref<TextServer>::Ref
                  ((Ref<TextServer> *)&local_48,(Ref *)(TextServerManager::singleton + 0x178));
        uVar10 = (ulong)*(uint *)(this + 0x1d0);
        if (*(uint *)(this + 0x1d0) <= uVar12) goto LAB_001051ae;
        dVar14 = (double)(**(code **)(*local_48 + 0x730))(local_48,*(long *)(this + 0x1d8) + lVar2);
        fVar16 = (float)((double)fVar16 + (double)*(float *)(this + 0x1e4) + dVar14);
        Ref<TextServer>::unref((Ref<TextServer> *)&local_48);
        fVar18 = 0.0;
      }
      bVar13 = lVar7 != lVar6;
      lVar7 = lVar7 + 1;
    } while (bVar13);
    Ref<TextServer>::Ref((Ref<TextServer> *)&local_48,(Ref *)(TextServerManager::singleton + 0x178))
    ;
    uVar10 = (ulong)*(uint *)(this + 0x1d0);
    lVar7 = lVar6;
    if (*(uint *)(this + 0x1d0) <= param_1) {
LAB_001051ae:
      _err_print_index_error
                ("operator[]","./core/templates/local_vector.h",0xb2,lVar7,uVar10,"p_index","count",
                 "",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    auVar19 = (**(code **)(*local_48 + 0x708))(local_48,*(long *)(this + 0x1d8) + lVar6 * 8,param_3)
    ;
    uVar15 = auVar19._8_8_;
    uVar9 = CONCAT44(fVar18 + auVar19._4_4_,fVar16 + auVar19._0_4_);
    Ref<TextServer>::unref((Ref<TextServer> *)&local_48);
  }
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x180));
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  auVar19._8_8_ = uVar15;
  auVar19._0_8_ = uVar9;
  return auVar19;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TextParagraph::draw(RID, Vector2 const&, Color const&, Color const&) const */

void __thiscall
TextParagraph::draw(TextParagraph *this,undefined8 param_2,float *param_3,undefined8 param_4,
                   undefined8 param_5)

{
  TextParagraph *pTVar1;
  long lVar2;
  int iVar3;
  code *pcVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  uint uVar10;
  long lVar11;
  Object *pOVar12;
  long in_FS_OFFSET;
  float fVar13;
  float extraout_XMM0_Db;
  double dVar14;
  float fVar15;
  float local_90;
  undefined8 local_70 [2];
  long *local_60;
  long *local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_70[0] = param_2;
  iVar6 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x180));
  if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar6);
  }
  _shape_lines(this);
  local_48 = *(undefined8 *)param_3;
  plVar8 = *(long **)(TextServerManager::singleton + 0x178);
  if ((plVar8 == (long *)0x0) || (local_58 = plVar8, cVar5 = RefCounted::reference(), cVar5 == '\0')
     ) {
    local_58 = (long *)0x0;
    plVar8 = (long *)0x0;
  }
  pTVar1 = this + 0x1a8;
  iVar6 = (**(code **)(*plVar8 + 0x5f0))(plVar8,pTVar1);
  Ref<TextServer>::unref((Ref<TextServer> *)&local_58);
  if (iVar6 == 0) {
    Ref<TextServer>::Ref((Ref<TextServer> *)&local_58,(Ref *)(TextServerManager::singleton + 0x178))
    ;
    fVar13 = (float)(**(code **)(*local_58 + 0x720))(local_58,pTVar1);
    fVar13 = fVar13 + *(float *)(this + 0x1bc) + *(float *)(this + 0x1b4);
    Ref<TextServer>::unref((Ref<TextServer> *)&local_58);
  }
  else {
    Ref<TextServer>::Ref((Ref<TextServer> *)&local_58,(Ref *)(TextServerManager::singleton + 0x178))
    ;
    (**(code **)(*local_58 + 0x720))(local_58,pTVar1);
    fVar13 = extraout_XMM0_Db + *(float *)(this + 0x1c0) + *(float *)(this + 0x1b8);
    Ref<TextServer>::unref((Ref<TextServer> *)&local_58);
  }
  if (0.0 < fVar13) {
    local_90 = (float)local_48;
    local_48._4_4_ = (float)((ulong)local_48 >> 0x20);
    fVar15 = local_48._4_4_;
    Ref<TextServer>::Ref((Ref<TextServer> *)&local_58,(Ref *)(TextServerManager::singleton + 0x178))
    ;
    iVar6 = (**(code **)(*local_58 + 0x5b8))(local_58,pTVar1);
    Ref<TextServer>::unref((Ref<TextServer> *)&local_58);
    if (iVar6 == 2) {
      Ref<TextServer>::Ref
                ((Ref<TextServer> *)&local_58,(Ref *)(TextServerManager::singleton + 0x178));
      iVar6 = (**(code **)(*local_58 + 0x5f0))(local_58,pTVar1);
      Ref<TextServer>::unref((Ref<TextServer> *)&local_58);
      if (iVar6 == 0) {
        local_90 = (*(float *)(this + 0x1e8) - fVar13) + local_90;
      }
      else {
        fVar15 = (*(float *)(this + 0x1e8) - fVar13) + fVar15;
      }
    }
    Ref<TextServer>::Ref((Ref<TextServer> *)&local_60,(Ref *)(TextServerManager::singleton + 0x178))
    ;
    pcVar4 = *(code **)(*local_60 + 0x7b0);
    Ref<TextServer>::Ref((Ref<TextServer> *)&local_58,(Ref *)(TextServerManager::singleton + 0x178))
    ;
    dVar14 = (double)(**(code **)(*local_58 + 0x728))(local_58,pTVar1);
    local_50 = CONCAT44((float)((double)*(float *)(this + 0x1c0) + dVar14 +
                               (double)(_LC89 * *(float *)(this + 0x1b8))) + fVar15,local_90 + 0.0);
    (*pcVar4)(_LC90,_LC90,local_60,pTVar1,local_70,&local_50,param_5);
    Ref<TextServer>::unref((Ref<TextServer> *)&local_58);
    Ref<TextServer>::unref((Ref<TextServer> *)&local_60);
  }
  iVar6 = *(int *)(this + 0x1ec);
  iVar3 = *(int *)(this + 0x1d0);
  lVar11 = (long)iVar6;
  if (iVar3 <= iVar6) {
    lVar11 = (long)iVar3;
  }
  lVar7 = (long)iVar3;
  if (-1 < iVar6) {
    lVar7 = lVar11;
  }
  if (0 < (int)lVar7) {
    lVar11 = 0;
    do {
      local_90 = *(float *)(this + 0x1e8);
      pOVar12 = *(Object **)(TextServerManager::singleton + 0x178);
      if (pOVar12 == (Object *)0x0) goto TextParagraph_draw;
      uVar10 = (uint)lVar11;
      cVar5 = RefCounted::reference();
      uVar9 = (ulong)*(uint *)(this + 0x1d0);
      if (cVar5 == '\0') {
        pOVar12 = (Object *)0x0;
      }
      if (*(uint *)(this + 0x1d0) <= uVar10) goto LAB_00105dd0;
      lVar2 = lVar11 * 8;
      iVar6 = (**(code **)(*(long *)pOVar12 + 0x5f0))(pOVar12);
      cVar5 = RefCounted::unreference();
      if ((cVar5 != '\0') && (cVar5 = predelete_handler(pOVar12), cVar5 != '\0')) {
        (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
        Memory::free_static(pOVar12,false);
      }
      if (iVar6 == 0) {
        local_48 = CONCAT44(local_48._4_4_,*param_3);
        Ref<TextServer>::Ref
                  ((Ref<TextServer> *)&local_58,(Ref *)(TextServerManager::singleton + 0x178));
        uVar9 = (ulong)*(uint *)(this + 0x1d0);
        if (*(uint *)(this + 0x1d0) <= uVar10) goto LAB_00105dd0;
        dVar14 = (double)(**(code **)(*local_58 + 0x728))(local_58,*(long *)(this + 0x1d8) + lVar2);
        local_48 = CONCAT44((float)((double)local_48._4_4_ + dVar14),(float)local_48);
        Ref<TextServer>::unref((Ref<TextServer> *)&local_58);
        if ((int)uVar10 <= *(int *)(this + 0x1b0)) {
          Ref<TextServer>::Ref
                    ((Ref<TextServer> *)&local_58,(Ref *)(TextServerManager::singleton + 0x178));
          iVar6 = (**(code **)(*local_58 + 0x5b8))(local_58,pTVar1);
          Ref<TextServer>::unref((Ref<TextServer> *)&local_58);
          if (iVar6 == 1) {
            local_48 = CONCAT44(local_48._4_4_,(float)local_48 - fVar13);
          }
          local_90 = local_90 - fVar13;
        }
      }
      else {
        local_48 = CONCAT44(param_3[1],(float)local_48);
        Ref<TextServer>::Ref
                  ((Ref<TextServer> *)&local_58,(Ref *)(TextServerManager::singleton + 0x178));
        uVar9 = (ulong)*(uint *)(this + 0x1d0);
        if (*(uint *)(this + 0x1d0) <= uVar10) goto LAB_00105dd0;
        dVar14 = (double)(**(code **)(*local_58 + 0x728))(local_58,*(long *)(this + 0x1d8) + lVar2);
        local_48 = CONCAT44(local_48._4_4_,(float)((double)(float)local_48 + dVar14));
        Ref<TextServer>::unref((Ref<TextServer> *)&local_58);
        if ((int)uVar10 <= *(int *)(this + 0x1b0)) {
          Ref<TextServer>::Ref
                    ((Ref<TextServer> *)&local_58,(Ref *)(TextServerManager::singleton + 0x178));
          iVar6 = (**(code **)(*local_58 + 0x5b8))(local_58,pTVar1);
          Ref<TextServer>::unref((Ref<TextServer> *)&local_58);
          if (iVar6 == 1) {
            local_48 = CONCAT44(local_48._4_4_ - fVar13,(float)local_48);
          }
          local_90 = local_90 - fVar13;
        }
      }
      pOVar12 = *(Object **)(TextServerManager::singleton + 0x178);
      if (pOVar12 == (Object *)0x0) goto TextParagraph_draw;
      cVar5 = RefCounted::reference();
      uVar9 = (ulong)*(uint *)(this + 0x1d0);
      if (cVar5 == '\0') {
        pOVar12 = (Object *)0x0;
      }
      if (*(uint *)(this + 0x1d0) <= uVar10) goto LAB_00105dd0;
      dVar14 = (double)(**(code **)(*(long *)pOVar12 + 0x738))(pOVar12);
      cVar5 = RefCounted::unreference();
      if ((cVar5 != '\0') && (cVar5 = predelete_handler(pOVar12), cVar5 != '\0')) {
        (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
        Memory::free_static(pOVar12,false);
      }
      if (*(float *)(this + 0x1e8) <= 0.0) goto LAB_001059e5;
      iVar6 = *(int *)(this + 0x20c);
      fVar15 = (float)dVar14;
      if (iVar6 == 2) {
LAB_00105fa0:
        Ref<TextServer>::Ref
                  ((Ref<TextServer> *)&local_58,(Ref *)(TextServerManager::singleton + 0x178));
        uVar9 = (ulong)*(uint *)(this + 0x1d0);
        if (*(uint *)(this + 0x1d0) <= uVar10) goto LAB_00105dd0;
        iVar6 = (**(code **)(*local_58 + 0x5f0))(local_58,*(long *)(this + 0x1d8) + lVar2);
        Ref<TextServer>::unref((Ref<TextServer> *)&local_58);
        if (iVar6 == 0) {
          local_48 = CONCAT44(local_48._4_4_,(local_90 - fVar15) + (float)local_48);
        }
        else {
          local_48 = CONCAT44((local_90 - fVar15) + local_48._4_4_,(float)local_48);
        }
      }
      else if (iVar6 == 3) {
LAB_00105998:
        Ref<TextServer>::Ref
                  ((Ref<TextServer> *)&local_58,(Ref *)(TextServerManager::singleton + 0x178));
        uVar9 = (ulong)*(uint *)(this + 0x1d0);
        if (*(uint *)(this + 0x1d0) <= uVar10) goto LAB_00105dd0;
        iVar6 = (**(code **)(*local_58 + 0x5b8))(local_58,*(long *)(this + 0x1d8) + lVar2);
        Ref<TextServer>::unref((Ref<TextServer> *)&local_58);
        if (iVar6 == 2) goto LAB_00105fa0;
      }
      else if (iVar6 == 1) {
        if (local_90 < fVar15) goto LAB_00105998;
        Ref<TextServer>::Ref
                  ((Ref<TextServer> *)&local_58,(Ref *)(TextServerManager::singleton + 0x178));
        uVar9 = (ulong)*(uint *)(this + 0x1d0);
        if (*(uint *)(this + 0x1d0) <= uVar10) goto LAB_00105dd0;
        iVar6 = (**(code **)(*local_58 + 0x5f0))(local_58,*(long *)(this + 0x1d8) + lVar2);
        Ref<TextServer>::unref((Ref<TextServer> *)&local_58);
        dVar14 = (double)(local_90 - fVar15) * __LC83;
        if (iVar6 == 0) {
          if ((double)((ulong)dVar14 & _LC87) < _LC84) {
            dVar14 = (double)((ulong)((double)(long)dVar14 -
                                     (double)(-(ulong)(dVar14 < (double)(long)dVar14) & _LC86)) |
                             ~_LC87 & (ulong)dVar14);
          }
          local_48 = CONCAT44(local_48._4_4_,(float)(dVar14 + (double)(float)local_48));
        }
        else {
          if ((double)((ulong)dVar14 & _LC87) < _LC84) {
            dVar14 = (double)((ulong)((double)(long)dVar14 -
                                     (double)(-(ulong)(dVar14 < (double)(long)dVar14) & _LC86)) |
                             ~_LC87 & (ulong)dVar14);
          }
          local_48 = CONCAT44((float)(dVar14 + (double)local_48._4_4_),(float)local_48);
        }
      }
LAB_001059e5:
      pOVar12 = *(Object **)(TextServerManager::singleton + 0x178);
      if (pOVar12 == (Object *)0x0) {
TextParagraph_draw:
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      cVar5 = RefCounted::reference();
      uVar9 = (ulong)*(uint *)(this + 0x1d0);
      if (cVar5 == '\0') {
        pOVar12 = (Object *)0x0;
      }
      if (*(uint *)(this + 0x1d0) <= uVar10) {
LAB_00105dd0:
        _err_print_index_error
                  ("operator[]","./core/templates/local_vector.h",0xb2,lVar11,uVar9,"p_index",
                   "count","",false,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      iVar6 = (**(code **)(*(long *)pOVar12 + 0x5f0))(pOVar12);
      cVar5 = RefCounted::unreference();
      if ((cVar5 != '\0') && (cVar5 = predelete_handler(pOVar12), cVar5 != '\0')) {
        (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
        Memory::free_static(pOVar12,false);
      }
      if (iVar6 == 0) {
        fVar15 = *param_3 - (float)local_48;
      }
      else {
        fVar15 = param_3[1] - local_48._4_4_;
      }
      if (fVar15 < 0.0) {
        fVar15 = 0.0;
      }
      plVar8 = *(long **)(TextServerManager::singleton + 0x178);
      if ((plVar8 == (long *)0x0) ||
         (local_58 = plVar8, cVar5 = RefCounted::reference(), cVar5 == '\0')) {
        local_58 = (long *)0x0;
        plVar8 = (long *)0x0;
      }
      uVar9 = (ulong)*(uint *)(this + 0x1d0);
      if (*(uint *)(this + 0x1d0) <= uVar10) goto LAB_00105dd0;
      (**(code **)(*plVar8 + 0x7b0))
                ((double)fVar15,(double)(local_90 + fVar15),plVar8,*(long *)(this + 0x1d8) + lVar2,
                 local_70,&local_48,param_4);
      Ref<TextServer>::unref((Ref<TextServer> *)&local_58);
      plVar8 = *(long **)(TextServerManager::singleton + 0x178);
      if ((plVar8 == (long *)0x0) ||
         (local_58 = plVar8, cVar5 = RefCounted::reference(), cVar5 == '\0')) {
        local_58 = (long *)0x0;
        plVar8 = (long *)0x0;
      }
      uVar9 = (ulong)*(uint *)(this + 0x1d0);
      if (*(uint *)(this + 0x1d0) <= uVar10) goto LAB_00105dd0;
      iVar6 = (**(code **)(*plVar8 + 0x5f0))(plVar8,*(long *)(this + 0x1d8) + lVar2);
      Ref<TextServer>::unref((Ref<TextServer> *)&local_58);
      if (iVar6 == 0) {
        local_48 = CONCAT44(local_48._4_4_,*param_3);
        Ref<TextServer>::Ref
                  ((Ref<TextServer> *)&local_58,(Ref *)(TextServerManager::singleton + 0x178));
        uVar9 = (ulong)*(uint *)(this + 0x1d0);
        if (*(uint *)(this + 0x1d0) <= uVar10) goto LAB_00105dd0;
        dVar14 = (double)(**(code **)(*local_58 + 0x730))(local_58,*(long *)(this + 0x1d8) + lVar2);
        local_48 = CONCAT44((float)((double)*(float *)(this + 0x1e4) + dVar14 +
                                   (double)local_48._4_4_),(float)local_48);
        Ref<TextServer>::unref((Ref<TextServer> *)&local_58);
      }
      else {
        local_48 = CONCAT44(param_3[1],(float)local_48);
        Ref<TextServer>::Ref
                  ((Ref<TextServer> *)&local_58,(Ref *)(TextServerManager::singleton + 0x178));
        uVar9 = (ulong)*(uint *)(this + 0x1d0);
        if (*(uint *)(this + 0x1d0) <= uVar10) goto LAB_00105dd0;
        dVar14 = (double)(**(code **)(*local_58 + 0x730))(local_58,*(long *)(this + 0x1d8) + lVar2);
        local_48 = CONCAT44(local_48._4_4_,
                            (float)((double)*(float *)(this + 0x1e4) + dVar14 +
                                   (double)(float)local_48));
        Ref<TextServer>::unref((Ref<TextServer> *)&local_58);
      }
      lVar11 = lVar11 + 1;
    } while (lVar7 != lVar11);
  }
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x180));
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TextParagraph::draw_outline(RID, Vector2 const&, int, Color const&, Color const&) const */

void __thiscall
TextParagraph::draw_outline
          (TextParagraph *this,undefined8 param_2,float *param_3,int param_4,undefined8 param_5,
          undefined8 param_6)

{
  TextParagraph *pTVar1;
  long lVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  Object *pOVar10;
  long in_FS_OFFSET;
  float fVar11;
  float extraout_XMM0_Db;
  double dVar12;
  float fVar13;
  float local_9c;
  undefined8 local_70 [2];
  long *local_60;
  long *local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_70[0] = param_2;
  iVar5 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x180));
  if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar5);
  }
  _shape_lines(this);
  local_48 = *(undefined8 *)param_3;
  plVar6 = *(long **)(TextServerManager::singleton + 0x178);
  if ((plVar6 == (long *)0x0) || (local_58 = plVar6, cVar4 = RefCounted::reference(), cVar4 == '\0')
     ) {
    local_58 = (long *)0x0;
    plVar6 = (long *)0x0;
  }
  pTVar1 = this + 0x1a8;
  iVar5 = (**(code **)(*plVar6 + 0x5f0))(plVar6,pTVar1);
  Ref<TextServer>::unref((Ref<TextServer> *)&local_58);
  if (iVar5 == 0) {
    Ref<TextServer>::Ref((Ref<TextServer> *)&local_58,(Ref *)(TextServerManager::singleton + 0x178))
    ;
    fVar11 = (float)(**(code **)(*local_58 + 0x720))(local_58,pTVar1);
    fVar11 = fVar11 + *(float *)(this + 0x1bc) + *(float *)(this + 0x1b4);
    Ref<TextServer>::unref((Ref<TextServer> *)&local_58);
  }
  else {
    Ref<TextServer>::Ref((Ref<TextServer> *)&local_58,(Ref *)(TextServerManager::singleton + 0x178))
    ;
    (**(code **)(*local_58 + 0x720))(local_58,pTVar1);
    fVar11 = extraout_XMM0_Db + *(float *)(this + 0x1c0) + *(float *)(this + 0x1b8);
    Ref<TextServer>::unref((Ref<TextServer> *)&local_58);
  }
  if (0.0 < fVar11) {
    local_9c = (float)local_48;
    local_48._4_4_ = (float)((ulong)local_48 >> 0x20);
    fVar13 = local_48._4_4_;
    Ref<TextServer>::Ref((Ref<TextServer> *)&local_58,(Ref *)(TextServerManager::singleton + 0x178))
    ;
    iVar5 = (**(code **)(*local_58 + 0x5b8))(local_58,pTVar1);
    Ref<TextServer>::unref((Ref<TextServer> *)&local_58);
    if (iVar5 == 2) {
      Ref<TextServer>::Ref
                ((Ref<TextServer> *)&local_58,(Ref *)(TextServerManager::singleton + 0x178));
      iVar5 = (**(code **)(*local_58 + 0x5f0))(local_58,pTVar1);
      Ref<TextServer>::unref((Ref<TextServer> *)&local_58);
      if (iVar5 == 0) {
        local_9c = (*(float *)(this + 0x1e8) - fVar11) + local_9c;
      }
      else {
        fVar13 = (*(float *)(this + 0x1e8) - fVar11) + fVar13;
      }
    }
    Ref<TextServer>::Ref((Ref<TextServer> *)&local_60,(Ref *)(TextServerManager::singleton + 0x178))
    ;
    pcVar3 = *(code **)(*local_60 + 0x7b8);
    Ref<TextServer>::Ref((Ref<TextServer> *)&local_58,(Ref *)(TextServerManager::singleton + 0x178))
    ;
    dVar12 = (double)(**(code **)(*local_58 + 0x728))(local_58,pTVar1);
    local_50 = CONCAT44((float)((double)*(float *)(this + 0x1b8) + dVar12) + fVar13,
                        local_9c + *(float *)(this + 0x1b4));
    (*pcVar3)(_LC90,_LC90,local_60,pTVar1,local_70,&local_50,(long)param_4,param_6);
    Ref<TextServer>::unref((Ref<TextServer> *)&local_58);
    Ref<TextServer>::unref((Ref<TextServer> *)&local_60);
  }
  if (0 < *(int *)(this + 0x1d0)) {
    lVar9 = 0;
    do {
      local_9c = *(float *)(this + 0x1e8);
      pOVar10 = *(Object **)(TextServerManager::singleton + 0x178);
      if (pOVar10 == (Object *)0x0) goto TextParagraph_draw_outline;
      uVar8 = (uint)lVar9;
      cVar4 = RefCounted::reference();
      uVar7 = (ulong)*(uint *)(this + 0x1d0);
      if (cVar4 == '\0') {
        pOVar10 = (Object *)0x0;
      }
      if (*(uint *)(this + 0x1d0) <= uVar8) goto LAB_00106ab3;
      lVar2 = lVar9 * 8;
      iVar5 = (**(code **)(*(long *)pOVar10 + 0x5f0))(pOVar10);
      cVar4 = RefCounted::unreference();
      if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar10), cVar4 != '\0')) {
        (**(code **)(*(long *)pOVar10 + 0x140))(pOVar10);
        Memory::free_static(pOVar10,false);
      }
      if (iVar5 == 0) {
        local_48 = CONCAT44(local_48._4_4_,*param_3);
        Ref<TextServer>::Ref
                  ((Ref<TextServer> *)&local_58,(Ref *)(TextServerManager::singleton + 0x178));
        uVar7 = (ulong)*(uint *)(this + 0x1d0);
        if (*(uint *)(this + 0x1d0) <= uVar8) goto LAB_00106ab3;
        dVar12 = (double)(**(code **)(*local_58 + 0x728))(local_58,*(long *)(this + 0x1d8) + lVar2);
        local_48 = CONCAT44((float)((double)local_48._4_4_ + dVar12),(float)local_48);
        Ref<TextServer>::unref((Ref<TextServer> *)&local_58);
        if ((int)uVar8 <= *(int *)(this + 0x1b0)) {
          Ref<TextServer>::Ref
                    ((Ref<TextServer> *)&local_58,(Ref *)(TextServerManager::singleton + 0x178));
          iVar5 = (**(code **)(*local_58 + 0x5b8))(local_58,pTVar1);
          Ref<TextServer>::unref((Ref<TextServer> *)&local_58);
          if (iVar5 == 1) {
            local_48 = CONCAT44(local_48._4_4_,(float)local_48 - fVar11);
          }
          local_9c = local_9c - fVar11;
        }
      }
      else {
        local_48 = CONCAT44(param_3[1],(float)local_48);
        Ref<TextServer>::Ref
                  ((Ref<TextServer> *)&local_58,(Ref *)(TextServerManager::singleton + 0x178));
        uVar7 = (ulong)*(uint *)(this + 0x1d0);
        if (*(uint *)(this + 0x1d0) <= uVar8) goto LAB_00106ab3;
        dVar12 = (double)(**(code **)(*local_58 + 0x728))(local_58,*(long *)(this + 0x1d8) + lVar2);
        local_48 = CONCAT44(local_48._4_4_,(float)((double)(float)local_48 + dVar12));
        Ref<TextServer>::unref((Ref<TextServer> *)&local_58);
        if ((int)uVar8 <= *(int *)(this + 0x1b0)) {
          Ref<TextServer>::Ref
                    ((Ref<TextServer> *)&local_58,(Ref *)(TextServerManager::singleton + 0x178));
          iVar5 = (**(code **)(*local_58 + 0x5b8))(local_58,pTVar1);
          Ref<TextServer>::unref((Ref<TextServer> *)&local_58);
          if (iVar5 == 1) {
            local_48 = CONCAT44(local_48._4_4_ - fVar11,(float)local_48);
          }
          local_9c = local_9c - fVar11;
        }
      }
      pOVar10 = *(Object **)(TextServerManager::singleton + 0x178);
      if (pOVar10 == (Object *)0x0) goto TextParagraph_draw_outline;
      cVar4 = RefCounted::reference();
      uVar7 = (ulong)*(uint *)(this + 0x1d0);
      if (cVar4 == '\0') {
        pOVar10 = (Object *)0x0;
      }
      if (*(uint *)(this + 0x1d0) <= uVar8) goto LAB_00106ab3;
      dVar12 = (double)(**(code **)(*(long *)pOVar10 + 0x738))(pOVar10);
      cVar4 = RefCounted::unreference();
      if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar10), cVar4 != '\0')) {
        (**(code **)(*(long *)pOVar10 + 0x140))(pOVar10);
        Memory::free_static(pOVar10,false);
      }
      if (*(float *)(this + 0x1e8) <= 0.0) goto LAB_001066be;
      iVar5 = *(int *)(this + 0x20c);
      fVar13 = (float)dVar12;
      if (iVar5 == 2) {
LAB_00106c60:
        Ref<TextServer>::Ref
                  ((Ref<TextServer> *)&local_58,(Ref *)(TextServerManager::singleton + 0x178));
        uVar7 = (ulong)*(uint *)(this + 0x1d0);
        if (*(uint *)(this + 0x1d0) <= uVar8) goto LAB_00106ab3;
        iVar5 = (**(code **)(*local_58 + 0x5f0))(local_58,*(long *)(this + 0x1d8) + lVar2);
        Ref<TextServer>::unref((Ref<TextServer> *)&local_58);
        if (iVar5 == 0) {
          local_48 = CONCAT44(local_48._4_4_,(local_9c - fVar13) + (float)local_48);
        }
        else {
          local_48 = CONCAT44((local_9c - fVar13) + local_48._4_4_,(float)local_48);
        }
      }
      else if (iVar5 == 3) {
LAB_00106671:
        Ref<TextServer>::Ref
                  ((Ref<TextServer> *)&local_58,(Ref *)(TextServerManager::singleton + 0x178));
        uVar7 = (ulong)*(uint *)(this + 0x1d0);
        if (*(uint *)(this + 0x1d0) <= uVar8) goto LAB_00106ab3;
        iVar5 = (**(code **)(*local_58 + 0x5b8))(local_58,*(long *)(this + 0x1d8) + lVar2);
        Ref<TextServer>::unref((Ref<TextServer> *)&local_58);
        if (iVar5 == 2) goto LAB_00106c60;
      }
      else if (iVar5 == 1) {
        if (local_9c < fVar13) goto LAB_00106671;
        Ref<TextServer>::Ref
                  ((Ref<TextServer> *)&local_58,(Ref *)(TextServerManager::singleton + 0x178));
        uVar7 = (ulong)*(uint *)(this + 0x1d0);
        if (*(uint *)(this + 0x1d0) <= uVar8) goto LAB_00106ab3;
        iVar5 = (**(code **)(*local_58 + 0x5f0))(local_58,*(long *)(this + 0x1d8) + lVar2);
        Ref<TextServer>::unref((Ref<TextServer> *)&local_58);
        dVar12 = (double)(local_9c - fVar13) * __LC83;
        if (iVar5 == 0) {
          if ((double)((ulong)dVar12 & _LC87) < _LC84) {
            dVar12 = (double)((ulong)((double)(long)dVar12 -
                                     (double)(-(ulong)(dVar12 < (double)(long)dVar12) & _LC86)) |
                             ~_LC87 & (ulong)dVar12);
          }
          local_48 = CONCAT44(local_48._4_4_,(float)(dVar12 + (double)(float)local_48));
        }
        else {
          if ((double)((ulong)dVar12 & _LC87) < _LC84) {
            dVar12 = (double)((ulong)((double)(long)dVar12 -
                                     (double)(-(ulong)(dVar12 < (double)(long)dVar12) & _LC86)) |
                             ~_LC87 & (ulong)dVar12);
          }
          local_48 = CONCAT44((float)(dVar12 + (double)local_48._4_4_),(float)local_48);
        }
      }
LAB_001066be:
      pOVar10 = *(Object **)(TextServerManager::singleton + 0x178);
      if (pOVar10 == (Object *)0x0) {
TextParagraph_draw_outline:
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      cVar4 = RefCounted::reference();
      uVar7 = (ulong)*(uint *)(this + 0x1d0);
      if (cVar4 == '\0') {
        pOVar10 = (Object *)0x0;
      }
      if (*(uint *)(this + 0x1d0) <= uVar8) {
LAB_00106ab3:
        _err_print_index_error
                  ("operator[]","./core/templates/local_vector.h",0xb2,lVar9,uVar7,"p_index","count"
                   ,"",false,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      iVar5 = (**(code **)(*(long *)pOVar10 + 0x5f0))(pOVar10);
      cVar4 = RefCounted::unreference();
      if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar10), cVar4 != '\0')) {
        (**(code **)(*(long *)pOVar10 + 0x140))(pOVar10);
        Memory::free_static(pOVar10,false);
      }
      if (iVar5 == 0) {
        fVar13 = *param_3 - (float)local_48;
      }
      else {
        fVar13 = param_3[1] - local_48._4_4_;
      }
      if (fVar13 < 0.0) {
        fVar13 = 0.0;
      }
      plVar6 = *(long **)(TextServerManager::singleton + 0x178);
      if ((plVar6 == (long *)0x0) ||
         (local_58 = plVar6, cVar4 = RefCounted::reference(), cVar4 == '\0')) {
        local_58 = (long *)0x0;
        plVar6 = (long *)0x0;
      }
      if (*(uint *)(this + 0x1d0) <= uVar8) {
        uVar7 = (ulong)*(uint *)(this + 0x1d0);
        goto LAB_00106ab3;
      }
      (**(code **)(*plVar6 + 0x7b8))
                ((double)fVar13,(double)(local_9c + fVar13),plVar6,*(long *)(this + 0x1d8) + lVar2,
                 local_70,&local_48,(long)param_4,param_5);
      Ref<TextServer>::unref((Ref<TextServer> *)&local_58);
      plVar6 = *(long **)(TextServerManager::singleton + 0x178);
      if ((plVar6 == (long *)0x0) ||
         (local_58 = plVar6, cVar4 = RefCounted::reference(), cVar4 == '\0')) {
        local_58 = (long *)0x0;
        plVar6 = (long *)0x0;
      }
      uVar7 = (ulong)*(uint *)(this + 0x1d0);
      if (*(uint *)(this + 0x1d0) <= uVar8) goto LAB_00106ab3;
      iVar5 = (**(code **)(*plVar6 + 0x5f0))(plVar6,*(long *)(this + 0x1d8) + lVar2);
      Ref<TextServer>::unref((Ref<TextServer> *)&local_58);
      if (iVar5 == 0) {
        local_48 = CONCAT44(local_48._4_4_,*param_3);
        Ref<TextServer>::Ref
                  ((Ref<TextServer> *)&local_58,(Ref *)(TextServerManager::singleton + 0x178));
        uVar7 = (ulong)*(uint *)(this + 0x1d0);
        if (*(uint *)(this + 0x1d0) <= uVar8) goto LAB_00106ab3;
        dVar12 = (double)(**(code **)(*local_58 + 0x730))(local_58,*(long *)(this + 0x1d8) + lVar2);
        local_48 = CONCAT44((float)((double)*(float *)(this + 0x1e4) + dVar12 +
                                   (double)local_48._4_4_),(float)local_48);
        Ref<TextServer>::unref((Ref<TextServer> *)&local_58);
      }
      else {
        local_48 = CONCAT44(param_3[1],(float)local_48);
        Ref<TextServer>::Ref
                  ((Ref<TextServer> *)&local_58,(Ref *)(TextServerManager::singleton + 0x178));
        uVar7 = (ulong)*(uint *)(this + 0x1d0);
        if (*(uint *)(this + 0x1d0) <= uVar8) goto LAB_00106ab3;
        dVar12 = (double)(**(code **)(*local_58 + 0x730))(local_58,*(long *)(this + 0x1d8) + lVar2);
        local_48 = CONCAT44(local_48._4_4_,
                            (float)((double)*(float *)(this + 0x1e4) + dVar12 +
                                   (double)(float)local_48));
        Ref<TextServer>::unref((Ref<TextServer> *)&local_58);
      }
      lVar9 = lVar9 + 1;
    } while ((int)lVar9 < *(int *)(this + 0x1d0));
  }
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x180));
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* TextParagraph::hit_test(Vector2 const&) const */

ulong __thiscall TextParagraph::hit_test(TextParagraph *this,Vector2 *param_1)

{
  long lVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  Object *pOVar7;
  long lVar8;
  long *plVar9;
  Object *pOVar10;
  long in_FS_OFFSET;
  float fVar11;
  float fVar12;
  float extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  float local_6c;
  long *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar4 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x180));
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar4);
  }
  _shape_lines(this);
  pOVar7 = *(Object **)(TextServerManager::singleton + 0x178);
  if (pOVar7 == (Object *)0x0) {
TextParagraph_hit_test:
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  cVar3 = RefCounted::reference();
  if (cVar3 == '\0') {
    pOVar7 = (Object *)0x0;
  }
  (**(code **)(*(long *)pOVar7 + 0x5f0))(pOVar7);
  cVar3 = RefCounted::unreference();
  if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar7), cVar3 != '\0')) {
    (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
    Memory::free_static(pOVar7,false);
  }
  lVar8 = *(long *)(this + 0x1d8);
  local_6c = 0.0;
  pOVar7 = (Object *)0x0;
  lVar1 = lVar8 + (ulong)*(uint *)(this + 0x1d0) * 8;
  do {
    if (lVar1 == lVar8) {
      plVar9 = *(long **)(TextServerManager::singleton + 0x178);
      if ((plVar9 == (long *)0x0) ||
         (local_48 = plVar9, cVar3 = RefCounted::reference(), cVar3 == '\0')) {
        local_48 = (long *)0x0;
        plVar9 = (long *)0x0;
      }
      uVar6 = (**(code **)(*plVar9 + 0x6b8))(plVar9,this + 0x1c8);
      uVar6 = uVar6 >> 0x20;
      Ref<TextServer>::unref((Ref<TextServer> *)&local_48);
LAB_001072b5:
      pthread_mutex_unlock((pthread_mutex_t *)(this + 0x180));
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return uVar6;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pOVar10 = *(Object **)(TextServerManager::singleton + 0x178);
    if (pOVar10 == (Object *)0x0) goto TextParagraph_hit_test;
    cVar3 = RefCounted::reference();
    if (cVar3 == '\0') {
      pOVar10 = pOVar7;
    }
    iVar4 = (**(code **)(*(long *)pOVar10 + 0x5f0))(pOVar10);
    cVar3 = RefCounted::unreference();
    if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar10), cVar3 != '\0')) {
      (**(code **)(*(long *)pOVar10 + 0x140))(pOVar10);
      Memory::free_static(pOVar10,false);
    }
    pOVar10 = *(Object **)(TextServerManager::singleton + 0x178);
    if (iVar4 == 0) {
      fVar11 = *(float *)(param_1 + 4);
      if (local_6c <= fVar11) {
        if (pOVar10 == (Object *)0x0) goto TextParagraph_hit_test;
        cVar3 = RefCounted::reference();
        if (cVar3 == '\0') {
          pOVar10 = pOVar7;
        }
        (**(code **)(*(long *)pOVar10 + 0x720))(pOVar10);
        cVar3 = RefCounted::unreference();
        if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar10), cVar3 != '\0')) {
          (**(code **)(*(long *)pOVar10 + 0x140))(pOVar10);
          Memory::free_static(pOVar10,false);
        }
        if (fVar11 <= extraout_XMM0_Db_00 + local_6c) {
          Ref<TextServer>::Ref
                    ((Ref<TextServer> *)&local_48,(Ref *)(TextServerManager::singleton + 0x178));
          fVar11 = *(float *)param_1;
          goto LAB_0010729f;
        }
      }
      pOVar10 = *(Object **)(TextServerManager::singleton + 0x178);
      if (pOVar10 == (Object *)0x0) goto TextParagraph_hit_test;
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        pOVar10 = pOVar7;
      }
      (**(code **)(*(long *)pOVar10 + 0x720))(pOVar10);
      fVar11 = extraout_XMM0_Db;
    }
    else {
      fVar11 = *(float *)param_1;
      if (0.0 <= fVar11) {
        if (pOVar10 == (Object *)0x0) goto TextParagraph_hit_test;
        cVar3 = RefCounted::reference();
        if (cVar3 == '\0') {
          pOVar10 = pOVar7;
        }
        fVar12 = (float)(**(code **)(*(long *)pOVar10 + 0x720))(pOVar10);
        cVar3 = RefCounted::unreference();
        if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar10), cVar3 != '\0')) {
          (**(code **)(*(long *)pOVar10 + 0x140))(pOVar10);
          Memory::free_static(pOVar10,false);
        }
        if (fVar11 <= fVar12 + 0.0) {
          Ref<TextServer>::Ref
                    ((Ref<TextServer> *)&local_48,(Ref *)(TextServerManager::singleton + 0x178));
          fVar11 = *(float *)(param_1 + 4);
LAB_0010729f:
          uVar5 = (**(code **)(*local_48 + 0x770))((double)fVar11,local_48,lVar8);
          uVar6 = (ulong)uVar5;
          Ref<TextServer>::unref((Ref<TextServer> *)&local_48);
          goto LAB_001072b5;
        }
      }
      pOVar10 = *(Object **)(TextServerManager::singleton + 0x178);
      if (pOVar10 == (Object *)0x0) goto TextParagraph_hit_test;
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        pOVar10 = pOVar7;
      }
      fVar11 = (float)(**(code **)(*(long *)pOVar10 + 0x720))(pOVar10);
    }
    local_6c = fVar11 + *(float *)(this + 0x1e4) + local_6c;
    cVar3 = RefCounted::unreference();
    if ((cVar3 == '\0') || (cVar3 = predelete_handler(pOVar10), cVar3 == '\0')) {
      lVar8 = lVar8 + 8;
    }
    else {
      lVar8 = lVar8 + 8;
      (**(code **)(*(long *)pOVar10 + 0x140))(pOVar10);
      Memory::free_static(pOVar10,false);
    }
  } while( true );
}



/* TextParagraph::draw_dropcap(RID, Vector2 const&, Color const&) const */

void __thiscall
TextParagraph::draw_dropcap
          (TextParagraph *this,undefined8 param_2,float *param_3,undefined8 param_4)

{
  TextParagraph *pTVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  Object *pOVar5;
  long *plVar6;
  long in_FS_OFFSET;
  float fVar7;
  float extraout_XMM0_Db;
  double dVar8;
  float local_70;
  float local_6c;
  undefined8 local_60 [2];
  long *local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60[0] = param_2;
  iVar4 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x180));
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar4);
  }
  local_6c = *param_3;
  local_70 = param_3[1];
  pOVar5 = *(Object **)(TextServerManager::singleton + 0x178);
  if (pOVar5 != (Object *)0x0) {
    pTVar1 = this + 0x1a8;
    cVar3 = RefCounted::reference();
    if (cVar3 == '\0') {
      pOVar5 = (Object *)0x0;
    }
    iVar4 = (**(code **)(*(long *)pOVar5 + 0x5f0))(pOVar5);
    cVar3 = RefCounted::unreference();
    if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar5), cVar3 != '\0')) {
      (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
      Memory::free_static(pOVar5,false);
    }
    pOVar5 = *(Object **)(TextServerManager::singleton + 0x178);
    if (iVar4 == 0) {
      if (pOVar5 == (Object *)0x0) goto TextParagraph_draw_dropcap;
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        pOVar5 = (Object *)0x0;
      }
      fVar7 = (float)(**(code **)(*(long *)pOVar5 + 0x720))(pOVar5);
      fVar7 = fVar7 + *(float *)(this + 0x1bc) + *(float *)(this + 0x1b4);
    }
    else {
      if (pOVar5 == (Object *)0x0) goto TextParagraph_draw_dropcap;
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        pOVar5 = (Object *)0x0;
      }
      (**(code **)(*(long *)pOVar5 + 0x720))(pOVar5);
      fVar7 = extraout_XMM0_Db + *(float *)(this + 0x1c0) + *(float *)(this + 0x1b8);
    }
    cVar3 = RefCounted::unreference();
    if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar5), cVar3 != '\0')) {
      (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
      Memory::free_static(pOVar5,false);
    }
    if (fVar7 <= 0.0) {
LAB_00107628:
      pthread_mutex_unlock((pthread_mutex_t *)(this + 0x180));
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    plVar6 = *(long **)(TextServerManager::singleton + 0x178);
    if ((plVar6 == (long *)0x0) ||
       (local_50 = plVar6, cVar3 = RefCounted::reference(), cVar3 == '\0')) {
      local_50 = (long *)0x0;
      plVar6 = (long *)0x0;
    }
    iVar4 = (**(code **)(*plVar6 + 0x5b8))(plVar6,pTVar1);
    Ref<TextServer>::unref((Ref<TextServer> *)&local_50);
    if (iVar4 == 2) {
      Ref<TextServer>::Ref
                ((Ref<TextServer> *)&local_50,(Ref *)(TextServerManager::singleton + 0x178));
      iVar4 = (**(code **)(*local_50 + 0x5f0))(local_50,pTVar1);
      Ref<TextServer>::unref((Ref<TextServer> *)&local_50);
      if (iVar4 == 0) {
        local_6c = (*(float *)(this + 0x1e8) - fVar7) + local_6c;
      }
      else {
        local_70 = (*(float *)(this + 0x1e8) - fVar7) + local_70;
      }
    }
    plVar6 = *(long **)(TextServerManager::singleton + 0x178);
    if (plVar6 != (long *)0x0) {
      local_50 = plVar6;
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        local_50 = (long *)0x0;
        plVar6 = (long *)0x0;
      }
      pcVar2 = *(code **)(*plVar6 + 0x7b0);
      pOVar5 = *(Object **)(TextServerManager::singleton + 0x178);
      if (pOVar5 != (Object *)0x0) {
        cVar3 = RefCounted::reference();
        if (cVar3 == '\0') {
          pOVar5 = (Object *)0x0;
        }
        dVar8 = (double)(**(code **)(*(long *)pOVar5 + 0x728))(pOVar5,pTVar1);
        local_48 = CONCAT44((float)((double)*(float *)(this + 0x1b8) + dVar8) + local_70,
                            local_6c + *(float *)(this + 0x1b4));
        (*pcVar2)(_LC90,_LC90,plVar6,pTVar1,local_60,&local_48,param_4);
        cVar3 = RefCounted::unreference();
        if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar5), cVar3 != '\0')) {
          (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
          Memory::free_static(pOVar5,false);
        }
        Ref<TextServer>::unref((Ref<TextServer> *)&local_50);
        goto LAB_00107628;
      }
    }
  }
TextParagraph_draw_dropcap:
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TextParagraph::draw_dropcap_outline(RID, Vector2 const&, int, Color const&) const */

void __thiscall
TextParagraph::draw_dropcap_outline
          (TextParagraph *this,undefined8 param_2,float *param_3,int param_4,undefined8 param_5)

{
  TextParagraph *pTVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  long *plVar5;
  Object *pOVar6;
  long *plVar7;
  long in_FS_OFFSET;
  float fVar8;
  float extraout_XMM0_Db;
  double dVar9;
  code *local_80;
  float local_78;
  float local_74;
  undefined8 local_60;
  long *local_58;
  long *local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = param_2;
  iVar4 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x180));
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar4);
  }
  local_74 = *param_3;
  local_78 = param_3[1];
  pOVar6 = *(Object **)(TextServerManager::singleton + 0x178);
  if (pOVar6 == (Object *)0x0) {
TextParagraph_draw_dropcap_outline:
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  pTVar1 = this + 0x1a8;
  cVar3 = RefCounted::reference();
  if (cVar3 == '\0') {
    pOVar6 = (Object *)0x0;
  }
  iVar4 = (**(code **)(*(long *)pOVar6 + 0x5f0))(pOVar6);
  cVar3 = RefCounted::unreference();
  if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar6), cVar3 != '\0')) {
    (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
    Memory::free_static(pOVar6,false);
  }
  pOVar6 = *(Object **)(TextServerManager::singleton + 0x178);
  if (iVar4 == 0) {
    if (pOVar6 == (Object *)0x0) goto TextParagraph_draw_dropcap_outline;
    cVar3 = RefCounted::reference();
    if (cVar3 == '\0') {
      pOVar6 = (Object *)0x0;
    }
    fVar8 = (float)(**(code **)(*(long *)pOVar6 + 0x720))(pOVar6);
    fVar8 = fVar8 + *(float *)(this + 0x1bc) + *(float *)(this + 0x1b4);
  }
  else {
    if (pOVar6 == (Object *)0x0) goto TextParagraph_draw_dropcap_outline;
    cVar3 = RefCounted::reference();
    if (cVar3 == '\0') {
      pOVar6 = (Object *)0x0;
    }
    (**(code **)(*(long *)pOVar6 + 0x720))(pOVar6);
    fVar8 = extraout_XMM0_Db + *(float *)(this + 0x1c0) + *(float *)(this + 0x1b8);
  }
  cVar3 = RefCounted::unreference();
  if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar6), cVar3 != '\0')) {
    (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
    Memory::free_static(pOVar6,false);
  }
  if (fVar8 <= 0.0) goto LAB_00107a62;
  plVar7 = *(long **)(TextServerManager::singleton + 0x178);
  if ((plVar7 == (long *)0x0) || (local_50 = plVar7, cVar3 = RefCounted::reference(), cVar3 == '\0')
     ) {
    local_50 = (long *)0x0;
    plVar7 = (long *)0x0;
  }
  iVar4 = (**(code **)(*plVar7 + 0x5b8))(plVar7,pTVar1);
  Ref<TextServer>::unref((Ref<TextServer> *)&local_50);
  if (iVar4 == 2) {
    Ref<TextServer>::Ref((Ref<TextServer> *)&local_50,(Ref *)(TextServerManager::singleton + 0x178))
    ;
    iVar4 = (**(code **)(*local_50 + 0x5f0))(local_50,pTVar1);
    Ref<TextServer>::unref((Ref<TextServer> *)&local_50);
    if (iVar4 == 0) {
      local_74 = (*(float *)(this + 0x1e8) - fVar8) + local_74;
    }
    else {
      local_78 = (*(float *)(this + 0x1e8) - fVar8) + local_78;
    }
  }
  local_58 = (long *)0x0;
  plVar7 = *(long **)(TextServerManager::singleton + 0x178);
  if (plVar7 == (long *)0x0) {
    local_80 = *(code **)(_DAT_00000000 + 0x7b8);
LAB_00107ba5:
    local_50 = (long *)0x0;
    plVar5 = (long *)0x0;
  }
  else {
    local_58 = plVar7;
    cVar3 = RefCounted::reference();
    if (cVar3 == '\0') {
      plVar7 = (long *)0x0;
      local_58 = (long *)0x0;
      plVar5 = *(long **)(TextServerManager::singleton + 0x178);
    }
    else {
      plVar5 = *(long **)(TextServerManager::singleton + 0x178);
    }
    local_80 = *(code **)(*plVar7 + 0x7b8);
    if ((plVar5 == (long *)0x0) ||
       (local_50 = plVar5, cVar3 = RefCounted::reference(), cVar3 == '\0')) goto LAB_00107ba5;
  }
  dVar9 = (double)(**(code **)(*plVar5 + 0x728))(plVar5,pTVar1);
  local_48 = CONCAT44((float)((double)*(float *)(this + 0x1b8) + dVar9) + local_78,
                      local_74 + *(float *)(this + 0x1b4));
  (*local_80)(_LC90,_LC90,plVar7,pTVar1,&local_60,&local_48,(long)param_4,param_5);
  Ref<TextServer>::unref((Ref<TextServer> *)&local_50);
  Ref<TextServer>::unref((Ref<TextServer> *)&local_58);
LAB_00107a62:
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x180));
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* TextParagraph::draw_line(RID, Vector2 const&, int, Color const&) const */

void __thiscall
TextParagraph::draw_line
          (TextParagraph *this,undefined8 param_2,undefined8 *param_3,uint param_4,
          undefined8 param_5)

{
  long lVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  Object *pOVar7;
  long in_FS_OFFSET;
  double dVar8;
  undefined8 local_60 [2];
  long *local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60[0] = param_2;
  iVar4 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x180));
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar4);
  }
  _shape_lines(this);
  if (((int)param_4 < 0) || (*(int *)(this + 0x1d0) <= (int)param_4)) {
    _err_print_error("draw_line","scene/resources/text_paragraph.cpp",0x448,
                     "Condition \"p_line < 0 || p_line >= (int)lines_rid.size()\" is true.",0,0);
LAB_00107fd0:
    pthread_mutex_unlock((pthread_mutex_t *)(this + 0x180));
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  local_48 = *param_3;
  pOVar7 = *(Object **)(TextServerManager::singleton + 0x178);
  if (pOVar7 != (Object *)0x0) {
    cVar3 = RefCounted::reference();
    uVar6 = (ulong)*(uint *)(this + 0x1d0);
    if (cVar3 == '\0') {
      pOVar7 = (Object *)0x0;
    }
    if (param_4 < *(uint *)(this + 0x1d0)) {
      lVar1 = (long)(int)param_4 * 8;
      iVar4 = (**(code **)(*(long *)pOVar7 + 0x5f0))(pOVar7);
      cVar3 = RefCounted::unreference();
      if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar7), cVar3 != '\0')) {
        (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
        Memory::free_static(pOVar7,false);
      }
      plVar5 = *(long **)(TextServerManager::singleton + 0x178);
      local_50 = plVar5;
      if (iVar4 == 0) {
        if ((plVar5 == (long *)0x0) || (cVar3 = RefCounted::reference(), cVar3 == '\0')) {
          local_50 = (long *)0x0;
          plVar5 = (long *)0x0;
        }
        uVar6 = (ulong)*(uint *)(this + 0x1d0);
        if (*(uint *)(this + 0x1d0) <= param_4) goto LAB_0010809e;
        dVar8 = (double)(**(code **)(*plVar5 + 0x728))(plVar5,*(long *)(this + 0x1d8) + lVar1);
        local_48 = CONCAT44((float)((double)local_48._4_4_ + dVar8),(float)local_48);
        Ref<TextServer>::unref((Ref<TextServer> *)&local_50);
      }
      else {
        if ((plVar5 == (long *)0x0) || (cVar3 = RefCounted::reference(), cVar3 == '\0')) {
          local_50 = (long *)0x0;
          plVar5 = (long *)0x0;
        }
        uVar6 = (ulong)*(uint *)(this + 0x1d0);
        if (*(uint *)(this + 0x1d0) <= param_4) goto LAB_0010809e;
        dVar8 = (double)(**(code **)(*plVar5 + 0x728))(plVar5,*(long *)(this + 0x1d8) + lVar1);
        local_48 = CONCAT44(local_48._4_4_,(float)((double)(float)local_48 + dVar8));
        Ref<TextServer>::unref((Ref<TextServer> *)&local_50);
      }
      pOVar7 = *(Object **)(TextServerManager::singleton + 0x178);
      if (pOVar7 == (Object *)0x0) goto TextParagraph_draw_line;
      cVar3 = RefCounted::reference();
      uVar6 = (ulong)*(uint *)(this + 0x1d0);
      if (cVar3 == '\0') {
        pOVar7 = (Object *)0x0;
      }
      if (param_4 < *(uint *)(this + 0x1d0)) {
        (**(code **)(*(long *)pOVar7 + 0x7b0))
                  (_LC90,_LC90,pOVar7,*(long *)(this + 0x1d8) + lVar1,local_60,&local_48,param_5);
        cVar3 = RefCounted::unreference();
        if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar7), cVar3 != '\0')) {
          (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
          Memory::free_static(pOVar7,false);
        }
        goto LAB_00107fd0;
      }
    }
LAB_0010809e:
    _err_print_index_error
              ("operator[]","./core/templates/local_vector.h",0xb2,(long)(int)param_4,uVar6,
               "p_index","count","",false,true);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
TextParagraph_draw_line:
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



/* TextParagraph::draw_line_outline(RID, Vector2 const&, int, int, Color const&) const */

void __thiscall
TextParagraph::draw_line_outline
          (TextParagraph *this,undefined8 param_2,undefined8 *param_3,uint param_4,int param_5,
          undefined8 param_6)

{
  long lVar1;
  uint uVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  long *plVar6;
  Object *pOVar7;
  long in_FS_OFFSET;
  double dVar8;
  undefined8 local_60 [2];
  long *local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60[0] = param_2;
  iVar5 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x180));
  if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar5);
  }
  _shape_lines(this);
  if (((int)param_4 < 0) || (*(int *)(this + 0x1d0) <= (int)param_4)) {
    _err_print_error("draw_line_outline","scene/resources/text_paragraph.cpp",0x458,
                     "Condition \"p_line < 0 || p_line >= (int)lines_rid.size()\" is true.",0,0);
LAB_00108392:
    pthread_mutex_unlock((pthread_mutex_t *)(this + 0x180));
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  local_48 = *param_3;
  pOVar7 = *(Object **)(TextServerManager::singleton + 0x178);
  if (pOVar7 != (Object *)0x0) {
    cVar4 = RefCounted::reference();
    uVar2 = *(uint *)(this + 0x1d0);
    if (cVar4 == '\0') {
      pOVar7 = (Object *)0x0;
    }
    if (param_4 < uVar2) {
      lVar1 = (long)(int)param_4 * 8;
      iVar5 = (**(code **)(*(long *)pOVar7 + 0x5f0))(pOVar7);
      cVar4 = RefCounted::unreference();
      if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar7), cVar4 != '\0')) {
        (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
        Memory::free_static(pOVar7,false);
      }
      plVar6 = *(long **)(TextServerManager::singleton + 0x178);
      local_50 = plVar6;
      if (iVar5 == 0) {
        if ((plVar6 == (long *)0x0) || (cVar4 = RefCounted::reference(), cVar4 == '\0')) {
          local_50 = (long *)0x0;
          plVar6 = (long *)0x0;
        }
        uVar2 = *(uint *)(this + 0x1d0);
        if (uVar2 <= param_4) goto LAB_0010848e;
        dVar8 = (double)(**(code **)(*plVar6 + 0x728))(plVar6,*(long *)(this + 0x1d8) + lVar1);
        local_48 = CONCAT44((float)((double)local_48._4_4_ + dVar8),(float)local_48);
        Ref<TextServer>::unref((Ref<TextServer> *)&local_50);
      }
      else {
        if ((plVar6 == (long *)0x0) || (cVar4 = RefCounted::reference(), cVar4 == '\0')) {
          local_50 = (long *)0x0;
          plVar6 = (long *)0x0;
        }
        uVar2 = *(uint *)(this + 0x1d0);
        if (uVar2 <= param_4) goto LAB_0010848e;
        dVar8 = (double)(**(code **)(*plVar6 + 0x728))(plVar6,*(long *)(this + 0x1d8) + lVar1);
        local_48 = CONCAT44(local_48._4_4_,(float)((double)(float)local_48 + dVar8));
        Ref<TextServer>::unref((Ref<TextServer> *)&local_50);
      }
      pOVar7 = *(Object **)(TextServerManager::singleton + 0x178);
      if (pOVar7 == (Object *)0x0) goto TextParagraph_draw_line_outline;
      cVar4 = RefCounted::reference();
      uVar2 = *(uint *)(this + 0x1d0);
      if (cVar4 == '\0') {
        pOVar7 = (Object *)0x0;
      }
      if (param_4 < uVar2) {
        (**(code **)(*(long *)pOVar7 + 0x7b8))
                  (_LC90,_LC90,pOVar7,*(long *)(this + 0x1d8) + lVar1,local_60,&local_48,
                   (long)param_5,param_6);
        cVar4 = RefCounted::unreference();
        if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar7), cVar4 != '\0')) {
          (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
          Memory::free_static(pOVar7,false);
        }
        goto LAB_00108392;
      }
    }
LAB_0010848e:
    _err_print_index_error
              ("operator[]","./core/templates/local_vector.h",0xb2,(long)(int)param_4,(ulong)uVar2,
               "p_index","count","",false,true);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
TextParagraph_draw_line_outline:
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TextParagraph::_bind_methods() */

void TextParagraph::_bind_methods(void)

{
  Variant *pVVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  MethodBind *pMVar8;
  uint uVar9;
  Variant *pVVar10;
  long in_FS_OFFSET;
  undefined8 local_578;
  undefined8 local_570;
  undefined8 local_568;
  long local_560;
  long local_558;
  long local_550;
  char *local_548;
  undefined8 local_540;
  char *local_538;
  undefined8 local_530;
  undefined *local_508;
  undefined *puStack_500;
  undefined8 local_4f8;
  char *local_4e8;
  undefined *puStack_4e0;
  char *local_4d8;
  undefined8 local_4d0;
  undefined *local_4c8;
  undefined *puStack_4c0;
  char *local_4b8;
  undefined *puStack_4b0;
  undefined8 local_4a8;
  char *local_498;
  undefined *puStack_490;
  char *local_488;
  undefined *puStack_480;
  undefined8 local_478;
  char *local_468;
  undefined *puStack_460;
  undefined *local_458;
  undefined *puStack_450;
  undefined8 local_448;
  char *local_438;
  undefined *puStack_430;
  undefined *local_428;
  undefined *puStack_420;
  undefined8 local_418;
  undefined *local_408;
  undefined *puStack_400;
  char *local_3f8;
  undefined *puStack_3f0;
  undefined *local_3e8;
  undefined8 local_3e0;
  undefined *local_3d8;
  undefined *puStack_3d0;
  char *local_3c8;
  char *pcStack_3c0;
  char *local_3b8;
  undefined8 local_3b0;
  Rect2 *local_3a8;
  undefined1 auStack_3a0 [16];
  char **ppcStack_390;
  char **local_388;
  undefined *local_378;
  undefined *puStack_370;
  char *local_368;
  char *pcStack_360;
  char *local_358;
  undefined8 local_350;
  char *local_348;
  undefined *puStack_340;
  undefined *local_338;
  char *pcStack_330;
  char *local_328;
  undefined8 local_320;
  char *local_318;
  undefined *puStack_310;
  char *local_308;
  undefined *puStack_300;
  char *local_2f8;
  undefined8 local_2f0;
  Variant local_2e8 [24];
  Variant local_2d0 [24];
  undefined8 local_2b8;
  undefined1 local_2b0 [16];
  Variant local_2a0 [8];
  Variant *local_298;
  undefined1 auStack_290 [16];
  char **ppcStack_280;
  char **local_278;
  undefined8 local_268;
  undefined1 local_260 [16];
  Variant local_250 [8];
  undefined *local_248;
  undefined8 uStack_240;
  Variant local_230 [24];
  undefined8 local_218;
  undefined1 local_210 [16];
  Variant local_200 [8];
  Variant local_1f8 [24];
  Variant local_1e0 [24];
  undefined8 local_1c8;
  undefined1 local_1c0 [16];
  Variant local_1b0 [8];
  Variant local_1a8 [24];
  Variant local_190 [24];
  undefined8 local_178;
  undefined1 local_170 [16];
  Variant local_160 [8];
  undefined8 local_158;
  undefined8 uStack_150;
  Variant local_140 [24];
  undefined8 local_128;
  undefined1 local_120 [16];
  Variant local_110 [8];
  Variant *local_108;
  undefined1 auStack_100 [16];
  undefined **ppuStack_f0;
  char **local_e8;
  Variant local_d8 [24];
  undefined8 local_c0;
  undefined1 local_b8 [16];
  Variant *local_a8;
  undefined1 auStack_a0 [16];
  char **ppcStack_90;
  undefined1 local_88 [16];
  Variant local_78 [24];
  undefined8 local_60;
  undefined1 local_58 [16];
  Variant local_48 [8];
  long local_40;
  
  puVar7 = PTR__LC115_0012e108;
  puVar6 = PTR__LC110_0012e100;
  puVar5 = PTR__LC106_0012e0f8;
  puVar4 = PTR__LC105_0012e0f0;
  puVar3 = PTR__LC103_0012e0e8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  D_METHODP((char *)&local_538,(char ***)"clear",0);
  auStack_3a0 = (undefined1  [16])0x0;
  local_3a8 = (Rect2 *)0x0;
  pMVar8 = create_method_bind<TextParagraph>(clear);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_538,(Variant **)0x0,0);
  if (::Variant::needs_deinit[(int)local_3a8] != '\0') {
    ::Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_538);
  D_METHOD<char_const*>((char *)&local_538,"set_direction");
  auStack_3a0 = (undefined1  [16])0x0;
  local_3a8 = (Rect2 *)0x0;
  pMVar8 = create_method_bind<TextParagraph,TextServer::Direction>(set_direction);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_538,(Variant **)0x0,0);
  if (::Variant::needs_deinit[(int)local_3a8] != '\0') {
    ::Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_538);
  D_METHODP((char *)&local_538,(char ***)"get_direction",0);
  auStack_3a0 = (undefined1  [16])0x0;
  local_3a8 = (Rect2 *)0x0;
  pMVar8 = create_method_bind<TextParagraph,TextServer::Direction>(get_direction);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_538,(Variant **)0x0,0);
  if (::Variant::needs_deinit[(int)local_3a8] != '\0') {
    ::Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_538);
  _scs_create((char *)&local_550,true);
  _scs_create((char *)&local_558,true);
  local_538 = "Auto,Light-to-right,Right-to-left";
  local_560 = 0;
  local_568 = 0;
  local_530 = 0x21;
  String::parse_latin1((StrRange *)&local_568);
  local_538 = "direction";
  local_570 = 0;
  local_530 = 9;
  String::parse_latin1((StrRange *)&local_570);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_538,2,(StrRange *)&local_570,2,(StrRange *)&local_568,6,
             &local_560);
  local_578 = 0;
  local_548 = "TextParagraph";
  local_540 = 0xd;
  String::parse_latin1((StrRange *)&local_578);
  StringName::StringName((StringName *)&local_548,(String *)&local_578,false);
  ClassDB::add_property
            ((StringName *)&local_548,(PropertyInfo *)&local_538,(StringName *)&local_558,
             (StringName *)&local_550,-1);
  if ((StringName::configured != '\0') && (local_548 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_578);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_538);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_570);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_568);
  if ((((StringName::configured != '\0') &&
       ((local_560 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_558 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_550 != 0)) {
    StringName::unref();
  }
  D_METHOD<char_const*>((char *)&local_538,"set_custom_punctuation");
  auStack_3a0 = (undefined1  [16])0x0;
  local_3a8 = (Rect2 *)0x0;
  pMVar8 = create_method_bind<TextParagraph,String_const&>(set_custom_punctuation);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_538,(Variant **)0x0,0);
  if (::Variant::needs_deinit[(int)local_3a8] != '\0') {
    ::Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_538);
  D_METHODP((char *)&local_538,(char ***)"get_custom_punctuation",0);
  auStack_3a0 = (undefined1  [16])0x0;
  local_3a8 = (Rect2 *)0x0;
  pMVar8 = create_method_bind<TextParagraph,String>(get_custom_punctuation);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_538,(Variant **)0x0,0);
  if (::Variant::needs_deinit[(int)local_3a8] != '\0') {
    ::Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_538);
  _scs_create((char *)&local_550,true);
  _scs_create((char *)&local_558,true);
  local_538 = "";
  local_560 = 0;
  local_568 = 0;
  local_530 = 0;
  String::parse_latin1((StrRange *)&local_568);
  local_570 = 0;
  local_538 = "custom_punctuation";
  local_530 = 0x12;
  String::parse_latin1((StrRange *)&local_570);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_538,4,(StrRange *)&local_570,0,(StrRange *)&local_568,6,
             &local_560);
  local_548 = "TextParagraph";
  local_578 = 0;
  local_540 = 0xd;
  String::parse_latin1((StrRange *)&local_578);
  StringName::StringName((StringName *)&local_548,(String *)&local_578,false);
  ClassDB::add_property
            ((StringName *)&local_548,(PropertyInfo *)&local_538,(StringName *)&local_558,
             (StringName *)&local_550,-1);
  if ((StringName::configured != '\0') && (local_548 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_578);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_538);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_570);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_568);
  if ((((StringName::configured != '\0') &&
       ((local_560 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_558 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_550 != 0)) {
    StringName::unref();
  }
  D_METHOD<char_const*>((char *)&local_538,"set_orientation");
  auStack_3a0 = (undefined1  [16])0x0;
  local_3a8 = (Rect2 *)0x0;
  pMVar8 = create_method_bind<TextParagraph,TextServer::Orientation>(set_orientation);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_538,(Variant **)0x0,0);
  if (::Variant::needs_deinit[(int)local_3a8] != '\0') {
    ::Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_538);
  D_METHODP((char *)&local_538,(char ***)"get_orientation",0);
  auStack_3a0 = (undefined1  [16])0x0;
  local_3a8 = (Rect2 *)0x0;
  pMVar8 = create_method_bind<TextParagraph,TextServer::Orientation>(get_orientation);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_538,(Variant **)0x0,0);
  if (::Variant::needs_deinit[(int)local_3a8] != '\0') {
    ::Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_538);
  _scs_create((char *)&local_550,true);
  _scs_create((char *)&local_558,true);
  local_538 = "Horizontal,Orientation";
  local_560 = 0;
  local_568 = 0;
  local_530 = 0x16;
  String::parse_latin1((StrRange *)&local_568);
  local_570 = 0;
  local_538 = "orientation";
  local_530 = 0xb;
  String::parse_latin1((StrRange *)&local_570);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_538,2,(StrRange *)&local_570,2,(StrRange *)&local_568,6,
             &local_560);
  local_548 = "TextParagraph";
  local_578 = 0;
  local_540 = 0xd;
  String::parse_latin1((StrRange *)&local_578);
  StringName::StringName((StringName *)&local_548,(String *)&local_578,false);
  ClassDB::add_property
            ((StringName *)&local_548,(PropertyInfo *)&local_538,(StringName *)&local_558,
             (StringName *)&local_550,-1);
  if ((StringName::configured != '\0') && (local_548 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_578);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_538);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_570);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_568);
  if ((((StringName::configured != '\0') &&
       ((local_560 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_558 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_550 != 0)) {
    StringName::unref();
  }
  D_METHOD<char_const*>((char *)&local_538,"set_preserve_invalid");
  auStack_3a0 = (undefined1  [16])0x0;
  local_3a8 = (Rect2 *)0x0;
  pMVar8 = create_method_bind<TextParagraph,bool>(set_preserve_invalid);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_538,(Variant **)0x0,0);
  if (::Variant::needs_deinit[(int)local_3a8] != '\0') {
    ::Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_538);
  D_METHODP((char *)&local_538,(char ***)"get_preserve_invalid",0);
  auStack_3a0 = (undefined1  [16])0x0;
  local_3a8 = (Rect2 *)0x0;
  pMVar8 = create_method_bind<TextParagraph,bool>(get_preserve_invalid);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_538,(Variant **)0x0,0);
  if (::Variant::needs_deinit[(int)local_3a8] != '\0') {
    ::Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_538);
  _scs_create((char *)&local_550,true);
  _scs_create((char *)&local_558,true);
  local_538 = "";
  local_560 = 0;
  local_568 = 0;
  local_530 = 0;
  String::parse_latin1((StrRange *)&local_568);
  local_538 = "preserve_invalid";
  local_570 = 0;
  local_530 = 0x10;
  String::parse_latin1((StrRange *)&local_570);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_538,1,(StrRange *)&local_570,0,(StrRange *)&local_568,6,
             &local_560);
  local_548 = "TextParagraph";
  local_578 = 0;
  local_540 = 0xd;
  String::parse_latin1((StrRange *)&local_578);
  StringName::StringName((StringName *)&local_548,(String *)&local_578,false);
  ClassDB::add_property
            ((StringName *)&local_548,(PropertyInfo *)&local_538,(StringName *)&local_558,
             (StringName *)&local_550,-1);
  if ((StringName::configured != '\0') && (local_548 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_578);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_538);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_570);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_568);
  if (((StringName::configured != '\0') &&
      ((local_560 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (((local_558 == 0 || (StringName::unref(), StringName::configured != '\0')) && (local_550 != 0)
      ))) {
    StringName::unref();
  }
  D_METHOD<char_const*>((char *)&local_538,"set_preserve_control");
  auStack_3a0 = (undefined1  [16])0x0;
  local_3a8 = (Rect2 *)0x0;
  pMVar8 = create_method_bind<TextParagraph,bool>(set_preserve_control);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_538,(Variant **)0x0,0);
  if (::Variant::needs_deinit[(int)local_3a8] != '\0') {
    ::Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_538);
  D_METHODP((char *)&local_538,(char ***)"get_preserve_control",0);
  auStack_3a0 = (undefined1  [16])0x0;
  local_3a8 = (Rect2 *)0x0;
  pMVar8 = create_method_bind<TextParagraph,bool>(get_preserve_control);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_538,(Variant **)0x0,0);
  if (::Variant::needs_deinit[(int)local_3a8] != '\0') {
    ::Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_538);
  _scs_create((char *)&local_550,true);
  _scs_create((char *)&local_558,true);
  local_538 = "";
  local_560 = 0;
  local_568 = 0;
  local_530 = 0;
  String::parse_latin1((StrRange *)&local_568);
  local_538 = "preserve_control";
  local_570 = 0;
  local_530 = 0x10;
  String::parse_latin1((StrRange *)&local_570);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_538,1,(StrRange *)&local_570,0,(StrRange *)&local_568,6,
             &local_560);
  local_548 = "TextParagraph";
  local_578 = 0;
  local_540 = 0xd;
  String::parse_latin1((StrRange *)&local_578);
  StringName::StringName((StringName *)&local_548,(String *)&local_578,false);
  ClassDB::add_property
            ((StringName *)&local_548,(PropertyInfo *)&local_538,(StringName *)&local_558,
             (StringName *)&local_550,-1);
  if ((StringName::configured != '\0') && (local_548 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_578);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_538);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_570);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_568);
  if ((((StringName::configured != '\0') &&
       ((local_560 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_558 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_550 != 0)) {
    StringName::unref();
  }
  D_METHOD<char_const*>((char *)&local_538,"set_bidi_override");
  auStack_3a0 = (undefined1  [16])0x0;
  local_3a8 = (Rect2 *)0x0;
  pMVar8 = create_method_bind<TextParagraph,Array_const&>(set_bidi_override);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_538,(Variant **)0x0,0);
  if (::Variant::needs_deinit[(int)local_3a8] != '\0') {
    ::Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_538);
  local_3b8 = "language";
  local_388 = &local_3b8;
  local_3d8 = &_LC112;
  puStack_3d0 = &_LC113;
  local_3c8 = "font_size";
  pcStack_3c0 = "dropcap_margins";
  local_3b0 = 0;
  local_3a8 = (Rect2 *)&local_3d8;
  ppcStack_390 = &pcStack_3c0;
  auStack_3a0._0_8_ = &puStack_3d0;
  auStack_3a0._8_8_ = &local_3c8;
  D_METHODP((char *)&local_538,(char ***)"set_dropcap",(uint)(Variant *)&local_3a8);
  local_3d8 = (undefined *)0x0;
  puStack_3d0 = (undefined *)0x0;
  ::Variant::Variant((Variant *)&local_298,(Rect2 *)&local_3d8);
  ::Variant::Variant((Variant *)&ppcStack_280,"");
  local_260 = (undefined1  [16])0x0;
  local_268 = 0;
  auStack_3a0._0_8_ = (Variant *)&ppcStack_280;
  local_3a8 = (Rect2 *)&local_298;
  pMVar8 = create_method_bind<TextParagraph,bool,String_const&,Ref<Font>const&,int,Rect2_const&,String_const&>
                     (set_dropcap);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_538,(Variant **)&local_3a8,2);
  pVVar10 = local_250;
  do {
    pVVar1 = pVVar10 + -0x18;
    pVVar10 = pVVar10 + -0x18;
    if (::Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      ::Variant::_clear_internal();
    }
  } while (pVVar10 != (Variant *)&local_298);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_538);
  D_METHODP((char *)&local_538,(char ***)"clear_dropcap",0);
  auStack_290 = (undefined1  [16])0x0;
  local_298 = (Variant *)0x0;
  pMVar8 = create_method_bind<TextParagraph>(clear_dropcap);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_538,(Variant **)0x0,0);
  if (::Variant::needs_deinit[(int)local_298] != '\0') {
    ::Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_538);
  local_3e8 = &_LC139;
  local_278 = &local_3e8;
  local_408 = &_LC112;
  puStack_400 = &_LC113;
  local_3f8 = "font_size";
  puStack_3f0 = puVar7;
  auStack_3a0 = (undefined1  [16])0x0;
  local_3a8 = (Rect2 *)0x0;
  local_3e0 = 0;
  uVar9 = (uint)(Variant *)&local_298;
  local_298 = (Variant *)&local_408;
  ppcStack_280 = &puStack_3f0;
  auStack_290._0_8_ = &puStack_400;
  auStack_290._8_8_ = &local_3f8;
  D_METHODP((char *)&local_538,(char ***)"add_string",uVar9);
  ::Variant::Variant(local_2e8,"");
  ::Variant::Variant(local_2d0,(Variant *)&local_3a8);
  local_2b0 = (undefined1  [16])0x0;
  local_2b8 = 0;
  auStack_290._0_8_ = local_2d0;
  local_298 = local_2e8;
  pMVar8 = create_method_bind<TextParagraph,bool,String_const&,Ref<Font>const&,int,String_const&,Variant_const&>
                     (add_string);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_538,(Variant **)&local_298,2);
  pVVar10 = local_2a0;
  do {
    pVVar1 = pVVar10 + -0x18;
    pVVar10 = pVVar10 + -0x18;
    if (::Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      ::Variant::_clear_internal();
    }
  } while (pVVar10 != local_2e8);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_538);
  if (::Variant::needs_deinit[(int)local_3a8] != '\0') {
    ::Variant::_clear_internal();
  }
  local_358 = "baseline";
  local_278 = &local_358;
  local_378 = &_LC107;
  puStack_370 = &_LC108;
  local_368 = "inline_align";
  pcStack_360 = "length";
  auStack_290._8_8_ = &local_368;
  auStack_290._0_8_ = &puStack_370;
  local_350 = 0;
  local_298 = (Variant *)&local_378;
  ppcStack_280 = &pcStack_360;
  D_METHODP((char *)&local_538,(char ***)"add_object",uVar9);
  ::Variant::Variant((Variant *)&local_108,5);
  ::Variant::Variant((Variant *)&ppuStack_f0,1);
  ::Variant::Variant(local_d8,0.0);
  local_b8 = (undefined1  [16])0x0;
  auStack_290._8_8_ = local_d8;
  auStack_290._0_8_ = (Variant *)&ppuStack_f0;
  local_c0 = 0;
  local_298 = (Variant *)&local_108;
  pMVar8 = create_method_bind<TextParagraph,bool,Variant,Vector2_const&,InlineAlignment,int,float>
                     (add_object);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_538,(Variant **)&local_298,3);
  pVVar10 = (Variant *)&local_a8;
  do {
    pVVar1 = pVVar10 + -0x18;
    pVVar10 = pVVar10 + -0x18;
    if (::Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      ::Variant::_clear_internal();
    }
  } while (pVVar10 != (Variant *)&local_108);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_538);
  local_4c8 = &_LC107;
  puStack_4c0 = &_LC108;
  local_4b8 = "inline_align";
  puStack_4b0 = puVar6;
  local_4a8 = 0;
  uVar9 = (uint)(Variant *)&local_108;
  local_108 = (Variant *)&local_4c8;
  ppuStack_f0 = &puStack_4b0;
  auStack_100._0_8_ = &puStack_4c0;
  auStack_100._8_8_ = &local_4b8;
  D_METHODP((char *)&local_538,(char ***)"resize_object",uVar9);
  ::Variant::Variant((Variant *)&local_248,5);
  ::Variant::Variant(local_230,0.0);
  local_210 = (undefined1  [16])0x0;
  local_218 = 0;
  auStack_100._0_8_ = local_230;
  local_108 = (Variant *)&local_248;
  pMVar8 = create_method_bind<TextParagraph,bool,Variant,Vector2_const&,InlineAlignment,float>
                     (resize_object);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_538,(Variant **)&local_108,2);
  pVVar10 = local_200;
  do {
    pVVar1 = pVVar10 + -0x18;
    pVVar10 = pVVar10 + -0x18;
    if (::Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      ::Variant::_clear_internal();
    }
  } while (pVVar10 != (Variant *)&local_248);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_538);
  D_METHOD<char_const*>((char *)&local_538,"set_alignment");
  auStack_100 = (undefined1  [16])0x0;
  local_108 = (Variant *)0x0;
  pMVar8 = create_method_bind<TextParagraph,HorizontalAlignment>(set_alignment);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_538,(Variant **)0x0,0);
  if (::Variant::needs_deinit[(int)local_108] != '\0') {
    ::Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_538);
  D_METHODP((char *)&local_538,(char ***)"get_alignment",0);
  auStack_100 = (undefined1  [16])0x0;
  local_108 = (Variant *)0x0;
  pMVar8 = create_method_bind<TextParagraph,HorizontalAlignment>(get_alignment);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_538,(Variant **)0x0,0);
  if (::Variant::needs_deinit[(int)local_108] != '\0') {
    ::Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_538);
  _scs_create((char *)&local_550,true);
  _scs_create((char *)&local_558,true);
  local_538 = "Left,Center,Right,Fill";
  local_560 = 0;
  local_568 = 0;
  local_530 = 0x16;
  String::parse_latin1((StrRange *)&local_568);
  local_570 = 0;
  local_538 = "alignment";
  local_530 = 9;
  String::parse_latin1((StrRange *)&local_570);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_538,2,(StrRange *)&local_570,2,(StrRange *)&local_568,6,
             &local_560);
  local_548 = "TextParagraph";
  local_578 = 0;
  local_540 = 0xd;
  String::parse_latin1((StrRange *)&local_578);
  StringName::StringName((StringName *)&local_548,(String *)&local_578,false);
  ClassDB::add_property
            ((StringName *)&local_548,(PropertyInfo *)&local_538,(StringName *)&local_558,
             (StringName *)&local_550,-1);
  if ((StringName::configured != '\0') && (local_548 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_578);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_538);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_570);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_568);
  if ((((StringName::configured != '\0') &&
       ((local_560 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_558 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_550 != 0)) {
    StringName::unref();
  }
  D_METHOD<char_const*>((char *)&local_538,"tab_align");
  auStack_100 = (undefined1  [16])0x0;
  local_108 = (Variant *)0x0;
  pMVar8 = create_method_bind<TextParagraph,Vector<float>const&>(tab_align);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_538,(Variant **)0x0,0);
  if (::Variant::needs_deinit[(int)local_108] != '\0') {
    ::Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_538);
  D_METHOD<char_const*>((char *)&local_538,"set_break_flags");
  auStack_100 = (undefined1  [16])0x0;
  local_108 = (Variant *)0x0;
  pMVar8 = create_method_bind<TextParagraph,BitField<TextServer::LineBreakFlag>>(set_break_flags);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_538,(Variant **)0x0,0);
  if (::Variant::needs_deinit[(int)local_108] != '\0') {
    ::Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_538);
  D_METHODP((char *)&local_538,(char ***)"get_break_flags",0);
  auStack_100 = (undefined1  [16])0x0;
  local_108 = (Variant *)0x0;
  pMVar8 = create_method_bind<TextParagraph,BitField<TextServer::LineBreakFlag>>(get_break_flags);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_538,(Variant **)0x0,0);
  if (::Variant::needs_deinit[(int)local_108] != '\0') {
    ::Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_538);
  _scs_create((char *)&local_550,true);
  _scs_create((char *)&local_558,true);
  local_538 = "Mandatory,Word Bound,Grapheme Bound,Adaptive,Trim Spaces";
  local_560 = 0;
  local_568 = 0;
  local_530 = 0x38;
  String::parse_latin1((StrRange *)&local_568);
  local_538 = "break_flags";
  local_570 = 0;
  local_530 = 0xb;
  String::parse_latin1((StrRange *)&local_570);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_538,2,(StrRange *)&local_570,6,(StrRange *)&local_568,6,
             &local_560);
  local_548 = "TextParagraph";
  local_578 = 0;
  local_540 = 0xd;
  String::parse_latin1((StrRange *)&local_578);
  StringName::StringName((StringName *)&local_548,(String *)&local_578,false);
  ClassDB::add_property
            ((StringName *)&local_548,(PropertyInfo *)&local_538,(StringName *)&local_558,
             (StringName *)&local_550,-1);
  if ((StringName::configured != '\0') && (local_548 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_578);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_538);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_570);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_568);
  if ((((StringName::configured != '\0') &&
       ((local_560 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_558 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_550 != 0)) {
    StringName::unref();
  }
  D_METHOD<char_const*>((char *)&local_538,"set_justification_flags");
  auStack_100 = (undefined1  [16])0x0;
  local_108 = (Variant *)0x0;
  pMVar8 = create_method_bind<TextParagraph,BitField<TextServer::JustificationFlag>>
                     (set_justification_flags);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_538,(Variant **)0x0,0);
  if (::Variant::needs_deinit[(int)local_108] != '\0') {
    ::Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_538);
  D_METHODP((char *)&local_538,(char ***)"get_justification_flags",0);
  auStack_100 = (undefined1  [16])0x0;
  local_108 = (Variant *)0x0;
  pMVar8 = create_method_bind<TextParagraph,BitField<TextServer::JustificationFlag>>
                     (get_justification_flags);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_538,(Variant **)0x0,0);
  if (::Variant::needs_deinit[(int)local_108] != '\0') {
    ::Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_538);
  _scs_create((char *)&local_550,true);
  _scs_create((char *)&local_558,true);
  local_538 = 
  "Kashida Justification:1,Word Justification:2,Trim Edge Spaces After Justification:4,Justify Only After Last Tab:8,Constrain Ellipsis:16,Skip Last Line:32,Skip Last Line With Visible Characters:64,Do Not Skip Single Line:128"
  ;
  local_560 = 0;
  local_568 = 0;
  local_530 = 0xdf;
  String::parse_latin1((StrRange *)&local_568);
  local_538 = "justification_flags";
  local_570 = 0;
  local_530 = 0x13;
  String::parse_latin1((StrRange *)&local_570);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_538,2,(StrRange *)&local_570,6,(StrRange *)&local_568,6,
             &local_560);
  local_548 = "TextParagraph";
  local_578 = 0;
  local_540 = 0xd;
  String::parse_latin1((StrRange *)&local_578);
  StringName::StringName((StringName *)&local_548,(String *)&local_578,false);
  ClassDB::add_property
            ((StringName *)&local_548,(PropertyInfo *)&local_538,(StringName *)&local_558,
             (StringName *)&local_550,-1);
  if ((StringName::configured != '\0') && (local_548 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_578);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_538);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_570);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_568);
  if (((StringName::configured != '\0') &&
      ((local_560 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (((local_558 == 0 || (StringName::unref(), StringName::configured != '\0')) && (local_550 != 0)
      ))) {
    StringName::unref();
  }
  D_METHOD<char_const*>((char *)&local_538,"set_text_overrun_behavior");
  auStack_100 = (undefined1  [16])0x0;
  local_108 = (Variant *)0x0;
  pMVar8 = create_method_bind<TextParagraph,TextServer::OverrunBehavior>(set_text_overrun_behavior);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_538,(Variant **)0x0,0);
  if (::Variant::needs_deinit[(int)local_108] != '\0') {
    ::Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_538);
  D_METHODP((char *)&local_538,(char ***)"get_text_overrun_behavior",0);
  auStack_100 = (undefined1  [16])0x0;
  local_108 = (Variant *)0x0;
  pMVar8 = create_method_bind<TextParagraph,TextServer::OverrunBehavior>(get_text_overrun_behavior);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_538,(Variant **)0x0,0);
  if (::Variant::needs_deinit[(int)local_108] != '\0') {
    ::Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_538);
  _scs_create((char *)&local_550,true);
  _scs_create((char *)&local_558,true);
  local_538 = "Trim Nothing,Trim Characters,Trim Words,Ellipsis,Word Ellipsis";
  local_560 = 0;
  local_568 = 0;
  local_530 = 0x3e;
  String::parse_latin1((StrRange *)&local_568);
  local_538 = "text_overrun_behavior";
  local_570 = 0;
  local_530 = 0x15;
  String::parse_latin1((StrRange *)&local_570);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_538,2,(StrRange *)&local_570,2,(StrRange *)&local_568,6,
             &local_560);
  local_548 = "TextParagraph";
  local_578 = 0;
  local_540 = 0xd;
  String::parse_latin1((StrRange *)&local_578);
  StringName::StringName((StringName *)&local_548,(String *)&local_578,false);
  ClassDB::add_property
            ((StringName *)&local_548,(PropertyInfo *)&local_538,(StringName *)&local_558,
             (StringName *)&local_550,-1);
  if ((StringName::configured != '\0') && (local_548 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_578);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_538);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_570);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_568);
  if ((((StringName::configured != '\0') &&
       ((local_560 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_558 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_550 != 0)) {
    StringName::unref();
  }
  D_METHOD<char_const*>((char *)&local_538,"set_ellipsis_char");
  auStack_100 = (undefined1  [16])0x0;
  local_108 = (Variant *)0x0;
  pMVar8 = create_method_bind<TextParagraph,String_const&>(set_ellipsis_char);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_538,(Variant **)0x0,0);
  if (::Variant::needs_deinit[(int)local_108] != '\0') {
    ::Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_538);
  D_METHODP((char *)&local_538,(char ***)"get_ellipsis_char",0);
  auStack_100 = (undefined1  [16])0x0;
  local_108 = (Variant *)0x0;
  pMVar8 = create_method_bind<TextParagraph,String>(get_ellipsis_char);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_538,(Variant **)0x0,0);
  if (::Variant::needs_deinit[(int)local_108] != '\0') {
    ::Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_538);
  _scs_create((char *)&local_550,true);
  _scs_create((char *)&local_558,true);
  local_538 = "";
  local_560 = 0;
  local_568 = 0;
  local_530 = 0;
  String::parse_latin1((StrRange *)&local_568);
  local_538 = "ellipsis_char";
  local_570 = 0;
  local_530 = 0xd;
  String::parse_latin1((StrRange *)&local_570);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_538,4,(StrRange *)&local_570,0,(StrRange *)&local_568,6,
             &local_560);
  local_548 = "TextParagraph";
  local_578 = 0;
  local_540 = 0xd;
  String::parse_latin1((StrRange *)&local_578);
  StringName::StringName((StringName *)&local_548,(String *)&local_578,false);
  ClassDB::add_property
            ((StringName *)&local_548,(PropertyInfo *)&local_538,(StringName *)&local_558,
             (StringName *)&local_550,-1);
  if ((StringName::configured != '\0') && (local_548 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_578);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_538);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_570);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_568);
  if (((StringName::configured != '\0') &&
      ((local_560 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (((local_558 == 0 || (StringName::unref(), StringName::configured != '\0')) && (local_550 != 0)
      ))) {
    StringName::unref();
  }
  D_METHOD<char_const*>((char *)&local_538,"set_width");
  auStack_100 = (undefined1  [16])0x0;
  local_108 = (Variant *)0x0;
  pMVar8 = create_method_bind<TextParagraph,float>(set_width);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_538,(Variant **)0x0,0);
  if (::Variant::needs_deinit[(int)local_108] != '\0') {
    ::Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_538);
  D_METHODP((char *)&local_538,(char ***)"get_width",0);
  auStack_100 = (undefined1  [16])0x0;
  local_108 = (Variant *)0x0;
  pMVar8 = create_method_bind<TextParagraph,float>(get_width);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_538,(Variant **)0x0,0);
  if (::Variant::needs_deinit[(int)local_108] != '\0') {
    ::Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_538);
  _scs_create((char *)&local_550,true);
  _scs_create((char *)&local_558,true);
  local_538 = "";
  local_560 = 0;
  local_568 = 0;
  local_530 = 0;
  String::parse_latin1((StrRange *)&local_568);
  local_570 = 0;
  local_538 = "width";
  local_530 = 5;
  String::parse_latin1((StrRange *)&local_570);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_538,3,(StrRange *)&local_570,0,(StrRange *)&local_568,6,
             &local_560);
  local_548 = "TextParagraph";
  local_578 = 0;
  local_540 = 0xd;
  String::parse_latin1((StrRange *)&local_578);
  StringName::StringName((StringName *)&local_548,(String *)&local_578,false);
  ClassDB::add_property
            ((StringName *)&local_548,(PropertyInfo *)&local_538,(StringName *)&local_558,
             (StringName *)&local_550,-1);
  if ((StringName::configured != '\0') && (local_548 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_578);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_538);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_570);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_568);
  if ((((StringName::configured != '\0') &&
       ((local_560 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_558 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_550 != 0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_538,(char ***)"get_non_wrapped_size",0);
  auStack_100 = (undefined1  [16])0x0;
  local_108 = (Variant *)0x0;
  pMVar8 = create_method_bind<TextParagraph,Vector2>(get_non_wrapped_size);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_538,(Variant **)0x0,0);
  if (::Variant::needs_deinit[(int)local_108] != '\0') {
    ::Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_538);
  D_METHODP((char *)&local_538,(char ***)"get_size",0);
  auStack_100 = (undefined1  [16])0x0;
  local_108 = (Variant *)0x0;
  pMVar8 = create_method_bind<TextParagraph,Vector2>(get_size);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_538,(Variant **)0x0,0);
  if (::Variant::needs_deinit[(int)local_108] != '\0') {
    ::Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_538);
  D_METHODP((char *)&local_538,(char ***)"get_rid",0);
  auStack_100 = (undefined1  [16])0x0;
  local_108 = (Variant *)0x0;
  pMVar8 = create_method_bind<TextParagraph,RID>(get_rid);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_538,(Variant **)0x0,0);
  if (::Variant::needs_deinit[(int)local_108] != '\0') {
    ::Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_538);
  D_METHOD<char_const*>((char *)&local_538,"get_line_rid");
  auStack_100 = (undefined1  [16])0x0;
  local_108 = (Variant *)0x0;
  pMVar8 = create_method_bind<TextParagraph,RID,int>(get_line_rid);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_538,(Variant **)0x0,0);
  if (::Variant::needs_deinit[(int)local_108] != '\0') {
    ::Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_538);
  D_METHODP((char *)&local_538,(char ***)"get_dropcap_rid",0);
  auStack_100 = (undefined1  [16])0x0;
  local_108 = (Variant *)0x0;
  pMVar8 = create_method_bind<TextParagraph,RID>(get_dropcap_rid);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_538,(Variant **)0x0,0);
  if (::Variant::needs_deinit[(int)local_108] != '\0') {
    ::Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_538);
  D_METHODP((char *)&local_538,(char ***)"get_line_count",0);
  auStack_100 = (undefined1  [16])0x0;
  local_108 = (Variant *)0x0;
  pMVar8 = create_method_bind<TextParagraph,int>(get_line_count);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_538,(Variant **)0x0,0);
  if (::Variant::needs_deinit[(int)local_108] != '\0') {
    ::Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_538);
  D_METHOD<char_const*>((char *)&local_538,"set_max_lines_visible");
  auStack_100 = (undefined1  [16])0x0;
  local_108 = (Variant *)0x0;
  pMVar8 = create_method_bind<TextParagraph,int>(set_max_lines_visible);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_538,(Variant **)0x0,0);
  if (::Variant::needs_deinit[(int)local_108] != '\0') {
    ::Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_538);
  D_METHODP((char *)&local_538,(char ***)"get_max_lines_visible",0);
  auStack_100 = (undefined1  [16])0x0;
  local_108 = (Variant *)0x0;
  pMVar8 = create_method_bind<TextParagraph,int>(get_max_lines_visible);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_538,(Variant **)0x0,0);
  if (::Variant::needs_deinit[(int)local_108] != '\0') {
    ::Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_538);
  _scs_create((char *)&local_550,true);
  _scs_create((char *)&local_558,true);
  local_538 = "";
  local_560 = 0;
  local_568 = 0;
  local_530 = 0;
  String::parse_latin1((StrRange *)&local_568);
  local_570 = 0;
  local_538 = "max_lines_visible";
  local_530 = 0x11;
  String::parse_latin1((StrRange *)&local_570);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_538,2,(StrRange *)&local_570,0,(StrRange *)&local_568,6,
             &local_560);
  local_548 = "TextParagraph";
  local_578 = 0;
  local_540 = 0xd;
  String::parse_latin1((StrRange *)&local_578);
  StringName::StringName((StringName *)&local_548,(String *)&local_578,false);
  ClassDB::add_property
            ((StringName *)&local_548,(PropertyInfo *)&local_538,(StringName *)&local_558,
             (StringName *)&local_550,-1);
  if ((StringName::configured != '\0') && (local_548 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_578);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_538);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_570);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_568);
  if ((((StringName::configured != '\0') &&
       ((local_560 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_558 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_550 != 0)) {
    StringName::unref();
  }
  D_METHOD<char_const*>((char *)&local_538,"set_line_spacing");
  auStack_100 = (undefined1  [16])0x0;
  local_108 = (Variant *)0x0;
  pMVar8 = create_method_bind<TextParagraph,float>(set_line_spacing);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_538,(Variant **)0x0,0);
  if (::Variant::needs_deinit[(int)local_108] != '\0') {
    ::Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_538);
  D_METHODP((char *)&local_538,(char ***)"get_line_spacing",0);
  auStack_100 = (undefined1  [16])0x0;
  local_108 = (Variant *)0x0;
  pMVar8 = create_method_bind<TextParagraph,float>(get_line_spacing);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_538,(Variant **)0x0,0);
  if (::Variant::needs_deinit[(int)local_108] != '\0') {
    ::Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_538);
  _scs_create((char *)&local_550,true);
  _scs_create((char *)&local_558,true);
  local_538 = "";
  local_560 = 0;
  local_568 = 0;
  local_530 = 0;
  String::parse_latin1((StrRange *)&local_568);
  local_570 = 0;
  local_538 = "line_spacing";
  local_530 = 0xc;
  String::parse_latin1((StrRange *)&local_570);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_538,3,(StrRange *)&local_570,0,(StrRange *)&local_568,6,
             &local_560);
  local_548 = "TextParagraph";
  local_578 = 0;
  local_540 = 0xd;
  String::parse_latin1((StrRange *)&local_578);
  StringName::StringName((StringName *)&local_548,(String *)&local_578,false);
  ClassDB::add_property
            ((StringName *)&local_548,(PropertyInfo *)&local_538,(StringName *)&local_558,
             (StringName *)&local_550,-1);
  if ((StringName::configured != '\0') && (local_548 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_578);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_538);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_570);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_568);
  if ((((StringName::configured != '\0') &&
       ((local_560 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_558 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_550 != 0)) {
    StringName::unref();
  }
  D_METHOD<char_const*>((char *)&local_538,"get_line_objects");
  auStack_100 = (undefined1  [16])0x0;
  local_108 = (Variant *)0x0;
  pMVar8 = create_method_bind<TextParagraph,Array,int>(get_line_objects);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_538,(Variant **)0x0,0);
  if (::Variant::needs_deinit[(int)local_108] != '\0') {
    ::Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_538);
  local_4f8 = 0;
  local_508 = puVar4;
  puStack_500 = &_LC107;
  auStack_100._0_8_ = &puStack_500;
  local_108 = (Variant *)&local_508;
  D_METHODP((char *)&local_538,(char ***)"get_line_object_rect",uVar9);
  auStack_100 = (undefined1  [16])0x0;
  local_108 = (Variant *)0x0;
  pMVar8 = create_method_bind<TextParagraph,Rect2,int,Variant>(get_line_object_rect);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_538,(Variant **)0x0,0);
  if (::Variant::needs_deinit[(int)local_108] != '\0') {
    ::Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_538);
  local_248 = &_LC105;
  uStack_240 = 0;
  local_108 = (Variant *)&local_248;
  D_METHODP((char *)&local_538,(char ***)"get_line_size",uVar9);
  auStack_100 = (undefined1  [16])0x0;
  local_108 = (Variant *)0x0;
  pMVar8 = create_method_bind<TextParagraph,Vector2,int>(get_line_size);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_538,(Variant **)0x0,0);
  if (::Variant::needs_deinit[(int)local_108] != '\0') {
    ::Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_538);
  D_METHOD<char_const*>((char *)&local_538,"get_line_range");
  auStack_100 = (undefined1  [16])0x0;
  local_108 = (Variant *)0x0;
  pMVar8 = create_method_bind<TextParagraph,Vector2i,int>(get_line_range);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_538,(Variant **)0x0,0);
  if (::Variant::needs_deinit[(int)local_108] != '\0') {
    ::Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_538);
  D_METHOD<char_const*>((char *)&local_538,"get_line_ascent");
  auStack_100 = (undefined1  [16])0x0;
  local_108 = (Variant *)0x0;
  pMVar8 = create_method_bind<TextParagraph,float,int>(get_line_ascent);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_538,(Variant **)0x0,0);
  if (::Variant::needs_deinit[(int)local_108] != '\0') {
    ::Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_538);
  D_METHOD<char_const*>((char *)&local_538,"get_line_descent");
  auStack_100 = (undefined1  [16])0x0;
  local_108 = (Variant *)0x0;
  pMVar8 = create_method_bind<TextParagraph,float,int>(get_line_descent);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_538,(Variant **)0x0,0);
  if (::Variant::needs_deinit[(int)local_108] != '\0') {
    ::Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_538);
  D_METHOD<char_const*>((char *)&local_538,"get_line_width");
  auStack_100 = (undefined1  [16])0x0;
  local_108 = (Variant *)0x0;
  pMVar8 = create_method_bind<TextParagraph,float,int>(get_line_width);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_538,(Variant **)0x0,0);
  if (::Variant::needs_deinit[(int)local_108] != '\0') {
    ::Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_538);
  D_METHOD<char_const*>((char *)&local_538,"get_line_underline_position");
  auStack_100 = (undefined1  [16])0x0;
  local_108 = (Variant *)0x0;
  pMVar8 = create_method_bind<TextParagraph,float,int>(get_line_underline_position);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_538,(Variant **)0x0,0);
  if (::Variant::needs_deinit[(int)local_108] != '\0') {
    ::Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_538);
  D_METHOD<char_const*>((char *)&local_538,"get_line_underline_thickness");
  auStack_100 = (undefined1  [16])0x0;
  local_108 = (Variant *)0x0;
  pMVar8 = create_method_bind<TextParagraph,float,int>(get_line_underline_thickness);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_538,(Variant **)0x0,0);
  if (::Variant::needs_deinit[(int)local_108] != '\0') {
    ::Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_538);
  D_METHODP((char *)&local_538,(char ***)"get_dropcap_size",0);
  auStack_100 = (undefined1  [16])0x0;
  local_108 = (Variant *)0x0;
  pMVar8 = create_method_bind<TextParagraph,Vector2>(get_dropcap_size);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_538,(Variant **)0x0,0);
  if (::Variant::needs_deinit[(int)local_108] != '\0') {
    ::Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_538);
  D_METHODP((char *)&local_538,(char ***)"get_dropcap_lines",0);
  auStack_100 = (undefined1  [16])0x0;
  local_108 = (Variant *)0x0;
  pMVar8 = create_method_bind<TextParagraph,int>(get_dropcap_lines);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_538,(Variant **)0x0,0);
  if (::Variant::needs_deinit[(int)local_108] != '\0') {
    ::Variant::_clear_internal();
  }
  pVVar10 = local_110;
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_538);
  local_438 = "canvas";
  puStack_430 = &_LC102;
  local_428 = puVar3;
  puStack_420 = puVar5;
  local_418 = 0;
  local_108 = (Variant *)&local_438;
  ppuStack_f0 = &puStack_420;
  auStack_100._0_8_ = &puStack_430;
  auStack_100._8_8_ = &local_428;
  D_METHODP((char *)&local_538,(char ***)&_LC182,uVar9);
  local_298 = (Variant *)__LC183;
  auStack_290._0_8_ = _UNK_0012e0d8;
  local_248 = (undefined *)__LC183;
  uStack_240 = _UNK_0012e0d8;
  ::Variant::Variant((Variant *)&local_158,(Color *)&local_298);
  ::Variant::Variant(local_140,(Color *)&local_248);
  local_120 = (undefined1  [16])0x0;
  local_128 = 0;
  auStack_100._0_8_ = local_140;
  local_108 = (Variant *)&local_158;
  pMVar8 = create_method_bind<TextParagraph,RID,Vector2_const&,Color_const&,Color_const&>(draw);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_538,(Variant **)&local_108,2);
  do {
    pVVar1 = pVVar10 + -0x18;
    pVVar10 = pVVar10 + -0x18;
    if (::Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      ::Variant::_clear_internal();
    }
  } while (pVVar10 != (Variant *)&local_158);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_538);
  local_2f8 = "dc_color";
  local_e8 = &local_2f8;
  local_318 = "canvas";
  puStack_310 = &_LC102;
  local_308 = "outline_size";
  puStack_300 = puVar3;
  auStack_100._8_8_ = &local_308;
  auStack_100._0_8_ = &puStack_310;
  local_2f0 = 0;
  local_108 = (Variant *)&local_318;
  ppuStack_f0 = &puStack_300;
  D_METHODP((char *)&local_538,(char ***)"draw_outline",uVar9);
  local_248 = (undefined *)__LC183;
  uStack_240 = _UNK_0012e0d8;
  local_158 = __LC183;
  uStack_150 = _UNK_0012e0d8;
  ::Variant::Variant((Variant *)&local_a8,1);
  ::Variant::Variant((Variant *)&ppcStack_90,(Color *)&local_248);
  ::Variant::Variant(local_78,(Color *)&local_158);
  pVVar10 = local_48;
  local_58 = (undefined1  [16])0x0;
  auStack_100._8_8_ = local_78;
  auStack_100._0_8_ = (Variant *)&ppcStack_90;
  local_60 = 0;
  local_108 = (Variant *)&local_a8;
  pMVar8 = create_method_bind<TextParagraph,RID,Vector2_const&,int,Color_const&,Color_const&>
                     (draw_outline);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_538,(Variant **)&local_108,3);
  do {
    pVVar1 = pVVar10 + -0x18;
    pVVar10 = pVVar10 + -0x18;
    if (::Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      ::Variant::_clear_internal();
    }
  } while (pVVar10 != (Variant *)&local_a8);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_538);
  local_468 = "canvas";
  puStack_460 = &_LC102;
  local_458 = puVar4;
  puStack_450 = puVar3;
  auStack_a0._8_8_ = &local_458;
  auStack_a0._0_8_ = &puStack_460;
  local_448 = 0;
  uVar9 = (uint)(Variant *)&local_a8;
  local_a8 = (Variant *)&local_468;
  ppcStack_90 = &puStack_450;
  D_METHODP((char *)&local_538,(char ***)"draw_line",uVar9);
  local_158 = __LC183;
  uStack_150 = _UNK_0012e0d8;
  ::Variant::Variant((Variant *)&local_a8,(Color *)&local_158);
  local_88 = (undefined1  [16])0x0;
  ppcStack_90 = (char **)0x0;
  local_108 = (Variant *)&local_a8;
  pMVar8 = create_method_bind<TextParagraph,RID,Vector2_const&,int,Color_const&>(draw_line);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_538,(Variant **)&local_108,1);
  if (::Variant::needs_deinit[(int)ppcStack_90] != '\0') {
    ::Variant::_clear_internal();
  }
  if (::Variant::needs_deinit[(int)local_a8] != '\0') {
    ::Variant::_clear_internal();
  }
  pVVar10 = local_160;
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_538);
  local_328 = "color";
  local_348 = "canvas";
  puStack_340 = &_LC102;
  local_338 = puVar4;
  pcStack_330 = "outline_size";
  local_88._0_8_ = &local_328;
  local_320 = 0;
  local_a8 = (Variant *)&local_348;
  ppcStack_90 = &pcStack_330;
  auStack_a0._0_8_ = &puStack_340;
  auStack_a0._8_8_ = &local_338;
  D_METHODP((char *)&local_538,(char ***)"draw_line_outline",uVar9);
  local_108 = (Variant *)__LC183;
  auStack_100._0_8_ = _UNK_0012e0d8;
  ::Variant::Variant(local_1a8,1);
  ::Variant::Variant(local_190,(Color *)&local_108);
  local_170 = (undefined1  [16])0x0;
  local_178 = 0;
  auStack_a0._0_8_ = local_190;
  local_a8 = local_1a8;
  pMVar8 = create_method_bind<TextParagraph,RID,Vector2_const&,int,int,Color_const&>
                     (draw_line_outline);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_538,(Variant **)&local_a8,2);
  do {
    pVVar1 = pVVar10 + -0x18;
    pVVar10 = pVVar10 + -0x18;
    if (::Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      ::Variant::_clear_internal();
    }
  } while (pVVar10 != local_1a8);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_538);
  local_4d8 = "color";
  local_4e8 = "canvas";
  puStack_4e0 = &_LC102;
  auStack_a0._8_8_ = &local_4d8;
  auStack_a0._0_8_ = &puStack_4e0;
  local_4d0 = 0;
  local_a8 = (Variant *)&local_4e8;
  D_METHODP((char *)&local_538,(char ***)"draw_dropcap",uVar9);
  local_158 = __LC183;
  uStack_150 = _UNK_0012e0d8;
  ::Variant::Variant((Variant *)&local_a8,(Color *)&local_158);
  local_88 = (undefined1  [16])0x0;
  ppcStack_90 = (char **)0x0;
  local_108 = (Variant *)&local_a8;
  pMVar8 = create_method_bind<TextParagraph,RID,Vector2_const&,Color_const&>(draw_dropcap);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_538,(Variant **)&local_108,1);
  if (::Variant::needs_deinit[(int)ppcStack_90] == '\0') {
    cVar2 = ::Variant::needs_deinit[(int)local_a8];
  }
  else {
    ::Variant::_clear_internal();
    cVar2 = ::Variant::needs_deinit[(int)local_a8];
  }
  if (cVar2 != '\0') {
    ::Variant::_clear_internal();
  }
  pVVar10 = local_1b0;
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_538);
  local_498 = "canvas";
  puStack_490 = &_LC102;
  local_488 = "outline_size";
  puStack_480 = puVar3;
  local_478 = 0;
  local_a8 = (Variant *)&local_498;
  ppcStack_90 = &puStack_480;
  auStack_a0._0_8_ = &puStack_490;
  auStack_a0._8_8_ = &local_488;
  D_METHODP((char *)&local_538,(char ***)"draw_dropcap_outline",uVar9);
  local_108 = (Variant *)__LC183;
  auStack_100._0_8_ = _UNK_0012e0d8;
  ::Variant::Variant(local_1f8,1);
  ::Variant::Variant(local_1e0,(Color *)&local_108);
  local_1c0 = (undefined1  [16])0x0;
  local_1c8 = 0;
  auStack_a0._0_8_ = local_1e0;
  local_a8 = local_1f8;
  pMVar8 = create_method_bind<TextParagraph,RID,Vector2_const&,int,Color_const&>
                     (draw_dropcap_outline);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_538,(Variant **)&local_a8,2);
  do {
    pVVar1 = pVVar10 + -0x18;
    pVVar10 = pVVar10 + -0x18;
    if (::Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      ::Variant::_clear_internal();
    }
  } while (pVVar10 != local_1f8);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_538);
  D_METHOD<char_const*>((char *)&local_538,"hit_test");
  auStack_a0 = (undefined1  [16])0x0;
  local_a8 = (Variant *)0x0;
  pMVar8 = create_method_bind<TextParagraph,int,Vector2_const&>(hit_test);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_538,(Variant **)0x0,0);
  if (::Variant::needs_deinit[(int)local_a8] != '\0') {
    ::Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_538);
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



/* RefCounted::is_class_ptr(void*) const */

uint __thiscall RefCounted::is_class_ptr(RefCounted *this,void *param_1)

{
  return (uint)CONCAT71(0x12df,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12df,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
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



/* TextParagraph::is_class_ptr(void*) const */

uint __thiscall TextParagraph::is_class_ptr(TextParagraph *this,void *param_1)

{
  return (uint)CONCAT71(0x12df,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12df,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12df,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* TextParagraph::_getv(StringName const&, Variant&) const */

undefined8 TextParagraph::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* TextParagraph::_setv(StringName const&, Variant const&) */

undefined8 TextParagraph::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* TextParagraph::_validate_propertyv(PropertyInfo&) const */

void TextParagraph::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* TextParagraph::_property_can_revertv(StringName const&) const */

undefined8 TextParagraph::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* TextParagraph::_property_get_revertv(StringName const&, Variant&) const */

undefined8 TextParagraph::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* TextParagraph::_notificationv(int, bool) */

void TextParagraph::_notificationv(int param_1,bool param_2)

{
  return;
}



/* MethodBindTRC<int, Vector2 const&>::_gen_argument_type(int) const */

char __thiscall
MethodBindTRC<int,Vector2_const&>::_gen_argument_type
          (MethodBindTRC<int,Vector2_const&> *this,int param_1)

{
  return (-(param_1 == 0) & 3U) + 2;
}



/* MethodBindTRC<int, Vector2 const&>::get_argument_meta(int) const */

uint __thiscall
MethodBindTRC<int,Vector2_const&>::get_argument_meta
          (MethodBindTRC<int,Vector2_const&> *this,int param_1)

{
  return param_1 >> 0x1f & 3;
}



/* MethodBindTC<RID, Vector2 const&, Color const&>::get_argument_meta(int) const */

undefined8 MethodBindTC<RID,Vector2_const&,Color_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTC<RID, Vector2 const&, int, int, Color const&>::get_argument_meta(int) const */

byte __thiscall
MethodBindTC<RID,Vector2_const&,int,int,Color_const&>::get_argument_meta
          (MethodBindTC<RID,Vector2_const&,int,int,Color_const&> *this,int param_1)

{
  return -(param_1 - 2U < 2) & 3;
}



/* MethodBindTC<RID, Vector2 const&, int, Color const&>::get_argument_meta(int) const */

char __thiscall
MethodBindTC<RID,Vector2_const&,int,Color_const&>::get_argument_meta
          (MethodBindTC<RID,Vector2_const&,int,Color_const&> *this,int param_1)

{
  return (param_1 == 2) * '\x03';
}



/* MethodBindTC<RID, Vector2 const&, int, Color const&, Color const&>::get_argument_meta(int) const
    */

char __thiscall
MethodBindTC<RID,Vector2_const&,int,Color_const&,Color_const&>::get_argument_meta
          (MethodBindTC<RID,Vector2_const&,int,Color_const&,Color_const&> *this,int param_1)

{
  return (param_1 == 2) * '\x03';
}



/* MethodBindTC<RID, Vector2 const&, Color const&, Color const&>::get_argument_meta(int) const */

undefined8
MethodBindTC<RID,Vector2_const&,Color_const&,Color_const&>::get_argument_meta(int param_1)

{
  return 0;
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



/* MethodBindTRC<Vector2i, int>::_gen_argument_type(int) const */

int __thiscall
MethodBindTRC<Vector2i,int>::_gen_argument_type(MethodBindTRC<Vector2i,int> *this,int param_1)

{
  return (-(uint)(param_1 == 0) & 0xfffffffc) + 6;
}



/* MethodBindTRC<Vector2i, int>::get_argument_meta(int) const */

byte __thiscall
MethodBindTRC<Vector2i,int>::get_argument_meta(MethodBindTRC<Vector2i,int> *this,int param_1)

{
  return -(param_1 == 0) & 3;
}



/* MethodBindTRC<Vector2, int>::_gen_argument_type(int) const */

int __thiscall
MethodBindTRC<Vector2,int>::_gen_argument_type(MethodBindTRC<Vector2,int> *this,int param_1)

{
  return (-(uint)(param_1 == 0) & 0xfffffffd) + 5;
}



/* MethodBindTRC<Vector2, int>::get_argument_meta(int) const */

byte __thiscall
MethodBindTRC<Vector2,int>::get_argument_meta(MethodBindTRC<Vector2,int> *this,int param_1)

{
  return -(param_1 == 0) & 3;
}



/* MethodBindTRC<Rect2, int, Variant>::_gen_argument_type(int) const */

uint __thiscall
MethodBindTRC<Rect2,int,Variant>::_gen_argument_type
          (MethodBindTRC<Rect2,int,Variant> *this,int param_1)

{
  uint uVar1;
  
  uVar1 = param_1 * 2 ^ 2;
  if (1 < (uint)param_1) {
    uVar1 = 7;
  }
  return uVar1;
}



/* MethodBindTRC<Rect2, int, Variant>::get_argument_meta(int) const */

byte __thiscall
MethodBindTRC<Rect2,int,Variant>::get_argument_meta
          (MethodBindTRC<Rect2,int,Variant> *this,int param_1)

{
  return -(param_1 == 0) & 3;
}



/* MethodBindTRC<Array, int>::_gen_argument_type(int) const */

int __thiscall
MethodBindTRC<Array,int>::_gen_argument_type(MethodBindTRC<Array,int> *this,int param_1)

{
  return (-(uint)(param_1 == 0) & 0xffffffe6) + 0x1c;
}



/* MethodBindTRC<Array, int>::get_argument_meta(int) const */

byte __thiscall
MethodBindTRC<Array,int>::get_argument_meta(MethodBindTRC<Array,int> *this,int param_1)

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



/* MethodBindTRC<RID, int>::_gen_argument_type(int) const */

int __thiscall MethodBindTRC<RID,int>::_gen_argument_type(MethodBindTRC<RID,int> *this,int param_1)

{
  return (-(uint)(param_1 == 0) & 0xffffffeb) + 0x17;
}



/* MethodBindTRC<RID, int>::get_argument_meta(int) const */

byte __thiscall MethodBindTRC<RID,int>::get_argument_meta(MethodBindTRC<RID,int> *this,int param_1)

{
  return -(param_1 == 0) & 3;
}



/* MethodBindTRC<RID>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<RID>::_gen_argument_type(int param_1)

{
  return 0x17;
}



/* MethodBindTRC<RID>::get_argument_meta(int) const */

undefined8 MethodBindTRC<RID>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<Vector2>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<Vector2>::_gen_argument_type(int param_1)

{
  return 5;
}



/* MethodBindTRC<Vector2>::get_argument_meta(int) const */

undefined8 MethodBindTRC<Vector2>::get_argument_meta(int param_1)

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



/* MethodBindTRC<TextServer::OverrunBehavior>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<TextServer::OverrunBehavior>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<TextServer::OverrunBehavior>::get_argument_meta(int) const */

undefined8 MethodBindTRC<TextServer::OverrunBehavior>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<TextServer::OverrunBehavior>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<TextServer::OverrunBehavior>::_gen_argument_type
          (MethodBindT<TextServer::OverrunBehavior> *this,int param_1)

{
  return (param_1 == 0) * '\x02';
}



/* MethodBindT<TextServer::OverrunBehavior>::get_argument_meta(int) const */

undefined8 MethodBindT<TextServer::OverrunBehavior>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<BitField<TextServer::JustificationFlag>>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<BitField<TextServer::JustificationFlag>>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<BitField<TextServer::JustificationFlag>>::get_argument_meta(int) const */

undefined8 MethodBindTRC<BitField<TextServer::JustificationFlag>>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<BitField<TextServer::JustificationFlag> >::_gen_argument_type(int) const */

char __thiscall
MethodBindT<BitField<TextServer::JustificationFlag>>::_gen_argument_type
          (MethodBindT<BitField<TextServer::JustificationFlag>> *this,int param_1)

{
  return (param_1 == 0) * '\x02';
}



/* MethodBindT<BitField<TextServer::JustificationFlag> >::get_argument_meta(int) const */

undefined8 MethodBindT<BitField<TextServer::JustificationFlag>>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<BitField<TextServer::LineBreakFlag>>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<BitField<TextServer::LineBreakFlag>>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<BitField<TextServer::LineBreakFlag>>::get_argument_meta(int) const */

undefined8 MethodBindTRC<BitField<TextServer::LineBreakFlag>>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<BitField<TextServer::LineBreakFlag> >::_gen_argument_type(int) const */

char __thiscall
MethodBindT<BitField<TextServer::LineBreakFlag>>::_gen_argument_type
          (MethodBindT<BitField<TextServer::LineBreakFlag>> *this,int param_1)

{
  return (param_1 == 0) * '\x02';
}



/* MethodBindT<BitField<TextServer::LineBreakFlag> >::get_argument_meta(int) const */

undefined8 MethodBindT<BitField<TextServer::LineBreakFlag>>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Vector<float> const&>::_gen_argument_type(int) const */

long __thiscall
MethodBindT<Vector<float>const&>::_gen_argument_type
          (MethodBindT<Vector<float>const&> *this,int param_1)

{
  return (ulong)(param_1 == 0) << 5;
}



/* MethodBindT<Vector<float> const&>::get_argument_meta(int) const */

undefined8 MethodBindT<Vector<float>const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<HorizontalAlignment>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<HorizontalAlignment>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<HorizontalAlignment>::get_argument_meta(int) const */

undefined8 MethodBindTRC<HorizontalAlignment>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<HorizontalAlignment>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<HorizontalAlignment>::_gen_argument_type
          (MethodBindT<HorizontalAlignment> *this,int param_1)

{
  return (param_1 == 0) * '\x02';
}



/* MethodBindT<HorizontalAlignment>::get_argument_meta(int) const */

undefined8 MethodBindT<HorizontalAlignment>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTR<bool, Variant, Vector2 const&, InlineAlignment, float>::get_argument_meta(int) const
    */

char __thiscall
MethodBindTR<bool,Variant,Vector2_const&,InlineAlignment,float>::get_argument_meta
          (MethodBindTR<bool,Variant,Vector2_const&,InlineAlignment,float> *this,int param_1)

{
  return (param_1 == 3) * '\t';
}



/* MethodBindTR<bool, Variant, Vector2 const&, InlineAlignment, int, float>::get_argument_meta(int)
   const */

char __thiscall
MethodBindTR<bool,Variant,Vector2_const&,InlineAlignment,int,float>::get_argument_meta
          (MethodBindTR<bool,Variant,Vector2_const&,InlineAlignment,int,float> *this,int param_1)

{
  char cVar1;
  
  cVar1 = '\0';
  if ((-1 < param_1) && (cVar1 = '\x03', param_1 != 3)) {
    cVar1 = (param_1 == 4) * '\t';
  }
  return cVar1;
}



/* MethodBindTR<bool, String const&, Ref<Font> const&, int, String const&, Variant
   const&>::get_argument_meta(int) const */

char __thiscall
MethodBindTR<bool,String_const&,Ref<Font>const&,int,String_const&,Variant_const&>::get_argument_meta
          (MethodBindTR<bool,String_const&,Ref<Font>const&,int,String_const&,Variant_const&> *this,
          int param_1)

{
  return (param_1 == 2) * '\x03';
}



/* MethodBindTR<bool, String const&, Ref<Font> const&, int, Rect2 const&, String
   const&>::get_argument_meta(int) const */

char __thiscall
MethodBindTR<bool,String_const&,Ref<Font>const&,int,Rect2_const&,String_const&>::get_argument_meta
          (MethodBindTR<bool,String_const&,Ref<Font>const&,int,Rect2_const&,String_const&> *this,
          int param_1)

{
  return (param_1 == 2) * '\x03';
}



/* MethodBindT<Array const&>::_gen_argument_type(int) const */

byte __thiscall
MethodBindT<Array_const&>::_gen_argument_type(MethodBindT<Array_const&> *this,int param_1)

{
  return -(param_1 == 0) & 0x1c;
}



/* MethodBindT<Array const&>::get_argument_meta(int) const */

undefined8 MethodBindT<Array_const&>::get_argument_meta(int param_1)

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



/* MethodBindTRC<TextServer::Orientation>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<TextServer::Orientation>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<TextServer::Orientation>::get_argument_meta(int) const */

undefined8 MethodBindTRC<TextServer::Orientation>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<TextServer::Orientation>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<TextServer::Orientation>::_gen_argument_type
          (MethodBindT<TextServer::Orientation> *this,int param_1)

{
  return (param_1 == 0) * '\x02';
}



/* MethodBindT<TextServer::Orientation>::get_argument_meta(int) const */

undefined8 MethodBindT<TextServer::Orientation>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<String>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<String>::_gen_argument_type(int param_1)

{
  return 4;
}



/* MethodBindTRC<String>::get_argument_meta(int) const */

undefined8 MethodBindTRC<String>::get_argument_meta(int param_1)

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



/* MethodBindTRC<TextServer::Direction>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<TextServer::Direction>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<TextServer::Direction>::get_argument_meta(int) const */

undefined8 MethodBindTRC<TextServer::Direction>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<TextServer::Direction>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<TextServer::Direction>::_gen_argument_type
          (MethodBindT<TextServer::Direction> *this,int param_1)

{
  return (param_1 == 0) * '\x02';
}



/* MethodBindT<TextServer::Direction>::get_argument_meta(int) const */

undefined8 MethodBindT<TextServer::Direction>::get_argument_meta(int param_1)

{
  return 0;
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



/* MethodBindTC<RID, Vector2 const&, int, int, Color const&>::_gen_argument_type(int) const */

undefined8 __thiscall
MethodBindTC<RID,Vector2_const&,int,int,Color_const&>::_gen_argument_type
          (MethodBindTC<RID,Vector2_const&,int,int,Color_const&> *this,int param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((((uint)param_1 < 5) && (uVar1 = 0x17, param_1 != 0)) && (uVar1 = 5, param_1 != 1)) {
    uVar1 = 0x14;
    if (param_1 != 4) {
      uVar1 = 2;
    }
    return uVar1;
  }
  return uVar1;
}



/* MethodBindTC<RID, Vector2 const&, int, Color const&, Color const&>::_gen_argument_type(int) const
    */

undefined8 __thiscall
MethodBindTC<RID,Vector2_const&,int,Color_const&,Color_const&>::_gen_argument_type
          (MethodBindTC<RID,Vector2_const&,int,Color_const&,Color_const&> *this,int param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((((uint)param_1 < 5) && (uVar1 = 0x17, param_1 != 0)) && (uVar1 = 5, param_1 != 1)) {
    uVar1 = 0x14;
    if (param_1 == 2) {
      uVar1 = 2;
    }
    return uVar1;
  }
  return uVar1;
}



/* MethodBindTR<bool, String const&, Ref<Font> const&, int, String const&, Variant
   const&>::_gen_argument_type(int) const */

long __thiscall
MethodBindTR<bool,String_const&,Ref<Font>const&,int,String_const&,Variant_const&>::
_gen_argument_type(MethodBindTR<bool,String_const&,Ref<Font>const&,int,String_const&,Variant_const&>
                   *this,int param_1)

{
  long lVar1;
  
  lVar1 = 1;
  if (((((uint)param_1 < 5) && (lVar1 = 4, param_1 != 0)) && (lVar1 = 0x18, param_1 != 1)) &&
     (lVar1 = 2, param_1 != 2)) {
    return (ulong)(param_1 == 3) << 2;
  }
  return lVar1;
}



/* MethodBindTR<bool, String const&, Ref<Font> const&, int, Rect2 const&, String
   const&>::_gen_argument_type(int) const */

char __thiscall
MethodBindTR<bool,String_const&,Ref<Font>const&,int,Rect2_const&,String_const&>::_gen_argument_type
          (MethodBindTR<bool,String_const&,Ref<Font>const&,int,Rect2_const&,String_const&> *this,
          int param_1)

{
  char cVar1;
  
  cVar1 = '\x01';
  if (((((uint)param_1 < 5) && (cVar1 = '\x04', param_1 != 0)) && (cVar1 = '\x18', param_1 != 1)) &&
     (cVar1 = '\x02', param_1 != 2)) {
    return (param_1 == 3) * '\x03' + '\x04';
  }
  return cVar1;
}



/* MethodBindT<TextServer::Direction>::~MethodBindT() */

void __thiscall
MethodBindT<TextServer::Direction>::~MethodBindT(MethodBindT<TextServer::Direction> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012d098;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<TextServer::Direction>::~MethodBindT() */

void __thiscall
MethodBindT<TextServer::Direction>::~MethodBindT(MethodBindT<TextServer::Direction> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012d098;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<TextServer::Direction>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<TextServer::Direction>::~MethodBindTRC(MethodBindTRC<TextServer::Direction> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012d0f8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<TextServer::Direction>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<TextServer::Direction>::~MethodBindTRC(MethodBindTRC<TextServer::Direction> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012d0f8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<TextServer::Orientation>::~MethodBindT() */

void __thiscall
MethodBindT<TextServer::Orientation>::~MethodBindT(MethodBindT<TextServer::Orientation> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012d218;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<TextServer::Orientation>::~MethodBindT() */

void __thiscall
MethodBindT<TextServer::Orientation>::~MethodBindT(MethodBindT<TextServer::Orientation> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012d218;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<TextServer::Orientation>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<TextServer::Orientation>::~MethodBindTRC(MethodBindTRC<TextServer::Orientation> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012d278;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<TextServer::Orientation>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<TextServer::Orientation>::~MethodBindTRC(MethodBindTRC<TextServer::Orientation> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012d278;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<bool>::~MethodBindT() */

void __thiscall MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012d2d8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<bool>::~MethodBindT() */

void __thiscall MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012d2d8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012d338;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012d338;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Array const&>::~MethodBindT() */

void __thiscall MethodBindT<Array_const&>::~MethodBindT(MethodBindT<Array_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012d398;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Array const&>::~MethodBindT() */

void __thiscall MethodBindT<Array_const&>::~MethodBindT(MethodBindT<Array_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012d398;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<bool, String const&, Ref<Font> const&, int, Rect2 const&, String
   const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<bool,String_const&,Ref<Font>const&,int,Rect2_const&,String_const&>::~MethodBindTR
          (MethodBindTR<bool,String_const&,Ref<Font>const&,int,Rect2_const&,String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012d3f8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<bool, String const&, Ref<Font> const&, int, Rect2 const&, String
   const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<bool,String_const&,Ref<Font>const&,int,Rect2_const&,String_const&>::~MethodBindTR
          (MethodBindTR<bool,String_const&,Ref<Font>const&,int,Rect2_const&,String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012d3f8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012d038;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012d038;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<bool, String const&, Ref<Font> const&, int, String const&, Variant
   const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<bool,String_const&,Ref<Font>const&,int,String_const&,Variant_const&>::~MethodBindTR
          (MethodBindTR<bool,String_const&,Ref<Font>const&,int,String_const&,Variant_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012d458;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<bool, String const&, Ref<Font> const&, int, String const&, Variant
   const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<bool,String_const&,Ref<Font>const&,int,String_const&,Variant_const&>::~MethodBindTR
          (MethodBindTR<bool,String_const&,Ref<Font>const&,int,String_const&,Variant_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012d458;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<bool, Variant, Vector2 const&, InlineAlignment, int, float>::~MethodBindTR() */

void __thiscall
MethodBindTR<bool,Variant,Vector2_const&,InlineAlignment,int,float>::~MethodBindTR
          (MethodBindTR<bool,Variant,Vector2_const&,InlineAlignment,int,float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012d4b8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<bool, Variant, Vector2 const&, InlineAlignment, int, float>::~MethodBindTR() */

void __thiscall
MethodBindTR<bool,Variant,Vector2_const&,InlineAlignment,int,float>::~MethodBindTR
          (MethodBindTR<bool,Variant,Vector2_const&,InlineAlignment,int,float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012d4b8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<bool, Variant, Vector2 const&, InlineAlignment, float>::~MethodBindTR() */

void __thiscall
MethodBindTR<bool,Variant,Vector2_const&,InlineAlignment,float>::~MethodBindTR
          (MethodBindTR<bool,Variant,Vector2_const&,InlineAlignment,float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012d518;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<bool, Variant, Vector2 const&, InlineAlignment, float>::~MethodBindTR() */

void __thiscall
MethodBindTR<bool,Variant,Vector2_const&,InlineAlignment,float>::~MethodBindTR
          (MethodBindTR<bool,Variant,Vector2_const&,InlineAlignment,float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012d518;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<HorizontalAlignment>::~MethodBindT() */

void __thiscall
MethodBindT<HorizontalAlignment>::~MethodBindT(MethodBindT<HorizontalAlignment> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012d578;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<HorizontalAlignment>::~MethodBindT() */

void __thiscall
MethodBindT<HorizontalAlignment>::~MethodBindT(MethodBindT<HorizontalAlignment> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012d578;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<HorizontalAlignment>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<HorizontalAlignment>::~MethodBindTRC(MethodBindTRC<HorizontalAlignment> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012d5d8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<HorizontalAlignment>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<HorizontalAlignment>::~MethodBindTRC(MethodBindTRC<HorizontalAlignment> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012d5d8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Vector<float> const&>::~MethodBindT() */

void __thiscall
MethodBindT<Vector<float>const&>::~MethodBindT(MethodBindT<Vector<float>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012d638;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Vector<float> const&>::~MethodBindT() */

void __thiscall
MethodBindT<Vector<float>const&>::~MethodBindT(MethodBindT<Vector<float>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012d638;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<BitField<TextServer::LineBreakFlag> >::~MethodBindT() */

void __thiscall
MethodBindT<BitField<TextServer::LineBreakFlag>>::~MethodBindT
          (MethodBindT<BitField<TextServer::LineBreakFlag>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012d698;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<BitField<TextServer::LineBreakFlag> >::~MethodBindT() */

void __thiscall
MethodBindT<BitField<TextServer::LineBreakFlag>>::~MethodBindT
          (MethodBindT<BitField<TextServer::LineBreakFlag>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012d698;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<BitField<TextServer::LineBreakFlag>>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<BitField<TextServer::LineBreakFlag>>::~MethodBindTRC
          (MethodBindTRC<BitField<TextServer::LineBreakFlag>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012d6f8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<BitField<TextServer::LineBreakFlag>>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<BitField<TextServer::LineBreakFlag>>::~MethodBindTRC
          (MethodBindTRC<BitField<TextServer::LineBreakFlag>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012d6f8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<BitField<TextServer::JustificationFlag> >::~MethodBindT() */

void __thiscall
MethodBindT<BitField<TextServer::JustificationFlag>>::~MethodBindT
          (MethodBindT<BitField<TextServer::JustificationFlag>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012d758;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<BitField<TextServer::JustificationFlag> >::~MethodBindT() */

void __thiscall
MethodBindT<BitField<TextServer::JustificationFlag>>::~MethodBindT
          (MethodBindT<BitField<TextServer::JustificationFlag>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012d758;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<BitField<TextServer::JustificationFlag>>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<BitField<TextServer::JustificationFlag>>::~MethodBindTRC
          (MethodBindTRC<BitField<TextServer::JustificationFlag>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012d7b8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<BitField<TextServer::JustificationFlag>>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<BitField<TextServer::JustificationFlag>>::~MethodBindTRC
          (MethodBindTRC<BitField<TextServer::JustificationFlag>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012d7b8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<TextServer::OverrunBehavior>::~MethodBindT() */

void __thiscall
MethodBindT<TextServer::OverrunBehavior>::~MethodBindT
          (MethodBindT<TextServer::OverrunBehavior> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012d818;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<TextServer::OverrunBehavior>::~MethodBindT() */

void __thiscall
MethodBindT<TextServer::OverrunBehavior>::~MethodBindT
          (MethodBindT<TextServer::OverrunBehavior> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012d818;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<TextServer::OverrunBehavior>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<TextServer::OverrunBehavior>::~MethodBindTRC
          (MethodBindTRC<TextServer::OverrunBehavior> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012d878;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<TextServer::OverrunBehavior>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<TextServer::OverrunBehavior>::~MethodBindTRC
          (MethodBindTRC<TextServer::OverrunBehavior> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012d878;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<String const&>::~MethodBindT() */

void __thiscall MethodBindT<String_const&>::~MethodBindT(MethodBindT<String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012d158;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<String const&>::~MethodBindT() */

void __thiscall MethodBindT<String_const&>::~MethodBindT(MethodBindT<String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012d158;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<String>::~MethodBindTRC() */

void __thiscall MethodBindTRC<String>::~MethodBindTRC(MethodBindTRC<String> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012d1b8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<String>::~MethodBindTRC() */

void __thiscall MethodBindTRC<String>::~MethodBindTRC(MethodBindTRC<String> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012d1b8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<RID, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<RID,int>::~MethodBindTRC(MethodBindTRC<RID,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012da58;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<RID, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<RID,int>::~MethodBindTRC(MethodBindTRC<RID,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012da58;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<RID>::~MethodBindTRC() */

void __thiscall MethodBindTRC<RID>::~MethodBindTRC(MethodBindTRC<RID> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012d9f8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<RID>::~MethodBindTRC() */

void __thiscall MethodBindTRC<RID>::~MethodBindTRC(MethodBindTRC<RID> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012d9f8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<int>::~MethodBindT() */

void __thiscall MethodBindT<int>::~MethodBindT(MethodBindT<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012db18;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<int>::~MethodBindT() */

void __thiscall MethodBindT<int>::~MethodBindT(MethodBindT<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012db18;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<float>::~MethodBindT() */

void __thiscall MethodBindT<float>::~MethodBindT(MethodBindT<float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012d8d8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<float>::~MethodBindT() */

void __thiscall MethodBindT<float>::~MethodBindT(MethodBindT<float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012d8d8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<float>::~MethodBindTRC() */

void __thiscall MethodBindTRC<float>::~MethodBindTRC(MethodBindTRC<float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012d938;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<float>::~MethodBindTRC() */

void __thiscall MethodBindTRC<float>::~MethodBindTRC(MethodBindTRC<float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012d938;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Array, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Array,int>::~MethodBindTRC(MethodBindTRC<Array,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012db78;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Array, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Array,int>::~MethodBindTRC(MethodBindTRC<Array,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012db78;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Rect2, int, Variant>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Rect2,int,Variant>::~MethodBindTRC(MethodBindTRC<Rect2,int,Variant> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012dbd8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Rect2, int, Variant>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Rect2,int,Variant>::~MethodBindTRC(MethodBindTRC<Rect2,int,Variant> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012dbd8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Vector2, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Vector2,int>::~MethodBindTRC(MethodBindTRC<Vector2,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012dc38;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Vector2, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Vector2,int>::~MethodBindTRC(MethodBindTRC<Vector2,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012dc38;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Vector2i, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Vector2i,int>::~MethodBindTRC(MethodBindTRC<Vector2i,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012dc98;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Vector2i, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Vector2i,int>::~MethodBindTRC(MethodBindTRC<Vector2i,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012dc98;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<float, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<float,int>::~MethodBindTRC(MethodBindTRC<float,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012dcf8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<float, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<float,int>::~MethodBindTRC(MethodBindTRC<float,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012dcf8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Vector2>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Vector2>::~MethodBindTRC(MethodBindTRC<Vector2> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012d998;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Vector2>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Vector2>::~MethodBindTRC(MethodBindTRC<Vector2> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012d998;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012dab8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012dab8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTC<RID, Vector2 const&, Color const&, Color const&>::~MethodBindTC() */

void __thiscall
MethodBindTC<RID,Vector2_const&,Color_const&,Color_const&>::~MethodBindTC
          (MethodBindTC<RID,Vector2_const&,Color_const&,Color_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012dd58;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTC<RID, Vector2 const&, Color const&, Color const&>::~MethodBindTC() */

void __thiscall
MethodBindTC<RID,Vector2_const&,Color_const&,Color_const&>::~MethodBindTC
          (MethodBindTC<RID,Vector2_const&,Color_const&,Color_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012dd58;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTC<RID, Vector2 const&, int, Color const&, Color const&>::~MethodBindTC() */

void __thiscall
MethodBindTC<RID,Vector2_const&,int,Color_const&,Color_const&>::~MethodBindTC
          (MethodBindTC<RID,Vector2_const&,int,Color_const&,Color_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012ddb8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTC<RID, Vector2 const&, int, Color const&, Color const&>::~MethodBindTC() */

void __thiscall
MethodBindTC<RID,Vector2_const&,int,Color_const&,Color_const&>::~MethodBindTC
          (MethodBindTC<RID,Vector2_const&,int,Color_const&,Color_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012ddb8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTC<RID, Vector2 const&, int, Color const&>::~MethodBindTC() */

void __thiscall
MethodBindTC<RID,Vector2_const&,int,Color_const&>::~MethodBindTC
          (MethodBindTC<RID,Vector2_const&,int,Color_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012de18;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTC<RID, Vector2 const&, int, Color const&>::~MethodBindTC() */

void __thiscall
MethodBindTC<RID,Vector2_const&,int,Color_const&>::~MethodBindTC
          (MethodBindTC<RID,Vector2_const&,int,Color_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012de18;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTC<RID, Vector2 const&, int, int, Color const&>::~MethodBindTC() */

void __thiscall
MethodBindTC<RID,Vector2_const&,int,int,Color_const&>::~MethodBindTC
          (MethodBindTC<RID,Vector2_const&,int,int,Color_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012de78;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTC<RID, Vector2 const&, int, int, Color const&>::~MethodBindTC() */

void __thiscall
MethodBindTC<RID,Vector2_const&,int,int,Color_const&>::~MethodBindTC
          (MethodBindTC<RID,Vector2_const&,int,int,Color_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012de78;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTC<RID, Vector2 const&, Color const&>::~MethodBindTC() */

void __thiscall
MethodBindTC<RID,Vector2_const&,Color_const&>::~MethodBindTC
          (MethodBindTC<RID,Vector2_const&,Color_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012ded8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTC<RID, Vector2 const&, Color const&>::~MethodBindTC() */

void __thiscall
MethodBindTC<RID,Vector2_const&,Color_const&>::~MethodBindTC
          (MethodBindTC<RID,Vector2_const&,Color_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012ded8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<int, Vector2 const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<int,Vector2_const&>::~MethodBindTRC(MethodBindTRC<int,Vector2_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012df38;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<int, Vector2 const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<int,Vector2_const&>::~MethodBindTRC(MethodBindTRC<int,Vector2_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012df38;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0012cd78;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0012cd78;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
}



/* MethodBindTC<RID, Vector2 const&, Color const&, Color const&>::_gen_argument_type(int) const */

undefined8 __thiscall
MethodBindTC<RID,Vector2_const&,Color_const&,Color_const&>::_gen_argument_type
          (MethodBindTC<RID,Vector2_const&,Color_const&,Color_const&> *this,int param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((((uint)param_1 < 4) && (uVar1 = 0x17, param_1 != 0)) && (uVar1 = 0x14, param_1 == 1)) {
    uVar1 = 5;
  }
  return uVar1;
}



/* MethodBindTC<RID, Vector2 const&, Color const&>::_gen_argument_type(int) const */

undefined8 __thiscall
MethodBindTC<RID,Vector2_const&,Color_const&>::_gen_argument_type
          (MethodBindTC<RID,Vector2_const&,Color_const&> *this,int param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((((uint)param_1 < 3) && (uVar1 = 0x17, param_1 != 0)) && (uVar1 = 0x14, param_1 == 1)) {
    uVar1 = 5;
  }
  return uVar1;
}



/* MethodBindTC<RID, Vector2 const&, int, Color const&>::_gen_argument_type(int) const */

undefined8 __thiscall
MethodBindTC<RID,Vector2_const&,int,Color_const&>::_gen_argument_type
          (MethodBindTC<RID,Vector2_const&,int,Color_const&> *this,int param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (((((uint)param_1 < 4) && (uVar1 = 0x17, param_1 != 0)) && (uVar1 = 5, param_1 != 1)) &&
     (uVar1 = 0x14, param_1 == 2)) {
    uVar1 = 2;
  }
  return uVar1;
}



/* MethodBindTR<bool, Variant, Vector2 const&, InlineAlignment, int, float>::_gen_argument_type(int)
   const */

char __thiscall
MethodBindTR<bool,Variant,Vector2_const&,InlineAlignment,int,float>::_gen_argument_type
          (MethodBindTR<bool,Variant,Vector2_const&,InlineAlignment,int,float> *this,int param_1)

{
  char cVar1;
  
  cVar1 = '\x01';
  if ((((uint)param_1 < 5) && (cVar1 = '\x05', param_1 != 1)) && (cVar1 = '\x02', 1 < param_1 - 2U))
  {
    return (param_1 == 4) * '\x03';
  }
  return cVar1;
}



/* MethodBindTR<bool, Variant, Vector2 const&, InlineAlignment, float>::_gen_argument_type(int)
   const */

char __thiscall
MethodBindTR<bool,Variant,Vector2_const&,InlineAlignment,float>::_gen_argument_type
          (MethodBindTR<bool,Variant,Vector2_const&,InlineAlignment,float> *this,int param_1)

{
  char cVar1;
  
  cVar1 = '\x01';
  if ((((uint)param_1 < 4) && (cVar1 = '\x05', param_1 != 1)) && (cVar1 = '\x02', param_1 != 2)) {
    cVar1 = (param_1 == 3) * '\x03';
  }
  return cVar1;
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
LAB_0010dcb3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010dcb3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_0010dd1e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_0010dd1e:
  return &_get_class_namev()::_class_name_static;
}



/* TextParagraph::_get_class_namev() const */

undefined8 * TextParagraph::_get_class_namev(void)

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
LAB_0010dda3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010dda3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"TextParagraph");
      goto LAB_0010de0e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"TextParagraph");
LAB_0010de0e:
  return &_get_class_namev()::_class_name_static;
}



/* TextParagraph::get_preserve_control() const [clone .cold] */

void TextParagraph::get_preserve_control(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* TextParagraph::get_custom_punctuation() const [clone .cold] */

void TextParagraph::get_custom_punctuation(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* TextParagraph::get_preserve_invalid() const [clone .cold] */

void TextParagraph::get_preserve_invalid(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* TextParagraph::set_bidi_override(Array const&) [clone .cold] */

void TextParagraph::set_bidi_override(Array *param_1)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* TextParagraph::set_custom_punctuation(String const&) [clone .cold] */

void TextParagraph::set_custom_punctuation(String *param_1)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* TextParagraph::clear_dropcap() [clone .cold] */

void TextParagraph::clear_dropcap(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* TextParagraph::resize_object(Variant, Vector2 const&, InlineAlignment, float) [clone .cold] */

void TextParagraph::resize_object(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* TextParagraph::add_object(Variant, Vector2 const&, InlineAlignment, int, float) [clone .cold] */

void TextParagraph::add_object(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* TextParagraph::get_dropcap_size() const [clone .cold] */

void TextParagraph::get_dropcap_size(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* TextParagraph::add_string(String const&, Ref<Font> const&, int, String const&, Variant const&)
   [clone .cold] */

void TextParagraph::add_string
               (String *param_1,Ref *param_2,int param_3,String *param_4,Variant *param_5)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* TextParagraph::set_preserve_control(bool) [clone .cold] */

void TextParagraph::set_preserve_control(bool param_1)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* TextParagraph::set_preserve_invalid(bool) [clone .cold] */

void TextParagraph::set_preserve_invalid(bool param_1)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* TextParagraph::set_orientation(TextServer::Orientation) [clone .cold] */

void TextParagraph::set_orientation(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* TextParagraph::set_direction(TextServer::Direction) [clone .cold] */

void TextParagraph::set_direction(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* TextParagraph::set_dropcap(String const&, Ref<Font> const&, int, Rect2 const&, String const&)
   [clone .cold] */

void TextParagraph::set_dropcap
               (String *param_1,Ref *param_2,int param_3,Rect2 *param_4,String *param_5)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* TextParagraph::clear() [clone .cold] */

void TextParagraph::clear(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* TextParagraph::TextParagraph(String const&, Ref<Font> const&, int, String const&, float,
   TextServer::Direction, TextServer::Orientation) [clone .cold] */

void __thiscall TextParagraph::TextParagraph(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* TextParagraph::TextParagraph() [clone .cold] */

void __thiscall TextParagraph::TextParagraph(TextParagraph *this)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* TextParagraph::~TextParagraph() [clone .cold] */

void __thiscall TextParagraph::~TextParagraph(TextParagraph *this)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* TextParagraph::_shape_lines() const [clone .cold] */

void TextParagraph::_shape_lines(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* TextParagraph::get_direction() const [clone .cold] */

void TextParagraph::get_direction(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* TextParagraph::get_orientation() const [clone .cold] */

void TextParagraph::get_orientation(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* TextParagraph::get_non_wrapped_size() const [clone .cold] */

void TextParagraph::get_non_wrapped_size(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* TextParagraph::get_line_objects(int) const [clone .cold] */

void TextParagraph::get_line_objects(int param_1)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* TextParagraph::get_line_size(int) const [clone .cold] */

void TextParagraph::get_line_size(int param_1)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* TextParagraph::get_line_range(int) const [clone .cold] */

void TextParagraph::get_line_range(int param_1)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* TextParagraph::get_line_ascent(int) const [clone .cold] */

void TextParagraph::get_line_ascent(int param_1)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* TextParagraph::get_line_descent(int) const [clone .cold] */

void TextParagraph::get_line_descent(int param_1)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* TextParagraph::get_line_width(int) const [clone .cold] */

void TextParagraph::get_line_width(int param_1)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* TextParagraph::get_line_underline_position(int) const [clone .cold] */

void TextParagraph::get_line_underline_position(int param_1)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* TextParagraph::get_line_underline_thickness(int) const [clone .cold] */

void TextParagraph::get_line_underline_thickness(int param_1)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* TextParagraph::get_size() const [clone .cold] */

void TextParagraph::get_size(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* TextParagraph::get_line_object_rect(int, Variant) const [clone .cold] */

void TextParagraph::get_line_object_rect(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* TextParagraph::draw(RID, Vector2 const&, Color const&, Color const&) const [clone .cold] */

void TextParagraph::draw(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* TextParagraph::draw_outline(RID, Vector2 const&, int, Color const&, Color const&) const [clone
   .cold] */

void TextParagraph::draw_outline(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* TextParagraph::hit_test(Vector2 const&) const [clone .cold] */

void TextParagraph::hit_test(Vector2 *param_1)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* TextParagraph::draw_dropcap(RID, Vector2 const&, Color const&) const [clone .cold] */

void TextParagraph::draw_dropcap(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* TextParagraph::draw_dropcap_outline(RID, Vector2 const&, int, Color const&) const [clone .cold]
    */

void TextParagraph::draw_dropcap_outline(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* TextParagraph::draw_line(RID, Vector2 const&, int, Color const&) const [clone .cold] */

void TextParagraph::draw_line(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* TextParagraph::draw_line_outline(RID, Vector2 const&, int, int, Color const&) const [clone .cold]
    */

void TextParagraph::draw_line_outline(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
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



/* TextParagraph::get_class() const */

void TextParagraph::get_class(void)

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
            if (lVar5 == 0) goto LAB_0010ec7f;
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
LAB_0010ec7f:
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
    if (cVar6 != '\0') goto LAB_0010ed33;
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
              if (lVar5 == 0) goto LAB_0010ede3;
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
LAB_0010ede3:
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
      if (cVar6 != '\0') goto LAB_0010ed33;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = String::operator==(param_1,"Object");
      return uVar7;
    }
  }
  else {
LAB_0010ed33:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TextParagraph::is_class(String const&) const */

undefined8 __thiscall TextParagraph::is_class(TextParagraph *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_0010ef0f;
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
LAB_0010ef0f:
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
    if (cVar5 != '\0') goto LAB_0010efc3;
  }
  cVar5 = String::operator==(param_1,"TextParagraph");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_0010efc3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector2>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Vector2>::_gen_argument_type_info(int param_1)

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
  local_48 = &_LC23;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 5;
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
      goto joined_r0x0010f15c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010f15c:
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
  local_48 = &_LC23;
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
      goto joined_r0x0010f2dc;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010f2dc:
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
  local_48 = &_LC23;
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
      goto joined_r0x0010f45c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010f45c:
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



/* MethodBindTRC<RID>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<RID>::_gen_argument_type_info(int param_1)

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
  local_48 = &_LC23;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 0x17;
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
      goto joined_r0x0010f5dc;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010f5dc:
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



/* MethodBindTRC<String>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<String>::_gen_argument_type_info(int param_1)

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
  local_48 = &_LC23;
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
      goto joined_r0x0010f75c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010f75c:
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
  local_48 = &_LC23;
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
      goto joined_r0x0010f8dc;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010f8dc:
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
    if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) {
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



/* Ref<TextServer>::Ref(Ref<TextServer> const&) */

void __thiscall Ref<TextServer>::Ref(Ref<TextServer> *this,Ref *param_1)

{
  char cVar1;
  
  *(undefined8 *)this = 0;
  if (*(long *)param_1 != 0) {
    *(long *)this = *(long *)param_1;
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *(undefined8 *)this = 0;
    }
  }
  return;
}



/* MethodDefinition D_METHOD<char const*>(char const*, char const* const) */

char * D_METHOD<char_const*>(char *param_1,char *param_2)

{
  long in_FS_OFFSET;
  undefined1 local_38 [8];
  undefined8 local_30;
  undefined1 *local_28 [3];
  long local_10;
  
  local_28[0] = local_38;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = 0;
  D_METHODP(param_1,(char ***)param_2,(uint)local_28);
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



/* godot::details::enum_qualified_name_to_class_info_name(String const&) */

details * __thiscall
godot::details::enum_qualified_name_to_class_info_name(details *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long in_FS_OFFSET;
  undefined8 local_60;
  char local_58 [8];
  long *local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  String::split(local_58,SUB81(param_1,0),0x10fded);
  if ((local_50 != (long *)0x0) && (2 < local_50[-1])) {
    local_60 = 0;
    local_48 = &_LC32;
    local_40 = 1;
    String::parse_latin1((StrRange *)&local_60);
    if (local_50 == (long *)0x0) {
      lVar7 = 0;
      lVar6 = -2;
    }
    else {
      lVar7 = local_50[-1];
      lVar6 = lVar7 + -2;
      if (-1 < lVar6) {
        String::operator+((String *)&local_48,(String *)(local_50 + lVar6));
        String::operator+((String *)this,(String *)&local_48);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        goto LAB_0010feba;
      }
    }
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,lVar6,lVar7,"p_index","size()","",false,true)
    ;
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  local_60 = 0;
  local_48 = &_LC32;
  local_40 = 1;
  String::parse_latin1((StrRange *)&local_60);
  String::join((Vector *)this);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
LAB_0010feba:
  plVar4 = local_50;
  if (local_50 != (long *)0x0) {
    LOCK();
    plVar5 = local_50 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_50 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar7 = local_50[-1];
      local_50 = (long *)0x0;
      if (lVar7 != 0) {
        lVar6 = 0;
        plVar5 = plVar4;
        do {
          if (*plVar5 != 0) {
            LOCK();
            plVar1 = (long *)(*plVar5 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar2 = *plVar5;
              *plVar5 = 0;
              Memory::free_static((void *)(lVar2 + -0x10),false);
            }
          }
          lVar6 = lVar6 + 1;
          plVar5 = plVar5 + 1;
        } while (lVar7 != lVar6);
      }
      Memory::free_static(plVar4 + -2,false);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<HorizontalAlignment>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<HorizontalAlignment>::_gen_argument_type_info(int param_1)

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
  local_58 = 0;
  local_48 = "HorizontalAlignment";
  local_40 = 0x13;
  String::parse_latin1((StrRange *)&local_58);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_50,(String *)&local_58);
  StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
  *puVar3 = 2;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  puVar3[10] = 0x10006;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_48);
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
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<BitField<TextServer::LineBreakFlag>>::_gen_argument_type_info(int) const */

undefined4 *
MethodBindTRC<BitField<TextServer::LineBreakFlag>>::_gen_argument_type_info(int param_1)

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
  local_58 = 0;
  local_48 = "TextServer::LineBreakFlag";
  local_40 = 0x19;
  String::parse_latin1((StrRange *)&local_58);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_50,(String *)&local_58);
  StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
  *puVar3 = 2;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  puVar3[10] = 0x206;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_48);
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
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<BitField<TextServer::JustificationFlag>>::_gen_argument_type_info(int) const */

undefined4 *
MethodBindTRC<BitField<TextServer::JustificationFlag>>::_gen_argument_type_info(int param_1)

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
  local_58 = 0;
  local_48 = "TextServer::JustificationFlag";
  local_40 = 0x1d;
  String::parse_latin1((StrRange *)&local_58);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_50,(String *)&local_58);
  StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
  *puVar3 = 2;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  puVar3[10] = 0x206;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_48);
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
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<TextServer::Orientation>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<TextServer::Orientation>::_gen_argument_type_info(int param_1)

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
  local_58 = 0;
  local_48 = "TextServer::Orientation";
  local_40 = 0x17;
  String::parse_latin1((StrRange *)&local_58);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_50,(String *)&local_58);
  StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
  *puVar3 = 2;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  puVar3[10] = 0x10006;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_48);
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
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<TextServer::Direction>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<TextServer::Direction>::_gen_argument_type_info(int param_1)

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
  local_58 = 0;
  local_48 = "TextServer::Direction";
  local_40 = 0x15;
  String::parse_latin1((StrRange *)&local_58);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_50,(String *)&local_58);
  StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
  *puVar3 = 2;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  puVar3[10] = 0x10006;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_48);
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
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<TextServer::OverrunBehavior>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<TextServer::OverrunBehavior>::_gen_argument_type_info(int param_1)

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
  local_58 = 0;
  local_48 = "TextServer::OverrunBehavior";
  local_40 = 0x1b;
  String::parse_latin1((StrRange *)&local_58);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_50,(String *)&local_58);
  StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
  *puVar3 = 2;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  puVar3[10] = 0x10006;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_48);
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
    return puVar3;
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
LAB_001109f8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001109f8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x00110a1a;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x00110a1a:
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
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



/* TextParagraph::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall TextParagraph::_get_property_listv(TextParagraph *this,List *param_1,bool param_2)

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
  local_78 = "TextParagraph";
  local_70 = 0xd;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "TextParagraph";
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
  if (local_90 == 0) {
LAB_00110dad:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00110dad;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00110dcf;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00110dcf:
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
  StringName::StringName((StringName *)&local_78,"TextParagraph",false);
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



/* MethodBindT<Array const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<Array_const&>::_gen_argument_type_info(int param_1)

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
  if (in_EDX != 0) goto LAB_00111039;
  local_78 = 0;
  local_68 = &_LC23;
  local_80 = 0;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,0x1c);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00111135:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00111135;
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
LAB_00111039:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
}



/* MethodBindT<Vector<float> const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<Vector<float>const&>::_gen_argument_type_info(int param_1)

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
  if (in_EDX != 0) goto LAB_001112a9;
  local_78 = 0;
  local_68 = &_LC23;
  local_80 = 0;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,0x20);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_001113a5:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_001113a5;
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
LAB_001112a9:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
}



/* MethodBindT<float>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<float>::_gen_argument_type_info(int param_1)

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
  if (in_EDX != 0) goto LAB_00111519;
  local_78 = 0;
  local_68 = &_LC23;
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
LAB_00111615:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00111615;
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
LAB_00111519:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
}



/* MethodBindT<bool>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<bool>::_gen_argument_type_info(int param_1)

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
  if (in_EDX != 0) goto LAB_00111789;
  local_78 = 0;
  local_68 = &_LC23;
  local_80 = 0;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,1);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00111885:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00111885;
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
LAB_00111789:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
}



/* MethodBindT<BitField<TextServer::JustificationFlag> >::_gen_argument_type_info(int) const */

undefined4 *
MethodBindT<BitField<TextServer::JustificationFlag>>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  long lVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  details local_78 [8];
  long local_70;
  char *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
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
  if (in_EDX == 0) {
    local_80 = 0;
    local_60._0_8_ = 0x1d;
    local_68 = "TextServer::JustificationFlag";
    String::parse_latin1((StrRange *)&local_80);
    godot::details::enum_qualified_name_to_class_info_name(local_78,(String *)&local_80);
    StringName::StringName((StringName *)&local_70,(String *)local_78,false);
    local_60 = (undefined1  [16])0x0;
    local_88 = 0;
    local_90 = 0;
    local_68 = (char *)0x2;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0x206;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if ((StringName::configured != '\0') && (local_70 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
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
    puVar4[6] = (undefined4)local_50;
    if (*(long *)(puVar4 + 8) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar4 + 8));
      lVar3 = local_48;
      local_48 = 0;
      *(long *)(puVar4 + 8) = lVar3;
    }
    puVar4[10] = local_40;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<BitField<TextServer::LineBreakFlag> >::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<BitField<TextServer::LineBreakFlag>>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  long lVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  details local_78 [8];
  long local_70;
  char *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
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
  if (in_EDX == 0) {
    local_80 = 0;
    local_60._0_8_ = 0x19;
    local_68 = "TextServer::LineBreakFlag";
    String::parse_latin1((StrRange *)&local_80);
    godot::details::enum_qualified_name_to_class_info_name(local_78,(String *)&local_80);
    StringName::StringName((StringName *)&local_70,(String *)local_78,false);
    local_60 = (undefined1  [16])0x0;
    local_88 = 0;
    local_90 = 0;
    local_68 = (char *)0x2;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0x206;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if ((StringName::configured != '\0') && (local_70 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
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
    puVar4[6] = (undefined4)local_50;
    if (*(long *)(puVar4 + 8) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar4 + 8));
      lVar3 = local_48;
      local_48 = 0;
      *(long *)(puVar4 + 8) = lVar3;
    }
    puVar4[10] = local_40;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<TextServer::Direction>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<TextServer::Direction>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  long lVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  details local_78 [8];
  long local_70;
  char *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
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
  if (in_EDX == 0) {
    local_80 = 0;
    local_60._0_8_ = 0x15;
    local_68 = "TextServer::Direction";
    String::parse_latin1((StrRange *)&local_80);
    godot::details::enum_qualified_name_to_class_info_name(local_78,(String *)&local_80);
    StringName::StringName((StringName *)&local_70,(String *)local_78,false);
    local_60 = (undefined1  [16])0x0;
    local_88 = 0;
    local_90 = 0;
    local_68 = (char *)0x2;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0x10006;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if ((StringName::configured != '\0') && (local_70 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
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
    puVar4[6] = (undefined4)local_50;
    if (*(long *)(puVar4 + 8) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar4 + 8));
      lVar3 = local_48;
      local_48 = 0;
      *(long *)(puVar4 + 8) = lVar3;
    }
    puVar4[10] = local_40;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<TextServer::OverrunBehavior>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<TextServer::OverrunBehavior>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  long lVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  details local_78 [8];
  long local_70;
  char *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
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
  if (in_EDX == 0) {
    local_80 = 0;
    local_60._0_8_ = 0x1b;
    local_68 = "TextServer::OverrunBehavior";
    String::parse_latin1((StrRange *)&local_80);
    godot::details::enum_qualified_name_to_class_info_name(local_78,(String *)&local_80);
    StringName::StringName((StringName *)&local_70,(String *)local_78,false);
    local_60 = (undefined1  [16])0x0;
    local_88 = 0;
    local_90 = 0;
    local_68 = (char *)0x2;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0x10006;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if ((StringName::configured != '\0') && (local_70 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
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
    puVar4[6] = (undefined4)local_50;
    if (*(long *)(puVar4 + 8) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar4 + 8));
      lVar3 = local_48;
      local_48 = 0;
      *(long *)(puVar4 + 8) = lVar3;
    }
    puVar4[10] = local_40;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<TextServer::Orientation>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<TextServer::Orientation>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  long lVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  details local_78 [8];
  long local_70;
  char *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
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
  if (in_EDX == 0) {
    local_80 = 0;
    local_60._0_8_ = 0x17;
    local_68 = "TextServer::Orientation";
    String::parse_latin1((StrRange *)&local_80);
    godot::details::enum_qualified_name_to_class_info_name(local_78,(String *)&local_80);
    StringName::StringName((StringName *)&local_70,(String *)local_78,false);
    local_60 = (undefined1  [16])0x0;
    local_88 = 0;
    local_90 = 0;
    local_68 = (char *)0x2;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0x10006;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if ((StringName::configured != '\0') && (local_70 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
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
    puVar4[6] = (undefined4)local_50;
    if (*(long *)(puVar4 + 8) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar4 + 8));
      lVar3 = local_48;
      local_48 = 0;
      *(long *)(puVar4 + 8) = lVar3;
    }
    puVar4[10] = local_40;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<HorizontalAlignment>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<HorizontalAlignment>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  long lVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  details local_78 [8];
  long local_70;
  char *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
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
  if (in_EDX == 0) {
    local_80 = 0;
    local_60._0_8_ = 0x13;
    local_68 = "HorizontalAlignment";
    String::parse_latin1((StrRange *)&local_80);
    godot::details::enum_qualified_name_to_class_info_name(local_78,(String *)&local_80);
    StringName::StringName((StringName *)&local_70,(String *)local_78,false);
    local_60 = (undefined1  [16])0x0;
    local_88 = 0;
    local_90 = 0;
    local_68 = (char *)0x2;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0x10006;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if ((StringName::configured != '\0') && (local_70 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
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
    puVar4[6] = (undefined4)local_50;
    if (*(long *)(puVar4 + 8) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar4 + 8));
      lVar3 = local_48;
      local_48 = 0;
      *(long *)(puVar4 + 8) = lVar3;
    }
    puVar4[10] = local_40;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Ref<TextServer>::unref() */

void __thiscall Ref<TextServer>::unref(Ref<TextServer> *this)

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



/* MethodBind* create_method_bind<TextParagraph>(void (TextParagraph::*)()) */

MethodBind * create_method_bind<TextParagraph>(_func_void *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_0012d038;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "TextParagraph";
  local_30 = 0xd;
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



/* MethodBind* create_method_bind<TextParagraph, TextServer::Direction>(void
   (TextParagraph::*)(TextServer::Direction)) */

MethodBind * create_method_bind<TextParagraph,TextServer::Direction>(_func_void_Direction *param_1)

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
  *(_func_void_Direction **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012d098;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "TextParagraph";
  local_30 = 0xd;
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



/* MethodBind* create_method_bind<TextParagraph, TextServer::Direction>(TextServer::Direction
   (TextParagraph::*)() const) */

MethodBind * create_method_bind<TextParagraph,TextServer::Direction>(_func_Direction *param_1)

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
  *(_func_Direction **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012d0f8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "TextParagraph";
  local_30 = 0xd;
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



/* MethodBind* create_method_bind<TextParagraph, String const&>(void (TextParagraph::*)(String
   const&)) */

MethodBind * create_method_bind<TextParagraph,String_const&>(_func_void_String_ptr *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_0012d158;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "TextParagraph";
  local_30 = 0xd;
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



/* MethodBind* create_method_bind<TextParagraph, String>(String (TextParagraph::*)() const) */

MethodBind * create_method_bind<TextParagraph,String>(_func_String *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_0012d1b8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "TextParagraph";
  local_30 = 0xd;
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



/* MethodBind* create_method_bind<TextParagraph, TextServer::Orientation>(void
   (TextParagraph::*)(TextServer::Orientation)) */

MethodBind *
create_method_bind<TextParagraph,TextServer::Orientation>(_func_void_Orientation *param_1)

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
  *(_func_void_Orientation **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012d218;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "TextParagraph";
  local_30 = 0xd;
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



/* MethodBind* create_method_bind<TextParagraph, TextServer::Orientation>(TextServer::Orientation
   (TextParagraph::*)() const) */

MethodBind * create_method_bind<TextParagraph,TextServer::Orientation>(_func_Orientation *param_1)

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
  *(_func_Orientation **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012d278;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "TextParagraph";
  local_30 = 0xd;
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



/* MethodBind* create_method_bind<TextParagraph, bool>(void (TextParagraph::*)(bool)) */

MethodBind * create_method_bind<TextParagraph,bool>(_func_void_bool *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_0012d2d8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "TextParagraph";
  local_30 = 0xd;
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



/* MethodBind* create_method_bind<TextParagraph, bool>(bool (TextParagraph::*)() const) */

MethodBind * create_method_bind<TextParagraph,bool>(_func_bool *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_0012d338;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "TextParagraph";
  local_30 = 0xd;
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



/* MethodBind* create_method_bind<TextParagraph, Array const&>(void (TextParagraph::*)(Array
   const&)) */

MethodBind * create_method_bind<TextParagraph,Array_const&>(_func_void_Array_ptr *param_1)

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
  *(_func_void_Array_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012d398;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "TextParagraph";
  local_30 = 0xd;
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



/* MethodBind* create_method_bind<TextParagraph, bool, String const&, Ref<Font> const&, int, Rect2
   const&, String const&>(bool (TextParagraph::*)(String const&, Ref<Font> const&, int, Rect2
   const&, String const&)) */

MethodBind *
create_method_bind<TextParagraph,bool,String_const&,Ref<Font>const&,int,Rect2_const&,String_const&>
          (_func_bool_String_ptr_Ref_ptr_int_Rect2_ptr_String_ptr *param_1)

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
  *(_func_bool_String_ptr_Ref_ptr_int_Rect2_ptr_String_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012d3f8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 5;
  local_40 = 0;
  local_38 = "TextParagraph";
  local_30 = 0xd;
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



/* MethodBind* create_method_bind<TextParagraph, bool, String const&, Ref<Font> const&, int, String
   const&, Variant const&>(bool (TextParagraph::*)(String const&, Ref<Font> const&, int, String
   const&, Variant const&)) */

MethodBind *
create_method_bind<TextParagraph,bool,String_const&,Ref<Font>const&,int,String_const&,Variant_const&>
          (_func_bool_String_ptr_Ref_ptr_int_String_ptr_Variant_ptr *param_1)

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
  *(_func_bool_String_ptr_Ref_ptr_int_String_ptr_Variant_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012d458;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 5;
  local_40 = 0;
  local_38 = "TextParagraph";
  local_30 = 0xd;
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



/* MethodBind* create_method_bind<TextParagraph, bool, Variant, Vector2 const&, InlineAlignment,
   int, float>(bool (TextParagraph::*)(Variant, Vector2 const&, InlineAlignment, int, float)) */

MethodBind *
create_method_bind<TextParagraph,bool,Variant,Vector2_const&,InlineAlignment,int,float>
          (_func_bool_Variant_Vector2_ptr_InlineAlignment_int_float *param_1)

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
  *(_func_bool_Variant_Vector2_ptr_InlineAlignment_int_float **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012d4b8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 5;
  local_40 = 0;
  local_38 = "TextParagraph";
  local_30 = 0xd;
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



/* MethodBind* create_method_bind<TextParagraph, bool, Variant, Vector2 const&, InlineAlignment,
   float>(bool (TextParagraph::*)(Variant, Vector2 const&, InlineAlignment, float)) */

MethodBind *
create_method_bind<TextParagraph,bool,Variant,Vector2_const&,InlineAlignment,float>
          (_func_bool_Variant_Vector2_ptr_InlineAlignment_float *param_1)

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
  *(_func_bool_Variant_Vector2_ptr_InlineAlignment_float **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012d518;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 4;
  local_40 = 0;
  local_38 = "TextParagraph";
  local_30 = 0xd;
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



/* MethodBind* create_method_bind<TextParagraph, HorizontalAlignment>(void
   (TextParagraph::*)(HorizontalAlignment)) */

MethodBind *
create_method_bind<TextParagraph,HorizontalAlignment>(_func_void_HorizontalAlignment *param_1)

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
  *(_func_void_HorizontalAlignment **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012d578;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "TextParagraph";
  local_30 = 0xd;
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



/* MethodBind* create_method_bind<TextParagraph, HorizontalAlignment>(HorizontalAlignment
   (TextParagraph::*)() const) */

MethodBind *
create_method_bind<TextParagraph,HorizontalAlignment>(_func_HorizontalAlignment *param_1)

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
  *(_func_HorizontalAlignment **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012d5d8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "TextParagraph";
  local_30 = 0xd;
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



/* MethodBind* create_method_bind<TextParagraph, Vector<float> const&>(void
   (TextParagraph::*)(Vector<float> const&)) */

MethodBind * create_method_bind<TextParagraph,Vector<float>const&>(_func_void_Vector_ptr *param_1)

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
  *(_func_void_Vector_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012d638;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "TextParagraph";
  local_30 = 0xd;
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



/* MethodBind* create_method_bind<TextParagraph, BitField<TextServer::LineBreakFlag> >(void
   (TextParagraph::*)(BitField<TextServer::LineBreakFlag>)) */

MethodBind *
create_method_bind<TextParagraph,BitField<TextServer::LineBreakFlag>>(_func_void_BitField *param_1)

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
  *(_func_void_BitField **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012d698;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "TextParagraph";
  local_30 = 0xd;
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



/* MethodBind* create_method_bind<TextParagraph,
   BitField<TextServer::LineBreakFlag>>(BitField<TextServer::LineBreakFlag> (TextParagraph::*)()
   const) */

MethodBind *
create_method_bind<TextParagraph,BitField<TextServer::LineBreakFlag>>(_func_BitField *param_1)

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
  *(_func_BitField **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012d6f8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "TextParagraph";
  local_30 = 0xd;
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



/* MethodBind* create_method_bind<TextParagraph, BitField<TextServer::JustificationFlag> >(void
   (TextParagraph::*)(BitField<TextServer::JustificationFlag>)) */

MethodBind *
create_method_bind<TextParagraph,BitField<TextServer::JustificationFlag>>
          (_func_void_BitField *param_1)

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
  *(_func_void_BitField **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012d758;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "TextParagraph";
  local_30 = 0xd;
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



/* MethodBind* create_method_bind<TextParagraph,
   BitField<TextServer::JustificationFlag>>(BitField<TextServer::JustificationFlag>
   (TextParagraph::*)() const) */

MethodBind *
create_method_bind<TextParagraph,BitField<TextServer::JustificationFlag>>(_func_BitField *param_1)

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
  *(_func_BitField **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012d7b8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "TextParagraph";
  local_30 = 0xd;
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



/* MethodBind* create_method_bind<TextParagraph, TextServer::OverrunBehavior>(void
   (TextParagraph::*)(TextServer::OverrunBehavior)) */

MethodBind *
create_method_bind<TextParagraph,TextServer::OverrunBehavior>(_func_void_OverrunBehavior *param_1)

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
  *(_func_void_OverrunBehavior **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012d818;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "TextParagraph";
  local_30 = 0xd;
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



/* MethodBind* create_method_bind<TextParagraph,
   TextServer::OverrunBehavior>(TextServer::OverrunBehavior (TextParagraph::*)() const) */

MethodBind *
create_method_bind<TextParagraph,TextServer::OverrunBehavior>(_func_OverrunBehavior *param_1)

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
  *(_func_OverrunBehavior **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012d878;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "TextParagraph";
  local_30 = 0xd;
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



/* MethodBind* create_method_bind<TextParagraph, float>(void (TextParagraph::*)(float)) */

MethodBind * create_method_bind<TextParagraph,float>(_func_void_float *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_0012d8d8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "TextParagraph";
  local_30 = 0xd;
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



/* MethodBind* create_method_bind<TextParagraph, float>(float (TextParagraph::*)() const) */

MethodBind * create_method_bind<TextParagraph,float>(_func_float *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_0012d938;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "TextParagraph";
  local_30 = 0xd;
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



/* MethodBind* create_method_bind<TextParagraph, Vector2>(Vector2 (TextParagraph::*)() const) */

MethodBind * create_method_bind<TextParagraph,Vector2>(_func_Vector2 *param_1)

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
  *(_func_Vector2 **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012d998;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "TextParagraph";
  local_30 = 0xd;
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



/* MethodBind* create_method_bind<TextParagraph, RID>(RID (TextParagraph::*)() const) */

MethodBind * create_method_bind<TextParagraph,RID>(_func_RID *param_1)

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
  *(_func_RID **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012d9f8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "TextParagraph";
  local_30 = 0xd;
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



/* MethodBind* create_method_bind<TextParagraph, RID, int>(RID (TextParagraph::*)(int) const) */

MethodBind * create_method_bind<TextParagraph,RID,int>(_func_RID_int *param_1)

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
  *(_func_RID_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012da58;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "TextParagraph";
  local_30 = 0xd;
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



/* MethodBind* create_method_bind<TextParagraph, int>(int (TextParagraph::*)() const) */

MethodBind * create_method_bind<TextParagraph,int>(_func_int *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_0012dab8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "TextParagraph";
  local_30 = 0xd;
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



/* MethodBind* create_method_bind<TextParagraph, int>(void (TextParagraph::*)(int)) */

MethodBind * create_method_bind<TextParagraph,int>(_func_void_int *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_0012db18;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "TextParagraph";
  local_30 = 0xd;
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



/* MethodBind* create_method_bind<TextParagraph, Array, int>(Array (TextParagraph::*)(int) const) */

MethodBind * create_method_bind<TextParagraph,Array,int>(_func_Array_int *param_1)

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
  *(_func_Array_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012db78;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "TextParagraph";
  local_30 = 0xd;
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



/* MethodBind* create_method_bind<TextParagraph, Rect2, int, Variant>(Rect2 (TextParagraph::*)(int,
   Variant) const) */

MethodBind * create_method_bind<TextParagraph,Rect2,int,Variant>(_func_Rect2_int_Variant *param_1)

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
  *(_func_Rect2_int_Variant **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012dbd8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "TextParagraph";
  local_30 = 0xd;
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



/* MethodBind* create_method_bind<TextParagraph, Vector2, int>(Vector2 (TextParagraph::*)(int)
   const) */

MethodBind * create_method_bind<TextParagraph,Vector2,int>(_func_Vector2_int *param_1)

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
  *(_func_Vector2_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012dc38;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "TextParagraph";
  local_30 = 0xd;
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



/* MethodBind* create_method_bind<TextParagraph, Vector2i, int>(Vector2i (TextParagraph::*)(int)
   const) */

MethodBind * create_method_bind<TextParagraph,Vector2i,int>(_func_Vector2i_int *param_1)

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
  *(_func_Vector2i_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012dc98;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "TextParagraph";
  local_30 = 0xd;
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



/* MethodBind* create_method_bind<TextParagraph, float, int>(float (TextParagraph::*)(int) const) */

MethodBind * create_method_bind<TextParagraph,float,int>(_func_float_int *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_0012dcf8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "TextParagraph";
  local_30 = 0xd;
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



/* MethodBind* create_method_bind<TextParagraph, RID, Vector2 const&, Color const&, Color
   const&>(void (TextParagraph::*)(RID, Vector2 const&, Color const&, Color const&) const) */

MethodBind *
create_method_bind<TextParagraph,RID,Vector2_const&,Color_const&,Color_const&>
          (_func_void_RID_Vector2_ptr_Color_ptr_Color_ptr *param_1)

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
  *(_func_void_RID_Vector2_ptr_Color_ptr_Color_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012dd58;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 4;
  local_40 = 0;
  local_38 = "TextParagraph";
  local_30 = 0xd;
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



/* MethodBind* create_method_bind<TextParagraph, RID, Vector2 const&, int, Color const&, Color
   const&>(void (TextParagraph::*)(RID, Vector2 const&, int, Color const&, Color const&) const) */

MethodBind *
create_method_bind<TextParagraph,RID,Vector2_const&,int,Color_const&,Color_const&>
          (_func_void_RID_Vector2_ptr_int_Color_ptr_Color_ptr *param_1)

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
  *(_func_void_RID_Vector2_ptr_int_Color_ptr_Color_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012ddb8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 5;
  local_40 = 0;
  local_38 = "TextParagraph";
  local_30 = 0xd;
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



/* MethodBind* create_method_bind<TextParagraph, RID, Vector2 const&, int, Color const&>(void
   (TextParagraph::*)(RID, Vector2 const&, int, Color const&) const) */

MethodBind *
create_method_bind<TextParagraph,RID,Vector2_const&,int,Color_const&>
          (_func_void_RID_Vector2_ptr_int_Color_ptr *param_1)

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
  *(_func_void_RID_Vector2_ptr_int_Color_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012de18;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 4;
  local_40 = 0;
  local_38 = "TextParagraph";
  local_30 = 0xd;
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



/* MethodBind* create_method_bind<TextParagraph, RID, Vector2 const&, int, int, Color const&>(void
   (TextParagraph::*)(RID, Vector2 const&, int, int, Color const&) const) */

MethodBind *
create_method_bind<TextParagraph,RID,Vector2_const&,int,int,Color_const&>
          (_func_void_RID_Vector2_ptr_int_int_Color_ptr *param_1)

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
  *(_func_void_RID_Vector2_ptr_int_int_Color_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012de78;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 5;
  local_40 = 0;
  local_38 = "TextParagraph";
  local_30 = 0xd;
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



/* MethodBind* create_method_bind<TextParagraph, RID, Vector2 const&, Color const&>(void
   (TextParagraph::*)(RID, Vector2 const&, Color const&) const) */

MethodBind *
create_method_bind<TextParagraph,RID,Vector2_const&,Color_const&>
          (_func_void_RID_Vector2_ptr_Color_ptr *param_1)

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
  *(_func_void_RID_Vector2_ptr_Color_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012ded8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 3;
  local_40 = 0;
  local_38 = "TextParagraph";
  local_30 = 0xd;
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



/* MethodBind* create_method_bind<TextParagraph, int, Vector2 const&>(int (TextParagraph::*)(Vector2
   const&) const) */

MethodBind * create_method_bind<TextParagraph,int,Vector2_const&>(_func_int_Vector2_ptr *param_1)

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
  *(_func_int_Vector2_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012df38;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "TextParagraph";
  local_30 = 0xd;
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



/* TextParagraph::_initialize_classv() */

void TextParagraph::_initialize_classv(void)

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
    local_48 = "TextParagraph";
    local_60 = 0;
    local_40 = 0xd;
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



/* WARNING: Removing unreachable block (ram,0x001159d8) */
/* WARNING: Removing unreachable block (ram,0x00115b6d) */
/* WARNING: Removing unreachable block (ram,0x00115b79) */
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



/* MethodBindTRC<int, Vector2 const&>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<int,Vector2_const&>::validated_call
          (MethodBindTRC<int,Vector2_const&> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

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
      goto LAB_00115cfb;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  iVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60),*param_2 + 8);
  *(long *)(param_3 + 8) = (long)iVar1;
LAB_00115cfb:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int, Vector2 const&>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<int,Vector2_const&>::ptrcall
          (MethodBindTRC<int,Vector2_const&> *this,Object *param_1,void **param_2,void *param_3)

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
      goto LAB_00115ed8;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  iVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60),*param_2);
  *(long *)param_3 = (long)iVar1;
LAB_00115ed8:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTC<RID, Vector2 const&, Color const&>::validated_call(Object*, Variant const**,
   Variant*) const */

void MethodBindTC<RID,Vector2_const&,Color_const&>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

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
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) && (param_2[1][0x2e] != '\0')
     ) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      plVar1 = (long *)param_2[0x23];
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar1 = (long *)(param_2[1] + 0x20);
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
      _err_print_error("validated_call","./core/object/method_bind.h",0x1b4,
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
      goto LAB_00116237;
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
                    /* WARNING: Could not recover jumptable at 0x001160e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined8 *)(*(long *)param_3 + 8),*(long *)(param_3 + 8) + 8,
               *(long *)(param_3 + 0x10) + 8);
    return;
  }
LAB_00116237:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTC<RID, Vector2 const&, Color const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindTC<RID,Vector2_const&,Color_const&>::ptrcall
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
      _err_print_error("ptrcall","./core/object/method_bind.h",0x1bf,
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
      goto LAB_00116421;
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
                    /* WARNING: Could not recover jumptable at 0x001162a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3,
               *(undefined8 *)((long)param_3 + 8),*(undefined8 *)((long)param_3 + 0x10));
    return;
  }
LAB_00116421:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTC<RID, Vector2 const&, int, int, Color const&>::validated_call(Object*, Variant
   const**, Variant*) const */

void MethodBindTC<RID,Vector2_const&,int,int,Color_const&>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

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
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) && (param_2[1][0x2e] != '\0')
     ) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      plVar1 = (long *)param_2[0x23];
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar1 = (long *)(param_2[1] + 0x20);
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
      _err_print_error("validated_call","./core/object/method_bind.h",0x1b4,
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
      goto LAB_00116608;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)(*(long *)(param_1 + 0x60) + (long)param_2) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001164b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)(*(long *)(param_1 + 0x60) + (long)param_2),
               *(undefined8 *)(*(long *)param_3 + 8),*(long *)(param_3 + 8) + 8,
               *(undefined4 *)(*(long *)(param_3 + 0x10) + 8),
               *(undefined4 *)(*(long *)(param_3 + 0x18) + 8),*(long *)(param_3 + 0x20) + 8);
    return;
  }
LAB_00116608:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTC<RID, Vector2 const&, int, int, Color const&>::ptrcall(Object*, void const**, void*)
   const */

void MethodBindTC<RID,Vector2_const&,int,int,Color_const&>::ptrcall
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
      _err_print_error("ptrcall","./core/object/method_bind.h",0x1bf,
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
      goto LAB_00116801;
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
                    /* WARNING: Could not recover jumptable at 0x00116684. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3,
               *(undefined8 *)((long)param_3 + 8),**(undefined4 **)((long)param_3 + 0x10),
               **(undefined4 **)((long)param_3 + 0x18),*(undefined8 *)((long)param_3 + 0x20));
    return;
  }
LAB_00116801:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTC<RID, Vector2 const&, int, Color const&>::validated_call(Object*, Variant const**,
   Variant*) const */

void MethodBindTC<RID,Vector2_const&,int,Color_const&>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

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
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) && (param_2[1][0x2e] != '\0')
     ) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      plVar1 = (long *)param_2[0x23];
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar1 = (long *)(param_2[1] + 0x20);
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
      _err_print_error("validated_call","./core/object/method_bind.h",0x1b4,
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
      goto LAB_001169df;
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
                    /* WARNING: Could not recover jumptable at 0x0011688a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined8 *)(*(long *)param_3 + 8),*(long *)(param_3 + 8) + 8,
               *(undefined4 *)(*(long *)(param_3 + 0x10) + 8),*(long *)(param_3 + 0x18) + 8);
    return;
  }
LAB_001169df:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTC<RID, Vector2 const&, int, Color const&>::ptrcall(Object*, void const**, void*) const
    */

void MethodBindTC<RID,Vector2_const&,int,Color_const&>::ptrcall
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
      _err_print_error("ptrcall","./core/object/method_bind.h",0x1bf,
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
      goto LAB_00116bd1;
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
                    /* WARNING: Could not recover jumptable at 0x00116a5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3,
               *(undefined8 *)((long)param_3 + 8),**(undefined4 **)((long)param_3 + 0x10),
               *(undefined8 *)((long)param_3 + 0x18));
    return;
  }
LAB_00116bd1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTC<RID, Vector2 const&, int, Color const&, Color const&>::validated_call(Object*,
   Variant const**, Variant*) const */

void MethodBindTC<RID,Vector2_const&,int,Color_const&,Color_const&>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

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
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) && (param_2[1][0x2e] != '\0')
     ) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      plVar1 = (long *)param_2[0x23];
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar1 = (long *)(param_2[1] + 0x20);
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
      _err_print_error("validated_call","./core/object/method_bind.h",0x1b4,
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
      goto LAB_00116db8;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)(*(long *)(param_1 + 0x60) + (long)param_2) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00116c61. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)(*(long *)(param_1 + 0x60) + (long)param_2),
               *(undefined8 *)(*(long *)param_3 + 8),*(long *)(param_3 + 8) + 8,
               *(undefined4 *)(*(long *)(param_3 + 0x10) + 8),*(long *)(param_3 + 0x18) + 8,
               *(long *)(param_3 + 0x20) + 8);
    return;
  }
LAB_00116db8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTC<RID, Vector2 const&, int, Color const&, Color const&>::ptrcall(Object*, void
   const**, void*) const */

void MethodBindTC<RID,Vector2_const&,int,Color_const&,Color_const&>::ptrcall
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
      _err_print_error("ptrcall","./core/object/method_bind.h",0x1bf,
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
      goto LAB_00116fa9;
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
                    /* WARNING: Could not recover jumptable at 0x00116e31. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3,
               *(undefined8 *)((long)param_3 + 8),**(undefined4 **)((long)param_3 + 0x10),
               *(undefined8 *)((long)param_3 + 0x18),*(undefined8 *)((long)param_3 + 0x20));
    return;
  }
LAB_00116fa9:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTC<RID, Vector2 const&, Color const&, Color const&>::validated_call(Object*, Variant
   const**, Variant*) const */

void MethodBindTC<RID,Vector2_const&,Color_const&,Color_const&>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

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
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) && (param_2[1][0x2e] != '\0')
     ) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      plVar1 = (long *)param_2[0x23];
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar1 = (long *)(param_2[1] + 0x20);
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
      _err_print_error("validated_call","./core/object/method_bind.h",0x1b4,
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
      goto LAB_0011717f;
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
                    /* WARNING: Could not recover jumptable at 0x0011702b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined8 *)(*(long *)param_3 + 8),*(long *)(param_3 + 8) + 8,
               *(long *)(param_3 + 0x10) + 8,*(long *)(param_3 + 0x18) + 8);
    return;
  }
LAB_0011717f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTC<RID, Vector2 const&, Color const&, Color const&>::ptrcall(Object*, void const**,
   void*) const */

void MethodBindTC<RID,Vector2_const&,Color_const&,Color_const&>::ptrcall
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
      _err_print_error("ptrcall","./core/object/method_bind.h",0x1bf,
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
      goto LAB_00117371;
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
                    /* WARNING: Could not recover jumptable at 0x001171fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3,
               *(undefined8 *)((long)param_3 + 8),*(undefined8 *)((long)param_3 + 0x10),
               *(undefined8 *)((long)param_3 + 0x18));
    return;
  }
LAB_00117371:
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
      goto LAB_001173ce;
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
LAB_001173ce:
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
      goto LAB_001175ac;
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
LAB_001175ac:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector2i, int>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Vector2i,int>::validated_call
          (MethodBindTRC<Vector2i,int> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
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
      goto LAB_00117789;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar2 = (*pcVar1)(param_1 + *(long *)(this + 0x60),*(undefined4 *)(*param_2 + 8));
  *(undefined8 *)(param_3 + 8) = uVar2;
LAB_00117789:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector2i, int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Vector2i,int>::ptrcall
          (MethodBindTRC<Vector2i,int> *this,Object *param_1,void **param_2,void *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
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
      goto LAB_00117968;
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
  uVar2 = (*pcVar1)(param_1 + *(long *)(this + 0x60),**param_2);
  *(undefined8 *)param_3 = uVar2;
LAB_00117968:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector2, int>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Vector2,int>::validated_call
          (MethodBindTRC<Vector2,int> *this,Object *param_1,Variant **param_2,Variant *param_3)

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
      goto LAB_00117b4a;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar3 = (*pcVar1)(param_1 + *(long *)(this + 0x60),*(undefined4 *)(*param_2 + 8));
  *(undefined8 *)(param_3 + 8) = uVar3;
LAB_00117b4a:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector2, int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Vector2,int>::ptrcall
          (MethodBindTRC<Vector2,int> *this,Object *param_1,void **param_2,void *param_3)

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
      goto LAB_00117d29;
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
  uVar3 = (*pcVar1)(param_1 + *(long *)(this + 0x60),**param_2);
  *(undefined8 *)param_3 = uVar3;
LAB_00117d29:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Rect2, int, Variant>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindTRC<Rect2,int,Variant>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  char cVar1;
  long lVar2;
  long *plVar3;
  long in_RCX;
  code *pcVar4;
  long in_FS_OFFSET;
  undefined8 uVar5;
  undefined8 in_XMM1_Qa;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) && (param_2[1][0x2e] != '\0')
     ) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      plVar3 = (long *)param_2[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar3 = (long *)(param_2[1] + 0x20);
    }
    if (local_58 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0x35;
      local_60 = 0;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00117f47;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(param_1 + 0x58);
  lVar2 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)((long)param_2 + lVar2) + -1);
  }
  ::Variant::Variant((Variant *)local_48,*(Variant **)(param_3 + 8));
  uVar5 = (*pcVar4)((long *)((long)param_2 + lVar2),*(undefined4 *)(*(long *)param_3 + 8),
                    (Variant *)local_48);
  *(undefined8 *)(in_RCX + 8) = uVar5;
  cVar1 = ::Variant::needs_deinit[local_48[0]];
  *(undefined8 *)(in_RCX + 0x10) = in_XMM1_Qa;
  if (cVar1 != '\0') {
    ::Variant::_clear_internal();
  }
LAB_00117f47:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Rect2, int, Variant>::ptrcall(Object*, void const**, void*) const */

void MethodBindTRC<Rect2,int,Variant>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  char cVar1;
  long lVar2;
  long *plVar3;
  undefined8 *in_RCX;
  code *pcVar4;
  long in_FS_OFFSET;
  undefined8 uVar5;
  undefined8 in_XMM1_Qa;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar3 = (long *)param_2[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar3 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_58 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0x35;
      local_60 = 0;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00118155;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(param_1 + 0x58);
  lVar2 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)((long)param_2 + lVar2) + -1);
  }
  ::Variant::Variant((Variant *)local_48,*(Variant **)((long)param_3 + 8));
                    /* WARNING: Load size is inaccurate */
  uVar5 = (*pcVar4)((long *)((long)param_2 + lVar2),**param_3,(Variant *)local_48);
  *in_RCX = uVar5;
  cVar1 = ::Variant::needs_deinit[local_48[0]];
  in_RCX[1] = in_XMM1_Qa;
  if (cVar1 != '\0') {
    ::Variant::_clear_internal();
  }
LAB_00118155:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Array, int>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Array,int>::validated_call
          (MethodBindTRC<Array,int> *this,Object *param_1,Variant **param_2,Variant *param_3)

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
      vformat<StringName>((Array *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Array *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011833f;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar1)((Array *)&local_48,param_1 + *(long *)(this + 0x60),*(undefined4 *)(*param_2 + 8));
  Array::operator=((Array *)(param_3 + 8),(Array *)&local_48);
  Array::~Array((Array *)&local_48);
LAB_0011833f:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Array, int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Array,int>::ptrcall
          (MethodBindTRC<Array,int> *this,Object *param_1,void **param_2,void *param_3)

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
      vformat<StringName>((Array *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Array *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011852d;
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
  (*pcVar1)((Array *)&local_48,param_1 + *(long *)(this + 0x60),**param_2);
  Array::operator=((Array *)param_3,(Array *)&local_48);
  Array::~Array((Array *)&local_48);
LAB_0011852d:
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
  long *plVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) && (param_2[1][0x2e] != '\0')
     ) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      plVar1 = (long *)param_2[0x23];
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar1 = (long *)(param_2[1] + 0x20);
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
      goto LAB_00118891;
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
                    /* WARNING: Could not recover jumptable at 0x0011871c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_00118891:
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
      goto LAB_00118a71;
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
                    /* WARNING: Could not recover jumptable at 0x001188fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_00118a71:
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
  code *pcVar3;
  
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
      _err_print_error(&_LC206,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00118bd0;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = (code *)param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pcVar3 & 1) != 0) {
        pcVar3 = *(code **)(pcVar3 + *(long *)((long)plVar5 + (long)pVVar1) + -1);
      }
      iVar2 = (*pcVar3)();
      ::Variant::Variant((Variant *)local_48,iVar2);
      if (::Variant::needs_deinit[*(int *)param_1] != '\0') {
        ::Variant::_clear_internal();
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
LAB_00118bd0:
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
      goto LAB_00118de4;
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
LAB_00118de4:
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
      goto LAB_00118f93;
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
LAB_00118f93:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<RID, int>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<RID,int>::validated_call
          (MethodBindTRC<RID,int> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
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
      goto LAB_00119149;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar2 = (*pcVar1)(param_1 + *(long *)(this + 0x60),*(undefined4 *)(*param_2 + 8));
  *(undefined8 *)(param_3 + 8) = uVar2;
LAB_00119149:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<RID, int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<RID,int>::ptrcall
          (MethodBindTRC<RID,int> *this,Object *param_1,void **param_2,void *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
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
      goto LAB_00119328;
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
  uVar2 = (*pcVar1)(param_1 + *(long *)(this + 0x60),**param_2);
  *(undefined8 *)param_3 = uVar2;
LAB_00119328:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<RID>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<RID>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  code *pcVar2;
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
      _err_print_error(&_LC206,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00119590;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = (code *)param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pcVar2 & 1) != 0) {
        pcVar2 = *(code **)(pcVar2 + *(long *)((long)plVar4 + (long)pVVar1) + -1);
      }
      local_58 = (char *)(*pcVar2)();
      ::Variant::Variant((Variant *)local_48,(RID *)&local_58);
      if (::Variant::needs_deinit[*(int *)param_1] != '\0') {
        ::Variant::_clear_internal();
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
LAB_00119590:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<RID>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<RID>::validated_call
          (MethodBindTRC<RID> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  undefined8 uVar1;
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
      goto LAB_001197a2;
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
  *(undefined8 *)(param_3 + 8) = uVar1;
LAB_001197a2:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<RID>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<RID>::ptrcall(MethodBindTRC<RID> *this,Object *param_1,void **param_2,void *param_3)

{
  undefined8 uVar1;
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
      goto LAB_00119951;
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
  *(undefined8 *)param_3 = uVar1;
LAB_00119951:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector2>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<Vector2>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  code *pcVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  long *plVar4;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
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
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar4[1] == 0) {
      plVar3 = (long *)plVar4[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*plVar4 + 0x40))(plVar4);
      }
    }
    else {
      plVar3 = (long *)(plVar4[1] + 0x20);
    }
    if (local_68 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC206,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_00119b90;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = (code *)param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pcVar2 & 1) != 0) {
        pcVar2 = *(code **)(pcVar2 + *(long *)((long)plVar4 + (long)pVVar1) + -1);
      }
      local_50 = (*pcVar2)();
      ::Variant::Variant((Variant *)local_48,(Vector2 *)&local_50);
      if (::Variant::needs_deinit[*(int *)param_1] != '\0') {
        ::Variant::_clear_internal();
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
LAB_00119b90:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector2>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Vector2>::validated_call
          (MethodBindTRC<Vector2> *this,Object *param_1,Variant **param_2,Variant *param_3)

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
      goto LAB_00119da4;
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
LAB_00119da4:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector2>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Vector2>::ptrcall
          (MethodBindTRC<Vector2> *this,Object *param_1,void **param_2,void *param_3)

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
      goto LAB_00119f53;
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
LAB_00119f53:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<float>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<float>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  code *pcVar2;
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
      _err_print_error(&_LC206,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011a180;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = (code *)param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pcVar2 & 1) != 0) {
        pcVar2 = *(code **)(pcVar2 + *(long *)((long)plVar4 + (long)pVVar1) + -1);
      }
      fVar5 = (float)(*pcVar2)();
      ::Variant::Variant((Variant *)local_48,fVar5);
      if (::Variant::needs_deinit[*(int *)param_1] != '\0') {
        ::Variant::_clear_internal();
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
LAB_0011a180:
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
      goto LAB_0011a398;
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
LAB_0011a398:
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
      goto LAB_0011a557;
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
LAB_0011a557:
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
  long *plVar1;
  long in_FS_OFFSET;
  undefined1 auVar2 [16];
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) && (param_2[1][0x2e] != '\0')
     ) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      plVar1 = (long *)param_2[0x23];
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar1 = (long *)(param_2[1] + 0x20);
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
      goto LAB_0011a8a9;
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
                    /* WARNING: Could not recover jumptable at 0x0011a732. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(auVar2._0_8_,(long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0011a8a9:
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
      goto LAB_0011aa89;
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
                    /* WARNING: Could not recover jumptable at 0x0011a911. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(auVar2._0_8_,(long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0011aa89:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<TextServer::OverrunBehavior>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTRC<TextServer::OverrunBehavior>::call
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
  code *pcVar3;
  
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
      _err_print_error(&_LC206,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011ab50;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = (code *)param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pcVar3 & 1) != 0) {
        pcVar3 = *(code **)(pcVar3 + *(long *)((long)plVar5 + (long)pVVar1) + -1);
      }
      iVar2 = (*pcVar3)();
      ::Variant::Variant((Variant *)local_48,iVar2);
      if (::Variant::needs_deinit[*(int *)param_1] != '\0') {
        ::Variant::_clear_internal();
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
LAB_0011ab50:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<TextServer::OverrunBehavior>::validated_call(Object*, Variant const**, Variant*)
   const */

void __thiscall
MethodBindTRC<TextServer::OverrunBehavior>::validated_call
          (MethodBindTRC<TextServer::OverrunBehavior> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

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
      goto LAB_0011ad64;
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
LAB_0011ad64:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<TextServer::OverrunBehavior>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<TextServer::OverrunBehavior>::ptrcall
          (MethodBindTRC<TextServer::OverrunBehavior> *this,Object *param_1,void **param_2,
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
      goto LAB_0011af13;
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
LAB_0011af13:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<TextServer::OverrunBehavior>::validated_call(Object*, Variant const**, Variant*)
   const */

void MethodBindT<TextServer::OverrunBehavior>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

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
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) && (param_2[1][0x2e] != '\0')
     ) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      plVar1 = (long *)param_2[0x23];
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar1 = (long *)(param_2[1] + 0x20);
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
      goto LAB_0011b251;
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
                    /* WARNING: Could not recover jumptable at 0x0011b0dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_0011b251:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<TextServer::OverrunBehavior>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<TextServer::OverrunBehavior>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_0011b431;
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
                    /* WARNING: Could not recover jumptable at 0x0011b2bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_0011b431:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<BitField<TextServer::JustificationFlag>>::validated_call(Object*, Variant const**,
   Variant*) const */

void __thiscall
MethodBindTRC<BitField<TextServer::JustificationFlag>>::validated_call
          (MethodBindTRC<BitField<TextServer::JustificationFlag>> *this,Object *param_1,
          Variant **param_2,Variant *param_3)

{
  undefined8 uVar1;
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
      goto LAB_0011b482;
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
  *(undefined8 *)(param_3 + 8) = uVar1;
LAB_0011b482:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<BitField<TextServer::JustificationFlag>>::ptrcall(Object*, void const**, void*)
   const */

void __thiscall
MethodBindTRC<BitField<TextServer::JustificationFlag>>::ptrcall
          (MethodBindTRC<BitField<TextServer::JustificationFlag>> *this,Object *param_1,
          void **param_2,void *param_3)

{
  undefined8 uVar1;
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
      goto LAB_0011b631;
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
  *(undefined8 *)param_3 = uVar1;
LAB_0011b631:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<BitField<TextServer::JustificationFlag> >::validated_call(Object*, Variant const**,
   Variant*) const */

void MethodBindT<BitField<TextServer::JustificationFlag>>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

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
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) && (param_2[1][0x2e] != '\0')
     ) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      plVar1 = (long *)param_2[0x23];
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar1 = (long *)(param_2[1] + 0x20);
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
      goto LAB_0011b971;
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
                    /* WARNING: Could not recover jumptable at 0x0011b7fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined8 *)(*(long *)param_3 + 8));
    return;
  }
LAB_0011b971:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<BitField<TextServer::JustificationFlag> >::ptrcall(Object*, void const**, void*)
   const */

void MethodBindT<BitField<TextServer::JustificationFlag>>::ptrcall
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
      goto LAB_0011bb51;
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
                    /* WARNING: Could not recover jumptable at 0x0011b9dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_0011bb51:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<BitField<TextServer::LineBreakFlag>>::validated_call(Object*, Variant const**,
   Variant*) const */

void __thiscall
MethodBindTRC<BitField<TextServer::LineBreakFlag>>::validated_call
          (MethodBindTRC<BitField<TextServer::LineBreakFlag>> *this,Object *param_1,
          Variant **param_2,Variant *param_3)

{
  undefined8 uVar1;
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
      goto LAB_0011bba2;
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
  *(undefined8 *)(param_3 + 8) = uVar1;
LAB_0011bba2:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<BitField<TextServer::LineBreakFlag>>::ptrcall(Object*, void const**, void*) const
    */

void __thiscall
MethodBindTRC<BitField<TextServer::LineBreakFlag>>::ptrcall
          (MethodBindTRC<BitField<TextServer::LineBreakFlag>> *this,Object *param_1,void **param_2,
          void *param_3)

{
  undefined8 uVar1;
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
      goto LAB_0011bd51;
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
  *(undefined8 *)param_3 = uVar1;
LAB_0011bd51:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<BitField<TextServer::LineBreakFlag> >::validated_call(Object*, Variant const**,
   Variant*) const */

void MethodBindT<BitField<TextServer::LineBreakFlag>>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

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
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) && (param_2[1][0x2e] != '\0')
     ) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      plVar1 = (long *)param_2[0x23];
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar1 = (long *)(param_2[1] + 0x20);
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
      goto LAB_0011c091;
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
                    /* WARNING: Could not recover jumptable at 0x0011bf1d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined8 *)(*(long *)param_3 + 8));
    return;
  }
LAB_0011c091:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<BitField<TextServer::LineBreakFlag> >::ptrcall(Object*, void const**, void*) const */

void MethodBindT<BitField<TextServer::LineBreakFlag>>::ptrcall
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
      goto LAB_0011c271;
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
                    /* WARNING: Could not recover jumptable at 0x0011c0fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_0011c271:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector<float> const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Vector<float>const&>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

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
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) && (param_2[1][0x2e] != '\0')
     ) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      plVar1 = (long *)param_2[0x23];
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar1 = (long *)(param_2[1] + 0x20);
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
      goto LAB_0011c459;
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
                    /* WARNING: Could not recover jumptable at 0x0011c2e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(long *)(*(long *)param_3 + 8) + 0x10);
    return;
  }
LAB_0011c459:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector<float> const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Vector<float>const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_0011c631;
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
                    /* WARNING: Could not recover jumptable at 0x0011c4b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3);
    return;
  }
LAB_0011c631:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<HorizontalAlignment>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindTRC<HorizontalAlignment>::call
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
  code *pcVar3;
  
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
      _err_print_error(&_LC206,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011c700;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = (code *)param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pcVar3 & 1) != 0) {
        pcVar3 = *(code **)(pcVar3 + *(long *)((long)plVar5 + (long)pVVar1) + -1);
      }
      iVar2 = (*pcVar3)();
      ::Variant::Variant((Variant *)local_48,iVar2);
      if (::Variant::needs_deinit[*(int *)param_1] != '\0') {
        ::Variant::_clear_internal();
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
LAB_0011c700:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<HorizontalAlignment>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<HorizontalAlignment>::validated_call
          (MethodBindTRC<HorizontalAlignment> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

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
      goto LAB_0011c914;
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
LAB_0011c914:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<HorizontalAlignment>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<HorizontalAlignment>::ptrcall
          (MethodBindTRC<HorizontalAlignment> *this,Object *param_1,void **param_2,void *param_3)

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
      goto LAB_0011cac3;
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
LAB_0011cac3:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<HorizontalAlignment>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<HorizontalAlignment>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

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
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) && (param_2[1][0x2e] != '\0')
     ) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      plVar1 = (long *)param_2[0x23];
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar1 = (long *)(param_2[1] + 0x20);
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
      goto LAB_0011ce01;
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
                    /* WARNING: Could not recover jumptable at 0x0011cc8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_0011ce01:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<HorizontalAlignment>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<HorizontalAlignment>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_0011cfe1;
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
                    /* WARNING: Could not recover jumptable at 0x0011ce6b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_0011cfe1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<bool, Variant, Vector2 const&, InlineAlignment, float>::validated_call(Object*,
   Variant const**, Variant*) const */

void __thiscall
MethodBindTR<bool,Variant,Vector2_const&,InlineAlignment,float>::validated_call
          (MethodBindTR<bool,Variant,Vector2_const&,InlineAlignment,float> *this,Object *param_1,
          Variant **param_2,Variant *param_3)

{
  undefined4 uVar1;
  long lVar2;
  Variant *pVVar3;
  undefined1 uVar4;
  long *plVar5;
  code *pcVar6;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar5 = *(long **)(param_1 + 0x118);
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar5 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_68 == (char *)*plVar5) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_0011d099;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar6 = *(code **)(this + 0x58);
  lVar2 = *(long *)(this + 0x60);
  if (((ulong)pcVar6 & 1) != 0) {
    pcVar6 = *(code **)(pcVar6 + *(long *)(param_1 + lVar2) + -1);
  }
  uVar1 = *(undefined4 *)(param_2[2] + 8);
  pVVar3 = param_2[1];
  ::Variant::Variant((Variant *)local_58,(Variant *)*param_2);
  uVar4 = (*pcVar6)(param_1 + lVar2,(Variant *)local_58,pVVar3 + 8,uVar1);
  param_3[8] = uVar4;
  if (::Variant::needs_deinit[local_58[0]] != '\0') {
    ::Variant::_clear_internal();
  }
LAB_0011d099:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<bool, Variant, Vector2 const&, InlineAlignment, float>::ptrcall(Object*, void
   const**, void*) const */

void __thiscall
MethodBindTR<bool,Variant,Vector2_const&,InlineAlignment,float>::ptrcall
          (MethodBindTR<bool,Variant,Vector2_const&,InlineAlignment,float> *this,Object *param_1,
          void **param_2,void *param_3)

{
  undefined4 uVar1;
  long lVar2;
  void *pvVar3;
  undefined1 uVar4;
  long *plVar5;
  code *pcVar6;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar5 = *(long **)(param_1 + 0x118);
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar5 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_68 == (char *)*plVar5) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_0011d2f2;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar6 = *(code **)(this + 0x58);
  lVar2 = *(long *)(this + 0x60);
  if (((ulong)pcVar6 & 1) != 0) {
    pcVar6 = *(code **)(pcVar6 + *(long *)(param_1 + lVar2) + -1);
  }
  pvVar3 = param_2[1];
                    /* WARNING: Load size is inaccurate */
  uVar1 = *param_2[2];
  ::Variant::Variant((Variant *)local_58,(Variant *)*param_2);
  uVar4 = (*pcVar6)(param_1 + lVar2,(Variant *)local_58,pvVar3,uVar1);
  *(undefined1 *)param_3 = uVar4;
  if (::Variant::needs_deinit[local_58[0]] != '\0') {
    ::Variant::_clear_internal();
  }
LAB_0011d2f2:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<bool, Variant, Vector2 const&, InlineAlignment, int, float>::validated_call(Object*,
   Variant const**, Variant*) const */

void __thiscall
MethodBindTR<bool,Variant,Vector2_const&,InlineAlignment,int,float>::validated_call
          (MethodBindTR<bool,Variant,Vector2_const&,InlineAlignment,int,float> *this,Object *param_1
          ,Variant **param_2,Variant *param_3)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  Variant *pVVar4;
  undefined1 uVar5;
  long *plVar6;
  code *pcVar7;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar6 = *(long **)(param_1 + 0x118);
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar6 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_68 == (char *)*plVar6) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_0011d556;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar7 = *(code **)(this + 0x58);
  lVar2 = *(long *)(this + 0x60);
  if (((ulong)pcVar7 & 1) != 0) {
    pcVar7 = *(code **)(pcVar7 + *(long *)(param_1 + lVar2) + -1);
  }
  uVar3 = *(ulong *)(param_2[3] + 8);
  uVar1 = *(undefined4 *)(param_2[2] + 8);
  pVVar4 = param_2[1];
  ::Variant::Variant((Variant *)local_58,(Variant *)*param_2);
  uVar5 = (*pcVar7)(param_1 + lVar2,(Variant *)local_58,pVVar4 + 8,uVar1,uVar3 & 0xffffffff);
  param_3[8] = uVar5;
  if (::Variant::needs_deinit[local_58[0]] != '\0') {
    ::Variant::_clear_internal();
  }
LAB_0011d556:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<bool, Variant, Vector2 const&, InlineAlignment, int, float>::ptrcall(Object*, void
   const**, void*) const */

void __thiscall
MethodBindTR<bool,Variant,Vector2_const&,InlineAlignment,int,float>::ptrcall
          (MethodBindTR<bool,Variant,Vector2_const&,InlineAlignment,int,float> *this,Object *param_1
          ,void **param_2,void *param_3)

{
  undefined4 uVar1;
  long lVar2;
  void *pvVar3;
  ulong uVar4;
  undefined1 uVar5;
  long *plVar6;
  code *pcVar7;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar6 = *(long **)(param_1 + 0x118);
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar6 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_68 == (char *)*plVar6) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_0011d7ae;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar7 = *(code **)(this + 0x58);
  lVar2 = *(long *)(this + 0x60);
  if (((ulong)pcVar7 & 1) != 0) {
    pcVar7 = *(code **)(pcVar7 + *(long *)(param_1 + lVar2) + -1);
  }
  pvVar3 = param_2[1];
                    /* WARNING: Load size is inaccurate */
  uVar4 = *param_2[3];
                    /* WARNING: Load size is inaccurate */
  uVar1 = *param_2[2];
  ::Variant::Variant((Variant *)local_58,(Variant *)*param_2);
  uVar5 = (*pcVar7)(param_1 + lVar2,(Variant *)local_58,pvVar3,uVar1,uVar4 & 0xffffffff);
  *(undefined1 *)param_3 = uVar5;
  if (::Variant::needs_deinit[local_58[0]] != '\0') {
    ::Variant::_clear_internal();
  }
LAB_0011d7ae:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Array const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Array_const&>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

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
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) && (param_2[1][0x2e] != '\0')
     ) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      plVar1 = (long *)param_2[0x23];
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar1 = (long *)(param_2[1] + 0x20);
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
      goto LAB_0011db31;
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
                    /* WARNING: Could not recover jumptable at 0x0011d9bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8);
    return;
  }
LAB_0011db31:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Array const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Array_const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_0011dd11;
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
                    /* WARNING: Could not recover jumptable at 0x0011db99. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3);
    return;
  }
LAB_0011dd11:
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
  code *pcVar3;
  
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
      _err_print_error(&_LC206,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011dde0;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = (code *)param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pcVar3 & 1) != 0) {
        pcVar3 = *(code **)(pcVar3 + *(long *)((long)plVar5 + (long)pVVar1) + -1);
      }
      bVar2 = (bool)(*pcVar3)();
      ::Variant::Variant((Variant *)local_48,bVar2);
      if (::Variant::needs_deinit[*(int *)param_1] != '\0') {
        ::Variant::_clear_internal();
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
LAB_0011dde0:
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
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011dff2;
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
  param_3[8] = uVar1;
LAB_0011dff2:
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
      goto LAB_0011e1a1;
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
LAB_0011e1a1:
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
  long *plVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) && (param_2[1][0x2e] != '\0')
     ) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      plVar1 = (long *)param_2[0x23];
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar1 = (long *)(param_2[1] + 0x20);
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
      goto LAB_0011e4e1;
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
                    /* WARNING: Could not recover jumptable at 0x0011e36d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined1 *)(*(long *)param_3 + 8));
    return;
  }
LAB_0011e4e1:
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
      goto LAB_0011e6c9;
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
                    /* WARNING: Could not recover jumptable at 0x0011e552. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3 != '\0');
    return;
  }
LAB_0011e6c9:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<TextServer::Orientation>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindTRC<TextServer::Orientation>::call
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
  code *pcVar3;
  
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
      _err_print_error(&_LC206,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011e790;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = (code *)param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pcVar3 & 1) != 0) {
        pcVar3 = *(code **)(pcVar3 + *(long *)((long)plVar5 + (long)pVVar1) + -1);
      }
      iVar2 = (*pcVar3)();
      ::Variant::Variant((Variant *)local_48,iVar2);
      if (::Variant::needs_deinit[*(int *)param_1] != '\0') {
        ::Variant::_clear_internal();
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
LAB_0011e790:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<TextServer::Orientation>::validated_call(Object*, Variant const**, Variant*) const
    */

void __thiscall
MethodBindTRC<TextServer::Orientation>::validated_call
          (MethodBindTRC<TextServer::Orientation> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

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
      goto LAB_0011e9a4;
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
LAB_0011e9a4:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<TextServer::Orientation>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<TextServer::Orientation>::ptrcall
          (MethodBindTRC<TextServer::Orientation> *this,Object *param_1,void **param_2,void *param_3
          )

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
      goto LAB_0011eb53;
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
LAB_0011eb53:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<TextServer::Orientation>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<TextServer::Orientation>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

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
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) && (param_2[1][0x2e] != '\0')
     ) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      plVar1 = (long *)param_2[0x23];
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar1 = (long *)(param_2[1] + 0x20);
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
      goto LAB_0011ee91;
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
                    /* WARNING: Could not recover jumptable at 0x0011ed1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_0011ee91:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<TextServer::Orientation>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<TextServer::Orientation>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_0011f071;
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
                    /* WARNING: Could not recover jumptable at 0x0011eefb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_0011f071:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<String>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<String>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  code *pcVar2;
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
      _err_print_error(&_LC206,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011f150;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = (code *)param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pcVar2 & 1) != 0) {
        pcVar2 = *(code **)(pcVar2 + *(long *)((long)plVar4 + (long)pVVar1) + -1);
      }
      (*pcVar2)((CowData<char32_t> *)&local_58);
      ::Variant::Variant((Variant *)local_48,(String *)&local_58);
      if (::Variant::needs_deinit[*(int *)param_1] != '\0') {
        ::Variant::_clear_internal();
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
LAB_0011f150:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<String>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<String>::validated_call
          (MethodBindTRC<String> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  Variant **ppVVar1;
  Variant **ppVVar2;
  code *pcVar3;
  long *plVar4;
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
      local_48 = (Variant **)0x115bc8;
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
      goto LAB_0011f3b1;
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
  (*pcVar3)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  if (*(Variant ***)(param_3 + 8) != local_48) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(param_3 + 8),(CowData *)&local_48);
  }
  ppVVar2 = local_48;
  if (local_48 != (Variant **)0x0) {
    LOCK();
    ppVVar1 = local_48 + -2;
    *ppVVar1 = *ppVVar1 + -1;
    UNLOCK();
    if (*ppVVar1 == (Variant *)0x0) {
      local_48 = (Variant **)0x0;
      Memory::free_static(ppVVar2 + -2,false);
    }
  }
LAB_0011f3b1:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<String>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<String>::ptrcall
          (MethodBindTRC<String> *this,Object *param_1,void **param_2,void *param_3)

{
  void **ppvVar1;
  void **ppvVar2;
  code *pcVar3;
  long *plVar4;
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
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (void **)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (void **)0x115bc8;
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
      goto LAB_0011f59e;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    param_2 = *(void ***)(param_1 + *(long *)(this + 0x60));
    pcVar3 = *(code **)(pcVar3 + (long)param_2 + -1);
  }
  (*pcVar3)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
                    /* WARNING: Load size is inaccurate */
  if (*param_3 != local_48) {
    CowData<char32_t>::_ref((CowData<char32_t> *)param_3,(CowData *)&local_48);
  }
  ppvVar2 = local_48;
  if (local_48 != (void **)0x0) {
    LOCK();
    ppvVar1 = local_48 + -2;
    *ppvVar1 = (void *)((long)*ppvVar1 + -1);
    UNLOCK();
    if (*ppvVar1 == (void *)0x0) {
      local_48 = (void **)0x0;
      Memory::free_static(ppvVar2 + -2,false);
    }
  }
LAB_0011f59e:
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
  long *plVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) && (param_2[1][0x2e] != '\0')
     ) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      plVar1 = (long *)param_2[0x23];
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar1 = (long *)(param_2[1] + 0x20);
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
      goto LAB_0011f8d1;
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
                    /* WARNING: Could not recover jumptable at 0x0011f75d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8);
    return;
  }
LAB_0011f8d1:
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
      goto LAB_0011fab1;
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
                    /* WARNING: Could not recover jumptable at 0x0011f939. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3);
    return;
  }
LAB_0011fab1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<TextServer::Direction>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindTRC<TextServer::Direction>::call
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
  code *pcVar3;
  
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
      _err_print_error(&_LC206,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011fb80;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = (code *)param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pcVar3 & 1) != 0) {
        pcVar3 = *(code **)(pcVar3 + *(long *)((long)plVar5 + (long)pVVar1) + -1);
      }
      iVar2 = (*pcVar3)();
      ::Variant::Variant((Variant *)local_48,iVar2);
      if (::Variant::needs_deinit[*(int *)param_1] != '\0') {
        ::Variant::_clear_internal();
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
LAB_0011fb80:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<TextServer::Direction>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<TextServer::Direction>::validated_call
          (MethodBindTRC<TextServer::Direction> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

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
      goto LAB_0011fd94;
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
LAB_0011fd94:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<TextServer::Direction>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<TextServer::Direction>::ptrcall
          (MethodBindTRC<TextServer::Direction> *this,Object *param_1,void **param_2,void *param_3)

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
      goto LAB_0011ff43;
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
LAB_0011ff43:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<TextServer::Direction>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<TextServer::Direction>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

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
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) && (param_2[1][0x2e] != '\0')
     ) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      plVar1 = (long *)param_2[0x23];
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar1 = (long *)(param_2[1] + 0x20);
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
      goto LAB_00120281;
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
                    /* WARNING: Could not recover jumptable at 0x0012010c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_00120281:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<TextServer::Direction>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<TextServer::Direction>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_00120461;
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
                    /* WARNING: Could not recover jumptable at 0x001202eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_00120461:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  code *pcVar2;
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
      _err_print_error(&_LC206,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00120580;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = (code *)param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pcVar2 & 1) != 0) {
        pcVar2 = *(code **)(pcVar2 + *(long *)((long)plVar4 + (long)pVVar1) + -1);
      }
      (*pcVar2)();
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
LAB_00120580:
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
  long *plVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) && (param_2[1][0x2e] != '\0')
     ) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      plVar1 = (long *)param_2[0x23];
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar1 = (long *)(param_2[1] + 0x20);
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
      goto LAB_001208ff;
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
                    /* WARNING: Could not recover jumptable at 0x001207a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_001208ff:
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
      goto LAB_00120abf;
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
                    /* WARNING: Could not recover jumptable at 0x00120966. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_00120abf:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<BitField<TextServer::JustificationFlag>>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTRC<BitField<TextServer::JustificationFlag>>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
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
  code *pcVar3;
  
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
      _err_print_error(&_LC206,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00120b90;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = (code *)param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pcVar3 & 1) != 0) {
        pcVar3 = *(code **)(pcVar3 + *(long *)((long)plVar5 + (long)pVVar1) + -1);
      }
      lVar2 = (*pcVar3)();
      ::Variant::Variant((Variant *)local_48,lVar2);
      if (::Variant::needs_deinit[*(int *)param_1] != '\0') {
        ::Variant::_clear_internal();
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
LAB_00120b90:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<BitField<TextServer::LineBreakFlag>>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTRC<BitField<TextServer::LineBreakFlag>>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
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
  code *pcVar3;
  
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
      _err_print_error(&_LC206,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00120e20;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = (code *)param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pcVar3 & 1) != 0) {
        pcVar3 = *(code **)(pcVar3 + *(long *)((long)plVar5 + (long)pVVar1) + -1);
      }
      lVar2 = (*pcVar3)();
      ::Variant::Variant((Variant *)local_48,lVar2);
      if (::Variant::needs_deinit[*(int *)param_1] != '\0') {
        ::Variant::_clear_internal();
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
LAB_00120e20:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<bool, String const&, Ref<Font> const&, int, Rect2 const&, String
   const&>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTR<bool,String_const&,Ref<Font>const&,int,Rect2_const&,String_const&>::validated_call
          (MethodBindTR<bool,String_const&,Ref<Font>const&,int,Rect2_const&,String_const&> *this,
          Object *param_1,Variant **param_2,Variant *param_3)

{
  undefined4 uVar1;
  long lVar2;
  Variant *pVVar3;
  Variant *pVVar4;
  Object *pOVar5;
  char cVar6;
  undefined1 uVar7;
  Object *pOVar8;
  long *plVar9;
  code *pcVar10;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  Object *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar9 = *(long **)(param_1 + 0x118);
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar9 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_68 == (Object *)*plVar9) {
      if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = (Object *)0x115bc8;
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_00121138;
    }
    if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar10 = *(code **)(this + 0x58);
  lVar2 = *(long *)(this + 0x60);
  if (((ulong)pcVar10 & 1) != 0) {
    pcVar10 = *(code **)(pcVar10 + *(long *)(param_1 + lVar2) + -1);
  }
  pVVar3 = param_2[4];
  pVVar4 = param_2[3];
  uVar1 = *(undefined4 *)(param_2[2] + 8);
  ::Variant::Variant((Variant *)local_58,*(Object **)(param_2[1] + 0x10));
  local_68 = (Object *)0x0;
  pOVar8 = (Object *)::Variant::get_validated_object();
  pOVar5 = local_68;
  if (pOVar8 != local_68) {
    if (pOVar8 == (Object *)0x0) {
      if (local_68 != (Object *)0x0) {
        local_68 = (Object *)0x0;
LAB_001210df:
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
      pOVar8 = (Object *)__dynamic_cast(pOVar8,&Object::typeinfo,&Font::typeinfo,0);
      if (pOVar5 != pOVar8) {
        local_68 = pOVar8;
        if (pOVar8 != (Object *)0x0) {
          cVar6 = RefCounted::reference();
          if (cVar6 == '\0') {
            local_68 = (Object *)0x0;
          }
        }
        if (pOVar5 != (Object *)0x0) goto LAB_001210df;
      }
    }
  }
  if (::Variant::needs_deinit[local_58[0]] != '\0') {
    ::Variant::_clear_internal();
  }
  uVar7 = (*pcVar10)(param_1 + lVar2,*param_2 + 8,(StringName *)&local_68,uVar1,pVVar4 + 8,
                     pVVar3 + 8);
  param_3[8] = uVar7;
  if (local_68 != (Object *)0x0) {
    cVar6 = RefCounted::unreference();
    pOVar5 = local_68;
    if (cVar6 != '\0') {
      cVar6 = predelete_handler(local_68);
      if (cVar6 != '\0') {
        (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
        Memory::free_static(pOVar5,false);
      }
    }
  }
LAB_00121138:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<bool, String const&, Ref<Font> const&, int, String const&, Variant
   const&>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTR<bool,String_const&,Ref<Font>const&,int,String_const&,Variant_const&>::validated_call
          (MethodBindTR<bool,String_const&,Ref<Font>const&,int,String_const&,Variant_const&> *this,
          Object *param_1,Variant **param_2,Variant *param_3)

{
  undefined4 uVar1;
  long lVar2;
  Variant *pVVar3;
  Variant *pVVar4;
  Object *pOVar5;
  char cVar6;
  undefined1 uVar7;
  Object *pOVar8;
  long *plVar9;
  code *pcVar10;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  Object *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar9 = *(long **)(param_1 + 0x118);
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar9 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_68 == (Object *)*plVar9) {
      if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = (Object *)0x115bc8;
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_00121494;
    }
    if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar10 = *(code **)(this + 0x58);
  lVar2 = *(long *)(this + 0x60);
  if (((ulong)pcVar10 & 1) != 0) {
    pcVar10 = *(code **)(pcVar10 + *(long *)(param_1 + lVar2) + -1);
  }
  pVVar3 = param_2[4];
  pVVar4 = param_2[3];
  uVar1 = *(undefined4 *)(param_2[2] + 8);
  ::Variant::Variant((Variant *)local_58,*(Object **)(param_2[1] + 0x10));
  local_68 = (Object *)0x0;
  pOVar8 = (Object *)::Variant::get_validated_object();
  pOVar5 = local_68;
  if (pOVar8 != local_68) {
    if (pOVar8 == (Object *)0x0) {
      if (local_68 != (Object *)0x0) {
        local_68 = (Object *)0x0;
LAB_0012143b:
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
      pOVar8 = (Object *)__dynamic_cast(pOVar8,&Object::typeinfo,&Font::typeinfo,0);
      if (pOVar5 != pOVar8) {
        local_68 = pOVar8;
        if (pOVar8 != (Object *)0x0) {
          cVar6 = RefCounted::reference();
          if (cVar6 == '\0') {
            local_68 = (Object *)0x0;
          }
        }
        if (pOVar5 != (Object *)0x0) goto LAB_0012143b;
      }
    }
  }
  if (::Variant::needs_deinit[local_58[0]] != '\0') {
    ::Variant::_clear_internal();
  }
  uVar7 = (*pcVar10)(param_1 + lVar2,*param_2 + 8,(StringName *)&local_68,uVar1,pVVar4 + 8,pVVar3);
  param_3[8] = uVar7;
  if (local_68 != (Object *)0x0) {
    cVar6 = RefCounted::unreference();
    pOVar5 = local_68;
    if (cVar6 != '\0') {
      cVar6 = predelete_handler(local_68);
      if (cVar6 != '\0') {
        (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
        Memory::free_static(pOVar5,false);
      }
    }
  }
LAB_00121494:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<bool, String const&, Ref<Font> const&, int, Rect2 const&, String
   const&>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<bool,String_const&,Ref<Font>const&,int,Rect2_const&,String_const&>::ptrcall
          (MethodBindTR<bool,String_const&,Ref<Font>const&,int,Rect2_const&,String_const&> *this,
          Object *param_1,void **param_2,void *param_3)

{
  undefined4 uVar1;
  long lVar2;
  void *pvVar3;
  void *pvVar4;
  Object *pOVar5;
  char cVar6;
  undefined1 uVar7;
  long *plVar8;
  code *pcVar9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  Object *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar8 = *(long **)(param_1 + 0x118);
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar8 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_58 == (Object *)*plVar8) {
      if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = (Object *)0x115bc8;
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00121774;
    }
    if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar9 = *(code **)(this + 0x58);
  lVar2 = *(long *)(this + 0x60);
  if (((ulong)pcVar9 & 1) != 0) {
    pcVar9 = *(code **)(pcVar9 + *(long *)(param_1 + lVar2) + -1);
  }
  pvVar3 = param_2[4];
  pvVar4 = param_2[3];
                    /* WARNING: Load size is inaccurate */
  uVar1 = *param_2[2];
                    /* WARNING: Load size is inaccurate */
  if (((long *)param_2[1] == (long *)0x0) || (local_58 = *param_2[1], local_58 == (Object *)0x0)) {
LAB_00121745:
    local_58 = (Object *)0x0;
  }
  else {
    cVar6 = RefCounted::init_ref();
    if (cVar6 == '\0') goto LAB_00121745;
  }
  uVar7 = (*pcVar9)(param_1 + lVar2,*param_2,(StringName *)&local_58,uVar1,pvVar4,pvVar3);
  *(undefined1 *)param_3 = uVar7;
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
LAB_00121774:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<bool, String const&, Ref<Font> const&, int, String const&, Variant
   const&>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<bool,String_const&,Ref<Font>const&,int,String_const&,Variant_const&>::ptrcall
          (MethodBindTR<bool,String_const&,Ref<Font>const&,int,String_const&,Variant_const&> *this,
          Object *param_1,void **param_2,void *param_3)

{
  undefined4 uVar1;
  long lVar2;
  void *pvVar3;
  void *pvVar4;
  Object *pOVar5;
  char cVar6;
  undefined1 uVar7;
  long *plVar8;
  code *pcVar9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  Object *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar8 = *(long **)(param_1 + 0x118);
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar8 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_58 == (Object *)*plVar8) {
      if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = (Object *)0x115bc8;
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_001219d4;
    }
    if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar9 = *(code **)(this + 0x58);
  lVar2 = *(long *)(this + 0x60);
  if (((ulong)pcVar9 & 1) != 0) {
    pcVar9 = *(code **)(pcVar9 + *(long *)(param_1 + lVar2) + -1);
  }
  pvVar3 = param_2[4];
  pvVar4 = param_2[3];
                    /* WARNING: Load size is inaccurate */
  uVar1 = *param_2[2];
                    /* WARNING: Load size is inaccurate */
  if (((long *)param_2[1] == (long *)0x0) || (local_58 = *param_2[1], local_58 == (Object *)0x0)) {
LAB_001219a5:
    local_58 = (Object *)0x0;
  }
  else {
    cVar6 = RefCounted::init_ref();
    if (cVar6 == '\0') goto LAB_001219a5;
  }
  uVar7 = (*pcVar9)(param_1 + lVar2,*param_2,(StringName *)&local_58,uVar1,pvVar4,pvVar3);
  *(undefined1 *)param_3 = uVar7;
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
LAB_001219d4:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int, Vector2 const&>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindTRC<int,Vector2_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  long lVar3;
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
  Variant *this;
  code *pcVar11;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
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
      _err_print_error(&_LC206,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_00121ca0;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar11 = (code *)param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar2 = param_2[5];
    if (pVVar2 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_00121ce0;
LAB_00121cd0:
      this = *(Variant **)param_4;
    }
    else {
      lVar3 = *(long *)(pVVar2 + -8);
      if ((int)lVar3 < (int)(in_R8D ^ 1)) {
LAB_00121ce0:
        uVar7 = 4;
        goto LAB_00121c95;
      }
      if (in_R8D == 1) goto LAB_00121cd0;
      lVar9 = (long)((int)lVar3 + -1);
      if (lVar3 <= lVar9) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar3,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar11 = (code *)invalidInstructionException();
        (*pcVar11)();
      }
      this = (Variant *)(pVVar2 + lVar9 * 0x18);
    }
    *in_R9 = 0;
    if (((ulong)pcVar11 & 1) != 0) {
      pcVar11 = *(code **)(pcVar11 + *(long *)((long)plVar10 + (long)pVVar1) + -1);
    }
    cVar5 = ::Variant::can_convert_strict(*(undefined4 *)this,5);
    uVar4 = _LC208;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    local_50 = ::Variant::operator_cast_to_Vector2(this);
    iVar6 = (*pcVar11)((long *)((long)plVar10 + (long)pVVar1),&local_50);
    ::Variant::Variant((Variant *)local_48,iVar6);
    if (::Variant::needs_deinit[*(int *)param_1] != '\0') {
      ::Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_48[0];
    *(undefined8 *)(param_1 + 8) = local_40;
    *(undefined8 *)(param_1 + 0x10) = uStack_38;
  }
  else {
    uVar7 = 3;
LAB_00121c95:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_00121ca0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTC<RID, Vector2 const&, Color const&, Color const&>::call(Object*, Variant const**,
   int, Callable::CallError&) const */

Object * MethodBindTC<RID,Vector2_const&,Color_const&,Color_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  char cVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  uint uVar8;
  int iVar9;
  undefined4 in_register_00000014;
  long *plVar10;
  Variant *pVVar11;
  long lVar12;
  uint in_R8D;
  undefined4 *in_R9;
  code *pcVar13;
  long in_FS_OFFSET;
  long local_b8;
  undefined8 local_b0;
  char *local_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 local_88 [2];
  undefined8 local_78 [2];
  Variant *local_68 [5];
  long local_40;
  
  plVar10 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar10 != (long *)0x0) && (plVar10[1] != 0)) && (*(char *)(plVar10[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_a8,(StringName *)(param_2 + 3));
    if (plVar10[1] == 0) {
      plVar7 = (long *)plVar10[0x23];
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)(**(code **)(*plVar10 + 0x40))(plVar10);
      }
    }
    else {
      plVar7 = (long *)(plVar10[1] + 0x20);
    }
    if (local_a8 == (char *)*plVar7) {
      if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_a8 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_b0 = 0;
      local_a0 = 0x35;
      String::parse_latin1((StrRange *)&local_b0);
      vformat<StringName>((StringName *)&local_a8,(StrRange *)&local_b0,&local_b8);
      _err_print_error(&_LC206,"./core/object/method_bind.h",0x1a8,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_a8,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
      if ((StringName::configured != '\0') && (local_b8 != 0)) {
        StringName::unref();
      }
      goto LAB_001220e2;
    }
    if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar13 = (code *)param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 5) {
    pVVar2 = param_2[5];
    if (pVVar2 == (Variant *)0x0) {
      iVar9 = 0;
      lVar12 = 0;
    }
    else {
      lVar12 = *(long *)(pVVar2 + -8);
      iVar9 = (int)lVar12;
    }
    if ((int)(4 - in_R8D) <= iVar9) {
      lVar5 = 0;
      do {
        if ((int)lVar5 < (int)in_R8D) {
          pVVar11 = *(Variant **)(param_4 + lVar5 * 8);
        }
        else {
          uVar8 = iVar9 + -4 + (int)lVar5;
          if (lVar12 <= (int)uVar8) {
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,(long)(int)uVar8,lVar12,"p_index",
                       "size()","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar13 = (code *)invalidInstructionException();
            (*pcVar13)();
          }
          pVVar11 = (Variant *)(pVVar2 + (ulong)uVar8 * 0x18);
        }
        local_68[lVar5] = pVVar11;
        lVar5 = lVar5 + 1;
      } while (lVar5 != 4);
      *in_R9 = 0;
      if (((ulong)pcVar13 & 1) != 0) {
        pcVar13 = *(code **)(pcVar13 + *(long *)((long)plVar10 + (long)pVVar1) + -1);
      }
      cVar3 = ::Variant::can_convert_strict(*(undefined4 *)local_68[3],0x14);
      uVar6 = _LC209;
      if (cVar3 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar6;
      }
      local_88[0] = ::Variant::operator_cast_to_Color(local_68[3]);
      cVar3 = ::Variant::can_convert_strict(*(undefined4 *)local_68[2],0x14);
      uVar6 = _LC210;
      if (cVar3 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar6;
      }
      local_78[0] = ::Variant::operator_cast_to_Color(local_68[2]);
      cVar3 = ::Variant::can_convert_strict(*(undefined4 *)local_68[1],5);
      uVar6 = _LC211;
      if (cVar3 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar6;
      }
      local_90 = ::Variant::operator_cast_to_Vector2(local_68[1]);
      cVar3 = ::Variant::can_convert_strict(*(undefined4 *)local_68[0],0x17);
      uVar6 = _LC212;
      if (cVar3 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar6;
      }
      uVar6 = ::Variant::operator_cast_to_RID(local_68[0]);
      (*pcVar13)((long *)((long)plVar10 + (long)pVVar1),uVar6,&local_90,local_78,local_88);
      goto LAB_001220e2;
    }
    uVar4 = 4;
  }
  else {
    uVar4 = 3;
  }
  *in_R9 = uVar4;
  in_R9[2] = 4;
LAB_001220e2:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTC<RID, Vector2 const&, Color const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTC<RID,Vector2_const&,Color_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  char cVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  uint uVar8;
  int iVar9;
  undefined4 in_register_00000014;
  long *plVar10;
  Variant *pVVar11;
  long lVar12;
  uint in_R8D;
  undefined4 *in_R9;
  code *pcVar13;
  long in_FS_OFFSET;
  long local_98;
  undefined8 local_90;
  char *local_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 local_68 [2];
  Variant *local_58 [3];
  long local_40;
  
  plVar10 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar10 != (long *)0x0) && (plVar10[1] != 0)) && (*(char *)(plVar10[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_88,(StringName *)(param_2 + 3));
    if (plVar10[1] == 0) {
      plVar7 = (long *)plVar10[0x23];
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)(**(code **)(*plVar10 + 0x40))(plVar10);
      }
    }
    else {
      plVar7 = (long *)(plVar10[1] + 0x20);
    }
    if (local_88 == (char *)*plVar7) {
      if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_88 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_90 = 0;
      local_80 = 0x35;
      String::parse_latin1((StrRange *)&local_90);
      vformat<StringName>((StringName *)&local_88,(StrRange *)&local_90,&local_98);
      _err_print_error(&_LC206,"./core/object/method_bind.h",0x1a8,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_88,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      if ((StringName::configured != '\0') && (local_98 != 0)) {
        StringName::unref();
      }
      goto LAB_00122472;
    }
    if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar13 = (code *)param_2[0xb];
  pVVar1 = param_2[0xc];
  uVar4 = 3;
  if (in_R8D < 4) {
    pVVar2 = param_2[5];
    if (pVVar2 == (Variant *)0x0) {
      iVar9 = 0;
      lVar12 = 0;
    }
    else {
      lVar12 = *(long *)(pVVar2 + -8);
      iVar9 = (int)lVar12;
    }
    if ((int)(3 - in_R8D) <= iVar9) {
      lVar5 = 0;
      do {
        if ((int)lVar5 < (int)in_R8D) {
          pVVar11 = *(Variant **)(param_4 + lVar5 * 8);
        }
        else {
          uVar8 = iVar9 + -3 + (int)lVar5;
          if (lVar12 <= (int)uVar8) {
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,(long)(int)uVar8,lVar12,"p_index",
                       "size()","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar13 = (code *)invalidInstructionException();
            (*pcVar13)();
          }
          pVVar11 = (Variant *)(pVVar2 + (ulong)uVar8 * 0x18);
        }
        local_58[lVar5] = pVVar11;
        lVar5 = lVar5 + 1;
      } while (lVar5 != 3);
      *in_R9 = 0;
      if (((ulong)pcVar13 & 1) != 0) {
        pcVar13 = *(code **)(pcVar13 + *(long *)((long)plVar10 + (long)pVVar1) + -1);
      }
      cVar3 = ::Variant::can_convert_strict(*(undefined4 *)local_58[2],0x14);
      uVar6 = _LC210;
      if (cVar3 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar6;
      }
      local_68[0] = ::Variant::operator_cast_to_Color(local_58[2]);
      cVar3 = ::Variant::can_convert_strict(*(undefined4 *)local_58[1],5);
      uVar6 = _LC211;
      if (cVar3 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar6;
      }
      local_70 = ::Variant::operator_cast_to_Vector2(local_58[1]);
      cVar3 = ::Variant::can_convert_strict(*(undefined4 *)local_58[0],0x17);
      uVar6 = _LC212;
      if (cVar3 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar6;
      }
      uVar6 = ::Variant::operator_cast_to_RID(local_58[0]);
      (*pcVar13)((long *)((long)plVar10 + (long)pVVar1),uVar6,&local_70,local_68);
      goto LAB_00122472;
    }
    uVar4 = 4;
  }
  *in_R9 = uVar4;
  in_R9[2] = 3;
LAB_00122472:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<RID, int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<RID,int>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  long lVar3;
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
  Variant *this;
  code *pcVar11;
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
      _err_print_error(&_LC206,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_001227c0;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar11 = (code *)param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar2 = param_2[5];
    if (pVVar2 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_00122800;
LAB_001227f0:
      this = *(Variant **)param_4;
    }
    else {
      lVar3 = *(long *)(pVVar2 + -8);
      if ((int)lVar3 < (int)(in_R8D ^ 1)) {
LAB_00122800:
        uVar7 = 4;
        goto LAB_001227b5;
      }
      if (in_R8D == 1) goto LAB_001227f0;
      lVar9 = (long)((int)lVar3 + -1);
      if (lVar3 <= lVar9) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar3,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar11 = (code *)invalidInstructionException();
        (*pcVar11)();
      }
      this = (Variant *)(pVVar2 + lVar9 * 0x18);
    }
    *in_R9 = 0;
    if (((ulong)pcVar11 & 1) != 0) {
      pcVar11 = *(code **)(pcVar11 + *(long *)((long)plVar10 + (long)pVVar1) + -1);
    }
    cVar5 = ::Variant::can_convert_strict(*(undefined4 *)this,2);
    uVar4 = _LC213;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    iVar6 = ::Variant::operator_cast_to_int(this);
    local_58 = (char *)(*pcVar11)((long *)((long)plVar10 + (long)pVVar1),iVar6);
    ::Variant::Variant((Variant *)local_48,(RID *)&local_58);
    if (::Variant::needs_deinit[*(int *)param_1] != '\0') {
      ::Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_48[0];
    *(undefined8 *)(param_1 + 8) = local_40;
    *(undefined8 *)(param_1 + 0x10) = uStack_38;
  }
  else {
    uVar7 = 3;
LAB_001227b5:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_001227c0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Array, int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<Array,int>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  long lVar3;
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
  Variant *this;
  code *pcVar11;
  long in_FS_OFFSET;
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
      _err_print_error(&_LC206,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_00122b50;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar11 = (code *)param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar2 = param_2[5];
    if (pVVar2 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_00122ba0;
LAB_00122b90:
      this = *(Variant **)param_4;
    }
    else {
      lVar3 = *(long *)(pVVar2 + -8);
      if ((int)lVar3 < (int)(in_R8D ^ 1)) {
LAB_00122ba0:
        uVar7 = 4;
        goto LAB_00122b45;
      }
      if (in_R8D == 1) goto LAB_00122b90;
      lVar9 = (long)((int)lVar3 + -1);
      if (lVar3 <= lVar9) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar3,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar11 = (code *)invalidInstructionException();
        (*pcVar11)();
      }
      this = (Variant *)(pVVar2 + lVar9 * 0x18);
    }
    *in_R9 = 0;
    if (((ulong)pcVar11 & 1) != 0) {
      pcVar11 = *(code **)(pcVar11 + *(long *)((long)plVar10 + (long)pVVar1) + -1);
    }
    cVar5 = ::Variant::can_convert_strict(*(undefined4 *)this,2);
    uVar4 = _LC213;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    iVar6 = ::Variant::operator_cast_to_int(this);
    (*pcVar11)((Array *)&local_68,(long *)((long)plVar10 + (long)pVVar1),iVar6);
    ::Variant::Variant((Variant *)local_58,(Array *)&local_68);
    if (::Variant::needs_deinit[*(int *)param_1] != '\0') {
      ::Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_58[0];
    *(undefined8 *)(param_1 + 8) = local_50;
    *(undefined8 *)(param_1 + 0x10) = uStack_48;
    Array::~Array((Array *)&local_68);
  }
  else {
    uVar7 = 3;
LAB_00122b45:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_00122b50:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTRC<Vector2, int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<Vector2,int>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  long lVar3;
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
  Variant *this;
  code *pcVar11;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
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
      _err_print_error(&_LC206,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_00122ee0;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar11 = (code *)param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar2 = param_2[5];
    if (pVVar2 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_00122f20;
LAB_00122f10:
      this = *(Variant **)param_4;
    }
    else {
      lVar3 = *(long *)(pVVar2 + -8);
      if ((int)lVar3 < (int)(in_R8D ^ 1)) {
LAB_00122f20:
        uVar7 = 4;
        goto LAB_00122ed5;
      }
      if (in_R8D == 1) goto LAB_00122f10;
      lVar9 = (long)((int)lVar3 + -1);
      if (lVar3 <= lVar9) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar3,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar11 = (code *)invalidInstructionException();
        (*pcVar11)();
      }
      this = (Variant *)(pVVar2 + lVar9 * 0x18);
    }
    *in_R9 = 0;
    if (((ulong)pcVar11 & 1) != 0) {
      pcVar11 = *(code **)(pcVar11 + *(long *)((long)plVar10 + (long)pVVar1) + -1);
    }
    cVar5 = ::Variant::can_convert_strict(*(undefined4 *)this,2);
    uVar4 = _LC213;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    iVar6 = ::Variant::operator_cast_to_int(this);
    local_50 = (*pcVar11)((long *)((long)plVar10 + (long)pVVar1),iVar6);
    ::Variant::Variant((Variant *)local_48,(Vector2 *)&local_50);
    if (::Variant::needs_deinit[*(int *)param_1] != '\0') {
      ::Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_48[0];
    *(undefined8 *)(param_1 + 8) = local_40;
    *(undefined8 *)(param_1 + 0x10) = uStack_38;
  }
  else {
    uVar7 = 3;
LAB_00122ed5:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_00122ee0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector2i, int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<Vector2i,int>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  long lVar3;
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
  Variant *this;
  code *pcVar11;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
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
      _err_print_error(&_LC206,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_00123260;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar11 = (code *)param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar2 = param_2[5];
    if (pVVar2 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_001232a0;
LAB_00123290:
      this = *(Variant **)param_4;
    }
    else {
      lVar3 = *(long *)(pVVar2 + -8);
      if ((int)lVar3 < (int)(in_R8D ^ 1)) {
LAB_001232a0:
        uVar7 = 4;
        goto LAB_00123255;
      }
      if (in_R8D == 1) goto LAB_00123290;
      lVar9 = (long)((int)lVar3 + -1);
      if (lVar3 <= lVar9) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar3,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar11 = (code *)invalidInstructionException();
        (*pcVar11)();
      }
      this = (Variant *)(pVVar2 + lVar9 * 0x18);
    }
    *in_R9 = 0;
    if (((ulong)pcVar11 & 1) != 0) {
      pcVar11 = *(code **)(pcVar11 + *(long *)((long)plVar10 + (long)pVVar1) + -1);
    }
    cVar5 = ::Variant::can_convert_strict(*(undefined4 *)this,2);
    uVar4 = _LC213;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    iVar6 = ::Variant::operator_cast_to_int(this);
    local_50 = (*pcVar11)((long *)((long)plVar10 + (long)pVVar1),iVar6);
    ::Variant::Variant((Variant *)local_48,(Vector2i *)&local_50);
    if (::Variant::needs_deinit[*(int *)param_1] != '\0') {
      ::Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_48[0];
    *(undefined8 *)(param_1 + 8) = local_40;
    *(undefined8 *)(param_1 + 0x10) = uStack_38;
  }
  else {
    uVar7 = 3;
LAB_00123255:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_00123260:
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
  Variant *pVVar2;
  long lVar3;
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
  Variant *this;
  code *pcVar11;
  long in_FS_OFFSET;
  float fVar12;
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
      _err_print_error(&_LC206,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_001235d8;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar11 = (code *)param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar2 = param_2[5];
    if (pVVar2 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_00123620;
LAB_00123610:
      this = *(Variant **)param_4;
    }
    else {
      lVar3 = *(long *)(pVVar2 + -8);
      if ((int)lVar3 < (int)(in_R8D ^ 1)) {
LAB_00123620:
        uVar7 = 4;
        goto LAB_001235cd;
      }
      if (in_R8D == 1) goto LAB_00123610;
      lVar9 = (long)((int)lVar3 + -1);
      if (lVar3 <= lVar9) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar3,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar11 = (code *)invalidInstructionException();
        (*pcVar11)();
      }
      this = (Variant *)(pVVar2 + lVar9 * 0x18);
    }
    *in_R9 = 0;
    if (((ulong)pcVar11 & 1) != 0) {
      pcVar11 = *(code **)(pcVar11 + *(long *)((long)plVar10 + (long)pVVar1) + -1);
    }
    cVar5 = ::Variant::can_convert_strict(*(undefined4 *)this,2);
    uVar4 = _LC213;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    iVar6 = ::Variant::operator_cast_to_int(this);
    fVar12 = (float)(*pcVar11)((long *)((long)plVar10 + (long)pVVar1),iVar6);
    ::Variant::Variant((Variant *)local_48,fVar12);
    if (::Variant::needs_deinit[*(int *)param_1] != '\0') {
      ::Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_48[0];
    *(undefined8 *)(param_1 + 8) = local_40;
    *(undefined8 *)(param_1 + 0x10) = uStack_38;
  }
  else {
    uVar7 = 3;
LAB_001235cd:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_001235d8:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTC<RID, Vector2 const&, int, Color const&, Color const&>::call(Object*, Variant
   const**, int, Callable::CallError&) const */

Object * MethodBindTC<RID,Vector2_const&,int,Color_const&,Color_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  uint uVar9;
  undefined4 in_register_00000014;
  long *plVar10;
  Variant *pVVar11;
  long lVar12;
  uint in_R8D;
  undefined4 *in_R9;
  code *pcVar13;
  long in_FS_OFFSET;
  long local_b8;
  undefined8 local_b0;
  char *local_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 local_88 [2];
  undefined8 local_78 [2];
  Variant *local_68 [5];
  long local_40;
  
  plVar10 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar10 != (long *)0x0) && (plVar10[1] != 0)) && (*(char *)(plVar10[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_a8,(StringName *)(param_2 + 3));
    if (plVar10[1] == 0) {
      plVar8 = (long *)plVar10[0x23];
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*plVar10 + 0x40))();
      }
    }
    else {
      plVar8 = (long *)(plVar10[1] + 0x20);
    }
    if (local_a8 == (char *)*plVar8) {
      if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_a8 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_b0 = 0;
      local_a0 = 0x35;
      String::parse_latin1((StrRange *)&local_b0);
      vformat<StringName>((StringName *)&local_a8,(StrRange *)&local_b0,&local_b8);
      _err_print_error(&_LC206,"./core/object/method_bind.h",0x1a8,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_a8,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
      if ((StringName::configured != '\0') && (local_b8 != 0)) {
        StringName::unref();
      }
      goto LAB_00123a52;
    }
    if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar13 = (code *)param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 6) {
    pVVar2 = param_2[5];
    if (pVVar2 == (Variant *)0x0) {
      iVar4 = 0;
      lVar12 = 0;
    }
    else {
      lVar12 = *(long *)(pVVar2 + -8);
      iVar4 = (int)lVar12;
    }
    if ((int)(5 - in_R8D) <= iVar4) {
      lVar6 = 0;
      do {
        if ((int)lVar6 < (int)in_R8D) {
          pVVar11 = *(Variant **)(param_4 + lVar6 * 8);
        }
        else {
          uVar9 = iVar4 + -5 + (int)lVar6;
          if (lVar12 <= (int)uVar9) {
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,(long)(int)uVar9,lVar12,"p_index",
                       "size()","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar13 = (code *)invalidInstructionException();
            (*pcVar13)();
          }
          pVVar11 = (Variant *)(pVVar2 + (ulong)uVar9 * 0x18);
        }
        local_68[lVar6] = pVVar11;
        lVar6 = lVar6 + 1;
      } while (lVar6 != 5);
      *in_R9 = 0;
      if (((ulong)pcVar13 & 1) != 0) {
        pcVar13 = *(code **)(pcVar13 + *(long *)((long)plVar10 + (long)pVVar1) + -1);
      }
      cVar3 = ::Variant::can_convert_strict(*(undefined4 *)local_68[4],0x14);
      uVar7 = _LC214;
      if (cVar3 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar7;
      }
      local_88[0] = ::Variant::operator_cast_to_Color(local_68[4]);
      cVar3 = ::Variant::can_convert_strict(*(undefined4 *)local_68[3],0x14);
      uVar7 = _LC209;
      if (cVar3 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar7;
      }
      local_78[0] = ::Variant::operator_cast_to_Color(local_68[3]);
      cVar3 = ::Variant::can_convert_strict(*(undefined4 *)local_68[2],2);
      uVar7 = _LC215;
      if (cVar3 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar7;
      }
      iVar4 = ::Variant::operator_cast_to_int(local_68[2]);
      cVar3 = ::Variant::can_convert_strict(*(undefined4 *)local_68[1],5);
      uVar7 = _LC211;
      if (cVar3 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar7;
      }
      local_90 = ::Variant::operator_cast_to_Vector2(local_68[1]);
      cVar3 = ::Variant::can_convert_strict(*(undefined4 *)local_68[0],0x17);
      uVar7 = _LC212;
      if (cVar3 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar7;
      }
      uVar7 = ::Variant::operator_cast_to_RID(local_68[0]);
      (*pcVar13)((long *)((long)plVar10 + (long)pVVar1),uVar7,&local_90,iVar4,local_78,local_88);
      goto LAB_00123a52;
    }
    uVar5 = 4;
  }
  else {
    uVar5 = 3;
  }
  *in_R9 = uVar5;
  in_R9[2] = 5;
LAB_00123a52:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTC<RID, Vector2 const&, int, Color const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTC<RID,Vector2_const&,int,Color_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  uint uVar9;
  undefined4 in_register_00000014;
  long *plVar10;
  Variant *pVVar11;
  long lVar12;
  uint in_R8D;
  undefined4 *in_R9;
  code *pcVar13;
  long in_FS_OFFSET;
  long local_a8;
  undefined8 local_a0;
  char *local_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 local_78 [2];
  Variant *local_68 [5];
  long local_40;
  
  plVar10 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar10 != (long *)0x0) && (plVar10[1] != 0)) && (*(char *)(plVar10[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_98,(StringName *)(param_2 + 3));
    if (plVar10[1] == 0) {
      plVar8 = (long *)plVar10[0x23];
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*plVar10 + 0x40))(plVar10);
      }
    }
    else {
      plVar8 = (long *)(plVar10[1] + 0x20);
    }
    if (local_98 == (char *)*plVar8) {
      if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_98 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_a0 = 0;
      local_90 = 0x35;
      String::parse_latin1((StrRange *)&local_a0);
      vformat<StringName>((StringName *)&local_98,(StrRange *)&local_a0,&local_a8);
      _err_print_error(&_LC206,"./core/object/method_bind.h",0x1a8,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_98,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
      if ((StringName::configured != '\0') && (local_a8 != 0)) {
        StringName::unref();
      }
      goto LAB_00123e42;
    }
    if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar13 = (code *)param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 5) {
    pVVar2 = param_2[5];
    if (pVVar2 == (Variant *)0x0) {
      iVar4 = 0;
      lVar12 = 0;
    }
    else {
      lVar12 = *(long *)(pVVar2 + -8);
      iVar4 = (int)lVar12;
    }
    if ((int)(4 - in_R8D) <= iVar4) {
      lVar6 = 0;
      do {
        if ((int)lVar6 < (int)in_R8D) {
          pVVar11 = *(Variant **)(param_4 + lVar6 * 8);
        }
        else {
          uVar9 = iVar4 + -4 + (int)lVar6;
          if (lVar12 <= (int)uVar9) {
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,(long)(int)uVar9,lVar12,"p_index",
                       "size()","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar13 = (code *)invalidInstructionException();
            (*pcVar13)();
          }
          pVVar11 = (Variant *)(pVVar2 + (ulong)uVar9 * 0x18);
        }
        local_68[lVar6] = pVVar11;
        lVar6 = lVar6 + 1;
      } while (lVar6 != 4);
      *in_R9 = 0;
      if (((ulong)pcVar13 & 1) != 0) {
        pcVar13 = *(code **)(pcVar13 + *(long *)((long)plVar10 + (long)pVVar1) + -1);
      }
      cVar3 = ::Variant::can_convert_strict(*(undefined4 *)local_68[3],0x14);
      uVar7 = _LC209;
      if (cVar3 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar7;
      }
      local_78[0] = ::Variant::operator_cast_to_Color(local_68[3]);
      cVar3 = ::Variant::can_convert_strict(*(undefined4 *)local_68[2],2);
      uVar7 = _LC215;
      if (cVar3 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar7;
      }
      iVar4 = ::Variant::operator_cast_to_int(local_68[2]);
      cVar3 = ::Variant::can_convert_strict(*(undefined4 *)local_68[1],5);
      uVar7 = _LC211;
      if (cVar3 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar7;
      }
      local_80 = ::Variant::operator_cast_to_Vector2(local_68[1]);
      cVar3 = ::Variant::can_convert_strict(*(undefined4 *)local_68[0],0x17);
      uVar7 = _LC212;
      if (cVar3 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar7;
      }
      uVar7 = ::Variant::operator_cast_to_RID(local_68[0]);
      (*pcVar13)((long *)((long)plVar10 + (long)pVVar1),uVar7,&local_80,iVar4,local_78);
      goto LAB_00123e42;
    }
    uVar5 = 4;
  }
  else {
    uVar5 = 3;
  }
  *in_R9 = uVar5;
  in_R9[2] = 4;
LAB_00123e42:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTC<RID, Vector2 const&, int, int, Color const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTC<RID,Vector2_const&,int,int,Color_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  uint uVar10;
  undefined4 in_register_00000014;
  long *plVar11;
  Variant *pVVar12;
  long lVar13;
  uint in_R8D;
  undefined4 *in_R9;
  code *pcVar14;
  long in_FS_OFFSET;
  long local_a8;
  undefined8 local_a0;
  char *local_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 local_78 [2];
  Variant *local_68 [5];
  long local_40;
  
  plVar11 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar11 != (long *)0x0) && (plVar11[1] != 0)) && (*(char *)(plVar11[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_98,(StringName *)(param_2 + 3));
    if (plVar11[1] == 0) {
      plVar9 = (long *)plVar11[0x23];
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)(**(code **)(*plVar11 + 0x40))();
      }
    }
    else {
      plVar9 = (long *)(plVar11[1] + 0x20);
    }
    if (local_98 == (char *)*plVar9) {
      if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_98 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_a0 = 0;
      local_90 = 0x35;
      String::parse_latin1((StrRange *)&local_a0);
      vformat<StringName>((StringName *)&local_98,(StrRange *)&local_a0,&local_a8);
      _err_print_error(&_LC206,"./core/object/method_bind.h",0x1a8,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_98,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
      if ((StringName::configured != '\0') && (local_a8 != 0)) {
        StringName::unref();
      }
      goto LAB_00124262;
    }
    if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar14 = (code *)param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 6) {
    pVVar2 = param_2[5];
    if (pVVar2 == (Variant *)0x0) {
      iVar4 = 0;
      lVar13 = 0;
    }
    else {
      lVar13 = *(long *)(pVVar2 + -8);
      iVar4 = (int)lVar13;
    }
    if ((int)(5 - in_R8D) <= iVar4) {
      lVar7 = 0;
      do {
        if ((int)lVar7 < (int)in_R8D) {
          pVVar12 = *(Variant **)(param_4 + lVar7 * 8);
        }
        else {
          uVar10 = iVar4 + -5 + (int)lVar7;
          if (lVar13 <= (int)uVar10) {
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,(long)(int)uVar10,lVar13,"p_index",
                       "size()","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar14 = (code *)invalidInstructionException();
            (*pcVar14)();
          }
          pVVar12 = (Variant *)(pVVar2 + (ulong)uVar10 * 0x18);
        }
        local_68[lVar7] = pVVar12;
        lVar7 = lVar7 + 1;
      } while (lVar7 != 5);
      *in_R9 = 0;
      if (((ulong)pcVar14 & 1) != 0) {
        pcVar14 = *(code **)(pcVar14 + *(long *)((long)plVar11 + (long)pVVar1) + -1);
      }
      cVar3 = ::Variant::can_convert_strict(*(undefined4 *)local_68[4],0x14);
      uVar8 = _LC214;
      if (cVar3 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar8;
      }
      local_78[0] = ::Variant::operator_cast_to_Color(local_68[4]);
      cVar3 = ::Variant::can_convert_strict(*(undefined4 *)local_68[3],2);
      uVar8 = _LC216;
      if (cVar3 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar8;
      }
      iVar4 = ::Variant::operator_cast_to_int(local_68[3]);
      cVar3 = ::Variant::can_convert_strict(*(undefined4 *)local_68[2],2);
      uVar8 = _LC215;
      if (cVar3 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar8;
      }
      iVar5 = ::Variant::operator_cast_to_int(local_68[2]);
      cVar3 = ::Variant::can_convert_strict(*(undefined4 *)local_68[1],5);
      uVar8 = _LC211;
      if (cVar3 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar8;
      }
      local_80 = ::Variant::operator_cast_to_Vector2(local_68[1]);
      cVar3 = ::Variant::can_convert_strict(*(undefined4 *)local_68[0],0x17);
      uVar8 = _LC212;
      if (cVar3 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar8;
      }
      uVar8 = ::Variant::operator_cast_to_RID(local_68[0]);
      (*pcVar14)((long *)((long)plVar11 + (long)pVVar1),uVar8,&local_80,iVar5,iVar4,local_78);
      goto LAB_00124262;
    }
    uVar6 = 4;
  }
  else {
    uVar6 = 3;
  }
  *in_R9 = uVar6;
  in_R9[2] = 5;
LAB_00124262:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Rect2, int, Variant>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindTRC<Rect2,int,Variant>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  long lVar3;
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
  code *pcVar13;
  long in_FS_OFFSET;
  long local_a8;
  undefined8 local_a0;
  char *local_98;
  undefined8 local_90;
  undefined8 local_88 [2];
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
    StringName::StringName((StringName *)&local_98,(StringName *)(param_2 + 3));
    if (plVar11[1] == 0) {
      plVar8 = (long *)plVar11[0x23];
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*plVar11 + 0x40))(plVar11);
      }
    }
    else {
      plVar8 = (long *)(plVar11[1] + 0x20);
    }
    if (local_98 == (char *)*plVar8) {
      if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_98 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_a0 = 0;
      local_90 = 0x35;
      String::parse_latin1((StrRange *)&local_a0);
      vformat<StringName>((StringName *)&local_98,(StrRange *)&local_a0,&local_a8);
      _err_print_error(&_LC206,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_98,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
      if ((StringName::configured != '\0') && (local_a8 != 0)) {
        StringName::unref();
      }
      goto LAB_00124610;
    }
    if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar13 = (code *)param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 3) {
    pVVar2 = param_2[5];
    iVar6 = 2 - in_R8D;
    if (pVVar2 == (Variant *)0x0) {
      if (iVar6 != 0) goto LAB_00124658;
      this = *(Variant **)param_4;
LAB_0012466d:
      pVVar10 = *(Variant **)(param_4 + 8);
    }
    else {
      lVar3 = *(long *)(pVVar2 + -8);
      iVar12 = (int)lVar3;
      if (iVar12 < iVar6) {
LAB_00124658:
        uVar7 = 4;
        goto LAB_00124645;
      }
      if (in_R8D == 0) {
        lVar9 = (long)(iVar12 + -2);
        if (lVar3 <= lVar9) goto LAB_00124730;
        this = (Variant *)(pVVar2 + lVar9 * 0x18);
      }
      else {
        this = *(Variant **)param_4;
        if (in_R8D == 2) goto LAB_0012466d;
      }
      lVar9 = (long)(int)((in_R8D ^ 1) + (iVar12 - iVar6));
      if (lVar3 <= lVar9) {
LAB_00124730:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar3,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar13 = (code *)invalidInstructionException();
        (*pcVar13)();
      }
      pVVar10 = (Variant *)(pVVar2 + lVar9 * 0x18);
    }
    *in_R9 = 0;
    if (((ulong)pcVar13 & 1) != 0) {
      pcVar13 = *(code **)(pcVar13 + *(long *)((long)plVar11 + (long)pVVar1) + -1);
    }
    cVar5 = ::Variant::can_convert_strict(*(undefined4 *)pVVar10,0);
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = 1;
    }
    ::Variant::Variant((Variant *)local_58,pVVar10);
    cVar5 = ::Variant::can_convert_strict(*(undefined4 *)this,2);
    uVar4 = _LC213;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    iVar6 = ::Variant::operator_cast_to_int(this);
    local_88[0] = (*pcVar13)((long *)((long)plVar11 + (long)pVVar1),iVar6,(Variant *)local_58);
    ::Variant::Variant((Variant *)local_78,(Rect2 *)local_88);
    if (::Variant::needs_deinit[*(int *)param_1] != '\0') {
      ::Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_78[0];
    *(undefined8 *)(param_1 + 8) = local_70;
    *(undefined8 *)(param_1 + 0x10) = uStack_68;
    if (::Variant::needs_deinit[local_58[0]] != '\0') {
      ::Variant::_clear_internal();
    }
  }
  else {
    uVar7 = 3;
LAB_00124645:
    *in_R9 = uVar7;
    in_R9[2] = 2;
  }
LAB_00124610:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindT<Vector<float> const&>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindT<Vector<float>const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  long lVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  long *plVar7;
  long lVar8;
  undefined4 in_register_00000014;
  long *plVar9;
  uint in_R8D;
  undefined4 *in_R9;
  undefined4 *puVar10;
  code *pcVar11;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  long local_40;
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
      _err_print_error(&_LC206,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001249b0;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar11 = (code *)param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar2 = param_2[5];
    if (pVVar2 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_00124a00;
LAB_001249f0:
      puVar10 = *(undefined4 **)param_4;
    }
    else {
      lVar3 = *(long *)(pVVar2 + -8);
      if ((int)lVar3 < (int)(in_R8D ^ 1)) {
LAB_00124a00:
        uVar6 = 4;
        goto LAB_001249a5;
      }
      if (in_R8D == 1) goto LAB_001249f0;
      lVar8 = (long)((int)lVar3 + -1);
      if (lVar3 <= lVar8) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar8,lVar3,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar11 = (code *)invalidInstructionException();
        (*pcVar11)();
      }
      puVar10 = (undefined4 *)(pVVar2 + lVar8 * 0x18);
    }
    *in_R9 = 0;
    if (((ulong)pcVar11 & 1) != 0) {
      pcVar11 = *(code **)(pcVar11 + *(long *)((long)plVar9 + (long)pVVar1) + -1);
    }
    cVar5 = ::Variant::can_convert_strict(*puVar10,0x20);
    uVar4 = _LC218;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    ::Variant::operator_cast_to_Vector((Variant *)&local_48);
    (*pcVar11)((long *)((long)plVar9 + (long)pVVar1));
    lVar3 = local_40;
    if (local_40 != 0) {
      LOCK();
      plVar9 = (long *)(local_40 + -0x10);
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (*plVar9 == 0) {
        local_40 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
  }
  else {
    uVar6 = 3;
LAB_001249a5:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_001249b0:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<bool, Variant, Vector2 const&, InlineAlignment, int, float>::call(Object*, Variant
   const**, int, Callable::CallError&) const */

Object * MethodBindTR<bool,Variant,Vector2_const&,InlineAlignment,int,float>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined4 uVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  uint uVar11;
  undefined4 in_register_00000014;
  long *plVar12;
  Variant *pVVar13;
  code *pcVar14;
  long lVar15;
  uint in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_d8;
  undefined8 local_d0;
  char *local_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  undefined4 local_a8 [2];
  undefined8 local_a0;
  undefined8 uStack_98;
  int local_88 [8];
  Variant *local_68 [5];
  long local_40;
  
  plVar12 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar12 != (long *)0x0) && (plVar12[1] != 0)) && (*(char *)(plVar12[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_c8,(StringName *)(param_2 + 3));
    if (plVar12[1] == 0) {
      plVar10 = (long *)plVar12[0x23];
      if (plVar10 == (long *)0x0) {
        plVar10 = (long *)(**(code **)(*plVar12 + 0x40))();
      }
    }
    else {
      plVar10 = (long *)(plVar12[1] + 0x20);
    }
    if (local_c8 == (char *)*plVar10) {
      if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_c8 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_d0 = 0;
      local_c0 = 0x35;
      String::parse_latin1((StrRange *)&local_d0);
      vformat<StringName>((StringName *)&local_c8,(StrRange *)&local_d0,&local_d8);
      _err_print_error(&_LC206,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_c8,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
      if ((StringName::configured != '\0') && (local_d8 != 0)) {
        StringName::unref();
      }
      goto LAB_00124e70;
    }
    if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar14 = (code *)param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 6) {
    pVVar2 = param_2[5];
    if (pVVar2 == (Variant *)0x0) {
      iVar6 = 0;
      lVar15 = 0;
    }
    else {
      lVar15 = *(long *)(pVVar2 + -8);
      iVar6 = (int)lVar15;
    }
    if ((int)(5 - in_R8D) <= iVar6) {
      lVar8 = 0;
      do {
        if ((int)lVar8 < (int)in_R8D) {
          pVVar13 = *(Variant **)(param_4 + lVar8 * 8);
        }
        else {
          uVar11 = iVar6 + -5 + (int)lVar8;
          if (lVar15 <= (int)uVar11) {
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,(long)(int)uVar11,lVar15,"p_index",
                       "size()","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar14 = (code *)invalidInstructionException();
            (*pcVar14)();
          }
          pVVar13 = (Variant *)(pVVar2 + (ulong)uVar11 * 0x18);
        }
        local_68[lVar8] = pVVar13;
        lVar8 = lVar8 + 1;
      } while (lVar8 != 5);
      *in_R9 = 0;
      if (((ulong)pcVar14 & 1) != 0) {
        pcVar14 = *(code **)(pcVar14 + *(long *)((long)plVar12 + (long)pVVar1) + -1);
      }
      cVar4 = ::Variant::can_convert_strict(*(undefined4 *)local_68[4],3);
      uVar3 = _LC219;
      if (cVar4 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar3;
      }
      ::Variant::operator_cast_to_float(local_68[4]);
      cVar4 = ::Variant::can_convert_strict(*(undefined4 *)local_68[3],2);
      uVar3 = _LC216;
      if (cVar4 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar3;
      }
      iVar6 = ::Variant::operator_cast_to_int(local_68[3]);
      cVar4 = ::Variant::can_convert_strict(*(undefined4 *)local_68[2],2);
      uVar3 = _LC215;
      if (cVar4 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar3;
      }
      uVar9 = ::Variant::operator_cast_to_long(local_68[2]);
      cVar4 = ::Variant::can_convert_strict(*(undefined4 *)local_68[1],5);
      uVar3 = _LC211;
      if (cVar4 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar3;
      }
      local_b0 = ::Variant::operator_cast_to_Vector2(local_68[1]);
      cVar4 = ::Variant::can_convert_strict(*(undefined4 *)local_68[0],0);
      if (cVar4 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = 0;
      }
      ::Variant::Variant((Variant *)local_88,local_68[0]);
      bVar5 = (bool)(*pcVar14)((long *)((long)plVar12 + (long)pVVar1),(Variant *)local_88,&local_b0,
                               uVar9 & 0xffffffff,iVar6);
      ::Variant::Variant((Variant *)local_a8,bVar5);
      if (::Variant::needs_deinit[*(int *)param_1] != '\0') {
        ::Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_a8[0];
      *(undefined8 *)(param_1 + 8) = local_a0;
      *(undefined8 *)(param_1 + 0x10) = uStack_98;
      if (::Variant::needs_deinit[local_88[0]] != '\0') {
        ::Variant::_clear_internal();
      }
      goto LAB_00124e70;
    }
    uVar7 = 4;
  }
  else {
    uVar7 = 3;
  }
  *in_R9 = uVar7;
  in_R9[2] = 5;
LAB_00124e70:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<bool, Variant, Vector2 const&, InlineAlignment, float>::call(Object*, Variant
   const**, int, Callable::CallError&) const */

Object * MethodBindTR<bool,Variant,Vector2_const&,InlineAlignment,float>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  undefined4 uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  uint uVar10;
  int iVar11;
  undefined4 in_register_00000014;
  long *plVar12;
  Variant *pVVar13;
  long lVar14;
  uint in_R8D;
  undefined4 *in_R9;
  code *pcVar15;
  long in_FS_OFFSET;
  long local_d8;
  undefined8 local_d0;
  char *local_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  undefined4 local_a8 [2];
  undefined8 local_a0;
  undefined8 uStack_98;
  int local_88 [8];
  Variant *local_68 [5];
  long local_40;
  
  plVar12 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar12 != (long *)0x0) && (plVar12[1] != 0)) && (*(char *)(plVar12[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_c8,(StringName *)(param_2 + 3));
    if (plVar12[1] == 0) {
      plVar9 = (long *)plVar12[0x23];
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)(**(code **)(*plVar12 + 0x40))(plVar12);
      }
    }
    else {
      plVar9 = (long *)(plVar12[1] + 0x20);
    }
    if (local_c8 == (char *)*plVar9) {
      if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_c8 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_d0 = 0;
      local_c0 = 0x35;
      String::parse_latin1((StrRange *)&local_d0);
      vformat<StringName>((StringName *)&local_c8,(StrRange *)&local_d0,&local_d8);
      _err_print_error(&_LC206,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_c8,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
      if ((StringName::configured != '\0') && (local_d8 != 0)) {
        StringName::unref();
      }
      goto LAB_001252d2;
    }
    if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar15 = (code *)param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 5) {
    pVVar2 = param_2[5];
    if (pVVar2 == (Variant *)0x0) {
      iVar11 = 0;
      lVar14 = 0;
    }
    else {
      lVar14 = *(long *)(pVVar2 + -8);
      iVar11 = (int)lVar14;
    }
    if ((int)(4 - in_R8D) <= iVar11) {
      lVar7 = 0;
      do {
        if ((int)lVar7 < (int)in_R8D) {
          pVVar13 = *(Variant **)(param_4 + lVar7 * 8);
        }
        else {
          uVar10 = iVar11 + -4 + (int)lVar7;
          if (lVar14 <= (int)uVar10) {
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,(long)(int)uVar10,lVar14,"p_index",
                       "size()","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar15 = (code *)invalidInstructionException();
            (*pcVar15)();
          }
          pVVar13 = (Variant *)(pVVar2 + (ulong)uVar10 * 0x18);
        }
        local_68[lVar7] = pVVar13;
        lVar7 = lVar7 + 1;
      } while (lVar7 != 4);
      *in_R9 = 0;
      if (((ulong)pcVar15 & 1) != 0) {
        pcVar15 = *(code **)(pcVar15 + *(long *)((long)plVar12 + (long)pVVar1) + -1);
      }
      cVar4 = ::Variant::can_convert_strict(*(undefined4 *)local_68[3],3);
      uVar3 = _LC220;
      if (cVar4 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar3;
      }
      ::Variant::operator_cast_to_float(local_68[3]);
      cVar4 = ::Variant::can_convert_strict(*(undefined4 *)local_68[2],2);
      uVar3 = _LC215;
      if (cVar4 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar3;
      }
      uVar8 = ::Variant::operator_cast_to_long(local_68[2]);
      cVar4 = ::Variant::can_convert_strict(*(undefined4 *)local_68[1],5);
      uVar3 = _LC211;
      if (cVar4 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar3;
      }
      local_b0 = ::Variant::operator_cast_to_Vector2(local_68[1]);
      cVar4 = ::Variant::can_convert_strict(*(undefined4 *)local_68[0],0);
      if (cVar4 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = 0;
      }
      ::Variant::Variant((Variant *)local_88,local_68[0]);
      bVar5 = (bool)(*pcVar15)((long *)((long)plVar12 + (long)pVVar1),(Variant *)local_88,&local_b0,
                               uVar8 & 0xffffffff);
      ::Variant::Variant((Variant *)local_a8,bVar5);
      if (::Variant::needs_deinit[*(int *)param_1] != '\0') {
        ::Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_a8[0];
      *(undefined8 *)(param_1 + 8) = local_a0;
      *(undefined8 *)(param_1 + 0x10) = uStack_98;
      if (::Variant::needs_deinit[local_88[0]] != '\0') {
        ::Variant::_clear_internal();
      }
      goto LAB_001252d2;
    }
    uVar6 = 4;
  }
  else {
    uVar6 = 3;
  }
  *in_R9 = uVar6;
  in_R9[2] = 4;
LAB_001252d2:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<String_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  long lVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  long *plVar7;
  long lVar8;
  undefined4 in_register_00000014;
  long *plVar9;
  uint in_R8D;
  undefined4 *in_R9;
  undefined4 *puVar10;
  code *pcVar11;
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
      _err_print_error(&_LC206,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00125600;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar11 = (code *)param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar2 = param_2[5];
    if (pVVar2 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_00125650;
LAB_00125640:
      puVar10 = *(undefined4 **)param_4;
    }
    else {
      lVar3 = *(long *)(pVVar2 + -8);
      if ((int)lVar3 < (int)(in_R8D ^ 1)) {
LAB_00125650:
        uVar6 = 4;
        goto LAB_001255f5;
      }
      if (in_R8D == 1) goto LAB_00125640;
      lVar8 = (long)((int)lVar3 + -1);
      if (lVar3 <= lVar8) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar8,lVar3,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar11 = (code *)invalidInstructionException();
        (*pcVar11)();
      }
      puVar10 = (undefined4 *)(pVVar2 + lVar8 * 0x18);
    }
    *in_R9 = 0;
    if (((ulong)pcVar11 & 1) != 0) {
      pcVar11 = *(code **)(pcVar11 + *(long *)((long)plVar9 + (long)pVVar1) + -1);
    }
    cVar5 = ::Variant::can_convert_strict(*puVar10,4);
    uVar4 = _LC221;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    ::Variant::operator_cast_to_String((Variant *)&local_48);
    (*pcVar11)((long *)((long)plVar9 + (long)pVVar1),(Variant *)&local_48);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  }
  else {
    uVar6 = 3;
LAB_001255f5:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_00125600:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<bool, String const&, Ref<Font> const&, int, String const&, Variant
   const&>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTR<bool,String_const&,Ref<Font>const&,int,String_const&,Variant_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  undefined8 uVar3;
  Object *pOVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  undefined4 uVar8;
  long lVar9;
  Object *pOVar10;
  long *plVar11;
  uint uVar12;
  Variant *pVVar13;
  undefined4 in_register_00000014;
  long *plVar14;
  uint in_R8D;
  undefined4 *in_R9;
  long lVar15;
  code *pcVar16;
  long in_FS_OFFSET;
  long local_c8;
  Object *local_c0;
  char *local_b8;
  undefined8 local_b0;
  undefined4 local_a8 [2];
  undefined8 local_a0;
  undefined8 uStack_98;
  int local_88 [8];
  Variant *local_68 [5];
  long local_40;
  
  plVar14 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar14 != (long *)0x0) && (plVar14[1] != 0)) && (*(char *)(plVar14[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_b8,(StringName *)(param_2 + 3));
    if (plVar14[1] == 0) {
      plVar11 = (long *)plVar14[0x23];
      if (plVar11 == (long *)0x0) {
        plVar11 = (long *)(**(code **)(*plVar14 + 0x40))(plVar14);
      }
    }
    else {
      plVar11 = (long *)(plVar14[1] + 0x20);
    }
    if (local_b8 == (char *)*plVar11) {
      if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_b8 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_c0 = (Object *)0x0;
      local_b0 = 0x35;
      String::parse_latin1((StrRange *)&local_c0);
      vformat<StringName>((StringName *)&local_b8,(StrRange *)&local_c0,&local_c8);
      _err_print_error(&_LC206,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_b8,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
      if ((StringName::configured != '\0') && (local_c8 != 0)) {
        StringName::unref();
      }
      goto LAB_00125b42;
    }
    if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar16 = (code *)param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 6) {
    pVVar2 = param_2[5];
    if (pVVar2 == (Variant *)0x0) {
      iVar7 = 0;
      lVar15 = 0;
    }
    else {
      lVar15 = *(long *)(pVVar2 + -8);
      iVar7 = (int)lVar15;
    }
    if ((int)(5 - in_R8D) <= iVar7) {
      lVar9 = 0;
      do {
        if ((int)lVar9 < (int)in_R8D) {
          pVVar13 = *(Variant **)(param_4 + lVar9 * 8);
        }
        else {
          uVar12 = iVar7 + -5 + (int)lVar9;
          if (lVar15 <= (int)uVar12) {
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,(long)(int)uVar12,lVar15,"p_index",
                       "size()","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar16 = (code *)invalidInstructionException();
            (*pcVar16)();
          }
          pVVar13 = (Variant *)(pVVar2 + (ulong)uVar12 * 0x18);
        }
        local_68[lVar9] = pVVar13;
        lVar9 = lVar9 + 1;
      } while (lVar9 != 5);
      *in_R9 = 0;
      if (((ulong)pcVar16 & 1) != 0) {
        pcVar16 = *(code **)(pcVar16 + *(long *)((long)plVar14 + (long)pVVar1) + -1);
      }
      cVar5 = ::Variant::can_convert_strict(*(undefined4 *)local_68[4],0);
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = 4;
      }
      ::Variant::Variant((Variant *)local_88,local_68[4]);
      cVar5 = ::Variant::can_convert_strict(*(undefined4 *)local_68[3],4);
      uVar3 = _LC223;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar3;
      }
      ::Variant::operator_cast_to_String((Variant *)&local_c8);
      cVar5 = ::Variant::can_convert_strict(*(undefined4 *)local_68[2],2);
      uVar3 = _LC215;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar3;
      }
      iVar7 = ::Variant::operator_cast_to_int(local_68[2]);
      cVar5 = ::Variant::can_convert_strict(*(undefined4 *)local_68[1]);
      uVar3 = _LC224;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar3;
      }
      local_c0 = (Object *)0x0;
      pOVar10 = (Object *)::Variant::get_validated_object();
      pOVar4 = local_c0;
      if (pOVar10 != local_c0) {
        if (pOVar10 == (Object *)0x0) {
          if (local_c0 != (Object *)0x0) {
            local_c0 = (Object *)0x0;
LAB_00125a29:
            cVar5 = RefCounted::unreference();
            if (cVar5 != '\0') {
              cVar5 = predelete_handler(pOVar4);
              if (cVar5 != '\0') {
                (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
                Memory::free_static(pOVar4,false);
              }
            }
          }
        }
        else {
          pOVar10 = (Object *)__dynamic_cast(pOVar10,&Object::typeinfo,&Font::typeinfo,0);
          if (pOVar4 != pOVar10) {
            local_c0 = pOVar10;
            if (pOVar10 != (Object *)0x0) {
              cVar5 = RefCounted::reference();
              if (cVar5 == '\0') {
                local_c0 = (Object *)0x0;
              }
            }
            if (pOVar4 != (Object *)0x0) goto LAB_00125a29;
          }
        }
      }
      cVar5 = ::Variant::can_convert_strict(*(undefined4 *)local_68[0],4);
      uVar3 = _LC221;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar3;
      }
      ::Variant::operator_cast_to_String((Variant *)&local_b8);
      bVar6 = (bool)(*pcVar16)((long *)((long)plVar14 + (long)pVVar1),(Variant *)&local_b8,&local_c0
                               ,iVar7,(Variant *)&local_c8,(Variant *)local_88);
      ::Variant::Variant((Variant *)local_a8,bVar6);
      if (::Variant::needs_deinit[*(int *)param_1] != '\0') {
        ::Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_a8[0];
      *(undefined8 *)(param_1 + 8) = local_a0;
      *(undefined8 *)(param_1 + 0x10) = uStack_98;
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
      if (local_c0 != (Object *)0x0) {
        cVar5 = RefCounted::unreference();
        pOVar4 = local_c0;
        if (cVar5 != '\0') {
          cVar5 = predelete_handler(local_c0);
          if (cVar5 != '\0') {
            (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
            Memory::free_static(pOVar4,false);
          }
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
      if (::Variant::needs_deinit[local_88[0]] != '\0') {
        ::Variant::_clear_internal();
      }
      goto LAB_00125b42;
    }
    uVar8 = 4;
  }
  else {
    uVar8 = 3;
  }
  *in_R9 = uVar8;
  in_R9[2] = 5;
LAB_00125b42:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<bool, String const&, Ref<Font> const&, int, Rect2 const&, String
   const&>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTR<bool,String_const&,Ref<Font>const&,int,Rect2_const&,String_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  undefined8 uVar3;
  Object *pOVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  undefined4 uVar8;
  long lVar9;
  Object *pOVar10;
  long *plVar11;
  int iVar12;
  Variant *pVVar13;
  undefined4 in_register_00000014;
  long *plVar14;
  uint in_R8D;
  undefined4 *in_R9;
  long lVar15;
  code *pcVar16;
  long in_FS_OFFSET;
  ulong uVar17;
  long local_b8;
  Object *local_b0;
  char *local_a8;
  undefined8 local_a0;
  undefined8 local_98 [2];
  undefined4 local_88 [2];
  undefined8 local_80;
  undefined8 uStack_78;
  Variant *local_68 [5];
  long local_40;
  
  plVar14 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar14 != (long *)0x0) && (plVar14[1] != 0)) && (*(char *)(plVar14[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_a8,(StringName *)(param_2 + 3));
    if (plVar14[1] == 0) {
      plVar11 = (long *)plVar14[0x23];
      if (plVar11 == (long *)0x0) {
        plVar11 = (long *)(**(code **)(*plVar14 + 0x40))(plVar14);
      }
    }
    else {
      plVar11 = (long *)(plVar14[1] + 0x20);
    }
    if (local_a8 == (char *)*plVar11) {
      if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_a8 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_b0 = (Object *)0x0;
      local_a0 = 0x35;
      String::parse_latin1((StrRange *)&local_b0);
      vformat<StringName>((StringName *)&local_a8,(StrRange *)&local_b0,&local_b8);
      _err_print_error(&_LC206,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_a8,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
      if ((StringName::configured != '\0') && (local_b8 != 0)) {
        StringName::unref();
      }
      goto LAB_00126122;
    }
    if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar16 = (code *)param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 6) {
    pVVar2 = param_2[5];
    if (pVVar2 == (Variant *)0x0) {
      iVar12 = 0;
      lVar15 = 0;
    }
    else {
      lVar15 = *(long *)(pVVar2 + -8);
      iVar12 = (int)lVar15;
    }
    if ((int)(5 - in_R8D) <= iVar12) {
      lVar9 = 0;
      do {
        if ((int)lVar9 < (int)in_R8D) {
          pVVar13 = *(Variant **)(param_4 + lVar9 * 8);
        }
        else {
          uVar7 = iVar12 + -5 + (int)lVar9;
          if (lVar15 <= (int)uVar7) {
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,(long)(int)uVar7,lVar15,"p_index",
                       "size()","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar16 = (code *)invalidInstructionException();
            (*pcVar16)();
          }
          pVVar13 = (Variant *)(pVVar2 + (ulong)uVar7 * 0x18);
        }
        local_68[lVar9] = pVVar13;
        lVar9 = lVar9 + 1;
      } while (lVar9 != 5);
      *in_R9 = 0;
      if (((ulong)pcVar16 & 1) != 0) {
        pcVar16 = *(code **)(pcVar16 + *(long *)((long)plVar14 + (long)pVVar1) + -1);
      }
      cVar5 = ::Variant::can_convert_strict(*(undefined4 *)local_68[4],4);
      uVar3 = _LC225;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar3;
      }
      ::Variant::operator_cast_to_String((Variant *)&local_b8);
      cVar5 = ::Variant::can_convert_strict(*(undefined4 *)local_68[3],7);
      uVar3 = _LC226;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar3;
      }
      local_98[0] = ::Variant::operator_cast_to_Rect2(local_68[3]);
      cVar5 = ::Variant::can_convert_strict(*(undefined4 *)local_68[2],2);
      uVar3 = _LC215;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar3;
      }
      uVar7 = ::Variant::operator_cast_to_int(local_68[2]);
      uVar17 = (ulong)uVar7;
      cVar5 = ::Variant::can_convert_strict(*(undefined4 *)local_68[1]);
      uVar3 = _LC224;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar3;
      }
      local_b0 = (Object *)0x0;
      pOVar10 = (Object *)::Variant::get_validated_object();
      pOVar4 = local_b0;
      if (pOVar10 != local_b0) {
        if (pOVar10 == (Object *)0x0) {
          if (local_b0 != (Object *)0x0) {
            local_b0 = (Object *)0x0;
LAB_00126021:
            cVar5 = RefCounted::unreference();
            if (cVar5 != '\0') {
              cVar5 = predelete_handler(pOVar4);
              if (cVar5 != '\0') {
                (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
                Memory::free_static(pOVar4,false);
              }
            }
          }
        }
        else {
          pOVar10 = (Object *)__dynamic_cast(pOVar10,&Object::typeinfo,&Font::typeinfo,0);
          if (pOVar4 != pOVar10) {
            local_b0 = pOVar10;
            if (pOVar10 != (Object *)0x0) {
              cVar5 = RefCounted::reference();
              if (cVar5 == '\0') {
                local_b0 = (Object *)0x0;
              }
            }
            if (pOVar4 != (Object *)0x0) goto LAB_00126021;
          }
        }
      }
      cVar5 = ::Variant::can_convert_strict(*(undefined4 *)local_68[0],4);
      uVar3 = _LC221;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar3;
      }
      ::Variant::operator_cast_to_String((Variant *)&local_a8);
      bVar6 = (bool)(*pcVar16)((long *)((long)plVar14 + (long)pVVar1),(Variant *)&local_a8,&local_b0
                               ,uVar17 & 0xffffffff,local_98,(Variant *)&local_b8,uVar17,local_68[0]
                              );
      ::Variant::Variant((Variant *)local_88,bVar6);
      if (::Variant::needs_deinit[*(int *)param_1] != '\0') {
        ::Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_88[0];
      *(undefined8 *)(param_1 + 8) = local_80;
      *(undefined8 *)(param_1 + 0x10) = uStack_78;
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
      if (local_b0 != (Object *)0x0) {
        cVar5 = RefCounted::unreference();
        pOVar4 = local_b0;
        if (cVar5 != '\0') {
          cVar5 = predelete_handler(local_b0);
          if (cVar5 != '\0') {
            (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
            Memory::free_static(pOVar4,false);
          }
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
      goto LAB_00126122;
    }
    uVar8 = 4;
  }
  else {
    uVar8 = 3;
  }
  *in_R9 = uVar8;
  in_R9[2] = 5;
LAB_00126122:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Array const&>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<Array_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  long lVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  long *plVar7;
  long lVar8;
  undefined4 in_register_00000014;
  long *plVar9;
  uint in_R8D;
  undefined4 *in_R9;
  undefined4 *puVar10;
  code *pcVar11;
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
      _err_print_error(&_LC206,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00126510;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar11 = (code *)param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar2 = param_2[5];
    if (pVVar2 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_00126560;
LAB_00126550:
      puVar10 = *(undefined4 **)param_4;
    }
    else {
      lVar3 = *(long *)(pVVar2 + -8);
      if ((int)lVar3 < (int)(in_R8D ^ 1)) {
LAB_00126560:
        uVar6 = 4;
        goto LAB_00126505;
      }
      if (in_R8D == 1) goto LAB_00126550;
      lVar8 = (long)((int)lVar3 + -1);
      if (lVar3 <= lVar8) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar8,lVar3,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar11 = (code *)invalidInstructionException();
        (*pcVar11)();
      }
      puVar10 = (undefined4 *)(pVVar2 + lVar8 * 0x18);
    }
    *in_R9 = 0;
    if (((ulong)pcVar11 & 1) != 0) {
      pcVar11 = *(code **)(pcVar11 + *(long *)((long)plVar9 + (long)pVVar1) + -1);
    }
    cVar5 = ::Variant::can_convert_strict(*puVar10,0x1c);
    uVar4 = _LC227;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    ::Variant::operator_cast_to_Array((Variant *)&local_48);
    (*pcVar11)((long *)((long)plVar9 + (long)pVVar1),(Variant *)&local_48);
    Array::~Array((Array *)&local_48);
  }
  else {
    uVar6 = 3;
LAB_00126505:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_00126510:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
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
    goto LAB_0012681d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_00126880;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_00126880:
      uVar6 = 4;
LAB_0012681d:
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
      goto LAB_0012679b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0012679b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_int **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC213;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_int(this);
                    /* WARNING: Could not recover jumptable at 0x001267f6. Too many branches */
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
      _err_print_error(&_LC206,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_001268e6;
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
LAB_001268e6:
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
    goto LAB_00126bad;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_00126c10;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_00126c10:
      uVar6 = 4;
LAB_00126bad:
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
      goto LAB_00126b2b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_00126b2b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_float **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,3);
  uVar4 = _LC228;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  fVar9 = Variant::operator_cast_to_float(this);
                    /* WARNING: Could not recover jumptable at 0x00126b84. Too many branches */
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
      _err_print_error(&_LC206,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00126c76;
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
LAB_00126c76:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass,
   TextServer::OverrunBehavior>(__UnexistingClass*, void
   (__UnexistingClass::*)(TextServer::OverrunBehavior), Variant const**, int, Callable::CallError&,
   Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,TextServer::OverrunBehavior>
               (__UnexistingClass *param_1,_func_void_OverrunBehavior *param_2,Variant **param_3,
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
    goto LAB_00126f3d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_00126fa0;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_00126fa0:
      uVar6 = 4;
LAB_00126f3d:
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
      goto LAB_00126ebb;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_00126ebb:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_OverrunBehavior **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC213;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_long(this);
                    /* WARNING: Could not recover jumptable at 0x00126f16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)((char)(param_1 + (long)param_3));
  return;
}



/* MethodBindT<TextServer::OverrunBehavior>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<TextServer::OverrunBehavior>::call
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
      _err_print_error(&_LC206,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00127006;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,TextServer::OverrunBehavior>
            (p_Var2,(_func_void_OverrunBehavior *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4
             ,in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00127006:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, BitField<TextServer::JustificationFlag>
   >(__UnexistingClass*, void (__UnexistingClass::*)(BitField<TextServer::JustificationFlag>),
   Variant const**, int, Callable::CallError&, Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,BitField<TextServer::JustificationFlag>>
               (__UnexistingClass *param_1,_func_void_BitField *param_2,Variant **param_3,
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
    goto LAB_001272cd;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_00127330;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_00127330:
      uVar6 = 4;
LAB_001272cd:
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
      goto LAB_0012724b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0012724b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_BitField **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC213;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_long(this);
                    /* WARNING: Could not recover jumptable at 0x001272a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)((char)(param_1 + (long)param_3));
  return;
}



/* MethodBindT<BitField<TextServer::JustificationFlag> >::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<BitField<TextServer::JustificationFlag>>::call
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
      _err_print_error(&_LC206,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00127396;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,BitField<TextServer::JustificationFlag>>
            (p_Var2,(_func_void_BitField *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,
             in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00127396:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, BitField<TextServer::LineBreakFlag>
   >(__UnexistingClass*, void (__UnexistingClass::*)(BitField<TextServer::LineBreakFlag>), Variant
   const**, int, Callable::CallError&, Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,BitField<TextServer::LineBreakFlag>>
               (__UnexistingClass *param_1,_func_void_BitField *param_2,Variant **param_3,
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
    goto LAB_0012765d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_001276c0;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_001276c0:
      uVar6 = 4;
LAB_0012765d:
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
      goto LAB_001275db;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_001275db:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_BitField **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC213;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_long(this);
                    /* WARNING: Could not recover jumptable at 0x00127637. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)((char)(param_1 + (long)param_3));
  return;
}



/* MethodBindT<BitField<TextServer::LineBreakFlag> >::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<BitField<TextServer::LineBreakFlag>>::call
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
      _err_print_error(&_LC206,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00127726;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,BitField<TextServer::LineBreakFlag>>
            (p_Var2,(_func_void_BitField *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,
             in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00127726:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, HorizontalAlignment>(__UnexistingClass*, void
   (__UnexistingClass::*)(HorizontalAlignment), Variant const**, int, Callable::CallError&,
   Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,HorizontalAlignment>
               (__UnexistingClass *param_1,_func_void_HorizontalAlignment *param_2,Variant **param_3
               ,int param_4,CallError *param_5,Vector *param_6)

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
    goto LAB_001279ed;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_00127a50;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_00127a50:
      uVar6 = 4;
LAB_001279ed:
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
      goto LAB_0012796b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0012796b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_HorizontalAlignment **)
               (param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC213;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_long(this);
                    /* WARNING: Could not recover jumptable at 0x001279c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)((char)(param_1 + (long)param_3));
  return;
}



/* MethodBindT<HorizontalAlignment>::call(Object*, Variant const**, int, Callable::CallError&) const
    */

Object * MethodBindT<HorizontalAlignment>::call
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
      _err_print_error(&_LC206,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00127ab6;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,HorizontalAlignment>
            (p_Var2,(_func_void_HorizontalAlignment *)param_2[0xb],(Variant **)param_2[0xc],
             (int)param_4,in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00127ab6:
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
    goto LAB_00127d7d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_00127de0;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_00127de0:
      uVar6 = 4;
LAB_00127d7d:
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
      goto LAB_00127cfb;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_00127cfb:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_bool **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,1);
  uVar4 = _LC229;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_bool(this);
                    /* WARNING: Could not recover jumptable at 0x00127d57. Too many branches */
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
      _err_print_error(&_LC206,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00127e46;
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
LAB_00127e46:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, TextServer::Orientation>(__UnexistingClass*,
   void (__UnexistingClass::*)(TextServer::Orientation), Variant const**, int, Callable::CallError&,
   Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,TextServer::Orientation>
               (__UnexistingClass *param_1,_func_void_Orientation *param_2,Variant **param_3,
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
    goto LAB_0012810d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_00128170;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_00128170:
      uVar6 = 4;
LAB_0012810d:
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
      goto LAB_0012808b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0012808b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_Orientation **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC213;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_long(this);
                    /* WARNING: Could not recover jumptable at 0x001280e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)((char)(param_1 + (long)param_3));
  return;
}



/* MethodBindT<TextServer::Orientation>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindT<TextServer::Orientation>::call
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
      _err_print_error(&_LC206,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_001281d6;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,TextServer::Orientation>
            (p_Var2,(_func_void_Orientation *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,
             in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_001281d6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, TextServer::Direction>(__UnexistingClass*, void
   (__UnexistingClass::*)(TextServer::Direction), Variant const**, int, Callable::CallError&,
   Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,TextServer::Direction>
               (__UnexistingClass *param_1,_func_void_Direction *param_2,Variant **param_3,
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
    goto LAB_0012849d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_00128500;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_00128500:
      uVar6 = 4;
LAB_0012849d:
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
      goto LAB_0012841b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0012841b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_Direction **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC213;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_long(this);
                    /* WARNING: Could not recover jumptable at 0x00128476. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)((char)(param_1 + (long)param_3));
  return;
}



/* MethodBindT<TextServer::Direction>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindT<TextServer::Direction>::call
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
      _err_print_error(&_LC206,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00128566;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,TextServer::Direction>
            (p_Var2,(_func_void_Direction *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8
             ,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00128566:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info_helper<Vector2 const&>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<Vector2_const&>
               (int param_1,int *param_2,PropertyInfo *param_3)

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
  if (iVar5 != param_1) goto LAB_00128767;
  local_78 = 0;
  local_68 = &_LC23;
  local_80 = 0;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,5);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00128865:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00128865;
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
LAB_00128767:
  *param_2 = iVar5 + 1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindTRC<int, Vector2 const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<int,Vector2_const&>::_gen_argument_type_info(int param_1)

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
    call_get_argument_type_info_helper<Vector2_const&>(0,(int *)&local_70,(PropertyInfo *)&local_68)
    ;
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
    goto LAB_00128a38;
  }
  local_70 = 0;
  local_78 = 0;
  local_68 = &_LC23;
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
LAB_00128b1f:
    StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_70);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_78);
    puVar5[10] = 6;
    if (puVar5[6] != 0x11) goto LAB_00128b1f;
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_00128a38:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info_helper<Color const&>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<Color_const&>
               (int param_1,int *param_2,PropertyInfo *param_3)

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
  if (iVar5 != param_1) goto LAB_00128bb7;
  local_78 = 0;
  local_68 = &_LC23;
  local_80 = 0;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,0x14);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00128cb5:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00128cb5;
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
LAB_00128bb7:
  *param_2 = iVar5 + 1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindTC<RID, Vector2 const&, Color const&, Color const&>::_gen_argument_type_info(int) const
    */

PropertyInfo *
MethodBindTC<RID,Vector2_const&,Color_const&,Color_const&>::_gen_argument_type_info(int param_1)

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
  if (in_EDX != 0) goto LAB_00128e38;
  local_88 = 0;
  local_90 = 0;
  local_78 = &_LC23;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_70._8_8_;
  local_70 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_90);
  local_98 = 0;
  local_78 = (undefined *)CONCAT44(local_78._4_4_,0x17);
  local_60 = 0;
  local_58 = 0;
  local_70 = (undefined1  [16])0x0;
  if (local_90 == 0) {
LAB_00128f68:
    local_50 = 6;
    StringName::operator=((StringName *)(local_70 + 8),(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 6;
    if (local_60 != 0x11) goto LAB_00128f68;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
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
LAB_00128e38:
  local_9c = 1;
  call_get_argument_type_info_helper<Vector2_const&>(in_EDX,&local_9c,pPVar5);
  call_get_argument_type_info_helper<Color_const&>(in_EDX,&local_9c,pPVar5);
  call_get_argument_type_info_helper<Color_const&>(in_EDX,&local_9c,pPVar5);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pPVar5;
}



/* MethodBindTC<RID, Vector2 const&, Color const&>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindTC<RID,Vector2_const&,Color_const&>::_gen_argument_type_info(int param_1)

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
  local_8c = 0;
  *(undefined1 (*) [16])(pPVar5 + 8) = (undefined1  [16])0x0;
  if (in_EDX != 0) goto LAB_001290c6;
  local_78 = 0;
  local_68 = &_LC23;
  local_80 = 0;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,0x17);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_001291ed:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_001291ed;
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
LAB_001290c6:
  local_8c = 1;
  call_get_argument_type_info_helper<Vector2_const&>(in_EDX,&local_8c,pPVar5);
  call_get_argument_type_info_helper<Color_const&>(in_EDX,&local_8c,pPVar5);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
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
  if (iVar5 != param_1) goto LAB_00129337;
  local_78 = 0;
  local_68 = &_LC23;
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
LAB_00129435:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00129435;
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
LAB_00129337:
  *param_2 = iVar5 + 1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindTRC<RID, int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<RID,int>::_gen_argument_type_info(int param_1)

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
    goto LAB_00129608;
  }
  local_70 = 0;
  local_78 = 0;
  local_68 = &_LC23;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._0_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_78);
  local_80 = 0;
  *puVar5 = 0x17;
  puVar5[6] = 0;
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar5[10] = 6;
LAB_001296ef:
    StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_70);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_78);
    puVar5[10] = 6;
    if (puVar5[6] != 0x11) goto LAB_001296ef;
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_00129608:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* MethodBindTRC<Array, int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Array,int>::_gen_argument_type_info(int param_1)

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
    goto LAB_00129888;
  }
  local_70 = 0;
  local_78 = 0;
  local_68 = &_LC23;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._0_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_78);
  local_80 = 0;
  *puVar5 = 0x1c;
  puVar5[6] = 0;
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar5[10] = 6;
LAB_0012996f:
    StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_70);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_78);
    puVar5[10] = 6;
    if (puVar5[6] != 0x11) goto LAB_0012996f;
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_00129888:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector2, int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Vector2,int>::_gen_argument_type_info(int param_1)

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
    goto LAB_00129a88;
  }
  local_70 = 0;
  local_78 = 0;
  local_68 = &_LC23;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._0_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_78);
  local_80 = 0;
  *puVar5 = 5;
  puVar5[6] = 0;
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar5[10] = 6;
LAB_00129b6f:
    StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_70);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_78);
    puVar5[10] = 6;
    if (puVar5[6] != 0x11) goto LAB_00129b6f;
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_00129a88:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector2i, int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Vector2i,int>::_gen_argument_type_info(int param_1)

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
    goto LAB_00129c88;
  }
  local_70 = 0;
  local_78 = 0;
  local_68 = &_LC23;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._0_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_78);
  local_80 = 0;
  *puVar5 = 6;
  puVar5[6] = 0;
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar5[10] = 6;
LAB_00129d6f:
    StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_70);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_78);
    puVar5[10] = 6;
    if (puVar5[6] != 0x11) goto LAB_00129d6f;
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_00129c88:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<float, int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<float,int>::_gen_argument_type_info(int param_1)

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
    goto LAB_00129e88;
  }
  local_70 = 0;
  local_78 = 0;
  local_68 = &_LC23;
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
LAB_00129f6f:
    StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_70);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_78);
    puVar5[10] = 6;
    if (puVar5[6] != 0x11) goto LAB_00129f6f;
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_00129e88:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTC<RID, Vector2 const&, int, Color const&, Color const&>::_gen_argument_type_info(int)
   const */

PropertyInfo *
MethodBindTC<RID,Vector2_const&,int,Color_const&,Color_const&>::_gen_argument_type_info(int param_1)

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
  if (in_EDX != 0) goto LAB_0012a038;
  local_88 = 0;
  local_90 = 0;
  local_78 = &_LC23;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_70._8_8_;
  local_70 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_90);
  local_98 = 0;
  local_78 = (undefined *)CONCAT44(local_78._4_4_,0x17);
  local_60 = 0;
  local_58 = 0;
  local_70 = (undefined1  [16])0x0;
  if (local_90 == 0) {
LAB_0012a178:
    local_50 = 6;
    StringName::operator=((StringName *)(local_70 + 8),(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 6;
    if (local_60 != 0x11) goto LAB_0012a178;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
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
LAB_0012a038:
  local_9c = 1;
  call_get_argument_type_info_helper<Vector2_const&>(in_EDX,&local_9c,pPVar5);
  call_get_argument_type_info_helper<int>(in_EDX,&local_9c,pPVar5);
  call_get_argument_type_info_helper<Color_const&>(in_EDX,&local_9c,pPVar5);
  call_get_argument_type_info_helper<Color_const&>(in_EDX,&local_9c,pPVar5);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pPVar5;
}



/* MethodBindTC<RID, Vector2 const&, int, Color const&>::_gen_argument_type_info(int) const */

PropertyInfo *
MethodBindTC<RID,Vector2_const&,int,Color_const&>::_gen_argument_type_info(int param_1)

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
  if (in_EDX != 0) goto LAB_0012a2d8;
  local_88 = 0;
  local_90 = 0;
  local_78 = &_LC23;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_70._8_8_;
  local_70 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_90);
  local_98 = 0;
  local_78 = (undefined *)CONCAT44(local_78._4_4_,0x17);
  local_60 = 0;
  local_58 = 0;
  local_70 = (undefined1  [16])0x0;
  if (local_90 == 0) {
LAB_0012a408:
    local_50 = 6;
    StringName::operator=((StringName *)(local_70 + 8),(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 6;
    if (local_60 != 0x11) goto LAB_0012a408;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
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
LAB_0012a2d8:
  local_9c = 1;
  call_get_argument_type_info_helper<Vector2_const&>(in_EDX,&local_9c,pPVar5);
  call_get_argument_type_info_helper<int>(in_EDX,&local_9c,pPVar5);
  call_get_argument_type_info_helper<Color_const&>(in_EDX,&local_9c,pPVar5);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pPVar5;
}



/* MethodBindTC<RID, Vector2 const&, int, int, Color const&>::_gen_argument_type_info(int) const */

PropertyInfo *
MethodBindTC<RID,Vector2_const&,int,int,Color_const&>::_gen_argument_type_info(int param_1)

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
  if (in_EDX != 0) goto LAB_0012a568;
  local_88 = 0;
  local_90 = 0;
  local_78 = &_LC23;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_70._8_8_;
  local_70 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_90);
  local_98 = 0;
  local_78 = (undefined *)CONCAT44(local_78._4_4_,0x17);
  local_60 = 0;
  local_58 = 0;
  local_70 = (undefined1  [16])0x0;
  if (local_90 == 0) {
LAB_0012a6a8:
    local_50 = 6;
    StringName::operator=((StringName *)(local_70 + 8),(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 6;
    if (local_60 != 0x11) goto LAB_0012a6a8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
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
LAB_0012a568:
  local_9c = 1;
  call_get_argument_type_info_helper<Vector2_const&>(in_EDX,&local_9c,pPVar5);
  call_get_argument_type_info_helper<int>(in_EDX,&local_9c,pPVar5);
  call_get_argument_type_info_helper<int>(in_EDX,&local_9c,pPVar5);
  call_get_argument_type_info_helper<Color_const&>(in_EDX,&local_9c,pPVar5);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pPVar5;
}



/* void call_get_argument_type_info_helper<Variant>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<Variant>(int param_1,int *param_2,PropertyInfo *param_3)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  long in_FS_OFFSET;
  undefined8 local_80;
  undefined8 local_78;
  long local_70;
  undefined8 local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar4 = *param_2;
  if (iVar4 == param_1) {
    local_60 = (undefined1  [16])0x0;
    local_70 = 0;
    local_78 = 0;
    local_80 = 0;
    local_68 = 0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0x20006;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    if ((StringName::configured != '\0') && (local_70 != 0)) {
      StringName::unref();
    }
    *(undefined4 *)param_3 = (undefined4)local_68;
    if (*(long *)(param_3 + 8) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 8));
      uVar2 = local_60._0_8_;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_60._8_8_;
      local_60 = auVar1 << 0x40;
      *(undefined8 *)(param_3 + 8) = uVar2;
    }
    if (*(long *)(param_3 + 0x10) != local_60._8_8_) {
      StringName::unref();
      uVar2 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8 *)(param_3 + 0x10) = uVar2;
    }
    *(undefined4 *)(param_3 + 0x18) = (undefined4)local_50;
    if (*(long *)(param_3 + 0x20) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 0x20));
      lVar3 = local_48;
      local_48 = 0;
      *(long *)(param_3 + 0x20) = lVar3;
    }
    *(undefined4 *)(param_3 + 0x28) = local_40;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
    iVar4 = *param_2;
  }
  *param_2 = iVar4 + 1;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Rect2, int, Variant>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Rect2,int,Variant>::_gen_argument_type_info(int param_1)

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
    call_get_argument_type_info_helper<Variant>(in_EDX,(int *)&local_70,(PropertyInfo *)&local_68);
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
    goto LAB_0012aad4;
  }
  local_70 = 0;
  local_78 = 0;
  local_68 = &_LC23;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._0_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_78);
  local_80 = 0;
  *puVar5 = 7;
  puVar5[6] = 0;
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar5[10] = 6;
LAB_0012aaff:
    StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_70);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_78);
    puVar5[10] = 6;
    if (puVar5[6] != 0x11) goto LAB_0012aaff;
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_0012aad4:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info_helper<InlineAlignment>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<InlineAlignment>
               (int param_1,int *param_2,PropertyInfo *param_3)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  long in_FS_OFFSET;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  details local_88 [8];
  long local_80;
  char *local_78;
  undefined1 local_70 [16];
  undefined8 local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar4 = *param_2;
  if (iVar4 == param_1) {
    local_90 = 0;
    local_78 = "InlineAlignment";
    local_70._0_8_ = 0xf;
    String::parse_latin1((StrRange *)&local_90);
    godot::details::enum_qualified_name_to_class_info_name(local_88,(String *)&local_90);
    StringName::StringName((StringName *)&local_80,(String *)local_88,false);
    local_70 = (undefined1  [16])0x0;
    local_98 = 0;
    local_a0 = 0;
    local_78 = (char *)0x2;
    local_60 = 0;
    local_58 = 0;
    local_50 = 0x10006;
    StringName::operator=((StringName *)(local_70 + 8),(StringName *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    *(undefined4 *)param_3 = local_78._0_4_;
    if (*(long *)(param_3 + 8) != local_70._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 8));
      uVar2 = local_70._0_8_;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_70._8_8_;
      local_70 = auVar1 << 0x40;
      *(undefined8 *)(param_3 + 8) = uVar2;
    }
    if (*(long *)(param_3 + 0x10) != local_70._8_8_) {
      StringName::unref();
      uVar2 = local_70._8_8_;
      local_70._8_8_ = 0;
      *(undefined8 *)(param_3 + 0x10) = uVar2;
    }
    *(undefined4 *)(param_3 + 0x18) = (undefined4)local_60;
    if (*(long *)(param_3 + 0x20) != local_58) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 0x20));
      lVar3 = local_58;
      local_58 = 0;
      *(long *)(param_3 + 0x20) = lVar3;
    }
    *(undefined4 *)(param_3 + 0x28) = local_50;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    if ((StringName::configured != '\0') && (local_70._8_8_ != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
    iVar4 = *param_2;
  }
  *param_2 = iVar4 + 1;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<bool, Variant, Vector2 const&, InlineAlignment, int,
   float>::_gen_argument_type_info(int) const */

undefined4 *
MethodBindTR<bool,Variant,Vector2_const&,InlineAlignment,int,float>::_gen_argument_type_info
          (int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  uint in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  uint local_c4;
  undefined8 local_c0;
  undefined8 local_b8;
  long local_b0;
  long local_a8;
  undefined1 local_a0 [16];
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined *local_78;
  undefined8 local_70;
  long local_40;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX < 5) {
    local_a0 = (undefined1  [16])0x0;
    local_a8 = 0;
    local_90 = 0;
    local_88 = 0;
    local_80 = 6;
    local_c4 = 0;
    call_get_argument_type_info_helper<Variant>(in_EDX,(int *)&local_c4,(PropertyInfo *)&local_a8);
    call_get_argument_type_info_helper<Vector2_const&>
              (in_EDX,(int *)&local_c4,(PropertyInfo *)&local_a8);
    call_get_argument_type_info_helper<InlineAlignment>
              (in_EDX,(int *)&local_c4,(PropertyInfo *)&local_a8);
    call_get_argument_type_info_helper<int>(in_EDX,(int *)&local_c4,(PropertyInfo *)&local_a8);
    if (in_EDX == local_c4) {
      local_b0 = 0;
      local_b8 = 0;
      local_78 = &_LC23;
      local_70 = 0;
      String::parse_latin1((StrRange *)&local_b8);
      local_c0 = 0;
      PropertyInfo::PropertyInfo
                ((PropertyInfo *)&local_78,3,(CowData<char32_t> *)&local_c0,0,(StrRange *)&local_b8,
                 6,&local_b0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
      if ((StringName::configured != '\0') && (local_b0 != 0)) {
        StringName::unref();
      }
      PropertyInfo::operator=((PropertyInfo *)&local_a8,(PropertyInfo *)&local_78);
      PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
    }
    uVar2 = local_a0._0_8_;
    uVar3 = local_a0._8_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_a0._8_8_;
    local_a0 = auVar1 << 0x40;
    *puVar4 = (undefined4)local_a8;
    *(undefined8 *)(puVar4 + 2) = uVar2;
    *(undefined8 *)(puVar4 + 4) = uVar3;
    puVar4[6] = (undefined4)local_90;
    *(undefined8 *)(puVar4 + 8) = local_88;
    puVar4[10] = local_80;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
    goto LAB_0012ae5c;
  }
  local_a8 = 0;
  local_b0 = 0;
  local_78 = &_LC23;
  local_70 = 0;
  String::parse_latin1((StrRange *)&local_b0);
  local_b8 = 0;
  *puVar4 = 1;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (local_b0 == 0) {
    puVar4[10] = 6;
LAB_0012af57:
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_a8);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_b0);
    puVar4[10] = 6;
    if (puVar4[6] != 0x11) goto LAB_0012af57;
    StringName::StringName((StringName *)&local_78,(String *)(puVar4 + 8),false);
    if (*(undefined **)(puVar4 + 4) == local_78) {
      if ((StringName::configured != '\0') && (local_78 != (undefined *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(undefined **)(puVar4 + 4) = local_78;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  if ((StringName::configured != '\0') && (local_a8 != 0)) {
    StringName::unref();
  }
LAB_0012ae5c:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<bool, Variant, Vector2 const&, InlineAlignment, float>::_gen_argument_type_info(int)
   const */

undefined4 *
MethodBindTR<bool,Variant,Vector2_const&,InlineAlignment,float>::_gen_argument_type_info
          (int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  uint in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  uint local_c4;
  undefined8 local_c0;
  undefined8 local_b8;
  long local_b0;
  long local_a8;
  undefined1 local_a0 [16];
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined *local_78;
  undefined8 local_70;
  long local_40;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX < 4) {
    local_a0 = (undefined1  [16])0x0;
    local_a8 = 0;
    local_90 = 0;
    local_88 = 0;
    local_80 = 6;
    local_c4 = 0;
    call_get_argument_type_info_helper<Variant>(in_EDX,(int *)&local_c4,(PropertyInfo *)&local_a8);
    call_get_argument_type_info_helper<Vector2_const&>
              (in_EDX,(int *)&local_c4,(PropertyInfo *)&local_a8);
    call_get_argument_type_info_helper<InlineAlignment>
              (in_EDX,(int *)&local_c4,(PropertyInfo *)&local_a8);
    if (in_EDX == local_c4) {
      local_b0 = 0;
      local_b8 = 0;
      local_78 = &_LC23;
      local_70 = 0;
      String::parse_latin1((StrRange *)&local_b8);
      local_c0 = 0;
      PropertyInfo::PropertyInfo
                ((PropertyInfo *)&local_78,3,(CowData<char32_t> *)&local_c0,0,(StrRange *)&local_b8,
                 6,&local_b0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
      if ((StringName::configured != '\0') && (local_b0 != 0)) {
        StringName::unref();
      }
      PropertyInfo::operator=((PropertyInfo *)&local_a8,(PropertyInfo *)&local_78);
      PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
    }
    uVar2 = local_a0._0_8_;
    uVar3 = local_a0._8_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_a0._8_8_;
    local_a0 = auVar1 << 0x40;
    *puVar4 = (undefined4)local_a8;
    *(undefined8 *)(puVar4 + 2) = uVar2;
    *(undefined8 *)(puVar4 + 4) = uVar3;
    puVar4[6] = (undefined4)local_90;
    *(undefined8 *)(puVar4 + 8) = local_88;
    puVar4[10] = local_80;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
    goto LAB_0012b15f;
  }
  local_a8 = 0;
  local_b0 = 0;
  local_78 = &_LC23;
  local_70 = 0;
  String::parse_latin1((StrRange *)&local_b0);
  local_b8 = 0;
  *puVar4 = 1;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (local_b0 == 0) {
    puVar4[10] = 6;
LAB_0012b257:
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_a8);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_b0);
    puVar4[10] = 6;
    if (puVar4[6] != 0x11) goto LAB_0012b257;
    StringName::StringName((StringName *)&local_78,(String *)(puVar4 + 8),false);
    if (*(undefined **)(puVar4 + 4) == local_78) {
      if ((StringName::configured != '\0') && (local_78 != (undefined *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(undefined **)(puVar4 + 4) = local_78;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  if ((StringName::configured != '\0') && (local_a8 != 0)) {
    StringName::unref();
  }
LAB_0012b15f:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info_helper<String const&>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<String_const&>
               (int param_1,int *param_2,PropertyInfo *param_3)

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
  if (iVar5 != param_1) goto LAB_0012b3a7;
  local_78 = 0;
  local_68 = &_LC23;
  local_80 = 0;
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
LAB_0012b4a5:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_0012b4a5;
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
LAB_0012b3a7:
  *param_2 = iVar5 + 1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindT<String const&>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<String_const&>::_gen_argument_type_info(int param_1)

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
  call_get_argument_type_info_helper<String_const&>(in_EDX,&local_14,pPVar1);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info_helper<Ref<Font> const&>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<Ref<Font>const&>
               (int param_1,int *param_2,PropertyInfo *param_3)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  long lVar3;
  int iVar4;
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
  iVar4 = *param_2;
  if (iVar4 != param_1) goto LAB_0012b677;
  local_78 = 0;
  local_68 = &_LC231;
  local_80 = 0;
  local_60._0_8_ = 4;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,0x18);
  local_50 = 0x11;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_0012b83d:
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
    if (local_50 == 0x11) goto LAB_0012b83d;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *(undefined4 *)param_3 = local_68._0_4_;
  if (*(long *)(param_3 + 8) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 8));
    uVar2 = local_60._0_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_60._8_8_;
    local_60 = auVar1 << 0x40;
    *(undefined8 *)(param_3 + 8) = uVar2;
  }
  if (*(long *)(param_3 + 0x10) != local_60._8_8_) {
    StringName::unref();
    uVar2 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(param_3 + 0x10) = uVar2;
  }
  *(int *)(param_3 + 0x18) = local_50;
  if (*(long *)(param_3 + 0x20) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 0x20));
    lVar3 = local_48;
    local_48 = 0;
    *(long *)(param_3 + 0x20) = lVar3;
  }
  *(undefined4 *)(param_3 + 0x28) = local_40;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
  iVar4 = *param_2;
LAB_0012b677:
  *param_2 = iVar4 + 1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* void call_get_argument_type_info<String const&, Ref<Font> const&, int, Rect2 const&, String
   const&>(int, PropertyInfo&) */

void call_get_argument_type_info<String_const&,Ref<Font>const&,int,Rect2_const&,String_const&>
               (int param_1,PropertyInfo *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  int iVar3;
  undefined8 uVar4;
  long lVar5;
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
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_9c = 0;
  call_get_argument_type_info_helper<String_const&>(param_1,&local_9c,param_2);
  call_get_argument_type_info_helper<Ref<Font>const&>(param_1,&local_9c,param_2);
  call_get_argument_type_info_helper<int>(param_1,&local_9c,param_2);
  iVar3 = local_9c;
  if (param_1 != local_9c) goto LAB_0012b906;
  local_88 = 0;
  local_90 = 0;
  local_78 = &_LC23;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_70._8_8_;
  local_70 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_90);
  local_98 = 0;
  local_78 = (undefined *)CONCAT44(local_78._4_4_,7);
  local_60 = 0;
  local_58 = 0;
  local_70 = (undefined1  [16])0x0;
  if (local_90 == 0) {
LAB_0012ba28:
    local_50 = 6;
    StringName::operator=((StringName *)(local_70 + 8),(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 6;
    if (local_60 != 0x11) goto LAB_0012ba28;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
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
  *(undefined4 *)param_2 = local_78._0_4_;
  if (*(long *)(param_2 + 8) != local_70._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 8));
    uVar4 = local_70._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_70._8_8_;
    local_70 = auVar2 << 0x40;
    *(undefined8 *)(param_2 + 8) = uVar4;
  }
  if (*(long *)(param_2 + 0x10) != local_70._8_8_) {
    StringName::unref();
    uVar4 = local_70._8_8_;
    local_70._8_8_ = 0;
    *(undefined8 *)(param_2 + 0x10) = uVar4;
  }
  *(int *)(param_2 + 0x18) = local_60;
  if (*(long *)(param_2 + 0x20) != local_58) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 0x20));
    lVar5 = local_58;
    local_58 = 0;
    *(long *)(param_2 + 0x20) = lVar5;
  }
  *(undefined4 *)(param_2 + 0x28) = local_50;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
LAB_0012b906:
  local_9c = iVar3 + 1;
  call_get_argument_type_info_helper<String_const&>(param_1,&local_9c,param_2);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindTR<bool, String const&, Ref<Font> const&, int, Rect2 const&, String
   const&>::_gen_argument_type_info(int) const */

undefined4 *
MethodBindTR<bool,String_const&,Ref<Font>const&,int,Rect2_const&,String_const&>::
_gen_argument_type_info(int param_1)

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
  if (in_EDX < 5) {
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info<String_const&,Ref<Font>const&,int,Rect2_const&,String_const&>
              (in_EDX,(PropertyInfo *)&local_68);
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
    goto LAB_0012bbcc;
  }
  local_70 = 0;
  local_78 = 0;
  local_68 = &_LC23;
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
LAB_0012bcaf:
    StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_70);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_78);
    puVar5[10] = 6;
    if (puVar5[6] != 0x11) goto LAB_0012bcaf;
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_0012bbcc:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info<String const&, Ref<Font> const&, int, String const&, Variant
   const&>(int, PropertyInfo&) */

void call_get_argument_type_info<String_const&,Ref<Font>const&,int,String_const&,Variant_const&>
               (int param_1,PropertyInfo *param_2)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  long lVar3;
  long in_FS_OFFSET;
  int local_74;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  undefined8 local_40;
  long local_38;
  undefined4 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_74 = 0;
  call_get_argument_type_info_helper<String_const&>(param_1,&local_74,param_2);
  call_get_argument_type_info_helper<Ref<Font>const&>(param_1,&local_74,param_2);
  call_get_argument_type_info_helper<int>(param_1,&local_74,param_2);
  call_get_argument_type_info_helper<String_const&>(param_1,&local_74,param_2);
  if (param_1 == local_74) {
    local_60 = 0;
    local_50 = (undefined1  [16])0x0;
    local_68 = 0;
    local_70 = 0;
    local_58 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0x20006;
    StringName::operator=((StringName *)(local_50 + 8),(StringName *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
    }
    *(undefined4 *)param_2 = (undefined4)local_58;
    if (*(long *)(param_2 + 8) != local_50._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 8));
      uVar2 = local_50._0_8_;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_50._8_8_;
      local_50 = auVar1 << 0x40;
      *(undefined8 *)(param_2 + 8) = uVar2;
    }
    if (*(long *)(param_2 + 0x10) != local_50._8_8_) {
      StringName::unref();
      uVar2 = local_50._8_8_;
      local_50._8_8_ = 0;
      *(undefined8 *)(param_2 + 0x10) = uVar2;
    }
    *(undefined4 *)(param_2 + 0x18) = (undefined4)local_40;
    if (*(long *)(param_2 + 0x20) != local_38) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 0x20));
      lVar3 = local_38;
      local_38 = 0;
      *(long *)(param_2 + 0x20) = lVar3;
    }
    *(undefined4 *)(param_2 + 0x28) = local_30;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
    if ((StringName::configured != '\0') && (local_50._8_8_ != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<bool, String const&, Ref<Font> const&, int, String const&, Variant
   const&>::_gen_argument_type_info(int) const */

undefined4 *
MethodBindTR<bool,String_const&,Ref<Font>const&,int,String_const&,Variant_const&>::
_gen_argument_type_info(int param_1)

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
  if (in_EDX < 5) {
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info<String_const&,Ref<Font>const&,int,String_const&,Variant_const&>
              (in_EDX,(PropertyInfo *)&local_68);
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
    goto LAB_0012bf8c;
  }
  local_70 = 0;
  local_78 = 0;
  local_68 = &_LC23;
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
LAB_0012c06f:
    StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_70);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_78);
    puVar5[10] = 6;
    if (puVar5[6] != 0x11) goto LAB_0012c06f;
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_0012bf8c:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* Ref<TextServer>::Ref(Ref<TextServer> const&) */

void Ref<TextServer>::Ref(Ref *param_1)

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
/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<int, Vector2 const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<int,Vector2_const&>::~MethodBindTRC(MethodBindTRC<int,Vector2_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTC<RID, Vector2 const&, Color const&>::~MethodBindTC() */

void __thiscall
MethodBindTC<RID,Vector2_const&,Color_const&>::~MethodBindTC
          (MethodBindTC<RID,Vector2_const&,Color_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTC<RID, Vector2 const&, int, int, Color const&>::~MethodBindTC() */

void __thiscall
MethodBindTC<RID,Vector2_const&,int,int,Color_const&>::~MethodBindTC
          (MethodBindTC<RID,Vector2_const&,int,int,Color_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTC<RID, Vector2 const&, int, Color const&>::~MethodBindTC() */

void __thiscall
MethodBindTC<RID,Vector2_const&,int,Color_const&>::~MethodBindTC
          (MethodBindTC<RID,Vector2_const&,int,Color_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTC<RID, Vector2 const&, int, Color const&, Color const&>::~MethodBindTC() */

void __thiscall
MethodBindTC<RID,Vector2_const&,int,Color_const&,Color_const&>::~MethodBindTC
          (MethodBindTC<RID,Vector2_const&,int,Color_const&,Color_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTC<RID, Vector2 const&, Color const&, Color const&>::~MethodBindTC() */

void __thiscall
MethodBindTC<RID,Vector2_const&,Color_const&,Color_const&>::~MethodBindTC
          (MethodBindTC<RID,Vector2_const&,Color_const&,Color_const&> *this)

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
/* MethodBindTRC<Vector2>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Vector2>::~MethodBindTRC(MethodBindTRC<Vector2> *this)

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
/* MethodBindTRC<Vector2i, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Vector2i,int>::~MethodBindTRC(MethodBindTRC<Vector2i,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Vector2, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Vector2,int>::~MethodBindTRC(MethodBindTRC<Vector2,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Rect2, int, Variant>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Rect2,int,Variant>::~MethodBindTRC(MethodBindTRC<Rect2,int,Variant> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Array, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Array,int>::~MethodBindTRC(MethodBindTRC<Array,int> *this)

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
/* MethodBindTRC<RID>::~MethodBindTRC() */

void __thiscall MethodBindTRC<RID>::~MethodBindTRC(MethodBindTRC<RID> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<RID, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<RID,int>::~MethodBindTRC(MethodBindTRC<RID,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<String>::~MethodBindTRC() */

void __thiscall MethodBindTRC<String>::~MethodBindTRC(MethodBindTRC<String> *this)

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
/* MethodBindTRC<TextServer::OverrunBehavior>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<TextServer::OverrunBehavior>::~MethodBindTRC
          (MethodBindTRC<TextServer::OverrunBehavior> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<TextServer::OverrunBehavior>::~MethodBindT() */

void __thiscall
MethodBindT<TextServer::OverrunBehavior>::~MethodBindT
          (MethodBindT<TextServer::OverrunBehavior> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<BitField<TextServer::JustificationFlag>>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<BitField<TextServer::JustificationFlag>>::~MethodBindTRC
          (MethodBindTRC<BitField<TextServer::JustificationFlag>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<BitField<TextServer::JustificationFlag> >::~MethodBindT() */

void __thiscall
MethodBindT<BitField<TextServer::JustificationFlag>>::~MethodBindT
          (MethodBindT<BitField<TextServer::JustificationFlag>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<BitField<TextServer::LineBreakFlag>>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<BitField<TextServer::LineBreakFlag>>::~MethodBindTRC
          (MethodBindTRC<BitField<TextServer::LineBreakFlag>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<BitField<TextServer::LineBreakFlag> >::~MethodBindT() */

void __thiscall
MethodBindT<BitField<TextServer::LineBreakFlag>>::~MethodBindT
          (MethodBindT<BitField<TextServer::LineBreakFlag>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Vector<float> const&>::~MethodBindT() */

void __thiscall
MethodBindT<Vector<float>const&>::~MethodBindT(MethodBindT<Vector<float>const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<HorizontalAlignment>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<HorizontalAlignment>::~MethodBindTRC(MethodBindTRC<HorizontalAlignment> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<HorizontalAlignment>::~MethodBindT() */

void __thiscall
MethodBindT<HorizontalAlignment>::~MethodBindT(MethodBindT<HorizontalAlignment> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<bool, Variant, Vector2 const&, InlineAlignment, float>::~MethodBindTR() */

void __thiscall
MethodBindTR<bool,Variant,Vector2_const&,InlineAlignment,float>::~MethodBindTR
          (MethodBindTR<bool,Variant,Vector2_const&,InlineAlignment,float> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<bool, Variant, Vector2 const&, InlineAlignment, int, float>::~MethodBindTR() */

void __thiscall
MethodBindTR<bool,Variant,Vector2_const&,InlineAlignment,int,float>::~MethodBindTR
          (MethodBindTR<bool,Variant,Vector2_const&,InlineAlignment,int,float> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<bool, String const&, Ref<Font> const&, int, String const&, Variant
   const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<bool,String_const&,Ref<Font>const&,int,String_const&,Variant_const&>::~MethodBindTR
          (MethodBindTR<bool,String_const&,Ref<Font>const&,int,String_const&,Variant_const&> *this)

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
/* MethodBindTR<bool, String const&, Ref<Font> const&, int, Rect2 const&, String
   const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<bool,String_const&,Ref<Font>const&,int,Rect2_const&,String_const&>::~MethodBindTR
          (MethodBindTR<bool,String_const&,Ref<Font>const&,int,Rect2_const&,String_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Array const&>::~MethodBindT() */

void __thiscall MethodBindT<Array_const&>::~MethodBindT(MethodBindT<Array_const&> *this)

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
/* MethodBindTRC<TextServer::Orientation>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<TextServer::Orientation>::~MethodBindTRC(MethodBindTRC<TextServer::Orientation> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<TextServer::Orientation>::~MethodBindT() */

void __thiscall
MethodBindT<TextServer::Orientation>::~MethodBindT(MethodBindT<TextServer::Orientation> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<TextServer::Direction>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<TextServer::Direction>::~MethodBindTRC(MethodBindTRC<TextServer::Direction> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<TextServer::Direction>::~MethodBindT() */

void __thiscall
MethodBindT<TextServer::Direction>::~MethodBindT(MethodBindT<TextServer::Direction> *this)

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



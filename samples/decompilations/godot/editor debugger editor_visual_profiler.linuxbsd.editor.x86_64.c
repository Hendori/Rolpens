
/* EditorVisualProfiler::_graph_tex_mouse_exit() */

void __thiscall EditorVisualProfiler::_graph_tex_mouse_exit(EditorVisualProfiler *this)

{
  *(undefined4 *)(this + 0xa84) = 0xffffffff;
  CanvasItem::queue_redraw();
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



/* CowData<Color>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Color>::_copy_on_write(CowData<Color> *this)

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
  __n = lVar2 * 0x10;
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EditorVisualProfiler::_get_color_from_signature(StringName const&) const */

undefined1  [16] __thiscall
EditorVisualProfiler::_get_color_from_signature(EditorVisualProfiler *this,StringName *param_1)

{
  long lVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  uint uVar6;
  long in_FS_OFFSET;
  float fVar7;
  float fVar8;
  double dVar9;
  undefined1 auVar10 [16];
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float local_48;
  float fStack_44;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (const::{lambda()#1}::operator()()::sname == '\0') {
    iVar5 = __cxa_guard_acquire(&const::{lambda()#1}::operator()()::sname);
    if (iVar5 != 0) {
      _scs_create((char *)&const::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&const::{lambda()#1}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&const::{lambda()#1}::operator()()::sname);
    }
  }
  Control::get_theme_color
            ((StringName *)this,(StringName *)&const::{lambda()#1}::operator()()::sname);
  if (*(long *)param_1 == 0) {
    uVar6 = StringName::get_empty_hash();
  }
  else {
    uVar6 = *(uint *)(*(long *)param_1 + 0x20);
  }
  fVar4 = _LC14;
  fVar3 = _UNK_00110b88;
  uVar2 = __LC13;
  dVar9 = (double)uVar6 / __LC12;
  fVar7 = (float)Color::get_v();
  fVar8 = (float)Color::get_s();
  Color::set_hsv((float)dVar9,fVar8,fVar7,_LC14);
  if (const::{lambda()#2}::operator()()::sname == '\0') {
    iVar5 = __cxa_guard_acquire(&const::{lambda()#2}::operator()()::sname);
    if (iVar5 != 0) {
      _scs_create((char *)&const::{lambda()#2}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&const::{lambda()#2}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&const::{lambda()#2}::operator()()::sname);
    }
  }
  auVar10 = Control::get_theme_color
                      ((StringName *)this,(StringName *)&const::{lambda()#2}::operator()()::sname);
  local_78 = auVar10._0_4_;
  fStack_74 = auVar10._4_4_;
  fStack_70 = auVar10._8_4_;
  fStack_6c = auVar10._12_4_;
  local_48 = (float)uVar2;
  fStack_44 = (float)((ulong)uVar2 >> 0x20);
  auVar10._4_4_ = (fStack_74 - fStack_44) * _LC17 + fStack_44;
  auVar10._0_4_ = (local_78 - local_48) * _LC17 + local_48;
  auVar10._8_4_ = (fStack_70 - fVar3) * _LC17 + fVar3;
  auVar10._12_4_ = (fStack_6c - fVar4) * _LC17 + fVar4;
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return auVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorVisualProfiler::_notification(int) */

void __thiscall EditorVisualProfiler::_notification(EditorVisualProfiler *this,int param_1)

{
  Ref *pRVar1;
  Object *pOVar2;
  char cVar3;
  int iVar4;
  long in_FS_OFFSET;
  Object *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 < 0x32) {
    if ((param_1 < 10) || ((0x2200000000400U >> ((ulong)(uint)param_1 & 0x3f) & 1) == 0))
    goto LAB_00100590;
  }
  else if (param_1 != 0x7da) goto LAB_00100590;
  pRVar1 = *(Ref **)(this + 0xa10);
  if ((_notification(int)::{lambda()#1}::operator()()::sname == '\0') &&
     (iVar4 = __cxa_guard_acquire(&_notification(int)::{lambda()#1}::operator()()::sname),
     iVar4 != 0)) {
    _scs_create((char *)&_notification(int)::{lambda()#1}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#1}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_notification(int)::{lambda()#1}::operator()()::sname);
  }
  Control::get_editor_theme_icon((StringName *)&local_38);
  Button::set_button_icon(pRVar1);
  if (((local_38 != (Object *)0x0) &&
      (cVar3 = RefCounted::unreference(), pOVar2 = local_38, cVar3 != '\0')) &&
     (cVar3 = predelete_handler(local_38), cVar3 != '\0')) {
    (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
    Memory::free_static(pOVar2,false);
  }
  pRVar1 = *(Ref **)(this + 0xa18);
  if ((_notification(int)::{lambda()#2}::operator()()::sname == '\0') &&
     (iVar4 = __cxa_guard_acquire(&_notification(int)::{lambda()#2}::operator()()::sname),
     iVar4 != 0)) {
    _scs_create((char *)&_notification(int)::{lambda()#2}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#2}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_notification(int)::{lambda()#2}::operator()()::sname);
  }
  Control::get_editor_theme_icon((StringName *)&local_38);
  Button::set_button_icon(pRVar1);
  if (((local_38 != (Object *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) &&
     (cVar3 = predelete_handler(local_38), cVar3 != '\0')) {
    (**(code **)(*(long *)local_38 + 0x140))(local_38);
    Memory::free_static(local_38,false);
  }
LAB_00100590:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EditorVisualProfiler::_get_cursor_index() const */

int __thiscall EditorVisualProfiler::_get_cursor_index(EditorVisualProfiler *this)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  int iVar4;
  char *pcVar5;
  long lVar6;
  long lVar7;
  double dVar8;
  
  lVar6 = (long)*(int *)(this + 0xa80);
  if (*(int *)(this + 0xa80) < 0) {
    return 0;
  }
  lVar1 = *(long *)(this + 0xa78);
  if (lVar1 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = *(long *)(lVar1 + -8);
    if (lVar6 < lVar7) {
      pcVar5 = (char *)(lVar1 + lVar6 * 0x20);
      if (*pcVar5 == '\0') {
        iVar4 = 0;
      }
      else {
        uVar2 = *(ulong *)(pcVar5 + 8);
        dVar8 = (double)Range::get_value();
        iVar4 = *(int *)(this + 0xa80) - (int)((double)uVar2 - dVar8);
        if (iVar4 < 0) {
          if (*(long *)(this + 0xa78) != 0) {
            do {
              iVar4 = iVar4 + (int)*(undefined8 *)(*(long *)(this + 0xa78) + -8);
            } while (iVar4 < 0);
            return iVar4;
          }
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
      }
      return iVar4;
    }
  }
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,lVar6,lVar7,"p_index","size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}



/* EditorVisualProfiler::disable_seeking() */

void __thiscall EditorVisualProfiler::disable_seeking(EditorVisualProfiler *this)

{
  this[0xab0] = (EditorVisualProfiler)0x0;
  CanvasItem::queue_redraw();
  return;
}



/* EditorVisualProfiler::set_enabled(bool) */

void EditorVisualProfiler::set_enabled(bool param_1)

{
  undefined7 in_register_00000039;
  
  BaseButton::set_disabled(SUB81(*(undefined8 *)(CONCAT71(in_register_00000039,param_1) + 0xa10),0))
  ;
  return;
}



/* EditorVisualProfiler::is_profiling() */

void EditorVisualProfiler::is_profiling(void)

{
  BaseButton::is_pressed();
  return;
}



/* EditorVisualProfiler::get_data_as_csv() const */

EditorVisualProfiler * __thiscall EditorVisualProfiler::get_data_as_csv(EditorVisualProfiler *this)

{
  *(undefined8 *)(this + 8) = 0;
  return this;
}



/* EditorVisualProfiler::_autostart_toggled(bool) */

void __thiscall EditorVisualProfiler::_autostart_toggled(EditorVisualProfiler *this,bool param_1)

{
  String *pSVar1;
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  pSVar1 = (String *)EditorSettings::get_singleton();
  Variant::Variant((Variant *)local_48,param_1);
  local_58 = "autostart_visual_profiler";
  local_60 = 0;
  local_50 = 0x19;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "debug_options";
  local_68 = 0;
  local_50 = 0xd;
  String::parse_latin1((StrRange *)&local_68);
  EditorSettings::set_project_metadata(pSVar1,(String *)&local_68,(Variant *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    EditorRunBar::update_profiler_autostart_indicator();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EditorVisualProfiler::_get_time_as_text(float) */

void EditorVisualProfiler::_get_time_as_text(float param_1)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  long in_RSI;
  String *in_RDI;
  Object *pOVar4;
  Object *pOVar5;
  long in_FS_OFFSET;
  CowData<char32_t> local_80 [8];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  CowData<char32_t> local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = OptionButton::get_selected();
  if (iVar3 == 0) {
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"");
    local_58 = 0;
    String::parse_latin1((String *)&local_58,"ms");
    TTR((String *)local_48,(String *)&local_58);
    local_68 = 0;
    String::parse_latin1((String *)&local_68," ");
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
    pcVar1 = *(code **)(*(long *)pOVar4 + 0x7c0);
    local_78 = 0;
    String::parse_latin1((String *)&local_78,"");
    String::num((double)param_1,(int)local_80);
    (*pcVar1)((String *)&local_70,pOVar4,local_80,(String *)&local_78);
    String::operator+((String *)&local_60,(String *)&local_70);
    String::operator+(in_RDI,(String *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    CowData<char32_t>::_unref(local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(pOVar4);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        Memory::free_static(pOVar4,false);
      }
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref(local_48);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  }
  else if (iVar3 == 1) {
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
    pcVar1 = *(code **)(*(long *)pOVar4 + 2000);
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"");
    (*pcVar1)(local_48,pOVar4,(String *)&local_50);
    local_60 = 0;
    String::parse_latin1((String *)&local_60," ");
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
    pcVar1 = *(code **)(*(long *)pOVar5 + 0x7c0);
    local_70 = 0;
    String::parse_latin1((String *)&local_70,"");
    String::num((double)((param_1 * __LC28) / *(float *)(in_RSI + 0xa9c)),
                (int)(CowData<char32_t> *)&local_78);
    (*pcVar1)((String *)&local_68,pOVar5,(CowData<char32_t> *)&local_78,(String *)&local_70);
    String::operator+((String *)&local_58,(String *)&local_68);
    String::operator+(in_RDI,(String *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(pOVar5);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
        Memory::free_static(pOVar5,false);
      }
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    CowData<char32_t>::_unref(local_48);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(pOVar4);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        Memory::free_static(pOVar4,false);
      }
    }
  }
  else {
    *(undefined8 *)in_RDI = 0;
    String::parse_latin1(in_RDI,"err");
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorVisualProfiler::_update_button_text() */

void __thiscall EditorVisualProfiler::_update_button_text(EditorVisualProfiler *this)

{
  Ref *pRVar1;
  char cVar2;
  int iVar3;
  String *pSVar4;
  long in_FS_OFFSET;
  undefined8 local_58;
  undefined8 local_50;
  Object *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  cVar2 = BaseButton::is_pressed();
  if (cVar2 == '\0') {
    pRVar1 = *(Ref **)(this + 0xa10);
    if (_update_button_text()::{lambda()#2}::operator()()::sname == '\0') {
      iVar3 = __cxa_guard_acquire(&_update_button_text()::{lambda()#2}::operator()()::sname);
      if (iVar3 != 0) {
        _scs_create((char *)&_update_button_text()::{lambda()#2}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &_update_button_text()::{lambda()#2}::operator()()::sname,&__dso_handle);
        __cxa_guard_release(&_update_button_text()::{lambda()#2}::operator()()::sname);
      }
    }
    Control::get_editor_theme_icon((StringName *)&local_48);
    Button::set_button_icon(pRVar1);
    if (local_48 != (Object *)0x0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
        cVar2 = predelete_handler(local_48);
        if (cVar2 != '\0') {
          (**(code **)(*(long *)local_48 + 0x140))(local_48);
          Memory::free_static(local_48,false);
        }
      }
    }
    pSVar4 = *(String **)(this + 0xa10);
    local_50 = 0;
    local_48 = (Object *)&_LC22;
    local_40 = 0;
    String::parse_latin1((StrRange *)&local_50);
    local_48 = (Object *)0x109986;
    local_58 = 0;
    local_40 = 5;
    String::parse_latin1((StrRange *)&local_58);
    TTR((String *)&local_48,(String *)&local_58);
  }
  else {
    pRVar1 = *(Ref **)(this + 0xa10);
    if (_update_button_text()::{lambda()#1}::operator()()::sname == '\0') {
      iVar3 = __cxa_guard_acquire(&_update_button_text()::{lambda()#1}::operator()()::sname);
      if (iVar3 != 0) {
        _scs_create((char *)&_update_button_text()::{lambda()#1}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &_update_button_text()::{lambda()#1}::operator()()::sname,&__dso_handle);
        __cxa_guard_release(&_update_button_text()::{lambda()#1}::operator()()::sname);
      }
    }
    Control::get_editor_theme_icon((StringName *)&local_48);
    Button::set_button_icon(pRVar1);
    if (local_48 != (Object *)0x0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
        cVar2 = predelete_handler(local_48);
        if (cVar2 != '\0') {
          (**(code **)(*(long *)local_48 + 0x140))(local_48);
          Memory::free_static(local_48,false);
        }
      }
    }
    pSVar4 = *(String **)(this + 0xa10);
    local_50 = 0;
    local_48 = (Object *)&_LC22;
    local_40 = 0;
    String::parse_latin1((StrRange *)&local_50);
    local_48 = (Object *)&_LC31;
    local_58 = 0;
    local_40 = 4;
    String::parse_latin1((StrRange *)&local_58);
    TTR((String *)&local_48,(String *)&local_58);
  }
  Button::set_text(pSVar4);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorVisualProfiler::set_profiling(bool) */

void EditorVisualProfiler::set_profiling(bool param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined7 in_register_00000039;
  EditorVisualProfiler *this;
  long in_FS_OFFSET;
  Variant *local_78 [2];
  int local_68 [6];
  undefined8 local_50;
  undefined1 local_48 [16];
  long local_30;
  
  this = (EditorVisualProfiler *)CONCAT71(in_register_00000039,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xa10),0));
  _update_button_text(this);
  bVar2 = (bool)BaseButton::is_pressed();
  if ((set_profiling(bool)::{lambda()#1}::operator()()::sname == '\0') &&
     (iVar3 = __cxa_guard_acquire(&set_profiling(bool)::{lambda()#1}::operator()()::sname),
     iVar3 != 0)) {
    _scs_create((char *)&set_profiling(bool)::{lambda()#1}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&set_profiling(bool)::{lambda()#1}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&set_profiling(bool)::{lambda()#1}::operator()()::sname);
  }
  Variant::Variant((Variant *)local_68,bVar2);
  local_50 = 0;
  local_48 = (undefined1  [16])0x0;
  local_78[0] = (Variant *)local_68;
  (**(code **)(*(long *)this + 0xd0))
            (this,&set_profiling(bool)::{lambda()#1}::operator()()::sname,local_78,1);
  if (Variant::needs_deinit[(int)local_50] == '\0') {
    cVar1 = Variant::needs_deinit[local_68[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_68[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EditorVisualProfiler::_graph_tex_draw() [clone .part.0] */

void EditorVisualProfiler::_graph_tex_draw(void)

{
  Vector2 *pVVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  Object *pOVar5;
  char cVar6;
  undefined4 uVar7;
  bool bVar8;
  long lVar9;
  undefined8 in_RDX;
  undefined8 in_RSI;
  StringName *in_RDI;
  long lVar10;
  int iVar11;
  long in_FS_OFFSET;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  double dVar15;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  float extraout_XMM0_Db_03;
  float extraout_XMM0_Db_04;
  float fVar16;
  float fVar17;
  int iVar18;
  undefined1 auVar19 [16];
  Vector2 *local_100;
  Color *local_f8;
  Color *local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  float local_c4;
  Object *local_a8;
  String local_a0 [8];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  ulong local_80;
  Color local_78 [16];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((_graph_tex_draw()::{lambda()#1}::operator()()::sname == '\0') &&
     (iVar18 = __cxa_guard_acquire(&_graph_tex_draw()::{lambda()#1}::operator()()::sname,in_RSI,
                                   in_RDX,&_graph_tex_draw()::{lambda()#1}::operator()()::sname),
     iVar18 != 0)) {
    _scs_create((char *)&_graph_tex_draw()::{lambda()#1}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_graph_tex_draw()::{lambda()#1}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_graph_tex_draw()::{lambda()#1}::operator()()::sname);
  }
  Control::get_theme_font((StringName *)&local_a8,in_RDI);
  if ((_graph_tex_draw()::{lambda()#2}::operator()()::sname == '\0') &&
     (iVar18 = __cxa_guard_acquire(&_graph_tex_draw()::{lambda()#2}::operator()()::sname),
     iVar18 != 0)) {
    _scs_create((char *)&_graph_tex_draw()::{lambda()#2}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_graph_tex_draw()::{lambda()#2}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_graph_tex_draw()::{lambda()#2}::operator()()::sname);
  }
  uVar7 = Control::get_theme_font_size(in_RDI,(StringName *)(SceneStringNames::singleton + 0xa8));
  local_78 = (Color  [16])
             Control::get_theme_color(in_RDI,(StringName *)(SceneStringNames::singleton + 0xb0));
  if (in_RDI[0xab0] == (StringName)0x0) {
    local_c4 = _LC35;
    fVar14 = _LC38;
LAB_00101354:
    local_f0 = (Color *)&local_68;
    local_f8 = local_78;
    local_100 = (Vector2 *)&local_80;
    bVar8 = SUB81(local_58,0);
    if (0.0 < *(float *)(in_RDI + 0xa94)) {
      Control::get_size();
      fVar17 = *(float *)(in_RDI + 0xa9c);
      Control::get_size();
      fVar17 = (extraout_XMM0_Db_03 - (extraout_XMM0_Db_04 * fVar17) / *(float *)(in_RDI + 0xa94)) -
               _LC14;
      fVar12 = (float)Control::get_size();
      uStack_60 = CONCAT44(_LC35,_UNK_00110ba8);
      pVVar1 = *(Vector2 **)(in_RDI + 0xa20);
      local_68 = __LC39;
      iVar18 = (int)fVar17;
      fVar17 = (float)iVar18;
      auVar19 = Color::operator*(local_f8,local_f0);
      local_80 = (ulong)(uint)fVar17 << 0x20;
      local_88 = CONCAT44(fVar17,(float)(int)(fVar12 * local_c4));
      local_58 = auVar19;
      CanvasItem::draw_line(pVVar1,local_100,(Color *)&local_88,fVar14,bVar8);
      local_90 = 0;
      String::parse_latin1((String *)&local_90," ms");
      String::num((double)*(float *)(in_RDI + 0xa9c),(int)(CowData<char32_t> *)&local_98);
      String::operator+(local_a0,(String *)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      uVar2 = *(undefined8 *)(in_RDI + 0xa20);
      local_e8 = __LC41;
      uStack_e0 = _UNK_00110bb8;
      local_68 = __LC41;
      uStack_60 = _UNK_00110bb8;
      auVar19 = Color::operator*(local_f8,local_f0);
      local_58 = auVar19;
      fVar16 = (float)(**(code **)(*(long *)local_a8 + 0x288))(local_a8,local_a0,0,uVar7,3,0,0);
      fVar17 = _LC42;
      local_80 = CONCAT44((float)(iVar18 + -2),((float)(int)(fVar12 * local_c4) - fVar16) - _LC42);
      CanvasItem::draw_string
                (uVar2,(StringName *)&local_a8,local_100,local_a0,0,uVar7,local_58,3,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
    }
    else {
      local_e8 = __LC41;
      uStack_e0 = _UNK_00110bb8;
      fVar17 = _LC42;
    }
    if (0.0 < *(float *)(in_RDI + 0xa98)) {
      Control::get_size();
      fVar12 = *(float *)(in_RDI + 0xa9c);
      Control::get_size();
      fVar16 = (extraout_XMM0_Db - (extraout_XMM0_Db_00 * fVar12) / *(float *)(in_RDI + 0xa98)) -
               _LC14;
      fVar12 = (float)Control::get_size();
      pVVar1 = *(Vector2 **)(in_RDI + 0xa20);
      iVar18 = (int)fVar16;
      uStack_60 = CONCAT44(_LC35,_UNK_00110ba8);
      local_68 = __LC39;
      auVar19 = Color::operator*(local_f8,local_f0);
      local_58 = auVar19;
      uVar13 = Control::get_size();
      local_80 = CONCAT44((float)(int)fVar16,uVar13);
      local_88 = CONCAT44((float)iVar18,(float)(int)(fVar12 * local_c4));
      CanvasItem::draw_line(pVVar1,(Vector2 *)&local_88,(Color *)local_100,fVar14,bVar8);
      local_90 = 0;
      String::parse_latin1((String *)&local_90," ms");
      String::num((double)*(float *)(in_RDI + 0xa9c),(int)(CowData<char32_t> *)&local_98);
      String::operator+(local_a0,(String *)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      uVar2 = *(undefined8 *)(in_RDI + 0xa20);
      local_68 = local_e8;
      uStack_60 = uStack_e0;
      auVar19 = Color::operator*(local_f8,local_f0);
      local_58 = auVar19;
      fVar14 = (float)(**(code **)(*(long *)local_a8 + 0x288))(local_a8,local_a0,0,uVar7,3,0,0);
      local_80 = CONCAT44((float)(iVar18 + -2),
                          ((float)((int)(fVar12 * local_c4) * 2) - fVar14) - fVar17);
      CanvasItem::draw_string
                (uVar2,(StringName *)&local_a8,local_100,local_a0,0,uVar7,local_58,3,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
    }
    uVar2 = *(undefined8 *)(in_RDI + 0xa20);
    local_68 = local_e8;
    uStack_60 = uStack_e0;
    auVar19 = Color::operator*(local_f8,local_f0);
    local_58 = auVar19;
    operator+((char *)&local_90,(String *)"CPU: ");
    fVar14 = (float)(**(code **)(*(long *)local_a8 + 0x220))(local_a8,uVar7);
    pOVar5 = local_a8;
    pcVar3 = *(code **)(*(long *)local_a8 + 0x288);
    local_98 = 0;
    String::parse_latin1((String *)&local_98,"X");
    uVar13 = (*pcVar3)(pOVar5,(CowData<char32_t> *)&local_98,0,uVar7,3,0,0);
    local_80 = CONCAT44(fVar17 + fVar14,uVar13);
    CanvasItem::draw_string
              (uVar2,(StringName *)&local_a8,local_100,(String *)&local_90,0,uVar7,local_58,3,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    uVar2 = *(undefined8 *)(in_RDI + 0xa20);
    local_68 = local_e8;
    uStack_60 = uStack_e0;
    auVar19 = Color::operator*(local_f8,local_f0);
    local_58 = auVar19;
    operator+((char *)&local_90,(String *)"GPU: ");
    fVar14 = (float)(**(code **)(*(long *)local_a8 + 0x220))(local_a8,uVar7);
    pOVar5 = local_a8;
    pcVar3 = *(code **)(*(long *)local_a8 + 0x288);
    local_98 = 0;
    String::parse_latin1((String *)&local_98,"X");
    fVar12 = (float)(*pcVar3)(pOVar5,(CowData<char32_t> *)&local_98,0,uVar7,3,0,0);
    fVar16 = (float)Control::get_size();
    local_80 = CONCAT44(fVar17 + fVar14,local_c4 * fVar16 + fVar12);
    CanvasItem::draw_string
              (uVar2,(StringName *)&local_a8,local_100,(String *)&local_90,0,uVar7,local_58,3,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    if (local_a8 != (Object *)0x0) {
      cVar6 = RefCounted::unreference();
      if (cVar6 != '\0') {
        cVar6 = predelete_handler(local_a8);
        if (cVar6 != '\0') {
          (**(code **)(*(long *)local_a8 + 0x140))(local_a8);
          Memory::free_static(local_a8,false);
        }
      }
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  if (*(long *)(in_RDI + 0xa78) == 0) {
    iVar18 = 0;
  }
  else {
    iVar18 = *(int *)(*(long *)(in_RDI + 0xa78) + -8);
  }
  dVar15 = (double)Range::get_value();
  lVar9 = (long)*(int *)(in_RDI + 0xa80);
  lVar4 = *(long *)(in_RDI + 0xa78);
  if (lVar9 < 0) {
    if (lVar4 != 0) {
      lVar10 = *(long *)(lVar4 + -8);
      goto LAB_00101e29;
    }
  }
  else if (lVar4 != 0) {
    lVar10 = *(long *)(lVar4 + -8);
    if (lVar9 < lVar10) {
      iVar11 = (int)(dVar15 - (double)(ulong)((*(long *)(lVar4 + 8 + lVar9 * 0x20) + 1) -
                                             (long)iVar18));
      if (iVar11 < 0) {
        iVar11 = 0;
      }
      fVar17 = (float)Control::get_size();
      fVar17 = fVar17 * _LC35;
      local_c4 = _LC35;
      local_68 = CONCAT44(_LC14,_LC14);
      uStack_60 = CONCAT44(_LC14,_LC14);
      iVar18 = (iVar11 * (int)fVar17) / iVar18;
      pVVar1 = *(Vector2 **)(in_RDI + 0xa20);
      local_58 = Color::operator*(local_78,(Color *)&local_68);
      Control::get_size();
      fVar14 = _LC38;
      fVar12 = (float)iVar18;
      local_80 = (ulong)(uint)fVar12;
      local_88 = CONCAT44(extraout_XMM0_Db_01,fVar12);
      CanvasItem::draw_line(pVVar1,(Vector2 *)&local_80,(Color *)&local_88,_LC38,SUB81(local_58,0));
      pVVar1 = *(Vector2 **)(in_RDI + 0xa20);
      local_68 = _LC92;
      uStack_60 = _UNK_00110b98;
      auVar19 = Color::operator*(local_78,(Color *)&local_68);
      local_58 = auVar19;
      Control::get_size();
      fVar17 = (float)((int)fVar17 + iVar18);
      local_80 = (ulong)(uint)fVar17;
      local_88 = CONCAT44(extraout_XMM0_Db_02,fVar17);
      CanvasItem::draw_line(pVVar1,(Vector2 *)&local_80,(Color *)&local_88,fVar14,SUB81(local_58,0))
      ;
      goto LAB_00101354;
    }
    goto LAB_00101e29;
  }
  lVar10 = 0;
LAB_00101e29:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar10,"p_index","size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}



/* EditorVisualProfiler::_graph_tex_draw() */

void __thiscall EditorVisualProfiler::_graph_tex_draw(EditorVisualProfiler *this)

{
  if (-1 < *(int *)(this + 0xa80)) {
    _graph_tex_draw();
    return;
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



/* EditorVisualProfiler::set_hardware_info(String const&, String const&) */

void __thiscall
EditorVisualProfiler::set_hardware_info(EditorVisualProfiler *this,String *param_1,String *param_2)

{
  if (*(long *)(this + 0xaa0) != *(long *)param_1) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0xaa0),(CowData *)param_1);
  }
  if (*(long *)(this + 0xaa8) != *(long *)param_2) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0xaa8),(CowData *)param_2);
  }
  CanvasItem::queue_redraw();
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



/* EditorVisualProfiler::_bind_methods() */

void EditorVisualProfiler::_bind_methods(void)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  int *piVar4;
  int *piVar5;
  long lVar6;
  long in_FS_OFFSET;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  long local_108;
  undefined8 local_100;
  char *local_f8;
  undefined8 local_f0;
  undefined4 local_e8 [2];
  undefined8 local_e0;
  char *local_d8;
  int local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  char *local_b8;
  undefined8 local_b0;
  CowData<char32_t> local_a8 [8];
  long lStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78 [2];
  int *local_68;
  undefined8 local_60;
  long local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_108 = 0;
  local_b8 = "";
  local_110 = 0;
  local_b0 = 0;
  String::parse_latin1((StrRange *)&local_110);
  local_b8 = "enable";
  local_118 = 0;
  local_b0 = 6;
  String::parse_latin1((StrRange *)&local_118);
  local_e8[0] = 1;
  local_e0 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_e0,(CowData *)&local_118);
  local_d8 = (char *)0x0;
  local_d0 = 0;
  local_c8 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)&local_110);
  local_c0 = 6;
  if (local_d0 == 0x11) {
    StringName::StringName((StringName *)&local_b8,(String *)&local_c8,false);
    if (local_d8 == local_b8) {
      if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_d8 = local_b8;
    }
  }
  else {
    StringName::operator=((StringName *)&local_d8,(StringName *)&local_108);
  }
  local_100 = 0;
  local_b8 = "enable_profiling";
  local_b0 = 0x10;
  String::parse_latin1((StrRange *)&local_100);
  _local_a8 = (undefined1  [16])0x0;
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = (int *)0x0;
  local_60 = 0;
  local_50 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_100);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)local_e8);
  local_f8 = "EditorVisualProfiler";
  local_120 = 0;
  local_f0 = 0x14;
  String::parse_latin1((StrRange *)&local_120);
  StringName::StringName((StringName *)&local_f8,(String *)&local_120,false);
  ClassDB::add_signal((StringName *)&local_f8,(MethodInfo *)&local_b8);
  if ((StringName::configured != '\0') && (local_f8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
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
  piVar4 = local_68;
  if (local_68 != (int *)0x0) {
    LOCK();
    plVar1 = (long *)(local_68 + -4);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      if (local_68 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = *(long *)(local_68 + -2);
      local_68 = (int *)0x0;
      lVar6 = 0;
      piVar5 = piVar4;
      if (lVar2 != 0) {
        do {
          if (Variant::needs_deinit[*piVar5] != '\0') {
            Variant::_clear_internal();
          }
          lVar6 = lVar6 + 1;
          piVar5 = piVar5 + 6;
        } while (lVar2 != lVar6);
      }
      Memory::free_static(piVar4 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (lStack_a0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref(local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  if ((StringName::configured != '\0') && (local_108 != 0)) {
    StringName::unref();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EditorVisualProfiler::_update_frame(bool) */

void __thiscall EditorVisualProfiler::_update_frame(EditorVisualProfiler *this,bool param_1)

{
  undefined1 (*pauVar1) [16];
  long lVar2;
  void *pvVar3;
  long lVar4;
  code *pcVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  Object *pOVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined1 (*pauVar14) [16];
  uint uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long in_FS_OFFSET;
  float fVar20;
  float fVar21;
  float fVar22;
  Object *local_b0;
  undefined1 (*local_a8) [16];
  float local_90;
  long local_80;
  Object *local_70;
  long local_68;
  Object *local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar7 = _get_cursor_index(this);
  if ((_update_frame(bool)::{lambda()#1}::operator()()::sname == '\0') &&
     (iVar8 = __cxa_guard_acquire(&_update_frame(bool)::{lambda()#1}::operator()()::sname),
     iVar8 != 0)) {
    _scs_create((char *)&_update_frame(bool)::{lambda()#1}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_update_frame(bool)::{lambda()#1}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_update_frame(bool)::{lambda()#1}::operator()()::sname);
  }
  Control::get_editor_theme_icon((StringName *)&local_60);
  local_b0 = local_60;
  if ((local_60 != (Object *)0x0) &&
     (pOVar9 = (Object *)__dynamic_cast(local_60,&Object::typeinfo,&Texture::typeinfo,0),
     local_b0 = pOVar9, pOVar9 != (Object *)0x0)) {
    cVar6 = RefCounted::reference();
    local_b0 = (Object *)0x0;
    if (cVar6 != '\0') {
      local_b0 = pOVar9;
    }
  }
  lVar17 = (long)iVar7;
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_60);
  lVar16 = *(long *)(this + 0xa78);
  if (iVar7 < 0) {
    if (lVar16 == 0) goto LAB_001031c0;
    lVar16 = *(long *)(lVar16 + -8);
  }
  else if (lVar16 == 0) {
LAB_001031c0:
    lVar16 = 0;
  }
  else {
    lVar16 = *(long *)(lVar16 + -8);
    if (lVar17 < lVar16) {
      this[0xa90] = (EditorVisualProfiler)0x1;
      Tree::clear();
      iVar7 = Tree::create_item(*(TreeItem **)(this + 0xa40),0);
      lVar16 = *(long *)(this + 0xa78);
      if (lVar16 == 0) {
        lVar18 = 0;
LAB_00102f91:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar17,lVar18,"p_index","size()","",false
                   ,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      lVar18 = *(long *)(lVar16 + -8);
      if (lVar18 <= lVar17) goto LAB_00102f91;
      lVar16 = lVar16 + lVar17 * 0x20;
      lVar10 = *(long *)(lVar16 + 0x18);
      if (lVar10 != 0) {
        lVar19 = 1;
        pauVar14 = (undefined1 (*) [16])0x0;
        local_80 = 0;
        local_a8 = (undefined1 (*) [16])0x0;
LAB_0010268a:
        if (*(long *)(lVar10 + -8) + -1 <= lVar19) goto LAB_0010281c;
        iVar8 = iVar7;
        if ((pauVar14 != (undefined1 (*) [16])0x0) && (*(int *)pauVar14[1] != 0)) {
          iVar8 = (int)**(undefined8 **)(*pauVar14 + 8);
        }
        local_70 = (Object *)0x0;
        lVar2 = lVar19 * 0x28;
        if (*(long *)(lVar10 + lVar2) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)(lVar10 + lVar2));
          lVar10 = *(long *)(lVar16 + 0x18);
        }
        if (lVar10 != 0) {
          lVar18 = *(long *)(lVar10 + -8);
          lVar17 = lVar19;
          if (lVar18 <= lVar19) goto LAB_00102f91;
          fVar20 = *(float *)(lVar10 + lVar2 + 0x20);
          local_90 = *(float *)(lVar10 + lVar2 + 0x24);
          if (lVar19 < lVar18 + -1) {
            uVar15 = (int)lVar19 + 1;
            lVar17 = (long)(int)uVar15;
            if (lVar18 <= (int)uVar15) goto LAB_00102f91;
            lVar10 = lVar10 + (ulong)uVar15 * 0x28;
            fVar20 = *(float *)(lVar10 + 0x20) - fVar20;
            local_90 = *(float *)(lVar10 + 0x24) - local_90;
          }
          cVar6 = String::begins_with((char *)&local_70);
          lVar10 = local_80;
          if (cVar6 != '\0') {
            uVar11 = Tree::create_item(*(TreeItem **)(this + 0xa40),iVar8);
            if (pauVar14 == (undefined1 (*) [16])0x0) {
              pauVar14 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
              *(undefined4 *)pauVar14[1] = 0;
              *pauVar14 = (undefined1  [16])0x0;
            }
            puVar12 = (undefined8 *)operator_new(0x20,DefaultAllocator::alloc);
            lVar17 = *(long *)(*pauVar14 + 8);
            puVar12[1] = 0;
            *puVar12 = uVar11;
            puVar12[2] = lVar17;
            puVar12[3] = pauVar14;
            if (lVar17 != 0) {
              *(undefined8 **)(lVar17 + 8) = puVar12;
            }
            lVar17 = *(long *)*pauVar14;
            *(undefined8 **)(*pauVar14 + 8) = puVar12;
            if (lVar17 == 0) {
              *(int *)pauVar14[1] = *(int *)pauVar14[1] + 1;
              *(undefined8 **)*pauVar14 = puVar12;
            }
            else {
              *(int *)pauVar14[1] = *(int *)pauVar14[1] + 1;
            }
            if (local_a8 == (undefined1 (*) [16])0x0) {
              local_a8 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
              *(undefined4 *)local_a8[1] = 0;
              *local_a8 = (undefined1  [16])0x0;
            }
            puVar12 = (undefined8 *)operator_new(0x20,DefaultAllocator::alloc);
            puVar12[1] = 0;
            lVar17 = *(long *)(*local_a8 + 8);
            *puVar12 = uVar11;
            puVar12[3] = local_a8;
            puVar12[2] = lVar17;
            if (lVar17 != 0) {
              *(undefined8 **)(lVar17 + 8) = puVar12;
            }
            lVar17 = *(long *)*local_a8;
            *(undefined8 **)(*local_a8 + 8) = puVar12;
            if (lVar17 == 0) {
              *(undefined8 **)*local_a8 = puVar12;
            }
            *(int *)local_a8[1] = *(int *)local_a8[1] + 1;
            String::substr((int)(StringName *)&local_60,(int)(CowData<char32_t> *)&local_70);
            if (local_70 != local_60) {
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
              local_70 = local_60;
              local_60 = (Object *)0x0;
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
            local_60 = (Object *)0x0;
            if (local_70 != (Object *)0x0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)&local_70);
            }
            TreeItem::set_text(uVar11,0,(StringName *)&local_60);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
            Variant::Variant((Variant *)local_58,fVar20);
            TreeItem::set_metadata((int)uVar11,(Variant *)0x1);
            if (Variant::needs_deinit[local_58[0]] != '\0') {
              Variant::_clear_internal();
            }
            Variant::Variant((Variant *)local_58,local_90);
            TreeItem::set_metadata((int)uVar11,(Variant *)0x2);
            if (Variant::needs_deinit[local_58[0]] != '\0') {
              Variant::_clear_internal();
            }
            goto LAB_00102800;
          }
          cVar6 = String::begins_with((char *)&local_70);
          if (cVar6 != '\0') {
            if (pauVar14 == (undefined1 (*) [16])0x0) {
LAB_001030b0:
              pauVar14 = (undefined1 (*) [16])0x0;
            }
            else {
              pvVar3 = *(void **)(*pauVar14 + 8);
              if (pvVar3 != (void *)0x0) {
                if (pauVar14 == *(undefined1 (**) [16])((long)pvVar3 + 0x18)) {
                  lVar17 = *(long *)((long)pvVar3 + 8);
                  if (pvVar3 == *(void **)*pauVar14) {
                    *(long *)*pauVar14 = lVar17;
                  }
                  lVar18 = *(long *)((long)pvVar3 + 0x10);
                  *(long *)(*pauVar14 + 8) = lVar18;
                  if (lVar18 != 0) {
                    *(long *)(lVar18 + 8) = lVar17;
                    lVar17 = *(long *)((long)pvVar3 + 8);
                  }
                  if (lVar17 != 0) {
                    *(long *)(lVar17 + 0x10) = lVar18;
                  }
                  Memory::free_static(pvVar3,false);
                  iVar8 = *(int *)pauVar14[1] + -1;
                  *(int *)pauVar14[1] = iVar8;
                }
                else {
                  _err_print_error("erase","./core/templates/list.h",0xe7,
                                   "Condition \"p_I->data != this\" is true. Returning: false",0,0);
                  iVar8 = *(int *)pauVar14[1];
                }
                if (iVar8 == 0) {
                  Memory::free_static(pauVar14,false);
                  goto LAB_001030b0;
                }
              }
            }
LAB_00102800:
            local_80 = lVar10;
            lVar19 = lVar19 + 1;
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
            lVar10 = *(long *)(lVar16 + 0x18);
            if (lVar10 == 0) goto LAB_0010281c;
            goto LAB_0010268a;
          }
          lVar13 = Tree::create_item(*(TreeItem **)(this + 0xa40),iVar8);
          if ((pauVar14 != (undefined1 (*) [16])0x0) &&
             (puVar12 = *(undefined8 **)*pauVar14, puVar12 != (undefined8 *)0x0)) {
            do {
              uVar11 = *puVar12;
              iVar8 = (int)(Variant *)local_58;
              TreeItem::get_metadata(iVar8);
              fVar21 = Variant::operator_cast_to_float((Variant *)local_58);
              if (Variant::needs_deinit[local_58[0]] != '\0') {
                Variant::_clear_internal();
              }
              TreeItem::get_metadata(iVar8);
              fVar22 = Variant::operator_cast_to_float((Variant *)local_58);
              if (Variant::needs_deinit[local_58[0]] != '\0') {
                Variant::_clear_internal();
              }
              Variant::Variant((Variant *)local_58,fVar21 + fVar20);
              TreeItem::set_metadata((int)uVar11,(Variant *)0x1);
              if (Variant::needs_deinit[local_58[0]] != '\0') {
                Variant::_clear_internal();
              }
              Variant::Variant((Variant *)local_58,fVar22 + local_90);
              TreeItem::set_metadata((int)uVar11,(Variant *)0x2);
              if (Variant::needs_deinit[local_58[0]] != '\0') {
                Variant::_clear_internal();
              }
              puVar12 = (undefined8 *)puVar12[1];
            } while (puVar12 != (undefined8 *)0x0);
          }
          local_68 = 0;
          if ((local_b0 != (Object *)0x0) &&
             (lVar17 = __dynamic_cast(local_b0,&Object::typeinfo,&Texture2D::typeinfo,0),
             lVar17 != 0)) {
            local_60 = (Object *)0x0;
            local_68 = lVar17;
            cVar6 = RefCounted::reference();
            if (cVar6 == '\0') {
              local_68 = 0;
            }
            Ref<Texture2D>::unref((Ref<Texture2D> *)&local_60);
          }
          iVar8 = (int)lVar13;
          TreeItem::set_icon(iVar8,(Ref *)0x0);
          Ref<Texture2D>::unref((Ref<Texture2D> *)&local_68);
          if (*(long *)(lVar16 + 0x18) != 0) {
            lVar18 = *(long *)(*(long *)(lVar16 + 0x18) + -8);
            lVar17 = lVar19;
            if (lVar18 <= lVar19) goto LAB_00102f91;
            TreeItem::set_icon_modulate(iVar8,(Color *)0x0);
            TreeItem::set_selectable(iVar8,false);
            lVar4 = *(long *)(lVar16 + 0x18);
            if (lVar4 == 0) goto LAB_00102f70;
            lVar18 = *(long *)(lVar4 + -8);
            if (lVar18 <= lVar19) goto LAB_00102f91;
            Variant::Variant((Variant *)local_58,(StringName *)(lVar4 + 0x18 + lVar2));
            TreeItem::set_metadata(iVar8,(Variant *)0x0);
            if (Variant::needs_deinit[local_58[0]] != '\0') {
              Variant::_clear_internal();
            }
            lVar4 = *(long *)(lVar16 + 0x18);
            if (lVar4 != 0) {
              lVar18 = *(long *)(lVar4 + -8);
              if (lVar18 <= lVar19) goto LAB_00102f91;
              local_60 = (Object *)0x0;
              if (*(long *)(lVar4 + lVar2) != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar4 + lVar2));
              }
              TreeItem::set_text(lVar13,0,(StringName *)&local_60);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
              _get_time_as_text(fVar20);
              TreeItem::set_text(lVar13,1,(StringName *)&local_60);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
              lVar4 = *(long *)(lVar16 + 0x18);
              if (lVar4 != 0) {
                lVar18 = *(long *)(lVar4 + -8);
                if (lVar18 <= lVar19) goto LAB_00102f91;
                Variant::Variant((Variant *)local_58,*(float *)(lVar4 + 0x20 + lVar2));
                TreeItem::set_metadata(iVar8,(Variant *)0x1);
                if (Variant::needs_deinit[local_58[0]] != '\0') {
                  Variant::_clear_internal();
                }
                _get_time_as_text(local_90);
                TreeItem::set_text(lVar13,2,(StringName *)&local_60);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
                lVar4 = *(long *)(lVar16 + 0x18);
                if (lVar4 != 0) {
                  lVar18 = *(long *)(lVar4 + -8);
                  if (lVar18 <= lVar19) goto LAB_00102f91;
                  Variant::Variant((Variant *)local_58,*(float *)(lVar4 + 0x24 + lVar2));
                  TreeItem::set_metadata(iVar8,(Variant *)0x2);
                  if (Variant::needs_deinit[local_58[0]] != '\0') {
                    Variant::_clear_internal();
                  }
                  lVar4 = *(long *)(lVar16 + 0x18);
                  if (lVar4 != 0) {
                    lVar18 = *(long *)(lVar4 + -8);
                    if (lVar19 < lVar18) {
                      if ((*(long *)(this + 0xa88) == *(long *)(lVar4 + 0x18 + lVar2)) &&
                         (TreeItem::select(iVar8), lVar10 = lVar13, !param_1)) {
                        lVar10 = local_80;
                      }
                      goto LAB_00102800;
                    }
                    goto LAB_00102f91;
                  }
                }
              }
            }
          }
        }
LAB_00102f70:
        lVar18 = 0;
        lVar17 = lVar19;
        goto LAB_00102f91;
      }
      local_a8 = (undefined1 (*) [16])0x0;
      pauVar14 = (undefined1 (*) [16])0x0;
      goto LAB_001031e3;
    }
  }
  _err_print_index_error
            ("_update_frame","editor/debugger/editor_visual_profiler.cpp",0x14e,lVar17,lVar16,
             "cursor_metric","frame_metrics.size()","",false,false);
joined_r0x0010310f:
  if (((local_b0 == (Object *)0x0) || (cVar6 = RefCounted::unreference(), cVar6 == '\0')) ||
     (cVar6 = predelete_handler(local_b0), cVar6 == '\0')) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    (**(code **)(*(long *)local_b0 + 0x140))(local_b0);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Memory::free_static(local_b0,false);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_0010281c:
  if ((local_a8 != (undefined1 (*) [16])0x0) &&
     (puVar12 = *(undefined8 **)*local_a8, puVar12 != (undefined8 *)0x0)) {
    do {
      uVar11 = *puVar12;
      iVar7 = (int)(Variant *)local_58;
      TreeItem::get_metadata(iVar7);
      fVar20 = Variant::operator_cast_to_float((Variant *)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      TreeItem::get_metadata(iVar7);
      fVar21 = Variant::operator_cast_to_float((Variant *)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      _get_time_as_text(fVar20);
      TreeItem::set_text(uVar11,1,(StringName *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      _get_time_as_text(fVar21);
      TreeItem::set_text(uVar11,2,(StringName *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      puVar12 = (undefined8 *)puVar12[1];
    } while (puVar12 != (undefined8 *)0x0);
  }
  if (local_80 != 0) {
    Tree::ensure_cursor_is_visible();
  }
LAB_001031e3:
  this[0xa90] = (EditorVisualProfiler)0x0;
  if (local_a8 != (undefined1 (*) [16])0x0) {
    do {
      while( true ) {
        pvVar3 = *(void **)*local_a8;
        if (pvVar3 == (void *)0x0) {
          if (*(int *)local_a8[1] != 0) {
            _err_print_error("~List","./core/templates/list.h",0x316,
                             "Condition \"_data->size_cache\" is true.",0,0);
            goto LAB_0010324e;
          }
          goto LAB_00103244;
        }
        if (local_a8 != *(undefined1 (**) [16])((long)pvVar3 + 0x18)) break;
        lVar16 = *(long *)((long)pvVar3 + 8);
        lVar17 = *(long *)((long)pvVar3 + 0x10);
        *(long *)*local_a8 = lVar16;
        if (pvVar3 == *(void **)(*local_a8 + 8)) {
          *(long *)(*local_a8 + 8) = lVar17;
        }
        if (lVar17 != 0) {
          *(long *)(lVar17 + 8) = lVar16;
          lVar16 = *(long *)((long)pvVar3 + 8);
        }
        if (lVar16 != 0) {
          *(long *)(lVar16 + 0x10) = lVar17;
        }
        Memory::free_static(pvVar3,false);
        pauVar1 = local_a8 + 1;
        *(int *)*pauVar1 = *(int *)*pauVar1 + -1;
        if (*(int *)*pauVar1 == 0) goto LAB_00103244;
      }
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    } while (*(int *)local_a8[1] != 0);
LAB_00103244:
    Memory::free_static(local_a8,false);
  }
LAB_0010324e:
  if (pauVar14 != (undefined1 (*) [16])0x0) {
    do {
      while( true ) {
        pvVar3 = *(void **)*pauVar14;
        if (pvVar3 == (void *)0x0) {
          if (*(int *)pauVar14[1] != 0) {
            _err_print_error("~List","./core/templates/list.h",0x316,
                             "Condition \"_data->size_cache\" is true.",0,0);
            goto joined_r0x0010310f;
          }
          goto LAB_001032a3;
        }
        if (pauVar14 != *(undefined1 (**) [16])((long)pvVar3 + 0x18)) break;
        lVar16 = *(long *)((long)pvVar3 + 8);
        lVar17 = *(long *)((long)pvVar3 + 0x10);
        *(long *)*pauVar14 = lVar16;
        if (pvVar3 == *(void **)(*pauVar14 + 8)) {
          *(long *)(*pauVar14 + 8) = lVar17;
        }
        if (lVar17 != 0) {
          *(long *)(lVar17 + 8) = lVar16;
          lVar16 = *(long *)((long)pvVar3 + 8);
        }
        if (lVar16 != 0) {
          *(long *)(lVar16 + 0x10) = lVar17;
        }
        Memory::free_static(pvVar3,false);
        pauVar1 = pauVar14 + 1;
        *(int *)*pauVar1 = *(int *)*pauVar1 + -1;
        if (*(int *)*pauVar1 == 0) goto LAB_001032a3;
      }
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    } while (*(int *)pauVar14[1] != 0);
LAB_001032a3:
    Memory::free_static(pauVar14,false);
  }
  goto joined_r0x0010310f;
}



/* EditorVisualProfiler::_cursor_metric_changed(double) */

void EditorVisualProfiler::_cursor_metric_changed(double param_1)

{
  EditorVisualProfiler *in_RDI;
  
  if (in_RDI[0xa90] != (EditorVisualProfiler)0x0) {
    return;
  }
  CanvasItem::queue_redraw();
  _update_frame(in_RDI,false);
  return;
}



/* CowData<EditorVisualProfiler::Metric::Area>::_ref(CowData<EditorVisualProfiler::Metric::Area>
   const&) [clone .part.0] */

void __thiscall
CowData<EditorVisualProfiler::Metric::Area>::_ref
          (CowData<EditorVisualProfiler::Metric::Area> *this,CowData *param_1)

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



/* CowData<EditorVisualProfiler::Metric::Area>::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<EditorVisualProfiler::Metric::Area>::_copy_on_write
          (CowData<EditorVisualProfiler::Metric::Area> *this)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  CowData<char32_t> *this_00;
  ulong uVar5;
  CowData *pCVar6;
  long lVar7;
  
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
  if (lVar1 * 0x28 != 0) {
    uVar5 = lVar1 * 0x28 - 1;
    uVar5 = uVar5 | uVar5 >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    uVar5 = (uVar5 | uVar5 >> 0x20) + 0x11;
  }
  puVar4 = (undefined8 *)Memory::alloc_static(uVar5,false);
  if (puVar4 != (undefined8 *)0x0) {
    lVar7 = 0;
    *puVar4 = 1;
    puVar4[1] = lVar1;
    this_00 = (CowData<char32_t> *)(puVar4 + 2);
    if (lVar1 != 0) {
      do {
        pCVar6 = (CowData *)(this_00 + *(long *)this + (-0x10 - (long)puVar4));
        lVar7 = lVar7 + 1;
        *(undefined8 *)this_00 = 0;
        CowData<char32_t>::_ref(this_00,pCVar6);
        uVar3 = *(undefined8 *)(pCVar6 + 0x10);
        *(undefined8 *)(this_00 + 8) = *(undefined8 *)(pCVar6 + 8);
        *(undefined8 *)(this_00 + 0x10) = uVar3;
        StringName::StringName((StringName *)(this_00 + 0x18),(StringName *)(pCVar6 + 0x18));
        *(undefined8 *)(this_00 + 0x20) = *(undefined8 *)(pCVar6 + 0x20);
        this_00 = this_00 + 0x28;
      } while (lVar1 != lVar7);
    }
    _unref(this);
    *(CowData<char32_t> **)this = (CowData<char32_t> *)(puVar4 + 2);
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* CowData<EditorVisualProfiler::Metric>::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<EditorVisualProfiler::Metric>::_copy_on_write(CowData<EditorVisualProfiler::Metric> *this)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar7 = 0x10;
  if (lVar1 * 0x20 != 0) {
    uVar7 = lVar1 * 0x20 - 1;
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
  lVar9 = 0;
  *puVar5 = 1;
  puVar5[1] = lVar1;
  puVar8 = puVar5 + 2;
  if (lVar1 != 0) {
    do {
      puVar6 = (undefined1 *)(lVar9 * 0x20 + *(long *)this);
      *(undefined1 *)puVar8 = *puVar6;
      uVar2 = *(undefined8 *)(puVar6 + 8);
      puVar8[3] = 0;
      lVar3 = *(long *)(puVar6 + 0x18);
      puVar8[1] = uVar2;
      if (lVar3 != 0) {
        CowData<EditorVisualProfiler::Metric::Area>::_ref
                  ((CowData<EditorVisualProfiler::Metric::Area> *)(puVar8 + 3),
                   (CowData *)(puVar6 + 0x18));
      }
      lVar9 = lVar9 + 1;
      puVar8 = puVar8 + 4;
    } while (lVar1 != lVar9);
  }
  _unref(this);
  *(undefined8 **)this = puVar5 + 2;
  return;
}



/* EditorVisualProfiler::add_frame_metric(EditorVisualProfiler::Metric const&) */

void EditorVisualProfiler::add_frame_metric(Metric *param_1)

{
  CowData<EditorVisualProfiler::Metric> *this;
  undefined1 *puVar1;
  code *pcVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  CowData<char32_t> *pCVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 *in_RSI;
  undefined1 (*pauVar12) [16];
  long lVar13;
  long in_FS_OFFSET;
  bool bVar14;
  undefined8 uVar15;
  undefined8 in_XMM1_Qa;
  undefined8 uVar16;
  String *local_88;
  undefined1 (*local_68) [16];
  int *local_60;
  int *local_58;
  undefined8 local_50;
  int *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar5 = *(int *)(param_1 + 0xa80) + 1;
  lVar8 = (long)iVar5;
  if (*(long *)(param_1 + 0xa78) == 0) {
    lVar9 = 0;
    if (-1 < iVar5) {
      *(undefined4 *)(param_1 + 0xa80) = 0;
      lVar9 = 0;
      lVar8 = 0;
      goto LAB_00103bb8;
    }
LAB_0010380f:
    bVar3 = (byte)(iVar5 >> 0x1f) >> 7;
  }
  else {
    lVar9 = *(long *)(*(long *)(param_1 + 0xa78) + -8);
    if (lVar8 < lVar9) goto LAB_0010380f;
    bVar3 = 0;
    lVar8 = 0;
    iVar5 = 0;
  }
  *(int *)(param_1 + 0xa80) = iVar5;
  if ((lVar8 < lVar9) && (bVar3 == 0)) {
    this = (CowData<EditorVisualProfiler::Metric> *)(param_1 + 0xa78);
    CowData<EditorVisualProfiler::Metric>::_copy_on_write(this);
    lVar8 = *(long *)(param_1 + 0xa78);
    puVar1 = (undefined1 *)(lVar8 + (long)iVar5 * 0x20);
    *puVar1 = *in_RSI;
    *(undefined8 *)(puVar1 + 8) = *(undefined8 *)(in_RSI + 8);
    if (*(long *)(puVar1 + 0x18) != *(long *)(in_RSI + 0x18)) {
      CowData<EditorVisualProfiler::Metric::Area>::_ref
                ((CowData<EditorVisualProfiler::Metric::Area> *)(puVar1 + 0x18),
                 (CowData *)(in_RSI + 0x18));
      lVar8 = *(long *)(param_1 + 0xa78);
    }
    local_68 = (undefined1 (*) [16])0x0;
    lVar9 = (long)*(int *)(param_1 + 0xa80);
    if (-1 < lVar9) {
      lVar13 = 0;
      do {
        if (lVar8 == 0) goto LAB_00103e88;
        if (*(long *)(lVar8 + -8) <= lVar9) goto LAB_00103b3a;
        lVar8 = *(long *)(lVar8 + 0x18 + lVar9 * 0x20);
        if ((lVar8 == 0) || (*(long *)(lVar8 + -8) <= lVar13)) {
          param_1[0xa90] = (Metric)0x1;
          BaseButton::set_disabled(SUB81(*(undefined8 *)(param_1 + 0xa18),0));
          lVar9 = (long)*(int *)(param_1 + 0xa80);
          lVar8 = *(long *)(param_1 + 0xa78);
          if (lVar9 < 0) break;
          if (lVar8 == 0) goto LAB_00103e88;
          if (*(long *)(lVar8 + -8) <= lVar9) goto LAB_00103b3a;
          Range::set_max((double)*(ulong *)(lVar8 + 8 + lVar9 * 0x20));
          lVar9 = (long)*(int *)(param_1 + 0xa80);
          if (lVar9 < 0) {
            lVar8 = *(long *)(param_1 + 0xa78);
            break;
          }
          lVar8 = *(long *)(param_1 + 0xa78);
          if (lVar8 == 0) goto LAB_00103e88;
          if (*(long *)(lVar8 + -8) <= lVar9) goto LAB_00103b3a;
          lVar8 = *(long *)(lVar8 + 8 + lVar9 * 0x20) - *(long *)(lVar8 + -8);
          if (lVar8 < 0) {
            lVar8 = 0;
          }
          Range::set_min((double)lVar8);
          if (param_1[0xab0] == (Metric)0x0) {
            lVar9 = (long)*(int *)(param_1 + 0xa80);
            lVar8 = *(long *)(param_1 + 0xa78);
            if (lVar9 < 0) break;
            if (lVar8 == 0) goto LAB_00103e88;
            if (*(long *)(lVar8 + -8) <= lVar9) goto LAB_00103b3a;
            Range::set_value((double)*(ulong *)(lVar8 + 8 + lVar9 * 0x20));
            if (*(int *)(param_1 + 0xa84) != -1) {
              iVar5 = *(int *)(param_1 + 0xa84) + 1;
              *(int *)(param_1 + 0xa84) = iVar5;
              if (*(long *)(param_1 + 0xa78) == 0) {
                lVar8 = 0;
              }
              else {
                lVar8 = *(long *)(*(long *)(param_1 + 0xa78) + -8);
              }
              if (lVar8 <= iVar5) {
                *(undefined4 *)(param_1 + 0xa84) = 0;
              }
            }
          }
          param_1[0xa90] = (Metric)0x0;
          cVar4 = Timer::is_stopped();
          if (cVar4 != '\0') {
            Timer::set_wait_time(_LC83);
            Timer::start(_LC84);
          }
          cVar4 = Timer::is_stopped();
          if (cVar4 != '\0') {
            Timer::set_wait_time(_LC83);
            Timer::start(_LC84);
          }
          List<String,DefaultAllocator>::~List((List<String,DefaultAllocator> *)&local_68);
          if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return;
        }
        local_60 = (int *)0x0;
        lVar11 = lVar13 * 0x28;
        uVar16 = in_XMM1_Qa;
        if (*(long *)(lVar8 + lVar11) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar8 + lVar11));
          uVar16 = in_XMM1_Qa;
        }
        StringName::StringName((StringName *)&local_48,(String *)&local_60,false);
        uVar15 = _get_color_from_signature((EditorVisualProfiler *)param_1,(StringName *)&local_48);
        lVar8 = (long)*(int *)(param_1 + 0xa80);
        lVar9 = *(long *)(param_1 + 0xa78);
        if (lVar8 < 0) {
LAB_00103b90:
          if (lVar9 == 0) {
LAB_00103d98:
            lVar9 = 0;
          }
          else {
LAB_00103b99:
            lVar9 = *(long *)(lVar9 + -8);
          }
          goto LAB_00103bb8;
        }
        if (lVar9 == 0) goto LAB_00103d98;
        if (*(long *)(lVar9 + -8) <= lVar8) goto LAB_00103b99;
        in_XMM1_Qa = uVar16;
        CowData<EditorVisualProfiler::Metric>::_copy_on_write(this);
        lVar10 = lVar8 * 0x20 + *(long *)(param_1 + 0xa78);
        if (*(long *)(lVar10 + 0x18) == 0) {
LAB_00103d48:
          lVar9 = 0;
          lVar8 = lVar13;
          goto LAB_00103bb8;
        }
        lVar9 = *(long *)(*(long *)(lVar10 + 0x18) + -8);
        lVar8 = lVar13;
        if (lVar9 <= lVar13) goto LAB_00103bb8;
        CowData<EditorVisualProfiler::Metric::Area>::_copy_on_write
                  ((CowData<EditorVisualProfiler::Metric::Area> *)(lVar10 + 0x18));
        bVar14 = StringName::configured != '\0';
        lVar8 = *(long *)(lVar10 + 0x18);
        *(undefined8 *)(lVar8 + 8 + lVar11) = uVar15;
        *(undefined8 *)(lVar8 + 0x10 + lVar11) = uVar16;
        if ((bVar14) && (local_48 != (int *)0x0)) {
          StringName::unref();
        }
        pauVar12 = local_68;
        local_58 = (int *)0x0;
        if (local_60 == (int *)0x0) {
          if ((local_68 != (undefined1 (*) [16])0x0) && (*(int *)local_68[1] != 0)) {
LAB_00103cb0:
            String::operator+((String *)&local_48,*(String **)(*pauVar12 + 8));
            if (local_58 != local_48) {
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
              local_58 = local_48;
              local_48 = (int *)0x0;
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
            piVar6 = local_60;
            goto LAB_00103a35;
          }
        }
        else {
          lVar8 = *(long *)(local_60 + -2);
          if (lVar8 != 0) {
            if (0 < lVar8) {
              if (*local_60 != 0x3c) goto LAB_001039fc;
              if (local_68 == (undefined1 (*) [16])0x0) goto LAB_00103c88;
              pCVar7 = *(CowData<char32_t> **)(*local_68 + 8);
              if (pCVar7 == (CowData<char32_t> *)0x0) goto LAB_00103a0a;
              if (local_68 == *(undefined1 (**) [16])(pCVar7 + 0x18)) {
                lVar8 = *(long *)(pCVar7 + 8);
                if (pCVar7 == *(CowData<char32_t> **)*local_68) {
                  *(long *)*local_68 = lVar8;
                }
                lVar9 = *(long *)(pCVar7 + 0x10);
                *(long *)(*local_68 + 8) = lVar9;
                if (lVar9 != 0) {
                  *(long *)(lVar9 + 8) = lVar8;
                  lVar8 = *(long *)(pCVar7 + 8);
                }
                if (lVar8 != 0) {
                  *(long *)(lVar8 + 0x10) = lVar9;
                }
                CowData<char32_t>::_unref(pCVar7);
                Memory::free_static(pCVar7,false);
                iVar5 = *(int *)pauVar12[1] + -1;
                *(int *)pauVar12[1] = iVar5;
              }
              else {
                _err_print_error("erase","./core/templates/list.h",0xe7,
                                 "Condition \"p_I->data != this\" is true. Returning: false",0,0);
                iVar5 = *(int *)pauVar12[1];
              }
              if (iVar5 != 0) goto LAB_00103cb0;
              Memory::free_static(pauVar12,false);
              pauVar12 = (undefined1 (*) [16])0x0;
              local_68 = (undefined1 (*) [16])0x0;
              piVar6 = local_58;
              if (local_60 != local_58) goto LAB_00103c88;
              goto LAB_00103a35;
            }
LAB_00103d70:
            lVar9 = 0;
            goto LAB_00103b59;
          }
LAB_001039fc:
          if (local_68 == (undefined1 (*) [16])0x0) {
LAB_00103c88:
            pauVar12 = (undefined1 (*) [16])0x0;
          }
          else {
LAB_00103a0a:
            if (*(int *)local_68[1] != 0) goto LAB_00103cb0;
          }
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_60);
          piVar6 = local_60;
LAB_00103a35:
          if ((piVar6 != (int *)0x0) && (lVar8 = *(long *)(piVar6 + -2), lVar8 != 0)) {
            if (lVar8 < 1) goto LAB_00103d70;
            if (*piVar6 == 0x3e) {
              local_50 = 0;
              String::parse_latin1((String *)&local_50,"/");
              String::operator+((String *)&local_48,(String *)&local_58);
              if (pauVar12 == (undefined1 (*) [16])0x0) {
                local_68 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
                *(undefined4 *)local_68[1] = 0;
                *local_68 = (undefined1  [16])0x0;
              }
              pauVar12 = local_68;
              pCVar7 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
              *(undefined1 (*) [16])pCVar7 = (undefined1  [16])0x0;
              *(undefined1 (*) [16])(pCVar7 + 0x10) = (undefined1  [16])0x0;
              CowData<char32_t>::_ref(pCVar7,(CowData *)&local_48);
              lVar8 = *(long *)(*pauVar12 + 8);
              *(undefined8 *)(pCVar7 + 8) = 0;
              *(undefined1 (**) [16])(pCVar7 + 0x18) = pauVar12;
              *(long *)(pCVar7 + 0x10) = lVar8;
              if (lVar8 != 0) {
                *(CowData<char32_t> **)(lVar8 + 8) = pCVar7;
              }
              lVar8 = *(long *)*pauVar12;
              *(CowData<char32_t> **)(*pauVar12 + 8) = pCVar7;
              if (lVar8 == 0) {
                *(CowData<char32_t> **)*pauVar12 = pCVar7;
              }
              *(int *)pauVar12[1] = *(int *)pauVar12[1] + 1;
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
            }
          }
        }
        local_88 = (String *)&local_58;
        StringName::StringName((StringName *)&local_48,local_88,false);
        lVar8 = (long)*(int *)(param_1 + 0xa80);
        lVar9 = *(long *)(param_1 + 0xa78);
        if (lVar8 < 0) goto LAB_00103b90;
        if (lVar9 == 0) goto LAB_00103d98;
        if (*(long *)(lVar9 + -8) <= lVar8) goto LAB_00103b99;
        CowData<EditorVisualProfiler::Metric>::_copy_on_write(this);
        lVar10 = lVar8 * 0x20 + *(long *)(param_1 + 0xa78);
        if (*(long *)(lVar10 + 0x18) == 0) goto LAB_00103d48;
        lVar9 = *(long *)(*(long *)(lVar10 + 0x18) + -8);
        lVar8 = lVar13;
        if (lVar9 <= lVar13) goto LAB_00103bb8;
        CowData<EditorVisualProfiler::Metric::Area>::_copy_on_write
                  ((CowData<EditorVisualProfiler::Metric::Area> *)(lVar10 + 0x18));
        lVar11 = lVar11 + *(long *)(lVar10 + 0x18);
        if (*(int **)(lVar11 + 0x18) == local_48) {
          if ((StringName::configured != '\0') && (local_48 != (int *)0x0)) {
            StringName::unref();
          }
        }
        else {
          StringName::unref();
          *(int **)(lVar11 + 0x18) = local_48;
        }
        lVar13 = lVar13 + 1;
        CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        lVar9 = (long)*(int *)(param_1 + 0xa80);
        lVar8 = *(long *)(param_1 + 0xa78);
      } while (-1 < lVar9);
    }
    if (lVar8 == 0) {
LAB_00103e88:
      lVar8 = 0;
    }
    else {
LAB_00103b3a:
      lVar8 = *(long *)(lVar8 + -8);
    }
LAB_00103b59:
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar8,"p_index","size()","",false,true)
    ;
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
LAB_00103bb8:
  _err_print_index_error
            ("operator[]","./core/templates/vector.h",0x38,lVar8,lVar9,"p_index",
             "((Vector<T> *)(this))->_cowdata.size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<EditorVisualProfiler::Metric>::resize<false>(long) [clone .isra.0] */

void __thiscall
CowData<EditorVisualProfiler::Metric>::resize<false>
          (CowData<EditorVisualProfiler::Metric> *this,long param_1)

{
  code *pcVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  char *pcVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return;
  }
  if (*(long *)this == 0) {
    if (param_1 == 0) {
      return;
    }
    _copy_on_write(this);
    lVar5 = 0;
    lVar10 = 0;
  }
  else {
    lVar5 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar5) {
      return;
    }
    if (param_1 == 0) {
      _unref(this);
      return;
    }
    _copy_on_write(this);
    lVar10 = lVar5 * 0x20;
    if (lVar10 != 0) {
      uVar11 = lVar10 - 1U | lVar10 - 1U >> 1;
      uVar11 = uVar11 | uVar11 >> 2;
      uVar11 = uVar11 | uVar11 >> 4;
      uVar11 = uVar11 | uVar11 >> 8;
      uVar11 = uVar11 | uVar11 >> 0x10;
      lVar10 = (uVar11 | uVar11 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x20 != 0) {
    uVar11 = param_1 * 0x20 - 1;
    uVar11 = uVar11 | uVar11 >> 1;
    uVar11 = uVar11 | uVar11 >> 2;
    uVar11 = uVar11 | uVar11 >> 4;
    uVar11 = uVar11 | uVar11 >> 8;
    uVar11 = uVar11 | uVar11 >> 0x10;
    uVar11 = uVar11 | uVar11 >> 0x20;
    lVar12 = uVar11 + 1;
    if (lVar12 != 0) {
      uVar9 = param_1;
      if (param_1 <= lVar5) {
        while( true ) {
          lVar5 = *(long *)this;
          if (lVar5 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          if (*(ulong *)(lVar5 + -8) <= uVar9) break;
          CowData<EditorVisualProfiler::Metric::Area>::_unref
                    ((CowData<EditorVisualProfiler::Metric::Area> *)(lVar5 + 0x18 + uVar9 * 0x20));
          uVar9 = uVar9 + 1;
        }
        if (lVar12 != lVar10) {
          iVar2 = _realloc(this,lVar12);
          if (iVar2 != 0) {
            return;
          }
          lVar5 = *(long *)this;
          if (lVar5 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
        }
        *(long *)(lVar5 + -8) = param_1;
        return;
      }
      if (lVar12 == lVar10) {
LAB_00104383:
        puVar7 = *(undefined8 **)this;
        if (puVar7 == (undefined8 *)0x0) {
          FUN_00109b74();
          return;
        }
        lVar5 = puVar7[-1];
        if (param_1 <= lVar5) goto LAB_001042dc;
      }
      else {
        if (lVar5 != 0) {
          iVar2 = _realloc(this,lVar12);
          if (iVar2 != 0) {
            return;
          }
          goto LAB_00104383;
        }
        puVar3 = (undefined8 *)Memory::alloc_static(uVar11 + 0x11,false);
        if (puVar3 == (undefined8 *)0x0) {
          uVar8 = 0x171;
          pcVar6 = "Parameter \"mem_new\" is null.";
          goto LAB_00104402;
        }
        puVar7 = puVar3 + 2;
        *puVar3 = 1;
        puVar3[1] = 0;
        *(undefined8 **)this = puVar7;
        lVar5 = 0;
      }
      puVar3 = puVar7 + lVar5 * 4;
      do {
        *(undefined1 *)puVar3 = 0;
        puVar4 = puVar3 + 4;
        puVar3[1] = 0;
        puVar3[3] = 0;
        puVar3 = puVar4;
      } while (puVar4 != puVar7 + param_1 * 4);
LAB_001042dc:
      puVar7[-1] = param_1;
      return;
    }
  }
  uVar8 = 0x16a;
  pcVar6 = 
  "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
  ;
LAB_00104402:
  _err_print_error("resize","./core/templates/cowdata.h",uVar8,pcVar6,0,0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EditorVisualProfiler::EditorVisualProfiler() */

void __thiscall EditorVisualProfiler::EditorVisualProfiler(EditorVisualProfiler *this)

{
  char cVar1;
  long *plVar2;
  code *pcVar3;
  undefined8 uVar4;
  StringName *pSVar5;
  int iVar6;
  int iVar7;
  BoxContainer *this_00;
  FlowContainer *this_01;
  Button *pBVar8;
  CheckBox *pCVar9;
  String *pSVar10;
  BoxContainer *pBVar11;
  Label *pLVar12;
  OptionButton *this_02;
  CallableCustom *pCVar13;
  SpinBox *this_03;
  SplitContainer *this_04;
  Tree *this_05;
  TextureRect *this_06;
  Timer *pTVar14;
  long in_FS_OFFSET;
  float fVar15;
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
  long local_c0;
  long local_b8 [2];
  long local_a8 [2];
  Variant *local_98 [4];
  ulong local_78 [3];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined8 extraout_XMM0_Qb_03;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  BoxContainer::BoxContainer((BoxContainer *)this,true);
  this[0xa0c] = (EditorVisualProfiler)0x1;
  *(undefined ***)this = &PTR__initialize_classv_001102c8;
  uVar4 = _LC92;
  *(undefined8 *)(this + 0xa68) = 0;
  *(undefined8 *)(this + 0xa78) = 0;
  *(undefined8 *)(this + 0xa80) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0xa88) = 0;
  this[0xa90] = (EditorVisualProfiler)0x0;
  *(undefined8 *)(this + 0xa94) = uVar4;
  *(undefined4 *)(this + 0xa9c) = 0x41855555;
  this[0xab0] = (EditorVisualProfiler)0x0;
  *(undefined1 (*) [16])(this + 0xa10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa20) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa38) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa48) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa58) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xaa0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xab8) = (undefined1  [16])0x0;
  this_00 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(this_00,false);
  this_00[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)this_00 = &PTR__initialize_classv_0010fbd8;
  postinitialize_handler((Object *)this_00);
  auVar16._0_8_ = EditorScale::get_scale();
  auVar16._8_8_ = extraout_XMM0_Qb;
  auVar17._4_12_ = auVar16._4_12_;
  auVar17._0_4_ = (float)auVar16._0_8_ * __LC94;
  if (EditorVisualProfiler()::{lambda()#1}::operator()()::sname == '\0') {
    iVar7 = __cxa_guard_acquire(auVar17._0_8_,
                                &EditorVisualProfiler()::{lambda()#1}::operator()()::sname);
    if (iVar7 != 0) {
      _scs_create((char *)&EditorVisualProfiler()::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &EditorVisualProfiler()::{lambda()#1}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&EditorVisualProfiler()::{lambda()#1}::operator()()::sname);
    }
  }
  Control::add_theme_constant_override((StringName *)this_00,0x107f80);
  Node::add_child(this,this_00,0,0);
  this_01 = (FlowContainer *)operator_new(0xa28,"");
  FlowContainer::FlowContainer(this_01,false);
  postinitialize_handler((Object *)this_01);
  Control::set_h_size_flags(this_01,3);
  auVar18._0_8_ = EditorScale::get_scale();
  auVar18._8_8_ = extraout_XMM0_Qb_00;
  auVar19._4_12_ = auVar18._4_12_;
  auVar19._0_4_ = (float)auVar18._0_8_ * __LC94;
  if (EditorVisualProfiler()::{lambda()#2}::operator()()::sname == '\0') {
    iVar7 = __cxa_guard_acquire(auVar19._0_8_,
                                &EditorVisualProfiler()::{lambda()#2}::operator()()::sname);
    if (iVar7 != 0) {
      _scs_create((char *)&EditorVisualProfiler()::{lambda()#2}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &EditorVisualProfiler()::{lambda()#2}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&EditorVisualProfiler()::{lambda()#2}::operator()()::sname);
    }
  }
  Control::add_theme_constant_override((StringName *)this_01,0x107f70);
  auVar20._0_8_ = EditorScale::get_scale();
  auVar20._8_8_ = extraout_XMM0_Qb_01;
  auVar21._4_12_ = auVar20._4_12_;
  auVar21._0_4_ = (float)auVar20._0_8_ + (float)auVar20._0_8_;
  if (EditorVisualProfiler()::{lambda()#3}::operator()()::sname == '\0') {
    iVar7 = __cxa_guard_acquire(auVar21._0_8_,
                                &EditorVisualProfiler()::{lambda()#3}::operator()()::sname);
    if (iVar7 != 0) {
      _scs_create((char *)&EditorVisualProfiler()::{lambda()#3}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &EditorVisualProfiler()::{lambda()#3}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&EditorVisualProfiler()::{lambda()#3}::operator()()::sname);
    }
  }
  Control::add_theme_constant_override((StringName *)this_01,0x107f60);
  Node::add_child(this_00,this_01,0,0);
  pBVar8 = (Button *)operator_new(0xc10,"");
  local_a8[0] = 0;
  Button::Button(pBVar8,(String *)local_a8);
  postinitialize_handler((Object *)pBVar8);
  *(Button **)(this + 0xa10) = pBVar8;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  BaseButton::set_toggle_mode(SUB81(*(undefined8 *)(this + 0xa10),0));
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xa10),0));
  pSVar10 = *(String **)(this + 0xa10);
  local_a8[0] = 0;
  String::parse_latin1((String *)local_a8,"");
  local_b8[0] = 0;
  String::parse_latin1((String *)local_b8,"Start");
  TTR((String *)&local_c0,(String *)local_b8);
  Button::set_text(pSVar10);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  plVar2 = *(long **)(this + 0xa10);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<EditorVisualProfiler>
            ((EditorVisualProfiler *)local_a8,(char *)this,
             (_func_void *)"&EditorVisualProfiler::_activate_pressed");
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x238,(CowData<char32_t> *)local_a8,0);
  Callable::~Callable((Callable *)local_a8);
  Node::add_child(this_01,*(undefined8 *)(this + 0xa10),0,0);
  pBVar8 = (Button *)operator_new(0xc10,"");
  local_a8[0] = 0;
  Button::Button(pBVar8,(String *)local_a8);
  postinitialize_handler((Object *)pBVar8);
  *(Button **)(this + 0xa18) = pBVar8;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  pSVar10 = *(String **)(this + 0xa18);
  local_a8[0] = 0;
  String::parse_latin1((String *)local_a8,"");
  local_b8[0] = 0;
  String::parse_latin1((String *)local_b8,"Clear");
  TTR((String *)&local_c0,(String *)local_b8);
  Button::set_text(pSVar10);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xa18),0));
  plVar2 = *(long **)(this + 0xa18);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<EditorVisualProfiler>
            ((EditorVisualProfiler *)local_a8,(char *)this,
             (_func_void *)"&EditorVisualProfiler::_clear_pressed");
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x238,(CowData<char32_t> *)local_a8,0);
  Callable::~Callable((Callable *)local_a8);
  Node::add_child(this_01,*(undefined8 *)(this + 0xa18),0,0);
  pCVar9 = (CheckBox *)operator_new(0xc60,"");
  local_a8[0] = 0;
  CheckBox::CheckBox(pCVar9,(String *)local_a8);
  postinitialize_handler((Object *)pCVar9);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  local_a8[0] = 0;
  String::parse_latin1((String *)local_a8,"");
  local_b8[0] = 0;
  String::parse_latin1((String *)local_b8,"Autostart");
  TTR((String *)&local_c0,(String *)local_b8);
  Button::set_text((String *)pCVar9);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  pSVar10 = (String *)EditorSettings::get_singleton();
  Variant::Variant((Variant *)local_78,false);
  local_a8[0] = 0;
  String::parse_latin1((String *)local_a8,"autostart_visual_profiler");
  local_b8[0] = 0;
  String::parse_latin1((String *)local_b8,"debug_options");
  EditorSettings::get_project_metadata((String *)local_98,pSVar10,(Variant *)local_b8);
  Variant::operator_cast_to_bool((Variant *)local_98);
  BaseButton::set_pressed(SUB81(pCVar9,0));
  if (Variant::needs_deinit[(int)local_98[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  if (Variant::needs_deinit[(int)local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  pcVar3 = *(code **)(*(long *)pCVar9 + 0x108);
  create_custom_callable_function_pointer<EditorVisualProfiler,bool>
            ((EditorVisualProfiler *)local_a8,(char *)this,
             (_func_void_bool *)"&EditorVisualProfiler::_autostart_toggled");
  (*pcVar3)(pCVar9,SceneStringNames::singleton + 0x248,(CowData<char32_t> *)local_a8,0);
  Callable::~Callable((Callable *)local_a8);
  Node::add_child(this_01,pCVar9,0,0);
  pBVar11 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar11,false);
  pBVar11[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar11 = &PTR__initialize_classv_0010fbd8;
  postinitialize_handler((Object *)pBVar11);
  auVar22._0_8_ = EditorScale::get_scale();
  auVar22._8_8_ = extraout_XMM0_Qb_02;
  auVar23._4_12_ = auVar22._4_12_;
  auVar23._0_4_ = (float)auVar22._0_8_ + (float)auVar22._0_8_;
  if (EditorVisualProfiler()::{lambda()#4}::operator()()::sname == '\0') {
    iVar7 = __cxa_guard_acquire(auVar23._0_8_,
                                &EditorVisualProfiler()::{lambda()#4}::operator()()::sname);
    if (iVar7 != 0) {
      _scs_create((char *)&EditorVisualProfiler()::{lambda()#4}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &EditorVisualProfiler()::{lambda()#4}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&EditorVisualProfiler()::{lambda()#4}::operator()()::sname);
    }
  }
  Control::add_theme_constant_override((StringName *)pBVar11,0x107f50);
  Node::add_child(this_01,pBVar11,0,0);
  pLVar12 = (Label *)operator_new(0xad8,"");
  local_a8[0] = 0;
  String::parse_latin1((String *)local_a8,"");
  local_b8[0] = 0;
  String::parse_latin1((String *)local_b8,"Measure:");
  TTR((String *)&local_c0,(String *)local_b8);
  Label::Label(pLVar12,(String *)&local_c0);
  postinitialize_handler((Object *)pLVar12);
  Node::add_child(pBVar11,pLVar12,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  this_02 = (OptionButton *)operator_new(0xd00,"");
  local_a8[0] = 0;
  OptionButton::OptionButton(this_02,(String *)local_a8);
  postinitialize_handler((Object *)this_02);
  *(OptionButton **)(this + 0xa60) = this_02;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  pSVar10 = *(String **)(this + 0xa60);
  local_a8[0] = 0;
  String::parse_latin1((String *)local_a8,"");
  local_b8[0] = 0;
  String::parse_latin1((String *)local_b8,"Frame Time (ms)");
  TTR((String *)&local_c0,(String *)local_b8);
  iVar7 = (int)(String *)&local_c0;
  OptionButton::add_item(pSVar10,iVar7);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  pSVar10 = *(String **)(this + 0xa60);
  local_a8[0] = 0;
  String::parse_latin1((String *)local_a8,"");
  local_b8[0] = 0;
  String::parse_latin1((String *)local_b8,"Frame %");
  TTR((String *)&local_c0,(String *)local_b8);
  OptionButton::add_item(pSVar10,iVar7);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  plVar2 = *(long **)(this + 0xa60);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  pCVar13 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar13);
  *(EditorVisualProfiler **)(pCVar13 + 0x28) = this;
  *(undefined1 (*) [16])(pCVar13 + 0x30) = (undefined1  [16])0x0;
  *(undefined **)(pCVar13 + 0x20) = &_LC22;
  *(undefined ***)pCVar13 = &PTR_hash_00110760;
  *(undefined8 *)(pCVar13 + 0x40) = 0;
  uVar4 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(pCVar13 + 0x10) = 0;
  *(undefined8 *)(pCVar13 + 0x30) = uVar4;
  *(code **)(pCVar13 + 0x38) = _combo_changed;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar13,(int)pCVar13 + 0x28);
  *(char **)(pCVar13 + 0x20) = "EditorVisualProfiler::_combo_changed";
  Callable::Callable((Callable *)local_a8,pCVar13);
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x260,(CowData<char32_t> *)local_a8,0);
  Callable::~Callable((Callable *)local_a8);
  Node::add_child(pBVar11,*(undefined8 *)(this + 0xa60),0,0);
  pCVar9 = (CheckBox *)operator_new(0xc60,"");
  local_a8[0] = 0;
  String::parse_latin1((String *)local_a8,"");
  local_b8[0] = 0;
  String::parse_latin1((String *)local_b8,"Fit to Frame");
  TTR((String *)&local_c0,(String *)local_b8);
  CheckBox::CheckBox(pCVar9,(String *)&local_c0);
  postinitialize_handler((Object *)pCVar9);
  *(CheckBox **)(this + 0xa50) = pCVar9;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xa50),0));
  Node::add_child(this_01,*(undefined8 *)(this + 0xa50),0,0);
  plVar2 = *(long **)(this + 0xa50);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<EditorVisualProfiler>
            ((EditorVisualProfiler *)local_a8,(char *)this,
             (_func_void *)"&EditorVisualProfiler::_update_plot");
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x238,(CowData<char32_t> *)local_a8,0);
  Callable::~Callable((Callable *)local_a8);
  pCVar9 = (CheckBox *)operator_new(0xc60,"");
  local_a8[0] = 0;
  String::parse_latin1((String *)local_a8,"");
  local_b8[0] = 0;
  String::parse_latin1((String *)local_b8,"Linked");
  TTR((String *)&local_c0,(String *)local_b8);
  CheckBox::CheckBox(pCVar9,(String *)&local_c0);
  postinitialize_handler((Object *)pCVar9);
  *(CheckBox **)(this + 0xa58) = pCVar9;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xa58),0));
  Node::add_child(this_01,*(undefined8 *)(this + 0xa58),0,0);
  plVar2 = *(long **)(this + 0xa58);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<EditorVisualProfiler>
            ((EditorVisualProfiler *)local_a8,(char *)this,
             (_func_void *)"&EditorVisualProfiler::_update_plot");
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x238,(CowData<char32_t> *)local_a8,0);
  Callable::~Callable((Callable *)local_a8);
  pBVar11 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar11,false);
  pBVar11[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar11 = &PTR__initialize_classv_0010fbd8;
  postinitialize_handler((Object *)pBVar11);
  auVar24._0_8_ = EditorScale::get_scale();
  auVar24._8_8_ = extraout_XMM0_Qb_03;
  auVar25._4_12_ = auVar24._4_12_;
  auVar25._0_4_ = (float)auVar24._0_8_ + (float)auVar24._0_8_;
  if (EditorVisualProfiler()::{lambda()#5}::operator()()::sname == '\0') {
    iVar7 = __cxa_guard_acquire(auVar25._0_8_,
                                &EditorVisualProfiler()::{lambda()#5}::operator()()::sname);
    if (iVar7 != 0) {
      _scs_create((char *)&EditorVisualProfiler()::{lambda()#5}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &EditorVisualProfiler()::{lambda()#5}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&EditorVisualProfiler()::{lambda()#5}::operator()()::sname);
    }
  }
  Control::add_theme_constant_override((StringName *)pBVar11,0x107f40);
  Control::set_v_size_flags(pBVar11,0);
  Node::add_child(this_00,pBVar11,0,0);
  pLVar12 = (Label *)operator_new(0xad8,"");
  local_a8[0] = 0;
  String::parse_latin1((String *)local_a8,"");
  local_b8[0] = 0;
  String::parse_latin1((String *)local_b8,"Frame #:");
  TTR((String *)&local_c0,(String *)local_b8);
  Label::Label(pLVar12,(String *)&local_c0);
  postinitialize_handler((Object *)pLVar12);
  Node::add_child(pBVar11,pLVar12,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  this_03 = (SpinBox *)operator_new(0xba8,"");
  SpinBox::SpinBox(this_03);
  postinitialize_handler((Object *)this_03);
  *(SpinBox **)(this + 0xa68) = this_03;
  Control::set_h_size_flags(this_03,1);
  Node::add_child(pBVar11,*(undefined8 *)(this + 0xa68),0,0);
  plVar2 = *(long **)(this + 0xa68);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  pCVar13 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar13);
  *(EditorVisualProfiler **)(pCVar13 + 0x28) = this;
  *(undefined1 (*) [16])(pCVar13 + 0x30) = (undefined1  [16])0x0;
  *(undefined **)(pCVar13 + 0x20) = &_LC22;
  *(undefined ***)pCVar13 = &PTR_hash_001107f0;
  *(undefined8 *)(pCVar13 + 0x40) = 0;
  uVar4 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(pCVar13 + 0x10) = 0;
  *(undefined8 *)(pCVar13 + 0x30) = uVar4;
  *(code **)(pCVar13 + 0x38) = _cursor_metric_changed;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar13,(int)pCVar13 + 0x28);
  *(char **)(pCVar13 + 0x20) = "EditorVisualProfiler::_cursor_metric_changed";
  Callable::Callable((Callable *)local_a8,pCVar13);
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x280,(CowData<char32_t> *)local_a8,0);
  Callable::~Callable((Callable *)local_a8);
  this_04 = (SplitContainer *)operator_new(0xa70,"");
  SplitContainer::SplitContainer(this_04,false);
  this_04[0xa68] = (SplitContainer)0x1;
  *(undefined ***)this_04 = &PTR__initialize_classv_0010ff50;
  postinitialize_handler((Object *)this_04);
  *(SplitContainer **)(this + 0xa48) = this_04;
  Node::add_child(this,this_04,0,0);
  Control::set_v_size_flags(*(undefined8 *)(this + 0xa48),3);
  this_05 = (Tree *)operator_new(0xdc8,"");
  Tree::Tree(this_05);
  postinitialize_handler((Object *)this_05);
  *(Tree **)(this + 0xa40) = this_05;
  fVar15 = (float)EditorScale::get_scale();
  local_78[0] = CONCAT44(fVar15 * _LC111._4_4_,fVar15 * (float)_LC111);
  Control::set_custom_minimum_size((Vector2 *)this_05);
  Tree::set_hide_folding(SUB81(*(undefined8 *)(this + 0xa40),0));
  Node::add_child(*(undefined8 *)(this + 0xa48),*(undefined8 *)(this + 0xa40),0,0);
  Tree::set_hide_root(SUB81(*(undefined8 *)(this + 0xa40),0));
  Tree::set_columns((int)*(undefined8 *)(this + 0xa40));
  Tree::set_column_titles_visible(SUB81(*(undefined8 *)(this + 0xa40),0));
  uVar4 = *(undefined8 *)(this + 0xa40);
  local_a8[0] = 0;
  String::parse_latin1((String *)local_a8,"");
  local_b8[0] = 0;
  String::parse_latin1((String *)local_b8,"Name");
  TTR((String *)&local_c0,(String *)local_b8);
  Tree::set_column_title((int)uVar4,(String *)0x0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  Tree::set_column_expand((int)*(undefined8 *)(this + 0xa40),false);
  Tree::set_column_clip_content((int)*(undefined8 *)(this + 0xa40),false);
  Tree::set_column_custom_minimum_width((int)*(undefined8 *)(this + 0xa40),0);
  uVar4 = *(undefined8 *)(this + 0xa40);
  local_a8[0] = 0;
  String::parse_latin1((String *)local_a8,"");
  local_b8[0] = 0;
  String::parse_latin1((String *)local_b8,"CPU");
  TTR((String *)&local_c0,(String *)local_b8);
  Tree::set_column_title((int)uVar4,(String *)0x1);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  Tree::set_column_expand((int)*(undefined8 *)(this + 0xa40),true);
  Tree::set_column_clip_content((int)*(undefined8 *)(this + 0xa40),true);
  uVar4 = *(undefined8 *)(this + 0xa40);
  EditorScale::get_scale();
  Tree::set_column_custom_minimum_width((int)uVar4,1);
  uVar4 = *(undefined8 *)(this + 0xa40);
  local_a8[0] = 0;
  String::parse_latin1((String *)local_a8,"");
  local_b8[0] = 0;
  String::parse_latin1((String *)local_b8,"GPU");
  TTR((String *)&local_c0,(String *)local_b8);
  Tree::set_column_title((int)uVar4,(String *)0x2);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  Tree::set_column_expand((int)*(undefined8 *)(this + 0xa40),true);
  Tree::set_column_clip_content((int)*(undefined8 *)(this + 0xa40),true);
  uVar4 = *(undefined8 *)(this + 0xa40);
  EditorScale::get_scale();
  Tree::set_column_custom_minimum_width((int)uVar4,2);
  pSVar5 = *(StringName **)(this + 0xa40);
  StringName::StringName((StringName *)local_a8,"TreeSecondary",false);
  Control::set_theme_type_variation(pSVar5);
  if ((StringName::configured != '\0') && (local_a8[0] != 0)) {
    StringName::unref();
  }
  plVar2 = *(long **)(this + 0xa40);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<EditorVisualProfiler>
            ((EditorVisualProfiler *)local_a8,(char *)this,
             (_func_void *)"&EditorVisualProfiler::_item_selected");
  StringName::StringName((StringName *)local_b8,"cell_selected",false);
  (*pcVar3)(plVar2,(String *)local_b8,(CowData<char32_t> *)local_a8,0);
  if ((StringName::configured != '\0') && (local_b8[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_a8);
  this_06 = (TextureRect *)operator_new(0x9e0,"");
  TextureRect::TextureRect(this_06);
  postinitialize_handler((Object *)this_06);
  *(TextureRect **)(this + 0xa20) = this_06;
  fVar15 = (float)EditorScale::get_scale();
  local_78[0] = (ulong)(uint)(fVar15 * __LC119);
  Control::set_custom_minimum_size((Vector2 *)this_06);
  TextureRect::set_expand_mode(*(undefined8 *)(this + 0xa20),1);
  Control::set_mouse_filter(*(undefined8 *)(this + 0xa20),0);
  plVar2 = *(long **)(this + 0xa20);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<EditorVisualProfiler>
            ((EditorVisualProfiler *)local_a8,(char *)this,
             (_func_void *)"&EditorVisualProfiler::_graph_tex_draw");
  (*pcVar3)(plVar2,SceneStringNames::singleton + 8,(CowData<char32_t> *)local_a8,0);
  Callable::~Callable((Callable *)local_a8);
  plVar2 = *(long **)(this + 0xa20);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  pCVar13 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar13);
  *(EditorVisualProfiler **)(pCVar13 + 0x28) = this;
  *(undefined1 (*) [16])(pCVar13 + 0x30) = (undefined1  [16])0x0;
  *(undefined **)(pCVar13 + 0x20) = &_LC22;
  *(undefined ***)pCVar13 = &PTR_hash_00110880;
  *(undefined8 *)(pCVar13 + 0x40) = 0;
  uVar4 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(pCVar13 + 0x10) = 0;
  *(undefined8 *)(pCVar13 + 0x30) = uVar4;
  *(code **)(pCVar13 + 0x38) = _graph_tex_input;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar13,(int)pCVar13 + 0x28);
  *(char **)(pCVar13 + 0x20) = "EditorVisualProfiler::_graph_tex_input";
  Callable::Callable((Callable *)local_a8,pCVar13);
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x28,(CowData<char32_t> *)local_a8,0);
  Callable::~Callable((Callable *)local_a8);
  plVar2 = *(long **)(this + 0xa20);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<EditorVisualProfiler>
            ((EditorVisualProfiler *)local_a8,(char *)this,
             (_func_void *)"&EditorVisualProfiler::_graph_tex_mouse_exit");
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0xc0,(CowData<char32_t> *)local_a8,0);
  Callable::~Callable((Callable *)local_a8);
  Node::add_child(*(undefined8 *)(this + 0xa48),*(undefined8 *)(this + 0xa20),0,0);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xa20),3);
  local_a8[0] = 0;
  String::parse_latin1((String *)local_a8,"debugger/profiler_frame_history_size");
  _EDITOR_GET((String *)local_78);
  iVar6 = Variant::operator_cast_to_int((Variant *)local_78);
  iVar7 = 10000;
  if (iVar6 < 0x2711) {
    iVar7 = iVar6;
  }
  if (iVar7 < 0x3c) {
    iVar7 = 0x3c;
  }
  if (Variant::needs_deinit[(int)local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<EditorVisualProfiler::Metric>::resize<false>
            ((CowData<EditorVisualProfiler::Metric> *)(this + 0xa78),(long)iVar7);
  local_a8[0] = 0;
  String::parse_latin1((String *)local_a8,"debugger/profiler_target_fps");
  _EDITOR_GET((String *)local_78);
  iVar7 = Variant::operator_cast_to_int((Variant *)local_78);
  if (1000 < iVar7) {
    iVar7 = 1000;
  }
  if (iVar7 < 1) {
    iVar7 = 1;
  }
  cVar1 = Variant::needs_deinit[(int)local_78[0]];
  *(float *)(this + 0xa9c) = _LC125 / (float)iVar7;
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  pTVar14 = (Timer *)operator_new(0x428,"");
  Timer::Timer(pTVar14);
  postinitialize_handler((Object *)pTVar14);
  *(Timer **)(this + 0xab8) = pTVar14;
  Timer::set_wait_time(_LC83);
  Timer::set_one_shot(SUB81(*(undefined8 *)(this + 0xab8),0));
  Node::add_child(this,*(undefined8 *)(this + 0xab8),0,0);
  plVar2 = *(long **)(this + 0xab8);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<EditorVisualProfiler,bool>
            ((EditorVisualProfiler *)local_a8,(char *)this,
             (_func_void_bool *)"&EditorVisualProfiler::_update_frame");
  Variant::Variant((Variant *)local_78,false);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  local_98[0] = (Variant *)local_78;
  Callable::bindp((Variant **)local_b8,(int)(CowData<char32_t> *)local_a8);
  if (Variant::needs_deinit[(int)local_60] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[(int)local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  StringName::StringName((StringName *)&local_c0,"timeout",false);
  (*pcVar3)(plVar2,(String *)&local_c0,(String *)local_b8,0);
  if ((StringName::configured != '\0') && (local_c0 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_b8);
  Callable::~Callable((Callable *)local_a8);
  pTVar14 = (Timer *)operator_new(0x428,"");
  Timer::Timer(pTVar14);
  postinitialize_handler((Object *)pTVar14);
  *(Timer **)(this + 0xac0) = pTVar14;
  Timer::set_wait_time(_LC83);
  Timer::set_one_shot(SUB81(*(undefined8 *)(this + 0xac0),0));
  Node::add_child(this,*(undefined8 *)(this + 0xac0),0,0);
  plVar2 = *(long **)(this + 0xac0);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<EditorVisualProfiler>
            ((EditorVisualProfiler *)local_a8,(char *)this,
             (_func_void *)"&EditorVisualProfiler::_update_plot");
  StringName::StringName((StringName *)local_b8,"timeout",false);
  (*pcVar3)(plVar2,(String *)local_b8,(CowData<char32_t> *)local_a8,0);
  if ((StringName::configured != '\0') && (local_b8[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_a8);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorVisualProfiler::clear() */

void __thiscall EditorVisualProfiler::clear(EditorVisualProfiler *this)

{
  char cVar1;
  int iVar2;
  long in_FS_OFFSET;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = 0;
  local_68 = "debugger/profiler_frame_history_size";
  local_60 = 0x24;
  String::parse_latin1((StrRange *)&local_70);
  _EDITOR_GET((String *)local_58);
  iVar2 = Variant::operator_cast_to_int((Variant *)local_58);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  if (10000 < iVar2) {
    iVar2 = 10000;
  }
  if (iVar2 < 0x3c) {
    iVar2 = 0x3c;
  }
  if ((*(long *)(this + 0xa78) != 0) && (*(long *)(*(long *)(this + 0xa78) + -8) != 0)) {
    CowData<EditorVisualProfiler::Metric>::_unref
              ((CowData<EditorVisualProfiler::Metric> *)(this + 0xa78));
  }
  CowData<EditorVisualProfiler::Metric>::resize<false>
            ((CowData<EditorVisualProfiler::Metric> *)(this + 0xa78),(long)iVar2);
  *(undefined4 *)(this + 0xa80) = 0xffffffff;
  Tree::clear();
  local_68 = "debugger/profiler_target_fps";
  local_70 = 0;
  local_60 = 0x1c;
  String::parse_latin1((StrRange *)&local_70);
  _EDITOR_GET((String *)local_58);
  iVar2 = Variant::operator_cast_to_int((Variant *)local_58);
  if (1000 < iVar2) {
    iVar2 = 1000;
  }
  if (iVar2 < 1) {
    iVar2 = 1;
  }
  cVar1 = Variant::needs_deinit[local_58[0]];
  *(float *)(this + 0xa9c) = _LC125 / (float)iVar2;
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  this[0xa90] = (EditorVisualProfiler)0x1;
  Range::set_min(0.0);
  Range::set_max(0.0);
  Range::set_value(0.0);
  this[0xa90] = (EditorVisualProfiler)0x0;
  *(undefined4 *)(this + 0xa84) = 0xffffffff;
  this[0xab0] = (EditorVisualProfiler)0x0;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<Color>::resize<false>(long) [clone .isra.0] */

void __thiscall CowData<Color>::resize<false>(CowData<Color> *this,long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  int iVar3;
  CowData<Color> *pCVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  char *pcVar10;
  undefined8 uVar11;
  CowData<Color> *pCVar12;
  CowData<Color> *pCVar13;
  long lVar14;
  long lVar15;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return;
  }
  lVar14 = *(long *)this;
  if (lVar14 == 0) {
    if (param_1 == 0) {
      return;
    }
    _copy_on_write(this);
    lVar15 = 0;
    pCVar4 = (CowData<Color> *)0x0;
  }
  else {
    lVar15 = *(long *)(lVar14 + -8);
    if (param_1 == lVar15) {
      return;
    }
    if (param_1 == 0) {
      LOCK();
      plVar1 = (long *)(lVar14 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) {
        *(undefined8 *)this = 0;
        return;
      }
      lVar14 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar14 + -0x10),false);
      return;
    }
    _copy_on_write(this);
    pCVar4 = (CowData<Color> *)(lVar15 * 0x10);
    if (pCVar4 != (CowData<Color> *)0x0) {
      uVar5 = (ulong)(pCVar4 + -1) | (ulong)(pCVar4 + -1) >> 1;
      uVar5 = uVar5 | uVar5 >> 2;
      uVar5 = uVar5 | uVar5 >> 4;
      uVar5 = uVar5 | uVar5 >> 8;
      uVar5 = uVar5 | uVar5 >> 0x10;
      pCVar4 = (CowData<Color> *)((uVar5 | uVar5 >> 0x20) + 1);
    }
  }
  if (param_1 * 0x10 != 0) {
    uVar5 = param_1 * 0x10 - 1;
    uVar5 = uVar5 | uVar5 >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    pCVar13 = (CowData<Color> *)(uVar5 | uVar5 >> 0x20);
    pCVar12 = pCVar13 + 1;
    if (pCVar12 != (CowData<Color> *)0x0) {
      if (param_1 <= lVar15) {
        if ((pCVar12 != pCVar4) && (iVar3 = _realloc(this,(long)pCVar12), iVar3 != 0)) {
          return;
        }
        if (*(long *)this != 0) {
          *(long *)(*(long *)this + -8) = param_1;
          return;
        }
        FUN_00109b88();
        return;
      }
      if (pCVar12 == pCVar4) {
LAB_0010609c:
        puVar9 = *(undefined8 **)this;
        if (puVar9 == (undefined8 *)0x0) {
          resize<false>((long)pCVar13);
          return;
        }
        lVar14 = puVar9[-1];
        if (param_1 <= lVar14) goto LAB_00106038;
      }
      else {
        if (lVar15 != 0) {
          pCVar13 = this;
          iVar3 = _realloc(this,(long)pCVar12);
          if (iVar3 != 0) {
            return;
          }
          goto LAB_0010609c;
        }
        puVar6 = (undefined8 *)Memory::alloc_static((ulong)(pCVar13 + 0x11),false);
        if (puVar6 == (undefined8 *)0x0) {
          uVar11 = 0x171;
          pcVar10 = "Parameter \"mem_new\" is null.";
          goto LAB_00106132;
        }
        puVar9 = puVar6 + 2;
        *puVar6 = 1;
        puVar6[1] = 0;
        *(undefined8 **)this = puVar9;
        lVar14 = 0;
      }
      uVar2 = _UNK_00110b88;
      uVar11 = __LC13;
      puVar7 = puVar9 + lVar14 * 2;
      puVar6 = puVar7;
      if (((param_1 - lVar14) * 0x10 & 0x10U) != 0) {
        *puVar7 = __LC13;
        puVar7[1] = uVar2;
        puVar6 = puVar7 + 2;
        if (puVar7 + (param_1 - lVar14) * 2 == puVar7 + 2) goto LAB_00106038;
      }
      do {
        *puVar6 = uVar11;
        puVar6[1] = uVar2;
        puVar8 = puVar6 + 4;
        puVar6[2] = uVar11;
        puVar6[3] = uVar2;
        puVar6 = puVar8;
      } while (puVar7 + (param_1 - lVar14) * 2 != puVar8);
LAB_00106038:
      puVar9[-1] = param_1;
      return;
    }
  }
  uVar11 = 0x16a;
  pcVar10 = 
  "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
  ;
LAB_00106132:
  _err_print_error("resize","./core/templates/cowdata.h",uVar11,pcVar10,0,0);
  return;
}



/* EditorVisualProfiler::_update_plot() */

void __thiscall EditorVisualProfiler::_update_plot(EditorVisualProfiler *this)

{
  uint uVar1;
  long *plVar2;
  code *pcVar3;
  bool bVar4;
  float *pfVar5;
  float *pfVar6;
  float fVar7;
  char cVar8;
  undefined1 uVar9;
  uint uVar10;
  int iVar11;
  char *pcVar12;
  undefined8 *puVar13;
  float *pfVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  uint uVar19;
  uint uVar20;
  undefined8 *puVar21;
  ulong uVar22;
  int iVar23;
  float *pfVar24;
  uint uVar25;
  ulong uVar26;
  Ref *pRVar27;
  int iVar28;
  long lVar29;
  int iVar30;
  Color *pCVar31;
  Color *pCVar32;
  undefined1 *puVar33;
  undefined1 uVar34;
  uint uVar35;
  undefined1 uVar36;
  int iVar37;
  long lVar38;
  long lVar39;
  long in_FS_OFFSET;
  float fVar40;
  float fVar41;
  float extraout_XMM0_Db;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  float fVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [12];
  float local_e0;
  float local_d8;
  Ref<Texture2D> *local_c0;
  int local_b8;
  int local_b4;
  Object *local_80;
  long local_78;
  float *local_70;
  long local_68;
  float *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  fVar40 = (float)Control::get_size();
  iVar37 = (int)(fVar40 + _LC14);
  Control::get_size();
  lVar18 = *(long *)(this + 0xa38);
  iVar23 = (int)(extraout_XMM0_Db + _LC14);
  iVar30 = iVar37 * iVar23 * 4;
  if (lVar18 == 0) {
    if (iVar30 == 0) {
      bVar4 = false;
      goto LAB_00106f55;
    }
    if (iVar30 < 0) goto LAB_00106fec;
    lVar18 = 0;
    CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)(this + 0xa38));
    lVar39 = 0;
LAB_00106437:
    lVar15 = (long)iVar30;
    uVar26 = lVar15 - 1U | lVar15 - 1U >> 1;
    uVar26 = uVar26 | uVar26 >> 2;
    uVar26 = uVar26 | uVar26 >> 4;
    uVar26 = uVar26 | uVar26 >> 8;
    uVar26 = uVar26 | uVar26 >> 0x10;
    lVar38 = uVar26 + 1;
    if (lVar15 <= lVar39) {
      if ((lVar38 == lVar18) ||
         (iVar11 = CowData<unsigned_char>::_realloc((CowData<unsigned_char> *)(this + 0xa38),lVar38)
         , iVar11 == 0)) {
        if (*(long *)(this + 0xa38) == 0) {
          _update_plot();
          return;
        }
        *(long *)(*(long *)(this + 0xa38) + -8) = lVar15;
      }
      goto LAB_00106d2a;
    }
    if (lVar38 == lVar18) {
LAB_00106eeb:
      puVar21 = *(undefined8 **)(this + 0xa38);
      if (puVar21 == (undefined8 *)0x0) {
        _update_plot();
        return;
      }
LAB_00106f00:
      puVar21[-1] = lVar15;
    }
    else if (lVar39 == 0) {
      puVar13 = (undefined8 *)Memory::alloc_static(uVar26 + 0x11,false);
      if (puVar13 != (undefined8 *)0x0) {
        puVar21 = puVar13 + 2;
        *puVar13 = 1;
        puVar13[1] = 0;
        *(undefined8 **)(this + 0xa38) = puVar21;
        goto LAB_00106f00;
      }
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
    }
    else {
      iVar11 = CowData<unsigned_char>::_realloc((CowData<unsigned_char> *)(this + 0xa38),lVar38);
      if (iVar11 == 0) goto LAB_00106eeb;
    }
LAB_00106d2a:
    bVar4 = true;
LAB_00106219:
    CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)(this + 0xa38));
    lVar18 = *(long *)(this + 0xa38);
    StringName::StringName((StringName *)&local_68,"dark_color_2",false);
    auVar48 = Control::get_theme_color((StringName *)this,(StringName *)&local_68);
    if (StringName::configured != '\0') goto LAB_0010627b;
  }
  else {
    lVar39 = *(long *)(lVar18 + -8);
    lVar38 = (long)iVar30;
    if (lVar39 == lVar38) {
      bVar4 = false;
      goto LAB_00106219;
    }
    if (lVar38 < 0) {
LAB_00106fec:
      _err_print_error("resize","./core/templates/cowdata.h",0x157,
                       "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    }
    else {
      if (lVar38 != 0) {
        CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)(this + 0xa38));
        lVar18 = lVar39;
        if (lVar39 != 0) {
          uVar26 = lVar39 - 1U | lVar39 - 1U >> 1;
          uVar26 = uVar26 | uVar26 >> 2;
          uVar26 = uVar26 | uVar26 >> 4;
          uVar26 = uVar26 | uVar26 >> 8;
          uVar26 = uVar26 | uVar26 >> 0x10;
          lVar18 = (uVar26 | uVar26 >> 0x20) + 1;
        }
        goto LAB_00106437;
      }
      LOCK();
      plVar2 = (long *)(lVar18 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        lVar18 = *(long *)(this + 0xa38);
        *(undefined8 *)(this + 0xa38) = 0;
        Memory::free_static((void *)(lVar18 + -0x10),false);
      }
      else {
        *(undefined8 *)(this + 0xa38) = 0;
      }
    }
    bVar4 = true;
LAB_00106f55:
    CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)(this + 0xa38));
    lVar18 = *(long *)(this + 0xa38);
    StringName::StringName((StringName *)&local_68,"dark_color_2",false);
    auVar48 = Control::get_theme_color((StringName *)this,(StringName *)&local_68);
    if (StringName::configured == '\0') goto LAB_00106314;
LAB_0010627b:
    if (local_68 != 0) {
      StringName::unref();
    }
  }
  local_d8 = auVar48._8_4_;
  if (0 < iVar37 * iVar23 * 4) {
    lVar39 = 0;
    fVar40 = _LC133 * auVar48._0_4_;
    do {
      lVar38 = lrintf(fVar40);
      fVar41 = _LC133 * auVar48._4_4_;
      *(char *)(lVar18 + lVar39) = (char)lVar38;
      lVar38 = lrintf(fVar41);
      fVar41 = _LC133 * local_d8;
      *(char *)(lVar18 + 1 + lVar39) = (char)lVar38;
      lVar38 = lrintf(fVar41);
      *(undefined1 *)(lVar18 + 3 + lVar39) = 0xff;
      *(char *)(lVar18 + 2 + lVar39) = (char)lVar38;
      lVar39 = lVar39 + 4;
    } while ((int)lVar39 < iVar30);
  }
LAB_00106314:
  local_d8 = auVar48._8_4_;
  local_c0 = (Ref<Texture2D> *)&local_68;
  pcVar12 = *(char **)(this + 0xa78);
  if (pcVar12 != (char *)0x0) {
    fVar40 = 0.0;
    plVar2 = (long *)(pcVar12 + -8);
    fVar41 = 0.0;
    for (lVar39 = 0; lVar39 < *plVar2; lVar39 = lVar39 + 1) {
      if (((*pcVar12 != '\0') && (lVar38 = *(long *)(pcVar12 + 0x18), lVar38 != 0)) &&
         (lVar15 = *(long *)(lVar38 + -8), lVar15 != 0)) {
        uVar26 = lVar15 - 1;
        if ((long)uVar26 < 0) {
LAB_001063a1:
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,uVar26,lVar15,"p_index","size()","",
                     false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        lVar38 = lVar38 + uVar26 * 0x28;
        fVar46 = *(float *)(lVar38 + 0x20);
        if (fVar41 <= fVar46) {
          fVar41 = fVar46;
        }
        fVar46 = *(float *)(lVar38 + 0x24);
        if (fVar40 <= fVar46) {
          fVar40 = fVar46;
        }
      }
      pcVar12 = pcVar12 + 0x20;
    }
    if ((0.0 < fVar41) || (0.0 < fVar40)) {
      cVar8 = BaseButton::is_pressed();
      fVar46 = fVar41;
      if (cVar8 != '\0') {
        fVar46 = *(float *)(this + 0xa9c);
        fVar7 = fVar46;
        if (fVar46 <= fVar40) {
          fVar7 = fVar40;
        }
        fVar40 = fVar7;
        if (fVar46 <= fVar41) {
          fVar46 = fVar41;
        }
      }
      cVar8 = BaseButton::is_pressed();
      fVar41 = fVar40;
      if ((cVar8 != '\0') && (fVar41 = fVar46, fVar46 <= fVar40)) {
        fVar46 = fVar40;
        fVar41 = fVar40;
      }
      lVar39 = (long)iVar23;
      local_70 = (float *)0x0;
      dVar42 = (double)fVar46 * _LC135;
      dVar45 = (double)fVar41 * _LC135;
      *(ulong *)(this + 0xa94) = CONCAT44((float)dVar45,(float)dVar42);
      CowData<Color>::resize<false>((CowData<Color> *)&local_70,lVar39);
      CowData<Color>::_copy_on_write((CowData<Color> *)&local_70);
      pfVar5 = local_70;
      local_60 = (float *)0x0;
      CowData<Color>::resize<false>((CowData<Color> *)&local_60,lVar39);
      CowData<Color>::_copy_on_write((CowData<Color> *)&local_60);
      pfVar6 = local_60;
      iVar30 = iVar37 / 2;
      if (1 < iVar37) {
        lVar38 = 0;
        local_b8 = 0;
        local_b4 = iVar30 << 2;
        uVar1 = iVar23 - 1;
        pfVar14 = local_60 + lVar39 * 4;
        if (iVar23 < 1) goto LAB_001066b5;
LAB_0010667a:
        lVar15 = 0;
        do {
          *(undefined1 (*) [16])((long)pfVar5 + lVar15) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])((long)pfVar6 + lVar15) = (undefined1  [16])0x0;
          lVar15 = lVar15 + 0x10;
        } while (lVar15 != ((ulong)uVar1 + 1) * 0x10);
LAB_001066b5:
        do {
          lVar29 = *(long *)(this + 0xa78);
          if (lVar29 == 0) {
            uVar22 = 0;
            uVar17 = 1;
LAB_00106720:
            while( true ) {
              uVar19 = (int)uVar22 + 1 + *(int *)(this + 0xa80);
              uVar26 = (ulong)(int)uVar19;
              if (lVar29 == 0) {
                uVar22 = uVar26;
                do {
                  uVar26 = uVar22;
                  uVar22 = (ulong)uVar19;
                } while (-1 < (long)uVar26);
                lVar15 = 0;
                goto LAB_001063a1;
              }
              lVar15 = *(long *)(lVar29 + -8);
              while (lVar15 <= (long)uVar26) {
                uVar19 = uVar19 - (int)lVar15;
                uVar26 = (ulong)(int)uVar19;
              }
              if ((long)uVar26 < 0) goto LAB_001063a1;
              lVar15 = *(long *)(lVar29 + 0x18 + (long)(int)uVar19 * 0x20);
              if ((lVar15 != 0) && (iVar11 = (int)*(undefined8 *)(lVar15 + -8), 1 < iVar11)) {
                puVar21 = (undefined8 *)(lVar15 + 8);
                uVar19 = 0;
                uVar20 = 0;
                do {
                  uVar10 = (uint)(((float)iVar23 * *(float *)(puVar21 + 8)) / (float)dVar42);
                  uVar25 = uVar1;
                  if ((int)uVar10 <= (int)uVar1) {
                    uVar25 = uVar10;
                  }
                  uVar35 = 0;
                  if (-1 < (int)uVar10) {
                    uVar35 = uVar25;
                  }
                  if (*(long *)(this + 0xa88) == puVar21[2]) {
                    local_58 = CONCAT44(_LC14,_LC14);
                    uStack_50 = CONCAT44(_LC14,_LC14);
                  }
                  else {
                    local_58 = *puVar21;
                    uStack_50 = puVar21[1];
                  }
                  if ((int)uVar19 < (int)uVar35) {
                    pCVar32 = (Color *)(pfVar5 + (lVar39 - (int)uVar19) * 4 + -4);
                    do {
                      pCVar31 = pCVar32 + -0x10;
                      Color::operator+=(pCVar32,(Color *)&local_58);
                      pCVar32 = pCVar31;
                    } while ((Color *)(pfVar5 + lVar39 * 4 +
                                      (long)(int)uVar19 * -4 + (ulong)(uVar35 - uVar19) * -4 + -4)
                             != pCVar31);
                  }
                  uVar19 = (uint)(((float)iVar23 * *(float *)((long)puVar21 + 0x44)) / (float)dVar45
                                 );
                  uVar25 = uVar1;
                  if ((int)uVar19 <= (int)uVar1) {
                    uVar25 = uVar19;
                  }
                  if ((int)uVar19 < 0) {
                    uVar25 = 0;
                  }
                  if ((int)uVar20 < (int)uVar25) {
                    pCVar32 = (Color *)(pfVar6 + (lVar39 - (int)uVar20) * 4 + -4);
                    do {
                      pCVar31 = pCVar32 + -0x10;
                      Color::operator+=(pCVar32,(Color *)&local_58);
                      pCVar32 = pCVar31;
                    } while ((Color *)(pfVar14 +
                                      (long)(int)uVar20 * -4 + (ulong)(uVar25 - uVar20) * -4 + -4)
                             != pCVar31);
                  }
                  puVar21 = puVar21 + 5;
                  uVar19 = uVar35;
                  uVar20 = uVar25;
                } while (puVar21 != (undefined8 *)(lVar15 + 0x30 + (ulong)(iVar11 - 2) * 0x28));
              }
              uVar19 = (int)uVar22 + 1;
              uVar22 = (ulong)uVar19;
              if ((int)uVar17 <= (int)uVar19) break;
              lVar29 = *(long *)(this + 0xa78);
            }
          }
          else {
            uVar26 = *(ulong *)(lVar29 + -8);
            uVar16 = (long)(lVar38 * uVar26) / (long)iVar30;
            uVar22 = uVar16 & 0xffffffff;
            uVar17 = (long)((lVar38 + 1) * uVar26) / (long)iVar30;
            if ((long)(int)uVar17 <= (long)uVar26) {
              uVar26 = uVar17;
            }
            uVar17 = uVar26 & 0xffffffff;
            iVar11 = (int)uVar26;
            iVar28 = (int)uVar16;
            if (iVar11 == iVar28) {
              uVar17 = (ulong)(iVar11 + 1);
              goto LAB_00106720;
            }
            if (iVar28 < iVar11) goto LAB_00106720;
          }
          lVar38 = lVar38 + 1;
          iVar11 = (int)lVar38;
          if (0 < iVar23) goto code_r0x001069cb;
          local_b4 = local_b4 + 4;
          local_b8 = iVar11;
          if (iVar30 <= iVar11) break;
        } while( true );
      }
LAB_00106d3a:
      CowData<Color>::_unref((CowData<Color> *)&local_60);
      CowData<Color>::_unref((CowData<Color> *)&local_70);
    }
  }
  Image::create_from_data(&local_80,iVar37,iVar23,0,5,this + 0xa30);
  if (bVar4) {
    pRVar27 = *(Ref **)(this + 0xa28);
    if (pRVar27 == (Ref *)0x0) {
      Ref<ImageTexture>::instantiate<>((Ref<ImageTexture> *)(this + 0xa28));
      pRVar27 = *(Ref **)(this + 0xa28);
    }
    ImageTexture::set_image(pRVar27);
  }
  ImageTexture::update(*(Ref **)(this + 0xa28));
  local_78 = 0;
  pRVar27 = *(Ref **)(this + 0xa20);
  if ((*(long *)(this + 0xa28) != 0) &&
     (lVar18 = __dynamic_cast(*(long *)(this + 0xa28),&Object::typeinfo,&Texture2D::typeinfo,0),
     lVar18 != 0)) {
    local_68 = 0;
    local_78 = lVar18;
    cVar8 = RefCounted::reference();
    if (cVar8 == '\0') {
      local_78 = 0;
    }
    Ref<Texture2D>::unref(local_c0);
  }
  TextureRect::set_texture(pRVar27);
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_78);
  CanvasItem::queue_redraw();
  if (((local_80 != (Object *)0x0) && (cVar8 = RefCounted::unreference(), cVar8 != '\0')) &&
     (cVar8 = predelete_handler(local_80), cVar8 != '\0')) {
    if (*(code **)(*(long *)local_80 + 0x140) == Image::~Image) {
      *(code **)local_80 = Memory::free_static;
      if (*(long *)(local_80 + 0x250) != 0) {
        LOCK();
        plVar2 = (long *)(*(long *)(local_80 + 0x250) + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          lVar18 = *(long *)(local_80 + 0x250);
          *(undefined8 *)(local_80 + 0x250) = 0;
          Memory::free_static((void *)(lVar18 + -0x10),false);
        }
      }
      Resource::~Resource((Resource *)local_80);
    }
    else {
      (**(code **)(*(long *)local_80 + 0x140))(local_80);
    }
    Memory::free_static(local_80,false);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x001069cb:
  puVar33 = (undefined1 *)((local_b8 << 2) + lVar18);
  pfVar24 = pfVar5;
  dVar44 = _LC136;
  do {
    fVar40 = pfVar24[3];
    local_e0 = auVar48._0_4_;
    if (fVar40 == 0.0) {
      lVar15 = lrintf(local_e0 * _LC133);
      uVar36 = (undefined1)lVar15;
      lVar15 = lrintf(_LC133 * auVar48._4_4_);
      uVar34 = (undefined1)lVar15;
      lVar15 = lrintf(local_d8 * _LC133);
      uVar9 = (undefined1)lVar15;
      dVar44 = _LC136;
    }
    else {
      uVar36 = 0;
      dVar43 = (double)(*pfVar24 / fVar40) * dVar44;
      if ((0.0 <= dVar43) && (uVar36 = 0xff, dVar43 <= dVar44)) {
        uVar36 = (undefined1)(int)dVar43;
      }
      uVar34 = 0;
      dVar43 = (double)(pfVar24[1] / fVar40) * dVar44;
      if ((0.0 <= dVar43) && (uVar34 = 0xff, dVar43 <= dVar44)) {
        uVar34 = (undefined1)(int)dVar43;
      }
      uVar9 = 0;
      dVar43 = (double)(pfVar24[2] / fVar40) * dVar44;
      if ((0.0 <= dVar43) && (uVar9 = 0xff, dVar43 <= dVar44)) {
        uVar9 = (undefined1)(int)dVar43;
      }
    }
    pfVar24 = pfVar24 + 4;
    *puVar33 = uVar36;
    puVar33[1] = uVar34;
    puVar33[2] = uVar9;
    puVar33[3] = 0xff;
    puVar33 = puVar33 + (iVar37 << 2);
  } while (pfVar24 != pfVar5 + lVar39 * 4);
  auVar47._8_8_ = 0;
  auVar47._0_8_ = _LC136;
  puVar33 = (undefined1 *)(local_b4 + lVar18);
  pfVar24 = pfVar6;
  do {
    fVar40 = pfVar24[3];
    if (fVar40 == 0.0) {
      lVar15 = lrintf(local_e0 * _LC133);
      uVar36 = (undefined1)lVar15;
      lVar15 = lrintf(_LC133 * auVar48._4_4_);
      uVar34 = (undefined1)lVar15;
      lVar15 = lrintf(local_d8 * _LC133);
      uVar9 = (undefined1)lVar15;
      auVar47._8_8_ = 0;
      auVar47._0_8_ = _LC136;
    }
    else {
      uVar36 = 0;
      dVar43 = auVar47._0_8_;
      dVar44 = (double)(*pfVar24 / fVar40) * dVar43;
      if ((0.0 <= dVar44) && (uVar36 = 0xff, dVar44 <= dVar43)) {
        uVar36 = (undefined1)(int)dVar44;
      }
      uVar34 = 0;
      dVar44 = (double)(pfVar24[1] / fVar40) * dVar43;
      if ((0.0 <= dVar44) && (uVar34 = 0xff, dVar44 <= dVar43)) {
        uVar34 = (undefined1)(int)dVar44;
      }
      uVar9 = 0;
      dVar44 = (double)(pfVar24[2] / fVar40) * dVar43;
      if ((0.0 <= dVar44) && (uVar9 = 0xff, dVar44 <= dVar43)) {
        uVar9 = (undefined1)(int)dVar44;
      }
    }
    pfVar24 = pfVar24 + 4;
    *puVar33 = uVar36;
    puVar33[1] = uVar34;
    puVar33[2] = uVar9;
    puVar33[3] = 0xff;
    puVar33 = puVar33 + (iVar37 << 2);
  } while (pfVar24 != pfVar14);
  local_b4 = local_b4 + 4;
  local_b8 = iVar11;
  if (iVar30 <= iVar11) goto LAB_00106d3a;
  goto LAB_0010667a;
}



/* EditorVisualProfiler::_item_selected() */

void __thiscall EditorVisualProfiler::_item_selected(EditorVisualProfiler *this)

{
  long lVar1;
  long in_FS_OFFSET;
  long local_40;
  int local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (this[0xa90] == (EditorVisualProfiler)0x0) {
    lVar1 = Tree::get_selected();
    if (lVar1 != 0) {
      TreeItem::get_metadata((int)local_38);
      Variant::operator_cast_to_StringName((Variant *)&local_40);
      if (*(long *)(this + 0xa88) == local_40) {
        if ((StringName::configured != '\0') && (local_40 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        *(long *)(this + 0xa88) = local_40;
      }
      if (Variant::needs_deinit[local_38[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        _update_plot(this);
        return;
      }
      goto LAB_0010722a;
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010722a:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorVisualProfiler::_clear_pressed() */

void __thiscall EditorVisualProfiler::_clear_pressed(EditorVisualProfiler *this)

{
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xa18),0));
  clear(this);
  _update_plot(this);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EditorVisualProfiler::_graph_tex_input(Ref<InputEvent> const&) */

void __thiscall EditorVisualProfiler::_graph_tex_input(EditorVisualProfiler *this,Ref *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  Object *pOVar6;
  Object *pOVar7;
  Object *pOVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  uint *puVar12;
  int iVar13;
  char *pcVar14;
  long lVar15;
  undefined8 *puVar16;
  int iVar17;
  bool bVar18;
  long lVar19;
  long in_FS_OFFSET;
  float fVar20;
  float fVar21;
  float extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  double dVar22;
  float fVar23;
  int local_68;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((-1 < *(int *)(this + 0xa80)) && (lVar9 = *(long *)param_1, lVar9 != 0)) {
    pOVar6 = (Object *)__dynamic_cast(lVar9,&Object::typeinfo,&InputEventMouse::typeinfo,0);
    if (pOVar6 == (Object *)0x0) {
LAB_001072dd:
      pOVar7 = (Object *)__dynamic_cast(lVar9,&Object::typeinfo,&InputEventMouseButton::typeinfo,0);
      if (pOVar7 == (Object *)0x0) {
LAB_00107311:
        pOVar8 = (Object *)
                 __dynamic_cast(lVar9,&Object::typeinfo,&InputEventMouseMotion::typeinfo,0);
        if ((pOVar8 != (Object *)0x0) && (cVar4 = RefCounted::reference(), cVar4 != '\0')) {
          pOVar7 = (Object *)0x0;
          goto LAB_001073bf;
        }
      }
      else {
        cVar4 = RefCounted::reference();
        lVar9 = *(long *)param_1;
        if (cVar4 != '\0') {
          if (((lVar9 == 0) ||
              (pOVar8 = (Object *)
                        __dynamic_cast(lVar9,&Object::typeinfo,&InputEventMouseMotion::typeinfo,0),
              pOVar8 == (Object *)0x0)) || (cVar4 = RefCounted::reference(), cVar4 == '\0')) {
            iVar5 = InputEventMouseButton::get_button_index();
            if ((iVar5 == 1) && (cVar4 = InputEvent::is_pressed(), cVar4 != '\0')) {
              pOVar8 = (Object *)0x0;
              goto LAB_001073bf;
            }
            goto LAB_0010770e;
          }
          iVar5 = InputEventMouseButton::get_button_index();
          if (iVar5 == 1) {
            InputEvent::is_pressed();
          }
LAB_001073bf:
          fVar20 = (float)Control::get_size();
          iVar17 = (int)(fVar20 * _LC35);
          fVar20 = (float)InputEventMouse::get_position();
          pcVar14 = *(char **)(this + 0xa78);
          iVar5 = (int)fVar20;
          if (iVar17 < iVar5) {
            iVar5 = iVar5 - iVar17;
          }
          if (pcVar14 == (char *)0x0) {
            iVar5 = *(int *)(this + 0xa80);
            uVar11 = 0;
            bVar18 = false;
            if (iVar5 < 0) goto LAB_00107440;
            *(undefined4 *)(this + 0xa84) = 0xffffffff;
            if (pOVar7 == (Object *)0x0) goto LAB_001076d0;
            this[0xa90] = (EditorVisualProfiler)0x1;
LAB_0010797d:
            if ((pOVar8 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0'))
            goto LAB_00107869;
          }
          else {
            uVar1 = *(ulong *)(pcVar14 + -8);
            iVar17 = (int)((long)((long)iVar5 * uVar1) / (long)iVar17);
            if (iVar17 < 0) {
              lVar9 = 0;
              bVar18 = false;
              iVar17 = 0;
            }
            else {
              lVar9 = (long)iVar17;
              bVar18 = lVar9 < (long)uVar1;
            }
            uVar11 = uVar1 & 0xffffffff;
            iVar5 = 0;
            if (lVar9 < (long)uVar1) {
              iVar5 = ((int)uVar1 + -1) - iVar17;
            }
            for (iVar5 = *(int *)(this + 0xa80) - iVar5; iVar5 < 0; iVar5 = iVar5 + (int)uVar11) {
LAB_00107440:
            }
            iVar17 = -1;
            if (bVar18) {
              iVar17 = iVar5;
            }
            *(int *)(this + 0xa84) = iVar17;
            if (pOVar7 == (Object *)0x0) {
LAB_001076d0:
              uVar11 = InputEventMouse::get_button_mask();
              if ((uVar11 & 1) == 0) {
                CanvasItem::queue_redraw();
                if (pOVar8 != (Object *)0x0) goto LAB_001076f5;
                goto LAB_0010733a;
              }
              pcVar14 = *(char **)(this + 0xa78);
              this[0xa90] = (EditorVisualProfiler)0x1;
              if (pcVar14 == (char *)0x0) {
                if ((pOVar8 == (Object *)0x0) || (cVar4 = RefCounted::unreference(), cVar4 == '\0'))
                goto LAB_0010733f;
                goto LAB_00107869;
              }
            }
            else {
              this[0xa90] = (EditorVisualProfiler)0x1;
              if (pcVar14 == (char *)0x0) goto LAB_0010797d;
            }
            lVar9 = *(long *)(pcVar14 + -8);
            lVar10 = 0;
            while (lVar10 < lVar9) {
              lVar19 = (long)iVar5;
              if (lVar9 <= lVar19) goto LAB_0010776e;
              lVar15 = lVar19 * 0x20;
              cVar4 = pcVar14[lVar15];
              while( true ) {
                if (cVar4 != '\0') {
                  if (lVar9 <= lVar19) goto LAB_0010776e;
                  Range::set_value((double)*(ulong *)(pcVar14 + lVar15 + 8));
                  this[0xa90] = (EditorVisualProfiler)0x0;
                  BaseButton::is_pressed();
                  this[0xab0] = (EditorVisualProfiler)0x1;
                  cVar4 = Node::is_processing();
                  if (cVar4 == '\0') {
                    Timer::set_wait_time(_LC83);
                    Timer::start(_LC84);
                  }
                  fVar20 = (float)InputEventMouse::get_position();
                  fVar21 = (float)Control::get_size();
                  lVar10 = *(long *)(this + 0xa78);
                  dVar22 = (double)fVar21 * __LC139;
                  if (lVar10 == 0) {
                    lVar9 = 0;
                    goto LAB_0010776e;
                  }
                  lVar9 = *(long *)(lVar10 + -8);
                  if (lVar9 <= lVar19) goto LAB_0010776e;
                  puVar2 = *(undefined8 **)(lVar10 + 0x18 + lVar15);
                  if (puVar2 == (undefined8 *)0x0) {
                    local_68 = 0;
                    iVar5 = -1;
                  }
                  else {
                    local_68 = (int)puVar2[-1];
                    iVar5 = local_68 + -1;
                  }
                  InputEventMouse::get_position();
                  Control::get_size();
                  if (dVar22 <= (double)fVar20) {
                    fVar21 = *(float *)(this + 0xa98);
                  }
                  else {
                    fVar21 = *(float *)(this + 0xa94);
                  }
                  if (local_68 < 2) goto LAB_001079a4;
                  iVar13 = 0;
                  iVar17 = -1;
                  puVar16 = puVar2;
                  goto LAB_00107645;
                }
                iVar5 = iVar5 + 1;
                lVar10 = lVar10 + 1;
                if (iVar5 < lVar9) break;
                iVar5 = 0;
                if (lVar9 <= lVar10) goto LAB_00107a49;
                lVar19 = 0;
                lVar15 = 0;
                cVar4 = *pcVar14;
              }
            }
LAB_00107a49:
            if ((pOVar8 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) {
LAB_00107869:
              cVar4 = predelete_handler(pOVar8);
              if (cVar4 != '\0') {
                (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
                Memory::free_static(pOVar8,false);
              }
            }
            if (pOVar7 == (Object *)0x0) goto LAB_0010733f;
          }
          cVar4 = RefCounted::unreference();
          if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar7), cVar4 != '\0')) {
            (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
            Memory::free_static(pOVar7,false);
          }
          goto LAB_0010733f;
        }
        if (lVar9 != 0) goto LAB_00107311;
      }
LAB_0010733a:
      if (pOVar6 == (Object *)0x0) goto LAB_00107350;
    }
    else {
      cVar4 = RefCounted::reference();
      lVar9 = *(long *)param_1;
      if (cVar4 == '\0') {
        if (lVar9 == 0) goto LAB_00107350;
        pOVar6 = (Object *)0x0;
        goto LAB_001072dd;
      }
      if (lVar9 != 0) goto LAB_001072dd;
    }
LAB_0010733f:
    cVar4 = RefCounted::unreference();
    if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar6), cVar4 != '\0')) {
      (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        Memory::free_static(pOVar6,false);
        return;
      }
      goto LAB_00107a78;
    }
  }
LAB_00107350:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00107a78:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
  while( true ) {
    iVar13 = iVar13 + 1;
    puVar16 = puVar16 + 5;
    if (iVar5 <= iVar13) break;
LAB_00107645:
    puVar12 = (uint *)*puVar16;
    if ((puVar12 == (uint *)0x0) || (lVar9 = *(long *)(puVar12 + -2), lVar9 == 0)) {
      puVar12 = (uint *)&String::_null;
    }
    else if (lVar9 < 1) {
      lVar19 = 0;
LAB_0010776e:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,lVar19,lVar9,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    if ((*puVar12 & 0xfffffffd) != 0x3c) {
      iVar17 = iVar13;
    }
    if ((double)fVar20 < dVar22) {
      fVar23 = *(float *)(puVar16 + 9);
    }
    else {
      fVar23 = *(float *)((long)puVar16 + 0x4c);
    }
    if ((float)((double)fVar21 * (_LC140 - (double)(extraout_XMM0_Db / extraout_XMM0_Db_00))) <
        fVar23) {
      local_48 = 0;
      if (iVar17 != -1) {
        StringName::operator=((StringName *)&local_48,(StringName *)(puVar2 + (long)iVar17 * 5 + 3))
        ;
        goto LAB_001079a6;
      }
      break;
    }
  }
LAB_001079a4:
  local_48 = 0;
LAB_001079a6:
  if (local_48 != *(long *)(this + 0xa88)) {
    StringName::operator=((StringName *)(this + 0xa88),(StringName *)&local_48);
    _update_frame(this,true);
    _update_plot(this);
  }
  if ((StringName::configured != '\0') && (local_48 != 0)) {
    StringName::unref();
  }
  CanvasItem::queue_redraw();
  if (pOVar8 != (Object *)0x0) {
LAB_001076f5:
    cVar4 = RefCounted::unreference();
    if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar8), cVar4 != '\0')) {
      (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
      Memory::free_static(pOVar8,false);
    }
  }
  if (pOVar7 != (Object *)0x0) {
LAB_0010770e:
    cVar4 = RefCounted::unreference();
    if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar7), cVar4 != '\0')) {
      (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
      Memory::free_static(pOVar7,false);
    }
  }
  goto LAB_0010733a;
}



/* EditorVisualProfiler::_combo_changed(int) */

void EditorVisualProfiler::_combo_changed(int param_1)

{
  undefined4 in_register_0000003c;
  
  _update_frame((EditorVisualProfiler *)CONCAT44(in_register_0000003c,param_1),false);
  _update_plot((EditorVisualProfiler *)CONCAT44(in_register_0000003c,param_1));
  return;
}



/* EditorVisualProfiler::_activate_pressed() */

void __thiscall EditorVisualProfiler::_activate_pressed(EditorVisualProfiler *this)

{
  Ref *pRVar1;
  String *pSVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long in_FS_OFFSET;
  undefined8 local_98;
  undefined8 local_90;
  Object *local_88;
  undefined8 local_80;
  Variant *local_78 [2];
  int local_68 [6];
  undefined8 local_50;
  undefined1 local_48 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  cVar3 = BaseButton::is_pressed();
  if (cVar3 == '\0') {
    pRVar1 = *(Ref **)(this + 0xa10);
    if (_activate_pressed()::{lambda()#2}::operator()()::sname == '\0') {
      iVar5 = __cxa_guard_acquire(&_activate_pressed()::{lambda()#2}::operator()()::sname);
      if (iVar5 != 0) {
        _scs_create((char *)&_activate_pressed()::{lambda()#2}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_activate_pressed()::{lambda()#2}::operator()()::sname
                     ,&__dso_handle);
        __cxa_guard_release(&_activate_pressed()::{lambda()#2}::operator()()::sname);
      }
    }
    Control::get_editor_theme_icon((StringName *)&local_88);
    Button::set_button_icon(pRVar1);
    if (local_88 != (Object *)0x0) {
      cVar3 = RefCounted::unreference();
      if (cVar3 != '\0') {
        cVar3 = predelete_handler(local_88);
        if (cVar3 != '\0') {
          (**(code **)(*(long *)local_88 + 0x140))(local_88);
          Memory::free_static(local_88,false);
        }
      }
    }
    local_88 = (Object *)&_LC22;
    pSVar2 = *(String **)(this + 0xa10);
    local_90 = 0;
    local_80 = 0;
    String::parse_latin1((StrRange *)&local_90);
    local_88 = (Object *)0x109986;
    local_98 = 0;
    local_80 = 5;
    String::parse_latin1((StrRange *)&local_98);
    TTR((String *)&local_88,(String *)&local_98);
    Button::set_text(pSVar2);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  }
  else {
    pRVar1 = *(Ref **)(this + 0xa10);
    if (_activate_pressed()::{lambda()#1}::operator()()::sname == '\0') {
      iVar5 = __cxa_guard_acquire(&_activate_pressed()::{lambda()#1}::operator()()::sname);
      if (iVar5 != 0) {
        _scs_create((char *)&_activate_pressed()::{lambda()#1}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_activate_pressed()::{lambda()#1}::operator()()::sname
                     ,&__dso_handle);
        __cxa_guard_release(&_activate_pressed()::{lambda()#1}::operator()()::sname);
      }
    }
    Control::get_editor_theme_icon((StringName *)&local_88);
    Button::set_button_icon(pRVar1);
    if (local_88 != (Object *)0x0) {
      cVar3 = RefCounted::unreference();
      if (cVar3 != '\0') {
        cVar3 = predelete_handler(local_88);
        if (cVar3 != '\0') {
          (**(code **)(*(long *)local_88 + 0x140))(local_88);
          Memory::free_static(local_88,false);
        }
      }
    }
    pSVar2 = *(String **)(this + 0xa10);
    local_88 = (Object *)&_LC22;
    local_90 = 0;
    local_80 = 0;
    String::parse_latin1((StrRange *)&local_90);
    local_88 = (Object *)&_LC31;
    local_98 = 0;
    local_80 = 4;
    String::parse_latin1((StrRange *)&local_98);
    TTR((String *)&local_88,(String *)&local_98);
    Button::set_text(pSVar2);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xa18),0));
    clear(this);
    _update_plot(this);
    BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xa18),0));
  }
  bVar4 = (bool)BaseButton::is_pressed();
  if (_activate_pressed()::{lambda()#3}::operator()()::sname == '\0') {
    iVar5 = __cxa_guard_acquire(&_activate_pressed()::{lambda()#3}::operator()()::sname);
    if (iVar5 != 0) {
      _scs_create((char *)&_activate_pressed()::{lambda()#3}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_activate_pressed()::{lambda()#3}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_activate_pressed()::{lambda()#3}::operator()()::sname);
    }
  }
  Variant::Variant((Variant *)local_68,bVar4);
  local_50 = 0;
  local_48 = (undefined1  [16])0x0;
  local_78[0] = (Variant *)local_68;
  (**(code **)(*(long *)this + 0xd0))
            (this,&_activate_pressed()::{lambda()#3}::operator()()::sname,local_78,1);
  if (Variant::needs_deinit[(int)local_50] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_68[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
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



/* Control::_top_level_changed() */

void Control::_top_level_changed(void)

{
  return;
}



/* CallableCustomMethodPointer<EditorVisualProfiler, void, Ref<InputEvent>
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorVisualProfiler,void,Ref<InputEvent>const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorVisualProfiler,void,Ref<InputEvent>const&> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorVisualProfiler, void, double>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<EditorVisualProfiler,void,double>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorVisualProfiler,void,double> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorVisualProfiler, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorVisualProfiler,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorVisualProfiler,void,int> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorVisualProfiler, void, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorVisualProfiler,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorVisualProfiler,void,bool> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorVisualProfiler, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorVisualProfiler,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorVisualProfiler,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorVisualProfiler, void, Ref<InputEvent>
   const&>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorVisualProfiler,void,Ref<InputEvent>const&>::get_argument_count
          (CallableCustomMethodPointer<EditorVisualProfiler,void,Ref<InputEvent>const&> *this,
          bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<EditorVisualProfiler, void, double>::get_argument_count(bool&) const
    */

undefined8 __thiscall
CallableCustomMethodPointer<EditorVisualProfiler,void,double>::get_argument_count
          (CallableCustomMethodPointer<EditorVisualProfiler,void,double> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<EditorVisualProfiler, void, int>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorVisualProfiler,void,int>::get_argument_count
          (CallableCustomMethodPointer<EditorVisualProfiler,void,int> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<EditorVisualProfiler, void, bool>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorVisualProfiler,void,bool>::get_argument_count
          (CallableCustomMethodPointer<EditorVisualProfiler,void,bool> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<EditorVisualProfiler, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorVisualProfiler,void>::get_argument_count
          (CallableCustomMethodPointer<EditorVisualProfiler,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointerBase::get_method() const */

void CallableCustomMethodPointerBase::get_method(void)

{
  long in_RSI;
  StringName *in_RDI;
  
  StringName::StringName(in_RDI,*(char **)(in_RSI + 0x20),false);
  return;
}



/* CallableCustomMethodPointer<EditorVisualProfiler, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorVisualProfiler,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorVisualProfiler,void,int> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorVisualProfiler, void, double>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<EditorVisualProfiler,void,double>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorVisualProfiler,void,double> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorVisualProfiler, void, Ref<InputEvent>
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorVisualProfiler,void,Ref<InputEvent>const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorVisualProfiler,void,Ref<InputEvent>const&> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorVisualProfiler, void, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorVisualProfiler,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorVisualProfiler,void,bool> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorVisualProfiler, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorVisualProfiler,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorVisualProfiler,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* HBoxContainer::_property_get_revertv(StringName const&, Variant&) const */

undefined8 HBoxContainer::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* HSplitContainer::_property_get_revertv(StringName const&, Variant&) const */

undefined8 HSplitContainer::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* EditorVisualProfiler::_property_get_revertv(StringName const&, Variant&) const */

undefined8 EditorVisualProfiler::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* HBoxContainer::_property_can_revertv(StringName const&) const */

undefined8 HBoxContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00114008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* HSplitContainer::_property_can_revertv(StringName const&) const */

undefined8 HSplitContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00114008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* EditorVisualProfiler::_property_can_revertv(StringName const&) const */

undefined8 EditorVisualProfiler::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00114008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* CallableCustomMethodPointer<EditorVisualProfiler, void, int>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorVisualProfiler,void,int>::get_object
          (CallableCustomMethodPointer<EditorVisualProfiler,void,int> *this)

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
      goto LAB_0010848d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010848d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010848d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorVisualProfiler, void, Ref<InputEvent> const&>::get_object()
   const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorVisualProfiler,void,Ref<InputEvent>const&>::get_object
          (CallableCustomMethodPointer<EditorVisualProfiler,void,Ref<InputEvent>const&> *this)

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
      goto LAB_0010858d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010858d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010858d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorVisualProfiler, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorVisualProfiler,void>::get_object
          (CallableCustomMethodPointer<EditorVisualProfiler,void> *this)

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
      goto LAB_0010868d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010868d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010868d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorVisualProfiler, void, double>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorVisualProfiler,void,double>::get_object
          (CallableCustomMethodPointer<EditorVisualProfiler,void,double> *this)

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
      goto LAB_0010878d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010878d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010878d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorVisualProfiler, void, bool>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorVisualProfiler,void,bool>::get_object
          (CallableCustomMethodPointer<EditorVisualProfiler,void,bool> *this)

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
      goto LAB_0010888d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010888d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010888d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* HBoxContainer::_validate_propertyv(PropertyInfo&) const */

void HBoxContainer::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_00114010 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* HSplitContainer::_validate_propertyv(PropertyInfo&) const */

void HSplitContainer::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_00114018 == Control::_validate_property) {
    return;
  }
  SplitContainer::_validate_property(param_1);
  return;
}



/* EditorVisualProfiler::_validate_propertyv(PropertyInfo&) const */

void EditorVisualProfiler::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_00114010 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* HSplitContainer::is_class_ptr(void*) const */

uint HSplitContainer::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x110a,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1109,in_RSI == &SplitContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x110a,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x110a,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x110a,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* HBoxContainer::is_class_ptr(void*) const */

uint HBoxContainer::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x110a,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x110a,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x110a,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x110a,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x110a,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* EditorVisualProfiler::is_class_ptr(void*) const */

ulong EditorVisualProfiler::is_class_ptr(void *param_1)

{
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  if (in_RSI == &VBoxContainer::get_class_ptr_static()::ptr ||
      in_RSI == &get_class_ptr_static()::ptr) {
    return CONCAT71(0x110a,in_RSI == &VBoxContainer::get_class_ptr_static()::ptr ||
                           in_RSI == &get_class_ptr_static()::ptr);
  }
  return (ulong)((uint)CONCAT71(0x110a,in_RSI == &Container::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x110a,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x110a,in_RSI == &Control::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x110a,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x110a,in_RSI == &Node::get_class_ptr_static()::ptr) |
                CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr));
}



/* EditorVisualProfiler::_setv(StringName const&, Variant const&) */

undefined8 EditorVisualProfiler::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_00114020 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* HSplitContainer::_setv(StringName const&, Variant const&) */

undefined8 HSplitContainer::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_00114020 != CanvasItem::_set) {
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
    if ((code *)PTR__set_00114020 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00108dc8) */
/* EditorVisualProfiler::_getv(StringName const&, Variant&) const */

undefined8 EditorVisualProfiler::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00114028 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00108e38) */
/* HSplitContainer::_getv(StringName const&, Variant&) const */

undefined8 HSplitContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00114028 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00108ea8) */
/* HBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 HBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00114028 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* HSplitContainer::_get_class_namev() const */

undefined8 * HSplitContainer::_get_class_namev(void)

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
LAB_00108f03:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00108f03;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"HSplitContainer");
      goto LAB_00108f6e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"HSplitContainer");
LAB_00108f6e:
  return &_get_class_namev()::_class_name_static;
}



/* EditorVisualProfiler::_get_class_namev() const */

undefined8 * EditorVisualProfiler::_get_class_namev(void)

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
                ((StringName *)&_get_class_namev()::_class_name_static,"EditorVisualProfiler");
      goto LAB_0010905e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"EditorVisualProfiler");
LAB_0010905e:
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
LAB_001090e3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001090e3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
      goto LAB_0010914e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
LAB_0010914e:
  return &_get_class_namev()::_class_name_static;
}



/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(undefined **)this = &Image::vtable;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001091e0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_001091e0:
  Control::~Control((Control *)this);
  return;
}



/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(undefined **)this = &Image::vtable;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00109240;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00109240:
  Control::~Control((Control *)this);
  operator_delete(this,0xa10);
  return;
}



/* Image::~Image() */

void __thiscall Image::~Image(Image *this)

{
  long *plVar1;
  long lVar2;
  
  *(code **)this = Memory::free_static;
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



/* HBoxContainer::_notificationv(int, bool) */

void __thiscall HBoxContainer::_notificationv(HBoxContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_00114030 != Container::_notification) {
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
  if ((code *)PTR__notification_00114030 == Container::_notification) {
    return;
  }
  BoxContainer::_notification(iVar1);
  return;
}



/* HSplitContainer::_notificationv(int, bool) */

void __thiscall HSplitContainer::_notificationv(HSplitContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_00114038 != Container::_notification) {
      SplitContainer::_notification(iVar1);
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
  if ((code *)PTR__notification_00114038 == Container::_notification) {
    return;
  }
  SplitContainer::_notification(iVar1);
  return;
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



/* HSplitContainer::~HSplitContainer() */

void __thiscall HSplitContainer::~HSplitContainer(HSplitContainer *this)

{
  Object *pOVar1;
  char cVar2;
  bool bVar3;
  
  *(code **)this = predelete_handler;
  if (*(long *)(this + 0xa60) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa60);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xa50) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa50);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xa48) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa48);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xa40) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa40);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  bVar3 = StringName::configured != '\0';
  *(undefined **)this = &Image::vtable;
  if (bVar3) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010962f;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010962f:
  Control::~Control((Control *)this);
  return;
}



/* HSplitContainer::~HSplitContainer() */

void __thiscall HSplitContainer::~HSplitContainer(HSplitContainer *this)

{
  Object *pOVar1;
  char cVar2;
  bool bVar3;
  
  *(code **)this = predelete_handler;
  if (*(long *)(this + 0xa60) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa60);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xa50) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa50);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xa48) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa48);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xa40) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa40);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  bVar3 = StringName::configured != '\0';
  *(undefined **)this = &Image::vtable;
  if (bVar3) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001097df;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_001097df:
  Control::~Control((Control *)this);
  operator_delete(this,0xa70);
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



/* CowData<Color>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Color>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* EditorVisualProfiler::_get_time_as_text(float) [clone .cold] */

void EditorVisualProfiler::_get_time_as_text(float param_1)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* EditorVisualProfiler::_bind_methods() [clone .cold] */

void EditorVisualProfiler::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<EditorVisualProfiler::Metric::Area>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<EditorVisualProfiler::Metric::Area>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<EditorVisualProfiler::Metric>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<EditorVisualProfiler::Metric>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<EditorVisualProfiler::Metric>::resize<false>(long) [clone .isra.0] [clone .cold] */

void CowData<EditorVisualProfiler::Metric>::resize<false>(long param_1)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



void FUN_00109b74(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* Error CowData<Color>::resize<false>(long) [clone .isra.0] [clone .cold] */

void CowData<Color>::resize<false>(long param_1)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00109b88(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EditorVisualProfiler::_update_plot() [clone .cold] */

void EditorVisualProfiler::_update_plot(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
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



/* Image::~Image() */

void __thiscall Image::~Image(Image *this)

{
  long *plVar1;
  long lVar2;
  
  *(code **)this = Memory::free_static;
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



/* WARNING: Removing unreachable block (ram,0x00109d00) */
/* EditorVisualProfiler::_notificationv(int, bool) */

void __thiscall
EditorVisualProfiler::_notificationv(EditorVisualProfiler *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    _notification(this,param_1);
    if ((code *)PTR__notification_00114030 != Container::_notification) {
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
  if ((code *)PTR__notification_00114030 != Container::_notification) {
    BoxContainer::_notification(iVar1);
  }
  _notification(this,param_1);
  return;
}



/* void Ref<ImageTexture>::instantiate<>() */

void __thiscall Ref<ImageTexture>::instantiate<>(Ref<ImageTexture> *this)

{
  char cVar1;
  ImageTexture *this_00;
  Object *pOVar2;
  Object *pOVar3;
  
  this_00 = (ImageTexture *)operator_new(0x318,"");
  ImageTexture::ImageTexture(this_00);
  postinitialize_handler((Object *)this_00);
  cVar1 = RefCounted::init_ref();
  if (cVar1 == '\0') {
    pOVar3 = *(Object **)this;
    if (pOVar3 == (Object *)0x0) {
      return;
    }
    *(undefined8 *)this = 0;
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
    pOVar3 = *(Object **)this;
    pOVar2 = pOVar3;
    if (this_00 == (ImageTexture *)pOVar3) goto LAB_00109e35;
    *(ImageTexture **)this = this_00;
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *(undefined8 *)this = 0;
    }
    pOVar2 = (Object *)this_00;
    if (((pOVar3 == (Object *)0x0) || (cVar1 = RefCounted::unreference(), cVar1 == '\0')) ||
       (cVar1 = predelete_handler(pOVar3), cVar1 == '\0')) goto LAB_00109e35;
  }
  (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
  Memory::free_static(pOVar3,false);
  pOVar2 = (Object *)this_00;
  if (this_00 == (ImageTexture *)0x0) {
    return;
  }
LAB_00109e35:
  cVar1 = RefCounted::unreference();
  if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar2), cVar1 != '\0')) {
    (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
    Memory::free_static(pOVar2,false);
    return;
  }
  return;
}



/* Callable create_custom_callable_function_pointer<EditorVisualProfiler>(EditorVisualProfiler*,
   char const*, void (EditorVisualProfiler::*)()) */

EditorVisualProfiler *
create_custom_callable_function_pointer<EditorVisualProfiler>
          (EditorVisualProfiler *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC22;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00110640;
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



/* Callable create_custom_callable_function_pointer<EditorVisualProfiler,
   bool>(EditorVisualProfiler*, char const*, void (EditorVisualProfiler::*)(bool)) */

EditorVisualProfiler *
create_custom_callable_function_pointer<EditorVisualProfiler,bool>
          (EditorVisualProfiler *param_1,char *param_2,_func_void_bool *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC22;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_001106d0;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_void_bool **)(this + 0x20) = param_3 + 1;
  Callable::Callable((Callable *)param_1,this);
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



/* String::~String() */

void __thiscall String::~String(String *this)

{
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
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



/* HSplitContainer::get_class() const */

void HSplitContainer::get_class(void)

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



/* EditorVisualProfiler::get_class() const */

void EditorVisualProfiler::get_class(void)

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



/* CallableCustomMethodPointer<EditorVisualProfiler, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorVisualProfiler,void>::call
          (CallableCustomMethodPointer<EditorVisualProfiler,void> *this,Variant **param_1,
          int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  ulong *puVar4;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar5;
  long in_FS_OFFSET;
  bool bVar6;
  CowData<char32_t> local_50 [8];
  CowData<char32_t> local_48 [8];
  undefined8 local_40;
  String local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar3 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_38[0] = (String)0x0;
      LOCK();
      bVar6 = (char)ObjectDB::spin_lock == '\0';
      if (bVar6) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar6) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar4 = (ulong *)((ulong)uVar3 * 0x10 + ObjectDB::object_slots);
    uVar5 = *(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff;
    if (uVar5 != (*puVar4 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0010a50f;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_0010a50f;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010a4e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_0010a5c0;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0010a50f:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC50,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0010a5c0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<EditorVisualProfiler, void, Ref<InputEvent> const&>::call(Variant
   const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorVisualProfiler,void,Ref<InputEvent>const&>::call
          (CallableCustomMethodPointer<EditorVisualProfiler,void,Ref<InputEvent>const&> *this,
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
  CowData<char32_t> local_50 [8];
  CowData<char32_t> local_48 [8];
  undefined8 local_40;
  Object *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar8 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar8 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar3 = (ulong)local_38 >> 8;
      local_38 = (Object *)(uVar3 << 8);
      LOCK();
      bVar11 = (char)ObjectDB::spin_lock == '\0';
      if (bVar11) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar11) break;
      local_38 = (Object *)(uVar3 << 8);
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
          goto LAB_0010a69e;
        }
        if (param_2 == 0) {
          *(undefined4 *)param_4 = 4;
          *(undefined4 *)(param_4 + 8) = 1;
          goto LAB_0010a69e;
        }
        *(undefined4 *)param_4 = 0;
        if (((ulong)pcVar10 & 1) != 0) {
          pcVar10 = *(code **)(pcVar10 + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar6 = Variant::can_convert_strict(*(undefined4 *)*param_1);
        uVar4 = _LC51;
        if (cVar6 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        local_38 = (Object *)0x0;
        pOVar7 = (Object *)Variant::get_validated_object();
        pOVar5 = local_38;
        if (pOVar7 != local_38) {
          if (pOVar7 == (Object *)0x0) {
            if (local_38 != (Object *)0x0) {
              local_38 = (Object *)0x0;
LAB_0010a76d:
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
              local_38 = pOVar7;
              if ((pOVar7 != (Object *)0x0) && (cVar6 = RefCounted::reference(), cVar6 == '\0')) {
                local_38 = (Object *)0x0;
              }
              if (pOVar5 != (Object *)0x0) goto LAB_0010a76d;
            }
          }
        }
        (*pcVar10)((long *)(lVar1 + lVar2));
        if (((local_38 != (Object *)0x0) &&
            (cVar6 = RefCounted::unreference(), pOVar5 = local_38, cVar6 != '\0')) &&
           (cVar6 = predelete_handler(local_38), cVar6 != '\0')) {
          (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
          Memory::free_static(pOVar5,false);
        }
        goto LAB_0010a69e;
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
  local_40 = 0;
  String::parse_latin1((String *)&local_40,"\', can\'t call method.");
  uitos((ulong)local_50);
  operator+((char *)local_48,(String *)"Invalid Object id \'");
  String::operator+((String *)&local_38,(String *)local_48);
  _err_print_error(&_LC50,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (String *)&local_38,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
  CowData<char32_t>::_unref(local_48);
  CowData<char32_t>::_unref(local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
LAB_0010a69e:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<EditorVisualProfiler, void, double>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorVisualProfiler,void,double>::call
          (CallableCustomMethodPointer<EditorVisualProfiler,void,double> *this,Variant **param_1,
          int param_2,Variant *param_3,CallError *param_4)

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
      goto LAB_0010aaf6;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar6[1] == 0) goto LAB_0010aaf6;
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
        uVar3 = _LC52;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        Variant::operator_cast_to_double(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010aaa5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2));
          return;
        }
        goto LAB_0010aba7;
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
LAB_0010aaf6:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC50,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0010aba7:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<EditorVisualProfiler, void, int>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorVisualProfiler,void,int>::call
          (CallableCustomMethodPointer<EditorVisualProfiler,void,int> *this,Variant **param_1,
          int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  ulong *puVar7;
  code *UNRECOVERED_JUMPTABLE;
  long in_FS_OFFSET;
  bool bVar8;
  CowData<char32_t> local_50 [8];
  CowData<char32_t> local_48 [8];
  undefined8 local_40;
  String local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar6 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_38[0] = (String)0x0;
      LOCK();
      bVar8 = (char)ObjectDB::spin_lock == '\0';
      if (bVar8) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar8) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar7 = (ulong *)((ulong)uVar6 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar7 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0010ad68;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar7[1] == 0) goto LAB_0010ad68;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if ((uint)param_2 < 2) {
      if (param_2 != 0) {
        *(undefined4 *)param_4 = 0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,2);
        uVar3 = _LC53;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        iVar5 = Variant::operator_cast_to_int(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010ad17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),iVar5);
          return;
        }
        goto LAB_0010ae19;
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
LAB_0010ad68:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC50,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0010ae19:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<EditorVisualProfiler, void, bool>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorVisualProfiler,void,bool>::call
          (CallableCustomMethodPointer<EditorVisualProfiler,void,bool> *this,Variant **param_1,
          int param_2,Variant *param_3,CallError *param_4)

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
      goto LAB_0010afd9;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar6[1] == 0) goto LAB_0010afd9;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if ((uint)param_2 < 2) {
      if (param_2 != 0) {
        *(undefined4 *)param_4 = 0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,1);
        uVar3 = _LC54;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        bVar7 = Variant::operator_cast_to_bool(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010af88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),bVar7);
          return;
        }
        goto LAB_0010b08a;
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
LAB_0010afd9:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC50,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0010b08a:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* CanvasItem::is_class(String const&) const */

undefined8 __thiscall CanvasItem::is_class(CanvasItem *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  char cVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
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
        if (*(long *)(lVar4 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar4 + 0x10));
        }
      }
      else {
        local_50 = strlen(pcVar3);
        local_58 = pcVar3;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar5 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar5 != '\0') goto LAB_0010b32b;
  }
  cVar5 = String::operator==(param_1,"CanvasItem");
  if (cVar5 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar4 = *(long *)(lVar2 + 0x20);
      if (lVar4 == 0) {
        local_60 = 0;
      }
      else {
        pcVar3 = *(char **)(lVar4 + 8);
        local_60 = 0;
        if (pcVar3 == (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar4 + 0x10));
        }
        else {
          local_50 = strlen(pcVar3);
          local_58 = pcVar3;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar5 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar5 != '\0') goto LAB_0010b32b;
    }
    cVar5 = String::operator==(param_1,"Node");
    if (cVar5 == '\0') {
      for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
        lVar4 = *(long *)(lVar2 + 0x20);
        if (lVar4 == 0) {
          local_60 = 0;
        }
        else {
          pcVar3 = *(char **)(lVar4 + 8);
          local_60 = 0;
          if (pcVar3 == (char *)0x0) {
            if (*(long *)(lVar4 + 0x10) != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar4 + 0x10));
            }
          }
          else {
            local_50 = strlen(pcVar3);
            local_58 = pcVar3;
            String::parse_latin1((StrRange *)&local_60);
          }
        }
        cVar5 = String::operator==(param_1,(String *)&local_60);
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
        if (cVar5 != '\0') goto LAB_0010b32b;
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = String::operator==(param_1,"Object");
        return uVar6;
      }
      goto LAB_0010b508;
    }
  }
LAB_0010b32b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010b508:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Container::is_class(String const&) const */

undefined8 __thiscall Container::is_class(Container *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  char cVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
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
        if (*(long *)(lVar4 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar4 + 0x10));
        }
      }
      else {
        local_50 = strlen(pcVar3);
        local_58 = pcVar3;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar5 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar5 != '\0') goto LAB_0010b61b;
  }
  cVar5 = String::operator==(param_1,"Container");
  if (cVar5 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar4 = *(long *)(lVar2 + 0x20);
      if (lVar4 == 0) {
        local_60 = 0;
      }
      else {
        pcVar3 = *(char **)(lVar4 + 8);
        local_60 = 0;
        if (pcVar3 == (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar4 + 0x10));
        }
        else {
          local_50 = strlen(pcVar3);
          local_58 = pcVar3;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar5 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar5 != '\0') goto LAB_0010b61b;
    }
    cVar5 = String::operator==(param_1,"Control");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = CanvasItem::is_class((CanvasItem *)this,param_1);
        return uVar6;
      }
      goto LAB_0010b71e;
    }
  }
LAB_0010b61b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010b71e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* BoxContainer::is_class(String const&) const */

undefined8 __thiscall BoxContainer::is_class(BoxContainer *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *__s;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
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
        if (*(long *)(lVar3 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
        }
      }
      else {
        local_50 = strlen(__s);
        local_58 = __s;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar4 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar4 != '\0') goto LAB_0010b82b;
  }
  cVar4 = String::operator==(param_1,"BoxContainer");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = Container::is_class((Container *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0010b82b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorVisualProfiler::is_class(String const&) const */

undefined8 __thiscall EditorVisualProfiler::is_class(EditorVisualProfiler *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  char cVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
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
        if (*(long *)(lVar4 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar4 + 0x10));
        }
      }
      else {
        local_50 = strlen(pcVar3);
        local_58 = pcVar3;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar5 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar5 != '\0') goto LAB_0010b98b;
  }
  cVar5 = String::operator==(param_1,"EditorVisualProfiler");
  if (cVar5 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar4 = *(long *)(lVar2 + 0x20);
      if (lVar4 == 0) {
        local_60 = 0;
      }
      else {
        pcVar3 = *(char **)(lVar4 + 8);
        local_60 = 0;
        if (pcVar3 == (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar4 + 0x10));
        }
        else {
          local_50 = strlen(pcVar3);
          local_58 = pcVar3;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar5 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar5 != '\0') goto LAB_0010b98b;
    }
    cVar5 = String::operator==(param_1,"VBoxContainer");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = BoxContainer::is_class((BoxContainer *)this,param_1);
        return uVar6;
      }
      goto LAB_0010ba8e;
    }
  }
LAB_0010b98b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010ba8e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HSplitContainer::is_class(String const&) const */

undefined8 __thiscall HSplitContainer::is_class(HSplitContainer *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  char cVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
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
        if (*(long *)(lVar4 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar4 + 0x10));
        }
      }
      else {
        local_50 = strlen(pcVar3);
        local_58 = pcVar3;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar5 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar5 != '\0') goto LAB_0010bbab;
  }
  cVar5 = String::operator==(param_1,"HSplitContainer");
  if (cVar5 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar4 = *(long *)(lVar2 + 0x20);
      if (lVar4 == 0) {
        local_60 = 0;
      }
      else {
        pcVar3 = *(char **)(lVar4 + 8);
        local_60 = 0;
        if (pcVar3 == (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar4 + 0x10));
        }
        else {
          local_50 = strlen(pcVar3);
          local_58 = pcVar3;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar5 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar5 != '\0') goto LAB_0010bbab;
    }
    cVar5 = String::operator==(param_1,"SplitContainer");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Container::is_class((Container *)this,param_1);
        return uVar6;
      }
      goto LAB_0010bcae;
    }
  }
LAB_0010bbab:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010bcae:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HBoxContainer::_initialize_classv() */

void HBoxContainer::_initialize_classv(void)

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
    if (BoxContainer::initialize_class()::initialized == '\0') {
      if (Container::initialize_class()::initialized == '\0') {
        if (Control::initialize_class()::initialized == '\0') {
          if (CanvasItem::initialize_class()::initialized == '\0') {
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
              if ((code *)PTR__bind_methods_00114050 != Node::_bind_methods) {
                Node::_bind_methods();
              }
              Node::initialize_class()::initialized = '\x01';
            }
            local_60 = 0;
            String::parse_latin1((String *)&local_60,"Node");
            StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
            local_70 = 0;
            String::parse_latin1((String *)&local_70,"CanvasItem");
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
            CanvasItem::_bind_methods();
            if ((code *)PTR__bind_compatibility_methods_00114040 !=
                Object::_bind_compatibility_methods) {
              CanvasItem::_bind_compatibility_methods();
            }
            CanvasItem::initialize_class()::initialized = '\x01';
          }
          local_60 = 0;
          String::parse_latin1((String *)&local_60,"CanvasItem");
          StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
          local_70 = 0;
          String::parse_latin1((String *)&local_70,"Control");
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
          Control::_bind_methods();
          Control::initialize_class()::initialized = '\x01';
        }
        local_60 = 0;
        String::parse_latin1((String *)&local_60,"Control");
        StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
        local_70 = 0;
        String::parse_latin1((String *)&local_70,"Container");
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
        Container::_bind_methods();
        Container::initialize_class()::initialized = '\x01';
      }
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"Container");
      StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
      local_70 = 0;
      String::parse_latin1((String *)&local_70,"BoxContainer");
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
      if ((code *)PTR__bind_methods_00114048 != Container::_bind_methods) {
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



/* HSplitContainer::_initialize_classv() */

void HSplitContainer::_initialize_classv(void)

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
    if (SplitContainer::initialize_class()::initialized == '\0') {
      if (Container::initialize_class()::initialized == '\0') {
        if (Control::initialize_class()::initialized == '\0') {
          if (CanvasItem::initialize_class()::initialized == '\0') {
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
              if ((code *)PTR__bind_methods_00114050 != Node::_bind_methods) {
                Node::_bind_methods();
              }
              Node::initialize_class()::initialized = '\x01';
            }
            local_60 = 0;
            String::parse_latin1((String *)&local_60,"Node");
            StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
            local_70 = 0;
            String::parse_latin1((String *)&local_70,"CanvasItem");
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
            CanvasItem::_bind_methods();
            if ((code *)PTR__bind_compatibility_methods_00114040 !=
                Object::_bind_compatibility_methods) {
              CanvasItem::_bind_compatibility_methods();
            }
            CanvasItem::initialize_class()::initialized = '\x01';
          }
          local_60 = 0;
          String::parse_latin1((String *)&local_60,"CanvasItem");
          StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
          local_70 = 0;
          String::parse_latin1((String *)&local_70,"Control");
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
          Control::_bind_methods();
          Control::initialize_class()::initialized = '\x01';
        }
        local_60 = 0;
        String::parse_latin1((String *)&local_60,"Control");
        StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
        local_70 = 0;
        String::parse_latin1((String *)&local_70,"Container");
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
        Container::_bind_methods();
        Container::initialize_class()::initialized = '\x01';
      }
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"Container");
      StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
      local_70 = 0;
      String::parse_latin1((String *)&local_70,"SplitContainer");
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
      if ((code *)PTR__bind_methods_00114058 != Container::_bind_methods) {
        SplitContainer::_bind_methods();
      }
      SplitContainer::initialize_class()::initialized = '\x01';
    }
    local_58 = "SplitContainer";
    local_68 = 0;
    local_50 = 0xe;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "HSplitContainer";
    local_70 = 0;
    local_50 = 0xf;
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



/* PropertyListHelper::~PropertyListHelper() */

void __thiscall PropertyListHelper::~PropertyListHelper(PropertyListHelper *this)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  
  pvVar3 = *(void **)(this + 0x18);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(this + 0x3c) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x38) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x3c) = 0;
        *(undefined1 (*) [16])(this + 0x28) = (undefined1  [16])0x0;
      }
      else {
        lVar2 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x20) + lVar2) != 0) {
            pvVar3 = *(void **)((long)pvVar3 + lVar2 * 2);
            *(int *)(*(long *)(this + 0x20) + lVar2) = 0;
            if (Variant::needs_deinit[*(int *)((long)pvVar3 + 0x48)] != '\0') {
              Variant::_clear_internal();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar3 + 0x38));
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar3 + 0x28) != 0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar3 + 0x20));
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar3 + 0x10));
            Memory::free_static(pvVar3,false);
            pvVar3 = *(void **)(this + 0x18);
            *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
          }
          lVar2 = lVar2 + 4;
        } while (lVar2 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0x3c) = 0;
        *(undefined1 (*) [16])(this + 0x28) = (undefined1  [16])0x0;
        if (pvVar3 == (void *)0x0) goto LAB_0010c96f;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_0010c96f:
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  return;
}



/* HBoxContainer::is_class(String const&) const */

undefined8 __thiscall HBoxContainer::is_class(HBoxContainer *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  char cVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
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
        if (*(long *)(lVar4 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar4 + 0x10));
        }
      }
      else {
        local_50 = strlen(pcVar3);
        local_58 = pcVar3;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar5 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar5 != '\0') goto LAB_0010cacb;
  }
  cVar5 = String::operator==(param_1,"HBoxContainer");
  if (cVar5 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar4 = *(long *)(lVar2 + 0x20);
      if (lVar4 == 0) {
        local_60 = 0;
      }
      else {
        pcVar3 = *(char **)(lVar4 + 8);
        local_60 = 0;
        if (pcVar3 == (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar4 + 0x10));
        }
        else {
          local_50 = strlen(pcVar3);
          local_58 = pcVar3;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar5 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar5 != '\0') goto LAB_0010cacb;
    }
    cVar5 = String::operator==(param_1,"BoxContainer");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Container::is_class((Container *)this,param_1);
        return uVar6;
      }
      goto LAB_0010cbce;
    }
  }
LAB_0010cacb:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010cbce:
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
  local_78 = &_LC61;
  local_88 = 0;
  local_90 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = &_LC61;
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
      goto LAB_0010ce5c;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010ce5c:
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



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CanvasItem::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void CanvasItem::_get_property_listv(List *param_1,bool param_2)

{
  char in_DL;
  undefined7 in_register_00000031;
  long in_FS_OFFSET;
  undefined8 local_98;
  undefined8 local_90;
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
  if (in_DL == '\0') {
    Node::_get_property_listv(param_1,param_2);
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
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
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
  }
  else {
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
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
  StringName::StringName((StringName *)&local_78,"CanvasItem",false);
  ClassDB::get_property_list
            ((StringName *)&local_78,(List *)CONCAT71(in_register_00000031,param_2),true,
             (Object *)param_1);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if ((code *)PTR__get_property_list_00114060 != Object::_get_property_list) {
    CanvasItem::_get_property_list(param_1);
  }
  if (in_DL == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    Node::_get_property_listv(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Control::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Control::_get_property_listv(Control *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  long local_98;
  undefined8 local_90;
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
    CanvasItem::_get_property_listv((List *)this,SUB81(param_1,0));
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
  }
  else {
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
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
  StringName::StringName((StringName *)&local_78,"Control",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if ((code *)PTR__get_property_list_00114068 != CanvasItem::_get_property_list) {
    Control::_get_property_list((List *)this);
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      CanvasItem::_get_property_listv((List *)this,SUB81(param_1,0));
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
  undefined8 local_98;
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
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
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
      goto LAB_0010d621;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010d621:
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
  long local_98;
  undefined8 local_90;
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
  }
  else {
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
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
  undefined8 local_98;
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
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
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
      goto LAB_0010db71;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010db71:
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



/* EditorVisualProfiler::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
EditorVisualProfiler::_get_property_listv(EditorVisualProfiler *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  CowData<char32_t> *local_b0;
  undefined8 local_98;
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
    VBoxContainer::_get_property_listv((VBoxContainer *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "EditorVisualProfiler";
  local_70 = 0x14;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorVisualProfiler";
  local_98 = 0;
  local_70 = 0x14;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
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
      goto LAB_0010de21;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010de21:
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
  StringName::StringName((StringName *)&local_78,"EditorVisualProfiler",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      VBoxContainer::_get_property_listv((VBoxContainer *)this,param_1,true);
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
  undefined8 local_98;
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
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
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
      goto LAB_0010e0d1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010e0d1:
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



/* SplitContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall SplitContainer::_get_property_listv(SplitContainer *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  CowData<char32_t> *local_b0;
  undefined8 local_98;
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
  local_78 = "SplitContainer";
  local_70 = 0xe;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "SplitContainer";
  local_98 = 0;
  local_70 = 0xe;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
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
      goto LAB_0010e381;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010e381:
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
  StringName::StringName((StringName *)&local_78,"SplitContainer",false);
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



/* HSplitContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
HSplitContainer::_get_property_listv(HSplitContainer *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  CowData<char32_t> *local_b0;
  undefined8 local_98;
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
    SplitContainer::_get_property_listv((SplitContainer *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "HSplitContainer";
  local_70 = 0xf;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "HSplitContainer";
  local_98 = 0;
  local_70 = 0xf;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
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
      goto LAB_0010e631;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010e631:
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
  StringName::StringName((StringName *)&local_78,"HSplitContainer",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      SplitContainer::_get_property_listv((SplitContainer *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorVisualProfiler::_initialize_classv() */

void EditorVisualProfiler::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_70;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (VBoxContainer::initialize_class()::initialized == '\0') {
      if (BoxContainer::initialize_class()::initialized == '\0') {
        if (Container::initialize_class()::initialized == '\0') {
          if (Control::initialize_class()::initialized == '\0') {
            if (CanvasItem::initialize_class()::initialized == '\0') {
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
                if ((code *)PTR__bind_methods_00114050 != Node::_bind_methods) {
                  Node::_bind_methods();
                }
                Node::initialize_class()::initialized = '\x01';
              }
              local_60 = 0;
              String::parse_latin1((String *)&local_60,"Node");
              StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
              local_70 = 0;
              String::parse_latin1((String *)&local_70,"CanvasItem");
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
              CanvasItem::_bind_methods();
              if ((code *)PTR__bind_compatibility_methods_00114040 !=
                  Object::_bind_compatibility_methods) {
                CanvasItem::_bind_compatibility_methods();
              }
              CanvasItem::initialize_class()::initialized = '\x01';
            }
            local_60 = 0;
            String::parse_latin1((String *)&local_60,"CanvasItem");
            StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
            local_70 = 0;
            String::parse_latin1((String *)&local_70,"Control");
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
            Control::_bind_methods();
            Control::initialize_class()::initialized = '\x01';
          }
          local_60 = 0;
          String::parse_latin1((String *)&local_60,"Control");
          StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
          local_70 = 0;
          String::parse_latin1((String *)&local_70,"Container");
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
          Container::_bind_methods();
          Container::initialize_class()::initialized = '\x01';
        }
        local_60 = 0;
        String::parse_latin1((String *)&local_60,"Container");
        StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
        local_70 = 0;
        String::parse_latin1((String *)&local_70,"BoxContainer");
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
        if ((code *)PTR__bind_methods_00114048 != Container::_bind_methods) {
          BoxContainer::_bind_methods();
        }
        BoxContainer::initialize_class()::initialized = '\x01';
      }
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"BoxContainer");
      StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
      local_70 = 0;
      String::parse_latin1((String *)&local_70,"VBoxContainer");
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
      VBoxContainer::initialize_class()::initialized = '\x01';
    }
    local_58 = "VBoxContainer";
    local_60 = 0;
    local_50 = 0xd;
    String::parse_latin1((StrRange *)&local_60);
    StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
    local_70 = 0;
    String::parse_latin1((String *)&local_70,"EditorVisualProfiler");
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
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
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



/* CowData<Color>::_unref() */

void __thiscall CowData<Color>::_unref(CowData<Color> *this)

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



/* CowData<EditorVisualProfiler::Metric::Area>::_unref() */

void __thiscall
CowData<EditorVisualProfiler::Metric::Area>::_unref
          (CowData<EditorVisualProfiler::Metric::Area> *this)

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
          if ((StringName::configured != '\0') && (plVar6[3] != 0)) {
            StringName::unref();
          }
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
          plVar6 = plVar6 + 5;
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



/* CowData<EditorVisualProfiler::Metric>::_unref() */

void __thiscall
CowData<EditorVisualProfiler::Metric>::_unref(CowData<EditorVisualProfiler::Metric> *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  CowData<EditorVisualProfiler::Metric::Area> *this_00;
  
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
        lVar5 = 0;
        this_00 = (CowData<EditorVisualProfiler::Metric::Area> *)(lVar2 + 0x18);
        do {
          lVar5 = lVar5 + 1;
          CowData<EditorVisualProfiler::Metric::Area>::_unref(this_00);
          this_00 = this_00 + 0x20;
        } while (lVar3 != lVar5);
      }
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* EditorVisualProfiler::~EditorVisualProfiler() */

void __thiscall EditorVisualProfiler::~EditorVisualProfiler(EditorVisualProfiler *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  bool bVar5;
  
  *(undefined ***)this = &PTR__initialize_classv_001102c8;
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xaa8));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xaa0));
  if ((StringName::configured != '\0') && (*(long *)(this + 0xa88) != 0)) {
    StringName::unref();
  }
  CowData<EditorVisualProfiler::Metric>::_unref
            ((CowData<EditorVisualProfiler::Metric> *)(this + 0xa78));
  if (*(long *)(this + 0xa38) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xa38) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0xa38);
      *(undefined8 *)(this + 0xa38) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0xa28) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0xa28);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  bVar5 = StringName::configured != '\0';
  *(undefined **)this = &Image::vtable;
  if (bVar5) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010f3f3;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010f3f3:
  Control::~Control((Control *)this);
  return;
}



/* EditorVisualProfiler::~EditorVisualProfiler() */

void __thiscall EditorVisualProfiler::~EditorVisualProfiler(EditorVisualProfiler *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  bool bVar5;
  
  *(undefined ***)this = &PTR__initialize_classv_001102c8;
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xaa8));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xaa0));
  if ((StringName::configured != '\0') && (*(long *)(this + 0xa88) != 0)) {
    StringName::unref();
  }
  CowData<EditorVisualProfiler::Metric>::_unref
            ((CowData<EditorVisualProfiler::Metric> *)(this + 0xa78));
  if (*(long *)(this + 0xa38) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xa38) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0xa38);
      *(undefined8 *)(this + 0xa38) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0xa28) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0xa28);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  bVar5 = StringName::configured != '\0';
  *(undefined **)this = &Image::vtable;
  if (bVar5) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010f543;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010f543:
  Control::~Control((Control *)this);
  operator_delete(this,0xac8);
  return;
}



/* CowData<EditorVisualProfiler::Metric>::_realloc(long) */

undefined8 __thiscall
CowData<EditorVisualProfiler::Metric>::_realloc
          (CowData<EditorVisualProfiler::Metric> *this,long param_1)

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



/* EditorVisualProfiler::set_hardware_info(String const&, String const&) */

void EditorVisualProfiler::_GLOBAL__sub_I_set_hardware_info(void)

{
  undefined8 uStack_18;
  
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
  if (OptionButton::base_property_helper == '\0') {
    OptionButton::base_property_helper = '\x01';
    OptionButton::base_property_helper._64_8_ = 0;
    OptionButton::base_property_helper._0_16_ = (undefined1  [16])0x0;
    OptionButton::base_property_helper._24_16_ = (undefined1  [16])0x0;
    OptionButton::base_property_helper._40_16_ = (undefined1  [16])0x0;
    OptionButton::base_property_helper._56_8_ = 2;
    __cxa_atexit(PropertyListHelper::~PropertyListHelper,OptionButton::base_property_helper,
                 &__dso_handle);
  }
  ENV_SCRIPT_ENCRYPTION_KEY = 0;
  String::parse_latin1((String *)&ENV_SCRIPT_ENCRYPTION_KEY,"GODOT_SCRIPT_ENCRYPTION_KEY");
  __cxa_atexit(String::~String,&ENV_SCRIPT_ENCRYPTION_KEY,&__dso_handle);
  if (EditorExport::_export_presets_updated == '\0') {
    EditorExport::_export_presets_updated = '\x01';
    EditorExport::_export_presets_updated = 0;
    __cxa_atexit(StringName::~StringName,&EditorExport::_export_presets_updated,&__dso_handle);
  }
  if (EditorExport::_export_presets_runnable_updated != '\0') {
    return;
  }
  EditorExport::_export_presets_runnable_updated = 1;
  EditorExport::_export_presets_runnable_updated = 0;
  __cxa_atexit(StringName::~StringName,&EditorExport::_export_presets_runnable_updated,&__dso_handle
               ,uStack_18);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* List<String, DefaultAllocator>::~List() */

void __thiscall List<String,DefaultAllocator>::~List(List<String,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* String::~String() */

void __thiscall String::~String(String *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* HSplitContainer::~HSplitContainer() */

void __thiscall HSplitContainer::~HSplitContainer(HSplitContainer *this)

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
/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorVisualProfiler, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorVisualProfiler,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorVisualProfiler,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorVisualProfiler, void, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorVisualProfiler,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorVisualProfiler,void,bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorVisualProfiler, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorVisualProfiler,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorVisualProfiler,void,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorVisualProfiler, void, double>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<EditorVisualProfiler,void,double>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorVisualProfiler,void,double> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorVisualProfiler, void, Ref<InputEvent>
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorVisualProfiler,void,Ref<InputEvent>const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorVisualProfiler,void,Ref<InputEvent>const&> *this)

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
/* EditorVisualProfiler::~EditorVisualProfiler() */

void __thiscall EditorVisualProfiler::~EditorVisualProfiler(EditorVisualProfiler *this)

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



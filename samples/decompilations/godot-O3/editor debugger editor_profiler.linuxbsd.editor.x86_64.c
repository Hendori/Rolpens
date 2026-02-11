
/* EditorProfiler::_graph_tex_mouse_exit() */

void __thiscall EditorProfiler::_graph_tex_mouse_exit(EditorProfiler *this)

{
  *(undefined4 *)(this + 0xae8) = 0xffffffff;
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EditorProfiler::_get_color_from_signature(StringName const&) const */

undefined1  [16] __thiscall
EditorProfiler::_get_color_from_signature(EditorProfiler *this,StringName *param_1)

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
  fVar4 = _LC13;
  fVar3 = _UNK_00115058;
  uVar2 = __LC12;
  dVar9 = (double)uVar6 / __LC11;
  fVar7 = (float)Color::get_v();
  fVar8 = (float)Color::get_s();
  Color::set_hsv((float)dVar9,fVar8,fVar7,_LC13);
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
  auVar10._4_4_ = (fStack_74 - fStack_44) * _LC16 + fStack_44;
  auVar10._0_4_ = (local_78 - local_48) * _LC16 + local_48;
  auVar10._8_4_ = (fStack_70 - fVar3) * _LC16 + fVar3;
  auVar10._12_4_ = (fStack_6c - fVar4) * _LC16 + fVar4;
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return auVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorProfiler::_get_zoom_left_border() const */

ulong __thiscall EditorProfiler::_get_zoom_left_border(EditorProfiler *this)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  
  if (*(long *)(this + 0xad0) == 0) {
    fVar6 = 0.0;
    lVar3 = 0;
  }
  else {
    lVar3 = *(long *)(*(long *)(this + 0xad0) + -8);
    fVar6 = (float)lVar3;
  }
  fVar5 = expf(*(float *)(this + 0xa60));
  iVar1 = *(int *)(this + 0xa68) - (int)(fVar6 / fVar5) / 2;
  uVar4 = 0;
  if (-1 < iVar1) {
    uVar2 = lVar3 - (int)(fVar6 / fVar5);
    uVar4 = (long)iVar1;
    if ((long)uVar2 <= (long)iVar1) {
      uVar4 = uVar2;
    }
  }
  return uVar4 & 0xffffffff;
}



/* EditorProfiler::disable_seeking() */

void __thiscall EditorProfiler::disable_seeking(EditorProfiler *this)

{
  this[0xaf0] = (EditorProfiler)0x0;
  CanvasItem::queue_redraw();
  return;
}



/* EditorProfiler::is_profiling() */

void EditorProfiler::is_profiling(void)

{
  BaseButton::is_pressed();
  return;
}



/* EditorProfiler::_autostart_toggled(bool) */

void __thiscall EditorProfiler::_autostart_toggled(EditorProfiler *this,bool param_1)

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
  local_58 = "autostart_profiler";
  local_60 = 0;
  local_50 = 0x12;
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
/* EditorProfiler::_get_time_as_text(EditorProfiler::Metric const&, float, int) */

Metric * EditorProfiler::_get_time_as_text(Metric *param_1,float param_2,int param_3)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int in_ECX;
  long in_RDX;
  Object *pOVar4;
  long in_FS_OFFSET;
  CowData<char32_t> local_88 [8];
  undefined8 local_80;
  undefined8 local_78;
  String local_70 [8];
  undefined8 local_68;
  String local_60 [8];
  undefined8 local_58;
  undefined8 local_50;
  String local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = OptionButton::get_selected();
  if (iVar3 == 0) {
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"");
    local_58 = 0;
    String::parse_latin1((String *)&local_58,"ms");
    TTR(local_48,(String *)&local_58);
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
    rtos((double)(param_2 * __LC34));
    String::pad_decimals((int)(CowData<char32_t> *)&local_80);
    (*pcVar1)(local_70,pOVar4,(CowData<char32_t> *)&local_80,(String *)&local_78);
    String::operator+(local_60,local_70);
    String::operator+((String *)param_1,local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref(local_88);
LAB_00100abf:
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
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
    if (iVar3 != 1) {
      if (iVar3 == 2) {
        _get_percent_txt(param_2,*(float *)(in_RDX + 8));
      }
      else if (iVar3 == 3) {
        _get_percent_txt(param_2,*(float *)(in_RDX + 0x14));
      }
      else {
        *(undefined8 *)param_1 = 0;
        String::parse_latin1((String *)param_1,"err");
      }
      goto LAB_001007a4;
    }
    local_50 = 0;
    if (in_ECX == 0) {
      String::parse_latin1((String *)&local_50,"");
      local_58 = 0;
      String::parse_latin1((String *)&local_58,"ms");
      TTR(local_48,(String *)&local_58);
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
      local_80 = 0;
      String::parse_latin1((String *)&local_80,"0.00");
      (*pcVar1)(local_70,pOVar4,(String *)&local_80,(String *)&local_78);
      String::operator+(local_60,local_70);
      String::operator+((String *)param_1,local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      goto LAB_00100abf;
    }
    String::parse_latin1((String *)&local_50,"");
    local_58 = 0;
    String::parse_latin1((String *)&local_58,"ms");
    TTR(local_48,(String *)&local_58);
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
    rtos((double)((param_2 / (float)in_ECX) * __LC34));
    String::pad_decimals((int)(CowData<char32_t> *)&local_80);
    (*pcVar1)(local_70,pOVar4,(CowData<char32_t> *)&local_80,(String *)&local_78);
    String::operator+(local_60,local_70);
    String::operator+((String *)param_1,local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref(local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(pOVar4);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        Memory::free_static(pOVar4,false);
      }
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_48);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
LAB_001007a4:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorProfiler::_update_button_text() */

void __thiscall EditorProfiler::_update_button_text(EditorProfiler *this)

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
    pRVar1 = *(Ref **)(this + 0xa30);
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
    pSVar4 = *(String **)(this + 0xa30);
    local_50 = 0;
    local_48 = (Object *)&_LC25;
    local_40 = 0;
    String::parse_latin1((StrRange *)&local_50);
    local_48 = (Object *)0x10abcf;
    local_58 = 0;
    local_40 = 5;
    String::parse_latin1((StrRange *)&local_58);
    TTR((String *)&local_48,(String *)&local_58);
  }
  else {
    pRVar1 = *(Ref **)(this + 0xa30);
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
    pSVar4 = *(String **)(this + 0xa30);
    local_50 = 0;
    local_48 = (Object *)&_LC25;
    local_40 = 0;
    String::parse_latin1((StrRange *)&local_50);
    local_48 = (Object *)&_LC38;
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



/* EditorProfiler::set_profiling(bool) */

void EditorProfiler::set_profiling(bool param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined7 in_register_00000039;
  EditorProfiler *this;
  long in_FS_OFFSET;
  Variant *local_78 [2];
  int local_68 [6];
  undefined8 local_50;
  undefined1 local_48 [16];
  long local_30;
  
  this = (EditorProfiler *)CONCAT71(in_register_00000039,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xa30),0));
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



/* EditorProfiler::_bind_methods() */

void EditorProfiler::_bind_methods(void)

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
  char *local_e8;
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
  local_110 = 0;
  local_b8 = "";
  local_b0 = 0;
  String::parse_latin1((StrRange *)&local_110);
  local_118 = 0;
  local_b8 = "enable";
  local_b0 = 6;
  String::parse_latin1((StrRange *)&local_118);
  local_e8 = (char *)CONCAT44(local_e8._4_4_,1);
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
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  local_f8 = "EditorProfiler";
  local_120 = 0;
  local_f0 = 0xe;
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
  local_f8 = (char *)0x0;
  local_b8 = "break_request";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_f8);
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
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_f8);
  local_e8 = "EditorProfiler";
  local_100 = 0;
  local_e0 = 0xe;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_signal((StringName *)&local_e8,(MethodInfo *)&local_b8);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<String>::resize<false>(long) [clone .isra.0] */

void __thiscall CowData<String>::resize<false>(CowData<String> *this,long param_1)

{
  code *pcVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  char *pcVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  
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
    lVar4 = 0;
    lVar7 = 0;
  }
  else {
    lVar4 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar4) {
      return;
    }
    if (param_1 == 0) {
      _unref(this);
      return;
    }
    _copy_on_write(this);
    lVar7 = lVar4 * 8;
    if (lVar7 != 0) {
      uVar8 = lVar7 - 1U | lVar7 - 1U >> 1;
      uVar8 = uVar8 | uVar8 >> 2;
      uVar8 = uVar8 | uVar8 >> 4;
      uVar8 = uVar8 | uVar8 >> 8;
      uVar8 = uVar8 | uVar8 >> 0x10;
      lVar7 = (uVar8 | uVar8 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 != 0) {
    uVar8 = param_1 * 8 - 1;
    uVar8 = uVar8 | uVar8 >> 1;
    uVar8 = uVar8 | uVar8 >> 2;
    uVar8 = uVar8 | uVar8 >> 4;
    uVar8 = uVar8 | uVar8 >> 8;
    uVar8 = uVar8 | uVar8 >> 0x10;
    uVar8 = uVar8 | uVar8 >> 0x20;
    lVar10 = uVar8 + 1;
    if (lVar10 != 0) {
      uVar11 = param_1;
      if (param_1 <= lVar4) {
        while( true ) {
          lVar4 = *(long *)this;
          if (lVar4 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          if (*(ulong *)(lVar4 + -8) <= uVar11) break;
          CowData<char32_t>::_unref((CowData<char32_t> *)(lVar4 + uVar11 * 8));
          uVar11 = uVar11 + 1;
        }
        if (lVar10 != lVar7) {
          iVar2 = _realloc(this,lVar10);
          if (iVar2 != 0) {
            return;
          }
          lVar4 = *(long *)this;
          if (lVar4 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
        }
        *(long *)(lVar4 + -8) = param_1;
        return;
      }
      if (lVar10 == lVar7) {
LAB_00101de3:
        puVar9 = *(undefined8 **)this;
        if (puVar9 == (undefined8 *)0x0) {
          FUN_0010ae5a();
          return;
        }
        lVar4 = puVar9[-1];
        if (param_1 <= lVar4) goto LAB_00101d4b;
      }
      else {
        if (lVar4 != 0) {
          iVar2 = _realloc(this,lVar10);
          if (iVar2 != 0) {
            return;
          }
          goto LAB_00101de3;
        }
        puVar3 = (undefined8 *)Memory::alloc_static(uVar8 + 0x11,false);
        if (puVar3 == (undefined8 *)0x0) {
          uVar6 = 0x171;
          pcVar5 = "Parameter \"mem_new\" is null.";
          goto LAB_00101e62;
        }
        puVar9 = puVar3 + 2;
        *puVar3 = 1;
        puVar3[1] = 0;
        *(undefined8 **)this = puVar9;
        lVar4 = 0;
      }
      memset(puVar9 + lVar4,0,(param_1 - lVar4) * 8);
LAB_00101d4b:
      puVar9[-1] = param_1;
      return;
    }
  }
  uVar6 = 0x16a;
  pcVar5 = 
  "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
  ;
LAB_00101e62:
  _err_print_error("resize","./core/templates/cowdata.h",uVar6,pcVar5,0,0);
  return;
}



/* CowData<Vector<String> >::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Vector<String>>::_copy_on_write(CowData<Vector<String>> *this)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  CowData<String> *this_00;
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
  this_00 = (CowData<String> *)(puVar3 + 3);
  lVar6 = 0;
  *puVar3 = 1;
  puVar3[1] = lVar1;
  if (lVar1 != 0) {
    do {
      lVar4 = lVar6 * 0x10 + *(long *)this;
      *(undefined8 *)this_00 = 0;
      if (*(long *)(lVar4 + 8) != 0) {
        CowData<String>::_ref(this_00,(CowData *)(lVar4 + 8));
      }
      lVar6 = lVar6 + 1;
      this_00 = this_00 + 0x10;
    } while (lVar1 != lVar6);
  }
  _unref(this);
  *(undefined8 **)this = puVar3 + 2;
  return;
}



/* CowData<EditorProfiler::Metric::Category>::_ref(CowData<EditorProfiler::Metric::Category> const&)
   [clone .part.0] */

void __thiscall
CowData<EditorProfiler::Metric::Category>::_ref
          (CowData<EditorProfiler::Metric::Category> *this,CowData *param_1)

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



/* EditorProfiler::_get_frame_metric(int) */

Metric * EditorProfiler::_get_frame_metric(int param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  int in_EDX;
  long lVar4;
  long in_RSI;
  undefined4 in_register_0000003c;
  
  lVar1 = *(long *)(in_RSI + 0xad0);
  if (lVar1 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  lVar2 = *(long *)(lVar1 + -8);
  lVar4 = (((*(int *)(in_RSI + 0xadc) + lVar2) - (long)(*(int *)(in_RSI + 0xad8) + -1)) +
          (long)in_EDX) % lVar2;
  if ((-1 < lVar4) && (lVar4 < lVar2)) {
    Metric::Metric((Metric *)CONCAT44(in_register_0000003c,param_1),(Metric *)(lVar1 + lVar4 * 0x88)
                  );
    return (Metric *)CONCAT44(in_register_0000003c,param_1);
  }
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,lVar4,lVar2,"p_index","size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}



/* EditorProfiler::_update_frame() */

void __thiscall EditorProfiler::_update_frame(EditorProfiler *this)

{
  uint uVar1;
  undefined1 auVar2 [16];
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
  code *pcVar17;
  char cVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  undefined8 uVar22;
  int iVar23;
  int iVar24;
  long lVar25;
  StringName *pSVar26;
  uint uVar27;
  int iVar28;
  ulong uVar29;
  long lVar30;
  uint uVar31;
  long in_FS_OFFSET;
  float fVar32;
  undefined1 auVar33 [16];
  long local_188;
  long local_180;
  StringName *local_158;
  undefined8 local_128;
  String local_120 [8];
  String local_118 [8];
  undefined8 local_110;
  String local_108 [8];
  CowData<char32_t> local_100 [8];
  undefined *local_f8;
  undefined8 local_f0;
  Metric local_e8 [32];
  StringName *local_c8;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Range::get_value();
  iVar20 = (int)local_e8;
  _get_frame_metric(iVar20);
  Metric::~Metric(local_e8);
  this[0xae4] = (EditorProfiler)0x1;
  Tree::clear();
  iVar19 = Tree::create_item(*(TreeItem **)(this + 0xa70),0);
  _get_frame_metric(iVar20);
  iVar20 = OptionButton::get_selected();
  if (local_c8 != (StringName *)0x0) {
    local_158 = local_c8;
    for (local_188 = 0; local_188 < *(long *)(local_c8 + -8); local_188 = local_188 + 1) {
      uVar22 = Tree::create_item(*(TreeItem **)(this + 0xa70),iVar19);
      TreeItem::set_cell_mode(uVar22,0,1);
      iVar28 = (int)uVar22;
      TreeItem::set_editable(iVar28,false);
      lVar30 = *(long *)(local_c8 + -8);
      if (lVar30 <= local_188) {
LAB_0010295c:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,local_188,lVar30,"p_index","size()","",
                   false,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar17 = (code *)invalidInstructionException();
        (*pcVar17)();
      }
      Variant::Variant((Variant *)local_58,local_158);
      TreeItem::set_metadata(iVar28,(Variant *)0x0);
      if (Variant::needs_deinit[(int)local_58._0_4_] != '\0') {
        Variant::_clear_internal();
      }
      lVar30 = *(long *)(local_c8 + -8);
      if (lVar30 <= local_188) goto LAB_0010295c;
      local_f8 = (undefined *)0x0;
      if (*(long *)(local_158 + 8) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_f8,(CowData *)(local_158 + 8));
      }
      TreeItem::set_text(uVar22,0,(CowData<char32_t> *)&local_f8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
      lVar30 = *(long *)(local_c8 + -8);
      if (lVar30 <= local_188) goto LAB_0010295c;
      _get_time_as_text((Metric *)&local_f8,*(float *)(local_158 + 0x10),(int)this);
      TreeItem::set_text(uVar22,1,(CowData<char32_t> *)&local_f8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
      lVar30 = *(long *)(local_c8 + -8);
      if (lVar30 <= local_188) goto LAB_0010295c;
      if ((*(long *)(this + 0xa80) != 0) && (*(int *)(this + 0xaa4) != 0)) {
        uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xaa0) * 4);
        lVar30 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0xaa0) * 8);
        if (*(long *)local_158 == 0) {
          uVar21 = StringName::get_empty_hash();
        }
        else {
          uVar21 = *(uint *)(*(long *)local_158 + 0x20);
        }
        uVar29 = CONCAT44(0,uVar1);
        if (uVar21 == 0) {
          uVar21 = 1;
        }
        uVar31 = 0;
        auVar33._8_8_ = 0;
        auVar33._0_8_ = (ulong)uVar21 * lVar30;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar29;
        lVar25 = SUB168(auVar33 * auVar9,8);
        uVar27 = *(uint *)(*(long *)(this + 0xa98) + lVar25 * 4);
        iVar23 = SUB164(auVar33 * auVar9,8);
        if (uVar27 != 0) {
          while ((uVar21 != uVar27 ||
                 (*(long *)(*(long *)(this + 0xa80) +
                           (ulong)*(uint *)(*(long *)(this + 0xa88) + lVar25 * 4) * 8) !=
                  *(long *)local_158))) {
            uVar31 = uVar31 + 1;
            auVar2._8_8_ = 0;
            auVar2._0_8_ = (ulong)(iVar23 + 1) * lVar30;
            auVar10._8_8_ = 0;
            auVar10._0_8_ = uVar29;
            lVar25 = SUB168(auVar2 * auVar10,8);
            uVar27 = *(uint *)(*(long *)(this + 0xa98) + lVar25 * 4);
            iVar23 = SUB164(auVar2 * auVar10,8);
            if ((uVar27 == 0) ||
               (auVar3._8_8_ = 0, auVar3._0_8_ = (ulong)uVar27 * lVar30, auVar11._8_8_ = 0,
               auVar11._0_8_ = uVar29, auVar4._8_8_ = 0,
               auVar4._0_8_ = (ulong)((uVar1 + iVar23) - SUB164(auVar3 * auVar11,8)) * lVar30,
               auVar12._8_8_ = 0, auVar12._0_8_ = uVar29, SUB164(auVar4 * auVar12,8) < uVar31))
            goto LAB_00102480;
          }
          TreeItem::set_checked(iVar28,false);
          lVar30 = *(long *)(local_c8 + -8);
          if (lVar30 <= local_188) goto LAB_0010295c;
          auVar33 = _get_color_from_signature(this,local_158);
          local_58 = auVar33;
          TreeItem::set_custom_color(iVar28,(Color *)0x0);
        }
LAB_00102480:
        lVar30 = *(long *)(local_c8 + -8);
        if (lVar30 <= local_188) goto LAB_0010295c;
      }
      local_180 = 0;
      while ((lVar30 = *(long *)(local_158 + 0x20), lVar30 != 0 &&
             (local_180 < *(long *)(lVar30 + -8)))) {
        pSVar26 = (StringName *)(lVar30 + local_180 * 0x30);
        if (*(float *)(pSVar26 + 0x24) == *(float *)(pSVar26 + 0x20)) {
          cVar18 = BaseButton::is_pressed();
          if (cVar18 != '\0') goto LAB_00102530;
          lVar30 = *(long *)(local_c8 + -8);
          if (lVar30 <= local_188) goto LAB_0010295c;
          cVar18 = String::operator==((String *)(local_158 + 8),"Script Functions");
          if (cVar18 == '\0') goto LAB_00102530;
        }
        else {
LAB_00102530:
          uVar22 = Tree::create_item(*(TreeItem **)(this + 0xa70),iVar28);
          TreeItem::set_cell_mode(uVar22,0,1);
          iVar23 = (int)uVar22;
          TreeItem::set_editable(iVar23,false);
          local_f8 = (undefined *)0x0;
          if (*(long *)(pSVar26 + 8) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_f8,(CowData *)(pSVar26 + 8));
          }
          TreeItem::set_text(uVar22,0,(CowData<char32_t> *)&local_f8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
          Variant::Variant((Variant *)local_58,pSVar26);
          TreeItem::set_metadata(iVar23,(Variant *)0x0);
          if (Variant::needs_deinit[(int)local_58._0_4_] != '\0') {
            Variant::_clear_internal();
          }
          Variant::Variant((Variant *)local_58,(String *)(pSVar26 + 0x10));
          TreeItem::set_metadata(iVar23,(Variant *)0x1);
          if (Variant::needs_deinit[(int)local_58._0_4_] != '\0') {
            Variant::_clear_internal();
          }
          Variant::Variant((Variant *)local_58,*(int *)(pSVar26 + 0x18));
          TreeItem::set_metadata(iVar23,(Variant *)0x2);
          if (Variant::needs_deinit[(int)local_58._0_4_] != '\0') {
            Variant::_clear_internal();
          }
          TreeItem::set_text_alignment(uVar22,2,2);
          itos((long)local_100);
          local_f8 = &_LC81;
          local_110 = 0;
          local_f0 = 1;
          String::parse_latin1((StrRange *)&local_110);
          local_f8 = &_LC82;
          local_128 = 0;
          local_f0 = 1;
          String::parse_latin1((StrRange *)&local_128);
          String::operator+(local_120,(String *)(pSVar26 + 8));
          String::operator+(local_118,local_120);
          String::operator+(local_108,local_118);
          String::operator+((String *)&local_f8,local_108);
          TreeItem::set_tooltip_text(iVar23,(String *)0x0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_108);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_118);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_120);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
          CowData<char32_t>::_unref(local_100);
          if (iVar20 == 1) {
            fVar32 = *(float *)(pSVar26 + 0x1c);
            cVar18 = BaseButton::is_pressed();
            if (cVar18 == '\0') {
              fVar32 = fVar32 + *(float *)(pSVar26 + 0x24);
            }
          }
          else {
            fVar32 = *(float *)(pSVar26 + 0x20);
          }
          _get_time_as_text((Metric *)&local_f8,fVar32,(int)this);
          TreeItem::set_text(uVar22,1,(CowData<char32_t> *)&local_f8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
          itos((long)&local_f8);
          TreeItem::set_text(uVar22,2,(CowData<char32_t> *)&local_f8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
          if ((*(long *)(this + 0xa80) != 0) && (*(int *)(this + 0xaa4) != 0)) {
            uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xaa0) * 4);
            lVar30 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0xaa0) * 8);
            if (*(long *)pSVar26 == 0) {
              uVar21 = StringName::get_empty_hash();
            }
            else {
              uVar21 = *(uint *)(*(long *)pSVar26 + 0x20);
            }
            uVar29 = CONCAT44(0,uVar1);
            if (uVar21 == 0) {
              uVar21 = 1;
            }
            auVar5._8_8_ = 0;
            auVar5._0_8_ = (ulong)uVar21 * lVar30;
            auVar13._8_8_ = 0;
            auVar13._0_8_ = uVar29;
            lVar25 = SUB168(auVar5 * auVar13,8);
            uVar27 = *(uint *)(*(long *)(this + 0xa98) + lVar25 * 4);
            iVar24 = SUB164(auVar5 * auVar13,8);
            if (uVar27 != 0) {
              uVar31 = 0;
              while ((uVar21 != uVar27 ||
                     (*(long *)(*(long *)(this + 0xa80) +
                               (ulong)*(uint *)(*(long *)(this + 0xa88) + lVar25 * 4) * 8) !=
                      *(long *)pSVar26))) {
                uVar31 = uVar31 + 1;
                auVar6._8_8_ = 0;
                auVar6._0_8_ = (ulong)(iVar24 + 1) * lVar30;
                auVar14._8_8_ = 0;
                auVar14._0_8_ = uVar29;
                lVar25 = SUB168(auVar6 * auVar14,8);
                uVar27 = *(uint *)(*(long *)(this + 0xa98) + lVar25 * 4);
                iVar24 = SUB164(auVar6 * auVar14,8);
                if ((uVar27 == 0) ||
                   (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar27 * lVar30, auVar15._8_8_ = 0,
                   auVar15._0_8_ = uVar29, auVar8._8_8_ = 0,
                   auVar8._0_8_ = (ulong)((uVar1 + iVar24) - SUB164(auVar7 * auVar15,8)) * lVar30,
                   auVar16._8_8_ = 0, auVar16._0_8_ = uVar29, SUB164(auVar8 * auVar16,8) < uVar31))
                goto LAB_00102942;
              }
              TreeItem::set_checked(iVar23,false);
              auVar33 = _get_color_from_signature(this,pSVar26);
              local_58 = auVar33;
              TreeItem::set_custom_color(iVar23,(Color *)0x0);
            }
          }
        }
LAB_00102942:
        local_180 = local_180 + 1;
        lVar30 = *(long *)(local_c8 + -8);
        if (lVar30 <= local_188) goto LAB_0010295c;
      }
      local_158 = local_158 + 0x28;
    }
  }
  this[0xae4] = (EditorProfiler)0x0;
  Metric::~Metric(local_e8);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorProfiler::_cursor_metric_changed(double) */

void EditorProfiler::_cursor_metric_changed(double param_1)

{
  EditorProfiler *in_RDI;
  
  if (in_RDI[0xae4] != (EditorProfiler)0x0) {
    return;
  }
  CanvasItem::queue_redraw();
  _update_frame(in_RDI);
  return;
}



/* EditorProfiler::_graph_tex_draw() */

void __thiscall EditorProfiler::_graph_tex_draw(EditorProfiler *this)

{
  Vector2 *pVVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long in_FS_OFFSET;
  float fVar5;
  float fVar6;
  undefined4 extraout_XMM0_Db;
  double dVar7;
  undefined4 extraout_XMM0_Db_00;
  float fVar8;
  float local_c8;
  Metric local_b8 [4];
  int local_b4;
  undefined8 local_30;
  float local_28;
  undefined4 local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(this + 0xad8) != 0) {
    if (this[0xaf0] == (EditorProfiler)0x0) {
      iVar3 = *(int *)(this + 0xae8);
    }
    else {
      dVar7 = (double)Range::get_value();
      _get_frame_metric((int)local_b8);
      iVar3 = (int)(dVar7 - (double)local_b4);
      Metric::~Metric(local_b8);
      if (*(long *)(this + 0xad0) == 0) {
        fVar5 = 0.0;
        lVar4 = 0;
      }
      else {
        lVar4 = *(long *)(*(long *)(this + 0xad0) + -8);
        fVar5 = (float)lVar4;
      }
      fVar6 = expf(*(float *)(this + 0xa60));
      iVar2 = *(int *)(this + 0xa68) - (int)(fVar5 / fVar6) / 2;
      if (-1 < iVar2) {
        lVar4 = lVar4 - (int)(fVar5 / fVar6);
        if (iVar2 < lVar4) {
          lVar4 = (long)iVar2;
        }
        iVar3 = iVar3 - (int)lVar4;
      }
      fVar5 = (float)Control::get_size();
      fVar6 = expf(*(float *)(this + 0xa60));
      if (*(long *)(this + 0xad0) == 0) {
        fVar8 = 0.0;
      }
      else {
        fVar8 = (float)*(long *)(*(long *)(this + 0xad0) + -8);
      }
      iVar2 = 0;
      iVar3 = (int)((fVar6 * (float)(iVar3 + 1) * fVar5) / fVar8);
      fVar5 = (float)Control::get_size();
      if (-1 < iVar3) {
        fVar6 = (float)iVar3;
        if (fVar6 <= fVar5) {
          iVar2 = (int)fVar6;
        }
        else {
          iVar2 = (int)fVar5;
        }
      }
      pVVar1 = *(Vector2 **)(this + 0xa40);
      Control::get_size();
      local_28 = (float)iVar2;
      local_24 = 0;
      local_30 = CONCAT44(extraout_XMM0_Db_00,local_28);
      CanvasItem::draw_line
                (pVVar1,(Vector2 *)&local_28,(Color *)&local_30,_LC83,(bool)((char)this + '\x10'));
      iVar3 = *(int *)(this + 0xae8);
    }
    if (-1 < iVar3) {
      fVar5 = (float)Control::get_size();
      if (*(long *)(this + 0xad0) == 0) {
        local_c8 = 0.0;
      }
      else {
        local_c8 = (float)(*(long *)(*(long *)(this + 0xad0) + -8) * 2);
      }
      pVVar1 = *(Vector2 **)(this + 0xa40);
      Control::get_size();
      local_24 = 0;
      local_28 = (float)(int)(((float)(iVar3 * 2 + 1) * fVar5) / local_c8 + _LC13);
      local_30 = CONCAT44(extraout_XMM0_Db,local_28);
      CanvasItem::draw_line
                (pVVar1,(Vector2 *)&local_28,(Color *)&local_30,_LC83,(bool)((char)this + ' '));
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EditorProfiler::_update_plot() */

void __thiscall EditorProfiler::_update_plot(EditorProfiler *this)

{
  long *plVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  void *pvVar6;
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
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  bool bVar47;
  undefined8 uVar48;
  char cVar49;
  int iVar50;
  int iVar51;
  int iVar52;
  uint uVar53;
  long lVar54;
  Object *pOVar55;
  undefined8 *puVar56;
  ulong uVar57;
  ulong *puVar58;
  int *piVar59;
  Ref *pRVar60;
  undefined8 *puVar61;
  uint uVar62;
  long lVar63;
  long lVar64;
  size_t __n;
  int iVar65;
  ulong uVar66;
  StringName *pSVar67;
  int iVar68;
  int iVar69;
  int iVar70;
  long lVar71;
  int iVar72;
  uint uVar73;
  uint uVar74;
  char cVar75;
  int iVar76;
  int *piVar77;
  long lVar78;
  int iVar79;
  long lVar80;
  ulong *puVar81;
  long in_FS_OFFSET;
  bool bVar82;
  float fVar83;
  float fVar84;
  float extraout_XMM0_Db;
  double dVar85;
  undefined1 auVar86 [12];
  undefined1 auVar87 [12];
  undefined8 *local_180;
  int local_170;
  int local_16c;
  ulong *local_168;
  HashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>>
  *local_140;
  int local_134;
  float local_130;
  int local_128;
  Object *local_f8;
  undefined1 local_f0 [16];
  undefined1 local_e0 [16];
  undefined8 local_d0;
  Object *local_c8 [6];
  long local_98;
  long local_90;
  uint local_78;
  int local_74;
  long local_68;
  long local_60;
  uint local_48;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  fVar83 = (float)Control::get_size();
  local_128 = 1;
  if (_LC13 <= fVar83) {
    local_128 = (int)fVar83;
  }
  Control::get_size();
  if (extraout_XMM0_Db < _LC13) {
    local_16c = 1;
    iVar65 = local_128;
  }
  else {
    local_16c = (int)extraout_XMM0_Db;
    iVar65 = local_128 * local_16c;
  }
  iVar65 = iVar65 * 4;
  lVar80 = (long)iVar65;
  lVar78 = *(long *)(this + 0xa58);
  if (lVar78 == 0) {
    if (lVar80 != 0) {
      if (lVar80 < 0) goto LAB_001043ec;
      lVar54 = 0;
      lVar78 = 0;
      CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)(this + 0xa58));
LAB_00103489:
      uVar66 = lVar80 - 1U | lVar80 - 1U >> 1;
      uVar66 = uVar66 | uVar66 >> 2;
      uVar66 = uVar66 | uVar66 >> 4;
      uVar66 = uVar66 | uVar66 >> 8;
      uVar66 = uVar66 | uVar66 >> 0x10;
      lVar64 = uVar66 + 1;
      if (lVar80 <= lVar54) {
        if ((lVar64 == lVar78) ||
           (iVar50 = CowData<unsigned_char>::_realloc
                               ((CowData<unsigned_char> *)(this + 0xa58),lVar64), iVar50 == 0)) {
          if (*(long *)(this + 0xa58) == 0) {
            FUN_0010ae7c();
            return;
          }
          *(long *)(*(long *)(this + 0xa58) + -8) = lVar80;
        }
        goto LAB_00104130;
      }
      if (lVar64 == lVar78) {
LAB_00104310:
        puVar61 = *(undefined8 **)(this + 0xa58);
        if (puVar61 == (undefined8 *)0x0) {
          _update_plot();
          return;
        }
LAB_00104325:
        puVar61[-1] = lVar80;
      }
      else if (lVar54 == 0) {
        puVar56 = (undefined8 *)Memory::alloc_static(uVar66 + 0x11,false);
        if (puVar56 != (undefined8 *)0x0) {
          puVar61 = puVar56 + 2;
          *puVar56 = 1;
          puVar56[1] = 0;
          *(undefined8 **)(this + 0xa58) = puVar61;
          goto LAB_00104325;
        }
        _err_print_error("resize","./core/templates/cowdata.h",0x171,
                         "Parameter \"mem_new\" is null.",0,0);
      }
      else {
        iVar50 = CowData<unsigned_char>::_realloc((CowData<unsigned_char> *)(this + 0xa58),lVar64);
        if (iVar50 == 0) goto LAB_00104310;
      }
LAB_00104130:
      bVar47 = true;
      goto LAB_00102ebe;
    }
    bVar47 = false;
LAB_001042b2:
    CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)(this + 0xa58));
    lVar78 = *(long *)(this + 0xa58);
    if (_update_plot()::{lambda()#1}::operator()()::sname == '\0') {
LAB_0010409f:
      iVar50 = __cxa_guard_acquire(&_update_plot()::{lambda()#1}::operator()()::sname);
      if (iVar50 != 0) {
        _scs_create((char *)&_update_plot()::{lambda()#1}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_update_plot()::{lambda()#1}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_update_plot()::{lambda()#1}::operator()()::sname);
      }
      goto LAB_00102eef;
    }
    auVar86 = Control::get_theme_color
                        ((StringName *)this,
                         (StringName *)&_update_plot()::{lambda()#1}::operator()()::sname);
  }
  else {
    lVar54 = *(long *)(lVar78 + -8);
    if (lVar54 != lVar80) {
      if (lVar80 < 0) {
LAB_001043ec:
        _err_print_error("resize","./core/templates/cowdata.h",0x157,
                         "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
      }
      else {
        if (lVar80 != 0) {
          CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)(this + 0xa58));
          lVar78 = lVar54;
          if (lVar54 != 0) {
            uVar66 = lVar54 - 1U | lVar54 - 1U >> 1;
            uVar66 = uVar66 | uVar66 >> 2;
            uVar66 = uVar66 | uVar66 >> 4;
            uVar66 = uVar66 | uVar66 >> 8;
            uVar66 = uVar66 | uVar66 >> 0x10;
            lVar78 = (uVar66 | uVar66 >> 0x20) + 1;
          }
          goto LAB_00103489;
        }
        LOCK();
        plVar1 = (long *)(lVar78 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar78 = *(long *)(this + 0xa58);
          *(undefined8 *)(this + 0xa58) = 0;
          Memory::free_static((void *)(lVar78 + -0x10),false);
        }
        else {
          *(undefined8 *)(this + 0xa58) = 0;
        }
      }
      bVar47 = true;
      goto LAB_001042b2;
    }
    bVar47 = false;
LAB_00102ebe:
    CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)(this + 0xa58));
    lVar78 = *(long *)(this + 0xa58);
    if (_update_plot()::{lambda()#1}::operator()()::sname == '\0') goto LAB_0010409f;
LAB_00102eef:
    auVar86 = Control::get_theme_color
                        ((StringName *)this,
                         (StringName *)&_update_plot()::{lambda()#1}::operator()()::sname);
    if (0 < iVar65) {
      lVar80 = 0;
      fVar83 = _LC84 * auVar86._0_4_;
      do {
        lVar54 = lrintf(fVar83);
        fVar84 = _LC84 * auVar86._4_4_;
        *(char *)(lVar78 + lVar80) = (char)lVar54;
        lVar54 = lrintf(fVar84);
        fVar84 = _LC84 * auVar86._8_4_;
        *(char *)(lVar78 + 1 + lVar80) = (char)lVar54;
        lVar54 = lrintf(fVar84);
        *(undefined1 *)(lVar78 + 3 + lVar80) = 0xff;
        *(char *)(lVar78 + 2 + lVar80) = (char)lVar54;
        lVar80 = lVar80 + 4;
      } while ((int)lVar80 < iVar65);
    }
  }
  local_130 = auVar86._8_4_;
  iVar65 = OptionButton::get_selected();
  fVar83 = 0.0;
  if (0 < *(int *)(this + 0xad8)) {
    local_170 = 0;
    do {
      iVar72 = (int)(Metric *)local_c8;
      _get_frame_metric(iVar72);
      lVar54 = local_68;
      lVar80 = local_98;
      iVar50 = *(int *)(this + 0xaa4);
      if (iVar50 != 0) {
        lVar64 = *(long *)(this + 0xa80);
        lVar71 = 0;
LAB_00103030:
        if (lVar80 == 0) goto LAB_0010313a;
        do {
          if (local_74 != 0) {
            uVar3 = *(uint *)(hash_table_size_primes + (ulong)local_78 * 4);
            uVar66 = CONCAT44(0,uVar3);
            lVar5 = *(long *)(hash_table_size_primes_inv + (ulong)local_78 * 8);
            lVar63 = *(long *)(lVar64 + lVar71 * 8);
            if (lVar63 == 0) {
              uVar53 = StringName::get_empty_hash();
            }
            else {
              uVar53 = *(uint *)(lVar63 + 0x20);
            }
            if (uVar53 == 0) {
              uVar53 = 1;
            }
            auVar7._8_8_ = 0;
            auVar7._0_8_ = (ulong)uVar53 * lVar5;
            auVar27._8_8_ = 0;
            auVar27._0_8_ = uVar66;
            lVar63 = SUB168(auVar7 * auVar27,8);
            uVar73 = *(uint *)(local_90 + lVar63 * 4);
            uVar62 = SUB164(auVar7 * auVar27,8);
            if (uVar73 != 0) {
              uVar74 = 0;
              while ((uVar73 != uVar53 ||
                     (*(long *)(*(long *)(lVar80 + lVar63 * 8) + 0x10) !=
                      *(long *)(lVar64 + lVar71 * 8)))) {
                uVar74 = uVar74 + 1;
                auVar8._8_8_ = 0;
                auVar8._0_8_ = (ulong)(uVar62 + 1) * lVar5;
                auVar28._8_8_ = 0;
                auVar28._0_8_ = uVar66;
                lVar63 = SUB168(auVar8 * auVar28,8);
                uVar73 = *(uint *)(local_90 + lVar63 * 4);
                uVar62 = SUB164(auVar8 * auVar28,8);
                if ((uVar73 == 0) ||
                   (auVar9._8_8_ = 0, auVar9._0_8_ = (ulong)uVar73 * lVar5, auVar29._8_8_ = 0,
                   auVar29._0_8_ = uVar66, auVar10._8_8_ = 0,
                   auVar10._0_8_ = (ulong)((uVar3 + uVar62) - SUB164(auVar9 * auVar29,8)) * lVar5,
                   auVar30._8_8_ = 0, auVar30._0_8_ = uVar66, SUB164(auVar10 * auVar30,8) < uVar74))
                goto LAB_0010313a;
              }
              lVar5 = *(long *)(lVar80 + (ulong)uVar62 * 8);
              if ((lVar5 != 0) &&
                 (fVar84 = *(float *)(*(long *)(lVar5 + 0x18) + 0x10), fVar83 < fVar84))
              goto LAB_0010313d;
            }
          }
LAB_0010313a:
          fVar84 = fVar83;
LAB_0010313d:
          fVar83 = fVar84;
          if (lVar54 == 0) {
LAB_00103570:
            iVar51 = (int)lVar71 + 1;
            if ((iVar50 <= iVar51) || ((lVar71 = lVar71 + 1, iVar51 == -1 && (lVar64 == 0)))) break;
            goto LAB_00103030;
          }
          do {
            if (local_44 == 0) goto LAB_00103570;
            uVar3 = *(uint *)(hash_table_size_primes + (ulong)local_48 * 4);
            uVar66 = CONCAT44(0,uVar3);
            lVar5 = *(long *)(hash_table_size_primes_inv + (ulong)local_48 * 8);
            lVar63 = *(long *)(lVar64 + lVar71 * 8);
            if (lVar63 == 0) {
              uVar53 = StringName::get_empty_hash();
            }
            else {
              uVar53 = *(uint *)(lVar63 + 0x20);
            }
            if (uVar53 == 0) {
              uVar53 = 1;
            }
            auVar11._8_8_ = 0;
            auVar11._0_8_ = (ulong)uVar53 * lVar5;
            auVar31._8_8_ = 0;
            auVar31._0_8_ = uVar66;
            lVar63 = SUB168(auVar11 * auVar31,8);
            uVar73 = *(uint *)(local_60 + lVar63 * 4);
            uVar62 = SUB164(auVar11 * auVar31,8);
            if (uVar73 == 0) {
joined_r0x00103536:
              if (iVar50 <= (int)lVar71 + 1) goto LAB_0010327b;
              lVar71 = lVar71 + 1;
              goto LAB_00103030;
            }
            uVar74 = 0;
            while ((uVar73 != uVar53 ||
                   (*(long *)(*(long *)(lVar54 + lVar63 * 8) + 0x10) !=
                    *(long *)(lVar64 + lVar71 * 8)))) {
              uVar74 = uVar74 + 1;
              auVar12._8_8_ = 0;
              auVar12._0_8_ = (ulong)(uVar62 + 1) * lVar5;
              auVar32._8_8_ = 0;
              auVar32._0_8_ = uVar66;
              lVar63 = SUB168(auVar12 * auVar32,8);
              uVar73 = *(uint *)(local_60 + lVar63 * 4);
              uVar62 = SUB164(auVar12 * auVar32,8);
              if ((uVar73 == 0) ||
                 (auVar13._8_8_ = 0, auVar13._0_8_ = (ulong)uVar73 * lVar5, auVar33._8_8_ = 0,
                 auVar33._0_8_ = uVar66, auVar14._8_8_ = 0,
                 auVar14._0_8_ = (ulong)((uVar3 + uVar62) - SUB164(auVar13 * auVar33,8)) * lVar5,
                 auVar34._8_8_ = 0, auVar34._0_8_ = uVar66, SUB164(auVar14 * auVar34,8) < uVar74))
              goto joined_r0x00103536;
            }
            lVar5 = *(long *)(lVar54 + (ulong)uVar62 * 8);
            if (lVar5 == 0) goto joined_r0x00103536;
            lVar5 = *(long *)(lVar5 + 0x18);
            if (iVar65 == 1) {
              fVar84 = *(float *)(lVar5 + 0x1c);
            }
            else {
              fVar84 = *(float *)(lVar5 + 0x20);
            }
            if (fVar84 <= fVar83) goto joined_r0x00103536;
            fVar83 = fVar84;
            if (iVar50 <= (int)lVar71 + 1) goto LAB_0010327b;
            lVar71 = lVar71 + 1;
          } while (lVar80 == 0);
        } while( true );
      }
LAB_0010327b:
      Metric::~Metric((Metric *)local_c8);
      local_170 = local_170 + 1;
    } while (local_170 < *(int *)(this + 0xad8));
    if (0.0 < fVar83) {
      dVar85 = (double)fVar83 * __LC86;
      *(float *)(this + 0xaec) = (float)dVar85;
      iVar50 = local_16c * 4;
      uVar66 = (ulong)iVar50;
      if ((long)uVar66 < 0) {
        _err_print_error("resize","./core/templates/cowdata.h",0x157,
                         "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
LAB_00104091:
        local_168 = (ulong *)0x0;
      }
      else {
        if (uVar66 == 0) goto LAB_00104091;
        uVar57 = uVar66 * 4 - 1;
        uVar57 = uVar57 | uVar57 >> 1;
        uVar57 = uVar57 | uVar57 >> 2;
        uVar57 = uVar57 | uVar57 >> 4;
        uVar57 = uVar57 | uVar57 >> 8;
        uVar57 = uVar57 | uVar57 >> 0x10;
        puVar58 = (ulong *)Memory::alloc_static((uVar57 | uVar57 >> 0x20) + 0x11,false);
        if (puVar58 == (ulong *)0x0) {
          _err_print_error("resize","./core/templates/cowdata.h",0x171,
                           "Parameter \"mem_new\" is null.",0,0);
          goto LAB_00104091;
        }
        puVar81 = puVar58 + 2;
        *puVar58 = 1;
        puVar58[1] = uVar66;
        local_168 = puVar81;
        if (1 < *puVar58) {
          uVar57 = puVar58[1];
          uVar66 = 0x10;
          __n = uVar57 * 4;
          if (__n != 0) {
            uVar66 = __n - 1 | __n - 1 >> 1;
            uVar66 = uVar66 | uVar66 >> 2;
            uVar66 = uVar66 | uVar66 >> 4;
            uVar66 = uVar66 | uVar66 >> 8;
            uVar66 = uVar66 | uVar66 >> 0x10;
            uVar66 = (uVar66 | uVar66 >> 0x20) + 0x11;
          }
          puVar61 = (undefined8 *)Memory::alloc_static(uVar66,false);
          if (puVar61 == (undefined8 *)0x0) {
            _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                             "Parameter \"mem_new\" is null.",0,0);
          }
          else {
            local_168 = puVar61 + 2;
            *puVar61 = 1;
            puVar61[1] = uVar57;
            memcpy(local_168,puVar81,__n);
            LOCK();
            *puVar58 = *puVar58 - 1;
            UNLOCK();
            if (*puVar58 == 0) {
              Memory::free_static(puVar58,false);
            }
          }
        }
      }
      local_d0 = 2;
      local_f0 = (undefined1  [16])0x0;
      local_e0 = (undefined1  [16])0x0;
      if (*(long *)(this + 0xad0) == 0) {
        fVar83 = 0.0;
      }
      else {
        fVar83 = (float)*(long *)(*(long *)(this + 0xad0) + -8);
      }
      fVar84 = expf(*(float *)(this + 0xa60));
      iVar51 = _get_zoom_left_border(this);
      iVar51 = *(int *)(this + 0xad8) - iVar51;
      if (-1 < iVar51) {
        iVar68 = (int)(fVar83 / fVar84);
        if (iVar68 < iVar51) {
          iVar51 = iVar68;
        }
        iVar51 = (iVar51 * local_128) / iVar68 + -1;
        if (0 < iVar51) {
          local_134 = 0;
          local_180 = (undefined8 *)0x0;
          do {
            local_140 = (HashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>>
                         *)&local_f8;
            if (iVar50 < 1) goto LAB_00103f5d;
            memset(local_168,0,(ulong)(iVar50 - 1) * 4 + 4);
            iVar68 = *(int *)(this + 0xaa4);
            if (iVar68 != 0) {
LAB_001037fd:
              local_170 = 0;
              pSVar67 = *(StringName **)(this + 0xa80);
              do {
                _get_frame_metric(iVar72);
                lVar80 = local_98;
                if ((local_98 != 0) && (local_74 != 0)) {
                  uVar3 = *(uint *)(hash_table_size_primes + (ulong)local_78 * 4);
                  uVar66 = CONCAT44(0,uVar3);
                  lVar54 = *(long *)(hash_table_size_primes_inv + (ulong)local_78 * 8);
                  if (*(long *)pSVar67 == 0) {
                    uVar53 = StringName::get_empty_hash();
                  }
                  else {
                    uVar53 = *(uint *)(*(long *)pSVar67 + 0x20);
                  }
                  if (uVar53 == 0) {
                    uVar53 = 1;
                  }
                  auVar15._8_8_ = 0;
                  auVar15._0_8_ = (ulong)uVar53 * lVar54;
                  auVar35._8_8_ = 0;
                  auVar35._0_8_ = uVar66;
                  lVar64 = SUB168(auVar15 * auVar35,8);
                  uVar73 = *(uint *)(local_90 + lVar64 * 4);
                  uVar62 = SUB164(auVar15 * auVar35,8);
                  if (uVar73 != 0) {
                    uVar74 = 0;
                    while ((uVar73 != uVar53 ||
                           (*(long *)(*(long *)(lVar80 + lVar64 * 8) + 0x10) != *(long *)pSVar67)))
                    {
                      uVar74 = uVar74 + 1;
                      auVar16._8_8_ = 0;
                      auVar16._0_8_ = (ulong)(uVar62 + 1) * lVar54;
                      auVar36._8_8_ = 0;
                      auVar36._0_8_ = uVar66;
                      lVar64 = SUB168(auVar16 * auVar36,8);
                      uVar73 = *(uint *)(local_90 + lVar64 * 4);
                      uVar62 = SUB164(auVar16 * auVar36,8);
                      if ((uVar73 == 0) ||
                         (auVar17._8_8_ = 0, auVar17._0_8_ = (ulong)uVar73 * lVar54,
                         auVar37._8_8_ = 0, auVar37._0_8_ = uVar66, auVar18._8_8_ = 0,
                         auVar18._0_8_ =
                              (ulong)((uVar3 + uVar62) - SUB164(auVar17 * auVar37,8)) * lVar54,
                         auVar38._8_8_ = 0, auVar38._0_8_ = uVar66,
                         SUB164(auVar18 * auVar38,8) < uVar74)) goto LAB_00103e60;
                    }
                    lVar80 = *(long *)(lVar80 + (ulong)uVar62 * 8);
                    if (lVar80 != 0) {
                      fVar83 = *(float *)(*(long *)(lVar80 + 0x18) + 0x10);
                      goto LAB_00103963;
                    }
                  }
                }
LAB_00103e60:
                fVar83 = 0.0;
LAB_00103963:
                lVar80 = local_68;
                if ((local_68 != 0) && (local_44 != 0)) {
                  uVar3 = *(uint *)(hash_table_size_primes + (ulong)local_48 * 4);
                  uVar66 = CONCAT44(0,uVar3);
                  lVar54 = *(long *)(hash_table_size_primes_inv + (ulong)local_48 * 8);
                  if (*(long *)pSVar67 == 0) {
                    uVar53 = StringName::get_empty_hash();
                  }
                  else {
                    uVar53 = *(uint *)(*(long *)pSVar67 + 0x20);
                  }
                  if (uVar53 == 0) {
                    uVar53 = 1;
                  }
                  auVar19._8_8_ = 0;
                  auVar19._0_8_ = (ulong)uVar53 * lVar54;
                  auVar39._8_8_ = 0;
                  auVar39._0_8_ = uVar66;
                  lVar64 = SUB168(auVar19 * auVar39,8);
                  uVar73 = *(uint *)(local_60 + lVar64 * 4);
                  uVar62 = SUB164(auVar19 * auVar39,8);
                  if (uVar73 != 0) {
                    uVar74 = 0;
                    while ((uVar53 != uVar73 ||
                           (*(long *)(*(long *)(lVar80 + lVar64 * 8) + 0x10) != *(long *)pSVar67)))
                    {
                      uVar74 = uVar74 + 1;
                      auVar20._8_8_ = 0;
                      auVar20._0_8_ = (ulong)(uVar62 + 1) * lVar54;
                      auVar40._8_8_ = 0;
                      auVar40._0_8_ = uVar66;
                      lVar64 = SUB168(auVar20 * auVar40,8);
                      uVar73 = *(uint *)(local_60 + lVar64 * 4);
                      uVar62 = SUB164(auVar20 * auVar40,8);
                      if ((uVar73 == 0) ||
                         (auVar21._8_8_ = 0, auVar21._0_8_ = (ulong)uVar73 * lVar54,
                         auVar41._8_8_ = 0, auVar41._0_8_ = uVar66, auVar22._8_8_ = 0,
                         auVar22._0_8_ =
                              (ulong)((uVar3 + uVar62) - SUB164(auVar21 * auVar41,8)) * lVar54,
                         auVar42._8_8_ = 0, auVar42._0_8_ = uVar66,
                         SUB164(auVar22 * auVar42,8) < uVar74)) goto LAB_00103a62;
                    }
                    lVar80 = *(long *)(lVar80 + (ulong)uVar62 * 8);
                    if (lVar80 != 0) {
                      lVar80 = *(long *)(lVar80 + 0x18);
                      if (iVar65 == 1) {
                        fVar83 = *(float *)(lVar80 + 0x1c);
                      }
                      else {
                        fVar83 = *(float *)(lVar80 + 0x20);
                      }
                    }
                  }
                }
LAB_00103a62:
                iVar76 = (int)((fVar83 * (float)local_16c) / (float)dVar85);
                if (iVar76 < 0) {
                  iVar76 = 0;
                  iVar52 = local_16c;
                }
                else {
                  if (local_16c + -1 < iVar76) {
                    iVar76 = local_16c + -1;
                  }
                  iVar52 = local_16c - iVar76;
                }
                if ((local_180 != (undefined8 *)0x0) && (local_d0._4_4_ != 0)) {
                  uVar3 = *(uint *)(hash_table_size_primes + (local_d0 & 0xffffffff) * 4);
                  uVar66 = CONCAT44(0,uVar3);
                  lVar80 = *(long *)(hash_table_size_primes_inv + (local_d0 & 0xffffffff) * 8);
                  if (*(long *)pSVar67 == 0) {
                    uVar53 = StringName::get_empty_hash();
                  }
                  else {
                    uVar53 = *(uint *)(*(long *)pSVar67 + 0x20);
                  }
                  if (uVar53 == 0) {
                    uVar53 = 1;
                  }
                  auVar23._8_8_ = 0;
                  auVar23._0_8_ = (ulong)uVar53 * lVar80;
                  auVar43._8_8_ = 0;
                  auVar43._0_8_ = uVar66;
                  lVar54 = SUB168(auVar23 * auVar43,8);
                  uVar73 = *(uint *)(local_f0._8_8_ + lVar54 * 4);
                  uVar62 = SUB164(auVar23 * auVar43,8);
                  if (uVar73 != 0) {
                    uVar74 = 0;
                    while ((uVar73 != uVar53 ||
                           (*(long *)(local_180[lVar54] + 0x10) != *(long *)pSVar67))) {
                      uVar74 = uVar74 + 1;
                      auVar24._8_8_ = 0;
                      auVar24._0_8_ = (ulong)(uVar62 + 1) * lVar80;
                      auVar44._8_8_ = 0;
                      auVar44._0_8_ = uVar66;
                      lVar54 = SUB168(auVar24 * auVar44,8);
                      uVar73 = *(uint *)(local_f0._8_8_ + lVar54 * 4);
                      uVar62 = SUB164(auVar24 * auVar44,8);
                      if ((uVar73 == 0) ||
                         (auVar25._8_8_ = 0, auVar25._0_8_ = (ulong)uVar73 * lVar80,
                         auVar45._8_8_ = 0, auVar45._0_8_ = uVar66, auVar26._8_8_ = 0,
                         auVar26._0_8_ =
                              (ulong)((uVar3 + uVar62) - SUB164(auVar25 * auVar45,8)) * lVar80,
                         auVar46._8_8_ = 0, auVar46._0_8_ = uVar66,
                         SUB164(auVar26 * auVar46,8) < uVar74)) goto LAB_00103e10;
                    }
                    lVar80 = local_180[uVar62];
                    if (lVar80 != 0) {
                      iVar4 = *(int *)(lVar80 + 0x18);
                      *(int *)(lVar80 + 0x18) = iVar76;
                      iVar69 = (local_16c - iVar4) + -1;
                      iVar70 = iVar69;
                      iVar79 = iVar52 + -1;
                      if (iVar76 <= iVar4) {
                        iVar70 = iVar52 + -1;
                        iVar79 = iVar69;
                      }
                      auVar87 = _get_color_from_signature(this,pSVar67);
                      if (iVar70 < iVar79) goto LAB_00103d18;
                      goto LAB_00103bd4;
                    }
                  }
                }
LAB_00103e10:
                piVar59 = (int *)HashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>>
                                 ::operator[](local_140,pSVar67);
                *piVar59 = iVar76;
                local_180 = (undefined8 *)local_f0._0_8_;
                iVar70 = (local_16c - iVar76) + -1;
                auVar87 = _get_color_from_signature(this,pSVar67);
                iVar79 = iVar70;
LAB_00103bd4:
                fVar83 = _LC84 * auVar87._0_4_;
                puVar58 = (ulong *)((long)local_168 + (long)(iVar79 * 4) * 4);
                do {
                  fVar84 = 0.0;
                  if (0.0 <= fVar83) {
                    fVar84 = (float)(~-(uint)(_LC84 < fVar83) & (uint)fVar83 |
                                    (uint)_LC84 & -(uint)(_LC84 < fVar83));
                  }
                  lVar80 = lrintf(fVar84);
                  fVar84 = _LC84;
                  *(int *)puVar58 = (int)*puVar58 + (int)lVar80;
                  fVar84 = fVar84 * auVar87._4_4_;
                  if (0.0 <= fVar84) {
                    if (_LC84 < fVar84) {
                      fVar84 = _LC84;
                    }
                  }
                  else {
                    fVar84 = 0.0;
                  }
                  lVar80 = lrintf(fVar84);
                  *(int *)((long)puVar58 + 4) = *(int *)((long)puVar58 + 4) + (int)lVar80;
                  fVar84 = _LC84 * auVar87._8_4_;
                  if (fVar84 < 0.0) {
                    fVar84 = 0.0;
                  }
                  else if (_LC84 < fVar84) {
                    fVar84 = _LC84;
                  }
                  lVar80 = lrintf(fVar84);
                  puVar81 = puVar58 + 2;
                  puVar58[1] = CONCAT44((int)(puVar58[1] >> 0x20) + 1,(int)puVar58[1] + (int)lVar80)
                  ;
                  puVar58 = puVar81;
                } while (puVar81 !=
                         local_168 + ((ulong)(uint)(iVar70 - iVar79) + (long)iVar79) * 2 + 2);
LAB_00103d18:
                Metric::~Metric((Metric *)local_c8);
                local_170 = local_170 + 1;
                if (iVar68 <= local_170) goto code_r0x00103d37;
                pSVar67 = pSVar67 + 8;
              } while( true );
            }
LAB_00103d45:
            iVar68 = 0;
            puVar58 = local_168;
            do {
              iVar76 = *(int *)((long)puVar58 + 0xc);
              if (iVar76 < 1) {
                iVar76 = (int)puVar58[1];
                cVar49 = (char)(int)*puVar58;
                iVar52 = *(int *)((long)puVar58 + 4);
              }
              else {
                lVar80 = (long)(int)*puVar58 / (long)iVar76;
                *(int *)puVar58 = (int)lVar80;
                cVar49 = (char)lVar80;
                iVar52 = *(int *)((long)puVar58 + 4) / iVar76;
                *(int *)((long)puVar58 + 4) = iVar52;
                iVar76 = (int)puVar58[1] / iVar76;
                *(int *)(puVar58 + 1) = iVar76;
              }
              cVar75 = (char)iVar76;
              lVar80 = (long)(((iVar68 >> 2) * local_128 + local_134) * 4);
              pcVar2 = (char *)(lVar78 + 1 + lVar80);
              if (((char)iVar52 == '\0' && cVar49 == '\0') && cVar75 == '\0') {
                lVar54 = lrintf(_LC84 * auVar86._0_4_);
                fVar83 = _LC84 * auVar86._4_4_;
                *(char *)(lVar78 + lVar80) = (char)lVar54;
                lVar54 = lrintf(fVar83);
                fVar83 = local_130 * _LC84;
                *pcVar2 = (char)lVar54;
                lVar54 = lrintf(fVar83);
                cVar75 = (char)lVar54;
              }
              else {
                *(char *)(lVar78 + lVar80) = cVar49;
                *pcVar2 = (char)iVar52;
              }
              *(char *)(lVar78 + 2 + lVar80) = cVar75;
              iVar68 = iVar68 + 4;
              puVar58 = puVar58 + 2;
              *(undefined1 *)(lVar78 + 3 + lVar80) = 0xff;
            } while (iVar68 < iVar50);
LAB_00103f70:
            local_134 = local_134 + 1;
          } while (iVar51 != local_134);
LAB_00103f94:
          if (local_180 != (undefined8 *)0x0) {
            uVar48 = local_f0._8_8_;
            if ((local_d0._4_4_ != 0) &&
               (*(uint *)(hash_table_size_primes + (local_d0 & 0xffffffff) * 4) != 0)) {
              piVar59 = (int *)(local_f0._8_8_ +
                               (ulong)*(uint *)(hash_table_size_primes + (local_d0 & 0xffffffff) * 4
                                               ) * 4);
              piVar77 = (int *)local_f0._8_8_;
              puVar61 = local_180;
              do {
                if (*piVar77 != 0) {
                  bVar82 = StringName::configured != '\0';
                  pvVar6 = (void *)*puVar61;
                  *piVar77 = 0;
                  if ((bVar82) && (*(long *)((long)pvVar6 + 0x10) != 0)) {
                    StringName::unref();
                  }
                  Memory::free_static(pvVar6,false);
                  *puVar61 = 0;
                }
                piVar77 = piVar77 + 1;
                puVar61 = puVar61 + 1;
              } while (piVar77 != piVar59);
            }
            Memory::free_static(local_180,false);
            Memory::free_static((void *)uVar48,false);
          }
        }
      }
      if (local_168 != (ulong *)0x0) {
        local_168 = local_168 + -2;
        LOCK();
        *local_168 = *local_168 - 1;
        UNLOCK();
        if (*local_168 == 0) {
          Memory::free_static(local_168,false);
        }
      }
    }
  }
  local_140 = (HashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>>
               *)&local_f8;
  Image::create_from_data(local_140,local_128,local_16c,0,5,this + 0xa50);
  if (!bVar47) goto LAB_0010331c;
  pRVar60 = *(Ref **)(this + 0xa48);
  if (pRVar60 == (Ref *)0x0) {
    pRVar60 = (Ref *)operator_new(0x318,"");
    ImageTexture::ImageTexture((ImageTexture *)pRVar60);
    postinitialize_handler((Object *)pRVar60);
    cVar49 = RefCounted::init_ref();
    if (cVar49 == '\0') {
      pRVar60 = *(Ref **)(this + 0xa48);
      if (pRVar60 != (Ref *)0x0) {
        *(undefined8 *)(this + 0xa48) = 0;
        cVar49 = RefCounted::unreference();
        if (cVar49 != '\0') goto LAB_001044fc;
        pRVar60 = *(Ref **)(this + 0xa48);
      }
    }
    else {
      pOVar55 = *(Object **)(this + 0xa48);
      if (pOVar55 != (Object *)pRVar60) {
        *(Ref **)(this + 0xa48) = pRVar60;
        cVar49 = RefCounted::reference();
        if (cVar49 == '\0') {
          *(undefined8 *)(this + 0xa48) = 0;
        }
        if (((pOVar55 != (Object *)0x0) && (cVar49 = RefCounted::unreference(), cVar49 != '\0')) &&
           (cVar49 = predelete_handler(pOVar55), cVar49 != '\0')) {
          (**(code **)(*(long *)pOVar55 + 0x140))(pOVar55);
          Memory::free_static(pOVar55,false);
        }
      }
      cVar49 = RefCounted::unreference();
      if (cVar49 != '\0') {
LAB_001044fc:
        cVar49 = predelete_handler((Object *)pRVar60);
        if (cVar49 != '\0') {
          (**(code **)(*(long *)pRVar60 + 0x140))(pRVar60);
          Memory::free_static(pRVar60,false);
        }
      }
      pRVar60 = *(Ref **)(this + 0xa48);
    }
  }
  ImageTexture::set_image(pRVar60);
LAB_0010331c:
  ImageTexture::update(*(Ref **)(this + 0xa48));
  pRVar60 = *(Ref **)(this + 0xa40);
  local_c8[0] = (Object *)0x0;
  if (((*(long *)(this + 0xa48) != 0) &&
      (pOVar55 = (Object *)
                 __dynamic_cast(*(long *)(this + 0xa48),&Object::typeinfo,&Texture2D::typeinfo,0),
      pOVar55 != (Object *)0x0)) &&
     (local_c8[0] = pOVar55, cVar49 = RefCounted::reference(), cVar49 == '\0')) {
    local_c8[0] = (Object *)0x0;
  }
  TextureRect::set_texture(pRVar60);
  if (((local_c8[0] != (Object *)0x0) &&
      (cVar49 = RefCounted::unreference(), pOVar55 = local_c8[0], cVar49 != '\0')) &&
     (cVar49 = predelete_handler(local_c8[0]), cVar49 != '\0')) {
    (**(code **)(*(long *)pOVar55 + 0x140))(pOVar55);
    Memory::free_static(pOVar55,false);
  }
  CanvasItem::queue_redraw();
  if (((local_f8 != (Object *)0x0) && (cVar49 = RefCounted::unreference(), cVar49 != '\0')) &&
     (cVar49 = predelete_handler(local_f8), cVar49 != '\0')) {
    if (*(code **)(*(long *)local_f8 + 0x140) == Image::~Image) {
      *(code **)local_f8 = Memory::free_static;
      if (*(long *)(local_f8 + 0x250) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)(local_f8 + 0x250) + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar78 = *(long *)(local_f8 + 0x250);
          *(undefined8 *)(local_f8 + 0x250) = 0;
          Memory::free_static((void *)(lVar78 + -0x10),false);
        }
      }
      Resource::~Resource((Resource *)local_f8);
    }
    else {
      (**(code **)(*(long *)local_f8 + 0x140))(local_f8);
    }
    Memory::free_static(local_f8,false);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
code_r0x00103d37:
  if (0 < iVar50) goto LAB_00103d45;
  local_134 = local_134 + 1;
  if (iVar51 == local_134) goto LAB_00103f94;
LAB_00103f5d:
  iVar68 = *(int *)(this + 0xaa4);
  if (iVar68 == 0) goto LAB_00103f70;
  goto LAB_001037fd;
}



/* EditorProfiler::_item_edited() */

void __thiscall EditorProfiler::_item_edited(EditorProfiler *this)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
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
  char cVar29;
  uint uVar30;
  uint uVar31;
  long lVar32;
  int iVar33;
  long lVar34;
  ulong uVar35;
  ulong uVar36;
  ulong uVar37;
  uint *puVar38;
  uint uVar39;
  uint *puVar40;
  uint *puVar41;
  uint uVar42;
  ulong uVar43;
  ulong uVar44;
  long in_FS_OFFSET;
  long local_70;
  StringName local_68 [16];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((this[0xae4] == (EditorProfiler)0x0) && (lVar32 = Tree::get_edited(), lVar32 != 0)) {
    TreeItem::get_metadata((int)local_58);
    Variant::operator_cast_to_StringName((Variant *)&local_70);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    cVar29 = TreeItem::is_checked((int)lVar32);
    if (cVar29 == '\0') {
      if ((*(long *)(this + 0xa80) != 0) && (*(int *)(this + 0xaa4) != 0)) {
        uVar30 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xaa0) * 4);
        lVar32 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0xaa0) * 8);
        if (local_70 == 0) {
          uVar31 = StringName::get_empty_hash();
        }
        else {
          uVar31 = *(uint *)(local_70 + 0x20);
        }
        uVar37 = CONCAT44(0,uVar30);
        lVar5 = *(long *)(this + 0xa98);
        if (uVar31 == 0) {
          uVar31 = 1;
        }
        auVar9._8_8_ = 0;
        auVar9._0_8_ = (ulong)uVar31 * lVar32;
        auVar19._8_8_ = 0;
        auVar19._0_8_ = uVar37;
        lVar34 = SUB168(auVar9 * auVar19,8);
        uVar39 = *(uint *)(lVar5 + lVar34 * 4);
        iVar33 = SUB164(auVar9 * auVar19,8);
        if (uVar39 != 0) {
          uVar42 = 0;
LAB_00104755:
          if (uVar31 != uVar39) goto LAB_00104708;
          lVar6 = *(long *)(this + 0xa88);
          lVar7 = *(long *)(this + 0xa80);
          uVar39 = *(uint *)(lVar6 + lVar34 * 4);
          uVar35 = (ulong)uVar39;
          if (*(long *)(lVar7 + uVar35 * 8) != local_70) goto LAB_00104708;
          lVar34 = *(long *)(this + 0xa90);
          uVar30 = *(uint *)(lVar34 + uVar35 * 4);
          uVar37 = (ulong)uVar30;
          lVar8 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0xaa0) * 8);
          uVar31 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xaa0) * 4);
          uVar44 = CONCAT44(0,uVar31);
          auVar13._8_8_ = 0;
          auVar13._0_8_ = (ulong)(uVar30 + 1) * lVar8;
          auVar23._8_8_ = 0;
          auVar23._0_8_ = uVar44;
          lVar32 = SUB168(auVar13 * auVar23,8) * 4;
          uVar42 = SUB164(auVar13 * auVar23,8);
          uVar43 = (ulong)uVar42;
          puVar38 = (uint *)(lVar5 + lVar32);
          if ((*puVar38 == 0) ||
             (auVar14._8_8_ = 0, auVar14._0_8_ = (ulong)*puVar38 * lVar8, auVar24._8_8_ = 0,
             auVar24._0_8_ = uVar44, auVar15._8_8_ = 0,
             auVar15._0_8_ = (ulong)((uVar31 + uVar42) - SUB164(auVar14 * auVar24,8)) * lVar8,
             auVar25._8_8_ = 0, auVar25._0_8_ = uVar44, SUB164(auVar15 * auVar25,8) == 0)) {
            uVar43 = (ulong)uVar30;
          }
          else {
            while( true ) {
              puVar40 = (uint *)(lVar32 + lVar6);
              puVar1 = (uint *)(lVar6 + uVar37 * 4);
              puVar41 = (uint *)(uVar37 * 4 + lVar5);
              puVar2 = (undefined4 *)(lVar34 + (ulong)*puVar40 * 4);
              puVar3 = (undefined4 *)(lVar34 + (ulong)*puVar1 * 4);
              uVar4 = *puVar3;
              *puVar3 = *puVar2;
              *puVar2 = uVar4;
              uVar30 = *puVar38;
              *puVar38 = *puVar41;
              *puVar41 = uVar30;
              uVar30 = *puVar40;
              *puVar40 = *puVar1;
              *puVar1 = uVar30;
              auVar18._8_8_ = 0;
              auVar18._0_8_ = (ulong)((int)uVar43 + 1) * lVar8;
              auVar28._8_8_ = 0;
              auVar28._0_8_ = uVar44;
              uVar36 = SUB168(auVar18 * auVar28,8);
              lVar32 = uVar36 * 4;
              puVar38 = (uint *)(lVar5 + lVar32);
              if ((*puVar38 == 0) ||
                 (auVar16._8_8_ = 0, auVar16._0_8_ = (ulong)*puVar38 * lVar8, auVar26._8_8_ = 0,
                 auVar26._0_8_ = uVar44, auVar17._8_8_ = 0,
                 auVar17._0_8_ =
                      (ulong)((SUB164(auVar18 * auVar28,8) + uVar31) - SUB164(auVar16 * auVar26,8))
                      * lVar8, auVar27._8_8_ = 0, auVar27._0_8_ = uVar44,
                 SUB164(auVar17 * auVar27,8) == 0)) break;
              uVar37 = uVar43;
              uVar43 = uVar36 & 0xffffffff;
            }
          }
          *(undefined4 *)(lVar5 + uVar43 * 4) = 0;
          if ((StringName::configured != '\0') && (*(long *)(lVar7 + uVar35 * 8) != 0)) {
            StringName::unref();
          }
          uVar30 = *(int *)(this + 0xaa4) - 1;
          *(uint *)(this + 0xaa4) = uVar30;
          if (uVar39 < uVar30) {
            StringName::StringName
                      ((StringName *)(*(long *)(this + 0xa80) + uVar35 * 8),
                       (StringName *)(*(long *)(this + 0xa80) + (ulong)uVar30 * 8));
            uVar37 = (ulong)*(uint *)(this + 0xaa4);
            if ((StringName::configured != '\0') &&
               (*(long *)(*(long *)(this + 0xa80) + uVar37 * 8) != 0)) {
              StringName::unref();
              uVar37 = (ulong)*(uint *)(this + 0xaa4);
            }
            lVar32 = *(long *)(this + 0xa90);
            *(undefined4 *)(lVar32 + uVar35 * 4) = *(undefined4 *)(lVar32 + uVar37 * 4);
            *(uint *)(*(long *)(this + 0xa88) +
                     (ulong)*(uint *)(lVar32 + (ulong)*(uint *)(this + 0xaa4) * 4) * 4) = uVar39;
          }
        }
      }
    }
    else {
      HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert
                (local_68);
    }
LAB_0010495e:
    cVar29 = Node::is_processing();
    if (cVar29 == '\0') {
      Timer::set_wait_time(_LC89);
      Timer::start(_LC90);
    }
    _update_plot(this);
    if ((StringName::configured != '\0') && (local_70 != 0)) {
      StringName::unref();
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
LAB_00104708:
  uVar42 = uVar42 + 1;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = (ulong)(iVar33 + 1) * lVar32;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar37;
  lVar34 = SUB168(auVar10 * auVar20,8);
  uVar39 = *(uint *)(lVar5 + lVar34 * 4);
  iVar33 = SUB164(auVar10 * auVar20,8);
  if ((uVar39 == 0) ||
     (auVar11._8_8_ = 0, auVar11._0_8_ = (ulong)uVar39 * lVar32, auVar21._8_8_ = 0,
     auVar21._0_8_ = uVar37, auVar12._8_8_ = 0,
     auVar12._0_8_ = (ulong)((uVar30 + iVar33) - SUB164(auVar11 * auVar21,8)) * lVar32,
     auVar22._8_8_ = 0, auVar22._0_8_ = uVar37, SUB164(auVar12 * auVar22,8) < uVar42))
  goto LAB_0010495e;
  goto LAB_00104755;
}



/* EditorProfiler::_notification(int) [clone .part.0] */

void EditorProfiler::_notification(int param_1)

{
  Ref *pRVar1;
  Object *pOVar2;
  char cVar3;
  int iVar4;
  undefined4 in_register_0000003c;
  StringName *this;
  long in_FS_OFFSET;
  undefined8 uVar5;
  undefined8 in_XMM1_Qa;
  Object *local_38;
  long local_30;
  
  this = (StringName *)CONCAT44(in_register_0000003c,param_1);
  pRVar1 = *(Ref **)(this + 0xa30);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (_notification(int)::{lambda()#1}::operator()()::sname == '\0') {
    iVar4 = __cxa_guard_acquire(&_notification(int)::{lambda()#1}::operator()()::sname);
    if (iVar4 != 0) {
      _scs_create((char *)&_notification(int)::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#1}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#1}::operator()()::sname);
    }
  }
  Control::get_editor_theme_icon((StringName *)&local_38);
  Button::set_button_icon(pRVar1);
  if (local_38 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    pOVar2 = local_38;
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_38);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
  pRVar1 = *(Ref **)(this + 0xa38);
  if (_notification(int)::{lambda()#2}::operator()()::sname == '\0') {
    iVar4 = __cxa_guard_acquire(&_notification(int)::{lambda()#2}::operator()()::sname);
    if (iVar4 != 0) {
      _scs_create((char *)&_notification(int)::{lambda()#2}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#2}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#2}::operator()()::sname);
    }
  }
  Control::get_editor_theme_icon((StringName *)&local_38);
  Button::set_button_icon(pRVar1);
  if (local_38 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_38);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)local_38 + 0x140))(local_38);
        Memory::free_static(local_38,false);
      }
    }
  }
  uVar5 = Control::get_theme_color(this,(StringName *)(SceneStringNames::singleton + 0xb0));
  *(undefined8 *)(this + 0xa18) = in_XMM1_Qa;
  *(undefined8 *)(this + 0xa10) = uVar5;
  *(undefined4 *)(this + 0xa1c) = 0x3f4ccccd;
  *(undefined8 *)(this + 0xa20) = *(undefined8 *)(this + 0xa10);
  *(undefined8 *)(this + 0xa28) = *(undefined8 *)(this + 0xa18);
  *(undefined4 *)(this + 0xa2c) = 0x3ecccccd;
  if (*(int *)(this + 0xad8) < 1) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    _update_plot((EditorProfiler *)this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorProfiler::_notification(int) */

void __thiscall EditorProfiler::_notification(EditorProfiler *this,int param_1)

{
  if (param_1 < 0x32) {
    if (param_1 < 10) {
      return;
    }
    if ((0x2200000000400U >> ((ulong)(uint)param_1 & 0x3f) & 1) == 0) {
      return;
    }
  }
  else if (param_1 != 0x7da) {
    return;
  }
  _notification((int)this);
  return;
}



/* EditorProfiler::_combo_changed(int) */

void EditorProfiler::_combo_changed(int param_1)

{
  undefined4 in_register_0000003c;
  
  _update_frame((EditorProfiler *)CONCAT44(in_register_0000003c,param_1));
  _update_plot((EditorProfiler *)CONCAT44(in_register_0000003c,param_1));
  return;
}



/* EditorProfiler::_internal_profiles_pressed() */

void __thiscall EditorProfiler::_internal_profiles_pressed(EditorProfiler *this)

{
  _update_frame(this);
  _update_plot(this);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EditorProfiler::_graph_tex_input(Ref<InputEvent> const&) */

void __thiscall EditorProfiler::_graph_tex_input(EditorProfiler *this,Ref *param_1)

{
  char cVar1;
  int iVar2;
  Object *pOVar3;
  Object *pOVar4;
  Object *pOVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  long in_FS_OFFSET;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  double dVar15;
  float fVar16;
  float fVar17;
  Metric local_e8 [4];
  int local_e4;
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (-1 < *(int *)(this + 0xadc)) {
    pOVar5 = *(Object **)param_1;
    pOVar3 = pOVar5;
    if (pOVar5 == (Object *)0x0) {
LAB_00105253:
      pOVar5 = (Object *)0x0;
      pOVar4 = (Object *)0x0;
      if (*(float *)(this + 0xa60) <= 0.0) {
LAB_00105112:
        CanvasItem::queue_redraw();
        if (((pOVar5 != (Object *)0x0) && (cVar1 = RefCounted::unreference(), cVar1 != '\0')) &&
           (cVar1 = predelete_handler(pOVar5), cVar1 != '\0')) {
          (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
          Memory::free_static(pOVar5,false);
        }
        goto LAB_00105133;
      }
      CanvasItem::queue_redraw();
    }
    else {
      pOVar3 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&InputEventMouse::typeinfo,0);
      if (pOVar3 != (Object *)0x0) {
        cVar1 = RefCounted::reference();
        pOVar5 = *(Object **)param_1;
        if (cVar1 == '\0') {
          pOVar3 = (Object *)0x0;
        }
        if (pOVar5 == (Object *)0x0) goto LAB_00105253;
      }
      pOVar4 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&InputEventMouseButton::typeinfo,0)
      ;
      if (pOVar4 != (Object *)0x0) {
        cVar1 = RefCounted::reference();
        pOVar5 = *(Object **)param_1;
        if (cVar1 == '\0') {
          pOVar4 = (Object *)0x0;
          if (pOVar5 == (Object *)0x0) goto LAB_00105253;
          goto LAB_00104dcb;
        }
        if (pOVar5 != (Object *)0x0) goto LAB_00104dcb;
LAB_00104e01:
        iVar2 = InputEventMouseButton::get_button_index();
        if ((iVar2 == 1) && (cVar1 = InputEvent::is_pressed(), cVar1 != '\0')) {
          pOVar5 = (Object *)0x0;
          goto LAB_00104e28;
        }
LAB_0010536e:
        fVar11 = *(float *)(this + 0xa60);
        pOVar5 = (Object *)0x0;
        if (0.0 < fVar11) goto LAB_00105390;
LAB_001050fe:
        if (iVar2 == 5) {
LAB_0010539d:
          dVar15 = (double)*(float *)(this + 0xa60) - __LC95;
          if (0.0 < dVar15) {
LAB_001053c8:
            fVar11 = (float)dVar15;
          }
          else {
            fVar11 = 0.0;
          }
        }
        else {
          if (iVar2 != 4) goto LAB_00105112;
          fVar11 = *(float *)(this + 0xa60);
LAB_00105288:
          if (fVar11 == 0.0) {
            fVar11 = (float)InputEventMouse::get_position();
            *(int *)(this + 0xa68) = (int)fVar11;
            if (*(long *)(this + 0xad0) == 0) {
              fVar16 = 0.0;
            }
            else {
              fVar16 = (float)((long)(int)fVar11 * *(long *)(*(long *)(this + 0xad0) + -8));
            }
            fVar12 = (float)Control::get_size();
            fVar11 = *(float *)(this + 0xa60);
            *(int *)(this + 0xa68) = (int)(fVar16 / fVar12);
          }
          dVar15 = (double)fVar11 + __LC95;
          fVar11 = _LC97._4_4_;
          if (dVar15 < (double)CONCAT44(_LC97._4_4_,(undefined4)_LC97)) goto LAB_001053c8;
        }
        *(float *)(this + 0xa60) = fVar11;
        _update_plot(this);
        goto LAB_00105112;
      }
LAB_00104dcb:
      pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&InputEventMouseMotion::typeinfo,0)
      ;
      if (pOVar5 == (Object *)0x0) {
        if (pOVar4 == (Object *)0x0) goto LAB_00105253;
        iVar2 = InputEventMouseButton::get_button_index();
        if ((iVar2 == 1) && (cVar1 = InputEvent::is_pressed(), cVar1 != '\0')) goto LAB_00104e28;
        goto LAB_0010536e;
      }
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        if (pOVar4 == (Object *)0x0) goto LAB_00105253;
        goto LAB_00104e01;
      }
      iVar2 = 0;
      if ((pOVar4 != (Object *)0x0) &&
         (iVar2 = InputEventMouseButton::get_button_index(), iVar2 == 1)) {
        InputEvent::is_pressed();
      }
LAB_00104e28:
      fVar11 = (float)InputEventMouse::get_position();
      fVar11 = fVar11 - _LC13;
      if (*(long *)(this + 0xad0) == 0) {
        fVar16 = 0.0;
      }
      else {
        fVar16 = (float)(*(long *)(*(long *)(this + 0xad0) + -8) * (long)(int)fVar11);
      }
      fVar12 = (float)Control::get_size();
      *(int *)(this + 0xae8) = (int)(fVar16 / fVar12);
      if (*(long *)(this + 0xad0) == 0) {
        fVar11 = 0.0;
      }
      else {
        fVar11 = (float)((long)(int)fVar11 * *(long *)(*(long *)(this + 0xad0) + -8));
      }
      fVar12 = (float)Control::get_size();
      fVar16 = *(float *)(this + 0xa60);
      fVar13 = expf(fVar16);
      if (*(long *)(this + 0xad0) == 0) {
        fVar17 = 0.0;
        lVar7 = -1;
        lVar10 = 0;
      }
      else {
        lVar10 = *(long *)(*(long *)(this + 0xad0) + -8);
        fVar17 = (float)lVar10;
        lVar7 = lVar10 + -1;
      }
      fVar16 = expf(fVar16);
      fVar14 = 0.0;
      iVar8 = *(int *)(this + 0xa68) - (int)(fVar17 / fVar16) / 2;
      if (-1 < iVar8) {
        lVar10 = lVar10 - (int)(fVar17 / fVar16);
        if (iVar8 < lVar10) {
          lVar10 = (long)iVar8;
        }
        fVar14 = (float)(int)lVar10;
      }
      iVar8 = (int)(fVar14 + (float)(int)(fVar11 / fVar12) / fVar13);
      lVar10 = (long)iVar8;
      if (lVar7 < iVar8) {
        lVar10 = lVar7;
      }
      iVar9 = 0;
      if (-1 < iVar8) {
        iVar9 = (int)lVar10;
      }
      if ((pOVar4 != (Object *)0x0) ||
         (uVar6 = InputEventMouse::get_button_mask(), (uVar6 & 1) != 0)) {
        this[0xae4] = (EditorProfiler)0x1;
        if (iVar9 < *(int *)(this + 0xad8)) {
          _get_frame_metric((int)local_e8);
          Range::set_value((double)local_e4);
          Metric::~Metric(local_e8);
        }
        this[0xae4] = (EditorProfiler)0x0;
        cVar1 = BaseButton::is_pressed();
        if ((cVar1 != '\0') && (this[0xaf0] == (EditorProfiler)0x0)) {
          if ((_graph_tex_input(Ref<InputEvent>const&)::{lambda()#1}::operator()()::sname == '\0')
             && (iVar8 = __cxa_guard_acquire(&_graph_tex_input(Ref<InputEvent>const&)::{lambda()#1}
                                              ::operator()()::sname), iVar8 != 0)) {
            _scs_create((char *)&_graph_tex_input(Ref<InputEvent>const&)::{lambda()#1}::operator()()
                                 ::sname,true);
            __cxa_atexit(StringName::~StringName,
                         &_graph_tex_input(Ref<InputEvent>const&)::{lambda()#1}::operator()()::sname
                         ,&__dso_handle);
            __cxa_guard_release(&_graph_tex_input(Ref<InputEvent>const&)::{lambda()#1}::operator()()
                                 ::sname);
          }
          local_50 = (undefined1  [16])0x0;
          local_58 = 0;
          (**(code **)(*(long *)this + 0xd0))
                    (this,&_graph_tex_input(Ref<InputEvent>const&)::{lambda()#1}::operator()()::
                           sname,0,0);
          if (Variant::needs_deinit[(int)local_58] != '\0') {
            Variant::_clear_internal();
          }
        }
        this[0xaf0] = (EditorProfiler)0x1;
        cVar1 = Node::is_processing();
        if (cVar1 == '\0') {
          Timer::set_wait_time(_LC89);
          Timer::start(_LC90);
        }
      }
      fVar11 = *(float *)(this + 0xa60);
      if (fVar11 <= 0.0) goto LAB_001050fe;
      if (pOVar5 != (Object *)0x0) {
        uVar6 = InputEventMouse::get_button_mask();
        if (((uVar6 & 4) != 0) || (uVar6 = InputEventMouse::get_button_mask(), (uVar6 & 2) != 0)) {
          if (*(long *)(this + 0xad0) == 0) {
            fVar11 = 0.0;
          }
          else {
            fVar11 = (float)*(long *)(*(long *)(this + 0xad0) + -8);
          }
          fVar16 = expf(*(float *)(this + 0xa60));
          fVar12 = (float)InputEventMouseMotion::get_relative();
          fVar13 = (float)Control::get_size();
          fVar12 = ((float)(int)(fVar11 / fVar16) * fVar12) / fVar13 + *(float *)(this + 0xa64);
          *(float *)(this + 0xa64) = fVar12;
          if (_LC13 < ABS(fVar12)) {
            if (*(long *)(this + 0xad0) == 0) {
              lVar7 = 0;
            }
            else {
              lVar7 = *(long *)(*(long *)(this + 0xad0) + -8);
            }
            iVar8 = (int)(fVar11 / fVar16) / 2;
            iVar9 = *(int *)(this + 0xa68) - (int)fVar12;
            if (iVar8 <= iVar9) {
              lVar10 = (long)iVar9;
              if (lVar7 - iVar8 <= (long)iVar9) {
                lVar10 = lVar7 - iVar8;
              }
              iVar8 = (int)lVar10;
            }
            *(int *)(this + 0xa68) = iVar8;
            *(float *)(this + 0xa64) = fVar12 - (float)(int)fVar12;
            _update_plot(this);
          }
        }
        goto LAB_001050fe;
      }
LAB_00105390:
      pOVar5 = (Object *)0x0;
      if (iVar2 == 5) goto LAB_0010539d;
      if (iVar2 == 4) goto LAB_00105288;
      CanvasItem::queue_redraw();
LAB_00105133:
      if (((pOVar4 != (Object *)0x0) && (cVar1 = RefCounted::unreference(), cVar1 != '\0')) &&
         (cVar1 = predelete_handler(pOVar4), cVar1 != '\0')) {
        (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        Memory::free_static(pOVar4,false);
      }
    }
    if (((pOVar3 != (Object *)0x0) && (cVar1 = RefCounted::unreference(), cVar1 != '\0')) &&
       (cVar1 = predelete_handler(pOVar3), cVar1 != '\0')) {
      (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        Memory::free_static(pOVar3,false);
        return;
      }
      goto LAB_00105628;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00105628:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<EditorProfiler::Metric>::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<EditorProfiler::Metric>::_copy_on_write(CowData<EditorProfiler::Metric> *this)

{
  Metric *this_00;
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  Metric *pMVar5;
  ulong uVar6;
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
  uVar6 = 0x10;
  if (lVar1 * 0x88 != 0) {
    uVar6 = lVar1 * 0x88 - 1;
    uVar6 = uVar6 | uVar6 >> 1;
    uVar6 = uVar6 | uVar6 >> 2;
    uVar6 = uVar6 | uVar6 >> 4;
    uVar6 = uVar6 | uVar6 >> 8;
    uVar6 = uVar6 | uVar6 >> 0x10;
    uVar6 = (uVar6 | uVar6 >> 0x20) + 0x11;
  }
  puVar3 = (undefined8 *)Memory::alloc_static(uVar6,false);
  if (puVar3 != (undefined8 *)0x0) {
    lVar4 = 0;
    lVar7 = 0;
    *puVar3 = 1;
    puVar3[1] = lVar1;
    if (lVar1 != 0) {
      do {
        this_00 = (Metric *)((long)(puVar3 + 2) + lVar4);
        lVar7 = lVar7 + 1;
        pMVar5 = (Metric *)(*(long *)this + lVar4);
        lVar4 = lVar4 + 0x88;
        EditorProfiler::Metric::Metric(this_00,pMVar5);
      } while (lVar1 != lVar7);
    }
    _unref(this);
    *(undefined8 **)this = puVar3 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<EditorProfiler::Metric>::resize<false>(long) [clone .isra.0] */

void __thiscall
CowData<EditorProfiler::Metric>::resize<false>(CowData<EditorProfiler::Metric> *this,long param_1)

{
  code *pcVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  char *pcVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
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
    lVar9 = 0;
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
    lVar9 = lVar5 * 0x88;
    if (lVar9 != 0) {
      uVar10 = lVar9 - 1U | lVar9 - 1U >> 1;
      uVar10 = uVar10 | uVar10 >> 2;
      uVar10 = uVar10 | uVar10 >> 4;
      uVar10 = uVar10 | uVar10 >> 8;
      uVar10 = uVar10 | uVar10 >> 0x10;
      lVar9 = (uVar10 | uVar10 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x88 != 0) {
    uVar10 = param_1 * 0x88 - 1;
    uVar10 = uVar10 | uVar10 >> 1;
    uVar10 = uVar10 | uVar10 >> 2;
    uVar10 = uVar10 | uVar10 >> 4;
    uVar10 = uVar10 | uVar10 >> 8;
    uVar10 = uVar10 | uVar10 >> 0x10;
    uVar10 = uVar10 | uVar10 >> 0x20;
    lVar12 = uVar10 + 1;
    if (lVar12 != 0) {
      uVar11 = param_1;
      if (param_1 <= lVar5) {
        while( true ) {
          lVar5 = *(long *)this;
          if (lVar5 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          if (*(ulong *)(lVar5 + -8) <= uVar11) break;
          EditorProfiler::Metric::~Metric((Metric *)(lVar5 + uVar11 * 0x88));
          uVar11 = uVar11 + 1;
        }
        if (lVar12 != lVar9) {
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
      if (lVar12 == lVar9) {
LAB_00105983:
        puVar6 = *(undefined8 **)this;
        if (puVar6 == (undefined8 *)0x0) {
          FUN_0010aea8();
          return;
        }
        lVar5 = puVar6[-1];
        if (param_1 <= lVar5) goto LAB_001058dc;
      }
      else {
        if (lVar5 != 0) {
          iVar2 = _realloc(this,lVar12);
          if (iVar2 != 0) {
            return;
          }
          goto LAB_00105983;
        }
        puVar3 = (undefined8 *)Memory::alloc_static(uVar10 + 0x11,false);
        if (puVar3 == (undefined8 *)0x0) {
          uVar8 = 0x171;
          pcVar7 = "Parameter \"mem_new\" is null.";
          goto LAB_00105a02;
        }
        puVar6 = puVar3 + 2;
        *puVar3 = 1;
        puVar3[1] = 0;
        *(undefined8 **)this = puVar6;
        lVar5 = 0;
      }
      uVar8 = _LC87;
      puVar3 = puVar6 + lVar5 * 0x11;
      do {
        *(undefined1 *)puVar3 = 0;
        puVar4 = puVar3 + 0x11;
        *(undefined4 *)((long)puVar3 + 4) = 0;
        *(undefined1 (*) [16])(puVar3 + 1) = (undefined1  [16])0x0;
        puVar3[4] = 0;
        *(undefined1 (*) [16])(puVar3 + 6) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(puVar3 + 8) = (undefined1  [16])0x0;
        puVar3[10] = uVar8;
        *(undefined1 (*) [16])(puVar3 + 0xc) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(puVar3 + 0xe) = (undefined1  [16])0x0;
        puVar3[0x10] = uVar8;
        puVar3 = puVar4;
      } while (puVar4 != puVar6 + param_1 * 0x11);
LAB_001058dc:
      puVar6[-1] = param_1;
      return;
    }
  }
  uVar8 = 0x16a;
  pcVar7 = 
  "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
  ;
LAB_00105a02:
  _err_print_error("resize","./core/templates/cowdata.h",uVar8,pcVar7,0,0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EditorProfiler::EditorProfiler() */

void __thiscall EditorProfiler::EditorProfiler(EditorProfiler *this)

{
  long *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  Vector2 *pVVar4;
  StringName *pSVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  BoxContainer *this_00;
  FlowContainer *this_01;
  Button *pBVar10;
  CheckBox *this_02;
  String *pSVar11;
  CallableCustom *pCVar12;
  BoxContainer *pBVar13;
  Label *pLVar14;
  OptionButton *pOVar15;
  CheckButton *this_03;
  SpinBox *this_04;
  SplitContainer *this_05;
  Tree *this_06;
  TextureRect *this_07;
  Timer *pTVar16;
  long in_FS_OFFSET;
  float fVar17;
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
  String local_98 [8];
  long local_90;
  long local_88 [2];
  int local_78 [8];
  ulong local_58 [3];
  long local_40;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined8 extraout_XMM0_Qb_03;
  undefined8 extraout_XMM0_Qb_04;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  BoxContainer::BoxContainer((BoxContainer *)this,true);
  uVar7 = _UNK_00115058;
  uVar6 = __LC12;
  this[0xa0c] = (EditorProfiler)0x1;
  *(undefined ***)this = &PTR__initialize_classv_00114680;
  uVar3 = _LC102;
  *(undefined8 *)(this + 0xa58) = 0;
  *(undefined8 *)(this + 0xad8) = uVar3;
  *(undefined8 *)(this + 0xa60) = 0;
  *(undefined4 *)(this + 0xa68) = 0xffffffff;
  *(undefined8 *)(this + 0xaa0) = 2;
  *(undefined8 *)(this + 0xad0) = 0;
  *(undefined4 *)(this + 0xae0) = 0;
  this[0xae4] = (EditorProfiler)0x0;
  *(undefined8 *)(this + 0xae8) = 0x3f800000ffffffff;
  this[0xaf0] = (EditorProfiler)0x0;
  *(undefined8 *)(this + 0xa10) = uVar6;
  *(undefined8 *)(this + 0xa18) = uVar7;
  *(undefined8 *)(this + 0xa20) = uVar6;
  *(undefined8 *)(this + 0xa28) = uVar7;
  *(undefined1 (*) [16])(this + 0xa30) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa40) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa70) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa80) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa90) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xaa8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xab8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xaf8) = (undefined1  [16])0x0;
  this_00 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(this_00,false);
  this_00[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)this_00 = &PTR__initialize_classv_00113f90;
  postinitialize_handler((Object *)this_00);
  auVar18._0_8_ = EditorScale::get_scale();
  auVar18._8_8_ = extraout_XMM0_Qb;
  auVar19._4_12_ = auVar18._4_12_;
  auVar19._0_4_ = (float)auVar18._0_8_ * __LC103;
  if (EditorProfiler()::{lambda()#1}::operator()()::sname == '\0') {
    iVar9 = __cxa_guard_acquire(auVar19._0_8_,&EditorProfiler()::{lambda()#1}::operator()()::sname);
    if (iVar9 != 0) {
      _scs_create((char *)&EditorProfiler()::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&EditorProfiler()::{lambda()#1}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&EditorProfiler()::{lambda()#1}::operator()()::sname);
    }
  }
  Control::add_theme_constant_override((StringName *)this_00,0x109200);
  Node::add_child(this,this_00,0,0);
  this_01 = (FlowContainer *)operator_new(0xa28,"");
  FlowContainer::FlowContainer(this_01,false);
  postinitialize_handler((Object *)this_01);
  Control::set_h_size_flags(this_01,3);
  auVar20._0_8_ = EditorScale::get_scale();
  auVar20._8_8_ = extraout_XMM0_Qb_00;
  auVar21._4_12_ = auVar20._4_12_;
  auVar21._0_4_ = (float)auVar20._0_8_ * __LC103;
  if (EditorProfiler()::{lambda()#2}::operator()()::sname == '\0') {
    iVar9 = __cxa_guard_acquire(auVar21._0_8_,&EditorProfiler()::{lambda()#2}::operator()()::sname);
    if (iVar9 != 0) {
      _scs_create((char *)&EditorProfiler()::{lambda()#2}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&EditorProfiler()::{lambda()#2}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&EditorProfiler()::{lambda()#2}::operator()()::sname);
    }
  }
  Control::add_theme_constant_override((StringName *)this_01,0x1091f0);
  auVar22._0_8_ = EditorScale::get_scale();
  auVar22._8_8_ = extraout_XMM0_Qb_01;
  auVar23._4_12_ = auVar22._4_12_;
  auVar23._0_4_ = (float)auVar22._0_8_ + (float)auVar22._0_8_;
  if (EditorProfiler()::{lambda()#3}::operator()()::sname == '\0') {
    iVar9 = __cxa_guard_acquire(auVar23._0_8_,&EditorProfiler()::{lambda()#3}::operator()()::sname);
    if (iVar9 != 0) {
      _scs_create((char *)&EditorProfiler()::{lambda()#3}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&EditorProfiler()::{lambda()#3}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&EditorProfiler()::{lambda()#3}::operator()()::sname);
    }
  }
  Control::add_theme_constant_override((StringName *)this_01,0x1091e0);
  Node::add_child(this_00,this_01,0,0);
  pBVar10 = (Button *)operator_new(0xc10,"");
  local_88[0] = 0;
  Button::Button(pBVar10,(String *)local_88);
  postinitialize_handler((Object *)pBVar10);
  *(Button **)(this + 0xa30) = pBVar10;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  BaseButton::set_toggle_mode(SUB81(*(undefined8 *)(this + 0xa30),0));
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xa30),0));
  pSVar11 = *(String **)(this + 0xa30);
  local_88[0] = 0;
  String::parse_latin1((String *)local_88,"");
  local_90 = 0;
  String::parse_latin1((String *)&local_90,"Start");
  TTR(local_98,(String *)&local_90);
  Button::set_text(pSVar11);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  plVar1 = *(long **)(this + 0xa30);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  create_custom_callable_function_pointer<EditorProfiler>
            ((EditorProfiler *)local_88,(char *)this,
             (_func_void *)"&EditorProfiler::_activate_pressed");
  (*pcVar2)(plVar1,SceneStringNames::singleton + 0x238,(CowData<char32_t> *)local_88,0);
  Callable::~Callable((Callable *)local_88);
  Node::add_child(this_01,*(undefined8 *)(this + 0xa30),0,0);
  pBVar10 = (Button *)operator_new(0xc10,"");
  local_88[0] = 0;
  Button::Button(pBVar10,(String *)local_88);
  postinitialize_handler((Object *)pBVar10);
  *(Button **)(this + 0xa38) = pBVar10;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  pSVar11 = *(String **)(this + 0xa38);
  local_88[0] = 0;
  String::parse_latin1((String *)local_88,"");
  local_90 = 0;
  String::parse_latin1((String *)&local_90,"Clear");
  TTR(local_98,(String *)&local_90);
  Button::set_text(pSVar11);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  plVar1 = *(long **)(this + 0xa38);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  create_custom_callable_function_pointer<EditorProfiler>
            ((EditorProfiler *)local_88,(char *)this,(_func_void *)"&EditorProfiler::_clear_pressed"
            );
  (*pcVar2)(plVar1,SceneStringNames::singleton + 0x238,(CowData<char32_t> *)local_88,0);
  Callable::~Callable((Callable *)local_88);
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xa38),0));
  Node::add_child(this_01,*(undefined8 *)(this + 0xa38),0,0);
  this_02 = (CheckBox *)operator_new(0xc60,"");
  local_88[0] = 0;
  CheckBox::CheckBox(this_02,(String *)local_88);
  postinitialize_handler((Object *)this_02);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  local_88[0] = 0;
  String::parse_latin1((String *)local_88,"");
  local_90 = 0;
  String::parse_latin1((String *)&local_90,"Autostart");
  TTR(local_98,(String *)&local_90);
  Button::set_text((String *)this_02);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  pSVar11 = (String *)EditorSettings::get_singleton();
  Variant::Variant((Variant *)local_58,false);
  local_88[0] = 0;
  String::parse_latin1((String *)local_88,"autostart_profiler");
  local_90 = 0;
  String::parse_latin1((String *)&local_90,"debug_options");
  EditorSettings::get_project_metadata((String *)local_78,pSVar11,(Variant *)&local_90);
  Variant::operator_cast_to_bool((Variant *)local_78);
  BaseButton::set_pressed(SUB81(this_02,0));
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  pcVar2 = *(code **)(*(long *)this_02 + 0x108);
  pCVar12 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar12);
  *(EditorProfiler **)(pCVar12 + 0x28) = this;
  *(undefined1 (*) [16])(pCVar12 + 0x30) = (undefined1  [16])0x0;
  *(undefined **)(pCVar12 + 0x20) = &_LC25;
  *(undefined ***)pCVar12 = &PTR_hash_00114a88;
  *(undefined8 *)(pCVar12 + 0x40) = 0;
  uVar3 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(pCVar12 + 0x10) = 0;
  *(undefined8 *)(pCVar12 + 0x30) = uVar3;
  *(code **)(pCVar12 + 0x38) = _autostart_toggled;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar12,(int)pCVar12 + 0x28);
  *(char **)(pCVar12 + 0x20) = "EditorProfiler::_autostart_toggled";
  Callable::Callable((Callable *)local_88,pCVar12);
  (*pcVar2)(this_02,SceneStringNames::singleton + 0x248,(CowData<char32_t> *)local_88,0);
  Callable::~Callable((Callable *)local_88);
  Node::add_child(this_01,this_02,0,0);
  pBVar13 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar13,false);
  pBVar13[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar13 = &PTR__initialize_classv_00113f90;
  postinitialize_handler((Object *)pBVar13);
  auVar24._0_8_ = EditorScale::get_scale();
  auVar24._8_8_ = extraout_XMM0_Qb_02;
  auVar25._4_12_ = auVar24._4_12_;
  auVar25._0_4_ = (float)auVar24._0_8_ + (float)auVar24._0_8_;
  if (EditorProfiler()::{lambda()#4}::operator()()::sname == '\0') {
    iVar9 = __cxa_guard_acquire(auVar25._0_8_,&EditorProfiler()::{lambda()#4}::operator()()::sname);
    if (iVar9 != 0) {
      _scs_create((char *)&EditorProfiler()::{lambda()#4}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&EditorProfiler()::{lambda()#4}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&EditorProfiler()::{lambda()#4}::operator()()::sname);
    }
  }
  Control::add_theme_constant_override((StringName *)pBVar13,0x1091d0);
  Node::add_child(this_01,pBVar13,0,0);
  pLVar14 = (Label *)operator_new(0xad8,"");
  local_88[0] = 0;
  String::parse_latin1((String *)local_88,"");
  local_90 = 0;
  String::parse_latin1((String *)&local_90,"Measure:");
  TTR(local_98,(String *)&local_90);
  Label::Label(pLVar14,local_98);
  postinitialize_handler((Object *)pLVar14);
  Node::add_child(pBVar13,pLVar14,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  pOVar15 = (OptionButton *)operator_new(0xd00,"");
  local_88[0] = 0;
  OptionButton::OptionButton(pOVar15,(String *)local_88);
  postinitialize_handler((Object *)pOVar15);
  *(OptionButton **)(this + 0xaa8) = pOVar15;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  pSVar11 = *(String **)(this + 0xaa8);
  local_88[0] = 0;
  String::parse_latin1((String *)local_88,"");
  local_90 = 0;
  String::parse_latin1((String *)&local_90,"Frame Time (ms)");
  TTR(local_98,(String *)&local_90);
  iVar9 = (int)local_98;
  OptionButton::add_item(pSVar11,iVar9);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  pSVar11 = *(String **)(this + 0xaa8);
  local_88[0] = 0;
  String::parse_latin1((String *)local_88,"");
  local_90 = 0;
  String::parse_latin1((String *)&local_90,"Average Time (ms)");
  TTR(local_98,(String *)&local_90);
  OptionButton::add_item(pSVar11,iVar9);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  pSVar11 = *(String **)(this + 0xaa8);
  local_88[0] = 0;
  String::parse_latin1((String *)local_88,"");
  local_90 = 0;
  String::parse_latin1((String *)&local_90,"Frame %");
  TTR(local_98,(String *)&local_90);
  OptionButton::add_item(pSVar11,iVar9);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  pSVar11 = *(String **)(this + 0xaa8);
  local_88[0] = 0;
  String::parse_latin1((String *)local_88,"");
  local_90 = 0;
  String::parse_latin1((String *)&local_90,"Physics Frame %");
  TTR(local_98,(String *)&local_90);
  OptionButton::add_item(pSVar11,iVar9);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  plVar1 = *(long **)(this + 0xaa8);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  create_custom_callable_function_pointer<EditorProfiler,int>
            ((EditorProfiler *)local_88,(char *)this,
             (_func_void_int *)"&EditorProfiler::_combo_changed");
  (*pcVar2)(plVar1,SceneStringNames::singleton + 0x260,(CowData<char32_t> *)local_88,0);
  Callable::~Callable((Callable *)local_88);
  Node::add_child(pBVar13,*(undefined8 *)(this + 0xaa8),0,0);
  pBVar13 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar13,false);
  pBVar13[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar13 = &PTR__initialize_classv_00113f90;
  postinitialize_handler((Object *)pBVar13);
  auVar26._0_8_ = EditorScale::get_scale();
  auVar26._8_8_ = extraout_XMM0_Qb_03;
  auVar27._4_12_ = auVar26._4_12_;
  auVar27._0_4_ = (float)auVar26._0_8_ + (float)auVar26._0_8_;
  if (EditorProfiler()::{lambda()#5}::operator()()::sname == '\0') {
    iVar8 = __cxa_guard_acquire(auVar27._0_8_,&EditorProfiler()::{lambda()#5}::operator()()::sname);
    if (iVar8 != 0) {
      _scs_create((char *)&EditorProfiler()::{lambda()#5}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&EditorProfiler()::{lambda()#5}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&EditorProfiler()::{lambda()#5}::operator()()::sname);
    }
  }
  Control::add_theme_constant_override((StringName *)pBVar13,0x1091c0);
  Node::add_child(this_01,pBVar13,0,0);
  pLVar14 = (Label *)operator_new(0xad8,"");
  local_88[0] = 0;
  String::parse_latin1((String *)local_88,"");
  local_90 = 0;
  String::parse_latin1((String *)&local_90,"Time:");
  TTR(local_98,(String *)&local_90);
  Label::Label(pLVar14,local_98);
  postinitialize_handler((Object *)pLVar14);
  Node::add_child(pBVar13,pLVar14,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  pOVar15 = (OptionButton *)operator_new(0xd00,"");
  local_88[0] = 0;
  OptionButton::OptionButton(pOVar15,(String *)local_88);
  postinitialize_handler((Object *)pOVar15);
  *(OptionButton **)(this + 0xab0) = pOVar15;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  pSVar11 = *(String **)(this + 0xab0);
  local_88[0] = 0;
  String::parse_latin1((String *)local_88,"");
  local_90 = 0;
  String::parse_latin1((String *)&local_90,"Inclusive");
  TTR(local_98,(String *)&local_90);
  OptionButton::add_item(pSVar11,iVar9);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  pSVar11 = *(String **)(this + 0xab0);
  local_88[0] = 0;
  String::parse_latin1((String *)local_88,"");
  local_90 = 0;
  String::parse_latin1((String *)&local_90,"Self");
  TTR(local_98,(String *)&local_90);
  OptionButton::add_item(pSVar11,iVar9);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  pSVar11 = *(String **)(this + 0xab0);
  local_88[0] = 0;
  String::parse_latin1((String *)local_88,"");
  local_90 = 0;
  String::parse_latin1
            ((String *)&local_90,
             "Inclusive: Includes time from other functions called by this function.\nUse this to spot bottlenecks.\n\nSelf: Only count the time spent in the function itself, not in other functions called by that function.\nUse this to find individual functions to optimize."
            );
  TTR(local_98,(String *)&local_90);
  Control::set_tooltip_text(pSVar11);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  plVar1 = *(long **)(this + 0xab0);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  create_custom_callable_function_pointer<EditorProfiler,int>
            ((EditorProfiler *)local_88,(char *)this,
             (_func_void_int *)"&EditorProfiler::_combo_changed");
  (*pcVar2)(plVar1,SceneStringNames::singleton + 0x260,(CowData<char32_t> *)local_88,0);
  Callable::~Callable((Callable *)local_88);
  Node::add_child(pBVar13,*(undefined8 *)(this + 0xab0),0,0);
  this_03 = (CheckButton *)operator_new(0xc60,"");
  local_88[0] = 0;
  String::parse_latin1((String *)local_88,"");
  local_90 = 0;
  String::parse_latin1((String *)&local_90,"Display internal functions");
  TTR(local_98,(String *)&local_90);
  CheckButton::CheckButton(this_03,local_98);
  postinitialize_handler((Object *)this_03);
  *(CheckButton **)(this + 0xab8) = this_03;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  uVar3 = *(undefined8 *)(this + 0xab8);
  local_88[0] = 0;
  String::parse_latin1((String *)local_88,"debugger/profile_native_calls");
  _EDITOR_GET((String *)local_58);
  Variant::operator_cast_to_bool((Variant *)local_58);
  CanvasItem::set_visible(SUB81(uVar3,0));
  if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xab8),0));
  plVar1 = *(long **)(this + 0xab8);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  create_custom_callable_function_pointer<EditorProfiler>
            ((EditorProfiler *)local_88,(char *)this,
             (_func_void *)"&EditorProfiler::_internal_profiles_pressed");
  (*pcVar2)(plVar1,SceneStringNames::singleton + 0x238,(CowData<char32_t> *)local_88,0);
  Callable::~Callable((Callable *)local_88);
  Node::add_child(this_01,*(undefined8 *)(this + 0xab8),0,0);
  pBVar13 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar13,false);
  pBVar13[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar13 = &PTR__initialize_classv_00113f90;
  postinitialize_handler((Object *)pBVar13);
  auVar28._0_8_ = EditorScale::get_scale();
  auVar28._8_8_ = extraout_XMM0_Qb_04;
  auVar29._4_12_ = auVar28._4_12_;
  auVar29._0_4_ = (float)auVar28._0_8_ + (float)auVar28._0_8_;
  if (EditorProfiler()::{lambda()#6}::operator()()::sname == '\0') {
    iVar9 = __cxa_guard_acquire(auVar29._0_8_,&EditorProfiler()::{lambda()#6}::operator()()::sname);
    if (iVar9 != 0) {
      _scs_create((char *)&EditorProfiler()::{lambda()#6}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&EditorProfiler()::{lambda()#6}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&EditorProfiler()::{lambda()#6}::operator()()::sname);
    }
  }
  Control::add_theme_constant_override((StringName *)pBVar13,0x1091b0);
  Control::set_v_size_flags(pBVar13,0);
  Node::add_child(this_00,pBVar13,0,0);
  pLVar14 = (Label *)operator_new(0xad8,"");
  local_88[0] = 0;
  String::parse_latin1((String *)local_88,"");
  local_90 = 0;
  String::parse_latin1((String *)&local_90,"Frame #:");
  TTR(local_98,(String *)&local_90);
  Label::Label(pLVar14,local_98);
  postinitialize_handler((Object *)pLVar14);
  Node::add_child(pBVar13,pLVar14,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  this_04 = (SpinBox *)operator_new(0xba8,"");
  SpinBox::SpinBox(this_04);
  postinitialize_handler((Object *)this_04);
  *(SpinBox **)(this + 0xac0) = this_04;
  Control::set_h_size_flags(this_04,1);
  Range::set_value(0.0);
  SpinBox::set_editable(SUB81(*(undefined8 *)(this + 0xac0),0));
  Node::add_child(pBVar13,*(undefined8 *)(this + 0xac0),0,0);
  plVar1 = *(long **)(this + 0xac0);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  pCVar12 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar12);
  *(EditorProfiler **)(pCVar12 + 0x28) = this;
  *(undefined1 (*) [16])(pCVar12 + 0x30) = (undefined1  [16])0x0;
  *(undefined **)(pCVar12 + 0x20) = &_LC25;
  *(undefined ***)pCVar12 = &PTR_hash_00114ba8;
  *(undefined8 *)(pCVar12 + 0x40) = 0;
  uVar3 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(pCVar12 + 0x10) = 0;
  *(undefined8 *)(pCVar12 + 0x30) = uVar3;
  *(code **)(pCVar12 + 0x38) = _cursor_metric_changed;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar12,(int)pCVar12 + 0x28);
  *(char **)(pCVar12 + 0x20) = "EditorProfiler::_cursor_metric_changed";
  Callable::Callable((Callable *)local_88,pCVar12);
  (*pcVar2)(plVar1,SceneStringNames::singleton + 0x280,(CowData<char32_t> *)local_88,0);
  Callable::~Callable((Callable *)local_88);
  this_05 = (SplitContainer *)operator_new(0xa70,"");
  SplitContainer::SplitContainer(this_05,false);
  this_05[0xa68] = (SplitContainer)0x1;
  *(undefined ***)this_05 = &PTR__initialize_classv_00114308;
  postinitialize_handler((Object *)this_05);
  *(SplitContainer **)(this + 0xa78) = this_05;
  Node::add_child(this,this_05,0,0);
  Control::set_v_size_flags(*(undefined8 *)(this + 0xa78),3);
  this_06 = (Tree *)operator_new(0xdc8,"");
  Tree::Tree(this_06);
  postinitialize_handler((Object *)this_06);
  *(Tree **)(this + 0xa70) = this_06;
  Node::set_auto_translate_mode(this_06,2);
  pVVar4 = *(Vector2 **)(this + 0xa70);
  fVar17 = (float)EditorScale::get_scale();
  local_58[0] = CONCAT44(fVar17 * _LC126._4_4_,fVar17 * (float)_LC126);
  Control::set_custom_minimum_size(pVVar4);
  Tree::set_hide_folding(SUB81(*(undefined8 *)(this + 0xa70),0));
  Node::add_child(*(undefined8 *)(this + 0xa78),*(undefined8 *)(this + 0xa70),0,0);
  Tree::set_hide_root(SUB81(*(undefined8 *)(this + 0xa70),0));
  Tree::set_columns((int)*(undefined8 *)(this + 0xa70));
  Tree::set_column_titles_visible(SUB81(*(undefined8 *)(this + 0xa70),0));
  uVar3 = *(undefined8 *)(this + 0xa70);
  local_88[0] = 0;
  String::parse_latin1((String *)local_88,"");
  local_90 = 0;
  String::parse_latin1((String *)&local_90,"Name");
  TTR(local_98,(String *)&local_90);
  Tree::set_column_title((int)uVar3,(String *)0x0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  Tree::set_column_expand((int)*(undefined8 *)(this + 0xa70),false);
  Tree::set_column_clip_content((int)*(undefined8 *)(this + 0xa70),false);
  Tree::set_column_custom_minimum_width((int)*(undefined8 *)(this + 0xa70),0);
  uVar3 = *(undefined8 *)(this + 0xa70);
  local_88[0] = 0;
  String::parse_latin1((String *)local_88,"");
  local_90 = 0;
  String::parse_latin1((String *)&local_90,"Time");
  TTR(local_98,(String *)&local_90);
  Tree::set_column_title((int)uVar3,(String *)0x1);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  Tree::set_column_expand((int)*(undefined8 *)(this + 0xa70),true);
  Tree::set_column_clip_content((int)*(undefined8 *)(this + 0xa70),true);
  uVar3 = *(undefined8 *)(this + 0xa70);
  EditorScale::get_scale();
  Tree::set_column_custom_minimum_width((int)uVar3,1);
  uVar3 = *(undefined8 *)(this + 0xa70);
  local_88[0] = 0;
  String::parse_latin1((String *)local_88,"");
  local_90 = 0;
  String::parse_latin1((String *)&local_90,"Calls");
  TTR(local_98,(String *)&local_90);
  Tree::set_column_title((int)uVar3,(String *)0x2);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  Tree::set_column_expand((int)*(undefined8 *)(this + 0xa70),true);
  Tree::set_column_clip_content((int)*(undefined8 *)(this + 0xa70),true);
  uVar3 = *(undefined8 *)(this + 0xa70);
  EditorScale::get_scale();
  Tree::set_column_custom_minimum_width((int)uVar3,2);
  pSVar5 = *(StringName **)(this + 0xa70);
  StringName::StringName((StringName *)local_88,"TreeSecondary",false);
  Control::set_theme_type_variation(pSVar5);
  if ((StringName::configured != '\0') && (local_88[0] != 0)) {
    StringName::unref();
  }
  plVar1 = *(long **)(this + 0xa70);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  create_custom_callable_function_pointer<EditorProfiler>
            ((EditorProfiler *)local_88,(char *)this,(_func_void *)"&EditorProfiler::_item_edited");
  StringName::StringName((StringName *)&local_90,"item_edited",false);
  (*pcVar2)(plVar1,(String *)&local_90,(CowData<char32_t> *)local_88,0);
  if ((StringName::configured != '\0') && (local_90 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_88);
  this_07 = (TextureRect *)operator_new(0x9e0,"");
  TextureRect::TextureRect(this_07);
  postinitialize_handler((Object *)this_07);
  *(TextureRect **)(this + 0xa40) = this_07;
  fVar17 = (float)EditorScale::get_scale();
  local_58[0] = (ulong)(uint)(fVar17 * __LC135);
  Control::set_custom_minimum_size((Vector2 *)this_07);
  TextureRect::set_expand_mode(*(undefined8 *)(this + 0xa40),1);
  Control::set_mouse_filter(*(undefined8 *)(this + 0xa40),0);
  plVar1 = *(long **)(this + 0xa40);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  create_custom_callable_function_pointer<EditorProfiler>
            ((EditorProfiler *)local_88,(char *)this,
             (_func_void *)"&EditorProfiler::_graph_tex_draw");
  (*pcVar2)(plVar1,SceneStringNames::singleton + 8,(CowData<char32_t> *)local_88,0);
  Callable::~Callable((Callable *)local_88);
  plVar1 = *(long **)(this + 0xa40);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  pCVar12 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar12);
  *(EditorProfiler **)(pCVar12 + 0x28) = this;
  *(undefined1 (*) [16])(pCVar12 + 0x30) = (undefined1  [16])0x0;
  *(undefined **)(pCVar12 + 0x20) = &_LC25;
  *(undefined ***)pCVar12 = &PTR_hash_00114c38;
  *(undefined8 *)(pCVar12 + 0x40) = 0;
  uVar3 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(pCVar12 + 0x10) = 0;
  *(undefined8 *)(pCVar12 + 0x30) = uVar3;
  *(code **)(pCVar12 + 0x38) = _graph_tex_input;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar12,(int)pCVar12 + 0x28);
  *(char **)(pCVar12 + 0x20) = "EditorProfiler::_graph_tex_input";
  Callable::Callable((Callable *)local_88,pCVar12);
  (*pcVar2)(plVar1,SceneStringNames::singleton + 0x28,(CowData<char32_t> *)local_88,0);
  Callable::~Callable((Callable *)local_88);
  plVar1 = *(long **)(this + 0xa40);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  create_custom_callable_function_pointer<EditorProfiler>
            ((EditorProfiler *)local_88,(char *)this,
             (_func_void *)"&EditorProfiler::_graph_tex_mouse_exit");
  (*pcVar2)(plVar1,SceneStringNames::singleton + 0xc0,(CowData<char32_t> *)local_88,0);
  Callable::~Callable((Callable *)local_88);
  Node::add_child(*(undefined8 *)(this + 0xa78),*(undefined8 *)(this + 0xa40),0,0);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xa40),3);
  local_88[0] = 0;
  String::parse_latin1((String *)local_88,"debugger/profiler_frame_history_size");
  _EDITOR_GET((String *)local_58);
  iVar8 = Variant::operator_cast_to_int((Variant *)local_58);
  iVar9 = 10000;
  if (iVar8 < 0x2711) {
    iVar9 = iVar8;
  }
  if (iVar9 < 0x3c) {
    iVar9 = 0x3c;
  }
  if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  CowData<EditorProfiler::Metric>::resize<false>
            ((CowData<EditorProfiler::Metric> *)(this + 0xad0),(long)iVar9);
  pTVar16 = (Timer *)operator_new(0x428,"");
  Timer::Timer(pTVar16);
  postinitialize_handler((Object *)pTVar16);
  *(Timer **)(this + 0xaf8) = pTVar16;
  Timer::set_wait_time(_LC89);
  Timer::set_one_shot(SUB81(*(undefined8 *)(this + 0xaf8),0));
  Node::add_child(this,*(undefined8 *)(this + 0xaf8),0,0);
  plVar1 = *(long **)(this + 0xaf8);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  create_custom_callable_function_pointer<EditorProfiler>
            ((EditorProfiler *)local_88,(char *)this,(_func_void *)"&EditorProfiler::_update_frame")
  ;
  StringName::StringName((StringName *)&local_90,"timeout",false);
  (*pcVar2)(plVar1,(String *)&local_90,(CowData<char32_t> *)local_88,0);
  if ((StringName::configured != '\0') && (local_90 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_88);
  pTVar16 = (Timer *)operator_new(0x428,"");
  Timer::Timer(pTVar16);
  postinitialize_handler((Object *)pTVar16);
  *(Timer **)(this + 0xb00) = pTVar16;
  Timer::set_wait_time(_LC89);
  Timer::set_one_shot(SUB81(*(undefined8 *)(this + 0xb00),0));
  Node::add_child(this,*(undefined8 *)(this + 0xb00),0,0);
  plVar1 = *(long **)(this + 0xb00);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  create_custom_callable_function_pointer<EditorProfiler>
            ((EditorProfiler *)local_88,(char *)this,(_func_void *)"&EditorProfiler::_update_plot");
  StringName::StringName((StringName *)&local_90,"timeout",false);
  (*pcVar2)(plVar1,(String *)&local_90,(CowData<char32_t> *)local_88,0);
  if ((StringName::configured != '\0') && (local_90 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_88);
  StringName::StringName((StringName *)&local_90,"physics_frame_time",false);
  HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert
            ((StringName *)local_88);
  if ((StringName::configured != '\0') && (local_90 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_90,"category_frame_time",false);
  HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert
            ((StringName *)local_88);
  if ((StringName::configured != '\0') && (local_90 != 0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorProfiler::clear() */

void __thiscall EditorProfiler::clear(EditorProfiler *this)

{
  char cVar1;
  undefined8 uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long in_FS_OFFSET;
  long local_a0;
  char *local_98;
  undefined8 local_90;
  String *local_88 [2];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_a0 = 0;
  local_98 = "debugger/profiler_frame_history_size";
  local_90 = 0x24;
  String::parse_latin1((StrRange *)&local_a0);
  _EDITOR_GET((String *)local_78);
  iVar4 = Variant::operator_cast_to_int((Variant *)local_78);
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  CowData<EditorProfiler::Metric>::resize<false>
            ((CowData<EditorProfiler::Metric> *)(this + 0xad0),0);
  iVar5 = 10000;
  if (iVar4 < 0x2711) {
    iVar5 = iVar4;
  }
  lVar6 = (long)iVar5;
  if (iVar5 < 0x3c) {
    lVar6 = 0x3c;
  }
  CowData<EditorProfiler::Metric>::resize<false>
            ((CowData<EditorProfiler::Metric> *)(this + 0xad0),lVar6);
  *(undefined8 *)(this + 0xad8) = _LC102;
  Tree::clear();
  lVar6 = *(long *)(this + 0xa80);
  if ((lVar6 != 0) && (*(int *)(this + 0xaa4) != 0)) {
    if ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xaa0) * 4) == 0) ||
       (memset(*(void **)(this + 0xa98),0,
               (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xaa0) * 4) << 2),
       *(int *)(this + 0xaa4) != 0)) {
      lVar7 = 0;
      while( true ) {
        if ((StringName::configured != '\0') && (*(long *)(lVar6 + lVar7 * 8) != 0)) {
          StringName::unref();
        }
        lVar7 = lVar7 + 1;
        if (*(uint *)(this + 0xaa4) <= (uint)lVar7) break;
        lVar6 = *(long *)(this + 0xa80);
      }
    }
    *(undefined4 *)(this + 0xaa4) = 0;
  }
  StringName::StringName((StringName *)&local_a0,"physics_frame_time",false);
  HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert
            ((StringName *)&local_98);
  if ((StringName::configured != '\0') && (local_a0 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_a0,"category_frame_time",false);
  HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert
            ((StringName *)&local_98);
  if ((StringName::configured != '\0') && (local_a0 != 0)) {
    StringName::unref();
  }
  uVar2 = *(undefined8 *)(this + 0xab8);
  local_98 = "debugger/profile_native_calls";
  local_a0 = 0;
  local_90 = 0x1d;
  String::parse_latin1((StrRange *)&local_a0);
  _EDITOR_GET((String *)local_78);
  Variant::operator_cast_to_bool((Variant *)local_78);
  CanvasItem::set_visible(SUB81(uVar2,0));
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  this[0xae4] = (EditorProfiler)0x1;
  Range::set_min(0.0);
  Range::set_max(_LC146);
  Range::set_value(0.0);
  SpinBox::set_editable(SUB81(*(undefined8 *)(this + 0xac0),0));
  this[0xae4] = (EditorProfiler)0x0;
  *(undefined4 *)(this + 0xae8) = 0xffffffff;
  this[0xaf0] = (EditorProfiler)0x0;
  _update_button_text(this);
  bVar3 = (bool)BaseButton::is_pressed();
  if ((clear()::{lambda()#1}::operator()()::sname == '\0') &&
     (iVar4 = __cxa_guard_acquire(&clear()::{lambda()#1}::operator()()::sname), iVar4 != 0)) {
    _scs_create((char *)&clear()::{lambda()#1}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&clear()::{lambda()#1}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&clear()::{lambda()#1}::operator()()::sname);
  }
  Variant::Variant((Variant *)local_78,bVar3);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  local_88[0] = (String *)local_78;
  (**(code **)(*(long *)this + 0xd0))(this,&clear()::{lambda()#1}::operator()()::sname,local_88,1);
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
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorProfiler::set_enabled(bool, bool) */

void __thiscall EditorProfiler::set_enabled(EditorProfiler *this,bool param_1,bool param_2)

{
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xa30),0));
  if (!param_2) {
    return;
  }
  clear(this);
  return;
}



/* EditorProfiler::_clear_pressed() */

void __thiscall EditorProfiler::_clear_pressed(EditorProfiler *this)

{
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xa38),0));
  clear(this);
  _update_plot(this);
  return;
}



/* EditorProfiler::_activate_pressed() */

void __thiscall EditorProfiler::_activate_pressed(EditorProfiler *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long in_FS_OFFSET;
  Variant *local_78 [2];
  int local_68 [6];
  undefined8 local_50;
  undefined1 local_48 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  _update_button_text(this);
  cVar1 = BaseButton::is_pressed();
  if (cVar1 != '\0') {
    BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xa38),0));
    clear(this);
    _update_plot(this);
  }
  bVar2 = (bool)BaseButton::is_pressed();
  if (_activate_pressed()::{lambda()#1}::operator()()::sname == '\0') {
    iVar3 = __cxa_guard_acquire(&_activate_pressed()::{lambda()#1}::operator()()::sname);
    if (iVar3 != 0) {
      _scs_create((char *)&_activate_pressed()::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_activate_pressed()::{lambda()#1}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_activate_pressed()::{lambda()#1}::operator()()::sname);
    }
  }
  Variant::Variant((Variant *)local_68,bVar2);
  local_50 = 0;
  local_48 = (undefined1  [16])0x0;
  local_78[0] = (Variant *)local_68;
  (**(code **)(*(long *)this + 0xd0))
            (this,&_activate_pressed()::{lambda()#1}::operator()()::sname,local_78,1);
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



/* CowData<EditorProfiler::Metric::Category>::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<EditorProfiler::Metric::Category>::_copy_on_write
          (CowData<EditorProfiler::Metric::Category> *this)

{
  long *plVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  undefined8 *puVar6;
  long lVar7;
  StringName *pSVar8;
  StringName *this_00;
  ulong uVar9;
  long lVar10;
  bool bVar11;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  lVar3 = *(long *)(*(long *)this + -8);
  uVar9 = 0x10;
  if (lVar3 * 0x28 != 0) {
    uVar9 = lVar3 * 0x28 - 1;
    uVar9 = uVar9 | uVar9 >> 1;
    uVar9 = uVar9 | uVar9 >> 2;
    uVar9 = uVar9 | uVar9 >> 4;
    uVar9 = uVar9 | uVar9 >> 8;
    uVar9 = uVar9 | uVar9 >> 0x10;
    uVar9 = (uVar9 | uVar9 >> 0x20) + 0x11;
  }
  puVar6 = (undefined8 *)Memory::alloc_static(uVar9,false);
  if (puVar6 == (undefined8 *)0x0) {
    _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                     "Parameter \"mem_new\" is null.",0,0);
    return;
  }
  lVar10 = 0;
  *puVar6 = 1;
  puVar6[1] = lVar3;
  this_00 = (StringName *)(puVar6 + 2);
  if (lVar3 != 0) {
    do {
      pSVar8 = this_00 + *(long *)this + (-0x10 - (long)puVar6);
      StringName::StringName(this_00,pSVar8);
      *(undefined8 *)(this_00 + 8) = 0;
      if (*(long *)(pSVar8 + 8) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)(this_00 + 8),(CowData *)(pSVar8 + 8));
      }
      uVar2 = *(undefined4 *)(pSVar8 + 0x10);
      *(undefined8 *)(this_00 + 0x20) = 0;
      lVar4 = *(long *)(pSVar8 + 0x20);
      *(undefined4 *)(this_00 + 0x10) = uVar2;
      if (lVar4 != 0) {
        CowData<EditorProfiler::Metric::Category::Item>::_unref
                  ((CowData<EditorProfiler::Metric::Category::Item> *)(this_00 + 0x20));
        if (*(long *)(pSVar8 + 0x20) != 0) {
          plVar1 = (long *)(*(long *)(pSVar8 + 0x20) + -0x10);
          do {
            lVar4 = *plVar1;
            if (lVar4 == 0) goto LAB_00107d62;
            LOCK();
            lVar7 = *plVar1;
            bVar11 = lVar4 == lVar7;
            if (bVar11) {
              *plVar1 = lVar4 + 1;
              lVar7 = lVar4;
            }
            UNLOCK();
          } while (!bVar11);
          if (lVar7 != -1) {
            *(undefined8 *)(this_00 + 0x20) = *(undefined8 *)(pSVar8 + 0x20);
          }
        }
      }
LAB_00107d62:
      lVar10 = lVar10 + 1;
      this_00 = this_00 + 0x28;
    } while (lVar3 != lVar10);
  }
  _unref(this);
  *(StringName **)this = (StringName *)(puVar6 + 2);
  return;
}



/* EditorProfiler::_make_metric_ptrs(EditorProfiler::Metric&) */

void __thiscall EditorProfiler::_make_metric_ptrs(EditorProfiler *this,Metric *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  StringName *pSVar9;
  StringName *pSVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  StringName *this_00;
  long lVar16;
  
  lVar15 = 0;
  lVar6 = *(long *)(param_1 + 0x20);
  while( true ) {
    if ((lVar6 == 0) || (*(long *)(lVar6 + -8) <= lVar15)) {
      return;
    }
    lVar11 = lVar15 * 0x28;
    CowData<EditorProfiler::Metric::Category>::_copy_on_write
              ((CowData<EditorProfiler::Metric::Category> *)(param_1 + 0x20));
    lVar6 = *(long *)(param_1 + 0x20);
    if (lVar6 == 0) break;
    lVar14 = *(long *)(lVar6 + -8);
    lVar13 = lVar15;
    if (lVar14 <= lVar15) goto LAB_00107f3d;
    puVar5 = (undefined8 *)
             HashMap<StringName,EditorProfiler::Metric::Category*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorProfiler::Metric::Category*>>>
             ::operator[]((HashMap<StringName,EditorProfiler::Metric::Category*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorProfiler::Metric::Category*>>>
                           *)(param_1 + 0x28),(StringName *)(lVar6 + lVar11));
    *puVar5 = (StringName *)(lVar6 + lVar11);
    lVar6 = *(long *)(param_1 + 0x20);
    if (lVar6 == 0) break;
    lVar16 = 0;
    while( true ) {
      lVar14 = *(long *)(lVar6 + -8);
      lVar13 = lVar15;
      if (lVar14 <= lVar15) goto LAB_00107f3d;
      lVar14 = *(long *)(lVar6 + 0x20 + lVar11);
      if ((lVar14 == 0) || (*(long *)(lVar14 + -8) <= lVar16)) break;
      CowData<EditorProfiler::Metric::Category>::_copy_on_write
                ((CowData<EditorProfiler::Metric::Category> *)(param_1 + 0x20));
      lVar14 = *(long *)(param_1 + 0x20) + lVar11;
      lVar6 = *(long *)(lVar14 + 0x20);
      if (lVar6 == 0) {
        lVar13 = 0;
LAB_00107f63:
        _err_print_index_error
                  ("operator[]","./core/templates/vector.h",0x38,lVar16,lVar13,"p_index",
                   "((Vector<T> *)(this))->_cowdata.size()","",false,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar13 = *(long *)(lVar6 + -8);
      if (lVar13 <= lVar16) goto LAB_00107f63;
      if (*(ulong *)(lVar6 + -0x10) < 2) {
LAB_00107ebe:
        pSVar10 = *(StringName **)(lVar14 + 0x20);
      }
      else {
        if (*(long *)(lVar14 + 0x20) == 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        lVar6 = *(long *)(*(long *)(lVar14 + 0x20) + -8);
        uVar12 = 0x10;
        if (lVar6 * 0x30 != 0) {
          uVar12 = lVar6 * 0x30 - 1;
          uVar12 = uVar12 | uVar12 >> 1;
          uVar12 = uVar12 | uVar12 >> 2;
          uVar12 = uVar12 | uVar12 >> 4;
          uVar12 = uVar12 | uVar12 >> 8;
          uVar12 = uVar12 | uVar12 >> 0x10;
          uVar12 = (uVar12 | uVar12 >> 0x20) + 0x11;
        }
        puVar5 = (undefined8 *)Memory::alloc_static(uVar12,false);
        if (puVar5 == (undefined8 *)0x0) {
          _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                           "Parameter \"mem_new\" is null.",0,0);
          goto LAB_00107ebe;
        }
        pSVar10 = (StringName *)(puVar5 + 2);
        lVar13 = 0;
        *puVar5 = 1;
        puVar5[1] = lVar6;
        this_00 = pSVar10;
        if (lVar6 != 0) {
          do {
            pSVar9 = this_00 + *(long *)(lVar14 + 0x20) + (-0x10 - (long)puVar5);
            StringName::StringName(this_00,pSVar9);
            *(undefined8 *)(this_00 + 8) = 0;
            CowData<char32_t>::_ref((CowData<char32_t> *)(this_00 + 8),(CowData *)(pSVar9 + 8));
            *(undefined8 *)(this_00 + 0x10) = 0;
            CowData<char32_t>::_ref
                      ((CowData<char32_t> *)(this_00 + 0x10),(CowData *)(pSVar9 + 0x10));
            uVar1 = *(undefined4 *)(pSVar9 + 0x18);
            uVar2 = *(undefined4 *)(pSVar9 + 0x28);
            *(undefined4 *)(this_00 + 0x24) = *(undefined4 *)(pSVar9 + 0x24);
            *(undefined4 *)(this_00 + 0x18) = uVar1;
            uVar3 = *(undefined8 *)(pSVar9 + 0x1c);
            lVar13 = lVar13 + 1;
            *(undefined4 *)(this_00 + 0x28) = uVar2;
            *(undefined8 *)(this_00 + 0x1c) = uVar3;
            this_00 = this_00 + 0x30;
          } while (lVar6 != lVar13);
        }
        CowData<EditorProfiler::Metric::Category::Item>::_unref
                  ((CowData<EditorProfiler::Metric::Category::Item> *)(lVar14 + 0x20));
        *(StringName **)(lVar14 + 0x20) = pSVar10;
      }
      lVar7 = lVar16 * 0x30;
      lVar6 = *(long *)(param_1 + 0x20);
      if (lVar6 == 0) goto LAB_00107f1c;
      lVar14 = *(long *)(lVar6 + -8);
      lVar13 = lVar15;
      if (lVar14 <= lVar15) goto LAB_00107f3d;
      lVar6 = *(long *)(lVar6 + 0x20 + lVar11);
      lVar13 = lVar16;
      if (lVar6 == 0) {
        lVar14 = 0;
        goto LAB_00107f3d;
      }
      lVar14 = *(long *)(lVar6 + -8);
      if (lVar14 <= lVar16) goto LAB_00107f3d;
      lVar16 = lVar16 + 1;
      plVar8 = (long *)HashMap<StringName,EditorProfiler::Metric::Category::Item*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorProfiler::Metric::Category::Item*>>>
                       ::operator[]((HashMap<StringName,EditorProfiler::Metric::Category::Item*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorProfiler::Metric::Category::Item*>>>
                                     *)(param_1 + 0x58),(StringName *)(lVar6 + lVar7));
      *plVar8 = (long)(pSVar10 + lVar7);
      lVar6 = *(long *)(param_1 + 0x20);
      if (lVar6 == 0) goto LAB_00107f1c;
    }
    lVar15 = lVar15 + 1;
  }
LAB_00107f1c:
  lVar14 = 0;
  lVar13 = lVar15;
LAB_00107f3d:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,lVar13,lVar14,"p_index","size()","",false,true)
  ;
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}



/* EditorProfiler::add_frame_metric(EditorProfiler::Metric const&, bool) */

void __thiscall EditorProfiler::add_frame_metric(EditorProfiler *this,Metric *param_1,bool param_2)

{
  HashMap<StringName,EditorProfiler::Metric::Category*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorProfiler::Metric::Category*>>>
  *this_00;
  HashMap<StringName,EditorProfiler::Metric::Category::Item*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorProfiler::Metric::Category::Item*>>>
  *this_01;
  Metric *pMVar1;
  undefined4 uVar2;
  void *pvVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte bVar7;
  char cVar8;
  int iVar9;
  long lVar10;
  uint uVar11;
  uint uVar13;
  long lVar14;
  int iVar15;
  long *plVar16;
  long in_FS_OFFSET;
  double dVar17;
  StringName local_c8 [4];
  int local_c4;
  long local_40;
  ulong uVar12;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar15 = *(int *)(this + 0xadc) + 1;
  lVar10 = (long)iVar15;
  if (*(long *)(this + 0xad0) == 0) {
    lVar14 = 0;
  }
  else {
    lVar14 = *(long *)(*(long *)(this + 0xad0) + -8);
  }
  if (lVar10 < lVar14) {
    bVar7 = (byte)(iVar15 >> 0x1f) >> 7;
  }
  else {
    bVar7 = 0;
    lVar10 = 0;
    iVar15 = 0;
  }
  *(int *)(this + 0xadc) = iVar15;
  iVar9 = *(int *)(this + 0xad8) + 1;
  if (lVar14 < iVar9) {
    iVar9 = (int)lVar14;
  }
  *(int *)(this + 0xad8) = iVar9;
  if ((lVar10 < lVar14) && (bVar7 == 0)) {
    CowData<EditorProfiler::Metric>::_copy_on_write
              ((CowData<EditorProfiler::Metric> *)(this + 0xad0));
    uVar5 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    pMVar1 = (Metric *)(*(long *)(this + 0xad0) + (long)iVar15 * 0x88);
    *pMVar1 = *param_1;
    uVar2 = *(undefined4 *)(param_1 + 4);
    *(undefined8 *)(pMVar1 + 8) = uVar5;
    *(undefined8 *)(pMVar1 + 0x10) = uVar6;
    *(undefined4 *)(pMVar1 + 4) = uVar2;
    if (*(long *)(pMVar1 + 0x20) != *(long *)(param_1 + 0x20)) {
      CowData<EditorProfiler::Metric::Category>::_ref
                ((CowData<EditorProfiler::Metric::Category> *)(pMVar1 + 0x20),
                 (CowData *)(param_1 + 0x20));
    }
    this_00 = (HashMap<StringName,EditorProfiler::Metric::Category*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorProfiler::Metric::Category*>>>
               *)(pMVar1 + 0x28);
    if (this_00 !=
        (HashMap<StringName,EditorProfiler::Metric::Category*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorProfiler::Metric::Category*>>>
         *)(param_1 + 0x28)) {
      uVar13 = *(uint *)(pMVar1 + 0x50);
      uVar11 = *(uint *)(hash_table_size_primes + (ulong)uVar13 * 4);
      if ((*(int *)(pMVar1 + 0x54) != 0) && (*(long *)(pMVar1 + 0x30) != 0)) {
        if (uVar11 != 0) {
          lVar10 = 0;
          do {
            if (*(int *)(*(long *)(pMVar1 + 0x38) + lVar10) != 0) {
              *(int *)(*(long *)(pMVar1 + 0x38) + lVar10) = 0;
              pvVar3 = *(void **)(*(long *)(pMVar1 + 0x30) + lVar10 * 2);
              if ((StringName::configured != '\0') && (*(long *)((long)pvVar3 + 0x10) != 0)) {
                StringName::unref();
              }
              Memory::free_static(pvVar3,false);
              *(undefined8 *)(*(long *)(pMVar1 + 0x30) + lVar10 * 2) = 0;
            }
            lVar10 = lVar10 + 4;
          } while ((ulong)uVar11 * 4 != lVar10);
          uVar13 = *(uint *)(pMVar1 + 0x50);
          uVar11 = *(uint *)(hash_table_size_primes + (ulong)uVar13 * 4);
        }
        *(undefined4 *)(pMVar1 + 0x54) = 0;
        *(undefined1 (*) [16])(pMVar1 + 0x40) = (undefined1  [16])0x0;
      }
      if (uVar11 < *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_1 + 0x50) * 4)) {
        if (uVar13 != 0x1c) {
          uVar12 = (ulong)uVar13;
          do {
            uVar11 = (int)uVar12 + 1;
            uVar12 = (ulong)uVar11;
            if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_1 + 0x50) * 4) <=
                *(uint *)(hash_table_size_primes + uVar12 * 4)) {
              if (uVar11 != uVar13) {
                if (*(long *)(pMVar1 + 0x30) == 0) {
                  *(uint *)(pMVar1 + 0x50) = uVar11;
                }
                else {
                  HashMap<StringName,EditorProfiler::Metric::Category*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorProfiler::Metric::Category*>>>
                  ::_resize_and_rehash(this_00,uVar11);
                }
              }
              goto LAB_0010831c;
            }
          } while (uVar11 != 0x1c);
        }
        _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                         "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0
                         ,0);
      }
LAB_0010831c:
      if ((*(long *)(param_1 + 0x30) != 0) &&
         (plVar16 = *(long **)(param_1 + 0x40), plVar16 != (long *)0x0)) {
        do {
          HashMap<StringName,EditorProfiler::Metric::Category*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorProfiler::Metric::Category*>>>
          ::insert(local_c8,(Category **)this_00,(bool)((char)plVar16 + '\x10'));
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
    }
    this_01 = (HashMap<StringName,EditorProfiler::Metric::Category::Item*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorProfiler::Metric::Category::Item*>>>
               *)(pMVar1 + 0x58);
    if (this_01 !=
        (HashMap<StringName,EditorProfiler::Metric::Category::Item*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorProfiler::Metric::Category::Item*>>>
         *)(param_1 + 0x58)) {
      uVar13 = *(uint *)(pMVar1 + 0x80);
      uVar11 = *(uint *)(hash_table_size_primes + (ulong)uVar13 * 4);
      if ((*(int *)(pMVar1 + 0x84) != 0) && (*(long *)(pMVar1 + 0x60) != 0)) {
        if (uVar11 != 0) {
          lVar10 = 0;
          do {
            if (*(int *)(*(long *)(pMVar1 + 0x68) + lVar10) != 0) {
              *(int *)(*(long *)(pMVar1 + 0x68) + lVar10) = 0;
              pvVar3 = *(void **)(*(long *)(pMVar1 + 0x60) + lVar10 * 2);
              if ((StringName::configured != '\0') && (*(long *)((long)pvVar3 + 0x10) != 0)) {
                StringName::unref();
              }
              Memory::free_static(pvVar3,false);
              *(undefined8 *)(*(long *)(pMVar1 + 0x60) + lVar10 * 2) = 0;
            }
            lVar10 = lVar10 + 4;
          } while (lVar10 != (ulong)uVar11 * 4);
          uVar13 = *(uint *)(pMVar1 + 0x80);
          uVar11 = *(uint *)(hash_table_size_primes + (ulong)uVar13 * 4);
        }
        *(undefined4 *)(pMVar1 + 0x84) = 0;
        *(undefined1 (*) [16])(pMVar1 + 0x70) = (undefined1  [16])0x0;
      }
      if (uVar11 < *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_1 + 0x80) * 4)) {
        if (uVar13 != 0x1c) {
          uVar12 = (ulong)uVar13;
          do {
            uVar11 = (int)uVar12 + 1;
            uVar12 = (ulong)uVar11;
            if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_1 + 0x80) * 4) <=
                *(uint *)(hash_table_size_primes + uVar12 * 4)) {
              if (uVar11 != uVar13) {
                if (*(long *)(pMVar1 + 0x60) == 0) {
                  *(uint *)(pMVar1 + 0x80) = uVar11;
                }
                else {
                  HashMap<StringName,EditorProfiler::Metric::Category::Item*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorProfiler::Metric::Category::Item*>>>
                  ::_resize_and_rehash(this_01,uVar11);
                }
              }
              goto LAB_001083ea;
            }
          } while (uVar11 != 0x1c);
        }
        _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                         "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0
                         ,0);
      }
LAB_001083ea:
      if ((*(long *)(param_1 + 0x60) != 0) &&
         (plVar16 = *(long **)(param_1 + 0x70), plVar16 != (long *)0x0)) {
        do {
          HashMap<StringName,EditorProfiler::Metric::Category::Item*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorProfiler::Metric::Category::Item*>>>
          ::insert(local_c8,(Item **)this_01,(bool)((char)plVar16 + '\x10'));
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
    }
    lVar10 = (long)*(int *)(this + 0xadc);
    lVar14 = *(long *)(this + 0xad0);
    if (lVar10 < 0) {
      if (lVar14 != 0) {
        lVar14 = *(long *)(lVar14 + -8);
        goto LAB_001087db;
      }
    }
    else if (lVar14 != 0) {
      lVar14 = *(long *)(lVar14 + -8);
      if (lVar10 < lVar14) {
        CowData<EditorProfiler::Metric>::_copy_on_write
                  ((CowData<EditorProfiler::Metric> *)(this + 0xad0));
        _make_metric_ptrs(this,(Metric *)(*(long *)(this + 0xad0) + lVar10 * 0x88));
        this[0xae4] = (EditorProfiler)0x1;
        BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xa38),0));
        SpinBox::set_editable(SUB81(*(undefined8 *)(this + 0xac0),0));
        Range::set_max((double)*(int *)(param_1 + 4));
        _get_frame_metric((int)(Metric *)local_c8);
        Range::set_min((double)local_c4);
        Metric::~Metric((Metric *)local_c8);
        if (this[0xaf0] == (EditorProfiler)0x0) {
          Range::set_value((double)*(int *)(param_1 + 4));
        }
        this[0xae4] = (EditorProfiler)0x0;
        cVar8 = Timer::is_stopped();
        if (cVar8 != '\0') {
          dVar17 = _LC152;
          if (param_2) {
            dVar17 = _LC89;
          }
          Timer::set_wait_time(dVar17);
          Timer::start(_LC90);
        }
        cVar8 = Timer::is_stopped();
        if (cVar8 == '\0') {
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            return;
          }
        }
        else {
          Timer::set_wait_time(_LC89);
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            Timer::start(_LC90);
            return;
          }
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      goto LAB_001087db;
    }
    lVar14 = 0;
  }
LAB_001087db:
  _err_print_index_error
            ("operator[]","./core/templates/vector.h",0x38,lVar10,lVar14,"p_index",
             "((Vector<T> *)(this))->_cowdata.size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}



/* Vector<Vector<String> >::push_back(Vector<String>) [clone .isra.0] */

void __thiscall Vector<Vector<String>>::push_back(Vector<Vector<String>> *this,long param_2)

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
  iVar1 = CowData<Vector<String>>::resize<false>((CowData<Vector<String>> *)(this + 8),lVar3);
  if (iVar1 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar2 = -1;
      lVar3 = 0;
    }
    else {
      lVar3 = *(long *)(*(long *)(this + 8) + -8);
      lVar2 = lVar3 + -1;
      if (-1 < lVar2) {
        CowData<Vector<String>>::_copy_on_write((CowData<Vector<String>> *)(this + 8));
        lVar3 = *(long *)(this + 8) + lVar2 * 0x10;
        if (*(long *)(lVar3 + 8) == *(long *)(param_2 + 8)) {
          return;
        }
        CowData<String>::_ref((CowData<String> *)(lVar3 + 8),(CowData *)(param_2 + 8));
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



/* EditorProfiler::get_data_as_csv() const */

Vector<Vector<String>> * EditorProfiler::get_data_as_csv(void)

{
  char *pcVar1;
  char cVar2;
  void *pvVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  char *pcVar8;
  undefined4 *puVar9;
  int *piVar10;
  int iVar11;
  CowData<char32_t> *pCVar12;
  int *piVar13;
  long *plVar14;
  long in_RSI;
  ulong uVar15;
  Vector<Vector<String>> *in_RDI;
  long lVar16;
  long lVar17;
  StringName *pSVar18;
  long lVar19;
  undefined8 *puVar20;
  long in_FS_OFFSET;
  bool bVar21;
  long local_d0;
  long local_c8;
  long local_c0;
  char *local_b8;
  size_t local_b0;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined8 local_88;
  StringName local_78 [8];
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar16 = *(long *)(in_RSI + 0xad0);
  *(undefined8 *)(in_RDI + 8) = 0;
  if (lVar16 != 0) {
    lVar19 = 0;
    lVar17 = 0;
    local_a8 = (undefined1  [16])0x0;
    local_98 = (undefined1  [16])0x0;
    local_88 = _LC87;
    do {
      while( true ) {
        if (*(long *)(lVar16 + -8) <= lVar17) goto LAB_00108aa7;
        pcVar8 = (char *)(lVar16 + lVar19);
        if (*pcVar8 == '\0') break;
        for (puVar20 = *(undefined8 **)(pcVar8 + 0x40); puVar20 != (undefined8 *)0x0;
            puVar20 = (undefined8 *)*puVar20) {
          HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert
                    (local_78);
        }
        for (puVar20 = *(undefined8 **)(pcVar8 + 0x70); puVar20 != (undefined8 *)0x0;
            puVar20 = (undefined8 *)*puVar20) {
          HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert
                    (local_78);
        }
        lVar17 = lVar17 + 1;
        lVar19 = lVar19 + 0x88;
        lVar16 = *(long *)(in_RSI + 0xad0);
        if (lVar16 == 0) goto LAB_00108aa7;
      }
      lVar17 = lVar17 + 1;
      lVar19 = lVar19 + 0x88;
    } while (lVar16 != 0);
LAB_00108aa7:
    uVar7 = local_88._4_4_;
    uVar15 = (ulong)local_88._4_4_;
    local_d0 = 0;
    local_70 = (undefined1  [16])0x0;
    local_50 = _LC87;
    local_60 = (undefined1  [16])0x0;
    CowData<String>::resize<false>((CowData<String> *)&local_d0,uVar15);
    lVar16 = local_d0;
    if (uVar7 != 0) {
      pSVar18 = (StringName *)local_a8._0_8_;
      lVar17 = 0;
      do {
        lVar19 = *(long *)pSVar18;
        if (lVar19 == 0) {
          local_c8 = 0;
        }
        else {
          pcVar8 = *(char **)(lVar19 + 8);
          local_c8 = 0;
          if (pcVar8 == (char *)0x0) {
            if (*(long *)(lVar19 + 0x10) != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)(lVar19 + 0x10));
            }
          }
          else {
            local_b0 = strlen(pcVar8);
            local_b8 = pcVar8;
            String::parse_latin1((StrRange *)&local_c8);
          }
        }
        if (lVar16 == 0) {
          lVar16 = 0;
LAB_00108e9b:
          _err_print_index_error
                    ("operator[]","./core/templates/vector.h",0x38,lVar17,lVar16,"p_index",
                     "((Vector<T> *)(this))->_cowdata.size()","",false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        lVar16 = *(long *)(lVar16 + -8);
        if (lVar16 <= lVar17) goto LAB_00108e9b;
        CowData<String>::_copy_on_write((CowData<String> *)&local_d0);
        lVar16 = local_d0;
        pCVar12 = (CowData<char32_t> *)(lVar17 * 8 + local_d0);
        if (*(long *)pCVar12 != local_c8) {
          CowData<char32_t>::_unref(pCVar12);
          *(long *)pCVar12 = local_c8;
          local_c8 = 0;
        }
        lVar19 = lVar17 + 1;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
        puVar9 = (undefined4 *)
                 HashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>>
                 ::operator[]((HashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>>
                               *)local_78,pSVar18);
        *puVar9 = (int)lVar17;
        pSVar18 = pSVar18 + 8;
        lVar17 = lVar19;
      } while ((int)lVar19 < (int)uVar7);
    }
    local_b0 = 0;
    if (lVar16 != 0) {
      CowData<String>::_ref((CowData<String> *)&local_b0,(CowData *)&local_d0);
    }
    Vector<Vector<String>>::push_back(in_RDI);
    CowData<String>::_unref((CowData<String> *)&local_b0);
    local_c0 = 0;
    iVar11 = *(int *)(in_RSI + 0xadc);
    pcVar8 = *(char **)(in_RSI + 0xad0);
    for (lVar16 = 0; (pcVar8 != (char *)0x0 && (lVar17 = *(long *)(pcVar8 + -8), lVar16 < lVar17));
        lVar16 = lVar16 + 1) {
      iVar11 = iVar11 + 1;
      lVar19 = (long)iVar11;
      if (lVar19 < lVar17) {
        if (iVar11 < 0) {
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,lVar19,lVar17,"p_index","size()","",
                     false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        pcVar1 = pcVar8 + lVar19 * 0x88;
        cVar2 = *pcVar1;
      }
      else {
        iVar11 = 0;
        cVar2 = *pcVar8;
        pcVar1 = pcVar8;
      }
      if (cVar2 != '\0') {
        CowData<String>::resize<false>((CowData<String> *)&local_c0,0);
        CowData<String>::resize<false>((CowData<String> *)&local_c0,uVar15);
        plVar14 = *(long **)(pcVar1 + 0x40);
        bVar21 = SUB81((CowData<char32_t> *)&local_b8,0);
        lVar19 = local_c0;
        if (plVar14 != (long *)0x0) {
          do {
            String::num_real(*(float *)(plVar14[3] + 0x10),bVar21);
            piVar10 = (int *)HashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>>
                             ::operator[]((HashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>>
                                           *)local_78,(StringName *)(plVar14 + 2));
            lVar17 = (long)*piVar10;
            if (lVar17 < 0) {
              if (lVar19 == 0) {
LAB_0010915a:
                lVar16 = 0;
              }
              else {
LAB_00109133:
                lVar16 = *(long *)(lVar19 + -8);
              }
              goto LAB_00108e9b;
            }
            if (lVar19 == 0) goto LAB_0010915a;
            if (*(long *)(lVar19 + -8) <= lVar17) goto LAB_00109133;
            CowData<String>::_copy_on_write((CowData<String> *)&local_c0);
            lVar19 = local_c0;
            pCVar12 = (CowData<char32_t> *)(local_c0 + lVar17 * 8);
            if (*(char **)pCVar12 != local_b8) {
              CowData<char32_t>::_unref(pCVar12);
              *(char **)pCVar12 = local_b8;
              local_b8 = (char *)0x0;
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
            plVar14 = (long *)*plVar14;
          } while (plVar14 != (long *)0x0);
        }
        plVar14 = *(long **)(pcVar1 + 0x70);
        if (plVar14 != (long *)0x0) {
          do {
            String::num_real(*(float *)(plVar14[3] + 0x20),bVar21);
            piVar10 = (int *)HashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>>
                             ::operator[]((HashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>>
                                           *)local_78,(StringName *)(plVar14 + 2));
            lVar17 = (long)*piVar10;
            if (lVar17 < 0) {
              if (lVar19 == 0) {
                lVar16 = 0;
              }
              else {
LAB_00109167:
                lVar16 = *(long *)(lVar19 + -8);
              }
              goto LAB_00108e9b;
            }
            if (lVar19 == 0) {
              lVar16 = 0;
              goto LAB_00108e9b;
            }
            if (*(long *)(lVar19 + -8) <= lVar17) goto LAB_00109167;
            CowData<String>::_copy_on_write((CowData<String> *)&local_c0);
            lVar19 = local_c0;
            pCVar12 = (CowData<char32_t> *)(local_c0 + lVar17 * 8);
            if (*(char **)pCVar12 != local_b8) {
              CowData<char32_t>::_unref(pCVar12);
              *(char **)pCVar12 = local_b8;
              local_b8 = (char *)0x0;
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
            plVar14 = (long *)*plVar14;
          } while (plVar14 != (long *)0x0);
        }
        local_b0 = 0;
        if (lVar19 != 0) {
          CowData<String>::_ref((CowData<String> *)&local_b0,(CowData *)&local_c0);
        }
        Vector<Vector<String>>::push_back(in_RDI);
        CowData<String>::_unref((CowData<String> *)&local_b0);
        pcVar8 = *(char **)(in_RSI + 0xad0);
      }
    }
    CowData<String>::_unref((CowData<String> *)&local_c0);
    CowData<String>::_unref((CowData<String> *)&local_d0);
    uVar5 = local_70._0_8_;
    if ((undefined8 *)local_70._0_8_ != (undefined8 *)0x0) {
      uVar6 = local_70._8_8_;
      if ((local_50._4_4_ != 0) &&
         (*(uint *)(hash_table_size_primes + (local_50 & 0xffffffff) * 4) != 0)) {
        piVar10 = (int *)(local_70._8_8_ +
                         (ulong)*(uint *)(hash_table_size_primes + (local_50 & 0xffffffff) * 4) * 4)
        ;
        piVar13 = (int *)local_70._8_8_;
        puVar20 = (undefined8 *)local_70._0_8_;
        do {
          if (*piVar13 != 0) {
            bVar21 = StringName::configured != '\0';
            pvVar3 = (void *)*puVar20;
            *piVar13 = 0;
            if ((bVar21) && (*(long *)((long)pvVar3 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar3,false);
            *puVar20 = 0;
          }
          piVar13 = piVar13 + 1;
          puVar20 = puVar20 + 1;
        } while (piVar10 != piVar13);
      }
      Memory::free_static((void *)uVar5,false);
      Memory::free_static((void *)uVar6,false);
    }
    uVar5 = local_a8._0_8_;
    if ((long *)local_a8._0_8_ != (long *)0x0) {
      uVar6 = local_98._8_8_;
      if (uVar7 != 0) {
        if (*(uint *)(hash_table_size_primes + (local_88 & 0xffffffff) * 4) != 0) {
          memset((void *)local_98._8_8_,0,
                 (ulong)*(uint *)(hash_table_size_primes + (local_88 & 0xffffffff) * 4) * 4);
        }
        plVar14 = (long *)uVar5;
        do {
          if ((StringName::configured != '\0') && (*plVar14 != 0)) {
            StringName::unref();
          }
          plVar14 = plVar14 + 1;
        } while (plVar14 != (long *)(uVar5 + uVar15 * 8));
      }
      Memory::free_static((void *)uVar5,false);
      Memory::free_static((void *)local_98._0_8_,false);
      Memory::free_static((void *)local_a8._8_8_,false);
      Memory::free_static((void *)uVar6,false);
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return in_RDI;
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



/* CallableCustomMethodPointer<EditorProfiler, void, Ref<InputEvent>
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorProfiler,void,Ref<InputEvent>const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorProfiler,void,Ref<InputEvent>const&> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorProfiler, void, double>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorProfiler,void,double>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorProfiler,void,double> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorProfiler, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorProfiler,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorProfiler,void,int> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorProfiler, void, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorProfiler,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorProfiler,void,bool> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorProfiler, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorProfiler,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorProfiler,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorProfiler, void, Ref<InputEvent>
   const&>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorProfiler,void,Ref<InputEvent>const&>::get_argument_count
          (CallableCustomMethodPointer<EditorProfiler,void,Ref<InputEvent>const&> *this,
          bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<EditorProfiler, void, double>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorProfiler,void,double>::get_argument_count
          (CallableCustomMethodPointer<EditorProfiler,void,double> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<EditorProfiler, void, int>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorProfiler,void,int>::get_argument_count
          (CallableCustomMethodPointer<EditorProfiler,void,int> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<EditorProfiler, void, bool>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorProfiler,void,bool>::get_argument_count
          (CallableCustomMethodPointer<EditorProfiler,void,bool> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<EditorProfiler, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorProfiler,void>::get_argument_count
          (CallableCustomMethodPointer<EditorProfiler,void> *this,bool *param_1)

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



/* CallableCustomMethodPointer<EditorProfiler, void, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorProfiler,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorProfiler,void,bool> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorProfiler, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorProfiler,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorProfiler,void,int> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorProfiler, void, double>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorProfiler,void,double>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorProfiler,void,double> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorProfiler, void, Ref<InputEvent>
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorProfiler,void,Ref<InputEvent>const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorProfiler,void,Ref<InputEvent>const&> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorProfiler, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorProfiler,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorProfiler,void> *this)

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



/* EditorProfiler::_property_get_revertv(StringName const&, Variant&) const */

undefined8 EditorProfiler::_property_get_revertv(StringName *param_1,Variant *param_2)

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
  
  if ((code *)PTR__property_can_revert_00119008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* HSplitContainer::_property_can_revertv(StringName const&) const */

undefined8 HSplitContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00119008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* EditorProfiler::_property_can_revertv(StringName const&) const */

undefined8 EditorProfiler::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00119008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* CallableCustomMethodPointer<EditorProfiler, void, double>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorProfiler,void,double>::get_object
          (CallableCustomMethodPointer<EditorProfiler,void,double> *this)

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
      goto LAB_001096ed;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_001096ed;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_001096ed:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorProfiler, void, int>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorProfiler,void,int>::get_object
          (CallableCustomMethodPointer<EditorProfiler,void,int> *this)

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
      goto LAB_001097ed;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_001097ed;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_001097ed:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorProfiler, void, bool>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorProfiler,void,bool>::get_object
          (CallableCustomMethodPointer<EditorProfiler,void,bool> *this)

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
      goto LAB_001098ed;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_001098ed;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_001098ed:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorProfiler, void, Ref<InputEvent> const&>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorProfiler,void,Ref<InputEvent>const&>::get_object
          (CallableCustomMethodPointer<EditorProfiler,void,Ref<InputEvent>const&> *this)

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
      goto LAB_001099ed;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_001099ed;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_001099ed:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorProfiler, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorProfiler,void>::get_object
          (CallableCustomMethodPointer<EditorProfiler,void> *this)

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
      goto LAB_00109aed;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00109aed;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00109aed:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* HSplitContainer::_validate_propertyv(PropertyInfo&) const */

void HSplitContainer::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_00119010 == Control::_validate_property) {
    return;
  }
  SplitContainer::_validate_property(param_1);
  return;
}



/* HBoxContainer::_validate_propertyv(PropertyInfo&) const */

void HBoxContainer::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_00119018 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* EditorProfiler::_validate_propertyv(PropertyInfo&) const */

void EditorProfiler::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_00119018 == Control::_validate_property) {
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
    uVar1 = (uint)CONCAT71(0x114d,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x114d,in_RSI == &SplitContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x114d,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x114e,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x114e,in_RSI == &Node::get_class_ptr_static()::ptr) |
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
    uVar1 = (uint)CONCAT71(0x114d,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x114d,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x114d,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x114e,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x114e,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* EditorProfiler::is_class_ptr(void*) const */

ulong EditorProfiler::is_class_ptr(void *param_1)

{
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  if (in_RSI == &VBoxContainer::get_class_ptr_static()::ptr ||
      in_RSI == &get_class_ptr_static()::ptr) {
    return CONCAT71(0x114d,in_RSI == &VBoxContainer::get_class_ptr_static()::ptr ||
                           in_RSI == &get_class_ptr_static()::ptr);
  }
  return (ulong)((uint)CONCAT71(0x114d,in_RSI == &Container::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x114d,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x114d,in_RSI == &Control::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x114e,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x114e,in_RSI == &Node::get_class_ptr_static()::ptr) |
                CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr));
}



/* HBoxContainer::_setv(StringName const&, Variant const&) */

undefined8 HBoxContainer::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_00119020 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* EditorProfiler::_setv(StringName const&, Variant const&) */

undefined8 EditorProfiler::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_00119020 != CanvasItem::_set) {
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
    if ((code *)PTR__set_00119020 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x0010a028) */
/* EditorProfiler::_getv(StringName const&, Variant&) const */

undefined8 EditorProfiler::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00119028 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x0010a098) */
/* HSplitContainer::_getv(StringName const&, Variant&) const */

undefined8 HSplitContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00119028 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x0010a108) */
/* HBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 HBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00119028 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* EditorProfiler::_get_class_namev() const */

undefined8 * EditorProfiler::_get_class_namev(void)

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
LAB_0010a163:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010a163;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"EditorProfiler");
      goto LAB_0010a1ce;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"EditorProfiler");
LAB_0010a1ce:
  return &_get_class_namev()::_class_name_static;
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
LAB_0010a253:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010a253;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"HSplitContainer");
      goto LAB_0010a2be;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"HSplitContainer");
LAB_0010a2be:
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
LAB_0010a343:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010a343;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
      goto LAB_0010a3ae;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
LAB_0010a3ae:
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
      if (StringName::configured == '\0') goto LAB_0010a440;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010a440:
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
      if (StringName::configured == '\0') goto LAB_0010a4a0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010a4a0:
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
    if ((code *)PTR__notification_00119030 != Container::_notification) {
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
  if ((code *)PTR__notification_00119030 == Container::_notification) {
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
    if ((code *)PTR__notification_00119038 != Container::_notification) {
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
  if ((code *)PTR__notification_00119038 == Container::_notification) {
    return;
  }
  SplitContainer::_notification(iVar1);
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
      if (StringName::configured == '\0') goto LAB_0010a81f;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010a81f:
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
      if (StringName::configured == '\0') goto LAB_0010a9cf;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010a9cf:
  Control::~Control((Control *)this);
  operator_delete(this,0xa70);
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



/* CowData<unsigned char>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<unsigned_char>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* EditorProfiler::_get_time_as_text(EditorProfiler::Metric const&, float, int) [clone .cold] */

void EditorProfiler::_get_time_as_text(Metric *param_1,float param_2,int param_3)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* EditorProfiler::_bind_methods() [clone .cold] */

void EditorProfiler::_bind_methods(void)

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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<String>::resize<false>(long) [clone .isra.0] [clone .cold] */

void CowData<String>::resize<false>(long param_1)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



void FUN_0010ae5a(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Vector<String> >::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Vector<String>>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* EditorProfiler::_get_frame_metric(int) [clone .cold] */

void EditorProfiler::_get_frame_metric(int param_1)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EditorProfiler::_update_plot() [clone .cold] */

void EditorProfiler::_update_plot(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0010ae7c(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<EditorProfiler::Metric>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<EditorProfiler::Metric>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<EditorProfiler::Metric>::resize<false>(long) [clone .isra.0] [clone .cold] */

void CowData<EditorProfiler::Metric>::resize<false>(long param_1)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



void FUN_0010aea8(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<EditorProfiler::Metric::Category>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<EditorProfiler::Metric::Category>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* EditorProfiler::_make_metric_ptrs(EditorProfiler::Metric&) [clone .cold] */

void EditorProfiler::_make_metric_ptrs(Metric *param_1)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* String::~String() */

void __thiscall String::~String(String *this)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)this != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)this + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashSet<StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::insert(StringName const&) */

StringName *
HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert
          (StringName *param_1)

{
  void *pvVar1;
  void *pvVar2;
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
  uint uVar27;
  uint uVar28;
  ulong uVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  int iVar33;
  StringName *in_RDX;
  long lVar34;
  ulong uVar35;
  long lVar36;
  long *in_RSI;
  uint uVar37;
  ulong uVar38;
  undefined4 uVar39;
  uint uVar40;
  ulong uVar41;
  uint uVar42;
  uint *puVar43;
  int iVar44;
  uint local_88;
  long local_68;
  
  uVar27 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
  if (*in_RSI == 0) {
    uVar29 = (ulong)uVar27 * 4;
    lVar30 = Memory::alloc_static(uVar29,false);
    in_RSI[3] = lVar30;
    lVar30 = Memory::alloc_static((ulong)uVar27 * 8,false);
    *in_RSI = lVar30;
    lVar30 = Memory::alloc_static(uVar29,false);
    in_RSI[2] = lVar30;
    lVar30 = Memory::alloc_static(uVar29,false);
    in_RSI[1] = lVar30;
    if (uVar27 != 0) {
      memset((void *)in_RSI[3],0,uVar29);
    }
    iVar44 = *(int *)((long)in_RSI + 0x24);
    if (*in_RSI != 0) goto LAB_0010b0bc;
  }
  else {
    iVar44 = *(int *)((long)in_RSI + 0x24);
LAB_0010b0bc:
    if (iVar44 != 0) {
      uVar40 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
      uVar29 = CONCAT44(0,uVar40);
      lVar30 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
      if (*(long *)in_RDX == 0) {
        uVar28 = StringName::get_empty_hash();
        iVar44 = *(int *)((long)in_RSI + 0x24);
      }
      else {
        uVar28 = *(uint *)(*(long *)in_RDX + 0x20);
      }
      if (uVar28 == 0) {
        uVar28 = 1;
      }
      uVar37 = 0;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)uVar28 * lVar30;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = uVar29;
      lVar34 = SUB168(auVar3 * auVar15,8);
      iVar33 = SUB164(auVar3 * auVar15,8);
      uVar42 = *(uint *)(in_RSI[3] + lVar34 * 4);
      if (uVar42 != 0) {
        do {
          if (uVar28 == uVar42) {
            lVar36 = *in_RSI;
            uVar42 = *(uint *)(in_RSI[1] + lVar34 * 4);
            if (*(long *)(lVar36 + (ulong)uVar42 * 8) == *(long *)in_RDX) goto LAB_0010b508;
          }
          uVar37 = uVar37 + 1;
          auVar4._8_8_ = 0;
          auVar4._0_8_ = (ulong)(iVar33 + 1) * lVar30;
          auVar16._8_8_ = 0;
          auVar16._0_8_ = uVar29;
          lVar34 = SUB168(auVar4 * auVar16,8);
          uVar42 = *(uint *)(in_RSI[3] + lVar34 * 4);
          iVar33 = SUB164(auVar4 * auVar16,8);
        } while ((uVar42 != 0) &&
                (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar42 * lVar30, auVar17._8_8_ = 0,
                auVar17._0_8_ = uVar29, auVar6._8_8_ = 0,
                auVar6._0_8_ = (ulong)((uVar40 + iVar33) - SUB164(auVar5 * auVar17,8)) * lVar30,
                auVar18._8_8_ = 0, auVar18._0_8_ = uVar29, uVar37 <= SUB164(auVar6 * auVar18,8)));
      }
    }
  }
  if ((float)(iVar44 + 1) <= (float)uVar27 * __LC18) {
    lVar30 = *(long *)in_RDX;
    if (lVar30 != 0) goto LAB_0010b3e5;
LAB_0010b546:
    uVar27 = StringName::get_empty_hash();
  }
  else {
    if ((int)in_RSI[4] == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_set.h",0xbf,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      uVar42 = 0xffffffff;
      iVar44 = *(int *)((long)in_RSI + 0x24);
      lVar36 = *in_RSI;
      goto LAB_0010b508;
    }
    uVar27 = (int)in_RSI[4] + 1;
    uVar29 = (ulong)uVar27;
    if (uVar27 < 2) {
      uVar29 = 2;
    }
    uVar27 = *(uint *)(hash_table_size_primes + uVar29 * 4);
    *(int *)(in_RSI + 4) = (int)uVar29;
    pvVar1 = (void *)in_RSI[3];
    uVar29 = (ulong)uVar27 * 4;
    pvVar2 = (void *)in_RSI[2];
    lVar30 = Memory::alloc_static(uVar29,false);
    in_RSI[3] = lVar30;
    lVar30 = Memory::realloc_static((void *)*in_RSI,(ulong)uVar27 * 8,false);
    *in_RSI = lVar30;
    lVar30 = Memory::alloc_static(uVar29,false);
    in_RSI[2] = lVar30;
    lVar30 = Memory::realloc_static((void *)in_RSI[1],uVar29,false);
    in_RSI[1] = lVar30;
    if (uVar27 != 0) {
      memset((void *)in_RSI[3],0,uVar29);
    }
    if (*(int *)((long)in_RSI + 0x24) != 0) {
      uVar29 = 0;
      lVar34 = in_RSI[3];
      lVar36 = in_RSI[2];
      do {
        uVar41 = uVar29 & 0xffffffff;
        uVar39 = (undefined4)uVar29;
        uVar42 = 0;
        uVar27 = *(uint *)((long)pvVar1 + (ulong)*(uint *)((long)pvVar2 + uVar29 * 4) * 4);
        uVar35 = (ulong)uVar27;
        uVar40 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
        uVar38 = CONCAT44(0,uVar40);
        lVar31 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
        auVar7._8_8_ = 0;
        auVar7._0_8_ = uVar35 * lVar31;
        auVar19._8_8_ = 0;
        auVar19._0_8_ = uVar38;
        lVar32 = SUB168(auVar7 * auVar19,8) * 4;
        iVar44 = SUB164(auVar7 * auVar19,8);
        puVar43 = (uint *)(lVar34 + lVar32);
        uVar28 = *puVar43;
        if (uVar28 == 0) {
          lVar31 = uVar29 * 4;
        }
        else {
          do {
            auVar8._8_8_ = 0;
            auVar8._0_8_ = (ulong)uVar28 * lVar31;
            auVar20._8_8_ = 0;
            auVar20._0_8_ = uVar38;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = (ulong)((uVar40 + iVar44) - SUB164(auVar8 * auVar20,8)) * lVar31;
            auVar21._8_8_ = 0;
            auVar21._0_8_ = uVar38;
            local_88 = SUB164(auVar9 * auVar21,8);
            if (local_88 < uVar42) {
              *(int *)(lVar36 + uVar41 * 4) = iVar44;
              uVar27 = *puVar43;
              *puVar43 = (uint)uVar35;
              uVar28 = *(uint *)(lVar32 + lVar30);
              uVar35 = (ulong)uVar27;
              *(uint *)(lVar32 + lVar30) = (uint)uVar41;
              uVar41 = (ulong)uVar28;
              uVar42 = local_88;
            }
            uVar39 = (undefined4)uVar41;
            uVar27 = (uint)uVar35;
            uVar42 = uVar42 + 1;
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)(iVar44 + 1) * lVar31;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar38;
            lVar32 = SUB168(auVar10 * auVar22,8) * 4;
            iVar44 = SUB164(auVar10 * auVar22,8);
            puVar43 = (uint *)(lVar34 + lVar32);
            uVar28 = *puVar43;
          } while (uVar28 != 0);
          lVar31 = uVar41 << 2;
        }
        *puVar43 = uVar27;
        uVar29 = uVar29 + 1;
        *(int *)(lVar36 + lVar31) = iVar44;
        *(undefined4 *)(lVar30 + lVar32) = uVar39;
      } while ((uint)uVar29 < *(uint *)((long)in_RSI + 0x24));
    }
    Memory::free_static(pvVar1,false);
    Memory::free_static(pvVar2,false);
    lVar30 = *(long *)in_RDX;
    if (lVar30 == 0) goto LAB_0010b546;
LAB_0010b3e5:
    uVar27 = *(uint *)(lVar30 + 0x20);
  }
  if (uVar27 == 0) {
    uVar27 = 1;
  }
  uVar29 = (ulong)uVar27;
  StringName::StringName((StringName *)(*in_RSI + (ulong)*(uint *)((long)in_RSI + 0x24) * 8),in_RDX)
  ;
  uVar40 = *(uint *)((long)in_RSI + 0x24);
  lVar34 = in_RSI[3];
  uVar28 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
  uVar35 = CONCAT44(0,uVar28);
  lVar36 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar29 * lVar36;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = uVar35;
  lVar30 = SUB168(auVar11 * auVar23,8) * 4;
  iVar44 = SUB164(auVar11 * auVar23,8);
  puVar43 = (uint *)(lVar34 + lVar30);
  uVar42 = *puVar43;
  if (uVar42 == 0) {
    local_68 = in_RSI[2];
    lVar32 = in_RSI[1];
  }
  else {
    uVar37 = 0;
    local_68 = in_RSI[2];
    lVar32 = in_RSI[1];
    do {
      auVar12._8_8_ = 0;
      auVar12._0_8_ = (ulong)uVar42 * lVar36;
      auVar24._8_8_ = 0;
      auVar24._0_8_ = uVar35;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = (ulong)((uVar28 + iVar44) - SUB164(auVar12 * auVar24,8)) * lVar36;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = uVar35;
      local_88 = SUB164(auVar13 * auVar25,8);
      if (local_88 < uVar37) {
        *(int *)(local_68 + (ulong)uVar40 * 4) = iVar44;
        uVar27 = *puVar43;
        *puVar43 = (uint)uVar29;
        uVar42 = *(uint *)(lVar30 + lVar32);
        uVar29 = (ulong)uVar27;
        *(uint *)(lVar30 + lVar32) = uVar40;
        uVar40 = uVar42;
        uVar37 = local_88;
      }
      uVar27 = (uint)uVar29;
      uVar37 = uVar37 + 1;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = (ulong)(iVar44 + 1) * lVar36;
      auVar26._8_8_ = 0;
      auVar26._0_8_ = uVar35;
      lVar30 = SUB168(auVar14 * auVar26,8) * 4;
      iVar44 = SUB164(auVar14 * auVar26,8);
      puVar43 = (uint *)(lVar34 + lVar30);
      uVar42 = *puVar43;
    } while (uVar42 != 0);
  }
  *puVar43 = uVar27;
  *(int *)(local_68 + (ulong)uVar40 * 4) = iVar44;
  *(uint *)(lVar32 + lVar30) = uVar40;
  uVar42 = *(uint *)((long)in_RSI + 0x24);
  lVar36 = *in_RSI;
  iVar44 = uVar42 + 1;
  *(int *)((long)in_RSI + 0x24) = iVar44;
LAB_0010b508:
  *(uint *)(param_1 + 0xc) = uVar42;
  *(long *)param_1 = lVar36;
  *(int *)(param_1 + 8) = iVar44;
  return param_1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<StringName, int, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, int> > >::operator[](StringName const&) */

undefined8 * __thiscall
HashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>>
::operator[](HashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>>
             *this,StringName *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *__s;
  undefined8 *puVar4;
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
  undefined1 auVar36 [16];
  uint uVar37;
  uint uVar38;
  uint uVar39;
  ulong uVar40;
  undefined8 uVar41;
  void *__s_00;
  undefined8 *puVar42;
  long lVar43;
  void *pvVar44;
  ulong uVar45;
  int iVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  ulong uVar50;
  undefined8 uVar51;
  uint uVar52;
  uint uVar53;
  uint uVar54;
  undefined8 *puVar55;
  long in_FS_OFFSET;
  bool bVar56;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  lVar43 = *(long *)(this + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar40 = CONCAT44(0,uVar38);
  if (lVar43 == 0) {
LAB_0010bd38:
    uVar45 = uVar40 * 4;
    uVar50 = uVar40 * 8;
    uVar41 = Memory::alloc_static(uVar45,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    pvVar44 = (void *)Memory::alloc_static(uVar50,false);
    *(void **)(this + 8) = pvVar44;
    if ((int)uVar40 != 0) {
      pvVar3 = *(void **)(this + 0x10);
      if ((pvVar3 < (void *)((long)pvVar44 + uVar50)) && (pvVar44 < (void *)((long)pvVar3 + uVar45))
         ) {
        uVar45 = 0;
        do {
          *(undefined4 *)((long)pvVar3 + uVar45 * 4) = 0;
          *(undefined8 *)((long)pvVar44 + uVar45 * 8) = 0;
          uVar45 = uVar45 + 1;
        } while (uVar40 != uVar45);
        goto LAB_0010bbe8;
      }
      memset(pvVar3,0,uVar45);
      memset(pvVar44,0,uVar50);
      iVar46 = *(int *)(this + 0x2c);
LAB_0010bbec:
      if (iVar46 != 0) {
LAB_0010bbf4:
        uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
        uVar45 = CONCAT44(0,uVar38);
        lVar43 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        if (*(long *)param_1 == 0) {
          uVar39 = StringName::get_empty_hash();
        }
        else {
          uVar39 = *(uint *)(*(long *)param_1 + 0x20);
        }
        if (uVar39 == 0) {
          uVar39 = 1;
        }
        uVar54 = 0;
        auVar17._8_8_ = 0;
        auVar17._0_8_ = (ulong)uVar39 * lVar43;
        auVar33._8_8_ = 0;
        auVar33._0_8_ = uVar45;
        lVar49 = SUB168(auVar17 * auVar33,8);
        uVar52 = *(uint *)(*(long *)(this + 0x10) + lVar49 * 4);
        uVar53 = SUB164(auVar17 * auVar33,8);
        if (uVar52 != 0) {
          do {
            if ((uVar39 == uVar52) &&
               (*(long *)(*(long *)(*(long *)(this + 8) + lVar49 * 8) + 0x10) == *(long *)param_1))
            {
              puVar42 = *(undefined8 **)(*(long *)(this + 8) + (ulong)uVar53 * 8);
              *(undefined4 *)(puVar42 + 3) = 0;
              goto LAB_0010b7ec;
            }
            uVar54 = uVar54 + 1;
            auVar18._8_8_ = 0;
            auVar18._0_8_ = (ulong)(uVar53 + 1) * lVar43;
            auVar34._8_8_ = 0;
            auVar34._0_8_ = uVar45;
            lVar49 = SUB168(auVar18 * auVar34,8);
            uVar52 = *(uint *)(*(long *)(this + 0x10) + lVar49 * 4);
            uVar53 = SUB164(auVar18 * auVar34,8);
          } while ((uVar52 != 0) &&
                  (auVar19._8_8_ = 0, auVar19._0_8_ = (ulong)uVar52 * lVar43, auVar35._8_8_ = 0,
                  auVar35._0_8_ = uVar45, auVar20._8_8_ = 0,
                  auVar20._0_8_ = (ulong)((uVar38 + uVar53) - SUB164(auVar19 * auVar35,8)) * lVar43,
                  auVar36._8_8_ = 0, auVar36._0_8_ = uVar45, uVar54 <= SUB164(auVar20 * auVar36,8)))
          ;
        }
        iVar46 = *(int *)(this + 0x2c);
      }
      goto LAB_0010b823;
    }
    iVar46 = *(int *)(this + 0x2c);
    if (pvVar44 == (void *)0x0) goto LAB_0010b823;
    if (iVar46 != 0) goto LAB_0010bbf4;
LAB_0010b849:
    uVar38 = *(uint *)(this + 0x28);
    if (uVar38 == 0x1c) {
      puVar42 = (undefined8 *)0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_0010b7ec;
    }
    uVar40 = (ulong)(uVar38 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar39 = *(uint *)(hash_table_size_primes + (ulong)uVar38 * 4);
    if (uVar38 + 1 < 2) {
      uVar40 = 2;
    }
    uVar38 = *(uint *)(hash_table_size_primes + uVar40 * 4);
    uVar50 = (ulong)uVar38;
    *(int *)(this + 0x28) = (int)uVar40;
    pvVar44 = *(void **)(this + 8);
    uVar40 = uVar50 * 4;
    uVar45 = uVar50 * 8;
    pvVar3 = *(void **)(this + 0x10);
    uVar41 = Memory::alloc_static(uVar40,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    __s_00 = (void *)Memory::alloc_static(uVar45,false);
    *(void **)(this + 8) = __s_00;
    if (uVar38 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar45)) && (__s_00 < (void *)((long)__s + uVar40))) {
        uVar40 = 0;
        do {
          *(undefined4 *)((long)__s + uVar40 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar40 * 8) = 0;
          uVar40 = uVar40 + 1;
        } while (uVar40 != uVar50);
      }
      else {
        memset(__s,0,uVar40);
        memset(__s_00,0,uVar45);
      }
    }
    if (uVar39 != 0) {
      uVar40 = 0;
      do {
        uVar38 = *(uint *)((long)pvVar3 + uVar40 * 4);
        if (uVar38 != 0) {
          lVar43 = *(long *)(this + 0x10);
          uVar54 = 0;
          uVar52 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar45 = CONCAT44(0,uVar52);
          lVar49 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar9._8_8_ = 0;
          auVar9._0_8_ = (ulong)uVar38 * lVar49;
          auVar25._8_8_ = 0;
          auVar25._0_8_ = uVar45;
          lVar47 = SUB168(auVar9 * auVar25,8);
          puVar1 = (uint *)(lVar43 + lVar47 * 4);
          iVar46 = SUB164(auVar9 * auVar25,8);
          uVar53 = *puVar1;
          uVar41 = *(undefined8 *)((long)pvVar44 + uVar40 * 8);
          while (uVar53 != 0) {
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)uVar53 * lVar49;
            auVar26._8_8_ = 0;
            auVar26._0_8_ = uVar45;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = (ulong)((uVar52 + iVar46) - SUB164(auVar10 * auVar26,8)) * lVar49;
            auVar27._8_8_ = 0;
            auVar27._0_8_ = uVar45;
            uVar37 = SUB164(auVar11 * auVar27,8);
            uVar51 = uVar41;
            if (uVar37 < uVar54) {
              *puVar1 = uVar38;
              puVar42 = (undefined8 *)((long)__s_00 + lVar47 * 8);
              uVar51 = *puVar42;
              *puVar42 = uVar41;
              uVar38 = uVar53;
              uVar54 = uVar37;
            }
            uVar54 = uVar54 + 1;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = (ulong)(iVar46 + 1) * lVar49;
            auVar28._8_8_ = 0;
            auVar28._0_8_ = uVar45;
            lVar47 = SUB168(auVar12 * auVar28,8);
            puVar1 = (uint *)(lVar43 + lVar47 * 4);
            iVar46 = SUB164(auVar12 * auVar28,8);
            uVar41 = uVar51;
            uVar53 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar47 * 8) = uVar41;
          *puVar1 = uVar38;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar40 = uVar40 + 1;
      } while (uVar39 != uVar40);
      Memory::free_static(pvVar44,false);
      Memory::free_static(pvVar3,false);
    }
  }
  else {
    iVar46 = *(int *)(this + 0x2c);
    if (iVar46 != 0) {
      lVar49 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      if (*(long *)param_1 == 0) {
        uVar39 = StringName::get_empty_hash();
        lVar43 = *(long *)(this + 8);
      }
      else {
        uVar39 = *(uint *)(*(long *)param_1 + 0x20);
      }
      if (uVar39 == 0) {
        uVar39 = 1;
      }
      auVar5._8_8_ = 0;
      auVar5._0_8_ = (ulong)uVar39 * lVar49;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar40;
      lVar47 = SUB168(auVar5 * auVar21,8);
      uVar52 = *(uint *)(*(long *)(this + 0x10) + lVar47 * 4);
      uVar53 = SUB164(auVar5 * auVar21,8);
      if (uVar52 != 0) {
        uVar54 = 0;
        do {
          if ((uVar39 == uVar52) &&
             (*(long *)(*(long *)(lVar43 + lVar47 * 8) + 0x10) == *(long *)param_1)) {
            puVar42 = *(undefined8 **)(lVar43 + (ulong)uVar53 * 8);
            goto LAB_0010b7ec;
          }
          uVar54 = uVar54 + 1;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (ulong)(uVar53 + 1) * lVar49;
          auVar22._8_8_ = 0;
          auVar22._0_8_ = uVar40;
          lVar47 = SUB168(auVar6 * auVar22,8);
          uVar52 = *(uint *)(*(long *)(this + 0x10) + lVar47 * 4);
          uVar53 = SUB164(auVar6 * auVar22,8);
        } while ((uVar52 != 0) &&
                (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar52 * lVar49, auVar23._8_8_ = 0,
                auVar23._0_8_ = uVar40, auVar8._8_8_ = 0,
                auVar8._0_8_ = (ulong)((uVar53 + uVar38) - SUB164(auVar7 * auVar23,8)) * lVar49,
                auVar24._8_8_ = 0, auVar24._0_8_ = uVar40, uVar54 <= SUB164(auVar8 * auVar24,8)));
      }
      uVar40 = (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      if (lVar43 == 0) goto LAB_0010bd38;
LAB_0010bbe8:
      iVar46 = *(int *)(this + 0x2c);
      goto LAB_0010bbec;
    }
LAB_0010b823:
    if ((float)uVar40 * __LC18 < (float)(iVar46 + 1)) goto LAB_0010b849;
  }
  StringName::StringName((StringName *)&local_58,param_1);
  local_50 = 0;
  puVar42 = (undefined8 *)operator_new(0x20,"");
  *puVar42 = 0;
  puVar42[1] = 0;
  StringName::StringName((StringName *)(puVar42 + 2),(StringName *)&local_58);
  bVar56 = StringName::configured != '\0';
  *(undefined4 *)(puVar42 + 3) = local_50;
  if ((bVar56) && (local_58 != 0)) {
    StringName::unref();
  }
  puVar4 = *(undefined8 **)(this + 0x20);
  if (puVar4 == (undefined8 *)0x0) {
    lVar43 = *(long *)param_1;
    *(undefined8 **)(this + 0x18) = puVar42;
    *(undefined8 **)(this + 0x20) = puVar42;
    if (lVar43 == 0) goto LAB_0010bcfd;
LAB_0010bad4:
    uVar38 = *(uint *)(lVar43 + 0x20);
  }
  else {
    *puVar4 = puVar42;
    puVar42[1] = puVar4;
    lVar43 = *(long *)param_1;
    *(undefined8 **)(this + 0x20) = puVar42;
    if (lVar43 != 0) goto LAB_0010bad4;
LAB_0010bcfd:
    uVar38 = StringName::get_empty_hash();
  }
  if (uVar38 == 0) {
    uVar38 = 1;
  }
  uVar40 = (ulong)uVar38;
  lVar43 = *(long *)(this + 0x10);
  uVar53 = 0;
  lVar49 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar39 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar45 = CONCAT44(0,uVar39);
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar40 * lVar49;
  auVar29._8_8_ = 0;
  auVar29._0_8_ = uVar45;
  lVar48 = SUB168(auVar13 * auVar29,8);
  lVar47 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar43 + lVar48 * 4);
  iVar46 = SUB164(auVar13 * auVar29,8);
  uVar52 = *puVar1;
  puVar4 = puVar42;
  while (uVar52 != 0) {
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)uVar52 * lVar49;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar45;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)((uVar39 + iVar46) - SUB164(auVar14 * auVar30,8)) * lVar49;
    auVar31._8_8_ = 0;
    auVar31._0_8_ = uVar45;
    uVar38 = SUB164(auVar15 * auVar31,8);
    puVar55 = puVar4;
    if (uVar38 < uVar53) {
      *puVar1 = (uint)uVar40;
      uVar40 = (ulong)uVar52;
      puVar2 = (undefined8 *)(lVar47 + lVar48 * 8);
      puVar55 = (undefined8 *)*puVar2;
      *puVar2 = puVar4;
      uVar53 = uVar38;
    }
    uVar38 = (uint)uVar40;
    uVar53 = uVar53 + 1;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = (ulong)(iVar46 + 1) * lVar49;
    auVar32._8_8_ = 0;
    auVar32._0_8_ = uVar45;
    lVar48 = SUB168(auVar16 * auVar32,8);
    puVar1 = (uint *)(lVar43 + lVar48 * 4);
    iVar46 = SUB164(auVar16 * auVar32,8);
    puVar4 = puVar55;
    uVar52 = *puVar1;
  }
  *(undefined8 **)(lVar47 + lVar48 * 8) = puVar4;
  *puVar1 = uVar38;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_0010b7ec:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar42 + 3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Callable create_custom_callable_function_pointer<EditorProfiler>(EditorProfiler*, char const*,
   void (EditorProfiler::*)()) */

EditorProfiler *
create_custom_callable_function_pointer<EditorProfiler>
          (EditorProfiler *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC25;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_001149f8;
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



/* Callable create_custom_callable_function_pointer<EditorProfiler, int>(EditorProfiler*, char
   const*, void (EditorProfiler::*)(int)) */

EditorProfiler *
create_custom_callable_function_pointer<EditorProfiler,int>
          (EditorProfiler *param_1,char *param_2,_func_void_int *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC25;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00114b18;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_void_int **)(this + 0x20) = param_3 + 1;
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



/* EditorProfiler::get_class() const */

void EditorProfiler::get_class(void)

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



/* Object::is_class(String const&) const */

ulong __thiscall Object::is_class(Object *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *__s;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  long local_50;
  char *local_48;
  size_t local_40;
  long local_30;
  
  lVar2 = *(long *)(this + 8);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  do {
    if (lVar2 == 0) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar5 = String::operator==(param_1,"Object");
        return uVar5;
      }
LAB_0010c3d7:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    lVar3 = *(long *)(lVar2 + 0x20);
    if (lVar3 == 0) {
      local_50 = 0;
    }
    else {
      __s = *(char **)(lVar3 + 8);
      local_50 = 0;
      if (__s == (char *)0x0) {
        if (*(long *)(lVar3 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_50,(CowData *)(lVar3 + 0x10));
        }
      }
      else {
        local_40 = strlen(__s);
        local_48 = __s;
        String::parse_latin1((StrRange *)&local_50);
      }
    }
    uVar4 = String::operator==(param_1,(String *)&local_50);
    lVar3 = local_50;
    if (local_50 != 0) {
      LOCK();
      plVar1 = (long *)(local_50 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    if ((char)uVar4 != '\0') {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return (ulong)uVar4;
      }
      goto LAB_0010c3d7;
    }
    lVar2 = *(long *)(lVar2 + 8);
  } while( true );
}



/* CallableCustomMethodPointer<EditorProfiler, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorProfiler,void>::call
          (CallableCustomMethodPointer<EditorProfiler,void> *this,Variant **param_1,int param_2,
          Variant *param_3,CallError *param_4)

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
      goto LAB_0010c5cf;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_0010c5cf;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010c5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_0010c680;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0010c5cf:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC47,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0010c680:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<EditorProfiler, void, Ref<InputEvent> const&>::call(Variant const**,
   int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorProfiler,void,Ref<InputEvent>const&>::call
          (CallableCustomMethodPointer<EditorProfiler,void,Ref<InputEvent>const&> *this,
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
          goto LAB_0010c75e;
        }
        if (param_2 == 0) {
          *(undefined4 *)param_4 = 4;
          *(undefined4 *)(param_4 + 8) = 1;
          goto LAB_0010c75e;
        }
        *(undefined4 *)param_4 = 0;
        if (((ulong)pcVar10 & 1) != 0) {
          pcVar10 = *(code **)(pcVar10 + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar6 = Variant::can_convert_strict(*(undefined4 *)*param_1);
        uVar4 = _LC48;
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
LAB_0010c82d:
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
              if (pOVar5 != (Object *)0x0) goto LAB_0010c82d;
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
        goto LAB_0010c75e;
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
  _err_print_error(&_LC47,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (String *)&local_38,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
  CowData<char32_t>::_unref(local_48);
  CowData<char32_t>::_unref(local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
LAB_0010c75e:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<EditorProfiler, void, double>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorProfiler,void,double>::call
          (CallableCustomMethodPointer<EditorProfiler,void,double> *this,Variant **param_1,
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
      goto LAB_0010cbb6;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar6[1] == 0) goto LAB_0010cbb6;
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
        uVar3 = _LC49;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        Variant::operator_cast_to_double(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010cb65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2));
          return;
        }
        goto LAB_0010cc67;
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
LAB_0010cbb6:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC47,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0010cc67:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<EditorProfiler, void, int>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorProfiler,void,int>::call
          (CallableCustomMethodPointer<EditorProfiler,void,int> *this,Variant **param_1,int param_2,
          Variant *param_3,CallError *param_4)

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
      goto LAB_0010ce28;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar7[1] == 0) goto LAB_0010ce28;
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
        uVar3 = _LC50;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        iVar5 = Variant::operator_cast_to_int(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010cdd7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),iVar5);
          return;
        }
        goto LAB_0010ced9;
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
LAB_0010ce28:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC47,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0010ced9:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<EditorProfiler, void, bool>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorProfiler,void,bool>::call
          (CallableCustomMethodPointer<EditorProfiler,void,bool> *this,Variant **param_1,int param_2
          ,Variant *param_3,CallError *param_4)

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
      goto LAB_0010d099;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar6[1] == 0) goto LAB_0010d099;
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
        uVar3 = _LC51;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        bVar7 = Variant::operator_cast_to_bool(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010d048. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),bVar7);
          return;
        }
        goto LAB_0010d14a;
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
LAB_0010d099:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC47,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0010d14a:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Control::is_class(String const&) const */

undefined8 __thiscall Control::is_class(Control *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_0010d26b;
  }
  cVar5 = String::operator==(param_1,"Control");
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
      if (cVar5 != '\0') goto LAB_0010d26b;
    }
    cVar5 = String::operator==(param_1,"CanvasItem");
    if (cVar5 == '\0') {
      for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
        lVar4 = *(long *)(lVar2 + 0x20);
        if (lVar4 == 0) {
          local_58 = (char *)0x0;
        }
        else {
          local_58 = (char *)0x0;
          if (*(char **)(lVar4 + 8) == (char *)0x0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)(lVar4 + 0x10));
          }
          else {
            String::parse_latin1((String *)&local_58,*(char **)(lVar4 + 8));
          }
        }
        cVar5 = String::operator==(param_1,(String *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
        if (cVar5 != '\0') goto LAB_0010d26b;
      }
      cVar5 = String::operator==(param_1,"Node");
      if (cVar5 == '\0') {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar6 = Object::is_class((Object *)this,param_1);
          return uVar6;
        }
        goto LAB_0010d40e;
      }
    }
  }
LAB_0010d26b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010d40e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Container::is_class(String const&) const */

undefined8 __thiscall Container::is_class(Container *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_0010d51b;
  }
  cVar4 = String::operator==(param_1,"Container");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = Control::is_class((Control *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0010d51b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
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
    if (cVar5 != '\0') goto LAB_0010d67b;
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
      if (cVar5 != '\0') goto LAB_0010d67b;
    }
    cVar5 = String::operator==(param_1,"SplitContainer");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Container::is_class((Container *)this,param_1);
        return uVar6;
      }
      goto LAB_0010d77e;
    }
  }
LAB_0010d67b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010d77e:
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
              if ((code *)PTR__bind_methods_00119050 != Node::_bind_methods) {
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
            if ((code *)PTR__bind_compatibility_methods_00119040 !=
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
      if ((code *)PTR__bind_methods_00119048 != Container::_bind_methods) {
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
              if ((code *)PTR__bind_methods_00119050 != Node::_bind_methods) {
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
            if ((code *)PTR__bind_compatibility_methods_00119040 !=
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
      local_58 = "Container";
      local_60 = 0;
      local_50 = 9;
      String::parse_latin1((StrRange *)&local_60);
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
      if ((code *)PTR__bind_methods_00119058 != Container::_bind_methods) {
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
        if (pvVar3 == (void *)0x0) goto LAB_0010e44f;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_0010e44f:
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  return;
}



/* BoxContainer::is_class(String const&) const */

undefined8 __thiscall BoxContainer::is_class(BoxContainer *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_0010e5ab;
  }
  cVar5 = String::operator==(param_1,"BoxContainer");
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
      if (cVar5 != '\0') goto LAB_0010e5ab;
    }
    cVar5 = String::operator==(param_1,"Container");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Control::is_class((Control *)this,param_1);
        return uVar6;
      }
      goto LAB_0010e6ae;
    }
  }
LAB_0010e5ab:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010e6ae:
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
    if (cVar4 != '\0') goto LAB_0010e7bb;
  }
  cVar4 = String::operator==(param_1,"HBoxContainer");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = BoxContainer::is_class((BoxContainer *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0010e7bb:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorProfiler::is_class(String const&) const */

undefined8 __thiscall EditorProfiler::is_class(EditorProfiler *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_0010e91b;
  }
  cVar5 = String::operator==(param_1,"EditorProfiler");
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
      if (cVar5 != '\0') goto LAB_0010e91b;
    }
    cVar5 = String::operator==(param_1,"VBoxContainer");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = BoxContainer::is_class((BoxContainer *)this,param_1);
        return uVar6;
      }
      goto LAB_0010ea1e;
    }
  }
LAB_0010e91b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010ea1e:
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
  local_78 = &_LC54;
  local_88 = 0;
  local_90 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = &_LC54;
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
      goto LAB_0010ed2c;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010ed2c:
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
      goto LAB_0010ef91;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010ef91:
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
  if ((code *)PTR__get_property_list_00119060 != Object::_get_property_list) {
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
      goto LAB_0010f261;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010f261:
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
  if ((code *)PTR__get_property_list_00119068 != CanvasItem::_get_property_list) {
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
      goto LAB_0010f531;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010f531:
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
      goto LAB_0010f7e1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010f7e1:
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
      goto LAB_0010fa91;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010fa91:
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



/* EditorProfiler::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall EditorProfiler::_get_property_listv(EditorProfiler *this,List *param_1,bool param_2)

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
    VBoxContainer::_get_property_listv((VBoxContainer *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "EditorProfiler";
  local_70 = 0xe;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorProfiler";
  local_98 = 0;
  local_70 = 0xe;
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
      goto LAB_0010fd41;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010fd41:
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
  StringName::StringName((StringName *)&local_78,"EditorProfiler",false);
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
      goto LAB_0010fff1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010fff1:
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
  local_78 = "SplitContainer";
  local_70 = 0xe;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "SplitContainer";
  local_98 = 0;
  local_70 = 0xe;
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
      goto LAB_001102a1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001102a1:
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
      goto LAB_00110551;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00110551:
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



/* EditorProfiler::_initialize_classv() */

void EditorProfiler::_initialize_classv(void)

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
                if ((code *)PTR__bind_methods_00119050 != Node::_bind_methods) {
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
              if ((code *)PTR__bind_compatibility_methods_00119040 !=
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
        if ((code *)PTR__bind_methods_00119048 != Container::_bind_methods) {
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
    local_68 = 0;
    local_50 = 0xd;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "EditorProfiler";
    local_70 = 0;
    local_50 = 0xe;
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



/* HashMap<StringName, EditorProfiler::Metric::Category*, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   EditorProfiler::Metric::Category*> > >::_lookup_pos(StringName const&, unsigned int&) const */

undefined8 __thiscall
HashMap<StringName,EditorProfiler::Metric::Category*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorProfiler::Metric::Category*>>>
::_lookup_pos(HashMap<StringName,EditorProfiler::Metric::Category*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorProfiler::Metric::Category*>>>
              *this,StringName *param_1,uint *param_2)

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
  uint uVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  
  if (*(long *)(this + 8) == 0) {
    return 0;
  }
  if (*(int *)(this + 0x2c) != 0) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    if (*(long *)param_1 == 0) {
      uVar11 = StringName::get_empty_hash();
    }
    else {
      uVar11 = *(uint *)(*(long *)param_1 + 0x20);
    }
    uVar15 = CONCAT44(0,uVar1);
    if (uVar11 == 0) {
      uVar11 = 1;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (ulong)uVar11 * lVar2;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar15;
    lVar13 = SUB168(auVar3 * auVar7,8);
    uVar14 = *(uint *)(*(long *)(this + 0x10) + lVar13 * 4);
    uVar12 = SUB164(auVar3 * auVar7,8);
    if (uVar14 != 0) {
      uVar16 = 0;
      do {
        if ((uVar11 == uVar14) &&
           (*(long *)(*(long *)(*(long *)(this + 8) + lVar13 * 8) + 0x10) == *(long *)param_1)) {
          *param_2 = uVar12;
          return 1;
        }
        uVar16 = uVar16 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(uVar12 + 1) * lVar2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar15;
        lVar13 = SUB168(auVar4 * auVar8,8);
        uVar14 = *(uint *)(*(long *)(this + 0x10) + lVar13 * 4);
        uVar12 = SUB164(auVar4 * auVar8,8);
      } while ((uVar14 != 0) &&
              (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar14 * lVar2, auVar9._8_8_ = 0,
              auVar9._0_8_ = uVar15, auVar6._8_8_ = 0,
              auVar6._0_8_ = (ulong)((uVar1 + uVar12) - SUB164(auVar5 * auVar9,8)) * lVar2,
              auVar10._8_8_ = 0, auVar10._0_8_ = uVar15, uVar16 <= SUB164(auVar6 * auVar10,8)));
    }
  }
  return 0;
}



/* HashMap<StringName, EditorProfiler::Metric::Category::Item*, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   EditorProfiler::Metric::Category::Item*> > >::_lookup_pos(StringName const&, unsigned int&) const
    */

undefined8 __thiscall
HashMap<StringName,EditorProfiler::Metric::Category::Item*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorProfiler::Metric::Category::Item*>>>
::_lookup_pos(HashMap<StringName,EditorProfiler::Metric::Category::Item*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorProfiler::Metric::Category::Item*>>>
              *this,StringName *param_1,uint *param_2)

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
  uint uVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  
  if (*(long *)(this + 8) == 0) {
    return 0;
  }
  if (*(int *)(this + 0x2c) != 0) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    if (*(long *)param_1 == 0) {
      uVar11 = StringName::get_empty_hash();
    }
    else {
      uVar11 = *(uint *)(*(long *)param_1 + 0x20);
    }
    uVar15 = CONCAT44(0,uVar1);
    if (uVar11 == 0) {
      uVar11 = 1;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (ulong)uVar11 * lVar2;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar15;
    lVar13 = SUB168(auVar3 * auVar7,8);
    uVar14 = *(uint *)(*(long *)(this + 0x10) + lVar13 * 4);
    uVar12 = SUB164(auVar3 * auVar7,8);
    if (uVar14 != 0) {
      uVar16 = 0;
      do {
        if ((uVar11 == uVar14) &&
           (*(long *)(*(long *)(*(long *)(this + 8) + lVar13 * 8) + 0x10) == *(long *)param_1)) {
          *param_2 = uVar12;
          return 1;
        }
        uVar16 = uVar16 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(uVar12 + 1) * lVar2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar15;
        lVar13 = SUB168(auVar4 * auVar8,8);
        uVar14 = *(uint *)(*(long *)(this + 0x10) + lVar13 * 4);
        uVar12 = SUB164(auVar4 * auVar8,8);
      } while ((uVar14 != 0) &&
              (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar14 * lVar2, auVar9._8_8_ = 0,
              auVar9._0_8_ = uVar15, auVar6._8_8_ = 0,
              auVar6._0_8_ = (ulong)((uVar1 + uVar12) - SUB164(auVar5 * auVar9,8)) * lVar2,
              auVar10._8_8_ = 0, auVar10._0_8_ = uVar15, uVar16 <= SUB164(auVar6 * auVar10,8)));
    }
  }
  return 0;
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



/* HashMap<StringName, EditorProfiler::Metric::Category*, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   EditorProfiler::Metric::Category*> > >::_resize_and_rehash(unsigned int) */

void __thiscall
HashMap<StringName,EditorProfiler::Metric::Category*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorProfiler::Metric::Category*>>>
::_resize_and_rehash
          (HashMap<StringName,EditorProfiler::Metric::Category*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorProfiler::Metric::Category*>>>
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
/* HashMap<StringName, EditorProfiler::Metric::Category*, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   EditorProfiler::Metric::Category*> > >::operator[](StringName const&) */

undefined8 * __thiscall
HashMap<StringName,EditorProfiler::Metric::Category*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorProfiler::Metric::Category*>>>
::operator[](HashMap<StringName,EditorProfiler::Metric::Category*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorProfiler::Metric::Category*>>>
             *this,StringName *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  void *__s;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  char cVar16;
  uint uVar17;
  undefined8 *puVar18;
  long lVar19;
  undefined8 uVar20;
  void *__s_00;
  int iVar21;
  long lVar22;
  uint uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  undefined8 *puVar27;
  long in_FS_OFFSET;
  bool bVar28;
  uint local_98;
  uint local_70;
  uint local_6c;
  undefined1 local_68 [16];
  long local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = 0;
  cVar16 = _lookup_pos(this,param_1,&local_70);
  if (cVar16 != '\0') {
    puVar18 = *(undefined8 **)(*(long *)(this + 8) + (ulong)local_70 * 8);
    goto LAB_00111988;
  }
  uVar17 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  if (*(long *)(this + 8) == 0) {
    uVar26 = (ulong)uVar17;
    uVar25 = uVar26 * 4;
    uVar24 = uVar26 * 8;
    uVar20 = Memory::alloc_static(uVar25,false);
    *(undefined8 *)(this + 0x10) = uVar20;
    __s_00 = (void *)Memory::alloc_static(uVar24,false);
    *(void **)(this + 8) = __s_00;
    if (uVar17 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar24)) && (__s_00 < (void *)((long)__s + uVar25))) {
        uVar25 = 0;
        do {
          *(undefined4 *)((long)__s + uVar25 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar25 * 8) = 0;
          uVar25 = uVar25 + 1;
        } while (uVar26 != uVar25);
      }
      else {
        memset(__s,0,uVar25);
        memset(__s_00,0,uVar24);
      }
    }
  }
  local_6c = 0;
  cVar16 = _lookup_pos(this,param_1,&local_6c);
  if (cVar16 != '\0') {
    puVar18 = *(undefined8 **)(*(long *)(this + 8) + (ulong)local_6c * 8);
    puVar18[3] = 0;
    goto LAB_00111988;
  }
  if ((float)uVar17 * __LC18 < (float)(*(int *)(this + 0x2c) + 1)) {
    if (*(int *)(this + 0x28) == 0x1c) {
      puVar18 = (undefined8 *)0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_00111988;
    }
    _resize_and_rehash(this,*(int *)(this + 0x28) + 1);
  }
  local_68 = (undefined1  [16])0x0;
  StringName::StringName((StringName *)&local_58,param_1);
  local_50 = 0;
  puVar18 = (undefined8 *)operator_new(0x20,"");
  *puVar18 = local_68._0_8_;
  puVar18[1] = local_68._8_8_;
  StringName::StringName((StringName *)(puVar18 + 2),(StringName *)&local_58);
  bVar28 = StringName::configured != '\0';
  puVar18[3] = local_50;
  if ((bVar28) && (local_58 != 0)) {
    StringName::unref();
  }
  puVar5 = *(undefined8 **)(this + 0x20);
  if (puVar5 == (undefined8 *)0x0) {
    lVar19 = *(long *)param_1;
    *(undefined8 **)(this + 0x18) = puVar18;
    *(undefined8 **)(this + 0x20) = puVar18;
    if (lVar19 == 0) goto LAB_001119dd;
LAB_0011187c:
    uVar17 = *(uint *)(lVar19 + 0x20);
  }
  else {
    *puVar5 = puVar18;
    puVar18[1] = puVar5;
    lVar19 = *(long *)param_1;
    *(undefined8 **)(this + 0x20) = puVar18;
    if (lVar19 != 0) goto LAB_0011187c;
LAB_001119dd:
    uVar17 = StringName::get_empty_hash();
  }
  lVar19 = *(long *)(this + 0x10);
  if (uVar17 == 0) {
    uVar17 = 1;
  }
  uVar25 = (ulong)uVar17;
  uVar23 = 0;
  lVar6 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar24 = CONCAT44(0,uVar3);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar25 * lVar6;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar24;
  lVar22 = SUB168(auVar8 * auVar12,8);
  lVar7 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar19 + lVar22 * 4);
  iVar21 = SUB164(auVar8 * auVar12,8);
  uVar4 = *puVar1;
  puVar5 = puVar18;
  while (uVar4 != 0) {
    auVar9._8_8_ = 0;
    auVar9._0_8_ = (ulong)uVar4 * lVar6;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = uVar24;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = (ulong)((uVar3 + iVar21) - SUB164(auVar9 * auVar13,8)) * lVar6;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = uVar24;
    local_98 = SUB164(auVar10 * auVar14,8);
    puVar27 = puVar5;
    if (local_98 < uVar23) {
      *puVar1 = (uint)uVar25;
      uVar25 = (ulong)uVar4;
      puVar2 = (undefined8 *)(lVar7 + lVar22 * 8);
      puVar27 = (undefined8 *)*puVar2;
      *puVar2 = puVar5;
      uVar23 = local_98;
    }
    uVar17 = (uint)uVar25;
    uVar23 = uVar23 + 1;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = (ulong)(iVar21 + 1) * lVar6;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = uVar24;
    lVar22 = SUB168(auVar11 * auVar15,8);
    puVar1 = (uint *)(lVar19 + lVar22 * 4);
    iVar21 = SUB164(auVar11 * auVar15,8);
    puVar5 = puVar27;
    uVar4 = *puVar1;
  }
  *(undefined8 **)(lVar7 + lVar22 * 8) = puVar5;
  *puVar1 = uVar17;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_00111988:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar18 + 3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<StringName, EditorProfiler::Metric::Category*, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   EditorProfiler::Metric::Category*> > >::insert(StringName const&,
   EditorProfiler::Metric::Category* const&, bool) */

StringName *
HashMap<StringName,EditorProfiler::Metric::Category*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorProfiler::Metric::Category*>>>
::insert(StringName *param_1,Category **param_2,bool param_3)

{
  Category *pCVar1;
  uint uVar2;
  Category *pCVar3;
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
  ulong uVar20;
  Category *pCVar21;
  uint uVar22;
  uint uVar23;
  long lVar24;
  Category *pCVar25;
  long *in_RCX;
  uint uVar26;
  int iVar27;
  undefined7 in_register_00000011;
  StringName *pSVar28;
  long lVar29;
  ulong uVar30;
  char in_R8B;
  uint uVar31;
  ulong uVar32;
  uint uVar33;
  Category *pCVar34;
  long in_FS_OFFSET;
  bool bVar35;
  Category *local_80;
  long local_58;
  long local_50;
  long local_40;
  
  pSVar28 = (StringName *)CONCAT71(in_register_00000011,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar22 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 5) * 4);
  if (param_2[1] == (Category *)0x0) {
    uVar20 = (ulong)uVar22;
    uVar30 = uVar20 * 4;
    uVar32 = uVar20 * 8;
    pCVar25 = (Category *)Memory::alloc_static(uVar30,false);
    param_2[2] = pCVar25;
    pCVar25 = (Category *)Memory::alloc_static(uVar32,false);
    param_2[1] = pCVar25;
    if (uVar22 != 0) {
      pCVar1 = param_2[2];
      if ((pCVar1 < pCVar25 + uVar32) && (pCVar25 < pCVar1 + uVar30)) {
        uVar30 = 0;
        do {
          *(undefined4 *)(pCVar1 + uVar30 * 4) = 0;
          *(undefined8 *)(pCVar25 + uVar30 * 8) = 0;
          uVar30 = uVar30 + 1;
        } while (uVar20 != uVar30);
      }
      else {
        memset(pCVar1,0,uVar30);
        memset(pCVar25,0,uVar32);
      }
      goto LAB_00111b22;
    }
    iVar27 = *(int *)((long)param_2 + 0x2c);
    if (pCVar25 == (Category *)0x0) goto LAB_00111c49;
    if (*(int *)((long)param_2 + 0x2c) != 0) goto LAB_00111b2e;
LAB_00111c6b:
    if (*(int *)(param_2 + 5) == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      local_80 = (Category *)0x0;
      goto LAB_00111c01;
    }
    _resize_and_rehash((HashMap<StringName,EditorProfiler::Metric::Category*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorProfiler::Metric::Category*>>>
                        *)param_2,*(int *)(param_2 + 5) + 1);
  }
  else {
LAB_00111b22:
    iVar27 = *(int *)((long)param_2 + 0x2c);
    if (iVar27 != 0) {
LAB_00111b2e:
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 5) * 4);
      uVar30 = CONCAT44(0,uVar2);
      lVar24 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 5) * 8);
      if (*(long *)pSVar28 == 0) {
        uVar23 = StringName::get_empty_hash();
      }
      else {
        uVar23 = *(uint *)(*(long *)pSVar28 + 0x20);
      }
      if (uVar23 == 0) {
        uVar23 = 1;
      }
      uVar33 = 0;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = (ulong)uVar23 * lVar24;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = uVar30;
      lVar29 = SUB168(auVar4 * auVar12,8);
      uVar31 = *(uint *)(param_2[2] + lVar29 * 4);
      uVar26 = SUB164(auVar4 * auVar12,8);
      if (uVar31 != 0) {
        do {
          if ((uVar23 == uVar31) &&
             (*(long *)(*(long *)(param_2[1] + lVar29 * 8) + 0x10) == *(long *)pSVar28)) {
            local_80 = *(Category **)(param_2[1] + (ulong)uVar26 * 8);
            *(long *)(local_80 + 0x18) = *in_RCX;
            goto LAB_00111c01;
          }
          uVar33 = uVar33 + 1;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = (ulong)(uVar26 + 1) * lVar24;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = uVar30;
          lVar29 = SUB168(auVar5 * auVar13,8);
          uVar31 = *(uint *)(param_2[2] + lVar29 * 4);
          uVar26 = SUB164(auVar5 * auVar13,8);
        } while ((uVar31 != 0) &&
                (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar31 * lVar24, auVar14._8_8_ = 0,
                auVar14._0_8_ = uVar30, auVar7._8_8_ = 0,
                auVar7._0_8_ = (ulong)((uVar2 + uVar26) - SUB164(auVar6 * auVar14,8)) * lVar24,
                auVar15._8_8_ = 0, auVar15._0_8_ = uVar30, uVar33 <= SUB164(auVar7 * auVar15,8)));
      }
      iVar27 = *(int *)((long)param_2 + 0x2c);
    }
LAB_00111c49:
    if ((float)uVar22 * __LC18 < (float)(iVar27 + 1)) goto LAB_00111c6b;
  }
  StringName::StringName((StringName *)&local_58,pSVar28);
  local_50 = *in_RCX;
  local_80 = (Category *)operator_new(0x20,"");
  *(long *)local_80 = 0;
  *(long *)(local_80 + 8) = 0;
  StringName::StringName((StringName *)(local_80 + 0x10),(StringName *)&local_58);
  bVar35 = StringName::configured != '\0';
  *(long *)(local_80 + 0x18) = local_50;
  if ((bVar35) && (local_58 != 0)) {
    StringName::unref();
  }
  pCVar25 = param_2[4];
  if (pCVar25 == (Category *)0x0) {
    param_2[3] = local_80;
    param_2[4] = local_80;
LAB_00111d24:
    lVar24 = *(long *)pSVar28;
    if (lVar24 != 0) goto LAB_00111d31;
LAB_00111e2d:
    uVar22 = StringName::get_empty_hash();
  }
  else {
    if (in_R8B != '\0') {
      pCVar25 = param_2[3];
      *(Category **)(pCVar25 + 8) = local_80;
      *(Category **)local_80 = pCVar25;
      param_2[3] = local_80;
      goto LAB_00111d24;
    }
    *(Category **)pCVar25 = local_80;
    *(Category **)(local_80 + 8) = pCVar25;
    lVar24 = *(long *)pSVar28;
    param_2[4] = local_80;
    if (lVar24 == 0) goto LAB_00111e2d;
LAB_00111d31:
    uVar22 = *(uint *)(lVar24 + 0x20);
  }
  pCVar25 = param_2[2];
  if (uVar22 == 0) {
    uVar22 = 1;
  }
  uVar30 = (ulong)uVar22;
  uVar31 = 0;
  lVar24 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 5) * 8);
  uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 5) * 4);
  uVar32 = CONCAT44(0,uVar2);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar30 * lVar24;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = uVar32;
  lVar29 = SUB168(auVar8 * auVar16,8);
  pCVar3 = param_2[1];
  pCVar1 = pCVar25 + lVar29 * 4;
  iVar27 = SUB164(auVar8 * auVar16,8);
  uVar23 = *(uint *)pCVar1;
  pCVar21 = local_80;
  while (uVar23 != 0) {
    auVar9._8_8_ = 0;
    auVar9._0_8_ = (ulong)uVar23 * lVar24;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = uVar32;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = (ulong)((uVar2 + iVar27) - SUB164(auVar9 * auVar17,8)) * lVar24;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = uVar32;
    uVar22 = SUB164(auVar10 * auVar18,8);
    pCVar34 = pCVar21;
    if (uVar22 < uVar31) {
      *(uint *)pCVar1 = (uint)uVar30;
      uVar30 = (ulong)uVar23;
      pCVar1 = pCVar3 + lVar29 * 8;
      pCVar34 = *(Category **)pCVar1;
      *(Category **)pCVar1 = pCVar21;
      uVar31 = uVar22;
    }
    uVar22 = (uint)uVar30;
    uVar31 = uVar31 + 1;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = (ulong)(iVar27 + 1) * lVar24;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar32;
    lVar29 = SUB168(auVar11 * auVar19,8);
    pCVar1 = pCVar25 + lVar29 * 4;
    iVar27 = SUB164(auVar11 * auVar19,8);
    pCVar21 = pCVar34;
    uVar23 = *(uint *)pCVar1;
  }
  *(Category **)(pCVar3 + lVar29 * 8) = pCVar21;
  *(uint *)pCVar1 = uVar22;
  *(int *)((long)param_2 + 0x2c) = *(int *)((long)param_2 + 0x2c) + 1;
LAB_00111c01:
  *(Category **)param_1 = local_80;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HashMap<StringName, EditorProfiler::Metric::Category::Item*, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   EditorProfiler::Metric::Category::Item*> > >::_resize_and_rehash(unsigned int) */

void __thiscall
HashMap<StringName,EditorProfiler::Metric::Category::Item*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorProfiler::Metric::Category::Item*>>>
::_resize_and_rehash
          (HashMap<StringName,EditorProfiler::Metric::Category::Item*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorProfiler::Metric::Category::Item*>>>
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
/* HashMap<StringName, EditorProfiler::Metric::Category::Item*, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   EditorProfiler::Metric::Category::Item*> > >::operator[](StringName const&) */

undefined8 * __thiscall
HashMap<StringName,EditorProfiler::Metric::Category::Item*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorProfiler::Metric::Category::Item*>>>
::operator[](HashMap<StringName,EditorProfiler::Metric::Category::Item*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorProfiler::Metric::Category::Item*>>>
             *this,StringName *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  void *__s;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  char cVar16;
  uint uVar17;
  undefined8 *puVar18;
  long lVar19;
  undefined8 uVar20;
  void *__s_00;
  int iVar21;
  long lVar22;
  uint uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  undefined8 *puVar27;
  long in_FS_OFFSET;
  bool bVar28;
  uint local_98;
  uint local_70;
  uint local_6c;
  undefined1 local_68 [16];
  long local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = 0;
  cVar16 = _lookup_pos(this,param_1,&local_70);
  if (cVar16 != '\0') {
    puVar18 = *(undefined8 **)(*(long *)(this + 8) + (ulong)local_70 * 8);
    goto LAB_00112418;
  }
  uVar17 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  if (*(long *)(this + 8) == 0) {
    uVar26 = (ulong)uVar17;
    uVar25 = uVar26 * 4;
    uVar24 = uVar26 * 8;
    uVar20 = Memory::alloc_static(uVar25,false);
    *(undefined8 *)(this + 0x10) = uVar20;
    __s_00 = (void *)Memory::alloc_static(uVar24,false);
    *(void **)(this + 8) = __s_00;
    if (uVar17 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar24)) && (__s_00 < (void *)((long)__s + uVar25))) {
        uVar25 = 0;
        do {
          *(undefined4 *)((long)__s + uVar25 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar25 * 8) = 0;
          uVar25 = uVar25 + 1;
        } while (uVar26 != uVar25);
      }
      else {
        memset(__s,0,uVar25);
        memset(__s_00,0,uVar24);
      }
    }
  }
  local_6c = 0;
  cVar16 = _lookup_pos(this,param_1,&local_6c);
  if (cVar16 != '\0') {
    puVar18 = *(undefined8 **)(*(long *)(this + 8) + (ulong)local_6c * 8);
    puVar18[3] = 0;
    goto LAB_00112418;
  }
  if ((float)uVar17 * __LC18 < (float)(*(int *)(this + 0x2c) + 1)) {
    if (*(int *)(this + 0x28) == 0x1c) {
      puVar18 = (undefined8 *)0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_00112418;
    }
    _resize_and_rehash(this,*(int *)(this + 0x28) + 1);
  }
  local_68 = (undefined1  [16])0x0;
  StringName::StringName((StringName *)&local_58,param_1);
  local_50 = 0;
  puVar18 = (undefined8 *)operator_new(0x20,"");
  *puVar18 = local_68._0_8_;
  puVar18[1] = local_68._8_8_;
  StringName::StringName((StringName *)(puVar18 + 2),(StringName *)&local_58);
  bVar28 = StringName::configured != '\0';
  puVar18[3] = local_50;
  if ((bVar28) && (local_58 != 0)) {
    StringName::unref();
  }
  puVar5 = *(undefined8 **)(this + 0x20);
  if (puVar5 == (undefined8 *)0x0) {
    lVar19 = *(long *)param_1;
    *(undefined8 **)(this + 0x18) = puVar18;
    *(undefined8 **)(this + 0x20) = puVar18;
    if (lVar19 == 0) goto LAB_0011246d;
LAB_0011230c:
    uVar17 = *(uint *)(lVar19 + 0x20);
  }
  else {
    *puVar5 = puVar18;
    puVar18[1] = puVar5;
    lVar19 = *(long *)param_1;
    *(undefined8 **)(this + 0x20) = puVar18;
    if (lVar19 != 0) goto LAB_0011230c;
LAB_0011246d:
    uVar17 = StringName::get_empty_hash();
  }
  lVar19 = *(long *)(this + 0x10);
  if (uVar17 == 0) {
    uVar17 = 1;
  }
  uVar25 = (ulong)uVar17;
  uVar23 = 0;
  lVar6 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar24 = CONCAT44(0,uVar3);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar25 * lVar6;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar24;
  lVar22 = SUB168(auVar8 * auVar12,8);
  lVar7 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar19 + lVar22 * 4);
  iVar21 = SUB164(auVar8 * auVar12,8);
  uVar4 = *puVar1;
  puVar5 = puVar18;
  while (uVar4 != 0) {
    auVar9._8_8_ = 0;
    auVar9._0_8_ = (ulong)uVar4 * lVar6;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = uVar24;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = (ulong)((uVar3 + iVar21) - SUB164(auVar9 * auVar13,8)) * lVar6;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = uVar24;
    local_98 = SUB164(auVar10 * auVar14,8);
    puVar27 = puVar5;
    if (local_98 < uVar23) {
      *puVar1 = (uint)uVar25;
      uVar25 = (ulong)uVar4;
      puVar2 = (undefined8 *)(lVar7 + lVar22 * 8);
      puVar27 = (undefined8 *)*puVar2;
      *puVar2 = puVar5;
      uVar23 = local_98;
    }
    uVar17 = (uint)uVar25;
    uVar23 = uVar23 + 1;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = (ulong)(iVar21 + 1) * lVar6;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = uVar24;
    lVar22 = SUB168(auVar11 * auVar15,8);
    puVar1 = (uint *)(lVar19 + lVar22 * 4);
    iVar21 = SUB164(auVar11 * auVar15,8);
    puVar5 = puVar27;
    uVar4 = *puVar1;
  }
  *(undefined8 **)(lVar7 + lVar22 * 8) = puVar5;
  *puVar1 = uVar17;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_00112418:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar18 + 3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<StringName, EditorProfiler::Metric::Category::Item*, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   EditorProfiler::Metric::Category::Item*> > >::insert(StringName const&,
   EditorProfiler::Metric::Category::Item* const&, bool) */

StringName *
HashMap<StringName,EditorProfiler::Metric::Category::Item*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorProfiler::Metric::Category::Item*>>>
::insert(StringName *param_1,Item **param_2,bool param_3)

{
  Item *pIVar1;
  uint uVar2;
  Item *pIVar3;
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
  ulong uVar20;
  Item *pIVar21;
  uint uVar22;
  uint uVar23;
  long lVar24;
  Item *pIVar25;
  long *in_RCX;
  uint uVar26;
  int iVar27;
  undefined7 in_register_00000011;
  StringName *pSVar28;
  long lVar29;
  ulong uVar30;
  char in_R8B;
  uint uVar31;
  ulong uVar32;
  uint uVar33;
  Item *pIVar34;
  long in_FS_OFFSET;
  bool bVar35;
  Item *local_80;
  long local_58;
  long local_50;
  long local_40;
  
  pSVar28 = (StringName *)CONCAT71(in_register_00000011,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar22 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 5) * 4);
  if (param_2[1] == (Item *)0x0) {
    uVar20 = (ulong)uVar22;
    uVar30 = uVar20 * 4;
    uVar32 = uVar20 * 8;
    pIVar25 = (Item *)Memory::alloc_static(uVar30,false);
    param_2[2] = pIVar25;
    pIVar25 = (Item *)Memory::alloc_static(uVar32,false);
    param_2[1] = pIVar25;
    if (uVar22 != 0) {
      pIVar1 = param_2[2];
      if ((pIVar1 < pIVar25 + uVar32) && (pIVar25 < pIVar1 + uVar30)) {
        uVar30 = 0;
        do {
          *(undefined4 *)(pIVar1 + uVar30 * 4) = 0;
          *(undefined8 *)(pIVar25 + uVar30 * 8) = 0;
          uVar30 = uVar30 + 1;
        } while (uVar20 != uVar30);
      }
      else {
        memset(pIVar1,0,uVar30);
        memset(pIVar25,0,uVar32);
      }
      goto LAB_001125b2;
    }
    iVar27 = *(int *)((long)param_2 + 0x2c);
    if (pIVar25 == (Item *)0x0) goto LAB_001126d9;
    if (*(int *)((long)param_2 + 0x2c) != 0) goto LAB_001125be;
LAB_001126fb:
    if (*(int *)(param_2 + 5) == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      local_80 = (Item *)0x0;
      goto LAB_00112691;
    }
    _resize_and_rehash((HashMap<StringName,EditorProfiler::Metric::Category::Item*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorProfiler::Metric::Category::Item*>>>
                        *)param_2,*(int *)(param_2 + 5) + 1);
  }
  else {
LAB_001125b2:
    iVar27 = *(int *)((long)param_2 + 0x2c);
    if (iVar27 != 0) {
LAB_001125be:
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 5) * 4);
      uVar30 = CONCAT44(0,uVar2);
      lVar24 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 5) * 8);
      if (*(long *)pSVar28 == 0) {
        uVar23 = StringName::get_empty_hash();
      }
      else {
        uVar23 = *(uint *)(*(long *)pSVar28 + 0x20);
      }
      if (uVar23 == 0) {
        uVar23 = 1;
      }
      uVar33 = 0;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = (ulong)uVar23 * lVar24;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = uVar30;
      lVar29 = SUB168(auVar4 * auVar12,8);
      uVar31 = *(uint *)(param_2[2] + lVar29 * 4);
      uVar26 = SUB164(auVar4 * auVar12,8);
      if (uVar31 != 0) {
        do {
          if ((uVar23 == uVar31) &&
             (*(long *)(*(long *)(param_2[1] + lVar29 * 8) + 0x10) == *(long *)pSVar28)) {
            local_80 = *(Item **)(param_2[1] + (ulong)uVar26 * 8);
            *(long *)(local_80 + 0x18) = *in_RCX;
            goto LAB_00112691;
          }
          uVar33 = uVar33 + 1;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = (ulong)(uVar26 + 1) * lVar24;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = uVar30;
          lVar29 = SUB168(auVar5 * auVar13,8);
          uVar31 = *(uint *)(param_2[2] + lVar29 * 4);
          uVar26 = SUB164(auVar5 * auVar13,8);
        } while ((uVar31 != 0) &&
                (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar31 * lVar24, auVar14._8_8_ = 0,
                auVar14._0_8_ = uVar30, auVar7._8_8_ = 0,
                auVar7._0_8_ = (ulong)((uVar2 + uVar26) - SUB164(auVar6 * auVar14,8)) * lVar24,
                auVar15._8_8_ = 0, auVar15._0_8_ = uVar30, uVar33 <= SUB164(auVar7 * auVar15,8)));
      }
      iVar27 = *(int *)((long)param_2 + 0x2c);
    }
LAB_001126d9:
    if ((float)uVar22 * __LC18 < (float)(iVar27 + 1)) goto LAB_001126fb;
  }
  StringName::StringName((StringName *)&local_58,pSVar28);
  local_50 = *in_RCX;
  local_80 = (Item *)operator_new(0x20,"");
  *(long *)local_80 = 0;
  *(long *)(local_80 + 8) = 0;
  StringName::StringName((StringName *)(local_80 + 0x10),(StringName *)&local_58);
  bVar35 = StringName::configured != '\0';
  *(long *)(local_80 + 0x18) = local_50;
  if ((bVar35) && (local_58 != 0)) {
    StringName::unref();
  }
  pIVar25 = param_2[4];
  if (pIVar25 == (Item *)0x0) {
    param_2[3] = local_80;
    param_2[4] = local_80;
LAB_001127b4:
    lVar24 = *(long *)pSVar28;
    if (lVar24 != 0) goto LAB_001127c1;
LAB_001128bd:
    uVar22 = StringName::get_empty_hash();
  }
  else {
    if (in_R8B != '\0') {
      pIVar25 = param_2[3];
      *(Item **)(pIVar25 + 8) = local_80;
      *(Item **)local_80 = pIVar25;
      param_2[3] = local_80;
      goto LAB_001127b4;
    }
    *(Item **)pIVar25 = local_80;
    *(Item **)(local_80 + 8) = pIVar25;
    lVar24 = *(long *)pSVar28;
    param_2[4] = local_80;
    if (lVar24 == 0) goto LAB_001128bd;
LAB_001127c1:
    uVar22 = *(uint *)(lVar24 + 0x20);
  }
  pIVar25 = param_2[2];
  if (uVar22 == 0) {
    uVar22 = 1;
  }
  uVar30 = (ulong)uVar22;
  uVar31 = 0;
  lVar24 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 5) * 8);
  uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 5) * 4);
  uVar32 = CONCAT44(0,uVar2);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar30 * lVar24;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = uVar32;
  lVar29 = SUB168(auVar8 * auVar16,8);
  pIVar3 = param_2[1];
  pIVar1 = pIVar25 + lVar29 * 4;
  iVar27 = SUB164(auVar8 * auVar16,8);
  uVar23 = *(uint *)pIVar1;
  pIVar21 = local_80;
  while (uVar23 != 0) {
    auVar9._8_8_ = 0;
    auVar9._0_8_ = (ulong)uVar23 * lVar24;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = uVar32;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = (ulong)((uVar2 + iVar27) - SUB164(auVar9 * auVar17,8)) * lVar24;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = uVar32;
    uVar22 = SUB164(auVar10 * auVar18,8);
    pIVar34 = pIVar21;
    if (uVar22 < uVar31) {
      *(uint *)pIVar1 = (uint)uVar30;
      uVar30 = (ulong)uVar23;
      pIVar1 = pIVar3 + lVar29 * 8;
      pIVar34 = *(Item **)pIVar1;
      *(Item **)pIVar1 = pIVar21;
      uVar31 = uVar22;
    }
    uVar22 = (uint)uVar30;
    uVar31 = uVar31 + 1;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = (ulong)(iVar27 + 1) * lVar24;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar32;
    lVar29 = SUB168(auVar11 * auVar19,8);
    pIVar1 = pIVar25 + lVar29 * 4;
    iVar27 = SUB164(auVar11 * auVar19,8);
    pIVar21 = pIVar34;
    uVar23 = *(uint *)pIVar1;
  }
  *(Item **)(pIVar3 + lVar29 * 8) = pIVar21;
  *(uint *)pIVar1 = uVar22;
  *(int *)((long)param_2 + 0x2c) = *(int *)((long)param_2 + 0x2c) + 1;
LAB_00112691:
  *(Item **)param_1 = local_80;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<EditorProfiler::Metric>::_realloc(long) */

undefined8 __thiscall
CowData<EditorProfiler::Metric>::_realloc(CowData<EditorProfiler::Metric> *this,long param_1)

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



/* CowData<Vector<String> >::_unref() */

void __thiscall CowData<Vector<String>>::_unref(CowData<Vector<String>> *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  CowData<String> *this_00;
  
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
        this_00 = (CowData<String> *)(lVar2 + 8);
        do {
          lVar5 = lVar5 + 1;
          CowData<String>::_unref(this_00);
          this_00 = this_00 + 0x10;
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



/* CowData<EditorProfiler::Metric::Category::Item>::_unref() */

void __thiscall
CowData<EditorProfiler::Metric::Category::Item>::_unref
          (CowData<EditorProfiler::Metric::Category::Item> *this)

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
          if (plVar6[2] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[2] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[2];
              plVar6[2] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          if (plVar6[1] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[1] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[1];
              plVar6[1] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          if ((StringName::configured != '\0') && (*plVar6 != 0)) {
            StringName::unref();
          }
          lVar7 = lVar7 + 1;
          plVar6 = plVar6 + 6;
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



/* CowData<EditorProfiler::Metric::Category>::_unref() */

void __thiscall
CowData<EditorProfiler::Metric::Category>::_unref(CowData<EditorProfiler::Metric::Category> *this)

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
          CowData<EditorProfiler::Metric::Category::Item>::_unref
                    ((CowData<EditorProfiler::Metric::Category::Item> *)(plVar6 + 4));
          if (plVar6[1] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[1] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[1];
              plVar6[1] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          if ((StringName::configured != '\0') && (*plVar6 != 0)) {
            StringName::unref();
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



/* EditorProfiler::Metric::~Metric() */

void __thiscall EditorProfiler::Metric::~Metric(Metric *this)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  bool bVar4;
  
  pvVar3 = *(void **)(this + 0x60);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(this + 0x84) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x80) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x84) = 0;
        *(undefined1 (*) [16])(this + 0x70) = (undefined1  [16])0x0;
      }
      else {
        lVar2 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x68) + lVar2) != 0) {
            bVar4 = StringName::configured != '\0';
            *(int *)(*(long *)(this + 0x68) + lVar2) = 0;
            pvVar3 = *(void **)((long)pvVar3 + lVar2 * 2);
            if ((bVar4) && (*(long *)((long)pvVar3 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar3,false);
            pvVar3 = *(void **)(this + 0x60);
            *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
          }
          lVar2 = lVar2 + 4;
        } while ((ulong)uVar1 << 2 != lVar2);
        *(undefined4 *)(this + 0x84) = 0;
        *(undefined1 (*) [16])(this + 0x70) = (undefined1  [16])0x0;
        if (pvVar3 == (void *)0x0) goto LAB_00112e21;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0x68),false);
  }
LAB_00112e21:
  pvVar3 = *(void **)(this + 0x30);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(this + 0x54) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x50) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x54) = 0;
        *(undefined1 (*) [16])(this + 0x40) = (undefined1  [16])0x0;
      }
      else {
        lVar2 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x38) + lVar2) != 0) {
            bVar4 = StringName::configured != '\0';
            *(int *)(*(long *)(this + 0x38) + lVar2) = 0;
            pvVar3 = *(void **)((long)pvVar3 + lVar2 * 2);
            if ((bVar4) && (*(long *)((long)pvVar3 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar3,false);
            pvVar3 = *(void **)(this + 0x30);
            *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
          }
          lVar2 = lVar2 + 4;
        } while (lVar2 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0x54) = 0;
        *(undefined1 (*) [16])(this + 0x40) = (undefined1  [16])0x0;
        if (pvVar3 == (void *)0x0) goto LAB_00112eca;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0x38),false);
  }
LAB_00112eca:
  CowData<EditorProfiler::Metric::Category>::_unref
            ((CowData<EditorProfiler::Metric::Category> *)(this + 0x20));
  return;
}



/* CowData<EditorProfiler::Metric>::_unref() */

void __thiscall CowData<EditorProfiler::Metric>::_unref(CowData<EditorProfiler::Metric> *this)

{
  long *plVar1;
  Metric *pMVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  Metric *this_00;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    pMVar2 = *(Metric **)this;
    if (pMVar2 != (Metric *)0x0) {
      lVar3 = *(long *)(pMVar2 + -8);
      *(undefined8 *)this = 0;
      if (lVar3 != 0) {
        lVar5 = 0;
        this_00 = pMVar2;
        do {
          lVar5 = lVar5 + 1;
          EditorProfiler::Metric::~Metric(this_00);
          this_00 = this_00 + 0x88;
        } while (lVar3 != lVar5);
      }
      Memory::free_static(pMVar2 + -0x10,false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* EditorProfiler::~EditorProfiler() */

void __thiscall EditorProfiler::~EditorProfiler(EditorProfiler *this)

{
  long *plVar1;
  Object *pOVar2;
  char cVar3;
  long lVar4;
  void *pvVar5;
  bool bVar6;
  
  *(undefined ***)this = &PTR__initialize_classv_00114680;
  CowData<EditorProfiler::Metric>::_unref((CowData<EditorProfiler::Metric> *)(this + 0xad0));
  pvVar5 = *(void **)(this + 0xa80);
  if (pvVar5 != (void *)0x0) {
    if (*(int *)(this + 0xaa4) != 0) {
      if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xaa0) * 4) != 0) {
        memset(*(void **)(this + 0xa98),0,
               (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xaa0) * 4) << 2);
        if (*(int *)(this + 0xaa4) == 0) goto LAB_00113118;
      }
      lVar4 = 0;
      do {
        if ((StringName::configured != '\0') && (*(long *)((long)pvVar5 + lVar4 * 8) != 0)) {
          StringName::unref();
          pvVar5 = *(void **)(this + 0xa80);
        }
        lVar4 = lVar4 + 1;
      } while ((uint)lVar4 < *(uint *)(this + 0xaa4));
      *(undefined4 *)(this + 0xaa4) = 0;
      if (pvVar5 == (void *)0x0) goto LAB_0011308e;
    }
LAB_00113118:
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0xa90),false);
    Memory::free_static(*(void **)(this + 0xa88),false);
    Memory::free_static(*(void **)(this + 0xa98),false);
  }
LAB_0011308e:
  if (*(long *)(this + 0xa58) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xa58) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar4 = *(long *)(this + 0xa58);
      *(undefined8 *)(this + 0xa58) = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  if (*(long *)(this + 0xa48) != 0) {
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      pOVar2 = *(Object **)(this + 0xa48);
      cVar3 = predelete_handler(pOVar2);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
  bVar6 = StringName::configured != '\0';
  *(undefined **)this = &Image::vtable;
  if (bVar6) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00113107;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00113107:
  Control::~Control((Control *)this);
  return;
}



/* EditorProfiler::~EditorProfiler() */

void __thiscall EditorProfiler::~EditorProfiler(EditorProfiler *this)

{
  long *plVar1;
  Object *pOVar2;
  char cVar3;
  long lVar4;
  void *pvVar5;
  bool bVar6;
  
  *(undefined ***)this = &PTR__initialize_classv_00114680;
  CowData<EditorProfiler::Metric>::_unref((CowData<EditorProfiler::Metric> *)(this + 0xad0));
  pvVar5 = *(void **)(this + 0xa80);
  if (pvVar5 != (void *)0x0) {
    if (*(int *)(this + 0xaa4) != 0) {
      if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xaa0) * 4) != 0) {
        memset(*(void **)(this + 0xa98),0,
               (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xaa0) * 4) << 2);
        if (*(int *)(this + 0xaa4) == 0) goto LAB_00113310;
      }
      lVar4 = 0;
      do {
        if ((StringName::configured != '\0') && (*(long *)((long)pvVar5 + lVar4 * 8) != 0)) {
          StringName::unref();
          pvVar5 = *(void **)(this + 0xa80);
        }
        lVar4 = lVar4 + 1;
      } while ((uint)lVar4 < *(uint *)(this + 0xaa4));
      *(undefined4 *)(this + 0xaa4) = 0;
      if (pvVar5 == (void *)0x0) goto LAB_0011327e;
    }
LAB_00113310:
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0xa90),false);
    Memory::free_static(*(void **)(this + 0xa88),false);
    Memory::free_static(*(void **)(this + 0xa98),false);
  }
LAB_0011327e:
  if (*(long *)(this + 0xa58) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xa58) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar4 = *(long *)(this + 0xa58);
      *(undefined8 *)(this + 0xa58) = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  if (*(long *)(this + 0xa48) != 0) {
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      pOVar2 = *(Object **)(this + 0xa48);
      cVar3 = predelete_handler(pOVar2);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
  bVar6 = StringName::configured != '\0';
  *(undefined **)this = &Image::vtable;
  if (bVar6) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001132f7;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_001132f7:
  Control::~Control((Control *)this);
  operator_delete(this,0xb08);
  return;
}



/* EditorProfiler::Metric::Metric(EditorProfiler::Metric const&) */

void __thiscall EditorProfiler::Metric::Metric(Metric *this,Metric *param_1)

{
  Metric MVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long in_FS_OFFSET;
  StringName aSStack_48 [8];
  long local_40;
  
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  MVar1 = *param_1;
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x10) = uVar4;
  *this = MVar1;
  uVar2 = *(undefined4 *)(param_1 + 4);
  *(undefined8 *)(this + 0x20) = 0;
  lVar5 = *(long *)(param_1 + 0x20);
  *(undefined4 *)(this + 4) = uVar2;
  if (lVar5 != 0) {
    CowData<EditorProfiler::Metric::Category>::_ref
              ((CowData<EditorProfiler::Metric::Category> *)(this + 0x20),
               (CowData *)(param_1 + 0x20));
  }
  uVar3 = *(uint *)(param_1 + 0x50);
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  uVar3 = *(uint *)(hash_table_size_primes + (ulong)uVar3 * 4);
  *(undefined1 (*) [16])(this + 0x40) = (undefined1  [16])0x0;
  lVar5 = 1;
  if (5 < uVar3) {
    do {
      if (uVar3 <= *(uint *)(hash_table_size_primes + lVar5 * 4)) {
        *(int *)(this + 0x50) = (int)lVar5;
        goto LAB_001134ca;
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 != 0x1d);
    _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                     "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0,0);
  }
LAB_001134ca:
  if ((*(int *)(param_1 + 0x54) != 0) &&
     (plVar6 = *(long **)(param_1 + 0x40), plVar6 != (long *)0x0)) {
    do {
      HashMap<StringName,EditorProfiler::Metric::Category*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorProfiler::Metric::Category*>>>
      ::insert(aSStack_48,(Category **)(this + 0x28),(bool)((char)plVar6 + '\x10'));
      plVar6 = (long *)*plVar6;
    } while (plVar6 != (long *)0x0);
  }
  uVar3 = *(uint *)(param_1 + 0x80);
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined1 (*) [16])(this + 0x60) = (undefined1  [16])0x0;
  uVar3 = *(uint *)(hash_table_size_primes + (ulong)uVar3 * 4);
  *(undefined1 (*) [16])(this + 0x70) = (undefined1  [16])0x0;
  lVar5 = 1;
  if (5 < uVar3) {
    do {
      if (uVar3 <= *(uint *)(hash_table_size_primes + lVar5 * 4)) {
        *(int *)(this + 0x80) = (int)lVar5;
        goto LAB_00113579;
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 != 0x1d);
    _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                     "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0);
  }
LAB_00113579:
  if ((*(int *)(param_1 + 0x84) != 0) &&
     (plVar6 = *(long **)(param_1 + 0x70), plVar6 != (long *)0x0)) {
    do {
      HashMap<StringName,EditorProfiler::Metric::Category::Item*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorProfiler::Metric::Category::Item*>>>
      ::insert(aSStack_48,(Item **)(this + 0x58),(bool)((char)plVar6 + '\x10'));
      plVar6 = (long *)*plVar6;
    } while (plVar6 != (long *)0x0);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EditorProfiler::_notificationv(int, bool) */

void __thiscall EditorProfiler::_notificationv(EditorProfiler *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (!param_2) {
    Node::_notification(iVar1);
    CanvasItem::_notification(iVar1);
    Control::_notification(iVar1);
    Container::_notification(iVar1);
    if ((code *)PTR__notification_00119030 != Container::_notification) {
      BoxContainer::_notification(iVar1);
    }
    if (param_1 < 0x32) {
      if ((9 < param_1) && ((0x2200000000400U >> ((ulong)(uint)param_1 & 0x3f) & 1) != 0)) {
LAB_00113778:
        _notification(iVar1);
        return;
      }
    }
    else if (param_1 == 0x7da) goto LAB_00113778;
    return;
  }
  if (param_1 < 0x32) {
    if ((param_1 < 10) || ((0x2200000000400U >> ((ulong)(uint)param_1 & 0x3f) & 1) == 0))
    goto LAB_00113648;
  }
  else if (param_1 != 0x7da) goto LAB_00113648;
  _notification(iVar1);
LAB_00113648:
  if ((code *)PTR__notification_00119030 != Container::_notification) {
    BoxContainer::_notification(iVar1);
  }
  Container::_notification(iVar1);
  Control::_notification(iVar1);
  CanvasItem::_notification(iVar1);
  Node::_notification(iVar1);
  return;
}



/* CowData<Vector<String> >::_realloc(long) */

undefined8 __thiscall CowData<Vector<String>>::_realloc(CowData<Vector<String>> *this,long param_1)

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
/* Error CowData<Vector<String> >::resize<false>(long) */

undefined8 __thiscall
CowData<Vector<String>>::resize<false>(CowData<Vector<String>> *this,long param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  
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
    lVar5 = 0;
    lVar7 = 0;
  }
  else {
    lVar5 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar5) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar7 = lVar5 * 0x10;
    if (lVar7 != 0) {
      uVar8 = lVar7 - 1U | lVar7 - 1U >> 1;
      uVar8 = uVar8 | uVar8 >> 2;
      uVar8 = uVar8 | uVar8 >> 4;
      uVar8 = uVar8 | uVar8 >> 8;
      uVar8 = uVar8 | uVar8 >> 0x10;
      lVar7 = (uVar8 | uVar8 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x10 == 0) {
LAB_00113ab0:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar8 = param_1 * 0x10 - 1;
  uVar8 = uVar8 >> 1 | uVar8;
  uVar8 = uVar8 | uVar8 >> 2;
  uVar8 = uVar8 | uVar8 >> 4;
  uVar8 = uVar8 | uVar8 >> 8;
  uVar8 = uVar8 | uVar8 >> 0x10;
  uVar8 = uVar8 | uVar8 >> 0x20;
  lVar10 = uVar8 + 1;
  if (lVar10 == 0) goto LAB_00113ab0;
  uVar9 = param_1;
  if (param_1 <= lVar5) {
    while (lVar5 = *(long *)this, lVar5 != 0) {
      if (*(ulong *)(lVar5 + -8) <= uVar9) {
        if (lVar10 != lVar7) {
          uVar4 = _realloc(this,lVar10);
          if ((int)uVar4 != 0) {
            return uVar4;
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
        return 0;
      }
      CowData<String>::_unref((CowData<String> *)(lVar5 + 8 + uVar9 * 0x10));
      uVar9 = uVar9 + 1;
    }
    goto LAB_00113b06;
  }
  if (lVar10 == lVar7) {
LAB_00113a23:
    puVar6 = *(undefined8 **)this;
    if (puVar6 == (undefined8 *)0x0) {
LAB_00113b06:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar5 = puVar6[-1];
    if (param_1 <= lVar5) goto LAB_00113989;
  }
  else {
    if (lVar5 != 0) {
      uVar4 = _realloc(this,lVar10);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      goto LAB_00113a23;
    }
    puVar2 = (undefined8 *)Memory::alloc_static(uVar8 + 0x11,false);
    if (puVar2 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar6 = puVar2 + 2;
    *puVar2 = 1;
    puVar2[1] = 0;
    *(undefined8 **)this = puVar6;
    lVar5 = 0;
  }
  puVar11 = puVar6 + param_1 * 2;
  puVar2 = puVar6 + lVar5 * 2;
  if (((int)puVar11 - (int)puVar2 & 0x10U) != 0) {
    puVar2[1] = 0;
    puVar2 = puVar2 + 2;
    if (puVar2 == puVar11) goto LAB_00113989;
  }
  do {
    puVar2[1] = 0;
    puVar3 = puVar2 + 4;
    puVar2[3] = 0;
    puVar2 = puVar3;
  } while (puVar3 != puVar11);
LAB_00113989:
  puVar6[-1] = param_1;
  return 0;
}



/* EditorProfiler::_make_metric_ptrs(EditorProfiler::Metric&) */

void EditorProfiler::_GLOBAL__sub_I__make_metric_ptrs(void)

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
/* CallableCustomMethodPointer<EditorProfiler, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorProfiler,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorProfiler,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorProfiler, void, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorProfiler,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorProfiler,void,bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorProfiler, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorProfiler,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorProfiler,void,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorProfiler, void, double>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorProfiler,void,double>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorProfiler,void,double> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorProfiler, void, Ref<InputEvent>
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorProfiler,void,Ref<InputEvent>const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorProfiler,void,Ref<InputEvent>const&> *this)

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
/* EditorProfiler::Metric::Metric(EditorProfiler::Metric const&) */

void __thiscall EditorProfiler::Metric::Metric(Metric *this,Metric *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* EditorProfiler::~EditorProfiler() */

void __thiscall EditorProfiler::~EditorProfiler(EditorProfiler *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* EditorProfiler::Metric::~Metric() */

void __thiscall EditorProfiler::Metric::~Metric(Metric *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



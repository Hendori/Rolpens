
/* EditorRunBar::recovery_mode_show_dialog() */

void __thiscall EditorRunBar::recovery_mode_show_dialog(EditorRunBar *this)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  Window::popup_centered(*(Vector2i **)(this + 0xa48));
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorRunBar::recovery_mode_reload_project() */

void EditorRunBar::recovery_mode_reload_project(void)

{
  EditorNode::trigger_menu_option((int)EditorNode::singleton,true);
  return;
}



/* EditorRunBar::_write_movie_toggled(bool) */

void EditorRunBar::_write_movie_toggled(bool param_1)

{
  Object *pOVar1;
  char cVar2;
  int iVar3;
  undefined8 in_RDX;
  undefined1 uVar4;
  undefined8 in_RSI;
  undefined7 in_register_00000039;
  StringName *pSVar5;
  char *pcVar6;
  StringName *pSVar7;
  undefined1 *puVar8;
  long in_FS_OFFSET;
  Object *local_48;
  long local_40;
  
  pSVar5 = (StringName *)CONCAT71(in_register_00000039,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((char)in_RSI == '\0') {
    if ((_write_movie_toggled(bool)::{lambda()#3}::operator()()::sname == '\0') &&
       (iVar3 = __cxa_guard_acquire(&_write_movie_toggled(bool)::{lambda()#3}::operator()()::sname,
                                    in_RSI,in_RDX,EditorStringNames::singleton), iVar3 != 0)) {
      _scs_create((char *)&_write_movie_toggled(bool)::{lambda()#3}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &_write_movie_toggled(bool)::{lambda()#3}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&_write_movie_toggled(bool)::{lambda()#3}::operator()()::sname);
    }
    Control::get_theme_stylebox((StringName *)&local_48,pSVar5);
    Control::add_theme_style_override(pSVar5,(Ref *)(SceneStringNames::singleton + 600));
    if (((local_48 != (Object *)0x0) &&
        (cVar2 = RefCounted::unreference(), pOVar1 = local_48, cVar2 != '\0')) &&
       (cVar2 = predelete_handler(local_48), cVar2 != '\0')) {
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      Memory::free_static(pOVar1,false);
    }
    pSVar7 = *(StringName **)(pSVar5 + 0xa98);
    if (_write_movie_toggled(bool)::{lambda()#4}::operator()()::sname != '\0') goto LAB_0010012a;
    puVar8 = &_write_movie_toggled(bool)::{lambda()#4}::operator()()::sname;
    pcVar6 = (char *)&_write_movie_toggled(bool)::{lambda()#4}::operator()()::sname;
    iVar3 = __cxa_guard_acquire(&_write_movie_toggled(bool)::{lambda()#4}::operator()()::sname);
    if (iVar3 == 0) goto LAB_0010012a;
    uVar4 = 0x54;
  }
  else {
    if ((_write_movie_toggled(bool)::{lambda()#1}::operator()()::sname == '\0') &&
       (iVar3 = __cxa_guard_acquire(&_write_movie_toggled(bool)::{lambda()#1}::operator()()::sname,
                                    in_RSI,in_RDX,EditorStringNames::singleton), iVar3 != 0)) {
      _scs_create((char *)&_write_movie_toggled(bool)::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &_write_movie_toggled(bool)::{lambda()#1}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&_write_movie_toggled(bool)::{lambda()#1}::operator()()::sname);
    }
    Control::get_theme_stylebox((StringName *)&local_48,pSVar5);
    Control::add_theme_style_override(pSVar5,(Ref *)(SceneStringNames::singleton + 600));
    if (((local_48 != (Object *)0x0) &&
        (cVar2 = RefCounted::unreference(), pOVar1 = local_48, cVar2 != '\0')) &&
       (cVar2 = predelete_handler(local_48), cVar2 != '\0')) {
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      Memory::free_static(pOVar1,false);
    }
    pSVar7 = *(StringName **)(pSVar5 + 0xa98);
    if (_write_movie_toggled(bool)::{lambda()#2}::operator()()::sname != '\0') goto LAB_0010012a;
    puVar8 = &_write_movie_toggled(bool)::{lambda()#2}::operator()()::sname;
    pcVar6 = (char *)&_write_movie_toggled(bool)::{lambda()#2}::operator()()::sname;
    iVar3 = __cxa_guard_acquire(&_write_movie_toggled(bool)::{lambda()#2}::operator()()::sname);
    uVar4 = 0x2b;
    if (iVar3 == 0) goto LAB_0010012a;
  }
  _scs_create(pcVar6,(bool)uVar4);
  __cxa_atexit(StringName::~StringName,pcVar6,&__dso_handle);
  __cxa_guard_release(puVar8);
LAB_0010012a:
  Control::get_theme_stylebox((StringName *)&local_48,pSVar5);
  Control::add_theme_style_override(pSVar7,(Ref *)(SceneStringNames::singleton + 600));
  if (((local_48 != (Object *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) &&
     (cVar2 = predelete_handler(local_48), cVar2 != '\0')) {
    (**(code **)(*(long *)local_48 + 0x140))(local_48);
    Memory::free_static(local_48,false);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
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



/* EditorRunBar::is_playing() const */

bool EditorRunBar::is_playing(void)

{
  uint uVar1;
  
  uVar1 = EditorRun::get_status();
  return uVar1 < 2;
}



/* EditorRunBar::start_native_device(int) */

void EditorRunBar::start_native_device(int param_1)

{
  undefined4 in_register_0000003c;
  
  EditorRunNative::start_run_native
            ((int)*(undefined8 *)(CONCAT44(in_register_0000003c,param_1) + 0xa90));
  return;
}



/* EditorRunBar::has_child_process(long) const */

undefined1 EditorRunBar::has_child_process(long param_1)

{
  undefined1 uVar1;
  
  uVar1 = EditorRun::has_child_process(param_1 + 0xa78);
  return uVar1;
}



/* EditorRunBar::get_current_process() const */

void EditorRunBar::get_current_process(void)

{
  EditorRun::get_current_process();
  return;
}



/* EditorRunBar::set_movie_maker_enabled(bool) */

void EditorRunBar::set_movie_maker_enabled(bool param_1)

{
  undefined7 in_register_00000039;
  
  BaseButton::set_pressed(SUB81(*(undefined8 *)(CONCAT71(in_register_00000039,param_1) + 0xaa0),0));
  return;
}



/* EditorRunBar::is_movie_maker_enabled() const */

void EditorRunBar::is_movie_maker_enabled(void)

{
  BaseButton::is_pressed();
  return;
}



/* EditorRunBar::get_buttons_container() */

undefined8 __thiscall EditorRunBar::get_buttons_container(EditorRunBar *this)

{
  return *(undefined8 *)(this + 0xa18);
}



/* EditorRunBar::_profiler_autostart_indicator_pressed() */

void EditorRunBar::_profiler_autostart_indicator_pressed(void)

{
  bool bVar1;
  int iVar2;
  String *pSVar3;
  long in_FS_OFFSET;
  undefined8 local_98;
  undefined8 local_90;
  char *local_88;
  undefined8 local_80;
  int local_78 [8];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  EditorBottomPanel::make_item_visible
            (*(Control **)(EditorNode::singleton + 0xa40),SUB81(EditorDebuggerNode::singleton,0),
             true);
  pSVar3 = (String *)EditorSettings::get_singleton();
  Variant::Variant((Variant *)local_78,false);
  local_88 = "autostart_profiler";
  local_90 = 0;
  local_80 = 0x12;
  String::parse_latin1((StrRange *)&local_90);
  local_88 = "debug_options";
  local_98 = 0;
  local_80 = 0xd;
  String::parse_latin1((StrRange *)&local_98);
  EditorSettings::get_project_metadata((String *)local_58,pSVar3,(Variant *)&local_98);
  bVar1 = Variant::operator_cast_to_bool((Variant *)local_58);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref();
  CowData<char32_t>::_unref();
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (bVar1) {
    iVar2 = EditorDebuggerNode::get_current_debugger();
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_001008cd;
  }
  else {
    pSVar3 = (String *)EditorSettings::get_singleton();
    Variant::Variant((Variant *)local_78,false);
    local_88 = "autostart_visual_profiler";
    local_90 = 0;
    local_80 = 0x19;
    String::parse_latin1((StrRange *)&local_90);
    local_88 = "debug_options";
    local_98 = 0;
    local_80 = 0xd;
    String::parse_latin1((StrRange *)&local_98);
    EditorSettings::get_project_metadata((String *)local_58,pSVar3,(Variant *)&local_98);
    bVar1 = Variant::operator_cast_to_bool((Variant *)local_58);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    CowData<char32_t>::_unref();
    CowData<char32_t>::_unref();
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (bVar1) {
      iVar2 = EditorDebuggerNode::get_current_debugger();
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
LAB_001008cd:
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
    }
    else {
      iVar2 = EditorDebuggerNode::get_current_debugger();
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_001008cd;
    }
  }
  ScriptEditorDebugger::switch_to_debugger(iVar2);
  return;
}



/* EditorRunBar::update_profiler_autostart_indicator() */

void __thiscall EditorRunBar::update_profiler_autostart_indicator(EditorRunBar *this)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  String *pSVar5;
  long lVar6;
  long in_FS_OFFSET;
  String local_a8 [8];
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  char *local_88;
  undefined8 local_80;
  int local_78 [8];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pSVar5 = (String *)EditorSettings::get_singleton();
  Variant::Variant((Variant *)local_78,false);
  local_88 = "autostart_profiler";
  local_90 = 0;
  local_80 = 0x12;
  String::parse_latin1((StrRange *)&local_90);
  local_88 = "debug_options";
  local_98 = 0;
  local_80 = 0xd;
  String::parse_latin1((StrRange *)&local_98);
  EditorSettings::get_project_metadata((String *)local_58,pSVar5,(Variant *)&local_98);
  bVar2 = Variant::operator_cast_to_bool((Variant *)local_58);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref();
  CowData<char32_t>::_unref();
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  pSVar5 = (String *)EditorSettings::get_singleton();
  Variant::Variant((Variant *)local_78,false);
  local_88 = "autostart_visual_profiler";
  local_90 = 0;
  local_80 = 0x19;
  String::parse_latin1((StrRange *)&local_90);
  local_88 = "debug_options";
  local_98 = 0;
  local_80 = 0xd;
  String::parse_latin1((StrRange *)&local_98);
  EditorSettings::get_project_metadata((String *)local_58,pSVar5,(Variant *)&local_98);
  bVar3 = Variant::operator_cast_to_bool((Variant *)local_58);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref();
  CowData<char32_t>::_unref();
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  pSVar5 = (String *)EditorSettings::get_singleton();
  Variant::Variant((Variant *)local_78,false);
  local_88 = "autostart_network_profiler";
  local_90 = 0;
  local_80 = 0x1a;
  String::parse_latin1((StrRange *)&local_90);
  local_88 = "debug_options";
  local_98 = 0;
  local_80 = 0xd;
  String::parse_latin1((StrRange *)&local_98);
  EditorSettings::get_project_metadata((String *)local_58,pSVar5,(Variant *)&local_98);
  bVar4 = Variant::operator_cast_to_bool((Variant *)local_58);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref();
  CowData<char32_t>::_unref();
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  lVar6 = Engine::get_singleton();
  bVar1 = *(byte *)(lVar6 + 0xc4);
  CanvasItem::set_visible(SUB81(*(undefined8 *)(this + 0xa28),0));
  if ((((bVar2 || bVar3) || bVar4) & (bVar1 ^ 1)) != 0) {
    local_90 = 0;
    local_88 = "";
    local_80 = 0;
    String::parse_latin1((StrRange *)&local_90);
    local_88 = 
    "Autostart is enabled for the following profilers, which can have a performance impact:";
    local_98 = 0;
    local_80 = 0x56;
    String::parse_latin1((StrRange *)&local_98);
    TTR(local_a8,(String *)&local_98);
    CowData<char32_t>::_unref();
    CowData<char32_t>::_unref();
    if (bVar2) {
      local_98 = 0;
      String::parse_latin1((String *)&local_98,"");
      local_a0 = 0;
      String::parse_latin1((String *)&local_a0,"Profiler");
      TTR((String *)&local_90,(String *)&local_a0);
      operator+((char *)&local_88,(String *)&_LC17);
      String::operator+=(local_a8,(String *)&local_88);
      CowData<char32_t>::_unref();
      CowData<char32_t>::_unref();
      CowData<char32_t>::_unref();
      CowData<char32_t>::_unref();
    }
    if (bVar3) {
      local_98 = 0;
      String::parse_latin1((String *)&local_98,"");
      local_a0 = 0;
      String::parse_latin1((String *)&local_a0,"Visual Profiler");
      TTR((String *)&local_90,(String *)&local_a0);
      operator+((char *)&local_88,(String *)&_LC17);
      String::operator+=(local_a8,(String *)&local_88);
      CowData<char32_t>::_unref();
      CowData<char32_t>::_unref();
      CowData<char32_t>::_unref();
      CowData<char32_t>::_unref();
    }
    if (bVar4) {
      local_98 = 0;
      String::parse_latin1((String *)&local_98,"");
      local_a0 = 0;
      String::parse_latin1((String *)&local_a0,"Network Profiler");
      TTR((String *)&local_90,(String *)&local_a0);
      operator+((char *)&local_88,(String *)&_LC17);
      String::operator+=(local_a8,(String *)&local_88);
      CowData<char32_t>::_unref();
      CowData<char32_t>::_unref();
      CowData<char32_t>::_unref();
      CowData<char32_t>::_unref();
    }
    local_88 = "";
    local_98 = 0;
    local_80 = 0;
    String::parse_latin1((StrRange *)&local_98);
    local_88 = "Click to open the first profiler for which autostart is enabled.";
    local_a0 = 0;
    local_80 = 0x40;
    String::parse_latin1((StrRange *)&local_a0);
    TTR((String *)&local_90,(String *)&local_a0);
    operator+((char *)&local_88,(String *)&_LC21);
    String::operator+=(local_a8,(String *)&local_88);
    CowData<char32_t>::_unref();
    CowData<char32_t>::_unref();
    CowData<char32_t>::_unref();
    CowData<char32_t>::_unref();
    Control::set_tooltip_text(*(String **)(this + 0xa28));
    CowData<char32_t>::_unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorRunBar::_reset_play_buttons() [clone .part.0] */

void __thiscall EditorRunBar::_reset_play_buttons(EditorRunBar *this)

{
  Ref *pRVar1;
  String *pSVar2;
  Object *pOVar3;
  char cVar4;
  int iVar5;
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined8 local_60;
  Object *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xa50),0));
  pRVar1 = *(Ref **)(this + 0xa50);
  if (_reset_play_buttons()::{lambda()#1}::operator()()::sname == '\0') {
    iVar5 = __cxa_guard_acquire(&_reset_play_buttons()::{lambda()#1}::operator()()::sname);
    if (iVar5 != 0) {
      _scs_create((char *)&_reset_play_buttons()::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_reset_play_buttons()::{lambda()#1}::operator()()::sname
                   ,&__dso_handle);
      __cxa_guard_release(&_reset_play_buttons()::{lambda()#1}::operator()()::sname);
    }
  }
  Control::get_editor_theme_icon((StringName *)&local_58);
  Button::set_button_icon(pRVar1);
  if (local_58 != (Object *)0x0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      cVar4 = predelete_handler(local_58);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)local_58 + 0x140))(local_58);
        Memory::free_static(local_58,false);
      }
    }
  }
  pSVar2 = *(String **)(this + 0xa50);
  local_60 = 0;
  local_58 = (Object *)&_LC10;
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = (Object *)0x1084fc;
  local_68 = 0;
  local_50 = 0x11;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  Control::set_tooltip_text(pSVar2);
  CowData<char32_t>::_unref();
  CowData<char32_t>::_unref();
  CowData<char32_t>::_unref();
  BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xa68),0));
  pRVar1 = *(Ref **)(this + 0xa68);
  if (_reset_play_buttons()::{lambda()#2}::operator()()::sname == '\0') {
    iVar5 = __cxa_guard_acquire(&_reset_play_buttons()::{lambda()#2}::operator()()::sname);
    if (iVar5 != 0) {
      _scs_create((char *)&_reset_play_buttons()::{lambda()#2}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_reset_play_buttons()::{lambda()#2}::operator()()::sname
                   ,&__dso_handle);
      __cxa_guard_release(&_reset_play_buttons()::{lambda()#2}::operator()()::sname);
    }
  }
  Control::get_editor_theme_icon((StringName *)&local_58);
  Button::set_button_icon(pRVar1);
  if (local_58 != (Object *)0x0) {
    cVar4 = RefCounted::unreference();
    pOVar3 = local_58;
    if (cVar4 != '\0') {
      cVar4 = predelete_handler(local_58);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  pSVar2 = *(String **)(this + 0xa68);
  local_60 = 0;
  local_58 = (Object *)&_LC10;
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = (Object *)0x108518;
  local_68 = 0;
  local_50 = 0x16;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  Control::set_tooltip_text(pSVar2);
  CowData<char32_t>::_unref();
  CowData<char32_t>::_unref();
  CowData<char32_t>::_unref();
  BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xa70),0));
  pRVar1 = *(Ref **)(this + 0xa70);
  if (_reset_play_buttons()::{lambda()#3}::operator()()::sname == '\0') {
    iVar5 = __cxa_guard_acquire(&_reset_play_buttons()::{lambda()#3}::operator()()::sname);
    if (iVar5 != 0) {
      _scs_create((char *)&_reset_play_buttons()::{lambda()#3}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_reset_play_buttons()::{lambda()#3}::operator()()::sname
                   ,&__dso_handle);
      __cxa_guard_release(&_reset_play_buttons()::{lambda()#3}::operator()()::sname);
    }
  }
  Control::get_editor_theme_icon((StringName *)&local_58);
  Button::set_button_icon(pRVar1);
  if (local_58 != (Object *)0x0) {
    cVar4 = RefCounted::unreference();
    pOVar3 = local_58;
    if (cVar4 != '\0') {
      cVar4 = predelete_handler(local_58);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  pSVar2 = *(String **)(this + 0xa70);
  local_60 = 0;
  local_58 = (Object *)&_LC10;
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = (Object *)0x10853a;
  local_68 = 0;
  local_50 = 0x14;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  Control::set_tooltip_text(pSVar2);
  CowData<char32_t>::_unref();
  CowData<char32_t>::_unref();
  CowData<char32_t>::_unref();
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorRunBar::_reset_play_buttons() */

void __thiscall EditorRunBar::_reset_play_buttons(EditorRunBar *this)

{
  long lVar1;
  
  lVar1 = Engine::get_singleton();
  if (*(char *)(lVar1 + 0xc4) != '\0') {
    return;
  }
  _reset_play_buttons(this);
  return;
}



/* EditorRunBar::_update_play_buttons() */

void __thiscall EditorRunBar::_update_play_buttons(EditorRunBar *this)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  Ref *pRVar5;
  long in_FS_OFFSET;
  undefined8 local_58;
  undefined8 local_50;
  Object *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar4 = Engine::get_singleton();
  if (*(char *)(lVar4 + 0xc4) == '\0') {
    lVar4 = Engine::get_singleton();
    if (*(char *)(lVar4 + 0xc4) == '\0') {
      _reset_play_buttons(this);
    }
    uVar2 = EditorRun::get_status();
    if (uVar2 < 2) {
      if (*(int *)(this + 0xaa8) == 2) {
        pRVar5 = *(Ref **)(this + 0xa68);
      }
      else if (*(int *)(this + 0xaa8) == 3) {
        pRVar5 = *(Ref **)(this + 0xa70);
      }
      else {
        pRVar5 = *(Ref **)(this + 0xa50);
      }
      if (pRVar5 != (Ref *)0x0) {
        BaseButton::set_pressed(SUB81(pRVar5,0));
        if (_update_play_buttons()::{lambda()#1}::operator()()::sname == '\0') {
          iVar3 = __cxa_guard_acquire(&_update_play_buttons()::{lambda()#1}::operator()()::sname);
          if (iVar3 != 0) {
            _scs_create((char *)&_update_play_buttons()::{lambda()#1}::operator()()::sname,true);
            __cxa_atexit(StringName::~StringName,
                         &_update_play_buttons()::{lambda()#1}::operator()()::sname,&__dso_handle);
            __cxa_guard_release(&_update_play_buttons()::{lambda()#1}::operator()()::sname);
          }
        }
        Control::get_editor_theme_icon((StringName *)&local_48);
        Button::set_button_icon(pRVar5);
        if (local_48 != (Object *)0x0) {
          cVar1 = RefCounted::unreference();
          if (cVar1 != '\0') {
            cVar1 = predelete_handler(local_48);
            if (cVar1 != '\0') {
              (**(code **)(*(long *)local_48 + 0x140))(local_48);
              Memory::free_static(local_48,false);
            }
          }
        }
        local_58 = 0;
        local_40 = 0;
        local_48 = (Object *)&_LC10;
        String::parse_latin1((StrRange *)&local_58);
        local_48 = (Object *)0x108556;
        local_50 = 0;
        local_40 = 0x18;
        String::parse_latin1((StrRange *)&local_50);
        TTR((String *)&local_48,(String *)&local_50);
        Control::set_tooltip_text((String *)pRVar5);
        CowData<char32_t>::_unref();
        CowData<char32_t>::_unref();
        CowData<char32_t>::_unref();
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorRunBar::EditorRunBar() */

void __thiscall EditorRunBar::EditorRunBar(EditorRunBar *this)

{
  StringName *pSVar1;
  Ref *pRVar2;
  undefined8 uVar3;
  Object *pOVar4;
  char cVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  BoxContainer *pBVar9;
  Button *pBVar10;
  PanelContainer *pPVar11;
  long lVar12;
  EditorRunNative *this_00;
  CallableCustom *this_01;
  String *pSVar13;
  MenuButton *pMVar14;
  long *plVar15;
  AcceptDialog *this_02;
  int iVar16;
  code *pcVar17;
  long in_FS_OFFSET;
  float fVar18;
  String local_1d0 [8];
  String local_1c8 [8];
  String local_1c0 [8];
  String local_1b8 [8];
  String local_1b0 [8];
  String local_1a8 [8];
  String local_1a0 [8];
  String local_198 [8];
  String local_190 [8];
  String local_188 [8];
  String local_180 [8];
  String local_178 [8];
  String local_170 [8];
  undefined8 local_168;
  undefined8 local_160;
  char local_158 [8];
  String local_150 [8];
  undefined8 local_148;
  undefined8 local_140;
  char local_138 [8];
  String local_130 [8];
  undefined8 local_128;
  undefined8 local_120;
  char local_118 [8];
  String local_110 [8];
  undefined8 local_108;
  undefined8 local_100;
  char local_f8 [8];
  String local_f0 [8];
  undefined8 local_e8;
  undefined8 local_e0;
  char local_d8 [8];
  String local_d0 [8];
  undefined8 local_c8;
  undefined8 local_c0;
  Object *local_b8;
  Object *local_b0;
  Object *local_a8 [2];
  long local_98 [2];
  Variant *local_88 [2];
  undefined8 local_78 [3];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  MarginContainer::MarginContainer((MarginContainer *)this);
  *(undefined8 *)(this + 0xa70) = 0;
  *(undefined ***)this = &PTR__initialize_classv_0010e400;
  *(undefined1 (*) [16])(this + 0xa10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa20) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa30) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa40) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa50) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa60) = (undefined1  [16])0x0;
  EditorRun::EditorRun((EditorRun *)(this + 0xa78));
  *(undefined8 *)(this + 0xaa0) = 0;
  *(undefined4 *)(this + 0xaa8) = 0;
  *(undefined1 (*) [16])(this + 0xa90) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xab0) = (undefined1  [16])0x0;
  singleton = this;
  pBVar9 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar9,false);
  *(undefined ***)pBVar9 = &PTR__initialize_classv_0010e778;
  pBVar9[0xa0c] = (BoxContainer)0x1;
  postinitialize_handler((Object *)pBVar9);
  *(BoxContainer **)(this + 0xa20) = pBVar9;
  Node::add_child(this,pBVar9,0,0);
  pBVar10 = (Button *)operator_new(0xc10,"");
  local_98[0] = 0;
  Button::Button(pBVar10,(String *)local_98);
  postinitialize_handler((Object *)pBVar10);
  *(Button **)(this + 0xa28) = pBVar10;
  CowData<char32_t>::_unref();
  Button::set_icon_alignment(*(undefined8 *)(this + 0xa28),1);
  Control::set_focus_mode(*(undefined8 *)(this + 0xa28),0);
  pSVar1 = *(StringName **)(this + 0xa28);
  StringName::StringName((StringName *)local_98,"ProfilerAutostartIndicator",false);
  Control::set_theme_type_variation(pSVar1);
  if ((StringName::configured != '\0') && (local_98[0] != 0)) {
    StringName::unref();
  }
  plVar15 = *(long **)(this + 0xa28);
  pcVar17 = *(code **)(*plVar15 + 0x108);
  create_custom_callable_function_pointer<EditorRunBar>
            ((EditorRunBar *)local_98,(char *)this,
             (_func_void *)"&EditorRunBar::_profiler_autostart_indicator_pressed");
  (*pcVar17)(plVar15,SceneStringNames::singleton + 0x238,(StringName *)local_98,0);
  Callable::~Callable((Callable *)local_98);
  Node::add_child(*(undefined8 *)(this + 0xa20),*(undefined8 *)(this + 0xa28),0,0);
  update_profiler_autostart_indicator(this);
  pPVar11 = (PanelContainer *)operator_new(0xa08,"");
  PanelContainer::PanelContainer(pPVar11);
  postinitialize_handler((Object *)pPVar11);
  *(PanelContainer **)(this + 0xa10) = pPVar11;
  Node::add_child(*(undefined8 *)(this + 0xa20),pPVar11,0,0);
  pBVar9 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar9,false);
  *(undefined ***)pBVar9 = &PTR__initialize_classv_0010e778;
  pBVar9[0xa0c] = (BoxContainer)0x1;
  postinitialize_handler((Object *)pBVar9);
  *(BoxContainer **)(this + 0xa18) = pBVar9;
  Node::add_child(*(undefined8 *)(this + 0xa10),pBVar9,0,0);
  lVar12 = Engine::get_singleton();
  if (*(char *)(lVar12 + 0xc4) != '\0') {
    this_02 = (AcceptDialog *)operator_new(0xdb0,"");
    AcceptDialog::AcceptDialog(this_02);
    postinitialize_handler((Object *)this_02);
    *(AcceptDialog **)(this + 0xa48) = this_02;
    fVar18 = (float)EditorScale::get_scale();
    local_88[0] = (Variant *)CONCAT44(fVar18 * _LC32._4_4_,fVar18 * (float)_LC32);
    local_78[0] = Vector2::operator_cast_to_Vector2i((Vector2 *)local_88);
    Window::set_min_size((Vector2i *)this_02);
    pSVar13 = *(String **)(this + 0xa48);
    local_98[0] = 0;
    String::parse_latin1((String *)local_98,"");
    local_a8[0] = (Object *)0x0;
    String::parse_latin1((String *)local_a8,"Recovery Mode");
    TTR((String *)&local_b0,(String *)local_a8);
    Window::set_title(pSVar13);
    CowData<char32_t>::_unref();
    CowData<char32_t>::_unref();
    CowData<char32_t>::_unref();
    uVar3 = *(undefined8 *)(this + 0xa48);
    local_98[0] = 0;
    String::parse_latin1((String *)local_98,"");
    local_a8[0] = (Object *)0x0;
    String::parse_latin1
              ((String *)local_a8,
               "To disable Recovery Mode, reload the project by pressing the Reload button next to the Recovery Mode banner, or by reopening the project normally."
              );
    TTR((String *)&local_b0,(String *)local_a8);
    String::utf8((char *)&local_b8,0x1084f0);
    local_c0 = 0;
    String::parse_latin1((String *)&local_c0,"");
    local_c8 = 0;
    String::parse_latin1
              ((String *)&local_c8,
               "If the project cannot be opened outside of this mode, then it\'s very likely any of these components is preventing this project from launching. This mode is intended only for basic editing to troubleshoot such issues, and therefore it is not possible to run a project in this mode."
              );
    TTR(local_d0,(String *)&local_c8);
    String::utf8(local_d8,0x1084f0);
    local_e0 = 0;
    String::parse_latin1((String *)&local_e0,"");
    local_e8 = 0;
    String::parse_latin1((String *)&local_e8,"Automatic scene restoring");
    TTR(local_f0,(String *)&local_e8);
    String::utf8(local_f8,0x1085b2);
    local_100 = 0;
    String::parse_latin1((String *)&local_100,"");
    local_108 = 0;
    String::parse_latin1((String *)&local_108,"GDExtension addons");
    TTR(local_110,(String *)&local_108);
    String::utf8(local_118,0x1085b2);
    local_120 = 0;
    String::parse_latin1((String *)&local_120,"");
    local_128 = 0;
    String::parse_latin1((String *)&local_128,"Editor plugins");
    TTR(local_130,(String *)&local_128);
    String::utf8(local_138,0x1085b2);
    local_140 = 0;
    String::parse_latin1((String *)&local_140,"");
    local_148 = 0;
    String::parse_latin1((String *)&local_148,"Tool scripts");
    TTR(local_150,(String *)&local_148);
    String::utf8(local_158,0x1085e8);
    local_160 = 0;
    String::parse_latin1((String *)&local_160,"");
    local_168 = 0;
    String::parse_latin1
              ((String *)&local_168,
               "Godot opened the project in Recovery Mode, which is a special mode that can help recover projects that crash the engine upon initialization. The following features have been temporarily disabled:"
              );
    TTR(local_170,(String *)&local_168);
    String::operator+(local_178,local_170);
    String::operator+(local_180,local_178);
    String::operator+(local_188,local_180);
    String::operator+(local_190,local_188);
    String::operator+(local_198,local_190);
    String::operator+(local_1a0,local_198);
    String::operator+(local_1a8,local_1a0);
    String::operator+(local_1b0,local_1a8);
    String::operator+(local_1b8,local_1b0);
    String::operator+(local_1c0,local_1b8);
    String::operator+(local_1c8,local_1c0);
    String::operator+(local_1d0,local_1c8);
    AcceptDialog::set_text(uVar3,local_1d0);
    CowData<char32_t>::_unref();
    CowData<char32_t>::_unref();
    CowData<char32_t>::_unref();
    CowData<char32_t>::_unref();
    CowData<char32_t>::_unref();
    CowData<char32_t>::_unref();
    CowData<char32_t>::_unref();
    CowData<char32_t>::_unref();
    CowData<char32_t>::_unref();
    CowData<char32_t>::_unref();
    CowData<char32_t>::_unref();
    CowData<char32_t>::_unref();
    CowData<char32_t>::_unref();
    CowData<char32_t>::_unref();
    CowData<char32_t>::_unref();
    CowData<char32_t>::_unref();
    CowData<char32_t>::_unref();
    CowData<char32_t>::_unref();
    CowData<char32_t>::_unref();
    CowData<char32_t>::_unref();
    CowData<char32_t>::_unref();
    CowData<char32_t>::_unref();
    CowData<char32_t>::_unref();
    CowData<char32_t>::_unref();
    CowData<char32_t>::_unref();
    CowData<char32_t>::_unref();
    CowData<char32_t>::_unref();
    CowData<char32_t>::_unref();
    CowData<char32_t>::_unref();
    CowData<char32_t>::_unref();
    CowData<char32_t>::_unref();
    CowData<char32_t>::_unref();
    CowData<char32_t>::_unref();
    CowData<char32_t>::_unref();
    CowData<char32_t>::_unref();
    CowData<char32_t>::_unref();
    CowData<char32_t>::_unref();
    CowData<char32_t>::_unref();
    CowData<char32_t>::_unref();
    AcceptDialog::set_autowrap(SUB81(*(undefined8 *)(this + 0xa48),0));
    Node::add_child(this,*(undefined8 *)(this + 0xa48),0,0);
    pBVar10 = (Button *)operator_new(0xc10,"");
    local_98[0] = 0;
    Button::Button(pBVar10,(String *)local_98);
    postinitialize_handler((Object *)pBVar10);
    *(Button **)(this + 0xa40) = pBVar10;
    CowData<char32_t>::_unref();
    Node::add_child(*(undefined8 *)(this + 0xa18),*(undefined8 *)(this + 0xa40),0,0);
    pSVar1 = *(StringName **)(this + 0xa40);
    StringName::StringName((StringName *)local_98,"RunBarButton",false);
    Control::set_theme_type_variation(pSVar1);
    if ((StringName::configured != '\0') && (local_98[0] != 0)) {
      StringName::unref();
    }
    Control::set_focus_mode(*(undefined8 *)(this + 0xa40),0);
    pSVar13 = *(String **)(this + 0xa40);
    local_98[0] = 0;
    String::parse_latin1((String *)local_98,"");
    local_a8[0] = (Object *)0x0;
    String::parse_latin1((String *)local_a8,"Disable recovery mode and reload the project.");
    TTR((String *)&local_b0,(String *)local_a8);
    Control::set_tooltip_text(pSVar13);
    CowData<char32_t>::_unref();
    CowData<char32_t>::_unref();
    CowData<char32_t>::_unref();
    plVar15 = *(long **)(this + 0xa40);
    pcVar17 = *(code **)(*plVar15 + 0x108);
    create_custom_callable_function_pointer<EditorRunBar>
              ((EditorRunBar *)local_98,(char *)this,
               (_func_void *)"&EditorRunBar::recovery_mode_reload_project");
    (*pcVar17)(plVar15,SceneStringNames::singleton + 0x238,(StringName *)local_98,0);
    Callable::~Callable((Callable *)local_98);
    pPVar11 = (PanelContainer *)operator_new(0xa08,"");
    PanelContainer::PanelContainer(pPVar11);
    postinitialize_handler((Object *)pPVar11);
    *(PanelContainer **)(this + 0xa30) = pPVar11;
    Node::add_child(*(undefined8 *)(this + 0xa18),pPVar11,0,0);
    pBVar10 = (Button *)operator_new(0xc10,"");
    local_98[0] = 0;
    Button::Button(pBVar10,(String *)local_98);
    postinitialize_handler((Object *)pBVar10);
    *(Button **)(this + 0xa38) = pBVar10;
    CowData<char32_t>::_unref();
    Node::add_child(*(undefined8 *)(this + 0xa30),*(undefined8 *)(this + 0xa38),0,0);
    pSVar1 = *(StringName **)(this + 0xa38);
    StringName::StringName((StringName *)local_98,"RunBarButton",false);
    Control::set_theme_type_variation(pSVar1);
    if ((StringName::configured != '\0') && (local_98[0] != 0)) {
      StringName::unref();
    }
    Control::set_focus_mode(*(undefined8 *)(this + 0xa38),0);
    pSVar13 = *(String **)(this + 0xa38);
    local_98[0] = 0;
    String::parse_latin1((String *)local_98,"");
    local_a8[0] = (Object *)0x0;
    String::parse_latin1((String *)local_a8,"Recovery Mode");
    TTR((String *)&local_b0,(String *)local_a8);
    Button::set_text(pSVar13);
    CowData<char32_t>::_unref();
    CowData<char32_t>::_unref();
    CowData<char32_t>::_unref();
    pSVar13 = *(String **)(this + 0xa38);
    local_98[0] = 0;
    String::parse_latin1((String *)local_98,"");
    local_a8[0] = (Object *)0x0;
    String::parse_latin1((String *)local_a8,"Recovery Mode is enabled. Click for more details.");
    TTR((String *)&local_b0,(String *)local_a8);
    Control::set_tooltip_text(pSVar13);
    CowData<char32_t>::_unref();
    CowData<char32_t>::_unref();
    CowData<char32_t>::_unref();
    plVar15 = *(long **)(this + 0xa38);
    pcVar17 = *(code **)(*plVar15 + 0x108);
    create_custom_callable_function_pointer<EditorRunBar>
              ((EditorRunBar *)local_98,(char *)this,
               (_func_void *)"&EditorRunBar::recovery_mode_show_dialog");
    lVar12 = SceneStringNames::singleton + 0x238;
    goto LAB_00102910;
  }
  pBVar10 = (Button *)operator_new(0xc10,"");
  local_98[0] = 0;
  Button::Button(pBVar10,(String *)local_98);
  postinitialize_handler((Object *)pBVar10);
  *(Button **)(this + 0xa50) = pBVar10;
  CowData<char32_t>::_unref();
  Node::add_child(*(undefined8 *)(this + 0xa18),*(undefined8 *)(this + 0xa50),0,0);
  pSVar1 = *(StringName **)(this + 0xa50);
  StringName::StringName((StringName *)local_98,"RunBarButton",false);
  Control::set_theme_type_variation(pSVar1);
  if ((StringName::configured != '\0') && (local_98[0] != 0)) {
    StringName::unref();
  }
  BaseButton::set_toggle_mode(SUB81(*(undefined8 *)(this + 0xa50),0));
  Control::set_focus_mode(*(undefined8 *)(this + 0xa50),0);
  pSVar13 = *(String **)(this + 0xa50);
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"Run the project\'s default scene.");
  Control::set_tooltip_text(pSVar13);
  CowData<char32_t>::_unref();
  plVar15 = *(long **)(this + 0xa50);
  pcVar17 = *(code **)(*plVar15 + 0x108);
  create_custom_callable_function_pointer<EditorRunBar,bool>
            ((EditorRunBar *)local_98,(char *)this,
             (_func_void_bool *)"&EditorRunBar::play_main_scene");
  Variant::Variant((Variant *)local_78,false);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  local_88[0] = (Variant *)local_78;
  Callable::bindp((Variant **)local_a8,(int)(StringName *)local_98);
  if (Variant::needs_deinit[(int)local_60] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[(int)local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  (*pcVar17)(plVar15,SceneStringNames::singleton + 0x238,(Callable *)local_a8,0);
  Callable::~Callable((Callable *)local_a8);
  Callable::~Callable((Callable *)local_98);
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"");
  local_a8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_a8,"Run Project");
  local_b0 = (Object *)0x0;
  String::parse_latin1((String *)&local_b0,"editor/run_project");
  ED_SHORTCUT_AND_COMMAND
            (&local_b8,(String *)&local_b0,(Callable *)local_a8,0x400020,(StringName *)local_98);
  if (((local_b8 != (Object *)0x0) &&
      (cVar5 = RefCounted::unreference(), pOVar4 = local_b8, cVar5 != '\0')) &&
     (cVar5 = predelete_handler(local_b8), cVar5 != '\0')) {
    (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
    Memory::free_static(pOVar4,false);
  }
  CowData<char32_t>::_unref();
  CowData<char32_t>::_unref();
  CowData<char32_t>::_unref();
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"macos");
  local_a8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_a8,"editor/run_project");
  ED_SHORTCUT_OVERRIDE((Callable *)local_a8,(StringName *)local_98,0x8000042,0);
  CowData<char32_t>::_unref();
  CowData<char32_t>::_unref();
  pRVar2 = *(Ref **)(this + 0xa50);
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"editor/run_project");
  ED_GET_SHORTCUT((String *)local_a8);
  BaseButton::set_shortcut(pRVar2);
  if (((local_a8[0] != (Object *)0x0) &&
      (cVar5 = RefCounted::unreference(), pOVar4 = local_a8[0], cVar5 != '\0')) &&
     (cVar5 = predelete_handler(local_a8[0]), cVar5 != '\0')) {
    (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
    Memory::free_static(pOVar4,false);
  }
  CowData<char32_t>::_unref();
  pBVar10 = (Button *)operator_new(0xc10,"");
  local_98[0] = 0;
  Button::Button(pBVar10,(String *)local_98);
  postinitialize_handler((Object *)pBVar10);
  *(Button **)(this + 0xa58) = pBVar10;
  CowData<char32_t>::_unref();
  Node::add_child(*(undefined8 *)(this + 0xa18),*(undefined8 *)(this + 0xa58),0,0);
  pSVar1 = *(StringName **)(this + 0xa58);
  StringName::StringName((StringName *)local_98,"RunBarButton",false);
  Control::set_theme_type_variation(pSVar1);
  if ((StringName::configured != '\0') && (local_98[0] != 0)) {
    StringName::unref();
  }
  BaseButton::set_toggle_mode(SUB81(*(undefined8 *)(this + 0xa58),0));
  Control::set_focus_mode(*(undefined8 *)(this + 0xa58),0);
  pSVar13 = *(String **)(this + 0xa58);
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"Pause the running project\'s execution for debugging.");
  Control::set_tooltip_text(pSVar13);
  CowData<char32_t>::_unref();
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xa58),0));
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"Pause Running Project");
  local_a8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_a8,"editor/pause_running_project");
  ED_SHORTCUT((String *)&local_b0,(Callable *)local_a8,(StringName *)local_98,0x400022,0);
  if (((local_b0 != (Object *)0x0) &&
      (cVar5 = RefCounted::unreference(), pOVar4 = local_b0, cVar5 != '\0')) &&
     (cVar5 = predelete_handler(local_b0), cVar5 != '\0')) {
    (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
    Memory::free_static(pOVar4,false);
  }
  CowData<char32_t>::_unref();
  CowData<char32_t>::_unref();
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"macos");
  local_a8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_a8,"editor/pause_running_project");
  ED_SHORTCUT_OVERRIDE((Callable *)local_a8,(StringName *)local_98,0x18000059,0);
  CowData<char32_t>::_unref();
  CowData<char32_t>::_unref();
  pRVar2 = *(Ref **)(this + 0xa58);
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"editor/pause_running_project");
  ED_GET_SHORTCUT((String *)local_a8);
  BaseButton::set_shortcut(pRVar2);
  if (((local_a8[0] != (Object *)0x0) &&
      (cVar5 = RefCounted::unreference(), pOVar4 = local_a8[0], cVar5 != '\0')) &&
     (cVar5 = predelete_handler(local_a8[0]), cVar5 != '\0')) {
    (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
    Memory::free_static(pOVar4,false);
  }
  CowData<char32_t>::_unref();
  pBVar10 = (Button *)operator_new(0xc10,"");
  local_98[0] = 0;
  Button::Button(pBVar10,(String *)local_98);
  postinitialize_handler((Object *)pBVar10);
  *(Button **)(this + 0xa60) = pBVar10;
  CowData<char32_t>::_unref();
  Node::add_child(*(undefined8 *)(this + 0xa18),*(undefined8 *)(this + 0xa60),0,0);
  pSVar1 = *(StringName **)(this + 0xa60);
  StringName::StringName((StringName *)local_98,"RunBarButton",false);
  Control::set_theme_type_variation(pSVar1);
  if ((StringName::configured != '\0') && (local_98[0] != 0)) {
    StringName::unref();
  }
  Control::set_focus_mode(*(undefined8 *)(this + 0xa60),0);
  pSVar13 = *(String **)(this + 0xa60);
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"Stop the currently running project.");
  Control::set_tooltip_text(pSVar13);
  CowData<char32_t>::_unref();
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xa60),0));
  plVar15 = *(long **)(this + 0xa60);
  pcVar17 = *(code **)(*plVar15 + 0x108);
  create_custom_callable_function_pointer<EditorRunBar>
            ((EditorRunBar *)local_98,(char *)this,(_func_void *)"&EditorRunBar::stop_playing");
  (*pcVar17)(plVar15,SceneStringNames::singleton + 0x238,(StringName *)local_98,0);
  Callable::~Callable((Callable *)local_98);
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"Stop Running Project");
  local_a8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_a8,"editor/stop_running_project");
  ED_SHORTCUT((String *)&local_b0,(Callable *)local_a8,(StringName *)local_98,0x400023,0);
  if (((local_b0 != (Object *)0x0) &&
      (cVar5 = RefCounted::unreference(), pOVar4 = local_b0, cVar5 != '\0')) &&
     (cVar5 = predelete_handler(local_b0), cVar5 != '\0')) {
    (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
    Memory::free_static(pOVar4,false);
  }
  CowData<char32_t>::_unref();
  CowData<char32_t>::_unref();
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"macos");
  local_a8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_a8,"editor/stop_running_project");
  ED_SHORTCUT_OVERRIDE((Callable *)local_a8,(StringName *)local_98,0x800002e,0);
  CowData<char32_t>::_unref();
  CowData<char32_t>::_unref();
  pRVar2 = *(Ref **)(this + 0xa60);
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"editor/stop_running_project");
  ED_GET_SHORTCUT((String *)local_a8);
  BaseButton::set_shortcut(pRVar2);
  if (((local_a8[0] != (Object *)0x0) &&
      (cVar5 = RefCounted::unreference(), pOVar4 = local_a8[0], cVar5 != '\0')) &&
     (cVar5 = predelete_handler(local_a8[0]), cVar5 != '\0')) {
    (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
    Memory::free_static(pOVar4,false);
  }
  CowData<char32_t>::_unref();
  this_00 = (EditorRunNative *)operator_new(0xa40,"");
  EditorRunNative::EditorRunNative(this_00);
  postinitialize_handler((Object *)this_00);
  *(EditorRunNative **)(this + 0xa90) = this_00;
  Node::add_child(*(undefined8 *)(this + 0xa18),this_00,0,0);
  plVar15 = *(long **)(this + 0xa90);
  pcVar17 = *(code **)(*plVar15 + 0x108);
  this_01 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this_01);
  *(undefined8 *)(this_01 + 0x40) = 0;
  *(undefined **)(this_01 + 0x20) = &_LC10;
  *(undefined1 (*) [16])(this_01 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)this_01 = &PTR_hash_0010eca0;
  uVar3 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(this_01 + 0x10) = 0;
  *(undefined8 *)(this_01 + 0x30) = uVar3;
  *(code **)(this_01 + 0x38) = _run_native;
  *(EditorRunBar **)(this_01 + 0x28) = this;
  CallableCustomMethodPointerBase::_setup((uint *)this_01,(int)this_01 + 0x28);
  *(char **)(this_01 + 0x20) = "EditorRunBar::_run_native";
  Callable::Callable((Callable *)local_98,this_01);
  StringName::StringName((StringName *)local_a8,"native_run",false);
  (*pcVar17)(plVar15,(Callable *)local_a8,(StringName *)local_98,0);
  if ((StringName::configured != '\0') && (local_a8[0] != (Object *)0x0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_98);
  pSVar13 = (String *)OS::get_singleton();
  local_a8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_a8,"xr_editor");
  cVar5 = OS::has_feature(pSVar13);
  iVar16 = (int)(Callable *)local_a8;
  if (cVar5 == '\0') {
LAB_00102206:
    CowData<char32_t>::_unref();
LAB_0010220e:
    pBVar10 = (Button *)operator_new(0xc10,"");
    local_98[0] = 0;
    Button::Button(pBVar10,(String *)local_98);
    postinitialize_handler((Object *)pBVar10);
    *(Button **)(this + 0xa68) = pBVar10;
    CowData<char32_t>::_unref();
    BaseButton::set_toggle_mode(SUB81(*(undefined8 *)(this + 0xa68),0));
    plVar15 = *(long **)(this + 0xa68);
    pcVar17 = *(code **)(*plVar15 + 0x108);
    create_custom_callable_function_pointer<EditorRunBar,int>
              ((EditorRunBar *)local_98,(char *)this,
               (_func_void_int *)"&EditorRunBar::_play_current_pressed");
    Callable::bind<int>(iVar16);
    cVar5 = '\0';
    (*pcVar17)(plVar15,SceneStringNames::singleton + 0x238,(Callable *)local_a8,0);
    Callable::~Callable((Callable *)local_a8);
    Callable::~Callable((Callable *)local_98);
    pMVar14 = *(MenuButton **)(this + 0xa68);
  }
  else {
    iVar8 = XRServer::get_xr_mode();
    if (iVar8 != 2) {
      iVar8 = XRServer::get_xr_mode();
      if (iVar8 != 0) goto LAB_00102206;
      ProjectSettings::get_singleton();
      StringName::StringName((StringName *)local_98,"xr/openxr/enabled",false);
      ProjectSettings::get_setting_with_override((StringName *)local_78);
      bVar7 = Variant::operator_cast_to_bool((Variant *)local_78);
      if (Variant::needs_deinit[(int)local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_98[0] != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref();
      if (bVar7) goto LAB_00102a66;
      goto LAB_0010220e;
    }
    CowData<char32_t>::_unref();
LAB_00102a66:
    pMVar14 = (MenuButton *)operator_new(0xc68,"");
    local_98[0] = 0;
    MenuButton::MenuButton(pMVar14,(String *)local_98);
    postinitialize_handler((Object *)pMVar14);
    CowData<char32_t>::_unref();
    plVar15 = (long *)MenuButton::get_popup();
    local_98[0] = 0;
    String::parse_latin1((String *)local_98,"Run Scene in Regular Mode");
    PopupMenu::add_item(plVar15,(StringName *)local_98,0,0);
    CowData<char32_t>::_unref();
    local_98[0] = 0;
    String::parse_latin1((String *)local_98,"Run Scene in XR Mode");
    PopupMenu::add_item(plVar15,(StringName *)local_98,1,0);
    CowData<char32_t>::_unref();
    pcVar17 = *(code **)(*plVar15 + 0x108);
    create_custom_callable_function_pointer<EditorRunBar,int>
              ((EditorRunBar *)local_98,(char *)this,
               (_func_void_int *)"&EditorRunBar::_play_current_pressed");
    (*pcVar17)(plVar15,SceneStringNames::singleton + 0x240,(StringName *)local_98,0);
    Callable::~Callable((Callable *)local_98);
    *(MenuButton **)(this + 0xa68) = pMVar14;
  }
  Node::add_child(*(undefined8 *)(this + 0xa18),pMVar14,0,0);
  pSVar1 = *(StringName **)(this + 0xa68);
  StringName::StringName((StringName *)local_98,"RunBarButton",false);
  Control::set_theme_type_variation(pSVar1);
  if ((StringName::configured != '\0') && (local_98[0] != 0)) {
    StringName::unref();
  }
  Control::set_focus_mode(*(undefined8 *)(this + 0xa68),0);
  pSVar13 = *(String **)(this + 0xa68);
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"Run the currently edited scene.");
  Control::set_tooltip_text(pSVar13);
  CowData<char32_t>::_unref();
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"");
  local_a8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_a8,"Run Current Scene");
  local_b0 = (Object *)0x0;
  String::parse_latin1((String *)&local_b0,"editor/run_current_scene");
  ED_SHORTCUT_AND_COMMAND
            (&local_b8,(String *)&local_b0,(Callable *)local_a8,0x400021,(StringName *)local_98);
  if (((local_b8 != (Object *)0x0) &&
      (cVar6 = RefCounted::unreference(), pOVar4 = local_b8, cVar6 != '\0')) &&
     (cVar6 = predelete_handler(local_b8), cVar6 != '\0')) {
    (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
    Memory::free_static(pOVar4,false);
  }
  CowData<char32_t>::_unref();
  CowData<char32_t>::_unref();
  CowData<char32_t>::_unref();
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"macos");
  local_a8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_a8,"editor/run_current_scene");
  ED_SHORTCUT_OVERRIDE((Callable *)local_a8,(StringName *)local_98,0x8000052,0);
  CowData<char32_t>::_unref();
  CowData<char32_t>::_unref();
  pRVar2 = *(Ref **)(this + 0xa68);
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"editor/run_current_scene");
  ED_GET_SHORTCUT((String *)local_a8);
  BaseButton::set_shortcut(pRVar2);
  if (((local_a8[0] != (Object *)0x0) &&
      (cVar6 = RefCounted::unreference(), pOVar4 = local_a8[0], cVar6 != '\0')) &&
     (cVar6 = predelete_handler(local_a8[0]), cVar6 != '\0')) {
    (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
    Memory::free_static(pOVar4,false);
  }
  CowData<char32_t>::_unref();
  if (cVar5 == '\0') {
    pBVar10 = (Button *)operator_new(0xc10,"");
    local_98[0] = 0;
    Button::Button(pBVar10,(String *)local_98);
    postinitialize_handler((Object *)pBVar10);
    *(Button **)(this + 0xa70) = pBVar10;
    CowData<char32_t>::_unref();
    BaseButton::set_toggle_mode(SUB81(*(undefined8 *)(this + 0xa70),0));
    plVar15 = *(long **)(this + 0xa70);
    pcVar17 = *(code **)(*plVar15 + 0x108);
    create_custom_callable_function_pointer<EditorRunBar,int>
              ((EditorRunBar *)local_98,(char *)this,
               (_func_void_int *)"&EditorRunBar::_play_custom_pressed");
    Callable::bind<int>(iVar16);
    (*pcVar17)(plVar15,SceneStringNames::singleton + 0x238,(Callable *)local_a8,0);
    Callable::~Callable((Callable *)local_a8);
    Callable::~Callable((Callable *)local_98);
    pMVar14 = *(MenuButton **)(this + 0xa70);
  }
  else {
    pMVar14 = (MenuButton *)operator_new(0xc68,"");
    local_98[0] = 0;
    MenuButton::MenuButton(pMVar14,(String *)local_98);
    postinitialize_handler((Object *)pMVar14);
    CowData<char32_t>::_unref();
    plVar15 = (long *)MenuButton::get_popup();
    local_98[0] = 0;
    String::parse_latin1((String *)local_98,"Run in Regular Mode");
    PopupMenu::add_item(plVar15,(StringName *)local_98,0,0);
    CowData<char32_t>::_unref();
    local_98[0] = 0;
    String::parse_latin1((String *)local_98,"Run in XR Mode");
    PopupMenu::add_item(plVar15,(StringName *)local_98,1,0);
    CowData<char32_t>::_unref();
    pcVar17 = *(code **)(*plVar15 + 0x108);
    create_custom_callable_function_pointer<EditorRunBar,int>
              ((EditorRunBar *)local_98,(char *)this,
               (_func_void_int *)"&EditorRunBar::_play_custom_pressed");
    (*pcVar17)(plVar15,SceneStringNames::singleton + 0x240,(StringName *)local_98,0);
    Callable::~Callable((Callable *)local_98);
    *(MenuButton **)(this + 0xa70) = pMVar14;
  }
  Node::add_child(*(undefined8 *)(this + 0xa18),pMVar14,0,0);
  pSVar1 = *(StringName **)(this + 0xa70);
  StringName::StringName((StringName *)local_98,"RunBarButton",false);
  Control::set_theme_type_variation(pSVar1);
  if ((StringName::configured != '\0') && (local_98[0] != 0)) {
    StringName::unref();
  }
  Control::set_focus_mode(*(undefined8 *)(this + 0xa70),0);
  pSVar13 = *(String **)(this + 0xa70);
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"Run a specific scene.");
  Control::set_tooltip_text(pSVar13);
  CowData<char32_t>::_unref();
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"");
  local_a8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_a8,"Run Specific Scene");
  local_b0 = (Object *)0x0;
  String::parse_latin1((String *)&local_b0,"editor/run_specific_scene");
  ED_SHORTCUT_AND_COMMAND
            (&local_b8,(String *)&local_b0,(Callable *)local_a8,0x12400020,(StringName *)local_98);
  if (((local_b8 != (Object *)0x0) && (cVar5 = RefCounted::unreference(), cVar5 != '\0')) &&
     (cVar5 = predelete_handler(local_b8), cVar5 != '\0')) {
    (**(code **)(*(long *)local_b8 + 0x140))(local_b8);
    Memory::free_static(local_b8,false);
  }
  CowData<char32_t>::_unref();
  CowData<char32_t>::_unref();
  CowData<char32_t>::_unref();
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"macos");
  local_a8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_a8,"editor/run_specific_scene");
  ED_SHORTCUT_OVERRIDE((Callable *)local_a8,(StringName *)local_98,0xa000052,0);
  CowData<char32_t>::_unref();
  CowData<char32_t>::_unref();
  pRVar2 = *(Ref **)(this + 0xa70);
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"editor/run_specific_scene");
  ED_GET_SHORTCUT((String *)local_a8);
  BaseButton::set_shortcut(pRVar2);
  if (((local_a8[0] != (Object *)0x0) &&
      (cVar5 = RefCounted::unreference(), pOVar4 = local_a8[0], cVar5 != '\0')) &&
     (cVar5 = predelete_handler(local_a8[0]), cVar5 != '\0')) {
    (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
    Memory::free_static(pOVar4,false);
  }
  CowData<char32_t>::_unref();
  pPVar11 = (PanelContainer *)operator_new(0xa08,"");
  PanelContainer::PanelContainer(pPVar11);
  postinitialize_handler((Object *)pPVar11);
  *(PanelContainer **)(this + 0xa98) = pPVar11;
  Node::add_child(*(undefined8 *)(this + 0xa18),pPVar11,0,0);
  pBVar10 = (Button *)operator_new(0xc10,"");
  local_98[0] = 0;
  Button::Button(pBVar10,(String *)local_98);
  postinitialize_handler((Object *)pBVar10);
  *(Button **)(this + 0xaa0) = pBVar10;
  CowData<char32_t>::_unref();
  Node::add_child(*(undefined8 *)(this + 0xa98),*(undefined8 *)(this + 0xaa0),0,0);
  pSVar1 = *(StringName **)(this + 0xaa0);
  StringName::StringName((StringName *)local_98,"RunBarButton",false);
  Control::set_theme_type_variation(pSVar1);
  if ((StringName::configured != '\0') && (local_98[0] != 0)) {
    StringName::unref();
  }
  BaseButton::set_toggle_mode(SUB81(*(undefined8 *)(this + 0xaa0),0));
  BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xaa0),0));
  Control::set_focus_mode(*(undefined8 *)(this + 0xaa0),0);
  pSVar13 = *(String **)(this + 0xaa0);
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"");
  local_a8[0] = (Object *)0x0;
  String::parse_latin1
            ((String *)local_a8,
             "Enable Movie Maker mode.\nThe project will run at stable FPS and the visual and audio output will be recorded to a video file."
            );
  TTR((String *)&local_b0,(String *)local_a8);
  Control::set_tooltip_text(pSVar13);
  CowData<char32_t>::_unref();
  CowData<char32_t>::_unref();
  CowData<char32_t>::_unref();
  plVar15 = *(long **)(this + 0xaa0);
  pcVar17 = *(code **)(*plVar15 + 0x108);
  create_custom_callable_function_pointer<EditorRunBar,bool>
            ((EditorRunBar *)local_98,(char *)this,
             (_func_void_bool *)"&EditorRunBar::_write_movie_toggled");
  lVar12 = SceneStringNames::singleton + 0x248;
LAB_00102910:
  (*pcVar17)(plVar15,lVar12,(StringName *)local_98,0);
  Callable::~Callable((Callable *)local_98);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EditorRunBar::get_playing_scene() const */

EditorRunBar * __thiscall EditorRunBar::get_playing_scene(EditorRunBar *this)

{
  long lVar1;
  uint uVar2;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  EditorRun::get_running_scene();
  if ((*(long *)this == 0) || (*(uint *)(*(long *)this + -8) < 2)) {
    uVar2 = EditorRun::get_status();
    if (uVar2 < 2) {
      ProjectSettings::get_singleton();
      StringName::StringName((StringName *)&local_58,"application/run/main_scene",false);
      ProjectSettings::get_setting_with_override((StringName *)local_48);
      Variant::operator_cast_to_String((Variant *)&local_50);
      if (*(long *)this != local_50) {
        CowData<char32_t>::_unref();
        lVar1 = local_50;
        local_50 = 0;
        *(long *)this = lVar1;
      }
      CowData<char32_t>::_unref();
      if (Variant::needs_deinit[local_48[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorRunBar::_run_scene(String const&, Vector<String> const&) */

void EditorRunBar::_run_scene(String *param_1,Vector *param_2)

{
  code *pcVar1;
  String *pSVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long in_FS_OFFSET;
  Vector *local_d8;
  String *local_d0;
  long local_b8;
  long local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  String local_98 [8];
  undefined8 local_90;
  long local_88;
  long local_80;
  undefined8 local_78;
  undefined1 local_70 [16];
  int local_58 [2];
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(int *)(param_1 + 0xaa8) == 3) &&
     ((*(long *)param_2 == 0 || (*(uint *)(*(long *)param_2 + -8) < 2)))) {
    _err_print_error("_run_scene","editor/gui/editor_run_bar.cpp",0xd7,
                     "Condition \"current_mode == RUN_CUSTOM && p_scene_path.is_empty()\" is true.",
                     "Attempting to run a custom scene with an empty path.",0,0);
    goto LAB_00103ba1;
  }
  iVar4 = EditorRun::get_status();
  if (iVar4 == 0) goto LAB_00103ba1;
  lVar5 = Engine::get_singleton();
  if (*(char *)(lVar5 + 0xc4) == '\0') {
    _reset_play_buttons((EditorRunBar *)param_1);
  }
  local_b8 = 0;
  cVar3 = BaseButton::is_pressed();
  if (cVar3 == '\0') {
LAB_00103c0c:
    local_d8 = (Vector *)&local_b8;
    local_b0 = 0;
    if (*(int *)(param_1 + 0xaa8) == 2) {
      if ((*(long *)param_2 != 0) && (1 < *(uint *)(*(long *)param_2 + -8))) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,(CowData *)param_2);
        CowData<char32_t>::_ref((CowData<char32_t> *)(param_1 + 0xab8),(CowData *)&local_b0);
        goto LAB_00103c54;
      }
      if (*(long *)(param_1 + 0x240) == 0) {
        _err_print_error("get_tree","./scene/main/node.h",0x1e5,"Parameter \"data.tree\" is null.",0
                         ,0);
      }
      lVar5 = SceneTree::get_edited_scene_root();
      pSVar2 = EditorNode::singleton;
      if (lVar5 == 0) {
        local_88 = 0;
        String::parse_latin1((String *)&local_88,"");
        local_90 = 0;
        String::parse_latin1((String *)&local_90,"OK");
        TTR((String *)&local_80,(String *)&local_90);
        local_a0 = 0;
        String::parse_latin1((String *)&local_a0,"");
        local_a8 = 0;
        String::parse_latin1((String *)&local_a8,"There is no defined scene to run.");
        TTR(local_98,(String *)&local_a8);
        EditorNode::show_accept(pSVar2,local_98);
        CowData<char32_t>::_unref();
        CowData<char32_t>::_unref();
        CowData<char32_t>::_unref();
        CowData<char32_t>::_unref();
        CowData<char32_t>::_unref();
        CowData<char32_t>::_unref();
        goto LAB_00103d37;
      }
      Node::get_scene_file_path();
      if ((local_80 == 0) || (iVar4 = (int)*(undefined8 *)(local_80 + -8), iVar4 == 0)) {
        CowData<char32_t>::_unref();
      }
      else {
        CowData<char32_t>::_unref();
        if (iVar4 != 1) {
          Node::get_scene_file_path();
          if (local_b0 != local_80) {
            CowData<char32_t>::_unref();
            local_b0 = local_80;
            local_80 = 0;
          }
          CowData<char32_t>::_unref();
          CowData<char32_t>::_ref((CowData<char32_t> *)(param_1 + 0xab8),(CowData *)&local_b0);
          goto LAB_00103c54;
        }
      }
      EditorNode::save_before_run();
    }
    else {
      if (*(int *)(param_1 + 0xaa8) == 3) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,(CowData *)param_2);
        CowData<char32_t>::_ref((CowData<char32_t> *)(param_1 + 0xab0),(CowData *)&local_b0);
      }
      else {
        cVar3 = EditorNode::ensure_main_scene(SUB81(EditorNode::singleton,0));
        if (cVar3 == '\0') goto LAB_00103d37;
        ProjectSettings::get_singleton();
        StringName::StringName((StringName *)&local_88,"application/run/main_scene",false);
        ProjectSettings::get_setting_with_override((StringName *)local_58);
        Variant::operator_cast_to_String((Variant *)&local_80);
        if (local_b0 != local_80) {
          CowData<char32_t>::_unref();
          local_b0 = local_80;
          local_80 = 0;
        }
        CowData<char32_t>::_unref();
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_88 != 0)) {
          StringName::unref();
        }
      }
LAB_00103c54:
      local_d0 = (String *)&local_b0;
      EditorNode::try_autosave();
      cVar3 = EditorNode::call_build();
      pSVar2 = EditorDebuggerNode::singleton;
      if (cVar3 != '\0') {
        local_80 = 0;
        String::parse_latin1((String *)&local_80,"tcp://");
        EditorDebuggerNode::start(pSVar2);
        CowData<char32_t>::_unref();
        iVar4 = EditorRun::run(param_1 + 0xa78,local_d0,local_d8);
        if (iVar4 == 0) {
          _update_play_buttons((EditorRunBar *)param_1);
          BaseButton::set_disabled(SUB81(*(undefined8 *)(param_1 + 0xa60),0));
          if ((_run_scene(String_const&,Vector<String>const&)::{lambda()#1}::operator()()::sname ==
               '\0') &&
             (iVar4 = __cxa_guard_acquire(&_run_scene(String_const&,Vector<String>const&)::
                                           {lambda()#1}::operator()()::sname), iVar4 != 0)) {
            _scs_create((char *)&_run_scene(String_const&,Vector<String>const&)::{lambda()#1}::
                                 operator()()::sname,true);
            __cxa_atexit(StringName::~StringName,
                         &_run_scene(String_const&,Vector<String>const&)::{lambda()#1}::operator()()
                          ::sname,&__dso_handle);
            __cxa_guard_release(&_run_scene(String_const&,Vector<String>const&)::{lambda()#1}::
                                 operator()()::sname);
          }
          local_50 = (undefined1  [16])0x0;
          local_58[0] = 0;
          local_58[1] = 0;
          (**(code **)(*(long *)param_1 + 0xd0))
                    (param_1,&_run_scene(String_const&,Vector<String>const&)::{lambda()#1}::
                              operator()()::sname,0,0);
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
        }
        else {
          EditorDebuggerNode::stop(SUB81(EditorDebuggerNode::singleton,0));
          pSVar2 = EditorNode::singleton;
          local_88 = 0;
          String::parse_latin1((String *)&local_88,"");
          local_90 = 0;
          String::parse_latin1((String *)&local_90,"OK");
          TTR((String *)&local_80,(String *)&local_90);
          local_a0 = 0;
          String::parse_latin1((String *)&local_a0,"");
          local_a8 = 0;
          String::parse_latin1((String *)&local_a8,"Could not start subprocess(es)!");
          TTR(local_98,(String *)&local_a8);
          EditorNode::show_accept(pSVar2,local_98);
          CowData<char32_t>::_unref();
          CowData<char32_t>::_unref();
          CowData<char32_t>::_unref();
          CowData<char32_t>::_unref();
          CowData<char32_t>::_unref();
          CowData<char32_t>::_unref();
        }
      }
    }
LAB_00103d37:
    CowData<char32_t>::_unref();
  }
  else {
    if (*(int *)(param_1 + 0xaa8) == 2) {
      if ((*(long *)param_2 == 0) || (*(uint *)(*(long *)param_2 + -8) < 2)) {
        if (*(long *)(param_1 + 0x240) == 0) {
          _err_print_error("get_tree","./scene/main/node.h",0x1e5,"Parameter \"data.tree\" is null."
                           ,0,0);
        }
        plVar6 = (long *)SceneTree::get_edited_scene_root();
      }
      else {
        iVar4 = EditorData::get_edited_scene_from_path(EditorNode::singleton + 0x430);
        if (iVar4 < 0) goto LAB_00103d66;
        plVar6 = (long *)EditorData::get_edited_scene_root((int)EditorNode::singleton + 0x430);
      }
      if (plVar6 != (long *)0x0) {
        pcVar1 = *(code **)(*plVar6 + 0xa0);
        StringName::StringName((StringName *)&local_80,"movie_file",false);
        cVar3 = (*pcVar1)(plVar6,(StringName *)&local_80);
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
        if (cVar3 != '\0') {
          pcVar1 = *(code **)(*plVar6 + 0xb8);
          local_70 = (undefined1  [16])0x0;
          local_78 = 0;
          StringName::StringName((StringName *)&local_88,"movie_file",false);
          (*pcVar1)(local_58,plVar6,(StringName *)&local_88);
          Variant::operator_cast_to_String((Variant *)&local_80);
          if (local_b8 != local_80) {
            CowData<char32_t>::_unref();
            local_b8 = local_80;
            local_80 = 0;
          }
          CowData<char32_t>::_unref();
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          if ((StringName::configured != '\0') && (local_88 != 0)) {
            StringName::unref();
          }
          if (Variant::needs_deinit[(int)local_78] != '\0') {
            Variant::_clear_internal();
          }
        }
      }
    }
LAB_00103d66:
    if ((local_b8 != 0) && (1 < *(uint *)(local_b8 + -8))) goto LAB_00103c0c;
    ProjectSettings::get_singleton();
    StringName::StringName((StringName *)&local_88,"editor/movie_writer/movie_file",false);
    ProjectSettings::get_setting_with_override((StringName *)local_58);
    Variant::operator_cast_to_String((Variant *)&local_80);
    if (local_b8 != local_80) {
      CowData<char32_t>::_unref();
      local_b8 = local_80;
      local_80 = 0;
    }
    CowData<char32_t>::_unref();
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_88 != 0)) {
      StringName::unref();
    }
    pSVar2 = EditorNode::singleton;
    if ((local_b8 != 0) && (1 < *(uint *)(local_b8 + -8))) goto LAB_00103c0c;
    local_88 = 0;
    String::parse_latin1((String *)&local_88,"");
    local_90 = 0;
    String::parse_latin1((String *)&local_90,"OK");
    TTR((String *)&local_80,(String *)&local_90);
    local_a0 = 0;
    String::parse_latin1((String *)&local_a0,"");
    local_a8 = 0;
    String::parse_latin1
              ((String *)&local_a8,
               "Movie Maker mode is enabled, but no movie file path has been specified.\nA default movie file path can be specified in the project settings under the Editor > Movie Writer category.\nAlternatively, for running single scenes, a `movie_file` string metadata can be added to the root node,\nspecifying the path to a movie file that will be used when recording that scene."
              );
    TTR(local_98,(String *)&local_a8);
    EditorNode::show_accept(pSVar2,local_98);
    CowData<char32_t>::_unref();
    CowData<char32_t>::_unref();
    CowData<char32_t>::_unref();
    CowData<char32_t>::_unref();
    CowData<char32_t>::_unref();
    CowData<char32_t>::_unref();
  }
  CowData<char32_t>::_unref();
LAB_00103ba1:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EditorRunBar::_bind_methods() */

void EditorRunBar::_bind_methods(void)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  int *piVar4;
  long lVar5;
  int *piVar6;
  long in_FS_OFFSET;
  undefined8 local_d8;
  long local_d0;
  char *local_c8;
  undefined8 local_c0;
  char *local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [16];
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
  local_d0 = 0;
  local_b0 = 0xc;
  local_b8 = "play_pressed";
  String::parse_latin1((StrRange *)&local_d0);
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
  local_a8 = (undefined1  [16])0x0;
  if (local_d0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_d0);
  }
  local_d8 = 0;
  local_c0 = 0xc;
  local_c8 = "EditorRunBar";
  String::parse_latin1((StrRange *)&local_d8);
  StringName::StringName((StringName *)&local_c8,(String *)&local_d8,false);
  ClassDB::add_signal((StringName *)&local_c8,(MethodInfo *)&local_b8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref();
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
      if (lVar2 != 0) {
        lVar5 = 0;
        piVar6 = piVar4;
        do {
          if (Variant::needs_deinit[*piVar6] != '\0') {
            Variant::_clear_internal();
          }
          lVar5 = lVar5 + 1;
          piVar6 = piVar6 + 6;
        } while (lVar2 != lVar5);
      }
      Memory::free_static(piVar4 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_78);
  CowData<char32_t>::_unref();
  if ((StringName::configured != '\0') && (local_a8._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref();
  CowData<char32_t>::_unref();
  CowData<char32_t>::_unref();
  local_d0 = 0;
  local_b8 = "stop_pressed";
  local_b0 = 0xc;
  String::parse_latin1((StrRange *)&local_d0);
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
  local_a8 = (undefined1  [16])0x0;
  if (local_d0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_d0);
  }
  local_c8 = "EditorRunBar";
  local_d8 = 0;
  local_c0 = 0xc;
  String::parse_latin1((StrRange *)&local_d8);
  StringName::StringName((StringName *)&local_c8,(String *)&local_d8,false);
  ClassDB::add_signal((StringName *)&local_c8,(MethodInfo *)&local_b8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref();
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
      if (lVar2 != 0) {
        lVar5 = 0;
        piVar6 = piVar4;
        do {
          if (Variant::needs_deinit[*piVar6] != '\0') {
            Variant::_clear_internal();
          }
          lVar5 = lVar5 + 1;
          piVar6 = piVar6 + 6;
        } while (lVar2 != lVar5);
      }
      Memory::free_static(piVar4 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_78);
  CowData<char32_t>::_unref();
  if ((StringName::configured != '\0') && (local_a8._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref();
  CowData<char32_t>::_unref();
  CowData<char32_t>::_unref();
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Error CowData<char32_t>::resize<false>(long) [clone .isra.0] */

void __thiscall CowData<char32_t>::resize<false>(CowData<char32_t> *this,long param_1)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  char *pcVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  size_t __n;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return;
  }
  lVar3 = *(long *)this;
  if (lVar3 == 0) {
    lVar10 = 0;
    lVar3 = 0;
    if (param_1 == 0) {
      return;
    }
  }
  else {
    lVar10 = *(long *)(lVar3 + -8);
    if (param_1 == lVar10) {
      return;
    }
    if (param_1 == 0) {
      _unref();
      return;
    }
    if (1 < *(ulong *)(lVar3 + -0x10)) {
      if (*(long *)this == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      lVar3 = *(long *)(*(long *)this + -8);
      uVar4 = 0x10;
      __n = lVar3 * 4;
      if (__n != 0) {
        uVar4 = __n - 1 | __n - 1 >> 1;
        uVar4 = uVar4 | uVar4 >> 2;
        uVar4 = uVar4 | uVar4 >> 4;
        uVar4 = uVar4 | uVar4 >> 8;
        uVar4 = uVar4 | uVar4 >> 0x10;
        uVar4 = (uVar4 | uVar4 >> 0x20) + 0x11;
      }
      puVar6 = (undefined8 *)Memory::alloc_static(uVar4,false);
      if (puVar6 == (undefined8 *)0x0) {
        _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                         "Parameter \"mem_new\" is null.",0,0);
      }
      else {
        *puVar6 = 1;
        puVar6[1] = lVar3;
        memcpy(puVar6 + 2,*(void **)this,__n);
        _unref();
        *(undefined8 **)this = puVar6 + 2;
      }
    }
    lVar3 = lVar10 * 4;
    if (lVar3 != 0) {
      uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      lVar3 = (uVar4 | uVar4 >> 0x20) + 1;
    }
  }
  if (param_1 * 4 != 0) {
    uVar4 = param_1 * 4 - 1;
    uVar4 = uVar4 | uVar4 >> 1;
    uVar4 = uVar4 | uVar4 >> 2;
    uVar4 = uVar4 | uVar4 >> 4;
    uVar4 = uVar4 | uVar4 >> 8;
    uVar4 = uVar4 | uVar4 >> 0x10;
    uVar4 = uVar4 | uVar4 >> 0x20;
    lVar9 = uVar4 + 1;
    if (lVar9 != 0) {
      if (param_1 <= lVar10) {
        if ((lVar9 != lVar3) && (iVar2 = _realloc(this,lVar9), iVar2 != 0)) {
          return;
        }
        if (*(long *)this != 0) {
          *(long *)(*(long *)this + -8) = param_1;
          return;
        }
        FUN_0010d1c8();
        return;
      }
      if (lVar9 != lVar3) {
        if (lVar10 == 0) {
          puVar5 = (undefined8 *)Memory::alloc_static(uVar4 + 0x11,false);
          if (puVar5 != (undefined8 *)0x0) {
            puVar6 = puVar5 + 2;
            *puVar5 = 1;
            puVar5[1] = 0;
            *(undefined8 **)this = puVar6;
            goto LAB_00104c57;
          }
          uVar8 = 0x171;
          pcVar7 = "Parameter \"mem_new\" is null.";
          goto LAB_00104d32;
        }
        iVar2 = _realloc(this,lVar9);
        if (iVar2 != 0) {
          return;
        }
      }
      puVar6 = *(undefined8 **)this;
      if (puVar6 == (undefined8 *)0x0) {
        FUN_0010d1bc();
        return;
      }
LAB_00104c57:
      puVar6[-1] = param_1;
      return;
    }
  }
  uVar8 = 0x16a;
  pcVar7 = 
  "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
  ;
LAB_00104d32:
  _err_print_error("resize","./core/templates/cowdata.h",uVar8,pcVar7,0,0);
  return;
}



/* EditorRunBar::stop_playing() */

void __thiscall EditorRunBar::stop_playing(EditorRunBar *this)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = EditorRun::get_status();
  if (iVar2 != 2) {
    *(undefined4 *)(this + 0xaa8) = 0;
    EditorRun::stop();
    EditorDebuggerNode::stop(SUB81(EditorDebuggerNode::singleton,0));
    CowData<char32_t>::resize<false>((CowData<char32_t> *)(this + 0xab0),0);
    CowData<char32_t>::resize<false>((CowData<char32_t> *)(this + 0xab8),0);
    BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xa60),0));
    BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xa60),0));
    lVar3 = Engine::get_singleton();
    if (*(char *)(lVar3 + 0xc4) == '\0') {
      _reset_play_buttons(this);
    }
    if (stop_playing()::{lambda()#1}::operator()()::sname == '\0') {
      iVar2 = __cxa_guard_acquire(&stop_playing()::{lambda()#1}::operator()()::sname);
      if (iVar2 != 0) {
        _scs_create((char *)&stop_playing()::{lambda()#1}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&stop_playing()::{lambda()#1}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&stop_playing()::{lambda()#1}::operator()()::sname);
      }
    }
    (**(code **)(*(long *)this + 0xd0))(this,&stop_playing()::{lambda()#1}::operator()()::sname,0,0)
    ;
    if (Variant::needs_deinit[0] != '\0') {
      Variant::_clear_internal();
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorRunBar::stop_child_process(long) */

void EditorRunBar::stop_child_process(long param_1)

{
  char cVar1;
  
  cVar1 = EditorRun::has_child_process(param_1 + 0xa78);
  if (cVar1 != '\0') {
    EditorRun::stop_child_process(param_1 + 0xa78);
    if ((*(long *)(param_1 + 0xa78) == 0) || (*(int *)(*(long *)(param_1 + 0xa78) + 0x10) == 0)) {
      stop_playing((EditorRunBar *)param_1);
      return;
    }
  }
  return;
}



/* EditorRunBar::play_current_scene(bool, Vector<String> const&) */

void EditorRunBar::play_current_scene(bool param_1,Vector *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined7 in_register_00000039;
  EditorRunBar *this;
  long in_FS_OFFSET;
  bool bVar5;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  this = (EditorRunBar *)CONCAT71(in_register_00000039,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = Engine::get_singleton();
  if (*(char *)(lVar2 + 0xc4) == '\0') {
    local_58 = 0;
    plVar1 = (long *)(*(long *)(this + 0xab8) + -0x10);
    if (*(long *)(this + 0xab8) != 0) {
      do {
        lVar2 = *plVar1;
        if (lVar2 == 0) goto LAB_001050b8;
        LOCK();
        lVar3 = *plVar1;
        bVar5 = lVar2 == lVar3;
        if (bVar5) {
          *plVar1 = lVar2 + 1;
          lVar3 = lVar2;
        }
        UNLOCK();
      } while (!bVar5);
      if (lVar3 != -1) {
        local_58 = *(undefined8 *)(this + 0xab8);
      }
    }
LAB_001050b8:
    EditorNode::save_default_environment();
    stop_playing(this);
    *(undefined4 *)(this + 0xaa8) = 2;
    if ((char)param_2 == '\0') {
      local_50 = 0;
      local_48 = "";
      local_40 = 0;
      String::parse_latin1((StrRange *)&local_50);
      _run_scene((String *)this,(Vector *)&local_50);
      CowData<char32_t>::_unref();
    }
    else {
      _run_scene((String *)this,(Vector *)&local_58);
    }
    CowData<char32_t>::_unref();
  }
  else {
    uVar4 = EditorToaster::get_singleton();
    local_50 = 0;
    local_58 = 0;
    local_48 = "";
    local_40 = 0;
    String::parse_latin1((StrRange *)&local_58);
    local_48 = "Recovery Mode is enabled. Disable it to run the project.";
    local_60 = 0;
    local_40 = 0x38;
    String::parse_latin1((StrRange *)&local_60);
    TTR((String *)&local_48,(String *)&local_60);
    EditorToaster::popup_str(uVar4,(String *)&local_48,1,&local_50);
    CowData<char32_t>::_unref();
    CowData<char32_t>::_unref();
    CowData<char32_t>::_unref();
    CowData<char32_t>::_unref();
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EditorRunBar::play_custom_scene(String const&, Vector<String> const&) */

void EditorRunBar::play_custom_scene(String *param_1,Vector *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = Engine::get_singleton();
  if (*(char *)(lVar1 + 0xc4) == '\0') {
    stop_playing((EditorRunBar *)param_1);
    *(undefined4 *)(param_1 + 0xaa8) = 3;
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      _run_scene(param_1,param_2);
      return;
    }
  }
  else {
    uVar2 = EditorToaster::get_singleton();
    local_60 = 0;
    local_58 = 0;
    local_48 = "";
    local_40 = 0;
    String::parse_latin1((StrRange *)&local_58);
    local_48 = "Recovery Mode is enabled. Disable it to run the project.";
    local_50 = 0;
    local_40 = 0x38;
    String::parse_latin1((StrRange *)&local_50);
    TTR((String *)&local_48,(String *)&local_50);
    EditorToaster::popup_str(uVar2,(String *)&local_48,1,&local_60);
    CowData<char32_t>::_unref();
    CowData<char32_t>::_unref();
    CowData<char32_t>::_unref();
    CowData<char32_t>::_unref();
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorRunBar::_run_native(Ref<EditorExportPreset> const&) */

void EditorRunBar::_run_native(Ref *param_1)

{
  String *pSVar1;
  char cVar2;
  int iVar3;
  long in_FS_OFFSET;
  Object *local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_30 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  EditorNode::try_autosave();
  cVar2 = EditorRunNative::is_deploy_debug_remote_enabled();
  if (cVar2 != '\0') {
    stop_playing((EditorRunBar *)param_1);
    cVar2 = EditorNode::call_build();
    pSVar1 = EditorDebuggerNode::singleton;
    if (cVar2 != '\0') {
      EditorExportPreset::get_platform();
      if (*(code **)(*(long *)local_58 + 0x298) == EditorExportPlatform::get_debug_protocol) {
        local_50 = 0;
        local_48 = "tcp://";
        local_40 = 6;
        String::parse_latin1((StrRange *)&local_50);
      }
      else {
        (**(code **)(*(long *)local_58 + 0x298))(&local_50);
      }
      EditorDebuggerNode::start(pSVar1);
      CowData<char32_t>::_unref();
      if (local_58 != (Object *)0x0) {
        cVar2 = RefCounted::unreference();
        if (cVar2 != '\0') {
          cVar2 = predelete_handler(local_58);
          if (cVar2 != '\0') {
            (**(code **)(*(long *)local_58 + 0x140))(local_58);
            Memory::free_static(local_58,false);
          }
        }
      }
      if (_run_native(Ref<EditorExportPreset>const&)::{lambda()#1}::operator()()::sname == '\0') {
        iVar3 = __cxa_guard_acquire(&_run_native(Ref<EditorExportPreset>const&)::{lambda()#1}::
                                     operator()()::sname);
        if (iVar3 != 0) {
          _scs_create((char *)&_run_native(Ref<EditorExportPreset>const&)::{lambda()#1}::
                               operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_run_native(Ref<EditorExportPreset>const&)::{lambda()#1}::operator()()::
                        sname,&__dso_handle);
          __cxa_guard_release(&_run_native(Ref<EditorExportPreset>const&)::{lambda()#1}::
                               operator()()::sname);
        }
      }
      local_38 = 0;
      local_30 = (undefined1  [16])0x0;
      (**(code **)(*(long *)param_1 + 0xd0))
                (param_1,&_run_native(Ref<EditorExportPreset>const&)::{lambda()#1}::operator()()::
                          sname,0,0);
      if (Variant::needs_deinit[(int)local_38] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)(param_1 + 0xa80) = 0;
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EditorRunBar::_notification(int) [clone .part.0] */

void EditorRunBar::_notification(int param_1)

{
  Ref *pRVar1;
  Object *pOVar2;
  ulong uVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  undefined1 uVar7;
  undefined4 in_register_0000003c;
  EditorRunBar *this;
  char *pcVar8;
  StringName *pSVar9;
  undefined1 *puVar10;
  long in_FS_OFFSET;
  undefined1 auVar11 [16];
  long local_78;
  Object *local_70;
  undefined1 local_68 [8];
  ulong local_60;
  undefined1 local_58 [16];
  long local_40;
  
  this = (EditorRunBar *)CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar6 = Engine::get_singleton();
  if (*(char *)(lVar6 + 0xc4) != '\0') {
    pSVar9 = *(StringName **)(this + 0xa10);
    if (_notification(int)::{lambda()#1}::operator()()::sname == '\0') {
      iVar5 = __cxa_guard_acquire(&_notification(int)::{lambda()#1}::operator()()::sname);
      if (iVar5 != 0) {
        _scs_create((char *)&_notification(int)::{lambda()#1}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#1}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#1}::operator()()::sname);
      }
    }
    Control::get_theme_stylebox((StringName *)&local_70,(StringName *)this);
    Control::add_theme_style_override(pSVar9,(Ref *)(SceneStringNames::singleton + 600));
    Ref<StyleBox>::unref((Ref<StyleBox> *)&local_70);
    pSVar9 = *(StringName **)(this + 0xa30);
    if (_notification(int)::{lambda()#2}::operator()()::sname == '\0') {
      iVar5 = __cxa_guard_acquire(&_notification(int)::{lambda()#2}::operator()()::sname);
      if (iVar5 != 0) {
        _scs_create((char *)&_notification(int)::{lambda()#2}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#2}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#2}::operator()()::sname);
      }
    }
    Control::get_theme_stylebox((StringName *)&local_70,(StringName *)this);
    Control::add_theme_style_override(pSVar9,(Ref *)(SceneStringNames::singleton + 600));
    Ref<StyleBox>::unref((Ref<StyleBox> *)&local_70);
    pSVar9 = *(StringName **)(this + 0xa38);
    if (_notification(int)::{lambda()#3}::operator()()::sname == '\0') {
      iVar5 = __cxa_guard_acquire(&_notification(int)::{lambda()#3}::operator()()::sname);
      if (iVar5 != 0) {
        _scs_create((char *)&_notification(int)::{lambda()#3}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#3}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#3}::operator()()::sname);
      }
    }
    Control::get_theme_stylebox((StringName *)&local_70,(StringName *)this);
    StringName::StringName((StringName *)&local_78,"hover",false);
    Control::add_theme_style_override(pSVar9,(Ref *)&local_78);
    if ((StringName::configured != '\0') && (local_78 != 0)) {
      StringName::unref();
    }
    Ref<StyleBox>::unref((Ref<StyleBox> *)&local_70);
    pRVar1 = *(Ref **)(this + 0xa38);
    if (_notification(int)::{lambda()#4}::operator()()::sname == '\0') {
      iVar5 = __cxa_guard_acquire(&_notification(int)::{lambda()#4}::operator()()::sname);
      if (iVar5 != 0) {
        _scs_create((char *)&_notification(int)::{lambda()#4}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#4}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#4}::operator()()::sname);
      }
    }
    Control::get_editor_theme_icon((StringName *)&local_70);
    Button::set_button_icon(pRVar1);
    if (local_70 != (Object *)0x0) {
      cVar4 = RefCounted::unreference();
      pOVar2 = local_70;
      if (cVar4 != '\0') {
        cVar4 = predelete_handler(local_70);
        if (cVar4 != '\0') {
          (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
          Memory::free_static(pOVar2,false);
        }
      }
    }
    pRVar1 = *(Ref **)(this + 0xa40);
    if (_notification(int)::{lambda()#5}::operator()()::sname == '\0') {
      iVar5 = __cxa_guard_acquire(&_notification(int)::{lambda()#5}::operator()()::sname);
      if (iVar5 != 0) {
        _scs_create((char *)&_notification(int)::{lambda()#5}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#5}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#5}::operator()()::sname);
      }
    }
    Control::get_editor_theme_icon((StringName *)&local_70);
    Button::set_button_icon(pRVar1);
    if (local_70 != (Object *)0x0) {
      cVar4 = RefCounted::unreference();
      pOVar2 = local_70;
      if (cVar4 != '\0') {
        cVar4 = predelete_handler(local_70);
        if (cVar4 != '\0') {
          (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
          Memory::free_static(pOVar2,false);
        }
      }
    }
    Control::begin_bulk_theme_override();
    local_58._8_8_ = CONCAT44(_LC142,_UNK_0010f048);
    pSVar9 = *(StringName **)(this + 0xa38);
    local_58._0_8_ = __LC133;
    StringName::StringName((StringName *)&local_70,"icon_normal_color",false);
    Control::add_theme_color_override(pSVar9,(Color *)&local_70);
    if ((StringName::configured != '\0') && (local_70 != (Object *)0x0)) {
      StringName::unref();
    }
    local_58._0_8_ = CONCAT44(_LC145._4_4_,(float)_LC145);
    pSVar9 = *(StringName **)(this + 0xa38);
    local_58._8_8_ = _UNK_0010f058;
    StringName::StringName((StringName *)&local_70,"icon_pressed_color",false);
    Control::add_theme_color_override(pSVar9,(Color *)&local_70);
    if ((StringName::configured != '\0') && (local_70 != (Object *)0x0)) {
      StringName::unref();
    }
    pSVar9 = *(StringName **)(this + 0xa38);
    local_58._0_8_ = __LC137;
    local_58._8_8_ = _UNK_0010f068;
    StringName::StringName((StringName *)&local_70,"icon_hover_color",false);
    Control::add_theme_color_override(pSVar9,(Color *)&local_70);
    if ((StringName::configured != '\0') && (local_70 != (Object *)0x0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_70,"recovery_mode_text_color",false);
    _local_68 = Control::get_theme_color((StringName *)this,(StringName *)&local_70);
    if ((StringName::configured != '\0') && (local_70 != (Object *)0x0)) {
      StringName::unref();
    }
    Control::add_theme_color_override
              (*(StringName **)(this + 0xa38),(Color *)(SceneStringNames::singleton + 0xb0));
    uVar3 = local_60;
    pSVar9 = *(StringName **)(this + 0xa38);
    local_58._0_8_ =
         CONCAT44((_LC140._4_4_ - SUB164(_local_68,4)) * _LC143._4_4_ + SUB164(_local_68,4),
                  ((float)_LC140 - SUB164(_local_68,0)) * (float)_LC143 + SUB164(_local_68,0));
    local_58._8_8_ =
         (ulong)(uint)((_LC142 - (float)local_60) * (float)_LC143 + (float)local_60) |
         uVar3 & 0xffffffff00000000;
    StringName::StringName((StringName *)&local_70,"font_pressed_color",false);
    Control::add_theme_color_override(pSVar9,(Color *)&local_70);
    if ((StringName::configured != '\0') && (local_70 != (Object *)0x0)) {
      StringName::unref();
    }
    uVar3 = local_60;
    pSVar9 = *(StringName **)(this + 0xa38);
    local_58._0_8_ =
         CONCAT44((_LC140._4_4_ - SUB164(_local_68,4)) * _LC145._4_4_ + SUB164(_local_68,4),
                  ((float)_LC140 - SUB164(_local_68,0)) * (float)_LC145 + SUB164(_local_68,0));
    local_58._8_8_ =
         (ulong)(uint)((_LC142 - (float)local_60) * (float)_LC145 + (float)local_60) |
         uVar3 & 0xffffffff00000000;
    StringName::StringName((StringName *)&local_70,"font_hover_color",false);
    Control::add_theme_color_override(pSVar9,(Color *)&local_70);
    if ((StringName::configured != '\0') && (local_70 != (Object *)0x0)) {
      StringName::unref();
    }
    uVar3 = local_60;
    pSVar9 = *(StringName **)(this + 0xa38);
    local_58._0_8_ =
         CONCAT44((_LC140._4_4_ - SUB164(_local_68,4)) * _LC143._4_4_ + SUB164(_local_68,4),
                  ((float)_LC140 - SUB164(_local_68,0)) * (float)_LC143 + SUB164(_local_68,0));
    local_58._8_8_ =
         (ulong)(uint)((_LC142 - (float)local_60) * (float)_LC143 + (float)local_60) |
         uVar3 & 0xffffffff00000000;
    StringName::StringName((StringName *)&local_70,"font_hover_pressed_color",false);
    Control::add_theme_color_override(pSVar9,(Color *)&local_70);
    if ((StringName::configured != '\0') && (local_70 != (Object *)0x0)) {
      StringName::unref();
    }
    Control::end_bulk_theme_override();
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
    goto LAB_001066cd;
  }
  _update_play_buttons(this);
  pRVar1 = *(Ref **)(this + 0xa28);
  if (_notification(int)::{lambda()#6}::operator()()::sname == '\0') {
    iVar5 = __cxa_guard_acquire(&_notification(int)::{lambda()#6}::operator()()::sname);
    if (iVar5 != 0) {
      _scs_create((char *)&_notification(int)::{lambda()#6}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#6}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#6}::operator()()::sname);
    }
  }
  Control::get_editor_theme_icon((StringName *)&local_70);
  Button::set_button_icon(pRVar1);
  if (local_70 != (Object *)0x0) {
    cVar4 = RefCounted::unreference();
    pOVar2 = local_70;
    if (cVar4 != '\0') {
      cVar4 = predelete_handler(local_70);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
  pRVar1 = *(Ref **)(this + 0xa58);
  if (_notification(int)::{lambda()#7}::operator()()::sname == '\0') {
    iVar5 = __cxa_guard_acquire(&_notification(int)::{lambda()#7}::operator()()::sname);
    if (iVar5 != 0) {
      _scs_create((char *)&_notification(int)::{lambda()#7}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#7}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#7}::operator()()::sname);
    }
  }
  Control::get_editor_theme_icon((StringName *)&local_70);
  Button::set_button_icon(pRVar1);
  if (local_70 != (Object *)0x0) {
    cVar4 = RefCounted::unreference();
    pOVar2 = local_70;
    if (cVar4 != '\0') {
      cVar4 = predelete_handler(local_70);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
  pRVar1 = *(Ref **)(this + 0xa60);
  if (_notification(int)::{lambda()#8}::operator()()::sname == '\0') {
    iVar5 = __cxa_guard_acquire(&_notification(int)::{lambda()#8}::operator()()::sname);
    if (iVar5 != 0) {
      _scs_create((char *)&_notification(int)::{lambda()#8}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#8}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#8}::operator()()::sname);
    }
  }
  Control::get_editor_theme_icon((StringName *)&local_70);
  Button::set_button_icon(pRVar1);
  if (local_70 != (Object *)0x0) {
    cVar4 = RefCounted::unreference();
    pOVar2 = local_70;
    if (cVar4 != '\0') {
      cVar4 = predelete_handler(local_70);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
  cVar4 = BaseButton::is_pressed();
  pSVar9 = *(StringName **)(this + 0xa10);
  if (cVar4 == '\0') {
    if (_notification(int)::{lambda()#11}::operator()()::sname == '\0') {
      iVar5 = __cxa_guard_acquire(&_notification(int)::{lambda()#11}::operator()()::sname);
      if (iVar5 != 0) {
        _scs_create((char *)&_notification(int)::{lambda()#11}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#11}::operator()()::sname
                     ,&__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#11}::operator()()::sname);
      }
    }
    Control::get_theme_stylebox((StringName *)&local_70,(StringName *)this);
    Control::add_theme_style_override(pSVar9,(Ref *)(SceneStringNames::singleton + 600));
    Ref<StyleBox>::unref((Ref<StyleBox> *)&local_70);
    pSVar9 = *(StringName **)(this + 0xa98);
    if (_notification(int)::{lambda()#12}::operator()()::sname == '\0') {
      puVar10 = &_notification(int)::{lambda()#12}::operator()()::sname;
      pcVar8 = (char *)&_notification(int)::{lambda()#12}::operator()()::sname;
      iVar5 = __cxa_guard_acquire(&_notification(int)::{lambda()#12}::operator()()::sname);
      if (iVar5 != 0) {
        uVar7 = 0x54;
LAB_00105ab2:
        _scs_create(pcVar8,(bool)uVar7);
        __cxa_atexit(StringName::~StringName,pcVar8,&__dso_handle);
        __cxa_guard_release(puVar10);
      }
    }
  }
  else {
    if (_notification(int)::{lambda()#9}::operator()()::sname == '\0') {
      iVar5 = __cxa_guard_acquire(&_notification(int)::{lambda()#9}::operator()()::sname);
      if (iVar5 != 0) {
        _scs_create((char *)&_notification(int)::{lambda()#9}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#9}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#9}::operator()()::sname);
      }
    }
    Control::get_theme_stylebox((StringName *)&local_70,(StringName *)this);
    Control::add_theme_style_override(pSVar9,(Ref *)(SceneStringNames::singleton + 600));
    Ref<StyleBox>::unref((Ref<StyleBox> *)&local_70);
    pSVar9 = *(StringName **)(this + 0xa98);
    if (_notification(int)::{lambda()#10}::operator()()::sname == '\0') {
      puVar10 = &_notification(int)::{lambda()#10}::operator()()::sname;
      pcVar8 = (char *)&_notification(int)::{lambda()#10}::operator()()::sname;
      iVar5 = __cxa_guard_acquire(&_notification(int)::{lambda()#10}::operator()()::sname);
      uVar7 = 0x2b;
      if (iVar5 != 0) goto LAB_00105ab2;
    }
  }
  Control::get_theme_stylebox((StringName *)&local_70,(StringName *)this);
  Control::add_theme_style_override(pSVar9,(Ref *)(SceneStringNames::singleton + 600));
  Ref<StyleBox>::unref((Ref<StyleBox> *)&local_70);
  pRVar1 = *(Ref **)(this + 0xaa0);
  if (_notification(int)::{lambda()#13}::operator()()::sname == '\0') {
    iVar5 = __cxa_guard_acquire(&_notification(int)::{lambda()#13}::operator()()::sname);
    if (iVar5 != 0) {
      _scs_create((char *)&_notification(int)::{lambda()#13}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#13}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#13}::operator()()::sname);
    }
  }
  Control::get_editor_theme_icon((StringName *)&local_70);
  Button::set_button_icon(pRVar1);
  if (local_70 != (Object *)0x0) {
    cVar4 = RefCounted::unreference();
    pOVar2 = local_70;
    if (cVar4 != '\0') {
      cVar4 = predelete_handler(local_70);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
  Control::begin_bulk_theme_override();
  pSVar9 = *(StringName **)(this + 0xaa0);
  if (_notification(int)::{lambda()#14}::operator()()::sname == '\0') {
    iVar5 = __cxa_guard_acquire(&_notification(int)::{lambda()#14}::operator()()::sname);
    if (iVar5 != 0) {
      _scs_create((char *)&_notification(int)::{lambda()#14}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#14}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#14}::operator()()::sname);
    }
  }
  local_58 = Control::get_theme_color
                       ((StringName *)this,
                        (StringName *)&_notification(int)::{lambda()#14}::operator()()::sname);
  StringName::StringName((StringName *)&local_70,"icon_normal_color",false);
  Control::add_theme_color_override(pSVar9,(Color *)&local_70);
  if ((StringName::configured != '\0') && (local_70 != (Object *)0x0)) {
    StringName::unref();
  }
  pSVar9 = *(StringName **)(this + 0xaa0);
  if (_notification(int)::{lambda()#15}::operator()()::sname == '\0') {
    iVar5 = __cxa_guard_acquire(&_notification(int)::{lambda()#15}::operator()()::sname);
    if (iVar5 != 0) {
      _scs_create((char *)&_notification(int)::{lambda()#15}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#15}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#15}::operator()()::sname);
    }
  }
  auVar11 = Control::get_theme_color
                      ((StringName *)this,
                       (StringName *)&_notification(int)::{lambda()#15}::operator()()::sname);
  local_58 = auVar11;
  StringName::StringName((StringName *)&local_70,"icon_pressed_color",false);
  Control::add_theme_color_override(pSVar9,(Color *)&local_70);
  if ((StringName::configured != '\0') && (local_70 != (Object *)0x0)) {
    StringName::unref();
  }
  pSVar9 = *(StringName **)(this + 0xaa0);
  if (_notification(int)::{lambda()#16}::operator()()::sname == '\0') {
    iVar5 = __cxa_guard_acquire(&_notification(int)::{lambda()#16}::operator()()::sname);
    if (iVar5 != 0) {
      _scs_create((char *)&_notification(int)::{lambda()#16}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#16}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#16}::operator()()::sname);
    }
  }
  auVar11 = Control::get_theme_color
                      ((StringName *)this,
                       (StringName *)&_notification(int)::{lambda()#16}::operator()()::sname);
  local_58 = auVar11;
  StringName::StringName((StringName *)&local_70,"icon_hover_color",false);
  Control::add_theme_color_override(pSVar9,(Color *)&local_70);
  if ((StringName::configured != '\0') && (local_70 != (Object *)0x0)) {
    StringName::unref();
  }
  pSVar9 = *(StringName **)(this + 0xaa0);
  if (_notification(int)::{lambda()#17}::operator()()::sname == '\0') {
    iVar5 = __cxa_guard_acquire(&_notification(int)::{lambda()#17}::operator()()::sname);
    if (iVar5 != 0) {
      _scs_create((char *)&_notification(int)::{lambda()#17}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#17}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#17}::operator()()::sname);
    }
  }
  auVar11 = Control::get_theme_color
                      ((StringName *)this,
                       (StringName *)&_notification(int)::{lambda()#17}::operator()()::sname);
  local_58 = auVar11;
  StringName::StringName((StringName *)&local_70,"icon_hover_pressed_color",false);
  Control::add_theme_color_override(pSVar9,(Color *)&local_70);
  if ((StringName::configured != '\0') && (local_70 != (Object *)0x0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    Control::end_bulk_theme_override();
    return;
  }
LAB_001066cd:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorRunBar::_notification(int) */

void __thiscall EditorRunBar::_notification(EditorRunBar *this,int param_1)

{
  long lVar1;
  long lVar2;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0xd) {
    lVar2 = Engine::get_singleton();
    if (*(char *)(lVar2 + 0xc4) != '\0') {
      Window::popup_centered(*(Vector2i **)(this + 0xa48));
    }
  }
  else {
    if (param_1 == 0x2d) {
      if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
        _notification((int)this);
        return;
      }
      goto LAB_0010679d;
    }
    if (param_1 == 0) {
      lVar2 = Engine::get_singleton();
      if (*(char *)(lVar2 + 0xc4) == '\0') {
        if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
          _reset_play_buttons(this);
          return;
        }
        goto LAB_0010679d;
      }
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010679d:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorRunBar::play_main_scene(bool) */

void __thiscall EditorRunBar::play_main_scene(EditorRunBar *this,bool param_1)

{
  long lVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = Engine::get_singleton();
  if (*(char *)(lVar1 + 0xc4) == '\0') {
    if (param_1) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        EditorRunNative::resume_run_native();
        return;
      }
      goto LAB_0010696a;
    }
    stop_playing(this);
    *(undefined4 *)(this + 0xaa8) = 1;
    local_48 = "";
    local_50 = 0;
    local_60 = 0;
    local_40 = 0;
    String::parse_latin1((StrRange *)&local_60);
    _run_scene((String *)this,(Vector *)&local_60);
    CowData<char32_t>::_unref();
    CowData<String>::_unref((CowData<String> *)&local_50);
  }
  else {
    uVar2 = EditorToaster::get_singleton();
    local_48 = "";
    local_58 = 0;
    local_60 = 0;
    local_40 = 0;
    String::parse_latin1((StrRange *)&local_60);
    local_48 = "Recovery Mode is enabled. Disable it to run the project.";
    local_68 = 0;
    local_40 = 0x38;
    String::parse_latin1((StrRange *)&local_68);
    TTR((String *)&local_48,(String *)&local_68);
    EditorToaster::popup_str(uVar2,(String *)&local_48,1,&local_58);
    CowData<char32_t>::_unref();
    CowData<char32_t>::_unref();
    CowData<char32_t>::_unref();
    CowData<char32_t>::_unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010696a:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* EditorRunBar::_get_xr_mode_play_args(int) */

EditorRunBar * __thiscall EditorRunBar::_get_xr_mode_play_args(EditorRunBar *this,int param_1)

{
  long in_FS_OFFSET;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(this + 8) = 0;
  if (param_1 == 0) {
    local_40 = 0;
    local_30 = 9;
    local_38 = "--xr-mode";
    String::parse_latin1((StrRange *)&local_40);
    Vector<String>::push_back((Vector<String> *)this,(StrRange *)&local_40);
    CowData<char32_t>::_unref();
    local_38 = "off";
    local_30 = 3;
  }
  else {
    if (param_1 != 1) goto LAB_00106bd4;
    local_40 = 0;
    local_30 = 9;
    local_38 = "--xr-mode";
    String::parse_latin1((StrRange *)&local_40);
    Vector<String>::push_back((Vector<String> *)this,(StrRange *)&local_40);
    CowData<char32_t>::_unref();
    local_38 = "on";
    local_30 = 2;
  }
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_40);
  Vector<String>::push_back((Vector<String> *)this,(StrRange *)&local_40);
  CowData<char32_t>::_unref();
LAB_00106bd4:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorRunBar::_quick_run_selected(String const&, int) */

void __thiscall EditorRunBar::_quick_run_selected(EditorRunBar *this,String *param_1,int param_2)

{
  long in_FS_OFFSET;
  EditorRunBar aEStack_38 [8];
  CowData<String> local_30 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  _get_xr_mode_play_args(aEStack_38,param_2);
  play_custom_scene((String *)this,(Vector *)param_1);
  CowData<String>::_unref(local_30);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorRunBar::_play_custom_pressed(int) */

void __thiscall EditorRunBar::_play_custom_pressed(EditorRunBar *this,int param_1)

{
  long *plVar1;
  long lVar2;
  Vector *pVVar3;
  undefined8 uVar4;
  ulong uVar5;
  int iVar6;
  CallableCustom *this_00;
  ulong *puVar7;
  long lVar8;
  undefined8 *puVar9;
  StringName *this_01;
  ulong uVar10;
  long in_FS_OFFSET;
  bool bVar11;
  Callable local_78 [16];
  undefined8 local_68 [2];
  Callable local_58 [8];
  StringName *local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar6 = EditorRun::get_status();
  if ((iVar6 == 2) || (*(int *)(this + 0xaa8) != 3)) {
    stop_playing(this);
    pVVar3 = *(Vector **)(EditorNode::singleton + 0x5c0);
    this_00 = (CallableCustom *)operator_new(0x48,"");
    CallableCustom::CallableCustom(this_00);
    *(undefined **)(this_00 + 0x20) = &_LC10;
    *(undefined1 (*) [16])(this_00 + 0x30) = (undefined1  [16])0x0;
    *(undefined ***)this_00 = &PTR_hash_0010eaf0;
    *(undefined8 *)(this_00 + 0x40) = 0;
    uVar4 = *(undefined8 *)(this + 0x60);
    *(undefined8 *)(this_00 + 0x10) = 0;
    *(undefined8 *)(this_00 + 0x30) = uVar4;
    *(code **)(this_00 + 0x38) = _quick_run_selected;
    *(EditorRunBar **)(this_00 + 0x28) = this;
    CallableCustomMethodPointerBase::_setup((uint *)this_00,(int)this_00 + 0x28);
    *(char **)(this_00 + 0x20) = "EditorRunBar::_quick_run_selected";
    Callable::Callable(local_78,this_00);
    Callable::bind<int>((int)(Callable *)local_68);
    StringName::StringName((StringName *)&local_48,"PackedScene",false);
    iVar6 = 0x18;
    local_50 = (StringName *)0x0;
    puVar7 = (ulong *)Memory::alloc_static(0x18,false);
    if (puVar7 == (ulong *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
    }
    else {
      local_50 = (StringName *)(puVar7 + 2);
      *puVar7 = 1;
      puVar7[2] = 0;
      puVar7[1] = 1;
      if (1 < *puVar7) {
        if (local_50 == (StringName *)0x0) {
          _play_custom_pressed(iVar6);
          return;
        }
        uVar5 = puVar7[1];
        uVar10 = 0x10;
        if (uVar5 * 8 != 0) {
          uVar10 = uVar5 * 8 - 1;
          uVar10 = uVar10 | uVar10 >> 1;
          uVar10 = uVar10 | uVar10 >> 2;
          uVar10 = uVar10 | uVar10 >> 4;
          uVar10 = uVar10 | uVar10 >> 8;
          uVar10 = uVar10 | uVar10 >> 0x10;
          uVar10 = (uVar10 >> 0x20 | uVar10) + 0x11;
        }
        puVar9 = (undefined8 *)Memory::alloc_static(uVar10,false);
        if (puVar9 == (undefined8 *)0x0) {
          _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                           "Parameter \"mem_new\" is null.",0,0);
        }
        else {
          uVar10 = 0;
          *puVar9 = 1;
          puVar9[1] = uVar5;
          this_01 = (StringName *)(puVar9 + 2);
          if (uVar5 != 0) {
            do {
              lVar2 = uVar10 * 8;
              uVar10 = uVar10 + 1;
              StringName::StringName(this_01,local_50 + lVar2);
              this_01 = this_01 + 8;
            } while (uVar5 != uVar10);
          }
          CowData<StringName>::_unref((CowData<StringName> *)&local_50);
          local_50 = (StringName *)(puVar9 + 2);
        }
      }
      StringName::operator=(local_50,(StringName *)&local_48);
    }
    EditorQuickOpenDialog::popup_dialog(pVVar3,local_58);
    CowData<StringName>::_unref((CowData<StringName> *)&local_50);
    if ((StringName::configured != '\0') && (local_48 != 0)) {
      StringName::unref();
    }
    Callable::~Callable((Callable *)local_68);
    Callable::~Callable(local_78);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xa70),0));
      return;
    }
  }
  else {
    _get_xr_mode_play_args((EditorRunBar *)local_58,param_1);
    local_68[0] = 0;
    plVar1 = (long *)(*(long *)(this + 0xab0) + -0x10);
    if (*(long *)(this + 0xab0) != 0) {
      do {
        lVar2 = *plVar1;
        if (lVar2 == 0) goto LAB_00106f8e;
        LOCK();
        lVar8 = *plVar1;
        bVar11 = lVar2 == lVar8;
        if (bVar11) {
          *plVar1 = lVar2 + 1;
          lVar8 = lVar2;
        }
        UNLOCK();
      } while (!bVar11);
      if (lVar8 != -1) {
        local_68[0] = *(undefined8 *)(this + 0xab0);
      }
    }
LAB_00106f8e:
    play_custom_scene((String *)this,(Vector *)local_68);
    CowData<char32_t>::_unref();
    CowData<String>::_unref((CowData<String> *)&local_50);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorRunBar::_play_current_pressed(int) */

void __thiscall EditorRunBar::_play_current_pressed(EditorRunBar *this,int param_1)

{
  int iVar1;
  long in_FS_OFFSET;
  EditorRunBar aEStack_38 [8];
  CowData<String> local_30 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  _get_xr_mode_play_args(aEStack_38,param_1);
  iVar1 = EditorRun::get_status();
  if ((iVar1 == 2) || (*(int *)(this + 0xaa8) != 2)) {
    play_current_scene(SUB81(this,0),(Vector *)0x0);
  }
  else {
    play_current_scene(SUB81(this,0),(Vector *)0x1);
  }
  CowData<String>::_unref(local_30);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
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



/* CallableCustomMethodPointer<EditorRunBar, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorRunBar,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorRunBar,void,int> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorRunBar, void, Ref<EditorExportPreset>
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorRunBar,void,Ref<EditorExportPreset>const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorRunBar,void,Ref<EditorExportPreset>const&> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorRunBar, void, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorRunBar,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorRunBar,void,bool> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorRunBar, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorRunBar,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorRunBar,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorRunBar, void, String const&,
   int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorRunBar,void,String_const&,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorRunBar,void,String_const&,int> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorRunBar, void, int>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorRunBar,void,int>::get_argument_count
          (CallableCustomMethodPointer<EditorRunBar,void,int> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<EditorRunBar, void, Ref<EditorExportPreset>
   const&>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorRunBar,void,Ref<EditorExportPreset>const&>::get_argument_count
          (CallableCustomMethodPointer<EditorRunBar,void,Ref<EditorExportPreset>const&> *this,
          bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<EditorRunBar, void, bool>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorRunBar,void,bool>::get_argument_count
          (CallableCustomMethodPointer<EditorRunBar,void,bool> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<EditorRunBar, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorRunBar,void>::get_argument_count
          (CallableCustomMethodPointer<EditorRunBar,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<EditorRunBar, void, String const&, int>::get_argument_count(bool&)
   const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorRunBar,void,String_const&,int>::get_argument_count
          (CallableCustomMethodPointer<EditorRunBar,void,String_const&,int> *this,bool *param_1)

{
  *param_1 = true;
  return 2;
}



/* CallableCustomMethodPointerBase::get_method() const */

void CallableCustomMethodPointerBase::get_method(void)

{
  long in_RSI;
  StringName *in_RDI;
  
  StringName::StringName(in_RDI,*(char **)(in_RSI + 0x20),false);
  return;
}



/* CallableCustomMethodPointer<EditorRunBar, void, String const&,
   int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorRunBar,void,String_const&,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorRunBar,void,String_const&,int> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorRunBar, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorRunBar,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorRunBar,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorRunBar, void, Ref<EditorExportPreset>
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorRunBar,void,Ref<EditorExportPreset>const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorRunBar,void,Ref<EditorExportPreset>const&> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorRunBar, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorRunBar,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorRunBar,void,int> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorRunBar, void, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorRunBar,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorRunBar,void,bool> *this)

{
  operator_delete(this,0x48);
  return;
}



/* EditorRunBar::_property_get_revertv(StringName const&, Variant&) const */

undefined8 EditorRunBar::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
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



/* EditorRunBar::_property_can_revertv(StringName const&) const */

undefined8 EditorRunBar::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00112008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* HBoxContainer::_property_can_revertv(StringName const&) const */

undefined8 HBoxContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00112008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* EditorRunBar::_get_class_namev() const */

undefined8 * EditorRunBar::_get_class_namev(void)

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
LAB_001076b3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001076b3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"EditorRunBar");
      goto LAB_0010771e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"EditorRunBar");
LAB_0010771e:
  return &_get_class_namev()::_class_name_static;
}



/* CallableCustomMethodPointer<EditorRunBar, void, String const&, int>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorRunBar,void,String_const&,int>::get_object
          (CallableCustomMethodPointer<EditorRunBar,void,String_const&,int> *this)

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
      goto LAB_0010784d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010784d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010784d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorRunBar, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorRunBar,void>::get_object
          (CallableCustomMethodPointer<EditorRunBar,void> *this)

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
      goto LAB_0010794d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010794d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010794d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorRunBar, void, int>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorRunBar,void,int>::get_object
          (CallableCustomMethodPointer<EditorRunBar,void,int> *this)

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



/* CallableCustomMethodPointer<EditorRunBar, void, Ref<EditorExportPreset> const&>::get_object()
   const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorRunBar,void,Ref<EditorExportPreset>const&>::get_object
          (CallableCustomMethodPointer<EditorRunBar,void,Ref<EditorExportPreset>const&> *this)

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



/* CallableCustomMethodPointer<EditorRunBar, void, bool>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorRunBar,void,bool>::get_object
          (CallableCustomMethodPointer<EditorRunBar,void,bool> *this)

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



/* EditorRunBar::_validate_propertyv(PropertyInfo&) const */

void EditorRunBar::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  if ((code *)PTR__validate_property_00112010 == CanvasItem::_validate_property) {
    return;
  }
  Control::_validate_property(param_1);
  return;
}



/* HBoxContainer::_validate_propertyv(PropertyInfo&) const */

void HBoxContainer::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_00112018 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* EditorRunBar::is_class_ptr(void*) const */

uint EditorRunBar::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x10ef,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10ee,in_RSI == &MarginContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10ef,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10ef,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10ef,in_RSI == &Node::get_class_ptr_static()::ptr) |
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
    uVar1 = (uint)CONCAT71(0x10ef,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10ee,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10ef,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10ef,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10ef,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* EditorRunBar::_setv(StringName const&, Variant const&) */

undefined8 EditorRunBar::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_00112020 != CanvasItem::_set) {
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
    if ((code *)PTR__set_00112020 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00107fe8) */
/* EditorRunBar::_getv(StringName const&, Variant&) const */

undefined8 EditorRunBar::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00112028 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00108058) */
/* HBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 HBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00112028 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = String::parse_latin1;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001080c0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_001080c0:
  Control::~Control((Control *)this);
  return;
}



/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = String::parse_latin1;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00108120;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00108120:
  Control::~Control((Control *)this);
  operator_delete(this,0xa10);
  return;
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
LAB_00108183:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00108183;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
      goto LAB_001081ee;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
LAB_001081ee:
  return &_get_class_namev()::_class_name_static;
}



/* EditorExportPlatform::get_debug_protocol() const */

EditorExportPlatform * __thiscall
EditorExportPlatform::get_debug_protocol(EditorExportPlatform *this)

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



/* HBoxContainer::_notificationv(int, bool) */

void __thiscall HBoxContainer::_notificationv(HBoxContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_00112030 != Container::_notification) {
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
  if ((code *)PTR__notification_00112030 == Container::_notification) {
    return;
  }
  BoxContainer::_notification(iVar1);
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



/* CowData<char32_t>::_ref(CowData<char32_t> const&) */

void __thiscall CowData<char32_t>::_ref(CowData<char32_t> *this,CowData *param_1)

{
  if (*(long *)this != *(long *)param_1) {
    _ref(this,param_1);
    return;
  }
  return;
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



/* EditorRunBar::get_class() const */

void EditorRunBar::get_class(void)

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



/* Callable Callable::bind<int>(int) const */

Variant ** Callable::bind<int>(int param_1)

{
  char cVar1;
  int in_EDX;
  int in_ESI;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  int local_58 [6];
  undefined8 local_40;
  undefined1 local_38 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_58,in_EDX);
  local_40 = 0;
  local_38 = (undefined1  [16])0x0;
  Callable::bindp((Variant **)CONCAT44(in_register_0000003c,param_1),in_ESI);
  if (Variant::needs_deinit[(int)local_40] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (Variant **)CONCAT44(in_register_0000003c,param_1);
}



/* Callable create_custom_callable_function_pointer<EditorRunBar>(EditorRunBar*, char const*, void
   (EditorRunBar::*)()) */

EditorRunBar *
create_custom_callable_function_pointer<EditorRunBar>
          (EditorRunBar *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC10;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_0010eb80;
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



/* Callable create_custom_callable_function_pointer<EditorRunBar, bool>(EditorRunBar*, char const*,
   void (EditorRunBar::*)(bool)) */

EditorRunBar *
create_custom_callable_function_pointer<EditorRunBar,bool>
          (EditorRunBar *param_1,char *param_2,_func_void_bool *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC10;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_0010ec10;
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



/* Callable create_custom_callable_function_pointer<EditorRunBar, int>(EditorRunBar*, char const*,
   void (EditorRunBar::*)(int)) */

EditorRunBar *
create_custom_callable_function_pointer<EditorRunBar,int>
          (EditorRunBar *param_1,char *param_2,_func_void_int *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC10;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_0010ed30;
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



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CowData<char32_t>::_unref() */

void CowData<char32_t>::_unref(void)

{
  long *plVar1;
  long lVar2;
  long *in_RDI;
  
  if (*in_RDI == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*in_RDI + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 != 0) {
    *in_RDI = 0;
    return;
  }
  lVar2 = *in_RDI;
  *in_RDI = 0;
  Memory::free_static((void *)(lVar2 + -0x10),false);
  return;
}



/* EditorRunBar::~EditorRunBar() */

void __thiscall EditorRunBar::~EditorRunBar(EditorRunBar *this)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  bool bVar5;
  
  *(undefined ***)this = &PTR__initialize_classv_0010e400;
  CowData<char32_t>::_unref();
  CowData<char32_t>::_unref();
  CowData<char32_t>::_unref();
  plVar4 = *(long **)(this + 0xa78);
  if (plVar4 != (long *)0x0) {
    do {
      pvVar1 = (void *)*plVar4;
      if (pvVar1 == (void *)0x0) {
        if ((int)plVar4[2] != 0) {
          _err_print_error("~List","./core/templates/list.h",0x316,
                           "Condition \"_data->size_cache\" is true.",0,0);
          goto LAB_00109aaf;
        }
        break;
      }
      if (plVar4 == *(long **)((long)pvVar1 + 0x18)) {
        lVar3 = *(long *)((long)pvVar1 + 8);
        lVar2 = *(long *)((long)pvVar1 + 0x10);
        *plVar4 = lVar3;
        if (pvVar1 == (void *)plVar4[1]) {
          plVar4[1] = lVar2;
        }
        if (lVar2 != 0) {
          *(long *)(lVar2 + 8) = lVar3;
          lVar3 = *(long *)((long)pvVar1 + 8);
        }
        if (lVar3 != 0) {
          *(long *)(lVar3 + 0x10) = lVar2;
        }
        Memory::free_static(pvVar1,false);
        *(int *)(plVar4 + 2) = (int)plVar4[2] + -1;
      }
      else {
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0,0);
      }
      plVar4 = *(long **)(this + 0xa78);
    } while ((int)plVar4[2] != 0);
    Memory::free_static(plVar4,false);
  }
LAB_00109aaf:
  bVar5 = StringName::configured != '\0';
  *(code **)this = String::parse_latin1;
  if (bVar5) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00109af8;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00109af8:
  Control::~Control((Control *)this);
  return;
}



/* EditorRunBar::~EditorRunBar() */

void __thiscall EditorRunBar::~EditorRunBar(EditorRunBar *this)

{
  ~EditorRunBar(this);
  operator_delete(this,0xac0);
  return;
}



/* CallableCustomMethodPointer<EditorRunBar, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorRunBar,void>::call
          (CallableCustomMethodPointer<EditorRunBar,void> *this,Variant **param_1,int param_2,
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
  undefined1 local_60 [8];
  String local_58 [8];
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
      goto LAB_00109d9f;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_00109d9f;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00109d78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_00109e61;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_00109d9f:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,local_58);
    _err_print_error(&_LC90,"./core/object/callable_method_pointer.h",0x67,
                     "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                     (String *)&local_48,0,0);
    CowData<char32_t>::_unref();
    CowData<char32_t>::_unref();
    CowData<char32_t>::_unref();
    CowData<char32_t>::_unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00109e61:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<EditorRunBar, void, int>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorRunBar,void,int>::call
          (CallableCustomMethodPointer<EditorRunBar,void,int> *this,Variant **param_1,int param_2,
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
  undefined1 local_50 [8];
  String local_48 [8];
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
      goto LAB_0010a028;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar7[1] == 0) goto LAB_0010a028;
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
        uVar3 = _LC91;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        iVar5 = Variant::operator_cast_to_int(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00109fd7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),iVar5);
          return;
        }
        goto LAB_0010a0d9;
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
LAB_0010a028:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,local_48);
    _err_print_error(&_LC90,"./core/object/callable_method_pointer.h",0x67,
                     "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                     local_38,0,0);
    CowData<char32_t>::_unref();
    CowData<char32_t>::_unref();
    CowData<char32_t>::_unref();
    CowData<char32_t>::_unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010a0d9:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<EditorRunBar, void, bool>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorRunBar,void,bool>::call
          (CallableCustomMethodPointer<EditorRunBar,void,bool> *this,Variant **param_1,int param_2,
          Variant *param_3,CallError *param_4)

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
  undefined1 local_50 [8];
  String local_48 [8];
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
      goto LAB_0010a299;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar6[1] == 0) goto LAB_0010a299;
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
        uVar3 = _LC92;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        bVar7 = Variant::operator_cast_to_bool(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010a248. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),bVar7);
          return;
        }
        goto LAB_0010a34a;
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
LAB_0010a299:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,local_48);
    _err_print_error(&_LC90,"./core/object/callable_method_pointer.h",0x67,
                     "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                     local_38,0,0);
    CowData<char32_t>::_unref();
    CowData<char32_t>::_unref();
    CowData<char32_t>::_unref();
    CowData<char32_t>::_unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010a34a:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<EditorRunBar, void, Ref<EditorExportPreset> const&>::call(Variant
   const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorRunBar,void,Ref<EditorExportPreset>const&>::call
          (CallableCustomMethodPointer<EditorRunBar,void,Ref<EditorExportPreset>const&> *this,
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
  undefined1 local_60 [8];
  String local_58 [8];
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
          goto LAB_0010a41e;
        }
        if (param_2 == 0) {
          *(undefined4 *)param_4 = 4;
          *(undefined4 *)(param_4 + 8) = 1;
          goto LAB_0010a41e;
        }
        *(undefined4 *)param_4 = 0;
        if (((ulong)pcVar10 & 1) != 0) {
          pcVar10 = *(code **)(pcVar10 + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar6 = Variant::can_convert_strict(*(undefined4 *)*param_1);
        uVar4 = _LC93;
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
LAB_0010a4ed:
              cVar6 = RefCounted::unreference();
              if ((cVar6 != '\0') && (cVar6 = predelete_handler(pOVar5), cVar6 != '\0')) {
                (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
                Memory::free_static(pOVar5,false);
              }
            }
          }
          else {
            pOVar7 = (Object *)
                     __dynamic_cast(pOVar7,&Object::typeinfo,&EditorExportPreset::typeinfo,0);
            if (pOVar5 != pOVar7) {
              local_48 = pOVar7;
              if ((pOVar7 != (Object *)0x0) && (cVar6 = RefCounted::reference(), cVar6 == '\0')) {
                local_48 = (Object *)0x0;
              }
              if (pOVar5 != (Object *)0x0) goto LAB_0010a4ed;
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
        goto LAB_0010a41e;
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
  local_48 = (Object *)0x109bab;
  local_40 = 0x15;
  String::parse_latin1((StrRange *)&local_50);
  uitos((ulong)local_60);
  operator+((char *)local_58,(String *)"Invalid Object id \'");
  String::operator+((String *)&local_48,local_58);
  _err_print_error(&_LC90,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (String *)&local_48,0,0);
  CowData<char32_t>::_unref();
  CowData<char32_t>::_unref();
  CowData<char32_t>::_unref();
  CowData<char32_t>::_unref();
LAB_0010a41e:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<EditorRunBar, void, String const&, int>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorRunBar,void,String_const&,int>::call
          (CallableCustomMethodPointer<EditorRunBar,void,String_const&,int> *this,Variant **param_1,
          int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  ulong *puVar7;
  code *pcVar8;
  long in_FS_OFFSET;
  bool bVar9;
  undefined1 local_60 [8];
  String local_58 [8];
  undefined8 local_50;
  Variant local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar6 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_48[0] = (Variant)0x0;
      LOCK();
      bVar9 = (char)ObjectDB::spin_lock == '\0';
      if (bVar9) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar9) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar7 = (ulong *)((ulong)uVar6 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) == (*puVar7 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar7[1] != 0) {
        lVar1 = *(long *)(this + 0x28);
        pcVar8 = *(code **)(this + 0x38);
        lVar2 = *(long *)(this + 0x40);
        if ((uint)param_2 < 3) {
          if (param_2 == 2) {
            *(undefined4 *)param_4 = 0;
            if (((ulong)pcVar8 & 1) != 0) {
              pcVar8 = *(code **)(pcVar8 + *(long *)(lVar1 + lVar2) + -1);
            }
            cVar4 = Variant::can_convert_strict(*(undefined4 *)param_1[1],2);
            uVar3 = _LC94;
            if (cVar4 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar3;
            }
            iVar5 = Variant::operator_cast_to_int(param_1[1]);
            cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,4);
            uVar3 = _LC95;
            if (cVar4 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar3;
            }
            Variant::operator_cast_to_String(local_48);
            (*pcVar8)((long *)(lVar1 + lVar2),local_48,iVar5);
            CowData<char32_t>::_unref();
          }
          else {
            *(undefined4 *)param_4 = 4;
            *(undefined4 *)(param_4 + 8) = 2;
          }
        }
        else {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 2;
        }
        goto LAB_0010a795;
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
  String::parse_latin1((String *)&local_50,"\', can\'t call method.");
  uitos((ulong)local_60);
  operator+((char *)local_58,(String *)"Invalid Object id \'");
  String::operator+((String *)local_48,local_58);
  _err_print_error(&_LC90,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   local_48,0,0);
  CowData<char32_t>::_unref();
  CowData<char32_t>::_unref();
  CowData<char32_t>::_unref();
  CowData<char32_t>::_unref();
LAB_0010a795:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CanvasItem::is_class(String const&) const */

undefined8 __thiscall CanvasItem::is_class(CanvasItem *this,String *param_1)

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
            if (lVar3 == 0) goto LAB_0010a9ef;
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
LAB_0010a9ef:
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
    if (cVar6 != '\0') goto LAB_0010aaa3;
  }
  cVar6 = String::operator==(param_1,"CanvasItem");
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
      CowData<char32_t>::_unref();
      if (cVar6 != '\0') goto LAB_0010aaa3;
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
        if (cVar6 != '\0') goto LAB_0010aaa3;
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar8 = String::operator==(param_1,"Object");
        return uVar8;
      }
      goto LAB_0010ac88;
    }
  }
LAB_0010aaa3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010ac88:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Container::is_class(String const&) const */

undefined8 __thiscall Container::is_class(Container *this,String *param_1)

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
            if (lVar3 == 0) goto LAB_0010ad0f;
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
LAB_0010ad0f:
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
    if (cVar6 != '\0') goto LAB_0010adc3;
  }
  cVar6 = String::operator==(param_1,"Container");
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
      CowData<char32_t>::_unref();
      if (cVar6 != '\0') goto LAB_0010adc3;
    }
    cVar6 = String::operator==(param_1,"Control");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar8 = CanvasItem::is_class((CanvasItem *)this,param_1);
        return uVar8;
      }
      goto LAB_0010aece;
    }
  }
LAB_0010adc3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010aece:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HBoxContainer::is_class(String const&) const */

undefined8 __thiscall HBoxContainer::is_class(HBoxContainer *this,String *param_1)

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
            if (lVar3 == 0) goto LAB_0010af4f;
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
LAB_0010af4f:
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
    if (cVar6 != '\0') goto LAB_0010b003;
  }
  cVar6 = String::operator==(param_1,"HBoxContainer");
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
      CowData<char32_t>::_unref();
      if (cVar6 != '\0') goto LAB_0010b003;
    }
    cVar6 = String::operator==(param_1,"BoxContainer");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar8 = Container::is_class((Container *)this,param_1);
        return uVar8;
      }
      goto LAB_0010b10e;
    }
  }
LAB_0010b003:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010b10e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorRunBar::is_class(String const&) const */

undefined8 __thiscall EditorRunBar::is_class(EditorRunBar *this,String *param_1)

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
            if (lVar3 == 0) goto LAB_0010b19f;
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
LAB_0010b19f:
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
    if (cVar6 != '\0') goto LAB_0010b253;
  }
  cVar6 = String::operator==(param_1,"EditorRunBar");
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
      CowData<char32_t>::_unref();
      if (cVar6 != '\0') goto LAB_0010b253;
    }
    cVar6 = String::operator==(param_1,"MarginContainer");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar8 = Container::is_class((Container *)this,param_1);
        return uVar8;
      }
      goto LAB_0010b35e;
    }
  }
LAB_0010b253:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010b35e:
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
              CowData<char32_t>::_unref();
              if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
                StringName::unref();
              }
              CowData<char32_t>::_unref();
              if ((code *)PTR__bind_methods_00112048 != Node::_bind_methods) {
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
            CowData<char32_t>::_unref();
            if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref();
            CanvasItem::_bind_methods();
            if ((code *)PTR__bind_compatibility_methods_00112038 !=
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
          CowData<char32_t>::_unref();
          if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref();
          Control::_bind_methods();
          Control::initialize_class()::initialized = '\x01';
        }
        local_68 = 0;
        local_58 = "Control";
        local_50 = 7;
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
        CowData<char32_t>::_unref();
        if ((StringName::configured != '\0') && (local_60 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref();
        Container::_bind_methods();
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
      CowData<char32_t>::_unref();
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref();
      if ((code *)PTR__bind_methods_00112040 != Container::_bind_methods) {
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
    CowData<char32_t>::_unref();
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref();
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
            CowData<char32_t>::_unref();
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
        if (pvVar5 == (void *)0x0) goto LAB_0010bac5;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_0010bac5:
  CowData<char32_t>::_unref();
  return;
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
      CowData<char32_t>::_unref();
      if ((StringName::configured != '\0') && (*(long *)((long)pvVar1 + 0x10) != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref();
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
  local_78 = &_LC97;
  local_88 = 0;
  local_90 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = &_LC97;
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
      goto LAB_0010bd9c;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010bd9c:
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)CONCAT71(in_register_00000031,param_2),
             (PropertyInfo *)&local_78);
  CowData<char32_t>::_unref();
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref();
  CowData<char32_t>::_unref();
  CowData<char32_t>::_unref();
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
      goto LAB_0010c001;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010c001:
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref();
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref();
  CowData<char32_t>::_unref();
  CowData<char32_t>::_unref();
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"CanvasItem",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if ((code *)PTR__get_property_list_00112050 != Object::_get_property_list) {
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
      goto LAB_0010c2d1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010c2d1:
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref();
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref();
  CowData<char32_t>::_unref();
  CowData<char32_t>::_unref();
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"Control",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if ((code *)PTR__get_property_list_00112058 != CanvasItem::_get_property_list) {
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
      goto LAB_0010c5a1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010c5a1:
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref();
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref();
  CowData<char32_t>::_unref();
  CowData<char32_t>::_unref();
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



/* MarginContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
MarginContainer::_get_property_listv(MarginContainer *this,List *param_1,bool param_2)

{
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
  if (!param_2) {
    Container::_get_property_listv((Container *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "MarginContainer";
  local_70 = 0xf;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "MarginContainer";
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
      goto LAB_0010c851;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010c851:
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref();
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref();
  CowData<char32_t>::_unref();
  CowData<char32_t>::_unref();
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"MarginContainer",false);
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



/* EditorRunBar::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall EditorRunBar::_get_property_listv(EditorRunBar *this,List *param_1,bool param_2)

{
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
  if (!param_2) {
    MarginContainer::_get_property_listv((MarginContainer *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "EditorRunBar";
  local_70 = 0xc;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorRunBar";
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
      goto LAB_0010cb01;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010cb01:
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref();
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref();
  CowData<char32_t>::_unref();
  CowData<char32_t>::_unref();
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"EditorRunBar",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      MarginContainer::_get_property_listv((MarginContainer *)this,param_1,true);
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
      goto LAB_0010cdb1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010cdb1:
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref();
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref();
  CowData<char32_t>::_unref();
  CowData<char32_t>::_unref();
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



/* HBoxContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall HBoxContainer::_get_property_listv(HBoxContainer *this,List *param_1,bool param_2)

{
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
      goto LAB_0010d061;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010d061:
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref();
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref();
  CowData<char32_t>::_unref();
  CowData<char32_t>::_unref();
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



/* EditorRunBar::_bind_methods() [clone .cold] */

void EditorRunBar::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* Error CowData<char32_t>::resize<false>(long) [clone .isra.0] [clone .cold] */

void CowData<char32_t>::resize<false>(long param_1)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0010d1bc(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0010d1c8(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
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



/* EditorRunBar::_play_custom_pressed(int) [clone .cold] */

void EditorRunBar::_play_custom_pressed(int param_1)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* EditorRunBar::_initialize_classv() */

void EditorRunBar::_initialize_classv(void)

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
    if (MarginContainer::initialize_class()::initialized == '\0') {
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
              CowData<char32_t>::_unref();
              if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
                StringName::unref();
              }
              CowData<char32_t>::_unref();
              if ((code *)PTR__bind_methods_00112048 != Node::_bind_methods) {
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
            CowData<char32_t>::_unref();
            if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref();
            CanvasItem::_bind_methods();
            if ((code *)PTR__bind_compatibility_methods_00112038 !=
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
          CowData<char32_t>::_unref();
          if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref();
          Control::_bind_methods();
          Control::initialize_class()::initialized = '\x01';
        }
        local_68 = 0;
        local_58 = "Control";
        local_50 = 7;
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
        CowData<char32_t>::_unref();
        if ((StringName::configured != '\0') && (local_60 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref();
        Container::_bind_methods();
        Container::initialize_class()::initialized = '\x01';
      }
      local_58 = "Container";
      local_68 = 0;
      local_50 = 9;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "MarginContainer";
      local_70 = 0;
      local_50 = 0xf;
      String::parse_latin1((StrRange *)&local_70);
      StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref();
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref();
      if ((code *)PTR__bind_methods_00112060 != Container::_bind_methods) {
        MarginContainer::_bind_methods();
      }
      MarginContainer::initialize_class()::initialized = '\x01';
    }
    local_58 = "MarginContainer";
    local_68 = 0;
    local_50 = 0xf;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "EditorRunBar";
    local_70 = 0;
    local_50 = 0xc;
    String::parse_latin1((StrRange *)&local_70);
    StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
    ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref();
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref();
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CowData<char32_t>::_realloc(long) */

undefined8 __thiscall CowData<char32_t>::_realloc(CowData<char32_t> *this,long param_1)

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



/* Ref<StyleBox>::unref() */

void __thiscall Ref<StyleBox>::unref(Ref<StyleBox> *this)

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



/* WARNING: Removing unreachable block (ram,0x0010d9d0) */
/* EditorRunBar::_notificationv(int, bool) */

void __thiscall EditorRunBar::_notificationv(EditorRunBar *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    _notification(this,param_1);
    if ((code *)PTR__notification_00112068 != Container::_notification) {
      MarginContainer::_notification(iVar1);
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
  if ((code *)PTR__notification_00112068 != Container::_notification) {
    MarginContainer::_notification(iVar1);
  }
  _notification(this,param_1);
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



/* CowData<StringName>::_unref() */

void __thiscall CowData<StringName>::_unref(CowData<StringName> *this)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  
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
      lVar2 = plVar1[-1];
      *(undefined8 *)this = 0;
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
      return;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* CowData<StringName>::_realloc(long) */

undefined8 __thiscall CowData<StringName>::_realloc(CowData<StringName> *this,long param_1)

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
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  
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
    lVar4 = 0;
    lVar5 = 0;
  }
  else {
    lVar4 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar4) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar5 = lVar4 * 8;
    if (lVar5 != 0) {
      uVar6 = lVar5 - 1U | lVar5 - 1U >> 1;
      uVar6 = uVar6 | uVar6 >> 2;
      uVar6 = uVar6 | uVar6 >> 4;
      uVar6 = uVar6 | uVar6 >> 8;
      uVar6 = uVar6 | uVar6 >> 0x10;
      lVar5 = (uVar6 | uVar6 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 == 0) {
LAB_0010dee0:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar6 = param_1 * 8 - 1;
  uVar6 = uVar6 >> 1 | uVar6;
  uVar6 = uVar6 | uVar6 >> 2;
  uVar6 = uVar6 | uVar6 >> 4;
  uVar6 = uVar6 | uVar6 >> 8;
  uVar6 = uVar6 | uVar6 >> 0x10;
  uVar6 = uVar6 | uVar6 >> 0x20;
  lVar9 = uVar6 + 1;
  if (lVar9 == 0) goto LAB_0010dee0;
  uVar8 = param_1;
  if (param_1 <= lVar4) {
    while (lVar4 = *(long *)this, lVar4 != 0) {
      if (*(ulong *)(lVar4 + -8) <= uVar8) {
        if (lVar9 != lVar5) {
          uVar3 = _realloc(this,lVar9);
          if ((int)uVar3 != 0) {
            return uVar3;
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
        return 0;
      }
      CowData<char32_t>::_unref();
      uVar8 = uVar8 + 1;
    }
    goto LAB_0010df36;
  }
  if (lVar9 == lVar5) {
LAB_0010de5b:
    puVar7 = *(undefined8 **)this;
    if (puVar7 == (undefined8 *)0x0) {
LAB_0010df36:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar4 = puVar7[-1];
    if (param_1 <= lVar4) goto LAB_0010ddcf;
  }
  else {
    if (lVar4 != 0) {
      uVar3 = _realloc(this,lVar9);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      goto LAB_0010de5b;
    }
    puVar2 = (undefined8 *)Memory::alloc_static(uVar6 + 0x11,false);
    if (puVar2 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar7 = puVar2 + 2;
    *puVar2 = 1;
    puVar2[1] = 0;
    *(undefined8 **)this = puVar7;
    lVar4 = 0;
  }
  memset(puVar7 + lVar4,0,(param_1 - lVar4) * 8);
LAB_0010ddcf:
  puVar7[-1] = param_1;
  return 0;
}



/* EditorRunBar::singleton */

void EditorRunBar::_GLOBAL__sub_I_singleton(void)

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
  ENV_SCRIPT_ENCRYPTION_KEY = 0;
  String::parse_latin1((String *)&ENV_SCRIPT_ENCRYPTION_KEY,"GODOT_SCRIPT_ENCRYPTION_KEY");
  __cxa_atexit(String::~String,&ENV_SCRIPT_ENCRYPTION_KEY,&__dso_handle);
  if (EditorExport::_export_presets_updated == '\0') {
    EditorExport::_export_presets_updated = '\x01';
    EditorExport::_export_presets_updated = 0;
    __cxa_atexit(StringName::~StringName,&EditorExport::_export_presets_updated,&__dso_handle);
  }
  if (EditorExport::_export_presets_runnable_updated == '\0') {
    EditorExport::_export_presets_runnable_updated = '\x01';
    EditorExport::_export_presets_runnable_updated = 0;
    __cxa_atexit(StringName::~StringName,&EditorExport::_export_presets_runnable_updated,
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
  if (MenuButton::base_property_helper != '\0') {
    return;
  }
  MenuButton::base_property_helper = 1;
  MenuButton::base_property_helper._64_8_ = 0;
  MenuButton::base_property_helper._56_8_ = 2;
  MenuButton::base_property_helper._0_16_ = (undefined1  [16])0x0;
  MenuButton::base_property_helper._24_16_ = (undefined1  [16])0x0;
  MenuButton::base_property_helper._40_16_ = (undefined1  [16])0x0;
  __cxa_atexit(PropertyListHelper::~PropertyListHelper,MenuButton::base_property_helper,
               &__dso_handle,uStack_18);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* String::~String() */

void __thiscall String::~String(String *this)

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
/* CallableCustomMethodPointer<EditorRunBar, void, String const&,
   int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorRunBar,void,String_const&,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorRunBar,void,String_const&,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorRunBar, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorRunBar,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorRunBar,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorRunBar, void, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorRunBar,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorRunBar,void,bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorRunBar, void, Ref<EditorExportPreset>
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorRunBar,void,Ref<EditorExportPreset>const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorRunBar,void,Ref<EditorExportPreset>const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorRunBar, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorRunBar,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorRunBar,void,int> *this)

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
/* EditorRunBar::~EditorRunBar() */

void __thiscall EditorRunBar::~EditorRunBar(EditorRunBar *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



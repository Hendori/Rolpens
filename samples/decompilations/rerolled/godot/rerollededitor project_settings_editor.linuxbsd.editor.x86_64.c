/* ProjectSettingsEditor::queue_save() */

void ProjectSettingsEditor::queue_save(void)

{
  Timer::start(_LC0);
  return;
}



/* ProjectSettingsEditor::_setting_edited(String const&) */

void ProjectSettingsEditor::_setting_edited(String *param_1)

{
  Timer::start(_LC0);
  return;
}



/* ProjectSettingsEditor::_advanced_toggled(bool) */

void __thiscall ProjectSettingsEditor::_advanced_toggled(ProjectSettingsEditor *this,bool param_1)

{
  StringName *pSVar1;
  long in_FS_OFFSET;
  long local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  pSVar1 = (StringName *)EditorSettings::get_singleton();
  Variant::Variant((Variant *)local_48,param_1);
  StringName::StringName((StringName *)&local_50,"_project_settings_advanced_mode",false);
  Object::set(pSVar1,(Variant *)&local_50,(bool *)local_48);
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  EditorSettings::get_singleton();
  EditorSettings::save();
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    CanvasItem::set_visible(SUB81(*(undefined8 *)(this + 0xe18),0));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProjectSettingsEditor::_editor_restart() */

void ProjectSettingsEditor::_editor_restart(void)

{
  ProjectSettings::get_singleton();
  ProjectSettings::save();
  EditorNode::save_all_scenes();
  EditorNode::restart_editor(SUB81(EditorNode::singleton,0));
  return;
}



/* ProjectSettingsEditor::_editor_restart_request() */

void ProjectSettingsEditor::_editor_restart_request(void)

{
  CanvasItem::show();
  return;
}



/* ProjectSettingsEditor::_editor_restart_close() */

void ProjectSettingsEditor::_editor_restart_close(void)

{
  CanvasItem::hide();
  return;
}



/* ProjectSettingsEditor::_tabs_tab_changed(int) */

void ProjectSettingsEditor::_tabs_tab_changed(int param_1)

{
  long lVar1;
  undefined4 in_register_0000003c;
  long lVar2;
  
  lVar2 = CONCAT44(in_register_0000003c,param_1);
  lVar1 = TabContainer::get_current_tab_control();
  if (lVar1 == *(long *)(lVar2 + 0xdc8)) {
    lVar1 = *(long *)(lVar2 + 0xe08);
  }
  else {
    if (lVar1 != *(long *)(lVar2 + 0xdd8)) {
      return;
    }
    lVar1 = ActionMapEditor::get_search_box();
  }
  if (lVar1 == 0) {
    return;
  }
  Control::grab_focus();
  LineEdit::select_all();
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



/* ProjectSettingsEditor::connect_filesystem_dock_signals(FileSystemDock*) */

void ProjectSettingsEditor::connect_filesystem_dock_signals(FileSystemDock *param_1)

{
  LocalizationEditor::connect_filesystem_dock_signals(*(FileSystemDock **)(param_1 + 0xde0));
  GroupSettingsEditor::connect_filesystem_dock_signals(*(FileSystemDock **)(param_1 + 0xdf8));
  return;
}



/* ProjectSettingsEditor::set_plugins_page() */

void __thiscall ProjectSettingsEditor::set_plugins_page(ProjectSettingsEditor *this)

{
  Control *pCVar1;
  
  pCVar1 = *(Control **)(this + 0xdc0);
  TabContainer::get_tab_idx_from_control(pCVar1);
  TabContainer::set_current_tab((int)pCVar1);
  return;
}



/* ProjectSettingsEditor::set_general_page(String const&) */

void ProjectSettingsEditor::set_general_page(String *param_1)

{
  Control *pCVar1;
  
  pCVar1 = *(Control **)(param_1 + 0xdc0);
  TabContainer::get_tab_idx_from_control(pCVar1);
  TabContainer::set_current_tab((int)pCVar1);
  SectionedInspector::set_current_section(*(String **)(param_1 + 0xdd0));
  return;
}



/* ProjectSettingsEditor::update_plugins() */

void ProjectSettingsEditor::update_plugins(void)

{
  EditorPluginSettings::update_plugins();
  return;
}



/* ProjectSettingsEditor::init_autoloads() */

void ProjectSettingsEditor::init_autoloads(void)

{
  EditorAutoloadSettings::init_autoloads();
  return;
}



/* ProjectSettingsEditor::_update_advanced(bool) */

void ProjectSettingsEditor::_update_advanced(bool param_1)

{
  undefined7 in_register_00000039;
  
  CanvasItem::set_visible(SUB81(*(undefined8 *)(CONCAT71(in_register_00000039,param_1) + 0xe18),0));
  return;
}



/* ProjectSettingsEditor::_select_type(Variant::Type) */

void ProjectSettingsEditor::_select_type(long param_1)

{
  int iVar1;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0xe30);
  OptionButton::get_item_index(iVar1);
  OptionButton::select(iVar1);
  return;
}



/* ProjectSettingsEditor::_focus_current_search_box() */

void __thiscall ProjectSettingsEditor::_focus_current_search_box(ProjectSettingsEditor *this)

{
  long lVar1;
  
  lVar1 = TabContainer::get_current_tab_control();
  if (*(long *)(this + 0xdc8) == lVar1) {
    lVar1 = *(long *)(this + 0xe08);
  }
  else {
    if (*(long *)(this + 0xdd8) != lVar1) {
      return;
    }
    lVar1 = ActionMapEditor::get_search_box();
  }
  if (lVar1 == 0) {
    return;
  }
  Control::grab_focus();
  LineEdit::select_all();
  return;
}



/* ProjectSettingsEditor::_focus_current_path_box() */

void __thiscall ProjectSettingsEditor::_focus_current_path_box(ProjectSettingsEditor *this)

{
  long lVar1;
  
  lVar1 = TabContainer::get_current_tab_control();
  if (*(long *)(this + 0xdc8) == lVar1) {
    lVar1 = *(long *)(this + 0xe20);
  }
  else if (*(long *)(this + 0xdd8) == lVar1) {
    lVar1 = ActionMapEditor::get_path_box();
  }
  else if (*(long *)(this + 0xde8) == lVar1) {
    lVar1 = EditorAutoloadSettings::get_path_box();
  }
  else if (*(long *)(this + 0xdf0) == lVar1) {
    lVar1 = ShaderGlobalsEditor::get_name_box();
  }
  else {
    if (*(long *)(this + 0xdf8) != lVar1) {
      return;
    }
    lVar1 = GroupSettingsEditor::get_name_box();
  }
  if (lVar1 == 0) {
    return;
  }
  Control::grab_focus();
  LineEdit::select_all();
  return;
}



/* ProjectSettingsEditor::_update_theme() */

void ProjectSettingsEditor::_update_theme(void)

{
  long *plVar1;
  Ref *pRVar2;
  StringName *pSVar3;
  long lVar4;
  Object *pOVar5;
  char cVar6;
  int iVar7;
  StringName *in_RDI;
  uint uVar8;
  ulong uVar9;
  long in_FS_OFFSET;
  long local_70;
  long local_68;
  Object *local_60;
  undefined8 local_58;
  long local_40;
  
  pRVar2 = *(Ref **)(in_RDI + 0xe38);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (_update_theme()::{lambda()#1}::operator()()::sname == '\0') {
    iVar7 = __cxa_guard_acquire(&_update_theme()::{lambda()#1}::operator()()::sname);
    if (iVar7 != 0) {
      _scs_create((char *)&_update_theme()::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_update_theme()::{lambda()#1}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_update_theme()::{lambda()#1}::operator()()::sname);
    }
  }
  Window::get_editor_theme_icon((StringName *)&local_60);
  Button::set_button_icon(pRVar2);
  if (local_60 != (Object *)0x0) {
    cVar6 = RefCounted::unreference();
    pOVar5 = local_60;
    if (cVar6 != '\0') {
      cVar6 = predelete_handler(local_60);
      if (cVar6 != '\0') {
        (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
        Memory::free_static(pOVar5,false);
      }
    }
  }
  pRVar2 = *(Ref **)(in_RDI + 0xe40);
  if (_update_theme()::{lambda()#2}::operator()()::sname == '\0') {
    iVar7 = __cxa_guard_acquire(&_update_theme()::{lambda()#2}::operator()()::sname);
    if (iVar7 != 0) {
      _scs_create((char *)&_update_theme()::{lambda()#2}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_update_theme()::{lambda()#2}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_update_theme()::{lambda()#2}::operator()()::sname);
    }
  }
  Window::get_editor_theme_icon((StringName *)&local_60);
  Button::set_button_icon(pRVar2);
  if (local_60 != (Object *)0x0) {
    cVar6 = RefCounted::unreference();
    pOVar5 = local_60;
    if (cVar6 != '\0') {
      cVar6 = predelete_handler(local_60);
      if (cVar6 != '\0') {
        (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
        Memory::free_static(pOVar5,false);
      }
    }
  }
  pRVar2 = *(Ref **)(in_RDI + 0xe08);
  if (_update_theme()::{lambda()#3}::operator()()::sname == '\0') {
    iVar7 = __cxa_guard_acquire(&_update_theme()::{lambda()#3}::operator()()::sname);
    if (iVar7 != 0) {
      _scs_create((char *)&_update_theme()::{lambda()#3}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_update_theme()::{lambda()#3}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_update_theme()::{lambda()#3}::operator()()::sname);
    }
  }
  Window::get_editor_theme_icon((StringName *)&local_60);
  LineEdit::set_right_icon(pRVar2);
  if (local_60 != (Object *)0x0) {
    cVar6 = RefCounted::unreference();
    pOVar5 = local_60;
    if (cVar6 != '\0') {
      cVar6 = predelete_handler(local_60);
      if (cVar6 != '\0') {
        (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
        Memory::free_static(pOVar5,false);
      }
    }
  }
  pRVar2 = *(Ref **)(in_RDI + 0xe60);
  if (_update_theme()::{lambda()#4}::operator()()::sname == '\0') {
    iVar7 = __cxa_guard_acquire(&_update_theme()::{lambda()#4}::operator()()::sname);
    if (iVar7 != 0) {
      _scs_create((char *)&_update_theme()::{lambda()#4}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_update_theme()::{lambda()#4}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_update_theme()::{lambda()#4}::operator()()::sname);
    }
  }
  Window::get_editor_theme_icon((StringName *)&local_60);
  Button::set_button_icon(pRVar2);
  if (local_60 != (Object *)0x0) {
    cVar6 = RefCounted::unreference();
    pOVar5 = local_60;
    if (cVar6 != '\0') {
      cVar6 = predelete_handler(local_60);
      if (cVar6 != '\0') {
        (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
        Memory::free_static(pOVar5,false);
      }
    }
  }
  pSVar3 = *(StringName **)(in_RDI + 0xe58);
  if (_update_theme()::{lambda()#5}::operator()()::sname == '\0') {
    iVar7 = __cxa_guard_acquire(&_update_theme()::{lambda()#5}::operator()()::sname);
    if (iVar7 != 0) {
      _scs_create((char *)&_update_theme()::{lambda()#5}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_update_theme()::{lambda()#5}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_update_theme()::{lambda()#5}::operator()()::sname);
    }
  }
  Window::get_theme_stylebox((StringName *)&local_60,in_RDI);
  Control::add_theme_style_override(pSVar3,(Ref *)(SceneStringNames::singleton + 600));
  if (local_60 != (Object *)0x0) {
    cVar6 = RefCounted::unreference();
    pOVar5 = local_60;
    if (cVar6 != '\0') {
      cVar6 = predelete_handler(local_60);
      if (cVar6 != '\0') {
        (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
        Memory::free_static(pOVar5,false);
      }
    }
  }
  pRVar2 = *(Ref **)(in_RDI + 0xe50);
  if (_update_theme()::{lambda()#6}::operator()()::sname == '\0') {
    iVar7 = __cxa_guard_acquire(&_update_theme()::{lambda()#6}::operator()()::sname);
    if (iVar7 != 0) {
      _scs_create((char *)&_update_theme()::{lambda()#6}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_update_theme()::{lambda()#6}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_update_theme()::{lambda()#6}::operator()()::sname);
    }
  }
  Window::get_editor_theme_icon((StringName *)&local_60);
  TextureRect::set_texture(pRVar2);
  if (local_60 != (Object *)0x0) {
    cVar6 = RefCounted::unreference();
    pOVar5 = local_60;
    if (cVar6 != '\0') {
      cVar6 = predelete_handler(local_60);
      if (cVar6 != '\0') {
        (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
        Memory::free_static(pOVar5,false);
      }
    }
  }
  pSVar3 = *(StringName **)(in_RDI + 0xe48);
  if (_update_theme()::{lambda()#7}::operator()()::sname == '\0') {
    iVar7 = __cxa_guard_acquire(&_update_theme()::{lambda()#7}::operator()()::sname);
    if (iVar7 != 0) {
      _scs_create((char *)&_update_theme()::{lambda()#7}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_update_theme()::{lambda()#7}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_update_theme()::{lambda()#7}::operator()()::sname);
    }
  }
  uVar9 = 0;
  local_58 = Window::get_theme_color
                       (in_RDI,(StringName *)&_update_theme()::{lambda()#7}::operator()()::sname);
  Control::add_theme_color_override(pSVar3,(Color *)(SceneStringNames::singleton + 0xb0));
  OptionButton::clear();
  do {
    if ((0x7800001UL >> (uVar9 & 0x3f) & 1) == 0) {
      Variant::get_type_name((String *)&local_70,uVar9);
      pRVar2 = *(Ref **)(in_RDI + 0xe30);
      StringName::StringName((StringName *)&local_68,(String *)&local_70,false);
      Window::get_editor_theme_icon((StringName *)&local_60);
      OptionButton::add_icon_item(pRVar2,(String *)&local_60,(int)(String *)&local_70);
      if (local_60 != (Object *)0x0) {
        cVar6 = RefCounted::unreference();
        pOVar5 = local_60;
        if (cVar6 != '\0') {
          cVar6 = predelete_handler(local_60);
          if (cVar6 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      lVar4 = local_70;
      if (local_70 != 0) {
        LOCK();
        plVar1 = (long *)(local_70 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_70 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
    }
    uVar8 = (int)uVar9 + 1;
    uVar9 = (ulong)uVar8;
  } while (uVar8 != 0x27);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProjectSettingsEditor::_action_added(String const&) */

void ProjectSettingsEditor::_action_added(String *param_1)

{
  Variant *pVVar1;
  char cVar2;
  String *pSVar3;
  Variant *pVVar4;
  Object *pOVar5;
  StringName *pSVar6;
  int iVar7;
  long in_FS_OFFSET;
  long local_f8;
  Dictionary local_f0 [8];
  long local_e8;
  long local_e0;
  char *local_d8;
  undefined8 local_d0;
  int local_c8 [8];
  Variant *local_a8;
  Variant *pVStack_a0;
  undefined8 uStack_98;
  int local_88 [2];
  undefined1 local_80 [16];
  int local_70 [2];
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  operator+((char *)&local_f8,(String *)"input/");
  pSVar3 = (String *)ProjectSettings::get_singleton();
  cVar2 = ProjectSettings::has_setting(pSVar3);
  if (cVar2 == '\0') {
    Dictionary::Dictionary(local_f0);
    Array::Array((Array *)&local_d8);
    Variant::Variant((Variant *)&local_a8,(Array *)&local_d8);
    Variant::Variant((Variant *)local_c8,"events");
    pVVar4 = (Variant *)Dictionary::operator[]((Variant *)local_f0);
    if (pVVar4 != (Variant *)&local_a8) {
      if (Variant::needs_deinit[*(int *)pVVar4] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)pVVar4 = 0;
      *(int *)pVVar4 = (int)local_a8;
      *(Variant **)(pVVar4 + 8) = pVStack_a0;
      *(undefined8 *)(pVVar4 + 0x10) = uStack_98;
      local_a8 = (Variant *)((ulong)local_a8 & 0xffffffff00000000);
    }
    if (Variant::needs_deinit[local_c8[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[(int)local_a8] != '\0') {
      Variant::_clear_internal();
    }
    Array::~Array((Array *)&local_d8);
    Variant::Variant((Variant *)&local_a8,_LC32);
    Variant::Variant((Variant *)local_c8,"deadzone");
    pVVar4 = (Variant *)Dictionary::operator[]((Variant *)local_f0);
    if (pVVar4 != (Variant *)&local_a8) {
      if (Variant::needs_deinit[*(int *)pVVar4] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)pVVar4 = 0;
      *(int *)pVVar4 = (int)local_a8;
      *(Variant **)(pVVar4 + 8) = pVStack_a0;
      *(undefined8 *)(pVVar4 + 0x10) = uStack_98;
      local_a8 = (Variant *)((ulong)local_a8 & 0xffffffff00000000);
    }
    if (Variant::needs_deinit[local_c8[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[(int)local_a8] != '\0') {
      Variant::_clear_internal();
    }
    pOVar5 = (Object *)EditorUndoRedoManager::get_singleton();
    local_e0 = 0;
    local_d0 = 0;
    local_d8 = "";
    String::parse_latin1((StrRange *)&local_e0);
    local_e8 = 0;
    local_d8 = "Add Input Action";
    local_d0 = 0x10;
    String::parse_latin1((StrRange *)&local_e8);
    TTR((String *)&local_d8,(String *)&local_e8);
    EditorUndoRedoManager::create_action(pOVar5,(Array *)&local_d8,0,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
    Dictionary::Dictionary((Dictionary *)&local_d8,local_f0);
    local_e0 = 0;
    if (local_f8 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_e0,(CowData *)&local_f8);
    }
    StringName::StringName((StringName *)&local_e8,"set",false);
    pSVar6 = (StringName *)ProjectSettings::get_singleton();
    Variant::Variant((Variant *)local_88,(String *)&local_e0);
    Variant::Variant((Variant *)local_70,(Dictionary *)&local_d8);
    local_50 = (undefined1  [16])0x0;
    pVVar4 = (Variant *)local_40;
    local_58 = 0;
    iVar7 = (int)(Variant *)&local_a8;
    local_a8 = (Variant *)local_88;
    pVStack_a0 = (Variant *)local_70;
    EditorUndoRedoManager::add_do_methodp(pOVar5,pSVar6,(Variant **)&local_e8,iVar7);
    do {
      pVVar1 = pVVar4 + -0x18;
      pVVar4 = pVVar4 + -0x18;
      if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
        Variant::_clear_internal();
      }
    } while (pVVar4 != (Variant *)local_88);
    if ((StringName::configured != '\0') && (local_e8 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
    Dictionary::~Dictionary((Dictionary *)&local_d8);
    local_d8 = (char *)0x0;
    if (local_f8 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_d8,(CowData *)&local_f8);
    }
    StringName::StringName((StringName *)&local_e0,"clear",false);
    pSVar6 = (StringName *)ProjectSettings::get_singleton();
    Variant::Variant((Variant *)local_88,(String *)&local_d8);
    local_70[0] = 0;
    local_70[1] = 0;
    local_68 = (undefined1  [16])0x0;
    local_a8 = (Variant *)local_88;
    EditorUndoRedoManager::add_undo_methodp(pOVar5,pSVar6,(Variant **)&local_e0,iVar7);
    if (Variant::needs_deinit[local_70[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_88[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_e0 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
    StringName::StringName((StringName *)&local_d8,"_update_action_map_editor",false);
    local_88[0] = 0;
    local_88[1] = 0;
    local_80 = (undefined1  [16])0x0;
    EditorUndoRedoManager::add_do_methodp(pOVar5,(StringName *)param_1,(Variant **)&local_d8,0);
    if (Variant::needs_deinit[local_88[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_d8,"_update_action_map_editor",false);
    local_88[0] = 0;
    local_88[1] = 0;
    local_80 = (undefined1  [16])0x0;
    EditorUndoRedoManager::add_undo_methodp(pOVar5,(StringName *)param_1,(Variant **)&local_d8,0);
    if (Variant::needs_deinit[local_88[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_d8,"queue_save",false);
    local_88[0] = 0;
    local_88[1] = 0;
    local_80 = (undefined1  [16])0x0;
    EditorUndoRedoManager::add_do_methodp(pOVar5,(StringName *)param_1,(Variant **)&local_d8,0);
    if (Variant::needs_deinit[local_88[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_d8,"queue_save",false);
    local_88[0] = 0;
    local_88[1] = 0;
    local_80 = (undefined1  [16])0x0;
    EditorUndoRedoManager::add_undo_methodp(pOVar5,(StringName *)param_1,(Variant **)&local_d8,0);
    if (Variant::needs_deinit[local_88[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
      StringName::unref();
    }
    EditorUndoRedoManager::commit_action(SUB81(pOVar5,0));
    Dictionary::~Dictionary(local_f0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  }
  else {
    _err_print_error("_action_added","editor/project_settings_editor.cpp",0x185,
                     "Condition \"ProjectSettings::get_singleton()->has_setting(name)\" is true.",
                     "An action with this name already exists.",0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  }
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProjectSettingsEditor::_action_edited(String const&, Dictionary const&) */

void __thiscall
ProjectSettingsEditor::_action_edited
          (ProjectSettingsEditor *this,String *param_1,Dictionary *param_2)

{
  StringName *pSVar1;
  char cVar2;
  char cVar3;
  Object *pOVar4;
  Variant *pVVar5;
  Variant *this_00;
  StringName *pSVar6;
  int iVar7;
  StringName *pSVar8;
  long in_FS_OFFSET;
  Variant *local_108;
  String local_d8 [8];
  Variant local_d0 [8];
  long local_c8;
  undefined8 local_c0;
  char *local_b8;
  undefined8 local_b0;
  StringName *local_a8;
  Variant *pVStack_a0;
  int local_88 [2];
  undefined1 local_80 [16];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  operator+((char *)local_d8,(String *)"input/");
  ProjectSettings::get_singleton();
  StringName::StringName((StringName *)&local_b8,local_d8,false);
  ProjectSettings::get_setting_with_override((StringName *)local_88);
  Variant::operator_cast_to_Dictionary(local_d0);
  if (Variant::needs_deinit[local_88[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  pOVar4 = (Object *)EditorUndoRedoManager::get_singleton();
  Variant::Variant((Variant *)local_88,"deadzone");
  pVVar5 = (Variant *)Dictionary::operator[]((Variant *)param_2);
  Variant::Variant((Variant *)&local_a8,"deadzone");
  this_00 = (Variant *)Dictionary::operator[](local_d0);
  cVar3 = Variant::operator!=(this_00,pVVar5);
  if (Variant::needs_deinit[(int)local_a8] == '\0') {
    cVar2 = Variant::needs_deinit[local_88[0]];
  }
  else {
    Variant::_clear_internal();
    cVar2 = Variant::needs_deinit[local_88[0]];
  }
  if (cVar2 != '\0') {
    Variant::_clear_internal();
  }
  local_c0 = 0;
  local_b8 = "";
  local_b0 = 0;
  iVar7 = (int)(Variant *)&local_a8;
  local_a8 = (StringName *)local_88;
  if (cVar3 == '\0') {
    String::parse_latin1((StrRange *)&local_c0);
    local_b8 = "Change Input Action Event(s)";
    local_c8 = 0;
    local_b0 = 0x1c;
    String::parse_latin1((StrRange *)&local_c8);
    TTR((String *)&local_b8,(String *)&local_c8);
    EditorUndoRedoManager::create_action(pOVar4,(StringName *)&local_b8,0,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
    Dictionary::Dictionary((Dictionary *)&local_b8,param_2);
    local_c0 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_c0,(CowData *)local_d8);
    StringName::StringName((StringName *)&local_c8,"set",false);
    pSVar6 = (StringName *)ProjectSettings::get_singleton();
    Variant::Variant((Variant *)local_88,(String *)&local_c0);
    Variant::Variant(local_70,(Dictionary *)&local_b8);
    local_50 = (undefined1  [16])0x0;
    pSVar8 = (StringName *)local_40;
    local_58 = 0;
    pVStack_a0 = local_70;
    EditorUndoRedoManager::add_do_methodp(pOVar4,pSVar6,(Variant **)&local_c8,iVar7);
    do {
      pSVar6 = pSVar8 + -0x18;
      pSVar8 = pSVar8 + -0x18;
      if (Variant::needs_deinit[*(int *)pSVar6] != '\0') {
        Variant::_clear_internal();
      }
      local_108 = local_70;
    } while (pSVar8 != (StringName *)local_88);
    if ((StringName::configured != '\0') && (local_c8 != 0)) {
      StringName::unref();
    }
    pSVar8 = (StringName *)&local_58;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
    Dictionary::~Dictionary((Dictionary *)&local_b8);
    Dictionary::Dictionary((Dictionary *)&local_b8,(Dictionary *)local_d0);
    local_c0 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_c0,(CowData *)local_d8);
    StringName::StringName((StringName *)&local_c8,"set",false);
    pSVar6 = (StringName *)ProjectSettings::get_singleton();
    Variant::Variant((Variant *)local_88,(String *)&local_c0);
    Variant::Variant(local_108,(Dictionary *)&local_b8);
    local_50 = (undefined1  [16])0x0;
    local_58 = 0;
    pVStack_a0 = local_108;
    local_a8 = (StringName *)local_88;
    EditorUndoRedoManager::add_undo_methodp(pOVar4,pSVar6,(Variant **)&local_c8,iVar7);
    cVar3 = Variant::needs_deinit[(int)local_58];
    while( true ) {
      if (cVar3 != '\0') {
        Variant::_clear_internal();
      }
      if (pSVar8 == (StringName *)local_88) break;
      pSVar6 = pSVar8 + -0x18;
      pSVar8 = pSVar8 + -0x18;
      cVar3 = Variant::needs_deinit[*(int *)pSVar6];
    }
  }
  else {
    String::parse_latin1((StrRange *)&local_c0);
    local_b8 = "Change Action deadzone";
    local_c8 = 0;
    local_b0 = 0x16;
    String::parse_latin1((StrRange *)&local_c8);
    TTR((String *)&local_b8,(String *)&local_c8);
    EditorUndoRedoManager::create_action(pOVar4,(StringName *)&local_b8,0,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
    Dictionary::Dictionary((Dictionary *)&local_b8,param_2);
    local_c0 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_c0,(CowData *)local_d8);
    StringName::StringName((StringName *)&local_c8,"set",false);
    pSVar6 = (StringName *)ProjectSettings::get_singleton();
    Variant::Variant((Variant *)local_88,(String *)&local_c0);
    Variant::Variant(local_70,(Dictionary *)&local_b8);
    local_50 = (undefined1  [16])0x0;
    pSVar8 = (StringName *)local_40;
    local_58 = 0;
    pVStack_a0 = local_70;
    EditorUndoRedoManager::add_do_methodp(pOVar4,pSVar6,(Variant **)&local_c8,iVar7);
    pSVar6 = pSVar8;
    do {
      pSVar1 = pSVar6 + -0x18;
      pSVar6 = pSVar6 + -0x18;
      if (Variant::needs_deinit[*(int *)pSVar1] != '\0') {
        Variant::_clear_internal();
      }
    } while (pSVar6 != (StringName *)local_88);
    if ((StringName::configured != '\0') && (local_c8 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
    Dictionary::~Dictionary((Dictionary *)&local_b8);
    Dictionary::Dictionary((Dictionary *)&local_b8,(Dictionary *)local_d0);
    local_c0 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_c0,(CowData *)local_d8);
    StringName::StringName((StringName *)&local_c8,"set",false);
    pSVar6 = (StringName *)ProjectSettings::get_singleton();
    Variant::Variant((Variant *)local_88,(String *)&local_c0);
    Variant::Variant(local_70,(Dictionary *)&local_b8);
    local_50 = (undefined1  [16])0x0;
    local_58 = 0;
    local_a8 = (StringName *)local_88;
    pVStack_a0 = local_70;
    EditorUndoRedoManager::add_undo_methodp(pOVar4,pSVar6,(Variant **)&local_c8,iVar7);
    do {
      pSVar6 = pSVar8 + -0x18;
      pSVar8 = pSVar8 + -0x18;
      if (Variant::needs_deinit[*(int *)pSVar6] != '\0') {
        Variant::_clear_internal();
      }
    } while (pSVar8 != (StringName *)local_88);
  }
  if ((StringName::configured != '\0') && (local_c8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  Dictionary::~Dictionary((Dictionary *)&local_b8);
  StringName::StringName((StringName *)&local_b8,"_update_action_map_editor",false);
  local_88[0] = 0;
  local_88[1] = 0;
  local_80 = (undefined1  [16])0x0;
  EditorUndoRedoManager::add_do_methodp(pOVar4,(StringName *)this,(Variant **)&local_b8,0);
  if (Variant::needs_deinit[local_88[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_b8,"_update_action_map_editor",false);
  local_88[0] = 0;
  local_88[1] = 0;
  local_80 = (undefined1  [16])0x0;
  EditorUndoRedoManager::add_undo_methodp(pOVar4,(StringName *)this,(Variant **)&local_b8,0);
  if (Variant::needs_deinit[local_88[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_b8,"queue_save",false);
  local_88[0] = 0;
  local_88[1] = 0;
  local_80 = (undefined1  [16])0x0;
  EditorUndoRedoManager::add_do_methodp(pOVar4,(StringName *)this,(Variant **)&local_b8,0);
  if (Variant::needs_deinit[local_88[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_b8,"queue_save",false);
  local_88[0] = 0;
  local_88[1] = 0;
  local_80 = (undefined1  [16])0x0;
  EditorUndoRedoManager::add_undo_methodp(pOVar4,(StringName *)this,(Variant **)&local_b8,0);
  if (Variant::needs_deinit[local_88[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  EditorUndoRedoManager::commit_action(SUB81(pOVar4,0));
  Dictionary::~Dictionary((Dictionary *)local_d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ProjectSettingsEditor::_action_removed(String const&) */

void ProjectSettingsEditor::_action_removed(String *param_1)

{
  Variant *pVVar1;
  int iVar2;
  String *pSVar3;
  Object *pOVar4;
  StringName *pSVar5;
  Variant *pVVar6;
  long in_FS_OFFSET;
  long local_148;
  Variant local_140 [8];
  long local_138;
  long local_130;
  char *local_128;
  undefined8 local_120;
  StringName *local_118 [2];
  Variant *local_108;
  Variant *pVStack_100;
  undefined8 local_f0;
  undefined1 local_e8 [16];
  Variant *local_d8;
  Variant *pVStack_d0;
  Variant local_c0 [24];
  undefined8 local_a8;
  undefined1 local_a0 [16];
  Variant local_90 [8];
  int local_88 [2];
  undefined1 local_80 [16];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  operator+((char *)&local_148,(String *)"input/");
  ProjectSettings::get_singleton();
  StringName::StringName((StringName *)&local_128,(String *)&local_148,false);
  ProjectSettings::get_setting_with_override((StringName *)&local_108);
  Variant::operator_cast_to_Dictionary(local_140);
  if (Variant::needs_deinit[(int)local_108] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_128 != (char *)0x0)) {
    StringName::unref();
  }
  pSVar3 = (String *)ProjectSettings::get_singleton();
  iVar2 = ProjectSettings::get_order(pSVar3);
  pOVar4 = (Object *)EditorUndoRedoManager::get_singleton();
  local_130 = 0;
  local_120 = 0;
  local_128 = "";
  String::parse_latin1((StrRange *)&local_130);
  local_138 = 0;
  local_128 = "Erase Input Action";
  local_120 = 0x12;
  String::parse_latin1((StrRange *)&local_138);
  TTR((String *)&local_128,(String *)&local_138);
  EditorUndoRedoManager::create_action(pOVar4,(StringName *)&local_128,0,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_130);
  local_128 = (char *)0x0;
  if (local_148 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_128,(CowData *)&local_148);
  }
  StringName::StringName((StringName *)&local_130,"clear",false);
  pSVar5 = (StringName *)ProjectSettings::get_singleton();
  Variant::Variant((Variant *)&local_108,(String *)&local_128);
  local_f0 = 0;
  local_e8 = (undefined1  [16])0x0;
  local_118[0] = (StringName *)&local_108;
  EditorUndoRedoManager::add_do_methodp(pOVar4,pSVar5,(Variant **)&local_130,(int)local_118);
  if (Variant::needs_deinit[(int)local_f0] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[(int)local_108] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_130 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
  Dictionary::Dictionary((Dictionary *)&local_128,(Dictionary *)local_140);
  local_130 = 0;
  if (local_148 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_130,(CowData *)&local_148);
  }
  StringName::StringName((StringName *)&local_138,"set",false);
  pSVar5 = (StringName *)ProjectSettings::get_singleton();
  Variant::Variant((Variant *)&local_d8,(String *)&local_130);
  Variant::Variant(local_c0,(Dictionary *)&local_128);
  local_a0 = (undefined1  [16])0x0;
  pVVar6 = local_90;
  local_a8 = 0;
  local_108 = (Variant *)&local_d8;
  pVStack_100 = local_c0;
  EditorUndoRedoManager::add_undo_methodp
            (pOVar4,pSVar5,(Variant **)&local_138,(int)(StringName *)&local_108);
  do {
    pVVar1 = pVVar6 + -0x18;
    pVVar6 = pVVar6 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar6 != (Variant *)&local_d8);
  if ((StringName::configured != '\0') && (local_138 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_130);
  Dictionary::~Dictionary((Dictionary *)&local_128);
  local_128 = (char *)0x0;
  if (local_148 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_128,(CowData *)&local_148);
  }
  StringName::StringName((StringName *)&local_130,"set_order",false);
  pSVar5 = (StringName *)ProjectSettings::get_singleton();
  Variant::Variant((Variant *)local_88,(String *)&local_128);
  Variant::Variant(local_70,iVar2);
  local_50 = (undefined1  [16])0x0;
  pVVar6 = (Variant *)local_40;
  local_58 = 0;
  local_d8 = (Variant *)local_88;
  pVStack_d0 = local_70;
  EditorUndoRedoManager::add_undo_methodp
            (pOVar4,pSVar5,(Variant **)&local_130,(int)(Variant *)&local_d8);
  do {
    pVVar1 = pVVar6 + -0x18;
    pVVar6 = pVVar6 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar6 != (Variant *)local_88);
  if ((StringName::configured != '\0') && (local_130 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
  StringName::StringName((StringName *)&local_128,"_update_action_map_editor",false);
  local_88[0] = 0;
  local_88[1] = 0;
  local_80 = (undefined1  [16])0x0;
  EditorUndoRedoManager::add_do_methodp(pOVar4,(StringName *)param_1,(Variant **)&local_128,0);
  if (Variant::needs_deinit[local_88[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_128 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_128,"_update_action_map_editor",false);
  local_88[0] = 0;
  local_88[1] = 0;
  local_80 = (undefined1  [16])0x0;
  EditorUndoRedoManager::add_undo_methodp(pOVar4,(StringName *)param_1,(Variant **)&local_128,0);
  if (Variant::needs_deinit[local_88[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_128 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_128,"queue_save",false);
  local_88[0] = 0;
  local_88[1] = 0;
  local_80 = (undefined1  [16])0x0;
  EditorUndoRedoManager::add_do_methodp(pOVar4,(StringName *)param_1,(Variant **)&local_128,0);
  if (Variant::needs_deinit[local_88[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_128 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_128,"queue_save",false);
  local_88[0] = 0;
  local_88[1] = 0;
  local_80 = (undefined1  [16])0x0;
  EditorUndoRedoManager::add_undo_methodp(pOVar4,(StringName *)param_1,(Variant **)&local_128,0);
  if (Variant::needs_deinit[local_88[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_128 != (char *)0x0)) {
    StringName::unref();
  }
  EditorUndoRedoManager::commit_action(SUB81(pOVar4,0));
  Dictionary::~Dictionary((Dictionary *)local_140);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProjectSettingsEditor::_action_renamed(String const&, String const&) */

void ProjectSettingsEditor::_action_renamed(String *param_1,String *param_2)

{
  Variant *pVVar1;
  char cVar2;
  int iVar3;
  String *pSVar4;
  Object *pOVar5;
  StringName *pSVar6;
  int iVar7;
  Variant *pVVar8;
  long in_FS_OFFSET;
  String local_1f0 [8];
  CowData<char32_t> local_1e8 [8];
  Variant local_1e0 [8];
  long local_1d8;
  long local_1d0;
  char *local_1c8;
  undefined8 local_1c0;
  StringName *local_1b8 [2];
  Variant *local_1a8;
  Variant *pVStack_1a0;
  undefined8 local_190;
  undefined1 local_188 [16];
  Variant *local_178;
  Variant *pVStack_170;
  Variant local_160 [24];
  undefined8 local_148;
  undefined1 local_140 [16];
  Variant local_130 [8];
  Variant *local_128;
  Variant *pVStack_120;
  int local_110 [2];
  undefined1 local_108 [16];
  undefined8 local_f8;
  undefined1 local_f0 [16];
  Variant local_e0 [8];
  Variant *local_d8;
  Variant *pVStack_d0;
  Variant local_c0 [24];
  undefined8 local_a8;
  undefined1 local_a0 [16];
  Variant local_90 [8];
  int local_88 [2];
  undefined1 local_80 [16];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  operator+((char *)local_1f0,(String *)"input/");
  operator+((char *)local_1e8,(String *)"input/");
  pSVar4 = (String *)ProjectSettings::get_singleton();
  cVar2 = ProjectSettings::has_setting(pSVar4);
  if (cVar2 == '\0') {
    pSVar4 = (String *)ProjectSettings::get_singleton();
    iVar3 = ProjectSettings::get_order(pSVar4);
    ProjectSettings::get_singleton();
    StringName::StringName((StringName *)&local_1c8,local_1f0,false);
    ProjectSettings::get_setting_with_override((StringName *)&local_1a8);
    Variant::operator_cast_to_Dictionary(local_1e0);
    if (Variant::needs_deinit[(int)local_1a8] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_1c8 != (char *)0x0)) {
      StringName::unref();
    }
    pOVar5 = (Object *)EditorUndoRedoManager::get_singleton();
    local_1d0 = 0;
    local_1c0 = 0;
    local_1c8 = "";
    String::parse_latin1((StrRange *)&local_1d0);
    local_1d8 = 0;
    local_1c8 = "Rename Input Action";
    local_1c0 = 0x13;
    String::parse_latin1((StrRange *)&local_1d8);
    TTR((String *)&local_1c8,(String *)&local_1d8);
    EditorUndoRedoManager::create_action(pOVar5,(StringName *)&local_1c8,0,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_1d8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_1d0);
    local_1c8 = (char *)0x0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_1c8,(CowData *)local_1f0);
    StringName::StringName((StringName *)&local_1d0,"clear",false);
    pSVar6 = (StringName *)ProjectSettings::get_singleton();
    Variant::Variant((Variant *)&local_1a8,(String *)&local_1c8);
    local_190 = 0;
    local_188 = (undefined1  [16])0x0;
    local_1b8[0] = (StringName *)&local_1a8;
    EditorUndoRedoManager::add_do_methodp(pOVar5,pSVar6,(Variant **)&local_1d0,(int)local_1b8);
    if (Variant::needs_deinit[(int)local_190] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[(int)local_1a8] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_1d0 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c8);
    Dictionary::Dictionary((Dictionary *)&local_1c8,(Dictionary *)local_1e0);
    local_1d0 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_1d0,(CowData *)local_1e8);
    StringName::StringName((StringName *)&local_1d8,"set",false);
    pSVar6 = (StringName *)ProjectSettings::get_singleton();
    Variant::Variant((Variant *)&local_178,(String *)&local_1d0);
    Variant::Variant(local_160,(Dictionary *)&local_1c8);
    local_140 = (undefined1  [16])0x0;
    pVVar8 = local_130;
    local_148 = 0;
    local_1a8 = (Variant *)&local_178;
    pVStack_1a0 = local_160;
    EditorUndoRedoManager::add_do_methodp
              (pOVar5,pSVar6,(Variant **)&local_1d8,(int)(StringName *)&local_1a8);
    do {
      pVVar1 = pVVar8 + -0x18;
      pVVar8 = pVVar8 + -0x18;
      if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
        Variant::_clear_internal();
      }
    } while (pVVar8 != (Variant *)&local_178);
    if ((StringName::configured != '\0') && (local_1d8 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_1d0);
    Dictionary::~Dictionary((Dictionary *)&local_1c8);
    local_1c8 = (char *)0x0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_1c8,(CowData *)local_1e8);
    StringName::StringName((StringName *)&local_1d0,"set_order",false);
    pSVar6 = (StringName *)ProjectSettings::get_singleton();
    Variant::Variant((Variant *)&local_128,(String *)&local_1c8);
    Variant::Variant((Variant *)local_110,iVar3);
    local_f0 = (undefined1  [16])0x0;
    pVVar8 = local_e0;
    local_f8 = 0;
    iVar7 = (int)(Variant *)&local_178;
    local_178 = (Variant *)&local_128;
    pVStack_170 = (Variant *)local_110;
    EditorUndoRedoManager::add_do_methodp(pOVar5,pSVar6,(Variant **)&local_1d0,iVar7);
    do {
      pVVar1 = pVVar8 + -0x18;
      pVVar8 = pVVar8 + -0x18;
      if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
        Variant::_clear_internal();
      }
    } while (pVVar8 != (Variant *)&local_128);
    if ((StringName::configured != '\0') && (local_1d0 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c8);
    local_1c8 = (char *)0x0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_1c8,(CowData *)local_1e8);
    StringName::StringName((StringName *)&local_1d0,"clear",false);
    pSVar6 = (StringName *)ProjectSettings::get_singleton();
    Variant::Variant((Variant *)&local_128,(String *)&local_1c8);
    local_110[0] = 0;
    local_110[1] = 0;
    local_108 = (undefined1  [16])0x0;
    local_178 = (Variant *)&local_128;
    EditorUndoRedoManager::add_undo_methodp(pOVar5,pSVar6,(Variant **)&local_1d0,iVar7);
    if (Variant::needs_deinit[local_110[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[(int)local_128] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_1d0 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c8);
    Dictionary::Dictionary((Dictionary *)&local_1c8,(Dictionary *)local_1e0);
    local_1d0 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_1d0,(CowData *)local_1f0);
    StringName::StringName((StringName *)&local_1d8,"set",false);
    pSVar6 = (StringName *)ProjectSettings::get_singleton();
    Variant::Variant((Variant *)&local_d8,(String *)&local_1d0);
    Variant::Variant(local_c0,(Dictionary *)&local_1c8);
    local_a0 = (undefined1  [16])0x0;
    pVVar8 = local_90;
    local_a8 = 0;
    local_128 = (Variant *)&local_d8;
    pVStack_120 = local_c0;
    EditorUndoRedoManager::add_undo_methodp
              (pOVar5,pSVar6,(Variant **)&local_1d8,(int)(Variant *)&local_128);
    do {
      pVVar1 = pVVar8 + -0x18;
      pVVar8 = pVVar8 + -0x18;
      if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
        Variant::_clear_internal();
      }
    } while (pVVar8 != (Variant *)&local_d8);
    if ((StringName::configured != '\0') && (local_1d8 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_1d0);
    Dictionary::~Dictionary((Dictionary *)&local_1c8);
    local_1c8 = (char *)0x0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_1c8,(CowData *)local_1f0);
    StringName::StringName((StringName *)&local_1d0,"set_order",false);
    pSVar6 = (StringName *)ProjectSettings::get_singleton();
    Variant::Variant((Variant *)local_88,(String *)&local_1c8);
    Variant::Variant(local_70,iVar3);
    local_50 = (undefined1  [16])0x0;
    pVVar8 = (Variant *)local_40;
    local_58 = 0;
    local_d8 = (Variant *)local_88;
    pVStack_d0 = local_70;
    EditorUndoRedoManager::add_undo_methodp
              (pOVar5,pSVar6,(Variant **)&local_1d0,(int)(Variant *)&local_d8);
    do {
      pVVar1 = pVVar8 + -0x18;
      pVVar8 = pVVar8 + -0x18;
      if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
        Variant::_clear_internal();
      }
    } while (pVVar8 != (Variant *)local_88);
    if ((StringName::configured != '\0') && (local_1d0 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c8);
    StringName::StringName((StringName *)&local_1c8,"_update_action_map_editor",false);
    local_88[0] = 0;
    local_88[1] = 0;
    local_80 = (undefined1  [16])0x0;
    EditorUndoRedoManager::add_do_methodp(pOVar5,(StringName *)param_1,(Variant **)&local_1c8,0);
    if (Variant::needs_deinit[local_88[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_1c8 != (char *)0x0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_1c8,"_update_action_map_editor",false);
    local_88[0] = 0;
    local_88[1] = 0;
    local_80 = (undefined1  [16])0x0;
    EditorUndoRedoManager::add_undo_methodp(pOVar5,(StringName *)param_1,(Variant **)&local_1c8,0);
    if (Variant::needs_deinit[local_88[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_1c8 != (char *)0x0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_1c8,"queue_save",false);
    local_88[0] = 0;
    local_88[1] = 0;
    local_80 = (undefined1  [16])0x0;
    EditorUndoRedoManager::add_do_methodp(pOVar5,(StringName *)param_1,(Variant **)&local_1c8,0);
    if (Variant::needs_deinit[local_88[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_1c8 != (char *)0x0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_1c8,"queue_save",false);
    local_88[0] = 0;
    local_88[1] = 0;
    local_80 = (undefined1  [16])0x0;
    EditorUndoRedoManager::add_undo_methodp(pOVar5,(StringName *)param_1,(Variant **)&local_1c8,0);
    if (Variant::needs_deinit[local_88[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_1c8 != (char *)0x0)) {
      StringName::unref();
    }
    EditorUndoRedoManager::commit_action(SUB81(pOVar5,0));
    Dictionary::~Dictionary((Dictionary *)local_1e0);
    CowData<char32_t>::_unref(local_1e8);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_1f0);
  }
  else {
    _err_print_error("_action_renamed","editor/project_settings_editor.cpp",0x1c8,
                     "Condition \"ProjectSettings::get_singleton()->has_setting(new_property_name)\" is true."
                     ,"An action with this name already exists.",0,0);
    CowData<char32_t>::_unref(local_1e8);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_1f0);
  }
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProjectSettingsEditor::ProjectSettingsEditor(EditorData*) */

void __thiscall
ProjectSettingsEditor::ProjectSettingsEditor(ProjectSettingsEditor *this,EditorData *param_1)

{
  StringName *pSVar1;
  code *pcVar2;
  String *pSVar3;
  Vector2 *pVVar4;
  long lVar5;
  bool bVar6;
  int iVar7;
  undefined8 uVar8;
  TabContainer *pTVar9;
  BoxContainer *pBVar10;
  LineEdit *pLVar11;
  CheckButton *this_00;
  CallableCustom *pCVar12;
  OptionButton *pOVar13;
  Button *pBVar14;
  SectionedInspector *this_01;
  long *plVar15;
  PanelContainer *this_02;
  TextureRect *this_03;
  Label *this_04;
  ActionMapEditor *this_05;
  LocalizationEditor *this_06;
  EditorAutoloadSettings *this_07;
  ShaderGlobalsEditor *this_08;
  GroupSettingsEditor *this_09;
  EditorPluginSettings *this_10;
  Timer *this_11;
  ImportDefaultsEditor *this_12;
  long in_FS_OFFSET;
  float fVar16;
  undefined8 local_a0;
  long local_98 [2];
  char *local_88;
  undefined8 local_80;
  int local_78 [8];
  undefined8 local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  AcceptDialog::AcceptDialog((AcceptDialog *)this);
  *(undefined1 (*) [16])(this + 0xdb0) = (undefined1  [16])0x0;
  *(undefined ***)this = &PTR__initialize_classv_001150b0;
  *(undefined8 *)(this + 0xe70) = 0;
  *(undefined1 (*) [16])(this + 0xdc0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xdd0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xde0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xdf0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xe00) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xe10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xe20) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xe30) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xe40) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xe50) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xe60) = (undefined1  [16])0x0;
  local_88 = (char *)0x0;
  singleton = this;
  String::parse_latin1((String *)&local_88,"");
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"Project Settings (project.godot)");
  TTR((String *)&local_a0,(String *)local_98);
  Window::set_title((String *)this);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  Window::set_clamp_to_embedder(SUB81(this,0));
  uVar8 = ProjectSettings::get_singleton();
  *(EditorData **)(this + 0xe70) = param_1;
  *(undefined8 *)(this + 0xdb0) = uVar8;
  pTVar9 = (TabContainer *)operator_new(0xb40,"");
  TabContainer::TabContainer(pTVar9);
  postinitialize_handler((Object *)pTVar9);
  *(TabContainer **)(this + 0xdc0) = pTVar9;
  TabContainer::set_use_hidden_tabs_for_min_size(SUB81(pTVar9,0));
  pSVar1 = *(StringName **)(this + 0xdc0);
  StringName::StringName((StringName *)&local_88,"TabContainerOdd",false);
  Control::set_theme_type_variation(pSVar1);
  if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
    StringName::unref();
  }
  plVar15 = *(long **)(this + 0xdc0);
  pcVar2 = *(code **)(*plVar15 + 0x108);
  create_custom_callable_function_pointer<ProjectSettingsEditor,int>
            ((ProjectSettingsEditor *)&local_88,(char *)this,
             (_func_void_int *)"&ProjectSettingsEditor::_tabs_tab_changed");
  StringName::StringName((StringName *)local_98,"tab_changed",false);
  (*pcVar2)(plVar15,(String *)local_98,(String *)&local_88,0);
  if ((StringName::configured != '\0') && (local_98[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_88);
  Node::add_child(this,*(undefined8 *)(this + 0xdc0),0,0);
  pBVar10 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar10,true);
  pBVar10[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar10 = &PTR__initialize_classv_00114d38;
  postinitialize_handler((Object *)pBVar10);
  *(BoxContainer **)(this + 0xdc8) = pBVar10;
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"");
  local_88 = "General";
  local_a0 = 0;
  local_80 = 7;
  String::parse_latin1((StrRange *)&local_a0);
  TTR((String *)&local_88,(String *)&local_a0);
  Node::set_name((String *)pBVar10);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  BoxContainer::set_alignment(*(undefined8 *)(this + 0xdc8),0);
  Control::set_v_size_flags(*(undefined8 *)(this + 0xdc8),3);
  Node::add_child(*(undefined8 *)(this + 0xdc0),*(undefined8 *)(this + 0xdc8),0,0);
  pBVar10 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar10,false);
  pBVar10[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar10 = &PTR__initialize_classv_001149c0;
  postinitialize_handler((Object *)pBVar10);
  Node::add_child(*(undefined8 *)(this + 0xdc8),pBVar10,0,0);
  pLVar11 = (LineEdit *)operator_new(0xbb0,"");
  local_88 = (char *)0x0;
  LineEdit::LineEdit(pLVar11,(String *)&local_88);
  postinitialize_handler((Object *)pLVar11);
  *(LineEdit **)(this + 0xe08) = pLVar11;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  local_88 = "";
  local_98[0] = 0;
  uVar8 = *(undefined8 *)(this + 0xe08);
  local_80 = 0;
  String::parse_latin1((StrRange *)local_98);
  local_88 = "Filter Settings";
  local_a0 = 0;
  local_80 = 0xf;
  String::parse_latin1((StrRange *)&local_a0);
  TTR((String *)&local_88,(String *)&local_a0);
  LineEdit::set_placeholder(uVar8,(String *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  LineEdit::set_clear_button_enabled(SUB81(*(undefined8 *)(this + 0xe08),0));
  Control::set_h_size_flags(*(undefined8 *)(this + 0xe08),3);
  Node::add_child(pBVar10,*(undefined8 *)(this + 0xe08),0,0);
  this_00 = (CheckButton *)operator_new(0xc60,"");
  local_88 = (char *)0x0;
  CheckButton::CheckButton(this_00,(String *)&local_88);
  postinitialize_handler((Object *)this_00);
  *(CheckButton **)(this + 0xe10) = this_00;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  local_88 = "";
  local_98[0] = 0;
  pSVar3 = *(String **)(this + 0xe10);
  local_80 = 0;
  String::parse_latin1((StrRange *)local_98);
  local_88 = "Advanced Settings";
  local_a0 = 0;
  local_80 = 0x11;
  String::parse_latin1((StrRange *)&local_a0);
  TTR((String *)&local_88,(String *)&local_a0);
  Button::set_text(pSVar3);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  plVar15 = *(long **)(this + 0xe10);
  pcVar2 = *(code **)(*plVar15 + 0x108);
  pCVar12 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar12);
  *(undefined1 (*) [16])(pCVar12 + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(pCVar12 + 0x40) = 0;
  uVar8 = *(undefined8 *)(this + 0x60);
  *(undefined ***)pCVar12 = &PTR_hash_001153b8;
  *(undefined8 *)(pCVar12 + 0x30) = uVar8;
  *(code **)(pCVar12 + 0x38) = _advanced_toggled;
  *(undefined8 *)(pCVar12 + 0x10) = 0;
  *(undefined **)(pCVar12 + 0x20) = &_LC25;
  *(ProjectSettingsEditor **)(pCVar12 + 0x28) = this;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar12,(int)pCVar12 + 0x28);
  *(char **)(pCVar12 + 0x20) = "ProjectSettingsEditor::_advanced_toggled";
  Callable::Callable((Callable *)&local_88,pCVar12);
  (*pcVar2)(plVar15,SceneStringNames::singleton + 0x248,(String *)&local_88,0);
  Callable::~Callable((Callable *)&local_88);
  Node::add_child(pBVar10,*(undefined8 *)(this + 0xe10),0,0);
  pBVar10 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar10,false);
  pBVar10[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar10 = &PTR__initialize_classv_001149c0;
  postinitialize_handler((Object *)pBVar10);
  *(BoxContainer **)(this + 0xe18) = pBVar10;
  Node::add_child(*(undefined8 *)(this + 0xdc8),pBVar10,0,0);
  pLVar11 = (LineEdit *)operator_new(0xbb0,"");
  local_88 = (char *)0x0;
  LineEdit::LineEdit(pLVar11,(String *)&local_88);
  postinitialize_handler((Object *)pLVar11);
  *(LineEdit **)(this + 0xe20) = pLVar11;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  local_88 = "";
  local_98[0] = 0;
  uVar8 = *(undefined8 *)(this + 0xe20);
  local_80 = 0;
  String::parse_latin1((StrRange *)local_98);
  local_88 = "Select a Setting or Type its Name";
  local_a0 = 0;
  local_80 = 0x21;
  String::parse_latin1((StrRange *)&local_a0);
  TTR((String *)&local_88,(String *)&local_a0);
  LineEdit::set_placeholder(uVar8,(String *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xe20),3);
  plVar15 = *(long **)(this + 0xe20);
  pcVar2 = *(code **)(*plVar15 + 0x108);
  create_custom_callable_function_pointer<ProjectSettingsEditor,String_const&>
            ((ProjectSettingsEditor *)&local_88,(char *)this,
             (_func_void_String_ptr *)"&ProjectSettingsEditor::_property_box_changed");
  (*pcVar2)(plVar15,SceneStringNames::singleton + 0x270,(String *)&local_88,0);
  Callable::~Callable((Callable *)&local_88);
  Node::add_child(*(undefined8 *)(this + 0xe18),*(undefined8 *)(this + 0xe20),0,0);
  pOVar13 = (OptionButton *)operator_new(0xd00,"");
  local_88 = (char *)0x0;
  OptionButton::OptionButton(pOVar13,(String *)&local_88);
  postinitialize_handler((Object *)pOVar13);
  *(OptionButton **)(this + 0xe28) = pOVar13;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  pVVar4 = *(Vector2 **)(this + 0xe28);
  fVar16 = (float)EditorScale::get_scale();
  local_58[0] = CONCAT44(fVar16 * _LC60._4_4_,fVar16 * (float)_LC60);
  Control::set_custom_minimum_size(pVVar4);
  plVar15 = *(long **)(this + 0xe28);
  pcVar2 = *(code **)(*plVar15 + 0x108);
  create_custom_callable_function_pointer<ProjectSettingsEditor,int>
            ((ProjectSettingsEditor *)&local_88,(char *)this,
             (_func_void_int *)"&ProjectSettingsEditor::_feature_selected");
  (*pcVar2)(plVar15,SceneStringNames::singleton + 0x260,(String *)&local_88);
  Callable::~Callable((Callable *)&local_88);
  Node::add_child(*(undefined8 *)(this + 0xe18),*(undefined8 *)(this + 0xe28),0,0);
  pOVar13 = (OptionButton *)operator_new(0xd00,"");
  local_88 = (char *)0x0;
  OptionButton::OptionButton(pOVar13,(String *)&local_88);
  postinitialize_handler((Object *)pOVar13);
  *(OptionButton **)(this + 0xe30) = pOVar13;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  pVVar4 = *(Vector2 **)(this + 0xe30);
  fVar16 = (float)EditorScale::get_scale();
  local_58[0] = CONCAT44(fVar16 * _LC60._4_4_,fVar16 * (float)_LC60);
  Control::set_custom_minimum_size(pVVar4);
  Node::add_child(*(undefined8 *)(this + 0xe18),*(undefined8 *)(this + 0xe30),0,0);
  pBVar14 = (Button *)operator_new(0xc10,"");
  local_88 = (char *)0x0;
  Button::Button(pBVar14,(String *)&local_88);
  postinitialize_handler((Object *)pBVar14);
  *(Button **)(this + 0xe38) = pBVar14;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  local_88 = "";
  local_98[0] = 0;
  pSVar3 = *(String **)(this + 0xe38);
  local_80 = 0;
  String::parse_latin1((StrRange *)local_98);
  local_88 = "Add";
  local_a0 = 0;
  local_80 = 3;
  String::parse_latin1((StrRange *)&local_a0);
  TTR((String *)&local_88,(String *)&local_a0);
  Button::set_text(pSVar3);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xe38),0));
  plVar15 = *(long **)(this + 0xe38);
  pcVar2 = *(code **)(*plVar15 + 0x108);
  create_custom_callable_function_pointer<ProjectSettingsEditor>
            ((ProjectSettingsEditor *)&local_88,(char *)this,
             (_func_void *)"&ProjectSettingsEditor::_add_setting");
  (*pcVar2)(plVar15,SceneStringNames::singleton + 0x238,(String *)&local_88);
  Callable::~Callable((Callable *)&local_88);
  Node::add_child(*(undefined8 *)(this + 0xe18),*(undefined8 *)(this + 0xe38),0,0);
  pBVar14 = (Button *)operator_new(0xc10,"");
  local_88 = (char *)0x0;
  Button::Button(pBVar14,(String *)&local_88);
  postinitialize_handler((Object *)pBVar14);
  *(Button **)(this + 0xe40) = pBVar14;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  local_88 = "";
  local_98[0] = 0;
  pSVar3 = *(String **)(this + 0xe40);
  local_80 = 0;
  String::parse_latin1((StrRange *)local_98);
  local_88 = "Delete";
  local_a0 = 0;
  local_80 = 6;
  String::parse_latin1((StrRange *)&local_a0);
  TTR((String *)&local_88,(String *)&local_a0);
  Button::set_text(pSVar3);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xe40),0));
  plVar15 = *(long **)(this + 0xe40);
  pcVar2 = *(code **)(*plVar15 + 0x108);
  create_custom_callable_function_pointer<ProjectSettingsEditor>
            ((ProjectSettingsEditor *)&local_88,(char *)this,
             (_func_void *)"&ProjectSettingsEditor::_delete_setting");
  (*pcVar2)(plVar15,SceneStringNames::singleton + 0x238,(String *)&local_88);
  Callable::~Callable((Callable *)&local_88);
  Node::add_child(*(undefined8 *)(this + 0xe18),*(undefined8 *)(this + 0xe40),0,0);
  this_01 = (SectionedInspector *)operator_new(0xae0,"");
  SectionedInspector::SectionedInspector(this_01);
  postinitialize_handler((Object *)this_01);
  *(SectionedInspector **)(this + 0xdd0) = this_01;
  Control::set_v_size_flags(this_01,3);
  SectionedInspector::register_search_box(*(LineEdit **)(this + 0xdd0));
  SectionedInspector::register_advanced_toggle(*(CheckButton **)(this + 0xdd0));
  bVar6 = (bool)SectionedInspector::get_inspector();
  EditorInspector::set_use_filter(bVar6);
  plVar15 = (long *)SectionedInspector::get_inspector();
  pcVar2 = *(code **)(*plVar15 + 0x108);
  create_custom_callable_function_pointer<ProjectSettingsEditor,String_const&>
            ((ProjectSettingsEditor *)&local_88,(char *)this,
             (_func_void_String_ptr *)"&ProjectSettingsEditor::_setting_selected");
  StringName::StringName((StringName *)local_98,"property_selected",false);
  (*pcVar2)(plVar15,(String *)local_98,(String *)&local_88,0);
  if ((StringName::configured != '\0') && (local_98[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_88);
  plVar15 = (long *)SectionedInspector::get_inspector();
  pcVar2 = *(code **)(*plVar15 + 0x108);
  create_custom_callable_function_pointer<ProjectSettingsEditor,String_const&>
            ((ProjectSettingsEditor *)&local_88,(char *)this,
             (_func_void_String_ptr *)"&ProjectSettingsEditor::_setting_edited");
  StringName::StringName((StringName *)local_98,"property_edited",false);
  (*pcVar2)(plVar15,(String *)local_98,(String *)&local_88,0);
  if ((StringName::configured != '\0') && (local_98[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_88);
  plVar15 = (long *)SectionedInspector::get_inspector();
  pcVar2 = *(code **)(*plVar15 + 0x108);
  create_custom_callable_function_pointer<ProjectSettingsEditor>
            ((ProjectSettingsEditor *)&local_88,(char *)this,
             (_func_void *)"&ProjectSettingsEditor::_editor_restart_request");
  StringName::StringName((StringName *)local_98,"restart_requested",false);
  (*pcVar2)(plVar15,(String *)local_98,(String *)&local_88,0);
  if ((StringName::configured != '\0') && (local_98[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_88);
  Node::add_child(*(undefined8 *)(this + 0xdc8),*(undefined8 *)(this + 0xdd0),0,0);
  this_02 = (PanelContainer *)operator_new(0xa08,"");
  PanelContainer::PanelContainer(this_02);
  postinitialize_handler((Object *)this_02);
  *(PanelContainer **)(this + 0xe58) = this_02;
  Node::add_child(*(undefined8 *)(this + 0xdc8),this_02,0,0);
  pBVar10 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar10,false);
  pBVar10[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar10 = &PTR__initialize_classv_001149c0;
  postinitialize_handler((Object *)pBVar10);
  CanvasItem::hide();
  Node::add_child(*(undefined8 *)(this + 0xe58),pBVar10,0,0);
  this_03 = (TextureRect *)operator_new(0x9e0,"");
  TextureRect::TextureRect(this_03);
  postinitialize_handler((Object *)this_03);
  *(TextureRect **)(this + 0xe50) = this_03;
  Control::set_v_size_flags(this_03,4);
  Node::add_child(pBVar10,*(undefined8 *)(this + 0xe50),0,0);
  this_04 = (Label *)operator_new(0xad8,"");
  local_88 = (char *)0x0;
  Label::Label(this_04,(String *)&local_88);
  postinitialize_handler((Object *)this_04);
  *(Label **)(this + 0xe48) = this_04;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  pSVar3 = *(String **)(this + 0xe48);
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"");
  local_88 = "Changed settings will be applied to the editor after restarting.";
  local_a0 = 0;
  local_80 = 0x40;
  String::parse_latin1((StrRange *)&local_a0);
  TTR((String *)&local_88,(String *)&local_a0);
  Label::set_text(pSVar3);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  Node::add_child(pBVar10,*(undefined8 *)(this + 0xe48),0,0);
  BoxContainer::add_spacer(SUB81(pBVar10,0));
  pBVar14 = (Button *)operator_new(0xc10,"");
  local_88 = (char *)0x0;
  Button::Button(pBVar14,(String *)&local_88);
  postinitialize_handler((Object *)pBVar14);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  pcVar2 = *(code **)(*(long *)pBVar14 + 0x108);
  create_custom_callable_function_pointer<ProjectSettingsEditor>
            ((ProjectSettingsEditor *)&local_88,(char *)this,
             (_func_void *)"&ProjectSettingsEditor::_editor_restart");
  (*pcVar2)(pBVar14,SceneStringNames::singleton + 0x238,(String *)&local_88,0);
  Callable::~Callable((Callable *)&local_88);
  Node::add_child(pBVar10,pBVar14,0,0);
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"");
  local_88 = "Save & Restart";
  local_a0 = 0;
  local_80 = 0xe;
  String::parse_latin1((StrRange *)&local_a0);
  TTR((String *)&local_88,(String *)&local_a0);
  Button::set_text((String *)pBVar14);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  pBVar14 = (Button *)operator_new(0xc10,"");
  local_88 = (char *)0x0;
  Button::Button(pBVar14,(String *)&local_88);
  postinitialize_handler((Object *)pBVar14);
  *(Button **)(this + 0xe60) = pBVar14;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  Button::set_flat(SUB81(*(undefined8 *)(this + 0xe60),0));
  plVar15 = *(long **)(this + 0xe60);
  pcVar2 = *(code **)(*plVar15 + 0x108);
  create_custom_callable_function_pointer<ProjectSettingsEditor>
            ((ProjectSettingsEditor *)&local_88,(char *)this,
             (_func_void *)"&ProjectSettingsEditor::_editor_restart_close");
  (*pcVar2)(plVar15,SceneStringNames::singleton + 0x238,(String *)&local_88);
  Callable::~Callable((Callable *)&local_88);
  Node::add_child(pBVar10,*(undefined8 *)(this + 0xe60),0,0);
  this_05 = (ActionMapEditor *)operator_new(0xa48,"");
  ActionMapEditor::ActionMapEditor(this_05);
  postinitialize_handler((Object *)this_05);
  *(ActionMapEditor **)(this + 0xdd8) = this_05;
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"");
  local_88 = "Input Map";
  local_a0 = 0;
  local_80 = 9;
  String::parse_latin1((StrRange *)&local_a0);
  TTR((String *)&local_88,(String *)&local_a0);
  Node::set_name((String *)this_05);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  plVar15 = *(long **)(this + 0xdd8);
  pcVar2 = *(code **)(*plVar15 + 0x108);
  create_custom_callable_function_pointer<ProjectSettingsEditor,String_const&>
            ((ProjectSettingsEditor *)&local_88,(char *)this,
             (_func_void_String_ptr *)"&ProjectSettingsEditor::_action_added");
  StringName::StringName((StringName *)local_98,"action_added",false);
  (*pcVar2)(plVar15,(String *)local_98,(String *)&local_88,0);
  if ((StringName::configured != '\0') && (local_98[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_88);
  plVar15 = *(long **)(this + 0xdd8);
  pcVar2 = *(code **)(*plVar15 + 0x108);
  pCVar12 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar12);
  *(undefined **)(pCVar12 + 0x20) = &_LC25;
  *(ProjectSettingsEditor **)(pCVar12 + 0x28) = this;
  *(undefined1 (*) [16])(pCVar12 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)pCVar12 = &PTR_hash_00115568;
  *(undefined8 *)(pCVar12 + 0x40) = 0;
  uVar8 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(pCVar12 + 0x10) = 0;
  *(undefined8 *)(pCVar12 + 0x30) = uVar8;
  *(code **)(pCVar12 + 0x38) = _action_edited;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar12,(int)pCVar12 + 0x28);
  *(char **)(pCVar12 + 0x20) = "ProjectSettingsEditor::_action_edited";
  Callable::Callable((Callable *)&local_88,pCVar12);
  StringName::StringName((StringName *)local_98,"action_edited",false);
  (*pcVar2)(plVar15,(String *)local_98,(String *)&local_88,0);
  if ((StringName::configured != '\0') && (local_98[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_88);
  plVar15 = *(long **)(this + 0xdd8);
  pcVar2 = *(code **)(*plVar15 + 0x108);
  create_custom_callable_function_pointer<ProjectSettingsEditor,String_const&>
            ((ProjectSettingsEditor *)&local_88,(char *)this,
             (_func_void_String_ptr *)"&ProjectSettingsEditor::_action_removed");
  StringName::StringName((StringName *)local_98,"action_removed",false);
  (*pcVar2)(plVar15,(String *)local_98,(String *)&local_88,0);
  if ((StringName::configured != '\0') && (local_98[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_88);
  plVar15 = *(long **)(this + 0xdd8);
  pcVar2 = *(code **)(*plVar15 + 0x108);
  pCVar12 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar12);
  *(undefined **)(pCVar12 + 0x20) = &_LC25;
  *(ProjectSettingsEditor **)(pCVar12 + 0x28) = this;
  *(undefined1 (*) [16])(pCVar12 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)pCVar12 = &PTR_hash_001155f8;
  *(undefined8 *)(pCVar12 + 0x40) = 0;
  uVar8 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(pCVar12 + 0x10) = 0;
  *(undefined8 *)(pCVar12 + 0x30) = uVar8;
  *(code **)(pCVar12 + 0x38) = _action_renamed;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar12,(int)pCVar12 + 0x28);
  *(char **)(pCVar12 + 0x20) = "ProjectSettingsEditor::_action_renamed";
  Callable::Callable((Callable *)&local_88,pCVar12);
  StringName::StringName((StringName *)local_98,"action_renamed",false);
  (*pcVar2)(plVar15,(String *)local_98,(String *)&local_88,0);
  if ((StringName::configured != '\0') && (local_98[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_88);
  plVar15 = *(long **)(this + 0xdd8);
  pcVar2 = *(code **)(*plVar15 + 0x108);
  pCVar12 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar12);
  *(undefined **)(pCVar12 + 0x20) = &_LC25;
  *(ProjectSettingsEditor **)(pCVar12 + 0x28) = this;
  *(undefined1 (*) [16])(pCVar12 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)pCVar12 = &PTR_hash_00115688;
  *(undefined8 *)(pCVar12 + 0x40) = 0;
  uVar8 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(pCVar12 + 0x10) = 0;
  *(undefined8 *)(pCVar12 + 0x30) = uVar8;
  *(code **)(pCVar12 + 0x38) = _action_reordered;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar12,(int)pCVar12 + 0x28);
  *(char **)(pCVar12 + 0x20) = "ProjectSettingsEditor::_action_reordered";
  Callable::Callable((Callable *)&local_88,pCVar12);
  StringName::StringName((StringName *)local_98,"action_reordered",false);
  (*pcVar2)(plVar15,(String *)local_98,(String *)&local_88,0);
  if ((StringName::configured != '\0') && (local_98[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_88);
  plVar15 = *(long **)(this + 0xdd8);
  pcVar2 = *(code **)(*plVar15 + 0x108);
  create_custom_callable_function_pointer<AcceptDialog,bool>
            ((AcceptDialog *)&local_88,(char *)this,
             (_func_void_bool *)"&AcceptDialog::set_close_on_escape");
  bVar6 = SUB81((String *)local_98,0);
  Callable::bind<bool>(bVar6);
  if (ProjectSettingsEditor(EditorData*)::{lambda()#1}::operator()()::sname == '\0') {
    iVar7 = __cxa_guard_acquire(&ProjectSettingsEditor(EditorData*)::{lambda()#1}::operator()()::
                                 sname);
    if (iVar7 != 0) {
      _scs_create((char *)&ProjectSettingsEditor(EditorData*)::{lambda()#1}::operator()()::sname,
                  true);
      __cxa_atexit(StringName::~StringName,
                   &ProjectSettingsEditor(EditorData*)::{lambda()#1}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&ProjectSettingsEditor(EditorData*)::{lambda()#1}::operator()()::sname);
    }
  }
  (*pcVar2)(plVar15,&ProjectSettingsEditor(EditorData*)::{lambda()#1}::operator()()::sname,
            (String *)local_98,0);
  Callable::~Callable((Callable *)local_98);
  Callable::~Callable((Callable *)&local_88);
  plVar15 = *(long **)(this + 0xdd8);
  pcVar2 = *(code **)(*plVar15 + 0x108);
  create_custom_callable_function_pointer<AcceptDialog,bool>
            ((AcceptDialog *)&local_88,(char *)this,
             (_func_void_bool *)"&AcceptDialog::set_close_on_escape");
  Callable::bind<bool>(bVar6);
  if (ProjectSettingsEditor(EditorData*)::{lambda()#2}::operator()()::sname == '\0') {
    iVar7 = __cxa_guard_acquire(&ProjectSettingsEditor(EditorData*)::{lambda()#2}::operator()()::
                                 sname);
    if (iVar7 != 0) {
      _scs_create((char *)&ProjectSettingsEditor(EditorData*)::{lambda()#2}::operator()()::sname,
                  true);
      __cxa_atexit(StringName::~StringName,
                   &ProjectSettingsEditor(EditorData*)::{lambda()#2}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&ProjectSettingsEditor(EditorData*)::{lambda()#2}::operator()()::sname);
    }
  }
  (*pcVar2)(plVar15,&ProjectSettingsEditor(EditorData*)::{lambda()#2}::operator()()::sname,
            (String *)local_98,0);
  Callable::~Callable((Callable *)local_98);
  Callable::~Callable((Callable *)&local_88);
  Node::add_child(*(undefined8 *)(this + 0xdc0),*(undefined8 *)(this + 0xdd8),0,0);
  this_06 = (LocalizationEditor *)operator_new(0xa88,"");
  LocalizationEditor::LocalizationEditor(this_06);
  postinitialize_handler((Object *)this_06);
  local_88 = "";
  *(LocalizationEditor **)(this + 0xde0) = this_06;
  local_98[0] = 0;
  local_80 = 0;
  String::parse_latin1((StrRange *)local_98);
  local_88 = (char *)0x0;
  String::parse_latin1((String *)&local_88,"Localization");
  TTR((String *)&local_a0,(String *)&local_88);
  Node::set_name((String *)this_06);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  plVar15 = *(long **)(this + 0xde0);
  pcVar2 = *(code **)(*plVar15 + 0x108);
  create_custom_callable_function_pointer<ProjectSettingsEditor>
            ((ProjectSettingsEditor *)&local_88,(char *)this,
             (_func_void *)"&ProjectSettingsEditor::queue_save");
  StringName::StringName((StringName *)local_98,"localization_changed",false);
  (*pcVar2)(plVar15,(String *)local_98,(String *)&local_88,0);
  if ((StringName::configured != '\0') && (local_98[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_88);
  Node::add_child(*(undefined8 *)(this + 0xdc0),*(undefined8 *)(this + 0xde0),0,0);
  pTVar9 = (TabContainer *)operator_new(0xb40,"");
  TabContainer::TabContainer(pTVar9);
  postinitialize_handler((Object *)pTVar9);
  local_88 = "";
  local_98[0] = 0;
  local_80 = 0;
  String::parse_latin1((StrRange *)local_98);
  local_88 = "Globals";
  local_a0 = 0;
  local_80 = 7;
  String::parse_latin1((StrRange *)&local_a0);
  TTR((String *)&local_88,(String *)&local_a0);
  Node::set_name((String *)pTVar9);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  Node::add_child(*(undefined8 *)(this + 0xdc0),pTVar9,0,0);
  this_07 = (EditorAutoloadSettings *)operator_new(0xa70,"");
  EditorAutoloadSettings::EditorAutoloadSettings(this_07);
  postinitialize_handler((Object *)this_07);
  local_88 = "";
  *(EditorAutoloadSettings **)(this + 0xde8) = this_07;
  local_98[0] = 0;
  local_80 = 0;
  String::parse_latin1((StrRange *)local_98);
  local_88 = "Autoload";
  local_a0 = 0;
  local_80 = 8;
  String::parse_latin1((StrRange *)&local_a0);
  TTR((String *)&local_88,(String *)&local_a0);
  Node::set_name((String *)this_07);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  plVar15 = *(long **)(this + 0xde8);
  pcVar2 = *(code **)(*plVar15 + 0x108);
  create_custom_callable_function_pointer<ProjectSettingsEditor>
            ((ProjectSettingsEditor *)&local_88,(char *)this,
             (_func_void *)"&ProjectSettingsEditor::queue_save");
  StringName::StringName((StringName *)local_98,"autoload_changed",false);
  (*pcVar2)(plVar15,(String *)local_98,(String *)&local_88,0);
  if ((StringName::configured != '\0') && (local_98[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_88);
  Node::add_child(pTVar9,*(undefined8 *)(this + 0xde8),0,0);
  this_08 = (ShaderGlobalsEditor *)operator_new(0xa38,"");
  ShaderGlobalsEditor::ShaderGlobalsEditor(this_08);
  postinitialize_handler((Object *)this_08);
  *(ShaderGlobalsEditor **)(this + 0xdf0) = this_08;
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"");
  local_88 = "Shader Globals";
  local_a0 = 0;
  local_80 = 0xe;
  String::parse_latin1((StrRange *)&local_a0);
  TTR((String *)&local_88,(String *)&local_a0);
  Node::set_name((String *)this_08);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  plVar15 = *(long **)(this + 0xdf0);
  pcVar2 = *(code **)(*plVar15 + 0x108);
  create_custom_callable_function_pointer<ProjectSettingsEditor>
            ((ProjectSettingsEditor *)&local_88,(char *)this,
             (_func_void *)"&ProjectSettingsEditor::queue_save");
  StringName::StringName((StringName *)local_98,"globals_changed",false);
  (*pcVar2)(plVar15,(String *)local_98,(String *)&local_88,0);
  if ((StringName::configured != '\0') && (local_98[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_88);
  Node::add_child(pTVar9,*(undefined8 *)(this + 0xdf0),0,0);
  this_09 = (GroupSettingsEditor *)operator_new(0xab8,"");
  GroupSettingsEditor::GroupSettingsEditor(this_09);
  postinitialize_handler((Object *)this_09);
  *(GroupSettingsEditor **)(this + 0xdf8) = this_09;
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"");
  local_88 = "Groups";
  local_a0 = 0;
  local_80 = 6;
  String::parse_latin1((StrRange *)&local_a0);
  TTR((String *)&local_88,(String *)&local_a0);
  Node::set_name((String *)this_09);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  plVar15 = *(long **)(this + 0xdf8);
  pcVar2 = *(code **)(*plVar15 + 0x108);
  create_custom_callable_function_pointer<ProjectSettingsEditor>
            ((ProjectSettingsEditor *)&local_88,(char *)this,
             (_func_void *)"&ProjectSettingsEditor::queue_save");
  StringName::StringName((StringName *)local_98,"group_changed",false);
  (*pcVar2)(plVar15,(String *)local_98,(String *)&local_88);
  if ((StringName::configured != '\0') && (local_98[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_88);
  Node::add_child(pTVar9,*(undefined8 *)(this + 0xdf8),0);
  this_10 = (EditorPluginSettings *)operator_new(0xa30,"");
  EditorPluginSettings::EditorPluginSettings(this_10);
  postinitialize_handler((Object *)this_10);
  local_88 = "";
  *(EditorPluginSettings **)(this + 0xe00) = this_10;
  local_98[0] = 0;
  local_80 = 0;
  String::parse_latin1((StrRange *)local_98);
  local_88 = (char *)0x0;
  String::parse_latin1((String *)&local_88,"Plugins");
  TTR((String *)&local_a0,(String *)&local_88);
  Node::set_name((String *)this_10);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  Node::add_child(*(undefined8 *)(this + 0xdc0),*(undefined8 *)(this + 0xe00),0);
  this_11 = (Timer *)operator_new(0x428,"");
  Timer::Timer(this_11);
  postinitialize_handler((Object *)this_11);
  *(Timer **)(this + 0xdb8) = this_11;
  Timer::set_wait_time(_LC100);
  plVar15 = *(long **)(this + 0xdb8);
  lVar5 = *(long *)(this + 0xdb0);
  pcVar2 = *(code **)(*plVar15 + 0x108);
  pCVar12 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar12);
  *(undefined **)(pCVar12 + 0x20) = &_LC25;
  *(undefined1 (*) [16])(pCVar12 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)pCVar12 = &PTR_hash_001157a8;
  *(undefined8 *)(pCVar12 + 0x40) = 0;
  uVar8 = *(undefined8 *)(lVar5 + 0x60);
  *(long *)(pCVar12 + 0x28) = lVar5;
  *(undefined8 *)(pCVar12 + 0x30) = uVar8;
  *(undefined8 *)(pCVar12 + 0x10) = 0;
  *(code **)(pCVar12 + 0x38) = ProjectSettings::save;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar12,(int)pCVar12 + 0x28);
  *(char **)(pCVar12 + 0x20) = "ProjectSettings::save";
  Callable::Callable((Callable *)&local_88,pCVar12);
  StringName::StringName((StringName *)local_98,"timeout",false);
  (*pcVar2)(plVar15,(String *)local_98,(String *)&local_88);
  if ((StringName::configured != '\0') && (local_98[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_88);
  Timer::set_one_shot(SUB81(*(undefined8 *)(this + 0xdb8),0));
  Node::add_child(this,*(undefined8 *)(this + 0xdb8),0);
  local_88 = (char *)0x0;
  String::parse_latin1((String *)&local_88,"");
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"Close");
  TTR((String *)&local_a0,(String *)local_98);
  AcceptDialog::set_ok_button_text(this,(String *)&local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  AcceptDialog::set_hide_on_ok(SUB81(this,0));
  Variant::Variant((Variant *)local_58,false);
  local_88 = "_project_settings_advanced_mode";
  local_98[0] = 0;
  local_80 = 0x1f;
  String::parse_latin1((StrRange *)local_98);
  _EDITOR_DEF((String *)local_78,(Variant *)local_98,SUB81((Variant *)local_58,0),false);
  bVar6 = Variant::operator_cast_to_bool((Variant *)local_78);
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (bVar6) {
    BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xe10),0));
  }
  CanvasItem::set_visible(SUB81(*(undefined8 *)(this + 0xe18),0));
  this_12 = (ImportDefaultsEditor *)operator_new(0xa38,"");
  ImportDefaultsEditor::ImportDefaultsEditor(this_12);
  postinitialize_handler((Object *)this_12);
  *(ImportDefaultsEditor **)(this + 0xe68) = this_12;
  local_88 = (char *)0x0;
  String::parse_latin1((String *)&local_88,"");
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"Import Defaults");
  TTR((String *)&local_a0,(String *)local_98);
  Node::set_name((String *)this_12);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  Node::add_child(*(undefined8 *)(this + 0xdc0),*(undefined8 *)(this + 0xe68),0,0);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    MovieWriter::set_extensions_hint();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProjectSettingsEditor::shortcut_input(Ref<InputEvent> const&) */

void __thiscall ProjectSettingsEditor::shortcut_input(ProjectSettingsEditor *this,Ref *param_1)

{
  char cVar1;
  char cVar2;
  Object *pOVar3;
  String *pSVar4;
  long in_FS_OFFSET;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((*(long *)param_1 != 0) &&
      (pOVar3 = (Object *)
                __dynamic_cast(*(long *)param_1,&Object::typeinfo,&InputEventKey::typeinfo,0),
      pOVar3 != (Object *)0x0)) && (cVar1 = RefCounted::reference(), cVar1 != '\0')) {
    cVar1 = InputEvent::is_pressed();
    if (cVar1 == '\0') {
LAB_00104fdc:
      cVar1 = RefCounted::unreference();
    }
    else {
      pSVar4 = (String *)EditorSettings::get_singleton();
      local_60 = 0;
      local_58 = "ui_undo";
      local_50 = 7;
      String::parse_latin1((StrRange *)&local_60);
      cVar1 = EditorSettings::is_shortcut(pSVar4,(Ref *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar1 != '\0') {
        EditorNode::undo();
      }
      pSVar4 = (String *)EditorSettings::get_singleton();
      local_58 = "ui_redo";
      local_60 = 0;
      local_50 = 7;
      String::parse_latin1((StrRange *)&local_60);
      cVar2 = EditorSettings::is_shortcut(pSVar4,(Ref *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar2 != '\0') {
        EditorNode::redo();
        cVar1 = cVar2;
      }
      pSVar4 = (String *)EditorSettings::get_singleton();
      local_58 = "editor/open_search";
      local_60 = 0;
      local_50 = 0x12;
      String::parse_latin1((StrRange *)&local_60);
      cVar2 = EditorSettings::is_shortcut(pSVar4,(Ref *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar2 == '\0') {
        pSVar4 = (String *)EditorSettings::get_singleton();
        local_58 = "file_dialog/focus_path";
        local_60 = 0;
        local_50 = 0x16;
        String::parse_latin1((StrRange *)&local_60);
        cVar2 = EditorSettings::is_shortcut(pSVar4,(Ref *)&local_60);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        if (cVar2 == '\0') {
          if (cVar1 != '\0') goto LAB_001051a8;
          goto LAB_00104fdc;
        }
LAB_0010521e:
        _focus_current_path_box(this);
      }
      else {
        _focus_current_search_box(this);
        pSVar4 = (String *)EditorSettings::get_singleton();
        local_60 = 0;
        local_50 = 0x16;
        local_58 = "file_dialog/focus_path";
        String::parse_latin1((StrRange *)&local_60);
        cVar1 = EditorSettings::is_shortcut(pSVar4,(Ref *)&local_60);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        if (cVar1 != '\0') goto LAB_0010521e;
      }
LAB_001051a8:
      Viewport::set_input_as_handled();
      cVar1 = RefCounted::unreference();
    }
    if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar3), cVar1 != '\0')) {
      (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        Memory::free_static(pOVar3,false);
        return;
      }
      goto LAB_00105261;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00105261:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProjectSettingsEditor::_get_setting_name() const */

ProjectSettingsEditor * __thiscall
ProjectSettingsEditor::_get_setting_name(ProjectSettingsEditor *this)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  long in_FS_OFFSET;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  LineEdit::get_text();
  String::strip_edges(SUB81(this,0),SUB81(&local_28,0));
  lVar2 = local_28;
  if (local_28 != 0) {
    LOCK();
    plVar1 = (long *)(local_28 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_28 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  cVar3 = String::begins_with((char *)this);
  if (cVar3 == '\0') {
    iVar4 = String::find_char((wchar32)this,0x2f);
    if (iVar4 == -1) {
      operator+((char *)&local_28,(String *)"global/");
      if (*(long *)this != local_28) {
        CowData<char32_t>::_unref((CowData<char32_t> *)this);
        lVar2 = local_28;
        local_28 = 0;
        *(long *)this = lVar2;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_28);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProjectSettingsEditor::_add_setting() */

void __thiscall ProjectSettingsEditor::_add_setting(ProjectSettingsEditor *this)

{
  String *pSVar1;
  bool *pbVar2;
  char cVar3;
  undefined4 uVar4;
  Object *pOVar5;
  long in_FS_OFFSET;
  ProjectSettingsEditor local_b0 [8];
  undefined8 local_a8;
  long local_a0;
  undefined4 local_98;
  undefined8 local_94;
  char *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_70 [16];
  int local_58 [2];
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _get_setting_name(local_b0);
  local_98 = 0;
  local_70 = (undefined1  [16])0x0;
  local_94 = 0;
  local_78 = 0;
  uVar4 = OptionButton::get_selected_id();
  Variant::construct(uVar4,&local_78,0,0,&local_98);
  pOVar5 = (Object *)EditorUndoRedoManager::get_singleton();
  local_a0 = 0;
  local_80 = 0;
  local_88 = "";
  String::parse_latin1((StrRange *)&local_a0);
  local_88 = "Add Project Setting";
  local_a8 = 0;
  local_80 = 0x13;
  String::parse_latin1((StrRange *)&local_a8);
  TTR((String *)&local_88,(String *)&local_a8);
  EditorUndoRedoManager::create_action(pOVar5,(String *)&local_88,0,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  StringName::StringName((StringName *)&local_88,(String *)local_b0,false);
  EditorUndoRedoManager::add_do_property(pOVar5,*(StringName **)(this + 0xdb0),(Variant *)&local_88)
  ;
  if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
    StringName::unref();
  }
  cVar3 = ProjectSettings::has_setting(*(String **)(this + 0xdb0));
  if (cVar3 == '\0') {
    local_58[0] = 0;
    local_58[1] = 0;
    local_50 = (undefined1  [16])0x0;
  }
  else {
    pbVar2 = *(bool **)(this + 0xdb0);
    StringName::StringName((StringName *)&local_a0,(String *)local_b0,false);
    Object::get((StringName *)local_58,pbVar2);
  }
  StringName::StringName((StringName *)&local_88,(String *)local_b0,false);
  EditorUndoRedoManager::add_undo_property
            (pOVar5,*(StringName **)(this + 0xdb0),(Variant *)&local_88);
  if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (((cVar3 != '\0') && (StringName::configured != '\0')) && (local_a0 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_88,"update_category_list",false);
  local_58[0] = 0;
  local_58[1] = 0;
  local_50 = (undefined1  [16])0x0;
  EditorUndoRedoManager::add_do_methodp
            (pOVar5,*(StringName **)(this + 0xdd0),(Variant **)&local_88,0);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_88,"update_category_list",false);
  local_58[0] = 0;
  local_58[1] = 0;
  local_50 = (undefined1  [16])0x0;
  EditorUndoRedoManager::add_undo_methodp
            (pOVar5,*(StringName **)(this + 0xdd0),(Variant **)&local_88,0);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_88,"queue_save",false);
  local_58[0] = 0;
  local_58[1] = 0;
  local_50 = (undefined1  [16])0x0;
  EditorUndoRedoManager::add_do_methodp(pOVar5,(StringName *)this,(Variant **)&local_88,0);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_88,"queue_save",false);
  local_58[0] = 0;
  local_58[1] = 0;
  local_50 = (undefined1  [16])0x0;
  EditorUndoRedoManager::add_undo_methodp(pOVar5,(StringName *)this,(Variant **)&local_88,0);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
    StringName::unref();
  }
  EditorUndoRedoManager::commit_action(SUB81(pOVar5,0));
  pSVar1 = *(String **)(this + 0xdd0);
  String::get_slice((char *)&local_88,(int)local_b0);
  SectionedInspector::set_current_section(pSVar1);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  Control::release_focus();
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b0);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProjectSettingsEditor::_delete_setting() */

void __thiscall ProjectSettingsEditor::_delete_setting(ProjectSettingsEditor *this)

{
  Variant *pVVar1;
  bool *pbVar2;
  StringName *pSVar3;
  int iVar4;
  Object *pOVar5;
  Variant *pVVar6;
  long in_FS_OFFSET;
  long local_170;
  undefined8 local_168;
  long local_160;
  char *local_158;
  undefined8 local_150;
  int local_148 [8];
  Variant *local_128 [4];
  Variant *local_108;
  Variant *pVStack_100;
  undefined8 local_f0;
  undefined1 local_e8 [16];
  Variant *local_d8;
  Variant *pVStack_d0;
  Variant local_c0 [24];
  undefined8 local_a8;
  undefined1 local_a0 [16];
  Variant local_90 [8];
  int local_88 [2];
  undefined1 local_80 [16];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  _get_setting_name((ProjectSettingsEditor *)&local_170);
  pbVar2 = *(bool **)(this + 0xdb0);
  StringName::StringName((StringName *)&local_158,(String *)&local_170,false);
  Object::get((StringName *)local_148,pbVar2);
  if ((StringName::configured != '\0') && (local_158 != (char *)0x0)) {
    StringName::unref();
  }
  iVar4 = ProjectSettings::get_order(*(String **)(this + 0xdb0));
  pOVar5 = (Object *)EditorUndoRedoManager::get_singleton();
  local_160 = 0;
  local_150 = 0;
  local_158 = "";
  String::parse_latin1((StrRange *)&local_160);
  local_158 = "Delete Item";
  local_168 = 0;
  local_150 = 0xb;
  String::parse_latin1((StrRange *)&local_168);
  TTR((String *)&local_158,(String *)&local_168);
  EditorUndoRedoManager::create_action(pOVar5,(StringName *)&local_158,0,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_160);
  local_158 = (char *)0x0;
  if (local_170 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_158,(CowData *)&local_170);
  }
  StringName::StringName((StringName *)&local_160,"clear",false);
  pSVar3 = *(StringName **)(this + 0xdb0);
  Variant::Variant((Variant *)&local_108,(String *)&local_158);
  local_f0 = 0;
  local_e8 = (undefined1  [16])0x0;
  local_128[0] = (Variant *)&local_108;
  EditorUndoRedoManager::add_do_methodp
            (pOVar5,pSVar3,(Variant **)&local_160,(int)(Variant *)local_128);
  if (Variant::needs_deinit[(int)local_f0] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[(int)local_108] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_160 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
  Variant::Variant((Variant *)local_128,(Variant *)local_148);
  local_158 = (char *)0x0;
  if (local_170 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_158,(CowData *)&local_170);
  }
  StringName::StringName((StringName *)&local_160,"set",false);
  pSVar3 = *(StringName **)(this + 0xdb0);
  Variant::Variant((Variant *)&local_d8,(String *)&local_158);
  Variant::Variant(local_c0,(Variant *)local_128);
  local_a0 = (undefined1  [16])0x0;
  pVVar6 = local_90;
  local_a8 = 0;
  local_108 = (Variant *)&local_d8;
  pVStack_100 = local_c0;
  EditorUndoRedoManager::add_undo_methodp
            (pOVar5,pSVar3,(Variant **)&local_160,(int)(Variant *)&local_108);
  do {
    pVVar1 = pVVar6 + -0x18;
    pVVar6 = pVVar6 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar6 != (Variant *)&local_d8);
  if ((StringName::configured != '\0') && (local_160 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
  if (Variant::needs_deinit[(int)local_128[0]] != '\0') {
    Variant::_clear_internal();
  }
  local_158 = (char *)0x0;
  if (local_170 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_158,(CowData *)&local_170);
  }
  StringName::StringName((StringName *)&local_160,"set_order",false);
  pSVar3 = *(StringName **)(this + 0xdb0);
  Variant::Variant((Variant *)local_88,(String *)&local_158);
  Variant::Variant(local_70,iVar4);
  local_50 = (undefined1  [16])0x0;
  pVVar6 = (Variant *)local_40;
  local_58 = 0;
  local_d8 = (Variant *)local_88;
  pVStack_d0 = local_70;
  EditorUndoRedoManager::add_undo_methodp
            (pOVar5,pSVar3,(Variant **)&local_160,(int)(Variant *)&local_d8);
  do {
    pVVar1 = pVVar6 + -0x18;
    pVVar6 = pVVar6 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar6 != (Variant *)local_88);
  if ((StringName::configured != '\0') && (local_160 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
  StringName::StringName((StringName *)&local_158,"update_category_list",false);
  local_88[0] = 0;
  local_88[1] = 0;
  local_80 = (undefined1  [16])0x0;
  EditorUndoRedoManager::add_do_methodp
            (pOVar5,*(StringName **)(this + 0xdd0),(Variant **)&local_158,0);
  if (Variant::needs_deinit[local_88[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_158 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_158,"update_category_list",false);
  local_88[0] = 0;
  local_88[1] = 0;
  local_80 = (undefined1  [16])0x0;
  EditorUndoRedoManager::add_undo_methodp
            (pOVar5,*(StringName **)(this + 0xdd0),(Variant **)&local_158,0);
  if (Variant::needs_deinit[local_88[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_158 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_158,"queue_save",false);
  local_88[0] = 0;
  local_88[1] = 0;
  local_80 = (undefined1  [16])0x0;
  EditorUndoRedoManager::add_do_methodp(pOVar5,(StringName *)this,(Variant **)&local_158,0);
  if (Variant::needs_deinit[local_88[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_158 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_158,"queue_save",false);
  local_88[0] = 0;
  local_88[1] = 0;
  local_80 = (undefined1  [16])0x0;
  EditorUndoRedoManager::add_undo_methodp(pOVar5,(StringName *)this,(Variant **)&local_158,0);
  if (Variant::needs_deinit[local_88[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_158 != (char *)0x0)) {
    StringName::unref();
  }
  EditorUndoRedoManager::commit_action(SUB81(pOVar5,0));
  LineEdit::clear();
  Control::release_focus();
  if (Variant::needs_deinit[local_148[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_170);
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProjectSettingsEditor::_action_reordered(String const&, String const&, bool) */

void __thiscall
ProjectSettingsEditor::_action_reordered
          (ProjectSettingsEditor *this,String *param_1,String *param_2,bool param_3)

{
  String *pSVar1;
  Variant *pVVar2;
  int *piVar3;
  bool *pbVar4;
  void *pvVar5;
  undefined8 uVar6;
  char cVar7;
  List *pLVar8;
  Object *pOVar9;
  String *pSVar10;
  StringName *pSVar11;
  int *piVar12;
  undefined8 *puVar13;
  Variant *pVVar14;
  long in_FS_OFFSET;
  undefined8 *local_588;
  long local_450;
  long local_448;
  undefined8 *local_440;
  long local_438;
  long local_430;
  char *local_428;
  undefined8 local_420;
  long local_418;
  undefined1 local_410 [16];
  undefined1 local_400 [16];
  undefined8 local_3f0;
  int local_3e8 [8];
  int local_3c8 [8];
  StringName *local_3a8 [4];
  Variant *local_388;
  undefined1 auStack_380 [16];
  undefined8 local_370;
  undefined1 local_368 [16];
  Variant *local_358;
  Variant *pVStack_350;
  Variant local_340 [24];
  undefined8 local_328;
  undefined1 local_320 [16];
  Variant local_310 [8];
  Variant *local_308;
  Variant *pVStack_300;
  Variant local_2f0 [24];
  undefined8 local_2d8;
  undefined1 local_2d0 [16];
  Variant local_2c0 [8];
  Variant *local_2b8;
  Variant *pVStack_2b0;
  Variant local_2a0 [24];
  undefined8 local_288;
  undefined1 local_280 [16];
  Variant local_270 [8];
  Variant local_268 [24];
  Variant local_250 [24];
  undefined8 local_238;
  undefined1 local_230 [16];
  Variant local_220 [8];
  Variant *local_218;
  Variant *pVStack_210;
  Variant local_200 [24];
  undefined8 local_1e8;
  undefined1 local_1e0 [16];
  Variant local_1d0 [8];
  Variant *local_1c8;
  Variant *pVStack_1c0;
  Variant local_1b0 [24];
  undefined8 local_198;
  undefined1 local_190 [16];
  Variant local_180 [8];
  Variant *local_178;
  Variant *pVStack_170;
  Variant local_160 [24];
  undefined8 local_148;
  undefined1 local_140 [16];
  Variant local_130 [8];
  Variant local_128 [24];
  Variant local_110 [24];
  undefined8 local_f8;
  undefined1 local_f0 [16];
  Variant local_e0 [8];
  Variant *local_d8;
  Variant *pVStack_d0;
  Variant local_c0 [24];
  undefined8 local_a8;
  undefined1 local_a0 [16];
  Variant local_90 [8];
  Variant local_88 [24];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  operator+((char *)&local_450,(String *)"input/");
  operator+((char *)&local_448,(String *)"input/");
  pbVar4 = *(bool **)(this + 0xdb0);
  StringName::StringName((StringName *)&local_418,(String *)&local_450,false);
  Object::get((StringName *)local_3e8,pbVar4);
  if ((StringName::configured != '\0') && (local_418 != 0)) {
    StringName::unref();
  }
  pbVar4 = *(bool **)(this + 0xdb0);
  StringName::StringName((StringName *)&local_418,(String *)&local_448,false);
  Object::get((StringName *)local_3c8,pbVar4);
  if ((StringName::configured != '\0') && (local_418 != 0)) {
    StringName::unref();
  }
  local_440 = (undefined8 *)0x0;
  local_410 = (undefined1  [16])0x0;
  local_400 = (undefined1  [16])0x0;
  local_3f0 = 2;
  pLVar8 = (List *)ProjectSettings::get_singleton();
  Object::get_property_list(pLVar8,SUB81((List<PropertyInfo,DefaultAllocator> *)&local_440,0));
  pOVar9 = (Object *)EditorUndoRedoManager::get_singleton();
  local_430 = 0;
  local_428 = "";
  local_420 = 0;
  String::parse_latin1((StrRange *)&local_430);
  local_428 = "Update Input Action Order";
  local_438 = 0;
  local_420 = 0x19;
  String::parse_latin1((StrRange *)&local_438);
  TTR((String *)&local_428,(String *)&local_438);
  EditorUndoRedoManager::create_action(pOVar9,(String *)&local_428,0,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_428);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_438);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_430);
  local_588 = local_440;
  if ((local_440 != (undefined8 *)0x0) &&
     (local_588 = (undefined8 *)*local_440, local_588 != (undefined8 *)0x0)) {
    do {
      pSVar1 = (String *)(local_588 + 1);
      cVar7 = String::begins_with((char *)pSVar1);
      if (cVar7 != '\0') {
        pSVar10 = (String *)ProjectSettings::get_singleton();
        cVar7 = ProjectSettings::is_builtin_setting(pSVar10);
        if (cVar7 == '\0') {
          pbVar4 = *(bool **)(this + 0xdb0);
          StringName::StringName((StringName *)&local_430,pSVar1,false);
          Object::get((StringName *)&local_388,pbVar4);
          HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
          ::insert((String *)&local_428,(Variant *)&local_418,SUB81(pSVar1,0));
          if (Variant::needs_deinit[(int)local_388] != '\0') {
            Variant::_clear_internal();
          }
          if ((StringName::configured != '\0') && (local_430 != 0)) {
            StringName::unref();
          }
          local_428 = (char *)0x0;
          if (local_588[1] != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_428,(CowData *)pSVar1);
          }
          StringName::StringName((StringName *)&local_430,"clear",false);
          pSVar11 = (StringName *)ProjectSettings::get_singleton();
          Variant::Variant((Variant *)&local_388,(String *)&local_428);
          local_370 = 0;
          local_368 = (undefined1  [16])0x0;
          local_3a8[0] = (StringName *)&local_388;
          EditorUndoRedoManager::add_do_methodp
                    (pOVar9,pSVar11,(Variant **)&local_430,(int)local_3a8);
          if (Variant::needs_deinit[(int)local_370] != '\0') {
            Variant::_clear_internal();
          }
          if (Variant::needs_deinit[(int)local_388] != '\0') {
            Variant::_clear_internal();
          }
          if ((StringName::configured != '\0') && (local_430 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_428);
          local_428 = (char *)0x0;
          if (local_588[1] != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_428,(CowData *)pSVar1);
          }
          StringName::StringName((StringName *)&local_430,"clear",false);
          pSVar11 = (StringName *)ProjectSettings::get_singleton();
          Variant::Variant((Variant *)&local_388,(String *)&local_428);
          local_370 = 0;
          local_368 = (undefined1  [16])0x0;
          local_3a8[0] = (StringName *)&local_388;
          EditorUndoRedoManager::add_undo_methodp
                    (pOVar9,pSVar11,(Variant **)&local_430,(int)local_3a8);
          if (Variant::needs_deinit[(int)local_370] != '\0') {
            Variant::_clear_internal();
          }
          if (Variant::needs_deinit[(int)local_388] != '\0') {
            Variant::_clear_internal();
          }
          if ((StringName::configured != '\0') && (local_430 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_428);
        }
      }
      local_588 = (undefined8 *)local_588[6];
    } while (local_588 != (undefined8 *)0x0);
    local_588 = (undefined8 *)local_410._0_8_;
    for (puVar13 = (undefined8 *)local_400._0_8_; puVar13 != (undefined8 *)0x0;
        puVar13 = (undefined8 *)*puVar13) {
      local_438 = 0;
      if (puVar13[2] != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_438,(CowData *)(puVar13 + 2));
      }
      cVar7 = String::operator==((String *)&local_438,(String *)&local_448);
      if (cVar7 == '\0') {
        cVar7 = String::operator!=((String *)&local_438,(String *)&local_450);
        if (cVar7 != '\0') {
          Variant::Variant((Variant *)local_3a8,(Variant *)(puVar13 + 3));
          local_428 = (char *)0x0;
          if (local_438 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_428,(CowData *)&local_438);
          }
          StringName::StringName((StringName *)&local_430,"set",false);
          pSVar11 = (StringName *)ProjectSettings::get_singleton();
          Variant::Variant((Variant *)&local_d8,(String *)&local_428);
          Variant::Variant(local_c0,(Variant *)local_3a8);
          local_a0 = (undefined1  [16])0x0;
          pVVar14 = local_90;
          local_a8 = 0;
          auStack_380._0_8_ = local_c0;
          local_388 = (Variant *)&local_d8;
          EditorUndoRedoManager::add_do_methodp
                    (pOVar9,pSVar11,(Variant **)&local_430,(int)(Variant *)&local_388);
          do {
            pVVar2 = pVVar14 + -0x18;
            pVVar14 = pVVar14 + -0x18;
            if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
              Variant::_clear_internal();
            }
          } while (pVVar14 != (Variant *)&local_d8);
          if ((StringName::configured != '\0') && (local_430 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_428);
          if (Variant::needs_deinit[(int)local_3a8[0]] != '\0') {
            Variant::_clear_internal();
          }
          Variant::Variant((Variant *)&local_388,(Variant *)(puVar13 + 3));
          local_428 = (char *)0x0;
          if (local_438 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_428,(CowData *)&local_438);
          }
          StringName::StringName((StringName *)&local_430,"set",false);
          pSVar11 = (StringName *)ProjectSettings::get_singleton();
          Variant::Variant(local_88,(String *)&local_428);
          Variant::Variant(local_70,(Variant *)&local_388);
          local_58 = 0;
          local_50 = (undefined1  [16])0x0;
          pVVar14 = (Variant *)local_40;
          local_d8 = local_88;
          pVStack_d0 = local_70;
          EditorUndoRedoManager::add_undo_methodp
                    (pOVar9,pSVar11,(Variant **)&local_430,(int)(Variant *)&local_d8);
          do {
            pVVar2 = pVVar14 + -0x18;
            pVVar14 = pVVar14 + -0x18;
            if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
              Variant::_clear_internal();
            }
          } while (pVVar14 != local_88);
          if ((StringName::configured != '\0') && (local_430 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_428);
          if (Variant::needs_deinit[(int)local_388] != '\0') {
            Variant::_clear_internal();
          }
        }
      }
      else if (param_3) {
        Variant::Variant((Variant *)local_3a8,(Variant *)local_3e8);
        local_428 = (char *)0x0;
        if (local_450 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_428,(CowData *)&local_450);
        }
        StringName::StringName((StringName *)&local_430,"set",false);
        pSVar11 = (StringName *)ProjectSettings::get_singleton();
        Variant::Variant((Variant *)&local_358,(String *)&local_428);
        Variant::Variant(local_340,(Variant *)local_3a8);
        local_320 = (undefined1  [16])0x0;
        pVVar14 = local_310;
        local_328 = 0;
        auStack_380._0_8_ = local_340;
        local_388 = (Variant *)&local_358;
        EditorUndoRedoManager::add_do_methodp
                  (pOVar9,pSVar11,(Variant **)&local_430,(int)(Variant *)&local_388);
        do {
          pVVar2 = pVVar14 + -0x18;
          pVVar14 = pVVar14 + -0x18;
          if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
            Variant::_clear_internal();
          }
        } while (pVVar14 != (Variant *)&local_358);
        if ((StringName::configured != '\0') && (local_430 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_428);
        if (Variant::needs_deinit[(int)local_3a8[0]] != '\0') {
          Variant::_clear_internal();
        }
        Variant::Variant((Variant *)&local_388,(Variant *)local_3c8);
        local_428 = (char *)0x0;
        if (local_448 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_428,(CowData *)&local_448);
        }
        StringName::StringName((StringName *)&local_430,"set",false);
        pSVar11 = (StringName *)ProjectSettings::get_singleton();
        Variant::Variant((Variant *)&local_308,(String *)&local_428);
        Variant::Variant(local_2f0,(Variant *)&local_388);
        local_2d8 = 0;
        local_2d0 = (undefined1  [16])0x0;
        pVVar14 = local_2c0;
        local_358 = (Variant *)&local_308;
        pVStack_350 = local_2f0;
        EditorUndoRedoManager::add_do_methodp
                  (pOVar9,pSVar11,(Variant **)&local_430,(int)(Variant *)&local_358);
        do {
          pVVar2 = pVVar14 + -0x18;
          pVVar14 = pVVar14 + -0x18;
          if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
            Variant::_clear_internal();
          }
        } while (pVVar14 != (Variant *)&local_308);
        if ((StringName::configured != '\0') && (local_430 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_428);
        if (Variant::needs_deinit[(int)local_388] != '\0') {
          Variant::_clear_internal();
        }
        Variant::Variant((Variant *)&local_358,(Variant *)local_3c8);
        local_428 = (char *)0x0;
        if (local_448 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_428,(CowData *)&local_448);
        }
        StringName::StringName((StringName *)&local_430,"set",false);
        pSVar11 = (StringName *)ProjectSettings::get_singleton();
        Variant::Variant((Variant *)&local_2b8,(String *)&local_428);
        Variant::Variant(local_2a0,(Variant *)&local_358);
        local_280 = (undefined1  [16])0x0;
        pVVar14 = local_270;
        local_288 = 0;
        local_308 = (Variant *)&local_2b8;
        pVStack_300 = local_2a0;
        EditorUndoRedoManager::add_undo_methodp
                  (pOVar9,pSVar11,(Variant **)&local_430,(int)(Variant *)&local_308);
        do {
          pVVar2 = pVVar14 + -0x18;
          pVVar14 = pVVar14 + -0x18;
          if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
            Variant::_clear_internal();
          }
        } while (pVVar14 != (Variant *)&local_2b8);
        if ((StringName::configured != '\0') && (local_430 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_428);
        if (Variant::needs_deinit[(int)local_358] != '\0') {
          Variant::_clear_internal();
        }
        Variant::Variant((Variant *)&local_308,(Variant *)local_3e8);
        local_428 = (char *)0x0;
        if (local_450 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_428,(CowData *)&local_450);
        }
        StringName::StringName((StringName *)&local_430,"set",false);
        pSVar11 = (StringName *)ProjectSettings::get_singleton();
        Variant::Variant(local_268,(String *)&local_428);
        Variant::Variant(local_250,(Variant *)&local_308);
        local_230 = (undefined1  [16])0x0;
        pVVar14 = local_220;
        local_238 = 0;
        local_2b8 = local_268;
        pVStack_2b0 = local_250;
        EditorUndoRedoManager::add_undo_methodp
                  (pOVar9,pSVar11,(Variant **)&local_430,(int)(Variant *)&local_2b8);
        do {
          pVVar2 = pVVar14 + -0x18;
          pVVar14 = pVVar14 + -0x18;
          if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
            Variant::_clear_internal();
          }
        } while (pVVar14 != local_268);
        if ((StringName::configured != '\0') && (local_430 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_428);
        if (Variant::needs_deinit[(int)local_308] != '\0') {
          Variant::_clear_internal();
        }
      }
      else {
        Variant::Variant((Variant *)local_3a8,(Variant *)local_3c8);
        local_428 = (char *)0x0;
        if (local_448 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_428,(CowData *)&local_448);
        }
        StringName::StringName((StringName *)&local_430,"set",false);
        pSVar11 = (StringName *)ProjectSettings::get_singleton();
        Variant::Variant((Variant *)&local_218,(String *)&local_428);
        Variant::Variant(local_200,(Variant *)local_3a8);
        local_1e0 = (undefined1  [16])0x0;
        pVVar14 = local_1d0;
        local_1e8 = 0;
        auStack_380._0_8_ = local_200;
        local_388 = (Variant *)&local_218;
        EditorUndoRedoManager::add_do_methodp
                  (pOVar9,pSVar11,(Variant **)&local_430,(int)(Variant *)&local_388);
        do {
          pVVar2 = pVVar14 + -0x18;
          pVVar14 = pVVar14 + -0x18;
          if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
            Variant::_clear_internal();
          }
        } while (pVVar14 != (Variant *)&local_218);
        if ((StringName::configured != '\0') && (local_430 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_428);
        if (Variant::needs_deinit[(int)local_3a8[0]] != '\0') {
          Variant::_clear_internal();
        }
        Variant::Variant((Variant *)&local_388,(Variant *)local_3e8);
        local_428 = (char *)0x0;
        if (local_450 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_428,(CowData *)&local_450);
        }
        StringName::StringName((StringName *)&local_430,"set",false);
        pSVar11 = (StringName *)ProjectSettings::get_singleton();
        Variant::Variant((Variant *)&local_1c8,(String *)&local_428);
        Variant::Variant(local_1b0,(Variant *)&local_388);
        local_198 = 0;
        local_190 = (undefined1  [16])0x0;
        pVVar14 = local_180;
        local_218 = (Variant *)&local_1c8;
        pVStack_210 = local_1b0;
        EditorUndoRedoManager::add_do_methodp
                  (pOVar9,pSVar11,(Variant **)&local_430,(int)(Variant *)&local_218);
        do {
          pVVar2 = pVVar14 + -0x18;
          pVVar14 = pVVar14 + -0x18;
          if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
            Variant::_clear_internal();
          }
        } while (pVVar14 != (Variant *)&local_1c8);
        if ((StringName::configured != '\0') && (local_430 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_428);
        if (Variant::needs_deinit[(int)local_388] != '\0') {
          Variant::_clear_internal();
        }
        Variant::Variant((Variant *)&local_218,(Variant *)local_3e8);
        local_428 = (char *)0x0;
        if (local_450 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_428,(CowData *)&local_450);
        }
        StringName::StringName((StringName *)&local_430,"set",false);
        pSVar11 = (StringName *)ProjectSettings::get_singleton();
        Variant::Variant((Variant *)&local_178,(String *)&local_428);
        Variant::Variant(local_160,(Variant *)&local_218);
        local_140 = (undefined1  [16])0x0;
        pVVar14 = local_130;
        local_148 = 0;
        local_1c8 = (Variant *)&local_178;
        pVStack_1c0 = local_160;
        EditorUndoRedoManager::add_undo_methodp
                  (pOVar9,pSVar11,(Variant **)&local_430,(int)(Variant *)&local_1c8);
        do {
          pVVar2 = pVVar14 + -0x18;
          pVVar14 = pVVar14 + -0x18;
          if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
            Variant::_clear_internal();
          }
        } while (pVVar14 != (Variant *)&local_178);
        if ((StringName::configured != '\0') && (local_430 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_428);
        if (Variant::needs_deinit[(int)local_218] != '\0') {
          Variant::_clear_internal();
        }
        Variant::Variant((Variant *)&local_1c8,(Variant *)local_3c8);
        local_428 = (char *)0x0;
        if (local_448 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_428,(CowData *)&local_448);
        }
        StringName::StringName((StringName *)&local_430,"set",false);
        pSVar11 = (StringName *)ProjectSettings::get_singleton();
        Variant::Variant(local_128,(String *)&local_428);
        Variant::Variant(local_110,(Variant *)&local_1c8);
        local_f0 = (undefined1  [16])0x0;
        pVVar14 = local_e0;
        local_f8 = 0;
        local_178 = local_128;
        pVStack_170 = local_110;
        EditorUndoRedoManager::add_undo_methodp
                  (pOVar9,pSVar11,(Variant **)&local_430,(int)(Variant *)&local_178);
        do {
          pVVar2 = pVVar14 + -0x18;
          pVVar14 = pVVar14 + -0x18;
          if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
            Variant::_clear_internal();
          }
        } while (pVVar14 != local_128);
        if ((StringName::configured != '\0') && (local_430 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_428);
        if (Variant::needs_deinit[(int)local_1c8] != '\0') {
          Variant::_clear_internal();
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_438);
    }
  }
  StringName::StringName((StringName *)&local_428,"_update_action_map_editor",false);
  local_388 = (Variant *)0x0;
  auStack_380 = (undefined1  [16])0x0;
  EditorUndoRedoManager::add_do_methodp(pOVar9,(StringName *)this,(Variant **)&local_428,0);
  if (Variant::needs_deinit[(int)local_388] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_428 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_428,"_update_action_map_editor",false);
  local_388 = (Variant *)0x0;
  auStack_380 = (undefined1  [16])0x0;
  EditorUndoRedoManager::add_undo_methodp(pOVar9,(StringName *)this,(Variant **)&local_428,0);
  if (Variant::needs_deinit[(int)local_388] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_428 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_428,"queue_save",false);
  local_388 = (Variant *)0x0;
  auStack_380 = (undefined1  [16])0x0;
  EditorUndoRedoManager::add_do_methodp(pOVar9,(StringName *)this,(Variant **)&local_428,0);
  if (Variant::needs_deinit[(int)local_388] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_428 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_428,"queue_save",false);
  local_388 = (Variant *)0x0;
  auStack_380 = (undefined1  [16])0x0;
  EditorUndoRedoManager::add_undo_methodp(pOVar9,(StringName *)this,(Variant **)&local_428,0);
  if (Variant::needs_deinit[(int)local_388] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_428 != (char *)0x0)) {
    StringName::unref();
  }
  EditorUndoRedoManager::commit_action(SUB81(pOVar9,0));
  if (local_588 != (undefined8 *)0x0) {
    uVar6 = local_410._8_8_;
    if ((local_3f0._4_4_ != 0) &&
       (*(uint *)(hash_table_size_primes + (local_3f0 & 0xffffffff) * 4) != 0)) {
      piVar3 = (int *)(local_410._8_8_ +
                      (ulong)*(uint *)(hash_table_size_primes + (local_3f0 & 0xffffffff) * 4) * 4);
      piVar12 = (int *)local_410._8_8_;
      puVar13 = local_588;
      do {
        if (*piVar12 != 0) {
          pvVar5 = (void *)*puVar13;
          *piVar12 = 0;
          if (Variant::needs_deinit[*(int *)((long)pvVar5 + 0x18)] != '\0') {
            Variant::_clear_internal();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar5 + 0x10));
          Memory::free_static(pvVar5,false);
          *puVar13 = 0;
        }
        piVar12 = piVar12 + 1;
        puVar13 = puVar13 + 1;
      } while (piVar12 != piVar3);
    }
    Memory::free_static(local_588,false);
    Memory::free_static((void *)uVar6,false);
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)&local_440);
  if (Variant::needs_deinit[local_3c8[0]] == '\0') {
    cVar7 = Variant::needs_deinit[local_3e8[0]];
  }
  else {
    Variant::_clear_internal();
    cVar7 = Variant::needs_deinit[local_3e8[0]];
  }
  if (cVar7 != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_448);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_450);
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ProjectSettingsEditor::_bind_methods() */

void ProjectSettingsEditor::_bind_methods(void)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  MethodBind *pMVar4;
  long *plVar5;
  long lVar6;
  long in_FS_OFFSET;
  long local_78 [2];
  long *local_68;
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  D_METHODP((char *)local_78,(char ***)"queue_save",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  pMVar4 = create_method_bind<ProjectSettingsEditor>(queue_save);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)local_78,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_68;
  if (local_68 != (long *)0x0) {
    LOCK();
    plVar5 = local_68 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_68 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_68[-1];
      local_68 = (long *)0x0;
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
  if ((StringName::configured != '\0') && (local_78[0] != 0)) {
    StringName::unref();
  }
  D_METHODP((char *)local_78,(char ***)"_update_action_map_editor",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  pMVar4 = create_method_bind<ProjectSettingsEditor>(_update_action_map_editor);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)local_78,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_68;
  if (local_68 != (long *)0x0) {
    LOCK();
    plVar5 = local_68 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_68 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_68[-1];
      local_68 = (long *)0x0;
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
  if ((StringName::configured != '\0') && (local_78[0] != 0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProjectSettingsEditor::_update_property_box() */

void __thiscall ProjectSettingsEditor::_update_property_box(ProjectSettingsEditor *this)

{
  long *plVar1;
  undefined8 uVar2;
  bool bVar3;
  code *pcVar4;
  bool bVar5;
  undefined *puVar6;
  char cVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  long in_FS_OFFSET;
  ProjectSettingsEditor local_a8 [8];
  long local_a0;
  char local_98 [8];
  long local_90;
  undefined *local_88;
  long local_80;
  undefined8 local_78;
  undefined1 local_70 [16];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _get_setting_name(local_a8);
  String::split(local_98,SUB81(local_a8,0),0x10c878);
  lVar9 = local_90;
  if (local_90 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = *(long *)(local_90 + -8);
    if (0 < lVar10) {
      local_a0 = 0;
      if (lVar10 == 2) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,(CowData *)(local_90 + 8));
      }
      else {
        local_80 = 0;
        local_88 = &_LC25;
        String::parse_latin1((StrRange *)&local_a0);
      }
      bVar3 = false;
      if ((local_90 != 0) && (*(long *)(local_90 + -8) == 2)) {
        if (*(long *)(local_90 + 8) == 0) {
          bVar3 = true;
        }
        else {
          bVar3 = *(uint *)(*(long *)(local_90 + 8) + -8) < 2;
        }
      }
      BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xe38),0));
      BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xe40),0));
      if ((local_a0 != 0) && (1 < *(uint *)(local_a0 + -8))) {
        for (iVar11 = 1; iVar8 = OptionButton::get_item_count(), iVar11 < iVar8; iVar11 = iVar11 + 1
            ) {
          OptionButton::get_item_text((int)(CowData<char32_t> *)&local_88);
          cVar7 = String::operator==((String *)&local_a0,(String *)&local_88);
          puVar6 = local_88;
          if (local_88 != (undefined *)0x0) {
            LOCK();
            plVar1 = (long *)(local_88 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_88 = (undefined *)0x0;
              Memory::free_static(puVar6 + -0x10,false);
            }
          }
          if (cVar7 != '\0') {
            OptionButton::select((int)*(undefined8 *)(this + 0xe28));
            if (local_a0 != 0) {
              bVar5 = false;
              bVar3 = false;
              if (*(uint *)(local_a0 + -8) < 2) goto LAB_00107b13;
              goto LAB_00107b21;
            }
            bVar3 = false;
            goto LAB_00107b13;
          }
        }
        bVar3 = true;
      }
LAB_00107b13:
      bVar5 = bVar3;
      OptionButton::select((int)*(undefined8 *)(this + 0xe28));
LAB_00107b21:
      LineEdit::get_text();
      if ((local_88 == (undefined *)0x0) ||
         (uVar2 = *(undefined8 *)(local_88 + -8), (int)uVar2 == 0)) {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      }
      else {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
        if ((int)uVar2 != 1) {
          cVar7 = ProjectSettings::has_setting(*(String **)(this + 0xdb0));
          if (cVar7 == '\0') {
            cVar7 = ProjectSettings::has_setting(*(String **)(this + 0xdb0));
            if (cVar7 == '\0') {
              OptionButton::select((int)*(undefined8 *)(this + 0xe30));
            }
            else {
              local_70 = (undefined1  [16])0x0;
              local_78 = 0;
              ProjectSettings::get_setting((String *)local_58,*(Variant **)(this + 0xdb0));
              uVar2 = *(undefined8 *)(this + 0xe30);
              OptionButton::get_item_index((int)uVar2);
              OptionButton::select((int)uVar2);
              if (Variant::needs_deinit[local_58[0]] != '\0') {
                Variant::_clear_internal();
              }
              if (Variant::needs_deinit[(int)local_78] != '\0') {
                Variant::_clear_internal();
              }
            }
            if (!bVar5) {
              String::split((char *)&local_88,SUB81(lVar9,0),0x10c850);
              for (lVar9 = 0; (local_80 != 0 && (lVar9 < *(long *)(local_80 + -8)));
                  lVar9 = lVar9 + 1) {
                cVar7 = String::is_valid_ascii_identifier();
                if (cVar7 == '\0') {
                  CowData<String>::_unref((CowData<String> *)&local_80);
                  goto LAB_00107c25;
                }
              }
              BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xe38),0));
              CowData<String>::_unref((CowData<String> *)&local_80);
            }
          }
          else {
            uVar2 = *(undefined8 *)(this + 0xe40);
            ProjectSettings::is_builtin_setting(*(String **)(this + 0xdb0));
            BaseButton::set_disabled(SUB81(uVar2,0));
            local_70 = (undefined1  [16])0x0;
            local_78 = 0;
            ProjectSettings::get_setting((String *)local_58,*(Variant **)(this + 0xdb0));
            uVar2 = *(undefined8 *)(this + 0xe30);
            OptionButton::get_item_index((int)uVar2);
            OptionButton::select((int)uVar2);
            if (Variant::needs_deinit[local_58[0]] != '\0') {
              Variant::_clear_internal();
            }
            if (Variant::needs_deinit[(int)local_78] != '\0') {
              Variant::_clear_internal();
            }
          }
        }
      }
LAB_00107c25:
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
      CowData<String>::_unref((CowData<String> *)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,0,lVar10,"p_index","size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}



/* ProjectSettingsEditor::_setting_selected(String const&) */

void __thiscall
ProjectSettingsEditor::_setting_selected(ProjectSettingsEditor *this,String *param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  String local_70 [8];
  String local_68 [8];
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)param_1 == 0) || (*(uint *)(*(long *)param_1 + -8) < 2)) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    uVar1 = *(undefined8 *)(this + 0xe20);
    local_58 = &_LC113;
    local_60 = 0;
    local_50 = 1;
    String::parse_latin1((StrRange *)&local_60);
    SectionedInspector::get_current_section();
    String::operator+(local_68,(String *)&local_58);
    String::operator+(local_70,local_68);
    LineEdit::set_text(uVar1,local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _update_property_box(this);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProjectSettingsEditor::_property_box_changed(String const&) */

void ProjectSettingsEditor::_property_box_changed(String *param_1)

{
  _update_property_box((ProjectSettingsEditor *)param_1);
  return;
}



/* ProjectSettingsEditor::_feature_selected(int) */

void __thiscall ProjectSettingsEditor::_feature_selected(ProjectSettingsEditor *this,int param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  long in_FS_OFFSET;
  undefined8 local_60;
  char local_58 [8];
  String *local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  LineEdit::get_text();
  bVar3 = SUB81((CowData<char32_t> *)&local_48,0);
  String::strip_edges(bVar3,SUB81((CowData<char32_t> *)&local_60,0));
  String::split(local_58,bVar3,0x10c878);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  if (param_1 == 0) {
    local_60 = 0;
    local_48 = &_LC25;
    local_40 = 0;
    String::parse_latin1((StrRange *)&local_60);
  }
  else {
    OptionButton::get_item_text((int)(CowData<char32_t> *)&local_48);
    operator+((char *)&local_60,(String *)&_LC138);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  }
  uVar1 = *(undefined8 *)(this + 0xe20);
  if (local_50 == (String *)0x0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(local_50 + -8);
    if (0 < lVar4) {
      String::operator+((String *)&local_48,local_50);
      LineEdit::set_text(uVar1,(CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      _update_property_box(this);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      CowData<String>::_unref((CowData<String> *)&local_50);
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,0,lVar4,"p_index","size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



/* ProjectSettingsEditor::_add_feature_overrides() */

void __thiscall ProjectSettingsEditor::_add_feature_overrides(ProjectSettingsEditor *this)

{
  Object *pOVar1;
  long *plVar2;
  code *pcVar3;
  String *pSVar4;
  Object *pOVar5;
  undefined8 uVar6;
  uint uVar7;
  char cVar8;
  int iVar9;
  void *pvVar10;
  CowData<char32_t> *pCVar11;
  int iVar12;
  int iVar13;
  CowData<char32_t> *pCVar14;
  ulong uVar15;
  long lVar16;
  long in_FS_OFFSET;
  long *local_a0;
  long local_98;
  Object *local_90;
  Object *local_88;
  long local_80;
  Object *local_78;
  undefined8 local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  local_78 = (Object *)&_LC143;
  local_48 = 2;
  local_88 = (Object *)0x0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_88);
  HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::insert((String *)&local_78)
  ;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  local_78 = (Object *)&_LC144;
  local_88 = (Object *)0x0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_88);
  HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::insert((String *)&local_78)
  ;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  local_78 = (Object *)&_LC145;
  local_88 = (Object *)0x0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_88);
  HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::insert((String *)&local_78)
  ;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  local_78 = (Object *)0x10c8b7;
  local_88 = (Object *)0x0;
  local_70 = 6;
  String::parse_latin1((StrRange *)&local_88);
  HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::insert((String *)&local_78)
  ;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  local_78 = (Object *)0x10c8be;
  local_88 = (Object *)0x0;
  local_70 = 0xb;
  String::parse_latin1((StrRange *)&local_88);
  HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::insert((String *)&local_78)
  ;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  local_78 = (Object *)0x10c8ca;
  local_88 = (Object *)0x0;
  local_70 = 0xe;
  String::parse_latin1((StrRange *)&local_88);
  HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::insert((String *)&local_78)
  ;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  local_78 = (Object *)0x10c8d9;
  local_88 = (Object *)0x0;
  local_70 = 0xe;
  String::parse_latin1((StrRange *)&local_88);
  HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::insert((String *)&local_78)
  ;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  local_78 = (Object *)0x10c8e8;
  local_88 = (Object *)0x0;
  local_70 = 0x10;
  String::parse_latin1((StrRange *)&local_88);
  HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::insert((String *)&local_78)
  ;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  local_78 = (Object *)0x10c8f9;
  local_88 = (Object *)0x0;
  local_70 = 5;
  String::parse_latin1((StrRange *)&local_88);
  HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::insert((String *)&local_78)
  ;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  local_78 = (Object *)0x10c8ff;
  local_88 = (Object *)0x0;
  local_70 = 7;
  String::parse_latin1((StrRange *)&local_88);
  HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::insert((String *)&local_78)
  ;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  local_78 = (Object *)0x10c907;
  local_88 = (Object *)0x0;
  local_70 = 8;
  String::parse_latin1((StrRange *)&local_88);
  HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::insert((String *)&local_78)
  ;
  iVar13 = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  local_78 = (Object *)0x10c910;
  local_88 = (Object *)0x0;
  local_70 = 6;
  String::parse_latin1((StrRange *)&local_88);
  HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::insert((String *)&local_78)
  ;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  local_78 = (Object *)0x10c917;
  local_88 = (Object *)0x0;
  local_70 = 6;
  String::parse_latin1((StrRange *)&local_88);
  HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::insert((String *)&local_78)
  ;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  local_78 = (Object *)&_LC156;
  local_88 = (Object *)0x0;
  local_70 = 2;
  String::parse_latin1((StrRange *)&local_88);
  HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::insert((String *)&local_78)
  ;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  local_78 = (Object *)&_LC157;
  local_88 = (Object *)0x0;
  local_70 = 2;
  String::parse_latin1((StrRange *)&local_88);
  HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::insert((String *)&local_78)
  ;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  local_78 = (Object *)0x10c924;
  local_88 = (Object *)0x0;
  local_70 = 5;
  String::parse_latin1((StrRange *)&local_88);
  HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::insert((String *)&local_78)
  ;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  iVar9 = EditorExport::get_export_platform_count();
  iVar12 = (int)(String *)&local_78;
  if (0 < iVar9) {
    do {
      local_88 = (Object *)0x0;
      EditorExport::get_export_platform(iVar12);
      (**(code **)(*(long *)local_78 + 0x288))();
      if (((local_78 != (Object *)0x0) &&
          (cVar8 = RefCounted::unreference(), pOVar1 = local_78, cVar8 != '\0')) &&
         (cVar8 = predelete_handler(local_78), cVar8 != '\0')) {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
      if (local_88 != (Object *)0x0) {
        for (lVar16 = *(long *)local_88; lVar16 != 0; lVar16 = *(long *)(lVar16 + 8)) {
          HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::insert
                    ((String *)&local_78);
        }
      }
      iVar13 = iVar13 + 1;
      List<String,DefaultAllocator>::~List((List<String,DefaultAllocator> *)&local_88);
      iVar9 = EditorExport::get_export_platform_count();
    } while (iVar13 < iVar9);
  }
  iVar13 = 0;
  iVar9 = EditorExport::get_export_preset_count();
  if (0 < iVar9) {
    do {
      local_a0 = (long *)0x0;
      EditorExport::get_export_preset((int)(StrRange *)&local_90);
      EditorExportPreset::get_platform();
      pOVar1 = local_88;
      pcVar3 = *(code **)(*(long *)local_88 + 0x158);
      EditorExport::get_export_preset(iVar12);
      (*pcVar3)(pOVar1,(String *)&local_78,(List<String,DefaultAllocator> *)&local_a0);
      if (((local_78 != (Object *)0x0) &&
          (cVar8 = RefCounted::unreference(), pOVar1 = local_78, cVar8 != '\0')) &&
         (cVar8 = predelete_handler(local_78), cVar8 != '\0')) {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
      if (((local_88 != (Object *)0x0) &&
          (cVar8 = RefCounted::unreference(), pOVar1 = local_88, cVar8 != '\0')) &&
         (cVar8 = predelete_handler(local_88), cVar8 != '\0')) {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
      if (((local_90 != (Object *)0x0) &&
          (cVar8 = RefCounted::unreference(), pOVar1 = local_90, cVar8 != '\0')) &&
         (cVar8 = predelete_handler(local_90), cVar8 != '\0')) {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
      if (local_a0 != (long *)0x0) {
        for (lVar16 = *local_a0; lVar16 != 0; lVar16 = *(long *)(lVar16 + 8)) {
          HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::insert
                    ((String *)&local_78);
        }
      }
      EditorExport::get_export_preset(iVar12);
      EditorExportPreset::get_custom_features();
      if (((local_78 != (Object *)0x0) &&
          (cVar8 = RefCounted::unreference(), pOVar1 = local_78, cVar8 != '\0')) &&
         (cVar8 = predelete_handler(local_78), cVar8 != '\0')) {
        (**(code **)(*(long *)pOVar1 + 0x140))();
        Memory::free_static(pOVar1,false);
      }
      lVar16 = 0;
      String::split((char *)&local_88,SUB81(&local_98,0),0x10c92a);
joined_r0x00108894:
      if (local_80 != 0) {
        do {
          if (*(long *)(local_80 + -8) <= lVar16) break;
          String::strip_edges(SUB81((StrRange *)&local_90,0),
                              (bool)((char)local_80 + (char)lVar16 * '\b'));
          if (local_90 != (Object *)0x0) {
            if ((1 < *(uint *)(local_90 + -8)) &&
               (HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::insert
                          ((String *)&local_78), local_90 == (Object *)0x0)) goto code_r0x00108913;
            pOVar5 = local_90;
            LOCK();
            pOVar1 = local_90 + -0x10;
            *(long *)pOVar1 = *(long *)pOVar1 + -1;
            UNLOCK();
            if (*(long *)pOVar1 == 0) {
              local_90 = (Object *)0x0;
              Memory::free_static(pOVar5 + -0x10,false);
            }
          }
          lVar16 = lVar16 + 1;
          if (local_80 == 0) break;
        } while( true );
      }
      CowData<String>::_unref((CowData<String> *)&local_80);
      lVar16 = local_98;
      if (local_98 != 0) {
        LOCK();
        plVar2 = (long *)(local_98 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          local_98 = 0;
          Memory::free_static((void *)(lVar16 + -0x10),false);
        }
      }
      iVar13 = iVar13 + 1;
      List<String,DefaultAllocator>::~List((List<String,DefaultAllocator> *)&local_a0);
      iVar9 = EditorExport::get_export_preset_count();
      if (iVar9 <= iVar13) break;
    } while( true );
  }
  OptionButton::clear();
  local_78 = (Object *)&_LC25;
  pSVar4 = *(String **)(this + 0xe28);
  local_88 = (Object *)0x0;
  local_70 = 0;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = (Object *)0x10c92c;
  local_90 = (Object *)0x0;
  local_70 = 5;
  String::parse_latin1((StrRange *)&local_90);
  TTR((String *)&local_78,(String *)&local_90);
  OptionButton::add_item(pSVar4,iVar12);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  uVar7 = local_48._4_4_;
  uVar15 = (ulong)local_48._4_4_;
  uVar6 = local_68._0_8_;
  if (local_48._4_4_ == 0) {
    pvVar10 = (void *)local_58._8_8_;
    if ((CowData<char32_t> *)local_68._0_8_ == (CowData<char32_t> *)0x0) {
LAB_00108ba0:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00108c5c;
    }
  }
  else {
    pCVar11 = (CowData<char32_t> *)local_68._0_8_;
    for (iVar9 = 1; OptionButton::add_item(*(String **)(this + 0xe28),(int)pCVar11),
        iVar9 < (int)uVar7; iVar9 = iVar9 + 1) {
      pCVar11 = pCVar11 + 8;
    }
    if ((CowData<char32_t> *)uVar6 == (CowData<char32_t> *)0x0) goto LAB_00108ba0;
    pvVar10 = (void *)local_58._8_8_;
    if (*(uint *)(hash_table_size_primes + (local_48 & 0xffffffff) * 4) != 0) {
      memset((void *)local_58._8_8_,0,
             (ulong)*(uint *)(hash_table_size_primes + (local_48 & 0xffffffff) * 4) * 4);
    }
    pCVar11 = (CowData<char32_t> *)uVar6;
    do {
      pCVar14 = pCVar11 + 8;
      CowData<char32_t>::_unref(pCVar11);
      pCVar11 = pCVar14;
    } while (pCVar14 != (CowData<char32_t> *)(uVar6 + uVar15 * 8));
  }
  Memory::free_static((void *)uVar6,false);
  Memory::free_static((void *)local_58._0_8_,false);
  Memory::free_static((void *)local_68._8_8_,false);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    Memory::free_static(pvVar10,false);
    return;
  }
LAB_00108c5c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x00108913:
  lVar16 = lVar16 + 1;
  goto joined_r0x00108894;
}



/* ProjectSettingsEditor::popup_project_settings(bool) */

void __thiscall
ProjectSettingsEditor::popup_project_settings(ProjectSettingsEditor *this,bool param_1)

{
  code *pcVar1;
  String *pSVar2;
  long in_FS_OFFSET;
  float fVar3;
  undefined8 local_b8;
  undefined8 local_b0;
  char *local_a8;
  undefined8 local_a0;
  undefined1 local_98 [8];
  float local_90;
  float fStack_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78 [4];
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pSVar2 = (String *)EditorSettings::get_singleton();
  local_88 = 0;
  local_80 = 0;
  Variant::Variant((Variant *)local_78,(Rect2 *)&local_88);
  local_a8 = "project_settings";
  local_b0 = 0;
  local_a0 = 0x10;
  String::parse_latin1((StrRange *)&local_b0);
  local_a8 = "dialog_bounds";
  local_b8 = 0;
  local_a0 = 0xd;
  String::parse_latin1((StrRange *)&local_b8);
  EditorSettings::get_project_metadata((String *)local_58,pSVar2,(Variant *)&local_b8);
  _local_98 = Variant::operator_cast_to_Rect2((Variant *)local_58);
  if (Variant::needs_deinit[(int)local_58._0_4_] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  if (Variant::needs_deinit[(int)local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (((((float)local_98._0_4_ == 0.0) && ((float)local_98._4_4_ == 0.0)) && (local_90 == 0.0)) &&
     (fStack_8c == 0.0)) {
    fVar3 = (float)EditorScale::get_scale();
    local_78[0] = CONCAT44(fVar3 * _LC164._4_4_,fVar3 * (float)_LC164);
    local_58._0_8_ = Vector2::operator_cast_to_Vector2i((Vector2 *)local_78);
    Window::popup_centered_clamped(this,_LC165);
  }
  else {
    pcVar1 = *(code **)(*(long *)this + 0x240);
    local_58 = Rect2::operator_cast_to_Rect2i((Rect2 *)local_98);
    (*pcVar1)(this,(String *)local_58);
  }
  _add_feature_overrides(this);
  SectionedInspector::update_category_list();
  Node::set_process_shortcut_input(SUB81(this,0));
  LocalizationEditor::update_translations();
  EditorAutoloadSettings::update_autoload();
  GroupSettingsEditor::update_groups();
  EditorPluginSettings::update_plugins();
  ImportDefaultsEditor::clear();
  if (param_1) {
    LineEdit::clear();
  }
  _focus_current_search_box(this);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CowData<ActionMapEditor::ActionInfo>::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<ActionMapEditor::ActionInfo>::_copy_on_write(CowData<ActionMapEditor::ActionInfo> *this)

{
  long lVar1;
  code *pcVar2;
  char cVar3;
  undefined8 *puVar4;
  CowData *pCVar5;
  CowData<char32_t> *this_00;
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
  if (lVar1 * 0x30 != 0) {
    uVar6 = lVar1 * 0x30 - 1;
    uVar6 = uVar6 | uVar6 >> 1;
    uVar6 = uVar6 | uVar6 >> 2;
    uVar6 = uVar6 | uVar6 >> 4;
    uVar6 = uVar6 | uVar6 >> 8;
    uVar6 = uVar6 | uVar6 >> 0x10;
    uVar6 = (uVar6 | uVar6 >> 0x20) + 0x11;
  }
  puVar4 = (undefined8 *)Memory::alloc_static(uVar6,false);
  if (puVar4 != (undefined8 *)0x0) {
    lVar7 = 0;
    *puVar4 = 1;
    puVar4[1] = lVar1;
    this_00 = (CowData<char32_t> *)(puVar4 + 2);
    if (lVar1 != 0) {
      do {
        pCVar5 = (CowData *)(this_00 + *(long *)this + (-0x10 - (long)puVar4));
        *(undefined8 *)this_00 = 0;
        if (*(long *)pCVar5 != 0) {
          CowData<char32_t>::_ref(this_00,pCVar5);
        }
        Dictionary::Dictionary((Dictionary *)(this_00 + 8),(Dictionary *)(pCVar5 + 8));
        *(CowData *)(this_00 + 0x10) = pCVar5[0x10];
        Dictionary::Dictionary((Dictionary *)(this_00 + 0x18),(Dictionary *)(pCVar5 + 0x18));
        *(undefined8 *)(this_00 + 0x20) = 0;
        if (*(long *)(pCVar5 + 0x20) != 0) {
          *(long *)(this_00 + 0x20) = *(long *)(pCVar5 + 0x20);
          cVar3 = RefCounted::reference();
          if (cVar3 == '\0') {
            *(undefined8 *)(this_00 + 0x20) = 0;
          }
        }
        lVar7 = lVar7 + 1;
        *(CowData *)(this_00 + 0x28) = pCVar5[0x28];
        this_00 = this_00 + 0x30;
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



/* ProjectSettingsEditor::_update_action_map_editor() */

void __thiscall ProjectSettingsEditor::_update_action_map_editor(ProjectSettingsEditor *this)

{
  long *plVar1;
  String *this_00;
  Object *pOVar2;
  char cVar3;
  int iVar4;
  List *pLVar5;
  long lVar6;
  undefined1 (*pauVar7) [16];
  CowData<char32_t> *pCVar8;
  Object *pOVar9;
  long lVar10;
  CowData *pCVar11;
  long lVar12;
  long in_FS_OFFSET;
  bool bVar13;
  CowData<ActionMapEditor::ActionInfo> *local_118;
  long *local_f8;
  Object *local_f0;
  undefined8 local_e8;
  long local_e0;
  Variant local_d8 [8];
  long local_d0 [2];
  long local_c0;
  long local_b8;
  Dictionary local_b0 [8];
  CowData<char32_t> local_a8;
  Dictionary local_a0 [8];
  Object *local_98;
  CowData<char32_t> local_90;
  undefined1 (*local_88) [16];
  undefined8 local_80;
  CowData<char32_t> local_78;
  Dictionary local_70 [8];
  Object *local_68;
  CowData<char32_t> local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_c0 = 0;
  local_f8 = (long *)0x0;
  pLVar5 = (List *)ProjectSettings::get_singleton();
  Object::get_property_list(pLVar5,SUB81((List<PropertyInfo,DefaultAllocator> *)&local_f8,0));
  if ((_update_action_map_editor()::{lambda()#1}::operator()()::sname == '\0') &&
     (iVar4 = __cxa_guard_acquire(&_update_action_map_editor()::{lambda()#1}::operator()()::sname),
     iVar4 != 0)) {
    _scs_create((char *)&_update_action_map_editor()::{lambda()#1}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &_update_action_map_editor()::{lambda()#1}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&_update_action_map_editor()::{lambda()#1}::operator()()::sname);
  }
  Window::get_editor_theme_icon((StringName *)&local_f0);
  if ((local_f8 != (long *)0x0) && (lVar10 = *local_f8, lVar10 != 0)) {
    do {
      local_e8 = 0;
      plVar1 = (long *)(*(long *)(lVar10 + 8) + -0x10);
      if (*(long *)(lVar10 + 8) != 0) {
        do {
          lVar6 = *plVar1;
          if (lVar6 == 0) goto LAB_001091b0;
          LOCK();
          lVar12 = *plVar1;
          bVar13 = lVar6 == lVar12;
          if (bVar13) {
            *plVar1 = lVar6 + 1;
            lVar12 = lVar6;
          }
          UNLOCK();
        } while (!bVar13);
        if (lVar12 != -1) {
          local_e8 = *(undefined8 *)(lVar10 + 8);
        }
      }
LAB_001091b0:
      cVar3 = String::begins_with((char *)&local_e8);
      if (cVar3 != '\0') {
        local_b8 = 0;
        local_88 = (undefined1 (*) [16])0x10c556;
        local_80 = 6;
        String::parse_latin1((StrRange *)&local_b8);
        String::substr((int)(CowData *)&local_e0,(int)(CowData<char32_t> *)&local_e8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
        ProjectSettings::get_singleton();
        StringName::StringName((StringName *)&local_88,(String *)&local_e8,false);
        ProjectSettings::get_setting_with_override((StringName *)local_58);
        Variant::operator_cast_to_Dictionary(local_d8);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_88 != (undefined1 (*) [16])0x0)) {
          StringName::unref();
        }
        local_b8 = 0;
        Dictionary::Dictionary(local_b0);
        local_a8 = (CowData<char32_t>)0x0;
        Dictionary::Dictionary(local_a0);
        local_98 = (Object *)0x0;
        local_90 = (CowData<char32_t>)0x1;
        Dictionary::operator=(local_b0,(Dictionary *)local_d8);
        local_90 = (CowData<char32_t>)0x1;
        if (local_b8 != local_e0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_e0);
        }
        lVar6 = ProjectSettings::get_singleton();
        local_88 = (undefined1 (*) [16])0x0;
        if ((*(long **)(lVar6 + 0x210) != (long *)0x0) &&
           (pCVar11 = (CowData *)**(long **)(lVar6 + 0x210), pCVar11 != (CowData *)0x0)) {
          pauVar7 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
          *(undefined4 *)pauVar7[1] = 0;
          *pauVar7 = (undefined1  [16])0x0;
          local_88 = pauVar7;
          do {
            while( true ) {
              pCVar8 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
              *(undefined1 (*) [16])pCVar8 = (undefined1  [16])0x0;
              *(undefined1 (*) [16])(pCVar8 + 0x10) = (undefined1  [16])0x0;
              if (*(long *)pCVar11 != 0) {
                CowData<char32_t>::_ref(pCVar8,pCVar11);
              }
              lVar6 = *(long *)(*pauVar7 + 8);
              *(undefined8 *)(pCVar8 + 8) = 0;
              *(undefined1 (**) [16])(pCVar8 + 0x18) = pauVar7;
              *(long *)(pCVar8 + 0x10) = lVar6;
              if (lVar6 != 0) {
                *(CowData<char32_t> **)(lVar6 + 8) = pCVar8;
              }
              lVar6 = *(long *)*pauVar7;
              *(CowData<char32_t> **)(*pauVar7 + 8) = pCVar8;
              if (lVar6 != 0) break;
              pCVar11 = *(CowData **)(pCVar11 + 8);
              *(int *)pauVar7[1] = *(int *)pauVar7[1] + 1;
              *(CowData<char32_t> **)*pauVar7 = pCVar8;
              if (pCVar11 == (CowData *)0x0) goto LAB_0010940d;
            }
            pCVar11 = *(CowData **)(pCVar11 + 8);
            *(int *)pauVar7[1] = *(int *)pauVar7[1] + 1;
          } while (pCVar11 != (CowData *)0x0);
LAB_0010940d:
          for (this_00 = *(String **)*pauVar7; this_00 != (String *)0x0;
              this_00 = *(String **)(this_00 + 8)) {
            cVar3 = String::operator==(this_00,(String *)&local_e8);
            if (cVar3 != '\0') {
              List<String,DefaultAllocator>::~List((List<String,DefaultAllocator> *)&local_88);
              pOVar9 = local_98;
              local_90 = (CowData<char32_t>)0x0;
              if (local_f0 != local_98) {
                local_98 = local_f0;
                if ((local_f0 != (Object *)0x0) && (cVar3 = RefCounted::reference(), cVar3 == '\0'))
                {
                  local_98 = (Object *)0x0;
                }
                if (((pOVar9 != (Object *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')
                    ) && (cVar3 = predelete_handler(pOVar9), cVar3 != '\0')) {
                  (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
                  Memory::free_static(pOVar9,false);
                }
              }
              local_a8 = (CowData<char32_t>)0x1;
              ProjectSettings::get_singleton();
              StringName::StringName((StringName *)local_d0,(String *)&local_e8,false);
              Object::property_get_revert((StringName *)local_58);
              Variant::operator_cast_to_Dictionary((Variant *)&local_88);
              Dictionary::operator=(local_a0,(Dictionary *)&local_88);
              Dictionary::~Dictionary((Dictionary *)&local_88);
              if (Variant::needs_deinit[local_58[0]] != '\0') {
                Variant::_clear_internal();
              }
              if ((StringName::configured != '\0') && (local_d0[0] != 0)) {
                StringName::unref();
              }
              goto LAB_00109521;
            }
          }
        }
        List<String,DefaultAllocator>::~List((List<String,DefaultAllocator> *)&local_88);
LAB_00109521:
        local_88 = (undefined1 (*) [16])0x0;
        if (local_b8 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)&local_b8);
        }
        Dictionary::Dictionary((Dictionary *)&local_80,local_b0);
        local_78 = local_a8;
        Dictionary::Dictionary(local_70,local_a0);
        local_68 = (Object *)0x0;
        if (local_98 != (Object *)0x0) {
          local_68 = local_98;
          cVar3 = RefCounted::reference();
          if (cVar3 == '\0') {
            local_68 = (Object *)0x0;
          }
        }
        local_60 = local_90;
        if (local_c0 == 0) {
          lVar6 = 1;
        }
        else {
          lVar6 = *(long *)(local_c0 + -8) + 1;
        }
        iVar4 = CowData<ActionMapEditor::ActionInfo>::resize<false>
                          ((CowData<ActionMapEditor::ActionInfo> *)&local_c0,lVar6);
        if (iVar4 == 0) {
          if (local_c0 == 0) {
            lVar12 = -1;
            lVar6 = 0;
          }
          else {
            lVar6 = *(long *)(local_c0 + -8);
            lVar12 = lVar6 + -1;
            if (-1 < lVar12) {
              CowData<ActionMapEditor::ActionInfo>::_copy_on_write
                        ((CowData<ActionMapEditor::ActionInfo> *)&local_c0);
              pCVar8 = (CowData<char32_t> *)(lVar12 * 0x30 + local_c0);
              if ((undefined1 (*) [16])*(long *)pCVar8 != local_88) {
                CowData<char32_t>::_ref(pCVar8,(CowData *)&local_88);
              }
              Dictionary::operator=((Dictionary *)(pCVar8 + 8),(Dictionary *)&local_80);
              pCVar8[0x10] = local_78;
              Dictionary::operator=((Dictionary *)(pCVar8 + 0x18),local_70);
              pOVar2 = *(Object **)(pCVar8 + 0x20);
              pOVar9 = pOVar2;
              if (local_68 != pOVar2) {
                *(Object **)(pCVar8 + 0x20) = local_68;
                if ((local_68 != (Object *)0x0) && (cVar3 = RefCounted::reference(), cVar3 == '\0'))
                {
                  *(undefined8 *)(pCVar8 + 0x20) = 0;
                }
                pOVar9 = local_68;
                if (((pOVar2 != (Object *)0x0) &&
                    (cVar3 = RefCounted::unreference(), pOVar9 = local_68, cVar3 != '\0')) &&
                   (cVar3 = predelete_handler(pOVar2), pOVar9 = local_68, cVar3 != '\0')) {
                  (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
                  Memory::free_static(pOVar2,false);
                  pOVar9 = local_68;
                }
              }
              pCVar8[0x28] = local_60;
              goto LAB_001096d0;
            }
          }
          _err_print_index_error
                    ("set","./core/templates/cowdata.h",0xcf,lVar12,lVar6,"p_index","size()","",
                     false,false);
          pOVar9 = local_68;
        }
        else {
          _err_print_error("push_back","./core/templates/vector.h",0x142,
                           "Condition \"err\" is true. Returning: true",0,0);
          pOVar9 = local_68;
        }
LAB_001096d0:
        if (((pOVar9 != (Object *)0x0) &&
            (cVar3 = RefCounted::unreference(), pOVar9 = local_68, cVar3 != '\0')) &&
           (cVar3 = predelete_handler(local_68), cVar3 != '\0')) {
          (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
          Memory::free_static(pOVar9,false);
        }
        Dictionary::~Dictionary(local_70);
        Dictionary::~Dictionary((Dictionary *)&local_80);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
        if (((local_98 != (Object *)0x0) &&
            (cVar3 = RefCounted::unreference(), pOVar9 = local_98, cVar3 != '\0')) &&
           (cVar3 = predelete_handler(local_98), cVar3 != '\0')) {
          (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
          Memory::free_static(pOVar9,false);
        }
        Dictionary::~Dictionary(local_a0);
        Dictionary::~Dictionary(local_b0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
        Dictionary::~Dictionary((Dictionary *)local_d8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
      lVar10 = *(long *)(lVar10 + 0x30);
    } while (lVar10 != 0);
  }
  local_118 = (CowData<ActionMapEditor::ActionInfo> *)&local_c0;
  ActionMapEditor::update_action_list(*(Vector **)(this + 0xdd8));
  if (((local_f0 != (Object *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) &&
     (cVar3 = predelete_handler(local_f0), cVar3 != '\0')) {
    (**(code **)(*(long *)local_f0 + 0x140))(local_f0);
    Memory::free_static(local_f0,false);
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)&local_f8);
  CowData<ActionMapEditor::ActionInfo>::_unref(local_118);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProjectSettingsEditor::_notification(int) */

void __thiscall ProjectSettingsEditor::_notification(ProjectSettingsEditor *this,int param_1)

{
  char cVar1;
  String *pSVar2;
  long in_FS_OFFSET;
  undefined8 uVar3;
  undefined8 local_88;
  undefined8 local_80;
  char *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0x1e) {
    cVar1 = Window::is_visible();
    if (cVar1 == '\0') {
      pSVar2 = (String *)EditorSettings::get_singleton();
      local_68 = Window::get_size();
      uVar3 = Vector2i::operator_cast_to_Vector2((Vector2i *)&local_68);
      local_60 = Window::get_position();
      local_58 = Vector2i::operator_cast_to_Vector2((Vector2i *)&local_60);
      local_50 = uVar3;
      Variant::Variant((Variant *)local_48,(Rect2 *)&local_58);
      local_78 = "project_settings";
      local_88 = 0;
      local_70 = 0x10;
      String::parse_latin1((StrRange *)&local_88);
      local_78 = "dialog_bounds";
      local_80 = 0;
      local_70 = 0xd;
      String::parse_latin1((StrRange *)&local_80);
      EditorSettings::set_project_metadata(pSVar2,(String *)&local_80,(Variant *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      if (Variant::needs_deinit[local_48[0]] != '\0') {
        Variant::_clear_internal();
      }
    }
  }
  else {
    if (param_1 == 0x20) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00109a6d;
      goto LAB_00109a98;
    }
    if (param_1 == 10) {
      SectionedInspector::edit(*(Object **)(this + 0xdd0));
      _update_action_map_editor(this);
      if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00109a98;
LAB_00109a6d:
      _update_theme();
      return;
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00109a98:
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



/* Control::_top_level_changed() */

void Control::_top_level_changed(void)

{
  return;
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



/* ProjectSettingsEditor::is_class_ptr(void*) const */

uint ProjectSettingsEditor::is_class_ptr(void *param_1)

{
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  return (uint)CONCAT71(0x1159,in_RSI == &AcceptDialog::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1158,in_RSI == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1159,in_RSI == &Window::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1159,in_RSI == &Viewport::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x115a,in_RSI == &Node::get_class_ptr_static()::ptr) |
         CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
}



/* ProjectSettingsEditor::_property_can_revertv(StringName const&) const */

undefined8 ProjectSettingsEditor::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* ProjectSettingsEditor::_property_get_revertv(StringName const&, Variant&) const */

undefined8 ProjectSettingsEditor::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* CallableCustomMethodPointer<ProjectSettings, Error>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ProjectSettings,Error>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ProjectSettings,Error> *this)

{
  return;
}



/* CallableCustomMethodPointer<AcceptDialog, void, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AcceptDialog,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AcceptDialog,void,bool> *this)

{
  return;
}



/* CallableCustomMethodPointer<ProjectSettingsEditor, void, String const&, String const&,
   bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ProjectSettingsEditor,void,String_const&,String_const&,bool>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ProjectSettingsEditor,void,String_const&,String_const&,bool>
           *this)

{
  return;
}



/* CallableCustomMethodPointer<ProjectSettingsEditor, void, String const&, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ProjectSettingsEditor,void,String_const&,String_const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ProjectSettingsEditor,void,String_const&,String_const&> *this
          )

{
  return;
}



/* CallableCustomMethodPointer<ProjectSettingsEditor, void, String const&, Dictionary
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ProjectSettingsEditor,void,String_const&,Dictionary_const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ProjectSettingsEditor,void,String_const&,Dictionary_const&>
           *this)

{
  return;
}



/* CallableCustomMethodPointer<ProjectSettingsEditor, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ProjectSettingsEditor,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ProjectSettingsEditor,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<ProjectSettingsEditor, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ProjectSettingsEditor,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ProjectSettingsEditor,void,String_const&> *this)

{
  return;
}



/* CallableCustomMethodPointer<ProjectSettingsEditor, void, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ProjectSettingsEditor,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ProjectSettingsEditor,void,bool> *this)

{
  return;
}



/* CallableCustomMethodPointer<ProjectSettingsEditor, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ProjectSettingsEditor,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ProjectSettingsEditor,void,int> *this)

{
  return;
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



/* CallableCustomMethodPointer<ProjectSettings, Error>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<ProjectSettings,Error>::get_argument_count
          (CallableCustomMethodPointer<ProjectSettings,Error> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<AcceptDialog, void, bool>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<AcceptDialog,void,bool>::get_argument_count
          (CallableCustomMethodPointer<AcceptDialog,void,bool> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<ProjectSettingsEditor, void, String const&, String const&,
   bool>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<ProjectSettingsEditor,void,String_const&,String_const&,bool>::
get_argument_count(CallableCustomMethodPointer<ProjectSettingsEditor,void,String_const&,String_const&,bool>
                   *this,bool *param_1)

{
  *param_1 = true;
  return 3;
}



/* CallableCustomMethodPointer<ProjectSettingsEditor, void, String const&, String
   const&>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<ProjectSettingsEditor,void,String_const&,String_const&>::
get_argument_count(CallableCustomMethodPointer<ProjectSettingsEditor,void,String_const&,String_const&>
                   *this,bool *param_1)

{
  *param_1 = true;
  return 2;
}



/* CallableCustomMethodPointer<ProjectSettingsEditor, void, String const&, Dictionary
   const&>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<ProjectSettingsEditor,void,String_const&,Dictionary_const&>::
get_argument_count(CallableCustomMethodPointer<ProjectSettingsEditor,void,String_const&,Dictionary_const&>
                   *this,bool *param_1)

{
  *param_1 = true;
  return 2;
}



/* CallableCustomMethodPointer<ProjectSettingsEditor, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<ProjectSettingsEditor,void>::get_argument_count
          (CallableCustomMethodPointer<ProjectSettingsEditor,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<ProjectSettingsEditor, void, String
   const&>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<ProjectSettingsEditor,void,String_const&>::get_argument_count
          (CallableCustomMethodPointer<ProjectSettingsEditor,void,String_const&> *this,bool *param_1
          )

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<ProjectSettingsEditor, void, bool>::get_argument_count(bool&) const
    */

undefined8 __thiscall
CallableCustomMethodPointer<ProjectSettingsEditor,void,bool>::get_argument_count
          (CallableCustomMethodPointer<ProjectSettingsEditor,void,bool> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<ProjectSettingsEditor, void, int>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<ProjectSettingsEditor,void,int>::get_argument_count
          (CallableCustomMethodPointer<ProjectSettingsEditor,void,int> *this,bool *param_1)

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



/* CallableCustomMethodPointer<ProjectSettingsEditor, void, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ProjectSettingsEditor,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ProjectSettingsEditor,void,bool> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<ProjectSettingsEditor, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ProjectSettingsEditor,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ProjectSettingsEditor,void,int> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<ProjectSettingsEditor, void, String const&, Dictionary
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ProjectSettingsEditor,void,String_const&,Dictionary_const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ProjectSettingsEditor,void,String_const&,Dictionary_const&>
           *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<ProjectSettingsEditor, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ProjectSettingsEditor,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ProjectSettingsEditor,void,String_const&> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<ProjectSettingsEditor, void, String const&, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ProjectSettingsEditor,void,String_const&,String_const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ProjectSettingsEditor,void,String_const&,String_const&> *this
          )

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<ProjectSettingsEditor, void, String const&, String const&,
   bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ProjectSettingsEditor,void,String_const&,String_const&,bool>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ProjectSettingsEditor,void,String_const&,String_const&,bool>
           *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<AcceptDialog, void, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AcceptDialog,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AcceptDialog,void,bool> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<ProjectSettingsEditor, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ProjectSettingsEditor,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ProjectSettingsEditor,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<ProjectSettings, Error>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ProjectSettings,Error>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ProjectSettings,Error> *this)

{
  operator_delete(this,0x48);
  return;
}



/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00115838;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00115838;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
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



/* VBoxContainer::_property_get_revertv(StringName const&, Variant&) const */

undefined8 VBoxContainer::_property_get_revertv(StringName *param_1,Variant *param_2)

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
  
  if ((code *)PTR__property_can_revert_0011a008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* VBoxContainer::_property_can_revertv(StringName const&) const */

undefined8 VBoxContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0011a008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* ProjectSettingsEditor::~ProjectSettingsEditor() */

void __thiscall ProjectSettingsEditor::~ProjectSettingsEditor(ProjectSettingsEditor *this)

{
  *(undefined ***)this = &PTR__initialize_classv_001150b0;
  AcceptDialog::~AcceptDialog((AcceptDialog *)this);
  return;
}



/* ProjectSettingsEditor::~ProjectSettingsEditor() */

void __thiscall ProjectSettingsEditor::~ProjectSettingsEditor(ProjectSettingsEditor *this)

{
  *(undefined ***)this = &PTR__initialize_classv_001150b0;
  AcceptDialog::~AcceptDialog((AcceptDialog *)this);
  operator_delete(this,0xe78);
  return;
}



/* ProjectSettingsEditor::_getv(StringName const&, Variant&) const */

undefined8 ProjectSettingsEditor::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__get_0011a010 != Object::_get) {
    uVar1 = Window::_get(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* ProjectSettingsEditor::_setv(StringName const&, Variant const&) */

undefined8 ProjectSettingsEditor::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__set_0011a018 != Object::_set) {
    uVar1 = Window::_set(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* CallableCustomMethodPointer<AcceptDialog, void, bool>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<AcceptDialog,void,bool>::get_object
          (CallableCustomMethodPointer<AcceptDialog,void,bool> *this)

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
      goto LAB_0010a84d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010a84d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010a84d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<ProjectSettingsEditor, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<ProjectSettingsEditor,void>::get_object
          (CallableCustomMethodPointer<ProjectSettingsEditor,void> *this)

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
      goto LAB_0010a94d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010a94d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010a94d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<ProjectSettings, Error>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<ProjectSettings,Error>::get_object
          (CallableCustomMethodPointer<ProjectSettings,Error> *this)

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
      goto LAB_0010aa4d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010aa4d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010aa4d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<ProjectSettingsEditor, void, bool>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<ProjectSettingsEditor,void,bool>::get_object
          (CallableCustomMethodPointer<ProjectSettingsEditor,void,bool> *this)

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
      goto LAB_0010ab4d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010ab4d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010ab4d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<ProjectSettingsEditor, void, String const&>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<ProjectSettingsEditor,void,String_const&>::get_object
          (CallableCustomMethodPointer<ProjectSettingsEditor,void,String_const&> *this)

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
      goto LAB_0010ac4d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010ac4d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010ac4d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<ProjectSettingsEditor, void, String const&, String const&,
   bool>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<ProjectSettingsEditor,void,String_const&,String_const&,bool>::get_object
          (CallableCustomMethodPointer<ProjectSettingsEditor,void,String_const&,String_const&,bool>
           *this)

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
      goto LAB_0010ad4d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010ad4d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010ad4d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<ProjectSettingsEditor, void, String const&, String
   const&>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<ProjectSettingsEditor,void,String_const&,String_const&>::get_object
          (CallableCustomMethodPointer<ProjectSettingsEditor,void,String_const&,String_const&> *this
          )

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
      goto LAB_0010ae4d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010ae4d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010ae4d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<ProjectSettingsEditor, void, String const&, Dictionary
   const&>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<ProjectSettingsEditor,void,String_const&,Dictionary_const&>::get_object
          (CallableCustomMethodPointer<ProjectSettingsEditor,void,String_const&,Dictionary_const&>
           *this)

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
      goto LAB_0010af4d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010af4d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010af4d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<ProjectSettingsEditor, void, int>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<ProjectSettingsEditor,void,int>::get_object
          (CallableCustomMethodPointer<ProjectSettingsEditor,void,int> *this)

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
      goto LAB_0010b04d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010b04d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010b04d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* ProjectSettingsEditor::_validate_propertyv(PropertyInfo&) const */

void ProjectSettingsEditor::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  Viewport::_validate_property(param_1);
  if ((code *)PTR__validate_property_0011a020 == Viewport::_validate_property) {
    return;
  }
  Window::_validate_property(param_1);
  return;
}



/* HBoxContainer::_validate_propertyv(PropertyInfo&) const */

void HBoxContainer::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_0011a028 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* VBoxContainer::_validate_propertyv(PropertyInfo&) const */

void VBoxContainer::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_0011a028 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* HBoxContainer::_setv(StringName const&, Variant const&) */

undefined8 HBoxContainer::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_0011a030 != CanvasItem::_set) {
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
    if ((code *)PTR__set_0011a030 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x0010b398) */
/* HBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 HBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_0011a038 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x0010b408) */
/* VBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 VBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_0011a038 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
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
    uVar1 = (uint)CONCAT71(0x115a,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x115a,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x115a,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x115a,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x115a,in_RSI == &Node::get_class_ptr_static()::ptr) |
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
    uVar1 = (uint)CONCAT71(0x115a,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x115a,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x115a,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x115a,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x115a,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = TabContainer::get_current_tab_control;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010b550;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010b550:
  Control::~Control((Control *)this);
  return;
}



/* VBoxContainer::~VBoxContainer() */

void __thiscall VBoxContainer::~VBoxContainer(VBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = TabContainer::get_current_tab_control;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010b5b0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010b5b0:
  Control::~Control((Control *)this);
  return;
}



/* VBoxContainer::~VBoxContainer() */

void __thiscall VBoxContainer::~VBoxContainer(VBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = TabContainer::get_current_tab_control;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010b610;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010b610:
  Control::~Control((Control *)this);
  operator_delete(this,0xa10);
  return;
}



/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = TabContainer::get_current_tab_control;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010b680;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010b680:
  Control::~Control((Control *)this);
  operator_delete(this,0xa10);
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



/* ProjectSettingsEditor::_get_class_namev() const */

undefined8 * ProjectSettingsEditor::_get_class_namev(void)

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
LAB_0010b753:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010b753;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"ProjectSettingsEditor");
      goto LAB_0010b7be;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"ProjectSettingsEditor");
LAB_0010b7be:
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
LAB_0010b843:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010b843;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
      goto LAB_0010b8ae;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
LAB_0010b8ae:
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
LAB_0010b933:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010b933;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
      goto LAB_0010b99e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
LAB_0010b99e:
  return &_get_class_namev()::_class_name_static;
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



/* ProjectSettingsEditor::get_class() const */

void ProjectSettingsEditor::get_class(void)

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



/* Node::is_class(String const&) const */

undefined8 __thiscall Node::is_class(Node *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_0010bdeb;
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
      if (cVar5 != '\0') goto LAB_0010bdeb;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar6 = String::operator==(param_1,"Object");
      return uVar6;
    }
  }
  else {
LAB_0010bdeb:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x0010c000) */
/* BoxContainer::_notificationv(int, bool) */

void __thiscall BoxContainer::_notificationv(BoxContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_0011a040 != Container::_notification) {
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
  if ((code *)PTR__notification_0011a040 == Container::_notification) {
    return;
  }
  BoxContainer::_notification(iVar1);
  return;
}



/* HBoxContainer::_notificationv(int, bool) */

void __thiscall HBoxContainer::_notificationv(HBoxContainer *this,int param_1,bool param_2)

{
  if (param_2) {
    BoxContainer::_notificationv((BoxContainer *)this,param_1,true);
    return;
  }
  BoxContainer::_notificationv((BoxContainer *)this,param_1,false);
  return;
}



/* VBoxContainer::_notificationv(int, bool) */

void __thiscall VBoxContainer::_notificationv(VBoxContainer *this,int param_1,bool param_2)

{
  if (param_2) {
    BoxContainer::_notificationv((BoxContainer *)this,param_1,true);
    return;
  }
  BoxContainer::_notificationv((BoxContainer *)this,param_1,false);
  return;
}



/* Window::is_class(String const&) const */

undefined8 __thiscall Window::is_class(Window *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_0010c18b;
  }
  cVar5 = String::operator==(param_1,"Window");
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
      if (cVar5 != '\0') goto LAB_0010c18b;
    }
    cVar5 = String::operator==(param_1,"Viewport");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Node::is_class((Node *)this,param_1);
        return uVar6;
      }
      goto LAB_0010c2c8;
    }
  }
LAB_0010c18b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010c2c8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProjectSettingsEditor::is_class(String const&) const */

undefined8 __thiscall ProjectSettingsEditor::is_class(ProjectSettingsEditor *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_0010c3db;
  }
  cVar5 = String::operator==(param_1,"ProjectSettingsEditor");
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
      if (cVar5 != '\0') goto LAB_0010c3db;
    }
    cVar5 = String::operator==(param_1,"AcceptDialog");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Window::is_class((Window *)this,param_1);
        return uVar6;
      }
      goto LAB_0010c518;
    }
  }
LAB_0010c3db:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010c518:
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashSet<String, HashMapHasherDefault, HashMapComparatorDefault<String> >::insert(String const&)
    */

String * HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::insert
                   (String *param_1)

{
  CowData<char32_t> *this;
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
  char cVar27;
  uint uVar28;
  uint uVar29;
  int iVar30;
  ulong uVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  int iVar35;
  uint uVar36;
  String *in_RDX;
  ulong uVar37;
  long lVar38;
  long *in_RSI;
  long lVar39;
  uint uVar40;
  ulong uVar41;
  undefined4 uVar42;
  ulong uVar43;
  uint uVar44;
  uint *puVar45;
  uint local_88;
  long local_68;
  
  uVar28 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
  if (*in_RSI == 0) {
    uVar31 = (ulong)uVar28 * 4;
    lVar32 = Memory::alloc_static(uVar31,false);
    in_RSI[3] = lVar32;
    lVar32 = Memory::alloc_static((ulong)uVar28 * 8,false);
    *in_RSI = lVar32;
    lVar32 = Memory::alloc_static(uVar31,false);
    in_RSI[2] = lVar32;
    lVar32 = Memory::alloc_static(uVar31,false);
    in_RSI[1] = lVar32;
    if (uVar28 != 0) {
      memset((void *)in_RSI[3],0,uVar31);
    }
    iVar35 = *(int *)((long)in_RSI + 0x24);
    if (*in_RSI != 0) goto LAB_0010caec;
  }
  else {
    iVar35 = *(int *)((long)in_RSI + 0x24);
LAB_0010caec:
    if (iVar35 != 0) {
      uVar29 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
      lVar32 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
      uVar44 = String::hash();
      uVar31 = CONCAT44(0,uVar29);
      lVar39 = in_RSI[3];
      uVar36 = 1;
      if (uVar44 != 0) {
        uVar36 = uVar44;
      }
      uVar40 = 0;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = (ulong)uVar36 * lVar32;
      auVar23._8_8_ = 0;
      auVar23._0_8_ = uVar31;
      lVar38 = SUB168(auVar11 * auVar23,8);
      uVar44 = *(uint *)(lVar39 + lVar38 * 4);
      iVar35 = SUB164(auVar11 * auVar23,8);
      if (uVar44 == 0) {
        iVar35 = *(int *)((long)in_RSI + 0x24);
      }
      else {
        do {
          if (uVar36 == uVar44) {
            cVar27 = String::operator==((String *)
                                        (*in_RSI + (ulong)*(uint *)(in_RSI[1] + lVar38 * 4) * 8),
                                        in_RDX);
            if (cVar27 != '\0') {
              iVar35 = *(int *)((long)in_RSI + 0x24);
              iVar30 = *(int *)(in_RSI[1] + lVar38 * 4);
              goto LAB_0010ce4b;
            }
            lVar39 = in_RSI[3];
          }
          uVar40 = uVar40 + 1;
          auVar12._8_8_ = 0;
          auVar12._0_8_ = (ulong)(iVar35 + 1) * lVar32;
          auVar24._8_8_ = 0;
          auVar24._0_8_ = uVar31;
          lVar38 = SUB168(auVar12 * auVar24,8);
          uVar44 = *(uint *)(lVar39 + lVar38 * 4);
          iVar35 = SUB164(auVar12 * auVar24,8);
        } while ((uVar44 != 0) &&
                (auVar13._8_8_ = 0, auVar13._0_8_ = (ulong)uVar44 * lVar32, auVar25._8_8_ = 0,
                auVar25._0_8_ = uVar31, auVar14._8_8_ = 0,
                auVar14._0_8_ = (ulong)((uVar29 + iVar35) - SUB164(auVar13 * auVar25,8)) * lVar32,
                auVar26._8_8_ = 0, auVar26._0_8_ = uVar31, uVar40 <= SUB164(auVar14 * auVar26,8)));
        iVar35 = *(int *)((long)in_RSI + 0x24);
      }
    }
  }
  if ((float)uVar28 * __LC20 < (float)(iVar35 + 1)) {
    if ((int)in_RSI[4] == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_set.h",0xbf,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      iVar35 = *(int *)((long)in_RSI + 0x24);
      iVar30 = -1;
      goto LAB_0010ce4b;
    }
    uVar28 = (int)in_RSI[4] + 1;
    uVar31 = (ulong)uVar28;
    if (uVar28 < 2) {
      uVar31 = 2;
    }
    uVar28 = *(uint *)(hash_table_size_primes + uVar31 * 4);
    *(int *)(in_RSI + 4) = (int)uVar31;
    pvVar1 = (void *)in_RSI[3];
    uVar31 = (ulong)uVar28 * 4;
    pvVar2 = (void *)in_RSI[2];
    lVar32 = Memory::alloc_static(uVar31,false);
    in_RSI[3] = lVar32;
    lVar32 = Memory::realloc_static((void *)*in_RSI,(ulong)uVar28 * 8,false);
    *in_RSI = lVar32;
    lVar32 = Memory::alloc_static(uVar31,false);
    in_RSI[2] = lVar32;
    lVar32 = Memory::realloc_static((void *)in_RSI[1],uVar31,false);
    in_RSI[1] = lVar32;
    if (uVar28 != 0) {
      memset((void *)in_RSI[3],0,uVar31);
    }
    if (*(int *)((long)in_RSI + 0x24) != 0) {
      uVar31 = 0;
      lVar39 = in_RSI[3];
      lVar38 = in_RSI[2];
      do {
        uVar43 = uVar31 & 0xffffffff;
        uVar42 = (undefined4)uVar31;
        uVar44 = 0;
        uVar28 = *(uint *)((long)pvVar1 + (ulong)*(uint *)((long)pvVar2 + uVar31 * 4) * 4);
        uVar37 = (ulong)uVar28;
        uVar29 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
        uVar41 = CONCAT44(0,uVar29);
        lVar33 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
        auVar3._8_8_ = 0;
        auVar3._0_8_ = uVar37 * lVar33;
        auVar15._8_8_ = 0;
        auVar15._0_8_ = uVar41;
        lVar34 = SUB168(auVar3 * auVar15,8) * 4;
        iVar35 = SUB164(auVar3 * auVar15,8);
        puVar45 = (uint *)(lVar39 + lVar34);
        uVar36 = *puVar45;
        if (uVar36 == 0) {
          lVar33 = uVar31 * 4;
        }
        else {
          do {
            auVar4._8_8_ = 0;
            auVar4._0_8_ = (ulong)uVar36 * lVar33;
            auVar16._8_8_ = 0;
            auVar16._0_8_ = uVar41;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = (ulong)((uVar29 + iVar35) - SUB164(auVar4 * auVar16,8)) * lVar33;
            auVar17._8_8_ = 0;
            auVar17._0_8_ = uVar41;
            local_88 = SUB164(auVar5 * auVar17,8);
            if (local_88 < uVar44) {
              *(int *)(lVar38 + uVar43 * 4) = iVar35;
              uVar28 = *puVar45;
              *puVar45 = (uint)uVar37;
              uVar36 = *(uint *)(lVar34 + lVar32);
              uVar37 = (ulong)uVar28;
              *(uint *)(lVar34 + lVar32) = (uint)uVar43;
              uVar43 = (ulong)uVar36;
              uVar44 = local_88;
            }
            uVar42 = (undefined4)uVar43;
            uVar28 = (uint)uVar37;
            uVar44 = uVar44 + 1;
            auVar6._8_8_ = 0;
            auVar6._0_8_ = (ulong)(iVar35 + 1) * lVar33;
            auVar18._8_8_ = 0;
            auVar18._0_8_ = uVar41;
            lVar34 = SUB168(auVar6 * auVar18,8) * 4;
            iVar35 = SUB164(auVar6 * auVar18,8);
            puVar45 = (uint *)(lVar39 + lVar34);
            uVar36 = *puVar45;
          } while (uVar36 != 0);
          lVar33 = uVar43 << 2;
        }
        *puVar45 = uVar28;
        uVar31 = uVar31 + 1;
        *(int *)(lVar38 + lVar33) = iVar35;
        *(undefined4 *)(lVar32 + lVar34) = uVar42;
      } while ((uint)uVar31 < *(uint *)((long)in_RSI + 0x24));
    }
    Memory::free_static(pvVar1,false);
    Memory::free_static(pvVar2,false);
  }
  uVar29 = String::hash();
  uVar28 = 1;
  if (uVar29 != 0) {
    uVar28 = uVar29;
  }
  uVar31 = (ulong)uVar28;
  this = (CowData<char32_t> *)(*in_RSI + (ulong)*(uint *)((long)in_RSI + 0x24) * 8);
  *(undefined8 *)this = 0;
  CowData<char32_t>::_ref(this,(CowData *)in_RDX);
  uVar29 = *(uint *)((long)in_RSI + 0x24);
  lVar39 = in_RSI[3];
  uVar36 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
  uVar37 = CONCAT44(0,uVar36);
  lVar38 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar31 * lVar38;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uVar37;
  lVar32 = SUB168(auVar7 * auVar19,8) * 4;
  iVar35 = SUB164(auVar7 * auVar19,8);
  puVar45 = (uint *)(lVar39 + lVar32);
  uVar44 = *puVar45;
  if (uVar44 == 0) {
    local_68 = in_RSI[2];
    lVar34 = in_RSI[1];
  }
  else {
    uVar40 = 0;
    local_68 = in_RSI[2];
    lVar34 = in_RSI[1];
    do {
      auVar8._8_8_ = 0;
      auVar8._0_8_ = (ulong)uVar44 * lVar38;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar37;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = (ulong)((uVar36 + iVar35) - SUB164(auVar8 * auVar20,8)) * lVar38;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar37;
      local_88 = SUB164(auVar9 * auVar21,8);
      if (local_88 < uVar40) {
        *(int *)(local_68 + (ulong)uVar29 * 4) = iVar35;
        uVar28 = *puVar45;
        *puVar45 = (uint)uVar31;
        uVar44 = *(uint *)(lVar32 + lVar34);
        uVar31 = (ulong)uVar28;
        *(uint *)(lVar32 + lVar34) = uVar29;
        uVar29 = uVar44;
        uVar40 = local_88;
      }
      uVar28 = (uint)uVar31;
      uVar40 = uVar40 + 1;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = (ulong)(iVar35 + 1) * lVar38;
      auVar22._8_8_ = 0;
      auVar22._0_8_ = uVar37;
      lVar32 = SUB168(auVar10 * auVar22,8) * 4;
      iVar35 = SUB164(auVar10 * auVar22,8);
      puVar45 = (uint *)(lVar39 + lVar32);
      uVar44 = *puVar45;
    } while (uVar44 != 0);
  }
  *puVar45 = uVar28;
  *(int *)(local_68 + (ulong)uVar29 * 4) = iVar35;
  *(uint *)(lVar34 + lVar32) = uVar29;
  iVar30 = *(int *)((long)in_RSI + 0x24);
  iVar35 = iVar30 + 1;
  *(int *)((long)in_RSI + 0x24) = iVar35;
LAB_0010ce4b:
  lVar32 = *in_RSI;
  *(int *)(param_1 + 0xc) = iVar30;
  *(long *)param_1 = lVar32;
  *(int *)(param_1 + 8) = iVar35;
  return param_1;
}



/* Callable create_custom_callable_function_pointer<ProjectSettingsEditor,
   int>(ProjectSettingsEditor*, char const*, void (ProjectSettingsEditor::*)(int)) */

ProjectSettingsEditor *
create_custom_callable_function_pointer<ProjectSettingsEditor,int>
          (ProjectSettingsEditor *param_1,char *param_2,_func_void_int *param_3)

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
  *(undefined ***)this = &PTR_hash_00115328;
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



/* Callable create_custom_callable_function_pointer<ProjectSettingsEditor, String
   const&>(ProjectSettingsEditor*, char const*, void (ProjectSettingsEditor::*)(String const&)) */

ProjectSettingsEditor *
create_custom_callable_function_pointer<ProjectSettingsEditor,String_const&>
          (ProjectSettingsEditor *param_1,char *param_2,_func_void_String_ptr *param_3)

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
  *(undefined ***)this = &PTR_hash_00115448;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_void_String_ptr **)(this + 0x20) = param_3 + 1;
  Callable::Callable((Callable *)param_1,this);
  return param_1;
}



/* Callable create_custom_callable_function_pointer<ProjectSettingsEditor>(ProjectSettingsEditor*,
   char const*, void (ProjectSettingsEditor::*)()) */

ProjectSettingsEditor *
create_custom_callable_function_pointer<ProjectSettingsEditor>
          (ProjectSettingsEditor *param_1,char *param_2,_func_void *param_3)

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
  *(undefined ***)this = &PTR_hash_001154d8;
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



/* Callable create_custom_callable_function_pointer<AcceptDialog, bool>(AcceptDialog*, char const*,
   void (AcceptDialog::*)(bool)) */

AcceptDialog *
create_custom_callable_function_pointer<AcceptDialog,bool>
          (AcceptDialog *param_1,char *param_2,_func_void_bool *param_3)

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
  *(undefined ***)this = &PTR_hash_00115718;
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



/* Callable Callable::bind<bool>(bool) const */

Variant ** Callable::bind<bool>(bool param_1)

{
  char cVar1;
  bool in_DL;
  int in_ESI;
  undefined7 in_register_00000039;
  long in_FS_OFFSET;
  int local_58 [6];
  undefined8 local_40;
  undefined1 local_38 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_58,in_DL);
  local_40 = 0;
  local_38 = (undefined1  [16])0x0;
  Callable::bindp((Variant **)CONCAT71(in_register_00000039,param_1),in_ESI);
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
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (Variant **)CONCAT71(in_register_00000039,param_1);
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<String, Variant, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, Variant> > >::insert(String const&, Variant const&,
   bool) */

String * HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
         ::insert(String *param_1,Variant *param_2,bool param_3)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *pvVar4;
  void *__s;
  long lVar5;
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
  char cVar30;
  uint uVar31;
  ulong uVar32;
  undefined8 uVar33;
  void *__s_00;
  void *pvVar34;
  Variant *in_RCX;
  int iVar35;
  uint uVar36;
  undefined7 in_register_00000011;
  String *pSVar37;
  long lVar38;
  long lVar39;
  uint uVar40;
  ulong uVar41;
  undefined8 uVar42;
  char in_R8B;
  uint uVar43;
  uint uVar44;
  ulong uVar45;
  long lVar46;
  uint uVar47;
  undefined8 *puVar48;
  long in_FS_OFFSET;
  undefined8 *local_c0;
  long local_68;
  int local_60 [8];
  long local_40;
  
  pSVar37 = (String *)CONCAT71(in_register_00000011,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar40 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  if (*(long *)(param_2 + 8) == 0) {
    uVar41 = (ulong)uVar40;
    uVar32 = uVar41 * 4;
    uVar45 = uVar41 * 8;
    uVar33 = Memory::alloc_static(uVar32,false);
    *(undefined8 *)(param_2 + 0x10) = uVar33;
    pvVar34 = (void *)Memory::alloc_static(uVar45,false);
    *(void **)(param_2 + 8) = pvVar34;
    if (uVar40 != 0) {
      pvVar4 = *(void **)(param_2 + 0x10);
      if ((pvVar4 < (void *)((long)pvVar34 + uVar45)) && (pvVar34 < (void *)((long)pvVar4 + uVar32))
         ) {
        uVar32 = 0;
        do {
          *(undefined4 *)((long)pvVar4 + uVar32 * 4) = 0;
          *(undefined8 *)((long)pvVar34 + uVar32 * 8) = 0;
          uVar32 = uVar32 + 1;
        } while (uVar41 != uVar32);
      }
      else {
        memset(pvVar4,0,uVar32);
        memset(pvVar34,0,uVar45);
      }
      goto LAB_0010d5c8;
    }
    iVar35 = *(int *)(param_2 + 0x2c);
    if (pvVar34 == (void *)0x0) goto LAB_0010d5d7;
    if (*(int *)(param_2 + 0x2c) != 0) goto LAB_0010da00;
LAB_0010d5fd:
    uVar40 = *(uint *)(param_2 + 0x28);
    if (uVar40 == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      local_c0 = (undefined8 *)0x0;
      goto LAB_0010d9ac;
    }
    uVar32 = (ulong)(uVar40 + 1);
    *(undefined4 *)(param_2 + 0x2c) = 0;
    uVar31 = *(uint *)(hash_table_size_primes + (ulong)uVar40 * 4);
    if (uVar40 + 1 < 2) {
      uVar32 = 2;
    }
    uVar40 = *(uint *)(hash_table_size_primes + uVar32 * 4);
    uVar41 = (ulong)uVar40;
    *(int *)(param_2 + 0x28) = (int)uVar32;
    pvVar34 = *(void **)(param_2 + 8);
    uVar32 = uVar41 * 4;
    uVar45 = uVar41 * 8;
    pvVar4 = *(void **)(param_2 + 0x10);
    uVar33 = Memory::alloc_static(uVar32,false);
    *(undefined8 *)(param_2 + 0x10) = uVar33;
    __s_00 = (void *)Memory::alloc_static(uVar45,false);
    *(void **)(param_2 + 8) = __s_00;
    if (uVar40 != 0) {
      __s = *(void **)(param_2 + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar45)) && (__s_00 < (void *)((long)__s + uVar32))) {
        uVar32 = 0;
        do {
          *(undefined4 *)((long)__s + uVar32 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar32 * 8) = 0;
          uVar32 = uVar32 + 1;
        } while (uVar32 != uVar41);
      }
      else {
        memset(__s,0,uVar32);
        memset(__s_00,0,uVar45);
      }
    }
    if (uVar31 != 0) {
      uVar32 = 0;
      do {
        uVar40 = *(uint *)((long)pvVar4 + uVar32 * 4);
        if (uVar40 != 0) {
          lVar5 = *(long *)(param_2 + 0x10);
          uVar43 = 0;
          uVar36 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
          uVar45 = CONCAT44(0,uVar36);
          lVar46 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (ulong)uVar40 * lVar46;
          auVar18._8_8_ = 0;
          auVar18._0_8_ = uVar45;
          lVar38 = SUB168(auVar6 * auVar18,8);
          puVar1 = (uint *)(lVar5 + lVar38 * 4);
          iVar35 = SUB164(auVar6 * auVar18,8);
          uVar44 = *puVar1;
          uVar33 = *(undefined8 *)((long)pvVar34 + uVar32 * 8);
          while (uVar44 != 0) {
            auVar7._8_8_ = 0;
            auVar7._0_8_ = (ulong)uVar44 * lVar46;
            auVar19._8_8_ = 0;
            auVar19._0_8_ = uVar45;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = (ulong)((uVar36 + iVar35) - SUB164(auVar7 * auVar19,8)) * lVar46;
            auVar20._8_8_ = 0;
            auVar20._0_8_ = uVar45;
            uVar47 = SUB164(auVar8 * auVar20,8);
            uVar42 = uVar33;
            if (uVar47 < uVar43) {
              *puVar1 = uVar40;
              puVar2 = (undefined8 *)((long)__s_00 + lVar38 * 8);
              uVar42 = *puVar2;
              *puVar2 = uVar33;
              uVar40 = uVar44;
              uVar43 = uVar47;
            }
            uVar43 = uVar43 + 1;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = (ulong)(iVar35 + 1) * lVar46;
            auVar21._8_8_ = 0;
            auVar21._0_8_ = uVar45;
            lVar38 = SUB168(auVar9 * auVar21,8);
            puVar1 = (uint *)(lVar5 + lVar38 * 4);
            iVar35 = SUB164(auVar9 * auVar21,8);
            uVar33 = uVar42;
            uVar44 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar38 * 8) = uVar33;
          *puVar1 = uVar40;
          *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 1;
        }
        uVar32 = uVar32 + 1;
      } while (uVar31 != uVar32);
      Memory::free_static(pvVar34,false);
      Memory::free_static(pvVar4,false);
    }
  }
  else {
LAB_0010d5c8:
    iVar35 = *(int *)(param_2 + 0x2c);
    if (iVar35 != 0) {
LAB_0010da00:
      uVar31 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
      uVar32 = CONCAT44(0,uVar31);
      lVar5 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
      uVar44 = String::hash();
      lVar46 = *(long *)(param_2 + 0x10);
      uVar36 = 1;
      if (uVar44 != 0) {
        uVar36 = uVar44;
      }
      uVar47 = 0;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = (ulong)uVar36 * lVar5;
      auVar26._8_8_ = 0;
      auVar26._0_8_ = uVar32;
      lVar38 = SUB168(auVar14 * auVar26,8);
      uVar44 = *(uint *)(lVar46 + lVar38 * 4);
      uVar43 = SUB164(auVar14 * auVar26,8);
      if (uVar44 != 0) {
        do {
          if (uVar36 == uVar44) {
            cVar30 = String::operator==((String *)
                                        (*(long *)(*(long *)(param_2 + 8) + lVar38 * 8) + 0x10),
                                        pSVar37);
            if (cVar30 != '\0') {
              Variant::operator=((Variant *)
                                 (*(long *)(*(long *)(param_2 + 8) + (ulong)uVar43 * 8) + 0x18),
                                 in_RCX);
              local_c0 = *(undefined8 **)(*(long *)(param_2 + 8) + (ulong)uVar43 * 8);
              goto LAB_0010d9ac;
            }
            lVar46 = *(long *)(param_2 + 0x10);
          }
          uVar47 = uVar47 + 1;
          auVar15._8_8_ = 0;
          auVar15._0_8_ = (ulong)(uVar43 + 1) * lVar5;
          auVar27._8_8_ = 0;
          auVar27._0_8_ = uVar32;
          lVar38 = SUB168(auVar15 * auVar27,8);
          uVar44 = *(uint *)(lVar46 + lVar38 * 4);
          uVar43 = SUB164(auVar15 * auVar27,8);
        } while ((uVar44 != 0) &&
                (auVar16._8_8_ = 0, auVar16._0_8_ = (ulong)uVar44 * lVar5, auVar28._8_8_ = 0,
                auVar28._0_8_ = uVar32, auVar17._8_8_ = 0,
                auVar17._0_8_ = (ulong)((uVar31 + uVar43) - SUB164(auVar16 * auVar28,8)) * lVar5,
                auVar29._8_8_ = 0, auVar29._0_8_ = uVar32, uVar47 <= SUB164(auVar17 * auVar29,8)));
      }
      iVar35 = *(int *)(param_2 + 0x2c);
    }
LAB_0010d5d7:
    if ((float)uVar40 * __LC20 < (float)(iVar35 + 1)) goto LAB_0010d5fd;
  }
  local_68 = 0;
  if (*(long *)pSVar37 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)pSVar37);
  }
  Variant::Variant((Variant *)local_60,in_RCX);
  local_c0 = (undefined8 *)operator_new(0x30,"");
  local_c0[2] = 0;
  *local_c0 = 0;
  local_c0[1] = 0;
  if (local_68 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(local_c0 + 2),(CowData *)&local_68);
  }
  Variant::Variant((Variant *)(local_c0 + 3),(Variant *)local_60);
  if (Variant::needs_deinit[local_60[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  if (*(undefined8 **)(param_2 + 0x20) == (undefined8 *)0x0) {
    *(undefined8 **)(param_2 + 0x18) = local_c0;
    *(undefined8 **)(param_2 + 0x20) = local_c0;
  }
  else if (in_R8B == '\0') {
    **(undefined8 **)(param_2 + 0x20) = local_c0;
    local_c0[1] = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 **)(param_2 + 0x20) = local_c0;
  }
  else {
    *(undefined8 **)(*(long *)(param_2 + 0x18) + 8) = local_c0;
    *local_c0 = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 **)(param_2 + 0x18) = local_c0;
  }
  uVar31 = String::hash();
  lVar5 = *(long *)(param_2 + 0x10);
  uVar40 = 1;
  if (uVar31 != 0) {
    uVar40 = uVar31;
  }
  uVar44 = 0;
  uVar31 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  uVar32 = CONCAT44(0,uVar31);
  lVar46 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
  auVar10._8_8_ = 0;
  auVar10._0_8_ = (ulong)uVar40 * lVar46;
  auVar22._8_8_ = 0;
  auVar22._0_8_ = uVar32;
  lVar39 = SUB168(auVar10 * auVar22,8);
  lVar38 = *(long *)(param_2 + 8);
  puVar1 = (uint *)(lVar5 + lVar39 * 4);
  iVar35 = SUB164(auVar10 * auVar22,8);
  uVar36 = *puVar1;
  puVar2 = local_c0;
  while (uVar36 != 0) {
    auVar11._8_8_ = 0;
    auVar11._0_8_ = (ulong)uVar36 * lVar46;
    auVar23._8_8_ = 0;
    auVar23._0_8_ = uVar32;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = (ulong)((uVar31 + iVar35) - SUB164(auVar11 * auVar23,8)) * lVar46;
    auVar24._8_8_ = 0;
    auVar24._0_8_ = uVar32;
    uVar43 = SUB164(auVar12 * auVar24,8);
    puVar48 = puVar2;
    if (uVar43 < uVar44) {
      *puVar1 = uVar40;
      puVar3 = (undefined8 *)(lVar38 + lVar39 * 8);
      puVar48 = (undefined8 *)*puVar3;
      *puVar3 = puVar2;
      uVar44 = uVar43;
      uVar40 = uVar36;
    }
    uVar44 = uVar44 + 1;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = (ulong)(iVar35 + 1) * lVar46;
    auVar25._8_8_ = 0;
    auVar25._0_8_ = uVar32;
    lVar39 = SUB168(auVar13 * auVar25,8);
    puVar1 = (uint *)(lVar5 + lVar39 * 4);
    iVar35 = SUB164(auVar13 * auVar25,8);
    puVar2 = puVar48;
    uVar36 = *puVar1;
  }
  *(undefined8 **)(lVar38 + lVar39 * 8) = puVar2;
  *puVar1 = uVar40;
  *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 1;
LAB_0010d9ac:
  *(undefined8 **)param_1 = local_c0;
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
        if (pvVar5 == (void *)0x0) goto LAB_0010dde4;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_0010dde4:
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
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



/* CallableCustomMethodPointer<ProjectSettings, Error>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<ProjectSettings,Error>::call
          (CallableCustomMethodPointer<ProjectSettings,Error> *this,Variant **param_1,int param_2,
          Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  uint uVar5;
  ulong *puVar6;
  code *pcVar7;
  long in_FS_OFFSET;
  bool bVar8;
  CowData<char32_t> local_70 [8];
  CowData<char32_t> local_68 [8];
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar5 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar5 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar3 = (ulong)local_58 >> 8;
      local_58 = (char *)(uVar3 << 8);
      LOCK();
      bVar8 = (char)ObjectDB::spin_lock == '\0';
      if (bVar8) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar8) break;
      local_58 = (char *)(uVar3 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar6 = (ulong *)((ulong)uVar5 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) == (*puVar6 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar6[1] != 0) {
        lVar1 = *(long *)(this + 0x28);
        pcVar7 = *(code **)(this + 0x38);
        lVar2 = *(long *)(this + 0x40);
        if (param_2 == 0) {
          *(undefined4 *)param_4 = 0;
          if (((ulong)pcVar7 & 1) != 0) {
            pcVar7 = *(code **)(pcVar7 + *(long *)(lVar1 + lVar2) + -1);
          }
          iVar4 = (*pcVar7)();
          Variant::Variant((Variant *)local_48,iVar4);
          if (Variant::needs_deinit[*(int *)param_3] != '\0') {
            Variant::_clear_internal();
          }
          *(undefined4 *)param_3 = local_48[0];
          *(undefined8 *)(param_3 + 8) = local_40;
          *(undefined8 *)(param_3 + 0x10) = uStack_38;
        }
        else {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 0;
        }
        goto LAB_0010e11c;
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
  local_60 = 0;
  local_58 = "\', can\'t call method.";
  local_50 = 0x15;
  String::parse_latin1((StrRange *)&local_60);
  uitos((ulong)local_70);
  operator+((char *)local_68,(String *)"Invalid Object id \'");
  String::operator+((String *)&local_58,(String *)local_68);
  _err_print_error(&_LC124,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (String *)&local_58,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref(local_68);
  CowData<char32_t>::_unref(local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
LAB_0010e11c:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<ProjectSettingsEditor, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<ProjectSettingsEditor,void>::call
          (CallableCustomMethodPointer<ProjectSettingsEditor,void> *this,Variant **param_1,
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
      goto LAB_0010e3ff;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_0010e3ff;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010e3d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_0010e4c1;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0010e3ff:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC124,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0010e4c1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<ProjectSettingsEditor, void, bool>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<ProjectSettingsEditor,void,bool>::call
          (CallableCustomMethodPointer<ProjectSettingsEditor,void,bool> *this,Variant **param_1,
          int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  char cVar5;
  uint uVar6;
  ulong *puVar7;
  code *UNRECOVERED_JUMPTABLE;
  long in_FS_OFFSET;
  bool bVar8;
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar6 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar3 = (ulong)local_48 >> 8;
      local_48 = (char *)(uVar3 << 8);
      LOCK();
      bVar8 = (char)ObjectDB::spin_lock == '\0';
      if (bVar8) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar8) break;
      local_48 = (char *)(uVar3 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar7 = (ulong *)((ulong)uVar6 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar7 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0010e689;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar7[1] == 0) goto LAB_0010e689;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if ((uint)param_2 < 2) {
      if (param_2 != 0) {
        *(undefined4 *)param_4 = 0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,1);
        uVar4 = _LC125;
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        bVar8 = Variant::operator_cast_to_bool(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010e638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),bVar8);
          return;
        }
        goto LAB_0010e74b;
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
LAB_0010e689:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC124,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0010e74b:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<AcceptDialog, void, bool>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<AcceptDialog,void,bool>::call
          (CallableCustomMethodPointer<AcceptDialog,void,bool> *this,Variant **param_1,int param_2,
          Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  char cVar5;
  uint uVar6;
  ulong *puVar7;
  code *UNRECOVERED_JUMPTABLE;
  long in_FS_OFFSET;
  bool bVar8;
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar6 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar3 = (ulong)local_48 >> 8;
      local_48 = (char *)(uVar3 << 8);
      LOCK();
      bVar8 = (char)ObjectDB::spin_lock == '\0';
      if (bVar8) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar8) break;
      local_48 = (char *)(uVar3 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar7 = (ulong *)((ulong)uVar6 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar7 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0010e909;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar7[1] == 0) goto LAB_0010e909;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if ((uint)param_2 < 2) {
      if (param_2 != 0) {
        *(undefined4 *)param_4 = 0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,1);
        uVar4 = _LC125;
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        bVar8 = Variant::operator_cast_to_bool(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010e8b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),bVar8);
          return;
        }
        goto LAB_0010e9cb;
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
LAB_0010e909:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC124,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0010e9cb:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<ProjectSettingsEditor, void, int>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<ProjectSettingsEditor,void,int>::call
          (CallableCustomMethodPointer<ProjectSettingsEditor,void,int> *this,Variant **param_1,
          int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  ulong *puVar8;
  code *UNRECOVERED_JUMPTABLE;
  long in_FS_OFFSET;
  bool bVar9;
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar7 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar7 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar3 = (ulong)local_48 >> 8;
      local_48 = (char *)(uVar3 << 8);
      LOCK();
      bVar9 = (char)ObjectDB::spin_lock == '\0';
      if (bVar9) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar9) break;
      local_48 = (char *)(uVar3 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar8 = (ulong *)((ulong)uVar7 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar8 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0010eb88;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar8[1] == 0) goto LAB_0010eb88;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if ((uint)param_2 < 2) {
      if (param_2 != 0) {
        *(undefined4 *)param_4 = 0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,2);
        uVar4 = _LC126;
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        iVar6 = Variant::operator_cast_to_int(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010eb37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),iVar6);
          return;
        }
        goto LAB_0010ec4a;
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
LAB_0010eb88:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC124,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0010ec4a:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<ProjectSettingsEditor, void, String const&>::call(Variant const**,
   int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<ProjectSettingsEditor,void,String_const&>::call
          (CallableCustomMethodPointer<ProjectSettingsEditor,void,String_const&> *this,
          Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  char cVar5;
  uint uVar6;
  ulong *puVar7;
  code *pcVar8;
  long in_FS_OFFSET;
  bool bVar9;
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar6 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar3 = (ulong)local_48 >> 8;
      local_48 = (char *)(uVar3 << 8);
      LOCK();
      bVar9 = (char)ObjectDB::spin_lock == '\0';
      if (bVar9) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar9) break;
      local_48 = (char *)(uVar3 << 8);
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
        if ((uint)param_2 < 2) {
          if (param_2 == 0) {
            *(undefined4 *)param_4 = 4;
            *(undefined4 *)(param_4 + 8) = 1;
          }
          else {
            *(undefined4 *)param_4 = 0;
            if (((ulong)pcVar8 & 1) != 0) {
              pcVar8 = *(code **)(pcVar8 + *(long *)(lVar1 + lVar2) + -1);
            }
            cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,4);
            uVar4 = _LC127;
            if (cVar5 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar4;
            }
            Variant::operator_cast_to_String((Variant *)&local_48);
            (*pcVar8)((long *)(lVar1 + lVar2),(Variant *)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
          }
        }
        else {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 1;
        }
        goto LAB_0010ed1e;
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
  local_48 = "\', can\'t call method.";
  local_40 = 0x15;
  String::parse_latin1((StrRange *)&local_50);
  uitos((ulong)local_60);
  operator+((char *)local_58,(String *)"Invalid Object id \'");
  String::operator+((String *)&local_48,(String *)local_58);
  _err_print_error(&_LC124,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (Variant *)&local_48,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref(local_58);
  CowData<char32_t>::_unref(local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
LAB_0010ed1e:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<ProjectSettingsEditor, void, String const&, Dictionary
   const&>::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<ProjectSettingsEditor,void,String_const&,Dictionary_const&>::call
          (CallableCustomMethodPointer<ProjectSettingsEditor,void,String_const&,Dictionary_const&>
           *this,Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  char cVar5;
  uint uVar6;
  ulong *puVar7;
  code *pcVar8;
  long in_FS_OFFSET;
  bool bVar9;
  CowData<char32_t> local_70 [8];
  CowData<char32_t> local_68 [8];
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar6 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar3 = (ulong)local_58 >> 8;
      local_58 = (char *)(uVar3 << 8);
      LOCK();
      bVar9 = (char)ObjectDB::spin_lock == '\0';
      if (bVar9) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar9) break;
      local_58 = (char *)(uVar3 << 8);
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
            cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[1],0x1b);
            uVar4 = _LC128;
            if (cVar5 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar4;
            }
            Variant::operator_cast_to_Dictionary((Variant *)&local_60);
            cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,4);
            uVar4 = _LC127;
            if (cVar5 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar4;
            }
            Variant::operator_cast_to_String((Variant *)&local_58);
            (*pcVar8)((long *)(lVar1 + lVar2),(Variant *)&local_58,(Variant *)&local_60);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
            Dictionary::~Dictionary((Dictionary *)&local_60);
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
        goto LAB_0010ef85;
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
  local_60 = 0;
  local_58 = "\', can\'t call method.";
  local_50 = 0x15;
  String::parse_latin1((StrRange *)&local_60);
  uitos((ulong)local_70);
  operator+((char *)local_68,(String *)"Invalid Object id \'");
  String::operator+((String *)&local_58,(String *)local_68);
  _err_print_error(&_LC124,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (Variant *)&local_58,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref(local_68);
  CowData<char32_t>::_unref(local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
LAB_0010ef85:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<ProjectSettingsEditor, void, String const&, String
   const&>::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<ProjectSettingsEditor,void,String_const&,String_const&>::call
          (CallableCustomMethodPointer<ProjectSettingsEditor,void,String_const&,String_const&> *this
          ,Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  char cVar5;
  uint uVar6;
  ulong *puVar7;
  code *pcVar8;
  long in_FS_OFFSET;
  bool bVar9;
  CowData<char32_t> local_70 [8];
  CowData<char32_t> local_68 [8];
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar6 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar3 = (ulong)local_58 >> 8;
      local_58 = (char *)(uVar3 << 8);
      LOCK();
      bVar9 = (char)ObjectDB::spin_lock == '\0';
      if (bVar9) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar9) break;
      local_58 = (char *)(uVar3 << 8);
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
            cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[1],4);
            uVar4 = _LC129;
            if (cVar5 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar4;
            }
            Variant::operator_cast_to_String((Variant *)&local_60);
            cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,4);
            uVar4 = _LC127;
            if (cVar5 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar4;
            }
            Variant::operator_cast_to_String((Variant *)&local_58);
            (*pcVar8)((long *)(lVar1 + lVar2),(Variant *)&local_58,(Variant *)&local_60);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
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
        goto LAB_0010f235;
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
  local_60 = 0;
  local_58 = "\', can\'t call method.";
  local_50 = 0x15;
  String::parse_latin1((StrRange *)&local_60);
  uitos((ulong)local_70);
  operator+((char *)local_68,(String *)"Invalid Object id \'");
  String::operator+((String *)&local_58,(String *)local_68);
  _err_print_error(&_LC124,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (Variant *)&local_58,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref(local_68);
  CowData<char32_t>::_unref(local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
LAB_0010f235:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<ProjectSettingsEditor, void, String const&, String const&,
   bool>::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<ProjectSettingsEditor,void,String_const&,String_const&,bool>::call
          (CallableCustomMethodPointer<ProjectSettingsEditor,void,String_const&,String_const&,bool>
           *this,Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  char cVar5;
  uint uVar6;
  ulong *puVar7;
  code *pcVar8;
  long in_FS_OFFSET;
  bool bVar9;
  CowData<char32_t> local_70 [8];
  CowData<char32_t> local_68 [8];
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar6 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar3 = (ulong)local_58 >> 8;
      local_58 = (char *)(uVar3 << 8);
      LOCK();
      bVar9 = (char)ObjectDB::spin_lock == '\0';
      if (bVar9) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar9) break;
      local_58 = (char *)(uVar3 << 8);
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
        if ((uint)param_2 < 4) {
          if (param_2 == 3) {
            *(undefined4 *)param_4 = 0;
            if (((ulong)pcVar8 & 1) != 0) {
              pcVar8 = *(code **)(pcVar8 + *(long *)(lVar1 + lVar2) + -1);
            }
            cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[2],1);
            uVar4 = _LC130;
            if (cVar5 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar4;
            }
            bVar9 = Variant::operator_cast_to_bool(param_1[2]);
            cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[1],4);
            uVar4 = _LC129;
            if (cVar5 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar4;
            }
            Variant::operator_cast_to_String((Variant *)&local_60);
            cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,4);
            uVar4 = _LC127;
            if (cVar5 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar4;
            }
            Variant::operator_cast_to_String((Variant *)&local_58);
            (*pcVar8)((long *)(lVar1 + lVar2),(Variant *)&local_58,(Variant *)&local_60,bVar9);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          }
          else {
            *(undefined4 *)param_4 = 4;
            *(undefined4 *)(param_4 + 8) = 3;
          }
        }
        else {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 3;
        }
        goto LAB_0010f4e4;
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
  local_60 = 0;
  local_58 = "\', can\'t call method.";
  local_50 = 0x15;
  String::parse_latin1((StrRange *)&local_60);
  uitos((ulong)local_70);
  operator+((char *)local_68,(String *)"Invalid Object id \'");
  String::operator+((String *)&local_58,(String *)local_68);
  _err_print_error(&_LC124,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (Variant *)&local_58,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref(local_68);
  CowData<char32_t>::_unref(local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
LAB_0010f4e4:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
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
    if (cVar5 != '\0') goto LAB_0010f82b;
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
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar5 != '\0') goto LAB_0010f82b;
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
        if (cVar5 != '\0') goto LAB_0010f82b;
      }
      cVar5 = String::operator==(param_1,"CanvasItem");
      if (cVar5 == '\0') {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar6 = Node::is_class((Node *)this,param_1);
          return uVar6;
        }
        goto LAB_0010f9ee;
      }
    }
  }
LAB_0010f82b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010f9ee:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VBoxContainer::is_class(String const&) const */

undefined8 __thiscall VBoxContainer::is_class(VBoxContainer *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_0010fafb;
  }
  cVar5 = String::operator==(param_1,"VBoxContainer");
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
      if (cVar5 != '\0') goto LAB_0010fafb;
    }
    cVar5 = String::operator==(param_1,"BoxContainer");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Container::is_class((Container *)this,param_1);
        return uVar6;
      }
      goto LAB_0010fc38;
    }
  }
LAB_0010fafb:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010fc38:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
    if (cVar5 != '\0') goto LAB_0010fd3b;
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
      if (cVar5 != '\0') goto LAB_0010fd3b;
    }
    cVar5 = String::operator==(param_1,"BoxContainer");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Container::is_class((Container *)this,param_1);
        return uVar6;
      }
      goto LAB_0010fe78;
    }
  }
LAB_0010fd3b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010fe78:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VBoxContainer::_initialize_classv() */

void VBoxContainer::_initialize_classv(void)

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
              if ((code *)PTR__bind_methods_0011a058 != Node::_bind_methods) {
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
            if ((code *)PTR__bind_compatibility_methods_0011a048 !=
                Object::_bind_compatibility_methods) {
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
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        if ((StringName::configured != '\0') && (local_60 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
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
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      if ((code *)PTR__bind_methods_0011a050 != Container::_bind_methods) {
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
              if ((code *)PTR__bind_methods_0011a058 != Node::_bind_methods) {
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
            if ((code *)PTR__bind_compatibility_methods_0011a048 !=
                Object::_bind_compatibility_methods) {
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
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        if ((StringName::configured != '\0') && (local_60 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
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
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      if ((code *)PTR__bind_methods_0011a050 != Container::_bind_methods) {
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
  undefined *local_78;
  long local_70;
  long local_68;
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  pLVar5 = (List *)CONCAT71(in_register_00000031,param_2);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = &_LC8;
  local_88 = 0;
  local_90 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = &_LC8;
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
      lVar2 = *(long *)pLVar5;
      local_68 = local_80;
      goto joined_r0x00110dcf;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar5;
joined_r0x00110dcf:
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
  StringName::StringName((StringName *)&local_78,"Node",false);
  ClassDB::get_property_list((StringName *)&local_78,pLVar5,true,(Object *)param_1);
  if ((StringName::configured != '\0') && (local_78 != (undefined *)0x0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
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
      goto LAB_00111101;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00111101:
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
      goto LAB_001113b1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001113b1:
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
  if ((code *)PTR__get_property_list_0011a060 != Object::_get_property_list) {
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
      goto LAB_00111681;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00111681:
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
  if ((code *)PTR__get_property_list_0011a068 != Object::_get_property_list) {
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
      goto LAB_00111951;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00111951:
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



/* ProjectSettingsEditor::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
ProjectSettingsEditor::_get_property_listv(ProjectSettingsEditor *this,List *param_1,bool param_2)

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
  local_78 = "ProjectSettingsEditor";
  local_70 = 0x15;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "ProjectSettingsEditor";
  local_98 = 0;
  local_70 = 0x15;
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
      goto LAB_00111c01;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00111c01:
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
  StringName::StringName((StringName *)&local_78,"ProjectSettingsEditor",false);
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
      goto LAB_00111eb1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00111eb1:
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
  if ((code *)PTR__get_property_list_0011a070 != CanvasItem::_get_property_list) {
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
      goto LAB_00112181;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00112181:
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
      goto LAB_00112431;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00112431:
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
      goto LAB_001126e1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001126e1:
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
      goto LAB_00112991;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00112991:
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



/* MethodBind* create_method_bind<ProjectSettingsEditor>(void (ProjectSettingsEditor::*)()) */

MethodBind * create_method_bind<ProjectSettingsEditor>(_func_void *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_00115838;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "ProjectSettingsEditor";
  local_30 = 0x15;
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



/* ProjectSettingsEditor::_bind_methods() [clone .cold] */

void ProjectSettingsEditor::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<ActionMapEditor::ActionInfo>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<ActionMapEditor::ActionInfo>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* ProjectSettingsEditor::_initialize_classv() */

void ProjectSettingsEditor::_initialize_classv(void)

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
            if ((code *)PTR__bind_methods_0011a058 != Node::_bind_methods) {
              Node::_bind_methods();
            }
            Node::initialize_class()::initialized = '\x01';
          }
          local_58 = "Node";
          local_68 = 0;
          local_50 = 4;
          String::parse_latin1((StrRange *)&local_68);
          StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
          local_58 = "Viewport";
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
          Viewport::_bind_methods();
          Viewport::initialize_class()::initialized = '\x01';
        }
        local_68 = 0;
        local_58 = "Viewport";
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
      local_58 = "Window";
      local_68 = 0;
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
      if ((code *)PTR__bind_methods_0011a078 != Window::_bind_methods) {
        AcceptDialog::_bind_methods();
      }
      if ((code *)PTR__bind_compatibility_methods_0011a080 != Object::_bind_compatibility_methods) {
        AcceptDialog::_bind_compatibility_methods();
      }
      AcceptDialog::initialize_class()::initialized = '\x01';
    }
    local_58 = "AcceptDialog";
    local_68 = 0;
    local_50 = 0xc;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "ProjectSettingsEditor";
    local_70 = 0;
    local_50 = 0x15;
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



/* CowData<ActionMapEditor::ActionInfo>::_unref() */

void __thiscall
CowData<ActionMapEditor::ActionInfo>::_unref(CowData<ActionMapEditor::ActionInfo> *this)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  Object *pOVar5;
  code *pcVar6;
  char cVar7;
  long *plVar8;
  long lVar9;
  
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
        lVar9 = 0;
        plVar8 = plVar1;
        do {
          if (plVar8[4] != 0) {
            cVar7 = RefCounted::unreference();
            if (cVar7 != '\0') {
              pOVar5 = (Object *)plVar8[4];
              cVar7 = predelete_handler(pOVar5);
              if (cVar7 != '\0') {
                (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
                Memory::free_static(pOVar5,false);
              }
            }
          }
          Dictionary::~Dictionary((Dictionary *)(plVar8 + 3));
          Dictionary::~Dictionary((Dictionary *)(plVar8 + 1));
          if (*plVar8 != 0) {
            LOCK();
            plVar2 = (long *)(*plVar8 + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = *plVar8;
              *plVar8 = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          lVar9 = lVar9 + 1;
          plVar8 = plVar8 + 6;
        } while (lVar3 != lVar9);
      }
      Memory::free_static(plVar1 + -2,false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar6 = (code *)invalidInstructionException();
    (*pcVar6)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* CowData<ActionMapEditor::ActionInfo>::_realloc(long) */

undefined8 __thiscall
CowData<ActionMapEditor::ActionInfo>::_realloc
          (CowData<ActionMapEditor::ActionInfo> *this,long param_1)

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
/* Error CowData<ActionMapEditor::ActionInfo>::resize<false>(long) */

undefined8 __thiscall
CowData<ActionMapEditor::ActionInfo>::resize<false>
          (CowData<ActionMapEditor::ActionInfo> *this,long param_1)

{
  Object *pOVar1;
  code *pcVar2;
  char cVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  CowData<char32_t> *this_00;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  
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
    lVar11 = 0;
    lVar8 = 0;
  }
  else {
    lVar11 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar11) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar8 = lVar11 * 0x30;
    if (lVar8 != 0) {
      uVar9 = lVar8 - 1U | lVar8 - 1U >> 1;
      uVar9 = uVar9 | uVar9 >> 2;
      uVar9 = uVar9 | uVar9 >> 4;
      uVar9 = uVar9 | uVar9 >> 8;
      uVar9 = uVar9 | uVar9 >> 0x10;
      lVar8 = (uVar9 | uVar9 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x30 == 0) {
LAB_00113728:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar9 = param_1 * 0x30 - 1;
  uVar9 = uVar9 >> 1 | uVar9;
  uVar9 = uVar9 | uVar9 >> 2;
  uVar9 = uVar9 | uVar9 >> 4;
  uVar9 = uVar9 | uVar9 >> 8;
  uVar9 = uVar9 | uVar9 >> 0x10;
  uVar9 = uVar9 | uVar9 >> 0x20;
  lVar4 = uVar9 + 1;
  if (lVar4 == 0) goto LAB_00113728;
  uVar10 = param_1;
  if (param_1 <= lVar11) {
    while (puVar7 = *(undefined8 **)this, puVar7 != (undefined8 *)0x0) {
      if ((ulong)puVar7[-1] <= uVar10) {
        if (lVar4 == lVar8) goto LAB_001135ba;
        uVar6 = _realloc(this,lVar4);
        if ((int)uVar6 != 0) {
          return uVar6;
        }
        puVar7 = *(undefined8 **)this;
        goto LAB_001135b1;
      }
      this_00 = (CowData<char32_t> *)(puVar7 + uVar10 * 6);
      if ((*(long *)(this_00 + 0x20) != 0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) {
        pOVar1 = *(Object **)(this_00 + 0x20);
        cVar3 = predelete_handler(pOVar1);
        if (cVar3 != '\0') {
          (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
          Memory::free_static(pOVar1,false);
        }
      }
      Dictionary::~Dictionary((Dictionary *)(this_00 + 0x18));
      Dictionary::~Dictionary((Dictionary *)(this_00 + 8));
      CowData<char32_t>::_unref(this_00);
      uVar10 = uVar10 + 1;
    }
    goto LAB_0011378a;
  }
  if (lVar4 == lVar8) {
LAB_00113675:
    puVar7 = *(undefined8 **)this;
    if (puVar7 == (undefined8 *)0x0) {
LAB_0011378a:
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar11 = puVar7[-1];
    if (param_1 <= lVar11) goto LAB_001135ba;
  }
  else {
    if (lVar11 != 0) {
      uVar6 = _realloc(this,lVar4);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      goto LAB_00113675;
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
    lVar11 = 0;
  }
  do {
    lVar8 = lVar11 + 1;
    puVar7 = puVar7 + lVar11 * 6;
    *puVar7 = 0;
    Dictionary::Dictionary((Dictionary *)(puVar7 + 1));
    *(undefined1 *)(puVar7 + 2) = 0;
    Dictionary::Dictionary((Dictionary *)(puVar7 + 3));
    puVar7[4] = 0;
    *(undefined1 *)(puVar7 + 5) = 1;
    puVar7 = *(undefined8 **)this;
    lVar11 = lVar8;
  } while (param_1 != lVar8);
LAB_001135b1:
  if (puVar7 == (undefined8 *)0x0) {
    _DAT_00000000 = 0;
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
LAB_001135ba:
  puVar7[-1] = param_1;
  return 0;
}



/* WARNING: Removing unreachable block (ram,0x00113830) */
/* ProjectSettingsEditor::_notificationv(int, bool) */

void __thiscall
ProjectSettingsEditor::_notificationv(ProjectSettingsEditor *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    _notification(this,param_1);
    if ((code *)PTR__notification_0011a088 != Window::_notification) {
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
  if ((code *)PTR__notification_0011a088 != Window::_notification) {
    AcceptDialog::_notification(iVar1);
  }
  _notification(this,param_1);
  return;
}



/* WARNING: Removing unreachable block (ram,0x00113a48) */
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



/* MethodBindT<>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
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
      _err_print_error(&_LC124,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00113d80;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
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
      (*(code *)pVVar2)();
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
LAB_00113d80:
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
      goto LAB_0011418f;
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
                    /* WARNING: Could not recover jumptable at 0x00114036. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0011418f:
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
      goto LAB_0011434f;
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
                    /* WARNING: Could not recover jumptable at 0x001141f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0011434f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProjectSettingsEditor::singleton */

void ProjectSettingsEditor::_GLOBAL__sub_I_singleton(void)

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
  if (TabBar::base_property_helper == '\0') {
    TabBar::base_property_helper = '\x01';
    TabBar::base_property_helper._64_8_ = 0;
    TabBar::base_property_helper._0_16_ = (undefined1  [16])0x0;
    TabBar::base_property_helper._24_16_ = (undefined1  [16])0x0;
    TabBar::base_property_helper._40_16_ = (undefined1  [16])0x0;
    TabBar::base_property_helper._56_8_ = 2;
    __cxa_atexit(PropertyListHelper::~PropertyListHelper,TabBar::base_property_helper,&__dso_handle)
    ;
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
/* List<String, DefaultAllocator>::~List() */

void __thiscall List<String,DefaultAllocator>::~List(List<String,DefaultAllocator> *this)

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
/* VBoxContainer::~VBoxContainer() */

void __thiscall VBoxContainer::~VBoxContainer(VBoxContainer *this)

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
/* ProjectSettingsEditor::~ProjectSettingsEditor() */

void __thiscall ProjectSettingsEditor::~ProjectSettingsEditor(ProjectSettingsEditor *this)

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
/* CallableCustomMethodPointer<ProjectSettingsEditor, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ProjectSettingsEditor,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ProjectSettingsEditor,void,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<ProjectSettingsEditor, void, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ProjectSettingsEditor,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ProjectSettingsEditor,void,bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<ProjectSettingsEditor, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ProjectSettingsEditor,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ProjectSettingsEditor,void,String_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<ProjectSettingsEditor, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ProjectSettingsEditor,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ProjectSettingsEditor,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<ProjectSettingsEditor, void, String const&, Dictionary
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ProjectSettingsEditor,void,String_const&,Dictionary_const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ProjectSettingsEditor,void,String_const&,Dictionary_const&>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<ProjectSettingsEditor, void, String const&, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ProjectSettingsEditor,void,String_const&,String_const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ProjectSettingsEditor,void,String_const&,String_const&> *this
          )

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<ProjectSettingsEditor, void, String const&, String const&,
   bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ProjectSettingsEditor,void,String_const&,String_const&,bool>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ProjectSettingsEditor,void,String_const&,String_const&,bool>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<AcceptDialog, void, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AcceptDialog,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AcceptDialog,void,bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<ProjectSettings, Error>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ProjectSettings,Error>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ProjectSettings,Error> *this)

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




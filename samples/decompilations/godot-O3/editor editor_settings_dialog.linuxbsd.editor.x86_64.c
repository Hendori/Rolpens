
/* EditorSettingsDialog::_settings_changed() */

void EditorSettingsDialog::_settings_changed(void)

{
  Timer::start(_LC0);
  return;
}



/* EditorSettingsDialog::_settings_save() */

void EditorSettingsDialog::_settings_save(void)

{
  EditorSettings::get_singleton();
  EditorSettings::notify_changes();
  EditorSettings::get_singleton();
  EditorSettings::save();
  return;
}



/* EditorSettingsDialog::_undo_redo_callback(void*, String const&) */

void EditorSettingsDialog::_undo_redo_callback(void *param_1,String *param_2)

{
  EditorLog::add_message(*(undefined8 *)(EditorNode::singleton + 0x5d0),param_2,4);
  return;
}



/* EditorSettingsDialog::_advanced_toggled(bool) */

void __thiscall EditorSettingsDialog::_advanced_toggled(EditorSettingsDialog *this,bool param_1)

{
  StringName *pSVar1;
  long in_FS_OFFSET;
  long local_40;
  int local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  pSVar1 = (StringName *)EditorSettings::get_singleton();
  Variant::Variant((Variant *)local_38,param_1);
  StringName::StringName((StringName *)&local_40,"_editor_settings_advanced_mode",false);
  Object::set(pSVar1,(Variant *)&local_40,(bool *)local_38);
  if ((StringName::configured != '\0') && (local_40 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_38[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorSettingsDialog::_editor_restart() */

void EditorSettingsDialog::_editor_restart(void)

{
  EditorNode::save_all_scenes();
  EditorNode::restart_editor(SUB81(EditorNode::singleton,0));
  return;
}



/* EditorSettingsDialog::_editor_restart_request() */

void EditorSettingsDialog::_editor_restart_request(void)

{
  CanvasItem::show();
  return;
}



/* EditorSettingsDialog::_editor_restart_close() */

void EditorSettingsDialog::_editor_restart_close(void)

{
  CanvasItem::hide();
  return;
}



/* EditorSettingsDialog::cancel_pressed() */

void EditorSettingsDialog::cancel_pressed(void)

{
  long lVar1;
  
  lVar1 = EditorSettings::get_singleton();
  if (lVar1 != 0) {
    EditorSettings::get_singleton();
    EditorSettings::notify_changes();
    return;
  }
  return;
}



/* EditorSettingsDialog::ok_pressed() */

void EditorSettingsDialog::ok_pressed(void)

{
  long lVar1;
  
  lVar1 = EditorSettings::get_singleton();
  if (lVar1 != 0) {
    EditorSettings::get_singleton();
    EditorSettings::notify_changes();
    EditorSettings::get_singleton();
    EditorSettings::save();
    Timer::stop();
    return;
  }
  return;
}



/* Ref<InputEventKey>::TEMPNAMEPLACEHOLDERVALUE(Ref<InputEventKey> const&) [clone .isra.0] */

void __thiscall Ref<InputEventKey>::operator=(Ref<InputEventKey> *this,Ref *param_1)

{
  Object *pOVar1;
  char cVar2;
  
  pOVar1 = *(Object **)this;
  if (pOVar1 != (Object *)param_1) {
    *(Ref **)this = param_1;
    if (param_1 != (Ref *)0x0) {
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        *(undefined8 *)this = 0;
      }
    }
    if (pOVar1 != (Object *)0x0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
        cVar2 = predelete_handler(pOVar1);
        if (cVar2 != '\0') {
          (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
          Memory::free_static(pOVar1,false);
          return;
        }
      }
    }
  }
  return;
}



/* EditorSettingsDialog::~EditorSettingsDialog() */

void __thiscall EditorSettingsDialog::~EditorSettingsDialog(EditorSettingsDialog *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_00117e20;
  Array::~Array((Array *)(this + 0xe20));
  if (*(long *)(this + 0xe18) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xe18) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0xe18);
      *(undefined8 *)(this + 0xe18) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      AcceptDialog::~AcceptDialog((AcceptDialog *)this);
      return;
    }
  }
  AcceptDialog::~AcceptDialog((AcceptDialog *)this);
  return;
}



/* EditorSettingsDialog::~EditorSettingsDialog() */

void __thiscall EditorSettingsDialog::~EditorSettingsDialog(EditorSettingsDialog *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_00117e20;
  Array::~Array((Array *)(this + 0xe20));
  if (*(long *)(this + 0xe18) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xe18) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0xe18);
      *(undefined8 *)(this + 0xe18) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  AcceptDialog::~AcceptDialog((AcceptDialog *)this);
  operator_delete(this,0xe58);
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



/* EditorSettingsDialog::_set_shortcut_input(String const&, Ref<InputEventKey>&) */

void EditorSettingsDialog::_set_shortcut_input(String *param_1,Ref *param_2)

{
  char cVar1;
  int iVar2;
  long in_FS_OFFSET;
  Array aAStack_48 [8];
  Array *local_40;
  int local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  Array::Array(aAStack_48);
  iVar2 = InputEventKey::get_keycode();
  if (iVar2 != 0) {
    Variant::Variant((Variant *)local_38,*(Object **)param_2);
    Array::push_back((Variant *)aAStack_48);
    if (Variant::needs_deinit[local_38[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  EditorSettings::get_singleton();
  EditorSettings::get_shortcut((String *)&local_40);
  Shortcut::set_events(local_40);
  if (local_40 != (Array *)0x0) {
    cVar1 = RefCounted::unreference();
    if (cVar1 != '\0') {
      cVar1 = predelete_handler((Object *)local_40);
      if (cVar1 != '\0') {
        (**(code **)(*(long *)local_40 + 0x140))(local_40);
        Memory::free_static(local_40,false);
      }
    }
  }
  Array::~Array(aAStack_48);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorSettingsDialog::_update_icons() */

void EditorSettingsDialog::_update_icons(void)

{
  Ref *pRVar1;
  StringName *pSVar2;
  StringName *pSVar3;
  Object *pOVar4;
  char cVar5;
  int iVar6;
  long in_RDI;
  long in_FS_OFFSET;
  Object *local_60;
  undefined8 local_58;
  long local_40;
  
  pRVar1 = *(Ref **)(in_RDI + 0xdd0);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (_update_icons()::{lambda()#1}::operator()()::sname == '\0') {
    iVar6 = __cxa_guard_acquire(&_update_icons()::{lambda()#1}::operator()()::sname);
    if (iVar6 != 0) {
      _scs_create((char *)&_update_icons()::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_update_icons()::{lambda()#1}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_update_icons()::{lambda()#1}::operator()()::sname);
    }
  }
  Control::get_editor_theme_icon((StringName *)&local_60);
  LineEdit::set_right_icon(pRVar1);
  if (local_60 != (Object *)0x0) {
    cVar5 = RefCounted::unreference();
    pOVar4 = local_60;
    if (cVar5 != '\0') {
      cVar5 = predelete_handler(local_60);
      if (cVar5 != '\0') {
        (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        Memory::free_static(pOVar4,false);
      }
    }
  }
  LineEdit::set_clear_button_enabled(SUB81(*(undefined8 *)(in_RDI + 0xdd0),0));
  pRVar1 = *(Ref **)(in_RDI + 0xde0);
  if (_update_icons()::{lambda()#2}::operator()()::sname == '\0') {
    iVar6 = __cxa_guard_acquire(&_update_icons()::{lambda()#2}::operator()()::sname);
    if (iVar6 != 0) {
      _scs_create((char *)&_update_icons()::{lambda()#2}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_update_icons()::{lambda()#2}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_update_icons()::{lambda()#2}::operator()()::sname);
    }
  }
  Control::get_editor_theme_icon((StringName *)&local_60);
  LineEdit::set_right_icon(pRVar1);
  if (local_60 != (Object *)0x0) {
    cVar5 = RefCounted::unreference();
    pOVar4 = local_60;
    if (cVar5 != '\0') {
      cVar5 = predelete_handler(local_60);
      if (cVar5 != '\0') {
        (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        Memory::free_static(pOVar4,false);
      }
    }
  }
  LineEdit::set_clear_button_enabled(SUB81(*(undefined8 *)(in_RDI + 0xde0),0));
  pRVar1 = *(Ref **)(in_RDI + 0xe50);
  if (_update_icons()::{lambda()#3}::operator()()::sname == '\0') {
    iVar6 = __cxa_guard_acquire(&_update_icons()::{lambda()#3}::operator()()::sname);
    if (iVar6 != 0) {
      _scs_create((char *)&_update_icons()::{lambda()#3}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_update_icons()::{lambda()#3}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_update_icons()::{lambda()#3}::operator()()::sname);
    }
  }
  Control::get_editor_theme_icon((StringName *)&local_60);
  Button::set_button_icon(pRVar1);
  if (local_60 != (Object *)0x0) {
    cVar5 = RefCounted::unreference();
    pOVar4 = local_60;
    if (cVar5 != '\0') {
      cVar5 = predelete_handler(local_60);
      if (cVar5 != '\0') {
        (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        Memory::free_static(pOVar4,false);
      }
    }
  }
  pSVar2 = *(StringName **)(in_RDI + 0xe48);
  pSVar3 = *(StringName **)(in_RDI + 0xe00);
  if (_update_icons()::{lambda()#4}::operator()()::sname == '\0') {
    iVar6 = __cxa_guard_acquire(&_update_icons()::{lambda()#4}::operator()()::sname);
    if (iVar6 != 0) {
      _scs_create((char *)&_update_icons()::{lambda()#4}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_update_icons()::{lambda()#4}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_update_icons()::{lambda()#4}::operator()()::sname);
    }
  }
  Control::get_theme_stylebox((StringName *)&local_60,pSVar3);
  Control::add_theme_style_override(pSVar2,(Ref *)(SceneStringNames::singleton + 600));
  if (local_60 != (Object *)0x0) {
    cVar5 = RefCounted::unreference();
    pOVar4 = local_60;
    if (cVar5 != '\0') {
      cVar5 = predelete_handler(local_60);
      if (cVar5 != '\0') {
        (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        Memory::free_static(pOVar4,false);
      }
    }
  }
  pRVar1 = *(Ref **)(in_RDI + 0xe40);
  if (_update_icons()::{lambda()#5}::operator()()::sname == '\0') {
    iVar6 = __cxa_guard_acquire(&_update_icons()::{lambda()#5}::operator()()::sname);
    if (iVar6 != 0) {
      _scs_create((char *)&_update_icons()::{lambda()#5}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_update_icons()::{lambda()#5}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_update_icons()::{lambda()#5}::operator()()::sname);
    }
  }
  Control::get_editor_theme_icon((StringName *)&local_60);
  TextureRect::set_texture(pRVar1);
  if (local_60 != (Object *)0x0) {
    cVar5 = RefCounted::unreference();
    if (cVar5 != '\0') {
      cVar5 = predelete_handler(local_60);
      if (cVar5 != '\0') {
        (**(code **)(*(long *)local_60 + 0x140))(local_60);
        Memory::free_static(local_60,false);
      }
    }
  }
  pSVar2 = *(StringName **)(in_RDI + 0xe38);
  pSVar3 = *(StringName **)(in_RDI + 0xe00);
  if (_update_icons()::{lambda()#6}::operator()()::sname == '\0') {
    iVar6 = __cxa_guard_acquire(&_update_icons()::{lambda()#6}::operator()()::sname);
    if (iVar6 != 0) {
      _scs_create((char *)&_update_icons()::{lambda()#6}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_update_icons()::{lambda()#6}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_update_icons()::{lambda()#6}::operator()()::sname);
    }
  }
  local_58 = Control::get_theme_color
                       (pSVar3,(StringName *)&_update_icons()::{lambda()#6}::operator()()::sname);
  Control::add_theme_color_override(pSVar2,(Color *)(SceneStringNames::singleton + 0xb0));
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorSettingsDialog::_event_list_to_array_helper(List<Ref<InputEvent>, DefaultAllocator> const&)
    */

List * EditorSettingsDialog::_event_list_to_array_helper(List *param_1)

{
  char cVar1;
  Object *pOVar2;
  long *in_RDX;
  long *plVar3;
  long in_FS_OFFSET;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Array::Array((Array *)param_1);
  if ((undefined8 *)*in_RDX == (undefined8 *)0x0) {
LAB_00100cc0:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  plVar3 = *(long **)*in_RDX;
joined_r0x00100bff:
  if (plVar3 != (long *)0x0) {
    do {
      if (((*plVar3 != 0) &&
          (pOVar2 = (Object *)__dynamic_cast(*plVar3,&Object::typeinfo,&InputEventKey::typeinfo,0),
          pOVar2 != (Object *)0x0)) && (cVar1 = RefCounted::reference(), cVar1 != '\0')) {
        Variant::Variant((Variant *)local_58,(Object *)*plVar3);
        Array::push_back((Variant *)param_1);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        cVar1 = RefCounted::unreference();
        if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar2), cVar1 != '\0'))
        goto code_r0x00100c97;
      }
      plVar3 = (long *)plVar3[1];
      if (plVar3 == (long *)0x0) break;
    } while( true );
  }
  goto LAB_00100cc0;
code_r0x00100c97:
  (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
  Memory::free_static(pOVar2,false);
  plVar3 = (long *)plVar3[1];
  goto joined_r0x00100bff;
}



/* EditorSettingsDialog::_get_shortcut_button_string(String const&) */

String * EditorSettingsDialog::_get_shortcut_button_string(String *param_1)

{
  long *plVar1;
  code *pcVar2;
  undefined *puVar3;
  char cVar4;
  long lVar5;
  Object *pOVar6;
  long in_FS_OFFSET;
  Object *local_98;
  Array local_90 [8];
  long local_88;
  long local_80;
  Variant *local_78;
  Variant *local_70;
  Variant *local_68;
  undefined *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)param_1 = 0;
  EditorSettings::get_singleton();
  EditorSettings::get_shortcut((String *)&local_98);
  Shortcut::get_events();
  Array::begin();
  Array::end();
  if (local_78 != local_68) {
    do {
      if (local_70 != (Variant *)0x0) {
        Variant::operator=(local_70,local_78);
      }
      lVar5 = Variant::get_validated_object();
      if (lVar5 == 0) {
EditorSettingsDialog__get_shortcut_button_string:
        local_58 = &_LC25;
        local_80 = 0;
        local_50 = 3;
        String::parse_latin1((StrRange *)&local_80);
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      pOVar6 = (Object *)__dynamic_cast(lVar5,&Object::typeinfo,&InputEvent::typeinfo,0);
      if (pOVar6 == (Object *)0x0) goto EditorSettingsDialog__get_shortcut_button_string;
      cVar4 = RefCounted::reference();
      local_58 = &_LC25;
      local_80 = 0;
      local_50 = 3;
      if (cVar4 == '\0') {
        pOVar6 = (Object *)0x0;
      }
      String::parse_latin1((StrRange *)&local_80);
      (**(code **)(*(long *)pOVar6 + 0x1d0))((String *)&local_88,pOVar6);
      String::operator+((String *)&local_58,(String *)&local_88);
      String::operator+=(param_1,(String *)&local_58);
      puVar3 = local_58;
      if (local_58 != (undefined *)0x0) {
        LOCK();
        plVar1 = (long *)(local_58 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_58 = (undefined *)0x0;
          Memory::free_static(puVar3 + -0x10,false);
        }
      }
      lVar5 = local_88;
      if (local_88 != 0) {
        LOCK();
        plVar1 = (long *)(local_88 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_88 = 0;
          Memory::free_static((void *)(lVar5 + -0x10),false);
        }
      }
      lVar5 = local_80;
      if (local_80 != 0) {
        LOCK();
        plVar1 = (long *)(local_80 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_80 = 0;
          Memory::free_static((void *)(lVar5 + -0x10),false);
        }
      }
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') {
        cVar4 = predelete_handler(pOVar6);
        if (cVar4 != '\0') {
          (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
          Memory::free_static(pOVar6,false);
        }
      }
      local_78 = local_78 + 0x18;
    } while (local_78 != local_68);
  }
  Array::~Array(local_90);
  if (local_98 != (Object *)0x0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      cVar4 = predelete_handler(local_98);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)local_98 + 0x140))(local_98);
        Memory::free_static(local_98,false);
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorSettingsDialog::_focus_current_search_box() */

void __thiscall EditorSettingsDialog::_focus_current_search_box(EditorSettingsDialog *this)

{
  long lVar1;
  
  lVar1 = TabContainer::get_current_tab_control();
  if (*(long *)(this + 0xdc0) == lVar1) {
    lVar1 = *(long *)(this + 0xdd0);
  }
  else {
    if (*(long *)(this + 0xdc8) != lVar1) {
      return;
    }
    lVar1 = *(long *)(this + 0xde0);
  }
  if (lVar1 == 0) {
    return;
  }
  Control::grab_focus();
  LineEdit::select_all();
  return;
}



/* EditorSettingsDialog::can_drop_data_fw(Vector2 const&, Variant const&, Control*) const */

uint EditorSettingsDialog::can_drop_data_fw(Vector2 *param_1,Variant *param_2,Control *param_3)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  long in_FS_OFFSET;
  long local_c8;
  long local_c0;
  undefined8 local_b8;
  undefined1 local_b0 [16];
  int local_98 [8];
  int local_78 [2];
  undefined1 local_70 [16];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  plVar4 = (long *)Tree::get_selected();
  plVar5 = (long *)Tree::get_item_at_position(*(Vector2 **)(param_1 + 0xe00));
  if (((plVar4 != (long *)0x0) && (plVar5 != (long *)0x0)) && (plVar4 != plVar5)) {
    pcVar1 = *(code **)(*plVar5 + 0xb8);
    Variant::Variant((Variant *)local_78,"");
    StringName::StringName((StringName *)&local_c8,"type",false);
    (*pcVar1)((Variant *)local_58,plVar5,(StringName *)&local_c8,(Variant *)local_78);
    Variant::operator_cast_to_String((Variant *)&local_c0);
    cVar2 = String::operator!=((String *)&local_c0,"event");
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_c8 != 0)) {
      StringName::unref();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (cVar2 == '\0') {
      plVar4 = (long *)TreeItem::get_parent();
      pcVar1 = *(code **)(*plVar4 + 0xb8);
      local_70 = (undefined1  [16])0x0;
      local_78[0] = 0;
      local_78[1] = 0;
      StringName::StringName((StringName *)&local_c0,"shortcut_identifier",false);
      (*pcVar1)((Variant *)local_58,plVar4,(Variant *)&local_c0,(Variant *)local_78);
      plVar4 = (long *)TreeItem::get_parent();
      local_b0 = (undefined1  [16])0x0;
      local_b8 = 0;
      pcVar1 = *(code **)(*plVar4 + 0xb8);
      StringName::StringName((StringName *)&local_c8,"shortcut_identifier",false);
      (*pcVar1)((Variant *)local_98,plVar4,(StringName *)&local_c8,&local_b8);
      uVar3 = Variant::operator!=((Variant *)local_98,(Variant *)local_58);
      if (Variant::needs_deinit[local_98[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_c8 != 0)) {
        StringName::unref();
      }
      if (Variant::needs_deinit[(int)local_b8] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_c0 != 0)) {
        StringName::unref();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      uVar3 = uVar3 ^ 1;
      goto LAB_0010127c;
    }
  }
  uVar3 = 0;
LAB_0010127c:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorSettingsDialog::get_drag_data_fw(Vector2 const&, Control*) */

Vector2 * EditorSettingsDialog::get_drag_data_fw(Vector2 *param_1,Control *param_2)

{
  code *pcVar1;
  char cVar2;
  long *plVar3;
  Label *this;
  long in_FS_OFFSET;
  String local_a0 [8];
  long local_98;
  long local_90;
  char *local_88;
  undefined8 local_80;
  int local_78 [2];
  undefined1 local_70 [16];
  int local_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  plVar3 = (long *)Tree::get_selected();
  if (plVar3 != (long *)0x0) {
    pcVar1 = *(code **)(*plVar3 + 0xb8);
    Variant::Variant((Variant *)local_78,"");
    StringName::StringName((StringName *)&local_90,"type",false);
    (*pcVar1)(&local_58,plVar3,(StringName *)&local_90,(Variant *)local_78);
    Variant::operator_cast_to_String((Variant *)&local_88);
    cVar2 = String::operator!=((String *)&local_88,"event");
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if (Variant::needs_deinit[local_58] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_90 != 0)) {
      StringName::unref();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (cVar2 == '\0') {
      pcVar1 = *(code **)(*plVar3 + 0xb8);
      local_70 = (undefined1  [16])0x0;
      local_78[0] = 0;
      local_78[1] = 0;
      StringName::StringName((StringName *)&local_98,"event_index",false);
      (*pcVar1)(&local_58,plVar3,(StringName *)&local_98,(Variant *)local_78);
      local_88 = "Event %d";
      local_90 = 0;
      local_80 = 8;
      String::parse_latin1((StrRange *)&local_90);
      vformat<Variant>(local_a0,(StringName *)&local_90,&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      if (Variant::needs_deinit[local_58] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_98 != 0)) {
        StringName::unref();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      this = (Label *)operator_new(0xad8,"");
      Label::Label(this,local_a0);
      postinitialize_handler((Object *)this);
      local_58 = _LC45;
      iStack_54 = _LC45;
      iStack_50 = _LC45;
      iStack_4c = _LC45;
      CanvasItem::set_modulate((Color *)this);
      Control::set_drag_preview(*(Control **)(param_2 + 0xe00));
      Tree::set_drop_mode_flags((int)*(undefined8 *)(param_2 + 0xe00));
      Dictionary::Dictionary((Dictionary *)&local_88);
      Variant::Variant((Variant *)param_1,(Dictionary *)&local_88);
      Dictionary::~Dictionary((Dictionary *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
      goto LAB_001015ae;
    }
  }
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_001015ae:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorSettingsDialog::EditorSettingsDialog() */

void __thiscall EditorSettingsDialog::EditorSettingsDialog(EditorSettingsDialog *this)

{
  code *pcVar1;
  undefined8 uVar2;
  String *pSVar3;
  long lVar4;
  bool bVar5;
  TabContainer *this_00;
  CallableCustom *pCVar6;
  BoxContainer *pBVar7;
  LineEdit *pLVar8;
  CheckButton *this_01;
  SectionedInspector *this_02;
  long *plVar9;
  PanelContainer *this_03;
  TextureRect *this_04;
  Label *this_05;
  Button *pBVar10;
  EventListenerLineEdit *this_06;
  Tree *this_07;
  InputEventConfigurationDialog *this_08;
  Timer *this_09;
  long in_FS_OFFSET;
  Tree local_d8 [16];
  Callable local_c8 [16];
  Tree local_b8 [16];
  undefined8 local_a8 [2];
  long local_98 [2];
  char *local_88;
  undefined8 local_80;
  int local_78 [8];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  AcceptDialog::AcceptDialog((AcceptDialog *)this);
  this[0xdb0] = (EditorSettingsDialog)0x0;
  *(undefined ***)this = &PTR__initialize_classv_00117e20;
  *(undefined8 *)(this + 0xe08) = 0;
  this[0xe10] = (EditorSettingsDialog)0x0;
  *(undefined8 *)(this + 0xe18) = 0;
  *(undefined1 (*) [16])(this + 0xdb8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xdc8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xdd8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xde8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xdf8) = (undefined1  [16])0x0;
  Array::Array((Array *)(this + 0xe20));
  *(undefined4 *)(this + 0xe28) = 0xffffffff;
  *(undefined8 *)(this + 0xe50) = 0;
  *(undefined1 (*) [16])(this + 0xe30) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xe40) = (undefined1  [16])0x0;
  local_98[0] = 0;
  local_88 = "";
  local_80 = 0;
  String::parse_latin1((StrRange *)local_98);
  local_88 = "Editor Settings";
  local_a8[0] = 0;
  local_80 = 0xf;
  String::parse_latin1((StrRange *)local_a8);
  TTR((String *)&local_88,(String *)local_a8);
  Window::set_title((String *)this);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  Window::set_clamp_to_embedder(SUB81(this,0));
  this_00 = (TabContainer *)operator_new(0xb40,"");
  TabContainer::TabContainer(this_00);
  postinitialize_handler((Object *)this_00);
  *(TabContainer **)(this + 0xdb8) = this_00;
  StringName::StringName((StringName *)&local_88,"TabContainerOdd",false);
  Control::set_theme_type_variation((StringName *)this_00);
  if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
    StringName::unref();
  }
  plVar9 = *(long **)(this + 0xdb8);
  pcVar1 = *(code **)(*plVar9 + 0x108);
  pCVar6 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar6);
  *(undefined **)(pCVar6 + 0x20) = &_LC32;
  *(EditorSettingsDialog **)(pCVar6 + 0x28) = this;
  *(undefined1 (*) [16])(pCVar6 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)pCVar6 = &PTR_hash_00118098;
  *(undefined8 *)(pCVar6 + 0x40) = 0;
  uVar2 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(pCVar6 + 0x10) = 0;
  *(undefined8 *)(pCVar6 + 0x30) = uVar2;
  *(code **)(pCVar6 + 0x38) = _tabs_tab_changed;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar6,(int)pCVar6 + 0x28);
  *(char **)(pCVar6 + 0x20) = "EditorSettingsDialog::_tabs_tab_changed";
  Callable::Callable((Callable *)&local_88,pCVar6);
  StringName::StringName((StringName *)local_98,"tab_changed",false);
  (*pcVar1)(plVar9,(StrRange *)local_98,(String *)&local_88,0);
  if ((StringName::configured != '\0') && (local_98[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_88);
  Node::add_child(this,*(undefined8 *)(this + 0xdb8),0,0);
  pBVar7 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar7,true);
  pBVar7[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar7 = &PTR__initialize_classv_00117aa8;
  postinitialize_handler((Object *)pBVar7);
  *(BoxContainer **)(this + 0xdc0) = pBVar7;
  Node::add_child(*(undefined8 *)(this + 0xdb8),pBVar7,0,0);
  local_88 = "";
  local_98[0] = 0;
  pSVar3 = *(String **)(this + 0xdc0);
  local_80 = 0;
  String::parse_latin1((StrRange *)local_98);
  local_88 = "General";
  local_a8[0] = 0;
  local_80 = 7;
  String::parse_latin1((StrRange *)local_a8);
  TTR((String *)&local_88,(String *)local_a8);
  Node::set_name(pSVar3);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  pBVar7 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar7,false);
  pBVar7[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar7 = &PTR__initialize_classv_00117730;
  postinitialize_handler((Object *)pBVar7);
  Control::set_h_size_flags(pBVar7,3);
  Node::add_child(*(undefined8 *)(this + 0xdc0),pBVar7,0,0);
  pLVar8 = (LineEdit *)operator_new(0xbb0,"");
  local_88 = (char *)0x0;
  LineEdit::LineEdit(pLVar8,(String *)&local_88);
  postinitialize_handler((Object *)pLVar8);
  *(LineEdit **)(this + 0xdd0) = pLVar8;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  local_88 = "";
  local_98[0] = 0;
  uVar2 = *(undefined8 *)(this + 0xdd0);
  local_80 = 0;
  String::parse_latin1((StrRange *)local_98);
  local_88 = "Filter Settings";
  local_a8[0] = 0;
  local_80 = 0xf;
  String::parse_latin1((StrRange *)local_a8);
  TTR((String *)&local_88,(String *)local_a8);
  LineEdit::set_placeholder(uVar2,(String *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xdd0),3);
  Node::add_child(pBVar7,*(undefined8 *)(this + 0xdd0),0,0);
  this_01 = (CheckButton *)operator_new(0xc60,"");
  local_88 = "";
  local_98[0] = 0;
  local_80 = 0;
  String::parse_latin1((StrRange *)local_98);
  local_88 = "Advanced Settings";
  local_a8[0] = 0;
  local_80 = 0x11;
  String::parse_latin1((StrRange *)local_a8);
  TTR((String *)&local_88,(String *)local_a8);
  CheckButton::CheckButton(this_01,(String *)&local_88);
  postinitialize_handler((Object *)this_01);
  *(CheckButton **)(this + 0xdd8) = this_01;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  Node::add_child(pBVar7,*(undefined8 *)(this + 0xdd8),0);
  Variant::Variant((Variant *)local_58,false);
  local_88 = "_editor_settings_advanced_mode";
  local_98[0] = 0;
  local_80 = 0x1e;
  String::parse_latin1((StrRange *)local_98);
  _EDITOR_DEF((String *)local_78,(Variant *)local_98,SUB81((Variant *)local_58,0),false);
  Variant::operator_cast_to_bool((Variant *)local_78);
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xdd8),0));
  plVar9 = *(long **)(this + 0xdd8);
  pcVar1 = *(code **)(*plVar9 + 0x108);
  pCVar6 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar6);
  *(undefined **)(pCVar6 + 0x20) = &_LC32;
  *(EditorSettingsDialog **)(pCVar6 + 0x28) = this;
  *(undefined1 (*) [16])(pCVar6 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)pCVar6 = &PTR_hash_00118128;
  *(undefined8 *)(pCVar6 + 0x40) = 0;
  uVar2 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(pCVar6 + 0x10) = 0;
  *(undefined8 *)(pCVar6 + 0x30) = uVar2;
  *(code **)(pCVar6 + 0x38) = _advanced_toggled;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar6,(int)pCVar6 + 0x28);
  *(char **)(pCVar6 + 0x20) = "EditorSettingsDialog::_advanced_toggled";
  Callable::Callable((Callable *)&local_88,pCVar6);
  (*pcVar1)(plVar9,SceneStringNames::singleton + 0x248,(String *)&local_88,0);
  Callable::~Callable((Callable *)&local_88);
  this_02 = (SectionedInspector *)operator_new(0xae0,"");
  SectionedInspector::SectionedInspector(this_02);
  postinitialize_handler((Object *)this_02);
  *(SectionedInspector **)(this + 0xdf0) = this_02;
  bVar5 = (bool)SectionedInspector::get_inspector();
  EditorInspector::set_use_filter(bVar5);
  SectionedInspector::register_search_box(*(LineEdit **)(this + 0xdf0));
  SectionedInspector::register_advanced_toggle(*(CheckButton **)(this + 0xdf0));
  Control::set_v_size_flags(*(undefined8 *)(this + 0xdf0),3);
  Node::add_child(*(undefined8 *)(this + 0xdc0),*(undefined8 *)(this + 0xdf0),0,0);
  plVar9 = (long *)SectionedInspector::get_inspector();
  pcVar1 = *(code **)(*plVar9 + 0x108);
  create_custom_callable_function_pointer<EditorSettingsDialog,String_const&>
            ((EditorSettingsDialog *)&local_88,(char *)this,
             (_func_void_String_ptr *)"&EditorSettingsDialog::_settings_property_edited");
  StringName::StringName((StringName *)local_98,"property_edited",false);
  (*pcVar1)(plVar9,(StrRange *)local_98,(String *)&local_88,0);
  if ((StringName::configured != '\0') && (local_98[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_88);
  plVar9 = (long *)SectionedInspector::get_inspector();
  pcVar1 = *(code **)(*plVar9 + 0x108);
  create_custom_callable_function_pointer<EditorSettingsDialog>
            ((EditorSettingsDialog *)&local_88,(char *)this,
             (_func_void *)"&EditorSettingsDialog::_editor_restart_request");
  StringName::StringName((StringName *)local_98,"restart_requested",false);
  (*pcVar1)(plVar9,(StrRange *)local_98,(String *)&local_88,0);
  if ((StringName::configured != '\0') && (local_98[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_88);
  this_03 = (PanelContainer *)operator_new(0xa08,"");
  PanelContainer::PanelContainer(this_03);
  postinitialize_handler((Object *)this_03);
  *(PanelContainer **)(this + 0xe48) = this_03;
  Node::add_child(*(undefined8 *)(this + 0xdc0),this_03,0,0);
  pBVar7 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar7,false);
  pBVar7[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar7 = &PTR__initialize_classv_00117730;
  postinitialize_handler((Object *)pBVar7);
  Node::add_child(*(undefined8 *)(this + 0xe48),pBVar7,0,0);
  this_04 = (TextureRect *)operator_new(0x9e0,"");
  TextureRect::TextureRect(this_04);
  postinitialize_handler((Object *)this_04);
  *(TextureRect **)(this + 0xe40) = this_04;
  Control::set_v_size_flags(this_04,4);
  Node::add_child(pBVar7,*(undefined8 *)(this + 0xe40),0,0);
  this_05 = (Label *)operator_new(0xad8,"");
  local_88 = (char *)0x0;
  Label::Label(this_05,(String *)&local_88);
  postinitialize_handler((Object *)this_05);
  *(Label **)(this + 0xe38) = this_05;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  local_88 = "";
  local_98[0] = 0;
  pSVar3 = *(String **)(this + 0xe38);
  local_80 = 0;
  String::parse_latin1((StrRange *)local_98);
  local_88 = "The editor must be restarted for changes to take effect.";
  local_a8[0] = 0;
  local_80 = 0x38;
  String::parse_latin1((StrRange *)local_a8);
  TTR((String *)&local_88,(String *)local_a8);
  Label::set_text(pSVar3);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  Node::add_child(pBVar7,*(undefined8 *)(this + 0xe38),0,0);
  BoxContainer::add_spacer(SUB81(pBVar7,0));
  pBVar10 = (Button *)operator_new(0xc10,"");
  local_88 = (char *)0x0;
  Button::Button(pBVar10,(String *)&local_88);
  postinitialize_handler((Object *)pBVar10);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  pcVar1 = *(code **)(*(long *)pBVar10 + 0x108);
  create_custom_callable_function_pointer<EditorSettingsDialog>
            ((EditorSettingsDialog *)&local_88,(char *)this,
             (_func_void *)"&EditorSettingsDialog::_editor_restart");
  (*pcVar1)(pBVar10,SceneStringNames::singleton + 0x238,(String *)&local_88,0);
  Callable::~Callable((Callable *)&local_88);
  Node::add_child(pBVar7,pBVar10,0,0);
  local_88 = "";
  local_98[0] = 0;
  local_80 = 0;
  String::parse_latin1((StrRange *)local_98);
  local_88 = "Save & Restart";
  local_a8[0] = 0;
  local_80 = 0xe;
  String::parse_latin1((StrRange *)local_a8);
  TTR((String *)&local_88,(String *)local_a8);
  Button::set_text((String *)pBVar10);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  pBVar10 = (Button *)operator_new(0xc10,"");
  local_88 = (char *)0x0;
  Button::Button(pBVar10,(String *)&local_88);
  postinitialize_handler((Object *)pBVar10);
  *(Button **)(this + 0xe50) = pBVar10;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  Button::set_flat(SUB81(*(undefined8 *)(this + 0xe50),0));
  plVar9 = *(long **)(this + 0xe50);
  pcVar1 = *(code **)(*plVar9 + 0x108);
  create_custom_callable_function_pointer<EditorSettingsDialog>
            ((EditorSettingsDialog *)&local_88,(char *)this,
             (_func_void *)"&EditorSettingsDialog::_editor_restart_close");
  (*pcVar1)(plVar9,SceneStringNames::singleton + 0x238,(String *)&local_88,0);
  Callable::~Callable((Callable *)&local_88);
  Node::add_child(pBVar7,*(undefined8 *)(this + 0xe50),0,0);
  CanvasItem::hide();
  pBVar7 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar7,true);
  pBVar7[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar7 = &PTR__initialize_classv_00117aa8;
  postinitialize_handler((Object *)pBVar7);
  *(BoxContainer **)(this + 0xdc8) = pBVar7;
  Node::add_child(*(undefined8 *)(this + 0xdb8),pBVar7,0,0);
  local_88 = "";
  local_98[0] = 0;
  pSVar3 = *(String **)(this + 0xdc8);
  local_80 = 0;
  String::parse_latin1((StrRange *)local_98);
  local_88 = "Shortcuts";
  local_a8[0] = 0;
  local_80 = 9;
  String::parse_latin1((StrRange *)local_a8);
  TTR((String *)&local_88,(String *)local_a8);
  Node::set_name(pSVar3);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  pBVar7 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar7,false);
  pBVar7[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar7 = &PTR__initialize_classv_00117730;
  postinitialize_handler((Object *)pBVar7);
  Control::set_h_size_flags(pBVar7,3);
  Node::add_child(*(undefined8 *)(this + 0xdc8),pBVar7,0,0);
  pLVar8 = (LineEdit *)operator_new(0xbb0,"");
  local_88 = (char *)0x0;
  LineEdit::LineEdit(pLVar8,(String *)&local_88);
  postinitialize_handler((Object *)pLVar8);
  *(LineEdit **)(this + 0xde0) = pLVar8;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  local_88 = "";
  local_98[0] = 0;
  uVar2 = *(undefined8 *)(this + 0xde0);
  local_80 = 0;
  String::parse_latin1((StrRange *)local_98);
  local_88 = "Filter by Name";
  local_a8[0] = 0;
  local_80 = 0xe;
  String::parse_latin1((StrRange *)local_a8);
  TTR((String *)&local_88,(String *)local_a8);
  LineEdit::set_placeholder(uVar2,(String *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xde0),3);
  Node::add_child(pBVar7,*(undefined8 *)(this + 0xde0),0,0);
  plVar9 = *(long **)(this + 0xde0);
  pcVar1 = *(code **)(*plVar9 + 0x108);
  create_custom_callable_function_pointer<EditorSettingsDialog,String_const&>
            ((EditorSettingsDialog *)&local_88,(char *)this,
             (_func_void_String_ptr *)"&EditorSettingsDialog::_filter_shortcuts");
  (*pcVar1)(plVar9,SceneStringNames::singleton + 0x270,(String *)&local_88,0);
  Callable::~Callable((Callable *)&local_88);
  this_06 = (EventListenerLineEdit *)operator_new(0xbc0,"");
  EventListenerLineEdit::EventListenerLineEdit(this_06);
  postinitialize_handler((Object *)this_06);
  *(EventListenerLineEdit **)(this + 0xde8) = this_06;
  Control::set_h_size_flags(this_06,3);
  Control::set_stretch_ratio(_LC66);
  EventListenerLineEdit::set_allowed_input_types((int)*(undefined8 *)(this + 0xde8));
  plVar9 = *(long **)(this + 0xde8);
  pcVar1 = *(code **)(*plVar9 + 0x108);
  pCVar6 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar6);
  *(undefined1 (*) [16])(pCVar6 + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(pCVar6 + 0x40) = 0;
  uVar2 = *(undefined8 *)(this + 0x60);
  *(undefined ***)pCVar6 = &PTR_hash_001182d8;
  *(undefined8 *)(pCVar6 + 0x30) = uVar2;
  *(code **)(pCVar6 + 0x38) = _filter_shortcuts_by_event;
  *(undefined8 *)(pCVar6 + 0x10) = 0;
  *(undefined **)(pCVar6 + 0x20) = &_LC32;
  *(EditorSettingsDialog **)(pCVar6 + 0x28) = this;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar6,(int)pCVar6 + 0x28);
  *(char **)(pCVar6 + 0x20) = "EditorSettingsDialog::_filter_shortcuts_by_event";
  Callable::Callable((Callable *)&local_88,pCVar6);
  StringName::StringName((StringName *)local_98,"event_changed",false);
  (*pcVar1)(plVar9,(StrRange *)local_98,(String *)&local_88,0);
  if ((StringName::configured != '\0') && (local_98[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_88);
  plVar9 = *(long **)(this + 0xde8);
  pcVar1 = *(code **)(*plVar9 + 0x108);
  create_custom_callable_function_pointer<AcceptDialog,bool>
            ((AcceptDialog *)&local_88,(char *)this,
             (_func_void_bool *)"&AcceptDialog::set_close_on_escape");
  bVar5 = SUB81((StrRange *)local_98,0);
  Callable::bind<bool>(bVar5);
  (*pcVar1)(plVar9,SceneStringNames::singleton + 0xd8,(StrRange *)local_98,0);
  Callable::~Callable((Callable *)local_98);
  Callable::~Callable((Callable *)&local_88);
  plVar9 = *(long **)(this + 0xde8);
  pcVar1 = *(code **)(*plVar9 + 0x108);
  create_custom_callable_function_pointer<AcceptDialog,bool>
            ((AcceptDialog *)&local_88,(char *)this,
             (_func_void_bool *)"&AcceptDialog::set_close_on_escape");
  Callable::bind<bool>(bVar5);
  (*pcVar1)(plVar9,SceneStringNames::singleton + 0xe0,(StrRange *)local_98,0);
  Callable::~Callable((Callable *)local_98);
  Callable::~Callable((Callable *)&local_88);
  Node::add_child(pBVar7,*(undefined8 *)(this + 0xde8),0,0);
  pBVar10 = (Button *)operator_new(0xc10,"");
  local_88 = (char *)0x0;
  Button::Button(pBVar10,(String *)&local_88);
  postinitialize_handler((Object *)pBVar10);
  *(Button **)(this + 0xdf8) = pBVar10;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  local_88 = "";
  local_98[0] = 0;
  pSVar3 = *(String **)(this + 0xdf8);
  local_80 = 0;
  String::parse_latin1((StrRange *)local_98);
  local_88 = "Clear All";
  local_a8[0] = 0;
  local_80 = 9;
  String::parse_latin1((StrRange *)local_a8);
  TTR((String *)&local_88,(String *)local_a8);
  Button::set_text(pSVar3);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  local_88 = "";
  local_98[0] = 0;
  pSVar3 = *(String **)(this + 0xdf8);
  local_80 = 0;
  String::parse_latin1((StrRange *)local_98);
  local_88 = "Clear all search filters.";
  local_a8[0] = 0;
  local_80 = 0x19;
  String::parse_latin1((StrRange *)local_a8);
  TTR((String *)&local_88,(String *)local_a8);
  Control::set_tooltip_text(pSVar3);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  plVar9 = *(long **)(this + 0xdf8);
  lVar4 = *(long *)(this + 0xde0);
  pcVar1 = *(code **)(*plVar9 + 0x108);
  pCVar6 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar6);
  *(undefined1 (*) [16])(pCVar6 + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(pCVar6 + 0x40) = 0;
  *(long *)(pCVar6 + 0x28) = lVar4;
  uVar2 = *(undefined8 *)(lVar4 + 0x60);
  *(undefined ***)pCVar6 = &PTR_hash_001183f8;
  *(undefined8 *)(pCVar6 + 0x30) = uVar2;
  *(undefined8 *)(pCVar6 + 0x10) = 0;
  *(code **)(pCVar6 + 0x38) = LineEdit::clear;
  *(undefined **)(pCVar6 + 0x20) = &_LC32;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar6,(int)pCVar6 + 0x28);
  *(char **)(pCVar6 + 0x20) = "LineEdit::clear";
  Callable::Callable((Callable *)&local_88,pCVar6);
  (*pcVar1)(plVar9,SceneStringNames::singleton + 0x238,(String *)&local_88,0);
  Callable::~Callable((Callable *)&local_88);
  plVar9 = *(long **)(this + 0xdf8);
  lVar4 = *(long *)(this + 0xde8);
  pcVar1 = *(code **)(*plVar9 + 0x108);
  pCVar6 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar6);
  *(undefined1 (*) [16])(pCVar6 + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(pCVar6 + 0x40) = 0;
  *(long *)(pCVar6 + 0x28) = lVar4;
  uVar2 = *(undefined8 *)(lVar4 + 0x60);
  *(undefined ***)pCVar6 = &PTR_hash_00118488;
  *(undefined8 *)(pCVar6 + 0x30) = uVar2;
  *(undefined8 *)(pCVar6 + 0x10) = 0;
  *(code **)(pCVar6 + 0x38) = EventListenerLineEdit::clear_event;
  *(undefined **)(pCVar6 + 0x20) = &_LC32;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar6,(int)pCVar6 + 0x28);
  *(char **)(pCVar6 + 0x20) = "EventListenerLineEdit::clear_event";
  Callable::Callable((Callable *)&local_88,pCVar6);
  (*pcVar1)(plVar9,SceneStringNames::singleton + 0x238,(String *)&local_88,0);
  Callable::~Callable((Callable *)&local_88);
  Node::add_child(pBVar7,*(undefined8 *)(this + 0xdf8),0,0);
  this_07 = (Tree *)operator_new(0xdc8,"");
  Tree::Tree(this_07);
  postinitialize_handler((Object *)this_07);
  *(Tree **)(this + 0xe00) = this_07;
  Control::set_v_size_flags(this_07,3);
  Tree::set_columns((int)*(undefined8 *)(this + 0xe00));
  Tree::set_hide_root(SUB81(*(undefined8 *)(this + 0xe00),0));
  Tree::set_column_titles_visible(SUB81(*(undefined8 *)(this + 0xe00),0));
  uVar2 = *(undefined8 *)(this + 0xe00);
  local_98[0] = 0;
  local_88 = "Name";
  local_80 = 4;
  String::parse_latin1((StrRange *)local_98);
  Tree::set_column_title((int)uVar2,(String *)0x0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  uVar2 = *(undefined8 *)(this + 0xe00);
  local_98[0] = 0;
  local_88 = "Binding";
  local_80 = 7;
  String::parse_latin1((StrRange *)local_98);
  Tree::set_column_title((int)uVar2,(String *)0x1);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  plVar9 = *(long **)(this + 0xe00);
  pcVar1 = *(code **)(*plVar9 + 0x108);
  pCVar6 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar6);
  *(undefined **)(pCVar6 + 0x20) = &_LC32;
  *(EditorSettingsDialog **)(pCVar6 + 0x28) = this;
  *(undefined1 (*) [16])(pCVar6 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)pCVar6 = &PTR_hash_00118518;
  *(undefined8 *)(pCVar6 + 0x40) = 0;
  uVar2 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(pCVar6 + 0x10) = 0;
  *(undefined8 *)(pCVar6 + 0x30) = uVar2;
  *(code **)(pCVar6 + 0x38) = _shortcut_button_pressed;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar6,(int)pCVar6 + 0x28);
  *(char **)(pCVar6 + 0x20) = "EditorSettingsDialog::_shortcut_button_pressed";
  Callable::Callable((Callable *)&local_88,pCVar6);
  StringName::StringName((StringName *)local_98,"button_clicked",false);
  (*pcVar1)(plVar9,(StrRange *)local_98,(String *)&local_88,0);
  if ((StringName::configured != '\0') && (local_98[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_88);
  plVar9 = *(long **)(this + 0xe00);
  pcVar1 = *(code **)(*plVar9 + 0x108);
  create_custom_callable_function_pointer<EditorSettingsDialog>
            ((EditorSettingsDialog *)&local_88,(char *)this,
             (_func_void *)"&EditorSettingsDialog::_shortcut_cell_double_clicked");
  StringName::StringName((StringName *)local_98,"item_activated",false);
  (*pcVar1)(plVar9,(StrRange *)local_98,(String *)&local_88,0);
  if ((StringName::configured != '\0') && (local_98[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_88);
  Node::add_child(*(undefined8 *)(this + 0xdc8),*(undefined8 *)(this + 0xe00),0,0);
  plVar9 = *(long **)(this + 0xe00);
  pcVar1 = *(code **)(*plVar9 + 0x318);
  pCVar6 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar6);
  *(undefined **)(pCVar6 + 0x20) = &_LC32;
  *(EditorSettingsDialog **)(pCVar6 + 0x28) = this;
  *(undefined1 (*) [16])(pCVar6 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)pCVar6 = &PTR_hash_001186c8;
  *(undefined8 *)(pCVar6 + 0x40) = 0;
  uVar2 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(pCVar6 + 0x10) = 0;
  *(undefined8 *)(pCVar6 + 0x30) = uVar2;
  *(code **)(pCVar6 + 0x38) = drop_data_fw;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar6,(int)pCVar6 + 0x28);
  *(char **)(pCVar6 + 0x20) = "EditorSettingsDialog::drop_data_fw";
  Callable::Callable((Callable *)&local_88,pCVar6);
  Callable::bind<Tree*>((Tree *)local_98);
  pCVar6 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar6);
  *(undefined **)(pCVar6 + 0x20) = &_LC32;
  *(EditorSettingsDialog **)(pCVar6 + 0x28) = this;
  *(undefined1 (*) [16])(pCVar6 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)pCVar6 = &PTR_hash_00118638;
  *(undefined8 *)(pCVar6 + 0x40) = 0;
  uVar2 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(pCVar6 + 0x10) = 0;
  *(undefined8 *)(pCVar6 + 0x30) = uVar2;
  *(code **)(pCVar6 + 0x38) = can_drop_data_fw;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar6,(int)pCVar6 + 0x28);
  *(char **)(pCVar6 + 0x20) = "EditorSettingsDialog::can_drop_data_fw";
  Callable::Callable((Callable *)local_a8,pCVar6);
  Callable::bind<Tree*>(local_b8);
  pCVar6 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar6);
  *(undefined **)(pCVar6 + 0x20) = &_LC32;
  *(undefined1 (*) [16])(pCVar6 + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(pCVar6 + 0x40) = 0;
  uVar2 = *(undefined8 *)(this + 0x60);
  *(undefined ***)pCVar6 = &PTR_hash_001185a8;
  *(undefined8 *)(pCVar6 + 0x30) = uVar2;
  *(code **)(pCVar6 + 0x38) = get_drag_data_fw;
  *(undefined8 *)(pCVar6 + 0x10) = 0;
  *(EditorSettingsDialog **)(pCVar6 + 0x28) = this;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar6,(int)pCVar6 + 0x28);
  *(char **)(pCVar6 + 0x20) = "EditorSettingsDialog::get_drag_data_fw";
  Callable::Callable(local_c8,pCVar6);
  Callable::bind<Tree*>(local_d8);
  (*pcVar1)(plVar9,local_d8,local_b8,(StrRange *)local_98);
  Callable::~Callable((Callable *)local_d8);
  Callable::~Callable(local_c8);
  Callable::~Callable((Callable *)local_b8);
  Callable::~Callable((Callable *)local_a8);
  Callable::~Callable((Callable *)local_98);
  Callable::~Callable((Callable *)&local_88);
  this_08 = (InputEventConfigurationDialog *)operator_new(0xeb8,"");
  InputEventConfigurationDialog::InputEventConfigurationDialog(this_08);
  postinitialize_handler((Object *)this_08);
  lVar4 = *(long *)this_08;
  *(InputEventConfigurationDialog **)(this + 0xe08) = this_08;
  pcVar1 = *(code **)(lVar4 + 0x108);
  create_custom_callable_function_pointer<EditorSettingsDialog>
            ((EditorSettingsDialog *)&local_88,(char *)this,
             (_func_void *)"&EditorSettingsDialog::_event_config_confirmed");
  (*pcVar1)(this_08,SceneStringNames::singleton + 0x268,(String *)&local_88,0);
  Callable::~Callable((Callable *)&local_88);
  InputEventConfigurationDialog::set_allowed_input_types((int)*(undefined8 *)(this + 0xe08));
  Node::add_child(this,*(undefined8 *)(this + 0xe08),0,0);
  AcceptDialog::set_hide_on_ok(SUB81(this,0));
  this_09 = (Timer *)operator_new(0x428,"");
  Timer::Timer(this_09);
  postinitialize_handler((Object *)this_09);
  *(Timer **)(this + 0xe30) = this_09;
  Timer::set_wait_time(_LC84);
  plVar9 = *(long **)(this + 0xe30);
  pcVar1 = *(code **)(*plVar9 + 0x108);
  create_custom_callable_function_pointer<EditorSettingsDialog>
            ((EditorSettingsDialog *)&local_88,(char *)this,
             (_func_void *)"&EditorSettingsDialog::_settings_save");
  StringName::StringName((StringName *)local_98,"timeout",false);
  (*pcVar1)(plVar9,(StrRange *)local_98,(String *)&local_88,0);
  if ((StringName::configured != '\0') && (local_98[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_88);
  Timer::set_one_shot(SUB81(*(undefined8 *)(this + 0xe30),0));
  Node::add_child(this,*(undefined8 *)(this + 0xe30),0,0);
  plVar9 = (long *)EditorSettings::get_singleton();
  pcVar1 = *(code **)(*plVar9 + 0x108);
  create_custom_callable_function_pointer<EditorSettingsDialog>
            ((EditorSettingsDialog *)&local_88,(char *)this,
             (_func_void *)"&EditorSettingsDialog::_settings_changed");
  StringName::StringName((StringName *)local_98,"settings_changed",false);
  (*pcVar1)(plVar9,(StrRange *)local_98,(String *)&local_88,0);
  if ((StringName::configured != '\0') && (local_98[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_88);
  local_88 = "";
  local_98[0] = 0;
  local_80 = 0;
  String::parse_latin1((StrRange *)local_98);
  local_88 = "Close";
  local_a8[0] = 0;
  local_80 = 5;
  String::parse_latin1((StrRange *)local_a8);
  TTR((String *)&local_88,(String *)local_a8);
  AcceptDialog::set_ok_button_text(this,(String *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorSettingsDialog::_update_shortcut_events(String const&, Array const&) */

void __thiscall
EditorSettingsDialog::_update_shortcut_events
          (EditorSettingsDialog *this,String *param_1,Array *param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  Object *pOVar4;
  undefined8 uVar5;
  StringName *pSVar6;
  int iVar7;
  long in_FS_OFFSET;
  StringName *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  String local_a8 [8];
  long local_a0;
  char *local_98;
  undefined8 local_90;
  Variant *local_88 [2];
  int local_78 [2];
  undefined1 local_70 [16];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  EditorSettings::get_singleton();
  EditorSettings::get_shortcut((String *)&local_c0);
  pOVar4 = (Object *)EditorUndoRedoManager::get_singleton();
  uVar5 = EditorSettings::get_singleton();
  local_a0 = 0;
  if (*(long *)param_1 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,(CowData *)param_1);
  }
  local_b0 = 0;
  local_98 = "";
  local_90 = 0;
  String::parse_latin1((StrRange *)&local_b0);
  local_98 = "Edit Shortcut: %s";
  local_b8 = 0;
  local_90 = 0x11;
  String::parse_latin1((StrRange *)&local_b8);
  TTR(local_a8,(String *)&local_b8);
  vformat<String>((CowData<char32_t> *)&local_98,local_a8,(CowData<char32_t> *)&local_a0);
  EditorUndoRedoManager::create_action(pOVar4,(CowData<char32_t> *)&local_98,0,uVar5,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  EditorUndoRedoManager::force_fixed_history();
  Array::Array((Array *)&local_98,param_2);
  StringName::StringName((StringName *)&local_a0,"set_events",false);
  pSVar6 = local_c0;
  Variant::Variant((Variant *)local_78,(Array *)&local_98);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  iVar7 = (int)local_88;
  local_88[0] = (Variant *)local_78;
  EditorUndoRedoManager::add_do_methodp(pOVar4,pSVar6,(Variant **)&local_a0,iVar7);
  if (Variant::needs_deinit[(int)local_60] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_a0 != 0)) {
    StringName::unref();
  }
  Array::~Array((Array *)&local_98);
  Shortcut::get_events();
  StringName::StringName((StringName *)&local_98,"set_events",false);
  pSVar6 = local_c0;
  Variant::Variant((Variant *)local_78,(Array *)&local_a0);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  local_88[0] = (Variant *)local_78;
  EditorUndoRedoManager::add_undo_methodp(pOVar4,pSVar6,(Variant **)&local_98,iVar7);
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
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  Array::~Array((Array *)&local_a0);
  StringName::StringName((StringName *)&local_98,"mark_setting_changed",false);
  pSVar6 = (StringName *)EditorSettings::get_singleton();
  Variant::Variant((Variant *)local_78,"shortcuts");
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  local_88[0] = (Variant *)local_78;
  EditorUndoRedoManager::add_do_methodp(pOVar4,pSVar6,(Variant **)&local_98,iVar7);
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
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_98,"mark_setting_changed",false);
  pSVar6 = (StringName *)EditorSettings::get_singleton();
  Variant::Variant((Variant *)local_78,"shortcuts");
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  local_88[0] = (Variant *)local_78;
  EditorUndoRedoManager::add_undo_methodp(pOVar4,pSVar6,(Variant **)&local_98,iVar7);
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
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_98,"_update_shortcuts",false);
  local_70 = (undefined1  [16])0x0;
  local_78[0] = 0;
  local_78[1] = 0;
  EditorUndoRedoManager::add_do_methodp(pOVar4,(StringName *)this,(Variant **)&local_98,0);
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_98,"_update_shortcuts",false);
  local_70 = (undefined1  [16])0x0;
  local_78[0] = 0;
  local_78[1] = 0;
  EditorUndoRedoManager::add_undo_methodp(pOVar4,(StringName *)this,(Variant **)&local_98,0);
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_98,"_settings_changed",false);
  local_70 = (undefined1  [16])0x0;
  local_78[0] = 0;
  local_78[1] = 0;
  EditorUndoRedoManager::add_do_methodp(pOVar4,(StringName *)this,(Variant **)&local_98,0);
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_98,"_settings_changed",false);
  local_70 = (undefined1  [16])0x0;
  local_78[0] = 0;
  local_78[1] = 0;
  EditorUndoRedoManager::add_undo_methodp(pOVar4,(StringName *)this,(Variant **)&local_98,0);
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  EditorUndoRedoManager::commit_action(SUB81(pOVar4,0));
  cVar1 = String::operator==(param_1,"spatial_editor/viewport_orbit_modifier_1");
  if (cVar1 == '\0') {
    cVar1 = String::operator==(param_1,"spatial_editor/viewport_orbit_modifier_2");
  }
  cVar2 = String::operator==(param_1,"spatial_editor/viewport_pan_modifier_1");
  if (cVar2 == '\0') {
    cVar2 = String::operator==(param_1,"spatial_editor/viewport_pan_modifier_2");
  }
  cVar3 = String::operator==(param_1,"spatial_editor/viewport_zoom_modifier_1");
  if ((((cVar3 != '\0') ||
       (cVar3 = String::operator==(param_1,"spatial_editor/viewport_zoom_modifier_2"), cVar3 != '\0'
       )) || (cVar1 != '\0')) || (cVar2 != '\0')) {
    pSVar6 = (StringName *)EditorSettings::get_singleton();
    Variant::Variant((Variant *)local_78,3);
    StringName::StringName((StringName *)&local_98,"editors/3d/navigation/navigation_scheme",false);
    EditorSettings::_set_only(pSVar6,(Variant *)&local_98);
    if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
      StringName::unref();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if (((local_c0 != (StringName *)0x0) && (cVar1 = RefCounted::unreference(), cVar1 != '\0')) &&
     (cVar1 = predelete_handler((Object *)local_c0), cVar1 != '\0')) {
    (**(code **)(*(long *)local_c0 + 0x140))(local_c0);
    Memory::free_static(local_c0,false);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorSettingsDialog::_should_display_shortcut(String const&, Array const&, bool) const */

undefined4 __thiscall
EditorSettingsDialog::_should_display_shortcut
          (EditorSettingsDialog *this,String *param_1,Array *param_2,bool param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  Object *pOVar5;
  int iVar6;
  long in_FS_OFFSET;
  Object *local_60;
  long local_58;
  undefined8 local_50;
  String local_48 [8];
  long local_40;
  
  iVar6 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  EventListenerLineEdit::get_event();
  if (local_60 == (Object *)0x0) {
LAB_00103a88:
    LineEdit::get_text();
    if (((local_58 == 0) || (*(uint *)(local_58 + -8) < 2)) ||
       (cVar1 = String::is_subsequence_ofn((String *)&local_58), cVar1 != '\0')) {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
      if (param_3) {
        local_50 = 0;
        String::parse_latin1((String *)&local_50,"");
        TTR(local_48,param_1);
        uVar3 = String::is_subsequence_ofn((String *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_48);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      }
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  }
  else {
    for (; iVar2 = Array::size(), iVar6 < iVar2; iVar6 = iVar6 + 1) {
      Array::operator[]((int)param_2);
      lVar4 = Variant::get_validated_object();
      if (((lVar4 != 0) &&
          (pOVar5 = (Object *)__dynamic_cast(lVar4,&Object::typeinfo,&InputEvent::typeinfo,0),
          pOVar5 != (Object *)0x0)) && (cVar1 = RefCounted::reference(), cVar1 != '\0')) {
        cVar1 = (**(code **)(*(long *)pOVar5 + 0x1e8))(pOVar5,&local_60,1);
        if (cVar1 != '\0') {
          cVar1 = RefCounted::unreference();
          if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar5), cVar1 != '\0')) {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
          goto LAB_00103a88;
        }
        cVar1 = RefCounted::unreference();
        if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar5), cVar1 != '\0')) {
          (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
          Memory::free_static(pOVar5,false);
        }
      }
    }
    uVar3 = 0;
  }
  if (((local_60 != (Object *)0x0) && (cVar1 = RefCounted::unreference(), cVar1 != '\0')) &&
     (cVar1 = predelete_handler(local_60), cVar1 != '\0')) {
    (**(code **)(*(long *)local_60 + 0x140))(local_60);
    Memory::free_static(local_60,false);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



/* EditorSettingsDialog::_create_mouse_shortcut_property_info(String const&, String const&, String
   const&) */

String * EditorSettingsDialog::_create_mouse_shortcut_property_info
                   (String *param_1,String *param_2,String *param_3)

{
  long lVar1;
  long in_FS_OFFSET;
  long local_60;
  String local_58 [8];
  long local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = 0;
  _get_shortcut_button_string((String *)&local_50);
  _get_shortcut_button_string(local_58);
  String::operator+((String *)&local_48,local_58);
  String::operator+=((String *)&local_60,(String *)&local_48);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  String::operator+=((String *)&local_60,"Left Mouse,");
  _get_shortcut_button_string((String *)&local_50);
  _get_shortcut_button_string(local_58);
  String::operator+((String *)&local_48,local_58);
  String::operator+=((String *)&local_60,(String *)&local_48);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  String::operator+=((String *)&local_60,"Middle Mouse,");
  _get_shortcut_button_string((String *)&local_50);
  _get_shortcut_button_string(local_58);
  String::operator+((String *)&local_48,local_58);
  String::operator+=((String *)&local_60,(String *)&local_48);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  String::operator+=((String *)&local_60,"Right Mouse,");
  _get_shortcut_button_string((String *)&local_50);
  _get_shortcut_button_string(local_58);
  String::operator+((String *)&local_48,local_58);
  String::operator+=((String *)&local_60,(String *)&local_48);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  String::operator+=((String *)&local_60,"Mouse Button 4,");
  _get_shortcut_button_string((String *)&local_50);
  _get_shortcut_button_string(local_58);
  String::operator+((String *)&local_48,local_58);
  String::operator+=((String *)&local_60,(String *)&local_48);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  String::operator+=((String *)&local_60,"Mouse Button 5");
  *(undefined8 *)(param_1 + 8) = 0;
  local_50 = 0;
  lVar1 = *(long *)param_3;
  *(undefined4 *)param_1 = 2;
  if (lVar1 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(param_1 + 8),(CowData *)param_3);
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 2;
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (local_60 == 0) {
    *(undefined4 *)(param_1 + 0x28) = 6;
LAB_00103ed8:
    StringName::operator=((StringName *)(param_1 + 0x10),(StringName *)&local_50);
joined_r0x00103eed:
    if (StringName::configured == '\0') goto LAB_00103ea0;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(param_1 + 0x20),(CowData *)&local_60);
    *(undefined4 *)(param_1 + 0x28) = 6;
    if (*(int *)(param_1 + 0x18) != 0x11) goto LAB_00103ed8;
    StringName::StringName((StringName *)&local_48,param_1 + 0x20,false);
    if (*(long *)(param_1 + 0x10) != local_48) {
      StringName::unref();
      *(long *)(param_1 + 0x10) = local_48;
      goto joined_r0x00103eed;
    }
    if (StringName::configured == '\0') goto LAB_00103ea0;
    if (local_48 != 0) {
      StringName::unref();
      goto joined_r0x00103eed;
    }
  }
  if (local_50 != 0) {
    StringName::unref();
  }
LAB_00103ea0:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* EditorSettingsDialog::_update_builtin_action(String const&, Array const&) */

void __thiscall
EditorSettingsDialog::_update_builtin_action
          (EditorSettingsDialog *this,String *param_1,Array *param_2)

{
  Variant *pVVar1;
  uint uVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  code *pcVar12;
  ulong uVar13;
  char cVar14;
  uint uVar15;
  Object *pOVar16;
  StringName *pSVar17;
  long lVar18;
  undefined1 (*pauVar19) [16];
  undefined1 (*pauVar20) [16];
  uint uVar21;
  uint uVar22;
  long lVar23;
  long lVar24;
  uint uVar25;
  long *plVar26;
  Variant *pVVar27;
  long in_FS_OFFSET;
  String local_150 [8];
  undefined8 local_148;
  undefined8 local_140;
  long local_138;
  undefined1 (*local_130) [16];
  char *local_128;
  undefined8 local_120;
  Variant *local_118 [2];
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
  EditorSettings::get_singleton();
  EditorSettings::get_builtin_action_overrides(local_150);
  cVar14 = Array::is_empty();
  if (cVar14 == '\0') {
LAB_00103ffb:
    pOVar16 = (Object *)EditorUndoRedoManager::get_singleton();
    local_130 = (undefined1 (*) [16])0x0;
    if (*(long *)param_1 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_130,(CowData *)param_1);
    }
    local_140 = 0;
    local_120 = 0;
    local_128 = "";
    String::parse_latin1((StrRange *)&local_140);
    local_128 = "Edit Built-in Action: %s";
    local_148 = 0;
    local_120 = 0x18;
    String::parse_latin1((StrRange *)&local_148);
    TTR((String *)&local_138,(String *)&local_148);
    vformat<String>((CowData<char32_t> *)&local_128,(String *)&local_138,
                    (CowData<char32_t> *)&local_130);
    EditorUndoRedoManager::create_action(pOVar16,(CowData<char32_t> *)&local_128,0,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_130);
    StringName::StringName((StringName *)&local_128,"mark_setting_changed",false);
    pSVar17 = (StringName *)EditorSettings::get_singleton();
    Variant::Variant((Variant *)&local_108,"builtin_action_overrides");
    local_f0 = 0;
    local_e8 = (undefined1  [16])0x0;
    local_118[0] = (Variant *)&local_108;
    EditorUndoRedoManager::add_do_methodp(pOVar16,pSVar17,(Variant **)&local_128,(int)local_118);
    if (Variant::needs_deinit[(int)local_f0] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[(int)local_108] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_128 != (char *)0x0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_128,"mark_setting_changed",false);
    pSVar17 = (StringName *)EditorSettings::get_singleton();
    Variant::Variant((Variant *)&local_108,"builtin_action_overrides");
    local_f0 = 0;
    local_e8 = (undefined1  [16])0x0;
    local_118[0] = (Variant *)&local_108;
    EditorUndoRedoManager::add_undo_methodp(pOVar16,pSVar17,(Variant **)&local_128,(int)local_118);
    if (Variant::needs_deinit[(int)local_f0] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[(int)local_108] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_128 != (char *)0x0)) {
      StringName::unref();
    }
    Array::Array((Array *)&local_128,param_2);
    local_130 = (undefined1 (*) [16])0x0;
    if (*(long *)param_1 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_130,(CowData *)param_1);
    }
    StringName::StringName((StringName *)&local_138,"set_builtin_action_override",false);
    pSVar17 = (StringName *)EditorSettings::get_singleton();
    Variant::Variant((Variant *)&local_d8,(String *)&local_130);
    Variant::Variant(local_c0,(Array *)&local_128);
    local_a0 = (undefined1  [16])0x0;
    pVVar27 = local_90;
    local_a8 = 0;
    local_108 = (Variant *)&local_d8;
    pVStack_100 = local_c0;
    EditorUndoRedoManager::add_do_methodp
              (pOVar16,pSVar17,(Variant **)&local_138,(int)(Variant *)&local_108);
    do {
      pVVar1 = pVVar27 + -0x18;
      pVVar27 = pVVar27 + -0x18;
      if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
        Variant::_clear_internal();
      }
    } while (pVVar27 != (Variant *)&local_d8);
    if ((StringName::configured != '\0') && (local_138 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_130);
    Array::~Array((Array *)&local_128);
    Array::Array((Array *)&local_128,(Array *)local_150);
    local_130 = (undefined1 (*) [16])0x0;
    if (*(long *)param_1 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_130,(CowData *)param_1);
    }
    StringName::StringName((StringName *)&local_138,"set_builtin_action_override",false);
    pSVar17 = (StringName *)EditorSettings::get_singleton();
    Variant::Variant((Variant *)local_88,(String *)&local_130);
    Variant::Variant(local_70,(Array *)&local_128);
    local_50 = (undefined1  [16])0x0;
    pVVar27 = (Variant *)local_40;
    local_58 = 0;
    local_d8 = (Variant *)local_88;
    pVStack_d0 = local_70;
    EditorUndoRedoManager::add_undo_methodp
              (pOVar16,pSVar17,(Variant **)&local_138,(int)(Variant *)&local_d8);
    do {
      pVVar1 = pVVar27 + -0x18;
      pVVar27 = pVVar27 + -0x18;
      if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
        Variant::_clear_internal();
      }
    } while (pVVar27 != (Variant *)local_88);
    if ((StringName::configured != '\0') && (local_138 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_130);
    Array::~Array((Array *)&local_128);
    StringName::StringName((StringName *)&local_128,"_update_shortcuts",false);
    local_80 = (undefined1  [16])0x0;
    local_88[0] = 0;
    local_88[1] = 0;
    EditorUndoRedoManager::add_do_methodp(pOVar16,(StringName *)this,(Variant **)&local_128,0);
    if (Variant::needs_deinit[local_88[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_128 != (char *)0x0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_128,"_update_shortcuts",false);
    local_80 = (undefined1  [16])0x0;
    local_88[0] = 0;
    local_88[1] = 0;
    EditorUndoRedoManager::add_undo_methodp(pOVar16,(StringName *)this,(Variant **)&local_128,0);
    if (Variant::needs_deinit[local_88[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_128 != (char *)0x0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_128,"_settings_changed",false);
    local_80 = (undefined1  [16])0x0;
    local_88[0] = 0;
    local_88[1] = 0;
    EditorUndoRedoManager::add_do_methodp(pOVar16,(StringName *)this,(Variant **)&local_128,0);
    if (Variant::needs_deinit[local_88[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_128 != (char *)0x0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_128,"_settings_changed",false);
    local_80 = (undefined1  [16])0x0;
    local_88[0] = 0;
    local_88[1] = 0;
    EditorUndoRedoManager::add_undo_methodp(pOVar16,(StringName *)this,(Variant **)&local_128,0);
    if (Variant::needs_deinit[local_88[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_128 != (char *)0x0)) {
      StringName::unref();
    }
    EditorUndoRedoManager::commit_action(SUB81(pOVar16,0));
    Array::~Array((Array *)local_150);
    if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  lVar18 = InputMap::get_builtins_with_feature_overrides_applied();
  if ((*(long *)(lVar18 + 8) != 0) && (*(int *)(lVar18 + 0x2c) != 0)) {
    uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar18 + 0x28) * 4);
    lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar18 + 0x28) * 8);
    uVar15 = String::hash();
    uVar13 = CONCAT44(0,uVar2);
    lVar24 = *(long *)(lVar18 + 0x10);
    uVar21 = 1;
    if (uVar15 != 0) {
      uVar21 = uVar15;
    }
    auVar4._8_8_ = 0;
    auVar4._0_8_ = (ulong)uVar21 * lVar3;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar13;
    lVar23 = SUB168(auVar4 * auVar8,8);
    uVar15 = *(uint *)(lVar24 + lVar23 * 4);
    uVar22 = SUB164(auVar4 * auVar8,8);
    if (uVar15 != 0) {
      uVar25 = 0;
      do {
        if (uVar15 == uVar21) {
          cVar14 = String::operator==((String *)
                                      (*(long *)(*(long *)(lVar18 + 8) + lVar23 * 8) + 0x10),
                                      (String *)(this + 0xe18));
          if (cVar14 != '\0') {
            local_130 = (undefined1 (*) [16])0x0;
            plVar26 = *(long **)(*(long *)(*(long *)(lVar18 + 8) + (ulong)uVar22 * 8) + 0x18);
            if ((plVar26 != (long *)0x0) && (plVar26 = (long *)*plVar26, plVar26 != (long *)0x0)) {
              pauVar19 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
              *(undefined4 *)pauVar19[1] = 0;
              *pauVar19 = (undefined1  [16])0x0;
              local_130 = pauVar19;
              do {
                pauVar20 = (undefined1 (*) [16])operator_new(0x20,DefaultAllocator::alloc);
                *pauVar20 = (undefined1  [16])0x0;
                pauVar20[1] = (undefined1  [16])0x0;
                if (*plVar26 != 0) {
                  *(long *)*pauVar20 = *plVar26;
                  cVar14 = RefCounted::reference();
                  if (cVar14 == '\0') {
                    *(undefined8 *)*pauVar20 = 0;
                  }
                }
                lVar18 = *(long *)(*pauVar19 + 8);
                *(undefined8 *)(*pauVar20 + 8) = 0;
                *(undefined1 (**) [16])(pauVar20[1] + 8) = pauVar19;
                *(long *)pauVar20[1] = lVar18;
                if (lVar18 != 0) {
                  *(undefined1 (**) [16])(lVar18 + 8) = pauVar20;
                }
                lVar18 = *(long *)*pauVar19;
                *(undefined1 (**) [16])(*pauVar19 + 8) = pauVar20;
                if (lVar18 == 0) {
                  plVar26 = (long *)plVar26[1];
                  *(int *)pauVar19[1] = *(int *)pauVar19[1] + 1;
                  *(undefined1 (**) [16])*pauVar19 = pauVar20;
                }
                else {
                  plVar26 = (long *)plVar26[1];
                  *(int *)pauVar19[1] = *(int *)pauVar19[1] + 1;
                }
              } while (plVar26 != (long *)0x0);
            }
            _event_list_to_array_helper((List *)&local_128);
            Array::operator=((Array *)local_150,(Array *)&local_128);
            Array::~Array((Array *)&local_128);
            List<Ref<InputEvent>,DefaultAllocator>::~List
                      ((List<Ref<InputEvent>,DefaultAllocator> *)&local_130);
            goto LAB_00103ffb;
          }
          lVar24 = *(long *)(lVar18 + 0x10);
        }
        uVar25 = uVar25 + 1;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = (ulong)(uVar22 + 1) * lVar3;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar13;
        lVar23 = SUB168(auVar5 * auVar9,8);
        uVar15 = *(uint *)(lVar24 + lVar23 * 4);
        uVar22 = SUB164(auVar5 * auVar9,8);
      } while ((uVar15 != 0) &&
              (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar15 * lVar3, auVar10._8_8_ = 0,
              auVar10._0_8_ = uVar13, auVar7._8_8_ = 0,
              auVar7._0_8_ = (ulong)((uVar2 + uVar22) - SUB164(auVar6 * auVar10,8)) * lVar3,
              auVar11._8_8_ = 0, auVar11._0_8_ = uVar13, uVar25 <= SUB164(auVar7 * auVar11,8)));
    }
  }
  _err_print_error("operator[]","./core/templates/hash_map.h",0x245,
                   "FATAL: Condition \"!exists\" is true.",0,0);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar12 = (code *)invalidInstructionException();
  (*pcVar12)();
}



/* EditorSettingsDialog::drop_data_fw(Vector2 const&, Variant const&, Control*) */

void EditorSettingsDialog::drop_data_fw(Vector2 *param_1,Variant *param_2,Control *param_3)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  long *plVar5;
  long *plVar6;
  Variant *pVVar7;
  int iVar8;
  long in_FS_OFFSET;
  Variant local_b0 [8];
  Variant local_a8 [8];
  long local_a0;
  int local_98 [8];
  undefined8 local_78;
  undefined1 local_70 [16];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  cVar2 = can_drop_data_fw(param_1,param_2,param_3);
  if (cVar2 != '\0') {
    plVar5 = (long *)Tree::get_selected();
    plVar6 = (long *)Tree::get_item_at_position(*(Vector2 **)(param_1 + 0xe00));
    if (plVar6 != (long *)0x0) {
      pcVar1 = *(code **)(*plVar6 + 0xb8);
      local_70 = (undefined1  [16])0x0;
      local_78 = 0;
      StringName::StringName((StringName *)&local_a0,"event_index",false);
      (*pcVar1)((Variant *)local_58,plVar6,(StringName *)&local_a0,&local_78);
      uVar4 = Variant::operator_cast_to_int((Variant *)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_a0 != 0)) {
        StringName::unref();
      }
      if (Variant::needs_deinit[(int)local_78] != '\0') {
        Variant::_clear_internal();
      }
      pcVar1 = *(code **)(*plVar5 + 0xb8);
      local_70 = (undefined1  [16])0x0;
      local_78 = 0;
      StringName::StringName((StringName *)&local_a0,"event_index",false);
      (*pcVar1)((Variant *)local_58,plVar5,(StringName *)&local_a0,&local_78);
      Variant::operator_cast_to_int((Variant *)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_a0 != 0)) {
        StringName::unref();
      }
      if (Variant::needs_deinit[(int)local_78] != '\0') {
        Variant::_clear_internal();
      }
      plVar6 = (long *)TreeItem::get_parent();
      pcVar1 = *(code **)(*plVar6 + 0xb8);
      local_70 = (undefined1  [16])0x0;
      local_78 = 0;
      StringName::StringName((StringName *)&local_a0,"events",false);
      (*pcVar1)((Variant *)local_58,plVar6,(StringName *)&local_a0,&local_78);
      Variant::operator_cast_to_Array(local_b0);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_a0 != 0)) {
        StringName::unref();
      }
      if (Variant::needs_deinit[(int)local_78] != '\0') {
        Variant::_clear_internal();
      }
      iVar8 = (int)local_b0;
      pVVar7 = (Variant *)Array::operator[](iVar8);
      Variant::Variant((Variant *)local_98,pVVar7);
      Array::remove_at(iVar8);
      Array::insert(iVar8,(Variant *)(ulong)uVar4);
      plVar6 = (long *)TreeItem::get_parent();
      pcVar1 = *(code **)(*plVar6 + 0xb8);
      local_70 = (undefined1  [16])0x0;
      local_78 = 0;
      StringName::StringName((StringName *)&local_a0,"shortcut_identifier",false);
      (*pcVar1)((Variant *)local_58,plVar6,(StringName *)&local_a0,&local_78);
      Variant::operator_cast_to_String(local_a8);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_a0 != 0)) {
        StringName::unref();
      }
      if (Variant::needs_deinit[(int)local_78] != '\0') {
        Variant::_clear_internal();
      }
      pcVar1 = *(code **)(*plVar5 + 0xb8);
      local_70 = (undefined1  [16])0x0;
      local_78 = 0;
      StringName::StringName((StringName *)&local_a0,"is_action",false);
      (*pcVar1)((Variant *)local_58,plVar5,(StringName *)&local_a0,&local_78);
      bVar3 = Variant::operator_cast_to_bool((Variant *)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_a0 != 0)) {
        StringName::unref();
      }
      if (Variant::needs_deinit[(int)local_78] != '\0') {
        Variant::_clear_internal();
      }
      if (bVar3) {
        _update_builtin_action((EditorSettingsDialog *)param_1,(String *)local_a8,(Array *)local_b0)
        ;
      }
      else {
        _update_shortcut_events
                  ((EditorSettingsDialog *)param_1,(String *)local_a8,(Array *)local_b0);
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
      if (Variant::needs_deinit[local_98[0]] != '\0') {
        Variant::_clear_internal();
      }
      Array::~Array((Array *)local_b0);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorSettingsDialog::_update_dynamic_property_hints() */

void __thiscall EditorSettingsDialog::_update_dynamic_property_hints(EditorSettingsDialog *this)

{
  PropertyInfo *pPVar1;
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  CowData<char32_t> local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pPVar1 = (PropertyInfo *)EditorSettings::get_singleton();
  local_80 = 0;
  local_78 = "spatial_editor/viewport_orbit_modifier_2";
  local_70 = 0x28;
  String::parse_latin1((StrRange *)&local_80);
  local_78 = "spatial_editor/viewport_orbit_modifier_1";
  local_88 = 0;
  local_70 = 0x28;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "editors/3d/navigation/orbit_mouse_button";
  local_90 = 0;
  local_70 = 0x28;
  String::parse_latin1((StrRange *)&local_90);
  _create_mouse_shortcut_property_info((String *)&local_78,(String *)this,(String *)&local_90);
  EditorSettings::add_property_hint(pPVar1);
  CowData<char32_t>::_unref(local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  local_78 = "spatial_editor/viewport_pan_modifier_2";
  local_80 = 0;
  local_70 = 0x26;
  String::parse_latin1((StrRange *)&local_80);
  local_78 = "spatial_editor/viewport_pan_modifier_1";
  local_88 = 0;
  local_70 = 0x26;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "editors/3d/navigation/pan_mouse_button";
  local_90 = 0;
  local_70 = 0x26;
  String::parse_latin1((StrRange *)&local_90);
  _create_mouse_shortcut_property_info((String *)&local_78,(String *)this,(String *)&local_90);
  EditorSettings::add_property_hint(pPVar1);
  CowData<char32_t>::_unref(local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  local_78 = "spatial_editor/viewport_zoom_modifier_2";
  local_80 = 0;
  local_70 = 0x27;
  String::parse_latin1((StrRange *)&local_80);
  local_78 = "spatial_editor/viewport_zoom_modifier_1";
  local_88 = 0;
  local_70 = 0x27;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "editors/3d/navigation/zoom_mouse_button";
  local_90 = 0;
  local_70 = 0x27;
  String::parse_latin1((StrRange *)&local_90);
  _create_mouse_shortcut_property_info((String *)&local_78,(String *)this,(String *)&local_90);
  EditorSettings::add_property_hint(pPVar1);
  CowData<char32_t>::_unref(local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorSettingsDialog::_tabs_tab_changed(int) */

void EditorSettingsDialog::_tabs_tab_changed(int param_1)

{
  long lVar1;
  undefined4 in_register_0000003c;
  EditorSettingsDialog *this;
  
  this = (EditorSettingsDialog *)CONCAT44(in_register_0000003c,param_1);
  lVar1 = TabContainer::get_current_tab_control();
  if (lVar1 == *(long *)(this + 0xdc0)) {
    lVar1 = *(long *)(this + 0xdd0);
  }
  else {
    if (lVar1 != *(long *)(this + 0xdc8)) goto LAB_001051ab;
    lVar1 = *(long *)(this + 0xde0);
  }
  if (lVar1 != 0) {
    Control::grab_focus();
    LineEdit::select_all();
  }
LAB_001051ab:
  _update_dynamic_property_hints(this);
  SectionedInspector::get_inspector();
  EditorInspector::update_tree();
  return;
}



/* EditorSettingsDialog::update_navigation_preset() */

void EditorSettingsDialog::update_navigation_preset(void)

{
  Object *pOVar1;
  Object *pOVar2;
  Object *pOVar3;
  char cVar4;
  int iVar5;
  StringName *pSVar6;
  long in_FS_OFFSET;
  Ref *local_e8;
  Ref *local_e0;
  Ref *local_d8;
  Ref *local_d0;
  int local_c8;
  int local_bc;
  bool local_b0;
  undefined8 local_a0;
  undefined8 local_98;
  Object *local_90;
  Object *local_88;
  Object *local_80;
  undefined8 local_78;
  undefined8 local_70;
  Ref *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = 0;
  local_60 = 0x27;
  local_68 = (Ref *)0x10af18;
  String::parse_latin1((StrRange *)&local_70);
  _EDITOR_GET((String *)local_58);
  iVar5 = Variant::operator_cast_to_int((Variant *)local_58);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_a0 = 0;
  local_98 = 0;
  local_90 = (Object *)0x0;
  local_88 = (Object *)0x0;
  local_80 = (Object *)0x0;
  local_78 = 0;
  if (iVar5 == 0) {
    InputEventKey::create_reference((Ref<InputEventKey> *)&local_68,0,0);
    Ref<InputEventKey>::operator=((Ref<InputEventKey> *)&local_a0,local_68);
    Ref<InputEventKey>::unref((Ref<InputEventKey> *)&local_68);
    InputEventKey::create_reference((Ref<InputEventKey> *)&local_68,0,0);
    Ref<InputEventKey>::operator=((Ref<InputEventKey> *)&local_98,local_68);
    Ref<InputEventKey>::unref((Ref<InputEventKey> *)&local_68);
    InputEventKey::create_reference((Ref<InputEventKey> *)&local_68,0x400015,0);
    Ref<InputEventKey>::operator=((Ref<InputEventKey> *)&local_90,local_68);
    Ref<InputEventKey>::unref((Ref<InputEventKey> *)&local_68);
    InputEventKey::create_reference((Ref<InputEventKey> *)&local_68,0,0);
    Ref<InputEventKey>::operator=((Ref<InputEventKey> *)&local_88,local_68);
    Ref<InputEventKey>::unref((Ref<InputEventKey> *)&local_68);
    InputEventKey::create_reference((Ref<InputEventKey> *)&local_68,0x400016,0);
    Ref<InputEventKey>::operator=((Ref<InputEventKey> *)&local_80,local_68);
    Ref<InputEventKey>::unref((Ref<InputEventKey> *)&local_68);
    InputEventKey::create_reference((Ref<InputEventKey> *)&local_68,0,0);
    Ref<InputEventKey>::operator=((Ref<InputEventKey> *)&local_78,local_68);
    Ref<InputEventKey>::unref((Ref<InputEventKey> *)&local_68);
    local_b0 = false;
    iVar5 = 1;
    local_bc = 1;
    local_c8 = 1;
  }
  else if (iVar5 == 1) {
    InputEventKey::create_reference((Ref<InputEventKey> *)&local_68,0x400018,0);
    Ref<InputEventKey>::operator=((Ref<InputEventKey> *)&local_a0,local_68);
    Ref<InputEventKey>::unref((Ref<InputEventKey> *)&local_68);
    InputEventKey::create_reference((Ref<InputEventKey> *)&local_68,0,0);
    Ref<InputEventKey>::operator=((Ref<InputEventKey> *)&local_98,local_68);
    Ref<InputEventKey>::unref((Ref<InputEventKey> *)&local_68);
    InputEventKey::create_reference((Ref<InputEventKey> *)&local_68,0,0);
    Ref<InputEventKey>::operator=((Ref<InputEventKey> *)&local_90,local_68);
    Ref<InputEventKey>::unref((Ref<InputEventKey> *)&local_68);
    InputEventKey::create_reference((Ref<InputEventKey> *)&local_68,0,0);
    Ref<InputEventKey>::operator=((Ref<InputEventKey> *)&local_88,local_68);
    Ref<InputEventKey>::unref((Ref<InputEventKey> *)&local_68);
    InputEventKey::create_reference((Ref<InputEventKey> *)&local_68,0x400018,0);
    Ref<InputEventKey>::operator=((Ref<InputEventKey> *)&local_80,local_68);
    Ref<InputEventKey>::unref((Ref<InputEventKey> *)&local_68);
    InputEventKey::create_reference((Ref<InputEventKey> *)&local_68,0,0);
    Ref<InputEventKey>::operator=((Ref<InputEventKey> *)&local_78,local_68);
    Ref<InputEventKey>::unref((Ref<InputEventKey> *)&local_68);
    local_b0 = false;
    iVar5 = 0;
    local_bc = 2;
    local_c8 = 1;
  }
  else if (iVar5 == 2) {
    InputEventKey::create_reference((Ref<InputEventKey> *)&local_68,0x400018,0);
    Ref<InputEventKey>::operator=((Ref<InputEventKey> *)&local_a0,local_68);
    Ref<InputEventKey>::unref((Ref<InputEventKey> *)&local_68);
    InputEventKey::create_reference((Ref<InputEventKey> *)&local_68,0,0);
    Ref<InputEventKey>::operator=((Ref<InputEventKey> *)&local_98,local_68);
    Ref<InputEventKey>::unref((Ref<InputEventKey> *)&local_68);
    InputEventKey::create_reference((Ref<InputEventKey> *)&local_68,0x400015,0);
    Ref<InputEventKey>::operator=((Ref<InputEventKey> *)&local_90,local_68);
    Ref<InputEventKey>::unref((Ref<InputEventKey> *)&local_68);
    InputEventKey::create_reference((Ref<InputEventKey> *)&local_68,0x400018,0);
    Ref<InputEventKey>::operator=((Ref<InputEventKey> *)&local_88,local_68);
    Ref<InputEventKey>::unref((Ref<InputEventKey> *)&local_68);
    InputEventKey::create_reference((Ref<InputEventKey> *)&local_68,0x400018,0);
    Ref<InputEventKey>::operator=((Ref<InputEventKey> *)&local_80,local_68);
    Ref<InputEventKey>::unref((Ref<InputEventKey> *)&local_68);
    InputEventKey::create_reference((Ref<InputEventKey> *)&local_68,0x400016,0);
    Ref<InputEventKey>::operator=((Ref<InputEventKey> *)&local_78,local_68);
    Ref<InputEventKey>::unref((Ref<InputEventKey> *)&local_68);
    local_b0 = false;
    iVar5 = 0;
    local_bc = 0;
    local_c8 = 0;
  }
  else {
    if (iVar5 != 4) {
      Ref<InputEventKey>::unref((Ref<InputEventKey> *)&local_78);
      goto LAB_00105312;
    }
    InputEventKey::create_reference((Ref<InputEventKey> *)&local_68,0x400018,0);
    Ref<InputEventKey>::operator=((Ref<InputEventKey> *)&local_a0,local_68);
    Ref<InputEventKey>::unref((Ref<InputEventKey> *)&local_68);
    InputEventKey::create_reference((Ref<InputEventKey> *)&local_68,0,0);
    Ref<InputEventKey>::operator=((Ref<InputEventKey> *)&local_98,local_68);
    Ref<InputEventKey>::unref((Ref<InputEventKey> *)&local_68);
    InputEventKey::create_reference((Ref<InputEventKey> *)&local_68,0x400015,0);
    Ref<InputEventKey>::operator=((Ref<InputEventKey> *)&local_90,local_68);
    Ref<InputEventKey>::unref((Ref<InputEventKey> *)&local_68);
    InputEventKey::create_reference((Ref<InputEventKey> *)&local_68,0,0);
    Ref<InputEventKey>::operator=((Ref<InputEventKey> *)&local_88,local_68);
    Ref<InputEventKey>::unref((Ref<InputEventKey> *)&local_68);
    InputEventKey::create_reference((Ref<InputEventKey> *)&local_68,0x400016,0);
    Ref<InputEventKey>::operator=((Ref<InputEventKey> *)&local_80,local_68);
    Ref<InputEventKey>::unref((Ref<InputEventKey> *)&local_68);
    InputEventKey::create_reference((Ref<InputEventKey> *)&local_68,0,0);
    Ref<InputEventKey>::operator=((Ref<InputEventKey> *)&local_78,local_68);
    Ref<InputEventKey>::unref((Ref<InputEventKey> *)&local_68);
    local_b0 = true;
    iVar5 = 1;
    local_bc = 1;
    local_c8 = 1;
  }
  local_d0 = (Ref *)&local_78;
  local_d8 = (Ref *)&local_80;
  local_e0 = (Ref *)&local_88;
  local_e8 = (Ref *)&local_90;
  pSVar6 = (StringName *)EditorSettings::get_singleton();
  Variant::Variant((Variant *)local_58,iVar5);
  StringName::StringName((StringName *)&local_68,"editors/3d/navigation/orbit_mouse_button",false);
  EditorSettings::_set_only(pSVar6,(Variant *)&local_68);
  if ((StringName::configured != '\0') && (local_68 != (Ref *)0x0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  pSVar6 = (StringName *)EditorSettings::get_singleton();
  Variant::Variant((Variant *)local_58,local_c8);
  StringName::StringName((StringName *)&local_68,"editors/3d/navigation/pan_mouse_button",false);
  EditorSettings::_set_only(pSVar6,(Variant *)&local_68);
  if ((StringName::configured != '\0') && (local_68 != (Ref *)0x0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  pSVar6 = (StringName *)EditorSettings::get_singleton();
  Variant::Variant((Variant *)local_58,local_bc);
  StringName::StringName((StringName *)&local_68,"editors/3d/navigation/zoom_mouse_button",false);
  EditorSettings::_set_only(pSVar6,(Variant *)&local_68);
  if ((StringName::configured != '\0') && (local_68 != (Ref *)0x0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  pSVar6 = (StringName *)EditorSettings::get_singleton();
  Variant::Variant((Variant *)local_58,local_b0);
  StringName::StringName
            ((StringName *)&local_68,"editors/3d/navigation/emulate_3_button_mouse",false);
  EditorSettings::_set_only(pSVar6,(Variant *)&local_68);
  if ((StringName::configured != '\0') && (local_68 != (Ref *)0x0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  local_70 = 0;
  local_68 = (Ref *)0x10ae40;
  local_60 = 0x28;
  String::parse_latin1((StrRange *)&local_70);
  _set_shortcut_input((String *)&local_70,(Ref *)&local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = (Ref *)0x10ae70;
  local_70 = 0;
  local_60 = 0x28;
  String::parse_latin1((StrRange *)&local_70);
  _set_shortcut_input((String *)&local_70,(Ref *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = (Ref *)0x10aea0;
  local_70 = 0;
  local_60 = 0x26;
  String::parse_latin1((StrRange *)&local_70);
  _set_shortcut_input((String *)&local_70,local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = (Ref *)0x10aec8;
  local_70 = 0;
  local_60 = 0x26;
  String::parse_latin1((StrRange *)&local_70);
  _set_shortcut_input((String *)&local_70,local_e0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = (Ref *)0x10aef0;
  local_70 = 0;
  local_60 = 0x27;
  String::parse_latin1((StrRange *)&local_70);
  _set_shortcut_input((String *)&local_70,local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = (Ref *)0x10af40;
  local_70 = 0;
  local_60 = 0x27;
  String::parse_latin1((StrRange *)&local_70);
  _set_shortcut_input((String *)&local_70,local_d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  pOVar3 = local_80;
  pOVar2 = local_88;
  pOVar1 = local_90;
  Ref<InputEventKey>::unref((Ref<InputEventKey> *)local_d0);
  if (pOVar3 != (Object *)0x0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  if (pOVar2 != (Object *)0x0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      cVar4 = predelete_handler(pOVar2);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
  if (pOVar1 != (Object *)0x0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      cVar4 = predelete_handler(pOVar1);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
LAB_00105312:
  Ref<InputEventKey>::unref((Ref<InputEventKey> *)&local_98);
  Ref<InputEventKey>::unref((Ref<InputEventKey> *)&local_a0);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorSettingsDialog::_settings_property_edited(String const&) */

void EditorSettingsDialog::_settings_property_edited(String *param_1)

{
  char cVar1;
  StringName *pSVar2;
  char *pcVar3;
  long in_FS_OFFSET;
  String aSStack_58 [8];
  long local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  SectionedInspector::get_full_item_path(aSStack_58);
  cVar1 = String::operator==(aSStack_58,"interface/theme/accent_color");
  if (cVar1 == '\0') {
    cVar1 = String::operator==(aSStack_58,"interface/theme/base_color");
    if (cVar1 != '\0') goto LAB_00105cfd;
    cVar1 = String::operator==(aSStack_58,"interface/theme/contrast");
    if (cVar1 != '\0') goto LAB_00105cfd;
    cVar1 = String::operator==(aSStack_58,"interface/theme/draw_extra_borders");
    if (cVar1 != '\0') goto LAB_00105cfd;
    cVar1 = String::operator==(aSStack_58,"interface/theme/base_spacing");
    if (cVar1 != '\0') {
LAB_00105dec:
      pSVar2 = (StringName *)EditorSettings::get_singleton();
      Variant::Variant((Variant *)local_48,"Custom");
      pcVar3 = "interface/theme/spacing_preset";
      goto LAB_00105d27;
    }
    cVar1 = String::operator==(aSStack_58,"interface/theme/additional_spacing");
    if (cVar1 != '\0') goto LAB_00105dec;
    cVar1 = String::begins_with((char *)aSStack_58);
    if (cVar1 == '\0') {
      cVar1 = String::begins_with((char *)aSStack_58);
      if (cVar1 == '\0') {
        cVar1 = String::begins_with((char *)aSStack_58);
        if (cVar1 == '\0') {
          cVar1 = String::operator==(aSStack_58,"editors/3d/navigation/orbit_mouse_button");
          if (cVar1 == '\0') {
            cVar1 = String::operator==(aSStack_58,"editors/3d/navigation/pan_mouse_button");
            if (cVar1 == '\0') {
              cVar1 = String::operator==(aSStack_58,"editors/3d/navigation/zoom_mouse_button");
              if (cVar1 == '\0') {
                cVar1 = String::operator==(aSStack_58,"editors/3d/navigation/emulate_3_button_mouse"
                                          );
                if (cVar1 == '\0') {
                  cVar1 = String::operator==(aSStack_58,"editors/3d/navigation/navigation_scheme");
                  if (cVar1 != '\0') {
                    update_navigation_preset();
                  }
                  goto LAB_00105d6c;
                }
              }
            }
          }
          pSVar2 = (StringName *)EditorSettings::get_singleton();
          Variant::Variant((Variant *)local_48,3);
          pcVar3 = "editors/3d/navigation/navigation_scheme";
          goto LAB_00105e6a;
        }
      }
      pSVar2 = (StringName *)EditorSettings::get_singleton();
      Variant::Variant((Variant *)local_48,"Custom");
      pcVar3 = "editors/visual_editors/color_theme";
    }
    else {
      pSVar2 = (StringName *)EditorSettings::get_singleton();
      Variant::Variant((Variant *)local_48,"Custom");
      pcVar3 = "text_editor/theme/color_theme";
    }
LAB_00105e6a:
    StringName::StringName((StringName *)&local_50,pcVar3,false);
    EditorSettings::_set_only(pSVar2,(Variant *)&local_50);
    if ((StringName::configured != '\0') && (local_50 != 0)) {
      StringName::unref();
    }
  }
  else {
LAB_00105cfd:
    pSVar2 = (StringName *)EditorSettings::get_singleton();
    Variant::Variant((Variant *)local_48,"Custom");
    pcVar3 = "interface/theme/preset";
LAB_00105d27:
    StringName::StringName((StringName *)&local_50,pcVar3,false);
    EditorSettings::_set_only(pSVar2,(Variant *)&local_50);
    if ((StringName::configured != '\0') && (local_50 != 0)) {
      StringName::unref();
    }
  }
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
LAB_00105d6c:
  CowData<char32_t>::_unref((CowData<char32_t> *)aSStack_58);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorSettingsDialog::shortcut_input(Ref<InputEvent> const&) */

void __thiscall EditorSettingsDialog::shortcut_input(EditorSettingsDialog *this,Ref *param_1)

{
  code *pcVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  Object *pOVar5;
  String *pSVar6;
  Object *pOVar7;
  long in_FS_OFFSET;
  long local_60;
  Object *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((*(long *)param_1 != 0) &&
      (pOVar5 = (Object *)
                __dynamic_cast(*(long *)param_1,&Object::typeinfo,&InputEventKey::typeinfo,0),
      pOVar5 != (Object *)0x0)) && (cVar2 = RefCounted::reference(), cVar2 != '\0')) {
    cVar2 = InputEvent::is_pressed();
    if (cVar2 == '\0') {
LAB_0010602c:
      cVar2 = RefCounted::unreference();
    }
    else {
      pSVar6 = (String *)EditorSettings::get_singleton();
      local_60 = 0;
      local_58 = (Object *)0x10e594;
      local_50 = 7;
      String::parse_latin1((StrRange *)&local_60);
      cVar2 = EditorSettings::is_shortcut(pSVar6,(Ref *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar2 != '\0') {
        EditorNode::undo();
      }
      pSVar6 = (String *)EditorSettings::get_singleton();
      local_58 = (Object *)0x10e59c;
      local_60 = 0;
      local_50 = 7;
      String::parse_latin1((StrRange *)&local_60);
      cVar3 = EditorSettings::is_shortcut(pSVar6,(Ref *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar3 != '\0') {
        EditorNode::redo();
        cVar2 = cVar3;
      }
      pcVar1 = *(code **)(*(long *)pOVar5 + 0x1e8);
      InputEventKey::create_reference((StrRange *)&local_60,0x1000046,0);
      local_58 = (Object *)0x0;
      if (((local_60 != 0) &&
          (pOVar7 = (Object *)__dynamic_cast(local_60,&Object::typeinfo,&InputEvent::typeinfo,0),
          pOVar7 != (Object *)0x0)) &&
         (local_58 = pOVar7, cVar3 = RefCounted::reference(), cVar3 == '\0')) {
        local_58 = (Object *)0x0;
      }
      cVar3 = (*pcVar1)(pOVar5,&local_58,1);
      if (((local_58 != (Object *)0x0) &&
          (cVar4 = RefCounted::unreference(), pOVar7 = local_58, cVar4 != '\0')) &&
         (cVar4 = predelete_handler(local_58), cVar4 != '\0')) {
        (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
        Memory::free_static(pOVar7,false);
      }
      Ref<InputEventKey>::unref((Ref<InputEventKey> *)&local_60);
      if (cVar3 == '\0') {
        if (cVar2 == '\0') goto LAB_0010602c;
      }
      else {
        _focus_current_search_box(this);
      }
      Viewport::set_input_as_handled();
      cVar2 = RefCounted::unreference();
    }
    if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar5), cVar2 != '\0')) {
      (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        Memory::free_static(pOVar5,false);
        return;
      }
      goto LAB_00106261;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00106261:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorSettingsDialog::_event_config_confirmed() */

void __thiscall EditorSettingsDialog::_event_config_confirmed(EditorSettingsDialog *this)

{
  char cVar1;
  Object *pOVar2;
  Variant *pVVar3;
  long in_FS_OFFSET;
  Object *local_58;
  Object *local_50;
  int local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  InputEventConfigurationDialog::get_event();
  local_58 = (Object *)0x0;
  if (local_50 == (Object *)0x0) {
LAB_00106309:
    Ref<InputEventKey>::unref((Ref<InputEventKey> *)&local_58);
  }
  else {
    pOVar2 = (Object *)__dynamic_cast(local_50,&Object::typeinfo,&InputEventKey::typeinfo,0);
    if (pOVar2 == (Object *)0x0) {
      cVar1 = RefCounted::unreference();
joined_r0x00106497:
      if (cVar1 != '\0') {
        pOVar2 = (Object *)0x0;
LAB_001064a2:
        cVar1 = predelete_handler(local_50);
        if (cVar1 != '\0') {
          (**(code **)(*(long *)local_50 + 0x140))(local_50);
          Memory::free_static(local_50,false);
        }
        if (pOVar2 != (Object *)0x0) goto LAB_00106337;
      }
      goto LAB_00106309;
    }
    local_58 = pOVar2;
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      local_58 = (Object *)0x0;
      if (local_50 == (Object *)0x0) goto LAB_00106309;
      cVar1 = RefCounted::unreference();
      goto joined_r0x00106497;
    }
    if ((local_50 != (Object *)0x0) && (cVar1 = RefCounted::unreference(), cVar1 != '\0'))
    goto LAB_001064a2;
LAB_00106337:
    if (*(int *)(this + 0xe28) == -1) {
      Variant::Variant((Variant *)local_48,pOVar2);
      Array::push_back((Variant *)(this + 0xe20));
      cVar1 = Variant::needs_deinit[local_48[0]];
joined_r0x0010647a:
      if (cVar1 != '\0') {
        Variant::_clear_internal();
      }
    }
    else {
      Variant::Variant((Variant *)local_48,pOVar2);
      pVVar3 = (Variant *)Array::operator[]((int)this + 0xe20);
      if (pVVar3 == (Variant *)local_48) {
        cVar1 = Variant::needs_deinit[local_48[0]];
        goto joined_r0x0010647a;
      }
      if (Variant::needs_deinit[*(int *)pVVar3] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)pVVar3 = 0;
      *(int *)pVVar3 = local_48[0];
      *(undefined8 *)(pVVar3 + 8) = local_40;
      *(undefined8 *)(pVVar3 + 0x10) = uStack_38;
    }
    if (this[0xe10] == (EditorSettingsDialog)0x0) {
      _update_shortcut_events(this,(String *)(this + 0xe18),(Array *)(this + 0xe20));
      cVar1 = RefCounted::unreference();
    }
    else {
      _update_builtin_action(this,(String *)(this + 0xe18),(Array *)(this + 0xe20));
      cVar1 = RefCounted::unreference();
    }
    if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar2), cVar1 != '\0')) {
      (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        Memory::free_static(pOVar2,false);
        return;
      }
      goto LAB_0010650b;
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010650b:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EditorSettingsDialog::_create_shortcut_treeitem(TreeItem*, String const&, String const&, Array&,
   bool, bool, bool) */

long * EditorSettingsDialog::_create_shortcut_treeitem
                 (TreeItem *param_1,String *param_2,String *param_3,Array *param_4,bool param_5,
                 bool param_6,bool param_7)

{
  code *pcVar1;
  StringName *pSVar2;
  Object *pOVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  Object *pOVar11;
  long *plVar12;
  Variant *pVVar13;
  bool bVar14;
  int iVar15;
  undefined7 in_register_00000081;
  long in_FS_OFFSET;
  int local_ec;
  Object *local_b8;
  Object *local_b0;
  undefined *local_a8;
  CowData<char32_t> local_a0 [8];
  String local_98 [8];
  Object *local_90;
  Object *local_88;
  undefined8 local_80;
  undefined8 local_78 [2];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  plVar9 = (long *)Tree::create_item(*(TreeItem **)(param_1 + 0xe00),(int)param_2);
  TreeItem::set_collapsed(SUB81(plVar9,0));
  local_88 = (Object *)0x0;
  if (*(long *)param_4 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)param_4);
  }
  TreeItem::set_text(plVar9,0,(CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  iVar5 = Array::size();
  iVar15 = (int)(Array *)CONCAT71(in_register_00000081,param_5);
  if (iVar5 < 1) {
    local_b8 = (Object *)0x0;
  }
  else {
    pVVar13 = (Variant *)Array::operator[](iVar15);
    local_b8 = (Object *)0x0;
    Ref<InputEvent>::operator=((Ref<InputEvent> *)&local_b8,pVVar13);
  }
  pOVar11 = local_b8;
  iVar5 = Array::size();
  if (iVar5 < 2) {
    local_b0 = (Object *)0x0;
  }
  else {
    pVVar13 = (Variant *)Array::operator[](iVar15);
    local_b0 = (Object *)0x0;
    Ref<InputEvent>::operator=((Ref<InputEvent> *)&local_b0,pVVar13);
  }
  local_a8 = (undefined *)0x0;
  local_88 = (Object *)&_LC157;
  local_80 = 4;
  String::parse_latin1((StrRange *)&local_a8);
  if (pOVar11 != (Object *)0x0) {
    (**(code **)(*(long *)pOVar11 + 0x1d0))((CowData<char32_t> *)&local_88,pOVar11);
    if ((Object *)local_a8 != local_88) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
      local_a8 = local_88;
      local_88 = (Object *)0x0;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if (local_b0 != (Object *)0x0) {
      (**(code **)(*(long *)local_b0 + 0x1d0))((CowData<char32_t> *)&local_90);
      operator+((char *)&local_88,(String *)&_LC158);
      String::operator+=((String *)&local_a8,(String *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      iVar5 = Array::size();
      if (2 < iVar5) {
        local_90 = (Object *)0x0;
        String::parse_latin1((String *)&local_90,")");
        Array::size();
        itos((long)local_a0);
        operator+((char *)local_98,(String *)&_LC160);
        String::operator+((String *)&local_88,local_98);
        String::operator+=((String *)&local_a8,(String *)&local_88);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
        CowData<char32_t>::_unref(local_a0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      }
    }
    TreeItem::set_auto_translate_mode(plVar9,1,2);
  }
  local_88 = (Object *)0x0;
  if (local_a8 != (undefined *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)&local_a8);
  }
  TreeItem::set_text(plVar9,1,(CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  cVar4 = String::operator==((String *)&local_a8,"None");
  iVar5 = (int)plVar9;
  if (cVar4 != '\0') {
    pSVar2 = *(StringName **)(param_1 + 0xe00);
    local_68 = _LC45;
    uStack_64 = _UNK_00118b94;
    uStack_60 = _UNK_00118b98;
    uStack_5c = _UNK_00118b9c;
    if (_create_shortcut_treeitem(TreeItem*,String_const&,String_const&,Array&,bool,bool,bool)::
        {lambda()#1}::operator()()::sname == '\0') {
      iVar8 = __cxa_guard_acquire(&_create_shortcut_treeitem(TreeItem*,String_const&,String_const&,Array&,bool,bool,bool)
                                   ::{lambda()#1}::operator()()::sname);
      if (iVar8 != 0) {
        _scs_create((char *)&_create_shortcut_treeitem(TreeItem*,String_const&,String_const&,Array&,bool,bool,bool)
                             ::{lambda()#1}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &_create_shortcut_treeitem(TreeItem*,String_const&,String_const&,Array&,bool,bool,bool)
                      ::{lambda()#1}::operator()()::sname,&__dso_handle);
        __cxa_guard_release(&_create_shortcut_treeitem(TreeItem*,String_const&,String_const&,Array&,bool,bool,bool)
                             ::{lambda()#1}::operator()()::sname);
      }
    }
    local_78[0] = Control::get_theme_color
                            (pSVar2,(StringName *)(SceneStringNames::singleton + 0xb0));
    local_58[0] = Color::operator*((Color *)local_78,(Color *)&local_68);
    TreeItem::set_custom_color(iVar5,(Color *)0x1);
  }
  if (param_6) {
    local_88 = (Object *)0x0;
    String::parse_latin1((String *)&local_88,"");
    if (_create_shortcut_treeitem(TreeItem*,String_const&,String_const&,Array&,bool,bool,bool)::
        {lambda()#2}::operator()()::sname == '\0') {
      iVar8 = __cxa_guard_acquire(&_create_shortcut_treeitem(TreeItem*,String_const&,String_const&,Array&,bool,bool,bool)
                                   ::{lambda()#2}::operator()()::sname);
      if (iVar8 != 0) {
        _scs_create((char *)&_create_shortcut_treeitem(TreeItem*,String_const&,String_const&,Array&,bool,bool,bool)
                             ::{lambda()#2}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &_create_shortcut_treeitem(TreeItem*,String_const&,String_const&,Array&,bool,bool,bool)
                      ::{lambda()#2}::operator()()::sname,&__dso_handle);
        __cxa_guard_release(&_create_shortcut_treeitem(TreeItem*,String_const&,String_const&,Array&,bool,bool,bool)
                             ::{lambda()#2}::operator()()::sname);
      }
    }
    Control::get_editor_theme_icon((StringName *)&local_90);
    TreeItem::add_button(iVar5,(Ref *)0x1,(int)(StrRange *)&local_90,true,(String *)0x0);
    if (local_90 != (Object *)0x0) {
      cVar4 = RefCounted::unreference();
      pOVar11 = local_90;
      if (cVar4 != '\0') {
        cVar4 = predelete_handler(local_90);
        if (cVar4 != '\0') {
          (**(code **)(*(long *)pOVar11 + 0x140))(pOVar11);
          Memory::free_static(pOVar11,false);
        }
      }
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  }
  local_90 = (Object *)0x0;
  local_88 = (Object *)&_LC32;
  local_80 = 0;
  String::parse_latin1((StrRange *)&local_90);
  if (_create_shortcut_treeitem(TreeItem*,String_const&,String_const&,Array&,bool,bool,bool)::
      {lambda()#3}::operator()()::sname == '\0') {
    iVar8 = __cxa_guard_acquire(&_create_shortcut_treeitem(TreeItem*,String_const&,String_const&,Array&,bool,bool,bool)
                                 ::{lambda()#3}::operator()()::sname);
    if (iVar8 != 0) {
      _scs_create((char *)&_create_shortcut_treeitem(TreeItem*,String_const&,String_const&,Array&,bool,bool,bool)
                           ::{lambda()#3}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &_create_shortcut_treeitem(TreeItem*,String_const&,String_const&,Array&,bool,bool,bool)
                    ::{lambda()#3}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&_create_shortcut_treeitem(TreeItem*,String_const&,String_const&,Array&,bool,bool,bool)
                           ::{lambda()#3}::operator()()::sname);
    }
  }
  Control::get_editor_theme_icon((StringName *)&local_88);
  iVar8 = (int)(CowData<char32_t> *)&local_88;
  TreeItem::add_button(iVar5,(Ref *)0x1,iVar8,false,(String *)0x0);
  if (local_88 != (Object *)0x0) {
    cVar4 = RefCounted::unreference();
    pOVar11 = local_88;
    if (cVar4 != '\0') {
      cVar4 = predelete_handler(local_88);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar11 + 0x140))(pOVar11);
        Memory::free_static(pOVar11,false);
      }
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  local_88 = (Object *)&_LC32;
  local_90 = (Object *)0x0;
  local_80 = 0;
  String::parse_latin1((StrRange *)&local_90);
  if (_create_shortcut_treeitem(TreeItem*,String_const&,String_const&,Array&,bool,bool,bool)::
      {lambda()#4}::operator()()::sname == '\0') {
    iVar6 = __cxa_guard_acquire(&_create_shortcut_treeitem(TreeItem*,String_const&,String_const&,Array&,bool,bool,bool)
                                 ::{lambda()#4}::operator()()::sname);
    if (iVar6 != 0) {
      _scs_create((char *)&_create_shortcut_treeitem(TreeItem*,String_const&,String_const&,Array&,bool,bool,bool)
                           ::{lambda()#4}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &_create_shortcut_treeitem(TreeItem*,String_const&,String_const&,Array&,bool,bool,bool)
                    ::{lambda()#4}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&_create_shortcut_treeitem(TreeItem*,String_const&,String_const&,Array&,bool,bool,bool)
                           ::{lambda()#4}::operator()()::sname);
    }
  }
  Control::get_editor_theme_icon((StringName *)&local_88);
  TreeItem::add_button(iVar5,(Ref *)0x1,iVar8,true,(String *)0x0);
  if (local_88 != (Object *)0x0) {
    cVar4 = RefCounted::unreference();
    pOVar11 = local_88;
    if (cVar4 != '\0') {
      cVar4 = predelete_handler(local_88);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar11 + 0x140))(pOVar11);
        Memory::free_static(pOVar11,false);
      }
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  pcVar1 = *(code **)(*plVar9 + 0xa8);
  Variant::Variant((Variant *)local_58,param_7);
  StringName::StringName((StringName *)&local_88,"is_action",false);
  (*pcVar1)(plVar9,(CowData<char32_t> *)&local_88,(Variant *)local_58);
  if ((StringName::configured != '\0') && (local_88 != (Object *)0x0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  pcVar1 = *(code **)(*plVar9 + 0xa8);
  Variant::Variant((Variant *)local_58,"shortcut");
  StringName::StringName((StringName *)&local_88,"type",false);
  (*pcVar1)(plVar9,(CowData<char32_t> *)&local_88,(Variant *)local_58);
  if ((StringName::configured != '\0') && (local_88 != (Object *)0x0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  pcVar1 = *(code **)(*plVar9 + 0xa8);
  Variant::Variant((Variant *)local_58,param_3);
  StringName::StringName((StringName *)&local_88,"shortcut_identifier",false);
  (*pcVar1)(plVar9,(CowData<char32_t> *)&local_88,(Variant *)local_58);
  if ((StringName::configured != '\0') && (local_88 != (Object *)0x0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  pcVar1 = *(code **)(*plVar9 + 0xa8);
  Variant::Variant((Variant *)local_58,(Array *)CONCAT71(in_register_00000081,param_5));
  StringName::StringName((StringName *)&local_88,"events",false);
  (*pcVar1)(plVar9,(CowData<char32_t> *)&local_88,(Variant *)local_58);
  if ((StringName::configured != '\0') && (local_88 != (Object *)0x0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  local_ec = 0;
  while( true ) {
    iVar6 = Array::size();
    if (iVar6 <= local_ec) break;
    Array::operator[](iVar15);
    lVar10 = Variant::get_validated_object();
    if (lVar10 != 0) {
      pOVar11 = (Object *)__dynamic_cast(lVar10,&Object::typeinfo,&InputEvent::typeinfo,0);
      if (pOVar11 != (Object *)0x0) {
        cVar4 = RefCounted::reference();
        if (cVar4 != '\0') {
          plVar12 = (long *)Tree::create_item(*(TreeItem **)(param_1 + 0xe00),iVar5);
          iVar6 = TreeItem::get_child_count();
          if (iVar6 == 1) {
            local_80 = 7;
            local_88 = (Object *)0x10e5a4;
          }
          else {
            local_80 = 0;
            local_88 = (Object *)0x10e988;
          }
          local_90 = (Object *)0x0;
          String::parse_latin1((StrRange *)&local_90);
          TreeItem::set_text(plVar12,0,(StrRange *)&local_90);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
          (**(code **)(*(long *)pOVar11 + 0x1d0))((CowData<char32_t> *)&local_88,pOVar11);
          TreeItem::set_text(plVar12,1,(CowData<char32_t> *)&local_88);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
          TreeItem::set_auto_translate_mode(plVar12,1,2);
          local_88 = (Object *)&_LC32;
          local_90 = (Object *)0x0;
          local_80 = 0;
          String::parse_latin1((StrRange *)&local_90);
          if (_create_shortcut_treeitem(TreeItem*,String_const&,String_const&,Array&,bool,bool,bool)
              ::{lambda()#5}::operator()()::sname == '\0') {
            iVar6 = __cxa_guard_acquire(&_create_shortcut_treeitem(TreeItem*,String_const&,String_const&,Array&,bool,bool,bool)
                                         ::{lambda()#5}::operator()()::sname);
            if (iVar6 != 0) {
              _scs_create((char *)&_create_shortcut_treeitem(TreeItem*,String_const&,String_const&,Array&,bool,bool,bool)
                                   ::{lambda()#5}::operator()()::sname,true);
              __cxa_atexit(StringName::~StringName,
                           &_create_shortcut_treeitem(TreeItem*,String_const&,String_const&,Array&,bool,bool,bool)
                            ::{lambda()#5}::operator()()::sname,&__dso_handle);
              __cxa_guard_release(&_create_shortcut_treeitem(TreeItem*,String_const&,String_const&,Array&,bool,bool,bool)
                                   ::{lambda()#5}::operator()()::sname);
            }
          }
          Control::get_editor_theme_icon((StringName *)&local_88);
          iVar6 = (int)plVar12;
          TreeItem::add_button(iVar6,(Ref *)0x1,iVar8,true,(String *)0x0);
          if (local_88 != (Object *)0x0) {
            cVar4 = RefCounted::unreference();
            pOVar3 = local_88;
            if (cVar4 != '\0') {
              cVar4 = predelete_handler(local_88);
              if (cVar4 != '\0') {
                (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
                Memory::free_static(pOVar3,false);
              }
            }
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
          local_88 = (Object *)&_LC32;
          local_90 = (Object *)0x0;
          local_80 = 0;
          String::parse_latin1((StrRange *)&local_90);
          if (_create_shortcut_treeitem(TreeItem*,String_const&,String_const&,Array&,bool,bool,bool)
              ::{lambda()#6}::operator()()::sname == '\0') {
            iVar7 = __cxa_guard_acquire(&_create_shortcut_treeitem(TreeItem*,String_const&,String_const&,Array&,bool,bool,bool)
                                         ::{lambda()#6}::operator()()::sname);
            if (iVar7 != 0) {
              _scs_create((char *)&_create_shortcut_treeitem(TreeItem*,String_const&,String_const&,Array&,bool,bool,bool)
                                   ::{lambda()#6}::operator()()::sname,true);
              __cxa_atexit(StringName::~StringName,
                           &_create_shortcut_treeitem(TreeItem*,String_const&,String_const&,Array&,bool,bool,bool)
                            ::{lambda()#6}::operator()()::sname,&__dso_handle);
              __cxa_guard_release(&_create_shortcut_treeitem(TreeItem*,String_const&,String_const&,Array&,bool,bool,bool)
                                   ::{lambda()#6}::operator()()::sname);
            }
          }
          Control::get_editor_theme_icon((StringName *)&local_88);
          TreeItem::add_button(iVar6,(Ref *)0x1,iVar8,true,(String *)0x0);
          if (local_88 != (Object *)0x0) {
            cVar4 = RefCounted::unreference();
            pOVar3 = local_88;
            if (cVar4 != '\0') {
              cVar4 = predelete_handler(local_88);
              if (cVar4 != '\0') {
                (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
                Memory::free_static(pOVar3,false);
              }
            }
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
          pSVar2 = *(StringName **)(param_1 + 0xe00);
          if (_create_shortcut_treeitem(TreeItem*,String_const&,String_const&,Array&,bool,bool,bool)
              ::{lambda()#7}::operator()()::sname == '\0') {
            iVar7 = __cxa_guard_acquire(&_create_shortcut_treeitem(TreeItem*,String_const&,String_const&,Array&,bool,bool,bool)
                                         ::{lambda()#7}::operator()()::sname);
            if (iVar7 != 0) {
              _scs_create((char *)&_create_shortcut_treeitem(TreeItem*,String_const&,String_const&,Array&,bool,bool,bool)
                                   ::{lambda()#7}::operator()()::sname,true);
              __cxa_atexit(StringName::~StringName,
                           &_create_shortcut_treeitem(TreeItem*,String_const&,String_const&,Array&,bool,bool,bool)
                            ::{lambda()#7}::operator()()::sname,&__dso_handle);
              __cxa_guard_release(&_create_shortcut_treeitem(TreeItem*,String_const&,String_const&,Array&,bool,bool,bool)
                                   ::{lambda()#7}::operator()()::sname);
            }
          }
          local_58[0] = Control::get_theme_color
                                  (pSVar2,(StringName *)
                                          &_create_shortcut_treeitem(TreeItem*,String_const&,String_const&,Array&,bool,bool,bool)
                                           ::{lambda()#7}::operator()()::sname);
          bVar14 = SUB81((Variant *)local_58,0);
          TreeItem::set_custom_bg_color(iVar6,(Color *)0x0,bVar14);
          pSVar2 = *(StringName **)(param_1 + 0xe00);
          if (_create_shortcut_treeitem(TreeItem*,String_const&,String_const&,Array&,bool,bool,bool)
              ::{lambda()#8}::operator()()::sname == '\0') {
            iVar7 = __cxa_guard_acquire(&_create_shortcut_treeitem(TreeItem*,String_const&,String_const&,Array&,bool,bool,bool)
                                         ::{lambda()#8}::operator()()::sname);
            if (iVar7 != 0) {
              _scs_create((char *)&_create_shortcut_treeitem(TreeItem*,String_const&,String_const&,Array&,bool,bool,bool)
                                   ::{lambda()#8}::operator()()::sname,true);
              __cxa_atexit(StringName::~StringName,
                           &_create_shortcut_treeitem(TreeItem*,String_const&,String_const&,Array&,bool,bool,bool)
                            ::{lambda()#8}::operator()()::sname,&__dso_handle);
              __cxa_guard_release(&_create_shortcut_treeitem(TreeItem*,String_const&,String_const&,Array&,bool,bool,bool)
                                   ::{lambda()#8}::operator()()::sname);
            }
          }
          local_58[0] = Control::get_theme_color
                                  (pSVar2,(StringName *)
                                          &_create_shortcut_treeitem(TreeItem*,String_const&,String_const&,Array&,bool,bool,bool)
                                           ::{lambda()#8}::operator()()::sname);
          TreeItem::set_custom_bg_color(iVar6,(Color *)0x1,bVar14);
          pcVar1 = *(code **)(*plVar12 + 0xa8);
          Variant::Variant((Variant *)local_58,param_7);
          StringName::StringName((StringName *)&local_88,"is_action",false);
          (*pcVar1)(plVar12,(CowData<char32_t> *)&local_88,(Variant *)local_58);
          if ((StringName::configured != '\0') && (local_88 != (Object *)0x0)) {
            StringName::unref();
          }
          if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          pcVar1 = *(code **)(*plVar12 + 0xa8);
          Variant::Variant((Variant *)local_58,"event");
          StringName::StringName((StringName *)&local_88,"type",false);
          (*pcVar1)(plVar12,(CowData<char32_t> *)&local_88,(Variant *)local_58);
          if ((StringName::configured != '\0') && (local_88 != (Object *)0x0)) {
            StringName::unref();
          }
          if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          pcVar1 = *(code **)(*plVar12 + 0xa8);
          Variant::Variant((Variant *)local_58,local_ec);
          StringName::StringName((StringName *)&local_88,"event_index",false);
          (*pcVar1)(plVar12,(CowData<char32_t> *)&local_88,(Variant *)local_58);
          if ((StringName::configured != '\0') && (local_88 != (Object *)0x0)) {
            StringName::unref();
          }
          if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          cVar4 = RefCounted::unreference();
          if (cVar4 != '\0') {
            cVar4 = predelete_handler(pOVar11);
            if (cVar4 != '\0') {
              (**(code **)(*(long *)pOVar11 + 0x140))(pOVar11);
              Memory::free_static(pOVar11,false);
            }
          }
        }
      }
    }
    local_ec = local_ec + 1;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  pOVar11 = local_b0;
  if (local_b0 != (Object *)0x0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      cVar4 = predelete_handler(pOVar11);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar11 + 0x140))(pOVar11);
        Memory::free_static(pOVar11,false);
      }
    }
  }
  pOVar11 = local_b8;
  if (local_b8 != (Object *)0x0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      cVar4 = predelete_handler(pOVar11);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar11 + 0x140))(pOVar11);
        Memory::free_static(pOVar11,false);
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return plVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorSettingsDialog::_shortcut_button_pressed(Object*, int, int, MouseButton) */

void __thiscall
EditorSettingsDialog::_shortcut_button_pressed
          (EditorSettingsDialog *this,long param_1,undefined8 param_3_00,int param_3,int param_5)

{
  uint uVar1;
  code *pcVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  Object *pOVar12;
  EditorSettingsDialog EVar13;
  char cVar14;
  int iVar15;
  uint uVar16;
  long *plVar17;
  long *plVar18;
  Variant *pVVar19;
  long lVar20;
  uint uVar21;
  uint uVar22;
  long lVar23;
  Ref *pRVar24;
  uint uVar25;
  long lVar26;
  ulong uVar27;
  Array *pAVar28;
  long in_FS_OFFSET;
  Ref<InputEvent> *local_c8;
  Variant local_98 [8];
  Object *local_90;
  long local_88;
  long local_80;
  undefined8 local_78;
  undefined1 local_70 [16];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_5 != 1) goto LAB_00107a8f;
  if (param_1 != 0) {
    plVar17 = (long *)__dynamic_cast(param_1,&Object::typeinfo,&TreeItem::typeinfo,0);
    if (plVar17 != (long *)0x0) {
      pcVar2 = *(code **)(*plVar17 + 0xb8);
      local_70 = (undefined1  [16])0x0;
      local_78 = 0;
      StringName::StringName((StringName *)&local_80,"is_action",false);
      (*pcVar2)((Variant *)local_58,plVar17,(StringName *)&local_80,&local_78);
      EVar13 = (EditorSettingsDialog)Variant::operator_cast_to_bool((Variant *)local_58);
      this[0xe10] = EVar13;
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_80 != 0)) {
        StringName::unref();
      }
      if (Variant::needs_deinit[(int)local_78] != '\0') {
        Variant::_clear_internal();
      }
      pcVar2 = *(code **)(*plVar17 + 0xb8);
      local_70 = (undefined1  [16])0x0;
      local_78 = 0;
      StringName::StringName((StringName *)&local_80,"type",false);
      (*pcVar2)((Variant *)local_58,plVar17,(StringName *)&local_80,&local_78);
      Variant::operator_cast_to_String(local_98);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_80 != 0)) {
        StringName::unref();
      }
      if (Variant::needs_deinit[(int)local_78] != '\0') {
        Variant::_clear_internal();
      }
      cVar14 = String::operator==((String *)local_98,"event");
      if (cVar14 == '\0') {
        pcVar2 = *(code **)(*plVar17 + 0xb8);
        local_70 = (undefined1  [16])0x0;
        local_78 = 0;
        StringName::StringName((StringName *)&local_88,"shortcut_identifier",false);
        (*pcVar2)((Variant *)local_58,plVar17,(StringName *)&local_88,&local_78);
        Variant::operator_cast_to_String((Variant *)&local_80);
        if (*(long *)(this + 0xe18) != local_80) {
          CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xe18));
          lVar20 = local_80;
          local_80 = 0;
          *(long *)(this + 0xe18) = lVar20;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        local_c8 = (Ref<InputEvent> *)&local_88;
        if ((StringName::configured != '\0') && (local_88 != 0)) {
          StringName::unref();
        }
        if (Variant::needs_deinit[(int)local_78] != '\0') {
          Variant::_clear_internal();
        }
        pcVar2 = *(code **)(*plVar17 + 0xb8);
        local_70 = (undefined1  [16])0x0;
        local_78 = 0;
        StringName::StringName((StringName *)local_c8,"events",false);
        (*pcVar2)((Variant *)local_58,plVar17,local_c8,&local_78);
        Variant::operator_cast_to_Array((Variant *)&local_80);
        Array::operator=((Array *)(this + 0xe20),(Array *)&local_80);
        Array::~Array((Array *)&local_80);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_88 != 0)) {
          StringName::unref();
        }
        if (Variant::needs_deinit[(int)local_78] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)(this + 0xe28) = 0xffffffff;
      }
      else {
        plVar18 = (long *)TreeItem::get_parent();
        pcVar2 = *(code **)(*plVar18 + 0xb8);
        local_70 = (undefined1  [16])0x0;
        local_78 = 0;
        StringName::StringName((StringName *)&local_88,"shortcut_identifier",false);
        (*pcVar2)((Variant *)local_58,plVar18,(StringName *)&local_88,&local_78);
        Variant::operator_cast_to_String((Variant *)&local_80);
        if (*(long *)(this + 0xe18) != local_80) {
          CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xe18));
          lVar20 = local_80;
          local_80 = 0;
          *(long *)(this + 0xe18) = lVar20;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_88 != 0)) {
          StringName::unref();
        }
        if (Variant::needs_deinit[(int)local_78] != '\0') {
          Variant::_clear_internal();
        }
        plVar18 = (long *)TreeItem::get_parent();
        pcVar2 = *(code **)(*plVar18 + 0xb8);
        local_70 = (undefined1  [16])0x0;
        local_78 = 0;
        StringName::StringName((StringName *)&local_88,"events",false);
        (*pcVar2)((Variant *)local_58,plVar18,(StringName *)&local_88,&local_78);
        Variant::operator_cast_to_Array((Variant *)&local_80);
        Array::operator=((Array *)(this + 0xe20),(Array *)&local_80);
        Array::~Array((Array *)&local_80);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_88 != 0)) {
          StringName::unref();
        }
        if (Variant::needs_deinit[(int)local_78] != '\0') {
          Variant::_clear_internal();
        }
        pcVar2 = *(code **)(*plVar17 + 0xb8);
        local_70 = (undefined1  [16])0x0;
        local_78 = 0;
        StringName::StringName((StringName *)&local_80,"event_index",false);
        (*pcVar2)((Variant *)local_58,plVar17,(StringName *)&local_80,&local_78);
        iVar15 = Variant::operator_cast_to_int((Variant *)local_58);
        *(int *)(this + 0xe28) = iVar15;
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
        if (Variant::needs_deinit[(int)local_78] != '\0') {
          Variant::_clear_internal();
        }
      }
      local_c8 = (Ref<InputEvent> *)&local_88;
      pAVar28 = (Array *)(this + 0xe20);
      if (param_3 == 2) {
        cVar14 = String::operator==((String *)local_98,"shortcut");
        if (cVar14 == '\0') {
          cVar14 = String::operator==((String *)local_98,"event");
          if (cVar14 != '\0') {
            Array::remove_at((int)pAVar28);
            if (this[0xe10] == (EditorSettingsDialog)0x0) {
              _update_shortcut_events(this,(String *)(this + 0xe18),pAVar28);
            }
            else {
              _update_builtin_action(this,(String *)(this + 0xe18),pAVar28);
            }
          }
        }
        else if (this[0xe10] == (EditorSettingsDialog)0x0) {
          Array::Array((Array *)&local_80);
          _update_shortcut_events(this,(String *)(this + 0xe18),(Array *)&local_80);
          Array::~Array((Array *)&local_80);
        }
        else {
          Array::Array((Array *)&local_80);
          _update_builtin_action(this,(String *)(this + 0xe18),(Array *)&local_80);
          Array::~Array((Array *)&local_80);
        }
      }
      else if (param_3 < 3) {
        if (param_3 == 0) {
          local_80 = 0;
          pRVar24 = *(Ref **)(this + 0xe08);
          String::parse_latin1((String *)&local_80,"");
          local_88 = 0;
        }
        else {
          if (param_3 != 1) goto LAB_00107a85;
          local_80 = 0;
          pRVar24 = *(Ref **)(this + 0xe08);
          String::parse_latin1((String *)&local_80,"");
          pVVar19 = (Variant *)Array::operator[]((int)pAVar28);
          local_88 = 0;
          Ref<InputEvent>::operator=(local_c8,pVVar19);
        }
        InputEventConfigurationDialog::popup_and_configure(pRVar24,(String *)local_c8);
        Ref<InputEvent>::unref(local_c8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      }
      else if (param_3 == 3) {
        if (this[0xe10] != (EditorSettingsDialog)0x0) {
          lVar20 = InputMap::get_builtins_with_feature_overrides_applied();
          if ((*(long *)(lVar20 + 8) != 0) && (*(int *)(lVar20 + 0x2c) != 0)) {
            uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar20 + 0x28) * 4);
            uVar27 = CONCAT44(0,uVar1);
            lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar20 + 0x28) * 8);
            uVar16 = String::hash();
            uVar21 = 1;
            if (uVar16 != 0) {
              uVar21 = uVar16;
            }
            lVar26 = *(long *)(lVar20 + 0x10);
            auVar4._8_8_ = 0;
            auVar4._0_8_ = (ulong)uVar21 * lVar3;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar27;
            lVar23 = SUB168(auVar4 * auVar8,8);
            uVar16 = *(uint *)(lVar26 + lVar23 * 4);
            uVar22 = SUB164(auVar4 * auVar8,8);
            if (uVar16 != 0) {
              uVar25 = 0;
              do {
                if (uVar21 == uVar16) {
                  cVar14 = String::operator==((String *)
                                              (*(long *)(*(long *)(lVar20 + 8) + lVar23 * 8) + 0x10)
                                              ,(String *)(this + 0xe18));
                  if (cVar14 != '\0') {
                    List<Ref<InputEvent>,DefaultAllocator>::List
                              ((List<Ref<InputEvent>,DefaultAllocator> *)local_c8,
                               (List *)(*(long *)(*(long *)(lVar20 + 8) + (ulong)uVar22 * 8) + 0x18)
                              );
                    _event_list_to_array_helper((List *)&local_80);
                    _update_builtin_action(this,(String *)(this + 0xe18),(Array *)&local_80);
                    Array::~Array((Array *)&local_80);
                    List<Ref<InputEvent>,DefaultAllocator>::~List
                              ((List<Ref<InputEvent>,DefaultAllocator> *)local_c8);
                    goto LAB_00107a85;
                  }
                  lVar26 = *(long *)(lVar20 + 0x10);
                }
                uVar25 = uVar25 + 1;
                auVar5._8_8_ = 0;
                auVar5._0_8_ = (ulong)(uVar22 + 1) * lVar3;
                auVar9._8_8_ = 0;
                auVar9._0_8_ = uVar27;
                lVar23 = SUB168(auVar5 * auVar9,8);
                uVar16 = *(uint *)(lVar26 + lVar23 * 4);
                uVar22 = SUB164(auVar5 * auVar9,8);
              } while ((uVar16 != 0) &&
                      (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar16 * lVar3, auVar10._8_8_ = 0,
                      auVar10._0_8_ = uVar27, auVar7._8_8_ = 0,
                      auVar7._0_8_ = (ulong)((uVar1 + uVar22) - SUB164(auVar6 * auVar10,8)) * lVar3,
                      auVar11._8_8_ = 0, auVar11._0_8_ = uVar27,
                      uVar25 <= SUB164(auVar7 * auVar11,8)));
            }
          }
          _err_print_error("operator[]","./core/templates/hash_map.h",0x245,
                           "FATAL: Condition \"!exists\" is true.",0,0);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        EditorSettings::get_singleton();
        EditorSettings::get_shortcut((String *)&local_90);
        pOVar12 = local_90;
        pcVar2 = *(code **)(*(long *)local_90 + 0xb8);
        local_70 = (undefined1  [16])0x0;
        local_78 = 0;
        StringName::StringName((StringName *)&local_80,"original",false);
        (*pcVar2)((Variant *)local_58,pOVar12,(StringName *)&local_80,&local_78);
        Variant::operator_cast_to_Array((Variant *)local_c8);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
        if (Variant::needs_deinit[(int)local_78] != '\0') {
          Variant::_clear_internal();
        }
        _update_shortcut_events(this,(String *)(this + 0xe18),(Array *)local_c8);
        Array::~Array((Array *)local_c8);
        if (local_90 != (Object *)0x0) {
          cVar14 = RefCounted::unreference();
          if (cVar14 != '\0') {
            cVar14 = predelete_handler(local_90);
            if (cVar14 != '\0') {
              (**(code **)(*(long *)local_90 + 0x140))(local_90);
              Memory::free_static(local_90,false);
            }
          }
        }
      }
LAB_00107a85:
      CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
      goto LAB_00107a8f;
    }
  }
  _err_print_error("_shortcut_button_pressed","editor/editor_settings_dialog.cpp",0x281,
                   "Parameter \"ti\" is null.","Object passed is not a TreeItem.",0);
LAB_00107a8f:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorSettingsDialog::_shortcut_cell_double_clicked() */

void __thiscall EditorSettingsDialog::_shortcut_cell_double_clicked(EditorSettingsDialog *this)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  Variant aVStack_88 [8];
  long local_80;
  undefined8 local_78;
  undefined1 local_70 [16];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  plVar4 = (long *)Tree::get_selected();
  if (plVar4 != (long *)0x0) {
    local_70 = (undefined1  [16])0x0;
    pcVar1 = *(code **)(*plVar4 + 0xb8);
    local_78 = 0;
    StringName::StringName((StringName *)&local_80,"type",false);
    (*pcVar1)(local_58,plVar4,(StringName *)&local_80,&local_78);
    Variant::operator_cast_to_String(aVStack_88);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
    if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
    }
    iVar3 = Tree::get_selected_column();
    cVar2 = String::operator==((String *)aVStack_88,"shortcut");
    if ((iVar3 == 0) && (cVar2 != '\0')) {
      lVar5 = TreeItem::get_first_child();
      if (lVar5 != 0) {
        TreeItem::is_collapsed();
        TreeItem::set_collapsed(SUB81(plVar4,0));
      }
    }
    else {
      cVar2 = String::operator==((String *)aVStack_88,"shortcut");
      if (cVar2 == '\0') {
        cVar2 = String::operator==((String *)aVStack_88,"event");
        if ((iVar3 == 1) && (cVar2 != '\0')) {
          iVar3 = TreeItem::get_button_by_id((int)plVar4,1);
          if (iVar3 != -1) {
            _shortcut_button_pressed(this,plVar4,1,1,1);
          }
        }
      }
      else if (iVar3 == 1) {
        lVar5 = TreeItem::get_first_child();
        if (lVar5 != 0) {
          uVar6 = TreeItem::get_first_child();
          iVar3 = TreeItem::get_button_by_id((int)uVar6,1);
          if (iVar3 != -1) {
            TreeItem::set_collapsed(SUB81(plVar4,0));
            iVar3 = TreeItem::get_child_count();
            if (iVar3 == 1) {
              _shortcut_button_pressed(this,uVar6,1,1,1);
            }
          }
        }
      }
      else {
        String::operator==((String *)aVStack_88,"event");
      }
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)aVStack_88);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorSettingsDialog::_update_shortcuts() */

void EditorSettingsDialog::_update_shortcuts(void)

{
  int *piVar1;
  uint uVar2;
  StringName *pSVar3;
  char *__s;
  long lVar4;
  String *pSVar5;
  code *pcVar6;
  Object *pOVar7;
  void *pvVar8;
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
  ulong uVar41;
  undefined8 uVar42;
  undefined1 uVar43;
  char cVar44;
  byte bVar45;
  uint uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  int iVar49;
  long lVar50;
  long *plVar51;
  undefined1 *puVar52;
  TreeItem *pTVar53;
  String *pSVar54;
  undefined8 *puVar55;
  List *pLVar56;
  undefined8 uVar57;
  undefined8 uVar58;
  bool bVar59;
  uint uVar60;
  int iVar61;
  long lVar62;
  long lVar63;
  int *piVar64;
  TreeItem *in_RDI;
  bool bVar65;
  uint uVar66;
  long in_FS_OFFSET;
  bool bVar67;
  String *local_180;
  undefined8 *local_178;
  HashMap<String,bool,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,bool>>>
  *local_160;
  HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>>
  *local_158;
  long *local_110;
  Object *local_108;
  uint local_100 [2];
  char *local_f8;
  long local_f0;
  char *local_e8;
  size_t local_e0;
  HashMap<String,bool,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,bool>>>
  local_d8 [8];
  undefined1 local_d0 [16];
  undefined1 local_c0 [16];
  undefined8 local_b0;
  long local_a8;
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_70 [16];
  undefined8 local_58 [3];
  long local_40;
  
  uVar41 = _LC177;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_b0 = _LC177;
  local_d0 = (undefined1  [16])0x0;
  local_c0 = (undefined1  [16])0x0;
  lVar50 = Tree::get_root();
  if (lVar50 != 0) {
    Tree::get_root();
    lVar50 = TreeItem::get_first_child();
    if (lVar50 != 0) {
      Tree::get_root();
      plVar51 = (long *)TreeItem::get_first_child();
      while (plVar51 != (long *)0x0) {
        do {
          lVar50 = TreeItem::get_first_child();
          if (lVar50 == 0) {
LAB_00108625:
            uVar43 = TreeItem::is_collapsed();
            TreeItem::get_text((int)(StringName *)&local_a8);
            puVar52 = (undefined1 *)
                      HashMap<String,bool,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,bool>>>
                      ::operator[](local_d8,(String *)&local_a8);
            *puVar52 = uVar43;
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
            plVar51 = (long *)TreeItem::get_first_child();
          }
          else {
            pcVar6 = *(code **)(*plVar51 + 0xa0);
            StringName::StringName((StringName *)&local_a8,"shortcut_identifier",false);
            cVar44 = (*pcVar6)(plVar51,(StringName *)&local_a8);
            if ((StringName::configured != '\0') && (local_a8 != 0)) {
              StringName::unref();
            }
            if (cVar44 == '\0') goto LAB_00108625;
            uVar43 = TreeItem::is_collapsed();
            pcVar6 = *(code **)(*plVar51 + 0xb8);
            local_70 = (undefined1  [16])0x0;
            local_78 = 0;
            StringName::StringName((StringName *)&local_e8,"shortcut_identifier",false);
            (*pcVar6)(local_58,plVar51,(StringName *)&local_e8,&local_78);
            Variant::operator_cast_to_String((Variant *)&local_a8);
            puVar52 = (undefined1 *)
                      HashMap<String,bool,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,bool>>>
                      ::operator[](local_d8,(String *)&local_a8);
            *puVar52 = uVar43;
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
            if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
              Variant::_clear_internal();
            }
            if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
              StringName::unref();
            }
            if (Variant::needs_deinit[(int)local_78] != '\0') {
              Variant::_clear_internal();
            }
            plVar51 = (long *)TreeItem::get_first_child();
          }
        } while (plVar51 != (long *)0x0);
        while (lVar50 = TreeItem::get_next(), lVar50 == 0) {
          lVar50 = TreeItem::get_parent();
          if (lVar50 == 0) goto LAB_001086d4;
        }
        plVar51 = (long *)TreeItem::get_next();
      }
    }
  }
LAB_001086d4:
  local_180 = (String *)&local_e8;
  local_158 = (HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>>
               *)&local_a8;
  local_160 = local_d8;
  local_178 = local_58;
  Tree::clear();
  pTVar53 = (TreeItem *)Tree::create_item(*(TreeItem **)(in_RDI + 0xe00),0);
  local_a0 = (undefined1  [16])0x0;
  local_90 = (undefined1  [16])0x0;
  local_80 = uVar41;
  pSVar54 = (String *)Tree::create_item(*(TreeItem **)(in_RDI + 0xe00),(int)pTVar53);
  local_f0 = 0;
  local_e8 = "Common";
  local_e0 = 6;
  String::parse_latin1((StrRange *)&local_f0);
  puVar55 = (undefined8 *)
            HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>>
            ::operator[](local_158,(String *)&local_f0);
  *puVar55 = pSVar54;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  local_f0 = 0;
  local_e8 = "Common";
  local_e0 = 6;
  String::parse_latin1((StrRange *)&local_f0);
  TreeItem::set_text(pSVar54,0,(StrRange *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  iVar61 = (int)pSVar54;
  TreeItem::set_selectable(iVar61,false);
  TreeItem::set_selectable(iVar61,true);
  local_f0 = 0;
  local_e8 = "Common";
  local_e0 = 6;
  String::parse_latin1((StrRange *)&local_f0);
  local_e8 = (char *)((ulong)local_e8 & 0xffffffff00000000);
  cVar44 = HashMap<String,bool,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,bool>>>
           ::_lookup_pos(local_160,(String *)&local_f0,(uint *)local_180);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  if (cVar44 != '\0') {
    local_e8 = (char *)0x0;
    String::parse_latin1(local_180,"Common");
    HashMap<String,bool,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,bool>>>
    ::operator[](local_160,local_180);
    TreeItem::set_collapsed(SUB81(pSVar54,0));
    CowData<char32_t>::_unref((CowData<char32_t> *)local_180);
  }
  pSVar3 = *(StringName **)(in_RDI + 0xe00);
  if ((_update_shortcuts()::{lambda()#1}::operator()()::sname == '\0') &&
     (iVar49 = __cxa_guard_acquire(&_update_shortcuts()::{lambda()#1}::operator()()::sname),
     iVar49 != 0)) {
    _scs_create((char *)&_update_shortcuts()::{lambda()#1}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_update_shortcuts()::{lambda()#1}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_update_shortcuts()::{lambda()#1}::operator()()::sname);
  }
  local_58[0] = Control::get_theme_color
                          (pSVar3,(StringName *)
                                  &_update_shortcuts()::{lambda()#1}::operator()()::sname);
  bVar59 = SUB81(local_178,0);
  TreeItem::set_custom_bg_color(iVar61,(Color *)0x0,bVar59);
  pSVar3 = *(StringName **)(in_RDI + 0xe00);
  if ((_update_shortcuts()::{lambda()#2}::operator()()::sname == '\0') &&
     (iVar49 = __cxa_guard_acquire(&_update_shortcuts()::{lambda()#2}::operator()()::sname),
     iVar49 != 0)) {
    _scs_create((char *)&_update_shortcuts()::{lambda()#2}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_update_shortcuts()::{lambda()#2}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_update_shortcuts()::{lambda()#2}::operator()()::sname);
  }
  local_58[0] = Control::get_theme_color
                          (pSVar3,(StringName *)
                                  &_update_shortcuts()::{lambda()#2}::operator()()::sname);
  TreeItem::set_custom_bg_color(iVar61,(Color *)0x1,bVar59);
  lVar50 = InputMap::get_action_map();
  plVar51 = *(long **)(lVar50 + 0x18);
  bVar65 = SUB81((StrRange *)&local_f0,0);
  if (plVar51 != (long *)0x0) {
LAB_00108938:
    lVar50 = plVar51[2];
    if (lVar50 == 0) {
      local_f8 = (char *)0x0;
    }
    else {
      __s = *(char **)(lVar50 + 8);
      local_f8 = (char *)0x0;
      if (__s == (char *)0x0) {
        if (*(long *)(lVar50 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_f8,(CowData *)(lVar50 + 0x10));
        }
      }
      else {
        local_e0 = strlen(__s);
        local_e8 = __s;
        String::parse_latin1((StrRange *)&local_f8);
      }
    }
    lVar50 = InputMap::get_builtins_with_feature_overrides_applied();
    if ((*(long *)(lVar50 + 8) != 0) && (*(int *)(lVar50 + 0x2c) != 0)) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar50 + 0x28) * 4);
      lVar4 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar50 + 0x28) * 8);
      uVar46 = String::hash();
      uVar41 = CONCAT44(0,uVar2);
      uVar60 = 1;
      if (uVar46 != 0) {
        uVar60 = uVar46;
      }
      lVar63 = *(long *)(lVar50 + 0x10);
      auVar9._8_8_ = 0;
      auVar9._0_8_ = (ulong)uVar60 * lVar4;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = uVar41;
      lVar62 = SUB168(auVar9 * auVar25,8);
      uVar46 = *(uint *)(lVar63 + lVar62 * 4);
      iVar61 = SUB164(auVar9 * auVar25,8);
      if (uVar46 != 0) {
        uVar66 = 0;
        do {
          if (uVar60 == uVar46) {
            cVar44 = String::operator==((String *)
                                        (*(long *)(*(long *)(lVar50 + 8) + lVar62 * 8) + 0x10),
                                        (String *)&local_f8);
            if (cVar44 != '\0') {
              lVar50 = InputMap::get_builtins_with_feature_overrides_applied();
              if ((*(long *)(lVar50 + 8) == 0) || (*(int *)(lVar50 + 0x2c) == 0)) goto LAB_0010977b;
              uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar50 + 0x28) * 4);
              lVar4 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar50 + 0x28) * 8);
              uVar46 = String::hash();
              uVar41 = CONCAT44(0,uVar2);
              uVar60 = 1;
              if (uVar46 != 0) {
                uVar60 = uVar46;
              }
              lVar63 = *(long *)(lVar50 + 0x10);
              auVar21._8_8_ = 0;
              auVar21._0_8_ = (ulong)uVar60 * lVar4;
              auVar37._8_8_ = 0;
              auVar37._0_8_ = uVar41;
              lVar62 = SUB168(auVar21 * auVar37,8);
              uVar46 = *(uint *)(lVar63 + lVar62 * 4);
              iVar61 = SUB164(auVar21 * auVar37,8);
              if (uVar46 == 0) goto LAB_0010977b;
              uVar66 = 0;
              goto LAB_00109737;
            }
            lVar63 = *(long *)(lVar50 + 0x10);
          }
          uVar66 = uVar66 + 1;
          auVar10._8_8_ = 0;
          auVar10._0_8_ = (ulong)(iVar61 + 1) * lVar4;
          auVar26._8_8_ = 0;
          auVar26._0_8_ = uVar41;
          lVar62 = SUB168(auVar10 * auVar26,8);
          uVar46 = *(uint *)(lVar63 + lVar62 * 4);
          iVar61 = SUB164(auVar10 * auVar26,8);
        } while ((uVar46 != 0) &&
                (auVar11._8_8_ = 0, auVar11._0_8_ = (ulong)uVar46 * lVar4, auVar27._8_8_ = 0,
                auVar27._0_8_ = uVar41, auVar12._8_8_ = 0,
                auVar12._0_8_ = (ulong)((uVar2 + iVar61) - SUB164(auVar11 * auVar27,8)) * lVar4,
                auVar28._8_8_ = 0, auVar28._0_8_ = uVar41, uVar66 <= SUB164(auVar12 * auVar28,8)));
      }
    }
    goto LAB_00108aa9;
  }
LAB_00108abe:
  local_110 = (long *)0x0;
  pLVar56 = (List *)EditorSettings::get_singleton();
  EditorSettings::get_shortcut_list(pLVar56);
  List<String,DefaultAllocator>::sort_custom<Comparator<String>>
            ((List<String,DefaultAllocator> *)&local_110);
  uVar47 = EditorPropertyNameProcessor::get_settings_style();
  uVar48 = EditorPropertyNameProcessor::get_tooltip_style(uVar47);
  if ((local_110 != (long *)0x0) && (lVar50 = *local_110, lVar50 != 0)) {
LAB_00108b40:
    do {
      EditorSettings::get_singleton();
      EditorSettings::get_shortcut((String *)&local_108);
      String::get_slice((char *)local_100,(int)lVar50);
      uVar58 = local_a0._0_8_;
      if ((local_a0._0_8_ != 0) && (local_80._4_4_ != 0)) {
        uVar2 = *(uint *)(hash_table_size_primes + (local_80 & 0xffffffff) * 4);
        lVar4 = *(long *)(hash_table_size_primes_inv + (local_80 & 0xffffffff) * 8);
        uVar46 = String::hash();
        uVar41 = CONCAT44(0,uVar2);
        uVar57 = local_a0._8_8_;
        uVar60 = 1;
        if (uVar46 != 0) {
          uVar60 = uVar46;
        }
        auVar13._8_8_ = 0;
        auVar13._0_8_ = (ulong)uVar60 * lVar4;
        auVar29._8_8_ = 0;
        auVar29._0_8_ = uVar41;
        lVar63 = SUB168(auVar13 * auVar29,8);
        uVar46 = *(uint *)(local_a0._8_8_ + lVar63 * 4);
        iVar61 = SUB164(auVar13 * auVar29,8);
        if (uVar46 != 0) {
          uVar66 = 0;
          do {
            if ((uVar46 == uVar60) &&
               (cVar44 = String::operator==((String *)(*(long *)(uVar58 + lVar63 * 8) + 0x10),
                                            (String *)local_100), cVar44 != '\0')) {
              CowData<char32_t>::_unref((CowData<char32_t> *)local_100);
              if (local_108 == (Object *)0x0) goto LAB_0010963a;
              cVar44 = RefCounted::unreference();
              pOVar7 = local_108;
              goto joined_r0x00108cb9;
            }
            uVar66 = uVar66 + 1;
            auVar14._8_8_ = 0;
            auVar14._0_8_ = (ulong)(iVar61 + 1) * lVar4;
            auVar30._8_8_ = 0;
            auVar30._0_8_ = uVar41;
            lVar63 = SUB168(auVar14 * auVar30,8);
            uVar46 = *(uint *)(uVar57 + lVar63 * 4);
            iVar61 = SUB164(auVar14 * auVar30,8);
          } while ((uVar46 != 0) &&
                  (auVar15._8_8_ = 0, auVar15._0_8_ = (ulong)uVar46 * lVar4, auVar31._8_8_ = 0,
                  auVar31._0_8_ = uVar41, auVar16._8_8_ = 0,
                  auVar16._0_8_ = (ulong)((uVar2 + iVar61) - SUB164(auVar15 * auVar31,8)) * lVar4,
                  auVar32._8_8_ = 0, auVar32._0_8_ = uVar41, uVar66 <= SUB164(auVar16 * auVar32,8)))
          ;
        }
      }
      uVar57 = Tree::create_item(*(TreeItem **)(in_RDI + 0xe00),(int)pTVar53);
      uVar58 = EditorPropertyNameProcessor::singleton;
      StringName::StringName((StringName *)local_180,"",false);
      EditorPropertyNameProcessor::process_name
                ((String *)&local_f8,uVar58,(String *)local_100,uVar47,lVar50,local_180);
      if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
        StringName::unref();
      }
      uVar58 = EditorPropertyNameProcessor::singleton;
      StringName::StringName((StringName *)local_180,"",false);
      EditorPropertyNameProcessor::process_name
                ((StrRange *)&local_f0,uVar58,(String *)local_100,uVar48,lVar50,local_180);
      if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
        StringName::unref();
      }
      TreeItem::set_auto_translate_mode(uVar57,0,2);
      local_e8 = (char *)0x0;
      plVar51 = (long *)(local_f8 + -0x10);
      if (local_f8 != (char *)0x0) {
        do {
          lVar4 = *plVar51;
          if (lVar4 == 0) goto LAB_00109398;
          LOCK();
          lVar63 = *plVar51;
          bVar67 = lVar4 == lVar63;
          if (bVar67) {
            *plVar51 = lVar4 + 1;
            lVar63 = lVar4;
          }
          UNLOCK();
        } while (!bVar67);
        if (lVar63 != -1) {
          local_e8 = local_f8;
        }
      }
LAB_00109398:
      TreeItem::set_text(uVar57,0,local_180);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_180);
      iVar61 = (int)uVar57;
      TreeItem::set_tooltip_text(iVar61,(String *)0x0);
      TreeItem::set_selectable(iVar61,false);
      TreeItem::set_selectable(iVar61,true);
      pSVar3 = *(StringName **)(in_RDI + 0xe00);
      if ((_update_shortcuts()::{lambda()#3}::operator()()::sname == '\0') &&
         (iVar49 = __cxa_guard_acquire(&_update_shortcuts()::{lambda()#3}::operator()()::sname),
         iVar49 != 0)) {
        _scs_create((char *)&_update_shortcuts()::{lambda()#3}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_update_shortcuts()::{lambda()#3}::operator()()::sname
                     ,&__dso_handle);
        __cxa_guard_release(&_update_shortcuts()::{lambda()#3}::operator()()::sname);
      }
      local_58[0] = Control::get_theme_color
                              (pSVar3,(StringName *)
                                      &_update_shortcuts()::{lambda()#3}::operator()()::sname);
      TreeItem::set_custom_bg_color(iVar61,(Color *)0x0,bVar59);
      pSVar3 = *(StringName **)(in_RDI + 0xe00);
      if ((_update_shortcuts()::{lambda()#4}::operator()()::sname == '\0') &&
         (iVar49 = __cxa_guard_acquire(&_update_shortcuts()::{lambda()#4}::operator()()::sname),
         iVar49 != 0)) {
        _scs_create((char *)&_update_shortcuts()::{lambda()#4}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_update_shortcuts()::{lambda()#4}::operator()()::sname
                     ,&__dso_handle);
        __cxa_guard_release(&_update_shortcuts()::{lambda()#4}::operator()()::sname);
      }
      local_58[0] = Control::get_theme_color
                              (pSVar3,(StringName *)
                                      &_update_shortcuts()::{lambda()#4}::operator()()::sname);
      TreeItem::set_custom_bg_color(iVar61,(Color *)0x1,bVar59);
      uVar58 = local_d0._0_8_;
      if ((local_d0._0_8_ != 0) && (local_b0._4_4_ != 0)) {
        uVar2 = *(uint *)(hash_table_size_primes + (local_b0 & 0xffffffff) * 4);
        lVar4 = *(long *)(hash_table_size_primes_inv + (local_b0 & 0xffffffff) * 8);
        uVar46 = String::hash();
        uVar41 = CONCAT44(0,uVar2);
        uVar42 = local_d0._8_8_;
        uVar60 = 1;
        if (uVar46 != 0) {
          uVar60 = uVar46;
        }
        auVar17._8_8_ = 0;
        auVar17._0_8_ = (ulong)uVar60 * lVar4;
        auVar33._8_8_ = 0;
        auVar33._0_8_ = uVar41;
        lVar63 = SUB168(auVar17 * auVar33,8);
        uVar46 = *(uint *)(local_d0._8_8_ + lVar63 * 4);
        iVar61 = SUB164(auVar17 * auVar33,8);
        if (uVar46 != 0) {
          uVar66 = 0;
          while ((uVar60 != uVar46 ||
                 (cVar44 = String::operator==((String *)(*(long *)(uVar58 + lVar63 * 8) + 0x10),
                                              (String *)&local_f8), cVar44 == '\0'))) {
            uVar66 = uVar66 + 1;
            auVar18._8_8_ = 0;
            auVar18._0_8_ = (ulong)(iVar61 + 1) * lVar4;
            auVar34._8_8_ = 0;
            auVar34._0_8_ = uVar41;
            lVar63 = SUB168(auVar18 * auVar34,8);
            uVar46 = *(uint *)(uVar42 + lVar63 * 4);
            iVar61 = SUB164(auVar18 * auVar34,8);
            if ((uVar46 == 0) ||
               (auVar19._8_8_ = 0, auVar19._0_8_ = (ulong)uVar46 * lVar4, auVar35._8_8_ = 0,
               auVar35._0_8_ = uVar41, auVar20._8_8_ = 0,
               auVar20._0_8_ = (ulong)((uVar2 + iVar61) - SUB164(auVar19 * auVar35,8)) * lVar4,
               auVar36._8_8_ = 0, auVar36._0_8_ = uVar41, SUB164(auVar20 * auVar36,8) < uVar66))
            goto LAB_001095f0;
          }
          HashMap<String,bool,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,bool>>>
          ::operator[](local_160,(String *)&local_f8);
          TreeItem::set_collapsed(SUB81(uVar57,0));
        }
      }
LAB_001095f0:
      puVar55 = (undefined8 *)
                HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>>
                ::operator[](local_158,(String *)local_100);
      *puVar55 = uVar57;
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_100);
      if (local_108 == (Object *)0x0) {
LAB_0010963a:
        lVar50 = *(long *)(lVar50 + 8);
        if (lVar50 == 0) break;
        goto LAB_00108b40;
      }
      cVar44 = RefCounted::unreference();
      pOVar7 = local_108;
joined_r0x00108cb9:
      local_108 = pOVar7;
      if ((cVar44 == '\0') || (cVar44 = predelete_handler(pOVar7), cVar44 == '\0'))
      goto LAB_0010963a;
      (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
      Memory::free_static(pOVar7,false);
      lVar50 = *(long *)(lVar50 + 8);
    } while (lVar50 != 0);
    if (local_110 != (long *)0x0) {
      pSVar54 = (String *)*local_110;
joined_r0x00108d1c:
      if (pSVar54 != (String *)0x0) {
        do {
          EditorSettings::get_singleton();
          EditorSettings::get_shortcut((String *)&local_108);
          pOVar7 = local_108;
          pcVar6 = *(code **)(*(long *)local_108 + 0xa0);
          StringName::StringName((StringName *)local_180,"original",false);
          cVar44 = (*pcVar6)(pOVar7);
          if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
            StringName::unref();
          }
          if (cVar44 == '\0') {
joined_r0x00108fce:
            if (local_108 != (Object *)0x0) {
              cVar44 = RefCounted::unreference();
              pOVar7 = local_108;
joined_r0x00108f48:
              local_108 = pOVar7;
              if ((cVar44 != '\0') && (cVar44 = predelete_handler(pOVar7), cVar44 != '\0'))
              goto code_r0x00108ff5;
            }
          }
          else {
            String::get_slice((char *)local_100,(int)pSVar54);
            puVar55 = (undefined8 *)
                      HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>>
                      ::operator[](local_158,(String *)local_100);
            pSVar5 = (String *)*puVar55;
            Shortcut::get_events();
            Resource::get_name();
            cVar44 = _should_display_shortcut
                               ((EditorSettingsDialog *)in_RDI,(String *)&local_f0,
                                (Array *)local_180,true);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
            Array::~Array((Array *)local_180);
            pOVar7 = local_108;
            if (cVar44 == '\0') {
              CowData<char32_t>::_unref((CowData<char32_t> *)local_100);
              goto joined_r0x00108fce;
            }
            pcVar6 = *(code **)(*(long *)local_108 + 0xb8);
            local_70 = (undefined1  [16])0x0;
            local_78 = 0;
            StringName::StringName((StringName *)local_180,"original",false);
            (*pcVar6)(local_178,pOVar7,local_180,&local_78);
            Variant::operator_cast_to_Array((Variant *)&local_f8);
            if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
              Variant::_clear_internal();
            }
            if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
              StringName::unref();
            }
            if (Variant::needs_deinit[(int)local_78] != '\0') {
              Variant::_clear_internal();
            }
            Shortcut::get_events();
            Array::duplicate(bVar65);
            Array::~Array((Array *)local_180);
            bVar45 = Shortcut::is_event_array_equal((Array *)&local_f8,(Array *)&local_f0);
            local_e8 = (char *)((ulong)local_e8 & 0xffffffff00000000);
            cVar44 = HashMap<String,bool,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,bool>>>
                     ::_lookup_pos(local_160,pSVar54,(uint *)local_180);
            if (cVar44 != '\0') {
              local_e8 = (char *)((ulong)local_e8 & 0xffffffff00000000);
              cVar44 = HashMap<String,bool,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,bool>>>
                       ::_lookup_pos(local_160,pSVar54,(uint *)local_180);
              if (cVar44 != '\0') {
                HashMap<String,bool,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,bool>>>
                ::operator[](local_160,pSVar54);
              }
            }
            Resource::get_name();
            _create_shortcut_treeitem
                      (in_RDI,pSVar5,pSVar54,(Array *)local_180,bVar65,(bool)(bVar45 ^ 1),false);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_180);
            Array::~Array((Array *)&local_f0);
            Array::~Array((Array *)&local_f8);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_100);
            if (local_108 != (Object *)0x0) {
              cVar44 = RefCounted::unreference();
              pOVar7 = local_108;
              goto joined_r0x00108f48;
            }
          }
          pSVar54 = *(String **)(pSVar54 + 8);
          if (pSVar54 == (String *)0x0) break;
        } while( true );
      }
    }
  }
  puVar55 = (undefined8 *)local_90._0_8_;
  do {
    while( true ) {
      if (puVar55 == (undefined8 *)0x0) {
        uVar58 = *(undefined8 *)(in_RDI + 0xdf8);
        LineEdit::get_text();
        bVar59 = SUB81(uVar58,0);
        if ((local_f0 == 0) || (*(uint *)(local_f0 + -8) < 2)) {
          EventListenerLineEdit::get_event();
          if (local_e8 == (char *)0x0) {
            BaseButton::set_disabled(bVar59);
          }
          else {
            BaseButton::set_disabled(bVar59);
          }
          Ref<InputEvent>::unref((Ref<InputEvent> *)local_180);
        }
        else {
          BaseButton::set_disabled(bVar59);
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
        List<String,DefaultAllocator>::~List((List<String,DefaultAllocator> *)&local_110);
        uVar58 = local_a0._0_8_;
        if ((undefined8 *)local_a0._0_8_ != (undefined8 *)0x0) {
          uVar57 = local_a0._8_8_;
          if ((local_80._4_4_ != 0) &&
             (*(uint *)(hash_table_size_primes + (local_80 & 0xffffffff) * 4) != 0)) {
            piVar1 = (int *)(local_a0._8_8_ +
                            (ulong)*(uint *)(hash_table_size_primes + (local_80 & 0xffffffff) * 4) *
                            4);
            piVar64 = (int *)local_a0._8_8_;
            puVar55 = (undefined8 *)local_a0._0_8_;
            do {
              if (*piVar64 != 0) {
                pvVar8 = (void *)*puVar55;
                *piVar64 = 0;
                CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar8 + 0x10));
                Memory::free_static(pvVar8,false);
                *puVar55 = 0;
              }
              piVar64 = piVar64 + 1;
              puVar55 = puVar55 + 1;
            } while (piVar64 != piVar1);
          }
          Memory::free_static((void *)uVar58,false);
          Memory::free_static((void *)uVar57,false);
        }
        uVar58 = local_d0._0_8_;
        if ((undefined8 *)local_d0._0_8_ != (undefined8 *)0x0) {
          uVar57 = local_d0._8_8_;
          if ((local_b0._4_4_ != 0) &&
             (*(uint *)(hash_table_size_primes + (local_b0 & 0xffffffff) * 4) != 0)) {
            piVar1 = (int *)(local_d0._8_8_ +
                            (ulong)*(uint *)(hash_table_size_primes + (local_b0 & 0xffffffff) * 4) *
                            4);
            piVar64 = (int *)local_d0._8_8_;
            puVar55 = (undefined8 *)local_d0._0_8_;
            do {
              if (*piVar64 != 0) {
                pvVar8 = (void *)*puVar55;
                *piVar64 = 0;
                CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar8 + 0x10));
                Memory::free_static(pvVar8,false);
                *puVar55 = 0;
              }
              piVar64 = piVar64 + 1;
              puVar55 = puVar55 + 1;
            } while (piVar1 != piVar64);
          }
          Memory::free_static((void *)uVar58,false);
          Memory::free_static((void *)uVar57,false);
        }
        if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
      pOVar7 = (Object *)puVar55[3];
      lVar50 = TreeItem::get_first_child();
      if (lVar50 == 0) break;
LAB_00109038:
      puVar55 = (undefined8 *)*puVar55;
    }
    TreeItem::remove_child(pTVar53);
    cVar44 = predelete_handler(pOVar7);
    if (cVar44 == '\0') goto LAB_00109038;
    (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
    Memory::free_static(pOVar7,false);
    puVar55 = (undefined8 *)*puVar55;
  } while( true );
LAB_00109737:
  if (uVar60 == uVar46) {
    cVar44 = String::operator==((String *)(*(long *)(*(long *)(lVar50 + 8) + lVar62 * 8) + 0x10),
                                (String *)&local_f8);
    if (cVar44 != '\0') goto LAB_0010977b;
    lVar63 = *(long *)(lVar50 + 0x10);
  }
  uVar66 = uVar66 + 1;
  auVar22._8_8_ = 0;
  auVar22._0_8_ = (ulong)(iVar61 + 1) * lVar4;
  auVar38._8_8_ = 0;
  auVar38._0_8_ = uVar41;
  lVar62 = SUB168(auVar22 * auVar38,8);
  uVar46 = *(uint *)(lVar63 + lVar62 * 4);
  iVar61 = SUB164(auVar22 * auVar38,8);
  if ((uVar46 == 0) ||
     (auVar23._8_8_ = 0, auVar23._0_8_ = (ulong)uVar46 * lVar4, auVar39._8_8_ = 0,
     auVar39._0_8_ = uVar41, auVar24._8_8_ = 0,
     auVar24._0_8_ = (ulong)((uVar2 + iVar61) - SUB164(auVar23 * auVar39,8)) * lVar4,
     auVar40._8_8_ = 0, auVar40._0_8_ = uVar41, SUB164(auVar24 * auVar40,8) < uVar66))
  goto LAB_0010977b;
  goto LAB_00109737;
LAB_0010977b:
  _event_list_to_array_helper((List *)&local_f0);
  cVar44 = _should_display_shortcut
                     ((EditorSettingsDialog *)in_RDI,(String *)&local_f8,(Array *)&local_f0,false);
  if (cVar44 == '\0') {
    Array::~Array((Array *)&local_f0);
LAB_00108aa9:
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  }
  else {
    _event_list_to_array_helper((List *)local_180);
    bVar45 = Shortcut::is_event_array_equal((Array *)local_180,(Array *)&local_f0);
    local_100[0] = 0;
    cVar44 = HashMap<String,bool,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,bool>>>
             ::_lookup_pos(local_160,(String *)&local_f8,local_100);
    if (cVar44 != '\0') {
      local_100[0] = 0;
      cVar44 = HashMap<String,bool,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,bool>>>
               ::_lookup_pos(local_160,(String *)&local_f8,local_100);
      if (cVar44 != '\0') {
        HashMap<String,bool,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,bool>>>
        ::operator[](local_160,(String *)&local_f8);
      }
    }
    uVar58 = _create_shortcut_treeitem
                       (in_RDI,pSVar54,(String *)&local_f8,(Array *)&local_f8,bVar65,
                        (bool)(bVar45 ^ 1),true);
    TreeItem::set_auto_translate_mode(uVar58,0,2);
    Array::~Array((Array *)local_180);
    Array::~Array((Array *)&local_f0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  }
  plVar51 = (long *)*plVar51;
  if (plVar51 == (long *)0x0) goto LAB_00108abe;
  goto LAB_00108938;
code_r0x00108ff5:
  (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
  Memory::free_static(pOVar7,false);
  pSVar54 = *(String **)(pSVar54 + 8);
  goto joined_r0x00108d1c;
}



/* EditorSettingsDialog::popup_edit_settings() */

void __thiscall EditorSettingsDialog::popup_edit_settings(EditorSettingsDialog *this)

{
  Object *pOVar1;
  code *pcVar2;
  long lVar3;
  String *pSVar4;
  long in_FS_OFFSET;
  float fVar5;
  undefined8 local_b8;
  undefined8 local_b0;
  char *local_a8;
  undefined8 local_a0;
  undefined1 local_98 [8];
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78 [4];
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = EditorSettings::get_singleton();
  if (lVar3 != 0) {
    EditorSettings::get_singleton();
    EditorSettings::list_text_editor_themes();
    _update_dynamic_property_hints(this);
    pOVar1 = *(Object **)(this + 0xdf0);
    EditorSettings::get_singleton();
    SectionedInspector::edit(pOVar1);
    SectionedInspector::get_inspector();
    EditorInspector::update_tree();
    _update_shortcuts();
    Node::set_process_shortcut_input(SUB81(this,0));
    pSVar4 = (String *)EditorSettings::get_singleton();
    local_88 = 0;
    local_80 = 0;
    Variant::Variant((Variant *)local_78,(Rect2 *)&local_88);
    local_a8 = "editor_settings";
    local_b0 = 0;
    local_a0 = 0xf;
    String::parse_latin1((StrRange *)&local_b0);
    local_a8 = "dialog_bounds";
    local_b8 = 0;
    local_a0 = 0xd;
    String::parse_latin1((StrRange *)&local_b8);
    EditorSettings::get_project_metadata((String *)local_58,pSVar4,(Variant *)&local_b8);
    _local_98 = Variant::operator_cast_to_Rect2((Variant *)local_58);
    if (Variant::needs_deinit[(int)local_58._0_4_] != '\0') {
      Variant::_clear_internal();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    if (Variant::needs_deinit[(int)local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (((((float)local_98._0_4_ == 0.0) && ((float)local_98._4_4_ == 0.0)) &&
        ((float)local_90 == 0.0)) && (local_90._4_4_ == 0.0)) {
      fVar5 = (float)EditorScale::get_scale();
      local_78[0] = CONCAT44(fVar5 * _LC184._4_4_,fVar5 * (float)_LC184);
      local_58._0_8_ = Vector2::operator_cast_to_Vector2i((Vector2 *)local_78);
      Window::popup_centered_clamped(this,_LC185);
    }
    else {
      pcVar2 = *(code **)(*(long *)this + 0x240);
      local_58 = Rect2::operator_cast_to_Rect2i((Rect2 *)local_98);
      (*pcVar2)(this,(String *)local_58);
    }
    lVar3 = TabContainer::get_current_tab_control();
    if (lVar3 == *(long *)(this + 0xdc0)) {
      lVar3 = *(long *)(this + 0xdd0);
    }
    else {
      if (lVar3 != *(long *)(this + 0xdc8)) goto LAB_00109db5;
      lVar3 = *(long *)(this + 0xde0);
    }
    if (lVar3 != 0) {
      Control::grab_focus();
      LineEdit::select_all();
    }
  }
LAB_00109db5:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EditorSettingsDialog::_filter_shortcuts(String const&) */

void EditorSettingsDialog::_filter_shortcuts(String *param_1)

{
  _update_shortcuts();
  return;
}



/* EditorSettingsDialog::_filter_shortcuts_by_event(Ref<InputEvent> const&) */

void __thiscall
EditorSettingsDialog::_filter_shortcuts_by_event(EditorSettingsDialog *this,Ref *param_1)

{
  char cVar1;
  
  if (*(long *)param_1 != 0) {
    cVar1 = InputEvent::is_pressed();
    if (cVar1 != '\0') {
      cVar1 = (**(code **)(**(long **)param_1 + 0x1c8))();
      if (cVar1 == '\0') goto LAB_00109e81;
    }
    return;
  }
LAB_00109e81:
  _update_shortcuts();
  return;
}



/* EditorSettingsDialog::_notification(int) */

void __thiscall EditorSettingsDialog::_notification(EditorSettingsDialog *this,int param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  String *pSVar4;
  long in_FS_OFFSET;
  undefined8 uVar5;
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
      pSVar4 = (String *)EditorSettings::get_singleton();
      local_60 = Window::get_size();
      uVar5 = Vector2i::operator_cast_to_Vector2((Vector2i *)&local_60);
      local_68 = Window::get_position();
      local_58 = Vector2i::operator_cast_to_Vector2((Vector2i *)&local_68);
      local_50 = uVar5;
      Variant::Variant((Variant *)local_48,(Rect2 *)&local_58);
      local_78 = (char *)0x0;
      String::parse_latin1((String *)&local_78,"editor_settings");
      local_80 = 0;
      String::parse_latin1((String *)&local_80,"dialog_bounds");
      EditorSettings::set_project_metadata(pSVar4,(String *)&local_80,(Variant *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      if (Variant::needs_deinit[local_48[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        Node::set_process_shortcut_input(SUB81(this,0));
        return;
      }
      goto LAB_0010a281;
    }
  }
  else if (param_1 < 0x1f) {
    if (param_1 == 10) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        _update_icons();
        return;
      }
      goto LAB_0010a281;
    }
    if (param_1 == 0xd) {
      iVar2 = EditorUndoRedoManager::get_singleton();
      lVar3 = EditorUndoRedoManager::get_or_create_history(iVar2);
      UndoRedo::set_method_notify_callback
                (*(_func_void_void_ptr_Object_ptr_StringName_ptr_Variant_ptr_ptr_int **)(lVar3 + 8),
                 EditorDebuggerNode::_methods_changed);
      lVar3 = EditorUndoRedoManager::get_or_create_history(iVar2);
      UndoRedo::set_property_notify_callback
                (*(_func_void_void_ptr_Object_ptr_StringName_ptr_Variant_ptr **)(lVar3 + 8),
                 EditorDebuggerNode::_properties_changed);
      lVar3 = EditorUndoRedoManager::get_or_create_history(iVar2);
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        UndoRedo::set_commit_notify_callback
                  (*(_func_void_void_ptr_String_ptr **)(lVar3 + 8),_undo_redo_callback);
        return;
      }
      goto LAB_0010a281;
    }
  }
  else if (param_1 == 10000) {
    cVar1 = EditorThemeManager::is_generated_theme_outdated();
    if (cVar1 != '\0') {
      _update_icons();
    }
    pSVar4 = (String *)EditorSettings::get_singleton();
    local_80 = 0;
    local_78 = "shortcuts";
    local_70 = 9;
    String::parse_latin1((StrRange *)&local_80);
    cVar1 = EditorSettings::check_changed_settings_in_group(pSVar4);
    if (cVar1 == '\0') {
      pSVar4 = (String *)EditorSettings::get_singleton();
      local_78 = (char *)0x0;
      String::parse_latin1((String *)&local_78,"builtin_action_overrides");
      cVar1 = EditorSettings::check_changed_settings_in_group(pSVar4);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      if (cVar1 != '\0') goto LAB_00109fd7;
    }
    else {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
LAB_00109fd7:
      _update_shortcuts();
    }
    pSVar4 = (String *)EditorSettings::get_singleton();
    local_80 = 0;
    local_70 = 0x15;
    local_78 = "editors/3d/navigation";
    String::parse_latin1((StrRange *)&local_80);
    cVar1 = EditorSettings::check_changed_settings_in_group(pSVar4);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    if (cVar1 != '\0') {
      _update_dynamic_property_hints(this);
      SectionedInspector::get_inspector();
      EditorInspector::update_tree();
    }
    pSVar4 = (String *)EditorSettings::get_singleton();
    local_80 = 0;
    local_70 = 0x22;
    local_78 = "interface/editor/localize_settings";
    String::parse_latin1((StrRange *)&local_80);
    cVar1 = EditorSettings::check_changed_settings_in_group(pSVar4);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    if (cVar1 != '\0') {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        SectionedInspector::update_category_list();
        return;
      }
      goto LAB_0010a281;
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010a281:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorSettingsDialog::_bind_methods() */

void EditorSettingsDialog::_bind_methods(void)

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
  D_METHODP((char *)local_78,(char ***)"_update_shortcuts",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  pMVar4 = create_method_bind<EditorSettingsDialog>(_update_shortcuts);
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
  D_METHODP((char *)local_78,(char ***)"_settings_changed",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  pMVar4 = create_method_bind<EditorSettingsDialog>(_settings_changed);
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



/* AcceptDialog::custom_action(String const&) */

void AcceptDialog::custom_action(String *param_1)

{
  return;
}



/* EditorSettingsDialog::is_class_ptr(void*) const */

uint EditorSettingsDialog::is_class_ptr(void *param_1)

{
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  return (uint)CONCAT71(0x1188,in_RSI == &AcceptDialog::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1188,in_RSI == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1188,in_RSI == &Window::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1188,in_RSI == &Viewport::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1189,in_RSI == &Node::get_class_ptr_static()::ptr) |
         CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
}



/* EditorSettingsDialog::_property_can_revertv(StringName const&) const */

undefined8 EditorSettingsDialog::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* EditorSettingsDialog::_property_get_revertv(StringName const&, Variant&) const */

undefined8 EditorSettingsDialog::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* CallableCustomMethodPointer<EditorSettingsDialog, void, Vector2 const&, Variant const&,
   Control*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorSettingsDialog,void,Vector2_const&,Variant_const&,Control*>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorSettingsDialog,void,Vector2_const&,Variant_const&,Control*>
           *this)

{
  return;
}



/* CallableCustomMethodPointerC<EditorSettingsDialog, bool, Vector2 const&, Variant const&,
   Control*>::~CallableCustomMethodPointerC() */

void __thiscall
CallableCustomMethodPointerC<EditorSettingsDialog,bool,Vector2_const&,Variant_const&,Control*>::
~CallableCustomMethodPointerC
          (CallableCustomMethodPointerC<EditorSettingsDialog,bool,Vector2_const&,Variant_const&,Control*>
           *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorSettingsDialog, Variant, Vector2 const&,
   Control*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorSettingsDialog,Variant,Vector2_const&,Control*>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorSettingsDialog,Variant,Vector2_const&,Control*> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorSettingsDialog, void, Object*, int, int,
   MouseButton>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorSettingsDialog,void,Object*,int,int,MouseButton>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorSettingsDialog,void,Object*,int,int,MouseButton> *this)

{
  return;
}



/* CallableCustomMethodPointer<EventListenerLineEdit, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EventListenerLineEdit,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EventListenerLineEdit,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<LineEdit, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<LineEdit,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<LineEdit,void> *this)

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



/* CallableCustomMethodPointer<EditorSettingsDialog, void, Ref<InputEvent>
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorSettingsDialog,void,Ref<InputEvent>const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorSettingsDialog,void,Ref<InputEvent>const&> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorSettingsDialog, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorSettingsDialog,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorSettingsDialog,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorSettingsDialog, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorSettingsDialog,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorSettingsDialog,void,String_const&> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorSettingsDialog, void, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorSettingsDialog,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorSettingsDialog,void,bool> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorSettingsDialog, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorSettingsDialog,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorSettingsDialog,void,int> *this)

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



/* CallableCustomMethodPointer<EditorSettingsDialog, void, Vector2 const&, Variant const&,
   Control*>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorSettingsDialog,void,Vector2_const&,Variant_const&,Control*>::
get_argument_count(CallableCustomMethodPointer<EditorSettingsDialog,void,Vector2_const&,Variant_const&,Control*>
                   *this,bool *param_1)

{
  *param_1 = true;
  return 3;
}



/* CallableCustomMethodPointerC<EditorSettingsDialog, bool, Vector2 const&, Variant const&,
   Control*>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointerC<EditorSettingsDialog,bool,Vector2_const&,Variant_const&,Control*>::
get_argument_count(CallableCustomMethodPointerC<EditorSettingsDialog,bool,Vector2_const&,Variant_const&,Control*>
                   *this,bool *param_1)

{
  *param_1 = true;
  return 3;
}



/* CallableCustomMethodPointer<EditorSettingsDialog, Variant, Vector2 const&,
   Control*>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorSettingsDialog,Variant,Vector2_const&,Control*>::
get_argument_count(CallableCustomMethodPointer<EditorSettingsDialog,Variant,Vector2_const&,Control*>
                   *this,bool *param_1)

{
  *param_1 = true;
  return 2;
}



/* CallableCustomMethodPointer<EditorSettingsDialog, void, Object*, int, int,
   MouseButton>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorSettingsDialog,void,Object*,int,int,MouseButton>::
get_argument_count(CallableCustomMethodPointer<EditorSettingsDialog,void,Object*,int,int,MouseButton>
                   *this,bool *param_1)

{
  *param_1 = true;
  return 4;
}



/* CallableCustomMethodPointer<EventListenerLineEdit, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EventListenerLineEdit,void>::get_argument_count
          (CallableCustomMethodPointer<EventListenerLineEdit,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<LineEdit, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<LineEdit,void>::get_argument_count
          (CallableCustomMethodPointer<LineEdit,void> *this,bool *param_1)

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



/* CallableCustomMethodPointer<EditorSettingsDialog, void, Ref<InputEvent>
   const&>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorSettingsDialog,void,Ref<InputEvent>const&>::get_argument_count
          (CallableCustomMethodPointer<EditorSettingsDialog,void,Ref<InputEvent>const&> *this,
          bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<EditorSettingsDialog, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorSettingsDialog,void>::get_argument_count
          (CallableCustomMethodPointer<EditorSettingsDialog,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<EditorSettingsDialog, void, String const&>::get_argument_count(bool&)
   const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorSettingsDialog,void,String_const&>::get_argument_count
          (CallableCustomMethodPointer<EditorSettingsDialog,void,String_const&> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<EditorSettingsDialog, void, bool>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorSettingsDialog,void,bool>::get_argument_count
          (CallableCustomMethodPointer<EditorSettingsDialog,void,bool> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<EditorSettingsDialog, void, int>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorSettingsDialog,void,int>::get_argument_count
          (CallableCustomMethodPointer<EditorSettingsDialog,void,int> *this,bool *param_1)

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



/* CallableCustomMethodPointer<EditorSettingsDialog, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorSettingsDialog,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorSettingsDialog,void,int> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorSettingsDialog, void, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorSettingsDialog,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorSettingsDialog,void,bool> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorSettingsDialog, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorSettingsDialog,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorSettingsDialog,void,String_const&> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorSettingsDialog, void, Ref<InputEvent>
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorSettingsDialog,void,Ref<InputEvent>const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorSettingsDialog,void,Ref<InputEvent>const&> *this)

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



/* CallableCustomMethodPointer<LineEdit, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<LineEdit,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<LineEdit,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EventListenerLineEdit, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EventListenerLineEdit,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EventListenerLineEdit,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorSettingsDialog, void, Object*, int, int,
   MouseButton>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorSettingsDialog,void,Object*,int,int,MouseButton>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorSettingsDialog,void,Object*,int,int,MouseButton> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorSettingsDialog, void, Vector2 const&, Variant const&,
   Control*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorSettingsDialog,void,Vector2_const&,Variant_const&,Control*>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorSettingsDialog,void,Vector2_const&,Variant_const&,Control*>
           *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointerC<EditorSettingsDialog, bool, Vector2 const&, Variant const&,
   Control*>::~CallableCustomMethodPointerC() */

void __thiscall
CallableCustomMethodPointerC<EditorSettingsDialog,bool,Vector2_const&,Variant_const&,Control*>::
~CallableCustomMethodPointerC
          (CallableCustomMethodPointerC<EditorSettingsDialog,bool,Vector2_const&,Variant_const&,Control*>
           *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorSettingsDialog, Variant, Vector2 const&,
   Control*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorSettingsDialog,Variant,Vector2_const&,Control*>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorSettingsDialog,Variant,Vector2_const&,Control*> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorSettingsDialog, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorSettingsDialog,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorSettingsDialog,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00118758;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00118758;
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
  
  if ((code *)PTR__property_can_revert_0011d008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* VBoxContainer::_property_can_revertv(StringName const&) const */

undefined8 VBoxContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0011d008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* EditorSettingsDialog::_getv(StringName const&, Variant&) const */

undefined8 EditorSettingsDialog::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__get_0011d010 != Object::_get) {
    uVar1 = Window::_get(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* EditorSettingsDialog::_setv(StringName const&, Variant const&) */

undefined8 EditorSettingsDialog::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__set_0011d018 != Object::_set) {
    uVar1 = Window::_set(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* EditorSettingsDialog::_validate_propertyv(PropertyInfo&) const */

void EditorSettingsDialog::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  Viewport::_validate_property(param_1);
  if ((code *)PTR__validate_property_0011d020 == Viewport::_validate_property) {
    return;
  }
  Window::_validate_property(param_1);
  return;
}



/* VBoxContainer::_validate_propertyv(PropertyInfo&) const */

void VBoxContainer::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_0011d028 == Control::_validate_property) {
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
  if ((code *)PTR__validate_property_0011d028 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* CallableCustomMethodPointer<EditorSettingsDialog, void, String const&>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorSettingsDialog,void,String_const&>::get_object
          (CallableCustomMethodPointer<EditorSettingsDialog,void,String_const&> *this)

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
      goto LAB_0010b5cd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010b5cd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010b5cd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EventListenerLineEdit, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EventListenerLineEdit,void>::get_object
          (CallableCustomMethodPointer<EventListenerLineEdit,void> *this)

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
      goto LAB_0010b6cd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010b6cd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010b6cd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorSettingsDialog, Variant, Vector2 const&,
   Control*>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorSettingsDialog,Variant,Vector2_const&,Control*>::get_object
          (CallableCustomMethodPointer<EditorSettingsDialog,Variant,Vector2_const&,Control*> *this)

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
      goto LAB_0010b7cd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010b7cd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010b7cd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointerC<EditorSettingsDialog, bool, Vector2 const&, Variant const&,
   Control*>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointerC<EditorSettingsDialog,bool,Vector2_const&,Variant_const&,Control*>::
get_object(CallableCustomMethodPointerC<EditorSettingsDialog,bool,Vector2_const&,Variant_const&,Control*>
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
      goto LAB_0010b8cd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010b8cd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010b8cd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<LineEdit, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<LineEdit,void>::get_object
          (CallableCustomMethodPointer<LineEdit,void> *this)

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
      goto LAB_0010b9cd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010b9cd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010b9cd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorSettingsDialog, void, int>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorSettingsDialog,void,int>::get_object
          (CallableCustomMethodPointer<EditorSettingsDialog,void,int> *this)

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
      goto LAB_0010bacd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010bacd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010bacd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorSettingsDialog, void, Ref<InputEvent> const&>::get_object()
   const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorSettingsDialog,void,Ref<InputEvent>const&>::get_object
          (CallableCustomMethodPointer<EditorSettingsDialog,void,Ref<InputEvent>const&> *this)

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
      goto LAB_0010bbcd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010bbcd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010bbcd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorSettingsDialog, void, Vector2 const&, Variant const&,
   Control*>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorSettingsDialog,void,Vector2_const&,Variant_const&,Control*>::
get_object(CallableCustomMethodPointer<EditorSettingsDialog,void,Vector2_const&,Variant_const&,Control*>
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
      goto LAB_0010bccd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010bccd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010bccd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
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
      goto LAB_0010bdcd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010bdcd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010bdcd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorSettingsDialog, void, bool>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorSettingsDialog,void,bool>::get_object
          (CallableCustomMethodPointer<EditorSettingsDialog,void,bool> *this)

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
      goto LAB_0010becd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010becd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010becd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorSettingsDialog, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorSettingsDialog,void>::get_object
          (CallableCustomMethodPointer<EditorSettingsDialog,void> *this)

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
      goto LAB_0010bfcd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010bfcd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010bfcd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorSettingsDialog, void, Object*, int, int,
   MouseButton>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorSettingsDialog,void,Object*,int,int,MouseButton>::get_object
          (CallableCustomMethodPointer<EditorSettingsDialog,void,Object*,int,int,MouseButton> *this)

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
      goto LAB_0010c0cd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010c0cd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010c0cd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* VBoxContainer::_setv(StringName const&, Variant const&) */

undefined8 VBoxContainer::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_0011d030 != CanvasItem::_set) {
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
    if ((code *)PTR__set_0011d030 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x0010c278) */
/* VBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 VBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_0011d038 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x0010c2e8) */
/* HBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 HBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_0011d038 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
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
    uVar1 = (uint)CONCAT71(0x1189,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1189,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1189,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1189,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1189,in_RSI == &Node::get_class_ptr_static()::ptr) |
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
    uVar1 = (uint)CONCAT71(0x1189,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1189,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1189,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1189,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1189,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* VBoxContainer::~VBoxContainer() */

void __thiscall VBoxContainer::~VBoxContainer(VBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = String::operator<;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010c430;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010c430:
  Control::~Control((Control *)this);
  return;
}



/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = String::operator<;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010c490;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010c490:
  Control::~Control((Control *)this);
  return;
}



/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = String::operator<;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010c4f0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010c4f0:
  Control::~Control((Control *)this);
  operator_delete(this,0xa10);
  return;
}



/* VBoxContainer::~VBoxContainer() */

void __thiscall VBoxContainer::~VBoxContainer(VBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = String::operator<;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010c560;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010c560:
  Control::~Control((Control *)this);
  operator_delete(this,0xa10);
  return;
}



/* SortArray<List<String, DefaultAllocator>::Element*, List<String,
   DefaultAllocator>::AuxiliaryComparator<Comparator<String> >, true>::introsort(long, long,
   List<String, DefaultAllocator>::Element**, long) const [clone .isra.0] */

void SortArray<List<String,DefaultAllocator>::Element*,List<String,DefaultAllocator>::AuxiliaryComparator<Comparator<String>>,true>
     ::introsort(long param_1,long param_2,Element **param_3,long param_4)

{
  Element **ppEVar1;
  String *pSVar2;
  Element *pEVar3;
  char cVar4;
  Element **ppEVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  Element **ppEVar10;
  Element **ppEVar11;
  long lVar12;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  Element **local_50;
  
  lVar9 = param_2 - param_1;
  if (lVar9 < 0x11) {
    return;
  }
  local_78 = param_2;
  if (param_4 != 0) {
    ppEVar11 = param_3 + param_1;
    local_68 = param_2;
    local_60 = param_4;
LAB_0010c631:
    local_60 = local_60 + -1;
    ppEVar1 = param_3 + (lVar9 >> 1) + param_1;
    ppEVar5 = param_3 + local_68 + -1;
    cVar4 = String::operator<((String *)*ppEVar11,(String *)*ppEVar1);
    if (cVar4 == '\0') {
      cVar4 = String::operator<((String *)*ppEVar11,(String *)*ppEVar5);
      ppEVar10 = ppEVar11;
      if (cVar4 != '\0') goto LAB_0010c68d;
      cVar4 = String::operator<((String *)*ppEVar1,(String *)*ppEVar5);
    }
    else {
      cVar4 = String::operator<((String *)*ppEVar1,(String *)*ppEVar5);
      ppEVar10 = ppEVar1;
      if (cVar4 != '\0') goto LAB_0010c68d;
      cVar4 = String::operator<((String *)*ppEVar11,(String *)*ppEVar5);
      ppEVar1 = ppEVar11;
    }
    ppEVar10 = ppEVar1;
    if (cVar4 != '\0') {
      ppEVar10 = ppEVar5;
    }
LAB_0010c68d:
    pSVar2 = (String *)*ppEVar10;
    lVar9 = local_68;
    local_78 = param_1;
    do {
      cVar4 = String::operator<((String *)param_3[local_78],pSVar2);
      if (cVar4 == '\0') {
LAB_0010c6d4:
        lVar9 = lVar9 + -1;
        ppEVar5 = param_3 + lVar9;
        while (cVar4 = String::operator<(pSVar2,(String *)*ppEVar5), cVar4 != '\0') {
          if (param_1 == lVar9) {
            _err_print_error("partitioner","./core/templates/sort_array.h",0xb9,
                             "bad comparison function; sorting will be broken",0,0);
            break;
          }
          lVar9 = lVar9 + -1;
          ppEVar5 = ppEVar5 + -1;
        }
        if (lVar9 <= local_78) goto LAB_0010c740;
        pEVar3 = param_3[local_78];
        param_3[local_78] = *ppEVar5;
        *ppEVar5 = pEVar3;
      }
      else if (local_68 + -1 == local_78) {
        _err_print_error("partitioner","./core/templates/sort_array.h",0xb2,
                         "bad comparison function; sorting will be broken",0,0);
        goto LAB_0010c6d4;
      }
      local_78 = local_78 + 1;
    } while( true );
  }
LAB_0010c802:
  lVar7 = lVar9 + -2 >> 1;
  local_50 = param_3 + param_1 + lVar7;
  local_58 = lVar7 * 2 + 2;
  do {
    pSVar2 = (String *)*local_50;
    lVar6 = local_58;
    local_70 = lVar7;
    if (local_58 < lVar9) {
      do {
        cVar4 = String::operator<((String *)param_3[param_1 + lVar6],
                                  (String *)param_3[param_1 + lVar6 + -1]);
        lVar8 = lVar6 + -1;
        ppEVar11 = param_3 + param_1 + lVar6 + -1;
        lVar12 = lVar6;
        if (cVar4 == '\0') {
          lVar12 = lVar6 + 1;
          lVar8 = lVar6;
          ppEVar11 = param_3 + param_1 + lVar6;
        }
        lVar6 = lVar12 * 2;
        param_3[local_70 + param_1] = *ppEVar11;
        local_70 = lVar8;
      } while (lVar6 < lVar9);
      ppEVar5 = ppEVar11;
      if (lVar6 == lVar9) {
LAB_0010cacd:
        lVar8 = lVar6 + -1;
        ppEVar11 = param_3 + param_1 + lVar8;
        *ppEVar5 = *ppEVar11;
      }
      lVar6 = lVar8 + -1;
      if (lVar8 <= lVar7) goto LAB_0010cb1e;
      do {
        lVar12 = lVar6 >> 1;
        ppEVar11 = param_3 + param_1 + lVar12;
        cVar4 = String::operator<((String *)*ppEVar11,pSVar2);
        if (cVar4 == '\0') {
          param_3[lVar8 + param_1] = (Element *)pSVar2;
          goto joined_r0x0010c98d;
        }
        param_3[lVar8 + param_1] = *ppEVar11;
        lVar6 = (lVar12 + -1) - (lVar12 + -1 >> 0x3f);
        lVar8 = lVar12;
      } while (lVar7 < lVar12);
      *ppEVar11 = (Element *)pSVar2;
joined_r0x0010c98d:
      if (lVar7 == 0) goto LAB_0010c98f;
    }
    else {
      ppEVar5 = local_50;
      ppEVar11 = local_50;
      if (local_58 == lVar9) goto LAB_0010cacd;
LAB_0010cb1e:
      *ppEVar11 = (Element *)pSVar2;
    }
    local_50 = local_50 + -1;
    lVar7 = lVar7 + -1;
    local_58 = local_58 + -2;
  } while( true );
LAB_0010c740:
  introsort(local_78,local_68,param_3,local_60);
  lVar9 = local_78 - param_1;
  if (lVar9 < 0x11) {
    return;
  }
  local_68 = local_78;
  if (local_60 == 0) goto LAB_0010c802;
  goto LAB_0010c631;
LAB_0010c98f:
  ppEVar11 = param_3 + param_1;
  local_68 = (local_78 + -1) - param_1;
LAB_0010c9b0:
  do {
    pSVar2 = (String *)ppEVar11[local_68];
    ppEVar11[local_68] = *ppEVar11;
    if (local_68 < 3) {
      if (local_68 != 2) {
        *ppEVar11 = (Element *)pSVar2;
        return;
      }
      lVar9 = param_1 + 1;
      lVar7 = 0;
      *ppEVar11 = param_3[lVar9];
LAB_0010ca91:
      while( true ) {
        ppEVar1 = param_3 + param_1 + lVar7;
        cVar4 = String::operator<((String *)*ppEVar1,pSVar2);
        ppEVar5 = param_3 + lVar9;
        if (cVar4 == '\0') break;
        *ppEVar5 = *ppEVar1;
        if (lVar7 == 0) {
          local_68 = local_68 + -1;
          *ppEVar1 = (Element *)pSVar2;
          goto LAB_0010c9b0;
        }
        lVar9 = param_1 + lVar7;
        lVar7 = (lVar7 + -1) / 2;
      }
    }
    else {
      local_78 = 0;
      lVar9 = 2;
      do {
        cVar4 = String::operator<((String *)param_3[param_1 + lVar9],
                                  (String *)param_3[param_1 + lVar9 + -1]);
        lVar6 = lVar9 + -1;
        lVar7 = lVar9;
        ppEVar5 = param_3 + param_1 + lVar9 + -1;
        if (cVar4 == '\0') {
          lVar7 = lVar9 + 1;
          lVar6 = lVar9;
          ppEVar5 = param_3 + param_1 + lVar9;
        }
        lVar9 = lVar7 * 2;
        param_3[local_78 + param_1] = *ppEVar5;
        local_78 = lVar6;
      } while (lVar9 < local_68);
      if (lVar9 == local_68) {
        lVar9 = local_68 + -1 + param_1;
        lVar7 = local_68 + -2 >> 1;
        *ppEVar5 = param_3[lVar9];
        goto LAB_0010ca91;
      }
      lVar9 = param_1 + lVar6;
      lVar7 = (lVar6 + -1) / 2;
      if (0 < lVar6) goto LAB_0010ca91;
    }
    local_68 = local_68 + -1;
    *ppEVar5 = (Element *)pSVar2;
  } while( true );
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



/* EditorSettingsDialog::_get_class_namev() const */

undefined8 * EditorSettingsDialog::_get_class_namev(void)

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
LAB_0010cc13:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010cc13;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"EditorSettingsDialog");
      goto LAB_0010cc7e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"EditorSettingsDialog");
LAB_0010cc7e:
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
LAB_0010cd03:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010cd03;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
      goto LAB_0010cd6e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
LAB_0010cd6e:
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
LAB_0010cdf3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010cdf3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
      goto LAB_0010ce5e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
LAB_0010ce5e:
  return &_get_class_namev()::_class_name_static;
}



/* EditorSettingsDialog::get_class() const */

void EditorSettingsDialog::get_class(void)

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
            if (lVar3 == 0) goto LAB_0010d1ef;
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
LAB_0010d1ef:
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
    if (cVar6 != '\0') goto LAB_0010d2a3;
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
      if (cVar6 != '\0') goto LAB_0010d2a3;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar8 = String::operator==(param_1,"Object");
      return uVar8;
    }
  }
  else {
LAB_0010d2a3:
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
            if (lVar3 == 0) goto LAB_0010d45f;
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
LAB_0010d45f:
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
    if (cVar6 != '\0') goto LAB_0010d513;
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
      if (cVar6 != '\0') goto LAB_0010d513;
    }
    cVar6 = String::operator==(param_1,"CanvasItem");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar8 = Node::is_class((Node *)this,param_1);
        return uVar8;
      }
      goto LAB_0010d658;
    }
  }
LAB_0010d513:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010d658:
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
            if (lVar3 == 0) goto LAB_0010d6ef;
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
LAB_0010d6ef:
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
    if (cVar6 != '\0') goto LAB_0010d7a3;
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
      if (cVar6 != '\0') goto LAB_0010d7a3;
    }
    cVar6 = String::operator==(param_1,"Container");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar8 = Control::is_class((Control *)this,param_1);
        return uVar8;
      }
      goto LAB_0010d8e8;
    }
  }
LAB_0010d7a3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010d8e8:
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
            if (lVar4 == 0) goto LAB_0010d95f;
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
LAB_0010d95f:
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
    if (cVar5 != '\0') goto LAB_0010da13;
  }
  cVar5 = String::operator==(param_1,"VBoxContainer");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = BoxContainer::is_class((BoxContainer *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_0010da13:
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
            if (lVar4 == 0) goto LAB_0010dadf;
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
LAB_0010dadf:
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
    if (cVar5 != '\0') goto LAB_0010db93;
  }
  cVar5 = String::operator==(param_1,"HBoxContainer");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = BoxContainer::is_class((BoxContainer *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_0010db93:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x0010dcd0) */
/* BoxContainer::_notificationv(int, bool) */

void __thiscall BoxContainer::_notificationv(BoxContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_0011d040 != Container::_notification) {
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
  if ((code *)PTR__notification_0011d040 == Container::_notification) {
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
            if (lVar3 == 0) goto LAB_0010ddcf;
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
LAB_0010ddcf:
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
    if (cVar6 != '\0') goto LAB_0010de83;
  }
  cVar6 = String::operator==(param_1,"Window");
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
      if (cVar6 != '\0') goto LAB_0010de83;
    }
    cVar6 = String::operator==(param_1,"Viewport");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar8 = Node::is_class((Node *)this,param_1);
        return uVar8;
      }
      goto LAB_0010dfc8;
    }
  }
LAB_0010de83:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010dfc8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorSettingsDialog::is_class(String const&) const */

undefined8 __thiscall EditorSettingsDialog::is_class(EditorSettingsDialog *this,String *param_1)

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
            if (lVar3 == 0) goto LAB_0010e04f;
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
LAB_0010e04f:
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
    if (cVar6 != '\0') goto LAB_0010e103;
  }
  cVar6 = String::operator==(param_1,"EditorSettingsDialog");
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
      if (cVar6 != '\0') goto LAB_0010e103;
    }
    cVar6 = String::operator==(param_1,"AcceptDialog");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar8 = Window::is_class((Window *)this,param_1);
        return uVar8;
      }
      goto LAB_0010e248;
    }
  }
LAB_0010e103:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010e248:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorSettingsDialog::_get_shortcut_button_string(String const&) [clone .cold] */

void EditorSettingsDialog::_get_shortcut_button_string(String *param_1)

{
  code *pcVar1;
  StrRange *unaff_R12;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000058;
  
  uStack0000000000000028 = 0;
  uStack0000000000000058 = 3;
  String::parse_latin1(unaff_R12);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* EditorSettingsDialog::_bind_methods() [clone .cold] */

void EditorSettingsDialog::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* List<Ref<InputEvent>, DefaultAllocator>::List(List<Ref<InputEvent>, DefaultAllocator> const&) */

void __thiscall
List<Ref<InputEvent>,DefaultAllocator>::List
          (List<Ref<InputEvent>,DefaultAllocator> *this,List *param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  undefined1 (*pauVar4) [16];
  long *plVar5;
  
  plVar5 = *(long **)param_1;
  *(undefined8 *)this = 0;
  if (plVar5 == (long *)0x0) {
    return;
  }
  plVar5 = (long *)*plVar5;
  if (plVar5 != (long *)0x0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])this = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
    do {
      while( true ) {
        pauVar4 = (undefined1 (*) [16])operator_new(0x20,DefaultAllocator::alloc);
        *pauVar4 = (undefined1  [16])0x0;
        pauVar4[1] = (undefined1  [16])0x0;
        if (*plVar5 != 0) {
          *(long *)*pauVar4 = *plVar5;
          cVar3 = RefCounted::reference();
          if (cVar3 == '\0') {
            *(undefined8 *)*pauVar4 = 0;
          }
        }
        plVar1 = *(long **)this;
        lVar2 = plVar1[1];
        *(undefined8 *)(*pauVar4 + 8) = 0;
        *(long **)(pauVar4[1] + 8) = plVar1;
        *(long *)pauVar4[1] = lVar2;
        if (lVar2 != 0) {
          *(undefined1 (**) [16])(lVar2 + 8) = pauVar4;
        }
        plVar1[1] = (long)pauVar4;
        if (*plVar1 != 0) break;
        plVar5 = (long *)plVar5[1];
        *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
        *plVar1 = (long)pauVar4;
        if (plVar5 == (long *)0x0) {
          return;
        }
      }
      plVar5 = (long *)plVar5[1];
      *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
    } while (plVar5 != (long *)0x0);
  }
  return;
}



/* List<Ref<InputEvent>, DefaultAllocator>::~List() */

undefined8 __thiscall
List<Ref<InputEvent>,DefaultAllocator>::~List(List<Ref<InputEvent>,DefaultAllocator> *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 uStack_28;
  
  plVar7 = *(long **)this;
  if (plVar7 == (long *)0x0) {
    return uStack_28;
  }
  do {
    plVar1 = (long *)*plVar7;
    if (plVar1 == (long *)0x0) {
      if ((int)plVar7[2] != 0) {
        uVar6 = _err_print_error("~List","./core/templates/list.h",0x316,
                                 "Condition \"_data->size_cache\" is true.",0,0);
        return uVar6;
      }
      break;
    }
    if ((long *)plVar1[3] == plVar7) {
      lVar5 = plVar1[1];
      lVar2 = plVar1[2];
      *plVar7 = lVar5;
      if (plVar1 == (long *)plVar7[1]) {
        plVar7[1] = lVar2;
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 8) = lVar5;
        lVar5 = plVar1[1];
      }
      if (lVar5 != 0) {
        *(long *)(lVar5 + 0x10) = lVar2;
      }
      if (*plVar1 != 0) {
        cVar4 = RefCounted::unreference();
        if (cVar4 != '\0') {
          pOVar3 = (Object *)*plVar1;
          cVar4 = predelete_handler(pOVar3);
          if (cVar4 != '\0') {
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
          }
        }
      }
      Memory::free_static(plVar1,false);
      *(int *)(plVar7 + 2) = (int)plVar7[2] + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    plVar7 = *(long **)this;
  } while ((int)plVar7[2] != 0);
  uVar6 = Memory::free_static(plVar7,false);
  return uVar6;
}



/* Callable create_custom_callable_function_pointer<EditorSettingsDialog, String
   const&>(EditorSettingsDialog*, char const*, void (EditorSettingsDialog::*)(String const&)) */

EditorSettingsDialog *
create_custom_callable_function_pointer<EditorSettingsDialog,String_const&>
          (EditorSettingsDialog *param_1,char *param_2,_func_void_String_ptr *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC32;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_001181b8;
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



/* Callable create_custom_callable_function_pointer<EditorSettingsDialog>(EditorSettingsDialog*,
   char const*, void (EditorSettingsDialog::*)()) */

EditorSettingsDialog *
create_custom_callable_function_pointer<EditorSettingsDialog>
          (EditorSettingsDialog *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC32;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00118248;
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
  *(undefined **)(this + 0x20) = &_LC32;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00118368;
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



/* Callable Callable::bind<Tree*>(Tree*) const */

Tree * Callable::bind<Tree*>(Tree *param_1)

{
  char cVar1;
  Object *in_RDX;
  int in_ESI;
  long in_FS_OFFSET;
  int local_58 [6];
  undefined8 local_40;
  undefined1 local_38 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_58,in_RDX);
  local_40 = 0;
  local_38 = (undefined1  [16])0x0;
  Callable::bindp((Variant **)param_1,in_ESI);
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



/* WARNING: Removing unreachable block (ram,0x0010ef58) */
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



/* WARNING: Removing unreachable block (ram,0x0010f258) */
/* String vformat<Variant>(String const&, Variant const) */

undefined8 * vformat<Variant>(undefined8 *param_1,bool *param_2,Variant *param_3)

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
        if (pvVar5 == (void *)0x0) goto LAB_0010f584;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_0010f584:
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  return;
}



/* HashMap<String, TreeItem*, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, TreeItem*> > >::operator[](String const&) */

undefined1 * __thiscall
HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>>
::operator[](HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>>
             *this,String *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  void *__s;
  long lVar3;
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
  char cVar36;
  uint uVar37;
  uint uVar38;
  ulong uVar39;
  undefined8 uVar40;
  void *__s_00;
  undefined1 (*pauVar41) [16];
  void *pvVar42;
  ulong uVar43;
  int iVar44;
  long lVar45;
  long lVar46;
  ulong uVar47;
  undefined8 uVar48;
  uint *puVar49;
  uint uVar50;
  uint uVar51;
  long lVar52;
  uint uVar53;
  uint uVar54;
  undefined1 (*pauVar55) [16];
  undefined1 (*pauVar56) [16];
  long in_FS_OFFSET;
  long local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar54 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  if (*(long *)(this + 8) == 0) {
LAB_0010fd48:
    uVar39 = (ulong)uVar54;
    uVar43 = uVar39 * 4;
    uVar47 = uVar39 * 8;
    uVar40 = Memory::alloc_static(uVar43,false);
    *(undefined8 *)(this + 0x10) = uVar40;
    pvVar42 = (void *)Memory::alloc_static(uVar47,false);
    *(void **)(this + 8) = pvVar42;
    if (uVar54 != 0) {
      pvVar2 = *(void **)(this + 0x10);
      if ((pvVar2 < (void *)((long)pvVar42 + uVar47)) && (pvVar42 < (void *)((long)pvVar2 + uVar43))
         ) {
        uVar43 = 0;
        do {
          *(undefined4 *)((long)pvVar2 + uVar43 * 4) = 0;
          *(undefined8 *)((long)pvVar42 + uVar43 * 8) = 0;
          uVar43 = uVar43 + 1;
        } while (uVar39 != uVar43);
        goto LAB_0010fbca;
      }
      memset(pvVar2,0,uVar43);
      memset(pvVar42,0,uVar47);
      iVar44 = *(int *)(this + 0x2c);
LAB_0010fbce:
      if (iVar44 != 0) {
LAB_0010fbd6:
        uVar37 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
        lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        uVar51 = String::hash();
        uVar39 = CONCAT44(0,uVar37);
        lVar52 = *(long *)(this + 0x10);
        uVar38 = 1;
        if (uVar51 != 0) {
          uVar38 = uVar51;
        }
        uVar53 = 0;
        auVar16._8_8_ = 0;
        auVar16._0_8_ = (ulong)uVar38 * lVar3;
        auVar32._8_8_ = 0;
        auVar32._0_8_ = uVar39;
        lVar45 = SUB168(auVar16 * auVar32,8);
        uVar51 = *(uint *)(lVar52 + lVar45 * 4);
        uVar50 = SUB164(auVar16 * auVar32,8);
        if (uVar51 != 0) {
          do {
            if (uVar38 == uVar51) {
              cVar36 = String::operator==((String *)
                                          (*(long *)(*(long *)(this + 8) + lVar45 * 8) + 0x10),
                                          param_1);
              if (cVar36 != '\0') {
                pauVar41 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar50 * 8);
                *(undefined8 *)(pauVar41[1] + 8) = 0;
                goto LAB_0010faab;
              }
              lVar52 = *(long *)(this + 0x10);
            }
            uVar53 = uVar53 + 1;
            auVar17._8_8_ = 0;
            auVar17._0_8_ = (ulong)(uVar50 + 1) * lVar3;
            auVar33._8_8_ = 0;
            auVar33._0_8_ = uVar39;
            lVar45 = SUB168(auVar17 * auVar33,8);
            uVar51 = *(uint *)(lVar52 + lVar45 * 4);
            uVar50 = SUB164(auVar17 * auVar33,8);
          } while ((uVar51 != 0) &&
                  (auVar18._8_8_ = 0, auVar18._0_8_ = (ulong)uVar51 * lVar3, auVar34._8_8_ = 0,
                  auVar34._0_8_ = uVar39, auVar19._8_8_ = 0,
                  auVar19._0_8_ = (ulong)((uVar37 + uVar50) - SUB164(auVar18 * auVar34,8)) * lVar3,
                  auVar35._8_8_ = 0, auVar35._0_8_ = uVar39, uVar53 <= SUB164(auVar19 * auVar35,8)))
          ;
        }
        iVar44 = *(int *)(this + 0x2c);
      }
      uVar39 = (ulong)uVar54;
      goto LAB_0010f6f4;
    }
    iVar44 = *(int *)(this + 0x2c);
    if (pvVar42 == (void *)0x0) goto LAB_0010f6f4;
    if (iVar44 != 0) goto LAB_0010fbd6;
LAB_0010f71a:
    uVar54 = *(uint *)(this + 0x28);
    if (uVar54 == 0x1c) {
      pauVar41 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_0010faab;
    }
    uVar39 = (ulong)(uVar54 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar37 = *(uint *)(hash_table_size_primes + (ulong)uVar54 * 4);
    if (uVar54 + 1 < 2) {
      uVar39 = 2;
    }
    uVar54 = *(uint *)(hash_table_size_primes + uVar39 * 4);
    uVar47 = (ulong)uVar54;
    *(int *)(this + 0x28) = (int)uVar39;
    pvVar42 = *(void **)(this + 8);
    uVar39 = uVar47 * 4;
    uVar43 = uVar47 * 8;
    pvVar2 = *(void **)(this + 0x10);
    uVar40 = Memory::alloc_static(uVar39,false);
    *(undefined8 *)(this + 0x10) = uVar40;
    __s_00 = (void *)Memory::alloc_static(uVar43,false);
    *(void **)(this + 8) = __s_00;
    if (uVar54 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar43)) && (__s_00 < (void *)((long)__s + uVar39))) {
        uVar39 = 0;
        do {
          *(undefined4 *)((long)__s + uVar39 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar39 * 8) = 0;
          uVar39 = uVar39 + 1;
        } while (uVar39 != uVar47);
      }
      else {
        memset(__s,0,uVar39);
        memset(__s_00,0,uVar43);
      }
    }
    if (uVar37 != 0) {
      uVar39 = 0;
      do {
        uVar54 = *(uint *)((long)pvVar2 + uVar39 * 4);
        if (uVar54 != 0) {
          lVar3 = *(long *)(this + 0x10);
          uVar50 = 0;
          uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar43 = CONCAT44(0,uVar38);
          lVar52 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar4._8_8_ = 0;
          auVar4._0_8_ = (ulong)uVar54 * lVar52;
          auVar20._8_8_ = 0;
          auVar20._0_8_ = uVar43;
          lVar45 = SUB168(auVar4 * auVar20,8);
          puVar49 = (uint *)(lVar3 + lVar45 * 4);
          iVar44 = SUB164(auVar4 * auVar20,8);
          uVar51 = *puVar49;
          uVar40 = *(undefined8 *)((long)pvVar42 + uVar39 * 8);
          while (uVar51 != 0) {
            auVar5._8_8_ = 0;
            auVar5._0_8_ = (ulong)uVar51 * lVar52;
            auVar21._8_8_ = 0;
            auVar21._0_8_ = uVar43;
            auVar6._8_8_ = 0;
            auVar6._0_8_ = (ulong)((uVar38 + iVar44) - SUB164(auVar5 * auVar21,8)) * lVar52;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar43;
            uVar53 = SUB164(auVar6 * auVar22,8);
            uVar48 = uVar40;
            if (uVar53 < uVar50) {
              *puVar49 = uVar54;
              puVar1 = (undefined8 *)((long)__s_00 + lVar45 * 8);
              uVar48 = *puVar1;
              *puVar1 = uVar40;
              uVar54 = uVar51;
              uVar50 = uVar53;
            }
            uVar50 = uVar50 + 1;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = (ulong)(iVar44 + 1) * lVar52;
            auVar23._8_8_ = 0;
            auVar23._0_8_ = uVar43;
            lVar45 = SUB168(auVar7 * auVar23,8);
            puVar49 = (uint *)(lVar3 + lVar45 * 4);
            iVar44 = SUB164(auVar7 * auVar23,8);
            uVar40 = uVar48;
            uVar51 = *puVar49;
          }
          *(undefined8 *)((long)__s_00 + lVar45 * 8) = uVar40;
          *puVar49 = uVar54;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar39 = uVar39 + 1;
      } while (uVar37 != uVar39);
      Memory::free_static(pvVar42,false);
      Memory::free_static(pvVar2,false);
    }
  }
  else {
    iVar44 = *(int *)(this + 0x2c);
    uVar39 = CONCAT44(0,uVar54);
    if (iVar44 != 0) {
      lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      uVar38 = String::hash();
      lVar52 = *(long *)(this + 0x10);
      uVar37 = 1;
      if (uVar38 != 0) {
        uVar37 = uVar38;
      }
      uVar50 = 0;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = (ulong)uVar37 * lVar3;
      auVar28._8_8_ = 0;
      auVar28._0_8_ = uVar39;
      lVar45 = SUB168(auVar12 * auVar28,8);
      uVar38 = *(uint *)(lVar52 + lVar45 * 4);
      uVar51 = SUB164(auVar12 * auVar28,8);
      if (uVar38 != 0) {
        do {
          if (uVar37 == uVar38) {
            cVar36 = String::operator==((String *)
                                        (*(long *)(*(long *)(this + 8) + lVar45 * 8) + 0x10),param_1
                                       );
            if (cVar36 != '\0') {
              pauVar41 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar51 * 8);
              goto LAB_0010faab;
            }
            lVar52 = *(long *)(this + 0x10);
          }
          uVar50 = uVar50 + 1;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = (ulong)(uVar51 + 1) * lVar3;
          auVar29._8_8_ = 0;
          auVar29._0_8_ = uVar39;
          lVar45 = SUB168(auVar13 * auVar29,8);
          uVar38 = *(uint *)(lVar52 + lVar45 * 4);
          uVar51 = SUB164(auVar13 * auVar29,8);
        } while ((uVar38 != 0) &&
                (auVar14._8_8_ = 0, auVar14._0_8_ = (ulong)uVar38 * lVar3, auVar30._8_8_ = 0,
                auVar30._0_8_ = uVar39, auVar15._8_8_ = 0,
                auVar15._0_8_ = (ulong)((uVar51 + uVar54) - SUB164(auVar14 * auVar30,8)) * lVar3,
                auVar31._8_8_ = 0, auVar31._0_8_ = uVar39, uVar50 <= SUB164(auVar15 * auVar31,8)));
      }
      uVar54 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      if (*(long *)(this + 8) == 0) goto LAB_0010fd48;
LAB_0010fbca:
      iVar44 = *(int *)(this + 0x2c);
      goto LAB_0010fbce;
    }
LAB_0010f6f4:
    if ((float)uVar39 * _LC66 < (float)(iVar44 + 1)) goto LAB_0010f71a;
  }
  local_58[0] = 0;
  if (*(long *)param_1 == 0) {
    local_58[1] = 0;
    pauVar41 = (undefined1 (*) [16])operator_new(0x20,"");
    *(undefined8 *)pauVar41[1] = 0;
    *pauVar41 = (undefined1  [16])0x0;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)local_58,(CowData *)param_1);
    lVar3 = local_58[0];
    local_58[1] = 0;
    pauVar41 = (undefined1 (*) [16])operator_new(0x20,"");
    *(undefined8 *)pauVar41[1] = 0;
    *(undefined8 *)*pauVar41 = 0;
    *(undefined8 *)(*pauVar41 + 8) = 0;
    if (lVar3 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(pauVar41 + 1),(CowData *)local_58);
    }
  }
  *(undefined8 *)(pauVar41[1] + 8) = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  puVar1 = *(undefined8 **)(this + 0x20);
  if (puVar1 == (undefined8 *)0x0) {
    *(undefined1 (**) [16])(this + 0x18) = pauVar41;
  }
  else {
    *puVar1 = pauVar41;
    *(undefined8 **)(*pauVar41 + 8) = puVar1;
  }
  *(undefined1 (**) [16])(this + 0x20) = pauVar41;
  uVar37 = String::hash();
  lVar3 = *(long *)(this + 0x10);
  uVar54 = 1;
  if (uVar37 != 0) {
    uVar54 = uVar37;
  }
  uVar37 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar39 = CONCAT44(0,uVar37);
  lVar52 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = (ulong)uVar54 * lVar52;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = uVar39;
  lVar46 = SUB168(auVar8 * auVar24,8);
  lVar45 = *(long *)(this + 8);
  puVar49 = (uint *)(lVar3 + lVar46 * 4);
  iVar44 = SUB164(auVar8 * auVar24,8);
  uVar38 = *puVar49;
  pauVar56 = pauVar41;
  if (uVar38 != 0) {
    uVar51 = 0;
    pauVar55 = pauVar41;
    do {
      auVar9._8_8_ = 0;
      auVar9._0_8_ = (ulong)uVar38 * lVar52;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = uVar39;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = (ulong)((uVar37 + iVar44) - SUB164(auVar9 * auVar25,8)) * lVar52;
      auVar26._8_8_ = 0;
      auVar26._0_8_ = uVar39;
      uVar50 = SUB164(auVar10 * auVar26,8);
      pauVar56 = pauVar55;
      if (uVar50 < uVar51) {
        *puVar49 = uVar54;
        puVar1 = (undefined8 *)(lVar45 + lVar46 * 8);
        pauVar56 = (undefined1 (*) [16])*puVar1;
        *puVar1 = pauVar55;
        uVar51 = uVar50;
        uVar54 = uVar38;
      }
      uVar51 = uVar51 + 1;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = (ulong)(iVar44 + 1) * lVar52;
      auVar27._8_8_ = 0;
      auVar27._0_8_ = uVar39;
      lVar46 = SUB168(auVar11 * auVar27,8);
      puVar49 = (uint *)(lVar3 + lVar46 * 4);
      iVar44 = SUB164(auVar11 * auVar27,8);
      uVar38 = *puVar49;
      pauVar55 = pauVar56;
    } while (uVar38 != 0);
  }
  *(undefined1 (**) [16])(lVar45 + lVar46 * 8) = pauVar56;
  *puVar49 = uVar54;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_0010faab:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pauVar41[1] + 8;
  }
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



/* CallableCustomMethodPointer<EventListenerLineEdit, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EventListenerLineEdit,void>::call
          (CallableCustomMethodPointer<EventListenerLineEdit,void> *this,Variant **param_1,
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
      goto LAB_0011013f;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_0011013f;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00110118. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_00110201;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0011013f:
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
LAB_00110201:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<LineEdit, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<LineEdit,void>::call
          (CallableCustomMethodPointer<LineEdit,void> *this,Variant **param_1,int param_2,
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
      goto LAB_0011035f;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_0011035f;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00110338. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_00110421;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0011035f:
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
LAB_00110421:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<EditorSettingsDialog, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorSettingsDialog,void>::call
          (CallableCustomMethodPointer<EditorSettingsDialog,void> *this,Variant **param_1,
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
      goto LAB_0011057f;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_0011057f;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00110558. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_00110641;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0011057f:
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
LAB_00110641:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<EditorSettingsDialog, void, Vector2 const&, Variant const&,
   Control*>::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorSettingsDialog,void,Vector2_const&,Variant_const&,Control*>::call
          (CallableCustomMethodPointer<EditorSettingsDialog,void,Vector2_const&,Variant_const&,Control*>
           *this,Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  Variant *this_00;
  ulong uVar3;
  undefined8 uVar4;
  char cVar5;
  Object *pOVar6;
  Object *pOVar7;
  long lVar8;
  uint uVar9;
  ulong *puVar10;
  code *pcVar11;
  long in_FS_OFFSET;
  bool bVar12;
  CowData<char32_t> local_90 [8];
  CowData<char32_t> local_88 [8];
  undefined8 local_80;
  char *local_78;
  undefined8 local_70;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar9 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar9 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar3 = (ulong)local_78 >> 8;
      local_78 = (char *)(uVar3 << 8);
      LOCK();
      bVar12 = (char)ObjectDB::spin_lock == '\0';
      if (bVar12) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar12) break;
      local_78 = (char *)(uVar3 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar10 = (ulong *)((ulong)uVar9 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) == (*puVar10 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar10[1] != 0) {
        lVar1 = *(long *)(this + 0x28);
        pcVar11 = *(code **)(this + 0x38);
        lVar2 = *(long *)(this + 0x40);
        if (3 < (uint)param_2) {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 3;
          goto LAB_00110715;
        }
        if (param_2 != 3) {
          *(undefined4 *)param_4 = 4;
          *(undefined4 *)(param_4 + 8) = 3;
          goto LAB_00110715;
        }
        *(undefined4 *)param_4 = 0;
        if (((ulong)pcVar11 & 1) != 0) {
          pcVar11 = *(code **)(pcVar11 + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[2],0x18);
        if (cVar5 == '\0') {
LAB_0011079f:
          uVar4 = _LC125;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        else {
          this_00 = param_1[2];
          pOVar6 = Variant::operator_cast_to_Object_(this_00);
          pOVar7 = Variant::operator_cast_to_Object_(this_00);
          if (((pOVar7 == (Object *)0x0) ||
              (lVar8 = __dynamic_cast(pOVar7,&Object::typeinfo,&Control::typeinfo,0), lVar8 == 0))
             && (pOVar6 != (Object *)0x0)) goto LAB_0011079f;
        }
        pOVar6 = Variant::operator_cast_to_Object_(param_1[2]);
        if (pOVar6 != (Object *)0x0) {
          pOVar6 = (Object *)__dynamic_cast(pOVar6,&Object::typeinfo,&Control::typeinfo,0);
        }
        cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[1],0);
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = 1;
        }
        Variant::Variant((Variant *)local_58,param_1[1]);
        cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,5);
        uVar4 = _LC127;
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        local_60 = Variant::operator_cast_to_Vector2(*param_1);
        (*pcVar11)((long *)(lVar1 + lVar2),&local_60,(Variant *)local_58,pOVar6);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        goto LAB_00110715;
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
  local_80 = 0;
  local_78 = "\', can\'t call method.";
  local_70 = 0x15;
  String::parse_latin1((StrRange *)&local_80);
  uitos((ulong)local_90);
  operator+((char *)local_88,(String *)"Invalid Object id \'");
  String::operator+((String *)&local_78,(String *)local_88);
  _err_print_error(&_LC124,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (String *)&local_78,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref(local_88);
  CowData<char32_t>::_unref(local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
LAB_00110715:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointerC<EditorSettingsDialog, bool, Vector2 const&, Variant const&,
   Control*>::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointerC<EditorSettingsDialog,bool,Vector2_const&,Variant_const&,Control*>::call
          (CallableCustomMethodPointerC<EditorSettingsDialog,bool,Vector2_const&,Variant_const&,Control*>
           *this,Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  Variant *this_00;
  ulong uVar3;
  undefined8 uVar4;
  char cVar5;
  Object *pOVar6;
  Object *pOVar7;
  long lVar8;
  uint uVar9;
  ulong *puVar10;
  code *pcVar11;
  long in_FS_OFFSET;
  bool bVar12;
  CowData<char32_t> local_b0 [8];
  CowData<char32_t> local_a8 [8];
  undefined8 local_a0;
  char *local_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined4 local_78 [2];
  undefined8 local_70;
  undefined8 uStack_68;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar9 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar9 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar3 = (ulong)local_98 >> 8;
      local_98 = (char *)(uVar3 << 8);
      LOCK();
      bVar12 = (char)ObjectDB::spin_lock == '\0';
      if (bVar12) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar12) break;
      local_98 = (char *)(uVar3 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar10 = (ulong *)((ulong)uVar9 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) == (*puVar10 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar10[1] != 0) {
        lVar1 = *(long *)(this + 0x28);
        pcVar11 = *(code **)(this + 0x38);
        lVar2 = *(long *)(this + 0x40);
        if (3 < (uint)param_2) {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 3;
          goto LAB_00110a94;
        }
        if (param_2 != 3) {
          *(undefined4 *)param_4 = 4;
          *(undefined4 *)(param_4 + 8) = 3;
          goto LAB_00110a94;
        }
        *(undefined4 *)param_4 = 0;
        if (((ulong)pcVar11 & 1) != 0) {
          pcVar11 = *(code **)(pcVar11 + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[2],0x18);
        if (cVar5 == '\0') {
LAB_00110b1c:
          uVar4 = _LC125;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        else {
          this_00 = param_1[2];
          pOVar6 = Variant::operator_cast_to_Object_(this_00);
          pOVar7 = Variant::operator_cast_to_Object_(this_00);
          if (((pOVar7 == (Object *)0x0) ||
              (lVar8 = __dynamic_cast(pOVar7,&Object::typeinfo,&Control::typeinfo,0), lVar8 == 0))
             && (pOVar6 != (Object *)0x0)) goto LAB_00110b1c;
        }
        pOVar6 = Variant::operator_cast_to_Object_(param_1[2]);
        if (pOVar6 != (Object *)0x0) {
          pOVar6 = (Object *)__dynamic_cast(pOVar6,&Object::typeinfo,&Control::typeinfo,0);
        }
        cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[1],0);
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = 1;
        }
        Variant::Variant((Variant *)local_58,param_1[1]);
        cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,5);
        uVar4 = _LC127;
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        local_80 = Variant::operator_cast_to_Vector2(*param_1);
        bVar12 = (bool)(*pcVar11)((long *)(lVar1 + lVar2),&local_80,(Variant *)local_58,pOVar6);
        Variant::Variant((Variant *)local_78,bVar12);
        if (Variant::needs_deinit[*(int *)param_3] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)param_3 = local_78[0];
        *(undefined8 *)(param_3 + 8) = local_70;
        *(undefined8 *)(param_3 + 0x10) = uStack_68;
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        goto LAB_00110a94;
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
  local_a0 = 0;
  local_98 = "\', can\'t call method.";
  local_90 = 0x15;
  String::parse_latin1((StrRange *)&local_a0);
  uitos((ulong)local_b0);
  operator+((char *)local_a8,(String *)"Invalid Object id \'");
  String::operator+((String *)&local_98,(String *)local_a8);
  _err_print_error(&_LC124,"./core/object/callable_method_pointer.h",0xad,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (String *)&local_98,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref(local_a8);
  CowData<char32_t>::_unref(local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
LAB_00110a94:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<EditorSettingsDialog, Variant, Vector2 const&,
   Control*>::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorSettingsDialog,Variant,Vector2_const&,Control*>::call
          (CallableCustomMethodPointer<EditorSettingsDialog,Variant,Vector2_const&,Control*> *this,
          Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  Variant *this_00;
  ulong uVar3;
  undefined8 uVar4;
  char cVar5;
  Object *pOVar6;
  Object *pOVar7;
  long lVar8;
  uint uVar9;
  ulong *puVar10;
  code *pcVar11;
  long in_FS_OFFSET;
  bool bVar12;
  CowData<char32_t> local_90 [8];
  CowData<char32_t> local_88 [8];
  undefined8 local_80;
  char *local_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar9 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar9 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar3 = (ulong)local_78 >> 8;
      local_78 = (char *)(uVar3 << 8);
      LOCK();
      bVar12 = (char)ObjectDB::spin_lock == '\0';
      if (bVar12) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar12) break;
      local_78 = (char *)(uVar3 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar10 = (ulong *)((ulong)uVar9 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) == (*puVar10 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar10[1] != 0) {
        lVar1 = *(long *)(this + 0x28);
        pcVar11 = *(code **)(this + 0x38);
        lVar2 = *(long *)(this + 0x40);
        if (2 < (uint)param_2) {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 2;
          goto LAB_00110e3c;
        }
        if (param_2 != 2) {
          *(undefined4 *)param_4 = 4;
          *(undefined4 *)(param_4 + 8) = 2;
          goto LAB_00110e3c;
        }
        *(undefined4 *)param_4 = 0;
        if (((ulong)pcVar11 & 1) != 0) {
          pcVar11 = *(code **)(pcVar11 + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[1],0x18);
        if (cVar5 == '\0') {
LAB_00110ebc:
          uVar4 = _LC128;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        else {
          this_00 = param_1[1];
          pOVar6 = Variant::operator_cast_to_Object_(this_00);
          pOVar7 = Variant::operator_cast_to_Object_(this_00);
          if (((pOVar7 == (Object *)0x0) ||
              (lVar8 = __dynamic_cast(pOVar7,&Object::typeinfo,&Control::typeinfo,0), lVar8 == 0))
             && (pOVar6 != (Object *)0x0)) goto LAB_00110ebc;
        }
        pOVar6 = Variant::operator_cast_to_Object_(param_1[1]);
        if (pOVar6 != (Object *)0x0) {
          pOVar6 = (Object *)__dynamic_cast(pOVar6,&Object::typeinfo,&Control::typeinfo,0);
        }
        cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,5);
        uVar4 = _LC127;
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        local_60 = Variant::operator_cast_to_Vector2(*param_1);
        (*pcVar11)(local_58,(long *)(lVar1 + lVar2),&local_60,pOVar6);
        if (Variant::needs_deinit[*(int *)param_3] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)param_3 = local_58[0];
        *(undefined8 *)(param_3 + 8) = local_50;
        *(undefined8 *)(param_3 + 0x10) = uStack_48;
        goto LAB_00110e3c;
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
  local_80 = 0;
  local_78 = "\', can\'t call method.";
  local_70 = 0x15;
  String::parse_latin1((StrRange *)&local_80);
  uitos((ulong)local_90);
  operator+((char *)local_88,(String *)"Invalid Object id \'");
  String::operator+((String *)&local_78,(String *)local_88);
  _err_print_error(&_LC124,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (String *)&local_78,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref(local_88);
  CowData<char32_t>::_unref(local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
LAB_00110e3c:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<EditorSettingsDialog, void, int>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorSettingsDialog,void,int>::call
          (CallableCustomMethodPointer<EditorSettingsDialog,void,int> *this,Variant **param_1,
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
      goto LAB_00111278;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar8[1] == 0) goto LAB_00111278;
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
        uVar4 = _LC129;
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        iVar6 = Variant::operator_cast_to_int(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00111227. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),iVar6);
          return;
        }
        goto LAB_0011133a;
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
LAB_00111278:
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
LAB_0011133a:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<EditorSettingsDialog, void, Object*, int, int,
   MouseButton>::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorSettingsDialog,void,Object*,int,int,MouseButton>::call
          (CallableCustomMethodPointer<EditorSettingsDialog,void,Object*,int,int,MouseButton> *this,
          Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  Variant *this_00;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  Object *pOVar8;
  Object *pOVar9;
  uint uVar10;
  ulong *puVar11;
  code *UNRECOVERED_JUMPTABLE;
  long in_FS_OFFSET;
  bool bVar12;
  CowData<char32_t> local_70 [8];
  CowData<char32_t> local_68 [8];
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar10 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar10 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar7 = (ulong)local_58 >> 8;
      local_58 = (char *)(uVar7 << 8);
      LOCK();
      bVar12 = (char)ObjectDB::spin_lock == '\0';
      if (bVar12) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar12) break;
      local_58 = (char *)(uVar7 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar11 = (ulong *)((ulong)uVar10 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar11 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_001115a0;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar11[1] == 0) goto LAB_001115a0;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if ((uint)param_2 < 5) {
      if (param_2 == 4) {
        *(undefined4 *)param_4 = 0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar4 = Variant::can_convert_strict(*(undefined4 *)param_1[3],2);
        uVar3 = _LC130;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        uVar7 = Variant::operator_cast_to_long(param_1[3]);
        cVar4 = Variant::can_convert_strict(*(undefined4 *)param_1[2],2);
        uVar3 = _LC131;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        iVar5 = Variant::operator_cast_to_int(param_1[2]);
        cVar4 = Variant::can_convert_strict(*(undefined4 *)param_1[1],2);
        uVar3 = _LC132;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        iVar6 = Variant::operator_cast_to_int(param_1[1]);
        cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,0x18);
        if (cVar4 == '\0') {
LAB_00111528:
          uVar3 = _LC133;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        else {
          this_00 = *param_1;
          pOVar8 = Variant::operator_cast_to_Object_(this_00);
          pOVar9 = Variant::operator_cast_to_Object_(this_00);
          if ((pOVar9 == (Object *)0x0) && (pOVar8 != (Object *)0x0)) goto LAB_00111528;
        }
        pOVar8 = Variant::operator_cast_to_Object_(*param_1);
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00111579. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),pOVar8,iVar6,iVar5,uVar7 & 0xffffffff);
          return;
        }
        goto LAB_0011169b;
      }
      *(undefined4 *)param_4 = 4;
      *(undefined4 *)(param_4 + 8) = 4;
    }
    else {
      *(undefined4 *)param_4 = 3;
      *(undefined4 *)(param_4 + 8) = 4;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_001115a0:
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
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0011169b:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<EditorSettingsDialog, void, bool>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorSettingsDialog,void,bool>::call
          (CallableCustomMethodPointer<EditorSettingsDialog,void,bool> *this,Variant **param_1,
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
      goto LAB_00111859;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar7[1] == 0) goto LAB_00111859;
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
        uVar4 = _LC134;
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        bVar8 = Variant::operator_cast_to_bool(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00111808. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),bVar8);
          return;
        }
        goto LAB_0011191b;
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
LAB_00111859:
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
LAB_0011191b:
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
      goto LAB_00111ad9;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar7[1] == 0) goto LAB_00111ad9;
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
        uVar4 = _LC134;
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        bVar8 = Variant::operator_cast_to_bool(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00111a88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),bVar8);
          return;
        }
        goto LAB_00111b9b;
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
LAB_00111ad9:
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
LAB_00111b9b:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<EditorSettingsDialog, void, Ref<InputEvent> const&>::call(Variant
   const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorSettingsDialog,void,Ref<InputEvent>const&>::call
          (CallableCustomMethodPointer<EditorSettingsDialog,void,Ref<InputEvent>const&> *this,
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
          goto LAB_00111c6e;
        }
        if (param_2 == 0) {
          *(undefined4 *)param_4 = 4;
          *(undefined4 *)(param_4 + 8) = 1;
          goto LAB_00111c6e;
        }
        *(undefined4 *)param_4 = 0;
        if (((ulong)pcVar10 & 1) != 0) {
          pcVar10 = *(code **)(pcVar10 + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar6 = Variant::can_convert_strict(*(undefined4 *)*param_1);
        uVar4 = _LC133;
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
LAB_00111d3d:
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
              if (pOVar5 != (Object *)0x0) goto LAB_00111d3d;
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
        goto LAB_00111c6e;
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
  local_48 = (Object *)0x10ff4f;
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
LAB_00111c6e:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<EditorSettingsDialog, void, String const&>::call(Variant const**,
   int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorSettingsDialog,void,String_const&>::call
          (CallableCustomMethodPointer<EditorSettingsDialog,void,String_const&> *this,
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
            uVar4 = _LC135;
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
        goto LAB_00111fee;
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
LAB_00111fee:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
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
              if ((code *)PTR__bind_methods_0011d058 != Node::_bind_methods) {
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
            if ((code *)PTR__bind_compatibility_methods_0011d048 !=
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
      if ((code *)PTR__bind_methods_0011d050 != Container::_bind_methods) {
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
              if ((code *)PTR__bind_methods_0011d058 != Node::_bind_methods) {
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
            if ((code *)PTR__bind_compatibility_methods_0011d048 !=
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
      if ((code *)PTR__bind_methods_0011d050 != Container::_bind_methods) {
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
  local_78 = &_LC11;
  local_88 = 0;
  local_90 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = &_LC11;
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
LAB_00112f9d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00112f9d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar5;
      local_68 = local_80;
      goto joined_r0x00112fbf;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar5;
joined_r0x00112fbf:
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
  if (local_90 == 0) {
LAB_0011331d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0011331d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0011333f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0011333f:
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
      goto LAB_001136d1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001136d1:
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
  if ((code *)PTR__get_property_list_0011d060 != Object::_get_property_list) {
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
      goto LAB_001139a1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001139a1:
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



/* EditorSettingsDialog::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
EditorSettingsDialog::_get_property_listv(EditorSettingsDialog *this,List *param_1,bool param_2)

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
  local_78 = "EditorSettingsDialog";
  local_70 = 0x14;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorSettingsDialog";
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
      goto LAB_00113c51;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00113c51:
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
  StringName::StringName((StringName *)&local_78,"EditorSettingsDialog",false);
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
      goto LAB_00113f01;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00113f01:
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
  if ((code *)PTR__get_property_list_0011d068 != Object::_get_property_list) {
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
      goto LAB_001141d1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001141d1:
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
  if ((code *)PTR__get_property_list_0011d070 != CanvasItem::_get_property_list) {
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
  if (local_90 == 0) {
LAB_001144cd:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001144cd;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x001144ef;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x001144ef:
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
      goto LAB_00114881;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00114881:
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
  if (local_90 == 0) {
LAB_00114b5d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00114b5d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00114b7f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00114b7f:
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
  if (local_90 == 0) {
LAB_00114f3d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00114f3d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00114f5f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00114f5f:
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



/* Ref<InputEvent>::unref() */

void __thiscall Ref<InputEvent>::unref(Ref<InputEvent> *this)

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



/* Ref<InputEventKey>::unref() */

void __thiscall Ref<InputEventKey>::unref(Ref<InputEventKey> *this)

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



/* Ref<InputEvent>::TEMPNAMEPLACEHOLDERVALUE(Variant const&) */

void __thiscall Ref<InputEvent>::operator=(Ref<InputEvent> *this,Variant *param_1)

{
  Object *pOVar1;
  char cVar2;
  Object *pOVar3;
  
  pOVar3 = (Object *)Variant::get_validated_object();
  pOVar1 = *(Object **)this;
  if (pOVar1 == pOVar3) {
    return;
  }
  if (pOVar3 == (Object *)0x0) {
    if (pOVar1 == (Object *)0x0) {
      return;
    }
    *(undefined8 *)this = 0;
  }
  else {
    pOVar3 = (Object *)__dynamic_cast(pOVar3,&Object::typeinfo,&InputEvent::typeinfo,0);
    if (pOVar1 == pOVar3) {
      return;
    }
    *(Object **)this = pOVar3;
    if ((pOVar3 != (Object *)0x0) && (cVar2 = RefCounted::reference(), cVar2 == '\0')) {
      *(undefined8 *)this = 0;
    }
    if (pOVar1 == (Object *)0x0) {
      return;
    }
  }
  cVar2 = RefCounted::unreference();
  if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar1), cVar2 != '\0')) {
    (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
    Memory::free_static(pOVar1,false);
    return;
  }
  return;
}



/* HashMap<String, bool, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, bool> > >::_lookup_pos(String const&, unsigned int&)
   const */

undefined8 __thiscall
HashMap<String,bool,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,bool>>>
::_lookup_pos(HashMap<String,bool,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,bool>>>
              *this,String *param_1,uint *param_2)

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
  undefined8 uVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  uint uVar18;
  
  if ((*(long *)(this + 8) != 0) && (*(int *)(this + 0x2c) != 0)) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    uVar16 = CONCAT44(0,uVar1);
    lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    uVar11 = String::hash();
    uVar13 = 1;
    if (uVar11 != 0) {
      uVar13 = uVar11;
    }
    lVar17 = *(long *)(this + 0x10);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (ulong)uVar13 * lVar2;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar16;
    lVar15 = SUB168(auVar3 * auVar7,8);
    uVar11 = *(uint *)(lVar17 + lVar15 * 4);
    uVar14 = SUB164(auVar3 * auVar7,8);
    if (uVar11 != 0) {
      uVar18 = 0;
      do {
        if (uVar13 == uVar11) {
          uVar12 = String::operator==((String *)(*(long *)(*(long *)(this + 8) + lVar15 * 8) + 0x10)
                                      ,param_1);
          if ((char)uVar12 != '\0') {
            *param_2 = uVar14;
            return uVar12;
          }
          lVar17 = *(long *)(this + 0x10);
        }
        uVar18 = uVar18 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(uVar14 + 1) * lVar2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar16;
        lVar15 = SUB168(auVar4 * auVar8,8);
        uVar11 = *(uint *)(lVar17 + lVar15 * 4);
        uVar14 = SUB164(auVar4 * auVar8,8);
      } while ((uVar11 != 0) &&
              (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar11 * lVar2, auVar9._8_8_ = 0,
              auVar9._0_8_ = uVar16, auVar6._8_8_ = 0,
              auVar6._0_8_ = (ulong)((uVar1 + uVar14) - SUB164(auVar5 * auVar9,8)) * lVar2,
              auVar10._8_8_ = 0, auVar10._0_8_ = uVar16, uVar18 <= SUB164(auVar6 * auVar10,8)));
    }
  }
  return 0;
}



/* HashMap<String, bool, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, bool> > >::operator[](String const&) */

undefined1 * __thiscall
HashMap<String,bool,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,bool>>>
::operator[](HashMap<String,bool,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,bool>>>
             *this,String *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  void *__s;
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
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  char cVar21;
  uint uVar22;
  uint uVar23;
  ulong uVar24;
  undefined8 uVar25;
  void *__s_00;
  undefined1 (*pauVar26) [16];
  void *pvVar27;
  int iVar28;
  long lVar29;
  long lVar30;
  uint uVar31;
  ulong uVar32;
  undefined8 uVar33;
  uint *puVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  ulong uVar38;
  undefined1 (*pauVar39) [16];
  undefined1 (*pauVar40) [16];
  long in_FS_OFFSET;
  uint local_70;
  uint local_6c;
  undefined1 local_68 [16];
  long local_58;
  undefined1 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = 0;
  cVar21 = _lookup_pos(this,param_1,&local_70);
  if (cVar21 == '\0') {
    uVar31 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    if (*(long *)(this + 8) == 0) {
      uVar32 = (ulong)uVar31;
      uVar24 = uVar32 * 4;
      uVar38 = uVar32 * 8;
      uVar25 = Memory::alloc_static(uVar24,false);
      *(undefined8 *)(this + 0x10) = uVar25;
      pvVar27 = (void *)Memory::alloc_static(uVar38,false);
      *(void **)(this + 8) = pvVar27;
      if (uVar31 != 0) {
        pvVar2 = *(void **)(this + 0x10);
        if ((pvVar2 < (void *)((long)pvVar27 + uVar38)) &&
           (pvVar27 < (void *)((long)pvVar2 + uVar24))) {
          uVar24 = 0;
          do {
            *(undefined4 *)((long)pvVar2 + uVar24 * 4) = 0;
            *(undefined8 *)((long)pvVar27 + uVar24 * 8) = 0;
            uVar24 = uVar24 + 1;
          } while (uVar32 != uVar24);
        }
        else {
          memset(pvVar2,0,uVar24);
          memset(pvVar27,0,uVar38);
        }
      }
    }
    local_6c = 0;
    cVar21 = _lookup_pos(this,param_1,&local_6c);
    if (cVar21 == '\0') {
      if ((float)uVar31 * _LC66 < (float)(*(int *)(this + 0x2c) + 1)) {
        uVar31 = *(uint *)(this + 0x28);
        if (uVar31 == 0x1c) {
          pauVar26 = (undefined1 (*) [16])0x0;
          _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                           "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                           ,"Hash table maximum capacity reached, aborting insertion.",0,0);
          goto LAB_001158b4;
        }
        uVar24 = (ulong)(uVar31 + 1);
        *(undefined4 *)(this + 0x2c) = 0;
        uVar23 = *(uint *)(hash_table_size_primes + (ulong)uVar31 * 4);
        if (uVar31 + 1 < 2) {
          uVar24 = 2;
        }
        uVar31 = *(uint *)(hash_table_size_primes + uVar24 * 4);
        uVar32 = (ulong)uVar31;
        *(int *)(this + 0x28) = (int)uVar24;
        pvVar27 = *(void **)(this + 8);
        uVar24 = uVar32 * 4;
        uVar38 = uVar32 * 8;
        pvVar2 = *(void **)(this + 0x10);
        uVar25 = Memory::alloc_static(uVar24,false);
        *(undefined8 *)(this + 0x10) = uVar25;
        __s_00 = (void *)Memory::alloc_static(uVar38,false);
        *(void **)(this + 8) = __s_00;
        if (uVar31 != 0) {
          __s = *(void **)(this + 0x10);
          if ((__s < (void *)((long)__s_00 + uVar38)) && (__s_00 < (void *)((long)__s + uVar24))) {
            uVar24 = 0;
            do {
              *(undefined4 *)((long)__s + uVar24 * 4) = 0;
              *(undefined8 *)((long)__s_00 + uVar24 * 8) = 0;
              uVar24 = uVar24 + 1;
            } while (uVar32 != uVar24);
          }
          else {
            memset(__s,0,uVar24);
            memset(__s_00,0,uVar38);
          }
        }
        if (uVar23 != 0) {
          uVar24 = 0;
          do {
            uVar31 = *(uint *)((long)pvVar2 + uVar24 * 4);
            if (uVar31 != 0) {
              lVar3 = *(long *)(this + 0x10);
              uVar36 = 0;
              uVar35 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
              uVar38 = CONCAT44(0,uVar35);
              lVar4 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
              auVar5._8_8_ = 0;
              auVar5._0_8_ = (ulong)uVar31 * lVar4;
              auVar13._8_8_ = 0;
              auVar13._0_8_ = uVar38;
              lVar29 = SUB168(auVar5 * auVar13,8);
              puVar34 = (uint *)(lVar3 + lVar29 * 4);
              iVar28 = SUB164(auVar5 * auVar13,8);
              uVar37 = *puVar34;
              uVar25 = *(undefined8 *)((long)pvVar27 + uVar24 * 8);
              while (uVar37 != 0) {
                auVar6._8_8_ = 0;
                auVar6._0_8_ = (ulong)uVar37 * lVar4;
                auVar14._8_8_ = 0;
                auVar14._0_8_ = uVar38;
                auVar7._8_8_ = 0;
                auVar7._0_8_ = (ulong)((iVar28 + uVar35) - SUB164(auVar6 * auVar14,8)) * lVar4;
                auVar15._8_8_ = 0;
                auVar15._0_8_ = uVar38;
                uVar22 = SUB164(auVar7 * auVar15,8);
                uVar33 = uVar25;
                if (uVar22 < uVar36) {
                  *puVar34 = uVar31;
                  puVar1 = (undefined8 *)((long)__s_00 + lVar29 * 8);
                  uVar33 = *puVar1;
                  *puVar1 = uVar25;
                  uVar31 = uVar37;
                  uVar36 = uVar22;
                }
                uVar36 = uVar36 + 1;
                auVar8._8_8_ = 0;
                auVar8._0_8_ = (ulong)(iVar28 + 1) * lVar4;
                auVar16._8_8_ = 0;
                auVar16._0_8_ = uVar38;
                lVar29 = SUB168(auVar8 * auVar16,8);
                puVar34 = (uint *)(lVar3 + lVar29 * 4);
                iVar28 = SUB164(auVar8 * auVar16,8);
                uVar25 = uVar33;
                uVar37 = *puVar34;
              }
              *(undefined8 *)((long)__s_00 + lVar29 * 8) = uVar25;
              *puVar34 = uVar31;
              *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
            }
            uVar24 = uVar24 + 1;
          } while (uVar23 != uVar24);
          Memory::free_static(pvVar27,false);
          Memory::free_static(pvVar2,false);
        }
      }
      local_58 = 0;
      local_68 = (undefined1  [16])0x0;
      if (*(long *)param_1 == 0) {
        local_50 = 0;
        pauVar26 = (undefined1 (*) [16])operator_new(0x20,"");
        *(undefined8 *)pauVar26[1] = 0;
        *pauVar26 = (undefined1  [16])0x0;
      }
      else {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)param_1);
        lVar3 = local_58;
        uVar25 = local_68._0_8_;
        uVar33 = local_68._8_8_;
        local_50 = 0;
        pauVar26 = (undefined1 (*) [16])operator_new(0x20,"");
        *(undefined8 *)pauVar26[1] = 0;
        *(undefined8 *)*pauVar26 = uVar25;
        *(undefined8 *)(*pauVar26 + 8) = uVar33;
        if (lVar3 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)(pauVar26 + 1),(CowData *)&local_58);
        }
      }
      pauVar26[1][8] = 0;
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      puVar1 = *(undefined8 **)(this + 0x20);
      if (puVar1 == (undefined8 *)0x0) {
        *(undefined1 (**) [16])(this + 0x18) = pauVar26;
      }
      else {
        *puVar1 = pauVar26;
        *(undefined8 **)(*pauVar26 + 8) = puVar1;
      }
      *(undefined1 (**) [16])(this + 0x20) = pauVar26;
      uVar23 = String::hash();
      lVar3 = *(long *)(this + 0x10);
      uVar31 = 1;
      if (uVar23 != 0) {
        uVar31 = uVar23;
      }
      lVar4 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      uVar23 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      uVar24 = CONCAT44(0,uVar23);
      auVar9._8_8_ = 0;
      auVar9._0_8_ = (ulong)uVar31 * lVar4;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = uVar24;
      lVar30 = SUB168(auVar9 * auVar17,8);
      lVar29 = *(long *)(this + 8);
      puVar34 = (uint *)(lVar3 + lVar30 * 4);
      iVar28 = SUB164(auVar9 * auVar17,8);
      uVar35 = *puVar34;
      pauVar40 = pauVar26;
      if (uVar35 != 0) {
        uVar37 = 0;
        pauVar39 = pauVar26;
        do {
          auVar10._8_8_ = 0;
          auVar10._0_8_ = (ulong)uVar35 * lVar4;
          auVar18._8_8_ = 0;
          auVar18._0_8_ = uVar24;
          auVar11._8_8_ = 0;
          auVar11._0_8_ = (ulong)((uVar23 + iVar28) - SUB164(auVar10 * auVar18,8)) * lVar4;
          auVar19._8_8_ = 0;
          auVar19._0_8_ = uVar24;
          uVar36 = SUB164(auVar11 * auVar19,8);
          pauVar40 = pauVar39;
          if (uVar36 < uVar37) {
            *puVar34 = uVar31;
            puVar1 = (undefined8 *)(lVar29 + lVar30 * 8);
            pauVar40 = (undefined1 (*) [16])*puVar1;
            *puVar1 = pauVar39;
            uVar37 = uVar36;
            uVar31 = uVar35;
          }
          uVar37 = uVar37 + 1;
          auVar12._8_8_ = 0;
          auVar12._0_8_ = (ulong)(iVar28 + 1) * lVar4;
          auVar20._8_8_ = 0;
          auVar20._0_8_ = uVar24;
          lVar30 = SUB168(auVar12 * auVar20,8);
          puVar34 = (uint *)(lVar3 + lVar30 * 4);
          iVar28 = SUB164(auVar12 * auVar20,8);
          uVar35 = *puVar34;
          pauVar39 = pauVar40;
        } while (uVar35 != 0);
      }
      *(undefined1 (**) [16])(lVar29 + lVar30 * 8) = pauVar40;
      *puVar34 = uVar31;
      *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
    }
    else {
      pauVar26 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)local_6c * 8);
      pauVar26[1][8] = 0;
    }
  }
  else {
    pauVar26 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)local_70 * 8);
  }
LAB_001158b4:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pauVar26[1] + 8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void List<String, DefaultAllocator>::sort_custom<Comparator<String> >() */

void __thiscall
List<String,DefaultAllocator>::sort_custom<Comparator<String>>(List<String,DefaultAllocator> *this)

{
  size_t __n;
  int iVar1;
  undefined8 *puVar2;
  char cVar3;
  Element *pEVar4;
  Element **__src;
  Element **ppEVar5;
  Element **ppEVar6;
  long lVar7;
  String *pSVar8;
  long lVar9;
  Element *pEVar10;
  Element *pEVar11;
  
  if (*(long *)this == 0) {
    return;
  }
  iVar1 = *(int *)(*(long *)this + 0x10);
  if (iVar1 < 2) {
    return;
  }
  pEVar4 = (Element *)(long)iVar1;
  __src = (Element **)Memory::alloc_static((long)pEVar4 * 8,true);
  if (__src == (Element **)0x0) {
    _err_print_error("memnew_arr_template","./core/os/memory.h",0xb6,"Parameter \"mem\" is null.",0,
                     0);
  }
  else {
    __src[-1] = pEVar4;
  }
  if (*(long **)this != (long *)0x0) {
    ppEVar5 = __src;
    for (pEVar10 = (Element *)**(long **)this; pEVar10 != (Element *)0x0;
        pEVar10 = *(Element **)(pEVar10 + 8)) {
      *ppEVar5 = pEVar10;
      ppEVar5 = ppEVar5 + 1;
    }
  }
  lVar7 = 0;
  pEVar10 = pEVar4;
  do {
    pEVar10 = (Element *)((long)pEVar10 >> 1);
    lVar7 = lVar7 + 1;
  } while (pEVar10 != (Element *)0x1);
  SortArray<List<String,DefaultAllocator>::Element*,List<String,DefaultAllocator>::AuxiliaryComparator<Comparator<String>>,true>
  ::introsort(0,(long)pEVar4,__src,lVar7 * 2);
  if ((long)pEVar4 < 0x11) {
    pEVar10 = (Element *)0x1;
    pEVar11 = *__src;
    do {
      while( true ) {
        pSVar8 = (String *)__src[(long)pEVar10];
        ppEVar5 = __src + (long)pEVar10;
        cVar3 = String::operator<(pSVar8,(String *)pEVar11);
        if (cVar3 != '\0') break;
        while (cVar3 = String::operator<(pSVar8,(String *)ppEVar5[-1]), cVar3 != '\0') {
          if (ppEVar5 == __src + 1) {
            _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                             "bad comparison function; sorting will be broken",0,0);
            break;
          }
          *ppEVar5 = ppEVar5[-1];
          ppEVar5 = ppEVar5 + -1;
        }
        pEVar10 = pEVar10 + 1;
        *ppEVar5 = (Element *)pSVar8;
        pSVar8 = (String *)*__src;
        pEVar11 = (Element *)pSVar8;
        if (pEVar4 == pEVar10) goto LAB_00115da5;
      }
      __n = (long)pEVar10 * 8;
      pEVar10 = pEVar10 + 1;
      memmove(__src + 1,__src,__n);
      *__src = (Element *)pSVar8;
      pEVar11 = (Element *)pSVar8;
    } while (pEVar4 != pEVar10);
  }
  else {
    lVar7 = 1;
    do {
      while( true ) {
        lVar9 = lVar7;
        pSVar8 = (String *)__src[lVar9];
        cVar3 = String::operator<(pSVar8,(String *)*__src);
        if (cVar3 != '\0') break;
        ppEVar5 = __src + lVar9;
        while (cVar3 = String::operator<(pSVar8,(String *)ppEVar5[-1]), cVar3 != '\0') {
          if (ppEVar5 + -1 == __src) {
            _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                             "bad comparison function; sorting will be broken",0,0);
            break;
          }
          *ppEVar5 = ppEVar5[-1];
          ppEVar5 = ppEVar5 + -1;
        }
        *ppEVar5 = (Element *)pSVar8;
        lVar7 = lVar9 + 1;
        if (lVar9 + 1 == 0x10) goto LAB_00115c26;
      }
      memmove(__src + 1,__src,lVar9 * 8);
      *__src = (Element *)pSVar8;
      lVar7 = lVar9 + 1;
    } while (lVar9 + 1 != 0x10);
LAB_00115c26:
    pEVar10 = (Element *)(lVar9 + 1);
    do {
      pSVar8 = (String *)__src[(long)pEVar10];
      ppEVar5 = __src + (long)pEVar10;
      pEVar11 = pEVar10;
      while( true ) {
        pEVar11 = pEVar11 + -1;
        cVar3 = String::operator<(pSVar8,(String *)ppEVar5[-1]);
        if (cVar3 == '\0') break;
        if (pEVar11 == (Element *)0x0) {
          _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                           "bad comparison function; sorting will be broken",0,0);
          break;
        }
        *ppEVar5 = ppEVar5[-1];
        ppEVar5 = ppEVar5 + -1;
      }
      *ppEVar5 = (Element *)pSVar8;
      pEVar10 = pEVar10 + 1;
    } while (pEVar4 != pEVar10);
    pSVar8 = (String *)*__src;
  }
LAB_00115da5:
  puVar2 = *(undefined8 **)this;
  *puVar2 = pSVar8;
  *(undefined8 *)(pSVar8 + 0x10) = 0;
  *(Element **)(*__src + 8) = __src[1];
  pEVar10 = __src[(long)(pEVar4 + -1)];
  puVar2[1] = pEVar10;
  *(Element **)(pEVar10 + 0x10) = __src[(long)(pEVar4 + -2)];
  *(undefined8 *)(__src[(long)(pEVar4 + -1)] + 8) = 0;
  if (iVar1 != 2) {
    ppEVar5 = __src;
    do {
      ppEVar6 = ppEVar5 + 1;
      *(Element **)(ppEVar5[1] + 0x10) = *ppEVar5;
      *(Element **)(*ppEVar6 + 8) = ppEVar5[2];
      ppEVar5 = ppEVar6;
    } while (__src + (iVar1 - 2) != ppEVar6);
  }
  Memory::free_static(__src,true);
  return;
}



/* WARNING: Removing unreachable block (ram,0x00115ef0) */
/* EditorSettingsDialog::_notificationv(int, bool) */

void __thiscall
EditorSettingsDialog::_notificationv(EditorSettingsDialog *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    _notification(this,param_1);
    if ((code *)PTR__notification_0011d078 != Window::_notification) {
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
  if ((code *)PTR__notification_0011d078 != Window::_notification) {
    AcceptDialog::_notification(iVar1);
  }
  _notification(this,param_1);
  return;
}



/* MethodBind* create_method_bind<EditorSettingsDialog>(void (EditorSettingsDialog::*)()) */

MethodBind * create_method_bind<EditorSettingsDialog>(_func_void *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_00118758;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "EditorSettingsDialog";
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



/* EditorSettingsDialog::_initialize_classv() */

void EditorSettingsDialog::_initialize_classv(void)

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
            if ((code *)PTR__bind_methods_0011d058 != Node::_bind_methods) {
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
      if ((code *)PTR__bind_methods_0011d080 != Window::_bind_methods) {
        AcceptDialog::_bind_methods();
      }
      if ((code *)PTR__bind_compatibility_methods_0011d088 != Object::_bind_compatibility_methods) {
        AcceptDialog::_bind_compatibility_methods();
      }
      AcceptDialog::initialize_class()::initialized = '\x01';
    }
    local_58 = "AcceptDialog";
    local_68 = 0;
    local_50 = 0xc;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "EditorSettingsDialog";
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
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x001166f8) */
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
      goto LAB_00116a30;
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
LAB_00116a30:
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
      goto LAB_00116e3f;
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
                    /* WARNING: Could not recover jumptable at 0x00116ce6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_00116e3f:
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
      goto LAB_00116fff;
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
                    /* WARNING: Could not recover jumptable at 0x00116ea6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_00116fff:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorSettingsDialog::ok_pressed() */

void EditorSettingsDialog::_GLOBAL__sub_I_ok_pressed(void)

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
  if (TabBar::base_property_helper != '\0') {
    return;
  }
  TabBar::base_property_helper = 1;
  TabBar::base_property_helper._64_8_ = 0;
  TabBar::base_property_helper._56_8_ = 2;
  TabBar::base_property_helper._0_16_ = (undefined1  [16])0x0;
  TabBar::base_property_helper._24_16_ = (undefined1  [16])0x0;
  TabBar::base_property_helper._40_16_ = (undefined1  [16])0x0;
  __cxa_atexit(PropertyListHelper::~PropertyListHelper,TabBar::base_property_helper,&__dso_handle,
               uStack_8);
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
/* PropertyListHelper::~PropertyListHelper() */

void __thiscall PropertyListHelper::~PropertyListHelper(PropertyListHelper *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<Ref<InputEvent>, DefaultAllocator>::~List() */

void __thiscall
List<Ref<InputEvent>,DefaultAllocator>::~List(List<Ref<InputEvent>,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<Ref<InputEvent>, DefaultAllocator>::List(List<Ref<InputEvent>, DefaultAllocator> const&) */

void List<Ref<InputEvent>,DefaultAllocator>::List(List *param_1)

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
/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorSettingsDialog, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorSettingsDialog,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorSettingsDialog,void,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorSettingsDialog, void, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorSettingsDialog,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorSettingsDialog,void,bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorSettingsDialog, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorSettingsDialog,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorSettingsDialog,void,String_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorSettingsDialog, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorSettingsDialog,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorSettingsDialog,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorSettingsDialog, void, Ref<InputEvent>
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorSettingsDialog,void,Ref<InputEvent>const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorSettingsDialog,void,Ref<InputEvent>const&> *this)

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
/* CallableCustomMethodPointer<LineEdit, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<LineEdit,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<LineEdit,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EventListenerLineEdit, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EventListenerLineEdit,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EventListenerLineEdit,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorSettingsDialog, void, Object*, int, int,
   MouseButton>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorSettingsDialog,void,Object*,int,int,MouseButton>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorSettingsDialog,void,Object*,int,int,MouseButton> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorSettingsDialog, Variant, Vector2 const&,
   Control*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorSettingsDialog,Variant,Vector2_const&,Control*>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorSettingsDialog,Variant,Vector2_const&,Control*> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointerC<EditorSettingsDialog, bool, Vector2 const&, Variant const&,
   Control*>::~CallableCustomMethodPointerC() */

void __thiscall
CallableCustomMethodPointerC<EditorSettingsDialog,bool,Vector2_const&,Variant_const&,Control*>::
~CallableCustomMethodPointerC
          (CallableCustomMethodPointerC<EditorSettingsDialog,bool,Vector2_const&,Variant_const&,Control*>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorSettingsDialog, void, Vector2 const&, Variant const&,
   Control*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorSettingsDialog,void,Vector2_const&,Variant_const&,Control*>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorSettingsDialog,void,Vector2_const&,Variant_const&,Control*>
           *this)

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



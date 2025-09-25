/* ProjectDialog::_nonempty_confirmation_ok_pressed() */

void __thiscall ProjectDialog::_nonempty_confirmation_ok_pressed(ProjectDialog *this)

{
  this[0xdbc] = (ProjectDialog)0x1;
                    /* WARNING: Could not recover jumptable at 0x0010000e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x250))();
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



/* WARNING: Removing unreachable block (ram,0x001001bc) */
/* WARNING: Removing unreachable block (ram,0x00100321) */
/* WARNING: Removing unreachable block (ram,0x00100331) */
/* WARNING: Removing unreachable block (ram,0x00100341) */
/* ProjectDialog::_set_message(String const&, ProjectDialog::MessageType, ProjectDialog::InputType)
    */

void ProjectDialog::_set_message
               (undefined8 param_1_00,undefined8 param_2,StringName *param_1,undefined8 param_4,
               int param_5,int param_6)

{
  StringName *pSVar1;
  char cVar2;
  int iVar3;
  Object *pOVar4;
  char *pcVar5;
  undefined1 uVar6;
  undefined1 *puVar7;
  long in_FS_OFFSET;
  Object *local_68;
  Object *local_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Label::set_text(*(String **)(param_1 + 0xe28));
  BaseButton::set_disabled(SUB81(*(undefined8 *)(param_1 + 0xd88),0));
  local_68 = (Object *)0x0;
  if (param_5 == 1) {
    pSVar1 = *(StringName **)(param_1 + 0xe28);
    if ((_set_message(String_const&,ProjectDialog::MessageType,ProjectDialog::InputType)::
         {lambda()#3}::operator()()::sname == '\0') &&
       (iVar3 = __cxa_guard_acquire(&_set_message(String_const&,ProjectDialog::MessageType,ProjectDialog::InputType)
                                     ::{lambda()#3}::operator()()::sname), iVar3 != 0)) {
      _scs_create((char *)&_set_message(String_const&,ProjectDialog::MessageType,ProjectDialog::InputType)
                           ::{lambda()#3}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &_set_message(String_const&,ProjectDialog::MessageType,ProjectDialog::InputType)
                    ::{lambda()#3}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&_set_message(String_const&,ProjectDialog::MessageType,ProjectDialog::InputType)
                           ::{lambda()#3}::operator()()::sname);
    }
    local_58 = Window::get_theme_color
                         (param_1,(StringName *)
                                  &_set_message(String_const&,ProjectDialog::MessageType,ProjectDialog::InputType)
                                   ::{lambda()#3}::operator()()::sname);
    local_50 = param_2;
    Control::add_theme_color_override(pSVar1,(Color *)(SceneStringNames::singleton + 0xb0));
    if (_set_message(String_const&,ProjectDialog::MessageType,ProjectDialog::InputType)::
        {lambda()#4}::operator()()::sname == '\0') {
      puVar7 = &_set_message(String_const&,ProjectDialog::MessageType,ProjectDialog::InputType)::
                {lambda()#4}::operator()()::sname;
      pcVar5 = (char *)&_set_message(String_const&,ProjectDialog::MessageType,ProjectDialog::InputType)
                        ::{lambda()#4}::operator()()::sname;
      iVar3 = __cxa_guard_acquire(&_set_message(String_const&,ProjectDialog::MessageType,ProjectDialog::InputType)
                                   ::{lambda()#4}::operator()()::sname);
      uVar6 = 0xb5;
joined_r0x001003f3:
      if (iVar3 != 0) {
LAB_001002d1:
        _scs_create(pcVar5,(bool)uVar6);
        __cxa_atexit(StringName::~StringName,pcVar5,&__dso_handle);
        __cxa_guard_release(puVar7);
      }
    }
  }
  else if (param_5 == 2) {
    pSVar1 = *(StringName **)(param_1 + 0xe28);
    if ((_set_message(String_const&,ProjectDialog::MessageType,ProjectDialog::InputType)::
         {lambda()#5}::operator()()::sname == '\0') &&
       (iVar3 = __cxa_guard_acquire(&_set_message(String_const&,ProjectDialog::MessageType,ProjectDialog::InputType)
                                     ::{lambda()#5}::operator()()::sname), iVar3 != 0)) {
      _scs_create((char *)&_set_message(String_const&,ProjectDialog::MessageType,ProjectDialog::InputType)
                           ::{lambda()#5}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &_set_message(String_const&,ProjectDialog::MessageType,ProjectDialog::InputType)
                    ::{lambda()#5}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&_set_message(String_const&,ProjectDialog::MessageType,ProjectDialog::InputType)
                           ::{lambda()#5}::operator()()::sname);
    }
    local_58 = Window::get_theme_color
                         (param_1,(StringName *)
                                  &_set_message(String_const&,ProjectDialog::MessageType,ProjectDialog::InputType)
                                   ::{lambda()#5}::operator()()::sname);
    local_50 = param_2;
    Control::add_theme_color_override(pSVar1,(Color *)(SceneStringNames::singleton + 0xb0));
    if (_set_message(String_const&,ProjectDialog::MessageType,ProjectDialog::InputType)::
        {lambda()#6}::operator()()::sname == '\0') {
      puVar7 = &_set_message(String_const&,ProjectDialog::MessageType,ProjectDialog::InputType)::
                {lambda()#6}::operator()()::sname;
      pcVar5 = (char *)&_set_message(String_const&,ProjectDialog::MessageType,ProjectDialog::InputType)
                        ::{lambda()#6}::operator()()::sname;
      iVar3 = __cxa_guard_acquire(&_set_message(String_const&,ProjectDialog::MessageType,ProjectDialog::InputType)
                                   ::{lambda()#6}::operator()()::sname);
      if (iVar3 != 0) {
        uVar6 = 0xd1;
        goto LAB_001002d1;
      }
    }
  }
  else {
    if (param_5 != 0) goto LAB_001001e6;
    pSVar1 = *(StringName **)(param_1 + 0xe28);
    if ((_set_message(String_const&,ProjectDialog::MessageType,ProjectDialog::InputType)::
         {lambda()#1}::operator()()::sname == '\0') &&
       (iVar3 = __cxa_guard_acquire(&_set_message(String_const&,ProjectDialog::MessageType,ProjectDialog::InputType)
                                     ::{lambda()#1}::operator()()::sname), iVar3 != 0)) {
      _scs_create((char *)&_set_message(String_const&,ProjectDialog::MessageType,ProjectDialog::InputType)
                           ::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &_set_message(String_const&,ProjectDialog::MessageType,ProjectDialog::InputType)
                    ::{lambda()#1}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&_set_message(String_const&,ProjectDialog::MessageType,ProjectDialog::InputType)
                           ::{lambda()#1}::operator()()::sname);
    }
    local_58 = Window::get_theme_color
                         (param_1,(StringName *)
                                  &_set_message(String_const&,ProjectDialog::MessageType,ProjectDialog::InputType)
                                   ::{lambda()#1}::operator()()::sname);
    local_50 = param_2;
    Control::add_theme_color_override(pSVar1,(Color *)(SceneStringNames::singleton + 0xb0));
    if (_set_message(String_const&,ProjectDialog::MessageType,ProjectDialog::InputType)::
        {lambda()#2}::operator()()::sname == '\0') {
      puVar7 = &_set_message(String_const&,ProjectDialog::MessageType,ProjectDialog::InputType)::
                {lambda()#2}::operator()()::sname;
      pcVar5 = (char *)&_set_message(String_const&,ProjectDialog::MessageType,ProjectDialog::InputType)
                        ::{lambda()#2}::operator()()::sname;
      iVar3 = __cxa_guard_acquire(&_set_message(String_const&,ProjectDialog::MessageType,ProjectDialog::InputType)
                                   ::{lambda()#2}::operator()()::sname);
      uVar6 = 0x9b;
      goto joined_r0x001003f3;
    }
  }
  Window::get_editor_theme_icon((StringName *)&local_60);
  pOVar4 = local_68;
  if (local_60 != (Object *)0x0) {
    local_68 = local_60;
    if (local_60 == (Object *)0x0) goto LAB_001001e6;
    cVar2 = RefCounted::reference();
    pOVar4 = local_60;
    if (cVar2 == '\0') {
      local_68 = (Object *)0x0;
    }
  }
  if (((pOVar4 != (Object *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) &&
     (cVar2 = predelete_handler(local_60), cVar2 != '\0')) {
    (**(code **)(*(long *)local_60 + 0x140))(local_60);
    Memory::free_static(local_60,false);
  }
LAB_001001e6:
  if (param_6 == 0) {
    TextureRect::set_texture(*(Ref **)(param_1 + 0xe48));
  }
  else if (param_6 == 1) {
    TextureRect::set_texture(*(Ref **)(param_1 + 0xe50));
  }
  if (((local_68 != (Object *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) &&
     (cVar2 = predelete_handler(local_68), cVar2 != '\0')) {
    (**(code **)(*(long *)local_68 + 0x140))(local_68);
    Memory::free_static(local_68,false);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ProjectDialog::_get_target_path() */

void ProjectDialog::_get_target_path(void)

{
  long lVar1;
  long in_RSI;
  StrRange *in_RDI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(uint *)(in_RSI + 0xdb8) & 0xfffffffd) == 0) {
    LineEdit::get_text();
  }
  else if (*(uint *)(in_RSI + 0xdb8) == 1) {
    LineEdit::get_text();
  }
  else {
    _err_print_error("_get_target_path","editor/project_manager/project_dialog.cpp",0xff,
                     "Method/function failed. Returning: \"\"",0,0);
    *(undefined8 *)in_RDI = 0;
    String::parse_latin1(in_RDI);
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProjectDialog::_reset_name() */

void __thiscall ProjectDialog::_reset_name(ProjectDialog *this)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  char *pcVar4;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  uVar2 = *(undefined8 *)(this + 0xe30);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_48 = "";
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_50);
  local_48 = "New Game Project";
  local_58 = 0;
  local_40 = 0x10;
  String::parse_latin1((StrRange *)&local_58);
  TTR((String *)&local_48,(String *)&local_58);
  LineEdit::set_text(uVar2);
  pcVar4 = local_48;
  if (local_48 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)(local_48 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_48 = (char *)0x0;
      Memory::free_static(pcVar4 + -0x10,false);
    }
  }
  lVar3 = local_58;
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
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProjectDialog::set_zip_path(String const&) */

void __thiscall ProjectDialog::set_zip_path(ProjectDialog *this,String *param_1)

{
  if (*(long *)(this + 0xe80) != *(long *)param_1) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0xe80),(CowData *)param_1);
    return;
  }
  return;
}



/* ProjectDialog::set_zip_title(String const&) */

void __thiscall ProjectDialog::set_zip_title(ProjectDialog *this,String *param_1)

{
  if (*(long *)(this + 0xe88) != *(long *)param_1) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0xe88),(CowData *)param_1);
    return;
  }
  return;
}



/* ProjectDialog::set_mode(ProjectDialog::Mode) */

void __thiscall ProjectDialog::set_mode(ProjectDialog *this,undefined4 param_2)

{
  *(undefined4 *)(this + 0xdb8) = param_2;
  return;
}



/* ProjectDialog::set_project_name(String const&) */

void __thiscall ProjectDialog::set_project_name(ProjectDialog *this,String *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long in_FS_OFFSET;
  bool bVar6;
  long local_18;
  
  uVar2 = *(undefined8 *)(this + 0xe30);
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = 0;
  if (*(long *)param_1 != 0) {
    plVar1 = (long *)(*(long *)param_1 + -0x10);
    do {
      lVar4 = *plVar1;
      if (lVar4 == 0) goto LAB_001008a3;
      LOCK();
      lVar5 = *plVar1;
      bVar6 = lVar4 == lVar5;
      if (bVar6) {
        *plVar1 = lVar4 + 1;
        lVar5 = lVar4;
      }
      UNLOCK();
    } while (!bVar6);
    if (lVar5 != -1) {
      local_18 = *(long *)param_1;
    }
  }
LAB_001008a3:
  LineEdit::set_text(uVar2);
  if (local_18 != 0) {
    LOCK();
    plVar1 = (long *)(local_18 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_18 + -0x10),false);
    }
  }
  if (lVar3 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ProjectDialog::set_project_path(String const&) */

void __thiscall ProjectDialog::set_project_path(ProjectDialog *this,String *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long in_FS_OFFSET;
  bool bVar6;
  long local_18;
  
  uVar2 = *(undefined8 *)(this + 0xe38);
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = 0;
  if (*(long *)param_1 != 0) {
    plVar1 = (long *)(*(long *)param_1 + -0x10);
    do {
      lVar4 = *plVar1;
      if (lVar4 == 0) goto LAB_00100953;
      LOCK();
      lVar5 = *plVar1;
      bVar6 = lVar4 == lVar5;
      if (bVar6) {
        *plVar1 = lVar4 + 1;
        lVar5 = lVar4;
      }
      UNLOCK();
    } while (!bVar6);
    if (lVar5 != -1) {
      local_18 = *(long *)param_1;
    }
  }
LAB_00100953:
  LineEdit::set_text(uVar2);
  if (local_18 != 0) {
    LOCK();
    plVar1 = (long *)(local_18 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_18 + -0x10),false);
    }
  }
  if (lVar3 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ProjectDialog::_notification(int) */

void __thiscall ProjectDialog::_notification(ProjectDialog *this,int param_1)

{
  Variant *pVVar1;
  Ref *pRVar2;
  long *plVar3;
  code *pcVar4;
  undefined8 uVar5;
  Object *pOVar6;
  char cVar7;
  int iVar8;
  EditorFileDialog *this_00;
  CallableCustom *this_01;
  Variant *pVVar9;
  long in_FS_OFFSET;
  long local_d0;
  long local_c8 [2];
  Object *local_b8 [2];
  Variant *local_a8;
  Variant *pVStack_a0;
  int local_88 [6];
  int local_70 [2];
  undefined1 local_68 [16];
  Variant local_58 [24];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0xd) {
    this_00 = (EditorFileDialog *)operator_new(0x1108,"");
    EditorFileDialog::EditorFileDialog(this_00);
    postinitialize_handler((Object *)this_00);
    *(EditorFileDialog **)(this + 0xe68) = this_00;
    EditorFileDialog::set_previews_enabled(SUB81(this_00,0));
    EditorFileDialog::set_access(*(undefined8 *)(this + 0xe68),2);
    plVar3 = *(long **)(this + 0xe68);
    pcVar4 = *(code **)(*plVar3 + 0x108);
    create_custom_callable_function_pointer<ProjectDialog,String_const&>
              ((ProjectDialog *)local_b8,(char *)this,
               (_func_void_String_ptr *)"&ProjectDialog::_project_path_selected");
    StringName::StringName((StringName *)local_c8,"dir_selected",false);
    (*pcVar4)(plVar3,(StringName *)local_c8,(ProjectDialog *)local_b8,0);
    if ((StringName::configured != '\0') && (local_c8[0] != 0)) {
      StringName::unref();
    }
    Callable::~Callable((Callable *)local_b8);
    plVar3 = *(long **)(this + 0xe68);
    pcVar4 = *(code **)(*plVar3 + 0x108);
    create_custom_callable_function_pointer<ProjectDialog,String_const&>
              ((ProjectDialog *)local_b8,(char *)this,
               (_func_void_String_ptr *)"&ProjectDialog::_project_path_selected");
    StringName::StringName((StringName *)local_c8,"file_selected",false);
    (*pcVar4)(plVar3,(StringName *)local_c8,(ProjectDialog *)local_b8,0);
    if ((StringName::configured != '\0') && (local_c8[0] != 0)) {
      StringName::unref();
    }
    Callable::~Callable((Callable *)local_b8);
    plVar3 = *(long **)(this + 0xe68);
    pcVar4 = *(code **)(*plVar3 + 0x108);
    create_custom_callable_function_pointer<ProjectDialog,bool>
              ((ProjectDialog *)local_c8,(char *)this,
               (_func_void_bool *)"&ProjectDialog::show_dialog");
    Variant::Variant((Variant *)local_88,false);
    local_70[0] = 0;
    local_70[1] = 0;
    local_68 = (undefined1  [16])0x0;
    local_a8 = (Variant *)local_88;
    Callable::bindp((Variant **)local_b8,(int)(StringName *)local_c8);
    if (Variant::needs_deinit[local_70[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_88[0]] != '\0') {
      Variant::_clear_internal();
    }
    StringName::StringName((StringName *)&local_d0,"canceled",false);
    (*pcVar4)(plVar3,(StringName *)&local_d0,(ProjectDialog *)local_b8,1);
    if ((StringName::configured != '\0') && (local_d0 != 0)) {
      StringName::unref();
    }
    Callable::~Callable((Callable *)local_b8);
    Callable::~Callable((Callable *)local_c8);
    this_01 = (CallableCustom *)operator_new(0x48,"");
    CallableCustom::CallableCustom(this_01);
    *(undefined8 *)(this_01 + 0x40) = 0;
    *(undefined **)(this_01 + 0x20) = &_LC24;
    *(undefined1 (*) [16])(this_01 + 0x30) = (undefined1  [16])0x0;
    *(undefined ***)this_01 = &PTR_hash_00119908;
    uVar5 = *(undefined8 *)(this + 0x60);
    *(ProjectDialog **)(this_01 + 0x28) = this;
    *(undefined8 *)(this_01 + 0x30) = uVar5;
    *(undefined8 *)(this_01 + 0x10) = 0;
    *(code **)(this_01 + 0x38) = Node::add_sibling;
    CallableCustomMethodPointerBase::_setup((uint *)this_01,(int)this_01 + 0x28);
    *(char **)(this_01 + 0x20) = "Node::add_sibling";
    Callable::Callable((Callable *)local_b8,this_01);
    pVVar9 = (Variant *)local_40;
    Variant::Variant((Variant *)local_88,*(Object **)(this + 0xe68));
    Variant::Variant((Variant *)local_70,false);
    Variant::Variant(local_58,0);
    local_a8 = (Variant *)local_88;
    pVStack_a0 = (Variant *)local_70;
    Callable::call_deferredp((Variant **)local_b8,(int)&local_a8);
    do {
      pVVar1 = pVVar9 + -0x18;
      pVVar9 = pVVar9 + -0x18;
      if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
        Variant::_clear_internal();
      }
    } while (pVVar9 != (Variant *)local_88);
    Callable::~Callable((Callable *)local_b8);
  }
  else if (param_1 == 0x20) {
    pRVar2 = *(Ref **)(this + 0xdc8);
    if (_notification(int)::{lambda()#1}::operator()()::sname == '\0') {
      iVar8 = __cxa_guard_acquire(&_notification(int)::{lambda()#1}::operator()()::sname);
      if (iVar8 != 0) {
        _scs_create((char *)&_notification(int)::{lambda()#1}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#1}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#1}::operator()()::sname);
      }
    }
    Window::get_editor_theme_icon((StringName *)local_b8);
    Button::set_button_icon(pRVar2);
    if (local_b8[0] != (Object *)0x0) {
      cVar7 = RefCounted::unreference();
      pOVar6 = local_b8[0];
      if (cVar7 != '\0') {
        cVar7 = predelete_handler(local_b8[0]);
        if (cVar7 != '\0') {
          (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
          Memory::free_static(pOVar6,false);
        }
      }
    }
    pRVar2 = *(Ref **)(this + 0xdd0);
    if (_notification(int)::{lambda()#2}::operator()()::sname == '\0') {
      iVar8 = __cxa_guard_acquire(&_notification(int)::{lambda()#2}::operator()()::sname);
      if (iVar8 != 0) {
        _scs_create((char *)&_notification(int)::{lambda()#2}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#2}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#2}::operator()()::sname);
      }
    }
    Window::get_editor_theme_icon((StringName *)local_b8);
    Button::set_button_icon(pRVar2);
    if (local_b8[0] != (Object *)0x0) {
      cVar7 = RefCounted::unreference();
      pOVar6 = local_b8[0];
      if (cVar7 != '\0') {
        cVar7 = predelete_handler(local_b8[0]);
        if (cVar7 != '\0') {
          (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
          Memory::free_static(pOVar6,false);
        }
      }
    }
    pRVar2 = *(Ref **)(this + 0xdd8);
    if (_notification(int)::{lambda()#3}::operator()()::sname == '\0') {
      iVar8 = __cxa_guard_acquire(&_notification(int)::{lambda()#3}::operator()()::sname);
      if (iVar8 != 0) {
        _scs_create((char *)&_notification(int)::{lambda()#3}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#3}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#3}::operator()()::sname);
      }
    }
    Window::get_editor_theme_icon((StringName *)local_b8);
    Button::set_button_icon(pRVar2);
    if (local_b8[0] != (Object *)0x0) {
      cVar7 = RefCounted::unreference();
      if (cVar7 != '\0') {
        cVar7 = predelete_handler(local_b8[0]);
        if (cVar7 != '\0') {
          (**(code **)(*(long *)local_b8[0] + 0x140))(local_b8[0]);
          Memory::free_static(local_b8[0],false);
        }
      }
    }
  }
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProjectDialog::_set_target_path(String const&) */

void __thiscall ProjectDialog::_set_target_path(ProjectDialog *this,String *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long in_FS_OFFSET;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(uint *)(this + 0xdb8) & 0xfffffffd) == 0) {
    lVar2 = *(long *)param_1;
    uVar1 = *(undefined8 *)(this + 0xe38);
  }
  else {
    if (*(uint *)(this + 0xdb8) != 1) {
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        _err_print_error("_set_target_path","editor/project_manager/project_dialog.cpp",0x108,
                         "Method/function failed.",0,0);
        return;
      }
      goto LAB_00101101;
    }
    lVar2 = *(long *)param_1;
    uVar1 = *(undefined8 *)(this + 0xe40);
  }
  local_28 = 0;
  if (lVar2 != 0) {
    local_28 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_28,(CowData *)param_1);
  }
  LineEdit::set_text(uVar1,&local_28);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_28);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00101101:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* is_zip_file(Ref<DirAccess>, String const&) */

undefined4 is_zip_file(undefined8 *param_1,CowData *param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined4 uVar4;
  long in_FS_OFFSET;
  long local_40;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  String::get_extension();
  uVar4 = String::operator==((String *)&local_40,"zip");
  if ((char)uVar4 != '\0') {
    plVar1 = (long *)*param_1;
    local_38 = 0;
    pcVar2 = *(code **)(*plVar1 + 0x1d0);
    if (*(long *)param_2 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_38,param_2);
    }
    uVar4 = (*pcVar2)(plVar1);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
  }
  lVar3 = local_40;
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
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProjectDialog::_renderer_selected() */

void ProjectDialog::_renderer_selected(void)

{
  StringName SVar1;
  code *pcVar2;
  String *pSVar3;
  StringName *pSVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  StringName *in_RDI;
  long in_FS_OFFSET;
  Variant local_170 [8];
  String local_168 [8];
  undefined8 local_160;
  undefined8 local_158;
  String local_150 [8];
  String local_148 [8];
  CowData<char32_t> local_140 [8];
  String local_138 [8];
  undefined8 local_130;
  undefined8 local_128;
  String local_120 [8];
  String local_118 [8];
  CowData<char32_t> local_110 [8];
  String local_108 [8];
  undefined8 local_100;
  undefined8 local_f8;
  String local_f0 [8];
  String local_e8 [8];
  CowData<char32_t> local_e0 [8];
  String local_d8 [8];
  undefined8 local_d0;
  undefined8 local_c8;
  String local_c0 [8];
  String local_b8 [8];
  CowData<char32_t> local_b0 [8];
  String local_a8 [8];
  undefined8 local_a0;
  undefined8 local_98;
  String local_90 [8];
  char *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_70 [16];
  undefined8 local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar7 = ButtonGroup::get_pressed_button();
  if (lVar7 == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("_renderer_selected","editor/project_manager/project_dialog.cpp",0x1c0,
                       "Parameter \"renderer_button_group->get_pressed_button()\" is null.",0,0);
      return;
    }
    goto LAB_001025e7;
  }
  plVar8 = (long *)ButtonGroup::get_pressed_button();
  local_70 = (undefined1  [16])0x0;
  local_78 = 0;
  pcVar2 = *(code **)(*plVar8 + 0xb8);
  if (_renderer_selected()::{lambda()#1}::operator()()::sname == '\0') {
    iVar6 = __cxa_guard_acquire(&_renderer_selected()::{lambda()#1}::operator()()::sname);
    if (iVar6 != 0) {
      _scs_create((char *)&_renderer_selected()::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_renderer_selected()::{lambda()#1}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_renderer_selected()::{lambda()#1}::operator()()::sname);
    }
  }
  (*pcVar2)(local_58,plVar8,&_renderer_selected()::{lambda()#1}::operator()()::sname,&local_78);
  Variant::operator_cast_to_String(local_170);
  if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  cVar5 = String::operator==((String *)local_170,"forward_plus");
  if (cVar5 == '\0') {
    cVar5 = String::operator==((String *)local_170,"mobile");
    if (cVar5 != '\0') {
      pSVar3 = *(String **)(in_RDI + 0xe00);
      local_98 = 0;
      String::parse_latin1((String *)&local_98,"");
      local_a0 = 0;
      String::parse_latin1((String *)&local_a0,"Fast rendering of simple scenes.");
      TTR(local_90,(String *)&local_a0);
      String::utf8((char *)local_b0,0x10e6cd);
      local_c8 = 0;
      String::parse_latin1((String *)&local_c8,"");
      local_d0 = 0;
      String::parse_latin1((String *)&local_d0,"Uses RenderingDevice backend.");
      TTR(local_c0,(String *)&local_d0);
      String::utf8((char *)local_e0,0x10e6cd);
      local_f8 = 0;
      String::parse_latin1((String *)&local_f8,"");
      local_100 = 0;
      String::parse_latin1((String *)&local_100,"Less scalable for complex scenes.");
      TTR(local_f0,(String *)&local_100);
      String::utf8((char *)local_110,0x10e6cd);
      local_128 = 0;
      String::parse_latin1((String *)&local_128,"");
      local_130 = 0;
      String::parse_latin1((String *)&local_130,"Less advanced 3D graphics.");
      TTR(local_120,(String *)&local_130);
      String::utf8((char *)local_140,0x10e6cd);
      local_158 = 0;
      String::parse_latin1((String *)&local_158,"");
      local_160 = 0;
      String::parse_latin1((String *)&local_160,"Supports desktop + mobile platforms.");
      TTR(local_150,(String *)&local_160);
      String::utf8((char *)local_168,0x10e6f2);
      String::operator+(local_148,local_168);
      String::operator+(local_138,local_148);
      String::operator+(local_118,local_138);
      String::operator+(local_108,local_118);
      String::operator+(local_e8,local_108);
      String::operator+(local_d8,local_e8);
      String::operator+(local_b8,local_d8);
      String::operator+(local_a8,local_b8);
      String::operator+((String *)&local_88,local_a8);
      Label::set_text(pSVar3);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_e8);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_108);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_118);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_138);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_148);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_168);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_150);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_160);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
      CowData<char32_t>::_unref(local_140);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_120);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_130);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
      CowData<char32_t>::_unref(local_110);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_f0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
      CowData<char32_t>::_unref(local_e0);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_c0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
      CowData<char32_t>::_unref(local_b0);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      SVar1 = in_RDI[0xe18];
      goto LAB_00101855;
    }
    cVar5 = String::operator==((String *)local_170,"gl_compatibility");
    if (cVar5 == '\0') {
      _err_print_error("_renderer_selected","editor/project_manager/project_dialog.cpp",0x1de,
                       "Unknown renderer type. Please report this as a bug on GitHub.",0,1);
    }
    else {
      pSVar3 = *(String **)(in_RDI + 0xe00);
      local_98 = 0;
      String::parse_latin1((String *)&local_98,"");
      local_a0 = 0;
      String::parse_latin1((String *)&local_a0,"Fastest rendering of simple scenes.");
      TTR(local_90,(String *)&local_a0);
      String::utf8((char *)local_b0,0x10e6cd);
      local_c8 = 0;
      String::parse_latin1((String *)&local_c8,"");
      local_d0 = 0;
      String::parse_latin1((String *)&local_d0,"Uses OpenGL 3 backend (OpenGL 3.3/ES 3.0/WebGL2).");
      TTR(local_c0,(String *)&local_d0);
      String::utf8((char *)local_e0,0x10e6cd);
      local_f8 = 0;
      String::parse_latin1((String *)&local_f8,"");
      local_100 = 0;
      String::parse_latin1((String *)&local_100,"Intended for low-end/older devices.");
      TTR(local_f0,(String *)&local_100);
      String::utf8((char *)local_110,0x10e6cd);
      local_128 = 0;
      String::parse_latin1((String *)&local_128,"");
      local_130 = 0;
      String::parse_latin1((String *)&local_130,"Least advanced 3D graphics.");
      TTR(local_120,(String *)&local_130);
      String::utf8((char *)local_140,0x10e6cd);
      local_158 = 0;
      String::parse_latin1((String *)&local_158,"");
      local_160 = 0;
      String::parse_latin1((String *)&local_160,"Supports desktop, mobile + web platforms.");
      TTR(local_150,(String *)&local_160);
      String::utf8((char *)local_168,0x10e6f2);
      String::operator+(local_148,local_168);
      String::operator+(local_138,local_148);
      String::operator+(local_118,local_138);
      String::operator+(local_108,local_118);
      String::operator+(local_e8,local_108);
      String::operator+(local_d8,local_e8);
      String::operator+(local_b8,local_d8);
      String::operator+(local_a8,local_b8);
      String::operator+((String *)&local_88,local_a8);
      Label::set_text(pSVar3);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_e8);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_108);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_118);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_138);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_148);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_168);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_150);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_160);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
      CowData<char32_t>::_unref(local_140);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_120);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_130);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
      CowData<char32_t>::_unref(local_110);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_f0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
      CowData<char32_t>::_unref(local_e0);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_c0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
      CowData<char32_t>::_unref(local_b0);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    }
    CanvasItem::set_visible(SUB81(*(undefined8 *)(in_RDI + 0xe20),0));
    BaseButton::set_disabled(SUB81(*(undefined8 *)(in_RDI + 0xd88),0));
  }
  else {
    pSVar3 = *(String **)(in_RDI + 0xe00);
    local_98 = 0;
    local_88 = "";
    local_80 = 0;
    String::parse_latin1((StrRange *)&local_98);
    local_88 = "Slower rendering of simple scenes.";
    local_a0 = 0;
    local_80 = 0x22;
    String::parse_latin1((StrRange *)&local_a0);
    TTR(local_90,(String *)&local_a0);
    String::utf8((char *)local_b0,0x10e6cd);
    local_88 = "";
    local_c8 = 0;
    local_80 = 0;
    String::parse_latin1((StrRange *)&local_c8);
    local_88 = "Uses RenderingDevice backend.";
    local_d0 = 0;
    local_80 = 0x1d;
    String::parse_latin1((StrRange *)&local_d0);
    TTR(local_c0,(String *)&local_d0);
    String::utf8((char *)local_e0,0x10e6cd);
    local_88 = "";
    local_f8 = 0;
    local_80 = 0;
    String::parse_latin1((StrRange *)&local_f8);
    local_100 = 0;
    local_88 = "Can scale to large complex scenes.";
    local_80 = 0x22;
    String::parse_latin1((StrRange *)&local_100);
    TTR(local_f0,(String *)&local_100);
    String::utf8((char *)local_110,0x10e6cd);
    local_88 = "";
    local_128 = 0;
    local_80 = 0;
    String::parse_latin1((StrRange *)&local_128);
    local_88 = "Advanced 3D graphics available.";
    local_130 = 0;
    local_80 = 0x1f;
    String::parse_latin1((StrRange *)&local_130);
    TTR(local_120,(String *)&local_130);
    String::utf8((char *)local_140,0x10e6cd);
    local_88 = "";
    local_158 = 0;
    local_80 = 0;
    String::parse_latin1((StrRange *)&local_158);
    local_160 = 0;
    local_88 = "Supports desktop platforms only.";
    local_80 = 0x20;
    String::parse_latin1((StrRange *)&local_160);
    TTR(local_150,(String *)&local_160);
    String::utf8((char *)local_168,0x10e6f2);
    String::operator+(local_148,local_168);
    String::operator+(local_138,local_148);
    String::operator+(local_118,local_138);
    String::operator+(local_108,local_118);
    String::operator+(local_e8,local_108);
    String::operator+(local_d8,local_e8);
    String::operator+(local_b8,local_d8);
    String::operator+(local_a8,local_b8);
    String::operator+((String *)&local_88,local_a8);
    Label::set_text(pSVar3);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_e8);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_108);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_118);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_138);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_148);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_168);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_150);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_160);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
    CowData<char32_t>::_unref(local_140);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_120);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_130);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
    CowData<char32_t>::_unref(local_110);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_f0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
    CowData<char32_t>::_unref(local_e0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_c0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
    CowData<char32_t>::_unref(local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    SVar1 = in_RDI[0xe18];
LAB_00101855:
    CanvasItem::set_visible(SUB81(*(undefined8 *)(in_RDI + 0xe20),0));
    BaseButton::set_disabled(SUB81(*(undefined8 *)(in_RDI + 0xd88),0));
    if (SVar1 != (StringName)0x1) {
      pSVar4 = *(StringName **)(in_RDI + 0xe20);
      if (_renderer_selected()::{lambda()#2}::operator()()::sname == '\0') {
        iVar6 = __cxa_guard_acquire(&_renderer_selected()::{lambda()#2}::operator()()::sname);
        if (iVar6 != 0) {
          _scs_create((char *)&_renderer_selected()::{lambda()#2}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_renderer_selected()::{lambda()#2}::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&_renderer_selected()::{lambda()#2}::operator()()::sname);
        }
      }
      local_58[0] = Window::get_theme_color
                              (in_RDI,(StringName *)
                                      &_renderer_selected()::{lambda()#2}::operator()()::sname);
      Control::add_theme_color_override(pSVar4,(Color *)(SceneStringNames::singleton + 0xb0));
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_170);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001025e7:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SortArray<String, _DefaultComparator<String>, true>::adjust_heap(long, long, long, String,
   String*) const [clone .isra.0] */

void SortArray<String,_DefaultComparator<String>,true>::adjust_heap
               (long param_1,long param_2,long param_3,CowData *param_4,long param_5)

{
  String *pSVar1;
  char cVar2;
  CowData<char32_t> *this;
  CowData<char32_t> *pCVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long in_FS_OFFSET;
  long local_68;
  long local_48;
  long local_40;
  
  lVar6 = param_2 * 2 + 2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = param_2;
  if (lVar6 < param_3) {
    do {
      this = (CowData<char32_t> *)(param_5 + (lVar6 + -1 + param_1) * 8);
      pSVar1 = (String *)(param_5 + (param_1 + lVar6) * 8);
      cVar2 = String::operator<(pSVar1,(String *)this);
      lVar4 = lVar6 + -1;
      lVar5 = lVar6;
      if (cVar2 == '\0') {
        lVar5 = lVar6 + 1;
        this = (CowData<char32_t> *)pSVar1;
        lVar4 = lVar6;
      }
      pCVar3 = (CowData<char32_t> *)(param_5 + (local_68 + param_1) * 8);
      if (*(long *)pCVar3 != *(long *)this) {
        CowData<char32_t>::_ref(pCVar3,(CowData *)this);
      }
      lVar6 = lVar5 * 2;
      local_68 = lVar4;
    } while (lVar6 < param_3);
  }
  else {
    this = (CowData<char32_t> *)(param_5 + (param_2 + param_1) * 8);
    lVar4 = param_2;
  }
  pCVar3 = this;
  if (param_3 == lVar6) {
    lVar4 = param_3 + -1;
    pCVar3 = (CowData<char32_t> *)(param_5 + (param_1 + lVar4) * 8);
    if (*(long *)this != *(long *)pCVar3) {
      CowData<char32_t>::_ref(this,(CowData *)pCVar3);
    }
  }
  local_48 = 0;
  if (*(long *)param_4 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,param_4);
  }
  lVar6 = (lVar4 + -1) - (lVar4 + -1 >> 0x3f);
  while (param_2 < lVar4) {
    lVar5 = lVar6 >> 1;
    pSVar1 = (String *)(param_5 + (param_1 + lVar5) * 8);
    cVar2 = String::operator<(pSVar1,(String *)&local_48);
    pCVar3 = (CowData<char32_t> *)(param_5 + (param_1 + lVar4) * 8);
    if (cVar2 == '\0') break;
    if (*(long *)pCVar3 != *(long *)pSVar1) {
      CowData<char32_t>::_ref(pCVar3,(CowData *)pSVar1);
    }
    lVar6 = (lVar5 + -1) - (lVar5 + -1 >> 0x3f);
    pCVar3 = (CowData<char32_t> *)pSVar1;
    lVar4 = lVar5;
  }
  if (*(long *)pCVar3 != local_48) {
    CowData<char32_t>::_ref(pCVar3,(CowData *)&local_48);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x00102cc4) */
/* SortArray<String, _DefaultComparator<String>, true>::introsort(long, long, String*, long) const
   [clone .isra.0] */

void SortArray<String,_DefaultComparator<String>,true>::introsort
               (long param_1,long param_2,String *param_3,long param_4)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  String *pSVar4;
  String *pSVar5;
  long lVar6;
  long lVar7;
  String *pSVar8;
  CowData *pCVar9;
  String *pSVar10;
  long lVar11;
  long lVar12;
  long in_FS_OFFSET;
  bool bVar13;
  long local_80;
  long local_68;
  long local_60;
  long local_48;
  long local_40;
  
  lVar12 = param_2 - param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (0x10 < lVar12) {
    local_80 = param_2;
    if (param_4 != 0) {
      pSVar4 = param_3 + param_1 * 8;
      local_68 = param_2;
      local_60 = param_4;
LAB_0010285e:
      local_60 = local_60 + -1;
      pSVar8 = param_3 + ((lVar12 >> 1) + param_1) * 8;
      pSVar5 = param_3 + local_68 * 8 + -8;
      cVar3 = String::operator<(pSVar4,pSVar8);
      if (cVar3 == '\0') {
        cVar3 = String::operator<(pSVar4,pSVar5);
        pSVar10 = pSVar4;
        if (cVar3 != '\0') goto LAB_001028bc;
        cVar3 = String::operator<(pSVar8,pSVar5);
      }
      else {
        cVar3 = String::operator<(pSVar8,pSVar5);
        pSVar10 = pSVar8;
        if (cVar3 != '\0') goto LAB_001028bc;
        cVar3 = String::operator<(pSVar4,pSVar5);
        pSVar8 = pSVar4;
      }
      pSVar10 = pSVar8;
      if (cVar3 != '\0') {
        pSVar10 = pSVar5;
      }
LAB_001028bc:
      local_48 = 0;
      plVar1 = (long *)(*(long *)pSVar10 + -0x10);
      if (*(long *)pSVar10 != 0) {
        do {
          lVar12 = *plVar1;
          if (lVar12 == 0) goto LAB_001028f4;
          LOCK();
          lVar11 = *plVar1;
          bVar13 = lVar12 == lVar11;
          if (bVar13) {
            *plVar1 = lVar12 + 1;
            lVar11 = lVar12;
          }
          UNLOCK();
        } while (!bVar13);
        if (lVar11 != -1) {
          local_48 = *(long *)pSVar10;
        }
      }
LAB_001028f4:
      pSVar8 = pSVar4;
      local_80 = param_1;
      lVar12 = local_68;
      do {
        cVar3 = String::operator<(pSVar8,(String *)&local_48);
        if (cVar3 == '\0') {
LAB_00102937:
          lVar12 = lVar12 + -1;
          pSVar5 = param_3 + lVar12 * 8;
          while (cVar3 = String::operator<((String *)&local_48,pSVar5), cVar3 != '\0') {
            if (param_1 == lVar12) {
              _err_print_error("partitioner","./core/templates/sort_array.h",0xb9,
                               "bad comparison function; sorting will be broken",0,0);
              break;
            }
            lVar12 = lVar12 + -1;
            pSVar5 = pSVar5 + -8;
          }
          if (lVar12 <= local_80) goto LAB_001029d0;
          lVar11 = *(long *)pSVar8;
          *(undefined8 *)pSVar8 = 0;
          if (*(long *)pSVar5 != 0) {
            *(long *)pSVar8 = *(long *)pSVar5;
            *(undefined8 *)pSVar5 = 0;
          }
          if (lVar11 != 0) {
            *(long *)pSVar5 = lVar11;
          }
        }
        else if (local_68 + -1 == local_80) {
          _err_print_error("partitioner","./core/templates/sort_array.h",0xb2,
                           "bad comparison function; sorting will be broken",0,0);
          goto LAB_00102937;
        }
        pSVar8 = pSVar8 + 8;
        local_80 = local_80 + 1;
      } while( true );
    }
LAB_00102a9a:
    lVar11 = lVar12 + -2 >> 1;
    pCVar9 = (CowData *)(param_3 + param_1 * 8);
    do {
      local_48 = 0;
      plVar1 = (long *)(*(long *)(pCVar9 + lVar11 * 8) + -0x10);
      if (*(long *)(pCVar9 + lVar11 * 8) == 0) {
        adjust_heap(param_1,lVar11,lVar12,&local_48,param_3);
      }
      else {
        do {
          lVar6 = *plVar1;
          if (lVar6 == 0) goto LAB_00102ade;
          LOCK();
          lVar7 = *plVar1;
          bVar13 = lVar6 == lVar7;
          if (bVar13) {
            *plVar1 = lVar6 + 1;
            lVar7 = lVar6;
          }
          UNLOCK();
        } while (!bVar13);
        if (lVar7 != -1) {
          local_48 = *(long *)(pCVar9 + lVar11 * 8);
        }
LAB_00102ade:
        lVar6 = local_48;
        adjust_heap(param_1,lVar11,lVar12,&local_48,param_3);
        if (lVar6 != 0) {
          LOCK();
          plVar1 = (long *)(lVar6 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            Memory::free_static((void *)(local_48 + -0x10),false);
          }
        }
      }
      if (lVar11 == 0) goto LAB_00102b4b;
      lVar11 = lVar11 + -1;
    } while( true );
  }
  goto LAB_00102a6f;
LAB_001029d0:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  introsort(local_80,local_68,param_3,local_60);
  lVar12 = local_80 - param_1;
  if (lVar12 < 0x11) goto LAB_00102a6f;
  local_68 = local_80;
  if (local_60 == 0) goto LAB_00102a9a;
  goto LAB_0010285e;
LAB_00102b4b:
  pSVar4 = param_3 + local_80 * 8 + -8;
  lVar12 = (local_80 + -1) - param_1;
  do {
    plVar1 = (long *)(*(long *)pSVar4 + -0x10);
    if (*(long *)pSVar4 == 0) {
LAB_00102c58:
      if (*(long *)pCVar9 != *(long *)pSVar4) {
        CowData<char32_t>::_ref((CowData<char32_t> *)pSVar4,pCVar9);
      }
LAB_00102c78:
      local_48 = 0;
      adjust_heap(param_1,0,lVar12,&local_48,param_3);
    }
    else {
      do {
        lVar11 = *plVar1;
        if (lVar11 == 0) goto LAB_00102c58;
        LOCK();
        lVar6 = *plVar1;
        bVar13 = lVar11 == lVar6;
        if (bVar13) {
          *plVar1 = lVar11 + 1;
          lVar6 = lVar11;
        }
        UNLOCK();
      } while (!bVar13);
      if (lVar6 == -1) goto LAB_00102c58;
      lVar11 = *(long *)pSVar4;
      if (lVar11 != *(long *)pCVar9) {
        CowData<char32_t>::_ref((CowData<char32_t> *)pSVar4,pCVar9);
      }
      local_48 = 0;
      if (lVar11 == 0) goto LAB_00102c78;
      plVar1 = (long *)(lVar11 + -0x10);
      do {
        lVar6 = *plVar1;
        if (lVar6 == 0) goto LAB_00102c9d;
        LOCK();
        lVar7 = *plVar1;
        bVar13 = lVar6 == lVar7;
        if (bVar13) {
          *plVar1 = lVar6 + 1;
          lVar7 = lVar6;
        }
        UNLOCK();
      } while (!bVar13);
      if (lVar7 == -1) {
LAB_00102c9d:
        adjust_heap(param_1,0,lVar12,&local_48,param_3);
      }
      else {
        local_48 = lVar11;
        adjust_heap(param_1,0,lVar12,&local_48,param_3);
        LOCK();
        plVar2 = (long *)(lVar11 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          Memory::free_static((void *)(local_48 + -0x10),false);
        }
      }
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static(plVar1,false);
      }
    }
    pSVar4 = (String *)((CowData<char32_t> *)pSVar4 + -8);
    bVar13 = 1 < lVar12;
    lVar12 = lVar12 + -1;
  } while (bVar13);
LAB_00102a6f:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ProjectDialog::_browse_install_path() */

void __thiscall ProjectDialog::_browse_install_path(ProjectDialog *this)

{
  String *pSVar1;
  char cVar2;
  long in_FS_OFFSET;
  char *local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(this + 0xdb8) == 1) {
    LineEdit::get_text();
    cVar2 = String::is_relative_path();
    if ((cVar2 != '\0') ||
       (cVar2 = DirAccess::dir_exists_absolute((String *)&local_68), cVar2 == '\0')) {
      local_60 = 0;
      local_58 = "filesystem/directories/default_project_path";
      local_50 = 0x2b;
      String::parse_latin1((StrRange *)&local_60);
      _EDITOR_GET((String *)local_48);
      Variant::operator_cast_to_String((Variant *)&local_58);
      if (local_68 != local_58) {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        local_68 = local_58;
        local_58 = (char *)0x0;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      if (Variant::needs_deinit[local_48[0]] != '\0') {
        Variant::_clear_internal();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    }
    cVar2 = BaseButton::is_pressed();
    if (cVar2 == '\0') {
      EditorFileDialog::set_current_dir(*(String **)(this + 0xe70));
    }
    else {
      pSVar1 = *(String **)(this + 0xe70);
      String::get_base_dir();
      EditorFileDialog::set_current_dir(pSVar1);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    }
    EditorFileDialog::set_file_mode(*(undefined8 *)(this + 0xe70),2);
    EditorFileDialog::popup_file_dialog();
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  }
  else {
    _err_print_error("_browse_install_path","editor/project_manager/project_dialog.cpp",0x186,
                     "Condition \"mode != MODE_IMPORT\" is true.",
                     "Install path is only used for MODE_IMPORT.",0,0);
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProjectDialog::ProjectDialog() */

void __thiscall ProjectDialog::ProjectDialog(ProjectDialog *this)

{
  code *pcVar1;
  Vector2 *pVVar2;
  char cVar3;
  ProjectDialog PVar4;
  int iVar5;
  BoxContainer *this_00;
  BoxContainer *pBVar6;
  Label *pLVar7;
  LineEdit *pLVar8;
  CheckButton *this_01;
  BoxContainer *pBVar9;
  TextureRect *pTVar10;
  Button *pBVar11;
  ButtonGroup *this_02;
  String *pSVar12;
  CheckBox *pCVar13;
  VSeparator *this_03;
  long *plVar14;
  OptionButton *this_04;
  Control *pCVar15;
  EditorFileDialog *this_05;
  AcceptDialog *this_06;
  Object *pOVar16;
  Object *pOVar17;
  long in_FS_OFFSET;
  float fVar18;
  long local_98;
  CowData<char32_t> local_90 [8];
  undefined8 local_88;
  undefined8 local_80;
  long local_78 [2];
  char *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ConfirmationDialog::ConfirmationDialog((ConfirmationDialog *)this);
  this[0xdbc] = (ProjectDialog)0x1;
  *(undefined ***)this = &PTR__initialize_classv_001193c0;
  *(undefined4 *)(this + 0xdb8) = 0;
  *(undefined8 *)(this + 0xe10) = 0;
  this[0xe18] = (ProjectDialog)0x0;
  *(undefined1 (*) [16])(this + 0xdc0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xdd0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xde0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xdf0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xe00) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xe20) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xe30) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xe40) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xe50) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xe60) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xe70) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xe80) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xe90) = (undefined1  [16])0x0;
  this_00 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(this_00,true);
  *(undefined ***)this_00 = &PTR__initialize_classv_00118c70;
  this_00[0xa0c] = (BoxContainer)0x1;
  postinitialize_handler((Object *)this_00);
  Node::add_child(this,this_00,0,0);
  pBVar6 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar6,true);
  *(undefined ***)pBVar6 = &PTR__initialize_classv_00118c70;
  pBVar6[0xa0c] = (BoxContainer)0x1;
  postinitialize_handler((Object *)pBVar6);
  *(BoxContainer **)(this + 0xde0) = pBVar6;
  Node::add_child(this_00,pBVar6,0,0);
  pLVar7 = (Label *)operator_new(0xad8,"");
  local_68 = (char *)0x0;
  Label::Label(pLVar7,(String *)&local_68);
  postinitialize_handler((Object *)pLVar7);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  local_68 = "";
  local_78[0] = 0;
  local_60 = 0;
  String::parse_latin1((StrRange *)local_78);
  local_68 = "Project Name:";
  local_80 = 0;
  local_60 = 0xd;
  String::parse_latin1((StrRange *)&local_80);
  TTR((String *)&local_68,(String *)&local_80);
  Label::set_text((String *)pLVar7);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  Node::add_child(*(undefined8 *)(this + 0xde0),pLVar7,0,0);
  pLVar8 = (LineEdit *)operator_new(0xbb0,"");
  local_68 = (char *)0x0;
  LineEdit::LineEdit(pLVar8,(String *)&local_68);
  postinitialize_handler((Object *)pLVar8);
  *(LineEdit **)(this + 0xe30) = pLVar8;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xe30),3);
  Node::add_child(*(undefined8 *)(this + 0xde0),*(undefined8 *)(this + 0xe30),0,0);
  pBVar6 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar6,true);
  pBVar6[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar6 = &PTR__initialize_classv_00118c70;
  postinitialize_handler((Object *)pBVar6);
  *(BoxContainer **)(this + 0xde8) = pBVar6;
  Node::add_child(this_00,pBVar6,0,0);
  pBVar6 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar6,false);
  pBVar6[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar6 = &PTR__initialize_classv_001188f8;
  postinitialize_handler((Object *)pBVar6);
  Node::add_child(*(undefined8 *)(this + 0xde8),pBVar6,0,0);
  pLVar7 = (Label *)operator_new(0xad8,"");
  local_68 = (char *)0x0;
  Label::Label(pLVar7,(String *)&local_68);
  postinitialize_handler((Object *)pLVar7);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  local_68 = "";
  local_78[0] = 0;
  local_60 = 0;
  String::parse_latin1((StrRange *)local_78);
  local_80 = 0;
  local_68 = "Project Path:";
  local_60 = 0xd;
  String::parse_latin1((StrRange *)&local_80);
  TTR((String *)&local_68,(String *)&local_80);
  Label::set_text((String *)pLVar7);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  Control::set_h_size_flags(pLVar7,3);
  Node::add_child(pBVar6,pLVar7,0,0);
  this_01 = (CheckButton *)operator_new(0xc60,"");
  local_68 = (char *)0x0;
  CheckButton::CheckButton(this_01,(String *)&local_68);
  postinitialize_handler((Object *)this_01);
  *(CheckButton **)(this + 0xdc8) = this_01;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  local_68 = "";
  pSVar12 = *(String **)(this + 0xdc8);
  local_78[0] = 0;
  local_60 = 0;
  String::parse_latin1((StrRange *)local_78);
  local_80 = 0;
  local_68 = "Create Folder";
  local_60 = 0xd;
  String::parse_latin1((StrRange *)&local_80);
  TTR((String *)&local_68,(String *)&local_80);
  Button::set_text(pSVar12);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xdc8),0));
  Node::add_child(pBVar6,*(undefined8 *)(this + 0xdc8),0,0);
  plVar14 = *(long **)(this + 0xdc8);
  pcVar1 = *(code **)(*plVar14 + 0x108);
  create_custom_callable_function_pointer<ProjectDialog,bool>
            ((ProjectDialog *)&local_68,(char *)this,
             (_func_void_bool *)"&ProjectDialog::_create_dir_toggled");
  (*pcVar1)(plVar14,SceneStringNames::singleton + 0x248,(CowData<char32_t> *)&local_68);
  Callable::~Callable((Callable *)&local_68);
  pBVar6 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar6,false);
  pBVar6[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar6 = &PTR__initialize_classv_001188f8;
  postinitialize_handler((Object *)pBVar6);
  Node::add_child(*(undefined8 *)(this + 0xde8),pBVar6,0,0);
  pLVar8 = (LineEdit *)operator_new(0xbb0,"");
  local_68 = (char *)0x0;
  LineEdit::LineEdit(pLVar8,(String *)&local_68);
  postinitialize_handler((Object *)pLVar8);
  *(LineEdit **)(this + 0xe38) = pLVar8;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xe38),3);
  LineEdit::set_structured_text_bidi_override(*(undefined8 *)(this + 0xe38),2);
  Node::add_child(pBVar6,*(undefined8 *)(this + 0xe38),0,0);
  pBVar9 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar9,true);
  pBVar9[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar9 = &PTR__initialize_classv_00118c70;
  postinitialize_handler((Object *)pBVar9);
  *(BoxContainer **)(this + 0xdf0) = pBVar9;
  Node::add_child(this_00,pBVar9,0,0);
  pLVar7 = (Label *)operator_new(0xad8,"");
  local_68 = (char *)0x0;
  Label::Label(pLVar7,(String *)&local_68);
  postinitialize_handler((Object *)pLVar7);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  local_68 = "";
  local_78[0] = 0;
  local_60 = 0;
  String::parse_latin1((StrRange *)local_78);
  local_80 = 0;
  local_68 = "Project Installation Path:";
  local_60 = 0x1a;
  String::parse_latin1((StrRange *)&local_80);
  TTR((String *)&local_68,(String *)&local_80);
  Label::set_text((String *)pLVar7);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  Node::add_child(*(undefined8 *)(this + 0xdf0),pLVar7,0,0);
  pBVar9 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar9,false);
  pBVar9[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar9 = &PTR__initialize_classv_001188f8;
  postinitialize_handler((Object *)pBVar9);
  Node::add_child(*(undefined8 *)(this + 0xdf0),pBVar9,0,0);
  pLVar8 = (LineEdit *)operator_new(0xbb0,"");
  local_68 = (char *)0x0;
  LineEdit::LineEdit(pLVar8,(String *)&local_68);
  postinitialize_handler((Object *)pLVar8);
  *(LineEdit **)(this + 0xe40) = pLVar8;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xe40),3);
  LineEdit::set_structured_text_bidi_override(*(undefined8 *)(this + 0xe40),2);
  Node::add_child(pBVar9,*(undefined8 *)(this + 0xe40),0,0);
  pTVar10 = (TextureRect *)operator_new(0x9e0,"");
  TextureRect::TextureRect(pTVar10);
  postinitialize_handler((Object *)pTVar10);
  *(TextureRect **)(this + 0xe48) = pTVar10;
  TextureRect::set_stretch_mode(pTVar10,3);
  Node::add_child(pBVar6,*(undefined8 *)(this + 0xe48),0,0);
  pBVar11 = (Button *)operator_new(0xc10,"");
  local_68 = (char *)0x0;
  Button::Button(pBVar11,(String *)&local_68);
  postinitialize_handler((Object *)pBVar11);
  *(Button **)(this + 0xdd0) = pBVar11;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  pSVar12 = *(String **)(this + 0xdd0);
  local_68 = "";
  local_78[0] = 0;
  local_60 = 0;
  String::parse_latin1((StrRange *)local_78);
  local_68 = "Browse";
  local_80 = 0;
  local_60 = 6;
  String::parse_latin1((StrRange *)&local_80);
  TTR((String *)&local_68,(String *)&local_80);
  Button::set_text(pSVar12);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  plVar14 = *(long **)(this + 0xdd0);
  pcVar1 = *(code **)(*plVar14 + 0x108);
  create_custom_callable_function_pointer<ProjectDialog>
            ((ProjectDialog *)&local_68,(char *)this,
             (_func_void *)"&ProjectDialog::_browse_project_path");
  (*pcVar1)(plVar14,SceneStringNames::singleton + 0x238,(CowData<char32_t> *)&local_68);
  Callable::~Callable((Callable *)&local_68);
  Node::add_child(pBVar6,*(undefined8 *)(this + 0xdd0),0,0);
  pTVar10 = (TextureRect *)operator_new(0x9e0,"");
  TextureRect::TextureRect(pTVar10);
  postinitialize_handler((Object *)pTVar10);
  *(TextureRect **)(this + 0xe50) = pTVar10;
  TextureRect::set_stretch_mode(pTVar10,3);
  Node::add_child(pBVar9,*(undefined8 *)(this + 0xe50),0,0);
  pBVar11 = (Button *)operator_new(0xc10,"");
  local_68 = (char *)0x0;
  Button::Button(pBVar11,(String *)&local_68);
  postinitialize_handler((Object *)pBVar11);
  *(Button **)(this + 0xdd8) = pBVar11;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  local_68 = "";
  pSVar12 = *(String **)(this + 0xdd8);
  local_78[0] = 0;
  local_60 = 0;
  String::parse_latin1((StrRange *)local_78);
  local_68 = (char *)0x0;
  String::parse_latin1((String *)&local_68,"Browse");
  TTR((String *)&local_80,(String *)&local_68);
  Button::set_text(pSVar12);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  plVar14 = *(long **)(this + 0xdd8);
  pcVar1 = *(code **)(*plVar14 + 0x108);
  create_custom_callable_function_pointer<ProjectDialog>
            ((ProjectDialog *)&local_68,(char *)this,
             (_func_void *)"&ProjectDialog::_browse_install_path");
  (*pcVar1)(plVar14,SceneStringNames::singleton + 0x238,(CowData<char32_t> *)&local_68);
  Callable::~Callable((Callable *)&local_68);
  Node::add_child(pBVar9,*(undefined8 *)(this + 0xdd8),0,0);
  pLVar7 = (Label *)operator_new(0xad8,"");
  local_68 = (char *)0x0;
  Label::Label(pLVar7,(String *)&local_68);
  postinitialize_handler((Object *)pLVar7);
  *(Label **)(this + 0xe28) = pLVar7;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  Label::set_horizontal_alignment(*(undefined8 *)(this + 0xe28),1);
  pVVar2 = *(Vector2 **)(this + 0xe28);
  fVar18 = (float)EditorScale::get_scale();
  local_58 = CONCAT44(fVar18 * _LC100._4_4_,fVar18 * (float)_LC100);
  Control::set_custom_minimum_size(pVVar2);
  Label::set_autowrap_mode(*(undefined8 *)(this + 0xe28),3);
  Node::add_child(this_00,*(undefined8 *)(this + 0xe28),0,0);
  pBVar6 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar6,true);
  pBVar6[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar6 = &PTR__initialize_classv_00118c70;
  postinitialize_handler((Object *)pBVar6);
  *(BoxContainer **)(this + 0xdf8) = pBVar6;
  Node::add_child(this_00,pBVar6,0,0);
  pLVar7 = (Label *)operator_new(0xad8,"");
  local_68 = (char *)0x0;
  Label::Label(pLVar7,(String *)&local_68);
  postinitialize_handler((Object *)pLVar7);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  local_68 = "";
  local_78[0] = 0;
  local_60 = 0;
  String::parse_latin1((StrRange *)local_78);
  local_68 = "Renderer:";
  local_80 = 0;
  local_60 = 9;
  String::parse_latin1((StrRange *)&local_80);
  TTR((String *)&local_68,(String *)&local_80);
  Label::set_text((String *)pLVar7);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  Node::add_child(*(undefined8 *)(this + 0xdf8),pLVar7,0,0);
  pBVar6 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar6,false);
  pBVar6[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar6 = &PTR__initialize_classv_001188f8;
  postinitialize_handler((Object *)pBVar6);
  Node::add_child(*(undefined8 *)(this + 0xdf8),pBVar6,0,0);
  this_02 = (ButtonGroup *)operator_new(0x270,"");
  ButtonGroup::ButtonGroup(this_02);
  postinitialize_handler((Object *)this_02);
  cVar3 = RefCounted::init_ref();
  if (cVar3 == '\0') {
    pOVar16 = *(Object **)(this + 0xe10);
    if (pOVar16 == (Object *)0x0) goto LAB_00103c7f;
    *(undefined8 *)(this + 0xe10) = 0;
    cVar3 = RefCounted::unreference();
    if (cVar3 == '\0') goto LAB_00103c7f;
    this_02 = (ButtonGroup *)0x0;
    cVar3 = predelete_handler(pOVar16);
    if (cVar3 == '\0') goto LAB_00103c7f;
LAB_001050ba:
    (**(code **)(*(long *)pOVar16 + 0x140))();
    Memory::free_static(pOVar16,false);
    pOVar17 = (Object *)this_02;
    if (this_02 == (ButtonGroup *)0x0) goto LAB_00103c7f;
  }
  else {
    pOVar16 = *(Object **)(this + 0xe10);
    pOVar17 = pOVar16;
    if (this_02 != (ButtonGroup *)pOVar16) {
      *(ButtonGroup **)(this + 0xe10) = this_02;
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        *(undefined8 *)(this + 0xe10) = 0;
      }
      pOVar17 = (Object *)this_02;
      if (((pOVar16 != (Object *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) &&
         (cVar3 = predelete_handler(pOVar16), cVar3 != '\0')) goto LAB_001050ba;
    }
  }
  cVar3 = RefCounted::unreference();
  if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar17), cVar3 != '\0')) {
    (**(code **)(*(long *)pOVar17 + 0x140))(pOVar17);
    Memory::free_static(pOVar17,false);
  }
LAB_00103c7f:
  pBVar9 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar9,true);
  pBVar9[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar9 = &PTR__initialize_classv_00118c70;
  postinitialize_handler((Object *)pBVar9);
  Node::add_child(pBVar6,pBVar9,0,0);
  local_68 = "forward_plus";
  local_98 = 0;
  local_60 = 0xc;
  String::parse_latin1((StrRange *)&local_98);
  pSVar12 = (String *)EditorSettings::get_singleton();
  local_68 = (char *)0x0;
  String::parse_latin1((String *)&local_68,"project_manager/default_renderer");
  cVar3 = EditorSettings::has_setting(pSVar12);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  if (cVar3 != '\0') {
    EditorSettings::get_singleton();
    local_68 = (char *)0x0;
    String::parse_latin1((String *)&local_68,"project_manager/default_renderer");
    EditorSettings::get_setting((String *)&local_58);
    Variant::operator_cast_to_String((Variant *)local_78);
    if (local_98 != local_78[0]) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      local_98 = local_78[0];
      local_78[0] = 0;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
    if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  }
  PVar4 = (ProjectDialog)DisplayServer::is_rendering_device_supported();
  this[0xe18] = PVar4;
  if (PVar4 == (ProjectDialog)0x0) {
    String::parse_latin1((String *)&local_98,"gl_compatibility");
  }
  pCVar13 = (CheckBox *)operator_new(0xc60,"");
  local_68 = (char *)0x0;
  CheckBox::CheckBox(pCVar13,(String *)&local_68);
  postinitialize_handler((Object *)pCVar13);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  BaseButton::set_button_group(pCVar13);
  local_68 = "";
  local_78[0] = 0;
  local_60 = 0;
  String::parse_latin1((StrRange *)local_78);
  local_68 = "Forward+";
  local_80 = 0;
  local_60 = 8;
  String::parse_latin1((StrRange *)&local_80);
  TTR((String *)&local_68,(String *)&local_80);
  Button::set_text((String *)pCVar13);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  pcVar1 = *(code **)(*(long *)pCVar13 + 0xa8);
  Variant::Variant((Variant *)&local_58,"forward_plus");
  if ((ProjectDialog()::{lambda()#1}::operator()()::sname == '\0') &&
     (iVar5 = __cxa_guard_acquire(&ProjectDialog()::{lambda()#1}::operator()()::sname), iVar5 != 0))
  {
    _scs_create((char *)&ProjectDialog()::{lambda()#1}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&ProjectDialog()::{lambda()#1}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&ProjectDialog()::{lambda()#1}::operator()()::sname);
  }
  (*pcVar1)(pCVar13,&ProjectDialog()::{lambda()#1}::operator()()::sname,(String *)&local_58);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  pcVar1 = *(code **)(*(long *)pCVar13 + 0x108);
  create_custom_callable_function_pointer<ProjectDialog>
            ((ProjectDialog *)&local_68,(char *)this,
             (_func_void *)"&ProjectDialog::_renderer_selected");
  (*pcVar1)(pCVar13,SceneStringNames::singleton + 0x238,(CowData<char32_t> *)&local_68,0);
  Callable::~Callable((Callable *)&local_68);
  Node::add_child(pBVar9,pCVar13,0,0);
  cVar3 = String::operator==((String *)&local_98,"forward_plus");
  if (cVar3 != '\0') {
    BaseButton::set_pressed(SUB81(pCVar13,0));
  }
  pCVar13 = (CheckBox *)operator_new(0xc60,"");
  local_68 = (char *)0x0;
  CheckBox::CheckBox(pCVar13,(String *)&local_68);
  postinitialize_handler((Object *)pCVar13);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  BaseButton::set_button_group(pCVar13);
  local_68 = "";
  local_78[0] = 0;
  local_60 = 0;
  String::parse_latin1((StrRange *)local_78);
  local_68 = "Mobile";
  local_80 = 0;
  local_60 = 6;
  String::parse_latin1((StrRange *)&local_80);
  TTR((String *)&local_68,(String *)&local_80);
  Button::set_text((String *)pCVar13);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  pcVar1 = *(code **)(*(long *)pCVar13 + 0xa8);
  Variant::Variant((Variant *)&local_58,"mobile");
  if ((ProjectDialog()::{lambda()#2}::operator()()::sname == '\0') &&
     (iVar5 = __cxa_guard_acquire(&ProjectDialog()::{lambda()#2}::operator()()::sname), iVar5 != 0))
  {
    _scs_create((char *)&ProjectDialog()::{lambda()#2}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&ProjectDialog()::{lambda()#2}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&ProjectDialog()::{lambda()#2}::operator()()::sname);
  }
  (*pcVar1)(pCVar13,&ProjectDialog()::{lambda()#2}::operator()()::sname,(String *)&local_58);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  pcVar1 = *(code **)(*(long *)pCVar13 + 0x108);
  create_custom_callable_function_pointer<ProjectDialog>
            ((ProjectDialog *)&local_68,(char *)this,
             (_func_void *)"&ProjectDialog::_renderer_selected");
  (*pcVar1)(pCVar13,SceneStringNames::singleton + 0x238,(CowData<char32_t> *)&local_68,0);
  Callable::~Callable((Callable *)&local_68);
  Node::add_child(pBVar9,pCVar13,0,0);
  cVar3 = String::operator==((String *)&local_98,"mobile");
  if (cVar3 != '\0') {
    BaseButton::set_pressed(SUB81(pCVar13,0));
  }
  pCVar13 = (CheckBox *)operator_new(0xc60,"");
  local_68 = (char *)0x0;
  CheckBox::CheckBox(pCVar13,(String *)&local_68);
  postinitialize_handler((Object *)pCVar13);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  BaseButton::set_button_group(pCVar13);
  local_68 = "";
  local_78[0] = 0;
  local_60 = 0;
  String::parse_latin1((StrRange *)local_78);
  local_68 = "Compatibility";
  local_80 = 0;
  local_60 = 0xd;
  String::parse_latin1((StrRange *)&local_80);
  TTR((String *)&local_68,(String *)&local_80);
  Button::set_text((String *)pCVar13);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  pcVar1 = *(code **)(*(long *)pCVar13 + 0xa8);
  Variant::Variant((Variant *)&local_58,"gl_compatibility");
  if ((ProjectDialog()::{lambda()#3}::operator()()::sname == '\0') &&
     (iVar5 = __cxa_guard_acquire(&ProjectDialog()::{lambda()#3}::operator()()::sname), iVar5 != 0))
  {
    _scs_create((char *)&ProjectDialog()::{lambda()#3}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&ProjectDialog()::{lambda()#3}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&ProjectDialog()::{lambda()#3}::operator()()::sname);
  }
  (*pcVar1)(pCVar13,&ProjectDialog()::{lambda()#3}::operator()()::sname,(String *)&local_58);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  pcVar1 = *(code **)(*(long *)pCVar13 + 0x108);
  create_custom_callable_function_pointer<ProjectDialog>
            ((ProjectDialog *)&local_68,(char *)this,
             (_func_void *)"&ProjectDialog::_renderer_selected");
  (*pcVar1)(pCVar13,SceneStringNames::singleton + 0x238,(CowData<char32_t> *)&local_68,0);
  Callable::~Callable((Callable *)&local_68);
  Node::add_child(pBVar9,pCVar13,0,0);
  cVar3 = String::operator==((String *)&local_98,"gl_compatibility");
  if (cVar3 != '\0') {
    BaseButton::set_pressed(SUB81(pCVar13,0));
  }
  this_03 = (VSeparator *)operator_new(0x9e0,"");
  VSeparator::VSeparator(this_03);
  postinitialize_handler((Object *)this_03);
  Node::add_child(pBVar6,this_03,0,0);
  pBVar9 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar9,true);
  pBVar9[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar9 = &PTR__initialize_classv_00118c70;
  postinitialize_handler((Object *)pBVar9);
  Control::set_h_size_flags(pBVar9,3);
  Node::add_child(pBVar6,pBVar9,0,0);
  pLVar7 = (Label *)operator_new(0xad8,"");
  local_68 = (char *)0x0;
  Label::Label(pLVar7,(String *)&local_68);
  postinitialize_handler((Object *)pLVar7);
  *(Label **)(this + 0xe00) = pLVar7;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  local_58 = __LC107;
  uStack_50 = _UNK_00119da8;
  CanvasItem::set_modulate(*(Color **)(this + 0xe00));
  Node::add_child(pBVar9,*(undefined8 *)(this + 0xe00),0,0);
  pLVar7 = (Label *)operator_new(0xad8,"");
  local_68 = (char *)0x0;
  Label::Label(pLVar7,(String *)&local_68);
  postinitialize_handler((Object *)pLVar7);
  *(Label **)(this + 0xe20) = pLVar7;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  pSVar12 = *(String **)(this + 0xe20);
  plVar14 = (long *)RenderingServer::get_singleton();
  (**(code **)(*plVar14 + 0x1208))((StrRange *)local_78,plVar14);
  local_68 = "";
  local_80 = 0;
  local_60 = 0;
  String::parse_latin1((StrRange *)&local_80);
  local_68 = 
  "RenderingDevice-based methods not available on this GPU:\n%s\nPlease use the Compatibility renderer."
  ;
  local_88 = 0;
  local_60 = 0x62;
  String::parse_latin1((StrRange *)&local_88);
  TTR((String *)&local_68,(String *)&local_88);
  vformat<String>(local_90,(CowData<char32_t> *)&local_68,(StrRange *)local_78);
  Label::set_text(pSVar12);
  CowData<char32_t>::_unref(local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  Label::set_horizontal_alignment(*(undefined8 *)(this + 0xe20),1);
  pVVar2 = *(Vector2 **)(this + 0xe20);
  fVar18 = (float)EditorScale::get_scale();
  local_58 = CONCAT44(fVar18 * _LC100._4_4_,fVar18 * (float)_LC100);
  Control::set_custom_minimum_size(pVVar2);
  Label::set_autowrap_mode(*(undefined8 *)(this + 0xe20),3);
  CanvasItem::set_visible(SUB81(*(undefined8 *)(this + 0xe20),0));
  Node::add_child(*(undefined8 *)(this + 0xdf8),*(undefined8 *)(this + 0xe20),0,0);
  _renderer_selected();
  pLVar7 = (Label *)operator_new(0xad8,"");
  local_68 = (char *)0x0;
  Label::Label(pLVar7,(String *)&local_68);
  postinitialize_handler((Object *)pLVar7);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  local_68 = "";
  local_78[0] = 0;
  local_60 = 0;
  String::parse_latin1((StrRange *)local_78);
  local_68 = "The renderer can be changed later, but scenes may need to be adjusted.";
  local_80 = 0;
  local_60 = 0x46;
  String::parse_latin1((StrRange *)&local_80);
  TTR((String *)&local_68,(String *)&local_80);
  Label::set_text((String *)pLVar7);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  fVar18 = (float)EditorScale::get_scale();
  local_58 = CONCAT44(fVar18 * _LC110._4_4_,fVar18 * (float)_LC110);
  Control::set_custom_minimum_size((Vector2 *)pLVar7);
  Label::set_horizontal_alignment(pLVar7,1);
  Label::set_vertical_alignment(pLVar7,1);
  local_58 = __LC107;
  uStack_50 = _UNK_00119da8;
  CanvasItem::set_modulate((Color *)pLVar7);
  Node::add_child(*(undefined8 *)(this + 0xdf8),pLVar7,0,0);
  pBVar6 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar6,false);
  pBVar6[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar6 = &PTR__initialize_classv_001188f8;
  postinitialize_handler((Object *)pBVar6);
  *(BoxContainer **)(this + 0xe08) = pBVar6;
  Node::add_child(this_00,pBVar6,0,0);
  pLVar7 = (Label *)operator_new(0xad8,"");
  local_68 = (char *)0x0;
  Label::Label(pLVar7,(String *)&local_68);
  postinitialize_handler((Object *)pLVar7);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  local_68 = "";
  local_78[0] = 0;
  local_60 = 0;
  String::parse_latin1((StrRange *)local_78);
  local_68 = "Version Control Metadata:";
  local_80 = 0;
  local_60 = 0x19;
  String::parse_latin1((StrRange *)&local_80);
  TTR((String *)&local_68,(String *)&local_80);
  Label::set_text((String *)pLVar7);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  Node::add_child(*(undefined8 *)(this + 0xe08),pLVar7,0,0);
  this_04 = (OptionButton *)operator_new(0xd00,"");
  local_68 = (char *)0x0;
  OptionButton::OptionButton(this_04,(String *)&local_68);
  postinitialize_handler((Object *)this_04);
  *(OptionButton **)(this + 0xe58) = this_04;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  local_58 = _LC112;
  Control::set_custom_minimum_size(*(Vector2 **)(this + 0xe58));
  local_68 = "";
  local_78[0] = 0;
  pSVar12 = *(String **)(this + 0xe58);
  local_60 = 0;
  String::parse_latin1((StrRange *)local_78);
  local_68 = "None";
  local_80 = 0;
  local_60 = 4;
  String::parse_latin1((StrRange *)&local_80);
  TTR((String *)&local_68,(String *)&local_80);
  iVar5 = (int)(CowData<char32_t> *)&local_68;
  OptionButton::add_item(pSVar12,iVar5);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  local_68 = "";
  local_78[0] = 0;
  pSVar12 = *(String **)(this + 0xe58);
  local_60 = 0;
  String::parse_latin1((StrRange *)local_78);
  local_68 = "Git";
  local_80 = 0;
  local_60 = 3;
  String::parse_latin1((StrRange *)&local_80);
  TTR((String *)&local_68,(String *)&local_80);
  OptionButton::add_item(pSVar12,iVar5);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  OptionButton::select((int)*(undefined8 *)(this + 0xe58));
  Node::add_child(*(undefined8 *)(this + 0xe08),*(undefined8 *)(this + 0xe58),0,0);
  pCVar15 = (Control *)operator_new(0x9c8,"");
  Control::Control(pCVar15);
  postinitialize_handler((Object *)pCVar15);
  Control::set_h_size_flags(pCVar15,3);
  Node::add_child(*(undefined8 *)(this + 0xe08),pCVar15,0,0);
  this_05 = (EditorFileDialog *)operator_new(0x1108,"");
  EditorFileDialog::EditorFileDialog(this_05);
  postinitialize_handler((Object *)this_05);
  *(EditorFileDialog **)(this + 0xe70) = this_05;
  EditorFileDialog::set_previews_enabled(SUB81(this_05,0));
  EditorFileDialog::set_access(*(undefined8 *)(this + 0xe70),2);
  Node::add_child(this,*(undefined8 *)(this + 0xe70),0,0);
  pCVar15 = (Control *)operator_new(0x9c8,"");
  Control::Control(pCVar15);
  postinitialize_handler((Object *)pCVar15);
  Control::set_v_size_flags(pCVar15,3);
  Node::add_child(this_00,pCVar15,0,0);
  pCVar13 = (CheckBox *)operator_new(0xc60,"");
  local_68 = (char *)0x0;
  CheckBox::CheckBox(pCVar13,(String *)&local_68);
  postinitialize_handler((Object *)pCVar13);
  *(CheckBox **)(this + 0xe60) = pCVar13;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  local_68 = "";
  local_78[0] = 0;
  pSVar12 = *(String **)(this + 0xe60);
  local_60 = 0;
  String::parse_latin1((StrRange *)local_78);
  local_68 = "Edit Now";
  local_80 = 0;
  local_60 = 8;
  String::parse_latin1((StrRange *)&local_80);
  TTR((String *)&local_68,(String *)&local_80);
  Button::set_text(pSVar12);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xe60),4);
  BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xe60),0));
  Node::add_child(this_00,*(undefined8 *)(this + 0xe60),0,0);
  plVar14 = *(long **)(this + 0xe30);
  pcVar1 = *(code **)(*plVar14 + 0x108);
  create_custom_callable_function_pointer<ProjectDialog>
            ((ProjectDialog *)&local_68,(char *)this,
             (_func_void *)"&ProjectDialog::_project_name_changed");
  iVar5 = (int)(StrRange *)local_78;
  Callable::unbind(iVar5);
  (*pcVar1)(plVar14,SceneStringNames::singleton + 0x270,(StrRange *)local_78,0);
  Callable::~Callable((Callable *)local_78);
  Callable::~Callable((Callable *)&local_68);
  plVar14 = *(long **)(this + 0xe30);
  pcVar1 = *(code **)(*plVar14 + 0x108);
  create_custom_callable_function_pointer<ProjectDialog>
            ((ProjectDialog *)&local_68,(char *)this,(_func_void *)"&ProjectDialog::ok_pressed");
  Callable::unbind(iVar5);
  (*pcVar1)(plVar14,SceneStringNames::singleton + 0x278,(StrRange *)local_78,0);
  Callable::~Callable((Callable *)local_78);
  Callable::~Callable((Callable *)&local_68);
  plVar14 = *(long **)(this + 0xe38);
  pcVar1 = *(code **)(*plVar14 + 0x108);
  create_custom_callable_function_pointer<ProjectDialog>
            ((ProjectDialog *)&local_68,(char *)this,
             (_func_void *)"&ProjectDialog::_project_path_changed");
  Callable::unbind(iVar5);
  (*pcVar1)(plVar14,SceneStringNames::singleton + 0x270,(StrRange *)local_78,0);
  Callable::~Callable((Callable *)local_78);
  Callable::~Callable((Callable *)&local_68);
  plVar14 = *(long **)(this + 0xe38);
  pcVar1 = *(code **)(*plVar14 + 0x108);
  create_custom_callable_function_pointer<ProjectDialog>
            ((ProjectDialog *)&local_68,(char *)this,(_func_void *)"&ProjectDialog::ok_pressed");
  Callable::unbind(iVar5);
  (*pcVar1)(plVar14,SceneStringNames::singleton + 0x278,(StrRange *)local_78,0);
  Callable::~Callable((Callable *)local_78);
  Callable::~Callable((Callable *)&local_68);
  plVar14 = *(long **)(this + 0xe40);
  pcVar1 = *(code **)(*plVar14 + 0x108);
  create_custom_callable_function_pointer<ProjectDialog>
            ((ProjectDialog *)&local_68,(char *)this,
             (_func_void *)"&ProjectDialog::_install_path_changed");
  Callable::unbind(iVar5);
  (*pcVar1)(plVar14,SceneStringNames::singleton + 0x270,(StrRange *)local_78,0);
  Callable::~Callable((Callable *)local_78);
  Callable::~Callable((Callable *)&local_68);
  plVar14 = *(long **)(this + 0xe40);
  pcVar1 = *(code **)(*plVar14 + 0x108);
  create_custom_callable_function_pointer<ProjectDialog>
            ((ProjectDialog *)&local_68,(char *)this,(_func_void *)"&ProjectDialog::ok_pressed");
  Callable::unbind(iVar5);
  (*pcVar1)(plVar14,SceneStringNames::singleton + 0x278,(StrRange *)local_78,0);
  Callable::~Callable((Callable *)local_78);
  Callable::~Callable((Callable *)&local_68);
  plVar14 = *(long **)(this + 0xe70);
  pcVar1 = *(code **)(*plVar14 + 0x108);
  create_custom_callable_function_pointer<ProjectDialog,String_const&>
            ((ProjectDialog *)&local_68,(char *)this,
             (_func_void_String_ptr *)"&ProjectDialog::_install_path_selected");
  StringName::StringName((StringName *)local_78,"dir_selected",false);
  (*pcVar1)(plVar14,(StrRange *)local_78,(CowData<char32_t> *)&local_68,0);
  if ((StringName::configured != '\0') && (local_78[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_68);
  plVar14 = *(long **)(this + 0xe70);
  pcVar1 = *(code **)(*plVar14 + 0x108);
  create_custom_callable_function_pointer<ProjectDialog,String_const&>
            ((ProjectDialog *)&local_68,(char *)this,
             (_func_void_String_ptr *)"&ProjectDialog::_install_path_selected");
  StringName::StringName((StringName *)local_78,"file_selected",false);
  (*pcVar1)(plVar14,(StrRange *)local_78,(CowData<char32_t> *)&local_68,0);
  if ((StringName::configured != '\0') && (local_78[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_68);
  AcceptDialog::set_hide_on_ok(SUB81(this,0));
  this_06 = (AcceptDialog *)operator_new(0xdb0,"");
  AcceptDialog::AcceptDialog(this_06);
  postinitialize_handler((Object *)this_06);
  *(AcceptDialog **)(this + 0xe78) = this_06;
  Node::add_child(this,this_06,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ProjectDialog::_browse_project_path() */

void __thiscall ProjectDialog::_browse_project_path(ProjectDialog *this)

{
  int iVar1;
  undefined8 uVar2;
  String *pSVar3;
  char cVar4;
  uint uVar5;
  long in_FS_OFFSET;
  char *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  CowData<char32_t> local_78 [8];
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  LineEdit::get_text();
  cVar4 = String::is_relative_path();
  if (cVar4 == '\0') {
    uVar5 = *(uint *)(this + 0xdb8);
    if (uVar5 != 1) goto LAB_001051be;
LAB_00105566:
    cVar4 = CanvasItem::is_visible_in_tree();
    if (cVar4 == '\0') {
      uVar5 = *(uint *)(this + 0xdb8);
      goto LAB_001051be;
    }
    EditorFileDialog::set_current_path(*(String **)(this + 0xe68));
  }
  else {
    local_70 = 0;
    local_68 = "filesystem/directories/default_project_path";
    local_60 = 0x2b;
    String::parse_latin1((StrRange *)&local_70);
    _EDITOR_GET((String *)local_58);
    Variant::operator_cast_to_String((Variant *)&local_68);
    if (local_a0 != local_68) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
      local_a0 = local_68;
      local_68 = (char *)0x0;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    uVar5 = *(uint *)(this + 0xdb8);
    if (uVar5 == 1) goto LAB_00105566;
LAB_001051be:
    if (((uVar5 & 0xfffffffd) == 0) && (cVar4 = BaseButton::is_pressed(), cVar4 != '\0')) {
      pSVar3 = *(String **)(this + 0xe68);
      String::get_base_dir();
      EditorFileDialog::set_current_dir(pSVar3);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      iVar1 = *(int *)(this + 0xdb8);
      uVar2 = *(undefined8 *)(this + 0xe68);
      goto joined_r0x00105284;
    }
    EditorFileDialog::set_current_dir(*(String **)(this + 0xe68));
  }
  iVar1 = *(int *)(this + 0xdb8);
  uVar2 = *(undefined8 *)(this + 0xe68);
joined_r0x00105284:
  if (iVar1 == 1) {
    EditorFileDialog::set_file_mode(uVar2,3);
    EditorFileDialog::clear_filters();
    pSVar3 = *(String **)(this + 0xe68);
    local_90 = 0;
    local_68 = "";
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_90);
    local_68 = "Project";
    local_98 = 0;
    local_60 = 7;
    String::parse_latin1((StrRange *)&local_98);
    TTR((String *)&local_88,(String *)&local_98);
    local_68 = "%s %s";
    local_80 = 0;
    local_60 = 5;
    String::parse_latin1((StrRange *)&local_80);
    vformat<char_const*,String>(local_78,(StrRange *)&local_80,"Godot Engine",(String *)&local_88);
    local_68 = "project.godot";
    local_70 = 0;
    local_60 = 0xd;
    String::parse_latin1((StrRange *)&local_70);
    EditorFileDialog::add_filter(pSVar3,(String *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    CowData<char32_t>::_unref(local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    pSVar3 = *(String **)(this + 0xe68);
    local_80 = 0;
    local_68 = "";
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_80);
    local_68 = "ZIP File";
    local_88 = 0;
    local_60 = 8;
    String::parse_latin1((StrRange *)&local_88);
    TTR((String *)local_78,(String *)&local_88);
    local_68 = "*.zip";
    local_70 = 0;
    local_60 = 5;
    String::parse_latin1((StrRange *)&local_70);
    EditorFileDialog::add_filter(pSVar3,(String *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    CowData<char32_t>::_unref(local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  }
  else {
    EditorFileDialog::set_file_mode(uVar2,2);
  }
  Window::hide();
  EditorFileDialog::popup_file_dialog();
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProjectDialog::ask_for_path_and_show() */

void __thiscall ProjectDialog::ask_for_path_and_show(ProjectDialog *this)

{
  _reset_name(this);
  _browse_project_path(this);
  return;
}



/* ProjectDialog::_update_target_auto_dir() */

void __thiscall ProjectDialog::_update_target_auto_dir(ProjectDialog *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  long in_FS_OFFSET;
  char *local_80;
  char *local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = (char *)0x0;
  if ((*(uint *)(this + 0xdb8) & 0xfffffffd) == 0) {
    LineEdit::get_text();
    if (local_80 != local_68) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      local_80 = local_68;
      local_68 = (char *)0x0;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  }
  else if (*(uint *)(this + 0xdb8) == 1) {
    LineEdit::get_text();
    String::get_file();
    String::get_basename();
    if (local_80 != local_68) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      local_80 = local_68;
      local_68 = (char *)0x0;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  }
  local_68 = "project_manager/directory_naming_convention";
  local_70 = 0;
  local_60 = 0x2b;
  String::parse_latin1((StrRange *)&local_70);
  _EDITOR_GET((String *)local_58);
  iVar3 = Variant::operator_cast_to_int((Variant *)local_58);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  switch(iVar3) {
  case 0:
    goto switchD_001056a1_caseD_0;
  case 1:
    String::to_lower();
    String::replace((char *)&local_68,(char *)&local_70);
    if (local_80 != local_68) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      local_80 = local_68;
      local_68 = (char *)0x0;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    goto switchD_001056a1_caseD_0;
  case 2:
    String::to_snake_case();
    if (local_80 != local_68) {
LAB_001056bf:
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      local_80 = local_68;
      local_68 = (char *)0x0;
    }
    break;
  case 3:
    String::to_camel_case();
    if (local_80 != local_68) goto LAB_001056bf;
    break;
  case 4:
    String::to_pascal_case();
    if (local_80 != local_68) goto LAB_001056bf;
    break;
  case 5:
    String::capitalize();
    if (local_80 != local_68) goto LAB_001056bf;
    break;
  default:
    _err_print_error("_update_target_auto_dir","editor/project_manager/project_dialog.cpp",0x127,
                     "Method/function failed.","Invalid directory naming convention.",0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    goto LAB_0010575f;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
switchD_001056a1_caseD_0:
  bVar1 = (bool)OS::get_singleton();
  OS::get_safe_dir_name((String *)&local_68,bVar1);
  if (local_80 != local_68) {
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    local_80 = local_68;
    local_68 = (char *)0x0;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  cVar2 = BaseButton::is_pressed();
  if (cVar2 != '\0') {
    _get_target_path();
    String::get_file();
    cVar2 = String::operator==((String *)&local_68,(String *)(this + 0xe90));
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    if (cVar2 != '\0') {
      String::get_base_dir();
      String::path_join((String *)&local_68);
      if (local_78 != local_68) {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
        local_78 = local_68;
        local_68 = (char *)0x0;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    }
    _set_target_path(this,(String *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  }
  if (*(char **)(this + 0xe90) != local_80) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0xe90),(CowData *)&local_80);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
LAB_0010575f:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ProjectDialog::_bind_methods() */

void ProjectDialog::_bind_methods(void)

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
  local_d0 = 0;
  local_b0 = 0xf;
  local_b8 = "project_created";
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
  _local_a8 = (undefined1  [16])0x0;
  if (local_d0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_d0);
  }
  local_d8 = 0;
  local_c0 = 0xd;
  local_c8 = "ProjectDialog";
  String::parse_latin1((StrRange *)&local_d8);
  StringName::StringName((StringName *)&local_c8,(String *)&local_d8,false);
  ClassDB::add_signal((StringName *)&local_c8,(MethodInfo *)&local_b8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (lStack_a0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref(local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  local_d0 = 0;
  local_b8 = "projects_updated";
  local_b0 = 0x10;
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
  _local_a8 = (undefined1  [16])0x0;
  if (local_d0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_d0);
  }
  local_c8 = "ProjectDialog";
  local_d8 = 0;
  local_c0 = 0xd;
  String::parse_latin1((StrRange *)&local_d8);
  StringName::StringName((StringName *)&local_c8,(String *)&local_d8,false);
  ClassDB::add_signal((StringName *)&local_c8,(MethodInfo *)&local_b8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (lStack_a0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref(local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProjectDialog::_validate_path() */

void __thiscall ProjectDialog::_validate_path(ProjectDialog *this)

{
  CowData<char32_t> *pCVar1;
  Object *pOVar2;
  CowData *pCVar3;
  int *piVar4;
  undefined1 *puVar5;
  char cVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  undefined4 uVar10;
  long *plVar11;
  long lVar12;
  code *pcVar13;
  undefined8 uVar14;
  StrRange *this_00;
  undefined1 *puVar15;
  CowData<char32_t> *this_01;
  char *pcVar16;
  String *pSVar17;
  long in_FS_OFFSET;
  undefined1 local_4030 [16384];
  
  puVar5 = &stack0xffffffffffffffd0;
  do {
    puVar15 = puVar5;
    *(undefined8 *)(puVar15 + -0x1000) = *(undefined8 *)(puVar15 + -0x1000);
    puVar5 = puVar15 + -0x1000;
  } while (puVar15 + -0x1000 != local_4030);
  *(undefined8 *)(puVar15 + 0x2ff0) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  this_00 = (StrRange *)(puVar15 + -0x10f8);
  this_01 = (CowData<char32_t> *)(puVar15 + -0x10a8);
  *(undefined8 *)(puVar15 + -0x10f8) = 0;
  *(undefined **)(puVar15 + -0x10a8) = &_LC24;
  *(undefined8 *)(puVar15 + -0x10a0) = 0;
  *(undefined8 *)(puVar15 + -0x11a0) = 0x105fa6;
  String::parse_latin1(this_00);
  *(undefined8 *)(puVar15 + -0x11a0) = 0x105fb8;
  _set_message(this,this_00,2,0);
  *(undefined8 *)(puVar15 + -0x11a0) = 0x105fc0;
  CowData<char32_t>::_unref((CowData<char32_t> *)this_00);
  *(undefined8 *)(puVar15 + -0x10f8) = 0;
  *(undefined **)(puVar15 + -0x10a8) = &_LC24;
  *(undefined8 *)(puVar15 + -0x10a0) = 0;
  *(undefined8 *)(puVar15 + -0x11a0) = 0x105feb;
  String::parse_latin1(this_00);
  *(undefined8 *)(puVar15 + -0x11a0) = 0x106000;
  _set_message(this,this_00,2,1);
  *(undefined8 *)(puVar15 + -0x11a0) = 0x106008;
  CowData<char32_t>::_unref((CowData<char32_t> *)this_00);
  *(undefined8 *)(puVar15 + -0x11a0) = 0x106018;
  LineEdit::get_text();
  *(undefined8 *)(puVar15 + -0x11a0) = 0x10602d;
  bVar7 = SUB81(this_01,0);
  String::strip_edges(bVar7,SUB81(this_00,0));
  if ((*(long *)(puVar15 + -0x10a8) == 0) ||
     (iVar9 = (int)*(undefined8 *)(*(long *)(puVar15 + -0x10a8) + -8), iVar9 == 0)) {
    *(undefined8 *)(puVar15 + -0x11a0) = 0x1062bd;
    CowData<char32_t>::_unref(this_01);
    *(undefined8 *)(puVar15 + -0x11a0) = 0x1062c5;
    CowData<char32_t>::_unref((CowData<char32_t> *)this_00);
  }
  else {
    *(undefined8 *)(puVar15 + -0x11a0) = 0x106053;
    CowData<char32_t>::_unref(this_01);
    *(undefined8 *)(puVar15 + -0x11a0) = 0x10605b;
    CowData<char32_t>::_unref((CowData<char32_t> *)this_00);
    if (iVar9 != 1) {
      *(undefined1 **)(puVar15 + -0x1170) = puVar15 + -0x1140;
      *(undefined8 *)(puVar15 + -0x11a0) = 0x106081;
      DirAccess::create(puVar15 + -0x1140,2);
      *(undefined8 *)(puVar15 + -0x11a0) = 0x106091;
      LineEdit::get_text();
      *(CowData **)(puVar15 + -0x1188) = (CowData *)(puVar15 + -0x1138);
      *(undefined8 *)(puVar15 + -0x11a0) = 0x1060a1;
      String::simplify_path();
      *(undefined8 *)(puVar15 + -0x11a0) = 0x1060a9;
      CowData<char32_t>::_unref(this_01);
      *(undefined8 *)(puVar15 + -0x1130) = 0;
      *(CowData<char32_t> **)(puVar15 + -0x1190) = (CowData<char32_t> *)(puVar15 + -0x1130);
      if (*(long *)(puVar15 + -0x1138) != 0) {
        *(undefined8 *)(puVar15 + -0x11a0) = 0x1060cf;
        CowData<char32_t>::_ref
                  ((CowData<char32_t> *)(puVar15 + -0x1130),(CowData *)(puVar15 + -0x1138));
      }
      iVar9 = *(int *)(this + 0xdb8);
      *(int *)(puVar15 + -0x1180) = iVar9;
      if (iVar9 == 1) {
        *(undefined8 *)(puVar15 + -0x11a0) = 0x106595;
        String::get_file();
        *(undefined8 *)(puVar15 + -0x11a0) = 0x1065aa;
        String::strip_edges(bVar7,SUB81(this_00,0));
        *(undefined8 *)(puVar15 + -0x11a0) = 0x1065b9;
        cVar6 = String::operator==((String *)this_01,"project.godot");
        *(undefined8 *)(puVar15 + -0x11a0) = 0x1065c4;
        CowData<char32_t>::_unref(this_01);
        *(undefined8 *)(puVar15 + -0x11a0) = 0x1065cc;
        CowData<char32_t>::_unref((CowData<char32_t> *)this_00);
        if (cVar6 != '\0') {
          pCVar1 = *(CowData<char32_t> **)(puVar15 + -0x1188);
          *(undefined8 *)(puVar15 + -0x11a0) = 0x106bb0;
          String::get_base_dir();
          if (*(long *)(puVar15 + -0x1138) != *(long *)(puVar15 + -0x10a8)) {
            *(undefined8 *)(puVar15 + -0x11a0) = 0x106bc7;
            CowData<char32_t>::_unref(pCVar1);
            uVar14 = *(undefined8 *)(puVar15 + -0x10a8);
            *(undefined8 *)(puVar15 + -0x10a8) = 0;
            *(undefined8 *)(puVar15 + -0x1138) = uVar14;
          }
          *(undefined8 *)(puVar15 + -0x11a0) = 0x106be8;
          CowData<char32_t>::_unref(this_01);
          *(undefined8 *)(puVar15 + -0x10a8) = 0;
          uVar14 = *(undefined8 *)(this + 0xe38);
          if (*(long *)(puVar15 + -0x1138) != 0) {
            *(undefined8 *)(puVar15 + -0x11a0) = 0x106c11;
            CowData<char32_t>::_ref(this_01,*(CowData **)(puVar15 + -0x1188));
          }
          *(undefined8 *)(puVar15 + -0x11a0) = 0x106c1c;
          LineEdit::set_text(uVar14,this_01);
          *(undefined8 *)(puVar15 + -0x11a0) = 0x106c24;
          CowData<char32_t>::_unref(this_01);
        }
        *(undefined8 *)(puVar15 + -0x10f8) = 0;
        if (*(long *)(puVar15 + -0x1140) != 0) {
          *(undefined8 *)(puVar15 + -0x10a8) = 0;
          *(long *)(puVar15 + -0x10f8) = *(long *)(puVar15 + -0x1140);
          *(undefined8 *)(puVar15 + -0x11a0) = 0x106604;
          cVar6 = RefCounted::reference();
          if (cVar6 == '\0') {
            *(undefined8 *)(puVar15 + -0x10f8) = 0;
          }
          *(undefined8 *)(puVar15 + -0x11a0) = 0x10661c;
          Ref<DirAccess>::unref((Ref<DirAccess> *)this_01);
        }
        pCVar3 = *(CowData **)(puVar15 + -0x1188);
        *(undefined8 *)(puVar15 + -0x11a0) = 0x10662c;
        cVar6 = is_zip_file(this_00,pCVar3);
        *(undefined8 *)(puVar15 + -0x11a0) = 0x106637;
        Ref<DirAccess>::unref((Ref<DirAccess> *)this_00);
        if (cVar6 == '\0') {
          pCVar1 = (CowData<char32_t> *)(puVar15 + -0x1100);
          *(undefined8 *)(puVar15 + -0x11a0) = 0x106ac7;
          String::strip_edges(SUB81(pCVar1,0),SUB81(*(undefined8 *)(puVar15 + -0x1188),0));
          *(undefined8 *)(puVar15 + -0x10f8) = 0;
          if (*(long *)(puVar15 + -0x1140) != 0) {
            *(undefined8 *)(puVar15 + -0x10a8) = 0;
            *(long *)(puVar15 + -0x10f8) = *(long *)(puVar15 + -0x1140);
            *(undefined8 *)(puVar15 + -0x11a0) = 0x106af6;
            cVar6 = RefCounted::reference();
            if (cVar6 == '\0') {
              *(undefined8 *)(puVar15 + -0x10f8) = 0;
            }
            *(undefined8 *)(puVar15 + -0x11a0) = 0x106b0e;
            Ref<DirAccess>::unref((Ref<DirAccess> *)this_01);
          }
          *(undefined8 *)(puVar15 + -0x11a0) = 0x106b19;
          cVar6 = is_zip_file(this_00,pCVar1);
          *(undefined8 *)(puVar15 + -0x11a0) = 0x106b24;
          Ref<DirAccess>::unref((Ref<DirAccess> *)this_00);
          *(undefined8 *)(puVar15 + -0x11a0) = 0x106b2c;
          CowData<char32_t>::_unref(pCVar1);
          if (cVar6 == '\0') {
            *(undefined8 *)(puVar15 + -0x11a0) = 0x106c40;
            String::parse_latin1((String *)(this + 0xe80),"");
            lVar12 = *(long *)(this + 0xe80);
          }
          else {
            *(undefined8 *)(puVar15 + -0x11a0) = 0x106b4c;
            String::strip_edges(bVar7,SUB81(*(undefined8 *)(puVar15 + -0x1188),0));
            if (*(long *)(this + 0xe80) != *(long *)(puVar15 + -0x10a8)) {
              *(undefined8 *)(puVar15 + -0x11a0) = 0x106b6b;
              CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xe80));
              uVar14 = *(undefined8 *)(puVar15 + -0x10a8);
              *(undefined8 *)(puVar15 + -0x10a8) = 0;
              *(undefined8 *)(this + 0xe80) = uVar14;
            }
            *(undefined8 *)(puVar15 + -0x11a0) = 0x106b8f;
            CowData<char32_t>::_unref(this_01);
            lVar12 = *(long *)(this + 0xe80);
          }
        }
        else {
          lVar12 = *(long *)(puVar15 + -0x1138);
          if (*(long *)(this + 0xe80) != lVar12) {
            *(undefined8 *)(puVar15 + -0x11a0) = 0x10665f;
            CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0xe80),pCVar3);
            lVar12 = *(long *)(this + 0xe80);
          }
        }
        if ((lVar12 == 0) || (*(uint *)(lVar12 + -8) < 2)) {
          plVar11 = *(long **)(puVar15 + -0x1140);
          pCVar1 = (CowData<char32_t> *)(puVar15 + -0x1100);
          pcVar13 = *(code **)(*plVar11 + 0x1d8);
          *(undefined8 *)(puVar15 + -0x1100) = 0;
          if (*(long *)(puVar15 + -0x1138) != 0) {
            *(code **)(puVar15 + -0x1180) = pcVar13;
            *(undefined8 *)(puVar15 + -0x11a0) = 0x1066b3;
            CowData<char32_t>::_ref(pCVar1,*(CowData **)(puVar15 + -0x1188));
            pcVar13 = *(code **)(puVar15 + -0x1180);
          }
          *(undefined8 *)(puVar15 + -0x11a0) = 0x1066c0;
          cVar6 = (*pcVar13)(plVar11,pCVar1);
          if (cVar6 == '\0') {
            *(undefined8 *)(puVar15 + -0x11a0) = 0x1066d0;
            CowData<char32_t>::_unref(pCVar1);
          }
          else {
            plVar11 = *(long **)(puVar15 + -0x1140);
            uVar14 = *(undefined8 *)(*plVar11 + 0x1d0);
            *(undefined8 *)(puVar15 + -0x10f8) = 0;
            *(undefined8 *)(puVar15 + -0x1180) = uVar14;
            *(undefined8 *)(puVar15 + -0x11a0) = 0x10679f;
            String::parse_latin1((String *)this_00,"project.godot");
            *(undefined8 *)(puVar15 + -0x11a0) = 0x1067af;
            String::path_join((String *)this_01);
            *(undefined8 *)(puVar15 + -0x11a0) = 0x1067bc;
            cVar6 = (**(code **)(puVar15 + -0x1180))(plVar11,this_01);
            *(undefined8 *)(puVar15 + -0x11a0) = 0x1067c7;
            CowData<char32_t>::_unref(this_01);
            *(undefined8 *)(puVar15 + -0x11a0) = 0x1067cf;
            CowData<char32_t>::_unref((CowData<char32_t> *)this_00);
            *(undefined8 *)(puVar15 + -0x11a0) = 0x1067d7;
            CowData<char32_t>::_unref(pCVar1);
            if (cVar6 != '\0') {
              *(undefined8 *)(puVar15 + -0x11a0) = 0x1067f0;
              String::parse_latin1((String *)(this + 0xe80),"");
              *(undefined8 *)(puVar15 + -0x11a0) = 0x1067fd;
              CanvasItem::hide();
              *(undefined8 *)(puVar15 + -0x11a0) = 0x10680a;
              CanvasItem::hide();
              *(undefined8 *)(puVar15 + -0x10f8) = 0;
              *(undefined8 *)(puVar15 + -0x11a0) = 0x106821;
              String::parse_latin1((String *)this_00,"");
              *(undefined8 *)(puVar15 + -0x1100) = 0;
              *(undefined8 *)(puVar15 + -0x11a0) = 0x10683c;
              String::parse_latin1((String *)pCVar1,"Valid project found at path.");
              *(undefined8 *)(puVar15 + -0x11a0) = 0x10684a;
              TTR((String *)this_01,(String *)pCVar1);
              *(undefined8 *)(puVar15 + -0x11a0) = 0x10685c;
              _set_message(this,this_01,2,0);
              *(undefined8 *)(puVar15 + -0x11a0) = 0x106864;
              CowData<char32_t>::_unref(this_01);
              *(undefined8 *)(puVar15 + -0x11a0) = 0x10686c;
              CowData<char32_t>::_unref(pCVar1);
              *(undefined8 *)(puVar15 + -0x11a0) = 0x106874;
              CowData<char32_t>::_unref((CowData<char32_t> *)this_00);
              goto LAB_001060ec;
            }
          }
          *(undefined8 *)(puVar15 + -0x11a0) = 0x1066dd;
          CanvasItem::hide();
          *(undefined8 *)(puVar15 + -0x11a0) = 0x1066ea;
          CanvasItem::hide();
          *(undefined8 *)(puVar15 + -0x10f8) = 0;
          *(undefined8 *)(puVar15 + -0x11a0) = 0x106701;
          String::parse_latin1((String *)this_00,"");
          *(undefined8 *)(puVar15 + -0x1100) = 0;
          *(undefined8 *)(puVar15 + -0x11a0) = 0x10671c;
          String::parse_latin1
                    ((String *)pCVar1,
                     "Please choose a \"project.godot\", a directory with one, or a \".zip\" file.")
          ;
          *(undefined8 *)(puVar15 + -0x11a0) = 0x10672a;
          TTR((String *)this_01,(String *)pCVar1);
          uVar10 = 0;
          goto LAB_001063a4;
        }
        *(undefined8 *)(puVar15 + -0x11a0) = 0x106890;
        LineEdit::get_text();
        *(undefined8 *)(puVar15 + -0x11a0) = 0x10689b;
        String::simplify_path();
        if (*(long *)(puVar15 + -0x1130) != *(long *)(puVar15 + -0x10a8)) {
          *(undefined8 *)(puVar15 + -0x11a0) = 0x1068b4;
          CowData<char32_t>::_unref(*(CowData<char32_t> **)(puVar15 + -0x1190));
          uVar14 = *(undefined8 *)(puVar15 + -0x10a8);
          *(undefined8 *)(puVar15 + -0x10a8) = 0;
          *(undefined8 *)(puVar15 + -0x1130) = uVar14;
        }
        *(undefined8 *)(puVar15 + -0x11a0) = 0x1068d5;
        CowData<char32_t>::_unref(this_01);
        *(undefined8 *)(puVar15 + -0x11a0) = 0x1068dd;
        CowData<char32_t>::_unref((CowData<char32_t> *)this_00);
        *(undefined8 *)(puVar15 + -0x11a0) = 0x1068ea;
        CanvasItem::show();
        *(undefined8 *)(puVar15 + -0x11a0) = 0x1068f7;
        CanvasItem::show();
        *(undefined8 *)(puVar15 + -0x1110) = 0;
        *(undefined1 **)(puVar15 + -0x1168) = puVar15 + -0x1110;
        *(undefined8 *)(puVar15 + -0x11a0) = 0x10691b;
        zipio_create_io(this_00);
        *(undefined8 *)(puVar15 + -0x11a0) = 0x10692b;
        String::utf8();
        *(undefined8 *)(puVar15 + -0x11a0) = 0x106933;
        uVar14 = CharString::get_data();
        *(undefined8 *)(puVar15 + -0x11a0) = 0x10693e;
        uVar14 = unzOpen2(uVar14);
        *(undefined8 *)(puVar15 + -0x1160) = uVar14;
        if (*(long *)(puVar15 + -0x10a8) != 0) {
          LOCK();
          plVar11 = (long *)(*(long *)(puVar15 + -0x10a8) + -0x10);
          *plVar11 = *plVar11 + -1;
          UNLOCK();
          if (*plVar11 == 0) {
            lVar12 = *(long *)(puVar15 + -0x10a8);
            *(undefined8 *)(puVar15 + -0x10a8) = 0;
            *(undefined8 *)(puVar15 + -0x11a0) = 0x106977;
            Memory::free_static((void *)(lVar12 + -0x10),false);
          }
        }
        if (*(long *)(puVar15 + -0x1160) == 0) {
          pSVar17 = (String *)(puVar15 + -0x1108);
          *(undefined8 *)(puVar15 + -0x1100) = 0;
          *(undefined8 *)(puVar15 + -0x11a0) = 0x106f4f;
          String::parse_latin1((String *)(puVar15 + -0x1100),"");
          *(undefined8 *)(puVar15 + -0x1108) = 0;
          *(undefined8 *)(puVar15 + -0x11a0) = 0x106f6a;
          String::parse_latin1(pSVar17,"Invalid \".zip\" project file; it is not in ZIP format.");
          *(undefined8 *)(puVar15 + -0x11a0) = 0x106f78;
          TTR((String *)this_01,pSVar17);
          *(undefined8 *)(puVar15 + -0x11a0) = 0x106f87;
          _set_message(this,this_01,0,0);
          *(undefined8 *)(puVar15 + -0x11a0) = 0x106f8f;
          CowData<char32_t>::_unref(this_01);
          *(undefined8 *)(puVar15 + -0x11a0) = 0x106f97;
          CowData<char32_t>::_unref((CowData<char32_t> *)pSVar17);
          *(undefined8 *)(puVar15 + -0x11a0) = 0x106f9f;
          CowData<char32_t>::_unref((CowData<char32_t> *)(puVar15 + -0x1100));
          *(undefined8 *)(puVar15 + -0x11a0) = 0x106fa6;
          unzClose(0);
        }
        else {
          uVar14 = *(undefined8 *)(puVar15 + -0x1160);
          *(undefined8 *)(puVar15 + -0x11a0) = 0x106990;
          iVar9 = unzGoToFirstFile(uVar14);
          if (iVar9 == 0) {
            *(ProjectDialog **)(puVar15 + -0x1158) = this;
            *(StrRange **)(puVar15 + -0x1150) = this_00;
            *(CowData<char32_t> **)(puVar15 + -0x1178) = this_01;
            do {
              *(undefined8 *)(puVar15 + -0x11a0) = 0;
              *(undefined8 *)(puVar15 + -0x11a8) = 0;
              *(undefined8 *)(puVar15 + -0x11b0) = 0x106a5b;
              iVar9 = unzGetCurrentFileInfo
                                (uVar14,*(undefined8 *)(puVar15 + -0x1178),puVar15 + -0x1018,0x4000,
                                 0,0);
              if (iVar9 != 0) {
                *(undefined8 *)(puVar15 + -0x11a8) = 0;
                *(undefined8 *)(puVar15 + -0x11b0) = 0x106a94;
                _err_print_error("_validate_path","editor/project_manager/project_dialog.cpp",0x84,
                                 "Condition \"ret != (0)\" is true.",
                                 "Failed to get current file info.",0);
                goto LAB_00106a96;
              }
              pCVar1 = (CowData<char32_t> *)(puVar15 + -0x1108);
              *(undefined8 *)(puVar15 + -0x11a0) = 0x1069d8;
              String::utf8((char *)pCVar1,(int)(puVar15 + -0x1018));
              *(undefined8 *)(puVar15 + -0x11a0) = 0x1069e7;
              cVar6 = String::begins_with((char *)pCVar1);
              if (cVar6 == '\0') {
                *(undefined8 *)(puVar15 + -0x11a0) = 0x1069fe;
                String::get_file();
                *(undefined8 *)(puVar15 + -0x11a0) = 0x106a0d;
                cVar6 = String::operator==((String *)(puVar15 + -0x1100),"project.godot");
                *(undefined8 *)(puVar15 + -0x11a0) = 0x106a17;
                CowData<char32_t>::_unref((CowData<char32_t> *)(puVar15 + -0x1100));
                if (cVar6 != '\0') {
                  this = *(ProjectDialog **)(puVar15 + -0x1158);
                  this_00 = *(StrRange **)(puVar15 + -0x1150);
                  this_01 = *(CowData<char32_t> **)(puVar15 + -0x1178);
                  *(undefined8 *)(puVar15 + -0x11a0) = 0x10709c;
                  CowData<char32_t>::_unref(pCVar1);
                  goto LAB_0010709c;
                }
              }
              *(undefined8 *)(puVar15 + -0x11a0) = 0x106a28;
              iVar9 = unzGoToNextFile(uVar14);
              *(undefined8 *)(puVar15 + -0x11a0) = 0x106a33;
              CowData<char32_t>::_unref(pCVar1);
            } while (iVar9 == 0);
            this = *(ProjectDialog **)(puVar15 + -0x1158);
            this_00 = *(StrRange **)(puVar15 + -0x1150);
            this_01 = *(CowData<char32_t> **)(puVar15 + -0x1178);
          }
          if (iVar9 != -100) {
LAB_0010709c:
            *(undefined8 *)(puVar15 + -0x11a0) = 0x1070a6;
            unzClose(*(undefined8 *)(puVar15 + -0x1160));
            *(undefined8 *)(puVar15 + -0x11a0) = 0x1070b0;
            Ref<FileAccess>::unref(*(Ref<FileAccess> **)(puVar15 + -0x1168));
            goto LAB_001060f4;
          }
          pSVar17 = (String *)(puVar15 + -0x1108);
          *(undefined8 *)(puVar15 + -0x1100) = 0;
          *(undefined8 *)(puVar15 + -0x11a0) = 0x106ec9;
          String::parse_latin1((String *)(puVar15 + -0x1100),"");
          *(undefined8 *)(puVar15 + -0x1108) = 0;
          *(undefined8 *)(puVar15 + -0x11a0) = 0x106ee4;
          String::parse_latin1
                    (pSVar17,
                     "Invalid \".zip\" project file; it doesn\'t contain a \"project.godot\" file.")
          ;
          *(undefined8 *)(puVar15 + -0x11a0) = 0x106ef2;
          TTR((String *)this_01,pSVar17);
          *(undefined8 *)(puVar15 + -0x11a0) = 0x106f01;
          _set_message(this,this_01,0,0);
          *(undefined8 *)(puVar15 + -0x11a0) = 0x106f09;
          CowData<char32_t>::_unref(this_01);
          *(undefined8 *)(puVar15 + -0x11a0) = 0x106f11;
          CowData<char32_t>::_unref((CowData<char32_t> *)pSVar17);
          *(undefined8 *)(puVar15 + -0x11a0) = 0x106f19;
          CowData<char32_t>::_unref((CowData<char32_t> *)(puVar15 + -0x1100));
          *(undefined8 *)(puVar15 + -0x11a0) = 0x106f23;
          unzClose(*(undefined8 *)(puVar15 + -0x1160));
        }
LAB_00106a96:
        *(undefined8 *)(puVar15 + -0x11a0) = 0x106aa0;
        Ref<FileAccess>::unref(*(Ref<FileAccess> **)(puVar15 + -0x1168));
      }
      else {
LAB_001060ec:
        *(undefined4 *)(puVar15 + -0x1180) = 0;
LAB_001060f4:
        pSVar17 = (String *)(puVar15 + -0x1100);
        *(undefined8 *)(puVar15 + -0x11a0) = 0x1060fe;
        cVar6 = String::is_relative_path();
        if (cVar6 == '\0') {
          *(undefined8 *)(puVar15 + -0x11a0) = 0x10610b;
          bVar7 = (bool)OS::get_singleton();
          *(undefined8 *)(puVar15 + -0x11a0) = 0x10611b;
          String::get_file();
          *(undefined8 *)(puVar15 + -0x11a0) = 0x10612b;
          OS::get_safe_dir_name((String *)this_01,bVar7);
          *(undefined8 *)(puVar15 + -0x11a0) = 0x106138;
          String::get_file();
          *(undefined8 *)(puVar15 + -0x11a0) = 0x106143;
          cVar6 = String::operator!=(pSVar17,(String *)this_01);
          *(undefined8 *)(puVar15 + -0x11a0) = 0x10614e;
          CowData<char32_t>::_unref((CowData<char32_t> *)pSVar17);
          *(undefined8 *)(puVar15 + -0x11a0) = 0x106156;
          CowData<char32_t>::_unref(this_01);
          *(undefined8 *)(puVar15 + -0x11a0) = 0x10615e;
          CowData<char32_t>::_unref((CowData<char32_t> *)this_00);
          if (cVar6 == '\0') {
            pCVar1 = (CowData<char32_t> *)(puVar15 + -0x1128);
            pcVar13 = *(code **)(**(long **)(puVar15 + -0x1140) + 0x1b0);
            *(undefined8 *)(puVar15 + -0x11a0) = 0x106182;
            (*pcVar13)(pCVar1,*(long **)(puVar15 + -0x1140),1);
            *(undefined8 *)(puVar15 + -0x11a0) = 0x106187;
            plVar11 = (long *)OS::get_singleton();
            pcVar13 = *(code **)(*plVar11 + 0x100);
            *(undefined8 *)(puVar15 + -0x11a0) = 0x106196;
            (*pcVar13)(this_01,plVar11);
            *(undefined1 **)(puVar15 + -0x1178) = puVar15 + -0x1120;
            *(undefined8 *)(puVar15 + -0x11a0) = 0x1061ab;
            String::get_base_dir();
            *(undefined8 *)(puVar15 + -0x11a0) = 0x1061b3;
            CowData<char32_t>::_unref(this_01);
            *(undefined8 *)(puVar15 + -0x11a0) = 0x1061c0;
            cVar6 = String::operator==(*(String **)(puVar15 + -0x1190),(String *)pCVar1);
            if (cVar6 == '\0') {
              *(undefined8 *)(puVar15 + -0x11a0) = 0x1061d3;
              cVar6 = String::operator==(*(String **)(puVar15 + -0x1190),
                                         *(String **)(puVar15 + -0x1178));
              if (cVar6 != '\0') goto LAB_001061db;
              *(undefined8 *)(puVar15 + -0x11a0) = 0x1063d5;
              plVar11 = (long *)OS::get_singleton();
              lVar12 = *plVar11;
              *(long **)(puVar15 + -0x1160) = plVar11;
              uVar14 = *(undefined8 *)(lVar12 + 0x170);
              *(undefined8 *)(puVar15 + -0x10a8) = 0;
              *(undefined8 *)(puVar15 + -0x1168) = uVar14;
              *(undefined8 *)(puVar15 + -0x11a0) = 0x106404;
              String::parse_latin1((String *)this_01,"HOME");
              uVar14 = *(undefined8 *)(puVar15 + -0x1160);
              *(undefined1 **)(puVar15 + -0x1160) = puVar15 + -0x1118;
              *(undefined8 *)(puVar15 + -0x11a0) = 0x106423;
              (**(code **)(puVar15 + -0x1168))(puVar15 + -0x1118,uVar14,this_01);
              *(undefined8 *)(puVar15 + -0x11a0) = 0x10642b;
              CowData<char32_t>::_unref(this_01);
              *(undefined8 *)(puVar15 + -0x11a0) = 0x106430;
              plVar11 = (long *)OS::get_singleton();
              lVar12 = *plVar11;
              *(undefined1 **)(puVar15 + -0x1168) = puVar15 + -0x1110;
              pcVar13 = *(code **)(lVar12 + 0x2b8);
              *(undefined8 *)(puVar15 + -0x11a0) = 0x106459;
              (*pcVar13)(puVar15 + -0x1110,plVar11,2,1);
              *(undefined8 *)(puVar15 + -0x11a0) = 0x106468;
              cVar6 = String::operator==(*(String **)(puVar15 + -0x1190),
                                         *(String **)(puVar15 + -0x1160));
              if (cVar6 == '\0') {
                *(undefined8 *)(puVar15 + -0x11a0) = 0x10647f;
                cVar6 = String::operator==(*(String **)(puVar15 + -0x1190),
                                           *(String **)(puVar15 + -0x1168));
                if (cVar6 != '\0') goto LAB_00106500;
                this[0xdbc] = (ProjectDialog)0x1;
                if (((*(uint *)(this + 0xdb8) & 0xfffffffd) != 0) &&
                   ((*(uint *)(this + 0xdb8) != 1 || ((puVar15[-0x1180] & 1) == 0)))) {
LAB_001064af:
                  *(undefined8 *)(puVar15 + -0x11a0) = 0x1064b9;
                  CowData<char32_t>::_unref(*(CowData<char32_t> **)(puVar15 + -0x1168));
                  *(undefined8 *)(puVar15 + -0x11a0) = 0x1064c3;
                  CowData<char32_t>::_unref(*(CowData<char32_t> **)(puVar15 + -0x1160));
                  *(undefined8 *)(puVar15 + -0x11a0) = 0x1064cd;
                  CowData<char32_t>::_unref(*(CowData<char32_t> **)(puVar15 + -0x1178));
                  *(undefined8 *)(puVar15 + -0x11a0) = 0x1064d5;
                  CowData<char32_t>::_unref(pCVar1);
                  *(undefined8 *)(puVar15 + -0x11a0) = 0x1064df;
                  CowData<char32_t>::_unref(*(CowData<char32_t> **)(puVar15 + -0x1190));
                  *(undefined8 *)(puVar15 + -0x11a0) = 0x1064e9;
                  CowData<char32_t>::_unref(*(CowData<char32_t> **)(puVar15 + -0x1188));
                  *(undefined8 *)(puVar15 + -0x11a0) = 0x1064f3;
                  Ref<DirAccess>::unref(*(Ref<DirAccess> **)(puVar15 + -0x1170));
                  goto LAB_00106334;
                }
                *(undefined8 *)(puVar15 + -0x11a0) = 0x106c5d;
                cVar6 = BaseButton::is_pressed();
                plVar11 = *(long **)(puVar15 + -0x1140);
                if (cVar6 == '\0') {
                  pcVar13 = *(code **)(*plVar11 + 0x1d8);
                  *(undefined8 *)(puVar15 + -0x10a8) = 0;
                  if (*(long *)(puVar15 + -0x1130) != 0) {
                    *(long **)(puVar15 + -0x1150) = plVar11;
                    *(code **)(puVar15 + -0x1158) = pcVar13;
                    *(undefined8 *)(puVar15 + -0x11a0) = 0x106c9f;
                    CowData<char32_t>::_ref(this_01,*(CowData **)(puVar15 + -0x1190));
                    plVar11 = *(long **)(puVar15 + -0x1150);
                    pcVar13 = *(code **)(puVar15 + -0x1158);
                  }
                  *(undefined8 *)(puVar15 + -0x11a0) = 0x106cb1;
                  uVar8 = (*pcVar13)(plVar11,this_01);
                  puVar15[-0x1158] = uVar8;
                  *(undefined8 *)(puVar15 + -0x11a0) = 0x106cbd;
                  CowData<char32_t>::_unref(this_01);
                  *(undefined8 *)(puVar15 + -0x10f8) = 0;
                  if (puVar15[-0x1158] != '\0') {
                    *(undefined8 *)(puVar15 + -0x11a0) = 0x106ce1;
                    String::parse_latin1((String *)this_00,"");
                    pcVar16 = "The project folder exists and is empty.";
                    *(undefined8 *)(puVar15 + -0x1100) = 0;
LAB_00106cf4:
                    *(undefined8 *)(puVar15 + -0x11a0) = 0x106cfc;
                    String::parse_latin1(pSVar17,pcVar16);
                    *(undefined8 *)(puVar15 + -0x11a0) = 0x106d0a;
                    TTR((String *)this_01,pSVar17);
                    *(undefined8 *)(puVar15 + -0x11a0) = 0x106d1e;
                    _set_message(this,this_01,2);
                    *(undefined8 *)(puVar15 + -0x11a0) = 0x106d26;
                    CowData<char32_t>::_unref(this_01);
                    *(undefined8 *)(puVar15 + -0x11a0) = 0x106d2e;
                    CowData<char32_t>::_unref((CowData<char32_t> *)pSVar17);
                    *(undefined8 *)(puVar15 + -0x11a0) = 0x106d36;
                    CowData<char32_t>::_unref((CowData<char32_t> *)this_00);
                    plVar11 = *(long **)(puVar15 + -0x1140);
                    pcVar13 = *(code **)(*plVar11 + 0x1a8);
                    *(undefined8 *)(puVar15 + -0x10a8) = 0;
                    if (*(long *)(puVar15 + -0x1130) != 0) {
                      *(long **)(puVar15 + -0x1150) = plVar11;
                      *(code **)(puVar15 + -0x1158) = pcVar13;
                      *(undefined8 *)(puVar15 + -0x11a0) = 0x106d70;
                      CowData<char32_t>::_ref(this_01,*(CowData **)(puVar15 + -0x1190));
                      plVar11 = *(long **)(puVar15 + -0x1150);
                      pcVar13 = *(code **)(puVar15 + -0x1158);
                    }
                    *(undefined8 *)(puVar15 + -0x11a0) = 0x106d82;
                    uVar10 = (*pcVar13)(plVar11,this_01);
                    *(undefined4 *)(puVar15 + -0x1158) = uVar10;
                    *(undefined8 *)(puVar15 + -0x11a0) = 0x106d8e;
                    CowData<char32_t>::_unref(this_01);
                    if (*(int *)(puVar15 + -0x1158) == 0) {
                      pcVar13 = *(code **)(**(long **)(puVar15 + -0x1140) + 0x160);
                      *(undefined8 *)(puVar15 + -0x11a0) = 0x106da8;
                      (*pcVar13)();
                      *(undefined1 **)(puVar15 + -0x1158) = puVar15 + -0x1108;
                      pcVar13 = *(code **)(**(long **)(puVar15 + -0x1140) + 0x168);
                      *(undefined8 *)(puVar15 + -0x11a0) = 0x106dc6;
                      (*pcVar13)(puVar15 + -0x1108);
                      piVar4 = *(int **)(puVar15 + -0x1108);
                      while ((piVar4 != (int *)0x0 &&
                             (lVar12 = *(long *)(piVar4 + -2), 1 < (uint)lVar12))) {
                        if (lVar12 < 1) {
                          *(undefined8 *)(puVar15 + -0x11a0) = 1;
                          *(undefined8 *)(puVar15 + -0x11a8) = 0;
                          *(undefined **)(puVar15 + -0x11b0) = &_LC24;
                          *(char **)(puVar15 + -0x11b8) = "size()";
                          *(undefined8 *)(puVar15 + -0x11c0) = 0x107119;
                          _err_print_index_error
                                    ("get","./core/templates/cowdata.h",0xdb,0,lVar12,"p_index",
                                     *(char **)(puVar15 + -0x11b8),*(char **)(puVar15 + -0x11b0),
                                     (bool)puVar15[-0x11a8],(bool)puVar15[-0x11a0]);
                          *(undefined8 *)(puVar15 + -0x11a0) = 0x107122;
                          _err_flush_stdout();
                    /* WARNING: Does not return */
                          pcVar13 = (code *)invalidInstructionException();
                          (*pcVar13)();
                        }
                        plVar11 = *(long **)(puVar15 + -0x1140);
                        if (*piVar4 != 0x2e) {
                          this[0xdbc] = (ProjectDialog)0x0;
                          goto LAB_00106de2;
                        }
                        pcVar13 = *(code **)(*plVar11 + 0x168);
                        *(undefined8 *)(puVar15 + -0x11a0) = 0x106e33;
                        (*pcVar13)(this_01);
                        if (*(long *)(puVar15 + -0x1108) != *(long *)(puVar15 + -0x10a8)) {
                          *(undefined8 *)(puVar15 + -0x11a0) = 0x106e4f;
                          CowData<char32_t>::_unref(*(CowData<char32_t> **)(puVar15 + -0x1158));
                          uVar14 = *(undefined8 *)(puVar15 + -0x10a8);
                          *(undefined8 *)(puVar15 + -0x10a8) = 0;
                          *(undefined8 *)(puVar15 + -0x1108) = uVar14;
                        }
                        *(undefined8 *)(puVar15 + -0x11a0) = 0x106e73;
                        CowData<char32_t>::_unref(this_01);
                        piVar4 = *(int **)(puVar15 + -0x1108);
                      }
                      plVar11 = *(long **)(puVar15 + -0x1140);
LAB_00106de2:
                      pcVar13 = *(code **)(*plVar11 + 0x180);
                      *(undefined8 *)(puVar15 + -0x11a0) = 0x106dee;
                      (*pcVar13)(plVar11);
                      if (this[0xdbc] == (ProjectDialog)0x0) {
                        *(undefined8 *)(puVar15 + -0x10f8) = 0;
                        *(undefined8 *)(puVar15 + -0x11a0) = 0x107158;
                        String::parse_latin1((String *)this_00,"");
                        *(undefined8 *)(puVar15 + -0x1100) = 0;
                        *(undefined8 *)(puVar15 + -0x11a0) = 0x107173;
                        String::parse_latin1
                                  (pSVar17,
                                   "The selected path is not empty. Choosing an empty folder is highly recommended."
                                  );
                        *(undefined8 *)(puVar15 + -0x11a0) = 0x107181;
                        TTR((String *)this_01,pSVar17);
                        *(undefined8 *)(puVar15 + -0x11a0) = 0x107195;
                        _set_message(this,this_01,1,*(undefined4 *)(puVar15 + -0x1180));
                        *(undefined8 *)(puVar15 + -0x11a0) = 0x10719d;
                        CowData<char32_t>::_unref(this_01);
                        *(undefined8 *)(puVar15 + -0x11a0) = 0x1071a5;
                        CowData<char32_t>::_unref((CowData<char32_t> *)pSVar17);
                        *(undefined8 *)(puVar15 + -0x11a0) = 0x1071ad;
                        CowData<char32_t>::_unref((CowData<char32_t> *)this_00);
                      }
                      *(undefined8 *)(puVar15 + -0x11a0) = 0x106e07;
                      CowData<char32_t>::_unref(*(CowData<char32_t> **)(puVar15 + -0x1158));
                    }
                    goto LAB_001064af;
                  }
                  *(undefined8 *)(puVar15 + -0x11a0) = 0x1070c4;
                  String::parse_latin1((String *)this_00,"");
                  pcVar16 = "The path specified doesn\'t exist.";
                  *(undefined8 *)(puVar15 + -0x1100) = 0;
                }
                else {
                  uVar14 = *(undefined8 *)(*plVar11 + 0x1d8);
                  *(long **)(puVar15 + -0x1150) = plVar11;
                  *(undefined8 *)(puVar15 + -0x1158) = uVar14;
                  *(undefined8 *)(puVar15 + -0x11a0) = 0x106fc9;
                  String::get_base_dir();
                  *(undefined8 *)(puVar15 + -0x11a0) = 0x106fd8;
                  uVar8 = (**(code **)(puVar15 + -0x1158))
                                    (*(undefined8 *)(puVar15 + -0x1150),this_01);
                  puVar15[-0x1158] = uVar8;
                  *(undefined8 *)(puVar15 + -0x11a0) = 0x106fe4;
                  CowData<char32_t>::_unref(this_01);
                  if (puVar15[-0x1158] != '\0') {
                    plVar11 = *(long **)(puVar15 + -0x1140);
                    pcVar13 = *(code **)(*plVar11 + 0x1d8);
                    *(undefined8 *)(puVar15 + -0x10a8) = 0;
                    if (*(long *)(puVar15 + -0x1130) != 0) {
                      *(long **)(puVar15 + -0x1150) = plVar11;
                      *(code **)(puVar15 + -0x1158) = pcVar13;
                      *(undefined8 *)(puVar15 + -0x11a0) = 0x10702b;
                      CowData<char32_t>::_ref(this_01,*(CowData **)(puVar15 + -0x1190));
                      plVar11 = *(long **)(puVar15 + -0x1150);
                      pcVar13 = *(code **)(puVar15 + -0x1158);
                    }
                    *(undefined8 *)(puVar15 + -0x11a0) = 0x10703d;
                    uVar8 = (*pcVar13)(plVar11,this_01);
                    puVar15[-0x1158] = uVar8;
                    *(undefined8 *)(puVar15 + -0x11a0) = 0x107049;
                    CowData<char32_t>::_unref(this_01);
                    *(undefined8 *)(puVar15 + -0x10f8) = 0;
                    if (puVar15[-0x1158] == '\0') {
                      *(undefined8 *)(puVar15 + -0x11a0) = 0x107129;
                      String::parse_latin1((String *)this_00,"");
                      pcVar16 = "The project folder will be automatically created.";
                      *(undefined8 *)(puVar15 + -0x1100) = 0;
                    }
                    else {
                      *(undefined8 *)(puVar15 + -0x11a0) = 0x10706d;
                      String::parse_latin1((String *)this_00,"");
                      pcVar16 = "The project folder already exists and is empty.";
                      *(undefined8 *)(puVar15 + -0x1100) = 0;
                    }
                    goto LAB_00106cf4;
                  }
                  *(undefined8 *)(puVar15 + -0x10f8) = 0;
                  *(undefined8 *)(puVar15 + -0x11a0) = 0x1071c9;
                  String::parse_latin1((String *)this_00,"");
                  pcVar16 = "The parent directory of the path specified doesn\'t exist.";
                  *(undefined8 *)(puVar15 + -0x1100) = 0;
                }
              }
              else {
LAB_00106500:
                *(undefined8 *)(puVar15 + -0x10f8) = 0;
                *(undefined8 *)(puVar15 + -0x11a0) = 0x106517;
                String::parse_latin1((String *)this_00,"");
                pcVar16 = 
                "You cannot save a project at the selected path. Please create a subfolder or choose a new path."
                ;
                *(undefined8 *)(puVar15 + -0x1100) = 0;
              }
              *(undefined8 *)(puVar15 + -0x11a0) = 0x106532;
              String::parse_latin1(pSVar17,pcVar16);
              *(undefined8 *)(puVar15 + -0x11a0) = 0x106540;
              TTR((String *)this_01,pSVar17);
              *(undefined8 *)(puVar15 + -0x11a0) = 0x106551;
              _set_message(this,this_01,0,*(undefined4 *)(puVar15 + -0x1180));
              *(undefined8 *)(puVar15 + -0x11a0) = 0x106559;
              CowData<char32_t>::_unref(this_01);
              *(undefined8 *)(puVar15 + -0x11a0) = 0x106561;
              CowData<char32_t>::_unref((CowData<char32_t> *)pSVar17);
              *(undefined8 *)(puVar15 + -0x11a0) = 0x106569;
              CowData<char32_t>::_unref((CowData<char32_t> *)this_00);
              *(undefined8 *)(puVar15 + -0x11a0) = 0x106573;
              CowData<char32_t>::_unref(*(CowData<char32_t> **)(puVar15 + -0x1168));
              *(undefined8 *)(puVar15 + -0x11a0) = 0x10657d;
              CowData<char32_t>::_unref(*(CowData<char32_t> **)(puVar15 + -0x1160));
            }
            else {
LAB_001061db:
              *(undefined8 *)(puVar15 + -0x10f8) = 0;
              *(undefined8 *)(puVar15 + -0x11a0) = 0x1061f2;
              String::parse_latin1((String *)this_00,"");
              *(undefined8 *)(puVar15 + -0x1100) = 0;
              *(undefined8 *)(puVar15 + -0x11a0) = 0x10620d;
              String::parse_latin1
                        (pSVar17,
                         "Creating a project at the engine\'s working directory or executable directory is not allowed, as it would prevent the project manager from starting."
                        );
              *(undefined8 *)(puVar15 + -0x11a0) = 0x10621b;
              TTR((String *)this_01,pSVar17);
              *(undefined8 *)(puVar15 + -0x11a0) = 0x10622c;
              _set_message(this,this_01,0,*(undefined4 *)(puVar15 + -0x1180));
              *(undefined8 *)(puVar15 + -0x11a0) = 0x106234;
              CowData<char32_t>::_unref(this_01);
              *(undefined8 *)(puVar15 + -0x11a0) = 0x10623c;
              CowData<char32_t>::_unref((CowData<char32_t> *)pSVar17);
              *(undefined8 *)(puVar15 + -0x11a0) = 0x106244;
              CowData<char32_t>::_unref((CowData<char32_t> *)this_00);
            }
            *(undefined8 *)(puVar15 + -0x11a0) = 0x10624e;
            CowData<char32_t>::_unref(*(CowData<char32_t> **)(puVar15 + -0x1178));
            *(undefined8 *)(puVar15 + -0x11a0) = 0x106256;
            CowData<char32_t>::_unref(pCVar1);
            goto LAB_00106256;
          }
          *(undefined8 *)(puVar15 + -0x10f8) = 0;
          *(undefined8 *)(puVar15 + -0x11a0) = 0x10674f;
          String::parse_latin1((String *)this_00,"");
          pcVar16 = 
          "The directory name specified contains invalid characters or trailing whitespace.";
          *(undefined8 *)(puVar15 + -0x1100) = 0;
        }
        else {
          *(undefined8 *)(puVar15 + -0x10f8) = 0;
          *(undefined8 *)(puVar15 + -0x11a0) = 0x106377;
          String::parse_latin1((String *)this_00,"");
          pcVar16 = "The path specified is invalid.";
          *(undefined8 *)(puVar15 + -0x1100) = 0;
        }
        *(undefined8 *)(puVar15 + -0x11a0) = 0x106392;
        String::parse_latin1(pSVar17,pcVar16);
        *(undefined8 *)(puVar15 + -0x11a0) = 0x1063a0;
        TTR((String *)this_01,pSVar17);
        uVar10 = *(undefined4 *)(puVar15 + -0x1180);
LAB_001063a4:
        *(undefined8 *)(puVar15 + -0x11a0) = 0x1063b1;
        _set_message(this,this_01,0,uVar10);
        *(undefined8 *)(puVar15 + -0x11a0) = 0x1063b9;
        CowData<char32_t>::_unref(this_01);
        *(undefined8 *)(puVar15 + -0x11a0) = 0x1063c1;
        CowData<char32_t>::_unref((CowData<char32_t> *)(puVar15 + -0x1100));
        *(undefined8 *)(puVar15 + -0x11a0) = 0x1063c9;
        CowData<char32_t>::_unref((CowData<char32_t> *)this_00);
      }
LAB_00106256:
      *(undefined8 *)(puVar15 + -0x11a0) = 0x106260;
      CowData<char32_t>::_unref(*(CowData<char32_t> **)(puVar15 + -0x1190));
      *(undefined8 *)(puVar15 + -0x11a0) = 0x10626a;
      CowData<char32_t>::_unref(*(CowData<char32_t> **)(puVar15 + -0x1188));
      if (*(long *)(puVar15 + -0x1140) != 0) {
        *(undefined8 *)(puVar15 + -0x11a0) = 0x10627d;
        cVar6 = RefCounted::unreference();
        if (cVar6 != '\0') {
          pOVar2 = *(Object **)(puVar15 + -0x1140);
          *(undefined8 *)(puVar15 + -0x11a0) = 0x106292;
          cVar6 = predelete_handler(pOVar2);
          if (cVar6 != '\0') {
            pcVar13 = *(code **)(*(long *)pOVar2 + 0x140);
            *(undefined8 *)(puVar15 + -0x11a0) = 0x1062a6;
            (*pcVar13)(pOVar2);
            *(undefined8 *)(puVar15 + -0x11a0) = 0x1062b0;
            Memory::free_static(pOVar2,false);
          }
        }
      }
      goto LAB_00106334;
    }
  }
  pSVar17 = (String *)(puVar15 + -0x1100);
  *(undefined8 *)(puVar15 + -0x10f8) = 0;
  *(undefined8 *)(puVar15 + -0x11a0) = 0x1062e4;
  String::parse_latin1((String *)this_00,"");
  *(undefined8 *)(puVar15 + -0x1100) = 0;
  *(undefined8 *)(puVar15 + -0x11a0) = 0x1062ff;
  String::parse_latin1(pSVar17,"It would be a good idea to name your project.");
  *(undefined8 *)(puVar15 + -0x11a0) = 0x10630d;
  TTR((String *)this_01,pSVar17);
  *(undefined8 *)(puVar15 + -0x11a0) = 0x10631c;
  _set_message(this,this_01,0,0);
  *(undefined8 *)(puVar15 + -0x11a0) = 0x106324;
  CowData<char32_t>::_unref(this_01);
  *(undefined8 *)(puVar15 + -0x11a0) = 0x10632c;
  CowData<char32_t>::_unref((CowData<char32_t> *)pSVar17);
  *(undefined8 *)(puVar15 + -0x11a0) = 0x106334;
  CowData<char32_t>::_unref((CowData<char32_t> *)this_00);
LAB_00106334:
  if (*(long *)(puVar15 + 0x2ff0) == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar15 + -0x11a0) = &UNK_001071e6;
  __stack_chk_fail();
}



/* ProjectDialog::_create_dir_toggled(bool) */

void ProjectDialog::_create_dir_toggled(bool param_1)

{
  undefined *puVar1;
  char cVar2;
  undefined7 in_register_00000039;
  ProjectDialog *this;
  long in_FS_OFFSET;
  undefined *local_58;
  undefined8 local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  this = (ProjectDialog *)CONCAT71(in_register_00000039,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  _get_target_path();
  cVar2 = BaseButton::is_pressed();
  if (cVar2 == '\0') {
    local_50 = 0;
    local_40 = 2;
    local_48 = &_LC164;
    String::parse_latin1((StrRange *)&local_50);
    String::rstrip((String *)&local_48);
    if (local_58 != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      local_58 = local_48;
      local_48 = (undefined *)0x0;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
    String::get_file();
    cVar2 = String::operator==((String *)&local_48,(String *)(this + 0xe90));
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    if (cVar2 == '\0') {
      String::get_file();
      if (*(undefined **)(this + 0xe98) != local_48) {
        CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xe98));
        puVar1 = local_48;
        local_48 = (undefined *)0x0;
        *(undefined **)(this + 0xe98) = puVar1;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    }
    else {
      local_40 = 0;
      local_48 = &_LC24;
      String::parse_latin1((StrRange *)(this + 0xe98));
    }
    String::get_base_dir();
    if (local_58 == local_48) goto LAB_00107285;
  }
  else {
    String::path_join((String *)&local_48);
    if (local_58 == local_48) goto LAB_00107285;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  local_58 = local_48;
  local_48 = (undefined *)0x0;
LAB_00107285:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  _set_target_path(this,(String *)&local_58);
  _validate_path(this);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ProjectDialog::_project_name_changed() */

void __thiscall ProjectDialog::_project_name_changed(ProjectDialog *this)

{
  if ((*(uint *)(this + 0xdb8) & 0xfffffffd) != 0) {
    _validate_path(this);
    return;
  }
  _update_target_auto_dir(this);
  _validate_path(this);
  return;
}



/* ProjectDialog::_project_path_changed() */

void __thiscall ProjectDialog::_project_path_changed(ProjectDialog *this)

{
  if (*(int *)(this + 0xdb8) != 1) {
    _validate_path(this);
    return;
  }
  _update_target_auto_dir(this);
  _validate_path(this);
  return;
}



/* ProjectDialog::_install_path_changed() */

void __thiscall ProjectDialog::_install_path_changed(ProjectDialog *this)

{
  _validate_path(this);
  return;
}



/* ProjectDialog::_install_path_selected(String const&) */

void __thiscall ProjectDialog::_install_path_selected(ProjectDialog *this,String *param_1)

{
  undefined8 uVar1;
  char cVar2;
  long in_FS_OFFSET;
  CowData<char32_t> aCStack_58 [8];
  CowData<char32_t> local_50 [8];
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(this + 0xdb8) == 1) {
    cVar2 = BaseButton::is_pressed();
    if (cVar2 == '\0') {
      uVar1 = *(undefined8 *)(this + 0xe40);
      local_48 = 0;
      if (*(long *)param_1 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)param_1);
      }
      LineEdit::set_text(uVar1,(CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    }
    else {
      uVar1 = *(undefined8 *)(this + 0xe40);
      LineEdit::get_text();
      String::get_file();
      String::path_join((String *)&local_48);
      LineEdit::set_text(uVar1,(String *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref(local_50);
      CowData<char32_t>::_unref(aCStack_58);
    }
    _validate_path(this);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Control::grab_focus();
      return;
    }
  }
  else {
    _err_print_error("_install_path_selected","editor/project_manager/project_dialog.cpp",0x1ad,
                     "Condition \"mode != MODE_IMPORT\" is true.",
                     "Install path is only used for MODE_IMPORT.",0,0);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProjectDialog::show_dialog(bool) */

void __thiscall ProjectDialog::show_dialog(ProjectDialog *this,bool param_1)

{
  int iVar1;
  undefined8 uVar2;
  String *pSVar3;
  Object *pOVar4;
  char cVar5;
  long in_FS_OFFSET;
  float fVar6;
  char *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  String local_90 [8];
  undefined8 local_88;
  Object *local_80;
  char *local_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(this + 0xdb8) == 3) {
    LineEdit::set_editable(SUB81(*(undefined8 *)(this + 0xe38),0));
    local_80 = (Object *)0x0;
    String::parse_latin1((String *)&local_80,"");
    local_88 = 0;
    String::parse_latin1((String *)&local_88,"Rename Project");
    TTR((String *)&local_78,(String *)&local_88);
    Window::set_title((String *)this);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    local_80 = (Object *)0x0;
    String::parse_latin1((String *)&local_80,"");
    local_88 = 0;
    String::parse_latin1((String *)&local_88,"Rename");
    TTR((String *)&local_78,(String *)&local_88);
    AcceptDialog::set_ok_button_text(this,(String *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CanvasItem::hide();
    CanvasItem::hide();
    CanvasItem::hide();
    CanvasItem::hide();
    CanvasItem::show();
    CanvasItem::hide();
    CanvasItem::hide();
    CanvasItem::hide();
    create_custom_callable_function_pointer<Control>
              ((Control *)&local_78,*(char **)(this + 0xe30),(_func_void *)"&Control::grab_focus");
    Variant::Variant((Variant *)local_58,0);
    Callable::call_deferredp((Variant **)&local_78,0);
    if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    Callable::~Callable((Callable *)&local_78);
    create_custom_callable_function_pointer<LineEdit>
              ((LineEdit *)&local_78,*(char **)(this + 0xe30),(_func_void *)"&LineEdit::select_all")
    ;
    Variant::Variant((Variant *)local_58,0);
    Callable::call_deferredp((Variant **)&local_78,0);
    if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    Callable::~Callable((Callable *)&local_78);
    goto LAB_00107960;
  }
  if (param_1) {
    _reset_name(this);
  }
  LineEdit::set_editable(SUB81(*(undefined8 *)(this + 0xe38),0));
  local_78 = "filesystem/directories/default_project_path";
  local_80 = (Object *)0x0;
  local_70 = 0x2b;
  String::parse_latin1((StrRange *)&local_80);
  _EDITOR_GET((String *)local_58);
  Variant::operator_cast_to_String((Variant *)&local_a8);
  if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  String::simplify_path();
  if (local_a8 != local_78) {
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    local_a8 = local_78;
    local_78 = (char *)0x0;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  if ((local_a8 == (char *)0x0) || (*(uint *)(local_a8 + -8) < 2)) {
    DirAccess::create((StrRange *)&local_80,2);
    uVar2 = *(undefined8 *)(this + 0xe38);
    (**(code **)(*(long *)local_80 + 0x1b0))((CowData<char32_t> *)&local_78,local_80,1);
    LineEdit::set_text(uVar2,(CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    uVar2 = *(undefined8 *)(this + 0xe40);
    (**(code **)(*(long *)local_80 + 0x1b0))((CowData<char32_t> *)&local_78,local_80,1);
    LineEdit::set_text(uVar2,(CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    pSVar3 = *(String **)(this + 0xe68);
    (**(code **)(*(long *)local_80 + 0x1b0))((CowData<char32_t> *)&local_78,local_80,1);
    EditorFileDialog::set_current_dir(pSVar3);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    if (local_80 != (Object *)0x0) {
      cVar5 = RefCounted::unreference();
      pOVar4 = local_80;
      if (cVar5 != '\0') {
        cVar5 = predelete_handler(local_80);
        if (cVar5 != '\0') {
          (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
          Memory::free_static(pOVar4,false);
        }
      }
    }
  }
  else {
    uVar2 = *(undefined8 *)(this + 0xe38);
    local_78 = (char *)0x0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,(CowData *)&local_a8);
    LineEdit::set_text(uVar2,(CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    local_78 = (char *)0x0;
    uVar2 = *(undefined8 *)(this + 0xe40);
    if (local_a8 != (char *)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,(CowData *)&local_a8);
    }
    LineEdit::set_text(uVar2,(CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    EditorFileDialog::set_current_dir(*(String **)(this + 0xe68));
  }
  CanvasItem::show();
  CanvasItem::show();
  CanvasItem::show();
  CanvasItem::show();
  iVar1 = *(int *)(this + 0xdb8);
  if (iVar1 == 1) {
    local_80 = (Object *)0x0;
    String::parse_latin1((String *)&local_80,"");
    local_88 = 0;
    String::parse_latin1((String *)&local_88,"Import Existing Project");
    TTR((String *)&local_78,(String *)&local_88);
    Window::set_title((String *)this);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    local_80 = (Object *)0x0;
    String::parse_latin1((String *)&local_80,"");
    local_88 = 0;
    String::parse_latin1((String *)&local_88,"Import");
    TTR((String *)&local_78,(String *)&local_88);
    AcceptDialog::set_ok_button_text(this,(CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CanvasItem::hide();
    CanvasItem::hide();
    CanvasItem::hide();
    CanvasItem::hide();
  }
  else {
    if (iVar1 == 0) {
      local_80 = (Object *)0x0;
      String::parse_latin1((String *)&local_80,"");
      local_88 = 0;
      String::parse_latin1((String *)&local_88,"Create New Project");
      TTR((String *)&local_78,(String *)&local_88);
      Window::set_title((String *)this);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      local_80 = (Object *)0x0;
      String::parse_latin1((String *)&local_80,"");
      local_88 = 0;
      String::parse_latin1((String *)&local_88,"Create");
      TTR((String *)&local_78,(String *)&local_88);
      AcceptDialog::set_ok_button_text(this,(CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      CanvasItem::show();
      CanvasItem::hide();
      CanvasItem::show();
      CanvasItem::show();
      create_custom_callable_function_pointer<Control>
                ((Control *)&local_78,*(char **)(this + 0xe30),(_func_void *)"&Control::grab_focus")
      ;
      Variant::Variant((Variant *)local_58,0);
      Callable::call_deferredp((Variant **)&local_78,0);
      if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      Callable::~Callable((Callable *)&local_78);
      create_custom_callable_function_pointer<LineEdit>
                ((LineEdit *)&local_78,*(char **)(this + 0xe30),
                 (_func_void *)"&LineEdit::select_all");
    }
    else {
      if (iVar1 != 2) goto LAB_00107902;
      local_88 = 0;
      String::parse_latin1((String *)&local_88," ");
      local_98 = 0;
      String::parse_latin1((String *)&local_98,"");
      local_a0 = 0;
      String::parse_latin1((String *)&local_a0,"Install Project:");
      TTR(local_90,(String *)&local_a0);
      String::operator+((String *)&local_80,local_90);
      String::operator+((String *)&local_78,(String *)&local_80);
      Window::set_title((String *)this);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      local_80 = (Object *)0x0;
      String::parse_latin1((String *)&local_80,"");
      local_88 = 0;
      String::parse_latin1((String *)&local_88,"Install");
      TTR((String *)&local_78,(String *)&local_88);
      AcceptDialog::set_ok_button_text(this,(CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      local_78 = (char *)0x0;
      uVar2 = *(undefined8 *)(this + 0xe30);
      if (*(long *)(this + 0xe88) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,(CowData *)(this + 0xe88));
      }
      LineEdit::set_text(uVar2,(CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CanvasItem::show();
      CanvasItem::hide();
      CanvasItem::hide();
      CanvasItem::hide();
      create_custom_callable_function_pointer<Control>
                ((Control *)&local_78,*(char **)(this + 0xe38),(_func_void *)"&Control::grab_focus")
      ;
    }
    Variant::Variant((Variant *)local_58,0);
    Callable::call_deferredp((Variant **)&local_78,0);
    if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    Callable::~Callable((Callable *)&local_78);
  }
LAB_00107902:
  local_78 = "";
  local_70 = 0;
  String::parse_latin1((StrRange *)(this + 0xe90));
  local_78 = "";
  local_70 = 0;
  String::parse_latin1((StrRange *)(this + 0xe98));
  _update_target_auto_dir(this);
  cVar5 = BaseButton::is_pressed();
  if (cVar5 != '\0') {
    _create_dir_toggled(SUB81(this,0));
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
LAB_00107960:
  _validate_path(this);
  fVar6 = (float)EditorScale::get_scale();
  local_60 = CONCAT44(fVar6 * _LC176._4_4_,fVar6 * (float)_LC176);
  local_58[0] = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_60);
  Window::popup_centered(this);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProjectDialog::_project_path_selected(String const&) */

void __thiscall ProjectDialog::_project_path_selected(ProjectDialog *this,String *param_1)

{
  undefined8 uVar1;
  long lVar2;
  char cVar3;
  long in_FS_OFFSET;
  CowData<char32_t> aCStack_58 [8];
  CowData<char32_t> local_50 [8];
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  show_dialog(this,false);
  cVar3 = BaseButton::is_pressed();
  if ((cVar3 == '\0') || ((*(uint *)(this + 0xdb8) & 0xfffffffd) != 0)) {
    uVar1 = *(undefined8 *)(this + 0xe38);
    local_48 = 0;
    if (*(long *)param_1 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)param_1);
    }
    LineEdit::set_text(uVar1,(CowData<char32_t> *)&local_48);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  }
  else {
    uVar1 = *(undefined8 *)(this + 0xe38);
    LineEdit::get_text();
    String::get_file();
    String::path_join((String *)&local_48);
    LineEdit::set_text(uVar1,(String *)&local_48);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    CowData<char32_t>::_unref(local_50);
    CowData<char32_t>::_unref(aCStack_58);
  }
  if (*(int *)(this + 0xdb8) == 1) {
    _update_target_auto_dir(this);
  }
  _validate_path(this);
  cVar3 = CanvasItem::is_visible_in_tree();
  if (cVar3 == '\0') {
    lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  }
  else {
    lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  }
  if (local_40 == lVar2) {
    Control::grab_focus();
    return;
  }
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



/* ProjectDialog::ok_pressed() */

void __thiscall ProjectDialog::ok_pressed(ProjectDialog *this)

{
  CowData *pCVar1;
  Variant *pVVar2;
  RefCounted *this_00;
  String *pSVar3;
  Ref<DirAccess> *pRVar4;
  Variant *pVVar5;
  uint uVar6;
  String *this_01;
  size_t __n;
  undefined1 *puVar7;
  char cVar8;
  bool bVar9;
  undefined4 uVar10;
  int iVar11;
  ConfirmationDialog *this_02;
  long *plVar12;
  StringName *pSVar13;
  CowData<char32_t> *pCVar14;
  String *pSVar15;
  undefined8 uVar16;
  long lVar17;
  ulong uVar18;
  undefined8 *puVar19;
  long lVar20;
  long lVar21;
  Variant *pVVar22;
  undefined1 *puVar23;
  CowData<char32_t> *pCVar24;
  char *pcVar25;
  Vector2i *pVVar26;
  void *pvVar27;
  CowData<char32_t> *pCVar28;
  code *pcVar29;
  CowData *pCVar30;
  CowData<char32_t> *pCVar31;
  String *pSVar32;
  Vector<String> *pVVar33;
  long in_FS_OFFSET;
  undefined1 local_4030 [16384];
  
  puVar7 = &stack0xffffffffffffffd0;
  do {
    puVar23 = puVar7;
    *(undefined8 *)(puVar23 + -0x1000) = *(undefined8 *)(puVar23 + -0x1000);
    puVar7 = puVar23 + -0x1000;
  } while (puVar23 + -0x1000 != local_4030);
  *(ProjectDialog **)(puVar23 + -0x1380) = this;
  *(undefined8 *)(puVar23 + 0x2ff0) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  if (this[0xdbc] == (ProjectDialog)0x0) {
    pVVar26 = *(Vector2i **)(this + 0xdc0);
    if (pVVar26 == (Vector2i *)0x0) {
      pSVar32 = (String *)(puVar23 + -0x12c8);
      pSVar3 = (String *)(puVar23 + -0x12d8);
      pSVar15 = (String *)(puVar23 + -0x1278);
      *(undefined8 *)(puVar23 + -0x1390) = 0x10883c;
      this_02 = (ConfirmationDialog *)operator_new(0xdb8,"");
      *(undefined8 *)(puVar23 + -0x1390) = 0x108847;
      ConfirmationDialog::ConfirmationDialog(this_02);
      *(undefined8 *)(puVar23 + -0x1390) = 0x10884f;
      postinitialize_handler((Object *)this_02);
      pcVar25 = *(char **)(puVar23 + -0x1380);
      *(undefined8 *)(puVar23 + -0x12c8) = 0;
      *(ConfirmationDialog **)(pcVar25 + 0xdc0) = this_02;
      *(undefined8 *)(puVar23 + -0x1390) = 0x108872;
      String::parse_latin1(pSVar32,"");
      *(undefined8 *)(puVar23 + -0x12d8) = 0;
      *(undefined8 *)(puVar23 + -0x1390) = 0x10888d;
      String::parse_latin1(pSVar3,"Warning: This folder is not empty");
      *(undefined8 *)(puVar23 + -0x1390) = 0x10889b;
      TTR(pSVar15,pSVar3);
      *(undefined8 *)(puVar23 + -0x1390) = 0x1088a6;
      Window::set_title((String *)this_02);
      *(undefined8 *)(puVar23 + -0x1390) = 0x1088ae;
      CowData<char32_t>::_unref((CowData<char32_t> *)pSVar15);
      *(undefined8 *)(puVar23 + -0x1390) = 0x1088b6;
      CowData<char32_t>::_unref((CowData<char32_t> *)pSVar3);
      *(undefined8 *)(puVar23 + -0x1390) = 0x1088be;
      CowData<char32_t>::_unref((CowData<char32_t> *)pSVar32);
      uVar16 = *(undefined8 *)(pcVar25 + 0xdc0);
      *(undefined8 *)(puVar23 + -0x12c8) = 0;
      *(undefined8 *)(puVar23 + -0x1390) = 0x1088dc;
      String::parse_latin1(pSVar32,"");
      *(undefined8 *)(puVar23 + -0x12d8) = 0;
      *(undefined8 *)(puVar23 + -0x1390) = 0x1088f7;
      String::parse_latin1
                (pSVar3,
                 "You are about to create a Godot project in a non-empty folder.\nThe entire contents of this folder will be imported as project resources!\n\nAre you sure you wish to continue?"
                );
      *(undefined8 *)(puVar23 + -0x1390) = 0x108905;
      TTR(pSVar15,pSVar3);
      *(undefined8 *)(puVar23 + -0x1390) = 0x108910;
      AcceptDialog::set_text(uVar16,pSVar15);
      *(undefined8 *)(puVar23 + -0x1390) = 0x108918;
      CowData<char32_t>::_unref((CowData<char32_t> *)pSVar15);
      *(undefined8 *)(puVar23 + -0x1390) = 0x108920;
      CowData<char32_t>::_unref((CowData<char32_t> *)pSVar3);
      *(undefined8 *)(puVar23 + -0x1390) = 0x108928;
      CowData<char32_t>::_unref((CowData<char32_t> *)pSVar32);
      plVar12 = *(long **)(*(long *)(pcVar25 + 0xdc0) + 0xd88);
      pcVar29 = *(code **)(*plVar12 + 0x108);
      *(undefined8 *)(puVar23 + -0x1390) = 0x10895d;
      create_custom_callable_function_pointer<ProjectDialog>
                ((ProjectDialog *)pSVar15,pcVar25,
                 (_func_void *)"&ProjectDialog::_nonempty_confirmation_ok_pressed");
      *(undefined8 *)(puVar23 + -0x1390) = 0x108976;
      (*pcVar29)(plVar12,SceneStringNames::singleton + 0x238,pSVar15,0);
      *(undefined8 *)(puVar23 + -0x1390) = 0x10897e;
      Callable::~Callable((Callable *)pSVar15);
      uVar16 = *(undefined8 *)(pcVar25 + 0xdc0);
      *(undefined8 *)(puVar23 + -0x1390) = 0x108991;
      Node::add_child(pcVar25,uVar16,0,0);
      pVVar26 = *(Vector2i **)(pcVar25 + 0xdc0);
    }
    *(undefined8 *)(puVar23 + -0x11c8) = 0;
    *(undefined8 *)(puVar23 + -0x1390) = 0x108528;
    Window::popup_centered(pVVar26);
    goto LAB_00108528;
  }
  lVar17 = *(long *)(puVar23 + -0x1380);
  *(undefined1 **)(puVar23 + -0x1378) = puVar23 + -0x1328;
  *(undefined8 *)(puVar23 + -0x1390) = 0x108573;
  LineEdit::get_text();
  iVar11 = *(int *)(lVar17 + 0xdb8);
  if (iVar11 == 0) {
    *(undefined8 *)(puVar23 + -0x1390) = 0x108a61;
    cVar8 = BaseButton::is_pressed();
    if (cVar8 == '\0') {
      *(undefined1 **)(puVar23 + -5000) = puVar23 + -0x1278;
LAB_00108a85:
      pSVar32 = (String *)(puVar23 + -0x12c8);
      pCVar14 = (CowData<char32_t> *)(puVar23 + -0x12e8);
      pVVar33 = (Vector<String> *)(puVar23 + -0x12d8);
      *(undefined8 *)(puVar23 + -0x1390) = 0x108a9c;
      ProjectSettings::get_required_features();
      *(undefined8 *)(puVar23 + -0x1250) = 2;
      *(undefined1 (*) [16])(puVar23 + -0x1270) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(puVar23 + -0x1260) = (undefined1  [16])0x0;
      *(undefined8 *)(puVar23 + -0x1390) = 0x108acd;
      plVar12 = (long *)ButtonGroup::get_pressed_button();
      pcVar29 = *(code **)(*plVar12 + 0xb8);
      *(undefined1 (*) [16])(puVar23 + -0x11e0) = (undefined1  [16])0x0;
      *(undefined8 *)(puVar23 + -0x11e8) = 0;
      if (ok_pressed()::{lambda()#1}::operator()()::sname == '\0') {
        *(code **)(puVar23 + -0x1370) = pcVar29;
        *(undefined8 *)(puVar23 + -0x1390) = 0x10a50b;
        iVar11 = __cxa_guard_acquire(&ok_pressed()::{lambda()#1}::operator()()::sname);
        pcVar29 = *(code **)(puVar23 + -0x1370);
        if (iVar11 != 0) {
          *(undefined8 *)(puVar23 + -0x1390) = 0x10a52c;
          _scs_create((char *)&ok_pressed()::{lambda()#1}::operator()()::sname,true);
          *(undefined8 *)(puVar23 + -0x1390) = 0x10a542;
          __cxa_atexit(StringName::~StringName,&ok_pressed()::{lambda()#1}::operator()()::sname,
                       &__dso_handle);
          *(undefined8 *)(puVar23 + -0x1390) = 0x10a54a;
          __cxa_guard_release(&ok_pressed()::{lambda()#1}::operator()()::sname);
          pcVar29 = *(code **)(puVar23 + -0x1370);
        }
      }
      *(undefined1 **)(puVar23 + -0x1368) = puVar23 + -0x11c8;
      *(undefined8 *)(puVar23 + -0x1390) = 0x108b28;
      (*pcVar29)(puVar23 + -0x11c8,plVar12,&ok_pressed()::{lambda()#1}::operator()()::sname,
                 puVar23 + -0x11e8);
      *(Variant **)(puVar23 + -0x1358) = (Variant *)(puVar23 + -0x1300);
      *(undefined8 *)(puVar23 + -0x1390) = 0x108b40;
      Variant::operator_cast_to_String((Variant *)(puVar23 + -0x1300));
      *(undefined1 **)(puVar23 + -0x1370) = Variant::needs_deinit;
      if (Variant::needs_deinit[*(int *)(puVar23 + -0x11c8)] != '\0') {
        *(undefined8 *)(puVar23 + -0x1390) = 0x10aa59;
        Variant::_clear_internal();
      }
      if (*(char *)(*(long *)(puVar23 + -0x1370) + (long)*(int *)(puVar23 + -0x11e8)) != '\0') {
        *(undefined8 *)(puVar23 + -0x1390) = 0x10aa4a;
        Variant::_clear_internal();
      }
      pVVar5 = *(Variant **)(puVar23 + -0x1368);
      *(undefined8 *)(puVar23 + -0x1390) = 0x108b8a;
      Variant::Variant(pVVar5,*(String **)(puVar23 + -0x1358));
      *(undefined8 *)(puVar23 + -0x12c8) = 0;
      *(undefined8 *)(puVar23 + -0x1390) = 0x108ba5;
      String::parse_latin1(pSVar32,"rendering/renderer/rendering_method");
      *(undefined8 *)(puVar23 + -0x1390) = 0x108bb1;
      pVVar22 = (Variant *)
                HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
                ::operator[](*(HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
                               **)(puVar23 + -5000),pSVar32);
      if (pVVar22 != pVVar5) {
        if (*(char *)(*(long *)(puVar23 + -0x1370) + (long)*(int *)pVVar22) != '\0') {
          *(undefined8 *)(puVar23 + -0x1390) = 0x10aa92;
          Variant::_clear_internal();
        }
        *(int *)pVVar22 = 0;
        *(int *)pVVar22 = *(int *)(puVar23 + -0x11c8);
        uVar16 = *(undefined8 *)(puVar23 + -0x11b8);
        *(undefined8 *)(pVVar22 + 8) = *(undefined8 *)(puVar23 + -0x11c0);
        *(undefined8 *)(pVVar22 + 0x10) = uVar16;
        *(undefined4 *)(puVar23 + -0x11c8) = 0;
      }
      *(undefined8 *)(puVar23 + -0x1390) = 0x108bfa;
      CowData<char32_t>::_unref((CowData<char32_t> *)pSVar32);
      if (*(char *)(*(long *)(puVar23 + -0x1370) + (long)*(int *)(puVar23 + -0x11c8)) != '\0') {
        *(undefined8 *)(puVar23 + -0x1390) = 0x10aa77;
        Variant::_clear_internal();
      }
      *(undefined8 *)(puVar23 + -0x1390) = 0x108c16;
      pSVar13 = (StringName *)EditorSettings::get_singleton();
      pVVar5 = *(Variant **)(puVar23 + -0x1368);
      *(undefined8 *)(puVar23 + -0x1390) = 0x108c2b;
      Variant::Variant(pVVar5,*(String **)(puVar23 + -0x1358));
      *(undefined8 *)(puVar23 + -0x1390) = 0x108c3c;
      StringName::StringName((StringName *)pSVar32,"project_manager/default_renderer",false);
      *(undefined8 *)(puVar23 + -0x1390) = 0x108c4c;
      Object::set(pSVar13,(Variant *)pSVar32,(bool *)pVVar5);
      if ((StringName::configured != '\0') && (*(long *)(puVar23 + -0x12c8) != 0)) {
        *(undefined8 *)(puVar23 + -0x1390) = 0x108c68;
        StringName::unref();
      }
      if (*(char *)(*(long *)(puVar23 + -0x1370) + (long)*(int *)(puVar23 + -0x11c8)) != '\0') {
        *(undefined8 *)(puVar23 + -0x1390) = 0x10aa68;
        Variant::_clear_internal();
      }
      *(undefined8 *)(puVar23 + -0x1390) = 0x108c84;
      EditorSettings::get_singleton();
      *(undefined8 *)(puVar23 + -0x1390) = 0x108c89;
      EditorSettings::save();
      *(undefined8 *)(puVar23 + -0x1390) = 0x108c9a;
      cVar8 = String::operator==(*(String **)(puVar23 + -0x1358),"forward_plus");
      if (cVar8 == '\0') {
        *(undefined8 *)(puVar23 + -0x1390) = 0x109b29;
        cVar8 = String::operator==(*(String **)(puVar23 + -0x1358),"mobile");
        if (cVar8 != '\0') {
          *(undefined8 *)(puVar23 + -0x12c8) = 0;
          pcVar25 = "Mobile";
          goto LAB_00108cb5;
        }
        *(undefined8 *)(puVar23 + -0x1390) = 0x109b45;
        cVar8 = String::operator==(*(String **)(puVar23 + -0x1358),"gl_compatibility");
        if (cVar8 == '\0') {
          *(undefined8 *)(puVar23 + -0x1390) = 0x10a968;
          _err_print_error("ok_pressed","editor/project_manager/project_dialog.cpp",0x21d,
                           "Unknown renderer type. Please report this as a bug on GitHub.",0,1);
        }
        else {
          *(undefined8 *)(puVar23 + -0x12c8) = 0;
          *(undefined8 *)(puVar23 + -0x1390) = 0x109b68;
          String::parse_latin1(pSVar32,"GL Compatibility");
          *(undefined8 *)(puVar23 + -0x1390) = 0x109b73;
          Vector<String>::push_back(pVVar33,pSVar32);
          *(undefined8 *)(puVar23 + -0x1390) = 0x109b7b;
          CowData<char32_t>::_unref((CowData<char32_t> *)pSVar32);
          pVVar5 = *(Variant **)(puVar23 + -0x1368);
          *(undefined8 *)(puVar23 + -0x1390) = 0x109b8b;
          Variant::Variant(pVVar5,"gl_compatibility");
          *(undefined8 *)(puVar23 + -0x12c8) = 0;
          *(undefined8 *)(puVar23 + -0x1390) = 0x109ba6;
          String::parse_latin1(pSVar32,"rendering/renderer/rendering_method.mobile");
          *(undefined8 *)(puVar23 + -0x1390) = 0x109bb2;
          pVVar22 = (Variant *)
                    HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
                    ::operator[](*(HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
                                   **)(puVar23 + -5000),pSVar32);
          if (pVVar22 != pVVar5) {
            if (*(char *)(*(long *)(puVar23 + -0x1370) + (long)*(int *)pVVar22) != '\0') {
              *(undefined8 *)(puVar23 + -0x1390) = 0x10b000;
              Variant::_clear_internal();
            }
            *(int *)pVVar22 = 0;
            *(int *)pVVar22 = *(int *)(puVar23 + -0x11c8);
            uVar16 = *(undefined8 *)(puVar23 + -0x11b8);
            *(undefined8 *)(pVVar22 + 8) = *(undefined8 *)(puVar23 + -0x11c0);
            *(undefined8 *)(pVVar22 + 0x10) = uVar16;
            *(undefined4 *)(puVar23 + -0x11c8) = 0;
          }
          *(undefined8 *)(puVar23 + -0x1390) = 0x109bfb;
          CowData<char32_t>::_unref((CowData<char32_t> *)pSVar32);
          if (*(char *)(*(long *)(puVar23 + -0x1370) + (long)*(int *)(puVar23 + -0x11c8)) != '\0') {
            *(undefined8 *)(puVar23 + -0x1390) = 0x109c1c;
            Variant::_clear_internal();
          }
        }
      }
      else {
        *(undefined8 *)(puVar23 + -0x12c8) = 0;
        pcVar25 = "Forward Plus";
LAB_00108cb5:
        *(undefined8 *)(puVar23 + -0x1390) = 0x108cbd;
        String::parse_latin1(pSVar32,pcVar25);
        *(undefined8 *)(puVar23 + -0x1390) = 0x108cc8;
        Vector<String>::push_back(pVVar33,pSVar32);
        *(undefined8 *)(puVar23 + -0x1390) = 0x108cd0;
        CowData<char32_t>::_unref((CowData<char32_t> *)pSVar32);
      }
      if (*(long *)(puVar23 + -0x12d0) == 0) {
        *(undefined1 **)(puVar23 + -0x1348) = puVar23 + -0x12d0;
      }
      else {
        lVar17 = *(long *)(*(long *)(puVar23 + -0x12d0) + -8);
        *(CowData<String> **)(puVar23 + -0x1348) = (CowData<String> *)(puVar23 + -0x12d0);
        *(long *)(puVar23 + -0x1360) = lVar17;
        if (lVar17 != 0) {
          *(undefined8 *)(puVar23 + -0x1390) = 0x108d05;
          CowData<String>::_copy_on_write((CowData<String> *)(puVar23 + -0x12d0));
          lVar17 = *(long *)(puVar23 + -0x1360);
          *(undefined8 *)(puVar23 + -0x1340) = *(undefined8 *)(puVar23 + -0x12d0);
          if (lVar17 == 1) {
            *(undefined8 *)(puVar23 + -0x1390) = 0x10ab38;
            SortArray<String,_DefaultComparator<String>,true>::introsort
                      (0,1,*(String **)(puVar23 + -0x1340),0);
          }
          else {
            lVar20 = 0;
            lVar21 = lVar17;
            do {
              lVar21 = lVar21 >> 1;
              lVar20 = lVar20 + 1;
            } while (lVar21 != 1);
            pCVar24 = *(CowData<char32_t> **)(puVar23 + -0x1340);
            *(long *)(puVar23 + -0x1360) = lVar17;
            *(undefined8 *)(puVar23 + -0x1390) = 0x108d54;
            SortArray<String,_DefaultComparator<String>,true>::introsort
                      (0,lVar17,(String *)pCVar24,lVar20 * 2);
            lVar17 = *(long *)(puVar23 + -0x1360);
            if (lVar17 < 0x11) {
              pCVar24 = *(CowData<char32_t> **)(puVar23 + -0x1340);
              *(long *)(puVar23 + -0x1350) = lVar17;
              *(String **)(puVar23 + -0x1360) = pSVar32;
              *(Vector<String> **)(puVar23 + -0x1338) = pVVar33;
              lVar17 = 1;
              pCVar31 = pCVar24 + 8;
              do {
                *(undefined8 *)(puVar23 + -0x12c8) = 0;
                plVar12 = (long *)(*(long *)pCVar31 + -0x10);
                if (*(long *)pCVar31 != 0) {
                  do {
                    lVar21 = *plVar12;
                    if (lVar21 == 0) goto LAB_0010a06e;
                    LOCK();
                    lVar20 = *plVar12;
                    bVar9 = lVar21 == lVar20;
                    if (bVar9) {
                      *plVar12 = lVar21 + 1;
                      lVar20 = lVar21;
                    }
                    UNLOCK();
                  } while (!bVar9);
                  if (lVar20 != -1) {
                    *(undefined8 *)(puVar23 + -0x12c8) = *(undefined8 *)pCVar31;
                  }
                }
LAB_0010a06e:
                *(undefined8 *)(puVar23 + -0x1390) = 0x10a07b;
                cVar8 = String::operator<(*(String **)(puVar23 + -0x1360),(String *)pCVar24);
                if (cVar8 == '\0') {
                  *(undefined8 *)(puVar23 + -0x12e8) = 0;
                  if (*(long *)(puVar23 + -0x12c8) != 0) {
                    *(undefined8 *)(puVar23 + -0x1390) = 0x10a264;
                    CowData<char32_t>::_ref(pCVar14,*(CowData **)(puVar23 + -0x1360));
                  }
                  *(long *)(puVar23 + -0x1340) = lVar17;
                  pCVar30 = (CowData *)pCVar31;
                  while( true ) {
                    pCVar28 = (CowData<char32_t> *)pCVar30;
                    pCVar30 = (CowData *)(pCVar28 + -8);
                    *(undefined8 *)(puVar23 + -0x1390) = 0x10a299;
                    cVar8 = String::operator<((String *)pCVar14,(String *)pCVar30);
                    if (cVar8 == '\0') break;
                    if (pCVar28 == pCVar24 + 8) {
                      lVar17 = *(long *)(puVar23 + -0x1340);
                      *(undefined8 *)(puVar23 + -0x1390) = 0x10a2d9;
                      _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",
                                       0xff,"bad comparison function; sorting will be broken",0,0);
                      goto LAB_0010a2d9;
                    }
                    if (*(long *)pCVar28 != *(long *)(pCVar28 + -8)) {
                      *(undefined8 *)(puVar23 + -0x1390) = 0x10a286;
                      CowData<char32_t>::_ref(pCVar28,pCVar30);
                    }
                  }
                  lVar17 = *(long *)(puVar23 + -0x1340);
LAB_0010a2d9:
                  if (*(long *)pCVar28 != *(long *)(puVar23 + -0x12e8)) {
                    *(undefined8 *)(puVar23 + -0x1390) = 0x10a2f2;
                    CowData<char32_t>::_ref(pCVar28,(CowData *)pCVar14);
                  }
                  *(undefined8 *)(puVar23 + -0x1390) = 0x10a2fa;
                  CowData<char32_t>::_unref(pCVar14);
                  lVar21 = *(long *)(puVar23 + -0x12c8);
                }
                else {
                  *(long *)(puVar23 + -0x1340) = lVar17;
                  pCVar28 = pCVar31;
                  do {
                    if (*(long *)pCVar28 != *(long *)(pCVar28 + -8)) {
                      *(undefined8 *)(puVar23 + -0x1390) = 0x10a0a5;
                      CowData<char32_t>::_ref(pCVar28,(CowData *)(pCVar28 + -8));
                    }
                    lVar17 = lVar17 + -1;
                    pCVar28 = pCVar28 + -8;
                  } while (lVar17 != 0);
                  lVar17 = *(long *)(puVar23 + -0x1340);
                  lVar21 = *(long *)(puVar23 + -0x12c8);
                  if (*(long *)pCVar24 != lVar21) {
                    *(undefined8 *)(puVar23 + -0x1390) = 0x10a0cd;
                    CowData<char32_t>::_ref(pCVar24,*(CowData **)(puVar23 + -0x1360));
                    lVar21 = *(long *)(puVar23 + -0x12c8);
                  }
                }
                if (lVar21 != 0) {
                  LOCK();
                  plVar12 = (long *)(lVar21 + -0x10);
                  *plVar12 = *plVar12 + -1;
                  UNLOCK();
                  if (*plVar12 == 0) {
                    lVar21 = *(long *)(puVar23 + -0x12c8);
                    *(undefined8 *)(puVar23 + -0x12c8) = 0;
                    *(undefined8 *)(puVar23 + -0x1390) = 0x10a101;
                    Memory::free_static((void *)(lVar21 + -0x10),false);
                  }
                }
                lVar17 = lVar17 + 1;
                pCVar31 = pCVar31 + 8;
              } while (*(long *)(puVar23 + -0x1350) != lVar17);
              pVVar33 = *(Vector<String> **)(puVar23 + -0x1338);
              pSVar32 = *(String **)(puVar23 + -0x1360);
            }
            else {
              *(undefined8 *)(puVar23 + -0x1360) = 1;
              *(long *)(puVar23 + -0x1338) = lVar17;
              *(Vector<String> **)(puVar23 + -0x1330) = pVVar33;
              pCVar30 = (CowData *)(pCVar24 + 8);
              do {
                *(undefined8 *)(puVar23 + -0x12c8) = 0;
                plVar12 = (long *)(*(long *)pCVar30 + -0x10);
                if (*(long *)pCVar30 != 0) {
                  do {
                    lVar17 = *plVar12;
                    if (lVar17 == 0) goto LAB_00108dbe;
                    LOCK();
                    lVar21 = *plVar12;
                    bVar9 = lVar17 == lVar21;
                    if (bVar9) {
                      *plVar12 = lVar17 + 1;
                      lVar21 = lVar17;
                    }
                    UNLOCK();
                  } while (!bVar9);
                  if (lVar21 != -1) {
                    *(undefined8 *)(puVar23 + -0x12c8) = *(undefined8 *)pCVar30;
                  }
                }
LAB_00108dbe:
                *(undefined8 *)(puVar23 + -0x1390) = 0x108dc9;
                cVar8 = String::operator<(pSVar32,(String *)pCVar24);
                pCVar31 = (CowData<char32_t> *)pCVar30;
                if (cVar8 == '\0') {
                  *(undefined8 *)(puVar23 + -0x12e8) = 0;
                  if (*(long *)(puVar23 + -0x12c8) != 0) {
                    *(undefined8 *)(puVar23 + -0x1390) = 0x108df6;
                    CowData<char32_t>::_ref(pCVar14,(CowData *)pSVar32);
                  }
                  *(CowData **)(puVar23 + -0x1350) = pCVar30;
                  while( true ) {
                    pCVar31 = (CowData<char32_t> *)pCVar30;
                    pCVar30 = (CowData *)(pCVar31 + -8);
                    *(undefined8 *)(puVar23 + -0x1390) = 0x108e29;
                    cVar8 = String::operator<((String *)pCVar14,(String *)pCVar30);
                    if (cVar8 == '\0') break;
                    if (pCVar31 == pCVar24 + 8) {
                      pCVar30 = *(CowData **)(puVar23 + -0x1350);
                      *(undefined8 *)(puVar23 + -0x1390) = 0x108e63;
                      _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",
                                       0xff,"bad comparison function; sorting will be broken",0,0);
                      goto LAB_00108e63;
                    }
                    if (*(long *)pCVar31 != *(long *)(pCVar31 + -8)) {
                      *(undefined8 *)(puVar23 + -0x1390) = 0x108e16;
                      CowData<char32_t>::_ref(pCVar31,pCVar30);
                    }
                  }
                  pCVar30 = *(CowData **)(puVar23 + -0x1350);
LAB_00108e63:
                  lVar17 = *(long *)(puVar23 + -0x12e8);
                  if (*(long *)pCVar31 != lVar17) {
                    *(undefined8 *)(puVar23 + -0x1390) = 0x108e7b;
                    CowData<char32_t>::_ref(pCVar31,(CowData *)pCVar14);
                    lVar17 = *(long *)(puVar23 + -0x12e8);
                  }
                  if (lVar17 != 0) {
                    LOCK();
                    plVar12 = (long *)(lVar17 + -0x10);
                    *plVar12 = *plVar12 + -1;
                    UNLOCK();
                    if (*plVar12 == 0) {
                      lVar17 = *(long *)(puVar23 + -0x12e8);
                      *(undefined8 *)(puVar23 + -0x12e8) = 0;
                      *(undefined8 *)(puVar23 + -0x1390) = 0x108eaf;
                      Memory::free_static((void *)(lVar17 + -0x10),false);
                    }
                  }
                  lVar17 = *(long *)(puVar23 + -0x12c8);
                }
                else {
                  do {
                    pCVar1 = (CowData *)(pCVar31 + -8);
                    if (*(long *)pCVar31 != *(long *)(pCVar31 + -8)) {
                      *(undefined8 *)(puVar23 + -0x1390) = 0x108ed5;
                      CowData<char32_t>::_ref(pCVar31,pCVar1);
                    }
                    pCVar31 = (CowData<char32_t> *)pCVar1;
                  } while (pCVar24 != (CowData<char32_t> *)pCVar1);
                  lVar17 = *(long *)(puVar23 + -0x12c8);
                  if (*(long *)pCVar24 != lVar17) {
                    *(undefined8 *)(puVar23 + -0x1390) = 0x108ef5;
                    CowData<char32_t>::_ref(pCVar24,(CowData *)pSVar32);
                    lVar17 = *(long *)(puVar23 + -0x12c8);
                  }
                }
                if (lVar17 != 0) {
                  LOCK();
                  plVar12 = (long *)(lVar17 + -0x10);
                  *plVar12 = *plVar12 + -1;
                  UNLOCK();
                  if (*plVar12 == 0) {
                    lVar17 = *(long *)(puVar23 + -0x12c8);
                    *(undefined8 *)(puVar23 + -0x12c8) = 0;
                    *(undefined8 *)(puVar23 + -0x1390) = 0x108f29;
                    Memory::free_static((void *)(lVar17 + -0x10),false);
                  }
                }
                *(long *)(puVar23 + -0x1360) = *(long *)(puVar23 + -0x1360) + 1;
                pCVar30 = (CowData *)((CowData<char32_t> *)pCVar30 + 8);
              } while (*(long *)(puVar23 + -0x1360) != 0x10);
              lVar17 = *(long *)(puVar23 + -0x1340);
              lVar21 = *(long *)(puVar23 + -0x1338);
              *(CowData<char32_t> **)(puVar23 + -0x1340) = pCVar14;
              pCVar14 = (CowData<char32_t> *)(lVar17 + 0x80);
              *(undefined8 *)(puVar23 + -0x1338) = *(undefined8 *)(puVar23 + -0x1330);
              do {
                *(undefined8 *)(puVar23 + -0x12c8) = 0;
                plVar12 = (long *)(*(long *)pCVar14 + -0x10);
                if (*(long *)pCVar14 != 0) {
                  do {
                    lVar17 = *plVar12;
                    if (lVar17 == 0) goto LAB_00108fac;
                    LOCK();
                    lVar20 = *plVar12;
                    bVar9 = lVar17 == lVar20;
                    if (bVar9) {
                      *plVar12 = lVar17 + 1;
                      lVar20 = lVar17;
                    }
                    UNLOCK();
                  } while (!bVar9);
                  if (lVar20 != -1) {
                    *(long *)(puVar23 + -0x12c8) = *(long *)pCVar14;
                  }
                }
LAB_00108fac:
                lVar17 = *(long *)(puVar23 + -0x1360);
                *(long *)(puVar23 + -0x1350) = lVar21;
                pCVar30 = (CowData *)pCVar14;
                while( true ) {
                  pCVar24 = (CowData<char32_t> *)pCVar30;
                  lVar17 = lVar17 + -1;
                  pCVar30 = (CowData *)(pCVar24 + -8);
                  *(undefined8 *)(puVar23 + -0x1390) = 0x108ff3;
                  cVar8 = String::operator<(pSVar32,(String *)pCVar30);
                  if (cVar8 == '\0') break;
                  if (lVar17 == 0) {
                    lVar21 = *(long *)(puVar23 + -0x1350);
                    *(undefined8 *)(puVar23 + -0x1390) = 0x109026;
                    _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                                     "bad comparison function; sorting will be broken",0,0);
                    goto LAB_00109026;
                  }
                  if (*(long *)pCVar24 != *(long *)(pCVar24 + -8)) {
                    *(undefined8 *)(puVar23 + -0x1390) = 0x108fdd;
                    CowData<char32_t>::_ref(pCVar24,pCVar30);
                  }
                }
                lVar21 = *(long *)(puVar23 + -0x1350);
LAB_00109026:
                lVar17 = *(long *)(puVar23 + -0x12c8);
                if (*(long *)pCVar24 != lVar17) {
                  *(undefined8 *)(puVar23 + -0x1390) = 0x10903f;
                  CowData<char32_t>::_ref(pCVar24,(CowData *)pSVar32);
                  lVar17 = *(long *)(puVar23 + -0x12c8);
                }
                if (lVar17 != 0) {
                  LOCK();
                  plVar12 = (long *)(lVar17 + -0x10);
                  *plVar12 = *plVar12 + -1;
                  UNLOCK();
                  if (*plVar12 == 0) {
                    lVar17 = *(long *)(puVar23 + -0x12c8);
                    *(undefined8 *)(puVar23 + -0x12c8) = 0;
                    *(undefined8 *)(puVar23 + -0x1390) = 0x109073;
                    Memory::free_static((void *)(lVar17 + -0x10),false);
                  }
                }
                *(long *)(puVar23 + -0x1360) = *(long *)(puVar23 + -0x1360) + 1;
                pCVar14 = pCVar14 + 8;
              } while (lVar21 != *(long *)(puVar23 + -0x1360));
              pCVar14 = *(CowData<char32_t> **)(puVar23 + -0x1340);
              pVVar33 = *(Vector<String> **)(puVar23 + -0x1338);
            }
          }
        }
      }
      pVVar5 = *(Variant **)(puVar23 + -0x1368);
      *(undefined8 *)(puVar23 + -0x1390) = 0x1090a5;
      Variant::Variant(pVVar5,(Vector *)pVVar33);
      *(undefined8 *)(puVar23 + -0x12c8) = 0;
      *(undefined8 *)(puVar23 + -0x1390) = 0x1090c0;
      String::parse_latin1(pSVar32,"application/config/features");
      *(undefined8 *)(puVar23 + -0x1390) = 0x1090cc;
      pVVar22 = (Variant *)
                HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
                ::operator[](*(HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
                               **)(puVar23 + -5000),pSVar32);
      if (pVVar22 != pVVar5) {
        if (*(char *)(*(long *)(puVar23 + -0x1370) + (long)*(int *)pVVar22) != '\0') {
          *(undefined8 *)(puVar23 + -0x1390) = 0x10aab9;
          Variant::_clear_internal();
        }
        *(int *)pVVar22 = 0;
        *(int *)pVVar22 = *(int *)(puVar23 + -0x11c8);
        uVar16 = *(undefined8 *)(puVar23 + -0x11b8);
        *(undefined8 *)(pVVar22 + 8) = *(undefined8 *)(puVar23 + -0x11c0);
        *(undefined8 *)(pVVar22 + 0x10) = uVar16;
        *(undefined4 *)(puVar23 + -0x11c8) = 0;
      }
      *(undefined8 *)(puVar23 + -0x1390) = 0x109115;
      CowData<char32_t>::_unref((CowData<char32_t> *)pSVar32);
      if (*(char *)(*(long *)(puVar23 + -0x1370) + (long)*(int *)(puVar23 + -0x11c8)) != '\0') {
        *(undefined8 *)(puVar23 + -0x1390) = 0x10aa2e;
        Variant::_clear_internal();
      }
      pSVar3 = (String *)(puVar23 + -0x12f0);
      *(undefined8 *)(puVar23 + -0x1390) = 0x109148;
      LineEdit::get_text();
      *(undefined8 *)(puVar23 + -0x1390) = 0x10915d;
      String::strip_edges(SUB81(pSVar32,0),SUB81(pCVar14,0));
      pVVar5 = *(Variant **)(puVar23 + -0x1368);
      *(undefined8 *)(puVar23 + -0x1390) = 0x10916d;
      Variant::Variant(pVVar5,pSVar32);
      *(undefined8 *)(puVar23 + -0x12f0) = 0;
      *(undefined8 *)(puVar23 + -0x1390) = 0x109188;
      String::parse_latin1(pSVar3,"application/config/name");
      *(undefined8 *)(puVar23 + -0x1390) = 0x109194;
      pVVar22 = (Variant *)
                HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
                ::operator[](*(HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
                               **)(puVar23 + -5000),pSVar3);
      if (pVVar22 != pVVar5) {
        if (*(char *)(*(long *)(puVar23 + -0x1370) + (long)*(int *)pVVar22) != '\0') {
          *(undefined8 *)(puVar23 + -0x1390) = 0x10aaac;
          Variant::_clear_internal();
        }
        *(int *)pVVar22 = 0;
        *(int *)pVVar22 = *(int *)(puVar23 + -0x11c8);
        uVar16 = *(undefined8 *)(puVar23 + -0x11b8);
        *(undefined8 *)(pVVar22 + 8) = *(undefined8 *)(puVar23 + -0x11c0);
        *(undefined8 *)(pVVar22 + 0x10) = uVar16;
        *(undefined4 *)(puVar23 + -0x11c8) = 0;
      }
      *(undefined8 *)(puVar23 + -0x1390) = 0x1091dd;
      CowData<char32_t>::_unref((CowData<char32_t> *)pSVar3);
      if (*(char *)(*(long *)(puVar23 + -0x1370) + (long)*(int *)(puVar23 + -0x11c8)) != '\0') {
        *(undefined8 *)(puVar23 + -0x1390) = 0x10aa1f;
        Variant::_clear_internal();
      }
      *(undefined8 *)(puVar23 + -0x1390) = 0x1091fc;
      CowData<char32_t>::_unref((CowData<char32_t> *)pSVar32);
      *(undefined8 *)(puVar23 + -0x1390) = 0x109204;
      CowData<char32_t>::_unref(pCVar14);
      pVVar5 = *(Variant **)(puVar23 + -0x1368);
      *(undefined8 *)(puVar23 + -0x1390) = 0x109218;
      Variant::Variant(pVVar5,"res://icon.svg");
      *(undefined8 *)(puVar23 + -0x12c8) = 0;
      *(undefined8 *)(puVar23 + -0x1390) = 0x109233;
      String::parse_latin1(pSVar32,"application/config/icon");
      *(undefined8 *)(puVar23 + -0x1390) = 0x10923f;
      pVVar22 = (Variant *)
                HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
                ::operator[](*(HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
                               **)(puVar23 + -5000),pSVar32);
      if (pVVar22 != pVVar5) {
        if (*(char *)(*(long *)(puVar23 + -0x1370) + (long)*(int *)pVVar22) != '\0') {
          *(undefined8 *)(puVar23 + -0x1390) = 0x10aa9f;
          Variant::_clear_internal();
        }
        *(int *)pVVar22 = 0;
        *(int *)pVVar22 = *(int *)(puVar23 + -0x11c8);
        uVar16 = *(undefined8 *)(puVar23 + -0x11b8);
        *(undefined8 *)(pVVar22 + 8) = *(undefined8 *)(puVar23 + -0x11c0);
        *(undefined8 *)(pVVar22 + 0x10) = uVar16;
        *(undefined4 *)(puVar23 + -0x11c8) = 0;
      }
      *(undefined8 *)(puVar23 + -0x1390) = 0x109288;
      CowData<char32_t>::_unref((CowData<char32_t> *)pSVar32);
      if (*(char *)(*(long *)(puVar23 + -0x1370) + (long)*(int *)(puVar23 + -0x11c8)) != '\0') {
        *(undefined8 *)(puVar23 + -0x1390) = 0x10aa3d;
        Variant::_clear_internal();
      }
      *(undefined8 *)(puVar23 + -0x1390) = 0x1092a4;
      pSVar15 = (String *)ProjectSettings::get_singleton();
      *(undefined8 *)(puVar23 + -0x12c0) = 0;
      *(undefined8 *)(puVar23 + -0x12f0) = 0;
      *(undefined8 *)(puVar23 + -0x1390) = 0x1092ce;
      String::parse_latin1(pSVar3,"project.godot");
      *(undefined8 *)(puVar23 + -0x1390) = 0x1092de;
      String::path_join((String *)pCVar14);
      *(undefined8 *)(puVar23 + -0x1390) = 0x1092f3;
      uVar10 = ProjectSettings::save_custom
                         (pSVar15,(HashMap *)pCVar14,*(Vector **)(puVar23 + -5000),SUB81(pSVar32,0))
      ;
      *(undefined4 *)(puVar23 + -0x1308) = uVar10;
      *(undefined8 *)(puVar23 + -0x1390) = 0x109302;
      CowData<char32_t>::_unref(pCVar14);
      *(undefined8 *)(puVar23 + -0x1390) = 0x10930a;
      CowData<char32_t>::_unref((CowData<char32_t> *)pSVar3);
      *(undefined8 *)(puVar23 + -0x1390) = 0x109317;
      CowData<String>::_unref((CowData<String> *)(puVar23 + -0x12c0));
      *(undefined8 *)(puVar23 + -0x12e8) = 0;
      if (*(int *)(puVar23 + -0x1308) == 0) {
        *(undefined8 *)(puVar23 + -0x1390) = 0x109343;
        String::parse_latin1((String *)pCVar14,"icon.svg");
        *(undefined8 *)(puVar23 + -0x1390) = 0x109353;
        String::path_join(pSVar32);
        *(String **)(puVar23 + -0x1360) = (String *)(puVar23 + -0x12f8);
        *(undefined8 *)(puVar23 + -0x1390) = 0x109378;
        FileAccess::open((String *)(puVar23 + -0x12f8),(int)pSVar32,(Error *)0x2);
        *(undefined8 *)(puVar23 + -0x1390) = 0x109380;
        CowData<char32_t>::_unref((CowData<char32_t> *)pSVar32);
        *(undefined8 *)(puVar23 + -0x1390) = 0x109388;
        CowData<char32_t>::_unref(pCVar14);
        if (*(int *)(puVar23 + -0x1308) == 0) {
          plVar12 = *(long **)(puVar23 + -0x12f8);
          pcVar29 = *(code **)(*plVar12 + 0x2a8);
          *(undefined8 *)(puVar23 + -0x1390) = 0x1093b3;
          get_default_project_icon();
          *(undefined8 *)(puVar23 + -0x1390) = 0x1093bc;
          (*pcVar29)(plVar12,pSVar32);
          *(undefined8 *)(puVar23 + -0x1390) = 0x1093c4;
          CowData<char32_t>::_unref((CowData<char32_t> *)pSVar32);
          *(undefined8 *)(puVar23 + -0x1390) = 0x1093d5;
          uVar10 = OptionButton::get_selected();
          *(undefined8 *)(puVar23 + -0x1390) = 0x1093e4;
          EditorVCSInterface::create_vcs_metadata_files(uVar10,*(undefined8 *)(puVar23 + -0x1378));
          *(undefined8 *)(puVar23 + -0x12c8) = 0;
          *(undefined8 *)(puVar23 + -0x1390) = 0x1093ff;
          String::parse_latin1(pSVar32,".editorconfig");
          *(undefined8 *)(puVar23 + -0x1390) = 0x10940d;
          String::path_join(pSVar3);
          *(undefined8 *)(puVar23 + -0x1390) = 0x109415;
          CowData<char32_t>::_unref((CowData<char32_t> *)pSVar32);
          *(undefined8 *)(puVar23 + -0x1390) = 0x109427;
          FileAccess::open((String *)pCVar14,(int)pSVar3,(Error *)0x2);
          plVar12 = *(long **)(puVar23 + -0x12e8);
          if (plVar12 == (long *)0x0) {
            *(undefined8 *)(puVar23 + -0x1390) = 0x10a225;
            _err_print_error("ok_pressed","editor/project_manager/project_dialog.cpp",0x23a,
                             "Couldn\'t create .editorconfig in project path.",0,0);
          }
          else {
            pcVar29 = *(code **)(*plVar12 + 0x2b0);
            *(undefined8 *)(puVar23 + -0x12c8) = 0;
            *(undefined8 *)(puVar23 + -0x1390) = 0x10945d;
            String::parse_latin1(pSVar32,"root = true");
            *(undefined8 *)(puVar23 + -0x1390) = 0x109466;
            (*pcVar29)(plVar12,pSVar32);
            *(undefined8 *)(puVar23 + -0x1390) = 0x10946e;
            CowData<char32_t>::_unref((CowData<char32_t> *)pSVar32);
            plVar12 = *(long **)(puVar23 + -0x12e8);
            pcVar29 = *(code **)(*plVar12 + 0x2b0);
            *(undefined8 *)(puVar23 + -0x12c8) = 0;
            *(undefined8 *)(puVar23 + -0x1390) = 0x10949b;
            String::parse_latin1(pSVar32,"");
            *(undefined8 *)(puVar23 + -0x1390) = 0x1094a4;
            (*pcVar29)(plVar12,pSVar32);
            *(undefined8 *)(puVar23 + -0x1390) = 0x1094ac;
            CowData<char32_t>::_unref((CowData<char32_t> *)pSVar32);
            plVar12 = *(long **)(puVar23 + -0x12e8);
            pcVar29 = *(code **)(*plVar12 + 0x2b0);
            *(undefined8 *)(puVar23 + -0x12c8) = 0;
            *(undefined8 *)(puVar23 + -0x1390) = 0x1094d9;
            String::parse_latin1(pSVar32,"[*]");
            *(undefined8 *)(puVar23 + -0x1390) = 0x1094e2;
            (*pcVar29)(plVar12,pSVar32);
            *(undefined8 *)(puVar23 + -0x1390) = 0x1094ea;
            CowData<char32_t>::_unref((CowData<char32_t> *)pSVar32);
            plVar12 = *(long **)(puVar23 + -0x12e8);
            pcVar29 = *(code **)(*plVar12 + 0x2b0);
            *(undefined8 *)(puVar23 + -0x12c8) = 0;
            *(undefined8 *)(puVar23 + -0x1390) = 0x109517;
            String::parse_latin1(pSVar32,"charset = utf-8");
            *(undefined8 *)(puVar23 + -0x1390) = 0x109520;
            (*pcVar29)(plVar12,pSVar32);
            *(undefined8 *)(puVar23 + -0x1390) = 0x109528;
            CowData<char32_t>::_unref((CowData<char32_t> *)pSVar32);
            pcVar29 = *(code **)(**(long **)(puVar23 + -0x12e8) + 0x2d8);
            *(undefined8 *)(puVar23 + -0x1390) = 0x109539;
            (*pcVar29)();
            *(undefined8 *)(puVar23 + -0x1390) = 0x109546;
            FileAccess::set_hidden_attribute(pSVar3,true);
          }
          *(undefined8 *)(puVar23 + -0x1390) = 0x10954e;
          Ref<FileAccess>::unref((Ref<FileAccess> *)pCVar14);
          *(undefined8 *)(puVar23 + -0x1390) = 0x109556;
          CowData<char32_t>::_unref((CowData<char32_t> *)pSVar3);
          *(undefined8 *)(puVar23 + -0x1390) = 0x109560;
          Ref<FileAccess>::unref(*(Ref<FileAccess> **)(puVar23 + -0x1360));
          *(undefined8 *)(puVar23 + -0x1390) = 0x10956a;
          CowData<char32_t>::_unref(*(CowData<char32_t> **)(puVar23 + -0x1358));
          pvVar27 = *(void **)(puVar23 + -0x1270);
          if (pvVar27 != (void *)0x0) {
            if (*(int *)(puVar23 + -0x124c) != 0) {
              uVar6 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(puVar23 + -0x1250) * 4);
              if (uVar6 == 0) {
                *(undefined4 *)(puVar23 + -0x124c) = 0;
                *(undefined1 (*) [16])(puVar23 + -0x1260) = (undefined1  [16])0x0;
              }
              else {
                lVar17 = *(long *)(puVar23 + -0x1370);
                lVar21 = 0;
                do {
                  if (*(int *)(*(long *)(puVar23 + -0x1268) + lVar21) != 0) {
                    pvVar27 = *(void **)((long)pvVar27 + lVar21 * 2);
                    *(int *)(*(long *)(puVar23 + -0x1268) + lVar21) = 0;
                    if (*(char *)(lVar17 + *(int *)((long)pvVar27 + 0x18)) != '\0') {
                      *(undefined8 *)(puVar23 + -0x1390) = 0x10aa85;
                      Variant::_clear_internal();
                    }
                    *(undefined8 *)(puVar23 + -0x1390) = 0x1095ef;
                    CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar27 + 0x10));
                    *(undefined8 *)(puVar23 + -0x1390) = 0x1095f9;
                    Memory::free_static(pvVar27,false);
                    pvVar27 = *(void **)(puVar23 + -0x1270);
                    *(undefined8 *)((long)pvVar27 + lVar21 * 2) = 0;
                  }
                  lVar21 = lVar21 + 4;
                } while (lVar21 != (ulong)uVar6 << 2);
                *(undefined4 *)(puVar23 + -0x124c) = 0;
                *(undefined1 (*) [16])(puVar23 + -0x1260) = (undefined1  [16])0x0;
                if (pvVar27 == (void *)0x0) goto LAB_00109632;
              }
            }
            *(undefined8 *)(puVar23 + -0x1390) = 0x10a5d7;
            Memory::free_static(pvVar27,false);
            *(undefined8 *)(puVar23 + -0x1390) = 0x10a5e6;
            Memory::free_static(*(void **)(puVar23 + -0x1268),false);
          }
LAB_00109632:
          *(undefined8 *)(puVar23 + -0x1390) = 0x10963c;
          CowData<String>::_unref(*(CowData<String> **)(puVar23 + -0x1348));
          iVar11 = *(int *)(*(long *)(puVar23 + -0x1380) + 0xdb8);
          goto LAB_00108581;
        }
        *(undefined8 *)(puVar23 + -0x12e8) = 0;
        *(undefined8 *)(puVar23 + -0x1390) = 0x10a60b;
        String::parse_latin1((String *)pCVar14,"");
        *(undefined8 *)(puVar23 + -0x12f0) = 0;
        *(undefined8 *)(puVar23 + -0x1390) = 0x10a626;
        String::parse_latin1(pSVar3,"Couldn\'t create icon.svg in project path.");
        *(undefined8 *)(puVar23 + -0x1390) = 0x10a634;
        TTR(pSVar32,pSVar3);
        *(undefined8 *)(puVar23 + -0x1390) = 0x10a645;
        _set_message(*(undefined8 *)(puVar23 + -0x1380),pSVar32,0,0);
        *(undefined8 *)(puVar23 + -0x1390) = 0x10a64d;
        CowData<char32_t>::_unref((CowData<char32_t> *)pSVar32);
        *(undefined8 *)(puVar23 + -0x1390) = 0x10a655;
        CowData<char32_t>::_unref((CowData<char32_t> *)pSVar3);
        *(undefined8 *)(puVar23 + -0x1390) = 0x10a65d;
        CowData<char32_t>::_unref(pCVar14);
        *(undefined8 *)(puVar23 + -0x1390) = 0x10a667;
        Ref<FileAccess>::unref(*(Ref<FileAccess> **)(puVar23 + -0x1360));
      }
      else {
        *(undefined8 *)(puVar23 + -0x1390) = 0x10a3bf;
        String::parse_latin1((String *)pCVar14,"");
        *(undefined8 *)(puVar23 + -0x12f0) = 0;
        *(undefined8 *)(puVar23 + -0x1390) = 0x10a3da;
        String::parse_latin1(pSVar3,"Couldn\'t create project.godot in project path.");
        *(undefined8 *)(puVar23 + -0x1390) = 0x10a3e8;
        TTR(pSVar32,pSVar3);
        *(undefined8 *)(puVar23 + -0x1390) = 0x10a3f9;
        _set_message(*(undefined8 *)(puVar23 + -0x1380),pSVar32,0,0);
        *(undefined8 *)(puVar23 + -0x1390) = 0x10a401;
        CowData<char32_t>::_unref((CowData<char32_t> *)pSVar32);
        *(undefined8 *)(puVar23 + -0x1390) = 0x10a409;
        CowData<char32_t>::_unref((CowData<char32_t> *)pSVar3);
        *(undefined8 *)(puVar23 + -0x1390) = 0x10a411;
        CowData<char32_t>::_unref(pCVar14);
      }
      *(undefined8 *)(puVar23 + -0x1390) = 0x10a41b;
      CowData<char32_t>::_unref(*(CowData<char32_t> **)(puVar23 + -0x1358));
      pvVar27 = *(void **)(puVar23 + -0x1270);
      if (pvVar27 != (void *)0x0) {
        if (*(int *)(puVar23 + -0x124c) != 0) {
          uVar6 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(puVar23 + -0x1250) * 4);
          if (uVar6 == 0) {
            *(undefined4 *)(puVar23 + -0x124c) = 0;
            *(undefined1 (*) [16])(puVar23 + -0x1260) = (undefined1  [16])0x0;
          }
          else {
            lVar17 = *(long *)(puVar23 + -0x1370);
            lVar21 = 0;
            do {
              if (*(int *)(*(long *)(puVar23 + -0x1268) + lVar21) != 0) {
                pvVar27 = *(void **)((long)pvVar27 + lVar21 * 2);
                *(int *)(*(long *)(puVar23 + -0x1268) + lVar21) = 0;
                if (*(char *)(lVar17 + *(int *)((long)pvVar27 + 0x18)) != '\0') {
                  *(undefined8 *)(puVar23 + -0x1390) = 0x10a97a;
                  Variant::_clear_internal();
                }
                *(undefined8 *)(puVar23 + -0x1390) = 0x10a49c;
                CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar27 + 0x10));
                *(undefined8 *)(puVar23 + -0x1390) = 0x10a4a6;
                Memory::free_static(pvVar27,false);
                pvVar27 = *(void **)(puVar23 + -0x1270);
                *(undefined8 *)((long)pvVar27 + lVar21 * 2) = 0;
              }
              lVar21 = lVar21 + 4;
            } while (lVar21 != (ulong)uVar6 << 2);
            *(undefined4 *)(puVar23 + -0x124c) = 0;
            *(undefined1 (*) [16])(puVar23 + -0x1260) = (undefined1  [16])0x0;
            if (pvVar27 == (void *)0x0) goto LAB_0010a4df;
          }
        }
        *(undefined8 *)(puVar23 + -0x1390) = 0x10a577;
        Memory::free_static(pvVar27,false);
        *(undefined8 *)(puVar23 + -0x1390) = 0x10a586;
        Memory::free_static(*(void **)(puVar23 + -0x1268),false);
      }
LAB_0010a4df:
      *(undefined8 *)(puVar23 + -0x1390) = 0x10a4e9;
      CowData<String>::_unref(*(CowData<String> **)(puVar23 + -0x1348));
    }
    else {
      pRVar4 = (Ref<DirAccess> *)(puVar23 + -0x12e8);
      pCVar14 = (CowData<char32_t> *)(puVar23 + -0x12c8);
      *(undefined8 *)(puVar23 + -0x1390) = 0x109a65;
      DirAccess::create(pRVar4,2);
      plVar12 = *(long **)(puVar23 + -0x12e8);
      pcVar29 = *(code **)(*plVar12 + 0x1d8);
      *(undefined8 *)(puVar23 + -0x12c8) = 0;
      if (*(long *)(puVar23 + -0x1328) != 0) {
        *(undefined8 *)(puVar23 + -0x1390) = 0x109a98;
        CowData<char32_t>::_ref(pCVar14,*(CowData **)(puVar23 + -0x1378));
      }
      *(undefined8 *)(puVar23 + -0x1390) = 0x109aa1;
      cVar8 = (*pcVar29)(plVar12,pCVar14);
      if (cVar8 != '\0') {
        *(undefined8 *)(puVar23 + -0x1390) = 0x109fb0;
        CowData<char32_t>::_unref(pCVar14);
        *(undefined1 **)(puVar23 + -5000) = puVar23 + -0x1278;
LAB_00109fbc:
        *(undefined8 *)(puVar23 + -0x1390) = 0x109fc4;
        Ref<DirAccess>::unref(pRVar4);
        goto LAB_00108a85;
      }
      plVar12 = *(long **)(puVar23 + -0x12e8);
      pcVar29 = *(code **)(*plVar12 + 0x1b8);
      *(undefined8 *)(puVar23 + -0x1278) = 0;
      *(CowData<char32_t> **)(puVar23 + -5000) = (CowData<char32_t> *)(puVar23 + -0x1278);
      if (*(long *)(puVar23 + -0x1328) != 0) {
        *(undefined8 *)(puVar23 + -0x1390) = 0x109ae8;
        CowData<char32_t>::_ref
                  ((CowData<char32_t> *)(puVar23 + -0x1278),*(CowData **)(puVar23 + -0x1378));
      }
      pCVar24 = *(CowData<char32_t> **)(puVar23 + -5000);
      *(undefined8 *)(puVar23 + -0x1390) = 0x109af5;
      iVar11 = (*pcVar29)(plVar12,pCVar24);
      if (iVar11 == 0) {
        *(undefined8 *)(puVar23 + -0x1390) = 0x109b06;
        CowData<char32_t>::_unref(*(CowData<char32_t> **)(puVar23 + -5000));
        *(undefined8 *)(puVar23 + -0x1390) = 0x109b0e;
        CowData<char32_t>::_unref(pCVar14);
        goto LAB_00109fbc;
      }
      pSVar32 = (String *)(puVar23 + -0x12d8);
      *(undefined8 *)(puVar23 + -0x1390) = 0x10a680;
      CowData<char32_t>::_unref(pCVar24);
      *(undefined8 *)(puVar23 + -0x1390) = 0x10a688;
      CowData<char32_t>::_unref(pCVar14);
      *(undefined8 *)(puVar23 + -0x12c8) = 0;
      *(undefined8 *)(puVar23 + -0x1390) = 0x10a6a3;
      String::parse_latin1((String *)pCVar14,"");
      *(undefined8 *)(puVar23 + -0x12d8) = 0;
      *(undefined8 *)(puVar23 + -0x1390) = 0x10a6be;
      String::parse_latin1(pSVar32,"Couldn\'t create project directory, check permissions.");
      *(undefined8 *)(puVar23 + -0x1390) = 0x10a6cc;
      TTR((String *)pCVar24,pSVar32);
      *(undefined8 *)(puVar23 + -0x1390) = 0x10a6dd;
      _set_message(*(undefined8 *)(puVar23 + -0x1380),pCVar24,0,0);
      *(undefined8 *)(puVar23 + -0x1390) = 0x10a6e5;
      CowData<char32_t>::_unref(pCVar24);
      *(undefined8 *)(puVar23 + -0x1390) = 0x10a6ed;
      CowData<char32_t>::_unref((CowData<char32_t> *)pSVar32);
      *(undefined8 *)(puVar23 + -0x1390) = 0x10a6f5;
      CowData<char32_t>::_unref(pCVar14);
      *(undefined8 *)(puVar23 + -0x1390) = 0x10a6fd;
      Ref<DirAccess>::unref(pRVar4);
    }
  }
  else {
LAB_00108581:
    if (iVar11 == 1) {
      if ((*(long *)(*(long *)(puVar23 + -0x1380) + 0xe80) != 0) &&
         (1 < *(uint *)(*(long *)(*(long *)(puVar23 + -0x1380) + 0xe80) + -8))) {
        *(undefined8 *)(puVar23 + -0x1390) = 0x10a144;
        LineEdit::get_text();
        *(undefined1 **)(puVar23 + -5000) = puVar23 + -0x1278;
        *(undefined8 *)(puVar23 + -0x1390) = 0x10a15b;
        String::simplify_path();
        if (*(long *)(puVar23 + -0x1328) != *(long *)(puVar23 + -0x1278)) {
          *(undefined8 *)(puVar23 + -0x1390) = 0x10a174;
          CowData<char32_t>::_unref(*(CowData<char32_t> **)(puVar23 + -0x1378));
          uVar16 = *(undefined8 *)(puVar23 + -0x1278);
          *(undefined8 *)(puVar23 + -0x1278) = 0;
          *(undefined8 *)(puVar23 + -0x1328) = uVar16;
        }
        *(undefined8 *)(puVar23 + -0x1390) = 0x10a196;
        CowData<char32_t>::_unref(*(CowData<char32_t> **)(puVar23 + -5000));
        *(undefined8 *)(puVar23 + -0x1390) = 0x10a19e;
        CowData<char32_t>::_unref((CowData<char32_t> *)(puVar23 + -0x12c8));
        goto LAB_00108593;
      }
LAB_001089bb:
      lVar17 = *(long *)(puVar23 + -0x1380);
      *(undefined8 *)(puVar23 + -0x1390) = 0x1089c8;
      Window::hide();
      if (*(uint *)(lVar17 + 0xdb8) < 3) {
        *(undefined8 *)(puVar23 + -0x1390) = 0x109c39;
        bVar9 = (bool)BaseButton::is_pressed();
        *(undefined8 *)(puVar23 + -0x1278) = 0;
        *(CowData<char32_t> **)(puVar23 + -5000) = (CowData<char32_t> *)(puVar23 + -0x1278);
        if (*(long *)(puVar23 + -0x1328) != 0) {
          *(undefined8 *)(puVar23 + -0x1390) = 0x109c68;
          CowData<char32_t>::_ref
                    ((CowData<char32_t> *)(puVar23 + -0x1278),*(CowData **)(puVar23 + -0x1378));
        }
        if (ok_pressed()::{lambda()#2}::operator()()::sname == '\0') {
          *(undefined8 *)(puVar23 + -0x1390) = 0x10a1be;
          iVar11 = __cxa_guard_acquire(&ok_pressed()::{lambda()#2}::operator()()::sname);
          if (iVar11 != 0) {
            *(undefined8 *)(puVar23 + -0x1390) = 0x10a1da;
            _scs_create((char *)&ok_pressed()::{lambda()#2}::operator()()::sname,true);
            *(undefined8 *)(puVar23 + -0x1390) = 0x10a1f0;
            __cxa_atexit(StringName::~StringName,&ok_pressed()::{lambda()#2}::operator()()::sname,
                         &__dso_handle);
            *(undefined8 *)(puVar23 + -0x1390) = 0x10a1f8;
            __cxa_guard_release(&ok_pressed()::{lambda()#2}::operator()()::sname);
          }
        }
        pVVar5 = (Variant *)(puVar23 + -0x11c8);
        *(undefined8 *)(puVar23 + -0x1390) = 0x109c9a;
        Variant::Variant(pVVar5,*(String **)(puVar23 + -5000));
        pVVar22 = (Variant *)(puVar23 + -0x1180);
        *(undefined8 *)(puVar23 + -0x1390) = 0x109cad;
        Variant::Variant((Variant *)(puVar23 + -0x11b0),bVar9);
        *(undefined1 (*) [16])(puVar23 + -0x1190) = (undefined1  [16])0x0;
        lVar17 = **(long **)(puVar23 + -0x1380);
        *(undefined8 *)(puVar23 + -0x1198) = 0;
        *(Variant **)(puVar23 + -0x11e8) = pVVar5;
        *(Variant **)(puVar23 + -0x11e0) = (Variant *)(puVar23 + -0x11b0);
        pcVar29 = *(code **)(lVar17 + 0xd0);
        *(undefined8 *)(puVar23 + -0x1390) = 0x109d03;
        (*pcVar29)(*(long **)(puVar23 + -0x1380),&ok_pressed()::{lambda()#2}::operator()()::sname,
                   puVar23 + -0x11e8,2);
        do {
          pVVar2 = pVVar22 + -0x18;
          pVVar22 = pVVar22 + -0x18;
          if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
            *(undefined8 *)(puVar23 + -0x1390) = 0x10a938;
            Variant::_clear_internal();
          }
        } while (pVVar22 != pVVar5);
        *(undefined8 *)(puVar23 + -0x1390) = 0x109d24;
        CowData<char32_t>::_unref(*(CowData<char32_t> **)(puVar23 + -5000));
      }
      else if (*(uint *)(lVar17 + 0xdb8) == 3) {
        if (ok_pressed()::{lambda()#3}::operator()()::sname == '\0') {
          *(undefined8 *)(puVar23 + -0x1390) = 0x10aae6;
          iVar11 = __cxa_guard_acquire(&ok_pressed()::{lambda()#3}::operator()()::sname);
          if (iVar11 != 0) {
            *(undefined8 *)(puVar23 + -0x1390) = 0x10ab02;
            _scs_create((char *)&ok_pressed()::{lambda()#3}::operator()()::sname,true);
            *(undefined8 *)(puVar23 + -0x1390) = 0x10ab18;
            __cxa_atexit(StringName::~StringName,&ok_pressed()::{lambda()#3}::operator()()::sname,
                         &__dso_handle);
            *(undefined8 *)(puVar23 + -0x1390) = 0x10ab20;
            __cxa_guard_release(&ok_pressed()::{lambda()#3}::operator()()::sname);
          }
        }
        *(undefined8 *)(puVar23 + -0x11c8) = 0;
        lVar17 = **(long **)(puVar23 + -0x1380);
        *(undefined1 (*) [16])(puVar23 + -0x11c0) = (undefined1  [16])0x0;
        pcVar29 = *(code **)(lVar17 + 0xd0);
        *(undefined8 *)(puVar23 + -0x1390) = 0x108a23;
        (*pcVar29)(*(long **)(puVar23 + -0x1380),&ok_pressed()::{lambda()#3}::operator()()::sname,0,
                   0);
        if (Variant::needs_deinit[*(int *)(puVar23 + -0x11c8)] != '\0') {
          *(undefined8 *)(puVar23 + -0x1390) = 0x108a49;
          Variant::_clear_internal();
        }
      }
    }
    else if (iVar11 == 2) {
LAB_00108593:
      if ((*(long *)(*(long *)(puVar23 + -0x1380) + 0xe80) == 0) ||
         (*(uint *)(*(long *)(*(long *)(puVar23 + -0x1380) + 0xe80) + -8) < 2)) {
        *(undefined8 *)(puVar23 + -0x1390) = 0x1085d3;
        _err_print_error("ok_pressed","editor/project_manager/project_dialog.cpp",0x250,
                         "Condition \"zip_path.is_empty()\" is true.",0,0);
        goto LAB_001085d8;
      }
      *(undefined8 *)(puVar23 + -0x1320) = 0;
      *(undefined1 **)(puVar23 + -0x1370) = puVar23 + -0x1320;
      *(undefined8 *)(puVar23 + -0x1390) = 0x109676;
      zipio_create_io(puVar23 + -0x12c8);
      *(undefined1 **)(puVar23 + -5000) = puVar23 + -0x1278;
      *(undefined8 *)(puVar23 + -0x1390) = 0x109694;
      String::utf8();
      *(undefined8 *)(puVar23 + -0x1390) = 0x10969c;
      uVar16 = CharString::get_data();
      *(undefined8 *)(puVar23 + -0x1390) = 0x1096a7;
      lVar17 = unzOpen2(uVar16);
      if (*(long *)(puVar23 + -0x1278) != 0) {
        LOCK();
        plVar12 = (long *)(*(long *)(puVar23 + -0x1278) + -0x10);
        *plVar12 = *plVar12 + -1;
        UNLOCK();
        if (*plVar12 == 0) {
          lVar21 = *(long *)(puVar23 + -0x1278);
          *(undefined8 *)(puVar23 + -0x1278) = 0;
          *(undefined8 *)(puVar23 + -0x1390) = 0x109f9f;
          Memory::free_static((void *)(lVar21 + -0x10),false);
        }
      }
      if (lVar17 == 0) {
        lVar17 = *(long *)(puVar23 + -0x1380);
        pSVar32 = (String *)(puVar23 + -0x12e8);
        *(undefined8 *)(puVar23 + -0x12d8) = 0;
        uVar16 = *(undefined8 *)(lVar17 + 0xe78);
        *(undefined8 *)(puVar23 + -0x1390) = 0x10a73f;
        String::parse_latin1((String *)(puVar23 + -0x12d8),"");
        *(undefined8 *)(puVar23 + -0x12e8) = 0;
        *(undefined8 *)(puVar23 + -0x1390) = 0x10a75a;
        String::parse_latin1(pSVar32,"Error opening package file, not in ZIP format.");
        pSVar3 = *(String **)(puVar23 + -5000);
        *(undefined8 *)(puVar23 + -0x1390) = 0x10a76c;
        TTR(pSVar3,pSVar32);
        *(undefined8 *)(puVar23 + -0x1390) = 0x10a777;
        AcceptDialog::set_text(uVar16,pSVar3);
        *(undefined8 *)(puVar23 + -0x1390) = 0x10a77f;
        CowData<char32_t>::_unref((CowData<char32_t> *)pSVar3);
        *(undefined8 *)(puVar23 + -0x1390) = 0x10a787;
        CowData<char32_t>::_unref((CowData<char32_t> *)pSVar32);
        *(undefined8 *)(puVar23 + -0x1390) = 0x10a78f;
        CowData<char32_t>::_unref((CowData<char32_t> *)(puVar23 + -0x12d8));
        pVVar26 = *(Vector2i **)(lVar17 + 0xe78);
        *(undefined8 *)(puVar23 + -0x11c8) = 0;
        *(undefined8 *)(puVar23 + -0x1390) = 0x10a7af;
        Window::popup_centered(pVVar26);
      }
      else {
        *(undefined8 *)(puVar23 + -0x1318) = 0;
        *(undefined8 *)(puVar23 + -0x1390) = 0x1096dd;
        iVar11 = unzGoToFirstFile(lVar17);
        if (iVar11 == 0) {
          pCVar14 = (CowData<char32_t> *)(puVar23 + -0x12e8);
          do {
            *(undefined8 *)(puVar23 + -0x1390) = 0;
            *(undefined8 *)(puVar23 + -0x1398) = 0;
            *(undefined8 *)(puVar23 + -0x13a0) = 0x10971f;
            unzGetCurrentFileInfo
                      (lVar17,*(undefined8 *)(puVar23 + -5000),puVar23 + -0x1018,0x4000,0,0);
            *(undefined8 *)(puVar23 + -0x13a0) = 0x10972f;
            String::utf8((char *)pCVar14,(int)(puVar23 + -0x1018));
            *(undefined8 *)(puVar23 + -0x13a0) = 0x10973a;
            cVar8 = String::begins_with((char *)pCVar14);
            if (cVar8 == '\0') {
              pSVar32 = (String *)(puVar23 + -0x12d8);
              *(undefined8 *)(puVar23 + -0x1390) = 0x109755;
              String::get_file();
              *(undefined8 *)(puVar23 + -0x1390) = 0x109764;
              cVar8 = String::operator==(pSVar32,"project.godot");
              *(undefined8 *)(puVar23 + -0x1390) = 0x10976f;
              CowData<char32_t>::_unref((CowData<char32_t> *)pSVar32);
              if (cVar8 != '\0') {
                *(undefined8 *)(puVar23 + -0x1390) = 0x10983b;
                String::get_base_dir();
                if (*(long *)(puVar23 + -0x1318) != *(long *)(puVar23 + -0x12d8)) {
                  *(undefined8 *)(puVar23 + -0x1390) = 0x109854;
                  CowData<char32_t>::_unref((CowData<char32_t> *)(puVar23 + -0x1318));
                  uVar16 = *(undefined8 *)(puVar23 + -0x12d8);
                  *(undefined8 *)(puVar23 + -0x12d8) = 0;
                  *(undefined8 *)(puVar23 + -0x1318) = uVar16;
                }
                *(undefined8 *)(puVar23 + -0x1390) = 0x109875;
                CowData<char32_t>::_unref((CowData<char32_t> *)pSVar32);
                *(undefined8 *)(puVar23 + -0x1390) = 0x10987d;
                CowData<char32_t>::_unref(pCVar14);
                goto LAB_0010987d;
              }
            }
            *(undefined8 *)(puVar23 + -0x1390) = 0x109780;
            iVar11 = unzGoToNextFile(lVar17);
            *(undefined8 *)(puVar23 + -0x1390) = 0x10978b;
            CowData<char32_t>::_unref(pCVar14);
          } while (iVar11 == 0);
        }
        if (iVar11 != -100) {
LAB_0010987d:
          *(undefined8 *)(puVar23 + -0x1390) = 0x10988e;
          cVar8 = BaseButton::is_pressed();
          if (cVar8 != '\0') {
            pRVar4 = (Ref<DirAccess> *)(puVar23 + -0x12f0);
            pCVar14 = (CowData<char32_t> *)(puVar23 + -0x12d8);
            *(undefined8 *)(puVar23 + -0x1390) = 0x1098b3;
            DirAccess::create(pRVar4,2);
            plVar12 = *(long **)(puVar23 + -0x12f0);
            pcVar29 = *(code **)(*plVar12 + 0x1d8);
            *(undefined8 *)(puVar23 + -0x12d8) = 0;
            if (*(long *)(puVar23 + -0x1328) != 0) {
              *(undefined8 *)(puVar23 + -0x1390) = 0x1098e7;
              CowData<char32_t>::_ref(pCVar14,*(CowData **)(puVar23 + -0x1378));
            }
            *(undefined8 *)(puVar23 + -0x1390) = 0x1098f0;
            cVar8 = (*pcVar29)(plVar12,pCVar14);
            if (cVar8 == '\0') {
              plVar12 = *(long **)(puVar23 + -0x12f0);
              pcVar29 = *(code **)(*plVar12 + 0x1b8);
              *(undefined8 *)(puVar23 + -0x1278) = 0;
              if (*(long *)(puVar23 + -0x1328) != 0) {
                *(undefined8 *)(puVar23 + -0x1390) = 0x109929;
                CowData<char32_t>::_ref
                          (*(CowData<char32_t> **)(puVar23 + -5000),*(CowData **)(puVar23 + -0x1378)
                          );
              }
              pCVar24 = *(CowData<char32_t> **)(puVar23 + -5000);
              *(undefined8 *)(puVar23 + -0x1390) = 0x109936;
              iVar11 = (*pcVar29)(plVar12,pCVar24);
              if (iVar11 != 0) {
                pCVar24 = *(CowData<char32_t> **)(puVar23 + -5000);
                pSVar32 = (String *)(puVar23 + -0x12e8);
                *(undefined8 *)(puVar23 + -0x1390) = 0x10a993;
                CowData<char32_t>::_unref(pCVar24);
                *(undefined8 *)(puVar23 + -0x1390) = 0x10a99b;
                CowData<char32_t>::_unref(pCVar14);
                *(undefined8 *)(puVar23 + -0x12d8) = 0;
                *(undefined8 *)(puVar23 + -0x1390) = 0x10a9b6;
                String::parse_latin1((String *)pCVar14,"");
                *(undefined8 *)(puVar23 + -0x12e8) = 0;
                *(undefined8 *)(puVar23 + -0x1390) = 0x10a9d1;
                String::parse_latin1
                          (pSVar32,"Couldn\'t create project directory, check permissions.");
                *(undefined8 *)(puVar23 + -0x1390) = 0x10a9df;
                TTR((String *)pCVar24,pSVar32);
                *(undefined8 *)(puVar23 + -0x1390) = 0x10a9f0;
                _set_message(*(undefined8 *)(puVar23 + -0x1380),pCVar24,0,0);
                *(undefined8 *)(puVar23 + -0x1390) = 0x10a9f8;
                CowData<char32_t>::_unref(pCVar24);
                *(undefined8 *)(puVar23 + -0x1390) = 0x10aa00;
                CowData<char32_t>::_unref((CowData<char32_t> *)pSVar32);
                *(undefined8 *)(puVar23 + -0x1390) = 0x10aa08;
                CowData<char32_t>::_unref(pCVar14);
                *(undefined8 *)(puVar23 + -0x1390) = 0x10aa10;
                Ref<DirAccess>::unref(pRVar4);
                goto LAB_00109f5e;
              }
              *(undefined8 *)(puVar23 + -0x1390) = 0x109946;
              CowData<char32_t>::_unref(pCVar24);
            }
            *(undefined8 *)(puVar23 + -0x1390) = 0x10994e;
            CowData<char32_t>::_unref(pCVar14);
            *(undefined8 *)(puVar23 + -0x1390) = 0x109956;
            Ref<DirAccess>::unref(pRVar4);
          }
          *(undefined8 *)(puVar23 + -0x1390) = 0x10996d;
          iVar11 = unzGoToFirstFile(lVar17);
          *(undefined8 *)(puVar23 + -0x12e0) = 0;
          if (iVar11 == 0) {
            do {
              *(undefined8 *)(puVar23 + -0x1390) = 0;
              *(undefined8 *)(puVar23 + -0x1398) = 0;
              *(undefined8 *)(puVar23 + -0x13a0) = 0x1099fa;
              iVar11 = unzGetCurrentFileInfo
                                 (lVar17,*(undefined8 *)(puVar23 + -5000),puVar23 + -0x1018,0x4000,0
                                  ,0);
              if (iVar11 != 0) {
                *(undefined8 *)(puVar23 + -0x1398) = 0;
                *(undefined8 *)(puVar23 + -0x13a0) = 0x109f4f;
                _err_print_error("ok_pressed","editor/project_manager/project_dialog.cpp",0x28b,
                                 "Condition \"ret != (0)\" is true.",
                                 "Failed to get current file info.",0);
                goto LAB_00109f51;
              }
              pCVar14 = (CowData<char32_t> *)(puVar23 + -0x1310);
              *(undefined8 *)(puVar23 + -0x1390) = 0x109a1a;
              String::utf8((char *)pCVar14,(int)(puVar23 + -0x1018));
              *(undefined8 *)(puVar23 + -0x1390) = 0x109a25;
              cVar8 = String::begins_with((char *)pCVar14);
              if (cVar8 == '\0') {
                pSVar32 = (String *)(puVar23 + -0x1308);
                *(undefined8 *)(puVar23 + -0x1390) = 0x1099a0;
                String::trim_prefix(pSVar32);
                if ((*(long *)(puVar23 + -0x1308) != 0) &&
                   (1 < *(uint *)(*(long *)(puVar23 + -0x1308) + -8))) {
                  *(undefined8 *)(puVar23 + -0x1390) = 0x10a32f;
                  cVar8 = String::ends_with((char *)pSVar32);
                  if (cVar8 == '\0') {
                    lVar21 = *(long *)(puVar23 + -0x1240);
                    *(undefined8 *)(puVar23 + -0x12d0) = 0;
                    if (lVar21 < 0) {
                      *(undefined8 *)(puVar23 + -0x1390) = 0x10af0f;
                      _err_print_error("resize","./core/templates/cowdata.h",0x157,
                                       "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER"
                                      );
LAB_0010af0f:
                      uVar10 = 0;
                      *(undefined8 *)(puVar23 + -0x1390) = 0x10af1a;
                      unzOpenCurrentFile(lVar17);
                      *(undefined8 *)(puVar23 + -0x1368) = 0;
                    }
                    else {
                      if (lVar21 == 0) goto LAB_0010af0f;
                      uVar18 = lVar21 - 1U | lVar21 - 1U >> 1;
                      uVar18 = uVar18 | uVar18 >> 2;
                      uVar18 = uVar18 | uVar18 >> 4;
                      uVar18 = uVar18 | uVar18 >> 8;
                      uVar18 = uVar18 | uVar18 >> 0x10;
                      *(undefined8 *)(puVar23 + -0x1390) = 0x10a825;
                      puVar19 = (undefined8 *)
                                Memory::alloc_static((uVar18 | uVar18 >> 0x20) + 0x11,false);
                      if (puVar19 == (undefined8 *)0x0) {
                        *(undefined8 *)(puVar23 + -0x1390) = 0x10b036;
                        _err_print_error("resize","./core/templates/cowdata.h",0x171,
                                         "Parameter \"mem_new\" is null.");
                        goto LAB_0010af0f;
                      }
                      *puVar19 = 1;
                      *(undefined8 **)(puVar23 + -0x12d0) = puVar19 + 2;
                      puVar19[1] = lVar21;
                      *(undefined8 **)(puVar23 + -0x1368) = puVar19;
                      *(undefined8 *)(puVar23 + -0x1390) = 0x10a856;
                      unzOpenCurrentFile(lVar17);
                      uVar10 = (undefined4)(*(ulong **)(puVar23 + -0x1368))[1];
                      uVar18 = **(ulong **)(puVar23 + -0x1368);
                      lVar21 = *(long *)(puVar23 + -0x12d0);
                      *(long *)(puVar23 + -0x1368) = lVar21;
                      if (1 < uVar18) {
                        if (lVar21 == 0) {
                    /* WARNING: Does not return */
                          pcVar29 = (code *)invalidInstructionException();
                          (*pcVar29)();
                        }
                        lVar21 = *(long *)(lVar21 + -8);
                        lVar20 = 0;
                        if (lVar21 != 0) {
                          uVar18 = lVar21 - 1U | lVar21 - 1U >> 1;
                          uVar18 = uVar18 | uVar18 >> 2;
                          uVar18 = uVar18 | uVar18 >> 4;
                          uVar18 = uVar18 | uVar18 >> 8;
                          uVar18 = uVar18 | uVar18 >> 0x10;
                          lVar20 = (uVar18 | uVar18 >> 0x20) + 1;
                        }
                        *(long *)(puVar23 + -0x1360) = lVar21;
                        *(undefined8 *)(puVar23 + -0x1390) = 0x10af8f;
                        puVar19 = (undefined8 *)Memory::alloc_static(lVar20 + 0x10,false);
                        __n = *(size_t *)(puVar23 + -0x1360);
                        if (puVar19 == (undefined8 *)0x0) {
                          *(undefined8 *)(puVar23 + -0x1390) = 0x10b060;
                          _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                                           "Parameter \"mem_new\" is null.");
                        }
                        else {
                          *(undefined8 **)(puVar23 + -0x1368) = puVar19 + 2;
                          *puVar19 = 1;
                          puVar19[1] = __n;
                          *(void **)(puVar23 + -0x1360) = *(void **)(puVar23 + -0x12d0);
                          *(undefined8 *)(puVar23 + -0x1390) = 0x10afc6;
                          memcpy(puVar19 + 2,*(void **)(puVar23 + -0x12d0),__n);
                          LOCK();
                          plVar12 = (long *)(*(long *)(puVar23 + -0x1360) + -0x10);
                          *plVar12 = *plVar12 + -1;
                          UNLOCK();
                          if (*plVar12 == 0) {
                            *(undefined8 *)(puVar23 + -0x1390) = 0x10afe6;
                            Memory::free_static((void *)(*(long *)(puVar23 + -0x12d0) + -0x10),false
                                               );
                          }
                          *(undefined8 *)(puVar23 + -0x12d0) = *(undefined8 *)(puVar23 + -0x1368);
                        }
                      }
                    }
                    *(undefined8 *)(puVar23 + -0x1390) = 0x10a889;
                    iVar11 = unzReadCurrentFile(lVar17,*(undefined8 *)(puVar23 + -0x1368),uVar10);
                    if (iVar11 < 0) {
                      *(undefined8 *)(puVar23 + -0x12f8) = 0;
                      *(CowData<char32_t> **)(puVar23 + -0x1360) =
                           (CowData<char32_t> *)(puVar23 + -0x12f8);
                      if (*(long *)(puVar23 + -0x1308) != 0) {
                        *(undefined8 *)(puVar23 + -0x1390) = 0x10ae3d;
                        CowData<char32_t>::_ref
                                  ((CowData<char32_t> *)(puVar23 + -0x12f8),(CowData *)pSVar32);
                      }
                      pSVar3 = (String *)(puVar23 + -0x1300);
                      *(undefined8 *)(puVar23 + -0x1300) = 0;
                      pCVar24 = (CowData<char32_t> *)(puVar23 + -0x12f0);
                      *(undefined8 *)(puVar23 + -0x1390) = 0x10ae68;
                      String::parse_latin1
                                (pSVar3,
                                 "An error occurred while attempting to read from file: %s. This file will not be used."
                                );
                      pCVar31 = *(CowData<char32_t> **)(puVar23 + -0x1360);
                      *(undefined8 *)(puVar23 + -0x1390) = 0x10ae7b;
                      vformat<String>(pCVar24,pSVar3,pCVar31);
                      *(undefined8 *)(puVar23 + -0x1398) = 0;
                      *(undefined8 *)(puVar23 + -0x13a0) = 0x10aea6;
                      _err_print_error("ok_pressed","editor/project_manager/project_dialog.cpp",
                                       0x2a0,"Condition \"ret < 0\" is true. Breaking.",pCVar24,0);
                      *(undefined8 *)(puVar23 + -0x13a0) = 0x10aeae;
                      CowData<char32_t>::_unref(pCVar24);
                      *(undefined8 *)(puVar23 + -0x13a0) = 0x10aeb6;
                      CowData<char32_t>::_unref((CowData<char32_t> *)pSVar3);
                      *(undefined8 *)(puVar23 + -0x13a0) = 0x10aebe;
                      CowData<char32_t>::_unref(pCVar31);
                      *(undefined8 *)(puVar23 + -0x13a0) = 0x10aecb;
                      CowData<unsigned_char>::_unref((CowData<unsigned_char> *)(puVar23 + -0x12d0));
                      *(undefined8 *)(puVar23 + -0x13a0) = 0x10aed3;
                      CowData<char32_t>::_unref((CowData<char32_t> *)pSVar32);
                      *(undefined8 *)(puVar23 + -0x13a0) = 0x10aedb;
                      CowData<char32_t>::_unref(pCVar14);
                      lVar21 = *(long *)(puVar23 + -0x12e0);
                      goto LAB_001085f8;
                    }
                    pSVar3 = (String *)(puVar23 + -0x12f0);
                    *(undefined8 *)(puVar23 + -0x1390) = 0x10a8a1;
                    unzCloseCurrentFile(lVar17);
                    *(undefined8 *)(puVar23 + -0x1390) = 0x10a8b1;
                    String::path_join(pSVar3);
                    *(String **)(puVar23 + -0x1360) = (String *)(puVar23 + -0x12f8);
                    *(undefined8 *)(puVar23 + -0x1390) = 0x10a8d0;
                    FileAccess::open((String *)(puVar23 + -0x12f8),(int)pSVar3,(Error *)0x2);
                    *(undefined8 *)(puVar23 + -0x1390) = 0x10a8d8;
                    CowData<char32_t>::_unref((CowData<char32_t> *)pSVar3);
                    plVar12 = *(long **)(puVar23 + -0x12f8);
                    if (plVar12 == (long *)0x0) {
                      *(undefined8 *)(puVar23 + -0x12f0) = 0;
                      if (*(long *)(puVar23 + -0x1308) != 0) {
                        *(undefined8 *)(puVar23 + -0x1390) = 0x10ace2;
                        CowData<char32_t>::_ref((CowData<char32_t> *)pSVar3,(CowData *)pSVar32);
                      }
                      *(undefined8 *)(puVar23 + -0x1390) = 0x10acf2;
                      Vector<String>::push_back((Vector<String> *)(puVar23 + -0x12e8),pSVar3);
                      *(undefined8 *)(puVar23 + -0x1390) = 0x10acfa;
                      CowData<char32_t>::_unref((CowData<char32_t> *)pSVar3);
                    }
                    else {
                      pcVar29 = *(code **)(*plVar12 + 0x2d0);
                      if (*(long *)(puVar23 + -0x1368) == 0) {
                        uVar16 = 0;
                      }
                      else {
                        uVar16 = *(undefined8 *)(*(long *)(puVar23 + -0x1368) + -8);
                      }
                      *(undefined8 *)(puVar23 + -0x1390) = 0x10a90c;
                      (*pcVar29)(plVar12,*(undefined8 *)(puVar23 + -0x1368),uVar16);
                    }
                    *(undefined8 *)(puVar23 + -0x1390) = 0x10a916;
                    Ref<FileAccess>::unref(*(Ref<FileAccess> **)(puVar23 + -0x1360));
                    *(undefined8 *)(puVar23 + -0x1390) = 0x10a923;
                    CowData<unsigned_char>::_unref((CowData<unsigned_char> *)(puVar23 + -0x12d0));
                  }
                  else {
                    pSVar3 = (String *)(puVar23 + -0x12d8);
                    *(undefined1 **)(puVar23 + -0x1358) = puVar23 + -0x12f0;
                    *(undefined8 *)(puVar23 + -0x1390) = 0x10a359;
                    DirAccess::create(puVar23 + -0x12f0,2);
                    lVar21 = **(long **)(puVar23 + -0x12f0);
                    *(long **)(puVar23 + -0x1360) = *(long **)(puVar23 + -0x12f0);
                    *(undefined8 *)(puVar23 + -0x1368) = *(undefined8 *)(lVar21 + 0x1b8);
                    *(undefined8 *)(puVar23 + -0x1390) = 0x10a385;
                    String::path_join(pSVar3);
                    *(undefined8 *)(puVar23 + -0x1390) = 0x10a395;
                    (**(code **)(puVar23 + -0x1368))(*(undefined8 *)(puVar23 + -0x1360),pSVar3);
                    *(undefined8 *)(puVar23 + -0x1390) = 0x10a39d;
                    CowData<char32_t>::_unref((CowData<char32_t> *)pSVar3);
                    *(undefined8 *)(puVar23 + -0x1390) = 0x10a3a7;
                    Ref<DirAccess>::unref(*(Ref<DirAccess> **)(puVar23 + -0x1358));
                  }
                }
                *(undefined8 *)(puVar23 + -0x1390) = 0x1099bf;
                iVar11 = unzGoToNextFile(lVar17);
                *(undefined8 *)(puVar23 + -0x1390) = 0x1099ca;
                CowData<char32_t>::_unref((CowData<char32_t> *)pSVar32);
                *(undefined8 *)(puVar23 + -0x1390) = 0x1099d2;
                CowData<char32_t>::_unref(pCVar14);
              }
              else {
                *(undefined8 *)(puVar23 + -0x1390) = 0x109a35;
                iVar11 = unzGoToNextFile(lVar17);
                *(undefined8 *)(puVar23 + -0x1390) = 0x109a40;
                CowData<char32_t>::_unref(pCVar14);
              }
            } while (iVar11 == 0);
            lVar21 = *(long *)(puVar23 + -0x12e0);
LAB_001085f8:
            *(undefined8 *)(puVar23 + -0x1390) = 0x108600;
            unzClose(lVar17);
            if ((lVar21 != 0) && (*(long *)(lVar21 + -8) != 0)) {
              this_01 = *(String **)(puVar23 + -5000);
              pSVar32 = (String *)(puVar23 + -0x12f0);
              *(undefined8 *)(puVar23 + -0x1278) = 0;
              pSVar3 = (String *)(puVar23 + -0x12f8);
              pSVar15 = (String *)(puVar23 + -0x12d8);
              *(undefined8 *)(puVar23 + -0x1390) = 0x10ab7b;
              String::parse_latin1(this_01,"\n\n");
              *(undefined8 *)(puVar23 + -0x12f0) = 0;
              *(undefined8 *)(puVar23 + -0x1390) = 0x10ab92;
              String::parse_latin1(pSVar32,"");
              *(String **)(puVar23 + -0x1360) = pSVar3;
              *(undefined8 *)(puVar23 + -0x12f8) = 0;
              *(undefined8 *)(puVar23 + -0x1390) = 0x10abb2;
              String::parse_latin1(pSVar3,"The following files failed extraction from package:");
              *(undefined8 *)(puVar23 + -0x1390) = 0x10abc0;
              TTR(pSVar15,pSVar3);
              *(String **)(puVar23 + -0x1358) = (String *)(puVar23 + -0x1300);
              *(undefined8 *)(puVar23 + -0x1390) = 0x10abd8;
              String::operator+((String *)(puVar23 + -0x1300),pSVar15);
              *(undefined8 *)(puVar23 + -0x1390) = 0x10abe0;
              CowData<char32_t>::_unref((CowData<char32_t> *)pSVar15);
              *(undefined8 *)(puVar23 + -0x1390) = 0x10abef;
              CowData<char32_t>::_unref((CowData<char32_t> *)pSVar3);
              *(undefined8 *)(puVar23 + -0x1390) = 0x10abf7;
              CowData<char32_t>::_unref((CowData<char32_t> *)pSVar32);
              lVar17 = 0;
              *(undefined8 *)(puVar23 + -0x1390) = 0x10ac02;
              CowData<char32_t>::_unref((CowData<char32_t> *)this_01);
              if (0 < *(long *)(lVar21 + -8)) {
                *(String **)(puVar23 + -0x1368) = pSVar32;
                pSVar32 = *(String **)(puVar23 + -5000);
                do {
                  *(undefined8 *)(puVar23 + -0x12d8) = 0;
                  *(undefined8 *)(puVar23 + -0x1390) = 0x10ac7c;
                  String::parse_latin1(pSVar15,"\n");
                  lVar20 = *(long *)(lVar21 + -8);
                  if (lVar20 <= lVar17) {
                    *(undefined8 *)(puVar23 + -0x1390) = 1;
                    *(undefined8 *)(puVar23 + -0x1398) = 0;
                    *(undefined **)(puVar23 + -0x13a0) = &_LC24;
                    *(char **)(puVar23 + -0x13a8) = "size()";
                    *(undefined8 *)(puVar23 + -0x13b0) = 0x10acb5;
                    _err_print_index_error
                              ("get","./core/templates/cowdata.h",0xdb,lVar17,lVar20,"p_index",
                               *(char **)(puVar23 + -0x13a8),*(char **)(puVar23 + -0x13a0),
                               (bool)puVar23[-0x1398],(bool)puVar23[-0x1390]);
                    *(undefined8 *)(puVar23 + -0x1390) = 0x10acbe;
                    _err_flush_stdout();
                    /* WARNING: Does not return */
                    pcVar29 = (code *)invalidInstructionException();
                    (*pcVar29)();
                  }
                  lVar20 = lVar17 * 8;
                  lVar17 = lVar17 + 1;
                  *(undefined8 *)(puVar23 + -0x1390) = 0x10ac34;
                  String::operator+(pSVar32,(String *)(lVar21 + lVar20));
                  *(undefined8 *)(puVar23 + -0x1390) = 0x10ac41;
                  String::operator+=(*(String **)(puVar23 + -0x1358),pSVar32);
                  *(undefined8 *)(puVar23 + -0x1390) = 0x10ac49;
                  CowData<char32_t>::_unref((CowData<char32_t> *)pSVar32);
                  *(undefined8 *)(puVar23 + -0x1390) = 0x10ac51;
                  CowData<char32_t>::_unref((CowData<char32_t> *)pSVar15);
                  if (*(long *)(lVar21 + -8) <= lVar17) goto LAB_0010ad85;
                } while (lVar17 != 0x10);
                pCVar14 = *(CowData<char32_t> **)(puVar23 + -0x1368);
                *(undefined8 *)(puVar23 + -0x12d8) = 0;
                *(undefined8 *)(puVar23 + -0x1390) = 0x10ad1f;
                String::parse_latin1(pSVar15," more files.");
                pCVar24 = *(CowData<char32_t> **)(puVar23 + -0x1360);
                *(undefined8 *)(puVar23 + -0x1390) = 0x10ad34;
                itos((long)pCVar24);
                *(undefined8 *)(puVar23 + -0x1390) = 0x10ad46;
                operator+((char *)pCVar14,(String *)"\nAnd ");
                pSVar32 = *(String **)(puVar23 + -5000);
                *(undefined8 *)(puVar23 + -0x1390) = 0x10ad58;
                String::operator+(pSVar32,(String *)pCVar14);
                *(undefined8 *)(puVar23 + -0x1390) = 0x10ad65;
                String::operator+=(*(String **)(puVar23 + -0x1358),pSVar32);
                *(undefined8 *)(puVar23 + -0x1390) = 0x10ad6d;
                CowData<char32_t>::_unref((CowData<char32_t> *)pSVar32);
                *(undefined8 *)(puVar23 + -0x1390) = 0x10ad75;
                CowData<char32_t>::_unref(pCVar14);
                *(undefined8 *)(puVar23 + -0x1390) = 0x10ad7d;
                CowData<char32_t>::_unref(pCVar24);
                *(undefined8 *)(puVar23 + -0x1390) = 0x10ad85;
                CowData<char32_t>::_unref((CowData<char32_t> *)pSVar15);
              }
LAB_0010ad85:
              *(undefined8 *)(puVar23 + -0x1278) = 0;
              uVar16 = *(undefined8 *)(*(long *)(puVar23 + -0x1380) + 0xe78);
              if (*(long *)(puVar23 + -0x1300) != 0) {
                *(undefined8 *)(puVar23 + -0x1390) = 0x10adb6;
                CowData<char32_t>::_ref
                          (*(CowData<char32_t> **)(puVar23 + -5000),*(CowData **)(puVar23 + -0x1358)
                          );
              }
              pCVar14 = *(CowData<char32_t> **)(puVar23 + -5000);
              *(undefined8 *)(puVar23 + -0x1390) = 0x10adc5;
              AcceptDialog::set_text(uVar16,pCVar14);
              *(undefined8 *)(puVar23 + -0x1390) = 0x10adcd;
              CowData<char32_t>::_unref(pCVar14);
              *(undefined8 *)(puVar23 + -0x11c8) = 0;
              pVVar26 = *(Vector2i **)(*(long *)(puVar23 + -0x1380) + 0xe78);
              *(undefined8 *)(puVar23 + -0x1390) = 0x10adf2;
              Window::popup_centered(pVVar26);
              *(undefined8 *)(puVar23 + -0x1390) = 0x10adfc;
              CowData<char32_t>::_unref(*(CowData<char32_t> **)(puVar23 + -0x1358));
LAB_00109f51:
              *(undefined8 *)(puVar23 + -0x1390) = 0x109f5e;
              CowData<String>::_unref((CowData<String> *)(puVar23 + -0x12e0));
              goto LAB_00109f5e;
            }
          }
          else {
            *(undefined8 *)(puVar23 + -0x1390) = 0x10ae09;
            unzClose(lVar17);
          }
          *(undefined8 *)(puVar23 + -0x1390) = 0x10861d;
          CowData<String>::_unref((CowData<String> *)(puVar23 + -0x12e0));
          *(undefined8 *)(puVar23 + -0x1390) = 0x108627;
          CowData<char32_t>::_unref((CowData<char32_t> *)(puVar23 + -0x1318));
          *(undefined8 *)(puVar23 + -0x1390) = 0x108631;
          Ref<FileAccess>::unref(*(Ref<FileAccess> **)(puVar23 + -0x1370));
          iVar11 = *(int *)(*(long *)(puVar23 + -0x1380) + 0xdb8);
          goto LAB_00108640;
        }
        pSVar32 = (String *)(puVar23 + -0x12e8);
        *(undefined8 *)(puVar23 + -0x12d8) = 0;
        *(undefined8 *)(puVar23 + -0x1390) = 0x1097c9;
        String::parse_latin1((String *)(puVar23 + -0x12d8),"");
        *(undefined8 *)(puVar23 + -0x12e8) = 0;
        *(undefined8 *)(puVar23 + -0x1390) = 0x1097e4;
        String::parse_latin1
                  (pSVar32,
                   "Invalid \".zip\" project file; it doesn\'t contain a \"project.godot\" file.");
        pSVar3 = *(String **)(puVar23 + -5000);
        *(undefined8 *)(puVar23 + -0x1390) = 0x1097f6;
        TTR(pSVar3,pSVar32);
        *(undefined8 *)(puVar23 + -0x1390) = 0x109807;
        _set_message(*(undefined8 *)(puVar23 + -0x1380),pSVar3,0,0);
        *(undefined8 *)(puVar23 + -0x1390) = 0x10980f;
        CowData<char32_t>::_unref((CowData<char32_t> *)pSVar3);
        *(undefined8 *)(puVar23 + -0x1390) = 0x109817;
        CowData<char32_t>::_unref((CowData<char32_t> *)pSVar32);
        *(undefined8 *)(puVar23 + -0x1390) = 0x10981f;
        CowData<char32_t>::_unref((CowData<char32_t> *)(puVar23 + -0x12d8));
        *(undefined8 *)(puVar23 + -0x1390) = 0x109827;
        unzClose(lVar17);
LAB_00109f5e:
        *(undefined8 *)(puVar23 + -0x1390) = 0x109f68;
        CowData<char32_t>::_unref((CowData<char32_t> *)(puVar23 + -0x1318));
      }
      *(undefined8 *)(puVar23 + -0x1390) = 0x109f72;
      Ref<FileAccess>::unref(*(Ref<FileAccess> **)(puVar23 + -0x1370));
    }
    else {
LAB_00108640:
      if (1 < iVar11 - 2U) goto LAB_001089bb;
      this_00 = (RefCounted *)(puVar23 + -0x11c8);
      pSVar32 = (String *)(puVar23 + -0x1278);
      *(RefCounted **)(puVar23 + -0x1368) = this_00;
      *(undefined8 *)(puVar23 + -0x1390) = 0x108669;
      RefCounted::RefCounted(this_00);
      *(String **)(puVar23 + -5000) = pSVar32;
      *(undefined1 (*) [16])(puVar23 + -0x1040) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(puVar23 + -0x1030) = (undefined1  [16])0x0;
      *(undefined ***)(puVar23 + -0x11c8) = &PTR__initialize_classv_00119260;
      *(undefined8 *)(puVar23 + -0x1020) = 2;
      *(undefined8 *)(puVar23 + -0x1278) = 0;
      *(undefined8 *)(puVar23 + -0x1390) = 0x1086b7;
      String::parse_latin1(pSVar32,"project.godot");
      pSVar3 = (String *)(puVar23 + -0x12f8);
      *(String **)(puVar23 + -0x1360) = pSVar3;
      *(undefined8 *)(puVar23 + -0x1390) = 0x1086d7;
      String::path_join(pSVar3);
      *(undefined8 *)(puVar23 + -0x1390) = 0x1086e2;
      CowData<char32_t>::_unref((CowData<char32_t> *)pSVar32);
      *(undefined8 *)(puVar23 + -0x1390) = 0x1086ed;
      iVar11 = ConfigFile::load((String *)this_00);
      if (iVar11 == 0) {
        pCVar14 = (CowData<char32_t> *)(puVar23 + -0x12e8);
        pCVar24 = (CowData<char32_t> *)(puVar23 + -0x12d8);
        pSVar32 = (String *)(puVar23 + -0x12c8);
        *(undefined8 *)(puVar23 + -0x1390) = 0x109d64;
        LineEdit::get_text();
        *(undefined8 *)(puVar23 + -0x1390) = 0x109d79;
        String::strip_edges(SUB81(pCVar24,0),SUB81(pCVar14,0));
        *(undefined8 *)(puVar23 + -0x1390) = 0x109d84;
        Variant::Variant((Variant *)(puVar23 + -0x11e8),(String *)pCVar24);
        pSVar3 = *(String **)(puVar23 + -5000);
        *(undefined8 *)(puVar23 + -0x1278) = 0;
        *(undefined8 *)(puVar23 + -0x1390) = 0x109da3;
        String::parse_latin1(pSVar3,"config/name");
        *(undefined8 *)(puVar23 + -0x12c8) = 0;
        *(undefined8 *)(puVar23 + -0x1390) = 0x109dbe;
        String::parse_latin1(pSVar32,"application");
        *(undefined8 *)(puVar23 + -0x1390) = 0x109dd1;
        ConfigFile::set_value(*(String **)(puVar23 + -0x1368),pSVar32,(Variant *)pSVar3);
        *(undefined8 *)(puVar23 + -0x1390) = 0x109dd9;
        CowData<char32_t>::_unref((CowData<char32_t> *)pSVar32);
        *(undefined8 *)(puVar23 + -0x1390) = 0x109de1;
        CowData<char32_t>::_unref((CowData<char32_t> *)pSVar3);
        if (Variant::needs_deinit[*(int *)(puVar23 + -0x11e8)] != '\0') {
          *(undefined8 *)(puVar23 + -0x1390) = 0x10a232;
          Variant::_clear_internal();
        }
        *(undefined8 *)(puVar23 + -0x1390) = 0x109e05;
        CowData<char32_t>::_unref(pCVar24);
        *(undefined8 *)(puVar23 + -0x1390) = 0x109e0d;
        CowData<char32_t>::_unref(pCVar14);
        pCVar30 = *(CowData **)(puVar23 + -0x1360);
        *(undefined8 *)(puVar23 + -0x1390) = 0x109e1f;
        iVar11 = ConfigFile::save(*(String **)(puVar23 + -0x1368));
        if (iVar11 == 0) {
          *(undefined8 *)(puVar23 + -0x1390) = 0x109ffa;
          CowData<char32_t>::_unref(*(CowData<char32_t> **)(puVar23 + -0x1360));
          *(undefined8 *)(puVar23 + -0x1390) = 0x10a004;
          ConfigFile::~ConfigFile(*(ConfigFile **)(puVar23 + -0x1368));
          goto LAB_001089bb;
        }
        *(undefined8 *)(puVar23 + -0x12c8) = 0;
        uVar16 = *(undefined8 *)(*(long *)(puVar23 + -0x1380) + 0xe78);
        if (*(long *)(puVar23 + -0x12f8) != 0) {
          *(int *)(puVar23 + -0x1370) = iVar11;
          *(undefined8 *)(puVar23 + -0x1390) = 0x109e59;
          CowData<char32_t>::_ref((CowData<char32_t> *)pSVar32,pCVar30);
          iVar11 = *(int *)(puVar23 + -0x1370);
        }
        pSVar3 = (String *)(puVar23 + -0x12f0);
        *(int *)(puVar23 + -0x1370) = iVar11;
        *(undefined8 *)(puVar23 + -0x12e8) = 0;
        *(undefined8 *)(puVar23 + -0x1390) = 0x109e84;
        String::parse_latin1((String *)pCVar14,"");
        *(undefined8 *)(puVar23 + -0x12f0) = 0;
        *(undefined8 *)(puVar23 + -0x1390) = 0x109e9f;
        String::parse_latin1(pSVar3,"Couldn\'t save project at \'%s\' (error %d).");
        *(undefined8 *)(puVar23 + -0x1390) = 0x109ead;
        TTR((String *)pCVar24,pSVar3);
        *(undefined8 *)(puVar23 + -0x1390) = 0x109ec0;
        vformat<String,Error>
                  (*(undefined8 *)(puVar23 + -5000),pCVar24,pSVar32,
                   *(undefined4 *)(puVar23 + -0x1370));
        *(undefined8 *)(puVar23 + -0x1390) = 0x109ecc;
        AcceptDialog::set_text(uVar16,*(undefined8 *)(puVar23 + -5000));
        *(undefined8 *)(puVar23 + -0x1390) = 0x109ed5;
        CowData<char32_t>::_unref(*(CowData<char32_t> **)(puVar23 + -5000));
        *(undefined8 *)(puVar23 + -0x1390) = 0x109edd;
        CowData<char32_t>::_unref(pCVar24);
        *(undefined8 *)(puVar23 + -0x1390) = 0x109ee5;
        CowData<char32_t>::_unref((CowData<char32_t> *)pSVar3);
        *(undefined8 *)(puVar23 + -0x1390) = 0x109eed;
        CowData<char32_t>::_unref(pCVar14);
        *(undefined8 *)(puVar23 + -0x1390) = 0x109ef5;
        CowData<char32_t>::_unref((CowData<char32_t> *)pSVar32);
        *(undefined8 *)(puVar23 + -0x11e8) = 0;
        pVVar26 = *(Vector2i **)(*(long *)(puVar23 + -0x1380) + 0xe78);
        *(undefined8 *)(puVar23 + -0x1390) = 0x109f15;
        Window::popup_centered(pVVar26);
      }
      else {
        pCVar14 = (CowData<char32_t> *)(puVar23 + -0x12c8);
        *(undefined8 *)(puVar23 + -0x12c8) = 0;
        uVar16 = *(undefined8 *)(*(long *)(puVar23 + -0x1380) + 0xe78);
        if (*(long *)(puVar23 + -0x12f8) != 0) {
          *(undefined8 *)(puVar23 + -0x1390) = 0x10872e;
          CowData<char32_t>::_ref(pCVar14,(CowData *)pSVar3);
        }
        pSVar32 = (String *)(puVar23 + -0x12f0);
        *(undefined8 *)(puVar23 + -0x12e8) = 0;
        pSVar3 = (String *)(puVar23 + -0x12d8);
        *(undefined8 *)(puVar23 + -0x1390) = 0x108761;
        String::parse_latin1((String *)(puVar23 + -0x12e8),"");
        *(undefined8 *)(puVar23 + -0x12f0) = 0;
        *(undefined8 *)(puVar23 + -0x1390) = 0x10877c;
        String::parse_latin1
                  (pSVar32,
                   "Couldn\'t load project at \'%s\' (error %d). It may be missing or corrupted.");
        *(undefined8 *)(puVar23 + -0x1390) = 0x10878a;
        TTR(pSVar3,pSVar32);
        pCVar24 = *(CowData<char32_t> **)(puVar23 + -5000);
        *(undefined8 *)(puVar23 + -0x1390) = 0x10879f;
        vformat<String,Error>(pCVar24,pSVar3,pCVar14,iVar11);
        *(undefined8 *)(puVar23 + -0x1390) = 0x1087aa;
        AcceptDialog::set_text(uVar16,pCVar24);
        *(undefined8 *)(puVar23 + -0x1390) = 0x1087b2;
        CowData<char32_t>::_unref(pCVar24);
        *(undefined8 *)(puVar23 + -0x1390) = 0x1087ba;
        CowData<char32_t>::_unref((CowData<char32_t> *)pSVar3);
        *(undefined8 *)(puVar23 + -0x1390) = 0x1087c2;
        CowData<char32_t>::_unref((CowData<char32_t> *)pSVar32);
        *(undefined8 *)(puVar23 + -0x1390) = 0x1087ca;
        CowData<char32_t>::_unref((CowData<char32_t> *)(puVar23 + -0x12e8));
        *(undefined8 *)(puVar23 + -0x1390) = 0x1087d2;
        CowData<char32_t>::_unref(pCVar14);
        *(undefined8 *)(puVar23 + -0x11e8) = 0;
        pVVar26 = *(Vector2i **)(*(long *)(puVar23 + -0x1380) + 0xe78);
        *(undefined8 *)(puVar23 + -0x1390) = 0x1087f7;
        Window::popup_centered(pVVar26);
      }
      *(undefined8 *)(puVar23 + -0x1390) = 0x108801;
      CowData<char32_t>::_unref(*(CowData<char32_t> **)(puVar23 + -0x1360));
      *(undefined8 *)(puVar23 + -0x1390) = 0x10880b;
      ConfigFile::~ConfigFile(*(ConfigFile **)(puVar23 + -0x1368));
    }
  }
LAB_001085d8:
  *(undefined8 *)(puVar23 + -0x1390) = 0x1085e2;
  CowData<char32_t>::_unref(*(CowData<char32_t> **)(puVar23 + -0x1378));
LAB_00108528:
  if (*(long *)(puVar23 + 0x2ff0) != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)(puVar23 + -0x1390) = 0x10b011;
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
  return (uint)CONCAT71(0x119b,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x119b,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
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



/* ConfirmationDialog::is_class_ptr(void*) const */

uint ConfirmationDialog::is_class_ptr(void *param_1)

{
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  return (uint)CONCAT71(0x119a,in_RSI == &AcceptDialog::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x119a,in_RSI == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x119b,in_RSI == &Window::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x119b,in_RSI == &Viewport::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x119b,in_RSI == &Node::get_class_ptr_static()::ptr) |
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



/* ProjectDialog::_property_can_revertv(StringName const&) const */

undefined8 ProjectDialog::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* ProjectDialog::_property_get_revertv(StringName const&, Variant&) const */

undefined8 ProjectDialog::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ConfigFile::is_class_ptr(void*) const */

uint __thiscall ConfigFile::is_class_ptr(ConfigFile *this,void *param_1)

{
  return (uint)CONCAT71(0x119b,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x119a,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x119b,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
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



/* CallableCustomMethodPointer<Node, void, Node*, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Node,void,Node*,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Node,void,Node*,bool> *this)

{
  return;
}



/* CallableCustomMethodPointer<ProjectDialog, void, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ProjectDialog,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ProjectDialog,void,bool> *this)

{
  return;
}



/* CallableCustomMethodPointer<ProjectDialog, void, String const&>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<ProjectDialog,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ProjectDialog,void,String_const&> *this)

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



/* CallableCustomMethodPointer<Control, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Control,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Control,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<ProjectDialog, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ProjectDialog,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ProjectDialog,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<Node, void, Node*, bool>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<Node,void,Node*,bool>::get_argument_count
          (CallableCustomMethodPointer<Node,void,Node*,bool> *this,bool *param_1)

{
  *param_1 = true;
  return 2;
}



/* CallableCustomMethodPointer<ProjectDialog, void, bool>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<ProjectDialog,void,bool>::get_argument_count
          (CallableCustomMethodPointer<ProjectDialog,void,bool> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<ProjectDialog, void, String const&>::get_argument_count(bool&) const
    */

undefined8 __thiscall
CallableCustomMethodPointer<ProjectDialog,void,String_const&>::get_argument_count
          (CallableCustomMethodPointer<ProjectDialog,void,String_const&> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<LineEdit, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<LineEdit,void>::get_argument_count
          (CallableCustomMethodPointer<LineEdit,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<Control, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<Control,void>::get_argument_count
          (CallableCustomMethodPointer<Control,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<ProjectDialog, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<ProjectDialog,void>::get_argument_count
          (CallableCustomMethodPointer<ProjectDialog,void> *this,bool *param_1)

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



/* CallableCustomMethodPointer<ProjectDialog, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ProjectDialog,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ProjectDialog,void> *this)

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



/* CallableCustomMethodPointer<Control, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Control,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Control,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<ProjectDialog, void, String const&>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<ProjectDialog,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ProjectDialog,void,String_const&> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<ProjectDialog, void, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ProjectDialog,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ProjectDialog,void,bool> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<Node, void, Node*, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Node,void,Node*,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Node,void,Node*,bool> *this)

{
  operator_delete(this,0x48);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00118798;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00118798;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
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
  
  if ((code *)PTR__property_can_revert_0011e008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* VBoxContainer::_property_can_revertv(StringName const&) const */

undefined8 VBoxContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0011e008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* ConfirmationDialog::~ConfirmationDialog() */

void __thiscall ConfirmationDialog::~ConfirmationDialog(ConfirmationDialog *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00118fe8;
  AcceptDialog::~AcceptDialog((AcceptDialog *)this);
  return;
}



/* ConfirmationDialog::~ConfirmationDialog() */

void __thiscall ConfirmationDialog::~ConfirmationDialog(ConfirmationDialog *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00118fe8;
  AcceptDialog::~AcceptDialog((AcceptDialog *)this);
  operator_delete(this,0xdb8);
  return;
}



/* ConfirmationDialog::_getv(StringName const&, Variant&) const */

undefined8 ConfirmationDialog::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__get_0011e010 != Object::_get) {
    uVar1 = Window::_get(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* ProjectDialog::_getv(StringName const&, Variant&) const */

undefined8 ProjectDialog::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__get_0011e010 != Object::_get) {
    uVar1 = Window::_get(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* ConfirmationDialog::_setv(StringName const&, Variant const&) */

undefined8 ConfirmationDialog::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__set_0011e018 != Object::_set) {
    uVar1 = Window::_set(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* ProjectDialog::_setv(StringName const&, Variant const&) */

undefined8 ProjectDialog::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__set_0011e018 != Object::_set) {
    uVar1 = Window::_set(param_1,param_2);
    return uVar1;
  }
  return 0;
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
LAB_0010b853:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010b853;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
      goto LAB_0010b8be;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
LAB_0010b8be:
  return &_get_class_namev()::_class_name_static;
}



/* CallableCustomMethodPointer<ProjectDialog, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<ProjectDialog,void>::get_object
          (CallableCustomMethodPointer<ProjectDialog,void> *this)

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
      goto LAB_0010b9ed;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010b9ed;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010b9ed:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<Control, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<Control,void>::get_object
          (CallableCustomMethodPointer<Control,void> *this)

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
      goto LAB_0010baed;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010baed;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010baed:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<ProjectDialog, void, bool>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<ProjectDialog,void,bool>::get_object
          (CallableCustomMethodPointer<ProjectDialog,void,bool> *this)

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
      goto LAB_0010bbed;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010bbed;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010bbed:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<ProjectDialog, void, String const&>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<ProjectDialog,void,String_const&>::get_object
          (CallableCustomMethodPointer<ProjectDialog,void,String_const&> *this)

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
      goto LAB_0010bced;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010bced;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010bced:
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
      goto LAB_0010bded;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010bded;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010bded:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<Node, void, Node*, bool>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<Node,void,Node*,bool>::get_object
          (CallableCustomMethodPointer<Node,void,Node*,bool> *this)

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
      goto LAB_0010beed;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010beed;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010beed:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* ProjectDialog::_validate_propertyv(PropertyInfo&) const */

void ProjectDialog::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  Viewport::_validate_property(param_1);
  if ((code *)PTR__validate_property_0011e020 == Viewport::_validate_property) {
    return;
  }
  Window::_validate_property(param_1);
  return;
}



/* ConfirmationDialog::_validate_propertyv(PropertyInfo&) const */

void ConfirmationDialog::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  Viewport::_validate_property(param_1);
  if ((code *)PTR__validate_property_0011e020 == Viewport::_validate_property) {
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
  if ((code *)PTR__validate_property_0011e028 == Control::_validate_property) {
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
  if ((code *)PTR__validate_property_0011e028 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* VBoxContainer::_setv(StringName const&, Variant const&) */

undefined8 VBoxContainer::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_0011e030 != CanvasItem::_set) {
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
    if ((code *)PTR__set_0011e030 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* ConfirmationDialog::_notificationv(int, bool) */

void __thiscall
ConfirmationDialog::_notificationv(ConfirmationDialog *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_0011e038 != Window::_notification) {
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
  if ((code *)PTR__notification_0011e038 == Window::_notification) {
    return;
  }
  AcceptDialog::_notification(iVar1);
  return;
}



/* WARNING: Removing unreachable block (ram,0x0010c3b8) */
/* HBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 HBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_0011e040 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x0010c428) */
/* VBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 VBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_0011e040 != CanvasItem::_get) &&
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
    uVar1 = (uint)CONCAT71(0x119b,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x119b,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x119b,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x119b,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x119b,in_RSI == &Node::get_class_ptr_static()::ptr) |
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
    uVar1 = (uint)CONCAT71(0x119b,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x119b,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x119b,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x119b,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x119b,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* ProjectDialog::is_class_ptr(void*) const */

uint ProjectDialog::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x119a,in_RSI == &AcceptDialog::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x119a,in_RSI == &ConfirmationDialog::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x119b,in_RSI == &Window::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x119b,in_RSI == &Viewport::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x119b,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* VBoxContainer::~VBoxContainer() */

void __thiscall VBoxContainer::~VBoxContainer(VBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = strlen;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010c5e0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010c5e0:
  Control::~Control((Control *)this);
  return;
}



/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = strlen;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010c640;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010c640:
  Control::~Control((Control *)this);
  return;
}



/* VBoxContainer::~VBoxContainer() */

void __thiscall VBoxContainer::~VBoxContainer(VBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = strlen;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010c6a0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010c6a0:
  Control::~Control((Control *)this);
  operator_delete(this,0xa10);
  return;
}



/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = strlen;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010c710;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010c710:
  Control::~Control((Control *)this);
  operator_delete(this,0xa10);
  return;
}



/* ProjectDialog::_get_class_namev() const */

undefined8 * ProjectDialog::_get_class_namev(void)

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
LAB_0010c773:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010c773;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"ProjectDialog");
      goto LAB_0010c7de;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"ProjectDialog");
LAB_0010c7de:
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
LAB_0010c853:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010c853;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_0010c8be;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_0010c8be:
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
LAB_0010c943:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010c943;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
      goto LAB_0010c9ae;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
LAB_0010c9ae:
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
LAB_0010ca33:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010ca33;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"ConfirmationDialog");
      goto LAB_0010ca9e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"ConfirmationDialog");
LAB_0010ca9e:
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
LAB_0010cb13:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010cb13;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"ConfigFile");
      goto LAB_0010cb7e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"ConfigFile");
LAB_0010cb7e:
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



/* ProjectDialog::get_class() const */

void ProjectDialog::get_class(void)

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



/* ConfigFile::~ConfigFile() */

void __thiscall ConfigFile::~ConfigFile(ConfigFile *this)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  void *pvVar7;
  void *pvVar8;
  long lVar9;
  
  *(undefined ***)this = &PTR__initialize_classv_00119260;
  pvVar8 = *(void **)(this + 0x188);
  if (pvVar8 != (void *)0x0) {
    if (*(int *)(this + 0x1ac) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1a8) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(this + 0x1ac) = 0;
        *(undefined1 (*) [16])(this + 0x198) = (undefined1  [16])0x0;
      }
      else {
        lVar6 = 0;
        do {
          if (*(int *)(*(long *)(this + 400) + lVar6) != 0) {
            pvVar8 = *(void **)((long)pvVar8 + lVar6 * 2);
            *(int *)(*(long *)(this + 400) + lVar6) = 0;
            pvVar7 = *(void **)((long)pvVar8 + 0x20);
            if (pvVar7 != (void *)0x0) {
              if (*(int *)((long)pvVar8 + 0x44) != 0) {
                uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)((long)pvVar8 + 0x40) * 4
                                 );
                if (uVar3 == 0) {
                  *(undefined4 *)((long)pvVar8 + 0x44) = 0;
                  *(undefined1 (*) [16])((long)pvVar8 + 0x30) = (undefined1  [16])0x0;
                }
                else {
                  lVar9 = 0;
                  do {
                    piVar5 = (int *)(*(long *)((long)pvVar8 + 0x28) + lVar9);
                    if (*piVar5 != 0) {
                      *piVar5 = 0;
                      pvVar7 = *(void **)((long)pvVar7 + lVar9 * 2);
                      if (Variant::needs_deinit[*(int *)((long)pvVar7 + 0x18)] != '\0') {
                        Variant::_clear_internal();
                      }
                      if (*(long *)((long)pvVar7 + 0x10) != 0) {
                        LOCK();
                        plVar1 = (long *)(*(long *)((long)pvVar7 + 0x10) + -0x10);
                        *plVar1 = *plVar1 + -1;
                        UNLOCK();
                        if (*plVar1 == 0) {
                          lVar4 = *(long *)((long)pvVar7 + 0x10);
                          *(undefined8 *)((long)pvVar7 + 0x10) = 0;
                          Memory::free_static((void *)(lVar4 + -0x10),false);
                        }
                      }
                      Memory::free_static(pvVar7,false);
                      pvVar7 = *(void **)((long)pvVar8 + 0x20);
                      *(undefined8 *)((long)pvVar7 + lVar9 * 2) = 0;
                    }
                    lVar9 = lVar9 + 4;
                  } while (lVar9 != (ulong)uVar3 << 2);
                  *(undefined4 *)((long)pvVar8 + 0x44) = 0;
                  *(undefined1 (*) [16])((long)pvVar8 + 0x30) = (undefined1  [16])0x0;
                  if (pvVar7 == (void *)0x0) goto LAB_0010d27f;
                }
              }
              Memory::free_static(pvVar7,false);
              Memory::free_static(*(void **)((long)pvVar8 + 0x28),false);
            }
LAB_0010d27f:
            if (*(long *)((long)pvVar8 + 0x10) != 0) {
              LOCK();
              plVar1 = (long *)(*(long *)((long)pvVar8 + 0x10) + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                lVar9 = *(long *)((long)pvVar8 + 0x10);
                *(undefined8 *)((long)pvVar8 + 0x10) = 0;
                Memory::free_static((void *)(lVar9 + -0x10),false);
              }
            }
            Memory::free_static(pvVar8,false);
            pvVar8 = *(void **)(this + 0x188);
            *(undefined8 *)((long)pvVar8 + lVar6 * 2) = 0;
          }
          lVar6 = lVar6 + 4;
        } while (lVar6 != (ulong)uVar2 * 4);
        *(undefined4 *)(this + 0x1ac) = 0;
        *(undefined1 (*) [16])(this + 0x198) = (undefined1  [16])0x0;
        if (pvVar8 == (void *)0x0) goto LAB_0010d2f1;
      }
    }
    Memory::free_static(pvVar8,false);
    Memory::free_static(*(void **)(this + 400),false);
  }
LAB_0010d2f1:
  *(undefined ***)this = &PTR__initialize_classv_00118798;
  Object::~Object((Object *)this);
  return;
}



/* ConfigFile::~ConfigFile() */

void __thiscall ConfigFile::~ConfigFile(ConfigFile *this)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  void *pvVar7;
  void *pvVar8;
  long lVar9;
  
  *(undefined ***)this = &PTR__initialize_classv_00119260;
  pvVar8 = *(void **)(this + 0x188);
  if (pvVar8 != (void *)0x0) {
    if (*(int *)(this + 0x1ac) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1a8) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(this + 0x1ac) = 0;
        *(undefined1 (*) [16])(this + 0x198) = (undefined1  [16])0x0;
      }
      else {
        lVar6 = 0;
        do {
          if (*(int *)(*(long *)(this + 400) + lVar6) != 0) {
            pvVar8 = *(void **)((long)pvVar8 + lVar6 * 2);
            *(int *)(*(long *)(this + 400) + lVar6) = 0;
            pvVar7 = *(void **)((long)pvVar8 + 0x20);
            if (pvVar7 != (void *)0x0) {
              if (*(int *)((long)pvVar8 + 0x44) != 0) {
                uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)((long)pvVar8 + 0x40) * 4
                                 );
                if (uVar3 == 0) {
                  *(undefined4 *)((long)pvVar8 + 0x44) = 0;
                  *(undefined1 (*) [16])((long)pvVar8 + 0x30) = (undefined1  [16])0x0;
                }
                else {
                  lVar9 = 0;
                  do {
                    piVar5 = (int *)(*(long *)((long)pvVar8 + 0x28) + lVar9);
                    if (*piVar5 != 0) {
                      *piVar5 = 0;
                      pvVar7 = *(void **)((long)pvVar7 + lVar9 * 2);
                      if (Variant::needs_deinit[*(int *)((long)pvVar7 + 0x18)] != '\0') {
                        Variant::_clear_internal();
                      }
                      if (*(long *)((long)pvVar7 + 0x10) != 0) {
                        LOCK();
                        plVar1 = (long *)(*(long *)((long)pvVar7 + 0x10) + -0x10);
                        *plVar1 = *plVar1 + -1;
                        UNLOCK();
                        if (*plVar1 == 0) {
                          lVar4 = *(long *)((long)pvVar7 + 0x10);
                          *(undefined8 *)((long)pvVar7 + 0x10) = 0;
                          Memory::free_static((void *)(lVar4 + -0x10),false);
                        }
                      }
                      Memory::free_static(pvVar7,false);
                      pvVar7 = *(void **)((long)pvVar8 + 0x20);
                      *(undefined8 *)((long)pvVar7 + lVar9 * 2) = 0;
                    }
                    lVar9 = lVar9 + 4;
                  } while (lVar9 != (ulong)uVar3 << 2);
                  *(undefined4 *)((long)pvVar8 + 0x44) = 0;
                  *(undefined1 (*) [16])((long)pvVar8 + 0x30) = (undefined1  [16])0x0;
                  if (pvVar7 == (void *)0x0) goto LAB_0010d50f;
                }
              }
              Memory::free_static(pvVar7,false);
              Memory::free_static(*(void **)((long)pvVar8 + 0x28),false);
            }
LAB_0010d50f:
            if (*(long *)((long)pvVar8 + 0x10) != 0) {
              LOCK();
              plVar1 = (long *)(*(long *)((long)pvVar8 + 0x10) + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                lVar9 = *(long *)((long)pvVar8 + 0x10);
                *(undefined8 *)((long)pvVar8 + 0x10) = 0;
                Memory::free_static((void *)(lVar9 + -0x10),false);
              }
            }
            Memory::free_static(pvVar8,false);
            pvVar8 = *(void **)(this + 0x188);
            *(undefined8 *)((long)pvVar8 + lVar6 * 2) = 0;
          }
          lVar6 = lVar6 + 4;
        } while (lVar6 != (ulong)uVar2 * 4);
        *(undefined4 *)(this + 0x1ac) = 0;
        *(undefined1 (*) [16])(this + 0x198) = (undefined1  [16])0x0;
        if (pvVar8 == (void *)0x0) goto LAB_0010d581;
      }
    }
    Memory::free_static(pvVar8,false);
    Memory::free_static(*(void **)(this + 400),false);
  }
LAB_0010d581:
  *(undefined ***)this = &PTR__initialize_classv_00118798;
  Object::~Object((Object *)this);
  operator_delete(this,0x1b0);
  return;
}



/* RefCounted::is_class(String const&) const */

undefined8 __thiscall RefCounted::is_class(RefCounted *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_0010d72b;
  }
  cVar5 = String::operator==(param_1,"RefCounted");
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
      if (cVar5 != '\0') goto LAB_0010d72b;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar6 = String::operator==(param_1,"Object");
      return uVar6;
    }
  }
  else {
LAB_0010d72b:
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
            if (lVar4 == 0) goto LAB_0010d8cf;
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
LAB_0010d8cf:
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
    if (cVar5 != '\0') goto LAB_0010d983;
  }
  cVar5 = String::operator==(param_1,"ConfigFile");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_0010d983:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
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
    if (cVar5 != '\0') goto LAB_0010db4b;
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
      if (cVar5 != '\0') goto LAB_0010db4b;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar6 = String::operator==(param_1,"Object");
      return uVar6;
    }
  }
  else {
LAB_0010db4b:
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
    if (cVar5 != '\0') goto LAB_0010dd8b;
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
      if (cVar5 != '\0') goto LAB_0010dd8b;
    }
    cVar5 = String::operator==(param_1,"CanvasItem");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Node::is_class((Node *)this,param_1);
        return uVar6;
      }
      goto LAB_0010dec8;
    }
  }
LAB_0010dd8b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010dec8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
    if (cVar5 != '\0') goto LAB_0010dfeb;
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
      if (cVar5 != '\0') goto LAB_0010dfeb;
    }
    cVar5 = String::operator==(param_1,"Container");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Control::is_class((Control *)this,param_1);
        return uVar6;
      }
      goto LAB_0010e128;
    }
  }
LAB_0010dfeb:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010e128:
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
            if (lVar4 == 0) goto LAB_0010e19f;
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
LAB_0010e19f:
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
    if (cVar5 != '\0') goto LAB_0010e253;
  }
  cVar5 = String::operator==(param_1,"VBoxContainer");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = BoxContainer::is_class((BoxContainer *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_0010e253:
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
            if (lVar4 == 0) goto LAB_0010e31f;
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
LAB_0010e31f:
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
    if (cVar5 != '\0') goto LAB_0010e3d3;
  }
  cVar5 = String::operator==(param_1,"HBoxContainer");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = BoxContainer::is_class((BoxContainer *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_0010e3d3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x0010e510) */
/* BoxContainer::_notificationv(int, bool) */

void __thiscall BoxContainer::_notificationv(BoxContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_0011e048 != Container::_notification) {
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
  if ((code *)PTR__notification_0011e048 == Container::_notification) {
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



/* Callable create_custom_callable_function_pointer<ProjectDialog>(ProjectDialog*, char const*, void
   (ProjectDialog::*)()) */

ProjectDialog *
create_custom_callable_function_pointer<ProjectDialog>
          (ProjectDialog *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC24;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00119638;
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



/* Callable create_custom_callable_function_pointer<Control>(Control*, char const*, void
   (Control::*)()) */

Control * create_custom_callable_function_pointer<Control>
                    (Control *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC24;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_001196c8;
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



/* Callable create_custom_callable_function_pointer<LineEdit>(LineEdit*, char const*, void
   (LineEdit::*)()) */

LineEdit *
create_custom_callable_function_pointer<LineEdit>
          (LineEdit *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC24;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00119758;
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



/* Callable create_custom_callable_function_pointer<ProjectDialog, String const&>(ProjectDialog*,
   char const*, void (ProjectDialog::*)(String const&)) */

ProjectDialog *
create_custom_callable_function_pointer<ProjectDialog,String_const&>
          (ProjectDialog *param_1,char *param_2,_func_void_String_ptr *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC24;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_001197e8;
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



/* Callable create_custom_callable_function_pointer<ProjectDialog, bool>(ProjectDialog*, char
   const*, void (ProjectDialog::*)(bool)) */

ProjectDialog *
create_custom_callable_function_pointer<ProjectDialog,bool>
          (ProjectDialog *param_1,char *param_2,_func_void_bool *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC24;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00119878;
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



/* ProjectDialog::_notificationv(int, bool) */

void __thiscall ProjectDialog::_notificationv(ProjectDialog *this,int param_1,bool param_2)

{
  if (param_2) {
    _notification(this,param_1);
    ConfirmationDialog::_notificationv((ConfirmationDialog *)this,param_1,true);
    return;
  }
  ConfirmationDialog::_notificationv((ConfirmationDialog *)this,param_1,false);
  _notification(this,param_1);
  return;
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



/* WARNING: Removing unreachable block (ram,0x0010ff18) */
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



/* WARNING: Removing unreachable block (ram,0x00110250) */
/* String vformat<char const*, String>(String const&, char const* const, String const) */

undefined8 *
vformat<char_const*,String>(undefined8 *param_1,bool *param_2,char *param_3,String *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  int iVar3;
  long in_FS_OFFSET;
  Array local_d8 [8];
  undefined8 local_d0 [9];
  Variant local_88 [24];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant(local_88,param_3);
  Variant::Variant(local_70,param_4);
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  Array::Array(local_d8);
  iVar3 = (int)local_d8;
  Array::resize(iVar3);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_88);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_70);
  String::sprintf((Array *)local_d0,param_2);
  *param_1 = local_d0[0];
  local_d0[0] = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_d0);
  pVVar2 = (Variant *)local_40;
  Array::~Array(local_d8);
  do {
    pVVar1 = pVVar2 + -0x18;
    pVVar2 = pVVar2 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar2 != local_88);
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* WARNING: Removing unreachable block (ram,0x00110540) */
/* String vformat<String, Error>(String const&, String const, Error const) */

undefined8 * vformat<String,Error>(undefined8 *param_1,bool *param_2,String *param_3,int param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  int iVar3;
  long in_FS_OFFSET;
  Array local_d8 [8];
  undefined8 local_d0 [9];
  Variant local_88 [24];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant(local_88,param_3);
  Variant::Variant(local_70,param_4);
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  Array::Array(local_d8);
  iVar3 = (int)local_d8;
  Array::resize(iVar3);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_88);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_70);
  String::sprintf((Array *)local_d0,param_2);
  *param_1 = local_d0[0];
  local_d0[0] = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_d0);
  pVVar2 = (Variant *)local_40;
  Array::~Array(local_d8);
  do {
    pVVar1 = pVVar2 + -0x18;
    pVVar2 = pVVar2 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar2 != local_88);
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<String, Variant, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, Variant> > >::operator[](String const&) */

Variant * __thiscall
HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
::operator[](HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
             *this,String *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *__s;
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
  char cVar37;
  uint uVar38;
  uint uVar39;
  ulong uVar40;
  undefined8 uVar41;
  void *__s_00;
  undefined8 *puVar42;
  void *pvVar43;
  int iVar44;
  long lVar45;
  long lVar46;
  ulong uVar47;
  undefined8 uVar48;
  uint uVar49;
  uint uVar50;
  ulong uVar51;
  long lVar52;
  undefined8 *puVar53;
  uint uVar54;
  uint uVar55;
  long in_FS_OFFSET;
  Variant *local_c0;
  int local_98 [2];
  undefined1 local_90 [16];
  undefined1 local_78 [16];
  long local_68;
  int local_60 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar55 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  if (*(long *)(this + 8) == 0) {
LAB_00110e34:
    local_90 = (undefined1  [16])0x0;
    local_98[0] = 0;
    local_98[1] = 0;
    uVar47 = (ulong)uVar55;
    uVar40 = uVar47 * 4;
    uVar51 = uVar47 * 8;
    uVar41 = Memory::alloc_static(uVar40,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    pvVar43 = (void *)Memory::alloc_static(uVar51,false);
    *(void **)(this + 8) = pvVar43;
    if (uVar55 != 0) {
      pvVar3 = *(void **)(this + 0x10);
      if ((pvVar3 < (void *)((long)pvVar43 + uVar51)) && (pvVar43 < (void *)((long)pvVar3 + uVar40))
         ) {
        uVar40 = 0;
        do {
          *(undefined4 *)((long)pvVar3 + uVar40 * 4) = 0;
          *(undefined8 *)((long)pvVar43 + uVar40 * 8) = 0;
          uVar40 = uVar40 + 1;
        } while (uVar47 != uVar40);
      }
      else {
        memset(pvVar3,0,uVar40);
        memset(pvVar43,0,uVar51);
      }
LAB_00110d1d:
      iVar44 = *(int *)(this + 0x2c);
      if (iVar44 != 0) {
LAB_00110d29:
        uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
        lVar4 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        uVar50 = String::hash();
        uVar40 = CONCAT44(0,uVar38);
        lVar52 = *(long *)(this + 0x10);
        uVar39 = 1;
        if (uVar50 != 0) {
          uVar39 = uVar50;
        }
        uVar54 = 0;
        auVar17._8_8_ = 0;
        auVar17._0_8_ = (ulong)uVar39 * lVar4;
        auVar33._8_8_ = 0;
        auVar33._0_8_ = uVar40;
        lVar45 = SUB168(auVar17 * auVar33,8);
        uVar50 = *(uint *)(lVar52 + lVar45 * 4);
        uVar49 = SUB164(auVar17 * auVar33,8);
        if (uVar50 != 0) {
          do {
            if (uVar39 == uVar50) {
              cVar37 = String::operator==((String *)
                                          (*(long *)(*(long *)(this + 8) + lVar45 * 8) + 0x10),
                                          param_1);
              if (cVar37 != '\0') {
                Variant::operator=((Variant *)
                                   (*(long *)(*(long *)(this + 8) + (ulong)uVar49 * 8) + 0x18),
                                   (Variant *)local_98);
                local_c0 = (Variant *)(*(long *)(*(long *)(this + 8) + (ulong)uVar49 * 8) + 0x18);
                goto LAB_00110bcc;
              }
              lVar52 = *(long *)(this + 0x10);
            }
            uVar54 = uVar54 + 1;
            auVar18._8_8_ = 0;
            auVar18._0_8_ = (ulong)(uVar49 + 1) * lVar4;
            auVar34._8_8_ = 0;
            auVar34._0_8_ = uVar40;
            lVar45 = SUB168(auVar18 * auVar34,8);
            uVar50 = *(uint *)(lVar52 + lVar45 * 4);
            uVar49 = SUB164(auVar18 * auVar34,8);
          } while ((uVar50 != 0) &&
                  (auVar19._8_8_ = 0, auVar19._0_8_ = (ulong)uVar50 * lVar4, auVar35._8_8_ = 0,
                  auVar35._0_8_ = uVar40, auVar20._8_8_ = 0,
                  auVar20._0_8_ = (ulong)((uVar38 + uVar49) - SUB164(auVar19 * auVar35,8)) * lVar4,
                  auVar36._8_8_ = 0, auVar36._0_8_ = uVar40, uVar54 <= SUB164(auVar20 * auVar36,8)))
          ;
        }
        iVar44 = *(int *)(this + 0x2c);
      }
      uVar47 = (ulong)uVar55;
      goto LAB_001107f9;
    }
    iVar44 = *(int *)(this + 0x2c);
    if (pvVar43 == (void *)0x0) goto LAB_001107f9;
    if (*(int *)(this + 0x2c) != 0) goto LAB_00110d29;
LAB_0011081f:
    uVar55 = *(uint *)(this + 0x28);
    if (uVar55 == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      local_c0 = (Variant *)0x18;
      goto LAB_00110bcc;
    }
    uVar40 = (ulong)(uVar55 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar38 = *(uint *)(hash_table_size_primes + (ulong)uVar55 * 4);
    if (uVar55 + 1 < 2) {
      uVar40 = 2;
    }
    uVar55 = *(uint *)(hash_table_size_primes + uVar40 * 4);
    uVar47 = (ulong)uVar55;
    *(int *)(this + 0x28) = (int)uVar40;
    pvVar43 = *(void **)(this + 8);
    uVar40 = uVar47 * 4;
    uVar51 = uVar47 * 8;
    pvVar3 = *(void **)(this + 0x10);
    uVar41 = Memory::alloc_static(uVar40,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    __s_00 = (void *)Memory::alloc_static(uVar51,false);
    *(void **)(this + 8) = __s_00;
    if (uVar55 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar51)) && (__s_00 < (void *)((long)__s + uVar40))) {
        uVar40 = 0;
        do {
          *(undefined4 *)((long)__s + uVar40 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar40 * 8) = 0;
          uVar40 = uVar40 + 1;
        } while (uVar40 != uVar47);
      }
      else {
        memset(__s,0,uVar40);
        memset(__s_00,0,uVar51);
      }
    }
    if (uVar38 != 0) {
      uVar40 = 0;
      do {
        uVar55 = *(uint *)((long)pvVar3 + uVar40 * 4);
        if (uVar55 != 0) {
          lVar4 = *(long *)(this + 0x10);
          uVar49 = 0;
          uVar39 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar51 = CONCAT44(0,uVar39);
          lVar52 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar5._8_8_ = 0;
          auVar5._0_8_ = (ulong)uVar55 * lVar52;
          auVar21._8_8_ = 0;
          auVar21._0_8_ = uVar51;
          lVar45 = SUB168(auVar5 * auVar21,8);
          puVar1 = (uint *)(lVar4 + lVar45 * 4);
          iVar44 = SUB164(auVar5 * auVar21,8);
          uVar50 = *puVar1;
          uVar41 = *(undefined8 *)((long)pvVar43 + uVar40 * 8);
          while (uVar50 != 0) {
            auVar6._8_8_ = 0;
            auVar6._0_8_ = (ulong)uVar50 * lVar52;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar51;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = (ulong)((uVar39 + iVar44) - SUB164(auVar6 * auVar22,8)) * lVar52;
            auVar23._8_8_ = 0;
            auVar23._0_8_ = uVar51;
            uVar54 = SUB164(auVar7 * auVar23,8);
            uVar48 = uVar41;
            if (uVar54 < uVar49) {
              *puVar1 = uVar55;
              puVar42 = (undefined8 *)((long)__s_00 + lVar45 * 8);
              uVar48 = *puVar42;
              *puVar42 = uVar41;
              uVar55 = uVar50;
              uVar49 = uVar54;
            }
            uVar49 = uVar49 + 1;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = (ulong)(iVar44 + 1) * lVar52;
            auVar24._8_8_ = 0;
            auVar24._0_8_ = uVar51;
            lVar45 = SUB168(auVar8 * auVar24,8);
            puVar1 = (uint *)(lVar4 + lVar45 * 4);
            iVar44 = SUB164(auVar8 * auVar24,8);
            uVar41 = uVar48;
            uVar50 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar45 * 8) = uVar41;
          *puVar1 = uVar55;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar40 = uVar40 + 1;
      } while (uVar38 != uVar40);
      Memory::free_static(pvVar43,false);
      Memory::free_static(pvVar3,false);
    }
  }
  else {
    if (*(int *)(this + 0x2c) != 0) {
      uVar40 = CONCAT44(0,uVar55);
      lVar4 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      uVar39 = String::hash();
      lVar52 = *(long *)(this + 0x10);
      uVar38 = 1;
      if (uVar39 != 0) {
        uVar38 = uVar39;
      }
      auVar13._8_8_ = 0;
      auVar13._0_8_ = (ulong)uVar38 * lVar4;
      auVar29._8_8_ = 0;
      auVar29._0_8_ = uVar40;
      lVar45 = SUB168(auVar13 * auVar29,8);
      uVar39 = *(uint *)(lVar52 + lVar45 * 4);
      uVar50 = SUB164(auVar13 * auVar29,8);
      if (uVar39 == 0) {
        lVar46 = *(long *)(this + 8);
      }
      else {
        lVar46 = *(long *)(this + 8);
        uVar49 = 0;
        do {
          if (uVar38 == uVar39) {
            cVar37 = String::operator==((String *)(*(long *)(lVar46 + lVar45 * 8) + 0x10),param_1);
            if (cVar37 != '\0') {
              local_c0 = (Variant *)(*(long *)(*(long *)(this + 8) + (ulong)uVar50 * 8) + 0x18);
              goto LAB_00110be5;
            }
            lVar52 = *(long *)(this + 0x10);
            lVar46 = *(long *)(this + 8);
          }
          uVar49 = uVar49 + 1;
          auVar14._8_8_ = 0;
          auVar14._0_8_ = (ulong)(uVar50 + 1) * lVar4;
          auVar30._8_8_ = 0;
          auVar30._0_8_ = uVar40;
          lVar45 = SUB168(auVar14 * auVar30,8);
          uVar39 = *(uint *)(lVar52 + lVar45 * 4);
          uVar50 = SUB164(auVar14 * auVar30,8);
        } while ((uVar39 != 0) &&
                (auVar15._8_8_ = 0, auVar15._0_8_ = (ulong)uVar39 * lVar4, auVar31._8_8_ = 0,
                auVar31._0_8_ = uVar40, auVar16._8_8_ = 0,
                auVar16._0_8_ = (ulong)((uVar50 + uVar55) - SUB164(auVar15 * auVar31,8)) * lVar4,
                auVar32._8_8_ = 0, auVar32._0_8_ = uVar40, uVar49 <= SUB164(auVar16 * auVar32,8)));
      }
      local_98[0] = 0;
      local_98[1] = 0;
      local_90 = (undefined1  [16])0x0;
      uVar55 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      if (lVar46 == 0) goto LAB_00110e34;
      goto LAB_00110d1d;
    }
    local_98[0] = 0;
    local_98[1] = 0;
    uVar47 = (ulong)uVar55;
    local_90 = (undefined1  [16])0x0;
    iVar44 = 0;
LAB_001107f9:
    if ((float)uVar47 * __LC66 < (float)(iVar44 + 1)) goto LAB_0011081f;
  }
  local_68 = 0;
  local_78 = (undefined1  [16])0x0;
  if (*(long *)param_1 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)param_1);
  }
  Variant::Variant((Variant *)local_60,(Variant *)local_98);
  puVar42 = (undefined8 *)operator_new(0x30,"");
  puVar42[2] = 0;
  *puVar42 = local_78._0_8_;
  puVar42[1] = local_78._8_8_;
  if (local_68 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar42 + 2),(CowData *)&local_68);
  }
  local_c0 = (Variant *)(puVar42 + 3);
  Variant::Variant(local_c0,(Variant *)local_60);
  if (Variant::needs_deinit[local_60[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  if (*(undefined8 **)(this + 0x20) == (undefined8 *)0x0) {
    *(undefined8 **)(this + 0x18) = puVar42;
  }
  else {
    **(undefined8 **)(this + 0x20) = puVar42;
    puVar42[1] = *(undefined8 *)(this + 0x20);
  }
  *(undefined8 **)(this + 0x20) = puVar42;
  uVar38 = String::hash();
  lVar4 = *(long *)(this + 0x10);
  uVar55 = 1;
  if (uVar38 != 0) {
    uVar55 = uVar38;
  }
  uVar50 = 0;
  uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar40 = CONCAT44(0,uVar38);
  lVar52 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  auVar9._8_8_ = 0;
  auVar9._0_8_ = (ulong)uVar55 * lVar52;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = uVar40;
  lVar46 = SUB168(auVar9 * auVar25,8);
  lVar45 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar4 + lVar46 * 4);
  iVar44 = SUB164(auVar9 * auVar25,8);
  uVar39 = *puVar1;
  while (uVar39 != 0) {
    auVar10._8_8_ = 0;
    auVar10._0_8_ = (ulong)uVar39 * lVar52;
    auVar26._8_8_ = 0;
    auVar26._0_8_ = uVar40;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = (ulong)((uVar38 + iVar44) - SUB164(auVar10 * auVar26,8)) * lVar52;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar40;
    uVar49 = SUB164(auVar11 * auVar27,8);
    puVar53 = puVar42;
    if (uVar49 < uVar50) {
      *puVar1 = uVar55;
      puVar2 = (undefined8 *)(lVar45 + lVar46 * 8);
      puVar53 = (undefined8 *)*puVar2;
      *puVar2 = puVar42;
      uVar50 = uVar49;
      uVar55 = uVar39;
    }
    uVar50 = uVar50 + 1;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = (ulong)(iVar44 + 1) * lVar52;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar40;
    lVar46 = SUB168(auVar12 * auVar28,8);
    puVar1 = (uint *)(lVar4 + lVar46 * 4);
    iVar44 = SUB164(auVar12 * auVar28,8);
    puVar42 = puVar53;
    uVar39 = *puVar1;
  }
  *(undefined8 **)(lVar45 + lVar46 * 8) = puVar42;
  *puVar1 = uVar55;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_00110bcc:
  if (Variant::needs_deinit[local_98[0]] != '\0') {
    Variant::_clear_internal();
  }
LAB_00110be5:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_c0;
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
        if (pvVar5 == (void *)0x0) goto LAB_00111144;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_00111144:
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  return;
}



/* ProjectDialog::~ProjectDialog() */

void __thiscall ProjectDialog::~ProjectDialog(ProjectDialog *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  
  *(undefined ***)this = &PTR__initialize_classv_001193c0;
  if (*(long *)(this + 0xe98) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xe98) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0xe98);
      *(undefined8 *)(this + 0xe98) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xe90));
  if (*(long *)(this + 0xe88) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xe88) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0xe88);
      *(undefined8 *)(this + 0xe88) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xe80));
  if (*(long *)(this + 0xe10) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0xe10);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  *(undefined ***)this = &PTR__initialize_classv_00118fe8;
  AcceptDialog::~AcceptDialog((AcceptDialog *)this);
  return;
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
      goto LAB_0011149f;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_0011149f;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00111478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_00111561;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0011149f:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC77,"./core/object/callable_method_pointer.h",0x67,
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
LAB_00111561:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<Control, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<Control,void>::call
          (CallableCustomMethodPointer<Control,void> *this,Variant **param_1,int param_2,
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
      goto LAB_001116bf;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_001116bf;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00111698. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_00111781;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_001116bf:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC77,"./core/object/callable_method_pointer.h",0x67,
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
LAB_00111781:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<ProjectDialog, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<ProjectDialog,void>::call
          (CallableCustomMethodPointer<ProjectDialog,void> *this,Variant **param_1,int param_2,
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
      goto LAB_001118df;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_001118df;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001118b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_001119a1;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_001118df:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC77,"./core/object/callable_method_pointer.h",0x67,
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
LAB_001119a1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<ProjectDialog, void, bool>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<ProjectDialog,void,bool>::call
          (CallableCustomMethodPointer<ProjectDialog,void,bool> *this,Variant **param_1,int param_2,
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
      goto LAB_00111b69;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar7[1] == 0) goto LAB_00111b69;
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
        uVar4 = _LC78;
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        bVar8 = Variant::operator_cast_to_bool(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00111b18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),bVar8);
          return;
        }
        goto LAB_00111c2b;
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
LAB_00111b69:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC77,"./core/object/callable_method_pointer.h",0x67,
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
LAB_00111c2b:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<Node, void, Node*, bool>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<Node,void,Node*,bool>::call
          (CallableCustomMethodPointer<Node,void,Node*,bool> *this,Variant **param_1,int param_2,
          Variant *param_3,CallError *param_4)

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
  code *UNRECOVERED_JUMPTABLE;
  long in_FS_OFFSET;
  bool bVar11;
  CowData<char32_t> local_70 [8];
  CowData<char32_t> local_68 [8];
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar9 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar9 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar3 = (ulong)local_58 >> 8;
      local_58 = (char *)(uVar3 << 8);
      LOCK();
      bVar11 = (char)ObjectDB::spin_lock == '\0';
      if (bVar11) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar11) break;
      local_58 = (char *)(uVar3 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar10 = (ulong *)((ulong)uVar9 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar10 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_00111e45;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar10[1] == 0) goto LAB_00111e45;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if ((uint)param_2 < 3) {
      if (param_2 == 2) {
        *(undefined4 *)param_4 = 0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[1],1);
        uVar4 = _LC79;
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        bVar11 = Variant::operator_cast_to_bool(param_1[1]);
        cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,0x18);
        if (cVar5 == '\0') {
LAB_00111db4:
          uVar4 = _LC80;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        else {
          this_00 = *param_1;
          pOVar6 = Variant::operator_cast_to_Object_(this_00);
          pOVar7 = Variant::operator_cast_to_Object_(this_00);
          if (((pOVar7 == (Object *)0x0) ||
              (lVar8 = __dynamic_cast(pOVar7,&Object::typeinfo,&Node::typeinfo,0), lVar8 == 0)) &&
             (pOVar6 != (Object *)0x0)) goto LAB_00111db4;
        }
        pOVar6 = Variant::operator_cast_to_Object_(*param_1);
        if (pOVar6 != (Object *)0x0) {
          pOVar6 = (Object *)__dynamic_cast(pOVar6,&Object::typeinfo,&Node::typeinfo,0);
        }
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00111e1e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),pOVar6,bVar11);
          return;
        }
        goto LAB_00111f56;
      }
      *(undefined4 *)param_4 = 4;
      *(undefined4 *)(param_4 + 8) = 2;
    }
    else {
      *(undefined4 *)param_4 = 3;
      *(undefined4 *)(param_4 + 8) = 2;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_00111e45:
    local_60 = 0;
    local_58 = "\', can\'t call method.";
    local_50 = 0x15;
    String::parse_latin1((StrRange *)&local_60);
    uitos((ulong)local_70);
    operator+((char *)local_68,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_58,(String *)local_68);
    _err_print_error(&_LC77,"./core/object/callable_method_pointer.h",0x67,
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
LAB_00111f56:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<ProjectDialog, void, String const&>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<ProjectDialog,void,String_const&>::call
          (CallableCustomMethodPointer<ProjectDialog,void,String_const&> *this,Variant **param_1,
          int param_2,Variant *param_3,CallError *param_4)

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
            uVar4 = _LC81;
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
        goto LAB_0011202e;
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
  _err_print_error(&_LC77,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (Variant *)&local_48,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref(local_58);
  CowData<char32_t>::_unref(local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
LAB_0011202e:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ProjectDialog::~ProjectDialog() */

void __thiscall ProjectDialog::~ProjectDialog(ProjectDialog *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  
  *(undefined ***)this = &PTR__initialize_classv_001193c0;
  if (*(long *)(this + 0xe98) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xe98) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0xe98);
      *(undefined8 *)(this + 0xe98) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xe90));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xe88));
  if (*(long *)(this + 0xe80) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xe80) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0xe80);
      *(undefined8 *)(this + 0xe80) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0xe10) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0xe10);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  *(undefined ***)this = &PTR__initialize_classv_00118fe8;
  AcceptDialog::~AcceptDialog((AcceptDialog *)this);
  operator_delete(this,0xea0);
  return;
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
    if ((code *)PTR__bind_methods_0011e050 != Object::_bind_methods) {
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
      if ((code *)PTR__bind_methods_0011e060 != RefCounted::_bind_methods) {
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
    if ((code *)PTR__bind_methods_0011e058 != RefCounted::_bind_methods) {
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



/* AcceptDialog::is_class(String const&) const */

undefined8 __thiscall AcceptDialog::is_class(AcceptDialog *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_001127ab;
  }
  cVar5 = String::operator==(param_1,"AcceptDialog");
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
      if (cVar5 != '\0') goto LAB_001127ab;
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
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        if (cVar5 != '\0') goto LAB_001127ab;
      }
      cVar5 = String::operator==(param_1,"Viewport");
      if (cVar5 == '\0') {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar6 = Node::is_class((Node *)this,param_1);
          return uVar6;
        }
        goto LAB_00112975;
      }
    }
  }
LAB_001127ab:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00112975:
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
            if (lVar4 == 0) goto LAB_001129ef;
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
LAB_001129ef:
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
    if (cVar5 != '\0') goto LAB_00112aa3;
  }
  cVar5 = String::operator==(param_1,"ConfirmationDialog");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = AcceptDialog::is_class((AcceptDialog *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_00112aa3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProjectDialog::is_class(String const&) const */

undefined8 __thiscall ProjectDialog::is_class(ProjectDialog *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_00112bfb;
  }
  cVar5 = String::operator==(param_1,"ProjectDialog");
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
      if (cVar5 != '\0') goto LAB_00112bfb;
    }
    cVar5 = String::operator==(param_1,"ConfirmationDialog");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = AcceptDialog::is_class((AcceptDialog *)this,param_1);
        return uVar6;
      }
      goto LAB_00112d38;
    }
  }
LAB_00112bfb:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00112d38:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
            if ((code *)PTR__bind_methods_0011e060 != Node::_bind_methods) {
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
      if ((code *)PTR__bind_compatibility_methods_0011e068 != Object::_bind_compatibility_methods) {
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
    if ((code *)PTR__bind_methods_0011e070 != AcceptDialog::_bind_methods) {
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
              if ((code *)PTR__bind_methods_0011e060 != Node::_bind_methods) {
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
            if ((code *)PTR__bind_compatibility_methods_0011e078 !=
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
      if ((code *)PTR__bind_methods_0011e080 != Container::_bind_methods) {
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
              if ((code *)PTR__bind_methods_0011e060 != Node::_bind_methods) {
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
            if ((code *)PTR__bind_compatibility_methods_0011e078 !=
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
      if ((code *)PTR__bind_methods_0011e080 != Container::_bind_methods) {
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
LAB_0011427d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0011427d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar5;
      local_68 = local_80;
      goto joined_r0x0011429f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar5;
joined_r0x0011429f:
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
  local_78 = &_LC10;
  local_88 = 0;
  local_90 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = &_LC10;
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
LAB_001145ed:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001145ed;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar5;
      local_68 = local_80;
      goto joined_r0x0011460f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar5;
joined_r0x0011460f:
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



/* ConfigFile::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall ConfigFile::_get_property_listv(ConfigFile *this,List *param_1,bool param_2)

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
  if (local_90 == 0) {
LAB_0011496d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0011496d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0011498f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0011498f:
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
LAB_00114d4d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00114d4d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00114d6f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00114d6f:
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
  if (local_90 == 0) {
LAB_0011512d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0011512d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0011514f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0011514f:
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
  StringName::StringName((StringName *)&local_78,"Window",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if ((code *)PTR__get_property_list_0011e088 != Object::_get_property_list) {
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
  if (local_90 == 0) {
LAB_0011551d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0011551d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0011553f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0011553f:
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
  if (local_90 == 0) {
LAB_001158fd:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001158fd;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0011591f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0011591f:
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



/* ProjectDialog::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall ProjectDialog::_get_property_listv(ProjectDialog *this,List *param_1,bool param_2)

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
    ConfirmationDialog::_get_property_listv((ConfirmationDialog *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "ProjectDialog";
  local_70 = 0xd;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "ProjectDialog";
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
LAB_00115cdd:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00115cdd;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00115cff;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00115cff:
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
  StringName::StringName((StringName *)&local_78,"ProjectDialog",false);
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
  if (local_90 == 0) {
LAB_001160bd:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001160bd;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x001160df;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x001160df:
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
  StringName::StringName((StringName *)&local_78,"CanvasItem",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if ((code *)PTR__get_property_list_0011e090 != Object::_get_property_list) {
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
  if (local_90 == 0) {
LAB_001164ad:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001164ad;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x001164cf;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x001164cf:
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
  StringName::StringName((StringName *)&local_78,"Control",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if ((code *)PTR__get_property_list_0011e098 != CanvasItem::_get_property_list) {
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
LAB_0011689d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0011689d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x001168bf;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x001168bf:
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
  if (local_90 == 0) {
LAB_00116c7d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00116c7d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00116c9f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00116c9f:
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
LAB_0011705d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0011705d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0011707f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0011707f:
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
LAB_0011743d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0011743d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0011745f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0011745f:
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



/* ProjectDialog::_bind_methods() [clone .cold] */

void ProjectDialog::_bind_methods(void)

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



/* ProjectDialog::ok_pressed() [clone .cold] */

void ProjectDialog::ok_pressed(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* ProjectDialog::_initialize_classv() */

void ProjectDialog::_initialize_classv(void)

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
              if ((code *)PTR__bind_methods_0011e060 != Node::_bind_methods) {
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
        if ((code *)PTR__bind_compatibility_methods_0011e068 != Object::_bind_compatibility_methods)
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
      if ((code *)PTR__bind_methods_0011e070 != AcceptDialog::_bind_methods) {
        ConfirmationDialog::_bind_methods();
      }
      ConfirmationDialog::initialize_class()::initialized = '\x01';
    }
    local_58 = "ConfirmationDialog";
    local_68 = 0;
    local_50 = 0x12;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "ProjectDialog";
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
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Ref<DirAccess>::unref() */

void __thiscall Ref<DirAccess>::unref(Ref<DirAccess> *this)

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



/* Ref<FileAccess>::unref() */

void __thiscall Ref<FileAccess>::unref(Ref<FileAccess> *this)

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



/* CowData<unsigned char>::_unref() */

void __thiscall CowData<unsigned_char>::_unref(CowData<unsigned_char> *this)

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
LAB_00118240:
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
  if (lVar9 == 0) goto LAB_00118240;
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
      CowData<char32_t>::_unref((CowData<char32_t> *)(lVar4 + uVar8 * 8));
      uVar8 = uVar8 + 1;
    }
    goto LAB_00118296;
  }
  if (lVar9 == lVar5) {
LAB_001181bb:
    puVar7 = *(undefined8 **)this;
    if (puVar7 == (undefined8 *)0x0) {
LAB_00118296:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar4 = puVar7[-1];
    if (param_1 <= lVar4) goto LAB_0011812f;
  }
  else {
    if (lVar4 != 0) {
      uVar3 = _realloc(this,lVar9);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      goto LAB_001181bb;
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
LAB_0011812f:
  puVar7[-1] = param_1;
  return 0;
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



/* ProjectDialog::_set_message(String const&, ProjectDialog::MessageType, ProjectDialog::InputType)
    */

void ProjectDialog::_GLOBAL__sub_I__set_message(void)

{
  undefined8 uStack_8;
  
  if (EditorFileDialog::base_property_helper == '\0') {
    EditorFileDialog::base_property_helper = '\x01';
    EditorFileDialog::base_property_helper._64_8_ = 0;
    EditorFileDialog::base_property_helper._0_16_ = (undefined1  [16])0x0;
    EditorFileDialog::base_property_helper._24_16_ = (undefined1  [16])0x0;
    EditorFileDialog::base_property_helper._40_16_ = (undefined1  [16])0x0;
    EditorFileDialog::base_property_helper._56_8_ = 2;
    __cxa_atexit(PropertyListHelper::~PropertyListHelper,EditorFileDialog::base_property_helper,
                 &__dso_handle);
  }
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
  if (OptionButton::base_property_helper != '\0') {
    return;
  }
  OptionButton::base_property_helper = 1;
  OptionButton::base_property_helper._64_8_ = 0;
  OptionButton::base_property_helper._56_8_ = 2;
  OptionButton::base_property_helper._0_16_ = (undefined1  [16])0x0;
  OptionButton::base_property_helper._24_16_ = (undefined1  [16])0x0;
  OptionButton::base_property_helper._40_16_ = (undefined1  [16])0x0;
  __cxa_atexit(PropertyListHelper::~PropertyListHelper,OptionButton::base_property_helper,
               &__dso_handle,uStack_8);
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
/* ProjectDialog::~ProjectDialog() */

void __thiscall ProjectDialog::~ProjectDialog(ProjectDialog *this)

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
/* ConfigFile::~ConfigFile() */

void __thiscall ConfigFile::~ConfigFile(ConfigFile *this)

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
/* CallableCustomMethodPointer<ProjectDialog, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ProjectDialog,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ProjectDialog,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<Control, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Control,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Control,void> *this)

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
/* CallableCustomMethodPointer<ProjectDialog, void, String const&>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<ProjectDialog,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ProjectDialog,void,String_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<ProjectDialog, void, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ProjectDialog,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ProjectDialog,void,bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<Node, void, Node*, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Node,void,Node*,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Node,void,Node*,bool> *this)

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





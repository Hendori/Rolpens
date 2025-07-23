/* VersionControlEditorPlugin::_confirm_discard_all() */

void __thiscall VersionControlEditorPlugin::_confirm_discard_all(VersionControlEditorPlugin *this)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  Window::popup_centered(*(Vector2i **)(this + 0x6e8));
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VersionControlEditorPlugin::_popup_file_dialog(Variant const&) */

void __thiscall
VersionControlEditorPlugin::_popup_file_dialog(VersionControlEditorPlugin *this,Variant *param_1)

{
  Object *pOVar1;
  long lVar2;
  
  pOVar1 = Variant::operator_cast_to_Object_(param_1);
  if (pOVar1 != (Object *)0x0) {
    lVar2 = __dynamic_cast(pOVar1,&Object::typeinfo,&FileDialog::typeinfo,0);
    if (lVar2 != 0) {
      Window::popup_centered_ratio(_LC3);
      return;
    }
  }
  _err_print_error("_popup_file_dialog","editor/plugins/version_control_editor_plugin.cpp",0x141,
                   "Parameter \"file_dialog\" is null.",0,0);
  return;
}



/* void Ref<Texture>::TEMPNAMEPLACEHOLDERVALUE(Ref<Texture2D> const&) [clone .isra.0] */

void __thiscall Ref<Texture>::operator=(Ref<Texture> *this,Ref *param_1)

{
  Object *pOVar1;
  char cVar2;
  Object *pOVar3;
  
  pOVar1 = *(Object **)this;
  if (param_1 == (Ref *)0x0) {
    if (pOVar1 == (Object *)0x0) {
      return;
    }
    *(undefined8 *)this = 0;
  }
  else {
    pOVar3 = (Object *)__dynamic_cast(param_1,&Object::typeinfo,&Texture::typeinfo,0);
    if (pOVar3 == pOVar1) {
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



/* Ref<Theme>::TEMPNAMEPLACEHOLDERVALUE(Ref<Theme> const&) [clone .isra.0] */

void __thiscall Ref<Theme>::operator=(Ref<Theme> *this,Ref *param_1)

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



/* VersionControlEditorPlugin::_create_vcs_metadata_files() */

void VersionControlEditorPlugin::_create_vcs_metadata_files(void)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = 0;
  local_38 = "res://";
  local_30 = 6;
  String::parse_latin1((StrRange *)&local_40);
  uVar3 = OptionButton::get_selected();
  EditorVCSInterface::create_vcs_metadata_files(uVar3);
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
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VersionControlEditorPlugin::_update_remote_create_button(String const&) */

void __thiscall
VersionControlEditorPlugin::_update_remote_create_button
          (VersionControlEditorPlugin *this,String *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long in_FS_OFFSET;
  long local_18;
  
  uVar2 = *(undefined8 *)(this + 0x728);
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  String::strip_edges(true,SUB81(param_1,0));
  BaseButton::set_disabled(SUB81(uVar2,0));
  if (local_18 != 0) {
    LOCK();
    plVar1 = (long *)(local_18 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_18 + -0x10),false);
    }
  }
  if (lVar3 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VersionControlEditorPlugin::_update_branch_create_button(String const&) */

void __thiscall
VersionControlEditorPlugin::_update_branch_create_button
          (VersionControlEditorPlugin *this,String *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long in_FS_OFFSET;
  long local_18;
  
  uVar2 = *(undefined8 *)(this + 0x708);
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  String::strip_edges(true,SUB81(param_1,0));
  BaseButton::set_disabled(SUB81(uVar2,0));
  if (local_18 != 0) {
    LOCK();
    plVar1 = (long *)(local_18 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_18 + -0x10),false);
    }
  }
  if (lVar3 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VersionControlEditorPlugin::_update_extra_options() */

void __thiscall VersionControlEditorPlugin::_update_extra_options(VersionControlEditorPlugin *this)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  Object *pOVar5;
  char cVar6;
  int iVar7;
  Object *pOVar8;
  int iVar9;
  long in_FS_OFFSET;
  Object *local_50;
  long local_48;
  long local_40;
  
  iVar9 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  PopupMenu::clear(SUB81(*(undefined8 *)(this + 0x830),0));
  while( true ) {
    iVar7 = OptionButton::get_item_count();
    if (iVar7 <= iVar9) break;
    uVar3 = *(undefined8 *)(this + 0x830);
    OptionButton::get_item_id((int)*(undefined8 *)(this + 0x7e0));
    OptionButton::get_item_text((int)&local_48);
    pOVar8 = *(Object **)(EditorNode::singleton + 0x838);
    if (pOVar8 == (Object *)0x0) goto VersionControlEditorPlugin__update_extra_options;
    cVar6 = RefCounted::reference();
    if (cVar6 == '\0') {
      pOVar8 = (Object *)0x0;
    }
    pcVar4 = *(code **)(*(long *)pOVar8 + 0x1c8);
    lVar2 = EditorStringNames::singleton + 0x10;
    if (_update_extra_options()::{lambda()#1}::operator()()::sname == '\0') {
      iVar7 = __cxa_guard_acquire(&_update_extra_options()::{lambda()#1}::operator()()::sname);
      if (iVar7 != 0) {
        _scs_create((char *)&_update_extra_options()::{lambda()#1}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &_update_extra_options()::{lambda()#1}::operator()()::sname,&__dso_handle);
        __cxa_guard_release(&_update_extra_options()::{lambda()#1}::operator()()::sname);
      }
    }
    (*pcVar4)(&local_50,pOVar8,&_update_extra_options()::{lambda()#1}::operator()()::sname,lVar2);
    PopupMenu::add_icon_item(uVar3,&local_50,&local_48,0xffffffff,0);
    if (local_50 != (Object *)0x0) {
      cVar6 = RefCounted::unreference();
      pOVar5 = local_50;
      if (cVar6 != '\0') {
        cVar6 = predelete_handler(local_50);
        if (cVar6 != '\0') {
          (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
          Memory::free_static(pOVar5,false);
        }
      }
    }
    cVar6 = RefCounted::unreference();
    if (cVar6 != '\0') {
      cVar6 = predelete_handler(pOVar8);
      if (cVar6 != '\0') {
        (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
        Memory::free_static(pOVar8,false);
      }
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
    iVar9 = iVar9 + 1;
  }
  iVar9 = 0;
  Viewport::update_canvas_items();
  PopupMenu::clear(SUB81(*(undefined8 *)(this + 0x838),0));
  while( true ) {
    iVar7 = OptionButton::get_item_count();
    if (iVar7 <= iVar9) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        Viewport::update_canvas_items();
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    uVar3 = *(undefined8 *)(this + 0x838);
    OptionButton::get_item_id((int)*(undefined8 *)(this + 0x810));
    OptionButton::get_item_text((int)&local_48);
    pOVar8 = *(Object **)(EditorNode::singleton + 0x838);
    if (pOVar8 == (Object *)0x0) break;
    cVar6 = RefCounted::reference();
    if (cVar6 == '\0') {
      pOVar8 = (Object *)0x0;
    }
    pcVar4 = *(code **)(*(long *)pOVar8 + 0x1c8);
    lVar2 = EditorStringNames::singleton + 0x10;
    if (_update_extra_options()::{lambda()#2}::operator()()::sname == '\0') {
      iVar7 = __cxa_guard_acquire(&_update_extra_options()::{lambda()#2}::operator()()::sname);
      if (iVar7 != 0) {
        _scs_create((char *)&_update_extra_options()::{lambda()#2}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &_update_extra_options()::{lambda()#2}::operator()()::sname,&__dso_handle);
        __cxa_guard_release(&_update_extra_options()::{lambda()#2}::operator()()::sname);
      }
    }
    (*pcVar4)(&local_50,pOVar8,&_update_extra_options()::{lambda()#2}::operator()()::sname,lVar2);
    PopupMenu::add_icon_item(uVar3,&local_50,&local_48,0xffffffff,0);
    if (local_50 != (Object *)0x0) {
      cVar6 = RefCounted::unreference();
      pOVar5 = local_50;
      if (cVar6 != '\0') {
        cVar6 = predelete_handler(local_50);
        if (cVar6 != '\0') {
          (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
          Memory::free_static(pOVar5,false);
        }
      }
    }
    cVar6 = RefCounted::unreference();
    if (cVar6 != '\0') {
      cVar6 = predelete_handler(pOVar8);
      if (cVar6 != '\0') {
        (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
        Memory::free_static(pOVar8,false);
      }
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
    iVar9 = iVar9 + 1;
  }
VersionControlEditorPlugin__update_extra_options:
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
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



/* VersionControlEditorPlugin::_ssh_public_key_selected(String const&) */

void __thiscall
VersionControlEditorPlugin::_ssh_public_key_selected
          (VersionControlEditorPlugin *this,String *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long in_FS_OFFSET;
  bool bVar6;
  long local_18;
  
  uVar2 = *(undefined8 *)(this + 0x6b8);
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = 0;
  if (*(long *)param_1 != 0) {
    plVar1 = (long *)(*(long *)param_1 + -0x10);
    do {
      lVar4 = *plVar1;
      if (lVar4 == 0) goto LAB_00100a83;
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
LAB_00100a83:
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



/* VersionControlEditorPlugin::_ssh_private_key_selected(String const&) */

void __thiscall
VersionControlEditorPlugin::_ssh_private_key_selected
          (VersionControlEditorPlugin *this,String *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long in_FS_OFFSET;
  bool bVar6;
  long local_18;
  
  uVar2 = *(undefined8 *)(this + 0x6c0);
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = 0;
  if (*(long *)param_1 != 0) {
    plVar1 = (long *)(*(long *)param_1 + -0x10);
    do {
      lVar4 = *plVar1;
      if (lVar4 == 0) goto LAB_00100b33;
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
LAB_00100b33:
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



/* VersionControlEditorPlugin::_update_commit_button() */

void __thiscall VersionControlEditorPlugin::_update_commit_button(VersionControlEditorPlugin *this)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long in_FS_OFFSET;
  long local_30;
  long local_28;
  
  uVar2 = *(undefined8 *)(this + 0x878);
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  TextEdit::get_text();
  String::strip_edges(true,true);
  BaseButton::set_disabled(SUB81(uVar2,0));
  if (local_28 != 0) {
    LOCK();
    plVar1 = (long *)(local_28 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_28 + -0x10),false);
    }
  }
  if (local_30 != 0) {
    LOCK();
    plVar1 = (long *)(local_30 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_30 + -0x10),false);
    }
  }
  if (lVar3 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VersionControlEditorPlugin::_push() */

void VersionControlEditorPlugin::_push(void)

{
  long *plVar1;
  long lVar2;
  String *pSVar3;
  long in_FS_OFFSET;
  long local_40;
  int local_38;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = EditorVCSInterface::get_singleton();
  if (lVar2 == 0) {
    _err_print_error("_push","editor/plugins/version_control_editor_plugin.cpp",0x1c7,
                     "Parameter \"EditorVCSInterface::get_singleton()\" is null.",
                     "No VCS plugin is initialized. Select a Version Control Plugin from Project menu."
                     ,0,0);
  }
  else {
    pSVar3 = (String *)EditorVCSInterface::get_singleton();
    OptionButton::get_selected_metadata();
    Variant::operator_cast_to_String((Variant *)&local_40);
    EditorVCSInterface::push(pSVar3,SUB81((Variant *)&local_40,0));
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
    if (Variant::needs_deinit[local_38] != '\0') {
      Variant::_clear_internal();
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VersionControlEditorPlugin::_bind_methods() */

void VersionControlEditorPlugin::_bind_methods(void)

{
  return;
}



/* VersionControlEditorPlugin::_populate_available_vcs_names() */

void __thiscall
VersionControlEditorPlugin::_populate_available_vcs_names(VersionControlEditorPlugin *this)

{
  long *plVar1;
  char *__s;
  long lVar2;
  String *pSVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long in_FS_OFFSET;
  bool bVar7;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  OptionButton::clear();
  if ((*(long **)(this + 0x660) != (long *)0x0) &&
     (plVar6 = (long *)**(long **)(this + 0x660), plVar6 != (long *)0x0)) {
    do {
      lVar2 = *plVar6;
      pSVar3 = *(String **)(this + 0x690);
      if (lVar2 == 0) {
        local_60 = 0;
      }
      else {
        __s = *(char **)(lVar2 + 8);
        local_60 = 0;
        if (__s == (char *)0x0) {
          plVar1 = (long *)(*(long *)(lVar2 + 0x10) + -0x10);
          if (*(long *)(lVar2 + 0x10) != 0) {
            do {
              lVar4 = *plVar1;
              if (lVar4 == 0) goto LAB_00100e43;
              LOCK();
              lVar5 = *plVar1;
              bVar7 = lVar4 == lVar5;
              if (bVar7) {
                *plVar1 = lVar4 + 1;
                lVar5 = lVar4;
              }
              UNLOCK();
            } while (!bVar7);
            if (lVar5 != -1) {
              local_60 = *(long *)(lVar2 + 0x10);
            }
          }
        }
        else {
          local_50 = strlen(__s);
          local_58 = __s;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
LAB_00100e43:
      OptionButton::add_item(pSVar3,(int)(StrRange *)&local_60);
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
      plVar6 = (long *)plVar6[1];
    } while (plVar6 != (long *)0x0);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* VersionControlEditorPlugin::popup_vcs_metadata_dialog() */

void __thiscall
VersionControlEditorPlugin::popup_vcs_metadata_dialog(VersionControlEditorPlugin *this)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  Window::popup_centered(*(Vector2i **)(this + 0x670));
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VersionControlEditorPlugin::_set_vcs_ui_state(bool) */

void VersionControlEditorPlugin::_set_vcs_ui_state(bool param_1)

{
  undefined7 in_register_00000039;
  long lVar1;
  
  lVar1 = CONCAT71(in_register_00000039,param_1);
  BaseButton::set_disabled(SUB81(*(undefined8 *)(*(long *)(lVar1 + 0x680) + 0xd88),0));
  BaseButton::set_disabled(SUB81(*(undefined8 *)(lVar1 + 0x690),0));
  BaseButton::set_pressed_no_signal(SUB81(*(undefined8 *)(lVar1 + 0x688),0));
  return;
}



/* VersionControlEditorPlugin::_get_item_count(Tree*) */

undefined4 VersionControlEditorPlugin::_get_item_count(Tree *param_1)

{
  undefined4 uVar1;
  long lVar2;
  long in_FS_OFFSET;
  Array aAStack_28 [8];
  long local_20;
  
  uVar1 = 0;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = Tree::get_root();
  if (lVar2 != 0) {
    Tree::get_root();
    TreeItem::get_children();
    uVar1 = Array::size();
    Array::~Array(aAStack_28);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VersionControlEditorPlugin::_force_push() */

void VersionControlEditorPlugin::_force_push(void)

{
  long *plVar1;
  long lVar2;
  String *pSVar3;
  long in_FS_OFFSET;
  long local_40;
  int local_38;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = EditorVCSInterface::get_singleton();
  if (lVar2 == 0) {
    _err_print_error("_force_push","editor/plugins/version_control_editor_plugin.cpp",0x1cd,
                     "Parameter \"EditorVCSInterface::get_singleton()\" is null.",
                     "No VCS plugin is initialized. Select a Version Control Plugin from Project menu."
                     ,0,0);
  }
  else {
    pSVar3 = (String *)EditorVCSInterface::get_singleton();
    OptionButton::get_selected_metadata();
    Variant::operator_cast_to_String((Variant *)&local_40);
    EditorVCSInterface::push(pSVar3,SUB81((Variant *)&local_40,0));
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
    if (Variant::needs_deinit[local_38] != '\0') {
      Variant::_clear_internal();
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VersionControlEditorPlugin::_extra_option_selected(int) */

void __thiscall
VersionControlEditorPlugin::_extra_option_selected(VersionControlEditorPlugin *this,int param_1)

{
  long lVar1;
  long lVar2;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = EditorVCSInterface::get_singleton();
  if (lVar2 == 0) {
    _err_print_error("_extra_option_selected","editor/plugins/version_control_editor_plugin.cpp",
                     0x33a,"Parameter \"EditorVCSInterface::get_singleton()\" is null.",
                     "No VCS plugin is initialized. Select a Version Control Plugin from Project menu."
                     ,0,0);
  }
  else if (param_1 == 1) {
    Window::popup_centered(*(Vector2i **)(this + 0x6f8));
  }
  else if (param_1 == 2) {
    Window::popup_centered(*(Vector2i **)(this + 0x710));
  }
  else if (param_1 == 0) {
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      _force_push();
      return;
    }
    goto LAB_00101233;
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00101233:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VersionControlEditorPlugin::_update_opened_tabs() */

void VersionControlEditorPlugin::_update_opened_tabs(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  Object *pOVar6;
  void *pvVar7;
  code *pcVar8;
  char cVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  NodePath *this;
  long lVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  long in_FS_OFFSET;
  long local_50;
  
  lVar12 = 0;
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  EditorData::get_edited_scenes();
  do {
    if (local_50 == 0) {
LAB_001012c5:
      if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    if (*(long *)(local_50 + -8) <= lVar12) {
      LOCK();
      plVar16 = (long *)(local_50 + -0x10);
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (*plVar16 == 0) {
        if (local_50 == 0) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)invalidInstructionException();
          (*pcVar8)();
        }
        lVar12 = *(long *)(local_50 + -8);
        this = (NodePath *)(local_50 + 0x48);
        lVar15 = 0;
        if (lVar12 != 0) {
          do {
            NodePath::~NodePath(this);
            Dictionary::~Dictionary((Dictionary *)(this + -8));
            if (*(long *)(this + -0x18) != 0) {
              LOCK();
              plVar16 = (long *)(*(long *)(this + -0x18) + -0x10);
              *plVar16 = *plVar16 + -1;
              UNLOCK();
              if (*plVar16 == 0) {
                lVar10 = *(long *)(this + -0x18);
                if (lVar10 == 0) {
                    /* WARNING: Does not return */
                  pcVar8 = (code *)invalidInstructionException();
                  (*pcVar8)();
                }
                lVar3 = *(long *)(lVar10 + -8);
                lVar14 = 0;
                *(undefined8 *)(this + -0x18) = 0;
                lVar11 = lVar10;
                if (lVar3 != 0) {
                  do {
                    if (*(long *)(lVar11 + 8) != 0) {
                      LOCK();
                      plVar16 = (long *)(*(long *)(lVar11 + 8) + -0x10);
                      *plVar16 = *plVar16 + -1;
                      UNLOCK();
                      if (*plVar16 == 0) {
                        plVar16 = *(long **)(lVar11 + 8);
                        if (plVar16 == (long *)0x0) {
                    /* WARNING: Does not return */
                          pcVar8 = (code *)invalidInstructionException();
                          (*pcVar8)();
                        }
                        lVar4 = plVar16[-1];
                        lVar13 = 0;
                        *(undefined8 *)(lVar11 + 8) = 0;
                        plVar17 = plVar16;
                        if (lVar4 != 0) {
                          do {
                            while( true ) {
                              if (plVar17[2] != 0) {
                                LOCK();
                                plVar1 = (long *)(plVar17[2] + -0x10);
                                *plVar1 = *plVar1 + -1;
                                UNLOCK();
                                if (*plVar1 == 0) {
                                  lVar5 = plVar17[2];
                                  plVar17[2] = 0;
                                  Memory::free_static((void *)(lVar5 + -0x10),false);
                                }
                              }
                              if ((*plVar17 != 0) &&
                                 (cVar9 = RefCounted::unreference(), cVar9 != '\0')) break;
LAB_001013f0:
                              lVar13 = lVar13 + 1;
                              plVar17 = plVar17 + 4;
                              if (lVar4 == lVar13) goto LAB_00101478;
                            }
                            pOVar6 = (Object *)*plVar17;
                            cVar9 = predelete_handler(pOVar6);
                            if (cVar9 == '\0') goto LAB_001013f0;
                            lVar13 = lVar13 + 1;
                            (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
                            Memory::free_static(pOVar6,false);
                            plVar17 = plVar17 + 4;
                          } while (lVar4 != lVar13);
                        }
LAB_00101478:
                        Memory::free_static(plVar16 + -2,false);
                      }
                    }
                    lVar14 = lVar14 + 1;
                    lVar11 = lVar11 + 0x18;
                  } while (lVar3 != lVar14);
                }
                Memory::free_static((void *)(lVar10 + -0x10),false);
              }
            }
            plVar16 = *(long **)(this + -0x28);
            if (plVar16 != (long *)0x0) {
              do {
                pvVar7 = (void *)*plVar16;
                if (pvVar7 == (void *)0x0) {
                  if ((int)plVar16[2] == 0) {
                    Memory::free_static(plVar16,false);
                  }
                  else {
                    _err_print_error("~List","./core/templates/list.h",0x316,
                                     "Condition \"_data->size_cache\" is true.",0,0);
                  }
                  goto LAB_0010153f;
                }
                if (*(long **)((long)pvVar7 + 0x18) == plVar16) {
                  lVar10 = *(long *)((long)pvVar7 + 8);
                  lVar3 = *(long *)((long)pvVar7 + 0x10);
                  *plVar16 = lVar10;
                  if (pvVar7 == (void *)plVar16[1]) {
                    plVar16[1] = lVar3;
                  }
                  if (lVar3 != 0) {
                    *(long *)(lVar3 + 8) = lVar10;
                    lVar10 = *(long *)((long)pvVar7 + 8);
                  }
                  if (lVar10 != 0) {
                    *(long *)(lVar10 + 0x10) = lVar3;
                  }
                  Memory::free_static(pvVar7,false);
                  *(int *)(plVar16 + 2) = (int)plVar16[2] + -1;
                }
                else {
                  _err_print_error("erase","./core/templates/list.h",0xe7,
                                   "Condition \"p_I->data != this\" is true. Returning: false",0,0);
                }
                plVar16 = *(long **)(this + -0x28);
              } while ((int)plVar16[2] != 0);
              Memory::free_static(plVar16,false);
              *(undefined8 *)(this + -0x28) = 0;
            }
LAB_0010153f:
            Dictionary::~Dictionary((Dictionary *)(this + -0x30));
            if (*(long *)(this + -0x40) != 0) {
              LOCK();
              plVar16 = (long *)(*(long *)(this + -0x40) + -0x10);
              *plVar16 = *plVar16 + -1;
              UNLOCK();
              if (*plVar16 == 0) {
                lVar10 = *(long *)(this + -0x40);
                *(undefined8 *)(this + -0x40) = 0;
                Memory::free_static((void *)(lVar10 + -0x10),false);
              }
            }
            lVar15 = lVar15 + 1;
            this = this + 0x60;
          } while (lVar12 != lVar15);
        }
        Memory::free_static((void *)(local_50 + -0x10),false);
      }
      goto LAB_001012c5;
    }
    if (*(long *)(lVar12 * 0x60 + local_50) != 0) {
      EditorNode::reload_scene(EditorNode::singleton);
    }
    lVar12 = lVar12 + 1;
  } while( true );
}



/* VersionControlEditorPlugin::_is_staging_area_empty() */

bool VersionControlEditorPlugin::_is_staging_area_empty(void)

{
  int iVar1;
  
  Tree::get_root();
  iVar1 = TreeItem::get_child_count();
  return iVar1 == 0;
}



/* VersionControlEditorPlugin::shut_down() [clone .part.0] */

void __thiscall VersionControlEditorPlugin::shut_down(VersionControlEditorPlugin *this)

{
  code *pcVar1;
  long *plVar2;
  char cVar3;
  int iVar4;
  Object *pOVar5;
  long in_FS_OFFSET;
  VersionControlEditorPlugin local_58 [24];
  long local_40;
  
  plVar2 = EditorFileSystem::singleton;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar1 = *(code **)(*EditorFileSystem::singleton + 0x118);
  create_custom_callable_function_pointer<VersionControlEditorPlugin>
            (local_58,(char *)this,(_func_void *)"&VersionControlEditorPlugin::_refresh_stage_area")
  ;
  if (shut_down()::{lambda()#1}::operator()()::sname == '\0') {
    iVar4 = __cxa_guard_acquire(&shut_down()::{lambda()#1}::operator()()::sname);
    if (iVar4 != 0) {
      _scs_create((char *)&shut_down()::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&shut_down()::{lambda()#1}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&shut_down()::{lambda()#1}::operator()()::sname);
    }
  }
  cVar3 = (*pcVar1)(plVar2,&shut_down()::{lambda()#1}::operator()()::sname,local_58);
  Callable::~Callable((Callable *)local_58);
  plVar2 = EditorFileSystem::singleton;
  if (cVar3 != '\0') {
    pcVar1 = *(code **)(*EditorFileSystem::singleton + 0x110);
    create_custom_callable_function_pointer<VersionControlEditorPlugin>
              (local_58,(char *)this,
               (_func_void *)"&VersionControlEditorPlugin::_refresh_stage_area");
    if (shut_down()::{lambda()#2}::operator()()::sname == '\0') {
      iVar4 = __cxa_guard_acquire(&shut_down()::{lambda()#2}::operator()()::sname);
      if (iVar4 != 0) {
        _scs_create((char *)&shut_down()::{lambda()#2}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&shut_down()::{lambda()#2}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&shut_down()::{lambda()#2}::operator()()::sname);
      }
    }
    (*pcVar1)(plVar2,&shut_down()::{lambda()#2}::operator()()::sname,local_58);
    Callable::~Callable((Callable *)local_58);
  }
  EditorVCSInterface::get_singleton();
  EditorVCSInterface::shut_down();
  pOVar5 = (Object *)EditorVCSInterface::get_singleton();
  cVar3 = predelete_handler(pOVar5);
  if (cVar3 != '\0') {
    (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
    Memory::free_static(pOVar5,false);
  }
  EditorVCSInterface::set_singleton((EditorVCSInterface *)0x0);
  EditorDockManager::remove_dock(EditorDockManager::singleton);
  EditorBottomPanel::remove_item(*(Control **)(EditorNode::singleton + 0xa40));
  BaseButton::set_disabled(SUB81(*(undefined8 *)(*(long *)(this + 0x680) + 0xd88),0));
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0x690),0));
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    BaseButton::set_pressed_no_signal(SUB81(*(undefined8 *)(this + 0x688),0));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VersionControlEditorPlugin::shut_down() */

void __thiscall VersionControlEditorPlugin::shut_down(VersionControlEditorPlugin *this)

{
  long lVar1;
  
  lVar1 = EditorVCSInterface::get_singleton();
  if (lVar1 != 0) {
    shut_down(this);
    return;
  }
  return;
}



/* VersionControlEditorPlugin::_set_credentials() */

void VersionControlEditorPlugin::_set_credentials(void)

{
  long lVar1;
  String *pSVar2;
  long in_FS_OFFSET;
  CowData<char32_t> local_98 [8];
  String local_90 [8];
  CowData<char32_t> local_88 [8];
  CowData<char32_t> local_80 [8];
  CowData<char32_t> local_78 [8];
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = EditorVCSInterface::get_singleton();
  if (lVar1 == 0) {
    _err_print_error("_set_credentials","editor/plugins/version_control_editor_plugin.cpp",0x80,
                     "Parameter \"EditorVCSInterface::get_singleton()\" is null.",
                     "No VCS plugin is initialized. Select a Version Control Plugin from Project menu."
                     ,0,0);
  }
  else {
    LineEdit::get_text();
    LineEdit::get_text();
    LineEdit::get_text();
    LineEdit::get_text();
    LineEdit::get_text();
    pSVar2 = (String *)EditorVCSInterface::get_singleton();
    EditorVCSInterface::set_credentials
              (pSVar2,(String *)local_98,local_90,(String *)local_88,(String *)local_80);
    pSVar2 = (String *)EditorSettings::get_singleton();
    Variant::Variant((Variant *)local_58,(String *)local_98);
    local_70 = 0;
    local_68 = "version_control/username";
    local_60 = 0x18;
    String::parse_latin1((StrRange *)&local_70);
    EditorSettings::set_setting(pSVar2,(Variant *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    pSVar2 = (String *)EditorSettings::get_singleton();
    Variant::Variant((Variant *)local_58,(String *)local_88);
    local_68 = "version_control/ssh_public_key_path";
    local_70 = 0;
    local_60 = 0x23;
    String::parse_latin1((StrRange *)&local_70);
    EditorSettings::set_setting(pSVar2,(Variant *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    pSVar2 = (String *)EditorSettings::get_singleton();
    Variant::Variant((Variant *)local_58,(String *)local_80);
    local_68 = "version_control/ssh_private_key_path";
    local_70 = 0;
    local_60 = 0x24;
    String::parse_latin1((StrRange *)&local_70);
    EditorSettings::set_setting(pSVar2,(Variant *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    CowData<char32_t>::_unref(local_78);
    CowData<char32_t>::_unref(local_80);
    CowData<char32_t>::_unref(local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
    CowData<char32_t>::_unref(local_98);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VersionControlEditorPlugin::_move_item(Tree*, TreeItem*) */

void __thiscall
VersionControlEditorPlugin::_move_item
          (VersionControlEditorPlugin *this,Tree *param_1,TreeItem *param_2)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  String *pSVar4;
  long in_FS_OFFSET;
  Variant local_80 [8];
  undefined8 local_78;
  undefined1 local_70 [16];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = EditorVCSInterface::get_singleton();
  if (lVar3 == 0) {
    _err_print_error("_move_item","editor/plugins/version_control_editor_plugin.cpp",0x211,
                     "Parameter \"EditorVCSInterface::get_singleton()\" is null.",
                     "No VCS plugin is initialized. Select a Version Control Plugin from Project menu."
                     ,0,0);
  }
  else {
    if (*(Tree **)(this + 0x7c8) == param_1) {
      pSVar4 = (String *)EditorVCSInterface::get_singleton();
      pcVar1 = *(code **)(*(long *)param_2 + 0xb8);
      local_70 = (undefined1  [16])0x0;
      local_78 = 0;
      if (_move_item(Tree*,TreeItem*)::{lambda()#1}::operator()()::sname == '\0') {
        iVar2 = __cxa_guard_acquire(&_move_item(Tree*,TreeItem*)::{lambda()#1}::operator()()::sname)
        ;
        if (iVar2 != 0) {
          _scs_create((char *)&_move_item(Tree*,TreeItem*)::{lambda()#1}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_move_item(Tree*,TreeItem*)::{lambda()#1}::operator()()::sname,&__dso_handle
                      );
          __cxa_guard_release(&_move_item(Tree*,TreeItem*)::{lambda()#1}::operator()()::sname);
        }
      }
      (*pcVar1)(local_58,param_2,&_move_item(Tree*,TreeItem*)::{lambda()#1}::operator()()::sname,
                &local_78);
      Variant::operator_cast_to_String(local_80);
      EditorVCSInterface::unstage_file(pSVar4);
    }
    else {
      pSVar4 = (String *)EditorVCSInterface::get_singleton();
      pcVar1 = *(code **)(*(long *)param_2 + 0xb8);
      local_70 = (undefined1  [16])0x0;
      local_78 = 0;
      if (_move_item(Tree*,TreeItem*)::{lambda()#2}::operator()()::sname == '\0') {
        iVar2 = __cxa_guard_acquire(&_move_item(Tree*,TreeItem*)::{lambda()#2}::operator()()::sname)
        ;
        if (iVar2 != 0) {
          _scs_create((char *)&_move_item(Tree*,TreeItem*)::{lambda()#2}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_move_item(Tree*,TreeItem*)::{lambda()#2}::operator()()::sname,&__dso_handle
                      );
          __cxa_guard_release(&_move_item(Tree*,TreeItem*)::{lambda()#2}::operator()()::sname);
        }
      }
      (*pcVar1)(local_58,param_2,&_move_item(Tree*,TreeItem*)::{lambda()#2}::operator()()::sname,
                &local_78);
      Variant::operator_cast_to_String(local_80);
      EditorVCSInterface::stage_file(pSVar4);
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VersionControlEditorPlugin::_get_date_string_from(long, long) const */

long VersionControlEditorPlugin::_get_date_string_from(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  bool bVar3;
  long in_FS_OFFSET;
  long local_60;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  Time::get_singleton();
  Time::get_offset_string_from_offset_minutes((long)&local_58);
  bVar3 = (bool)Time::get_singleton();
  Time::get_datetime_string_from_unix_time((long)&local_60,bVar3);
  local_48 = "%s %s";
  local_50 = 0;
  local_40 = 5;
  String::parse_latin1((StrRange *)&local_50);
  vformat<String,String>(param_1,(StrRange *)&local_50,&local_60,&local_58);
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
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VersionControlEditorPlugin::_discard_file(String const&, EditorVCSInterface::ChangeType) */

void __thiscall
VersionControlEditorPlugin::_discard_file(undefined8 param_1_00,CowData *param_1,int param_3)

{
  code *pcVar1;
  Object *pOVar2;
  char cVar3;
  long lVar4;
  String *pSVar5;
  long in_FS_OFFSET;
  Object *local_40;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar4 = EditorVCSInterface::get_singleton();
  if (lVar4 == 0) {
    _err_print_error("_discard_file","editor/plugins/version_control_editor_plugin.cpp",0x187,
                     "Parameter \"EditorVCSInterface::get_singleton()\" is null.",
                     "No VCS plugin is initialized. Select a Version Control Plugin from Project menu."
                     ,0,0);
LAB_00102109:
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    if (param_3 == 0) {
      DirAccess::create(&local_40,0);
      pOVar2 = local_40;
      local_38 = 0;
      pcVar1 = *(code **)(*(long *)local_40 + 0x208);
      if (*(long *)param_1 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_38,param_1);
      }
      (*pcVar1)(pOVar2);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
      if (local_40 != (Object *)0x0) {
        cVar3 = RefCounted::unreference();
        if (cVar3 != '\0') {
          cVar3 = predelete_handler(local_40);
          if (cVar3 != '\0') {
            (**(code **)(*(long *)local_40 + 0x140))(local_40);
            Memory::free_static(local_40,false);
          }
        }
      }
    }
    else {
      lVar4 = EditorVCSInterface::get_singleton();
      if (lVar4 == 0) {
        _err_print_error("_discard_file","editor/plugins/version_control_editor_plugin.cpp",0x18d,
                         "Parameter \"EditorVCSInterface::get_singleton()\" is null.",
                         "No VCS plugin is initialized. Select a Version Control Plugin from Project menu."
                         ,0,0);
        goto LAB_00102109;
      }
      pSVar5 = (String *)EditorVCSInterface::get_singleton();
      EditorVCSInterface::discard_file(pSVar5);
    }
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      EditorFileSystem::update_file(EditorFileSystem::singleton);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VersionControlEditorPlugin::register_editor() */

void __thiscall VersionControlEditorPlugin::register_editor(VersionControlEditorPlugin *this)

{
  undefined8 uVar1;
  Object *pOVar2;
  char cVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  Object *local_68;
  Object *local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  uVar4 = EditorDockManager::singleton;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = (Object *)0x0;
  local_58 = "";
  local_68 = (Object *)0x0;
  local_70 = 0;
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_70);
  EditorDockManager::add_dock
            (uVar4,*(undefined8 *)(this + 0x7c0),(StrRange *)&local_70,4,(StrRange *)&local_68,
             &local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  if (local_68 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    pOVar2 = local_68;
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_68);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))();
        Memory::free_static(pOVar2,false);
      }
    }
  }
  if ((StringName::configured != '\0') && (local_60 != (Object *)0x0)) {
    StringName::unref();
  }
  uVar4 = *(undefined8 *)(EditorNode::singleton + 0xa40);
  local_58 = "";
  local_68 = (Object *)0x0;
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_68);
  local_58 = "Toggle Version Control Bottom Panel";
  local_70 = 0;
  local_50 = 0x23;
  String::parse_latin1((StrRange *)&local_70);
  local_58 = "bottom_panels/toggle_version_control_bottom_panel";
  local_78 = 0;
  local_50 = 0x31;
  String::parse_latin1((StrRange *)&local_78);
  ED_SHORTCUT_AND_COMMAND
            (&local_60,(StrRange *)&local_78,(StrRange *)&local_70,0,(StrRange *)&local_68);
  uVar1 = *(undefined8 *)(this + 0x880);
  local_58 = "";
  local_80 = 0;
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_58 = "Version Control";
  local_50 = 0xf;
  String::parse_latin1((StrRange *)&local_88);
  TTR((String *)&local_58,(String *)&local_88);
  uVar4 = EditorBottomPanel::add_item(uVar4,(String *)&local_58,uVar1,&local_60,0);
  *(undefined8 *)(this + 0x888) = uVar4;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if (local_60 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    pOVar2 = local_60;
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_60);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  BaseButton::set_disabled(SUB81(*(undefined8 *)(*(long *)(this + 0x680) + 0xd88),0));
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0x690),0));
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    BaseButton::set_pressed_no_signal(SUB81(*(undefined8 *)(this + 0x688),0));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VersionControlEditorPlugin::_update_set_up_warning(String const&) */

void VersionControlEditorPlugin::_update_set_up_warning(String *param_1)

{
  StringName *pSVar1;
  code *pcVar2;
  String *pSVar3;
  bool bVar4;
  undefined8 uVar5;
  Object *pOVar6;
  char cVar7;
  int iVar8;
  long in_FS_OFFSET;
  CowData<char32_t> local_a0 [8];
  long local_98;
  long local_90;
  CowData<char32_t> local_88 [8];
  long local_80;
  undefined8 local_78;
  long local_70;
  Object *local_68;
  undefined8 local_60;
  undefined8 local_58;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  LineEdit::get_text();
  String::strip_edges(SUB81((CowData<char32_t> *)&local_98,0),SUB81(local_a0,0));
  if ((local_98 == 0) || (*(uint *)(local_98 + -8) < 2)) {
    LineEdit::get_text();
    if ((local_90 != 0) && (1 < *(uint *)(local_90 + -8))) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      goto LAB_00102768;
    }
    LineEdit::get_text();
    String::strip_edges(SUB81((CowData<char32_t> *)&local_80,0),SUB81(local_88,0));
    if ((local_80 == 0) || (*(uint *)(local_80 + -8) < 2)) {
      LineEdit::get_text();
      String::strip_edges(SUB81((CowData<char32_t> *)&local_70,0),
                          SUB81((CowData<char32_t> *)&local_78,0));
      if ((local_70 == 0) || (*(uint *)(local_70 + -8) < 2)) {
        LineEdit::get_text();
        if (local_68 == (Object *)0x0) {
          bVar4 = true;
        }
        else {
          bVar4 = *(uint *)((long)local_68 + -8) < 2;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      }
      else {
        bVar4 = false;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    }
    else {
      bVar4 = false;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref(local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    CowData<char32_t>::_unref(local_a0);
    if (bVar4) {
      local_68 = (Object *)0x0;
      pSVar1 = *(StringName **)(param_1 + 0x6e0);
      Ref<Theme>::operator=((Ref<Theme> *)&local_68,*(Ref **)(EditorNode::singleton + 0x838));
      pOVar6 = local_68;
      uVar5 = EditorStringNames::singleton;
      pcVar2 = *(code **)(*(long *)local_68 + 0x1e8);
      if (_update_set_up_warning(String_const&)::{lambda()#1}::operator()()::sname == '\0') {
        iVar8 = __cxa_guard_acquire(&_update_set_up_warning(String_const&)::{lambda()#1}::
                                     operator()()::sname);
        if (iVar8 != 0) {
          _scs_create((char *)&_update_set_up_warning(String_const&)::{lambda()#1}::operator()()::
                               sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_update_set_up_warning(String_const&)::{lambda()#1}::operator()()::sname,
                       &__dso_handle);
          __cxa_guard_release(&_update_set_up_warning(String_const&)::{lambda()#1}::operator()()::
                               sname);
        }
      }
      local_58 = (*pcVar2)(pOVar6,&_update_set_up_warning(String_const&)::{lambda()#1}::operator()()
                                   ::sname,uVar5);
      Control::add_theme_color_override(pSVar1,(Color *)(SceneStringNames::singleton + 0xb0));
      pOVar6 = local_68;
      if (local_68 != (Object *)0x0) {
        cVar7 = RefCounted::unreference();
        if (cVar7 != '\0') {
          cVar7 = predelete_handler(pOVar6);
          if (cVar7 != '\0') {
            (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
            Memory::free_static(pOVar6,false);
          }
        }
      }
      pSVar3 = *(String **)(param_1 + 0x6e0);
      local_68 = (Object *)&_LC53;
      local_70 = 0;
      local_60 = 0;
      String::parse_latin1((StrRange *)&local_70);
      local_68 = (Object *)0x112848;
      local_78 = 0;
      local_60 = 0x4a;
      String::parse_latin1((StrRange *)&local_78);
      TTR((String *)&local_68,(String *)&local_78);
      Label::set_text(pSVar3);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      goto LAB_001027c5;
    }
  }
  else {
LAB_00102768:
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    CowData<char32_t>::_unref(local_a0);
  }
  pSVar3 = *(String **)(param_1 + 0x6e0);
  local_68 = (Object *)&_LC53;
  local_70 = 0;
  local_60 = 0;
  String::parse_latin1((StrRange *)&local_70);
  Label::set_text(pSVar3);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
LAB_001027c5:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VersionControlEditorPlugin::_display_diff_unified_view(List<EditorVCSInterface::DiffLine,
   DefaultAllocator>&) */

void VersionControlEditorPlugin::_display_diff_unified_view(List *param_1)

{
  String *this;
  long *plVar1;
  code *pcVar2;
  String *pSVar3;
  undefined8 uVar4;
  long lVar5;
  char cVar6;
  int iVar7;
  int *piVar8;
  undefined8 *in_RSI;
  Object *pOVar9;
  long in_FS_OFFSET;
  long local_90;
  undefined8 local_88;
  long local_80;
  undefined *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  RichTextLabel::push_table(*(undefined8 *)(param_1 + 0x898),4,0,0xffffffff);
  RichTextLabel::set_table_column_expand((int)*(undefined8 *)(param_1 + 0x898),true,1,true);
  if (((undefined8 *)*in_RSI != (undefined8 *)0x0) &&
     (piVar8 = *(int **)*in_RSI, piVar8 != (int *)0x0)) {
    do {
      String::strip_edges(SUB81(&local_90,0),(bool)((char)piVar8 + '\b'));
      this = (String *)(piVar8 + 4);
      local_68 = __LC62;
      uStack_60 = _UNK_00120b98;
      cVar6 = String::operator==(this,"+");
      if (cVar6 == '\0') {
        cVar6 = String::operator==(this,"-");
        if (cVar6 == '\0') {
          pOVar9 = *(Object **)(EditorNode::singleton + 0x838);
          if (pOVar9 == (Object *)0x0) goto VersionControlEditorPlugin__display_diff_unified_view;
          cVar6 = RefCounted::reference();
          if (cVar6 == '\0') {
            pOVar9 = (Object *)0x0;
          }
          pcVar2 = *(code **)(*(long *)pOVar9 + 0x1e8);
          if ((_display_diff_unified_view(List<EditorVCSInterface::DiffLine,DefaultAllocator>&)::
               {lambda()#3}::operator()()::sname == '\0') &&
             (iVar7 = __cxa_guard_acquire(&_display_diff_unified_view(List<EditorVCSInterface::DiffLine,DefaultAllocator>&)
                                           ::{lambda()#3}::operator()()::sname), iVar7 != 0)) {
            _scs_create((char *)&_display_diff_unified_view(List<EditorVCSInterface::DiffLine,DefaultAllocator>&)
                                 ::{lambda()#3}::operator()()::sname,true);
            __cxa_atexit(StringName::~StringName,
                         &_display_diff_unified_view(List<EditorVCSInterface::DiffLine,DefaultAllocator>&)
                          ::{lambda()#3}::operator()()::sname,&__dso_handle);
            __cxa_guard_release(&_display_diff_unified_view(List<EditorVCSInterface::DiffLine,DefaultAllocator>&)
                                 ::{lambda()#3}::operator()()::sname);
          }
          local_68 = (*pcVar2)(pOVar9,SceneStringNames::singleton + 0xb0,
                               &_display_diff_unified_view(List<EditorVCSInterface::DiffLine,DefaultAllocator>&)
                                ::{lambda()#3}::operator()()::sname);
          cVar6 = RefCounted::unreference();
          if ((cVar6 != '\0') && (cVar6 = predelete_handler(pOVar9), cVar6 != '\0')) {
            (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
            Memory::free_static(pOVar9,false);
          }
          local_58 = __LC87;
          uStack_50 = _UNK_00120ba8;
          Color::operator*=((Color *)&local_68,(Color *)&local_58);
        }
        else {
          pOVar9 = *(Object **)(EditorNode::singleton + 0x838);
          if (pOVar9 == (Object *)0x0) {
VersionControlEditorPlugin__display_diff_unified_view:
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          cVar6 = RefCounted::reference();
          uVar4 = EditorStringNames::singleton;
          if (cVar6 == '\0') {
            pOVar9 = (Object *)0x0;
          }
          pcVar2 = *(code **)(*(long *)pOVar9 + 0x1e8);
          if ((_display_diff_unified_view(List<EditorVCSInterface::DiffLine,DefaultAllocator>&)::
               {lambda()#2}::operator()()::sname == '\0') &&
             (iVar7 = __cxa_guard_acquire(&_display_diff_unified_view(List<EditorVCSInterface::DiffLine,DefaultAllocator>&)
                                           ::{lambda()#2}::operator()()::sname), iVar7 != 0)) {
            _scs_create((char *)&_display_diff_unified_view(List<EditorVCSInterface::DiffLine,DefaultAllocator>&)
                                 ::{lambda()#2}::operator()()::sname,true);
            __cxa_atexit(StringName::~StringName,
                         &_display_diff_unified_view(List<EditorVCSInterface::DiffLine,DefaultAllocator>&)
                          ::{lambda()#2}::operator()()::sname,&__dso_handle);
            __cxa_guard_release(&_display_diff_unified_view(List<EditorVCSInterface::DiffLine,DefaultAllocator>&)
                                 ::{lambda()#2}::operator()()::sname);
          }
          local_68 = (*pcVar2)(pOVar9,&_display_diff_unified_view(List<EditorVCSInterface::DiffLine,DefaultAllocator>&)
                                       ::{lambda()#2}::operator()()::sname,uVar4);
          cVar6 = RefCounted::unreference();
          if (cVar6 != '\0') {
            cVar6 = predelete_handler(pOVar9);
            goto joined_r0x00102df6;
          }
        }
      }
      else {
        pOVar9 = *(Object **)(EditorNode::singleton + 0x838);
        if (pOVar9 == (Object *)0x0) goto VersionControlEditorPlugin__display_diff_unified_view;
        cVar6 = RefCounted::reference();
        uVar4 = EditorStringNames::singleton;
        if (cVar6 == '\0') {
          pOVar9 = (Object *)0x0;
        }
        pcVar2 = *(code **)(*(long *)pOVar9 + 0x1e8);
        if ((_display_diff_unified_view(List<EditorVCSInterface::DiffLine,DefaultAllocator>&)::
             {lambda()#1}::operator()()::sname == '\0') &&
           (iVar7 = __cxa_guard_acquire(&_display_diff_unified_view(List<EditorVCSInterface::DiffLine,DefaultAllocator>&)
                                         ::{lambda()#1}::operator()()::sname), iVar7 != 0)) {
          _scs_create((char *)&_display_diff_unified_view(List<EditorVCSInterface::DiffLine,DefaultAllocator>&)
                               ::{lambda()#1}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_display_diff_unified_view(List<EditorVCSInterface::DiffLine,DefaultAllocator>&)
                        ::{lambda()#1}::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&_display_diff_unified_view(List<EditorVCSInterface::DiffLine,DefaultAllocator>&)
                               ::{lambda()#1}::operator()()::sname);
        }
        local_68 = (*pcVar2)(pOVar9,&_display_diff_unified_view(List<EditorVCSInterface::DiffLine,DefaultAllocator>&)
                                     ::{lambda()#1}::operator()()::sname,uVar4);
        cVar6 = RefCounted::unreference();
        if (cVar6 != '\0') {
          cVar6 = predelete_handler(pOVar9);
joined_r0x00102df6:
          if (cVar6 != '\0') {
            (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
            Memory::free_static(pOVar9,false);
          }
        }
      }
      RichTextLabel::push_cell();
      RichTextLabel::push_color(*(Color **)(param_1 + 0x898));
      RichTextLabel::push_indent((int)*(undefined8 *)(param_1 + 0x898));
      pSVar3 = *(String **)(param_1 + 0x898);
      if (piVar8[1] < 0) {
        local_80 = 0;
        local_70 = 0;
        local_78 = &_LC53;
        String::parse_latin1((StrRange *)&local_80);
      }
      else {
        String::num_int64((long)&local_80,piVar8[1],true);
      }
      RichTextLabel::add_text(pSVar3);
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
      RichTextLabel::pop();
      RichTextLabel::pop();
      RichTextLabel::pop();
      RichTextLabel::push_cell();
      RichTextLabel::push_color(*(Color **)(param_1 + 0x898));
      RichTextLabel::push_indent((int)*(undefined8 *)(param_1 + 0x898));
      pSVar3 = *(String **)(param_1 + 0x898);
      if (*piVar8 < 0) {
        local_78 = &_LC53;
        local_80 = 0;
        local_70 = 0;
        String::parse_latin1((StrRange *)&local_80);
      }
      else {
        String::num_int64((long)&local_80,*piVar8,true);
      }
      RichTextLabel::add_text(pSVar3);
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
      RichTextLabel::pop();
      RichTextLabel::pop();
      RichTextLabel::pop();
      RichTextLabel::push_cell();
      RichTextLabel::push_color(*(Color **)(param_1 + 0x898));
      pSVar3 = *(String **)(param_1 + 0x898);
      cVar6 = String::operator!=(this,"");
      if (cVar6 == '\0') {
        local_80 = 0;
        local_78 = &_LC89;
        local_70 = 2;
        String::parse_latin1((StrRange *)&local_80);
        RichTextLabel::add_text(pSVar3);
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
      }
      else {
        local_88 = 0;
        local_78 = &_LC88;
        local_70 = 1;
        String::parse_latin1((StrRange *)&local_88);
        String::operator+((String *)&local_80,this);
        RichTextLabel::add_text(pSVar3);
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
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      }
      RichTextLabel::pop();
      RichTextLabel::pop();
      RichTextLabel::push_cell();
      RichTextLabel::push_color(*(Color **)(param_1 + 0x898));
      RichTextLabel::add_text(*(String **)(param_1 + 0x898));
      RichTextLabel::pop();
      RichTextLabel::pop();
      lVar5 = local_90;
      if (local_90 != 0) {
        LOCK();
        plVar1 = (long *)(local_90 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_90 = 0;
          Memory::free_static((void *)(lVar5 + -0x10),false);
        }
      }
      piVar8 = *(int **)(piVar8 + 10);
    } while (piVar8 != (int *)0x0);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    RichTextLabel::pop();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VersionControlEditorPlugin::fetch_available_vcs_plugin_names() */

void __thiscall
VersionControlEditorPlugin::fetch_available_vcs_plugin_names(VersionControlEditorPlugin *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long in_FS_OFFSET;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  plVar4 = *(long **)(this + 0x660);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar4 != (long *)0x0) {
    do {
      plVar1 = (long *)*plVar4;
      if (plVar1 == (long *)0x0) goto LAB_00103195;
      if ((long *)plVar1[3] == plVar4) {
        lVar3 = plVar1[1];
        lVar2 = plVar1[2];
        *plVar4 = lVar3;
        if (plVar1 == (long *)plVar4[1]) {
          plVar4[1] = lVar2;
        }
        if (lVar2 != 0) {
          *(long *)(lVar2 + 8) = lVar3;
          lVar3 = plVar1[1];
        }
        if (lVar3 != 0) {
          *(long *)(lVar3 + 0x10) = lVar2;
        }
        if ((StringName::configured != '\0') && (*plVar1 != 0)) {
          StringName::unref();
        }
        Memory::free_static(plVar1,false);
        *(int *)(plVar4 + 2) = (int)plVar4[2] + -1;
      }
      else {
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0,0);
      }
      plVar4 = *(long **)(this + 0x660);
    } while ((int)plVar4[2] != 0);
    Memory::free_static(plVar4,false);
    *(undefined8 *)(this + 0x660) = 0;
  }
LAB_00103195:
  local_50 = 0;
  local_40 = 0x12;
  local_48 = "EditorVCSInterface";
  String::parse_latin1((StrRange *)&local_50);
  StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
  ClassDB::get_direct_inheriters_from_class((StringName *)&local_48,(List *)(this + 0x660));
  if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VersionControlEditorPlugin::popup_vcs_set_up_dialog(Control const*) */

void VersionControlEditorPlugin::popup_vcs_set_up_dialog(Control *param_1)

{
  Vector2i *pVVar1;
  String *pSVar2;
  long in_FS_OFFSET;
  float fVar3;
  float fVar4;
  float extraout_XMM1_Da;
  float fVar5;
  float extraout_XMM1_Db;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  String local_70 [8];
  char *local_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  fetch_available_vcs_plugin_names((VersionControlEditorPlugin *)param_1);
  pSVar2 = EditorNode::singleton;
  if ((*(long *)(param_1 + 0x660) == 0) || (*(int *)(*(long *)(param_1 + 0x660) + 0x10) == 0)) {
    local_78 = 0;
    local_68 = "";
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_78);
    local_68 = "Error";
    local_80 = 0;
    local_60 = 5;
    String::parse_latin1((StrRange *)&local_80);
    TTR(local_70,(String *)&local_80);
    local_68 = "";
    local_88 = 0;
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_88);
    local_68 = 
    "No VCS plugins are available in the project. Install a VCS plugin to use VCS integration features."
    ;
    local_90 = 0;
    local_60 = 0x62;
    String::parse_latin1((StrRange *)&local_90);
    TTR((String *)&local_68,(String *)&local_90);
    EditorNode::show_warning(pSVar2,(String *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  }
  else {
    CanvasItem::get_viewport_rect();
    fVar5 = extraout_XMM1_Db * _LC94;
    if ((float)_LC92 < extraout_XMM1_Db * _LC94) {
      fVar5 = (float)_LC92;
    }
    fVar3 = extraout_XMM1_Da * _LC94;
    if ((float)_LC93 < extraout_XMM1_Da * _LC94) {
      fVar3 = (float)_LC93;
    }
    _populate_available_vcs_names((VersionControlEditorPlugin *)param_1);
    pVVar1 = *(Vector2i **)(param_1 + 0x680);
    fVar4 = (float)EditorScale::get_scale();
    local_50 = CONCAT44(fVar4 * fVar5,fVar4 * fVar3);
    local_48 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_50);
    Window::popup_centered_clamped(pVVar1,_LC56);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VersionControlEditorPlugin::_refresh_branch_list() */

void __thiscall VersionControlEditorPlugin::_refresh_branch_list(VersionControlEditorPlugin *this)

{
  Ref *pRVar1;
  code *pcVar2;
  Object *pOVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  Object *pOVar7;
  String *this_00;
  long in_FS_OFFSET;
  long *local_58;
  String local_50 [8];
  Object *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar6 = EditorVCSInterface::get_singleton();
  if (lVar6 == 0) {
    _err_print_error("_refresh_branch_list","editor/plugins/version_control_editor_plugin.cpp",0xbc,
                     "Parameter \"EditorVCSInterface::get_singleton()\" is null.",
                     "No VCS plugin is initialized. Select a Version Control Plugin from Project menu."
                     ,0);
  }
  else {
    EditorVCSInterface::get_singleton();
    EditorVCSInterface::get_branch_list();
    OptionButton::clear();
    BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0x7e0),0));
    EditorVCSInterface::get_singleton();
    EditorVCSInterface::get_current_branch_name();
    if (local_58 != (long *)0x0) {
      for (this_00 = (String *)*local_58; this_00 != (String *)0x0;
          this_00 = *(String **)(this_00 + 8)) {
        while( true ) {
          pRVar1 = *(Ref **)(this + 0x7e0);
          pOVar7 = *(Object **)(EditorNode::singleton + 0x838);
          if (pOVar7 == (Object *)0x0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          cVar4 = RefCounted::reference();
          if (cVar4 == '\0') {
            pOVar7 = (Object *)0x0;
          }
          pcVar2 = *(code **)(*(long *)pOVar7 + 0x1c8);
          lVar6 = EditorStringNames::singleton + 0x10;
          if ((_refresh_branch_list()::{lambda()#1}::operator()()::sname == '\0') &&
             (iVar5 = __cxa_guard_acquire(&_refresh_branch_list()::{lambda()#1}::operator()()::sname
                                         ), iVar5 != 0)) {
            _scs_create((char *)&_refresh_branch_list()::{lambda()#1}::operator()()::sname,true);
            __cxa_atexit(StringName::~StringName,
                         &_refresh_branch_list()::{lambda()#1}::operator()()::sname,&__dso_handle);
            __cxa_guard_release(&_refresh_branch_list()::{lambda()#1}::operator()()::sname);
          }
          (*pcVar2)((String *)&local_48,pOVar7,
                    &_refresh_branch_list()::{lambda()#1}::operator()()::sname,lVar6);
          OptionButton::add_icon_item(pRVar1,(String *)&local_48,(int)this_00);
          if (((local_48 != (Object *)0x0) &&
              (cVar4 = RefCounted::unreference(), pOVar3 = local_48, cVar4 != '\0')) &&
             (cVar4 = predelete_handler(local_48), cVar4 != '\0')) {
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
          }
          cVar4 = RefCounted::unreference();
          if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar7), cVar4 != '\0')) {
            (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
            Memory::free_static(pOVar7,false);
          }
          cVar4 = String::operator==(this_00,local_50);
          if (cVar4 == '\0') break;
          OptionButton::select((int)*(undefined8 *)(this + 0x7e0));
          this_00 = *(String **)(this_00 + 8);
          if (this_00 == (String *)0x0) goto LAB_00103649;
        }
      }
    }
LAB_00103649:
    CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
    List<String,DefaultAllocator>::~List((List<String,DefaultAllocator> *)&local_58);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VersionControlEditorPlugin::_create_branch() */

void __thiscall VersionControlEditorPlugin::_create_branch(VersionControlEditorPlugin *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  String *pSVar4;
  long in_FS_OFFSET;
  long local_30;
  long local_28;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = EditorVCSInterface::get_singleton();
  if (lVar3 == 0) {
    _err_print_error("_create_branch","editor/plugins/version_control_editor_plugin.cpp",0x147,
                     "Parameter \"EditorVCSInterface::get_singleton()\" is null.",
                     "No VCS plugin is initialized. Select a Version Control Plugin from Project menu."
                     ,0,0);
  }
  else {
    LineEdit::get_text();
    String::strip_edges(true,true);
    if (local_28 != 0) {
      LOCK();
      plVar1 = (long *)(local_28 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(local_28 + -0x10),false);
      }
    }
    pSVar4 = (String *)EditorVCSInterface::get_singleton();
    EditorVCSInterface::create_branch(pSVar4);
    pSVar4 = (String *)EditorVCSInterface::get_singleton();
    EditorVCSInterface::checkout_branch(pSVar4);
    LineEdit::clear();
    _refresh_branch_list(this);
    if (local_30 != 0) {
      LOCK();
      plVar1 = (long *)(local_30 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(local_30 + -0x10),false);
      }
    }
  }
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VersionControlEditorPlugin::_fetch() */

void __thiscall VersionControlEditorPlugin::_fetch(VersionControlEditorPlugin *this)

{
  long *plVar1;
  long lVar2;
  String *pSVar3;
  long in_FS_OFFSET;
  long local_50;
  int local_48;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = EditorVCSInterface::get_singleton();
  if (lVar2 == 0) {
    _err_print_error("_fetch","editor/plugins/version_control_editor_plugin.cpp",0x1b5,
                     "Parameter \"EditorVCSInterface::get_singleton()\" is null.",
                     "No VCS plugin is initialized. Select a Version Control Plugin from Project menu."
                     ,0,0);
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    pSVar3 = (String *)EditorVCSInterface::get_singleton();
    OptionButton::get_selected_metadata();
    Variant::operator_cast_to_String((Variant *)&local_50);
    EditorVCSInterface::fetch(pSVar3);
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
    if (Variant::needs_deinit[local_48] != '\0') {
      Variant::_clear_internal();
    }
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      _refresh_branch_list(this);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VersionControlEditorPlugin::_refresh_remote_list() */

void __thiscall VersionControlEditorPlugin::_refresh_remote_list(VersionControlEditorPlugin *this)

{
  Ref *pRVar1;
  code *pcVar2;
  undefined8 uVar3;
  Object *pOVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  Object *pOVar8;
  uint uVar9;
  String *this_00;
  long in_FS_OFFSET;
  long *local_70;
  Variant local_68 [8];
  Object *local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar7 = EditorVCSInterface::get_singleton();
  if (lVar7 == 0) {
    _err_print_error("_refresh_remote_list","editor/plugins/version_control_editor_plugin.cpp",0xf9,
                     "Parameter \"EditorVCSInterface::get_singleton()\" is null.",
                     "No VCS plugin is initialized. Select a Version Control Plugin from Project menu."
                     ,0);
  }
  else {
    EditorVCSInterface::get_singleton();
    EditorVCSInterface::get_remotes();
    OptionButton::get_selected_metadata();
    Variant::operator_cast_to_String(local_68);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    OptionButton::clear();
    BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0x810),0));
    if ((local_70 != (long *)0x0) && (this_00 = (String *)*local_70, this_00 != (String *)0x0)) {
      uVar9 = 0;
      do {
        while( true ) {
          pRVar1 = *(Ref **)(this + 0x810);
          pOVar8 = *(Object **)(EditorNode::singleton + 0x838);
          if (pOVar8 == (Object *)0x0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          cVar5 = RefCounted::reference();
          if (cVar5 == '\0') {
            pOVar8 = (Object *)0x0;
          }
          pcVar2 = *(code **)(*(long *)pOVar8 + 0x1c8);
          lVar7 = EditorStringNames::singleton + 0x10;
          if ((_refresh_remote_list()::{lambda()#1}::operator()()::sname == '\0') &&
             (iVar6 = __cxa_guard_acquire(&_refresh_remote_list()::{lambda()#1}::operator()()::sname
                                         ), iVar6 != 0)) {
            _scs_create((char *)&_refresh_remote_list()::{lambda()#1}::operator()()::sname,true);
            __cxa_atexit(StringName::~StringName,
                         &_refresh_remote_list()::{lambda()#1}::operator()()::sname,&__dso_handle);
            __cxa_guard_release(&_refresh_remote_list()::{lambda()#1}::operator()()::sname);
          }
          (*pcVar2)((String *)&local_60,pOVar8,
                    &_refresh_remote_list()::{lambda()#1}::operator()()::sname,lVar7);
          OptionButton::add_icon_item(pRVar1,(String *)&local_60,(int)this_00);
          if (((local_60 != (Object *)0x0) &&
              (cVar5 = RefCounted::unreference(), pOVar4 = local_60, cVar5 != '\0')) &&
             (cVar5 = predelete_handler(local_60), cVar5 != '\0')) {
            (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
            Memory::free_static(pOVar4,false);
          }
          cVar5 = RefCounted::unreference();
          if ((cVar5 != '\0') && (cVar5 = predelete_handler(pOVar8), cVar5 != '\0')) {
            (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
            Memory::free_static(pOVar8,false);
          }
          uVar3 = *(undefined8 *)(this + 0x810);
          Variant::Variant((Variant *)local_58,this_00);
          OptionButton::set_item_metadata((int)uVar3,(Variant *)(ulong)uVar9);
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          cVar5 = String::operator==(this_00,(String *)local_68);
          if (cVar5 == '\0') break;
          uVar9 = uVar9 + 1;
          OptionButton::select((int)*(undefined8 *)(this + 0x810));
          this_00 = *(String **)(this_00 + 8);
          if (this_00 == (String *)0x0) goto LAB_00103c3e;
        }
        this_00 = *(String **)(this_00 + 8);
        uVar9 = uVar9 + 1;
      } while (this_00 != (String *)0x0);
    }
LAB_00103c3e:
    CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
    List<String,DefaultAllocator>::~List((List<String,DefaultAllocator> *)&local_70);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VersionControlEditorPlugin::_remote_selected(int) */

void VersionControlEditorPlugin::_remote_selected(int param_1)

{
  undefined4 in_register_0000003c;
  
  _refresh_remote_list((VersionControlEditorPlugin *)CONCAT44(in_register_0000003c,param_1));
  return;
}



/* VersionControlEditorPlugin::_create_remote() */

void __thiscall VersionControlEditorPlugin::_create_remote(VersionControlEditorPlugin *this)

{
  long *plVar1;
  long lVar2;
  String *pSVar3;
  long in_FS_OFFSET;
  String aSStack_48 [8];
  CowData<char32_t> local_40 [8];
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = EditorVCSInterface::get_singleton();
  if (lVar2 == 0) {
    _err_print_error("_create_remote","editor/plugins/version_control_editor_plugin.cpp",0x153,
                     "Parameter \"EditorVCSInterface::get_singleton()\" is null.",
                     "No VCS plugin is initialized. Select a Version Control Plugin from Project menu."
                     ,0,0);
  }
  else {
    LineEdit::get_text();
    String::strip_edges(SUB81(aSStack_48,0),SUB81(&local_38,0));
    lVar2 = local_38;
    if (local_38 != 0) {
      LOCK();
      plVar1 = (long *)(local_38 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_38 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    LineEdit::get_text();
    String::strip_edges(SUB81(local_40,0),SUB81(&local_38,0));
    lVar2 = local_38;
    if (local_38 != 0) {
      LOCK();
      plVar1 = (long *)(local_38 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_38 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    pSVar3 = (String *)EditorVCSInterface::get_singleton();
    EditorVCSInterface::create_remote(pSVar3,aSStack_48);
    LineEdit::clear();
    LineEdit::clear();
    _refresh_remote_list(this);
    CowData<char32_t>::_unref(local_40);
    CowData<char32_t>::_unref((CowData<char32_t> *)aSStack_48);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VersionControlEditorPlugin::_remove_remote() */

void __thiscall VersionControlEditorPlugin::_remove_remote(VersionControlEditorPlugin *this)

{
  long lVar1;
  String *pSVar2;
  
  lVar1 = EditorVCSInterface::get_singleton();
  if (lVar1 != 0) {
    pSVar2 = (String *)EditorVCSInterface::get_singleton();
    EditorVCSInterface::remove_remote(pSVar2);
    if ((*(long *)(this + 0x848) != 0) && (*(long *)(*(long *)(this + 0x848) + -8) != 0)) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x848));
    }
    _refresh_remote_list(this);
    return;
  }
  _err_print_error("_remove_remote","editor/plugins/version_control_editor_plugin.cpp",0x331,
                   "Parameter \"EditorVCSInterface::get_singleton()\" is null.",
                   "No VCS plugin is initialized. Select a Version Control Plugin from Project menu."
                   ,0,0);
  return;
}



/* VersionControlEditorPlugin::_popup_branch_remove_confirm(int) */

void VersionControlEditorPlugin::_popup_branch_remove_confirm(int param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  char *pcVar4;
  long lVar5;
  undefined4 in_register_0000003c;
  long lVar6;
  long in_FS_OFFSET;
  bool bVar7;
  undefined8 local_78;
  undefined8 local_70;
  String local_68 [8];
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  lVar6 = CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  PopupMenu::get_item_text((int)(CowData<char32_t> *)&local_58);
  if ((char *)*(long *)(lVar6 + 0x840) != local_58) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(lVar6 + 0x840));
    pcVar4 = local_58;
    local_58 = (char *)0x0;
    *(char **)(lVar6 + 0x840) = pcVar4;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  uVar2 = *(undefined8 *)(lVar6 + 0x7f0);
  local_60 = 0;
  plVar1 = (long *)(*(long *)(lVar6 + 0x840) + -0x10);
  if (*(long *)(lVar6 + 0x840) != 0) {
    do {
      lVar3 = *plVar1;
      if (lVar3 == 0) goto LAB_001040bc;
      LOCK();
      lVar5 = *plVar1;
      bVar7 = lVar3 == lVar5;
      if (bVar7) {
        *plVar1 = lVar3 + 1;
        lVar5 = lVar3;
      }
      UNLOCK();
    } while (!bVar7);
    if (lVar5 != -1) {
      local_60 = *(undefined8 *)(lVar6 + 0x840);
    }
  }
LAB_001040bc:
  local_70 = 0;
  local_58 = "";
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_70);
  local_58 = "Do you want to remove the %s branch?";
  local_78 = 0;
  local_50 = 0x24;
  String::parse_latin1((StrRange *)&local_78);
  TTR(local_68,(String *)&local_78);
  vformat<String>((CowData<char32_t> *)&local_58,local_68,(CowData<char32_t> *)&local_60);
  AcceptDialog::set_text(uVar2,(CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  local_48 = 0;
  Window::popup_centered(*(Vector2i **)(lVar6 + 0x7f0));
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* VersionControlEditorPlugin::_popup_remote_remove_confirm(int) */

void VersionControlEditorPlugin::_popup_remote_remove_confirm(int param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  char *pcVar4;
  long lVar5;
  undefined4 in_register_0000003c;
  long lVar6;
  long in_FS_OFFSET;
  bool bVar7;
  undefined8 local_78;
  undefined8 local_70;
  String local_68 [8];
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  lVar6 = CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  PopupMenu::get_item_text((int)(CowData<char32_t> *)&local_58);
  if ((char *)*(long *)(lVar6 + 0x848) != local_58) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(lVar6 + 0x848));
    pcVar4 = local_58;
    local_58 = (char *)0x0;
    *(char **)(lVar6 + 0x848) = pcVar4;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  uVar2 = *(undefined8 *)(lVar6 + 0x820);
  local_60 = 0;
  plVar1 = (long *)(*(long *)(lVar6 + 0x840) + -0x10);
  if (*(long *)(lVar6 + 0x840) != 0) {
    do {
      lVar3 = *plVar1;
      if (lVar3 == 0) goto LAB_0010427c;
      LOCK();
      lVar5 = *plVar1;
      bVar7 = lVar3 == lVar5;
      if (bVar7) {
        *plVar1 = lVar3 + 1;
        lVar5 = lVar3;
      }
      UNLOCK();
    } while (!bVar7);
    if (lVar5 != -1) {
      local_60 = *(undefined8 *)(lVar6 + 0x840);
    }
  }
LAB_0010427c:
  local_70 = 0;
  local_58 = "";
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_70);
  local_58 = "Do you want to remove the %s remote?";
  local_78 = 0;
  local_50 = 0x24;
  String::parse_latin1((StrRange *)&local_78);
  TTR(local_68,(String *)&local_78);
  vformat<String>((CowData<char32_t> *)&local_58,local_68,(CowData<char32_t> *)&local_60);
  AcceptDialog::set_text(uVar2,(CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  local_48 = 0;
  Window::popup_centered(*(Vector2i **)(lVar6 + 0x820));
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* VersionControlEditorPlugin::_refresh_commit_list() */

void __thiscall VersionControlEditorPlugin::_refresh_commit_list(VersionControlEditorPlugin *this)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  Variant *pVVar5;
  long lVar6;
  undefined8 uVar7;
  bool bVar8;
  wchar32 wVar9;
  CowData *pCVar10;
  long in_FS_OFFSET;
  bool bVar11;
  long *local_d8;
  long local_d0;
  long local_c8;
  Dictionary local_c0 [8];
  long local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  undefined8 uStack_88;
  int local_78 [8];
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar4 = EditorVCSInterface::get_singleton();
  if (lVar4 == 0) {
    _err_print_error("_refresh_commit_list","editor/plugins/version_control_editor_plugin.cpp",0xdb,
                     "Parameter \"EditorVCSInterface::get_singleton()\" is null.",
                     "No VCS plugin is initialized. Select a Version Control Plugin from Project menu."
                     ,0,0);
  }
  else {
    Tree::get_root();
    TreeItem::clear_children();
    EditorVCSInterface::get_singleton();
    OptionButton::get_selected_metadata();
    Variant::operator_cast_to_int((Variant *)local_58);
    EditorVCSInterface::get_previous_commits
              ((int)(List<EditorVCSInterface::Commit,DefaultAllocator> *)&local_d8);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((local_d8 != (long *)0x0) && (pCVar10 = (CowData *)*local_d8, pCVar10 != (CowData *)0x0)) {
      do {
        local_a8 = 0;
        if (*(long *)pCVar10 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_a8,pCVar10);
        }
        local_a0 = 0;
        if (*(long *)(pCVar10 + 8) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,pCVar10 + 8);
        }
        local_98 = 0;
        if (*(long *)(pCVar10 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_98,pCVar10 + 0x10);
        }
        local_90 = *(long *)(pCVar10 + 0x18);
        uStack_88 = *(undefined8 *)(pCVar10 + 0x20);
        uVar7 = Tree::create_item(*(TreeItem **)(this + 0x7d8),0);
        wVar9 = (wchar32)(CowData<char32_t> *)&local_a0;
        String::find_char(wVar9,10);
        String::substr((int)(String *)&local_d0,wVar9);
        _get_date_string_from((long)&local_c8,(long)this);
        Dictionary::Dictionary(local_c0);
        Variant::Variant((Variant *)local_58,(String *)&local_98);
        if ((_refresh_commit_list()::{lambda()#1}::operator()()::sname == '\0') &&
           (iVar3 = __cxa_guard_acquire(&_refresh_commit_list()::{lambda()#1}::operator()()::sname),
           iVar3 != 0)) {
          _scs_create((char *)&_refresh_commit_list()::{lambda()#1}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_refresh_commit_list()::{lambda()#1}::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&_refresh_commit_list()::{lambda()#1}::operator()()::sname);
        }
        Variant::Variant((Variant *)local_78,
                         (StringName *)&_refresh_commit_list()::{lambda()#1}::operator()()::sname);
        pVVar5 = (Variant *)Dictionary::operator[]((Variant *)local_c0);
        if (pVVar5 != (Variant *)local_58) {
          if (Variant::needs_deinit[*(int *)pVVar5] != '\0') {
            Variant::_clear_internal();
          }
          *(undefined4 *)pVVar5 = 0;
          *(int *)pVVar5 = local_58[0];
          *(undefined8 *)(pVVar5 + 8) = local_50;
          *(undefined8 *)(pVVar5 + 0x10) = uStack_48;
          local_58[0] = 0;
        }
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        Variant::Variant((Variant *)local_58,(String *)&local_d0);
        if ((_refresh_commit_list()::{lambda()#2}::operator()()::sname == '\0') &&
           (iVar3 = __cxa_guard_acquire(&_refresh_commit_list()::{lambda()#2}::operator()()::sname),
           iVar3 != 0)) {
          _scs_create((char *)&_refresh_commit_list()::{lambda()#2}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_refresh_commit_list()::{lambda()#2}::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&_refresh_commit_list()::{lambda()#2}::operator()()::sname);
        }
        Variant::Variant((Variant *)local_78,
                         (StringName *)&_refresh_commit_list()::{lambda()#2}::operator()()::sname);
        pVVar5 = (Variant *)Dictionary::operator[]((Variant *)local_c0);
        if (pVVar5 != (Variant *)local_58) {
          if (Variant::needs_deinit[*(int *)pVVar5] != '\0') {
            Variant::_clear_internal();
          }
          *(undefined4 *)pVVar5 = 0;
          *(int *)pVVar5 = local_58[0];
          *(undefined8 *)(pVVar5 + 8) = local_50;
          *(undefined8 *)(pVVar5 + 0x10) = uStack_48;
          local_58[0] = 0;
        }
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        String::substr((int)&local_b8,wVar9);
        bVar8 = SUB81((String *)&local_b0,0);
        String::strip_edges(bVar8,SUB81(&local_b8,0));
        Variant::Variant((Variant *)local_58,(String *)&local_b0);
        if ((_refresh_commit_list()::{lambda()#3}::operator()()::sname == '\0') &&
           (iVar3 = __cxa_guard_acquire(&_refresh_commit_list()::{lambda()#3}::operator()()::sname),
           iVar3 != 0)) {
          _scs_create((char *)&_refresh_commit_list()::{lambda()#3}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_refresh_commit_list()::{lambda()#3}::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&_refresh_commit_list()::{lambda()#3}::operator()()::sname);
        }
        Variant::Variant((Variant *)local_78,
                         (StringName *)&_refresh_commit_list()::{lambda()#3}::operator()()::sname);
        pVVar5 = (Variant *)Dictionary::operator[]((Variant *)local_c0);
        if (pVVar5 != (Variant *)local_58) {
          if (Variant::needs_deinit[*(int *)pVVar5] != '\0') {
            Variant::_clear_internal();
          }
          *(undefined4 *)pVVar5 = 0;
          *(int *)pVVar5 = local_58[0];
          *(undefined8 *)(pVVar5 + 8) = local_50;
          *(undefined8 *)(pVVar5 + 0x10) = uStack_48;
          local_58[0] = 0;
        }
        if (Variant::needs_deinit[local_78[0]] == '\0') {
          cVar2 = Variant::needs_deinit[local_58[0]];
        }
        else {
          Variant::_clear_internal();
          cVar2 = Variant::needs_deinit[local_58[0]];
        }
        if (cVar2 != '\0') {
          Variant::_clear_internal();
        }
        lVar4 = local_b0;
        if (local_b0 != 0) {
          LOCK();
          plVar1 = (long *)(local_b0 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_b0 = 0;
            Memory::free_static((void *)(lVar4 + -0x10),false);
          }
        }
        lVar4 = local_b8;
        if (local_b8 != 0) {
          LOCK();
          plVar1 = (long *)(local_b8 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_b8 = 0;
            Memory::free_static((void *)(lVar4 + -0x10),false);
          }
        }
        Variant::Variant((Variant *)local_58,local_90);
        if ((_refresh_commit_list()::{lambda()#4}::operator()()::sname == '\0') &&
           (iVar3 = __cxa_guard_acquire(&_refresh_commit_list()::{lambda()#4}::operator()()::sname),
           iVar3 != 0)) {
          _scs_create((char *)&_refresh_commit_list()::{lambda()#4}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_refresh_commit_list()::{lambda()#4}::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&_refresh_commit_list()::{lambda()#4}::operator()()::sname);
        }
        Variant::Variant((Variant *)local_78,
                         (StringName *)&_refresh_commit_list()::{lambda()#4}::operator()()::sname);
        pVVar5 = (Variant *)Dictionary::operator[]((Variant *)local_c0);
        if (pVVar5 != (Variant *)local_58) {
          if (Variant::needs_deinit[*(int *)pVVar5] != '\0') {
            Variant::_clear_internal();
          }
          *(undefined4 *)pVVar5 = 0;
          *(int *)pVVar5 = local_58[0];
          *(undefined8 *)(pVVar5 + 8) = local_50;
          *(undefined8 *)(pVVar5 + 0x10) = uStack_48;
          local_58[0] = 0;
        }
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        Variant::Variant((Variant *)local_58,(String *)&local_a8);
        if ((_refresh_commit_list()::{lambda()#5}::operator()()::sname == '\0') &&
           (iVar3 = __cxa_guard_acquire(&_refresh_commit_list()::{lambda()#5}::operator()()::sname),
           iVar3 != 0)) {
          _scs_create((char *)&_refresh_commit_list()::{lambda()#5}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_refresh_commit_list()::{lambda()#5}::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&_refresh_commit_list()::{lambda()#5}::operator()()::sname);
        }
        Variant::Variant((Variant *)local_78,
                         (StringName *)&_refresh_commit_list()::{lambda()#5}::operator()()::sname);
        pVVar5 = (Variant *)Dictionary::operator[]((Variant *)local_c0);
        if (pVVar5 != (Variant *)local_58) {
          if (Variant::needs_deinit[*(int *)pVVar5] != '\0') {
            Variant::_clear_internal();
          }
          *(undefined4 *)pVVar5 = 0;
          *(int *)pVVar5 = local_58[0];
          *(undefined8 *)(pVVar5 + 8) = local_50;
          *(undefined8 *)(pVVar5 + 0x10) = uStack_48;
          local_58[0] = 0;
        }
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        Variant::Variant((Variant *)local_58,(String *)&local_c8);
        if ((_refresh_commit_list()::{lambda()#6}::operator()()::sname == '\0') &&
           (iVar3 = __cxa_guard_acquire(&_refresh_commit_list()::{lambda()#6}::operator()()::sname),
           iVar3 != 0)) {
          _scs_create((char *)&_refresh_commit_list()::{lambda()#6}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_refresh_commit_list()::{lambda()#6}::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&_refresh_commit_list()::{lambda()#6}::operator()()::sname);
        }
        Variant::Variant((Variant *)local_78,
                         (StringName *)&_refresh_commit_list()::{lambda()#6}::operator()()::sname);
        pVVar5 = (Variant *)Dictionary::operator[]((Variant *)local_c0);
        if (pVVar5 != (Variant *)local_58) {
          if (Variant::needs_deinit[*(int *)pVVar5] != '\0') {
            Variant::_clear_internal();
          }
          *(undefined4 *)pVVar5 = 0;
          *(int *)pVVar5 = local_58[0];
          *(undefined8 *)(pVVar5 + 8) = local_50;
          *(undefined8 *)(pVVar5 + 0x10) = uStack_48;
          local_58[0] = 0;
        }
        if (Variant::needs_deinit[local_78[0]] == '\0') {
          cVar2 = Variant::needs_deinit[local_58[0]];
        }
        else {
          Variant::_clear_internal();
          cVar2 = Variant::needs_deinit[local_58[0]];
        }
        if (cVar2 != '\0') {
          Variant::_clear_internal();
        }
        local_b0 = 0;
        plVar1 = (long *)(local_d0 + -0x10);
        if (local_d0 != 0) {
          do {
            lVar4 = *plVar1;
            if (lVar4 == 0) goto LAB_00104923;
            LOCK();
            lVar6 = *plVar1;
            bVar11 = lVar4 == lVar6;
            if (bVar11) {
              *plVar1 = lVar4 + 1;
              lVar6 = lVar4;
            }
            UNLOCK();
          } while (!bVar11);
          if (lVar6 != -1) {
            local_b0 = local_d0;
          }
        }
LAB_00104923:
        TreeItem::set_text(uVar7,0,(String *)&local_b0);
        lVar4 = local_b0;
        if (local_b0 != 0) {
          LOCK();
          plVar1 = (long *)(local_b0 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_b0 = 0;
            Memory::free_static((void *)(lVar4 + -0x10),false);
          }
        }
        String::strip_edges(bVar8,SUB81((CowData<char32_t> *)&local_a8,0));
        TreeItem::set_text(uVar7,1,(String *)&local_b0);
        lVar4 = local_b0;
        if (local_b0 != 0) {
          LOCK();
          plVar1 = (long *)(local_b0 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_b0 = 0;
            Memory::free_static((void *)(lVar4 + -0x10),false);
          }
        }
        Variant::Variant((Variant *)local_58,local_c0);
        TreeItem::set_metadata((int)uVar7,(Variant *)0x0);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        Dictionary::~Dictionary(local_c0);
        lVar4 = local_c8;
        if (local_c8 != 0) {
          LOCK();
          plVar1 = (long *)(local_c8 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_c8 = 0;
            Memory::free_static((void *)(lVar4 + -0x10),false);
          }
        }
        lVar4 = local_d0;
        if (local_d0 != 0) {
          LOCK();
          plVar1 = (long *)(local_d0 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_d0 = 0;
            Memory::free_static((void *)(lVar4 + -0x10),false);
          }
        }
        lVar4 = local_98;
        if (local_98 != 0) {
          LOCK();
          plVar1 = (long *)(local_98 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_98 = 0;
            Memory::free_static((void *)(lVar4 + -0x10),false);
          }
        }
        lVar4 = local_a0;
        if (local_a0 != 0) {
          LOCK();
          plVar1 = (long *)(local_a0 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_a0 = 0;
            Memory::free_static((void *)(lVar4 + -0x10),false);
          }
        }
        lVar4 = local_a8;
        if (local_a8 != 0) {
          LOCK();
          plVar1 = (long *)(local_a8 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_a8 = 0;
            Memory::free_static((void *)(lVar4 + -0x10),false);
          }
        }
        pCVar10 = *(CowData **)(pCVar10 + 0x28);
      } while (pCVar10 != (CowData *)0x0);
    }
    List<EditorVCSInterface::Commit,DefaultAllocator>::~List
              ((List<EditorVCSInterface::Commit,DefaultAllocator> *)&local_d8);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VersionControlEditorPlugin::_set_commit_list_size(int) */

void VersionControlEditorPlugin::_set_commit_list_size(int param_1)

{
  undefined4 in_register_0000003c;
  
  _refresh_commit_list((VersionControlEditorPlugin *)CONCAT44(in_register_0000003c,param_1));
  return;
}



/* VersionControlEditorPlugin::_remove_branch() */

void __thiscall VersionControlEditorPlugin::_remove_branch(VersionControlEditorPlugin *this)

{
  long lVar1;
  String *pSVar2;
  
  lVar1 = EditorVCSInterface::get_singleton();
  if (lVar1 != 0) {
    pSVar2 = (String *)EditorVCSInterface::get_singleton();
    EditorVCSInterface::remove_branch(pSVar2);
    if ((*(long *)(this + 0x840) != 0) && (*(long *)(*(long *)(this + 0x840) + -8) != 0)) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x840));
    }
    _refresh_branch_list(this);
    return;
  }
  _err_print_error("_remove_branch","editor/plugins/version_control_editor_plugin.cpp",0x328,
                   "Parameter \"EditorVCSInterface::get_singleton()\" is null.",
                   "No VCS plugin is initialized. Select a Version Control Plugin from Project menu."
                   ,0,0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VersionControlEditorPlugin::_display_diff_split_view(List<EditorVCSInterface::DiffLine,
   DefaultAllocator>&) */

void VersionControlEditorPlugin::_display_diff_split_view(List *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  DiffLine *pDVar3;
  CowData<char32_t> *pCVar4;
  String *pSVar5;
  code *pcVar6;
  undefined8 uVar7;
  long lVar8;
  char cVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  undefined8 *in_RSI;
  undefined8 *puVar19;
  CowData<char32_t> *this;
  CowData<char32_t> *pCVar20;
  long in_FS_OFFSET;
  undefined8 in_XMM1_Qa;
  void *local_178;
  long local_130;
  undefined8 local_128;
  long local_120;
  long local_118;
  long local_110;
  long local_108 [2];
  long *local_f8;
  long local_f0;
  long local_e8;
  long local_e0;
  long local_d8 [2];
  long *local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  long local_a8 [2];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  long local_78 [2];
  undefined8 local_68 [2];
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((undefined8 *)*in_RSI == (undefined8 *)0x0) ||
     (puVar19 = *(undefined8 **)*in_RSI, puVar19 == (undefined8 *)0x0)) {
    RichTextLabel::push_table(*(undefined8 *)(param_1 + 0x898),6,0,0xffffffff);
    RichTextLabel::set_table_column_expand((int)*(undefined8 *)(param_1 + 0x898),true,1,true);
    RichTextLabel::set_table_column_expand((int)*(undefined8 *)(param_1 + 0x898),true,1,true);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      RichTextLabel::pop();
      return;
    }
    goto LAB_00106408;
  }
  uVar11 = 0;
  local_178 = (void *)0x0;
  uVar18 = 0;
  do {
    local_128 = (long *)*puVar19;
    local_120 = 0;
    if (puVar19[1] != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_120,(CowData *)(puVar19 + 1));
    }
    local_118 = 0;
    if (puVar19[2] != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_118,(CowData *)(puVar19 + 2));
    }
    local_110 = 0;
    if (puVar19[3] != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_110,(CowData *)(puVar19 + 3));
    }
    local_108[0] = 0;
    if (puVar19[4] != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)local_108,(CowData *)(puVar19 + 4));
    }
    String::strip_edges(SUB81((CowData *)&local_130,0),SUB81((CowData<char32_t> *)&local_120,0));
    uVar17 = (uint)uVar18;
    if ((int)local_128 < 0) {
      if ((int)local_128 == -1) {
        local_90 = 0;
        local_98 = &_LC53;
        String::parse_latin1((StrRange *)local_108);
        if (local_110 != local_130) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_110,(CowData *)&local_130);
        }
        local_c0 = 0;
        local_c8 = local_128;
        if (local_120 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_c0,(CowData *)&local_120);
        }
        local_b8 = 0;
        if (local_118 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_118);
        }
        local_b0 = 0;
        if (local_110 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,(CowData *)&local_110);
        }
        local_a8[0] = 0;
        if (local_108[0] != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)local_a8,(CowData *)local_108);
        }
        if (uVar11 == uVar17) {
          uVar13 = 1;
          if (uVar11 << 1 != 0) {
            uVar13 = (ulong)(uVar11 << 1);
          }
          uVar11 = (uint)uVar13;
          local_178 = (void *)Memory::realloc_static(local_178,uVar13 * 0x28,false);
          if (local_178 == (void *)0x0) goto LAB_001057a9;
        }
        puVar2 = (undefined8 *)((long)local_178 + uVar18 * 0x28);
        puVar2[1] = 0;
        *puVar2 = local_c8;
        if (local_c0 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)(puVar2 + 1),(CowData *)&local_c0);
        }
        puVar2[2] = 0;
        if (local_b8 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)(puVar2 + 2),(CowData *)&local_b8);
        }
        puVar2[3] = 0;
        if (local_b0 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)(puVar2 + 3),(CowData *)&local_b0);
        }
        puVar2[4] = 0;
        if (local_a8[0] != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)(puVar2 + 4),(CowData *)local_a8);
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
        uVar13 = (ulong)(uVar17 + 1);
      }
      else {
LAB_001056dc:
        uVar13 = uVar18;
        if (local_128._4_4_ == -1) {
          uVar16 = uVar17 - 1;
          uVar15 = (ulong)uVar16;
          uVar14 = uVar16;
          if (-1 < (int)uVar16) {
            piVar12 = (int *)((long)local_178 + (ulong)uVar16 * 0x28);
            while (uVar14 = (uint)uVar15, *piVar12 == -1) {
              uVar14 = uVar14 - 1;
              uVar15 = (ulong)uVar14;
              if (uVar14 == 0xffffffff) {
                uVar15 = 0;
                goto LAB_001060c8;
              }
              piVar12 = piVar12 + -10;
              if (uVar17 <= uVar14) goto LAB_00105725;
            }
          }
          if (uVar16 == uVar14) {
            if (local_108[0] != local_130) {
              CowData<char32_t>::_ref((CowData<char32_t> *)local_108,(CowData *)&local_130);
            }
            String::parse_latin1((String *)&local_110,"");
            EditorVCSInterface::DiffLine::DiffLine((DiffLine *)&local_98,(DiffLine *)&local_128);
            if (uVar11 == uVar17) {
              uVar13 = 1;
              if (uVar11 << 1 != 0) {
                uVar13 = (ulong)(uVar11 << 1);
              }
              uVar11 = (uint)uVar13;
              local_178 = (void *)Memory::realloc_static(local_178,uVar13 * 0x28,false);
              if (local_178 == (void *)0x0) {
LAB_001057a9:
                _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                                 "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
                _err_flush_stdout();
                    /* WARNING: Does not return */
                pcVar6 = (code *)invalidInstructionException();
                (*pcVar6)();
              }
            }
            uVar13 = (ulong)(uVar17 + 1);
            EditorVCSInterface::DiffLine::DiffLine
                      ((DiffLine *)((long)local_178 + uVar18 * 0x28),(DiffLine *)&local_98);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
          }
          else {
            uVar15 = (ulong)(uVar14 + 1);
            if (uVar17 <= uVar14 + 1) {
LAB_00105725:
              _err_print_index_error
                        ("operator[]","./core/templates/local_vector.h",0xb2,uVar15,uVar18,"p_index"
                         ,"count","",false,true);
              _err_flush_stdout();
                    /* WARNING: Does not return */
              pcVar6 = (code *)invalidInstructionException();
              (*pcVar6)();
            }
LAB_001060c8:
            pDVar3 = (DiffLine *)((long)local_178 + uVar15 * 0x28);
            EditorVCSInterface::DiffLine::DiffLine((DiffLine *)&local_98,pDVar3);
            if (local_78[0] != local_130) {
              CowData<char32_t>::_ref((CowData<char32_t> *)local_78,(CowData *)&local_130);
            }
            local_98 = (undefined *)CONCAT44(local_98._4_4_,(int)local_128);
            *(ulong *)pDVar3 = CONCAT44(local_98._4_4_,(int)local_128);
            CowData<char32_t>::_ref((CowData<char32_t> *)(pDVar3 + 8),(CowData *)&local_90);
            CowData<char32_t>::_ref((CowData<char32_t> *)(pDVar3 + 0x10),(CowData *)&local_88);
            CowData<char32_t>::_ref((CowData<char32_t> *)(pDVar3 + 0x18),(CowData *)&local_80);
            CowData<char32_t>::_ref((CowData<char32_t> *)(pDVar3 + 0x20),(CowData *)local_78);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
          }
        }
      }
    }
    else {
      if ((long)local_128 < 0) goto LAB_001056dc;
      if (local_108[0] != local_130) {
        CowData<char32_t>::_ref((CowData<char32_t> *)local_108,(CowData *)&local_130);
      }
      if (local_130 != local_110) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_110,(CowData *)&local_130);
      }
      local_f0 = 0;
      local_f8 = local_128;
      if (local_120 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_f0,(CowData *)&local_120);
      }
      local_e8 = 0;
      if (local_118 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,(CowData *)&local_118);
      }
      local_e0 = 0;
      if (local_110 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_e0,(CowData *)&local_110);
      }
      local_d8[0] = 0;
      if (local_108[0] != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)local_d8,(CowData *)local_108);
      }
      if (uVar11 == uVar17) {
        uVar13 = 1;
        if (uVar11 << 1 != 0) {
          uVar13 = (ulong)(uVar11 << 1);
        }
        uVar11 = (uint)uVar13;
        local_178 = (void *)Memory::realloc_static(local_178,uVar13 * 0x28,false);
        if (local_178 == (void *)0x0) goto LAB_001057a9;
      }
      puVar2 = (undefined8 *)((long)local_178 + uVar18 * 0x28);
      puVar2[1] = 0;
      *puVar2 = local_f8;
      if (local_f0 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)(puVar2 + 1),(CowData *)&local_f0);
      }
      puVar2[2] = 0;
      if (local_e8 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)(puVar2 + 2),(CowData *)&local_e8);
      }
      puVar2[3] = 0;
      if (local_e0 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)(puVar2 + 3),(CowData *)&local_e0);
      }
      puVar2[4] = 0;
      if (local_d8[0] != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)(puVar2 + 4),(CowData *)local_d8);
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
      uVar13 = (ulong)(uVar17 + 1);
    }
    lVar8 = local_130;
    if (local_130 != 0) {
      LOCK();
      plVar1 = (long *)(local_130 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_130 = 0;
        Memory::free_static((void *)(lVar8 + -0x10),false);
      }
    }
    lVar8 = local_108[0];
    if (local_108[0] != 0) {
      LOCK();
      plVar1 = (long *)(local_108[0] + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_108[0] = 0;
        Memory::free_static((void *)(lVar8 + -0x10),false);
      }
    }
    lVar8 = local_110;
    if (local_110 != 0) {
      LOCK();
      plVar1 = (long *)(local_110 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_110 = 0;
        Memory::free_static((void *)(lVar8 + -0x10),false);
      }
    }
    lVar8 = local_118;
    if (local_118 != 0) {
      LOCK();
      plVar1 = (long *)(local_118 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_118 = 0;
        Memory::free_static((void *)(lVar8 + -0x10),false);
      }
    }
    lVar8 = local_120;
    if (local_120 != 0) {
      LOCK();
      plVar1 = (long *)(local_120 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_120 = 0;
        Memory::free_static((void *)(lVar8 + -0x10),false);
      }
    }
    puVar19 = (undefined8 *)puVar19[5];
    uVar18 = uVar13;
  } while (puVar19 != (undefined8 *)0x0);
  RichTextLabel::push_table(*(undefined8 *)(param_1 + 0x898),6,0,0xffffffff);
  RichTextLabel::set_table_column_expand((int)*(undefined8 *)(param_1 + 0x898),true,1,true);
  RichTextLabel::set_table_column_expand((int)*(undefined8 *)(param_1 + 0x898),true,1,true);
  if ((int)uVar13 == 0) {
    RichTextLabel::pop();
    if (local_178 == (void *)0x0) goto LAB_00106094;
  }
  else {
    this = (CowData<char32_t> *)((long)local_178 + 0x20);
    pCVar4 = this + uVar13 * 0x28;
    pCVar20 = this;
    do {
      local_98 = *(undefined **)((CowData *)pCVar20 + -0x20);
      local_90 = 0;
      if (*(long *)((CowData *)pCVar20 + -0x18) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)pCVar20 + -0x18);
      }
      local_88 = 0;
      if (*(long *)((CowData *)pCVar20 + -0x10) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)pCVar20 + -0x10);
      }
      local_80 = 0;
      if (*(long *)((CowData *)pCVar20 + -8) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_80,(CowData *)pCVar20 + -8);
      }
      local_78[0] = 0;
      if (*(long *)pCVar20 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)local_78,(CowData *)pCVar20);
      }
      cVar9 = String::operator!=((String *)&local_88," ");
      if ((_display_diff_split_view(List<EditorVCSInterface::DiffLine,DefaultAllocator>&)::red ==
           '\0') &&
         (iVar10 = __cxa_guard_acquire(&_display_diff_split_view(List<EditorVCSInterface::DiffLine,DefaultAllocator>&)
                                        ::red), iVar10 != 0)) {
        local_c8 = (long *)0x0;
        Ref<Theme>::operator=((Ref<Theme> *)&local_c8,*(Ref **)(EditorNode::singleton + 0x838));
        plVar1 = local_c8;
        uVar7 = EditorStringNames::singleton;
        pcVar6 = *(code **)(*local_c8 + 0x1e8);
        if ((_display_diff_split_view(List<EditorVCSInterface::DiffLine,DefaultAllocator>&)::
             {lambda()#1}::operator()()::sname == '\0') &&
           (iVar10 = __cxa_guard_acquire(&_display_diff_split_view(List<EditorVCSInterface::DiffLine,DefaultAllocator>&)
                                          ::{lambda()#1}::operator()()::sname), iVar10 != 0)) {
          _scs_create((char *)&_display_diff_split_view(List<EditorVCSInterface::DiffLine,DefaultAllocator>&)
                               ::{lambda()#1}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_display_diff_split_view(List<EditorVCSInterface::DiffLine,DefaultAllocator>&)
                        ::{lambda()#1}::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&_display_diff_split_view(List<EditorVCSInterface::DiffLine,DefaultAllocator>&)
                               ::{lambda()#1}::operator()()::sname);
        }
        _display_diff_split_view(List<EditorVCSInterface::DiffLine,DefaultAllocator>&)::red._0_8_ =
             (*pcVar6)(plVar1,&_display_diff_split_view(List<EditorVCSInterface::DiffLine,DefaultAllocator>&)
                               ::{lambda()#1}::operator()()::sname,uVar7);
        _display_diff_split_view(List<EditorVCSInterface::DiffLine,DefaultAllocator>&)::red._8_8_ =
             in_XMM1_Qa;
        __cxa_guard_release(&_display_diff_split_view(List<EditorVCSInterface::DiffLine,DefaultAllocator>&)
                             ::red);
        Ref<Theme>::unref((Ref<Theme> *)&local_c8);
      }
      if ((_display_diff_split_view(List<EditorVCSInterface::DiffLine,DefaultAllocator>&)::green ==
           '\0') &&
         (iVar10 = __cxa_guard_acquire(&_display_diff_split_view(List<EditorVCSInterface::DiffLine,DefaultAllocator>&)
                                        ::green), iVar10 != 0)) {
        local_c8 = (long *)0x0;
        Ref<Theme>::operator=((Ref<Theme> *)&local_c8,*(Ref **)(EditorNode::singleton + 0x838));
        plVar1 = local_c8;
        uVar7 = EditorStringNames::singleton;
        pcVar6 = *(code **)(*local_c8 + 0x1e8);
        if ((_display_diff_split_view(List<EditorVCSInterface::DiffLine,DefaultAllocator>&)::
             {lambda()#2}::operator()()::sname == '\0') &&
           (iVar10 = __cxa_guard_acquire(&_display_diff_split_view(List<EditorVCSInterface::DiffLine,DefaultAllocator>&)
                                          ::{lambda()#2}::operator()()::sname), iVar10 != 0)) {
          _scs_create((char *)&_display_diff_split_view(List<EditorVCSInterface::DiffLine,DefaultAllocator>&)
                               ::{lambda()#2}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_display_diff_split_view(List<EditorVCSInterface::DiffLine,DefaultAllocator>&)
                        ::{lambda()#2}::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&_display_diff_split_view(List<EditorVCSInterface::DiffLine,DefaultAllocator>&)
                               ::{lambda()#2}::operator()()::sname);
        }
        _display_diff_split_view(List<EditorVCSInterface::DiffLine,DefaultAllocator>&)::green._0_8_
             = (*pcVar6)(plVar1,&_display_diff_split_view(List<EditorVCSInterface::DiffLine,DefaultAllocator>&)
                                 ::{lambda()#2}::operator()()::sname,uVar7);
        _display_diff_split_view(List<EditorVCSInterface::DiffLine,DefaultAllocator>&)::green._8_8_
             = in_XMM1_Qa;
        __cxa_guard_release(&_display_diff_split_view(List<EditorVCSInterface::DiffLine,DefaultAllocator>&)
                             ::green);
        Ref<Theme>::unref((Ref<Theme> *)&local_c8);
      }
      if ((_display_diff_split_view(List<EditorVCSInterface::DiffLine,DefaultAllocator>&)::white ==
           '\0') &&
         (iVar10 = __cxa_guard_acquire(&_display_diff_split_view(List<EditorVCSInterface::DiffLine,DefaultAllocator>&)
                                        ::white), iVar10 != 0)) {
        local_c8 = (long *)0x0;
        local_58 = __LC87;
        uStack_50 = _UNK_00120ba8;
        Ref<Theme>::operator=((Ref<Theme> *)&local_c8,*(Ref **)(EditorNode::singleton + 0x838));
        plVar1 = local_c8;
        pcVar6 = *(code **)(*local_c8 + 0x1e8);
        if ((_display_diff_split_view(List<EditorVCSInterface::DiffLine,DefaultAllocator>&)::
             {lambda()#3}::operator()()::sname == '\0') &&
           (iVar10 = __cxa_guard_acquire(&_display_diff_split_view(List<EditorVCSInterface::DiffLine,DefaultAllocator>&)
                                          ::{lambda()#3}::operator()()::sname), iVar10 != 0)) {
          _scs_create((char *)&_display_diff_split_view(List<EditorVCSInterface::DiffLine,DefaultAllocator>&)
                               ::{lambda()#3}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_display_diff_split_view(List<EditorVCSInterface::DiffLine,DefaultAllocator>&)
                        ::{lambda()#3}::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&_display_diff_split_view(List<EditorVCSInterface::DiffLine,DefaultAllocator>&)
                               ::{lambda()#3}::operator()()::sname);
        }
        local_68[0] = (*pcVar6)(plVar1,SceneStringNames::singleton + 0xb0,
                                &_display_diff_split_view(List<EditorVCSInterface::DiffLine,DefaultAllocator>&)
                                 ::{lambda()#3}::operator()()::sname);
        _display_diff_split_view(List<EditorVCSInterface::DiffLine,DefaultAllocator>&)::white._0_8_
             = Color::operator*((Color *)local_68,(Color *)&local_58);
        _display_diff_split_view(List<EditorVCSInterface::DiffLine,DefaultAllocator>&)::white._8_8_
             = in_XMM1_Qa;
        __cxa_guard_release(&_display_diff_split_view(List<EditorVCSInterface::DiffLine,DefaultAllocator>&)
                             ::white);
        Ref<Theme>::unref((Ref<Theme> *)&local_c8);
      }
      if ((long)local_98 < 0) {
        RichTextLabel::push_cell();
        RichTextLabel::pop();
        RichTextLabel::push_cell();
        RichTextLabel::pop();
        RichTextLabel::push_cell();
        RichTextLabel::pop();
      }
      else {
        RichTextLabel::push_cell();
        RichTextLabel::push_color(*(Color **)(param_1 + 0x898));
        pSVar5 = *(String **)(param_1 + 0x898);
        String::num_int64((long)&local_c8,local_98._4_4_,true);
        RichTextLabel::add_text(pSVar5);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
        RichTextLabel::pop();
        RichTextLabel::pop();
        RichTextLabel::push_cell();
        RichTextLabel::push_color(*(Color **)(param_1 + 0x898));
        pSVar5 = *(String **)(param_1 + 0x898);
        local_f8 = (long *)0x0;
        local_c8 = (long *)&_LC89;
        if (cVar9 != '\0') {
          local_c8 = (long *)&_LC132;
        }
        local_c0 = 2;
        String::parse_latin1((StrRange *)&local_f8);
        RichTextLabel::add_text(pSVar5);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
        RichTextLabel::pop();
        RichTextLabel::pop();
        RichTextLabel::push_cell();
        RichTextLabel::push_color(*(Color **)(param_1 + 0x898));
        RichTextLabel::add_text(*(String **)(param_1 + 0x898));
        RichTextLabel::pop();
        RichTextLabel::pop();
      }
      if ((int)local_98 < 0) {
        RichTextLabel::push_cell();
        RichTextLabel::pop();
        RichTextLabel::push_cell();
        RichTextLabel::pop();
        RichTextLabel::push_cell();
        RichTextLabel::pop();
      }
      else {
        RichTextLabel::push_cell();
        RichTextLabel::push_color(*(Color **)(param_1 + 0x898));
        pSVar5 = *(String **)(param_1 + 0x898);
        String::num_int64((long)&local_c8,(int)local_98,true);
        RichTextLabel::add_text(pSVar5);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
        RichTextLabel::pop();
        RichTextLabel::pop();
        RichTextLabel::push_cell();
        RichTextLabel::push_color(*(Color **)(param_1 + 0x898));
        pSVar5 = *(String **)(param_1 + 0x898);
        local_f8 = (long *)0x0;
        local_c8 = (long *)&_LC89;
        if (cVar9 != '\0') {
          local_c8 = (long *)&_LC133;
        }
        local_c0 = 2;
        String::parse_latin1((StrRange *)&local_f8);
        RichTextLabel::add_text(pSVar5);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
        RichTextLabel::pop();
        RichTextLabel::pop();
        RichTextLabel::push_cell();
        RichTextLabel::push_color(*(Color **)(param_1 + 0x898));
        RichTextLabel::add_text(*(String **)(param_1 + 0x898));
        RichTextLabel::pop();
        RichTextLabel::pop();
      }
      pCVar20 = (CowData<char32_t> *)((CowData *)pCVar20 + 0x28);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    } while (pCVar20 != pCVar4);
    RichTextLabel::pop();
    if (local_178 == (void *)0x0) {
LAB_00106094:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00106408;
    }
    do {
      CowData<char32_t>::_unref(this);
      CowData<char32_t>::_unref(this + -8);
      CowData<char32_t>::_unref(this + -0x10);
      pCVar20 = this + -0x18;
      this = this + 0x28;
      CowData<char32_t>::_unref(pCVar20);
    } while (this != pCVar4);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    Memory::free_static(local_178,false);
    return;
  }
LAB_00106408:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VersionControlEditorPlugin::_add_new_item(Tree*, String const&, EditorVCSInterface::ChangeType)
    */

void __thiscall
VersionControlEditorPlugin::_add_new_item
          (VersionControlEditorPlugin *this,TreeItem *param_1,String *param_2,int param_4)

{
  long lVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  Object *pOVar8;
  int iVar9;
  long in_FS_OFFSET;
  int local_9c [3];
  long local_90;
  Object *local_88;
  Object *local_80;
  undefined8 local_78;
  undefined8 local_70;
  Object *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = (Object *)&_LC142;
  local_70 = 0;
  local_60 = 1;
  local_9c[0] = param_4;
  String::parse_latin1((StrRange *)&local_70);
  HashMap<EditorVCSInterface::ChangeType,String,HashMapHasherDefault,HashMapComparatorDefault<EditorVCSInterface::ChangeType>,DefaultTypedAllocator<HashMapElement<EditorVCSInterface::ChangeType,String>>>
  ::operator[]((HashMap<EditorVCSInterface::ChangeType,String,HashMapHasherDefault,HashMapComparatorDefault<EditorVCSInterface::ChangeType>,DefaultTypedAllocator<HashMapElement<EditorVCSInterface::ChangeType,String>>>
                *)(this + 0x730),(ChangeType *)local_9c);
  local_80 = (Object *)0x0;
  local_68 = (Object *)&_LC143;
  local_60 = 2;
  String::parse_latin1((StrRange *)&local_80);
  String::operator+((String *)&local_78,param_2);
  String::operator+((String *)&local_68,(String *)&local_78);
  String::operator+((String *)&local_90,(String *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  plVar6 = (long *)Tree::create_item(param_1,0);
  local_68 = (Object *)0x0;
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)&local_90);
  }
  TreeItem::set_text(plVar6,0,(String *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  plVar7 = (long *)HashMap<EditorVCSInterface::ChangeType,Ref<Texture>,HashMapHasherDefault,HashMapComparatorDefault<EditorVCSInterface::ChangeType>,DefaultTypedAllocator<HashMapElement<EditorVCSInterface::ChangeType,Ref<Texture>>>>
                   ::operator[]((HashMap<EditorVCSInterface::ChangeType,Ref<Texture>,HashMapHasherDefault,HashMapComparatorDefault<EditorVCSInterface::ChangeType>,DefaultTypedAllocator<HashMapElement<EditorVCSInterface::ChangeType,Ref<Texture>>>>
                                 *)(this + 0x790),(ChangeType *)local_9c);
  local_68 = (Object *)0x0;
  if (*plVar7 != 0) {
    pOVar8 = (Object *)__dynamic_cast(*plVar7,&Object::typeinfo,&Texture2D::typeinfo,0);
    if (pOVar8 != (Object *)0x0) {
      local_68 = pOVar8;
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        local_68 = (Object *)0x0;
      }
    }
  }
  iVar9 = (int)plVar6;
  TreeItem::set_icon(iVar9,(Ref *)0x0);
  if (local_68 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    pOVar8 = local_68;
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_68);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
        Memory::free_static(pOVar8,false);
      }
    }
  }
  pcVar2 = *(code **)(*plVar6 + 0xa8);
  Variant::Variant((Variant *)local_58,param_2);
  if (_add_new_item(Tree*,String_const&,EditorVCSInterface::ChangeType)::{lambda()#1}::operator()()
      ::sname == '\0') {
    iVar4 = __cxa_guard_acquire(&_add_new_item(Tree*,String_const&,EditorVCSInterface::ChangeType)::
                                 {lambda()#1}::operator()()::sname);
    if (iVar4 != 0) {
      _scs_create((char *)&_add_new_item(Tree*,String_const&,EditorVCSInterface::ChangeType)::
                           {lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &_add_new_item(Tree*,String_const&,EditorVCSInterface::ChangeType)::{lambda()#1}
                    ::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&_add_new_item(Tree*,String_const&,EditorVCSInterface::ChangeType)::
                           {lambda()#1}::operator()()::sname);
    }
  }
  (*pcVar2)(plVar6,&_add_new_item(Tree*,String_const&,EditorVCSInterface::ChangeType)::{lambda()#1}
                    ::operator()()::sname,(Variant *)local_58);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  pcVar2 = *(code **)(*plVar6 + 0xa8);
  Variant::Variant((Variant *)local_58,local_9c[0]);
  if (_add_new_item(Tree*,String_const&,EditorVCSInterface::ChangeType)::{lambda()#2}::operator()()
      ::sname == '\0') {
    iVar4 = __cxa_guard_acquire(&_add_new_item(Tree*,String_const&,EditorVCSInterface::ChangeType)::
                                 {lambda()#2}::operator()()::sname);
    if (iVar4 != 0) {
      _scs_create((char *)&_add_new_item(Tree*,String_const&,EditorVCSInterface::ChangeType)::
                           {lambda()#2}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &_add_new_item(Tree*,String_const&,EditorVCSInterface::ChangeType)::{lambda()#2}
                    ::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&_add_new_item(Tree*,String_const&,EditorVCSInterface::ChangeType)::
                           {lambda()#2}::operator()()::sname);
    }
  }
  (*pcVar2)(plVar6,&_add_new_item(Tree*,String_const&,EditorVCSInterface::ChangeType)::{lambda()#2}
                    ::operator()()::sname,(Variant *)local_58);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  HashMap<EditorVCSInterface::ChangeType,Color,HashMapHasherDefault,HashMapComparatorDefault<EditorVCSInterface::ChangeType>,DefaultTypedAllocator<HashMapElement<EditorVCSInterface::ChangeType,Color>>>
  ::operator[]((HashMap<EditorVCSInterface::ChangeType,Color,HashMapHasherDefault,HashMapComparatorDefault<EditorVCSInterface::ChangeType>,DefaultTypedAllocator<HashMapElement<EditorVCSInterface::ChangeType,Color>>>
                *)(this + 0x760),(ChangeType *)local_9c);
  TreeItem::set_custom_color(iVar9,(Color *)0x0);
  local_70 = 0;
  local_68 = (Object *)&_LC53;
  local_60 = 0;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = (Object *)0x11364f;
  local_78 = 0;
  local_60 = 0xe;
  String::parse_latin1((StrRange *)&local_78);
  TTR((String *)&local_68,(String *)&local_78);
  local_88 = (Object *)0x0;
  Ref<Theme>::operator=((Ref<Theme> *)&local_88,*(Ref **)(EditorNode::singleton + 0x838));
  pOVar8 = local_88;
  pcVar2 = *(code **)(*(long *)local_88 + 0x1c8);
  if (_add_new_item(Tree*,String_const&,EditorVCSInterface::ChangeType)::{lambda()#3}::operator()()
      ::sname == '\0') {
    iVar4 = __cxa_guard_acquire(&_add_new_item(Tree*,String_const&,EditorVCSInterface::ChangeType)::
                                 {lambda()#3}::operator()()::sname);
    if (iVar4 != 0) {
      _scs_create((char *)&_add_new_item(Tree*,String_const&,EditorVCSInterface::ChangeType)::
                           {lambda()#3}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &_add_new_item(Tree*,String_const&,EditorVCSInterface::ChangeType)::{lambda()#3}
                    ::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&_add_new_item(Tree*,String_const&,EditorVCSInterface::ChangeType)::
                           {lambda()#3}::operator()()::sname);
    }
  }
  (*pcVar2)((StrRange *)&local_80,pOVar8,
            &_add_new_item(Tree*,String_const&,EditorVCSInterface::ChangeType)::{lambda()#3}::
             operator()()::sname);
  iVar4 = (int)(StrRange *)&local_80;
  TreeItem::add_button(iVar9,(Ref *)0x0,iVar4,false,(String *)0x0);
  if (local_80 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    pOVar8 = local_80;
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_80);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
        Memory::free_static(pOVar8,false);
      }
    }
  }
  pOVar8 = local_88;
  if (local_88 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(pOVar8);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
        Memory::free_static(pOVar8,false);
      }
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  if (*(TreeItem **)(this + 2000) == param_1) {
    local_70 = 0;
    String::parse_latin1((String *)&local_70,"");
    local_78 = 0;
    String::parse_latin1((String *)&local_78,"Discard changes");
    TTR((String *)&local_68,(String *)&local_78);
    local_88 = (Object *)0x0;
    Ref<Theme>::operator=((Ref<Theme> *)&local_88,*(Ref **)(EditorNode::singleton + 0x838));
    pOVar8 = local_88;
    pcVar2 = *(code **)(*(long *)local_88 + 0x1c8);
    lVar1 = EditorStringNames::singleton + 0x10;
    if (_add_new_item(Tree*,String_const&,EditorVCSInterface::ChangeType)::{lambda()#4}::
        operator()()::sname == '\0') {
      iVar5 = __cxa_guard_acquire(&_add_new_item(Tree*,String_const&,EditorVCSInterface::ChangeType)
                                   ::{lambda()#4}::operator()()::sname);
      if (iVar5 != 0) {
        _scs_create((char *)&_add_new_item(Tree*,String_const&,EditorVCSInterface::ChangeType)::
                             {lambda()#4}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &_add_new_item(Tree*,String_const&,EditorVCSInterface::ChangeType)::
                      {lambda()#4}::operator()()::sname,&__dso_handle);
        __cxa_guard_release(&_add_new_item(Tree*,String_const&,EditorVCSInterface::ChangeType)::
                             {lambda()#4}::operator()()::sname);
      }
    }
    (*pcVar2)((StrRange *)&local_80,pOVar8,
              &_add_new_item(Tree*,String_const&,EditorVCSInterface::ChangeType)::{lambda()#4}::
               operator()()::sname,lVar1);
    TreeItem::add_button(iVar9,(Ref *)0x0,iVar4,true,(String *)0x0);
    Ref<Texture2D>::unref((Ref<Texture2D> *)&local_80);
    Ref<Theme>::unref((Ref<Theme> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VersionControlEditorPlugin::_refresh_stage_area() */

void __thiscall VersionControlEditorPlugin::_refresh_stage_area(VersionControlEditorPlugin *this)

{
  long *plVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long in_FS_OFFSET;
  bool bVar8;
  undefined8 *local_98;
  String local_90 [8];
  undefined8 local_88;
  undefined8 local_80;
  CowData<char32_t> local_78 [8];
  String local_70 [8];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  long local_50 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar5 = EditorVCSInterface::get_singleton();
  if (lVar5 == 0) {
    _err_print_error("_refresh_stage_area","editor/plugins/version_control_editor_plugin.cpp",0x16f,
                     "Parameter \"EditorVCSInterface::get_singleton()\" is null.",
                     "No VCS plugin is initialized. Select a Version Control Plugin from Project menu."
                     ,0,0);
  }
  else {
    Tree::get_root();
    TreeItem::clear_children();
    Tree::get_root();
    TreeItem::clear_children();
    EditorVCSInterface::get_singleton();
    EditorVCSInterface::get_modified_files_data();
    if ((local_98 != (undefined8 *)0x0) &&
       (puVar7 = (undefined8 *)*local_98, puVar7 != (undefined8 *)0x0)) {
      do {
        pcVar2 = (char *)*puVar7;
        local_50[0] = 0;
        plVar1 = (long *)(puVar7[1] + -0x10);
        local_58._4_4_ = (undefined4)((ulong)pcVar2 >> 0x20);
        uVar3 = local_58._4_4_;
        iVar4 = (int)pcVar2;
        local_58 = pcVar2;
        if (puVar7[1] == 0) {
          if (iVar4 != 1) goto LAB_00106ca3;
LAB_00106d0e:
          _add_new_item(this,*(undefined8 *)(this + 0x7c8),local_50,uVar3);
        }
        else {
          do {
            lVar5 = *plVar1;
            if (lVar5 == 0) goto LAB_00106c9a;
            LOCK();
            lVar6 = *plVar1;
            bVar8 = lVar5 == lVar6;
            if (bVar8) {
              *plVar1 = lVar5 + 1;
              lVar6 = lVar5;
            }
            UNLOCK();
          } while (!bVar8);
          if (lVar6 != -1) {
            local_50[0] = puVar7[1];
          }
LAB_00106c9a:
          if (iVar4 == 1) goto LAB_00106d0e;
LAB_00106ca3:
          if (iVar4 == 2) {
            _add_new_item(this,*(undefined8 *)(this + 2000),local_50,uVar3);
          }
        }
        lVar5 = local_50[0];
        if (local_50[0] != 0) {
          LOCK();
          plVar1 = (long *)(local_50[0] + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_50[0] = 0;
            Memory::free_static((void *)(lVar5 + -0x10),false);
          }
        }
        puVar7 = (undefined8 *)puVar7[2];
      } while (puVar7 != (undefined8 *)0x0);
    }
    CanvasItem::queue_redraw();
    CanvasItem::queue_redraw();
    if ((local_98 == (undefined8 *)0x0) || (*(int *)(local_98 + 2) < 1)) {
      local_60 = 0;
      local_50[0] = 0;
      local_58 = &_LC53;
      String::parse_latin1((StrRange *)&local_60);
      bVar8 = false;
    }
    else {
      local_68 = 0;
      local_50[0] = 1;
      local_58 = &_LC142;
      String::parse_latin1((StrRange *)&local_68);
      itos((long)local_78);
      operator+((char *)local_70,(String *)&_LC143);
      String::operator+((String *)&local_60,local_70);
      bVar8 = true;
    }
    local_58 = &_LC53;
    local_80 = 0;
    local_50[0] = 0;
    String::parse_latin1((StrRange *)&local_80);
    local_58 = "Commit";
    local_88 = 0;
    local_50[0] = 6;
    String::parse_latin1((StrRange *)&local_88);
    TTR((String *)&local_58,(String *)&local_88);
    String::operator+(local_90,(String *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if (bVar8) {
      CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
      CowData<char32_t>::_unref(local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    }
    Node::set_name(*(String **)(this + 0x7c0));
    CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
    List<EditorVCSInterface::StatusFile,DefaultAllocator>::~List
              ((List<EditorVCSInterface::StatusFile,DefaultAllocator> *)&local_98);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* VersionControlEditorPlugin::_load_plugin(String const&) */

undefined4 __thiscall
VersionControlEditorPlugin::_load_plugin(VersionControlEditorPlugin *this,String *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  String *pSVar5;
  long *plVar6;
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  StringName::StringName((StringName *)&local_58,param_1,false);
  lVar4 = ClassDB::instantiate((StringName *)&local_58);
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
    StringName::unref();
  }
  if (lVar4 == 0) {
    _err_print_error("_load_plugin","editor/plugins/version_control_editor_plugin.cpp",0x96,
                     "Parameter \"extension_instance\" is null.",
                     "Received a nullptr VCS extension instance during construction.",0,0);
  }
  else {
    pSVar5 = (String *)__dynamic_cast(lVar4,&Object::typeinfo,&EditorVCSInterface::typeinfo,0);
    if (pSVar5 != (String *)0x0) {
      plVar6 = (long *)OS::get_singleton();
      (**(code **)(*plVar6 + 0x2b0))((CowData<char32_t> *)&local_60,plVar6);
      uVar2 = EditorVCSInterface::initialize(pSVar5);
      if ((char)uVar2 == '\0') {
        operator+((char *)&local_58,(String *)"Could not initialize ");
        _err_print_error("_load_plugin","editor/plugins/version_control_editor_plugin.cpp",0x9d,
                         "Condition \"!vcs_plugin->initialize(res_dir)\" is true. Returning: false",
                         (StringName *)&local_58,0,0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      }
      else {
        EditorVCSInterface::set_singleton((EditorVCSInterface *)pSVar5);
        register_editor(this);
        plVar6 = EditorFileSystem::singleton;
        pcVar1 = *(code **)(*EditorFileSystem::singleton + 0x108);
        create_custom_callable_function_pointer<VersionControlEditorPlugin>
                  ((VersionControlEditorPlugin *)&local_58,(char *)this,
                   (_func_void *)"&VersionControlEditorPlugin::_refresh_stage_area");
        if (_load_plugin(String_const&)::{lambda()#1}::operator()()::sname == '\0') {
          iVar3 = __cxa_guard_acquire(&_load_plugin(String_const&)::{lambda()#1}::operator()()::
                                       sname);
          if (iVar3 != 0) {
            _scs_create((char *)&_load_plugin(String_const&)::{lambda()#1}::operator()()::sname,true
                       );
            __cxa_atexit(StringName::~StringName,
                         &_load_plugin(String_const&)::{lambda()#1}::operator()()::sname,
                         &__dso_handle);
            __cxa_guard_release(&_load_plugin(String_const&)::{lambda()#1}::operator()()::sname);
          }
        }
        (*pcVar1)(plVar6,&_load_plugin(String_const&)::{lambda()#1}::operator()()::sname,
                  (StringName *)&local_58,0);
        Callable::~Callable((Callable *)&local_58);
        _refresh_stage_area(this);
        _refresh_commit_list(this);
        _refresh_branch_list(this);
        _refresh_remote_list(this);
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      goto LAB_001070d5;
    }
    local_68 = 0;
    local_50 = 0x12;
    local_58 = "EditorVCSInterface";
    String::parse_latin1((StrRange *)&local_68);
    local_58 = "Could not cast VCS extension instance to %s.";
    local_60 = 0;
    local_50 = 0x2c;
    String::parse_latin1((StrRange *)&local_60);
    vformat<String>((StringName *)&local_58,(StrRange *)&local_60,(StrRange *)&local_68);
    _err_print_error("_load_plugin","editor/plugins/version_control_editor_plugin.cpp",0x99,
                     "Parameter \"vcs_plugin\" is null.",(StringName *)&local_58,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  }
  uVar2 = 0;
LAB_001070d5:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VersionControlEditorPlugin::_notification(int) [clone .part.0] */

void VersionControlEditorPlugin::_notification(int param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  Variant aVStack_68 [8];
  long local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ProjectSettings::get_singleton();
  StringName::StringName((StringName *)&local_60,"editor/version_control/plugin_name",false);
  ProjectSettings::get_setting_with_override((StringName *)local_58);
  Variant::operator_cast_to_String(aVStack_68);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  ProjectSettings::get_singleton();
  StringName::StringName((StringName *)&local_60,"editor/version_control/autoload_on_startup",false)
  ;
  ProjectSettings::get_setting_with_override((StringName *)local_58);
  bVar1 = Variant::operator_cast_to_bool((Variant *)local_58);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  cVar2 = String::operator!=((String *)aVStack_68,"");
  if ((bVar1) && (cVar2 != '\0')) {
    cVar2 = _load_plugin((VersionControlEditorPlugin *)CONCAT44(in_register_0000003c,param_1),
                         (String *)aVStack_68);
    if (cVar2 != '\0') {
      _set_credentials();
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)aVStack_68);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VersionControlEditorPlugin::_notification(int) */

void __thiscall
VersionControlEditorPlugin::_notification(VersionControlEditorPlugin *this,int param_1)

{
  if (param_1 != 0xd) {
    return;
  }
  _notification((int)this);
  return;
}



/* VersionControlEditorPlugin::_initialize_vcs() */

void __thiscall VersionControlEditorPlugin::_initialize_vcs(VersionControlEditorPlugin *this)

{
  char cVar1;
  long lVar2;
  StringName *pSVar3;
  long in_FS_OFFSET;
  String aSStack_68 [8];
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = EditorVCSInterface::get_singleton();
  if (lVar2 == 0) {
    OptionButton::get_selected_id();
    OptionButton::get_item_text((int)(CowData<char32_t> *)&local_60);
    cVar1 = _load_plugin(this,(String *)&local_60);
    if (cVar1 != '\0') {
      pSVar3 = (StringName *)ProjectSettings::get_singleton();
      Variant::Variant((Variant *)local_48,true);
      StringName::StringName
                ((StringName *)&local_58,"editor/version_control/autoload_on_startup",false);
      Object::set(pSVar3,(Variant *)&local_58,(bool *)local_48);
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      if (Variant::needs_deinit[local_48[0]] != '\0') {
        Variant::_clear_internal();
      }
      pSVar3 = (StringName *)ProjectSettings::get_singleton();
      Variant::Variant((Variant *)local_48,(String *)&local_60);
      StringName::StringName((StringName *)&local_58,"editor/version_control/plugin_name",false);
      Object::set(pSVar3,(Variant *)&local_58,(bool *)local_48);
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      if (Variant::needs_deinit[local_48[0]] != '\0') {
        Variant::_clear_internal();
      }
      ProjectSettings::get_singleton();
      ProjectSettings::save();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  }
  else {
    local_60 = 0;
    local_58 = " is already active.";
    local_50 = 0x13;
    String::parse_latin1((StrRange *)&local_60);
    EditorVCSInterface::get_singleton();
    EditorVCSInterface::get_vcs_name();
    String::operator+((String *)&local_58,aSStack_68);
    _err_print_error("_initialize_vcs","editor/plugins/version_control_editor_plugin.cpp",0x6d,
                     "Condition \"EditorVCSInterface::get_singleton()\" is true.",
                     (String *)&local_58,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)aSStack_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VersionControlEditorPlugin::_toggle_vcs_integration(bool) */

void __thiscall
VersionControlEditorPlugin::_toggle_vcs_integration(VersionControlEditorPlugin *this,bool param_1)

{
  long lVar1;
  
  if (param_1) {
    _initialize_vcs(this);
    return;
  }
  lVar1 = EditorVCSInterface::get_singleton();
  if (lVar1 != 0) {
    shut_down(this);
    return;
  }
  return;
}



/* VersionControlEditorPlugin::_discard_all() */

void __thiscall VersionControlEditorPlugin::_discard_all(VersionControlEditorPlugin *this)

{
  long *plVar1;
  char cVar2;
  code *pcVar3;
  long lVar4;
  int iVar5;
  long *plVar6;
  long in_FS_OFFSET;
  long local_80;
  undefined8 local_78;
  undefined1 local_70 [16];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Tree::get_root();
  plVar6 = (long *)TreeItem::get_first_child();
  if (plVar6 != (long *)0x0) {
    do {
      pcVar3 = *(code **)(*plVar6 + 0xb8);
      local_70 = (undefined1  [16])0x0;
      local_78 = 0;
      if ((_discard_all()::{lambda()#1}::operator()()::sname == '\0') &&
         (iVar5 = __cxa_guard_acquire(&_discard_all()::{lambda()#1}::operator()()::sname),
         iVar5 != 0)) {
        _scs_create((char *)&_discard_all()::{lambda()#1}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_discard_all()::{lambda()#1}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_discard_all()::{lambda()#1}::operator()()::sname);
      }
      (*pcVar3)((Variant *)local_58,plVar6,&_discard_all()::{lambda()#1}::operator()()::sname,
                &local_78);
      Variant::operator_cast_to_String((Variant *)&local_80);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[(int)local_78] != '\0') {
        Variant::_clear_internal();
      }
      pcVar3 = *(code **)(*plVar6 + 0xb8);
      local_70 = (undefined1  [16])0x0;
      local_78 = 0;
      if ((_discard_all()::{lambda()#2}::operator()()::sname == '\0') &&
         (iVar5 = __cxa_guard_acquire(&_discard_all()::{lambda()#2}::operator()()::sname),
         iVar5 != 0)) {
        _scs_create((char *)&_discard_all()::{lambda()#2}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_discard_all()::{lambda()#2}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_discard_all()::{lambda()#2}::operator()()::sname);
      }
      (*pcVar3)((Variant *)local_58,plVar6,&_discard_all()::{lambda()#2}::operator()()::sname,
                &local_78);
      iVar5 = Variant::operator_cast_to_int((Variant *)local_58);
      if (Variant::needs_deinit[local_58[0]] == '\0') {
        cVar2 = Variant::needs_deinit[(int)local_78];
      }
      else {
        Variant::_clear_internal();
        cVar2 = Variant::needs_deinit[(int)local_78];
      }
      if (cVar2 != '\0') {
        Variant::_clear_internal();
      }
      _discard_file(this,(Variant *)&local_80,iVar5);
      plVar6 = (long *)TreeItem::get_next();
      lVar4 = local_80;
      if (local_80 != 0) {
        LOCK();
        plVar1 = (long *)(local_80 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_80 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
    } while (plVar6 != (long *)0x0);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  _refresh_stage_area(this);
  return;
}



/* VersionControlEditorPlugin::_move_all(Object*) */

void __thiscall
VersionControlEditorPlugin::_move_all(VersionControlEditorPlugin *this,Object *param_1)

{
  TreeItem *pTVar1;
  
  if (param_1 != (Object *)0x0) {
    param_1 = (Object *)__dynamic_cast(param_1,&Object::typeinfo,&Tree::typeinfo,0);
  }
  Tree::get_root();
  pTVar1 = (TreeItem *)TreeItem::get_first_child();
  while (pTVar1 != (TreeItem *)0x0) {
    _move_item(this,(Tree *)param_1,pTVar1);
    pTVar1 = (TreeItem *)TreeItem::get_next();
  }
  _refresh_stage_area(this);
  return;
}



/* VersionControlEditorPlugin::_item_activated(Object*) */

void __thiscall
VersionControlEditorPlugin::_item_activated(VersionControlEditorPlugin *this,Object *param_1)

{
  TreeItem *pTVar1;
  
  if (param_1 != (Object *)0x0) {
    param_1 = (Object *)__dynamic_cast(param_1,&Object::typeinfo,&Tree::typeinfo,0);
  }
  pTVar1 = (TreeItem *)Tree::get_selected();
  _move_item(this,(Tree *)param_1,pTVar1);
  _refresh_stage_area(this);
  return;
}



/* VersionControlEditorPlugin::_cell_button_pressed(Object*, int, int, int) */

void VersionControlEditorPlugin::_cell_button_pressed
               (Object *param_1,int param_2,int param_3,int param_4)

{
  code *pcVar1;
  Object *pOVar2;
  char cVar3;
  int iVar4;
  long *plVar5;
  bool bVar6;
  undefined4 in_register_00000034;
  long in_FS_OFFSET;
  long local_90;
  Object *local_88;
  long local_80;
  undefined8 local_78;
  undefined1 local_70 [16];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (CONCAT44(in_register_00000034,param_2) == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  plVar5 = (long *)__dynamic_cast(CONCAT44(in_register_00000034,param_2),&Object::typeinfo,
                                  &TreeItem::typeinfo,0);
  pcVar1 = *(code **)(*plVar5 + 0xb8);
  local_70 = (undefined1  [16])0x0;
  local_78 = 0;
  if ((_cell_button_pressed(Object*,int,int,int)::{lambda()#1}::operator()()::sname == '\0') &&
     (iVar4 = __cxa_guard_acquire(&_cell_button_pressed(Object*,int,int,int)::{lambda()#1}::
                                   operator()()::sname), iVar4 != 0)) {
    _scs_create((char *)&_cell_button_pressed(Object*,int,int,int)::{lambda()#1}::operator()()::
                         sname,true);
    __cxa_atexit(StringName::~StringName,
                 &_cell_button_pressed(Object*,int,int,int)::{lambda()#1}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_cell_button_pressed(Object*,int,int,int)::{lambda()#1}::operator()()::
                         sname);
  }
  (*pcVar1)((Variant *)local_58,plVar5,
            &_cell_button_pressed(Object*,int,int,int)::{lambda()#1}::operator()()::sname,&local_78)
  ;
  Variant::operator_cast_to_String((Variant *)&local_90);
  if (Variant::needs_deinit[local_58[0]] == '\0') {
    cVar3 = Variant::needs_deinit[(int)local_78];
  }
  else {
    Variant::_clear_internal();
    cVar3 = Variant::needs_deinit[(int)local_78];
  }
  if (cVar3 != '\0') {
    Variant::_clear_internal();
  }
  pcVar1 = *(code **)(*plVar5 + 0xb8);
  local_70 = (undefined1  [16])0x0;
  local_78 = 0;
  if ((_cell_button_pressed(Object*,int,int,int)::{lambda()#2}::operator()()::sname == '\0') &&
     (iVar4 = __cxa_guard_acquire(&_cell_button_pressed(Object*,int,int,int)::{lambda()#2}::
                                   operator()()::sname), iVar4 != 0)) {
    _scs_create((char *)&_cell_button_pressed(Object*,int,int,int)::{lambda()#2}::operator()()::
                         sname,true);
    __cxa_atexit(StringName::~StringName,
                 &_cell_button_pressed(Object*,int,int,int)::{lambda()#2}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_cell_button_pressed(Object*,int,int,int)::{lambda()#2}::operator()()::
                         sname);
  }
  (*pcVar1)((Variant *)local_58,plVar5,
            &_cell_button_pressed(Object*,int,int,int)::{lambda()#2}::operator()()::sname,&local_78)
  ;
  iVar4 = Variant::operator_cast_to_int((Variant *)local_58);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  if ((param_4 == 0) && (iVar4 != 3)) {
    DirAccess::create(&local_88,0);
    pOVar2 = local_88;
    pcVar1 = *(code **)(*(long *)local_88 + 0x1d0);
    local_80 = 0;
    if (local_90 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_80,(CowData *)&local_90);
    }
    cVar3 = (*pcVar1)(pOVar2);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    if (cVar3 != '\0') {
      operator+((char *)&local_80,(String *)"res://");
      if (local_90 != local_80) {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
        local_90 = local_80;
        local_80 = 0;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      ResourceLoader::get_resource_type((String *)&local_80);
      cVar3 = String::operator==((String *)&local_80,"PackedScene");
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      bVar6 = SUB81((Variant *)&local_90,0);
      if (cVar3 == '\0') {
        cVar3 = String::ends_with((char *)&local_90);
        if (cVar3 == '\0') {
          FileSystemDock::navigate_to_path(FileSystemDock::singleton);
        }
        else {
          EditorNode::load_resource(EditorNode::singleton,bVar6);
          ScriptEditor::reload_scripts(SUB81(ScriptEditor::script_editor,0));
        }
      }
      else {
        EditorNode::open_request(EditorNode::singleton,bVar6);
      }
    }
    if (((local_88 != (Object *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) &&
       (cVar3 = predelete_handler(local_88), cVar3 != '\0')) {
      (**(code **)(*(long *)local_88 + 0x140))(local_88);
      Memory::free_static(local_88,false);
    }
  }
  else if (param_4 == 1) {
    _discard_file((VersionControlEditorPlugin *)param_1,(Variant *)&local_90,iVar4);
    _refresh_stage_area((VersionControlEditorPlugin *)param_1);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VersionControlEditorPlugin::VersionControlEditorPlugin() */

void __thiscall
VersionControlEditorPlugin::VersionControlEditorPlugin(VersionControlEditorPlugin *this)

{
  long lVar1;
  HashMap<EditorVCSInterface::ChangeType,String,HashMapHasherDefault,HashMapComparatorDefault<EditorVCSInterface::ChangeType>,DefaultTypedAllocator<HashMapElement<EditorVCSInterface::ChangeType,String>>>
  *this_00;
  HashMap<EditorVCSInterface::ChangeType,Color,HashMapHasherDefault,HashMapComparatorDefault<EditorVCSInterface::ChangeType>,DefaultTypedAllocator<HashMapElement<EditorVCSInterface::ChangeType,Color>>>
  *this_01;
  HashMap<EditorVCSInterface::ChangeType,Ref<Texture>,HashMapHasherDefault,HashMapComparatorDefault<EditorVCSInterface::ChangeType>,DefaultTypedAllocator<HashMapElement<EditorVCSInterface::ChangeType,Ref<Texture>>>>
  *this_02;
  Vector2i *pVVar2;
  code *pcVar3;
  Ref *pRVar4;
  StringName *pSVar5;
  Vector2 *pVVar6;
  Object *pOVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  PopupMenu *pPVar11;
  ConfirmationDialog *this_03;
  undefined8 uVar12;
  BoxContainer *pBVar13;
  BoxContainer *pBVar14;
  Label *pLVar15;
  OptionButton *pOVar16;
  AcceptDialog *pAVar17;
  CheckButton *this_04;
  CallableCustom *pCVar18;
  HSeparator *pHVar19;
  LineEdit *pLVar20;
  long *plVar21;
  FileDialog *pFVar22;
  Button *pBVar23;
  Tree *pTVar24;
  TextEdit *this_05;
  FlowContainer *this_06;
  MenuButton *this_07;
  String *pSVar25;
  CowData<char32_t> *pCVar26;
  undefined1 (*pauVar27) [16];
  Ref<Texture> *pRVar28;
  RichTextLabel *this_08;
  long in_FS_OFFSET;
  float fVar29;
  undefined1 auVar30 [16];
  CowData<char32_t> *local_d0;
  undefined4 local_9c;
  CowData<char32_t> local_98 [8];
  Object *local_90;
  Ref *local_88 [2];
  long *local_78 [3];
  undefined8 local_60;
  undefined8 local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  EditorPlugin::EditorPlugin((EditorPlugin *)this);
  *(undefined ***)this = &PTR__initialize_classv_00120010;
  uVar12 = _LC166;
  *(undefined1 (*) [16])(this + 0x660) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x758) = uVar12;
  *(undefined8 *)(this + 0x788) = uVar12;
  *(undefined8 *)(this + 0x7b8) = uVar12;
  *(undefined1 (*) [16])(this + 0x670) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x680) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x690) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x6a0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x6b0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x6c0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x6d0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x6e0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x6f0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x700) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x710) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x720) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x738) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x748) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x768) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x778) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x798) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x7a8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x7c0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 2000) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x7e0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x7f0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x800) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x810) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x820) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x830) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x840) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x8a0) = 0;
  this[0x8a8] = (VersionControlEditorPlugin)0x0;
  *(undefined8 *)(this + 0x8b0) = 0;
  *(undefined1 (*) [16])(this + 0x850) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x860) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x870) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x880) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x890) = (undefined1  [16])0x0;
  singleton = this;
  pPVar11 = (PopupMenu *)operator_new(0xfe0,"");
  PopupMenu::PopupMenu(pPVar11);
  postinitialize_handler((Object *)pPVar11);
  *(PopupMenu **)(this + 0x668) = pPVar11;
  this_03 = (ConfirmationDialog *)operator_new(0xdb8,"");
  ConfirmationDialog::ConfirmationDialog(this_03);
  postinitialize_handler((Object *)this_03);
  *(ConfirmationDialog **)(this + 0x670) = this_03;
  local_78[0] = (long *)0x0;
  String::parse_latin1((String *)local_78,"");
  local_88[0] = (Ref *)0x0;
  String::parse_latin1((String *)local_88,"Create Version Control Metadata");
  TTR((String *)&local_90,(String *)local_88);
  Window::set_title((String *)this_03);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  pVVar2 = *(Vector2i **)(this + 0x670);
  local_60 = _LC168;
  local_58[0] = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_60);
  Window::set_min_size(pVVar2);
  plVar21 = *(long **)(*(long *)(this + 0x670) + 0xd88);
  pcVar3 = *(code **)(*plVar21 + 0x108);
  create_custom_callable_function_pointer<VersionControlEditorPlugin>
            ((VersionControlEditorPlugin *)local_78,(char *)this,
             (_func_void *)"&VersionControlEditorPlugin::_create_vcs_metadata_files");
  (*pcVar3)(plVar21,SceneStringNames::singleton + 0x238,(String *)local_78,0);
  Callable::~Callable((Callable *)local_78);
  uVar12 = EditorInterface::get_base_control();
  Node::add_child(uVar12,*(undefined8 *)(this + 0x670),0,0);
  pBVar13 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar13,true);
  pBVar13[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar13 = &PTR__initialize_classv_0011f920;
  postinitialize_handler((Object *)pBVar13);
  Node::add_child(*(undefined8 *)(this + 0x670),pBVar13,0,0);
  pBVar14 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar14,false);
  pBVar14[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar14 = &PTR__initialize_classv_0011f5a8;
  postinitialize_handler((Object *)pBVar14);
  local_58[0] = _LC170;
  Control::set_custom_minimum_size((Vector2 *)pBVar14);
  Node::add_child(pBVar13,pBVar14,0,0);
  pLVar15 = (Label *)operator_new(0xad8,"");
  local_78[0] = (long *)0x0;
  Label::Label(pLVar15,(String *)local_78);
  postinitialize_handler((Object *)pLVar15);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  local_78[0] = (long *)0x0;
  String::parse_latin1((String *)local_78,"");
  local_88[0] = (Ref *)0x0;
  String::parse_latin1((String *)local_88,"Create VCS metadata files for:");
  TTR((String *)&local_90,(String *)local_88);
  Label::set_text((String *)pLVar15);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  Node::add_child(pBVar14,pLVar15,0,0);
  pOVar16 = (OptionButton *)operator_new(0xd00,"");
  local_78[0] = (long *)0x0;
  OptionButton::OptionButton(pOVar16,(String *)local_78);
  postinitialize_handler((Object *)pOVar16);
  *(OptionButton **)(this + 0x678) = pOVar16;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  local_58[0] = _LC92;
  Control::set_custom_minimum_size(*(Vector2 **)(this + 0x678));
  pSVar25 = *(String **)(this + 0x678);
  local_78[0] = (long *)0x0;
  String::parse_latin1((String *)local_78,"None");
  iVar9 = (int)(String *)local_78;
  OptionButton::add_item(pSVar25,iVar9);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  pSVar25 = *(String **)(this + 0x678);
  local_78[0] = (long *)0x0;
  String::parse_latin1((String *)local_78,"Git");
  OptionButton::add_item(pSVar25,iVar9);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  OptionButton::select((int)*(undefined8 *)(this + 0x678));
  Node::add_child(pBVar14,*(undefined8 *)(this + 0x678),0,0);
  pLVar15 = (Label *)operator_new(0xad8,"");
  local_78[0] = (long *)0x0;
  Label::Label(pLVar15,(String *)local_78);
  postinitialize_handler((Object *)pLVar15);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  local_78[0] = (long *)0x0;
  String::parse_latin1((String *)local_78,"");
  local_88[0] = (Ref *)0x0;
  String::parse_latin1((String *)local_88,"Existing VCS metadata files will be overwritten.");
  TTR((String *)&local_90,(String *)local_88);
  Label::set_text((String *)pLVar15);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  Node::add_child(pBVar13,pLVar15,0,0);
  pAVar17 = (AcceptDialog *)operator_new(0xdb0,"");
  AcceptDialog::AcceptDialog(pAVar17);
  postinitialize_handler((Object *)pAVar17);
  *(AcceptDialog **)(this + 0x680) = pAVar17;
  local_78[0] = (long *)0x0;
  String::parse_latin1((String *)local_78,"");
  local_88[0] = (Ref *)0x0;
  String::parse_latin1((String *)local_88,"Local Settings");
  TTR((String *)&local_90,(String *)local_88);
  Window::set_title((String *)pAVar17);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  pVVar2 = *(Vector2i **)(this + 0x680);
  local_60 = _LC177;
  local_58[0] = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_60);
  Window::set_min_size(pVVar2);
  pSVar25 = *(String **)(this + 0x680);
  local_78[0] = (long *)0x0;
  String::parse_latin1((String *)local_78,"Cancel");
  AcceptDialog::add_cancel_button(pSVar25);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  AcceptDialog::set_hide_on_ok(SUB81(*(undefined8 *)(this + 0x680),0));
  uVar12 = EditorInterface::get_base_control();
  Node::add_child(uVar12,*(undefined8 *)(this + 0x680),0,0);
  pSVar25 = *(String **)(*(long *)(this + 0x680) + 0xd88);
  local_78[0] = (long *)0x0;
  String::parse_latin1((String *)local_78,"");
  local_88[0] = (Ref *)0x0;
  String::parse_latin1((String *)local_88,"Apply");
  TTR((String *)&local_90,(String *)local_88);
  Button::set_text(pSVar25);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  pcVar3 = *(code **)(*(long *)pSVar25 + 0x108);
  create_custom_callable_function_pointer<VersionControlEditorPlugin>
            ((VersionControlEditorPlugin *)local_78,(char *)this,
             (_func_void *)"&VersionControlEditorPlugin::_set_credentials");
  (*pcVar3)(pSVar25,SceneStringNames::singleton + 0x238,(String *)local_78,0);
  Callable::~Callable((Callable *)local_78);
  pBVar13 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar13,true);
  pBVar13[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar13 = &PTR__initialize_classv_0011f920;
  postinitialize_handler((Object *)pBVar13);
  *(BoxContainer **)(this + 0x698) = pBVar13;
  BoxContainer::set_alignment(pBVar13,1);
  Node::add_child(*(undefined8 *)(this + 0x680),*(undefined8 *)(this + 0x698),0);
  pBVar13 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar13,false);
  pBVar13[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar13 = &PTR__initialize_classv_0011f5a8;
  postinitialize_handler((Object *)pBVar13);
  Control::set_h_size_flags(pBVar13,3);
  Node::add_child(*(undefined8 *)(this + 0x698),pBVar13,0);
  pLVar15 = (Label *)operator_new(0xad8,"");
  local_78[0] = (long *)0x0;
  Label::Label(pLVar15,(String *)local_78);
  postinitialize_handler((Object *)pLVar15);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  Control::set_h_size_flags(pLVar15,3);
  local_78[0] = (long *)0x0;
  String::parse_latin1((String *)local_78,"");
  local_88[0] = (Ref *)0x0;
  String::parse_latin1((String *)local_88,"VCS Provider");
  TTR((String *)&local_90,(String *)local_88);
  Label::set_text((String *)pLVar15);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  Node::add_child(pBVar13,pLVar15,0);
  pOVar16 = (OptionButton *)operator_new(0xd00,"");
  local_78[0] = (long *)0x0;
  OptionButton::OptionButton(pOVar16,(String *)local_78);
  postinitialize_handler((Object *)pOVar16);
  *(OptionButton **)(this + 0x690) = pOVar16;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  Control::set_h_size_flags(*(undefined8 *)(this + 0x690),3);
  Node::add_child(pBVar13,*(undefined8 *)(this + 0x690),0);
  pBVar13 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar13,false);
  pBVar13[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar13 = &PTR__initialize_classv_0011f5a8;
  postinitialize_handler((Object *)pBVar13);
  Control::set_h_size_flags(pBVar13,3);
  Node::add_child(*(undefined8 *)(this + 0x698),pBVar13,0);
  pLVar15 = (Label *)operator_new(0xad8,"");
  local_78[0] = (long *)0x0;
  Label::Label(pLVar15,(String *)local_78);
  postinitialize_handler((Object *)pLVar15);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  Control::set_h_size_flags(pLVar15,3);
  local_78[0] = (long *)0x0;
  String::parse_latin1((String *)local_78,"");
  local_88[0] = (Ref *)0x0;
  String::parse_latin1((String *)local_88,"Connect to VCS");
  TTR((String *)&local_90,(String *)local_88);
  Label::set_text((String *)pLVar15);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  Node::add_child(pBVar13,pLVar15,0);
  this_04 = (CheckButton *)operator_new(0xc60,"");
  local_78[0] = (long *)0x0;
  CheckButton::CheckButton(this_04,(String *)local_78);
  postinitialize_handler((Object *)this_04);
  *(CheckButton **)(this + 0x688) = this_04;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  Control::set_h_size_flags(*(undefined8 *)(this + 0x688),3);
  BaseButton::set_pressed_no_signal(SUB81(*(undefined8 *)(this + 0x688),0));
  plVar21 = *(long **)(this + 0x688);
  pcVar3 = *(code **)(*plVar21 + 0x108);
  pCVar18 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar18);
  *(VersionControlEditorPlugin **)(pCVar18 + 0x28) = this;
  *(undefined1 (*) [16])(pCVar18 + 0x30) = (undefined1  [16])0x0;
  *(undefined **)(pCVar18 + 0x20) = &_LC53;
  *(undefined8 *)(pCVar18 + 0x40) = 0;
  uVar12 = *(undefined8 *)(this + 0x60);
  *(undefined ***)pCVar18 = &PTR_hash_00120348;
  *(undefined8 *)(pCVar18 + 0x30) = uVar12;
  *(code **)(pCVar18 + 0x38) = _toggle_vcs_integration;
  *(undefined8 *)(pCVar18 + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar18,(int)pCVar18 + 0x28);
  *(char **)(pCVar18 + 0x20) = "VersionControlEditorPlugin::_toggle_vcs_integration";
  Callable::Callable((Callable *)local_78,pCVar18);
  (*pcVar3)(plVar21,SceneStringNames::singleton + 0x248,(String *)local_78,0);
  Callable::~Callable((Callable *)local_78);
  Node::add_child(pBVar13,*(undefined8 *)(this + 0x688),0,0);
  uVar12 = *(undefined8 *)(this + 0x698);
  pHVar19 = (HSeparator *)operator_new(0x9e0,"");
  HSeparator::HSeparator(pHVar19);
  postinitialize_handler((Object *)pHVar19);
  Node::add_child(uVar12,pHVar19,0,0);
  pBVar13 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar13,true);
  pBVar13[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar13 = &PTR__initialize_classv_0011f920;
  postinitialize_handler((Object *)pBVar13);
  *(BoxContainer **)(this + 0x6a0) = pBVar13;
  BoxContainer::set_alignment(pBVar13,1);
  Node::add_child(*(undefined8 *)(this + 0x698),*(undefined8 *)(this + 0x6a0),0,0);
  pLVar15 = (Label *)operator_new(0xad8,"");
  local_78[0] = (long *)0x0;
  Label::Label(pLVar15,(String *)local_78);
  postinitialize_handler((Object *)pLVar15);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  Control::set_h_size_flags(pLVar15,3);
  Label::set_horizontal_alignment(pLVar15,1);
  local_78[0] = (long *)0x0;
  String::parse_latin1((String *)local_78,"");
  local_88[0] = (Ref *)0x0;
  String::parse_latin1((String *)local_88,"Remote Login");
  TTR((String *)&local_90,(String *)local_88);
  Label::set_text((String *)pLVar15);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  Node::add_child(*(undefined8 *)(this + 0x6a0),pLVar15,0,0);
  pBVar13 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar13,false);
  pBVar13[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar13 = &PTR__initialize_classv_0011f5a8;
  postinitialize_handler((Object *)pBVar13);
  Control::set_h_size_flags(pBVar13,3);
  Node::add_child(*(undefined8 *)(this + 0x6a0),pBVar13,0,0);
  pLVar15 = (Label *)operator_new(0xad8,"");
  local_78[0] = (long *)0x0;
  Label::Label(pLVar15,(String *)local_78);
  postinitialize_handler((Object *)pLVar15);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  Control::set_h_size_flags(pLVar15,3);
  local_78[0] = (long *)0x0;
  String::parse_latin1((String *)local_78,"");
  local_88[0] = (Ref *)0x0;
  String::parse_latin1((String *)local_88,"Username");
  TTR((String *)&local_90,(String *)local_88);
  Label::set_text((String *)pLVar15);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  Node::add_child(pBVar13,pLVar15,0,0);
  pLVar20 = (LineEdit *)operator_new(0xbb0,"");
  local_78[0] = (long *)0x0;
  LineEdit::LineEdit(pLVar20,(String *)local_78);
  postinitialize_handler((Object *)pLVar20);
  *(LineEdit **)(this + 0x6a8) = pLVar20;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  Control::set_h_size_flags(*(undefined8 *)(this + 0x6a8),3);
  uVar12 = *(undefined8 *)(this + 0x6a8);
  local_78[0] = (long *)0x0;
  String::parse_latin1((String *)local_78,"version_control/username");
  _EDITOR_GET((String *)local_58);
  Variant::operator_cast_to_String((Variant *)local_88);
  LineEdit::set_text(uVar12,(String *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  plVar21 = *(long **)(this + 0x6a8);
  pcVar3 = *(code **)(*plVar21 + 0x108);
  create_custom_callable_function_pointer<VersionControlEditorPlugin,String_const&>
            ((VersionControlEditorPlugin *)local_78,(char *)this,
             (_func_void_String_ptr *)"&VersionControlEditorPlugin::_update_set_up_warning");
  (*pcVar3)(plVar21,SceneStringNames::singleton + 0x270,(String *)local_78,0);
  Callable::~Callable((Callable *)local_78);
  Node::add_child(pBVar13,*(undefined8 *)(this + 0x6a8),0,0);
  pBVar13 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar13,false);
  pBVar13[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar13 = &PTR__initialize_classv_0011f5a8;
  postinitialize_handler((Object *)pBVar13);
  Control::set_h_size_flags(pBVar13,3);
  Node::add_child(*(undefined8 *)(this + 0x6a0),pBVar13,0,0);
  pLVar15 = (Label *)operator_new(0xad8,"");
  local_78[0] = (long *)0x0;
  Label::Label(pLVar15,(String *)local_78);
  postinitialize_handler((Object *)pLVar15);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  local_78[0] = (long *)0x0;
  String::parse_latin1((String *)local_78,"");
  local_88[0] = (Ref *)0x0;
  String::parse_latin1((String *)local_88,"Password");
  TTR((String *)&local_90,(String *)local_88);
  Label::set_text((String *)pLVar15);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  Control::set_h_size_flags(pLVar15,3);
  Node::add_child(pBVar13,pLVar15,0,0);
  pLVar20 = (LineEdit *)operator_new(0xbb0,"");
  local_78[0] = (long *)0x0;
  LineEdit::LineEdit(pLVar20,(String *)local_78);
  postinitialize_handler((Object *)pLVar20);
  *(LineEdit **)(this + 0x6b0) = pLVar20;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  Control::set_h_size_flags(*(undefined8 *)(this + 0x6b0),3);
  LineEdit::set_secret(SUB81(*(undefined8 *)(this + 0x6b0),0));
  plVar21 = *(long **)(this + 0x6b0);
  pcVar3 = *(code **)(*plVar21 + 0x108);
  create_custom_callable_function_pointer<VersionControlEditorPlugin,String_const&>
            ((VersionControlEditorPlugin *)local_78,(char *)this,
             (_func_void_String_ptr *)"&VersionControlEditorPlugin::_update_set_up_warning");
  (*pcVar3)(plVar21,SceneStringNames::singleton + 0x270,(String *)local_78,0);
  Callable::~Callable((Callable *)local_78);
  Node::add_child(pBVar13,*(undefined8 *)(this + 0x6b0),0,0);
  plVar21 = (long *)OS::get_singleton();
  pcVar3 = *(code **)(*plVar21 + 0x168);
  local_88[0] = (Ref *)0x0;
  String::parse_latin1((String *)local_88,"HOME");
  cVar8 = (*pcVar3)(plVar21,(String *)local_88);
  if (cVar8 == '\0') {
    plVar21 = (long *)OS::get_singleton();
    (**(code **)(*plVar21 + 0x2b8))(local_98,plVar21,2,1);
  }
  else {
    plVar21 = (long *)OS::get_singleton();
    pcVar3 = *(code **)(*plVar21 + 0x170);
    local_78[0] = (long *)0x0;
    String::parse_latin1((String *)local_78,"HOME");
    (*pcVar3)(local_98,plVar21,(String *)local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  }
  local_d0 = local_98;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  pBVar13 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar13,false);
  pBVar13[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar13 = &PTR__initialize_classv_0011f5a8;
  postinitialize_handler((Object *)pBVar13);
  Control::set_h_size_flags(pBVar13,3);
  Node::add_child(*(undefined8 *)(this + 0x6a0),pBVar13,0,0);
  pLVar15 = (Label *)operator_new(0xad8,"");
  local_78[0] = (long *)0x0;
  Label::Label(pLVar15,(String *)local_78);
  postinitialize_handler((Object *)pLVar15);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  local_78[0] = (long *)0x0;
  String::parse_latin1((String *)local_78,"");
  local_88[0] = (Ref *)0x0;
  String::parse_latin1((String *)local_88,"SSH Public Key Path");
  TTR((String *)&local_90,(String *)local_88);
  Label::set_text((String *)pLVar15);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  Control::set_h_size_flags(pLVar15,3);
  Node::add_child(pBVar13,pLVar15,0,0);
  pBVar14 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar14,false);
  pBVar14[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar14 = &PTR__initialize_classv_0011f5a8;
  postinitialize_handler((Object *)pBVar14);
  Control::set_h_size_flags(pBVar14,3);
  Node::add_child(pBVar13,pBVar14,0,0);
  pLVar20 = (LineEdit *)operator_new(0xbb0,"");
  local_78[0] = (long *)0x0;
  LineEdit::LineEdit(pLVar20,(String *)local_78);
  postinitialize_handler((Object *)pLVar20);
  *(LineEdit **)(this + 0x6b8) = pLVar20;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  Control::set_h_size_flags(*(undefined8 *)(this + 0x6b8),3);
  uVar12 = *(undefined8 *)(this + 0x6b8);
  local_78[0] = (long *)0x0;
  String::parse_latin1((String *)local_78,"version_control/ssh_public_key_path");
  _EDITOR_GET((String *)local_58);
  Variant::operator_cast_to_String((Variant *)local_88);
  LineEdit::set_text(uVar12,(String *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  plVar21 = *(long **)(this + 0x6b8);
  pcVar3 = *(code **)(*plVar21 + 0x108);
  create_custom_callable_function_pointer<VersionControlEditorPlugin,String_const&>
            ((VersionControlEditorPlugin *)local_78,(char *)this,
             (_func_void_String_ptr *)"&VersionControlEditorPlugin::_update_set_up_warning");
  (*pcVar3)(plVar21,SceneStringNames::singleton + 0x270,(String *)local_78,0);
  Callable::~Callable((Callable *)local_78);
  Node::add_child(pBVar14,*(undefined8 *)(this + 0x6b8),0,0);
  pFVar22 = (FileDialog *)operator_new(0x1028,"");
  FileDialog::FileDialog(pFVar22);
  postinitialize_handler((Object *)pFVar22);
  *(FileDialog **)(this + 0x6d0) = pFVar22;
  FileDialog::set_access(pFVar22,2);
  FileDialog::set_file_mode(*(undefined8 *)(this + 0x6d0),0);
  FileDialog::set_show_hidden_files(SUB81(*(undefined8 *)(this + 0x6d0),0));
  FileDialog::set_current_dir(*(String **)(this + 0x6d0));
  plVar21 = *(long **)(this + 0x6d0);
  pcVar3 = *(code **)(*plVar21 + 0x108);
  create_custom_callable_function_pointer<VersionControlEditorPlugin,String_const&>
            ((VersionControlEditorPlugin *)local_78,(char *)this,
             (_func_void_String_ptr *)"&VersionControlEditorPlugin::_ssh_public_key_selected");
  if ((VersionControlEditorPlugin()::{lambda()#1}::operator()()::sname == '\0') &&
     (iVar10 = __cxa_guard_acquire(&VersionControlEditorPlugin()::{lambda()#1}::operator()()::sname)
     , iVar10 != 0)) {
    _scs_create((char *)&VersionControlEditorPlugin()::{lambda()#1}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &VersionControlEditorPlugin()::{lambda()#1}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&VersionControlEditorPlugin()::{lambda()#1}::operator()()::sname);
  }
  (*pcVar3)(plVar21,&VersionControlEditorPlugin()::{lambda()#1}::operator()()::sname,
            (String *)local_78,0);
  Callable::~Callable((Callable *)local_78);
  Node::add_child(pBVar14,*(undefined8 *)(this + 0x6d0),0,0);
  pBVar23 = (Button *)operator_new(0xc10,"");
  local_78[0] = (long *)0x0;
  Button::Button(pBVar23,(String *)local_78);
  postinitialize_handler((Object *)pBVar23);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  StringName::StringName((StringName *)local_78,"Folder",false);
  Control::get_editor_theme_icon((StringName *)local_88);
  Button::set_button_icon((Ref *)pBVar23);
  Ref<Texture2D>::unref((Ref<Texture2D> *)local_88);
  if ((StringName::configured != '\0') && (local_78[0] != (long *)0x0)) {
    StringName::unref();
  }
  pcVar3 = *(code **)(*(long *)pBVar23 + 0x108);
  create_custom_callable_function_pointer<VersionControlEditorPlugin,Variant_const&>
            ((VersionControlEditorPlugin *)local_78,(char *)this,
             (_func_void_Variant_ptr *)"&VersionControlEditorPlugin::_popup_file_dialog");
  Callable::bind<FileDialog*>((FileDialog *)local_88);
  (*pcVar3)(pBVar23,SceneStringNames::singleton + 0x238,(String *)local_88,0);
  Callable::~Callable((Callable *)local_88);
  Callable::~Callable((Callable *)local_78);
  local_78[0] = (long *)0x0;
  String::parse_latin1((String *)local_78,"");
  local_88[0] = (Ref *)0x0;
  String::parse_latin1((String *)local_88,"Select SSH public key path");
  TTR((String *)&local_90,(String *)local_88);
  Control::set_tooltip_text((String *)pBVar23);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  Node::add_child(pBVar14,pBVar23,0,0);
  pBVar13 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar13,false);
  pBVar13[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar13 = &PTR__initialize_classv_0011f5a8;
  postinitialize_handler((Object *)pBVar13);
  Control::set_h_size_flags(pBVar13,3);
  Node::add_child(*(undefined8 *)(this + 0x6a0),pBVar13,0,0);
  pLVar15 = (Label *)operator_new(0xad8,"");
  local_78[0] = (long *)0x0;
  Label::Label(pLVar15,(String *)local_78);
  postinitialize_handler((Object *)pLVar15);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  local_78[0] = (long *)0x0;
  String::parse_latin1((String *)local_78,"");
  local_88[0] = (Ref *)0x0;
  String::parse_latin1((String *)local_88,"SSH Private Key Path");
  TTR((String *)&local_90,(String *)local_88);
  Label::set_text((String *)pLVar15);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  Control::set_h_size_flags(pLVar15,3);
  Node::add_child(pBVar13,pLVar15,0,0);
  pBVar14 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar14,false);
  pBVar14[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar14 = &PTR__initialize_classv_0011f5a8;
  postinitialize_handler((Object *)pBVar14);
  Control::set_h_size_flags(pBVar14,3);
  Node::add_child(pBVar13,pBVar14,0,0);
  pLVar20 = (LineEdit *)operator_new(0xbb0,"");
  local_78[0] = (long *)0x0;
  LineEdit::LineEdit(pLVar20,(String *)local_78);
  postinitialize_handler((Object *)pLVar20);
  *(LineEdit **)(this + 0x6c0) = pLVar20;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  Control::set_h_size_flags(*(undefined8 *)(this + 0x6c0),3);
  uVar12 = *(undefined8 *)(this + 0x6c0);
  local_78[0] = (long *)0x0;
  String::parse_latin1((String *)local_78,"version_control/ssh_private_key_path");
  _EDITOR_GET((String *)local_58);
  Variant::operator_cast_to_String((Variant *)local_88);
  LineEdit::set_text(uVar12,(String *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  plVar21 = *(long **)(this + 0x6c0);
  pcVar3 = *(code **)(*plVar21 + 0x108);
  create_custom_callable_function_pointer<VersionControlEditorPlugin,String_const&>
            ((VersionControlEditorPlugin *)local_78,(char *)this,
             (_func_void_String_ptr *)"&VersionControlEditorPlugin::_update_set_up_warning");
  (*pcVar3)(plVar21,SceneStringNames::singleton + 0x270,(String *)local_78,0);
  Callable::~Callable((Callable *)local_78);
  Node::add_child(pBVar14,*(undefined8 *)(this + 0x6c0),0,0);
  pFVar22 = (FileDialog *)operator_new(0x1028,"");
  FileDialog::FileDialog(pFVar22);
  postinitialize_handler((Object *)pFVar22);
  *(FileDialog **)(this + 0x6d8) = pFVar22;
  FileDialog::set_access(pFVar22,2);
  FileDialog::set_file_mode(*(undefined8 *)(this + 0x6d8),0);
  FileDialog::set_show_hidden_files(SUB81(*(undefined8 *)(this + 0x6d8),0));
  FileDialog::set_current_dir(*(String **)(this + 0x6d8));
  plVar21 = *(long **)(this + 0x6d8);
  pcVar3 = *(code **)(*plVar21 + 0x108);
  create_custom_callable_function_pointer<VersionControlEditorPlugin,String_const&>
            ((VersionControlEditorPlugin *)local_78,(char *)this,
             (_func_void_String_ptr *)"&VersionControlEditorPlugin::_ssh_private_key_selected");
  StringName::StringName((StringName *)local_88,"file_selected",false);
  (*pcVar3)(plVar21,(String *)local_88,(String *)local_78,0);
  if ((StringName::configured != '\0') && (local_88[0] != (Ref *)0x0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_78);
  Node::add_child(pBVar14,*(undefined8 *)(this + 0x6d8),0,0);
  pBVar23 = (Button *)operator_new(0xc10,"");
  local_78[0] = (long *)0x0;
  Button::Button(pBVar23,(String *)local_78);
  postinitialize_handler((Object *)pBVar23);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  StringName::StringName((StringName *)local_78,"Folder",false);
  Control::get_editor_theme_icon((StringName *)local_88);
  Button::set_button_icon((Ref *)pBVar23);
  Ref<Texture2D>::unref((Ref<Texture2D> *)local_88);
  if ((StringName::configured != '\0') && (local_78[0] != (long *)0x0)) {
    StringName::unref();
  }
  pcVar3 = *(code **)(*(long *)pBVar23 + 0x108);
  create_custom_callable_function_pointer<VersionControlEditorPlugin,Variant_const&>
            ((VersionControlEditorPlugin *)local_78,(char *)this,
             (_func_void_Variant_ptr *)"&VersionControlEditorPlugin::_popup_file_dialog");
  Callable::bind<FileDialog*>((FileDialog *)local_88);
  (*pcVar3)(pBVar23,SceneStringNames::singleton + 0x238,(String *)local_88,0);
  Callable::~Callable((Callable *)local_88);
  Callable::~Callable((Callable *)local_78);
  local_78[0] = (long *)0x0;
  String::parse_latin1((String *)local_78,"");
  local_88[0] = (Ref *)0x0;
  String::parse_latin1((String *)local_88,"Select SSH private key path");
  TTR((String *)&local_90,(String *)local_88);
  Control::set_tooltip_text((String *)pBVar23);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  Node::add_child(pBVar14,pBVar23,0,0);
  pBVar13 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar13,false);
  pBVar13[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar13 = &PTR__initialize_classv_0011f5a8;
  postinitialize_handler((Object *)pBVar13);
  Control::set_h_size_flags(pBVar13,3);
  Node::add_child(*(undefined8 *)(this + 0x6a0),pBVar13,0,0);
  pLVar15 = (Label *)operator_new(0xad8,"");
  local_78[0] = (long *)0x0;
  Label::Label(pLVar15,(String *)local_78);
  postinitialize_handler((Object *)pLVar15);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  local_78[0] = (long *)0x0;
  String::parse_latin1((String *)local_78,"");
  local_88[0] = (Ref *)0x0;
  String::parse_latin1((String *)local_88,"SSH Passphrase");
  TTR((String *)&local_90,(String *)local_88);
  Label::set_text((String *)pLVar15);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  Control::set_h_size_flags(pLVar15,3);
  Node::add_child(pBVar13,pLVar15,0,0);
  pLVar20 = (LineEdit *)operator_new(0xbb0,"");
  local_78[0] = (long *)0x0;
  LineEdit::LineEdit(pLVar20,(String *)local_78);
  postinitialize_handler((Object *)pLVar20);
  *(LineEdit **)(this + 0x6c8) = pLVar20;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  Control::set_h_size_flags(*(undefined8 *)(this + 0x6c8),3);
  LineEdit::set_secret(SUB81(*(undefined8 *)(this + 0x6c8),0));
  plVar21 = *(long **)(this + 0x6c8);
  pcVar3 = *(code **)(*plVar21 + 0x108);
  create_custom_callable_function_pointer<VersionControlEditorPlugin,String_const&>
            ((VersionControlEditorPlugin *)local_78,(char *)this,
             (_func_void_String_ptr *)"&VersionControlEditorPlugin::_update_set_up_warning");
  (*pcVar3)(plVar21,SceneStringNames::singleton + 0x270,(String *)local_78,0);
  Callable::~Callable((Callable *)local_78);
  Node::add_child(pBVar13,*(undefined8 *)(this + 0x6c8),0,0);
  pLVar15 = (Label *)operator_new(0xad8,"");
  local_78[0] = (long *)0x0;
  Label::Label(pLVar15,(String *)local_78);
  postinitialize_handler((Object *)pLVar15);
  *(Label **)(this + 0x6e0) = pLVar15;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  Label::set_horizontal_alignment(*(undefined8 *)(this + 0x6e0),1);
  Control::set_h_size_flags(*(undefined8 *)(this + 0x6e0),3);
  Node::add_child(*(undefined8 *)(this + 0x6a0),*(undefined8 *)(this + 0x6e0),0,0);
  pBVar13 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar13,true);
  *(undefined ***)pBVar13 = &PTR__initialize_classv_0011f920;
  pBVar13[0xa0c] = (BoxContainer)0x1;
  postinitialize_handler((Object *)pBVar13);
  *(BoxContainer **)(this + 0x7c0) = pBVar13;
  CanvasItem::set_visible(SUB81(pBVar13,0));
  pSVar25 = *(String **)(this + 0x7c0);
  local_78[0] = (long *)0x0;
  String::parse_latin1((String *)local_78,"");
  local_88[0] = (Ref *)0x0;
  String::parse_latin1((String *)local_88,"Commit");
  TTR((String *)&local_90,(String *)local_88);
  Node::set_name(pSVar25);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  pBVar13 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar13,true);
  *(undefined ***)pBVar13 = &PTR__initialize_classv_0011f920;
  pBVar13[0xa0c] = (BoxContainer)0x1;
  postinitialize_handler((Object *)pBVar13);
  Control::set_v_size_flags(pBVar13,3);
  Control::set_h_size_flags(pBVar13,3);
  Node::add_child(*(undefined8 *)(this + 0x7c0),pBVar13,0,0);
  pBVar14 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar14,false);
  pBVar14[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar14 = &PTR__initialize_classv_0011f5a8;
  postinitialize_handler((Object *)pBVar14);
  Node::add_child(pBVar13,pBVar14,0,0);
  pLVar15 = (Label *)operator_new(0xad8,"");
  local_78[0] = (long *)0x0;
  Label::Label(pLVar15,(String *)local_78);
  postinitialize_handler((Object *)pLVar15);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  local_78[0] = (long *)0x0;
  String::parse_latin1((String *)local_78,"");
  local_88[0] = (Ref *)0x0;
  String::parse_latin1((String *)local_88,"Unstaged Changes");
  TTR((String *)&local_90,(String *)local_88);
  Label::set_text((String *)pLVar15);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  Control::set_h_size_flags(pLVar15,3);
  Node::add_child(pBVar14,pLVar15,0,0);
  pBVar23 = (Button *)operator_new(0xc10,"");
  local_78[0] = (long *)0x0;
  Button::Button(pBVar23,(String *)local_78);
  postinitialize_handler((Object *)pBVar23);
  *(Button **)(this + 0x868) = pBVar23;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  pSVar25 = *(String **)(this + 0x868);
  local_78[0] = (long *)0x0;
  String::parse_latin1((String *)local_78,"");
  local_88[0] = (Ref *)0x0;
  String::parse_latin1((String *)local_88,"Detect new changes");
  TTR((String *)&local_90,(String *)local_88);
  Control::set_tooltip_text(pSVar25);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  Control::set_theme_type_variation(*(StringName **)(this + 0x868));
  local_78[0] = (long *)0x0;
  pRVar4 = *(Ref **)(this + 0x868);
  Ref<Theme>::operator=((Ref<Theme> *)local_78,*(Ref **)(EditorNode::singleton + 0x838));
  plVar21 = local_78[0];
  pcVar3 = *(code **)(*local_78[0] + 0x1c8);
  lVar1 = EditorStringNames::singleton + 0x10;
  if ((VersionControlEditorPlugin()::{lambda()#2}::operator()()::sname == '\0') &&
     (iVar10 = __cxa_guard_acquire(&VersionControlEditorPlugin()::{lambda()#2}::operator()()::sname)
     , iVar10 != 0)) {
    _scs_create((char *)&VersionControlEditorPlugin()::{lambda()#2}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &VersionControlEditorPlugin()::{lambda()#2}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&VersionControlEditorPlugin()::{lambda()#2}::operator()()::sname);
  }
  (*pcVar3)((String *)local_88,plVar21,
            &VersionControlEditorPlugin()::{lambda()#2}::operator()()::sname,lVar1);
  Button::set_button_icon(pRVar4);
  Ref<Texture2D>::unref((Ref<Texture2D> *)local_88);
  Ref<Theme>::unref((Ref<Theme> *)local_78);
  plVar21 = *(long **)(this + 0x868);
  pcVar3 = *(code **)(*plVar21 + 0x108);
  create_custom_callable_function_pointer<VersionControlEditorPlugin>
            ((VersionControlEditorPlugin *)local_78,(char *)this,
             (_func_void *)"&VersionControlEditorPlugin::_refresh_stage_area");
  (*pcVar3)(plVar21,SceneStringNames::singleton + 0x238,(String *)local_78,0);
  Callable::~Callable((Callable *)local_78);
  plVar21 = *(long **)(this + 0x868);
  pcVar3 = *(code **)(*plVar21 + 0x108);
  create_custom_callable_function_pointer<VersionControlEditorPlugin>
            ((VersionControlEditorPlugin *)local_78,(char *)this,
             (_func_void *)"&VersionControlEditorPlugin::_refresh_commit_list");
  (*pcVar3)(plVar21,SceneStringNames::singleton + 0x238,(String *)local_78,0);
  Callable::~Callable((Callable *)local_78);
  plVar21 = *(long **)(this + 0x868);
  pcVar3 = *(code **)(*plVar21 + 0x108);
  create_custom_callable_function_pointer<VersionControlEditorPlugin>
            ((VersionControlEditorPlugin *)local_78,(char *)this,
             (_func_void *)"&VersionControlEditorPlugin::_refresh_branch_list");
  (*pcVar3)(plVar21,SceneStringNames::singleton + 0x238,(String *)local_78,0);
  Callable::~Callable((Callable *)local_78);
  plVar21 = *(long **)(this + 0x868);
  pcVar3 = *(code **)(*plVar21 + 0x108);
  create_custom_callable_function_pointer<VersionControlEditorPlugin>
            ((VersionControlEditorPlugin *)local_78,(char *)this,
             (_func_void *)"&VersionControlEditorPlugin::_refresh_remote_list");
  (*pcVar3)(plVar21,SceneStringNames::singleton + 0x238,(String *)local_78,0);
  Callable::~Callable((Callable *)local_78);
  Node::add_child(pBVar14,*(undefined8 *)(this + 0x868),0,0);
  pAVar17 = (AcceptDialog *)operator_new(0xdb0,"");
  AcceptDialog::AcceptDialog(pAVar17);
  postinitialize_handler((Object *)pAVar17);
  *(AcceptDialog **)(this + 0x6e8) = pAVar17;
  local_78[0] = (long *)0x0;
  String::parse_latin1((String *)local_78,"");
  local_88[0] = (Ref *)0x0;
  String::parse_latin1((String *)local_88,"Discard all changes");
  TTR((String *)&local_90,(String *)local_88);
  Window::set_title((String *)pAVar17);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  local_58[0] = _LC206;
  Window::set_min_size(*(Vector2i **)(this + 0x6e8));
  uVar12 = *(undefined8 *)(this + 0x6e8);
  local_78[0] = (long *)0x0;
  String::parse_latin1((String *)local_78,"");
  local_88[0] = (Ref *)0x0;
  String::parse_latin1
            ((String *)local_88,
             "This operation is IRREVERSIBLE. Your changes will be deleted FOREVER.");
  TTR((String *)&local_90,(String *)local_88);
  AcceptDialog::set_text(uVar12,(String *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  AcceptDialog::set_hide_on_ok(SUB81(*(undefined8 *)(this + 0x6e8),0));
  uVar12 = *(undefined8 *)(this + 0x6e8);
  local_78[0] = (long *)0x0;
  String::parse_latin1((String *)local_78,"");
  local_88[0] = (Ref *)0x0;
  String::parse_latin1((String *)local_88,"Permanentally delete my changes");
  TTR((String *)&local_90,(String *)local_88);
  AcceptDialog::set_ok_button_text(uVar12,(String *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  pSVar25 = *(String **)(this + 0x6e8);
  local_78[0] = (long *)0x0;
  String::parse_latin1((String *)local_78,"");
  AcceptDialog::add_cancel_button(pSVar25);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  Node::add_child(*(undefined8 *)(this + 0x7c0),*(undefined8 *)(this + 0x6e8),0,0);
  plVar21 = *(long **)(*(long *)(this + 0x6e8) + 0xd88);
  pcVar3 = *(code **)(*plVar21 + 0x108);
  create_custom_callable_function_pointer<VersionControlEditorPlugin>
            ((VersionControlEditorPlugin *)local_78,(char *)this,
             (_func_void *)"&VersionControlEditorPlugin::_discard_all");
  (*pcVar3)(plVar21,SceneStringNames::singleton + 0x238,(String *)local_78,0);
  Callable::~Callable((Callable *)local_78);
  pBVar23 = (Button *)operator_new(0xc10,"");
  local_78[0] = (long *)0x0;
  Button::Button(pBVar23,(String *)local_78);
  postinitialize_handler((Object *)pBVar23);
  *(Button **)(this + 0x860) = pBVar23;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  pSVar25 = *(String **)(this + 0x860);
  local_78[0] = (long *)0x0;
  String::parse_latin1((String *)local_78,"");
  local_88[0] = (Ref *)0x0;
  String::parse_latin1((String *)local_88,"Discard all changes");
  TTR((String *)&local_90,(String *)local_88);
  Control::set_tooltip_text(pSVar25);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  local_78[0] = (long *)0x0;
  pRVar4 = *(Ref **)(this + 0x860);
  Ref<Theme>::operator=((Ref<Theme> *)local_78,*(Ref **)(EditorNode::singleton + 0x838));
  plVar21 = local_78[0];
  pcVar3 = *(code **)(*local_78[0] + 0x1c8);
  lVar1 = EditorStringNames::singleton + 0x10;
  if ((VersionControlEditorPlugin()::{lambda()#3}::operator()()::sname == '\0') &&
     (iVar10 = __cxa_guard_acquire(&VersionControlEditorPlugin()::{lambda()#3}::operator()()::sname)
     , iVar10 != 0)) {
    _scs_create((char *)&VersionControlEditorPlugin()::{lambda()#3}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &VersionControlEditorPlugin()::{lambda()#3}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&VersionControlEditorPlugin()::{lambda()#3}::operator()()::sname);
  }
  (*pcVar3)((String *)local_88,plVar21,
            &VersionControlEditorPlugin()::{lambda()#3}::operator()()::sname,lVar1);
  Button::set_button_icon(pRVar4);
  Ref<Texture2D>::unref((Ref<Texture2D> *)local_88);
  Ref<Theme>::unref((Ref<Theme> *)local_78);
  plVar21 = *(long **)(this + 0x860);
  pcVar3 = *(code **)(*plVar21 + 0x108);
  create_custom_callable_function_pointer<VersionControlEditorPlugin>
            ((VersionControlEditorPlugin *)local_78,(char *)this,
             (_func_void *)"&VersionControlEditorPlugin::_confirm_discard_all");
  (*pcVar3)(plVar21,SceneStringNames::singleton + 0x238,(String *)local_78,0);
  Callable::~Callable((Callable *)local_78);
  Control::set_theme_type_variation(*(StringName **)(this + 0x860));
  Node::add_child(pBVar14,*(undefined8 *)(this + 0x860),0,0);
  pBVar23 = (Button *)operator_new(0xc10,"");
  local_78[0] = (long *)0x0;
  Button::Button(pBVar23,(String *)local_78);
  postinitialize_handler((Object *)pBVar23);
  *(Button **)(this + 0x850) = pBVar23;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  Control::set_theme_type_variation(*(StringName **)(this + 0x850));
  local_78[0] = (long *)0x0;
  pRVar4 = *(Ref **)(this + 0x850);
  Ref<Theme>::operator=((Ref<Theme> *)local_78,*(Ref **)(EditorNode::singleton + 0x838));
  plVar21 = local_78[0];
  pcVar3 = *(code **)(*local_78[0] + 0x1c8);
  lVar1 = EditorStringNames::singleton + 0x10;
  if ((VersionControlEditorPlugin()::{lambda()#4}::operator()()::sname == '\0') &&
     (iVar10 = __cxa_guard_acquire(&VersionControlEditorPlugin()::{lambda()#4}::operator()()::sname)
     , iVar10 != 0)) {
    _scs_create((char *)&VersionControlEditorPlugin()::{lambda()#4}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &VersionControlEditorPlugin()::{lambda()#4}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&VersionControlEditorPlugin()::{lambda()#4}::operator()()::sname);
  }
  (*pcVar3)((String *)local_88,plVar21,
            &VersionControlEditorPlugin()::{lambda()#4}::operator()()::sname,lVar1);
  Button::set_button_icon(pRVar4);
  Ref<Texture2D>::unref((Ref<Texture2D> *)local_88);
  Ref<Theme>::unref((Ref<Theme> *)local_78);
  pSVar25 = *(String **)(this + 0x850);
  local_78[0] = (long *)0x0;
  String::parse_latin1((String *)local_78,"");
  local_88[0] = (Ref *)0x0;
  String::parse_latin1((String *)local_88,"Stage all changes");
  TTR((String *)&local_90,(String *)local_88);
  Control::set_tooltip_text(pSVar25);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  Node::add_child(pBVar14,*(undefined8 *)(this + 0x850),0,0);
  pTVar24 = (Tree *)operator_new(0xdc8,"");
  Tree::Tree(pTVar24);
  postinitialize_handler((Object *)pTVar24);
  *(Tree **)(this + 2000) = pTVar24;
  Control::set_h_size_flags(pTVar24,3);
  Control::set_v_size_flags(*(undefined8 *)(this + 2000),3);
  Tree::set_select_mode(*(undefined8 *)(this + 2000),1);
  plVar21 = *(long **)(this + 2000);
  pcVar3 = *(code **)(*plVar21 + 0x108);
  create_custom_callable_function_pointer<VersionControlEditorPlugin,Object*>
            ((VersionControlEditorPlugin *)local_78,(char *)this,
             (_func_void_Object_ptr *)"&VersionControlEditorPlugin::_load_diff");
  Callable::bind<Tree*>((Tree *)local_88);
  (*pcVar3)(plVar21,SceneStringNames::singleton + 0x260,(String *)local_88,0);
  Callable::~Callable((Callable *)local_88);
  Callable::~Callable((Callable *)local_78);
  plVar21 = *(long **)(this + 2000);
  pcVar3 = *(code **)(*plVar21 + 0x108);
  create_custom_callable_function_pointer<VersionControlEditorPlugin,Object*>
            ((VersionControlEditorPlugin *)local_78,(char *)this,
             (_func_void_Object_ptr *)"&VersionControlEditorPlugin::_item_activated");
  Callable::bind<Tree*>((Tree *)local_88);
  if ((VersionControlEditorPlugin()::{lambda()#5}::operator()()::sname == '\0') &&
     (iVar10 = __cxa_guard_acquire(&VersionControlEditorPlugin()::{lambda()#5}::operator()()::sname)
     , iVar10 != 0)) {
    _scs_create((char *)&VersionControlEditorPlugin()::{lambda()#5}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &VersionControlEditorPlugin()::{lambda()#5}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&VersionControlEditorPlugin()::{lambda()#5}::operator()()::sname);
  }
  (*pcVar3)(plVar21,&VersionControlEditorPlugin()::{lambda()#5}::operator()()::sname,
            (String *)local_88,0);
  Callable::~Callable((Callable *)local_88);
  Callable::~Callable((Callable *)local_78);
  plVar21 = *(long **)(this + 2000);
  pcVar3 = *(code **)(*plVar21 + 0x108);
  create_custom_callable_function_pointer<VersionControlEditorPlugin,Object*,int,int,int>
            ((VersionControlEditorPlugin *)local_78,(char *)this,
             (_func_void_Object_ptr_int_int_int *)
             "&VersionControlEditorPlugin::_cell_button_pressed");
  if ((VersionControlEditorPlugin()::{lambda()#6}::operator()()::sname == '\0') &&
     (iVar10 = __cxa_guard_acquire(&VersionControlEditorPlugin()::{lambda()#6}::operator()()::sname)
     , iVar10 != 0)) {
    _scs_create((char *)&VersionControlEditorPlugin()::{lambda()#6}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &VersionControlEditorPlugin()::{lambda()#6}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&VersionControlEditorPlugin()::{lambda()#6}::operator()()::sname);
  }
  (*pcVar3)(plVar21,&VersionControlEditorPlugin()::{lambda()#6}::operator()()::sname,
            (String *)local_78,0);
  Callable::~Callable((Callable *)local_78);
  Tree::create_item(*(TreeItem **)(this + 2000),0);
  Tree::set_hide_root(SUB81(*(undefined8 *)(this + 2000),0));
  Node::add_child(pBVar13,*(undefined8 *)(this + 2000),0,0);
  pBVar13 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar13,true);
  pBVar13[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar13 = &PTR__initialize_classv_0011f920;
  postinitialize_handler((Object *)pBVar13);
  Control::set_v_size_flags(pBVar13,3);
  Control::set_h_size_flags(pBVar13,3);
  Node::add_child(*(undefined8 *)(this + 0x7c0),pBVar13,0,0);
  pBVar14 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar14,false);
  pBVar14[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar14 = &PTR__initialize_classv_0011f5a8;
  postinitialize_handler((Object *)pBVar14);
  Node::add_child(pBVar13,pBVar14,0,0);
  pLVar15 = (Label *)operator_new(0xad8,"");
  local_78[0] = (long *)0x0;
  Label::Label(pLVar15,(String *)local_78);
  postinitialize_handler((Object *)pLVar15);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  local_78[0] = (long *)0x0;
  String::parse_latin1((String *)local_78,"");
  local_88[0] = (Ref *)0x0;
  String::parse_latin1((String *)local_88,"Staged Changes");
  TTR((String *)&local_90,(String *)local_88);
  Label::set_text((String *)pLVar15);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  Control::set_h_size_flags(pLVar15,3);
  Node::add_child(pBVar14,pLVar15,0,0);
  pBVar23 = (Button *)operator_new(0xc10,"");
  local_78[0] = (long *)0x0;
  Button::Button(pBVar23,(String *)local_78);
  postinitialize_handler((Object *)pBVar23);
  *(Button **)(this + 0x858) = pBVar23;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  Control::set_theme_type_variation(*(StringName **)(this + 0x858));
  local_78[0] = (long *)0x0;
  pRVar4 = *(Ref **)(this + 0x858);
  Ref<Theme>::operator=((Ref<Theme> *)local_78,*(Ref **)(EditorNode::singleton + 0x838));
  plVar21 = local_78[0];
  pcVar3 = *(code **)(*local_78[0] + 0x1c8);
  lVar1 = EditorStringNames::singleton + 0x10;
  if ((VersionControlEditorPlugin()::{lambda()#7}::operator()()::sname == '\0') &&
     (iVar10 = __cxa_guard_acquire(&VersionControlEditorPlugin()::{lambda()#7}::operator()()::sname)
     , iVar10 != 0)) {
    _scs_create((char *)&VersionControlEditorPlugin()::{lambda()#7}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &VersionControlEditorPlugin()::{lambda()#7}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&VersionControlEditorPlugin()::{lambda()#7}::operator()()::sname);
  }
  (*pcVar3)((String *)local_88,plVar21,
            &VersionControlEditorPlugin()::{lambda()#7}::operator()()::sname,lVar1);
  Button::set_button_icon(pRVar4);
  Ref<Texture2D>::unref((Ref<Texture2D> *)local_88);
  Ref<Theme>::unref((Ref<Theme> *)local_78);
  pSVar25 = *(String **)(this + 0x858);
  local_78[0] = (long *)0x0;
  String::parse_latin1((String *)local_78,"");
  local_88[0] = (Ref *)0x0;
  String::parse_latin1((String *)local_88,"Unstage all changes");
  TTR((String *)&local_90,(String *)local_88);
  Control::set_tooltip_text(pSVar25);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  Node::add_child(pBVar14,*(undefined8 *)(this + 0x858),0,0);
  pTVar24 = (Tree *)operator_new(0xdc8,"");
  Tree::Tree(pTVar24);
  postinitialize_handler((Object *)pTVar24);
  *(Tree **)(this + 0x7c8) = pTVar24;
  Control::set_h_size_flags(pTVar24,3);
  Control::set_v_size_flags(*(undefined8 *)(this + 0x7c8),3);
  Tree::set_select_mode(*(undefined8 *)(this + 0x7c8),1);
  plVar21 = *(long **)(this + 0x7c8);
  pcVar3 = *(code **)(*plVar21 + 0x108);
  create_custom_callable_function_pointer<VersionControlEditorPlugin,Object*>
            ((VersionControlEditorPlugin *)local_78,(char *)this,
             (_func_void_Object_ptr *)"&VersionControlEditorPlugin::_load_diff");
  Callable::bind<Tree*>((Tree *)local_88);
  (*pcVar3)(plVar21,SceneStringNames::singleton + 0x260,(String *)local_88,0);
  Callable::~Callable((Callable *)local_88);
  Callable::~Callable((Callable *)local_78);
  plVar21 = *(long **)(this + 0x7c8);
  pcVar3 = *(code **)(*plVar21 + 0x108);
  create_custom_callable_function_pointer<VersionControlEditorPlugin,Object*,int,int,int>
            ((VersionControlEditorPlugin *)local_78,(char *)this,
             (_func_void_Object_ptr_int_int_int *)
             "&VersionControlEditorPlugin::_cell_button_pressed");
  if ((VersionControlEditorPlugin()::{lambda()#8}::operator()()::sname == '\0') &&
     (iVar10 = __cxa_guard_acquire(&VersionControlEditorPlugin()::{lambda()#8}::operator()()::sname)
     , iVar10 != 0)) {
    _scs_create((char *)&VersionControlEditorPlugin()::{lambda()#8}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &VersionControlEditorPlugin()::{lambda()#8}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&VersionControlEditorPlugin()::{lambda()#8}::operator()()::sname);
  }
  (*pcVar3)(plVar21,&VersionControlEditorPlugin()::{lambda()#8}::operator()()::sname,
            (String *)local_78,0);
  Callable::~Callable((Callable *)local_78);
  plVar21 = *(long **)(this + 0x7c8);
  pcVar3 = *(code **)(*plVar21 + 0x108);
  create_custom_callable_function_pointer<VersionControlEditorPlugin,Object*>
            ((VersionControlEditorPlugin *)local_78,(char *)this,
             (_func_void_Object_ptr *)"&VersionControlEditorPlugin::_item_activated");
  Callable::bind<Tree*>((Tree *)local_88);
  if ((VersionControlEditorPlugin()::{lambda()#9}::operator()()::sname == '\0') &&
     (iVar10 = __cxa_guard_acquire(&VersionControlEditorPlugin()::{lambda()#9}::operator()()::sname)
     , iVar10 != 0)) {
    _scs_create((char *)&VersionControlEditorPlugin()::{lambda()#9}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &VersionControlEditorPlugin()::{lambda()#9}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&VersionControlEditorPlugin()::{lambda()#9}::operator()()::sname);
  }
  (*pcVar3)(plVar21,&VersionControlEditorPlugin()::{lambda()#9}::operator()()::sname,
            (String *)local_88,0);
  Callable::~Callable((Callable *)local_88);
  Callable::~Callable((Callable *)local_78);
  Tree::create_item(*(TreeItem **)(this + 0x7c8),0);
  Tree::set_hide_root(SUB81(*(undefined8 *)(this + 0x7c8),0));
  Node::add_child(pBVar13,*(undefined8 *)(this + 0x7c8),0,0);
  plVar21 = *(long **)(this + 0x858);
  pcVar3 = *(code **)(*plVar21 + 0x108);
  create_custom_callable_function_pointer<VersionControlEditorPlugin,Object*>
            ((VersionControlEditorPlugin *)local_78,(char *)this,
             (_func_void_Object_ptr *)"&VersionControlEditorPlugin::_move_all");
  Callable::bind<Tree*>((Tree *)local_88);
  (*pcVar3)(plVar21,SceneStringNames::singleton + 0x238,(String *)local_88,0);
  Callable::~Callable((Callable *)local_88);
  Callable::~Callable((Callable *)local_78);
  plVar21 = *(long **)(this + 0x850);
  pcVar3 = *(code **)(*plVar21 + 0x108);
  create_custom_callable_function_pointer<VersionControlEditorPlugin,Object*>
            ((VersionControlEditorPlugin *)local_78,(char *)this,
             (_func_void_Object_ptr *)"&VersionControlEditorPlugin::_move_all");
  Callable::bind<Tree*>((Tree *)local_88);
  (*pcVar3)(plVar21,SceneStringNames::singleton + 0x238,(String *)local_88,0);
  Callable::~Callable((Callable *)local_88);
  Callable::~Callable((Callable *)local_78);
  uVar12 = *(undefined8 *)(this + 0x7c0);
  pHVar19 = (HSeparator *)operator_new(0x9e0,"");
  HSeparator::HSeparator(pHVar19);
  postinitialize_handler((Object *)pHVar19);
  Node::add_child(uVar12,pHVar19,0,0);
  pBVar13 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar13,true);
  pBVar13[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar13 = &PTR__initialize_classv_0011f920;
  postinitialize_handler((Object *)pBVar13);
  Node::add_child(*(undefined8 *)(this + 0x7c0),pBVar13,0,0);
  pLVar15 = (Label *)operator_new(0xad8,"");
  local_78[0] = (long *)0x0;
  Label::Label(pLVar15,(String *)local_78);
  postinitialize_handler((Object *)pLVar15);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  local_78[0] = (long *)0x0;
  String::parse_latin1((String *)local_78,"");
  local_88[0] = (Ref *)0x0;
  String::parse_latin1((String *)local_88,"Commit Message");
  TTR((String *)&local_90,(String *)local_88);
  Label::set_text((String *)pLVar15);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  Control::set_h_size_flags(pLVar15,3);
  Node::add_child(pBVar13,pLVar15,0,0);
  this_05 = (TextEdit *)operator_new(0xeb8,"");
  local_78[0] = (long *)0x0;
  TextEdit::TextEdit(this_05,(String *)local_78);
  postinitialize_handler((Object *)this_05);
  *(TextEdit **)(this + 0x870) = this_05;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  Control::set_h_size_flags(*(undefined8 *)(this + 0x870),3);
  Control::set_h_grow_direction(*(undefined8 *)(this + 0x870),0);
  Control::set_v_grow_direction(*(undefined8 *)(this + 0x870),1);
  local_58[0] = _LC223;
  Control::set_custom_minimum_size(*(Vector2 **)(this + 0x870));
  TextEdit::set_line_wrapping_mode(*(undefined8 *)(this + 0x870),1);
  plVar21 = *(long **)(this + 0x870);
  pcVar3 = *(code **)(*plVar21 + 0x108);
  create_custom_callable_function_pointer<VersionControlEditorPlugin>
            ((VersionControlEditorPlugin *)local_78,(char *)this,
             (_func_void *)"&VersionControlEditorPlugin::_update_commit_button");
  (*pcVar3)(plVar21,SceneStringNames::singleton + 0x270,(String *)local_78,0);
  Callable::~Callable((Callable *)local_78);
  plVar21 = *(long **)(this + 0x870);
  pcVar3 = *(code **)(*plVar21 + 0x108);
  pCVar18 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar18);
  *(VersionControlEditorPlugin **)(pCVar18 + 0x28) = this;
  *(undefined1 (*) [16])(pCVar18 + 0x30) = (undefined1  [16])0x0;
  *(undefined **)(pCVar18 + 0x20) = &_LC53;
  *(undefined ***)pCVar18 = &PTR_hash_00120618;
  *(undefined8 *)(pCVar18 + 0x40) = 0;
  uVar12 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(pCVar18 + 0x10) = 0;
  *(undefined8 *)(pCVar18 + 0x30) = uVar12;
  *(code **)(pCVar18 + 0x38) = _commit_message_gui_input;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar18,(int)pCVar18 + 0x28);
  *(char **)(pCVar18 + 0x20) = "VersionControlEditorPlugin::_commit_message_gui_input";
  Callable::Callable((Callable *)local_78,pCVar18);
  (*pcVar3)(plVar21,SceneStringNames::singleton + 0x28,(String *)local_78,0);
  Callable::~Callable((Callable *)local_78);
  Node::add_child(pBVar13,*(undefined8 *)(this + 0x870),0,0);
  local_78[0] = (long *)0x0;
  String::parse_latin1((String *)local_78,"Commit");
  local_88[0] = (Ref *)0x0;
  String::parse_latin1((String *)local_88,"version_control/commit");
  ED_SHORTCUT((String *)&local_90,(String *)local_88,(String *)local_78,0x1400005,0);
  if (((local_90 != (Object *)0x0) &&
      (cVar8 = RefCounted::unreference(), pOVar7 = local_90, cVar8 != '\0')) &&
     (cVar8 = predelete_handler(local_90), cVar8 != '\0')) {
    (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
    Memory::free_static(pOVar7,false);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  pBVar23 = (Button *)operator_new(0xc10,"");
  local_78[0] = (long *)0x0;
  Button::Button(pBVar23,(String *)local_78);
  postinitialize_handler((Object *)pBVar23);
  *(Button **)(this + 0x878) = pBVar23;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  pSVar25 = *(String **)(this + 0x878);
  local_78[0] = (long *)0x0;
  String::parse_latin1((String *)local_78,"");
  local_88[0] = (Ref *)0x0;
  String::parse_latin1((String *)local_88,"Commit Changes");
  TTR((String *)&local_90,(String *)local_88);
  Button::set_text(pSVar25);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0x878),0));
  plVar21 = *(long **)(this + 0x878);
  pcVar3 = *(code **)(*plVar21 + 0x108);
  create_custom_callable_function_pointer<VersionControlEditorPlugin>
            ((VersionControlEditorPlugin *)local_78,(char *)this,
             (_func_void *)"&VersionControlEditorPlugin::_commit");
  (*pcVar3)(plVar21,SceneStringNames::singleton + 0x238,(String *)local_78,0);
  Callable::~Callable((Callable *)local_78);
  Node::add_child(pBVar13,*(undefined8 *)(this + 0x878),0,0);
  uVar12 = *(undefined8 *)(this + 0x7c0);
  pHVar19 = (HSeparator *)operator_new(0x9e0,"");
  HSeparator::HSeparator(pHVar19);
  postinitialize_handler((Object *)pHVar19);
  Node::add_child(uVar12,pHVar19,0,0);
  pBVar13 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar13,false);
  pBVar13[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar13 = &PTR__initialize_classv_0011f5a8;
  postinitialize_handler((Object *)pBVar13);
  Node::add_child(*(undefined8 *)(this + 0x7c0),pBVar13,0,0);
  pLVar15 = (Label *)operator_new(0xad8,"");
  local_78[0] = (long *)0x0;
  Label::Label(pLVar15,(String *)local_78);
  postinitialize_handler((Object *)pLVar15);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  local_78[0] = (long *)0x0;
  String::parse_latin1((String *)local_78,"");
  local_88[0] = (Ref *)0x0;
  String::parse_latin1((String *)local_88,"Commit List");
  TTR((String *)&local_90,(String *)local_88);
  Label::set_text((String *)pLVar15);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  Control::set_h_size_flags(pLVar15,3);
  Node::add_child(pBVar13,pLVar15,0,0);
  pOVar16 = (OptionButton *)operator_new(0xd00,"");
  local_78[0] = (long *)0x0;
  OptionButton::OptionButton(pOVar16,(String *)local_78);
  postinitialize_handler((Object *)pOVar16);
  *(OptionButton **)(this + 0x6f0) = pOVar16;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  pSVar25 = *(String **)(this + 0x6f0);
  local_78[0] = (long *)0x0;
  String::parse_latin1((String *)local_78,"");
  local_88[0] = (Ref *)0x0;
  String::parse_latin1((String *)local_88,"Commit list size");
  TTR((String *)&local_90,(String *)local_88);
  Control::set_tooltip_text(pSVar25);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  pSVar25 = *(String **)(this + 0x6f0);
  local_78[0] = (long *)0x0;
  String::parse_latin1((String *)local_78,"10");
  OptionButton::add_item(pSVar25,iVar9);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  uVar12 = *(undefined8 *)(this + 0x6f0);
  Variant::Variant((Variant *)local_58,10);
  OptionButton::set_item_metadata((int)uVar12,(Variant *)0x0);
  if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  pSVar25 = *(String **)(this + 0x6f0);
  local_78[0] = (long *)0x0;
  String::parse_latin1((String *)local_78,"20");
  OptionButton::add_item(pSVar25,iVar9);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  uVar12 = *(undefined8 *)(this + 0x6f0);
  Variant::Variant((Variant *)local_58,0x14);
  OptionButton::set_item_metadata((int)uVar12,(Variant *)0x1);
  if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  pSVar25 = *(String **)(this + 0x6f0);
  local_78[0] = (long *)0x0;
  String::parse_latin1((String *)local_78,"30");
  OptionButton::add_item(pSVar25,iVar9);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  uVar12 = *(undefined8 *)(this + 0x6f0);
  Variant::Variant((Variant *)local_58,0x1e);
  OptionButton::set_item_metadata((int)uVar12,(Variant *)0x2);
  if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  plVar21 = *(long **)(this + 0x6f0);
  pcVar3 = *(code **)(*plVar21 + 0x108);
  create_custom_callable_function_pointer<VersionControlEditorPlugin,int>
            ((VersionControlEditorPlugin *)local_78,(char *)this,
             (_func_void_int *)"&VersionControlEditorPlugin::_set_commit_list_size");
  (*pcVar3)(plVar21,SceneStringNames::singleton + 0x260,(String *)local_78,0);
  Callable::~Callable((Callable *)local_78);
  Node::add_child(pBVar13,*(undefined8 *)(this + 0x6f0),0,0);
  pTVar24 = (Tree *)operator_new(0xdc8,"");
  Tree::Tree(pTVar24);
  postinitialize_handler((Object *)pTVar24);
  *(Tree **)(this + 0x7d8) = pTVar24;
  Control::set_h_size_flags(pTVar24,3);
  Control::set_v_grow_direction(*(undefined8 *)(this + 0x7d8),1);
  local_58[0] = _LC235;
  Control::set_custom_minimum_size(*(Vector2 **)(this + 0x7d8));
  Tree::create_item(*(TreeItem **)(this + 0x7d8),0);
  Tree::set_hide_root(SUB81(*(undefined8 *)(this + 0x7d8),0));
  Tree::set_select_mode(*(undefined8 *)(this + 0x7d8),1);
  Tree::set_columns((int)*(undefined8 *)(this + 0x7d8));
  Tree::set_column_custom_minimum_width((int)*(undefined8 *)(this + 0x7d8),0);
  Tree::set_column_custom_minimum_width((int)*(undefined8 *)(this + 0x7d8),1);
  pSVar5 = *(StringName **)(this + 0x7d8);
  StringName::StringName((StringName *)local_78,"TreeSecondary",false);
  Control::set_theme_type_variation(pSVar5);
  if ((StringName::configured != '\0') && (local_78[0] != (long *)0x0)) {
    StringName::unref();
  }
  plVar21 = *(long **)(this + 0x7d8);
  pcVar3 = *(code **)(*plVar21 + 0x108);
  create_custom_callable_function_pointer<VersionControlEditorPlugin,Object*>
            ((VersionControlEditorPlugin *)local_78,(char *)this,
             (_func_void_Object_ptr *)"&VersionControlEditorPlugin::_load_diff");
  Callable::bind<Tree*>((Tree *)local_88);
  (*pcVar3)(plVar21,SceneStringNames::singleton + 0x260,(String *)local_88,0);
  Callable::~Callable((Callable *)local_88);
  Callable::~Callable((Callable *)local_78);
  Node::add_child(*(undefined8 *)(this + 0x7c0),*(undefined8 *)(this + 0x7d8),0,0);
  uVar12 = *(undefined8 *)(this + 0x7c0);
  pHVar19 = (HSeparator *)operator_new(0x9e0,"");
  HSeparator::HSeparator(pHVar19);
  postinitialize_handler((Object *)pHVar19);
  Node::add_child(uVar12,pHVar19,0,0);
  this_06 = (FlowContainer *)operator_new(0xa28,"");
  FlowContainer::FlowContainer(this_06,false);
  this_06[0xa24] = (FlowContainer)0x1;
  *(undefined ***)this_06 = &PTR__initialize_classv_0011fc98;
  postinitialize_handler((Object *)this_06);
  Control::set_h_size_flags(this_06,3);
  Control::set_v_size_flags(this_06,1);
  Node::add_child(*(undefined8 *)(this + 0x7c0),this_06,0,0);
  pOVar16 = (OptionButton *)operator_new(0xd00,"");
  local_78[0] = (long *)0x0;
  OptionButton::OptionButton(pOVar16,(String *)local_78);
  postinitialize_handler((Object *)pOVar16);
  *(OptionButton **)(this + 0x7e0) = pOVar16;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  pSVar25 = *(String **)(this + 0x7e0);
  local_78[0] = (long *)0x0;
  String::parse_latin1((String *)local_78,"");
  local_88[0] = (Ref *)0x0;
  String::parse_latin1((String *)local_88,"Branches");
  TTR((String *)&local_90,(String *)local_88);
  Control::set_tooltip_text(pSVar25);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  Control::set_h_size_flags(*(undefined8 *)(this + 0x7e0),3);
  Button::set_clip_text(SUB81(*(undefined8 *)(this + 0x7e0),0));
  plVar21 = *(long **)(this + 0x7e0);
  pcVar3 = *(code **)(*plVar21 + 0x108);
  create_custom_callable_function_pointer<VersionControlEditorPlugin,int>
            ((VersionControlEditorPlugin *)local_78,(char *)this,
             (_func_void_int *)"&VersionControlEditorPlugin::_branch_item_selected");
  (*pcVar3)(plVar21,SceneStringNames::singleton + 0x260,(String *)local_78,0);
  Callable::~Callable((Callable *)local_78);
  plVar21 = *(long **)(this + 0x7e0);
  pcVar3 = *(code **)(*plVar21 + 0x108);
  create_custom_callable_function_pointer<VersionControlEditorPlugin>
            ((VersionControlEditorPlugin *)local_78,(char *)this,
             (_func_void *)"&VersionControlEditorPlugin::_refresh_branch_list");
  (*pcVar3)(plVar21,SceneStringNames::singleton + 0x238,(String *)local_78,0);
  Callable::~Callable((Callable *)local_78);
  Node::add_child(this_06,*(undefined8 *)(this + 0x7e0),0,0);
  pAVar17 = (AcceptDialog *)operator_new(0xdb0,"");
  AcceptDialog::AcceptDialog(pAVar17);
  postinitialize_handler((Object *)pAVar17);
  *(AcceptDialog **)(this + 0x6f8) = pAVar17;
  local_78[0] = (long *)0x0;
  String::parse_latin1((String *)local_78,"");
  local_88[0] = (Ref *)0x0;
  String::parse_latin1((String *)local_88,"Create New Branch");
  TTR((String *)&local_90,(String *)local_88);
  Window::set_title((String *)pAVar17);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  pVVar2 = *(Vector2i **)(this + 0x6f8);
  local_60 = _LC93;
  local_58[0] = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_60);
  Window::set_min_size(pVVar2);
  AcceptDialog::set_hide_on_ok(SUB81(*(undefined8 *)(this + 0x6f8),0));
  Node::add_child(*(undefined8 *)(this + 0x7c0),*(undefined8 *)(this + 0x6f8),0,0);
  pSVar25 = *(String **)(*(long *)(this + 0x6f8) + 0xd88);
  local_78[0] = (long *)0x0;
  *(String **)(this + 0x708) = pSVar25;
  String::parse_latin1((String *)local_78,"");
  local_88[0] = (Ref *)0x0;
  String::parse_latin1((String *)local_88,"Create");
  TTR((String *)&local_90,(String *)local_88);
  Button::set_text(pSVar25);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0x708),0));
  plVar21 = *(long **)(this + 0x708);
  pcVar3 = *(code **)(*plVar21 + 0x108);
  create_custom_callable_function_pointer<VersionControlEditorPlugin>
            ((VersionControlEditorPlugin *)local_78,(char *)this,
             (_func_void *)"&VersionControlEditorPlugin::_create_branch");
  (*pcVar3)(plVar21,SceneStringNames::singleton + 0x238,(String *)local_78);
  Callable::~Callable((Callable *)local_78);
  pAVar17 = (AcceptDialog *)operator_new(0xdb0,"");
  AcceptDialog::AcceptDialog(pAVar17);
  postinitialize_handler((Object *)pAVar17);
  *(AcceptDialog **)(this + 0x7f0) = pAVar17;
  local_78[0] = (long *)0x0;
  String::parse_latin1((String *)local_78,"");
  local_88[0] = (Ref *)0x0;
  String::parse_latin1((String *)local_88,"Remove Branch");
  TTR((String *)&local_90,(String *)local_88);
  Window::set_title((String *)pAVar17);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  pSVar25 = *(String **)(this + 0x7f0);
  local_78[0] = (long *)0x0;
  String::parse_latin1((String *)local_78,"");
  AcceptDialog::add_cancel_button(pSVar25);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  Node::add_child(*(undefined8 *)(this + 0x7c0),*(undefined8 *)(this + 0x7f0),0,0);
  pSVar25 = *(String **)(*(long *)(this + 0x7f0) + 0xd88);
  local_78[0] = (long *)0x0;
  String::parse_latin1((String *)local_78,"");
  local_88[0] = (Ref *)0x0;
  String::parse_latin1((String *)local_88,"Remove");
  TTR((String *)&local_90,(String *)local_88);
  Button::set_text(pSVar25);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  pcVar3 = *(code **)(*(long *)pSVar25 + 0x108);
  create_custom_callable_function_pointer<VersionControlEditorPlugin>
            ((VersionControlEditorPlugin *)local_78,(char *)this,
             (_func_void *)"&VersionControlEditorPlugin::_remove_branch");
  (*pcVar3)(pSVar25,SceneStringNames::singleton + 0x238,(String *)local_78,0);
  Callable::~Callable((Callable *)local_78);
  pBVar13 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar13,true);
  pBVar13[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar13 = &PTR__initialize_classv_0011f920;
  postinitialize_handler((Object *)pBVar13);
  BoxContainer::set_alignment(pBVar13,1);
  Node::add_child(*(undefined8 *)(this + 0x6f8),pBVar13,0,0);
  pBVar14 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar14,false);
  pBVar14[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar14 = &PTR__initialize_classv_0011f5a8;
  postinitialize_handler((Object *)pBVar14);
  Control::set_h_size_flags(pBVar14,3);
  Node::add_child(pBVar13,pBVar14,0,0);
  pLVar15 = (Label *)operator_new(0xad8,"");
  local_78[0] = (long *)0x0;
  Label::Label(pLVar15,(String *)local_78);
  postinitialize_handler((Object *)pLVar15);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  Control::set_h_size_flags(pLVar15,3);
  local_78[0] = (long *)0x0;
  String::parse_latin1((String *)local_78,"");
  local_88[0] = (Ref *)0x0;
  String::parse_latin1((String *)local_88,"Branch Name");
  TTR((String *)&local_90,(String *)local_88);
  Label::set_text((String *)pLVar15);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  Node::add_child(pBVar14,pLVar15,0,0);
  pLVar20 = (LineEdit *)operator_new(0xbb0,"");
  local_78[0] = (long *)0x0;
  LineEdit::LineEdit(pLVar20,(String *)local_78);
  postinitialize_handler((Object *)pLVar20);
  *(LineEdit **)(this + 0x700) = pLVar20;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  Control::set_h_size_flags(*(undefined8 *)(this + 0x700),3);
  plVar21 = *(long **)(this + 0x700);
  pcVar3 = *(code **)(*plVar21 + 0x108);
  create_custom_callable_function_pointer<VersionControlEditorPlugin,String_const&>
            ((VersionControlEditorPlugin *)local_78,(char *)this,
             (_func_void_String_ptr *)"&VersionControlEditorPlugin::_update_branch_create_button");
  (*pcVar3)(plVar21,SceneStringNames::singleton + 0x270,(String *)local_78,0);
  Callable::~Callable((Callable *)local_78);
  Node::add_child(pBVar14,*(undefined8 *)(this + 0x700),0,0);
  pOVar16 = (OptionButton *)operator_new(0xd00,"");
  local_78[0] = (long *)0x0;
  OptionButton::OptionButton(pOVar16,(String *)local_78);
  postinitialize_handler((Object *)pOVar16);
  *(OptionButton **)(this + 0x810) = pOVar16;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  pSVar25 = *(String **)(this + 0x810);
  local_78[0] = (long *)0x0;
  String::parse_latin1((String *)local_78,"");
  local_88[0] = (Ref *)0x0;
  String::parse_latin1((String *)local_88,"Remotes");
  TTR((String *)&local_90,(String *)local_88);
  Control::set_tooltip_text(pSVar25);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  Control::set_h_size_flags(*(undefined8 *)(this + 0x810),3);
  Button::set_clip_text(SUB81(*(undefined8 *)(this + 0x810),0));
  plVar21 = *(long **)(this + 0x810);
  pcVar3 = *(code **)(*plVar21 + 0x108);
  create_custom_callable_function_pointer<VersionControlEditorPlugin,int>
            ((VersionControlEditorPlugin *)local_78,(char *)this,
             (_func_void_int *)"&VersionControlEditorPlugin::_remote_selected");
  (*pcVar3)(plVar21,SceneStringNames::singleton + 0x260,(String *)local_78,0);
  Callable::~Callable((Callable *)local_78);
  plVar21 = *(long **)(this + 0x810);
  pcVar3 = *(code **)(*plVar21 + 0x108);
  create_custom_callable_function_pointer<VersionControlEditorPlugin>
            ((VersionControlEditorPlugin *)local_78,(char *)this,
             (_func_void *)"&VersionControlEditorPlugin::_refresh_remote_list");
  (*pcVar3)(plVar21,SceneStringNames::singleton + 0x238,(String *)local_78,0);
  Callable::~Callable((Callable *)local_78);
  Node::add_child(this_06,*(undefined8 *)(this + 0x810),0,0);
  pAVar17 = (AcceptDialog *)operator_new(0xdb0,"");
  AcceptDialog::AcceptDialog(pAVar17);
  postinitialize_handler((Object *)pAVar17);
  *(AcceptDialog **)(this + 0x710) = pAVar17;
  local_78[0] = (long *)0x0;
  String::parse_latin1((String *)local_78,"");
  local_88[0] = (Ref *)0x0;
  String::parse_latin1((String *)local_88,"Create New Remote");
  TTR((String *)&local_90,(String *)local_88);
  Window::set_title((String *)pAVar17);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  pVVar2 = *(Vector2i **)(this + 0x710);
  local_60 = _LC93;
  local_58[0] = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_60);
  Window::set_min_size(pVVar2);
  AcceptDialog::set_hide_on_ok(SUB81(*(undefined8 *)(this + 0x710),0));
  Node::add_child(*(undefined8 *)(this + 0x7c0),*(undefined8 *)(this + 0x710),0,0);
  pSVar25 = *(String **)(*(long *)(this + 0x710) + 0xd88);
  local_78[0] = (long *)0x0;
  *(String **)(this + 0x728) = pSVar25;
  String::parse_latin1((String *)local_78,"");
  local_88[0] = (Ref *)0x0;
  String::parse_latin1((String *)local_88,"Create");
  TTR((String *)&local_90,(String *)local_88);
  Button::set_text(pSVar25);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0x728),0));
  plVar21 = *(long **)(this + 0x728);
  pcVar3 = *(code **)(*plVar21 + 0x108);
  create_custom_callable_function_pointer<VersionControlEditorPlugin>
            ((VersionControlEditorPlugin *)local_78,(char *)this,
             (_func_void *)"&VersionControlEditorPlugin::_create_remote");
  (*pcVar3)(plVar21,SceneStringNames::singleton + 0x238,(String *)local_78,0);
  Callable::~Callable((Callable *)local_78);
  pAVar17 = (AcceptDialog *)operator_new(0xdb0,"");
  AcceptDialog::AcceptDialog(pAVar17);
  postinitialize_handler((Object *)pAVar17);
  *(AcceptDialog **)(this + 0x820) = pAVar17;
  local_78[0] = (long *)0x0;
  String::parse_latin1((String *)local_78,"");
  local_88[0] = (Ref *)0x0;
  String::parse_latin1((String *)local_88,"Remove Remote");
  TTR((String *)&local_90,(String *)local_88);
  Window::set_title((String *)pAVar17);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  pSVar25 = *(String **)(this + 0x820);
  local_78[0] = (long *)0x0;
  String::parse_latin1((String *)local_78,"");
  AcceptDialog::add_cancel_button(pSVar25);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  Node::add_child(*(undefined8 *)(this + 0x7c0),*(undefined8 *)(this + 0x820),0,0);
  pSVar25 = *(String **)(*(long *)(this + 0x820) + 0xd88);
  local_78[0] = (long *)0x0;
  String::parse_latin1((String *)local_78,"");
  local_88[0] = (Ref *)0x0;
  String::parse_latin1((String *)local_88,"Remove");
  TTR((String *)&local_90,(String *)local_88);
  Button::set_text(pSVar25);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  pcVar3 = *(code **)(*(long *)pSVar25 + 0x108);
  create_custom_callable_function_pointer<VersionControlEditorPlugin>
            ((VersionControlEditorPlugin *)local_78,(char *)this,
             (_func_void *)"&VersionControlEditorPlugin::_remove_remote");
  (*pcVar3)(pSVar25,SceneStringNames::singleton + 0x238,(String *)local_78,0);
  Callable::~Callable((Callable *)local_78);
  pBVar13 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar13,true);
  pBVar13[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar13 = &PTR__initialize_classv_0011f920;
  postinitialize_handler((Object *)pBVar13);
  BoxContainer::set_alignment(pBVar13,1);
  Node::add_child(*(undefined8 *)(this + 0x710),pBVar13,0,0);
  pBVar14 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar14,false);
  pBVar14[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar14 = &PTR__initialize_classv_0011f5a8;
  postinitialize_handler((Object *)pBVar14);
  Control::set_h_size_flags(pBVar14,3);
  Node::add_child(pBVar13,pBVar14,0,0);
  pLVar15 = (Label *)operator_new(0xad8,"");
  local_78[0] = (long *)0x0;
  Label::Label(pLVar15,(String *)local_78);
  postinitialize_handler((Object *)pLVar15);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  Control::set_h_size_flags(pLVar15,3);
  local_78[0] = (long *)0x0;
  String::parse_latin1((String *)local_78,"");
  local_88[0] = (Ref *)0x0;
  String::parse_latin1((String *)local_88,"Remote Name");
  TTR((String *)&local_90,(String *)local_88);
  Label::set_text((String *)pLVar15);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  Node::add_child(pBVar14,pLVar15,0,0);
  pLVar20 = (LineEdit *)operator_new(0xbb0,"");
  local_78[0] = (long *)0x0;
  LineEdit::LineEdit(pLVar20,(String *)local_78);
  postinitialize_handler((Object *)pLVar20);
  *(LineEdit **)(this + 0x718) = pLVar20;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  Control::set_h_size_flags(*(undefined8 *)(this + 0x718),3);
  plVar21 = *(long **)(this + 0x718);
  pcVar3 = *(code **)(*plVar21 + 0x108);
  create_custom_callable_function_pointer<VersionControlEditorPlugin,String_const&>
            ((VersionControlEditorPlugin *)local_78,(char *)this,
             (_func_void_String_ptr *)"&VersionControlEditorPlugin::_update_remote_create_button");
  (*pcVar3)(plVar21,SceneStringNames::singleton + 0x270,(String *)local_78,0);
  Callable::~Callable((Callable *)local_78);
  Node::add_child(pBVar14,*(undefined8 *)(this + 0x718),0,0);
  pBVar14 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar14,false);
  pBVar14[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar14 = &PTR__initialize_classv_0011f5a8;
  postinitialize_handler((Object *)pBVar14);
  Control::set_h_size_flags(pBVar14,3);
  Node::add_child(pBVar13,pBVar14,0,0);
  pLVar15 = (Label *)operator_new(0xad8,"");
  local_78[0] = (long *)0x0;
  Label::Label(pLVar15,(String *)local_78);
  postinitialize_handler((Object *)pLVar15);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  Control::set_h_size_flags(pLVar15,3);
  local_78[0] = (long *)0x0;
  String::parse_latin1((String *)local_78,"");
  local_88[0] = (Ref *)0x0;
  String::parse_latin1((String *)local_88,"Remote URL");
  TTR((String *)&local_90,(String *)local_88);
  Label::set_text((String *)pLVar15);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  Node::add_child(pBVar14,pLVar15,0,0);
  pLVar20 = (LineEdit *)operator_new(0xbb0,"");
  local_78[0] = (long *)0x0;
  LineEdit::LineEdit(pLVar20,(String *)local_78);
  postinitialize_handler((Object *)pLVar20);
  *(LineEdit **)(this + 0x720) = pLVar20;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  Control::set_h_size_flags(*(undefined8 *)(this + 0x720),3);
  plVar21 = *(long **)(this + 0x720);
  pcVar3 = *(code **)(*plVar21 + 0x108);
  create_custom_callable_function_pointer<VersionControlEditorPlugin,String_const&>
            ((VersionControlEditorPlugin *)local_78,(char *)this,
             (_func_void_String_ptr *)"&VersionControlEditorPlugin::_update_remote_create_button");
  (*pcVar3)(plVar21,SceneStringNames::singleton + 0x270,(String *)local_78,0);
  Callable::~Callable((Callable *)local_78);
  Node::add_child(pBVar14,*(undefined8 *)(this + 0x720),0,0);
  pBVar23 = (Button *)operator_new(0xc10,"");
  local_78[0] = (long *)0x0;
  Button::Button(pBVar23,(String *)local_78);
  postinitialize_handler((Object *)pBVar23);
  *(Button **)(this + 0x7f8) = pBVar23;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  Control::set_theme_type_variation(*(StringName **)(this + 0x7f8));
  pSVar25 = *(String **)(this + 0x7f8);
  local_78[0] = (long *)0x0;
  String::parse_latin1((String *)local_78,"");
  local_88[0] = (Ref *)0x0;
  String::parse_latin1((String *)local_88,"Fetch");
  TTR((String *)&local_90,(String *)local_88);
  Control::set_tooltip_text(pSVar25);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  local_78[0] = (long *)0x0;
  pRVar4 = *(Ref **)(this + 0x7f8);
  Ref<Theme>::operator=((Ref<Theme> *)local_78,*(Ref **)(EditorNode::singleton + 0x838));
  plVar21 = local_78[0];
  pcVar3 = *(code **)(*local_78[0] + 0x1c8);
  lVar1 = EditorStringNames::singleton + 0x10;
  if ((VersionControlEditorPlugin()::{lambda()#10}::operator()()::sname == '\0') &&
     (iVar10 = __cxa_guard_acquire(&VersionControlEditorPlugin()::{lambda()#10}::operator()()::sname
                                  ), iVar10 != 0)) {
    _scs_create((char *)&VersionControlEditorPlugin()::{lambda()#10}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &VersionControlEditorPlugin()::{lambda()#10}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&VersionControlEditorPlugin()::{lambda()#10}::operator()()::sname);
  }
  (*pcVar3)((String *)local_88,plVar21,
            &VersionControlEditorPlugin()::{lambda()#10}::operator()()::sname,lVar1);
  Button::set_button_icon(pRVar4);
  Ref<Texture2D>::unref((Ref<Texture2D> *)local_88);
  Ref<Theme>::unref((Ref<Theme> *)local_78);
  plVar21 = *(long **)(this + 0x7f8);
  pcVar3 = *(code **)(*plVar21 + 0x108);
  create_custom_callable_function_pointer<VersionControlEditorPlugin>
            ((VersionControlEditorPlugin *)local_78,(char *)this,
             (_func_void *)"&VersionControlEditorPlugin::_fetch");
  (*pcVar3)(plVar21,SceneStringNames::singleton + 0x238,(String *)local_78,0);
  Callable::~Callable((Callable *)local_78);
  Node::add_child(this_06,*(undefined8 *)(this + 0x7f8),0,0);
  pBVar23 = (Button *)operator_new(0xc10,"");
  local_78[0] = (long *)0x0;
  Button::Button(pBVar23,(String *)local_78);
  postinitialize_handler((Object *)pBVar23);
  *(Button **)(this + 0x800) = pBVar23;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  Control::set_theme_type_variation(*(StringName **)(this + 0x800));
  pSVar25 = *(String **)(this + 0x800);
  local_78[0] = (long *)0x0;
  String::parse_latin1((String *)local_78,"");
  local_88[0] = (Ref *)0x0;
  String::parse_latin1((String *)local_88,"Pull");
  TTR((String *)&local_90,(String *)local_88);
  Control::set_tooltip_text(pSVar25);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  local_78[0] = (long *)0x0;
  pRVar4 = *(Ref **)(this + 0x800);
  Ref<Theme>::operator=((Ref<Theme> *)local_78,*(Ref **)(EditorNode::singleton + 0x838));
  plVar21 = local_78[0];
  pcVar3 = *(code **)(*local_78[0] + 0x1c8);
  lVar1 = EditorStringNames::singleton + 0x10;
  if ((VersionControlEditorPlugin()::{lambda()#11}::operator()()::sname == '\0') &&
     (iVar10 = __cxa_guard_acquire(&VersionControlEditorPlugin()::{lambda()#11}::operator()()::sname
                                  ), iVar10 != 0)) {
    _scs_create((char *)&VersionControlEditorPlugin()::{lambda()#11}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &VersionControlEditorPlugin()::{lambda()#11}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&VersionControlEditorPlugin()::{lambda()#11}::operator()()::sname);
  }
  (*pcVar3)((String *)local_88,plVar21,
            &VersionControlEditorPlugin()::{lambda()#11}::operator()()::sname,lVar1);
  Button::set_button_icon(pRVar4);
  Ref<Texture2D>::unref((Ref<Texture2D> *)local_88);
  Ref<Theme>::unref((Ref<Theme> *)local_78);
  plVar21 = *(long **)(this + 0x800);
  pcVar3 = *(code **)(*plVar21 + 0x108);
  create_custom_callable_function_pointer<VersionControlEditorPlugin>
            ((VersionControlEditorPlugin *)local_78,(char *)this,
             (_func_void *)"&VersionControlEditorPlugin::_pull");
  (*pcVar3)(plVar21,SceneStringNames::singleton + 0x238,(String *)local_78,0);
  Callable::~Callable((Callable *)local_78);
  Node::add_child(this_06,*(undefined8 *)(this + 0x800),0,0);
  pBVar23 = (Button *)operator_new(0xc10,"");
  local_78[0] = (long *)0x0;
  Button::Button(pBVar23,(String *)local_78);
  postinitialize_handler((Object *)pBVar23);
  *(Button **)(this + 0x808) = pBVar23;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  Control::set_theme_type_variation(*(StringName **)(this + 0x808));
  pSVar25 = *(String **)(this + 0x808);
  local_78[0] = (long *)0x0;
  String::parse_latin1((String *)local_78,"");
  local_88[0] = (Ref *)0x0;
  String::parse_latin1((String *)local_88,"Push");
  TTR((String *)&local_90,(String *)local_88);
  Control::set_tooltip_text(pSVar25);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  local_78[0] = (long *)0x0;
  pRVar4 = *(Ref **)(this + 0x808);
  Ref<Theme>::operator=((Ref<Theme> *)local_78,*(Ref **)(EditorNode::singleton + 0x838));
  plVar21 = local_78[0];
  pcVar3 = *(code **)(*local_78[0] + 0x1c8);
  lVar1 = EditorStringNames::singleton + 0x10;
  if ((VersionControlEditorPlugin()::{lambda()#12}::operator()()::sname == '\0') &&
     (iVar10 = __cxa_guard_acquire(&VersionControlEditorPlugin()::{lambda()#12}::operator()()::sname
                                  ), iVar10 != 0)) {
    _scs_create((char *)&VersionControlEditorPlugin()::{lambda()#12}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &VersionControlEditorPlugin()::{lambda()#12}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&VersionControlEditorPlugin()::{lambda()#12}::operator()()::sname);
  }
  (*pcVar3)((String *)local_88,plVar21,
            &VersionControlEditorPlugin()::{lambda()#12}::operator()()::sname,lVar1);
  Button::set_button_icon(pRVar4);
  Ref<Texture2D>::unref((Ref<Texture2D> *)local_88);
  Ref<Theme>::unref((Ref<Theme> *)local_78);
  plVar21 = *(long **)(this + 0x808);
  pcVar3 = *(code **)(*plVar21 + 0x108);
  create_custom_callable_function_pointer<VersionControlEditorPlugin>
            ((VersionControlEditorPlugin *)local_78,(char *)this,
             (_func_void *)"&VersionControlEditorPlugin::_push");
  (*pcVar3)(plVar21,SceneStringNames::singleton + 0x238,(String *)local_78,0);
  Callable::~Callable((Callable *)local_78);
  Node::add_child(this_06,*(undefined8 *)(this + 0x808),0,0);
  this_07 = (MenuButton *)operator_new(0xc68,"");
  local_78[0] = (long *)0x0;
  MenuButton::MenuButton(this_07,(String *)local_78);
  postinitialize_handler((Object *)this_07);
  *(MenuButton **)(this + 0x828) = this_07;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  local_78[0] = (long *)0x0;
  pRVar4 = *(Ref **)(this + 0x828);
  Ref<Theme>::operator=((Ref<Theme> *)local_78,*(Ref **)(EditorNode::singleton + 0x838));
  plVar21 = local_78[0];
  pcVar3 = *(code **)(*local_78[0] + 0x1c8);
  lVar1 = EditorStringNames::singleton + 0x10;
  if ((VersionControlEditorPlugin()::{lambda()#13}::operator()()::sname == '\0') &&
     (iVar10 = __cxa_guard_acquire(&VersionControlEditorPlugin()::{lambda()#13}::operator()()::sname
                                  ), iVar10 != 0)) {
    _scs_create((char *)&VersionControlEditorPlugin()::{lambda()#13}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &VersionControlEditorPlugin()::{lambda()#13}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&VersionControlEditorPlugin()::{lambda()#13}::operator()()::sname);
  }
  (*pcVar3)((String *)local_88,plVar21,
            &VersionControlEditorPlugin()::{lambda()#13}::operator()()::sname,lVar1);
  Button::set_button_icon(pRVar4);
  Ref<Texture2D>::unref((Ref<Texture2D> *)local_88);
  Ref<Theme>::unref((Ref<Theme> *)local_78);
  plVar21 = (long *)MenuButton::get_popup();
  pcVar3 = *(code **)(*plVar21 + 0x108);
  create_custom_callable_function_pointer<VersionControlEditorPlugin>
            ((VersionControlEditorPlugin *)local_78,(char *)this,
             (_func_void *)"&VersionControlEditorPlugin::_update_extra_options");
  if ((VersionControlEditorPlugin()::{lambda()#14}::operator()()::sname == '\0') &&
     (iVar10 = __cxa_guard_acquire(&VersionControlEditorPlugin()::{lambda()#14}::operator()()::sname
                                  ), iVar10 != 0)) {
    _scs_create((char *)&VersionControlEditorPlugin()::{lambda()#14}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &VersionControlEditorPlugin()::{lambda()#14}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&VersionControlEditorPlugin()::{lambda()#14}::operator()()::sname);
  }
  (*pcVar3)(plVar21,&VersionControlEditorPlugin()::{lambda()#14}::operator()()::sname,
            (String *)local_78,0);
  Callable::~Callable((Callable *)local_78);
  plVar21 = (long *)MenuButton::get_popup();
  pcVar3 = *(code **)(*plVar21 + 0x108);
  create_custom_callable_function_pointer<VersionControlEditorPlugin,int>
            ((VersionControlEditorPlugin *)local_78,(char *)this,
             (_func_void_int *)"&VersionControlEditorPlugin::_extra_option_selected");
  (*pcVar3)(plVar21,SceneStringNames::singleton + 0x240,(String *)local_78,0);
  Callable::~Callable((Callable *)local_78);
  Node::add_child(this_06,*(undefined8 *)(this + 0x828),0,0);
  uVar12 = MenuButton::get_popup();
  local_78[0] = (long *)0x0;
  String::parse_latin1((String *)local_78,"");
  local_88[0] = (Ref *)0x0;
  String::parse_latin1((String *)local_88,"Force Push");
  TTR((String *)&local_90,(String *)local_88);
  PopupMenu::add_item(uVar12,(String *)&local_90,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  pSVar25 = (String *)MenuButton::get_popup();
  local_78[0] = (long *)0x0;
  PopupMenu::add_separator(pSVar25,iVar9);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  uVar12 = MenuButton::get_popup();
  local_78[0] = (long *)0x0;
  String::parse_latin1((String *)local_78,"");
  local_88[0] = (Ref *)0x0;
  String::parse_latin1((String *)local_88,"Create New Branch");
  TTR((String *)&local_90,(String *)local_88);
  PopupMenu::add_item(uVar12,(String *)&local_90,1,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  pPVar11 = (PopupMenu *)operator_new(0xfe0,"");
  PopupMenu::PopupMenu(pPVar11);
  postinitialize_handler((Object *)pPVar11);
  lVar1 = *(long *)pPVar11;
  *(PopupMenu **)(this + 0x830) = pPVar11;
  pcVar3 = *(code **)(lVar1 + 0x108);
  create_custom_callable_function_pointer<VersionControlEditorPlugin,int>
            ((VersionControlEditorPlugin *)local_78,(char *)this,
             (_func_void_int *)"&VersionControlEditorPlugin::_popup_branch_remove_confirm");
  (*pcVar3)(pPVar11,SceneStringNames::singleton + 0x240,(String *)local_78,0);
  Callable::~Callable((Callable *)local_78);
  pSVar25 = (String *)MenuButton::get_popup();
  uVar12 = *(undefined8 *)(this + 0x830);
  local_78[0] = (long *)0x0;
  String::parse_latin1((String *)local_78,"");
  local_88[0] = (Ref *)0x0;
  String::parse_latin1((String *)local_88,"Remove Branch");
  TTR((String *)&local_90,(String *)local_88);
  PopupMenu::add_submenu_node_item(pSVar25,(PopupMenu *)&local_90,(int)uVar12);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  pSVar25 = (String *)MenuButton::get_popup();
  local_78[0] = (long *)0x0;
  PopupMenu::add_separator(pSVar25,iVar9);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  uVar12 = MenuButton::get_popup();
  local_78[0] = (long *)0x0;
  String::parse_latin1((String *)local_78,"");
  local_88[0] = (Ref *)0x0;
  String::parse_latin1((String *)local_88,"Create New Remote");
  TTR((String *)&local_90,(String *)local_88);
  PopupMenu::add_item(uVar12,(String *)&local_90,2,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  pPVar11 = (PopupMenu *)operator_new(0xfe0,"");
  PopupMenu::PopupMenu(pPVar11);
  postinitialize_handler((Object *)pPVar11);
  lVar1 = *(long *)pPVar11;
  *(PopupMenu **)(this + 0x838) = pPVar11;
  pcVar3 = *(code **)(lVar1 + 0x108);
  create_custom_callable_function_pointer<VersionControlEditorPlugin,int>
            ((VersionControlEditorPlugin *)local_78,(char *)this,
             (_func_void_int *)"&VersionControlEditorPlugin::_popup_remote_remove_confirm");
  (*pcVar3)(pPVar11,SceneStringNames::singleton + 0x240,(String *)local_78,0);
  Callable::~Callable((Callable *)local_78);
  pSVar25 = (String *)MenuButton::get_popup();
  uVar12 = *(undefined8 *)(this + 0x838);
  local_78[0] = (long *)0x0;
  String::parse_latin1((String *)local_78,"");
  local_88[0] = (Ref *)0x0;
  String::parse_latin1((String *)local_88,"Remove Remote");
  TTR((String *)&local_90,(String *)local_88);
  this_00 = (HashMap<EditorVCSInterface::ChangeType,String,HashMapHasherDefault,HashMapComparatorDefault<EditorVCSInterface::ChangeType>,DefaultTypedAllocator<HashMapElement<EditorVCSInterface::ChangeType,String>>>
             *)(this + 0x730);
  PopupMenu::add_submenu_node_item(pSVar25,(PopupMenu *)&local_90,(int)uVar12);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  local_78[0] = (long *)0x0;
  String::parse_latin1((String *)local_78,"");
  local_88[0] = (Ref *)0x0;
  String::parse_latin1((String *)local_88,"New");
  TTR((String *)&local_90,(String *)local_88);
  local_9c = 0;
  pCVar26 = (CowData<char32_t> *)
            HashMap<EditorVCSInterface::ChangeType,String,HashMapHasherDefault,HashMapComparatorDefault<EditorVCSInterface::ChangeType>,DefaultTypedAllocator<HashMapElement<EditorVCSInterface::ChangeType,String>>>
            ::operator[](this_00,(ChangeType *)&local_9c);
  if (*(Object **)pCVar26 != local_90) {
    CowData<char32_t>::_unref(pCVar26);
    *(Object **)pCVar26 = local_90;
    local_90 = (Object *)0x0;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  local_78[0] = (long *)0x0;
  String::parse_latin1((String *)local_78,"");
  local_88[0] = (Ref *)0x0;
  String::parse_latin1((String *)local_88,"Modified");
  TTR((String *)&local_90,(String *)local_88);
  local_9c = 1;
  pCVar26 = (CowData<char32_t> *)
            HashMap<EditorVCSInterface::ChangeType,String,HashMapHasherDefault,HashMapComparatorDefault<EditorVCSInterface::ChangeType>,DefaultTypedAllocator<HashMapElement<EditorVCSInterface::ChangeType,String>>>
            ::operator[](this_00,(ChangeType *)&local_9c);
  if (*(Object **)pCVar26 != local_90) {
    CowData<char32_t>::_unref(pCVar26);
    *(Object **)pCVar26 = local_90;
    local_90 = (Object *)0x0;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  local_78[0] = (long *)0x0;
  String::parse_latin1((String *)local_78,"");
  local_88[0] = (Ref *)0x0;
  String::parse_latin1((String *)local_88,"Renamed");
  TTR((String *)&local_90,(String *)local_88);
  local_9c = 2;
  pCVar26 = (CowData<char32_t> *)
            HashMap<EditorVCSInterface::ChangeType,String,HashMapHasherDefault,HashMapComparatorDefault<EditorVCSInterface::ChangeType>,DefaultTypedAllocator<HashMapElement<EditorVCSInterface::ChangeType,String>>>
            ::operator[](this_00,(ChangeType *)&local_9c);
  if (*(Object **)pCVar26 != local_90) {
    CowData<char32_t>::_unref(pCVar26);
    *(Object **)pCVar26 = local_90;
    local_90 = (Object *)0x0;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  local_78[0] = (long *)0x0;
  String::parse_latin1((String *)local_78,"");
  local_88[0] = (Ref *)0x0;
  String::parse_latin1((String *)local_88,"Deleted");
  TTR((String *)&local_90,(String *)local_88);
  local_9c = 3;
  pCVar26 = (CowData<char32_t> *)
            HashMap<EditorVCSInterface::ChangeType,String,HashMapHasherDefault,HashMapComparatorDefault<EditorVCSInterface::ChangeType>,DefaultTypedAllocator<HashMapElement<EditorVCSInterface::ChangeType,String>>>
            ::operator[](this_00,(ChangeType *)&local_9c);
  if (*(Object **)pCVar26 != local_90) {
    CowData<char32_t>::_unref(pCVar26);
    *(Object **)pCVar26 = local_90;
    local_90 = (Object *)0x0;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  local_78[0] = (long *)0x0;
  String::parse_latin1((String *)local_78,"");
  local_88[0] = (Ref *)0x0;
  String::parse_latin1((String *)local_88,"Typechange");
  TTR((String *)&local_90,(String *)local_88);
  local_9c = 4;
  pCVar26 = (CowData<char32_t> *)
            HashMap<EditorVCSInterface::ChangeType,String,HashMapHasherDefault,HashMapComparatorDefault<EditorVCSInterface::ChangeType>,DefaultTypedAllocator<HashMapElement<EditorVCSInterface::ChangeType,String>>>
            ::operator[](this_00,(ChangeType *)&local_9c);
  if (*(Object **)pCVar26 != local_90) {
    CowData<char32_t>::_unref(pCVar26);
    *(Object **)pCVar26 = local_90;
    local_90 = (Object *)0x0;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  local_78[0] = (long *)0x0;
  String::parse_latin1((String *)local_78,"");
  local_88[0] = (Ref *)0x0;
  String::parse_latin1((String *)local_88,"Unmerged");
  TTR((String *)&local_90,(String *)local_88);
  local_9c = 5;
  pCVar26 = (CowData<char32_t> *)
            HashMap<EditorVCSInterface::ChangeType,String,HashMapHasherDefault,HashMapComparatorDefault<EditorVCSInterface::ChangeType>,DefaultTypedAllocator<HashMapElement<EditorVCSInterface::ChangeType,String>>>
            ::operator[](this_00,(ChangeType *)&local_9c);
  if (*(Object **)pCVar26 != local_90) {
    CowData<char32_t>::_unref(pCVar26);
    *(Object **)pCVar26 = local_90;
    local_90 = (Object *)0x0;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  local_78[0] = (long *)0x0;
  Ref<Theme>::operator=((Ref<Theme> *)local_78,*(Ref **)(EditorNode::singleton + 0x838));
  plVar21 = local_78[0];
  lVar1 = EditorStringNames::singleton;
  pcVar3 = *(code **)(*local_78[0] + 0x1e8);
  if ((VersionControlEditorPlugin()::{lambda()#15}::operator()()::sname == '\0') &&
     (iVar9 = __cxa_guard_acquire(&VersionControlEditorPlugin()::{lambda()#15}::operator()()::sname)
     , iVar9 != 0)) {
    _scs_create((char *)&VersionControlEditorPlugin()::{lambda()#15}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &VersionControlEditorPlugin()::{lambda()#15}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&VersionControlEditorPlugin()::{lambda()#15}::operator()()::sname);
  }
  auVar30 = (*pcVar3)(plVar21,&VersionControlEditorPlugin()::{lambda()#15}::operator()()::sname,
                      lVar1);
  this_01 = (HashMap<EditorVCSInterface::ChangeType,Color,HashMapHasherDefault,HashMapComparatorDefault<EditorVCSInterface::ChangeType>,DefaultTypedAllocator<HashMapElement<EditorVCSInterface::ChangeType,Color>>>
             *)(this + 0x760);
  local_88[0] = (Ref *)((ulong)local_88[0] & 0xffffffff00000000);
  pauVar27 = (undefined1 (*) [16])
             HashMap<EditorVCSInterface::ChangeType,Color,HashMapHasherDefault,HashMapComparatorDefault<EditorVCSInterface::ChangeType>,DefaultTypedAllocator<HashMapElement<EditorVCSInterface::ChangeType,Color>>>
             ::operator[](this_01,(String *)local_88);
  *pauVar27 = auVar30;
  Ref<Theme>::unref((Ref<Theme> *)local_78);
  local_78[0] = (long *)0x0;
  Ref<Theme>::operator=((Ref<Theme> *)local_78,*(Ref **)(EditorNode::singleton + 0x838));
  plVar21 = local_78[0];
  lVar1 = EditorStringNames::singleton;
  pcVar3 = *(code **)(*local_78[0] + 0x1e8);
  if ((VersionControlEditorPlugin()::{lambda()#16}::operator()()::sname == '\0') &&
     (iVar9 = __cxa_guard_acquire(&VersionControlEditorPlugin()::{lambda()#16}::operator()()::sname)
     , iVar9 != 0)) {
    _scs_create((char *)&VersionControlEditorPlugin()::{lambda()#16}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &VersionControlEditorPlugin()::{lambda()#16}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&VersionControlEditorPlugin()::{lambda()#16}::operator()()::sname);
  }
  auVar30 = (*pcVar3)(plVar21,&VersionControlEditorPlugin()::{lambda()#16}::operator()()::sname,
                      lVar1);
  local_88[0] = (Ref *)CONCAT44(local_88[0]._4_4_,1);
  pauVar27 = (undefined1 (*) [16])
             HashMap<EditorVCSInterface::ChangeType,Color,HashMapHasherDefault,HashMapComparatorDefault<EditorVCSInterface::ChangeType>,DefaultTypedAllocator<HashMapElement<EditorVCSInterface::ChangeType,Color>>>
             ::operator[](this_01,(String *)local_88);
  *pauVar27 = auVar30;
  Ref<Theme>::unref((Ref<Theme> *)local_78);
  local_78[0] = (long *)0x0;
  Ref<Theme>::operator=((Ref<Theme> *)local_78,*(Ref **)(EditorNode::singleton + 0x838));
  plVar21 = local_78[0];
  lVar1 = EditorStringNames::singleton;
  pcVar3 = *(code **)(*local_78[0] + 0x1e8);
  if ((VersionControlEditorPlugin()::{lambda()#17}::operator()()::sname == '\0') &&
     (iVar9 = __cxa_guard_acquire(&VersionControlEditorPlugin()::{lambda()#17}::operator()()::sname)
     , iVar9 != 0)) {
    _scs_create((char *)&VersionControlEditorPlugin()::{lambda()#17}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &VersionControlEditorPlugin()::{lambda()#17}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&VersionControlEditorPlugin()::{lambda()#17}::operator()()::sname);
  }
  auVar30 = (*pcVar3)(plVar21,&VersionControlEditorPlugin()::{lambda()#17}::operator()()::sname,
                      lVar1);
  local_88[0] = (Ref *)CONCAT44(local_88[0]._4_4_,2);
  pauVar27 = (undefined1 (*) [16])
             HashMap<EditorVCSInterface::ChangeType,Color,HashMapHasherDefault,HashMapComparatorDefault<EditorVCSInterface::ChangeType>,DefaultTypedAllocator<HashMapElement<EditorVCSInterface::ChangeType,Color>>>
             ::operator[](this_01,(String *)local_88);
  *pauVar27 = auVar30;
  Ref<Theme>::unref((Ref<Theme> *)local_78);
  local_78[0] = (long *)0x0;
  Ref<Theme>::operator=((Ref<Theme> *)local_78,*(Ref **)(EditorNode::singleton + 0x838));
  plVar21 = local_78[0];
  lVar1 = EditorStringNames::singleton;
  pcVar3 = *(code **)(*local_78[0] + 0x1e8);
  if ((VersionControlEditorPlugin()::{lambda()#18}::operator()()::sname == '\0') &&
     (iVar9 = __cxa_guard_acquire(&VersionControlEditorPlugin()::{lambda()#18}::operator()()::sname)
     , iVar9 != 0)) {
    _scs_create((char *)&VersionControlEditorPlugin()::{lambda()#18}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &VersionControlEditorPlugin()::{lambda()#18}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&VersionControlEditorPlugin()::{lambda()#18}::operator()()::sname);
  }
  auVar30 = (*pcVar3)(plVar21,&VersionControlEditorPlugin()::{lambda()#18}::operator()()::sname,
                      lVar1);
  local_88[0]._0_4_ = 3;
  pauVar27 = (undefined1 (*) [16])
             HashMap<EditorVCSInterface::ChangeType,Color,HashMapHasherDefault,HashMapComparatorDefault<EditorVCSInterface::ChangeType>,DefaultTypedAllocator<HashMapElement<EditorVCSInterface::ChangeType,Color>>>
             ::operator[](this_01,(String *)local_88);
  *pauVar27 = auVar30;
  Ref<Theme>::unref((Ref<Theme> *)local_78);
  local_78[0] = (long *)0x0;
  Ref<Theme>::operator=((Ref<Theme> *)local_78,*(Ref **)(EditorNode::singleton + 0x838));
  auVar30 = (**(code **)(*local_78[0] + 0x1e8))
                      (local_78[0],SceneStringNames::singleton + 0xb0,EditorStringNames::singleton);
  local_88[0] = (Ref *)CONCAT44(local_88[0]._4_4_,4);
  pauVar27 = (undefined1 (*) [16])
             HashMap<EditorVCSInterface::ChangeType,Color,HashMapHasherDefault,HashMapComparatorDefault<EditorVCSInterface::ChangeType>,DefaultTypedAllocator<HashMapElement<EditorVCSInterface::ChangeType,Color>>>
             ::operator[](this_01,(String *)local_88);
  *pauVar27 = auVar30;
  Ref<Theme>::unref((Ref<Theme> *)local_78);
  local_78[0] = (long *)0x0;
  Ref<Theme>::operator=((Ref<Theme> *)local_78,*(Ref **)(EditorNode::singleton + 0x838));
  plVar21 = local_78[0];
  lVar1 = EditorStringNames::singleton;
  pcVar3 = *(code **)(*local_78[0] + 0x1e8);
  if ((VersionControlEditorPlugin()::{lambda()#19}::operator()()::sname == '\0') &&
     (iVar9 = __cxa_guard_acquire(&VersionControlEditorPlugin()::{lambda()#19}::operator()()::sname)
     , iVar9 != 0)) {
    _scs_create((char *)&VersionControlEditorPlugin()::{lambda()#19}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &VersionControlEditorPlugin()::{lambda()#19}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&VersionControlEditorPlugin()::{lambda()#19}::operator()()::sname);
  }
  auVar30 = (*pcVar3)(plVar21,&VersionControlEditorPlugin()::{lambda()#19}::operator()()::sname,
                      lVar1);
  local_88[0] = (Ref *)CONCAT44(local_88[0]._4_4_,5);
  pauVar27 = (undefined1 (*) [16])
             HashMap<EditorVCSInterface::ChangeType,Color,HashMapHasherDefault,HashMapComparatorDefault<EditorVCSInterface::ChangeType>,DefaultTypedAllocator<HashMapElement<EditorVCSInterface::ChangeType,Color>>>
             ::operator[](this_01,(String *)local_88);
  *pauVar27 = auVar30;
  Ref<Theme>::unref((Ref<Theme> *)local_78);
  local_78[0] = (long *)0x0;
  Ref<Theme>::operator=((Ref<Theme> *)local_78,*(Ref **)(EditorNode::singleton + 0x838));
  plVar21 = local_78[0];
  pcVar3 = *(code **)(*local_78[0] + 0x1c8);
  lVar1 = EditorStringNames::singleton + 0x10;
  if ((VersionControlEditorPlugin()::{lambda()#20}::operator()()::sname == '\0') &&
     (iVar9 = __cxa_guard_acquire(&VersionControlEditorPlugin()::{lambda()#20}::operator()()::sname)
     , iVar9 != 0)) {
    _scs_create((char *)&VersionControlEditorPlugin()::{lambda()#20}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &VersionControlEditorPlugin()::{lambda()#20}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&VersionControlEditorPlugin()::{lambda()#20}::operator()()::sname);
  }
  (*pcVar3)((String *)local_88,plVar21,
            &VersionControlEditorPlugin()::{lambda()#20}::operator()()::sname,lVar1);
  this_02 = (HashMap<EditorVCSInterface::ChangeType,Ref<Texture>,HashMapHasherDefault,HashMapComparatorDefault<EditorVCSInterface::ChangeType>,DefaultTypedAllocator<HashMapElement<EditorVCSInterface::ChangeType,Ref<Texture>>>>
             *)(this + 0x790);
  local_90 = (Object *)((ulong)local_90 & 0xffffffff00000000);
  pRVar28 = (Ref<Texture> *)
            HashMap<EditorVCSInterface::ChangeType,Ref<Texture>,HashMapHasherDefault,HashMapComparatorDefault<EditorVCSInterface::ChangeType>,DefaultTypedAllocator<HashMapElement<EditorVCSInterface::ChangeType,Ref<Texture>>>>
            ::operator[](this_02,(String *)&local_90);
  Ref<Texture>::operator=(pRVar28,local_88[0]);
  Ref<Texture2D>::unref((Ref<Texture2D> *)local_88);
  Ref<Theme>::unref((Ref<Theme> *)local_78);
  local_78[0] = (long *)0x0;
  Ref<Theme>::operator=((Ref<Theme> *)local_78,*(Ref **)(EditorNode::singleton + 0x838));
  plVar21 = local_78[0];
  pcVar3 = *(code **)(*local_78[0] + 0x1c8);
  lVar1 = EditorStringNames::singleton + 0x10;
  if ((VersionControlEditorPlugin()::{lambda()#21}::operator()()::sname == '\0') &&
     (iVar9 = __cxa_guard_acquire(&VersionControlEditorPlugin()::{lambda()#21}::operator()()::sname)
     , iVar9 != 0)) {
    _scs_create((char *)&VersionControlEditorPlugin()::{lambda()#21}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &VersionControlEditorPlugin()::{lambda()#21}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&VersionControlEditorPlugin()::{lambda()#21}::operator()()::sname);
  }
  (*pcVar3)((String *)local_88,plVar21,
            &VersionControlEditorPlugin()::{lambda()#21}::operator()()::sname,lVar1);
  local_90 = (Object *)CONCAT44(local_90._4_4_,1);
  pRVar28 = (Ref<Texture> *)
            HashMap<EditorVCSInterface::ChangeType,Ref<Texture>,HashMapHasherDefault,HashMapComparatorDefault<EditorVCSInterface::ChangeType>,DefaultTypedAllocator<HashMapElement<EditorVCSInterface::ChangeType,Ref<Texture>>>>
            ::operator[](this_02,(String *)&local_90);
  Ref<Texture>::operator=(pRVar28,local_88[0]);
  Ref<Texture2D>::unref((Ref<Texture2D> *)local_88);
  Ref<Theme>::unref((Ref<Theme> *)local_78);
  local_78[0] = (long *)0x0;
  Ref<Theme>::operator=((Ref<Theme> *)local_78,*(Ref **)(EditorNode::singleton + 0x838));
  plVar21 = local_78[0];
  pcVar3 = *(code **)(*local_78[0] + 0x1c8);
  lVar1 = EditorStringNames::singleton + 0x10;
  if ((VersionControlEditorPlugin()::{lambda()#22}::operator()()::sname == '\0') &&
     (iVar9 = __cxa_guard_acquire(&VersionControlEditorPlugin()::{lambda()#22}::operator()()::sname)
     , iVar9 != 0)) {
    _scs_create((char *)&VersionControlEditorPlugin()::{lambda()#22}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &VersionControlEditorPlugin()::{lambda()#22}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&VersionControlEditorPlugin()::{lambda()#22}::operator()()::sname);
  }
  (*pcVar3)((String *)local_88,plVar21,
            &VersionControlEditorPlugin()::{lambda()#22}::operator()()::sname,lVar1);
  local_90 = (Object *)CONCAT44(local_90._4_4_,2);
  pRVar28 = (Ref<Texture> *)
            HashMap<EditorVCSInterface::ChangeType,Ref<Texture>,HashMapHasherDefault,HashMapComparatorDefault<EditorVCSInterface::ChangeType>,DefaultTypedAllocator<HashMapElement<EditorVCSInterface::ChangeType,Ref<Texture>>>>
            ::operator[](this_02,(String *)&local_90);
  Ref<Texture>::operator=(pRVar28,local_88[0]);
  Ref<Texture2D>::unref((Ref<Texture2D> *)local_88);
  Ref<Theme>::unref((Ref<Theme> *)local_78);
  local_78[0] = (long *)0x0;
  Ref<Theme>::operator=((Ref<Theme> *)local_78,*(Ref **)(EditorNode::singleton + 0x838));
  plVar21 = local_78[0];
  pcVar3 = *(code **)(*local_78[0] + 0x1c8);
  lVar1 = EditorStringNames::singleton + 0x10;
  if ((VersionControlEditorPlugin()::{lambda()#23}::operator()()::sname == '\0') &&
     (iVar9 = __cxa_guard_acquire(&VersionControlEditorPlugin()::{lambda()#23}::operator()()::sname)
     , iVar9 != 0)) {
    _scs_create((char *)&VersionControlEditorPlugin()::{lambda()#23}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &VersionControlEditorPlugin()::{lambda()#23}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&VersionControlEditorPlugin()::{lambda()#23}::operator()()::sname);
  }
  (*pcVar3)((String *)local_88,plVar21,
            &VersionControlEditorPlugin()::{lambda()#23}::operator()()::sname,lVar1);
  local_90 = (Object *)CONCAT44(local_90._4_4_,4);
  pRVar28 = (Ref<Texture> *)
            HashMap<EditorVCSInterface::ChangeType,Ref<Texture>,HashMapHasherDefault,HashMapComparatorDefault<EditorVCSInterface::ChangeType>,DefaultTypedAllocator<HashMapElement<EditorVCSInterface::ChangeType,Ref<Texture>>>>
            ::operator[](this_02,(String *)&local_90);
  Ref<Texture>::operator=(pRVar28,local_88[0]);
  Ref<Texture2D>::unref((Ref<Texture2D> *)local_88);
  Ref<Theme>::unref((Ref<Theme> *)local_78);
  local_78[0] = (long *)0x0;
  Ref<Theme>::operator=((Ref<Theme> *)local_78,*(Ref **)(EditorNode::singleton + 0x838));
  plVar21 = local_78[0];
  pcVar3 = *(code **)(*local_78[0] + 0x1c8);
  lVar1 = EditorStringNames::singleton + 0x10;
  if ((VersionControlEditorPlugin()::{lambda()#24}::operator()()::sname == '\0') &&
     (iVar9 = __cxa_guard_acquire(&VersionControlEditorPlugin()::{lambda()#24}::operator()()::sname)
     , iVar9 != 0)) {
    _scs_create((char *)&VersionControlEditorPlugin()::{lambda()#24}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &VersionControlEditorPlugin()::{lambda()#24}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&VersionControlEditorPlugin()::{lambda()#24}::operator()()::sname);
  }
  (*pcVar3)((String *)local_88,plVar21,
            &VersionControlEditorPlugin()::{lambda()#24}::operator()()::sname,lVar1);
  local_90 = (Object *)CONCAT44(local_90._4_4_,3);
  pRVar28 = (Ref<Texture> *)
            HashMap<EditorVCSInterface::ChangeType,Ref<Texture>,HashMapHasherDefault,HashMapComparatorDefault<EditorVCSInterface::ChangeType>,DefaultTypedAllocator<HashMapElement<EditorVCSInterface::ChangeType,Ref<Texture>>>>
            ::operator[](this_02,(String *)&local_90);
  Ref<Texture>::operator=(pRVar28,local_88[0]);
  Ref<Texture2D>::unref((Ref<Texture2D> *)local_88);
  Ref<Theme>::unref((Ref<Theme> *)local_78);
  local_78[0] = (long *)0x0;
  Ref<Theme>::operator=((Ref<Theme> *)local_78,*(Ref **)(EditorNode::singleton + 0x838));
  plVar21 = local_78[0];
  pcVar3 = *(code **)(*local_78[0] + 0x1c8);
  lVar1 = EditorStringNames::singleton + 0x10;
  if ((VersionControlEditorPlugin()::{lambda()#25}::operator()()::sname == '\0') &&
     (iVar9 = __cxa_guard_acquire(&VersionControlEditorPlugin()::{lambda()#25}::operator()()::sname)
     , iVar9 != 0)) {
    _scs_create((char *)&VersionControlEditorPlugin()::{lambda()#25}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &VersionControlEditorPlugin()::{lambda()#25}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&VersionControlEditorPlugin()::{lambda()#25}::operator()()::sname);
  }
  (*pcVar3)((String *)local_88,plVar21,
            &VersionControlEditorPlugin()::{lambda()#25}::operator()()::sname,lVar1);
  local_90 = (Object *)CONCAT44(local_90._4_4_,5);
  pRVar28 = (Ref<Texture> *)
            HashMap<EditorVCSInterface::ChangeType,Ref<Texture>,HashMapHasherDefault,HashMapComparatorDefault<EditorVCSInterface::ChangeType>,DefaultTypedAllocator<HashMapElement<EditorVCSInterface::ChangeType,Ref<Texture>>>>
            ::operator[](this_02,(String *)&local_90);
  Ref<Texture>::operator=(pRVar28,local_88[0]);
  Ref<Texture2D>::unref((Ref<Texture2D> *)local_88);
  Ref<Theme>::unref((Ref<Theme> *)local_78);
  pBVar13 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar13,true);
  pBVar13[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar13 = &PTR__initialize_classv_0011f920;
  postinitialize_handler((Object *)pBVar13);
  *(BoxContainer **)(this + 0x880) = pBVar13;
  Control::set_v_size_flags(pBVar13,3);
  pVVar6 = *(Vector2 **)(this + 0x880);
  fVar29 = (float)EditorScale::get_scale();
  local_58[0] = CONCAT44(fVar29 * _LC279._4_4_,fVar29 * (float)_LC279);
  Control::set_custom_minimum_size(pVVar6);
  CanvasItem::hide();
  pBVar13 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar13,false);
  pBVar13[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar13 = &PTR__initialize_classv_0011f5a8;
  postinitialize_handler((Object *)pBVar13);
  Control::set_h_size_flags(pBVar13,3);
  local_78[0] = (long *)0x0;
  String::parse_latin1((String *)local_78,"");
  local_88[0] = (Ref *)0x0;
  String::parse_latin1
            ((String *)local_88,"View file diffs before committing them to the latest version");
  TTR((String *)&local_90,(String *)local_88);
  Control::set_tooltip_text((String *)pBVar13);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  Node::add_child(*(undefined8 *)(this + 0x880),pBVar13,0,0);
  pLVar15 = (Label *)operator_new(0xad8,"");
  local_78[0] = (long *)0x0;
  Label::Label(pLVar15,(String *)local_78);
  postinitialize_handler((Object *)pLVar15);
  *(Label **)(this + 0x890) = pLVar15;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  Control::set_h_size_flags(*(undefined8 *)(this + 0x890),3);
  Node::add_child(pBVar13,*(undefined8 *)(this + 0x890),0,0);
  pLVar15 = (Label *)operator_new(0xad8,"");
  local_78[0] = (long *)0x0;
  Label::Label(pLVar15,(String *)local_78);
  postinitialize_handler((Object *)pLVar15);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  local_78[0] = (long *)0x0;
  String::parse_latin1((String *)local_78,"");
  local_88[0] = (Ref *)0x0;
  String::parse_latin1((String *)local_88,"View:");
  TTR((String *)&local_90,(String *)local_88);
  Label::set_text((String *)pLVar15);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  Node::add_child(pBVar13,pLVar15,0,0);
  pOVar16 = (OptionButton *)operator_new(0xd00,"");
  local_78[0] = (long *)0x0;
  OptionButton::OptionButton(pOVar16,(String *)local_78);
  postinitialize_handler((Object *)pOVar16);
  *(OptionButton **)(this + 0x8a0) = pOVar16;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  pSVar25 = *(String **)(this + 0x8a0);
  local_78[0] = (long *)0x0;
  String::parse_latin1((String *)local_78,"");
  local_88[0] = (Ref *)0x0;
  String::parse_latin1((String *)local_88,"Split");
  TTR((String *)&local_90,(String *)local_88);
  iVar9 = (int)(String *)&local_90;
  OptionButton::add_item(pSVar25,iVar9);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  pSVar25 = *(String **)(this + 0x8a0);
  local_78[0] = (long *)0x0;
  String::parse_latin1((String *)local_78,"");
  local_88[0] = (Ref *)0x0;
  String::parse_latin1((String *)local_88,"Unified");
  TTR((String *)&local_90,(String *)local_88);
  OptionButton::add_item(pSVar25,iVar9);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  plVar21 = *(long **)(this + 0x8a0);
  pcVar3 = *(code **)(*plVar21 + 0x108);
  create_custom_callable_function_pointer<VersionControlEditorPlugin,int>
            ((VersionControlEditorPlugin *)local_78,(char *)this,
             (_func_void_int *)"&VersionControlEditorPlugin::_display_diff");
  (*pcVar3)(plVar21,SceneStringNames::singleton + 0x260,(String *)local_78,0);
  Callable::~Callable((Callable *)local_78);
  Node::add_child(pBVar13,*(undefined8 *)(this + 0x8a0),0,0);
  this_08 = (RichTextLabel *)operator_new(0xcf0,"");
  local_78[0] = (long *)0x0;
  RichTextLabel::RichTextLabel(this_08,(String *)local_78);
  postinitialize_handler((Object *)this_08);
  *(RichTextLabel **)(this + 0x898) = this_08;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  Control::set_h_size_flags(*(undefined8 *)(this + 0x898),3);
  Control::set_v_size_flags(*(undefined8 *)(this + 0x898),3);
  RichTextLabel::set_use_bbcode(SUB81(*(undefined8 *)(this + 0x898),0));
  RichTextLabel::set_selection_enabled(SUB81(*(undefined8 *)(this + 0x898),0));
  RichTextLabel::set_context_menu_enabled(SUB81(*(undefined8 *)(this + 0x898),0));
  Node::add_child(*(undefined8 *)(this + 0x880),*(undefined8 *)(this + 0x898),0,0);
  local_78[0] = (long *)0x0;
  String::parse_latin1((String *)local_78,"");
  _update_set_up_warning((String *)this);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref(local_d0);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* VersionControlEditorPlugin::get_singleton() */

VersionControlEditorPlugin * VersionControlEditorPlugin::get_singleton(void)

{
  VersionControlEditorPlugin *this;
  
  if (singleton != (VersionControlEditorPlugin *)0x0) {
    return singleton;
  }
  this = (VersionControlEditorPlugin *)operator_new(0x8b8,"");
  VersionControlEditorPlugin(this);
  postinitialize_handler((Object *)this);
  return this;
}



/* VersionControlEditorPlugin::_display_diff(int) */

void VersionControlEditorPlugin::_display_diff(int param_1)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  Ref *pRVar5;
  code *pcVar6;
  Color *pCVar7;
  String *pSVar8;
  Object *pOVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined1 (*pauVar14) [16];
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  Object *pOVar19;
  undefined4 in_register_0000003c;
  List *pLVar20;
  int *piVar21;
  long in_FS_OFFSET;
  long local_100;
  long local_f8;
  long local_f0;
  long local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  long *local_88;
  undefined8 local_80;
  Object *local_78;
  undefined8 uStack_70;
  undefined1 (*local_68 [2]) [16];
  undefined8 local_58 [3];
  long local_40;
  
  pLVar20 = (List *)CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar11 = OptionButton::get_selected();
  RichTextLabel::clear();
  if (pLVar20[0x8a8] != (List)0x0) {
    Tree::get_selected();
    TreeItem::get_metadata((int)(Variant *)local_58);
    Variant::operator_cast_to_Dictionary((Variant *)&local_d8);
    if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((_display_diff(int)::{lambda()#1}::operator()()::sname == '\0') &&
       (iVar13 = __cxa_guard_acquire(&_display_diff(int)::{lambda()#1}::operator()()::sname),
       iVar13 != 0)) {
      _scs_create((char *)&_display_diff(int)::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_display_diff(int)::{lambda()#1}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_display_diff(int)::{lambda()#1}::operator()()::sname);
    }
    Variant::Variant((Variant *)local_58,
                     (StringName *)&_display_diff(int)::{lambda()#1}::operator()()::sname);
    Dictionary::operator[]((Variant *)&local_d8);
    Variant::operator_cast_to_String((Variant *)&local_d0);
    if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((_display_diff(int)::{lambda()#2}::operator()()::sname == '\0') &&
       (iVar13 = __cxa_guard_acquire(&_display_diff(int)::{lambda()#2}::operator()()::sname),
       iVar13 != 0)) {
      _scs_create((char *)&_display_diff(int)::{lambda()#2}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_display_diff(int)::{lambda()#2}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_display_diff(int)::{lambda()#2}::operator()()::sname);
    }
    Variant::Variant((Variant *)local_58,
                     (StringName *)&_display_diff(int)::{lambda()#2}::operator()()::sname);
    Dictionary::operator[]((Variant *)&local_d8);
    Variant::operator_cast_to_String((Variant *)&local_c8);
    if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((_display_diff(int)::{lambda()#3}::operator()()::sname == '\0') &&
       (iVar13 = __cxa_guard_acquire(&_display_diff(int)::{lambda()#3}::operator()()::sname),
       iVar13 != 0)) {
      _scs_create((char *)&_display_diff(int)::{lambda()#3}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_display_diff(int)::{lambda()#3}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_display_diff(int)::{lambda()#3}::operator()()::sname);
    }
    Variant::Variant((Variant *)local_58,
                     (StringName *)&_display_diff(int)::{lambda()#3}::operator()()::sname);
    Dictionary::operator[]((Variant *)&local_d8);
    Variant::operator_cast_to_String((Variant *)&local_c0);
    if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((_display_diff(int)::{lambda()#4}::operator()()::sname == '\0') &&
       (iVar13 = __cxa_guard_acquire(&_display_diff(int)::{lambda()#4}::operator()()::sname),
       iVar13 != 0)) {
      _scs_create((char *)&_display_diff(int)::{lambda()#4}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_display_diff(int)::{lambda()#4}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_display_diff(int)::{lambda()#4}::operator()()::sname);
    }
    Variant::Variant((Variant *)local_58,
                     (StringName *)&_display_diff(int)::{lambda()#4}::operator()()::sname);
    Dictionary::operator[]((Variant *)&local_d8);
    Variant::operator_cast_to_String((Variant *)&local_b8);
    if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((_display_diff(int)::{lambda()#5}::operator()()::sname == '\0') &&
       (iVar13 = __cxa_guard_acquire(&_display_diff(int)::{lambda()#5}::operator()()::sname),
       iVar13 != 0)) {
      _scs_create((char *)&_display_diff(int)::{lambda()#5}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_display_diff(int)::{lambda()#5}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_display_diff(int)::{lambda()#5}::operator()()::sname);
    }
    Variant::Variant((Variant *)local_58,
                     (StringName *)&_display_diff(int)::{lambda()#5}::operator()()::sname);
    Dictionary::operator[]((Variant *)&local_d8);
    Variant::operator_cast_to_String((Variant *)&local_b0);
    if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    pRVar5 = *(Ref **)(pLVar20 + 0x898);
    local_88 = (long *)0x0;
    Ref<Theme>::operator=((Ref<Theme> *)&local_88,*(Ref **)(EditorNode::singleton + 0x838));
    plVar2 = local_88;
    pcVar6 = *(code **)(*local_88 + 0x1d8);
    lVar17 = EditorStringNames::singleton + 8;
    if ((_display_diff(int)::{lambda()#6}::operator()()::sname == '\0') &&
       (iVar13 = __cxa_guard_acquire(&_display_diff(int)::{lambda()#6}::operator()()::sname),
       iVar13 != 0)) {
      _scs_create((char *)&_display_diff(int)::{lambda()#6}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_display_diff(int)::{lambda()#6}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_display_diff(int)::{lambda()#6}::operator()()::sname);
    }
    (*pcVar6)((Ref<Theme> *)&local_78,plVar2,&_display_diff(int)::{lambda()#6}::operator()()::sname,
              lVar17);
    RichTextLabel::push_font(pRVar5,(int)(Ref<Theme> *)&local_78);
    if (((local_78 != (Object *)0x0) && (cVar10 = RefCounted::unreference(), cVar10 != '\0')) &&
       (cVar10 = predelete_handler(local_78), cVar10 != '\0')) {
      (**(code **)(*(long *)local_78 + 0x140))(local_78);
      Memory::free_static(local_78,false);
    }
    Ref<Theme>::unref((Ref<Theme> *)&local_88);
    pCVar7 = *(Color **)(pLVar20 + 0x898);
    local_78 = (Object *)0x0;
    Ref<Theme>::operator=((Ref<Theme> *)&local_78,*(Ref **)(EditorNode::singleton + 0x838));
    pOVar19 = local_78;
    lVar17 = EditorStringNames::singleton;
    pcVar6 = *(code **)(*(long *)local_78 + 0x1e8);
    if ((_display_diff(int)::{lambda()#7}::operator()()::sname == '\0') &&
       (iVar13 = __cxa_guard_acquire(&_display_diff(int)::{lambda()#7}::operator()()::sname),
       iVar13 != 0)) {
      _scs_create((char *)&_display_diff(int)::{lambda()#7}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_display_diff(int)::{lambda()#7}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_display_diff(int)::{lambda()#7}::operator()()::sname);
    }
    local_58[0] = (*pcVar6)(pOVar19,&_display_diff(int)::{lambda()#7}::operator()()::sname,lVar17);
    RichTextLabel::push_color(pCVar7);
    Ref<Theme>::unref((Ref<Theme> *)&local_78);
    pSVar8 = *(String **)(pLVar20 + 0x898);
    local_90 = 0;
    String::parse_latin1((String *)&local_90," ");
    local_a0 = 0;
    String::parse_latin1((String *)&local_a0,"");
    local_a8 = 0;
    String::parse_latin1((String *)&local_a8,"Commit:");
    TTR((String *)&local_98,(String *)&local_a8);
    String::operator+((String *)&local_88,(String *)&local_98);
    String::operator+((String *)&local_78,(String *)&local_88);
    RichTextLabel::add_text(pSVar8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    RichTextLabel::add_newline();
    pSVar8 = *(String **)(pLVar20 + 0x898);
    local_90 = 0;
    String::parse_latin1((String *)&local_90," ");
    local_a0 = 0;
    String::parse_latin1((String *)&local_a0,"");
    local_a8 = 0;
    String::parse_latin1((String *)&local_a8,"Author:");
    TTR((String *)&local_98,(String *)&local_a8);
    String::operator+((String *)&local_88,(String *)&local_98);
    String::operator+((String *)&local_78,(String *)&local_88);
    RichTextLabel::add_text(pSVar8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    RichTextLabel::add_newline();
    pSVar8 = *(String **)(pLVar20 + 0x898);
    local_90 = 0;
    String::parse_latin1((String *)&local_90," ");
    local_a0 = 0;
    String::parse_latin1((String *)&local_a0,"");
    local_a8 = 0;
    String::parse_latin1((String *)&local_a8,"Date:");
    TTR((String *)&local_98,(String *)&local_a8);
    String::operator+((String *)&local_88,(String *)&local_98);
    String::operator+((String *)&local_78,(String *)&local_88);
    RichTextLabel::add_text(pSVar8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    RichTextLabel::add_newline();
    if ((local_c8 != 0) && (1 < *(uint *)(local_c8 + -8))) {
      pSVar8 = *(String **)(pLVar20 + 0x898);
      local_90 = 0;
      String::parse_latin1((String *)&local_90," ");
      local_a0 = 0;
      String::parse_latin1((String *)&local_a0,"");
      local_a8 = 0;
      String::parse_latin1((String *)&local_a8,"Subtitle:");
      TTR((String *)&local_98,(String *)&local_a8);
      String::operator+((String *)&local_88,(String *)&local_98);
      String::operator+((String *)&local_78,(String *)&local_88);
      RichTextLabel::add_text(pSVar8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      RichTextLabel::add_newline();
    }
    RichTextLabel::add_newline();
    RichTextLabel::pop();
    RichTextLabel::pop();
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
    Dictionary::~Dictionary((Dictionary *)&local_d8);
  }
  if (*(long **)(pLVar20 + 0x8b0) != (long *)0x0) {
    for (lVar17 = **(long **)(pLVar20 + 0x8b0); lVar17 != 0; lVar17 = *(long *)(lVar17 + 0x18)) {
      pRVar5 = *(Ref **)(pLVar20 + 0x898);
      pOVar19 = *(Object **)(EditorNode::singleton + 0x838);
      if (pOVar19 == (Object *)0x0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)invalidInstructionException();
        (*pcVar6)();
      }
      cVar10 = RefCounted::reference();
      if (cVar10 == '\0') {
        pOVar19 = (Object *)0x0;
      }
      pcVar6 = *(code **)(*(long *)pOVar19 + 0x1d8);
      lVar16 = EditorStringNames::singleton + 8;
      if ((_display_diff(int)::{lambda()#8}::operator()()::sname == '\0') &&
         (iVar13 = __cxa_guard_acquire(&_display_diff(int)::{lambda()#8}::operator()()::sname),
         iVar13 != 0)) {
        _scs_create((char *)&_display_diff(int)::{lambda()#8}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_display_diff(int)::{lambda()#8}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_display_diff(int)::{lambda()#8}::operator()()::sname);
      }
      (*pcVar6)((String *)&local_78,pOVar19,&_display_diff(int)::{lambda()#8}::operator()()::sname,
                lVar16);
      iVar13 = (int)(String *)&local_78;
      RichTextLabel::push_font(pRVar5,iVar13);
      if (((local_78 != (Object *)0x0) &&
          (cVar10 = RefCounted::unreference(), pOVar9 = local_78, cVar10 != '\0')) &&
         (cVar10 = predelete_handler(local_78), cVar10 != '\0')) {
        (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
        Memory::free_static(pOVar9,false);
      }
      cVar10 = RefCounted::unreference();
      if ((cVar10 != '\0') && (cVar10 = predelete_handler(pOVar19), cVar10 != '\0')) {
        (**(code **)(*(long *)pOVar19 + 0x140))(pOVar19);
        Memory::free_static(pOVar19,false);
      }
      pCVar7 = *(Color **)(pLVar20 + 0x898);
      pOVar19 = *(Object **)(EditorNode::singleton + 0x838);
      if (pOVar19 == (Object *)0x0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)invalidInstructionException();
        (*pcVar6)();
      }
      cVar10 = RefCounted::reference();
      lVar16 = EditorStringNames::singleton;
      if (cVar10 == '\0') {
        pOVar19 = (Object *)0x0;
      }
      pcVar6 = *(code **)(*(long *)pOVar19 + 0x1e8);
      if ((_display_diff(int)::{lambda()#9}::operator()()::sname == '\0') &&
         (iVar12 = __cxa_guard_acquire(&_display_diff(int)::{lambda()#9}::operator()()::sname),
         iVar12 != 0)) {
        _scs_create((char *)&_display_diff(int)::{lambda()#9}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_display_diff(int)::{lambda()#9}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_display_diff(int)::{lambda()#9}::operator()()::sname);
      }
      local_58[0] = (*pcVar6)(pOVar19,&_display_diff(int)::{lambda()#9}::operator()()::sname,lVar16)
      ;
      RichTextLabel::push_color(pCVar7);
      cVar10 = RefCounted::unreference();
      if ((cVar10 != '\0') && (cVar10 = predelete_handler(pOVar19), cVar10 != '\0')) {
        (**(code **)(*(long *)pOVar19 + 0x140))(pOVar19);
        Memory::free_static(pOVar19,false);
      }
      pSVar8 = *(String **)(pLVar20 + 0x898);
      local_78 = (Object *)&_LC141;
      local_90 = 0;
      uStack_70 = 1;
      String::parse_latin1((StrRange *)&local_90);
      local_a0 = 0;
      local_78 = (Object *)&_LC53;
      uStack_70 = 0;
      String::parse_latin1((StrRange *)&local_a0);
      local_a8 = 0;
      local_78 = (Object *)0x113a47;
      uStack_70 = 5;
      String::parse_latin1((StrRange *)&local_a8);
      TTR((String *)&local_98,(String *)&local_a8);
      String::operator+((String *)&local_88,(String *)&local_98);
      String::operator+((String *)&local_78,(String *)&local_88);
      RichTextLabel::add_text(pSVar8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      RichTextLabel::pop();
      RichTextLabel::pop();
      pRVar5 = *(Ref **)(pLVar20 + 0x898);
      pOVar19 = *(Object **)(EditorNode::singleton + 0x838);
      if (pOVar19 == (Object *)0x0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)invalidInstructionException();
        (*pcVar6)();
      }
      cVar10 = RefCounted::reference();
      if (cVar10 == '\0') {
        pOVar19 = (Object *)0x0;
      }
      pcVar6 = *(code **)(*(long *)pOVar19 + 0x1d8);
      lVar16 = EditorStringNames::singleton + 8;
      if ((_display_diff(int)::{lambda()#10}::operator()()::sname == '\0') &&
         (iVar12 = __cxa_guard_acquire(&_display_diff(int)::{lambda()#10}::operator()()::sname),
         iVar12 != 0)) {
        _scs_create((char *)&_display_diff(int)::{lambda()#10}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_display_diff(int)::{lambda()#10}::operator()()::sname
                     ,&__dso_handle);
        __cxa_guard_release(&_display_diff(int)::{lambda()#10}::operator()()::sname);
      }
      (*pcVar6)((String *)&local_78,pOVar19,&_display_diff(int)::{lambda()#10}::operator()()::sname,
                lVar16);
      RichTextLabel::push_font(pRVar5,iVar13);
      if (((local_78 != (Object *)0x0) &&
          (cVar10 = RefCounted::unreference(), pOVar9 = local_78, cVar10 != '\0')) &&
         (cVar10 = predelete_handler(local_78), cVar10 != '\0')) {
        (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
        Memory::free_static(pOVar9,false);
      }
      cVar10 = RefCounted::unreference();
      if ((cVar10 != '\0') && (cVar10 = predelete_handler(pOVar19), cVar10 != '\0')) {
        (**(code **)(*(long *)pOVar19 + 0x140))(pOVar19);
        Memory::free_static(pOVar19,false);
      }
      if ((*(undefined8 **)(lVar17 + 0x10) != (undefined8 *)0x0) &&
         (piVar21 = (int *)**(undefined8 **)(lVar17 + 0x10), piVar21 != (int *)0x0)) {
        do {
          iVar13 = piVar21[3];
          iVar12 = piVar21[2];
          iVar3 = piVar21[1];
          iVar4 = *piVar21;
          local_78 = *(Object **)piVar21;
          uStack_70 = *(undefined8 *)(piVar21 + 2);
          local_68[0] = (undefined1 (*) [16])0x0;
          if ((*(long **)(piVar21 + 4) != (long *)0x0) &&
             (puVar18 = (undefined8 *)**(long **)(piVar21 + 4), puVar18 != (undefined8 *)0x0)) {
            pauVar14 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
            *(undefined4 *)pauVar14[1] = 0;
            *pauVar14 = (undefined1  [16])0x0;
            local_68[0] = pauVar14;
            do {
              while( true ) {
                puVar15 = (undefined8 *)operator_new(0x40,DefaultAllocator::alloc);
                *(undefined1 (*) [16])(puVar15 + 1) = (undefined1  [16])0x0;
                *(undefined1 (*) [16])(puVar15 + 3) = (undefined1  [16])0x0;
                *(undefined1 (*) [16])(puVar15 + 5) = (undefined1  [16])0x0;
                puVar15[7] = 0;
                *puVar15 = *puVar18;
                lVar16 = puVar18[1];
                if (lVar16 != 0) {
                  CowData<char32_t>::_ref
                            ((CowData<char32_t> *)(puVar15 + 1),(CowData *)(puVar18 + 1));
                  lVar16 = puVar15[2];
                }
                if (lVar16 != puVar18[2]) {
                  CowData<char32_t>::_ref
                            ((CowData<char32_t> *)(puVar15 + 2),(CowData *)(puVar18 + 2));
                }
                if (puVar15[3] != puVar18[3]) {
                  CowData<char32_t>::_ref
                            ((CowData<char32_t> *)(puVar15 + 3),(CowData *)(puVar18 + 3));
                }
                if (puVar15[4] != puVar18[4]) {
                  CowData<char32_t>::_ref
                            ((CowData<char32_t> *)(puVar15 + 4),(CowData *)(puVar18 + 4));
                }
                lVar16 = *(long *)(*pauVar14 + 8);
                puVar15[5] = 0;
                puVar15[7] = pauVar14;
                puVar15[6] = lVar16;
                if (lVar16 != 0) {
                  *(undefined8 **)(lVar16 + 0x28) = puVar15;
                }
                lVar16 = *(long *)*pauVar14;
                *(undefined8 **)(*pauVar14 + 8) = puVar15;
                if (lVar16 != 0) break;
                puVar18 = (undefined8 *)puVar18[5];
                *(int *)pauVar14[1] = *(int *)pauVar14[1] + 1;
                *(undefined8 **)*pauVar14 = puVar15;
                if (puVar18 == (undefined8 *)0x0) goto LAB_0010f43a;
              }
              puVar18 = (undefined8 *)puVar18[5];
              *(int *)pauVar14[1] = *(int *)pauVar14[1] + 1;
            } while (puVar18 != (undefined8 *)0x0);
          }
LAB_0010f43a:
          String::num_int64((long)&local_100,iVar3,true);
          String::num_int64((long)&local_f8,iVar4,true);
          String::num_int64((long)&local_f0,iVar13,true);
          String::num_int64((long)&local_e8,iVar12,true);
          RichTextLabel::add_newline();
          local_88 = (long *)0x113a5b;
          pSVar8 = *(String **)(pLVar20 + 0x898);
          local_90 = 0;
          local_80 = 0xc;
          String::parse_latin1((StrRange *)&local_90);
          local_88 = (long *)&_LC296;
          local_a8 = 0;
          local_80 = 1;
          String::parse_latin1((StrRange *)&local_a8);
          local_88 = (long *)&_LC141;
          local_c0 = 0;
          local_80 = 1;
          String::parse_latin1((StrRange *)&local_c0);
          local_88 = (long *)&_LC296;
          local_d8 = 0;
          local_80 = 1;
          String::parse_latin1((StrRange *)&local_d8);
          operator+((char *)&local_e0,(String *)"[center]@@ ");
          String::operator+((String *)&local_d0,(String *)&local_e0);
          String::operator+((String *)&local_c8,(String *)&local_d0);
          String::operator+((String *)&local_b8,(String *)&local_c8);
          String::operator+((String *)&local_b0,(String *)&local_b8);
          String::operator+((String *)&local_a0,(String *)&local_b0);
          String::operator+((String *)&local_98,(String *)&local_a0);
          String::operator+((String *)&local_88,(String *)&local_98);
          RichTextLabel::append_text(pSVar8);
          plVar2 = local_88;
          if (local_88 != (long *)0x0) {
            LOCK();
            plVar1 = local_88 + -2;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_88 = (long *)0x0;
              Memory::free_static(plVar2 + -2,false);
            }
          }
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
          lVar16 = local_a0;
          if (local_a0 != 0) {
            LOCK();
            plVar2 = (long *)(local_a0 + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              local_a0 = 0;
              Memory::free_static((void *)(lVar16 + -0x10),false);
            }
          }
          lVar16 = local_b0;
          if (local_b0 != 0) {
            LOCK();
            plVar2 = (long *)(local_b0 + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              local_b0 = 0;
              Memory::free_static((void *)(lVar16 + -0x10),false);
            }
          }
          lVar16 = local_b8;
          if (local_b8 != 0) {
            LOCK();
            plVar2 = (long *)(local_b8 + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              local_b8 = 0;
              Memory::free_static((void *)(lVar16 + -0x10),false);
            }
          }
          lVar16 = local_c8;
          if (local_c8 != 0) {
            LOCK();
            plVar2 = (long *)(local_c8 + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              local_c8 = 0;
              Memory::free_static((void *)(lVar16 + -0x10),false);
            }
          }
          lVar16 = local_d0;
          if (local_d0 != 0) {
            LOCK();
            plVar2 = (long *)(local_d0 + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              local_d0 = 0;
              Memory::free_static((void *)(lVar16 + -0x10),false);
            }
          }
          lVar16 = local_e0;
          if (local_e0 != 0) {
            LOCK();
            plVar2 = (long *)(local_e0 + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              local_e0 = 0;
              Memory::free_static((void *)(lVar16 + -0x10),false);
            }
          }
          lVar16 = local_d8;
          if (local_d8 != 0) {
            LOCK();
            plVar2 = (long *)(local_d8 + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              local_d8 = 0;
              Memory::free_static((void *)(lVar16 + -0x10),false);
            }
          }
          lVar16 = local_c0;
          if (local_c0 != 0) {
            LOCK();
            plVar2 = (long *)(local_c0 + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              local_c0 = 0;
              Memory::free_static((void *)(lVar16 + -0x10),false);
            }
          }
          lVar16 = local_a8;
          if (local_a8 != 0) {
            LOCK();
            plVar2 = (long *)(local_a8 + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              local_a8 = 0;
              Memory::free_static((void *)(lVar16 + -0x10),false);
            }
          }
          lVar16 = local_90;
          if (local_90 != 0) {
            LOCK();
            plVar2 = (long *)(local_90 + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              local_90 = 0;
              Memory::free_static((void *)(lVar16 + -0x10),false);
            }
          }
          RichTextLabel::add_newline();
          if (iVar11 == 0) {
            _display_diff_split_view(pLVar20);
          }
          else if (iVar11 == 1) {
            _display_diff_unified_view(pLVar20);
          }
          RichTextLabel::add_newline();
          lVar16 = local_e8;
          if (local_e8 != 0) {
            LOCK();
            plVar2 = (long *)(local_e8 + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              local_e8 = 0;
              Memory::free_static((void *)(lVar16 + -0x10),false);
            }
          }
          lVar16 = local_f0;
          if (local_f0 != 0) {
            LOCK();
            plVar2 = (long *)(local_f0 + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              local_f0 = 0;
              Memory::free_static((void *)(lVar16 + -0x10),false);
            }
          }
          lVar16 = local_f8;
          if (local_f8 != 0) {
            LOCK();
            plVar2 = (long *)(local_f8 + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              local_f8 = 0;
              Memory::free_static((void *)(lVar16 + -0x10),false);
            }
          }
          lVar16 = local_100;
          if (local_100 != 0) {
            LOCK();
            plVar2 = (long *)(local_100 + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              local_100 = 0;
              Memory::free_static((void *)(lVar16 + -0x10),false);
            }
          }
          List<EditorVCSInterface::DiffLine,DefaultAllocator>::~List
                    ((List<EditorVCSInterface::DiffLine,DefaultAllocator> *)local_68);
          piVar21 = *(int **)(piVar21 + 6);
        } while (piVar21 != (int *)0x0);
      }
      RichTextLabel::pop();
      RichTextLabel::add_newline();
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VersionControlEditorPlugin::_clear_diff() */

void __thiscall VersionControlEditorPlugin::_clear_diff(VersionControlEditorPlugin *this)

{
  CowData<char32_t> *this_00;
  long lVar1;
  String *pSVar2;
  long lVar3;
  long *plVar4;
  long in_FS_OFFSET;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  RichTextLabel::clear();
  plVar4 = *(long **)(this + 0x8b0);
  if (plVar4 != (long *)0x0) {
    do {
      this_00 = (CowData<char32_t> *)*plVar4;
      if (this_00 == (CowData<char32_t> *)0x0) goto LAB_0011079c;
      if (*(long **)(this_00 + 0x28) == plVar4) {
        lVar3 = *(long *)(this_00 + 0x18);
        lVar1 = *(long *)(this_00 + 0x20);
        *plVar4 = lVar3;
        if (this_00 == (CowData<char32_t> *)plVar4[1]) {
          plVar4[1] = lVar1;
        }
        if (lVar1 != 0) {
          *(long *)(lVar1 + 0x18) = lVar3;
          lVar3 = *(long *)(this_00 + 0x18);
        }
        if (lVar3 != 0) {
          *(long *)(lVar3 + 0x20) = lVar1;
        }
        List<EditorVCSInterface::DiffHunk,DefaultAllocator>::~List
                  ((List<EditorVCSInterface::DiffHunk,DefaultAllocator> *)(this_00 + 0x10));
        CowData<char32_t>::_unref(this_00 + 8);
        CowData<char32_t>::_unref(this_00);
        Memory::free_static(this_00,false);
        *(int *)(plVar4 + 2) = (int)plVar4[2] + -1;
      }
      else {
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0,0);
      }
      plVar4 = *(long **)(this + 0x8b0);
    } while ((int)plVar4[2] != 0);
    Memory::free_static(plVar4,false);
    *(undefined8 *)(this + 0x8b0) = 0;
  }
LAB_0011079c:
  pSVar2 = *(String **)(this + 0x890);
  local_40 = 0;
  local_30 = 0;
  local_38 = &_LC53;
  String::parse_latin1((StrRange *)&local_40);
  Label::set_text(pSVar2);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VersionControlEditorPlugin::_commit() */

void __thiscall VersionControlEditorPlugin::_commit(VersionControlEditorPlugin *this)

{
  long lVar1;
  String *pSVar2;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = EditorVCSInterface::get_singleton();
  if (lVar1 == 0) {
    _err_print_error("_commit","editor/plugins/version_control_editor_plugin.cpp",0x10e,
                     "Parameter \"EditorVCSInterface::get_singleton()\" is null.",
                     "No VCS plugin is initialized. Select a Version Control Plugin from Project menu."
                     ,0,0);
  }
  else {
    TextEdit::get_text();
    String::strip_edges(SUB81(&local_58,0),SUB81((CowData<char32_t> *)&local_48,0));
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    if ((local_58 == 0) || (*(uint *)(local_58 + -8) < 2)) {
      _err_print_error("_commit","editor/plugins/version_control_editor_plugin.cpp",0x112,
                       "Condition \"msg.is_empty()\" is true.","No commit message was provided.",0,0
                      );
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    }
    else {
      pSVar2 = (String *)EditorVCSInterface::get_singleton();
      EditorVCSInterface::commit(pSVar2);
      BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0x888),0));
      Control::release_focus();
      Control::release_focus();
      pSVar2 = *(String **)(this + 0x870);
      local_50 = 0;
      local_48 = &_LC53;
      local_40 = 0;
      String::parse_latin1((StrRange *)&local_50);
      TextEdit::set_text(pSVar2);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      _refresh_stage_area(this);
      _refresh_commit_list(this);
      _refresh_branch_list(this);
      _clear_diff(this);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VersionControlEditorPlugin::_commit_message_gui_input(Ref<InputEvent> const&) */

void __thiscall
VersionControlEditorPlugin::_commit_message_gui_input(VersionControlEditorPlugin *this,Ref *param_1)

{
  char cVar1;
  int iVar2;
  Object *pOVar3;
  String *pSVar4;
  long in_FS_OFFSET;
  CowData<char32_t> local_40 [8];
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  cVar1 = Control::has_focus();
  if (cVar1 != '\0') {
    TextEdit::get_text();
    String::strip_edges(SUB81((CowData<char32_t> *)&local_38,0),SUB81(local_40,0));
    if ((local_38 == 0) || (iVar2 = (int)*(undefined8 *)(local_38 + -8), iVar2 == 0)) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
      CowData<char32_t>::_unref(local_40);
    }
    else {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
      CowData<char32_t>::_unref(local_40);
      if ((iVar2 != 1) && (*(long *)param_1 != 0)) {
        pOVar3 = (Object *)
                 __dynamic_cast(*(long *)param_1,&Object::typeinfo,&InputEventKey::typeinfo,0);
        if (pOVar3 != (Object *)0x0) {
          cVar1 = RefCounted::reference();
          if (cVar1 != '\0') {
            cVar1 = InputEvent::is_pressed();
            if (cVar1 != '\0') {
              pSVar4 = (String *)EditorSettings::get_singleton();
              local_38 = 0;
              String::parse_latin1((String *)&local_38,"version_control/commit");
              cVar1 = EditorSettings::is_shortcut(pSVar4,(Ref *)&local_38);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
              if (cVar1 != '\0') {
                Tree::get_root();
                iVar2 = TreeItem::get_child_count();
                if (iVar2 == 0) {
                  _move_all(this,*(Object **)(this + 2000));
                }
                _commit(this);
                Control::accept_event();
              }
            }
            cVar1 = RefCounted::unreference();
            if (cVar1 != '\0') {
              cVar1 = predelete_handler(pOVar3);
              if (cVar1 != '\0') {
                (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
                if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                  Memory::free_static(pOVar3,false);
                  return;
                }
                goto LAB_00110c13;
              }
            }
          }
        }
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00110c13:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VersionControlEditorPlugin::_branch_item_selected(int) */

void VersionControlEditorPlugin::_branch_item_selected(int param_1)

{
  long *plVar1;
  long lVar2;
  String *pSVar3;
  undefined4 in_register_0000003c;
  VersionControlEditorPlugin *this;
  long in_FS_OFFSET;
  long local_28;
  long local_20;
  
  this = (VersionControlEditorPlugin *)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = EditorVCSInterface::get_singleton();
  if (lVar2 == 0) {
    _err_print_error("_branch_item_selected","editor/plugins/version_control_editor_plugin.cpp",
                     0x123,"Parameter \"EditorVCSInterface::get_singleton()\" is null.",
                     "No VCS plugin is initialized. Select a Version Control Plugin from Project menu."
                     ,0,0);
  }
  else {
    OptionButton::get_item_text((int)&local_28);
    pSVar3 = (String *)EditorVCSInterface::get_singleton();
    EditorVCSInterface::checkout_branch(pSVar3);
    EditorFileSystem::scan_changes();
    ScriptEditor::reload_scripts(SUB81(ScriptEditor::script_editor,0));
    _refresh_branch_list(this);
    _refresh_commit_list(this);
    _refresh_stage_area(this);
    _clear_diff(this);
    _update_opened_tabs();
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
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VersionControlEditorPlugin::_pull() */

void __thiscall VersionControlEditorPlugin::_pull(VersionControlEditorPlugin *this)

{
  long *plVar1;
  long lVar2;
  String *pSVar3;
  long in_FS_OFFSET;
  long local_50;
  int local_48;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = EditorVCSInterface::get_singleton();
  if (lVar2 == 0) {
    _err_print_error("_pull","editor/plugins/version_control_editor_plugin.cpp",0x1bc,
                     "Parameter \"EditorVCSInterface::get_singleton()\" is null.",
                     "No VCS plugin is initialized. Select a Version Control Plugin from Project menu."
                     ,0,0);
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    pSVar3 = (String *)EditorVCSInterface::get_singleton();
    OptionButton::get_selected_metadata();
    Variant::operator_cast_to_String((Variant *)&local_50);
    EditorVCSInterface::pull(pSVar3);
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
    if (Variant::needs_deinit[local_48] != '\0') {
      Variant::_clear_internal();
    }
    _refresh_stage_area(this);
    _refresh_branch_list(this);
    _refresh_commit_list(this);
    _clear_diff(this);
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      _update_opened_tabs();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VersionControlEditorPlugin::~VersionControlEditorPlugin() */

void __thiscall
VersionControlEditorPlugin::~VersionControlEditorPlugin(VersionControlEditorPlugin *this)

{
  uint uVar1;
  Object *pOVar2;
  long *plVar3;
  long lVar4;
  char cVar5;
  long lVar6;
  void *pvVar7;
  long *plVar8;
  
  *(undefined ***)this = &PTR__initialize_classv_00120010;
  lVar6 = EditorVCSInterface::get_singleton();
  if (lVar6 != 0) {
    shut_down(this);
  }
  pOVar2 = *(Object **)(this + 0x7c0);
  cVar5 = predelete_handler(pOVar2);
  if (cVar5 != '\0') {
    (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
    Memory::free_static(pOVar2,false);
  }
  pOVar2 = *(Object **)(this + 0x880);
  cVar5 = predelete_handler(pOVar2);
  if (cVar5 != '\0') {
    (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
    Memory::free_static(pOVar2,false);
  }
  pOVar2 = *(Object **)(this + 0x668);
  cVar5 = predelete_handler(pOVar2);
  if (cVar5 != '\0') {
    (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
    Memory::free_static(pOVar2,false);
  }
  List<EditorVCSInterface::DiffFile,DefaultAllocator>::~List
            ((List<EditorVCSInterface::DiffFile,DefaultAllocator> *)(this + 0x8b0));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x848));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x840));
  pvVar7 = *(void **)(this + 0x798);
  if (pvVar7 != (void *)0x0) {
    if (*(int *)(this + 0x7bc) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x7b8) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x7bc) = 0;
        *(undefined1 (*) [16])(this + 0x7a8) = (undefined1  [16])0x0;
      }
      else {
        lVar6 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x7a0) + lVar6) != 0) {
            pvVar7 = *(void **)((long)pvVar7 + lVar6 * 2);
            *(int *)(*(long *)(this + 0x7a0) + lVar6) = 0;
            if (*(long *)((long)pvVar7 + 0x18) != 0) {
              cVar5 = RefCounted::unreference();
              if (cVar5 != '\0') {
                pOVar2 = *(Object **)((long)pvVar7 + 0x18);
                cVar5 = predelete_handler(pOVar2);
                if (cVar5 != '\0') {
                  (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
                  Memory::free_static(pOVar2,false);
                }
              }
            }
            Memory::free_static(pvVar7,false);
            pvVar7 = *(void **)(this + 0x798);
            *(undefined8 *)((long)pvVar7 + lVar6 * 2) = 0;
          }
          lVar6 = lVar6 + 4;
        } while ((ulong)uVar1 << 2 != lVar6);
        *(undefined4 *)(this + 0x7bc) = 0;
        *(undefined1 (*) [16])(this + 0x7a8) = (undefined1  [16])0x0;
        if (pvVar7 == (void *)0x0) goto LAB_0011102f;
      }
    }
    Memory::free_static(pvVar7,false);
    Memory::free_static(*(void **)(this + 0x7a0),false);
  }
LAB_0011102f:
  pvVar7 = *(void **)(this + 0x768);
  if (pvVar7 != (void *)0x0) {
    if (*(int *)(this + 0x78c) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x788) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x78c) = 0;
        *(undefined1 (*) [16])(this + 0x778) = (undefined1  [16])0x0;
      }
      else {
        lVar6 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x770) + lVar6) != 0) {
            *(int *)(*(long *)(this + 0x770) + lVar6) = 0;
            Memory::free_static(*(void **)((long)pvVar7 + lVar6 * 2),false);
            pvVar7 = *(void **)(this + 0x768);
            *(undefined8 *)((long)pvVar7 + lVar6 * 2) = 0;
          }
          lVar6 = lVar6 + 4;
        } while ((ulong)uVar1 << 2 != lVar6);
        *(undefined4 *)(this + 0x78c) = 0;
        *(undefined1 (*) [16])(this + 0x778) = (undefined1  [16])0x0;
        if (pvVar7 == (void *)0x0) goto LAB_001110c9;
      }
    }
    Memory::free_static(pvVar7,false);
    Memory::free_static(*(void **)(this + 0x770),false);
  }
LAB_001110c9:
  pvVar7 = *(void **)(this + 0x738);
  if (pvVar7 != (void *)0x0) {
    if (*(int *)(this + 0x75c) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x758) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x75c) = 0;
        *(undefined1 (*) [16])(this + 0x748) = (undefined1  [16])0x0;
      }
      else {
        lVar6 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x740) + lVar6) != 0) {
            pvVar7 = *(void **)((long)pvVar7 + lVar6 * 2);
            *(int *)(*(long *)(this + 0x740) + lVar6) = 0;
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar7 + 0x18));
            Memory::free_static(pvVar7,false);
            pvVar7 = *(void **)(this + 0x738);
            *(undefined8 *)((long)pvVar7 + lVar6 * 2) = 0;
          }
          lVar6 = lVar6 + 4;
        } while ((ulong)uVar1 << 2 != lVar6);
        *(undefined4 *)(this + 0x75c) = 0;
        *(undefined1 (*) [16])(this + 0x748) = (undefined1  [16])0x0;
        if (pvVar7 == (void *)0x0) goto LAB_00111173;
      }
    }
    Memory::free_static(pvVar7,false);
    Memory::free_static(*(void **)(this + 0x740),false);
  }
LAB_00111173:
  plVar8 = *(long **)(this + 0x660);
  if (plVar8 != (long *)0x0) {
    do {
      plVar3 = (long *)*plVar8;
      if (plVar3 == (long *)0x0) {
        if ((int)plVar8[2] != 0) {
          _err_print_error("~List","./core/templates/list.h",0x316,
                           "Condition \"_data->size_cache\" is true.",0,0);
          goto LAB_00111209;
        }
        break;
      }
      if (plVar8 == (long *)plVar3[3]) {
        lVar6 = plVar3[1];
        lVar4 = plVar3[2];
        *plVar8 = lVar6;
        if (plVar3 == (long *)plVar8[1]) {
          plVar8[1] = lVar4;
        }
        if (lVar4 != 0) {
          *(long *)(lVar4 + 8) = lVar6;
          lVar6 = plVar3[1];
        }
        if (lVar6 != 0) {
          *(long *)(lVar6 + 0x10) = lVar4;
        }
        if ((StringName::configured != '\0') && (*plVar3 != 0)) {
          StringName::unref();
        }
        Memory::free_static(plVar3,false);
        *(int *)(plVar8 + 2) = (int)plVar8[2] + -1;
      }
      else {
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0,0);
      }
      plVar8 = *(long **)(this + 0x660);
    } while ((int)plVar8[2] != 0);
    Memory::free_static(plVar8,false);
  }
LAB_00111209:
  EditorPlugin::~EditorPlugin((EditorPlugin *)this);
  return;
}



/* VersionControlEditorPlugin::~VersionControlEditorPlugin() */

void __thiscall
VersionControlEditorPlugin::~VersionControlEditorPlugin(VersionControlEditorPlugin *this)

{
  ~VersionControlEditorPlugin(this);
  operator_delete(this,0x8b8);
  return;
}



/* VersionControlEditorPlugin::_load_diff(Object*) */

void __thiscall
VersionControlEditorPlugin::_load_diff(VersionControlEditorPlugin *this,Object *param_1)

{
  code *pcVar1;
  String *pSVar2;
  CowData<char32_t> *pCVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long in_FS_OFFSET;
  Variant local_98 [8];
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_70 [16];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar6 = EditorVCSInterface::get_singleton();
  if (lVar6 == 0) {
    _err_print_error("_load_diff","editor/plugins/version_control_editor_plugin.cpp",0x1e9,
                     "Parameter \"EditorVCSInterface::get_singleton()\" is null.",
                     "No VCS plugin is initialized. Select a Version Control Plugin from Project menu."
                     ,0,0);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
    goto LAB_00111cb5;
  }
  BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0x888),0));
  if (param_1 != (Object *)0x0) {
    param_1 = (Object *)__dynamic_cast(param_1,&Object::typeinfo,&Tree::typeinfo,0);
  }
  if (*(Object **)(this + 0x7c8) == param_1) {
    this[0x8a8] = (VersionControlEditorPlugin)0x0;
    plVar7 = (long *)Tree::get_selected();
    pcVar1 = *(code **)(*plVar7 + 0xb8);
    local_70 = (undefined1  [16])0x0;
    local_78 = 0;
    if ((_load_diff(Object*)::{lambda()#1}::operator()()::sname == '\0') &&
       (iVar5 = __cxa_guard_acquire(&_load_diff(Object*)::{lambda()#1}::operator()()::sname),
       iVar5 != 0)) {
      _scs_create((char *)&_load_diff(Object*)::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_load_diff(Object*)::{lambda()#1}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_load_diff(Object*)::{lambda()#1}::operator()()::sname);
    }
    (*pcVar1)(local_58,plVar7,&_load_diff(Object*)::{lambda()#1}::operator()()::sname,&local_78);
    Variant::operator_cast_to_String(local_98);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
    }
    pSVar2 = *(String **)(this + 0x890);
    local_88 = 0;
    String::parse_latin1((String *)&local_88,"");
    local_90 = 0;
    String::parse_latin1((String *)&local_90,"Staged Changes");
    TTR((String *)&local_80,(String *)&local_90);
    Label::set_text(pSVar2);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    uVar8 = EditorVCSInterface::get_singleton();
    EditorVCSInterface::get_diff((String *)&local_80,uVar8,local_98,1);
    plVar7 = *(long **)(this + 0x8b0);
    if (plVar7 != (long *)0x0) {
      do {
        pCVar3 = (CowData<char32_t> *)*plVar7;
        if (pCVar3 == (CowData<char32_t> *)0x0) goto LAB_00111605;
        if (*(long **)(pCVar3 + 0x28) == plVar7) {
          lVar6 = *(long *)(pCVar3 + 0x18);
          lVar4 = *(long *)(pCVar3 + 0x20);
          *plVar7 = lVar6;
          if (pCVar3 == (CowData<char32_t> *)plVar7[1]) {
            plVar7[1] = lVar4;
          }
          if (lVar4 != 0) {
            *(long *)(lVar4 + 0x18) = lVar6;
            lVar6 = *(long *)(pCVar3 + 0x18);
          }
          if (lVar6 != 0) {
            *(long *)(lVar6 + 0x20) = lVar4;
          }
          List<EditorVCSInterface::DiffHunk,DefaultAllocator>::~List
                    ((List<EditorVCSInterface::DiffHunk,DefaultAllocator> *)(pCVar3 + 0x10));
          CowData<char32_t>::_unref(pCVar3 + 8);
          CowData<char32_t>::_unref(pCVar3);
          Memory::free_static(pCVar3,false);
          *(int *)(plVar7 + 2) = (int)plVar7[2] + -1;
        }
        else {
          _err_print_error("erase","./core/templates/list.h",0xe7,
                           "Condition \"p_I->data != this\" is true. Returning: false",0,0);
        }
        plVar7 = *(long **)(this + 0x8b0);
      } while ((int)plVar7[2] != 0);
LAB_001115fb:
      Memory::free_static(plVar7,false);
    }
LAB_00111605:
    uVar8 = local_80;
    local_80 = 0;
    *(undefined8 *)(this + 0x8b0) = uVar8;
    List<EditorVCSInterface::DiffFile,DefaultAllocator>::~List
              ((List<EditorVCSInterface::DiffFile,DefaultAllocator> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  }
  else {
    if (*(Object **)(this + 2000) == param_1) {
      this[0x8a8] = (VersionControlEditorPlugin)0x0;
      plVar7 = (long *)Tree::get_selected();
      pcVar1 = *(code **)(*plVar7 + 0xb8);
      local_70 = (undefined1  [16])0x0;
      local_78 = 0;
      if ((_load_diff(Object*)::{lambda()#2}::operator()()::sname == '\0') &&
         (iVar5 = __cxa_guard_acquire(&_load_diff(Object*)::{lambda()#2}::operator()()::sname),
         iVar5 != 0)) {
        _scs_create((char *)&_load_diff(Object*)::{lambda()#2}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_load_diff(Object*)::{lambda()#2}::operator()()::sname
                     ,&__dso_handle);
        __cxa_guard_release(&_load_diff(Object*)::{lambda()#2}::operator()()::sname);
      }
      (*pcVar1)(local_58,plVar7,&_load_diff(Object*)::{lambda()#2}::operator()()::sname,&local_78);
      Variant::operator_cast_to_String(local_98);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[(int)local_78] != '\0') {
        Variant::_clear_internal();
      }
      pSVar2 = *(String **)(this + 0x890);
      local_88 = 0;
      String::parse_latin1((String *)&local_88,"");
      local_90 = 0;
      String::parse_latin1((String *)&local_90,"Unstaged Changes");
      TTR((String *)&local_80,(String *)&local_90);
      Label::set_text(pSVar2);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      uVar8 = EditorVCSInterface::get_singleton();
      EditorVCSInterface::get_diff((String *)&local_80,uVar8,local_98,2);
      plVar7 = *(long **)(this + 0x8b0);
      if (plVar7 != (long *)0x0) {
        do {
          pCVar3 = (CowData<char32_t> *)*plVar7;
          if (pCVar3 == (CowData<char32_t> *)0x0) goto LAB_00111605;
          if (*(long **)(pCVar3 + 0x28) == plVar7) {
            lVar6 = *(long *)(pCVar3 + 0x18);
            lVar4 = *(long *)(pCVar3 + 0x20);
            *plVar7 = lVar6;
            if (pCVar3 == (CowData<char32_t> *)plVar7[1]) {
              plVar7[1] = lVar4;
            }
            if (lVar4 != 0) {
              *(long *)(lVar4 + 0x18) = lVar6;
              lVar6 = *(long *)(pCVar3 + 0x18);
            }
            if (lVar6 != 0) {
              *(long *)(lVar6 + 0x20) = lVar4;
            }
            List<EditorVCSInterface::DiffHunk,DefaultAllocator>::~List
                      ((List<EditorVCSInterface::DiffHunk,DefaultAllocator> *)(pCVar3 + 0x10));
            CowData<char32_t>::_unref(pCVar3 + 8);
            CowData<char32_t>::_unref(pCVar3);
            Memory::free_static(pCVar3,false);
            *(int *)(plVar7 + 2) = (int)plVar7[2] + -1;
          }
          else {
            _err_print_error("erase","./core/templates/list.h",0xe7,
                             "Condition \"p_I->data != this\" is true. Returning: false",0,0);
          }
          plVar7 = *(long **)(this + 0x8b0);
        } while ((int)plVar7[2] != 0);
        goto LAB_001115fb;
      }
      goto LAB_00111605;
    }
    if (*(Object **)(this + 0x7d8) == param_1) {
      this[0x8a8] = (VersionControlEditorPlugin)0x1;
      Tree::get_selected();
      TreeItem::get_metadata((int)(Variant *)local_58);
      Variant::operator_cast_to_Dictionary(local_98);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((_load_diff(Object*)::{lambda()#3}::operator()()::sname == '\0') &&
         (iVar5 = __cxa_guard_acquire(&_load_diff(Object*)::{lambda()#3}::operator()()::sname),
         iVar5 != 0)) {
        _scs_create((char *)&_load_diff(Object*)::{lambda()#3}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_load_diff(Object*)::{lambda()#3}::operator()()::sname
                     ,&__dso_handle);
        __cxa_guard_release(&_load_diff(Object*)::{lambda()#3}::operator()()::sname);
      }
      Variant::Variant((Variant *)local_58,
                       (StringName *)&_load_diff(Object*)::{lambda()#3}::operator()()::sname);
      Dictionary::operator[](local_98);
      Variant::operator_cast_to_String((Variant *)&local_90);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((_load_diff(Object*)::{lambda()#4}::operator()()::sname == '\0') &&
         (iVar5 = __cxa_guard_acquire(&_load_diff(Object*)::{lambda()#4}::operator()()::sname),
         iVar5 != 0)) {
        _scs_create((char *)&_load_diff(Object*)::{lambda()#4}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_load_diff(Object*)::{lambda()#4}::operator()()::sname
                     ,&__dso_handle);
        __cxa_guard_release(&_load_diff(Object*)::{lambda()#4}::operator()()::sname);
      }
      Variant::Variant((Variant *)local_58,
                       (StringName *)&_load_diff(Object*)::{lambda()#4}::operator()()::sname);
      Dictionary::operator[](local_98);
      Variant::operator_cast_to_String((Variant *)&local_88);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      Label::set_text(*(String **)(this + 0x890));
      uVar8 = EditorVCSInterface::get_singleton();
      EditorVCSInterface::get_diff
                ((List<EditorVCSInterface::DiffFile,DefaultAllocator> *)&local_80,uVar8,
                 (Variant *)&local_90,0);
      plVar7 = *(long **)(this + 0x8b0);
      if (plVar7 != (long *)0x0) {
        do {
          pCVar3 = (CowData<char32_t> *)*plVar7;
          if (pCVar3 == (CowData<char32_t> *)0x0) goto LAB_00111985;
          if (*(long **)(pCVar3 + 0x28) == plVar7) {
            lVar6 = *(long *)(pCVar3 + 0x18);
            lVar4 = *(long *)(pCVar3 + 0x20);
            *plVar7 = lVar6;
            if (pCVar3 == (CowData<char32_t> *)plVar7[1]) {
              plVar7[1] = lVar4;
            }
            if (lVar4 != 0) {
              *(long *)(lVar4 + 0x18) = lVar6;
              lVar6 = *(long *)(pCVar3 + 0x18);
            }
            if (lVar6 != 0) {
              *(long *)(lVar6 + 0x20) = lVar4;
            }
            List<EditorVCSInterface::DiffHunk,DefaultAllocator>::~List
                      ((List<EditorVCSInterface::DiffHunk,DefaultAllocator> *)(pCVar3 + 0x10));
            CowData<char32_t>::_unref(pCVar3 + 8);
            CowData<char32_t>::_unref(pCVar3);
            Memory::free_static(pCVar3,false);
            *(int *)(plVar7 + 2) = (int)plVar7[2] + -1;
          }
          else {
            _err_print_error("erase","./core/templates/list.h",0xe7,
                             "Condition \"p_I->data != this\" is true. Returning: false",0,0);
          }
          plVar7 = *(long **)(this + 0x8b0);
        } while ((int)plVar7[2] != 0);
        Memory::free_static(plVar7,false);
      }
LAB_00111985:
      uVar8 = local_80;
      local_80 = 0;
      *(undefined8 *)(this + 0x8b0) = uVar8;
      List<EditorVCSInterface::DiffFile,DefaultAllocator>::~List
                ((List<EditorVCSInterface::DiffFile,DefaultAllocator> *)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      Dictionary::~Dictionary((Dictionary *)local_98);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    _display_diff((int)this);
    return;
  }
LAB_00111cb5:
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



/* EditorPlugin::selected_notify() */

void EditorPlugin::selected_notify(void)

{
  return;
}



/* EditorPlugin::edited_scene_changed() */

void EditorPlugin::edited_scene_changed(void)

{
  return;
}



/* VersionControlEditorPlugin::is_class_ptr(void*) const */

uint __thiscall
VersionControlEditorPlugin::is_class_ptr(VersionControlEditorPlugin *this,void *param_1)

{
  return (uint)CONCAT71(0x1209,(undefined4 *)param_1 == &EditorPlugin::get_class_ptr_static()::ptr)
         | (uint)CONCAT71(0x1207,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1209,(undefined4 *)param_1 == &Node::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1209,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* VersionControlEditorPlugin::_getv(StringName const&, Variant&) const */

undefined8 VersionControlEditorPlugin::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* VersionControlEditorPlugin::_setv(StringName const&, Variant const&) */

undefined8 VersionControlEditorPlugin::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* VersionControlEditorPlugin::_property_can_revertv(StringName const&) const */

undefined8 VersionControlEditorPlugin::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* VersionControlEditorPlugin::_property_get_revertv(StringName const&, Variant&) const */

undefined8 VersionControlEditorPlugin::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* CallableCustomMethodPointer<VersionControlEditorPlugin, void,
   int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<VersionControlEditorPlugin,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<VersionControlEditorPlugin,void,int> *this)

{
  return;
}



/* CallableCustomMethodPointer<VersionControlEditorPlugin, void, Ref<InputEvent>
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<VersionControlEditorPlugin,void,Ref<InputEvent>const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<VersionControlEditorPlugin,void,Ref<InputEvent>const&> *this)

{
  return;
}



/* CallableCustomMethodPointer<VersionControlEditorPlugin, void, Object*, int, int,
   int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<VersionControlEditorPlugin,void,Object*,int,int,int>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<VersionControlEditorPlugin,void,Object*,int,int,int> *this)

{
  return;
}



/* CallableCustomMethodPointer<VersionControlEditorPlugin, void,
   Object*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<VersionControlEditorPlugin,void,Object*>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<VersionControlEditorPlugin,void,Object*> *this)

{
  return;
}



/* CallableCustomMethodPointer<VersionControlEditorPlugin, void, Variant
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<VersionControlEditorPlugin,void,Variant_const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<VersionControlEditorPlugin,void,Variant_const&> *this)

{
  return;
}



/* CallableCustomMethodPointer<VersionControlEditorPlugin, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<VersionControlEditorPlugin,void,String_const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<VersionControlEditorPlugin,void,String_const&> *this)

{
  return;
}



/* CallableCustomMethodPointer<VersionControlEditorPlugin, void,
   bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<VersionControlEditorPlugin,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<VersionControlEditorPlugin,void,bool> *this)

{
  return;
}



/* CallableCustomMethodPointer<VersionControlEditorPlugin, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<VersionControlEditorPlugin,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<VersionControlEditorPlugin,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<VersionControlEditorPlugin, void, int>::get_argument_count(bool&)
   const */

undefined8 __thiscall
CallableCustomMethodPointer<VersionControlEditorPlugin,void,int>::get_argument_count
          (CallableCustomMethodPointer<VersionControlEditorPlugin,void,int> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<VersionControlEditorPlugin, void, Ref<InputEvent>
   const&>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<VersionControlEditorPlugin,void,Ref<InputEvent>const&>::
get_argument_count(CallableCustomMethodPointer<VersionControlEditorPlugin,void,Ref<InputEvent>const&>
                   *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<VersionControlEditorPlugin, void, Object*, int, int,
   int>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<VersionControlEditorPlugin,void,Object*,int,int,int>::get_argument_count
          (CallableCustomMethodPointer<VersionControlEditorPlugin,void,Object*,int,int,int> *this,
          bool *param_1)

{
  *param_1 = true;
  return 4;
}



/* CallableCustomMethodPointer<VersionControlEditorPlugin, void, Object*>::get_argument_count(bool&)
   const */

undefined8 __thiscall
CallableCustomMethodPointer<VersionControlEditorPlugin,void,Object*>::get_argument_count
          (CallableCustomMethodPointer<VersionControlEditorPlugin,void,Object*> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<VersionControlEditorPlugin, void, Variant
   const&>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<VersionControlEditorPlugin,void,Variant_const&>::get_argument_count
          (CallableCustomMethodPointer<VersionControlEditorPlugin,void,Variant_const&> *this,
          bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<VersionControlEditorPlugin, void, String
   const&>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<VersionControlEditorPlugin,void,String_const&>::get_argument_count
          (CallableCustomMethodPointer<VersionControlEditorPlugin,void,String_const&> *this,
          bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<VersionControlEditorPlugin, void, bool>::get_argument_count(bool&)
   const */

undefined8 __thiscall
CallableCustomMethodPointer<VersionControlEditorPlugin,void,bool>::get_argument_count
          (CallableCustomMethodPointer<VersionControlEditorPlugin,void,bool> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<VersionControlEditorPlugin, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<VersionControlEditorPlugin,void>::get_argument_count
          (CallableCustomMethodPointer<VersionControlEditorPlugin,void> *this,bool *param_1)

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



/* CallableCustomMethodPointer<VersionControlEditorPlugin, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<VersionControlEditorPlugin,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<VersionControlEditorPlugin,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<VersionControlEditorPlugin, void,
   bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<VersionControlEditorPlugin,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<VersionControlEditorPlugin,void,bool> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<VersionControlEditorPlugin, void, Variant
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<VersionControlEditorPlugin,void,Variant_const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<VersionControlEditorPlugin,void,Variant_const&> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<VersionControlEditorPlugin, void, Object*, int, int,
   int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<VersionControlEditorPlugin,void,Object*,int,int,int>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<VersionControlEditorPlugin,void,Object*,int,int,int> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<VersionControlEditorPlugin, void, Ref<InputEvent>
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<VersionControlEditorPlugin,void,Ref<InputEvent>const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<VersionControlEditorPlugin,void,Ref<InputEvent>const&> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<VersionControlEditorPlugin, void,
   Object*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<VersionControlEditorPlugin,void,Object*>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<VersionControlEditorPlugin,void,Object*> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<VersionControlEditorPlugin, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<VersionControlEditorPlugin,void,String_const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<VersionControlEditorPlugin,void,String_const&> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<VersionControlEditorPlugin, void,
   int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<VersionControlEditorPlugin,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<VersionControlEditorPlugin,void,int> *this)

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



/* HFlowContainer::_property_get_revertv(StringName const&, Variant&) const */

undefined8 HFlowContainer::_property_get_revertv(StringName *param_1,Variant *param_2)

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
  
  if ((code *)PTR__property_can_revert_00125008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* VBoxContainer::_property_can_revertv(StringName const&) const */

undefined8 VBoxContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00125008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* HFlowContainer::_property_can_revertv(StringName const&) const */

undefined8 HFlowContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00125008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* VersionControlEditorPlugin::_validate_propertyv(PropertyInfo&) const */

void VersionControlEditorPlugin::_validate_propertyv(PropertyInfo *param_1)

{
  if ((code *)PTR__validate_property_00125010 != Object::_validate_property) {
    Node::_validate_property(param_1);
    return;
  }
  return;
}



/* CallableCustomMethodPointer<VersionControlEditorPlugin, void, Object*, int, int,
   int>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<VersionControlEditorPlugin,void,Object*,int,int,int>::get_object
          (CallableCustomMethodPointer<VersionControlEditorPlugin,void,Object*,int,int,int> *this)

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
      goto LAB_00113b9d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00113b9d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00113b9d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<VersionControlEditorPlugin, void, bool>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<VersionControlEditorPlugin,void,bool>::get_object
          (CallableCustomMethodPointer<VersionControlEditorPlugin,void,bool> *this)

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
      goto LAB_00113c9d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00113c9d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00113c9d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<VersionControlEditorPlugin, void, int>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<VersionControlEditorPlugin,void,int>::get_object
          (CallableCustomMethodPointer<VersionControlEditorPlugin,void,int> *this)

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
      goto LAB_00113d9d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00113d9d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00113d9d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<VersionControlEditorPlugin, void, Ref<InputEvent>
   const&>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<VersionControlEditorPlugin,void,Ref<InputEvent>const&>::get_object
          (CallableCustomMethodPointer<VersionControlEditorPlugin,void,Ref<InputEvent>const&> *this)

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
      goto LAB_00113e9d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00113e9d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00113e9d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<VersionControlEditorPlugin, void, Variant const&>::get_object() const
    */

undefined8 __thiscall
CallableCustomMethodPointer<VersionControlEditorPlugin,void,Variant_const&>::get_object
          (CallableCustomMethodPointer<VersionControlEditorPlugin,void,Variant_const&> *this)

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
      goto LAB_00113f9d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00113f9d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00113f9d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<VersionControlEditorPlugin, void, String const&>::get_object() const
    */

undefined8 __thiscall
CallableCustomMethodPointer<VersionControlEditorPlugin,void,String_const&>::get_object
          (CallableCustomMethodPointer<VersionControlEditorPlugin,void,String_const&> *this)

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
      goto LAB_0011409d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0011409d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0011409d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<VersionControlEditorPlugin, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<VersionControlEditorPlugin,void>::get_object
          (CallableCustomMethodPointer<VersionControlEditorPlugin,void> *this)

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
      goto LAB_0011419d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0011419d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0011419d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<VersionControlEditorPlugin, void, Object*>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<VersionControlEditorPlugin,void,Object*>::get_object
          (CallableCustomMethodPointer<VersionControlEditorPlugin,void,Object*> *this)

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
      goto LAB_0011429d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0011429d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0011429d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* VBoxContainer::_validate_propertyv(PropertyInfo&) const */

void VBoxContainer::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_00125018 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* HFlowContainer::_validate_propertyv(PropertyInfo&) const */

void HFlowContainer::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_00125020 == Control::_validate_property) {
    return;
  }
  FlowContainer::_validate_property(param_1);
  return;
}



/* HBoxContainer::_validate_propertyv(PropertyInfo&) const */

void HBoxContainer::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_00125018 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* HFlowContainer::is_class_ptr(void*) const */

uint HFlowContainer::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x1209,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1207,in_RSI == &FlowContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1209,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1209,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1209,in_RSI == &Node::get_class_ptr_static()::ptr) |
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
    uVar1 = (uint)CONCAT71(0x1209,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1209,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1209,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1209,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1209,in_RSI == &Node::get_class_ptr_static()::ptr) |
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
    uVar1 = (uint)CONCAT71(0x1209,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1209,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1209,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1209,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1209,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* HBoxContainer::_setv(StringName const&, Variant const&) */

undefined8 HBoxContainer::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_00125028 != CanvasItem::_set) {
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
    if ((code *)PTR__set_00125028 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* HFlowContainer::_setv(StringName const&, Variant const&) */

undefined8 HFlowContainer::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_00125028 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x001147b8) */
/* HBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 HBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00125030 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00114828) */
/* HFlowContainer::_getv(StringName const&, Variant&) const */

undefined8 HFlowContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00125030 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00114898) */
/* VBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 VBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00125030 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* HFlowContainer::~HFlowContainer() */

void __thiscall HFlowContainer::~HFlowContainer(HFlowContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = Container::_notification;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00114900;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00114900:
  Control::~Control((Control *)this);
  return;
}



/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = Container::_notification;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00114960;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00114960:
  Control::~Control((Control *)this);
  return;
}



/* VBoxContainer::~VBoxContainer() */

void __thiscall VBoxContainer::~VBoxContainer(VBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = Container::_notification;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001149c0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_001149c0:
  Control::~Control((Control *)this);
  return;
}



/* VBoxContainer::~VBoxContainer() */

void __thiscall VBoxContainer::~VBoxContainer(VBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = Container::_notification;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00114a20;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00114a20:
  Control::~Control((Control *)this);
  operator_delete(this,0xa10);
  return;
}



/* HFlowContainer::~HFlowContainer() */

void __thiscall HFlowContainer::~HFlowContainer(HFlowContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = Container::_notification;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00114a90;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00114a90:
  Control::~Control((Control *)this);
  operator_delete(this,0xa28);
  return;
}



/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = Container::_notification;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00114b00;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00114b00:
  Control::~Control((Control *)this);
  operator_delete(this,0xa10);
  return;
}



/* HBoxContainer::_notificationv(int, bool) */

void __thiscall HBoxContainer::_notificationv(HBoxContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_00125038 != Container::_notification) {
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
  if ((code *)PTR__notification_00125038 == Container::_notification) {
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
    if ((code *)PTR__notification_00125038 != Container::_notification) {
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
  if ((code *)PTR__notification_00125038 == Container::_notification) {
    return;
  }
  BoxContainer::_notification(iVar1);
  return;
}



/* HFlowContainer::_notificationv(int, bool) */

void __thiscall HFlowContainer::_notificationv(HFlowContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_00125040 != Container::_notification) {
      FlowContainer::_notification(iVar1);
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
  if ((code *)PTR__notification_00125040 == Container::_notification) {
    return;
  }
  FlowContainer::_notification(iVar1);
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



/* HFlowContainer::_get_class_namev() const */

undefined8 * HFlowContainer::_get_class_namev(void)

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
LAB_00114f33:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00114f33;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"HFlowContainer");
      goto LAB_00114f9e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"HFlowContainer");
LAB_00114f9e:
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
LAB_00115023:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00115023;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
      goto LAB_0011508e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
LAB_0011508e:
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
LAB_00115113:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00115113;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
      goto LAB_0011517e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
LAB_0011517e:
  return &_get_class_namev()::_class_name_static;
}



/* VersionControlEditorPlugin::_get_class_namev() const */

undefined8 * VersionControlEditorPlugin::_get_class_namev(void)

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
LAB_00115203:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00115203;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"VersionControlEditorPlugin")
      ;
      goto LAB_0011526e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"VersionControlEditorPlugin");
LAB_0011526e:
  return &_get_class_namev()::_class_name_static;
}



/* VersionControlEditorPlugin::_update_extra_options() [clone .cold] */

void VersionControlEditorPlugin::_update_extra_options(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* VersionControlEditorPlugin::_update_opened_tabs() [clone .cold] */

void VersionControlEditorPlugin::_update_opened_tabs(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* VersionControlEditorPlugin::_display_diff_unified_view(List<EditorVCSInterface::DiffLine,
   DefaultAllocator>&) [clone .cold] */

void VersionControlEditorPlugin::_display_diff_unified_view(List *param_1)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* VersionControlEditorPlugin::_refresh_branch_list() [clone .cold] */

void VersionControlEditorPlugin::_refresh_branch_list(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* VersionControlEditorPlugin::_refresh_remote_list() [clone .cold] */

void VersionControlEditorPlugin::_refresh_remote_list(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* VersionControlEditorPlugin::_cell_button_pressed(Object*, int, int, int) [clone .cold] */

void VersionControlEditorPlugin::_cell_button_pressed
               (Object *param_1,int param_2,int param_3,int param_4)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* VersionControlEditorPlugin::_display_diff(int) [clone .cold] */

void VersionControlEditorPlugin::_display_diff(int param_1)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
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



/* HFlowContainer::get_class() const */

void HFlowContainer::get_class(void)

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



/* VersionControlEditorPlugin::get_class() const */

void VersionControlEditorPlugin::get_class(void)

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
            if (lVar3 == 0) goto LAB_0011573f;
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
LAB_0011573f:
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
    if (cVar6 != '\0') goto LAB_001157f3;
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
      if (cVar6 != '\0') goto LAB_001157f3;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar8 = String::operator==(param_1,"Object");
      return uVar8;
    }
  }
  else {
LAB_001157f3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VersionControlEditorPlugin::is_class(String const&) const */

undefined8 __thiscall
VersionControlEditorPlugin::is_class(VersionControlEditorPlugin *this,String *param_1)

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
            if (lVar3 == 0) goto LAB_001159af;
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
LAB_001159af:
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
    if (cVar6 != '\0') goto LAB_00115a63;
  }
  cVar6 = String::operator==(param_1,"VersionControlEditorPlugin");
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
      if (cVar6 != '\0') goto LAB_00115a63;
    }
    cVar6 = String::operator==(param_1,"EditorPlugin");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar8 = Node::is_class((Node *)this,param_1);
        return uVar8;
      }
      goto LAB_00115ba8;
    }
  }
LAB_00115a63:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00115ba8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPlugin::EditorPlugin() */

void __thiscall EditorPlugin::EditorPlugin(EditorPlugin *this)

{
  Node::Node((Node *)this);
  *(code **)this = OptionButton::add_item;
  *(undefined2 *)(this + 0x408) = 0;
  *(undefined1 (*) [16])(this + 0x410) = (undefined1  [16])0x0;
  StringName::StringName((StringName *)(this + 0x420),"_forward_canvas_gui_input",false);
  this[0x428] = (EditorPlugin)0x0;
  *(undefined8 *)(this + 0x430) = 0;
  StringName::StringName((StringName *)(this + 0x438),"_forward_canvas_draw_over_viewport",false);
  this[0x440] = (EditorPlugin)0x0;
  *(undefined8 *)(this + 0x448) = 0;
  StringName::StringName
            ((StringName *)(this + 0x450),"_forward_canvas_force_draw_over_viewport",false);
  this[0x458] = (EditorPlugin)0x0;
  *(undefined8 *)(this + 0x460) = 0;
  StringName::StringName((StringName *)(this + 0x468),"_forward_3d_gui_input",false);
  this[0x470] = (EditorPlugin)0x0;
  *(undefined8 *)(this + 0x478) = 0;
  StringName::StringName((StringName *)(this + 0x480),"_forward_3d_draw_over_viewport",false);
  this[0x488] = (EditorPlugin)0x0;
  *(undefined8 *)(this + 0x490) = 0;
  StringName::StringName((StringName *)(this + 0x498),"_forward_3d_force_draw_over_viewport",false);
  this[0x4a0] = (EditorPlugin)0x0;
  *(undefined8 *)(this + 0x4a8) = 0;
  StringName::StringName((StringName *)(this + 0x4b0),"_get_plugin_name",false);
  this[0x4b8] = (EditorPlugin)0x0;
  *(undefined8 *)(this + 0x4c0) = 0;
  StringName::StringName((StringName *)(this + 0x4c8),"_get_plugin_icon",false);
  this[0x4d0] = (EditorPlugin)0x0;
  *(undefined8 *)(this + 0x4d8) = 0;
  StringName::StringName((StringName *)(this + 0x4e0),"_has_main_screen",false);
  this[0x4e8] = (EditorPlugin)0x0;
  *(undefined8 *)(this + 0x4f0) = 0;
  StringName::StringName((StringName *)(this + 0x4f8),"_make_visible",false);
  this[0x500] = (EditorPlugin)0x0;
  *(undefined8 *)(this + 0x508) = 0;
  StringName::StringName((StringName *)(this + 0x510),"_edit",false);
  this[0x518] = (EditorPlugin)0x0;
  *(undefined8 *)(this + 0x520) = 0;
  StringName::StringName((StringName *)(this + 0x528),"_handles",false);
  this[0x530] = (EditorPlugin)0x0;
  *(undefined8 *)(this + 0x538) = 0;
  StringName::StringName((StringName *)(this + 0x540),"_get_state",false);
  this[0x548] = (EditorPlugin)0x0;
  *(undefined8 *)(this + 0x550) = 0;
  StringName::StringName((StringName *)(this + 0x558),"_set_state",false);
  this[0x560] = (EditorPlugin)0x0;
  *(undefined8 *)(this + 0x568) = 0;
  StringName::StringName((StringName *)(this + 0x570),"_clear",false);
  this[0x578] = (EditorPlugin)0x0;
  *(undefined8 *)(this + 0x580) = 0;
  StringName::StringName((StringName *)(this + 0x588),"_get_unsaved_status",false);
  this[0x590] = (EditorPlugin)0x0;
  *(undefined8 *)(this + 0x598) = 0;
  StringName::StringName((StringName *)(this + 0x5a0),"_save_external_data",false);
  this[0x5a8] = (EditorPlugin)0x0;
  *(undefined8 *)(this + 0x5b0) = 0;
  StringName::StringName((StringName *)(this + 0x5b8),"_apply_changes",false);
  this[0x5c0] = (EditorPlugin)0x0;
  *(undefined8 *)(this + 0x5c8) = 0;
  StringName::StringName((StringName *)(this + 0x5d0),"_get_breakpoints",false);
  this[0x5d8] = (EditorPlugin)0x0;
  *(undefined8 *)(this + 0x5e0) = 0;
  StringName::StringName((StringName *)(this + 0x5e8),"_set_window_layout",false);
  this[0x5f0] = (EditorPlugin)0x0;
  *(undefined8 *)(this + 0x5f8) = 0;
  StringName::StringName((StringName *)(this + 0x600),"_get_window_layout",false);
  this[0x608] = (EditorPlugin)0x0;
  *(undefined8 *)(this + 0x610) = 0;
  StringName::StringName((StringName *)(this + 0x618),"_build",false);
  this[0x620] = (EditorPlugin)0x0;
  *(undefined8 *)(this + 0x628) = 0;
  StringName::StringName((StringName *)(this + 0x630),"_enable_plugin",false);
  this[0x638] = (EditorPlugin)0x0;
  *(undefined8 *)(this + 0x640) = 0;
  StringName::StringName((StringName *)(this + 0x648),"_disable_plugin",false);
  this[0x650] = (EditorPlugin)0x0;
  *(undefined8 *)(this + 0x658) = 0;
  return;
}



/* EditorVCSInterface::DiffLine::DiffLine(EditorVCSInterface::DiffLine const&) */

void __thiscall EditorVCSInterface::DiffLine::DiffLine(DiffLine *this,DiffLine *param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 8) = 0;
  lVar2 = *(long *)(param_1 + 8);
  *(undefined8 *)this = uVar1;
  if (lVar2 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 8),(CowData *)(param_1 + 8));
  }
  *(undefined8 *)(this + 0x10) = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x10),(CowData *)(param_1 + 0x10));
  }
  *(undefined8 *)(this + 0x18) = 0;
  if (*(long *)(param_1 + 0x18) != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x18),(CowData *)(param_1 + 0x18));
  }
  *(undefined8 *)(this + 0x20) = 0;
  if (*(long *)(param_1 + 0x20) != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x20),(CowData *)(param_1 + 0x20));
    return;
  }
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



/* Callable
   create_custom_callable_function_pointer<VersionControlEditorPlugin>(VersionControlEditorPlugin*,
   char const*, void (VersionControlEditorPlugin::*)()) */

VersionControlEditorPlugin *
create_custom_callable_function_pointer<VersionControlEditorPlugin>
          (VersionControlEditorPlugin *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC53;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_001202b8;
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



/* HashMap<EditorVCSInterface::ChangeType, Ref<Texture>, HashMapHasherDefault,
   HashMapComparatorDefault<EditorVCSInterface::ChangeType>,
   DefaultTypedAllocator<HashMapElement<EditorVCSInterface::ChangeType, Ref<Texture> > >
   >::operator[](EditorVCSInterface::ChangeType const&) */

undefined1 * __thiscall
HashMap<EditorVCSInterface::ChangeType,Ref<Texture>,HashMapHasherDefault,HashMapComparatorDefault<EditorVCSInterface::ChangeType>,DefaultTypedAllocator<HashMapElement<EditorVCSInterface::ChangeType,Ref<Texture>>>>
::operator[](HashMap<EditorVCSInterface::ChangeType,Ref<Texture>,HashMapHasherDefault,HashMapComparatorDefault<EditorVCSInterface::ChangeType>,DefaultTypedAllocator<HashMapElement<EditorVCSInterface::ChangeType,Ref<Texture>>>>
             *this,ChangeType *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  void *pvVar4;
  void *__s;
  Object *pOVar5;
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
  undefined1 auVar37 [16];
  undefined1 (*pauVar38) [16];
  char cVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  ulong uVar43;
  undefined8 uVar44;
  void *__s_00;
  undefined1 (*pauVar45) [16];
  ulong uVar46;
  int iVar47;
  ulong uVar48;
  long lVar49;
  long lVar50;
  long lVar51;
  ulong uVar52;
  undefined8 uVar53;
  uint uVar54;
  ulong uVar55;
  long lVar56;
  uint uVar57;
  uint uVar58;
  undefined1 (*pauVar59) [16];
  void *local_70;
  
  local_70 = *(void **)(this + 8);
  uVar43 = (ulong)*(uint *)(this + 0x28);
  uVar41 = *(uint *)param_1;
  uVar42 = *(uint *)(hash_table_size_primes + uVar43 * 4);
  uVar55 = CONCAT44(0,uVar42);
  if (local_70 == (void *)0x0) {
    uVar43 = uVar55 * 4;
    uVar52 = uVar55 * 8;
    uVar44 = Memory::alloc_static(uVar43,false);
    *(undefined8 *)(this + 0x10) = uVar44;
    local_70 = (void *)Memory::alloc_static(uVar52,false);
    *(void **)(this + 8) = local_70;
    if (uVar42 == 0) {
      iVar47 = *(int *)(this + 0x2c);
      uVar41 = *(uint *)param_1;
      if (local_70 == (void *)0x0) goto LAB_001164d3;
    }
    else {
      pvVar4 = *(void **)(this + 0x10);
      if ((pvVar4 < (void *)((long)local_70 + uVar52)) &&
         (local_70 < (void *)((long)pvVar4 + uVar43))) {
        uVar43 = 0;
        do {
          *(undefined4 *)((long)pvVar4 + uVar43 * 4) = 0;
          *(undefined8 *)((long)local_70 + uVar43 * 8) = 0;
          uVar43 = uVar43 + 1;
        } while (uVar55 != uVar43);
        iVar47 = *(int *)(this + 0x2c);
        uVar41 = *(uint *)param_1;
      }
      else {
        memset(pvVar4,0,uVar43);
        memset(local_70,0,uVar52);
        iVar47 = *(int *)(this + 0x2c);
        uVar41 = *(uint *)param_1;
      }
    }
    if (iVar47 != 0) {
      uVar43 = (ulong)*(uint *)(this + 0x28);
      lVar56 = *(long *)(this + 0x10);
      goto LAB_0011684b;
    }
  }
  else {
    iVar47 = *(int *)(this + 0x2c);
    if (iVar47 != 0) {
      uVar52 = *(ulong *)(hash_table_size_primes_inv + uVar43 * 8);
      uVar40 = (uVar41 >> 0x10 ^ uVar41) * -0x7a143595;
      uVar40 = (uVar40 ^ uVar40 >> 0xd) * -0x3d4d51cb;
      uVar57 = uVar40 ^ uVar40 >> 0x10;
      if (uVar40 == uVar40 >> 0x10) {
        uVar57 = 1;
        uVar48 = uVar52;
      }
      else {
        uVar48 = uVar57 * uVar52;
      }
      lVar56 = *(long *)(this + 0x10);
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar55;
      auVar22._8_8_ = 0;
      auVar22._0_8_ = uVar48;
      lVar49 = SUB168(auVar6 * auVar22,8);
      uVar40 = *(uint *)(lVar56 + lVar49 * 4);
      uVar58 = SUB164(auVar6 * auVar22,8);
      if (uVar40 != 0) {
        uVar54 = 0;
        do {
          if ((uVar57 == uVar40) &&
             (uVar41 == *(uint *)(*(long *)((long)local_70 + lVar49 * 8) + 0x10))) {
            return (undefined1 *)(*(long *)((long)local_70 + (ulong)uVar58 * 8) + 0x18);
          }
          uVar54 = uVar54 + 1;
          auVar7._8_8_ = 0;
          auVar7._0_8_ = (uVar58 + 1) * uVar52;
          auVar23._8_8_ = 0;
          auVar23._0_8_ = uVar55;
          lVar49 = SUB168(auVar7 * auVar23,8);
          uVar40 = *(uint *)(lVar56 + lVar49 * 4);
          uVar58 = SUB164(auVar7 * auVar23,8);
        } while ((uVar40 != 0) &&
                (auVar8._8_8_ = 0, auVar8._0_8_ = uVar40 * uVar52, auVar24._8_8_ = 0,
                auVar24._0_8_ = uVar55, auVar9._8_8_ = 0,
                auVar9._0_8_ = ((uVar58 + uVar42) - SUB164(auVar8 * auVar24,8)) * uVar52,
                auVar25._8_8_ = 0, auVar25._0_8_ = uVar55, uVar54 <= SUB164(auVar9 * auVar25,8)));
      }
LAB_0011684b:
      uVar48 = CONCAT44(0,*(uint *)(hash_table_size_primes + uVar43 * 4));
      uVar52 = *(ulong *)(hash_table_size_primes_inv + uVar43 * 8);
      uVar42 = (uVar41 >> 0x10 ^ uVar41) * -0x7a143595;
      uVar42 = (uVar42 ^ uVar42 >> 0xd) * -0x3d4d51cb;
      uVar40 = uVar42 ^ uVar42 >> 0x10;
      if (uVar42 == uVar42 >> 0x10) {
        uVar40 = 1;
        uVar46 = uVar52;
      }
      else {
        uVar46 = uVar40 * uVar52;
      }
      auVar18._8_8_ = 0;
      auVar18._0_8_ = uVar48;
      auVar34._8_8_ = 0;
      auVar34._0_8_ = uVar46;
      lVar49 = SUB168(auVar18 * auVar34,8);
      uVar42 = *(uint *)(lVar56 + lVar49 * 4);
      uVar57 = SUB164(auVar18 * auVar34,8);
      if (uVar42 != 0) {
        uVar58 = 0;
        do {
          if ((uVar40 == uVar42) &&
             (*(uint *)(*(long *)((long)local_70 + lVar49 * 8) + 0x10) == uVar41)) {
            lVar56 = *(long *)((long)local_70 + (ulong)uVar57 * 8);
            pOVar5 = *(Object **)(lVar56 + 0x18);
            if (pOVar5 != (Object *)0x0) {
              *(undefined8 *)(lVar56 + 0x18) = 0;
              cVar39 = RefCounted::unreference();
              if ((cVar39 != '\0') && (cVar39 = predelete_handler(pOVar5), cVar39 != '\0')) {
                (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
                Memory::free_static(pOVar5,false);
              }
            }
            pauVar45 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar57 * 8);
            goto LAB_00116831;
          }
          uVar58 = uVar58 + 1;
          auVar19._8_8_ = 0;
          auVar19._0_8_ = (uVar57 + 1) * uVar52;
          auVar35._8_8_ = 0;
          auVar35._0_8_ = uVar48;
          lVar49 = SUB168(auVar19 * auVar35,8);
          uVar42 = *(uint *)(lVar56 + lVar49 * 4);
          uVar57 = SUB164(auVar19 * auVar35,8);
        } while ((uVar42 != 0) &&
                (auVar20._8_8_ = 0, auVar20._0_8_ = uVar42 * uVar52, auVar36._8_8_ = 0,
                auVar36._0_8_ = uVar48, auVar21._8_8_ = 0,
                auVar21._0_8_ =
                     ((*(uint *)(hash_table_size_primes + uVar43 * 4) + uVar57) -
                     SUB164(auVar20 * auVar36,8)) * uVar52, auVar37._8_8_ = 0,
                auVar37._0_8_ = uVar48, uVar58 <= SUB164(auVar21 * auVar37,8)));
      }
    }
  }
LAB_001164d3:
  if ((float)uVar55 * _LC56 < (float)(iVar47 + 1)) {
    uVar41 = *(uint *)(this + 0x28);
    if (uVar41 == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      pauVar45 = (undefined1 (*) [16])0x0;
      goto LAB_00116831;
    }
    uVar43 = (ulong)(uVar41 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar42 = *(uint *)(hash_table_size_primes + (ulong)uVar41 * 4);
    if (uVar41 + 1 < 2) {
      uVar43 = 2;
    }
    uVar41 = *(uint *)(hash_table_size_primes + uVar43 * 4);
    uVar52 = (ulong)uVar41;
    *(int *)(this + 0x28) = (int)uVar43;
    pvVar4 = *(void **)(this + 0x10);
    uVar43 = uVar52 * 4;
    uVar55 = uVar52 * 8;
    uVar44 = Memory::alloc_static(uVar43,false);
    *(undefined8 *)(this + 0x10) = uVar44;
    __s_00 = (void *)Memory::alloc_static(uVar55,false);
    *(void **)(this + 8) = __s_00;
    if (uVar41 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar55)) && (__s_00 < (void *)((long)__s + uVar43))) {
        uVar43 = 0;
        do {
          *(undefined4 *)((long)__s + uVar43 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar43 * 8) = 0;
          uVar43 = uVar43 + 1;
        } while (uVar43 != uVar52);
      }
      else {
        memset(__s,0,uVar43);
        memset(__s_00,0,uVar55);
      }
    }
    if (uVar42 != 0) {
      uVar43 = 0;
      do {
        uVar41 = *(uint *)((long)pvVar4 + uVar43 * 4);
        if (uVar41 != 0) {
          lVar56 = *(long *)(this + 0x10);
          uVar58 = 0;
          uVar40 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar55 = CONCAT44(0,uVar40);
          lVar49 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar10._8_8_ = 0;
          auVar10._0_8_ = (ulong)uVar41 * lVar49;
          auVar26._8_8_ = 0;
          auVar26._0_8_ = uVar55;
          lVar50 = SUB168(auVar10 * auVar26,8);
          puVar1 = (uint *)(lVar56 + lVar50 * 4);
          iVar47 = SUB164(auVar10 * auVar26,8);
          uVar57 = *puVar1;
          uVar44 = *(undefined8 *)((long)local_70 + uVar43 * 8);
          while (uVar57 != 0) {
            auVar11._8_8_ = 0;
            auVar11._0_8_ = (ulong)uVar57 * lVar49;
            auVar27._8_8_ = 0;
            auVar27._0_8_ = uVar55;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = (ulong)((uVar40 + iVar47) - SUB164(auVar11 * auVar27,8)) * lVar49;
            auVar28._8_8_ = 0;
            auVar28._0_8_ = uVar55;
            uVar54 = SUB164(auVar12 * auVar28,8);
            uVar53 = uVar44;
            if (uVar54 < uVar58) {
              *puVar1 = uVar41;
              puVar2 = (undefined8 *)((long)__s_00 + lVar50 * 8);
              uVar53 = *puVar2;
              *puVar2 = uVar44;
              uVar41 = uVar57;
              uVar58 = uVar54;
            }
            uVar58 = uVar58 + 1;
            auVar13._8_8_ = 0;
            auVar13._0_8_ = (ulong)(iVar47 + 1) * lVar49;
            auVar29._8_8_ = 0;
            auVar29._0_8_ = uVar55;
            lVar50 = SUB168(auVar13 * auVar29,8);
            puVar1 = (uint *)(lVar56 + lVar50 * 4);
            iVar47 = SUB164(auVar13 * auVar29,8);
            uVar44 = uVar53;
            uVar57 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar50 * 8) = uVar44;
          *puVar1 = uVar41;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar43 = uVar43 + 1;
      } while (uVar42 != uVar43);
      Memory::free_static(local_70,false);
      Memory::free_static(pvVar4,false);
    }
  }
  uVar3 = *(undefined4 *)param_1;
  pauVar45 = (undefined1 (*) [16])operator_new(0x20,"");
  *(undefined4 *)pauVar45[1] = uVar3;
  *(undefined8 *)(pauVar45[1] + 8) = 0;
  *pauVar45 = (undefined1  [16])0x0;
  puVar2 = *(undefined8 **)(this + 0x20);
  if (puVar2 == (undefined8 *)0x0) {
    *(undefined1 (**) [16])(this + 0x18) = pauVar45;
  }
  else {
    *puVar2 = pauVar45;
    *(undefined8 **)(*pauVar45 + 8) = puVar2;
  }
  *(undefined1 (**) [16])(this + 0x20) = pauVar45;
  uVar41 = (*(uint *)param_1 >> 0x10 ^ *(uint *)param_1) * -0x7a143595;
  uVar42 = (uVar41 ^ uVar41 >> 0xd) * -0x3d4d51cb;
  uVar41 = uVar42 ^ uVar42 >> 0x10;
  if (uVar42 == uVar42 >> 0x10) {
    uVar43 = 1;
    uVar41 = 1;
  }
  else {
    uVar43 = (ulong)uVar41;
  }
  lVar56 = *(long *)(this + 0x10);
  uVar57 = 0;
  uVar42 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar55 = CONCAT44(0,uVar42);
  lVar49 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uVar43 * lVar49;
  auVar30._8_8_ = 0;
  auVar30._0_8_ = uVar55;
  lVar51 = SUB168(auVar14 * auVar30,8);
  lVar50 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar56 + lVar51 * 4);
  iVar47 = SUB164(auVar14 * auVar30,8);
  uVar40 = *puVar1;
  pauVar38 = pauVar45;
  while (uVar40 != 0) {
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)uVar40 * lVar49;
    auVar31._8_8_ = 0;
    auVar31._0_8_ = uVar55;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = (ulong)((iVar47 + uVar42) - SUB164(auVar15 * auVar31,8)) * lVar49;
    auVar32._8_8_ = 0;
    auVar32._0_8_ = uVar55;
    uVar58 = SUB164(auVar16 * auVar32,8);
    pauVar59 = pauVar38;
    if (uVar58 < uVar57) {
      *puVar1 = uVar41;
      puVar2 = (undefined8 *)(lVar50 + lVar51 * 8);
      pauVar59 = (undefined1 (*) [16])*puVar2;
      *puVar2 = pauVar38;
      uVar41 = uVar40;
      uVar57 = uVar58;
    }
    uVar57 = uVar57 + 1;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = (ulong)(iVar47 + 1) * lVar49;
    auVar33._8_8_ = 0;
    auVar33._0_8_ = uVar55;
    lVar51 = SUB168(auVar17 * auVar33,8);
    puVar1 = (uint *)(lVar56 + lVar51 * 4);
    iVar47 = SUB164(auVar17 * auVar33,8);
    pauVar38 = pauVar59;
    uVar40 = *puVar1;
  }
  *(undefined1 (**) [16])(lVar50 + lVar51 * 8) = pauVar38;
  *puVar1 = uVar41;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_00116831:
  return pauVar45[1] + 8;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<EditorVCSInterface::ChangeType, Color, HashMapHasherDefault,
   HashMapComparatorDefault<EditorVCSInterface::ChangeType>,
   DefaultTypedAllocator<HashMapElement<EditorVCSInterface::ChangeType, Color> >
   >::operator[](EditorVCSInterface::ChangeType const&) */

undefined1  [16] __thiscall
HashMap<EditorVCSInterface::ChangeType,Color,HashMapHasherDefault,HashMapComparatorDefault<EditorVCSInterface::ChangeType>,DefaultTypedAllocator<HashMapElement<EditorVCSInterface::ChangeType,Color>>>
::operator[](HashMap<EditorVCSInterface::ChangeType,Color,HashMapHasherDefault,HashMapComparatorDefault<EditorVCSInterface::ChangeType>,DefaultTypedAllocator<HashMapElement<EditorVCSInterface::ChangeType,Color>>>
             *this,ChangeType *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  void *pvVar4;
  void *__s;
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
  undefined1 (*pauVar37) [16];
  uint uVar38;
  uint uVar39;
  uint uVar40;
  ulong uVar41;
  undefined8 uVar42;
  void *__s_00;
  undefined1 (*pauVar43) [16];
  ulong uVar44;
  int iVar45;
  ulong uVar46;
  long lVar47;
  long lVar48;
  ulong uVar49;
  undefined8 uVar50;
  uint uVar51;
  ulong uVar52;
  long lVar53;
  uint uVar54;
  uint uVar55;
  undefined1 (*pauVar56) [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  long lStack_90;
  void *local_70;
  
  local_70 = *(void **)(this + 8);
  uVar41 = (ulong)*(uint *)(this + 0x28);
  uVar39 = *(uint *)param_1;
  uVar40 = *(uint *)(hash_table_size_primes + uVar41 * 4);
  uVar52 = CONCAT44(0,uVar40);
  if (local_70 == (void *)0x0) {
    uVar41 = uVar52 * 4;
    uVar49 = uVar52 * 8;
    uVar42 = Memory::alloc_static(uVar41,false);
    *(undefined8 *)(this + 0x10) = uVar42;
    lStack_90 = 0x117103;
    local_70 = (void *)Memory::alloc_static(uVar49,false);
    *(void **)(this + 8) = local_70;
    if (uVar40 == 0) {
      iVar45 = *(int *)(this + 0x2c);
      uVar39 = *(uint *)param_1;
      if (local_70 == (void *)0x0) goto LAB_00116c63;
    }
    else {
      pvVar4 = *(void **)(this + 0x10);
      if ((pvVar4 < (void *)((long)local_70 + uVar49)) &&
         (local_70 < (void *)((long)pvVar4 + uVar41))) {
        uVar41 = 0;
        do {
          *(undefined4 *)((long)pvVar4 + uVar41 * 4) = 0;
          *(undefined8 *)((long)local_70 + uVar41 * 8) = 0;
          uVar41 = uVar41 + 1;
        } while (uVar52 != uVar41);
        iVar45 = *(int *)(this + 0x2c);
        uVar39 = *(uint *)param_1;
      }
      else {
        memset(pvVar4,0,uVar41);
        lStack_90 = 0x11714c;
        memset(local_70,0,uVar49);
        iVar45 = *(int *)(this + 0x2c);
        uVar39 = *(uint *)param_1;
      }
    }
    if (iVar45 != 0) {
      uVar41 = (ulong)*(uint *)(this + 0x28);
      lVar53 = *(long *)(this + 0x10);
      goto LAB_00116fe3;
    }
  }
  else {
    iVar45 = *(int *)(this + 0x2c);
    if (iVar45 != 0) {
      uVar49 = *(ulong *)(hash_table_size_primes_inv + uVar41 * 8);
      uVar38 = (uVar39 >> 0x10 ^ uVar39) * -0x7a143595;
      uVar38 = (uVar38 ^ uVar38 >> 0xd) * -0x3d4d51cb;
      uVar54 = uVar38 ^ uVar38 >> 0x10;
      if (uVar38 == uVar38 >> 0x10) {
        uVar54 = 1;
        uVar46 = uVar49;
      }
      else {
        uVar46 = uVar54 * uVar49;
      }
      lVar53 = *(long *)(this + 0x10);
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar52;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar46;
      lVar47 = SUB168(auVar5 * auVar21,8);
      uVar38 = *(uint *)(lVar53 + lVar47 * 4);
      uVar55 = SUB164(auVar5 * auVar21,8);
      if (uVar38 != 0) {
        uVar51 = 0;
        lVar48 = lVar47;
        do {
          if ((uVar54 == uVar38) &&
             (uVar39 == *(uint *)(*(long *)((long)local_70 + lVar47 * 8) + 0x10))) {
            auVar57._0_8_ = *(long *)((long)local_70 + (ulong)uVar55 * 8) + 0x14;
            auVar57._8_8_ = lVar48;
            return auVar57;
          }
          uVar51 = uVar51 + 1;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (uVar55 + 1) * uVar49;
          auVar22._8_8_ = 0;
          auVar22._0_8_ = uVar52;
          lVar47 = SUB168(auVar6 * auVar22,8);
          uVar38 = *(uint *)(lVar53 + lVar47 * 4);
          uVar55 = SUB164(auVar6 * auVar22,8);
        } while ((uVar38 != 0) &&
                (auVar7._8_8_ = 0, auVar7._0_8_ = uVar38 * uVar49, auVar23._8_8_ = 0,
                auVar23._0_8_ = uVar52, auVar8._8_8_ = 0,
                auVar8._0_8_ = ((uVar55 + uVar40) - SUB164(auVar7 * auVar23,8)) * uVar49,
                auVar24._8_8_ = 0, auVar24._0_8_ = uVar52, lVar48 = SUB168(auVar8 * auVar24,8),
                uVar51 <= SUB164(auVar8 * auVar24,8)));
      }
LAB_00116fe3:
      uVar42 = _UNK_00120b98;
      uVar46 = CONCAT44(0,*(uint *)(hash_table_size_primes + uVar41 * 4));
      uVar49 = *(ulong *)(hash_table_size_primes_inv + uVar41 * 8);
      uVar40 = (uVar39 >> 0x10 ^ uVar39) * -0x7a143595;
      uVar40 = (uVar40 ^ uVar40 >> 0xd) * -0x3d4d51cb;
      uVar38 = uVar40 ^ uVar40 >> 0x10;
      if (uVar40 == uVar40 >> 0x10) {
        uVar38 = 1;
        uVar44 = uVar49;
      }
      else {
        uVar44 = uVar38 * uVar49;
      }
      auVar17._8_8_ = 0;
      auVar17._0_8_ = uVar46;
      auVar33._8_8_ = 0;
      auVar33._0_8_ = uVar44;
      lVar47 = SUB168(auVar17 * auVar33,8);
      uVar40 = *(uint *)(lVar53 + lVar47 * 4);
      uVar54 = SUB164(auVar17 * auVar33,8);
      if (uVar40 != 0) {
        uVar55 = 0;
        lVar48 = lVar47;
        do {
          if ((uVar38 == uVar40) &&
             (*(uint *)(*(long *)((long)local_70 + lVar47 * 8) + 0x10) == uVar39)) {
            pauVar43 = *(undefined1 (**) [16])((long)local_70 + (ulong)uVar54 * 8);
            *(undefined8 *)(pauVar43[1] + 4) = __LC62;
            *(undefined8 *)(pauVar43[1] + 0xc) = uVar42;
            lStack_90 = lVar48;
            goto LAB_00116fcc;
          }
          uVar55 = uVar55 + 1;
          auVar18._8_8_ = 0;
          auVar18._0_8_ = (uVar54 + 1) * uVar49;
          auVar34._8_8_ = 0;
          auVar34._0_8_ = uVar46;
          lVar47 = SUB168(auVar18 * auVar34,8);
          uVar40 = *(uint *)(lVar53 + lVar47 * 4);
          uVar54 = SUB164(auVar18 * auVar34,8);
        } while ((uVar40 != 0) &&
                (auVar19._8_8_ = 0, auVar19._0_8_ = uVar40 * uVar49, auVar35._8_8_ = 0,
                auVar35._0_8_ = uVar46, auVar20._8_8_ = 0,
                auVar20._0_8_ =
                     ((*(uint *)(hash_table_size_primes + uVar41 * 4) + uVar54) -
                     SUB164(auVar19 * auVar35,8)) * uVar49, auVar36._8_8_ = 0,
                auVar36._0_8_ = uVar46, lVar48 = SUB168(auVar20 * auVar36,8),
                uVar55 <= SUB164(auVar20 * auVar36,8)));
      }
    }
  }
LAB_00116c63:
  if ((float)uVar52 * _LC56 < (float)(iVar45 + 1)) {
    uVar39 = *(uint *)(this + 0x28);
    if (uVar39 == 0x1c) {
      pauVar43 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_00116fcc;
    }
    uVar41 = (ulong)(uVar39 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar40 = *(uint *)(hash_table_size_primes + (ulong)uVar39 * 4);
    if (uVar39 + 1 < 2) {
      uVar41 = 2;
    }
    uVar39 = *(uint *)(hash_table_size_primes + uVar41 * 4);
    uVar49 = (ulong)uVar39;
    *(int *)(this + 0x28) = (int)uVar41;
    pvVar4 = *(void **)(this + 0x10);
    uVar41 = uVar49 * 4;
    uVar52 = uVar49 * 8;
    uVar42 = Memory::alloc_static(uVar41,false);
    *(undefined8 *)(this + 0x10) = uVar42;
    __s_00 = (void *)Memory::alloc_static(uVar52,false);
    *(void **)(this + 8) = __s_00;
    if (uVar39 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar52)) && (__s_00 < (void *)((long)__s + uVar41))) {
        uVar41 = 0;
        do {
          *(undefined4 *)((long)__s + uVar41 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar41 * 8) = 0;
          uVar41 = uVar41 + 1;
        } while (uVar41 != uVar49);
      }
      else {
        memset(__s,0,uVar41);
        memset(__s_00,0,uVar52);
      }
    }
    if (uVar40 != 0) {
      uVar41 = 0;
      do {
        uVar39 = *(uint *)((long)pvVar4 + uVar41 * 4);
        if (uVar39 != 0) {
          lVar53 = *(long *)(this + 0x10);
          uVar55 = 0;
          uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar52 = CONCAT44(0,uVar38);
          lVar47 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar9._8_8_ = 0;
          auVar9._0_8_ = (ulong)uVar39 * lVar47;
          auVar25._8_8_ = 0;
          auVar25._0_8_ = uVar52;
          lVar48 = SUB168(auVar9 * auVar25,8);
          puVar1 = (uint *)(lVar53 + lVar48 * 4);
          iVar45 = SUB164(auVar9 * auVar25,8);
          uVar54 = *puVar1;
          uVar42 = *(undefined8 *)((long)local_70 + uVar41 * 8);
          while (uVar54 != 0) {
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)uVar54 * lVar47;
            auVar26._8_8_ = 0;
            auVar26._0_8_ = uVar52;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = (ulong)((uVar38 + iVar45) - SUB164(auVar10 * auVar26,8)) * lVar47;
            auVar27._8_8_ = 0;
            auVar27._0_8_ = uVar52;
            uVar51 = SUB164(auVar11 * auVar27,8);
            uVar50 = uVar42;
            if (uVar51 < uVar55) {
              *puVar1 = uVar39;
              puVar2 = (undefined8 *)((long)__s_00 + lVar48 * 8);
              uVar50 = *puVar2;
              *puVar2 = uVar42;
              uVar39 = uVar54;
              uVar55 = uVar51;
            }
            uVar55 = uVar55 + 1;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = (ulong)(iVar45 + 1) * lVar47;
            auVar28._8_8_ = 0;
            auVar28._0_8_ = uVar52;
            lVar48 = SUB168(auVar12 * auVar28,8);
            puVar1 = (uint *)(lVar53 + lVar48 * 4);
            iVar45 = SUB164(auVar12 * auVar28,8);
            uVar42 = uVar50;
            uVar54 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar48 * 8) = uVar42;
          *puVar1 = uVar39;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar41 = uVar41 + 1;
      } while (uVar40 != uVar41);
      Memory::free_static(local_70,false);
      Memory::free_static(pvVar4,false);
    }
  }
  uVar3 = *(undefined4 *)param_1;
  pauVar43 = (undefined1 (*) [16])operator_new(0x28,"");
  *pauVar43 = (undefined1  [16])0x0;
  uVar50 = _UNK_00120b98;
  uVar42 = __LC62;
  *(undefined4 *)pauVar43[1] = uVar3;
  *(undefined8 *)(pauVar43[1] + 4) = uVar42;
  *(undefined8 *)(pauVar43[1] + 0xc) = uVar50;
  puVar2 = *(undefined8 **)(this + 0x20);
  if (puVar2 == (undefined8 *)0x0) {
    *(undefined1 (**) [16])(this + 0x18) = pauVar43;
  }
  else {
    *puVar2 = pauVar43;
    *(undefined8 **)(*pauVar43 + 8) = puVar2;
  }
  *(undefined1 (**) [16])(this + 0x20) = pauVar43;
  uVar39 = (*(uint *)param_1 >> 0x10 ^ *(uint *)param_1) * -0x7a143595;
  uVar40 = (uVar39 ^ uVar39 >> 0xd) * -0x3d4d51cb;
  uVar39 = uVar40 ^ uVar40 >> 0x10;
  if (uVar40 == uVar40 >> 0x10) {
    uVar41 = 1;
    uVar39 = 1;
  }
  else {
    uVar41 = (ulong)uVar39;
  }
  uVar54 = 0;
  lVar53 = *(long *)(this + 0x10);
  lVar47 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar40 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar52 = CONCAT44(0,uVar40);
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar41 * lVar47;
  auVar29._8_8_ = 0;
  auVar29._0_8_ = uVar52;
  lStack_90 = SUB168(auVar13 * auVar29,8);
  lVar48 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar53 + lStack_90 * 4);
  iVar45 = SUB164(auVar13 * auVar29,8);
  uVar38 = *puVar1;
  pauVar37 = pauVar43;
  while (uVar38 != 0) {
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)uVar38 * lVar47;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar52;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)((uVar40 + iVar45) - SUB164(auVar14 * auVar30,8)) * lVar47;
    auVar31._8_8_ = 0;
    auVar31._0_8_ = uVar52;
    uVar55 = SUB164(auVar15 * auVar31,8);
    pauVar56 = pauVar37;
    if (uVar55 < uVar54) {
      *puVar1 = uVar39;
      puVar2 = (undefined8 *)(lVar48 + lStack_90 * 8);
      pauVar56 = (undefined1 (*) [16])*puVar2;
      *puVar2 = pauVar37;
      uVar39 = uVar38;
      uVar54 = uVar55;
    }
    uVar54 = uVar54 + 1;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = (ulong)(iVar45 + 1) * lVar47;
    auVar32._8_8_ = 0;
    auVar32._0_8_ = uVar52;
    lStack_90 = SUB168(auVar16 * auVar32,8);
    puVar1 = (uint *)(lVar53 + lStack_90 * 4);
    iVar45 = SUB164(auVar16 * auVar32,8);
    pauVar37 = pauVar56;
    uVar38 = *puVar1;
  }
  *(undefined1 (**) [16])(lVar48 + lStack_90 * 8) = pauVar37;
  *puVar1 = uVar39;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_00116fcc:
  auVar58._8_8_ = lStack_90;
  auVar58._0_8_ = pauVar43[1] + 4;
  return auVar58;
}



/* Callable create_custom_callable_function_pointer<VersionControlEditorPlugin, String
   const&>(VersionControlEditorPlugin*, char const*, void (VersionControlEditorPlugin::*)(String
   const&)) */

VersionControlEditorPlugin *
create_custom_callable_function_pointer<VersionControlEditorPlugin,String_const&>
          (VersionControlEditorPlugin *param_1,char *param_2,_func_void_String_ptr *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC53;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_001203d8;
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



/* Callable create_custom_callable_function_pointer<VersionControlEditorPlugin, Variant
   const&>(VersionControlEditorPlugin*, char const*, void (VersionControlEditorPlugin::*)(Variant
   const&)) */

VersionControlEditorPlugin *
create_custom_callable_function_pointer<VersionControlEditorPlugin,Variant_const&>
          (VersionControlEditorPlugin *param_1,char *param_2,_func_void_Variant_ptr *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC53;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00120468;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_void_Variant_ptr **)(this + 0x20) = param_3 + 1;
  Callable::Callable((Callable *)param_1,this);
  return param_1;
}



/* Callable Callable::bind<FileDialog*>(FileDialog*) const */

FileDialog * Callable::bind<FileDialog*>(FileDialog *param_1)

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



/* Callable create_custom_callable_function_pointer<VersionControlEditorPlugin,
   Object*>(VersionControlEditorPlugin*, char const*, void (VersionControlEditorPlugin::*)(Object*))
    */

VersionControlEditorPlugin *
create_custom_callable_function_pointer<VersionControlEditorPlugin,Object*>
          (VersionControlEditorPlugin *param_1,char *param_2,_func_void_Object_ptr *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC53;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_001204f8;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_void_Object_ptr **)(this + 0x20) = param_3 + 1;
  Callable::Callable((Callable *)param_1,this);
  return param_1;
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



/* Callable create_custom_callable_function_pointer<VersionControlEditorPlugin, Object*, int, int,
   int>(VersionControlEditorPlugin*, char const*, void (VersionControlEditorPlugin::*)(Object*, int,
   int, int)) */

VersionControlEditorPlugin *
create_custom_callable_function_pointer<VersionControlEditorPlugin,Object*,int,int,int>
          (VersionControlEditorPlugin *param_1,char *param_2,
          _func_void_Object_ptr_int_int_int *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC53;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00120588;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_void_Object_ptr_int_int_int **)(this + 0x20) = param_3 + 1;
  Callable::Callable((Callable *)param_1,this);
  return param_1;
}



/* Callable create_custom_callable_function_pointer<VersionControlEditorPlugin,
   int>(VersionControlEditorPlugin*, char const*, void (VersionControlEditorPlugin::*)(int)) */

VersionControlEditorPlugin *
create_custom_callable_function_pointer<VersionControlEditorPlugin,int>
          (VersionControlEditorPlugin *param_1,char *param_2,_func_void_int *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC53;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_001206a8;
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



/* EditorPlugin::~EditorPlugin() */

void __thiscall EditorPlugin::~EditorPlugin(EditorPlugin *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = OptionButton::add_item;
  if (bVar1) {
    if (*(long *)(this + 0x648) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00117b5a;
    }
    if (*(long *)(this + 0x630) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00117b5a;
    }
    if (*(long *)(this + 0x618) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00117b5a;
    }
    if (*(long *)(this + 0x600) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00117b5a;
    }
    if (*(long *)(this + 0x5e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00117b5a;
    }
    if (*(long *)(this + 0x5d0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00117b5a;
    }
    if (*(long *)(this + 0x5b8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00117b5a;
    }
    if (*(long *)(this + 0x5a0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00117b5a;
    }
    if (*(long *)(this + 0x588) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00117b5a;
    }
    if (*(long *)(this + 0x570) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00117b5a;
    }
    if (*(long *)(this + 0x558) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00117b5a;
    }
    if (*(long *)(this + 0x540) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00117b5a;
    }
    if (*(long *)(this + 0x528) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00117b5a;
    }
    if (*(long *)(this + 0x510) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00117b5a;
    }
    if (*(long *)(this + 0x4f8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00117b5a;
    }
    if (*(long *)(this + 0x4e0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00117b5a;
    }
    if (*(long *)(this + 0x4c8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00117b5a;
    }
    if (*(long *)(this + 0x4b0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00117b5a;
    }
    if (*(long *)(this + 0x498) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00117b5a;
    }
    if (*(long *)(this + 0x480) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00117b5a;
    }
    if (*(long *)(this + 0x468) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00117b5a;
    }
    if (*(long *)(this + 0x450) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00117b5a;
    }
    if (*(long *)(this + 0x438) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00117b5a;
    }
    if (*(long *)(this + 0x420) != 0) {
      StringName::unref();
    }
  }
LAB_00117b5a:
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x418));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x410));
  Node::~Node((Node *)this);
  return;
}



/* EditorPlugin::~EditorPlugin() */

void __thiscall EditorPlugin::~EditorPlugin(EditorPlugin *this)

{
  ~EditorPlugin(this);
  operator_delete(this,0x660);
  return;
}



/* WARNING: Removing unreachable block (ram,0x00117d38) */
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



/* WARNING: Removing unreachable block (ram,0x00118070) */
/* String vformat<String, String>(String const&, String const, String const) */

undefined8 *
vformat<String,String>(undefined8 *param_1,bool *param_2,String *param_3,String *param_4)

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
        if (pvVar5 == (void *)0x0) goto LAB_00118354;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_00118354:
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  return;
}



/* HashMap<EditorVCSInterface::ChangeType, String, HashMapHasherDefault,
   HashMapComparatorDefault<EditorVCSInterface::ChangeType>,
   DefaultTypedAllocator<HashMapElement<EditorVCSInterface::ChangeType, String> >
   >::operator[](EditorVCSInterface::ChangeType const&) */

undefined1 * __thiscall
HashMap<EditorVCSInterface::ChangeType,String,HashMapHasherDefault,HashMapComparatorDefault<EditorVCSInterface::ChangeType>,DefaultTypedAllocator<HashMapElement<EditorVCSInterface::ChangeType,String>>>
::operator[](HashMap<EditorVCSInterface::ChangeType,String,HashMapHasherDefault,HashMapComparatorDefault<EditorVCSInterface::ChangeType>,DefaultTypedAllocator<HashMapElement<EditorVCSInterface::ChangeType,String>>>
             *this,ChangeType *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  void *pvVar4;
  void *__s;
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
  undefined1 (*pauVar37) [16];
  uint uVar38;
  uint uVar39;
  uint uVar40;
  ulong uVar41;
  undefined8 uVar42;
  void *__s_00;
  undefined1 (*pauVar43) [16];
  ulong uVar44;
  int iVar45;
  ulong uVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  ulong uVar50;
  undefined8 uVar51;
  uint uVar52;
  ulong uVar53;
  uint uVar54;
  uint uVar55;
  long lVar56;
  undefined1 (*pauVar57) [16];
  long in_FS_OFFSET;
  void *local_a8;
  undefined8 local_70;
  undefined1 local_68 [16];
  undefined4 local_58;
  undefined8 local_50 [2];
  long local_40;
  
  local_a8 = *(void **)(this + 8);
  uVar39 = *(uint *)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar41 = (ulong)*(uint *)(this + 0x28);
  uVar40 = *(uint *)(hash_table_size_primes + uVar41 * 4);
  uVar53 = CONCAT44(0,uVar40);
  if (local_a8 == (void *)0x0) {
    local_70 = 0;
    uVar41 = uVar53 * 4;
    uVar50 = uVar53 * 8;
    uVar42 = Memory::alloc_static(uVar41,false);
    *(undefined8 *)(this + 0x10) = uVar42;
    local_a8 = (void *)Memory::alloc_static(uVar50,false);
    *(void **)(this + 8) = local_a8;
    if (uVar40 == 0) {
      uVar39 = *(uint *)param_1;
      iVar45 = *(int *)(this + 0x2c);
      if (local_a8 == (void *)0x0) goto LAB_0011853c;
    }
    else {
      pvVar4 = *(void **)(this + 0x10);
      if ((pvVar4 < (void *)((long)local_a8 + uVar50)) &&
         (local_a8 < (void *)((long)pvVar4 + uVar41))) {
        uVar41 = 0;
        do {
          *(undefined4 *)((long)pvVar4 + uVar41 * 4) = 0;
          *(undefined8 *)((long)local_a8 + uVar41 * 8) = 0;
          uVar41 = uVar41 + 1;
        } while (uVar53 != uVar41);
        uVar39 = *(uint *)param_1;
        iVar45 = *(int *)(this + 0x2c);
      }
      else {
        memset(pvVar4,0,uVar41);
        memset(local_a8,0,uVar50);
        uVar39 = *(uint *)param_1;
        iVar45 = *(int *)(this + 0x2c);
      }
    }
    if (iVar45 != 0) {
      uVar41 = (ulong)*(uint *)(this + 0x28);
      lVar56 = *(long *)(this + 0x10);
      goto LAB_001188f9;
    }
  }
  else {
    iVar45 = *(int *)(this + 0x2c);
    if (iVar45 == 0) {
      local_70 = 0;
    }
    else {
      uVar50 = *(ulong *)(hash_table_size_primes_inv + uVar41 * 8);
      uVar38 = (uVar39 >> 0x10 ^ uVar39) * -0x7a143595;
      uVar38 = (uVar38 ^ uVar38 >> 0xd) * -0x3d4d51cb;
      uVar54 = uVar38 ^ uVar38 >> 0x10;
      if (uVar38 == uVar38 >> 0x10) {
        uVar54 = 1;
        uVar46 = uVar50;
      }
      else {
        uVar46 = uVar54 * uVar50;
      }
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar53;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar46;
      lVar47 = SUB168(auVar5 * auVar21,8);
      lVar56 = *(long *)(this + 0x10);
      uVar55 = SUB164(auVar5 * auVar21,8);
      uVar38 = *(uint *)(lVar56 + lVar47 * 4);
      if (uVar38 != 0) {
        uVar52 = 0;
        do {
          if ((uVar38 == uVar54) &&
             (uVar39 == *(uint *)(*(long *)((long)local_a8 + lVar47 * 8) + 0x10))) {
            pauVar43 = *(undefined1 (**) [16])((long)local_a8 + (ulong)uVar55 * 8);
            goto LAB_001184fa;
          }
          uVar52 = uVar52 + 1;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (uVar55 + 1) * uVar50;
          auVar22._8_8_ = 0;
          auVar22._0_8_ = uVar53;
          lVar47 = SUB168(auVar6 * auVar22,8);
          uVar38 = *(uint *)(lVar56 + lVar47 * 4);
          uVar55 = SUB164(auVar6 * auVar22,8);
        } while ((uVar38 != 0) &&
                (auVar7._8_8_ = 0, auVar7._0_8_ = uVar38 * uVar50, auVar23._8_8_ = 0,
                auVar23._0_8_ = uVar53, auVar8._8_8_ = 0,
                auVar8._0_8_ = ((uVar55 + uVar40) - SUB164(auVar7 * auVar23,8)) * uVar50,
                auVar24._8_8_ = 0, auVar24._0_8_ = uVar53, uVar52 <= SUB164(auVar8 * auVar24,8)));
      }
      local_70 = 0;
LAB_001188f9:
      uVar46 = CONCAT44(0,*(uint *)(hash_table_size_primes + uVar41 * 4));
      uVar50 = *(ulong *)(hash_table_size_primes_inv + uVar41 * 8);
      uVar40 = (uVar39 >> 0x10 ^ uVar39) * -0x7a143595;
      uVar40 = (uVar40 ^ uVar40 >> 0xd) * -0x3d4d51cb;
      uVar38 = uVar40 ^ uVar40 >> 0x10;
      if (uVar40 == uVar40 >> 0x10) {
        uVar38 = 1;
        uVar44 = uVar50;
      }
      else {
        uVar44 = uVar38 * uVar50;
      }
      auVar17._8_8_ = 0;
      auVar17._0_8_ = uVar46;
      auVar33._8_8_ = 0;
      auVar33._0_8_ = uVar44;
      lVar47 = SUB168(auVar17 * auVar33,8);
      uVar40 = *(uint *)(lVar56 + lVar47 * 4);
      uVar54 = SUB164(auVar17 * auVar33,8);
      if (uVar40 != 0) {
        uVar55 = 0;
        do {
          if ((uVar38 == uVar40) &&
             (*(uint *)(*(long *)((long)local_a8 + lVar47 * 8) + 0x10) == uVar39)) {
            lVar56 = *(long *)((long)local_a8 + (ulong)uVar54 * 8);
            if (*(long *)(lVar56 + 0x18) != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)(lVar56 + 0x18),(CowData *)&local_70);
            }
            pauVar43 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar54 * 8);
            goto LAB_001188d5;
          }
          uVar55 = uVar55 + 1;
          auVar18._8_8_ = 0;
          auVar18._0_8_ = (uVar54 + 1) * uVar50;
          auVar34._8_8_ = 0;
          auVar34._0_8_ = uVar46;
          lVar47 = SUB168(auVar18 * auVar34,8);
          uVar40 = *(uint *)(lVar56 + lVar47 * 4);
          uVar54 = SUB164(auVar18 * auVar34,8);
        } while ((uVar40 != 0) &&
                (auVar19._8_8_ = 0, auVar19._0_8_ = uVar40 * uVar50, auVar35._8_8_ = 0,
                auVar35._0_8_ = uVar46, auVar20._8_8_ = 0,
                auVar20._0_8_ =
                     ((*(uint *)(hash_table_size_primes + uVar41 * 4) + uVar54) -
                     SUB164(auVar19 * auVar35,8)) * uVar50, auVar36._8_8_ = 0,
                auVar36._0_8_ = uVar46, uVar55 <= SUB164(auVar20 * auVar36,8)));
      }
    }
  }
LAB_0011853c:
  if ((float)uVar53 * _LC56 < (float)(iVar45 + 1)) {
    uVar39 = *(uint *)(this + 0x28);
    if (uVar39 == 0x1c) {
      pauVar43 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_001188d5;
    }
    uVar41 = (ulong)(uVar39 + 1);
    uVar40 = *(uint *)(hash_table_size_primes + (ulong)uVar39 * 4);
    *(undefined4 *)(this + 0x2c) = 0;
    if (uVar39 + 1 < 2) {
      uVar41 = 2;
    }
    uVar39 = *(uint *)(hash_table_size_primes + uVar41 * 4);
    *(int *)(this + 0x28) = (int)uVar41;
    pvVar4 = *(void **)(this + 0x10);
    uVar50 = (ulong)uVar39;
    uVar41 = uVar50 * 4;
    uVar53 = uVar50 * 8;
    uVar42 = Memory::alloc_static(uVar41,false);
    *(undefined8 *)(this + 0x10) = uVar42;
    __s_00 = (void *)Memory::alloc_static(uVar53,false);
    *(void **)(this + 8) = __s_00;
    if (uVar39 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar53)) && (__s_00 < (void *)((long)__s + uVar41))) {
        uVar41 = 0;
        do {
          *(undefined4 *)((long)__s + uVar41 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar41 * 8) = 0;
          uVar41 = uVar41 + 1;
        } while (uVar41 != uVar50);
      }
      else {
        memset(__s,0,uVar41);
        memset(__s_00,0,uVar53);
      }
    }
    uVar41 = 0;
    if (uVar40 != 0) {
      do {
        uVar39 = *(uint *)((long)pvVar4 + uVar41 * 4);
        if (uVar39 != 0) {
          uVar55 = 0;
          lVar56 = *(long *)(this + 0x10);
          uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar53 = CONCAT44(0,uVar38);
          lVar47 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar9._8_8_ = 0;
          auVar9._0_8_ = (ulong)uVar39 * lVar47;
          auVar25._8_8_ = 0;
          auVar25._0_8_ = uVar53;
          lVar48 = SUB168(auVar9 * auVar25,8);
          puVar1 = (uint *)(lVar56 + lVar48 * 4);
          iVar45 = SUB164(auVar9 * auVar25,8);
          uVar54 = *puVar1;
          uVar42 = *(undefined8 *)((long)local_a8 + uVar41 * 8);
          while (uVar54 != 0) {
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)uVar54 * lVar47;
            auVar26._8_8_ = 0;
            auVar26._0_8_ = uVar53;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = (ulong)((uVar38 + iVar45) - SUB164(auVar10 * auVar26,8)) * lVar47;
            auVar27._8_8_ = 0;
            auVar27._0_8_ = uVar53;
            uVar52 = SUB164(auVar11 * auVar27,8);
            uVar51 = uVar42;
            if (uVar52 < uVar55) {
              *puVar1 = uVar39;
              puVar2 = (undefined8 *)((long)__s_00 + lVar48 * 8);
              uVar51 = *puVar2;
              *puVar2 = uVar42;
              uVar39 = uVar54;
              uVar55 = uVar52;
            }
            uVar55 = uVar55 + 1;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = (ulong)(iVar45 + 1) * lVar47;
            auVar28._8_8_ = 0;
            auVar28._0_8_ = uVar53;
            lVar48 = SUB168(auVar12 * auVar28,8);
            puVar1 = (uint *)(lVar56 + lVar48 * 4);
            iVar45 = SUB164(auVar12 * auVar28,8);
            uVar42 = uVar51;
            uVar54 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar48 * 8) = uVar42;
          *puVar1 = uVar39;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar41 = uVar41 + 1;
      } while (uVar40 != uVar41);
      Memory::free_static(local_a8,false);
      Memory::free_static(pvVar4,false);
    }
  }
  local_68 = (undefined1  [16])0x0;
  local_50[0] = 0;
  uVar3 = *(undefined4 *)param_1;
  local_58 = uVar3;
  pauVar43 = (undefined1 (*) [16])operator_new(0x20,"");
  *(undefined4 *)pauVar43[1] = uVar3;
  *(undefined8 *)(pauVar43[1] + 8) = 0;
  *pauVar43 = (undefined1  [16])0x0;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
  puVar2 = *(undefined8 **)(this + 0x20);
  if (puVar2 == (undefined8 *)0x0) {
    *(undefined1 (**) [16])(this + 0x18) = pauVar43;
  }
  else {
    *puVar2 = pauVar43;
    *(undefined8 **)(*pauVar43 + 8) = puVar2;
  }
  *(undefined1 (**) [16])(this + 0x20) = pauVar43;
  uVar39 = (*(uint *)param_1 >> 0x10 ^ *(uint *)param_1) * -0x7a143595;
  uVar40 = (uVar39 ^ uVar39 >> 0xd) * -0x3d4d51cb;
  uVar39 = uVar40 ^ uVar40 >> 0x10;
  if (uVar40 == uVar40 >> 0x10) {
    uVar41 = 1;
    uVar39 = 1;
  }
  else {
    uVar41 = (ulong)uVar39;
  }
  uVar54 = 0;
  lVar56 = *(long *)(this + 0x10);
  uVar40 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar53 = CONCAT44(0,uVar40);
  lVar47 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar41 * lVar47;
  auVar29._8_8_ = 0;
  auVar29._0_8_ = uVar53;
  lVar49 = SUB168(auVar13 * auVar29,8);
  lVar48 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar56 + lVar49 * 4);
  iVar45 = SUB164(auVar13 * auVar29,8);
  uVar38 = *puVar1;
  pauVar37 = pauVar43;
  while (uVar38 != 0) {
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)uVar38 * lVar47;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar53;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)((uVar40 + iVar45) - SUB164(auVar14 * auVar30,8)) * lVar47;
    auVar31._8_8_ = 0;
    auVar31._0_8_ = uVar53;
    uVar55 = SUB164(auVar15 * auVar31,8);
    pauVar57 = pauVar37;
    if (uVar55 < uVar54) {
      *puVar1 = uVar39;
      puVar2 = (undefined8 *)(lVar48 + lVar49 * 8);
      pauVar57 = (undefined1 (*) [16])*puVar2;
      *puVar2 = pauVar37;
      uVar39 = uVar38;
      uVar54 = uVar55;
    }
    uVar54 = uVar54 + 1;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = (ulong)(iVar45 + 1) * lVar47;
    auVar32._8_8_ = 0;
    auVar32._0_8_ = uVar53;
    lVar49 = SUB168(auVar16 * auVar32,8);
    puVar1 = (uint *)(lVar56 + lVar49 * 4);
    iVar45 = SUB164(auVar16 * auVar32,8);
    pauVar37 = pauVar57;
    uVar38 = *puVar1;
  }
  *(undefined1 (**) [16])(lVar48 + lVar49 * 8) = pauVar37;
  *puVar1 = uVar39;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_001188d5:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
LAB_001184fa:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pauVar43[1] + 8;
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



/* List<EditorVCSInterface::StatusFile, DefaultAllocator>::~List() */

void __thiscall
List<EditorVCSInterface::StatusFile,DefaultAllocator>::~List
          (List<EditorVCSInterface::StatusFile,DefaultAllocator> *this)

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
    if (*(long **)((long)pvVar1 + 0x20) == plVar4) {
      lVar3 = *(long *)((long)pvVar1 + 0x10);
      lVar2 = *(long *)((long)pvVar1 + 0x18);
      *plVar4 = lVar3;
      if (pvVar1 == (void *)plVar4[1]) {
        plVar4[1] = lVar2;
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0x10) = lVar3;
        lVar3 = *(long *)((long)pvVar1 + 0x10);
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x18) = lVar2;
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



/* CallableCustomMethodPointer<VersionControlEditorPlugin, void>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<VersionControlEditorPlugin,void>::call
          (CallableCustomMethodPointer<VersionControlEditorPlugin,void> *this,Variant **param_1,
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
      goto LAB_00118faf;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_00118faf;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00118f88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_00119071;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_00118faf:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC108,"./core/object/callable_method_pointer.h",0x67,
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
LAB_00119071:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<VersionControlEditorPlugin, void, int>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<VersionControlEditorPlugin,void,int>::call
          (CallableCustomMethodPointer<VersionControlEditorPlugin,void,int> *this,Variant **param_1,
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
      goto LAB_00119238;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar8[1] == 0) goto LAB_00119238;
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
        uVar4 = _LC109;
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        iVar6 = Variant::operator_cast_to_int(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001191e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),iVar6);
          return;
        }
        goto LAB_001192fa;
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
LAB_00119238:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC108,"./core/object/callable_method_pointer.h",0x67,
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
LAB_001192fa:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<VersionControlEditorPlugin, void, Ref<InputEvent>
   const&>::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<VersionControlEditorPlugin,void,Ref<InputEvent>const&>::call
          (CallableCustomMethodPointer<VersionControlEditorPlugin,void,Ref<InputEvent>const&> *this,
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
          goto LAB_001193ce;
        }
        if (param_2 == 0) {
          *(undefined4 *)param_4 = 4;
          *(undefined4 *)(param_4 + 8) = 1;
          goto LAB_001193ce;
        }
        *(undefined4 *)param_4 = 0;
        if (((ulong)pcVar10 & 1) != 0) {
          pcVar10 = *(code **)(pcVar10 + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar6 = Variant::can_convert_strict(*(undefined4 *)*param_1);
        uVar4 = _LC110;
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
LAB_0011949d:
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
              if (pOVar5 != (Object *)0x0) goto LAB_0011949d;
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
        goto LAB_001193ce;
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
  local_48 = (Object *)0x118dbc;
  local_40 = 0x15;
  String::parse_latin1((StrRange *)&local_50);
  uitos((ulong)local_60);
  operator+((char *)local_58,(String *)"Invalid Object id \'");
  String::operator+((String *)&local_48,(String *)local_58);
  _err_print_error(&_LC108,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (String *)&local_48,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref(local_58);
  CowData<char32_t>::_unref(local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
LAB_001193ce:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<VersionControlEditorPlugin, void, Object*, int, int,
   int>::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<VersionControlEditorPlugin,void,Object*,int,int,int>::call
          (CallableCustomMethodPointer<VersionControlEditorPlugin,void,Object*,int,int,int> *this,
          Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  Variant *this_00;
  ulong uVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  Object *pOVar9;
  Object *pOVar10;
  uint uVar11;
  ulong *puVar12;
  code *UNRECOVERED_JUMPTABLE;
  long in_FS_OFFSET;
  bool bVar13;
  CowData<char32_t> local_70 [8];
  CowData<char32_t> local_68 [8];
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar11 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar11 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar3 = (ulong)local_58 >> 8;
      local_58 = (char *)(uVar3 << 8);
      LOCK();
      bVar13 = (char)ObjectDB::spin_lock == '\0';
      if (bVar13) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar13) break;
      local_58 = (char *)(uVar3 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar12 = (ulong *)((ulong)uVar11 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar12 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_001198e0;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar12[1] == 0) goto LAB_001198e0;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if ((uint)param_2 < 5) {
      if (param_2 == 4) {
        *(undefined4 *)param_4 = 0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[3],2);
        uVar4 = _LC111;
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        iVar6 = Variant::operator_cast_to_int(param_1[3]);
        cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[2],2);
        uVar4 = _LC112;
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        iVar7 = Variant::operator_cast_to_int(param_1[2]);
        cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[1],2);
        uVar4 = _LC113;
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        iVar8 = Variant::operator_cast_to_int(param_1[1]);
        cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,0x18);
        if (cVar5 == '\0') {
LAB_00119868:
          uVar4 = _LC110;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        else {
          this_00 = *param_1;
          pOVar9 = Variant::operator_cast_to_Object_(this_00);
          pOVar10 = Variant::operator_cast_to_Object_(this_00);
          if ((pOVar10 == (Object *)0x0) && (pOVar9 != (Object *)0x0)) goto LAB_00119868;
        }
        pOVar9 = Variant::operator_cast_to_Object_(*param_1);
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001198b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),pOVar9,iVar8,iVar7,iVar6);
          return;
        }
        goto LAB_001199db;
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
LAB_001198e0:
    local_60 = 0;
    local_58 = "\', can\'t call method.";
    local_50 = 0x15;
    String::parse_latin1((StrRange *)&local_60);
    uitos((ulong)local_70);
    operator+((char *)local_68,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_58,(String *)local_68);
    _err_print_error(&_LC108,"./core/object/callable_method_pointer.h",0x67,
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
LAB_001199db:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<VersionControlEditorPlugin, void, Object*>::call(Variant const**,
   int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<VersionControlEditorPlugin,void,Object*>::call
          (CallableCustomMethodPointer<VersionControlEditorPlugin,void,Object*> *this,
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
  uint uVar8;
  ulong *puVar9;
  code *UNRECOVERED_JUMPTABLE;
  long in_FS_OFFSET;
  bool bVar10;
  CowData<char32_t> local_70 [8];
  CowData<char32_t> local_68 [8];
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar8 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar8 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar3 = (ulong)local_58 >> 8;
      local_58 = (char *)(uVar3 << 8);
      LOCK();
      bVar10 = (char)ObjectDB::spin_lock == '\0';
      if (bVar10) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar10) break;
      local_58 = (char *)(uVar3 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar9 = (ulong *)((ulong)uVar8 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar9 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_00119bc9;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar9[1] == 0) goto LAB_00119bc9;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if ((uint)param_2 < 2) {
      if (param_2 != 0) {
        *(undefined4 *)param_4 = 0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,0x18);
        if (cVar5 == '\0') {
LAB_00119b20:
          uVar4 = _LC110;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        else {
          this_00 = *param_1;
          pOVar6 = Variant::operator_cast_to_Object_(this_00);
          pOVar7 = Variant::operator_cast_to_Object_(this_00);
          if ((pOVar7 == (Object *)0x0) && (pOVar6 != (Object *)0x0)) goto LAB_00119b20;
        }
        pOVar6 = Variant::operator_cast_to_Object_(*param_1);
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00119b67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),pOVar6);
          return;
        }
        goto LAB_00119c8b;
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
LAB_00119bc9:
    local_60 = 0;
    local_58 = "\', can\'t call method.";
    local_50 = 0x15;
    String::parse_latin1((StrRange *)&local_60);
    uitos((ulong)local_70);
    operator+((char *)local_68,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_58,(String *)local_68);
    _err_print_error(&_LC108,"./core/object/callable_method_pointer.h",0x67,
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
LAB_00119c8b:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<VersionControlEditorPlugin, void, Variant const&>::call(Variant
   const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<VersionControlEditorPlugin,void,Variant_const&>::call
          (CallableCustomMethodPointer<VersionControlEditorPlugin,void,Variant_const&> *this,
          Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  char cVar4;
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
  int local_48 [6];
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
        if ((uint)param_2 < 2) {
          if (param_2 == 0) {
            *(undefined4 *)param_4 = 4;
            *(undefined4 *)(param_4 + 8) = 1;
          }
          else {
            *(undefined4 *)param_4 = 0;
            if (((ulong)pcVar7 & 1) != 0) {
              pcVar7 = *(code **)(pcVar7 + *(long *)(lVar1 + lVar2) + -1);
            }
            cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,0);
            if (cVar4 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = 0;
            }
            Variant::Variant((Variant *)local_48,*param_1);
            (*pcVar7)((long *)(lVar1 + lVar2),(Variant *)local_48);
            if (Variant::needs_deinit[local_48[0]] != '\0') {
              Variant::_clear_internal();
            }
          }
        }
        else {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 1;
        }
        goto LAB_00119d5e;
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
  _err_print_error(&_LC108,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (String *)&local_58,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref(local_68);
  CowData<char32_t>::_unref(local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
LAB_00119d5e:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<VersionControlEditorPlugin, void, bool>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<VersionControlEditorPlugin,void,bool>::call
          (CallableCustomMethodPointer<VersionControlEditorPlugin,void,bool> *this,Variant **param_1
          ,int param_2,Variant *param_3,CallError *param_4)

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
      goto LAB_0011a0d9;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar7[1] == 0) goto LAB_0011a0d9;
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
        uVar4 = _LC114;
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        bVar8 = Variant::operator_cast_to_bool(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0011a088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),bVar8);
          return;
        }
        goto LAB_0011a19b;
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
LAB_0011a0d9:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC108,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0011a19b:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<VersionControlEditorPlugin, void, String const&>::call(Variant
   const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<VersionControlEditorPlugin,void,String_const&>::call
          (CallableCustomMethodPointer<VersionControlEditorPlugin,void,String_const&> *this,
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
            uVar4 = _LC115;
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
        goto LAB_0011a26e;
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
  _err_print_error(&_LC108,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (Variant *)&local_48,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref(local_58);
  CowData<char32_t>::_unref(local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
LAB_0011a26e:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* List<EditorVCSInterface::Commit, DefaultAllocator>::~List() */

void __thiscall
List<EditorVCSInterface::Commit,DefaultAllocator>::~List
          (List<EditorVCSInterface::Commit,DefaultAllocator> *this)

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
    if (*(long **)(this_00 + 0x38) == plVar3) {
      lVar2 = *(long *)(this_00 + 0x28);
      lVar1 = *(long *)(this_00 + 0x30);
      *plVar3 = lVar2;
      if (this_00 == (CowData<char32_t> *)plVar3[1]) {
        plVar3[1] = lVar1;
      }
      if (lVar1 != 0) {
        *(long *)(lVar1 + 0x28) = lVar2;
        lVar2 = *(long *)(this_00 + 0x28);
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0x30) = lVar1;
      }
      CowData<char32_t>::_unref(this_00 + 0x10);
      CowData<char32_t>::_unref(this_00 + 8);
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
            if (lVar3 == 0) goto LAB_0011a5af;
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
LAB_0011a5af:
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
    if (cVar6 != '\0') goto LAB_0011a663;
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
      if (cVar6 != '\0') goto LAB_0011a663;
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
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        if (cVar6 != '\0') goto LAB_0011a663;
      }
      cVar6 = String::operator==(param_1,"CanvasItem");
      if (cVar6 == '\0') {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar8 = Node::is_class((Node *)this,param_1);
          return uVar8;
        }
        goto LAB_0011a835;
      }
    }
  }
LAB_0011a663:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0011a835:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HFlowContainer::is_class(String const&) const */

undefined8 __thiscall HFlowContainer::is_class(HFlowContainer *this,String *param_1)

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
            if (lVar3 == 0) goto LAB_0011a8bf;
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
LAB_0011a8bf:
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
    if (cVar6 != '\0') goto LAB_0011a973;
  }
  cVar6 = String::operator==(param_1,"HFlowContainer");
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
      if (cVar6 != '\0') goto LAB_0011a973;
    }
    cVar6 = String::operator==(param_1,"FlowContainer");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar8 = Container::is_class((Container *)this,param_1);
        return uVar8;
      }
      goto LAB_0011aab8;
    }
  }
LAB_0011a973:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0011aab8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VBoxContainer::is_class(String const&) const */

undefined8 __thiscall VBoxContainer::is_class(VBoxContainer *this,String *param_1)

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
            if (lVar3 == 0) goto LAB_0011ab3f;
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
LAB_0011ab3f:
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
    if (cVar6 != '\0') goto LAB_0011abf3;
  }
  cVar6 = String::operator==(param_1,"VBoxContainer");
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
      if (cVar6 != '\0') goto LAB_0011abf3;
    }
    cVar6 = String::operator==(param_1,"BoxContainer");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar8 = Container::is_class((Container *)this,param_1);
        return uVar8;
      }
      goto LAB_0011ad38;
    }
  }
LAB_0011abf3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0011ad38:
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
            if (lVar3 == 0) goto LAB_0011adaf;
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
LAB_0011adaf:
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
    if (cVar6 != '\0') goto LAB_0011ae63;
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
      if (cVar6 != '\0') goto LAB_0011ae63;
    }
    cVar6 = String::operator==(param_1,"BoxContainer");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar8 = Container::is_class((Container *)this,param_1);
        return uVar8;
      }
      goto LAB_0011afa8;
    }
  }
LAB_0011ae63:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0011afa8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VersionControlEditorPlugin::_initialize_classv() */

void VersionControlEditorPlugin::_initialize_classv(void)

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
    if (EditorPlugin::initialize_class()::initialized == '\0') {
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
        if ((code *)PTR__bind_methods_00125058 != Node::_bind_methods) {
          Node::_bind_methods();
        }
        Node::initialize_class()::initialized = '\x01';
      }
      local_58 = "Node";
      local_68 = 0;
      local_50 = 4;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "EditorPlugin";
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
      if ((code *)PTR__bind_methods_00125048 != Node::_bind_methods) {
        EditorPlugin::_bind_methods();
      }
      if ((code *)PTR__bind_compatibility_methods_00125050 != Object::_bind_compatibility_methods) {
        EditorPlugin::_bind_compatibility_methods();
      }
      EditorPlugin::initialize_class()::initialized = '\x01';
    }
    local_58 = "EditorPlugin";
    local_68 = 0;
    local_50 = 0xc;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "VersionControlEditorPlugin";
    local_70 = 0;
    local_50 = 0x1a;
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



/* List<EditorVCSInterface::DiffLine, DefaultAllocator>::~List() */

void __thiscall
List<EditorVCSInterface::DiffLine,DefaultAllocator>::~List
          (List<EditorVCSInterface::DiffLine,DefaultAllocator> *this)

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
    if (*(long **)((long)pvVar1 + 0x38) == plVar4) {
      lVar3 = *(long *)((long)pvVar1 + 0x28);
      lVar2 = *(long *)((long)pvVar1 + 0x30);
      *plVar4 = lVar3;
      if (pvVar1 == (void *)plVar4[1]) {
        plVar4[1] = lVar2;
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0x28) = lVar3;
        lVar3 = *(long *)((long)pvVar1 + 0x28);
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x30) = lVar2;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar1 + 0x20));
      CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar1 + 0x18));
      CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar1 + 0x10));
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
              if ((code *)PTR__bind_methods_00125058 != Node::_bind_methods) {
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
            if ((code *)PTR__bind_compatibility_methods_00125060 !=
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
      if ((code *)PTR__bind_methods_00125068 != Container::_bind_methods) {
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
              if ((code *)PTR__bind_methods_00125058 != Node::_bind_methods) {
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
            if ((code *)PTR__bind_compatibility_methods_00125060 !=
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
      if ((code *)PTR__bind_methods_00125068 != Container::_bind_methods) {
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



/* HFlowContainer::_initialize_classv() */

void HFlowContainer::_initialize_classv(void)

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
    if (FlowContainer::initialize_class()::initialized == '\0') {
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
              if ((code *)PTR__bind_methods_00125058 != Node::_bind_methods) {
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
            if ((code *)PTR__bind_compatibility_methods_00125060 !=
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
      local_58 = "FlowContainer";
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
      if ((code *)PTR__bind_methods_00125070 != Container::_bind_methods) {
        FlowContainer::_bind_methods();
      }
      FlowContainer::initialize_class()::initialized = '\x01';
    }
    local_58 = "FlowContainer";
    local_68 = 0;
    local_50 = 0xd;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "HFlowContainer";
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
  local_78 = &_LC18;
  local_88 = 0;
  local_90 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = &_LC18;
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
LAB_0011c86d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0011c86d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar5;
      local_68 = local_80;
      goto joined_r0x0011c88f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar5;
joined_r0x0011c88f:
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



/* EditorPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall EditorPlugin::_get_property_listv(EditorPlugin *this,List *param_1,bool param_2)

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
  local_78 = "EditorPlugin";
  local_70 = 0xc;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorPlugin";
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
      goto LAB_0011cbc1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011cbc1:
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
  StringName::StringName((StringName *)&local_78,"EditorPlugin",false);
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



/* VersionControlEditorPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */

void __thiscall
VersionControlEditorPlugin::_get_property_listv
          (VersionControlEditorPlugin *this,List *param_1,bool param_2)

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
    EditorPlugin::_get_property_listv((EditorPlugin *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "VersionControlEditorPlugin";
  local_70 = 0x1a;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "VersionControlEditorPlugin";
  local_98 = 0;
  local_70 = 0x1a;
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
      goto LAB_0011ce71;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011ce71:
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
  StringName::StringName((StringName *)&local_78,"VersionControlEditorPlugin",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      EditorPlugin::_get_property_listv((EditorPlugin *)this,param_1,true);
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
      goto LAB_0011d121;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011d121:
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
  if ((code *)PTR__get_property_list_00125078 != Object::_get_property_list) {
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
      goto LAB_0011d3f1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011d3f1:
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
  if ((code *)PTR__get_property_list_00125080 != CanvasItem::_get_property_list) {
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
LAB_0011d6ed:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0011d6ed;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0011d70f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0011d70f:
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



/* FlowContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall FlowContainer::_get_property_listv(FlowContainer *this,List *param_1,bool param_2)

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
  local_78 = "FlowContainer";
  local_70 = 0xd;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "FlowContainer";
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
LAB_0011dacd:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0011dacd;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0011daef;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0011daef:
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
  StringName::StringName((StringName *)&local_78,"FlowContainer",false);
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



/* HFlowContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall HFlowContainer::_get_property_listv(HFlowContainer *this,List *param_1,bool param_2)

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
    FlowContainer::_get_property_listv((FlowContainer *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "HFlowContainer";
  local_70 = 0xe;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "HFlowContainer";
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
  if (local_90 == 0) {
LAB_0011dead:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0011dead;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0011decf;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0011decf:
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
  StringName::StringName((StringName *)&local_78,"HFlowContainer",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      FlowContainer::_get_property_listv((FlowContainer *)this,param_1,true);
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
LAB_0011e28d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0011e28d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0011e2af;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0011e2af:
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
LAB_0011e66d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0011e66d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0011e68f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0011e68f:
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
      goto LAB_0011ea21;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011ea21:
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



/* Ref<Theme>::unref() */

void __thiscall Ref<Theme>::unref(Ref<Theme> *this)

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



/* VersionControlEditorPlugin::_notificationv(int, bool) */

void __thiscall
VersionControlEditorPlugin::_notificationv
          (VersionControlEditorPlugin *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if (param_1 == 0xd) {
      _notification(iVar1);
    }
    if ((code *)PTR__notification_00125088 != Node::_notification) {
      EditorPlugin::_notification(iVar1);
    }
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  if ((code *)PTR__notification_00125088 != Node::_notification) {
    EditorPlugin::_notification(iVar1);
  }
  if (param_1 == 0xd) {
    _notification(iVar1);
    return;
  }
  return;
}



/* List<EditorVCSInterface::DiffHunk, DefaultAllocator>::~List() */

void __thiscall
List<EditorVCSInterface::DiffHunk,DefaultAllocator>::~List
          (List<EditorVCSInterface::DiffHunk,DefaultAllocator> *this)

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
    if (*(long **)((long)pvVar1 + 0x28) == plVar4) {
      lVar3 = *(long *)((long)pvVar1 + 0x18);
      lVar2 = *(long *)((long)pvVar1 + 0x20);
      *plVar4 = lVar3;
      if (pvVar1 == (void *)plVar4[1]) {
        plVar4[1] = lVar2;
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0x18) = lVar3;
        lVar3 = *(long *)((long)pvVar1 + 0x18);
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x20) = lVar2;
      }
      List<EditorVCSInterface::DiffLine,DefaultAllocator>::~List
                ((List<EditorVCSInterface::DiffLine,DefaultAllocator> *)((long)pvVar1 + 0x10));
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



/* List<EditorVCSInterface::DiffFile, DefaultAllocator>::~List() */

void __thiscall
List<EditorVCSInterface::DiffFile,DefaultAllocator>::~List
          (List<EditorVCSInterface::DiffFile,DefaultAllocator> *this)

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
    if (*(long **)(this_00 + 0x28) == plVar3) {
      lVar2 = *(long *)(this_00 + 0x18);
      lVar1 = *(long *)(this_00 + 0x20);
      *plVar3 = lVar2;
      if (this_00 == (CowData<char32_t> *)plVar3[1]) {
        plVar3[1] = lVar1;
      }
      if (lVar1 != 0) {
        *(long *)(lVar1 + 0x18) = lVar2;
        lVar2 = *(long *)(this_00 + 0x18);
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0x20) = lVar1;
      }
      List<EditorVCSInterface::DiffHunk,DefaultAllocator>::~List
                ((List<EditorVCSInterface::DiffHunk,DefaultAllocator> *)(this_00 + 0x10));
      CowData<char32_t>::_unref(this_00 + 8);
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



/* VersionControlEditorPlugin::singleton */

void VersionControlEditorPlugin::_GLOBAL__sub_I_singleton(void)

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
  if (FileDialog::base_property_helper == '\0') {
    FileDialog::base_property_helper = '\x01';
    FileDialog::base_property_helper._64_8_ = 0;
    FileDialog::base_property_helper._0_16_ = (undefined1  [16])0x0;
    FileDialog::base_property_helper._24_16_ = (undefined1  [16])0x0;
    FileDialog::base_property_helper._40_16_ = (undefined1  [16])0x0;
    FileDialog::base_property_helper._56_8_ = 2;
    __cxa_atexit(PropertyListHelper::~PropertyListHelper,FileDialog::base_property_helper,
                 &__dso_handle);
  }
  if (MenuButton::base_property_helper == '\0') {
    MenuButton::base_property_helper = '\x01';
    MenuButton::base_property_helper._64_8_ = 0;
    MenuButton::base_property_helper._0_16_ = (undefined1  [16])0x0;
    MenuButton::base_property_helper._24_16_ = (undefined1  [16])0x0;
    MenuButton::base_property_helper._40_16_ = (undefined1  [16])0x0;
    MenuButton::base_property_helper._56_8_ = 2;
    __cxa_atexit(PropertyListHelper::~PropertyListHelper,MenuButton::base_property_helper,
                 &__dso_handle);
  }
  if (ItemList::base_property_helper != '\0') {
    return;
  }
  ItemList::base_property_helper = 1;
  ItemList::base_property_helper._64_8_ = 0;
  ItemList::base_property_helper._56_8_ = 2;
  ItemList::base_property_helper._0_16_ = (undefined1  [16])0x0;
  ItemList::base_property_helper._24_16_ = (undefined1  [16])0x0;
  ItemList::base_property_helper._40_16_ = (undefined1  [16])0x0;
  __cxa_atexit(PropertyListHelper::~PropertyListHelper,ItemList::base_property_helper,&__dso_handle,
               uStack_8);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* List<EditorVCSInterface::DiffLine, DefaultAllocator>::~List() */

void __thiscall
List<EditorVCSInterface::DiffLine,DefaultAllocator>::~List
          (List<EditorVCSInterface::DiffLine,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<EditorVCSInterface::Commit, DefaultAllocator>::~List() */

void __thiscall
List<EditorVCSInterface::Commit,DefaultAllocator>::~List
          (List<EditorVCSInterface::Commit,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<EditorVCSInterface::StatusFile, DefaultAllocator>::~List() */

void __thiscall
List<EditorVCSInterface::StatusFile,DefaultAllocator>::~List
          (List<EditorVCSInterface::StatusFile,DefaultAllocator> *this)

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
/* EditorPlugin::~EditorPlugin() */

void __thiscall EditorPlugin::~EditorPlugin(EditorPlugin *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* EditorVCSInterface::DiffLine::DiffLine(EditorVCSInterface::DiffLine const&) */

void __thiscall EditorVCSInterface::DiffLine::DiffLine(DiffLine *this,DiffLine *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* EditorPlugin::EditorPlugin() */

void __thiscall EditorPlugin::EditorPlugin(EditorPlugin *this)

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
/* HFlowContainer::~HFlowContainer() */

void __thiscall HFlowContainer::~HFlowContainer(HFlowContainer *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<VersionControlEditorPlugin, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<VersionControlEditorPlugin,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<VersionControlEditorPlugin,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<VersionControlEditorPlugin, void,
   bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<VersionControlEditorPlugin,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<VersionControlEditorPlugin,void,bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<VersionControlEditorPlugin, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<VersionControlEditorPlugin,void,String_const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<VersionControlEditorPlugin,void,String_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<VersionControlEditorPlugin, void, Variant
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<VersionControlEditorPlugin,void,Variant_const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<VersionControlEditorPlugin,void,Variant_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<VersionControlEditorPlugin, void,
   Object*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<VersionControlEditorPlugin,void,Object*>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<VersionControlEditorPlugin,void,Object*> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<VersionControlEditorPlugin, void, Object*, int, int,
   int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<VersionControlEditorPlugin,void,Object*,int,int,int>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<VersionControlEditorPlugin,void,Object*,int,int,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<VersionControlEditorPlugin, void, Ref<InputEvent>
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<VersionControlEditorPlugin,void,Ref<InputEvent>const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<VersionControlEditorPlugin,void,Ref<InputEvent>const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<VersionControlEditorPlugin, void,
   int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<VersionControlEditorPlugin,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<VersionControlEditorPlugin,void,int> *this)

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
/* List<EditorVCSInterface::DiffFile, DefaultAllocator>::~List() */

void __thiscall
List<EditorVCSInterface::DiffFile,DefaultAllocator>::~List
          (List<EditorVCSInterface::DiffFile,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<EditorVCSInterface::DiffHunk, DefaultAllocator>::~List() */

void __thiscall
List<EditorVCSInterface::DiffHunk,DefaultAllocator>::~List
          (List<EditorVCSInterface::DiffHunk,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}




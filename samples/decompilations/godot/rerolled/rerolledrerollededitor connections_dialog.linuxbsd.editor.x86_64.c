/* ConnectDialog::_item_activated() */

void ConnectDialog::_item_activated(void)

{
  AcceptDialog::_ok_pressed();
  return;
}



/* ConnectDialog::_focus_currently_connected() */

void __thiscall ConnectDialog::_focus_currently_connected(ConnectDialog *this)

{
  SceneTreeEditor::set_selected(*(Node **)(this + 0xe50),SUB81(*(undefined8 *)(this + 0xdd0),0));
  return;
}



/* ConnectDialog::_open_method_popup() */

void __thiscall ConnectDialog::_open_method_popup(ConnectDialog *this)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  Window::popup_centered(*(Vector2i **)(this + 0xe68));
  LineEdit::clear();
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    Control::grab_focus();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ConnectionsDock::_class_menu_about_to_popup() */

void __thiscall ConnectionsDock::_class_menu_about_to_popup(ConnectionsDock *this)

{
  undefined8 uVar1;
  bool bVar2;
  
  uVar1 = *(undefined8 *)(this + 0xa38);
  bVar2 = (bool)PopupMenu::get_item_index((int)uVar1);
  PopupMenu::set_item_disabled((int)uVar1,bVar2);
  return;
}



/* CowData<Control*>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Control*>::_copy_on_write(CowData<Control*> *this)

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



/* ConnectDialog::_unbind_count_changed(double) */

void ConnectDialog::_unbind_count_changed(double param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long in_RDI;
  long *plVar4;
  
  CowData<Control*>::_copy_on_write((CowData<Control*> *)(in_RDI + 0xed0));
  plVar3 = *(long **)(in_RDI + 0xed0);
  CowData<Control*>::_copy_on_write((CowData<Control*> *)(in_RDI + 0xed0));
  plVar4 = *(long **)(in_RDI + 0xed0);
  if (plVar4 != (long *)0x0) {
    plVar4 = plVar4 + plVar4[-1];
  }
  for (; plVar4 != plVar3; plVar3 = plVar3 + 1) {
    lVar2 = *plVar3;
    if (lVar2 != 0) {
      lVar1 = __dynamic_cast(lVar2,&Object::typeinfo,&BaseButton::typeinfo,0);
      if (lVar1 != 0) {
        BaseButton::set_disabled(SUB81(lVar1,0));
      }
      lVar2 = __dynamic_cast(lVar2,&Object::typeinfo,&EditorInspector::typeinfo,0);
      if (lVar2 != 0) {
        EditorInspector::set_read_only(SUB81(lVar2,0));
      }
    }
  }
  return;
}



/* ConnectDialog::_post_popup() */

void __thiscall ConnectDialog::_post_popup(ConnectDialog *this)

{
  long lVar1;
  undefined8 uVar2;
  CallableCustom *pCVar3;
  long in_FS_OFFSET;
  Callable aCStack_68 [16];
  int local_58 [6];
  long local_40;
  
  lVar1 = *(long *)(this + 0xe28);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pCVar3 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar3);
  *(long *)(pCVar3 + 0x28) = lVar1;
  *(undefined1 (*) [16])(pCVar3 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)pCVar3 = &PTR_hash_00125600;
  *(undefined8 *)(pCVar3 + 0x40) = 0;
  uVar2 = *(undefined8 *)(lVar1 + 0x60);
  *(undefined8 *)(pCVar3 + 0x10) = 0;
  *(undefined8 *)(pCVar3 + 0x30) = uVar2;
  *(undefined **)(pCVar3 + 0x20) = &_LC8;
  *(code **)(pCVar3 + 0x38) = Control::grab_focus;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar3,(int)pCVar3 + 0x28);
  *(char **)(pCVar3 + 0x20) = "Control::grab_focus";
  Callable::Callable(aCStack_68,pCVar3);
  Variant::Variant((Variant *)local_58,0);
  Callable::call_deferredp((Variant **)aCStack_68,0);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  Callable::~Callable(aCStack_68);
  lVar1 = *(long *)(this + 0xe28);
  pCVar3 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar3);
  *(undefined **)(pCVar3 + 0x20) = &_LC8;
  *(undefined1 (*) [16])(pCVar3 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)pCVar3 = &PTR_hash_00125690;
  *(undefined8 *)(pCVar3 + 0x40) = 0;
  uVar2 = *(undefined8 *)(lVar1 + 0x60);
  *(undefined8 *)(pCVar3 + 0x10) = 0;
  *(undefined8 *)(pCVar3 + 0x30) = uVar2;
  *(long *)(pCVar3 + 0x28) = lVar1;
  *(code **)(pCVar3 + 0x38) = LineEdit::select_all;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar3,(int)pCVar3 + 0x28);
  *(char **)(pCVar3 + 0x20) = "LineEdit::select_all";
  Callable::Callable(aCStack_68,pCVar3);
  Variant::Variant((Variant *)local_58,0);
  Callable::call_deferredp((Variant **)aCStack_68,0);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  Callable::~Callable(aCStack_68);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ConnectDialog::_notification(int) [clone .part.0] */

void ConnectDialog::_notification(int param_1)

{
  long *plVar1;
  undefined8 uVar2;
  Ref *pRVar3;
  long lVar4;
  Object *pOVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 in_register_0000003c;
  long lVar10;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  Object *local_48;
  long local_40;
  
  lVar10 = CONCAT44(in_register_0000003c,param_1);
  uVar9 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  while( true ) {
    iVar7 = OptionButton::get_item_count();
    if (iVar7 <= (int)uVar9) break;
    uVar8 = OptionButton::get_item_id((int)*(undefined8 *)(lVar10 + 0xea8));
    Variant::get_type_name(&local_58,uVar8);
    uVar2 = *(undefined8 *)(lVar10 + 0xea8);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    Window::get_editor_theme_icon((StringName *)&local_48);
    OptionButton::set_item_icon((int)uVar2,(Ref *)(ulong)uVar9);
    if (local_48 != (Object *)0x0) {
      cVar6 = RefCounted::unreference();
      pOVar5 = local_48;
      if (cVar6 != '\0') {
        cVar6 = predelete_handler(local_48);
        if (cVar6 != '\0') {
          (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
          Memory::free_static(pOVar5,false);
        }
      }
    }
    if ((StringName::configured != '\0') && (local_50 != 0)) {
      StringName::unref();
    }
    lVar4 = local_58;
    if (local_58 != 0) {
      LOCK();
      plVar1 = (long *)(local_58 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_58 = 0;
        Memory::free_static((void *)(lVar4 + -0x10),false);
      }
    }
    uVar9 = uVar9 + 1;
  }
  pRVar3 = *(Ref **)(lVar10 + 0xe80);
  StringName::StringName((StringName *)&local_50,"Search",false);
  Window::get_editor_theme_icon((StringName *)&local_48);
  LineEdit::set_right_icon(pRVar3);
  if (local_48 != (Object *)0x0) {
    cVar6 = RefCounted::unreference();
    pOVar5 = local_48;
    if (cVar6 != '\0') {
      cVar6 = predelete_handler(local_48);
      if (cVar6 != '\0') {
        (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
        Memory::free_static(pOVar5,false);
      }
    }
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  pRVar3 = *(Ref **)(lVar10 + 0xe60);
  StringName::StringName((StringName *)&local_50,"Edit",false);
  Window::get_editor_theme_icon((StringName *)&local_48);
  Button::set_button_icon(pRVar3);
  if (local_48 != (Object *)0x0) {
    cVar6 = RefCounted::unreference();
    if (cVar6 != '\0') {
      cVar6 = predelete_handler(local_48);
      if (cVar6 != '\0') {
        (**(code **)(*(long *)local_48 + 0x140))(local_48);
        Memory::free_static(local_48,false);
      }
    }
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ConnectDialog::_method_selected() */

void __thiscall ConnectDialog::_method_selected(ConnectDialog *this)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long in_FS_OFFSET;
  long local_40;
  int local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  Tree::get_selected();
  uVar2 = *(undefined8 *)(this + 0xe28);
  TreeItem::get_metadata((int)local_38);
  Variant::operator_cast_to_String((Variant *)&local_40);
  LineEdit::set_text(uVar2);
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
  if (Variant::needs_deinit[local_38[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<char32_t>::_ref(CowData<char32_t> const&) [clone .part.0] [clone .constprop.0] */

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



/* ConnectionsDock::~ConnectionsDock() */

void __thiscall ConnectionsDock::~ConnectionsDock(ConnectionsDock *this)

{
  long *plVar1;
  long lVar2;
  bool bVar3;
  
  *(undefined ***)this = &PTR__initialize_classv_00125288;
  if (*(long *)(this + 0xa40) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xa40) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0xa40);
      *(undefined8 *)(this + 0xa40) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  bVar3 = StringName::configured != '\0';
  *(code **)this = RefCounted::reference;
  if (bVar3) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00100afe;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00100afe:
  Control::~Control((Control *)this);
  return;
}



/* ConnectionsDock::~ConnectionsDock() */

void __thiscall ConnectionsDock::~ConnectionsDock(ConnectionsDock *this)

{
  long *plVar1;
  long lVar2;
  bool bVar3;
  
  *(undefined ***)this = &PTR__initialize_classv_00125288;
  if (*(long *)(this + 0xa40) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xa40) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0xa40);
      *(undefined8 *)(this + 0xa40) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  bVar3 = StringName::configured != '\0';
  *(code **)this = RefCounted::reference;
  if (bVar3) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00100b9e;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00100b9e:
  Control::~Control((Control *)this);
  operator_delete(this,0xa60);
  return;
}



/* ConnectDialog::_cancel_pressed() */

void ConnectDialog::_cancel_pressed(void)

{
  Window::hide();
  return;
}



/* ConnectDialog::_update_ok_enabled() */

void __thiscall ConnectDialog::_update_ok_enabled(ConnectDialog *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  long in_FS_OFFSET;
  long local_28;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = SceneTreeEditor::get_selected();
  if (lVar3 != 0) {
    LineEdit::get_text();
    if (local_28 != 0) {
      iVar4 = (int)*(undefined8 *)(local_28 + -8);
      if (iVar4 == 0) {
        LOCK();
        plVar1 = (long *)(local_28 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_28 + -0x10),false);
        }
      }
      else {
        LOCK();
        plVar1 = (long *)(local_28 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_28 + -0x10),false);
        }
        if (iVar4 != 1) {
          if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
            BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xd88),0));
            return;
          }
          goto LAB_00100cdc;
        }
      }
    }
  }
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xd88),0));
    return;
  }
LAB_00100cdc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ConnectDialog::_notification(int) */

void __thiscall ConnectDialog::_notification(ConnectDialog *this,int param_1)

{
  if (param_1 == 10) {
    EditorInspector::edit(*(Object **)(this + 0xea0));
  }
  else if (param_1 != 0x20) {
    return;
  }
  _notification((int)this);
  return;
}



/* ConnectDialog::get_source() const */

undefined8 __thiscall ConnectDialog::get_source(ConnectDialog *this)

{
  return *(undefined8 *)(this + 0xdd0);
}



/* ConnectDialog::get_signal_name() const */

void ConnectDialog::get_signal_name(void)

{
  long in_RSI;
  StringName *in_RDI;
  
  StringName::StringName(in_RDI,(StringName *)(in_RSI + 0xe10));
  return;
}



/* ConnectDialog::get_dst_path() const */

void ConnectDialog::get_dst_path(void)

{
  long in_RSI;
  NodePath *in_RDI;
  
  NodePath::NodePath(in_RDI,(NodePath *)(in_RSI + 0xe40));
  return;
}



/* ConnectDialog::set_dst_node(Node*) */

void __thiscall ConnectDialog::set_dst_node(ConnectDialog *this,Node *param_1)

{
  SceneTreeEditor::set_selected(*(Node **)(this + 0xe50),SUB81(param_1,0));
  return;
}



/* ConnectDialog::set_dst_method(StringName const&) */

void __thiscall ConnectDialog::set_dst_method(ConnectDialog *this,StringName *param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  char *__s;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  size_t local_30;
  long local_20;
  
  lVar2 = *(long *)param_1;
  uVar3 = *(undefined8 *)(this + 0xe28);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar2 == 0) {
    local_40 = 0;
  }
  else {
    __s = *(char **)(lVar2 + 8);
    local_40 = 0;
    if (__s == (char *)0x0) {
      if (*(long *)(lVar2 + 0x10) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_40,(CowData *)(lVar2 + 0x10));
      }
    }
    else {
      local_30 = strlen(__s);
      local_38 = __s;
      String::parse_latin1((StrRange *)&local_40);
    }
  }
  LineEdit::set_text(uVar3);
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



/* ConnectDialog::get_unbinds() const */

int ConnectDialog::get_unbinds(void)

{
  double dVar1;
  
  dVar1 = (double)Range::get_value();
  return (int)dVar1;
}



/* ConnectDialog::get_deferred() const */

void ConnectDialog::get_deferred(void)

{
  BaseButton::is_pressed();
  return;
}



/* ConnectDialog::get_one_shot() const */

void ConnectDialog::get_one_shot(void)

{
  BaseButton::is_pressed();
  return;
}



/* ConnectDialog::is_editing() const */

ConnectDialog __thiscall ConnectDialog::is_editing(ConnectDialog *this)

{
  return this[0xe38];
}



/* ConnectionsDock::_get_item_type(TreeItem const&) const */

char __thiscall ConnectionsDock::_get_item_type(ConnectionsDock *this,TreeItem *param_1)

{
  char cVar1;
  TreeItem *pTVar2;
  long lVar3;
  long lVar4;
  
  pTVar2 = (TreeItem *)Tree::get_root();
  cVar1 = '\0';
  if (param_1 != pTVar2) {
    lVar3 = TreeItem::get_parent();
    lVar4 = Tree::get_root();
    cVar1 = '\x01';
    if (lVar3 != lVar4) {
      TreeItem::get_parent();
      lVar3 = TreeItem::get_parent();
      lVar4 = Tree::get_root();
      cVar1 = (lVar3 != lVar4) + '\x02';
    }
  }
  return cVar1;
}



/* ConnectionsDock::_slot_menu_about_to_popup() */

void __thiscall ConnectionsDock::_slot_menu_about_to_popup(ConnectionsDock *this)

{
  code *pcVar1;
  undefined8 uVar2;
  bool bVar3;
  int iVar4;
  TreeItem *pTVar5;
  long in_FS_OFFSET;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  pTVar5 = (TreeItem *)Tree::get_selected();
  if (pTVar5 != (TreeItem *)0x0) {
    iVar4 = _get_item_type(this,pTVar5);
    if (iVar4 == 3) {
      pcVar1 = *(code **)(*(long *)pTVar5 + 0xa0);
      StringName::StringName((StringName *)&local_38,"_inherited_connection",false);
      (*pcVar1)(pTVar5,&local_38);
      if ((StringName::configured != '\0') && (local_38 != 0)) {
        StringName::unref();
      }
      uVar2 = *(undefined8 *)(this + 0xa50);
      bVar3 = (bool)PopupMenu::get_item_index((int)uVar2);
      PopupMenu::set_item_disabled((int)uVar2,bVar3);
      uVar2 = *(undefined8 *)(this + 0xa50);
      bVar3 = (bool)PopupMenu::get_item_index((int)uVar2);
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        PopupMenu::set_item_disabled((int)uVar2,bVar3);
        return;
      }
      goto LAB_00101062;
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00101062:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ConnectionsDock::_is_connection_inherited(Object::Connection&) */

uint __thiscall ConnectionsDock::_is_connection_inherited(ConnectionsDock *this,Connection *param_1)

{
  return *(uint *)(param_1 + 0x20) >> 4 & 1;
}



/* ConnectionsDock::_close() */

void ConnectionsDock::_close(void)

{
  CanvasItem::hide();
  return;
}



/* ConnectDialog::_advanced_pressed() */

void __thiscall ConnectDialog::_advanced_pressed(ConnectDialog *this)

{
  undefined8 uVar1;
  char cVar2;
  bool bVar3;
  String *pSVar4;
  Node *pNVar5;
  Node *pNVar6;
  long in_FS_OFFSET;
  undefined8 local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  cVar2 = BaseButton::is_pressed();
  if (cVar2 == '\0') {
    Window::reset_size();
    pSVar4 = *(String **)(this + 0xdb8);
    local_70 = 0;
    local_68 = "";
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_70);
    local_68 = "Connect to Script:";
    local_78 = 0;
    local_60 = 0x12;
    String::parse_latin1((StrRange *)&local_78);
    TTR((String *)&local_68,(String *)&local_78);
    Label::set_text(pSVar4);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    SceneTreeEditor::set_connect_to_script_mode(SUB81(*(undefined8 *)(this + 0xe50),0));
    CanvasItem::hide();
    uVar1 = *(undefined8 *)(this + 0xee0);
    if (*(long *)(this + 0x240) == 0) {
      _err_print_error("get_tree","./scene/main/node.h",0x1e5,"Parameter \"data.tree\" is null.",0,0
                      );
    }
    pNVar5 = (Node *)SceneTree::get_edited_scene_root();
    if (*(long *)(this + 0x240) == 0) {
      _err_print_error("get_tree","./scene/main/node.h",0x1e5,"Parameter \"data.tree\" is null.",0,0
                      );
    }
    pNVar6 = (Node *)SceneTree::get_edited_scene_root();
    _find_first_script(pNVar6,pNVar5);
    CanvasItem::set_visible(SUB81(uVar1,0));
  }
  else {
    pSVar4 = *(String **)(this + 0xdb8);
    local_70 = 0;
    local_68 = "";
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_70);
    local_68 = "Connect to Node:";
    local_78 = 0;
    local_60 = 0x10;
    String::parse_latin1((StrRange *)&local_78);
    TTR((String *)&local_68,(String *)&local_78);
    Label::set_text(pSVar4);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    SceneTreeEditor::set_connect_to_script_mode(SUB81(*(undefined8 *)(this + 0xe50),0));
    CanvasItem::show();
    CanvasItem::hide();
  }
  pSVar4 = (String *)EditorSettings::get_singleton();
  bVar3 = (bool)BaseButton::is_pressed();
  Variant::Variant((Variant *)local_58,bVar3);
  local_68 = "use_advanced_connections";
  local_70 = 0;
  local_60 = 0x18;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "editor_metadata";
  local_78 = 0;
  local_60 = 0xf;
  String::parse_latin1((StrRange *)&local_78);
  EditorSettings::set_project_metadata(pSVar4,(String *)&local_78,(Variant *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  local_58[0] = 0;
  local_58[1] = 0;
  Window::popup_centered((Vector2i *)this);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ConnectDialog::popup_dialog(String const&) */

void ConnectDialog::popup_dialog(String *param_1)

{
  undefined8 uVar1;
  StringName *pSVar2;
  char cVar3;
  int iVar4;
  Node *pNVar5;
  Node *pNVar6;
  CowData *in_RSI;
  long in_FS_OFFSET;
  undefined8 local_60;
  undefined8 local_58;
  long local_40;
  
  uVar1 = *(undefined8 *)(param_1 + 0xdc0);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = 0;
  if (*(long *)in_RSI != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,in_RSI);
  }
  LineEdit::set_text(uVar1,(CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  pSVar2 = *(StringName **)(param_1 + 0xed8);
  if (popup_dialog(String_const&)::{lambda()#1}::operator()()::sname == '\0') {
    iVar4 = __cxa_guard_acquire(&popup_dialog(String_const&)::{lambda()#1}::operator()()::sname);
    if (iVar4 != 0) {
      _scs_create((char *)&popup_dialog(String_const&)::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &popup_dialog(String_const&)::{lambda()#1}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&popup_dialog(String_const&)::{lambda()#1}::operator()()::sname);
    }
  }
  local_58 = Control::get_theme_color
                       (pSVar2,(StringName *)
                               &popup_dialog(String_const&)::{lambda()#1}::operator()()::sname);
  Control::add_theme_color_override(pSVar2,(Color *)(SceneStringNames::singleton + 0xb0));
  pSVar2 = *(StringName **)(param_1 + 0xee0);
  if (popup_dialog(String_const&)::{lambda()#2}::operator()()::sname == '\0') {
    iVar4 = __cxa_guard_acquire(&popup_dialog(String_const&)::{lambda()#2}::operator()()::sname);
    if (iVar4 != 0) {
      _scs_create((char *)&popup_dialog(String_const&)::{lambda()#2}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &popup_dialog(String_const&)::{lambda()#2}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&popup_dialog(String_const&)::{lambda()#2}::operator()()::sname);
    }
  }
  local_58 = Control::get_theme_color
                       (pSVar2,(StringName *)
                               &popup_dialog(String_const&)::{lambda()#2}::operator()()::sname);
  Control::add_theme_color_override(pSVar2,(Color *)(SceneStringNames::singleton + 0xb0));
  LineEdit::clear();
  cVar3 = BaseButton::is_pressed();
  if (cVar3 == '\0') {
    uVar1 = *(undefined8 *)(param_1 + 0xee0);
    if (*(long *)(param_1 + 0x240) == 0) {
      _err_print_error("get_tree","./scene/main/node.h",0x1e5,"Parameter \"data.tree\" is null.",0,0
                      );
    }
    pNVar5 = (Node *)SceneTree::get_edited_scene_root();
    if (*(long *)(param_1 + 0x240) == 0) {
      _err_print_error("get_tree","./scene/main/node.h",0x1e5,"Parameter \"data.tree\" is null.",0,0
                      );
    }
    pNVar6 = (Node *)SceneTree::get_edited_scene_root();
    _find_first_script(pNVar6,pNVar5);
    CanvasItem::set_visible(SUB81(uVar1,0));
  }
  if (param_1[0xe39] != (String)0x0) {
    param_1[0xe39] = (String)0x0;
    _advanced_pressed((ConnectDialog *)param_1);
  }
  local_58 = 0;
  Window::popup_centered((Vector2i *)param_1);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ConnectionsDock::_handle_class_menu_option(int) */

void __thiscall ConnectionsDock::_handle_class_menu_option(ConnectionsDock *this,int param_1)

{
  String *pSVar1;
  long in_FS_OFFSET;
  CowData<char32_t> aCStack_28 [8];
  long local_20;
  
  pSVar1 = ScriptEditor::script_editor;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) {
    operator+((char *)aCStack_28,(String *)"class:");
    ScriptEditor::_help_class_goto(pSVar1);
    CowData<char32_t>::_unref(aCStack_28);
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      EditorMainScreen::select((int)*(undefined8 *)(EditorNode::singleton + 0x990));
      return;
    }
  }
  else if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ConnectionsDockTree::make_custom_tooltip(String const&) const */

undefined8 __thiscall
ConnectionsDockTree::make_custom_tooltip(ConnectionsDockTree *this,String *param_1)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)param_1 != 0) && (1 < *(uint *)(*(long *)param_1 + -8))) {
    iVar1 = String::find((char *)param_1,0x1119f5);
    if (iVar1 == -1) {
      local_28 = 0;
      uVar2 = EditorHelpBitTooltip::show_tooltip((Control *)this,param_1,(String *)&local_28,false);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_28);
      goto LAB_001017ca;
    }
  }
  uVar2 = 0;
LAB_001017ca:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ConnectionsDock::_signal_menu_about_to_popup() */

void __thiscall ConnectionsDock::_signal_menu_about_to_popup(ConnectionsDock *this)

{
  code *pcVar1;
  undefined8 uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  TreeItem *pTVar6;
  long *plVar7;
  long in_FS_OFFSET;
  Variant local_68 [8];
  long local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pTVar6 = (TreeItem *)Tree::get_selected();
  if ((pTVar6 != (TreeItem *)0x0) && (iVar4 = _get_item_type(this,pTVar6), iVar4 == 2)) {
    TreeItem::get_metadata((int)(Variant *)local_58);
    Variant::operator_cast_to_Dictionary(local_68);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    for (iVar4 = 0; iVar5 = TreeItem::get_child_count(), iVar4 < iVar5; iVar4 = iVar4 + 1) {
      plVar7 = (long *)TreeItem::get_child((int)pTVar6);
      pcVar1 = *(code **)(*plVar7 + 0xa0);
      StringName::StringName((StringName *)&local_60,"_inherited_connection",false);
      (*pcVar1)(plVar7,(StringName *)&local_60);
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
    }
    uVar2 = *(undefined8 *)(this + 0xa48);
    bVar3 = (bool)PopupMenu::get_item_index((int)uVar2);
    PopupMenu::set_item_disabled((int)uVar2,bVar3);
    uVar2 = *(undefined8 *)(this + 0xa48);
    Variant::Variant((Variant *)local_58,"class");
    Dictionary::operator[](local_68);
    Variant::operator_cast_to_String((Variant *)&local_60);
    bVar3 = (bool)PopupMenu::get_item_index((int)*(undefined8 *)(this + 0xa48));
    PopupMenu::set_item_disabled((int)uVar2,bVar3);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    Dictionary::~Dictionary((Dictionary *)local_68);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ConnectionsDock::_connect(ConnectDialog::ConnectionData const&) */

void __thiscall ConnectionsDock::_connect(ConnectionsDock *this,ConnectionData *param_1)

{
  Variant *pVVar1;
  uint uVar2;
  StringName *pSVar3;
  long lVar4;
  Object *pOVar5;
  Variant *pVVar6;
  long in_FS_OFFSET;
  undefined8 local_110;
  undefined8 local_108;
  String local_100 [8];
  long local_f8;
  long local_f0;
  Callable local_e8 [16];
  char *local_d8;
  undefined8 local_d0;
  Variant *local_c8;
  Variant *pVStack_c0;
  Variant *local_b8;
  int local_a8 [2];
  undefined1 local_a0 [16];
  Variant local_90 [24];
  undefined8 local_78;
  undefined1 local_70 [16];
  undefined8 local_60;
  undefined1 local_58 [16];
  Variant local_48 [8];
  long local_40;
  
  lVar4 = *(long *)(param_1 + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)param_1 == 0) goto LAB_00102040;
  pSVar3 = (StringName *)__dynamic_cast(*(long *)param_1,&Object::typeinfo,&Node::typeinfo,0);
  if (lVar4 == 0) goto LAB_00102040;
  lVar4 = __dynamic_cast(lVar4,&Object::typeinfo,&Node::typeinfo,0);
  if ((pSVar3 == (StringName *)0x0) || (lVar4 == 0)) goto LAB_00102040;
  ConnectDialog::ConnectionData::get_callable();
  pOVar5 = (Object *)EditorUndoRedoManager::get_singleton();
  lVar4 = *(long *)(param_1 + 0x18);
  if (lVar4 == 0) {
    lVar4 = *(long *)(param_1 + 0x10);
    local_f0 = 0;
    if (lVar4 == 0) goto LAB_0010208b;
LAB_00101b4b:
    local_f8 = 0;
    if (*(char **)(lVar4 + 8) == (char *)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_f8,(CowData *)(lVar4 + 0x10));
    }
    else {
      String::parse_latin1((String *)&local_f8,*(char **)(lVar4 + 8));
    }
  }
  else {
    local_f0 = 0;
    if (*(char **)(lVar4 + 8) == (char *)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_f0,(CowData *)(lVar4 + 0x10));
    }
    else {
      String::parse_latin1((String *)&local_f0,*(char **)(lVar4 + 8));
    }
    lVar4 = *(long *)(param_1 + 0x10);
    if (lVar4 != 0) goto LAB_00101b4b;
LAB_0010208b:
    local_f8 = 0;
  }
  local_108 = 0;
  local_d8 = "";
  local_d0 = 0;
  String::parse_latin1((StrRange *)&local_108);
  local_110 = 0;
  local_d8 = "Connect \'%s\' to \'%s\'";
  local_d0 = 0x14;
  String::parse_latin1((StrRange *)&local_110);
  TTR(local_100,(String *)&local_110);
  vformat<String,String>
            ((CowData<char32_t> *)&local_d8,local_100,(CowData<char32_t> *)&local_f8,
             (CowData<char32_t> *)&local_f0);
  EditorUndoRedoManager::create_action(pOVar5,(CowData<char32_t> *)&local_d8,0,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  uVar2 = *(uint *)(param_1 + 0x20);
  Callable::Callable((Callable *)&local_d8,local_e8);
  StringName::StringName((StringName *)&local_f0,(StringName *)(param_1 + 0x10));
  StringName::StringName((StringName *)&local_f8,"connect",false);
  Variant::Variant((Variant *)local_a8,(StringName *)&local_f0);
  Variant::Variant(local_90,(Callable *)&local_d8);
  Variant::Variant((Variant *)&local_78,uVar2);
  local_58 = (undefined1  [16])0x0;
  local_60 = 0;
  local_c8 = (Variant *)local_a8;
  pVStack_c0 = local_90;
  local_b8 = (Variant *)&local_78;
  EditorUndoRedoManager::add_do_methodp(pOVar5,pSVar3,(Variant **)&local_f8,(int)&local_c8);
  pVVar6 = local_48;
  do {
    pVVar1 = pVVar6 + -0x18;
    pVVar6 = pVVar6 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar6 != (Variant *)local_a8);
  if (StringName::configured != '\0') {
    if (local_f8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00101d82;
    }
    if (local_f0 != 0) {
      StringName::unref();
    }
  }
LAB_00101d82:
  Callable::~Callable((Callable *)&local_d8);
  Callable::Callable((Callable *)&local_d8,local_e8);
  StringName::StringName((StringName *)&local_f0,(StringName *)(param_1 + 0x10));
  StringName::StringName((StringName *)&local_f8,"disconnect",false);
  Variant::Variant((Variant *)local_a8,(StringName *)&local_f0);
  Variant::Variant(local_90,(Callable *)&local_d8);
  local_70 = (undefined1  [16])0x0;
  local_78 = 0;
  local_c8 = (Variant *)local_a8;
  pVStack_c0 = local_90;
  EditorUndoRedoManager::add_undo_methodp(pOVar5,pSVar3,(Variant **)&local_f8,(int)&local_c8);
  pVVar6 = (Variant *)&local_60;
  do {
    pVVar1 = pVVar6 + -0x18;
    pVVar6 = pVVar6 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar6 != (Variant *)local_a8);
  if (StringName::configured != '\0') {
    if (local_f8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00101e64;
    }
    if (local_f0 != 0) {
      StringName::unref();
    }
  }
LAB_00101e64:
  Callable::~Callable((Callable *)&local_d8);
  StringName::StringName((StringName *)&local_d8,"update_tree",false);
  local_a8[0] = 0;
  local_a8[1] = 0;
  local_a0 = (undefined1  [16])0x0;
  EditorUndoRedoManager::add_do_methodp(pOVar5,(StringName *)this,(Variant **)&local_d8,0);
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_d8,"update_tree",false);
  local_a8[0] = 0;
  local_a8[1] = 0;
  local_a0 = (undefined1  [16])0x0;
  EditorUndoRedoManager::add_undo_methodp(pOVar5,(StringName *)this,(Variant **)&local_d8,0);
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_d8,"update_tree",false);
  local_a0 = (undefined1  [16])0x0;
  local_a8[0] = 0;
  local_a8[1] = 0;
  EditorUndoRedoManager::add_do_methodp
            (pOVar5,*(StringName **)(SceneTreeDock::singleton + 0xac0),(Variant **)&local_d8,0);
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_d8,"update_tree",false);
  local_a0 = (undefined1  [16])0x0;
  local_a8[0] = 0;
  local_a8[1] = 0;
  EditorUndoRedoManager::add_undo_methodp
            (pOVar5,*(StringName **)(SceneTreeDock::singleton + 0xac0),(Variant **)&local_d8,0);
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  EditorUndoRedoManager::commit_action(SUB81(pOVar5,0));
  Callable::~Callable(local_e8);
LAB_00102040:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ConnectionsDock::_disconnect(ConnectDialog::ConnectionData const&) */

void __thiscall ConnectionsDock::_disconnect(ConnectionsDock *this,ConnectionData *param_1)

{
  StringName *pSVar1;
  Variant *pVVar2;
  uint uVar3;
  StringName *pSVar4;
  Object *pOVar5;
  Variant *pVVar6;
  long in_FS_OFFSET;
  undefined8 local_158;
  undefined8 local_150;
  long local_148;
  long local_140;
  long local_138 [2];
  char *local_128;
  undefined8 local_120;
  Variant *local_118;
  Variant *pVStack_110;
  Variant *local_f8;
  Variant *pVStack_f0;
  Variant *local_e8;
  Variant local_e0 [24];
  undefined8 local_c8;
  undefined1 local_c0 [16];
  Variant local_b0 [8];
  int local_a8 [2];
  undefined1 local_a0 [16];
  Variant local_90 [24];
  Variant local_78 [24];
  undefined8 local_60;
  undefined1 local_58 [16];
  Variant local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)param_1 != *(long *)(this + 0xa10)) {
    _err_print_error("_disconnect","editor/connections_dialog.cpp",0x409,
                     "Condition \"p_cd.source != selected_node\" is true.",0,0);
    goto LAB_0010273e;
  }
  pOVar5 = (Object *)EditorUndoRedoManager::get_singleton();
  StringName::StringName((StringName *)local_138,(StringName *)(param_1 + 0x18));
  pSVar1 = (StringName *)(param_1 + 0x10);
  StringName::StringName((StringName *)&local_140,pSVar1);
  local_128 = "";
  local_150 = 0;
  local_120 = 0;
  String::parse_latin1((StrRange *)&local_150);
  local_128 = "Disconnect \'%s\' from \'%s\'";
  local_158 = 0;
  local_120 = 0x19;
  String::parse_latin1((StrRange *)&local_158);
  TTR((String *)&local_148,(String *)&local_158);
  vformat<StringName,StringName>
            ((CowData<char32_t> *)&local_128,(String *)&local_148,(StringName *)&local_140,
             (StringName *)local_138);
  EditorUndoRedoManager::create_action(pOVar5,(CowData<char32_t> *)&local_128,0,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_150);
  if (StringName::configured != '\0') {
    if (local_140 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010233e;
    }
    if (local_138[0] != 0) {
      StringName::unref();
    }
  }
LAB_0010233e:
  ConnectDialog::ConnectionData::get_callable();
  Callable::Callable((Callable *)&local_128,(Callable *)local_138);
  StringName::StringName((StringName *)&local_140,pSVar1);
  StringName::StringName((StringName *)&local_148,"disconnect",false);
  pVVar6 = local_b0;
  pSVar4 = *(StringName **)(this + 0xa10);
  Variant::Variant((Variant *)&local_f8,(StringName *)&local_140);
  Variant::Variant(local_e0,(Callable *)&local_128);
  local_c0 = (undefined1  [16])0x0;
  local_c8 = 0;
  local_118 = (Variant *)&local_f8;
  pVStack_110 = local_e0;
  EditorUndoRedoManager::add_do_methodp(pOVar5,pSVar4,(Variant **)&local_148,(int)&local_118);
  do {
    pVVar2 = pVVar6 + -0x18;
    pVVar6 = pVVar6 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar6 != (Variant *)&local_f8);
  if (StringName::configured != '\0') {
    if (local_148 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00102448;
    }
    if (local_140 != 0) {
      StringName::unref();
    }
  }
LAB_00102448:
  Callable::~Callable((Callable *)&local_128);
  uVar3 = *(uint *)(param_1 + 0x20);
  Callable::Callable((Callable *)&local_128,(Callable *)local_138);
  StringName::StringName((StringName *)&local_140,pSVar1);
  StringName::StringName((StringName *)&local_148,"connect",false);
  pSVar1 = *(StringName **)(this + 0xa10);
  Variant::Variant((Variant *)local_a8,(StringName *)&local_140);
  Variant::Variant(local_90,(Callable *)&local_128);
  Variant::Variant(local_78,uVar3);
  pVVar6 = local_48;
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  local_f8 = (Variant *)local_a8;
  pVStack_f0 = local_90;
  local_e8 = local_78;
  EditorUndoRedoManager::add_undo_methodp
            (pOVar5,pSVar1,(Variant **)&local_148,(int)(Variant *)&local_f8);
  do {
    pVVar2 = pVVar6 + -0x18;
    pVVar6 = pVVar6 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar6 != (Variant *)local_a8);
  if (StringName::configured != '\0') {
    if (local_148 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00102562;
    }
    if (local_140 != 0) {
      StringName::unref();
    }
  }
LAB_00102562:
  Callable::~Callable((Callable *)&local_128);
  StringName::StringName((StringName *)&local_128,"update_tree",false);
  local_a8[0] = 0;
  local_a8[1] = 0;
  local_a0 = (undefined1  [16])0x0;
  EditorUndoRedoManager::add_do_methodp(pOVar5,(StringName *)this,(Variant **)&local_128,0);
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_128 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_128,"update_tree",false);
  local_a8[0] = 0;
  local_a8[1] = 0;
  local_a0 = (undefined1  [16])0x0;
  EditorUndoRedoManager::add_undo_methodp(pOVar5,(StringName *)this,(Variant **)&local_128,0);
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_128 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_128,"update_tree",false);
  local_a0 = (undefined1  [16])0x0;
  local_a8[0] = 0;
  local_a8[1] = 0;
  EditorUndoRedoManager::add_do_methodp
            (pOVar5,*(StringName **)(SceneTreeDock::singleton + 0xac0),(Variant **)&local_128,0);
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_128 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_128,"update_tree",false);
  local_a0 = (undefined1  [16])0x0;
  local_a8[0] = 0;
  local_a8[1] = 0;
  EditorUndoRedoManager::add_undo_methodp
            (pOVar5,*(StringName **)(SceneTreeDock::singleton + 0xac0),(Variant **)&local_128,0);
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_128 != (char *)0x0)) {
    StringName::unref();
  }
  EditorUndoRedoManager::commit_action(SUB81(pOVar5,0));
  Callable::~Callable((Callable *)local_138);
LAB_0010273e:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ConnectDialog::ok_pressed() */

void __thiscall ConnectDialog::ok_pressed(ConnectDialog *this)

{
  code *pcVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  StringName *pSVar5;
  Object *pOVar6;
  undefined8 uVar7;
  long in_FS_OFFSET;
  long local_80;
  undefined8 local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  LineEdit::get_text();
  if ((local_80 == 0) || (*(uint *)(local_80 + -8) < 2)) {
    local_70 = 0;
    uVar7 = *(undefined8 *)(this + 0xe58);
    local_68 = "";
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_70);
    local_78 = 0;
    local_68 = "Method in target node must be specified.";
    local_60 = 0x28;
    String::parse_latin1((StrRange *)&local_78);
LAB_001028d5:
    TTR((String *)&local_68,(String *)&local_78);
    AcceptDialog::set_text(uVar7,(String *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    local_58 = 0;
    Window::popup_centered(*(Vector2i **)(this + 0xe58));
  }
  else {
    pOVar6 = *(Object **)(TextServerManager::singleton + 0x178);
    if (pOVar6 == (Object *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    cVar2 = RefCounted::reference();
    if (cVar2 == '\0') {
      pOVar6 = (Object *)0x0;
    }
    pcVar1 = *(code **)(*(long *)pOVar6 + 0x800);
    String::strip_edges(SUB81((CowData<char32_t> *)&local_68,0),
                        SUB81((CowData<char32_t> *)&local_80,0));
    cVar2 = (*pcVar1)(pOVar6);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(pOVar6);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
        Memory::free_static(pOVar6,false);
      }
    }
    if (cVar2 == '\0') {
      local_70 = 0;
      uVar7 = *(undefined8 *)(this + 0xe58);
      String::parse_latin1((String *)&local_70,"");
      local_78 = 0;
      String::parse_latin1((String *)&local_78,"Method name must be a valid identifier.");
      goto LAB_001028d5;
    }
    pSVar5 = (StringName *)SceneTreeEditor::get_selected();
    if (pSVar5 != (StringName *)0x0) {
      (**(code **)(*(long *)pSVar5 + 0x98))(&local_58,pSVar5);
      cVar2 = Variant::is_null();
      if (Variant::needs_deinit[(int)local_58] != '\0') {
        Variant::_clear_internal();
      }
      if (cVar2 != '\0') {
        StringName::StringName((StringName *)&local_68,(String *)&local_80,false);
        cVar2 = Object::has_method(pSVar5);
        if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
          StringName::unref();
        }
        if (cVar2 == '\0') {
          uVar7 = *(undefined8 *)(this + 0xe58);
          local_70 = 0;
          String::parse_latin1((String *)&local_70,"");
          local_78 = 0;
          String::parse_latin1
                    ((String *)&local_78,
                     "Target method not found. Specify a valid method or attach a script to the target node."
                    );
          TTR((String *)&local_68,(String *)&local_78);
          AcceptDialog::set_text(uVar7,(CowData<char32_t> *)&local_68);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
          local_58 = 0;
          Window::popup_centered(*(Vector2i **)(this + 0xe58));
          goto LAB_00102920;
        }
      }
      if (ok_pressed()::{lambda()#1}::operator()()::sname == '\0') {
        iVar4 = __cxa_guard_acquire(&ok_pressed()::{lambda()#1}::operator()()::sname);
        if (iVar4 != 0) {
          _scs_create((char *)&ok_pressed()::{lambda()#1}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,&ok_pressed()::{lambda()#1}::operator()()::sname,
                       &__dso_handle);
          __cxa_guard_release(&ok_pressed()::{lambda()#1}::operator()()::sname);
        }
      }
      local_58 = 0;
      local_50 = (undefined1  [16])0x0;
      (**(code **)(*(long *)this + 0xd0))(this,&ok_pressed()::{lambda()#1}::operator()()::sname,0,0)
      ;
      if (Variant::needs_deinit[(int)local_58] != '\0') {
        Variant::_clear_internal();
      }
      Window::hide();
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      goto LAB_00102928;
    }
  }
LAB_00102920:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
LAB_00102928:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ConnectDialog::_update_warning_label() */

void __thiscall ConnectDialog::_update_warning_label(ConnectDialog *this)

{
  String *pSVar1;
  char cVar2;
  long *plVar3;
  long lVar4;
  Object *pOVar5;
  undefined1 uVar6;
  long in_FS_OFFSET;
  undefined8 local_88;
  undefined8 local_80;
  String local_78 [8];
  CowData<char32_t> local_70 [8];
  char *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  plVar3 = (long *)Node::get_node(*(NodePath **)(this + 0xdd0));
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x98))(local_58,plVar3);
    lVar4 = Variant::get_validated_object();
    if (lVar4 != 0) {
      pOVar5 = (Object *)__dynamic_cast(lVar4,&Object::typeinfo,&Script::typeinfo,0);
      if (pOVar5 == (Object *)0x0) {
        if (Variant::needs_deinit[local_58[0]] == '\0') goto LAB_00102da2;
        goto LAB_00102dea;
      }
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') goto LAB_00102d90;
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      plVar3 = (long *)(**(code **)(*(long *)pOVar5 + 0x288))(pOVar5);
      if (*(code **)(*plVar3 + 0x200) == ScriptLanguage::can_make_function) {
LAB_00102d49:
        uVar6 = (undefined1)*(undefined8 *)(this + 0xed8);
      }
      else {
        cVar2 = (**(code **)(*plVar3 + 0x200))(plVar3);
        if (cVar2 != '\0') goto LAB_00102d49;
        pSVar1 = *(String **)(this + 0xed8);
        (**(code **)(*plVar3 + 0x150))(local_70,plVar3);
        local_68 = "";
        local_80 = 0;
        local_60 = 0;
        String::parse_latin1((StrRange *)&local_80);
        local_68 = "%s: Callback code won\'t be generated, please add it manually.";
        local_88 = 0;
        local_60 = 0x3d;
        String::parse_latin1((StrRange *)&local_88);
        TTR(local_78,(String *)&local_88);
        vformat<String>((CowData<char32_t> *)&local_68,local_78,local_70);
        Label::set_text(pSVar1);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
        CowData<char32_t>::_unref(local_70);
        uVar6 = (undefined1)*(undefined8 *)(this + 0xed8);
      }
      CanvasItem::set_visible((bool)uVar6);
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
        cVar2 = predelete_handler(pOVar5);
        if (cVar2 != '\0') {
          (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            Memory::free_static(pOVar5,false);
            return;
          }
          goto LAB_00102f44;
        }
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00102f44;
    }
LAB_00102d90:
    if (Variant::needs_deinit[local_58[0]] != '\0') {
LAB_00102dea:
      Variant::_clear_internal();
    }
  }
LAB_00102da2:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    CanvasItem::set_visible(SUB81(*(undefined8 *)(this + 0xed8),0));
    return;
  }
LAB_00102f44:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ConnectDialog::shortcut_input(Ref<InputEvent> const&) */

void __thiscall ConnectDialog::shortcut_input(ConnectDialog *this,Ref *param_1)

{
  char cVar1;
  Object *pOVar2;
  String *pSVar3;
  long in_FS_OFFSET;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)param_1 != 0) {
    pOVar2 = (Object *)__dynamic_cast(*(long *)param_1,&Object::typeinfo,&InputEventKey::typeinfo,0)
    ;
    if (pOVar2 != (Object *)0x0) {
      cVar1 = RefCounted::reference();
      if (cVar1 != '\0') {
        cVar1 = InputEvent::is_pressed();
        if (cVar1 != '\0') {
          cVar1 = (**(code **)(*(long *)pOVar2 + 0x1c8))(pOVar2);
          if (cVar1 == '\0') {
            pSVar3 = (String *)EditorSettings::get_singleton();
            local_50 = 0;
            local_40 = 0x12;
            local_48 = "editor/open_search";
            String::parse_latin1((StrRange *)&local_50);
            cVar1 = EditorSettings::is_shortcut(pSVar3,(Ref *)&local_50);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
            if (cVar1 != '\0') {
              Control::grab_focus();
              LineEdit::select_all();
              Control::accept_event();
            }
          }
        }
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(pOVar2);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
            if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
              Memory::free_static(pOVar2,false);
              return;
            }
            goto LAB_001030d5;
          }
        }
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001030d5:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<char32_t>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<char32_t>::_copy_on_write(CowData<char32_t> *this)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  ulong uVar4;
  size_t __n;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar4 = 0x10;
  __n = lVar1 * 4;
  if (__n != 0) {
    uVar4 = __n - 1 | __n - 1 >> 1;
    uVar4 = uVar4 | uVar4 >> 2;
    uVar4 = uVar4 | uVar4 >> 4;
    uVar4 = uVar4 | uVar4 >> 8;
    uVar4 = uVar4 | uVar4 >> 0x10;
    uVar4 = (uVar4 | uVar4 >> 0x20) + 0x11;
  }
  puVar3 = (undefined8 *)Memory::alloc_static(uVar4,false);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = 1;
    puVar3[1] = lVar1;
    memcpy(puVar3 + 2,*(void **)this,__n);
    _unref(this);
    *(undefined8 **)this = puVar3 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* ConnectDialog::get_dst_method_name() const */

ConnectDialog * __thiscall ConnectDialog::get_dst_method_name(ConnectDialog *this)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  long in_FS_OFFSET;
  long local_48;
  CowData<char32_t> local_40 [8];
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  LineEdit::get_text();
  iVar3 = String::find_char((wchar32)&local_48,0x28);
  if (iVar3 != -1) {
    String::find_char((wchar32)&local_48,0x28);
    String::left((int)local_40);
    String::strip_edges(SUB81((CowData<char32_t> *)&local_38,0),SUB81(local_40,0));
    if (local_48 != local_38) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      local_48 = local_38;
      local_38 = 0;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
    CowData<char32_t>::_unref(local_40);
  }
  StringName::StringName((StringName *)this,(String *)&local_48,false);
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
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ConnectDialog::generate_method_callback_name(Node*, String const&, Node*) */

ConnectDialog * __thiscall
ConnectDialog::generate_method_callback_name
          (ConnectDialog *this,Node *param_1,String *param_2,Node *param_3)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  Variant *pVVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  char *pcVar9;
  uint uVar10;
  int iVar11;
  long lVar12;
  int iVar13;
  long in_FS_OFFSET;
  long local_b8;
  Dictionary local_b0 [8];
  char *local_a8;
  long local_a0;
  Variant local_98 [8];
  long local_90;
  char *local_88;
  size_t local_80;
  int local_78 [8];
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Node::get_name();
  if (local_90 == 0) {
    local_b8 = 0;
  }
  else {
    pcVar9 = *(char **)(local_90 + 8);
    local_b8 = 0;
    if (pcVar9 == (char *)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)(local_90 + 0x10));
    }
    else {
      local_80 = strlen(pcVar9);
      local_88 = pcVar9;
      String::parse_latin1((StrRange *)&local_b8);
    }
    if ((StringName::configured != '\0') && (local_90 != 0)) {
      StringName::unref();
    }
  }
  iVar13 = 0;
joined_r0x001033da:
  do {
    if (local_b8 == 0) {
      if (iVar13 < 0) {
        lVar12 = 0;
LAB_001033f7:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,(long)iVar13,lVar12,"p_index","size()",""
                   ,false,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
LAB_00103746:
      Dictionary::Dictionary(local_b0);
      String::to_pascal_case();
      Variant::Variant((Variant *)local_58,(String *)&local_88);
      Variant::Variant((Variant *)local_78,"NodeName");
      pVVar4 = (Variant *)Dictionary::operator[]((Variant *)local_b0);
      if (pVVar4 != (Variant *)local_58) {
        if (Variant::needs_deinit[*(int *)pVVar4] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)pVVar4 = 0;
        *(int *)pVVar4 = local_58[0];
        *(undefined8 *)(pVVar4 + 8) = local_50;
        *(undefined8 *)(pVVar4 + 0x10) = uStack_48;
        local_58[0] = 0;
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      String::to_camel_case();
      Variant::Variant((Variant *)local_58,(String *)&local_88);
      Variant::Variant((Variant *)local_78,"nodeName");
      pVVar4 = (Variant *)Dictionary::operator[]((Variant *)local_b0);
      if (pVVar4 != (Variant *)local_58) {
        if (Variant::needs_deinit[*(int *)pVVar4] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)pVVar4 = 0;
        *(int *)pVVar4 = local_58[0];
        *(undefined8 *)(pVVar4 + 8) = local_50;
        *(undefined8 *)(pVVar4 + 0x10) = uStack_48;
        local_58[0] = 0;
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      String::to_snake_case();
      Variant::Variant((Variant *)local_58,(String *)&local_88);
      Variant::Variant((Variant *)local_78,"node_name");
      pVVar4 = (Variant *)Dictionary::operator[]((Variant *)local_b0);
      if (pVVar4 != (Variant *)local_58) {
        if (Variant::needs_deinit[*(int *)pVVar4] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)pVVar4 = 0;
        *(int *)pVVar4 = local_58[0];
        *(undefined8 *)(pVVar4 + 8) = local_50;
        *(undefined8 *)(pVVar4 + 0x10) = uStack_48;
        local_58[0] = 0;
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      String::to_pascal_case();
      Variant::Variant((Variant *)local_58,(String *)&local_88);
      Variant::Variant((Variant *)local_78,"SignalName");
      pVVar4 = (Variant *)Dictionary::operator[]((Variant *)local_b0);
      if (pVVar4 != (Variant *)local_58) {
        if (Variant::needs_deinit[*(int *)pVVar4] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)pVVar4 = 0;
        *(int *)pVVar4 = local_58[0];
        *(undefined8 *)(pVVar4 + 8) = local_50;
        *(undefined8 *)(pVVar4 + 0x10) = uStack_48;
        local_58[0] = 0;
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      String::to_camel_case();
      Variant::Variant((Variant *)local_58,(String *)&local_88);
      Variant::Variant((Variant *)local_78,"signalName");
      pVVar4 = (Variant *)Dictionary::operator[]((Variant *)local_b0);
      if (pVVar4 != (Variant *)local_58) {
        if (Variant::needs_deinit[*(int *)pVVar4] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)pVVar4 = 0;
        *(int *)pVVar4 = local_58[0];
        *(undefined8 *)(pVVar4 + 8) = local_50;
        *(undefined8 *)(pVVar4 + 0x10) = uStack_48;
        local_58[0] = 0;
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      String::to_snake_case();
      Variant::Variant((Variant *)local_58,(String *)&local_88);
      Variant::Variant((Variant *)local_78,"signal_name");
      pVVar4 = (Variant *)Dictionary::operator[]((Variant *)local_b0);
      if (pVVar4 != (Variant *)local_58) {
        if (Variant::needs_deinit[*(int *)pVVar4] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)pVVar4 = 0;
        *(int *)pVVar4 = local_58[0];
        *(undefined8 *)(pVVar4 + 8) = local_50;
        *(undefined8 *)(pVVar4 + 0x10) = uStack_48;
        local_58[0] = 0;
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      local_a8 = (char *)0x0;
      if (param_1 == param_3) {
        ProjectSettings::get_singleton();
        pcVar9 = "editor/naming/default_signal_callback_to_self_name";
      }
      else {
        ProjectSettings::get_singleton();
        pcVar9 = "editor/naming/default_signal_callback_name";
      }
      StringName::StringName((StringName *)&local_a0,pcVar9,false);
      ProjectSettings::get_setting_with_override((StringName *)local_78);
      Variant::operator_cast_to_String(local_98);
      local_90 = 0;
      String::parse_latin1((String *)&local_90,"{_}");
      Variant::Variant((Variant *)local_58,local_b0);
      String::format((Variant *)&local_88,(String *)local_98);
      if (local_a8 != local_88) {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        local_a8 = local_88;
        local_88 = (char *)0x0;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_a0 != 0)) {
        StringName::unref();
      }
      StringName::StringName((StringName *)this,(String *)&local_a8,false);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
      Dictionary::~Dictionary(local_b0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return this;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    while( true ) {
      lVar12 = *(long *)(local_b8 + -8);
      if ((int)lVar12 == 0) {
        if (iVar13 < 0) goto LAB_001033f7;
        goto LAB_00103746;
      }
      if ((int)lVar12 + -1 <= iVar13) goto LAB_00103746;
      lVar5 = (long)iVar13;
      lVar7 = lVar5;
      if (lVar12 == lVar5) break;
      if ((lVar5 < 0) || (lVar12 <= lVar5)) goto LAB_001033f7;
      uVar6 = *(uint *)(local_b8 + lVar5 * 4);
      if (iVar13 != 0) {
        if (0 < iVar13) goto LAB_0010353a;
LAB_001034ff:
        iVar13 = iVar13 + 1;
        CowData<char32_t>::_copy_on_write((CowData<char32_t> *)&local_b8);
        *(uint *)(local_b8 + lVar5 * 4) = uVar6;
        goto joined_r0x001033da;
      }
      iVar3 = 0;
      uVar10 = 0xaaf2;
      iVar11 = 0x2ac;
      iVar2 = 0x156;
      while( true ) {
        if (uVar6 < uVar10) {
          iVar11 = iVar2 + -1;
        }
        else {
          if (uVar6 <= *(uint *)(xid_start + (long)iVar2 * 8 + 4)) {
            lVar7 = 0;
            goto LAB_001034ee;
          }
          iVar3 = iVar2 + 1;
        }
        iVar2 = (iVar3 + iVar11) / 2;
        if (iVar11 < iVar3) break;
        uVar10 = *(uint *)(xid_start + (long)iVar2 * 8);
      }
LAB_001034e0:
      if (uVar6 == 0x20) {
        uVar6 = 0x5f;
LAB_001034ee:
        if (lVar12 <= lVar7) goto LAB_00103598;
        goto LAB_001034ff;
      }
      if (lVar12 <= lVar5) {
        _err_print_index_error
                  ("remove_at","./core/templates/cowdata.h",0xe4,lVar5,lVar12,"p_index","size()","",
                   false,false);
        goto joined_r0x001033da;
      }
      CowData<char32_t>::_copy_on_write((CowData<char32_t> *)&local_b8);
      if (local_b8 == 0) {
LAB_00103d49:
        _err_print_error("resize","./core/templates/cowdata.h",0x157,
                         "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER");
        goto joined_r0x001033da;
      }
      lVar7 = *(long *)(local_b8 + -8);
      lVar12 = lVar7 + -1;
      if (lVar5 < lVar12) {
        memmove((void *)(local_b8 + lVar5 * 4),(void *)(local_b8 + 4 + lVar5 * 4),
                (lVar12 - lVar5) * 4);
      }
      if (lVar12 < 0) goto LAB_00103d49;
      if (lVar12 == 0) {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
        goto joined_r0x001033da;
      }
      CowData<char32_t>::_copy_on_write((CowData<char32_t> *)&local_b8);
      lVar7 = lVar7 * 4;
      if (lVar7 != 0) {
        uVar8 = lVar7 - 1U | lVar7 - 1U >> 1;
        uVar8 = uVar8 | uVar8 >> 2;
        uVar8 = uVar8 | uVar8 >> 4;
        uVar8 = uVar8 | uVar8 >> 8;
        uVar8 = uVar8 | uVar8 >> 0x10;
        lVar7 = (uVar8 | uVar8 >> 0x20) + 1;
      }
      if ((lVar12 * 4 == 0) ||
         (uVar8 = lVar12 * 4 - 1, uVar8 = uVar8 | uVar8 >> 1, uVar8 = uVar8 | uVar8 >> 2,
         uVar8 = uVar8 | uVar8 >> 4, uVar8 = uVar8 | uVar8 >> 8, uVar8 = uVar8 | uVar8 >> 0x10,
         lVar5 = (uVar8 | uVar8 >> 0x20) + 1, lVar5 == 0)) {
        _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                         "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                        );
        goto joined_r0x001033da;
      }
      if ((lVar5 != lVar7) &&
         (iVar3 = CowData<char32_t>::_realloc((CowData<char32_t> *)&local_b8,lVar5), iVar3 != 0))
      goto joined_r0x001033da;
      if (local_b8 == 0) {
        _DAT_00000000 = 0;
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      *(long *)(local_b8 + -8) = lVar12;
    }
    if (0 < iVar13) {
      uVar6 = 0;
LAB_0010353a:
      uVar10 = 0xf900;
      iVar11 = 799;
      iVar3 = 0;
      iVar2 = 399;
      while( true ) {
        if (uVar6 < uVar10) {
          iVar11 = iVar2 + -1;
        }
        else {
          if (uVar6 <= *(uint *)(xid_continue + (long)iVar2 * 8 + 4)) goto LAB_001034ee;
          iVar3 = iVar2 + 1;
        }
        iVar2 = (iVar3 + iVar11) / 2;
        if (iVar11 < iVar3) break;
        uVar10 = *(uint *)(xid_continue + (long)iVar2 * 8);
      }
      goto LAB_001034e0;
    }
LAB_00103598:
    iVar13 = iVar13 + 1;
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar7,lVar12,"p_index","size()","",false,
               false);
  } while( true );
}



/* ConnectionsDock::_tree_item_selected() */

void __thiscall ConnectionsDock::_tree_item_selected(ConnectionsDock *this)

{
  String *pSVar1;
  Ref *pRVar2;
  Object *pOVar3;
  char cVar4;
  int iVar5;
  TreeItem *pTVar6;
  undefined1 uVar7;
  long in_FS_OFFSET;
  undefined8 local_98;
  undefined8 local_90;
  Object *local_88;
  undefined8 local_80;
  Callable local_78 [32];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pTVar6 = (TreeItem *)Tree::get_selected();
  if (pTVar6 != (TreeItem *)0x0) {
    iVar5 = _get_item_type(this,pTVar6);
    if (iVar5 == 2) {
      pSVar1 = *(String **)(this + 0xa30);
      local_90 = 0;
      String::parse_latin1((String *)&local_90,"");
      local_98 = 0;
      String::parse_latin1((String *)&local_98,"Connect...");
      TTR((String *)&local_88,(String *)&local_98);
      Button::set_text(pSVar1);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      pRVar2 = *(Ref **)(this + 0xa30);
      if (_tree_item_selected()::{lambda()#1}::operator()()::sname == '\0') {
        iVar5 = __cxa_guard_acquire(&_tree_item_selected()::{lambda()#1}::operator()()::sname);
        if (iVar5 != 0) {
          _scs_create((char *)&_tree_item_selected()::{lambda()#1}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_tree_item_selected()::{lambda()#1}::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&_tree_item_selected()::{lambda()#1}::operator()()::sname);
        }
      }
      Control::get_editor_theme_icon((StringName *)&local_88);
      Button::set_button_icon(pRVar2);
      Ref<Texture2D>::unref((Ref<Texture2D> *)&local_88);
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_001043a5;
      uVar7 = (undefined1)*(undefined8 *)(this + 0xa30);
      goto LAB_00104020;
    }
    iVar5 = _get_item_type(this,pTVar6);
    if (iVar5 == 3) {
      pSVar1 = *(String **)(this + 0xa30);
      local_90 = 0;
      String::parse_latin1((String *)&local_90,"");
      local_98 = 0;
      String::parse_latin1((String *)&local_98,"Disconnect");
      TTR((String *)&local_88,(String *)&local_98);
      Button::set_text(pSVar1);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      pRVar2 = *(Ref **)(this + 0xa30);
      if (_tree_item_selected()::{lambda()#2}::operator()()::sname == '\0') {
        iVar5 = __cxa_guard_acquire(&_tree_item_selected()::{lambda()#2}::operator()()::sname);
        if (iVar5 != 0) {
          _scs_create((char *)&_tree_item_selected()::{lambda()#2}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_tree_item_selected()::{lambda()#2}::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&_tree_item_selected()::{lambda()#2}::operator()()::sname);
        }
      }
      Control::get_editor_theme_icon((StringName *)&local_88);
      Button::set_button_icon(pRVar2);
      Ref<Texture2D>::unref((Ref<Texture2D> *)&local_88);
      TreeItem::get_metadata((int)(Variant *)local_58);
      Object::Connection::Connection((Connection *)&local_88,(Variant *)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xa30),0));
      Callable::~Callable(local_78);
      if ((StringName::configured != '\0') && (local_88 != (Object *)0x0)) {
        StringName::unref();
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_001043a5;
    }
  }
  pSVar1 = *(String **)(this + 0xa30);
  local_90 = 0;
  local_88 = (Object *)&_LC8;
  local_80 = 0;
  String::parse_latin1((StrRange *)&local_90);
  local_88 = (Object *)0x111aea;
  local_98 = 0;
  local_80 = 10;
  String::parse_latin1((StrRange *)&local_98);
  TTR((String *)&local_88,(String *)&local_98);
  Button::set_text(pSVar1);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  pRVar2 = *(Ref **)(this + 0xa30);
  if (_tree_item_selected()::{lambda()#3}::operator()()::sname == '\0') {
    iVar5 = __cxa_guard_acquire(&_tree_item_selected()::{lambda()#3}::operator()()::sname);
    if (iVar5 != 0) {
      _scs_create((char *)&_tree_item_selected()::{lambda()#3}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_tree_item_selected()::{lambda()#3}::operator()()::sname
                   ,&__dso_handle);
      __cxa_guard_release(&_tree_item_selected()::{lambda()#3}::operator()()::sname);
    }
  }
  Control::get_editor_theme_icon((StringName *)&local_88);
  Button::set_button_icon(pRVar2);
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
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
LAB_001043a5:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  uVar7 = (undefined1)*(undefined8 *)(this + 0xa30);
LAB_00104020:
  BaseButton::set_disabled((bool)uVar7);
  return;
}



/* ConnectionsDock::_bind_methods() */

void ConnectionsDock::_bind_methods(void)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  MethodBind *pMVar4;
  long *plVar5;
  long lVar6;
  long in_FS_OFFSET;
  long local_68 [2];
  long *local_58;
  undefined8 local_48;
  undefined1 local_40 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = (undefined1  [16])0x0;
  local_48 = 0;
  pMVar4 = create_method_bind<ConnectionsDock>(update_tree);
  StringName::StringName((StringName *)local_68,"update_tree",false);
  local_58 = (long *)0x0;
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)local_68,(Variant **)0x0,0);
  plVar3 = local_58;
  if (local_58 != (long *)0x0) {
    LOCK();
    plVar5 = local_58 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_58 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_58[-1];
      local_58 = (long *)0x0;
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
  if ((StringName::configured != '\0') && (local_68[0] != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_48] != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<Variant>::_ref(CowData<Variant> const&) [clone .part.0] */

void __thiscall CowData<Variant>::_ref(CowData<Variant> *this,CowData *param_1)

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



/* MethodInfo::TEMPNAMEPLACEHOLDERVALUE(MethodInfo const&) [clone .isra.0] */

void __thiscall MethodInfo::operator=(MethodInfo *this,MethodInfo *param_1)

{
  void *pvVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
  undefined4 *puVar4;
  long lVar5;
  long *plVar6;
  undefined4 *puVar7;
  bool bVar8;
  
  if (*(long *)this != *(long *)param_1) {
    CowData<char32_t>::_ref((CowData<char32_t> *)this,(CowData *)param_1);
  }
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  if (*(long *)(this + 0x10) != *(long *)(param_1 + 0x10)) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x10),(CowData *)(param_1 + 0x10));
  }
  StringName::operator=((StringName *)(this + 0x18),(StringName *)(param_1 + 0x18));
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  if (*(long *)(this + 0x28) != *(long *)(param_1 + 0x28)) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x28),(CowData *)(param_1 + 0x28));
  }
  plVar6 = *(long **)(this + 0x40);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  if (plVar6 != (long *)0x0) {
    do {
      pvVar1 = (void *)*plVar6;
      if (pvVar1 == (void *)0x0) goto LAB_00104690;
      if (plVar6 == *(long **)((long)pvVar1 + 0x40)) {
        lVar2 = *(long *)((long)pvVar1 + 0x30);
        lVar5 = *(long *)((long)pvVar1 + 0x38);
        *plVar6 = lVar2;
        if (pvVar1 == (void *)plVar6[1]) {
          plVar6[1] = lVar5;
        }
        if (lVar5 != 0) {
          *(long *)(lVar5 + 0x30) = lVar2;
          lVar2 = *(long *)((long)pvVar1 + 0x30);
        }
        if (lVar2 != 0) {
          *(long *)(lVar2 + 0x38) = lVar5;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar1 + 0x20));
        if ((StringName::configured != '\0') && (*(long *)((long)pvVar1 + 0x10) != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar1 + 8));
        Memory::free_static(pvVar1,false);
        *(int *)(plVar6 + 2) = (int)plVar6[2] + -1;
      }
      else {
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0,0);
      }
      plVar6 = *(long **)(this + 0x40);
    } while ((int)plVar6[2] != 0);
    Memory::free_static(plVar6,false);
    *(undefined8 *)(this + 0x40) = 0;
  }
  plVar6 = (long *)0x0;
LAB_00104690:
  if ((*(undefined8 **)(param_1 + 0x40) != (undefined8 *)0x0) &&
     (puVar7 = (undefined4 *)**(undefined8 **)(param_1 + 0x40), puVar7 != (undefined4 *)0x0)) {
    if (plVar6 == (long *)0x0) {
      pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
      *(undefined1 (**) [16])(this + 0x40) = pauVar3;
      *(undefined4 *)pauVar3[1] = 0;
      *pauVar3 = (undefined1  [16])0x0;
    }
    do {
      while( true ) {
        puVar4 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
        *(undefined8 *)(puVar4 + 8) = 0;
        *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
        lVar2 = *(long *)(puVar7 + 2);
        *puVar4 = 0;
        puVar4[6] = 0;
        puVar4[10] = 6;
        *(undefined8 *)(puVar4 + 0x10) = 0;
        *(undefined1 (*) [16])(puVar4 + 0xc) = (undefined1  [16])0x0;
        *puVar4 = *puVar7;
        if (lVar2 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 2),(CowData *)(puVar7 + 2));
        }
        StringName::operator=((StringName *)(puVar4 + 4),(StringName *)(puVar7 + 4));
        puVar4[6] = puVar7[6];
        if (*(long *)(puVar4 + 8) != *(long *)(puVar7 + 8)) {
          CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)(puVar7 + 8));
        }
        puVar4[10] = puVar7[10];
        plVar6 = *(long **)(this + 0x40);
        lVar2 = plVar6[1];
        *(undefined8 *)(puVar4 + 0xc) = 0;
        *(long **)(puVar4 + 0x10) = plVar6;
        *(long *)(puVar4 + 0xe) = lVar2;
        if (lVar2 != 0) {
          *(undefined4 **)(lVar2 + 0x30) = puVar4;
        }
        plVar6[1] = (long)puVar4;
        if (*plVar6 == 0) break;
        puVar7 = *(undefined4 **)(puVar7 + 0xc);
        *(int *)(plVar6 + 2) = (int)plVar6[2] + 1;
        if (puVar7 == (undefined4 *)0x0) goto LAB_001047be;
      }
      puVar7 = *(undefined4 **)(puVar7 + 0xc);
      *(int *)(plVar6 + 2) = (int)plVar6[2] + 1;
      *plVar6 = (long)puVar4;
    } while (puVar7 != (undefined4 *)0x0);
  }
LAB_001047be:
  if (*(long *)(this + 0x50) != *(long *)(param_1 + 0x50)) {
    CowData<Variant>::_ref((CowData<Variant> *)(this + 0x50),(CowData *)(param_1 + 0x50));
  }
  lVar2 = *(long *)(param_1 + 0x68);
  *(undefined4 *)(this + 0x58) = *(undefined4 *)(param_1 + 0x58);
  lVar5 = *(long *)(this + 0x68);
  if (lVar5 != lVar2) {
    if (lVar5 != 0) {
      LOCK();
      plVar6 = (long *)(lVar5 + -0x10);
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
        lVar2 = *(long *)(this + 0x68);
        *(undefined8 *)(this + 0x68) = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
        lVar2 = *(long *)(param_1 + 0x68);
      }
      else {
        *(undefined8 *)(this + 0x68) = 0;
        lVar2 = *(long *)(param_1 + 0x68);
      }
    }
    if (lVar2 != 0) {
      plVar6 = (long *)(lVar2 + -0x10);
      do {
        lVar2 = *plVar6;
        if (lVar2 == 0) {
          return;
        }
        LOCK();
        lVar5 = *plVar6;
        bVar8 = lVar2 == lVar5;
        if (bVar8) {
          *plVar6 = lVar2 + 1;
          lVar5 = lVar2;
        }
        UNLOCK();
      } while (!bVar8);
      if (lVar5 != -1) {
        *(undefined8 *)(this + 0x68) = *(undefined8 *)(param_1 + 0x68);
      }
    }
  }
  return;
}



/* ConnectDialog::get_binds() const */

void ConnectDialog::get_binds(void)

{
  long lVar1;
  long in_RSI;
  long in_RDI;
  
  lVar1 = *(long *)(in_RSI + 0xe30);
  *(undefined8 *)(in_RDI + 8) = 0;
  if (*(long *)(lVar1 + 0x180) != 0) {
    CowData<Variant>::_ref((CowData<Variant> *)(in_RDI + 8),(CowData *)(lVar1 + 0x180));
  }
  return;
}



/* ConnectDialog::get_source_connection_data() const */

void ConnectDialog::get_source_connection_data(void)

{
  undefined8 uVar1;
  long in_RSI;
  undefined8 *in_RDI;
  
  uVar1 = *(undefined8 *)(in_RSI + 0xde0);
  *in_RDI = *(undefined8 *)(in_RSI + 0xdd8);
  in_RDI[1] = uVar1;
  StringName::StringName((StringName *)(in_RDI + 2),(StringName *)(in_RSI + 0xde8));
  StringName::StringName((StringName *)(in_RDI + 3),(StringName *)(in_RSI + 0xdf0));
  uVar1 = *(undefined8 *)(in_RSI + 0xdf8);
  in_RDI[6] = 0;
  in_RDI[4] = uVar1;
  if (*(long *)(in_RSI + 0xe08) != 0) {
    CowData<Variant>::_ref((CowData<Variant> *)(in_RDI + 6),(CowData *)(in_RSI + 0xe08));
  }
  return;
}



/* ConnectDialog::_bind_methods() */

void ConnectDialog::_bind_methods(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_b8;
  long local_b0;
  char *local_a8;
  undefined8 local_a0;
  char *local_98;
  undefined8 local_90;
  undefined1 local_88 [16];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_b0 = 0;
  local_90 = 9;
  local_98 = "connected";
  String::parse_latin1((StrRange *)&local_b0);
  local_98 = (char *)0x0;
  local_90 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 6;
  local_60 = 1;
  local_58 = 0;
  local_48 = 0;
  local_40 = 0;
  local_30 = 0;
  local_88 = (undefined1  [16])0x0;
  if (local_b0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_98,(CowData *)&local_b0);
  }
  local_b8 = 0;
  local_a8 = "ConnectDialog";
  local_a0 = 0xd;
  String::parse_latin1((StrRange *)&local_b8);
  StringName::StringName((StringName *)&local_a8,(String *)&local_b8,false);
  ClassDB::add_signal((StringName *)&local_a8,(MethodInfo *)&local_98);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_b8;
  if (local_b8 != 0) {
    LOCK();
    plVar1 = (long *)(local_b8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_b8 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  MethodInfo::~MethodInfo((MethodInfo *)&local_98);
  lVar2 = local_b0;
  if (local_b0 != 0) {
    LOCK();
    plVar1 = (long *)(local_b0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_b0 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<Variant>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Variant>::_copy_on_write(CowData<Variant> *this)

{
  Variant *this_00;
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  Variant *pVVar5;
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
  if (lVar1 * 0x18 != 0) {
    uVar6 = lVar1 * 0x18 - 1;
    uVar6 = uVar6 | uVar6 >> 1;
    uVar6 = uVar6 | uVar6 >> 2;
    uVar6 = uVar6 | uVar6 >> 4;
    uVar6 = uVar6 | uVar6 >> 8;
    uVar6 = uVar6 | uVar6 >> 0x10;
    uVar6 = (uVar6 | uVar6 >> 0x20) + 0x11;
  }
  puVar3 = (undefined8 *)Memory::alloc_static(uVar6,false);
  if (puVar3 == (undefined8 *)0x0) {
    _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                     "Parameter \"mem_new\" is null.",0,0);
    return;
  }
  lVar4 = 0;
  lVar7 = 0;
  *puVar3 = 1;
  puVar3[1] = lVar1;
  if (lVar1 != 0) {
    do {
      this_00 = (Variant *)((long)(puVar3 + 2) + lVar4);
      lVar7 = lVar7 + 1;
      pVVar5 = (Variant *)(*(long *)this + lVar4);
      lVar4 = lVar4 + 0x18;
      Variant::Variant(this_00,pVVar5);
    } while (lVar1 != lVar7);
  }
  _unref(this);
  *(undefined8 **)this = puVar3 + 2;
  return;
}



/* ConnectDialog::_filter_method_list(List<MethodInfo, DefaultAllocator> const&, MethodInfo const&,
   String const&) const */

List * ConnectDialog::_filter_method_list(List *param_1,MethodInfo *param_2,String *param_3)

{
  long *plVar1;
  int iVar2;
  undefined8 *puVar3;
  code *pcVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  MethodInfo *this;
  undefined1 (*pauVar10) [16];
  undefined4 *puVar11;
  long in_RCX;
  uint uVar12;
  String *pSVar13;
  long *in_R8;
  long lVar14;
  int *piVar15;
  int *piVar16;
  long in_FS_OFFSET;
  double dVar17;
  undefined4 *local_b8;
  undefined1 (*local_98) [16];
  long local_90;
  undefined4 local_88;
  undefined4 *local_80;
  undefined4 local_78;
  long local_70;
  long local_68;
  undefined4 local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  cVar5 = BaseButton::is_pressed();
  *(undefined8 *)param_1 = 0;
  uVar12 = 0;
  local_98 = (undefined1 (*) [16])0x0;
  dVar17 = (double)Range::get_value();
  iVar7 = (int)dVar17;
  puVar3 = *(undefined8 **)(in_RCX + 0x40);
  do {
    if (puVar3 == (undefined8 *)0x0) {
      lVar14 = 0;
      if (SBORROW4(uVar12,-iVar7) == (int)(uVar12 + iVar7) < 0) {
LAB_00104f20:
        if (iVar7 == 0) {
          local_80 = (undefined4 *)0x0;
          if (*(long *)(*(long *)(param_2 + 0xe30) + 0x180) != 0) {
            CowData<Variant>::_ref
                      ((CowData<Variant> *)&local_80,(CowData *)(*(long *)(param_2 + 0xe30) + 0x180)
                      );
          }
          CowData<Variant>::_copy_on_write((CowData<Variant> *)&local_80);
          puVar9 = local_80;
          CowData<Variant>::_copy_on_write((CowData<Variant> *)&local_80);
          pauVar10 = local_98;
          local_b8 = local_80;
          if (local_80 != (undefined4 *)0x0) {
            local_b8 = local_80 + *(long *)(local_80 + -2) * 6;
          }
          if (puVar9 != local_b8) {
            local_78 = *puVar9;
            local_90 = 0;
            StringName::StringName((StringName *)&local_70,(StringName *)&local_90);
            if (pauVar10 == (undefined1 (*) [16])0x0) {
              pauVar10 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
              *(undefined4 *)pauVar10[1] = 0;
              *pauVar10 = (undefined1  [16])0x0;
              local_98 = pauVar10;
            }
            while( true ) {
              puVar11 = (undefined4 *)operator_new(0x28,DefaultAllocator::alloc);
              *puVar11 = 0;
              *(undefined1 (*) [16])(puVar11 + 2) = (undefined1  [16])0x0;
              *(undefined1 (*) [16])(puVar11 + 6) = (undefined1  [16])0x0;
              *puVar11 = local_78;
              StringName::operator=((StringName *)(puVar11 + 2),(StringName *)&local_70);
              lVar14 = *(long *)(*pauVar10 + 8);
              *(undefined1 (**) [16])(puVar11 + 8) = pauVar10;
              *(undefined8 *)(puVar11 + 4) = 0;
              *(long *)(puVar11 + 6) = lVar14;
              if (lVar14 != 0) {
                *(undefined4 **)(lVar14 + 0x10) = puVar11;
              }
              lVar14 = *(long *)*pauVar10;
              *(undefined4 **)(*pauVar10 + 8) = puVar11;
              if (lVar14 == 0) {
                *(undefined4 **)*pauVar10 = puVar11;
              }
              *(int *)pauVar10[1] = *(int *)pauVar10[1] + 1;
              if ((StringName::configured != '\0') &&
                 (((local_70 == 0 || (StringName::unref(), StringName::configured != '\0')) &&
                  (local_90 != 0)))) {
                StringName::unref();
              }
              puVar9 = puVar9 + 6;
              if (local_b8 == puVar9) break;
              local_78 = *puVar9;
              local_90 = 0;
              StringName::StringName((StringName *)&local_70,(StringName *)&local_90);
            }
          }
          CowData<Variant>::_unref((CowData<Variant> *)&local_80);
        }
        if (*(long **)param_3 != (long *)0x0) {
          for (pSVar13 = (String *)**(long **)param_3; pSVar13 != (String *)0x0;
              pSVar13 = *(String **)(pSVar13 + 0x70)) {
            while (cVar6 = String::begins_with((char *)pSVar13), cVar6 == '\0') {
              if ((*in_R8 == 0) || (*(uint *)(*in_R8 + -8) < 2)) {
                if (cVar5 != '\0') goto LAB_00104f67;
LAB_00104fda:
                lVar14 = *(long *)param_1;
              }
              else {
                iVar7 = String::findn(pSVar13,(int)in_R8);
                if (iVar7 == -1) break;
                if (cVar5 == '\0') goto LAB_00104fda;
LAB_00104f67:
                puVar3 = *(undefined8 **)(pSVar13 + 0x40);
                if (puVar3 == (undefined8 *)0x0) {
                  if ((local_98 == (undefined1 (*) [16])0x0) || (*(int *)local_98[1] == 0))
                  goto LAB_00104fda;
                  break;
                }
                if (local_98 == (undefined1 (*) [16])0x0) {
                  piVar16 = (int *)0x0;
                  if (*(int *)(puVar3 + 2) != 0) break;
                }
                else {
                  if (*(int *)(puVar3 + 2) != *(int *)local_98[1]) break;
                  piVar16 = *(int **)*local_98;
                }
                piVar15 = (int *)*puVar3;
                if (piVar15 == (int *)0x0) goto LAB_00104fda;
                do {
                  iVar7 = *piVar16;
                  iVar2 = *piVar15;
                  if (((iVar7 != 0 && iVar2 != 0) && (iVar7 != iVar2)) ||
                     ((iVar7 == 0x18 &&
                      ((iVar2 == 0x18 &&
                       (cVar6 = ClassDB::is_parent_class
                                          ((StringName *)(piVar16 + 2),(StringName *)(piVar15 + 4)),
                       cVar6 == '\0')))))) goto LAB_00104f90;
                  piVar15 = *(int **)(piVar15 + 0xc);
                  piVar16 = *(int **)(piVar16 + 4);
                } while (piVar15 != (int *)0x0);
                lVar14 = *(long *)param_1;
              }
              if (lVar14 == 0) {
                pauVar10 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
                *(undefined1 (**) [16])param_1 = pauVar10;
                *(undefined4 *)pauVar10[1] = 0;
                *pauVar10 = (undefined1  [16])0x0;
              }
              this = (MethodInfo *)operator_new(0x88,DefaultAllocator::alloc);
              *(undefined8 *)this = 0;
              *(undefined4 *)(this + 8) = 0;
              *(undefined4 *)(this + 0x20) = 0;
              *(undefined8 *)(this + 0x28) = 0;
              *(undefined4 *)(this + 0x30) = 6;
              *(undefined8 *)(this + 0x38) = 1;
              *(undefined8 *)(this + 0x40) = 0;
              *(undefined8 *)(this + 0x50) = 0;
              *(undefined4 *)(this + 0x58) = 0;
              *(undefined1 (*) [16])(this + 0x10) = (undefined1  [16])0x0;
              *(undefined1 (*) [16])(this + 0x68) = (undefined1  [16])0x0;
              *(undefined1 (*) [16])(this + 0x78) = (undefined1  [16])0x0;
              MethodInfo::operator=(this,(MethodInfo *)pSVar13);
              plVar1 = *(long **)param_1;
              lVar14 = plVar1[1];
              *(long **)(this + 0x80) = plVar1;
              *(undefined8 *)(this + 0x70) = 0;
              *(long *)(this + 0x78) = lVar14;
              if (lVar14 != 0) {
                *(MethodInfo **)(lVar14 + 0x70) = this;
              }
              plVar1[1] = (long)this;
              if (*plVar1 == 0) {
                *plVar1 = (long)this;
              }
              pSVar13 = *(String **)(pSVar13 + 0x70);
              *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
              if (pSVar13 == (String *)0x0) goto LAB_001050a4;
            }
LAB_00104f90:
          }
        }
LAB_001050a4:
        List<Pair<Variant::Type,StringName>,DefaultAllocator>::~List
                  ((List<Pair<Variant::Type,StringName>,DefaultAllocator> *)&local_98);
        if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return param_1;
      }
LAB_00104ea1:
      _err_print_index_error
                ("get","./core/templates/list.h",0x22b,(long)(int)uVar12,lVar14,"p_index","size()",
                 "",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    iVar2 = *(int *)(puVar3 + 2);
    if (iVar2 - iVar7 <= (int)uVar12) goto LAB_00104f20;
    if (iVar2 <= (int)uVar12) {
      lVar14 = (long)iVar2;
      goto LAB_00104ea1;
    }
    puVar9 = (undefined4 *)*puVar3;
    if (uVar12 != 0) {
      uVar8 = 0;
      if ((uVar12 & 1) != 0) {
        uVar8 = 1;
        puVar9 = *(undefined4 **)(puVar9 + 0xc);
        if (uVar12 == 1) goto LAB_00104cff;
      }
      do {
        uVar8 = uVar8 + 2;
        puVar9 = *(undefined4 **)(*(long *)(puVar9 + 0xc) + 0x30);
      } while (uVar8 != uVar12);
    }
LAB_00104cff:
    local_78 = *puVar9;
    local_70 = 0;
    if (*(long *)(puVar9 + 2) != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)(puVar9 + 2));
    }
    StringName::StringName((StringName *)&local_68,(StringName *)(puVar9 + 4));
    local_60 = puVar9[6];
    local_58 = 0;
    if (*(long *)(puVar9 + 8) != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)(puVar9 + 8));
    }
    local_50 = puVar9[10];
    local_88 = local_78;
    StringName::StringName((StringName *)&local_80,(StringName *)&local_68);
    if (local_98 == (undefined1 (*) [16])0x0) {
      local_98 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
      *(undefined4 *)local_98[1] = 0;
      *local_98 = (undefined1  [16])0x0;
    }
    pauVar10 = local_98;
    puVar9 = (undefined4 *)operator_new(0x28,DefaultAllocator::alloc);
    *puVar9 = 0;
    *(undefined1 (*) [16])(puVar9 + 2) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(puVar9 + 6) = (undefined1  [16])0x0;
    *puVar9 = local_88;
    StringName::operator=((StringName *)(puVar9 + 2),(StringName *)&local_80);
    lVar14 = *(long *)(*pauVar10 + 8);
    *(undefined1 (**) [16])(puVar9 + 8) = pauVar10;
    *(undefined8 *)(puVar9 + 4) = 0;
    *(long *)(puVar9 + 6) = lVar14;
    if (lVar14 != 0) {
      *(undefined4 **)(lVar14 + 0x10) = puVar9;
    }
    lVar14 = *(long *)*pauVar10;
    *(undefined4 **)(*pauVar10 + 8) = puVar9;
    if (lVar14 == 0) {
      *(undefined4 **)*pauVar10 = puVar9;
    }
    *(int *)pauVar10[1] = *(int *)pauVar10[1] + 1;
    if ((StringName::configured != '\0') && (local_80 != (undefined4 *)0x0)) {
      StringName::unref();
    }
    lVar14 = local_58;
    if (local_58 != 0) {
      LOCK();
      plVar1 = (long *)(local_58 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_58 = 0;
        Memory::free_static((void *)(lVar14 + -0x10),false);
      }
    }
    if ((StringName::configured != '\0') && (local_68 != 0)) {
      StringName::unref();
    }
    lVar14 = local_70;
    if (local_70 != 0) {
      LOCK();
      plVar1 = (long *)(local_70 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_70 = 0;
        Memory::free_static((void *)(lVar14 + -0x10),false);
      }
    }
    uVar12 = uVar12 + 1;
    puVar3 = *(undefined8 **)(in_RCX + 0x40);
  } while( true );
}



/* ConnectionsDock::_disconnect_all() */

void __thiscall ConnectionsDock::_disconnect_all(ConnectionsDock *this)

{
  Variant *pVVar1;
  StringName *pSVar2;
  uint uVar3;
  int iVar4;
  TreeItem *pTVar5;
  long lVar6;
  Object *pOVar7;
  int iVar8;
  Variant *pVVar9;
  long in_FS_OFFSET;
  Variant local_1b0 [8];
  long local_1a8;
  long local_1a0;
  String local_198 [16];
  long local_188 [2];
  Callable local_178 [16];
  byte local_168;
  char *local_158;
  undefined8 local_150;
  long local_148;
  long local_140;
  uint local_138;
  CowData<Variant> local_128 [16];
  Variant *local_118;
  undefined1 auStack_110 [16];
  Variant *local_f8;
  Variant *pVStack_f0;
  Variant *local_e8;
  Variant local_e0 [24];
  undefined8 local_c8;
  undefined1 local_c0 [16];
  Variant local_b0 [8];
  int local_a8 [6];
  Variant local_90 [24];
  Variant local_78 [24];
  undefined8 local_60;
  undefined1 local_58 [16];
  Variant local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pTVar5 = (TreeItem *)Tree::get_selected();
  if ((pTVar5 != (TreeItem *)0x0) && (iVar4 = _get_item_type(this,pTVar5), iVar4 == 2)) {
    lVar6 = TreeItem::get_first_child();
    iVar4 = (int)(Variant *)&local_f8;
    TreeItem::get_metadata(iVar4);
    Variant::operator_cast_to_Dictionary((Variant *)&local_158);
    Variant::Variant((Variant *)local_a8,"name");
    Dictionary::operator[]((Variant *)&local_158);
    Variant::operator_cast_to_String(local_1b0);
    if (Variant::needs_deinit[local_a8[0]] != '\0') {
      Variant::_clear_internal();
    }
    Dictionary::~Dictionary((Dictionary *)&local_158);
    if (Variant::needs_deinit[(int)local_f8] != '\0') {
      Variant::_clear_internal();
    }
    pOVar7 = (Object *)EditorUndoRedoManager::get_singleton();
    local_188[0] = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)local_188,(CowData *)local_1b0);
    local_1a0 = 0;
    local_158 = "";
    local_150 = 0;
    String::parse_latin1((StrRange *)&local_1a0);
    local_1a8 = 0;
    local_158 = "Disconnect all from signal: \'%s\'";
    local_150 = 0x20;
    String::parse_latin1((StrRange *)&local_1a8);
    TTR(local_198,(String *)&local_1a8);
    vformat<String>((Variant *)&local_158,local_198,(CowData<char32_t> *)local_188);
    EditorUndoRedoManager::create_action(pOVar7,(Variant *)&local_158,0,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_198);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_188);
    if (lVar6 != 0) {
      do {
        iVar8 = (int)(Variant *)&local_118;
        TreeItem::get_metadata(iVar8);
        Object::Connection::Connection((Connection *)local_188,(Variant *)&local_118);
        if (Variant::needs_deinit[(int)local_118] != '\0') {
          Variant::_clear_internal();
        }
        if ((local_168 & 0x10) == 0) {
          ConnectDialog::ConnectionData::ConnectionData
                    ((ConnectionData *)&local_158,(Connection *)local_188);
          ConnectDialog::ConnectionData::get_callable();
          StringName::StringName((StringName *)&local_1a0,(StringName *)&local_148);
          StringName::StringName((StringName *)&local_1a8,"disconnect",false);
          pSVar2 = *(StringName **)(this + 0xa10);
          Variant::Variant((Variant *)&local_f8,(StringName *)&local_1a0);
          Variant::Variant(local_e0,(Callable *)local_198);
          local_c0 = (undefined1  [16])0x0;
          pVVar9 = local_b0;
          local_c8 = 0;
          auStack_110._0_8_ = local_e0;
          local_118 = (Variant *)&local_f8;
          EditorUndoRedoManager::add_do_methodp(pOVar7,pSVar2,(Variant **)&local_1a8,iVar8);
          do {
            pVVar1 = pVVar9 + -0x18;
            pVVar9 = pVVar9 + -0x18;
            if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
              Variant::_clear_internal();
            }
          } while (pVVar9 != (Variant *)&local_f8);
          if ((StringName::configured != '\0') &&
             (((local_1a8 == 0 || (StringName::unref(), StringName::configured != '\0')) &&
              (local_1a0 != 0)))) {
            StringName::unref();
          }
          Callable::~Callable((Callable *)local_198);
          uVar3 = local_138;
          ConnectDialog::ConnectionData::get_callable();
          StringName::StringName((StringName *)&local_1a0,(StringName *)&local_148);
          StringName::StringName((StringName *)&local_1a8,"connect",false);
          pSVar2 = *(StringName **)(this + 0xa10);
          Variant::Variant((Variant *)local_a8,(StringName *)&local_1a0);
          Variant::Variant(local_90,(Callable *)local_198);
          Variant::Variant(local_78,uVar3);
          pVVar9 = local_48;
          local_60 = 0;
          local_58 = (undefined1  [16])0x0;
          local_f8 = (Variant *)local_a8;
          pVStack_f0 = local_90;
          local_e8 = local_78;
          EditorUndoRedoManager::add_undo_methodp(pOVar7,pSVar2,(Variant **)&local_1a8,iVar4);
          do {
            pVVar1 = pVVar9 + -0x18;
            pVVar9 = pVVar9 + -0x18;
            if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
              Variant::_clear_internal();
            }
          } while (pVVar9 != (Variant *)local_a8);
          if (((StringName::configured != '\0') &&
              ((local_1a8 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
             (local_1a0 != 0)) {
            StringName::unref();
          }
          Callable::~Callable((Callable *)local_198);
          CowData<Variant>::_unref(local_128);
          if (((StringName::configured != '\0') &&
              ((local_140 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
             (local_148 != 0)) {
            StringName::unref();
          }
        }
        lVar6 = TreeItem::get_next();
        Callable::~Callable(local_178);
        if ((StringName::configured != '\0') && (local_188[0] != 0)) {
          StringName::unref();
        }
      } while (lVar6 != 0);
    }
    StringName::StringName((StringName *)&local_158,"update_tree",false);
    local_118 = (Variant *)0x0;
    auStack_110 = (undefined1  [16])0x0;
    EditorUndoRedoManager::add_do_methodp(pOVar7,(StringName *)this,(Variant **)&local_158,0);
    if (Variant::needs_deinit[(int)local_118] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_158 != (char *)0x0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_158,"update_tree",false);
    local_118 = (Variant *)0x0;
    auStack_110 = (undefined1  [16])0x0;
    EditorUndoRedoManager::add_undo_methodp(pOVar7,(StringName *)this,(Variant **)&local_158,0);
    if (Variant::needs_deinit[(int)local_118] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_158 != (char *)0x0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_158,"update_tree",false);
    auStack_110 = (undefined1  [16])0x0;
    local_118 = (Variant *)0x0;
    EditorUndoRedoManager::add_do_methodp
              (pOVar7,*(StringName **)(SceneTreeDock::singleton + 0xac0),(Variant **)&local_158,0);
    if (Variant::needs_deinit[(int)local_118] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_158 != (char *)0x0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_158,"update_tree",false);
    auStack_110 = (undefined1  [16])0x0;
    local_118 = (Variant *)0x0;
    EditorUndoRedoManager::add_undo_methodp
              (pOVar7,*(StringName **)(SceneTreeDock::singleton + 0xac0),(Variant **)&local_158,0);
    if (Variant::needs_deinit[(int)local_118] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_158 != (char *)0x0)) {
      StringName::unref();
    }
    EditorUndoRedoManager::commit_action(SUB81(pOVar7,0));
    CowData<char32_t>::_unref((CowData<char32_t> *)local_1b0);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ConnectionsDock::_go_to_method(TreeItem&) */

void __thiscall ConnectionsDock::_go_to_method(ConnectionsDock *this,TreeItem *param_1)

{
  undefined8 uVar1;
  Object *pOVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  Object *pOVar7;
  long in_FS_OFFSET;
  Object *local_d0;
  Object *local_c8;
  undefined8 local_c0;
  long local_b8 [2];
  Callable local_a8 [32];
  long local_88;
  long *local_80;
  long local_78;
  long local_70;
  CowData<Variant> local_58 [16];
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar5 = _get_item_type(this,param_1);
  if (iVar5 != 3) goto LAB_00105c46;
  TreeItem::get_metadata((int)(Variant *)local_48);
  Object::Connection::Connection((Connection *)local_b8,(Variant *)local_48);
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  ConnectDialog::ConnectionData::ConnectionData((ConnectionData *)&local_88,(Connection *)local_b8);
  if (local_88 == *(long *)(this + 0xa10)) {
    if (local_80 == (long *)0x0) goto LAB_00105d56;
    (**(code **)(*local_80 + 0x98))((Variant *)local_48);
    local_d0 = (Object *)0x0;
    lVar6 = Variant::get_validated_object();
    if ((lVar6 == 0) ||
       (pOVar7 = (Object *)__dynamic_cast(lVar6,&Object::typeinfo,&Script::typeinfo,0),
       pOVar7 == (Object *)0x0)) {
LAB_00105d38:
      if (Variant::needs_deinit[local_48[0]] != '\0') {
        Variant::_clear_internal();
      }
      Ref<Script>::unref((Ref<Script> *)&local_d0);
      goto LAB_00105d56;
    }
    local_d0 = pOVar7;
    cVar3 = RefCounted::reference();
    if (cVar3 == '\0') {
      local_d0 = (Object *)0x0;
      goto LAB_00105d38;
    }
    if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
    }
    uVar1 = ScriptEditor::script_editor;
    if (local_70 == 0) {
      local_c0 = 0;
    }
    else {
      local_c0 = 0;
      if (*(char **)(local_70 + 8) == (char *)0x0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_c0,(CowData *)(local_70 + 0x10));
      }
      else {
        String::parse_latin1((String *)&local_c0,*(char **)(local_70 + 8));
      }
    }
    local_c8 = pOVar7;
    cVar3 = RefCounted::reference();
    if (cVar3 == '\0') {
      local_c8 = (Object *)0x0;
    }
    cVar3 = ScriptEditor::script_goto_method(uVar1,&local_c8,(CowData<char32_t> *)&local_c0);
    if (((local_c8 != (Object *)0x0) &&
        (cVar4 = RefCounted::unreference(), pOVar2 = local_c8, cVar4 != '\0')) &&
       (cVar4 = predelete_handler(local_c8), cVar4 != '\0')) {
      (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
      Memory::free_static(pOVar2,false);
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
    if (cVar3 != '\0') {
      EditorMainScreen::select((int)*(undefined8 *)(EditorNode::singleton + 0x990));
    }
    cVar3 = RefCounted::unreference();
    if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar7), cVar3 != '\0')) {
      (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
      Memory::free_static(pOVar7,false);
    }
    CowData<Variant>::_unref(local_58);
    if (((StringName::configured != '\0') &&
        ((local_70 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
       (local_78 != 0)) {
      StringName::unref();
    }
    Callable::~Callable(local_a8);
  }
  else {
    _err_print_error("_go_to_method","editor/connections_dialog.cpp",0x4a2,
                     "Condition \"cd.source != selected_node\" is true.",0,0);
LAB_00105d56:
    ConnectDialog::ConnectionData::~ConnectionData((ConnectionData *)&local_88);
    Callable::~Callable(local_a8);
  }
  if ((StringName::configured != '\0') && (local_b8[0] != 0)) {
    StringName::unref();
  }
LAB_00105c46:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ConnectDialog::~ConnectDialog() */

void __thiscall ConnectDialog::~ConnectDialog(ConnectDialog *this)

{
  long *plVar1;
  Object *pOVar2;
  long lVar3;
  char cVar4;
  
  *(undefined ***)this = &PTR__initialize_classv_00124ca8;
  pOVar2 = *(Object **)(this + 0xe30);
  cVar4 = predelete_handler(pOVar2);
  if (cVar4 != '\0') {
    (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
    Memory::free_static(pOVar2,false);
  }
  if (*(long *)(this + 0xed0) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xed0) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(this + 0xed0);
      *(undefined8 *)(this + 0xed0) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  NodePath::~NodePath((NodePath *)(this + 0xe40));
  CowData<String>::_unref((CowData<String> *)(this + 0xe20));
  if ((StringName::configured != '\0') && (*(long *)(this + 0xe10) != 0)) {
    StringName::unref();
  }
  CowData<Variant>::_unref((CowData<Variant> *)(this + 0xe08));
  if (StringName::configured != '\0') {
    if (*(long *)(this + 0xdf0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010609a;
    }
    if (*(long *)(this + 0xde8) != 0) {
      StringName::unref();
    }
  }
LAB_0010609a:
  *(undefined ***)this = &PTR__initialize_classv_001248d0;
  AcceptDialog::~AcceptDialog((AcceptDialog *)this);
  return;
}



/* ConnectDialog::~ConnectDialog() */

void __thiscall ConnectDialog::~ConnectDialog(ConnectDialog *this)

{
  ~ConnectDialog(this);
  operator_delete(this,0xee8);
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



/* ConnectDialog::init(ConnectDialog::ConnectionData const&, Vector<String> const&, bool) */

void __thiscall
ConnectDialog::init(ConnectDialog *this,ConnectionData *param_1,Vector *param_2,bool param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  
  AcceptDialog::set_hide_on_ok(SUB81(this,0));
  *(undefined8 *)(this + 0xdd0) = *(undefined8 *)param_1;
  StringName::operator=((StringName *)(this + 0xe10),(StringName *)(param_1 + 0x10));
  if (*(long *)(this + 0xe20) != *(long *)(param_2 + 8)) {
    CowData<String>::_ref((CowData<String> *)(this + 0xe20),(CowData *)(param_2 + 8));
  }
  SceneTreeEditor::set_selected(*(Node **)(this + 0xe50),false);
  SceneTreeEditor::set_marked(*(Node **)(this + 0xe50),SUB81(*(undefined8 *)(this + 0xdd0),0),true);
  if (*(long *)(param_1 + 8) != 0) {
    SceneTreeEditor::set_selected(*(Node **)(this + 0xe50),SUB81(*(long *)(param_1 + 8),0));
    set_dst_method(this,(StringName *)(param_1 + 0x18));
  }
  _update_ok_enabled(this);
  BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xeb0),0));
  BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xeb8),0));
  if (*(long *)(param_2 + 8) == 0) {
    dVar5 = 0.0;
  }
  else {
    dVar5 = (double)*(long *)(*(long *)(param_2 + 8) + -8);
  }
  Range::set_max(dVar5);
  Range::set_value((double)*(int *)(param_1 + 0x24));
  _unbind_count_changed((double)*(int *)(param_1 + 0x24));
  lVar4 = *(long *)(this + 0xe30);
  lVar3 = *(long *)(lVar4 + 0x180);
  if ((lVar3 != 0) && (*(long *)(lVar3 + -8) != 0)) {
    CowData<Variant>::_unref((CowData<Variant> *)(lVar4 + 0x180));
    lVar4 = *(long *)(this + 0xe30);
    lVar3 = *(long *)(lVar4 + 0x180);
  }
  if (*(long *)(param_1 + 0x30) != lVar3) {
    CowData<Variant>::_ref((CowData<Variant> *)(lVar4 + 0x180),(CowData *)(param_1 + 0x30));
  }
  Object::notify_property_list_changed();
  uVar1 = *(undefined8 *)param_1;
  uVar2 = *(undefined8 *)(param_1 + 8);
  this[0xe38] = (ConnectDialog)param_3;
  *(undefined8 *)(this + 0xdd8) = uVar1;
  *(undefined8 *)(this + 0xde0) = uVar2;
  StringName::operator=((StringName *)(this + 0xde8),(StringName *)(param_1 + 0x10));
  StringName::operator=((StringName *)(this + 0xdf0),(StringName *)(param_1 + 0x18));
  *(undefined4 *)(this + 0xdf8) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0xdfc) = *(undefined4 *)(param_1 + 0x24);
  if (*(long *)(this + 0xe08) != *(long *)(param_1 + 0x30)) {
    CowData<Variant>::_ref((CowData<Variant> *)(this + 0xe08),(CowData *)(param_1 + 0x30));
    return;
  }
  return;
}



/* ConnectDialog::get_signal_args() const */

void ConnectDialog::get_signal_args(void)

{
  long in_RSI;
  long in_RDI;
  
  *(undefined8 *)(in_RDI + 8) = 0;
  if (*(long *)(in_RSI + 0xe20) != 0) {
    CowData<String>::_ref((CowData<String> *)(in_RDI + 8),(CowData *)(in_RSI + 0xe20));
  }
  return;
}



/* ConnectionsDock::_open_connection_dialog(TreeItem&) */

void ConnectionsDock::_open_connection_dialog(TreeItem *param_1)

{
  String *pSVar1;
  char cVar2;
  long lVar3;
  Node *pNVar4;
  Node *pNVar5;
  long in_FS_OFFSET;
  Variant local_f8 [8];
  Variant local_f0 [8];
  undefined8 local_e8;
  String local_e0 [8];
  undefined8 local_d8;
  Vector local_d0 [8];
  undefined8 local_c8;
  undefined8 local_c0;
  Variant local_b8 [8];
  CowData<String> local_b0 [8];
  char *local_a8;
  undefined8 local_a0;
  Node *local_98;
  Node *local_90;
  long local_88;
  long local_80;
  undefined8 local_78;
  undefined8 local_68 [2];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  TreeItem::get_metadata((int)(Variant *)local_58);
  Variant::operator_cast_to_Dictionary(local_f8);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,"name");
  Dictionary::operator[](local_f8);
  Variant::operator_cast_to_String(local_f0);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,"args");
  Dictionary::operator[](local_f8);
  Variant::operator_cast_to_Vector(local_b8);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  lVar3 = Node::get_owner();
  if (lVar3 == 0) {
    pNVar4 = *(Node **)(param_1 + 0xa10);
  }
  else {
    pNVar4 = (Node *)Node::get_owner();
  }
  if (pNVar4 == (Node *)0x0) {
LAB_00106830:
    if (*(long *)(param_1 + 0x240) == 0) {
      _err_print_error("get_tree","./scene/main/node.h",0x1e5,"Parameter \"data.tree\" is null.",0,0
                      );
    }
    pNVar4 = (Node *)SceneTree::get_edited_scene_root();
    if (*(long *)(param_1 + 0x240) == 0) {
      _err_print_error("get_tree","./scene/main/node.h",0x1e5,"Parameter \"data.tree\" is null.",0,0
                      );
    }
    pNVar5 = (Node *)SceneTree::get_edited_scene_root();
    pNVar4 = (Node *)_find_first_script(pNVar5,pNVar4);
  }
  else {
    (**(code **)(*(long *)pNVar4 + 0x98))((Variant *)local_58,pNVar4);
    cVar2 = Variant::is_null();
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (cVar2 != '\0') goto LAB_00106830;
  }
  local_98 = *(Node **)(param_1 + 0xa10);
  local_90 = (Node *)0x0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_68[0] = 0;
  StringName::StringName((StringName *)&local_a8,(String *)local_f0,false);
  if ((char *)local_88 == local_a8) {
    if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
      StringName::unref();
    }
  }
  else {
    StringName::unref();
    local_88 = (long)local_a8;
  }
  local_90 = pNVar4;
  ConnectDialog::generate_method_callback_name
            ((ConnectDialog *)&local_a8,local_98,(String *)local_f0,pNVar4);
  if ((char *)local_80 == local_a8) {
    if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
      StringName::unref();
    }
  }
  else {
    StringName::unref();
    local_80 = (long)local_a8;
  }
  ConnectDialog::init(*(ConnectDialog **)(param_1 + 0xa28),(ConnectionData *)&local_98,
                      (Vector *)local_b8,false);
  pSVar1 = *(String **)(param_1 + 0xa28);
  local_c0 = 0;
  local_a8 = "";
  local_a0 = 0;
  String::parse_latin1((StrRange *)&local_c0);
  local_a8 = "Connect a Signal to a Method";
  local_c8 = 0;
  local_a0 = 0x1c;
  String::parse_latin1((StrRange *)&local_c8);
  TTR((String *)&local_a8,(String *)&local_c8);
  Window::set_title(pSVar1);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  pSVar1 = *(String **)(param_1 + 0xa28);
  local_c0 = 0;
  local_a8 = ")";
  local_a0 = 1;
  String::parse_latin1((StrRange *)&local_c0);
  local_a8 = ", ";
  local_d8 = 0;
  local_a0 = 2;
  String::parse_latin1((StrRange *)&local_d8);
  String::join(local_d0);
  local_a8 = "(";
  local_e8 = 0;
  local_a0 = 1;
  String::parse_latin1((StrRange *)&local_e8);
  String::operator+(local_e0,(String *)local_f0);
  String::operator+((String *)&local_c8,local_e0);
  String::operator+((String *)&local_a8,(String *)&local_c8);
  ConnectDialog::popup_dialog(pSVar1);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_e0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<Variant>::_unref((CowData<Variant> *)local_68);
  if (StringName::configured != '\0') {
    if (local_80 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001067ed;
    }
    if (local_88 != 0) {
      StringName::unref();
    }
  }
LAB_001067ed:
  CowData<String>::_unref(local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_f0);
  Dictionary::~Dictionary((Dictionary *)local_f8);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ConnectionsDock::_tree_item_activated() */

void __thiscall ConnectionsDock::_tree_item_activated(ConnectionsDock *this)

{
  int iVar1;
  TreeItem *pTVar2;
  
  pTVar2 = (TreeItem *)Tree::get_selected();
  if (pTVar2 != (TreeItem *)0x0) {
    iVar1 = _get_item_type(this,pTVar2);
    if (iVar1 == 2) {
      _open_connection_dialog((TreeItem *)this);
      return;
    }
    iVar1 = _get_item_type(this,pTVar2);
    if (iVar1 == 3) {
      _go_to_method(this,pTVar2);
      return;
    }
  }
  return;
}



/* ConnectionsDock::_handle_signal_menu_option(int) */

void __thiscall ConnectionsDock::_handle_signal_menu_option(ConnectionsDock *this,int param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  String *pSVar3;
  long *plVar4;
  int iVar5;
  TreeItem *pTVar6;
  Variant *pVVar7;
  long in_FS_OFFSET;
  Variant local_b0 [8];
  Variant local_a8 [8];
  CowData<char32_t> local_a0 [8];
  undefined8 local_98;
  undefined8 local_90;
  String local_88 [8];
  CowData<char32_t> local_80 [8];
  int local_78 [8];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pTVar6 = (TreeItem *)Tree::get_selected();
  if (pTVar6 != (TreeItem *)0x0) {
    iVar5 = _get_item_type(this,pTVar6);
    if (iVar5 == 2) {
      TreeItem::get_metadata((int)(Variant *)local_58);
      Variant::operator_cast_to_Dictionary(local_b0);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      plVar4 = DisplayServer::singleton;
      pSVar3 = ScriptEditor::script_editor;
      if (param_1 == 2) {
        pcVar2 = *(code **)(*DisplayServer::singleton + 0x3b0);
        Variant::Variant((Variant *)local_58,"name");
        Dictionary::operator[](local_b0);
        Variant::operator_cast_to_String((Variant *)local_80);
        (*pcVar2)(plVar4,(Variant *)local_80);
        CowData<char32_t>::_unref(local_80);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
      }
      else if (param_1 < 3) {
        if (param_1 == 0) {
          _open_connection_dialog((TreeItem *)this);
        }
        else if (param_1 == 1) {
          uVar1 = *(undefined8 *)(this + 0xa20);
          Variant::Variant((Variant *)local_78,"name");
          pVVar7 = (Variant *)Dictionary::operator[](local_b0);
          Variant::Variant((Variant *)local_58,pVVar7);
          local_90 = 0;
          String::parse_latin1((String *)&local_90,"");
          local_98 = 0;
          String::parse_latin1
                    ((String *)&local_98,
                     "Are you sure you want to remove all connections from the \"%s\" signal?");
          TTR(local_88,(String *)&local_98);
          vformat<Variant>(local_80,local_88,(Variant *)local_58);
          AcceptDialog::set_text(uVar1,local_80);
          CowData<char32_t>::_unref(local_80);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
          }
          local_58[0] = 0;
          local_58[1] = 0;
          Window::popup_centered(*(Vector2i **)(this + 0xa20));
        }
      }
      else if (param_1 == 3) {
        Variant::Variant((Variant *)local_58,"name");
        Dictionary::operator[](local_b0);
        Variant::operator_cast_to_String((Variant *)local_88);
        local_98 = 0;
        String::parse_latin1((String *)&local_98,":");
        Variant::Variant((Variant *)local_78,"class");
        Dictionary::operator[](local_b0);
        Variant::operator_cast_to_String(local_a8);
        operator+((char *)local_a0,(String *)"class_signal:");
        String::operator+((String *)&local_90,(String *)local_a0);
        String::operator+((String *)local_80,(String *)&local_90);
        ScriptEditor::_help_class_goto(pSVar3);
        CowData<char32_t>::_unref(local_80);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
        CowData<char32_t>::_unref(local_a0);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        EditorMainScreen::select((int)*(undefined8 *)(EditorNode::singleton + 0x990));
      }
      Dictionary::~Dictionary((Dictionary *)local_b0);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ConnectionsDock::_open_edit_connection_dialog(TreeItem&) */

void ConnectionsDock::_open_edit_connection_dialog(TreeItem *param_1)

{
  char *__s;
  String *pSVar1;
  long lVar2;
  long lVar3;
  long in_FS_OFFSET;
  CowData<char32_t> *local_140;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  String local_118 [8];
  long local_110;
  Variant local_108 [8];
  CowData<String> local_100 [8];
  char *local_f8;
  size_t local_f0;
  long local_e8 [2];
  Callable local_d8 [32];
  long local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  CowData<Variant> local_88 [16];
  int local_78 [8];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = TreeItem::get_parent();
  if (lVar2 == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("_open_edit_connection_dialog","editor/connections_dialog.cpp",0x486,
                       "Parameter \"signal_item\" is null.",0,0);
      return;
    }
    goto LAB_001072cd;
  }
  TreeItem::get_metadata((int)(Variant *)local_58);
  Object::Connection::Connection((Connection *)local_e8,(Variant *)local_58);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  ConnectDialog::ConnectionData::ConnectionData((ConnectionData *)&local_b8,(Connection *)local_e8);
  if ((((local_b8 != 0) &&
       (lVar2 = __dynamic_cast(local_b8,&Object::typeinfo,&Node::typeinfo,0), local_b0 != 0)) &&
      (lVar3 = __dynamic_cast(local_b0,&Object::typeinfo,&Node::typeinfo,0), lVar2 != 0)) &&
     (lVar3 != 0)) {
    if (local_a8 == 0) {
LAB_00107211:
      local_130 = 0;
    }
    else {
      __s = *(char **)(local_a8 + 8);
      local_130 = 0;
      if (__s == (char *)0x0) {
        if (*(long *)(local_a8 + 0x10) == 0) goto LAB_00107211;
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_130,(CowData *)(local_a8 + 0x10));
      }
      else {
        local_f0 = strlen(__s);
        local_f8 = __s;
        String::parse_latin1((StrRange *)&local_130);
      }
    }
    local_140 = (CowData<char32_t> *)&local_130;
    TreeItem::get_metadata((int)local_78);
    Variant::operator_cast_to_Dictionary((Variant *)&local_f8);
    Variant::Variant((Variant *)local_58,"args");
    Dictionary::operator[]((Variant *)&local_f8);
    Variant::operator_cast_to_Vector(local_108);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    Dictionary::~Dictionary((Dictionary *)&local_f8);
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    pSVar1 = *(String **)(param_1 + 0xa28);
    StringName::StringName((StringName *)&local_110,(StringName *)&local_a8);
    local_f8 = "";
    local_120 = 0;
    local_f0 = 0;
    String::parse_latin1((StrRange *)&local_120);
    local_f8 = "Edit Connection: \'%s\'";
    local_128 = 0;
    local_f0 = 0x15;
    String::parse_latin1((StrRange *)&local_128);
    TTR(local_118,(String *)&local_128);
    vformat<StringName>((Variant *)&local_f8,local_118,(StringName *)&local_110);
    Window::set_title(pSVar1);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_118);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
    if ((StringName::configured != '\0') && (local_110 != 0)) {
      StringName::unref();
    }
    ConnectDialog::popup_dialog(*(String **)(param_1 + 0xa28));
    ConnectDialog::init(*(ConnectDialog **)(param_1 + 0xa28),(ConnectionData *)&local_b8,
                        (Vector *)local_108,true);
    CowData<String>::_unref(local_100);
    CowData<char32_t>::_unref(local_140);
  }
  CowData<Variant>::_unref(local_88);
  if (((StringName::configured != '\0') &&
      ((local_a0 == 0 || (StringName::unref(), StringName::configured != '\0')))) && (local_a8 != 0)
     ) {
    StringName::unref();
  }
  Callable::~Callable(local_d8);
  if ((StringName::configured != '\0') && (local_e8[0] != 0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001072cd:
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



/* ConnectDialog::get_signature(MethodInfo const&, Vector<String>*) */

MethodInfo * ConnectDialog::get_signature(MethodInfo *param_1,Vector *param_2)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  char cVar4;
  Vector<String> *in_RCX;
  CowData *in_RDX;
  undefined8 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  long in_FS_OFFSET;
  char *local_a8;
  long local_a0;
  long local_98;
  CowData<char32_t> local_90 [8];
  long local_88;
  long local_80;
  long local_78;
  char *local_70;
  Vector<String> local_68 [8];
  undefined8 local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = 0;
  local_58 = (char *)0x0;
  if (*(long *)in_RDX != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,in_RDX);
  }
  Vector<String>::push_back(local_68,(CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  local_70 = (char *)0x0;
  local_58 = "(";
  local_50 = 1;
  String::parse_latin1((StrRange *)&local_70);
  local_58 = (char *)0x0;
  if (local_70 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_70);
  }
  Vector<String>::push_back(local_68,(CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  puVar5 = *(undefined8 **)(in_RDX + 0x40);
  if ((puVar5 == (undefined8 *)0x0) || (puVar7 = (undefined4 *)*puVar5, puVar7 == (undefined4 *)0x0)
     ) {
LAB_00107d2d:
    local_70 = (char *)0x0;
    local_58 = ")";
    local_50 = 1;
    String::parse_latin1((StrRange *)&local_70);
    local_58 = (char *)0x0;
    if (local_70 != (char *)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_70);
    }
    Vector<String>::push_back(local_68,(CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    local_58 = (char *)0x0;
    String::join((Vector *)param_1);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<String>::_unref((CowData<String> *)&local_60);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  if (puVar5 == (undefined8 *)0x0) goto LAB_00107956;
LAB_00107670:
  if ((undefined4 *)*puVar5 != puVar7) goto LAB_00107956;
  do {
    local_a8 = (char *)0x0;
    switch(*puVar7) {
    case 0:
      local_50 = 7;
      local_58 = "Variant";
      String::parse_latin1((StrRange *)&local_a8);
      break;
    default:
      Variant::get_type_name((CowData<char32_t> *)&local_58);
      goto LAB_001076b0;
    case 2:
      if ((*(byte *)((long)puVar7 + 0x2a) & 1) != 0) {
        local_70 = (char *)0x0;
        lVar2 = *(long *)(puVar7 + 4);
        if (lVar2 != 0) {
          local_58 = (char *)0x0;
          if (*(char **)(lVar2 + 8) == (char *)0x0) {
            if (*(long *)(lVar2 + 0x10) != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)(lVar2 + 0x10));
            }
          }
          else {
            String::parse_latin1((String *)&local_58,*(char **)(lVar2 + 8));
          }
          cVar4 = String::begins_with((char *)&local_58);
          if (cVar4 == '\0') {
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
            if ((StringName::configured != '\0') && (local_70 != (char *)0x0)) {
              StringName::unref();
            }
            lVar2 = *(long *)(puVar7 + 4);
            if (lVar2 == 0) {
LAB_00107fb4:
              local_58 = (char *)0x0;
            }
            else {
              local_58 = (char *)0x0;
              if (*(char **)(lVar2 + 8) == (char *)0x0) {
                if (*(long *)(lVar2 + 0x10) == 0) goto LAB_00107fb4;
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)(lVar2 + 0x10));
              }
              else {
                String::parse_latin1((String *)&local_58,*(char **)(lVar2 + 8));
              }
            }
LAB_001076b0:
            if (local_a8 != local_58) {
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
              local_a8 = local_58;
              local_58 = (char *)0x0;
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
            break;
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
          if ((StringName::configured != '\0') && (local_70 != (char *)0x0)) {
            StringName::unref();
          }
        }
      }
      local_50 = 3;
      local_58 = "int";
      String::parse_latin1((StrRange *)&local_a8);
      break;
    case 0x18:
      lVar2 = *(long *)(puVar7 + 4);
      if (lVar2 == 0) {
        String::parse_latin1((String *)&local_a8,"Object");
      }
      else {
        pcVar3 = *(char **)(lVar2 + 8);
        local_70 = (char *)0x0;
        if (pcVar3 == (char *)0x0) {
          if (*(long *)(lVar2 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)(lVar2 + 0x10));
            goto LAB_00107ca9;
          }
        }
        else {
          local_50 = strlen(pcVar3);
          local_58 = pcVar3;
          String::parse_latin1((StrRange *)&local_70);
LAB_00107ca9:
          if (local_a8 != local_70) {
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
            local_a8 = local_70;
            local_70 = (char *)0x0;
          }
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      }
      break;
    case 0x1b:
      local_50 = 10;
      local_58 = "Dictionary";
      String::parse_latin1((StrRange *)&local_a8);
      if (((puVar7[6] == 0x26) && (*(long *)(puVar7 + 8) != 0)) &&
         (1 < *(uint *)(*(long *)(puVar7 + 8) + -8))) {
        iVar6 = (int)puVar7 + 0x20;
        String::get_slice((char *)&local_a0,iVar6);
        String::get_slice((char *)&local_98,iVar6);
        if (((local_a0 == 0) || (*(uint *)(local_a0 + -8) < 2)) ||
           (cVar4 = String::begins_with((char *)&local_a0), cVar4 != '\0')) {
          String::parse_latin1((String *)&local_a0,"Variant");
        }
        if (((local_98 == 0) || (*(uint *)(local_98 + -8) < 2)) ||
           (cVar4 = String::begins_with((char *)&local_98), cVar4 != '\0')) {
          String::parse_latin1((String *)&local_98,"Variant");
        }
        cVar4 = String::operator!=((String *)&local_a0,"Variant");
        if ((cVar4 != '\0') ||
           (cVar4 = String::operator!=((String *)&local_98,"Variant"), cVar4 != '\0')) {
          local_70 = (char *)0x0;
          String::parse_latin1((String *)&local_70,"]");
          local_88 = 0;
          String::parse_latin1((String *)&local_88,", ");
          operator+((char *)local_90,(String *)&_LC155);
          String::operator+((String *)&local_80,(String *)local_90);
          String::operator+((String *)&local_78,(String *)&local_80);
          String::operator+((String *)&local_58,(String *)&local_78);
          String::operator+=((String *)&local_a8,(String *)&local_58);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
          CowData<char32_t>::_unref(local_90);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
      }
      break;
    case 0x1c:
      if ((((puVar7[6] == 0x1f) && (*(long *)(puVar7 + 8) != 0)) &&
          (1 < *(uint *)(*(long *)(puVar7 + 8) + -8))) &&
         (cVar4 = String::begins_with((char *)(puVar7 + 8)), cVar4 == '\0')) {
        local_70 = (char *)0x0;
        String::parse_latin1((String *)&local_70,"]");
        operator+((char *)&local_78,(String *)"Array[");
        String::operator+((String *)&local_58,(String *)&local_78);
        if (local_a8 != local_58) {
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
          local_a8 = local_58;
          local_58 = (char *)0x0;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      }
      else {
        local_50 = 5;
        local_58 = "Array";
        String::parse_latin1((StrRange *)&local_a8);
      }
    }
    if ((*(long *)(puVar7 + 2) == 0) || (*(uint *)(*(long *)(puVar7 + 2) + -8) < 2)) {
      itos((long)&local_58);
      operator+((char *)&local_88,(String *)&_LC156);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    }
    else {
      local_88 = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)(puVar7 + 2));
    }
    local_80 = 0;
    local_58 = ": ";
    local_50 = 2;
    String::parse_latin1((StrRange *)&local_80);
    String::operator+((String *)&local_78,(String *)&local_88);
    String::operator+((String *)&local_70,(String *)&local_78);
    local_58 = (char *)0x0;
    if (local_70 == (char *)0x0) {
      Vector<String>::push_back(local_68);
    }
    else {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_70);
      pcVar3 = local_58;
      Vector<String>::push_back(local_68);
      if (pcVar3 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(pcVar3 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static(local_58 + -0x10,false);
        }
      }
    }
    pcVar3 = local_70;
    if (local_70 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_70 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_70 = (char *)0x0;
        Memory::free_static(pcVar3 + -0x10,false);
      }
    }
    lVar2 = local_78;
    if (local_78 != 0) {
      LOCK();
      plVar1 = (long *)(local_78 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_78 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    lVar2 = local_80;
    if (local_80 != 0) {
      LOCK();
      plVar1 = (long *)(local_80 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_80 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    if (in_RCX != (Vector<String> *)0x0) {
      local_78 = 0;
      local_58 = ":";
      local_50 = 1;
      String::parse_latin1((StrRange *)&local_78);
      String::operator+((String *)&local_70,(String *)&local_88);
      String::operator+((String *)&local_58,(String *)&local_70);
      Vector<String>::push_back(in_RCX);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    }
    lVar2 = local_88;
    if (local_88 != 0) {
      LOCK();
      plVar1 = (long *)(local_88 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_88 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    pcVar3 = local_a8;
    if (local_a8 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_a8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_a8 = (char *)0x0;
        Memory::free_static(pcVar3 + -0x10,false);
      }
    }
    puVar7 = *(undefined4 **)(puVar7 + 0xc);
    if (puVar7 == (undefined4 *)0x0) goto LAB_00107d2d;
    puVar5 = *(undefined8 **)(in_RDX + 0x40);
    if (puVar5 != (undefined8 *)0x0) goto LAB_00107670;
LAB_00107956:
    local_70 = (char *)0x0;
    local_58 = ", ";
    local_50 = 2;
    String::parse_latin1((StrRange *)&local_70);
    local_58 = (char *)0x0;
    if (local_70 != (char *)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_70);
    }
    Vector<String>::push_back(local_68,(CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  } while( true );
}



/* ConnectDialog::_create_method_tree_items(List<MethodInfo, DefaultAllocator> const&, TreeItem*) */

void __thiscall
ConnectDialog::_create_method_tree_items(ConnectDialog *this,List *param_1,TreeItem *param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  String *pSVar4;
  long in_FS_OFFSET;
  long local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long **)param_1 != (long *)0x0) &&
     (pSVar4 = (String *)**(long **)param_1, pSVar4 != (String *)0x0)) {
    do {
      uVar3 = Tree::create_item(*(TreeItem **)(this + 0xe70),(int)param_2);
      get_signature((MethodInfo *)&local_60,(Vector *)this);
      TreeItem::set_text(uVar3,0,(MethodInfo *)&local_60);
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
      Variant::Variant((Variant *)local_58,pSVar4);
      TreeItem::set_metadata((int)uVar3,(Variant *)0x0);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      pSVar4 = *(String **)(pSVar4 + 0x70);
    } while (pSVar4 != (String *)0x0);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ConnectDialog::_update_method_tree() */

void ConnectDialog::_update_method_tree(void)

{
  long *plVar1;
  MethodInfo *pMVar2;
  long lVar3;
  Object *pOVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  long *plVar8;
  undefined8 uVar9;
  TreeItem *pTVar10;
  StringName *pSVar11;
  long lVar12;
  Object *pOVar13;
  String *pSVar14;
  StringName *in_RDI;
  long in_FS_OFFSET;
  MethodInfo *local_118;
  CowData<char32_t> local_108 [8];
  Object *local_100;
  Object *local_f8;
  Object *local_f0;
  Object *local_e8;
  size_t local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined1 local_c8 [16];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Tree::clear();
  if ((_update_method_tree()::{lambda()#1}::operator()()::sname == '\0') &&
     (iVar7 = __cxa_guard_acquire(&_update_method_tree()::{lambda()#1}::operator()()::sname),
     iVar7 != 0)) {
    _scs_create((char *)&_update_method_tree()::{lambda()#1}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_update_method_tree()::{lambda()#1}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_update_method_tree()::{lambda()#1}::operator()()::sname);
  }
  local_58[0] = Window::get_theme_color
                          (in_RDI,(StringName *)
                                  &_update_method_tree()::{lambda()#1}::operator()()::sname);
  local_68 = Color::operator*((Color *)local_58,_LC159);
  LineEdit::get_text();
  plVar8 = (long *)SceneTreeEditor::get_selected();
  if (plVar8 != (long *)0x0) {
    local_d8 = 0;
    local_d0 = 0;
    local_b8 = 0;
    local_b0 = 0;
    local_a8 = 6;
    local_a0 = 1;
    local_98 = 0;
    local_88 = 0;
    local_80 = 0;
    local_70 = 0;
    local_c8 = (undefined1  [16])0x0;
    cVar5 = BaseButton::is_pressed();
    if (cVar5 != '\0') {
      local_e8 = (Object *)0x0;
      (**(code **)(**(long **)(in_RDI + 0xdd0) + 0xe0))();
      if ((local_e8 != (Object *)0x0) && (pSVar14 = *(String **)local_e8, pSVar14 != (String *)0x0))
      {
        do {
          cVar5 = operator==(pSVar14,in_RDI + 0xe10);
          if (cVar5 != '\0') {
            MethodInfo::operator=((MethodInfo *)&local_d8,(MethodInfo *)pSVar14);
            break;
          }
          pSVar14 = *(String **)(pSVar14 + 0x70);
        } while (pSVar14 != (String *)0x0);
      }
      List<MethodInfo,DefaultAllocator>::~List((List<MethodInfo,DefaultAllocator> *)&local_e8);
    }
    local_118 = (MethodInfo *)&local_d8;
    uVar9 = Tree::create_item(*(TreeItem **)(in_RDI + 0xe70),0);
    local_f0 = (Object *)0x0;
    local_e8 = (Object *)&_LC8;
    local_e0 = 0;
    String::parse_latin1((StrRange *)&local_f0);
    local_e8 = (Object *)0x111bfc;
    local_f8 = (Object *)0x0;
    local_e0 = 7;
    String::parse_latin1((StrRange *)&local_f8);
    TTR((String *)&local_e8,(String *)&local_f8);
    TreeItem::set_text(uVar9,0,(String *)&local_e8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
    iVar7 = (int)uVar9;
    TreeItem::set_selectable(iVar7,false);
    plVar1 = (long *)plVar8[0x13];
    if (plVar1 != (long *)0x0) {
      if (*(code **)(*plVar1 + 0x90) == PlaceHolderScriptInstance::get_script) {
        local_e8 = (Object *)plVar1[0x10];
        if ((local_e8 != (Object *)0x0) && (cVar5 = RefCounted::reference(), cVar5 != '\0'))
        goto LAB_0010852d;
        local_e8 = (Object *)0x0;
        if ((_DAT_00000188 != 0) &&
           ((iVar6 = (int)*(undefined8 *)(_DAT_00000188 + -8), iVar6 != 0 && (iVar6 != 1))))
        goto LAB_00108dc2;
LAB_001084c0:
        if (*(code **)(*plVar1 + 0x90) == PlaceHolderScriptInstance::get_script) {
          local_e8 = (Object *)plVar1[0x10];
          if ((local_e8 == (Object *)0x0) || (cVar5 = RefCounted::reference(), cVar5 == '\0')) {
            local_e8 = (Object *)0x0;
          }
        }
        else {
          (**(code **)(*plVar1 + 0x90))((String *)&local_e8,plVar1);
        }
        (**(code **)(*(long *)local_e8 + 0x228))(local_e8,0);
        Ref<Script>::unref((Ref<Script> *)&local_e8);
      }
      else {
        (**(code **)(*plVar1 + 0x90))((String *)&local_e8);
LAB_0010852d:
        if ((*(long *)(local_e8 + 0x188) == 0) ||
           ((iVar6 = (int)*(undefined8 *)(*(long *)(local_e8 + 0x188) + -8), iVar6 == 0 ||
            (iVar6 == 1)))) {
LAB_0010854f:
          cVar5 = RefCounted::unreference();
          pOVar4 = local_e8;
          if ((cVar5 != '\0') && (cVar5 = predelete_handler(local_e8), cVar5 != '\0')) {
            (**(code **)(*(long *)pOVar4 + 0x140))();
            Memory::free_static(pOVar4,false);
          }
          goto LAB_001084c0;
        }
LAB_00108dc2:
        pOVar4 = local_e8 + 0x188;
        iVar6 = String::find((char *)pOVar4,0x1119f5);
        if ((iVar6 != -1) || (cVar5 = String::begins_with((char *)pOVar4), cVar5 != '\0')) {
          if (local_e8 == (Object *)0x0) goto LAB_001084c0;
          goto LAB_0010854f;
        }
        if (((local_e8 != (Object *)0x0) &&
            (cVar5 = RefCounted::unreference(), pOVar4 = local_e8, cVar5 != '\0')) &&
           (cVar5 = predelete_handler(local_e8), cVar5 != '\0')) {
          (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
          Memory::free_static(pOVar4,false);
        }
      }
      local_100 = (Object *)0x0;
      (**(code **)(*plVar1 + 0x48))(plVar1,(List<MethodInfo,DefaultAllocator> *)&local_100);
      _filter_method_list((List *)&local_e8,(MethodInfo *)in_RDI,(String *)&local_100);
      if (local_100 != (Object *)0x0) {
        do {
          pOVar4 = local_100;
          pMVar2 = *(MethodInfo **)local_100;
          if (pMVar2 == (MethodInfo *)0x0) goto LAB_0010869e;
          if ((Object *)*(long **)(pMVar2 + 0x80) == local_100) {
            lVar12 = *(long *)(pMVar2 + 0x70);
            lVar3 = *(long *)(pMVar2 + 0x78);
            *(long *)local_100 = lVar12;
            if (pMVar2 == *(MethodInfo **)((long)local_100 + 8)) {
              *(long *)((long)local_100 + 8) = lVar3;
            }
            if (lVar3 != 0) {
              *(long *)(lVar3 + 0x70) = lVar12;
              lVar12 = *(long *)(pMVar2 + 0x70);
            }
            if (lVar12 != 0) {
              *(long *)(lVar12 + 0x78) = lVar3;
            }
            MethodInfo::~MethodInfo(pMVar2);
            Memory::free_static(pMVar2,false);
            *(int *)((long)pOVar4 + 0x10) = (int)*(long *)((long)pOVar4 + 0x10) + -1;
          }
          else {
            _err_print_error("erase","./core/templates/list.h",0xe7,
                             "Condition \"p_I->data != this\" is true. Returning: false",0,0);
          }
        } while ((int)*(long *)((long)local_100 + 0x10) != 0);
        Memory::free_static(local_100,false);
      }
LAB_0010869e:
      local_100 = local_e8;
      local_e8 = (Object *)0x0;
      List<MethodInfo,DefaultAllocator>::~List((List<MethodInfo,DefaultAllocator> *)&local_e8);
      if ((local_100 != (Object *)0x0) && (*(int *)(local_100 + 0x10) != 0)) {
        pTVar10 = (TreeItem *)Tree::create_item(*(TreeItem **)(in_RDI + 0xe70),iVar7);
        local_f0 = (Object *)0x0;
        String::parse_latin1((String *)&local_f0,"");
        local_f8 = (Object *)0x0;
        String::parse_latin1((String *)&local_f8,"Attached Script");
        TTR((String *)&local_e8,(String *)&local_f8);
        TreeItem::set_text(pTVar10,0,(String *)&local_e8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
        if ((_update_method_tree()::{lambda()#2}::operator()()::sname == '\0') &&
           (iVar6 = __cxa_guard_acquire(&_update_method_tree()::{lambda()#2}::operator()()::sname),
           iVar6 != 0)) {
          _scs_create((char *)&_update_method_tree()::{lambda()#2}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_update_method_tree()::{lambda()#2}::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&_update_method_tree()::{lambda()#2}::operator()()::sname);
        }
        Window::get_editor_theme_icon((StringName *)&local_e8);
        TreeItem::set_icon((int)pTVar10,(Ref *)0x0);
        Ref<Texture2D>::unref((Ref<Texture2D> *)&local_e8);
        TreeItem::set_selectable((int)pTVar10,false);
        _create_method_tree_items((ConnectDialog *)in_RDI,(List *)&local_100,pTVar10);
      }
      List<MethodInfo,DefaultAllocator>::~List((List<MethodInfo,DefaultAllocator> *)&local_100);
    }
    cVar5 = BaseButton::is_pressed();
    if (cVar5 == '\0') {
      pSVar11 = (StringName *)(plVar8[1] + 0x20);
      if ((plVar8[1] == 0) && (pSVar11 = (StringName *)plVar8[0x23], pSVar11 == (StringName *)0x0))
      {
        pSVar11 = (StringName *)(**(code **)(*plVar8 + 0x40))(plVar8);
      }
      StringName::StringName((StringName *)&local_100,pSVar11);
      do {
        pTVar10 = (TreeItem *)Tree::create_item(*(TreeItem **)(in_RDI + 0xe70),iVar7);
        if (local_100 == (Object *)0x0) {
          local_f0 = (Object *)0x0;
        }
        else {
          pOVar4 = *(Object **)(local_100 + 8);
          local_f0 = (Object *)0x0;
          if (pOVar4 == (Object *)0x0) {
            if (*(long *)(local_100 + 0x10) != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_f0,(CowData *)(local_100 + 0x10));
            }
          }
          else {
            local_e0 = strlen((char *)pOVar4);
            local_e8 = pOVar4;
            String::parse_latin1((StrRange *)&local_f0);
          }
        }
        TreeItem::set_text(pTVar10,0,(StrRange *)&local_f0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
        if ((_update_method_tree()::{lambda()#3}::operator()()::sname == '\0') &&
           (iVar6 = __cxa_guard_acquire(&_update_method_tree()::{lambda()#3}::operator()()::sname),
           iVar6 != 0)) {
          _scs_create((char *)&_update_method_tree()::{lambda()#3}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_update_method_tree()::{lambda()#3}::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&_update_method_tree()::{lambda()#3}::operator()()::sname);
        }
        Window::get_editor_theme_icon((StringName *)&local_f8);
        cVar5 = Window::has_theme_icon(in_RDI,(StringName *)&local_100);
        if (cVar5 != '\0') {
          Window::get_editor_theme_icon((StringName *)&local_e8);
          pOVar4 = local_f8;
          pOVar13 = local_f8;
          if (local_e8 != local_f8) {
            local_f8 = local_e8;
            if (local_e8 == (Object *)0x0) {
              if (pOVar4 == (Object *)0x0) goto LAB_001088a0;
            }
            else {
              cVar5 = RefCounted::reference();
              if (cVar5 == '\0') {
                local_f8 = (Object *)0x0;
              }
              pOVar13 = local_e8;
              if (pOVar4 == (Object *)0x0) goto LAB_00108b1b;
            }
            cVar5 = RefCounted::unreference();
            pOVar13 = local_e8;
            if ((cVar5 != '\0') &&
               (cVar5 = predelete_handler(pOVar4), pOVar13 = local_e8, cVar5 != '\0')) {
              (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
              Memory::free_static(pOVar4,false);
              pOVar13 = local_e8;
            }
          }
LAB_00108b1b:
          if (((pOVar13 != (Object *)0x0) &&
              (cVar5 = RefCounted::unreference(), pOVar4 = local_e8, cVar5 != '\0')) &&
             (cVar5 = predelete_handler(local_e8), cVar5 != '\0')) {
            (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
            Memory::free_static(pOVar4,false);
          }
        }
LAB_001088a0:
        iVar6 = (int)pTVar10;
        TreeItem::set_icon(iVar6,(Ref *)0x0);
        TreeItem::set_selectable(iVar6,false);
        local_f0 = (Object *)0x0;
        ClassDB::get_method_list((StringName *)&local_100,(List *)&local_f0,true,false);
        _filter_method_list((List *)&local_e8,(MethodInfo *)in_RDI,(String *)&local_f0);
        if (local_f0 != (Object *)0x0) {
          do {
            pOVar4 = local_f0;
            pMVar2 = *(MethodInfo **)local_f0;
            if (pMVar2 == (MethodInfo *)0x0) goto LAB_0010897c;
            if ((Object *)*(long **)(pMVar2 + 0x80) == local_f0) {
              lVar12 = *(long *)(pMVar2 + 0x70);
              lVar3 = *(long *)(pMVar2 + 0x78);
              *(long *)local_f0 = lVar12;
              if (pMVar2 == *(MethodInfo **)((long)local_f0 + 8)) {
                *(long *)((long)local_f0 + 8) = lVar3;
              }
              if (lVar3 != 0) {
                *(long *)(lVar3 + 0x70) = lVar12;
                lVar12 = *(long *)(pMVar2 + 0x70);
              }
              if (lVar12 != 0) {
                *(long *)(lVar12 + 0x78) = lVar3;
              }
              MethodInfo::~MethodInfo(pMVar2);
              Memory::free_static(pMVar2,false);
              *(int *)((long)pOVar4 + 0x10) = (int)*(long *)((long)pOVar4 + 0x10) + -1;
            }
            else {
              _err_print_error("erase","./core/templates/list.h",0xe7,
                               "Condition \"p_I->data != this\" is true. Returning: false",0,0);
            }
          } while ((int)*(long *)((long)local_f0 + 0x10) != 0);
          Memory::free_static(local_f0,false);
        }
LAB_0010897c:
        local_f0 = local_e8;
        local_e8 = (Object *)0x0;
        List<MethodInfo,DefaultAllocator>::~List((List<MethodInfo,DefaultAllocator> *)&local_e8);
        if ((local_f0 == (Object *)0x0) || (*(int *)(local_f0 + 0x10) == 0)) {
          TreeItem::set_custom_color(iVar6,(Color *)0x0);
        }
        else {
          _create_method_tree_items((ConnectDialog *)in_RDI,(List *)&local_f0,pTVar10);
        }
        ClassDB::get_parent_class_nocheck((StringName *)&local_e8);
        if (local_100 == local_e8) {
          if ((StringName::configured != '\0') && (local_e8 != (Object *)0x0)) {
            StringName::unref();
          }
        }
        else {
          StringName::unref();
          local_100 = local_e8;
        }
        List<MethodInfo,DefaultAllocator>::~List((List<MethodInfo,DefaultAllocator> *)&local_f0);
        if (((local_f8 != (Object *)0x0) &&
            (cVar5 = RefCounted::unreference(), pOVar4 = local_f8, cVar5 != '\0')) &&
           (cVar5 = predelete_handler(local_f8), cVar5 != '\0')) {
          (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
          Memory::free_static(pOVar4,false);
        }
      } while (local_100 != (Object *)0x0);
      uVar9 = *(undefined8 *)(in_RDI + 0xe78);
      TreeItem::get_first_child();
      CanvasItem::set_visible(SUB81(uVar9,0));
      if ((StringName::configured != '\0') && (local_100 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodInfo::~MethodInfo(local_118);
      CowData<char32_t>::_unref(local_108);
      goto LAB_00108a65;
    }
    uVar9 = *(undefined8 *)(in_RDI + 0xe78);
    TreeItem::get_first_child();
    CanvasItem::set_visible(SUB81(uVar9,0));
    MethodInfo::~MethodInfo(local_118);
  }
  CowData<char32_t>::_unref(local_108);
LAB_00108a65:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ConnectDialog::_tree_node_selected() */

void __thiscall ConnectDialog::_tree_node_selected(ConnectDialog *this)

{
  long lVar1;
  char *__s;
  Node *pNVar2;
  long in_FS_OFFSET;
  undefined8 local_50;
  char *local_48;
  size_t local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  pNVar2 = (Node *)SceneTreeEditor::get_selected();
  if (pNVar2 == (Node *)0x0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    Node::get_path_to((Node *)&local_48,SUB81(*(undefined8 *)(this + 0xdd0),0));
    NodePath::operator=((NodePath *)(this + 0xe40),(NodePath *)&local_48);
    NodePath::~NodePath((NodePath *)&local_48);
    if (this[0xe38] == (ConnectDialog)0x0) {
      lVar1 = *(long *)(this + 0xe10);
      if (lVar1 == 0) {
        local_50 = 0;
      }
      else {
        __s = *(char **)(lVar1 + 8);
        local_50 = 0;
        if (__s == (char *)0x0) {
          if (*(long *)(lVar1 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_50,(CowData *)(lVar1 + 0x10));
          }
        }
        else {
          local_40 = strlen(__s);
          local_48 = __s;
          String::parse_latin1((StrRange *)&local_50);
        }
      }
      generate_method_callback_name
                ((ConnectDialog *)&local_48,*(Node **)(this + 0xdd0),(String *)&local_50,pNVar2);
      set_dst_method(this,(StringName *)&local_48);
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
    }
    _update_method_tree();
    _update_warning_label(this);
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      _update_ok_enabled(this);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ConnectDialog::_method_check_button_pressed(CheckButton const*) */

void __thiscall
ConnectDialog::_method_check_button_pressed(ConnectDialog *this,CheckButton *param_1)

{
  bool bVar1;
  String *pSVar2;
  long in_FS_OFFSET;
  undefined8 local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(CheckButton **)(this + 0xe88) == param_1) {
    pSVar2 = (String *)EditorSettings::get_singleton();
    bVar1 = (bool)BaseButton::is_pressed();
    Variant::Variant((Variant *)local_58,bVar1);
    local_68 = "show_script_methods_only";
    local_60 = 0x18;
  }
  else {
    if (*(CheckButton **)(this + 0xe90) != param_1) goto LAB_0010912e;
    pSVar2 = (String *)EditorSettings::get_singleton();
    bVar1 = (bool)BaseButton::is_pressed();
    Variant::Variant((Variant *)local_58,bVar1);
    local_68 = "show_compatible_methods_only";
    local_60 = 0x1c;
  }
  local_70 = 0;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "editor_metadata";
  local_78 = 0;
  local_60 = 0xf;
  String::parse_latin1((StrRange *)&local_78);
  EditorSettings::set_project_metadata(pSVar2,(String *)&local_78,(Variant *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
LAB_0010912e:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    _update_method_tree();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ConnectionsDock::update_tree() */

void ConnectionsDock::update_tree(void)

{
  uint uVar1;
  char *pcVar2;
  code *pcVar3;
  Ref *pRVar4;
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
  char cVar47;
  int iVar48;
  int iVar49;
  int iVar50;
  uint uVar51;
  int iVar52;
  long lVar53;
  long lVar54;
  Object *pOVar55;
  undefined8 uVar56;
  Variant *pVVar57;
  long *plVar58;
  Object *pOVar59;
  uint uVar60;
  long lVar61;
  long lVar62;
  ulong uVar63;
  StringName *in_RDI;
  String *pSVar64;
  uint uVar65;
  CowData<char32_t> *this;
  CowData<char32_t> *pCVar66;
  uint uVar67;
  StringName *pSVar68;
  long in_FS_OFFSET;
  undefined8 in_XMM1_Qa;
  String *local_260;
  Object *local_258;
  Object **local_248;
  CowData<char32_t> *local_238;
  String *local_1f0;
  undefined8 local_1e0;
  long local_198;
  long local_190;
  Object *local_188;
  long local_180;
  Object *local_178;
  Object *local_170;
  long *local_168;
  long local_160;
  long local_158;
  Dictionary local_150 [8];
  long *local_148;
  long local_140;
  Node local_138 [8];
  NodePath local_130 [8];
  undefined8 local_128;
  String local_120 [8];
  undefined8 local_118;
  undefined8 local_110;
  Object *local_108;
  undefined8 local_100;
  Object *local_f8;
  size_t local_f0;
  long local_e8;
  undefined8 local_e0;
  Callable local_d8 [16];
  uint local_c8;
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined8 local_98;
  long local_88 [2];
  int local_78 [8];
  ulong local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_198 = 0;
  cVar47 = Tree::is_anything_selected();
  if (cVar47 != '\0') {
    Tree::get_selected();
    TreeItem::get_text((int)(CowData<char32_t> *)local_b8);
    if (local_198 != local_b8._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
      local_198 = local_b8._0_8_;
      auVar41._8_8_ = 0;
      auVar41._0_8_ = local_b8._8_8_;
      local_b8 = auVar41 << 0x40;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  }
  Tree::clear();
  if (*(long *)(in_RDI + 0xa10) != 0) {
    iVar48 = Tree::create_item(*(TreeItem **)(in_RDI + 0xa18),0);
    lVar53 = EditorHelp::get_doc_data();
    (**(code **)(**(long **)(in_RDI + 0xa10) + 0x48))((CowData<char32_t> *)local_b8);
    StringName::StringName((StringName *)&local_190,(String *)local_b8,false);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
    (**(code **)(**(long **)(in_RDI + 0xa10) + 0x98))((Variant *)&local_58);
    local_188 = (Object *)0x0;
    lVar54 = Variant::get_validated_object();
    if (((lVar54 != 0) &&
        (pOVar55 = (Object *)__dynamic_cast(lVar54,&Object::typeinfo,&Script::typeinfo,0),
        pOVar55 != (Object *)0x0)) &&
       (local_188 = pOVar55, cVar47 = RefCounted::reference(), cVar47 == '\0')) {
      local_188 = (Object *)0x0;
    }
    if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
    }
    if (local_190 != 0) {
      do {
        pOVar55 = local_188;
        local_180 = 0;
        local_178 = (Object *)0x0;
        local_170 = (Object *)0x0;
        local_168 = (long *)0x0;
        local_258 = local_188;
        if (local_188 == (Object *)0x0) {
          auVar37._8_8_ = 0;
          auVar37._0_8_ = local_b8._8_8_;
          local_b8 = auVar37 << 0x40;
          if (*(char **)(local_190 + 8) == (char *)0x0) {
            if (*(long *)(local_190 + 0x10) != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)local_b8,(CowData *)(local_190 + 0x10));
              goto LAB_0010ae33;
            }
          }
          else {
            String::parse_latin1((String *)local_b8,*(char **)(local_190 + 8));
LAB_0010ae33:
            if (local_b8._0_8_ != 0) {
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_180);
              local_180 = local_b8._0_8_;
              auVar38._8_8_ = 0;
              auVar38._0_8_ = local_b8._8_8_;
              local_b8 = auVar38 << 0x40;
            }
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
          if (local_190 == 0) {
            auVar44._8_8_ = 0;
            auVar44._0_8_ = local_b8._8_8_;
            local_b8 = auVar44 << 0x40;
          }
          else {
            auVar39._8_8_ = 0;
            auVar39._0_8_ = local_b8._8_8_;
            local_b8 = auVar39 << 0x40;
            if (*(char **)(local_190 + 8) == (char *)0x0) {
              if (*(long *)(local_190 + 0x10) != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)local_b8,(CowData *)(local_190 + 0x10))
                ;
                local_258 = (Object *)local_b8._0_8_;
              }
            }
            else {
              String::parse_latin1((String *)local_b8,*(char **)(local_190 + 8));
              local_258 = (Object *)local_b8._0_8_;
            }
          }
          if (local_178 != local_258) {
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
            local_178 = (Object *)local_b8._0_8_;
            auVar40._8_8_ = 0;
            auVar40._0_8_ = local_b8._8_8_;
            local_b8 = auVar40 << 0x40;
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
          if ((*(long *)(lVar53 + 0x10) != 0) && (*(int *)(lVar53 + 0x34) != 0)) {
            uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar53 + 0x30) * 4);
            uVar63 = CONCAT44(0,uVar1);
            lVar54 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar53 + 0x30) * 8);
            uVar51 = String::hash();
            lVar61 = *(long *)(lVar53 + 0x18);
            uVar60 = 1;
            if (uVar51 != 0) {
              uVar60 = uVar51;
            }
            auVar9._8_8_ = 0;
            auVar9._0_8_ = (ulong)uVar60 * lVar54;
            auVar21._8_8_ = 0;
            auVar21._0_8_ = uVar63;
            lVar62 = SUB168(auVar9 * auVar21,8);
            uVar51 = *(uint *)(lVar61 + lVar62 * 4);
            uVar65 = SUB164(auVar9 * auVar21,8);
            if (uVar51 != 0) {
              uVar67 = 0;
              do {
                if (uVar51 == uVar60) {
                  cVar47 = String::operator==((String *)
                                              (*(long *)(*(long *)(lVar53 + 0x10) + lVar62 * 8) +
                                              0x10),(String *)&local_178);
                  if (cVar47 != '\0') {
                    if (*(long *)(*(long *)(lVar53 + 0x10) + (ulong)uVar65 * 8) != 0)
                    goto LAB_0010b2e7;
                    break;
                  }
                  lVar61 = *(long *)(lVar53 + 0x18);
                }
                uVar67 = uVar67 + 1;
                auVar10._8_8_ = 0;
                auVar10._0_8_ = (ulong)(uVar65 + 1) * lVar54;
                auVar22._8_8_ = 0;
                auVar22._0_8_ = uVar63;
                lVar62 = SUB168(auVar10 * auVar22,8);
                uVar51 = *(uint *)(lVar61 + lVar62 * 4);
                uVar65 = SUB164(auVar10 * auVar22,8);
                if ((uVar51 == 0) ||
                   (auVar11._8_8_ = 0, auVar11._0_8_ = (ulong)uVar51 * lVar54, auVar23._8_8_ = 0,
                   auVar23._0_8_ = uVar63, auVar12._8_8_ = 0,
                   auVar12._0_8_ = (ulong)((uVar1 + uVar65) - SUB164(auVar11 * auVar23,8)) * lVar54,
                   auVar24._8_8_ = 0, auVar24._0_8_ = uVar63, SUB164(auVar12 * auVar24,8) < uVar67))
                break;
              } while( true );
            }
          }
          auVar46._8_8_ = 0;
          auVar46._0_8_ = local_b8._8_8_;
          local_b8 = auVar46 << 0x40;
          if (local_178 != (Object *)0x0) {
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
            local_178 = (Object *)0x0;
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
LAB_0010b2e7:
          cVar47 = Control::has_theme_icon(in_RDI,(StringName *)&local_190);
          if (cVar47 != '\0') {
            Control::get_editor_theme_icon((StringName *)local_b8);
            pOVar55 = local_170;
            if ((Object *)local_b8._0_8_ != local_170) {
              local_170 = (Object *)local_b8._0_8_;
              if (((Object *)local_b8._0_8_ != (Object *)0x0) &&
                 (cVar47 = RefCounted::reference(), cVar47 == '\0')) {
                local_170 = (Object *)0x0;
              }
              if (((pOVar55 != (Object *)0x0) &&
                  (cVar47 = RefCounted::unreference(), cVar47 != '\0')) &&
                 (cVar47 = predelete_handler(pOVar55), cVar47 != '\0')) {
                (**(code **)(*(long *)pOVar55 + 0x140))(pOVar55);
                Memory::free_static(pOVar55,false);
              }
            }
            Ref<Texture2D>::unref((Ref<Texture2D> *)local_b8);
          }
          ClassDB::get_signal_list((StringName *)&local_190,(List *)&local_168,true);
          ClassDB::get_parent_class((StringName *)local_b8);
          if (local_190 == local_b8._0_8_) {
            if ((StringName::configured != '\0') && (local_b8._0_8_ != 0)) {
              StringName::unref();
            }
          }
          else {
            StringName::unref();
            local_190 = local_b8._0_8_;
          }
        }
        else {
          (**(code **)(*(long *)local_188 + 0x1e0))((String *)&local_e8);
          if (local_e8 == 0) {
            auVar42._8_8_ = 0;
            auVar42._0_8_ = local_b8._8_8_;
            local_b8 = auVar42 << 0x40;
LAB_0010b0f4:
            CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
            if ((StringName::configured != '\0') && (local_e8 != 0)) {
              StringName::unref();
            }
LAB_0010b11c:
            lVar54 = 0;
LAB_00109545:
            Resource::get_path();
            String::get_file();
            if (local_b8._0_8_ != lVar54) {
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_180);
              local_180 = local_b8._0_8_;
              auVar31._8_8_ = 0;
              auVar31._0_8_ = local_b8._8_8_;
              local_b8 = auVar31 << 0x40;
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
          }
          else {
            auVar29._8_8_ = 0;
            auVar29._0_8_ = local_b8._8_8_;
            local_b8 = auVar29 << 0x40;
            if (*(char **)(local_e8 + 8) == (char *)0x0) {
              if (*(long *)(local_e8 + 0x10) == 0) goto LAB_0010b0f4;
              CowData<char32_t>::_ref((CowData<char32_t> *)local_b8,(CowData *)(local_e8 + 0x10));
            }
            else {
              String::parse_latin1((String *)local_b8,*(char **)(local_e8 + 8));
            }
            if (local_b8._0_8_ == 0) goto LAB_0010b0f4;
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_180);
            lVar54 = local_b8._0_8_;
            auVar30._8_8_ = 0;
            auVar30._0_8_ = local_b8._8_8_;
            local_b8 = auVar30 << 0x40;
            local_180 = lVar54;
            CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
            if ((StringName::configured != '\0') && (local_e8 != 0)) {
              StringName::unref();
            }
            if (lVar54 == 0) goto LAB_0010b11c;
            if (*(uint *)(lVar54 + -8) < 2) goto LAB_00109545;
          }
          (**(code **)(*(long *)pOVar55 + 0x1e0))((String *)&local_e8);
          if (local_e8 == 0) {
            auVar43._8_8_ = 0;
            auVar43._0_8_ = local_b8._8_8_;
            local_b8 = auVar43 << 0x40;
LAB_0010b134:
            pOVar59 = (Object *)0x0;
          }
          else {
            auVar32._8_8_ = 0;
            auVar32._0_8_ = local_b8._8_8_;
            local_b8 = auVar32 << 0x40;
            if (*(char **)(local_e8 + 8) == (char *)0x0) {
              if (*(long *)(local_e8 + 0x10) == 0) goto LAB_0010b134;
              CowData<char32_t>::_ref((CowData<char32_t> *)local_b8,(CowData *)(local_e8 + 0x10));
              pOVar59 = (Object *)local_b8._0_8_;
            }
            else {
              String::parse_latin1((String *)local_b8,*(char **)(local_e8 + 8));
              pOVar59 = (Object *)local_b8._0_8_;
            }
          }
          if (local_178 != pOVar59) {
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
            local_178 = (Object *)local_b8._0_8_;
            auVar33._8_8_ = 0;
            auVar33._0_8_ = local_b8._8_8_;
            local_b8 = auVar33 << 0x40;
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
          if ((StringName::configured != '\0') && (local_e8 != 0)) {
            StringName::unref();
          }
          if ((local_178 == (Object *)0x0) || (*(uint *)(local_178 + -8) < 2)) {
            Resource::get_path();
            String::trim_prefix((char *)&local_f8);
            local_e8 = 0;
            String::parse_latin1((String *)&local_e8,"\"");
            String::quote((String *)local_b8);
            if (local_178 != (Object *)local_b8._0_8_) {
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
              local_178 = (Object *)local_b8._0_8_;
              auVar34._8_8_ = 0;
              auVar34._0_8_ = local_b8._8_8_;
              local_b8 = auVar34 << 0x40;
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
            if ((local_178 != (Object *)0x0) && (1 < *(uint *)(local_178 + -8))) goto LAB_0010b085;
          }
          else {
LAB_0010b085:
            if ((*(long *)(lVar53 + 0x10) != 0) && (*(int *)(lVar53 + 0x34) != 0)) {
              uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar53 + 0x30) * 4);
              uVar63 = CONCAT44(0,uVar1);
              lVar54 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar53 + 0x30) * 8);
              uVar51 = String::hash();
              lVar61 = *(long *)(lVar53 + 0x18);
              uVar60 = 1;
              if (uVar51 != 0) {
                uVar60 = uVar51;
              }
              auVar13._8_8_ = 0;
              auVar13._0_8_ = (ulong)uVar60 * lVar54;
              auVar25._8_8_ = 0;
              auVar25._0_8_ = uVar63;
              lVar62 = SUB168(auVar13 * auVar25,8);
              uVar51 = *(uint *)(lVar61 + lVar62 * 4);
              uVar65 = SUB164(auVar13 * auVar25,8);
              if (uVar51 != 0) {
                uVar67 = 0;
                do {
                  if (uVar51 == uVar60) {
                    cVar47 = String::operator==((String *)
                                                (*(long *)(*(long *)(lVar53 + 0x10) + lVar62 * 8) +
                                                0x10),(String *)&local_178);
                    if (cVar47 != '\0') {
                      if (*(long *)(*(long *)(lVar53 + 0x10) + (ulong)uVar65 * 8) != 0)
                      goto LAB_00109744;
                      break;
                    }
                    lVar61 = *(long *)(lVar53 + 0x18);
                  }
                  uVar67 = uVar67 + 1;
                  auVar14._8_8_ = 0;
                  auVar14._0_8_ = (ulong)(uVar65 + 1) * lVar54;
                  auVar26._8_8_ = 0;
                  auVar26._0_8_ = uVar63;
                  lVar62 = SUB168(auVar14 * auVar26,8);
                  uVar51 = *(uint *)(lVar61 + lVar62 * 4);
                  uVar65 = SUB164(auVar14 * auVar26,8);
                  if ((uVar51 == 0) ||
                     (auVar15._8_8_ = 0, auVar15._0_8_ = (ulong)uVar51 * lVar54, auVar27._8_8_ = 0,
                     auVar27._0_8_ = uVar63, auVar16._8_8_ = 0,
                     auVar16._0_8_ =
                          (ulong)((uVar1 + uVar65) - SUB164(auVar15 * auVar27,8)) * lVar54,
                     auVar28._8_8_ = 0, auVar28._0_8_ = uVar63, SUB164(auVar16 * auVar28,8) < uVar67
                     )) break;
                } while( true );
              }
            }
            auVar45._8_8_ = 0;
            auVar45._0_8_ = local_b8._8_8_;
            local_b8 = auVar45 << 0x40;
            if (local_178 != (Object *)0x0) {
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
              local_178 = (Object *)0x0;
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
          }
LAB_00109744:
          local_248 = &local_108;
          Resource::get_path();
          EditorData::get_script_icon((String *)local_b8);
          pOVar59 = local_170;
          if ((Object *)local_b8._0_8_ != local_170) {
            local_170 = (Object *)local_b8._0_8_;
            if (((Object *)local_b8._0_8_ != (Object *)0x0) &&
               (cVar47 = RefCounted::reference(), cVar47 == '\0')) {
              local_170 = (Object *)0x0;
            }
            if (((pOVar59 != (Object *)0x0) && (cVar47 = RefCounted::unreference(), cVar47 != '\0'))
               && (cVar47 = predelete_handler(pOVar59), cVar47 != '\0')) {
              (**(code **)(*(long *)pOVar59 + 0x140))(pOVar59);
              Memory::free_static(pOVar59,false);
            }
          }
          Ref<Texture2D>::unref((Ref<Texture2D> *)local_b8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
          if ((local_170 == (Object *)0x0) &&
             (cVar47 = Control::has_theme_icon(in_RDI,(StringName *)&local_190), cVar47 != '\0')) {
            Control::get_editor_theme_icon((StringName *)local_b8);
            pOVar59 = local_170;
            if ((Object *)local_b8._0_8_ != local_170) {
              local_170 = (Object *)local_b8._0_8_;
              if (((Object *)local_b8._0_8_ != (Object *)0x0) &&
                 (cVar47 = RefCounted::reference(), cVar47 == '\0')) {
                local_170 = (Object *)0x0;
              }
              if (((pOVar59 != (Object *)0x0) &&
                  (cVar47 = RefCounted::unreference(), cVar47 != '\0')) &&
                 (cVar47 = predelete_handler(pOVar59), cVar47 != '\0')) {
                (**(code **)(*(long *)pOVar59 + 0x140))(pOVar59);
                Memory::free_static(pOVar59,false);
              }
            }
            Ref<Texture2D>::unref((Ref<Texture2D> *)local_b8);
          }
          (**(code **)(*(long *)pOVar55 + 0x298))
                    (pOVar55,(List<MethodInfo,DefaultAllocator> *)&local_168);
          (**(code **)(*(long *)pOVar55 + 0x1d8))(local_248);
          if (local_108 == (Object *)0x0) {
LAB_0010980d:
            local_188 = (Object *)0x0;
LAB_00109819:
            cVar47 = RefCounted::unreference();
joined_r0x0010adb4:
            if ((cVar47 != '\0') && (cVar47 = predelete_handler(pOVar55), cVar47 != '\0')) {
              (**(code **)(*(long *)pOVar55 + 0x140))(pOVar55);
              Memory::free_static(pOVar55,false);
            }
            if (local_108 == (Object *)0x0) goto joined_r0x0010b36d;
          }
          else {
            local_f8 = (Object *)0x0;
            (**(code **)(*(long *)local_108 + 0x298))();
            local_98 = 2;
            local_b8 = (undefined1  [16])0x0;
            local_a8 = (undefined1  [16])0x0;
            if ((local_f8 == (Object *)0x0) || (lVar54 = *(long *)local_f8, lVar54 == 0)) {
              if (local_168 != (long *)0x0) {
                local_238 = (CowData<char32_t> *)0x0;
                pSVar64 = (String *)*local_168;
                if (pSVar64 != (String *)0x0) goto LAB_0010ab01;
              }
            }
            else {
              do {
                HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::insert
                          ((String *)&local_e8);
                lVar54 = *(long *)(lVar54 + 0x70);
              } while (lVar54 != 0);
              local_238 = (CowData<char32_t> *)local_b8._0_8_;
              if ((local_168 != (long *)0x0) &&
                 (pSVar64 = (String *)*local_168, pSVar64 != (String *)0x0)) {
LAB_0010ab01:
                if (local_238 == (CowData<char32_t> *)0x0) {
                  do {
                    pSVar64 = *(String **)(pSVar64 + 0x70);
                  } while (pSVar64 != (String *)0x0);
                  goto LAB_0010ad6d;
                }
                do {
                  if (local_98._4_4_ != 0) {
                    uVar1 = *(uint *)(hash_table_size_primes + (local_98 & 0xffffffff) * 4);
                    lVar54 = *(long *)(hash_table_size_primes_inv + (local_98 & 0xffffffff) * 8);
                    uVar51 = String::hash();
                    uVar63 = CONCAT44(0,uVar1);
                    uVar56 = local_a8._8_8_;
                    uVar60 = 1;
                    if (uVar51 != 0) {
                      uVar60 = uVar51;
                    }
                    uVar65 = 0;
                    auVar5._8_8_ = 0;
                    auVar5._0_8_ = (ulong)uVar60 * lVar54;
                    auVar17._8_8_ = 0;
                    auVar17._0_8_ = uVar63;
                    lVar61 = SUB168(auVar5 * auVar17,8);
                    uVar51 = *(uint *)(local_a8._8_8_ + lVar61 * 4);
                    if (uVar51 != 0) {
                      iVar52 = SUB164(auVar5 * auVar17,8);
                      do {
                        if (uVar51 == uVar60) {
                          cVar47 = String::operator==((String *)
                                                      (local_238 +
                                                      (ulong)*(uint *)(local_b8._8_8_ + lVar61 * 4)
                                                      * 8),pSVar64);
                          plVar58 = local_168;
                          if (cVar47 != '\0') {
                            if (local_168 != (long *)0x0) {
                              if (local_168 == *(long **)(pSVar64 + 0x80)) {
                                lVar54 = *(long *)(pSVar64 + 0x70);
                                if (pSVar64 == (String *)*local_168) {
                                  *local_168 = lVar54;
                                }
                                lVar61 = *(long *)(pSVar64 + 0x78);
                                if (pSVar64 == (String *)local_168[1]) {
                                  local_168[1] = lVar61;
                                }
                                if (lVar61 != 0) {
                                  *(long *)(lVar61 + 0x70) = lVar54;
                                  lVar54 = *(long *)(pSVar64 + 0x70);
                                }
                                if (lVar54 != 0) {
                                  *(long *)(lVar54 + 0x78) = lVar61;
                                }
                                MethodInfo::~MethodInfo((MethodInfo *)pSVar64);
                                Memory::free_static(pSVar64,false);
                                *(int *)(plVar58 + 2) = (int)plVar58[2] + -1;
                              }
                              else {
                                _err_print_error("erase","./core/templates/list.h",0xe7,
                                                 "Condition \"p_I->data != this\" is true. Returning: false"
                                                 ,0,0);
                              }
                              if ((int)local_168[2] == 0) {
                                Memory::free_static(local_168,false);
                                local_168 = (long *)0x0;
                              }
                            }
                            break;
                          }
                        }
                        uVar65 = uVar65 + 1;
                        auVar6._8_8_ = 0;
                        auVar6._0_8_ = (ulong)(iVar52 + 1) * lVar54;
                        auVar18._8_8_ = 0;
                        auVar18._0_8_ = uVar63;
                        lVar61 = SUB168(auVar6 * auVar18,8);
                        uVar51 = *(uint *)(uVar56 + lVar61 * 4);
                        iVar52 = SUB164(auVar6 * auVar18,8);
                        if ((uVar51 == 0) ||
                           (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar51 * lVar54,
                           auVar19._8_8_ = 0, auVar19._0_8_ = uVar63, auVar8._8_8_ = 0,
                           auVar8._0_8_ = (ulong)((uVar1 + iVar52) - SUB164(auVar7 * auVar19,8)) *
                                          lVar54, auVar20._8_8_ = 0, auVar20._0_8_ = uVar63,
                           SUB164(auVar8 * auVar20,8) < uVar65)) break;
                      } while( true );
                    }
                  }
                  pSVar64 = *(String **)(pSVar64 + 0x70);
                } while (pSVar64 != (String *)0x0);
              }
              if (local_238 != (CowData<char32_t> *)0x0) {
                uVar63 = (ulong)local_98._4_4_;
                uVar56 = local_a8._8_8_;
                if (local_98._4_4_ != 0) {
                  if (*(uint *)(hash_table_size_primes + (local_98 & 0xffffffff) * 4) != 0) {
                    memset((void *)local_a8._8_8_,0,
                           (ulong)*(uint *)(hash_table_size_primes + (local_98 & 0xffffffff) * 4) *
                           4);
                  }
                  this = local_238;
                  do {
                    pCVar66 = this + 8;
                    CowData<char32_t>::_unref(this);
                    this = pCVar66;
                  } while (local_238 + uVar63 * 8 != pCVar66);
                }
                Memory::free_static(local_238,false);
                Memory::free_static((void *)local_a8._0_8_,false);
                Memory::free_static((void *)local_b8._8_8_,false);
                Memory::free_static((void *)uVar56,false);
              }
            }
LAB_0010ad6d:
            List<MethodInfo,DefaultAllocator>::~List((List<MethodInfo,DefaultAllocator> *)&local_f8)
            ;
            if (pOVar55 != local_108) {
              local_188 = local_108;
              if (local_108 == (Object *)0x0) goto LAB_00109819;
              cVar47 = RefCounted::reference();
              if (cVar47 == '\0') goto LAB_0010980d;
              cVar47 = RefCounted::unreference();
              goto joined_r0x0010adb4;
            }
          }
          cVar47 = RefCounted::unreference();
          pOVar55 = local_108;
          if ((cVar47 != '\0') && (cVar47 = predelete_handler(local_108), cVar47 != '\0')) {
            (**(code **)(*(long *)pOVar55 + 0x140))(pOVar55);
            Memory::free_static(pOVar55,false);
          }
        }
joined_r0x0010b36d:
        if (local_170 == (Object *)0x0) {
          if ((update_tree()::{lambda()#1}::operator()()::sname == '\0') &&
             (iVar52 = __cxa_guard_acquire(&update_tree()::{lambda()#1}::operator()()::sname),
             iVar52 != 0)) {
            _scs_create((char *)&update_tree()::{lambda()#1}::operator()()::sname,true);
            __cxa_atexit(StringName::~StringName,&update_tree()::{lambda()#1}::operator()()::sname,
                         &__dso_handle);
            __cxa_guard_release(&update_tree()::{lambda()#1}::operator()()::sname);
          }
          Control::get_editor_theme_icon((StringName *)local_b8);
          pOVar55 = local_170;
          if ((Object *)local_b8._0_8_ != local_170) {
            local_170 = (Object *)local_b8._0_8_;
            if (((Object *)local_b8._0_8_ != (Object *)0x0) &&
               (cVar47 = RefCounted::reference(), cVar47 == '\0')) {
              local_170 = (Object *)0x0;
            }
            if (((pOVar55 != (Object *)0x0) && (cVar47 = RefCounted::unreference(), cVar47 != '\0'))
               && (cVar47 = predelete_handler(pOVar55), cVar47 != '\0')) {
              (**(code **)(*(long *)pOVar55 + 0x140))(pOVar55);
              Memory::free_static(pOVar55,false);
            }
          }
          Ref<Texture2D>::unref((Ref<Texture2D> *)local_b8);
        }
        if (local_168 != (long *)0x0) {
          if ((int)local_168[2] == 0) {
            local_1e0 = 0;
          }
          else {
            List<MethodInfo,DefaultAllocator>::sort_custom<Comparator<MethodInfo>>
                      ((List<MethodInfo,DefaultAllocator> *)&local_168);
            local_1e0 = Tree::create_item(*(TreeItem **)(in_RDI + 0xa18),iVar48);
            auVar35._8_8_ = 0;
            auVar35._0_8_ = local_b8._8_8_;
            local_b8 = auVar35 << 0x40;
            if (local_180 != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)local_b8,(CowData *)&local_180);
            }
            TreeItem::set_text(local_1e0,0,(CowData<char32_t> *)local_b8);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
            local_e8 = 0;
            String::parse_latin1((String *)&local_e8,"|");
            operator+((char *)&local_f8,(String *)"class|");
            String::operator+((String *)local_b8,(String *)&local_f8);
            iVar52 = (int)local_1e0;
            TreeItem::set_tooltip_text(iVar52,(String *)0x0);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
            TreeItem::set_icon(iVar52,(Ref *)0x0);
            TreeItem::set_selectable(iVar52,false);
            TreeItem::set_editable(iVar52,false);
            if ((update_tree()::{lambda()#2}::operator()()::sname == '\0') &&
               (iVar50 = __cxa_guard_acquire(&update_tree()::{lambda()#2}::operator()()::sname),
               iVar50 != 0)) {
              _scs_create((char *)&update_tree()::{lambda()#2}::operator()()::sname,true);
              __cxa_atexit(StringName::~StringName,&update_tree()::{lambda()#2}::operator()()::sname
                           ,&__dso_handle);
              __cxa_guard_release(&update_tree()::{lambda()#2}::operator()()::sname);
            }
            local_58 = Control::get_theme_color
                                 (in_RDI,(StringName *)
                                         &update_tree()::{lambda()#2}::operator()()::sname);
            local_50 = in_XMM1_Qa;
            TreeItem::set_custom_bg_color(iVar52,(Color *)0x0,SUB81((Variant *)&local_58,0));
            Variant::Variant((Variant *)&local_58,(String *)&local_178);
            TreeItem::set_metadata(iVar52,(Variant *)0x0);
            if (Variant::needs_deinit[(int)local_58] != '\0') {
              Variant::_clear_internal();
            }
            if (local_168 == (long *)0x0) goto LAB_0010a718;
          }
          pSVar64 = (String *)*local_168;
          if (pSVar64 != (String *)0x0) {
            do {
              while( true ) {
                StringName::StringName((StringName *)&local_160,pSVar64,false);
                LineEdit::get_text();
                if (local_160 == 0) {
                  local_e8 = 0;
                }
                else {
                  pcVar2 = *(char **)(local_160 + 8);
                  local_e8 = 0;
                  if (pcVar2 == (char *)0x0) {
                    if (*(long *)(local_160 + 0x10) != 0) {
                      CowData<char32_t>::_ref
                                ((CowData<char32_t> *)&local_e8,(CowData *)(local_160 + 0x10));
                    }
                  }
                  else {
                    local_b8._8_8_ = strlen(pcVar2);
                    local_b8._0_8_ = pcVar2;
                    String::parse_latin1((StrRange *)&local_e8);
                  }
                }
                cVar47 = String::is_subsequence_ofn((String *)&local_f8);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
                if (cVar47 != '\0') break;
                if (StringName::configured != '\0') {
LAB_00109ac0:
                  if (local_160 != 0) {
                    StringName::unref();
                  }
                }
                pSVar64 = *(String **)(pSVar64 + 0x70);
                if (pSVar64 == (String *)0x0) goto LAB_0010a718;
              }
              local_100 = 0;
              uVar56 = Tree::create_item(*(TreeItem **)(in_RDI + 0xa18),(int)local_1e0);
              ConnectDialog::get_signature((MethodInfo *)&local_158,*(Vector **)(in_RDI + 0xa28));
              auVar36._8_8_ = 0;
              auVar36._0_8_ = local_b8._8_8_;
              local_b8 = auVar36 << 0x40;
              if (local_158 != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)local_b8,(CowData *)&local_158);
              }
              TreeItem::set_text(uVar56,0,(CowData<char32_t> *)local_b8);
              CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
              cVar47 = String::operator==((String *)&local_158,(String *)&local_198);
              iVar52 = (int)uVar56;
              if (cVar47 != '\0') {
                TreeItem::select(iVar52);
                String::parse_latin1((String *)&local_198,"");
              }
              Dictionary::Dictionary(local_150);
              Variant::Variant((Variant *)&local_58,(String *)&local_178);
              Variant::Variant((Variant *)local_78,"class");
              pVVar57 = (Variant *)Dictionary::operator[]((Variant *)local_150);
              if (pVVar57 != (Variant *)&local_58) {
                if (Variant::needs_deinit[*(int *)pVVar57] != '\0') {
                  Variant::_clear_internal();
                }
                *(undefined4 *)pVVar57 = 0;
                *(int *)pVVar57 = (int)local_58;
                *(undefined8 *)(pVVar57 + 8) = local_50;
                *(undefined8 *)(pVVar57 + 0x10) = uStack_48;
                local_58 = local_58 & 0xffffffff00000000;
              }
              if (Variant::needs_deinit[local_78[0]] != '\0') {
                Variant::_clear_internal();
              }
              if (Variant::needs_deinit[(int)local_58] != '\0') {
                Variant::_clear_internal();
              }
              Variant::Variant((Variant *)&local_58,(StringName *)&local_160);
              Variant::Variant((Variant *)local_78,"name");
              pVVar57 = (Variant *)Dictionary::operator[]((Variant *)local_150);
              if (pVVar57 != (Variant *)&local_58) {
                if (Variant::needs_deinit[*(int *)pVVar57] != '\0') {
                  Variant::_clear_internal();
                }
                *(undefined4 *)pVVar57 = 0;
                *(int *)pVVar57 = (int)local_58;
                *(undefined8 *)(pVVar57 + 8) = local_50;
                *(undefined8 *)(pVVar57 + 0x10) = uStack_48;
                local_58 = local_58 & 0xffffffff00000000;
              }
              if (Variant::needs_deinit[local_78[0]] != '\0') {
                Variant::_clear_internal();
              }
              if (Variant::needs_deinit[(int)local_58] != '\0') {
                Variant::_clear_internal();
              }
              Variant::Variant((Variant *)&local_58,(Vector *)&local_108);
              Variant::Variant((Variant *)local_78,"args");
              pVVar57 = (Variant *)Dictionary::operator[]((Variant *)local_150);
              if (pVVar57 != (Variant *)&local_58) {
                if (Variant::needs_deinit[*(int *)pVVar57] != '\0') {
                  Variant::_clear_internal();
                }
                *(undefined4 *)pVVar57 = 0;
                *(int *)pVVar57 = (int)local_58;
                *(undefined8 *)(pVVar57 + 8) = local_50;
                *(undefined8 *)(pVVar57 + 0x10) = uStack_48;
                local_58 = local_58 & 0xffffffff00000000;
              }
              if (Variant::needs_deinit[local_78[0]] != '\0') {
                Variant::_clear_internal();
              }
              if (Variant::needs_deinit[(int)local_58] != '\0') {
                Variant::_clear_internal();
              }
              Variant::Variant((Variant *)&local_58,local_150);
              TreeItem::set_metadata(iVar52,(Variant *)0x0);
              if (Variant::needs_deinit[(int)local_58] != '\0') {
                Variant::_clear_internal();
              }
              if ((update_tree()::{lambda()#3}::operator()()::sname == '\0') &&
                 (iVar50 = __cxa_guard_acquire(&update_tree()::{lambda()#3}::operator()()::sname),
                 iVar50 != 0)) {
                _scs_create((char *)&update_tree()::{lambda()#3}::operator()()::sname,true);
                __cxa_atexit(StringName::~StringName,
                             &update_tree()::{lambda()#3}::operator()()::sname,&__dso_handle);
                __cxa_guard_release(&update_tree()::{lambda()#3}::operator()()::sname);
              }
              Control::get_editor_theme_icon((StringName *)local_b8);
              TreeItem::set_icon(iVar52,(Ref *)0x0);
              Ref<Texture2D>::unref((Ref<Texture2D> *)local_b8);
              if (local_160 == 0) {
                local_e8 = 0;
              }
              else {
                local_e8 = 0;
                if (*(char **)(local_160 + 8) == (char *)0x0) {
                  if (*(long *)(local_160 + 0x10) != 0) {
                    CowData<char32_t>::_ref
                              ((CowData<char32_t> *)&local_e8,(CowData *)(local_160 + 0x10));
                  }
                }
                else {
                  String::parse_latin1((String *)&local_e8,*(char **)(local_160 + 8));
                }
              }
              local_110 = 0;
              local_b8._8_8_ = 1;
              local_b8._0_8_ = &_LC169;
              String::parse_latin1((StrRange *)&local_110);
              operator+((char *)&local_118,(String *)"signal|");
              String::operator+((String *)&local_f8,(String *)&local_118);
              String::operator+((String *)local_b8,(String *)&local_f8);
              TreeItem::set_tooltip_text(iVar52,(String *)0x0);
              CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
              local_148 = (long *)0x0;
              (**(code **)(**(long **)(in_RDI + 0xa10) + 0xe8))
                        (*(long **)(in_RDI + 0xa10),(StringName *)&local_160,
                         (List<Object::Connection,DefaultAllocator> *)&local_148);
              if ((local_148 != (long *)0x0) &&
                 (pSVar68 = (StringName *)*local_148, pSVar68 != (StringName *)0x0)) {
                do {
                  StringName::StringName((StringName *)&local_e8,pSVar68);
                  local_e0 = *(undefined8 *)(pSVar68 + 8);
                  Callable::Callable(local_d8,(Callable *)(pSVar68 + 0x10));
                  local_c8 = *(uint *)(pSVar68 + 0x20);
                  if ((local_c8 & 2) != 0) {
                    ConnectDialog::ConnectionData::ConnectionData
                              ((ConnectionData *)local_b8,(Connection *)&local_e8);
                    if ((local_b8._8_8_ == 0) ||
                       (lVar54 = __dynamic_cast(local_b8._8_8_,&Object::typeinfo,&Node::typeinfo,0),
                       lVar54 == 0)) {
                      ConnectDialog::ConnectionData::~ConnectionData((ConnectionData *)local_b8);
                    }
                    else {
                      local_110 = 0;
                      local_f8 = (Object *)&_LC174;
                      local_f0 = 2;
                      String::parse_latin1((StrRange *)&local_110);
                      if (local_a8._8_8_ == 0) {
                        local_118 = 0;
                      }
                      else {
                        pcVar2 = *(char **)(local_a8._8_8_ + 8);
                        local_118 = 0;
                        if (pcVar2 == (char *)0x0) {
                          if (*(long *)(local_a8._8_8_ + 0x10) != 0) {
                            CowData<char32_t>::_ref
                                      ((CowData<char32_t> *)&local_118,
                                       (CowData *)(local_a8._8_8_ + 0x10));
                          }
                        }
                        else {
                          local_f0 = strlen(pcVar2);
                          local_f8 = (Object *)pcVar2;
                          String::parse_latin1((StrRange *)&local_118);
                        }
                      }
                      local_128 = 0;
                      local_f8 = (Object *)&_LC175;
                      local_f0 = 4;
                      String::parse_latin1((StrRange *)&local_128);
                      Node::get_path_to(local_138,SUB81(*(undefined8 *)(in_RDI + 0xa10),0));
                      NodePath::operator_cast_to_String(local_130);
                      String::operator+(local_120,(String *)local_130);
                      String::operator+((String *)&local_f8,local_120);
                      String::operator+((String *)&local_140,(String *)&local_f8);
                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
                      CowData<char32_t>::_unref((CowData<char32_t> *)local_120);
                      CowData<char32_t>::_unref((CowData<char32_t> *)local_130);
                      NodePath::~NodePath((NodePath *)local_138);
                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
                      if ((local_98 & 1) != 0) {
                        String::operator+=((String *)&local_140," (deferred)");
                      }
                      if ((local_98 & 4) != 0) {
                        String::operator+=((String *)&local_140," (one-shot)");
                      }
                      if ((int)local_98._4_4_ < 1) {
                        if (local_88[0] != 0) {
                          String::operator+=((String *)&local_140," binds(");
                          for (lVar54 = 0;
                              (local_88[0] != 0 && (lVar54 < *(long *)(local_88[0] + -8)));
                              lVar54 = lVar54 + 1) {
                            if (lVar54 != 0) {
                              String::operator+=((String *)&local_140,", ");
                            }
                            if (local_88[0] == 0) {
                              lVar61 = 0;
LAB_0010a66c:
                              _err_print_index_error
                                        ("get","./core/templates/cowdata.h",0xdb,lVar54,lVar61,
                                         "p_index","size()","",false,true);
                              _err_flush_stdout();
                    /* WARNING: Does not return */
                              pcVar3 = (code *)invalidInstructionException();
                              (*pcVar3)();
                            }
                            lVar61 = *(long *)(local_88[0] + -8);
                            if (lVar61 <= lVar54) goto LAB_0010a66c;
                            Variant::operator_cast_to_String((Variant *)&local_f8);
                            String::operator+=((String *)&local_140,(String *)&local_f8);
                            CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
                          }
                          String::operator+=((String *)&local_140,")");
                        }
                      }
                      else {
                        local_110 = 0;
                        local_f8 = (Object *)&_LC134;
                        local_f0 = 1;
                        String::parse_latin1((StrRange *)&local_110);
                        itos((long)local_120);
                        operator+((char *)&local_118,(String *)" unbinds(");
                        String::operator+((String *)&local_f8,(String *)&local_118);
                        String::operator+=((String *)&local_140,(String *)&local_f8);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
                        CowData<char32_t>::_unref((CowData<char32_t> *)local_120);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
                      }
                      plVar58 = (long *)Tree::create_item(*(TreeItem **)(in_RDI + 0xa18),iVar52);
                      local_f8 = (Object *)0x0;
                      if (local_140 != 0) {
                        CowData<char32_t>::_ref
                                  ((CowData<char32_t> *)&local_f8,(CowData *)&local_140);
                      }
                      TreeItem::set_text(plVar58,0,(CowData<char32_t> *)&local_f8);
                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
                      Object::Connection::operator_cast_to_Variant((Connection *)&local_58);
                      iVar50 = (int)plVar58;
                      TreeItem::set_metadata(iVar50,(Variant *)0x0);
                      if (Variant::needs_deinit[(int)local_58] != '\0') {
                        Variant::_clear_internal();
                      }
                      if ((update_tree()::{lambda()#4}::operator()()::sname == '\0') &&
                         (iVar49 = __cxa_guard_acquire(&update_tree()::{lambda()#4}::operator()()::
                                                        sname), iVar49 != 0)) {
                        _scs_create((char *)&update_tree()::{lambda()#4}::operator()()::sname,true);
                        __cxa_atexit(StringName::~StringName,
                                     &update_tree()::{lambda()#4}::operator()()::sname,&__dso_handle
                                    );
                        __cxa_guard_release(&update_tree()::{lambda()#4}::operator()()::sname);
                      }
                      Control::get_editor_theme_icon((StringName *)&local_f8);
                      TreeItem::set_icon(iVar50,(Ref *)0x0);
                      if (((local_f8 != (Object *)0x0) &&
                          (cVar47 = RefCounted::unreference(), pOVar55 = local_f8, cVar47 != '\0'))
                         && (cVar47 = predelete_handler(local_f8), cVar47 != '\0')) {
                        (**(code **)(*(long *)pOVar55 + 0x140))(pOVar55);
                        Memory::free_static(pOVar55,false);
                      }
                      if ((local_c8 & 0x10) != 0) {
                        if ((update_tree()::{lambda()#5}::operator()()::sname == '\0') &&
                           (iVar49 = __cxa_guard_acquire(&update_tree()::{lambda()#5}::operator()()
                                                          ::sname), iVar49 != 0)) {
                          _scs_create((char *)&update_tree()::{lambda()#5}::operator()()::sname,true
                                     );
                          __cxa_atexit(StringName::~StringName,
                                       &update_tree()::{lambda()#5}::operator()()::sname,
                                       &__dso_handle);
                          __cxa_guard_release(&update_tree()::{lambda()#5}::operator()()::sname);
                        }
                        local_58 = Control::get_theme_color
                                             (in_RDI,(StringName *)
                                                     &update_tree()::{lambda()#5}::operator()()::
                                                      sname);
                        local_50 = in_XMM1_Qa;
                        TreeItem::set_custom_color(iVar50,(Color *)0x0);
                        pcVar3 = *(code **)(*plVar58 + 0xa8);
                        Variant::Variant((Variant *)&local_58,true);
                        StringName::StringName
                                  ((StringName *)&local_f8,"_inherited_connection",false);
                        (*pcVar3)(plVar58,(CowData<char32_t> *)&local_f8,(Variant *)&local_58);
                        if ((StringName::configured != '\0') && (local_f8 != (Object *)0x0)) {
                          StringName::unref();
                        }
                        if (Variant::needs_deinit[(int)local_58] != '\0') {
                          Variant::_clear_internal();
                        }
                      }
                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
                      CowData<Variant>::_unref((CowData<Variant> *)local_88);
                      if ((StringName::configured != '\0') &&
                         (((local_a8._8_8_ == 0 ||
                           (StringName::unref(), StringName::configured != '\0')) &&
                          (local_a8._0_8_ != 0)))) {
                        StringName::unref();
                      }
                    }
                  }
                  Callable::~Callable(local_d8);
                  if ((StringName::configured != '\0') && (local_e8 != 0)) {
                    StringName::unref();
                  }
                  pSVar68 = *(StringName **)(pSVar68 + 0x28);
                } while (pSVar68 != (StringName *)0x0);
              }
              List<Object::Connection,DefaultAllocator>::~List
                        ((List<Object::Connection,DefaultAllocator> *)&local_148);
              Dictionary::~Dictionary(local_150);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
              CowData<String>::_unref((CowData<String> *)&local_100);
              if (StringName::configured != '\0') goto LAB_00109ac0;
              pSVar64 = *(String **)(pSVar64 + 0x70);
            } while (pSVar64 != (String *)0x0);
          }
        }
LAB_0010a718:
        List<MethodInfo,DefaultAllocator>::~List((List<MethodInfo,DefaultAllocator> *)&local_168);
        Ref<Texture2D>::unref((Ref<Texture2D> *)&local_170);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_180);
      } while (local_190 != 0);
    }
    local_1f0 = (String *)&local_f8;
    local_260 = (String *)&local_e8;
    local_e8 = 0;
    pSVar64 = *(String **)(in_RDI + 0xa30);
    String::parse_latin1(local_260,"");
    local_f8 = (Object *)0x0;
    String::parse_latin1(local_1f0,"Connect...");
    TTR((String *)local_b8,local_1f0);
    Button::set_text(pSVar64);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_1f0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_260);
    pRVar4 = *(Ref **)(in_RDI + 0xa30);
    if ((update_tree()::{lambda()#6}::operator()()::sname == '\0') &&
       (iVar48 = __cxa_guard_acquire(&update_tree()::{lambda()#6}::operator()()::sname), iVar48 != 0
       )) {
      _scs_create((char *)&update_tree()::{lambda()#6}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&update_tree()::{lambda()#6}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&update_tree()::{lambda()#6}::operator()()::sname);
    }
    Control::get_editor_theme_icon((StringName *)local_b8);
    Button::set_button_icon(pRVar4);
    Ref<Texture2D>::unref((Ref<Texture2D> *)local_b8);
    BaseButton::set_disabled(SUB81(*(undefined8 *)(in_RDI + 0xa30),0));
    Ref<Script>::unref((Ref<Script> *)&local_188);
    if ((StringName::configured != '\0') && (local_190 != 0)) {
      StringName::unref();
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ConnectionsDock::_filter_changed(String const&) */

void ConnectionsDock::_filter_changed(String *param_1)

{
  update_tree();
  return;
}



/* ConnectionsDock::_make_or_edit_connection() */

void __thiscall ConnectionsDock::_make_or_edit_connection(ConnectionsDock *this)

{
  String *pSVar1;
  code *pcVar2;
  Object *pOVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  Object *pOVar9;
  long lVar10;
  long *plVar11;
  String *pSVar12;
  size_t sVar13;
  Object *pOVar14;
  long in_FS_OFFSET;
  double dVar15;
  Object *local_1d0;
  CowData<Variant> *local_1c0;
  StringName *local_198;
  NodePath local_188 [8];
  CowData<char32_t> local_180 [8];
  CowData<char32_t> local_178 [8];
  undefined8 local_170;
  Object *local_168;
  long local_160;
  undefined8 local_158;
  long local_150;
  undefined8 local_148;
  Object *pOStack_140;
  undefined1 local_138 [16];
  undefined8 local_128;
  size_t local_118 [2];
  Object *local_108;
  size_t sStack_100;
  StringName local_f8 [8];
  StringName local_f0 [8];
  undefined8 local_e8;
  undefined8 local_d8 [2];
  String *local_c8;
  Variant *pVStack_c0;
  Variant *local_b8;
  int local_a8 [6];
  Variant local_90 [24];
  Variant local_78 [24];
  undefined8 local_60;
  undefined1 local_58 [16];
  String local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  NodePath::NodePath(local_188,(NodePath *)(*(long *)(this + 0xa28) + 0xe40));
  pOVar9 = (Object *)Node::get_node(*(NodePath **)(this + 0xa10));
  if (pOVar9 == (Object *)0x0) {
    _err_print_error("_make_or_edit_connection","editor/connections_dialog.cpp",0x3ac,
                     "Parameter \"target\" is null.",0,0);
    NodePath::~NodePath(local_188);
    goto LAB_0010be14;
  }
  local_128 = 0;
  local_138 = (undefined1  [16])0x0;
  local_118[0] = 0;
  local_148 = *(undefined8 *)(*(long *)(this + 0xa28) + 0xdd0);
  pOStack_140 = pOVar9;
  StringName::StringName((StringName *)&local_108,(StringName *)(*(long *)(this + 0xa28) + 0xe10));
  if ((Object *)local_138._0_8_ == local_108) {
    if ((StringName::configured != '\0') && (local_108 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  else {
    StringName::unref();
    local_138._0_8_ = local_108;
  }
  ConnectDialog::get_dst_method_name((ConnectDialog *)&local_108);
  if ((Object *)local_138._8_8_ == local_108) {
    if ((StringName::configured != '\0') && (local_108 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  else {
    StringName::unref();
    local_138._8_8_ = local_108;
  }
  dVar15 = (double)Range::get_value();
  iVar8 = (int)dVar15;
  local_128._4_4_ = iVar8;
  if (iVar8 == 0) {
    sStack_100 = 0;
    sVar13 = *(size_t *)(*(long *)(*(long *)(this + 0xa28) + 0xe30) + 0x180);
    if (sVar13 != 0) {
      CowData<Variant>::_ref
                ((CowData<Variant> *)&sStack_100,
                 (CowData *)(*(long *)(*(long *)(this + 0xa28) + 0xe30) + 0x180));
      sVar13 = sStack_100;
    }
    if (local_118[0] != sVar13) {
      CowData<Variant>::_unref((CowData<Variant> *)local_118);
      sStack_100 = 0;
      local_118[0] = sVar13;
    }
    CowData<Variant>::_unref((CowData<Variant> *)&sStack_100);
  }
  local_1c0 = (CowData<Variant> *)local_118;
  bVar4 = BaseButton::is_pressed();
  bVar5 = BaseButton::is_pressed();
  local_128 = CONCAT44(local_128._4_4_,bVar4 + 2 | (uint)bVar5 << 2);
  (**(code **)(*(long *)pOVar9 + 0x98))((String *)local_a8);
  lVar10 = Variant::get_validated_object();
  if (lVar10 == 0) {
LAB_0010bcc0:
    cVar6 = Variant::needs_deinit[local_a8[0]];
joined_r0x0010c4e3:
    if (cVar6 != '\0') {
      Variant::_clear_internal();
    }
    local_1d0 = (Object *)0x0;
LAB_0010bcea:
    lVar10 = *(long *)(this + 0xa28);
    if (*(char *)(lVar10 + 0xe38) == '\0') {
      _connect(this,(ConnectionData *)&local_148);
    }
    else {
      cVar6 = '\0';
LAB_0010bd06:
      local_108 = *(Object **)(lVar10 + 0xdd8);
      sStack_100 = *(size_t *)(lVar10 + 0xde0);
      StringName::StringName(local_f8,(StringName *)(lVar10 + 0xde8));
      StringName::StringName(local_f0,(StringName *)(lVar10 + 0xdf0));
      local_e8 = *(undefined8 *)(lVar10 + 0xdf8);
      local_d8[0] = 0;
      if (*(long *)(lVar10 + 0xe08) != 0) {
        CowData<Variant>::_ref((CowData<Variant> *)local_d8,(CowData *)(lVar10 + 0xe08));
      }
      _disconnect(this,(ConnectionData *)&local_108);
      ConnectDialog::ConnectionData::~ConnectionData((ConnectionData *)&local_108);
      _connect(this,(ConnectionData *)&local_148);
      if (cVar6 != '\0') {
LAB_0010be4d:
        local_198 = (StringName *)(local_138 + 8);
        local_150 = 0;
        if ((*(long *)(*(long *)(this + 0xa28) + 0xe20) == 0) ||
           (CowData<String>::_ref
                      ((CowData<String> *)&local_150,(CowData *)(*(long *)(this + 0xa28) + 0xe20)),
           local_150 == 0)) {
          lVar10 = 0;
        }
        else {
          lVar10 = *(long *)(local_150 + -8);
        }
        CowData<String>::resize<false>((CowData<String> *)&local_150,lVar10 - local_128._4_4_);
        plVar11 = EditorNode::singleton;
        for (lVar10 = 0;
            (EditorNode::singleton = plVar11, local_118[0] != 0 &&
            (lVar10 < *(long *)(local_118[0] - 8))); lVar10 = lVar10 + 1) {
          Variant::get_type_name
                    ((CowData<char32_t> *)&local_160,*(undefined4 *)(local_118[0] + lVar10 * 0x18));
          local_108 = (Object *)&_LC138;
          local_170 = 0;
          sStack_100 = 1;
          String::parse_latin1((StrRange *)&local_170);
          itos((long)local_180);
          operator+((char *)local_178,(String *)"extra_arg_");
          String::operator+((String *)&local_168,(String *)local_178);
          String::operator+((String *)&local_108,(String *)&local_168);
          Vector<String>::push_back((Vector<String> *)&local_158,(StringName *)&local_108);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
          CowData<char32_t>::_unref(local_178);
          CowData<char32_t>::_unref(local_180);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_170);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_160);
          plVar11 = EditorNode::singleton;
        }
        sStack_100 = 0;
        if (local_150 != 0) {
          CowData<String>::_ref((CowData<String> *)&sStack_100,(CowData *)&local_150);
        }
        StringName::StringName((StringName *)&local_160,local_198);
        if ((_make_or_edit_connection()::{lambda()#1}::operator()()::sname == '\0') &&
           (iVar8 = __cxa_guard_acquire(&_make_or_edit_connection()::{lambda()#1}::operator()()::
                                         sname), iVar8 != 0)) {
          _scs_create((char *)&_make_or_edit_connection()::{lambda()#1}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_make_or_edit_connection()::{lambda()#1}::operator()()::sname,&__dso_handle)
          ;
          __cxa_guard_release(&_make_or_edit_connection()::{lambda()#1}::operator()()::sname);
        }
        Variant::Variant((Variant *)local_a8,pOVar9);
        Variant::Variant(local_90,(StringName *)&local_160);
        pSVar12 = local_48;
        Variant::Variant(local_78,(Vector *)&local_108);
        local_58 = (undefined1  [16])0x0;
        local_60 = 0;
        local_c8 = (String *)local_a8;
        pVStack_c0 = local_90;
        local_b8 = local_78;
        (**(code **)(*plVar11 + 0xd0))
                  (plVar11,&_make_or_edit_connection()::{lambda()#1}::operator()()::sname,&local_c8,
                   3);
        do {
          pSVar1 = pSVar12 + -0x18;
          pSVar12 = pSVar12 + -0x18;
          if (Variant::needs_deinit[*(int *)pSVar1] != '\0') {
            Variant::_clear_internal();
          }
        } while (pSVar12 != (String *)local_a8);
        if ((StringName::configured != '\0') && (local_160 != 0)) {
          StringName::unref();
        }
        CowData<String>::_unref((CowData<String> *)&sStack_100);
        CowData<String>::_unref((CowData<String> *)&local_150);
      }
    }
    update_tree();
    if (local_1d0 != (Object *)0x0) goto LAB_0010bc77;
  }
  else {
    local_1d0 = (Object *)__dynamic_cast(lVar10,&Object::typeinfo,&Script::typeinfo,0);
    if (local_1d0 == (Object *)0x0) {
      cVar6 = Variant::needs_deinit[local_a8[0]];
      goto joined_r0x0010c4e3;
    }
    cVar6 = RefCounted::reference();
    if (cVar6 == '\0') goto LAB_0010bcc0;
    if (Variant::needs_deinit[local_a8[0]] != '\0') {
      Variant::_clear_internal();
    }
    (**(code **)(*(long *)pOVar9 + 0x48))((CowData<char32_t> *)&local_158);
    StringName::StringName((StringName *)&local_108,(String *)&local_158,false);
    cVar7 = ClassDB::has_method((StringName *)&local_108,(StringName *)(local_138 + 8),false);
    if ((StringName::configured != '\0') && (local_108 != (Object *)0x0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
    if (cVar7 != '\0') goto LAB_0010bcea;
    plVar11 = (long *)(**(code **)(*(long *)local_1d0 + 0x288))(local_1d0);
    pcVar2 = *(code **)(*plVar11 + 0x1f0);
    (**(code **)(*(long *)local_1d0 + 0x218))((CowData<char32_t> *)&local_158);
    if (local_138._8_8_ == 0) {
      local_108 = (Object *)0x0;
    }
    else {
      local_108 = (Object *)0x0;
      if (*(char **)(local_138._8_8_ + 8) == (char *)0x0) {
        if (*(long *)(local_138._8_8_ + 0x10) != 0) {
          CowData<char32_t>::_ref
                    ((CowData<char32_t> *)&local_108,(CowData *)(local_138._8_8_ + 0x10));
        }
      }
      else {
        String::parse_latin1((String *)&local_108,*(char **)(local_138._8_8_ + 8));
      }
    }
    iVar8 = (*pcVar2)(plVar11,(StringName *)&local_108,(CowData<char32_t> *)&local_158);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
    if (iVar8 == -1) {
      (**(code **)(*(long *)local_1d0 + 0x1d8))();
      while (local_168 != (Object *)0x0) {
        plVar11 = (long *)(**(code **)(*(long *)local_168 + 0x288))();
        pcVar2 = *(code **)(*plVar11 + 0x1f0);
        (**(code **)(*(long *)local_168 + 0x218))((CowData<char32_t> *)&local_160);
        if (local_138._8_8_ == 0) {
          local_158 = 0;
        }
        else {
          pOVar14 = *(Object **)(local_138._8_8_ + 8);
          local_158 = 0;
          if (pOVar14 == (Object *)0x0) {
            if (*(long *)(local_138._8_8_ + 0x10) != 0) {
              CowData<char32_t>::_ref
                        ((CowData<char32_t> *)&local_158,(CowData *)(local_138._8_8_ + 0x10));
            }
          }
          else {
            sStack_100 = strlen((char *)pOVar14);
            local_108 = pOVar14;
            String::parse_latin1((StrRange *)&local_158);
          }
        }
        iVar8 = (*pcVar2)(plVar11,(CowData<char32_t> *)&local_158,(CowData<char32_t> *)&local_160);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_160);
        if (iVar8 != -1) {
          Ref<Script>::unref((Ref<Script> *)&local_168);
          cVar6 = '\0';
          goto LAB_0010bc39;
        }
        (**(code **)(*(long *)local_168 + 0x1d8))((StringName *)&local_108);
        pOVar3 = local_168;
        pOVar14 = local_168;
        if (local_108 != local_168) {
          local_168 = local_108;
          if (local_108 == (Object *)0x0) {
            if (pOVar3 == (Object *)0x0) break;
            cVar7 = RefCounted::unreference();
            pOVar14 = local_108;
          }
          else {
            cVar7 = RefCounted::reference();
            if (cVar7 == '\0') {
              local_168 = (Object *)0x0;
            }
            pOVar14 = local_108;
            if (pOVar3 == (Object *)0x0) goto LAB_0010c354;
            cVar7 = RefCounted::unreference();
            pOVar14 = local_108;
          }
          local_108 = pOVar14;
          if ((cVar7 != '\0') &&
             (cVar7 = predelete_handler(pOVar3), pOVar14 = local_108, cVar7 != '\0')) {
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
            pOVar14 = local_108;
          }
        }
LAB_0010c354:
        if (((pOVar14 != (Object *)0x0) &&
            (cVar7 = RefCounted::unreference(), pOVar14 = local_108, cVar7 != '\0')) &&
           (cVar7 = predelete_handler(local_108), cVar7 != '\0')) {
          (**(code **)(*(long *)pOVar14 + 0x140))(pOVar14);
          Memory::free_static(pOVar14,false);
        }
      }
      Ref<Script>::unref((Ref<Script> *)&local_168);
    }
    else {
      local_108 = (Object *)0x0;
      String::parse_latin1
                ((String *)&local_108,
                 "text_editor/behavior/navigation/open_script_when_connecting_signal_to_existing_method"
                );
      _EDITOR_GET((String *)local_a8);
      cVar6 = Variant::operator_cast_to_bool((Variant *)local_a8);
      if (Variant::needs_deinit[local_a8[0]] != '\0') {
        Variant::_clear_internal();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
    }
LAB_0010bc39:
    lVar10 = *(long *)(this + 0xa28);
    if (*(char *)(lVar10 + 0xe38) != '\0') goto LAB_0010bd06;
    _connect(this,(ConnectionData *)&local_148);
    if (cVar6 != '\0') goto LAB_0010be4d;
    update_tree();
LAB_0010bc77:
    cVar6 = RefCounted::unreference();
    if ((cVar6 != '\0') && (cVar6 = predelete_handler(local_1d0), cVar6 != '\0')) {
      (**(code **)(*(long *)local_1d0 + 0x140))(local_1d0);
      Memory::free_static(local_1d0,false);
    }
  }
  CowData<Variant>::_unref(local_1c0);
  if ((StringName::configured != '\0') &&
     (((local_138._8_8_ == 0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_138._0_8_ != 0)))) {
    StringName::unref();
  }
  NodePath::~NodePath(local_188);
LAB_0010be14:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ConnectionsDock::_handle_slot_menu_option(int) */

void __thiscall ConnectionsDock::_handle_slot_menu_option(ConnectionsDock *this,int param_1)

{
  int iVar1;
  TreeItem *pTVar2;
  long in_FS_OFFSET;
  long local_a8 [2];
  Callable local_98 [32];
  ConnectionData local_78 [16];
  long local_68;
  long local_60;
  CowData<Variant> local_48 [16];
  int local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  pTVar2 = (TreeItem *)Tree::get_selected();
  if (pTVar2 != (TreeItem *)0x0) {
    iVar1 = _get_item_type(this,pTVar2);
    if (iVar1 == 3) {
      if (param_1 == 1) {
        if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
          _go_to_method(this,pTVar2);
          return;
        }
        goto LAB_0010c786;
      }
      if (param_1 == 2) {
        TreeItem::get_metadata((int)(Variant *)local_38);
        Object::Connection::Connection((Connection *)local_a8,(Variant *)local_38);
        if (Variant::needs_deinit[local_38[0]] != '\0') {
          Variant::_clear_internal();
        }
        ConnectDialog::ConnectionData::ConnectionData(local_78,(Connection *)local_a8);
        _disconnect(this,local_78);
        CowData<Variant>::_unref(local_48);
        if (StringName::configured != '\0') {
          if (local_60 != 0) {
            StringName::unref();
            if (StringName::configured == '\0') goto LAB_0010c719;
          }
          if (local_68 != 0) {
            StringName::unref();
          }
        }
LAB_0010c719:
        update_tree();
        Callable::~Callable(local_98);
        if ((StringName::configured != '\0') && (local_a8[0] != 0)) {
          StringName::unref();
        }
      }
      else if (param_1 == 0) {
        if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
          _open_edit_connection_dialog((TreeItem *)this);
          return;
        }
        goto LAB_0010c786;
      }
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010c786:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ConnectionsDock::_tree_gui_input(Ref<InputEvent> const&) */

void __thiscall ConnectionsDock::_tree_gui_input(ConnectionsDock *this,Ref *param_1)

{
  Vector2 *pVVar1;
  Vector2i *pVVar2;
  char cVar3;
  int iVar4;
  Object *pOVar5;
  Object *pOVar6;
  String *pSVar7;
  TreeItem *pTVar8;
  long lVar9;
  long *plVar10;
  long in_FS_OFFSET;
  undefined8 uVar11;
  undefined8 uVar12;
  long local_c8 [2];
  Callable local_b8 [32];
  long local_98 [7];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_40;
  
  lVar9 = *(long *)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar9 != 0) {
    pOVar5 = (Object *)__dynamic_cast(lVar9,&Object::typeinfo,&InputEventKey::typeinfo,0);
    if (pOVar5 == (Object *)0x0) {
LAB_0010c829:
      pOVar6 = (Object *)__dynamic_cast(lVar9,&Object::typeinfo,&InputEventMouseButton::typeinfo,0);
      if ((pOVar6 != (Object *)0x0) && (cVar3 = RefCounted::reference(), cVar3 != '\0')) {
        cVar3 = InputEvent::is_pressed();
        if ((cVar3 != '\0') && (iVar4 = InputEventMouseButton::get_button_index(), iVar4 == 2)) {
          pVVar1 = *(Vector2 **)(this + 0xa18);
          local_58 = InputEventMouse::get_position();
          pTVar8 = (TreeItem *)Tree::get_item_at_position(pVVar1);
          if (pTVar8 == (TreeItem *)0x0) {
            cVar3 = RefCounted::unreference();
            if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar6), cVar3 != '\0')) {
              (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
              Memory::free_static(pOVar6,false);
            }
            goto joined_r0x0010cd18;
          }
          cVar3 = TreeItem::is_selectable((int)pTVar8);
          if (cVar3 != '\0') {
            Tree::set_selected(*(TreeItem **)(this + 0xa18),(int)pTVar8);
          }
          uVar11 = InputEventMouse::get_position();
          uVar12 = Control::get_screen_position();
          local_60 = CONCAT44((float)((ulong)uVar11 >> 0x20) + (float)((ulong)uVar12 >> 0x20),
                              (float)uVar11 + (float)uVar12);
          iVar4 = _get_item_type(this,pTVar8);
          if (iVar4 == 2) {
            pVVar2 = *(Vector2i **)(this + 0xa48);
            local_58 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_60);
            Window::set_position(pVVar2);
            Window::reset_size();
            plVar10 = *(long **)(this + 0xa48);
          }
          else {
            if (iVar4 != 3) {
              if (iVar4 == 1) {
                TreeItem::get_metadata((int)&local_58);
                Variant::operator_cast_to_String((Variant *)local_98);
                if (*(long *)(this + 0xa40) != local_98[0]) {
                  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xa40));
                  lVar9 = local_98[0];
                  local_98[0] = 0;
                  *(long *)(this + 0xa40) = lVar9;
                }
                CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
                if (Variant::needs_deinit[(int)local_58] != '\0') {
                  Variant::_clear_internal();
                }
                pVVar2 = *(Vector2i **)(this + 0xa38);
                local_58 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_60);
                Window::set_position(pVVar2);
                Window::reset_size();
                local_58 = 0;
                local_50 = 0;
                (**(code **)(**(long **)(this + 0xa38) + 0x240))();
                Control::accept_event();
              }
              goto LAB_0010c8a0;
            }
            pVVar2 = *(Vector2i **)(this + 0xa50);
            local_58 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_60);
            Window::set_position(pVVar2);
            Window::reset_size();
            plVar10 = *(long **)(this + 0xa50);
          }
          local_58 = 0;
          local_50 = 0;
          (**(code **)(*plVar10 + 0x240))();
        }
LAB_0010c8a0:
        cVar3 = RefCounted::unreference();
        if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar6), cVar3 != '\0')) {
          (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
          Memory::free_static(pOVar6,false);
        }
      }
joined_r0x0010cd18:
      if (pOVar5 == (Object *)0x0) goto LAB_0010c866;
    }
    else {
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        lVar9 = *(long *)param_1;
        if (lVar9 == 0) goto LAB_0010c866;
        pOVar5 = (Object *)0x0;
        goto LAB_0010c829;
      }
      cVar3 = InputEvent::is_pressed();
      if ((cVar3 == '\0') || (cVar3 = (**(code **)(*(long *)pOVar5 + 0x1c8))(pOVar5), cVar3 != '\0')
         ) {
LAB_0010c820:
        lVar9 = *(long *)param_1;
        if (lVar9 != 0) goto LAB_0010c829;
      }
      else {
        pSVar7 = (String *)EditorSettings::get_singleton();
        local_98[0] = 0;
        String::parse_latin1((String *)local_98,"connections_editor/disconnect");
        cVar3 = EditorSettings::is_shortcut(pSVar7,(Ref *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
        if (cVar3 == '\0') {
          pSVar7 = (String *)EditorSettings::get_singleton();
          local_98[0] = 0;
          String::parse_latin1((String *)local_98,"editor/open_search");
          cVar3 = EditorSettings::is_shortcut(pSVar7,(Ref *)local_98);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
          if (cVar3 == '\0') goto LAB_0010c820;
          Control::grab_focus();
          LineEdit::select_all();
          Control::accept_event();
        }
        else {
          pTVar8 = (TreeItem *)Tree::get_selected();
          if ((pTVar8 == (TreeItem *)0x0) || (iVar4 = _get_item_type(this,pTVar8), iVar4 != 3))
          goto LAB_0010c820;
          TreeItem::get_metadata((int)(Variant *)&local_58);
          Object::Connection::Connection((Connection *)local_c8,(Variant *)&local_58);
          if (Variant::needs_deinit[(int)local_58] != '\0') {
            Variant::_clear_internal();
          }
          ConnectDialog::ConnectionData::ConnectionData
                    ((ConnectionData *)local_98,(Connection *)local_c8);
          _disconnect(this,(ConnectionData *)local_98);
          ConnectDialog::ConnectionData::~ConnectionData((ConnectionData *)local_98);
          update_tree();
          Control::accept_event();
          Callable::~Callable(local_b8);
          if ((StringName::configured != '\0') && (local_c8[0] != 0)) {
            StringName::unref();
          }
        }
      }
    }
    cVar3 = RefCounted::unreference();
    if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar5), cVar3 != '\0')) {
      (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        Memory::free_static(pOVar5,false);
        return;
      }
      goto LAB_0010cd55;
    }
  }
LAB_0010c866:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010cd55:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ConnectionsDock::_connect_pressed() */

void __thiscall ConnectionsDock::_connect_pressed(ConnectionsDock *this)

{
  int iVar1;
  TreeItem *pTVar2;
  long in_FS_OFFSET;
  long local_a8 [2];
  Callable local_98 [32];
  ConnectionData local_78 [16];
  long local_68;
  long local_60;
  CowData<Variant> local_48 [16];
  int local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  pTVar2 = (TreeItem *)Tree::get_selected();
  if (pTVar2 == (TreeItem *)0x0) {
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xa30),0));
      return;
    }
    goto LAB_0010cf2d;
  }
  iVar1 = _get_item_type(this,pTVar2);
  if (iVar1 == 2) {
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      _open_connection_dialog((TreeItem *)this);
      return;
    }
    goto LAB_0010cf2d;
  }
  iVar1 = _get_item_type(this,pTVar2);
  if (iVar1 == 3) {
    TreeItem::get_metadata((int)(Variant *)local_38);
    Object::Connection::Connection((Connection *)local_a8,(Variant *)local_38);
    if (Variant::needs_deinit[local_38[0]] != '\0') {
      Variant::_clear_internal();
    }
    ConnectDialog::ConnectionData::ConnectionData(local_78,(Connection *)local_a8);
    _disconnect(this,local_78);
    CowData<Variant>::_unref(local_48);
    if (StringName::configured != '\0') {
      if (local_60 != 0) {
        StringName::unref();
        if (StringName::configured == '\0') goto LAB_0010ceb1;
      }
      if (local_68 != 0) {
        StringName::unref();
      }
    }
LAB_0010ceb1:
    update_tree();
    Callable::~Callable(local_98);
    if ((StringName::configured != '\0') && (local_a8[0] != 0)) {
      StringName::unref();
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010cf2d:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ConnectionsDock::_notification(int) */

void __thiscall ConnectionsDock::_notification(ConnectionsDock *this,int param_1)

{
  Ref *pRVar1;
  undefined8 uVar2;
  StringName *pSVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  String *pSVar7;
  long in_FS_OFFSET;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0x2d) {
LAB_0010d028:
    pRVar1 = *(Ref **)(this + 0xa58);
    if (_notification(int)::{lambda()#1}::operator()()::sname == '\0') {
      iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#1}::operator()()::sname);
      if (iVar6 != 0) {
        _scs_create((char *)&_notification(int)::{lambda()#1}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#1}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#1}::operator()()::sname);
      }
    }
    Control::get_editor_theme_icon((StringName *)&local_58);
    LineEdit::set_right_icon(pRVar1);
    Ref<Texture2D>::unref((Ref<Texture2D> *)&local_58);
    uVar2 = *(undefined8 *)(this + 0xa38);
    if (_notification(int)::{lambda()#2}::operator()()::sname == '\0') {
      iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#2}::operator()()::sname);
      if (iVar6 != 0) {
        _scs_create((char *)&_notification(int)::{lambda()#2}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#2}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#2}::operator()()::sname);
      }
    }
    Control::get_editor_theme_icon((StringName *)&local_58);
    uVar5 = PopupMenu::get_item_index((int)*(undefined8 *)(this + 0xa38));
    PopupMenu::set_item_icon((int)uVar2,(Ref *)(ulong)uVar5);
    Ref<Texture2D>::unref((Ref<Texture2D> *)&local_58);
    uVar2 = *(undefined8 *)(this + 0xa48);
    if (_notification(int)::{lambda()#3}::operator()()::sname == '\0') {
      iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#3}::operator()()::sname);
      if (iVar6 != 0) {
        _scs_create((char *)&_notification(int)::{lambda()#3}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#3}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#3}::operator()()::sname);
      }
    }
    Control::get_editor_theme_icon((StringName *)&local_58);
    uVar5 = PopupMenu::get_item_index((int)*(undefined8 *)(this + 0xa48));
    PopupMenu::set_item_icon((int)uVar2,(Ref *)(ulong)uVar5);
    Ref<Texture2D>::unref((Ref<Texture2D> *)&local_58);
    uVar2 = *(undefined8 *)(this + 0xa48);
    if (_notification(int)::{lambda()#4}::operator()()::sname == '\0') {
      iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#4}::operator()()::sname);
      if (iVar6 != 0) {
        _scs_create((char *)&_notification(int)::{lambda()#4}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#4}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#4}::operator()()::sname);
      }
    }
    Control::get_editor_theme_icon((StringName *)&local_58);
    uVar5 = PopupMenu::get_item_index((int)*(undefined8 *)(this + 0xa48));
    PopupMenu::set_item_icon((int)uVar2,(Ref *)(ulong)uVar5);
    Ref<Texture2D>::unref((Ref<Texture2D> *)&local_58);
    uVar2 = *(undefined8 *)(this + 0xa48);
    if (_notification(int)::{lambda()#5}::operator()()::sname == '\0') {
      iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#5}::operator()()::sname);
      if (iVar6 != 0) {
        _scs_create((char *)&_notification(int)::{lambda()#5}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#5}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#5}::operator()()::sname);
      }
    }
    Control::get_editor_theme_icon((StringName *)&local_58);
    uVar5 = PopupMenu::get_item_index((int)*(undefined8 *)(this + 0xa48));
    PopupMenu::set_item_icon((int)uVar2,(Ref *)(ulong)uVar5);
    Ref<Texture2D>::unref((Ref<Texture2D> *)&local_58);
    uVar2 = *(undefined8 *)(this + 0xa48);
    if (_notification(int)::{lambda()#6}::operator()()::sname == '\0') {
      iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#6}::operator()()::sname);
      if (iVar6 != 0) {
        _scs_create((char *)&_notification(int)::{lambda()#6}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#6}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#6}::operator()()::sname);
      }
    }
    Control::get_editor_theme_icon((StringName *)&local_58);
    uVar5 = PopupMenu::get_item_index((int)*(undefined8 *)(this + 0xa48));
    PopupMenu::set_item_icon((int)uVar2,(Ref *)(ulong)uVar5);
    Ref<Texture2D>::unref((Ref<Texture2D> *)&local_58);
    uVar2 = *(undefined8 *)(this + 0xa50);
    if (_notification(int)::{lambda()#7}::operator()()::sname == '\0') {
      iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#7}::operator()()::sname);
      if (iVar6 != 0) {
        _scs_create((char *)&_notification(int)::{lambda()#7}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#7}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#7}::operator()()::sname);
      }
    }
    Control::get_editor_theme_icon((StringName *)&local_58);
    uVar5 = PopupMenu::get_item_index((int)*(undefined8 *)(this + 0xa50));
    PopupMenu::set_item_icon((int)uVar2,(Ref *)(ulong)uVar5);
    Ref<Texture2D>::unref((Ref<Texture2D> *)&local_58);
    uVar2 = *(undefined8 *)(this + 0xa50);
    if (_notification(int)::{lambda()#8}::operator()()::sname == '\0') {
      iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#8}::operator()()::sname);
      if (iVar6 != 0) {
        _scs_create((char *)&_notification(int)::{lambda()#8}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#8}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#8}::operator()()::sname);
      }
    }
    Control::get_editor_theme_icon((StringName *)&local_58);
    uVar5 = PopupMenu::get_item_index((int)*(undefined8 *)(this + 0xa50));
    PopupMenu::set_item_icon((int)uVar2,(Ref *)(ulong)uVar5);
    Ref<Texture2D>::unref((Ref<Texture2D> *)&local_58);
    uVar2 = *(undefined8 *)(this + 0xa50);
    if (_notification(int)::{lambda()#9}::operator()()::sname == '\0') {
      iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#9}::operator()()::sname);
      if (iVar6 != 0) {
        _scs_create((char *)&_notification(int)::{lambda()#9}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#9}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#9}::operator()()::sname);
      }
    }
    Control::get_editor_theme_icon((StringName *)&local_58);
    uVar5 = PopupMenu::get_item_index((int)*(undefined8 *)(this + 0xa50));
    PopupMenu::set_item_icon((int)uVar2,(Ref *)(ulong)uVar5);
    Ref<Texture2D>::unref((Ref<Texture2D> *)&local_58);
    pSVar3 = *(StringName **)(this + 0xa18);
    if (_notification(int)::{lambda()#10}::operator()()::sname == '\0') {
      iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#10}::operator()()::sname);
      if (iVar6 != 0) {
        _scs_create((char *)&_notification(int)::{lambda()#10}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#10}::operator()()::sname
                     ,&__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#10}::operator()()::sname);
      }
    }
    Control::get_theme_constant
              ((StringName *)this,
               (StringName *)&_notification(int)::{lambda()#10}::operator()()::sname);
    StringName::StringName((StringName *)&local_58,"icon_max_width",false);
    Control::add_theme_constant_override(pSVar3,(int)(StringName *)&local_58);
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
LAB_0010cffa:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      update_tree();
      return;
    }
  }
  else {
    if (param_1 == 10000) {
      pSVar7 = (String *)EditorSettings::get_singleton();
      local_60 = 0;
      local_50 = 0x11;
      local_58 = "interface/editors";
      String::parse_latin1((StrRange *)&local_60);
      cVar4 = EditorSettings::check_changed_settings_in_group(pSVar7);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar4 != '\0') goto LAB_0010cffa;
    }
    else if (param_1 == 10) goto LAB_0010d028;
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ConnectionsDock::set_node(Node*) */

void __thiscall ConnectionsDock::set_node(ConnectionsDock *this,Node *param_1)

{
  *(Node **)(this + 0xa10) = param_1;
  update_tree();
  return;
}



/* ConnectDialog::_remove_bind() */

void __thiscall ConnectDialog::_remove_bind(ConnectDialog *this)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  int *piVar8;
  long in_FS_OFFSET;
  long local_50;
  CowData<char32_t> local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  EditorInspector::get_selected_path();
  if ((local_50 != 0) && (1 < *(uint *)(local_50 + -8))) {
    String::get_slice((char *)local_48,(int)(CowData<char32_t> *)&local_50);
    iVar3 = String::to_int();
    uVar4 = iVar3 - 1;
    CowData<char32_t>::_unref(local_48);
    if ((int)uVar4 < 0) {
      if (*(long *)(*(long *)(this + 0xe30) + 0x180) == 0) goto LAB_0010d888;
      lVar7 = *(long *)(*(long *)(*(long *)(this + 0xe30) + 0x180) + -8);
    }
    else {
      lVar2 = *(long *)(this + 0xe30);
      uVar5 = (ulong)uVar4;
      if (*(long *)(lVar2 + 0x180) == 0) {
LAB_0010d888:
        lVar7 = 0;
      }
      else {
        lVar7 = *(long *)(*(long *)(lVar2 + 0x180) + -8);
        if ((long)uVar5 < lVar7) {
          CowData<Variant>::_copy_on_write((CowData<Variant> *)(lVar2 + 0x180));
          lVar7 = *(long *)(lVar2 + 0x180);
          if (lVar7 == 0) {
            uVar6 = 0xffffffffffffffff;
          }
          else {
            uVar1 = *(long *)(lVar7 + -8) - 1;
            uVar6 = uVar1;
            if ((long)uVar5 < (long)uVar1) {
              piVar8 = (int *)(lVar7 + uVar5 * 0x18);
              do {
                if (Variant::needs_deinit[*piVar8] != '\0') {
                  Variant::_clear_internal();
                }
                iVar3 = piVar8[6];
                uVar5 = uVar5 + 1;
                piVar8[6] = 0;
                *piVar8 = iVar3;
                *(undefined8 *)(piVar8 + 2) = *(undefined8 *)(piVar8 + 8);
                *(undefined8 *)(piVar8 + 4) = *(undefined8 *)(piVar8 + 10);
                uVar6 = uVar5;
                piVar8 = piVar8 + 6;
              } while (uVar1 != uVar5);
            }
          }
          CowData<Variant>::resize<false>((CowData<Variant> *)(lVar2 + 0x180),uVar6);
          Object::notify_property_list_changed();
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
          goto LAB_0010d741;
        }
      }
    }
    _err_print_index_error
              ("_remove_bind","editor/connections_dialog.cpp",0xe5,(long)(int)uVar4,lVar7,"idx",
               "cdbinds->params.size()","",false,false);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
LAB_0010d741:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ConnectDialog::_add_bind() */

void __thiscall ConnectDialog::_add_bind(ConnectDialog *this)

{
  undefined8 uVar1;
  long lVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long in_FS_OFFSET;
  int local_78 [2];
  undefined1 local_70 [16];
  int local_58 [6];
  long local_40;
  
  uVar1 = *(undefined8 *)(this + 0xea8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  OptionButton::get_selected();
  uVar3 = OptionButton::get_item_id((int)uVar1);
  local_70 = (undefined1  [16])0x0;
  local_78[0] = 0;
  local_78[1] = 0;
  Variant::construct(uVar3,(Variant *)local_78,0,0);
  lVar2 = *(long *)(this + 0xe30);
  Variant::Variant((Variant *)local_58,(Variant *)local_78);
  if (*(long *)(lVar2 + 0x180) == 0) {
    lVar5 = 1;
  }
  else {
    lVar5 = *(long *)(*(long *)(lVar2 + 0x180) + -8) + 1;
  }
  iVar4 = CowData<Variant>::resize<false>((CowData<Variant> *)(lVar2 + 0x180),lVar5);
  if (iVar4 == 0) {
    if (*(long *)(lVar2 + 0x180) == 0) {
      lVar6 = -1;
      lVar5 = 0;
    }
    else {
      lVar5 = *(long *)(*(long *)(lVar2 + 0x180) + -8);
      lVar6 = lVar5 + -1;
      if (-1 < lVar6) {
        CowData<Variant>::_copy_on_write((CowData<Variant> *)(lVar2 + 0x180));
        Variant::operator=((Variant *)(*(long *)(lVar2 + 0x180) + lVar6 * 0x18),(Variant *)local_58)
        ;
        goto LAB_0010da0c;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar6,lVar5,"p_index","size()","",false,false
              );
  }
  else {
    _err_print_error("push_back","./core/templates/vector.h",0x142,
                     "Condition \"err\" is true. Returning: true",0,0);
  }
LAB_0010da0c:
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  Object::notify_property_list_changed();
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Vector<Control*>::push_back(Control*) [clone .isra.0] */

void __thiscall Vector<Control*>::push_back(Vector<Control*> *this,Control *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)(this + 8) == 0) {
    lVar2 = 1;
  }
  else {
    lVar2 = *(long *)(*(long *)(this + 8) + -8) + 1;
  }
  iVar1 = CowData<Control*>::resize<false>((CowData<Control*> *)(this + 8),lVar2);
  if (iVar1 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar3 = -1;
      lVar2 = 0;
    }
    else {
      lVar2 = *(long *)(*(long *)(this + 8) + -8);
      lVar3 = lVar2 + -1;
      if (-1 < lVar3) {
        CowData<Control*>::_copy_on_write((CowData<Control*> *)(this + 8));
        *(Control **)(*(long *)(this + 8) + lVar3 * 8) = param_1;
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ConnectDialog::ConnectDialog() */

void __thiscall ConnectDialog::ConnectDialog(ConnectDialog *this)

{
  Vector<Control*> *this_00;
  undefined8 uVar1;
  long *plVar2;
  code *pcVar3;
  Vector2i *pVVar4;
  Vector2 *pVVar5;
  BoxContainer *pBVar6;
  BoxContainer *this_01;
  LineEdit *pLVar7;
  SceneTreeEditor *this_02;
  BoxContainer *pBVar8;
  CallableCustom *pCVar9;
  Button *pBVar10;
  long lVar11;
  Label *pLVar12;
  AcceptDialog *pAVar13;
  Tree *this_03;
  CheckButton *pCVar14;
  String *pSVar15;
  OptionButton *this_04;
  EditorInspector *this_05;
  SpinBox *this_06;
  CheckBox *pCVar16;
  Object *this_07;
  char cVar17;
  int iVar18;
  uint uVar19;
  long in_FS_OFFSET;
  float fVar21;
  undefined8 local_a0;
  long local_98 [2];
  char *local_88;
  undefined8 local_80;
  undefined8 local_78 [4];
  ulong local_58 [3];
  long local_40;
  ulong uVar20;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ConfirmationDialog::ConfirmationDialog((ConfirmationDialog *)this);
  *(undefined8 *)(this + 0xdf8) = 0;
  *(undefined ***)this = &PTR__initialize_classv_00124ca8;
  *(undefined2 *)(this + 0xe38) = 0x100;
  *(undefined8 *)(this + 0xe30) = 0;
  *(undefined8 *)(this + 0xec0) = 0;
  *(undefined8 *)(this + 0xee0) = 0;
  *(undefined1 (*) [16])(this + 0xdb8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xdc8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xdd8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xde8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xe08) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xe20) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xe40) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xe50) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xe60) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xe70) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xe80) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xe90) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xea0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xeb0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xed0) = (undefined1  [16])0x0;
  fVar21 = (float)EditorScale::get_scale();
  local_78[0] = CONCAT44(fVar21 * _LC198._4_4_,fVar21 * (float)_LC198);
  local_58[0] = Vector2::operator_cast_to_Vector2i((Vector2 *)local_78);
  Window::set_min_size((Vector2i *)this);
  pBVar6 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar6,false);
  pBVar6[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar6 = &PTR__initialize_classv_001241e0;
  postinitialize_handler((Object *)pBVar6);
  Node::add_child(this,pBVar6,0);
  this_01 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(this_01,true);
  this_01[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)this_01 = &PTR__initialize_classv_00124558;
  postinitialize_handler((Object *)this_01);
  Node::add_child(pBVar6,this_01,0);
  Control::set_h_size_flags(this_01,3);
  fVar21 = (float)EditorScale::get_scale();
  local_58[0] = (ulong)(uint)(fVar21 * (float)_LC199);
  Control::set_custom_minimum_size((Vector2 *)this_01);
  pLVar7 = (LineEdit *)operator_new(0xbb0,"");
  local_88 = (char *)0x0;
  LineEdit::LineEdit(pLVar7,(String *)&local_88);
  postinitialize_handler((Object *)pLVar7);
  *(LineEdit **)(this + 0xdc0) = pLVar7;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  uVar1 = *(undefined8 *)(this + 0xdc0);
  local_98[0] = 0;
  local_88 = "";
  local_80 = 0;
  String::parse_latin1((StrRange *)local_98);
  local_88 = (char *)0x0;
  String::parse_latin1((String *)&local_88,"From Signal:");
  TTR((String *)&local_a0,(String *)&local_88);
  VBoxContainer::add_margin_child((String *)this_01,(Control *)&local_a0,SUB81(uVar1,0));
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  LineEdit::set_editable(SUB81(*(undefined8 *)(this + 0xdc0),0));
  this_02 = (SceneTreeEditor *)operator_new(0xb20,"");
  SceneTreeEditor::SceneTreeEditor(this_02,false,false,false);
  postinitialize_handler((Object *)this_02);
  *(SceneTreeEditor **)(this + 0xe50) = this_02;
  SceneTreeEditor::set_update_when_invisible(SUB81(this_02,0));
  SceneTreeEditor::set_connecting_signal(SUB81(*(undefined8 *)(this + 0xe50),0));
  lVar11 = *(long *)(this + 0xe50);
  *(undefined1 *)(lVar11 + 0xac3) = 1;
  Control::set_v_size_flags(lVar11,3);
  plVar2 = *(long **)(*(long *)(this + 0xe50) + 0xa48);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<ConnectDialog>
            ((ConnectDialog *)&local_88,(char *)this,(_func_void *)"&ConnectDialog::_item_activated"
            );
  StringName::StringName((StringName *)local_98,"item_activated",false);
  (*pcVar3)(plVar2,(StrRange *)local_98,(CowData<char32_t> *)&local_88,0);
  if ((StringName::configured != '\0') && (local_98[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_88);
  plVar2 = *(long **)(this + 0xe50);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<ConnectDialog>
            ((ConnectDialog *)&local_88,(char *)this,
             (_func_void *)"&ConnectDialog::_tree_node_selected");
  StringName::StringName((StringName *)local_98,"node_selected",false);
  (*pcVar3)(plVar2,(StrRange *)local_98,(CowData<char32_t> *)&local_88,0);
  if ((StringName::configured != '\0') && (local_98[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_88);
  SceneTreeEditor::set_connect_to_script_mode(SUB81(*(undefined8 *)(this + 0xe50),0));
  pBVar8 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar8,false);
  pBVar8[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar8 = &PTR__initialize_classv_001241e0;
  postinitialize_handler((Object *)pBVar8);
  pLVar7 = (LineEdit *)operator_new(0xbb0,"");
  local_88 = (char *)0x0;
  LineEdit::LineEdit(pLVar7,(String *)&local_88);
  postinitialize_handler((Object *)pLVar7);
  *(LineEdit **)(this + 0xdc8) = pLVar7;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  Node::add_child(pBVar8,*(undefined8 *)(this + 0xdc8),0,0);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xdc8),3);
  uVar1 = *(undefined8 *)(this + 0xdc8);
  local_88 = (char *)0x0;
  String::parse_latin1((String *)&local_88,"");
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"Filter Nodes");
  TTR((String *)&local_a0,(String *)local_98);
  LineEdit::set_placeholder(uVar1,(String *)&local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  LineEdit::set_clear_button_enabled(SUB81(*(undefined8 *)(this + 0xdc8),0));
  plVar2 = *(long **)(this + 0xdc8);
  lVar11 = *(long *)(this + 0xe50);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  pCVar9 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar9);
  *(undefined1 (*) [16])(pCVar9 + 0x30) = (undefined1  [16])0x0;
  *(undefined **)(pCVar9 + 0x20) = &_LC8;
  *(undefined ***)pCVar9 = &PTR_hash_001257b0;
  *(undefined8 *)(pCVar9 + 0x40) = 0;
  uVar1 = *(undefined8 *)(lVar11 + 0x60);
  *(long *)(pCVar9 + 0x28) = lVar11;
  *(undefined8 *)(pCVar9 + 0x30) = uVar1;
  *(undefined8 *)(pCVar9 + 0x10) = 0;
  *(code **)(pCVar9 + 0x38) = SceneTreeEditor::set_filter;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar9,(int)pCVar9 + 0x28);
  *(char **)(pCVar9 + 0x20) = "SceneTreeEditor::set_filter";
  Callable::Callable((Callable *)&local_88,pCVar9);
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x270,(CowData<char32_t> *)&local_88,0);
  Callable::~Callable((Callable *)&local_88);
  pBVar10 = (Button *)operator_new(0xc10,"");
  local_88 = (char *)0x0;
  Button::Button(pBVar10,(String *)&local_88);
  postinitialize_handler((Object *)pBVar10);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  Node::add_child(pBVar8,pBVar10,0,0);
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"");
  local_88 = "Go to Source";
  local_a0 = 0;
  local_80 = 0xc;
  String::parse_latin1((StrRange *)&local_a0);
  TTR((String *)&local_88,(String *)&local_a0);
  Button::set_text((String *)pBVar10);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  pcVar3 = *(code **)(*(long *)pBVar10 + 0x108);
  create_custom_callable_function_pointer<ConnectDialog>
            ((ConnectDialog *)&local_88,(char *)this,
             (_func_void *)"&ConnectDialog::_focus_currently_connected");
  (*pcVar3)(pBVar10,SceneStringNames::singleton + 0x238,(CowData<char32_t> *)&local_88,0);
  Callable::~Callable((Callable *)&local_88);
  local_88 = (char *)0x0;
  String::parse_latin1((String *)&local_88,"");
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"Connect to Script:");
  TTR((String *)&local_a0,(String *)local_98);
  lVar11 = VBoxContainer::add_margin_child((String *)this_01,(Control *)&local_a0,SUB81(pBVar8,0));
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if (*(long *)(lVar11 + 400) != 0) {
    if (*(char *)(*(long *)(lVar11 + 400) + 0x1d0) != '\0') {
      Node::_update_children_cache_impl();
    }
    iVar18 = *(int *)(lVar11 + 0x21c);
    if (iVar18 != 1) {
      if (iVar18 == 2) {
        cVar17 = (char)*(undefined4 *)(*(long *)(lVar11 + 400) + 0x228) +
                 (char)*(undefined4 *)(*(long *)(lVar11 + 400) + 0x220) +
                 (char)*(undefined4 *)(lVar11 + 0x22c) + -1;
      }
      else {
        cVar17 = 0xfe;
        if (iVar18 == 0) {
          cVar17 = (char)*(undefined4 *)(lVar11 + 0x22c) +
                   (char)*(undefined4 *)(*(long *)(lVar11 + 400) + 0x220) + -1;
        }
      }
      goto LAB_0010e404;
    }
  }
  cVar17 = (char)*(undefined4 *)(lVar11 + 0x22c) + -1;
LAB_0010e404:
  lVar11 = Node::get_child((int)this_01,(bool)cVar17);
  if (lVar11 != 0) {
    lVar11 = __dynamic_cast(lVar11,&Object::typeinfo,&Label::typeinfo,0);
  }
  *(long *)(this + 0xdb8) = lVar11;
  Node::add_child(this_01,*(undefined8 *)(this + 0xe50),0,0);
  pLVar12 = (Label *)operator_new(0xad8,"");
  local_88 = (char *)0x0;
  Label::Label(pLVar12,(String *)&local_88);
  postinitialize_handler((Object *)pLVar12);
  *(Label **)(this + 0xed8) = pLVar12;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  Node::add_child(this_01,*(undefined8 *)(this + 0xed8),0,0);
  CanvasItem::hide();
  pLVar12 = (Label *)operator_new(0xad8,"");
  local_88 = (char *)0x0;
  Label::Label(pLVar12,(String *)&local_88);
  postinitialize_handler((Object *)pLVar12);
  *(Label **)(this + 0xee0) = pLVar12;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  pSVar15 = *(String **)(this + 0xee0);
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"");
  local_88 = "Scene does not contain any script.";
  local_a0 = 0;
  local_80 = 0x22;
  String::parse_latin1((StrRange *)&local_a0);
  TTR((String *)&local_88,(String *)&local_a0);
  Label::set_text(pSVar15);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  Node::add_child(this_01,*(undefined8 *)(this + 0xee0),0,0);
  CanvasItem::hide();
  pAVar13 = (AcceptDialog *)operator_new(0xdb0,"");
  AcceptDialog::AcceptDialog(pAVar13);
  postinitialize_handler((Object *)pAVar13);
  *(AcceptDialog **)(this + 0xe68) = pAVar13;
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"");
  local_88 = "Select Method";
  local_a0 = 0;
  local_80 = 0xd;
  String::parse_latin1((StrRange *)&local_a0);
  TTR((String *)&local_88,(String *)&local_a0);
  Window::set_title((String *)pAVar13);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  pVVar4 = *(Vector2i **)(this + 0xe68);
  fVar21 = (float)EditorScale::get_scale();
  local_78[0] = CONCAT44(fVar21 * _LC199._4_4_,fVar21 * (float)_LC199);
  local_58[0] = Vector2::operator_cast_to_Vector2i((Vector2 *)local_78);
  Window::set_min_size(pVVar4);
  Node::add_child(this,*(undefined8 *)(this + 0xe68),0,0);
  pBVar8 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar8,true);
  pBVar8[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar8 = &PTR__initialize_classv_00124558;
  postinitialize_handler((Object *)pBVar8);
  Node::add_child(*(undefined8 *)(this + 0xe68),pBVar8,0,0);
  pLVar7 = (LineEdit *)operator_new(0xbb0,"");
  local_88 = (char *)0x0;
  LineEdit::LineEdit(pLVar7,(String *)&local_88);
  postinitialize_handler((Object *)pLVar7);
  *(LineEdit **)(this + 0xe80) = pLVar7;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  Node::add_child(pBVar8,*(undefined8 *)(this + 0xe80),0,0);
  local_88 = "";
  uVar1 = *(undefined8 *)(this + 0xe80);
  local_98[0] = 0;
  local_80 = 0;
  String::parse_latin1((StrRange *)local_98);
  local_88 = (char *)0x0;
  String::parse_latin1((String *)&local_88,"Filter Methods");
  TTR((String *)&local_a0,(String *)&local_88);
  LineEdit::set_placeholder(uVar1,(String *)&local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  LineEdit::set_clear_button_enabled(SUB81(*(undefined8 *)(this + 0xe80),0));
  plVar2 = *(long **)(this + 0xe80);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<ConnectDialog>
            ((ConnectDialog *)&local_88,(char *)this,
             (_func_void *)"&ConnectDialog::_update_method_tree");
  iVar18 = (int)(StrRange *)local_98;
  Callable::unbind(iVar18);
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x270,(StrRange *)local_98,0);
  Callable::~Callable((Callable *)local_98);
  Callable::~Callable((Callable *)&local_88);
  this_03 = (Tree *)operator_new(0xdc8,"");
  Tree::Tree(this_03);
  postinitialize_handler((Object *)this_03);
  *(Tree **)(this + 0xe70) = this_03;
  Node::add_child(pBVar8,this_03,0,0);
  Node::set_auto_translate_mode(*(undefined8 *)(this + 0xe70),2);
  Control::set_v_size_flags(*(undefined8 *)(this + 0xe70),3);
  Tree::set_hide_root(SUB81(*(undefined8 *)(this + 0xe70),0));
  plVar2 = *(long **)(this + 0xe70);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<ConnectDialog>
            ((ConnectDialog *)&local_88,(char *)this,
             (_func_void *)"&ConnectDialog::_method_selected");
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x260,(CowData<char32_t> *)&local_88,0);
  Callable::~Callable((Callable *)&local_88);
  plVar2 = *(long **)(this + 0xe70);
  lVar11 = *(long *)(this + 0xe68);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  pCVar9 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar9);
  *(undefined1 (*) [16])(pCVar9 + 0x30) = (undefined1  [16])0x0;
  *(undefined **)(pCVar9 + 0x20) = &_LC8;
  *(undefined ***)pCVar9 = &PTR_hash_00125840;
  *(undefined8 *)(pCVar9 + 0x40) = 0;
  uVar1 = *(undefined8 *)(lVar11 + 0x60);
  *(long *)(pCVar9 + 0x28) = lVar11;
  *(undefined8 *)(pCVar9 + 0x30) = uVar1;
  *(undefined8 *)(pCVar9 + 0x10) = 0;
  *(code **)(pCVar9 + 0x38) = Window::hide;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar9,(int)pCVar9 + 0x28);
  *(char **)(pCVar9 + 0x20) = "Window::hide";
  Callable::Callable((Callable *)&local_88,pCVar9);
  StringName::StringName((StringName *)local_98,"item_activated",false);
  (*pcVar3)(plVar2,(StrRange *)local_98,(CowData<char32_t> *)&local_88,0);
  if ((StringName::configured != '\0') && (local_98[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_88);
  pLVar12 = (Label *)operator_new(0xad8,"");
  local_88 = (char *)0x0;
  String::parse_latin1((String *)&local_88,"");
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"No method found matching given filters.");
  TTR((String *)&local_a0,(String *)local_98);
  Label::Label(pLVar12,(String *)&local_a0);
  postinitialize_handler((Object *)pLVar12);
  *(Label **)(this + 0xe78) = pLVar12;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  Node::add_child(*(undefined8 *)(this + 0xe68),*(undefined8 *)(this + 0xe78),0,0);
  Label::set_horizontal_alignment(*(undefined8 *)(this + 0xe78),1);
  Label::set_vertical_alignment(*(undefined8 *)(this + 0xe78),1);
  Label::set_autowrap_mode(*(undefined8 *)(this + 0xe78),2);
  pCVar14 = (CheckButton *)operator_new(0xc60,"");
  local_88 = (char *)0x0;
  String::parse_latin1((String *)&local_88,"");
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"Script Methods Only");
  TTR((String *)&local_a0,(String *)local_98);
  CheckButton::CheckButton(pCVar14,(String *)&local_a0);
  postinitialize_handler((Object *)pCVar14);
  *(CheckButton **)(this + 0xe88) = pCVar14;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  Node::add_child(pBVar8,*(undefined8 *)(this + 0xe88),0,0);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xe88),8);
  uVar1 = *(undefined8 *)(this + 0xe88);
  pSVar15 = (String *)EditorSettings::get_singleton();
  Variant::Variant((Variant *)local_58,true);
  local_88 = (char *)0x0;
  String::parse_latin1((String *)&local_88,"show_script_methods_only");
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"editor_metadata");
  EditorSettings::get_project_metadata((String *)local_78,pSVar15,(Variant *)local_98);
  Variant::operator_cast_to_bool((Variant *)local_78);
  BaseButton::set_pressed(SUB81(uVar1,0));
  if (Variant::needs_deinit[(int)local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  plVar2 = *(long **)(this + 0xe88);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<ConnectDialog,CheckButton_const*>
            ((ConnectDialog *)&local_88,(char *)this,
             (_func_void_CheckButton_ptr *)"&ConnectDialog::_method_check_button_pressed");
  Callable::bind<CheckButton*>((CheckButton *)local_98);
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x238,(StrRange *)local_98,0);
  Callable::~Callable((Callable *)local_98);
  Callable::~Callable((Callable *)&local_88);
  pCVar14 = (CheckButton *)operator_new(0xc60,"");
  local_88 = (char *)0x0;
  String::parse_latin1((String *)&local_88,"");
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"Compatible Methods Only");
  TTR((String *)&local_a0,(String *)local_98);
  CheckButton::CheckButton(pCVar14,(String *)&local_a0);
  postinitialize_handler((Object *)pCVar14);
  *(CheckButton **)(this + 0xe90) = pCVar14;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  Node::add_child(pBVar8,*(undefined8 *)(this + 0xe90),0,0);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xe90),8);
  uVar1 = *(undefined8 *)(this + 0xe90);
  pSVar15 = (String *)EditorSettings::get_singleton();
  Variant::Variant((Variant *)local_58,true);
  local_88 = (char *)0x0;
  String::parse_latin1((String *)&local_88,"show_compatible_methods_only");
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"editor_metadata");
  EditorSettings::get_project_metadata((String *)local_78,pSVar15,(Variant *)local_98);
  Variant::operator_cast_to_bool((Variant *)local_78);
  BaseButton::set_pressed(SUB81(uVar1,0));
  if (Variant::needs_deinit[(int)local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  plVar2 = *(long **)(this + 0xe90);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<ConnectDialog,CheckButton_const*>
            ((ConnectDialog *)&local_88,(char *)this,
             (_func_void_CheckButton_ptr *)"&ConnectDialog::_method_check_button_pressed");
  Callable::bind<CheckButton*>((CheckButton *)local_98);
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x238,(StrRange *)local_98,0);
  Callable::~Callable((Callable *)local_98);
  Callable::~Callable((Callable *)&local_88);
  pBVar8 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar8,true);
  pBVar8[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar8 = &PTR__initialize_classv_00124558;
  postinitialize_handler((Object *)pBVar8);
  *(BoxContainer **)(this + 0xe48) = pBVar8;
  Node::add_child(pBVar6,pBVar8,0,0);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xe48),3);
  pVVar5 = *(Vector2 **)(this + 0xe48);
  fVar21 = (float)EditorScale::get_scale();
  local_58[0] = (ulong)(uint)(fVar21 * __LC221);
  Control::set_custom_minimum_size(pVVar5);
  CanvasItem::hide();
  pBVar6 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar6,false);
  pBVar6[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar6 = &PTR__initialize_classv_001241e0;
  postinitialize_handler((Object *)pBVar6);
  this_04 = (OptionButton *)operator_new(0xd00,"");
  local_88 = (char *)0x0;
  OptionButton::OptionButton(this_04,(String *)&local_88);
  postinitialize_handler((Object *)this_04);
  *(OptionButton **)(this + 0xea8) = this_04;
  uVar20 = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xea8),3);
  Node::add_child(pBVar6,*(undefined8 *)(this + 0xea8),0,0);
  do {
    if ((0x7800001UL >> (uVar20 & 0x3f) & 1) == 0) {
      pSVar15 = *(String **)(this + 0xea8);
      Variant::get_type_name((CowData<char32_t> *)&local_88,uVar20);
      OptionButton::add_item(pSVar15,(int)(CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    }
    uVar19 = (int)uVar20 + 1;
    uVar20 = (ulong)uVar19;
  } while (uVar19 != 0x27);
  this_00 = (Vector<Control*> *)(this + 0xec8);
  Vector<Control*>::push_back(this_00,*(Control **)(this + 0xea8));
  pBVar10 = (Button *)operator_new(0xc10,"");
  local_88 = (char *)0x0;
  Button::Button(pBVar10,(String *)&local_88);
  postinitialize_handler((Object *)pBVar10);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  local_88 = (char *)0x0;
  String::parse_latin1((String *)&local_88,"");
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"Add");
  TTR((String *)&local_a0,(String *)local_98);
  Button::set_text((String *)pBVar10);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  Node::add_child(pBVar6,pBVar10,0,0);
  pcVar3 = *(code **)(*(long *)pBVar10 + 0x108);
  create_custom_callable_function_pointer<ConnectDialog>
            ((ConnectDialog *)&local_88,(char *)this,(_func_void *)"&ConnectDialog::_add_bind");
  (*pcVar3)(pBVar10,SceneStringNames::singleton + 0x238,(CowData<char32_t> *)&local_88,0);
  Callable::~Callable((Callable *)&local_88);
  Vector<Control*>::push_back(this_00,(Control *)pBVar10);
  pBVar10 = (Button *)operator_new(0xc10,"");
  local_88 = (char *)0x0;
  Button::Button(pBVar10,(String *)&local_88);
  postinitialize_handler((Object *)pBVar10);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  local_88 = (char *)0x0;
  String::parse_latin1((String *)&local_88,"");
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"Remove");
  TTR((String *)&local_a0,(String *)local_98);
  Button::set_text((String *)pBVar10);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  Node::add_child(pBVar6,pBVar10,0,0);
  pcVar3 = *(code **)(*(long *)pBVar10 + 0x108);
  create_custom_callable_function_pointer<ConnectDialog>
            ((ConnectDialog *)&local_88,(char *)this,(_func_void *)"&ConnectDialog::_remove_bind");
  (*pcVar3)(pBVar10,SceneStringNames::singleton + 0x238,(CowData<char32_t> *)&local_88,0);
  Callable::~Callable((Callable *)&local_88);
  Vector<Control*>::push_back(this_00,(Control *)pBVar10);
  pSVar15 = *(String **)(this + 0xe48);
  local_88 = (char *)0x0;
  String::parse_latin1((String *)&local_88,"");
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"Add Extra Call Argument:");
  TTR((String *)&local_a0,(String *)local_98);
  VBoxContainer::add_margin_child(pSVar15,(Control *)&local_a0,SUB81(pBVar6,0));
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  this_05 = (EditorInspector *)operator_new(0xcb0,"");
  EditorInspector::EditorInspector(this_05);
  postinitialize_handler((Object *)this_05);
  *(EditorInspector **)(this + 0xea0) = this_05;
  Vector<Control*>::push_back(this_00,(Control *)this_05);
  pSVar15 = *(String **)(this + 0xe48);
  local_98[0] = 0;
  uVar1 = *(undefined8 *)(this + 0xea0);
  String::parse_latin1((String *)local_98,"");
  local_88 = "Extra Call Arguments:";
  local_a0 = 0;
  local_80 = 0x15;
  String::parse_latin1((StrRange *)&local_a0);
  TTR((String *)&local_88,(String *)&local_a0);
  VBoxContainer::add_margin_child(pSVar15,(Control *)&local_88,SUB81(uVar1,0));
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  this_06 = (SpinBox *)operator_new(0xba8,"");
  SpinBox::SpinBox(this_06);
  postinitialize_handler((Object *)this_06);
  *(SpinBox **)(this + 0xe98) = this_06;
  local_98[0] = 0;
  local_88 = "";
  local_80 = 0;
  String::parse_latin1((StrRange *)local_98);
  local_88 = (char *)0x0;
  String::parse_latin1((String *)&local_88,"Allows to drop arguments sent by signal emitter.");
  TTR((String *)&local_a0,(String *)&local_88);
  Control::set_tooltip_text((String *)this_06);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  plVar2 = *(long **)(this + 0xe98);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  pCVar9 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar9);
  *(ConnectDialog **)(pCVar9 + 0x28) = this;
  *(undefined1 (*) [16])(pCVar9 + 0x30) = (undefined1  [16])0x0;
  *(undefined **)(pCVar9 + 0x20) = &_LC8;
  *(undefined8 *)(pCVar9 + 0x40) = 0;
  uVar1 = *(undefined8 *)(this + 0x60);
  *(undefined ***)pCVar9 = &PTR_hash_00125960;
  *(undefined8 *)(pCVar9 + 0x30) = uVar1;
  *(code **)(pCVar9 + 0x38) = _unbind_count_changed;
  *(undefined8 *)(pCVar9 + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar9,(int)pCVar9 + 0x28);
  *(char **)(pCVar9 + 0x20) = "ConnectDialog::_unbind_count_changed";
  Callable::Callable((Callable *)&local_88,pCVar9);
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x280,(CowData<char32_t> *)&local_88,0);
  Callable::~Callable((Callable *)&local_88);
  pSVar15 = *(String **)(this + 0xe48);
  local_88 = (char *)0x0;
  uVar1 = *(undefined8 *)(this + 0xe98);
  String::parse_latin1((String *)&local_88,"");
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"Unbind Signal Arguments:");
  TTR((String *)&local_a0,(String *)local_98);
  VBoxContainer::add_margin_child(pSVar15,(Control *)&local_a0,SUB81(uVar1,0));
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  pBVar6 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar6,false);
  pBVar6[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar6 = &PTR__initialize_classv_001241e0;
  postinitialize_handler((Object *)pBVar6);
  local_88 = (char *)0x0;
  String::parse_latin1((String *)&local_88,"");
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"Receiver Method:");
  TTR((String *)&local_a0,(String *)local_98);
  VBoxContainer::add_margin_child((String *)this_01,(Control *)&local_a0,SUB81(pBVar6,0));
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  pLVar7 = (LineEdit *)operator_new(0xbb0,"");
  local_88 = (char *)0x0;
  LineEdit::LineEdit(pLVar7,(String *)&local_88);
  postinitialize_handler((Object *)pLVar7);
  *(LineEdit **)(this + 0xe28) = pLVar7;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xe28),3);
  plVar2 = *(long **)(this + 0xe28);
  lVar11 = *(long *)(this + 0xe70);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  pCVar9 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar9);
  *(undefined1 (*) [16])(pCVar9 + 0x30) = (undefined1  [16])0x0;
  *(undefined **)(pCVar9 + 0x20) = &_LC8;
  *(undefined ***)pCVar9 = &PTR_hash_001259f0;
  *(undefined8 *)(pCVar9 + 0x40) = 0;
  uVar1 = *(undefined8 *)(lVar11 + 0x60);
  *(long *)(pCVar9 + 0x28) = lVar11;
  *(undefined8 *)(pCVar9 + 0x30) = uVar1;
  *(undefined8 *)(pCVar9 + 0x10) = 0;
  *(code **)(pCVar9 + 0x38) = Tree::deselect_all;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar9,(int)pCVar9 + 0x28);
  *(char **)(pCVar9 + 0x20) = "Tree::deselect_all";
  Callable::Callable((Callable *)&local_88,pCVar9);
  Callable::unbind(iVar18);
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x270,(StrRange *)local_98,0);
  Callable::~Callable((Callable *)local_98);
  Callable::~Callable((Callable *)&local_88);
  Node::add_child(pBVar6,*(undefined8 *)(this + 0xe28),0,0);
  AcceptDialog::register_text_enter((LineEdit *)this);
  pBVar10 = (Button *)operator_new(0xc10,"");
  local_88 = (char *)0x0;
  String::parse_latin1((String *)&local_88,"Pick");
  Button::Button(pBVar10,(String *)&local_88);
  postinitialize_handler((Object *)pBVar10);
  *(Button **)(this + 0xe60) = pBVar10;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  Node::add_child(pBVar6,*(undefined8 *)(this + 0xe60),0,0);
  plVar2 = *(long **)(this + 0xe60);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<ConnectDialog>
            ((ConnectDialog *)&local_88,(char *)this,
             (_func_void *)"&ConnectDialog::_open_method_popup");
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x238,(CowData<char32_t> *)&local_88,0);
  Callable::~Callable((Callable *)&local_88);
  pCVar14 = (CheckButton *)operator_new(0xc60,"");
  local_88 = (char *)0x0;
  String::parse_latin1((String *)&local_88,"");
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"Advanced");
  TTR((String *)&local_a0,(String *)local_98);
  CheckButton::CheckButton(pCVar14,(String *)&local_a0);
  postinitialize_handler((Object *)pCVar14);
  *(CheckButton **)(this + 0xec0) = pCVar14;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  Node::add_child(this_01,*(undefined8 *)(this + 0xec0),0,0);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xec0));
  uVar1 = *(undefined8 *)(this + 0xec0);
  pSVar15 = (String *)EditorSettings::get_singleton();
  Variant::Variant((Variant *)local_58,false);
  local_88 = (char *)0x0;
  String::parse_latin1((String *)&local_88,"use_advanced_connections");
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"editor_metadata");
  EditorSettings::get_project_metadata((String *)local_78,pSVar15,(Variant *)local_98);
  Variant::operator_cast_to_bool((Variant *)local_78);
  BaseButton::set_pressed(SUB81(uVar1,0));
  if (Variant::needs_deinit[(int)local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  plVar2 = *(long **)(this + 0xec0);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<ConnectDialog>
            ((ConnectDialog *)&local_88,(char *)this,
             (_func_void *)"&ConnectDialog::_advanced_pressed");
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x238,(CowData<char32_t> *)&local_88,0);
  Callable::~Callable((Callable *)&local_88);
  pBVar6 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar6,false);
  pBVar6[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar6 = &PTR__initialize_classv_001241e0;
  postinitialize_handler((Object *)pBVar6);
  Node::add_child(*(undefined8 *)(this + 0xe48),pBVar6,0,0);
  pCVar16 = (CheckBox *)operator_new(0xc60,"");
  local_88 = (char *)0x0;
  CheckBox::CheckBox(pCVar16,(String *)&local_88);
  postinitialize_handler((Object *)pCVar16);
  *(CheckBox **)(this + 0xeb0) = pCVar16;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xeb0),0);
  pSVar15 = *(String **)(this + 0xeb0);
  local_88 = (char *)0x0;
  String::parse_latin1((String *)&local_88,"");
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"Deferred");
  TTR((String *)&local_a0,(String *)local_98);
  Button::set_text(pSVar15);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  pSVar15 = *(String **)(this + 0xeb0);
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"");
  local_88 = "Defers the signal, storing it in a queue and only firing it at idle time.";
  local_a0 = 0;
  local_80 = 0x49;
  String::parse_latin1((StrRange *)&local_a0);
  TTR((String *)&local_88,(String *)&local_a0);
  Control::set_tooltip_text(pSVar15);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  Node::add_child(pBVar6,*(undefined8 *)(this + 0xeb0),0,0);
  pCVar16 = (CheckBox *)operator_new(0xc60,"");
  local_88 = (char *)0x0;
  CheckBox::CheckBox(pCVar16,(String *)&local_88);
  postinitialize_handler((Object *)pCVar16);
  *(CheckBox **)(this + 0xeb8) = pCVar16;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xeb8),0);
  pSVar15 = *(String **)(this + 0xeb8);
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"");
  local_88 = "One Shot";
  local_a0 = 0;
  local_80 = 8;
  String::parse_latin1((StrRange *)&local_a0);
  TTR((String *)&local_88,(String *)&local_a0);
  Button::set_text(pSVar15);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  pSVar15 = *(String **)(this + 0xeb8);
  local_88 = (char *)0x0;
  String::parse_latin1((String *)&local_88,"");
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"Disconnects the signal after its first emission.");
  TTR((String *)&local_a0,(String *)local_98);
  Control::set_tooltip_text(pSVar15);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  Node::add_child(pBVar6,*(undefined8 *)(this + 0xeb8),0,0);
  this_07 = (Object *)operator_new(0x188,"");
  Object::Object(this_07);
  *(undefined8 *)(this_07 + 0x180) = 0;
  *(undefined ***)this_07 = &PTR__initialize_classv_00124b48;
  postinitialize_handler(this_07);
  *(Object **)(this + 0xe30) = this_07;
  pAVar13 = (AcceptDialog *)operator_new(0xdb0,"");
  AcceptDialog::AcceptDialog(pAVar13);
  postinitialize_handler((Object *)pAVar13);
  *(AcceptDialog **)(this + 0xe58) = pAVar13;
  Node::add_child(this,pAVar13,0,0);
  pSVar15 = *(String **)(this + 0xe58);
  local_88 = (char *)0x0;
  String::parse_latin1((String *)&local_88,"");
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"Cannot connect signal");
  TTR((String *)&local_a0,(String *)local_98);
  Window::set_title(pSVar15);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  uVar1 = *(undefined8 *)(this + 0xe58);
  local_88 = (char *)0x0;
  String::parse_latin1((String *)&local_88,"");
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"Close");
  TTR((String *)&local_a0,(String *)local_98);
  AcceptDialog::set_ok_button_text(uVar1,(String *)&local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  local_88 = (char *)0x0;
  String::parse_latin1((String *)&local_88,"");
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"Connect");
  TTR((String *)&local_a0,(String *)local_98);
  AcceptDialog::set_ok_button_text(this,(String *)&local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ConnectionsDock::ConnectionsDock() */

void __thiscall ConnectionsDock::ConnectionsDock(ConnectionsDock *this)

{
  undefined8 uVar1;
  long *plVar2;
  code *pcVar3;
  long lVar4;
  Ref *pRVar5;
  Object *pOVar6;
  char cVar7;
  LineEdit *this_00;
  CallableCustom *pCVar8;
  Tree *this_01;
  Button *this_02;
  BoxContainer *this_03;
  ConnectDialog *this_04;
  ConfirmationDialog *this_05;
  PopupMenu *pPVar9;
  int iVar10;
  long in_FS_OFFSET;
  undefined8 local_68;
  long local_60;
  Object *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  BoxContainer::BoxContainer((BoxContainer *)this,true);
  this[0xa0c] = (ConnectionsDock)0x1;
  *(undefined ***)this = &PTR__initialize_classv_00125288;
  *(undefined1 (*) [16])(this + 0xa10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa20) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa30) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa40) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa50) = (undefined1  [16])0x0;
  local_60 = 0;
  local_58 = (Object *)&_LC8;
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = (Object *)0x111f56;
  local_68 = 0;
  local_50 = 7;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  Node::set_name((String *)this);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  this_00 = (LineEdit *)operator_new(0xbb0,"");
  local_58 = (Object *)0x0;
  LineEdit::LineEdit(this_00,(String *)&local_58);
  postinitialize_handler((Object *)this_00);
  *(LineEdit **)(this + 0xa58) = this_00;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xa58),3);
  local_58 = (Object *)&_LC8;
  local_60 = 0;
  uVar1 = *(undefined8 *)(this + 0xa58);
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = (Object *)0x111f5e;
  local_68 = 0;
  local_50 = 0xe;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  LineEdit::set_placeholder(uVar1,(String *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  LineEdit::set_clear_button_enabled(SUB81(*(undefined8 *)(this + 0xa58),0));
  plVar2 = *(long **)(this + 0xa58);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  pCVar8 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar8);
  *(undefined **)(pCVar8 + 0x20) = &_LC8;
  *(ConnectionsDock **)(pCVar8 + 0x28) = this;
  *(undefined1 (*) [16])(pCVar8 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)pCVar8 = &PTR_hash_00125a80;
  *(undefined8 *)(pCVar8 + 0x40) = 0;
  uVar1 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(pCVar8 + 0x10) = 0;
  *(undefined8 *)(pCVar8 + 0x30) = uVar1;
  *(code **)(pCVar8 + 0x38) = _filter_changed;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar8,(int)pCVar8 + 0x28);
  *(char **)(pCVar8 + 0x20) = "ConnectionsDock::_filter_changed";
  Callable::Callable((Callable *)&local_58,pCVar8);
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x270,(String *)&local_58,0);
  Callable::~Callable((Callable *)&local_58);
  Node::add_child(this,*(undefined8 *)(this + 0xa58),0,0);
  this_01 = (Tree *)operator_new(0xdc8,"");
  Tree::Tree(this_01);
  *(undefined ***)this_01 = &PTR__initialize_classv_00124f20;
  postinitialize_handler((Object *)this_01);
  *(Tree **)(this + 0xa18) = this_01;
  Node::set_auto_translate_mode(this_01,2);
  Tree::set_columns((int)*(undefined8 *)(this + 0xa18));
  Tree::set_select_mode(*(undefined8 *)(this + 0xa18),1);
  Tree::set_hide_root(SUB81(*(undefined8 *)(this + 0xa18),0));
  Tree::set_column_clip_content((int)*(undefined8 *)(this + 0xa18),false);
  Node::add_child(this,*(undefined8 *)(this + 0xa18),0,0);
  Control::set_v_size_flags(*(undefined8 *)(this + 0xa18),3);
  Tree::set_allow_rmb_select(SUB81(*(undefined8 *)(this + 0xa18),0));
  this_02 = (Button *)operator_new(0xc10,"");
  local_58 = (Object *)0x0;
  Button::Button(this_02,(String *)&local_58);
  postinitialize_handler((Object *)this_02);
  *(Button **)(this + 0xa30) = this_02;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  this_03 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(this_03,false);
  this_03[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)this_03 = &PTR__initialize_classv_001241e0;
  postinitialize_handler((Object *)this_03);
  Node::add_child(this,this_03,0,0);
  BoxContainer::add_spacer(SUB81(this_03,0));
  Node::add_child(this_03,*(undefined8 *)(this + 0xa30),0,0);
  plVar2 = *(long **)(this + 0xa30);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<ConnectionsDock>
            ((ConnectionsDock *)&local_58,(char *)this,
             (_func_void *)"&ConnectionsDock::_connect_pressed");
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x238,(String *)&local_58,0);
  Callable::~Callable((Callable *)&local_58);
  this_04 = (ConnectDialog *)operator_new(0xee8,"");
  ConnectDialog::ConnectDialog(this_04);
  postinitialize_handler((Object *)this_04);
  *(ConnectDialog **)(this + 0xa28) = this_04;
  Node::set_process_shortcut_input(SUB81(this_04,0));
  Node::add_child(this,*(undefined8 *)(this + 0xa28),0,0);
  this_05 = (ConfirmationDialog *)operator_new(0xdb8,"");
  ConfirmationDialog::ConfirmationDialog(this_05);
  postinitialize_handler((Object *)this_05);
  *(ConfirmationDialog **)(this + 0xa20) = this_05;
  Node::add_child(this,this_05,0,0);
  plVar2 = *(long **)(this + 0xa20);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<ConnectionsDock>
            ((ConnectionsDock *)&local_58,(char *)this,
             (_func_void *)"&ConnectionsDock::_disconnect_all");
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x268,(String *)&local_58,0);
  Callable::~Callable((Callable *)&local_58);
  local_58 = (Object *)&_LC8;
  local_60 = 0;
  uVar1 = *(undefined8 *)(this + 0xa20);
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = (Object *)0x117e40;
  local_68 = 0;
  local_50 = 0x41;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  AcceptDialog::set_text(uVar1,(String *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  pPVar9 = (PopupMenu *)operator_new(0xfe0,"");
  PopupMenu::PopupMenu(pPVar9);
  postinitialize_handler((Object *)pPVar9);
  lVar4 = *(long *)pPVar9;
  *(PopupMenu **)(this + 0xa38) = pPVar9;
  pcVar3 = *(code **)(lVar4 + 0x108);
  create_custom_callable_function_pointer<ConnectionsDock,int>
            ((ConnectionsDock *)&local_58,(char *)this,
             (_func_void_int *)"&ConnectionsDock::_handle_class_menu_option");
  (*pcVar3)(pPVar9,SceneStringNames::singleton + 0x240,(String *)&local_58,0);
  Callable::~Callable((Callable *)&local_58);
  plVar2 = *(long **)(this + 0xa38);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<ConnectionsDock>
            ((ConnectionsDock *)&local_58,(char *)this,
             (_func_void *)"&ConnectionsDock::_class_menu_about_to_popup");
  StringName::StringName((StringName *)&local_60,"about_to_popup",false);
  (*pcVar3)(plVar2,(StrRange *)&local_60,(String *)&local_58,0);
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_58);
  local_58 = (Object *)&_LC8;
  local_60 = 0;
  uVar1 = *(undefined8 *)(this + 0xa38);
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = (Object *)0x111f7c;
  local_68 = 0;
  local_50 = 0x12;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  PopupMenu::add_item(uVar1,(String *)&local_58,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  Node::add_child(this,*(undefined8 *)(this + 0xa38),0,0);
  pPVar9 = (PopupMenu *)operator_new(0xfe0,"");
  PopupMenu::PopupMenu(pPVar9);
  postinitialize_handler((Object *)pPVar9);
  lVar4 = *(long *)pPVar9;
  *(PopupMenu **)(this + 0xa48) = pPVar9;
  pcVar3 = *(code **)(lVar4 + 0x108);
  create_custom_callable_function_pointer<ConnectionsDock,int>
            ((ConnectionsDock *)&local_58,(char *)this,
             (_func_void_int *)"&ConnectionsDock::_handle_signal_menu_option");
  (*pcVar3)(pPVar9,SceneStringNames::singleton + 0x240,(String *)&local_58,0);
  Callable::~Callable((Callable *)&local_58);
  plVar2 = *(long **)(this + 0xa48);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<ConnectionsDock>
            ((ConnectionsDock *)&local_58,(char *)this,
             (_func_void *)"&ConnectionsDock::_signal_menu_about_to_popup");
  StringName::StringName((StringName *)&local_60,"about_to_popup",false);
  (*pcVar3)(plVar2,(StrRange *)&local_60,(String *)&local_58,0);
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_58);
  local_58 = (Object *)&_LC8;
  local_60 = 0;
  uVar1 = *(undefined8 *)(this + 0xa48);
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = (Object *)0x111aea;
  local_68 = 0;
  local_50 = 10;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  PopupMenu::add_item(uVar1,(String *)&local_58,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  local_58 = (Object *)&_LC8;
  local_60 = 0;
  uVar1 = *(undefined8 *)(this + 0xa48);
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = (Object *)0x111f8f;
  local_68 = 0;
  local_50 = 0xe;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  PopupMenu::add_item(uVar1,(String *)&local_58,1,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  local_58 = (Object *)&_LC8;
  local_60 = 0;
  uVar1 = *(undefined8 *)(this + 0xa48);
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = (Object *)0x111f9e;
  local_68 = 0;
  local_50 = 9;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  PopupMenu::add_item(uVar1,(String *)&local_58,2,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  local_58 = (Object *)0x0;
  iVar10 = (int)(String *)&local_58;
  PopupMenu::add_separator(*(String **)(this + 0xa48),iVar10);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  local_58 = (Object *)&_LC8;
  local_60 = 0;
  uVar1 = *(undefined8 *)(this + 0xa48);
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = (Object *)0x111f7c;
  local_68 = 0;
  local_50 = 0x12;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  PopupMenu::add_item(uVar1,(String *)&local_58,3,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  Node::add_child(this,*(undefined8 *)(this + 0xa48),0,0);
  pPVar9 = (PopupMenu *)operator_new(0xfe0,"");
  PopupMenu::PopupMenu(pPVar9);
  postinitialize_handler((Object *)pPVar9);
  lVar4 = *(long *)pPVar9;
  *(PopupMenu **)(this + 0xa50) = pPVar9;
  pcVar3 = *(code **)(lVar4 + 0x108);
  create_custom_callable_function_pointer<ConnectionsDock,int>
            ((ConnectionsDock *)&local_58,(char *)this,
             (_func_void_int *)"&ConnectionsDock::_handle_slot_menu_option");
  (*pcVar3)(pPVar9,SceneStringNames::singleton + 0x240,(String *)&local_58,0);
  Callable::~Callable((Callable *)&local_58);
  plVar2 = *(long **)(this + 0xa50);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<ConnectionsDock>
            ((ConnectionsDock *)&local_58,(char *)this,
             (_func_void *)"&ConnectionsDock::_slot_menu_about_to_popup");
  StringName::StringName((StringName *)&local_60,"about_to_popup",false);
  (*pcVar3)(plVar2,(StrRange *)&local_60,(String *)&local_58,0);
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_58);
  local_58 = (Object *)&_LC8;
  local_60 = 0;
  uVar1 = *(undefined8 *)(this + 0xa50);
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = (Object *)0x111fa8;
  local_68 = 0;
  local_50 = 7;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  PopupMenu::add_item(uVar1,(String *)&local_58,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  local_58 = (Object *)&_LC8;
  local_60 = 0;
  uVar1 = *(undefined8 *)(this + 0xa50);
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = (Object *)0x111fb0;
  local_68 = 0;
  local_50 = 0xc;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  PopupMenu::add_item(uVar1,(String *)&local_58,1,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  local_58 = (Object *)0x111afe;
  pRVar5 = *(Ref **)(this + 0xa50);
  local_60 = 0;
  local_50 = 10;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = (Object *)0x111d17;
  local_68 = 0;
  local_50 = 0x1d;
  String::parse_latin1((StrRange *)&local_68);
  ED_SHORTCUT((String *)&local_58,(StrRange *)&local_68,(StrRange *)&local_60,0x400008,0);
  PopupMenu::add_shortcut(pRVar5,iVar10,true,false);
  if (local_58 != (Object *)0x0) {
    cVar7 = RefCounted::unreference();
    pOVar6 = local_58;
    if (cVar7 != '\0') {
      cVar7 = predelete_handler(local_58);
      if (cVar7 != '\0') {
        (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
        Memory::free_static(pOVar6,false);
      }
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  Node::add_child(this,*(undefined8 *)(this + 0xa50),0,0);
  plVar2 = *(long **)(this + 0xa28);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<ConnectionsDock>
            ((ConnectionsDock *)&local_58,(char *)this,
             (_func_void *)"&ConnectionsDock::_make_or_edit_connection");
  StringName::StringName((StringName *)&local_60,"connected",false);
  (*pcVar3)(plVar2,(StrRange *)&local_60,(String *)&local_58,0);
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_58);
  plVar2 = *(long **)(this + 0xa18);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<ConnectionsDock>
            ((ConnectionsDock *)&local_58,(char *)this,
             (_func_void *)"&ConnectionsDock::_tree_item_selected");
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x260,(String *)&local_58,0);
  Callable::~Callable((Callable *)&local_58);
  plVar2 = *(long **)(this + 0xa18);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<ConnectionsDock>
            ((ConnectionsDock *)&local_58,(char *)this,
             (_func_void *)"&ConnectionsDock::_tree_item_activated");
  StringName::StringName((StringName *)&local_60,"item_activated",false);
  (*pcVar3)(plVar2,(StrRange *)&local_60,(String *)&local_58,0);
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_58);
  plVar2 = *(long **)(this + 0xa18);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  pCVar8 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar8);
  *(undefined **)(pCVar8 + 0x20) = &_LC8;
  *(undefined1 (*) [16])(pCVar8 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)pCVar8 = &PTR_hash_00125c30;
  *(undefined8 *)(pCVar8 + 0x40) = 0;
  uVar1 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(pCVar8 + 0x10) = 0;
  *(undefined8 *)(pCVar8 + 0x30) = uVar1;
  *(code **)(pCVar8 + 0x38) = _tree_gui_input;
  *(ConnectionsDock **)(pCVar8 + 0x28) = this;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar8,(int)pCVar8 + 0x28);
  *(char **)(pCVar8 + 0x20) = "ConnectionsDock::_tree_gui_input";
  Callable::Callable((Callable *)&local_58,pCVar8);
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x28,(String *)&local_58,0);
  Callable::~Callable((Callable *)&local_58);
  EditorScale::get_scale();
  StringName::StringName((StringName *)&local_58,"separation",false);
  Control::add_theme_constant_override((StringName *)this,iVar10);
  if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
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
  
  return (uint)CONCAT71(0x1260,in_RSI == &AcceptDialog::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1260,in_RSI == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1260,in_RSI == &Window::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1260,in_RSI == &Viewport::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1260,in_RSI == &Node::get_class_ptr_static()::ptr) |
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



/* Tree::is_class_ptr(void*) const */

uint __thiscall Tree::is_class_ptr(Tree *this,void *param_1)

{
  return (uint)CONCAT71(0x1260,(undefined4 *)param_1 == &Control::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x125f,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1260,(undefined4 *)param_1 == &CanvasItem::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1260,(undefined4 *)param_1 == &Node::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1260,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* ConnectDialog::_property_can_revertv(StringName const&) const */

undefined8 ConnectDialog::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* ConnectDialog::_property_get_revertv(StringName const&, Variant&) const */

undefined8 ConnectDialog::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ScriptLanguage::can_make_function() const */

undefined8 ScriptLanguage::can_make_function(void)

{
  return 1;
}



/* ConnectDialogBinds::is_class_ptr(void*) const */

uint __thiscall ConnectDialogBinds::is_class_ptr(ConnectDialogBinds *this,void *param_1)

{
  return (uint)CONCAT71(0x1260,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x125d,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
}



/* ConnectDialogBinds::_validate_propertyv(PropertyInfo&) const */

void ConnectDialogBinds::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* ConnectDialogBinds::_property_can_revertv(StringName const&) const */

undefined8 ConnectDialogBinds::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* ConnectDialogBinds::_property_get_revertv(StringName const&, Variant&) const */

undefined8 ConnectDialogBinds::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ConnectDialogBinds::_notificationv(int, bool) */

void ConnectDialogBinds::_notificationv(int param_1,bool param_2)

{
  return;
}



/* CallableCustomMethodPointer<ConnectionsDock, void, Ref<InputEvent>
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ConnectionsDock,void,Ref<InputEvent>const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ConnectionsDock,void,Ref<InputEvent>const&> *this)

{
  return;
}



/* CallableCustomMethodPointer<ConnectionsDock, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ConnectionsDock,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ConnectionsDock,void,int> *this)

{
  return;
}



/* CallableCustomMethodPointer<ConnectionsDock, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ConnectionsDock,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ConnectionsDock,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<ConnectionsDock, void, String const&>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<ConnectionsDock,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ConnectionsDock,void,String_const&> *this)

{
  return;
}



/* CallableCustomMethodPointer<Tree, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Tree,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Tree,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<ConnectDialog, void, double>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ConnectDialog,void,double>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ConnectDialog,void,double> *this)

{
  return;
}



/* CallableCustomMethodPointer<ConnectDialog, void, CheckButton
   const*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ConnectDialog,void,CheckButton_const*>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ConnectDialog,void,CheckButton_const*> *this)

{
  return;
}



/* CallableCustomMethodPointer<Window, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Window,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Window,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<SceneTreeEditor, void, String const&>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<SceneTreeEditor,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<SceneTreeEditor,void,String_const&> *this)

{
  return;
}



/* CallableCustomMethodPointer<ConnectDialog, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ConnectDialog,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ConnectDialog,void> *this)

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



/* CallableCustomMethodPointer<ConnectionsDock, void, Ref<InputEvent>
   const&>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<ConnectionsDock,void,Ref<InputEvent>const&>::get_argument_count
          (CallableCustomMethodPointer<ConnectionsDock,void,Ref<InputEvent>const&> *this,
          bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<ConnectionsDock, void, int>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<ConnectionsDock,void,int>::get_argument_count
          (CallableCustomMethodPointer<ConnectionsDock,void,int> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<ConnectionsDock, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<ConnectionsDock,void>::get_argument_count
          (CallableCustomMethodPointer<ConnectionsDock,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<ConnectionsDock, void, String const&>::get_argument_count(bool&)
   const */

undefined8 __thiscall
CallableCustomMethodPointer<ConnectionsDock,void,String_const&>::get_argument_count
          (CallableCustomMethodPointer<ConnectionsDock,void,String_const&> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<Tree, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<Tree,void>::get_argument_count
          (CallableCustomMethodPointer<Tree,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<ConnectDialog, void, double>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<ConnectDialog,void,double>::get_argument_count
          (CallableCustomMethodPointer<ConnectDialog,void,double> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<ConnectDialog, void, CheckButton const*>::get_argument_count(bool&)
   const */

undefined8 __thiscall
CallableCustomMethodPointer<ConnectDialog,void,CheckButton_const*>::get_argument_count
          (CallableCustomMethodPointer<ConnectDialog,void,CheckButton_const*> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<Window, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<Window,void>::get_argument_count
          (CallableCustomMethodPointer<Window,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<SceneTreeEditor, void, String const&>::get_argument_count(bool&)
   const */

undefined8 __thiscall
CallableCustomMethodPointer<SceneTreeEditor,void,String_const&>::get_argument_count
          (CallableCustomMethodPointer<SceneTreeEditor,void,String_const&> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<ConnectDialog, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<ConnectDialog,void>::get_argument_count
          (CallableCustomMethodPointer<ConnectDialog,void> *this,bool *param_1)

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



/* CallableCustomMethodPointer<Control, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<Control,void>::get_argument_count
          (CallableCustomMethodPointer<Control,void> *this,bool *param_1)

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



/* CallableCustomMethodPointer<Control, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Control,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Control,void> *this)

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



/* CallableCustomMethodPointer<SceneTreeEditor, void, String const&>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<SceneTreeEditor,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<SceneTreeEditor,void,String_const&> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<Window, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Window,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Window,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<ConnectDialog, void, CheckButton
   const*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ConnectDialog,void,CheckButton_const*>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ConnectDialog,void,CheckButton_const*> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<ConnectDialog, void, double>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ConnectDialog,void,double>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ConnectDialog,void,double> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<Tree, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Tree,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Tree,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<ConnectDialog, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ConnectDialog,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ConnectDialog,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<ConnectionsDock, void, String const&>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<ConnectionsDock,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ConnectionsDock,void,String_const&> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<ConnectionsDock, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ConnectionsDock,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ConnectionsDock,void,int> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<ConnectionsDock, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ConnectionsDock,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ConnectionsDock,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<ConnectionsDock, void, Ref<InputEvent>
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ConnectionsDock,void,Ref<InputEvent>const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ConnectionsDock,void,Ref<InputEvent>const&> *this)

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



/* Tree::_property_get_revertv(StringName const&, Variant&) const */

undefined8 Tree::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* ConnectionsDock::_property_get_revertv(StringName const&, Variant&) const */

undefined8 ConnectionsDock::_property_get_revertv(StringName *param_1,Variant *param_2)

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
  
  if ((code *)PTR__property_can_revert_00130008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* VBoxContainer::_property_can_revertv(StringName const&) const */

undefined8 VBoxContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00130008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* Tree::_property_can_revertv(StringName const&) const */

undefined8 Tree::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00130008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* ConnectionsDock::_property_can_revertv(StringName const&) const */

undefined8 ConnectionsDock::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00130008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* ConfirmationDialog::~ConfirmationDialog() */

void __thiscall ConfirmationDialog::~ConfirmationDialog(ConfirmationDialog *this)

{
  *(undefined ***)this = &PTR__initialize_classv_001248d0;
  AcceptDialog::~AcceptDialog((AcceptDialog *)this);
  return;
}



/* ConfirmationDialog::~ConfirmationDialog() */

void __thiscall ConfirmationDialog::~ConfirmationDialog(ConfirmationDialog *this)

{
  *(undefined ***)this = &PTR__initialize_classv_001248d0;
  AcceptDialog::~AcceptDialog((AcceptDialog *)this);
  operator_delete(this,0xdb8);
  return;
}



/* ConfirmationDialog::_getv(StringName const&, Variant&) const */

undefined8 ConfirmationDialog::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__get_00130010 != Object::_get) {
    uVar1 = Window::_get(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* ConnectDialog::_getv(StringName const&, Variant&) const */

undefined8 ConnectDialog::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__get_00130010 != Object::_get) {
    uVar1 = Window::_get(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* ConfirmationDialog::_setv(StringName const&, Variant const&) */

undefined8 ConfirmationDialog::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__set_00130018 != Object::_set) {
    uVar1 = Window::_set(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* ConnectDialog::_setv(StringName const&, Variant const&) */

undefined8 ConnectDialog::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__set_00130018 != Object::_set) {
    uVar1 = Window::_set(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00125cc0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00125cc0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* ConnectionsDockTree::~ConnectionsDockTree() */

void __thiscall ConnectionsDockTree::~ConnectionsDockTree(ConnectionsDockTree *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00124f20;
  Tree::~Tree((Tree *)this);
  return;
}



/* ConnectionsDockTree::~ConnectionsDockTree() */

void __thiscall ConnectionsDockTree::~ConnectionsDockTree(ConnectionsDockTree *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00124f20;
  Tree::~Tree((Tree *)this);
  operator_delete(this,0xdc8);
  return;
}



/* CowData<Control*>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Control*>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* ConnectDialog::ok_pressed() [clone .cold] */

void ConnectDialog::ok_pressed(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<char32_t>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<char32_t>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ConnectDialog::generate_method_callback_name(Node*, String const&, Node*) [clone .cold] */

void ConnectDialog::generate_method_callback_name(Node *param_1,String *param_2,Node *param_3)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* ConnectionsDock::_bind_methods() [clone .cold] */

void ConnectionsDock::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Variant>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Variant>::_copy_on_write(void)

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



/* ConnectDialog::_validate_propertyv(PropertyInfo&) const */

void ConnectDialog::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  Viewport::_validate_property(param_1);
  if ((code *)PTR__validate_property_00130020 == Viewport::_validate_property) {
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
  if ((code *)PTR__validate_property_00130020 == Viewport::_validate_property) {
    return;
  }
  Window::_validate_property(param_1);
  return;
}



/* Tree::_validate_propertyv(PropertyInfo&) const */

void Tree::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  if ((code *)PTR__validate_property_00130028 == CanvasItem::_validate_property) {
    return;
  }
  Control::_validate_property(param_1);
  return;
}



/* CallableCustomMethodPointer<ConnectionsDock, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<ConnectionsDock,void>::get_object
          (CallableCustomMethodPointer<ConnectionsDock,void> *this)

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
      goto LAB_0011228d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0011228d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0011228d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<ConnectDialog, void, double>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<ConnectDialog,void,double>::get_object
          (CallableCustomMethodPointer<ConnectDialog,void,double> *this)

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
      goto LAB_0011238d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0011238d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0011238d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<ConnectDialog, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<ConnectDialog,void>::get_object
          (CallableCustomMethodPointer<ConnectDialog,void> *this)

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
      goto LAB_0011248d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0011248d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0011248d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<ConnectionsDock, void, int>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<ConnectionsDock,void,int>::get_object
          (CallableCustomMethodPointer<ConnectionsDock,void,int> *this)

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
      goto LAB_0011258d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0011258d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0011258d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<SceneTreeEditor, void, String const&>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<SceneTreeEditor,void,String_const&>::get_object
          (CallableCustomMethodPointer<SceneTreeEditor,void,String_const&> *this)

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
      goto LAB_0011268d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0011268d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0011268d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<Window, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<Window,void>::get_object(CallableCustomMethodPointer<Window,void> *this)

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
      goto LAB_0011278d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0011278d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0011278d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<ConnectionsDock, void, Ref<InputEvent> const&>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<ConnectionsDock,void,Ref<InputEvent>const&>::get_object
          (CallableCustomMethodPointer<ConnectionsDock,void,Ref<InputEvent>const&> *this)

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
      goto LAB_0011288d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0011288d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0011288d:
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
      goto LAB_0011298d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0011298d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0011298d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<Tree, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<Tree,void>::get_object(CallableCustomMethodPointer<Tree,void> *this)

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
      goto LAB_00112a8d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00112a8d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00112a8d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<ConnectDialog, void, CheckButton const*>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<ConnectDialog,void,CheckButton_const*>::get_object
          (CallableCustomMethodPointer<ConnectDialog,void,CheckButton_const*> *this)

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
      goto LAB_00112b8d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00112b8d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00112b8d:
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
      goto LAB_00112c8d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00112c8d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00112c8d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<ConnectionsDock, void, String const&>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<ConnectionsDock,void,String_const&>::get_object
          (CallableCustomMethodPointer<ConnectionsDock,void,String_const&> *this)

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
      goto LAB_00112d8d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00112d8d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00112d8d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* ConnectionsDock::_validate_propertyv(PropertyInfo&) const */

void ConnectionsDock::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_00130030 == Control::_validate_property) {
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
  if ((code *)PTR__validate_property_00130030 == Control::_validate_property) {
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
  if ((code *)PTR__validate_property_00130030 == Control::_validate_property) {
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
    if ((code *)PTR__notification_00130038 != Window::_notification) {
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
  if ((code *)PTR__notification_00130038 == Window::_notification) {
    return;
  }
  AcceptDialog::_notification(iVar1);
  return;
}



/* ConnectDialog::is_class_ptr(void*) const */

uint ConnectDialog::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x1260,in_RSI == &AcceptDialog::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1260,in_RSI == &ConfirmationDialog::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1260,in_RSI == &Window::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1260,in_RSI == &Viewport::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1260,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* Tree::_setv(StringName const&, Variant const&) */

undefined8 Tree::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_00130040 != CanvasItem::_set) {
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
    if ((code *)PTR__set_00130040 != CanvasItem::_set) {
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
    if ((code *)PTR__set_00130040 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* ConnectionsDock::_setv(StringName const&, Variant const&) */

undefined8 ConnectionsDock::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_00130040 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
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
    uVar1 = (uint)CONCAT71(0x1260,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1260,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1260,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1260,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1260,in_RSI == &Node::get_class_ptr_static()::ptr) |
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
    uVar1 = (uint)CONCAT71(0x1260,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1260,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1260,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1260,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1260,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* ConnectionsDock::is_class_ptr(void*) const */

ulong ConnectionsDock::is_class_ptr(void *param_1)

{
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  if (in_RSI == &VBoxContainer::get_class_ptr_static()::ptr ||
      in_RSI == &get_class_ptr_static()::ptr) {
    return CONCAT71(0x1260,in_RSI == &VBoxContainer::get_class_ptr_static()::ptr ||
                           in_RSI == &get_class_ptr_static()::ptr);
  }
  return (ulong)((uint)CONCAT71(0x1260,in_RSI == &Container::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x1260,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x1260,in_RSI == &Control::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x1260,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x1260,in_RSI == &Node::get_class_ptr_static()::ptr) |
                CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr));
}



/* WARNING: Removing unreachable block (ram,0x001134a8) */
/* HBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 HBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00130048 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00113518) */
/* VBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 VBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00130048 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00113588) */
/* Tree::_getv(StringName const&, Variant&) const */

undefined8 Tree::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00130048 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x001135f8) */
/* ConnectionsDock::_getv(StringName const&, Variant&) const */

undefined8 ConnectionsDock::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00130048 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x001136ca) */
/* Tree::_notificationv(int, bool) */

void __thiscall Tree::_notificationv(Tree *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_00130050 != Control::_notification) {
      Tree::_notification(iVar1);
    }
    Control::_notification(iVar1);
    CanvasItem::_notification(iVar1);
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  CanvasItem::_notification(iVar1);
  Control::_notification(iVar1);
  if ((code *)PTR__notification_00130050 == Control::_notification) {
    return;
  }
  Tree::_notification(iVar1);
  return;
}



/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = RefCounted::reference;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00113760;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00113760:
  Control::~Control((Control *)this);
  return;
}



/* VBoxContainer::~VBoxContainer() */

void __thiscall VBoxContainer::~VBoxContainer(VBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = RefCounted::reference;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001137c0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_001137c0:
  Control::~Control((Control *)this);
  return;
}



/* VBoxContainer::~VBoxContainer() */

void __thiscall VBoxContainer::~VBoxContainer(VBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = RefCounted::reference;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00113820;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00113820:
  Control::~Control((Control *)this);
  operator_delete(this,0xa10);
  return;
}



/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = RefCounted::reference;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00113890;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00113890:
  Control::~Control((Control *)this);
  operator_delete(this,0xa10);
  return;
}



/* PlaceHolderScriptInstance::get_script() const */

void PlaceHolderScriptInstance::get_script(void)

{
  char cVar1;
  long in_RSI;
  long *in_RDI;
  
  *in_RDI = 0;
  if (*(long *)(in_RSI + 0x80) != 0) {
    *in_RDI = *(long *)(in_RSI + 0x80);
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *in_RDI = 0;
    }
  }
  return;
}



/* VBoxContainer::_notificationv(int, bool) */

void __thiscall VBoxContainer::_notificationv(VBoxContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_00130058 != Container::_notification) {
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
  if ((code *)PTR__notification_00130058 == Container::_notification) {
    return;
  }
  BoxContainer::_notification(iVar1);
  return;
}



/* HBoxContainer::_notificationv(int, bool) */

void __thiscall HBoxContainer::_notificationv(HBoxContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_00130058 != Container::_notification) {
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
  if ((code *)PTR__notification_00130058 == Container::_notification) {
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



/* SortArray<List<MethodInfo, DefaultAllocator>::Element*, List<MethodInfo,
   DefaultAllocator>::AuxiliaryComparator<Comparator<MethodInfo> >, true>::introsort(long, long,
   List<MethodInfo, DefaultAllocator>::Element**, long) const [clone .isra.0] */

void SortArray<List<MethodInfo,DefaultAllocator>::Element*,List<MethodInfo,DefaultAllocator>::AuxiliaryComparator<Comparator<MethodInfo>>,true>
     ::introsort(long param_1,long param_2,Element **param_3,long param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  Element *pEVar5;
  long lVar6;
  String *pSVar7;
  int iVar8;
  long lVar9;
  int iVar10;
  String *pSVar11;
  String *pSVar12;
  long lVar13;
  Element **ppEVar14;
  Element **ppEVar15;
  Element **ppEVar16;
  long lVar17;
  bool bVar18;
  bool bVar19;
  long local_70;
  Element **local_60;
  long local_58;
  
  lVar13 = param_2 - param_1;
  if (lVar13 < 0x11) {
    return;
  }
  local_70 = param_2;
  if (param_4 != 0) {
    ppEVar15 = param_3 + param_1;
LAB_00113c52:
    param_4 = param_4 + -1;
    ppEVar14 = param_3 + param_2 + -1;
    ppEVar16 = param_3 + (lVar13 >> 1) + param_1;
    pSVar12 = (String *)*ppEVar15;
    pSVar11 = (String *)*ppEVar16;
    iVar8 = *(int *)(pSVar12 + 0x3c);
    iVar2 = *(int *)(pSVar11 + 0x3c);
    if (iVar8 == iVar2) {
      cVar1 = String::operator<(pSVar12,pSVar11);
      if (cVar1 == '\0') {
        pSVar12 = (String *)*ppEVar15;
        iVar8 = *(int *)((Element *)pSVar12 + 0x3c);
        goto LAB_00113e62;
      }
      pSVar11 = (String *)*ppEVar16;
      pEVar5 = *ppEVar14;
      iVar2 = *(int *)(pSVar11 + 0x3c);
      iVar3 = *(int *)(pEVar5 + 0x3c);
      bVar19 = SBORROW4(iVar3,iVar2);
      iVar10 = iVar3 - iVar2;
      bVar18 = iVar10 == 0;
      if (bVar18) goto LAB_00113efb;
LAB_00113c96:
      pSVar7 = (String *)*ppEVar15;
      iVar8 = *(int *)(pSVar7 + 0x3c);
      pSVar12 = pSVar11;
      if (!bVar18 && bVar19 == iVar10 < 0) goto LAB_00113cc0;
      iVar8 = *(int *)(pSVar7 + 0x3c);
      bVar18 = SBORROW4(iVar8,iVar3);
      iVar10 = iVar8 - iVar3;
      if (iVar8 != iVar3) goto LAB_00113cb1;
LAB_00114341:
      cVar1 = String::operator<(pSVar7,(String *)pEVar5);
      if (cVar1 == '\0') goto LAB_00113f39;
LAB_0011435c:
      iVar8 = *(int *)(*ppEVar15 + 0x3c);
      pSVar12 = (String *)*ppEVar14;
      iVar2 = *(int *)(*ppEVar14 + 0x3c);
    }
    else {
      if (iVar8 < iVar2) {
        pEVar5 = *ppEVar14;
        iVar3 = *(int *)(pEVar5 + 0x3c);
        bVar19 = SBORROW4(iVar3,iVar2);
        iVar10 = iVar3 - iVar2;
        bVar18 = iVar3 == iVar2;
        if (!bVar18) goto LAB_00113c96;
LAB_00113efb:
        cVar1 = String::operator<(pSVar11,(String *)pEVar5);
        if (cVar1 != '\0') {
          iVar8 = *(int *)(*ppEVar15 + 0x3c);
          pSVar12 = (String *)*ppEVar16;
          iVar2 = *(int *)(*ppEVar16 + 0x3c);
          goto LAB_00113cc0;
        }
        pEVar5 = *ppEVar14;
        pSVar7 = (String *)*ppEVar15;
        iVar3 = *(int *)(pEVar5 + 0x3c);
        iVar8 = *(int *)(pSVar7 + 0x3c);
        bVar18 = SBORROW4(iVar8,iVar3);
        iVar10 = iVar8 - iVar3;
        if (iVar10 == 0) goto LAB_00114341;
LAB_00113cb1:
        pSVar12 = (String *)pEVar5;
        iVar2 = iVar3;
        if (bVar18 != iVar10 < 0) goto LAB_00113cc0;
LAB_00113cb7:
        pSVar12 = pSVar7;
        iVar2 = iVar8;
        goto LAB_00113cc0;
      }
LAB_00113e62:
      pSVar11 = (String *)*ppEVar14;
      iVar3 = *(int *)(pSVar11 + 0x3c);
      if (iVar3 == iVar8) {
        cVar1 = String::operator<(pSVar12,pSVar11);
        if (cVar1 != '\0') {
LAB_00113f39:
          pSVar7 = (String *)*ppEVar15;
          iVar8 = *(int *)(pSVar7 + 0x3c);
          goto LAB_00113cb7;
        }
        pSVar11 = (String *)*ppEVar14;
        iVar3 = *(int *)((Element *)pSVar11 + 0x3c);
      }
      else {
        iVar2 = iVar8;
        if (iVar8 < iVar3) goto LAB_00113cc0;
      }
      pSVar7 = (String *)*ppEVar16;
      iVar10 = *(int *)(pSVar7 + 0x3c);
      if (iVar10 == iVar3) {
        cVar1 = String::operator<(pSVar7,pSVar11);
        if (cVar1 != '\0') goto LAB_0011435c;
        pSVar7 = (String *)*ppEVar16;
        iVar10 = *(int *)(pSVar7 + 0x3c);
        pEVar5 = *ppEVar15;
      }
      else {
        pEVar5 = *ppEVar15;
        iVar8 = *(int *)(pEVar5 + 0x3c);
        pSVar12 = pSVar11;
        iVar2 = iVar3;
        if (iVar10 < iVar3) goto LAB_00113cc0;
      }
      iVar8 = *(int *)(pEVar5 + 0x3c);
      pSVar12 = pSVar7;
      iVar2 = iVar10;
    }
LAB_00113cc0:
    lVar13 = param_2;
    local_70 = param_1;
    do {
      if (iVar8 == iVar2) {
        cVar1 = String::operator<((String *)param_3[local_70],pSVar12);
        if (cVar1 != '\0') goto LAB_00113ce0;
        iVar2 = *(int *)(pSVar12 + 0x3c);
LAB_00113d10:
        lVar13 = lVar13 + -1;
        ppEVar14 = param_3 + lVar13;
        while( true ) {
          iVar8 = *(int *)((String *)*ppEVar14 + 0x3c);
          if (iVar8 == iVar2) {
            cVar1 = String::operator<(pSVar12,(String *)*ppEVar14);
            if (cVar1 == '\0') goto joined_r0x00113d60;
          }
          else if (iVar8 <= iVar2) goto joined_r0x00113d60;
          if (param_1 == lVar13) break;
          iVar2 = *(int *)(pSVar12 + 0x3c);
          lVar13 = lVar13 + -1;
          ppEVar14 = ppEVar14 + -1;
        }
        _err_print_error("partitioner","./core/templates/sort_array.h",0xb9,
                         "bad comparison function; sorting will be broken",0,0);
joined_r0x00113d60:
        if (lVar13 <= local_70) goto LAB_00113db4;
        pEVar5 = param_3[local_70];
        param_3[local_70] = *ppEVar14;
        *ppEVar14 = pEVar5;
      }
      else {
        if (iVar2 <= iVar8) goto LAB_00113d10;
LAB_00113ce0:
        if (param_2 + -1 == local_70) {
          _err_print_error("partitioner","./core/templates/sort_array.h",0xb2,
                           "bad comparison function; sorting will be broken",0,0);
          iVar2 = *(int *)(pSVar12 + 0x3c);
          goto LAB_00113d10;
        }
      }
      lVar6 = local_70 + 1;
      local_70 = local_70 + 1;
      iVar8 = *(int *)(param_3[lVar6] + 0x3c);
      iVar2 = *(int *)(pSVar12 + 0x3c);
    } while( true );
  }
LAB_00113f59:
  lVar6 = lVar13 + -2 >> 1;
  local_58 = lVar6 * 2 + 2;
  local_60 = param_3 + param_1 + lVar6;
  do {
    pSVar12 = (String *)*local_60;
    lVar9 = lVar6;
    lVar4 = local_58;
    if (local_58 < lVar13) {
      do {
        ppEVar14 = param_3 + param_1 + lVar4 + -1;
        ppEVar15 = param_3 + param_1 + lVar4;
        pSVar7 = (String *)*ppEVar14;
        pSVar11 = (String *)*ppEVar15;
        if (*(int *)(pSVar11 + 0x3c) == *(int *)(pSVar7 + 0x3c)) {
          cVar1 = String::operator<(pSVar11,pSVar7);
          if (cVar1 == '\0') {
            pSVar11 = (String *)*ppEVar15;
            goto LAB_00113fda;
          }
          pSVar7 = (String *)*ppEVar14;
LAB_0011401c:
          param_3[lVar9 + param_1] = (Element *)pSVar7;
          lVar9 = lVar4 + -1;
        }
        else {
          if (*(int *)(pSVar11 + 0x3c) < *(int *)(pSVar7 + 0x3c)) goto LAB_0011401c;
LAB_00113fda:
          param_3[lVar9 + param_1] = (Element *)pSVar11;
          ppEVar14 = ppEVar15;
          lVar9 = lVar4;
          lVar4 = lVar4 + 1;
        }
        lVar4 = lVar4 * 2;
      } while (lVar4 < lVar13);
      ppEVar15 = ppEVar14;
      if (lVar4 == lVar13) goto LAB_00114294;
LAB_0011404b:
      lVar4 = lVar9 + -1;
      if (lVar9 <= lVar6) goto LAB_00114374;
      do {
        lVar17 = lVar4 >> 1;
        ppEVar15 = param_3 + param_1 + lVar17;
        pSVar11 = (String *)*ppEVar15;
        if (*(int *)(pSVar11 + 0x3c) == *(int *)(pSVar12 + 0x3c)) {
          cVar1 = String::operator<(pSVar11,pSVar12);
          if (cVar1 == '\0') {
LAB_00114105:
            param_3[lVar9 + param_1] = (Element *)pSVar12;
            goto joined_r0x00114120;
          }
          pSVar11 = (String *)*ppEVar15;
        }
        else if (*(int *)(pSVar12 + 0x3c) <= *(int *)(pSVar11 + 0x3c)) goto LAB_00114105;
        param_3[lVar9 + param_1] = (Element *)pSVar11;
        lVar4 = (lVar17 + -1) - (lVar17 + -1 >> 0x3f);
        lVar9 = lVar17;
      } while (lVar6 < lVar17);
      *ppEVar15 = (Element *)pSVar12;
joined_r0x00114120:
      if (lVar6 == 0) goto LAB_00114150;
    }
    else {
      ppEVar15 = local_60;
      ppEVar14 = local_60;
      if (local_58 == lVar13) {
LAB_00114294:
        lVar9 = lVar4 + -1;
        ppEVar14 = param_3 + param_1 + lVar9;
        *ppEVar15 = *ppEVar14;
        goto LAB_0011404b;
      }
LAB_00114374:
      *ppEVar14 = (Element *)pSVar12;
    }
    local_60 = local_60 + -1;
    lVar6 = lVar6 + -1;
    local_58 = local_58 + -2;
  } while( true );
LAB_00113db4:
  introsort(local_70,param_2,param_3,param_4);
  lVar13 = local_70 - param_1;
  if (lVar13 < 0x11) {
    return;
  }
  param_2 = local_70;
  if (param_4 == 0) goto LAB_00113f59;
  goto LAB_00113c52;
LAB_00114150:
  ppEVar15 = param_3 + param_1;
  lVar13 = (local_70 + -1) - param_1;
  do {
    pSVar12 = (String *)ppEVar15[lVar13];
    ppEVar15[lVar13] = *ppEVar15;
    if (lVar13 < 3) {
      if (lVar13 != 2) {
        *ppEVar15 = (Element *)pSVar12;
        return;
      }
      lVar6 = param_1 + 1;
      lVar9 = 0;
      *ppEVar15 = param_3[lVar6];
LAB_00114256:
      do {
        ppEVar16 = param_3 + param_1 + lVar9;
        pSVar11 = (String *)*ppEVar16;
        if (*(int *)(pSVar11 + 0x3c) == *(int *)(pSVar12 + 0x3c)) {
          cVar1 = String::operator<(pSVar11,pSVar12);
          if (cVar1 == '\0') {
LAB_001142e5:
            ppEVar16 = param_3 + lVar6;
            goto LAB_001142e9;
          }
          pSVar11 = (String *)*ppEVar16;
        }
        else if (*(int *)(pSVar12 + 0x3c) <= *(int *)(pSVar11 + 0x3c)) goto LAB_001142e5;
        param_3[lVar6] = (Element *)pSVar11;
        if (lVar9 == 0) goto LAB_001142e9;
        lVar6 = param_1 + lVar9;
        lVar9 = (lVar9 + -1) / 2;
      } while( true );
    }
    lVar4 = 0;
    lVar6 = 2;
    do {
      ppEVar16 = param_3 + param_1 + lVar6;
      ppEVar14 = param_3 + param_1 + lVar6 + -1;
      pSVar11 = (String *)*ppEVar16;
      pSVar7 = (String *)*ppEVar14;
      if (*(int *)(pSVar11 + 0x3c) == *(int *)(pSVar7 + 0x3c)) {
        cVar1 = String::operator<(pSVar11,pSVar7);
        if (cVar1 == '\0') {
          pSVar11 = (String *)*ppEVar16;
          goto LAB_001141b2;
        }
        pSVar7 = (String *)*ppEVar14;
LAB_001141f0:
        param_3[lVar4 + param_1] = (Element *)pSVar7;
        lVar4 = lVar6 + -1;
        ppEVar16 = ppEVar14;
        lVar9 = lVar6;
      }
      else {
        if (*(int *)(pSVar11 + 0x3c) < *(int *)(pSVar7 + 0x3c)) goto LAB_001141f0;
LAB_001141b2:
        lVar9 = lVar6 + 1;
        param_3[lVar4 + param_1] = (Element *)pSVar11;
        lVar4 = lVar6;
      }
      lVar6 = lVar9 * 2;
    } while (lVar6 < lVar13);
    if (lVar6 == lVar13) {
      lVar6 = lVar13 + -1 + param_1;
      lVar9 = lVar13 + -2 >> 1;
      *ppEVar16 = param_3[lVar6];
      goto LAB_00114256;
    }
    lVar6 = param_1 + lVar4;
    lVar9 = (lVar4 + -1) / 2;
    if (0 < lVar4) goto LAB_00114256;
LAB_001142e9:
    *ppEVar16 = (Element *)pSVar12;
    lVar13 = lVar13 + -1;
  } while( true );
}



/* ConnectionsDock::_get_class_namev() const */

undefined8 * ConnectionsDock::_get_class_namev(void)

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
LAB_00114413:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00114413;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"ConnectionsDock");
      goto LAB_0011447e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"ConnectionsDock");
LAB_0011447e:
  return &_get_class_namev()::_class_name_static;
}



/* ConnectDialogBinds::_get_class_namev() const */

undefined8 * ConnectDialogBinds::_get_class_namev(void)

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
LAB_00114503:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00114503;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"ConnectDialogBinds");
      goto LAB_0011456e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"ConnectDialogBinds");
LAB_0011456e:
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
LAB_001145f3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001145f3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
      goto LAB_0011465e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
LAB_0011465e:
  return &_get_class_namev()::_class_name_static;
}



/* Tree::_get_class_namev() const */

undefined8 * Tree::_get_class_namev(void)

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
LAB_001146d3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001146d3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"Tree");
      goto LAB_0011473e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"Tree");
LAB_0011473e:
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
LAB_001147c3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001147c3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"ConfirmationDialog");
      goto LAB_0011482e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"ConfirmationDialog");
LAB_0011482e:
  return &_get_class_namev()::_class_name_static;
}



/* ConnectDialog::_get_class_namev() const */

undefined8 * ConnectDialog::_get_class_namev(void)

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
LAB_001148b3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001148b3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"ConnectDialog");
      goto LAB_0011491e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"ConnectDialog");
LAB_0011491e:
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
LAB_001149a3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001149a3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
      goto LAB_00114a0e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
LAB_00114a0e:
  return &_get_class_namev()::_class_name_static;
}



/* ConnectDialog::_notificationv(int, bool) */

void __thiscall ConnectDialog::_notificationv(ConnectDialog *this,int param_1,bool param_2)

{
  if (!param_2) {
    ConfirmationDialog::_notificationv((ConfirmationDialog *)this,param_1,false);
    if (param_1 == 10) {
      EditorInspector::edit(*(Object **)(this + 0xea0));
    }
    else if (param_1 != 0x20) {
      return;
    }
    _notification((int)this);
    return;
  }
  if (param_1 == 10) {
    EditorInspector::edit(*(Object **)(this + 0xea0));
  }
  else if (param_1 != 0x20) goto LAB_00114a6d;
  _notification((int)this);
LAB_00114a6d:
  ConfirmationDialog::_notificationv((ConfirmationDialog *)this,param_1,true);
  return;
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



/* ConnectDialogBinds::is_class(String const&) const */

undefined8 __thiscall ConnectDialogBinds::is_class(ConnectDialogBinds *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_00114c2b;
  }
  cVar5 = String::operator==(param_1,"ConnectDialogBinds");
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
      if (cVar5 != '\0') goto LAB_00114c2b;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar6 = String::operator==(param_1,"Object");
      return uVar6;
    }
  }
  else {
LAB_00114c2b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Tree::get_class() const */

void Tree::get_class(void)

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



/* ConnectDialog::get_class() const */

void ConnectDialog::get_class(void)

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



/* ConnectDialogBinds::get_class() const */

void ConnectDialogBinds::get_class(void)

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



/* ConnectionsDock::get_class() const */

void ConnectionsDock::get_class(void)

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
    if (cVar5 != '\0') goto LAB_0011547b;
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
      if (cVar5 != '\0') goto LAB_0011547b;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar6 = String::operator==(param_1,"Object");
      return uVar6;
    }
  }
  else {
LAB_0011547b:
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
    if (cVar5 != '\0') goto LAB_001156bb;
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
      if (cVar5 != '\0') goto LAB_001156bb;
    }
    cVar5 = String::operator==(param_1,"CanvasItem");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Node::is_class((Node *)this,param_1);
        return uVar6;
      }
      goto LAB_001157f8;
    }
  }
LAB_001156bb:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_001157f8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Tree::is_class(String const&) const */

undefined8 __thiscall Tree::is_class(Tree *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_0011586f;
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
LAB_0011586f:
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
    if (cVar5 != '\0') goto LAB_00115923;
  }
  cVar5 = String::operator==(param_1,"Tree");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = Control::is_class((Control *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_00115923:
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
    if (cVar5 != '\0') goto LAB_00115a9b;
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
      if (cVar5 != '\0') goto LAB_00115a9b;
    }
    cVar5 = String::operator==(param_1,"Container");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Control::is_class((Control *)this,param_1);
        return uVar6;
      }
      goto LAB_00115bd8;
    }
  }
LAB_00115a9b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00115bd8:
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
            if (lVar4 == 0) goto LAB_00115c4f;
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
LAB_00115c4f:
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
    if (cVar5 != '\0') goto LAB_00115d03;
  }
  cVar5 = String::operator==(param_1,"VBoxContainer");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = BoxContainer::is_class((BoxContainer *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_00115d03:
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
            if (lVar4 == 0) goto LAB_00115dcf;
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
LAB_00115dcf:
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
    if (cVar5 != '\0') goto LAB_00115e83;
  }
  cVar5 = String::operator==(param_1,"HBoxContainer");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = BoxContainer::is_class((BoxContainer *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_00115e83:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ConnectionsDock::is_class(String const&) const */

undefined8 __thiscall ConnectionsDock::is_class(ConnectionsDock *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_00115fdb;
  }
  cVar5 = String::operator==(param_1,"ConnectionsDock");
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
      if (cVar5 != '\0') goto LAB_00115fdb;
    }
    cVar5 = String::operator==(param_1,"VBoxContainer");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = BoxContainer::is_class((BoxContainer *)this,param_1);
        return uVar6;
      }
      goto LAB_00116118;
    }
  }
LAB_00115fdb:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00116118:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x00116200) */
/* BoxContainer::_notificationv(int, bool) */

void __thiscall BoxContainer::_notificationv(BoxContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_00130058 != Container::_notification) {
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
  if ((code *)PTR__notification_00130058 == Container::_notification) {
    return;
  }
  BoxContainer::_notification(iVar1);
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
    if (cVar5 != '\0') goto LAB_0011634b;
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
      if (cVar5 != '\0') goto LAB_0011634b;
    }
    cVar5 = String::operator==(param_1,"Viewport");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Node::is_class((Node *)this,param_1);
        return uVar6;
      }
      goto LAB_00116488;
    }
  }
LAB_0011634b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00116488:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ConfirmationDialog::is_class(String const&) const */

undefined8 __thiscall ConfirmationDialog::is_class(ConfirmationDialog *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_0011659b;
  }
  cVar5 = String::operator==(param_1,"ConfirmationDialog");
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
      if (cVar5 != '\0') goto LAB_0011659b;
    }
    cVar5 = String::operator==(param_1,"AcceptDialog");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Window::is_class((Window *)this,param_1);
        return uVar6;
      }
      goto LAB_001166d8;
    }
  }
LAB_0011659b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_001166d8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ConnectDialog::is_class(String const&) const */

undefined8 __thiscall ConnectDialog::is_class(ConnectDialog *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_0011674f;
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
LAB_0011674f:
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
    if (cVar5 != '\0') goto LAB_00116803;
  }
  cVar5 = String::operator==(param_1,"ConnectDialog");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = ConfirmationDialog::is_class((ConfirmationDialog *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_00116803:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ConnectDialog::ConnectionData::get_callable() const */

void ConnectDialog::ConnectionData::get_callable(void)

{
  long lVar1;
  Object *pOVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  Callable *pCVar6;
  Callable *pCVar8;
  long in_RSI;
  ulong uVar9;
  Callable *in_RDI;
  long *plVar10;
  long in_FS_OFFSET;
  Callable local_48 [24];
  long local_30;
  Callable *pCVar7;
  
  pCVar6 = local_48;
  pCVar7 = local_48;
  pCVar8 = local_48;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(in_RSI + 0x24) < 1) {
    lVar5 = *(long *)(in_RSI + 0x30);
    if (lVar5 == 0) {
      Callable::Callable(in_RDI,*(Object **)(in_RSI + 8),(StringName *)(in_RSI + 0x18));
      pCVar8 = local_48;
    }
    else {
      lVar1 = *(long *)(lVar5 + -8);
      uVar9 = lVar1 * 8 + 0x17;
      pCVar8 = local_48;
      while (pCVar7 != local_48 + -(uVar9 & 0xfffffffffffff000)) {
        pCVar6 = pCVar8 + -0x1000;
        *(undefined8 *)(pCVar8 + -8) = *(undefined8 *)(pCVar8 + -8);
        pCVar7 = pCVar8 + -0x1000;
        pCVar8 = pCVar8 + -0x1000;
      }
      uVar9 = (ulong)((uint)uVar9 & 0xff0);
      lVar3 = -uVar9;
      if (uVar9 != 0) {
        *(undefined8 *)(pCVar6 + -8) = *(undefined8 *)(pCVar6 + -8);
      }
      plVar10 = (long *)((ulong)(pCVar6 + lVar3 + 0xf) & 0xfffffffffffffff0);
      plVar4 = plVar10 + lVar1;
      if (0 < lVar1) {
        do {
          *plVar10 = lVar5;
          plVar10 = plVar10 + 1;
          lVar5 = lVar5 + 0x18;
        } while (plVar10 != plVar4);
      }
      pOVar2 = *(Object **)(in_RSI + 8);
      *(undefined8 *)(pCVar6 + lVar3 + -8) = 0x11692c;
      Callable::Callable(local_48,pOVar2,(StringName *)(in_RSI + 0x18));
      *(undefined8 *)(pCVar6 + lVar3 + -8) = 0x116946;
      Callable::bindp((Variant **)in_RDI,(int)local_48);
      *(undefined8 *)(pCVar6 + lVar3 + -8) = 0x11694e;
      Callable::~Callable(local_48);
      pCVar8 = pCVar6 + lVar3;
    }
  }
  else {
    Callable::Callable(local_48,*(Object **)(in_RSI + 8),(StringName *)(in_RSI + 0x18));
    Callable::unbind((int)in_RDI);
    Callable::~Callable(local_48);
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)(pCVar8 + -8) = 0x1169b8;
    __stack_chk_fail();
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
    if (*in_RSI != 0) goto LAB_00116adc;
  }
  else {
    iVar35 = *(int *)((long)in_RSI + 0x24);
LAB_00116adc:
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
              goto LAB_00116e3b;
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
  if ((float)uVar28 * __LC33 < (float)(iVar35 + 1)) {
    if ((int)in_RSI[4] == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_set.h",0xbf,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      iVar35 = *(int *)((long)in_RSI + 0x24);
      iVar30 = -1;
      goto LAB_00116e3b;
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
LAB_00116e3b:
  lVar32 = *in_RSI;
  *(int *)(param_1 + 0xc) = iVar30;
  *(long *)param_1 = lVar32;
  *(int *)(param_1 + 8) = iVar35;
  return param_1;
}



/* List<Pair<Variant::Type, StringName>, DefaultAllocator>::~List() */

void __thiscall
List<Pair<Variant::Type,StringName>,DefaultAllocator>::~List
          (List<Pair<Variant::Type,StringName>,DefaultAllocator> *this)

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
      if ((StringName::configured != '\0') && (*(long *)((long)pvVar1 + 8) != 0)) {
        StringName::unref();
      }
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



/* Callable create_custom_callable_function_pointer<ConnectDialog>(ConnectDialog*, char const*, void
   (ConnectDialog::*)()) */

ConnectDialog *
create_custom_callable_function_pointer<ConnectDialog>
          (ConnectDialog *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC8;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00125720;
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



/* Callable create_custom_callable_function_pointer<ConnectDialog, CheckButton
   const*>(ConnectDialog*, char const*, void (ConnectDialog::*)(CheckButton const*)) */

ConnectDialog *
create_custom_callable_function_pointer<ConnectDialog,CheckButton_const*>
          (ConnectDialog *param_1,char *param_2,_func_void_CheckButton_ptr *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC8;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_001258d0;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_void_CheckButton_ptr **)(this + 0x20) = param_3 + 1;
  Callable::Callable((Callable *)param_1,this);
  return param_1;
}



/* Callable Callable::bind<CheckButton*>(CheckButton*) const */

CheckButton * Callable::bind<CheckButton*>(CheckButton *param_1)

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



/* List<Object::Connection, DefaultAllocator>::~List() */

void __thiscall
List<Object::Connection,DefaultAllocator>::~List(List<Object::Connection,DefaultAllocator> *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = *(long **)this;
  if (plVar4 == (long *)0x0) {
    return;
  }
  do {
    plVar1 = (long *)*plVar4;
    if (plVar1 == (long *)0x0) {
      if ((int)plVar4[2] != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if ((long *)plVar1[7] == plVar4) {
      lVar3 = plVar1[5];
      lVar2 = plVar1[6];
      *plVar4 = lVar3;
      if (plVar1 == (long *)plVar4[1]) {
        plVar4[1] = lVar2;
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0x28) = lVar3;
        lVar3 = plVar1[5];
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x30) = lVar2;
      }
      Callable::~Callable((Callable *)(plVar1 + 2));
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
    plVar4 = *(long **)this;
  } while ((int)plVar4[2] != 0);
  Memory::free_static(plVar4,false);
  return;
}



/* Callable create_custom_callable_function_pointer<ConnectionsDock>(ConnectionsDock*, char const*,
   void (ConnectionsDock::*)()) */

ConnectionsDock *
create_custom_callable_function_pointer<ConnectionsDock>
          (ConnectionsDock *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC8;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00125b10;
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



/* Callable create_custom_callable_function_pointer<ConnectionsDock, int>(ConnectionsDock*, char
   const*, void (ConnectionsDock::*)(int)) */

ConnectionsDock *
create_custom_callable_function_pointer<ConnectionsDock,int>
          (ConnectionsDock *param_1,char *param_2,_func_void_int *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC8;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00125ba0;
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



/* ConnectDialogBinds::_initialize_classv() */

void ConnectDialogBinds::_initialize_classv(void)

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
    local_48 = "ConnectDialogBinds";
    local_60 = 0;
    local_40 = 0x12;
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
    initialize_class()::initialized = '\x01';
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x00118328) */
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



/* WARNING: Removing unreachable block (ram,0x00118660) */
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



/* WARNING: Removing unreachable block (ram,0x00118950) */
/* String vformat<StringName, StringName>(String const&, StringName const, StringName const) */

undefined8 *
vformat<StringName,StringName>
          (undefined8 *param_1,bool *param_2,StringName *param_3,StringName *param_4)

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



/* WARNING: Removing unreachable block (ram,0x00118c08) */
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



/* WARNING: Removing unreachable block (ram,0x00118f08) */
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
        if (pvVar5 == (void *)0x0) goto LAB_00119234;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_00119234:
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  return;
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
      _err_print_error(&_LC79,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00119400;
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
LAB_00119400:
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
      goto LAB_0011980f;
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
                    /* WARNING: Could not recover jumptable at 0x001196b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0011980f:
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
      goto LAB_001199cf;
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
                    /* WARNING: Could not recover jumptable at 0x00119876. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_001199cf:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<ConnectionsDock, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<ConnectionsDock,void>::call
          (CallableCustomMethodPointer<ConnectionsDock,void> *this,Variant **param_1,int param_2,
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
      goto LAB_00119bbf;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_00119bbf;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00119b98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_00119c81;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_00119bbf:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC79,"./core/object/callable_method_pointer.h",0x67,
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
LAB_00119c81:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<Tree, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<Tree,void>::call
          (CallableCustomMethodPointer<Tree,void> *this,Variant **param_1,int param_2,
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
      goto LAB_00119ddf;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_00119ddf;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00119db8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_00119ea1;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_00119ddf:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC79,"./core/object/callable_method_pointer.h",0x67,
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
LAB_00119ea1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<Window, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<Window,void>::call
          (CallableCustomMethodPointer<Window,void> *this,Variant **param_1,int param_2,
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
      goto LAB_00119fff;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_00119fff;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00119fd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_0011a0c1;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_00119fff:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC79,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0011a0c1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<ConnectDialog, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<ConnectDialog,void>::call
          (CallableCustomMethodPointer<ConnectDialog,void> *this,Variant **param_1,int param_2,
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
      goto LAB_0011a21f;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_0011a21f;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0011a1f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_0011a2e1;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0011a21f:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC79,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0011a2e1:
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
      goto LAB_0011a43f;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_0011a43f;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0011a418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_0011a501;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0011a43f:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC79,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0011a501:
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
      goto LAB_0011a65f;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_0011a65f;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0011a638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_0011a721;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0011a65f:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC79,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0011a721:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<ConnectionsDock, void, Ref<InputEvent> const&>::call(Variant const**,
   int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<ConnectionsDock,void,Ref<InputEvent>const&>::call
          (CallableCustomMethodPointer<ConnectionsDock,void,Ref<InputEvent>const&> *this,
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
          goto LAB_0011a7fe;
        }
        if (param_2 == 0) {
          *(undefined4 *)param_4 = 4;
          *(undefined4 *)(param_4 + 8) = 1;
          goto LAB_0011a7fe;
        }
        *(undefined4 *)param_4 = 0;
        if (((ulong)pcVar10 & 1) != 0) {
          pcVar10 = *(code **)(pcVar10 + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar6 = Variant::can_convert_strict(*(undefined4 *)*param_1);
        uVar4 = _LC87;
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
LAB_0011a8cd:
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
              if (pOVar5 != (Object *)0x0) goto LAB_0011a8cd;
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
        goto LAB_0011a7fe;
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
  local_48 = (Object *)0x1199d4;
  local_40 = 0x15;
  String::parse_latin1((StrRange *)&local_50);
  uitos((ulong)local_60);
  operator+((char *)local_58,(String *)"Invalid Object id \'");
  String::operator+((String *)&local_48,(String *)local_58);
  _err_print_error(&_LC79,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (String *)&local_48,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref(local_58);
  CowData<char32_t>::_unref(local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
LAB_0011a7fe:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<ConnectionsDock, void, int>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<ConnectionsDock,void,int>::call
          (CallableCustomMethodPointer<ConnectionsDock,void,int> *this,Variant **param_1,int param_2
          ,Variant *param_3,CallError *param_4)

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
      goto LAB_0011ac68;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar8[1] == 0) goto LAB_0011ac68;
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
        uVar4 = _LC88;
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        iVar6 = Variant::operator_cast_to_int(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0011ac17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),iVar6);
          return;
        }
        goto LAB_0011ad2a;
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
LAB_0011ac68:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC79,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0011ad2a:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<ConnectDialog, void, double>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<ConnectDialog,void,double>::call
          (CallableCustomMethodPointer<ConnectDialog,void,double> *this,Variant **param_1,
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
      goto LAB_0011aee6;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar7[1] == 0) goto LAB_0011aee6;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if ((uint)param_2 < 2) {
      if (param_2 != 0) {
        *(undefined4 *)param_4 = 0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,3);
        uVar4 = _LC89;
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        Variant::operator_cast_to_double(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0011ae95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2));
          return;
        }
        goto LAB_0011afa8;
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
LAB_0011aee6:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC79,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0011afa8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<ConnectDialog, void, CheckButton const*>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<ConnectDialog,void,CheckButton_const*>::call
          (CallableCustomMethodPointer<ConnectDialog,void,CheckButton_const*> *this,
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
      goto LAB_0011b1e5;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar10[1] == 0) goto LAB_0011b1e5;
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
LAB_0011b0f0:
          uVar4 = _LC87;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        else {
          this_00 = *param_1;
          pOVar6 = Variant::operator_cast_to_Object_(this_00);
          pOVar7 = Variant::operator_cast_to_Object_(this_00);
          if (((pOVar7 == (Object *)0x0) ||
              (lVar8 = __dynamic_cast(pOVar7,&Object::typeinfo,&CheckButton::typeinfo,0), lVar8 == 0
              )) && (pOVar6 != (Object *)0x0)) goto LAB_0011b0f0;
        }
        pOVar6 = Variant::operator_cast_to_Object_(*param_1);
        if (pOVar6 != (Object *)0x0) {
          pOVar6 = (Object *)__dynamic_cast(pOVar6,&Object::typeinfo,&CheckButton::typeinfo,0);
        }
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0011b157. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),pOVar6);
          return;
        }
        goto LAB_0011b2a7;
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
LAB_0011b1e5:
    local_60 = 0;
    local_58 = "\', can\'t call method.";
    local_50 = 0x15;
    String::parse_latin1((StrRange *)&local_60);
    uitos((ulong)local_70);
    operator+((char *)local_68,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_58,(String *)local_68);
    _err_print_error(&_LC79,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0011b2a7:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<SceneTreeEditor, void, String const&>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<SceneTreeEditor,void,String_const&>::call
          (CallableCustomMethodPointer<SceneTreeEditor,void,String_const&> *this,Variant **param_1,
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
            uVar4 = _LC90;
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
        goto LAB_0011b37e;
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
  _err_print_error(&_LC79,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (Variant *)&local_48,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref(local_58);
  CowData<char32_t>::_unref(local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
LAB_0011b37e:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<ConnectionsDock, void, String const&>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<ConnectionsDock,void,String_const&>::call
          (CallableCustomMethodPointer<ConnectionsDock,void,String_const&> *this,Variant **param_1,
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
            uVar4 = _LC90;
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
        goto LAB_0011b5ee;
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
  _err_print_error(&_LC79,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (Variant *)&local_48,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref(local_58);
  CowData<char32_t>::_unref(local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
LAB_0011b5ee:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ConnectDialogBinds::_getv(StringName const&, Variant&) const */

undefined4 __thiscall
ConnectDialogBinds::_getv(ConnectDialogBinds *this,StringName *param_1,Variant *param_2)

{
  char *__s;
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  long in_FS_OFFSET;
  undefined8 local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  lVar4 = *(long *)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar4 == 0) {
    local_60 = 0;
  }
  else {
    __s = *(char **)(lVar4 + 8);
    local_60 = 0;
    if (__s == (char *)0x0) {
      if (*(long *)(lVar4 + 0x10) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar4 + 0x10));
      }
    }
    else {
      local_50 = strlen(__s);
      local_58 = __s;
      String::parse_latin1((StrRange *)&local_60);
    }
  }
  uVar2 = String::begins_with((char *)&local_60);
  if ((char)uVar2 == '\0') {
    uVar2 = 0;
    goto LAB_0011b8ba;
  }
  String::get_slice((char *)&local_58,(int)(CowData<char32_t> *)&local_60);
  iVar3 = String::to_int();
  uVar5 = iVar3 - 1;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((int)uVar5 < 0) {
    if (*(long *)(this + 0x180) == 0) goto LAB_0011b988;
    lVar4 = *(long *)(*(long *)(this + 0x180) + -8);
  }
  else {
    lVar1 = *(long *)(this + 0x180);
    if (lVar1 == 0) {
LAB_0011b988:
      lVar4 = 0;
    }
    else {
      lVar4 = *(long *)(lVar1 + -8);
      if ((long)(ulong)uVar5 < lVar4) {
        Variant::operator=(param_2,(Variant *)(lVar1 + (ulong)uVar5 * 0x18));
        goto LAB_0011b8ba;
      }
    }
  }
  uVar2 = 0;
  _err_print_index_error
            ("_get","editor/connections_dialog.cpp",99,(long)(int)uVar5,lVar4,"which",
             "params.size()","",false,false);
LAB_0011b8ba:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Tree::_initialize_classv() */

void Tree::_initialize_classv(void)

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
    if (Control::initialize_class()::initialized == '\0') {
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
          if ((code *)PTR__bind_methods_00130070 != Node::_bind_methods) {
            Node::_bind_methods();
          }
          Node::initialize_class()::initialized = '\x01';
        }
        local_58 = "Node";
        local_68 = 0;
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
        if ((code *)PTR__bind_compatibility_methods_00130060 != Object::_bind_compatibility_methods)
        {
          CanvasItem::_bind_compatibility_methods();
        }
        CanvasItem::initialize_class()::initialized = '\x01';
      }
      local_68 = 0;
      local_58 = "CanvasItem";
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
    local_58 = "Control";
    local_68 = 0;
    local_50 = 7;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "Tree";
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
    if ((code *)PTR__bind_methods_00130068 != Control::_bind_methods) {
      Tree::_bind_methods();
    }
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
            if ((code *)PTR__bind_methods_00130070 != Node::_bind_methods) {
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
      if ((code *)PTR__bind_compatibility_methods_00130078 != Object::_bind_compatibility_methods) {
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
    if ((code *)PTR__bind_methods_00130080 != AcceptDialog::_bind_methods) {
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
              if ((code *)PTR__bind_methods_00130070 != Node::_bind_methods) {
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
            if ((code *)PTR__bind_compatibility_methods_00130060 !=
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
      if ((code *)PTR__bind_methods_00130088 != Container::_bind_methods) {
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
              if ((code *)PTR__bind_methods_00130070 != Node::_bind_methods) {
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
            if ((code *)PTR__bind_compatibility_methods_00130060 !=
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
      if ((code *)PTR__bind_methods_00130088 != Container::_bind_methods) {
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
  local_78 = &_LC24;
  local_88 = 0;
  local_90 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = &_LC24;
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
LAB_0011d17d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0011d17d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar5;
      local_68 = local_80;
      goto joined_r0x0011d19f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar5;
joined_r0x0011d19f:
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
LAB_0011d4fd:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0011d4fd;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0011d51f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0011d51f:
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
      goto LAB_0011d8b1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011d8b1:
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
  if ((code *)PTR__get_property_list_00130090 != Object::_get_property_list) {
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
LAB_0011dbad:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0011dbad;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0011dbcf;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0011dbcf:
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
LAB_0011df8d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0011df8d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0011dfaf;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0011dfaf:
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



/* ConnectDialog::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall ConnectDialog::_get_property_listv(ConnectDialog *this,List *param_1,bool param_2)

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
  local_78 = "ConnectDialog";
  local_70 = 0xd;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "ConnectDialog";
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
LAB_0011e36d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0011e36d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0011e38f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0011e38f:
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
  StringName::StringName((StringName *)&local_78,"ConnectDialog",false);
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
LAB_0011e74d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0011e74d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0011e76f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0011e76f:
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
  if ((code *)PTR__get_property_list_00130098 != Object::_get_property_list) {
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
LAB_0011eb3d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0011eb3d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0011eb5f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0011eb5f:
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
  if ((code *)PTR__get_property_list_001300a0 != CanvasItem::_get_property_list) {
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
LAB_0011ef2d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0011ef2d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0011ef4f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0011ef4f:
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
LAB_0011f30d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0011f30d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0011f32f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0011f32f:
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
LAB_0011f6ed:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0011f6ed;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0011f70f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0011f70f:
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



/* ConnectionsDock::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
ConnectionsDock::_get_property_listv(ConnectionsDock *this,List *param_1,bool param_2)

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
    VBoxContainer::_get_property_listv((VBoxContainer *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "ConnectionsDock";
  local_70 = 0xf;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "ConnectionsDock";
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
  if (local_90 == 0) {
LAB_0011facd:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0011facd;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0011faef;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0011faef:
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
  StringName::StringName((StringName *)&local_78,"ConnectionsDock",false);
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
LAB_0011fead:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0011fead;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0011fecf;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0011fecf:
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



/* Tree::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Tree::_get_property_listv(Tree *this,List *param_1,bool param_2)

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
  undefined *local_78;
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
  local_78 = &_LC17;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = &_LC17;
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
LAB_0012028d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0012028d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x001202af;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x001202af:
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
  StringName::StringName((StringName *)&local_78,"Tree",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (undefined *)0x0)) {
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



/* ConnectDialogBinds::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void ConnectDialogBinds::_get_property_listv(List *param_1,bool param_2)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined1 (*pauVar6) [16];
  undefined7 in_register_00000031;
  List<PropertyInfo,DefaultAllocator> *this;
  long lVar7;
  long in_FS_OFFSET;
  CowData<char32_t> *local_b8;
  long local_a0;
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
  
  this = (List<PropertyInfo,DefaultAllocator> *)CONCAT71(in_register_00000031,param_2);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = 0;
  local_90 = 0;
  local_78 = "ConnectDialogBinds";
  local_70 = 0x12;
  String::parse_latin1((StrRange *)&local_90);
  local_98 = 0;
  local_78 = "ConnectDialogBinds";
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
      goto LAB_00120667;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00120667:
  local_b8 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back(this,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b8);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"ConnectDialogBinds",false);
  ClassDB::get_property_list((StringName *)&local_78,(List *)this,true,(Object *)param_1);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  lVar1 = *(long *)(param_1 + 0x180);
  lVar4 = 0;
  do {
    if ((lVar1 == 0) || (*(long *)(lVar1 + -8) <= lVar4)) {
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    local_78 = "";
    local_88 = 0;
    local_90 = 0;
    local_70 = 0;
    String::parse_latin1((StrRange *)&local_90);
    itos((long)&local_a0);
    operator+((char *)&local_98,(String *)"bind/argument_");
    lVar1 = *(long *)(param_1 + 0x180);
    if (lVar1 == 0) {
      lVar7 = 0;
LAB_00120ad3:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,lVar4,lVar7,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar7 = *(long *)(lVar1 + -8);
    if (lVar7 <= lVar4) goto LAB_00120ad3;
    local_70 = 0;
    local_78 = (char *)CONCAT44(local_78._4_4_,*(undefined4 *)(lVar1 + lVar4 * 0x18));
    if (local_98 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
    }
    local_68 = 0;
    local_60 = 0;
    local_58 = 0;
    if (local_90 == 0) {
LAB_00120a71:
      local_50 = 6;
      StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
      lVar1 = *(long *)this;
    }
    else {
      CowData<char32_t>::_ref(local_b8,(CowData *)&local_90);
      local_50 = 6;
      if (local_60 != 0x11) goto LAB_00120a71;
      StringName::StringName((StringName *)&local_80,(String *)local_b8,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      lVar1 = *(long *)this;
    }
    if (lVar1 == 0) {
      pauVar6 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
      *(undefined1 (**) [16])this = pauVar6;
      *(undefined4 *)pauVar6[1] = 0;
      *pauVar6 = (undefined1  [16])0x0;
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
      CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)local_b8);
    }
    lVar7 = local_58;
    puVar5[10] = local_50;
    plVar2 = *(long **)this;
    lVar1 = plVar2[1];
    *(undefined8 *)(puVar5 + 0xc) = 0;
    *(long **)(puVar5 + 0x10) = plVar2;
    *(long *)(puVar5 + 0xe) = lVar1;
    if (lVar1 != 0) {
      *(undefined4 **)(lVar1 + 0x30) = puVar5;
    }
    plVar2[1] = (long)puVar5;
    if (*plVar2 == 0) {
      *plVar2 = (long)puVar5;
    }
    *(int *)(plVar2 + 2) = (int)plVar2[2] + 1;
    if (local_58 != 0) {
      LOCK();
      plVar2 = (long *)(local_58 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        local_58 = 0;
        Memory::free_static((void *)(lVar7 + -0x10),false);
      }
    }
    if ((StringName::configured != '\0') && (local_68 != 0)) {
      StringName::unref();
    }
    lVar1 = local_70;
    if (local_70 != 0) {
      LOCK();
      plVar2 = (long *)(local_70 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        local_70 = 0;
        Memory::free_static((void *)(lVar1 + -0x10),false);
      }
    }
    lVar1 = local_98;
    if (local_98 != 0) {
      LOCK();
      plVar2 = (long *)(local_98 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        local_98 = 0;
        Memory::free_static((void *)(lVar1 + -0x10),false);
      }
    }
    lVar1 = local_a0;
    if (local_a0 != 0) {
      LOCK();
      plVar2 = (long *)(local_a0 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        local_a0 = 0;
        Memory::free_static((void *)(lVar1 + -0x10),false);
      }
    }
    lVar1 = local_90;
    if (local_90 != 0) {
      LOCK();
      plVar2 = (long *)(local_90 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        local_90 = 0;
        Memory::free_static((void *)(lVar1 + -0x10),false);
      }
    }
    if ((StringName::configured != '\0') && (local_88 != 0)) {
      StringName::unref();
    }
    lVar1 = *(long *)(param_1 + 0x180);
    lVar4 = lVar4 + 1;
  } while( true );
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



/* Ref<Script>::unref() */

void __thiscall Ref<Script>::unref(Ref<Script> *this)

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



/* MethodBind* create_method_bind<ConnectionsDock>(void (ConnectionsDock::*)()) */

MethodBind * create_method_bind<ConnectionsDock>(_func_void *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_00125cc0;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "ConnectionsDock";
  local_30 = 0xf;
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



/* ConnectionsDock::_initialize_classv() */

void ConnectionsDock::_initialize_classv(void)

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
                if ((code *)PTR__bind_methods_00130070 != Node::_bind_methods) {
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
              if ((code *)PTR__bind_compatibility_methods_00130060 !=
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
        if ((code *)PTR__bind_methods_00130088 != Container::_bind_methods) {
          BoxContainer::_bind_methods();
        }
        BoxContainer::initialize_class()::initialized = '\x01';
      }
      local_68 = 0;
      local_58 = "BoxContainer";
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
      VBoxContainer::initialize_class()::initialized = '\x01';
    }
    local_58 = "VBoxContainer";
    local_68 = 0;
    local_50 = 0xd;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "ConnectionsDock";
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
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* void List<MethodInfo, DefaultAllocator>::sort_custom<Comparator<MethodInfo> >() */

void __thiscall
List<MethodInfo,DefaultAllocator>::sort_custom<Comparator<MethodInfo>>
          (List<MethodInfo,DefaultAllocator> *this)

{
  size_t __n;
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  int iVar5;
  char cVar6;
  Element **__src;
  Element **ppEVar7;
  Element **ppEVar8;
  long lVar9;
  Element *pEVar10;
  long lVar11;
  Element *pEVar12;
  String *pSVar13;
  long lVar14;
  Element *pEVar15;
  Element *pEVar16;
  bool bVar17;
  bool bVar18;
  
  if ((*(long *)this == 0) || (iVar2 = *(int *)(*(long *)this + 0x10), iVar2 < 2)) {
    return;
  }
  pEVar10 = (Element *)(long)iVar2;
  __src = (Element **)Memory::alloc_static((long)pEVar10 * 8,true);
  if (__src == (Element **)0x0) {
    _err_print_error("memnew_arr_template","./core/os/memory.h",0xb6,"Parameter \"mem\" is null.",0,
                     0);
  }
  else {
    __src[-1] = pEVar10;
  }
  if (*(long **)this != (long *)0x0) {
    ppEVar7 = __src;
    for (pEVar16 = (Element *)**(long **)this; pEVar16 != (Element *)0x0;
        pEVar16 = *(Element **)(pEVar16 + 0x70)) {
      *ppEVar7 = pEVar16;
      ppEVar7 = ppEVar7 + 1;
    }
  }
  lVar9 = 0;
  pEVar16 = pEVar10;
  do {
    pEVar16 = (Element *)((long)pEVar16 >> 1);
    lVar9 = lVar9 + 1;
  } while (pEVar16 != (Element *)0x1);
  SortArray<List<MethodInfo,DefaultAllocator>::Element*,List<MethodInfo,DefaultAllocator>::AuxiliaryComparator<Comparator<MethodInfo>>,true>
  ::introsort(0,(long)pEVar10,__src,lVar9 * 2);
  if ((long)pEVar10 < 0x11) {
    pEVar16 = (Element *)0x1;
    pEVar12 = *__src;
LAB_00121802:
    do {
      pSVar13 = (String *)__src[(long)pEVar16];
      iVar1 = *(int *)(pSVar13 + 0x3c);
      pEVar15 = pEVar16;
      if (iVar1 == *(int *)((String *)pEVar12 + 0x3c)) {
        cVar6 = String::operator<(pSVar13,(String *)pEVar12);
        if (cVar6 == '\0') {
          do {
            pEVar12 = __src[(long)(pEVar15 + -1)];
            bVar18 = SBORROW4(*(int *)(pEVar12 + 0x3c),*(int *)(pSVar13 + 0x3c));
            iVar5 = *(int *)(pEVar12 + 0x3c) - *(int *)(pSVar13 + 0x3c);
            bVar17 = iVar5 == 0;
            if (bVar17) {
LAB_0012184b:
              cVar6 = String::operator<(pSVar13,(String *)pEVar12);
              if (cVar6 == '\0') {
LAB_00121857:
                __src[(long)pEVar15] = (Element *)pSVar13;
                pSVar13 = (String *)*__src;
                goto LAB_0012185e;
              }
            }
            else {
LAB_00121828:
              if (bVar17 || bVar18 != iVar5 < 0) goto LAB_00121857;
            }
            pEVar15 = pEVar15 + -1;
            if (pEVar15 == (Element *)0x0) goto LAB_00121908;
            __src[(long)(pEVar15 + 1)] = __src[(long)pEVar15];
          } while( true );
        }
      }
      else if (*(int *)((String *)pEVar12 + 0x3c) <= iVar1) {
        pEVar12 = __src[(long)(pEVar16 + -1)];
        iVar3 = *(int *)(pEVar12 + 0x3c);
        bVar18 = SBORROW4(iVar3,iVar1);
        iVar5 = iVar3 - iVar1;
        bVar17 = iVar3 == iVar1;
        if (bVar17) goto LAB_0012184b;
        goto LAB_00121828;
      }
      __n = (long)pEVar16 * 8;
      pEVar16 = pEVar16 + 1;
      memmove(__src + 1,__src,__n);
      *__src = (Element *)pSVar13;
      pEVar12 = (Element *)pSVar13;
    } while (pEVar10 != pEVar16);
    goto LAB_00121876;
  }
  lVar9 = 1;
LAB_00121670:
  do {
    lVar11 = lVar9;
    pSVar13 = (String *)__src[lVar11];
    iVar3 = *(int *)(pSVar13 + 0x3c);
    iVar1 = *(int *)((String *)*__src + 0x3c);
    lVar9 = lVar11;
    if (iVar3 == iVar1) {
      cVar6 = String::operator<(pSVar13,(String *)*__src);
      if (cVar6 == '\0') {
        do {
          pEVar16 = __src[lVar9 + -1];
          bVar18 = SBORROW4(*(int *)(pEVar16 + 0x3c),*(int *)(pSVar13 + 0x3c));
          iVar5 = *(int *)(pEVar16 + 0x3c) - *(int *)(pSVar13 + 0x3c);
          bVar17 = iVar5 == 0;
          if (bVar17) {
LAB_001216bb:
            cVar6 = String::operator<(pSVar13,(String *)pEVar16);
            if (cVar6 == '\0') {
LAB_001216c7:
              __src[lVar9] = (Element *)pSVar13;
              goto LAB_001216cb;
            }
          }
          else {
LAB_00121698:
            if (bVar17 || bVar18 != iVar5 < 0) goto LAB_001216c7;
          }
          lVar14 = lVar9 + -1;
          if (lVar14 == 0) goto LAB_00121770;
          __src[lVar9] = __src[lVar14];
          lVar9 = lVar14;
        } while( true );
      }
    }
    else if (iVar1 <= iVar3) {
      pEVar16 = __src[lVar11 + -1];
      iVar1 = *(int *)(pEVar16 + 0x3c);
      bVar18 = SBORROW4(iVar1,iVar3);
      iVar5 = iVar1 - iVar3;
      bVar17 = iVar1 == iVar3;
      if (bVar17) goto LAB_001216bb;
      goto LAB_00121698;
    }
    memmove(__src + 1,__src,lVar11 * 8);
    *__src = (Element *)pSVar13;
    lVar9 = lVar11 + 1;
  } while (lVar11 + 1 != 0x10);
  goto LAB_001216d5;
LAB_00121908:
  _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                   "bad comparison function; sorting will be broken",0,0);
  __src[1] = (Element *)pSVar13;
  pSVar13 = (String *)*__src;
LAB_0012185e:
  pEVar16 = pEVar16 + 1;
  pEVar12 = (Element *)pSVar13;
  if (pEVar10 == pEVar16) goto LAB_00121876;
  goto LAB_00121802;
LAB_00121770:
  _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                   "bad comparison function; sorting will be broken",0,0);
  __src[1] = (Element *)pSVar13;
LAB_001216cb:
  lVar9 = lVar11 + 1;
  if (lVar11 + 1 == 0x10) {
LAB_001216d5:
    pEVar16 = (Element *)(lVar11 + 1);
    do {
      pSVar13 = (String *)__src[(long)pEVar16];
      pEVar12 = pEVar16;
      while( true ) {
        iVar1 = *(int *)((String *)__src[(long)(pEVar12 + -1)] + 0x3c);
        if (*(int *)(pSVar13 + 0x3c) == iVar1) {
          cVar6 = String::operator<(pSVar13,(String *)__src[(long)(pEVar12 + -1)]);
          if (cVar6 == '\0') goto LAB_00121730;
        }
        else if (iVar1 <= *(int *)(pSVar13 + 0x3c)) goto LAB_00121730;
        pEVar12 = pEVar12 + -1;
        if (pEVar12 == (Element *)0x0) break;
        __src[(long)(pEVar12 + 1)] = __src[(long)pEVar12];
      }
      pEVar12 = (Element *)0x1;
      _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                       "bad comparison function; sorting will be broken",0,0);
LAB_00121730:
      pEVar16 = pEVar16 + 1;
      __src[(long)pEVar12] = (Element *)pSVar13;
    } while (pEVar10 != pEVar16);
    pSVar13 = (String *)*__src;
LAB_00121876:
    puVar4 = *(undefined8 **)this;
    *puVar4 = pSVar13;
    *(undefined8 *)(pSVar13 + 0x78) = 0;
    *(Element **)(*__src + 0x70) = __src[1];
    pEVar16 = __src[(long)(pEVar10 + -1)];
    puVar4[1] = pEVar16;
    *(Element **)(pEVar16 + 0x78) = __src[(long)(pEVar10 + -2)];
    *(undefined8 *)(__src[(long)(pEVar10 + -1)] + 0x70) = 0;
    if (iVar2 != 2) {
      ppEVar7 = __src;
      do {
        ppEVar8 = ppEVar7 + 1;
        *(Element **)(ppEVar7[1] + 0x78) = *ppEVar7;
        *(Element **)(*ppEVar8 + 0x70) = ppEVar7[2];
        ppEVar7 = ppEVar8;
      } while (__src + (iVar2 - 2) != ppEVar8);
    }
    Memory::free_static(__src,true);
    return;
  }
  goto LAB_00121670;
}



/* CowData<Variant>::_unref() */

void __thiscall CowData<Variant>::_unref(CowData<Variant> *this)

{
  long *plVar1;
  int *piVar2;
  long lVar3;
  code *pcVar4;
  int *piVar5;
  long lVar6;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    piVar2 = *(int **)this;
    if (piVar2 != (int *)0x0) {
      lVar3 = *(long *)(piVar2 + -2);
      *(undefined8 *)this = 0;
      if (lVar3 != 0) {
        lVar6 = 0;
        piVar5 = piVar2;
        do {
          if (Variant::needs_deinit[*piVar5] != '\0') {
            Variant::_clear_internal();
          }
          lVar6 = lVar6 + 1;
          piVar5 = piVar5 + 6;
        } while (lVar3 != lVar6);
      }
      Memory::free_static(piVar2 + -4,false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* ConnectDialogBinds::~ConnectDialogBinds() */

void __thiscall ConnectDialogBinds::~ConnectDialogBinds(ConnectDialogBinds *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00124b48;
  CowData<Variant>::_unref((CowData<Variant> *)(this + 0x180));
  Object::~Object((Object *)this);
  return;
}



/* ConnectDialog::ConnectionData::~ConnectionData() */

void __thiscall ConnectDialog::ConnectionData::~ConnectionData(ConnectionData *this)

{
  CowData<Variant>::_unref((CowData<Variant> *)(this + 0x30));
  if (StringName::configured != '\0') {
    if ((*(long *)(this + 0x18) != 0) && (StringName::unref(), StringName::configured == '\0')) {
      return;
    }
    if (*(long *)(this + 0x10) != 0) {
      StringName::unref();
      return;
    }
  }
  return;
}



/* MethodInfo::~MethodInfo() */

void __thiscall MethodInfo::~MethodInfo(MethodInfo *this)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  if (*(long *)(this + 0x68) != 0) {
    LOCK();
    plVar4 = (long *)(*(long *)(this + 0x68) + -0x10);
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      lVar3 = *(long *)(this + 0x68);
      *(undefined8 *)(this + 0x68) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  CowData<Variant>::_unref((CowData<Variant> *)(this + 0x50));
  plVar4 = *(long **)(this + 0x40);
  if (plVar4 != (long *)0x0) {
    do {
      pvVar1 = (void *)*plVar4;
      if (pvVar1 == (void *)0x0) {
        if ((int)plVar4[2] != 0) {
          _err_print_error("~List","./core/templates/list.h",0x316,
                           "Condition \"_data->size_cache\" is true.",0,0);
          goto LAB_00121bae;
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
      plVar4 = *(long **)(this + 0x40);
    } while ((int)plVar4[2] != 0);
    Memory::free_static(plVar4,false);
  }
LAB_00121bae:
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x28));
  if ((StringName::configured != '\0') && (*(long *)(this + 0x18) != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x10));
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  return;
}



/* ConnectDialog::_initialize_classv() */

void ConnectDialog::_initialize_classv(void)

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
              if ((code *)PTR__bind_methods_00130070 != Node::_bind_methods) {
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
        if ((code *)PTR__bind_compatibility_methods_00130078 != Object::_bind_compatibility_methods)
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
      if ((code *)PTR__bind_methods_00130080 != AcceptDialog::_bind_methods) {
        ConfirmationDialog::_bind_methods();
      }
      ConfirmationDialog::initialize_class()::initialized = '\x01';
    }
    local_58 = "ConfirmationDialog";
    local_68 = 0;
    local_50 = 0x12;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "ConnectDialog";
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



/* List<MethodInfo, DefaultAllocator>::~List() */

void __thiscall List<MethodInfo,DefaultAllocator>::~List(List<MethodInfo,DefaultAllocator> *this)

{
  MethodInfo *this_00;
  long lVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = *(long **)this;
  if (plVar3 == (long *)0x0) {
    return;
  }
  do {
    this_00 = (MethodInfo *)*plVar3;
    if (this_00 == (MethodInfo *)0x0) {
      if ((int)plVar3[2] != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if (*(long **)(this_00 + 0x80) == plVar3) {
      lVar2 = *(long *)(this_00 + 0x70);
      lVar1 = *(long *)(this_00 + 0x78);
      *plVar3 = lVar2;
      if (this_00 == (MethodInfo *)plVar3[1]) {
        plVar3[1] = lVar1;
      }
      if (lVar1 != 0) {
        *(long *)(lVar1 + 0x70) = lVar2;
        lVar2 = *(long *)(this_00 + 0x70);
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0x78) = lVar1;
      }
      MethodInfo::~MethodInfo(this_00);
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



/* ConnectDialogBinds::_setv(StringName const&, Variant const&) */

undefined4 __thiscall
ConnectDialogBinds::_setv(ConnectDialogBinds *this,StringName *param_1,Variant *param_2)

{
  char *__s;
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  long in_FS_OFFSET;
  undefined8 local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  lVar3 = *(long *)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
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
  uVar1 = String::begins_with((char *)&local_60);
  if ((char)uVar1 == '\0') {
    uVar1 = 0;
    goto LAB_001224dc;
  }
  String::get_slice((char *)&local_58,(int)(CowData<char32_t> *)&local_60);
  iVar2 = String::to_int();
  uVar4 = iVar2 - 1;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((int)uVar4 < 0) {
    if (*(long *)(this + 0x180) == 0) goto LAB_001225a8;
    lVar3 = *(long *)(*(long *)(this + 0x180) + -8);
  }
  else if (*(long *)(this + 0x180) == 0) {
LAB_001225a8:
    lVar3 = 0;
  }
  else {
    lVar3 = *(long *)(*(long *)(this + 0x180) + -8);
    if ((long)(ulong)uVar4 < lVar3) {
      CowData<Variant>::_copy_on_write((CowData<Variant> *)(this + 0x180));
      Variant::operator=((Variant *)(*(long *)(this + 0x180) + (ulong)uVar4 * 0x18),param_2);
      goto LAB_001224dc;
    }
  }
  uVar1 = 0;
  _err_print_index_error
            ("_set","editor/connections_dialog.cpp",0x55,(long)(int)uVar4,lVar3,"which",
             "params.size()","",false,false);
LAB_001224dc:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ConnectDialog::ConnectionData::ConnectionData(Object::Connection const&) */

void __thiscall
ConnectDialog::ConnectionData::ConnectionData(ConnectionData *this,Connection *param_1)

{
  long lVar1;
  long lVar2;
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined8 local_60;
  long local_58;
  long local_50 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x10) = (undefined1  [16])0x0;
  lVar1 = Signal::get_object();
  if (lVar1 != 0) {
    lVar1 = __dynamic_cast(lVar1,&Object::typeinfo,&Node::typeinfo,0);
  }
  *(long *)this = lVar1;
  Signal::get_name();
  if (*(long *)(this + 0x10) == local_58) {
    if ((StringName::configured != '\0') && (local_58 != 0)) {
      StringName::unref();
    }
  }
  else {
    StringName::unref();
    *(long *)(this + 0x10) = local_58;
  }
  lVar1 = Callable::get_object();
  if (lVar1 != 0) {
    lVar1 = __dynamic_cast(lVar1,&Object::typeinfo,&Node::typeinfo,0);
  }
  *(long *)(this + 8) = lVar1;
  lVar1 = *(long *)(param_1 + 0x10);
  local_68 = 0;
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  local_60 = 0;
  if ((lVar1 == 0) && (*(long *)(param_1 + 0x18) != 0)) {
    lVar1 = Callable::get_custom();
    if (lVar1 != 0) {
      lVar1 = __dynamic_cast(lVar1,&CallableCustom::typeinfo,&CallableCustomBind::typeinfo,0);
      if (lVar1 != 0) {
        local_50[0] = 0;
        lVar2 = *(long *)(lVar1 + 0x28);
        if (*(long *)(lVar1 + 0x28) != 0) {
          CowData<Variant>::_ref((CowData<Variant> *)local_50,(CowData *)(lVar1 + 0x28));
          lVar2 = local_50[0];
        }
        if (*(long *)(this + 0x30) != lVar2) {
          CowData<Variant>::_unref((CowData<Variant> *)(this + 0x30));
          *(long *)(this + 0x30) = lVar2;
          local_50[0] = 0;
        }
        CowData<Variant>::_unref((CowData<Variant> *)local_50);
        Callable::Callable((Callable *)&local_58,(Callable *)(lVar1 + 0x10));
        Callable::operator=((Callable *)&local_68,(Callable *)&local_58);
        Callable::~Callable((Callable *)&local_58);
      }
    }
    lVar1 = Callable::get_custom();
    if (lVar1 != 0) {
      lVar1 = __dynamic_cast(lVar1,&CallableCustom::typeinfo,&CallableCustomUnbind::typeinfo,0);
      if (lVar1 != 0) {
        *(undefined4 *)(this + 0x24) = *(undefined4 *)(lVar1 + 0x20);
        Callable::Callable((Callable *)&local_58,(Callable *)(lVar1 + 0x10));
        Callable::operator=((Callable *)&local_68,(Callable *)&local_58);
        Callable::~Callable((Callable *)&local_58);
      }
    }
  }
  else {
    Callable::operator=((Callable *)&local_68,(Callable *)(param_1 + 0x10));
  }
  Callable::get_method();
  if (*(long *)(this + 0x18) == local_58) {
    if ((StringName::configured != '\0') && (local_58 != 0)) {
      StringName::unref();
    }
  }
  else {
    StringName::unref();
    *(long *)(this + 0x18) = local_58;
  }
  Callable::~Callable((Callable *)&local_68);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ConnectDialogBinds::~ConnectDialogBinds() */

void __thiscall ConnectDialogBinds::~ConnectDialogBinds(ConnectDialogBinds *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00124b48;
  CowData<Variant>::_unref((CowData<Variant> *)(this + 0x180));
  Object::~Object((Object *)this);
  operator_delete(this,0x188);
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
LAB_00122c20:
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
  if (lVar9 == 0) goto LAB_00122c20;
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
    goto LAB_00122c76;
  }
  if (lVar9 == lVar5) {
LAB_00122b9b:
    puVar7 = *(undefined8 **)this;
    if (puVar7 == (undefined8 *)0x0) {
LAB_00122c76:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar4 = puVar7[-1];
    if (param_1 <= lVar4) goto LAB_00122b0f;
  }
  else {
    if (lVar4 != 0) {
      uVar3 = _realloc(this,lVar9);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      goto LAB_00122b9b;
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
LAB_00122b0f:
  puVar7[-1] = param_1;
  return 0;
}



/* ConnectionsDock::_notificationv(int, bool) */

void __thiscall ConnectionsDock::_notificationv(ConnectionsDock *this,int param_1,bool param_2)

{
  if (param_2) {
    _notification(this,param_1);
    BoxContainer::_notificationv((BoxContainer *)this,param_1,true);
    return;
  }
  BoxContainer::_notificationv((BoxContainer *)this,param_1,false);
  _notification(this,param_1);
  return;
}



/* CowData<Variant>::_realloc(long) */

undefined8 __thiscall CowData<Variant>::_realloc(CowData<Variant> *this,long param_1)

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
/* Error CowData<Variant>::resize<false>(long) */

undefined8 __thiscall CowData<Variant>::resize<false>(CowData<Variant> *this,long param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  long lVar7;
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
    lVar3 = 0;
    lVar7 = 0;
  }
  else {
    lVar3 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar3) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar7 = lVar3 * 0x18;
    if (lVar7 != 0) {
      uVar8 = lVar7 - 1U | lVar7 - 1U >> 1;
      uVar8 = uVar8 | uVar8 >> 2;
      uVar8 = uVar8 | uVar8 >> 4;
      uVar8 = uVar8 | uVar8 >> 8;
      uVar8 = uVar8 | uVar8 >> 0x10;
      lVar7 = (uVar8 | uVar8 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x18 == 0) {
LAB_00123070:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar8 = param_1 * 0x18 - 1;
  uVar8 = uVar8 >> 1 | uVar8;
  uVar8 = uVar8 | uVar8 >> 2;
  uVar8 = uVar8 | uVar8 >> 4;
  uVar8 = uVar8 | uVar8 >> 8;
  uVar8 = uVar8 | uVar8 >> 0x10;
  uVar8 = uVar8 | uVar8 >> 0x20;
  lVar9 = uVar8 + 1;
  if (lVar9 == 0) goto LAB_00123070;
  if (param_1 <= lVar3) {
    puVar4 = *(undefined8 **)this;
    uVar8 = param_1;
    while (puVar4 != (undefined8 *)0x0) {
      if ((ulong)puVar4[-1] <= uVar8) {
        if (lVar9 == lVar7) goto LAB_00122fc9;
        uVar5 = _realloc(this,lVar9);
        if ((int)uVar5 != 0) {
          return uVar5;
        }
        goto LAB_00122fbc;
      }
      if (Variant::needs_deinit[*(int *)(puVar4 + uVar8 * 3)] != '\0') {
        Variant::_clear_internal();
        puVar4 = *(undefined8 **)this;
      }
      uVar8 = uVar8 + 1;
    }
    goto LAB_0012309f;
  }
  if (lVar9 == lVar7) {
LAB_00122fe3:
    puVar4 = *(undefined8 **)this;
    if (puVar4 == (undefined8 *)0x0) {
LAB_0012309f:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar3 = puVar4[-1];
    if (param_1 <= lVar3) goto LAB_00122fc9;
  }
  else {
    if (lVar3 != 0) {
      uVar5 = _realloc(this,lVar9);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      goto LAB_00122fe3;
    }
    puVar2 = (undefined8 *)Memory::alloc_static(uVar8 + 0x11,false);
    if (puVar2 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar4 = puVar2 + 2;
    *puVar2 = 1;
    puVar2[1] = 0;
    *(undefined8 **)this = puVar4;
    lVar3 = 0;
  }
  *(undefined4 *)(puVar4 + lVar3 * 3) = 0;
  *(undefined1 (*) [16])(puVar4 + lVar3 * 3 + 1) = (undefined1  [16])0x0;
  lVar3 = lVar3 + 1;
  if (lVar3 < param_1) {
    lVar7 = lVar3 * 0x18;
    do {
      lVar3 = lVar3 + 1;
      puVar6 = (undefined4 *)(*(long *)this + lVar7);
      lVar7 = lVar7 + 0x18;
      *puVar6 = 0;
      *(undefined1 (*) [16])(puVar6 + 2) = (undefined1  [16])0x0;
    } while (param_1 != lVar3);
  }
LAB_00122fbc:
  puVar4 = *(undefined8 **)this;
  if (puVar4 == (undefined8 *)0x0) {
    _DAT_00000000 = 0;
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
LAB_00122fc9:
  puVar4[-1] = param_1;
  return 0;
}



/* CowData<Control*>::_realloc(long) */

undefined8 __thiscall CowData<Control*>::_realloc(CowData<Control*> *this,long param_1)

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
/* Error CowData<Control*>::resize<false>(long) */

undefined8 __thiscall CowData<Control*>::resize<false>(CowData<Control*> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return 0x1f;
  }
  lVar3 = *(long *)this;
  if (lVar3 == 0) {
    if (param_1 == 0) {
      return 0;
    }
    _copy_on_write(this);
    lVar9 = 0;
    lVar3 = 0;
  }
  else {
    lVar9 = *(long *)(lVar3 + -8);
    if (param_1 == lVar9) {
      return 0;
    }
    if (param_1 == 0) {
      LOCK();
      plVar1 = (long *)(lVar3 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) {
        *(undefined8 *)this = 0;
        return 0;
      }
      lVar3 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
      return 0;
    }
    _copy_on_write(this);
    lVar3 = lVar9 * 8;
    if (lVar3 != 0) {
      uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      lVar3 = (uVar4 | uVar4 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 == 0) {
LAB_00123360:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar4 = param_1 * 8 - 1;
  uVar4 = uVar4 | uVar4 >> 1;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  uVar4 = uVar4 | uVar4 >> 0x10;
  uVar4 = uVar4 | uVar4 >> 0x20;
  lVar8 = uVar4 + 1;
  if (lVar8 == 0) goto LAB_00123360;
  if (lVar9 < param_1) {
    if (lVar8 != lVar3) {
      if (lVar9 == 0) {
        puVar5 = (undefined8 *)Memory::alloc_static(uVar4 + 0x11,false);
        if (puVar5 == (undefined8 *)0x0) {
          _err_print_error("resize","./core/templates/cowdata.h",0x171,
                           "Parameter \"mem_new\" is null.",0,0);
          return 6;
        }
        puVar7 = puVar5 + 2;
        *puVar5 = 1;
        puVar5[1] = 0;
        *(undefined8 **)this = puVar7;
        goto LAB_00123271;
      }
      uVar6 = _realloc(this,lVar8);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
    }
    puVar7 = *(undefined8 **)this;
    if (puVar7 != (undefined8 *)0x0) {
LAB_00123271:
      puVar7[-1] = param_1;
      return 0;
    }
  }
  else {
    if ((lVar8 != lVar3) && (uVar6 = _realloc(this,lVar8), (int)uVar6 != 0)) {
      return uVar6;
    }
    if (*(long *)this != 0) {
      *(long *)(*(long *)this + -8) = param_1;
      return 0;
    }
  }
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



/* void memdelete<HashMapElement<StringName, EditorHelpBit::HelpData> >(HashMapElement<StringName,
   EditorHelpBit::HelpData>*) */

void memdelete<HashMapElement<StringName,EditorHelpBit::HelpData>>(HashMapElement *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  
  CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0x68));
  CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0x60));
  if (*(long *)(param_1 + 0x58) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(param_1 + 0x58) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      plVar1 = *(long **)(param_1 + 0x58);
      if (plVar1 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      lVar3 = plVar1[-1];
      *(undefined8 *)(param_1 + 0x58) = 0;
      if (lVar3 != 0) {
        lVar7 = 0;
        plVar6 = plVar1;
        do {
          if (plVar6[4] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[4] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[4];
              plVar6[4] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
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
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0x48));
  CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0x38));
  CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0x30));
  CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0x28));
  CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0x20));
  CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0x18));
  if ((StringName::configured != '\0') && (*(long *)(param_1 + 0x10) != 0)) {
    StringName::unref();
  }
  Memory::free_static(param_1,false);
  return;
}



/* HashMap<StringName, EditorHelpBit::HelpData, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   EditorHelpBit::HelpData> > >::~HashMap() */

void __thiscall
HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>
::~HashMap(HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>
           *this)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  
  pvVar3 = *(void **)(this + 8);
  if (pvVar3 == (void *)0x0) {
    return;
  }
  if (*(int *)(this + 0x2c) != 0) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    if (uVar1 == 0) {
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
    }
    else {
      lVar2 = 0;
      do {
        if (*(int *)(*(long *)(this + 0x10) + lVar2) != 0) {
          *(int *)(*(long *)(this + 0x10) + lVar2) = 0;
          memdelete<HashMapElement<StringName,EditorHelpBit::HelpData>>
                    (*(HashMapElement **)((long)pvVar3 + lVar2 * 2));
          pvVar3 = *(void **)(this + 8);
          *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
        }
        lVar2 = lVar2 + 4;
      } while (lVar2 != (ulong)uVar1 << 2);
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
      if (pvVar3 == (void *)0x0) {
        return;
      }
    }
  }
  Memory::free_static(pvVar3,false);
  Memory::free_static(*(void **)(this + 0x10),false);
  return;
}



/* HashMap<StringName, HashMap<StringName, EditorHelpBit::HelpData, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   EditorHelpBit::HelpData> > >, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, HashMap<StringName, EditorHelpBit::HelpData,
   HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, EditorHelpBit::HelpData> > > > > >::~HashMap()
    */

void __thiscall
HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
::~HashMap(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
           *this)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  long lVar4;
  void *pvVar5;
  void *pvVar6;
  long lVar7;
  
  pvVar6 = *(void **)(this + 8);
  if (pvVar6 == (void *)0x0) {
    return;
  }
  if (*(int *)(this + 0x2c) != 0) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    if (uVar1 == 0) {
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
    }
    else {
      lVar7 = 0;
      do {
        if (*(int *)(*(long *)(this + 0x10) + lVar7) != 0) {
          pvVar6 = *(void **)((long)pvVar6 + lVar7 * 2);
          *(int *)(*(long *)(this + 0x10) + lVar7) = 0;
          pvVar5 = *(void **)((long)pvVar6 + 0x20);
          if (pvVar5 != (void *)0x0) {
            if (*(int *)((long)pvVar6 + 0x44) != 0) {
              uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)((long)pvVar6 + 0x40) * 4);
              if (uVar2 == 0) {
                *(undefined4 *)((long)pvVar6 + 0x44) = 0;
                *(undefined1 (*) [16])((long)pvVar6 + 0x30) = (undefined1  [16])0x0;
              }
              else {
                lVar4 = 0;
                do {
                  piVar3 = (int *)(*(long *)((long)pvVar6 + 0x28) + lVar4);
                  if (*piVar3 != 0) {
                    *piVar3 = 0;
                    memdelete<HashMapElement<StringName,EditorHelpBit::HelpData>>
                              (*(HashMapElement **)((long)pvVar5 + lVar4 * 2));
                    pvVar5 = *(void **)((long)pvVar6 + 0x20);
                    *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
                  }
                  lVar4 = lVar4 + 4;
                } while (lVar4 != (ulong)uVar2 * 4);
                *(undefined4 *)((long)pvVar6 + 0x44) = 0;
                *(undefined1 (*) [16])((long)pvVar6 + 0x30) = (undefined1  [16])0x0;
                if (pvVar5 == (void *)0x0) goto LAB_001236f9;
              }
            }
            Memory::free_static(pvVar5,false);
            Memory::free_static(*(void **)((long)pvVar6 + 0x28),false);
          }
LAB_001236f9:
          if ((StringName::configured != '\0') && (*(long *)((long)pvVar6 + 0x10) != 0)) {
            StringName::unref();
          }
          Memory::free_static(pvVar6,false);
          pvVar6 = *(void **)(this + 8);
          *(undefined8 *)((long)pvVar6 + lVar7 * 2) = 0;
        }
        lVar7 = lVar7 + 4;
      } while (lVar7 != (ulong)uVar1 << 2);
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
      if (pvVar6 == (void *)0x0) {
        return;
      }
    }
  }
  Memory::free_static(pvVar6,false);
  Memory::free_static(*(void **)(this + 0x10),false);
  return;
}



/* ConnectDialog::ok_pressed() */

void ConnectDialog::_GLOBAL__sub_I_ok_pressed(void)

{
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
  if (EditorHelpBit::doc_class_cache == '\0') {
    EditorHelpBit::doc_class_cache = '\x01';
    EditorHelpBit::doc_class_cache._8_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_class_cache._24_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_class_cache._40_8_ = 2;
    __cxa_atexit(HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>
                 ::~HashMap,EditorHelpBit::doc_class_cache,&__dso_handle);
  }
  if (EditorHelpBit::doc_enum_cache == '\0') {
    EditorHelpBit::doc_enum_cache = '\x01';
    EditorHelpBit::doc_enum_cache._8_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_enum_cache._24_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_enum_cache._40_8_ = 2;
    __cxa_atexit(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
                 ::~HashMap,EditorHelpBit::doc_enum_cache,&__dso_handle);
  }
  if (EditorHelpBit::doc_constant_cache == '\0') {
    EditorHelpBit::doc_constant_cache = '\x01';
    EditorHelpBit::doc_constant_cache._8_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_constant_cache._24_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_constant_cache._40_8_ = 2;
    __cxa_atexit(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
                 ::~HashMap,EditorHelpBit::doc_constant_cache,&__dso_handle);
  }
  if (EditorHelpBit::doc_property_cache == '\0') {
    EditorHelpBit::doc_property_cache = '\x01';
    EditorHelpBit::doc_property_cache._8_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_property_cache._24_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_property_cache._40_8_ = 2;
    __cxa_atexit(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
                 ::~HashMap,EditorHelpBit::doc_property_cache,&__dso_handle);
  }
  if (EditorHelpBit::doc_theme_item_cache == '\0') {
    EditorHelpBit::doc_theme_item_cache = '\x01';
    EditorHelpBit::doc_theme_item_cache._8_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_theme_item_cache._24_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_theme_item_cache._40_8_ = 2;
    __cxa_atexit(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
                 ::~HashMap,EditorHelpBit::doc_theme_item_cache,&__dso_handle);
  }
  if (EditorHelpBit::doc_method_cache == '\0') {
    EditorHelpBit::doc_method_cache = '\x01';
    EditorHelpBit::doc_method_cache._8_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_method_cache._24_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_method_cache._40_8_ = 2;
    __cxa_atexit(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
                 ::~HashMap,EditorHelpBit::doc_method_cache,&__dso_handle);
  }
  if (EditorHelpBit::doc_signal_cache == '\0') {
    EditorHelpBit::doc_signal_cache = '\x01';
    EditorHelpBit::doc_signal_cache._8_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_signal_cache._24_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_signal_cache._40_8_ = 2;
    __cxa_atexit(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
                 ::~HashMap,EditorHelpBit::doc_signal_cache,&__dso_handle);
  }
  if (EditorHelpBit::doc_annotation_cache == '\0') {
    EditorHelpBit::doc_annotation_cache = '\x01';
    EditorHelpBit::doc_annotation_cache._8_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_annotation_cache._24_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_annotation_cache._40_8_ = 2;
    __cxa_atexit(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
                 ::~HashMap,EditorHelpBit::doc_annotation_cache,&__dso_handle);
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
  if (Animation::PARAMETERS_BASE_PATH != '\0') {
    return;
  }
  Animation::PARAMETERS_BASE_PATH = 1;
  Animation::PARAMETERS_BASE_PATH = 0;
  String::parse_latin1((String *)&Animation::PARAMETERS_BASE_PATH,"parameters/");
  __cxa_atexit(String::~String,&Animation::PARAMETERS_BASE_PATH,&__dso_handle);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* HashMap<StringName, HashMap<StringName, EditorHelpBit::HelpData, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   EditorHelpBit::HelpData> > >, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, HashMap<StringName, EditorHelpBit::HelpData,
   HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, EditorHelpBit::HelpData> > > > > >::~HashMap()
    */

void __thiscall
HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
::~HashMap(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* HashMap<StringName, EditorHelpBit::HelpData, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   EditorHelpBit::HelpData> > >::~HashMap() */

void __thiscall
HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>
::~HashMap(HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* ConnectDialog::ConnectionData::ConnectionData(Object::Connection const&) */

void __thiscall
ConnectDialog::ConnectionData::ConnectionData(ConnectionData *this,Connection *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<MethodInfo, DefaultAllocator>::~List() */

void __thiscall List<MethodInfo,DefaultAllocator>::~List(List<MethodInfo,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodInfo::~MethodInfo() */

void __thiscall MethodInfo::~MethodInfo(MethodInfo *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* ConnectDialog::ConnectionData::~ConnectionData() */

void __thiscall ConnectDialog::ConnectionData::~ConnectionData(ConnectionData *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* ConnectDialogBinds::~ConnectDialogBinds() */

void __thiscall ConnectDialogBinds::~ConnectDialogBinds(ConnectDialogBinds *this)

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
/* List<Object::Connection, DefaultAllocator>::~List() */

void __thiscall
List<Object::Connection,DefaultAllocator>::~List(List<Object::Connection,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<Pair<Variant::Type, StringName>, DefaultAllocator>::~List() */

void __thiscall
List<Pair<Variant::Type,StringName>,DefaultAllocator>::~List
          (List<Pair<Variant::Type,StringName>,DefaultAllocator> *this)

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
/* ConnectionsDockTree::~ConnectionsDockTree() */

void __thiscall ConnectionsDockTree::~ConnectionsDockTree(ConnectionsDockTree *this)

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
/* ConfirmationDialog::~ConfirmationDialog() */

void __thiscall ConfirmationDialog::~ConfirmationDialog(ConfirmationDialog *this)

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
/* CallableCustomMethodPointer<ConnectDialog, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ConnectDialog,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ConnectDialog,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<SceneTreeEditor, void, String const&>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<SceneTreeEditor,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<SceneTreeEditor,void,String_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<Window, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Window,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Window,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<ConnectDialog, void, CheckButton
   const*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ConnectDialog,void,CheckButton_const*>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ConnectDialog,void,CheckButton_const*> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<ConnectDialog, void, double>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ConnectDialog,void,double>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ConnectDialog,void,double> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<Tree, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Tree,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Tree,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<ConnectionsDock, void, String const&>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<ConnectionsDock,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ConnectionsDock,void,String_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<ConnectionsDock, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ConnectionsDock,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ConnectionsDock,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<ConnectionsDock, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ConnectionsDock,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ConnectionsDock,void,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<ConnectionsDock, void, Ref<InputEvent>
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ConnectionsDock,void,Ref<InputEvent>const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ConnectionsDock,void,Ref<InputEvent>const&> *this)

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





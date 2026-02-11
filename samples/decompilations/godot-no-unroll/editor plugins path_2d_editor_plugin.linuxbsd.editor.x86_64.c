
/* Path2DEditor::_handle_option_pressed(int) */

void __thiscall Path2DEditor::_handle_option_pressed(Path2DEditor *this,int param_1)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = MenuButton::get_popup();
  if (param_1 == 0) {
    bVar1 = PopupMenu::is_item_checked(iVar2);
    this[0xa80] = (Path2DEditor)(bVar1 ^ 1);
    PopupMenu::set_item_checked(iVar2,false);
    PopupMenu::set_item_disabled(iVar2,true);
    return;
  }
  if (param_1 != 1) {
    return;
  }
  bVar1 = PopupMenu::is_item_checked(iVar2);
  this[0xa81] = (Path2DEditor)(bVar1 ^ 1);
  PopupMenu::set_item_checked(iVar2,true);
  return;
}



/* Path2DEditor::_notification(int) [clone .part.0] */

void Path2DEditor::_notification(int param_1)

{
  Ref *pRVar1;
  Object *pOVar2;
  char cVar3;
  int iVar4;
  undefined4 in_register_0000003c;
  long lVar5;
  long in_FS_OFFSET;
  Object *local_38;
  long local_30;
  
  lVar5 = CONCAT44(in_register_0000003c,param_1);
  pRVar1 = *(Ref **)(lVar5 + 0xa58);
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
  pRVar1 = *(Ref **)(lVar5 + 0xa60);
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
    pOVar2 = local_38;
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_38);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
  pRVar1 = *(Ref **)(lVar5 + 0xa48);
  if (_notification(int)::{lambda()#3}::operator()()::sname == '\0') {
    iVar4 = __cxa_guard_acquire(&_notification(int)::{lambda()#3}::operator()()::sname);
    if (iVar4 != 0) {
      _scs_create((char *)&_notification(int)::{lambda()#3}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#3}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#3}::operator()()::sname);
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
  pRVar1 = *(Ref **)(lVar5 + 0xa50);
  if (_notification(int)::{lambda()#4}::operator()()::sname == '\0') {
    iVar4 = __cxa_guard_acquire(&_notification(int)::{lambda()#4}::operator()()::sname);
    if (iVar4 != 0) {
      _scs_create((char *)&_notification(int)::{lambda()#4}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#4}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#4}::operator()()::sname);
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
  pRVar1 = *(Ref **)(lVar5 + 0xa40);
  if (_notification(int)::{lambda()#5}::operator()()::sname == '\0') {
    iVar4 = __cxa_guard_acquire(&_notification(int)::{lambda()#5}::operator()()::sname);
    if (iVar4 != 0) {
      _scs_create((char *)&_notification(int)::{lambda()#5}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#5}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#5}::operator()()::sname);
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
  pRVar1 = *(Ref **)(lVar5 + 0xa38);
  if (_notification(int)::{lambda()#6}::operator()()::sname == '\0') {
    iVar4 = __cxa_guard_acquire(&_notification(int)::{lambda()#6}::operator()()::sname);
    if (iVar4 != 0) {
      _scs_create((char *)&_notification(int)::{lambda()#6}::operator()()::sname,false);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#6}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#6}::operator()()::sname);
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
  pRVar1 = *(Ref **)(lVar5 + 0xa70);
  if (_notification(int)::{lambda()#7}::operator()()::sname == '\0') {
    iVar4 = __cxa_guard_acquire(&_notification(int)::{lambda()#7}::operator()()::sname);
    if (iVar4 != 0) {
      _scs_create((char *)&_notification(int)::{lambda()#7}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#7}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#7}::operator()()::sname);
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
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Path2DEditor::_update_toolbar() */

void __thiscall Path2DEditor::_update_toolbar(Path2DEditor *this)

{
  long lVar1;
  char cVar2;
  long in_FS_OFFSET;
  Object *local_38;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0xa20) == 0) {
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    Path2D::get_curve();
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
    CanvasItem::set_visible(SUB81(*(undefined8 *)(this + 0xa30),0));
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      CanvasItem::set_visible(SUB81(*(undefined8 *)(this + 0xa70),0));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Path2DEditor::_node_visibility_changed() */

void __thiscall Path2DEditor::_node_visibility_changed(Path2DEditor *this)

{
  if (*(long *)(this + 0xa20) != 0) {
    CanvasItemEditor::update_viewport();
    _update_toolbar(this);
    return;
  }
  return;
}



/* Path2DEditor::_confirm_clear_points() */

void __thiscall Path2DEditor::_confirm_clear_points(Path2DEditor *this)

{
  long lVar1;
  char cVar2;
  int iVar3;
  long in_FS_OFFSET;
  Object *local_30;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0xa20) != 0) {
    Path2D::get_curve();
    if (local_30 != (Object *)0x0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
        cVar2 = predelete_handler(local_30);
        if (cVar2 != '\0') {
          (**(code **)(*(long *)local_30 + 0x140))(local_30);
          Memory::free_static(local_30,false);
        }
      }
      Path2D::get_curve();
      iVar3 = Curve2D::get_point_count();
      if (local_30 != (Object *)0x0) {
        cVar2 = RefCounted::unreference();
        if (cVar2 != '\0') {
          cVar2 = predelete_handler(local_30);
          if (cVar2 != '\0') {
            (**(code **)(*(long *)local_30 + 0x140))(local_30);
            Memory::free_static(local_30,false);
          }
        }
      }
      if (iVar3 != 0) {
        Window::reset_size();
        Window::popup_centered(*(Vector2i **)(this + 0xa78));
      }
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Path2DEditor::_notification(int) */

void __thiscall Path2DEditor::_notification(Path2DEditor *this,int param_1)

{
  if (param_1 != 0x2d) {
    return;
  }
  _notification((int)this);
  return;
}



/* Path2DEditor::_node_removed(Node*) */

void __thiscall Path2DEditor::_node_removed(Path2DEditor *this,Node *param_1)

{
  if (*(Node **)(this + 0xa20) != param_1) {
    return;
  }
  *(undefined8 *)(this + 0xa20) = 0;
  CanvasItem::hide();
  return;
}



/* Path2DEditorPlugin::handles(Object*) const */

undefined4 __thiscall Path2DEditorPlugin::handles(Path2DEditorPlugin *this,Object *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  long in_FS_OFFSET;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = 0;
  local_30 = 6;
  pcVar1 = *(code **)(*(long *)param_1 + 0x58);
  local_38 = "Path2D";
  String::parse_latin1((StrRange *)&local_40);
  uVar2 = (*pcVar1)(param_1,(StrRange *)&local_40);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Path2DEditorPlugin::~Path2DEditorPlugin() */

void __thiscall Path2DEditorPlugin::~Path2DEditorPlugin(Path2DEditorPlugin *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010f948;
  EditorPlugin::~EditorPlugin((EditorPlugin *)this);
  return;
}



/* Path2DEditorPlugin::~Path2DEditorPlugin() */

void __thiscall Path2DEditorPlugin::~Path2DEditorPlugin(Path2DEditorPlugin *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010f948;
  EditorPlugin::~EditorPlugin((EditorPlugin *)this);
  operator_delete(this,0x668);
  return;
}



/* Path2DEditor::Path2DEditor() */

void __thiscall Path2DEditor::Path2DEditor(Path2DEditor *this)

{
  String *pSVar1;
  code *pcVar2;
  undefined8 uVar3;
  StringName *pSVar4;
  BoxContainer *this_00;
  Button *pBVar5;
  ConfirmationDialog *this_01;
  MenuButton *this_02;
  long *plVar6;
  long in_FS_OFFSET;
  String local_140 [8];
  String local_138 [8];
  String local_130 [8];
  String local_128 [8];
  String local_120 [8];
  String local_118 [8];
  String local_110 [8];
  String local_108 [8];
  String local_100 [8];
  String local_f8 [8];
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  String local_d8 [8];
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  CowData<char32_t> local_b8 [8];
  String local_b0 [8];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  String local_90 [8];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  String local_70 [8];
  undefined8 local_68 [2];
  long local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  BoxContainer::BoxContainer((BoxContainer *)this,false);
  this[0xa0c] = (Path2DEditor)0x1;
  *(undefined ***)this = &PTR__initialize_classv_0010f5d0;
  *(undefined2 *)(this + 0xa80) = 0x101;
  *(undefined8 *)(this + 0xa20) = 0;
  *(undefined4 *)(this + 0xa28) = 1;
  this[0xa82] = (Path2DEditor)0x0;
  *(undefined8 *)(this + 0xa84) = 0;
  *(undefined8 *)(this + 0xa8c) = 0;
  *(undefined8 *)(this + 0xa94) = 0;
  *(undefined8 *)(this + 0xa9c) = 0;
  *(undefined8 *)(this + 0xaa4) = 0;
  *(undefined8 *)(this + 0xaac) = 0;
  *(undefined1 (*) [16])(this + 0xa10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa30) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa40) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa50) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa60) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa70) = (undefined1  [16])0x0;
  this_00 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(this_00,false);
  this_00[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)this_00 = &PTR__initialize_classv_0010f258;
  postinitialize_handler((Object *)this_00);
  *(BoxContainer **)(this + 0xa30) = this_00;
  pBVar5 = (Button *)operator_new(0xc10,"");
  local_58[0] = 0;
  Button::Button(pBVar5,(String *)local_58);
  postinitialize_handler((Object *)pBVar5);
  *(Button **)(this + 0xa58) = pBVar5;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  Control::set_theme_type_variation(*(StringName **)(this + 0xa58));
  BaseButton::set_toggle_mode(SUB81(*(undefined8 *)(this + 0xa58),0));
  BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xa58),0));
  Control::set_focus_mode(*(undefined8 *)(this + 0xa58),0);
  pSVar1 = *(String **)(this + 0xa58);
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"");
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"Right Click: Delete Point");
  TTR(local_70,(String *)local_68);
  local_78 = 0;
  String::parse_latin1((String *)&local_78,"\n");
  local_80 = 0;
  String::parse_latin1((String *)&local_80,"");
  local_88 = 0;
  String::parse_latin1((String *)&local_88,"Left Click: Split Segment (in curve)");
  TTR(local_90,(String *)&local_88);
  local_98 = 0;
  String::parse_latin1((String *)&local_98,"\n");
  local_a0 = 0;
  String::parse_latin1((String *)&local_a0,"");
  local_a8 = 0;
  String::parse_latin1((String *)&local_a8,"Click: Add Point");
  TTR(local_b0,(String *)&local_a8);
  keycode_get_string(local_b8,0x1000000);
  local_c0 = 0;
  String::parse_latin1((String *)&local_c0,"\n");
  local_c8 = 0;
  String::parse_latin1((String *)&local_c8,"");
  local_d0 = 0;
  String::parse_latin1((String *)&local_d0,"Shift+Drag: Select Control Points");
  TTR(local_d8,(String *)&local_d0);
  local_e0 = 0;
  String::parse_latin1((String *)&local_e0,"\n");
  local_e8 = 0;
  String::parse_latin1((String *)&local_e8,"");
  local_f0 = 0;
  String::parse_latin1((String *)&local_f0,"Select Points");
  TTR(local_f8,(String *)&local_f0);
  String::operator+(local_100,local_f8);
  String::operator+(local_108,local_100);
  String::operator+(local_110,local_108);
  String::operator+(local_118,local_110);
  String::operator+(local_120,local_118);
  String::operator+(local_128,local_120);
  String::operator+(local_130,local_128);
  String::operator+(local_138,local_130);
  String::operator+(local_140,local_138);
  Control::set_tooltip_text(pSVar1);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_140);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_138);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_130);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_128);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_120);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref(local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  plVar6 = *(long **)(this + 0xa58);
  pcVar2 = *(code **)(*plVar6 + 0x108);
  create_custom_callable_function_pointer<Path2DEditor,int>
            ((Path2DEditor *)local_58,(char *)this,(_func_void_int *)"&Path2DEditor::_mode_selected"
            );
  Callable::bind<Path2DEditor::Mode>((String *)local_68,(CowData<char32_t> *)local_58,1);
  (*pcVar2)(plVar6,SceneStringNames::singleton + 0x238,(String *)local_68,0);
  Callable::~Callable((Callable *)local_68);
  Callable::~Callable((Callable *)local_58);
  Node::add_child(*(undefined8 *)(this + 0xa30),*(undefined8 *)(this + 0xa58),0,0);
  pBVar5 = (Button *)operator_new(0xc10,"");
  local_58[0] = 0;
  Button::Button(pBVar5,(String *)local_58);
  postinitialize_handler((Object *)pBVar5);
  *(Button **)(this + 0xa60) = pBVar5;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  Control::set_theme_type_variation(*(StringName **)(this + 0xa60));
  BaseButton::set_toggle_mode(SUB81(*(undefined8 *)(this + 0xa60),0));
  Control::set_focus_mode(*(undefined8 *)(this + 0xa60),0);
  pSVar1 = *(String **)(this + 0xa60);
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"");
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"Select Control Points (Shift+Drag)");
  TTR(local_70,(String *)local_68);
  Control::set_tooltip_text(pSVar1);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  plVar6 = *(long **)(this + 0xa60);
  pcVar2 = *(code **)(*plVar6 + 0x108);
  create_custom_callable_function_pointer<Path2DEditor,int>
            ((Path2DEditor *)local_58,(char *)this,(_func_void_int *)"&Path2DEditor::_mode_selected"
            );
  Callable::bind<Path2DEditor::Mode>((String *)local_68,(CowData<char32_t> *)local_58,2);
  (*pcVar2)(plVar6,SceneStringNames::singleton + 0x238,(String *)local_68,0);
  Callable::~Callable((Callable *)local_68);
  Callable::~Callable((Callable *)local_58);
  Node::add_child(*(undefined8 *)(this + 0xa30),*(undefined8 *)(this + 0xa60),0,0);
  pBVar5 = (Button *)operator_new(0xc10,"");
  local_58[0] = 0;
  Button::Button(pBVar5,(String *)local_58);
  postinitialize_handler((Object *)pBVar5);
  *(Button **)(this + 0xa48) = pBVar5;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  Control::set_theme_type_variation(*(StringName **)(this + 0xa48));
  BaseButton::set_toggle_mode(SUB81(*(undefined8 *)(this + 0xa48),0));
  Control::set_focus_mode(*(undefined8 *)(this + 0xa48),0);
  pSVar1 = *(String **)(this + 0xa48);
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"");
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"Right Click: Delete Point");
  TTR(local_70,(String *)local_68);
  local_78 = 0;
  String::parse_latin1((String *)&local_78,"\n");
  local_80 = 0;
  String::parse_latin1((String *)&local_80,"");
  local_88 = 0;
  String::parse_latin1((String *)&local_88,"Add Point (in empty space)");
  TTR(local_90,(String *)&local_88);
  String::operator+((String *)&local_98,local_90);
  String::operator+((String *)&local_a0,(String *)&local_98);
  Control::set_tooltip_text(pSVar1);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  plVar6 = *(long **)(this + 0xa48);
  pcVar2 = *(code **)(*plVar6 + 0x108);
  create_custom_callable_function_pointer<Path2DEditor,int>
            ((Path2DEditor *)local_58,(char *)this,(_func_void_int *)"&Path2DEditor::_mode_selected"
            );
  Callable::bind<Path2DEditor::Mode>((String *)local_68,(CowData<char32_t> *)local_58,0);
  (*pcVar2)(plVar6,SceneStringNames::singleton + 0x238,(String *)local_68);
  Callable::~Callable((Callable *)local_68);
  Callable::~Callable((Callable *)local_58);
  Node::add_child(*(undefined8 *)(this + 0xa30),*(undefined8 *)(this + 0xa48),0,0);
  pBVar5 = (Button *)operator_new(0xc10,"");
  local_58[0] = 0;
  Button::Button(pBVar5,(String *)local_58);
  postinitialize_handler((Object *)pBVar5);
  *(Button **)(this + 0xa50) = pBVar5;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  Control::set_theme_type_variation(*(StringName **)(this + 0xa50));
  BaseButton::set_toggle_mode(SUB81(*(undefined8 *)(this + 0xa50),0));
  Control::set_focus_mode(*(undefined8 *)(this + 0xa50),0);
  pSVar1 = *(String **)(this + 0xa50);
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"");
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"Delete Point");
  TTR(local_70,(String *)local_68);
  Control::set_tooltip_text(pSVar1);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  plVar6 = *(long **)(this + 0xa50);
  pcVar2 = *(code **)(*plVar6 + 0x108);
  create_custom_callable_function_pointer<Path2DEditor,int>
            ((Path2DEditor *)local_58,(char *)this,(_func_void_int *)"&Path2DEditor::_mode_selected"
            );
  Callable::bind<Path2DEditor::Mode>((String *)local_68,(CowData<char32_t> *)local_58,3);
  (*pcVar2)(plVar6,SceneStringNames::singleton + 0x238,(String *)local_68);
  Callable::~Callable((Callable *)local_68);
  Callable::~Callable((Callable *)local_58);
  Node::add_child(*(undefined8 *)(this + 0xa30),*(undefined8 *)(this + 0xa50),0,0);
  pBVar5 = (Button *)operator_new(0xc10,"");
  local_58[0] = 0;
  Button::Button(pBVar5,(String *)local_58);
  postinitialize_handler((Object *)pBVar5);
  *(Button **)(this + 0xa40) = pBVar5;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  Control::set_theme_type_variation(*(StringName **)(this + 0xa40));
  Control::set_focus_mode(*(undefined8 *)(this + 0xa40),0);
  pSVar1 = *(String **)(this + 0xa40);
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"");
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"Close Curve");
  TTR(local_70,(String *)local_68);
  Control::set_tooltip_text(pSVar1);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  plVar6 = *(long **)(this + 0xa40);
  pcVar2 = *(code **)(*plVar6 + 0x108);
  create_custom_callable_function_pointer<Path2DEditor,int>
            ((Path2DEditor *)local_58,(char *)this,(_func_void_int *)"&Path2DEditor::_mode_selected"
            );
  Callable::bind<Path2DEditor::Mode>((String *)local_68,(CowData<char32_t> *)local_58,4);
  (*pcVar2)(plVar6,SceneStringNames::singleton + 0x238,(String *)local_68,0);
  Callable::~Callable((Callable *)local_68);
  Callable::~Callable((Callable *)local_58);
  Node::add_child(*(undefined8 *)(this + 0xa30),*(undefined8 *)(this + 0xa40),0,0);
  pBVar5 = (Button *)operator_new(0xc10,"");
  local_58[0] = 0;
  Button::Button(pBVar5,(String *)local_58);
  postinitialize_handler((Object *)pBVar5);
  *(Button **)(this + 0xa38) = pBVar5;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  Control::set_theme_type_variation(*(StringName **)(this + 0xa38));
  Control::set_focus_mode(*(undefined8 *)(this + 0xa38),0);
  pSVar1 = *(String **)(this + 0xa38);
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"");
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"Clear Points");
  TTR(local_70,(String *)local_68);
  Control::set_tooltip_text(pSVar1);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  plVar6 = *(long **)(this + 0xa38);
  pcVar2 = *(code **)(*plVar6 + 0x108);
  create_custom_callable_function_pointer<Path2DEditor>
            ((Path2DEditor *)local_58,(char *)this,
             (_func_void *)"&Path2DEditor::_confirm_clear_points");
  (*pcVar2)(plVar6,SceneStringNames::singleton + 0x238,(CowData<char32_t> *)local_58,0);
  Callable::~Callable((Callable *)local_58);
  Node::add_child(*(undefined8 *)(this + 0xa30),*(undefined8 *)(this + 0xa38),0,0);
  this_01 = (ConfirmationDialog *)operator_new(0xdb8,"");
  ConfirmationDialog::ConfirmationDialog(this_01);
  postinitialize_handler((Object *)this_01);
  *(ConfirmationDialog **)(this + 0xa78) = this_01;
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"");
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"Please Confirm...");
  TTR(local_70,(String *)local_68);
  Window::set_title((String *)this_01);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  uVar3 = *(undefined8 *)(this + 0xa78);
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"");
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"Remove all curve points?");
  TTR(local_70,(String *)local_68);
  AcceptDialog::set_text(uVar3,local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  plVar6 = *(long **)(this + 0xa78);
  pcVar2 = *(code **)(*plVar6 + 0x108);
  create_custom_callable_function_pointer<Path2DEditor,int>
            ((Path2DEditor *)local_58,(char *)this,(_func_void_int *)"&Path2DEditor::_mode_selected"
            );
  Callable::bind<Path2DEditor::Mode>((String *)local_68,(CowData<char32_t> *)local_58,5);
  (*pcVar2)(plVar6,SceneStringNames::singleton + 0x268,(String *)local_68,0);
  Callable::~Callable((Callable *)local_68);
  Callable::~Callable((Callable *)local_58);
  Node::add_child(*(undefined8 *)(this + 0xa30),*(undefined8 *)(this + 0xa78),0,0);
  this_02 = (MenuButton *)operator_new(0xc68,"");
  local_58[0] = 0;
  MenuButton::MenuButton(this_02,(String *)local_58);
  postinitialize_handler((Object *)this_02);
  *(MenuButton **)(this + 0xa68) = this_02;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  Button::set_flat(SUB81(*(undefined8 *)(this + 0xa68),0));
  pSVar4 = *(StringName **)(this + 0xa68);
  StringName::StringName((StringName *)local_58,"FlatMenuButton",false);
  Control::set_theme_type_variation(pSVar4);
  if ((StringName::configured != '\0') && (local_58[0] != 0)) {
    StringName::unref();
  }
  pSVar1 = *(String **)(this + 0xa68);
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"");
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"Options");
  TTR(local_70,(String *)local_68);
  Button::set_text(pSVar1);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  Node::add_child(*(undefined8 *)(this + 0xa30),*(undefined8 *)(this + 0xa68),0,0);
  plVar6 = (long *)MenuButton::get_popup();
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"");
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"Mirror Handle Angles");
  TTR(local_70,(String *)local_68);
  PopupMenu::add_check_item(plVar6,local_70,0xffffffff,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  PopupMenu::set_item_checked((int)plVar6,false);
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"");
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"Mirror Handle Lengths");
  TTR(local_70,(String *)local_68);
  PopupMenu::add_check_item(plVar6,local_70,0xffffffff,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  PopupMenu::set_item_checked((int)plVar6,true);
  pcVar2 = *(code **)(*plVar6 + 0x108);
  create_custom_callable_function_pointer<Path2DEditor,int>
            ((Path2DEditor *)local_58,(char *)this,
             (_func_void_int *)"&Path2DEditor::_handle_option_pressed");
  (*pcVar2)(plVar6,SceneStringNames::singleton + 0x240,(CowData<char32_t> *)local_58,0);
  Callable::~Callable((Callable *)local_58);
  Node::add_child(this,*(undefined8 *)(this + 0xa30),0,0);
  pBVar5 = (Button *)operator_new(0xc10,"");
  local_58[0] = 0;
  Button::Button(pBVar5,(String *)local_58);
  postinitialize_handler((Object *)pBVar5);
  *(Button **)(this + 0xa70) = pBVar5;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  pSVar1 = *(String **)(this + 0xa70);
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"");
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"Create Curve");
  TTR(local_70,(String *)local_68);
  Button::set_text(pSVar1);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  CanvasItem::hide();
  Node::add_child(this,*(undefined8 *)(this + 0xa70),0,0);
  plVar6 = *(long **)(this + 0xa70);
  pcVar2 = *(code **)(*plVar6 + 0x108);
  create_custom_callable_function_pointer<Path2DEditor>
            ((Path2DEditor *)local_58,(char *)this,(_func_void *)"&Path2DEditor::_create_curve");
  (*pcVar2)(plVar6,SceneStringNames::singleton + 0x238,(CowData<char32_t> *)local_58,0);
  Callable::~Callable((Callable *)local_58);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Path2DEditorPlugin::Path2DEditorPlugin() */

void __thiscall Path2DEditorPlugin::Path2DEditorPlugin(Path2DEditorPlugin *this)

{
  Path2DEditor *this_00;
  
  Node::Node((Node *)this);
  *(code **)this = BoxContainer::BoxContainer;
  *(undefined2 *)(this + 0x408) = 0;
  *(undefined1 (*) [16])(this + 0x410) = (undefined1  [16])0x0;
  StringName::StringName((StringName *)(this + 0x420),"_forward_canvas_gui_input",false);
  this[0x428] = (Path2DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x430) = 0;
  StringName::StringName((StringName *)(this + 0x438),"_forward_canvas_draw_over_viewport",false);
  this[0x440] = (Path2DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x448) = 0;
  StringName::StringName
            ((StringName *)(this + 0x450),"_forward_canvas_force_draw_over_viewport",false);
  this[0x458] = (Path2DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x460) = 0;
  StringName::StringName((StringName *)(this + 0x468),"_forward_3d_gui_input",false);
  this[0x470] = (Path2DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x478) = 0;
  StringName::StringName((StringName *)(this + 0x480),"_forward_3d_draw_over_viewport",false);
  this[0x488] = (Path2DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x490) = 0;
  StringName::StringName((StringName *)(this + 0x498),"_forward_3d_force_draw_over_viewport",false);
  this[0x4a0] = (Path2DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x4a8) = 0;
  StringName::StringName((StringName *)(this + 0x4b0),"_get_plugin_name",false);
  this[0x4b8] = (Path2DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x4c0) = 0;
  StringName::StringName((StringName *)(this + 0x4c8),"_get_plugin_icon",false);
  this[0x4d0] = (Path2DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x4d8) = 0;
  StringName::StringName((StringName *)(this + 0x4e0),"_has_main_screen",false);
  this[0x4e8] = (Path2DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x4f0) = 0;
  StringName::StringName((StringName *)(this + 0x4f8),"_make_visible",false);
  this[0x500] = (Path2DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x508) = 0;
  StringName::StringName((StringName *)(this + 0x510),"_edit",false);
  this[0x518] = (Path2DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x520) = 0;
  StringName::StringName((StringName *)(this + 0x528),"_handles",false);
  this[0x530] = (Path2DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x538) = 0;
  StringName::StringName((StringName *)(this + 0x540),"_get_state",false);
  this[0x548] = (Path2DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x550) = 0;
  StringName::StringName((StringName *)(this + 0x558),"_set_state",false);
  this[0x560] = (Path2DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x568) = 0;
  StringName::StringName((StringName *)(this + 0x570),"_clear",false);
  this[0x578] = (Path2DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x580) = 0;
  StringName::StringName((StringName *)(this + 0x588),"_get_unsaved_status",false);
  this[0x590] = (Path2DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x598) = 0;
  StringName::StringName((StringName *)(this + 0x5a0),"_save_external_data",false);
  this[0x5a8] = (Path2DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x5b0) = 0;
  StringName::StringName((StringName *)(this + 0x5b8),"_apply_changes",false);
  this[0x5c0] = (Path2DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x5c8) = 0;
  StringName::StringName((StringName *)(this + 0x5d0),"_get_breakpoints",false);
  this[0x5d8] = (Path2DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x5e0) = 0;
  StringName::StringName((StringName *)(this + 0x5e8),"_set_window_layout",false);
  this[0x5f0] = (Path2DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x5f8) = 0;
  StringName::StringName((StringName *)(this + 0x600),"_get_window_layout",false);
  this[0x608] = (Path2DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x610) = 0;
  StringName::StringName((StringName *)(this + 0x618),"_build",false);
  this[0x620] = (Path2DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x628) = 0;
  StringName::StringName((StringName *)(this + 0x630),"_enable_plugin",false);
  this[0x638] = (Path2DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x640) = 0;
  StringName::StringName((StringName *)(this + 0x648),"_disable_plugin",false);
  this[0x650] = (Path2DEditorPlugin)0x0;
  *(undefined ***)this = &PTR__initialize_classv_0010f948;
  *(undefined1 (*) [16])(this + 0x658) = (undefined1  [16])0x0;
  this_00 = (Path2DEditor *)operator_new(0xab8,"");
  Path2DEditor::Path2DEditor(this_00);
  postinitialize_handler((Object *)this_00);
  *(Path2DEditor **)(this + 0x660) = this_00;
  CanvasItemEditor::add_control_to_menu_panel(CanvasItemEditor::singleton);
  CanvasItem::hide();
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Path2DEditor::forward_canvas_draw_over_viewport(Control*) */

void __thiscall Path2DEditor::forward_canvas_draw_over_viewport(Path2DEditor *this,Control *param_1)

{
  long lVar1;
  Ref *pRVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  long *plVar8;
  StringName *pSVar9;
  bool bVar10;
  long in_FS_OFFSET;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  float fVar18;
  undefined8 uVar17;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  long *local_d0;
  StringName local_c8 [8];
  long *local_c0;
  undefined8 local_b8;
  long *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  Transform2D local_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(this + 0xa20) != 0) && (cVar3 = CanvasItem::is_visible_in_tree(), cVar3 != '\0')) {
    Path2D::get_curve();
    if (local_b0 == (long *)0x0) {
      Ref<Curve2D>::unref((Ref<Curve2D> *)&local_b0);
    }
    else {
      Ref<Curve2D>::unref((Ref<Curve2D> *)&local_b0);
      plVar8 = *(long **)(this + 0xa20);
      if (plVar8[0x4b] != 0) {
        cVar4 = Viewport::is_visible_subviewport();
        if (cVar4 == '\0') goto LAB_001024c9;
        plVar8 = *(long **)(this + 0xa20);
      }
      (**(code **)(*plVar8 + 0x2b0))(&local_58);
      lVar1 = *(long *)(this + 0xa10);
      local_78 = *(undefined8 *)(lVar1 + 0xa80);
      uStack_70 = *(undefined8 *)(lVar1 + 0xa88);
      local_68 = *(undefined8 *)(lVar1 + 0xa90);
      Transform2D::operator*(local_98,(Transform2D *)&local_78);
      if ((forward_canvas_draw_over_viewport(Control*)::{lambda()#1}::operator()()::sname == '\0')
         && (iVar5 = __cxa_guard_acquire(&forward_canvas_draw_over_viewport(Control*)::{lambda()#1}
                                          ::operator()()::sname), iVar5 != 0)) {
        _scs_create((char *)&forward_canvas_draw_over_viewport(Control*)::{lambda()#1}::operator()()
                             ::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &forward_canvas_draw_over_viewport(Control*)::{lambda()#1}::operator()()::sname
                     ,&__dso_handle);
        __cxa_guard_release(&forward_canvas_draw_over_viewport(Control*)::{lambda()#1}::operator()()
                             ::sname);
      }
      Control::get_editor_theme_icon((StringName *)&local_d0);
      if ((forward_canvas_draw_over_viewport(Control*)::{lambda()#2}::operator()()::sname == '\0')
         && (iVar5 = __cxa_guard_acquire(&forward_canvas_draw_over_viewport(Control*)::{lambda()#2}
                                          ::operator()()::sname), iVar5 != 0)) {
        _scs_create((char *)&forward_canvas_draw_over_viewport(Control*)::{lambda()#2}::operator()()
                             ::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &forward_canvas_draw_over_viewport(Control*)::{lambda()#2}::operator()()::sname
                     ,&__dso_handle);
        __cxa_guard_release(&forward_canvas_draw_over_viewport(Control*)::{lambda()#2}::operator()()
                             ::sname);
      }
      Control::get_editor_theme_icon(local_c8);
      uVar14 = (**(code **)(*local_d0 + 0x1d8))();
      if ((forward_canvas_draw_over_viewport(Control*)::{lambda()#3}::operator()()::sname == '\0')
         && (iVar5 = __cxa_guard_acquire(&forward_canvas_draw_over_viewport(Control*)::{lambda()#3}
                                          ::operator()()::sname), iVar5 != 0)) {
        _scs_create((char *)&forward_canvas_draw_over_viewport(Control*)::{lambda()#3}::operator()()
                             ::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &forward_canvas_draw_over_viewport(Control*)::{lambda()#3}::operator()()::sname
                     ,&__dso_handle);
        __cxa_guard_release(&forward_canvas_draw_over_viewport(Control*)::{lambda()#3}::operator()()
                             ::sname);
      }
      Control::get_editor_theme_icon((StringName *)&local_c0);
      uVar15 = (**(code **)(*local_c0 + 0x1d8))();
      Path2D::get_curve();
      iVar5 = Curve2D::get_point_count();
      pRVar2 = *(Ref **)(*(long *)(this + 0xa10) + 0xa20);
      if (0 < iVar5) {
        iVar7 = 0;
        do {
          cVar4 = '\0';
          uVar16 = Curve2D::get_point_position((int)local_b8);
          fVar18 = (float)((ulong)uVar16 >> 0x20);
          fVar23 = (float)local_98._8_8_;
          fVar24 = SUB84(local_98._8_8_,4);
          fVar21 = (float)local_98._0_8_;
          fVar22 = SUB84(local_98._0_8_,4);
          fVar13 = (float)local_98._16_8_;
          fVar19 = SUB84(local_98._16_8_,4);
          local_a8 = CONCAT44((float)uVar16 * fVar22 + fVar18 * fVar24 + fVar19,
                              (float)uVar16 * fVar21 + fVar18 * fVar23 + fVar13);
          bVar6 = SUB81((Transform2D *)&local_78,0);
          bVar10 = SUB81(&local_58,0);
          fVar18 = (float)((ulong)uVar15 >> 0x20);
          if (iVar7 < iVar5 + -1) {
            uVar16 = Curve2D::get_point_out((int)local_b8);
            uVar17 = Curve2D::get_point_position((int)local_b8);
            fVar11 = (float)uVar17 + (float)uVar16;
            fVar20 = (float)((ulong)uVar17 >> 0x20) + (float)((ulong)uVar16 >> 0x20);
            fVar12 = fVar11 * fVar21 + fVar20 * fVar23 + fVar13;
            fVar11 = fVar11 * fVar22 + fVar20 * fVar24 + fVar19;
            local_a0 = CONCAT44(fVar11,fVar12);
            if ((fVar12 != (float)local_a8) || (fVar11 != local_a8._4_4_)) {
              fVar11 = (float)EditorScale::get_scale();
              fVar11 = roundf(fVar11);
              local_58 = __LC84;
              uStack_50 = _UNK_00110048;
              CanvasItem::draw_line(pRVar2,(Vector2 *)&local_a8,(Color *)&local_a0,fVar11,bVar10);
              fVar11 = (float)EditorScale::get_scale();
              fVar11 = roundf(fVar11);
              local_58 = CONCAT44(_UNK_00110054,_LC89);
              uStack_50 = _UNK_00110058;
              CanvasItem::draw_line(pRVar2,(Vector2 *)&local_a8,(Color *)&local_a0,fVar11,bVar10);
              local_58 = __LC86;
              uStack_50 = _UNK_00110068;
              local_78 = CONCAT44((float)((ulong)local_a0 >> 0x20) - _LC87._4_4_ * fVar18,
                                  (float)local_a0 - (float)_LC87 * (float)uVar15);
              uStack_70 = uVar15;
              CanvasItem::draw_texture_rect(pRVar2,(Rect2 *)&local_c0,bVar6,(Color *)0x0,bVar10);
              cVar4 = cVar3;
            }
          }
          if (iVar7 != 0) {
            uVar16 = Curve2D::get_point_in((int)local_b8);
            uVar17 = Curve2D::get_point_position((int)local_b8);
            fVar11 = (float)uVar17 + (float)uVar16;
            fVar12 = (float)((ulong)uVar17 >> 0x20) + (float)((ulong)uVar16 >> 0x20);
            fVar13 = fVar11 * fVar21 + fVar12 * fVar23 + fVar13;
            fVar19 = fVar11 * fVar22 + fVar12 * fVar24 + fVar19;
            local_a0 = CONCAT44(fVar19,fVar13);
            if (((float)local_a8 != fVar13) || (local_a8._4_4_ != fVar19)) {
              fVar13 = (float)EditorScale::get_scale();
              fVar13 = roundf(fVar13);
              local_58 = __LC84;
              uStack_50 = _UNK_00110048;
              CanvasItem::draw_line(pRVar2,(Vector2 *)&local_a8,(Color *)&local_a0,fVar13,bVar10);
              fVar13 = (float)EditorScale::get_scale();
              fVar13 = roundf(fVar13);
              local_58 = CONCAT44(_UNK_00110054,_LC89);
              uStack_50 = _UNK_00110058;
              CanvasItem::draw_line(pRVar2,(Vector2 *)&local_a8,(Color *)&local_a0,fVar13,bVar10);
              local_58 = __LC86;
              uStack_50 = _UNK_00110068;
              local_78 = CONCAT44((float)((ulong)local_a0 >> 0x20) - _LC87._4_4_ * fVar18,
                                  (float)local_a0 - (float)_LC87 * (float)uVar15);
              uStack_70 = uVar15;
              CanvasItem::draw_texture_rect(pRVar2,(Rect2 *)&local_c0,bVar6,(Color *)0x0,bVar10);
              cVar4 = cVar3;
            }
          }
          pSVar9 = (StringName *)&local_d0;
          if (cVar4 != '\0') {
            pSVar9 = local_c8;
          }
          iVar7 = iVar7 + 1;
          local_58 = __LC88;
          uStack_50 = _UNK_00110078;
          local_78 = CONCAT44((float)((ulong)local_a8 >> 0x20) -
                              (float)((ulong)uVar14 >> 0x20) * _LC87._4_4_,
                              (float)local_a8 - (float)uVar14 * (float)_LC87);
          uStack_70 = uVar14;
          CanvasItem::draw_texture_rect(pRVar2,(Rect2 *)pSVar9,bVar6,(Color *)0x0,bVar10);
        } while (iVar5 != iVar7);
      }
      if (this[0xa82] != (Path2DEditor)0x0) {
        if ((forward_canvas_draw_over_viewport(Control*)::{lambda()#4}::operator()()::sname == '\0')
           && (iVar5 = __cxa_guard_acquire(&forward_canvas_draw_over_viewport(Control*)::
                                            {lambda()#4}::operator()()::sname), iVar5 != 0)) {
          _scs_create((char *)&forward_canvas_draw_over_viewport(Control*)::{lambda()#4}::
                               operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &forward_canvas_draw_over_viewport(Control*)::{lambda()#4}::operator()()::
                        sname,&__dso_handle);
          __cxa_guard_release(&forward_canvas_draw_over_viewport(Control*)::{lambda()#4}::
                               operator()()::sname);
        }
        Control::get_editor_theme_icon((StringName *)&local_b0);
        local_58 = CONCAT44(_LC89,_LC89);
        uStack_50 = CONCAT44(_LC89,_LC89);
        uVar14 = (**(code **)(*local_b0 + 0x1d8))();
        local_78 = CONCAT44((float)((ulong)*(undefined8 *)(this + 0xaa4) >> 0x20) -
                            _LC87._4_4_ * (float)((ulong)uVar14 >> 0x20),
                            (float)*(undefined8 *)(this + 0xaa4) - (float)_LC87 * (float)uVar14);
        CanvasItem::draw_texture((Ref *)param_1,(Ref<Curve2D> *)&local_b0,(Color *)&local_78);
        Ref<Texture2D>::unref((Ref<Texture2D> *)&local_b0);
      }
      Ref<Curve2D>::unref((Ref<Curve2D> *)&local_b8);
      Ref<Texture2D>::unref((Ref<Texture2D> *)&local_c0);
      Ref<Texture2D>::unref((Ref<Texture2D> *)local_c8);
      Ref<Texture2D>::unref((Ref<Texture2D> *)&local_d0);
    }
  }
LAB_001024c9:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Path2DEditor::_cancel_current_action() */

void __thiscall Path2DEditor::_cancel_current_action(Path2DEditor *this)

{
  float fVar1;
  Object *pOVar2;
  char cVar3;
  int iVar4;
  long in_FS_OFFSET;
  undefined8 uVar5;
  Object *local_30;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0xa20) == 0) {
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("_cancel_current_action","editor/plugins/path_2d_editor_plugin.cpp",0x252,
                       "Parameter \"node\" is null.",0,0);
      return;
    }
  }
  else {
    Path2D::get_curve();
    if (local_30 == (Object *)0x0) {
      _err_print_error("_cancel_current_action","editor/plugins/path_2d_editor_plugin.cpp",0x254,
                       "Condition \"curve.is_null()\" is true.",0,0);
      Ref<Curve2D>::unref((Ref<Curve2D> *)&local_30);
    }
    else {
      iVar4 = (int)local_30;
      switch(*(undefined4 *)(this + 0xa84)) {
      case 1:
        Curve2D::set_point_position(iVar4,(Vector2 *)(ulong)*(uint *)(this + 0xa88));
        break;
      case 2:
        Curve2D::get_point_count();
        Curve2D::remove_point(iVar4);
        break;
      case 3:
        Curve2D::remove_point(iVar4);
        break;
      case 4:
        Curve2D::set_point_in(iVar4,(Vector2 *)(ulong)*(uint *)(this + 0xa88));
        pOVar2 = local_30;
        if (this[0xa81] == (Path2DEditor)0x0) {
          fVar1 = *(float *)(this + 0xaa0);
          uVar5 = Vector2::normalized();
          local_28 = CONCAT44((float)((uint)((ulong)uVar5 >> 0x20) ^ _LC95._4_4_) * fVar1,
                              (float)((uint)uVar5 ^ (uint)_LC95) * fVar1);
        }
        else {
          local_28 = CONCAT44((uint)((ulong)*(undefined8 *)(this + 0xa8c) >> 0x20) ^ _LC95._4_4_,
                              (uint)*(undefined8 *)(this + 0xa8c) ^ (uint)_LC95);
        }
        Curve2D::set_point_out((int)pOVar2,(Vector2 *)(ulong)*(uint *)(this + 0xa88));
        break;
      case 5:
        Curve2D::set_point_out(iVar4,(Vector2 *)(ulong)*(uint *)(this + 0xa88));
        pOVar2 = local_30;
        if (this[0xa81] == (Path2DEditor)0x0) {
          fVar1 = *(float *)(this + 0xa9c);
          uVar5 = Vector2::normalized();
          local_28 = CONCAT44((float)((uint)((ulong)uVar5 >> 0x20) ^ _LC95._4_4_) * fVar1,
                              (float)((uint)uVar5 ^ (uint)_LC95) * fVar1);
        }
        else {
          local_28 = CONCAT44((uint)((ulong)*(undefined8 *)(this + 0xa8c) >> 0x20) ^ _LC95._4_4_,
                              (uint)*(undefined8 *)(this + 0xa8c) ^ (uint)_LC95);
        }
        Curve2D::set_point_in((int)pOVar2,(Vector2 *)(ulong)*(uint *)(this + 0xa88));
      }
      CanvasItemEditor::update_viewport();
      *(undefined4 *)(this + 0xa84) = 0;
      if (((local_30 != (Object *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) &&
         (cVar3 = predelete_handler(local_30), cVar3 != '\0')) {
        (**(code **)(*(long *)local_30 + 0x140))(local_30);
        Memory::free_static(local_30,false);
      }
    }
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Path2DEditor::edit(Node*) */

void __thiscall Path2DEditor::edit(Path2DEditor *this,Node *param_1)

{
  long *plVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  Path2DEditor aPStack_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0xa10) == 0) {
    *(undefined8 *)(this + 0xa10) = CanvasItemEditor::singleton;
  }
  if (*(int *)(this + 0xa84) != 0) {
    _cancel_current_action(this);
  }
  if (param_1 == (Node *)0x0) {
    plVar1 = *(long **)(this + 0xa20);
    if (plVar1 != (long *)0x0) {
      pcVar2 = *(code **)(*plVar1 + 0x118);
      create_custom_callable_function_pointer<Path2DEditor>
                (aPStack_58,(char *)this,(_func_void *)"&Path2DEditor::_node_visibility_changed");
      cVar3 = (*pcVar2)(plVar1,SceneStringNames::singleton + 0x18,aPStack_58);
      Callable::~Callable((Callable *)aPStack_58);
      if (cVar3 != '\0') {
        plVar1 = *(long **)(this + 0xa20);
        pcVar2 = *(code **)(*plVar1 + 0x110);
        create_custom_callable_function_pointer<Path2DEditor>
                  (aPStack_58,(char *)this,(_func_void *)"&Path2DEditor::_node_visibility_changed");
        (*pcVar2)(plVar1,SceneStringNames::singleton + 0x18,aPStack_58);
        Callable::~Callable((Callable *)aPStack_58);
      }
    }
    *(undefined8 *)(this + 0xa20) = 0;
  }
  else {
    uVar4 = __dynamic_cast(param_1,&Object::typeinfo,&Path2D::typeinfo,0);
    *(undefined8 *)(this + 0xa20) = uVar4;
    _update_toolbar(this);
    plVar1 = *(long **)(this + 0xa20);
    pcVar2 = *(code **)(*plVar1 + 0x118);
    create_custom_callable_function_pointer<Path2DEditor>
              (aPStack_58,(char *)this,(_func_void *)"&Path2DEditor::_node_visibility_changed");
    cVar3 = (*pcVar2)(plVar1,SceneStringNames::singleton + 0x18,aPStack_58);
    Callable::~Callable((Callable *)aPStack_58);
    if (cVar3 == '\0') {
      plVar1 = *(long **)(this + 0xa20);
      pcVar2 = *(code **)(*plVar1 + 0x108);
      create_custom_callable_function_pointer<Path2DEditor>
                (aPStack_58,(char *)this,(_func_void *)"&Path2DEditor::_node_visibility_changed");
      (*pcVar2)(plVar1,SceneStringNames::singleton + 0x18,aPStack_58,0);
      Callable::~Callable((Callable *)aPStack_58);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    CanvasItemEditor::update_viewport();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Path2DEditorPlugin::edit(Object*) */

void __thiscall Path2DEditorPlugin::edit(Path2DEditorPlugin *this,Object *param_1)

{
  Path2DEditor *this_00;
  
  this_00 = *(Path2DEditor **)(this + 0x660);
  if (param_1 != (Object *)0x0) {
    param_1 = (Object *)__dynamic_cast(param_1,&Object::typeinfo,&Node::typeinfo,0);
  }
  Path2DEditor::edit(this_00,(Node *)param_1);
  return;
}



/* Path2DEditorPlugin::make_visible(bool) */

void __thiscall Path2DEditorPlugin::make_visible(Path2DEditorPlugin *this,bool param_1)

{
  if (param_1) {
    CanvasItem::show();
    return;
  }
  CanvasItem::hide();
  Path2DEditor::edit(*(Path2DEditor **)(this + 0x660),(Node *)0x0);
  return;
}



/* Path2DEditor::_create_curve() */

void __thiscall Path2DEditor::_create_curve(Path2DEditor *this)

{
  char cVar1;
  Curve2D *this_00;
  Object *pOVar2;
  long in_FS_OFFSET;
  Curve2D *local_80;
  undefined8 local_78;
  Curve2D *local_70;
  char *local_68;
  undefined8 local_60;
  int local_58 [2];
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0xa20) == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("_create_curve","editor/plugins/path_2d_editor_plugin.cpp",0x276,
                       "Parameter \"node\" is null.",0,0);
      return;
    }
  }
  else {
    local_80 = (Curve2D *)0x0;
    this_00 = (Curve2D *)operator_new(0x290,"");
    Curve2D::Curve2D(this_00);
    postinitialize_handler((Object *)this_00);
    local_68 = (char *)0x0;
    local_70 = this_00;
    cVar1 = RefCounted::init_ref();
    if (cVar1 == '\0') {
      local_70 = (Curve2D *)0x0;
      this_00 = (Curve2D *)0x0;
      Ref<Curve2D>::unref((Ref<Curve2D> *)&local_68);
    }
    else {
      Ref<Curve2D>::unref((Ref<Curve2D> *)&local_68);
      local_68 = (char *)0x0;
      local_80 = this_00;
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        local_80 = (Curve2D *)0x0;
        this_00 = (Curve2D *)0x0;
      }
      Ref<Curve2D>::unref((Ref<Curve2D> *)&local_68);
    }
    Ref<Curve2D>::unref((Ref<Curve2D> *)&local_70);
    pOVar2 = (Object *)EditorUndoRedoManager::get_singleton();
    local_68 = "";
    local_70 = (Curve2D *)0x0;
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_70);
    local_68 = "Create Curve in Path2D";
    local_78 = 0;
    local_60 = 0x16;
    String::parse_latin1((StrRange *)&local_78);
    TTR((String *)&local_68,(String *)&local_78);
    EditorUndoRedoManager::create_action(pOVar2,(String *)&local_68,0,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    Variant::Variant((Variant *)local_58,(Object *)this_00);
    StringName::StringName((StringName *)&local_68,"curve",false);
    EditorUndoRedoManager::add_do_property
              (pOVar2,*(StringName **)(this + 0xa20),(Variant *)&local_68);
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_58,(Object *)0x0);
    StringName::StringName((StringName *)&local_68,"curve",false);
    EditorUndoRedoManager::add_undo_property
              (pOVar2,*(StringName **)(this + 0xa20),(Variant *)&local_68);
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    StringName::StringName((StringName *)&local_68,"_update_toolbar",false);
    local_50 = (undefined1  [16])0x0;
    local_58[0] = 0;
    local_58[1] = 0;
    EditorUndoRedoManager::add_do_methodp(pOVar2,(StringName *)this,(Variant **)&local_68,0);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_68,"_update_toolbar",false);
    local_50 = (undefined1  [16])0x0;
    local_58[0] = 0;
    local_58[1] = 0;
    EditorUndoRedoManager::add_undo_methodp(pOVar2,(StringName *)this,(Variant **)&local_68,0);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
    EditorUndoRedoManager::commit_action(SUB81(pOVar2,0));
    Ref<Curve2D>::unref((Ref<Curve2D> *)&local_80);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Path2DEditor::forward_gui_input(Ref<InputEvent> const&) */

uint __thiscall Path2DEditor::forward_gui_input(Path2DEditor *this,Ref *param_1)

{
  String *pSVar1;
  Path2DEditor PVar2;
  void *pvVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  StringName *pSVar7;
  long *plVar8;
  char cVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  Object *pOVar13;
  long lVar14;
  Object *pOVar15;
  EditorUndoRedoManager *pEVar16;
  int iVar17;
  int iVar18;
  char *pcVar19;
  String *pSVar20;
  int iVar21;
  long in_FS_OFFSET;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  undefined8 uVar25;
  EditorUndoRedoManager *pEVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  float fVar29;
  float fVar30;
  uint uVar31;
  uint uVar32;
  float fVar33;
  Transform2D *local_1b0;
  uint local_1a0;
  uint uStack_19c;
  Transform2D *local_180;
  Ref<Curve2D> *local_178;
  StringName *local_158;
  undefined8 local_150;
  undefined8 local_148;
  long *local_140;
  undefined8 local_138;
  EditorUndoRedoManager *local_130;
  EditorUndoRedoManager *local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  Transform2D local_108 [32];
  undefined1 local_e8 [16];
  Variant *local_d8;
  Variant *pVStack_d0;
  undefined8 local_b8 [3];
  undefined8 local_a0;
  undefined1 local_98 [16];
  Variant local_88 [24];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  if (((*(long *)(this + 0xa20) == 0) || (cVar9 = CanvasItem::is_visible_in_tree(), cVar9 == '\0'))
     || ((*(long *)(*(long *)(this + 0xa20) + 600) != 0 &&
         (cVar9 = Viewport::is_visible_subviewport(), cVar9 == '\0')))) {
LAB_00103a40:
    uVar10 = 0;
    goto LAB_00103a43;
  }
  Path2D::get_curve();
  plVar8 = local_140;
  Ref<Curve2D>::unref((Ref<Curve2D> *)&local_140);
  if (plVar8 == (long *)0x0) goto LAB_00103a40;
  local_140 = (long *)0x0;
  String::parse_latin1((String *)&local_140,"editors/polygon_editor/point_grab_radius");
  _EDITOR_GET((String *)local_b8);
  fVar22 = Variant::operator_cast_to_float((Variant *)local_b8);
  if (Variant::needs_deinit[(int)local_b8[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
  lVar14 = *(long *)param_1;
  if (lVar14 == 0) goto LAB_00103a40;
  pOVar13 = (Object *)__dynamic_cast(lVar14,&Object::typeinfo,&InputEventMouseButton::typeinfo);
  if (pOVar13 == (Object *)0x0) {
LAB_00103a7a:
    pOVar15 = (Object *)__dynamic_cast(lVar14,&Object::typeinfo,&InputEventMouseMotion::typeinfo,0);
    if ((pOVar15 == (Object *)0x0) || (uVar10 = RefCounted::reference(), (char)uVar10 == '\0')) {
      uVar10 = 0;
    }
    else {
      if (*(int *)(this + 0xa84) == 0) {
        if (*(int *)(this + 0xa28) == 1) {
          PVar2 = this[0xa82];
          (**(code **)(**(long **)(this + 0xa20) + 0x2b0))((String *)local_b8);
          lVar14 = *(long *)(this + 0xa10);
          local_e8._0_8_ = *(undefined8 *)(lVar14 + 0xa80);
          local_e8._8_8_ = *(undefined8 *)(lVar14 + 0xa88);
          local_d8 = *(Variant **)(lVar14 + 0xa90);
          Transform2D::operator*(local_108,(Transform2D *)local_e8);
          local_e8._0_8_ = InputEventMouse::get_position();
          Path2D::get_curve();
          if ((local_140 == (long *)0x0) ||
             (iVar12 = Curve2D::get_point_count(), plVar8 = local_140, iVar12 < 2))
          goto LAB_00103d9c;
          Transform2D::affine_inverse();
          uVar25 = InputEventMouse::get_position();
          fVar33 = (float)((ulong)uVar25 >> 0x20);
          local_110 = CONCAT44(fVar33 * (float)((ulong)local_b8[1] >> 0x20) +
                               (float)uVar25 * (float)((ulong)local_b8[0] >> 0x20) +
                               (float)((ulong)local_b8[2] >> 0x20),
                               fVar33 * (float)local_b8[1] + (float)uVar25 * (float)local_b8[0] +
                               (float)local_b8[2]);
          uVar25 = Curve2D::get_closest_point((Vector2 *)plVar8);
          this[0xa82] = (Path2DEditor)0x0;
          fVar33 = (float)((ulong)uVar25 >> 0x20);
          *(ulong *)(this + 0xaa4) =
               CONCAT44(fVar33 * SUB84(local_108._8_8_,4) + (float)uVar25 * SUB84(local_108._0_8_,4)
                        + SUB84(local_108._16_8_,4),
                        fVar33 * (float)local_108._8_8_ + (float)uVar25 * (float)local_108._0_8_ +
                        (float)local_108._16_8_);
          fVar33 = (float)Vector2::distance_to(this + 0xaa4);
          if (fVar33 <= fVar22) {
            this[0xa82] = (Path2DEditor)0x1;
          }
          iVar21 = 0;
          iVar12 = Curve2D::get_point_count();
          if (0 < iVar12) {
            do {
              uVar25 = Curve2D::get_point_position((int)local_140);
              fVar33 = (float)uVar25;
              fVar30 = (float)((ulong)uVar25 >> 0x20);
              local_b8[0] = CONCAT44(SUB84(local_108._16_8_,4) +
                                     fVar30 * SUB84(local_108._8_8_,4) +
                                     fVar33 * SUB84(local_108._0_8_,4),
                                     (float)local_108._16_8_ +
                                     fVar30 * (float)local_108._8_8_ +
                                     fVar33 * (float)local_108._0_8_);
              fVar23 = (float)Vector2::distance_to((String *)local_b8);
              if (fVar23 <= fVar22) {
LAB_00104285:
                this[0xa82] = (Path2DEditor)0x0;
                goto LAB_00104296;
              }
              uVar25 = Curve2D::get_point_in((int)local_140);
              fVar23 = (float)uVar25 + fVar33;
              fVar29 = (float)((ulong)uVar25 >> 0x20) + fVar30;
              local_b8[0] = CONCAT44(SUB84(local_108._8_8_,4) * fVar29 +
                                     fVar23 * SUB84(local_108._0_8_,4) + SUB84(local_108._16_8_,4),
                                     (float)local_108._8_8_ * fVar29 +
                                     fVar23 * (float)local_108._0_8_ + (float)local_108._16_8_);
              fVar23 = (float)Vector2::distance_to((String *)local_b8);
              if (fVar23 <= fVar22) goto LAB_00104285;
              uVar25 = Curve2D::get_point_out((int)local_140);
              fVar33 = (float)uVar25 + fVar33;
              fVar30 = fVar30 + (float)((ulong)uVar25 >> 0x20);
              local_b8[0] = CONCAT44(SUB84(local_108._8_8_,4) * fVar30 +
                                     fVar33 * SUB84(local_108._0_8_,4) + SUB84(local_108._16_8_,4),
                                     (float)local_108._8_8_ * fVar30 +
                                     fVar33 * (float)local_108._0_8_ + (float)local_108._16_8_);
              fVar33 = (float)Vector2::distance_to((String *)local_b8);
              if (fVar33 <= fVar22) goto LAB_00104285;
              iVar21 = iVar21 + 1;
            } while (iVar12 != iVar21);
          }
          PVar2 = (Path2DEditor)((byte)PVar2 | (byte)this[0xa82]);
LAB_00104296:
          if (PVar2 != (Path2DEditor)0x0) goto LAB_00103d90;
          Ref<Curve2D>::unref((Ref<Curve2D> *)&local_140);
          if (*(int *)(this + 0xa84) != 0) goto LAB_00103b18;
        }
        uVar10 = 0;
      }
      else {
LAB_00103b18:
        local_180 = local_108;
        local_1b0 = (Transform2D *)local_e8;
        (**(code **)(**(long **)(this + 0xa20) + 0x2b0))((String *)local_b8);
        lVar14 = *(long *)(this + 0xa10);
        local_e8._0_8_ = *(undefined8 *)(lVar14 + 0xa80);
        local_e8._8_8_ = *(undefined8 *)(lVar14 + 0xa88);
        local_d8 = *(Variant **)(lVar14 + 0xa90);
        Transform2D::operator*(local_180,local_1b0);
        uVar25 = InputEventMouse::get_position();
        lVar14 = *(long *)(this + 0xa10);
        local_140 = (long *)0x0;
        local_e8._0_8_ = *(undefined8 *)(lVar14 + 0xa80);
        local_e8._8_8_ = *(undefined8 *)(lVar14 + 0xa88);
        local_d8 = *(Variant **)(lVar14 + 0xa90);
        Transform2D::affine_inverse();
        local_110 = CanvasItemEditor::snap_point(lVar14,7,0,0,(Ref<Curve2D> *)&local_140);
        List<CanvasItem*,DefaultAllocator>::~List((List<CanvasItem*,DefaultAllocator> *)&local_140);
        lVar14 = *(long *)(this + 0xa20);
        (**(code **)(**(long **)(lVar14 + 600) + 0x1f8))(local_1b0);
        Transform2D::affine_inverse();
        local_110 = Node2D::to_local(lVar14);
        Path2D::get_curve();
        Transform2D::affine_inverse();
        uVar31 = *(uint *)(this + 0xa84);
        fVar22 = (float)uVar25 - *(float *)(this + 0xa94);
        fVar33 = (float)((ulong)uVar25 >> 0x20) - *(float *)(this + 0xa98);
        local_e8._4_4_ =
             fVar22 * (float)((ulong)local_b8[0] >> 0x20) +
             fVar33 * (float)((ulong)local_b8[1] >> 0x20) +
             (float)((ulong)*(undefined8 *)(this + 0xa8c) >> 0x20);
        local_e8._0_4_ =
             fVar22 * (float)local_b8[0] + fVar33 * (float)local_b8[1] +
             (float)*(undefined8 *)(this + 0xa8c);
        iVar12 = (int)local_140;
        if (uVar31 == 4) {
          Curve2D::set_point_in(iVar12,(Vector2 *)(ulong)*(uint *)(this + 0xa88));
          plVar8 = local_140;
          if (this[0xa80] != (Path2DEditor)0x0) {
            if (this[0xa81] == (Path2DEditor)0x0) {
              fVar22 = *(float *)(this + 0xaa0);
              uVar25 = Vector2::normalized();
              local_b8[0] = CONCAT44((float)((uint)((ulong)uVar25 >> 0x20) ^ _LC95._4_4_) * fVar22,
                                     (float)((uint)uVar25 ^ (uint)_LC95) * fVar22);
            }
            else {
              local_b8[0] = CONCAT44(local_e8._4_4_ ^ _LC95._4_4_,local_e8._0_4_ ^ (uint)_LC95);
            }
            Curve2D::set_point_out((int)plVar8,(Vector2 *)(ulong)*(uint *)(this + 0xa88));
          }
        }
        else if (uVar31 < 5) {
          if (uVar31 - 1 < 3) {
            Curve2D::set_point_position(iVar12,(Vector2 *)(ulong)*(uint *)(this + 0xa88));
          }
        }
        else if ((uVar31 == 5) &&
                (Curve2D::set_point_out(iVar12,(Vector2 *)(ulong)*(uint *)(this + 0xa88)),
                plVar8 = local_140, this[0xa80] != (Path2DEditor)0x0)) {
          if (this[0xa81] == (Path2DEditor)0x0) {
            fVar22 = *(float *)(this + 0xa9c);
            uVar25 = Vector2::normalized();
            local_b8[0] = CONCAT44((float)((uint)((ulong)uVar25 >> 0x20) ^ _LC95._4_4_) * fVar22,
                                   (float)((uint)uVar25 ^ (uint)_LC95) * fVar22);
          }
          else {
            local_b8[0] = CONCAT44(local_e8._4_4_ ^ _LC95._4_4_,local_e8._0_4_ ^ (uint)_LC95);
          }
          Curve2D::set_point_in((int)plVar8,(Vector2 *)(ulong)*(uint *)(this + 0xa88));
        }
LAB_00103d90:
        CanvasItemEditor::update_viewport();
LAB_00103d9c:
        Ref<Curve2D>::unref((Ref<Curve2D> *)&local_140);
      }
      cVar9 = RefCounted::unreference();
      if ((cVar9 != '\0') && (cVar9 = predelete_handler(pOVar15), cVar9 != '\0')) {
        (**(code **)(*(long *)pOVar15 + 0x140))(pOVar15);
        Memory::free_static(pOVar15,false);
      }
    }
    if (pOVar13 == (Object *)0x0) goto LAB_00103a43;
    goto LAB_00103ab1;
  }
  uVar10 = RefCounted::reference();
  if ((char)uVar10 == '\0') {
    lVar14 = *(long *)param_1;
    pOVar13 = (Object *)0x0;
    if (lVar14 == 0) goto LAB_00103a43;
    goto LAB_00103a7a;
  }
  (**(code **)(**(long **)(this + 0xa20) + 0x2b0))((String *)local_b8);
  local_e8 = *(undefined1 (*) [16])(*(long *)(this + 0xa10) + 0xa80);
  local_d8 = *(Variant **)(*(long *)(this + 0xa10) + 0xa90);
  Transform2D::operator*(local_108,(Transform2D *)local_e8);
  local_138 = InputEventMouse::get_position();
  lVar14 = *(long *)(this + 0xa10);
  local_e8 = *(undefined1 (*) [16])(lVar14 + 0xa80);
  local_140 = (long *)0x0;
  local_d8 = *(Variant **)(lVar14 + 0xa90);
  Transform2D::affine_inverse();
  local_130 = (EditorUndoRedoManager *)CanvasItemEditor::snap_point(lVar14,7,0);
  if (local_140 != (long *)0x0) {
    do {
      plVar8 = local_140;
      pvVar3 = (void *)*local_140;
      if (pvVar3 == (void *)0x0) {
        if ((int)local_140[2] != 0) {
          _err_print_error("~List","./core/templates/list.h",0x316);
          goto LAB_0010393f;
        }
        break;
      }
      if (local_140 == *(long **)((long)pvVar3 + 0x18)) {
        lVar14 = *(long *)((long)pvVar3 + 8);
        lVar4 = *(long *)((long)pvVar3 + 0x10);
        *local_140 = lVar14;
        if (pvVar3 == (void *)local_140[1]) {
          local_140[1] = lVar4;
        }
        if (lVar4 != 0) {
          *(long *)(lVar4 + 8) = lVar14;
          lVar14 = *(long *)((long)pvVar3 + 8);
        }
        if (lVar14 != 0) {
          *(long *)(lVar14 + 0x10) = lVar4;
        }
        Memory::free_static(pvVar3,false);
        *(int *)(plVar8 + 2) = (int)plVar8[2] + -1;
      }
      else {
        _err_print_error("erase","./core/templates/list.h",0xe7);
      }
    } while ((int)local_140[2] != 0);
    Memory::free_static(local_140,false);
  }
LAB_0010393f:
  lVar14 = *(long *)(this + 0xa20);
  (**(code **)(**(long **)(lVar14 + 600) + 0x1f8))((Transform2D *)local_e8);
  Transform2D::affine_inverse();
  local_130 = (EditorUndoRedoManager *)Node2D::to_local(lVar14);
  cVar9 = InputEvent::is_pressed();
  iVar12 = (int)(Transform2D *)local_e8;
  if (cVar9 != '\0') {
    if (*(int *)(this + 0xa84) == 0) {
      iVar21 = 0;
      Path2D::get_curve();
      *(undefined8 *)(this + 0xaac) = local_138;
LAB_00104df4:
      iVar11 = Curve2D::get_point_count();
      if (iVar21 < iVar11) {
        uVar25 = Curve2D::get_point_position((int)local_158);
        fVar33 = (float)((ulong)uVar25 >> 0x20);
        local_b8[0] = CONCAT44((float)uVar25 * SUB84(local_108._0_8_,4) +
                               fVar33 * SUB84(local_108._8_8_,4) + SUB84(local_108._16_8_,4),
                               (float)uVar25 * (float)local_108._0_8_ +
                               fVar33 * (float)local_108._8_8_ + (float)local_108._16_8_);
        fVar33 = (float)Vector2::distance_to((Vector2 *)&local_138);
        uVar25 = Curve2D::get_point_out((int)local_158);
        uVar27 = Curve2D::get_point_position((int)local_158);
        fVar23 = (float)uVar27 + (float)uVar25;
        fVar30 = (float)((ulong)uVar27 >> 0x20) + (float)((ulong)uVar25 >> 0x20);
        local_b8[0] = CONCAT44(fVar23 * SUB84(local_108._0_8_,4) + SUB84(local_108._8_8_,4) * fVar30
                               + SUB84(local_108._16_8_,4),
                               fVar30 * (float)local_108._8_8_ + (float)local_108._0_8_ * fVar23 +
                               (float)local_108._16_8_);
        fVar23 = (float)Vector2::distance_to((Vector2 *)&local_138);
        uVar25 = Curve2D::get_point_in((int)local_158);
        uVar27 = Curve2D::get_point_position((int)local_158);
        fVar30 = (float)uVar27 + (float)uVar25;
        fVar29 = (float)((ulong)uVar27 >> 0x20) + (float)((ulong)uVar25 >> 0x20);
        local_b8[0] = CONCAT44(SUB84(local_108._0_8_,4) * fVar30 + SUB84(local_108._8_8_,4) * fVar29
                               + SUB84(local_108._16_8_,4),
                               (float)local_108._8_8_ * fVar29 + (float)local_108._0_8_ * fVar30 +
                               (float)local_108._16_8_);
        fVar30 = (float)Vector2::distance_to((Vector2 *)&local_138);
        iVar11 = InputEventMouseButton::get_button_index();
        if (iVar11 == 1) {
          iVar11 = *(int *)(this + 0xa28);
          if (iVar11 == 1) {
            cVar9 = InputEventWithModifiers::is_shift_pressed();
            if ((cVar9 == '\0') && (fVar33 < fVar22)) {
              *(int *)(this + 0xa88) = iVar21;
              *(undefined4 *)(this + 0xa84) = 1;
              uVar10 = uVar10 & 0xff;
              uVar25 = Curve2D::get_point_position((int)local_158);
              *(undefined8 *)(this + 0xa8c) = uVar25;
              *(undefined8 *)(this + 0xa94) = local_138;
              goto LAB_00104590;
            }
            iVar11 = *(int *)(this + 0xa28);
          }
          if (iVar11 - 1U < 2) {
            if ((fVar23 < fVar22) && (iVar11 = Curve2D::get_point_count(), iVar21 < iVar11 + -1)) {
              *(int *)(this + 0xa88) = iVar21;
              *(undefined4 *)(this + 0xa84) = 5;
              uVar10 = uVar10 & 0xff;
              uVar25 = Curve2D::get_point_out((int)local_158);
              *(undefined8 *)(this + 0xa8c) = uVar25;
              *(undefined8 *)(this + 0xa94) = local_138;
              local_b8[0] = Curve2D::get_point_in((int)local_158);
              uVar24 = Vector2::length();
              *(undefined4 *)(this + 0xa9c) = uVar24;
              goto LAB_00104590;
            }
            if ((fVar30 < fVar22) && (iVar21 != 0)) {
              *(int *)(this + 0xa88) = iVar21;
              *(undefined4 *)(this + 0xa84) = 4;
              uVar10 = uVar10 & 0xff;
              uVar25 = Curve2D::get_point_in((int)local_158);
              *(undefined8 *)(this + 0xa8c) = uVar25;
              *(undefined8 *)(this + 0xa94) = local_138;
              local_b8[0] = Curve2D::get_point_out((int)local_158);
              uVar24 = Vector2::length();
              *(undefined4 *)(this + 0xaa0) = uVar24;
              goto LAB_00104590;
            }
          }
        }
        pOVar15 = (Object *)EditorUndoRedoManager::get_singleton();
        iVar11 = InputEventMouseButton::get_button_index();
        if (((iVar11 != 2) || (1 < *(uint *)(this + 0xa28))) &&
           ((iVar11 = InputEventMouseButton::get_button_index(), iVar11 != 1 ||
            (*(int *)(this + 0xa28) != 3)))) goto LAB_00104df0;
        if (fVar33 < fVar22) {
          local_148 = 0;
          String::parse_latin1((String *)&local_148,"");
          local_150 = 0;
          String::parse_latin1((String *)&local_150,"Remove Point from Curve");
          TTR((String *)&local_140,(String *)&local_150);
          EditorUndoRedoManager::create_action(pOVar15,(Ref<Curve2D> *)&local_140,0,0,0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_150);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
          StringName::StringName((StringName *)&local_140,"remove_point",false);
          pSVar7 = local_158;
          Variant::Variant((Variant *)local_b8,iVar21);
          local_a0 = 0;
          local_e8._0_8_ = (String *)local_b8;
          local_98 = (undefined1  [16])0x0;
          EditorUndoRedoManager::add_do_methodp(pOVar15,pSVar7,(Variant **)&local_140,iVar12);
          if (Variant::needs_deinit[(int)local_a0] != '\0') {
            Variant::_clear_internal();
          }
          if (Variant::needs_deinit[(int)local_b8[0]] != '\0') {
            Variant::_clear_internal();
          }
          if ((StringName::configured != '\0') && (local_140 != (long *)0x0)) {
            StringName::unref();
          }
          uVar25 = Curve2D::get_point_out((int)local_158);
          uVar27 = Curve2D::get_point_in((int)local_158);
          uVar28 = Curve2D::get_point_position((int)local_158);
          StringName::StringName((StringName *)&local_140,"add_point",false);
          local_120 = uVar28;
          local_118 = uVar27;
          local_110 = uVar25;
          Variant::Variant((Variant *)local_b8,(Vector2 *)&local_120);
          Variant::Variant((Variant *)&local_a0,(Vector2 *)&local_118);
          Variant::Variant(local_88,(Vector2 *)&local_110);
          pSVar20 = (String *)local_40;
          Variant::Variant(local_70,iVar21);
          local_50 = (undefined1  [16])0x0;
          local_58 = 0;
          local_e8._8_8_ = (Variant *)&local_a0;
          local_d8 = local_88;
          pVStack_d0 = local_70;
          EditorUndoRedoManager::add_undo_methodp(pOVar15,local_158,(Variant **)&local_140,iVar12);
          do {
            pSVar1 = pSVar20 + -0x18;
            pSVar20 = pSVar20 + -0x18;
            if (Variant::needs_deinit[*(int *)pSVar1] != '\0') {
              Variant::_clear_internal();
            }
          } while (pSVar20 != (String *)local_b8);
          if ((StringName::configured != '\0') && (local_140 != (long *)0x0)) {
            StringName::unref();
          }
        }
        else {
          if (fVar23 < fVar22) {
            local_148 = 0;
            String::parse_latin1((String *)&local_148,"");
            local_150 = 0;
            String::parse_latin1((String *)&local_150,"Remove Out-Control from Curve");
            TTR((String *)&local_140,(String *)&local_150);
            EditorUndoRedoManager::create_action(pOVar15,(Ref<Curve2D> *)&local_140,0,0,0);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
            pcVar19 = "set_point_out";
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_150);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
            StringName::StringName((StringName *)&local_140,"set_point_out",false);
            EditorUndoRedoManager::add_do_method<int,Vector2>
                      ((EditorUndoRedoManager *)0x0,pOVar15,local_158,(Ref<Curve2D> *)&local_140,
                       iVar21);
            if ((StringName::configured != '\0') && (local_140 != (long *)0x0)) {
              StringName::unref();
            }
            pEVar16 = (EditorUndoRedoManager *)Curve2D::get_point_out((int)local_158);
          }
          else {
            if (fVar22 <= fVar30) goto LAB_00104df0;
            local_148 = 0;
            String::parse_latin1((String *)&local_148,"");
            local_150 = 0;
            String::parse_latin1((String *)&local_150,"Remove In-Control from Curve");
            TTR((String *)&local_140,(String *)&local_150);
            EditorUndoRedoManager::create_action(pOVar15,(Ref<Curve2D> *)&local_140,0,0,0);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
            pcVar19 = "set_point_in";
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_150);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
            StringName::StringName((StringName *)&local_140,"set_point_in",false);
            EditorUndoRedoManager::add_do_method<int,Vector2>
                      ((EditorUndoRedoManager *)0x0,pOVar15,local_158,(Ref<Curve2D> *)&local_140,
                       iVar21);
            if ((StringName::configured != '\0') && (local_140 != (long *)0x0)) {
              StringName::unref();
            }
            pEVar16 = (EditorUndoRedoManager *)Curve2D::get_point_in((int)local_158);
          }
          StringName::StringName((StringName *)&local_140,pcVar19,false);
          EditorUndoRedoManager::add_undo_method<int,Vector2>
                    (pEVar16,pOVar15,local_158,(Ref<Curve2D> *)&local_140,iVar21);
          if ((StringName::configured != '\0') && (local_140 != (long *)0x0)) {
            StringName::unref();
          }
        }
        uVar10 = uVar10 & 0xff;
        StringName::StringName((StringName *)&local_140,"update_viewport",false);
        EditorUndoRedoManager::add_do_method<>
                  ((EditorUndoRedoManager *)pOVar15,*(Object **)(this + 0xa10),
                   (StringName *)&local_140);
        if ((StringName::configured != '\0') && (local_140 != (long *)0x0)) {
          StringName::unref();
        }
        StringName::StringName((StringName *)&local_140,"update_viewport",false);
        EditorUndoRedoManager::add_undo_method<>
                  ((EditorUndoRedoManager *)pOVar15,*(Object **)(this + 0xa10),
                   (StringName *)&local_140);
        if ((StringName::configured != '\0') && (local_140 != (long *)0x0)) {
          StringName::unref();
        }
        EditorUndoRedoManager::commit_action(SUB81(pOVar15,0));
        goto LAB_00104590;
      }
      uVar10 = uVar10 & 0xff;
      Ref<Curve2D>::unref((Ref<Curve2D> *)&local_158);
      goto LAB_00103e00;
    }
LAB_001039d2:
    cVar9 = InputEvent::is_pressed();
    if ((cVar9 == '\0') || (iVar21 = InputEventMouseButton::get_button_index(), iVar21 != 2))
    goto LAB_001039e2;
    _cancel_current_action(this);
    goto LAB_00103ab1;
  }
LAB_00103e00:
  if (*(int *)(this + 0xa84) != 0) goto LAB_001039d2;
LAB_001039e2:
  cVar9 = InputEvent::is_pressed();
  iVar21 = (int)(String *)local_b8;
  if ((cVar9 != '\0') && (iVar11 = InputEventMouseButton::get_button_index(), iVar11 == 1)) {
    cVar9 = InputEventWithModifiers::is_command_or_control_pressed();
    if (((cVar9 != '\0') && (*(int *)(this + 0xa28) == 1)) || (*(int *)(this + 0xa28) == 0)) {
      Path2D::get_curve();
      local_b8[0] = 0;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = local_e8._8_8_;
      local_e8 = auVar6 << 0x40;
      Curve2D::add_point((Vector2 *)local_140,(Vector2 *)&local_130,(Transform2D *)local_e8,iVar21);
      *(undefined4 *)(this + 0xa84) = 2;
      *(EditorUndoRedoManager **)(this + 0xa8c) = local_130;
      iVar12 = Curve2D::get_point_count();
      *(int *)(this + 0xa88) = iVar12 + -1;
      uVar25 = Curve2D::get_point_position((int)local_140);
      *(undefined8 *)(this + 0xa8c) = uVar25;
      *(undefined8 *)(this + 0xa94) = local_138;
      CanvasItemEditor::update_viewport();
      Ref<Curve2D>::unref((Ref<Curve2D> *)&local_140);
      goto LAB_00103ab1;
    }
  }
  cVar9 = InputEvent::is_pressed();
  if ((((cVar9 != '\0') && (iVar11 = InputEventMouseButton::get_button_index(), iVar11 == 1)) &&
      (*(int *)(this + 0xa28) == 1)) && (this[0xa82] != (Path2DEditor)0x0)) {
    uVar25 = InputEventMouse::get_position();
    fVar22 = (float)uVar25;
    fVar23 = (float)((ulong)uVar25 >> 0x20);
    Path2D::get_curve();
    plVar8 = local_140;
    Transform2D::affine_inverse();
    auVar6 = local_e8;
    local_e8._4_4_ =
         (float)((ulong)local_b8[0] >> 0x20) * fVar22 + (float)((ulong)local_b8[1] >> 0x20) * fVar23
         + (float)((ulong)local_b8[2] >> 0x20);
    local_e8._0_4_ = (float)local_b8[0] * fVar22 + (float)local_b8[1] * fVar23 + (float)local_b8[2];
    local_e8._8_8_ = auVar6._8_8_;
    fVar33 = (float)Curve2D::get_closest_offset((Vector2 *)plVar8);
    iVar12 = Curve2D::get_point_count();
    if (iVar12 < 2) {
LAB_00105b38:
      iVar11 = Curve2D::get_point_count();
      iVar11 = iVar11 + -2;
    }
    else {
      iVar11 = -1;
      iVar17 = 0;
      do {
        plVar8 = local_140;
        iVar18 = iVar17 + 1;
        local_b8[0] = Curve2D::get_point_position((int)local_140);
        fVar30 = (float)Curve2D::get_closest_offset((Vector2 *)plVar8);
        plVar8 = local_140;
        local_b8[0] = Curve2D::get_point_position((int)local_140);
        fVar29 = (float)Curve2D::get_closest_offset((Vector2 *)plVar8);
        if ((fVar29 <= fVar33) && (fVar33 <= fVar30)) {
          iVar11 = iVar17;
        }
        iVar17 = iVar18;
      } while (iVar18 != iVar12 + -1);
      uVar10 = uVar10 & 0xff;
      if (iVar11 == -1) goto LAB_00105b38;
    }
    Transform2D::affine_inverse();
    uVar27 = local_b8[0];
    auVar5._8_8_ = 0;
    auVar5._0_8_ = local_e8._8_8_;
    local_e8 = auVar5 << 0x40;
    local_b8[0] = 0;
    local_110 = CONCAT44(fVar23 * (float)((ulong)local_b8[1] >> 0x20) +
                         fVar22 * (float)((ulong)uVar27 >> 0x20) +
                         (float)((ulong)local_b8[2] >> 0x20),
                         fVar23 * (float)local_b8[1] + fVar22 * (float)uVar27 + (float)local_b8[2]);
    Curve2D::add_point((Vector2 *)local_140,(Vector2 *)&local_110,(Transform2D *)local_e8,iVar21);
    *(int *)(this + 0xa88) = iVar11 + 1;
    *(undefined4 *)(this + 0xa84) = 3;
    uVar27 = Curve2D::get_point_position((int)local_140);
    *(undefined8 *)(this + 0xa8c) = uVar27;
    *(undefined8 *)(this + 0xa94) = uVar25;
    CanvasItemEditor::update_viewport();
    this[0xa82] = (Path2DEditor)0x0;
    Ref<Curve2D>::unref((Ref<Curve2D> *)&local_140);
    goto LAB_00103ab1;
  }
  cVar9 = InputEvent::is_pressed();
  if (((cVar9 != '\0') || (iVar21 = InputEventMouseButton::get_button_index(), iVar21 != 1)) ||
     (*(int *)(this + 0xa84) == 0)) {
    lVar14 = *(long *)param_1;
    if (lVar14 != 0) goto LAB_00103a7a;
    uVar10 = 0;
    goto LAB_00103ab1;
  }
  Path2D::get_curve();
  pEVar16 = (EditorUndoRedoManager *)EditorUndoRedoManager::get_singleton();
  Transform2D::affine_inverse();
  local_128 = (EditorUndoRedoManager *)
              CONCAT44(((float)local_138 - *(float *)(this + 0xa94)) *
                       (float)((ulong)local_b8[0] >> 0x20) +
                       (local_138._4_4_ - *(float *)(this + 0xa98)) *
                       (float)((ulong)local_b8[1] >> 0x20) +
                       (float)((ulong)*(undefined8 *)(this + 0xa8c) >> 0x20),
                       ((float)local_138 - *(float *)(this + 0xa94)) * (float)local_b8[0] +
                       (local_138._4_4_ - *(float *)(this + 0xa98)) * (float)local_b8[1] +
                       (float)*(undefined8 *)(this + 0xa8c));
  switch(*(undefined4 *)(this + 0xa84)) {
  case 1:
    if (((float)local_138 != *(float *)(this + 0xaac)) ||
       (local_138._4_4_ != *(float *)(this + 0xab0))) {
      local_148 = 0;
      String::parse_latin1((String *)&local_148,"");
      local_150 = 0;
      String::parse_latin1((String *)&local_150,"Move Point in Curve");
      TTR((String *)&local_140,(String *)&local_150);
      EditorUndoRedoManager::create_action(pEVar16,(Ref<Curve2D> *)&local_140,0,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_150);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
      uVar24 = *(undefined4 *)(this + 0xa88);
      StringName::StringName((StringName *)&local_140,"set_point_position",false);
      EditorUndoRedoManager::add_undo_method<int,Vector2>
                (*(EditorUndoRedoManager **)(this + 0xa8c),pEVar16,local_158,
                 (Ref<Curve2D> *)&local_140,uVar24);
      if ((StringName::configured != '\0') && (local_140 != (long *)0x0)) {
        StringName::unref();
      }
      uVar24 = *(undefined4 *)(this + 0xa88);
      StringName::StringName((StringName *)&local_140,"set_point_position",false);
      EditorUndoRedoManager::add_do_method<int,Vector2>
                (local_130,pEVar16,local_158,(Ref<Curve2D> *)&local_140,uVar24);
      if ((StringName::configured != '\0') && (local_140 != (long *)0x0)) {
        StringName::unref();
      }
      goto LAB_00104b48;
    }
    break;
  case 2:
    local_148 = 0;
    String::parse_latin1((String *)&local_148,"");
    local_150 = 0;
    String::parse_latin1((String *)&local_150,"Add Point to Curve");
    TTR((String *)&local_140,(String *)&local_150);
    EditorUndoRedoManager::create_action(pEVar16,(Ref<Curve2D> *)&local_140,0,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_150);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
    StringName::StringName((StringName *)&local_140,"add_point",false);
    EditorUndoRedoManager::add_do_method<Vector2>
              (local_130,pEVar16,local_158,(Ref<Curve2D> *)&local_140);
    if ((StringName::configured != '\0') && (local_140 != (long *)0x0)) {
      StringName::unref();
    }
    uVar24 = *(undefined4 *)(this + 0xa88);
    StringName::StringName((StringName *)&local_140,"set_point_position",false);
    EditorUndoRedoManager::add_do_method<int,Vector2>
              (local_130,pEVar16,local_158,(Ref<Curve2D> *)&local_140,uVar24);
    if ((StringName::configured != '\0') && (local_140 != (long *)0x0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_140,"update_viewport",false);
    EditorUndoRedoManager::add_do_method<>
              (pEVar16,*(Object **)(this + 0xa10),(StringName *)&local_140);
    if ((StringName::configured != '\0') && (local_140 != (long *)0x0)) {
      StringName::unref();
    }
    iVar12 = Curve2D::get_point_count();
    StringName::StringName((StringName *)&local_140,"remove_point",false);
    EditorUndoRedoManager::add_undo_method<int>
              (pEVar16,(Object *)local_158,(StringName *)&local_140,iVar12 + -1);
    goto joined_r0x00104d6a;
  case 3:
    local_148 = 0;
    String::parse_latin1((String *)&local_148,"");
    local_150 = 0;
    String::parse_latin1((String *)&local_150,"Split Curve");
    TTR((String *)&local_140,(String *)&local_150);
    EditorUndoRedoManager::create_action(pEVar16,(Ref<Curve2D> *)&local_140,0,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_150);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
    iVar21 = *(int *)(this + 0xa88);
    StringName::StringName((StringName *)&local_140,"add_point",false);
    pSVar7 = local_158;
    local_120 = 0;
    local_118 = 0;
    local_110 = 0;
    Variant::Variant((Variant *)local_b8,(Vector2 *)&local_120);
    Variant::Variant((Variant *)&local_a0,(Vector2 *)&local_118);
    Variant::Variant(local_88,(Vector2 *)&local_110);
    Variant::Variant(local_70,iVar21);
    local_50 = (undefined1  [16])0x0;
    local_58 = 0;
    pSVar20 = (String *)local_40;
    local_e8._8_8_ = (Variant *)&local_a0;
    local_e8._0_8_ = (String *)local_b8;
    local_d8 = local_88;
    pVStack_d0 = local_70;
    EditorUndoRedoManager::add_do_methodp((Object *)pEVar16,pSVar7,(Variant **)&local_140,iVar12);
    do {
      pSVar1 = pSVar20 + -0x18;
      pSVar20 = pSVar20 + -0x18;
      if (Variant::needs_deinit[*(int *)pSVar1] != '\0') {
        Variant::_clear_internal();
      }
    } while (pSVar20 != (String *)local_b8);
    if ((StringName::configured != '\0') && (local_140 != (long *)0x0)) {
      StringName::unref();
    }
    uVar24 = *(undefined4 *)(this + 0xa88);
    StringName::StringName((StringName *)&local_140,"set_point_position",false);
    EditorUndoRedoManager::add_do_method<int,Vector2>
              (local_130,pEVar16,local_158,(Ref<Curve2D> *)&local_140,uVar24);
    if ((StringName::configured != '\0') && (local_140 != (long *)0x0)) {
      StringName::unref();
    }
    iVar12 = *(int *)(this + 0xa88);
    StringName::StringName((StringName *)&local_140,"remove_point",false);
    EditorUndoRedoManager::add_undo_method<int>
              (pEVar16,(Object *)local_158,(StringName *)&local_140,iVar12);
    if ((StringName::configured != '\0') && (local_140 != (long *)0x0)) {
      StringName::unref();
    }
LAB_00104b48:
    StringName::StringName((StringName *)&local_140,"update_viewport",false);
    EditorUndoRedoManager::add_do_method<>
              (pEVar16,*(Object **)(this + 0xa10),(StringName *)&local_140);
joined_r0x00104d6a:
    if ((StringName::configured != '\0') && (local_140 != (long *)0x0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_140,"update_viewport",false);
    EditorUndoRedoManager::add_undo_method<>
              (pEVar16,*(Object **)(this + 0xa10),(StringName *)&local_140);
    if ((StringName::configured != '\0') && (local_140 != (long *)0x0)) {
      StringName::unref();
    }
    EditorUndoRedoManager::commit_action(SUB81(pEVar16,0));
    break;
  case 4:
    if (((float)local_138 != *(float *)(this + 0xaac)) ||
       (local_138._4_4_ != *(float *)(this + 0xab0))) {
      local_148 = 0;
      String::parse_latin1((String *)&local_148,"");
      local_150 = 0;
      String::parse_latin1((String *)&local_150,"Move In-Control in Curve");
      TTR((String *)&local_140,(String *)&local_150);
      EditorUndoRedoManager::create_action(pEVar16,(Ref<Curve2D> *)&local_140,0,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_150);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
      uVar24 = *(undefined4 *)(this + 0xa88);
      StringName::StringName((StringName *)&local_140,"set_point_in",false);
      EditorUndoRedoManager::add_do_method<int,Vector2>
                (local_128,pEVar16,local_158,(Ref<Curve2D> *)&local_140,uVar24);
      if ((StringName::configured != '\0') && (local_140 != (long *)0x0)) {
        StringName::unref();
      }
      uVar24 = *(undefined4 *)(this + 0xa88);
      StringName::StringName((StringName *)&local_140,"set_point_in",false);
      EditorUndoRedoManager::add_undo_method<int,Vector2>
                (*(EditorUndoRedoManager **)(this + 0xa8c),pEVar16,local_158,
                 (Ref<Curve2D> *)&local_140,uVar24);
      if ((StringName::configured != '\0') && (local_140 != (long *)0x0)) {
        StringName::unref();
      }
      if (this[0xa80] != (Path2DEditor)0x0) {
        if (this[0xa81] == (Path2DEditor)0x0) {
          fVar22 = *(float *)(this + 0xaa0);
          uVar25 = Vector2::normalized();
          pEVar26 = (EditorUndoRedoManager *)
                    CONCAT44((float)((uint)((ulong)uVar25 >> 0x20) ^ _LC95._4_4_) * fVar22,
                             (float)((uint)uVar25 ^ (uint)_LC95) * fVar22);
        }
        else {
          pEVar26 = (EditorUndoRedoManager *)
                    CONCAT44((uint)((ulong)local_128 >> 0x20) ^ _LC95._4_4_,
                             (uint)local_128 ^ (uint)_LC95);
        }
        uVar32 = _LC95._4_4_;
        uVar31 = (uint)_LC95;
        uVar24 = *(undefined4 *)(this + 0xa88);
        pcVar19 = "set_point_out";
        local_1a0 = (uint)_LC95;
        uStack_19c = _LC95._4_4_;
        StringName::StringName((StringName *)&local_140,"set_point_out",false);
        EditorUndoRedoManager::add_do_method<int,Vector2>
                  (pEVar26,pEVar16,local_158,(Ref<Curve2D> *)&local_140,uVar24);
        if ((StringName::configured != '\0') && (local_140 != (long *)0x0)) {
          StringName::unref();
        }
        if (this[0xa81] != (Path2DEditor)0x0) goto LAB_0010449b;
        fVar22 = *(float *)(this + 0xaa0);
LAB_00104792:
        uVar25 = Vector2::normalized();
        pEVar26 = (EditorUndoRedoManager *)
                  CONCAT44((float)((uint)((ulong)uVar25 >> 0x20) ^ uStack_19c) * fVar22,
                           (float)((uint)uVar25 ^ local_1a0) * fVar22);
LAB_001044a6:
        uVar24 = *(undefined4 *)(this + 0xa88);
        StringName::StringName((StringName *)&local_140,pcVar19,false);
        EditorUndoRedoManager::add_undo_method<int,Vector2>
                  (pEVar26,pEVar16,local_158,(Ref<Curve2D> *)&local_140,uVar24);
        if ((StringName::configured != '\0') && (local_140 != (long *)0x0)) {
          StringName::unref();
        }
      }
LAB_001044f7:
      StringName::StringName((StringName *)&local_140,"update_viewport",false);
      EditorUndoRedoManager::add_do_method<>
                (pEVar16,*(Object **)(this + 0xa10),(StringName *)&local_140);
      if ((StringName::configured != '\0') && (local_140 != (long *)0x0)) {
        StringName::unref();
      }
      StringName::StringName((StringName *)&local_140,"update_viewport",false);
      EditorUndoRedoManager::add_undo_method<>
                (pEVar16,*(Object **)(this + 0xa10),(StringName *)&local_140);
      if ((StringName::configured != '\0') && (local_140 != (long *)0x0)) {
        StringName::unref();
      }
      EditorUndoRedoManager::commit_action(SUB81(pEVar16,0));
    }
    break;
  case 5:
    if (((float)local_138 != *(float *)(this + 0xaac)) ||
       (local_138._4_4_ != *(float *)(this + 0xab0))) {
      local_148 = 0;
      String::parse_latin1((String *)&local_148,"");
      local_150 = 0;
      String::parse_latin1((String *)&local_150,"Move Out-Control in Curve");
      TTR((String *)&local_140,(String *)&local_150);
      EditorUndoRedoManager::create_action(pEVar16,(Ref<Curve2D> *)&local_140,0,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_150);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
      uVar24 = *(undefined4 *)(this + 0xa88);
      StringName::StringName((StringName *)&local_140,"set_point_out",false);
      EditorUndoRedoManager::add_do_method<int,Vector2>
                (local_128,pEVar16,local_158,(Ref<Curve2D> *)&local_140,uVar24);
      if ((StringName::configured != '\0') && (local_140 != (long *)0x0)) {
        StringName::unref();
      }
      uVar24 = *(undefined4 *)(this + 0xa88);
      StringName::StringName((StringName *)&local_140,"set_point_out",false);
      EditorUndoRedoManager::add_undo_method<int,Vector2>
                (*(EditorUndoRedoManager **)(this + 0xa8c),pEVar16,local_158,
                 (Ref<Curve2D> *)&local_140,uVar24);
      if ((StringName::configured != '\0') && (local_140 != (long *)0x0)) {
        StringName::unref();
      }
      if (this[0xa80] != (Path2DEditor)0x0) {
        if (this[0xa81] == (Path2DEditor)0x0) {
          fVar22 = *(float *)(this + 0xa9c);
          uVar25 = Vector2::normalized();
          pEVar26 = (EditorUndoRedoManager *)
                    CONCAT44((float)((uint)((ulong)uVar25 >> 0x20) ^ _LC95._4_4_) * fVar22,
                             (float)((uint)uVar25 ^ (uint)_LC95) * fVar22);
        }
        else {
          pEVar26 = (EditorUndoRedoManager *)
                    CONCAT44((uint)((ulong)local_128 >> 0x20) ^ _LC95._4_4_,
                             (uint)local_128 ^ (uint)_LC95);
        }
        uVar32 = _LC95._4_4_;
        uVar31 = (uint)_LC95;
        uVar24 = *(undefined4 *)(this + 0xa88);
        pcVar19 = "set_point_in";
        local_1a0 = (uint)_LC95;
        uStack_19c = _LC95._4_4_;
        StringName::StringName((StringName *)&local_140,"set_point_in",false);
        EditorUndoRedoManager::add_do_method<int,Vector2>
                  (pEVar26,pEVar16,local_158,(Ref<Curve2D> *)&local_140,uVar24);
        if ((StringName::configured != '\0') && (local_140 != (long *)0x0)) {
          StringName::unref();
        }
        if (this[0xa81] == (Path2DEditor)0x0) {
          fVar22 = *(float *)(this + 0xa9c);
          goto LAB_00104792;
        }
LAB_0010449b:
        pEVar26 = (EditorUndoRedoManager *)
                  CONCAT44((uint)((ulong)*(undefined8 *)(this + 0xa8c) >> 0x20) ^ uVar32,
                           (uint)*(undefined8 *)(this + 0xa8c) ^ uVar31);
        goto LAB_001044a6;
      }
      goto LAB_001044f7;
    }
  }
  *(undefined4 *)(this + 0xa84) = 0;
LAB_00104590:
  local_178 = (Ref<Curve2D> *)&local_158;
  Ref<Curve2D>::unref(local_178);
LAB_00103ab1:
  cVar9 = RefCounted::unreference();
  if ((cVar9 != '\0') && (cVar9 = predelete_handler(pOVar13), cVar9 != '\0')) {
    (**(code **)(*(long *)pOVar13 + 0x140))(pOVar13);
    Memory::free_static(pOVar13,false);
  }
LAB_00103a43:
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar10;
LAB_00104df0:
  iVar21 = iVar21 + 1;
  goto LAB_00104df4;
}



/* Path2DEditor::_bind_methods() */

void Path2DEditor::_bind_methods(void)

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
  D_METHODP((char *)local_78,(char ***)"_update_toolbar",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  pMVar4 = create_method_bind<Path2DEditor>(_update_toolbar);
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
  D_METHODP((char *)local_78,(char ***)"_clear_curve_points",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  pMVar4 = create_method_bind<Path2DEditor,Path2D*>(_clear_curve_points);
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
  D_METHODP((char *)local_78,(char ***)"_restore_curve_points",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  pMVar4 = create_method_bind<Path2DEditor,Path2D*,Vector<Vector2>const&>(_restore_curve_points);
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



/* Path2DEditor::_mode_selected(int) */

void __thiscall Path2DEditor::_mode_selected(Path2DEditor *this,int param_1)

{
  long *plVar1;
  Variant *pVVar2;
  undefined8 uVar3;
  Object *pOVar4;
  char cVar5;
  int iVar6;
  EditorUndoRedoManager *this_00;
  Object *this_01;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 uVar10;
  Variant *pVVar11;
  long in_FS_OFFSET;
  bool bVar12;
  undefined8 local_d8;
  Object *local_d0;
  undefined8 local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  Variant *local_a8;
  Variant *pVStack_a0;
  undefined8 local_88 [3];
  int local_70 [2];
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  switch(param_1) {
  case 0:
    BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xa48),0));
    uVar10 = (undefined1)*(undefined8 *)(this + 0xa58);
    goto LAB_00105fa2;
  case 1:
    BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xa48),0));
    uVar10 = (undefined1)*(undefined8 *)(this + 0xa58);
LAB_00105fa2:
    BaseButton::set_pressed((bool)uVar10);
    BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xa60),0));
    BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xa50),0));
    break;
  case 2:
    BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xa48),0));
    BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xa58),0));
    BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xa60),0));
    BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xa50),0));
    break;
  case 3:
    BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xa48),0));
    BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xa58),0));
    BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xa60),0));
    BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xa50),0));
    break;
  case 4:
    Path2D::get_curve();
    lVar8 = local_b8;
    Ref<Curve2D>::unref((Ref<Curve2D> *)&local_b8);
    if (lVar8 != 0) {
      Path2D::get_curve();
      iVar6 = Curve2D::get_point_count();
      Ref<Curve2D>::unref((Ref<Curve2D> *)&local_b8);
      if (2 < iVar6) {
        Path2D::get_curve();
        local_a8 = (Variant *)Curve2D::get_point_position((int)local_b8);
        Ref<Curve2D>::unref((Ref<Curve2D> *)&local_b8);
        Path2D::get_curve();
        uVar3 = local_c8;
        Path2D::get_curve();
        Curve2D::get_point_count();
        local_88[0] = Curve2D::get_point_position((int)uVar3);
        Ref<Curve2D>::unref((Ref<Curve2D> *)&local_b8);
        Ref<Curve2D>::unref((Ref<Curve2D> *)&local_c8);
        cVar5 = Vector2::is_equal_approx((Vector2 *)&local_a8);
        if (cVar5 == '\0') {
          this_00 = (EditorUndoRedoManager *)EditorUndoRedoManager::get_singleton();
          local_c8 = 0;
          String::parse_latin1((String *)&local_c8,"");
          local_d0 = (Object *)0x0;
          String::parse_latin1((String *)&local_d0,"Close the Curve");
          TTR((String *)&local_b8,(String *)&local_d0);
          EditorUndoRedoManager::create_action(this_00,(Ref<Curve2D> *)&local_b8,0,0,0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
          StringName::StringName((StringName *)&local_b8,"add_point",false);
          Path2D::get_curve();
          EditorUndoRedoManager::add_do_method<Vector2>
                    (local_a8,this_00,local_c8,(Ref<Curve2D> *)&local_b8);
          Ref<Curve2D>::unref((Ref<Curve2D> *)&local_c8);
          if ((StringName::configured != '\0') && (local_b8 != 0)) {
            StringName::unref();
          }
          Path2D::get_curve();
          iVar6 = Curve2D::get_point_count();
          StringName::StringName((StringName *)&local_b8,"remove_point",false);
          Path2D::get_curve();
          EditorUndoRedoManager::add_undo_method<int>
                    (this_00,local_d0,(StringName *)&local_b8,iVar6);
          Ref<Curve2D>::unref((Ref<Curve2D> *)&local_d0);
          if ((StringName::configured != '\0') && (local_b8 != 0)) {
            StringName::unref();
          }
          Ref<Curve2D>::unref((Ref<Curve2D> *)&local_c8);
          StringName::StringName((StringName *)&local_b8,"update_viewport",false);
          EditorUndoRedoManager::add_do_method<>
                    (this_00,*(Object **)(this + 0xa10),(StringName *)&local_b8);
          if ((StringName::configured != '\0') && (local_b8 != 0)) {
            StringName::unref();
          }
          StringName::StringName((StringName *)&local_b8,"update_viewport",false);
          EditorUndoRedoManager::add_undo_method<>
                    (this_00,*(Object **)(this + 0xa10),(StringName *)&local_b8);
          if ((StringName::configured != '\0') && (local_b8 != 0)) {
            StringName::unref();
          }
          EditorUndoRedoManager::commit_action(SUB81(this_00,0));
        }
      }
    }
    goto LAB_00105fca;
  case 5:
    Path2D::get_curve();
    lVar8 = local_b8;
    Ref<Curve2D>::unref((Ref<Curve2D> *)&local_b8);
    if (lVar8 != 0) {
      Path2D::get_curve();
      iVar6 = Curve2D::get_point_count();
      Ref<Curve2D>::unref((Ref<Curve2D> *)&local_b8);
      if (iVar6 != 0) {
        this_01 = (Object *)EditorUndoRedoManager::get_singleton();
        Path2D::get_curve();
        Curve2D::get_points();
        local_c0 = 0;
        lVar8 = local_b0;
        if (local_b0 != 0) {
          plVar1 = (long *)(local_b0 + -0x10);
          do {
            lVar9 = *plVar1;
            if (lVar9 == 0) goto LAB_00106704;
            LOCK();
            lVar7 = *plVar1;
            bVar12 = lVar9 == lVar7;
            if (bVar12) {
              *plVar1 = lVar9 + 1;
              lVar7 = lVar9;
            }
            UNLOCK();
          } while (!bVar12);
          if (lVar7 == -1) {
LAB_00106704:
            lVar8 = 0;
          }
          else {
            local_c0 = local_b0;
          }
        }
        CowData<Vector2>::_unref((CowData<Vector2> *)&local_b0);
        Ref<Curve2D>::unref((Ref<Curve2D> *)&local_d0);
        uVar3 = *(undefined8 *)(this + 0xa20);
        local_d0 = (Object *)0x0;
        String::parse_latin1((String *)&local_d0,"");
        local_d8 = 0;
        String::parse_latin1((String *)&local_d8,"Clear Curve Points");
        TTR((String *)&local_b8,(String *)&local_d8);
        EditorUndoRedoManager::create_action(this_01,(Ref<Curve2D> *)&local_b8,0,uVar3,0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
        pOVar4 = *(Object **)(this + 0xa20);
        StringName::StringName((StringName *)&local_b8,"_clear_curve_points",false);
        Variant::Variant((Variant *)local_88,pOVar4);
        local_70[0] = 0;
        local_70[1] = 0;
        local_68 = (undefined1  [16])0x0;
        local_a8 = (Variant *)local_88;
        EditorUndoRedoManager::add_do_methodp
                  (this_01,(StringName *)this,(Variant **)&local_b8,(int)&local_a8);
        if (Variant::needs_deinit[local_70[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[(int)local_88[0]] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_b8 != 0)) {
          StringName::unref();
        }
        local_b0 = 0;
        plVar1 = (long *)(lVar8 + -0x10);
        if (lVar8 != 0) {
          do {
            lVar8 = *plVar1;
            if (lVar8 == 0) goto LAB_001064f9;
            LOCK();
            lVar9 = *plVar1;
            bVar12 = lVar8 == lVar9;
            if (bVar12) {
              *plVar1 = lVar8 + 1;
              lVar9 = lVar8;
            }
            UNLOCK();
          } while (!bVar12);
          if (lVar9 != -1) {
            local_b0 = local_c0;
          }
        }
LAB_001064f9:
        pOVar4 = *(Object **)(this + 0xa20);
        StringName::StringName((StringName *)&local_d0,"_restore_curve_points",false);
        Variant::Variant((Variant *)local_88,pOVar4);
        Variant::Variant((Variant *)local_70,(Vector *)&local_b8);
        local_50 = (undefined1  [16])0x0;
        local_58 = 0;
        pVVar11 = (Variant *)local_40;
        local_a8 = (Variant *)local_88;
        pVStack_a0 = (Variant *)local_70;
        EditorUndoRedoManager::add_undo_methodp
                  (this_01,(StringName *)this,(Variant **)&local_d0,(int)&local_a8);
        do {
          pVVar2 = pVVar11 + -0x18;
          pVVar11 = pVVar11 + -0x18;
          if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
            Variant::_clear_internal();
          }
        } while (pVVar11 != (Variant *)local_88);
        if ((StringName::configured != '\0') && (local_d0 != (Object *)0x0)) {
          StringName::unref();
        }
        CowData<Vector2>::_unref((CowData<Vector2> *)&local_b0);
        StringName::StringName((StringName *)&local_b8,"update_viewport",false);
        EditorUndoRedoManager::add_do_method<>
                  ((EditorUndoRedoManager *)this_01,*(Object **)(this + 0xa10),
                   (StringName *)&local_b8);
        if ((StringName::configured != '\0') && (local_b8 != 0)) {
          StringName::unref();
        }
        StringName::StringName((StringName *)&local_b8,"update_viewport",false);
        EditorUndoRedoManager::add_undo_method<>
                  ((EditorUndoRedoManager *)this_01,*(Object **)(this + 0xa10),
                   (StringName *)&local_b8);
        if ((StringName::configured != '\0') && (local_b8 != 0)) {
          StringName::unref();
        }
        EditorUndoRedoManager::commit_action(SUB81(this_01,0));
        CowData<Vector2>::_unref((CowData<Vector2> *)&local_c0);
      }
    }
    goto LAB_00105fca;
  }
  *(int *)(this + 0xa28) = param_1;
LAB_00105fca:
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Path2DEditor::_clear_curve_points(Path2D*) */

void __thiscall Path2DEditor::_clear_curve_points(Path2DEditor *this,Path2D *param_1)

{
  char cVar1;
  int iVar2;
  long in_FS_OFFSET;
  Object *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != (Path2D *)0x0) {
    Path2D::get_curve();
    if (local_38 != (Object *)0x0) {
      cVar1 = RefCounted::unreference();
      if (cVar1 != '\0') {
        cVar1 = predelete_handler(local_38);
        if (cVar1 != '\0') {
          (**(code **)(*(long *)local_38 + 0x140))(local_38);
          Memory::free_static(local_38,false);
        }
      }
      Path2D::get_curve();
      iVar2 = Curve2D::get_point_count();
      if (iVar2 != 0) {
        Curve2D::clear_points();
        if (*(Path2D **)(this + 0xa20) == param_1) {
          _mode_selected(this,0);
        }
      }
      Ref<Curve2D>::unref((Ref<Curve2D> *)&local_38);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Path2DEditor::_restore_curve_points(Path2D*, Vector<Vector2> const&) */

void __thiscall
Path2DEditor::_restore_curve_points(Path2DEditor *this,Path2D *param_1,Vector *param_2)

{
  Vector2 *pVVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  Object *pOVar5;
  char cVar6;
  int iVar7;
  long lVar8;
  Vector2 *pVVar9;
  long lVar10;
  long lVar11;
  long in_FS_OFFSET;
  Object *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 != (Path2D *)0x0) && (Path2D::get_curve(), local_48 != (Object *)0x0)) {
    cVar6 = RefCounted::unreference();
    pOVar5 = local_48;
    if ((cVar6 != '\0') && (cVar6 = predelete_handler(local_48), cVar6 != '\0')) {
      (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
      Memory::free_static(pOVar5,false);
    }
    Path2D::get_curve();
    iVar7 = Curve2D::get_point_count();
    if (0 < iVar7) {
      Curve2D::clear_points();
    }
    lVar2 = *(long *)(param_2 + 8);
    lVar11 = 0x10;
    for (lVar10 = 2; (lVar2 != 0 && (lVar3 = *(long *)(lVar2 + -8), lVar10 + -2 < lVar3));
        lVar10 = lVar10 + 3) {
      lVar8 = lVar10 + -1;
      if (lVar3 <= lVar10 + -1) {
LAB_0010696b:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar8,lVar3,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      iVar7 = (int)lVar11;
      pVVar1 = (Vector2 *)(lVar2 + -0x10 + lVar11);
      lVar8 = lVar10;
      if (lVar3 <= lVar10) goto LAB_0010696b;
      pVVar9 = (Vector2 *)(lVar2 + lVar11);
      lVar11 = lVar11 + 0x18;
      Curve2D::add_point(local_48,pVVar9,pVVar1,(int)lVar2 + -8 + iVar7);
      lVar2 = *(long *)(param_2 + 8);
    }
    if (param_1 == *(Path2D **)(this + 0xa20)) {
      _mode_selected(this,1);
    }
    Ref<Curve2D>::unref((Ref<Curve2D> *)&local_48);
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



/* Path2DEditorPlugin::is_class_ptr(void*) const */

uint __thiscall Path2DEditorPlugin::is_class_ptr(Path2DEditorPlugin *this,void *param_1)

{
  return (uint)CONCAT71(0x10ff,(undefined4 *)param_1 == &EditorPlugin::get_class_ptr_static()::ptr)
         | (uint)CONCAT71(0x10fe,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10ff,(undefined4 *)param_1 == &Node::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10ff,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* Path2DEditorPlugin::_getv(StringName const&, Variant&) const */

undefined8 Path2DEditorPlugin::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Path2DEditorPlugin::_setv(StringName const&, Variant const&) */

undefined8 Path2DEditorPlugin::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Path2DEditorPlugin::_property_can_revertv(StringName const&) const */

undefined8 Path2DEditorPlugin::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* Path2DEditorPlugin::_property_get_revertv(StringName const&, Variant&) const */

undefined8 Path2DEditorPlugin::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Path2DEditorPlugin::has_main_screen() const */

undefined8 Path2DEditorPlugin::has_main_screen(void)

{
  return 0;
}



/* CallableCustomMethodPointer<Path2DEditor, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Path2DEditor,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Path2DEditor,void,int> *this)

{
  return;
}



/* CallableCustomMethodPointer<Path2DEditor, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Path2DEditor,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Path2DEditor,void> *this)

{
  return;
}



/* MethodBindT<Path2D*, Vector<Vector2> const&>::_gen_argument_type(int) const */

int __thiscall
MethodBindT<Path2D*,Vector<Vector2>const&>::_gen_argument_type
          (MethodBindT<Path2D*,Vector<Vector2>const&> *this,int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if ((uint)param_1 < 2) {
    iVar1 = (-(uint)(param_1 == 0) & 0xfffffff5) + 0x23;
  }
  return iVar1;
}



/* MethodBindT<Path2D*, Vector<Vector2> const&>::get_argument_meta(int) const */

undefined8 MethodBindT<Path2D*,Vector<Vector2>const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Path2D*>::_gen_argument_type(int) const */

byte __thiscall MethodBindT<Path2D*>::_gen_argument_type(MethodBindT<Path2D*> *this,int param_1)

{
  return -(param_1 == 0) & 0x18;
}



/* MethodBindT<Path2D*>::get_argument_meta(int) const */

undefined8 MethodBindT<Path2D*>::get_argument_meta(int param_1)

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



/* CallableCustomMethodPointer<Path2DEditor, void, int>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<Path2DEditor,void,int>::get_argument_count
          (CallableCustomMethodPointer<Path2DEditor,void,int> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<Path2DEditor, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<Path2DEditor,void>::get_argument_count
          (CallableCustomMethodPointer<Path2DEditor,void> *this,bool *param_1)

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



/* CallableCustomMethodPointer<Path2DEditor, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Path2DEditor,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Path2DEditor,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<Path2DEditor, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Path2DEditor,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Path2DEditor,void,int> *this)

{
  operator_delete(this,0x48);
  return;
}



/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010fd10;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010fd10;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Path2D*>::~MethodBindT() */

void __thiscall MethodBindT<Path2D*>::~MethodBindT(MethodBindT<Path2D*> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010fd70;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Path2D*>::~MethodBindT() */

void __thiscall MethodBindT<Path2D*>::~MethodBindT(MethodBindT<Path2D*> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010fd70;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Path2D*, Vector<Vector2> const&>::~MethodBindT() */

void __thiscall
MethodBindT<Path2D*,Vector<Vector2>const&>::~MethodBindT
          (MethodBindT<Path2D*,Vector<Vector2>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010fdd0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Path2D*, Vector<Vector2> const&>::~MethodBindT() */

void __thiscall
MethodBindT<Path2D*,Vector<Vector2>const&>::~MethodBindT
          (MethodBindT<Path2D*,Vector<Vector2>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010fdd0;
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



/* Path2DEditor::_property_get_revertv(StringName const&, Variant&) const */

undefined8 Path2DEditor::_property_get_revertv(StringName *param_1,Variant *param_2)

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
  
  if ((code *)PTR__property_can_revert_00113008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* Path2DEditor::_property_can_revertv(StringName const&) const */

undefined8 Path2DEditor::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00113008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* Path2DEditorPlugin::_validate_propertyv(PropertyInfo&) const */

void Path2DEditorPlugin::_validate_propertyv(PropertyInfo *param_1)

{
  if ((code *)PTR__validate_property_00113010 != Object::_validate_property) {
    Node::_validate_property(param_1);
    return;
  }
  return;
}



/* CallableCustomMethodPointer<Path2DEditor, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<Path2DEditor,void>::get_object
          (CallableCustomMethodPointer<Path2DEditor,void> *this)

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
      goto LAB_0010707d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010707d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010707d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<Path2DEditor, void, int>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<Path2DEditor,void,int>::get_object
          (CallableCustomMethodPointer<Path2DEditor,void,int> *this)

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
      goto LAB_0010717d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010717d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010717d:
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
  if ((code *)PTR__validate_property_00113018 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* Path2DEditor::_validate_propertyv(PropertyInfo&) const */

void Path2DEditor::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_00113018 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* Path2DEditorPlugin::_notificationv(int, bool) */

void __thiscall
Path2DEditorPlugin::_notificationv(Path2DEditorPlugin *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_00113020 != Node::_notification) {
      EditorPlugin::_notification(iVar1);
    }
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  if ((code *)PTR__notification_00113020 == Node::_notification) {
    return;
  }
  EditorPlugin::_notification(iVar1);
  return;
}



/* Path2DEditor::_setv(StringName const&, Variant const&) */

undefined8 Path2DEditor::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_00113028 != CanvasItem::_set) {
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
    if ((code *)PTR__set_00113028 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x001074b8) */
/* HBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 HBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00113030 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00107528) */
/* Path2DEditor::_getv(StringName const&, Variant&) const */

undefined8 Path2DEditor::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00113030 != CanvasItem::_get) &&
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
    uVar1 = (uint)CONCAT71(0x10ff,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10ff,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10ff,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10ff,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10ff,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* Path2DEditor::is_class_ptr(void*) const */

ulong Path2DEditor::is_class_ptr(void *param_1)

{
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  if (in_RSI == &HBoxContainer::get_class_ptr_static()::ptr ||
      in_RSI == &get_class_ptr_static()::ptr) {
    return CONCAT71(0x10fe,in_RSI == &HBoxContainer::get_class_ptr_static()::ptr ||
                           in_RSI == &get_class_ptr_static()::ptr);
  }
  return (ulong)((uint)CONCAT71(0x10ff,in_RSI == &Container::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x10ff,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x10ff,in_RSI == &Control::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x10ff,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x10ff,in_RSI == &Node::get_class_ptr_static()::ptr) |
                CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr));
}



/* HBoxContainer::_notificationv(int, bool) */

void __thiscall HBoxContainer::_notificationv(HBoxContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_00113038 != Container::_notification) {
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
  if ((code *)PTR__notification_00113038 == Container::_notification) {
    return;
  }
  BoxContainer::_notification(iVar1);
  return;
}



/* Path2DEditor::~Path2DEditor() */

void __thiscall Path2DEditor::~Path2DEditor(Path2DEditor *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = String::parse_latin1;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001077b0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_001077b0:
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
      if (StringName::configured == '\0') goto LAB_00107810;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00107810:
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
      if (StringName::configured == '\0') goto LAB_00107870;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00107870:
  Control::~Control((Control *)this);
  operator_delete(this,0xa10);
  return;
}



/* Path2DEditor::~Path2DEditor() */

void __thiscall Path2DEditor::~Path2DEditor(Path2DEditor *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = String::parse_latin1;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001078e0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_001078e0:
  Control::~Control((Control *)this);
  operator_delete(this,0xab8);
  return;
}



/* Path2DEditorPlugin::get_plugin_name() const */

Path2DEditorPlugin * __thiscall Path2DEditorPlugin::get_plugin_name(Path2DEditorPlugin *this)

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



/* Path2DEditor::_notificationv(int, bool) */

void __thiscall Path2DEditor::_notificationv(Path2DEditor *this,int param_1,bool param_2)

{
  if (param_2) {
    if (param_1 == 0x2d) {
      _notification((int)this);
    }
    HBoxContainer::_notificationv((HBoxContainer *)this,param_1,true);
    return;
  }
  HBoxContainer::_notificationv((HBoxContainer *)this,param_1,false);
  if (param_1 != 0x2d) {
    return;
  }
  _notification((int)this);
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
LAB_00107f63:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00107f63;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
      goto LAB_00107fce;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
LAB_00107fce:
  return &_get_class_namev()::_class_name_static;
}



/* Path2DEditor::_get_class_namev() const */

undefined8 * Path2DEditor::_get_class_namev(void)

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
LAB_00108053:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00108053;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"Path2DEditor");
      goto LAB_001080be;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"Path2DEditor");
LAB_001080be:
  return &_get_class_namev()::_class_name_static;
}



/* Path2DEditorPlugin::_get_class_namev() const */

undefined8 * Path2DEditorPlugin::_get_class_namev(void)

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
LAB_00108143:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00108143;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"Path2DEditorPlugin");
      goto LAB_001081ae;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"Path2DEditorPlugin");
LAB_001081ae:
  return &_get_class_namev()::_class_name_static;
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



/* List<CanvasItem*, DefaultAllocator>::~List() */

undefined8 __thiscall
List<CanvasItem*,DefaultAllocator>::~List(List<CanvasItem*,DefaultAllocator> *this)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uStack_18;
  
  plVar5 = *(long **)this;
  if (plVar5 == (long *)0x0) {
    return uStack_18;
  }
  do {
    pvVar1 = (void *)*plVar5;
    if (pvVar1 == (void *)0x0) {
      if ((int)plVar5[2] != 0) {
        uVar4 = _err_print_error("~List","./core/templates/list.h",0x316,
                                 "Condition \"_data->size_cache\" is true.",0,0);
        return uVar4;
      }
      break;
    }
    if (*(long **)((long)pvVar1 + 0x18) == plVar5) {
      lVar3 = *(long *)((long)pvVar1 + 8);
      lVar2 = *(long *)((long)pvVar1 + 0x10);
      *plVar5 = lVar3;
      if (pvVar1 == (void *)plVar5[1]) {
        plVar5[1] = lVar2;
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 8) = lVar3;
        lVar3 = *(long *)((long)pvVar1 + 8);
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x10) = lVar2;
      }
      Memory::free_static(pvVar1,false);
      *(int *)(plVar5 + 2) = (int)plVar5[2] + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    plVar5 = *(long **)this;
  } while ((int)plVar5[2] != 0);
  uVar4 = Memory::free_static(plVar5,false);
  return uVar4;
}



/* void EditorUndoRedoManager::add_do_method<>(Object*, StringName const&) */

void __thiscall
EditorUndoRedoManager::add_do_method<>
          (EditorUndoRedoManager *this,Object *param_1,StringName *param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  EditorUndoRedoManager::add_do_methodp((Object *)this,(StringName *)param_1,(Variant **)param_2,0);
  if (Variant::needs_deinit[0] != '\0') {
    Variant::_clear_internal();
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void EditorUndoRedoManager::add_undo_method<>(Object*, StringName const&) */

void __thiscall
EditorUndoRedoManager::add_undo_method<>
          (EditorUndoRedoManager *this,Object *param_1,StringName *param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  EditorUndoRedoManager::add_undo_methodp
            ((Object *)this,(StringName *)param_1,(Variant **)param_2,0);
  if (Variant::needs_deinit[0] != '\0') {
    Variant::_clear_internal();
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void EditorUndoRedoManager::add_do_method<int, Vector2>(Object*, StringName const&, int, Vector2)
    */

void __thiscall
EditorUndoRedoManager::add_do_method<int,Vector2>
          (undefined8 param_1_00,EditorUndoRedoManager *this,StringName *param_1,Variant **param_2,
          int param_3)

{
  Variant *pVVar1;
  Variant *pVVar2;
  long in_FS_OFFSET;
  undefined8 local_a0;
  Variant *local_98;
  Variant *pVStack_90;
  Variant local_78 [24];
  Variant local_60 [24];
  undefined8 local_48;
  undefined1 local_40 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_a0 = param_1_00;
  Variant::Variant(local_78,param_3);
  Variant::Variant(local_60,(Vector2 *)&local_a0);
  local_48 = 0;
  pVVar2 = (Variant *)&local_30;
  local_40 = (undefined1  [16])0x0;
  local_98 = local_78;
  pVStack_90 = local_60;
  EditorUndoRedoManager::add_do_methodp((Object *)this,param_1,param_2,(int)&local_98);
  do {
    pVVar1 = pVVar2 + -0x18;
    pVVar2 = pVVar2 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar2 != local_78);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void EditorUndoRedoManager::add_undo_method<int, Vector2>(Object*, StringName const&, int,
   Vector2) */

void __thiscall
EditorUndoRedoManager::add_undo_method<int,Vector2>
          (undefined8 param_1_00,EditorUndoRedoManager *this,StringName *param_1,Variant **param_2,
          int param_3)

{
  Variant *pVVar1;
  Variant *pVVar2;
  long in_FS_OFFSET;
  undefined8 local_a0;
  Variant *local_98;
  Variant *pVStack_90;
  Variant local_78 [24];
  Variant local_60 [24];
  undefined8 local_48;
  undefined1 local_40 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_a0 = param_1_00;
  Variant::Variant(local_78,param_3);
  Variant::Variant(local_60,(Vector2 *)&local_a0);
  local_48 = 0;
  pVVar2 = (Variant *)&local_30;
  local_40 = (undefined1  [16])0x0;
  local_98 = local_78;
  pVStack_90 = local_60;
  EditorUndoRedoManager::add_undo_methodp((Object *)this,param_1,param_2,(int)&local_98);
  do {
    pVVar1 = pVVar2 + -0x18;
    pVVar2 = pVVar2 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar2 != local_78);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void EditorUndoRedoManager::add_do_method<Vector2>(Object*, StringName const&, Vector2) */

void EditorUndoRedoManager::add_do_method<Vector2>
               (undefined8 param_1_00,Object *param_1,StringName *param_2,Variant **param_4)

{
  char cVar1;
  long in_FS_OFFSET;
  undefined8 local_80;
  Variant *local_78 [2];
  int local_68 [6];
  undefined8 local_50;
  undefined1 local_48 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = param_1_00;
  Variant::Variant((Variant *)local_68,(Vector2 *)&local_80);
  local_50 = 0;
  local_48 = (undefined1  [16])0x0;
  local_78[0] = (Variant *)local_68;
  EditorUndoRedoManager::add_do_methodp(param_1,param_2,param_4,(int)local_78);
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



/* void EditorUndoRedoManager::add_undo_method<int>(Object*, StringName const&, int) */

void __thiscall
EditorUndoRedoManager::add_undo_method<int>
          (EditorUndoRedoManager *this,Object *param_1,StringName *param_2,int param_3)

{
  char cVar1;
  long in_FS_OFFSET;
  Variant *local_78 [2];
  int local_68 [6];
  undefined8 local_50;
  undefined1 local_48 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_68,param_3);
  local_50 = 0;
  local_48 = (undefined1  [16])0x0;
  local_78[0] = (Variant *)local_68;
  EditorUndoRedoManager::add_undo_methodp
            ((Object *)this,(StringName *)param_1,(Variant **)param_2,(int)local_78);
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



/* Callable create_custom_callable_function_pointer<Path2DEditor>(Path2DEditor*, char const*, void
   (Path2DEditor::*)()) */

Path2DEditor *
create_custom_callable_function_pointer<Path2DEditor>
          (Path2DEditor *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC19;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_0010fbf0;
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



/* Callable create_custom_callable_function_pointer<Path2DEditor, int>(Path2DEditor*, char const*,
   void (Path2DEditor::*)(int)) */

Path2DEditor *
create_custom_callable_function_pointer<Path2DEditor,int>
          (Path2DEditor *param_1,char *param_2,_func_void_int *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC19;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_0010fc80;
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



/* Callable Callable::bind<Path2DEditor::Mode>(Path2DEditor::Mode) const */

Variant ** Callable::bind<Path2DEditor::Mode>(Variant **param_1,int param_2,int param_3)

{
  char cVar1;
  long in_FS_OFFSET;
  int local_58 [6];
  undefined8 local_40;
  undefined1 local_38 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_58,param_3);
  local_40 = 0;
  local_38 = (undefined1  [16])0x0;
  Callable::bindp(param_1,param_2);
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
  *(code **)this = BoxContainer::BoxContainer;
  if (bVar1) {
    if (*(long *)(this + 0x648) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00108e3a;
    }
    if (*(long *)(this + 0x630) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00108e3a;
    }
    if (*(long *)(this + 0x618) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00108e3a;
    }
    if (*(long *)(this + 0x600) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00108e3a;
    }
    if (*(long *)(this + 0x5e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00108e3a;
    }
    if (*(long *)(this + 0x5d0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00108e3a;
    }
    if (*(long *)(this + 0x5b8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00108e3a;
    }
    if (*(long *)(this + 0x5a0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00108e3a;
    }
    if (*(long *)(this + 0x588) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00108e3a;
    }
    if (*(long *)(this + 0x570) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00108e3a;
    }
    if (*(long *)(this + 0x558) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00108e3a;
    }
    if (*(long *)(this + 0x540) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00108e3a;
    }
    if (*(long *)(this + 0x528) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00108e3a;
    }
    if (*(long *)(this + 0x510) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00108e3a;
    }
    if (*(long *)(this + 0x4f8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00108e3a;
    }
    if (*(long *)(this + 0x4e0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00108e3a;
    }
    if (*(long *)(this + 0x4c8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00108e3a;
    }
    if (*(long *)(this + 0x4b0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00108e3a;
    }
    if (*(long *)(this + 0x498) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00108e3a;
    }
    if (*(long *)(this + 0x480) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00108e3a;
    }
    if (*(long *)(this + 0x468) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00108e3a;
    }
    if (*(long *)(this + 0x450) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00108e3a;
    }
    if (*(long *)(this + 0x438) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00108e3a;
    }
    if (*(long *)(this + 0x420) != 0) {
      StringName::unref();
    }
  }
LAB_00108e3a:
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



/* CowData<char32_t>::_ref(CowData<char32_t> const&) */

void __thiscall CowData<char32_t>::_ref(CowData<char32_t> *this,CowData *param_1)

{
  if (*(long *)this != *(long *)param_1) {
    _ref(this,param_1);
    return;
  }
  return;
}



/* Path2DEditorPlugin::get_class() const */

void Path2DEditorPlugin::get_class(void)

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



/* Path2DEditor::get_class() const */

void Path2DEditor::get_class(void)

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
LAB_00109467:
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
      goto LAB_00109467;
    }
    lVar2 = *(long *)(lVar2 + 8);
  } while( true );
}



/* Node::is_class(String const&) const */

undefined8 __thiscall Node::is_class(Node *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_0010957b;
  }
  cVar4 = String::operator==(param_1,"Node");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = Object::is_class((Object *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0010957b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<Path2DEditor, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<Path2DEditor,void>::call
          (CallableCustomMethodPointer<Path2DEditor,void> *this,Variant **param_1,int param_2,
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
      goto LAB_001097bf;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_001097bf;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00109798. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_00109870;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_001097bf:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC74,"./core/object/callable_method_pointer.h",0x67,
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
LAB_00109870:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<Path2DEditor, void, int>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<Path2DEditor,void,int>::call
          (CallableCustomMethodPointer<Path2DEditor,void,int> *this,Variant **param_1,int param_2,
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
      goto LAB_00109a38;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar7[1] == 0) goto LAB_00109a38;
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
        uVar3 = _LC75;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        iVar5 = Variant::operator_cast_to_int(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001099e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),iVar5);
          return;
        }
        goto LAB_00109ae9;
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
LAB_00109a38:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC74,"./core/object/callable_method_pointer.h",0x67,
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
LAB_00109ae9:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Path2DEditorPlugin::_initialize_classv() */

void Path2DEditorPlugin::_initialize_classv(void)

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
    if (EditorPlugin::initialize_class()::initialized == '\0') {
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
        if ((code *)PTR__bind_methods_00113050 != Node::_bind_methods) {
          Node::_bind_methods();
        }
        Node::initialize_class()::initialized = '\x01';
      }
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"Node");
      StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
      local_70 = 0;
      String::parse_latin1((String *)&local_70,"EditorPlugin");
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
      if ((code *)PTR__bind_methods_00113040 != Node::_bind_methods) {
        EditorPlugin::_bind_methods();
      }
      if ((code *)PTR__bind_compatibility_methods_00113048 != Object::_bind_compatibility_methods) {
        EditorPlugin::_bind_compatibility_methods();
      }
      EditorPlugin::initialize_class()::initialized = '\x01';
    }
    local_58 = "EditorPlugin";
    local_68 = 0;
    local_50 = 0xc;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "Path2DEditorPlugin";
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
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (BoxContainer::initialize_class()::initialized == '\0') {
      if (Container::initialize_class()::initialized == '\0') {
        if (Control::initialize_class()::initialized == '\0') {
          if (CanvasItem::initialize_class()::initialized == '\0') {
            if (Node::initialize_class()::initialized == '\0') {
              Object::initialize_class();
              local_50 = 0;
              String::parse_latin1((String *)&local_50,"Object");
              StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
              local_60 = 0;
              String::parse_latin1((String *)&local_60,"Node");
              StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
              ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
              if ((StringName::configured != '\0') && (local_58 != 0)) {
                StringName::unref();
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
              if ((StringName::configured != '\0') && (local_48 != 0)) {
                StringName::unref();
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
              if ((code *)PTR__bind_methods_00113050 != Node::_bind_methods) {
                Node::_bind_methods();
              }
              Node::initialize_class()::initialized = '\x01';
            }
            local_50 = 0;
            String::parse_latin1((String *)&local_50,"Node");
            StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
            local_60 = 0;
            String::parse_latin1((String *)&local_60,"CanvasItem");
            StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
            ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
            if ((StringName::configured != '\0') && (local_58 != 0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
            if ((StringName::configured != '\0') && (local_48 != 0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
            CanvasItem::_bind_methods();
            if ((code *)PTR__bind_compatibility_methods_00113058 !=
                Object::_bind_compatibility_methods) {
              CanvasItem::_bind_compatibility_methods();
            }
            CanvasItem::initialize_class()::initialized = '\x01';
          }
          local_50 = 0;
          String::parse_latin1((String *)&local_50,"CanvasItem");
          StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
          local_60 = 0;
          String::parse_latin1((String *)&local_60,"Control");
          StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
          ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
          if ((StringName::configured != '\0') && (local_58 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          if ((StringName::configured != '\0') && (local_48 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
          Control::_bind_methods();
          Control::initialize_class()::initialized = '\x01';
        }
        local_50 = 0;
        String::parse_latin1((String *)&local_50,"Control");
        StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
        local_60 = 0;
        String::parse_latin1((String *)&local_60,"Container");
        StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
        ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
        if ((StringName::configured != '\0') && (local_58 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        if ((StringName::configured != '\0') && (local_48 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
        Container::_bind_methods();
        Container::initialize_class()::initialized = '\x01';
      }
      local_50 = 0;
      String::parse_latin1((String *)&local_50,"Container");
      StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"BoxContainer");
      StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((code *)PTR__bind_methods_00113060 != Container::_bind_methods) {
        BoxContainer::_bind_methods();
      }
      BoxContainer::initialize_class()::initialized = '\x01';
    }
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"BoxContainer");
    StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
    local_60 = 0;
    String::parse_latin1((String *)&local_60,"HBoxContainer");
    StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
    ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
    if ((StringName::configured != '\0') && (local_58 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if ((StringName::configured != '\0') && (local_48 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
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
        if (pvVar3 == (void *)0x0) goto LAB_0010a4ef;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_0010a4ef:
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  return;
}



/* Node::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void Node::_get_property_listv(List *param_1,bool param_2)

{
  undefined7 in_register_00000031;
  long in_FS_OFFSET;
  undefined8 local_98;
  undefined8 local_90;
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
  local_78 = &_LC69;
  local_88 = 0;
  local_90 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = &_LC69;
  local_98 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (undefined *)((ulong)local_78 & 0xffffffff00000000);
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
  StringName::StringName((StringName *)&local_78,"Node",false);
  ClassDB::get_property_list
            ((StringName *)&local_78,(List *)CONCAT71(in_register_00000031,param_2),true,
             (Object *)param_1);
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



/* Path2DEditorPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
Path2DEditorPlugin::_get_property_listv(Path2DEditorPlugin *this,List *param_1,bool param_2)

{
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
  if (!param_2) {
    EditorPlugin::_get_property_listv((EditorPlugin *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "Path2DEditorPlugin";
  local_70 = 0x12;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Path2DEditorPlugin";
  local_98 = 0;
  local_70 = 0x12;
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
  StringName::StringName((StringName *)&local_78,"Path2DEditorPlugin",false);
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
  StringName::StringName((StringName *)&local_78,"CanvasItem",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if ((code *)PTR__get_property_list_00113068 != Object::_get_property_list) {
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
  if ((code *)PTR__get_property_list_00113070 != CanvasItem::_get_property_list) {
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



/* HBoxContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall HBoxContainer::_get_property_listv(HBoxContainer *this,List *param_1,bool param_2)

{
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



/* Path2DEditor::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Path2DEditor::_get_property_listv(Path2DEditor *this,List *param_1,bool param_2)

{
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
  if (!param_2) {
    HBoxContainer::_get_property_listv((HBoxContainer *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "Path2DEditor";
  local_70 = 0xc;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Path2DEditor";
  local_98 = 0;
  local_70 = 0xc;
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
  StringName::StringName((StringName *)&local_78,"Path2DEditor",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      HBoxContainer::_get_property_listv((HBoxContainer *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
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
    if (cVar5 != '\0') goto LAB_0010bd4b;
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
      if (cVar5 != '\0') goto LAB_0010bd4b;
    }
    cVar5 = String::operator==(param_1,"CanvasItem");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Node::is_class((Node *)this,param_1);
        return uVar6;
      }
      goto LAB_0010be4e;
    }
  }
LAB_0010bd4b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010be4e:
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
    if (cVar5 != '\0') goto LAB_0010bf5b;
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
      if (cVar5 != '\0') goto LAB_0010bf5b;
    }
    cVar5 = String::operator==(param_1,"Container");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Control::is_class((Control *)this,param_1);
        return uVar6;
      }
      goto LAB_0010c05e;
    }
  }
LAB_0010bf5b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010c05e:
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
    if (cVar4 != '\0') goto LAB_0010c16b;
  }
  cVar4 = String::operator==(param_1,"HBoxContainer");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = BoxContainer::is_class((BoxContainer *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0010c16b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Path2DEditor::is_class(String const&) const */

undefined8 __thiscall Path2DEditor::is_class(Path2DEditor *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_0010c2bb;
  }
  cVar5 = String::operator==(param_1,"Path2DEditor");
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
      if (cVar5 != '\0') goto LAB_0010c2bb;
    }
    cVar5 = String::operator==(param_1,"HBoxContainer");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = BoxContainer::is_class((BoxContainer *)this,param_1);
        return uVar6;
      }
      goto LAB_0010c3be;
    }
  }
LAB_0010c2bb:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010c3be:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Path2DEditorPlugin::is_class(String const&) const */

undefined8 __thiscall Path2DEditorPlugin::is_class(Path2DEditorPlugin *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_0010c4cb;
  }
  cVar5 = String::operator==(param_1,"Path2DEditorPlugin");
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
      if (cVar5 != '\0') goto LAB_0010c4cb;
    }
    cVar5 = String::operator==(param_1,"EditorPlugin");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Node::is_class((Node *)this,param_1);
        return uVar6;
      }
      goto LAB_0010c5ce;
    }
  }
LAB_0010c4cb:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010c5ce:
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



/* Ref<Curve2D>::unref() */

void __thiscall Ref<Curve2D>::unref(Ref<Curve2D> *this)

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



/* Path2DEditorPlugin::forward_canvas_draw_over_viewport(Control*) */

void __thiscall
Path2DEditorPlugin::forward_canvas_draw_over_viewport(Path2DEditorPlugin *this,Control *param_1)

{
  Path2DEditor::forward_canvas_draw_over_viewport(*(Path2DEditor **)(this + 0x660),param_1);
  return;
}



/* Path2DEditorPlugin::forward_canvas_gui_input(Ref<InputEvent> const&) */

void __thiscall Path2DEditorPlugin::forward_canvas_gui_input(Path2DEditorPlugin *this,Ref *param_1)

{
  Path2DEditor::forward_gui_input(*(Path2DEditor **)(this + 0x660),param_1);
  return;
}



/* MethodBind* create_method_bind<Path2DEditor>(void (Path2DEditor::*)()) */

MethodBind * create_method_bind<Path2DEditor>(_func_void *param_1)

{
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void **)(this + 0x58) = param_1;
  *(undefined8 *)(this + 0x60) = in_RSI;
  *(undefined ***)this = &PTR__gen_argument_type_0010fd10;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "Path2DEditor";
  local_30 = 0xc;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<Path2DEditor, Path2D*>(void (Path2DEditor::*)(Path2D*)) */

MethodBind * create_method_bind<Path2DEditor,Path2D*>(_func_void_Path2D_ptr *param_1)

{
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_Path2D_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010fd70;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "Path2DEditor";
  local_30 = 0xc;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<Path2DEditor, Path2D*, Vector<Vector2> const&>(void
   (Path2DEditor::*)(Path2D*, Vector<Vector2> const&)) */

MethodBind *
create_method_bind<Path2DEditor,Path2D*,Vector<Vector2>const&>
          (_func_void_Path2D_ptr_Vector_ptr *param_1)

{
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_Path2D_ptr_Vector_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010fdd0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "Path2DEditor";
  local_30 = 0xc;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Path2DEditor::_bind_methods() [clone .cold] */

void Path2DEditor::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* Path2DEditor::_initialize_classv() */

void Path2DEditor::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (HBoxContainer::initialize_class()::initialized == '\0') {
      if (BoxContainer::initialize_class()::initialized == '\0') {
        if (Container::initialize_class()::initialized == '\0') {
          if (Control::initialize_class()::initialized == '\0') {
            if (CanvasItem::initialize_class()::initialized == '\0') {
              if (Node::initialize_class()::initialized == '\0') {
                Object::initialize_class();
                local_50 = 0;
                String::parse_latin1((String *)&local_50,"Object");
                StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
                local_60 = 0;
                String::parse_latin1((String *)&local_60,"Node");
                StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
                ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
                if ((StringName::configured != '\0') && (local_58 != 0)) {
                  StringName::unref();
                }
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
                if ((StringName::configured != '\0') && (local_48 != 0)) {
                  StringName::unref();
                }
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
                if ((code *)PTR__bind_methods_00113050 != Node::_bind_methods) {
                  Node::_bind_methods();
                }
                Node::initialize_class()::initialized = '\x01';
              }
              local_50 = 0;
              String::parse_latin1((String *)&local_50,"Node");
              StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
              local_60 = 0;
              String::parse_latin1((String *)&local_60,"CanvasItem");
              StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
              ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
              if ((StringName::configured != '\0') && (local_58 != 0)) {
                StringName::unref();
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
              if ((StringName::configured != '\0') && (local_48 != 0)) {
                StringName::unref();
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
              CanvasItem::_bind_methods();
              if ((code *)PTR__bind_compatibility_methods_00113058 !=
                  Object::_bind_compatibility_methods) {
                CanvasItem::_bind_compatibility_methods();
              }
              CanvasItem::initialize_class()::initialized = '\x01';
            }
            local_50 = 0;
            String::parse_latin1((String *)&local_50,"CanvasItem");
            StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
            local_60 = 0;
            String::parse_latin1((String *)&local_60,"Control");
            StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
            ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
            if ((StringName::configured != '\0') && (local_58 != 0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
            if ((StringName::configured != '\0') && (local_48 != 0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
            Control::_bind_methods();
            Control::initialize_class()::initialized = '\x01';
          }
          local_50 = 0;
          String::parse_latin1((String *)&local_50,"Control");
          StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
          local_60 = 0;
          String::parse_latin1((String *)&local_60,"Container");
          StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
          ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
          if ((StringName::configured != '\0') && (local_58 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          if ((StringName::configured != '\0') && (local_48 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
          Container::_bind_methods();
          Container::initialize_class()::initialized = '\x01';
        }
        local_50 = 0;
        String::parse_latin1((String *)&local_50,"Container");
        StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
        local_60 = 0;
        String::parse_latin1((String *)&local_60,"BoxContainer");
        StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
        ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
        if ((StringName::configured != '\0') && (local_58 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        if ((StringName::configured != '\0') && (local_48 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
        if ((code *)PTR__bind_methods_00113060 != Container::_bind_methods) {
          BoxContainer::_bind_methods();
        }
        BoxContainer::initialize_class()::initialized = '\x01';
      }
      local_50 = 0;
      String::parse_latin1((String *)&local_50,"BoxContainer");
      StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"HBoxContainer");
      StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      HBoxContainer::initialize_class()::initialized = '\x01';
    }
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"HBoxContainer");
    StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
    local_60 = 0;
    String::parse_latin1((String *)&local_60,"Path2DEditor");
    StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
    ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
    if ((StringName::configured != '\0') && (local_58 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if ((StringName::configured != '\0') && (local_48 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CowData<Vector2>::_unref() */

void __thiscall CowData<Vector2>::_unref(CowData<Vector2> *this)

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



/* WARNING: Removing unreachable block (ram,0x0010d2a8) */
/* String vformat<StringName>(String const&, StringName const) */

undefined8 * vformat<StringName>(undefined8 *param_1,bool *param_2,StringName *param_3)

{
  char cVar1;
  Variant *this;
  int iVar2;
  long in_FS_OFFSET;
  Array local_c0 [8];
  undefined8 local_b8 [8];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_78,param_3);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_c0);
  iVar2 = (int)local_c0;
  Array::resize(iVar2);
  this = (Variant *)Array::operator[](iVar2);
  Variant::operator=(this,(Variant *)local_78);
  String::sprintf((Array *)local_b8,param_2);
  *param_1 = local_b8[0];
  local_b8[0] = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  Array::~Array(local_c0);
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
      _err_print_error(&_LC74,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010d590;
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
LAB_0010d590:
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
      goto LAB_0010d99f;
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
                    /* WARNING: Could not recover jumptable at 0x0010d846. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0010d99f:
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
      goto LAB_0010db5f;
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
                    /* WARNING: Could not recover jumptable at 0x0010da06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0010db5f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Path2D*>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Path2D*>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

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
      goto LAB_0010dd41;
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
                    /* WARNING: Could not recover jumptable at 0x0010dbcd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined8 *)(*(long *)param_3 + 0x10));
    return;
  }
LAB_0010dd41:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Path2D*, Vector<Vector2> const&>::validated_call(Object*, Variant const**, Variant*)
   const */

void MethodBindT<Path2D*,Vector<Vector2>const&>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

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
      goto LAB_0010df0f;
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
                    /* WARNING: Could not recover jumptable at 0x0010ddbe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined8 *)(*(long *)param_3 + 0x10),*(long *)(*(long *)(param_3 + 8) + 8) + 0x10
              );
    return;
  }
LAB_0010df0f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Path2D*>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Path2D*>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_0010e0f9;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
                    /* WARNING: Load size is inaccurate */
  plVar1 = *param_3;
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (plVar1 != (long *)0x0) {
    plVar1 = (long *)*plVar1;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010df81. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),plVar1);
    return;
  }
LAB_0010e0f9:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Path2D*, Vector<Vector2> const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Path2D*,Vector<Vector2>const&>::ptrcall
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
      goto LAB_0010e2e1;
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
                    /* WARNING: Load size is inaccurate */
  plVar1 = *param_3;
  if (plVar1 != (long *)0x0) {
    plVar1 = (long *)*plVar1;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010e168. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),plVar1,
               *(undefined8 *)((long)param_3 + 8));
    return;
  }
LAB_0010e2e1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Path2D*>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<Path2D*>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  code *pcVar2;
  undefined8 uVar3;
  char cVar4;
  undefined4 uVar5;
  Object *pOVar6;
  long *plVar7;
  Object *pOVar8;
  long lVar9;
  long lVar10;
  undefined4 in_register_00000014;
  long *plVar11;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar12;
  Variant *pVVar13;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  long local_48;
  long local_40;
  
  plVar11 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar11 != (long *)0x0) && (plVar11[1] != 0)) && (*(char *)(plVar11[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (plVar11[1] == 0) {
      plVar7 = (long *)plVar11[0x23];
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)(**(code **)(*plVar11 + 0x40))(plVar11);
      }
    }
    else {
      plVar7 = (long *)(plVar11[1] + 0x20);
    }
    if (local_48 == *plVar7) {
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_50 = 0;
      String::parse_latin1
                ((String *)&local_50,"Cannot call method bind \'%s\' on placeholder instance.");
      vformat<StringName>((StringName *)&local_48,(String *)&local_50,&local_58);
      _err_print_error(&_LC74,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010e410;
    }
    if ((StringName::configured != '\0') && (local_48 != 0)) {
      StringName::unref();
    }
  }
  pVVar13 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (1 < in_R8D) {
    uVar5 = 3;
LAB_0010e405:
    *in_R9 = uVar5;
    in_R9[2] = 1;
    goto LAB_0010e410;
  }
  pVVar12 = param_2[5];
  if (pVVar12 == (Variant *)0x0) {
    if (in_R8D != 1) goto LAB_0010e460;
LAB_0010e450:
    pVVar12 = *(Variant **)param_4;
  }
  else {
    lVar9 = *(long *)(pVVar12 + -8);
    if ((int)lVar9 < (int)(in_R8D ^ 1)) {
LAB_0010e460:
      uVar5 = 4;
      goto LAB_0010e405;
    }
    if (in_R8D == 1) goto LAB_0010e450;
    lVar10 = (long)((int)lVar9 + -1);
    if (lVar9 <= lVar10) {
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,lVar10,lVar9,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    pVVar12 = pVVar12 + lVar10 * 0x18;
  }
  *in_R9 = 0;
  if (((ulong)pVVar13 & 1) != 0) {
    pVVar13 = *(Variant **)(pVVar13 + *(long *)((long)plVar11 + (long)pVVar1) + -1);
  }
  cVar4 = Variant::can_convert_strict(*(undefined4 *)pVVar12,0x18);
  if (cVar4 == '\0') {
LAB_0010e3b6:
    uVar3 = _LC138;
    *in_R9 = 2;
    *(undefined8 *)(in_R9 + 1) = uVar3;
  }
  else {
    pOVar6 = Variant::operator_cast_to_Object_(pVVar12);
    pOVar8 = Variant::operator_cast_to_Object_(pVVar12);
    if (((pOVar8 == (Object *)0x0) ||
        (lVar9 = __dynamic_cast(pOVar8,&Object::typeinfo,&Path2D::typeinfo,0), lVar9 == 0)) &&
       (pOVar6 != (Object *)0x0)) goto LAB_0010e3b6;
  }
  pOVar6 = Variant::operator_cast_to_Object_(pVVar12);
  if (pOVar6 != (Object *)0x0) {
    pOVar6 = (Object *)__dynamic_cast(pOVar6,&Object::typeinfo,&Path2D::typeinfo,0);
  }
  (*(code *)pVVar13)((Variant *)((long)plVar11 + (long)pVVar1),pOVar6);
LAB_0010e410:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindT<Path2D*, Vector<Vector2> const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<Path2D*,Vector<Vector2>const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  code *pcVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  Object *pOVar7;
  long *plVar8;
  Object *pOVar9;
  long lVar10;
  long lVar11;
  undefined4 in_register_00000014;
  long *plVar12;
  Variant *pVVar13;
  int iVar14;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar15;
  Variant *this;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  long local_58;
  CowData<Vector2> local_50 [16];
  long local_40;
  
  plVar12 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar12 != (long *)0x0) && (plVar12[1] != 0)) && (*(char *)(plVar12[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar12[1] == 0) {
      plVar8 = (long *)plVar12[0x23];
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*plVar12 + 0x40))(plVar12);
      }
    }
    else {
      plVar8 = (long *)(plVar12[1] + 0x20);
    }
    if (local_58 == *plVar8) {
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_60 = 0;
      String::parse_latin1
                ((String *)&local_60,"Cannot call method bind \'%s\' on placeholder instance.");
      vformat<StringName>((StringName *)&local_58,(String *)&local_60,&local_68);
      _err_print_error(&_LC74,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010e806;
    }
    if ((StringName::configured != '\0') && (local_58 != 0)) {
      StringName::unref();
    }
  }
  pVVar15 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (2 < in_R8D) {
    uVar6 = 3;
LAB_0010e845:
    *in_R9 = uVar6;
    in_R9[2] = 2;
    goto LAB_0010e806;
  }
  pVVar13 = param_2[5];
  iVar5 = 2 - in_R8D;
  if (pVVar13 == (Variant *)0x0) {
    if (iVar5 != 0) goto LAB_0010e858;
    this = *(Variant **)param_4;
LAB_0010e86d:
    pVVar13 = *(Variant **)(param_4 + 8);
  }
  else {
    lVar10 = *(long *)(pVVar13 + -8);
    iVar14 = (int)lVar10;
    if (iVar14 < iVar5) {
LAB_0010e858:
      uVar6 = 4;
      goto LAB_0010e845;
    }
    if (in_R8D == 0) {
      lVar11 = (long)(iVar14 + -2);
      if (lVar10 <= lVar11) goto LAB_0010e9a0;
      this = pVVar13 + lVar11 * 0x18;
    }
    else {
      this = *(Variant **)param_4;
      if (in_R8D == 2) goto LAB_0010e86d;
    }
    lVar11 = (long)(int)((in_R8D ^ 1) + (iVar14 - iVar5));
    if (lVar10 <= lVar11) {
LAB_0010e9a0:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,lVar11,lVar10,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    pVVar13 = pVVar13 + lVar11 * 0x18;
  }
  *in_R9 = 0;
  if (((ulong)pVVar15 & 1) != 0) {
    pVVar15 = *(Variant **)(pVVar15 + *(long *)((long)plVar12 + (long)pVVar1) + -1);
  }
  cVar4 = Variant::can_convert_strict(*(undefined4 *)pVVar13,0x23);
  uVar3 = _LC139;
  if (cVar4 == '\0') {
    *in_R9 = 2;
    *(undefined8 *)(in_R9 + 1) = uVar3;
  }
  Variant::operator_cast_to_Vector((Variant *)&local_58);
  cVar4 = Variant::can_convert_strict(*(undefined4 *)this,0x18);
  if (cVar4 == '\0') {
LAB_0010e7b9:
    uVar3 = _LC138;
    *in_R9 = 2;
    *(undefined8 *)(in_R9 + 1) = uVar3;
  }
  else {
    pOVar7 = Variant::operator_cast_to_Object_(this);
    pOVar9 = Variant::operator_cast_to_Object_(this);
    if (((pOVar9 == (Object *)0x0) ||
        (lVar10 = __dynamic_cast(pOVar9,&Object::typeinfo,&Path2D::typeinfo,0), lVar10 == 0)) &&
       (pOVar7 != (Object *)0x0)) goto LAB_0010e7b9;
  }
  pOVar7 = Variant::operator_cast_to_Object_(this);
  if (pOVar7 != (Object *)0x0) {
    pOVar7 = (Object *)__dynamic_cast(pOVar7,&Object::typeinfo,&Path2D::typeinfo,0);
  }
  (*(code *)pVVar15)((Variant *)((long)plVar12 + (long)pVVar1),pOVar7,(Variant *)&local_58);
  CowData<Vector2>::_unref(local_50);
LAB_0010e806:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* void call_get_argument_type_info_helper<Path2D*>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<Path2D*>(int param_1,int *param_2,PropertyInfo *param_3)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  undefined8 local_78;
  long local_70;
  undefined4 local_68;
  long local_60;
  long local_58;
  undefined4 local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = *param_2;
  if (iVar2 == param_1) {
    local_78 = 0;
    String::parse_latin1((String *)&local_78,"Path2D");
    StringName::StringName((StringName *)&local_70,(String *)&local_78,false);
    local_68 = 0x18;
    local_60 = 0;
    StringName::StringName((StringName *)&local_58,(StringName *)&local_70);
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    if ((StringName::configured != '\0') && (local_70 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    *(undefined4 *)param_3 = local_68;
    if (*(long *)(param_3 + 8) != local_60) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 8));
      lVar1 = local_60;
      local_60 = 0;
      *(long *)(param_3 + 8) = lVar1;
    }
    if (*(long *)(param_3 + 0x10) != local_58) {
      StringName::unref();
      lVar1 = local_58;
      local_58 = 0;
      *(long *)(param_3 + 0x10) = lVar1;
    }
    *(undefined4 *)(param_3 + 0x18) = local_50;
    if (*(long *)(param_3 + 0x20) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 0x20));
      lVar1 = local_48;
      local_48 = 0;
      *(long *)(param_3 + 0x20) = lVar1;
    }
    *(undefined4 *)(param_3 + 0x28) = local_40;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    if ((StringName::configured != '\0') && (local_58 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    iVar2 = *param_2;
  }
  *param_2 = iVar2 + 1;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Path2D*>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<Path2D*>::_gen_argument_type_info(int param_1)

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
  call_get_argument_type_info_helper<Path2D*>(in_EDX,&local_14,pPVar1);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Path2D*, Vector<Vector2> const&>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<Path2D*,Vector<Vector2>const&>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  long lVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar4;
  long in_FS_OFFSET;
  int local_8c;
  undefined8 local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined4 local_68;
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  pPVar4 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)pPVar4 = 0;
  *(undefined4 *)(pPVar4 + 0x18) = 0;
  *(undefined8 *)(pPVar4 + 0x20) = 0;
  *(undefined4 *)(pPVar4 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar4 + 8) = (undefined1  [16])0x0;
  local_8c = 0;
  call_get_argument_type_info_helper<Path2D*>(in_EDX,&local_8c,pPVar4);
  if (in_EDX != local_8c) goto LAB_0010ed64;
  local_78 = 0;
  local_80 = 0;
  String::parse_latin1((String *)&local_80,"");
  local_88 = 0;
  local_68 = 0x23;
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_0010ee4d:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_0010ee4d;
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
  *(undefined4 *)pPVar4 = local_68;
  if (*(long *)(pPVar4 + 8) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(pPVar4 + 8));
    uVar2 = local_60._0_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_60._8_8_;
    local_60 = auVar1 << 0x40;
    *(undefined8 *)(pPVar4 + 8) = uVar2;
  }
  if (*(long *)(pPVar4 + 0x10) != local_60._8_8_) {
    StringName::unref();
    uVar2 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(pPVar4 + 0x10) = uVar2;
  }
  *(int *)(pPVar4 + 0x18) = local_50;
  if (*(long *)(pPVar4 + 0x20) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(pPVar4 + 0x20));
    lVar3 = local_48;
    local_48 = 0;
    *(long *)(pPVar4 + 0x20) = lVar3;
  }
  *(undefined4 *)(pPVar4 + 0x28) = local_40;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
LAB_0010ed64:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pPVar4;
}



/* Path2DEditor::_notification(int) */

void Path2DEditor::_GLOBAL__sub_I__notification(void)

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
               &__dso_handle,uStack_8);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* EditorPlugin::~EditorPlugin() */

void __thiscall EditorPlugin::~EditorPlugin(EditorPlugin *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<CanvasItem*, DefaultAllocator>::~List() */

void __thiscall List<CanvasItem*,DefaultAllocator>::~List(List<CanvasItem*,DefaultAllocator> *this)

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
/* Path2DEditor::~Path2DEditor() */

void __thiscall Path2DEditor::~Path2DEditor(Path2DEditor *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Path2D*, Vector<Vector2> const&>::~MethodBindT() */

void __thiscall
MethodBindT<Path2D*,Vector<Vector2>const&>::~MethodBindT
          (MethodBindT<Path2D*,Vector<Vector2>const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Path2D*>::~MethodBindT() */

void __thiscall MethodBindT<Path2D*>::~MethodBindT(MethodBindT<Path2D*> *this)

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
/* CallableCustomMethodPointer<Path2DEditor, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Path2DEditor,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Path2DEditor,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<Path2DEditor, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Path2DEditor,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Path2DEditor,void,int> *this)

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
/* PropertyListHelper::~PropertyListHelper() */

void __thiscall PropertyListHelper::~PropertyListHelper(PropertyListHelper *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



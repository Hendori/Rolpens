/* EditorBottomPanel::_pin_button_toggled(bool) */

void __thiscall EditorBottomPanel::_pin_button_toggled(EditorBottomPanel *this,bool param_1)

{
  this[0xa18] = (EditorBottomPanel)param_1;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EditorBottomPanel::_scroll(bool) */

void __thiscall EditorBottomPanel::_scroll(EditorBottomPanel *this,bool param_1)

{
  undefined8 uVar1;
  char cVar2;
  double dVar3;
  double dVar4;
  
  ScrollContainer::get_h_scroll_bar();
  uVar1 = Input::get_singleton();
  cVar2 = Input::is_key_pressed(uVar1,0x400016);
  if (cVar2 == '\0') {
    uVar1 = Input::get_singleton();
    cVar2 = Input::is_key_pressed(uVar1,0x400015);
    if (cVar2 == '\0') {
      dVar3 = (double)Range::get_value();
      dVar4 = (double)Range::get_page();
      dVar4 = dVar4 * __LC2;
    }
    else {
      dVar3 = (double)Range::get_value();
      dVar4 = (double)Range::get_page();
    }
    if (!param_1) {
      dVar4 = (double)((ulong)dVar4 ^ __LC1);
    }
    Range::set_value(dVar4 + dVar3);
    return;
  }
  if (!param_1) {
    Range::set_value(0.0);
    return;
  }
  dVar3 = (double)Range::get_max();
  Range::set_value(dVar3);
  return;
}



/* EditorBottomPanel::_expand_button_toggled(bool) */

void EditorBottomPanel::_expand_button_toggled(bool param_1)

{
  CanvasItem::set_visible(SUB81(*(undefined8 *)(EditorNode::singleton + 0x768),0));
  return;
}



/* EditorBottomPanel::_update_disabled_buttons() */

void __thiscall EditorBottomPanel::_update_disabled_buttons(EditorBottomPanel *this)

{
  undefined8 uVar1;
  
  ScrollContainer::get_h_scroll_bar();
  uVar1 = *(undefined8 *)(this + 0xa30);
  Range::get_value();
  BaseButton::set_disabled(SUB81(uVar1,0));
  uVar1 = *(undefined8 *)(this + 0xa38);
  Range::get_value();
  Range::get_page();
  Range::get_max();
  BaseButton::set_disabled(SUB81(uVar1,0));
  return;
}



/* EditorBottomPanel::_update_scroll_buttons() */

void __thiscall EditorBottomPanel::_update_scroll_buttons(EditorBottomPanel *this)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)Control::get_size();
  fVar2 = (float)Control::get_size();
  CanvasItem::set_visible(SUB81(*(undefined8 *)(this + 0xa30),0));
  CanvasItem::set_visible(SUB81(*(undefined8 *)(this + 0xa38),0));
  if (fVar1 <= fVar2) {
    return;
  }
  _update_disabled_buttons(this);
  return;
}



/* EditorBottomPanel::_notification(int) */

void __thiscall EditorBottomPanel::_notification(EditorBottomPanel *this,int param_1)

{
  Ref *pRVar1;
  Node *pNVar2;
  long lVar3;
  Object *pOVar4;
  char cVar5;
  int iVar6;
  long in_FS_OFFSET;
  Object *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 == 0x31) || (param_1 == 0x7da)) {
    cVar5 = (**(code **)(*(long *)this + 0x340))(this);
    pNVar2 = *(Node **)(this + 0xa28);
    lVar3 = *(long *)(*(long *)(this + 0xa40) + 400);
    if (cVar5 == '\0') {
      if ((lVar3 != 0) && (*(char *)(lVar3 + 0x1d0) != '\0')) {
        Node::_update_children_cache_impl();
      }
      Node::move_child(pNVar2,(int)*(undefined8 *)(this + 0xa38));
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        iVar6 = (int)*(undefined8 *)(this + 0xa30);
        goto LAB_0010052b;
      }
    }
    else {
      if ((lVar3 != 0) && (*(char *)(lVar3 + 0x1d0) != '\0')) {
        Node::_update_children_cache_impl();
      }
      Node::move_child(pNVar2,(int)*(undefined8 *)(this + 0xa30));
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        iVar6 = (int)*(undefined8 *)(this + 0xa38);
LAB_0010052b:
        Node::move_child(*(Node **)(this + 0xa28),iVar6);
        return;
      }
    }
  }
  else {
    if (param_1 == 0x2d) {
      pRVar1 = *(Ref **)(this + 0xa58);
      if ((_notification(int)::{lambda()#1}::operator()()::sname == '\0') &&
         (iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#1}::operator()()::sname),
         iVar6 != 0)) {
        _scs_create((char *)&_notification(int)::{lambda()#1}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#1}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#1}::operator()()::sname);
      }
      Control::get_editor_theme_icon((StringName *)&local_38);
      Button::set_button_icon(pRVar1);
      if (((local_38 != (Object *)0x0) &&
          (cVar5 = RefCounted::unreference(), pOVar4 = local_38, cVar5 != '\0')) &&
         (cVar5 = predelete_handler(local_38), cVar5 != '\0')) {
        (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        Memory::free_static(pOVar4,false);
      }
      pRVar1 = *(Ref **)(this + 0xa60);
      if ((_notification(int)::{lambda()#2}::operator()()::sname == '\0') &&
         (iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#2}::operator()()::sname),
         iVar6 != 0)) {
        _scs_create((char *)&_notification(int)::{lambda()#2}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#2}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#2}::operator()()::sname);
      }
      Control::get_editor_theme_icon((StringName *)&local_38);
      Button::set_button_icon(pRVar1);
      if (((local_38 != (Object *)0x0) &&
          (cVar5 = RefCounted::unreference(), pOVar4 = local_38, cVar5 != '\0')) &&
         (cVar5 = predelete_handler(local_38), cVar5 != '\0')) {
        (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        Memory::free_static(pOVar4,false);
      }
      pRVar1 = *(Ref **)(this + 0xa30);
      if ((_notification(int)::{lambda()#3}::operator()()::sname == '\0') &&
         (iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#3}::operator()()::sname),
         iVar6 != 0)) {
        _scs_create((char *)&_notification(int)::{lambda()#3}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#3}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#3}::operator()()::sname);
      }
      Control::get_editor_theme_icon((StringName *)&local_38);
      Button::set_button_icon(pRVar1);
      if (((local_38 != (Object *)0x0) &&
          (cVar5 = RefCounted::unreference(), pOVar4 = local_38, cVar5 != '\0')) &&
         (cVar5 = predelete_handler(local_38), cVar5 != '\0')) {
        (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        Memory::free_static(pOVar4,false);
      }
      pRVar1 = *(Ref **)(this + 0xa38);
      if ((_notification(int)::{lambda()#4}::operator()()::sname == '\0') &&
         (iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#4}::operator()()::sname),
         iVar6 != 0)) {
        _scs_create((char *)&_notification(int)::{lambda()#4}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#4}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#4}::operator()()::sname);
      }
      Control::get_editor_theme_icon((StringName *)&local_38);
      Button::set_button_icon(pRVar1);
      if (((local_38 != (Object *)0x0) && (cVar5 = RefCounted::unreference(), cVar5 != '\0')) &&
         (cVar5 = predelete_handler(local_38), cVar5 != '\0')) {
        (**(code **)(*(long *)local_38 + 0x140))(local_38);
        Memory::free_static(local_38,false);
      }
    }
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorBottomPanel::set_expanded(bool) */

void EditorBottomPanel::set_expanded(bool param_1)

{
  undefined7 in_register_00000039;
  
  BaseButton::set_pressed(SUB81(*(undefined8 *)(CONCAT71(in_register_00000039,param_1) + 0xa60),0));
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EditorBottomPanel::EditorBottomPanel() */

void __thiscall EditorBottomPanel::EditorBottomPanel(EditorBottomPanel *this)

{
  String *pSVar1;
  StringName *pSVar2;
  code *pcVar3;
  Ref *pRVar4;
  char cVar5;
  BoxContainer *pBVar6;
  Button *pBVar7;
  ScrollContainer *this_00;
  long *plVar8;
  EditorToaster *this_01;
  Object *pOVar9;
  Control *this_02;
  bool bVar10;
  long in_FS_OFFSET;
  float fVar11;
  Object *local_88;
  undefined8 local_80;
  undefined8 local_78 [2];
  long local_68 [2];
  long local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  PanelContainer::PanelContainer((PanelContainer *)this);
  *(undefined ***)this = &PTR__initialize_classv_00109ec0;
  *(undefined8 *)(this + 0xa10) = 0;
  this[0xa18] = (EditorBottomPanel)0x0;
  *(undefined1 (*) [16])(this + 0xa20) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa30) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa40) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa50) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa60) = (undefined1  [16])0x0;
  pBVar6 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar6,true);
  pBVar6[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar6 = &PTR__initialize_classv_0010a5b0;
  postinitialize_handler((Object *)pBVar6);
  *(BoxContainer **)(this + 0xa20) = pBVar6;
  Node::add_child(this,pBVar6,0,0);
  pBVar6 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar6,false);
  pBVar6[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar6 = &PTR__initialize_classv_0010a238;
  postinitialize_handler((Object *)pBVar6);
  *(BoxContainer **)(this + 0xa28) = pBVar6;
  fVar11 = (float)EditorScale::get_scale();
  local_58 = (ulong)(uint)(fVar11 * __LC15) << 0x20;
  Control::set_custom_minimum_size((Vector2 *)pBVar6);
  Node::add_child(*(undefined8 *)(this + 0xa20),*(undefined8 *)(this + 0xa28),0,0);
  pBVar7 = (Button *)operator_new(0xc10,"");
  local_68[0] = 0;
  Button::Button(pBVar7,(String *)local_68);
  postinitialize_handler((Object *)pBVar7);
  *(Button **)(this + 0xa30) = pBVar7;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  pSVar1 = *(String **)(this + 0xa30);
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"");
  local_78[0] = 0;
  String::parse_latin1
            ((String *)local_78,
             "Scroll Left\nHold Ctrl to scroll to the begin.\nHold Shift to scroll one page.");
  TTR((String *)&local_80,(String *)local_78);
  Control::set_tooltip_text(pSVar1);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  pSVar2 = *(StringName **)(this + 0xa30);
  StringName::StringName((StringName *)local_68,"BottomPanelButton",false);
  Control::set_theme_type_variation(pSVar2);
  if ((StringName::configured != '\0') && (local_68[0] != 0)) {
    StringName::unref();
  }
  Control::set_focus_mode(*(undefined8 *)(this + 0xa30),0);
  plVar8 = *(long **)(this + 0xa30);
  pcVar3 = *(code **)(*plVar8 + 0x108);
  create_custom_callable_function_pointer<EditorBottomPanel,bool>
            ((EditorBottomPanel *)local_68,(char *)this,
             (_func_void_bool *)"&EditorBottomPanel::_scroll");
  bVar10 = SUB81((String *)local_78,0);
  Callable::bind<bool>(bVar10);
  (*pcVar3)(plVar8,SceneStringNames::singleton + 0x238,(String *)local_78,0);
  Callable::~Callable((Callable *)local_78);
  Callable::~Callable((Callable *)local_68);
  Node::add_child(*(undefined8 *)(this + 0xa28),*(undefined8 *)(this + 0xa30),0,0);
  CanvasItem::hide();
  this_00 = (ScrollContainer *)operator_new(0xa68,"");
  ScrollContainer::ScrollContainer(this_00);
  postinitialize_handler((Object *)this_00);
  *(ScrollContainer **)(this + 0xa40) = this_00;
  Control::set_h_size_flags(this_00,3);
  ScrollContainer::set_horizontal_scroll_mode(*(undefined8 *)(this + 0xa40),3);
  ScrollContainer::set_vertical_scroll_mode(*(undefined8 *)(this + 0xa40),0);
  plVar8 = (long *)ScrollContainer::get_h_scroll_bar();
  pcVar3 = *(code **)(*plVar8 + 0x108);
  create_custom_callable_function_pointer<EditorBottomPanel>
            ((EditorBottomPanel *)local_68,(char *)this,
             (_func_void *)"&EditorBottomPanel::_update_scroll_buttons");
  (*pcVar3)(plVar8,CoreStringNames::singleton + 8,(CowData<char32_t> *)local_68,1);
  Callable::~Callable((Callable *)local_68);
  plVar8 = (long *)ScrollContainer::get_h_scroll_bar();
  pcVar3 = *(code **)(*plVar8 + 0x108);
  create_custom_callable_function_pointer<EditorBottomPanel>
            ((EditorBottomPanel *)local_68,(char *)this,
             (_func_void *)"&EditorBottomPanel::_update_disabled_buttons");
  Callable::unbind((int)(String *)local_78);
  (*pcVar3)(plVar8,SceneStringNames::singleton + 0x280,(String *)local_78,1);
  Callable::~Callable((Callable *)local_78);
  Callable::~Callable((Callable *)local_68);
  Node::add_child(*(undefined8 *)(this + 0xa28),*(undefined8 *)(this + 0xa40),0,0);
  pBVar7 = (Button *)operator_new(0xc10,"");
  local_68[0] = 0;
  Button::Button(pBVar7,(String *)local_68);
  postinitialize_handler((Object *)pBVar7);
  *(Button **)(this + 0xa38) = pBVar7;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  pSVar1 = *(String **)(this + 0xa38);
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"");
  local_78[0] = 0;
  String::parse_latin1
            ((String *)local_78,
             "Scroll Right\nHold Ctrl to scroll to the end.\nHold Shift to scroll one page.");
  TTR((String *)&local_80,(String *)local_78);
  Control::set_tooltip_text(pSVar1);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  pSVar2 = *(StringName **)(this + 0xa38);
  StringName::StringName((StringName *)local_68,"BottomPanelButton",false);
  Control::set_theme_type_variation(pSVar2);
  if ((StringName::configured != '\0') && (local_68[0] != 0)) {
    StringName::unref();
  }
  Control::set_focus_mode(*(undefined8 *)(this + 0xa38),0);
  plVar8 = *(long **)(this + 0xa38);
  pcVar3 = *(code **)(*plVar8 + 0x108);
  create_custom_callable_function_pointer<EditorBottomPanel,bool>
            ((EditorBottomPanel *)local_68,(char *)this,
             (_func_void_bool *)"&EditorBottomPanel::_scroll");
  Callable::bind<bool>(bVar10);
  (*pcVar3)(plVar8,SceneStringNames::singleton + 0x238,(String *)local_78,0);
  Callable::~Callable((Callable *)local_78);
  Callable::~Callable((Callable *)local_68);
  Node::add_child(*(undefined8 *)(this + 0xa28),*(undefined8 *)(this + 0xa38),0,0);
  CanvasItem::hide();
  create_custom_callable_function_pointer<EditorBottomPanel>
            ((EditorBottomPanel *)local_68,(char *)this,
             (_func_void *)"&EditorBottomPanel::_update_scroll_buttons");
  Variant::Variant((Variant *)&local_58,0);
  Callable::call_deferredp((Variant **)local_68,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  Callable::~Callable((Callable *)local_68);
  pBVar6 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar6,false);
  pBVar6[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar6 = &PTR__initialize_classv_0010a238;
  postinitialize_handler((Object *)pBVar6);
  *(BoxContainer **)(this + 0xa48) = pBVar6;
  Control::set_h_size_flags(pBVar6,2);
  Node::add_child(*(undefined8 *)(this + 0xa40),*(undefined8 *)(this + 0xa48),0,0);
  this_01 = (EditorToaster *)operator_new(0xac8,"");
  EditorToaster::EditorToaster(this_01);
  postinitialize_handler((Object *)this_01);
  *(EditorToaster **)(this + 0xa50) = this_01;
  Node::add_child(*(undefined8 *)(this + 0xa28),this_01,0,0);
  pOVar9 = (Object *)operator_new(0xb18,"");
  EditorVersionButton::EditorVersionButton((EditorVersionButton *)pOVar9,0);
  postinitialize_handler(pOVar9);
  local_58 = __LC22;
  uStack_50 = _UNK_0010adc8;
  (**(code **)(*(long *)pOVar9 + 0x270))(pOVar9,(Variant *)&local_58);
  Control::set_v_size_flags(pOVar9,4);
  Node::add_child(*(undefined8 *)(this + 0xa28),pOVar9,0,0);
  this_02 = (Control *)operator_new(0x9c8,"");
  Control::Control(this_02);
  postinitialize_handler((Object *)this_02);
  Node::add_child(*(undefined8 *)(this + 0xa28),this_02,0,0);
  pBVar7 = (Button *)operator_new(0xc10,"");
  local_68[0] = 0;
  Button::Button(pBVar7,(String *)local_68);
  postinitialize_handler((Object *)pBVar7);
  *(Button **)(this + 0xa58) = pBVar7;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  Node::add_child(*(undefined8 *)(this + 0xa28),*(undefined8 *)(this + 0xa58),0,0);
  CanvasItem::hide();
  pSVar2 = *(StringName **)(this + 0xa58);
  StringName::StringName((StringName *)local_68,"FlatMenuButton",false);
  Control::set_theme_type_variation(pSVar2);
  if ((StringName::configured != '\0') && (local_68[0] != 0)) {
    StringName::unref();
  }
  BaseButton::set_toggle_mode(SUB81(*(undefined8 *)(this + 0xa58),0));
  pSVar1 = *(String **)(this + 0xa58);
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"");
  local_78[0] = 0;
  String::parse_latin1((String *)local_78,"Pin Bottom Panel Switching");
  TTR((String *)&local_80,(String *)local_78);
  Control::set_tooltip_text(pSVar1);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  plVar8 = *(long **)(this + 0xa58);
  pcVar3 = *(code **)(*plVar8 + 0x108);
  create_custom_callable_function_pointer<EditorBottomPanel,bool>
            ((EditorBottomPanel *)local_68,(char *)this,
             (_func_void_bool *)"&EditorBottomPanel::_pin_button_toggled");
  (*pcVar3)(plVar8,SceneStringNames::singleton + 0x248,(CowData<char32_t> *)local_68,0);
  Callable::~Callable((Callable *)local_68);
  pBVar7 = (Button *)operator_new(0xc10,"");
  local_68[0] = 0;
  Button::Button(pBVar7,(String *)local_68);
  postinitialize_handler((Object *)pBVar7);
  *(Button **)(this + 0xa60) = pBVar7;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  Node::add_child(*(undefined8 *)(this + 0xa28),*(undefined8 *)(this + 0xa60),0,0);
  CanvasItem::hide();
  pSVar2 = *(StringName **)(this + 0xa60);
  StringName::StringName((StringName *)local_68,"FlatMenuButton",false);
  Control::set_theme_type_variation(pSVar2);
  if ((StringName::configured != '\0') && (local_68[0] != 0)) {
    StringName::unref();
  }
  BaseButton::set_toggle_mode(SUB81(*(undefined8 *)(this + 0xa60),0));
  pRVar4 = *(Ref **)(this + 0xa60);
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"");
  local_78[0] = 0;
  String::parse_latin1((String *)local_78,"Expand Bottom Panel");
  local_80 = 0;
  String::parse_latin1((String *)&local_80,"editor/bottom_panel_expand");
  ED_SHORTCUT_AND_COMMAND
            (&local_88,(String *)&local_80,(String *)local_78,0x2400027,
             (CowData<char32_t> *)local_68);
  BaseButton::set_shortcut(pRVar4);
  if (local_88 != (Object *)0x0) {
    cVar5 = RefCounted::unreference();
    if (cVar5 != '\0') {
      cVar5 = predelete_handler(local_88);
      if (cVar5 != '\0') {
        (**(code **)(*(long *)local_88 + 0x140))(local_88);
        Memory::free_static(local_88,false);
      }
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  plVar8 = *(long **)(this + 0xa60);
  pcVar3 = *(code **)(*plVar8 + 0x108);
  create_custom_callable_function_pointer<EditorBottomPanel,bool>
            ((EditorBottomPanel *)local_68,(char *)this,
             (_func_void_bool *)"&EditorBottomPanel::_expand_button_toggled");
  (*pcVar3)(plVar8,SceneStringNames::singleton + 0x248,(CowData<char32_t> *)local_68,0);
  Callable::~Callable((Callable *)local_68);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorBottomPanel::save_layout_to_config(Ref<ConfigFile>, String const&) const */

void __thiscall
EditorBottomPanel::save_layout_to_config
          (EditorBottomPanel *this,undefined8 *param_2,String *param_3)

{
  char cVar1;
  long lVar2;
  long lVar3;
  String *this_00;
  String *pSVar4;
  long in_FS_OFFSET;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  int local_48 [2];
  undefined1 local_40 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = *(long *)(this + 0xa10);
  if (lVar2 != 0) {
    lVar3 = 0;
    do {
      if (*(long *)(lVar2 + -8) <= lVar3) break;
      cVar1 = BaseButton::is_pressed();
      if (cVar1 != '\0') {
        this_00 = (String *)&local_60;
        pSVar4 = (String *)*param_2;
        Variant::Variant((Variant *)local_48,(int)lVar3);
        local_60 = 0;
        local_58 = "selected_bottom_panel_item";
        local_50 = 0x1a;
        String::parse_latin1((StrRange *)this_00);
        goto LAB_00101363;
      }
      lVar2 = *(long *)(this + 0xa10);
      lVar3 = lVar3 + 1;
    } while (lVar2 != 0);
  }
  this_00 = (String *)&local_58;
  local_48[0] = 0;
  local_48[1] = 0;
  pSVar4 = (String *)*param_2;
  local_40 = (undefined1  [16])0x0;
  local_58 = (char *)0x0;
  String::parse_latin1(this_00,"selected_bottom_panel_item");
LAB_00101363:
  ConfigFile::set_value(pSVar4,param_3,(Variant *)this_00);
  CowData<char32_t>::_unref((CowData<char32_t> *)this_00);
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar3 + 0xc) = (undefined1  [16])0x0;
  *puVar3 = 0;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  puVar3[10] = 6;
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *puVar3 = *(undefined4 *)param_1;
  CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 2),(CowData *)(param_1 + 8));
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)(param_1 + 0x10));
  puVar3[6] = *(undefined4 *)(param_1 + 0x18);
  CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)(param_1 + 0x20));
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



/* EditorBottomPanel::_switch_to_item(bool, int, bool) */

void __thiscall
EditorBottomPanel::_switch_to_item(EditorBottomPanel *this,bool param_1,int param_2,bool param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  CallableCustom *this_00;
  undefined1 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 *puVar12;
  long lVar13;
  char *pcVar14;
  long in_FS_OFFSET;
  Object *local_98 [2];
  Variant *local_88 [2];
  int local_78 [6];
  int local_60 [8];
  long local_40;
  
  lVar10 = (long)param_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar9 = *(long *)(this + 0xa10);
  if (param_2 < 0) {
    if (lVar9 == 0) goto LAB_00101aa0;
    lVar9 = *(long *)(lVar9 + -8);
LAB_0010187d:
    _err_print_index_error
              ("_switch_to_item","editor/gui/editor_bottom_panel.cpp",0x68,lVar10,lVar9,"p_idx",
               "items.size()","",false,false);
  }
  else {
    if (lVar9 == 0) {
LAB_00101aa0:
      lVar9 = 0;
      goto LAB_0010187d;
    }
    lVar9 = *(long *)(lVar9 + -8);
    if (lVar9 <= lVar10) goto LAB_0010187d;
    lVar9 = lVar10 * 0x18;
    cVar3 = CanvasItem::is_visible();
    if ((bool)cVar3 != param_1) {
      lVar5 = Node::get_parent();
      if ((lVar5 == 0) ||
         (lVar5 = __dynamic_cast(lVar5,&Object::typeinfo,&SplitContainer::typeinfo,0), lVar5 == 0))
      {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          _err_print_error("_switch_to_item","editor/gui/editor_bottom_panel.cpp",0x6f,
                           "Parameter \"center_split\" is null.",0,0);
          return;
        }
        goto LAB_00101c80;
      }
      lVar11 = lVar10;
      if (param_1) {
        if (((!param_3) && (this[0xa18] != (EditorBottomPanel)0x0)) &&
           (cVar3 = CanvasItem::is_visible(), cVar3 != '\0')) goto LAB_001017d9;
        lVar6 = *(long *)(this + 0xa10);
        if (lVar6 != 0) {
          lVar11 = 0;
          do {
            lVar8 = *(long *)(lVar6 + -8);
            if (lVar8 <= lVar11) {
              lVar11 = lVar10;
              if (lVar8 <= lVar10) goto LAB_00101674;
              if (*(long *)(lVar6 + 8 + lVar9) == EditorDebuggerNode::singleton) {
                if (_switch_to_item(bool,int,bool)::{lambda()#1}::operator()()::sname == '\0') {
                  puVar12 = &_switch_to_item(bool,int,bool)::{lambda()#1}::operator()()::sname;
                  pcVar14 = (char *)&_switch_to_item(bool,int,bool)::{lambda()#1}::operator()()::
                                     sname;
                  iVar4 = __cxa_guard_acquire(&_switch_to_item(bool,int,bool)::{lambda()#1}::
                                               operator()()::sname,lVar9,
                                              EditorStringNames::singleton);
                  uVar7 = 0xe2;
                  if (iVar4 != 0) goto LAB_00101b62;
                }
              }
              else if (_switch_to_item(bool,int,bool)::{lambda()#2}::operator()()::sname == '\0') {
                puVar12 = &_switch_to_item(bool,int,bool)::{lambda()#2}::operator()()::sname;
                pcVar14 = (char *)&_switch_to_item(bool,int,bool)::{lambda()#2}::operator()()::sname
                ;
                iVar4 = __cxa_guard_acquire(&_switch_to_item(bool,int,bool)::{lambda()#2}::
                                             operator()()::sname,lVar9,EditorStringNames::singleton)
                ;
                if (iVar4 != 0) {
                  uVar7 = 0xfe;
LAB_00101b62:
                  _scs_create(pcVar14,(bool)uVar7);
                  __cxa_atexit(StringName::~StringName,pcVar14,&__dso_handle);
                  __cxa_guard_release(puVar12);
                }
              }
              Control::get_theme_stylebox((StringName *)local_98,(StringName *)this);
              Control::add_theme_style_override
                        ((StringName *)this,(Ref *)(SceneStringNames::singleton + 600));
              Ref<StyleBox>::unref((Ref<StyleBox> *)local_98);
              SplitContainer::set_dragger_visibility(lVar5,0);
              SplitContainer::set_collapsed(SUB81(lVar5,0));
              CanvasItem::show();
              CanvasItem::show();
              cVar3 = BaseButton::is_pressed();
              if (cVar3 != '\0') {
                CanvasItem::hide();
              }
              lVar5 = *(long *)(this + 0xa40);
              this_00 = (CallableCustom *)operator_new(0x48,"");
              CallableCustom::CallableCustom(this_00);
              *(undefined **)(this_00 + 0x20) = &_LC13;
              *(undefined1 (*) [16])(this_00 + 0x30) = (undefined1  [16])0x0;
              *(undefined ***)this_00 = &PTR_hash_0010a928;
              *(undefined8 *)(this_00 + 0x40) = 0;
              uVar1 = *(undefined8 *)(lVar5 + 0x60);
              *(long *)(this_00 + 0x28) = lVar5;
              *(undefined8 *)(this_00 + 0x30) = uVar1;
              *(undefined8 *)(this_00 + 0x10) = 0;
              *(code **)(this_00 + 0x38) = ScrollContainer::ensure_control_visible;
              CallableCustomMethodPointerBase::_setup((uint *)this_00,(int)this_00 + 0x28);
              *(char **)(this_00 + 0x20) = "ScrollContainer::ensure_control_visible";
              Callable::Callable((Callable *)local_98,this_00);
              lVar5 = *(long *)(this + 0xa10);
              if (lVar5 == 0) {
                lVar8 = 0;
                goto LAB_00101674;
              }
              lVar8 = *(long *)(lVar5 + -8);
              if (lVar8 <= lVar10) goto LAB_00101674;
              Variant::Variant((Variant *)local_78,*(Object **)(lVar5 + 0x10 + lVar9));
              Variant::Variant((Variant *)local_60,0);
              local_88[0] = (Variant *)local_78;
              Callable::call_deferredp((Variant **)local_98,(int)local_88);
              if (Variant::needs_deinit[local_60[0]] != '\0') {
                Variant::_clear_internal();
              }
              if (Variant::needs_deinit[local_78[0]] != '\0') {
                Variant::_clear_internal();
              }
              Callable::~Callable((Callable *)local_98);
              goto LAB_001017ac;
            }
            lVar13 = lVar11 * 0x18;
            BaseButton::set_pressed_no_signal(SUB81(*(undefined8 *)(lVar6 + 0x10 + lVar13),0));
            lVar6 = *(long *)(this + 0xa10);
            if (lVar6 == 0) {
              lVar8 = 0;
              goto LAB_00101674;
            }
            lVar8 = *(long *)(lVar6 + -8);
            if (lVar8 <= lVar11) goto LAB_00101674;
            lVar11 = lVar11 + 1;
            CanvasItem::set_visible(SUB81(*(undefined8 *)(lVar6 + 8 + lVar13),0));
            lVar6 = *(long *)(this + 0xa10);
          } while (lVar6 != 0);
        }
      }
      else {
        if ((_switch_to_item(bool,int,bool)::{lambda()#3}::operator()()::sname == '\0') &&
           (iVar4 = __cxa_guard_acquire(&_switch_to_item(bool,int,bool)::{lambda()#3}::operator()()
                                         ::sname), iVar4 != 0)) {
          _scs_create((char *)&_switch_to_item(bool,int,bool)::{lambda()#3}::operator()()::sname,
                      true);
          __cxa_atexit(StringName::~StringName,
                       &_switch_to_item(bool,int,bool)::{lambda()#3}::operator()()::sname,
                       &__dso_handle);
          __cxa_guard_release(&_switch_to_item(bool,int,bool)::{lambda()#3}::operator()()::sname);
        }
        Control::get_theme_stylebox((StringName *)local_98,(StringName *)this);
        Control::add_theme_style_override
                  ((StringName *)this,(Ref *)(SceneStringNames::singleton + 600));
        if (((local_98[0] != (Object *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0'))
           && (cVar3 = predelete_handler(local_98[0]), cVar3 != '\0')) {
          (**(code **)(*(long *)local_98[0] + 0x140))(local_98[0]);
          Memory::free_static(local_98[0],false);
        }
        lVar6 = *(long *)(this + 0xa10);
        if (lVar6 != 0) {
          lVar8 = *(long *)(lVar6 + -8);
          if (lVar8 <= lVar10) goto LAB_00101674;
          BaseButton::set_pressed_no_signal(SUB81(*(undefined8 *)(lVar6 + 0x10 + lVar9),0));
          lVar6 = *(long *)(this + 0xa10);
          if (lVar6 != 0) {
            lVar8 = *(long *)(lVar6 + -8);
            if (lVar8 <= lVar10) goto LAB_00101674;
            CanvasItem::set_visible(SUB81(*(undefined8 *)(lVar6 + 8 + lVar9),0));
            SplitContainer::set_dragger_visibility(lVar5,1);
            SplitContainer::set_collapsed(SUB81(lVar5,0));
            CanvasItem::hide();
            CanvasItem::hide();
            cVar3 = BaseButton::is_pressed();
            if (cVar3 != '\0') {
              CanvasItem::show();
            }
LAB_001017ac:
            lVar5 = *(long *)(this + 0xa10);
            if (lVar5 != 0) {
              lVar8 = *(long *)(lVar5 + -8);
              lVar11 = lVar10;
              if (lVar8 <= lVar10) goto LAB_00101674;
              *(undefined8 *)(this + 0xa68) = *(undefined8 *)(lVar5 + 8 + lVar9);
              goto LAB_001017d9;
            }
          }
        }
      }
      lVar8 = 0;
      lVar11 = lVar10;
LAB_00101674:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,lVar11,lVar8,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
  }
LAB_001017d9:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00101c80:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorBottomPanel::_switch_by_control(bool, Control*, bool) */

void __thiscall
EditorBottomPanel::_switch_by_control
          (EditorBottomPanel *this,bool param_1,Control *param_2,bool param_3)

{
  long lVar1;
  Control *pCVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  lVar1 = *(long *)(this + 0xa10);
  if (lVar1 != 0) {
    plVar4 = (long *)(lVar1 + 8);
    lVar3 = 0;
    while (lVar5 = lVar3, lVar5 < *(long *)(lVar1 + -8)) {
      pCVar2 = (Control *)*plVar4;
      plVar4 = plVar4 + 3;
      lVar3 = lVar5 + 1;
      if (pCVar2 == param_2) {
        _switch_to_item(this,param_1,(int)lVar5,param_3);
        return;
      }
    }
  }
  return;
}



/* EditorBottomPanel::load_layout_from_config(Ref<ConfigFile>, String const&) */

void __thiscall
EditorBottomPanel::load_layout_from_config
          (EditorBottomPanel *this,undefined8 *param_2,String *param_3)

{
  String *pSVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  bool bVar6;
  long in_FS_OFFSET;
  undefined8 local_90;
  char *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_70 [16];
  int local_58 [6];
  long local_40;
  
  pSVar1 = (String *)*param_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = "selected_bottom_panel_item";
  local_90 = 0;
  local_80 = 0x1a;
  String::parse_latin1((StrRange *)&local_90);
  cVar3 = ConfigFile::has_section_key(pSVar1,param_3);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if (cVar3 == '\0') {
LAB_00101d73:
    lVar5 = *(long *)(this + 0xa10);
LAB_00101d7a:
    if (lVar5 == 0) {
LAB_00101eb0:
      lVar5 = 0;
      goto LAB_00101eb3;
    }
    lVar5 = *(long *)(lVar5 + -8);
  }
  else {
    pSVar1 = (String *)*param_2;
    local_70 = (undefined1  [16])0x0;
    local_78 = 0;
    local_88 = (char *)0x0;
    String::parse_latin1((String *)&local_88,"selected_bottom_panel_item");
    ConfigFile::get_value((String *)local_58,pSVar1,(Variant *)param_3);
    iVar4 = Variant::operator_cast_to_int((Variant *)local_58);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
    }
    lVar5 = *(long *)(this + 0xa10);
    if (iVar4 < 0) goto LAB_00101d7a;
    if (lVar5 == 0) goto LAB_00101eb0;
    lVar5 = *(long *)(lVar5 + -8);
    if (iVar4 < lVar5) {
      cVar3 = CanvasItem::is_visible();
      if (cVar3 != '\0') {
        if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00101f15;
        bVar6 = true;
        goto LAB_00101db3;
      }
      goto LAB_00101d73;
    }
  }
  if (0 < lVar5) {
    CanvasItem::show();
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
LAB_00101f15:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    iVar4 = 0;
    bVar6 = false;
LAB_00101db3:
    _switch_to_item(this,bVar6,iVar4,false);
    return;
  }
LAB_00101eb3:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,0,lVar5,"p_index","size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



/* EditorBottomPanel::hide_bottom_panel() */

void __thiscall EditorBottomPanel::hide_bottom_panel(EditorBottomPanel *this)

{
  char cVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(this + 0xa10);
  if (lVar2 == 0) {
    return;
  }
  lVar3 = 0;
  while( true ) {
    if (*(long *)(lVar2 + -8) <= lVar3) {
      return;
    }
    cVar1 = CanvasItem::is_visible();
    if (cVar1 != '\0') break;
    lVar2 = *(long *)(this + 0xa10);
    lVar3 = lVar3 + 1;
    if (lVar2 == 0) {
      return;
    }
  }
  _switch_to_item(this,false,(int)lVar3,false);
  return;
}



/* EditorBottomPanel::make_item_visible(Control*, bool, bool) */

void __thiscall
EditorBottomPanel::make_item_visible
          (EditorBottomPanel *this,Control *param_1,bool param_2,bool param_3)

{
  long lVar1;
  Control *pCVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  lVar1 = *(long *)(this + 0xa10);
  if (lVar1 != 0) {
    plVar4 = (long *)(lVar1 + 8);
    lVar3 = 0;
    while (lVar5 = lVar3, lVar5 < *(long *)(lVar1 + -8)) {
      pCVar2 = (Control *)*plVar4;
      plVar4 = plVar4 + 3;
      lVar3 = lVar5 + 1;
      if (param_1 == pCVar2) {
        _switch_to_item(this,param_2,(int)lVar5,param_3);
        return;
      }
    }
  }
  return;
}



/* EditorBottomPanel::toggle_last_opened_bottom_panel() */

void __thiscall EditorBottomPanel::toggle_last_opened_bottom_panel(EditorBottomPanel *this)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  byte bVar5;
  long *plVar6;
  long lVar7;
  
  lVar1 = *(long *)(this + 0xa68);
  if (lVar1 == 0) {
    _switch_to_item(this,true,0,true);
    return;
  }
  bVar5 = CanvasItem::is_visible();
  lVar2 = *(long *)(this + 0xa10);
  if (lVar2 != 0) {
    plVar6 = (long *)(lVar2 + 8);
    lVar4 = 0;
    while (lVar7 = lVar4, lVar7 < *(long *)(lVar2 + -8)) {
      lVar3 = *plVar6;
      plVar6 = plVar6 + 3;
      lVar4 = lVar7 + 1;
      if (lVar1 == lVar3) {
        _switch_to_item(this,(bool)(bVar5 ^ 1),(int)lVar7,true);
        return;
      }
    }
  }
  return;
}



/* EditorBottomPanel::_button_drag_hover(Vector2 const&, Variant const&, Button*, Control*) */

undefined8
EditorBottomPanel::_button_drag_hover
          (Vector2 *param_1,Variant *param_2,Button *param_3,Control *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  long *plVar5;
  long lVar6;
  long in_R8;
  
  cVar4 = BaseButton::is_pressed();
  if ((cVar4 == '\0') && (lVar1 = *(long *)(param_1 + 0xa10), lVar1 != 0)) {
    plVar5 = (long *)(lVar1 + 8);
    lVar3 = 0;
    while (lVar6 = lVar3, lVar6 < *(long *)(lVar1 + -8)) {
      lVar2 = *plVar5;
      plVar5 = plVar5 + 3;
      lVar3 = lVar6 + 1;
      if (in_R8 == lVar2) {
        _switch_to_item((EditorBottomPanel *)param_1,true,(int)lVar6,true);
        return 0;
      }
    }
  }
  return 0;
}



/* CowData<EditorBottomPanel::BottomPanelItem>::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<EditorBottomPanel::BottomPanelItem>::_copy_on_write
          (CowData<EditorBottomPanel::BottomPanelItem> *this)

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
  if (lVar1 * 0x18 != 0) {
    uVar5 = lVar1 * 0x18 - 1;
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
        this_00 = this_00 + 0x18;
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



/* EditorBottomPanel::move_item_to_end(Control*) */

void __thiscall EditorBottomPanel::move_item_to_end(EditorBottomPanel *this,Control *param_1)

{
  CowData<char32_t> *this_00;
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  CowData<char32_t> *this_01;
  long lVar8;
  long lVar9;
  long in_FS_OFFSET;
  long local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  long local_30;
  
  lVar8 = *(long *)(this + 0xa10);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar8 == 0) {
LAB_001023b3:
    if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  lVar9 = 0;
  lVar5 = 0;
  do {
    lVar7 = lVar5;
    lVar6 = lVar9;
    if (*(long *)(lVar8 + -8) <= lVar6) goto LAB_001023b3;
    lVar9 = lVar6 + 1;
    lVar5 = lVar7 + 0x18;
  } while (*(Control **)(lVar8 + 8 + lVar7) != param_1);
  CanvasItem::move_to_front();
  if (*(long *)(this + 0xa10) == 0) {
    lVar8 = 0;
    lVar9 = -1;
  }
  else {
    lVar8 = *(long *)(*(long *)(this + 0xa10) + -8);
    lVar9 = lVar8 + -1;
    if (-1 < lVar9) {
      CowData<EditorBottomPanel::BottomPanelItem>::_copy_on_write
                ((CowData<EditorBottomPanel::BottomPanelItem> *)(this + 0xa10));
      lVar8 = *(long *)(this + 0xa10);
      this_00 = (CowData<char32_t> *)(lVar8 + lVar9 * 0x18);
      lVar9 = lVar6;
      if (lVar8 == 0) {
        lVar8 = 0;
      }
      else {
        lVar8 = *(long *)(lVar8 + -8);
        if (lVar6 < lVar8) {
          CowData<EditorBottomPanel::BottomPanelItem>::_copy_on_write
                    ((CowData<EditorBottomPanel::BottomPanelItem> *)(this + 0xa10));
          this_01 = (CowData<char32_t> *)(lVar7 + *(long *)(this + 0xa10));
          lVar8 = *(long *)this_01;
          uStack_40 = *(undefined8 *)(this_01 + 8);
          uVar2 = *(undefined8 *)(this_01 + 8);
          uVar3 = *(undefined8 *)(this_01 + 0x10);
          *(undefined8 *)this_01 = 0;
          local_48 = lVar8;
          local_38 = uVar3;
          if (*(long *)this_00 != 0) {
            CowData<char32_t>::_unref(this_01);
            *(undefined8 *)this_01 = *(undefined8 *)this_00;
            *(undefined8 *)this_00 = 0;
          }
          uVar4 = *(undefined8 *)(this_00 + 0x10);
          *(undefined8 *)(this_01 + 8) = *(undefined8 *)(this_00 + 8);
          *(undefined8 *)(this_01 + 0x10) = uVar4;
          if (lVar8 != 0) {
            CowData<char32_t>::_unref(this_00);
            *(long *)this_00 = lVar8;
            local_48 = 0;
          }
          *(undefined8 *)(this_00 + 8) = uVar2;
          *(undefined8 *)(this_00 + 0x10) = uVar3;
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
          goto LAB_001023b3;
        }
      }
    }
  }
  _err_print_index_error
            ("operator[]","./core/templates/vector.h",0x38,lVar9,lVar8,"p_index",
             "((Vector<T> *)(this))->_cowdata.size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* EditorBottomPanel::remove_item(Control*) */

void __thiscall EditorBottomPanel::remove_item(EditorBottomPanel *this,Control *param_1)

{
  Object *pOVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  char cVar5;
  char cVar6;
  CowData<char32_t> *this_00;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar9 = *(long *)(this + 0xa10);
  if (lVar9 == 0) {
    if (param_1 != *(Control **)(this + 0xa68)) {
      return;
    }
LAB_001026d1:
    lVar9 = 0;
  }
  else {
    lVar8 = 0;
    lVar4 = 0;
    do {
      lVar7 = lVar4;
      lVar10 = lVar8;
      if (*(long *)(lVar9 + -8) <= lVar10) goto LAB_00102600;
      lVar8 = lVar10 + 1;
      lVar4 = lVar7 + 0x18;
    } while (*(Control **)(lVar9 + 8 + lVar7) != param_1);
    cVar5 = CanvasItem::is_visible_in_tree();
    if (*(long *)(this + 0xa10) == 0) {
LAB_00102680:
      lVar9 = 0;
      goto LAB_001026a1;
    }
    lVar9 = *(long *)(*(long *)(this + 0xa10) + -8);
    if (lVar9 <= lVar10) goto LAB_001026a1;
    Node::remove_child(*(Node **)(this + 0xa20));
    if (*(long *)(this + 0xa10) == 0) goto LAB_00102680;
    lVar9 = *(long *)(*(long *)(this + 0xa10) + -8);
    if (lVar9 <= lVar10) goto LAB_001026a1;
    Node::remove_child(*(Node **)(this + 0xa48));
    lVar8 = *(long *)(this + 0xa10);
    if (lVar8 == 0) goto LAB_00102680;
    lVar9 = *(long *)(lVar8 + -8);
    if (lVar9 <= lVar10) goto LAB_001026a1;
    pOVar1 = *(Object **)(lVar8 + 0x10 + lVar7);
    cVar6 = predelete_handler(pOVar1);
    if (cVar6 != '\0') {
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      Memory::free_static(pOVar1,false);
    }
    if (*(long *)(this + 0xa10) == 0) {
      lVar9 = 0;
LAB_001026f6:
      _err_print_index_error
                ("remove_at","./core/templates/cowdata.h",0xe4,lVar10,lVar9,"p_index","size()","",
                 false,false);
    }
    else {
      lVar9 = *(long *)(*(long *)(this + 0xa10) + -8);
      if (lVar9 <= lVar10) goto LAB_001026f6;
      CowData<EditorBottomPanel::BottomPanelItem>::_copy_on_write
                ((CowData<EditorBottomPanel::BottomPanelItem> *)(this + 0xa10));
      lVar9 = *(long *)(this + 0xa10);
      if (lVar9 == 0) {
        lVar8 = -1;
      }
      else {
        lVar8 = *(long *)(lVar9 + -8) + -1;
        if (lVar10 < lVar8) {
          this_00 = (CowData<char32_t> *)(lVar9 + lVar10 * 0x18);
          do {
            if (*(long *)this_00 != *(long *)(this_00 + 0x18)) {
              CowData<char32_t>::_unref(this_00);
              uVar2 = *(undefined8 *)(this_00 + 0x18);
              *(undefined8 *)(this_00 + 0x18) = 0;
              *(undefined8 *)this_00 = uVar2;
            }
            lVar10 = lVar10 + 1;
            *(undefined8 *)(this_00 + 8) = *(undefined8 *)(this_00 + 0x20);
            *(undefined8 *)(this_00 + 0x10) = *(undefined8 *)(this_00 + 0x28);
            this_00 = this_00 + 0x18;
          } while (lVar8 != lVar10);
        }
      }
      CowData<EditorBottomPanel::BottomPanelItem>::resize<false>
                ((CowData<EditorBottomPanel::BottomPanelItem> *)(this + 0xa10),lVar8);
    }
    if (cVar5 != '\0') {
      _switch_to_item(this,true,0,true);
      return;
    }
LAB_00102600:
    if (*(Control **)(this + 0xa68) != param_1) {
      return;
    }
    lVar8 = *(long *)(this + 0xa10);
    if (lVar8 == 0) goto LAB_001026d1;
    lVar9 = *(long *)(lVar8 + -8);
    if (0 < lVar9) {
      *(undefined8 *)(this + 0xa68) = *(undefined8 *)(lVar8 + 8);
      return;
    }
  }
  lVar10 = 0;
LAB_001026a1:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,lVar10,lVar9,"p_index","size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}



/* EditorBottomPanel::add_item(String, Control*, Ref<Shortcut> const&, bool) */

Button * __thiscall
EditorBottomPanel::add_item
          (EditorBottomPanel *this,CowData *param_2,Object *param_3,undefined8 param_4,char param_5)

{
  Variant *pVVar1;
  CowData<EditorBottomPanel::BottomPanelItem> *this_00;
  code *pcVar2;
  undefined8 uVar3;
  Object *pOVar4;
  Button *pBVar5;
  int iVar6;
  Button *this_01;
  CallableCustom *pCVar7;
  CowData<char32_t> *this_02;
  long lVar8;
  Variant *pVVar9;
  long lVar10;
  CowData<char32_t> *pCVar11;
  long in_FS_OFFSET;
  undefined8 local_158;
  undefined8 local_150;
  Callable local_148 [16];
  undefined8 local_138;
  Object *local_130;
  Button *pBStack_128;
  long local_118;
  Object *local_110;
  Button *pBStack_108;
  Variant *local_f8;
  Variant *pVStack_f0;
  Variant local_d8 [24];
  Variant local_c0 [24];
  undefined8 local_a8;
  undefined1 local_a0 [16];
  Variant local_90 [8];
  Variant *local_88;
  Variant *pVStack_80;
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  this_01 = (Button *)operator_new(0xc10,"");
  local_118 = 0;
  Button::Button(this_01,(String *)&local_118);
  postinitialize_handler((Object *)this_01);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
  StringName::StringName((StringName *)&local_118,"BottomPanelButton",false);
  Control::set_theme_type_variation((StringName *)this_01);
  if ((StringName::configured != '\0') && (local_118 != 0)) {
    StringName::unref();
  }
  pcVar2 = *(code **)(*(long *)this_01 + 0x108);
  pCVar7 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar7);
  *(undefined1 (*) [16])(pCVar7 + 0x30) = (undefined1  [16])0x0;
  *(undefined **)(pCVar7 + 0x20) = &_LC13;
  *(undefined8 *)(pCVar7 + 0x40) = 0;
  uVar3 = *(undefined8 *)(this + 0x60);
  *(undefined ***)pCVar7 = &PTR_hash_0010a9b8;
  *(undefined8 *)(pCVar7 + 0x30) = uVar3;
  *(code **)(pCVar7 + 0x38) = _switch_by_control;
  *(undefined8 *)(pCVar7 + 0x10) = 0;
  *(EditorBottomPanel **)(pCVar7 + 0x28) = this;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar7,(int)pCVar7 + 0x28);
  *(char **)(pCVar7 + 0x20) = "EditorBottomPanel::_switch_by_control";
  Callable::Callable((Callable *)&local_138,pCVar7);
  Variant::Variant((Variant *)&local_88,param_3);
  Variant::Variant(local_70,true);
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  local_f8 = (Variant *)&local_88;
  pVStack_f0 = local_70;
  Callable::bindp((Variant **)&local_118,(int)(Callable *)&local_138);
  pVVar9 = (Variant *)local_40;
  do {
    pVVar1 = pVVar9 + -0x18;
    pVVar9 = pVVar9 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar9 != (Variant *)&local_88);
  (*pcVar2)(this_01,SceneStringNames::singleton + 0x248,(CowData<char32_t> *)&local_118,0);
  Callable::~Callable((Callable *)&local_118);
  Callable::~Callable((Callable *)&local_138);
  pcVar2 = *(code **)(*(long *)this_01 + 0x318);
  local_118 = 0;
  local_110 = (Object *)0x0;
  pCVar7 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar7);
  *(EditorBottomPanel **)(pCVar7 + 0x28) = this;
  *(undefined1 (*) [16])(pCVar7 + 0x30) = (undefined1  [16])0x0;
  *(undefined **)(pCVar7 + 0x20) = &_LC13;
  *(undefined8 *)(pCVar7 + 0x40) = 0;
  uVar3 = *(undefined8 *)(this + 0x60);
  *(undefined ***)pCVar7 = &PTR_hash_0010aa48;
  *(undefined8 *)(pCVar7 + 0x30) = uVar3;
  *(code **)(pCVar7 + 0x38) = _button_drag_hover;
  *(undefined8 *)(pCVar7 + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar7,(int)pCVar7 + 0x28);
  *(char **)(pCVar7 + 0x20) = "EditorBottomPanel::_button_drag_hover";
  Callable::Callable(local_148,pCVar7);
  Variant::Variant(local_d8,(Object *)this_01);
  Variant::Variant(local_c0,param_3);
  local_a8 = 0;
  local_a0 = (undefined1  [16])0x0;
  local_88 = local_d8;
  pVStack_80 = local_c0;
  Callable::bindp((Variant **)&local_138,(int)local_148);
  pVVar9 = local_90;
  do {
    pVVar1 = pVVar9 + -0x18;
    pVVar9 = pVVar9 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar9 != local_d8);
  local_158 = 0;
  local_150 = 0;
  (*pcVar2)(this_01,(Callable *)&local_158);
  Callable::~Callable((Callable *)&local_158);
  Callable::~Callable((Callable *)&local_138);
  Callable::~Callable(local_148);
  Callable::~Callable((Callable *)&local_118);
  Button::set_text((String *)this_01);
  BaseButton::set_shortcut(this_01);
  BaseButton::set_toggle_mode(SUB81(this_01,0));
  Control::set_focus_mode(this_01,0);
  Node::add_child(*(undefined8 *)(this + 0xa20),param_3,0);
  CanvasItem::move_to_front();
  Node::add_child(*(undefined8 *)(this + 0xa48),this_01,0);
  local_130 = param_3;
  pBStack_128 = this_01;
  if (param_5 == '\0') {
    Control::set_v_size_flags(param_3,3);
    CanvasItem::hide();
    local_138 = 0;
    if (*(long *)param_2 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_138,param_2);
    }
    pBVar5 = pBStack_128;
    pOVar4 = local_130;
    local_118 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_118,(CowData *)&local_138);
    local_110 = pOVar4;
    pBStack_108 = pBVar5;
    if (*(long *)(this + 0xa10) == 0) {
      lVar8 = 1;
    }
    else {
      lVar8 = *(long *)(*(long *)(this + 0xa10) + -8) + 1;
    }
    iVar6 = CowData<EditorBottomPanel::BottomPanelItem>::resize<false>
                      ((CowData<EditorBottomPanel::BottomPanelItem> *)(this + 0xa10),lVar8);
    if (iVar6 == 0) {
      if (*(long *)(this + 0xa10) == 0) {
        lVar10 = -1;
        lVar8 = 0;
      }
      else {
        lVar8 = *(long *)(*(long *)(this + 0xa10) + -8);
        lVar10 = lVar8 + -1;
        if (-1 < lVar10) {
          CowData<EditorBottomPanel::BottomPanelItem>::_copy_on_write
                    ((CowData<EditorBottomPanel::BottomPanelItem> *)(this + 0xa10));
          pCVar11 = (CowData<char32_t> *)(*(long *)(this + 0xa10) + lVar10 * 0x18);
          CowData<char32_t>::_ref(pCVar11,(CowData *)&local_118);
          *(Object **)(pCVar11 + 8) = pOVar4;
          *(Button **)(pCVar11 + 0x10) = pBVar5;
          goto LAB_00102cce;
        }
      }
      _err_print_index_error
                ("set","./core/templates/cowdata.h",0xcf,lVar10,lVar8,"p_index","size()","",false,
                 false);
    }
    else {
      _err_print_error("push_back","./core/templates/vector.h",0x142,
                       "Condition \"err\" is true. Returning: true",0,0);
    }
    goto LAB_00102cce;
  }
  Node::move_child(*(Node **)(this + 0xa48),(int)this_01);
  Control::set_v_size_flags(param_3,3);
  CanvasItem::hide();
  local_138 = 0;
  if (*(long *)param_2 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_138,param_2);
  }
  pBVar5 = pBStack_128;
  pOVar4 = local_130;
  local_118 = 0;
  this_00 = (CowData<EditorBottomPanel::BottomPanelItem> *)(this + 0xa10);
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_118,(CowData *)&local_138);
  local_110 = pOVar4;
  pBStack_108 = pBVar5;
  if (*(long *)(this + 0xa10) == 0) {
    iVar6 = CowData<EditorBottomPanel::BottomPanelItem>::resize<false>(this_00,1);
    if (iVar6 != 0) {
LAB_00102f08:
      _err_print_error("insert","./core/templates/cowdata.h",0xf2,
                       "Condition \"err\" is true. Returning: err",0,0);
      goto LAB_00102cce;
    }
    CowData<EditorBottomPanel::BottomPanelItem>::_copy_on_write(this_00);
    pCVar11 = *(CowData<char32_t> **)(this + 0xa10);
  }
  else {
    lVar10 = *(long *)(*(long *)(this + 0xa10) + -8);
    lVar8 = lVar10 + 1;
    if (lVar8 < 1) {
      _err_print_index_error
                ("insert","./core/templates/cowdata.h",0xf0,0,lVar8,"p_pos","new_size","",false,
                 false);
      goto LAB_00102cce;
    }
    iVar6 = CowData<EditorBottomPanel::BottomPanelItem>::resize<false>(this_00,lVar8);
    if (iVar6 != 0) goto LAB_00102f08;
    CowData<EditorBottomPanel::BottomPanelItem>::_copy_on_write(this_00);
    pCVar11 = *(CowData<char32_t> **)(this + 0xa10);
    if (lVar10 != 0) {
      this_02 = pCVar11 + lVar10 * 0x18;
      do {
        if (*(long *)this_02 != *(long *)(this_02 + -0x18)) {
          CowData<char32_t>::_unref(this_02);
          uVar3 = *(undefined8 *)(this_02 + -0x18);
          *(undefined8 *)(this_02 + -0x18) = 0;
          *(undefined8 *)this_02 = uVar3;
        }
        *(undefined8 *)(this_02 + 8) = *(undefined8 *)(this_02 + -0x10);
        *(undefined8 *)(this_02 + 0x10) = *(undefined8 *)(this_02 + -8);
        lVar10 = lVar10 + -1;
        this_02 = this_02 + -0x18;
      } while (lVar10 != 0);
    }
  }
  CowData<char32_t>::_ref(pCVar11,(CowData *)&local_118);
  *(Object **)(pCVar11 + 8) = pOVar4;
  *(Button **)(pCVar11 + 0x10) = pBVar5;
LAB_00102cce:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return this_01;
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



/* CallableCustomMethodPointer<EditorBottomPanel, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorBottomPanel,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorBottomPanel,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorBottomPanel, void, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorBottomPanel,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorBottomPanel,void,bool> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorBottomPanel, bool, Vector2 const&, Variant const&, Button*,
   Control*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorBottomPanel,bool,Vector2_const&,Variant_const&,Button*,Control*>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorBottomPanel,bool,Vector2_const&,Variant_const&,Button*,Control*>
           *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorBottomPanel, void, bool, Control*,
   bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorBottomPanel,void,bool,Control*,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorBottomPanel,void,bool,Control*,bool> *this)

{
  return;
}



/* CallableCustomMethodPointer<ScrollContainer, void, Control*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ScrollContainer,void,Control*>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ScrollContainer,void,Control*> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorBottomPanel, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorBottomPanel,void>::get_argument_count
          (CallableCustomMethodPointer<EditorBottomPanel,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<EditorBottomPanel, void, bool>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorBottomPanel,void,bool>::get_argument_count
          (CallableCustomMethodPointer<EditorBottomPanel,void,bool> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<EditorBottomPanel, bool, Vector2 const&, Variant const&, Button*,
   Control*>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorBottomPanel,bool,Vector2_const&,Variant_const&,Button*,Control*>::
get_argument_count(CallableCustomMethodPointer<EditorBottomPanel,bool,Vector2_const&,Variant_const&,Button*,Control*>
                   *this,bool *param_1)

{
  *param_1 = true;
  return 4;
}



/* CallableCustomMethodPointer<EditorBottomPanel, void, bool, Control*,
   bool>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorBottomPanel,void,bool,Control*,bool>::get_argument_count
          (CallableCustomMethodPointer<EditorBottomPanel,void,bool,Control*,bool> *this,
          bool *param_1)

{
  *param_1 = true;
  return 3;
}



/* CallableCustomMethodPointer<ScrollContainer, void, Control*>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<ScrollContainer,void,Control*>::get_argument_count
          (CallableCustomMethodPointer<ScrollContainer,void,Control*> *this,bool *param_1)

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



/* CallableCustomMethodPointer<ScrollContainer, void, Control*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ScrollContainer,void,Control*>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ScrollContainer,void,Control*> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorBottomPanel, void, bool, Control*,
   bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorBottomPanel,void,bool,Control*,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorBottomPanel,void,bool,Control*,bool> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorBottomPanel, bool, Vector2 const&, Variant const&, Button*,
   Control*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorBottomPanel,bool,Vector2_const&,Variant_const&,Button*,Control*>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorBottomPanel,bool,Vector2_const&,Variant_const&,Button*,Control*>
           *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorBottomPanel, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorBottomPanel,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorBottomPanel,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorBottomPanel, void, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorBottomPanel,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorBottomPanel,void,bool> *this)

{
  operator_delete(this,0x48);
  return;
}



/* EditorBottomPanel::_property_get_revertv(StringName const&, Variant&) const */

undefined8 EditorBottomPanel::_property_get_revertv(StringName *param_1,Variant *param_2)

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



/* EditorBottomPanel::_property_can_revertv(StringName const&) const */

undefined8 EditorBottomPanel::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0010e008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* HBoxContainer::_property_can_revertv(StringName const&) const */

undefined8 HBoxContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0010e008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* VBoxContainer::_property_can_revertv(StringName const&) const */

undefined8 VBoxContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0010e008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
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
LAB_001033a3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001033a3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
      goto LAB_0010340e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
LAB_0010340e:
  return &_get_class_namev()::_class_name_static;
}



/* CallableCustomMethodPointer<EditorBottomPanel, void, bool, Control*, bool>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorBottomPanel,void,bool,Control*,bool>::get_object
          (CallableCustomMethodPointer<EditorBottomPanel,void,bool,Control*,bool> *this)

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
      goto LAB_0010353d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010353d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010353d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorBottomPanel, void, bool>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorBottomPanel,void,bool>::get_object
          (CallableCustomMethodPointer<EditorBottomPanel,void,bool> *this)

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
      goto LAB_0010363d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010363d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010363d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorBottomPanel, bool, Vector2 const&, Variant const&, Button*,
   Control*>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorBottomPanel,bool,Vector2_const&,Variant_const&,Button*,Control*>::
get_object(CallableCustomMethodPointer<EditorBottomPanel,bool,Vector2_const&,Variant_const&,Button*,Control*>
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
      goto LAB_0010373d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010373d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010373d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<ScrollContainer, void, Control*>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<ScrollContainer,void,Control*>::get_object
          (CallableCustomMethodPointer<ScrollContainer,void,Control*> *this)

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
      goto LAB_0010383d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010383d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010383d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorBottomPanel, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorBottomPanel,void>::get_object
          (CallableCustomMethodPointer<EditorBottomPanel,void> *this)

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
      goto LAB_0010393d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010393d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010393d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* EditorBottomPanel::_validate_propertyv(PropertyInfo&) const */

void EditorBottomPanel::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  if ((code *)PTR__validate_property_0010e010 == CanvasItem::_validate_property) {
    return;
  }
  Control::_validate_property(param_1);
  return;
}



/* VBoxContainer::_validate_propertyv(PropertyInfo&) const */

void VBoxContainer::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_0010e018 == Control::_validate_property) {
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
  if ((code *)PTR__validate_property_0010e018 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* EditorBottomPanel::is_class_ptr(void*) const */

uint EditorBottomPanel::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x10ac,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10ac,in_RSI == &PanelContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10ac,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10ac,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10ac,in_RSI == &Node::get_class_ptr_static()::ptr) |
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
    uVar1 = (uint)CONCAT71(0x10ac,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10ac,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10ac,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10ac,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10ac,in_RSI == &Node::get_class_ptr_static()::ptr) |
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
    uVar1 = (uint)CONCAT71(0x10ac,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10ac,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10ac,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10ac,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10ac,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* VBoxContainer::_setv(StringName const&, Variant const&) */

undefined8 VBoxContainer::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_0010e020 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* EditorBottomPanel::_setv(StringName const&, Variant const&) */

undefined8 EditorBottomPanel::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_0010e020 != CanvasItem::_set) {
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
    if ((code *)PTR__set_0010e020 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00103e48) */
/* EditorBottomPanel::_getv(StringName const&, Variant&) const */

undefined8 EditorBottomPanel::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_0010e028 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00103eb8) */
/* VBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 VBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_0010e028 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00103f28) */
/* HBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 HBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_0010e028 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* EditorBottomPanel::_get_class_namev() const */

undefined8 * EditorBottomPanel::_get_class_namev(void)

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
LAB_00103f83:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00103f83;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"EditorBottomPanel");
      goto LAB_00103fee;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"EditorBottomPanel");
LAB_00103fee:
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
LAB_00104073:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00104073;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
      goto LAB_001040de;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
LAB_001040de:
  return &_get_class_namev()::_class_name_static;
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
      if (StringName::configured == '\0') goto LAB_00104170;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00104170:
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
      if (StringName::configured == '\0') goto LAB_001041d0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_001041d0:
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
      if (StringName::configured == '\0') goto LAB_00104230;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00104230:
  Control::~Control((Control *)this);
  operator_delete(this,0xa10);
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
      if (StringName::configured == '\0') goto LAB_001042a0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_001042a0:
  Control::~Control((Control *)this);
  operator_delete(this,0xa10);
  return;
}



/* VBoxContainer::_notificationv(int, bool) */

void __thiscall VBoxContainer::_notificationv(VBoxContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_0010e030 != Container::_notification) {
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
  if ((code *)PTR__notification_0010e030 == Container::_notification) {
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
    if ((code *)PTR__notification_0010e030 != Container::_notification) {
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
  if ((code *)PTR__notification_0010e030 == Container::_notification) {
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



/* WARNING: Removing unreachable block (ram,0x00104830) */
/* EditorBottomPanel::_notificationv(int, bool) */

void __thiscall EditorBottomPanel::_notificationv(EditorBottomPanel *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    _notification(this,param_1);
    if ((code *)PTR__notification_0010e038 != Container::_notification) {
      PanelContainer::_notification(iVar1);
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
  if ((code *)PTR__notification_0010e038 != Container::_notification) {
    PanelContainer::_notification(iVar1);
  }
  _notification(this,param_1);
  return;
}



/* Callable create_custom_callable_function_pointer<EditorBottomPanel, bool>(EditorBottomPanel*,
   char const*, void (EditorBottomPanel::*)(bool)) */

EditorBottomPanel *
create_custom_callable_function_pointer<EditorBottomPanel,bool>
          (EditorBottomPanel *param_1,char *param_2,_func_void_bool *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC13;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_0010aad8;
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



/* Callable create_custom_callable_function_pointer<EditorBottomPanel>(EditorBottomPanel*, char
   const*, void (EditorBottomPanel::*)()) */

EditorBottomPanel *
create_custom_callable_function_pointer<EditorBottomPanel>
          (EditorBottomPanel *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC13;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_0010ab68;
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



/* VBoxContainer::get_class() const */

void VBoxContainer::get_class(void)

{
  long lVar1;
  long lVar2;
  char *__s;
  long in_RSI;
  String *in_RDI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(in_RSI + 8) == 0) {
    *(undefined8 *)in_RDI = 0;
    String::parse_latin1(in_RDI,"VBoxContainer");
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
        String::parse_latin1((StrRange *)in_RDI);
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



/* EditorBottomPanel::get_class() const */

void EditorBottomPanel::get_class(void)

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
LAB_001051b7:
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
      goto LAB_001051b7;
    }
    lVar2 = *(long *)(lVar2 + 8);
  } while( true );
}



/* CallableCustomMethodPointer<EditorBottomPanel, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorBottomPanel,void>::call
          (CallableCustomMethodPointer<EditorBottomPanel,void> *this,Variant **param_1,int param_2,
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
      goto LAB_001053af;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_001053af;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00105388. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_00105460;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_001053af:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC36,"./core/object/callable_method_pointer.h",0x67,
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
LAB_00105460:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<EditorBottomPanel, void, bool>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorBottomPanel,void,bool>::call
          (CallableCustomMethodPointer<EditorBottomPanel,void,bool> *this,Variant **param_1,
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
      goto LAB_00105629;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar6[1] == 0) goto LAB_00105629;
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
        uVar3 = _LC37;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        bVar7 = Variant::operator_cast_to_bool(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001055d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),bVar7);
          return;
        }
        goto LAB_001056da;
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
LAB_00105629:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC36,"./core/object/callable_method_pointer.h",0x67,
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
LAB_001056da:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<ScrollContainer, void, Control*>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<ScrollContainer,void,Control*>::call
          (CallableCustomMethodPointer<ScrollContainer,void,Control*> *this,Variant **param_1,
          int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  Variant *this_00;
  undefined8 uVar3;
  char cVar4;
  Object *pOVar5;
  Object *pOVar6;
  long lVar7;
  uint uVar8;
  ulong *puVar9;
  code *UNRECOVERED_JUMPTABLE;
  long in_FS_OFFSET;
  bool bVar10;
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  String local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar8 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar8 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_48[0] = (String)0x0;
      LOCK();
      bVar10 = (char)ObjectDB::spin_lock == '\0';
      if (bVar10) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar10) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar9 = (ulong *)((ulong)uVar8 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar9 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_00105915;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar9[1] == 0) goto LAB_00105915;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if ((uint)param_2 < 2) {
      if (param_2 != 0) {
        *(undefined4 *)param_4 = 0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,0x18);
        if (cVar4 == '\0') {
LAB_00105820:
          uVar3 = _LC38;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        else {
          this_00 = *param_1;
          pOVar5 = Variant::operator_cast_to_Object_(this_00);
          pOVar6 = Variant::operator_cast_to_Object_(this_00);
          if (((pOVar6 == (Object *)0x0) ||
              (lVar7 = __dynamic_cast(pOVar6,&Object::typeinfo,&Control::typeinfo,0), lVar7 == 0))
             && (pOVar5 != (Object *)0x0)) goto LAB_00105820;
        }
        pOVar5 = Variant::operator_cast_to_Object_(*param_1);
        if (pOVar5 != (Object *)0x0) {
          pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&Control::typeinfo,0);
        }
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00105887. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),pOVar5);
          return;
        }
        goto LAB_001059c6;
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
LAB_00105915:
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"\', can\'t call method.");
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+(local_48,(String *)local_58);
    _err_print_error(&_LC36,"./core/object/callable_method_pointer.h",0x67,
                     "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                     local_48,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_48);
    CowData<char32_t>::_unref(local_58);
    CowData<char32_t>::_unref(local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001059c6:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<EditorBottomPanel, void, bool, Control*, bool>::call(Variant const**,
   int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorBottomPanel,void,bool,Control*,bool>::call
          (CallableCustomMethodPointer<EditorBottomPanel,void,bool,Control*,bool> *this,
          Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  Variant *this_00;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  Object *pOVar6;
  Object *pOVar7;
  long lVar8;
  uint uVar9;
  ulong *puVar10;
  code *UNRECOVERED_JUMPTABLE;
  long in_FS_OFFSET;
  bool bVar11;
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  String local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar9 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar9 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_48[0] = (String)0x0;
      LOCK();
      bVar11 = (char)ObjectDB::spin_lock == '\0';
      if (bVar11) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar11) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar10 = (ulong *)((ulong)uVar9 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar10 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_00105c1d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar10[1] == 0) goto LAB_00105c1d;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if ((uint)param_2 < 4) {
      if (param_2 == 3) {
        *(undefined4 *)param_4 = 0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar4 = Variant::can_convert_strict(*(undefined4 *)param_1[2],1);
        uVar3 = _LC39;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        bVar11 = Variant::operator_cast_to_bool(param_1[2]);
        cVar4 = Variant::can_convert_strict(*(undefined4 *)param_1[1],0x18);
        if (cVar4 == '\0') {
LAB_00105b55:
          uVar3 = _LC40;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        else {
          this_00 = param_1[1];
          pOVar6 = Variant::operator_cast_to_Object_(this_00);
          pOVar7 = Variant::operator_cast_to_Object_(this_00);
          if (((pOVar7 == (Object *)0x0) ||
              (lVar8 = __dynamic_cast(pOVar7,&Object::typeinfo,&Control::typeinfo,0), lVar8 == 0))
             && (pOVar6 != (Object *)0x0)) goto LAB_00105b55;
        }
        pOVar6 = Variant::operator_cast_to_Object_(param_1[1]);
        if (pOVar6 != (Object *)0x0) {
          pOVar6 = (Object *)__dynamic_cast(pOVar6,&Object::typeinfo,&Control::typeinfo,0);
        }
        cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,1);
        uVar3 = _LC37;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        bVar5 = Variant::operator_cast_to_bool(*param_1);
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00105bf6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),bVar5,pOVar6,bVar11);
          return;
        }
        goto LAB_00105d1e;
      }
      *(undefined4 *)param_4 = 4;
      *(undefined4 *)(param_4 + 8) = 3;
    }
    else {
      *(undefined4 *)param_4 = 3;
      *(undefined4 *)(param_4 + 8) = 3;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_00105c1d:
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"\', can\'t call method.");
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+(local_48,(String *)local_58);
    _err_print_error(&_LC36,"./core/object/callable_method_pointer.h",0x67,
                     "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                     local_48,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_48);
    CowData<char32_t>::_unref(local_58);
    CowData<char32_t>::_unref(local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00105d1e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<EditorBottomPanel, bool, Vector2 const&, Variant const&, Button*,
   Control*>::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorBottomPanel,bool,Vector2_const&,Variant_const&,Button*,Control*>::
call(CallableCustomMethodPointer<EditorBottomPanel,bool,Vector2_const&,Variant_const&,Button*,Control*>
     *this,Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  Variant *pVVar3;
  undefined8 uVar4;
  char cVar5;
  Object *pOVar6;
  Object *pOVar7;
  Object *pOVar8;
  long lVar9;
  uint uVar10;
  ulong *puVar11;
  code *pcVar12;
  long in_FS_OFFSET;
  bool bVar13;
  CowData<char32_t> local_a0 [8];
  CowData<char32_t> local_98 [8];
  undefined8 local_90;
  String local_88 [8];
  undefined8 local_80;
  undefined4 local_78 [2];
  undefined8 local_70;
  undefined8 uStack_68;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar10 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar10 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_88[0] = (String)0x0;
      LOCK();
      bVar13 = (char)ObjectDB::spin_lock == '\0';
      if (bVar13) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar13) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar11 = (ulong *)((ulong)uVar10 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) == (*puVar11 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar11[1] != 0) {
        lVar1 = *(long *)(this + 0x28);
        pcVar12 = *(code **)(this + 0x38);
        lVar2 = *(long *)(this + 0x40);
        if (4 < (uint)param_2) {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 4;
          goto LAB_00105e05;
        }
        if (param_2 != 4) {
          *(undefined4 *)param_4 = 4;
          *(undefined4 *)(param_4 + 8) = 4;
          goto LAB_00105e05;
        }
        *(undefined4 *)param_4 = 0;
        if (((ulong)pcVar12 & 1) != 0) {
          pcVar12 = *(code **)(pcVar12 + *(long *)(lVar2 + lVar1) + -1);
        }
        cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[3],0x18);
        if (cVar5 == '\0') {
LAB_00105e8d:
          uVar4 = _LC41;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        else {
          pVVar3 = param_1[3];
          pOVar6 = Variant::operator_cast_to_Object_(pVVar3);
          pOVar7 = Variant::operator_cast_to_Object_(pVVar3);
          if (((pOVar7 == (Object *)0x0) ||
              (lVar9 = __dynamic_cast(pOVar7,&Object::typeinfo,&Control::typeinfo,0), lVar9 == 0))
             && (pOVar6 != (Object *)0x0)) goto LAB_00105e8d;
        }
        pOVar6 = Variant::operator_cast_to_Object_(param_1[3]);
        if (pOVar6 != (Object *)0x0) {
          pOVar6 = (Object *)__dynamic_cast(pOVar6,&Object::typeinfo,&Control::typeinfo,0);
        }
        cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[2],0x18);
        if (cVar5 == '\0') {
LAB_00105ee2:
          uVar4 = _LC42;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        else {
          pVVar3 = param_1[2];
          pOVar7 = Variant::operator_cast_to_Object_(pVVar3);
          pOVar8 = Variant::operator_cast_to_Object_(pVVar3);
          if (((pOVar8 == (Object *)0x0) ||
              (lVar9 = __dynamic_cast(pOVar8,&Object::typeinfo,&Button::typeinfo,0), lVar9 == 0)) &&
             (pOVar7 != (Object *)0x0)) goto LAB_00105ee2;
        }
        pOVar7 = Variant::operator_cast_to_Object_(param_1[2]);
        if (pOVar7 != (Object *)0x0) {
          pOVar7 = (Object *)__dynamic_cast(pOVar7,&Object::typeinfo,&Button::typeinfo,0);
        }
        cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[1],0);
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = 1;
        }
        Variant::Variant((Variant *)local_58,param_1[1]);
        cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,5);
        uVar4 = _LC44;
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        local_80 = Variant::operator_cast_to_Vector2(*param_1);
        bVar13 = (bool)(*pcVar12)((long *)(lVar2 + lVar1),&local_80,(Variant *)local_58,pOVar7,
                                  pOVar6);
        Variant::Variant((Variant *)local_78,bVar13);
        if (Variant::needs_deinit[*(int *)param_3] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)param_3 = local_78[0];
        *(undefined8 *)(param_3 + 8) = local_70;
        *(undefined8 *)(param_3 + 0x10) = uStack_68;
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        goto LAB_00105e05;
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
  local_90 = 0;
  String::parse_latin1((String *)&local_90,"\', can\'t call method.");
  uitos((ulong)local_a0);
  operator+((char *)local_98,(String *)"Invalid Object id \'");
  String::operator+(local_88,(String *)local_98);
  _err_print_error(&_LC36,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   local_88,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  CowData<char32_t>::_unref(local_98);
  CowData<char32_t>::_unref(local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
LAB_00105e05:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CanvasItem::is_class(String const&) const */

undefined8 __thiscall CanvasItem::is_class(CanvasItem *this,String *param_1)

{
  long lVar1;
  char *pcVar2;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined8 local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar1 = *(long *)(this + 8); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
    lVar3 = *(long *)(lVar1 + 0x20);
    if (lVar3 == 0) {
      local_60 = 0;
    }
    else {
      pcVar2 = *(char **)(lVar3 + 8);
      local_60 = 0;
      if (pcVar2 == (char *)0x0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
      }
      else {
        local_50 = strlen(pcVar2);
        local_58 = pcVar2;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar4 = String::operator==(param_1,(String *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if (cVar4 != '\0') goto LAB_00106253;
  }
  cVar4 = String::operator==(param_1,"CanvasItem");
  if (cVar4 == '\0') {
    for (lVar1 = *(long *)(this + 8); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
      lVar3 = *(long *)(lVar1 + 0x20);
      if (lVar3 == 0) {
        local_60 = 0;
      }
      else {
        pcVar2 = *(char **)(lVar3 + 8);
        local_60 = 0;
        if (pcVar2 == (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
        }
        else {
          local_50 = strlen(pcVar2);
          local_58 = pcVar2;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar4 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar4 != '\0') goto LAB_00106253;
    }
    cVar4 = String::operator==(param_1,"Node");
    if (cVar4 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar5 = Object::is_class((Object *)this,param_1);
        return uVar5;
      }
      goto LAB_0010635e;
    }
  }
LAB_00106253:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010635e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Container::is_class(String const&) const */

undefined8 __thiscall Container::is_class(Container *this,String *param_1)

{
  long lVar1;
  char *pcVar2;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined8 local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar1 = *(long *)(this + 8); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
    lVar3 = *(long *)(lVar1 + 0x20);
    if (lVar3 == 0) {
      local_60 = 0;
    }
    else {
      pcVar2 = *(char **)(lVar3 + 8);
      local_60 = 0;
      if (pcVar2 == (char *)0x0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
      }
      else {
        local_50 = strlen(pcVar2);
        local_58 = pcVar2;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar4 = String::operator==(param_1,(String *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if (cVar4 != '\0') goto LAB_00106453;
  }
  cVar4 = String::operator==(param_1,"Container");
  if (cVar4 == '\0') {
    for (lVar1 = *(long *)(this + 8); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
      lVar3 = *(long *)(lVar1 + 0x20);
      if (lVar3 == 0) {
        local_60 = 0;
      }
      else {
        pcVar2 = *(char **)(lVar3 + 8);
        local_60 = 0;
        if (pcVar2 == (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
        }
        else {
          local_50 = strlen(pcVar2);
          local_58 = pcVar2;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar4 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar4 != '\0') goto LAB_00106453;
    }
    cVar4 = String::operator==(param_1,"Control");
    if (cVar4 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar5 = CanvasItem::is_class((CanvasItem *)this,param_1);
        return uVar5;
      }
      goto LAB_0010655e;
    }
  }
LAB_00106453:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010655e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorBottomPanel::is_class(String const&) const */

undefined8 __thiscall EditorBottomPanel::is_class(EditorBottomPanel *this,String *param_1)

{
  long lVar1;
  char *pcVar2;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined8 local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar1 = *(long *)(this + 8); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
    lVar3 = *(long *)(lVar1 + 0x20);
    if (lVar3 == 0) {
      local_60 = 0;
    }
    else {
      pcVar2 = *(char **)(lVar3 + 8);
      local_60 = 0;
      if (pcVar2 == (char *)0x0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
      }
      else {
        local_50 = strlen(pcVar2);
        local_58 = pcVar2;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar4 = String::operator==(param_1,(String *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if (cVar4 != '\0') goto LAB_00106653;
  }
  cVar4 = String::operator==(param_1,"EditorBottomPanel");
  if (cVar4 == '\0') {
    for (lVar1 = *(long *)(this + 8); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
      lVar3 = *(long *)(lVar1 + 0x20);
      if (lVar3 == 0) {
        local_60 = 0;
      }
      else {
        pcVar2 = *(char **)(lVar3 + 8);
        local_60 = 0;
        if (pcVar2 == (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
        }
        else {
          local_50 = strlen(pcVar2);
          local_58 = pcVar2;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar4 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar4 != '\0') goto LAB_00106653;
    }
    cVar4 = String::operator==(param_1,"PanelContainer");
    if (cVar4 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar5 = Container::is_class((Container *)this,param_1);
        return uVar5;
      }
      goto LAB_0010675e;
    }
  }
LAB_00106653:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010675e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
              if ((code *)PTR__bind_methods_0010e050 != Node::_bind_methods) {
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
            if ((code *)PTR__bind_compatibility_methods_0010e040 !=
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
      if ((code *)PTR__bind_methods_0010e048 != Container::_bind_methods) {
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



/* EditorBottomPanel::_initialize_classv() */

void EditorBottomPanel::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (PanelContainer::initialize_class()::initialized == '\0') {
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
              if ((code *)PTR__bind_methods_0010e050 != Node::_bind_methods) {
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
            if ((code *)PTR__bind_compatibility_methods_0010e040 !=
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
      String::parse_latin1((String *)&local_60,"PanelContainer");
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
      if ((code *)PTR__bind_methods_0010e058 != Container::_bind_methods) {
        PanelContainer::_bind_methods();
      }
      PanelContainer::initialize_class()::initialized = '\x01';
    }
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"PanelContainer");
    StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
    local_60 = 0;
    String::parse_latin1((String *)&local_60,"EditorBottomPanel");
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



/* VBoxContainer::_initialize_classv() */

void VBoxContainer::_initialize_classv(void)

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
              if ((code *)PTR__bind_methods_0010e050 != Node::_bind_methods) {
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
            if ((code *)PTR__bind_compatibility_methods_0010e040 !=
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
      if ((code *)PTR__bind_methods_0010e048 != Container::_bind_methods) {
        BoxContainer::_bind_methods();
      }
      BoxContainer::initialize_class()::initialized = '\x01';
    }
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"BoxContainer");
    StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
    local_60 = 0;
    String::parse_latin1((String *)&local_60,"VBoxContainer");
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
        if (pvVar3 == (void *)0x0) goto LAB_0010799f;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_0010799f:
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
  local_78 = &_LC46;
  local_88 = 0;
  local_90 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = &_LC46;
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
  if ((code *)PTR__get_property_list_0010e060 != Object::_get_property_list) {
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
  if ((code *)PTR__get_property_list_0010e068 != CanvasItem::_get_property_list) {
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



/* PanelContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall PanelContainer::_get_property_listv(PanelContainer *this,List *param_1,bool param_2)

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
  local_78 = "PanelContainer";
  local_70 = 0xe;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "PanelContainer";
  local_98 = 0;
  local_70 = 0xe;
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
  StringName::StringName((StringName *)&local_78,"PanelContainer",false);
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



/* EditorBottomPanel::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
EditorBottomPanel::_get_property_listv(EditorBottomPanel *this,List *param_1,bool param_2)

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
    PanelContainer::_get_property_listv((PanelContainer *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "EditorBottomPanel";
  local_70 = 0x11;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorBottomPanel";
  local_98 = 0;
  local_70 = 0x11;
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
  StringName::StringName((StringName *)&local_78,"EditorBottomPanel",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      PanelContainer::_get_property_listv((PanelContainer *)this,param_1,true);
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



/* VBoxContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall VBoxContainer::_get_property_listv(VBoxContainer *this,List *param_1,bool param_2)

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



/* VBoxContainer::is_class(String const&) const */

undefined8 __thiscall VBoxContainer::is_class(VBoxContainer *this,String *param_1)

{
  long lVar1;
  char *pcVar2;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined8 local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar1 = *(long *)(this + 8); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
    lVar3 = *(long *)(lVar1 + 0x20);
    if (lVar3 == 0) {
      local_60 = 0;
    }
    else {
      pcVar2 = *(char **)(lVar3 + 8);
      local_60 = 0;
      if (pcVar2 == (char *)0x0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
      }
      else {
        local_50 = strlen(pcVar2);
        local_58 = pcVar2;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar4 = String::operator==(param_1,(String *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if (cVar4 != '\0') goto LAB_001091d3;
  }
  cVar4 = String::operator==(param_1,"VBoxContainer");
  if (cVar4 == '\0') {
    for (lVar1 = *(long *)(this + 8); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
      lVar3 = *(long *)(lVar1 + 0x20);
      if (lVar3 == 0) {
        local_60 = 0;
      }
      else {
        pcVar2 = *(char **)(lVar3 + 8);
        local_60 = 0;
        if (pcVar2 == (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
        }
        else {
          local_50 = strlen(pcVar2);
          local_58 = pcVar2;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar4 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar4 != '\0') goto LAB_001091d3;
    }
    cVar4 = String::operator==(param_1,"BoxContainer");
    if (cVar4 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar5 = Container::is_class((Container *)this,param_1);
        return uVar5;
      }
      goto LAB_001092de;
    }
  }
LAB_001091d3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_001092de:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HBoxContainer::is_class(String const&) const */

undefined8 __thiscall HBoxContainer::is_class(HBoxContainer *this,String *param_1)

{
  long lVar1;
  char *pcVar2;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined8 local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar1 = *(long *)(this + 8); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
    lVar3 = *(long *)(lVar1 + 0x20);
    if (lVar3 == 0) {
      local_60 = 0;
    }
    else {
      pcVar2 = *(char **)(lVar3 + 8);
      local_60 = 0;
      if (pcVar2 == (char *)0x0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
      }
      else {
        local_50 = strlen(pcVar2);
        local_58 = pcVar2;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar4 = String::operator==(param_1,(String *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if (cVar4 != '\0') goto LAB_001093c3;
  }
  cVar4 = String::operator==(param_1,"HBoxContainer");
  if (cVar4 == '\0') {
    for (lVar1 = *(long *)(this + 8); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
      lVar3 = *(long *)(lVar1 + 0x20);
      if (lVar3 == 0) {
        local_60 = 0;
      }
      else {
        pcVar2 = *(char **)(lVar3 + 8);
        local_60 = 0;
        if (pcVar2 == (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
        }
        else {
          local_50 = strlen(pcVar2);
          local_58 = pcVar2;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar4 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar4 != '\0') goto LAB_001093c3;
    }
    cVar4 = String::operator==(param_1,"BoxContainer");
    if (cVar4 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar5 = Container::is_class((Container *)this,param_1);
        return uVar5;
      }
      goto LAB_001094ce;
    }
  }
LAB_001093c3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_001094ce:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* CowData<EditorBottomPanel::BottomPanelItem>::_unref() */

void __thiscall
CowData<EditorBottomPanel::BottomPanelItem>::_unref
          (CowData<EditorBottomPanel::BottomPanelItem> *this)

{
  long *plVar1;
  CowData<char32_t> *pCVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  CowData<char32_t> *this_00;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    pCVar2 = *(CowData<char32_t> **)this;
    if (pCVar2 != (CowData<char32_t> *)0x0) {
      lVar3 = *(long *)(pCVar2 + -8);
      *(undefined8 *)this = 0;
      if (lVar3 != 0) {
        lVar5 = 0;
        this_00 = pCVar2;
        do {
          lVar5 = lVar5 + 1;
          CowData<char32_t>::_unref(this_00);
          this_00 = this_00 + 0x18;
        } while (lVar3 != lVar5);
      }
      Memory::free_static(pCVar2 + -0x10,false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* EditorBottomPanel::~EditorBottomPanel() */

void __thiscall EditorBottomPanel::~EditorBottomPanel(EditorBottomPanel *this)

{
  Object *pOVar1;
  char cVar2;
  bool bVar3;
  
  *(undefined ***)this = &PTR__initialize_classv_00109ec0;
  CowData<EditorBottomPanel::BottomPanelItem>::_unref
            ((CowData<EditorBottomPanel::BottomPanelItem> *)(this + 0xa10));
  *(code **)this = Memory::realloc_static;
  if (*(long *)(this + 0xa00) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa00);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  bVar3 = StringName::configured != '\0';
  *(code **)this = Container::_notification;
  if (bVar3) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010966e;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010966e:
  Control::~Control((Control *)this);
  return;
}



/* CowData<EditorBottomPanel::BottomPanelItem>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<EditorBottomPanel::BottomPanelItem>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* EditorBottomPanel::~EditorBottomPanel() */

void __thiscall EditorBottomPanel::~EditorBottomPanel(EditorBottomPanel *this)

{
  Object *pOVar1;
  char cVar2;
  bool bVar3;
  
  *(undefined ***)this = &PTR__initialize_classv_00109ec0;
  CowData<EditorBottomPanel::BottomPanelItem>::_unref
            ((CowData<EditorBottomPanel::BottomPanelItem> *)(this + 0xa10));
  *(code **)this = Memory::realloc_static;
  if (*(long *)(this + 0xa00) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa00);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  bVar3 = StringName::configured != '\0';
  *(code **)this = Container::_notification;
  if (bVar3) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010974e;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010974e:
  Control::~Control((Control *)this);
  operator_delete(this,0xa70);
  return;
}



/* CowData<EditorBottomPanel::BottomPanelItem>::_realloc(long) */

undefined8 __thiscall
CowData<EditorBottomPanel::BottomPanelItem>::_realloc
          (CowData<EditorBottomPanel::BottomPanelItem> *this,long param_1)

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
/* Error CowData<EditorBottomPanel::BottomPanelItem>::resize<false>(long) */

undefined8 __thiscall
CowData<EditorBottomPanel::BottomPanelItem>::resize<false>
          (CowData<EditorBottomPanel::BottomPanelItem> *this,long param_1)

{
  code *pcVar1;
  undefined1 (*pauVar2) [16];
  undefined8 *puVar3;
  undefined1 (*pauVar4) [16];
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
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
    lVar6 = 0;
    lVar8 = 0;
  }
  else {
    lVar6 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar6) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar8 = lVar6 * 0x18;
    if (lVar8 != 0) {
      uVar9 = lVar8 - 1U | lVar8 - 1U >> 1;
      uVar9 = uVar9 | uVar9 >> 2;
      uVar9 = uVar9 | uVar9 >> 4;
      uVar9 = uVar9 | uVar9 >> 8;
      uVar9 = uVar9 | uVar9 >> 0x10;
      lVar8 = (uVar9 | uVar9 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x18 == 0) {
LAB_00109b50:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar9 = param_1 * 0x18 - 1;
  uVar9 = uVar9 >> 1 | uVar9;
  uVar9 = uVar9 | uVar9 >> 2;
  uVar9 = uVar9 | uVar9 >> 4;
  uVar9 = uVar9 | uVar9 >> 8;
  uVar9 = uVar9 | uVar9 >> 0x10;
  uVar9 = uVar9 | uVar9 >> 0x20;
  lVar11 = uVar9 + 1;
  if (lVar11 == 0) goto LAB_00109b50;
  uVar10 = param_1;
  if (param_1 <= lVar6) {
    while (lVar6 = *(long *)this, lVar6 != 0) {
      if (*(ulong *)(lVar6 + -8) <= uVar10) {
        if (lVar11 != lVar8) {
          uVar5 = _realloc(this,lVar11);
          if ((int)uVar5 != 0) {
            return uVar5;
          }
          lVar6 = *(long *)this;
          if (lVar6 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
        }
        *(long *)(lVar6 + -8) = param_1;
        return 0;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)(lVar6 + uVar10 * 0x18));
      uVar10 = uVar10 + 1;
    }
    goto LAB_00109ba6;
  }
  if (lVar11 == lVar8) {
LAB_00109ac3:
    puVar7 = *(undefined8 **)this;
    if (puVar7 == (undefined8 *)0x0) {
LAB_00109ba6:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar6 = puVar7[-1];
    if (param_1 <= lVar6) goto LAB_00109a2d;
  }
  else {
    if (lVar6 != 0) {
      uVar5 = _realloc(this,lVar11);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      goto LAB_00109ac3;
    }
    puVar3 = (undefined8 *)Memory::alloc_static(uVar9 + 0x11,false);
    if (puVar3 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar7 = puVar3 + 2;
    *puVar3 = 1;
    puVar3[1] = 0;
    *(undefined8 **)this = puVar7;
    lVar6 = 0;
  }
  pauVar4 = (undefined1 (*) [16])(puVar7 + lVar6 * 3);
  do {
    *(undefined8 *)pauVar4[1] = 0;
    pauVar2 = pauVar4 + 1;
    *pauVar4 = (undefined1  [16])0x0;
    pauVar4 = (undefined1 (*) [16])(*pauVar2 + 8);
  } while ((undefined1 (*) [16])(*pauVar2 + 8) != (undefined1 (*) [16])(puVar7 + param_1 * 3));
LAB_00109a2d:
  puVar7[-1] = param_1;
  return 0;
}



/* EditorBottomPanel::_notification(int) */

void EditorBottomPanel::_GLOBAL__sub_I__notification(void)

{
  if (PopupMenu::base_property_helper != '\0') {
    return;
  }
  PopupMenu::base_property_helper = 1;
  PopupMenu::base_property_helper._56_8_ = 2;
  PopupMenu::base_property_helper._64_8_ = 0;
  PopupMenu::base_property_helper._0_16_ = (undefined1  [16])0x0;
  PopupMenu::base_property_helper._24_16_ = (undefined1  [16])0x0;
  PopupMenu::base_property_helper._40_16_ = (undefined1  [16])0x0;
  __cxa_atexit(PropertyListHelper::~PropertyListHelper,PopupMenu::base_property_helper,&__dso_handle
              );
  return;
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
/* CallableCustomMethodPointer<ScrollContainer, void, Control*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ScrollContainer,void,Control*>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ScrollContainer,void,Control*> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorBottomPanel, void, bool, Control*,
   bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorBottomPanel,void,bool,Control*,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorBottomPanel,void,bool,Control*,bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorBottomPanel, bool, Vector2 const&, Variant const&, Button*,
   Control*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorBottomPanel,bool,Vector2_const&,Variant_const&,Button*,Control*>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorBottomPanel,bool,Vector2_const&,Variant_const&,Button*,Control*>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorBottomPanel, void, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorBottomPanel,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorBottomPanel,void,bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorBottomPanel, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorBottomPanel,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorBottomPanel,void> *this)

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
/* EditorBottomPanel::~EditorBottomPanel() */

void __thiscall EditorBottomPanel::~EditorBottomPanel(EditorBottomPanel *this)

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




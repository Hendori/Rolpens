
/* ScreenSelect::_emit_screen_signal(int) */

void __thiscall ScreenSelect::_emit_screen_signal(ScreenSelect *this,int param_1)

{
  char cVar1;
  long in_FS_OFFSET;
  long local_80;
  Variant *local_78 [2];
  int local_68 [6];
  undefined8 local_50;
  undefined1 local_48 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  cVar1 = BaseButton::is_disabled();
  if (cVar1 == '\0') {
    StringName::StringName((StringName *)&local_80,"request_open_in_screen",false);
    Variant::Variant((Variant *)local_68,param_1);
    local_50 = 0;
    local_48 = (undefined1  [16])0x0;
    local_78[0] = (Variant *)local_68;
    (**(code **)(*(long *)this + 0xd0))(this,(StringName *)&local_80,local_78,1);
    if (Variant::needs_deinit[(int)local_50] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_68[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ScreenSelect::_handle_mouse_shortcut(Ref<InputEvent> const&) */

void __thiscall ScreenSelect::_handle_mouse_shortcut(ScreenSelect *this,Ref *param_1)

{
  char cVar1;
  int iVar2;
  Object *pOVar3;
  
  if (*(long *)param_1 != 0) {
    pOVar3 = (Object *)
             __dynamic_cast(*(long *)param_1,&Object::typeinfo,&InputEventMouseButton::typeinfo,0);
    if (pOVar3 != (Object *)0x0) {
      cVar1 = RefCounted::reference();
      if (cVar1 != '\0') {
        cVar1 = InputEvent::is_pressed();
        if (cVar1 != '\0') {
          iVar2 = InputEventMouseButton::get_button_index();
          if (iVar2 == 1) {
            Node::get_window();
            iVar2 = Window::get_current_screen();
            _emit_screen_signal(this,iVar2);
            Control::accept_event();
          }
        }
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(pOVar3);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
            return;
          }
        }
      }
    }
  }
  return;
}



/* WindowWrapper::_window_size_changed() */

void __thiscall WindowWrapper::_window_size_changed(WindowWrapper *this)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (_window_size_changed()::{lambda()#1}::operator()()::sname == '\0') {
    iVar2 = __cxa_guard_acquire(&_window_size_changed()::{lambda()#1}::operator()()::sname);
    if (iVar2 != 0) {
      _scs_create((char *)&_window_size_changed()::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &_window_size_changed()::{lambda()#1}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&_window_size_changed()::{lambda()#1}::operator()()::sname);
    }
  }
  (**(code **)(*(long *)this + 0xd0))
            (this,&_window_size_changed()::{lambda()#1}::operator()()::sname,0,0);
  if (Variant::needs_deinit[0] != '\0') {
    Variant::_clear_internal();
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WindowWrapper::~WindowWrapper() */

void __thiscall WindowWrapper::~WindowWrapper(WindowWrapper *this)

{
  long lVar1;
  Object *pOVar2;
  char cVar3;
  uint uVar4;
  ulong *puVar5;
  long in_FS_OFFSET;
  bool bVar6;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar4 = (uint)*(ulong *)(this + 0xa28) & 0xffffff;
  bVar6 = uVar4 < (uint)ObjectDB::slot_max;
  *(undefined ***)this = &PTR__initialize_classv_0010ccd0;
  if (bVar6) {
    while( true ) {
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
    puVar5 = (ulong *)((ulong)uVar4 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0xa28) >> 0x18 & 0x7fffffffff) == (*puVar5 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar5[1] != 0) {
        ProgressDialog::remove_host_window(ProgressDialog::singleton);
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
  if ((*(long *)(this + 0xa38) != 0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) {
    pOVar2 = *(Object **)(this + 0xa38);
    cVar3 = predelete_handler(pOVar2);
    if (cVar3 != '\0') {
      (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
      Memory::free_static(pOVar2,false);
    }
  }
  bVar6 = StringName::configured != '\0';
  *(code **)this = StringName::assign_static_unique_class_name;
  if ((bVar6) &&
     (((*(long *)(this + 0x9e8) == 0 || (StringName::unref(), StringName::configured != '\0')) &&
      (*(long *)(this + 0x9d0) != 0)))) {
    StringName::unref();
  }
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  Control::~Control((Control *)this);
  return;
}



/* WindowWrapper::~WindowWrapper() */

void __thiscall WindowWrapper::~WindowWrapper(WindowWrapper *this)

{
  ~WindowWrapper(this);
  operator_delete(this,0xa48);
  return;
}



/* WindowWrapper::_get_default_window_rect() const */

void WindowWrapper::_get_default_window_rect(void)

{
  Control::get_screen_rect();
  return;
}



/* WindowWrapper::_get_wrapped_control_parent() const */

long __thiscall WindowWrapper::_get_wrapped_control_parent(WindowWrapper *this)

{
  if (*(long *)(this + 0xa18) != 0) {
    return *(long *)(this + 0xa18);
  }
  return *(long *)(this + 0xa20);
}



/* WindowWrapper::_notification(int) */

void __thiscall WindowWrapper::_notification(WindowWrapper *this,int param_1)

{
  StringName *pSVar1;
  char cVar2;
  long in_FS_OFFSET;
  Object *local_40;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0xa20) != 0) {
    if (param_1 == 0x1f) {
      cVar2 = Window::is_visible();
      if (cVar2 != '\0') {
        cVar2 = CanvasItem::is_visible();
        if (cVar2 != '\0') {
          if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
            Window::grab_focus();
            return;
          }
          goto LAB_0010068d;
        }
      }
    }
    else if (param_1 == 0x2d) {
      pSVar1 = *(StringName **)(this + 0xa30);
      StringName::StringName((StringName *)&local_38,"PanelForeground",false);
      Control::get_theme_stylebox((StringName *)&local_40,(StringName *)this);
      Control::add_theme_style_override(pSVar1,(Ref *)(SceneStringNames::singleton + 600));
      if (local_40 != (Object *)0x0) {
        cVar2 = RefCounted::unreference();
        if (cVar2 != '\0') {
          cVar2 = predelete_handler(local_40);
          if (cVar2 != '\0') {
            (**(code **)(*(long *)local_40 + 0x140))(local_40);
            Memory::free_static(local_40,false);
          }
        }
      }
      if ((StringName::configured != '\0') && (local_38 != 0)) {
        StringName::unref();
      }
    }
    else if (param_1 == 0xd) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        Node::set_process_shortcut_input(SUB81(this,0));
        return;
      }
      goto LAB_0010068d;
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010068d:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WindowWrapper::set_wrapped_control(Control*, Ref<Shortcut> const&) */

void __thiscall
WindowWrapper::set_wrapped_control(WindowWrapper *this,Control *param_1,Ref *param_2)

{
  Object *pOVar1;
  Object *pOVar2;
  char cVar3;
  
  if (param_1 == (Control *)0x0) {
    _err_print_error("set_wrapped_control","editor/window_wrapper.cpp",0xb2,
                     "Parameter \"p_control\" is null.",0,0);
    return;
  }
  if (*(long *)(this + 0xa10) == 0) {
    *(Control **)(this + 0xa10) = param_1;
    pOVar1 = *(Object **)(this + 0xa38);
    pOVar2 = *(Object **)param_2;
    if (pOVar2 != pOVar1) {
      *(Object **)(this + 0xa38) = pOVar2;
      if (pOVar2 != (Object *)0x0) {
        cVar3 = RefCounted::reference();
        if (cVar3 == '\0') {
          *(undefined8 *)(this + 0xa38) = 0;
        }
      }
      if (pOVar1 != (Object *)0x0) {
        cVar3 = RefCounted::unreference();
        if (cVar3 != '\0') {
          cVar3 = predelete_handler(pOVar1);
          if (cVar3 != '\0') {
            (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
            Memory::free_static(pOVar1,false);
          }
        }
      }
    }
    Node::add_child(this,param_1,0,0);
    return;
  }
  _err_print_error("set_wrapped_control","editor/window_wrapper.cpp",0xb3,
                   "Condition \"wrapped_control\" is true.",0,0);
  return;
}



/* WindowWrapper::get_wrapped_control() const */

undefined8 __thiscall WindowWrapper::get_wrapped_control(WindowWrapper *this)

{
  return *(undefined8 *)(this + 0xa10);
}



/* WindowWrapper::is_window_available() const */

bool __thiscall WindowWrapper::is_window_available(WindowWrapper *this)

{
  return *(long *)(this + 0xa20) != 0;
}



/* WindowWrapper::get_window_enabled() const */

undefined8 __thiscall WindowWrapper::get_window_enabled(WindowWrapper *this)

{
  undefined8 uVar1;
  
  if (*(long *)(this + 0xa20) != 0) {
    uVar1 = Window::is_visible();
    return uVar1;
  }
  return 0;
}



/* WindowWrapper::get_window_rect() const */

undefined1  [16] __thiscall WindowWrapper::get_window_rect(WindowWrapper *this)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  if (*(long *)(this + 0xa20) != 0) {
    cVar1 = Window::is_visible();
    if (cVar1 != '\0') {
      uVar2 = Window::get_size();
      auVar3._0_8_ = Window::get_position();
      auVar3._8_8_ = uVar2;
      return auVar3;
    }
  }
  _err_print_error("get_window_rect","editor/window_wrapper.cpp",0xd7,
                   "Condition \"!get_window_enabled()\" is true. Returning: Rect2i()",0,0);
  return ZEXT816(0);
}



/* WindowWrapper::get_window_screen() const */

undefined8 __thiscall WindowWrapper::get_window_screen(WindowWrapper *this)

{
  char cVar1;
  undefined8 uVar2;
  
  if (*(long *)(this + 0xa20) != 0) {
    cVar1 = Window::is_visible();
    if (cVar1 != '\0') {
      uVar2 = Window::get_current_screen();
      return uVar2;
    }
  }
  _err_print_error("get_window_screen","editor/window_wrapper.cpp",0xdc,
                   "Condition \"!get_window_enabled()\" is true. Returning: -1",0,0);
  return 0xffffffff;
}



/* WindowWrapper::set_window_title(String const&) */

void WindowWrapper::set_window_title(String *param_1)

{
  if (*(String **)(param_1 + 0xa20) != (String *)0x0) {
    Window::set_title(*(String **)(param_1 + 0xa20));
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WindowWrapper::set_margins_enabled(bool) */

void __thiscall WindowWrapper::set_margins_enabled(WindowWrapper *this,bool param_1)

{
  StringName *pSVar1;
  MarginContainer *this_00;
  int iVar2;
  long in_FS_OFFSET;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0xa20) != 0) {
    if (param_1) {
      if (*(long *)(this + 0xa18) == 0) {
        EditorScale::get_scale();
        this_00 = (MarginContainer *)operator_new(0xa10,"");
        MarginContainer::MarginContainer(this_00);
        postinitialize_handler((Object *)this_00);
        *(MarginContainer **)(this + 0xa18) = this_00;
        StringName::StringName((StringName *)&local_38,"margin_right",false);
        iVar2 = (int)(StringName *)&local_38;
        Control::add_theme_constant_override((StringName *)this_00,iVar2);
        if ((StringName::configured != '\0') && (local_38 != 0)) {
          StringName::unref();
        }
        pSVar1 = *(StringName **)(this + 0xa18);
        StringName::StringName((StringName *)&local_38,"margin_top",false);
        Control::add_theme_constant_override(pSVar1,iVar2);
        if ((StringName::configured != '\0') && (local_38 != 0)) {
          StringName::unref();
        }
        pSVar1 = *(StringName **)(this + 0xa18);
        StringName::StringName((StringName *)&local_38,"margin_left",false);
        Control::add_theme_constant_override(pSVar1,iVar2);
        if ((StringName::configured != '\0') && (local_38 != 0)) {
          StringName::unref();
        }
        pSVar1 = *(StringName **)(this + 0xa18);
        StringName::StringName((StringName *)&local_38,"margin_bottom",false);
        Control::add_theme_constant_override(pSVar1,iVar2);
        if ((StringName::configured != '\0') && (local_38 != 0)) {
          StringName::unref();
        }
        Node::add_child(*(undefined8 *)(this + 0xa20),*(undefined8 *)(this + 0xa18),0,0);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
          Control::set_anchors_and_offsets_preset(*(undefined8 *)(this + 0xa18),0xf,0,0);
          return;
        }
        goto LAB_00100ade;
      }
    }
    else if (*(long *)(this + 0xa18) != 0) {
      Node::queue_free();
      *(undefined8 *)(this + 0xa18) = 0;
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00100ade:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WindowWrapper::get_margins_size() */

void __thiscall WindowWrapper::get_margins_size(WindowWrapper *this)

{
  if (*(long *)(this + 0xa18) != 0) {
    MarginContainer::get_margin_size(*(long *)(this + 0xa18),1);
    MarginContainer::get_margin_size(*(undefined8 *)(this + 0xa18),2);
    MarginContainer::get_margin_size(*(undefined8 *)(this + 0xa18),0);
    MarginContainer::get_margin_size(*(undefined8 *)(this + 0xa18),2);
  }
  return;
}



/* WindowWrapper::get_margins_top_left() */

void __thiscall WindowWrapper::get_margins_top_left(WindowWrapper *this)

{
  if (*(long *)(this + 0xa18) != 0) {
    MarginContainer::get_margin_size(*(long *)(this + 0xa18),1);
    MarginContainer::get_margin_size(*(undefined8 *)(this + 0xa18),0);
  }
  return;
}



/* WindowWrapper::grab_window_focus() */

void __thiscall WindowWrapper::grab_window_focus(WindowWrapper *this)

{
  char cVar1;
  
  if (*(long *)(this + 0xa20) != 0) {
    cVar1 = Window::is_visible();
    if (cVar1 != '\0') {
      cVar1 = CanvasItem::is_visible();
      if (cVar1 != '\0') {
        Window::grab_focus();
        return;
      }
    }
  }
  return;
}



/* WindowWrapper::set_override_close_request(bool) */

void __thiscall WindowWrapper::set_override_close_request(WindowWrapper *this,bool param_1)

{
  this[0xa40] = (WindowWrapper)param_1;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ScreenSelect::_notification(int) */

void __thiscall ScreenSelect::_notification(ScreenSelect *this,int param_1)

{
  Vector2i *pVVar1;
  code *pcVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  CallableCustom *this_00;
  long in_FS_OFFSET;
  long local_60;
  Object *local_58 [3];
  undefined4 local_40;
  float local_3c;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0xd) {
    pcVar2 = *(code **)(*(long *)this + 0x108);
    this_00 = (CallableCustom *)operator_new(0x48,"");
    CallableCustom::CallableCustom(this_00);
    *(undefined **)(this_00 + 0x20) = &_LC22;
    *(undefined1 (*) [16])(this_00 + 0x30) = (undefined1  [16])0x0;
    *(undefined ***)this_00 = &PTR_hash_0010d608;
    *(undefined8 *)(this_00 + 0x40) = 0;
    uVar3 = *(undefined8 *)(this + 0x60);
    *(undefined8 *)(this_00 + 0x10) = 0;
    *(undefined8 *)(this_00 + 0x30) = uVar3;
    *(code **)(this_00 + 0x38) = _handle_mouse_shortcut;
    *(ScreenSelect **)(this_00 + 0x28) = this;
    CallableCustomMethodPointerBase::_setup((uint *)this_00,(int)this_00 + 0x28);
    *(char **)(this_00 + 0x20) = "ScreenSelect::_handle_mouse_shortcut";
    Callable::Callable((Callable *)local_58,this_00);
    (*pcVar2)(this,SceneStringNames::singleton + 0x28,(Callable *)local_58,0);
    Callable::~Callable((Callable *)local_58);
  }
  else if (param_1 == 0x2d) {
    StringName::StringName((StringName *)&local_60,"MakeFloating",false);
    Control::get_editor_theme_icon((StringName *)local_58);
    Button::set_button_icon((Ref *)this);
    if (local_58[0] != (Object *)0x0) {
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') {
        cVar4 = predelete_handler(local_58[0]);
        if (cVar4 != '\0') {
          (**(code **)(*(long *)local_58[0] + 0x140))(local_58[0]);
          Memory::free_static(local_58[0],false);
        }
      }
    }
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
    }
    local_58[0] = (Object *)0x0;
    iVar5 = Control::get_theme_font_size
                      ((StringName *)this,(StringName *)(SceneStringNames::singleton + 0xa8));
    if ((StringName::configured != '\0') && (local_58[0] != (Object *)0x0)) {
      StringName::unref();
    }
    local_3c = ((float)iVar5 + (float)iVar5) * __LC30;
    pVVar1 = *(Vector2i **)(this + 0xc10);
    local_40 = 0;
    local_38 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_40);
    Window::set_min_size(pVVar1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ScreenSelect::_show_popup() */

void __thiscall ScreenSelect::_show_popup(ScreenSelect *this)

{
  Vector2i *pVVar1;
  char cVar2;
  int iVar3;
  long in_FS_OFFSET;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 600) != 0) {
    Viewport::get_canvas_transform();
    uVar4 = Transform2D::get_scale();
    uVar5 = Control::get_size();
    pVVar1 = *(Vector2i **)(this + 0xc10);
    fVar7 = (float)uVar5 * (float)uVar4;
    local_50 = (ulong)(uint)fVar7;
    local_48 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_50);
    Window::set_size(pVVar1);
    uVar6 = Control::get_screen_position();
    local_50._4_4_ = (float)((ulong)uVar6 >> 0x20);
    local_50._0_4_ = (float)uVar6;
    local_50 = CONCAT44((float)((ulong)uVar5 >> 0x20) * (float)((ulong)uVar4 >> 0x20) +
                        local_50._4_4_,(float)local_50);
    cVar2 = (**(code **)(*(long *)this + 0x340))(this);
    if (cVar2 != '\0') {
      iVar3 = Window::get_size();
      local_50 = CONCAT44(local_50._4_4_,(fVar7 - (float)iVar3) + (float)local_50);
    }
    pVVar1 = *(Vector2i **)(this + 0xc10);
    local_48 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_50);
    Window::set_position(pVVar1);
    local_48 = 0;
    local_40 = 0;
    (**(code **)(**(long **)(this + 0xc10) + 0x240))(*(long **)(this + 0xc10),&local_48);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WindowWrapper::WindowWrapper() */

void __thiscall WindowWrapper::WindowWrapper(WindowWrapper *this)

{
  undefined8 uVar1;
  long *plVar2;
  code *pcVar3;
  char cVar4;
  Window *this_00;
  Node *this_01;
  Panel *this_02;
  long in_FS_OFFSET;
  long local_60;
  WindowWrapper local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  MarginContainer::MarginContainer((MarginContainer *)this);
  *(undefined8 *)(this + 0xa20) = 0;
  *(undefined ***)this = &PTR__initialize_classv_0010ccd0;
  *(undefined8 *)(this + 0xa28) = 0;
  this[0xa40] = (WindowWrapper)0x0;
  *(undefined1 (*) [16])(this + 0xa10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa30) = (undefined1  [16])0x0;
  cVar4 = EditorNode::is_multi_window_enabled();
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    this_00 = (Window *)operator_new(0xd68,"");
    Window::Window(this_00);
    postinitialize_handler((Object *)this_00);
    uVar1 = *(undefined8 *)(this_00 + 0x60);
    *(Window **)(this + 0xa20) = this_00;
    *(undefined8 *)(this + 0xa28) = uVar1;
    Window::set_wrap_controls(SUB81(this_00,0));
    Node::add_child(this,*(undefined8 *)(this + 0xa20),0,0);
    Window::hide();
    plVar2 = *(long **)(this + 0xa20);
    pcVar3 = *(code **)(*plVar2 + 0x108);
    create_custom_callable_function_pointer<WindowWrapper>
              (local_58,(char *)this,(_func_void *)"&WindowWrapper::_window_close_request");
    StringName::StringName((StringName *)&local_60,"close_requested",false);
    (*pcVar3)(plVar2,(StringName *)&local_60,local_58,0);
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
    }
    Callable::~Callable((Callable *)local_58);
    plVar2 = *(long **)(this + 0xa20);
    pcVar3 = *(code **)(*plVar2 + 0x108);
    create_custom_callable_function_pointer<WindowWrapper>
              (local_58,(char *)this,(_func_void *)"&WindowWrapper::_window_size_changed");
    StringName::StringName((StringName *)&local_60,"size_changed",false);
    (*pcVar3)(plVar2,(StringName *)&local_60,local_58,0);
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
    }
    Callable::~Callable((Callable *)local_58);
    this_01 = (Node *)operator_new(0x408,"");
    Node::Node(this_01);
    *(undefined ***)this_01 = &PTR__initialize_classv_0010cb00;
    postinitialize_handler((Object *)this_01);
    Node::add_child(*(undefined8 *)(this + 0xa20),this_01,0,0);
    this_02 = (Panel *)operator_new(0x9d0,"");
    Panel::Panel(this_02);
    postinitialize_handler((Object *)this_02);
    *(Panel **)(this + 0xa30) = this_02;
    Control::set_anchors_and_offsets_preset(this_02,0xf,0,0);
    Node::add_child(*(undefined8 *)(this + 0xa20),*(undefined8 *)(this + 0xa30),0,0);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      ProgressDialog::add_host_window(ProgressDialog::singleton);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WindowWrapper::_set_window_rect(Rect2) */

void WindowWrapper::_set_window_rect(undefined8 param_1,undefined8 param_2,long param_3)

{
  Vector2i *pVVar1;
  bool bVar2;
  long in_FS_OFFSET;
  undefined8 local_78;
  undefined8 local_70 [2];
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined8 local_48 [3];
  long local_30;
  
  pVVar1 = *(Vector2i **)(param_3 + 0xa20);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = param_1;
  local_70[0] = param_2;
  local_48[0] = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_78);
  Window::set_position(pVVar1);
  pVVar1 = *(Vector2i **)(param_3 + 0xa20);
  local_48[0] = Vector2::operator_cast_to_Vector2i((Vector2 *)local_70);
  Window::set_size(pVVar1);
  local_58 = "interface/multi_window/maximize_window";
  local_60 = 0;
  local_50 = 0x26;
  String::parse_latin1((StrRange *)&local_60);
  _EDITOR_GET((String *)local_48);
  bVar2 = Variant::operator_cast_to_bool((Variant *)local_48);
  if (Variant::needs_deinit[(int)local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  if (bVar2) {
    Window::set_mode(*(undefined8 *)(param_3 + 0xa20),2);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WindowWrapper::_set_window_enabled_with_rect(bool, Rect2) */

void WindowWrapper::_set_window_enabled_with_rect
               (undefined8 param_1,undefined8 param_2,long *param_3,bool param_4)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long in_FS_OFFSET;
  long local_80;
  Variant *local_78 [2];
  int local_68 [2];
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined1 local_48 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3[0x142] == 0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("_set_window_enabled_with_rect","editor/window_wrapper.cpp",0x59,
                       "Parameter \"wrapped_control\" is null.",0,0);
      return;
    }
    goto LAB_001016aa;
  }
  if (param_3[0x144] != 0) {
    cVar1 = Window::is_visible();
    if ((bool)cVar1 == param_4) {
      if (cVar1 != '\0') {
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
          Window::grab_focus();
          return;
        }
        goto LAB_001016aa;
      }
    }
    else {
      lVar3 = param_3[0x143];
      if (lVar3 == 0) {
        lVar3 = param_3[0x144];
      }
      lVar2 = Node::get_parent();
      if (lVar3 == lVar2) {
        if (param_4 == false) {
          (**(code **)(*(long *)param_3[0x142] + 0x198))((long *)param_3[0x142],param_3,0);
          (**(code **)(*(long *)param_3[0x144] + 0x238))((long *)param_3[0x144],0);
          goto LAB_00101481;
        }
        (**(code **)(*(long *)param_3[0x144] + 0x238))((long *)param_3[0x144],1);
      }
      else {
        (**(code **)(*(long *)param_3[0x142] + 0x198))((long *)param_3[0x142],lVar3,0);
        _set_window_rect(param_1,param_2,param_3);
        Control::set_anchors_and_offsets_preset(param_3[0x142],0xf,0,0);
        (**(code **)(*(long *)param_3[0x144] + 0x238))((long *)param_3[0x144],param_4);
        if (param_4 == false) {
LAB_00101481:
          if ((char)param_3[0x148] == '\0') {
            StringName::StringName((StringName *)&local_80,"window_close_requested",false);
            local_60 = (undefined1  [16])0x0;
            local_68[0] = 0;
            local_68[1] = 0;
            (**(code **)(*param_3 + 0xd0))(param_3,(StringName *)&local_80,0,0);
            if (Variant::needs_deinit[local_68[0]] != '\0') {
              Variant::_clear_internal();
            }
            if ((StringName::configured != '\0') && (local_80 != 0)) {
              StringName::unref();
            }
          }
        }
      }
      StringName::StringName((StringName *)&local_80,"window_visibility_changed",false);
      Variant::Variant((Variant *)local_68,param_4);
      local_50 = 0;
      local_48 = (undefined1  [16])0x0;
      local_78[0] = (Variant *)local_68;
      (**(code **)(*param_3 + 0xd0))(param_3,(StringName *)&local_80,local_78,1);
      if (Variant::needs_deinit[(int)local_50] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_68[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_80 != 0)) {
        StringName::unref();
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001016aa:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WindowWrapper::set_window_enabled(bool) */

void __thiscall WindowWrapper::set_window_enabled(WindowWrapper *this,bool param_1)

{
  Control::get_screen_rect();
  _set_window_enabled_with_rect(this,param_1);
  return;
}



/* WindowWrapper::restore_window(Rect2i const&, int) */

void __thiscall WindowWrapper::restore_window(WindowWrapper *this,Rect2i *param_1,int param_2)

{
  int iVar1;
  
  if (*(long *)(this + 0xa20) == 0) {
    _err_print_error("restore_window","editor/window_wrapper.cpp",0xe1,
                     "Condition \"!is_window_available()\" is true.",0,0);
    return;
  }
  if (-1 < param_2) {
    iVar1 = (**(code **)(*DisplayServer::singleton + 0x3f8))();
    if (param_2 < iVar1) {
      Rect2i::operator_cast_to_Rect2(param_1);
      _set_window_enabled_with_rect(this,1);
      Window::set_current_screen((int)*(undefined8 *)(this + 0xa20));
      return;
    }
  }
  iVar1 = (**(code **)(*DisplayServer::singleton + 0x3f8))();
  _err_print_index_error
            ("restore_window","editor/window_wrapper.cpp",0xe2,(long)param_2,(long)iVar1,"p_screen",
             "DisplayServer::get_singleton()->get_screen_count()","",false,false);
  return;
}



/* WindowWrapper::release_wrapped_control() */

long __thiscall WindowWrapper::release_wrapped_control(WindowWrapper *this)

{
  long lVar1;
  Node *pNVar2;
  
  Control::get_screen_rect();
  _set_window_enabled_with_rect(this,0);
  lVar1 = *(long *)(this + 0xa10);
  if (lVar1 != 0) {
    pNVar2 = (Node *)Node::get_parent();
    Node::remove_child(pNVar2);
    *(undefined8 *)(this + 0xa10) = 0;
  }
  return lVar1;
}



/* WindowWrapper::_window_close_request() */

void __thiscall WindowWrapper::_window_close_request(WindowWrapper *this)

{
  long in_FS_OFFSET;
  long local_40;
  undefined8 local_38;
  undefined1 local_30 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (this[0xa40] == (WindowWrapper)0x0) {
    Control::get_screen_rect();
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      _set_window_enabled_with_rect(this,0);
      return;
    }
  }
  else {
    StringName::StringName((StringName *)&local_40,"window_close_requested",false);
    local_30 = (undefined1  [16])0x0;
    local_38 = 0;
    (**(code **)(*(long *)this + 0xd0))(this,(StringName *)&local_40,0,0);
    if (Variant::needs_deinit[(int)local_38] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_40 != 0)) {
      StringName::unref();
    }
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WindowWrapper::shortcut_input(Ref<InputEvent> const&) */

void WindowWrapper::shortcut_input(Ref *param_1)

{
  char cVar1;
  
  if (*(Ref **)(param_1 + 0xa38) != (Ref *)0x0) {
    cVar1 = Shortcut::matches_event(*(Ref **)(param_1 + 0xa38));
    if (cVar1 != '\0') {
      Control::get_screen_rect();
      _set_window_enabled_with_rect(param_1,1);
      return;
    }
  }
  return;
}



/* WindowWrapper::restore_window_from_saved_position(Rect2, int, Rect2) */

void WindowWrapper::restore_window_from_saved_position
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               long param_5,int param_6)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  char cVar6;
  int iVar7;
  long *plVar8;
  undefined8 uVar9;
  long in_FS_OFFSET;
  float fVar10;
  float fVar11;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined8 local_b8;
  float fStack_a4;
  float fStack_9c;
  float local_98;
  float fStack_94;
  float local_90;
  float fStack_8c;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined8 local_50;
  long local_40;
  
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = param_1;
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  auVar16._8_8_ = param_2;
  auVar16._0_8_ = param_1;
  auVar2._8_8_ = param_4;
  auVar2._0_8_ = param_3;
  auVar1._8_8_ = param_4;
  auVar1._0_8_ = param_3;
  auVar14._8_8_ = param_4;
  auVar14._0_8_ = param_3;
  auVar15._8_8_ = param_4;
  auVar15._0_8_ = param_3;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(param_5 + 0xa20) == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("restore_window_from_saved_position","editor/window_wrapper.cpp",0xe9,
                       "Condition \"!is_window_available()\" is true.",0,0);
      return;
    }
  }
  else {
    if ((param_6 < 0) ||
       (iVar7 = (**(code **)(*DisplayServer::singleton + 0x3f8))(), iVar7 <= param_6)) {
      plVar8 = (long *)Node::get_window();
      param_6 = (**(code **)(*plVar8 + 0x1e0))(plVar8);
    }
    local_68 = (**(code **)(*DisplayServer::singleton + 0x428))(DisplayServer::singleton,param_6);
    local_58 = 0;
    local_50 = 0;
    auVar13 = Rect2i::operator_cast_to_Rect2((Rect2i *)&local_58);
    if ((((float)param_3 == auVar13._0_4_) &&
        (fStack_9c = (float)((ulong)param_3 >> 0x20), auVar14 = auVar1, fStack_9c == auVar13._4_4_))
       && (local_90 = (float)param_4, auVar14 = auVar2, local_90 == auVar13._8_4_)) {
      fStack_8c = (float)((ulong)param_4 >> 0x20);
      auVar14 = auVar15;
      if (fStack_8c == auVar13._12_4_) {
        auVar14 = Rect2i::operator_cast_to_Rect2((Rect2i *)local_68);
      }
    }
    local_b8 = auVar14._8_8_;
    local_58 = 0;
    local_50 = 0;
    auVar15 = Rect2i::operator_cast_to_Rect2((Rect2i *)&local_58);
    if ((((float)param_1 == auVar15._0_4_) &&
        (fStack_a4 = (float)((ulong)param_1 >> 0x20), auVar16 = auVar3, fStack_a4 == auVar15._4_4_))
       && ((local_98 = (float)param_2, auVar16 = auVar4, local_98 == auVar15._8_4_ &&
           (fStack_94 = (float)((ulong)param_2 >> 0x20), auVar16 = auVar5,
           fStack_94 == auVar15._12_4_)))) {
      fVar10 = (float)_LC46 * auVar14._8_4_;
      fVar11 = _LC46._4_4_ * auVar14._12_4_;
      local_70 = CONCAT44(_LC47._4_4_ * auVar14._12_4_,(float)_LC47 * auVar14._8_4_);
      uVar9 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_70);
      local_78 = CONCAT44(fVar11 + auVar14._4_4_,fVar10 + auVar14._0_4_);
      local_58 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_78);
      local_50 = uVar9;
      auVar16 = Rect2i::operator_cast_to_Rect2((Rect2i *)&local_58);
    }
    auVar13._0_8_ = Vector2i::operator_cast_to_Vector2((Vector2i *)(local_68 + 8));
    auVar13._8_8_ = extraout_XMM0_Qb;
    auVar12._8_8_ = _LC48;
    auVar12._0_8_ = local_b8;
    auVar15 = divps(auVar13,auVar12);
    local_70 = CONCAT44(auVar15._4_4_ * auVar16._12_4_,auVar15._0_4_ * auVar16._8_4_);
    uVar9 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_70);
    local_78 = CONCAT44((auVar16._4_4_ - auVar14._4_4_) * auVar15._4_4_,
                        (auVar16._0_4_ - auVar14._0_4_) * auVar15._0_4_);
    local_58 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_78);
    local_50 = uVar9;
    auVar14 = Rect2i::operator_cast_to_Rect2((Rect2i *)&local_58);
    uVar9 = Vector2i::operator_cast_to_Vector2((Vector2i *)local_68);
    iVar7 = Window::get_mode();
    if (iVar7 == 1) {
      Window::set_mode(*(undefined8 *)(param_5 + 0xa20),0);
    }
    Window::set_current_screen((int)*(undefined8 *)(param_5 + 0xa20));
    cVar6 = Window::is_visible();
    if (cVar6 == '\0') {
      _set_window_enabled_with_rect
                (CONCAT44(auVar14._4_4_ + (float)((ulong)uVar9 >> 0x20),auVar14._0_4_ + (float)uVar9
                         ),auVar14._8_8_,param_5,1);
    }
    else {
      _set_window_rect(param_5);
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WindowWrapper::enable_window_on_screen(int, bool) */

void __thiscall WindowWrapper::enable_window_on_screen(WindowWrapper *this,int param_1,bool param_2)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  long in_FS_OFFSET;
  undefined8 uVar5;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 600) != 0) {
    __dynamic_cast(*(long *)(this + 600),&Object::typeinfo,&Window::typeinfo,0);
  }
  iVar3 = Window::get_current_screen();
  iVar4 = iVar3;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  if (param_2) {
    local_a0 = 0;
    String::parse_latin1((String *)&local_a0,"interface/multi_window/maximize_window");
    _EDITOR_GET((String *)local_58);
    bVar2 = Variant::operator_cast_to_bool((Variant *)local_58);
    if (Variant::needs_deinit[(int)local_58._0_4_] != '\0') {
      Variant::_clear_internal();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    if ((iVar4 != iVar3) && (!bVar2)) {
      local_88 = Control::get_screen_rect();
      local_78 = (**(code **)(*DisplayServer::singleton + 0x428))(DisplayServer::singleton,iVar3);
      local_68 = (**(code **)(*DisplayServer::singleton + 0x428))(DisplayServer::singleton,iVar4);
      uVar5 = Vector2i::operator_cast_to_Vector2((Vector2i *)(local_68 + 8));
      auVar6._0_8_ = Vector2i::operator_cast_to_Vector2((Vector2i *)(local_78 + 8));
      auVar6._8_8_ = extraout_XMM0_Qb;
      auVar7._8_8_ = _LC48;
      auVar7._0_8_ = uVar5;
      auVar6 = divps(auVar6,auVar7);
      uVar5 = Vector2i::operator_cast_to_Vector2((Vector2i *)local_78);
      fVar1 = local_88._4_4_;
      local_90 = CONCAT44(local_88._12_4_ * auVar6._4_4_,local_88._8_4_ * auVar6._0_4_);
      local_88._0_4_ = local_88._0_4_ - (float)uVar5;
      local_88._4_4_ = fVar1 - (float)((ulong)uVar5 >> 0x20);
      uVar5 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_90);
      local_98 = CONCAT44((float)local_88._4_4_ * auVar6._4_4_,(float)local_88._0_4_ * auVar6._0_4_)
      ;
      local_58._0_8_ = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_98);
      local_58._8_8_ = uVar5;
      local_88 = Rect2i::operator_cast_to_Rect2((Rect2i *)local_58);
      uVar5 = Vector2i::operator_cast_to_Vector2((Vector2i *)local_68);
      local_88._0_8_ =
           CONCAT44((float)((ulong)uVar5 >> 0x20) + local_88._4_4_,(float)uVar5 + local_88._0_4_);
      local_58 = Rect2::operator_cast_to_Rect2i((Rect2 *)local_88);
      restore_window(this,(Rect2i *)local_58,param_1);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00101ffd;
    }
  }
  Window::set_current_screen((int)*(undefined8 *)(this + 0xa20));
  Control::get_screen_rect();
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    _set_window_enabled_with_rect(this,1);
    return;
  }
LAB_00101ffd:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ScreenSelect::ScreenSelect() */

void __thiscall ScreenSelect::ScreenSelect(ScreenSelect *this)

{
  long lVar1;
  code *pcVar2;
  char cVar3;
  PopupPanel *this_00;
  MarginContainer *this_01;
  BoxContainer *this_02;
  Label *this_03;
  BoxContainer *this_04;
  int iVar4;
  bool bVar5;
  long in_FS_OFFSET;
  long local_70;
  undefined8 local_68 [2];
  long local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58[0] = 0;
  Button::Button((Button *)this,(String *)local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  *(undefined ***)this = &PTR__initialize_classv_0010d048;
  *(undefined1 (*) [16])(this + 0xc10) = (undefined1  [16])0x0;
  BaseButton::set_button_mask(this,2);
  bVar5 = SUB81(this,0);
  Button::set_flat(bVar5);
  BaseButton::set_toggle_mode(bVar5);
  Control::set_focus_mode(this,0);
  BaseButton::set_action_mode(this,0);
  cVar3 = EditorNode::is_multi_window_enabled();
  if (cVar3 == '\0') {
    BaseButton::set_disabled(bVar5);
    EditorNode::get_multiwindow_support_tooltip_text();
    Control::set_tooltip_text((String *)this);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  }
  else {
    local_58[0] = 0;
    String::parse_latin1((String *)local_58,"");
    local_68[0] = 0;
    String::parse_latin1
              ((String *)local_68,
               "Make this panel floating.\nRight-click to open the screen selector.");
    TTR((String *)&local_70,(String *)local_68);
    Control::set_tooltip_text((String *)this);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  }
  EditorScale::get_scale();
  this_00 = (PopupPanel *)operator_new(0xda0,"");
  PopupPanel::PopupPanel(this_00);
  postinitialize_handler((Object *)this_00);
  lVar1 = *(long *)this_00;
  *(PopupPanel **)(this + 0xc10) = this_00;
  pcVar2 = *(code **)(lVar1 + 0x108);
  create_custom_callable_function_pointer<BaseButton,bool>
            ((BaseButton *)local_58,(char *)this,(_func_void_bool *)"&ScreenSelect::set_pressed");
  Callable::bind<bool>(SUB81((Callable *)local_68,0));
  StringName::StringName((StringName *)&local_70,"popup_hide",false);
  (*pcVar2)(this_00,(StringName *)&local_70,(Callable *)local_68,0);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_68);
  Callable::~Callable((Callable *)local_58);
  Node::add_child(this,*(undefined8 *)(this + 0xc10),0,0);
  this_01 = (MarginContainer *)operator_new(0xa10,"");
  MarginContainer::MarginContainer(this_01);
  postinitialize_handler((Object *)this_01);
  StringName::StringName((StringName *)local_58,"margin_right",false);
  iVar4 = (int)(String *)local_58;
  Control::add_theme_constant_override((StringName *)this_01,iVar4);
  if ((StringName::configured != '\0') && (local_58[0] != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)local_58,"margin_top",false);
  Control::add_theme_constant_override((StringName *)this_01,iVar4);
  if ((StringName::configured != '\0') && (local_58[0] != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)local_58,"margin_left",false);
  Control::add_theme_constant_override((StringName *)this_01,iVar4);
  if ((StringName::configured != '\0') && (local_58[0] != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)local_58,"margin_bottom",false);
  Control::add_theme_constant_override((StringName *)this_01,iVar4);
  if ((StringName::configured != '\0') && (local_58[0] != 0)) {
    StringName::unref();
  }
  Node::add_child(*(undefined8 *)(this + 0xc10),this_01,0,0);
  this_02 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(this_02,true);
  this_02[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)this_02 = &PTR__initialize_classv_0010c788;
  postinitialize_handler((Object *)this_02);
  BoxContainer::set_alignment(this_02,1);
  Node::add_child(this_01,this_02,0,0);
  this_03 = (Label *)operator_new(0xad8,"");
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"");
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"Select Screen");
  TTR((String *)&local_70,(String *)local_68);
  Label::Label(this_03,(String *)&local_70);
  postinitialize_handler((Object *)this_03);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  Label::set_horizontal_alignment(this_03,1);
  Node::add_child(this_02,this_03,0,0);
  this_04 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(this_04,false);
  this_04[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)this_04 = &PTR__initialize_classv_0010c410;
  postinitialize_handler((Object *)this_04);
  *(BoxContainer **)(this + 0xc18) = this_04;
  BoxContainer::set_alignment(this_04,1);
  Node::add_child(this_02,*(undefined8 *)(this + 0xc18),0,0);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    Control::set_anchors_and_offsets_preset(this_01,0xf,0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ScreenSelect::_build_advanced_menu() */

void ScreenSelect::_build_advanced_menu(void)

{
  code *pcVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  CallableCustom *pCVar6;
  Button *this;
  StringName *in_RDI;
  long in_FS_OFFSET;
  float fVar7;
  undefined8 uVar8;
  undefined8 local_c8;
  undefined8 local_c0;
  Callable local_b8 [16];
  char *local_a8;
  undefined8 local_a0;
  undefined8 local_90;
  Vector2i *local_88;
  undefined8 local_78 [3];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  while( true ) {
    iVar3 = Node::get_child_count(SUB81(*(undefined8 *)(in_RDI + 0xc18),0));
    if (iVar3 < 1) break;
    Node::get_child((int)*(undefined8 *)(in_RDI + 0xc18),false);
    Node::remove_child(*(Node **)(in_RDI + 0xc18));
    Node::queue_free();
  }
  local_a8 = (char *)0x0;
  iVar3 = Control::get_theme_font_size(in_RDI,(StringName *)(SceneStringNames::singleton + 0xa8));
  fVar7 = (float)iVar3 * __LC60;
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  Node::get_window();
  iVar4 = Window::get_current_screen();
  iVar3 = 0;
  while( true ) {
    iVar5 = (**(code **)(*DisplayServer::singleton + 0x3f8))();
    if (iVar5 <= iVar3) break;
    this = (Button *)operator_new(0xc10,"");
    local_a8 = (char *)0x0;
    Button::Button(this,(String *)&local_a8);
    postinitialize_handler((Object *)this);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    local_78[0] = (**(code **)(*DisplayServer::singleton + 0x420))(DisplayServer::singleton,iVar3);
    uVar8 = Vector2i::operator_cast_to_Vector2((Vector2i *)local_78);
    local_90 = CONCAT44(fVar7,((float)uVar8 / (float)((ulong)uVar8 >> 0x20)) * fVar7);
    Control::set_custom_minimum_size((Vector2 *)this);
    Node::add_child(*(undefined8 *)(in_RDI + 0xc18),this,0,0);
    itos((long)&local_a8);
    Button::set_text((String *)this);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    Button::set_text_alignment(this,1);
    local_a8 = "";
    local_c0 = 0;
    local_a0 = 0;
    String::parse_latin1((StrRange *)&local_c0);
    local_a8 = "Make this panel floating in the screen %d.";
    local_c8 = 0;
    local_a0 = 0x2a;
    String::parse_latin1((StrRange *)&local_c8);
    TTR((String *)local_b8,(String *)&local_c8);
    iVar5 = (int)local_b8;
    vformat<int>((String *)&local_a8,iVar5);
    Control::set_tooltip_text((String *)this);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
    if (iVar4 == iVar3) {
      StringName::StringName((StringName *)&local_a8,"accent_color",false);
      local_78[0] = Control::get_theme_color(in_RDI,(StringName *)&local_a8);
      if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
        StringName::unref();
      }
      Control::add_theme_color_override
                ((StringName *)this,(Color *)(SceneStringNames::singleton + 0xb0));
    }
    pcVar1 = *(code **)(*(long *)this + 0x108);
    pCVar6 = (CallableCustom *)operator_new(0x48,"");
    CallableCustom::CallableCustom(pCVar6);
    *(StringName **)(pCVar6 + 0x28) = in_RDI;
    *(undefined1 (*) [16])(pCVar6 + 0x30) = (undefined1  [16])0x0;
    *(undefined **)(pCVar6 + 0x20) = &_LC22;
    *(undefined ***)pCVar6 = &PTR_hash_0010d458;
    *(undefined8 *)(pCVar6 + 0x40) = 0;
    uVar8 = *(undefined8 *)(in_RDI + 0x60);
    *(undefined8 *)(pCVar6 + 0x10) = 0;
    *(undefined8 *)(pCVar6 + 0x30) = uVar8;
    *(undefined8 *)(pCVar6 + 0x38) = 0x100000;
    CallableCustomMethodPointerBase::_setup((uint *)pCVar6,(int)pCVar6 + 0x28);
    *(char **)(pCVar6 + 0x20) = "ScreenSelect::_emit_screen_signal";
    Callable::Callable(local_b8,pCVar6);
    Variant::Variant((Variant *)local_78,iVar3);
    local_60 = 0;
    local_58 = (undefined1  [16])0x0;
    local_88 = (Vector2i *)local_78;
    Callable::bindp((Variant **)&local_a8,iVar5);
    if (Variant::needs_deinit[(int)local_60] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[(int)local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    (*pcVar1)(this,SceneStringNames::singleton + 0x238,(Callable *)&local_a8,0);
    Callable::~Callable((Callable *)&local_a8);
    Callable::~Callable(local_b8);
    pcVar1 = *(code **)(*(long *)this + 0x108);
    create_custom_callable_function_pointer<BaseButton,bool>
              ((BaseButton *)local_b8,(char *)in_RDI,(_func_void_bool *)"&ScreenSelect::set_pressed"
              );
    Callable::bind<bool>(SUB81((Callable *)&local_a8,0));
    (*pcVar1)(this,SceneStringNames::singleton + 0x238,(Callable *)&local_a8);
    Callable::~Callable((Callable *)&local_a8);
    Callable::~Callable(local_b8);
    lVar2 = *(long *)(in_RDI + 0xc10);
    pcVar1 = *(code **)(*(long *)this + 0x108);
    pCVar6 = (CallableCustom *)operator_new(0x48,"");
    CallableCustom::CallableCustom(pCVar6);
    *(long *)(pCVar6 + 0x28) = lVar2;
    *(undefined1 (*) [16])(pCVar6 + 0x30) = (undefined1  [16])0x0;
    *(undefined **)(pCVar6 + 0x20) = &_LC22;
    *(undefined ***)pCVar6 = &PTR_hash_0010d578;
    *(undefined8 *)(pCVar6 + 0x40) = 0;
    uVar8 = *(undefined8 *)(lVar2 + 0x60);
    *(undefined8 *)(pCVar6 + 0x10) = 0;
    *(undefined8 *)(pCVar6 + 0x30) = uVar8;
    *(code **)(pCVar6 + 0x38) = Window::hide;
    CallableCustomMethodPointerBase::_setup((uint *)pCVar6,(int)pCVar6 + 0x28);
    *(char **)(pCVar6 + 0x20) = "Popup::hide";
    Callable::Callable((Callable *)&local_a8,pCVar6);
    (*pcVar1)(this,SceneStringNames::singleton + 0x238,(Callable *)&local_a8);
    Callable::~Callable((Callable *)&local_a8);
    iVar3 = iVar3 + 1;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ScreenSelect::pressed() */

void __thiscall ScreenSelect::pressed(ScreenSelect *this)

{
  char cVar1;
  
  cVar1 = Window::is_visible();
  if (cVar1 == '\0') {
    _build_advanced_menu();
    _show_popup(this);
    return;
  }
  Window::hide();
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



/* ScreenSelect::_bind_methods() */

void ScreenSelect::_bind_methods(void)

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
  PropertyInfo local_e8 [48];
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
  local_108 = 0;
  local_110 = 0;
  local_b8 = "";
  local_b0 = 0;
  String::parse_latin1((StrRange *)&local_110);
  local_118 = 0;
  local_b8 = "screen";
  local_b0 = 6;
  String::parse_latin1((StrRange *)&local_118);
  PropertyInfo::PropertyInfo
            (local_e8,2,(StrRange *)&local_118,0,(StrRange *)&local_110,6,&local_108);
  local_b8 = "request_open_in_screen";
  local_100 = 0;
  local_b0 = 0x16;
  String::parse_latin1((StrRange *)&local_100);
  local_a8 = (undefined1  [16])0x0;
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
            ((List<PropertyInfo,DefaultAllocator> *)local_78,local_e8);
  local_f8 = "ScreenSelect";
  local_120 = 0;
  local_f0 = 0xc;
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
      if (lVar2 != 0) {
        lVar6 = 0;
        piVar5 = piVar4;
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
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  PropertyInfo::~PropertyInfo(local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  if ((StringName::configured != '\0') && (local_108 != 0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WindowWrapper::_bind_methods() */

void WindowWrapper::_bind_methods(void)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  int *piVar4;
  long lVar5;
  int *piVar6;
  long in_FS_OFFSET;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  long local_100;
  undefined8 local_f8;
  long local_f0;
  long local_e8 [6];
  undefined8 local_b8;
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
  local_100 = 0;
  local_108 = 0;
  String::parse_latin1((String *)&local_108,"");
  local_110 = 0;
  String::parse_latin1((String *)&local_110,"visible");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_e8,1,(String *)&local_110,0,(String *)&local_108,6,&local_100);
  local_f8 = 0;
  String::parse_latin1((String *)&local_f8,"window_visibility_changed");
  local_a8 = (undefined1  [16])0x0;
  local_b8 = 0;
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
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)local_e8);
  local_118 = 0;
  String::parse_latin1((String *)&local_118,"WindowWrapper");
  StringName::StringName((StringName *)&local_f0,(String *)&local_118,false);
  ClassDB::add_signal((StringName *)&local_f0,(MethodInfo *)&local_b8);
  if ((StringName::configured != '\0') && (local_f0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
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
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  if ((StringName::configured != '\0') && (local_100 != 0)) {
    StringName::unref();
  }
  local_f0 = 0;
  String::parse_latin1((String *)&local_f0,"window_close_requested");
  local_a8 = (undefined1  [16])0x0;
  local_b8 = 0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = (int *)0x0;
  local_60 = 0;
  local_50 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_f0);
  local_f8 = 0;
  String::parse_latin1((String *)&local_f8,"WindowWrapper");
  StringName::StringName((StringName *)local_e8,(String *)&local_f8,false);
  ClassDB::add_signal((StringName *)local_e8,(MethodInfo *)&local_b8);
  if ((StringName::configured != '\0') && (local_e8[0] != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
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
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  local_f0 = 0;
  String::parse_latin1((String *)&local_f0,"window_size_changed");
  local_a8 = (undefined1  [16])0x0;
  local_b8 = 0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = (int *)0x0;
  local_60 = 0;
  local_50 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_f0);
  local_f8 = 0;
  String::parse_latin1((String *)&local_f8,"WindowWrapper");
  StringName::StringName((StringName *)local_e8,(String *)&local_f8,false);
  ClassDB::add_signal((StringName *)local_e8,(MethodInfo *)&local_b8);
  if ((StringName::configured != '\0') && (local_e8[0] != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
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
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
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



/* Control::_top_level_changed() */

void Control::_top_level_changed(void)

{
  return;
}



/* ShortcutBin::is_class_ptr(void*) const */

uint __thiscall ShortcutBin::is_class_ptr(ShortcutBin *this,void *param_1)

{
  return (uint)CONCAT71(0x10d7,(undefined4 *)param_1 == &Node::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10d6,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10d8,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* ShortcutBin::_getv(StringName const&, Variant&) const */

undefined8 ShortcutBin::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ShortcutBin::_setv(StringName const&, Variant const&) */

undefined8 ShortcutBin::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ShortcutBin::_property_can_revertv(StringName const&) const */

undefined8 ShortcutBin::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* ShortcutBin::_property_get_revertv(StringName const&, Variant&) const */

undefined8 ShortcutBin::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* CallableCustomMethodPointer<ScreenSelect, void, Ref<InputEvent>
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ScreenSelect,void,Ref<InputEvent>const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ScreenSelect,void,Ref<InputEvent>const&> *this)

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



/* CallableCustomMethodPointer<BaseButton, void, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<BaseButton,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<BaseButton,void,bool> *this)

{
  return;
}



/* CallableCustomMethodPointer<ScreenSelect, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ScreenSelect,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ScreenSelect,void,int> *this)

{
  return;
}



/* CallableCustomMethodPointer<WindowWrapper, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<WindowWrapper,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<WindowWrapper,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<ScreenSelect, void, Ref<InputEvent>
   const&>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<ScreenSelect,void,Ref<InputEvent>const&>::get_argument_count
          (CallableCustomMethodPointer<ScreenSelect,void,Ref<InputEvent>const&> *this,bool *param_1)

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



/* CallableCustomMethodPointer<BaseButton, void, bool>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<BaseButton,void,bool>::get_argument_count
          (CallableCustomMethodPointer<BaseButton,void,bool> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<ScreenSelect, void, int>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<ScreenSelect,void,int>::get_argument_count
          (CallableCustomMethodPointer<ScreenSelect,void,int> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<WindowWrapper, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<WindowWrapper,void>::get_argument_count
          (CallableCustomMethodPointer<WindowWrapper,void> *this,bool *param_1)

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



/* ShortcutBin::_notification(int) */

void __thiscall ShortcutBin::_notification(ShortcutBin *this,int param_1)

{
  if (param_1 != 0xd) {
    return;
  }
  Node::set_process_shortcut_input(SUB81(this,0));
  return;
}



/* CallableCustomMethodPointer<WindowWrapper, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<WindowWrapper,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<WindowWrapper,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<ScreenSelect, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ScreenSelect,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ScreenSelect,void,int> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<BaseButton, void, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<BaseButton,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<BaseButton,void,bool> *this)

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



/* CallableCustomMethodPointer<ScreenSelect, void, Ref<InputEvent>
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ScreenSelect,void,Ref<InputEvent>const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ScreenSelect,void,Ref<InputEvent>const&> *this)

{
  operator_delete(this,0x48);
  return;
}



/* ShortcutBin::~ShortcutBin() */

void __thiscall ShortcutBin::~ShortcutBin(ShortcutBin *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010cb00;
  Node::~Node((Node *)this);
  return;
}



/* ShortcutBin::~ShortcutBin() */

void __thiscall ShortcutBin::~ShortcutBin(ShortcutBin *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010cb00;
  Node::~Node((Node *)this);
  operator_delete(this,0x408);
  return;
}



/* ShortcutBin::_validate_propertyv(PropertyInfo&) const */

void ShortcutBin::_validate_propertyv(PropertyInfo *param_1)

{
  if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_validate_property) {
    Node::_validate_property(param_1);
    return;
  }
  return;
}



/* WindowWrapper::_property_get_revertv(StringName const&, Variant&) const */

undefined8 WindowWrapper::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_00111008 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* ScreenSelect::_property_get_revertv(StringName const&, Variant&) const */

undefined8 ScreenSelect::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_00111008 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* HBoxContainer::_property_get_revertv(StringName const&, Variant&) const */

undefined8 HBoxContainer::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_00111008 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* VBoxContainer::_property_get_revertv(StringName const&, Variant&) const */

undefined8 VBoxContainer::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_00111008 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* WindowWrapper::_property_can_revertv(StringName const&) const */

undefined8 WindowWrapper::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00111010 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* ScreenSelect::_property_can_revertv(StringName const&) const */

undefined8 ScreenSelect::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00111010 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* HBoxContainer::_property_can_revertv(StringName const&) const */

undefined8 HBoxContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00111010 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* VBoxContainer::_property_can_revertv(StringName const&) const */

undefined8 VBoxContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00111010 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* ScreenSelect::~ScreenSelect() */

void __thiscall ScreenSelect::~ScreenSelect(ScreenSelect *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010d048;
  Button::~Button((Button *)this);
  return;
}



/* ScreenSelect::~ScreenSelect() */

void __thiscall ScreenSelect::~ScreenSelect(ScreenSelect *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010d048;
  Button::~Button((Button *)this);
  operator_delete(this,0xc20);
  return;
}



/* ShortcutBin::shortcut_input(Ref<InputEvent> const&) */

void __thiscall ShortcutBin::shortcut_input(ShortcutBin *this,Ref *param_1)

{
  long lVar1;
  long lVar2;
  char cVar3;
  Ref *pRVar4;
  
  Node::get_window();
  cVar3 = Window::is_visible();
  if (cVar3 != '\0') {
    Node::get_window();
    pRVar4 = (Ref *)Window::get_parent_visible_window();
    if (pRVar4 == (Ref *)0x0) {
      _err_print_error("shortcut_input","editor/window_wrapper.cpp",0x3f,
                       "Parameter \"grandparent_window\" is null.",0,0);
      return;
    }
    lVar1 = *(long *)param_1;
    if ((lVar1 != 0) &&
       ((lVar2 = __dynamic_cast(lVar1,&Object::typeinfo,&InputEventKey::typeinfo,0), lVar2 != 0 ||
        (lVar1 = __dynamic_cast(lVar1,&Object::typeinfo,&InputEventShortcut::typeinfo,0), lVar1 != 0
        )))) {
      Viewport::push_input(pRVar4,SUB81(param_1,0));
      cVar3 = Viewport::is_input_handled();
      if (cVar3 != '\0') {
        Viewport::set_input_as_handled();
        return;
      }
    }
  }
  return;
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
      goto LAB_00103fdd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00103fdd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00103fdd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<BaseButton, void, bool>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<BaseButton,void,bool>::get_object
          (CallableCustomMethodPointer<BaseButton,void,bool> *this)

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
      goto LAB_001040dd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_001040dd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_001040dd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<ScreenSelect, void, int>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<ScreenSelect,void,int>::get_object
          (CallableCustomMethodPointer<ScreenSelect,void,int> *this)

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
      goto LAB_001041dd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_001041dd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_001041dd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<ScreenSelect, void, Ref<InputEvent> const&>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<ScreenSelect,void,Ref<InputEvent>const&>::get_object
          (CallableCustomMethodPointer<ScreenSelect,void,Ref<InputEvent>const&> *this)

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
      goto LAB_001042dd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_001042dd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_001042dd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<WindowWrapper, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<WindowWrapper,void>::get_object
          (CallableCustomMethodPointer<WindowWrapper,void> *this)

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
      goto LAB_001043dd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_001043dd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_001043dd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* ScreenSelect::is_class_ptr(void*) const */

uint ScreenSelect::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x10d7,in_RSI == &BaseButton::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10d7,in_RSI == &Button::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10d7,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10d7,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10d7,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* WindowWrapper::is_class_ptr(void*) const */

uint WindowWrapper::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x10d7,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10d7,in_RSI == &MarginContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10d7,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10d7,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10d7,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* ScreenSelect::_validate_propertyv(PropertyInfo&) const */

void ScreenSelect::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  if ((code *)PTR__validate_property_00111018 == CanvasItem::_validate_property) {
    return;
  }
  Control::_validate_property(param_1);
  return;
}



/* WindowWrapper::_validate_propertyv(PropertyInfo&) const */

void WindowWrapper::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  if ((code *)PTR__validate_property_00111018 == CanvasItem::_validate_property) {
    return;
  }
  Control::_validate_property(param_1);
  return;
}



/* ShortcutBin::_notificationv(int, bool) */

void __thiscall ShortcutBin::_notificationv(ShortcutBin *this,int param_1,bool param_2)

{
  if (param_2) {
    if (*(code **)(*(long *)this + 0x1b8) == _notification) {
      if (param_1 == 0xd) {
        Node::set_process_shortcut_input(SUB81(this,0));
      }
    }
    else {
      (**(code **)(*(long *)this + 0x1b8))();
    }
    if ((code *)PTR__notification_00111020 != Object::_notification) {
      Node::_notification((int)this);
      return;
    }
  }
  else {
    if ((code *)PTR__notification_00111020 != Object::_notification) {
      Node::_notification((int)this);
    }
    if (*(code **)(*(long *)this + 0x1b8) != _notification) {
                    /* WARNING: Could not recover jumptable at 0x001046cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)this + 0x1b8))(this,param_1);
      return;
    }
    if (param_1 == 0xd) {
      Node::set_process_shortcut_input(SUB81(this,0));
      return;
    }
  }
  return;
}



/* HBoxContainer::_validate_propertyv(PropertyInfo&) const */

void HBoxContainer::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_00111028 == Control::_validate_property) {
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
  if ((code *)PTR__validate_property_00111028 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* HBoxContainer::is_class_ptr(void*) const */

uint HBoxContainer::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x10d7,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10d6,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10d7,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10d7,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10d7,in_RSI == &Node::get_class_ptr_static()::ptr) |
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
    uVar1 = (uint)CONCAT71(0x10d7,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10d6,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10d7,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10d7,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10d7,in_RSI == &Node::get_class_ptr_static()::ptr) |
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
    if ((code *)PTR__set_00111030 != CanvasItem::_set) {
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
    if ((code *)PTR__set_00111030 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* WindowWrapper::_setv(StringName const&, Variant const&) */

undefined8 WindowWrapper::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_00111030 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* ScreenSelect::_setv(StringName const&, Variant const&) */

undefined8 ScreenSelect::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_00111030 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00104b28) */
/* HBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 HBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00111038 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00104b98) */
/* WindowWrapper::_getv(StringName const&, Variant&) const */

undefined8 WindowWrapper::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00111038 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00104c08) */
/* ScreenSelect::_getv(StringName const&, Variant&) const */

undefined8 ScreenSelect::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00111038 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00104c78) */
/* VBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 VBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00111038 != CanvasItem::_get) &&
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
  *(code **)this = StringName::assign_static_unique_class_name;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104ce0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00104ce0:
  Control::~Control((Control *)this);
  return;
}



/* VBoxContainer::~VBoxContainer() */

void __thiscall VBoxContainer::~VBoxContainer(VBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = StringName::assign_static_unique_class_name;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104d40;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00104d40:
  Control::~Control((Control *)this);
  return;
}



/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = StringName::assign_static_unique_class_name;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104da0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00104da0:
  Control::~Control((Control *)this);
  operator_delete(this,0xa10);
  return;
}



/* VBoxContainer::~VBoxContainer() */

void __thiscall VBoxContainer::~VBoxContainer(VBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = StringName::assign_static_unique_class_name;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104e10;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00104e10:
  Control::~Control((Control *)this);
  operator_delete(this,0xa10);
  return;
}



/* ScreenSelect::_get_class_namev() const */

undefined8 * ScreenSelect::_get_class_namev(void)

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
LAB_00104e73:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00104e73;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"ScreenSelect");
      goto LAB_00104ede;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"ScreenSelect");
LAB_00104ede:
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
LAB_00104f63:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00104f63;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
      goto LAB_00104fce;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
LAB_00104fce:
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
LAB_00105053:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00105053;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
      goto LAB_001050be;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
LAB_001050be:
  return &_get_class_namev()::_class_name_static;
}



/* WindowWrapper::_get_class_namev() const */

undefined8 * WindowWrapper::_get_class_namev(void)

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
LAB_00105143:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00105143;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"WindowWrapper");
      goto LAB_001051ae;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"WindowWrapper");
LAB_001051ae:
  return &_get_class_namev()::_class_name_static;
}



/* ShortcutBin::_get_class_namev() const */

undefined8 * ShortcutBin::_get_class_namev(void)

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
LAB_00105223:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00105223;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"ShortcutBin");
      goto LAB_0010528e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"ShortcutBin");
LAB_0010528e:
  return &_get_class_namev()::_class_name_static;
}



/* VBoxContainer::_notificationv(int, bool) */

void __thiscall VBoxContainer::_notificationv(VBoxContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_00111040 != Container::_notification) {
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
  if ((code *)PTR__notification_00111040 == Container::_notification) {
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
    if ((code *)PTR__notification_00111040 != Container::_notification) {
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
  if ((code *)PTR__notification_00111040 == Container::_notification) {
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



/* WARNING: Removing unreachable block (ram,0x00105680) */
/* WindowWrapper::_notificationv(int, bool) */

void __thiscall WindowWrapper::_notificationv(WindowWrapper *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    _notification(this,param_1);
    if ((code *)PTR__notification_00111048 != Container::_notification) {
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
  if ((code *)PTR__notification_00111048 != Container::_notification) {
    MarginContainer::_notification(iVar1);
  }
  _notification(this,param_1);
  return;
}



/* WARNING: Removing unreachable block (ram,0x00105a70) */
/* ScreenSelect::_notificationv(int, bool) */

void __thiscall ScreenSelect::_notificationv(ScreenSelect *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    _notification(this,param_1);
    if ((code *)PTR__notification_00111050 != BaseButton::_notification) {
      Button::_notification(iVar1);
    }
    BaseButton::_notification(iVar1);
    Control::_notification(iVar1);
    CanvasItem::_notification(iVar1);
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  CanvasItem::_notification(iVar1);
  Control::_notification(iVar1);
  BaseButton::_notification(iVar1);
  if ((code *)PTR__notification_00111050 != BaseButton::_notification) {
    Button::_notification(iVar1);
  }
  _notification(this,param_1);
  return;
}



/* Callable create_custom_callable_function_pointer<WindowWrapper>(WindowWrapper*, char const*, void
   (WindowWrapper::*)()) */

WindowWrapper *
create_custom_callable_function_pointer<WindowWrapper>
          (WindowWrapper *param_1,char *param_2,_func_void *param_3)

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
  *(undefined ***)this = &PTR_hash_0010d3c8;
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



/* Callable create_custom_callable_function_pointer<BaseButton, bool>(BaseButton*, char const*, void
   (BaseButton::*)(bool)) */

BaseButton *
create_custom_callable_function_pointer<BaseButton,bool>
          (BaseButton *param_1,char *param_2,_func_void_bool *param_3)

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
  *(undefined ***)this = &PTR_hash_0010d4e8;
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



/* PropertyInfo::~PropertyInfo() */

void __thiscall PropertyInfo::~PropertyInfo(PropertyInfo *this)

{
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x20));
  if ((StringName::configured != '\0') && (*(long *)(this + 0x10) != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 8));
  return;
}



/* WARNING: Removing unreachable block (ram,0x00105f68) */
/* String vformat<int>(String const&, int const) */

String * vformat<int>(String *param_1,int param_2)

{
  char cVar1;
  Variant *this;
  int in_EDX;
  undefined4 in_register_00000034;
  int iVar2;
  long in_FS_OFFSET;
  Array local_c0 [8];
  undefined8 local_b8 [8];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_78,in_EDX);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_c0);
  iVar2 = (int)local_c0;
  Array::resize(iVar2);
  this = (Variant *)Array::operator[](iVar2);
  Variant::operator=(this,(Variant *)local_78);
  String::sprintf((Array *)local_b8,(bool *)CONCAT44(in_register_00000034,param_2));
  *(undefined8 *)param_1 = local_b8[0];
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



/* CowData<char32_t>::_ref(CowData<char32_t> const&) */

void __thiscall CowData<char32_t>::_ref(CowData<char32_t> *this,CowData *param_1)

{
  if (*(long *)this != *(long *)param_1) {
    _ref(this,param_1);
    return;
  }
  return;
}



/* ShortcutBin::get_class() const */

void ShortcutBin::get_class(void)

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
    String::parse_latin1(in_RDI,"ShortcutBin");
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



/* ScreenSelect::get_class() const */

void ScreenSelect::get_class(void)

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
    String::parse_latin1(in_RDI,"ScreenSelect");
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



/* WindowWrapper::get_class() const */

void WindowWrapper::get_class(void)

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
    String::parse_latin1(in_RDI,"WindowWrapper");
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
  String *in_RDI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(in_RSI + 8) == 0) {
    *(undefined8 *)in_RDI = 0;
    String::parse_latin1(in_RDI,"HBoxContainer");
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



/* PropertyInfo::PropertyInfo(Variant::Type, String const&, PropertyHint, String const&, unsigned
   int, StringName const&) */

void __thiscall
PropertyInfo::PropertyInfo
          (PropertyInfo *this,undefined4 param_2,CowData *param_3,int param_4,CowData *param_5,
          undefined4 param_6,StringName *param_7)

{
  long lVar1;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)this = param_2;
  *(undefined8 *)(this + 8) = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)(this + 8),param_3);
  *(undefined8 *)(this + 0x20) = 0;
  lVar1 = *(long *)param_5;
  *(undefined8 *)(this + 0x10) = 0;
  *(int *)(this + 0x18) = param_4;
  if (lVar1 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x20),param_5);
    param_4 = *(int *)(this + 0x18);
  }
  *(undefined4 *)(this + 0x28) = param_6;
  if (param_4 == 0x11) {
    StringName::StringName((StringName *)&local_48,(String *)(this + 0x20),false);
    if (*(long *)(this + 0x10) == local_48) {
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(long *)(this + 0x10) = local_48;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    StringName::operator=((StringName *)(this + 0x10),param_7);
    return;
  }
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
      goto LAB_001067df;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_001067df;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001067b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_00106890;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_001067df:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC70,"./core/object/callable_method_pointer.h",0x67,
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
LAB_00106890:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<WindowWrapper, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<WindowWrapper,void>::call
          (CallableCustomMethodPointer<WindowWrapper,void> *this,Variant **param_1,int param_2,
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
      goto LAB_001069ef;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_001069ef;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001069c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_00106aa0;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_001069ef:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC70,"./core/object/callable_method_pointer.h",0x67,
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
LAB_00106aa0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<ScreenSelect, void, Ref<InputEvent> const&>::call(Variant const**,
   int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<ScreenSelect,void,Ref<InputEvent>const&>::call
          (CallableCustomMethodPointer<ScreenSelect,void,Ref<InputEvent>const&> *this,
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
          goto LAB_00106b7e;
        }
        if (param_2 == 0) {
          *(undefined4 *)param_4 = 4;
          *(undefined4 *)(param_4 + 8) = 1;
          goto LAB_00106b7e;
        }
        *(undefined4 *)param_4 = 0;
        if (((ulong)pcVar10 & 1) != 0) {
          pcVar10 = *(code **)(pcVar10 + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar6 = Variant::can_convert_strict(*(undefined4 *)*param_1);
        uVar4 = _LC71;
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
LAB_00106c4d:
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
              if (pOVar5 != (Object *)0x0) goto LAB_00106c4d;
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
        goto LAB_00106b7e;
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
  _err_print_error(&_LC70,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (String *)&local_38,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
  CowData<char32_t>::_unref(local_48);
  CowData<char32_t>::_unref(local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
LAB_00106b7e:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<BaseButton, void, bool>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<BaseButton,void,bool>::call
          (CallableCustomMethodPointer<BaseButton,void,bool> *this,Variant **param_1,int param_2,
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
      goto LAB_00106fd9;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar6[1] == 0) goto LAB_00106fd9;
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
        uVar3 = _LC72;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        bVar7 = Variant::operator_cast_to_bool(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00106f88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),bVar7);
          return;
        }
        goto LAB_0010708a;
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
LAB_00106fd9:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC70,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0010708a:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<ScreenSelect, void, int>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<ScreenSelect,void,int>::call
          (CallableCustomMethodPointer<ScreenSelect,void,int> *this,Variant **param_1,int param_2,
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
      goto LAB_00107248;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar7[1] == 0) goto LAB_00107248;
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
        uVar3 = _LC73;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        iVar5 = Variant::operator_cast_to_int(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001071f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),iVar5);
          return;
        }
        goto LAB_001072f9;
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
LAB_00107248:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC70,"./core/object/callable_method_pointer.h",0x67,
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
LAB_001072f9:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ShortcutBin::_initialize_classv() */

void ShortcutBin::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
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
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((code *)PTR__bind_methods_00111058 != Object::_bind_methods) {
        Node::_bind_methods();
      }
      Node::initialize_class()::initialized = '\x01';
    }
    local_48 = "Node";
    local_58 = 0;
    local_40 = 4;
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "ShortcutBin";
    local_60 = 0;
    local_40 = 0xb;
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
              if ((code *)PTR__bind_methods_00111070 != Node::_bind_methods) {
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
            if ((code *)PTR__bind_compatibility_methods_00111060 !=
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
      if ((code *)PTR__bind_methods_00111068 != Container::_bind_methods) {
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
              if ((code *)PTR__bind_methods_00111070 != Node::_bind_methods) {
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
            if ((code *)PTR__bind_compatibility_methods_00111060 !=
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
      if ((code *)PTR__bind_methods_00111068 != Container::_bind_methods) {
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



/* Node::is_class(String const&) const */

undefined8 __thiscall Node::is_class(Node *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_001081a3;
  }
  cVar4 = String::operator==(param_1,"Node");
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
      if (cVar4 != '\0') goto LAB_001081a3;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = String::operator==(param_1,"Object");
      return uVar5;
    }
  }
  else {
LAB_001081a3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ShortcutBin::is_class(String const&) const */

undefined8 __thiscall ShortcutBin::is_class(ShortcutBin *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_001083ab;
  }
  cVar4 = String::operator==(param_1,"ShortcutBin");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = Node::is_class((Node *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_001083ab:
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
    if (cVar4 != '\0') goto LAB_001084d3;
  }
  cVar4 = String::operator==(param_1,"Control");
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
      if (cVar4 != '\0') goto LAB_001084d3;
    }
    cVar4 = String::operator==(param_1,"CanvasItem");
    if (cVar4 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar5 = Node::is_class((Node *)this,param_1);
        return uVar5;
      }
      goto LAB_001085de;
    }
  }
LAB_001084d3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_001085de:
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
    if (cVar4 != '\0') goto LAB_001086eb;
  }
  cVar4 = String::operator==(param_1,"Container");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = Control::is_class((Control *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_001086eb:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WindowWrapper::is_class(String const&) const */

undefined8 __thiscall WindowWrapper::is_class(WindowWrapper *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_00108823;
  }
  cVar4 = String::operator==(param_1,"WindowWrapper");
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
      if (cVar4 != '\0') goto LAB_00108823;
    }
    cVar4 = String::operator==(param_1,"MarginContainer");
    if (cVar4 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar5 = Container::is_class((Container *)this,param_1);
        return uVar5;
      }
      goto LAB_0010892e;
    }
  }
LAB_00108823:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010892e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Button::is_class(String const&) const */

undefined8 __thiscall Button::is_class(Button *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_00108a23;
  }
  cVar4 = String::operator==(param_1,"Button");
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
      if (cVar4 != '\0') goto LAB_00108a23;
    }
    cVar4 = String::operator==(param_1,"BaseButton");
    if (cVar4 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar5 = Control::is_class((Control *)this,param_1);
        return uVar5;
      }
      goto LAB_00108b2e;
    }
  }
LAB_00108a23:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00108b2e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ScreenSelect::is_class(String const&) const */

undefined8 __thiscall ScreenSelect::is_class(ScreenSelect *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_00108c3b;
  }
  cVar4 = String::operator==(param_1,"ScreenSelect");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = Button::is_class((Button *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_00108c3b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
        if (pvVar3 == (void *)0x0) goto LAB_00108d7f;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_00108d7f:
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  return;
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
    if (cVar4 != '\0') goto LAB_00108eb3;
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
      if (cVar4 != '\0') goto LAB_00108eb3;
    }
    cVar4 = String::operator==(param_1,"BoxContainer");
    if (cVar4 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar5 = Container::is_class((Container *)this,param_1);
        return uVar5;
      }
      goto LAB_00108fbe;
    }
  }
LAB_00108eb3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00108fbe:
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
    if (cVar4 != '\0') goto LAB_001090a3;
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
      if (cVar4 != '\0') goto LAB_001090a3;
    }
    cVar4 = String::operator==(param_1,"BoxContainer");
    if (cVar4 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar5 = Container::is_class((Container *)this,param_1);
        return uVar5;
      }
      goto LAB_001091ae;
    }
  }
LAB_001090a3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_001091ae:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
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
  local_78 = &_LC75;
  local_88 = 0;
  local_90 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = &_LC75;
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



/* ShortcutBin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall ShortcutBin::_get_property_listv(ShortcutBin *this,List *param_1,bool param_2)

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
  local_78 = "ShortcutBin";
  local_70 = 0xb;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "ShortcutBin";
  local_98 = 0;
  local_70 = 0xb;
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
  StringName::StringName((StringName *)&local_78,"ShortcutBin",false);
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
  if ((code *)PTR__get_property_list_00111078 != Object::_get_property_list) {
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
  if ((code *)PTR__get_property_list_00111080 != CanvasItem::_get_property_list) {
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



/* MarginContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
MarginContainer::_get_property_listv(MarginContainer *this,List *param_1,bool param_2)

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
  local_78 = "MarginContainer";
  local_70 = 0xf;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "MarginContainer";
  local_98 = 0;
  local_70 = 0xf;
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



/* WindowWrapper::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall WindowWrapper::_get_property_listv(WindowWrapper *this,List *param_1,bool param_2)

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
    MarginContainer::_get_property_listv((MarginContainer *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "WindowWrapper";
  local_70 = 0xd;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "WindowWrapper";
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
  StringName::StringName((StringName *)&local_78,"WindowWrapper",false);
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



/* BaseButton::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall BaseButton::_get_property_listv(BaseButton *this,List *param_1,bool param_2)

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
  local_78 = "BaseButton";
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "BaseButton";
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
  StringName::StringName((StringName *)&local_78,"BaseButton",false);
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



/* Button::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Button::_get_property_listv(Button *this,List *param_1,bool param_2)

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
    BaseButton::_get_property_listv((BaseButton *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "Button";
  local_70 = 6;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Button";
  local_98 = 0;
  local_70 = 6;
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
  StringName::StringName((StringName *)&local_78,"Button",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      BaseButton::_get_property_listv((BaseButton *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ScreenSelect::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall ScreenSelect::_get_property_listv(ScreenSelect *this,List *param_1,bool param_2)

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
    Button::_get_property_listv((Button *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "ScreenSelect";
  local_70 = 0xc;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "ScreenSelect";
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
  StringName::StringName((StringName *)&local_78,"ScreenSelect",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Button::_get_property_listv((Button *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
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



/* ScreenSelect::_bind_methods() [clone .cold] */

void ScreenSelect::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WindowWrapper::_bind_methods() [clone .cold] */

void WindowWrapper::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* ScreenSelect::_initialize_classv() */

void ScreenSelect::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (Button::initialize_class()::initialized == '\0') {
      if (BaseButton::initialize_class()::initialized == '\0') {
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
              if ((code *)PTR__bind_methods_00111070 != Node::_bind_methods) {
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
            if ((code *)PTR__bind_compatibility_methods_00111060 !=
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
        String::parse_latin1((String *)&local_60,"BaseButton");
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
        BaseButton::_bind_methods();
        BaseButton::initialize_class()::initialized = '\x01';
      }
      local_50 = 0;
      String::parse_latin1((String *)&local_50,"BaseButton");
      StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"Button");
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
      if ((code *)PTR__bind_methods_00111088 != BaseButton::_bind_methods) {
        Button::_bind_methods();
      }
      Button::initialize_class()::initialized = '\x01';
    }
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"Button");
    StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
    local_60 = 0;
    String::parse_latin1((String *)&local_60,"ScreenSelect");
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



/* WindowWrapper::_initialize_classv() */

void WindowWrapper::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (MarginContainer::initialize_class()::initialized == '\0') {
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
              if ((code *)PTR__bind_methods_00111070 != Node::_bind_methods) {
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
            if ((code *)PTR__bind_compatibility_methods_00111060 !=
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
      String::parse_latin1((String *)&local_60,"MarginContainer");
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
      if ((code *)PTR__bind_methods_00111090 != Container::_bind_methods) {
        MarginContainer::_bind_methods();
      }
      MarginContainer::initialize_class()::initialized = '\x01';
    }
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"MarginContainer");
    StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
    local_60 = 0;
    String::parse_latin1((String *)&local_60,"WindowWrapper");
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



/* WindowWrapper::_get_default_window_rect() const */

void WindowWrapper::_GLOBAL__sub_I__get_default_window_rect(void)

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
/* PropertyInfo::PropertyInfo(Variant::Type, String const&, PropertyHint, String const&, unsigned
   int, StringName const&) */

void __thiscall PropertyInfo::PropertyInfo(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* PropertyInfo::~PropertyInfo() */

void __thiscall PropertyInfo::~PropertyInfo(PropertyInfo *this)

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
/* ScreenSelect::~ScreenSelect() */

void __thiscall ScreenSelect::~ScreenSelect(ScreenSelect *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* ShortcutBin::~ShortcutBin() */

void __thiscall ShortcutBin::~ShortcutBin(ShortcutBin *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<WindowWrapper, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<WindowWrapper,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<WindowWrapper,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<ScreenSelect, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ScreenSelect,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ScreenSelect,void,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<BaseButton, void, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<BaseButton,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<BaseButton,void,bool> *this)

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
/* CallableCustomMethodPointer<ScreenSelect, void, Ref<InputEvent>
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ScreenSelect,void,Ref<InputEvent>const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ScreenSelect,void,Ref<InputEvent>const&> *this)

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



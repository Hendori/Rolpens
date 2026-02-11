
/* EditorSpinSlider::is_hiding_slider() const */

EditorSpinSlider __thiscall EditorSpinSlider::is_hiding_slider(EditorSpinSlider *this)

{
  return this[0xa59];
}



/* EditorSpinSlider::is_editing_integer() const */

EditorSpinSlider __thiscall EditorSpinSlider::is_editing_integer(EditorSpinSlider *this)

{
  return this[0xa5b];
}



/* EditorSpinSlider::is_read_only() const */

EditorSpinSlider __thiscall EditorSpinSlider::is_read_only(EditorSpinSlider *this)

{
  return this[0xa22];
}



/* EditorSpinSlider::is_flat() const */

EditorSpinSlider __thiscall EditorSpinSlider::is_flat(EditorSpinSlider *this)

{
  return this[0xa5a];
}



/* EditorSpinSlider::set_hide_slider(bool) */

void __thiscall EditorSpinSlider::set_hide_slider(EditorSpinSlider *this,bool param_1)

{
  this[0xa59] = (EditorSpinSlider)param_1;
  CanvasItem::queue_redraw();
  return;
}



/* EditorSpinSlider::set_editing_integer(bool) */

void __thiscall EditorSpinSlider::set_editing_integer(EditorSpinSlider *this,bool param_1)

{
  if (this[0xa5b] != (EditorSpinSlider)param_1) {
    this[0xa5b] = (EditorSpinSlider)param_1;
    CanvasItem::queue_redraw();
    return;
  }
  return;
}



/* EditorSpinSlider::_grabber_mouse_entered() */

void __thiscall EditorSpinSlider::_grabber_mouse_entered(EditorSpinSlider *this)

{
  this[0xa15] = (EditorSpinSlider)0x1;
  CanvasItem::queue_redraw();
  return;
}



/* EditorSpinSlider::_grabber_mouse_exited() */

void __thiscall EditorSpinSlider::_grabber_mouse_exited(EditorSpinSlider *this)

{
  this[0xa15] = (EditorSpinSlider)0x0;
  CanvasItem::queue_redraw();
  return;
}



/* EditorSpinSlider::set_flat(bool) */

void __thiscall EditorSpinSlider::set_flat(EditorSpinSlider *this,bool param_1)

{
  this[0xa5a] = (EditorSpinSlider)param_1;
  CanvasItem::queue_redraw();
  return;
}



/* EditorSpinSlider::_value_input_submitted(String const&) */

void EditorSpinSlider::_value_input_submitted(String *param_1)

{
  undefined8 uVar1;
  
  Engine::get_singleton();
  uVar1 = Engine::get_frames_drawn();
  *(undefined8 *)(param_1 + 0xa50) = uVar1;
  if (*(long *)(param_1 + 0xa40) != 0) {
    CanvasItem::hide();
    return;
  }
  return;
}



/* EditorSpinSlider::set_read_only(bool) */

void __thiscall EditorSpinSlider::set_read_only(EditorSpinSlider *this,bool param_1)

{
  this[0xa22] = (EditorSpinSlider)param_1;
  if (((param_1) && (*(long *)(this + 0xa48) != 0)) &&
     ((*(byte *)(*(long *)(this + 0xa48) + 0x2fa) & 0x40) != 0)) {
    Control::release_focus();
    CanvasItem::queue_redraw();
    return;
  }
  CanvasItem::queue_redraw();
  return;
}



/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   EditorSpinSlider::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#2}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(Node*,StringName_const&,StringName_const&),EditorSpinSlider::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#2}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &EditorSpinSlider::_bind_methods()::
                {lambda(Node*,StringName_const&,StringName_const&)#2}::typeinfo;
    return 0;
  }
  if (param_3 != 1) {
    return 0;
  }
  *param_1 = param_2;
  return 0;
}



/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   EditorSpinSlider::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#1}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(Node*,StringName_const&,StringName_const&),EditorSpinSlider::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#1}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &EditorSpinSlider::_bind_methods()::
                {lambda(Node*,StringName_const&,StringName_const&)#1}::typeinfo;
    return 0;
  }
  if (param_3 != 1) {
    return 0;
  }
  *param_1 = param_2;
  return 0;
}



/* Error Object::emit_signal<>(StringName const&) [clone .isra.0] */

void __thiscall Object::emit_signal<>(Object *this,StringName *param_1)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(*(long *)this + 0xd0))(this,param_1,0,0);
  if (Variant::needs_deinit[0] != '\0') {
    Variant::_clear_internal();
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorSpinSlider::get_minimum_size() const */

ulong EditorSpinSlider::get_minimum_size(void)

{
  char cVar1;
  int iVar2;
  undefined8 in_RDX;
  undefined8 in_RSI;
  StringName *in_RDI;
  long in_FS_OFFSET;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  Object *local_30;
  Object *local_28;
  long local_20;
  undefined8 extraout_XMM0_Qb;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (const::{lambda()#1}::operator()()::sname == '\0') {
    iVar2 = __cxa_guard_acquire(&const::{lambda()#1}::operator()()::sname,in_RSI,in_RDX,
                                &const::{lambda()#1}::operator()()::sname);
    if (iVar2 != 0) {
      _scs_create((char *)&const::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&const::{lambda()#1}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&const::{lambda()#1}::operator()()::sname);
    }
  }
  Control::get_theme_stylebox((StringName *)&local_30,in_RDI);
  if (const::{lambda()#2}::operator()()::sname == '\0') {
    iVar2 = __cxa_guard_acquire(&const::{lambda()#2}::operator()()::sname);
    if (iVar2 != 0) {
      _scs_create((char *)&const::{lambda()#2}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&const::{lambda()#2}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&const::{lambda()#2}::operator()()::sname);
    }
  }
  Control::get_theme_font((StringName *)&local_28,in_RDI);
  if (const::{lambda()#3}::operator()()::sname == '\0') {
    iVar2 = __cxa_guard_acquire(&const::{lambda()#3}::operator()()::sname);
    if (iVar2 != 0) {
      _scs_create((char *)&const::{lambda()#3}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&const::{lambda()#3}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&const::{lambda()#3}::operator()()::sname);
    }
  }
  Control::get_theme_font_size(in_RDI,(StringName *)(SceneStringNames::singleton + 0xa8));
  uVar3 = (**(code **)(*(long *)local_30 + 0x1d0))();
  auVar4._0_8_ = (**(code **)(*(long *)local_28 + 0x218))();
  auVar4._8_8_ = extraout_XMM0_Qb;
  auVar5._4_12_ = auVar4._4_12_;
  auVar5._0_4_ = (float)auVar4._0_8_ + (float)(uVar3 >> 0x20);
  if (local_28 != (Object *)0x0) {
    cVar1 = RefCounted::unreference();
    if (cVar1 != '\0') {
      cVar1 = predelete_handler(local_28);
      if (cVar1 != '\0') {
        (**(code **)(*(long *)local_28 + 0x140))(local_28);
        Memory::free_static(local_28,false);
      }
    }
  }
  if (local_30 != (Object *)0x0) {
    cVar1 = RefCounted::unreference();
    if (cVar1 != '\0') {
      cVar1 = predelete_handler(local_30);
      if (cVar1 != '\0') {
        (**(code **)(*(long *)local_30 + 0x140))(local_30);
        Memory::free_static(local_30,false);
      }
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3 & 0xffffffff | auVar5._0_8_ << 0x20;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   EditorSpinSlider::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#1}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),EditorSpinSlider::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#1}>
     ::_M_invoke(_Any_data *param_1,Node **param_2,StringName *param_3,StringName *param_4)

{
  Object *pOVar1;
  code *pcVar2;
  char cVar3;
  long lVar4;
  Object *pOVar5;
  long in_FS_OFFSET;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_2 == (Node *)0x0) {
    Control::get_theme_item(local_48,0,4,param_3,param_4);
    Variant::get_validated_object();
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar4 = __dynamic_cast(*param_2,&Object::typeinfo,&EditorSpinSlider::typeinfo,0);
  Control::get_theme_item(local_48,lVar4,4,param_3,param_4);
  pOVar5 = (Object *)Variant::get_validated_object();
  pOVar1 = *(Object **)(lVar4 + 0xa60);
  if (pOVar5 == pOVar1) goto LAB_001005c0;
  if (pOVar5 == (Object *)0x0) {
    if (pOVar1 == (Object *)0x0) goto LAB_001005c0;
    *(undefined8 *)(lVar4 + 0xa60) = 0;
  }
  else {
    pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&Texture2D::typeinfo,0);
    if (pOVar1 == pOVar5) goto LAB_001005c0;
    *(Object **)(lVar4 + 0xa60) = pOVar5;
    if (pOVar5 != (Object *)0x0) {
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        *(undefined8 *)(lVar4 + 0xa60) = 0;
      }
    }
    if (pOVar1 == (Object *)0x0) goto LAB_001005c0;
  }
  cVar3 = RefCounted::unreference();
  if (cVar3 != '\0') {
    cVar3 = predelete_handler(pOVar1);
    if (cVar3 != '\0') {
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      Memory::free_static(pOVar1,false);
    }
  }
LAB_001005c0:
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   EditorSpinSlider::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#2}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),EditorSpinSlider::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#2}>
     ::_M_invoke(_Any_data *param_1,Node **param_2,StringName *param_3,StringName *param_4)

{
  Object *pOVar1;
  code *pcVar2;
  char cVar3;
  long lVar4;
  Object *pOVar5;
  long in_FS_OFFSET;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_2 == (Node *)0x0) {
    Control::get_theme_item(local_48,0,4,param_3,param_4);
    Variant::get_validated_object();
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar4 = __dynamic_cast(*param_2,&Object::typeinfo,&EditorSpinSlider::typeinfo,0);
  Control::get_theme_item(local_48,lVar4,4,param_3,param_4);
  pOVar5 = (Object *)Variant::get_validated_object();
  pOVar1 = *(Object **)(lVar4 + 0xa68);
  if (pOVar5 == pOVar1) goto LAB_00100710;
  if (pOVar5 == (Object *)0x0) {
    if (pOVar1 == (Object *)0x0) goto LAB_00100710;
    *(undefined8 *)(lVar4 + 0xa68) = 0;
  }
  else {
    pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&Texture2D::typeinfo,0);
    if (pOVar1 == pOVar5) goto LAB_00100710;
    *(Object **)(lVar4 + 0xa68) = pOVar5;
    if (pOVar5 != (Object *)0x0) {
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        *(undefined8 *)(lVar4 + 0xa68) = 0;
      }
    }
    if (pOVar1 == (Object *)0x0) goto LAB_00100710;
  }
  cVar3 = RefCounted::unreference();
  if (cVar3 != '\0') {
    cVar3 = predelete_handler(pOVar1);
    if (cVar3 != '\0') {
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      Memory::free_static(pOVar1,false);
    }
  }
LAB_00100710:
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorSpinSlider::_grabber_gui_input(Ref<InputEvent> const&) */

void __thiscall EditorSpinSlider::_grabber_gui_input(EditorSpinSlider *this,Ref *param_1)

{
  char cVar1;
  int iVar2;
  Object *pOVar3;
  Object *pOVar4;
  char *pcVar5;
  long lVar6;
  long in_FS_OFFSET;
  float fVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  long local_50;
  float local_48 [2];
  float local_40;
  float local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((this[0xa22] == (EditorSpinSlider)0x0) && (lVar6 = *(long *)param_1, lVar6 != 0)) {
    pOVar3 = (Object *)__dynamic_cast(lVar6,&Object::typeinfo,&InputEventMouseButton::typeinfo,0);
    if (pOVar3 == (Object *)0x0) {
LAB_0010083c:
      pOVar4 = (Object *)__dynamic_cast(lVar6,&Object::typeinfo,&InputEventMouseMotion::typeinfo,0);
      if ((pOVar4 != (Object *)0x0) && (cVar1 = RefCounted::reference(), cVar1 != '\0')) {
        if ((this[0xa17] != (EditorSpinSlider)0x0) && (this[0xa16] == (EditorSpinSlider)0x0)) {
          (**(code **)(*(long *)this + 0x2a8))(local_48,this);
          fVar7 = (float)Transform2D::get_scale();
          if (ABS(fVar7) < _LC9) {
            _err_print_error("_grabber_gui_input","editor/gui/editor_spin_slider.cpp",0xe4,
                             "Condition \"Math::is_zero_approx(scale_x)\" is true.",0,0);
          }
          else {
            (**(code **)(**(long **)(this + 0xa08) + 0x290))(local_48);
            uVar8 = InputEventMouse::get_position();
            Range::set_as_ratio((double)(((((float)uVar8 * local_48[0] +
                                            (float)((ulong)uVar8 >> 0x20) * local_40 + local_38) -
                                          (float)*(int *)(this + 0xa18)) /
                                         (float)*(int *)(this + 0xa10)) / fVar7 +
                                        *(float *)(this + 0xa1c)));
            CanvasItem::queue_redraw();
          }
        }
        cVar1 = RefCounted::unreference();
        if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar4), cVar1 != '\0')) {
          (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
          Memory::free_static(pOVar4,false);
        }
      }
      if (pOVar3 == (Object *)0x0) goto LAB_001007c9;
    }
    else {
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        lVar6 = *(long *)param_1;
        pOVar3 = (Object *)0x0;
        if (lVar6 == 0) goto LAB_001007c9;
        goto LAB_0010083c;
      }
      if (this[0xa17] != (EditorSpinSlider)0x0) {
        iVar2 = InputEventMouseButton::get_button_index();
        if (iVar2 == 4) {
          dVar10 = (double)Range::get_value();
          dVar9 = (double)Range::get_step();
          Range::set_value(dVar9 + dVar10);
          this[0xa16] = (EditorSpinSlider)0x1;
        }
        else {
          iVar2 = InputEventMouseButton::get_button_index();
          if (iVar2 == 5) {
            dVar10 = (double)Range::get_value();
            dVar9 = (double)Range::get_step();
            Range::set_value(dVar10 - dVar9);
            this[0xa16] = (EditorSpinSlider)0x1;
          }
        }
      }
      iVar2 = InputEventMouseButton::get_button_index();
      if (iVar2 == 1) {
        cVar1 = InputEvent::is_pressed();
        if (cVar1 == '\0') {
          *(undefined2 *)(this + 0xa16) = 0;
          goto LAB_00100b0e;
        }
        this[0xa17] = (EditorSpinSlider)0x1;
        uVar8 = Range::get_value();
        *(undefined8 *)(this + 0xa38) = uVar8;
        if (this[0xa16] == (EditorSpinSlider)0x0) {
          dVar10 = (double)Range::get_as_ratio();
          *(float *)(this + 0xa1c) = (float)dVar10;
          (**(code **)(**(long **)(this + 0xa08) + 0x290))(local_48);
          uVar8 = InputEventMouse::get_position();
          *(int *)(this + 0xa18) =
               (int)((float)uVar8 * local_48[0] + (float)((ulong)uVar8 >> 0x20) * local_40 +
                    local_38);
        }
        Control::grab_focus();
        pcVar5 = "grabbed";
LAB_00100b1c:
        StringName::StringName((StringName *)&local_50,pcVar5,false);
        Object::emit_signal<>((Object *)this,(StringName *)&local_50);
        if ((StringName::configured != '\0') && (local_50 != 0)) {
          StringName::unref();
        }
      }
      else {
        iVar2 = InputEventMouseButton::get_button_index();
        if (((iVar2 == 2) && (cVar1 = InputEvent::is_pressed(), cVar1 != '\0')) &&
           (this[0xa17] != (EditorSpinSlider)0x0)) {
          *(undefined2 *)(this + 0xa16) = 0;
          Range::set_value(*(double *)(this + 0xa38));
LAB_00100b0e:
          pcVar5 = "ungrabbed";
          goto LAB_00100b1c;
        }
      }
      lVar6 = *(long *)param_1;
      if (lVar6 != 0) goto LAB_0010083c;
    }
    cVar1 = RefCounted::unreference();
    if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar3), cVar1 != '\0')) {
      (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        Memory::free_static(pOVar3,false);
        return;
      }
      goto LAB_00100c31;
    }
  }
LAB_001007c9:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00100c31:
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



/* EditorSpinSlider::get_label() const */

void EditorSpinSlider::get_label(void)

{
  long in_RSI;
  CowData<char32_t> *in_RDI;
  
  *(undefined8 *)in_RDI = 0;
  if (*(long *)(in_RSI + 0x9f0) != 0) {
    CowData<char32_t>::_ref(in_RDI,(CowData *)(in_RSI + 0x9f0));
  }
  return;
}



/* EditorSpinSlider::get_suffix() const */

void EditorSpinSlider::get_suffix(void)

{
  long in_RSI;
  CowData<char32_t> *in_RDI;
  
  *(undefined8 *)in_RDI = 0;
  if (*(long *)(in_RSI + 0x9f8) != 0) {
    CowData<char32_t>::_ref(in_RDI,(CowData *)(in_RSI + 0x9f8));
  }
  return;
}



/* EditorSpinSlider::set_label(String const&) */

void __thiscall EditorSpinSlider::set_label(EditorSpinSlider *this,String *param_1)

{
  if (*(long *)(this + 0x9f0) != *(long *)param_1) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x9f0),(CowData *)param_1);
  }
  CanvasItem::queue_redraw();
  return;
}



/* EditorSpinSlider::set_suffix(String const&) */

void __thiscall EditorSpinSlider::set_suffix(EditorSpinSlider *this,String *param_1)

{
  if (*(long *)(this + 0x9f8) != *(long *)param_1) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x9f8),(CowData *)param_1);
  }
  CanvasItem::queue_redraw();
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



/* EditorSpinSlider::_grab_start() */

void __thiscall EditorSpinSlider::_grab_start(EditorSpinSlider *this)

{
  long in_FS_OFFSET;
  undefined8 uVar1;
  long local_40;
  undefined8 local_38;
  undefined1 local_30 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this[0xa20] = (EditorSpinSlider)0x1;
  *(undefined4 *)(this + 0xa24) = 0;
  uVar1 = Range::get_value();
  this[0xa21] = (EditorSpinSlider)0x0;
  *(undefined8 *)(this + 0xa38) = uVar1;
  uVar1 = CanvasItem::get_global_mouse_position();
  *(undefined8 *)(this + 0xa2c) = uVar1;
  StringName::StringName((StringName *)&local_40,"grabbed",false);
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
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorSpinSlider::is_grabbing() const */

EditorSpinSlider __thiscall EditorSpinSlider::is_grabbing(EditorSpinSlider *this)

{
  EditorSpinSlider EVar1;
  
  EVar1 = this[0xa17];
  if (EVar1 == (EditorSpinSlider)0x0) {
    EVar1 = this[0xa21];
  }
  return EVar1;
}



/* EditorSpinSlider::EditorSpinSlider() */

void __thiscall EditorSpinSlider::EditorSpinSlider(EditorSpinSlider *this)

{
  long *plVar1;
  code *pcVar2;
  TextureRect *this_00;
  long in_FS_OFFSET;
  EditorSpinSlider aEStack_48 [24];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  Range::Range((Range *)this);
  *(undefined2 *)(this + 0xa20) = 0;
  *(undefined ***)this = &PTR__initialize_classv_0010f5c0;
  *(undefined2 *)(this + 0xa04) = 0;
  *(undefined4 *)(this + 0xa00) = 0xffffffff;
  *(undefined8 *)(this + 0xa08) = 0;
  *(undefined8 *)(this + 0xa10) = 1;
  *(undefined8 *)(this + 0xa18) = 0;
  this[0xa22] = (EditorSpinSlider)0x0;
  *(undefined8 *)(this + 0xa24) = 0;
  *(undefined8 *)(this + 0xa2c) = 0;
  *(undefined8 *)(this + 0xa38) = 0;
  *(undefined8 *)(this + 0xa50) = 0;
  *(undefined4 *)(this + 0xa58) = 0;
  *(undefined1 (*) [16])(this + 0x9f0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa40) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa60) = (undefined1  [16])0x0;
  Control::set_focus_mode(this,2);
  this_00 = (TextureRect *)operator_new(0x9e0,"");
  TextureRect::TextureRect(this_00);
  postinitialize_handler((Object *)this_00);
  *(TextureRect **)(this + 0xa08) = this_00;
  Node::add_child(this,this_00,0,0);
  CanvasItem::hide();
  (**(code **)(**(long **)(this + 0xa08) + 0x278))(*(long **)(this + 0xa08),1);
  Control::set_mouse_filter(*(undefined8 *)(this + 0xa08),0);
  plVar1 = *(long **)(this + 0xa08);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  create_custom_callable_function_pointer<EditorSpinSlider>
            (aEStack_48,(char *)this,(_func_void *)"&EditorSpinSlider::_grabber_mouse_entered");
  (*pcVar2)(plVar1,SceneStringNames::singleton + 0xb8,aEStack_48,0);
  Callable::~Callable((Callable *)aEStack_48);
  plVar1 = *(long **)(this + 0xa08);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  create_custom_callable_function_pointer<EditorSpinSlider>
            (aEStack_48,(char *)this,(_func_void *)"&EditorSpinSlider::_grabber_mouse_exited");
  (*pcVar2)(plVar1,SceneStringNames::singleton + 0xc0,aEStack_48,0);
  Callable::~Callable((Callable *)aEStack_48);
  plVar1 = *(long **)(this + 0xa08);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  create_custom_callable_function_pointer<EditorSpinSlider,Ref<InputEvent>const&>
            (aEStack_48,(char *)this,(_func_void_Ref_ptr *)"&EditorSpinSlider::_grabber_gui_input");
  (*pcVar2)(plVar1,SceneStringNames::singleton + 0x28,aEStack_48,0);
  Callable::~Callable((Callable *)aEStack_48);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorSpinSlider::get_text_value() const */

EditorSpinSlider * __thiscall EditorSpinSlider::get_text_value(EditorSpinSlider *this)

{
  code *pcVar1;
  char cVar2;
  Object *pOVar3;
  long in_FS_OFFSET;
  double dVar4;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pOVar3 = *(Object **)(TextServerManager::singleton + 0x178);
  if (pOVar3 == (Object *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  cVar2 = RefCounted::reference();
  if (cVar2 == '\0') {
    pOVar3 = (Object *)0x0;
  }
  local_60 = 0;
  pcVar1 = *(code **)(*(long *)pOVar3 + 0x7c0);
  local_50 = 0;
  local_58 = &_LC15;
  String::parse_latin1((StrRange *)&local_60);
  dVar4 = (double)Range::get_step();
  Math::range_step_decimals(dVar4);
  dVar4 = (double)Range::get_value();
  String::num(dVar4,(int)(CowData<char32_t> *)&local_58);
  (*pcVar1)(this,pOVar3,(CowData<char32_t> *)&local_58,(StrRange *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  cVar2 = RefCounted::unreference();
  if (cVar2 != '\0') {
    cVar2 = predelete_handler(pOVar3);
    if (cVar2 != '\0') {
      (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
      Memory::free_static(pOVar3,false);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorSpinSlider::_update_value_input_stylebox() [clone .part.0] */

void EditorSpinSlider::_update_value_input_stylebox(void)

{
  char cVar1;
  int iVar2;
  Object *pOVar3;
  undefined8 in_RDX;
  undefined8 in_RSI;
  StringName *in_RDI;
  long in_FS_OFFSET;
  float fVar4;
  float fVar5;
  Object *local_38;
  Object *local_30;
  Object *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (_update_value_input_stylebox()::{lambda()#1}::operator()()::sname == '\0') {
    iVar2 = __cxa_guard_acquire(&_update_value_input_stylebox()::{lambda()#1}::operator()()::sname,
                                in_RSI,in_RDX,
                                &_update_value_input_stylebox()::{lambda()#1}::operator()()::sname);
    if (iVar2 != 0) {
      _scs_create((char *)&_update_value_input_stylebox()::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &_update_value_input_stylebox()::{lambda()#1}::operator()()::sname,&__dso_handle)
      ;
      __cxa_guard_release(&_update_value_input_stylebox()::{lambda()#1}::operator()()::sname);
    }
  }
  Control::get_theme_stylebox((StringName *)&local_30,in_RDI);
  (**(code **)(*(long *)local_30 + 0x198))((CowData<char32_t> *)&local_28,local_30,0);
  local_38 = (Object *)0x0;
  if (local_28 != (Object *)0x0) {
    pOVar3 = (Object *)__dynamic_cast(local_28,&Object::typeinfo,&StyleBox::typeinfo,0);
    if (pOVar3 != (Object *)0x0) {
      cVar1 = RefCounted::reference();
      local_38 = pOVar3;
      if (cVar1 == '\0') {
        local_38 = (Object *)0x0;
      }
      if (local_28 == (Object *)0x0) goto LAB_001013e3;
    }
    cVar1 = RefCounted::unreference();
    if (cVar1 != '\0') {
      cVar1 = predelete_handler(local_28);
      if (cVar1 != '\0') {
        (**(code **)(*(long *)local_28 + 0x140))(local_28);
        Memory::free_static(local_28,false);
      }
    }
  }
LAB_001013e3:
  if (local_30 != (Object *)0x0) {
    cVar1 = RefCounted::unreference();
    if (cVar1 != '\0') {
      cVar1 = predelete_handler(local_30);
      if (cVar1 != '\0') {
        (**(code **)(*(long *)local_30 + 0x140))(local_30);
        Memory::free_static(local_30,false);
      }
    }
  }
  cVar1 = (**(code **)(*(long *)in_RDI + 0x340))();
  local_28 = (Object *)0x0;
  if (cVar1 == '\0') {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_28,(CowData *)(in_RDI + 0x9f0));
    if ((local_28 == (Object *)0x0) || (fVar5 = _LC28, *(uint *)((long)local_28 + -8) < 2)) {
      fVar5 = _LC29;
    }
    fVar4 = (float)EditorScale::get_scale();
    StyleBox::set_content_margin(fVar4 * fVar5,local_38,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_28);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_28,(CowData *)(in_RDI + 0x9f0));
    if ((local_28 == (Object *)0x0) || (fVar5 = _LC28, *(uint *)((long)local_28 + -8) < 2)) {
      fVar5 = _LC29;
    }
    fVar4 = (float)EditorScale::get_scale();
    StyleBox::set_content_margin(fVar4 * fVar5,local_38,2);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_28);
  }
  Control::add_theme_style_override
            (*(StringName **)(in_RDI + 0xa48),(Ref *)(CoreStringNames::singleton + 0xb8));
  if (local_38 != (Object *)0x0) {
    cVar1 = RefCounted::unreference();
    if (cVar1 != '\0') {
      cVar1 = predelete_handler(local_38);
      if (cVar1 != '\0') {
        (**(code **)(*(long *)local_38 + 0x140))(local_38);
        Memory::free_static(local_38,false);
      }
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorSpinSlider::_update_value_input_stylebox() */

void __thiscall EditorSpinSlider::_update_value_input_stylebox(EditorSpinSlider *this)

{
  if (*(long *)(this + 0xa48) != 0) {
    _update_value_input_stylebox();
    return;
  }
  return;
}



/* EditorSpinSlider::_ensure_input_popup() [clone .part.0] */

void __thiscall EditorSpinSlider::_ensure_input_popup(EditorSpinSlider *this)

{
  long *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  Control *this_00;
  LineEdit *this_01;
  CallableCustom *this_02;
  long in_FS_OFFSET;
  undefined8 local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  this_00 = (Control *)operator_new(0x9c8,"");
  Control::Control(this_00);
  postinitialize_handler((Object *)this_00);
  *(Control **)(this + 0xa40) = this_00;
  Control::set_anchors_and_offsets_preset(this_00,0xf,0,0);
  Node::add_child(this,*(undefined8 *)(this + 0xa40),0,0);
  this_01 = (LineEdit *)operator_new(0xbb0,"");
  local_58[0] = 0;
  LineEdit::LineEdit(this_01,(String *)local_58);
  postinitialize_handler((Object *)this_01);
  *(LineEdit **)(this + 0xa48) = this_01;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  LineEdit::set_emoji_menu_enabled(SUB81(*(undefined8 *)(this + 0xa48),0));
  Control::set_focus_mode(*(undefined8 *)(this + 0xa48),1);
  Node::add_child(*(undefined8 *)(this + 0xa40),*(undefined8 *)(this + 0xa48),0,0);
  Control::set_anchors_and_offsets_preset(*(undefined8 *)(this + 0xa48),0xf,0,0);
  plVar1 = *(long **)(this + 0xa40);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  create_custom_callable_function_pointer<EditorSpinSlider>
            ((EditorSpinSlider *)local_58,(char *)this,
             (_func_void *)"&EditorSpinSlider::_value_input_closed");
  (*pcVar2)(plVar1,SceneStringNames::singleton + 0x10,local_58,0);
  Callable::~Callable((Callable *)local_58);
  plVar1 = *(long **)(this + 0xa48);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  this_02 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this_02);
  *(undefined **)(this_02 + 0x20) = &_LC15;
  *(undefined1 (*) [16])(this_02 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)this_02 = &PTR_hash_0010fb70;
  *(undefined8 *)(this_02 + 0x40) = 0;
  uVar3 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(this_02 + 0x10) = 0;
  *(undefined8 *)(this_02 + 0x30) = uVar3;
  *(code **)(this_02 + 0x38) = _value_input_submitted;
  *(EditorSpinSlider **)(this_02 + 0x28) = this;
  CallableCustomMethodPointerBase::_setup((uint *)this_02,(int)this_02 + 0x28);
  *(char **)(this_02 + 0x20) = "EditorSpinSlider::_value_input_submitted";
  Callable::Callable((Callable *)local_58,this_02);
  (*pcVar2)(plVar1,SceneStringNames::singleton + 0x278,local_58,0);
  Callable::~Callable((Callable *)local_58);
  plVar1 = *(long **)(this + 0xa48);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  create_custom_callable_function_pointer<EditorSpinSlider>
            ((EditorSpinSlider *)local_58,(char *)this,
             (_func_void *)"&EditorSpinSlider::_value_focus_exited");
  (*pcVar2)(plVar1,SceneStringNames::singleton + 0xe0,local_58,0);
  Callable::~Callable((Callable *)local_58);
  plVar1 = *(long **)(this + 0xa48);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  create_custom_callable_function_pointer<EditorSpinSlider,Ref<InputEvent>const&>
            ((EditorSpinSlider *)local_58,(char *)this,
             (_func_void_Ref_ptr *)"&EditorSpinSlider::_value_input_gui_input");
  (*pcVar2)(plVar1,SceneStringNames::singleton + 0x28,local_58,0);
  Callable::~Callable((Callable *)local_58);
  if ((((byte)this[0x2fa] & 0x40) == 0) || (*(long *)(this + 0xa48) == 0)) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    _update_value_input_stylebox();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorSpinSlider::_ensure_input_popup() */

void __thiscall EditorSpinSlider::_ensure_input_popup(EditorSpinSlider *this)

{
  if (*(long *)(this + 0xa40) != 0) {
    return;
  }
  _ensure_input_popup(this);
  return;
}



/* EditorSpinSlider::get_line_edit() */

undefined8 __thiscall EditorSpinSlider::get_line_edit(EditorSpinSlider *this)

{
  if (*(long *)(this + 0xa40) != 0) {
    return *(undefined8 *)(this + 0xa48);
  }
  _ensure_input_popup(this);
  return *(undefined8 *)(this + 0xa48);
}



/* EditorSpinSlider::_focus_entered() [clone .part.0] */

void __thiscall EditorSpinSlider::_focus_entered(EditorSpinSlider *this)

{
  undefined8 uVar1;
  Vector2 *pVVar2;
  NodePath *pNVar3;
  long lVar4;
  CallableCustom *pCVar5;
  long in_FS_OFFSET;
  long local_68 [2];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0xa40) == 0) {
    _ensure_input_popup(this);
  }
  uVar1 = *(undefined8 *)(this + 0xa48);
  get_text_value((EditorSpinSlider *)local_68);
  LineEdit::set_text(uVar1,(EditorSpinSlider *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  pVVar2 = *(Vector2 **)(this + 0xa40);
  local_58 = Control::get_size();
  Control::set_size(pVVar2,SUB81((Variant *)&local_58,0));
  pNVar3 = *(NodePath **)(this + 0xa48);
  Control::find_next_valid_focus();
  Node::get_path();
  Control::set_focus_next(pNVar3);
  NodePath::~NodePath((NodePath *)local_68);
  pNVar3 = *(NodePath **)(this + 0xa48);
  Control::find_prev_valid_focus();
  Node::get_path();
  Control::set_focus_previous(pNVar3);
  NodePath::~NodePath((NodePath *)local_68);
  create_custom_callable_function_pointer<CanvasItem>
            ((CanvasItem *)local_68,*(char **)(this + 0xa40),(_func_void *)"&CanvasItem::show");
  Variant::Variant((Variant *)&local_58,0);
  Callable::call_deferredp((Variant **)local_68,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  Callable::~Callable((Callable *)local_68);
  lVar4 = *(long *)(this + 0xa48);
  pCVar5 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar5);
  *(undefined1 (*) [16])(pCVar5 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)pCVar5 = &PTR_hash_0010f9c0;
  *(undefined8 *)(pCVar5 + 0x40) = 0;
  uVar1 = *(undefined8 *)(lVar4 + 0x60);
  *(long *)(pCVar5 + 0x28) = lVar4;
  *(undefined8 *)(pCVar5 + 0x30) = uVar1;
  *(undefined8 *)(pCVar5 + 0x10) = 0;
  *(code **)(pCVar5 + 0x38) = Control::grab_focus;
  *(undefined **)(pCVar5 + 0x20) = &_LC15;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar5,(int)pCVar5 + 0x28);
  *(char **)(pCVar5 + 0x20) = "Control::grab_focus";
  Callable::Callable((Callable *)local_68,pCVar5);
  Variant::Variant((Variant *)&local_58,0);
  Callable::call_deferredp((Variant **)local_68,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  Callable::~Callable((Callable *)local_68);
  lVar4 = *(long *)(this + 0xa48);
  pCVar5 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar5);
  *(undefined1 (*) [16])(pCVar5 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)pCVar5 = &PTR_hash_0010fa50;
  *(undefined8 *)(pCVar5 + 0x40) = 0;
  uVar1 = *(undefined8 *)(lVar4 + 0x60);
  *(long *)(pCVar5 + 0x28) = lVar4;
  *(undefined8 *)(pCVar5 + 0x30) = uVar1;
  *(undefined8 *)(pCVar5 + 0x10) = 0;
  *(code **)(pCVar5 + 0x38) = LineEdit::select_all;
  *(undefined **)(pCVar5 + 0x20) = &_LC15;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar5,(int)pCVar5 + 0x28);
  *(char **)(pCVar5 + 0x20) = "LineEdit ::select_all";
  Callable::Callable((Callable *)local_68,pCVar5);
  Variant::Variant((Variant *)&local_58,0);
  Callable::call_deferredp((Variant **)local_68,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  Callable::~Callable((Callable *)local_68);
  StringName::StringName((StringName *)local_68,"value_focus_entered",false);
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  (**(code **)(*(long *)this + 0xd0))(this,(EditorSpinSlider *)local_68,0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_68[0] != 0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorSpinSlider::_focus_entered() */

void __thiscall EditorSpinSlider::_focus_entered(EditorSpinSlider *this)

{
  if (this[0xa22] == (EditorSpinSlider)0x0) {
    _focus_entered(this);
    return;
  }
  return;
}



/* EditorSpinSlider::_grab_end() */

void __thiscall EditorSpinSlider::_grab_end(EditorSpinSlider *this)

{
  undefined8 uVar1;
  Vector2 *pVVar2;
  long in_FS_OFFSET;
  long local_40;
  undefined8 local_38;
  undefined1 local_30 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (this[0xa20] != (EditorSpinSlider)0x0) {
    if (this[0xa21] == (EditorSpinSlider)0x0) {
      if (this[0xa22] == (EditorSpinSlider)0x0) {
        _focus_entered(this);
      }
    }
    else {
      uVar1 = Input::get_singleton();
      Input::set_mouse_mode(uVar1,0);
      pVVar2 = (Vector2 *)Input::get_singleton();
      Input::warp_mouse(pVVar2);
      CanvasItem::queue_redraw();
      this[0xa21] = (EditorSpinSlider)0x0;
      StringName::StringName((StringName *)&local_40,"ungrabbed",false);
      local_30 = (undefined1  [16])0x0;
      local_38 = 0;
      (**(code **)(*(long *)this + 0xd0))(this,(StringName *)&local_40,0,0);
      if (Variant::needs_deinit[(int)local_38] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_40 != 0)) {
        StringName::unref();
      }
    }
    this[0xa20] = (EditorSpinSlider)0x0;
  }
  if (this[0xa17] != (EditorSpinSlider)0x0) {
    *(undefined2 *)(this + 0xa16) = 0;
    StringName::StringName((StringName *)&local_40,"ungrabbed",false);
    local_30 = (undefined1  [16])0x0;
    local_38 = 0;
    (**(code **)(*(long *)this + 0xd0))(this,(StringName *)&local_40,0,0);
    if (Variant::needs_deinit[(int)local_38] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_40 != 0)) {
      StringName::unref();
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EditorSpinSlider::gui_input(Ref<InputEvent> const&) */

void __thiscall EditorSpinSlider::gui_input(EditorSpinSlider *this,Ref *param_1)

{
  char cVar1;
  EditorSpinSlider EVar2;
  int iVar3;
  Object *pOVar4;
  Object *pOVar5;
  Object *pOVar6;
  bool bVar7;
  long lVar8;
  long in_FS_OFFSET;
  float fVar9;
  float fVar10;
  float extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  double dVar11;
  undefined8 uVar12;
  float fVar13;
  double dVar14;
  long local_68 [2];
  int local_58 [6];
  long local_40;
  
  lVar8 = *(long *)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar8 == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("gui_input","editor/gui/editor_spin_slider.cpp",0x35,
                       "Condition \"p_event.is_null()\" is true.",0,0);
      return;
    }
    goto LAB_001028c4;
  }
  if (this[0xa22] == (EditorSpinSlider)0x0) {
    pOVar4 = (Object *)__dynamic_cast(lVar8,&Object::typeinfo,&InputEventMouseButton::typeinfo,0);
    if (pOVar4 == (Object *)0x0) {
LAB_0010202d:
      pOVar5 = (Object *)__dynamic_cast(lVar8,&Object::typeinfo,&InputEventMouseMotion::typeinfo,0);
      if (pOVar5 == (Object *)0x0) {
        lVar8 = *(long *)param_1;
LAB_0010206c:
        pOVar6 = (Object *)__dynamic_cast(lVar8,&Object::typeinfo,&InputEventKey::typeinfo,0);
        if ((pOVar6 != (Object *)0x0) && (cVar1 = RefCounted::reference(), cVar1 != '\0')) {
          cVar1 = InputEvent::is_pressed();
          if (cVar1 != '\0') {
            StringName::StringName((StringName *)local_68,"ui_accept",false);
            bVar7 = SUB81((StringName *)local_68,0);
            cVar1 = InputEvent::is_action((StringName *)pOVar6,bVar7);
            if ((StringName::configured != '\0') && (local_68[0] != 0)) {
              StringName::unref();
            }
            if (cVar1 == '\0') {
              if ((this[0xa17] != (EditorSpinSlider)0x0) || (this[0xa21] != (EditorSpinSlider)0x0))
              {
                StringName::StringName((StringName *)local_68,"ui_cancel",false);
                cVar1 = InputEvent::is_action((StringName *)pOVar6,bVar7);
                if ((StringName::configured != '\0') && (local_68[0] != 0)) {
                  StringName::unref();
                }
                if (cVar1 != '\0') {
                  _grab_end(this);
                  Range::set_value(*(double *)(this + 0xa38));
                }
                Control::accept_event();
              }
            }
            else if (this[0xa22] == (EditorSpinSlider)0x0) {
              _focus_entered(this);
            }
          }
          cVar1 = RefCounted::unreference();
          if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar6), cVar1 != '\0')) {
            (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
            Memory::free_static(pOVar6,false);
          }
        }
        if (pOVar5 != (Object *)0x0) {
LAB_001020b6:
          cVar1 = RefCounted::unreference();
          if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar5), cVar1 != '\0')) {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
      else {
        EVar2 = (EditorSpinSlider)RefCounted::reference();
        if (EVar2 != (EditorSpinSlider)0x0) {
          if (this[0xa20] == (EditorSpinSlider)0x0) {
            if (*(int *)(this + 0xa00) != -1) {
              cVar1 = (**(code **)(*(long *)this + 0x340))(this);
              if (((cVar1 != '\0') ||
                  (fVar10 = (float)InputEventMouse::get_position(),
                  fVar10 <= (float)*(int *)(this + 0xa00))) &&
                 (EVar2 = (EditorSpinSlider)(**(code **)(*(long *)this + 0x340))(this),
                 EVar2 != (EditorSpinSlider)0x0)) {
                fVar10 = (float)InputEventMouse::get_position();
                EVar2 = (EditorSpinSlider)(fVar10 < (float)*(int *)(this + 0xa00));
              }
              if (this[0xa04] != EVar2) {
                this[0xa04] = EVar2;
                CanvasItem::queue_redraw();
              }
            }
          }
          else {
            fVar10 = (float)InputEventMouseMotion::get_relative();
            dVar14 = (double)fVar10;
            cVar1 = InputEventWithModifiers::is_shift_pressed();
            if (cVar1 == '\0') {
              fVar10 = *(float *)(this + 0xa28);
              fVar13 = (float)((double)*(float *)(this + 0xa24) + (double)fVar10 * dVar14);
              *(float *)(this + 0xa24) = fVar13;
              if (this[0xa21] == (EditorSpinSlider)0x0) {
LAB_001026bd:
                if (fVar13 < 0.0) {
                  fVar13 = (float)((uint)fVar13 ^ __LC44);
                }
                fVar10 = fVar10 * __LC45;
                fVar9 = (float)EditorScale::get_scale();
                if (fVar9 * fVar10 < fVar13) {
                  uVar12 = Input::get_singleton();
                  Input::set_mouse_mode(uVar12);
                  this[0xa21] = (EditorSpinSlider)0x1;
                }
                else if (this[0xa21] == (EditorSpinSlider)0x0) goto LAB_00102189;
              }
            }
            else {
              fVar10 = *(float *)(this + 0xa28);
              if (this[0xa21] == (EditorSpinSlider)0x0) {
                fVar13 = (float)((double)fVar10 * dVar14 + (double)*(float *)(this + 0xa24));
                *(float *)(this + 0xa24) = fVar13;
                goto LAB_001026bd;
              }
              *(float *)(this + 0xa24) =
                   (float)(dVar14 * __LC43 * (double)fVar10 + (double)*(float *)(this + 0xa24));
            }
            dVar14 = *(double *)(this + 0xa38);
            dVar11 = (double)Range::get_min();
            if ((dVar11 <= dVar14) || (cVar1 = Range::is_lesser_allowed(), cVar1 != '\0')) {
              dVar14 = *(double *)(this + 0xa38);
            }
            else {
              dVar14 = (double)Range::get_min();
              *(double *)(this + 0xa38) = dVar14;
            }
            dVar11 = (double)Range::get_max();
            if ((dVar11 < dVar14) && (cVar1 = Range::is_greater_allowed(), cVar1 == '\0')) {
              uVar12 = Range::get_max();
              *(undefined8 *)(this + 0xa38) = uVar12;
            }
            cVar1 = InputEventWithModifiers::is_command_or_control_pressed();
            if (cVar1 == '\0') {
              dVar14 = *(double *)(this + 0xa38);
              dVar11 = (double)Range::get_step();
              Range::set_value((double)*(float *)(this + 0xa24) * dVar11 + dVar14);
            }
            else {
              fVar10 = *(float *)(this + 0xa24);
              if (fVar10 == 0.0) {
                dVar14 = *(double *)(this + 0xa38);
              }
              else {
                dVar14 = (double)Range::get_step();
                *(undefined4 *)(this + 0xa24) = 0;
                dVar14 = (double)fVar10 * dVar14 + *(double *)(this + 0xa38);
                *(double *)(this + 0xa38) = dVar14;
              }
              dVar11 = (double)Range::get_step();
              dVar14 = round((double)*(float *)(this + 0xa24) * dVar11 * __LC46 + dVar14);
              Range::set_value(dVar14);
            }
          }
LAB_00102189:
          lVar8 = *(long *)param_1;
          if (lVar8 != 0) goto LAB_0010206c;
          goto LAB_001020b6;
        }
        lVar8 = *(long *)param_1;
        if (lVar8 != 0) {
          pOVar5 = (Object *)0x0;
          goto LAB_0010206c;
        }
      }
      if (pOVar4 == (Object *)0x0) goto LAB_00101f7a;
    }
    else {
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        lVar8 = *(long *)param_1;
        pOVar4 = (Object *)0x0;
        if (lVar8 == 0) goto LAB_00101f7a;
        goto LAB_0010202d;
      }
      iVar3 = InputEventMouseButton::get_button_index();
      if (iVar3 == 1) {
        cVar1 = InputEvent::is_pressed();
        if (cVar1 == '\0') {
          _grab_end(this);
          goto LAB_00102020;
        }
        if ((*(int *)(this + 0xa00) == -1) ||
           (((cVar1 = (**(code **)(*(long *)this + 0x340))(this), cVar1 != '\0' ||
             (fVar10 = (float)InputEventMouse::get_position(),
             fVar10 <= (float)*(int *)(this + 0xa00))) &&
            ((cVar1 = (**(code **)(*(long *)this + 0x340))(this), cVar1 == '\0' ||
             (fVar10 = (float)InputEventMouse::get_position(),
             (float)*(int *)(this + 0xa00) <= fVar10)))))) {
          _grab_start(this);
          goto LAB_00102020;
        }
        InputEventMouse::get_position();
        Control::get_size();
        if (extraout_XMM0_Db_00 * __LC40 <= extraout_XMM0_Db) {
          dVar14 = (double)Range::get_value();
          dVar11 = (double)Range::get_step();
          Range::set_value(dVar14 - dVar11);
        }
        else {
          dVar14 = (double)Range::get_value();
          dVar11 = (double)Range::get_step();
          Range::set_value(dVar11 + dVar14);
        }
        StringName::StringName((StringName *)local_68,"updown_pressed",false);
        Object::emit_signal<>((Object *)this,(StringName *)local_68);
        if ((StringName::configured != '\0') && (local_68[0] != 0)) {
          StringName::unref();
        }
      }
      else {
        iVar3 = InputEventMouseButton::get_button_index();
        if (iVar3 == 2) {
          cVar1 = InputEvent::is_pressed();
          if ((cVar1 != '\0') &&
             ((this[0xa17] != (EditorSpinSlider)0x0 || (this[0xa21] != (EditorSpinSlider)0x0)))) {
            _grab_end(this);
            Range::set_value(*(double *)(this + 0xa38));
          }
        }
        else {
          iVar3 = InputEventMouseButton::get_button_index();
          if (((iVar3 == 4) || (iVar3 = InputEventMouseButton::get_button_index(), iVar3 == 5)) &&
             (cVar1 = CanvasItem::is_visible(), cVar1 != '\0')) {
            create_custom_callable_function_pointer<CanvasItem>
                      ((CanvasItem *)local_68,(char *)this,(_func_void *)"&CanvasItem::queue_redraw"
                      );
            Variant::Variant((Variant *)local_58,0);
            Callable::call_deferredp((Variant **)local_68,0);
            if (Variant::needs_deinit[local_58[0]] != '\0') {
              Variant::_clear_internal();
            }
            Callable::~Callable((Callable *)local_68);
          }
        }
LAB_00102020:
        lVar8 = *(long *)param_1;
        if (lVar8 != 0) goto LAB_0010202d;
      }
    }
    cVar1 = RefCounted::unreference();
    if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar4), cVar1 != '\0')) {
      (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        Memory::free_static(pOVar4,false);
        return;
      }
      goto LAB_001028c4;
    }
  }
LAB_00101f7a:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001028c4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorSpinSlider::get_tooltip(Vector2 const&) const */

EditorSpinSlider * __thiscall EditorSpinSlider::get_tooltip(EditorSpinSlider *this,Vector2 *param_1)

{
  code *pcVar1;
  char cVar2;
  String *pSVar3;
  Object *pOVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  double dVar6;
  CowData<char32_t> local_98 [8];
  undefined8 local_90;
  CowData<char32_t> local_88 [8];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1[0xa22] == (Vector2)0x0) {
    cVar2 = CanvasItem::is_visible();
    if (cVar2 != '\0') {
      pSVar3 = (String *)OS::get_singleton();
      local_68 = 0;
      String::parse_latin1((String *)&local_68,"macos");
      uVar5 = 0x400017;
      cVar2 = OS::has_feature(pSVar3);
      if (cVar2 == '\0') {
        pSVar3 = (String *)OS::get_singleton();
        local_60 = 0;
        String::parse_latin1((String *)&local_60,"web_macos");
        cVar2 = OS::has_feature(pSVar3);
        if (cVar2 == '\0') {
          pSVar3 = (String *)OS::get_singleton();
          local_58 = (undefined *)0x0;
          String::parse_latin1((String *)&local_58,"web_ios");
          cVar2 = OS::has_feature(pSVar3);
          if (cVar2 != '\0') {
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
            goto LAB_00102c4f;
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
          uVar5 = 0x400016;
        }
        else {
LAB_00102c4f:
          uVar5 = 0x400017;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      find_keycode_name(uVar5);
      local_70 = 0;
      String::parse_latin1((String *)&local_70,"");
      local_78 = 0;
      String::parse_latin1
                ((String *)&local_78,
                 "Hold %s to round to integers.\nHold Shift for more precise changes.");
      TTR((String *)&local_68,(String *)&local_78);
      vformat<char_const*>((String *)&local_60,(char *)&local_68);
      local_80 = 0;
      String::parse_latin1((String *)&local_80,"\n\n");
      pOVar4 = *(Object **)(TextServerManager::singleton + 0x178);
      if (pOVar4 == (Object *)0x0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      local_58 = (undefined *)0x0;
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        pOVar4 = (Object *)0x0;
      }
      Ref<TextServer>::unref((Ref<TextServer> *)&local_58);
      local_90 = 0;
      pcVar1 = *(code **)(*(long *)pOVar4 + 0x7c0);
      String::parse_latin1((String *)&local_90,"");
      dVar6 = (double)Range::get_value();
      rtos(dVar6);
      (*pcVar1)(local_88,pOVar4,local_98,(String *)&local_90);
      String::operator+((String *)&local_58,(String *)local_88);
      String::operator+((String *)this,(String *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref(local_88);
      CowData<char32_t>::_unref(local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
        cVar2 = predelete_handler(pOVar4);
        if (cVar2 != '\0') {
          (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
          Memory::free_static(pOVar4,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      goto LAB_001029be;
    }
  }
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
  local_60 = 0;
  local_58 = &_LC15;
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  dVar6 = (double)Range::get_value();
  rtos(dVar6);
  (*pcVar1)(this,pOVar4,(CowData<char32_t> *)&local_58,(StrRange *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  cVar2 = RefCounted::unreference();
  if (cVar2 != '\0') {
    cVar2 = predelete_handler(pOVar4);
    if (cVar2 != '\0') {
      (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
      Memory::free_static(pOVar4,false);
    }
  }
LAB_001029be:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EditorSpinSlider::_draw_spin_slider() */

void __thiscall EditorSpinSlider::_draw_spin_slider(EditorSpinSlider *this)

{
  code *pcVar1;
  Object *pOVar2;
  undefined4 uVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  EditorSpinSlider *pEVar8;
  Vector2 *pVVar9;
  bool bVar10;
  long lVar11;
  int iVar12;
  long *plVar13;
  int iVar14;
  undefined1 uVar15;
  StringName *pSVar16;
  Object *pOVar17;
  undefined1 *puVar18;
  int iVar19;
  char *pcVar20;
  long in_FS_OFFSET;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  double dVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined8 local_100;
  Object *local_f8;
  Object *local_f0;
  Object *local_e8;
  long local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  String local_c8 [8];
  Array local_c0 [8];
  Dictionary local_b8 [8];
  Object *local_b0;
  Object *local_a8;
  undefined8 local_a0;
  undefined8 local_90;
  Color local_88 [16];
  undefined8 local_78;
  undefined8 local_70;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  ulong local_58;
  undefined1 auStack_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_100 = *(undefined8 *)(this + 0x428);
  *(undefined4 *)(this + 0xa00) = 0xffffffff;
  cVar4 = (**(code **)(*(long *)this + 0x340))();
  uVar27 = Control::get_size();
  fVar26 = (float)uVar27;
  fVar25 = (float)((ulong)uVar27 >> 0x20);
  if ((_draw_spin_slider()::{lambda()#2}::operator()()::sname == '\0') &&
     (iVar6 = __cxa_guard_acquire(&_draw_spin_slider()::{lambda()#2}::operator()()::sname),
     iVar6 != 0)) {
    _scs_create((char *)&_draw_spin_slider()::{lambda()#2}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_draw_spin_slider()::{lambda()#2}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_draw_spin_slider()::{lambda()#2}::operator()()::sname);
  }
  if (((this[0xa22] != (EditorSpinSlider)0x0) &&
      (_draw_spin_slider()::{lambda()#1}::operator()()::sname == '\0')) &&
     (iVar6 = __cxa_guard_acquire(&_draw_spin_slider()::{lambda()#1}::operator()()::sname),
     iVar6 != 0)) {
    _scs_create((char *)&_draw_spin_slider()::{lambda()#1}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_draw_spin_slider()::{lambda()#1}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_draw_spin_slider()::{lambda()#1}::operator()()::sname);
  }
  Control::get_theme_stylebox((StringName *)&local_f8,(StringName *)this);
  if (this[0xa5a] == (EditorSpinSlider)0x0) {
    local_58 = 0;
    auStack_50._0_8_ = uVar27;
    CanvasItem::draw_style_box((Ref *)this,(Rect2 *)&local_f8);
  }
  if ((_draw_spin_slider()::{lambda()#3}::operator()()::sname == '\0') &&
     (iVar6 = __cxa_guard_acquire(&_draw_spin_slider()::{lambda()#3}::operator()()::sname),
     iVar6 != 0)) {
    _scs_create((char *)&_draw_spin_slider()::{lambda()#3}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_draw_spin_slider()::{lambda()#3}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_draw_spin_slider()::{lambda()#3}::operator()()::sname);
  }
  Control::get_theme_font((StringName *)&local_f0,(StringName *)this);
  if ((_draw_spin_slider()::{lambda()#4}::operator()()::sname == '\0') &&
     (iVar6 = __cxa_guard_acquire(&_draw_spin_slider()::{lambda()#4}::operator()()::sname),
     iVar6 != 0)) {
    _scs_create((char *)&_draw_spin_slider()::{lambda()#4}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_draw_spin_slider()::{lambda()#4}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_draw_spin_slider()::{lambda()#4}::operator()()::sname);
  }
  iVar6 = Control::get_theme_font_size
                    ((StringName *)this,(StringName *)(SceneStringNames::singleton + 0xa8));
  fVar21 = (float)EditorScale::get_scale();
  fVar21 = fVar21 * __LC45;
  fVar22 = (float)StyleBox::get_offset();
  fVar23 = (float)(**(code **)(*(long *)local_f0 + 0x288))(local_f0,this + 0x9f0,0,iVar6,3,0);
  fVar24 = (float)(**(code **)(*(long *)local_f8 + 0x1d0))();
  fVar23 = (float)(int)fVar23;
  fVar21 = (float)(int)(fVar22 + (float)(int)fVar21);
  iVar12 = (int)(((fVar26 - fVar24) - fVar23) - fVar21);
  if ((_draw_spin_slider()::{lambda()#7}::operator()()::sname == '\0') &&
     (iVar19 = __cxa_guard_acquire(&_draw_spin_slider()::{lambda()#7}::operator()()::sname),
     iVar19 != 0)) {
    _scs_create((char *)&_draw_spin_slider()::{lambda()#7}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_draw_spin_slider()::{lambda()#7}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_draw_spin_slider()::{lambda()#7}::operator()()::sname);
  }
  if (this[0xa22] == (EditorSpinSlider)0x0) {
    if ((_draw_spin_slider()::{lambda()#6}::operator()()::sname == '\0') &&
       (iVar19 = __cxa_guard_acquire(&_draw_spin_slider()::{lambda()#6}::operator()()::sname),
       iVar19 != 0)) {
      _scs_create((char *)&_draw_spin_slider()::{lambda()#6}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_draw_spin_slider()::{lambda()#6}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_draw_spin_slider()::{lambda()#6}::operator()()::sname);
    }
  }
  else if ((_draw_spin_slider()::{lambda()#5}::operator()()::sname == '\0') &&
          (iVar19 = __cxa_guard_acquire(&_draw_spin_slider()::{lambda()#5}::operator()()::sname),
          iVar19 != 0)) {
    _scs_create((char *)&_draw_spin_slider()::{lambda()#5}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_draw_spin_slider()::{lambda()#5}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_draw_spin_slider()::{lambda()#5}::operator()()::sname);
  }
  Control::get_theme_icon((StringName *)&local_e8,(StringName *)this);
  get_text_value((EditorSpinSlider *)&local_e0);
  fVar22 = (float)(**(code **)(*(long *)local_f0 + 0x218))(local_f0,iVar6);
  fVar22 = (fVar25 - fVar22) * __LC40;
  fVar24 = (float)(**(code **)(*(long *)local_f0 + 0x220))(local_f0,iVar6);
  iVar19 = (int)(fVar24 + fVar22);
  if ((_draw_spin_slider()::{lambda()#9}::operator()()::sname == '\0') &&
     (iVar14 = __cxa_guard_acquire(&_draw_spin_slider()::{lambda()#9}::operator()()::sname),
     iVar14 != 0)) {
    _scs_create((char *)&_draw_spin_slider()::{lambda()#9}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_draw_spin_slider()::{lambda()#9}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_draw_spin_slider()::{lambda()#9}::operator()()::sname);
  }
  if (this[0xa22] == (EditorSpinSlider)0x0) {
    pSVar16 = (StringName *)(SceneStringNames::singleton + 0xb0);
  }
  else {
    if ((_draw_spin_slider()::{lambda()#8}::operator()()::sname == '\0') &&
       (iVar14 = __cxa_guard_acquire(&_draw_spin_slider()::{lambda()#8}::operator()()::sname),
       iVar14 != 0)) {
      _scs_create((char *)&_draw_spin_slider()::{lambda()#8}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_draw_spin_slider()::{lambda()#8}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_draw_spin_slider()::{lambda()#8}::operator()()::sname);
    }
    pSVar16 = (StringName *)&_draw_spin_slider()::{lambda()#8}::operator()()::sname;
  }
  auVar30 = Control::get_theme_color((StringName *)this,pSVar16);
  uVar28 = auVar30._0_8_;
  local_a8 = (Object *)0x0;
  if (this[0xa22] == (EditorSpinSlider)0x0) {
    if ((_draw_spin_slider()::{lambda()#11}::operator()()::sname == '\0') &&
       (iVar14 = __cxa_guard_acquire(&_draw_spin_slider()::{lambda()#11}::operator()()::sname),
       iVar14 != 0)) {
      _scs_create((char *)&_draw_spin_slider()::{lambda()#11}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_draw_spin_slider()::{lambda()#11}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_draw_spin_slider()::{lambda()#11}::operator()()::sname);
    }
    pSVar16 = (StringName *)&_draw_spin_slider()::{lambda()#11}::operator()()::sname;
  }
  else {
    if ((_draw_spin_slider()::{lambda()#10}::operator()()::sname == '\0') &&
       (iVar14 = __cxa_guard_acquire(&_draw_spin_slider()::{lambda()#10}::operator()()::sname),
       iVar14 != 0)) {
      _scs_create((char *)&_draw_spin_slider()::{lambda()#10}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_draw_spin_slider()::{lambda()#10}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_draw_spin_slider()::{lambda()#10}::operator()()::sname);
    }
    pSVar16 = (StringName *)&_draw_spin_slider()::{lambda()#10}::operator()()::sname;
  }
  local_88 = (Color  [16])Control::get_theme_color((StringName *)this,pSVar16);
  if ((StringName::configured != '\0') && (local_a8 != (Object *)0x0)) {
    StringName::unref();
  }
  if (((this[0xa5a] != (EditorSpinSlider)0x0) && (*(long *)(this + 0x9f0) != 0)) &&
     (1 < *(uint *)(*(long *)(this + 0x9f0) + -8))) {
    if (_draw_spin_slider()::{lambda()#13}::operator()()::sname == '\0') {
      iVar14 = __cxa_guard_acquire(&_draw_spin_slider()::{lambda()#13}::operator()()::sname);
      if (iVar14 != 0) {
        _scs_create((char *)&_draw_spin_slider()::{lambda()#13}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &_draw_spin_slider()::{lambda()#13}::operator()()::sname,&__dso_handle);
        __cxa_guard_release(&_draw_spin_slider()::{lambda()#13}::operator()()::sname);
      }
    }
    if (_draw_spin_slider()::{lambda()#12}::operator()()::sname == '\0') {
      iVar14 = __cxa_guard_acquire(&_draw_spin_slider()::{lambda()#12}::operator()()::sname);
      if (iVar14 != 0) {
        _scs_create((char *)&_draw_spin_slider()::{lambda()#12}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &_draw_spin_slider()::{lambda()#12}::operator()()::sname,&__dso_handle);
        __cxa_guard_release(&_draw_spin_slider()::{lambda()#12}::operator()()::sname);
      }
    }
    Control::get_theme_stylebox((StringName *)&local_a8,(StringName *)this);
    if (cVar4 == '\0') {
      fVar22 = (float)StyleBox::get_offset();
      auVar31 = auStack_50;
      local_58 = 0;
      auStack_50._4_4_ = fVar25;
      auStack_50._0_4_ = fVar22 + fVar22 + fVar23;
      auStack_50._8_8_ = auVar31._8_8_;
      CanvasItem::draw_style_box((Ref *)this,(Rect2 *)&local_a8);
    }
    else {
      fVar22 = (float)StyleBox::get_offset();
      fVar24 = (float)StyleBox::get_offset();
      auStack_50._4_4_ = fVar25;
      auStack_50._0_4_ = fVar22 + fVar22 + fVar23;
      local_58 = (ulong)(uint)(fVar26 - (fVar24 + fVar24 + fVar23));
      CanvasItem::draw_style_box((Ref *)this,(Rect2 *)&local_a8);
    }
    if (local_a8 != (Object *)0x0) {
      cVar5 = RefCounted::unreference();
      pOVar17 = local_a8;
      if (cVar5 != '\0') {
        cVar5 = predelete_handler(local_a8);
        if (cVar5 != '\0') {
          (**(code **)(*(long *)pOVar17 + 0x140))(pOVar17);
          Memory::free_static(pOVar17,false);
        }
      }
    }
  }
  cVar5 = Control::has_focus();
  if (cVar5 != '\0') {
    if (_draw_spin_slider()::{lambda()#15}::operator()()::sname == '\0') {
      iVar14 = __cxa_guard_acquire(&_draw_spin_slider()::{lambda()#15}::operator()()::sname);
      if (iVar14 != 0) {
        _scs_create((char *)&_draw_spin_slider()::{lambda()#15}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &_draw_spin_slider()::{lambda()#15}::operator()()::sname,&__dso_handle);
        __cxa_guard_release(&_draw_spin_slider()::{lambda()#15}::operator()()::sname);
      }
    }
    if (_draw_spin_slider()::{lambda()#14}::operator()()::sname == '\0') {
      iVar14 = __cxa_guard_acquire(&_draw_spin_slider()::{lambda()#14}::operator()()::sname);
      if (iVar14 != 0) {
        _scs_create((char *)&_draw_spin_slider()::{lambda()#14}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &_draw_spin_slider()::{lambda()#14}::operator()()::sname,&__dso_handle);
        __cxa_guard_release(&_draw_spin_slider()::{lambda()#14}::operator()()::sname);
      }
    }
    Control::get_theme_stylebox((StringName *)&local_a8,(StringName *)this);
    local_58 = 0;
    auStack_50._0_8_ = uVar27;
    CanvasItem::draw_style_box((Ref *)this,(Rect2 *)&local_a8);
    if (local_a8 != (Object *)0x0) {
      cVar5 = RefCounted::unreference();
      pOVar17 = local_a8;
      if (cVar5 != '\0') {
        cVar5 = predelete_handler(local_a8);
        if (cVar5 != '\0') {
          (**(code **)(*(long *)pOVar17 + 0x140))(pOVar17);
          Memory::free_static(pOVar17,false);
        }
      }
    }
  }
  local_68 = _LC82;
  fStack_64 = _UNK_0010ffe4;
  fStack_60 = _UNK_0010ffe8;
  fStack_5c = __LC40;
  if (cVar4 == '\0') {
    auVar31 = Color::operator*(local_88,(Color *)&local_68);
    local_58 = auVar31._0_8_;
    auStack_50._0_8_ = auVar31._8_8_;
    fVar22 = (float)StyleBox::get_offset();
    fVar22 = roundf(fVar22);
    uVar27 = 0;
    local_78 = CONCAT44((float)iVar19,fVar22);
  }
  else {
    auVar31 = Color::operator*(local_88,(Color *)&local_68);
    local_58 = auVar31._0_8_;
    auStack_50._0_8_ = auVar31._8_8_;
    fVar22 = (float)StyleBox::get_offset();
    fVar22 = roundf((fVar26 - fVar22) - fVar23);
    uVar27 = 2;
    local_78 = CONCAT44((float)iVar19,fVar22);
  }
  fVar22 = (float)iVar19;
  CanvasItem::draw_string
            (this,(StringName *)&local_f0,&local_78,this + 0x9f0,uVar27,iVar6,(Color *)&local_58,3,0
             ,0);
  if (local_e0 == 0) {
    iVar19 = 0;
  }
  else {
    iVar19 = (int)*(undefined8 *)(local_e0 + -8);
    iVar19 = iVar19 + -1 + (uint)(iVar19 == 0);
  }
  pOVar17 = *(Object **)(TextServerManager::singleton + 0x178);
  if (pOVar17 == (Object *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  local_a8 = (Object *)0x0;
  cVar5 = RefCounted::reference();
  if (cVar5 == '\0') {
    pOVar17 = (Object *)0x0;
  }
  Ref<TextServer>::unref((Ref<TextServer> *)&local_a8);
  local_d8 = (**(code **)(*(long *)pOVar17 + 0x598))(pOVar17,0,0);
  cVar5 = RefCounted::unreference();
  if (cVar5 != '\0') {
    cVar5 = predelete_handler(pOVar17);
    if (cVar5 != '\0') {
      (**(code **)(*(long *)pOVar17 + 0x140))(pOVar17);
      Memory::free_static(pOVar17,false);
    }
  }
  pOVar17 = *(Object **)(TextServerManager::singleton + 0x178);
  if (pOVar17 == (Object *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  local_a8 = (Object *)0x0;
  cVar5 = RefCounted::reference();
  if (cVar5 == '\0') {
    pOVar17 = (Object *)0x0;
  }
  Ref<TextServer>::unref((Ref<TextServer> *)&local_a8);
  pcVar1 = *(code **)(*(long *)pOVar17 + 0x628);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = 0;
  local_b0 = (Object *)0x0;
  String::parse_latin1((String *)&local_b0,"");
  (**(code **)(*(long *)local_f0 + 0x278))(local_b8);
  (**(code **)(*(long *)local_f0 + 0x210))(local_c0);
  local_a8 = (Object *)&_LC83;
  local_d0 = 0;
  local_a0 = 1;
  String::parse_utf32((StrRange *)&local_d0);
  String::operator+(local_c8,(String *)&local_e0);
  String::operator+((String *)&local_a8,local_c8);
  (*pcVar1)(pOVar17,&local_d8,(StringName *)&local_a8,local_c0,(long)iVar6,local_b8,
            (String *)&local_b0,(Color *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  Array::~Array(local_c0);
  Dictionary::~Dictionary(local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  cVar5 = RefCounted::unreference();
  if (cVar5 != '\0') {
    cVar5 = predelete_handler(pOVar17);
    if (cVar5 != '\0') {
      (**(code **)(*(long *)pOVar17 + 0x140))(pOVar17);
      Memory::free_static(pOVar17,false);
    }
  }
  if (cVar4 == '\0') {
    fVar24 = (float)StyleBox::get_offset();
    fVar23 = roundf(fVar24 + fVar23 + fVar21);
    fVar21 = fVar23;
  }
  else {
    fVar21 = (float)StyleBox::get_offset();
    local_b0 = (Object *)0x0;
    pOVar17 = *(Object **)(TextServerManager::singleton + 0x178);
    if (pOVar17 != (Object *)0x0) {
      local_a8 = (Object *)0x0;
      local_b0 = pOVar17;
      cVar5 = RefCounted::reference();
      if (cVar5 == '\0') {
        local_b0 = (Object *)0x0;
        pOVar17 = (Object *)0x0;
      }
      Ref<TextServer>::unref((Ref<TextServer> *)&local_a8);
    }
    fVar21 = roundf(fVar21);
    dVar29 = (double)(**(code **)(*(long *)pOVar17 + 0x738))(pOVar17,&local_d8);
    fVar23 = (float)(((double)iVar12 - dVar29) + (double)fVar21);
    Ref<TextServer>::unref((Ref<TextServer> *)&local_b0);
  }
  pOVar17 = *(Object **)(TextServerManager::singleton + 0x178);
  if (pOVar17 == (Object *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  local_a8 = (Object *)0x0;
  cVar5 = RefCounted::reference();
  if (cVar5 == '\0') {
    pOVar17 = (Object *)0x0;
  }
  Ref<TextServer>::unref((Ref<TextServer> *)&local_a8);
  iVar6 = (**(code **)(*(long *)pOVar17 + 0x6b0))(pOVar17);
  cVar5 = RefCounted::unreference();
  if (cVar5 != '\0') {
    cVar5 = predelete_handler(pOVar17);
    if (cVar5 != '\0') {
      (**(code **)(*(long *)pOVar17 + 0x140))(pOVar17);
      Memory::free_static(pOVar17,false);
    }
  }
  pOVar17 = *(Object **)(TextServerManager::singleton + 0x178);
  if (pOVar17 == (Object *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  local_a8 = (Object *)0x0;
  cVar5 = RefCounted::reference();
  if (cVar5 == '\0') {
    pOVar17 = (Object *)0x0;
  }
  Ref<TextServer>::unref((Ref<TextServer> *)&local_a8);
  lVar7 = (**(code **)(*(long *)pOVar17 + 0x6a0))(pOVar17);
  cVar5 = RefCounted::unreference();
  auVar31 = auStack_50;
  auStack_50._0_4_ = auVar30._8_4_;
  uVar3 = auStack_50._0_4_;
  lVar11 = TextServerManager::singleton;
  auStack_50 = auVar31;
  if (cVar5 != '\0') {
    cVar5 = predelete_handler(pOVar17);
    lVar11 = TextServerManager::singleton;
    if (cVar5 != '\0') {
      (**(code **)(*(long *)pOVar17 + 0x140))(pOVar17);
      Memory::free_static(pOVar17,false);
      lVar11 = TextServerManager::singleton;
    }
  }
  TextServerManager::singleton = lVar11;
  if (0 < iVar6) {
    auVar31 = ZEXT416((uint)fVar23);
    plVar13 = (long *)(lVar7 + 0x18);
    do {
      if (*(char *)((long)plVar13 + -0xf) != '\0') {
        fVar23 = *(float *)((long)plVar13 + -4);
        iVar14 = 0;
        do {
          fVar24 = auVar31._0_4_;
          if ((fVar24 < fVar21) || ((float)iVar12 + fVar21 < fVar24 + fVar23)) {
LAB_00103690:
            auVar31._0_4_ = fVar24 + fVar23;
          }
          else {
            auStack_50._0_8_ = auVar30._8_8_;
            if (iVar19 <= (int)plVar13[-3]) {
              auStack_50._4_4_ = auVar30._12_4_;
              auStack_50._4_4_ = (float)((double)(float)auStack_50._4_4_ * __LC84);
              auStack_50._0_8_ = CONCAT44(auStack_50._4_4_,uVar3);
            }
            pOVar17 = *(Object **)(lVar11 + 0x178);
            local_58 = uVar28;
            if (*plVar13 == 0) {
              if ((*plVar13 & 0x10040000) != 0) goto LAB_00103690;
              if (pOVar17 == (Object *)0x0) goto EditorSpinSlider__draw_spin_slider;
              cVar5 = RefCounted::reference();
              if (cVar5 == '\0') {
                pOVar17 = (Object *)0x0;
              }
              local_68 = (float)*(undefined8 *)((long)plVar13 + -0xc) + fVar24;
              fStack_64 = (float)((ulong)*(undefined8 *)((long)plVar13 + -0xc) >> 0x20) + fVar22;
              (**(code **)(*(long *)pOVar17 + 0x590))
                        (pOVar17,&local_100,(long)(int)plVar13[1],(Color *)&local_68,
                         (long)*(int *)((long)plVar13 + 0xc),(Color *)&local_58);
              cVar5 = RefCounted::unreference();
            }
            else {
              if (pOVar17 == (Object *)0x0) {
EditorSpinSlider__draw_spin_slider:
                    /* WARNING: Does not return */
                pcVar1 = (code *)invalidInstructionException();
                (*pcVar1)();
              }
              cVar5 = RefCounted::reference();
              if (cVar5 == '\0') {
                pOVar17 = (Object *)0x0;
              }
              local_68 = (float)*(undefined8 *)((long)plVar13 + -0xc) + fVar24;
              fStack_64 = (float)((ulong)*(undefined8 *)((long)plVar13 + -0xc) >> 0x20) + fVar22;
              (**(code **)(*(long *)pOVar17 + 0x4f8))
                        (pOVar17,plVar13,&local_100,(long)(int)plVar13[1],(Color *)&local_68,
                         (long)*(int *)((long)plVar13 + 0xc),(Color *)&local_58);
              cVar5 = RefCounted::unreference();
            }
            if (cVar5 != '\0') {
              cVar5 = predelete_handler(pOVar17);
              if (cVar5 != '\0') {
                (**(code **)(*(long *)pOVar17 + 0x140))(pOVar17);
                Memory::free_static(pOVar17,false);
              }
            }
            fVar23 = *(float *)((long)plVar13 + -4);
            auVar31 = ZEXT416((uint)(fVar24 + fVar23));
            lVar11 = TextServerManager::singleton;
          }
          iVar14 = iVar14 + 1;
        } while (iVar14 < (int)(uint)*(byte *)((long)plVar13 + -0xf));
      }
      plVar13 = plVar13 + 6;
    } while ((long *)(lVar7 + 0x48 + (ulong)(iVar6 - 1) * 0x30) != plVar13);
  }
  pOVar17 = *(Object **)(lVar11 + 0x178);
  if (pOVar17 == (Object *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  local_a8 = (Object *)0x0;
  cVar5 = RefCounted::reference();
  if (cVar5 == '\0') {
    pOVar17 = (Object *)0x0;
  }
  Ref<TextServer>::unref((Ref<TextServer> *)&local_a8);
  (**(code **)(*(long *)pOVar17 + 0x168))(pOVar17);
  cVar5 = RefCounted::unreference();
  if (cVar5 != '\0') {
    cVar5 = predelete_handler(pOVar17);
    if (cVar5 != '\0') {
      (**(code **)(*(long *)pOVar17 + 0x140))(pOVar17);
      Memory::free_static(pOVar17,false);
    }
  }
  if (this[0xa59] != (EditorSpinSlider)0x0) goto LAB_0010384d;
  if (this[0xa5b] == (EditorSpinSlider)0x0) {
    fVar23 = (float)EditorScale::get_scale();
    fVar21 = (float)(**(code **)(*(long *)local_f8 + 0x1d0))();
    fVar23 = fVar23 * __LC45;
    iVar6 = (int)((fVar26 - fVar21) - (float)(int)fVar23);
    fVar26 = (float)StyleBox::get_offset();
    local_70 = CONCAT44(0x3e4ccccd,uVar3);
    iVar12 = (int)((fVar22 + fVar25) * __LC40 - _LC82);
    local_78 = uVar28;
    fVar25 = (float)EditorScale::get_scale();
    uVar27 = CONCAT44((float)(iVar12 + 1),(float)(int)fVar26);
    bVar10 = SUB81(&local_78,0);
    local_58 = uVar27;
    auStack_50._0_8_ = CONCAT44(fVar25 + fVar25,(float)iVar6);
    CanvasItem::draw_rect((Rect2 *)this,(Color *)&local_58,bVar10,_LC73,true);
    dVar29 = (double)Range::get_as_ratio();
    local_70 = CONCAT44(0x3ee66666,(undefined4)local_70);
    fVar25 = (float)EditorScale::get_scale();
    auStack_50._4_4_ = fVar25 + fVar25;
    auStack_50._0_4_ = (float)(int)((double)iVar6 * dVar29);
    local_58 = uVar27;
    CanvasItem::draw_rect((Rect2 *)this,(Color *)&local_58,bVar10,_LC73,true);
    local_70 = CONCAT44(0x3f666666,(undefined4)local_70);
    fStack_5c = (float)EditorScale::get_scale();
    fStack_64 = (float)iVar12;
    fStack_5c = fStack_5c * __LC45;
    local_68 = (float)((int)fVar26 + (int)((double)iVar6 * dVar29));
    fStack_60 = (float)(int)fVar23;
    CanvasItem::draw_rect((Rect2 *)this,(Color *)&local_68,bVar10,_LC73,true);
    fVar21 = (float)_LC91;
    fVar22 = (float)((ulong)_LC91 >> 0x20);
    fVar26 = local_68 + fStack_60 * fVar21;
    fVar25 = fStack_64 + fStack_5c * fVar22;
    uVar27 = Control::get_global_position();
    *(ulong *)(this + 0xa2c) =
         CONCAT44((float)((ulong)uVar27 >> 0x20) + fVar25,(float)uVar27 + fVar26);
    if ((this[0xa22] != (EditorSpinSlider)0x0) ||
       ((((this[0xa17] == (EditorSpinSlider)0x0 && (this[0xa14] == (EditorSpinSlider)0x0)) &&
         (this[0xa15] == (EditorSpinSlider)0x0)) || (this[0xa21] != (EditorSpinSlider)0x0)))) {
LAB_001044f0:
      cVar4 = CanvasItem::is_visible();
      if (cVar4 != '\0') {
        CanvasItem::set_visible(SUB81(*(undefined8 *)(this + 0xa08),0));
      }
      goto LAB_0010384d;
    }
    if (*(long *)(this + 0xa40) != 0) {
      cVar4 = CanvasItem::is_visible();
      if (cVar4 != '\0') goto LAB_001044f0;
    }
    cVar4 = CanvasItem::is_visible();
    if (cVar4 == '\0') {
      CanvasItem::set_visible(SUB81(*(undefined8 *)(this + 0xa08),0));
    }
    local_b0 = (Object *)0x0;
    if (this[0xa15] == (EditorSpinSlider)0x0) {
      if (_draw_spin_slider()::{lambda()#19}::operator()()::sname == '\0') {
        iVar12 = __cxa_guard_acquire(&_draw_spin_slider()::{lambda()#19}::operator()()::sname);
        if (iVar12 != 0) {
          _scs_create((char *)&_draw_spin_slider()::{lambda()#19}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_draw_spin_slider()::{lambda()#19}::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&_draw_spin_slider()::{lambda()#19}::operator()()::sname);
        }
      }
      if (_draw_spin_slider()::{lambda()#18}::operator()()::sname == '\0') {
        puVar18 = &_draw_spin_slider()::{lambda()#18}::operator()()::sname;
        pcVar20 = (char *)&_draw_spin_slider()::{lambda()#18}::operator()()::sname;
        iVar12 = __cxa_guard_acquire(&_draw_spin_slider()::{lambda()#18}::operator()()::sname);
        if (iVar12 != 0) {
          uVar15 = 0x71;
          goto LAB_00104a19;
        }
      }
    }
    else {
      if (_draw_spin_slider()::{lambda()#17}::operator()()::sname == '\0') {
        iVar12 = __cxa_guard_acquire(&_draw_spin_slider()::{lambda()#17}::operator()()::sname);
        if (iVar12 != 0) {
          _scs_create((char *)&_draw_spin_slider()::{lambda()#17}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_draw_spin_slider()::{lambda()#17}::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&_draw_spin_slider()::{lambda()#17}::operator()()::sname);
        }
      }
      if (_draw_spin_slider()::{lambda()#16}::operator()()::sname == '\0') {
        puVar18 = &_draw_spin_slider()::{lambda()#16}::operator()()::sname;
        pcVar20 = (char *)&_draw_spin_slider()::{lambda()#16}::operator()()::sname;
        iVar12 = __cxa_guard_acquire(&_draw_spin_slider()::{lambda()#16}::operator()()::sname);
        uVar15 = 0x5f;
        if (iVar12 != 0) {
LAB_00104a19:
          _scs_create(pcVar20,(bool)uVar15);
          __cxa_atexit(StringName::~StringName,pcVar20,&__dso_handle);
          __cxa_guard_release(puVar18);
        }
      }
    }
    Control::get_theme_icon((StringName *)&local_a8,(StringName *)this);
    pOVar17 = local_b0;
    if (local_a8 != local_b0) {
      local_b0 = local_a8;
      if (local_a8 != (Object *)0x0) {
        cVar4 = RefCounted::reference();
        if (cVar4 == '\0') {
          local_b0 = (Object *)0x0;
        }
      }
      if (pOVar17 != (Object *)0x0) {
        cVar4 = RefCounted::unreference();
        if (cVar4 != '\0') {
          cVar4 = predelete_handler(pOVar17);
          if (cVar4 != '\0') {
            (**(code **)(*(long *)pOVar17 + 0x140))(pOVar17);
            Memory::free_static(pOVar17,false);
          }
        }
      }
    }
    Ref<Texture2D>::unref((Ref<Texture2D> *)&local_a8);
    TextureRect::get_texture();
    pOVar2 = local_a8;
    pOVar17 = local_b0;
    Ref<Texture2D>::unref((Ref<Texture2D> *)&local_a8);
    if (pOVar2 != pOVar17) {
      TextureRect::set_texture(*(Ref **)(this + 0xa08));
    }
    (**(code **)(*(long *)this + 0x2a8))((Color *)&local_58,this);
    local_90 = Transform2D::get_scale();
    Control::set_scale(*(Vector2 **)(this + 0xa08));
    Control::reset_size();
    pVVar9 = *(Vector2 **)(this + 0xa08);
    uVar27 = Control::get_size();
    local_58 = CONCAT44(((fStack_5c * fVar22 + fStack_64) - (float)((ulong)uVar27 >> 0x20) * fVar22)
                        * (float)((ulong)local_90 >> 0x20),
                        ((fStack_60 * fVar21 + local_68) - (float)uVar27 * fVar21) * (float)local_90
                       );
    Control::set_position(pVVar9,SUB81((Color *)&local_58,0));
    if (this[0xa16] != (EditorSpinSlider)0x0) {
      pVVar9 = (Vector2 *)Input::get_singleton();
      uVar27 = Control::get_position();
      local_58 = CONCAT44((float)((ulong)uVar27 >> 0x20) + fStack_5c,(float)uVar27 + fStack_60);
      Input::warp_mouse(pVVar9);
    }
    *(int *)(this + 0xa10) = iVar6;
    Ref<Texture2D>::unref((Ref<Texture2D> *)&local_b0);
    goto LAB_0010384d;
  }
  pEVar8 = this + 0xa60;
  if (this[0xa22] != (EditorSpinSlider)0x0) {
    pEVar8 = this + 0xa68;
  }
  local_a8 = *(Object **)pEVar8;
  if (local_a8 == (Object *)0x0) {
LAB_00103ea5:
    local_a8 = (Object *)0x0;
  }
  else {
    cVar5 = RefCounted::reference();
    if (cVar5 == '\0') goto LAB_00103ea5;
  }
  iVar6 = (**(code **)(*(long *)local_a8 + 0x1d0))();
  fVar25 = (fVar25 - (float)iVar6) * __LC40;
  if (cVar4 == '\0') {
    fVar21 = (float)StyleBox::get_margin(local_f8,2);
    iVar6 = (**(code **)(*(long *)local_a8 + 0x1c8))();
    fVar26 = (fVar26 - fVar21) - (float)iVar6;
  }
  else {
    fVar26 = (float)StyleBox::get_margin(local_f8,0);
  }
  local_68 = _LC82;
  *(int *)(this + 0xa00) = (int)fVar26;
  fStack_64 = local_68;
  fStack_60 = local_68;
  fStack_60 = local_68;
  fStack_5c = local_68;
  if (this[0xa04] != (EditorSpinSlider)0x0) {
    local_58 = __LC87;
    auStack_50._0_8_ = _UNK_0010fff8;
    Color::operator*=((Color *)&local_68,(Color *)&local_58);
  }
  local_58 = CONCAT44((float)(int)fVar25,(float)*(int *)(this + 0xa00));
  CanvasItem::draw_texture((Ref *)this,(Vector2 *)&local_a8,(Color *)&local_58);
  if (cVar4 != '\0') {
    iVar6 = (**(code **)(*(long *)local_a8 + 0x1c8))();
    *(int *)(this + 0xa00) = *(int *)(this + 0xa00) + iVar6;
  }
  cVar4 = CanvasItem::is_visible();
  if (cVar4 != '\0') {
    CanvasItem::hide();
  }
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_a8);
LAB_0010384d:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if (local_e8 != (Object *)0x0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      cVar4 = predelete_handler(local_e8);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)local_e8 + 0x140))(local_e8);
        Memory::free_static(local_e8,false);
      }
    }
  }
  if (local_f0 != (Object *)0x0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      cVar4 = predelete_handler(local_f0);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)local_f0 + 0x140))(local_f0);
        Memory::free_static(local_f0,false);
      }
    }
  }
  if (local_f8 != (Object *)0x0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      cVar4 = predelete_handler(local_f8);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)local_f8 + 0x140))(local_f8);
        Memory::free_static(local_f8,false);
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorSpinSlider::_notification(int) */

void __thiscall EditorSpinSlider::_notification(EditorSpinSlider *this,int param_1)

{
  long lVar1;
  char cVar2;
  bool *pbVar3;
  undefined8 uVar4;
  Vector2 *pVVar5;
  StringName *pSVar6;
  long lVar7;
  long in_FS_OFFSET;
  bool bVar8;
  float fVar9;
  long local_58;
  long local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (0x2d < param_1) {
    if (param_1 - 0x3ecU < 3) {
switchD_00104be5_caseD_b:
      if (this[0xa21] != (EditorSpinSlider)0x0) {
        CanvasItem::hide();
        uVar4 = Input::get_singleton();
        Input::set_mouse_mode(uVar4,0);
        pVVar5 = (Vector2 *)Input::get_singleton();
        Input::warp_mouse(pVVar5);
        *(undefined2 *)(this + 0xa20) = 0;
      }
    }
    goto switchD_00104be5_caseD_c;
  }
  if (param_1 < 10) goto switchD_00104be5_caseD_c;
  switch(param_1) {
  case 10:
    pbVar3 = (bool *)EditorSettings::get_singleton();
    StringName::StringName((StringName *)&local_50,"interface/inspector/float_drag_speed",false);
    Object::get((StringName *)local_48,pbVar3);
    fVar9 = Variant::operator_cast_to_float((Variant *)local_48);
    *(float *)(this + 0xa28) = fVar9;
    if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_50 != 0)) {
      StringName::unref();
    }
  case 0x2d:
    if (*(long *)(this + 0xa48) != 0) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        _update_value_input_stylebox();
        return;
      }
      goto LAB_00104e27;
    }
    break;
  case 0xb:
    goto switchD_00104be5_caseD_b;
  case 0x19:
    if (this[0xa58] != (EditorSpinSlider)0x0) {
      this[0xa58] = (EditorSpinSlider)0x0;
      uVar4 = *(undefined8 *)(this + 0xa48);
      get_text_value((EditorSpinSlider *)&local_50);
      LineEdit::set_text(uVar4,(EditorSpinSlider *)&local_50);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
    }
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      Node::set_process_internal(SUB81(this,0));
      return;
    }
    goto LAB_00104e27;
  case 0x1e:
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      _draw_spin_slider(this);
      return;
    }
    goto LAB_00104e27;
  case 0x29:
    this[0xa14] = (EditorSpinSlider)0x1;
    lVar1 = *(long *)(in_FS_OFFSET + 0x28);
    goto joined_r0x00104e25;
  case 0x2a:
    this[0xa14] = (EditorSpinSlider)0x0;
    lVar1 = *(long *)(in_FS_OFFSET + 0x28);
joined_r0x00104e25:
    if (local_30 == lVar1) {
      CanvasItem::queue_redraw();
      return;
    }
    goto LAB_00104e27;
  case 0x2b:
    pSVar6 = (StringName *)Input::get_singleton();
    StringName::StringName((StringName *)&local_58,"ui_focus_next",false);
    cVar2 = Input::is_action_pressed(pSVar6,SUB81(&local_58,0));
    if (cVar2 == '\0') {
      pSVar6 = (StringName *)Input::get_singleton();
      StringName::StringName((StringName *)&local_50,"ui_focus_prev",false);
      cVar2 = Input::is_action_pressed(pSVar6,SUB81((StringName *)&local_50,0));
      if (cVar2 == '\0') {
        bVar8 = false;
        if (StringName::configured == '\0') goto LAB_00104c36;
LAB_00104eb7:
        if (local_50 != 0) {
          StringName::unref();
        }
        if ((StringName::configured != '\0') && (local_58 != 0)) {
          StringName::unref();
        }
      }
      else {
        lVar1 = *(long *)(this + 0xa50);
        Engine::get_singleton();
        lVar7 = Engine::get_frames_drawn();
        bVar8 = lVar1 != lVar7;
        if (StringName::configured != '\0') goto LAB_00104eb7;
      }
      if (bVar8) {
LAB_00104c25:
        if (this[0xa22] == (EditorSpinSlider)0x0) {
          _focus_entered(this);
        }
      }
    }
    else {
      lVar1 = *(long *)(this + 0xa50);
      Engine::get_singleton();
      lVar7 = Engine::get_frames_drawn();
      if (lVar1 != lVar7) {
        if ((StringName::configured != '\0') && (local_58 != 0)) {
          StringName::unref();
        }
        goto LAB_00104c25;
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
    }
LAB_00104c36:
    *(undefined8 *)(this + 0xa50) = 0;
  }
switchD_00104be5_caseD_c:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00104e27:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorSpinSlider::_bind_methods() */

void EditorSpinSlider::_bind_methods(void)

{
  long lVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  int *piVar4;
  MethodBind *pMVar5;
  undefined8 uVar6;
  uint uVar7;
  long lVar8;
  int *piVar9;
  long *plVar10;
  long in_FS_OFFSET;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  long local_108;
  long local_100;
  long local_f8;
  long local_f0;
  long local_e8 [2];
  undefined1 local_d8 [16];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8 [2];
  int *local_98;
  undefined8 local_90;
  long local_80;
  char *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  code *pcStack_58;
  code *pcStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = 0;
  local_78 = "label";
  uVar7 = (uint)&local_68;
  local_68 = &local_78;
  D_METHODP((char *)local_e8,(char ***)"set_label",uVar7);
  uStack_60 = 0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar5 = create_method_bind<EditorSpinSlider,String_const&>(set_label);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)local_e8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)local_e8);
  D_METHODP((char *)local_e8,(char ***)"get_label",0);
  uStack_60 = 0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar5 = create_method_bind<EditorSpinSlider,String>(get_label);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)local_e8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)local_e8);
  local_78 = "suffix";
  local_70 = 0;
  local_68 = &local_78;
  D_METHODP((char *)local_e8,(char ***)"set_suffix",uVar7);
  uStack_60 = 0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar5 = create_method_bind<EditorSpinSlider,String_const&>(set_suffix);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)local_e8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  uVar6 = local_d8._0_8_;
  if ((long *)local_d8._0_8_ != (long *)0x0) {
    LOCK();
    plVar10 = (long *)(local_d8._0_8_ + -0x10);
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (*plVar10 == 0) {
      if ((long *)local_d8._0_8_ == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = *(long *)(local_d8._0_8_ + -8);
      lVar8 = 0;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = local_d8._8_8_;
      local_d8 = auVar3 << 0x40;
      plVar10 = (long *)uVar6;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar10 != 0)) {
            StringName::unref();
          }
          lVar8 = lVar8 + 1;
          plVar10 = plVar10 + 1;
        } while (lVar1 != lVar8);
      }
      Memory::free_static((long *)(uVar6 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_e8[0] != 0)) {
    StringName::unref();
  }
  D_METHODP((char *)local_e8,(char ***)"get_suffix",0);
  uStack_60 = 0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar5 = create_method_bind<EditorSpinSlider,String>(get_suffix);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)local_e8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)local_e8);
  local_78 = "read_only";
  local_70 = 0;
  local_68 = &local_78;
  D_METHODP((char *)local_e8,(char ***)"set_read_only",uVar7);
  uStack_60 = 0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar5 = create_method_bind<EditorSpinSlider,bool>(set_read_only);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)local_e8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)local_e8);
  D_METHODP((char *)local_e8,(char ***)"is_read_only",0);
  uStack_60 = 0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar5 = create_method_bind<EditorSpinSlider,bool>(is_read_only);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)local_e8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)local_e8);
  local_78 = "flat";
  local_70 = 0;
  local_68 = &local_78;
  D_METHODP((char *)local_e8,(char ***)"set_flat",uVar7);
  uStack_60 = 0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar5 = create_method_bind<EditorSpinSlider,bool>(set_flat);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)local_e8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)local_e8);
  D_METHODP((char *)local_e8,(char ***)"is_flat",0);
  uStack_60 = 0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar5 = create_method_bind<EditorSpinSlider,bool>(is_flat);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)local_e8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)local_e8);
  local_78 = "hide_slider";
  local_70 = 0;
  local_68 = &local_78;
  D_METHODP((char *)local_e8,(char ***)"set_hide_slider",uVar7);
  uStack_60 = 0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar5 = create_method_bind<EditorSpinSlider,bool>(set_hide_slider);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)local_e8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)local_e8);
  D_METHODP((char *)local_e8,(char ***)"is_hiding_slider",0);
  uStack_60 = 0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar5 = create_method_bind<EditorSpinSlider,bool>(is_hiding_slider);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)local_e8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)local_e8);
  local_78 = "editing_integer";
  local_70 = 0;
  local_68 = &local_78;
  D_METHODP((char *)local_e8,(char ***)"set_editing_integer",uVar7);
  uStack_60 = 0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar5 = create_method_bind<EditorSpinSlider,bool>(set_editing_integer);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)local_e8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)local_e8);
  D_METHODP((char *)local_e8,(char ***)"is_editing_integer",0);
  uStack_60 = 0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar5 = create_method_bind<EditorSpinSlider,bool>(is_editing_integer);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)local_e8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)local_e8);
  _scs_create((char *)&local_f8,true);
  _scs_create((char *)&local_100,true);
  local_108 = 0;
  local_110 = 0;
  String::parse_latin1((String *)&local_110,"");
  local_118 = 0;
  String::parse_latin1((String *)&local_118,"label");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_e8,4,(String *)&local_118,0,(String *)&local_110,6,&local_108);
  local_120 = 0;
  String::parse_latin1((String *)&local_120,"EditorSpinSlider");
  StringName::StringName((StringName *)&local_f0,(String *)&local_120,false);
  ClassDB::add_property
            ((StringName *)&local_f0,(PropertyInfo *)local_e8,(StringName *)&local_100,
             (StringName *)&local_f8,-1);
  if ((StringName::configured != '\0') && (local_f0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  if ((((StringName::configured != '\0') &&
       ((local_108 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_100 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_f8 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_f8,true);
  _scs_create((char *)&local_100,true);
  local_108 = 0;
  local_110 = 0;
  String::parse_latin1((String *)&local_110,"");
  local_118 = 0;
  String::parse_latin1((String *)&local_118,"suffix");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_e8,4,(String *)&local_118,0,(String *)&local_110,6,&local_108);
  local_120 = 0;
  String::parse_latin1((String *)&local_120,"EditorSpinSlider");
  StringName::StringName((StringName *)&local_f0,(String *)&local_120,false);
  ClassDB::add_property
            ((StringName *)&local_f0,(PropertyInfo *)local_e8,(StringName *)&local_100,
             (StringName *)&local_f8,-1);
  if ((StringName::configured != '\0') && (local_f0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  if (((StringName::configured != '\0') &&
      ((local_108 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (((local_100 == 0 || (StringName::unref(), StringName::configured != '\0')) && (local_f8 != 0))
     )) {
    StringName::unref();
  }
  _scs_create((char *)&local_f8,true);
  _scs_create((char *)&local_100,true);
  local_108 = 0;
  local_110 = 0;
  String::parse_latin1((String *)&local_110,"");
  local_118 = 0;
  String::parse_latin1((String *)&local_118,"read_only");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_e8,1,(String *)&local_118,0,(String *)&local_110,6,&local_108);
  local_120 = 0;
  String::parse_latin1((String *)&local_120,"EditorSpinSlider");
  StringName::StringName((StringName *)&local_f0,(String *)&local_120,false);
  ClassDB::add_property
            ((StringName *)&local_f0,(PropertyInfo *)local_e8,(StringName *)&local_100,
             (StringName *)&local_f8,-1);
  if ((StringName::configured != '\0') && (local_f0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  if ((((StringName::configured != '\0') &&
       ((local_108 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_100 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_f8 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_f8,true);
  _scs_create((char *)&local_100,true);
  local_108 = 0;
  local_110 = 0;
  String::parse_latin1((String *)&local_110,"");
  local_118 = 0;
  String::parse_latin1((String *)&local_118,"flat");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_e8,1,(String *)&local_118,0,(String *)&local_110,6,&local_108);
  local_120 = 0;
  String::parse_latin1((String *)&local_120,"EditorSpinSlider");
  StringName::StringName((StringName *)&local_f0,(String *)&local_120,false);
  ClassDB::add_property
            ((StringName *)&local_f0,(PropertyInfo *)local_e8,(StringName *)&local_100,
             (StringName *)&local_f8,-1);
  if ((StringName::configured != '\0') && (local_f0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  if (((StringName::configured != '\0') &&
      ((local_108 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (((local_100 == 0 || (StringName::unref(), StringName::configured != '\0')) && (local_f8 != 0))
     )) {
    StringName::unref();
  }
  _scs_create((char *)&local_f8,true);
  _scs_create((char *)&local_100,true);
  local_108 = 0;
  local_110 = 0;
  String::parse_latin1((String *)&local_110,"");
  local_118 = 0;
  String::parse_latin1((String *)&local_118,"hide_slider");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_e8,1,(String *)&local_118,0,(String *)&local_110,6,&local_108);
  local_120 = 0;
  String::parse_latin1((String *)&local_120,"EditorSpinSlider");
  StringName::StringName((StringName *)&local_f0,(String *)&local_120,false);
  ClassDB::add_property
            ((StringName *)&local_f0,(PropertyInfo *)local_e8,(StringName *)&local_100,
             (StringName *)&local_f8,-1);
  if ((StringName::configured != '\0') && (local_f0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  if ((((StringName::configured != '\0') &&
       ((local_108 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_100 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_f8 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_f8,true);
  _scs_create((char *)&local_100,true);
  local_108 = 0;
  local_110 = 0;
  String::parse_latin1((String *)&local_110,"");
  local_118 = 0;
  String::parse_latin1((String *)&local_118,"editing_integer");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_e8,1,(String *)&local_118,0,(String *)&local_110,6,&local_108);
  local_120 = 0;
  String::parse_latin1((String *)&local_120,"EditorSpinSlider");
  StringName::StringName((StringName *)&local_f0,(String *)&local_120,false);
  ClassDB::add_property
            ((StringName *)&local_f0,(PropertyInfo *)local_e8,(StringName *)&local_100,
             (StringName *)&local_f8,-1);
  if ((StringName::configured != '\0') && (local_f0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  if ((((StringName::configured != '\0') &&
       ((local_108 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_100 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_f8 != 0)) {
    StringName::unref();
  }
  local_f8 = 0;
  String::parse_latin1((String *)&local_f8,"grabbed");
  local_d8 = (undefined1  [16])0x0;
  local_e8[0] = 0;
  local_e8[1] = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 6;
  local_b0 = 1;
  local_a8[0] = 0;
  local_98 = (int *)0x0;
  local_90 = 0;
  local_80 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)local_e8,(CowData *)&local_f8);
  local_100 = 0;
  String::parse_latin1((String *)&local_100,"EditorSpinSlider");
  StringName::StringName((StringName *)&local_f0,(String *)&local_100,false);
  ClassDB::add_signal((StringName *)&local_f0,(MethodInfo *)local_e8);
  if ((StringName::configured != '\0') && (local_f0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  lVar1 = local_80;
  if (local_80 != 0) {
    LOCK();
    plVar10 = (long *)(local_80 + -0x10);
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (*plVar10 == 0) {
      local_80 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  piVar4 = local_98;
  if (local_98 != (int *)0x0) {
    LOCK();
    plVar10 = (long *)(local_98 + -4);
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (*plVar10 == 0) {
      if (local_98 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = *(long *)(local_98 + -2);
      lVar8 = 0;
      local_98 = (int *)0x0;
      piVar9 = piVar4;
      if (lVar1 != 0) {
        do {
          if (Variant::needs_deinit[*piVar9] != '\0') {
            Variant::_clear_internal();
          }
          lVar8 = lVar8 + 1;
          piVar9 = piVar9 + 6;
        } while (lVar1 != lVar8);
      }
      Memory::free_static(piVar4 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if ((StringName::configured != '\0') && (local_d8._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  local_f8 = 0;
  String::parse_latin1((String *)&local_f8,"ungrabbed");
  local_d8 = (undefined1  [16])0x0;
  local_e8[0] = 0;
  local_e8[1] = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 6;
  local_b0 = 1;
  local_a8[0] = 0;
  local_98 = (int *)0x0;
  local_90 = 0;
  local_80 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)local_e8,(CowData *)&local_f8);
  local_100 = 0;
  String::parse_latin1((String *)&local_100,"EditorSpinSlider");
  StringName::StringName((StringName *)&local_f0,(String *)&local_100,false);
  ClassDB::add_signal((StringName *)&local_f0,(MethodInfo *)local_e8);
  if ((StringName::configured != '\0') && (local_f0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  lVar1 = local_80;
  if (local_80 != 0) {
    LOCK();
    plVar10 = (long *)(local_80 + -0x10);
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (*plVar10 == 0) {
      local_80 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  piVar4 = local_98;
  if (local_98 != (int *)0x0) {
    LOCK();
    plVar10 = (long *)(local_98 + -4);
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (*plVar10 == 0) {
      if (local_98 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = *(long *)(local_98 + -2);
      lVar8 = 0;
      local_98 = (int *)0x0;
      piVar9 = piVar4;
      if (lVar1 != 0) {
        do {
          if (Variant::needs_deinit[*piVar9] != '\0') {
            Variant::_clear_internal();
          }
          lVar8 = lVar8 + 1;
          piVar9 = piVar9 + 6;
        } while (lVar1 != lVar8);
      }
      Memory::free_static(piVar4 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if ((StringName::configured != '\0') && (local_d8._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  local_f8 = 0;
  String::parse_latin1((String *)&local_f8,"updown_pressed");
  local_d8 = (undefined1  [16])0x0;
  local_e8[0] = 0;
  local_e8[1] = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 6;
  local_b0 = 1;
  local_a8[0] = 0;
  local_98 = (int *)0x0;
  local_90 = 0;
  local_80 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)local_e8,(CowData *)&local_f8);
  local_100 = 0;
  String::parse_latin1((String *)&local_100,"EditorSpinSlider");
  StringName::StringName((StringName *)&local_f0,(String *)&local_100,false);
  ClassDB::add_signal((StringName *)&local_f0,(MethodInfo *)local_e8);
  if ((StringName::configured != '\0') && (local_f0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  lVar1 = local_80;
  if (local_80 != 0) {
    LOCK();
    plVar10 = (long *)(local_80 + -0x10);
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (*plVar10 == 0) {
      local_80 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  piVar4 = local_98;
  if (local_98 != (int *)0x0) {
    LOCK();
    plVar10 = (long *)(local_98 + -4);
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (*plVar10 == 0) {
      if (local_98 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = *(long *)(local_98 + -2);
      lVar8 = 0;
      local_98 = (int *)0x0;
      piVar9 = piVar4;
      if (lVar1 != 0) {
        do {
          if (Variant::needs_deinit[*piVar9] != '\0') {
            Variant::_clear_internal();
          }
          lVar8 = lVar8 + 1;
          piVar9 = piVar9 + 6;
        } while (lVar1 != lVar8);
      }
      Memory::free_static(piVar4 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if ((StringName::configured != '\0') && (local_d8._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  local_f8 = 0;
  String::parse_latin1((String *)&local_f8,"value_focus_entered");
  local_d8 = (undefined1  [16])0x0;
  local_e8[0] = 0;
  local_e8[1] = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 6;
  local_b0 = 1;
  local_a8[0] = 0;
  local_98 = (int *)0x0;
  local_90 = 0;
  local_80 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)local_e8,(CowData *)&local_f8);
  local_100 = 0;
  String::parse_latin1((String *)&local_100,"EditorSpinSlider");
  StringName::StringName((StringName *)&local_f0,(String *)&local_100,false);
  ClassDB::add_signal((StringName *)&local_f0,(MethodInfo *)local_e8);
  if ((StringName::configured != '\0') && (local_f0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  lVar1 = local_80;
  if (local_80 != 0) {
    LOCK();
    plVar10 = (long *)(local_80 + -0x10);
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (*plVar10 == 0) {
      local_80 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  piVar4 = local_98;
  if (local_98 != (int *)0x0) {
    LOCK();
    plVar10 = (long *)(local_98 + -4);
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (*plVar10 == 0) {
      if (local_98 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = *(long *)(local_98 + -2);
      lVar8 = 0;
      local_98 = (int *)0x0;
      piVar9 = piVar4;
      if (lVar1 != 0) {
        do {
          if (Variant::needs_deinit[*piVar9] != '\0') {
            Variant::_clear_internal();
          }
          lVar8 = lVar8 + 1;
          piVar9 = piVar9 + 6;
        } while (lVar1 != lVar8);
      }
      Memory::free_static(piVar4 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if ((StringName::configured != '\0') && (local_d8._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  local_f8 = 0;
  String::parse_latin1((String *)&local_f8,"value_focus_exited");
  local_d8 = (undefined1  [16])0x0;
  local_e8[0] = 0;
  local_e8[1] = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 6;
  local_b0 = 1;
  local_a8[0] = 0;
  local_98 = (int *)0x0;
  local_90 = 0;
  local_80 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)local_e8,(CowData *)&local_f8);
  local_100 = 0;
  String::parse_latin1((String *)&local_100,"EditorSpinSlider");
  StringName::StringName((StringName *)&local_f0,(String *)&local_100,false);
  ClassDB::add_signal((StringName *)&local_f0,(MethodInfo *)local_e8);
  if ((StringName::configured != '\0') && (local_f0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  lVar1 = local_80;
  if (local_80 != 0) {
    LOCK();
    plVar10 = (long *)(local_80 + -0x10);
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (*plVar10 == 0) {
      local_80 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  piVar4 = local_98;
  if (local_98 != (int *)0x0) {
    LOCK();
    plVar10 = (long *)(local_98 + -4);
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (*plVar10 == 0) {
      if (local_98 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = *(long *)(local_98 + -2);
      lVar8 = 0;
      local_98 = (int *)0x0;
      piVar9 = piVar4;
      if (lVar1 != 0) {
        do {
          if (Variant::needs_deinit[*piVar9] != '\0') {
            Variant::_clear_internal();
          }
          lVar8 = lVar8 + 1;
          piVar9 = piVar9 + 6;
        } while (lVar1 != lVar8);
      }
      Memory::free_static(piVar4 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if ((StringName::configured != '\0') && (local_d8._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  uVar6 = ThemeDB::get_singleton();
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  uStack_60 = 0;
  pcStack_58 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),EditorSpinSlider::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#1}>
               ::_M_manager;
  pcStack_50 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),EditorSpinSlider::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#1}>
               ::_M_invoke;
  StringName::StringName((StringName *)local_e8,"updown",false);
  StringName::StringName((StringName *)&local_f0,"updown_icon",false);
  local_100 = 0;
  String::parse_latin1((String *)&local_100,"EditorSpinSlider");
  StringName::StringName((StringName *)&local_f8,(String *)&local_100,false);
  ThemeDB::bind_class_item
            (uVar6,4,(String *)&local_f8,(StringName *)&local_f0,(MethodDefinition *)local_e8,
             &local_68);
  if ((StringName::configured != '\0') && (local_f8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') &&
     (((local_f0 == 0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_e8[0] != 0)))) {
    StringName::unref();
  }
  if (pcStack_58 != (code *)0x0) {
    (*pcStack_58)(&local_68,&local_68,3);
  }
  uVar6 = ThemeDB::get_singleton();
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  uStack_60 = 0;
  pcStack_58 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),EditorSpinSlider::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#2}>
               ::_M_manager;
  pcStack_50 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),EditorSpinSlider::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#2}>
               ::_M_invoke;
  StringName::StringName((StringName *)local_e8,"updown_disabled",false);
  StringName::StringName((StringName *)&local_f0,"updown_disabled_icon",false);
  local_100 = 0;
  String::parse_latin1((String *)&local_100,"EditorSpinSlider");
  StringName::StringName((StringName *)&local_f8,(String *)&local_100,false);
  ThemeDB::bind_class_item
            (uVar6,4,(String *)&local_f8,(StringName *)&local_f0,(MethodDefinition *)local_e8,
             &local_68);
  if ((StringName::configured != '\0') && (local_f8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if (((StringName::configured != '\0') &&
      ((local_f0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_e8[0] != 0)) {
    StringName::unref();
  }
  if (pcStack_58 != (code *)0x0) {
    (*pcStack_58)(&local_68,&local_68,3);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EditorSpinSlider::_evaluate_input_text() */

void EditorSpinSlider::_evaluate_input_text(void)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  RefCounted *this;
  Object *pOVar4;
  RefCounted *pRVar5;
  long in_FS_OFFSET;
  double dVar6;
  undefined *local_78;
  undefined8 local_70;
  undefined *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  pRVar5 = (RefCounted *)0x0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  this = (RefCounted *)operator_new(0x1e8,"");
  RefCounted::RefCounted(this);
  *(undefined8 *)(this + 0x188) = 0;
  *(code **)this = LineEdit::get_text;
  *(undefined4 *)(this + 400) = 0;
  *(undefined8 *)(this + 0x198) = 0;
  this[0x1a0] = (RefCounted)0x0;
  *(undefined4 *)(this + 0x1a4) = 0;
  this[0x1a8] = (RefCounted)0x0;
  *(undefined8 *)(this + 0x1b0) = 0;
  this[0x1b8] = (RefCounted)0x1;
  *(undefined8 *)(this + 0x1d8) = 0;
  this[0x1e0] = (RefCounted)0x0;
  *(undefined1 (*) [16])(this + 0x1c0) = (undefined1  [16])0x0;
  postinitialize_handler((Object *)this);
  cVar2 = RefCounted::init_ref();
  if (cVar2 != '\0') {
    cVar2 = RefCounted::reference();
    if (cVar2 != '\0') {
      pRVar5 = this;
    }
    cVar2 = RefCounted::unreference();
    if ((cVar2 != '\0') && (cVar2 = predelete_handler((Object *)this), cVar2 != '\0')) {
      (**(code **)(*(long *)this + 0x140))(this);
      Memory::free_static(this,false);
    }
  }
  LineEdit::get_text();
  String::replace((char *)&local_78,(char *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  String::replace((char *)&local_68,(char *)&local_78);
  if (local_78 != local_68) {
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    local_78 = local_68;
    local_68 = (undefined *)0x0;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  pOVar4 = *(Object **)(TextServerManager::singleton + 0x178);
  if (pOVar4 == (Object *)0x0) {
EditorSpinSlider__evaluate_input_text:
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  cVar2 = RefCounted::reference();
  if (cVar2 == '\0') {
    pOVar4 = (Object *)0x0;
  }
  pcVar1 = *(code **)(*(long *)pOVar4 + 0x7c8);
  local_70 = 0;
  local_60 = 0;
  local_68 = &_LC15;
  String::parse_latin1((StrRange *)&local_70);
  (*pcVar1)((CowData<char32_t> *)&local_68,pOVar4,(CowData<char32_t> *)&local_78);
  if (local_78 == local_68) {
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    cVar2 = RefCounted::unreference();
  }
  else {
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    local_78 = local_68;
    local_68 = (undefined *)0x0;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    cVar2 = RefCounted::unreference();
  }
  if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar4), cVar2 != '\0')) {
    (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
    Memory::free_static(pOVar4,false);
  }
  local_60 = 0;
  iVar3 = Expression::parse((String *)pRVar5,(Vector *)&local_78);
  CowData<String>::_unref((CowData<String> *)&local_60);
  if (iVar3 == 0) {
LAB_00107077:
    Array::Array((Array *)&local_68);
    Expression::execute((Array *)local_58,(Object *)pRVar5,SUB81((CowData<char32_t> *)&local_68,0),
                        false);
    Array::~Array((Array *)&local_68);
    if (local_58[0] != 0) {
      dVar6 = Variant::operator_cast_to_double((Variant *)local_58);
      Range::set_value(dVar6);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
        goto LAB_001070b5;
      }
    }
  }
  else {
    LineEdit::get_text();
    if (local_78 != local_68) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      local_78 = local_68;
      local_68 = (undefined *)0x0;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    pOVar4 = *(Object **)(TextServerManager::singleton + 0x178);
    if (pOVar4 == (Object *)0x0) goto EditorSpinSlider__evaluate_input_text;
    cVar2 = RefCounted::reference();
    if (cVar2 == '\0') {
      pOVar4 = (Object *)0x0;
    }
    pcVar1 = *(code **)(*(long *)pOVar4 + 0x7c8);
    local_70 = 0;
    local_60 = 0;
    local_68 = &_LC15;
    String::parse_latin1((StrRange *)&local_70);
    (*pcVar1)((CowData<char32_t> *)&local_68,pOVar4,(CowData<char32_t> *)&local_78);
    if (local_78 == local_68) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    }
    else {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      local_78 = local_68;
      local_68 = (undefined *)0x0;
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    }
    cVar2 = RefCounted::unreference();
    if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar4), cVar2 != '\0')) {
      (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
      Memory::free_static(pOVar4,false);
    }
    local_60 = 0;
    iVar3 = Expression::parse((String *)pRVar5,(Vector *)&local_78);
    CowData<String>::_unref((CowData<String> *)&local_60);
    if (iVar3 == 0) goto LAB_00107077;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
LAB_001070b5:
  cVar2 = RefCounted::unreference();
  if ((cVar2 == '\0') || (cVar2 = predelete_handler((Object *)pRVar5), cVar2 == '\0')) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    (**(code **)(*(long *)pRVar5 + 0x140))(pRVar5);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Memory::free_static(pRVar5,false);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EditorSpinSlider::_value_input_gui_input(Ref<InputEvent> const&) */

void __thiscall EditorSpinSlider::_value_input_gui_input(EditorSpinSlider *this,Ref *param_1)

{
  char cVar1;
  uint uVar2;
  Object *pOVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  if (((*(long *)param_1 != 0) &&
      (pOVar3 = (Object *)
                __dynamic_cast(*(long *)param_1,&Object::typeinfo,&InputEventKey::typeinfo,0),
      pOVar3 != (Object *)0x0)) && (cVar1 = RefCounted::reference(), cVar1 != '\0')) {
    cVar1 = InputEvent::is_pressed();
    if ((cVar1 != '\0') && (this[0xa22] == (EditorSpinSlider)0x0)) {
      uVar2 = InputEventKey::get_keycode();
      if ((uVar2 & 0xfffffffd) == 0x400010) {
        dVar5 = (double)Range::get_step();
        dVar6 = dVar5;
        if (dVar5 < _LC123) {
          dVar7 = _LC123 / dVar5;
          dVar8 = dVar7;
          if ((double)((ulong)dVar7 & _LC128) < _LC124) {
            dVar8 = (double)((ulong)(double)(long)dVar7 | ~_LC128 & (ulong)dVar7);
          }
          dVar6 = _LC123;
          if (dVar8 != dVar7) {
            dVar6 = dVar5;
          }
        }
        cVar1 = InputEventWithModifiers::is_command_or_control_pressed();
        if (cVar1 == '\0') {
          cVar1 = InputEventWithModifiers::is_shift_pressed();
          if (cVar1 == '\0') {
            cVar1 = InputEventWithModifiers::is_alt_pressed();
            if (cVar1 != '\0') {
              dVar6 = dVar6 * __LC43;
            }
          }
          else {
            dVar6 = dVar6 * __LC46;
          }
        }
        else {
          dVar6 = dVar6 * __LC126;
        }
        _evaluate_input_text();
        dVar5 = (double)Range::get_value();
        if (uVar2 == 0x400012) {
          dVar6 = (double)((ulong)dVar6 ^ __LC127);
        }
        Range::set_value(dVar5 + dVar6);
        this[0xa58] = (EditorSpinSlider)0x1;
        Node::set_process_internal(SUB81(this,0));
      }
      else if (uVar2 == 0x400001) {
        Engine::get_singleton();
        uVar4 = Engine::get_frames_drawn();
        *(undefined8 *)(this + 0xa50) = uVar4;
        if (*(long *)(this + 0xa40) != 0) {
          CanvasItem::hide();
        }
      }
    }
    cVar1 = RefCounted::unreference();
    if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar3), cVar1 != '\0')) {
      (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
      Memory::free_static(pOVar3,false);
      return;
    }
  }
  return;
}



/* EditorSpinSlider::_value_input_closed() */

void __thiscall EditorSpinSlider::_value_input_closed(EditorSpinSlider *this)

{
  undefined8 uVar1;
  
  _evaluate_input_text();
  Engine::get_singleton();
  uVar1 = Engine::get_frames_drawn();
  *(undefined8 *)(this + 0xa50) = uVar1;
  return;
}



/* EditorSpinSlider::_value_focus_exited() */

void __thiscall EditorSpinSlider::_value_focus_exited(EditorSpinSlider *this)

{
  long lVar1;
  char cVar2;
  long lVar3;
  long in_FS_OFFSET;
  long local_40;
  undefined8 local_38;
  undefined1 local_30 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  cVar2 = LineEdit::is_menu_visible();
  if ((cVar2 != '\0') || (this[0xa22] != (EditorSpinSlider)0x0)) goto LAB_001074e6;
  _evaluate_input_text();
  cVar2 = CanvasItem::is_visible_in_tree();
  if (cVar2 == '\0') {
LAB_00107520:
    if (*(long *)(this + 0xa40) != 0) {
      CanvasItem::hide();
    }
  }
  else {
    lVar1 = *(long *)(this + 0xa50);
    Engine::get_singleton();
    lVar3 = Engine::get_frames_drawn();
    if (lVar1 != lVar3) goto LAB_00107520;
    Control::grab_focus();
  }
  StringName::StringName((StringName *)&local_40,"value_focus_exited",false);
  local_30 = (undefined1  [16])0x0;
  local_38 = 0;
  (**(code **)(*(long *)this + 0xd0))(this,(StringName *)&local_40,0,0);
  if (Variant::needs_deinit[(int)local_38] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_40 != 0)) {
    StringName::unref();
  }
LAB_001074e6:
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



/* EditorSpinSlider::is_class_ptr(void*) const */

uint EditorSpinSlider::is_class_ptr(void *param_1)

{
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  return (uint)CONCAT71(0x10fe,in_RSI == &Range::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10fe,in_RSI == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10fe,in_RSI == &Control::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10fe,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10fe,in_RSI == &Node::get_class_ptr_static()::ptr) |
         CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
}



/* CallableCustomMethodPointer<EditorSpinSlider, void, Ref<InputEvent>
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorSpinSlider,void,Ref<InputEvent>const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorSpinSlider,void,Ref<InputEvent>const&> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorSpinSlider, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorSpinSlider,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorSpinSlider,void,String_const&> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorSpinSlider, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorSpinSlider,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorSpinSlider,void> *this)

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



/* CallableCustomMethodPointer<CanvasItem, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<CanvasItem,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<CanvasItem,void> *this)

{
  return;
}



/* MethodBindTRC<bool>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<bool>::_gen_argument_type(int param_1)

{
  return 1;
}



/* MethodBindTRC<bool>::get_argument_meta(int) const */

undefined8 MethodBindTRC<bool>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<bool>::_gen_argument_type(int) const */

bool __thiscall MethodBindT<bool>::_gen_argument_type(MethodBindT<bool> *this,int param_1)

{
  return param_1 == 0;
}



/* MethodBindT<bool>::get_argument_meta(int) const */

undefined8 MethodBindT<bool>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<String>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<String>::_gen_argument_type(int param_1)

{
  return 4;
}



/* MethodBindTRC<String>::get_argument_meta(int) const */

undefined8 MethodBindTRC<String>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<String const&>::_gen_argument_type(int) const */

long __thiscall
MethodBindT<String_const&>::_gen_argument_type(MethodBindT<String_const&> *this,int param_1)

{
  return (ulong)(param_1 == 0) << 2;
}



/* MethodBindT<String const&>::get_argument_meta(int) const */

undefined8 MethodBindT<String_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* CallableCustomMethodPointer<EditorSpinSlider, void, Ref<InputEvent>
   const&>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorSpinSlider,void,Ref<InputEvent>const&>::get_argument_count
          (CallableCustomMethodPointer<EditorSpinSlider,void,Ref<InputEvent>const&> *this,
          bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<EditorSpinSlider, void, String const&>::get_argument_count(bool&)
   const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorSpinSlider,void,String_const&>::get_argument_count
          (CallableCustomMethodPointer<EditorSpinSlider,void,String_const&> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<EditorSpinSlider, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorSpinSlider,void>::get_argument_count
          (CallableCustomMethodPointer<EditorSpinSlider,void> *this,bool *param_1)

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



/* CallableCustomMethodPointer<CanvasItem, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<CanvasItem,void>::get_argument_count
          (CallableCustomMethodPointer<CanvasItem,void> *this,bool *param_1)

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



/* CallableCustomMethodPointer<CanvasItem, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<CanvasItem,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<CanvasItem,void> *this)

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



/* CallableCustomMethodPointer<LineEdit, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<LineEdit,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<LineEdit,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorSpinSlider, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorSpinSlider,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorSpinSlider,void,String_const&> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorSpinSlider, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorSpinSlider,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorSpinSlider,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorSpinSlider, void, Ref<InputEvent>
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorSpinSlider,void,Ref<InputEvent>const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorSpinSlider,void,Ref<InputEvent>const&> *this)

{
  operator_delete(this,0x48);
  return;
}



/* MethodBindT<String const&>::~MethodBindT() */

void __thiscall MethodBindT<String_const&>::~MethodBindT(MethodBindT<String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010fc90;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<String const&>::~MethodBindT() */

void __thiscall MethodBindT<String_const&>::~MethodBindT(MethodBindT<String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010fc90;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<String>::~MethodBindTRC() */

void __thiscall MethodBindTRC<String>::~MethodBindTRC(MethodBindTRC<String> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010fcf0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<String>::~MethodBindTRC() */

void __thiscall MethodBindTRC<String>::~MethodBindTRC(MethodBindTRC<String> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010fcf0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<bool>::~MethodBindT() */

void __thiscall MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010fd50;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<bool>::~MethodBindT() */

void __thiscall MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010fd50;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010fdb0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010fdb0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* EditorSpinSlider::_property_get_revertv(StringName const&, Variant&) const */

undefined8 EditorSpinSlider::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* EditorSpinSlider::_property_can_revertv(StringName const&) const */

undefined8 EditorSpinSlider::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00114008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
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
      goto LAB_00107d3d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00107d3d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00107d3d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorSpinSlider, void, String const&>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorSpinSlider,void,String_const&>::get_object
          (CallableCustomMethodPointer<EditorSpinSlider,void,String_const&> *this)

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
      goto LAB_00107e3d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00107e3d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00107e3d:
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
      goto LAB_00107f3d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00107f3d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00107f3d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<CanvasItem, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<CanvasItem,void>::get_object
          (CallableCustomMethodPointer<CanvasItem,void> *this)

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
      goto LAB_0010803d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010803d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010803d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorSpinSlider, void, Ref<InputEvent> const&>::get_object() const
    */

undefined8 __thiscall
CallableCustomMethodPointer<EditorSpinSlider,void,Ref<InputEvent>const&>::get_object
          (CallableCustomMethodPointer<EditorSpinSlider,void,Ref<InputEvent>const&> *this)

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
      goto LAB_0010813d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010813d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010813d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorSpinSlider, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorSpinSlider,void>::get_object
          (CallableCustomMethodPointer<EditorSpinSlider,void> *this)

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
      goto LAB_0010823d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010823d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010823d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* EditorSpinSlider::_validate_propertyv(PropertyInfo&) const */

void EditorSpinSlider::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  if ((code *)PTR__validate_property_00114010 == CanvasItem::_validate_property) {
    return;
  }
  Control::_validate_property(param_1);
  return;
}



/* EditorSpinSlider::_setv(StringName const&, Variant const&) */

undefined8 EditorSpinSlider::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_00114018 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x001083f8) */
/* EditorSpinSlider::_getv(StringName const&, Variant&) const */

undefined8 EditorSpinSlider::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00114020 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   EditorSpinSlider::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#1}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),EditorSpinSlider::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#1}>
     ::_M_invoke(_Any_data *param_1,Node **param_2,StringName *param_3,StringName *param_4)

{
  code *pcVar1;
  
  Control::get_theme_item();
  Variant::get_validated_object();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   EditorSpinSlider::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#2}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),EditorSpinSlider::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#2}>
     ::_M_invoke(_Any_data *param_1,Node **param_2,StringName *param_3,StringName *param_4)

{
  code *pcVar1;
  
  Control::get_theme_item();
  Variant::get_validated_object();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* EditorSpinSlider::get_text_value() const [clone .cold] */

void EditorSpinSlider::get_text_value(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* EditorSpinSlider::get_tooltip(Vector2 const&) const [clone .cold] */

void EditorSpinSlider::get_tooltip(Vector2 *param_1)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* EditorSpinSlider::_draw_spin_slider() [clone .cold] */

void EditorSpinSlider::_draw_spin_slider(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* EditorSpinSlider::_bind_methods() [clone .cold] */

void EditorSpinSlider::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* EditorSpinSlider::_evaluate_input_text() [clone .cold] */

void EditorSpinSlider::_evaluate_input_text(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
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



/* EditorSpinSlider::_get_class_namev() const */

undefined8 * EditorSpinSlider::_get_class_namev(void)

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
LAB_00108843:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00108843;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"EditorSpinSlider");
      goto LAB_001088ae;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"EditorSpinSlider");
LAB_001088ae:
  return &_get_class_namev()::_class_name_static;
}



/* EditorSpinSlider::get_class() const */

void EditorSpinSlider::get_class(void)

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



/* PropertyInfo::~PropertyInfo() */

void __thiscall PropertyInfo::~PropertyInfo(PropertyInfo *this)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)(this + 0x20) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x20) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x20);
      *(undefined8 *)(this + 0x20) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (*(long *)(this + 0x10) != 0)) {
    StringName::unref();
  }
  if (*(long *)(this + 8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 8);
      *(undefined8 *)(this + 8) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
  }
  return;
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
  *(undefined8 *)(this + 8) = 0;
  lVar1 = *(long *)param_3;
  *(undefined4 *)this = param_2;
  if (lVar1 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 8),param_3);
  }
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



/* MethodDefinition::~MethodDefinition() */

void __thiscall MethodDefinition::~MethodDefinition(MethodDefinition *this)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  
  if (*(long *)(this + 0x10) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x10) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      plVar1 = *(long **)(this + 0x10);
      if (plVar1 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = plVar1[-1];
      *(undefined8 *)(this + 0x10) = 0;
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
    }
  }
  if ((StringName::configured != '\0') && (*(long *)this != 0)) {
    StringName::unref();
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



/* Callable create_custom_callable_function_pointer<CanvasItem>(CanvasItem*, char const*, void
   (CanvasItem::*)()) */

CanvasItem *
create_custom_callable_function_pointer<CanvasItem>
          (CanvasItem *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC15;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_0010f930;
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



/* Callable create_custom_callable_function_pointer<EditorSpinSlider>(EditorSpinSlider*, char
   const*, void (EditorSpinSlider::*)()) */

EditorSpinSlider *
create_custom_callable_function_pointer<EditorSpinSlider>
          (EditorSpinSlider *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC15;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_0010fae0;
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



/* Callable create_custom_callable_function_pointer<EditorSpinSlider, Ref<InputEvent>
   const&>(EditorSpinSlider*, char const*, void (EditorSpinSlider::*)(Ref<InputEvent> const&)) */

EditorSpinSlider *
create_custom_callable_function_pointer<EditorSpinSlider,Ref<InputEvent>const&>
          (EditorSpinSlider *param_1,char *param_2,_func_void_Ref_ptr *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC15;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_0010fc00;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_void_Ref_ptr **)(this + 0x20) = param_3 + 1;
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



/* MethodBindTRC<String>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<String>::_gen_argument_type_info(int param_1)

{
  undefined4 in_register_0000003c;
  undefined4 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar1 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC15;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  local_60 = 0;
  *puVar1 = 4;
  puVar1[6] = 0;
  *(undefined8 *)(puVar1 + 8) = 0;
  *(undefined1 (*) [16])(puVar1 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar1[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar1 + 8),(CowData *)&local_58);
    puVar1[10] = 6;
    if (puVar1[6] == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(puVar1 + 8),false);
      if (*(undefined **)(puVar1 + 4) == local_48) {
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar1 + 4) = local_48;
      }
      goto LAB_00109245;
    }
  }
  StringName::operator=((StringName *)(puVar1 + 4),(StringName *)&local_50);
LAB_00109245:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x00109458) */
/* String vformat<char const*>(String const&, char const* const) */

String * vformat<char_const*>(String *param_1,char *param_2)

{
  char cVar1;
  Variant *this;
  char *in_RDX;
  int iVar2;
  long in_FS_OFFSET;
  Array local_c8 [8];
  undefined8 local_c0 [9];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_78,in_RDX);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_c8);
  iVar2 = (int)local_c8;
  Array::resize(iVar2);
  this = (Variant *)Array::operator[](iVar2);
  Variant::operator=(this,(Variant *)local_78);
  String::sprintf((Array *)local_c0,(bool *)param_2);
  *(undefined8 *)param_1 = local_c0[0];
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



/* EditorSpinSlider::~EditorSpinSlider() */

void __thiscall EditorSpinSlider::~EditorSpinSlider(EditorSpinSlider *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_0010f5c0;
  if (*(long *)(this + 0xa68) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa68);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
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
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x9f8));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x9f0));
  Range::~Range((Range *)this);
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
        if (pvVar5 == (void *)0x0) goto LAB_00109864;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_00109864:
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  return;
}



/* CallableCustomMethodPointer<EditorSpinSlider, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorSpinSlider,void>::call
          (CallableCustomMethodPointer<EditorSpinSlider,void> *this,Variant **param_1,int param_2,
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
      goto LAB_00109aaf;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_00109aaf;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00109a88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_00109b71;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_00109aaf:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC53,"./core/object/callable_method_pointer.h",0x67,
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
LAB_00109b71:
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
      goto LAB_00109ccf;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_00109ccf;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00109ca8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_00109d91;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_00109ccf:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC53,"./core/object/callable_method_pointer.h",0x67,
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
LAB_00109d91:
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
      goto LAB_00109eef;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_00109eef;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00109ec8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_00109fb1;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_00109eef:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC53,"./core/object/callable_method_pointer.h",0x67,
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
LAB_00109fb1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<CanvasItem, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<CanvasItem,void>::call
          (CallableCustomMethodPointer<CanvasItem,void> *this,Variant **param_1,int param_2,
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
      goto LAB_0010a10f;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_0010a10f;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010a0e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_0010a1d1;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0010a10f:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC53,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0010a1d1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<EditorSpinSlider, void, Ref<InputEvent> const&>::call(Variant
   const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorSpinSlider,void,Ref<InputEvent>const&>::call
          (CallableCustomMethodPointer<EditorSpinSlider,void,Ref<InputEvent>const&> *this,
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
          goto LAB_0010a2ae;
        }
        if (param_2 == 0) {
          *(undefined4 *)param_4 = 4;
          *(undefined4 *)(param_4 + 8) = 1;
          goto LAB_0010a2ae;
        }
        *(undefined4 *)param_4 = 0;
        if (((ulong)pcVar10 & 1) != 0) {
          pcVar10 = *(code **)(pcVar10 + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar6 = Variant::can_convert_strict(*(undefined4 *)*param_1);
        uVar4 = _LC54;
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
LAB_0010a37d:
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
              if (pOVar5 != (Object *)0x0) goto LAB_0010a37d;
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
        goto LAB_0010a2ae;
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
  local_48 = (Object *)0x1098be;
  local_40 = 0x15;
  String::parse_latin1((StrRange *)&local_50);
  uitos((ulong)local_60);
  operator+((char *)local_58,(String *)"Invalid Object id \'");
  String::operator+((String *)&local_48,(String *)local_58);
  _err_print_error(&_LC53,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (String *)&local_48,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref(local_58);
  CowData<char32_t>::_unref(local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
LAB_0010a2ae:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<EditorSpinSlider, void, String const&>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorSpinSlider,void,String_const&>::call
          (CallableCustomMethodPointer<EditorSpinSlider,void,String_const&> *this,Variant **param_1,
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
            uVar4 = _LC55;
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
        goto LAB_0010a62e;
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
  _err_print_error(&_LC53,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (Variant *)&local_48,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref(local_58);
  CowData<char32_t>::_unref(local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
LAB_0010a62e:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindT<String const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<String_const&>::_gen_argument_type_info(int param_1)

{
  long lVar1;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar2;
  long in_FS_OFFSET;
  undefined8 local_80;
  undefined8 local_78;
  long local_70;
  undefined *local_68;
  long local_60;
  long local_58;
  undefined4 local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar2 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar2 = 0;
  puVar2[6] = 0;
  *(undefined8 *)(puVar2 + 8) = 0;
  puVar2[10] = 6;
  *(undefined1 (*) [16])(puVar2 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    local_70 = 0;
    local_78 = 0;
    local_68 = &_LC15;
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_78);
    local_80 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_68,4,(CowData<char32_t> *)&local_80,0,(StrRange *)&local_78,6,
               &local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    if ((StringName::configured != '\0') && (local_70 != 0)) {
      StringName::unref();
    }
    *puVar2 = local_68._0_4_;
    if (*(long *)(puVar2 + 2) != local_60) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + 2));
      lVar1 = local_60;
      local_60 = 0;
      *(long *)(puVar2 + 2) = lVar1;
    }
    if (*(long *)(puVar2 + 4) != local_58) {
      StringName::unref();
      lVar1 = local_58;
      local_58 = 0;
      *(long *)(puVar2 + 4) = lVar1;
    }
    puVar2[6] = local_50;
    if (*(long *)(puVar2 + 8) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + 8));
      lVar1 = local_48;
      local_48 = 0;
      *(long *)(puVar2 + 8) = lVar1;
    }
    puVar2[10] = local_40;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorSpinSlider::~EditorSpinSlider() */

void __thiscall EditorSpinSlider::~EditorSpinSlider(EditorSpinSlider *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_0010f5c0;
  if (*(long *)(this + 0xa68) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa68);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
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
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x9f8));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x9f0));
  Range::~Range((Range *)this);
  operator_delete(this,0xa70);
  return;
}



/* MethodBindT<bool>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<bool>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar5;
  long in_FS_OFFSET;
  undefined8 local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar5 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar5 = 0;
  puVar5[6] = 0;
  *(undefined8 *)(puVar5 + 8) = 0;
  puVar5[10] = 6;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  if (in_EDX != 0) goto LAB_0010aaab;
  local_78 = 0;
  local_80 = 0;
  local_68 = &_LC15;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,1);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_0010aba0:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_0010aba0;
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
  *puVar5 = local_68._0_4_;
  if (*(long *)(puVar5 + 2) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar5 + 2));
    uVar3 = local_60._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *(undefined8 *)(puVar5 + 2) = uVar3;
  }
  if (*(long *)(puVar5 + 4) != local_60._8_8_) {
    StringName::unref();
    uVar3 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(puVar5 + 4) = uVar3;
  }
  puVar5[6] = local_50;
  if (*(long *)(puVar5 + 8) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar5 + 8));
    lVar4 = local_48;
    local_48 = 0;
    *(long *)(puVar5 + 8) = lVar4;
  }
  puVar5[10] = local_40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
LAB_0010aaab:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
}



/* CanvasItem::is_class(String const&) const */

undefined8 __thiscall CanvasItem::is_class(CanvasItem *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  undefined8 uVar7;
  long lVar8;
  long in_FS_OFFSET;
  bool bVar9;
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
        plVar1 = (long *)(*(long *)(lVar4 + 0x10) + -0x10);
        if (*(long *)(lVar4 + 0x10) != 0) {
          do {
            lVar5 = *plVar1;
            if (lVar5 == 0) goto LAB_0010ad1f;
            LOCK();
            lVar8 = *plVar1;
            bVar9 = lVar5 == lVar8;
            if (bVar9) {
              *plVar1 = lVar5 + 1;
              lVar8 = lVar5;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar8 != -1) {
            local_60 = *(long *)(lVar4 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar3);
        local_58 = pcVar3;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_0010ad1f:
    cVar6 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar6 != '\0') goto LAB_0010add3;
  }
  cVar6 = String::operator==(param_1,"CanvasItem");
  if (cVar6 == '\0') {
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
      cVar6 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar6 != '\0') goto LAB_0010add3;
    }
    cVar6 = String::operator==(param_1,"Node");
    if (cVar6 == '\0') {
      for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
        lVar4 = *(long *)(lVar2 + 0x20);
        if (lVar4 == 0) {
          local_60 = 0;
        }
        else {
          pcVar3 = *(char **)(lVar4 + 8);
          local_60 = 0;
          if (pcVar3 == (char *)0x0) {
            plVar1 = (long *)(*(long *)(lVar4 + 0x10) + -0x10);
            if (*(long *)(lVar4 + 0x10) != 0) {
              do {
                lVar5 = *plVar1;
                if (lVar5 == 0) goto LAB_0010af33;
                LOCK();
                lVar8 = *plVar1;
                bVar9 = lVar5 == lVar8;
                if (bVar9) {
                  *plVar1 = lVar5 + 1;
                  lVar8 = lVar5;
                }
                UNLOCK();
              } while (!bVar9);
              if (lVar8 != -1) {
                local_60 = *(long *)(lVar4 + 0x10);
              }
            }
          }
          else {
            local_50 = strlen(pcVar3);
            local_58 = pcVar3;
            String::parse_latin1((StrRange *)&local_60);
          }
        }
LAB_0010af33:
        cVar6 = String::operator==(param_1,(String *)&local_60);
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
        if (cVar6 != '\0') goto LAB_0010add3;
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = String::operator==(param_1,"Object");
        return uVar7;
      }
      goto LAB_0010afdc;
    }
  }
LAB_0010add3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010afdc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<bool>::_gen_argument_type_info(int param_1)

{
  undefined4 in_register_0000003c;
  undefined4 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar1 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC15;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  local_60 = 0;
  *puVar1 = 1;
  puVar1[6] = 0;
  *(undefined8 *)(puVar1 + 8) = 0;
  *(undefined1 (*) [16])(puVar1 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar1[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar1 + 8),(CowData *)&local_58);
    puVar1[10] = 6;
    if (puVar1[6] == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(puVar1 + 8),false);
      if (*(undefined **)(puVar1 + 4) == local_48) {
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar1 + 4) = local_48;
      }
      goto LAB_0010b0e5;
    }
  }
  StringName::operator=((StringName *)(puVar1 + 4),(StringName *)&local_50);
LAB_0010b0e5:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorSpinSlider::is_class(String const&) const */

undefined8 __thiscall EditorSpinSlider::is_class(EditorSpinSlider *this,String *param_1)

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
            if (lVar3 == 0) goto LAB_0010b1cf;
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
LAB_0010b1cf:
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
    if (cVar6 != '\0') goto LAB_0010b283;
  }
  cVar6 = String::operator==(param_1,"EditorSpinSlider");
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
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar6 != '\0') goto LAB_0010b283;
    }
    cVar6 = String::operator==(param_1,"Range");
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
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        if (cVar6 != '\0') goto LAB_0010b283;
      }
      cVar6 = String::operator==(param_1,"Control");
      if (cVar6 == '\0') {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar8 = CanvasItem::is_class((CanvasItem *)this,param_1);
          return uVar8;
        }
        goto LAB_0010b43e;
      }
    }
  }
LAB_0010b283:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010b43e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
  local_78 = &_LC57;
  local_88 = 0;
  local_90 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = &_LC57;
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
      goto LAB_0010b5ac;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010b5ac:
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



/* CanvasItem::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall CanvasItem::_get_property_listv(CanvasItem *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  CowData<char32_t> *local_b0;
  CowData<char32_t> *local_a8;
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
    local_90 = 0;
    local_88 = 0;
    local_78 = "Node";
    local_70 = 4;
    String::parse_latin1((StrRange *)&local_88);
    local_78 = "Node";
    local_80 = 0;
    local_70 = 4;
    String::parse_latin1((StrRange *)&local_80);
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_78,0,(StrRange *)&local_80,0,(StrRange *)&local_88,0x80,
               &local_90);
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    if ((StringName::configured != '\0') && (local_68 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if ((StringName::configured != '\0') && (local_90 != 0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_78,"Node",false);
    ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
    if ((StringName::configured != '\0') && (local_78 != (undefined *)0x0)) {
      StringName::unref();
    }
  }
  local_a8 = (CowData<char32_t> *)&local_70;
  local_b0 = (CowData<char32_t> *)&local_58;
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
    CowData<char32_t>::_ref(local_a8,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 != 0) {
    CowData<char32_t>::_ref(local_b0,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
      StringName::StringName((StringName *)&local_80,(String *)local_b0,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_0010b9af;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010b9af:
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref(local_a8);
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
  if ((code *)PTR__get_property_list_00114028 != Object::_get_property_list) {
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
      goto LAB_0010bdc1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010bdc1:
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
  if ((code *)PTR__get_property_list_00114030 != CanvasItem::_get_property_list) {
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



/* Range::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Range::_get_property_listv(Range *this,List *param_1,bool param_2)

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
  local_78 = "Range";
  local_70 = 5;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Range";
  local_98 = 0;
  local_70 = 5;
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
      goto LAB_0010c091;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010c091:
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
  StringName::StringName((StringName *)&local_78,"Range",false);
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



/* EditorSpinSlider::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
EditorSpinSlider::_get_property_listv(EditorSpinSlider *this,List *param_1,bool param_2)

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
    Range::_get_property_listv((Range *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "EditorSpinSlider";
  local_70 = 0x10;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorSpinSlider";
  local_98 = 0;
  local_70 = 0x10;
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
      goto LAB_0010c341;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010c341:
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
  StringName::StringName((StringName *)&local_78,"EditorSpinSlider",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Range::_get_property_listv((Range *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Ref<TextServer>::unref() */

void __thiscall Ref<TextServer>::unref(Ref<TextServer> *this)

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



/* WARNING: Removing unreachable block (ram,0x0010c720) */
/* EditorSpinSlider::_notificationv(int, bool) */

void __thiscall EditorSpinSlider::_notificationv(EditorSpinSlider *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    _notification(this,param_1);
    if ((code *)PTR__notification_00114038 != CanvasItem::_notification) {
      Control::_notification(iVar1);
    }
    CanvasItem::_notification(iVar1);
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  CanvasItem::_notification(iVar1);
  if ((code *)PTR__notification_00114038 != CanvasItem::_notification) {
    Control::_notification(iVar1);
  }
  _notification(this,param_1);
  return;
}



/* MethodBind* create_method_bind<EditorSpinSlider, String const&>(void (EditorSpinSlider::*)(String
   const&)) */

MethodBind * create_method_bind<EditorSpinSlider,String_const&>(_func_void_String_ptr *param_1)

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
  *(_func_void_String_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010fc90;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "EditorSpinSlider";
  local_30 = 0x10;
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



/* MethodBind* create_method_bind<EditorSpinSlider, String>(String (EditorSpinSlider::*)() const) */

MethodBind * create_method_bind<EditorSpinSlider,String>(_func_String *param_1)

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
  *(_func_String **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010fcf0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "EditorSpinSlider";
  local_30 = 0x10;
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



/* MethodBind* create_method_bind<EditorSpinSlider, bool>(void (EditorSpinSlider::*)(bool)) */

MethodBind * create_method_bind<EditorSpinSlider,bool>(_func_void_bool *param_1)

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
  *(_func_void_bool **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010fd50;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "EditorSpinSlider";
  local_30 = 0x10;
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



/* MethodBind* create_method_bind<EditorSpinSlider, bool>(bool (EditorSpinSlider::*)() const) */

MethodBind * create_method_bind<EditorSpinSlider,bool>(_func_bool *param_1)

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
  *(_func_bool **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010fdb0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "EditorSpinSlider";
  local_30 = 0x10;
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



/* EditorSpinSlider::_initialize_classv() */

void EditorSpinSlider::_initialize_classv(void)

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
    if (Range::initialize_class()::initialized == '\0') {
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
            if ((code *)PTR__bind_methods_00114050 != Node::_bind_methods) {
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
          if ((code *)PTR__bind_compatibility_methods_00114040 !=
              Object::_bind_compatibility_methods) {
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
      local_58 = "Range";
      local_70 = 0;
      local_50 = 5;
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
      if ((code *)PTR__bind_methods_00114048 != Control::_bind_methods) {
        Range::_bind_methods();
      }
      Range::initialize_class()::initialized = '\x01';
    }
    local_58 = "Range";
    local_68 = 0;
    local_50 = 5;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "EditorSpinSlider";
    local_70 = 0;
    local_50 = 0x10;
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



/* WARNING: Removing unreachable block (ram,0x0010d328) */
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



/* MethodBindTRC<bool>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<bool>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  bool bVar2;
  long *plVar4;
  undefined4 in_register_00000014;
  long *plVar5;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  Variant *pVVar3;
  
  plVar5 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar5 != (long *)0x0) && (plVar5[1] != 0)) && (*(char *)(plVar5[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar5[1] == 0) {
      plVar4 = (long *)plVar5[0x23];
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*plVar5 + 0x40))(plVar5);
      }
    }
    else {
      plVar4 = (long *)(plVar5[1] + 0x20);
    }
    if (local_58 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC53,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010d6a0;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar3 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar3 & 1) != 0) {
        pVVar3 = *(Variant **)(pVVar3 + *(long *)((long)plVar5 + (long)pVVar1) + -1);
      }
      bVar2 = (bool)(*(code *)pVVar3)();
      Variant::Variant((Variant *)local_48,bVar2);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
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
LAB_0010d6a0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<bool>::validated_call
          (MethodBindTRC<bool> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  Variant VVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010d942;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  VVar1 = (Variant)(*pcVar2)(param_1 + *(long *)(this + 0x60));
  param_3[8] = VVar1;
LAB_0010d942:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<bool>::ptrcall(MethodBindTRC<bool> *this,Object *param_1,void **param_2,void *param_3)

{
  undefined1 uVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010db01;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(undefined1 *)param_3 = uVar1;
LAB_0010db01:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<bool>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<bool>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

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
      goto LAB_0010de41;
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
                    /* WARNING: Could not recover jumptable at 0x0010dccd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined1 *)(*(long *)param_3 + 8));
    return;
  }
LAB_0010de41:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<bool>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<bool>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_0010e029;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
                    /* WARNING: Load size is inaccurate */
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010deb2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3 != '\0');
    return;
  }
LAB_0010e029:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<String>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<String>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  long *plVar4;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar4 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar4 != (long *)0x0) && (plVar4[1] != 0)) && (*(char *)(plVar4[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar4[1] == 0) {
      plVar3 = (long *)plVar4[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*plVar4 + 0x40))(plVar4);
      }
    }
    else {
      plVar3 = (long *)(plVar4[1] + 0x20);
    }
    if (local_58 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC53,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010e100;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
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
      (*(code *)pVVar2)((CowData<char32_t> *)&local_58);
      Variant::Variant((Variant *)local_48,(String *)&local_58);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
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
LAB_0010e100:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<String>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<String>::validated_call
          (MethodBindTRC<String> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  code *pcVar1;
  long *plVar2;
  Variant **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  Variant **local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (Variant **)*plVar2) {
      if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Variant **)0x10d4f8;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((CowData<char32_t> *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(CowData<char32_t> *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010e33c;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    param_2 = *(Variant ***)(param_1 + *(long *)(this + 0x60));
    pcVar1 = *(code **)(pcVar1 + (long)param_2 + -1);
  }
  (*pcVar1)((CowData<char32_t> *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  if (*(Variant ***)(param_3 + 8) != local_48) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(param_3 + 8),(CowData *)&local_48);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
LAB_0010e33c:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<String>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<String>::ptrcall
          (MethodBindTRC<String> *this,Object *param_1,void **param_2,void *param_3)

{
  code *pcVar1;
  long *plVar2;
  void **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  void **local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (void **)*plVar2) {
      if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (void **)0x10d4f8;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((CowData<char32_t> *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(CowData<char32_t> *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010e50d;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    param_2 = *(void ***)(param_1 + *(long *)(this + 0x60));
    pcVar1 = *(code **)(pcVar1 + (long)param_2 + -1);
  }
  (*pcVar1)((CowData<char32_t> *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
                    /* WARNING: Load size is inaccurate */
  if (*param_3 != local_48) {
    CowData<char32_t>::_ref((CowData<char32_t> *)param_3,(CowData *)&local_48);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
LAB_0010e50d:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<String_const&>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

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
      goto LAB_0010e841;
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
                    /* WARNING: Could not recover jumptable at 0x0010e6cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8);
    return;
  }
LAB_0010e841:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<String_const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_0010ea21;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
                    /* WARNING: Load size is inaccurate */
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010e8a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3);
    return;
  }
LAB_0010ea21:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<String_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  long *plVar7;
  long lVar8;
  undefined4 in_register_00000014;
  long *plVar9;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar10;
  Variant *pVVar11;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  plVar9 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar9 != (long *)0x0) && (plVar9[1] != 0)) && (*(char *)(plVar9[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (plVar9[1] == 0) {
      plVar7 = (long *)plVar9[0x23];
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)(**(code **)(*plVar9 + 0x40))(plVar9);
      }
    }
    else {
      plVar7 = (long *)(plVar9[1] + 0x20);
    }
    if (local_48 == (char *)*plVar7) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC53,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010ec00;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar11 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar10 = param_2[5];
    if (pVVar10 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_0010ec50;
LAB_0010ec40:
      pVVar10 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar10 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0010ec50:
        uVar6 = 4;
        goto LAB_0010ebf5;
      }
      if (in_R8D == 1) goto LAB_0010ec40;
      lVar8 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar8) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar8,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar10 = pVVar10 + lVar8 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar11 & 1) != 0) {
      pVVar11 = *(Variant **)(pVVar11 + *(long *)((long)plVar9 + (long)pVVar1) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar10,4);
    uVar4 = _LC55;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_String((Variant *)&local_48);
    (*(code *)pVVar11)((Variant *)((long)plVar9 + (long)pVVar1),(Variant *)&local_48);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  }
  else {
    uVar6 = 3;
LAB_0010ebf5:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_0010ec00:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, bool>(__UnexistingClass*, void
   (__UnexistingClass::*)(bool), Variant const**, int, Callable::CallError&, Vector<Variant> const&)
    */

void call_with_variant_args_dv<__UnexistingClass,bool>
               (__UnexistingClass *param_1,_func_void_bool *param_2,Variant **param_3,int param_4,
               CallError *param_5,Vector *param_6)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  undefined4 in_register_0000000c;
  long lVar7;
  uint uVar8;
  Variant *this;
  long in_stack_00000008;
  
  uVar8 = (uint)param_5;
  if (1 < uVar8) {
    uVar6 = 3;
    goto LAB_0010ef0d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_0010ef70;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_0010ef70:
      uVar6 = 4;
LAB_0010ef0d:
      *(undefined4 *)param_6 = uVar6;
      *(undefined4 *)(param_6 + 8) = 1;
      return;
    }
    if (uVar8 != 1) {
      lVar7 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar7) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar7,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this = (Variant *)(lVar1 + lVar7 * 0x18);
      goto LAB_0010ee8b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0010ee8b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_bool **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,1);
  uVar4 = _LC140;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_bool(this);
                    /* WARNING: Could not recover jumptable at 0x0010eee7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)(SUB81(param_1 + (long)param_3,0));
  return;
}



/* MethodBindT<bool>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<bool>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long *plVar1;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var2;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var2 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var2 != (__UnexistingClass *)0x0) && (*(long *)(p_Var2 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var2 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var2 + 8) == 0) {
      plVar1 = *(long **)(p_Var2 + 0x118);
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)(*(long *)p_Var2 + 0x40))(p_Var2);
      }
    }
    else {
      plVar1 = (long *)(*(long *)(p_Var2 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
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
      _err_print_error(&_LC53,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_0010efd6;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,bool>
            (p_Var2,(_func_void_bool *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,
             in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_0010efd6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorSpinSlider::get_tooltip(Vector2 const&) const */

void EditorSpinSlider::_GLOBAL__sub_I_get_tooltip(void)

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
/* MethodDefinition::~MethodDefinition() */

void __thiscall MethodDefinition::~MethodDefinition(MethodDefinition *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
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
/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<bool>::~MethodBindT() */

void __thiscall MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<String>::~MethodBindTRC() */

void __thiscall MethodBindTRC<String>::~MethodBindTRC(MethodBindTRC<String> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<String const&>::~MethodBindT() */

void __thiscall MethodBindT<String_const&>::~MethodBindT(MethodBindT<String_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<CanvasItem, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<CanvasItem,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<CanvasItem,void> *this)

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
/* CallableCustomMethodPointer<EditorSpinSlider, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorSpinSlider,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorSpinSlider,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorSpinSlider, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorSpinSlider,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorSpinSlider,void,String_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorSpinSlider, void, Ref<InputEvent>
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorSpinSlider,void,Ref<InputEvent>const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorSpinSlider,void,Ref<InputEvent>const&> *this)

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
/* EditorSpinSlider::~EditorSpinSlider() */

void __thiscall EditorSpinSlider::~EditorSpinSlider(EditorSpinSlider *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



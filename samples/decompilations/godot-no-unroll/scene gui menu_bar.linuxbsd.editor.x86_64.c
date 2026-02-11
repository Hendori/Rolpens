
/* MenuBar::set_switch_on_hover(bool) */

void __thiscall MenuBar::set_switch_on_hover(MenuBar *this,bool param_1)

{
  this[0x9f0] = (MenuBar)param_1;
  return;
}



/* MenuBar::is_switch_on_hover() */

MenuBar __thiscall MenuBar::is_switch_on_hover(MenuBar *this)

{
  return this[0x9f0];
}



/* MenuBar::set_disable_shortcuts(bool) */

void __thiscall MenuBar::set_disable_shortcuts(MenuBar *this,bool param_1)

{
  this[0x9f1] = (MenuBar)param_1;
  return;
}



/* MenuBar::get_text_direction() const */

undefined4 __thiscall MenuBar::get_text_direction(MenuBar *this)

{
  return *(undefined4 *)(this + 0xa00);
}



/* MenuBar::is_flat() const */

MenuBar __thiscall MenuBar::is_flat(MenuBar *this)

{
  return this[0x9f3];
}



/* MenuBar::get_start_index() const */

undefined4 __thiscall MenuBar::get_start_index(MenuBar *this)

{
  return *(undefined4 *)(this + 0x9f4);
}



/* MenuBar::is_prefer_global_menu() const */

MenuBar __thiscall MenuBar::is_prefer_global_menu(MenuBar *this)

{
  return this[0x9f2];
}



/* MenuBar::get_menu_count() const */

undefined4 __thiscall MenuBar::get_menu_count(MenuBar *this)

{
  if (*(long *)(this + 0xa10) != 0) {
    return *(undefined4 *)(*(long *)(this + 0xa10) + -8);
  }
  return 0;
}



/* MenuBar::set_flat(bool) */

void __thiscall MenuBar::set_flat(MenuBar *this,bool param_1)

{
  if (this[0x9f3] == (MenuBar)param_1) {
    return;
  }
  this[0x9f3] = (MenuBar)param_1;
  CanvasItem::queue_redraw();
  return;
}



/* MenuBar::is_native_menu() const */

MenuBar __thiscall MenuBar::is_native_menu(MenuBar *this)

{
  char cVar1;
  
  cVar1 = Node::is_part_of_edited_scene();
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*NativeMenu::singleton + 0x150))(NativeMenu::singleton,0);
    if (cVar1 != '\0') {
      return this[0x9f2];
    }
  }
  return (MenuBar)0x0;
}



/* MenuBar::_popup_visibility_changed(bool) */

void __thiscall MenuBar::_popup_visibility_changed(MenuBar *this,bool param_1)

{
  if (!param_1) {
    *(undefined4 *)(this + 0xa20) = 0xffffffff;
    *(undefined4 *)(this + 0xa18) = 0xffffffff;
    Node::set_process_internal(SUB81(this,0));
    CanvasItem::queue_redraw();
    return;
  }
  if (this[0x9f0] == (MenuBar)0x0) {
    return;
  }
  Node::set_process_internal(SUB81(this,0));
  return;
}



/* MenuBar::set_text_direction(Control::TextDirection) */

void __thiscall MenuBar::set_text_direction(MenuBar *this,int param_2)

{
  if ((-2 < param_2) && (param_2 < 4)) {
    if (*(int *)(this + 0xa00) == param_2) {
      return;
    }
    *(int *)(this + 0xa00) = param_2;
    Control::update_minimum_size();
    CanvasItem::queue_redraw();
    return;
  }
  _err_print_error("set_text_direction","scene/gui/menu_bar.cpp",0x2f8,
                   "Condition \"(int)p_text_direction < -1 || (int)p_text_direction > 3\" is true.",
                   0,0);
  return;
}



/* MenuBar::is_menu_disabled(int) const */

undefined1 __thiscall MenuBar::is_menu_disabled(MenuBar *this,int param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(this + 0xa10);
  lVar2 = (long)param_1;
  if (param_1 < 0) {
    if (lVar1 != 0) {
      lVar3 = *(long *)(lVar1 + -8);
      goto LAB_001001e9;
    }
  }
  else if (lVar1 != 0) {
    lVar3 = *(long *)(lVar1 + -8);
    if (lVar2 < lVar3) {
      return *(undefined1 *)(lVar1 + 0x19 + lVar2 * 0x28);
    }
    goto LAB_001001e9;
  }
  lVar3 = 0;
LAB_001001e9:
  _err_print_index_error
            ("is_menu_disabled","scene/gui/menu_bar.cpp",0x38f,lVar2,lVar3,"p_menu",
             "menu_cache.size()","",false,false);
  return 0;
}



/* MenuBar::is_menu_hidden(int) const */

undefined1 __thiscall MenuBar::is_menu_hidden(MenuBar *this,int param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(this + 0xa10);
  lVar2 = (long)param_1;
  if (param_1 < 0) {
    if (lVar1 != 0) {
      lVar3 = *(long *)(lVar1 + -8);
      goto LAB_00100279;
    }
  }
  else if (lVar1 != 0) {
    lVar3 = *(long *)(lVar1 + -8);
    if (lVar2 < lVar3) {
      return *(undefined1 *)(lVar1 + 0x18 + lVar2 * 0x28);
    }
    goto LAB_00100279;
  }
  lVar3 = 0;
LAB_00100279:
  _err_print_index_error
            ("is_menu_hidden","scene/gui/menu_bar.cpp",0x3a2,lVar2,lVar3,"p_menu",
             "menu_cache.size()","",false,false);
  return 0;
}



/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   MenuBar::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#21}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(Node*,StringName_const&,StringName_const&),MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#21}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#21}::
                typeinfo;
    return 0;
  }
  if (param_3 != 1) {
    return 0;
  }
  *param_1 = param_2;
  return 0;
}



/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   MenuBar::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#20}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(Node*,StringName_const&,StringName_const&),MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#20}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#20}::
                typeinfo;
    return 0;
  }
  if (param_3 != 1) {
    return 0;
  }
  *param_1 = param_2;
  return 0;
}



/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   MenuBar::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#19}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(Node*,StringName_const&,StringName_const&),MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#19}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#19}::
                typeinfo;
    return 0;
  }
  if (param_3 != 1) {
    return 0;
  }
  *param_1 = param_2;
  return 0;
}



/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   MenuBar::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#18}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(Node*,StringName_const&,StringName_const&),MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#18}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#18}::
                typeinfo;
    return 0;
  }
  if (param_3 != 1) {
    return 0;
  }
  *param_1 = param_2;
  return 0;
}



/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   MenuBar::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#17}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(Node*,StringName_const&,StringName_const&),MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#17}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#17}::
                typeinfo;
    return 0;
  }
  if (param_3 != 1) {
    return 0;
  }
  *param_1 = param_2;
  return 0;
}



/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   MenuBar::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#16}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(Node*,StringName_const&,StringName_const&),MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#16}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#16}::
                typeinfo;
    return 0;
  }
  if (param_3 != 1) {
    return 0;
  }
  *param_1 = param_2;
  return 0;
}



/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   MenuBar::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#15}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(Node*,StringName_const&,StringName_const&),MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#15}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#15}::
                typeinfo;
    return 0;
  }
  if (param_3 != 1) {
    return 0;
  }
  *param_1 = param_2;
  return 0;
}



/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   MenuBar::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#14}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(Node*,StringName_const&,StringName_const&),MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#14}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#14}::
                typeinfo;
    return 0;
  }
  if (param_3 != 1) {
    return 0;
  }
  *param_1 = param_2;
  return 0;
}



/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   MenuBar::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#13}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(Node*,StringName_const&,StringName_const&),MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#13}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#13}::
                typeinfo;
    return 0;
  }
  if (param_3 != 1) {
    return 0;
  }
  *param_1 = param_2;
  return 0;
}



/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   MenuBar::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#12}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(Node*,StringName_const&,StringName_const&),MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#12}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#12}::
                typeinfo;
    return 0;
  }
  if (param_3 != 1) {
    return 0;
  }
  *param_1 = param_2;
  return 0;
}



/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   MenuBar::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#11}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(Node*,StringName_const&,StringName_const&),MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#11}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#11}::
                typeinfo;
    return 0;
  }
  if (param_3 != 1) {
    return 0;
  }
  *param_1 = param_2;
  return 0;
}



/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   MenuBar::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#10}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(Node*,StringName_const&,StringName_const&),MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#10}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#10}::
                typeinfo;
    return 0;
  }
  if (param_3 != 1) {
    return 0;
  }
  *param_1 = param_2;
  return 0;
}



/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   MenuBar::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#9}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(Node*,StringName_const&,StringName_const&),MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#9}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#9}::
                typeinfo;
    return 0;
  }
  if (param_3 != 1) {
    return 0;
  }
  *param_1 = param_2;
  return 0;
}



/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   MenuBar::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#8}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(Node*,StringName_const&,StringName_const&),MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#8}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#8}::
                typeinfo;
    return 0;
  }
  if (param_3 != 1) {
    return 0;
  }
  *param_1 = param_2;
  return 0;
}



/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   MenuBar::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#7}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(Node*,StringName_const&,StringName_const&),MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#7}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#7}::
                typeinfo;
    return 0;
  }
  if (param_3 != 1) {
    return 0;
  }
  *param_1 = param_2;
  return 0;
}



/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   MenuBar::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#6}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(Node*,StringName_const&,StringName_const&),MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#6}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#6}::
                typeinfo;
    return 0;
  }
  if (param_3 != 1) {
    return 0;
  }
  *param_1 = param_2;
  return 0;
}



/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   MenuBar::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#5}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(Node*,StringName_const&,StringName_const&),MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#5}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#5}::
                typeinfo;
    return 0;
  }
  if (param_3 != 1) {
    return 0;
  }
  *param_1 = param_2;
  return 0;
}



/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   MenuBar::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#4}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(Node*,StringName_const&,StringName_const&),MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#4}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#4}::
                typeinfo;
    return 0;
  }
  if (param_3 != 1) {
    return 0;
  }
  *param_1 = param_2;
  return 0;
}



/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   MenuBar::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#3}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(Node*,StringName_const&,StringName_const&),MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#3}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#3}::
                typeinfo;
    return 0;
  }
  if (param_3 != 1) {
    return 0;
  }
  *param_1 = param_2;
  return 0;
}



/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   MenuBar::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#2}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(Node*,StringName_const&,StringName_const&),MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#2}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#2}::
                typeinfo;
    return 0;
  }
  if (param_3 != 1) {
    return 0;
  }
  *param_1 = param_2;
  return 0;
}



/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   MenuBar::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#1}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(Node*,StringName_const&,StringName_const&),MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#1}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#1}::
                typeinfo;
    return 0;
  }
  if (param_3 != 1) {
    return 0;
  }
  *param_1 = param_2;
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   MenuBar::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#14}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#14}>
     ::_M_invoke(_Any_data *param_1,Node **param_2,StringName *param_3,StringName *param_4)

{
  code *pcVar1;
  long lVar2;
  long in_FS_OFFSET;
  undefined8 uVar3;
  undefined8 in_XMM1_Qa;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_2 == (Node *)0x0) {
    Control::get_theme_item(local_48,0,0,param_3,param_4);
    _DAT_00000a98 = Variant::operator_cast_to_Color((Variant *)local_48);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    _DAT_00000aa0 = in_XMM1_Qa;
    (*pcVar1)();
  }
  lVar2 = __dynamic_cast(*param_2,&Object::typeinfo,&MenuBar::typeinfo,0);
  Control::get_theme_item(local_48,lVar2,0,param_3,param_4);
  uVar3 = Variant::operator_cast_to_Color((Variant *)local_48);
  *(undefined8 *)(lVar2 + 0xa98) = uVar3;
  *(undefined8 *)(lVar2 + 0xaa0) = in_XMM1_Qa;
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   MenuBar::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#19}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#19}>
     ::_M_invoke(_Any_data *param_1,Node **param_2,StringName *param_3,StringName *param_4)

{
  code *pcVar1;
  long lVar2;
  long in_FS_OFFSET;
  undefined8 uVar3;
  undefined8 in_XMM1_Qa;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_2 == (Node *)0x0) {
    Control::get_theme_item(local_48,0,0,param_3,param_4);
    _DAT_00000ae8 = Variant::operator_cast_to_Color((Variant *)local_48);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    _DAT_00000af0 = in_XMM1_Qa;
    (*pcVar1)();
  }
  lVar2 = __dynamic_cast(*param_2,&Object::typeinfo,&MenuBar::typeinfo,0);
  Control::get_theme_item(local_48,lVar2,0,param_3,param_4);
  uVar3 = Variant::operator_cast_to_Color((Variant *)local_48);
  *(undefined8 *)(lVar2 + 0xae8) = uVar3;
  *(undefined8 *)(lVar2 + 0xaf0) = in_XMM1_Qa;
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   MenuBar::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#20}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#20}>
     ::_M_invoke(_Any_data *param_1,Node **param_2,StringName *param_3,StringName *param_4)

{
  code *pcVar1;
  long lVar2;
  long in_FS_OFFSET;
  undefined8 uVar3;
  undefined8 in_XMM1_Qa;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_2 == (Node *)0x0) {
    Control::get_theme_item(local_48,0,0,param_3,param_4);
    _DAT_00000af8 = Variant::operator_cast_to_Color((Variant *)local_48);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    _DAT_00000b00 = in_XMM1_Qa;
    (*pcVar1)();
  }
  lVar2 = __dynamic_cast(*param_2,&Object::typeinfo,&MenuBar::typeinfo,0);
  Control::get_theme_item(local_48,lVar2,0,param_3,param_4);
  uVar3 = Variant::operator_cast_to_Color((Variant *)local_48);
  *(undefined8 *)(lVar2 + 0xaf8) = uVar3;
  *(undefined8 *)(lVar2 + 0xb00) = in_XMM1_Qa;
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   MenuBar::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#18}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#18}>
     ::_M_invoke(_Any_data *param_1,Node **param_2,StringName *param_3,StringName *param_4)

{
  code *pcVar1;
  long lVar2;
  long in_FS_OFFSET;
  undefined8 uVar3;
  undefined8 in_XMM1_Qa;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_2 == (Node *)0x0) {
    Control::get_theme_item(local_48,0,0,param_3,param_4);
    _DAT_00000ad8 = Variant::operator_cast_to_Color((Variant *)local_48);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    _DAT_00000ae0 = in_XMM1_Qa;
    (*pcVar1)();
  }
  lVar2 = __dynamic_cast(*param_2,&Object::typeinfo,&MenuBar::typeinfo,0);
  Control::get_theme_item(local_48,lVar2,0,param_3,param_4);
  uVar3 = Variant::operator_cast_to_Color((Variant *)local_48);
  *(undefined8 *)(lVar2 + 0xad8) = uVar3;
  *(undefined8 *)(lVar2 + 0xae0) = in_XMM1_Qa;
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   MenuBar::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#15}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#15}>
     ::_M_invoke(_Any_data *param_1,Node **param_2,StringName *param_3,StringName *param_4)

{
  code *pcVar1;
  long lVar2;
  long in_FS_OFFSET;
  undefined8 uVar3;
  undefined8 in_XMM1_Qa;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_2 == (Node *)0x0) {
    Control::get_theme_item(local_48,0,0,param_3,param_4);
    _DAT_00000aa8 = Variant::operator_cast_to_Color((Variant *)local_48);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    _DAT_00000ab0 = in_XMM1_Qa;
    (*pcVar1)();
  }
  lVar2 = __dynamic_cast(*param_2,&Object::typeinfo,&MenuBar::typeinfo,0);
  Control::get_theme_item(local_48,lVar2,0,param_3,param_4);
  uVar3 = Variant::operator_cast_to_Color((Variant *)local_48);
  *(undefined8 *)(lVar2 + 0xaa8) = uVar3;
  *(undefined8 *)(lVar2 + 0xab0) = in_XMM1_Qa;
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   MenuBar::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#17}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#17}>
     ::_M_invoke(_Any_data *param_1,Node **param_2,StringName *param_3,StringName *param_4)

{
  code *pcVar1;
  long lVar2;
  long in_FS_OFFSET;
  undefined8 uVar3;
  undefined8 in_XMM1_Qa;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_2 == (Node *)0x0) {
    Control::get_theme_item(local_48,0,0,param_3,param_4);
    _DAT_00000ac8 = Variant::operator_cast_to_Color((Variant *)local_48);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    _DAT_00000ad0 = in_XMM1_Qa;
    (*pcVar1)();
  }
  lVar2 = __dynamic_cast(*param_2,&Object::typeinfo,&MenuBar::typeinfo,0);
  Control::get_theme_item(local_48,lVar2,0,param_3,param_4);
  uVar3 = Variant::operator_cast_to_Color((Variant *)local_48);
  *(undefined8 *)(lVar2 + 0xac8) = uVar3;
  *(undefined8 *)(lVar2 + 0xad0) = in_XMM1_Qa;
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   MenuBar::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#16}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#16}>
     ::_M_invoke(_Any_data *param_1,Node **param_2,StringName *param_3,StringName *param_4)

{
  code *pcVar1;
  long lVar2;
  long in_FS_OFFSET;
  undefined8 uVar3;
  undefined8 in_XMM1_Qa;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_2 == (Node *)0x0) {
    Control::get_theme_item(local_48,0,0,param_3,param_4);
    _DAT_00000ab8 = Variant::operator_cast_to_Color((Variant *)local_48);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    _DAT_00000ac0 = in_XMM1_Qa;
    (*pcVar1)();
  }
  lVar2 = __dynamic_cast(*param_2,&Object::typeinfo,&MenuBar::typeinfo,0);
  Control::get_theme_item(local_48,lVar2,0,param_3,param_4);
  uVar3 = Variant::operator_cast_to_Color((Variant *)local_48);
  *(undefined8 *)(lVar2 + 0xab8) = uVar3;
  *(undefined8 *)(lVar2 + 0xac0) = in_XMM1_Qa;
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   MenuBar::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#21}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#21}>
     ::_M_invoke(_Any_data *param_1,Node **param_2,StringName *param_3,StringName *param_4)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  long in_FS_OFFSET;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_2 == (Node *)0x0) {
    Control::get_theme_item(local_48,0,1,param_3,param_4);
    Variant::operator_cast_to_int((Variant *)local_48);
    _DAT_00000b08 = 0;
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  lVar3 = __dynamic_cast(*param_2,&Object::typeinfo,&MenuBar::typeinfo,0);
  Control::get_theme_item(local_48,lVar3,1,param_3,param_4);
  iVar2 = Variant::operator_cast_to_int((Variant *)local_48);
  *(int *)(lVar3 + 0xb08) = iVar2;
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   MenuBar::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#13}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#13}>
     ::_M_invoke(_Any_data *param_1,Node **param_2,StringName *param_3,StringName *param_4)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  long in_FS_OFFSET;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_2 == (Node *)0x0) {
    Control::get_theme_item(local_48,0,1,param_3,param_4);
    Variant::operator_cast_to_int((Variant *)local_48);
    _DAT_00000a94 = 0;
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  lVar3 = __dynamic_cast(*param_2,&Object::typeinfo,&MenuBar::typeinfo,0);
  Control::get_theme_item(local_48,lVar3,1,param_3,param_4);
  iVar2 = Variant::operator_cast_to_int((Variant *)local_48);
  *(int *)(lVar3 + 0xa94) = iVar2;
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   MenuBar::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#12}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#12}>
     ::_M_invoke(_Any_data *param_1,Node **param_2,StringName *param_3,StringName *param_4)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  long in_FS_OFFSET;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_2 == (Node *)0x0) {
    Control::get_theme_item(local_48,0,3,param_3,param_4);
    Variant::operator_cast_to_int((Variant *)local_48);
    _DAT_00000a90 = 0;
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  lVar3 = __dynamic_cast(*param_2,&Object::typeinfo,&MenuBar::typeinfo,0);
  Control::get_theme_item(local_48,lVar3,3,param_3,param_4);
  iVar2 = Variant::operator_cast_to_int((Variant *)local_48);
  *(int *)(lVar3 + 0xa90) = iVar2;
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
   MenuBar::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#11}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#11}>
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
    Control::get_theme_item(local_48,0,2,param_3,param_4);
    Variant::get_validated_object();
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar4 = __dynamic_cast(*param_2,&Object::typeinfo,&MenuBar::typeinfo,0);
  Control::get_theme_item(local_48,lVar4,2,param_3,param_4);
  pOVar5 = (Object *)Variant::get_validated_object();
  pOVar1 = *(Object **)(lVar4 + 0xa88);
  if (pOVar5 == pOVar1) goto LAB_00100ed0;
  if (pOVar5 == (Object *)0x0) {
    if (pOVar1 == (Object *)0x0) goto LAB_00100ed0;
    *(undefined8 *)(lVar4 + 0xa88) = 0;
  }
  else {
    pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&Font::typeinfo,0);
    if (pOVar1 == pOVar5) goto LAB_00100ed0;
    *(Object **)(lVar4 + 0xa88) = pOVar5;
    if (pOVar5 != (Object *)0x0) {
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        *(undefined8 *)(lVar4 + 0xa88) = 0;
      }
    }
    if (pOVar1 == (Object *)0x0) goto LAB_00100ed0;
  }
  cVar3 = RefCounted::unreference();
  if (cVar3 != '\0') {
    cVar3 = predelete_handler(pOVar1);
    if (cVar3 != '\0') {
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      Memory::free_static(pOVar1,false);
    }
  }
LAB_00100ed0:
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Ref<StyleBox>::TEMPNAMEPLACEHOLDERVALUE(Ref<StyleBox> const&) [clone .isra.0] */

void __thiscall Ref<StyleBox>::operator=(Ref<StyleBox> *this,Ref *param_1)

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



/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   MenuBar::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#3}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#3}>
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
    Control::get_theme_item(local_48,0,5,param_3,param_4);
    Variant::get_validated_object();
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar4 = __dynamic_cast(*param_2,&Object::typeinfo,&MenuBar::typeinfo,0);
  Control::get_theme_item(local_48,lVar4,5,param_3,param_4);
  pOVar5 = (Object *)Variant::get_validated_object();
  pOVar1 = *(Object **)(lVar4 + 0xa48);
  if (pOVar5 == pOVar1) goto LAB_001010a0;
  if (pOVar5 == (Object *)0x0) {
    if (pOVar1 == (Object *)0x0) goto LAB_001010a0;
    *(undefined8 *)(lVar4 + 0xa48) = 0;
  }
  else {
    pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&StyleBox::typeinfo,0);
    if (pOVar1 == pOVar5) goto LAB_001010a0;
    *(Object **)(lVar4 + 0xa48) = pOVar5;
    if (pOVar5 != (Object *)0x0) {
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        *(undefined8 *)(lVar4 + 0xa48) = 0;
      }
    }
    if (pOVar1 == (Object *)0x0) goto LAB_001010a0;
  }
  cVar3 = RefCounted::unreference();
  if (cVar3 != '\0') {
    cVar3 = predelete_handler(pOVar1);
    if (cVar3 != '\0') {
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      Memory::free_static(pOVar1,false);
    }
  }
LAB_001010a0:
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MenuBar::get_minimum_size() const */

undefined8 __thiscall MenuBar::get_minimum_size(MenuBar *this)

{
  code *pcVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  Object *pOVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar9;
  float local_3c;
  
  fVar6 = 0.0;
  cVar2 = is_native_menu(this);
  local_3c = 0.0;
  if (cVar2 != '\0') goto LAB_00101159;
  pOVar5 = *(Object **)(this + 0xa38);
  if (pOVar5 == (Object *)0x0) {
    lVar3 = *(long *)(this + 0xa10);
    if (lVar3 == 0) {
LAB_00101360:
      local_3c = 0.0;
      fVar6 = 0.0;
      goto LAB_00101159;
    }
LAB_001011b8:
    local_3c = 0.0;
    lVar4 = 0;
    fVar6 = 0.0;
    do {
      if (*(long *)(lVar3 + -8) <= lVar4) {
        if (1 < *(long *)(lVar3 + -8)) {
          local_3c = (float)((*(long *)(lVar3 + -8) + -1) * (long)*(int *)(this + 0xb08)) + local_3c
          ;
        }
        break;
      }
      if (*(char *)(lVar3 + 0x18 + lVar4 * 0x28) == '\0') {
        uVar7 = (**(code **)(*(long *)pOVar5 + 0x1d0))(pOVar5);
        if (*(long *)(this + 0xa10) == 0) {
          lVar3 = 0;
LAB_001012d3:
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,lVar4,lVar3,"p_index","size()","",false
                     ,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        lVar3 = *(long *)(*(long *)(this + 0xa10) + -8);
        if (lVar3 <= lVar4) goto LAB_001012d3;
        uVar8 = TextLine::get_size();
        local_3c = (float)uVar8 + (float)uVar7 + local_3c;
        lVar3 = *(long *)(this + 0xa10);
        fVar9 = (float)((ulong)uVar8 >> 0x20) + (float)((ulong)uVar7 >> 0x20);
        if (fVar6 <= fVar9) {
          fVar6 = fVar9;
        }
      }
      lVar4 = lVar4 + 1;
    } while (lVar3 != 0);
    if (pOVar5 == (Object *)0x0) goto LAB_00101159;
  }
  else {
    cVar2 = RefCounted::reference();
    lVar3 = *(long *)(this + 0xa10);
    if (cVar2 == '\0') {
      if (lVar3 == 0) goto LAB_00101360;
      pOVar5 = (Object *)0x0;
      goto LAB_001011b8;
    }
    if (lVar3 != 0) goto LAB_001011b8;
  }
  cVar2 = RefCounted::unreference();
  if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar5), cVar2 != '\0')) {
    (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
    Memory::free_static(pOVar5,false);
  }
LAB_00101159:
  return CONCAT44(fVar6,local_3c);
}



/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   MenuBar::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#2}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#2}>
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
    Control::get_theme_item(local_48,0,5,param_3,param_4);
    Variant::get_validated_object();
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar4 = __dynamic_cast(*param_2,&Object::typeinfo,&MenuBar::typeinfo,0);
  Control::get_theme_item(local_48,lVar4,5,param_3,param_4);
  pOVar5 = (Object *)Variant::get_validated_object();
  pOVar1 = *(Object **)(lVar4 + 0xa40);
  if (pOVar5 == pOVar1) goto LAB_00101430;
  if (pOVar5 == (Object *)0x0) {
    if (pOVar1 == (Object *)0x0) goto LAB_00101430;
    *(undefined8 *)(lVar4 + 0xa40) = 0;
  }
  else {
    pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&StyleBox::typeinfo,0);
    if (pOVar1 == pOVar5) goto LAB_00101430;
    *(Object **)(lVar4 + 0xa40) = pOVar5;
    if (pOVar5 != (Object *)0x0) {
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        *(undefined8 *)(lVar4 + 0xa40) = 0;
      }
    }
    if (pOVar1 == (Object *)0x0) goto LAB_00101430;
  }
  cVar3 = RefCounted::unreference();
  if (cVar3 != '\0') {
    cVar3 = predelete_handler(pOVar1);
    if (cVar3 != '\0') {
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      Memory::free_static(pOVar1,false);
    }
  }
LAB_00101430:
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
   MenuBar::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#7}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#7}>
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
    Control::get_theme_item(local_48,0,5,param_3,param_4);
    Variant::get_validated_object();
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar4 = __dynamic_cast(*param_2,&Object::typeinfo,&MenuBar::typeinfo,0);
  Control::get_theme_item(local_48,lVar4,5,param_3,param_4);
  pOVar5 = (Object *)Variant::get_validated_object();
  pOVar1 = *(Object **)(lVar4 + 0xa68);
  if (pOVar5 == pOVar1) goto LAB_00101580;
  if (pOVar5 == (Object *)0x0) {
    if (pOVar1 == (Object *)0x0) goto LAB_00101580;
    *(undefined8 *)(lVar4 + 0xa68) = 0;
  }
  else {
    pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&StyleBox::typeinfo,0);
    if (pOVar1 == pOVar5) goto LAB_00101580;
    *(Object **)(lVar4 + 0xa68) = pOVar5;
    if (pOVar5 != (Object *)0x0) {
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        *(undefined8 *)(lVar4 + 0xa68) = 0;
      }
    }
    if (pOVar1 == (Object *)0x0) goto LAB_00101580;
  }
  cVar3 = RefCounted::unreference();
  if (cVar3 != '\0') {
    cVar3 = predelete_handler(pOVar1);
    if (cVar3 != '\0') {
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      Memory::free_static(pOVar1,false);
    }
  }
LAB_00101580:
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
   MenuBar::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#9}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#9}>
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
    Control::get_theme_item(local_48,0,5,param_3,param_4);
    Variant::get_validated_object();
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar4 = __dynamic_cast(*param_2,&Object::typeinfo,&MenuBar::typeinfo,0);
  Control::get_theme_item(local_48,lVar4,5,param_3,param_4);
  pOVar5 = (Object *)Variant::get_validated_object();
  pOVar1 = *(Object **)(lVar4 + 0xa78);
  if (pOVar5 == pOVar1) goto LAB_001016d0;
  if (pOVar5 == (Object *)0x0) {
    if (pOVar1 == (Object *)0x0) goto LAB_001016d0;
    *(undefined8 *)(lVar4 + 0xa78) = 0;
  }
  else {
    pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&StyleBox::typeinfo,0);
    if (pOVar1 == pOVar5) goto LAB_001016d0;
    *(Object **)(lVar4 + 0xa78) = pOVar5;
    if (pOVar5 != (Object *)0x0) {
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        *(undefined8 *)(lVar4 + 0xa78) = 0;
      }
    }
    if (pOVar1 == (Object *)0x0) goto LAB_001016d0;
  }
  cVar3 = RefCounted::unreference();
  if (cVar3 != '\0') {
    cVar3 = predelete_handler(pOVar1);
    if (cVar3 != '\0') {
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      Memory::free_static(pOVar1,false);
    }
  }
LAB_001016d0:
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
   MenuBar::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#8}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#8}>
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
    Control::get_theme_item(local_48,0,5,param_3,param_4);
    Variant::get_validated_object();
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar4 = __dynamic_cast(*param_2,&Object::typeinfo,&MenuBar::typeinfo,0);
  Control::get_theme_item(local_48,lVar4,5,param_3,param_4);
  pOVar5 = (Object *)Variant::get_validated_object();
  pOVar1 = *(Object **)(lVar4 + 0xa70);
  if (pOVar5 == pOVar1) goto LAB_00101820;
  if (pOVar5 == (Object *)0x0) {
    if (pOVar1 == (Object *)0x0) goto LAB_00101820;
    *(undefined8 *)(lVar4 + 0xa70) = 0;
  }
  else {
    pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&StyleBox::typeinfo,0);
    if (pOVar1 == pOVar5) goto LAB_00101820;
    *(Object **)(lVar4 + 0xa70) = pOVar5;
    if (pOVar5 != (Object *)0x0) {
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        *(undefined8 *)(lVar4 + 0xa70) = 0;
      }
    }
    if (pOVar1 == (Object *)0x0) goto LAB_00101820;
  }
  cVar3 = RefCounted::unreference();
  if (cVar3 != '\0') {
    cVar3 = predelete_handler(pOVar1);
    if (cVar3 != '\0') {
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      Memory::free_static(pOVar1,false);
    }
  }
LAB_00101820:
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
   MenuBar::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#6}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#6}>
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
    Control::get_theme_item(local_48,0,5,param_3,param_4);
    Variant::get_validated_object();
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar4 = __dynamic_cast(*param_2,&Object::typeinfo,&MenuBar::typeinfo,0);
  Control::get_theme_item(local_48,lVar4,5,param_3,param_4);
  pOVar5 = (Object *)Variant::get_validated_object();
  pOVar1 = *(Object **)(lVar4 + 0xa60);
  if (pOVar5 == pOVar1) goto LAB_00101970;
  if (pOVar5 == (Object *)0x0) {
    if (pOVar1 == (Object *)0x0) goto LAB_00101970;
    *(undefined8 *)(lVar4 + 0xa60) = 0;
  }
  else {
    pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&StyleBox::typeinfo,0);
    if (pOVar1 == pOVar5) goto LAB_00101970;
    *(Object **)(lVar4 + 0xa60) = pOVar5;
    if (pOVar5 != (Object *)0x0) {
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        *(undefined8 *)(lVar4 + 0xa60) = 0;
      }
    }
    if (pOVar1 == (Object *)0x0) goto LAB_00101970;
  }
  cVar3 = RefCounted::unreference();
  if (cVar3 != '\0') {
    cVar3 = predelete_handler(pOVar1);
    if (cVar3 != '\0') {
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      Memory::free_static(pOVar1,false);
    }
  }
LAB_00101970:
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
   MenuBar::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#5}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#5}>
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
    Control::get_theme_item(local_48,0,5,param_3,param_4);
    Variant::get_validated_object();
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar4 = __dynamic_cast(*param_2,&Object::typeinfo,&MenuBar::typeinfo,0);
  Control::get_theme_item(local_48,lVar4,5,param_3,param_4);
  pOVar5 = (Object *)Variant::get_validated_object();
  pOVar1 = *(Object **)(lVar4 + 0xa58);
  if (pOVar5 == pOVar1) goto LAB_00101ac0;
  if (pOVar5 == (Object *)0x0) {
    if (pOVar1 == (Object *)0x0) goto LAB_00101ac0;
    *(undefined8 *)(lVar4 + 0xa58) = 0;
  }
  else {
    pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&StyleBox::typeinfo,0);
    if (pOVar1 == pOVar5) goto LAB_00101ac0;
    *(Object **)(lVar4 + 0xa58) = pOVar5;
    if (pOVar5 != (Object *)0x0) {
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        *(undefined8 *)(lVar4 + 0xa58) = 0;
      }
    }
    if (pOVar1 == (Object *)0x0) goto LAB_00101ac0;
  }
  cVar3 = RefCounted::unreference();
  if (cVar3 != '\0') {
    cVar3 = predelete_handler(pOVar1);
    if (cVar3 != '\0') {
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      Memory::free_static(pOVar1,false);
    }
  }
LAB_00101ac0:
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
   MenuBar::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#10}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#10}>
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
    Control::get_theme_item(local_48,0,5,param_3,param_4);
    Variant::get_validated_object();
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar4 = __dynamic_cast(*param_2,&Object::typeinfo,&MenuBar::typeinfo,0);
  Control::get_theme_item(local_48,lVar4,5,param_3,param_4);
  pOVar5 = (Object *)Variant::get_validated_object();
  pOVar1 = *(Object **)(lVar4 + 0xa80);
  if (pOVar5 == pOVar1) goto LAB_00101c10;
  if (pOVar5 == (Object *)0x0) {
    if (pOVar1 == (Object *)0x0) goto LAB_00101c10;
    *(undefined8 *)(lVar4 + 0xa80) = 0;
  }
  else {
    pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&StyleBox::typeinfo,0);
    if (pOVar1 == pOVar5) goto LAB_00101c10;
    *(Object **)(lVar4 + 0xa80) = pOVar5;
    if (pOVar5 != (Object *)0x0) {
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        *(undefined8 *)(lVar4 + 0xa80) = 0;
      }
    }
    if (pOVar1 == (Object *)0x0) goto LAB_00101c10;
  }
  cVar3 = RefCounted::unreference();
  if (cVar3 != '\0') {
    cVar3 = predelete_handler(pOVar1);
    if (cVar3 != '\0') {
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      Memory::free_static(pOVar1,false);
    }
  }
LAB_00101c10:
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
   MenuBar::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#1}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#1}>
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
    Control::get_theme_item(local_48,0,5,param_3,param_4);
    Variant::get_validated_object();
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar4 = __dynamic_cast(*param_2,&Object::typeinfo,&MenuBar::typeinfo,0);
  Control::get_theme_item(local_48,lVar4,5,param_3,param_4);
  pOVar5 = (Object *)Variant::get_validated_object();
  pOVar1 = *(Object **)(lVar4 + 0xa38);
  if (pOVar5 == pOVar1) goto LAB_00101d60;
  if (pOVar5 == (Object *)0x0) {
    if (pOVar1 == (Object *)0x0) goto LAB_00101d60;
    *(undefined8 *)(lVar4 + 0xa38) = 0;
  }
  else {
    pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&StyleBox::typeinfo,0);
    if (pOVar1 == pOVar5) goto LAB_00101d60;
    *(Object **)(lVar4 + 0xa38) = pOVar5;
    if (pOVar5 != (Object *)0x0) {
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        *(undefined8 *)(lVar4 + 0xa38) = 0;
      }
    }
    if (pOVar1 == (Object *)0x0) goto LAB_00101d60;
  }
  cVar3 = RefCounted::unreference();
  if (cVar3 != '\0') {
    cVar3 = predelete_handler(pOVar1);
    if (cVar3 != '\0') {
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      Memory::free_static(pOVar1,false);
    }
  }
LAB_00101d60:
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
   MenuBar::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#4}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#4}>
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
    Control::get_theme_item(local_48,0,5,param_3,param_4);
    Variant::get_validated_object();
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar4 = __dynamic_cast(*param_2,&Object::typeinfo,&MenuBar::typeinfo,0);
  Control::get_theme_item(local_48,lVar4,5,param_3,param_4);
  pOVar5 = (Object *)Variant::get_validated_object();
  pOVar1 = *(Object **)(lVar4 + 0xa50);
  if (pOVar5 == pOVar1) goto LAB_00101eb0;
  if (pOVar5 == (Object *)0x0) {
    if (pOVar1 == (Object *)0x0) goto LAB_00101eb0;
    *(undefined8 *)(lVar4 + 0xa50) = 0;
  }
  else {
    pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&StyleBox::typeinfo,0);
    if (pOVar1 == pOVar5) goto LAB_00101eb0;
    *(Object **)(lVar4 + 0xa50) = pOVar5;
    if (pOVar5 != (Object *)0x0) {
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        *(undefined8 *)(lVar4 + 0xa50) = 0;
      }
    }
    if (pOVar1 == (Object *)0x0) goto LAB_00101eb0;
  }
  cVar3 = RefCounted::unreference();
  if (cVar3 != '\0') {
    cVar3 = predelete_handler(pOVar1);
    if (cVar3 != '\0') {
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      Memory::free_static(pOVar1,false);
    }
  }
LAB_00101eb0:
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



/* MenuBar::get_language() const */

void MenuBar::get_language(void)

{
  long in_RSI;
  CowData<char32_t> *in_RDI;
  
  *(undefined8 *)in_RDI = 0;
  if (*(long *)(in_RSI + 0x9f8) != 0) {
    CowData<char32_t>::_ref(in_RDI,(CowData *)(in_RSI + 0x9f8));
  }
  return;
}



/* MenuBar::get_menu_title(int) const */

CowData<char32_t> * MenuBar::get_menu_title(int param_1)

{
  CowData *pCVar1;
  long lVar2;
  long lVar3;
  int in_EDX;
  long in_RSI;
  undefined4 in_register_0000003c;
  CowData<char32_t> *this;
  long lVar4;
  
  this = (CowData<char32_t> *)CONCAT44(in_register_0000003c,param_1);
  lVar3 = (long)in_EDX;
  lVar2 = *(long *)(in_RSI + 0xa10);
  if (in_EDX < 0) {
    if (lVar2 != 0) {
      lVar4 = *(long *)(lVar2 + -8);
      goto LAB_00102041;
    }
  }
  else if (lVar2 != 0) {
    lVar4 = *(long *)(lVar2 + -8);
    if (lVar3 < lVar4) {
      *(undefined8 *)this = 0;
      pCVar1 = (CowData *)(lVar2 + lVar3 * 0x28);
      if (*(long *)pCVar1 != 0) {
        CowData<char32_t>::_ref(this,pCVar1);
      }
      return this;
    }
    goto LAB_00102041;
  }
  lVar4 = 0;
LAB_00102041:
  _err_print_index_error
            ("get_menu_title","scene/gui/menu_bar.cpp",0x369,lVar3,lVar4,"p_menu",
             "menu_cache.size()","",false,false);
  *(undefined8 *)this = 0;
  return this;
}



/* MenuBar::get_menu_tooltip(int) const */

CowData<char32_t> * MenuBar::get_menu_tooltip(int param_1)

{
  long lVar1;
  long lVar2;
  int in_EDX;
  long in_RSI;
  undefined4 in_register_0000003c;
  CowData<char32_t> *this;
  long lVar3;
  
  this = (CowData<char32_t> *)CONCAT44(in_register_0000003c,param_1);
  lVar2 = (long)in_EDX;
  lVar1 = *(long *)(in_RSI + 0xa10);
  if (in_EDX < 0) {
    if (lVar1 != 0) {
      lVar3 = *(long *)(lVar1 + -8);
      goto LAB_001020e9;
    }
  }
  else if (lVar1 != 0) {
    lVar3 = *(long *)(lVar1 + -8);
    if (lVar2 < lVar3) {
      *(undefined8 *)this = 0;
      lVar1 = lVar1 + lVar2 * 0x28;
      if (*(long *)(lVar1 + 8) != 0) {
        CowData<char32_t>::_ref(this,(CowData *)(lVar1 + 8));
      }
      return this;
    }
    goto LAB_001020e9;
  }
  lVar3 = 0;
LAB_001020e9:
  _err_print_index_error
            ("get_menu_tooltip","scene/gui/menu_bar.cpp",0x37d,lVar2,lVar3,"p_menu",
             "menu_cache.size()","",false,false);
  *(undefined8 *)this = 0;
  return this;
}



/* MenuBar::set_language(String const&) */

void __thiscall MenuBar::set_language(MenuBar *this,String *param_1)

{
  char cVar1;
  
  cVar1 = String::operator!=((String *)(this + 0x9f8),param_1);
  if (cVar1 == '\0') {
    return;
  }
  if (*(long *)(this + 0x9f8) != *(long *)param_1) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x9f8),(CowData *)param_1);
  }
  Control::update_minimum_size();
  CanvasItem::queue_redraw();
  return;
}



/* CowData<PopupMenu*>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<PopupMenu*>::_copy_on_write(CowData<PopupMenu*> *this)

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



/* MenuBar::_get_index_at_point(Vector2 const&) const */

ulong __thiscall MenuBar::_get_index_at_point(MenuBar *this,Vector2 *param_1)

{
  float fVar1;
  code *pcVar2;
  char cVar3;
  long lVar4;
  ulong uVar5;
  Object *pOVar6;
  int iVar7;
  float fVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  float fVar11;
  float local_40;
  
  pOVar6 = *(Object **)(this + 0xa38);
  if ((pOVar6 != (Object *)0x0) && (cVar3 = RefCounted::reference(), cVar3 == '\0')) {
    pOVar6 = (Object *)0x0;
  }
  local_40 = *(float *)param_1;
  fVar1 = *(float *)(param_1 + 4);
  cVar3 = (**(code **)(*(long *)this + 0x340))(this);
  if (cVar3 != '\0') {
    fVar8 = (float)Control::get_size();
    local_40 = fVar8 - local_40;
  }
  lVar4 = *(long *)(this + 0xa10);
  iVar7 = 0;
  for (uVar5 = 0; (lVar4 != 0 && ((long)uVar5 < *(long *)(lVar4 + -8))); uVar5 = uVar5 + 1) {
    if (*(char *)(lVar4 + 0x18 + uVar5 * 0x28) == '\0') {
      uVar9 = (**(code **)(*(long *)pOVar6 + 0x1d0))(pOVar6);
      if (*(long *)(this + 0xa10) == 0) {
        lVar4 = 0;
LAB_00102453:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,uVar5,lVar4,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar4 = *(long *)(*(long *)(this + 0xa10) + -8);
      if (lVar4 <= (long)uVar5) goto LAB_00102453;
      uVar10 = TextLine::get_size();
      fVar11 = (float)iVar7;
      fVar8 = (float)uVar10 + (float)uVar9;
      if ((((fVar11 < local_40) && (local_40 < fVar11 + fVar8)) && (0.0 < fVar1)) &&
         (fVar1 < (float)((ulong)uVar10 >> 0x20) + (float)((ulong)uVar9 >> 0x20)))
      goto LAB_00102498;
      lVar4 = *(long *)(this + 0xa10);
      iVar7 = (int)(fVar8 + (float)*(int *)(this + 0xb08) + fVar11);
    }
  }
  uVar5 = 0xffffffff;
  if (pOVar6 != (Object *)0x0) {
LAB_00102498:
    cVar3 = RefCounted::unreference();
    if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar6), cVar3 != '\0')) {
      (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
      Memory::free_static(pOVar6,false);
    }
  }
  return uVar5 & 0xffffffff;
}



/* MenuBar::get_tooltip(Vector2 const&) const */

Vector2 * MenuBar::get_tooltip(Vector2 *param_1)

{
  long lVar1;
  int iVar2;
  Vector2 *in_RDX;
  MenuBar *in_RSI;
  
  iVar2 = _get_index_at_point(in_RSI,in_RDX);
  if (-1 < iVar2) {
    lVar1 = *(long *)(in_RSI + 0xa10);
    if ((lVar1 != 0) && ((long)iVar2 < *(long *)(lVar1 + -8))) {
      *(undefined8 *)param_1 = 0;
      lVar1 = lVar1 + (long)iVar2 * 0x28;
      if (*(long *)(lVar1 + 8) == 0) {
        return param_1;
      }
      CowData<char32_t>::_ref((CowData<char32_t> *)param_1,(CowData *)(lVar1 + 8));
      return param_1;
    }
  }
  *(undefined8 *)param_1 = 0;
  return param_1;
}



/* MenuBar::_get_menu_item_rect(int) const */

undefined1  [16] __thiscall MenuBar::_get_menu_item_rect(MenuBar *this,int param_1)

{
  long lVar1;
  code *pcVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  Object *pOVar6;
  long lVar7;
  int iVar8;
  float fVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  float fVar13;
  undefined1 auVar14 [16];
  
  lVar7 = (long)param_1;
  lVar4 = *(long *)(this + 0xa10);
  if (param_1 < 0) {
    if (lVar4 == 0) goto LAB_00102868;
    lVar4 = *(long *)(lVar4 + -8);
  }
  else if (lVar4 == 0) {
LAB_00102868:
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(lVar4 + -8);
    if (lVar7 < lVar4) {
      pOVar6 = *(Object **)(this + 0xa38);
      if ((pOVar6 != (Object *)0x0) && (cVar3 = RefCounted::reference(), cVar3 == '\0')) {
        pOVar6 = (Object *)0x0;
      }
      lVar4 = 0;
      iVar8 = 0;
      if (param_1 != 0) {
        do {
          lVar1 = *(long *)(this + 0xa10);
          if (lVar1 == 0) {
LAB_0010268d:
            lVar5 = 0;
            goto LAB_001026ae;
          }
          lVar5 = *(long *)(lVar1 + -8);
          if (lVar5 <= lVar4) goto LAB_001026ae;
          if (*(char *)(lVar1 + 0x18 + lVar4 * 0x28) == '\0') {
            fVar13 = (float)(**(code **)(*(long *)pOVar6 + 0x1d0))(pOVar6);
            if (*(long *)(this + 0xa10) == 0) goto LAB_0010268d;
            lVar5 = *(long *)(*(long *)(this + 0xa10) + -8);
            if (lVar5 <= lVar4) goto LAB_001026ae;
            fVar9 = (float)TextLine::get_size();
            iVar8 = (int)((float)*(int *)(this + 0xb08) + fVar9 + fVar13 + (float)iVar8);
          }
          lVar4 = lVar4 + 1;
        } while (lVar7 != lVar4);
      }
      uVar10 = (**(code **)(*(long *)pOVar6 + 0x1d0))(pOVar6);
      lVar4 = lVar7;
      if (*(long *)(this + 0xa10) == 0) {
        lVar5 = 0;
LAB_001026ae:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar4,lVar5,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar5 = *(long *)(*(long *)(this + 0xa10) + -8);
      if (lVar5 <= lVar7) goto LAB_001026ae;
      uVar11 = TextLine::get_size();
      fVar13 = (float)uVar11 + (float)uVar10;
      cVar3 = (**(code **)(*(long *)this + 0x340))(this);
      if (cVar3 == '\0') {
        fVar9 = (float)iVar8;
      }
      else {
        fVar9 = (float)Control::get_size();
        fVar9 = (fVar9 - (float)iVar8) - fVar13;
      }
      uVar12 = (ulong)(uint)fVar9;
      uVar10 = CONCAT44((float)((ulong)uVar11 >> 0x20) + (float)((ulong)uVar10 >> 0x20),fVar13);
      cVar3 = RefCounted::unreference();
      if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar6), cVar3 != '\0')) {
        (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
        Memory::free_static(pOVar6,false);
      }
      goto LAB_00102727;
    }
  }
  _err_print_index_error
            ("_get_menu_item_rect","scene/gui/menu_bar.cpp",0x17e,lVar7,lVar4,"p_index",
             "menu_cache.size()","",false,false);
  uVar12 = 0;
  uVar10 = 0;
LAB_00102727:
  auVar14._8_8_ = uVar10;
  auVar14._0_8_ = uVar12;
  return auVar14;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MenuBar::_draw_menu_item(int) */

void __thiscall MenuBar::_draw_menu_item(MenuBar *this,int param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  Object *pOVar12;
  long in_FS_OFFSET;
  float fVar13;
  float fVar14;
  Object *local_98;
  long local_90;
  long local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  lVar10 = (long)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar9 = *(long *)(this + 0xa10);
  if (param_1 < 0) {
    if (lVar9 == 0) goto LAB_00102d78;
    lVar9 = *(long *)(lVar9 + -8);
  }
  else {
    if (lVar9 != 0) {
      lVar9 = *(long *)(lVar9 + -8);
      if (lVar9 <= lVar10) goto LAB_00102bbd;
      iVar8 = *(int *)(this + 0xa20);
      uVar3 = *(undefined8 *)(this + 0x428);
      iVar2 = *(int *)(this + 0xa18);
      cVar6 = (**(code **)(*(long *)this + 0x340))();
      lVar9 = *(long *)(this + 0xa10);
      if (lVar9 != 0) {
        lVar11 = *(long *)(lVar9 + -8);
        if (lVar11 <= lVar10) goto LAB_00102c03;
        lVar1 = lVar10 * 0x28;
        if (*(char *)(lVar9 + 0x18 + lVar10 * 0x28) != '\0') goto LAB_0010295f;
        local_98 = (Object *)0x0;
        local_78 = __LC49;
        uStack_70 = _UNK_0011ce88;
        local_68 = _get_menu_item_rect(this,param_1);
        lVar9 = *(long *)(this + 0xa10);
        if (lVar9 == 0) goto LAB_00102c00;
        lVar11 = *(long *)(lVar9 + -8);
        if (lVar11 <= lVar10) goto LAB_00102c03;
        if (*(char *)(lVar9 + 0x19 + lVar1) == '\0') {
          if (iVar2 == param_1) {
            if (iVar8 == param_1) {
              local_88 = 0;
              StringName::StringName((StringName *)&local_90,"hover_pressed",false);
              cVar7 = Control::has_theme_stylebox((StringName *)this,(StringName *)&local_90);
              if (StringName::configured != '\0') {
                if (local_90 != 0) {
                  StringName::unref();
                  if (StringName::configured == '\0') goto LAB_00102cd9;
                }
                if (local_88 != 0) {
                  StringName::unref();
                }
              }
LAB_00102cd9:
              if (cVar7 == '\0') goto LAB_00102d90;
              if (cVar6 == '\0') {
LAB_00102cea:
                Ref<StyleBox>::operator=((Ref<StyleBox> *)&local_98,*(Ref **)(this + 0xa78));
              }
              else {
                local_88 = 0;
                if (_draw_menu_item(int)::{lambda()#2}::operator()()::sname == '\0') {
                  iVar8 = __cxa_guard_acquire(&_draw_menu_item(int)::{lambda()#2}::operator()()::
                                               sname);
                  if (iVar8 != 0) {
                    _scs_create((char *)&_draw_menu_item(int)::{lambda()#2}::operator()()::sname,
                                true);
                    __cxa_atexit(StringName::~StringName,
                                 &_draw_menu_item(int)::{lambda()#2}::operator()()::sname,
                                 &__dso_handle);
                    __cxa_guard_release(&_draw_menu_item(int)::{lambda()#2}::operator()()::sname);
                  }
                }
                cVar6 = Control::has_theme_stylebox
                                  ((StringName *)this,
                                   (StringName *)
                                   &_draw_menu_item(int)::{lambda()#2}::operator()()::sname);
                if (cVar6 == '\0') {
                  if ((StringName::configured != '\0') && (local_88 != 0)) {
                    StringName::unref();
                  }
                  goto LAB_00102cea;
                }
                if ((StringName::configured != '\0') && (local_88 != 0)) {
                  StringName::unref();
                }
                Ref<StyleBox>::operator=((Ref<StyleBox> *)&local_98,*(Ref **)(this + 0xa80));
              }
              if (this[0x9f3] == (MenuBar)0x0) {
                (**(code **)(*(long *)local_98 + 0x1d8))(local_98,uVar3,local_68);
              }
              local_88 = 0;
              if (_draw_menu_item(int)::{lambda()#3}::operator()()::sname == '\0') {
                iVar8 = __cxa_guard_acquire(&_draw_menu_item(int)::{lambda()#3}::operator()()::sname
                                           );
                if (iVar8 != 0) {
                  _scs_create((char *)&_draw_menu_item(int)::{lambda()#3}::operator()()::sname,true)
                  ;
                  __cxa_atexit(StringName::~StringName,
                               &_draw_menu_item(int)::{lambda()#3}::operator()()::sname,
                               &__dso_handle);
                  __cxa_guard_release(&_draw_menu_item(int)::{lambda()#3}::operator()()::sname);
                }
              }
              cVar6 = Control::has_theme_color
                                ((StringName *)this,
                                 (StringName *)
                                 &_draw_menu_item(int)::{lambda()#3}::operator()()::sname);
              if ((StringName::configured != '\0') && (local_88 != 0)) {
                StringName::unref();
              }
              pOVar12 = local_98;
              if (cVar6 != '\0') {
                local_78 = *(undefined8 *)(this + 0xae8);
                uStack_70 = *(undefined8 *)(this + 0xaf0);
              }
            }
            else {
LAB_00102b42:
              if (iVar2 == param_1) {
                if (cVar6 == '\0') {
LAB_00102ef9:
                  Ref<StyleBox>::operator=((Ref<StyleBox> *)&local_98,*(Ref **)(this + 0xa68));
                }
                else {
                  local_88 = 0;
                  if (_draw_menu_item(int)::{lambda()#6}::operator()()::sname == '\0') {
                    iVar8 = __cxa_guard_acquire(&_draw_menu_item(int)::{lambda()#6}::operator()()::
                                                 sname);
                    if (iVar8 != 0) {
                      _scs_create((char *)&_draw_menu_item(int)::{lambda()#6}::operator()()::sname,
                                  true);
                      __cxa_atexit(StringName::~StringName,
                                   &_draw_menu_item(int)::{lambda()#6}::operator()()::sname,
                                   &__dso_handle);
                      __cxa_guard_release(&_draw_menu_item(int)::{lambda()#6}::operator()()::sname);
                    }
                  }
                  cVar6 = Control::has_theme_stylebox
                                    ((StringName *)this,
                                     (StringName *)
                                     &_draw_menu_item(int)::{lambda()#6}::operator()()::sname);
                  if (cVar6 == '\0') {
                    if ((StringName::configured != '\0') && (local_88 != 0)) {
                      StringName::unref();
                    }
                    goto LAB_00102ef9;
                  }
                  if ((StringName::configured != '\0') && (local_88 != 0)) {
                    StringName::unref();
                  }
                  Ref<StyleBox>::operator=((Ref<StyleBox> *)&local_98,*(Ref **)(this + 0xa70));
                }
                pOVar12 = local_98;
                if (this[0x9f3] == (MenuBar)0x0) {
                  (**(code **)(*(long *)local_98 + 0x1d8))(local_98,uVar3,local_68);
                }
                local_78 = *(undefined8 *)(this + 0xad8);
                uStack_70 = *(undefined8 *)(this + 0xae0);
              }
              else {
                if (cVar6 == '\0') {
LAB_00102b54:
                  Ref<StyleBox>::operator=((Ref<StyleBox> *)&local_98,*(Ref **)(this + 0xa38));
                }
                else {
                  local_88 = 0;
                  if (_draw_menu_item(int)::{lambda()#7}::operator()()::sname == '\0') {
                    iVar8 = __cxa_guard_acquire(&_draw_menu_item(int)::{lambda()#7}::operator()()::
                                                 sname);
                    if (iVar8 != 0) {
                      _scs_create((char *)&_draw_menu_item(int)::{lambda()#7}::operator()()::sname,
                                  true);
                      __cxa_atexit(StringName::~StringName,
                                   &_draw_menu_item(int)::{lambda()#7}::operator()()::sname,
                                   &__dso_handle);
                      __cxa_guard_release(&_draw_menu_item(int)::{lambda()#7}::operator()()::sname);
                    }
                  }
                  cVar6 = Control::has_theme_stylebox
                                    ((StringName *)this,
                                     (StringName *)
                                     &_draw_menu_item(int)::{lambda()#7}::operator()()::sname);
                  if (cVar6 == '\0') {
                    if ((StringName::configured != '\0') && (local_88 != 0)) {
                      StringName::unref();
                    }
                    goto LAB_00102b54;
                  }
                  if ((StringName::configured != '\0') && (local_88 != 0)) {
                    StringName::unref();
                  }
                  Ref<StyleBox>::operator=((Ref<StyleBox> *)&local_98,*(Ref **)(this + 0xa40));
                }
                pOVar12 = local_98;
                if (this[0x9f3] == (MenuBar)0x0) {
                  (**(code **)(*(long *)local_98 + 0x1d8))(local_98,uVar3,local_68);
                }
                cVar6 = Control::has_focus();
                if (cVar6 == '\0') {
                  local_78 = *(undefined8 *)(this + 0xaa8);
                  uStack_70 = *(undefined8 *)(this + 0xab0);
                }
                else {
                  local_78 = *(undefined8 *)(this + 0xaf8);
                  uStack_70 = *(undefined8 *)(this + 0xb00);
                }
              }
            }
          }
          else {
            if (iVar8 != param_1) goto LAB_00102b42;
LAB_00102d90:
            if (cVar6 == '\0') {
LAB_00102d99:
              Ref<StyleBox>::operator=((Ref<StyleBox> *)&local_98,*(Ref **)(this + 0xa58));
            }
            else {
              local_88 = 0;
              if (_draw_menu_item(int)::{lambda()#4}::operator()()::sname == '\0') {
                iVar8 = __cxa_guard_acquire(&_draw_menu_item(int)::{lambda()#4}::operator()()::sname
                                           );
                if (iVar8 != 0) {
                  _scs_create((char *)&_draw_menu_item(int)::{lambda()#4}::operator()()::sname,true)
                  ;
                  __cxa_atexit(StringName::~StringName,
                               &_draw_menu_item(int)::{lambda()#4}::operator()()::sname,
                               &__dso_handle);
                  __cxa_guard_release(&_draw_menu_item(int)::{lambda()#4}::operator()()::sname);
                }
              }
              cVar6 = Control::has_theme_stylebox
                                ((StringName *)this,
                                 (StringName *)
                                 &_draw_menu_item(int)::{lambda()#4}::operator()()::sname);
              if (cVar6 == '\0') {
                if ((StringName::configured != '\0') && (local_88 != 0)) {
                  StringName::unref();
                }
                goto LAB_00102d99;
              }
              if ((StringName::configured != '\0') && (local_88 != 0)) {
                StringName::unref();
              }
              Ref<StyleBox>::operator=((Ref<StyleBox> *)&local_98,*(Ref **)(this + 0xa60));
            }
            if (this[0x9f3] == (MenuBar)0x0) {
              (**(code **)(*(long *)local_98 + 0x1d8))(local_98,uVar3,local_68);
            }
            local_88 = 0;
            if (_draw_menu_item(int)::{lambda()#5}::operator()()::sname == '\0') {
              iVar8 = __cxa_guard_acquire(&_draw_menu_item(int)::{lambda()#5}::operator()()::sname);
              if (iVar8 != 0) {
                _scs_create((char *)&_draw_menu_item(int)::{lambda()#5}::operator()()::sname,true);
                __cxa_atexit(StringName::~StringName,
                             &_draw_menu_item(int)::{lambda()#5}::operator()()::sname,&__dso_handle)
                ;
                __cxa_guard_release(&_draw_menu_item(int)::{lambda()#5}::operator()()::sname);
              }
            }
            cVar6 = Control::has_theme_color
                              ((StringName *)this,
                               (StringName *)
                               &_draw_menu_item(int)::{lambda()#5}::operator()()::sname);
            if ((StringName::configured != '\0') && (local_88 != 0)) {
              StringName::unref();
            }
            pOVar12 = local_98;
            if (cVar6 == '\0') {
              local_78 = *(undefined8 *)(this + 0xaa8);
              uStack_70 = *(undefined8 *)(this + 0xab0);
            }
            else {
              local_78 = *(undefined8 *)(this + 0xac8);
              uStack_70 = *(undefined8 *)(this + 0xad0);
            }
          }
        }
        else {
          if (cVar6 == '\0') {
LAB_001029f3:
            Ref<StyleBox>::operator=((Ref<StyleBox> *)&local_98,*(Ref **)(this + 0xa48));
          }
          else {
            local_88 = 0;
            if (_draw_menu_item(int)::{lambda()#1}::operator()()::sname == '\0') {
              iVar8 = __cxa_guard_acquire(&_draw_menu_item(int)::{lambda()#1}::operator()()::sname);
              if (iVar8 != 0) {
                _scs_create((char *)&_draw_menu_item(int)::{lambda()#1}::operator()()::sname,true);
                __cxa_atexit(StringName::~StringName,
                             &_draw_menu_item(int)::{lambda()#1}::operator()()::sname,&__dso_handle)
                ;
                __cxa_guard_release(&_draw_menu_item(int)::{lambda()#1}::operator()()::sname);
              }
            }
            cVar6 = Control::has_theme_stylebox
                              ((StringName *)this,
                               (StringName *)
                               &_draw_menu_item(int)::{lambda()#1}::operator()()::sname);
            if (cVar6 == '\0') {
              if ((StringName::configured != '\0') && (local_88 != 0)) {
                StringName::unref();
              }
              goto LAB_001029f3;
            }
            if ((StringName::configured != '\0') && (local_88 != 0)) {
              StringName::unref();
            }
            Ref<StyleBox>::operator=((Ref<StyleBox> *)&local_98,*(Ref **)(this + 0xa50));
          }
          pOVar12 = local_98;
          if (this[0x9f3] == (MenuBar)0x0) {
            (**(code **)(*(long *)local_98 + 0x1d8))(local_98,uVar3,local_68);
          }
          local_78 = *(undefined8 *)(this + 0xab8);
          uStack_70 = *(undefined8 *)(this + 0xac0);
        }
        fVar13 = (float)StyleBox::get_margin(pOVar12,1);
        fVar14 = (float)StyleBox::get_margin(pOVar12,0);
        local_58 = *(undefined8 *)(this + 0xa98);
        uStack_50 = *(undefined8 *)(this + 0xaa0);
        lVar9 = *(long *)(this + 0xa10);
        local_80 = CONCAT44(local_68._4_4_ + fVar13,local_68._0_4_ + fVar14);
        if ((0 < *(int *)(this + 0xa94)) &&
           (uStack_50._4_4_ = (float)((ulong)uStack_50 >> 0x20), bVar5 = 0.0 < uStack_50._4_4_,
           bVar5)) {
          if (lVar9 == 0) goto LAB_00102c00;
          lVar11 = *(long *)(lVar9 + -8);
          if (lVar11 <= lVar10) goto LAB_00102c03;
          TextLine::draw_outline(*(undefined8 *)(lVar9 + 0x10 + lVar1),uVar3,&local_80);
          lVar9 = *(long *)(this + 0xa10);
        }
        if (lVar9 != 0) {
          lVar11 = *(long *)(lVar9 + -8);
          if (lVar11 <= lVar10) goto LAB_00102c03;
          TextLine::draw(*(undefined8 *)(lVar9 + 0x10 + lVar1),uVar3,&local_80,&local_78);
          cVar6 = RefCounted::unreference();
          if (cVar6 != '\0') {
            cVar6 = predelete_handler(pOVar12);
            if (cVar6 != '\0') {
              (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
              Memory::free_static(pOVar12,false);
            }
          }
          goto LAB_0010295f;
        }
      }
LAB_00102c00:
      lVar11 = 0;
LAB_00102c03:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,lVar10,lVar11,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
LAB_00102d78:
    lVar9 = 0;
  }
LAB_00102bbd:
  _err_print_index_error
            ("_draw_menu_item","scene/gui/menu_bar.cpp",0x194,lVar10,lVar9,"p_index",
             "menu_cache.size()","",false,false);
LAB_0010295f:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MenuBar::shape(MenuBar::Menu&) */

void __thiscall MenuBar::shape(MenuBar *this,Menu *param_1)

{
  long *plVar1;
  uint uVar2;
  undefined8 uVar3;
  String *pSVar4;
  long lVar5;
  byte bVar6;
  char cVar7;
  long lVar8;
  long in_FS_OFFSET;
  bool bVar9;
  long local_70;
  long local_68;
  long local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  TextLine::clear();
  if (*(int *)(this + 0xa00) == 3) {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    bVar6 = (**(code **)(*(long *)this + 0x340))(this);
    TextLine::set_direction(uVar3,bVar6 + 1);
  }
  else {
    TextLine::set_direction(*(undefined8 *)(param_1 + 0x10));
  }
  pSVar4 = *(String **)(param_1 + 0x10);
  local_58 = 0;
  uVar2 = *(uint *)(this + 0xa90);
  local_50 = (undefined1  [16])0x0;
  StringName::StringName((StringName *)&local_70,"",false);
  cVar7 = Node::can_auto_translate();
  if (cVar7 == '\0') {
    local_68 = 0;
    plVar1 = (long *)(*(long *)param_1 + -0x10);
    if (*(long *)param_1 != 0) {
      do {
        lVar5 = *plVar1;
        if (lVar5 == 0) goto LAB_00103555;
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
        local_68 = *(long *)param_1;
      }
    }
  }
  else {
    StringName::StringName((StringName *)&local_60,(String *)param_1,false);
    Object::tr((StringName *)&local_68,(StringName *)this);
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
    }
  }
LAB_00103555:
  TextLine::add_string
            (pSVar4,(Ref *)&local_68,(int)this + 0xa88,(String *)(ulong)uVar2,
             (Variant *)(this + 0x9f8));
  lVar5 = local_68;
  if (local_68 != 0) {
    LOCK();
    plVar1 = (long *)(local_68 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_68 = 0;
      Memory::free_static((void *)(lVar5 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MenuBar::MenuBar() */

void __thiscall MenuBar::MenuBar(MenuBar *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  Control::Control((Control *)this);
  *(undefined1 (*) [16])(this + 0x9d8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x9c8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa38) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa48) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa58) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa68) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa78) = (undefined1  [16])0x0;
  uVar2 = _UNK_0011ce88;
  uVar1 = __LC49;
  *(undefined ***)this = &PTR__initialize_classv_0011c2d8;
  *(undefined8 *)(this + 0x9e8) = 0;
  *(undefined4 *)(this + 0x9d8) = 1;
  *(undefined4 *)(this + 0x9f0) = 0x10001;
  *(undefined4 *)(this + 0x9f4) = 0xffffffff;
  *(undefined8 *)(this + 0x9f8) = 0;
  *(undefined4 *)(this + 0xa00) = 0;
  *(undefined8 *)(this + 0xa10) = 0;
  *(undefined8 *)(this + 0xa18) = 0xffffffffffffffff;
  *(undefined4 *)(this + 0xa20) = 0xffffffff;
  *(undefined8 *)(this + 0xa24) = 0;
  *(undefined8 *)(this + 0xa30) = 0;
  *(undefined8 *)(this + 0xa88) = 0;
  *(undefined8 *)(this + 0xa90) = 0;
  *(undefined4 *)(this + 0xb08) = 0;
  *(undefined8 *)(this + 0xb10) = 0;
  *(undefined8 *)(this + 0xa98) = uVar1;
  *(undefined8 *)(this + 0xaa0) = uVar2;
  *(undefined8 *)(this + 0xaa8) = uVar1;
  *(undefined8 *)(this + 0xab0) = uVar2;
  *(undefined8 *)(this + 0xab8) = uVar1;
  *(undefined8 *)(this + 0xac0) = uVar2;
  *(undefined8 *)(this + 0xac8) = uVar1;
  *(undefined8 *)(this + 0xad0) = uVar2;
  *(undefined8 *)(this + 0xad8) = uVar1;
  *(undefined8 *)(this + 0xae0) = uVar2;
  *(undefined8 *)(this + 0xae8) = uVar1;
  *(undefined8 *)(this + 0xaf0) = uVar2;
  *(undefined8 *)(this + 0xaf8) = uVar1;
  *(undefined8 *)(this + 0xb00) = uVar2;
  Node::set_process_shortcut_input(SUB81(this,0));
  return;
}



/* MenuBar::_bind_methods() */

void MenuBar::_bind_methods(void)

{
  undefined *puVar1;
  undefined *puVar2;
  MethodBind *pMVar3;
  undefined8 uVar4;
  uint uVar5;
  long in_FS_OFFSET;
  undefined8 local_168;
  long local_160;
  long local_158;
  long local_150;
  long local_148;
  long local_140;
  char *local_138;
  undefined8 local_130;
  char *local_128;
  undefined8 local_120;
  char *local_118;
  int local_110;
  undefined8 local_108;
  undefined4 local_100;
  char *local_f8;
  undefined8 local_f0;
  undefined *local_e8;
  char *pcStack_e0;
  undefined8 local_d8;
  undefined *local_c8;
  undefined *puStack_c0;
  undefined8 local_b8;
  undefined *local_a8;
  char *pcStack_a0;
  undefined8 local_98;
  undefined *local_88;
  char *pcStack_80;
  undefined8 local_78;
  undefined8 local_68;
  char **ppcStack_60;
  code *pcStack_58;
  code *pcStack_50;
  long local_40;
  
  puVar2 = PTR__LC74_0011cec0;
  puVar1 = PTR__LC72_0011ceb8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_f0 = 0;
  local_f8 = "enable";
  uVar5 = (uint)&local_68;
  local_68 = &local_f8;
  D_METHODP((char *)&local_128,(char ***)"set_switch_on_hover",uVar5);
  ppcStack_60 = (char **)0x0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar3 = create_method_bind<MenuBar,bool>(set_switch_on_hover);
  ClassDB::bind_methodfi(1,pMVar3,false,(MethodDefinition *)&local_128,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_128);
  D_METHODP((char *)&local_128,(char ***)"is_switch_on_hover",0);
  ppcStack_60 = (char **)0x0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar3 = create_method_bind<MenuBar,bool>(is_switch_on_hover);
  ClassDB::bind_methodfi(1,pMVar3,false,(MethodDefinition *)&local_128,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_128);
  local_f0 = 0;
  local_f8 = "disabled";
  local_68 = &local_f8;
  D_METHODP((char *)&local_128,(char ***)"set_disable_shortcuts",uVar5);
  ppcStack_60 = (char **)0x0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar3 = create_method_bind<MenuBar,bool>(set_disable_shortcuts);
  ClassDB::bind_methodfi(1,pMVar3,false,(MethodDefinition *)&local_128,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_128);
  local_f8 = "enabled";
  local_f0 = 0;
  local_68 = &local_f8;
  D_METHODP((char *)&local_128,(char ***)"set_prefer_global_menu",uVar5);
  ppcStack_60 = (char **)0x0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar3 = create_method_bind<MenuBar,bool>(set_prefer_global_menu);
  ClassDB::bind_methodfi(1,pMVar3,false,(MethodDefinition *)&local_128,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_128);
  D_METHODP((char *)&local_128,(char ***)"is_prefer_global_menu",0);
  ppcStack_60 = (char **)0x0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar3 = create_method_bind<MenuBar,bool>(is_prefer_global_menu);
  ClassDB::bind_methodfi(1,pMVar3,false,(MethodDefinition *)&local_128,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_128);
  D_METHODP((char *)&local_128,(char ***)"is_native_menu",0);
  ppcStack_60 = (char **)0x0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar3 = create_method_bind<MenuBar,bool>(is_native_menu);
  ClassDB::bind_methodfi(1,pMVar3,false,(MethodDefinition *)&local_128,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_128);
  D_METHODP((char *)&local_128,(char ***)"get_menu_count",0);
  ppcStack_60 = (char **)0x0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar3 = create_method_bind<MenuBar,int>(get_menu_count);
  ClassDB::bind_methodfi(1,pMVar3,false,(MethodDefinition *)&local_128,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_128);
  local_f0 = 0;
  local_f8 = "direction";
  local_68 = &local_f8;
  D_METHODP((char *)&local_128,(char ***)"set_text_direction",uVar5);
  ppcStack_60 = (char **)0x0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar3 = create_method_bind<MenuBar,Control::TextDirection>(set_text_direction);
  ClassDB::bind_methodfi(1,pMVar3,false,(MethodDefinition *)&local_128,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_128);
  D_METHODP((char *)&local_128,(char ***)"get_text_direction",0);
  ppcStack_60 = (char **)0x0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar3 = create_method_bind<MenuBar,Control::TextDirection>(get_text_direction);
  ClassDB::bind_methodfi(1,pMVar3,false,(MethodDefinition *)&local_128,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_128);
  local_f0 = 0;
  local_f8 = "language";
  local_68 = &local_f8;
  D_METHODP((char *)&local_128,(char ***)"set_language",uVar5);
  ppcStack_60 = (char **)0x0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar3 = create_method_bind<MenuBar,String_const&>(set_language);
  ClassDB::bind_methodfi(1,pMVar3,false,(MethodDefinition *)&local_128,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_128);
  D_METHODP((char *)&local_128,(char ***)"get_language",0);
  ppcStack_60 = (char **)0x0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar3 = create_method_bind<MenuBar,String>(get_language);
  ClassDB::bind_methodfi(1,pMVar3,false,(MethodDefinition *)&local_128,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_128);
  local_f8 = "enabled";
  local_f0 = 0;
  local_68 = &local_f8;
  D_METHODP((char *)&local_128,(char ***)"set_flat",uVar5);
  ppcStack_60 = (char **)0x0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar3 = create_method_bind<MenuBar,bool>(set_flat);
  ClassDB::bind_methodfi(1,pMVar3,false,(MethodDefinition *)&local_128,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_128);
  D_METHODP((char *)&local_128,(char ***)"is_flat",0);
  ppcStack_60 = (char **)0x0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar3 = create_method_bind<MenuBar,bool>(is_flat);
  ClassDB::bind_methodfi(1,pMVar3,false,(MethodDefinition *)&local_128,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_128);
  local_f8 = "enabled";
  local_f0 = 0;
  local_68 = &local_f8;
  D_METHODP((char *)&local_128,(char ***)"set_start_index",uVar5);
  ppcStack_60 = (char **)0x0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar3 = create_method_bind<MenuBar,int>(set_start_index);
  ClassDB::bind_methodfi(1,pMVar3,false,(MethodDefinition *)&local_128,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_128);
  D_METHODP((char *)&local_128,(char ***)"get_start_index",0);
  ppcStack_60 = (char **)0x0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar3 = create_method_bind<MenuBar,int>(get_start_index);
  ClassDB::bind_methodfi(1,pMVar3,false,(MethodDefinition *)&local_128,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_128);
  local_78 = 0;
  local_88 = puVar1;
  pcStack_80 = "title";
  ppcStack_60 = &pcStack_80;
  local_68 = &local_88;
  D_METHODP((char *)&local_128,(char ***)"set_menu_title",uVar5);
  ppcStack_60 = (char **)0x0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar3 = create_method_bind<MenuBar,int,String_const&>(set_menu_title);
  ClassDB::bind_methodfi(1,pMVar3,false,(MethodDefinition *)&local_128,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_128);
  pcStack_80 = (char *)0x0;
  local_88 = &_LC72;
  local_68 = &local_88;
  D_METHODP((char *)&local_128,(char ***)"get_menu_title",uVar5);
  ppcStack_60 = (char **)0x0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar3 = create_method_bind<MenuBar,String,int>(get_menu_title);
  ClassDB::bind_methodfi(1,pMVar3,false,(MethodDefinition *)&local_128,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_128);
  local_98 = 0;
  local_a8 = puVar1;
  pcStack_a0 = "tooltip";
  ppcStack_60 = &pcStack_a0;
  local_68 = &local_a8;
  D_METHODP((char *)&local_128,(char ***)"set_menu_tooltip",uVar5);
  ppcStack_60 = (char **)0x0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar3 = create_method_bind<MenuBar,int,String_const&>(set_menu_tooltip);
  ClassDB::bind_methodfi(1,pMVar3,false,(MethodDefinition *)&local_128,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_128);
  pcStack_80 = (char *)0x0;
  local_88 = &_LC72;
  local_68 = &local_88;
  D_METHODP((char *)&local_128,(char ***)"get_menu_tooltip",uVar5);
  ppcStack_60 = (char **)0x0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar3 = create_method_bind<MenuBar,String,int>(get_menu_tooltip);
  ClassDB::bind_methodfi(1,pMVar3,false,(MethodDefinition *)&local_128,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_128);
  local_b8 = 0;
  local_c8 = puVar1;
  puStack_c0 = puVar2;
  ppcStack_60 = &puStack_c0;
  local_68 = &local_c8;
  D_METHODP((char *)&local_128,(char ***)"set_menu_disabled",uVar5);
  ppcStack_60 = (char **)0x0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar3 = create_method_bind<MenuBar,int,bool>(set_menu_disabled);
  ClassDB::bind_methodfi(1,pMVar3,false,(MethodDefinition *)&local_128,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_128);
  pcStack_80 = (char *)0x0;
  local_88 = &_LC72;
  local_68 = &local_88;
  D_METHODP((char *)&local_128,(char ***)"is_menu_disabled",uVar5);
  ppcStack_60 = (char **)0x0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar3 = create_method_bind<MenuBar,bool,int>(is_menu_disabled);
  ClassDB::bind_methodfi(1,pMVar3,false,(MethodDefinition *)&local_128,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_128);
  local_d8 = 0;
  local_e8 = puVar1;
  pcStack_e0 = "hidden";
  ppcStack_60 = &pcStack_e0;
  local_68 = &local_e8;
  D_METHODP((char *)&local_128,(char ***)"set_menu_hidden",uVar5);
  ppcStack_60 = (char **)0x0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar3 = create_method_bind<MenuBar,int,bool>(set_menu_hidden);
  ClassDB::bind_methodfi(1,pMVar3,false,(MethodDefinition *)&local_128,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_128);
  pcStack_80 = (char *)0x0;
  local_88 = &_LC72;
  local_68 = &local_88;
  D_METHODP((char *)&local_128,(char ***)"is_menu_hidden",uVar5);
  ppcStack_60 = (char **)0x0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar3 = create_method_bind<MenuBar,bool,int>(is_menu_hidden);
  ClassDB::bind_methodfi(1,pMVar3,false,(MethodDefinition *)&local_128,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_128);
  pcStack_80 = (char *)0x0;
  local_88 = &_LC72;
  local_68 = &local_88;
  D_METHODP((char *)&local_128,(char ***)"get_menu_popup",uVar5);
  ppcStack_60 = (char **)0x0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar3 = create_method_bind<MenuBar,PopupMenu*,int>(get_menu_popup);
  ClassDB::bind_methodfi(1,pMVar3,false,(MethodDefinition *)&local_128,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_128);
  _scs_create((char *)&local_140,true);
  _scs_create((char *)&local_148,true);
  local_150 = 0;
  local_128 = "";
  local_158 = 0;
  local_120 = 0;
  String::parse_latin1((StrRange *)&local_158);
  local_160 = 0;
  local_128 = "flat";
  local_120 = 4;
  String::parse_latin1((StrRange *)&local_160);
  local_128 = (char *)CONCAT44(local_128._4_4_,1);
  local_120 = 0;
  if (local_160 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_120,(CowData *)&local_160);
  }
  local_118 = (char *)0x0;
  local_110 = 0;
  local_108 = 0;
  if (local_158 == 0) {
LAB_00104743:
    local_100 = 6;
    StringName::operator=((StringName *)&local_118,(StringName *)&local_150);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_108,(CowData *)&local_158);
    local_100 = 6;
    if (local_110 != 0x11) goto LAB_00104743;
    StringName::StringName((StringName *)&local_138,(String *)&local_108,false);
    if (local_118 == local_138) {
      if ((StringName::configured != '\0') && (local_138 != (char *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_118 = local_138;
    }
  }
  local_168 = 0;
  local_138 = "MenuBar";
  local_130 = 7;
  String::parse_latin1((StrRange *)&local_168);
  StringName::StringName((StringName *)&local_138,(String *)&local_168,false);
  ClassDB::add_property
            ((StringName *)&local_138,(PropertyInfo *)&local_128,(StringName *)&local_148,
             (StringName *)&local_140,-1);
  if ((StringName::configured != '\0') && (local_138 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_128);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_160);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
  if ((((StringName::configured != '\0') &&
       ((local_150 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_148 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_140 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_140,true);
  _scs_create((char *)&local_148,true);
  local_128 = "";
  local_150 = 0;
  local_158 = 0;
  local_120 = 0;
  String::parse_latin1((StrRange *)&local_158);
  local_160 = 0;
  local_128 = "start_index";
  local_120 = 0xb;
  String::parse_latin1((StrRange *)&local_160);
  local_128 = (char *)CONCAT44(local_128._4_4_,2);
  local_120 = 0;
  if (local_160 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_120,(CowData *)&local_160);
  }
  local_118 = (char *)0x0;
  local_110 = 0;
  local_108 = 0;
  if (local_158 == 0) {
LAB_001049cb:
    local_100 = 6;
    StringName::operator=((StringName *)&local_118,(StringName *)&local_150);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_108,(CowData *)&local_158);
    local_100 = 6;
    if (local_110 != 0x11) goto LAB_001049cb;
    StringName::StringName((StringName *)&local_138,(String *)&local_108,false);
    if (local_118 == local_138) {
      if ((StringName::configured != '\0') && (local_138 != (char *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_118 = local_138;
    }
  }
  local_168 = 0;
  local_138 = "MenuBar";
  local_130 = 7;
  String::parse_latin1((StrRange *)&local_168);
  StringName::StringName((StringName *)&local_138,(String *)&local_168,false);
  ClassDB::add_property
            ((StringName *)&local_138,(PropertyInfo *)&local_128,(StringName *)&local_148,
             (StringName *)&local_140,-1);
  if ((StringName::configured != '\0') && (local_138 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_128);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_160);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
  if (((StringName::configured != '\0') &&
      ((local_150 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (((local_148 == 0 || (StringName::unref(), StringName::configured != '\0')) && (local_140 != 0)
      ))) {
    StringName::unref();
  }
  _scs_create((char *)&local_140,true);
  _scs_create((char *)&local_148,true);
  local_128 = "";
  local_150 = 0;
  local_158 = 0;
  local_120 = 0;
  String::parse_latin1((StrRange *)&local_158);
  local_160 = 0;
  local_128 = "switch_on_hover";
  local_120 = 0xf;
  String::parse_latin1((StrRange *)&local_160);
  local_128 = (char *)CONCAT44(local_128._4_4_,1);
  local_120 = 0;
  if (local_160 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_120,(CowData *)&local_160);
  }
  local_118 = (char *)0x0;
  local_110 = 0;
  local_108 = 0;
  if (local_158 == 0) {
LAB_00104c4b:
    local_100 = 6;
    StringName::operator=((StringName *)&local_118,(StringName *)&local_150);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_108,(CowData *)&local_158);
    local_100 = 6;
    if (local_110 != 0x11) goto LAB_00104c4b;
    StringName::StringName((StringName *)&local_138,(String *)&local_108,false);
    if (local_118 == local_138) {
      if ((StringName::configured != '\0') && (local_138 != (char *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_118 = local_138;
    }
  }
  local_168 = 0;
  local_138 = "MenuBar";
  local_130 = 7;
  String::parse_latin1((StrRange *)&local_168);
  StringName::StringName((StringName *)&local_138,(String *)&local_168,false);
  ClassDB::add_property
            ((StringName *)&local_138,(PropertyInfo *)&local_128,(StringName *)&local_148,
             (StringName *)&local_140,-1);
  if ((StringName::configured != '\0') && (local_138 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_128);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_160);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
  if ((((StringName::configured != '\0') &&
       ((local_150 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_148 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_140 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_140,true);
  _scs_create((char *)&local_148,true);
  local_128 = "";
  local_150 = 0;
  local_158 = 0;
  local_120 = 0;
  String::parse_latin1((StrRange *)&local_158);
  local_160 = 0;
  local_128 = "prefer_global_menu";
  local_120 = 0x12;
  String::parse_latin1((StrRange *)&local_160);
  local_128 = (char *)CONCAT44(local_128._4_4_,1);
  local_120 = 0;
  if (local_160 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_120,(CowData *)&local_160);
  }
  local_118 = (char *)0x0;
  local_110 = 0;
  local_108 = 0;
  if (local_158 == 0) {
LAB_00104ecb:
    local_100 = 6;
    StringName::operator=((StringName *)&local_118,(StringName *)&local_150);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_108,(CowData *)&local_158);
    local_100 = 6;
    if (local_110 != 0x11) goto LAB_00104ecb;
    StringName::StringName((StringName *)&local_138,(String *)&local_108,false);
    if (local_118 == local_138) {
      if ((StringName::configured != '\0') && (local_138 != (char *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_118 = local_138;
    }
  }
  local_168 = 0;
  local_138 = "MenuBar";
  local_130 = 7;
  String::parse_latin1((StrRange *)&local_168);
  StringName::StringName((StringName *)&local_138,(String *)&local_168,false);
  ClassDB::add_property
            ((StringName *)&local_138,(PropertyInfo *)&local_128,(StringName *)&local_148,
             (StringName *)&local_140,-1);
  if ((StringName::configured != '\0') && (local_138 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_128);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_160);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
  if (((StringName::configured != '\0') &&
      ((local_150 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (((local_148 == 0 || (StringName::unref(), StringName::configured != '\0')) && (local_140 != 0)
      ))) {
    StringName::unref();
  }
  local_138 = (char *)0x0;
  local_128 = "";
  local_120 = 0;
  String::parse_latin1((StrRange *)&local_138);
  local_128 = "BiDi";
  local_140 = 0;
  local_120 = 4;
  String::parse_latin1((StrRange *)&local_140);
  local_128 = "MenuBar";
  local_148 = 0;
  local_120 = 7;
  String::parse_latin1((StrRange *)&local_148);
  StringName::StringName((StringName *)&local_128,(String *)&local_148,false);
  ClassDB::add_property_group((StringName *)&local_128,(String *)&local_140,(String *)&local_138,0);
  if ((StringName::configured != '\0') && (local_128 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
  _scs_create((char *)&local_140,true);
  _scs_create((char *)&local_148,true);
  local_128 = "Auto,Left-to-Right,Right-to-Left,Inherited";
  local_150 = 0;
  local_158 = 0;
  local_120 = 0x2a;
  String::parse_latin1((StrRange *)&local_158);
  local_160 = 0;
  local_128 = "text_direction";
  local_120 = 0xe;
  String::parse_latin1((StrRange *)&local_160);
  local_128 = (char *)CONCAT44(local_128._4_4_,2);
  local_120 = 0;
  if (local_160 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_120,(CowData *)&local_160);
  }
  local_118 = (char *)0x0;
  local_110 = 2;
  local_108 = 0;
  if (local_158 == 0) {
LAB_0010522b:
    local_100 = 6;
    StringName::operator=((StringName *)&local_118,(StringName *)&local_150);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_108,(CowData *)&local_158);
    local_100 = 6;
    if (local_110 != 0x11) goto LAB_0010522b;
    StringName::StringName((StringName *)&local_138,(String *)&local_108,false);
    if (local_118 == local_138) {
      if ((StringName::configured != '\0') && (local_138 != (char *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_118 = local_138;
    }
  }
  local_168 = 0;
  local_138 = "MenuBar";
  local_130 = 7;
  String::parse_latin1((StrRange *)&local_168);
  StringName::StringName((StringName *)&local_138,(String *)&local_168,false);
  ClassDB::add_property
            ((StringName *)&local_138,(PropertyInfo *)&local_128,(StringName *)&local_148,
             (StringName *)&local_140,-1);
  if ((StringName::configured != '\0') && (local_138 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_128);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_160);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
  if ((((StringName::configured != '\0') &&
       ((local_150 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_148 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_140 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_140,true);
  _scs_create((char *)&local_148,true);
  local_128 = "";
  local_150 = 0;
  local_158 = 0;
  local_120 = 0;
  String::parse_latin1((StrRange *)&local_158);
  local_160 = 0;
  local_128 = "language";
  local_120 = 8;
  String::parse_latin1((StrRange *)&local_160);
  local_128 = (char *)CONCAT44(local_128._4_4_,4);
  local_120 = 0;
  if (local_160 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_120,(CowData *)&local_160);
  }
  local_118 = (char *)0x0;
  local_110 = 0x20;
  local_108 = 0;
  if (local_158 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_108,(CowData *)&local_158);
    local_100 = 6;
    if (local_110 == 0x11) {
      StringName::StringName((StringName *)&local_138,(String *)&local_108,false);
      if (local_118 == local_138) {
        if ((StringName::configured != '\0') && (local_138 != (char *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_118 = local_138;
      }
      goto LAB_001054c0;
    }
  }
  local_100 = 6;
  StringName::operator=((StringName *)&local_118,(StringName *)&local_150);
LAB_001054c0:
  local_168 = 0;
  local_138 = "MenuBar";
  local_130 = 7;
  String::parse_latin1((StrRange *)&local_168);
  StringName::StringName((StringName *)&local_138,(String *)&local_168,false);
  ClassDB::add_property
            ((StringName *)&local_138,(PropertyInfo *)&local_128,(StringName *)&local_148,
             (StringName *)&local_140,-1);
  if ((StringName::configured != '\0') && (local_138 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_128);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_160);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
  if ((((StringName::configured != '\0') &&
       ((local_150 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_148 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_140 != 0)) {
    StringName::unref();
  }
  uVar4 = ThemeDB::get_singleton();
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  ppcStack_60 = (char **)0x0;
  pcStack_58 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#1}>
               ::_M_manager;
  pcStack_50 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#1}>
               ::_M_invoke;
  StringName::StringName((StringName *)&local_138,"normal",false);
  StringName::StringName((StringName *)&local_140,"normal",false);
  local_128 = "MenuBar";
  local_148 = 0;
  local_120 = 7;
  String::parse_latin1((StrRange *)&local_148);
  StringName::StringName((StringName *)&local_128,(String *)&local_148,false);
  ThemeDB::bind_class_item
            (uVar4,5,(MethodDefinition *)&local_128,(StrRange *)&local_140,(StringName *)&local_138,
             &local_68);
  if ((StringName::configured != '\0') && (local_128 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
  if ((StringName::configured != '\0') &&
     (((local_140 == 0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_138 != (char *)0x0)))) {
    StringName::unref();
  }
  if (pcStack_58 != (code *)0x0) {
    (*pcStack_58)(&local_68,&local_68,3);
  }
  uVar4 = ThemeDB::get_singleton();
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  ppcStack_60 = (char **)0x0;
  pcStack_58 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#2}>
               ::_M_manager;
  pcStack_50 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#2}>
               ::_M_invoke;
  StringName::StringName((StringName *)&local_138,"normal_mirrored",false);
  StringName::StringName((StringName *)&local_140,"normal_mirrored",false);
  local_128 = "MenuBar";
  local_148 = 0;
  local_120 = 7;
  String::parse_latin1((StrRange *)&local_148);
  StringName::StringName((StringName *)&local_128,(String *)&local_148,false);
  ThemeDB::bind_class_item
            (uVar4,5,(MethodDefinition *)&local_128,(StrRange *)&local_140,(StringName *)&local_138,
             &local_68);
  if ((StringName::configured != '\0') && (local_128 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
  if (((StringName::configured != '\0') &&
      ((local_140 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_138 != (char *)0x0)) {
    StringName::unref();
  }
  if (pcStack_58 != (code *)0x0) {
    (*pcStack_58)(&local_68,&local_68,3);
  }
  uVar4 = ThemeDB::get_singleton();
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  ppcStack_60 = (char **)0x0;
  pcStack_58 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#3}>
               ::_M_manager;
  pcStack_50 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#3}>
               ::_M_invoke;
  StringName::StringName((StringName *)&local_138,"disabled",false);
  StringName::StringName((StringName *)&local_140,"disabled",false);
  local_128 = "MenuBar";
  local_148 = 0;
  local_120 = 7;
  String::parse_latin1((StrRange *)&local_148);
  StringName::StringName((StringName *)&local_128,(String *)&local_148,false);
  ThemeDB::bind_class_item
            (uVar4,5,(MethodDefinition *)&local_128,(StrRange *)&local_140,(StringName *)&local_138,
             &local_68);
  if ((StringName::configured != '\0') && (local_128 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
  if ((StringName::configured != '\0') &&
     (((local_140 == 0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_138 != (char *)0x0)))) {
    StringName::unref();
  }
  if (pcStack_58 != (code *)0x0) {
    (*pcStack_58)(&local_68,&local_68,3);
  }
  uVar4 = ThemeDB::get_singleton();
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  ppcStack_60 = (char **)0x0;
  pcStack_58 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#4}>
               ::_M_manager;
  pcStack_50 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#4}>
               ::_M_invoke;
  StringName::StringName((StringName *)&local_138,"disabled_mirrored",false);
  StringName::StringName((StringName *)&local_140,"disabled_mirrored",false);
  local_128 = "MenuBar";
  local_148 = 0;
  local_120 = 7;
  String::parse_latin1((StrRange *)&local_148);
  StringName::StringName((StringName *)&local_128,(String *)&local_148,false);
  ThemeDB::bind_class_item
            (uVar4,5,(MethodDefinition *)&local_128,(StrRange *)&local_140,(StringName *)&local_138,
             &local_68);
  if ((StringName::configured != '\0') && (local_128 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
  if (((StringName::configured != '\0') &&
      ((local_140 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_138 != (char *)0x0)) {
    StringName::unref();
  }
  if (pcStack_58 != (code *)0x0) {
    (*pcStack_58)(&local_68,&local_68,3);
  }
  uVar4 = ThemeDB::get_singleton();
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  ppcStack_60 = (char **)0x0;
  pcStack_58 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#5}>
               ::_M_manager;
  pcStack_50 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#5}>
               ::_M_invoke;
  StringName::StringName((StringName *)&local_138,"pressed",false);
  StringName::StringName((StringName *)&local_140,"pressed",false);
  local_128 = "MenuBar";
  local_148 = 0;
  local_120 = 7;
  String::parse_latin1((StrRange *)&local_148);
  StringName::StringName((StringName *)&local_128,(String *)&local_148,false);
  ThemeDB::bind_class_item
            (uVar4,5,(MethodDefinition *)&local_128,(StrRange *)&local_140,(StringName *)&local_138,
             &local_68);
  if ((StringName::configured != '\0') && (local_128 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
  if ((StringName::configured != '\0') &&
     (((local_140 == 0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_138 != (char *)0x0)))) {
    StringName::unref();
  }
  if (pcStack_58 != (code *)0x0) {
    (*pcStack_58)(&local_68,&local_68,3);
  }
  uVar4 = ThemeDB::get_singleton();
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  ppcStack_60 = (char **)0x0;
  pcStack_58 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#6}>
               ::_M_manager;
  pcStack_50 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#6}>
               ::_M_invoke;
  StringName::StringName((StringName *)&local_138,"pressed_mirrored",false);
  StringName::StringName((StringName *)&local_140,"pressed_mirrored",false);
  local_128 = "MenuBar";
  local_148 = 0;
  local_120 = 7;
  String::parse_latin1((StrRange *)&local_148);
  StringName::StringName((StringName *)&local_128,(String *)&local_148,false);
  ThemeDB::bind_class_item
            (uVar4,5,(MethodDefinition *)&local_128,(StrRange *)&local_140,(StringName *)&local_138,
             &local_68);
  if ((StringName::configured != '\0') && (local_128 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
  if (((StringName::configured != '\0') &&
      ((local_140 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_138 != (char *)0x0)) {
    StringName::unref();
  }
  if (pcStack_58 != (code *)0x0) {
    (*pcStack_58)(&local_68,&local_68,3);
  }
  uVar4 = ThemeDB::get_singleton();
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  ppcStack_60 = (char **)0x0;
  pcStack_58 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#7}>
               ::_M_manager;
  pcStack_50 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#7}>
               ::_M_invoke;
  StringName::StringName((StringName *)&local_138,"hover",false);
  StringName::StringName((StringName *)&local_140,"hover",false);
  local_128 = "MenuBar";
  local_148 = 0;
  local_120 = 7;
  String::parse_latin1((StrRange *)&local_148);
  StringName::StringName((StringName *)&local_128,(String *)&local_148,false);
  ThemeDB::bind_class_item
            (uVar4,5,(MethodDefinition *)&local_128,(StrRange *)&local_140,(StringName *)&local_138,
             &local_68);
  if ((StringName::configured != '\0') && (local_128 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
  if ((StringName::configured != '\0') &&
     (((local_140 == 0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_138 != (char *)0x0)))) {
    StringName::unref();
  }
  if (pcStack_58 != (code *)0x0) {
    (*pcStack_58)(&local_68,&local_68,3);
  }
  uVar4 = ThemeDB::get_singleton();
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  ppcStack_60 = (char **)0x0;
  pcStack_58 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#8}>
               ::_M_manager;
  pcStack_50 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#8}>
               ::_M_invoke;
  StringName::StringName((StringName *)&local_138,"hover_mirrored",false);
  StringName::StringName((StringName *)&local_140,"hover_mirrored",false);
  local_128 = "MenuBar";
  local_148 = 0;
  local_120 = 7;
  String::parse_latin1((StrRange *)&local_148);
  StringName::StringName((StringName *)&local_128,(String *)&local_148,false);
  ThemeDB::bind_class_item
            (uVar4,5,(MethodDefinition *)&local_128,(StrRange *)&local_140,(StringName *)&local_138,
             &local_68);
  if ((StringName::configured != '\0') && (local_128 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
  if (((StringName::configured != '\0') &&
      ((local_140 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_138 != (char *)0x0)) {
    StringName::unref();
  }
  if (pcStack_58 != (code *)0x0) {
    (*pcStack_58)(&local_68,&local_68,3);
  }
  uVar4 = ThemeDB::get_singleton();
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  ppcStack_60 = (char **)0x0;
  pcStack_58 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#9}>
               ::_M_manager;
  pcStack_50 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#9}>
               ::_M_invoke;
  StringName::StringName((StringName *)&local_138,"hover_pressed",false);
  StringName::StringName((StringName *)&local_140,"hover_pressed",false);
  local_128 = "MenuBar";
  local_148 = 0;
  local_120 = 7;
  String::parse_latin1((StrRange *)&local_148);
  StringName::StringName((StringName *)&local_128,(String *)&local_148,false);
  ThemeDB::bind_class_item
            (uVar4,5,(MethodDefinition *)&local_128,(StrRange *)&local_140,(StringName *)&local_138,
             &local_68);
  if ((StringName::configured != '\0') && (local_128 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
  if ((StringName::configured != '\0') &&
     (((local_140 == 0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_138 != (char *)0x0)))) {
    StringName::unref();
  }
  if (pcStack_58 != (code *)0x0) {
    (*pcStack_58)(&local_68,&local_68,3);
  }
  uVar4 = ThemeDB::get_singleton();
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  ppcStack_60 = (char **)0x0;
  pcStack_58 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#10}>
               ::_M_manager;
  pcStack_50 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#10}>
               ::_M_invoke;
  StringName::StringName((StringName *)&local_138,"hover_pressed_mirrored",false);
  StringName::StringName((StringName *)&local_140,"hover_pressed_mirrored",false);
  local_128 = "MenuBar";
  local_148 = 0;
  local_120 = 7;
  String::parse_latin1((StrRange *)&local_148);
  StringName::StringName((StringName *)&local_128,(String *)&local_148,false);
  ThemeDB::bind_class_item
            (uVar4,5,(MethodDefinition *)&local_128,(StrRange *)&local_140,(StringName *)&local_138,
             &local_68);
  if ((StringName::configured != '\0') && (local_128 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
  if (((StringName::configured != '\0') &&
      ((local_140 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_138 != (char *)0x0)) {
    StringName::unref();
  }
  if (pcStack_58 != (code *)0x0) {
    (*pcStack_58)(&local_68,&local_68,3);
  }
  uVar4 = ThemeDB::get_singleton();
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  ppcStack_60 = (char **)0x0;
  pcStack_58 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#11}>
               ::_M_manager;
  pcStack_50 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#11}>
               ::_M_invoke;
  StringName::StringName((StringName *)&local_138,"font",false);
  StringName::StringName((StringName *)&local_140,"font",false);
  local_128 = "MenuBar";
  local_148 = 0;
  local_120 = 7;
  String::parse_latin1((StrRange *)&local_148);
  StringName::StringName((StringName *)&local_128,(String *)&local_148,false);
  ThemeDB::bind_class_item
            (uVar4,2,(MethodDefinition *)&local_128,(StrRange *)&local_140,(StringName *)&local_138,
             &local_68);
  if ((StringName::configured != '\0') && (local_128 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
  if ((StringName::configured != '\0') &&
     (((local_140 == 0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_138 != (char *)0x0)))) {
    StringName::unref();
  }
  if (pcStack_58 != (code *)0x0) {
    (*pcStack_58)(&local_68,&local_68,3);
  }
  uVar4 = ThemeDB::get_singleton();
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  ppcStack_60 = (char **)0x0;
  pcStack_58 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#12}>
               ::_M_manager;
  pcStack_50 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#12}>
               ::_M_invoke;
  StringName::StringName((StringName *)&local_138,"font_size",false);
  StringName::StringName((StringName *)&local_140,"font_size",false);
  local_128 = "MenuBar";
  local_148 = 0;
  local_120 = 7;
  String::parse_latin1((StrRange *)&local_148);
  StringName::StringName((StringName *)&local_128,(String *)&local_148,false);
  ThemeDB::bind_class_item
            (uVar4,3,(MethodDefinition *)&local_128,(StrRange *)&local_140,(StringName *)&local_138,
             &local_68);
  if ((StringName::configured != '\0') && (local_128 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
  if (((StringName::configured != '\0') &&
      ((local_140 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_138 != (char *)0x0)) {
    StringName::unref();
  }
  if (pcStack_58 != (code *)0x0) {
    (*pcStack_58)(&local_68,&local_68,3);
  }
  uVar4 = ThemeDB::get_singleton();
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  ppcStack_60 = (char **)0x0;
  pcStack_58 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#13}>
               ::_M_manager;
  pcStack_50 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#13}>
               ::_M_invoke;
  StringName::StringName((StringName *)&local_138,"outline_size",false);
  StringName::StringName((StringName *)&local_140,"outline_size",false);
  local_128 = "MenuBar";
  local_148 = 0;
  local_120 = 7;
  String::parse_latin1((StrRange *)&local_148);
  StringName::StringName((StringName *)&local_128,(String *)&local_148,false);
  ThemeDB::bind_class_item
            (uVar4,1,(MethodDefinition *)&local_128,(StrRange *)&local_140,(StringName *)&local_138,
             &local_68);
  if ((StringName::configured != '\0') && (local_128 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
  if ((StringName::configured != '\0') &&
     (((local_140 == 0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_138 != (char *)0x0)))) {
    StringName::unref();
  }
  if (pcStack_58 != (code *)0x0) {
    (*pcStack_58)(&local_68,&local_68,3);
  }
  uVar4 = ThemeDB::get_singleton();
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  ppcStack_60 = (char **)0x0;
  pcStack_58 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#14}>
               ::_M_manager;
  pcStack_50 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#14}>
               ::_M_invoke;
  StringName::StringName((StringName *)&local_138,"font_outline_color",false);
  StringName::StringName((StringName *)&local_140,"font_outline_color",false);
  local_128 = "MenuBar";
  local_148 = 0;
  local_120 = 7;
  String::parse_latin1((StrRange *)&local_148);
  StringName::StringName((StringName *)&local_128,(String *)&local_148,false);
  ThemeDB::bind_class_item
            (uVar4,0,(MethodDefinition *)&local_128,(StrRange *)&local_140,(StringName *)&local_138,
             &local_68);
  if ((StringName::configured != '\0') && (local_128 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
  if (((StringName::configured != '\0') &&
      ((local_140 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_138 != (char *)0x0)) {
    StringName::unref();
  }
  if (pcStack_58 != (code *)0x0) {
    (*pcStack_58)(&local_68,&local_68,3);
  }
  uVar4 = ThemeDB::get_singleton();
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  ppcStack_60 = (char **)0x0;
  pcStack_58 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#15}>
               ::_M_manager;
  pcStack_50 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#15}>
               ::_M_invoke;
  StringName::StringName((StringName *)&local_138,"font_color",false);
  StringName::StringName((StringName *)&local_140,"font_color",false);
  local_128 = "MenuBar";
  local_148 = 0;
  local_120 = 7;
  String::parse_latin1((StrRange *)&local_148);
  StringName::StringName((StringName *)&local_128,(String *)&local_148,false);
  ThemeDB::bind_class_item
            (uVar4,0,(MethodDefinition *)&local_128,(StrRange *)&local_140,(StringName *)&local_138,
             &local_68);
  if ((StringName::configured != '\0') && (local_128 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
  if ((StringName::configured != '\0') &&
     (((local_140 == 0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_138 != (char *)0x0)))) {
    StringName::unref();
  }
  if (pcStack_58 != (code *)0x0) {
    (*pcStack_58)(&local_68,&local_68,3);
  }
  uVar4 = ThemeDB::get_singleton();
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  ppcStack_60 = (char **)0x0;
  pcStack_58 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#16}>
               ::_M_manager;
  pcStack_50 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#16}>
               ::_M_invoke;
  StringName::StringName((StringName *)&local_138,"font_disabled_color",false);
  StringName::StringName((StringName *)&local_140,"font_disabled_color",false);
  local_128 = "MenuBar";
  local_148 = 0;
  local_120 = 7;
  String::parse_latin1((StrRange *)&local_148);
  StringName::StringName((StringName *)&local_128,(String *)&local_148,false);
  ThemeDB::bind_class_item
            (uVar4,0,(MethodDefinition *)&local_128,(StrRange *)&local_140,(StringName *)&local_138,
             &local_68);
  if ((StringName::configured != '\0') && (local_128 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
  if (((StringName::configured != '\0') &&
      ((local_140 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_138 != (char *)0x0)) {
    StringName::unref();
  }
  if (pcStack_58 != (code *)0x0) {
    (*pcStack_58)(&local_68,&local_68,3);
  }
  uVar4 = ThemeDB::get_singleton();
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  ppcStack_60 = (char **)0x0;
  pcStack_58 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#17}>
               ::_M_manager;
  pcStack_50 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#17}>
               ::_M_invoke;
  StringName::StringName((StringName *)&local_138,"font_pressed_color",false);
  StringName::StringName((StringName *)&local_140,"font_pressed_color",false);
  local_128 = "MenuBar";
  local_148 = 0;
  local_120 = 7;
  String::parse_latin1((StrRange *)&local_148);
  StringName::StringName((StringName *)&local_128,(String *)&local_148,false);
  ThemeDB::bind_class_item
            (uVar4,0,(MethodDefinition *)&local_128,(StrRange *)&local_140,(StringName *)&local_138,
             &local_68);
  if ((StringName::configured != '\0') && (local_128 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
  if ((StringName::configured != '\0') &&
     (((local_140 == 0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_138 != (char *)0x0)))) {
    StringName::unref();
  }
  if (pcStack_58 != (code *)0x0) {
    (*pcStack_58)(&local_68,&local_68,3);
  }
  uVar4 = ThemeDB::get_singleton();
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  ppcStack_60 = (char **)0x0;
  pcStack_58 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#18}>
               ::_M_manager;
  pcStack_50 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#18}>
               ::_M_invoke;
  StringName::StringName((StringName *)&local_138,"font_hover_color",false);
  StringName::StringName((StringName *)&local_140,"font_hover_color",false);
  local_128 = "MenuBar";
  local_148 = 0;
  local_120 = 7;
  String::parse_latin1((StrRange *)&local_148);
  StringName::StringName((StringName *)&local_128,(String *)&local_148,false);
  ThemeDB::bind_class_item
            (uVar4,0,(MethodDefinition *)&local_128,(StrRange *)&local_140,(StringName *)&local_138,
             &local_68);
  if ((StringName::configured != '\0') && (local_128 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
  if (((StringName::configured != '\0') &&
      ((local_140 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_138 != (char *)0x0)) {
    StringName::unref();
  }
  if (pcStack_58 != (code *)0x0) {
    (*pcStack_58)(&local_68,&local_68,3);
  }
  uVar4 = ThemeDB::get_singleton();
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  ppcStack_60 = (char **)0x0;
  pcStack_58 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#19}>
               ::_M_manager;
  pcStack_50 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#19}>
               ::_M_invoke;
  StringName::StringName((StringName *)&local_138,"font_hover_pressed_color",false);
  StringName::StringName((StringName *)&local_140,"font_hover_pressed_color",false);
  local_128 = "MenuBar";
  local_148 = 0;
  local_120 = 7;
  String::parse_latin1((StrRange *)&local_148);
  StringName::StringName((StringName *)&local_128,(String *)&local_148,false);
  ThemeDB::bind_class_item
            (uVar4,0,(MethodDefinition *)&local_128,(StrRange *)&local_140,(StringName *)&local_138,
             &local_68);
  if ((StringName::configured != '\0') && (local_128 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
  if ((StringName::configured != '\0') &&
     (((local_140 == 0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_138 != (char *)0x0)))) {
    StringName::unref();
  }
  if (pcStack_58 != (code *)0x0) {
    (*pcStack_58)(&local_68,&local_68,3);
  }
  uVar4 = ThemeDB::get_singleton();
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  ppcStack_60 = (char **)0x0;
  pcStack_58 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#20}>
               ::_M_manager;
  pcStack_50 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#20}>
               ::_M_invoke;
  StringName::StringName((StringName *)&local_138,"font_focus_color",false);
  StringName::StringName((StringName *)&local_140,"font_focus_color",false);
  local_128 = "MenuBar";
  local_148 = 0;
  local_120 = 7;
  String::parse_latin1((StrRange *)&local_148);
  StringName::StringName((StringName *)&local_128,(String *)&local_148,false);
  ThemeDB::bind_class_item
            (uVar4,0,(MethodDefinition *)&local_128,(StrRange *)&local_140,(StringName *)&local_138,
             &local_68);
  if ((StringName::configured != '\0') && (local_128 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
  if (((StringName::configured != '\0') &&
      ((local_140 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_138 != (char *)0x0)) {
    StringName::unref();
  }
  if (pcStack_58 != (code *)0x0) {
    (*pcStack_58)(&local_68,&local_68,3);
  }
  uVar4 = ThemeDB::get_singleton();
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  ppcStack_60 = (char **)0x0;
  pcStack_58 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#21}>
               ::_M_manager;
  pcStack_50 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#21}>
               ::_M_invoke;
  StringName::StringName((StringName *)&local_138,"h_separation",false);
  StringName::StringName((StringName *)&local_140,"h_separation",false);
  local_128 = "MenuBar";
  local_148 = 0;
  local_120 = 7;
  String::parse_latin1((StrRange *)&local_148);
  StringName::StringName((StringName *)&local_128,(String *)&local_148,false);
  ThemeDB::bind_class_item
            (uVar4,1,(MethodDefinition *)&local_128,(StrRange *)&local_140,(StringName *)&local_138,
             &local_68);
  if ((StringName::configured != '\0') && (local_128 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
  if ((StringName::configured != '\0') &&
     (((local_140 == 0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_138 != (char *)0x0)))) {
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



/* MenuBar::~MenuBar() */

void __thiscall MenuBar::~MenuBar(MenuBar *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_0011c2d8;
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xb10));
  if (*(long *)(this + 0xa88) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa88);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xa80) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa80);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xa78) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa78);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xa70) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa70);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
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
  if (*(long *)(this + 0xa58) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa58);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xa50) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa50);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xa48) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa48);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xa40) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa40);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xa38) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa38);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  CowData<MenuBar::Menu>::_unref((CowData<MenuBar::Menu> *)(this + 0xa10));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x9f8));
  Control::~Control((Control *)this);
  return;
}



/* MenuBar::~MenuBar() */

void __thiscall MenuBar::~MenuBar(MenuBar *this)

{
  ~MenuBar(this);
  operator_delete(this,0xb18);
  return;
}



/* CowData<MenuBar::Menu>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<MenuBar::Menu>::_copy_on_write(CowData<MenuBar::Menu> *this)

{
  long lVar1;
  code *pcVar2;
  char cVar3;
  undefined8 *puVar4;
  CowData<char32_t> *this_00;
  CowData *pCVar5;
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
  if (lVar1 * 0x28 != 0) {
    uVar6 = lVar1 * 0x28 - 1;
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
        *(undefined8 *)(this_00 + 8) = 0;
        if (*(long *)(pCVar5 + 8) != 0) {
          CowData<char32_t>::_ref(this_00 + 8,pCVar5 + 8);
        }
        *(undefined8 *)(this_00 + 0x10) = 0;
        if (*(long *)(pCVar5 + 0x10) != 0) {
          *(long *)(this_00 + 0x10) = *(long *)(pCVar5 + 0x10);
          cVar3 = RefCounted::reference();
          if (cVar3 == '\0') {
            *(undefined8 *)(this_00 + 0x10) = 0;
          }
        }
        lVar7 = lVar7 + 1;
        *(undefined2 *)(this_00 + 0x18) = *(undefined2 *)(pCVar5 + 0x18);
        *(undefined8 *)(this_00 + 0x20) = *(undefined8 *)(pCVar5 + 0x20);
        this_00 = this_00 + 0x28;
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



/* MenuBar::set_menu_hidden(int, bool) */

void __thiscall MenuBar::set_menu_hidden(MenuBar *this,int param_1,bool param_2)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long in_FS_OFFSET;
  undefined8 local_38;
  long local_30;
  
  lVar5 = (long)param_1;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar7 = *(long *)(this + 0xa10);
  if (param_1 < 0) {
    if (lVar7 == 0) goto LAB_00107810;
    lVar7 = *(long *)(lVar7 + -8);
  }
  else if (lVar7 == 0) {
LAB_00107810:
    lVar7 = 0;
  }
  else {
    lVar7 = *(long *)(lVar7 + -8);
    if (lVar5 < lVar7) {
      CowData<MenuBar::Menu>::_copy_on_write((CowData<MenuBar::Menu> *)(this + 0xa10));
      lVar6 = *(long *)(this + 0xa10);
      lVar1 = *(long *)(this + 0xb10);
      lVar7 = lVar6 + lVar5 * 0x28;
      *(bool *)(lVar7 + 0x18) = param_2;
      plVar3 = NativeMenu::singleton;
      if ((lVar1 != 0) && (1 < *(uint *)(lVar1 + -8))) {
        if (lVar6 == 0) {
LAB_00107760:
          lVar6 = 0;
LAB_00107763:
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,lVar5,lVar6,"p_index","size()","",false
                     ,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        lVar6 = *(long *)(lVar6 + -8);
        if (lVar6 <= lVar5) goto LAB_00107763;
        if (*(long *)(lVar7 + 0x20) != 0) {
          local_38 = (**(code **)(*NativeMenu::singleton + 0x160))(NativeMenu::singleton,1);
          lVar7 = *(long *)(this + 0xa10);
          if (lVar7 == 0) goto LAB_00107760;
          lVar6 = *(long *)(lVar7 + -8);
          if (lVar6 <= lVar5) goto LAB_00107763;
          iVar4 = (**(code **)(*plVar3 + 0x230))(plVar3,&local_38,lVar7 + 0x20 + lVar5 * 0x28);
          if (-1 < iVar4) {
            (**(code **)(*plVar3 + 0x310))(plVar3,&local_38,iVar4,param_2);
          }
        }
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        Control::update_minimum_size();
        return;
      }
      goto LAB_00107815;
    }
  }
  _err_print_index_error
            ("set_menu_hidden","scene/gui/menu_bar.cpp",0x394,lVar5,lVar7,"p_menu",
             "menu_cache.size()","",false,false);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00107815:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MenuBar::set_menu_disabled(int, bool) */

void __thiscall MenuBar::set_menu_disabled(MenuBar *this,int param_1,bool param_2)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long in_FS_OFFSET;
  undefined8 local_38;
  long local_30;
  
  lVar5 = (long)param_1;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar6 = *(long *)(this + 0xa10);
  if (param_1 < 0) {
    if (lVar6 == 0) goto LAB_001079b0;
    lVar6 = *(long *)(lVar6 + -8);
  }
  else if (lVar6 == 0) {
LAB_001079b0:
    lVar6 = 0;
  }
  else {
    lVar6 = *(long *)(lVar6 + -8);
    if (lVar5 < lVar6) {
      CowData<MenuBar::Menu>::_copy_on_write((CowData<MenuBar::Menu> *)(this + 0xa10));
      lVar7 = *(long *)(this + 0xa10);
      lVar1 = *(long *)(this + 0xb10);
      lVar6 = lVar7 + lVar5 * 0x28;
      *(bool *)(lVar6 + 0x19) = param_2;
      plVar3 = NativeMenu::singleton;
      if ((lVar1 == 0) || (*(uint *)(lVar1 + -8) < 2)) goto LAB_001078a4;
      if (lVar7 != 0) {
        lVar7 = *(long *)(lVar7 + -8);
        if (lVar7 <= lVar5) goto LAB_001079bb;
        if (*(long *)(lVar6 + 0x20) == 0) goto LAB_001078a4;
        local_38 = (**(code **)(*NativeMenu::singleton + 0x160))(NativeMenu::singleton,1);
        lVar6 = *(long *)(this + 0xa10);
        if (lVar6 != 0) {
          lVar7 = *(long *)(lVar6 + -8);
          if (lVar7 <= lVar5) goto LAB_001079bb;
          iVar4 = (**(code **)(*plVar3 + 0x230))(plVar3,&local_38,lVar6 + 0x20 + lVar5 * 0x28);
          if (-1 < iVar4) {
            (**(code **)(*plVar3 + 0x308))(plVar3,&local_38,iVar4,param_2);
          }
          goto LAB_001078a4;
        }
      }
      lVar7 = 0;
LAB_001079bb:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,lVar5,lVar7,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
  }
  _err_print_index_error
            ("set_menu_disabled","scene/gui/menu_bar.cpp",0x382,lVar5,lVar6,"p_menu",
             "menu_cache.size()","",false,false);
LAB_001078a4:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MenuBar::_get_popups() const */

void MenuBar::_get_popups(void)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int in_ESI;
  long lVar4;
  long in_RDI;
  long lVar5;
  
  iVar3 = 0;
  *(undefined8 *)(in_RDI + 8) = 0;
  do {
    iVar1 = Node::get_child_count(SUB41(in_ESI,0));
    if (iVar1 <= iVar3) {
      return;
    }
    lVar2 = Node::get_child(in_ESI,SUB41(iVar3,0));
    if (lVar2 != 0) {
      lVar2 = __dynamic_cast(lVar2,&Object::typeinfo,&PopupMenu::typeinfo,0);
      if (lVar2 != 0) {
        if (*(long *)(in_RDI + 8) == 0) {
          lVar4 = 1;
        }
        else {
          lVar4 = *(long *)(*(long *)(in_RDI + 8) + -8) + 1;
        }
        iVar1 = CowData<PopupMenu*>::resize<false>((CowData<PopupMenu*> *)(in_RDI + 8),lVar4);
        if (iVar1 == 0) {
          if (*(long *)(in_RDI + 8) == 0) {
            lVar5 = -1;
            lVar4 = 0;
          }
          else {
            lVar4 = *(long *)(*(long *)(in_RDI + 8) + -8);
            lVar5 = lVar4 + -1;
            if (-1 < lVar5) {
              CowData<PopupMenu*>::_copy_on_write((CowData<PopupMenu*> *)(in_RDI + 8));
              *(long *)(*(long *)(in_RDI + 8) + lVar5 * 8) = lVar2;
              goto LAB_00107ac2;
            }
          }
          _err_print_index_error
                    ("set","./core/templates/cowdata.h",0xcf,lVar5,lVar4,"p_index","size()","",false
                     ,false);
        }
        else {
          _err_print_error("push_back","./core/templates/vector.h",0x142,
                           "Condition \"err\" is true. Returning: true",0,0);
        }
      }
    }
LAB_00107ac2:
    iVar3 = iVar3 + 1;
  } while( true );
}



/* MenuBar::shortcut_input(Ref<InputEvent> const&) */

void __thiscall MenuBar::shortcut_input(MenuBar *this,Ref *param_1)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  char cVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long in_FS_OFFSET;
  long local_40 [2];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)param_1 == 0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("shortcut_input","scene/gui/menu_bar.cpp",0x96,
                       "Condition \"p_event.is_null()\" is true.",0,0);
      return;
    }
  }
  else {
    if (((((this[0x9f1] == (MenuBar)0x0) && (cVar4 = InputEvent::is_pressed(), cVar4 != '\0')) &&
         (lVar6 = *(long *)param_1, lVar6 != 0)) &&
        (((lVar5 = __dynamic_cast(lVar6,&Object::typeinfo,&InputEventKey::typeinfo,0), lVar5 != 0 ||
          (lVar5 = __dynamic_cast(lVar6,&Object::typeinfo,&InputEventJoypadButton::typeinfo,0),
          lVar5 != 0)) ||
         ((lVar5 = __dynamic_cast(lVar6,&Object::typeinfo,&InputEventAction::typeinfo,0), lVar5 != 0
          || (lVar6 = __dynamic_cast(lVar6,&Object::typeinfo,&InputEventShortcut::typeinfo,0),
             lVar6 != 0)))))) &&
       ((lVar6 = Node::get_parent(), lVar6 != 0 &&
        (cVar4 = CanvasItem::is_visible_in_tree(), cVar4 != '\0')))) {
      lVar5 = 0;
      _get_popups();
      lVar6 = local_40[0];
      if (local_40[0] != 0) {
        for (; lVar5 < *(long *)(lVar6 + -8); lVar5 = lVar5 + 1) {
          lVar2 = *(long *)(this + 0xa10);
          if (lVar2 == 0) {
            lVar7 = 0;
LAB_00107ca2:
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,lVar5,lVar7,"p_index","size()","",
                       false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          lVar7 = *(long *)(lVar2 + -8);
          if (lVar7 <= lVar5) goto LAB_00107ca2;
          lVar2 = lVar2 + lVar5 * 0x28;
          if (((*(char *)(lVar2 + 0x18) == '\0') && (*(char *)(lVar2 + 0x19) == '\0')) &&
             (cVar4 = PopupMenu::activate_item_by_event
                                (*(Ref **)(lVar6 + lVar5 * 8),SUB81(param_1,0)), cVar4 != '\0')) {
            Control::accept_event();
            CowData<PopupMenu*>::_unref((CowData<PopupMenu*> *)local_40);
            goto LAB_00107bb6;
          }
        }
        LOCK();
        plVar1 = (long *)(lVar6 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
            Memory::free_static((void *)(local_40[0] + -0x10),false);
            return;
          }
          goto LAB_00107ddd;
        }
      }
    }
LAB_00107bb6:
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
LAB_00107ddd:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MenuBar::bind_global_menu() */

void __thiscall MenuBar::bind_global_menu(MenuBar *this)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  long *plVar5;
  undefined *puVar6;
  char cVar7;
  undefined4 uVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  ulong *puVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  long in_FS_OFFSET;
  bool bVar16;
  int local_b0;
  undefined8 local_a8;
  long local_a0;
  undefined8 local_98;
  undefined8 local_90;
  String local_88 [8];
  CowData<char32_t> local_80 [8];
  long local_78;
  long local_70;
  undefined *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  cVar7 = Node::is_part_of_edited_scene();
  if (((cVar7 == '\0') &&
      (cVar7 = (**(code **)(*NativeMenu::singleton + 0x150))(NativeMenu::singleton,0),
      plVar5 = NativeMenu::singleton, cVar7 != '\0')) &&
     ((*(long *)(this + 0xb10) == 0 || (*(uint *)(*(long *)(this + 0xb10) + -8) < 2)))) {
    local_a8 = (**(code **)(*NativeMenu::singleton + 0x160))(NativeMenu::singleton,1);
    itos((long)&local_78);
    operator+((char *)&local_68,(String *)"__MenuBar#");
    if (*(undefined **)(this + 0xb10) != local_68) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xb10));
      puVar6 = local_68;
      local_68 = (undefined *)0x0;
      *(undefined **)(this + 0xb10) = puVar6;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    local_b0 = (**(code **)(*plVar5 + 0x340))(plVar5);
    local_a0 = 0;
    if ((-1 < *(int *)(this + 0x9f4)) && (0 < local_b0)) {
      iVar13 = 0;
      do {
        (**(code **)(*plVar5 + 0x260))(local_58,plVar5,&local_a8,iVar13);
        Variant::operator_cast_to_String((Variant *)&local_68);
        String::get_slice((char *)&local_78,(int)(CowData<char32_t> *)&local_68);
        puVar6 = local_68;
        if (local_68 != (undefined *)0x0) {
          LOCK();
          plVar1 = (long *)(local_68 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_68 = (undefined *)0x0;
            Memory::free_static(puVar6 + -0x10,false);
          }
        }
        if (Variant::needs_deinit[local_58[0]] == '\0') {
          if (local_78 != 0) goto LAB_00108043;
LAB_00108520:
          if (local_a0 != 0) goto LAB_00107f67;
        }
        else {
          Variant::_clear_internal();
          if (local_78 == 0) goto LAB_00108520;
LAB_00108043:
          if (*(uint *)(local_78 + -8) < 2) {
            lVar10 = local_a0;
            if (local_78 != local_a0) {
LAB_00107f67:
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,(CowData *)&local_78);
              goto LAB_00107f7a;
            }
          }
          else {
            cVar7 = String::operator!=((String *)&local_78,(String *)&local_a0);
            if (cVar7 != '\0') {
              uVar9 = String::to_int();
              uVar11 = (uint)uVar9 & 0xffffff;
              if (uVar11 < (uint)ObjectDB::slot_max) {
                while( true ) {
                  uVar4 = (ulong)local_68 >> 8;
                  local_68 = (undefined *)(uVar4 << 8);
                  LOCK();
                  bVar16 = (char)ObjectDB::spin_lock == '\0';
                  if (bVar16) {
                    ObjectDB::spin_lock._0_1_ = '\x01';
                  }
                  UNLOCK();
                  if (bVar16) break;
                  local_68 = (undefined *)(uVar4 << 8);
                  do {
                  } while ((char)ObjectDB::spin_lock != '\0');
                }
                puVar12 = (ulong *)((ulong)uVar11 * 0x10 + ObjectDB::object_slots);
                if ((uVar9 >> 0x18 & 0x7fffffffff) == (*puVar12 & 0x7fffffffff)) {
                  uVar9 = puVar12[1];
                  ObjectDB::spin_lock._0_1_ = '\0';
                  if (((uVar9 != 0) &&
                      (lVar10 = __dynamic_cast(uVar9,&Object::typeinfo,&typeinfo,0), lVar10 != 0))
                     && (*(int *)(this + 0x9f4) <= *(int *)(lVar10 + 0x9f4))) {
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
                    local_b0 = iVar13;
                    break;
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
            }
            if (local_a0 != local_78) goto LAB_00107f67;
LAB_00107f7a:
            lVar10 = local_78;
            if (local_78 == 0) goto LAB_00107fa6;
          }
          lVar14 = local_78;
          LOCK();
          plVar1 = (long *)(lVar10 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_78 = 0;
            Memory::free_static((void *)(lVar14 + -0x10),false);
          }
        }
LAB_00107fa6:
        iVar13 = iVar13 + 1;
      } while (local_b0 != iVar13);
    }
    lVar14 = 0;
    _get_popups();
    lVar10 = *(long *)(this + 0xa10);
    lVar2 = local_70;
    for (lVar15 = 0; (lVar10 != 0 && (lVar15 < *(long *)(lVar10 + -8))); lVar15 = lVar15 + 1) {
      if (lVar2 == 0) {
LAB_0010833c:
        lVar10 = 0;
LAB_0010833f:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar15,lVar10,"p_index","size()","",false
                   ,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar10 = *(long *)(lVar2 + -8);
      if (lVar10 <= lVar15) goto LAB_0010833f;
      local_70 = lVar2;
      local_98 = PopupMenu::bind_global_menu();
      lVar10 = *(long *)(lVar2 + -8);
      if (lVar10 <= lVar15) goto LAB_0010833f;
      cVar7 = PopupMenu::is_system_menu();
      if (cVar7 == '\0') {
        pcVar3 = *(code **)(*plVar5 + 0x1d8);
        itos((long)local_80);
        local_90 = 0;
        local_68 = &_LC133;
        local_60 = 1;
        String::parse_latin1((StrRange *)&local_90);
        String::operator+(local_88,(String *)(this + 0xb10));
        String::operator+((String *)&local_68,local_88);
        Variant::Variant((Variant *)local_58,(String *)&local_68);
        lVar2 = *(long *)(this + 0xa10);
        if (lVar2 != 0) {
          lVar10 = *(long *)(lVar2 + -8);
          if (lVar10 <= lVar15) goto LAB_0010833f;
          uVar8 = (*pcVar3)(plVar5,&local_a8,lVar2 + lVar14,&local_98,(Variant *)local_58,
                            local_b0 + (int)lVar15);
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
          CowData<char32_t>::_unref(local_80);
          if (*(long *)(this + 0xa10) == 0) goto LAB_00108536;
          lVar10 = *(long *)(*(long *)(this + 0xa10) + -8);
          if (lVar10 <= lVar15) goto LAB_00108539;
          CowData<MenuBar::Menu>::_copy_on_write((CowData<MenuBar::Menu> *)(this + 0xa10));
          lVar2 = *(long *)(this + 0xa10);
          *(undefined8 *)(lVar2 + lVar14 + 0x20) = local_98;
          if (lVar2 != 0) {
            lVar10 = *(long *)(lVar2 + -8);
            if (lVar10 <= lVar15) goto LAB_0010833f;
            (**(code **)(*plVar5 + 0x310))
                      (plVar5,&local_a8,uVar8,*(undefined1 *)(lVar2 + lVar14 + 0x18));
            lVar2 = *(long *)(this + 0xa10);
            if (lVar2 != 0) {
              lVar10 = *(long *)(lVar2 + -8);
              if (lVar10 <= lVar15) goto LAB_0010833f;
              (**(code **)(*plVar5 + 0x308))
                        (plVar5,&local_a8,uVar8,*(undefined1 *)(lVar2 + 0x19 + lVar14));
              lVar2 = *(long *)(this + 0xa10);
              if (lVar2 != 0) {
                lVar10 = *(long *)(lVar2 + -8);
                if (lVar10 <= lVar15) goto LAB_0010833f;
                (**(code **)(*plVar5 + 0x318))(plVar5,&local_a8,uVar8,lVar2 + 8 + lVar14);
                lVar10 = *(long *)(this + 0xa10);
                goto LAB_0010821e;
              }
            }
          }
        }
        goto LAB_0010833c;
      }
      if (*(long *)(this + 0xa10) == 0) {
LAB_00108536:
        lVar10 = 0;
LAB_00108539:
        _err_print_index_error
                  ("operator[]","./core/templates/vector.h",0x38,lVar15,lVar10,"p_index",
                   "((Vector<T> *)(this))->_cowdata.size()","",false,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar10 = *(long *)(*(long *)(this + 0xa10) + -8);
      if (lVar10 <= lVar15) goto LAB_00108539;
      CowData<MenuBar::Menu>::_copy_on_write((CowData<MenuBar::Menu> *)(this + 0xa10));
      lVar10 = *(long *)(this + 0xa10);
      *(undefined8 *)(lVar10 + 0x20 + lVar14) = 0;
LAB_0010821e:
      lVar14 = lVar14 + 0x28;
      lVar2 = local_70;
    }
    CowData<PopupMenu*>::_unref((CowData<PopupMenu*> *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MenuBar::unbind_global_menu() [clone .part.0] */

void __thiscall MenuBar::unbind_global_menu(MenuBar *this)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined8 local_60 [2];
  long local_50;
  long local_40;
  
  plVar1 = NativeMenu::singleton;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = (**(code **)(*NativeMenu::singleton + 0x160))(NativeMenu::singleton,1);
  _get_popups();
  lVar3 = local_50;
  if ((*(long *)(this + 0xa10) == 0) ||
     (uVar8 = (int)*(undefined8 *)(*(long *)(this + 0xa10) + -8) - 1, (int)uVar8 < 0)) {
    local_60[0] = 0;
    if (*(long *)(this + 0xb10) != 0) {
LAB_001087e1:
      local_60[0] = 0;
      CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xb10));
      *(undefined8 *)(this + 0xb10) = 0;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
    if (lVar3 == 0) goto LAB_00108811;
  }
  else {
    uVar7 = (ulong)uVar8;
    lVar9 = 0;
    if (local_50 == 0) {
LAB_00108648:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,uVar7,lVar9,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    do {
      lVar9 = *(long *)(lVar3 + -8);
      if (lVar9 <= (long)uVar7) goto LAB_00108648;
      cVar4 = PopupMenu::is_system_menu();
      if (cVar4 == '\0') {
        lVar6 = *(long *)(this + 0xa10);
        if (lVar6 == 0) {
          lVar9 = 0;
          goto LAB_00108648;
        }
        lVar9 = *(long *)(lVar6 + -8);
        if (lVar9 <= (long)uVar7) goto LAB_00108648;
        lVar6 = lVar6 + uVar7 * 0x28;
        if ((*(long *)(lVar6 + 0x20) != 0) &&
           (iVar5 = (**(code **)(*plVar1 + 0x230))(plVar1,&local_68,lVar6 + 0x20), -1 < iVar5)) {
          (**(code **)(*plVar1 + 0x350))(plVar1,&local_68,iVar5);
        }
        lVar9 = *(long *)(lVar3 + -8);
        if (lVar9 <= (long)uVar7) goto LAB_00108648;
        PopupMenu::unbind_global_menu();
        if (*(long *)(this + 0xa10) == 0) {
          lVar9 = 0;
LAB_00108783:
          _err_print_index_error
                    ("operator[]","./core/templates/vector.h",0x38,uVar7,lVar9,"p_index",
                     "((Vector<T> *)(this))->_cowdata.size()","",false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        lVar9 = *(long *)(*(long *)(this + 0xa10) + -8);
        if (lVar9 <= (long)uVar7) goto LAB_00108783;
        CowData<MenuBar::Menu>::_copy_on_write((CowData<MenuBar::Menu> *)(this + 0xa10));
        *(undefined8 *)(*(long *)(this + 0xa10) + 0x20 + uVar7 * 0x28) = 0;
      }
      uVar7 = uVar7 - 1;
    } while (-1 < (int)uVar7);
    local_60[0] = 0;
    if (*(long *)(this + 0xb10) != 0) goto LAB_001087e1;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
  }
  LOCK();
  plVar1 = (long *)(lVar3 + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    Memory::free_static((void *)(local_50 + -0x10),false);
  }
LAB_00108811:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MenuBar::unbind_global_menu() */

void __thiscall MenuBar::unbind_global_menu(MenuBar *this)

{
  if ((*(long *)(this + 0xb10) != 0) && (1 < *(uint *)(*(long *)(this + 0xb10) + -8))) {
    unbind_global_menu(this);
    return;
  }
  return;
}



/* MenuBar::set_prefer_global_menu(bool) */

void __thiscall MenuBar::set_prefer_global_menu(MenuBar *this,bool param_1)

{
  if (this[0x9f2] != (MenuBar)param_1) {
    this[0x9f2] = (MenuBar)param_1;
    if (param_1) {
      bind_global_menu(this);
      return;
    }
    if ((*(long *)(this + 0xb10) != 0) && (1 < *(uint *)(*(long *)(this + 0xb10) + -8))) {
      unbind_global_menu(this);
      return;
    }
  }
  return;
}



/* MenuBar::set_start_index(int) */

void __thiscall MenuBar::set_start_index(MenuBar *this,int param_1)

{
  if (*(int *)(this + 0x9f4) != param_1) {
    *(int *)(this + 0x9f4) = param_1;
    if ((*(long *)(this + 0xb10) != 0) && (1 < *(uint *)(*(long *)(this + 0xb10) + -8))) {
      unbind_global_menu(this);
      bind_global_menu(this);
      return;
    }
  }
  return;
}



/* MenuBar::_refresh_menu_names() */

void __thiscall MenuBar::_refresh_menu_names(MenuBar *this)

{
  long *plVar1;
  CowData *pCVar2;
  long lVar3;
  char *__s;
  code *pcVar4;
  long *plVar5;
  char cVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long in_FS_OFFSET;
  int local_b4;
  undefined8 local_88;
  long local_80;
  long local_78;
  long local_70 [2];
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  plVar5 = NativeMenu::singleton;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((*(long *)(this + 0xb10) == 0) ||
      (local_b4 = (int)*(undefined8 *)(*(long *)(this + 0xb10) + -8), local_b4 == 0)) ||
     (local_b4 = local_b4 + -1, local_b4 == 0)) {
    local_88 = 0;
    local_b4 = 0;
  }
  else {
    local_88 = (**(code **)(*NativeMenu::singleton + 0x160))(NativeMenu::singleton,1);
  }
  lVar10 = 0;
  _get_popups();
  lVar8 = local_60;
  do {
    if ((lVar8 == 0) || (*(long *)(lVar8 + -8) <= lVar10)) {
      CowData<PopupMenu*>::_unref((CowData<PopupMenu*> *)&local_60);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    local_60 = lVar8;
    Window::get_title();
    if ((local_78 == 0) || (*(uint *)(local_78 + -8) < 2)) {
      lVar9 = *(long *)(lVar8 + -8);
      if (lVar9 <= lVar10) goto LAB_00108d93;
      Node::get_name();
      if (local_70[0] == 0) {
        local_80 = 0;
        goto LAB_00108a62;
      }
      __s = *(char **)(local_70[0] + 8);
      local_80 = 0;
      if (__s == (char *)0x0) {
        if (*(long *)(local_70[0] + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_80,(CowData *)(local_70[0] + 0x10));
          goto LAB_00108a49;
        }
        if (StringName::configured == '\0') goto LAB_00108a62;
      }
      else {
        local_50 = strlen(__s);
        local_58 = __s;
        String::parse_latin1((StrRange *)&local_80);
LAB_00108a49:
        if ((StringName::configured == '\0') || (local_70[0] == 0)) goto LAB_00108a62;
      }
      StringName::unref();
    }
    else {
      lVar9 = *(long *)(lVar8 + -8);
      if (lVar9 <= lVar10) goto LAB_00108d93;
      Window::get_title();
    }
LAB_00108a62:
    lVar9 = local_78;
    if (local_78 != 0) {
      LOCK();
      plVar1 = (long *)(local_78 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_78 = 0;
        Memory::free_static((void *)(lVar9 + -0x10),false);
      }
    }
    lVar9 = *(long *)(lVar8 + -8);
    if (lVar9 <= lVar10) goto LAB_00108d93;
    plVar1 = *(long **)(lVar8 + lVar10 * 8);
    pcVar4 = *(code **)(*plVar1 + 0xa0);
    StringName::StringName((StringName *)local_70,"_menu_name",false);
    cVar6 = (*pcVar4)(plVar1);
    if (cVar6 == '\0') {
      get_menu_title((int)(CowData<char32_t> *)&local_58);
      cVar6 = String::operator!=((String *)&local_80,(String *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      if ((StringName::configured != '\0') && (local_70[0] != 0)) {
        StringName::unref();
      }
      if (cVar6 != '\0') {
        if (*(long *)(this + 0xa10) != 0) {
          lVar8 = *(long *)(*(long *)(this + 0xa10) + -8);
          if (lVar8 <= lVar10) goto LAB_00108e63;
          CowData<MenuBar::Menu>::_copy_on_write((CowData<MenuBar::Menu> *)(this + 0xa10));
          lVar8 = *(long *)(this + 0xa10);
          lVar3 = lVar10 * 0x28;
          if (*(long *)(lVar8 + lVar3) != local_80) {
            CowData<char32_t>::_ref((CowData<char32_t> *)(lVar8 + lVar3),(CowData *)&local_80);
            lVar8 = *(long *)(this + 0xa10);
          }
          if (lVar8 != 0) {
            lVar8 = *(long *)(lVar8 + -8);
            if (lVar8 <= lVar10) goto LAB_00108e63;
            CowData<MenuBar::Menu>::_copy_on_write((CowData<MenuBar::Menu> *)(this + 0xa10));
            shape(this,(Menu *)(*(long *)(this + 0xa10) + lVar3));
            CanvasItem::queue_redraw();
            if (local_b4 != 0) {
              lVar8 = *(long *)(this + 0xa10);
              if (lVar8 == 0) {
LAB_00108d90:
                lVar9 = 0;
LAB_00108d93:
                _err_print_index_error
                          ("get","./core/templates/cowdata.h",0xdb,lVar10,lVar9,"p_index","size()",
                           "",false,true);
                _err_flush_stdout();
                    /* WARNING: Does not return */
                pcVar4 = (code *)invalidInstructionException();
                (*pcVar4)();
              }
              lVar9 = *(long *)(lVar8 + -8);
              if (lVar9 <= lVar10) goto LAB_00108d93;
              if (*(long *)(lVar8 + lVar3 + 0x20) != 0) {
                iVar7 = (**(code **)(*plVar5 + 0x230))(plVar5,&local_88,lVar8 + lVar3 + 0x20);
                if (-1 < iVar7) {
                  pcVar4 = *(code **)(*plVar5 + 0x2f0);
                  StringName::StringName((StringName *)&local_78,"",false);
                  lVar8 = *(long *)(this + 0xa10);
                  if (lVar8 == 0) goto LAB_00108d90;
                  lVar9 = *(long *)(lVar8 + -8);
                  if (lVar9 <= lVar10) goto LAB_00108d93;
                  pCVar2 = (CowData *)(lVar8 + lVar3);
                  cVar6 = Node::can_auto_translate();
                  if (cVar6 == '\0') {
                    local_70[0] = 0;
                    if (*(long *)pCVar2 != 0) {
                      CowData<char32_t>::_ref((CowData<char32_t> *)local_70,pCVar2);
                    }
                  }
                  else {
                    StringName::StringName((StringName *)&local_58,(String *)pCVar2,false);
                    Object::tr((StringName *)local_70,(StringName *)this);
                    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
                      StringName::unref();
                    }
                  }
                  (*pcVar4)(plVar5,&local_88,iVar7,(StringName *)local_70);
                  CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
                  if ((StringName::configured != '\0') && (local_78 != 0)) {
                    StringName::unref();
                  }
                }
              }
            }
            goto LAB_00108ae7;
          }
        }
        lVar8 = 0;
LAB_00108e63:
        _err_print_index_error
                  ("operator[]","./core/templates/vector.h",0x38,lVar10,lVar8,"p_index",
                   "((Vector<T> *)(this))->_cowdata.size()","",false,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
    }
    else if ((StringName::configured != '\0') && (local_70[0] != 0)) {
      StringName::unref();
    }
LAB_00108ae7:
    lVar8 = local_80;
    if (local_80 != 0) {
      LOCK();
      plVar1 = (long *)(local_80 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_80 = 0;
        Memory::free_static((void *)(lVar8 + -0x10),false);
      }
    }
    lVar10 = lVar10 + 1;
    lVar8 = local_60;
  } while( true );
}



/* MenuBar::get_menu_idx_from_control(PopupMenu*) const */

ulong __thiscall MenuBar::get_menu_idx_from_control(MenuBar *this,PopupMenu *param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  MenuBar *pMVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  long local_30;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (PopupMenu *)0x0) {
    _err_print_error("get_menu_idx_from_control","scene/gui/menu_bar.cpp",0x219,
                     "Parameter \"p_child\" is null.",0,0);
  }
  else {
    pMVar4 = (MenuBar *)Node::get_parent();
    if (pMVar4 == this) {
      _get_popups();
      if (local_30 != 0) {
        uVar3 = 0;
        do {
          uVar5 = uVar3;
          if (*(long *)(local_30 + -8) <= (long)uVar5) {
            uVar5 = 0xffffffff;
            break;
          }
          uVar3 = uVar5 + 1;
        } while (*(PopupMenu **)(local_30 + uVar5 * 8) != param_1);
        LOCK();
        plVar1 = (long *)(local_30 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_30 + -0x10),false);
          uVar5 = uVar5 & 0xffffffff;
        }
        goto LAB_00108f6e;
      }
    }
    else {
      _err_print_error("get_menu_idx_from_control","scene/gui/menu_bar.cpp",0x21a,
                       "Condition \"p_child->get_parent() != this\" is true. Returning: -1",0,0);
    }
  }
  uVar5 = 0xffffffff;
LAB_00108f6e:
  if (lVar2 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}



/* MenuBar::_popup_changed(ObjectID) */

void __thiscall MenuBar::_popup_changed(MenuBar *this,ulong param_2)

{
  CowData<char32_t> *this_00;
  ulong uVar1;
  char *__s;
  code *pcVar2;
  int iVar3;
  PopupMenu *pPVar4;
  long lVar5;
  uint uVar6;
  ulong *puVar7;
  long lVar8;
  long in_FS_OFFSET;
  bool bVar9;
  char *local_a0;
  long local_98;
  long local_90;
  char *local_88;
  size_t local_80;
  int local_78 [8];
  int local_58 [6];
  long local_40;
  
  uVar6 = (uint)param_2 & 0xffffff;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((uint)ObjectDB::slot_max <= uVar6) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("get_instance","./core/object/object.h",0x418,
                       "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
      return;
    }
    goto LAB_00109476;
  }
  while( true ) {
    uVar1 = (ulong)local_88 >> 8;
    local_88 = (char *)(uVar1 << 8);
    LOCK();
    bVar9 = (char)ObjectDB::spin_lock == '\0';
    if (bVar9) {
      ObjectDB::spin_lock._0_1_ = '\x01';
    }
    UNLOCK();
    if (bVar9) break;
    local_88 = (char *)(uVar1 << 8);
    do {
    } while ((char)ObjectDB::spin_lock != '\0');
  }
  puVar7 = (ulong *)((ulong)uVar6 * 0x10 + ObjectDB::object_slots);
  if ((param_2 >> 0x18 & 0x7fffffffff) == (*puVar7 & 0x7fffffffff)) {
    uVar1 = puVar7[1];
    ObjectDB::spin_lock._0_1_ = '\0';
    if ((uVar1 != 0) &&
       (pPVar4 = (PopupMenu *)__dynamic_cast(uVar1,&Object::typeinfo,&PopupMenu::typeinfo,0),
       pPVar4 != (PopupMenu *)0x0)) {
      iVar3 = get_menu_idx_from_control(this,pPVar4);
      Window::get_title();
      if ((local_98 == 0) || (*(uint *)(local_98 + -8) < 2)) {
        Node::get_name();
        if (local_90 == 0) {
          local_a0 = (char *)0x0;
        }
        else {
          __s = *(char **)(local_90 + 8);
          local_a0 = (char *)0x0;
          if (__s == (char *)0x0) {
            if (*(long *)(local_90 + 0x10) != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,(CowData *)(local_90 + 0x10));
              goto LAB_0010916b;
            }
            if (StringName::configured == '\0') goto LAB_00109184;
          }
          else {
            local_80 = strlen(__s);
            local_88 = __s;
            String::parse_latin1((StrRange *)&local_a0);
LAB_0010916b:
            if ((StringName::configured == '\0') || (local_90 == 0)) goto LAB_00109184;
          }
          StringName::unref();
        }
      }
      else {
        Window::get_title();
      }
LAB_00109184:
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      pcVar2 = *(code **)(*(long *)pPVar4 + 0xb8);
      Variant::Variant((Variant *)local_78,(String *)&local_a0);
      StringName::StringName((StringName *)&local_90,"_menu_name",false);
      (*pcVar2)(local_58,pPVar4,(StringName *)&local_90,(Variant *)local_78);
      Variant::operator_cast_to_String((Variant *)&local_88);
      if (local_a0 != local_88) {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
        local_a0 = local_88;
        local_88 = (char *)0x0;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_90 != 0)) {
        StringName::unref();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      lVar8 = (long)iVar3;
      lVar5 = *(long *)(this + 0xa10);
      if (lVar8 < 0) {
        if (lVar5 != 0) {
          lVar5 = *(long *)(lVar5 + -8);
          goto LAB_0010936a;
        }
      }
      else if (lVar5 != 0) {
        lVar5 = *(long *)(lVar5 + -8);
        if (lVar5 <= lVar8) goto LAB_0010936a;
        CowData<MenuBar::Menu>::_copy_on_write((CowData<MenuBar::Menu> *)(this + 0xa10));
        lVar5 = *(long *)(this + 0xa10);
        this_00 = (CowData<char32_t> *)(lVar5 + lVar8 * 0x28);
        if (*(char **)this_00 != local_a0) {
          CowData<char32_t>::_ref(this_00,(CowData *)&local_a0);
          lVar5 = *(long *)(this + 0xa10);
        }
        if (lVar5 != 0) {
          lVar5 = *(long *)(lVar5 + -8);
          if (lVar5 <= lVar8) goto LAB_0010936a;
          CowData<MenuBar::Menu>::_copy_on_write((CowData<MenuBar::Menu> *)(this + 0xa10));
          shape(this,(Menu *)(*(long *)(this + 0xa10) + lVar8 * 0x28));
          Control::update_minimum_size();
          CanvasItem::queue_redraw();
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
          goto LAB_00109305;
        }
      }
      lVar5 = 0;
LAB_0010936a:
      _err_print_index_error
                ("operator[]","./core/templates/vector.h",0x38,lVar8,lVar5,"p_index",
                 "((Vector<T> *)(this))->_cowdata.size()","",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
  }
  else {
    ObjectDB::spin_lock._0_1_ = '\0';
  }
LAB_00109305:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00109476:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MenuBar::get_menu_popup(int) const */

long __thiscall MenuBar::get_menu_popup(MenuBar *this,int param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long in_FS_OFFSET;
  long local_20;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  _get_popups();
  if (param_1 < 0) {
    lVar3 = local_20;
    if (local_20 == 0) goto LAB_001094c8;
LAB_00109510:
    lVar3 = 0;
  }
  else {
    if (local_20 == 0) {
      lVar3 = 0;
      goto LAB_001094c8;
    }
    if (*(long *)(local_20 + -8) <= (long)param_1) goto LAB_00109510;
    lVar3 = *(long *)(local_20 + (long)param_1 * 8);
  }
  LOCK();
  plVar1 = (long *)(local_20 + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    Memory::free_static((void *)(local_20 + -0x10),false);
  }
LAB_001094c8:
  if (lVar2 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar3;
}



/* MenuBar::_open_popup(int, bool) */

void __thiscall MenuBar::_open_popup(MenuBar *this,int param_1,bool param_2)

{
  char cVar1;
  int iVar2;
  long *plVar3;
  int iVar4;
  long lVar5;
  long in_FS_OFFSET;
  undefined8 uVar6;
  float fVar8;
  undefined8 uVar7;
  float fVar9;
  undefined1 auVar10 [16];
  float local_68;
  float fStack_64;
  float local_60 [2];
  undefined8 local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar5 = *(long *)(this + 0xa10);
  if (param_1 < 0) {
    if (lVar5 == 0) goto LAB_001097d0;
    lVar5 = *(long *)(lVar5 + -8);
LAB_00109779:
    _err_print_index_error
              ("_open_popup","scene/gui/menu_bar.cpp",0x72,(long)param_1,lVar5,"p_index",
               "menu_cache.size()","",false,false);
  }
  else {
    if (lVar5 == 0) {
LAB_001097d0:
      lVar5 = 0;
      goto LAB_00109779;
    }
    lVar5 = *(long *)(lVar5 + -8);
    if (lVar5 <= param_1) goto LAB_00109779;
    plVar3 = (long *)get_menu_popup(this,param_1);
    cVar1 = Window::is_visible();
    if (cVar1 != '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        Window::hide();
        return;
      }
      goto LAB_001097d5;
    }
    auVar10 = _get_menu_item_rect(this,param_1);
    CanvasItem::get_canvas_transform();
    uVar6 = Transform2D::get_scale();
    fVar8 = (float)((ulong)uVar6 >> 0x20);
    uVar7 = Control::get_screen_position();
    *(int *)(this + 0xa20) = param_1;
    local_68 = auVar10._0_4_ * (float)uVar6 + (float)uVar7;
    fStack_64 = auVar10._4_4_ * fVar8 + (float)((ulong)uVar7 >> 0x20);
    local_60[1] = 0.0;
    fVar9 = (float)uVar6 * auVar10._8_4_;
    local_60[0] = fVar9;
    local_58 = Vector2::operator_cast_to_Vector2i((Vector2 *)local_60);
    Window::set_size((Vector2i *)plVar3);
    _local_68 = CONCAT44(fVar8 * auVar10._12_4_ + fStack_64,local_68);
    cVar1 = (**(code **)(*(long *)this + 0x340))(this);
    if (cVar1 != '\0') {
      iVar4 = Window::get_size();
      _local_68 = CONCAT44(fStack_64,(fVar9 - (float)iVar4) + local_68);
    }
    local_58 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_68);
    Window::set_position((Vector2i *)plVar3);
    local_58 = 0;
    local_50 = 0;
    (**(code **)(*plVar3 + 0x240))(plVar3,&local_58);
    if (param_2) {
      iVar4 = 0;
      while( true ) {
        iVar2 = PopupMenu::get_item_count();
        if (iVar2 <= iVar4) break;
        cVar1 = PopupMenu::is_item_disabled((int)plVar3);
        if (cVar1 == '\0') {
          PopupMenu::set_focused_item((int)plVar3);
          break;
        }
        iVar4 = iVar4 + 1;
      }
    }
    CanvasItem::queue_redraw();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001097d5:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MenuBar::gui_input(Ref<InputEvent> const&) */

void __thiscall MenuBar::gui_input(MenuBar *this,Ref *param_1)

{
  pthread_mutex_t *__mutex;
  StringName *pSVar1;
  char *__s;
  code *pcVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  Object *pOVar7;
  Object *pOVar8;
  long *plVar9;
  long lVar10;
  String *this_00;
  bool bVar11;
  int iVar12;
  Ref *pRVar13;
  long lVar14;
  MenuBar *this_01;
  MenuBar *this_02;
  long lVar15;
  long lVar16;
  CowData *pCVar17;
  long in_FS_OFFSET;
  undefined8 uVar18;
  CowData<char32_t> *pCStack_188;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long lStack_158;
  long lStack_150;
  char *pcStack_148;
  size_t sStack_140;
  int aiStack_138 [6];
  long lStack_120;
  MenuBar *pMStack_110;
  pthread_mutex_t *ppStack_108;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  MenuBar *pMStack_88;
  Ref *pRStack_80;
  long local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)param_1 == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("gui_input","scene/gui/menu_bar.cpp",0x25,
                       "Condition \"p_event.is_null()\" is true.",0,0);
      return;
    }
    goto LAB_00109dd6;
  }
  pRVar13 = param_1;
  cVar3 = is_native_menu(this);
  iVar6 = (int)pRVar13;
  if (cVar3 != '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
    goto LAB_00109dd6;
  }
  uVar4 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x9c8));
  if (uVar4 == 0) {
    pSVar1 = *(StringName **)param_1;
    StringName::StringName((StringName *)&local_50,"ui_left",false);
    bVar11 = SUB81((StringName *)&local_50,0);
    cVar3 = InputEvent::is_action(pSVar1,bVar11);
    if ((cVar3 == '\0') || (cVar3 = InputEvent::is_pressed(), cVar3 == '\0')) {
      if ((StringName::configured != '\0') && (local_50 != 0)) {
        StringName::unref();
      }
      pSVar1 = *(StringName **)param_1;
      StringName::StringName((StringName *)&local_50,"ui_right",false);
      cVar3 = InputEvent::is_action(pSVar1,bVar11);
      if ((cVar3 == '\0') || (cVar3 = InputEvent::is_pressed(), cVar3 == '\0')) {
        if ((StringName::configured != '\0') && (local_50 != 0)) {
          StringName::unref();
        }
        lVar10 = *(long *)param_1;
        if (lVar10 != 0) {
          pOVar7 = (Object *)
                   __dynamic_cast(lVar10,&Object::typeinfo,&InputEventMouseMotion::typeinfo,0);
          if (pOVar7 == (Object *)0x0) {
LAB_0010993c:
            pOVar8 = (Object *)
                     __dynamic_cast(lVar10,&Object::typeinfo,&InputEventMouseButton::typeinfo,0);
            if ((pOVar8 != (Object *)0x0) && (cVar3 = RefCounted::reference(), cVar3 != '\0')) {
              cVar3 = InputEvent::is_pressed();
              if ((cVar3 != '\0') &&
                 ((iVar6 = InputEventMouseButton::get_button_index(), iVar6 == 1 ||
                  (iVar6 = InputEventMouseButton::get_button_index(), iVar6 == 2)))) {
                local_48 = InputEventMouse::get_position();
                iVar6 = _get_index_at_point(this,(Vector2 *)&local_48);
                if (-1 < iVar6) {
                  _open_popup(this,iVar6,false);
                }
              }
              cVar3 = RefCounted::unreference();
              if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar8), cVar3 != '\0')) {
                (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
                Memory::free_static(pOVar8,false);
              }
            }
            if (pOVar7 == (Object *)0x0) goto LAB_001099b8;
          }
          else {
            cVar3 = RefCounted::reference();
            if (cVar3 == '\0') {
              lVar10 = *(long *)param_1;
              if (lVar10 == 0) goto LAB_001099b8;
              pOVar7 = (Object *)0x0;
              goto LAB_0010993c;
            }
            iVar6 = *(int *)(this + 0xa1c);
            local_48 = InputEventMouse::get_position();
            iVar5 = _get_index_at_point(this,(Vector2 *)&local_48);
            *(int *)(this + 0xa18) = iVar5;
            if (iVar5 < 0) {
              iVar5 = *(int *)(this + 0xa1c);
            }
            else {
              *(int *)(this + 0xa1c) = iVar5;
            }
            if (iVar6 != iVar5) {
              CanvasItem::queue_redraw();
            }
            lVar10 = *(long *)param_1;
            if (lVar10 != 0) goto LAB_0010993c;
          }
          cVar3 = RefCounted::unreference();
          if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar7), cVar3 != '\0')) {
            (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
            Memory::free_static(pOVar7,false);
          }
        }
      }
      else {
        if ((StringName::configured != '\0') && (local_50 != 0)) {
          StringName::unref();
        }
        iVar6 = *(int *)(this + 0xa1c);
        lVar10 = *(long *)(this + 0xa10);
        iVar5 = iVar6;
        if (iVar6 < 0) {
          if (lVar10 == 0) {
            iVar5 = -1;
          }
          else {
            iVar5 = (int)*(undefined8 *)(lVar10 + -8) + -1;
          }
        }
        iVar12 = iVar6 + 1;
        lVar14 = (long)iVar12;
        if (lVar10 == 0) {
          if (iVar12 < 0) {
            if (iVar5 != iVar12) {
              lVar16 = 0;
              goto LAB_00109af0;
            }
          }
          else if (iVar5 != 0) {
            lVar16 = 0;
            lVar14 = 0;
LAB_00109af0:
            pRStack_80 = (Ref *)0x109b08;
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,lVar14,lVar16,"p_index","size()","",
                       false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
        }
        else {
          lVar16 = *(long *)(lVar10 + -8);
          while( true ) {
            if (lVar14 < lVar16) {
              if (iVar5 == iVar12) goto LAB_001099b8;
              if (iVar12 < 0) goto LAB_00109af0;
              lVar14 = lVar10 + lVar14 * 0x28;
            }
            else {
              if (iVar5 == 0) goto LAB_001099b8;
              if (lVar16 < 1) {
                lVar14 = 0;
                goto LAB_00109af0;
              }
              iVar12 = 0;
              lVar14 = lVar10;
            }
            if ((*(char *)(lVar14 + 0x18) == '\0') && (*(char *)(lVar14 + 0x19) == '\0')) break;
            iVar12 = iVar12 + 1;
            lVar14 = (long)iVar12;
          }
          if (iVar6 != iVar12) {
            iVar6 = *(int *)(this + 0xa20);
            *(ulong *)(this + 0xa18) = CONCAT44(iVar12,iVar12);
            goto joined_r0x00109a87;
          }
        }
      }
    }
    else {
      if ((StringName::configured != '\0') && (local_50 != 0)) {
        StringName::unref();
      }
      iVar6 = *(int *)(this + 0xa1c);
      iVar12 = iVar6;
      iVar5 = 0;
      if (-1 < iVar6) {
        iVar5 = iVar6;
      }
      do {
        iVar12 = iVar12 + -1;
        if (iVar12 < 0) {
          lVar10 = *(long *)(this + 0xa10);
          if (lVar10 == 0) {
            lVar14 = -1;
LAB_00109c47:
            lVar16 = 0;
          }
          else {
            lVar16 = *(long *)(lVar10 + -8);
            iVar12 = (int)lVar16 + -1;
            if (iVar5 == iVar12) goto LAB_001099b8;
            lVar14 = (long)iVar12;
            if (-1 < lVar14) goto LAB_00109a48;
LAB_00109ace:
            lVar16 = *(long *)(lVar10 + -8);
          }
          goto LAB_00109af0;
        }
        if (iVar5 == iVar12) goto LAB_001099b8;
        lVar10 = *(long *)(this + 0xa10);
        lVar14 = (long)iVar12;
        if (lVar10 == 0) goto LAB_00109c47;
        lVar16 = *(long *)(lVar10 + -8);
LAB_00109a48:
        if (lVar16 <= lVar14) goto LAB_00109ace;
        lVar10 = lVar10 + lVar14 * 0x28;
      } while ((*(char *)(lVar10 + 0x18) != '\0') || (*(char *)(lVar10 + 0x19) != '\0'));
      if (iVar6 != iVar12) {
        iVar6 = *(int *)(this + 0xa20);
        *(ulong *)(this + 0xa18) = CONCAT44(iVar12,iVar12);
joined_r0x00109a87:
        if (-1 < iVar6) {
          get_menu_popup(this,iVar6);
          Window::hide();
          iVar12 = *(int *)(this + 0xa1c);
        }
        _open_popup(this,iVar12,true);
      }
    }
LAB_001099b8:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      pthread_mutex_unlock((pthread_mutex_t *)(this + 0x9c8));
      return;
    }
LAB_00109dd6:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  this_01 = (MenuBar *)(ulong)uVar4;
  std::__throw_system_error(uVar4);
  plVar9 = NativeMenu::singleton;
  lStack_98 = *(long *)(in_FS_OFFSET + 0x28);
  pMStack_88 = this;
  pRStack_80 = param_1;
  if (iVar6 < 0x32) {
    if (9 < iVar6) {
      iVar6 = iVar6 + -10;
      switch(iVar6) {
      case 0:
        if ((*(long *)(this_01 + 0xa10) != 0) && (0 < *(int *)(*(long *)(this_01 + 0xa10) + -8))) {
          _refresh_menu_names(this_01);
        }
        cVar3 = is_native_menu(this_01);
        if (cVar3 != '\0') {
LAB_0010a028:
          if (lStack_98 == *(long *)(in_FS_OFFSET + 0x28)) {
            bind_global_menu(this_01);
            return;
          }
          goto LAB_0010a376;
        }
        break;
      case 1:
switchD_00109e41_caseD_1:
        if ((*(long *)(this_01 + 0xb10) != 0) && (1 < *(uint *)(*(long *)(this_01 + 0xb10) + -8))) {
          if (lStack_98 == *(long *)(in_FS_OFFSET + 0x28)) {
            unbind_global_menu(this_01);
            return;
          }
          goto LAB_0010a376;
        }
        break;
      case 0xf:
        __mutex = (pthread_mutex_t *)(this_01 + 0x9c8);
        uVar4 = pthread_mutex_lock(__mutex);
        if (uVar4 != 0) {
          this_02 = (MenuBar *)(ulong)uVar4;
          std::__throw_system_error(uVar4);
          lVar14 = (long)iVar6;
          lStack_120 = *(long *)(in_FS_OFFSET + 0x28);
          lVar10 = *(long *)(this_02 + 0xa10);
          pMStack_110 = this_01;
          ppStack_108 = __mutex;
          if (iVar6 < 0) {
            if (lVar10 == 0) goto LAB_0010a8b0;
            lVar10 = *(long *)(lVar10 + -8);
          }
          else {
            if (lVar10 != 0) {
              lVar10 = *(long *)(lVar10 + -8);
              if (lVar10 <= lVar14) goto LAB_0010a7dd;
              plVar9 = (long *)get_menu_popup(this_02,iVar6);
              Window::get_title();
              if ((lStack_158 == 0) || (*(uint *)(lStack_158 + -8) < 2)) {
                Node::get_name();
                if (lStack_150 == 0) {
                  uStack_168 = 0;
                }
                else {
                  __s = *(char **)(lStack_150 + 8);
                  uStack_168 = 0;
                  if (__s == (char *)0x0) {
                    if (*(long *)(lStack_150 + 0x10) != 0) {
                      CowData<char32_t>::_ref
                                ((CowData<char32_t> *)&uStack_168,(CowData *)(lStack_150 + 0x10));
                      goto LAB_0010a474;
                    }
                    if (StringName::configured == '\0') goto LAB_0010a48f;
                  }
                  else {
                    sStack_140 = strlen(__s);
                    pcStack_148 = __s;
                    String::parse_latin1((StrRange *)&uStack_168);
LAB_0010a474:
                    if ((StringName::configured == '\0') || (lStack_150 == 0)) goto LAB_0010a48f;
                  }
                  StringName::unref();
                }
              }
              else {
                Window::get_title();
              }
LAB_0010a48f:
              CowData<char32_t>::_unref((CowData<char32_t> *)&lStack_158);
              cVar3 = String::operator==(this_00,(String *)&uStack_168);
              if (cVar3 == '\0') {
                pcVar2 = *(code **)(*plVar9 + 0xa8);
                Variant::Variant((Variant *)aiStack_138,this_00);
                StringName::StringName((StringName *)&pcStack_148,"_menu_name",false);
                (*pcVar2)(plVar9,(StringName *)&pcStack_148,(Variant *)aiStack_138);
                if ((StringName::configured != '\0') && (pcStack_148 != (char *)0x0)) {
                  StringName::unref();
                }
                if (Variant::needs_deinit[aiStack_138[0]] != '\0') {
                  Variant::_clear_internal();
                }
              }
              else {
                pcVar2 = *(code **)(*plVar9 + 0xb0);
                StringName::StringName((StringName *)&pcStack_148,"_menu_name",false);
                (*pcVar2)(plVar9,(StringName *)&pcStack_148);
                if ((StringName::configured != '\0') && (pcStack_148 != (char *)0x0)) {
                  StringName::unref();
                }
              }
              if (*(long *)(this_02 + 0xa10) != 0) {
                lVar10 = *(long *)(*(long *)(this_02 + 0xa10) + -8);
                if (lVar10 <= lVar14) goto LAB_0010a823;
                lVar16 = lVar14 * 0x28;
                CowData<MenuBar::Menu>::_copy_on_write((CowData<MenuBar::Menu> *)(this_02 + 0xa10));
                lVar10 = *(long *)(this_02 + 0xa10);
                if (*(long *)(lVar10 + lVar16) != *(long *)this_00) {
                  CowData<char32_t>::_ref((CowData<char32_t> *)(lVar10 + lVar16),(CowData *)this_00)
                  ;
                  lVar10 = *(long *)(this_02 + 0xa10);
                }
                if (lVar10 != 0) {
                  lVar10 = *(long *)(lVar10 + -8);
                  if (lVar10 <= lVar14) goto LAB_0010a823;
                  CowData<MenuBar::Menu>::_copy_on_write
                            ((CowData<MenuBar::Menu> *)(this_02 + 0xa10));
                  shape(this_02,(Menu *)(*(long *)(this_02 + 0xa10) + lVar16));
                  plVar9 = NativeMenu::singleton;
                  if ((*(long *)(this_02 + 0xb10) != 0) &&
                     (1 < *(uint *)(*(long *)(this_02 + 0xb10) + -8))) {
                    lVar10 = *(long *)(this_02 + 0xa10);
                    if (lVar10 == 0) {
LAB_0010a8c0:
                      lVar15 = 0;
LAB_0010a8c3:
                      _err_print_index_error
                                ("get","./core/templates/cowdata.h",0xdb,lVar14,lVar15,"p_index",
                                 "size()","",false,true);
                      _err_flush_stdout();
                    /* WARNING: Does not return */
                      pcVar2 = (code *)invalidInstructionException();
                      (*pcVar2)();
                    }
                    lVar15 = *(long *)(lVar10 + -8);
                    if (lVar15 <= lVar14) goto LAB_0010a8c3;
                    if (*(long *)(lVar10 + 0x20 + lVar16) != 0) {
                      uStack_160 = (**(code **)(*NativeMenu::singleton + 0x160))
                                             (NativeMenu::singleton,1);
                      lVar10 = *(long *)(this_02 + 0xa10);
                      if (lVar10 == 0) goto LAB_0010a8c0;
                      lVar15 = *(long *)(lVar10 + -8);
                      if (lVar15 <= lVar14) goto LAB_0010a8c3;
                      iVar6 = (**(code **)(*plVar9 + 0x230))
                                        (plVar9,&uStack_160,lVar10 + 0x20 + lVar16);
                      if (-1 < iVar6) {
                        pcVar2 = *(code **)(*plVar9 + 0x2f0);
                        StringName::StringName((StringName *)&lStack_158,"",false);
                        lVar10 = *(long *)(this_02 + 0xa10);
                        if (lVar10 == 0) goto LAB_0010a8c0;
                        lVar15 = *(long *)(lVar10 + -8);
                        if (lVar15 <= lVar14) goto LAB_0010a8c3;
                        pCVar17 = (CowData *)(lVar16 + lVar10);
                        cVar3 = Node::can_auto_translate();
                        if (cVar3 == '\0') {
                          lStack_150 = 0;
                          if (*(long *)pCVar17 != 0) {
                            CowData<char32_t>::_ref((CowData<char32_t> *)&lStack_150,pCVar17);
                          }
                        }
                        else {
                          StringName::StringName((StringName *)&pcStack_148,(String *)pCVar17,false)
                          ;
                          Object::tr((StringName *)&lStack_150,(StringName *)this_02);
                          if ((StringName::configured != '\0') && (pcStack_148 != (char *)0x0)) {
                            StringName::unref();
                          }
                        }
                        pCStack_188 = (CowData<char32_t> *)&lStack_150;
                        (*pcVar2)(plVar9,&uStack_160,iVar6,pCStack_188);
                        CowData<char32_t>::_unref(pCStack_188);
                        if ((StringName::configured != '\0') && (lStack_158 != 0)) {
                          StringName::unref();
                        }
                      }
                    }
                  }
                  Control::update_minimum_size();
                  CowData<char32_t>::_unref((CowData<char32_t> *)&uStack_168);
                  goto LAB_0010a5a4;
                }
              }
              lVar10 = 0;
LAB_0010a823:
              _err_print_index_error
                        ("operator[]","./core/templates/vector.h",0x38,lVar14,lVar10,"p_index",
                         "((Vector<T> *)(this))->_cowdata.size()","",false,true);
              _err_flush_stdout();
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
LAB_0010a8b0:
            lVar10 = 0;
          }
LAB_0010a7dd:
          _err_print_index_error
                    ("set_menu_title","scene/gui/menu_bar.cpp",0x353,lVar14,lVar10,"p_menu",
                     "menu_cache.size()","",false,false);
LAB_0010a5a4:
          if (lStack_120 == *(long *)(in_FS_OFFSET + 0x28)) {
            return;
          }
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        cVar3 = is_native_menu(this_01);
        if (cVar3 == '\0') {
          uStack_a0 = CanvasItem::get_local_mouse_position();
          uVar18 = Vector2i::operator_cast_to_Vector2((Vector2i *)(this_01 + 0xa24));
          if (((float)uVar18 != (float)uStack_a0) ||
             ((float)((ulong)uVar18 >> 0x20) != uStack_a0._4_4_)) {
            uVar18 = Vector2::operator_cast_to_Vector2i((Vector2 *)&uStack_a0);
            *(undefined8 *)(this_01 + 0xa24) = uVar18;
            iVar6 = _get_index_at_point(this_01,(Vector2 *)&uStack_a0);
            if ((-1 < iVar6) && (iVar5 = *(int *)(this_01 + 0xa20), iVar5 != iVar6)) {
              *(ulong *)(this_01 + 0xa18) = CONCAT44(iVar6,iVar6);
              if (-1 < iVar5) {
                get_menu_popup(this_01,iVar5);
                Window::hide();
              }
              _open_popup(this_01,iVar6,false);
            }
          }
        }
        pthread_mutex_unlock(__mutex);
        break;
      case 0x14:
        cVar3 = is_native_menu(this_01);
        if ((cVar3 == '\0') && (lVar10 = *(long *)(this_01 + 0xa10), lVar10 != 0)) {
          lVar14 = 0;
          do {
            if (*(long *)(lVar10 + -8) <= lVar14) break;
            _draw_menu_item(this_01,(int)lVar14);
            lVar10 = *(long *)(this_01 + 0xa10);
            lVar14 = lVar14 + 1;
          } while (lVar10 != 0);
        }
        break;
      case 0x15:
        cVar3 = is_native_menu(this_01);
        if (cVar3 != '\0') {
          cVar3 = CanvasItem::is_visible_in_tree();
          if (cVar3 != '\0') goto LAB_0010a028;
          goto switchD_00109e41_caseD_1;
        }
        break;
      case 0x20:
        *(undefined8 *)(this_01 + 0xa18) = 0xffffffffffffffff;
        if (lStack_98 == *(long *)(in_FS_OFFSET + 0x28)) {
          CanvasItem::queue_redraw();
          return;
        }
        goto LAB_0010a376;
      case 0x23:
      case 0x27:
        lVar10 = *(long *)(this_01 + 0xa10);
        for (lVar14 = 0; (lVar10 != 0 && (lVar14 < *(long *)(lVar10 + -8))); lVar14 = lVar14 + 1) {
          CowData<MenuBar::Menu>::_copy_on_write((CowData<MenuBar::Menu> *)(this_01 + 0xa10));
          shape(this_01,(Menu *)(*(long *)(this_01 + 0xa10) + lVar14 * 0x28));
          lVar10 = *(long *)(this_01 + 0xa10);
        }
      }
    }
  }
  else if (iVar6 == 0x7da) {
    if (((*(long *)(this_01 + 0xb10) == 0) ||
        (iVar6 = (int)*(undefined8 *)(*(long *)(this_01 + 0xb10) + -8), iVar6 == 0)) ||
       (iVar6 = iVar6 + -1, iVar6 == 0)) {
      uStack_c0 = 0;
      iVar6 = 0;
    }
    else {
      uStack_c0 = (**(code **)(*NativeMenu::singleton + 0x160))(NativeMenu::singleton,1);
    }
    lVar10 = *(long *)(this_01 + 0xa10);
    lVar14 = 0;
    if (lVar10 != 0) {
      while (lVar14 < *(long *)(lVar10 + -8)) {
        while( true ) {
          CowData<MenuBar::Menu>::_copy_on_write((CowData<MenuBar::Menu> *)(this_01 + 0xa10));
          lVar16 = lVar14 * 0x28;
          shape(this_01,(Menu *)(*(long *)(this_01 + 0xa10) + lVar16));
          lVar10 = *(long *)(this_01 + 0xa10);
          if (iVar6 == 0) break;
          if (lVar10 == 0) {
LAB_0010a2d8:
            lVar15 = 0;
LAB_0010a2db:
            ppStack_108 = (pthread_mutex_t *)0x10a311;
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,lVar14,lVar15,"p_index","size()","",
                       false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          lVar15 = *(long *)(lVar10 + -8);
          if (lVar15 <= lVar14) goto LAB_0010a2db;
          if (*(long *)(lVar10 + lVar16 + 0x20) != 0) {
            iVar5 = (**(code **)(*plVar9 + 0x230))(plVar9,&uStack_c0,lVar10 + lVar16 + 0x20);
            if (-1 < iVar5) {
              pcVar2 = *(code **)(*plVar9 + 0x2f0);
              StringName::StringName((StringName *)&lStack_b8,"",false);
              lVar10 = *(long *)(this_01 + 0xa10);
              if (lVar10 == 0) goto LAB_0010a2d8;
              lVar15 = *(long *)(lVar10 + -8);
              if (lVar15 <= lVar14) goto LAB_0010a2db;
              pCVar17 = (CowData *)(lVar10 + lVar16);
              cVar3 = Node::can_auto_translate();
              if (cVar3 == '\0') {
                uStack_b0 = 0;
                if (*(long *)pCVar17 != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t> *)&uStack_b0,pCVar17);
                }
              }
              else {
                StringName::StringName((StringName *)&lStack_a8,(String *)pCVar17,false);
                Object::tr((StringName *)&uStack_b0,(StringName *)this_01);
                if ((StringName::configured != '\0') && (lStack_a8 != 0)) {
                  StringName::unref();
                }
              }
              (*pcVar2)(plVar9,&uStack_c0,iVar5,(CowData<char32_t> *)&uStack_b0);
              CowData<char32_t>::_unref((CowData<char32_t> *)&uStack_b0);
              if ((StringName::configured != '\0') && (lStack_b8 != 0)) {
                StringName::unref();
              }
            }
            lVar10 = *(long *)(this_01 + 0xa10);
            break;
          }
          lVar14 = lVar14 + 1;
          if (*(long *)(lVar10 + -8) <= lVar14) goto switchD_00109e41_caseD_2;
        }
        lVar14 = lVar14 + 1;
        if (lVar10 == 0) break;
      }
    }
  }
switchD_00109e41_caseD_2:
  if (lStack_98 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010a376:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MenuBar::_notification(int) */

void __thiscall MenuBar::_notification(MenuBar *this,int param_1)

{
  pthread_mutex_t *__mutex;
  code *pcVar1;
  char *__s;
  char cVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  String *this_00;
  long lVar7;
  int iVar8;
  MenuBar *this_01;
  long lVar9;
  long lVar10;
  CowData *pCVar11;
  long in_FS_OFFSET;
  undefined8 uVar12;
  CowData<char32_t> *pCStack_130;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  long lStack_f8;
  char *pcStack_f0;
  size_t sStack_e8;
  int aiStack_e0 [6];
  long lStack_c8;
  MenuBar *pMStack_b8;
  pthread_mutex_t *ppStack_b0;
  undefined8 local_68;
  long local_60;
  undefined8 local_58;
  long local_50;
  undefined8 local_48;
  long local_40;
  
  plVar5 = NativeMenu::singleton;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 < 0x32) {
    if (9 < param_1) {
      iVar8 = param_1 + -10;
      switch(iVar8) {
      case 0:
        if ((*(long *)(this + 0xa10) != 0) && (0 < *(int *)(*(long *)(this + 0xa10) + -8))) {
          _refresh_menu_names(this);
        }
        cVar2 = is_native_menu(this);
        if (cVar2 != '\0') {
LAB_0010a028:
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            bind_global_menu(this);
            return;
          }
          goto LAB_0010a376;
        }
        break;
      case 1:
switchD_00109e41_caseD_1:
        if ((*(long *)(this + 0xb10) != 0) && (1 < *(uint *)(*(long *)(this + 0xb10) + -8))) {
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            unbind_global_menu(this);
            return;
          }
          goto LAB_0010a376;
        }
        break;
      case 0xf:
        __mutex = (pthread_mutex_t *)(this + 0x9c8);
        uVar3 = pthread_mutex_lock(__mutex);
        if (uVar3 != 0) {
          this_01 = (MenuBar *)(ulong)uVar3;
          std::__throw_system_error(uVar3);
          lVar7 = (long)iVar8;
          lStack_c8 = *(long *)(in_FS_OFFSET + 0x28);
          lVar6 = *(long *)(this_01 + 0xa10);
          pMStack_b8 = this;
          ppStack_b0 = __mutex;
          if (iVar8 < 0) {
            if (lVar6 == 0) goto LAB_0010a8b0;
            lVar6 = *(long *)(lVar6 + -8);
          }
          else {
            if (lVar6 != 0) {
              lVar6 = *(long *)(lVar6 + -8);
              if (lVar6 <= lVar7) goto LAB_0010a7dd;
              plVar5 = (long *)get_menu_popup(this_01,iVar8);
              Window::get_title();
              if ((lStack_100 == 0) || (*(uint *)(lStack_100 + -8) < 2)) {
                Node::get_name();
                if (lStack_f8 == 0) {
                  uStack_110 = 0;
                }
                else {
                  __s = *(char **)(lStack_f8 + 8);
                  uStack_110 = 0;
                  if (__s == (char *)0x0) {
                    if (*(long *)(lStack_f8 + 0x10) != 0) {
                      CowData<char32_t>::_ref
                                ((CowData<char32_t> *)&uStack_110,(CowData *)(lStack_f8 + 0x10));
                      goto LAB_0010a474;
                    }
                    if (StringName::configured == '\0') goto LAB_0010a48f;
                  }
                  else {
                    sStack_e8 = strlen(__s);
                    pcStack_f0 = __s;
                    String::parse_latin1((StrRange *)&uStack_110);
LAB_0010a474:
                    if ((StringName::configured == '\0') || (lStack_f8 == 0)) goto LAB_0010a48f;
                  }
                  StringName::unref();
                }
              }
              else {
                Window::get_title();
              }
LAB_0010a48f:
              CowData<char32_t>::_unref((CowData<char32_t> *)&lStack_100);
              cVar2 = String::operator==(this_00,(String *)&uStack_110);
              if (cVar2 == '\0') {
                pcVar1 = *(code **)(*plVar5 + 0xa8);
                Variant::Variant((Variant *)aiStack_e0,this_00);
                StringName::StringName((StringName *)&pcStack_f0,"_menu_name",false);
                (*pcVar1)(plVar5,(StringName *)&pcStack_f0,(Variant *)aiStack_e0);
                if ((StringName::configured != '\0') && (pcStack_f0 != (char *)0x0)) {
                  StringName::unref();
                }
                if (Variant::needs_deinit[aiStack_e0[0]] != '\0') {
                  Variant::_clear_internal();
                }
              }
              else {
                pcVar1 = *(code **)(*plVar5 + 0xb0);
                StringName::StringName((StringName *)&pcStack_f0,"_menu_name",false);
                (*pcVar1)(plVar5,(StringName *)&pcStack_f0);
                if ((StringName::configured != '\0') && (pcStack_f0 != (char *)0x0)) {
                  StringName::unref();
                }
              }
              if (*(long *)(this_01 + 0xa10) != 0) {
                lVar6 = *(long *)(*(long *)(this_01 + 0xa10) + -8);
                if (lVar6 <= lVar7) goto LAB_0010a823;
                lVar10 = lVar7 * 0x28;
                CowData<MenuBar::Menu>::_copy_on_write((CowData<MenuBar::Menu> *)(this_01 + 0xa10));
                lVar6 = *(long *)(this_01 + 0xa10);
                if (*(long *)(lVar6 + lVar10) != *(long *)this_00) {
                  CowData<char32_t>::_ref((CowData<char32_t> *)(lVar6 + lVar10),(CowData *)this_00);
                  lVar6 = *(long *)(this_01 + 0xa10);
                }
                if (lVar6 != 0) {
                  lVar6 = *(long *)(lVar6 + -8);
                  if (lVar6 <= lVar7) goto LAB_0010a823;
                  CowData<MenuBar::Menu>::_copy_on_write
                            ((CowData<MenuBar::Menu> *)(this_01 + 0xa10));
                  shape(this_01,(Menu *)(*(long *)(this_01 + 0xa10) + lVar10));
                  plVar5 = NativeMenu::singleton;
                  if ((*(long *)(this_01 + 0xb10) != 0) &&
                     (1 < *(uint *)(*(long *)(this_01 + 0xb10) + -8))) {
                    lVar6 = *(long *)(this_01 + 0xa10);
                    if (lVar6 == 0) {
LAB_0010a8c0:
                      lVar9 = 0;
LAB_0010a8c3:
                      _err_print_index_error
                                ("get","./core/templates/cowdata.h",0xdb,lVar7,lVar9,"p_index",
                                 "size()","",false,true);
                      _err_flush_stdout();
                    /* WARNING: Does not return */
                      pcVar1 = (code *)invalidInstructionException();
                      (*pcVar1)();
                    }
                    lVar9 = *(long *)(lVar6 + -8);
                    if (lVar9 <= lVar7) goto LAB_0010a8c3;
                    if (*(long *)(lVar6 + 0x20 + lVar10) != 0) {
                      uStack_108 = (**(code **)(*NativeMenu::singleton + 0x160))
                                             (NativeMenu::singleton,1);
                      lVar6 = *(long *)(this_01 + 0xa10);
                      if (lVar6 == 0) goto LAB_0010a8c0;
                      lVar9 = *(long *)(lVar6 + -8);
                      if (lVar9 <= lVar7) goto LAB_0010a8c3;
                      iVar8 = (**(code **)(*plVar5 + 0x230))
                                        (plVar5,&uStack_108,lVar6 + 0x20 + lVar10);
                      if (-1 < iVar8) {
                        pcVar1 = *(code **)(*plVar5 + 0x2f0);
                        StringName::StringName((StringName *)&lStack_100,"",false);
                        lVar6 = *(long *)(this_01 + 0xa10);
                        if (lVar6 == 0) goto LAB_0010a8c0;
                        lVar9 = *(long *)(lVar6 + -8);
                        if (lVar9 <= lVar7) goto LAB_0010a8c3;
                        pCVar11 = (CowData *)(lVar10 + lVar6);
                        cVar2 = Node::can_auto_translate();
                        if (cVar2 == '\0') {
                          lStack_f8 = 0;
                          if (*(long *)pCVar11 != 0) {
                            CowData<char32_t>::_ref((CowData<char32_t> *)&lStack_f8,pCVar11);
                          }
                        }
                        else {
                          StringName::StringName((StringName *)&pcStack_f0,(String *)pCVar11,false);
                          Object::tr((StringName *)&lStack_f8,(StringName *)this_01);
                          if ((StringName::configured != '\0') && (pcStack_f0 != (char *)0x0)) {
                            StringName::unref();
                          }
                        }
                        pCStack_130 = (CowData<char32_t> *)&lStack_f8;
                        (*pcVar1)(plVar5,&uStack_108,iVar8,pCStack_130);
                        CowData<char32_t>::_unref(pCStack_130);
                        if ((StringName::configured != '\0') && (lStack_100 != 0)) {
                          StringName::unref();
                        }
                      }
                    }
                  }
                  Control::update_minimum_size();
                  CowData<char32_t>::_unref((CowData<char32_t> *)&uStack_110);
                  goto LAB_0010a5a4;
                }
              }
              lVar6 = 0;
LAB_0010a823:
              _err_print_index_error
                        ("operator[]","./core/templates/vector.h",0x38,lVar7,lVar6,"p_index",
                         "((Vector<T> *)(this))->_cowdata.size()","",false,true);
              _err_flush_stdout();
                    /* WARNING: Does not return */
              pcVar1 = (code *)invalidInstructionException();
              (*pcVar1)();
            }
LAB_0010a8b0:
            lVar6 = 0;
          }
LAB_0010a7dd:
          _err_print_index_error
                    ("set_menu_title","scene/gui/menu_bar.cpp",0x353,lVar7,lVar6,"p_menu",
                     "menu_cache.size()","",false,false);
LAB_0010a5a4:
          if (lStack_c8 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return;
        }
        cVar2 = is_native_menu(this);
        if (cVar2 == '\0') {
          local_48 = CanvasItem::get_local_mouse_position();
          uVar12 = Vector2i::operator_cast_to_Vector2((Vector2i *)(this + 0xa24));
          if (((float)uVar12 != (float)local_48) ||
             ((float)((ulong)uVar12 >> 0x20) != local_48._4_4_)) {
            uVar12 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_48);
            *(undefined8 *)(this + 0xa24) = uVar12;
            iVar8 = _get_index_at_point(this,(Vector2 *)&local_48);
            if ((-1 < iVar8) && (iVar4 = *(int *)(this + 0xa20), iVar4 != iVar8)) {
              *(ulong *)(this + 0xa18) = CONCAT44(iVar8,iVar8);
              if (-1 < iVar4) {
                get_menu_popup(this,iVar4);
                Window::hide();
              }
              _open_popup(this,iVar8,false);
            }
          }
        }
        pthread_mutex_unlock(__mutex);
        break;
      case 0x14:
        cVar2 = is_native_menu(this);
        if ((cVar2 == '\0') && (lVar6 = *(long *)(this + 0xa10), lVar6 != 0)) {
          lVar7 = 0;
          do {
            if (*(long *)(lVar6 + -8) <= lVar7) break;
            _draw_menu_item(this,(int)lVar7);
            lVar6 = *(long *)(this + 0xa10);
            lVar7 = lVar7 + 1;
          } while (lVar6 != 0);
        }
        break;
      case 0x15:
        cVar2 = is_native_menu(this);
        if (cVar2 != '\0') {
          cVar2 = CanvasItem::is_visible_in_tree();
          if (cVar2 != '\0') goto LAB_0010a028;
          goto switchD_00109e41_caseD_1;
        }
        break;
      case 0x20:
        *(undefined8 *)(this + 0xa18) = 0xffffffffffffffff;
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          CanvasItem::queue_redraw();
          return;
        }
        goto LAB_0010a376;
      case 0x23:
      case 0x27:
        lVar6 = *(long *)(this + 0xa10);
        for (lVar7 = 0; (lVar6 != 0 && (lVar7 < *(long *)(lVar6 + -8))); lVar7 = lVar7 + 1) {
          CowData<MenuBar::Menu>::_copy_on_write((CowData<MenuBar::Menu> *)(this + 0xa10));
          shape(this,(Menu *)(*(long *)(this + 0xa10) + lVar7 * 0x28));
          lVar6 = *(long *)(this + 0xa10);
        }
      }
    }
  }
  else if (param_1 == 0x7da) {
    if (((*(long *)(this + 0xb10) == 0) ||
        (iVar8 = (int)*(undefined8 *)(*(long *)(this + 0xb10) + -8), iVar8 == 0)) ||
       (iVar8 = iVar8 + -1, iVar8 == 0)) {
      local_68 = 0;
      iVar8 = 0;
    }
    else {
      local_68 = (**(code **)(*NativeMenu::singleton + 0x160))(NativeMenu::singleton,1);
    }
    lVar6 = *(long *)(this + 0xa10);
    lVar7 = 0;
    if (lVar6 != 0) {
      while (lVar7 < *(long *)(lVar6 + -8)) {
        while( true ) {
          CowData<MenuBar::Menu>::_copy_on_write((CowData<MenuBar::Menu> *)(this + 0xa10));
          lVar10 = lVar7 * 0x28;
          shape(this,(Menu *)(*(long *)(this + 0xa10) + lVar10));
          lVar6 = *(long *)(this + 0xa10);
          if (iVar8 == 0) break;
          if (lVar6 == 0) {
LAB_0010a2d8:
            lVar9 = 0;
LAB_0010a2db:
            ppStack_b0 = (pthread_mutex_t *)0x10a311;
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,lVar7,lVar9,"p_index","size()","",
                       false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          lVar9 = *(long *)(lVar6 + -8);
          if (lVar9 <= lVar7) goto LAB_0010a2db;
          if (*(long *)(lVar6 + lVar10 + 0x20) != 0) {
            iVar4 = (**(code **)(*plVar5 + 0x230))(plVar5,&local_68,lVar6 + lVar10 + 0x20);
            if (-1 < iVar4) {
              pcVar1 = *(code **)(*plVar5 + 0x2f0);
              StringName::StringName((StringName *)&local_60,"",false);
              lVar6 = *(long *)(this + 0xa10);
              if (lVar6 == 0) goto LAB_0010a2d8;
              lVar9 = *(long *)(lVar6 + -8);
              if (lVar9 <= lVar7) goto LAB_0010a2db;
              pCVar11 = (CowData *)(lVar6 + lVar10);
              cVar2 = Node::can_auto_translate();
              if (cVar2 == '\0') {
                local_58 = 0;
                if (*(long *)pCVar11 != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,pCVar11);
                }
              }
              else {
                StringName::StringName((StringName *)&local_50,(String *)pCVar11,false);
                Object::tr((StringName *)&local_58,(StringName *)this);
                if ((StringName::configured != '\0') && (local_50 != 0)) {
                  StringName::unref();
                }
              }
              (*pcVar1)(plVar5,&local_68,iVar4,(CowData<char32_t> *)&local_58);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
              if ((StringName::configured != '\0') && (local_60 != 0)) {
                StringName::unref();
              }
            }
            lVar6 = *(long *)(this + 0xa10);
            break;
          }
          lVar7 = lVar7 + 1;
          if (*(long *)(lVar6 + -8) <= lVar7) goto switchD_00109e41_caseD_2;
        }
        lVar7 = lVar7 + 1;
        if (lVar6 == 0) break;
      }
    }
  }
switchD_00109e41_caseD_2:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010a376:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MenuBar::set_menu_title(int, String const&) */

void __thiscall MenuBar::set_menu_title(MenuBar *this,int param_1,String *param_2)

{
  char *__s;
  code *pcVar1;
  char cVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  CowData *pCVar9;
  long in_FS_OFFSET;
  CowData<char32_t> *local_a8;
  undefined8 local_88;
  undefined8 local_80;
  long local_78;
  long local_70;
  char *local_68;
  size_t local_60;
  int local_58 [6];
  long local_40;
  
  lVar6 = (long)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar5 = *(long *)(this + 0xa10);
  if (param_1 < 0) {
    if (lVar5 == 0) goto LAB_0010a8b0;
    lVar5 = *(long *)(lVar5 + -8);
  }
  else {
    if (lVar5 != 0) {
      lVar5 = *(long *)(lVar5 + -8);
      if (lVar5 <= lVar6) goto LAB_0010a7dd;
      plVar4 = (long *)get_menu_popup(this,param_1);
      Window::get_title();
      if ((local_78 == 0) || (*(uint *)(local_78 + -8) < 2)) {
        Node::get_name();
        if (local_70 == 0) {
          local_88 = 0;
        }
        else {
          __s = *(char **)(local_70 + 8);
          local_88 = 0;
          if (__s == (char *)0x0) {
            if (*(long *)(local_70 + 0x10) != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)(local_70 + 0x10));
              goto LAB_0010a474;
            }
            if (StringName::configured == '\0') goto LAB_0010a48f;
          }
          else {
            local_60 = strlen(__s);
            local_68 = __s;
            String::parse_latin1((StrRange *)&local_88);
LAB_0010a474:
            if ((StringName::configured == '\0') || (local_70 == 0)) goto LAB_0010a48f;
          }
          StringName::unref();
        }
      }
      else {
        Window::get_title();
      }
LAB_0010a48f:
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      cVar2 = String::operator==(param_2,(String *)&local_88);
      if (cVar2 == '\0') {
        pcVar1 = *(code **)(*plVar4 + 0xa8);
        Variant::Variant((Variant *)local_58,param_2);
        StringName::StringName((StringName *)&local_68,"_menu_name",false);
        (*pcVar1)(plVar4,(StringName *)&local_68,(Variant *)local_58);
        if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
          StringName::unref();
        }
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
      }
      else {
        pcVar1 = *(code **)(*plVar4 + 0xb0);
        StringName::StringName((StringName *)&local_68,"_menu_name",false);
        (*pcVar1)(plVar4,(StringName *)&local_68);
        if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
          StringName::unref();
        }
      }
      if (*(long *)(this + 0xa10) != 0) {
        lVar5 = *(long *)(*(long *)(this + 0xa10) + -8);
        if (lVar5 <= lVar6) goto LAB_0010a823;
        lVar8 = lVar6 * 0x28;
        CowData<MenuBar::Menu>::_copy_on_write((CowData<MenuBar::Menu> *)(this + 0xa10));
        lVar5 = *(long *)(this + 0xa10);
        if (*(long *)(lVar5 + lVar8) != *(long *)param_2) {
          CowData<char32_t>::_ref((CowData<char32_t> *)(lVar5 + lVar8),(CowData *)param_2);
          lVar5 = *(long *)(this + 0xa10);
        }
        if (lVar5 != 0) {
          lVar5 = *(long *)(lVar5 + -8);
          if (lVar5 <= lVar6) goto LAB_0010a823;
          CowData<MenuBar::Menu>::_copy_on_write((CowData<MenuBar::Menu> *)(this + 0xa10));
          shape(this,(Menu *)(*(long *)(this + 0xa10) + lVar8));
          plVar4 = NativeMenu::singleton;
          if ((*(long *)(this + 0xb10) != 0) && (1 < *(uint *)(*(long *)(this + 0xb10) + -8))) {
            lVar5 = *(long *)(this + 0xa10);
            if (lVar5 == 0) {
LAB_0010a8c0:
              lVar7 = 0;
LAB_0010a8c3:
              _err_print_index_error
                        ("get","./core/templates/cowdata.h",0xdb,lVar6,lVar7,"p_index","size()","",
                         false,true);
              _err_flush_stdout();
                    /* WARNING: Does not return */
              pcVar1 = (code *)invalidInstructionException();
              (*pcVar1)();
            }
            lVar7 = *(long *)(lVar5 + -8);
            if (lVar7 <= lVar6) goto LAB_0010a8c3;
            if (*(long *)(lVar5 + 0x20 + lVar8) != 0) {
              local_80 = (**(code **)(*NativeMenu::singleton + 0x160))(NativeMenu::singleton,1);
              lVar5 = *(long *)(this + 0xa10);
              if (lVar5 == 0) goto LAB_0010a8c0;
              lVar7 = *(long *)(lVar5 + -8);
              if (lVar7 <= lVar6) goto LAB_0010a8c3;
              iVar3 = (**(code **)(*plVar4 + 0x230))(plVar4,&local_80,lVar5 + 0x20 + lVar8);
              if (-1 < iVar3) {
                pcVar1 = *(code **)(*plVar4 + 0x2f0);
                StringName::StringName((StringName *)&local_78,"",false);
                lVar5 = *(long *)(this + 0xa10);
                if (lVar5 == 0) goto LAB_0010a8c0;
                lVar7 = *(long *)(lVar5 + -8);
                if (lVar7 <= lVar6) goto LAB_0010a8c3;
                pCVar9 = (CowData *)(lVar8 + lVar5);
                cVar2 = Node::can_auto_translate();
                if (cVar2 == '\0') {
                  local_70 = 0;
                  if (*(long *)pCVar9 != 0) {
                    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,pCVar9);
                  }
                }
                else {
                  StringName::StringName((StringName *)&local_68,(String *)pCVar9,false);
                  Object::tr((StringName *)&local_70,(StringName *)this);
                  if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
                    StringName::unref();
                  }
                }
                local_a8 = (CowData<char32_t> *)&local_70;
                (*pcVar1)(plVar4,&local_80,iVar3,local_a8);
                CowData<char32_t>::_unref(local_a8);
                if ((StringName::configured != '\0') && (local_78 != 0)) {
                  StringName::unref();
                }
              }
            }
          }
          Control::update_minimum_size();
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
          goto LAB_0010a5a4;
        }
      }
      lVar5 = 0;
LAB_0010a823:
      _err_print_index_error
                ("operator[]","./core/templates/vector.h",0x38,lVar6,lVar5,"p_index",
                 "((Vector<T> *)(this))->_cowdata.size()","",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
LAB_0010a8b0:
    lVar5 = 0;
  }
LAB_0010a7dd:
  _err_print_index_error
            ("set_menu_title","scene/gui/menu_bar.cpp",0x353,lVar6,lVar5,"p_menu",
             "menu_cache.size()","",false,false);
LAB_0010a5a4:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MenuBar::set_menu_tooltip(int, String const&) */

void __thiscall MenuBar::set_menu_tooltip(MenuBar *this,int param_1,String *param_2)

{
  code *pcVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long in_FS_OFFSET;
  long local_60;
  int local_58 [6];
  long local_40;
  
  lVar6 = (long)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar7 = *(long *)(this + 0xa10);
  if (param_1 < 0) {
    if (lVar7 == 0) goto LAB_0010ac28;
    lVar7 = *(long *)(lVar7 + -8);
  }
  else if (lVar7 == 0) {
LAB_0010ac28:
    lVar7 = 0;
  }
  else {
    lVar7 = *(long *)(lVar7 + -8);
    if (lVar6 < lVar7) {
      plVar4 = (long *)get_menu_popup(this,param_1);
      pcVar1 = *(code **)(*plVar4 + 0xa8);
      Variant::Variant((Variant *)local_58,param_2);
      StringName::StringName((StringName *)&local_60,"_menu_tooltip",false);
      (*pcVar1)(plVar4,(StringName *)&local_60,(Variant *)local_58);
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (*(long *)(this + 0xa10) == 0) {
        lVar7 = 0;
LAB_0010abd3:
        _err_print_index_error
                  ("operator[]","./core/templates/vector.h",0x38,lVar6,lVar7,"p_index",
                   "((Vector<T> *)(this))->_cowdata.size()","",false,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      lVar7 = *(long *)(*(long *)(this + 0xa10) + -8);
      if (lVar7 <= lVar6) goto LAB_0010abd3;
      CowData<MenuBar::Menu>::_copy_on_write((CowData<MenuBar::Menu> *)(this + 0xa10));
      lVar7 = lVar6 * 0x28;
      if (*(long *)(*(long *)(this + 0xa10) + lVar7 + 8) != *(long *)param_2) {
        CowData<char32_t>::_ref
                  ((CowData<char32_t> *)(*(long *)(this + 0xa10) + lVar7 + 8),(CowData *)param_2);
      }
      plVar4 = NativeMenu::singleton;
      if ((*(long *)(this + 0xb10) == 0) || (*(uint *)(*(long *)(this + 0xb10) + -8) < 2))
      goto LAB_0010aabf;
      lVar2 = *(long *)(this + 0xa10);
      if (lVar2 != 0) {
        lVar5 = *(long *)(lVar2 + -8);
        if (lVar5 <= lVar6) goto LAB_0010ac33;
        if (*(long *)(lVar2 + 0x20 + lVar7) == 0) goto LAB_0010aabf;
        local_60 = (**(code **)(*NativeMenu::singleton + 0x160))(NativeMenu::singleton,1);
        lVar2 = *(long *)(this + 0xa10);
        if (lVar2 != 0) {
          lVar5 = *(long *)(lVar2 + -8);
          if (lVar5 <= lVar6) goto LAB_0010ac33;
          iVar3 = (**(code **)(*plVar4 + 0x230))
                            (plVar4,(StringName *)&local_60,lVar2 + 0x20 + lVar7);
          if (-1 < iVar3) {
            (**(code **)(*plVar4 + 0x318))(plVar4,(StringName *)&local_60,iVar3,param_2);
          }
          goto LAB_0010aabf;
        }
      }
      lVar5 = 0;
LAB_0010ac33:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,lVar6,lVar5,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
  }
  _err_print_index_error
            ("set_menu_tooltip","scene/gui/menu_bar.cpp",0x36e,lVar6,lVar7,"p_menu",
             "menu_cache.size()","",false,false);
LAB_0010aabf:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MenuBar::add_child_notify(Node*) */

void __thiscall MenuBar::add_child_notify(MenuBar *this,Node *param_1)

{
  CowData<MenuBar::Menu> *this_00;
  CowData<char32_t> *this_01;
  char *__s;
  code *pcVar1;
  Object *pOVar2;
  undefined2 uVar3;
  char cVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  bool bVar10;
  Object *pOVar11;
  long in_FS_OFFSET;
  CowData<char32_t> *local_178;
  CowData<char32_t> *local_150;
  long local_138;
  undefined8 local_130;
  undefined8 local_128;
  long local_120;
  undefined8 local_118;
  undefined8 local_110;
  String local_108 [8];
  long local_100;
  long local_f8 [2];
  undefined1 local_e8 [16];
  Object *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  char *local_b8;
  size_t local_b0;
  Object *local_a8;
  undefined2 local_a0;
  undefined8 local_98;
  Variant *local_88;
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Node::add_child_notify((Node *)this);
  if (param_1 == (Node *)0x0) goto LAB_0010b329;
  plVar6 = (long *)__dynamic_cast(param_1,&Object::typeinfo,&PopupMenu::typeinfo,0);
  if (plVar6 == (long *)0x0) goto LAB_0010b329;
  Window::get_title();
  if ((local_f8[0] == 0) || (*(uint *)(local_f8[0] + -8) < 2)) {
    Node::get_name();
    if (local_e8._0_8_ == 0) {
      local_138 = 0;
    }
    else {
      __s = *(char **)(local_e8._0_8_ + 8);
      local_138 = 0;
      if (__s == (char *)0x0) {
        if (*(long *)(local_e8._0_8_ + 0x10) != 0) {
          CowData<char32_t>::_ref
                    ((CowData<char32_t> *)&local_138,(CowData *)(local_e8._0_8_ + 0x10));
          goto LAB_0010ad76;
        }
        if (StringName::configured == '\0') goto LAB_0010ad94;
      }
      else {
        local_b0 = strlen(__s);
        local_b8 = __s;
        String::parse_latin1((StrRange *)&local_138);
LAB_0010ad76:
        if ((StringName::configured == '\0') || (local_e8._0_8_ == 0)) goto LAB_0010ad94;
      }
      StringName::unref();
    }
  }
  else {
    Window::get_title();
  }
LAB_0010ad94:
  local_178 = (CowData<char32_t> *)local_e8;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_f8);
  local_d8 = (Object *)0x0;
  local_d0 = 0;
  local_c8 = 0;
  local_e8 = (undefined1  [16])0x0;
  if (local_138 != 0) {
    CowData<char32_t>::_ref(local_178,(CowData *)&local_138);
  }
  Ref<TextLine>::instantiate<>((Ref<TextLine> *)&local_d8);
  shape(this,(Menu *)local_178);
  pcVar1 = *(code **)(*plVar6 + 0x108);
  create_custom_callable_function_pointer<MenuBar,ObjectID>
            ((MenuBar *)local_f8,(char *)this,(_func_void_ObjectID *)"&MenuBar::_popup_changed");
  local_100 = plVar6[0xc];
  Variant::Variant((Variant *)local_78,(StringName *)&local_100);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  local_88 = (Variant *)local_78;
  Callable::bindp((Variant **)&local_b8,(int)(CowData<char32_t> *)local_f8);
  if (Variant::needs_deinit[(int)local_60] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  StringName::StringName((StringName *)&local_100,"title_changed",false);
  (*pcVar1)(plVar6,(StringName *)&local_100,(Callable *)&local_b8,8);
  if ((StringName::configured != '\0') && (local_100 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_b8);
  Callable::~Callable((Callable *)local_f8);
  local_b8 = (char *)0x0;
  if (local_e8._0_8_ != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)local_178);
  }
  local_b0 = 0;
  if (local_e8._8_8_ != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,(CowData *)(local_e8 + 8));
  }
  pOVar11 = local_d8;
  if (local_d8 == (Object *)0x0) {
LAB_0010afa6:
    local_a8 = (Object *)0x0;
    pOVar11 = (Object *)0x0;
  }
  else {
    local_a8 = local_d8;
    cVar4 = RefCounted::reference();
    if (cVar4 == '\0') goto LAB_0010afa6;
  }
  uVar3 = (undefined2)local_d0;
  local_a0 = (undefined2)local_d0;
  local_98 = local_c8;
  if (*(long *)(this + 0xa10) == 0) {
    lVar9 = 1;
  }
  else {
    lVar9 = *(long *)(*(long *)(this + 0xa10) + -8) + 1;
  }
  this_00 = (CowData<MenuBar::Menu> *)(this + 0xa10);
  iVar5 = CowData<MenuBar::Menu>::resize<false>(this_00,lVar9);
  if (iVar5 == 0) {
    if (*(long *)(this + 0xa10) == 0) {
      lVar7 = -1;
      lVar9 = 0;
LAB_0010b752:
      _err_print_index_error
                ("set","./core/templates/cowdata.h",0xcf,lVar7,lVar9,"p_index","size()","",false,
                 false);
      goto LAB_0010b126;
    }
    lVar9 = *(long *)(*(long *)(this + 0xa10) + -8);
    lVar7 = lVar9 + -1;
    if (lVar7 < 0) goto LAB_0010b752;
    CowData<MenuBar::Menu>::_copy_on_write(this_00);
    this_01 = (CowData<char32_t> *)(*(long *)(this + 0xa10) + lVar7 * 0x28);
    if (*(char **)this_01 != local_b8) {
      CowData<char32_t>::_ref(this_01,(CowData *)&local_b8);
    }
    if (*(size_t *)(this_01 + 8) != local_b0) {
      CowData<char32_t>::_ref(this_01 + 8,(CowData *)&local_b0);
    }
    pOVar2 = *(Object **)(this_01 + 0x10);
    if (pOVar11 == pOVar2) {
LAB_0010b111:
      *(undefined2 *)(this_01 + 0x18) = uVar3;
      *(undefined8 *)(this_01 + 0x20) = local_98;
      goto LAB_0010b126;
    }
    *(Object **)(this_01 + 0x10) = pOVar11;
    if ((pOVar11 == (Object *)0x0) || (cVar4 = RefCounted::reference(), cVar4 != '\0')) {
      if (pOVar2 != (Object *)0x0) goto LAB_0010b0ed;
      goto LAB_0010b111;
    }
    *(undefined8 *)(this_01 + 0x10) = 0;
    if (pOVar2 != (Object *)0x0) {
LAB_0010b0ed:
      cVar4 = RefCounted::unreference();
      if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar2), cVar4 != '\0')) {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
      goto LAB_0010b111;
    }
    *(undefined2 *)(this_01 + 0x18) = uVar3;
    *(undefined8 *)(this_01 + 0x20) = local_98;
LAB_0010b12b:
    cVar4 = RefCounted::unreference();
    if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar11), cVar4 != '\0')) {
      (**(code **)(*(long *)pOVar11 + 0x140))(pOVar11);
      Memory::free_static(pOVar11,false);
    }
  }
  else {
    _err_print_error("push_back","./core/templates/vector.h",0x142,
                     "Condition \"err\" is true. Returning: true",0,0);
LAB_0010b126:
    if (pOVar11 != (Object *)0x0) goto LAB_0010b12b;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  pcVar1 = *(code **)(*(long *)param_1 + 0x108);
  create_custom_callable_function_pointer<MenuBar>
            ((MenuBar *)&local_b8,(char *)this,(_func_void *)"&MenuBar::_refresh_menu_names");
  StringName::StringName((StringName *)local_f8,"renamed",false);
  (*pcVar1)(param_1,(CowData<char32_t> *)local_f8,(Callable *)&local_b8,0);
  if ((StringName::configured != '\0') && (local_f8[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_b8);
  pcVar1 = *(code **)(*(long *)param_1 + 0x108);
  create_custom_callable_function_pointer<MenuBar,bool>
            ((MenuBar *)local_f8,(char *)this,
             (_func_void_bool *)"&MenuBar::_popup_visibility_changed");
  bVar10 = SUB81((Callable *)&local_b8,0);
  Callable::bind<bool>(bVar10);
  StringName::StringName((StringName *)&local_100,"about_to_popup",false);
  (*pcVar1)(param_1,(StringName *)&local_100,(Callable *)&local_b8,0);
  if ((StringName::configured != '\0') && (local_100 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_b8);
  Callable::~Callable((Callable *)local_f8);
  pcVar1 = *(code **)(*(long *)param_1 + 0x108);
  create_custom_callable_function_pointer<MenuBar,bool>
            ((MenuBar *)local_f8,(char *)this,
             (_func_void_bool *)"&MenuBar::_popup_visibility_changed");
  Callable::bind<bool>(bVar10);
  StringName::StringName((StringName *)&local_100,"popup_hide",false);
  (*pcVar1)(param_1,(StringName *)&local_100,(Callable *)&local_b8,0);
  if ((StringName::configured != '\0') && (local_100 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_b8);
  Callable::~Callable((Callable *)local_f8);
  plVar6 = NativeMenu::singleton;
  if ((*(long *)(this + 0xb10) != 0) && (1 < *(uint *)(*(long *)(this + 0xb10) + -8))) {
    local_130 = (**(code **)(*NativeMenu::singleton + 0x160))(NativeMenu::singleton);
    local_128 = PopupMenu::bind_global_menu();
    cVar4 = PopupMenu::is_system_menu();
    if (cVar4 == '\0') {
      pcVar1 = *(code **)(*plVar6 + 0x1d8);
      iVar5 = _find_global_start_index(this);
      if (*(long *)(this + 0xa10) == 0) {
        iVar8 = 0;
      }
      else {
        iVar8 = (int)*(undefined8 *)(*(long *)(this + 0xa10) + -8);
      }
      itos((long)&local_100);
      local_b8 = "#";
      local_110 = 0;
      local_b0 = 1;
      String::parse_latin1((StrRange *)&local_110);
      String::operator+(local_108,(String *)(this + 0xb10));
      String::operator+((String *)local_f8,local_108);
      Variant::Variant((Variant *)local_78,(String *)local_f8);
      StringName::StringName((StringName *)&local_120,"",false);
      cVar4 = Node::can_auto_translate();
      if (cVar4 == '\0') {
        local_118 = 0;
        if (local_e8._0_8_ != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_118,(CowData *)local_178);
        }
      }
      else {
        StringName::StringName((StringName *)&local_b8,(String *)local_178,false);
        Object::tr((StringName *)&local_118,(StringName *)this);
        if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
          StringName::unref();
        }
      }
      local_150 = (CowData<char32_t> *)&local_118;
      (*pcVar1)(plVar6,&local_130,local_150,&local_128,(Variant *)local_78,iVar5 + -1 + iVar8);
      CowData<char32_t>::_unref(local_150);
      if ((StringName::configured != '\0') && (local_120 != 0)) {
        StringName::unref();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)local_f8);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_108);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
      if (*(long *)(this + 0xa10) == 0) {
        lVar9 = 0;
        lVar7 = -1;
LAB_0010b7c4:
        _err_print_index_error
                  ("operator[]","./core/templates/vector.h",0x38,lVar7,lVar9,"p_index",
                   "((Vector<T> *)(this))->_cowdata.size()","",false,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      lVar9 = *(long *)(*(long *)(this + 0xa10) + -8);
      lVar7 = lVar9 + -1;
      if (lVar7 < 0) goto LAB_0010b7c4;
      CowData<MenuBar::Menu>::_copy_on_write(this_00);
      *(undefined8 *)(*(long *)(this + 0xa10) + lVar7 * 0x28 + 0x20) = local_128;
    }
  }
  Control::update_minimum_size();
  if (((local_d8 != (Object *)0x0) &&
      (cVar4 = RefCounted::unreference(), pOVar11 = local_d8, cVar4 != '\0')) &&
     (cVar4 = predelete_handler(local_d8), cVar4 != '\0')) {
    (**(code **)(*(long *)pOVar11 + 0x140))(pOVar11);
    Memory::free_static(pOVar11,false);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)(local_e8 + 8));
  CowData<char32_t>::_unref(local_178);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
LAB_0010b329:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MenuBar::move_child_notify(Node*) */

void __thiscall MenuBar::move_child_notify(MenuBar *this,Node *param_1)

{
  long *plVar1;
  CowData<char32_t> *this_00;
  CowData *pCVar2;
  char *pcVar3;
  code *pcVar4;
  long lVar5;
  Object *pOVar6;
  undefined2 uVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  PopupMenu *pPVar11;
  Object *pOVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  int iVar16;
  long lVar17;
  long lVar18;
  long in_FS_OFFSET;
  StringName *local_170;
  CowData<char32_t> *local_140;
  char *local_118;
  undefined8 local_110;
  long local_108;
  undefined8 local_100;
  undefined8 local_f8;
  String local_f0 [8];
  CowData<char32_t> local_e8 [8];
  long local_e0;
  long local_d8;
  long local_d0;
  Object *local_c8;
  undefined2 local_c0;
  long local_b8 [2];
  char *local_a8;
  size_t local_a0;
  Object *local_98;
  undefined2 local_90;
  long local_88;
  int local_78 [8];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Node::move_child_notify((Node *)this);
  if ((param_1 == (Node *)0x0) ||
     (pPVar11 = (PopupMenu *)__dynamic_cast(param_1,&Object::typeinfo,&PopupMenu::typeinfo,0),
     pPVar11 == (PopupMenu *)0x0)) {
LAB_0010bc30:
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  Window::get_title();
  if ((local_e0 != 0) && (1 < *(uint *)(local_e0 + -8))) {
    Window::get_title();
    goto LAB_0010b950;
  }
  Node::get_name();
  if (local_d8 == 0) {
    local_118 = (char *)0x0;
    goto LAB_0010b950;
  }
  pcVar3 = *(char **)(local_d8 + 8);
  local_118 = (char *)0x0;
  if (pcVar3 == (char *)0x0) {
    if (*(long *)(local_d8 + 0x10) != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_118,(CowData *)(local_d8 + 0x10));
      goto LAB_0010b932;
    }
    if (StringName::configured == '\0') goto LAB_0010b950;
  }
  else {
    local_a0 = strlen(pcVar3);
    local_a8 = pcVar3;
    String::parse_latin1((StrRange *)&local_118);
LAB_0010b932:
    if ((StringName::configured == '\0') || (local_d8 == 0)) goto LAB_0010b950;
  }
  StringName::unref();
LAB_0010b950:
  local_170 = (StringName *)&local_d8;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  pcVar4 = *(code **)(*(long *)pPVar11 + 0xb8);
  Variant::Variant((Variant *)local_78,(String *)&local_118);
  StringName::StringName(local_170,"_menu_name",false);
  (*pcVar4)((Variant *)local_58,pPVar11,local_170,(Variant *)local_78);
  Variant::operator_cast_to_String((Variant *)&local_a8);
  if (local_118 != local_a8) {
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
    local_118 = local_a8;
    local_a8 = (char *)0x0;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_d8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  lVar18 = *(long *)(this + 0xa10);
  if (lVar18 != 0) {
    iVar16 = 0;
    do {
      if ((int)*(long *)(lVar18 + -8) <= iVar16) {
        lVar17 = -1;
        lVar15 = 0;
        if (lVar18 != 0) {
          lVar15 = *(long *)(lVar18 + -8);
        }
        goto LAB_0010bad8;
      }
      get_menu_title((int)(Variant *)&local_a8);
      cVar8 = String::operator==((String *)&local_a8,(String *)&local_118);
      pcVar3 = local_a8;
      if (local_a8 != (char *)0x0) {
        LOCK();
        plVar14 = (long *)(local_a8 + -0x10);
        *plVar14 = *plVar14 + -1;
        UNLOCK();
        if (*plVar14 == 0) {
          local_a8 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar18 = *(long *)(this + 0xa10);
      if (cVar8 != '\0') {
        lVar17 = (long)iVar16;
        if (lVar18 == 0) goto LAB_0010bad5;
        lVar15 = *(long *)(lVar18 + -8);
        if (*(long *)(lVar18 + -8) <= lVar17) goto LAB_0010bad8;
        local_d8 = 0;
        pCVar2 = (CowData *)(lVar18 + lVar17 * 0x28);
        if (*(long *)pCVar2 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)local_170,pCVar2);
        }
        local_d0 = 0;
        if (*(long *)(pCVar2 + 8) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_d0,pCVar2 + 8);
        }
        local_c8 = (Object *)0x0;
        if ((*(Object **)(pCVar2 + 0x10) != (Object *)0x0) &&
           (local_c8 = *(Object **)(pCVar2 + 0x10), cVar8 = RefCounted::reference(), cVar8 == '\0'))
        {
          local_c8 = (Object *)0x0;
        }
        local_c0 = *(undefined2 *)(pCVar2 + 0x18);
        local_b8[0] = *(long *)(pCVar2 + 0x20);
        Vector<MenuBar::Menu>::remove_at((Vector<MenuBar::Menu> *)(this + 0xa08),lVar17);
        iVar16 = get_menu_idx_from_control(this,pPVar11);
        local_a8 = (char *)0x0;
        if (local_d8 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_a8,(CowData *)local_170);
        }
        local_a0 = 0;
        if (local_d0 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,(CowData *)&local_d0);
        }
        local_98 = (Object *)0x0;
        if (local_c8 != (Object *)0x0) {
          local_98 = local_c8;
          cVar8 = RefCounted::reference();
          if (cVar8 == '\0') {
            local_98 = (Object *)0x0;
          }
        }
        uVar7 = local_c0;
        lVar18 = (long)iVar16;
        local_90 = local_c0;
        local_88 = local_b8[0];
        if (*(long *)(this + 0xa10) == 0) {
          lVar15 = 1;
          lVar17 = 0;
        }
        else {
          lVar17 = *(long *)(*(long *)(this + 0xa10) + -8);
          lVar15 = lVar17 + 1;
        }
        if ((lVar18 < 0) || (lVar15 <= lVar18)) {
          _err_print_index_error
                    ("insert","./core/templates/cowdata.h",0xf0,lVar18,lVar15,"p_pos","new_size","",
                     false,false);
          pOVar12 = local_98;
          goto LAB_0010bbb3;
        }
        iVar9 = CowData<MenuBar::Menu>::resize<false>
                          ((CowData<MenuBar::Menu> *)(this + 0xa10),lVar15);
        if (iVar9 != 0) {
          _err_print_error("insert","./core/templates/cowdata.h",0xf2,
                           "Condition \"err\" is true. Returning: err",0,0);
          pOVar12 = local_98;
          goto LAB_0010bbb3;
        }
        CowData<MenuBar::Menu>::_copy_on_write((CowData<MenuBar::Menu> *)(this + 0xa10));
        lVar15 = *(long *)(this + 0xa10);
        if (lVar18 < lVar17) {
          plVar14 = (long *)(lVar15 + lVar17 * 0x28);
          do {
            lVar5 = *plVar14;
            lVar13 = plVar14[-5];
            if (lVar5 != lVar13) {
              if (lVar5 != 0) {
                LOCK();
                plVar1 = (long *)(lVar5 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  lVar5 = *plVar14;
                  *plVar14 = 0;
                  Memory::free_static((void *)(lVar5 + -0x10),false);
                }
                lVar13 = plVar14[-5];
              }
              *plVar14 = lVar13;
              plVar14[-5] = 0;
            }
            lVar5 = plVar14[1];
            lVar13 = plVar14[-4];
            if (lVar5 != lVar13) {
              if (lVar5 != 0) {
                LOCK();
                plVar1 = (long *)(lVar5 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  lVar5 = plVar14[1];
                  plVar14[1] = 0;
                  Memory::free_static((void *)(lVar5 + -0x10),false);
                }
                lVar13 = plVar14[-4];
              }
              plVar14[1] = lVar13;
              plVar14[-4] = 0;
            }
            pOVar12 = (Object *)plVar14[-3];
            pOVar6 = (Object *)plVar14[2];
            if (pOVar12 != pOVar6) {
              plVar14[2] = (long)pOVar12;
              if ((pOVar12 != (Object *)0x0) && (cVar8 = RefCounted::reference(), cVar8 == '\0')) {
                plVar14[2] = 0;
              }
              if (((pOVar6 != (Object *)0x0) && (cVar8 = RefCounted::unreference(), cVar8 != '\0'))
                 && (cVar8 = predelete_handler(pOVar6), cVar8 != '\0')) {
                (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
                Memory::free_static(pOVar6,false);
              }
            }
            lVar17 = lVar17 + -1;
            *(short *)(plVar14 + 3) = (short)plVar14[-2];
            plVar14[4] = plVar14[-1];
            plVar14 = plVar14 + -5;
            uVar7 = local_90;
          } while (lVar18 != lVar17);
        }
        this_00 = (CowData<char32_t> *)(lVar15 + lVar18 * 0x28);
        if (*(char **)this_00 != local_a8) {
          CowData<char32_t>::_ref(this_00,(CowData *)&local_a8);
        }
        if (*(size_t *)(this_00 + 8) != local_a0) {
          CowData<char32_t>::_ref(this_00 + 8,(CowData *)&local_a0);
        }
        pOVar12 = local_98;
        pOVar6 = *(Object **)(this_00 + 0x10);
        if (local_98 == pOVar6) {
LAB_0010bb9d:
          *(undefined2 *)(this_00 + 0x18) = uVar7;
          *(long *)(this_00 + 0x20) = local_88;
LAB_0010bbb3:
          if (pOVar12 != (Object *)0x0) goto LAB_0010bbb8;
        }
        else {
          *(Object **)(this_00 + 0x10) = local_98;
          if ((local_98 == (Object *)0x0) || (cVar8 = RefCounted::reference(), cVar8 != '\0')) {
            if (pOVar6 != (Object *)0x0) goto LAB_0010bfa5;
            goto LAB_0010bb9d;
          }
          *(undefined8 *)(this_00 + 0x10) = 0;
          if (pOVar6 != (Object *)0x0) {
LAB_0010bfa5:
            cVar8 = RefCounted::unreference();
            if ((cVar8 != '\0') && (cVar8 = predelete_handler(pOVar6), cVar8 != '\0')) {
              (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
              Memory::free_static(pOVar6,false);
            }
            goto LAB_0010bb9d;
          }
          *(undefined2 *)(this_00 + 0x18) = uVar7;
          *(long *)(this_00 + 0x20) = local_88;
LAB_0010bbb8:
          cVar8 = RefCounted::unreference();
          if ((cVar8 != '\0') && (cVar8 = predelete_handler(pOVar12), cVar8 != '\0')) {
            (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
            Memory::free_static(pOVar12,false);
          }
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        if (((*(long *)(this + 0xb10) != 0) && (1 < *(uint *)(*(long *)(this + 0xb10) + -8))) &&
           (cVar8 = PopupMenu::is_system_menu(), plVar14 = NativeMenu::singleton, cVar8 == '\0')) {
          local_110 = (**(code **)(*NativeMenu::singleton + 0x160))(NativeMenu::singleton);
          iVar9 = _find_global_start_index(this);
          if (local_b8[0] != 0) {
            iVar10 = (**(code **)(*plVar14 + 0x230))(plVar14,&local_110,local_b8);
            if (-1 < iVar10) {
              (**(code **)(*plVar14 + 0x350))(plVar14,&local_110,iVar10);
            }
          }
          if (iVar16 != -1) {
            pcVar4 = *(code **)(*plVar14 + 0x1d8);
            itos((long)local_e8);
            local_f8 = 0;
            local_a8 = "#";
            local_a0 = 1;
            String::parse_latin1((StrRange *)&local_f8);
            String::operator+(local_f0,(String *)(this + 0xb10));
            String::operator+((String *)&local_e0,local_f0);
            Variant::Variant((Variant *)local_58,(String *)&local_e0);
            StringName::StringName((StringName *)&local_108,"",false);
            cVar8 = Node::can_auto_translate();
            if (cVar8 == '\0') {
              local_100 = 0;
              if (local_d8 != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_100,(CowData *)local_170);
              }
            }
            else {
              StringName::StringName((StringName *)&local_a8,(String *)local_170,false);
              Object::tr((StringName *)&local_100,(StringName *)this);
              if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
                StringName::unref();
              }
            }
            local_140 = (CowData<char32_t> *)&local_100;
            (*pcVar4)(plVar14,&local_110,local_140,local_b8,(Variant *)local_58,iVar16 + iVar9);
            CowData<char32_t>::_unref(local_140);
            if ((StringName::configured != '\0') && (local_108 != 0)) {
              StringName::unref();
            }
            if (Variant::needs_deinit[local_58[0]] != '\0') {
              Variant::_clear_internal();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_f0);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
            CowData<char32_t>::_unref(local_e8);
          }
        }
        if (((local_c8 != (Object *)0x0) &&
            (cVar8 = RefCounted::unreference(), pOVar12 = local_c8, cVar8 != '\0')) &&
           (cVar8 = predelete_handler(local_c8), cVar8 != '\0')) {
          (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
          Memory::free_static(pOVar12,false);
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_170);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
        goto LAB_0010bc30;
      }
      iVar16 = iVar16 + 1;
    } while (lVar18 != 0);
  }
  lVar17 = -1;
LAB_0010bad5:
  lVar15 = 0;
LAB_0010bad8:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,lVar17,lVar15,"p_index","size()","",false,true)
  ;
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}



/* MenuBar::remove_child_notify(Node*) */

void __thiscall MenuBar::remove_child_notify(MenuBar *this,Node *param_1)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  char cVar4;
  int iVar5;
  PopupMenu *pPVar6;
  long lVar7;
  long lVar8;
  long in_FS_OFFSET;
  long local_60;
  long local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Node::remove_child_notify((Node *)this);
  if ((param_1 == (Node *)0x0) ||
     (pPVar6 = (PopupMenu *)__dynamic_cast(param_1,&Object::typeinfo,&PopupMenu::typeinfo,0),
     pPVar6 == (PopupMenu *)0x0)) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
    goto LAB_0010c8d5;
  }
  iVar5 = get_menu_idx_from_control(this,pPVar6);
  lVar8 = (long)iVar5;
  if ((*(long *)(this + 0xb10) != 0) &&
     ((1 < *(uint *)(*(long *)(this + 0xb10) + -8) &&
      (cVar4 = PopupMenu::is_system_menu(), plVar3 = NativeMenu::singleton, cVar4 == '\0')))) {
    lVar2 = *(long *)(this + 0xa10);
    if (lVar8 < 0) {
      if (lVar2 != 0) {
        lVar7 = *(long *)(lVar2 + -8);
        goto LAB_0010c889;
      }
    }
    else if (lVar2 != 0) {
      lVar7 = *(long *)(lVar2 + -8);
      if (lVar7 <= lVar8) goto LAB_0010c889;
      if (*(long *)(lVar2 + 0x20 + lVar8 * 0x28) != 0) {
        local_58[0] = (**(code **)(*NativeMenu::singleton + 0x160))(NativeMenu::singleton,1);
        lVar2 = *(long *)(this + 0xa10);
        if (lVar2 == 0) goto LAB_0010c8d0;
        lVar7 = *(long *)(lVar2 + -8);
        if (lVar7 <= lVar8) goto LAB_0010c889;
        iVar5 = (**(code **)(*plVar3 + 0x230))(plVar3,local_58,lVar2 + 0x20 + lVar8 * 0x28);
        if (-1 < iVar5) {
          (**(code **)(*plVar3 + 0x350))(plVar3,local_58,iVar5);
        }
      }
      PopupMenu::unbind_global_menu();
      goto LAB_0010c514;
    }
LAB_0010c8d0:
    lVar7 = 0;
LAB_0010c889:
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,lVar8,lVar7,"p_index","size()","",false,true)
    ;
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
LAB_0010c514:
  pcVar1 = *(code **)(*(long *)pPVar6 + 0x110);
  create_custom_callable_function_pointer<MenuBar,ObjectID>
            ((MenuBar *)local_58,(char *)this,(_func_void_ObjectID *)"&MenuBar::_popup_changed");
  StringName::StringName((StringName *)&local_60,"title_changed",false);
  (*pcVar1)(pPVar6,(StringName *)&local_60,(MenuBar *)local_58);
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_58);
  Vector<MenuBar::Menu>::remove_at((Vector<MenuBar::Menu> *)(this + 0xa08),lVar8);
  pcVar1 = *(code **)(*(long *)param_1 + 0xb0);
  StringName::StringName((StringName *)local_58,"_menu_name",false);
  (*pcVar1)(param_1,(MenuBar *)local_58);
  if ((StringName::configured != '\0') && (local_58[0] != 0)) {
    StringName::unref();
  }
  pcVar1 = *(code **)(*(long *)param_1 + 0xb0);
  StringName::StringName((StringName *)local_58,"_menu_tooltip",false);
  (*pcVar1)(param_1,(MenuBar *)local_58);
  if ((StringName::configured != '\0') && (local_58[0] != 0)) {
    StringName::unref();
  }
  pcVar1 = *(code **)(*(long *)param_1 + 0x110);
  create_custom_callable_function_pointer<MenuBar>
            ((MenuBar *)local_58,(char *)this,(_func_void *)"&MenuBar::_refresh_menu_names");
  StringName::StringName((StringName *)&local_60,"renamed",false);
  (*pcVar1)(param_1,(StringName *)&local_60,(MenuBar *)local_58);
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_58);
  pcVar1 = *(code **)(*(long *)param_1 + 0x110);
  create_custom_callable_function_pointer<MenuBar,bool>
            ((MenuBar *)local_58,(char *)this,
             (_func_void_bool *)"&MenuBar::_popup_visibility_changed");
  StringName::StringName((StringName *)&local_60,"about_to_popup",false);
  (*pcVar1)(param_1,(StringName *)&local_60,(MenuBar *)local_58);
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_58);
  pcVar1 = *(code **)(*(long *)param_1 + 0x110);
  create_custom_callable_function_pointer<MenuBar,bool>
            ((MenuBar *)local_58,(char *)this,
             (_func_void_bool *)"&MenuBar::_popup_visibility_changed");
  StringName::StringName((StringName *)&local_60,"popup_hide",false);
  (*pcVar1)(param_1,(StringName *)&local_60,(MenuBar *)local_58);
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_58);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    Control::update_minimum_size();
    return;
  }
LAB_0010c8d5:
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



/* MenuBar::is_class_ptr(void*) const */

uint __thiscall MenuBar::is_class_ptr(MenuBar *this,void *param_1)

{
  return (uint)CONCAT71(0x11cd,(undefined4 *)param_1 == &Control::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x11cd,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x11cd,(undefined4 *)param_1 == &CanvasItem::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x11cd,(undefined4 *)param_1 == &Node::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x11cd,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* CallableCustomMethodPointer<MenuBar, void, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<MenuBar,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<MenuBar,void,bool> *this)

{
  return;
}



/* CallableCustomMethodPointer<MenuBar, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<MenuBar,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<MenuBar,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<MenuBar, void, ObjectID>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<MenuBar,void,ObjectID>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<MenuBar,void,ObjectID> *this)

{
  return;
}



/* MethodBindTRC<PopupMenu*, int>::_gen_argument_type(int) const */

int __thiscall
MethodBindTRC<PopupMenu*,int>::_gen_argument_type(MethodBindTRC<PopupMenu*,int> *this,int param_1)

{
  return (-(uint)(param_1 == 0) & 0xffffffea) + 0x18;
}



/* MethodBindTRC<PopupMenu*, int>::get_argument_meta(int) const */

byte __thiscall
MethodBindTRC<PopupMenu*,int>::get_argument_meta(MethodBindTRC<PopupMenu*,int> *this,int param_1)

{
  return -(param_1 == 0) & 3;
}



/* MethodBindTRC<bool, int>::_gen_argument_type(int) const */

char __thiscall
MethodBindTRC<bool,int>::_gen_argument_type(MethodBindTRC<bool,int> *this,int param_1)

{
  return (param_1 == 0) + '\x01';
}



/* MethodBindTRC<bool, int>::get_argument_meta(int) const */

byte __thiscall
MethodBindTRC<bool,int>::get_argument_meta(MethodBindTRC<bool,int> *this,int param_1)

{
  return -(param_1 == 0) & 3;
}



/* MethodBindT<int, bool>::_gen_argument_type(int) const */

char __thiscall MethodBindT<int,bool>::_gen_argument_type(MethodBindT<int,bool> *this,int param_1)

{
  char cVar1;
  
  cVar1 = (param_1 == 0) + '\x01';
  if (1 < (uint)param_1) {
    cVar1 = '\0';
  }
  return cVar1;
}



/* MethodBindT<int, bool>::get_argument_meta(int) const */

byte __thiscall MethodBindT<int,bool>::get_argument_meta(MethodBindT<int,bool> *this,int param_1)

{
  return -(param_1 == 0) & 3;
}



/* MethodBindTRC<String, int>::_gen_argument_type(int) const */

int __thiscall
MethodBindTRC<String,int>::_gen_argument_type(MethodBindTRC<String,int> *this,int param_1)

{
  return (-(uint)(param_1 == 0) & 0xfffffffe) + 4;
}



/* MethodBindTRC<String, int>::get_argument_meta(int) const */

byte __thiscall
MethodBindTRC<String,int>::get_argument_meta(MethodBindTRC<String,int> *this,int param_1)

{
  return -(param_1 == 0) & 3;
}



/* MethodBindT<int, String const&>::_gen_argument_type(int) const */

int __thiscall
MethodBindT<int,String_const&>::_gen_argument_type(MethodBindT<int,String_const&> *this,int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if ((uint)param_1 < 2) {
    iVar1 = (-(uint)(param_1 == 0) & 0xfffffffe) + 4;
  }
  return iVar1;
}



/* MethodBindT<int, String const&>::get_argument_meta(int) const */

byte __thiscall
MethodBindT<int,String_const&>::get_argument_meta(MethodBindT<int,String_const&> *this,int param_1)

{
  return -(param_1 == 0) & 3;
}



/* MethodBindT<int>::_gen_argument_type(int) const */

char __thiscall MethodBindT<int>::_gen_argument_type(MethodBindT<int> *this,int param_1)

{
  return (param_1 == 0) * '\x02';
}



/* MethodBindT<int>::get_argument_meta(int) const */

byte __thiscall MethodBindT<int>::get_argument_meta(MethodBindT<int> *this,int param_1)

{
  return -(param_1 == 0) & 3;
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



/* MethodBindTRC<Control::TextDirection>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<Control::TextDirection>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<Control::TextDirection>::get_argument_meta(int) const */

undefined8 MethodBindTRC<Control::TextDirection>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Control::TextDirection>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<Control::TextDirection>::_gen_argument_type
          (MethodBindT<Control::TextDirection> *this,int param_1)

{
  return (param_1 == 0) * '\x02';
}



/* MethodBindT<Control::TextDirection>::get_argument_meta(int) const */

undefined8 MethodBindT<Control::TextDirection>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<int>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<int>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<int>::get_argument_meta(int) const */

uint __thiscall MethodBindTRC<int>::get_argument_meta(MethodBindTRC<int> *this,int param_1)

{
  return param_1 >> 0x1f & 3;
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



/* MethodBindTR<bool>::_gen_argument_type(int) const */

undefined8 MethodBindTR<bool>::_gen_argument_type(int param_1)

{
  return 1;
}



/* MethodBindTR<bool>::get_argument_meta(int) const */

undefined8 MethodBindTR<bool>::get_argument_meta(int param_1)

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



/* CallableCustomMethodPointer<MenuBar, void, bool>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<MenuBar,void,bool>::get_argument_count
          (CallableCustomMethodPointer<MenuBar,void,bool> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<MenuBar, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<MenuBar,void>::get_argument_count
          (CallableCustomMethodPointer<MenuBar,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<MenuBar, void, ObjectID>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<MenuBar,void,ObjectID>::get_argument_count
          (CallableCustomMethodPointer<MenuBar,void,ObjectID> *this,bool *param_1)

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



/* CallableCustomMethodPointer<MenuBar, void, ObjectID>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<MenuBar,void,ObjectID>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<MenuBar,void,ObjectID> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<MenuBar, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<MenuBar,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<MenuBar,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<MenuBar, void, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<MenuBar,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<MenuBar,void,bool> *this)

{
  operator_delete(this,0x48);
  return;
}



/* MethodBindTR<bool>::~MethodBindTR() */

void __thiscall MethodBindTR<bool>::~MethodBindTR(MethodBindTR<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011c850;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<bool>::~MethodBindTR() */

void __thiscall MethodBindTR<bool>::~MethodBindTR(MethodBindTR<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011c850;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Control::TextDirection>::~MethodBindT() */

void __thiscall
MethodBindT<Control::TextDirection>::~MethodBindT(MethodBindT<Control::TextDirection> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011c970;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Control::TextDirection>::~MethodBindT() */

void __thiscall
MethodBindT<Control::TextDirection>::~MethodBindT(MethodBindT<Control::TextDirection> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011c970;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Control::TextDirection>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Control::TextDirection>::~MethodBindTRC(MethodBindTRC<Control::TextDirection> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011c9d0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Control::TextDirection>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Control::TextDirection>::~MethodBindTRC(MethodBindTRC<Control::TextDirection> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011c9d0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<String const&>::~MethodBindT() */

void __thiscall MethodBindT<String_const&>::~MethodBindT(MethodBindT<String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011ca30;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<String const&>::~MethodBindT() */

void __thiscall MethodBindT<String_const&>::~MethodBindT(MethodBindT<String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011ca30;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<String>::~MethodBindTRC() */

void __thiscall MethodBindTRC<String>::~MethodBindTRC(MethodBindTRC<String> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011ca90;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<String>::~MethodBindTRC() */

void __thiscall MethodBindTRC<String>::~MethodBindTRC(MethodBindTRC<String> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011ca90;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<bool>::~MethodBindT() */

void __thiscall MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011c7f0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<bool>::~MethodBindT() */

void __thiscall MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011c7f0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011c8b0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011c8b0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<int>::~MethodBindT() */

void __thiscall MethodBindT<int>::~MethodBindT(MethodBindT<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011caf0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<int>::~MethodBindT() */

void __thiscall MethodBindT<int>::~MethodBindT(MethodBindT<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011caf0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011c910;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011c910;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<int, String const&>::~MethodBindT() */

void __thiscall MethodBindT<int,String_const&>::~MethodBindT(MethodBindT<int,String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011cb50;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<int, String const&>::~MethodBindT() */

void __thiscall MethodBindT<int,String_const&>::~MethodBindT(MethodBindT<int,String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011cb50;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<String, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<String,int>::~MethodBindTRC(MethodBindTRC<String,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011cbb0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<String, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<String,int>::~MethodBindTRC(MethodBindTRC<String,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011cbb0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<int, bool>::~MethodBindT() */

void __thiscall MethodBindT<int,bool>::~MethodBindT(MethodBindT<int,bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011cc10;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<int, bool>::~MethodBindT() */

void __thiscall MethodBindT<int,bool>::~MethodBindT(MethodBindT<int,bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011cc10;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<bool, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool,int>::~MethodBindTRC(MethodBindTRC<bool,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011cc70;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<bool, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool,int>::~MethodBindTRC(MethodBindTRC<bool,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011cc70;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<PopupMenu*, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<PopupMenu*,int>::~MethodBindTRC(MethodBindTRC<PopupMenu*,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011ccd0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<PopupMenu*, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<PopupMenu*,int>::~MethodBindTRC(MethodBindTRC<PopupMenu*,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011ccd0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MenuBar::_property_get_revertv(StringName const&, Variant&) const */

undefined8 MenuBar::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* MenuBar::_property_can_revertv(StringName const&) const */

undefined8 MenuBar::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00122008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* CallableCustomMethodPointer<MenuBar, void, bool>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<MenuBar,void,bool>::get_object
          (CallableCustomMethodPointer<MenuBar,void,bool> *this)

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
      goto LAB_0010d9cd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010d9cd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010d9cd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<MenuBar, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<MenuBar,void>::get_object
          (CallableCustomMethodPointer<MenuBar,void> *this)

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
      goto LAB_0010dacd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010dacd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010dacd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<MenuBar, void, ObjectID>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<MenuBar,void,ObjectID>::get_object
          (CallableCustomMethodPointer<MenuBar,void,ObjectID> *this)

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
      goto LAB_0010dbcd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010dbcd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010dbcd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* MenuBar::_validate_propertyv(PropertyInfo&) const */

void MenuBar::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  if ((code *)PTR__validate_property_00122010 == CanvasItem::_validate_property) {
    return;
  }
  Control::_validate_property(param_1);
  return;
}



/* MenuBar::_setv(StringName const&, Variant const&) */

undefined8 MenuBar::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_00122018 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x0010dd88) */
/* MenuBar::_getv(StringName const&, Variant&) const */

undefined8 MenuBar::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00122020 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   MenuBar::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#14}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#14}>
     ::_M_invoke(_Any_data *param_1,Node **param_2,StringName *param_3,StringName *param_4)

{
  code *pcVar1;
  undefined8 in_XMM1_Qa;
  
  Control::get_theme_item();
  _DAT_00000a98 = Variant::operator_cast_to_Color((Variant *)&stack0x00000000);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  _DAT_00000aa0 = in_XMM1_Qa;
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   MenuBar::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#19}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#19}>
     ::_M_invoke(_Any_data *param_1,Node **param_2,StringName *param_3,StringName *param_4)

{
  code *pcVar1;
  undefined8 in_XMM1_Qa;
  
  Control::get_theme_item();
  _DAT_00000ae8 = Variant::operator_cast_to_Color((Variant *)&stack0x00000000);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  _DAT_00000af0 = in_XMM1_Qa;
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   MenuBar::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#20}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#20}>
     ::_M_invoke(_Any_data *param_1,Node **param_2,StringName *param_3,StringName *param_4)

{
  code *pcVar1;
  undefined8 in_XMM1_Qa;
  
  Control::get_theme_item();
  _DAT_00000af8 = Variant::operator_cast_to_Color((Variant *)&stack0x00000000);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  _DAT_00000b00 = in_XMM1_Qa;
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   MenuBar::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#18}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#18}>
     ::_M_invoke(_Any_data *param_1,Node **param_2,StringName *param_3,StringName *param_4)

{
  code *pcVar1;
  undefined8 in_XMM1_Qa;
  
  Control::get_theme_item();
  _DAT_00000ad8 = Variant::operator_cast_to_Color((Variant *)&stack0x00000000);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  _DAT_00000ae0 = in_XMM1_Qa;
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   MenuBar::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#15}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#15}>
     ::_M_invoke(_Any_data *param_1,Node **param_2,StringName *param_3,StringName *param_4)

{
  code *pcVar1;
  undefined8 in_XMM1_Qa;
  
  Control::get_theme_item();
  _DAT_00000aa8 = Variant::operator_cast_to_Color((Variant *)&stack0x00000000);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  _DAT_00000ab0 = in_XMM1_Qa;
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   MenuBar::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#17}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#17}>
     ::_M_invoke(_Any_data *param_1,Node **param_2,StringName *param_3,StringName *param_4)

{
  code *pcVar1;
  undefined8 in_XMM1_Qa;
  
  Control::get_theme_item();
  _DAT_00000ac8 = Variant::operator_cast_to_Color((Variant *)&stack0x00000000);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  _DAT_00000ad0 = in_XMM1_Qa;
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   MenuBar::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#16}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#16}>
     ::_M_invoke(_Any_data *param_1,Node **param_2,StringName *param_3,StringName *param_4)

{
  code *pcVar1;
  undefined8 in_XMM1_Qa;
  
  Control::get_theme_item();
  _DAT_00000ab8 = Variant::operator_cast_to_Color((Variant *)&stack0x00000000);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  _DAT_00000ac0 = in_XMM1_Qa;
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   MenuBar::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#21}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#21}>
     ::_M_invoke(_Any_data *param_1,Node **param_2,StringName *param_3,StringName *param_4)

{
  code *pcVar1;
  
  Control::get_theme_item();
  Variant::operator_cast_to_int((Variant *)&stack0x00000000);
  _DAT_00000b08 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   MenuBar::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#13}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#13}>
     ::_M_invoke(_Any_data *param_1,Node **param_2,StringName *param_3,StringName *param_4)

{
  code *pcVar1;
  
  Control::get_theme_item();
  Variant::operator_cast_to_int((Variant *)&stack0x00000000);
  _DAT_00000a94 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   MenuBar::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#12}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#12}>
     ::_M_invoke(_Any_data *param_1,Node **param_2,StringName *param_3,StringName *param_4)

{
  code *pcVar1;
  
  Control::get_theme_item();
  Variant::operator_cast_to_int((Variant *)&stack0x00000000);
  _DAT_00000a90 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   MenuBar::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#11}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#11}>
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
   MenuBar::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#3}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#3}>
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
   MenuBar::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#2}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#2}>
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
   MenuBar::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#7}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#7}>
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
   MenuBar::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#9}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#9}>
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
   MenuBar::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#8}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#8}>
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
   MenuBar::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#6}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#6}>
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
   MenuBar::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#5}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#5}>
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
   MenuBar::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#10}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#10}>
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
   MenuBar::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#1}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#1}>
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
   MenuBar::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#4}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),MenuBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#4}>
     ::_M_invoke(_Any_data *param_1,Node **param_2,StringName *param_3,StringName *param_4)

{
  code *pcVar1;
  
  Control::get_theme_item();
  Variant::get_validated_object();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<PopupMenu*>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<PopupMenu*>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<MenuBar::Menu>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<MenuBar::Menu>::_copy_on_write(void)

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



/* MenuBar::_get_class_namev() const */

undefined8 * MenuBar::_get_class_namev(void)

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
LAB_0010e1f3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010e1f3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"MenuBar");
      goto LAB_0010e25e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"MenuBar");
LAB_0010e25e:
  return &_get_class_namev()::_class_name_static;
}



/* MenuBar::get_class() const */

void MenuBar::get_class(void)

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



/* MethodBindTRC<int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<int>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC5;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 2;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar3[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_58);
    puVar3[10] = 6;
    if (puVar3[6] == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(puVar3 + 8),false);
      if (*(undefined **)(puVar3 + 4) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar3 + 4) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x0010e4ac;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010e4ac:
  local_58 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<String>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<String>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC5;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 4;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar3[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_58);
    puVar3[10] = 6;
    if (puVar3[6] == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(puVar3 + 8),false);
      if (*(undefined **)(puVar3 + 4) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar3 + 4) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x0010e62c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010e62c:
  local_58 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<bool>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTR<bool>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC5;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 1;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar3[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_58);
    puVar3[10] = 6;
    if (puVar3[6] == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(puVar3 + 8),false);
      if (*(undefined **)(puVar3 + 4) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar3 + 4) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x0010e7ac;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010e7ac:
  local_58 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<bool>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC5;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 1;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar3[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_58);
    puVar3[10] = 6;
    if (puVar3[6] == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(puVar3 + 8),false);
      if (*(undefined **)(puVar3 + 4) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar3 + 4) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x0010e92c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010e92c:
  local_58 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
        if (pvVar5 == (void *)0x0) goto LAB_0010eac4;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_0010eac4:
  if (*(long *)this != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)this + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar4 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
      return;
    }
  }
  return;
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



/* Node::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void Node::_get_property_listv(List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
  undefined7 in_register_00000031;
  List *pLVar6;
  long in_FS_OFFSET;
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
  
  pLVar6 = (List *)CONCAT71(in_register_00000031,param_2);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = 0;
  local_90 = 0;
  local_78 = &_LC43;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = &_LC43;
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
LAB_0010ed48:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0010ed48;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x0010ed66;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x0010ed66:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])pLVar6 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
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
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_58);
  }
  lVar3 = local_58;
  puVar5[10] = local_50;
  plVar1 = *(long **)pLVar6;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar5 + 0xc) = 0;
  *(long **)(puVar5 + 0x10) = plVar1;
  *(long *)(puVar5 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar5;
  }
  plVar1[1] = (long)puVar5;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar5;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
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
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  lVar2 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar1 = (long *)(local_98 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"Node",false);
  ClassDB::get_property_list((StringName *)&local_78,pLVar6,true,(Object *)param_1);
  if ((StringName::configured != '\0') && (local_78 != (undefined *)0x0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
            if (lVar3 == 0) goto LAB_0010f04f;
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
LAB_0010f04f:
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
    if (cVar6 != '\0') goto LAB_0010f103;
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
      if (cVar6 != '\0') goto LAB_0010f103;
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
        if (cVar6 != '\0') goto LAB_0010f103;
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar8 = String::operator==(param_1,"Object");
        return uVar8;
      }
      goto LAB_0010f318;
    }
  }
LAB_0010f103:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010f318:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MenuBar::is_class(String const&) const */

undefined8 __thiscall MenuBar::is_class(MenuBar *this,String *param_1)

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
            if (lVar3 == 0) goto LAB_0010f39f;
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
LAB_0010f39f:
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
    if (cVar6 != '\0') goto LAB_0010f453;
  }
  cVar6 = String::operator==(param_1,"MenuBar");
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
      if (cVar6 != '\0') goto LAB_0010f453;
    }
    cVar6 = String::operator==(param_1,"Control");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar8 = CanvasItem::is_class((CanvasItem *)this,param_1);
        return uVar8;
      }
      goto LAB_0010f598;
    }
  }
LAB_0010f453:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010f598:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CanvasItem::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall CanvasItem::_get_property_listv(CanvasItem *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
  long in_FS_OFFSET;
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
LAB_0010f718:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0010f718;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0010f735;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0010f735:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
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
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_58);
  }
  lVar3 = local_58;
  puVar5[10] = local_50;
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(long **)(puVar5 + 0x10) = plVar1;
  *(undefined8 *)(puVar5 + 0xc) = 0;
  *(long *)(puVar5 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar5;
  }
  plVar1[1] = (long)puVar5;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar5;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
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
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  lVar2 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar1 = (long *)(local_98 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"CanvasItem",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if ((code *)PTR__get_property_list_00122028 != Object::_get_property_list) {
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
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
  long in_FS_OFFSET;
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
LAB_0010fb98:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0010fb98;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0010fbb5;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0010fbb5:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
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
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_58);
  }
  lVar3 = local_58;
  puVar5[10] = local_50;
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(long **)(puVar5 + 0x10) = plVar1;
  *(undefined8 *)(puVar5 + 0xc) = 0;
  *(long *)(puVar5 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar5;
  }
  plVar1[1] = (long)puVar5;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar5;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
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
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  lVar2 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar1 = (long *)(local_98 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"Control",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if ((code *)PTR__get_property_list_00122030 != CanvasItem::_get_property_list) {
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



/* MenuBar::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall MenuBar::_get_property_listv(MenuBar *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
  long in_FS_OFFSET;
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
  local_78 = "MenuBar";
  local_70 = 7;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "MenuBar";
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
LAB_00110018:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00110018;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00110035;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00110035:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
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
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_58);
  }
  lVar3 = local_58;
  puVar5[10] = local_50;
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar5 + 0xc) = 0;
  *(long **)(puVar5 + 0x10) = plVar1;
  *(long *)(puVar5 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar5;
  }
  plVar1[1] = (long)puVar5;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar5;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
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
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  lVar2 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar1 = (long *)(local_98 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"MenuBar",false);
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



/* MenuBar::_find_global_start_index() */

int __thiscall MenuBar::_find_global_start_index(MenuBar *this)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  long in_FS_OFFSET;
  undefined8 local_68;
  long local_60;
  int local_58 [6];
  long local_40;
  
  plVar2 = NativeMenu::singleton;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((*(long *)(this + 0xb10) != 0) && (1 < *(uint *)(*(long *)(this + 0xb10) + -8))) &&
     (NativeMenu::singleton != (long *)0x0)) {
    local_68 = (**(code **)(*NativeMenu::singleton + 0x160))(NativeMenu::singleton,1);
    iVar5 = (**(code **)(*plVar2 + 0x340))(plVar2);
    if (0 < iVar5) {
      iVar6 = 0;
      do {
        (**(code **)(*plVar2 + 0x260))(local_58,plVar2,&local_68,iVar6);
        Variant::operator_cast_to_String((Variant *)&local_60);
        cVar4 = String::begins_with((String *)&local_60);
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
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (cVar4 != '\0') goto LAB_00110328;
        iVar6 = iVar6 + 1;
      } while (iVar5 != iVar6);
    }
  }
  iVar6 = -1;
LAB_00110328:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar6;
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



/* void Ref<TextLine>::instantiate<>() */

void __thiscall Ref<TextLine>::instantiate<>(Ref<TextLine> *this)

{
  char cVar1;
  TextLine *this_00;
  Object *pOVar2;
  Object *pOVar3;
  
  this_00 = (TextLine *)operator_new(0x1c0,"");
  TextLine::TextLine(this_00);
  postinitialize_handler((Object *)this_00);
  cVar1 = RefCounted::init_ref();
  if (cVar1 == '\0') {
    pOVar3 = *(Object **)this;
    if (pOVar3 == (Object *)0x0) {
      return;
    }
    *(undefined8 *)this = 0;
    cVar1 = RefCounted::unreference();
    if (cVar1 == '\0') {
      return;
    }
    this_00 = (TextLine *)0x0;
    cVar1 = predelete_handler(pOVar3);
    if (cVar1 == '\0') {
      return;
    }
  }
  else {
    pOVar3 = *(Object **)this;
    pOVar2 = pOVar3;
    if (this_00 == (TextLine *)pOVar3) goto LAB_001105c5;
    *(TextLine **)this = this_00;
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *(undefined8 *)this = 0;
    }
    pOVar2 = (Object *)this_00;
    if (((pOVar3 == (Object *)0x0) || (cVar1 = RefCounted::unreference(), cVar1 == '\0')) ||
       (cVar1 = predelete_handler(pOVar3), cVar1 == '\0')) goto LAB_001105c5;
  }
  (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
  Memory::free_static(pOVar3,false);
  pOVar2 = (Object *)this_00;
  if (this_00 == (TextLine *)0x0) {
    return;
  }
LAB_001105c5:
  cVar1 = RefCounted::unreference();
  if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar2), cVar1 != '\0')) {
    (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
    Memory::free_static(pOVar2,false);
    return;
  }
  return;
}



/* Callable create_custom_callable_function_pointer<MenuBar, ObjectID>(MenuBar*, char const*, void
   (MenuBar::*)(ObjectID)) */

MenuBar * create_custom_callable_function_pointer<MenuBar,ObjectID>
                    (MenuBar *param_1,char *param_2,_func_void_ObjectID *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC5;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_0011c640;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_void_ObjectID **)(this + 0x20) = param_3 + 1;
  Callable::Callable((Callable *)param_1,this);
  return param_1;
}



/* Callable create_custom_callable_function_pointer<MenuBar>(MenuBar*, char const*, void
   (MenuBar::*)()) */

MenuBar * create_custom_callable_function_pointer<MenuBar>
                    (MenuBar *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC5;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_0011c6d0;
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



/* Callable create_custom_callable_function_pointer<MenuBar, bool>(MenuBar*, char const*, void
   (MenuBar::*)(bool)) */

MenuBar * create_custom_callable_function_pointer<MenuBar,bool>
                    (MenuBar *param_1,char *param_2,_func_void_bool *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC5;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_0011c760;
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



/* godot::details::enum_qualified_name_to_class_info_name(String const&) */

details * __thiscall
godot::details::enum_qualified_name_to_class_info_name(details *this,String *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long in_FS_OFFSET;
  long local_60;
  char local_58 [8];
  long *local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  String::split(local_58,SUB81(param_1,0),0x11099d);
  if ((local_50 != (long *)0x0) && (2 < local_50[-1])) {
    local_60 = 0;
    local_48 = &_LC63;
    local_40 = 1;
    String::parse_latin1((StrRange *)&local_60);
    if (local_50 == (long *)0x0) {
      lVar7 = 0;
      lVar6 = -2;
    }
    else {
      lVar7 = local_50[-1];
      lVar6 = lVar7 + -2;
      if (-1 < lVar6) {
        String::operator+((String *)&local_48,(String *)(local_50 + lVar6));
        String::operator+((String *)this,(String *)&local_48);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        goto LAB_00110a6d;
      }
    }
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,lVar6,lVar7,"p_index","size()","",false,true)
    ;
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  local_60 = 0;
  local_48 = &_LC63;
  local_40 = 1;
  String::parse_latin1((StrRange *)&local_60);
  String::join((Vector *)this);
  lVar7 = local_60;
  if (local_60 != 0) {
    LOCK();
    plVar1 = (long *)(local_60 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_60 = 0;
      Memory::free_static((void *)(lVar7 + -0x10),false);
    }
  }
LAB_00110a6d:
  plVar1 = local_50;
  if (local_50 != (long *)0x0) {
    LOCK();
    plVar5 = local_50 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_50 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar7 = local_50[-1];
      local_50 = (long *)0x0;
      if (lVar7 != 0) {
        lVar6 = 0;
        plVar5 = plVar1;
        do {
          if (*plVar5 != 0) {
            LOCK();
            plVar2 = (long *)(*plVar5 + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar3 = *plVar5;
              *plVar5 = 0;
              Memory::free_static((void *)(lVar3 + -0x10),false);
            }
          }
          lVar6 = lVar6 + 1;
          plVar5 = plVar5 + 1;
        } while (lVar7 != lVar6);
      }
      Memory::free_static(plVar1 + -2,false);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Control::TextDirection>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Control::TextDirection>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  local_48 = "Control::TextDirection";
  local_40 = 0x16;
  String::parse_latin1((StrRange *)&local_58);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_50,(String *)&local_58);
  StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
  *puVar3 = 2;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  puVar3[10] = 0x10006;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_48);
  if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
    StringName::unref();
  }
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
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<MenuBar, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<MenuBar,void>::call
          (CallableCustomMethodPointer<MenuBar,void> *this,Variant **param_1,int param_2,
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
      goto LAB_00110f2f;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_00110f2f;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00110f08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_00110ff1;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_00110f2f:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC69,"./core/object/callable_method_pointer.h",0x67,
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
LAB_00110ff1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<MenuBar, void, bool>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<MenuBar,void,bool>::call
          (CallableCustomMethodPointer<MenuBar,void,bool> *this,Variant **param_1,int param_2,
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
      goto LAB_001111b9;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar7[1] == 0) goto LAB_001111b9;
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
        uVar4 = _LC70;
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        bVar8 = Variant::operator_cast_to_bool(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00111168. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),bVar8);
          return;
        }
        goto LAB_0011127b;
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
LAB_001111b9:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC69,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0011127b:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<MenuBar, void, ObjectID>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<MenuBar,void,ObjectID>::call
          (CallableCustomMethodPointer<MenuBar,void,ObjectID> *this,Variant **param_1,int param_2,
          Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  char cVar4;
  undefined8 uVar5;
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
      goto LAB_00111439;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar7[1] == 0) goto LAB_00111439;
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
        uVar5 = _LC71;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar5;
        }
        uVar5 = Variant::operator_cast_to_ObjectID(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001113e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5);
          return;
        }
        goto LAB_001114fb;
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
LAB_00111439:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC69,"./core/object/callable_method_pointer.h",0x67,
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
LAB_001114fb:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<bool>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<bool>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  long lVar6;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar7;
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
  
  puVar7 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar7 = 0;
  puVar7[6] = 0;
  *(undefined8 *)(puVar7 + 8) = 0;
  puVar7[10] = 6;
  *(undefined1 (*) [16])(puVar7 + 2) = (undefined1  [16])0x0;
  if (in_EDX != 0) goto LAB_00111549;
  local_78 = 0;
  local_68 = &_LC5;
  local_80 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._8_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,1);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00111640:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00111640;
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
  *puVar7 = local_68._0_4_;
  if (*(long *)(puVar7 + 2) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar7 + 2));
    uVar5 = local_60._0_8_;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = local_60._8_8_;
    local_60 = auVar3 << 0x40;
    *(undefined8 *)(puVar7 + 2) = uVar5;
  }
  if (*(long *)(puVar7 + 4) != local_60._8_8_) {
    StringName::unref();
    uVar5 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(puVar7 + 4) = uVar5;
  }
  lVar6 = local_48;
  puVar7[6] = local_50;
  if (*(long *)(puVar7 + 8) == local_48) {
    puVar7[10] = local_40;
    if (local_48 != 0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
  }
  else {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar7 + 8));
    *(long *)(puVar7 + 8) = local_48;
    puVar7[10] = local_40;
  }
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  uVar5 = local_60._0_8_;
  if (local_60._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_60._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_60._8_8_;
      local_60 = auVar4 << 0x40;
      Memory::free_static((void *)(uVar5 + -0x10),false);
    }
  }
LAB_00111549:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar7;
}



/* MethodBindT<int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<int>::_gen_argument_type_info(int param_1)

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
  if (in_EDX != 0) goto LAB_001117f9;
  local_78 = 0;
  local_68 = &_LC5;
  local_80 = 0;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,2);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_001118f5:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_001118f5;
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
LAB_001117f9:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
}



/* MethodBindT<Control::TextDirection>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<Control::TextDirection>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  long lVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  details local_78 [8];
  long local_70;
  char *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar4 = 0;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  puVar4[10] = 6;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    local_80 = 0;
    local_68 = "Control::TextDirection";
    local_60._0_8_ = 0x16;
    String::parse_latin1((StrRange *)&local_80);
    godot::details::enum_qualified_name_to_class_info_name(local_78,(String *)&local_80);
    StringName::StringName((StringName *)&local_70,(String *)local_78,false);
    local_60 = (undefined1  [16])0x0;
    local_88 = 0;
    local_90 = 0;
    local_68 = (char *)0x2;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0x10006;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if ((StringName::configured != '\0') && (local_70 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    *puVar4 = local_68._0_4_;
    if (*(long *)(puVar4 + 2) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar4 + 2));
      uVar2 = local_60._0_8_;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_60._8_8_;
      local_60 = auVar1 << 0x40;
      *(undefined8 *)(puVar4 + 2) = uVar2;
    }
    if (*(long *)(puVar4 + 4) != local_60._8_8_) {
      StringName::unref();
      uVar2 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8 *)(puVar4 + 4) = uVar2;
    }
    puVar4[6] = (undefined4)local_50;
    if (*(long *)(puVar4 + 8) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar4 + 8));
      lVar3 = local_48;
      local_48 = 0;
      *(long *)(puVar4 + 8) = lVar3;
    }
    puVar4[10] = local_40;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<MenuBar, bool>(void (MenuBar::*)(bool)) */

MethodBind * create_method_bind<MenuBar,bool>(_func_void_bool *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_0011c7f0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "MenuBar";
  local_30 = 7;
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



/* MethodBind* create_method_bind<MenuBar, bool>(bool (MenuBar::*)()) */

MethodBind * create_method_bind<MenuBar,bool>(_func_bool *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_0011c850;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "MenuBar";
  local_30 = 7;
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



/* MethodBind* create_method_bind<MenuBar, bool>(bool (MenuBar::*)() const) */

MethodBind * create_method_bind<MenuBar,bool>(_func_bool *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_0011c8b0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "MenuBar";
  local_30 = 7;
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



/* MethodBind* create_method_bind<MenuBar, int>(int (MenuBar::*)() const) */

MethodBind * create_method_bind<MenuBar,int>(_func_int *param_1)

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
  *(_func_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011c910;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "MenuBar";
  local_30 = 7;
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



/* MethodBind* create_method_bind<MenuBar, Control::TextDirection>(void
   (MenuBar::*)(Control::TextDirection)) */

MethodBind * create_method_bind<MenuBar,Control::TextDirection>(_func_void_TextDirection *param_1)

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
  *(_func_void_TextDirection **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011c970;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "MenuBar";
  local_30 = 7;
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



/* MethodBind* create_method_bind<MenuBar, Control::TextDirection>(Control::TextDirection
   (MenuBar::*)() const) */

MethodBind * create_method_bind<MenuBar,Control::TextDirection>(_func_TextDirection *param_1)

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
  *(_func_TextDirection **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011c9d0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "MenuBar";
  local_30 = 7;
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



/* MethodBind* create_method_bind<MenuBar, String const&>(void (MenuBar::*)(String const&)) */

MethodBind * create_method_bind<MenuBar,String_const&>(_func_void_String_ptr *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_0011ca30;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "MenuBar";
  local_30 = 7;
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



/* MethodBind* create_method_bind<MenuBar, String>(String (MenuBar::*)() const) */

MethodBind * create_method_bind<MenuBar,String>(_func_String *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_0011ca90;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "MenuBar";
  local_30 = 7;
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



/* MethodBind* create_method_bind<MenuBar, int>(void (MenuBar::*)(int)) */

MethodBind * create_method_bind<MenuBar,int>(_func_void_int *param_1)

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
  *(_func_void_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011caf0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "MenuBar";
  local_30 = 7;
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



/* MethodBind* create_method_bind<MenuBar, int, String const&>(void (MenuBar::*)(int, String
   const&)) */

MethodBind * create_method_bind<MenuBar,int,String_const&>(_func_void_int_String_ptr *param_1)

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
  *(_func_void_int_String_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011cb50;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "MenuBar";
  local_30 = 7;
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



/* MethodBind* create_method_bind<MenuBar, String, int>(String (MenuBar::*)(int) const) */

MethodBind * create_method_bind<MenuBar,String,int>(_func_String_int *param_1)

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
  *(_func_String_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011cbb0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "MenuBar";
  local_30 = 7;
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



/* MethodBind* create_method_bind<MenuBar, int, bool>(void (MenuBar::*)(int, bool)) */

MethodBind * create_method_bind<MenuBar,int,bool>(_func_void_int_bool *param_1)

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
  *(_func_void_int_bool **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011cc10;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "MenuBar";
  local_30 = 7;
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



/* MethodBind* create_method_bind<MenuBar, bool, int>(bool (MenuBar::*)(int) const) */

MethodBind * create_method_bind<MenuBar,bool,int>(_func_bool_int *param_1)

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
  *(_func_bool_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011cc70;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "MenuBar";
  local_30 = 7;
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



/* MethodBind* create_method_bind<MenuBar, PopupMenu*, int>(PopupMenu* (MenuBar::*)(int) const) */

MethodBind * create_method_bind<MenuBar,PopupMenu*,int>(_func_PopupMenu_ptr_int *param_1)

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
  *(_func_PopupMenu_ptr_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011ccd0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "MenuBar";
  local_30 = 7;
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



/* MenuBar::_initialize_classv() */

void MenuBar::_initialize_classv(void)

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
          if ((code *)PTR__bind_methods_00122048 != Node::_bind_methods) {
            Node::_bind_methods();
          }
          Node::initialize_class()::initialized = '\x01';
        }
        local_68 = 0;
        local_58 = "Node";
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
        if ((code *)PTR__bind_compatibility_methods_00122038 != Object::_bind_compatibility_methods)
        {
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
      if ((code *)PTR__bind_methods_00122040 != CanvasItem::_bind_methods) {
        Control::_bind_methods();
      }
      Control::initialize_class()::initialized = '\x01';
    }
    local_58 = "Control";
    local_68 = 0;
    local_50 = 7;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "MenuBar";
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
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<PopupMenu*>::_unref() */

void __thiscall CowData<PopupMenu*>::_unref(CowData<PopupMenu*> *this)

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



/* CowData<MenuBar::Menu>::_unref() */

void __thiscall CowData<MenuBar::Menu>::_unref(CowData<MenuBar::Menu> *this)

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
          if (plVar8[2] != 0) {
            cVar7 = RefCounted::unreference();
            if (cVar7 != '\0') {
              pOVar5 = (Object *)plVar8[2];
              cVar7 = predelete_handler(pOVar5);
              if (cVar7 != '\0') {
                (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
                Memory::free_static(pOVar5,false);
              }
            }
          }
          if (plVar8[1] != 0) {
            LOCK();
            plVar2 = (long *)(plVar8[1] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar8[1];
              plVar8[1] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
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
          plVar8 = plVar8 + 5;
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



/* CowData<PopupMenu*>::_realloc(long) */

undefined8 __thiscall CowData<PopupMenu*>::_realloc(CowData<PopupMenu*> *this,long param_1)

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
/* Error CowData<PopupMenu*>::resize<false>(long) */

undefined8 __thiscall CowData<PopupMenu*>::resize<false>(CowData<PopupMenu*> *this,long param_1)

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
LAB_001135a0:
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
  if (lVar8 == 0) goto LAB_001135a0;
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
        goto LAB_001134b1;
      }
      uVar6 = _realloc(this,lVar8);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
    }
    puVar7 = *(undefined8 **)this;
    if (puVar7 != (undefined8 *)0x0) {
LAB_001134b1:
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



/* WARNING: Removing unreachable block (ram,0x00113c50) */
/* MenuBar::_notificationv(int, bool) */

void __thiscall MenuBar::_notificationv(MenuBar *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    _notification(this,param_1);
    if ((code *)PTR__notification_00122050 != CanvasItem::_notification) {
      Control::_notification(iVar1);
    }
    CanvasItem::_notification(iVar1);
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  CanvasItem::_notification(iVar1);
  if ((code *)PTR__notification_00122050 != CanvasItem::_notification) {
    Control::_notification(iVar1);
  }
  _notification(this,param_1);
  return;
}



/* CowData<MenuBar::Menu>::_realloc(long) */

undefined8 __thiscall CowData<MenuBar::Menu>::_realloc(CowData<MenuBar::Menu> *this,long param_1)

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
/* Error CowData<MenuBar::Menu>::resize<false>(long) */

undefined8 __thiscall
CowData<MenuBar::Menu>::resize<false>(CowData<MenuBar::Menu> *this,long param_1)

{
  long *plVar1;
  undefined1 (*pauVar2) [16];
  long *plVar3;
  Object *pOVar4;
  code *pcVar5;
  char cVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  
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
    lVar10 = 0;
    lVar12 = 0;
  }
  else {
    lVar10 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar10) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar12 = lVar10 * 0x28;
    if (lVar12 != 0) {
      uVar13 = lVar12 - 1U | lVar12 - 1U >> 1;
      uVar13 = uVar13 | uVar13 >> 2;
      uVar13 = uVar13 | uVar13 >> 4;
      uVar13 = uVar13 | uVar13 >> 8;
      uVar13 = uVar13 | uVar13 >> 0x10;
      lVar12 = (uVar13 | uVar13 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x28 == 0) {
LAB_00114080:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar13 = param_1 * 0x28 - 1;
  uVar13 = uVar13 >> 1 | uVar13;
  uVar13 = uVar13 | uVar13 >> 2;
  uVar13 = uVar13 | uVar13 >> 4;
  uVar13 = uVar13 | uVar13 >> 8;
  uVar13 = uVar13 | uVar13 >> 0x10;
  uVar13 = uVar13 | uVar13 >> 0x20;
  lVar7 = uVar13 + 1;
  if (lVar7 == 0) goto LAB_00114080;
  uVar14 = param_1;
  if (param_1 <= lVar10) {
    while (lVar10 = *(long *)this, lVar10 != 0) {
      if (*(ulong *)(lVar10 + -8) <= uVar14) {
        if (lVar7 != lVar12) {
          uVar9 = _realloc(this,lVar7);
          if ((int)uVar9 != 0) {
            return uVar9;
          }
          lVar10 = *(long *)this;
          if (lVar10 == 0) goto LAB_00113ffe;
        }
        *(long *)(lVar10 + -8) = param_1;
        return 0;
      }
      plVar3 = (long *)(lVar10 + uVar14 * 0x28);
      if ((plVar3[2] != 0) && (cVar6 = RefCounted::unreference(), cVar6 != '\0')) {
        pOVar4 = (Object *)plVar3[2];
        cVar6 = predelete_handler(pOVar4);
        if (cVar6 != '\0') {
          (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
          Memory::free_static(pOVar4,false);
        }
      }
      if (plVar3[1] != 0) {
        LOCK();
        plVar1 = (long *)(plVar3[1] + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar10 = plVar3[1];
          plVar3[1] = 0;
          Memory::free_static((void *)(lVar10 + -0x10),false);
        }
      }
      if (*plVar3 != 0) {
        LOCK();
        plVar1 = (long *)(*plVar3 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar10 = *plVar3;
          *plVar3 = 0;
          Memory::free_static((void *)(lVar10 + -0x10),false);
        }
      }
      uVar14 = uVar14 + 1;
    }
    goto LAB_001140d6;
  }
  if (lVar7 == lVar12) {
LAB_00113fb5:
    puVar11 = *(undefined8 **)this;
    if (puVar11 == (undefined8 *)0x0) {
LAB_001140d6:
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    lVar10 = puVar11[-1];
    if (param_1 <= lVar10) goto LAB_00113eb4;
  }
  else {
    if (lVar10 != 0) {
      uVar9 = _realloc(this,lVar7);
      if ((int)uVar9 != 0) {
        return uVar9;
      }
      goto LAB_00113fb5;
    }
    puVar8 = (undefined8 *)Memory::alloc_static(uVar13 + 0x11,false);
    if (puVar8 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar11 = puVar8 + 2;
    *puVar8 = 1;
    puVar8[1] = 0;
    *(undefined8 **)this = puVar11;
    lVar10 = 0;
  }
  do {
    lVar12 = lVar10 + 1;
    pauVar2 = (undefined1 (*) [16])(puVar11 + lVar10 * 5);
    *(undefined2 *)(pauVar2[1] + 8) = 0;
    *(undefined8 *)(pauVar2 + 1) = 0;
    *(undefined8 *)pauVar2[2] = 0;
    *pauVar2 = (undefined1  [16])0x0;
    Ref<TextLine>::instantiate<>((Ref<TextLine> *)(pauVar2 + 1));
    puVar11 = *(undefined8 **)this;
    lVar10 = lVar12;
  } while (param_1 != lVar12);
  if (puVar11 == (undefined8 *)0x0) {
LAB_00113ffe:
    _DAT_00000000 = 0;
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
LAB_00113eb4:
  puVar11[-1] = param_1;
  return 0;
}



/* Vector<MenuBar::Menu>::remove_at(long) */

void __thiscall Vector<MenuBar::Menu>::remove_at(Vector<MenuBar::Menu> *this,long param_1)

{
  long *plVar1;
  Object *pOVar2;
  Object *pOVar3;
  char cVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  
  lVar7 = *(long *)(this + 8);
  if (param_1 < 0) {
    if (lVar7 != 0) {
      lVar7 = *(long *)(lVar7 + -8);
      goto LAB_00114299;
    }
  }
  else if (lVar7 != 0) {
    lVar7 = *(long *)(lVar7 + -8);
    if (param_1 < lVar7) {
      CowData<MenuBar::Menu>::_copy_on_write((CowData<MenuBar::Menu> *)(this + 8));
      lVar7 = *(long *)(this + 8);
      if (lVar7 == 0) {
        lVar8 = -1;
      }
      else {
        lVar8 = *(long *)(lVar7 + -8) + -1;
        if (param_1 < lVar8) {
          plVar6 = (long *)(lVar7 + param_1 * 0x28);
          do {
            lVar7 = *plVar6;
            lVar5 = plVar6[5];
            if (lVar7 != lVar5) {
              if (lVar7 != 0) {
                LOCK();
                plVar1 = (long *)(lVar7 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  lVar7 = *plVar6;
                  *plVar6 = 0;
                  Memory::free_static((void *)(lVar7 + -0x10),false);
                }
                lVar5 = plVar6[5];
              }
              *plVar6 = lVar5;
              plVar6[5] = 0;
            }
            lVar7 = plVar6[1];
            lVar5 = plVar6[6];
            if (lVar7 != lVar5) {
              if (lVar7 != 0) {
                LOCK();
                plVar1 = (long *)(lVar7 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  lVar7 = plVar6[1];
                  plVar6[1] = 0;
                  Memory::free_static((void *)(lVar7 + -0x10),false);
                }
                lVar5 = plVar6[6];
              }
              plVar6[1] = lVar5;
              plVar6[6] = 0;
            }
            pOVar2 = (Object *)plVar6[7];
            pOVar3 = (Object *)plVar6[2];
            if (pOVar2 != pOVar3) {
              plVar6[2] = (long)pOVar2;
              if (pOVar2 != (Object *)0x0) {
                cVar4 = RefCounted::reference();
                if (cVar4 == '\0') {
                  plVar6[2] = 0;
                }
              }
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
            }
            param_1 = param_1 + 1;
            *(short *)(plVar6 + 3) = (short)plVar6[8];
            plVar6[4] = plVar6[9];
            plVar6 = plVar6 + 5;
          } while (param_1 != lVar8);
        }
      }
      CowData<MenuBar::Menu>::resize<false>((CowData<MenuBar::Menu> *)(this + 8),lVar8);
      return;
    }
    goto LAB_00114299;
  }
  lVar7 = 0;
LAB_00114299:
  _err_print_index_error
            ("remove_at","./core/templates/cowdata.h",0xe4,param_1,lVar7,"p_index","size()","",false
             ,false);
  return;
}



/* WARNING: Removing unreachable block (ram,0x00114478) */
/* WARNING: Removing unreachable block (ram,0x0011460d) */
/* WARNING: Removing unreachable block (ram,0x00114619) */
/* String vformat<StringName>(String const&, StringName const) */

undefined8 * vformat<StringName>(undefined8 *param_1,bool *param_2,StringName *param_3)

{
  Variant *this;
  int iVar1;
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
  iVar1 = (int)local_c8;
  Array::resize(iVar1);
  this = (Variant *)Array::operator[](iVar1);
  Variant::operator=(this,(Variant *)local_78);
  String::sprintf((Array *)local_c0,param_2);
  *param_1 = local_c0[0];
  Array::~Array(local_c8);
  if (Variant::needs_deinit[(int)local_60] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTRC<bool, int>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<bool,int>::validated_call
          (MethodBindTRC<bool,int> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  Variant VVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
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
      local_50 = 0;
      local_40 = 0x35;
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
      goto LAB_00114798;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  VVar1 = (Variant)(*pcVar2)(param_1 + *(long *)(this + 0x60),*(undefined4 *)(*param_2 + 8));
  param_3[8] = VVar1;
LAB_00114798:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool, int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<bool,int>::ptrcall
          (MethodBindTRC<bool,int> *this,Object *param_1,void **param_2,void *param_3)

{
  undefined1 uVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
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
      local_50 = 0;
      local_40 = 0x35;
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
      goto LAB_00114977;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60),**param_2);
  *(undefined1 *)param_3 = uVar1;
LAB_00114977:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, bool>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<int,bool>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

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
      goto LAB_00114cf1;
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
                    /* WARNING: Could not recover jumptable at 0x00114b76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8),*(undefined1 *)(*(long *)(param_3 + 8) + 8));
    return;
  }
LAB_00114cf1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, bool>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<int,bool>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_00114ee1;
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
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Could not recover jumptable at 0x00114d6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3,
               **(char **)((long)param_3 + 8) != '\0');
    return;
  }
LAB_00114ee1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<String, int>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<String,int>::validated_call
          (MethodBindTRC<String,int> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  char *pcVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
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
      local_50 = 0;
      local_40 = 0x35;
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
      goto LAB_00114f8b;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar2)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),*(undefined4 *)(*param_2 + 8));
  if (*(char **)(param_3 + 8) != local_48) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(param_3 + 8),(CowData *)&local_48);
  }
  pcVar1 = local_48;
  if (local_48 != (char *)0x0) {
    LOCK();
    plVar3 = (long *)(local_48 + -0x10);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      local_48 = (char *)0x0;
      Memory::free_static(pcVar1 + -0x10,false);
    }
  }
LAB_00114f8b:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<String, int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<String,int>::ptrcall
          (MethodBindTRC<String,int> *this,Object *param_1,void **param_2,void *param_3)

{
  char *pcVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
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
      local_50 = 0;
      local_40 = 0x35;
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
      goto LAB_001151a9;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  (*pcVar2)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),**param_2);
                    /* WARNING: Load size is inaccurate */
  if (*param_3 != local_48) {
    CowData<char32_t>::_ref((CowData<char32_t> *)param_3,(CowData *)&local_48);
  }
  pcVar1 = local_48;
  if (local_48 != (char *)0x0) {
    LOCK();
    plVar3 = (long *)(local_48 + -0x10);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      local_48 = (char *)0x0;
      Memory::free_static(pcVar1 + -0x10,false);
    }
  }
LAB_001151a9:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, String const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<int,String_const&>::validated_call
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
      goto LAB_001154ef;
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
                    /* WARNING: Could not recover jumptable at 0x00115399. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8),*(long *)(param_3 + 8) + 8);
    return;
  }
LAB_001154ef:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, String const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<int,String_const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_001156d9;
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
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Could not recover jumptable at 0x00115562. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3,
               *(undefined8 *)((long)param_3 + 8));
    return;
  }
LAB_001156d9:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<int>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

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
      goto LAB_001158b1;
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
                    /* WARNING: Could not recover jumptable at 0x0011573c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_001158b1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<int>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_00115a91;
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
                    /* WARNING: Could not recover jumptable at 0x0011591b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_00115a91:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<String>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<String>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  char *pcVar3;
  Variant *pVVar4;
  long *plVar5;
  undefined4 in_register_00000014;
  long *plVar6;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar6 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar6 != (long *)0x0) && (plVar6[1] != 0)) && (*(char *)(plVar6[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar6[1] == 0) {
      plVar5 = (long *)plVar6[0x23];
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*plVar6 + 0x40))(plVar6);
      }
    }
    else {
      plVar5 = (long *)(plVar6[1] + 0x20);
    }
    if (local_58 == (char *)*plVar5) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC69,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      pcVar3 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar6 = (long *)(local_58 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar2 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar6 = (long *)(local_60 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00115c00;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar4 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar4 & 1) != 0) {
        pVVar4 = *(Variant **)(pVVar4 + *(long *)((long)plVar6 + (long)pVVar1) + -1);
      }
      (*(code *)pVVar4)((CowData<char32_t> *)&local_58);
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
LAB_00115c00:
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
  Variant **ppVVar1;
  Variant **ppVVar2;
  code *pcVar3;
  long *plVar4;
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
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (Variant **)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Variant **)0x114668;
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
      goto LAB_00115eb1;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    param_2 = *(Variant ***)(param_1 + *(long *)(this + 0x60));
    pcVar3 = *(code **)(pcVar3 + (long)param_2 + -1);
  }
  (*pcVar3)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  if (*(Variant ***)(param_3 + 8) != local_48) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(param_3 + 8),(CowData *)&local_48);
  }
  ppVVar2 = local_48;
  if (local_48 != (Variant **)0x0) {
    LOCK();
    ppVVar1 = local_48 + -2;
    *ppVVar1 = *ppVVar1 + -1;
    UNLOCK();
    if (*ppVVar1 == (Variant *)0x0) {
      local_48 = (Variant **)0x0;
      Memory::free_static(ppVVar2 + -2,false);
    }
  }
LAB_00115eb1:
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
  void **ppvVar1;
  void **ppvVar2;
  code *pcVar3;
  long *plVar4;
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
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (void **)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (void **)0x114668;
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
      goto LAB_0011609e;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    param_2 = *(void ***)(param_1 + *(long *)(this + 0x60));
    pcVar3 = *(code **)(pcVar3 + (long)param_2 + -1);
  }
  (*pcVar3)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
                    /* WARNING: Load size is inaccurate */
  if (*param_3 != local_48) {
    CowData<char32_t>::_ref((CowData<char32_t> *)param_3,(CowData *)&local_48);
  }
  ppvVar2 = local_48;
  if (local_48 != (void **)0x0) {
    LOCK();
    ppvVar1 = local_48 + -2;
    *ppvVar1 = (void *)((long)*ppvVar1 + -1);
    UNLOCK();
    if (*ppvVar1 == (void *)0x0) {
      local_48 = (void **)0x0;
      Memory::free_static(ppvVar2 + -2,false);
    }
  }
LAB_0011609e:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<String_const&>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  long *plVar1;
  long lVar2;
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar3;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar3 = param_2[0x23];
      if (pVVar3 == (Variant *)0x0) {
        pVVar3 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar3 = param_2[1] + 0x20;
    }
    if (local_38 == *(char **)pVVar3) {
      if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0;
      local_30 = 0x35;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
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
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_001163f2;
    }
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00116259. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8);
    return;
  }
LAB_001163f2:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<String_const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  char *pcVar1;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar2;
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
      plVar2 = (long *)param_2[0x23];
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar2 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (char *)*plVar2) {
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
      pcVar1 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar2 = (long *)(local_48 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar1 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_001165f4;
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
                    /* WARNING: Could not recover jumptable at 0x00116459. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3);
    return;
  }
LAB_001165f4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Control::TextDirection>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindTRC<Control::TextDirection>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  char *pcVar3;
  int iVar4;
  long *plVar6;
  undefined4 in_register_00000014;
  long *plVar7;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  Variant *pVVar5;
  
  plVar7 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar7 != (long *)0x0) && (plVar7[1] != 0)) && (*(char *)(plVar7[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar7[1] == 0) {
      plVar6 = (long *)plVar7[0x23];
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)(**(code **)(*plVar7 + 0x40))(plVar7);
      }
    }
    else {
      plVar6 = (long *)(plVar7[1] + 0x20);
    }
    if (local_58 == (char *)*plVar6) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC69,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      pcVar3 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar7 = (long *)(local_58 + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar2 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar7 = (long *)(local_60 + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_001166c0;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar5 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar5 & 1) != 0) {
        pVVar5 = *(Variant **)(pVVar5 + *(long *)((long)plVar7 + (long)pVVar1) + -1);
      }
      iVar4 = (*(code *)pVVar5)();
      Variant::Variant((Variant *)local_48,iVar4);
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
LAB_001166c0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Control::TextDirection>::validated_call(Object*, Variant const**, Variant*) const
    */

void __thiscall
MethodBindTRC<Control::TextDirection>::validated_call
          (MethodBindTRC<Control::TextDirection> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  long lVar1;
  uint uVar2;
  long *plVar4;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar3;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar4) {
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
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar4 = (long *)(local_50 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00116924;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar2 = (*pcVar3)(param_1 + *(long *)(this + 0x60));
  *(ulong *)(param_3 + 8) = (ulong)uVar2;
LAB_00116924:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Control::TextDirection>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Control::TextDirection>::ptrcall
          (MethodBindTRC<Control::TextDirection> *this,Object *param_1,void **param_2,void *param_3)

{
  char *pcVar1;
  uint uVar2;
  long *plVar4;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar3;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar4) {
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
      pcVar1 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar4 = (long *)(local_48 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar1 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00116b03;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar2 = (*pcVar3)(param_1 + *(long *)(this + 0x60));
  *(ulong *)param_3 = (ulong)uVar2;
LAB_00116b03:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Control::TextDirection>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Control::TextDirection>::validated_call
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
      goto LAB_00116e71;
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
                    /* WARNING: Could not recover jumptable at 0x00116cfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_00116e71:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Control::TextDirection>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Control::TextDirection>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  char *pcVar1;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar2;
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
      plVar2 = (long *)param_2[0x23];
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar2 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (char *)*plVar2) {
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
      pcVar1 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar2 = (long *)(local_48 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar1 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00117074;
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
                    /* WARNING: Could not recover jumptable at 0x00116edb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_00117074:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<int>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  char *pcVar3;
  int iVar4;
  long *plVar6;
  undefined4 in_register_00000014;
  long *plVar7;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  Variant *pVVar5;
  
  plVar7 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar7 != (long *)0x0) && (plVar7[1] != 0)) && (*(char *)(plVar7[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar7[1] == 0) {
      plVar6 = (long *)plVar7[0x23];
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)(**(code **)(*plVar7 + 0x40))(plVar7);
      }
    }
    else {
      plVar6 = (long *)(plVar7[1] + 0x20);
    }
    if (local_58 == (char *)*plVar6) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC69,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      pcVar3 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar7 = (long *)(local_58 + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar2 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar7 = (long *)(local_60 + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00117140;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar5 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar5 & 1) != 0) {
        pVVar5 = *(Variant **)(pVVar5 + *(long *)((long)plVar7 + (long)pVVar1) + -1);
      }
      iVar4 = (*(code *)pVVar5)();
      Variant::Variant((Variant *)local_48,iVar4);
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
LAB_00117140:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<int>::validated_call
          (MethodBindTRC<int> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  char *pcVar1;
  int iVar2;
  long *plVar4;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar3;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar4) {
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
      pcVar1 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar4 = (long *)(local_48 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar1 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001173a4;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  iVar2 = (*pcVar3)(param_1 + *(long *)(this + 0x60));
  *(long *)(param_3 + 8) = (long)iVar2;
LAB_001173a4:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<int>::ptrcall(MethodBindTRC<int> *this,Object *param_1,void **param_2,void *param_3)

{
  char *pcVar1;
  int iVar2;
  long *plVar4;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar3;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar4) {
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
      pcVar1 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar4 = (long *)(local_48 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar1 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00117583;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  iVar2 = (*pcVar3)(param_1 + *(long *)(this + 0x60));
  *(long *)param_3 = (long)iVar2;
LAB_00117583:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<bool>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  char *pcVar3;
  bool bVar4;
  long *plVar6;
  undefined4 in_register_00000014;
  long *plVar7;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  Variant *pVVar5;
  
  plVar7 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar7 != (long *)0x0) && (plVar7[1] != 0)) && (*(char *)(plVar7[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar7[1] == 0) {
      plVar6 = (long *)plVar7[0x23];
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)(**(code **)(*plVar7 + 0x40))(plVar7);
      }
    }
    else {
      plVar6 = (long *)(plVar7[1] + 0x20);
    }
    if (local_58 == (char *)*plVar6) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC69,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      pcVar3 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar7 = (long *)(local_58 + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar2 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar7 = (long *)(local_60 + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_001177e0;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar5 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar5 & 1) != 0) {
        pVVar5 = *(Variant **)(pVVar5 + *(long *)((long)plVar7 + (long)pVVar1) + -1);
      }
      bVar4 = (bool)(*(code *)pVVar5)();
      Variant::Variant((Variant *)local_48,bVar4);
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
LAB_001177e0:
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
  long lVar1;
  Variant VVar2;
  long *plVar4;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar3;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar4) {
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
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar4 = (long *)(local_50 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00117a42;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  VVar2 = (Variant)(*pcVar3)(param_1 + *(long *)(this + 0x60));
  param_3[8] = VVar2;
LAB_00117a42:
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
  long lVar1;
  undefined1 uVar2;
  long *plVar4;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar3;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar4) {
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
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar4 = (long *)(local_50 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00117c21;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar2 = (*pcVar3)(param_1 + *(long *)(this + 0x60));
  *(undefined1 *)param_3 = uVar2;
LAB_00117c21:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<bool>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTR<bool>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  char *pcVar3;
  bool bVar4;
  long *plVar6;
  undefined4 in_register_00000014;
  long *plVar7;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  Variant *pVVar5;
  
  plVar7 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar7 != (long *)0x0) && (plVar7[1] != 0)) && (*(char *)(plVar7[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar7[1] == 0) {
      plVar6 = (long *)plVar7[0x23];
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)(**(code **)(*plVar7 + 0x40))(plVar7);
      }
    }
    else {
      plVar6 = (long *)(plVar7[1] + 0x20);
    }
    if (local_58 == (char *)*plVar6) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC69,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      pcVar3 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar7 = (long *)(local_58 + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar2 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar7 = (long *)(local_60 + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00117e70;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar5 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar5 & 1) != 0) {
        pVVar5 = *(Variant **)(pVVar5 + *(long *)((long)plVar7 + (long)pVVar1) + -1);
      }
      bVar4 = (bool)(*(code *)pVVar5)();
      Variant::Variant((Variant *)local_48,bVar4);
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
LAB_00117e70:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<bool>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTR<bool>::validated_call
          (MethodBindTR<bool> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  Variant VVar2;
  long *plVar4;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar3;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar4 = (long *)(local_50 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001180d2;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  VVar2 = (Variant)(*pcVar3)(param_1 + *(long *)(this + 0x60));
  param_3[8] = VVar2;
LAB_001180d2:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<bool>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<bool>::ptrcall(MethodBindTR<bool> *this,Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  undefined1 uVar2;
  long *plVar4;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar3;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar4 = (long *)(local_50 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001182b1;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar2 = (*pcVar3)(param_1 + *(long *)(this + 0x60));
  *(undefined1 *)param_3 = uVar2;
LAB_001182b1:
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
      goto LAB_00118611;
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
                    /* WARNING: Could not recover jumptable at 0x0011849d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined1 *)(*(long *)param_3 + 8));
    return;
  }
LAB_00118611:
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
      goto LAB_001187f9;
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
                    /* WARNING: Could not recover jumptable at 0x00118682. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3 != '\0');
    return;
  }
LAB_001187f9:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<PopupMenu*, int>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<PopupMenu*,int>::validated_call
          (MethodBindTRC<PopupMenu*,int> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
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
    if (local_48 == (char *)*plVar2) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
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
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_001189e1;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar1)(param_1 + *(long *)(this + 0x60),*(undefined4 *)(*param_2 + 8));
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    Variant::ObjData::ref_pointer((Object *)(param_3 + 8));
    return;
  }
LAB_001189e1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<PopupMenu*, int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<PopupMenu*,int>::ptrcall
          (MethodBindTRC<PopupMenu*,int> *this,Object *param_1,void **param_2,void *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
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
      local_50 = 0;
      local_40 = 0x35;
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
      goto LAB_00118a38;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  uVar2 = (*pcVar1)(param_1 + *(long *)(this + 0x60),**param_2);
  *(undefined8 *)param_3 = uVar2;
LAB_00118a38:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<String, int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<String,int>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  long *plVar8;
  long lVar9;
  undefined4 in_register_00000014;
  long *plVar10;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar11;
  Variant *pVVar12;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  plVar10 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar10 != (long *)0x0) && (plVar10[1] != 0)) && (*(char *)(plVar10[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar10[1] == 0) {
      plVar8 = (long *)plVar10[0x23];
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*plVar10 + 0x40))(plVar10);
      }
    }
    else {
      plVar8 = (long *)(plVar10[1] + 0x20);
    }
    if (local_68 == (char *)*plVar8) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC69,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_00118d10;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar12 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar11 = param_2[5];
    if (pVVar11 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_00118d60;
LAB_00118d50:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00118d60:
        uVar7 = 4;
        goto LAB_00118d05;
      }
      if (in_R8D == 1) goto LAB_00118d50;
      lVar9 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar9) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar11 = pVVar11 + lVar9 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar12 & 1) != 0) {
      pVVar12 = *(Variant **)(pVVar12 + *(long *)((long)plVar10 + (long)pVVar1) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar11,2);
    uVar4 = _LC71;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    iVar6 = Variant::operator_cast_to_int(pVVar11);
    (*(code *)pVVar12)((CowData<char32_t> *)&local_68,(Variant *)((long)plVar10 + (long)pVVar1),
                       iVar6);
    Variant::Variant((Variant *)local_58,(String *)&local_68);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_58[0];
    *(undefined8 *)(param_1 + 8) = local_50;
    *(undefined8 *)(param_1 + 0x10) = uStack_48;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  }
  else {
    uVar7 = 3;
LAB_00118d05:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_00118d10:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTRC<bool, int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<bool,int>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  undefined4 uVar8;
  long *plVar9;
  long lVar10;
  undefined4 in_register_00000014;
  long *plVar11;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar12;
  Variant *pVVar13;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar11 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar11 != (long *)0x0) && (plVar11[1] != 0)) && (*(char *)(plVar11[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar11[1] == 0) {
      plVar9 = (long *)plVar11[0x23];
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)(**(code **)(*plVar11 + 0x40))(plVar11);
      }
    }
    else {
      plVar9 = (long *)(plVar11[1] + 0x20);
    }
    if (local_58 == (char *)*plVar9) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC69,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_001190a0;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar13 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar12 = param_2[5];
    if (pVVar12 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_001190e0;
LAB_001190d0:
      pVVar12 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar12 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_001190e0:
        uVar8 = 4;
        goto LAB_00119095;
      }
      if (in_R8D == 1) goto LAB_001190d0;
      lVar10 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar10) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar10,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar12 = pVVar12 + lVar10 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar13 & 1) != 0) {
      pVVar13 = *(Variant **)(pVVar13 + *(long *)((long)plVar11 + (long)pVVar1) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar12,2);
    uVar4 = _LC71;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    iVar7 = Variant::operator_cast_to_int(pVVar12);
    bVar6 = (bool)(*(code *)pVVar13)((Variant *)((long)plVar11 + (long)pVVar1),iVar7);
    Variant::Variant((Variant *)local_48,bVar6);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_48[0];
    *(undefined8 *)(param_1 + 8) = local_40;
    *(undefined8 *)(param_1 + 0x10) = uStack_38;
  }
  else {
    uVar8 = 3;
LAB_00119095:
    *in_R9 = uVar8;
    in_R9[2] = 1;
  }
LAB_001190a0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<PopupMenu*, int>::call(Object*, Variant const**, int, Callable::CallError&) const
    */

Object * MethodBindTRC<PopupMenu*,int>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  Object *pOVar8;
  long *plVar9;
  long lVar10;
  undefined4 in_register_00000014;
  long *plVar11;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar12;
  Variant *pVVar13;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar11 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar11 != (long *)0x0) && (plVar11[1] != 0)) && (*(char *)(plVar11[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar11[1] == 0) {
      plVar9 = (long *)plVar11[0x23];
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)(**(code **)(*plVar11 + 0x40))(plVar11);
      }
    }
    else {
      plVar9 = (long *)(plVar11[1] + 0x20);
    }
    if (local_58 == (char *)*plVar9) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC69,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00119420;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar13 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar12 = param_2[5];
    if (pVVar12 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_00119460;
LAB_00119450:
      pVVar12 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar12 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00119460:
        uVar7 = 4;
        goto LAB_00119415;
      }
      if (in_R8D == 1) goto LAB_00119450;
      lVar10 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar10) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar10,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar12 = pVVar12 + lVar10 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar13 & 1) != 0) {
      pVVar13 = *(Variant **)(pVVar13 + *(long *)((long)plVar11 + (long)pVVar1) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar12,2);
    uVar4 = _LC71;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    iVar6 = Variant::operator_cast_to_int(pVVar12);
    pOVar8 = (Object *)(*(code *)pVVar13)((Variant *)((long)plVar11 + (long)pVVar1),iVar6);
    Variant::Variant((Variant *)local_48,pOVar8);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_48[0];
    *(undefined8 *)(param_1 + 8) = local_40;
    *(undefined8 *)(param_1 + 0x10) = uStack_38;
  }
  else {
    uVar7 = 3;
LAB_00119415:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_00119420:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
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
  long local_50;
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
      _err_print_error(&_LC69,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      lVar2 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar9 = (long *)(local_50 + -0x10);
        *plVar9 = *plVar9 + -1;
        UNLOCK();
        if (*plVar9 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00119810;
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
      if (in_R8D != 1) goto LAB_00119860;
LAB_00119850:
      pVVar10 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar10 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00119860:
        uVar6 = 4;
        goto LAB_00119805;
      }
      if (in_R8D == 1) goto LAB_00119850;
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
    uVar4 = _LC159;
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
LAB_00119805:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_00119810:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, int, bool>(__UnexistingClass*, void
   (__UnexistingClass::*)(int, bool), Variant const**, int, Callable::CallError&, Vector<Variant>
   const&) */

void call_with_variant_args_dv<__UnexistingClass,int,bool>
               (__UnexistingClass *param_1,_func_void_int_bool *param_2,Variant **param_3,
               int param_4,CallError *param_5,Vector *param_6)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 in_register_0000000c;
  long *plVar8;
  long lVar9;
  Variant *this;
  uint uVar10;
  int iVar11;
  Variant *this_00;
  long in_stack_00000008;
  
  plVar8 = (long *)CONCAT44(in_register_0000000c,param_4);
  uVar10 = (uint)param_5;
  if (2 < uVar10) {
    uVar7 = 3;
    goto LAB_00119b7d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  iVar6 = 2 - uVar10;
  if (lVar1 == 0) {
    if (iVar6 == 0) {
      this = (Variant *)*plVar8;
LAB_00119bad:
      this_00 = (Variant *)plVar8[1];
      goto LAB_00119ae5;
    }
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    iVar11 = (int)lVar2;
    if (iVar6 <= iVar11) {
      if (uVar10 == 0) {
        lVar9 = (long)(iVar11 + -2);
        if (lVar2 <= lVar9) goto LAB_00119bc8;
        this = (Variant *)(lVar1 + lVar9 * 0x18);
      }
      else {
        this = (Variant *)*plVar8;
        if (uVar10 == 2) goto LAB_00119bad;
      }
      lVar9 = (long)(int)((uVar10 ^ 1) + (iVar11 - iVar6));
      if (lVar2 <= lVar9) {
LAB_00119bc8:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this_00 = (Variant *)(lVar1 + lVar9 * 0x18);
LAB_00119ae5:
      *(undefined4 *)param_6 = 0;
      if (((ulong)param_2 & 1) != 0) {
        param_2 = *(_func_void_int_bool **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
      }
      cVar5 = Variant::can_convert_strict(*(undefined4 *)this_00,1);
      uVar4 = _LC160;
      if (cVar5 == '\0') {
        *(undefined4 *)param_6 = 2;
        *(undefined8 *)(param_6 + 4) = uVar4;
      }
      Variant::operator_cast_to_bool(this_00);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
      uVar4 = _LC71;
      if (cVar5 == '\0') {
        *(undefined4 *)param_6 = 2;
        *(undefined8 *)(param_6 + 4) = uVar4;
      }
      iVar6 = Variant::operator_cast_to_int(this);
                    /* WARNING: Could not recover jumptable at 0x00119b6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*param_2)((int)(param_1 + (long)param_3),SUB41(iVar6,0));
      return;
    }
  }
  uVar7 = 4;
LAB_00119b7d:
  *(undefined4 *)param_6 = uVar7;
  *(undefined4 *)(param_6 + 8) = 2;
  return;
}



/* MethodBindT<int, bool>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<int,bool>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long lVar1;
  char *pcVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var4;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var4 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var4 != (__UnexistingClass *)0x0) && (*(long *)(p_Var4 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var4 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var4 + 8) == 0) {
      plVar3 = *(long **)(p_Var4 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)p_Var4 + 0x40))(p_Var4);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(p_Var4 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
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
      _err_print_error(&_LC69,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_48 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar3 = (long *)(local_50 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00119c66;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,int,bool>
            (p_Var4,(_func_void_int_bool *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,
             in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00119c66:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, int, String const&>(__UnexistingClass*, void
   (__UnexistingClass::*)(int, String const&), Variant const**, int, Callable::CallError&,
   Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,int,String_const&>
               (__UnexistingClass *param_1,_func_void_int_String_ptr *param_2,Variant **param_3,
               int param_4,CallError *param_5,Vector *param_6)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 in_register_0000000c;
  long *plVar8;
  long lVar9;
  Variant *this;
  uint uVar10;
  int iVar11;
  undefined4 *puVar12;
  long in_FS_OFFSET;
  long in_stack_00000008;
  long local_48;
  long local_40;
  
  plVar8 = (long *)CONCAT44(in_register_0000000c,param_4);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar10 = (uint)param_5;
  if (uVar10 < 3) {
    lVar1 = *(long *)(in_stack_00000008 + 8);
    iVar6 = 2 - uVar10;
    if (lVar1 == 0) {
      if (iVar6 != 0) goto LAB_00119fd0;
      this = (Variant *)*plVar8;
LAB_0011a01d:
      puVar12 = (undefined4 *)plVar8[1];
    }
    else {
      lVar2 = *(long *)(lVar1 + -8);
      iVar11 = (int)lVar2;
      if (iVar11 < iVar6) {
LAB_00119fd0:
        uVar7 = 4;
        goto LAB_00119fd5;
      }
      if (uVar10 == 0) {
        lVar9 = (long)(iVar11 + -2);
        if (lVar2 <= lVar9) goto LAB_0011a038;
        this = (Variant *)(lVar1 + lVar9 * 0x18);
      }
      else {
        this = (Variant *)*plVar8;
        if (uVar10 == 2) goto LAB_0011a01d;
      }
      lVar9 = (long)(int)((uVar10 ^ 1) + (iVar11 - iVar6));
      if (lVar2 <= lVar9) {
LAB_0011a038:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      puVar12 = (undefined4 *)(lVar1 + lVar9 * 0x18);
    }
    *(undefined4 *)param_6 = 0;
    if (((ulong)param_2 & 1) != 0) {
      param_2 = *(_func_void_int_String_ptr **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
    }
    cVar5 = Variant::can_convert_strict(*puVar12,4);
    uVar4 = _LC161;
    if (cVar5 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = uVar4;
    }
    Variant::operator_cast_to_String((Variant *)&local_48);
    cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
    uVar4 = _LC71;
    if (cVar5 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = uVar4;
    }
    iVar6 = Variant::operator_cast_to_int(this);
    (*param_2)((int)(param_1 + (long)param_3),(String *)iVar6);
    lVar1 = local_48;
    if (local_48 != 0) {
      LOCK();
      plVar8 = (long *)(local_48 + -0x10);
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
        local_48 = 0;
        Memory::free_static((void *)(lVar1 + -0x10),false);
      }
    }
  }
  else {
    uVar7 = 3;
LAB_00119fd5:
    *(undefined4 *)param_6 = uVar7;
    *(undefined4 *)(param_6 + 8) = 2;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, String const&>::call(Object*, Variant const**, int, Callable::CallError&) const
    */

Object * MethodBindT<int,String_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long lVar1;
  char *pcVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var4;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var4 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var4 != (__UnexistingClass *)0x0) && (*(long *)(p_Var4 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var4 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var4 + 8) == 0) {
      plVar3 = *(long **)(p_Var4 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)p_Var4 + 0x40))(p_Var4);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(p_Var4 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
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
      _err_print_error(&_LC69,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_48 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar3 = (long *)(local_50 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_0011a0d6;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,int,String_const&>
            (p_Var4,(_func_void_int_String_ptr *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,
             in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_0011a0d6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, int>(__UnexistingClass*, void
   (__UnexistingClass::*)(int), Variant const**, int, Callable::CallError&, Vector<Variant> const&)
    */

void call_with_variant_args_dv<__UnexistingClass,int>
               (__UnexistingClass *param_1,_func_void_int *param_2,Variant **param_3,int param_4,
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
    goto LAB_0011a3dd;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_0011a440;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_0011a440:
      uVar6 = 4;
LAB_0011a3dd:
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
      goto LAB_0011a35b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0011a35b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_int **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC71;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_int(this);
                    /* WARNING: Could not recover jumptable at 0x0011a3b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)((int)(param_1 + (long)param_3));
  return;
}



/* MethodBindT<int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<int>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long lVar1;
  char *pcVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var4;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var4 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var4 != (__UnexistingClass *)0x0) && (*(long *)(p_Var4 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var4 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var4 + 8) == 0) {
      plVar3 = *(long **)(p_Var4 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)p_Var4 + 0x40))(p_Var4);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(p_Var4 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
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
      _err_print_error(&_LC69,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_48 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar3 = (long *)(local_50 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_0011a4a6;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,int>
            (p_Var4,(_func_void_int *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,in_R9
            );
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_0011a4a6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, Control::TextDirection>(__UnexistingClass*,
   void (__UnexistingClass::*)(Control::TextDirection), Variant const**, int, Callable::CallError&,
   Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,Control::TextDirection>
               (__UnexistingClass *param_1,_func_void_TextDirection *param_2,Variant **param_3,
               int param_4,CallError *param_5,Vector *param_6)

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
    goto LAB_0011a7ad;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_0011a810;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_0011a810:
      uVar6 = 4;
LAB_0011a7ad:
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
      goto LAB_0011a72b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0011a72b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_TextDirection **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC71;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_long(this);
                    /* WARNING: Could not recover jumptable at 0x0011a786. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)((char)(param_1 + (long)param_3));
  return;
}



/* MethodBindT<Control::TextDirection>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindT<Control::TextDirection>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long lVar1;
  char *pcVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var4;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var4 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var4 != (__UnexistingClass *)0x0) && (*(long *)(p_Var4 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var4 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var4 + 8) == 0) {
      plVar3 = *(long **)(p_Var4 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)p_Var4 + 0x40))(p_Var4);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(p_Var4 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
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
      _err_print_error(&_LC69,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_48 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar3 = (long *)(local_50 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_0011a876;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,Control::TextDirection>
            (p_Var4,(_func_void_TextDirection *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,
             in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_0011a876:
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
    goto LAB_0011ab7d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_0011abe0;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_0011abe0:
      uVar6 = 4;
LAB_0011ab7d:
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
      goto LAB_0011aafb;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0011aafb:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_bool **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,1);
  uVar4 = _LC70;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_bool(this);
                    /* WARNING: Could not recover jumptable at 0x0011ab57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)(SUB81(param_1 + (long)param_3,0));
  return;
}



/* MethodBindT<bool>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<bool>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long lVar1;
  char *pcVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var4;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var4 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var4 != (__UnexistingClass *)0x0) && (*(long *)(p_Var4 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var4 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var4 + 8) == 0) {
      plVar3 = *(long **)(p_Var4 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)p_Var4 + 0x40))(p_Var4);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(p_Var4 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
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
      _err_print_error(&_LC69,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_48 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar3 = (long *)(local_50 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_0011ac46;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,bool>
            (p_Var4,(_func_void_bool *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,
             in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_0011ac46:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info_helper<int>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<int>(int param_1,int *param_2,PropertyInfo *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  int iVar5;
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
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar5 = *param_2;
  if (iVar5 != param_1) goto LAB_0011ae87;
  local_78 = 0;
  local_68 = &_LC5;
  local_80 = 0;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,2);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_0011af85:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_0011af85;
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
  *(undefined4 *)param_3 = local_68._0_4_;
  if (*(long *)(param_3 + 8) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 8));
    uVar3 = local_60._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *(undefined8 *)(param_3 + 8) = uVar3;
  }
  if (*(long *)(param_3 + 0x10) != local_60._8_8_) {
    StringName::unref();
    uVar3 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(param_3 + 0x10) = uVar3;
  }
  *(int *)(param_3 + 0x18) = local_50;
  if (*(long *)(param_3 + 0x20) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 0x20));
    lVar4 = local_48;
    local_48 = 0;
    *(long *)(param_3 + 0x20) = lVar4;
  }
  *(undefined4 *)(param_3 + 0x28) = local_40;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
  iVar5 = *param_2;
LAB_0011ae87:
  *param_2 = iVar5 + 1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindTRC<String, int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<String,int>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  long lVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  long local_78;
  ulong local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<int>(0,(int *)&local_70,(PropertyInfo *)&local_68);
    *puVar4 = local_68._0_4_;
    *(undefined8 *)(puVar4 + 2) = local_60._0_8_;
    *(undefined8 *)(puVar4 + 4) = local_60._8_8_;
    puVar4[6] = (undefined4)local_50;
    *(undefined8 *)(puVar4 + 8) = local_48;
    puVar4[10] = local_40;
    goto LAB_0011b145;
  }
  local_70 = 0;
  local_68 = &_LC5;
  local_78 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._0_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_78);
  *puVar4 = 4;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar4[10] = 6;
LAB_0011b257:
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_70);
    lVar3 = local_78;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_78);
    puVar4[10] = 6;
    if (puVar4[6] != 0x11) goto LAB_0011b257;
    StringName::StringName((StringName *)&local_68,(String *)(puVar4 + 8),false);
    if (*(undefined **)(puVar4 + 4) == local_68) {
      lVar3 = local_78;
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
        lVar3 = local_78;
      }
    }
    else {
      StringName::unref();
      *(undefined **)(puVar4 + 4) = local_68;
      lVar3 = local_78;
    }
  }
  local_78 = lVar3;
  if (lVar3 != 0) {
    LOCK();
    plVar1 = (long *)(lVar3 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_0011b145:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool, int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<bool,int>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  long lVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  long local_78;
  ulong local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<int>(0,(int *)&local_70,(PropertyInfo *)&local_68);
    *puVar4 = local_68._0_4_;
    *(undefined8 *)(puVar4 + 2) = local_60._0_8_;
    *(undefined8 *)(puVar4 + 4) = local_60._8_8_;
    puVar4[6] = (undefined4)local_50;
    *(undefined8 *)(puVar4 + 8) = local_48;
    puVar4[10] = local_40;
    goto LAB_0011b345;
  }
  local_70 = 0;
  local_68 = &_LC5;
  local_78 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._0_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_78);
  *puVar4 = 1;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar4[10] = 6;
LAB_0011b457:
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_70);
    lVar3 = local_78;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_78);
    puVar4[10] = 6;
    if (puVar4[6] != 0x11) goto LAB_0011b457;
    StringName::StringName((StringName *)&local_68,(String *)(puVar4 + 8),false);
    if (*(undefined **)(puVar4 + 4) == local_68) {
      lVar3 = local_78;
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
        lVar3 = local_78;
      }
    }
    else {
      StringName::unref();
      *(undefined **)(puVar4 + 4) = local_68;
      lVar3 = local_78;
    }
  }
  local_78 = lVar3;
  if (lVar3 != 0) {
    LOCK();
    plVar1 = (long *)(lVar3 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_0011b345:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<PopupMenu*, int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<PopupMenu*,int>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  ulong uVar2;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  bool bVar4;
  ulong local_60;
  char *local_58;
  undefined1 local_50 [16];
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  long local_20;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_58 = (char *)0x0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 6;
    local_60 = local_60 & 0xffffffff00000000;
    local_50 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<int>(0,(int *)&local_60,(PropertyInfo *)&local_58);
    *puVar3 = local_58._0_4_;
    *(undefined8 *)(puVar3 + 2) = local_50._0_8_;
    *(undefined8 *)(puVar3 + 4) = local_50._8_8_;
    puVar3[6] = (undefined4)local_40;
    *(undefined8 *)(puVar3 + 8) = local_38;
    puVar3[10] = local_30;
  }
  else {
    local_60 = 0;
    local_50._8_8_ = local_50._0_8_;
    local_50._0_8_ = 9;
    local_58 = "PopupMenu";
    String::parse_latin1((StrRange *)&local_60);
    StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
    *puVar3 = 0x18;
    *(undefined8 *)(puVar3 + 2) = 0;
    StringName::StringName((StringName *)(puVar3 + 4),(StringName *)&local_58);
    bVar4 = StringName::configured != '\0';
    puVar3[6] = 0;
    *(undefined8 *)(puVar3 + 8) = 0;
    puVar3[10] = 6;
    if ((bVar4) && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
    uVar2 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 - 0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(uVar2 - 0x10),false);
      }
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, bool>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<int,bool>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  long lVar6;
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar7;
  long in_FS_OFFSET;
  int local_8c;
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
  
  pPVar7 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)pPVar7 = 0;
  *(undefined4 *)(pPVar7 + 0x18) = 0;
  *(undefined8 *)(pPVar7 + 0x20) = 0;
  *(undefined4 *)(pPVar7 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar7 + 8) = (undefined1  [16])0x0;
  local_8c = 0;
  call_get_argument_type_info_helper<int>(in_EDX,&local_8c,pPVar7);
  if (in_EDX != local_8c) goto LAB_0011b6a4;
  local_78 = 0;
  local_68 = &_LC5;
  local_80 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._8_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,1);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_0011b7a0:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_0011b7a0;
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
  *(undefined4 *)pPVar7 = local_68._0_4_;
  if (*(long *)(pPVar7 + 8) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(pPVar7 + 8));
    uVar5 = local_60._0_8_;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = local_60._8_8_;
    local_60 = auVar3 << 0x40;
    *(undefined8 *)(pPVar7 + 8) = uVar5;
  }
  if (*(long *)(pPVar7 + 0x10) != local_60._8_8_) {
    StringName::unref();
    uVar5 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(pPVar7 + 0x10) = uVar5;
  }
  lVar6 = local_48;
  *(int *)(pPVar7 + 0x18) = local_50;
  if (*(long *)(pPVar7 + 0x20) == local_48) {
    *(undefined4 *)(pPVar7 + 0x28) = local_40;
    if (local_48 != 0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
  }
  else {
    CowData<char32_t>::_unref((CowData<char32_t> *)(pPVar7 + 0x20));
    *(long *)(pPVar7 + 0x20) = local_48;
    *(undefined4 *)(pPVar7 + 0x28) = local_40;
  }
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  uVar5 = local_60._0_8_;
  if (local_60._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_60._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_60._8_8_;
      local_60 = auVar4 << 0x40;
      Memory::free_static((void *)(uVar5 + -0x10),false);
    }
  }
LAB_0011b6a4:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pPVar7;
}



/* void call_get_argument_type_info_helper<String const&>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<String_const&>
               (int param_1,int *param_2,PropertyInfo *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  int iVar5;
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
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar5 = *param_2;
  if (iVar5 != param_1) goto LAB_0011b937;
  local_78 = 0;
  local_68 = &_LC5;
  local_80 = 0;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,4);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_0011ba35:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_0011ba35;
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
  *(undefined4 *)param_3 = local_68._0_4_;
  if (*(long *)(param_3 + 8) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 8));
    uVar3 = local_60._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *(undefined8 *)(param_3 + 8) = uVar3;
  }
  if (*(long *)(param_3 + 0x10) != local_60._8_8_) {
    StringName::unref();
    uVar3 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(param_3 + 0x10) = uVar3;
  }
  *(int *)(param_3 + 0x18) = local_50;
  if (*(long *)(param_3 + 0x20) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 0x20));
    lVar4 = local_48;
    local_48 = 0;
    *(long *)(param_3 + 0x20) = lVar4;
  }
  *(undefined4 *)(param_3 + 0x28) = local_40;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
  iVar5 = *param_2;
LAB_0011b937:
  *param_2 = iVar5 + 1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindT<String const&>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<String_const&>::_gen_argument_type_info(int param_1)

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
  call_get_argument_type_info_helper<String_const&>(in_EDX,&local_14,pPVar1);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, String const&>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<int,String_const&>::_gen_argument_type_info(int param_1)

{
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar1;
  long in_FS_OFFSET;
  int local_24;
  long local_20;
  
  pPVar1 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)pPVar1 = 0;
  *(undefined4 *)(pPVar1 + 0x18) = 0;
  *(undefined8 *)(pPVar1 + 0x20) = 0;
  *(undefined4 *)(pPVar1 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar1 + 8) = (undefined1  [16])0x0;
  local_24 = 0;
  call_get_argument_type_info_helper<int>(in_EDX,&local_24,pPVar1);
  call_get_argument_type_info_helper<String_const&>(in_EDX,&local_24,pPVar1);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MenuBar::gui_input(Ref<InputEvent> const&) */

void MenuBar::_GLOBAL__sub_I_gui_input(void)

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
/* PropertyInfo::~PropertyInfo() */

void __thiscall PropertyInfo::~PropertyInfo(PropertyInfo *this)

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
/* MethodBindTRC<PopupMenu*, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<PopupMenu*,int>::~MethodBindTRC(MethodBindTRC<PopupMenu*,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<bool, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool,int>::~MethodBindTRC(MethodBindTRC<bool,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<int, bool>::~MethodBindT() */

void __thiscall MethodBindT<int,bool>::~MethodBindT(MethodBindT<int,bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<String, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<String,int>::~MethodBindTRC(MethodBindTRC<String,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<int, String const&>::~MethodBindT() */

void __thiscall MethodBindT<int,String_const&>::~MethodBindT(MethodBindT<int,String_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<int>::~MethodBindT() */

void __thiscall MethodBindT<int>::~MethodBindT(MethodBindT<int> *this)

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
/* MethodBindTRC<Control::TextDirection>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Control::TextDirection>::~MethodBindTRC(MethodBindTRC<Control::TextDirection> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Control::TextDirection>::~MethodBindT() */

void __thiscall
MethodBindT<Control::TextDirection>::~MethodBindT(MethodBindT<Control::TextDirection> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<bool>::~MethodBindTR() */

void __thiscall MethodBindTR<bool>::~MethodBindTR(MethodBindTR<bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<MenuBar, void, ObjectID>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<MenuBar,void,ObjectID>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<MenuBar,void,ObjectID> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<MenuBar, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<MenuBar,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<MenuBar,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<MenuBar, void, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<MenuBar,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<MenuBar,void,bool> *this)

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



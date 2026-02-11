
/* Button::_queue_update_size_cache() */

void Button::_queue_update_size_cache(void)

{
  return;
}



/* Button::get_text_overrun_behavior() const */

undefined4 __thiscall Button::get_text_overrun_behavior(Button *this)

{
  return *(undefined4 *)(this + 0xa70);
}



/* Button::get_autowrap_mode() const */

undefined4 __thiscall Button::get_autowrap_mode(Button *this)

{
  return *(undefined4 *)(this + 0xa6c);
}



/* Button::get_text_direction() const */

undefined4 __thiscall Button::get_text_direction(Button *this)

{
  return *(undefined4 *)(this + 0xa68);
}



/* Button::is_expand_icon() const */

Button __thiscall Button::is_expand_icon(Button *this)

{
  return this[0xa80];
}



/* Button::is_flat() const */

Button __thiscall Button::is_flat(Button *this)

{
  return this[0xa40];
}



/* Button::get_clip_text() const */

Button __thiscall Button::get_clip_text(Button *this)

{
  return this[0xa81];
}



/* Button::get_text_alignment() const */

undefined4 __thiscall Button::get_text_alignment(Button *this)

{
  return *(undefined4 *)(this + 0xa84);
}



/* Button::get_icon_alignment() const */

undefined4 __thiscall Button::get_icon_alignment(Button *this)

{
  return *(undefined4 *)(this + 0xa88);
}



/* Button::get_vertical_icon_alignment() const */

undefined4 __thiscall Button::get_vertical_icon_alignment(Button *this)

{
  return *(undefined4 *)(this + 0xa8c);
}



/* Button::set_flat(bool) */

void __thiscall Button::set_flat(Button *this,bool param_1)

{
  if (this[0xa40] == (Button)param_1) {
    return;
  }
  this[0xa40] = (Button)param_1;
  CanvasItem::queue_redraw();
  return;
}



/* Button::set_text_alignment(HorizontalAlignment) */

void __thiscall Button::set_text_alignment(Button *this,int param_2)

{
  if (*(int *)(this + 0xa84) == param_2) {
    return;
  }
  *(int *)(this + 0xa84) = param_2;
  CanvasItem::queue_redraw();
  return;
}



/* Button::_texture_changed() */

void Button::_texture_changed(void)

{
  CanvasItem::queue_redraw();
  Control::update_minimum_size();
  return;
}



/* Button::set_icon_alignment(HorizontalAlignment) */

void __thiscall Button::set_icon_alignment(Button *this,int param_2)

{
  if (*(int *)(this + 0xa88) != param_2) {
    *(int *)(this + 0xa88) = param_2;
    Control::update_minimum_size();
    CanvasItem::queue_redraw();
    return;
  }
  return;
}



/* Button::set_clip_text(bool) */

void __thiscall Button::set_clip_text(Button *this,bool param_1)

{
  if (this[0xa81] != (Button)param_1) {
    this[0xa81] = (Button)param_1;
    if (*(code **)(*(long *)this + 0x368) != _queue_update_size_cache) {
      (**(code **)(*(long *)this + 0x368))();
    }
    CanvasItem::queue_redraw();
    Control::update_minimum_size();
    return;
  }
  return;
}



/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   Button::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#32}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#32}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#32}::
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
   Button::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#31}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#31}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#31}::
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
   Button::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#30}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#30}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#30}::
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
   Button::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#29}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#29}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#29}::
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
   Button::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#28}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#28}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#28}::
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
   Button::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#27}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#27}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#27}::
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
   Button::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#26}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#26}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#26}::
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
   Button::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#25}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#25}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#25}::
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
   Button::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#24}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#24}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#24}::
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
   Button::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#23}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#23}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#23}::
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
   Button::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#22}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#22}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#22}::
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
   Button::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#21}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#21}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#21}::
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
   Button::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#20}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#20}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#20}::
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
   Button::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#19}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#19}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#19}::
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
   Button::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#18}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#18}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#18}::
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
   Button::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#17}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#17}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#17}::
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
   Button::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#16}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#16}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#16}::
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
   Button::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#15}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#15}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#15}::
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
   Button::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#14}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#14}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#14}::
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
   Button::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#13}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#13}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#13}::
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
   Button::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#12}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#12}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#12}::
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
   Button::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#11}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#11}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#11}::
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
   Button::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#10}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#10}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#10}::
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
   Button::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#9}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#9}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#9}::
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
   Button::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#8}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#8}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#8}::
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
   Button::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#7}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#7}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#7}::
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
   Button::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#6}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#6}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#6}::
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
   Button::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#5}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#5}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#5}::
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
   Button::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#4}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#4}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#4}::
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
   Button::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#3}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#3}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#3}::
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
   Button::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#2}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#2}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#2}::
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
   Button::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#1}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#1}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#1}::
                typeinfo;
    return 0;
  }
  if (param_3 != 1) {
    return 0;
  }
  *param_1 = param_2;
  return 0;
}



/* Button::set_vertical_icon_alignment(VerticalAlignment) */

void __thiscall Button::set_vertical_icon_alignment(Button *this,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0xa8c);
  if (iVar1 != param_2) {
    *(int *)(this + 0xa8c) = param_2;
    if (((iVar1 == 1) || (param_2 == 1)) &&
       (*(code **)(*(long *)this + 0x368) != _queue_update_size_cache)) {
      (**(code **)(*(long *)this + 0x368))(this);
    }
    Control::update_minimum_size();
    CanvasItem::queue_redraw();
    return;
  }
  return;
}



/* Button::set_expand_icon(bool) */

void __thiscall Button::set_expand_icon(Button *this,bool param_1)

{
  if (this[0xa80] != (Button)param_1) {
    this[0xa80] = (Button)param_1;
    if (*(code **)(*(long *)this + 0x368) != _queue_update_size_cache) {
      (**(code **)(*(long *)this + 0x368))();
    }
    CanvasItem::queue_redraw();
    Control::update_minimum_size();
    return;
  }
  return;
}



/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   Button::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#18}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#18}>
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
  lVar4 = __dynamic_cast(*param_2,&Object::typeinfo,&Button::typeinfo,0);
  Control::get_theme_item(local_48,lVar4,2,param_3,param_4);
  pOVar5 = (Object *)Variant::get_validated_object();
  pOVar1 = *(Object **)(lVar4 + 0xb78);
  if (pOVar5 == pOVar1) goto LAB_001008f0;
  if (pOVar5 == (Object *)0x0) {
    if (pOVar1 == (Object *)0x0) goto LAB_001008f0;
    *(undefined8 *)(lVar4 + 0xb78) = 0;
  }
  else {
    pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&Font::typeinfo,0);
    if (pOVar1 == pOVar5) goto LAB_001008f0;
    *(Object **)(lVar4 + 0xb78) = pOVar5;
    if (pOVar5 != (Object *)0x0) {
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        *(undefined8 *)(lVar4 + 0xb78) = 0;
      }
    }
    if (pOVar1 == (Object *)0x0) goto LAB_001008f0;
  }
  cVar3 = RefCounted::unreference();
  if (cVar3 != '\0') {
    cVar3 = predelete_handler(pOVar1);
    if (cVar3 != '\0') {
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      Memory::free_static(pOVar1,false);
    }
  }
LAB_001008f0:
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Button::get_button_icon() const */

void Button::get_button_icon(void)

{
  char cVar1;
  long in_RSI;
  long *in_RDI;
  
  *in_RDI = 0;
  if (*(long *)(in_RSI + 0xa78) != 0) {
    *in_RDI = *(long *)(in_RSI + 0xa78);
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *in_RDI = 0;
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   Button::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#13}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#13}>
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
    _DAT_00000b24 = Variant::operator_cast_to_Color((Variant *)local_48);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    _DAT_00000b2c = in_XMM1_Qa;
    (*pcVar1)();
  }
  lVar2 = __dynamic_cast(*param_2,&Object::typeinfo,&Button::typeinfo,0);
  Control::get_theme_item(local_48,lVar2,0,param_3,param_4);
  uVar3 = Variant::operator_cast_to_Color((Variant *)local_48);
  *(undefined8 *)(lVar2 + 0xb24) = uVar3;
  *(undefined8 *)(lVar2 + 0xb2c) = in_XMM1_Qa;
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
   Button::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#24}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#24}>
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
    _DAT_00000bb8 = Variant::operator_cast_to_Color((Variant *)local_48);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    _DAT_00000bc0 = in_XMM1_Qa;
    (*pcVar1)();
  }
  lVar2 = __dynamic_cast(*param_2,&Object::typeinfo,&Button::typeinfo,0);
  Control::get_theme_item(local_48,lVar2,0,param_3,param_4);
  uVar3 = Variant::operator_cast_to_Color((Variant *)local_48);
  *(undefined8 *)(lVar2 + 3000) = uVar3;
  *(undefined8 *)(lVar2 + 0xbc0) = in_XMM1_Qa;
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
   Button::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#27}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#27}>
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
    _DAT_00000be8 = Variant::operator_cast_to_Color((Variant *)local_48);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    _DAT_00000bf0 = in_XMM1_Qa;
    (*pcVar1)();
  }
  lVar2 = __dynamic_cast(*param_2,&Object::typeinfo,&Button::typeinfo,0);
  Control::get_theme_item(local_48,lVar2,0,param_3,param_4);
  uVar3 = Variant::operator_cast_to_Color((Variant *)local_48);
  *(undefined8 *)(lVar2 + 0xbe8) = uVar3;
  *(undefined8 *)(lVar2 + 0xbf0) = in_XMM1_Qa;
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
   Button::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#25}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#25}>
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
    _DAT_00000bc8 = Variant::operator_cast_to_Color((Variant *)local_48);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    _DAT_00000bd0 = in_XMM1_Qa;
    (*pcVar1)();
  }
  lVar2 = __dynamic_cast(*param_2,&Object::typeinfo,&Button::typeinfo,0);
  Control::get_theme_item(local_48,lVar2,0,param_3,param_4);
  uVar3 = Variant::operator_cast_to_Color((Variant *)local_48);
  *(undefined8 *)(lVar2 + 0xbc8) = uVar3;
  *(undefined8 *)(lVar2 + 0xbd0) = in_XMM1_Qa;
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
   Button::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#26}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#26}>
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
    _DAT_00000bd8 = Variant::operator_cast_to_Color((Variant *)local_48);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    _DAT_00000be0 = in_XMM1_Qa;
    (*pcVar1)();
  }
  lVar2 = __dynamic_cast(*param_2,&Object::typeinfo,&Button::typeinfo,0);
  Control::get_theme_item(local_48,lVar2,0,param_3,param_4);
  uVar3 = Variant::operator_cast_to_Color((Variant *)local_48);
  *(undefined8 *)(lVar2 + 0xbd8) = uVar3;
  *(undefined8 *)(lVar2 + 0xbe0) = in_XMM1_Qa;
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
   Button::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#16}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#16}>
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
    _DAT_00000b54 = Variant::operator_cast_to_Color((Variant *)local_48);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    _DAT_00000b5c = in_XMM1_Qa;
    (*pcVar1)();
  }
  lVar2 = __dynamic_cast(*param_2,&Object::typeinfo,&Button::typeinfo,0);
  Control::get_theme_item(local_48,lVar2,0,param_3,param_4);
  uVar3 = Variant::operator_cast_to_Color((Variant *)local_48);
  *(undefined8 *)(lVar2 + 0xb54) = uVar3;
  *(undefined8 *)(lVar2 + 0xb5c) = in_XMM1_Qa;
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
   Button::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#14}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#14}>
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
    _DAT_00000b34 = Variant::operator_cast_to_Color((Variant *)local_48);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    _DAT_00000b3c = in_XMM1_Qa;
    (*pcVar1)();
  }
  lVar2 = __dynamic_cast(*param_2,&Object::typeinfo,&Button::typeinfo,0);
  Control::get_theme_item(local_48,lVar2,0,param_3,param_4);
  uVar3 = Variant::operator_cast_to_Color((Variant *)local_48);
  *(undefined8 *)(lVar2 + 0xb34) = uVar3;
  *(undefined8 *)(lVar2 + 0xb3c) = in_XMM1_Qa;
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
   Button::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#12}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#12}>
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
    _DAT_00000b14 = Variant::operator_cast_to_Color((Variant *)local_48);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    _DAT_00000b1c = in_XMM1_Qa;
    (*pcVar1)();
  }
  lVar2 = __dynamic_cast(*param_2,&Object::typeinfo,&Button::typeinfo,0);
  Control::get_theme_item(local_48,lVar2,0,param_3,param_4);
  uVar3 = Variant::operator_cast_to_Color((Variant *)local_48);
  *(undefined8 *)(lVar2 + 0xb14) = uVar3;
  *(undefined8 *)(lVar2 + 0xb1c) = in_XMM1_Qa;
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
   Button::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#23}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#23}>
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
    _DAT_00000ba8 = Variant::operator_cast_to_Color((Variant *)local_48);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    _DAT_00000bb0 = in_XMM1_Qa;
    (*pcVar1)();
  }
  lVar2 = __dynamic_cast(*param_2,&Object::typeinfo,&Button::typeinfo,0);
  Control::get_theme_item(local_48,lVar2,0,param_3,param_4);
  uVar3 = Variant::operator_cast_to_Color((Variant *)local_48);
  *(undefined8 *)(lVar2 + 0xba8) = uVar3;
  *(undefined8 *)(lVar2 + 0xbb0) = in_XMM1_Qa;
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
   Button::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#21}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#21}>
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
    _DAT_00000b88 = Variant::operator_cast_to_Color((Variant *)local_48);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    _DAT_00000b90 = in_XMM1_Qa;
    (*pcVar1)();
  }
  lVar2 = __dynamic_cast(*param_2,&Object::typeinfo,&Button::typeinfo,0);
  Control::get_theme_item(local_48,lVar2,0,param_3,param_4);
  uVar3 = Variant::operator_cast_to_Color((Variant *)local_48);
  *(undefined8 *)(lVar2 + 0xb88) = uVar3;
  *(undefined8 *)(lVar2 + 0xb90) = in_XMM1_Qa;
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
   Button::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#17}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#17}>
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
    _DAT_00000b64 = Variant::operator_cast_to_Color((Variant *)local_48);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    _DAT_00000b6c = in_XMM1_Qa;
    (*pcVar1)();
  }
  lVar2 = __dynamic_cast(*param_2,&Object::typeinfo,&Button::typeinfo,0);
  Control::get_theme_item(local_48,lVar2,0,param_3,param_4);
  uVar3 = Variant::operator_cast_to_Color((Variant *)local_48);
  *(undefined8 *)(lVar2 + 0xb64) = uVar3;
  *(undefined8 *)(lVar2 + 0xb6c) = in_XMM1_Qa;
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
   Button::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#22}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#22}>
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
    _DAT_00000b98 = Variant::operator_cast_to_Color((Variant *)local_48);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    _DAT_00000ba0 = in_XMM1_Qa;
    (*pcVar1)();
  }
  lVar2 = __dynamic_cast(*param_2,&Object::typeinfo,&Button::typeinfo,0);
  Control::get_theme_item(local_48,lVar2,0,param_3,param_4);
  uVar3 = Variant::operator_cast_to_Color((Variant *)local_48);
  *(undefined8 *)(lVar2 + 0xb98) = uVar3;
  *(undefined8 *)(lVar2 + 0xba0) = in_XMM1_Qa;
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
   Button::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#15}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#15}>
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
    _DAT_00000b44 = Variant::operator_cast_to_Color((Variant *)local_48);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    _DAT_00000b4c = in_XMM1_Qa;
    (*pcVar1)();
  }
  lVar2 = __dynamic_cast(*param_2,&Object::typeinfo,&Button::typeinfo,0);
  Control::get_theme_item(local_48,lVar2,0,param_3,param_4);
  uVar3 = Variant::operator_cast_to_Color((Variant *)local_48);
  *(undefined8 *)(lVar2 + 0xb44) = uVar3;
  *(undefined8 *)(lVar2 + 0xb4c) = in_XMM1_Qa;
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
   Button::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#20}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#20}>
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
    _DAT_00000b84 = 0;
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  lVar3 = __dynamic_cast(*param_2,&Object::typeinfo,&Button::typeinfo,0);
  Control::get_theme_item(local_48,lVar3,1,param_3,param_4);
  iVar2 = Variant::operator_cast_to_int((Variant *)local_48);
  *(int *)(lVar3 + 0xb84) = iVar2;
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
   Button::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#29}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#29}>
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
    _DAT_00000c00 = 0;
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  lVar3 = __dynamic_cast(*param_2,&Object::typeinfo,&Button::typeinfo,0);
  Control::get_theme_item(local_48,lVar3,1,param_3,param_4);
  iVar2 = Variant::operator_cast_to_int((Variant *)local_48);
  *(int *)(lVar3 + 0xc00) = iVar2;
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
   Button::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#19}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#19}>
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
    _DAT_00000b80 = 0;
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  lVar3 = __dynamic_cast(*param_2,&Object::typeinfo,&Button::typeinfo,0);
  Control::get_theme_item(local_48,lVar3,3,param_3,param_4);
  iVar2 = Variant::operator_cast_to_int((Variant *)local_48);
  *(int *)(lVar3 + 0xb80) = iVar2;
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
   Button::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#30}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#30}>
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
    _DAT_00000c04 = 0;
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  lVar3 = __dynamic_cast(*param_2,&Object::typeinfo,&Button::typeinfo,0);
  Control::get_theme_item(local_48,lVar3,1,param_3,param_4);
  iVar2 = Variant::operator_cast_to_int((Variant *)local_48);
  *(int *)(lVar3 + 0xc04) = iVar2;
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
   Button::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#32}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#32}>
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
    _DAT_00000c08 = 0;
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  lVar3 = __dynamic_cast(*param_2,&Object::typeinfo,&Button::typeinfo,0);
  Control::get_theme_item(local_48,lVar3,1,param_3,param_4);
  iVar2 = Variant::operator_cast_to_int((Variant *)local_48);
  *(int *)(lVar3 + 0xc08) = iVar2;
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
   Button::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#31}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#31}>
     ::_M_invoke(_Any_data *param_1,Node **param_2,StringName *param_3,StringName *param_4)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  long in_FS_OFFSET;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_2 == (Node *)0x0) {
    Control::get_theme_item(local_48,0,1,param_3,param_4);
    Variant::operator_cast_to_bool((Variant *)local_48);
    DAT_00000b10 = 0;
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  lVar3 = __dynamic_cast(*param_2,&Object::typeinfo,&Button::typeinfo,0);
  Control::get_theme_item(local_48,lVar3,1,param_3,param_4);
  bVar2 = Variant::operator_cast_to_bool((Variant *)local_48);
  *(bool *)(lVar3 + 0xb10) = bVar2;
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
   Button::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#2}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#2}>
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
  lVar4 = __dynamic_cast(*param_2,&Object::typeinfo,&Button::typeinfo,0);
  Control::get_theme_item(local_48,lVar4,5,param_3,param_4);
  pOVar5 = (Object *)Variant::get_validated_object();
  pOVar1 = *(Object **)(lVar4 + 0xaa8);
  if (pOVar5 == pOVar1) goto LAB_001018e0;
  if (pOVar5 == (Object *)0x0) {
    if (pOVar1 == (Object *)0x0) goto LAB_001018e0;
    *(undefined8 *)(lVar4 + 0xaa8) = 0;
  }
  else {
    pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&StyleBox::typeinfo,0);
    if (pOVar1 == pOVar5) goto LAB_001018e0;
    *(Object **)(lVar4 + 0xaa8) = pOVar5;
    if (pOVar5 != (Object *)0x0) {
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        *(undefined8 *)(lVar4 + 0xaa8) = 0;
      }
    }
    if (pOVar1 == (Object *)0x0) goto LAB_001018e0;
  }
  cVar3 = RefCounted::unreference();
  if (cVar3 != '\0') {
    cVar3 = predelete_handler(pOVar1);
    if (cVar3 != '\0') {
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      Memory::free_static(pOVar1,false);
    }
  }
LAB_001018e0:
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
   Button::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#28}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#28}>
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
  lVar4 = __dynamic_cast(*param_2,&Object::typeinfo,&Button::typeinfo,0);
  Control::get_theme_item(local_48,lVar4,4,param_3,param_4);
  pOVar5 = (Object *)Variant::get_validated_object();
  pOVar1 = *(Object **)(lVar4 + 0xbf8);
  if (pOVar5 == pOVar1) goto LAB_00101a30;
  if (pOVar5 == (Object *)0x0) {
    if (pOVar1 == (Object *)0x0) goto LAB_00101a30;
    *(undefined8 *)(lVar4 + 0xbf8) = 0;
  }
  else {
    pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&Texture2D::typeinfo,0);
    if (pOVar1 == pOVar5) goto LAB_00101a30;
    *(Object **)(lVar4 + 0xbf8) = pOVar5;
    if (pOVar5 != (Object *)0x0) {
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        *(undefined8 *)(lVar4 + 0xbf8) = 0;
      }
    }
    if (pOVar1 == (Object *)0x0) goto LAB_00101a30;
  }
  cVar3 = RefCounted::unreference();
  if (cVar3 != '\0') {
    cVar3 = predelete_handler(pOVar1);
    if (cVar3 != '\0') {
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      Memory::free_static(pOVar1,false);
    }
  }
LAB_00101a30:
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
   Button::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#3}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#3}>
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
  lVar4 = __dynamic_cast(*param_2,&Object::typeinfo,&Button::typeinfo,0);
  Control::get_theme_item(local_48,lVar4,5,param_3,param_4);
  pOVar5 = (Object *)Variant::get_validated_object();
  pOVar1 = *(Object **)(lVar4 + 0xab0);
  if (pOVar5 == pOVar1) goto LAB_00101b80;
  if (pOVar5 == (Object *)0x0) {
    if (pOVar1 == (Object *)0x0) goto LAB_00101b80;
    *(undefined8 *)(lVar4 + 0xab0) = 0;
  }
  else {
    pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&StyleBox::typeinfo,0);
    if (pOVar1 == pOVar5) goto LAB_00101b80;
    *(Object **)(lVar4 + 0xab0) = pOVar5;
    if (pOVar5 != (Object *)0x0) {
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        *(undefined8 *)(lVar4 + 0xab0) = 0;
      }
    }
    if (pOVar1 == (Object *)0x0) goto LAB_00101b80;
  }
  cVar3 = RefCounted::unreference();
  if (cVar3 != '\0') {
    cVar3 = predelete_handler(pOVar1);
    if (cVar3 != '\0') {
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      Memory::free_static(pOVar1,false);
    }
  }
LAB_00101b80:
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
   Button::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#10}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#10}>
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
  lVar4 = __dynamic_cast(*param_2,&Object::typeinfo,&Button::typeinfo,0);
  Control::get_theme_item(local_48,lVar4,5,param_3,param_4);
  pOVar5 = (Object *)Variant::get_validated_object();
  pOVar1 = *(Object **)(lVar4 + 0xae8);
  if (pOVar5 == pOVar1) goto LAB_00101cd0;
  if (pOVar5 == (Object *)0x0) {
    if (pOVar1 == (Object *)0x0) goto LAB_00101cd0;
    *(undefined8 *)(lVar4 + 0xae8) = 0;
  }
  else {
    pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&StyleBox::typeinfo,0);
    if (pOVar1 == pOVar5) goto LAB_00101cd0;
    *(Object **)(lVar4 + 0xae8) = pOVar5;
    if (pOVar5 != (Object *)0x0) {
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        *(undefined8 *)(lVar4 + 0xae8) = 0;
      }
    }
    if (pOVar1 == (Object *)0x0) goto LAB_00101cd0;
  }
  cVar3 = RefCounted::unreference();
  if (cVar3 != '\0') {
    cVar3 = predelete_handler(pOVar1);
    if (cVar3 != '\0') {
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      Memory::free_static(pOVar1,false);
    }
  }
LAB_00101cd0:
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
   Button::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#9}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#9}>
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
  lVar4 = __dynamic_cast(*param_2,&Object::typeinfo,&Button::typeinfo,0);
  Control::get_theme_item(local_48,lVar4,5,param_3,param_4);
  pOVar5 = (Object *)Variant::get_validated_object();
  pOVar1 = *(Object **)(lVar4 + 0xae0);
  if (pOVar5 == pOVar1) goto LAB_00101e20;
  if (pOVar5 == (Object *)0x0) {
    if (pOVar1 == (Object *)0x0) goto LAB_00101e20;
    *(undefined8 *)(lVar4 + 0xae0) = 0;
  }
  else {
    pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&StyleBox::typeinfo,0);
    if (pOVar1 == pOVar5) goto LAB_00101e20;
    *(Object **)(lVar4 + 0xae0) = pOVar5;
    if (pOVar5 != (Object *)0x0) {
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        *(undefined8 *)(lVar4 + 0xae0) = 0;
      }
    }
    if (pOVar1 == (Object *)0x0) goto LAB_00101e20;
  }
  cVar3 = RefCounted::unreference();
  if (cVar3 != '\0') {
    cVar3 = predelete_handler(pOVar1);
    if (cVar3 != '\0') {
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      Memory::free_static(pOVar1,false);
    }
  }
LAB_00101e20:
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
   Button::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#1}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#1}>
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
  lVar4 = __dynamic_cast(*param_2,&Object::typeinfo,&Button::typeinfo,0);
  Control::get_theme_item(local_48,lVar4,5,param_3,param_4);
  pOVar5 = (Object *)Variant::get_validated_object();
  pOVar1 = *(Object **)(lVar4 + 0xaa0);
  if (pOVar5 == pOVar1) goto LAB_00101f70;
  if (pOVar5 == (Object *)0x0) {
    if (pOVar1 == (Object *)0x0) goto LAB_00101f70;
    *(undefined8 *)(lVar4 + 0xaa0) = 0;
  }
  else {
    pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&StyleBox::typeinfo,0);
    if (pOVar1 == pOVar5) goto LAB_00101f70;
    *(Object **)(lVar4 + 0xaa0) = pOVar5;
    if (pOVar5 != (Object *)0x0) {
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        *(undefined8 *)(lVar4 + 0xaa0) = 0;
      }
    }
    if (pOVar1 == (Object *)0x0) goto LAB_00101f70;
  }
  cVar3 = RefCounted::unreference();
  if (cVar3 != '\0') {
    cVar3 = predelete_handler(pOVar1);
    if (cVar3 != '\0') {
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      Memory::free_static(pOVar1,false);
    }
  }
LAB_00101f70:
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
   Button::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#4}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#4}>
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
  lVar4 = __dynamic_cast(*param_2,&Object::typeinfo,&Button::typeinfo,0);
  Control::get_theme_item(local_48,lVar4,5,param_3,param_4);
  pOVar5 = (Object *)Variant::get_validated_object();
  pOVar1 = *(Object **)(lVar4 + 0xab8);
  if (pOVar5 == pOVar1) goto LAB_001020c0;
  if (pOVar5 == (Object *)0x0) {
    if (pOVar1 == (Object *)0x0) goto LAB_001020c0;
    *(undefined8 *)(lVar4 + 0xab8) = 0;
  }
  else {
    pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&StyleBox::typeinfo,0);
    if (pOVar1 == pOVar5) goto LAB_001020c0;
    *(Object **)(lVar4 + 0xab8) = pOVar5;
    if (pOVar5 != (Object *)0x0) {
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        *(undefined8 *)(lVar4 + 0xab8) = 0;
      }
    }
    if (pOVar1 == (Object *)0x0) goto LAB_001020c0;
  }
  cVar3 = RefCounted::unreference();
  if (cVar3 != '\0') {
    cVar3 = predelete_handler(pOVar1);
    if (cVar3 != '\0') {
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      Memory::free_static(pOVar1,false);
    }
  }
LAB_001020c0:
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
   Button::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#11}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#11}>
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
  lVar4 = __dynamic_cast(*param_2,&Object::typeinfo,&Button::typeinfo,0);
  Control::get_theme_item(local_48,lVar4,5,param_3,param_4);
  pOVar5 = (Object *)Variant::get_validated_object();
  pOVar1 = *(Object **)(lVar4 + 0xaf0);
  if (pOVar5 == pOVar1) goto LAB_00102210;
  if (pOVar5 == (Object *)0x0) {
    if (pOVar1 == (Object *)0x0) goto LAB_00102210;
    *(undefined8 *)(lVar4 + 0xaf0) = 0;
  }
  else {
    pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&StyleBox::typeinfo,0);
    if (pOVar1 == pOVar5) goto LAB_00102210;
    *(Object **)(lVar4 + 0xaf0) = pOVar5;
    if (pOVar5 != (Object *)0x0) {
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        *(undefined8 *)(lVar4 + 0xaf0) = 0;
      }
    }
    if (pOVar1 == (Object *)0x0) goto LAB_00102210;
  }
  cVar3 = RefCounted::unreference();
  if (cVar3 != '\0') {
    cVar3 = predelete_handler(pOVar1);
    if (cVar3 != '\0') {
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      Memory::free_static(pOVar1,false);
    }
  }
LAB_00102210:
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
   Button::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#5}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#5}>
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
  lVar4 = __dynamic_cast(*param_2,&Object::typeinfo,&Button::typeinfo,0);
  Control::get_theme_item(local_48,lVar4,5,param_3,param_4);
  pOVar5 = (Object *)Variant::get_validated_object();
  pOVar1 = *(Object **)(lVar4 + 0xac0);
  if (pOVar5 == pOVar1) goto LAB_00102360;
  if (pOVar5 == (Object *)0x0) {
    if (pOVar1 == (Object *)0x0) goto LAB_00102360;
    *(undefined8 *)(lVar4 + 0xac0) = 0;
  }
  else {
    pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&StyleBox::typeinfo,0);
    if (pOVar1 == pOVar5) goto LAB_00102360;
    *(Object **)(lVar4 + 0xac0) = pOVar5;
    if (pOVar5 != (Object *)0x0) {
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        *(undefined8 *)(lVar4 + 0xac0) = 0;
      }
    }
    if (pOVar1 == (Object *)0x0) goto LAB_00102360;
  }
  cVar3 = RefCounted::unreference();
  if (cVar3 != '\0') {
    cVar3 = predelete_handler(pOVar1);
    if (cVar3 != '\0') {
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      Memory::free_static(pOVar1,false);
    }
  }
LAB_00102360:
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
   Button::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#8}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#8}>
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
  lVar4 = __dynamic_cast(*param_2,&Object::typeinfo,&Button::typeinfo,0);
  Control::get_theme_item(local_48,lVar4,5,param_3,param_4);
  pOVar5 = (Object *)Variant::get_validated_object();
  pOVar1 = *(Object **)(lVar4 + 0xad8);
  if (pOVar5 == pOVar1) goto LAB_001024b0;
  if (pOVar5 == (Object *)0x0) {
    if (pOVar1 == (Object *)0x0) goto LAB_001024b0;
    *(undefined8 *)(lVar4 + 0xad8) = 0;
  }
  else {
    pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&StyleBox::typeinfo,0);
    if (pOVar1 == pOVar5) goto LAB_001024b0;
    *(Object **)(lVar4 + 0xad8) = pOVar5;
    if (pOVar5 != (Object *)0x0) {
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        *(undefined8 *)(lVar4 + 0xad8) = 0;
      }
    }
    if (pOVar1 == (Object *)0x0) goto LAB_001024b0;
  }
  cVar3 = RefCounted::unreference();
  if (cVar3 != '\0') {
    cVar3 = predelete_handler(pOVar1);
    if (cVar3 != '\0') {
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      Memory::free_static(pOVar1,false);
    }
  }
LAB_001024b0:
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
   Button::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#6}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#6}>
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
  lVar4 = __dynamic_cast(*param_2,&Object::typeinfo,&Button::typeinfo,0);
  Control::get_theme_item(local_48,lVar4,5,param_3,param_4);
  pOVar5 = (Object *)Variant::get_validated_object();
  pOVar1 = *(Object **)(lVar4 + 0xac8);
  if (pOVar5 == pOVar1) goto LAB_00102600;
  if (pOVar5 == (Object *)0x0) {
    if (pOVar1 == (Object *)0x0) goto LAB_00102600;
    *(undefined8 *)(lVar4 + 0xac8) = 0;
  }
  else {
    pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&StyleBox::typeinfo,0);
    if (pOVar1 == pOVar5) goto LAB_00102600;
    *(Object **)(lVar4 + 0xac8) = pOVar5;
    if (pOVar5 != (Object *)0x0) {
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        *(undefined8 *)(lVar4 + 0xac8) = 0;
      }
    }
    if (pOVar1 == (Object *)0x0) goto LAB_00102600;
  }
  cVar3 = RefCounted::unreference();
  if (cVar3 != '\0') {
    cVar3 = predelete_handler(pOVar1);
    if (cVar3 != '\0') {
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      Memory::free_static(pOVar1,false);
    }
  }
LAB_00102600:
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
   Button::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#7}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#7}>
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
  lVar4 = __dynamic_cast(*param_2,&Object::typeinfo,&Button::typeinfo,0);
  Control::get_theme_item(local_48,lVar4,5,param_3,param_4);
  pOVar5 = (Object *)Variant::get_validated_object();
  pOVar1 = *(Object **)(lVar4 + 0xad0);
  if (pOVar5 == pOVar1) goto LAB_00102750;
  if (pOVar5 == (Object *)0x0) {
    if (pOVar1 == (Object *)0x0) goto LAB_00102750;
    *(undefined8 *)(lVar4 + 0xad0) = 0;
  }
  else {
    pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&StyleBox::typeinfo,0);
    if (pOVar1 == pOVar5) goto LAB_00102750;
    *(Object **)(lVar4 + 0xad0) = pOVar5;
    if (pOVar5 != (Object *)0x0) {
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        *(undefined8 *)(lVar4 + 0xad0) = 0;
      }
    }
    if (pOVar1 == (Object *)0x0) goto LAB_00102750;
  }
  cVar3 = RefCounted::unreference();
  if (cVar3 != '\0') {
    cVar3 = predelete_handler(pOVar1);
    if (cVar3 != '\0') {
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      Memory::free_static(pOVar1,false);
    }
  }
LAB_00102750:
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



/* Button::get_language() const */

void Button::get_language(void)

{
  long in_RSI;
  CowData<char32_t> *in_RDI;
  
  *(undefined8 *)in_RDI = 0;
  if (*(long *)(in_RSI + 0xa60) != 0) {
    CowData<char32_t>::_ref(in_RDI,(CowData *)(in_RSI + 0xa60));
  }
  return;
}



/* Button::get_text() const */

void Button::get_text(void)

{
  long in_RSI;
  CowData<char32_t> *in_RDI;
  
  *(undefined8 *)in_RDI = 0;
  if (*(long *)(in_RSI + 0xa48) != 0) {
    CowData<char32_t>::_ref(in_RDI,(CowData *)(in_RSI + 0xa48));
  }
  return;
}



/* Button::_set_internal_margin(Side, float) */

void __thiscall Button::_set_internal_margin(undefined4 param_1,Button *this,int param_3)

{
  *(undefined4 *)(this + (long)param_3 * 4 + 0xa90) = param_1;
  return;
}



/* Button::_get_largest_stylebox_size() const */

undefined8 __thiscall Button::_get_largest_stylebox_size(Button *this)

{
  return *(undefined8 *)(this + 0xaf8);
}



/* Button::_get_current_stylebox() const */

void Button::_get_current_stylebox(void)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  StringName *in_RSI;
  Ref<StyleBox> *in_RDI;
  long in_FS_OFFSET;
  long local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)in_RDI = 0;
  if (*(long *)(in_RSI + 0xaa0) != 0) {
    *(long *)in_RDI = *(long *)(in_RSI + 0xaa0);
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *(undefined8 *)in_RDI = 0;
    }
  }
  cVar1 = (**(code **)(*(long *)in_RSI + 0x340))();
  uVar3 = BaseButton::get_draw_mode();
  switch(uVar3) {
  case 0:
    if (cVar1 != '\0') {
      local_48 = 0;
      if ((const::{lambda()#1}::operator()()::sname == '\0') &&
         (iVar4 = __cxa_guard_acquire(&const::{lambda()#1}::operator()()::sname), iVar4 != 0)) {
        _scs_create((char *)&const::{lambda()#1}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&const::{lambda()#1}::operator()()::sname,&__dso_handle
                    );
        __cxa_guard_release(&const::{lambda()#1}::operator()()::sname);
      }
      cVar1 = Control::has_theme_stylebox
                        (in_RSI,(StringName *)&const::{lambda()#1}::operator()()::sname);
      if (cVar1 != '\0') {
        if ((StringName::configured != '\0') && (local_48 != 0)) {
          StringName::unref();
        }
        Ref<StyleBox>::operator=(in_RDI,*(Ref **)(in_RSI + 0xaa8));
        break;
      }
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
    }
    Ref<StyleBox>::operator=(in_RDI,*(Ref **)(in_RSI + 0xaa0));
    break;
  case 1:
    goto switchD_0010296c_caseD_1;
  case 2:
    if (cVar1 != '\0') {
      local_48 = 0;
      if ((const::{lambda()#4}::operator()()::sname == '\0') &&
         (iVar4 = __cxa_guard_acquire(&const::{lambda()#4}::operator()()::sname), iVar4 != 0)) {
        _scs_create((char *)&const::{lambda()#4}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&const::{lambda()#4}::operator()()::sname,&__dso_handle
                    );
        __cxa_guard_release(&const::{lambda()#4}::operator()()::sname);
      }
      cVar1 = Control::has_theme_stylebox
                        (in_RSI,(StringName *)&const::{lambda()#4}::operator()()::sname);
      if (cVar1 != '\0') {
        if ((StringName::configured != '\0') && (local_48 != 0)) {
          StringName::unref();
        }
        Ref<StyleBox>::operator=(in_RDI,*(Ref **)(in_RSI + 0xac8));
        break;
      }
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
    }
    Ref<StyleBox>::operator=(in_RDI,*(Ref **)(in_RSI + 0xac0));
    break;
  case 3:
    if (cVar1 != '\0') {
      local_48 = 0;
      if ((const::{lambda()#5}::operator()()::sname == '\0') &&
         (iVar4 = __cxa_guard_acquire(&const::{lambda()#5}::operator()()::sname), iVar4 != 0)) {
        _scs_create((char *)&const::{lambda()#5}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&const::{lambda()#5}::operator()()::sname,&__dso_handle
                    );
        __cxa_guard_release(&const::{lambda()#5}::operator()()::sname);
      }
      cVar1 = Control::has_theme_stylebox
                        (in_RSI,(StringName *)&const::{lambda()#5}::operator()()::sname);
      if (cVar1 != '\0') {
        if ((StringName::configured != '\0') && (local_48 != 0)) {
          StringName::unref();
        }
        Ref<StyleBox>::operator=(in_RDI,*(Ref **)(in_RSI + 0xae8));
        break;
      }
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
    }
    Ref<StyleBox>::operator=(in_RDI,*(Ref **)(in_RSI + 0xae0));
    break;
  case 4:
    local_48 = 0;
    StringName::StringName((StringName *)&local_50,"hover_pressed",false);
    cVar2 = Control::has_theme_stylebox(in_RSI,(StringName *)&local_50);
    if ((StringName::configured != '\0') &&
       (((local_50 == 0 || (StringName::unref(), StringName::configured != '\0')) && (local_48 != 0)
        ))) {
      StringName::unref();
    }
    if (cVar2 != '\0') {
      if (cVar1 != '\0') {
        local_48 = 0;
        if ((const::{lambda()#2}::operator()()::sname == '\0') &&
           (iVar4 = __cxa_guard_acquire(&const::{lambda()#2}::operator()()::sname), iVar4 != 0)) {
          _scs_create((char *)&const::{lambda()#2}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,&const::{lambda()#2}::operator()()::sname,
                       &__dso_handle);
          __cxa_guard_release(&const::{lambda()#2}::operator()()::sname);
        }
        cVar1 = Control::has_theme_stylebox
                          (in_RSI,(StringName *)&const::{lambda()#2}::operator()()::sname);
        if (cVar1 != '\0') {
          if ((StringName::configured != '\0') && (local_48 != 0)) {
            StringName::unref();
          }
          Ref<StyleBox>::operator=(in_RDI,*(Ref **)(in_RSI + 0xad8));
          break;
        }
        if ((StringName::configured != '\0') && (local_48 != 0)) {
          StringName::unref();
        }
      }
      Ref<StyleBox>::operator=(in_RDI,*(Ref **)(in_RSI + 0xad0));
      break;
    }
switchD_0010296c_caseD_1:
    if (cVar1 != '\0') {
      local_48 = 0;
      if ((const::{lambda()#3}::operator()()::sname == '\0') &&
         (iVar4 = __cxa_guard_acquire(&const::{lambda()#3}::operator()()::sname), iVar4 != 0)) {
        _scs_create((char *)&const::{lambda()#3}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&const::{lambda()#3}::operator()()::sname,&__dso_handle
                    );
        __cxa_guard_release(&const::{lambda()#3}::operator()()::sname);
      }
      cVar1 = Control::has_theme_stylebox
                        (in_RSI,(StringName *)&const::{lambda()#3}::operator()()::sname);
      if (cVar1 != '\0') {
        if ((StringName::configured != '\0') && (local_48 != 0)) {
          StringName::unref();
        }
        Ref<StyleBox>::operator=(in_RDI,*(Ref **)(in_RSI + 0xab8));
        break;
      }
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
    }
    Ref<StyleBox>::operator=(in_RDI,*(Ref **)(in_RSI + 0xab0));
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Button::_fit_icon_size(Vector2 const&) const */

void Button::_fit_icon_size(Vector2 *param_1)

{
  return;
}



/* Button::_shape(Ref<TextParagraph>, String) const */

void __thiscall Button::_shape(Button *this,long *param_2,CowData<char32_t> *param_3)

{
  uint uVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  byte bVar5;
  ulong uVar6;
  long in_FS_OFFSET;
  Object *local_50;
  undefined8 local_48;
  undefined1 local_40 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*param_2 == 0) && (*(long *)(this + 0xa58) != 0)) {
    *param_2 = *(long *)(this + 0xa58);
    cVar4 = RefCounted::reference();
    if (cVar4 == '\0') {
      *param_2 = 0;
    }
  }
  lVar2 = *(long *)param_3;
  if (((lVar2 == 0) || (*(uint *)(lVar2 + -8) < 2)) && (lVar2 != *(long *)(this + 0xa50))) {
    CowData<char32_t>::_ref(param_3,(CowData *)(this + 0xa50));
  }
  TextParagraph::clear();
  if (*(Object **)(this + 0xb78) != (Object *)0x0) {
    local_50 = *(Object **)(this + 0xb78);
    cVar4 = RefCounted::reference();
    if ((cVar4 != '\0') && (uVar1 = *(uint *)(this + 0xb80), local_50 != (Object *)0x0)) {
      if (uVar1 != 0) {
        uVar6 = 0x11;
        if (*(int *)(this + 0xa6c) - 1U < 3) {
          uVar6 = *(ulong *)(CSWTCH_4651 + (ulong)(*(int *)(this + 0xa6c) - 1U) * 8) | 0x10;
        }
        TextParagraph::set_break_flags(*param_2,uVar6);
        TextParagraph::set_line_spacing((float)*(int *)(this + 0xc08));
        if (*(int *)(this + 0xa68) == 3) {
          lVar2 = *param_2;
          bVar5 = (**(code **)(*(long *)this + 0x340))(this);
          TextParagraph::set_direction(lVar2,bVar5 + 1);
        }
        else {
          TextParagraph::set_direction(*param_2);
        }
        local_40 = (undefined1  [16])0x0;
        local_48 = 0;
        TextParagraph::add_string
                  ((String *)*param_2,(Ref *)param_3,(int)&local_50,(String *)(ulong)uVar1,
                   (Variant *)(this + 0xa60));
        if (Variant::needs_deinit[(int)local_48] != '\0') {
          Variant::_clear_internal();
        }
        TextParagraph::set_text_overrun_behavior(*param_2);
        if (local_50 == (Object *)0x0) goto LAB_00103102;
      }
      cVar4 = RefCounted::unreference();
      pOVar3 = local_50;
      if (cVar4 != '\0') {
        cVar4 = predelete_handler(local_50);
        if (cVar4 != '\0') {
          (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
          Memory::free_static(pOVar3,false);
        }
      }
    }
  }
LAB_00103102:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Button::set_text_overrun_behavior(TextServer::OverrunBehavior) */

void __thiscall Button::set_text_overrun_behavior(Button *this,int param_2)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  Object *pOVar4;
  char cVar5;
  long in_FS_OFFSET;
  long local_50;
  Object *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = *(int *)(this + 0xa70);
  if (iVar2 == param_2) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    *(int *)(this + 0xa70) = param_2;
    local_50 = 0;
    local_40 = 0;
    local_48 = (Object *)&_LC37;
    String::parse_latin1((StrRange *)&local_50);
    local_48 = (Object *)0x0;
    _shape(this,&local_48,(StrRange *)&local_50);
    pOVar4 = local_48;
    if (local_48 != (Object *)0x0) {
      cVar5 = RefCounted::unreference();
      if (cVar5 != '\0') {
        cVar5 = predelete_handler(pOVar4);
        if (cVar5 != '\0') {
          (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
          Memory::free_static(pOVar4,false);
        }
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
    if ((param_2 == 0 || iVar2 == 0) &&
       (*(code **)(*(long *)this + 0x368) != _queue_update_size_cache)) {
      (**(code **)(*(long *)this + 0x368))(this);
    }
    CanvasItem::queue_redraw();
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      Control::update_minimum_size();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Button::set_button_icon(Ref<Texture2D> const&) */

void __thiscall Button::set_button_icon(Button *this,Ref *param_1)

{
  Callable *pCVar1;
  Callable *pCVar2;
  Object *pOVar3;
  char cVar4;
  Object *pOVar5;
  long in_FS_OFFSET;
  Button aBStack_48 [24];
  long local_30;
  
  pCVar1 = *(Callable **)(this + 0xa78);
  pCVar2 = *(Callable **)param_1;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (pCVar2 == pCVar1) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
    goto LAB_001034fb;
  }
  if (pCVar1 == (Callable *)0x0) {
    *(Callable **)(this + 0xa78) = pCVar2;
    if (pCVar2 != (Callable *)0x0) {
      cVar4 = RefCounted::reference();
      if (cVar4 != '\0') goto LAB_00103428;
      *(undefined8 *)(this + 0xa78) = 0;
    }
  }
  else {
    create_custom_callable_function_pointer<Button>
              (aBStack_48,(char *)this,(_func_void *)"&Button::_texture_changed");
    Resource::disconnect_changed(pCVar1);
    Callable::~Callable((Callable *)aBStack_48);
    pOVar3 = *(Object **)param_1;
    pOVar5 = *(Object **)(this + 0xa78);
    if (pOVar3 != pOVar5) {
      *(Object **)(this + 0xa78) = pOVar3;
      if (pOVar3 == (Object *)0x0) {
LAB_001034cb:
        if (pOVar5 == (Object *)0x0) goto LAB_00103468;
      }
      else {
        cVar4 = RefCounted::reference();
        if (cVar4 == '\0') {
          *(undefined8 *)(this + 0xa78) = 0;
          goto LAB_001034cb;
        }
        if (pOVar5 == (Object *)0x0) goto LAB_00103428;
      }
      cVar4 = RefCounted::unreference();
      if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar5), cVar4 != '\0')) {
        (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
        Memory::free_static(pOVar5,false);
      }
LAB_00103428:
      pOVar5 = *(Object **)(this + 0xa78);
    }
    if (pOVar5 != (Object *)0x0) {
      create_custom_callable_function_pointer<Button>
                (aBStack_48,(char *)this,(_func_void *)"&Button::_texture_changed");
      Resource::connect_changed((Callable *)pOVar5,(uint)aBStack_48);
      Callable::~Callable((Callable *)aBStack_48);
    }
  }
LAB_00103468:
  CanvasItem::queue_redraw();
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    Control::update_minimum_size();
    return;
  }
LAB_001034fb:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Button::~Button() */

void __thiscall Button::~Button(Button *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_0011a1f0;
  if (*(long *)(this + 0xbf8) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xbf8);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xb78) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xb78);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xaf0) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xaf0);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xae8) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xae8);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xae0) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xae0);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xad8) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xad8);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xad0) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xad0);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xac8) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xac8);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xac0) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xac0);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xab8) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xab8);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xab0) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xab0);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xaa8) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xaa8);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xaa0) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xaa0);
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
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xa60));
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
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xa50));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xa48));
  BaseButton::~BaseButton((BaseButton *)this);
  return;
}



/* Button::~Button() */

void __thiscall Button::~Button(Button *this)

{
  ~Button(this);
  operator_delete(this,0xc10);
  return;
}



/* Button::set_autowrap_mode(TextServer::AutowrapMode) */

void __thiscall Button::set_autowrap_mode(Button *this,int param_2)

{
  Object *pOVar1;
  char cVar2;
  long in_FS_OFFSET;
  undefined8 local_40;
  Object *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(this + 0xa6c) == param_2) {
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    *(int *)(this + 0xa6c) = param_2;
    local_40 = 0;
    local_38 = (Object *)&_LC37;
    local_30 = 0;
    String::parse_latin1((StrRange *)&local_40);
    local_38 = (Object *)0x0;
    _shape(this,&local_38,(StrRange *)&local_40);
    pOVar1 = local_38;
    if (local_38 != (Object *)0x0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
        cVar2 = predelete_handler(pOVar1);
        if (cVar2 != '\0') {
          (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
          Memory::free_static(pOVar1,false);
        }
      }
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
    CanvasItem::queue_redraw();
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      Control::update_minimum_size();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Button::set_text_direction(Control::TextDirection) */

void __thiscall Button::set_text_direction(Button *this,int param_2)

{
  Object *pOVar1;
  char cVar2;
  long in_FS_OFFSET;
  undefined8 local_40;
  Object *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 < -1) || (3 < param_2)) {
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("set_text_direction","scene/gui/button.cpp",0x275,
                       "Condition \"(int)p_text_direction < -1 || (int)p_text_direction > 3\" is true."
                       ,0,0);
      return;
    }
  }
  else if (*(int *)(this + 0xa68) == param_2) {
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    *(int *)(this + 0xa68) = param_2;
    local_40 = 0;
    local_38 = (Object *)&_LC37;
    local_30 = 0;
    String::parse_latin1((StrRange *)&local_40);
    local_38 = (Object *)0x0;
    _shape(this,&local_38,(StrRange *)&local_40);
    pOVar1 = local_38;
    if (local_38 != (Object *)0x0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
        cVar2 = predelete_handler(pOVar1);
        if (cVar2 != '\0') {
          (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
          Memory::free_static(pOVar1,false);
        }
      }
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      CanvasItem::queue_redraw();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Button::set_language(String const&) */

void __thiscall Button::set_language(Button *this,String *param_1)

{
  Object *pOVar1;
  char cVar2;
  long in_FS_OFFSET;
  undefined8 local_40;
  Object *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  cVar2 = String::operator!=((String *)(this + 0xa60),(String *)param_1);
  if (cVar2 == '\0') {
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    if (*(long *)(this + 0xa60) != *(long *)param_1) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0xa60),(CowData *)param_1);
    }
    local_40 = 0;
    local_30 = 0;
    local_38 = (Object *)&_LC37;
    String::parse_latin1((StrRange *)&local_40);
    local_38 = (Object *)0x0;
    _shape(this,&local_38,(StrRange *)&local_40);
    pOVar1 = local_38;
    if (local_38 != (Object *)0x0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
        cVar2 = predelete_handler(pOVar1);
        if (cVar2 != '\0') {
          (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
          Memory::free_static(pOVar1,false);
        }
      }
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      CanvasItem::queue_redraw();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Button::set_text(String const&) */

void __thiscall Button::set_text(Button *this,String *param_1)

{
  String *this_00;
  long lVar1;
  Object *pOVar2;
  char cVar3;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  Object *local_58;
  undefined8 local_50;
  long local_40;
  
  this_00 = (String *)(this + 0xa48);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  cVar3 = String::operator!=(this_00,(String *)param_1);
  if (cVar3 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    if (*(long *)(this + 0xa48) != *(long *)param_1) {
      CowData<char32_t>::_ref((CowData<char32_t> *)this_00,(CowData *)param_1);
    }
    StringName::StringName((StringName *)&local_68,"",false);
    cVar3 = Node::can_auto_translate();
    if (cVar3 == '\0') {
      local_60 = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)this_00);
    }
    else {
      StringName::StringName((StringName *)&local_58,this_00,false);
      Object::tr((StringName *)&local_60,(StringName *)this);
      if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
        StringName::unref();
      }
    }
    if (*(long *)(this + 0xa50) != local_60) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xa50));
      lVar1 = local_60;
      local_60 = 0;
      *(long *)(this + 0xa50) = lVar1;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if ((StringName::configured != '\0') && (local_68 != 0)) {
      StringName::unref();
    }
    local_58 = (Object *)&_LC37;
    local_60 = 0;
    local_50 = 0;
    String::parse_latin1((StrRange *)&local_60);
    local_58 = (Object *)0x0;
    _shape(this,&local_58,(CowData<char32_t> *)&local_60);
    pOVar2 = local_58;
    if (local_58 != (Object *)0x0) {
      cVar3 = RefCounted::unreference();
      if (cVar3 != '\0') {
        cVar3 = predelete_handler(pOVar2);
        if (cVar3 != '\0') {
          (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
          Memory::free_static(pOVar2,false);
        }
      }
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    CanvasItem::queue_redraw();
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Control::update_minimum_size();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Button::Button(String const&) */

void __thiscall Button::Button(Button *this,String *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  TextParagraph *this_00;
  Object *pOVar4;
  Object *pOVar5;
  
  BaseButton::BaseButton((BaseButton *)this);
  *(undefined1 (*) [16])(this + 0xa48) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa58) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xaa0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xab0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xac0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xad0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xae0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xb00) = (undefined1  [16])0x0;
  uVar2 = _UNK_0011ac78;
  uVar1 = __LC64;
  *(undefined ***)this = &PTR__initialize_classv_0011a1f0;
  *(undefined1 (*) [16])(this + 0xa90) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0xb14) = uVar1;
  *(undefined8 *)(this + 0xb1c) = uVar2;
  *(undefined8 *)(this + 0xb24) = uVar1;
  *(undefined8 *)(this + 0xb2c) = uVar2;
  *(undefined8 *)(this + 0xb34) = uVar1;
  *(undefined8 *)(this + 0xb3c) = uVar2;
  *(undefined8 *)(this + 0xb44) = uVar1;
  *(undefined8 *)(this + 0xb4c) = uVar2;
  *(undefined8 *)(this + 0xb54) = uVar1;
  *(undefined8 *)(this + 0xb5c) = uVar2;
  *(undefined8 *)(this + 0xb64) = uVar1;
  *(undefined8 *)(this + 0xb6c) = uVar2;
  *(undefined8 *)(this + 0xb88) = uVar1;
  *(undefined8 *)(this + 0xb90) = uVar2;
  *(undefined8 *)(this + 0xb98) = uVar1;
  *(undefined8 *)(this + 0xba0) = uVar2;
  *(undefined8 *)(this + 0xba8) = uVar1;
  *(undefined8 *)(this + 0xbb0) = uVar2;
  *(undefined2 *)(this + 0xa80) = 0;
  this[0xa40] = (Button)0x0;
  *(undefined8 *)(this + 0xa68) = 0;
  *(undefined4 *)(this + 0xa70) = 0;
  *(undefined8 *)(this + 0xa78) = 0;
  *(undefined8 *)(this + 0xa84) = 1;
  *(undefined4 *)(this + 0xa8c) = 1;
  *(undefined8 *)(this + 0xaf0) = 0;
  *(undefined8 *)(this + 0xaf8) = 0;
  this[0xb10] = (Button)0x0;
  *(undefined8 *)(this + 0xb78) = 0;
  *(undefined8 *)(this + 0xb80) = 0;
  *(undefined8 *)(this + 3000) = uVar1;
  *(undefined8 *)(this + 0xbc0) = uVar2;
  *(undefined8 *)(this + 0xbf8) = 0;
  *(undefined8 *)(this + 0xc00) = 0;
  *(undefined4 *)(this + 0xc08) = 0;
  *(undefined8 *)(this + 0xbc8) = uVar1;
  *(undefined8 *)(this + 0xbd0) = uVar2;
  *(undefined8 *)(this + 0xbd8) = uVar1;
  *(undefined8 *)(this + 0xbe0) = uVar2;
  *(undefined8 *)(this + 0xbe8) = uVar1;
  *(undefined8 *)(this + 0xbf0) = uVar2;
  this_00 = (TextParagraph *)operator_new(0x220,"");
  TextParagraph::TextParagraph(this_00);
  postinitialize_handler((Object *)this_00);
  cVar3 = RefCounted::init_ref();
  if (cVar3 == '\0') {
    pOVar4 = *(Object **)(this + 0xa58);
    if (pOVar4 == (Object *)0x0) goto LAB_001041c4;
    *(undefined8 *)(this + 0xa58) = 0;
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      this_00 = (TextParagraph *)0x0;
      cVar3 = predelete_handler(pOVar4);
      if (cVar3 != '\0') {
LAB_001042a3:
        (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        Memory::free_static(pOVar4,false);
        pOVar5 = (Object *)this_00;
        if (this_00 != (TextParagraph *)0x0) goto LAB_00104232;
      }
    }
  }
  else {
    pOVar4 = *(Object **)(this + 0xa58);
    pOVar5 = pOVar4;
    if (this_00 != (TextParagraph *)pOVar4) {
      *(TextParagraph **)(this + 0xa58) = this_00;
      cVar3 = RefCounted::reference();
      pOVar5 = (Object *)this_00;
      if (cVar3 == '\0') {
        *(undefined8 *)(this + 0xa58) = 0;
        if (pOVar4 != (Object *)0x0) {
          cVar3 = RefCounted::unreference();
joined_r0x00104287:
          if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar4), cVar3 != '\0'))
          goto LAB_001042a3;
        }
      }
      else if (pOVar4 != (Object *)0x0) {
        cVar3 = RefCounted::unreference();
        goto joined_r0x00104287;
      }
    }
LAB_00104232:
    cVar3 = RefCounted::unreference();
    if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar5), cVar3 != '\0')) {
      (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
      Memory::free_static(pOVar5,false);
      pOVar4 = *(Object **)(this + 0xa58);
      goto LAB_001041c4;
    }
  }
  pOVar4 = *(Object **)(this + 0xa58);
LAB_001041c4:
  TextParagraph::set_break_flags(pOVar4,0x11);
  Control::set_mouse_filter(this,0);
  set_text(this,param_1);
  return;
}



/* Button::get_minimum_size_for_text_and_icon(String const&, Ref<Texture2D>) const */

undefined8 __thiscall
Button::get_minimum_size_for_text_and_icon(Button *this,long *param_1,long *param_3)

{
  long *plVar1;
  code *pcVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  Object *pOVar7;
  Object *pOVar8;
  long in_FS_OFFSET;
  bool bVar9;
  float extraout_XMM0_Da;
  float fVar10;
  undefined8 uVar11;
  float extraout_XMM0_Db;
  float fVar12;
  float fVar13;
  float fVar14;
  Object *local_60;
  Object *local_58;
  long local_50;
  Object *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = (Object *)0x0;
  if ((*param_1 == 0) || (*(uint *)(*param_1 + -8) < 2)) {
    pOVar7 = *(Object **)(this + 0xa58);
    if ((pOVar7 == (Object *)0x0) ||
       (local_60 = pOVar7, cVar3 = RefCounted::reference(), cVar3 == '\0')) {
      local_60 = (Object *)0x0;
      pOVar7 = (Object *)0x0;
    }
  }
  else {
    Ref<TextParagraph>::instantiate<>((Ref<TextParagraph> *)&local_60);
    pOVar7 = local_60;
    local_50 = 0;
    plVar1 = (long *)(*param_1 + -0x10);
    if (*param_1 != 0) {
      do {
        lVar4 = *plVar1;
        if (lVar4 == 0) goto LAB_00104722;
        LOCK();
        lVar5 = *plVar1;
        bVar9 = lVar4 == lVar5;
        if (bVar9) {
          *plVar1 = lVar4 + 1;
          lVar5 = lVar4;
        }
        UNLOCK();
      } while (!bVar9);
      if (lVar5 != -1) {
        local_50 = *param_1;
      }
    }
LAB_00104722:
    local_58 = (Object *)0x0;
    if (local_60 != (Object *)0x0) {
      local_58 = local_60;
      local_48 = (Object *)0x0;
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        local_58 = (Object *)0x0;
      }
      Ref<TextParagraph>::unref((Ref<TextParagraph> *)&local_48);
    }
    _shape(this,&local_58,(CowData<char32_t> *)&local_50);
    pOVar8 = local_58;
    if (((local_58 != (Object *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) &&
       (cVar3 = predelete_handler(pOVar8), cVar3 != '\0')) {
      (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
      Memory::free_static(pOVar8,false);
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  }
  uVar11 = TextParagraph::get_size();
  fVar13 = (float)uVar11;
  fVar12 = (float)((ulong)uVar11 >> 0x20);
  if (((this[0xa81] != (Button)0x0) || (*(int *)(this + 0xa70) != 0)) ||
     (*(int *)(this + 0xa6c) != 0)) {
    fVar13 = 0.0;
  }
  if ((this[0xa80] == (Button)0x0) && ((long *)*param_3 != (long *)0x0)) {
    (**(code **)(*(long *)*param_3 + 0x1d8))();
    if ((*(int *)(this + 0xc04) < 1) ||
       (fVar14 = (float)*(int *)(this + 0xc04), extraout_XMM0_Da <= fVar14)) {
      fVar10 = extraout_XMM0_Db;
      fVar14 = extraout_XMM0_Da;
      if (*(int *)(this + 0xa8c) != 1) goto LAB_00104401;
LAB_001046b8:
      iVar6 = *(int *)(this + 0xa88);
      if (fVar12 <= fVar10) {
        fVar12 = fVar10;
      }
      lVar4 = *(long *)(this + 0xa50);
    }
    else {
      fVar10 = (extraout_XMM0_Db * fVar14) / extraout_XMM0_Da;
      if (*(int *)(this + 0xa8c) == 1) goto LAB_001046b8;
LAB_00104401:
      iVar6 = *(int *)(this + 0xa88);
      fVar12 = fVar12 + fVar10;
      lVar4 = *(long *)(this + 0xa50);
    }
    if (iVar6 == 1) {
      if (fVar13 <= fVar14) {
        fVar13 = fVar14;
      }
      goto LAB_00104467;
    }
    fVar13 = fVar13 + fVar14;
    if (lVar4 != 0) {
      if (*(uint *)(lVar4 + -8) < 2) {
        lVar5 = *param_1;
        if (lVar5 == 0) goto LAB_00104485;
        if (*(uint *)(lVar5 + -8) < 2) goto LAB_0010447a;
        iVar6 = *(int *)(this + 0xc00);
        if (iVar6 < 0) {
          iVar6 = 0;
        }
        fVar13 = fVar13 + (float)iVar6;
        goto LAB_0010446c;
      }
      iVar6 = *(int *)(this + 0xc00);
      if (*(int *)(this + 0xc00) < 0) {
        iVar6 = 0;
      }
      fVar13 = fVar13 + (float)iVar6;
      goto LAB_00104500;
    }
    lVar5 = *param_1;
    if ((lVar5 == 0) || (*(uint *)(lVar5 + -8) < 2)) goto LAB_00104485;
    iVar6 = *(int *)(this + 0xc00);
    if (iVar6 < 0) {
      iVar6 = 0;
    }
    fVar13 = fVar13 + (float)iVar6;
LAB_0010447a:
    if ((lVar5 == 0) || (*(uint *)(lVar5 + -8) < 2)) goto LAB_00104485;
  }
  else {
    lVar4 = *(long *)(this + 0xa50);
LAB_00104467:
    if (lVar4 == 0) {
LAB_00104476:
      lVar5 = *param_1;
      goto LAB_0010447a;
    }
LAB_0010446c:
    if (*(uint *)(lVar4 + -8) < 2) goto LAB_00104476;
  }
LAB_00104500:
  pOVar8 = *(Object **)(this + 0xb78);
  if (pOVar8 == (Object *)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  cVar3 = RefCounted::reference();
  if (cVar3 == '\0') {
    pOVar8 = (Object *)0x0;
  }
  fVar14 = (float)(**(code **)(*(long *)pOVar8 + 0x218))(pOVar8);
  if (*(int *)(this + 0xa8c) == 1) {
    if (fVar14 <= fVar12) {
      fVar14 = fVar12;
    }
  }
  else {
    fVar14 = fVar12 + fVar14;
  }
  cVar3 = RefCounted::unreference();
  fVar12 = fVar14;
  if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar8), cVar3 != '\0')) {
    (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
    Memory::free_static(pOVar8,false);
  }
LAB_00104485:
  if (this[0xb10] == (Button)0x0) {
    _get_current_stylebox();
    pOVar8 = local_48;
    uVar11 = (**(code **)(*(long *)local_48 + 0x1d0))(local_48);
    uVar11 = CONCAT44(fVar12 + (float)((ulong)uVar11 >> 0x20),fVar13 + (float)uVar11);
    cVar3 = RefCounted::unreference();
    if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar8), cVar3 != '\0')) {
      (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
      Memory::free_static(pOVar8,false);
    }
  }
  else {
    uVar11 = CONCAT44(fVar12 + (float)((ulong)*(undefined8 *)(this + 0xaf8) >> 0x20),
                      fVar13 + (float)*(undefined8 *)(this + 0xaf8));
  }
  cVar3 = RefCounted::unreference();
  if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar7), cVar3 != '\0')) {
    (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
    Memory::free_static(pOVar7,false);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar11;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Button::get_minimum_size() const */

undefined8 __thiscall Button::get_minimum_size(Button *this)

{
  char cVar1;
  int iVar2;
  Object *pOVar3;
  long in_FS_OFFSET;
  undefined8 local_60;
  undefined8 local_58;
  Object *local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  pOVar3 = *(Object **)(this + 0xa78);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((pOVar3 == (Object *)0x0) || (cVar1 = RefCounted::reference(), cVar1 == '\0')) {
    local_48 = (undefined *)0x0;
    if ((const::{lambda()#1}::operator()()::sname == '\0') &&
       (iVar2 = __cxa_guard_acquire(&const::{lambda()#1}::operator()()::sname), iVar2 != 0)) {
      _scs_create((char *)&const::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&const::{lambda()#1}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&const::{lambda()#1}::operator()()::sname);
    }
    cVar1 = Control::has_theme_icon
                      ((StringName *)this,(StringName *)&const::{lambda()#1}::operator()()::sname);
    if (cVar1 == '\0') {
      if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
        StringName::unref();
      }
    }
    else {
      if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
        StringName::unref();
      }
      pOVar3 = *(Object **)(this + 0xbf8);
      if ((pOVar3 != (Object *)0x0) && (cVar1 = RefCounted::reference(), cVar1 != '\0'))
      goto LAB_00104856;
    }
    pOVar3 = (Object *)0x0;
LAB_00104874:
    local_50 = (Object *)0x0;
    local_58 = 0;
    local_48 = &_LC37;
    local_40 = 0;
    String::parse_latin1((StrRange *)&local_58);
    local_60 = get_minimum_size_for_text_and_icon(this,(StrRange *)&local_58,&local_50);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    if (pOVar3 == (Object *)0x0) goto LAB_001048c9;
LAB_001049cc:
    cVar1 = RefCounted::unreference();
  }
  else {
LAB_00104856:
    local_50 = pOVar3;
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') goto LAB_00104874;
    local_58 = 0;
    local_48 = &_LC37;
    local_40 = 0;
    String::parse_latin1((StrRange *)&local_58);
    local_60 = get_minimum_size_for_text_and_icon(this,(StrRange *)&local_58,&local_50);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    cVar1 = RefCounted::unreference();
    if ((cVar1 == '\0') || (cVar1 = predelete_handler(pOVar3), cVar1 == '\0')) goto LAB_001049cc;
    (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
    Memory::free_static(pOVar3,false);
    cVar1 = RefCounted::unreference();
  }
  if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar3), cVar1 != '\0')) {
    (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
    Memory::free_static(pOVar3,false);
  }
LAB_001048c9:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_60;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Button::_notification(int) */

void __thiscall Button::_notification(Button *this,int param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  float fVar5;
  Object *pOVar6;
  char cVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  Object *pOVar12;
  uint uVar13;
  long in_FS_OFFSET;
  Button BVar14;
  float fVar15;
  float fVar16;
  float extraout_XMM0_Da;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  float extraout_XMM0_Db;
  undefined8 uVar20;
  float extraout_XMM0_Db_00;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float local_dc;
  uint local_d8;
  float local_d4;
  float local_b8;
  float local_b4;
  long *local_a8;
  Object *local_a0;
  long local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0x2d) {
LAB_00104cb0:
    local_98 = 0;
    String::parse_latin1((String *)&local_98,"");
    local_a0 = (Object *)0x0;
    _shape(this,(Ref<TextParagraph> *)&local_a0,(String *)&local_98);
    Ref<TextParagraph>::unref((Ref<TextParagraph> *)&local_a0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    Control::update_minimum_size();
    goto LAB_00104c33;
  }
  if (param_1 < 0x2e) {
    if (param_1 != 0x1e) {
      if ((param_1 != 0x28) || (*(int *)(this + 0xa6c) == 0)) goto LAB_00104c80;
      goto LAB_00104cb0;
    }
    if (*(long *)(this + 0xa58) != 0) {
      pOVar12 = *(Object **)(TextServerManager::singleton + 0x178);
      if (pOVar12 == (Object *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      cVar7 = RefCounted::reference();
      if (cVar7 == '\0') {
        pOVar12 = (Object *)0x0;
      }
      pcVar2 = *(code **)(*(long *)pOVar12 + 0x698);
      local_98 = TextParagraph::get_rid();
      cVar7 = (*pcVar2)(pOVar12);
      if (cVar7 == '\0') {
        cVar7 = RefCounted::unreference();
        if ((cVar7 != '\0') && (cVar7 = predelete_handler(pOVar12), cVar7 != '\0')) {
          (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
          Memory::free_static(pOVar12,false);
        }
        local_98 = 0;
        String::parse_latin1((String *)&local_98,"");
        local_a0 = (Object *)0x0;
        _shape(this,(Ref<TextParagraph> *)&local_a0,(String *)&local_98);
        Ref<TextParagraph>::unref((Ref<TextParagraph> *)&local_a0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
        Control::update_minimum_size();
      }
      else {
        cVar7 = RefCounted::unreference();
        if ((cVar7 != '\0') && (cVar7 = predelete_handler(pOVar12), cVar7 != '\0')) {
          (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
          Memory::free_static(pOVar12,false);
        }
      }
    }
    uVar3 = *(undefined8 *)(this + 0x428);
    uVar19 = Control::get_size();
    _get_current_stylebox();
    if (this[0xa40] == (Button)0x0) {
      local_58 = 0;
      uStack_50 = uVar19;
      (**(code **)(*local_a8 + 0x1d8))(local_a8,uVar3,&local_58);
    }
    cVar7 = Control::has_focus();
    if (cVar7 != '\0') {
      local_58 = 0;
      uStack_50 = uVar19;
      (**(code **)(**(long **)(this + 0xaf0) + 0x1d8))(*(long **)(this + 0xaf0),uVar3,&local_58);
    }
    local_a0 = (Object *)0x0;
    if (*(Object **)(this + 0xa78) == (Object *)0x0) {
LAB_00104e89:
      local_98 = 0;
      if ((_notification(int)::{lambda()#1}::operator()()::sname == '\0') &&
         (iVar9 = __cxa_guard_acquire(&_notification(int)::{lambda()#1}::operator()()::sname),
         iVar9 != 0)) {
        _scs_create((char *)&_notification(int)::{lambda()#1}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#1}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#1}::operator()()::sname);
      }
      cVar7 = Control::has_theme_icon
                        ((StringName *)this,
                         (StringName *)&_notification(int)::{lambda()#1}::operator()()::sname);
      if (cVar7 == '\0') {
        if ((StringName::configured != '\0') && (local_98 != 0)) {
          StringName::unref();
        }
      }
      else {
        if ((StringName::configured != '\0') && (local_98 != 0)) {
          StringName::unref();
        }
        pOVar6 = local_a0;
        pOVar12 = *(Object **)(this + 0xbf8);
        if (pOVar12 != local_a0) {
          local_a0 = pOVar12;
          if ((pOVar12 != (Object *)0x0) && (cVar7 = RefCounted::reference(), cVar7 == '\0')) {
            local_a0 = (Object *)0x0;
          }
          if (((pOVar6 != (Object *)0x0) && (cVar7 = RefCounted::unreference(), cVar7 != '\0')) &&
             (cVar7 = predelete_handler(pOVar6), cVar7 != '\0')) {
            (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
            Memory::free_static(pOVar6,false);
          }
        }
      }
      lVar11 = *(long *)(this + 0xa50);
      if (lVar11 != 0) {
LAB_00104f04:
        if (1 < *(uint *)(lVar11 + -8)) goto LAB_00104f16;
      }
      if (local_a0 != (Object *)0x0) goto LAB_00104f16;
    }
    else {
      local_a0 = *(Object **)(this + 0xa78);
      cVar7 = RefCounted::reference();
      if (cVar7 == '\0') {
        local_a0 = (Object *)0x0;
        goto LAB_00104e89;
      }
      if (local_a0 == (Object *)0x0) goto LAB_00104e89;
      lVar11 = *(long *)(this + 0xa50);
      if (lVar11 != 0) goto LAB_00104f04;
LAB_00104f16:
      if (this[0xb10] == (Button)0x0) {
        local_d4 = (float)StyleBox::get_margin(local_a8,0);
        if (this[0xb10] != (Button)0x0) goto LAB_00104f31;
        local_b4 = (float)StyleBox::get_margin(local_a8,2);
        if (this[0xb10] != (Button)0x0) goto LAB_00104f3f;
        local_dc = (float)StyleBox::get_margin(local_a8,1);
        if (this[0xb10] != (Button)0x0) goto LAB_00104f4d;
        local_b8 = (float)StyleBox::get_margin(local_a8,3);
      }
      else {
        local_d4 = *(float *)(this + 0xb00);
LAB_00104f31:
        local_b4 = *(float *)(this + 0xb04);
LAB_00104f3f:
        local_dc = *(float *)(this + 0xb08);
LAB_00104f4d:
        local_b8 = *(float *)(this + 0xb0c);
      }
      iVar9 = *(int *)(this + 0xc00);
      fVar18 = (float)((ulong)uVar19 >> 0x20);
      fVar15 = *(float *)(this + 0xa90);
      fVar16 = *(float *)(this + 0xa98);
      if (iVar9 < 0) {
        iVar9 = 0;
      }
      fVar25 = fVar18 - (local_b8 + local_dc);
      if (0.0 < fVar15) {
        fVar15 = (float)iVar9 + fVar15;
      }
      if (0.0 < fVar16) {
        fVar16 = (float)iVar9 + fVar16;
      }
      uVar1 = *(uint *)(this + 0xa84);
      uVar13 = *(uint *)(this + 0xa88);
      fVar21 = ((float)uVar19 - (local_d4 + local_b4)) - (fVar15 + fVar16);
      cVar7 = (**(code **)(*(long *)this + 0x340))(this);
      local_d8 = uVar1;
      if (cVar7 != '\0') {
        if (*(int *)(this + 0xa88) == 2) {
          uVar13 = 0;
        }
        else if (*(int *)(this + 0xa88) == 0) {
          uVar13 = 2;
        }
        if (*(int *)(this + 0xa84) == 2) {
          local_d8 = 0;
        }
        else {
          local_d8 = 2;
          if (*(int *)(this + 0xa84) != 0) {
            local_d8 = uVar1;
          }
        }
      }
      uStack_80 = CONCAT44(_LC77,_UNK_0011ac78);
      local_88 = __LC64;
      local_78 = __LC79;
      uStack_70 = _UNK_0011ac88;
      uVar8 = BaseButton::get_draw_mode();
      switch(uVar8) {
      case 0:
        cVar7 = Control::has_focus();
        if (cVar7 == '\0') {
          local_88 = *(undefined8 *)(this + 0xb14);
          uStack_80 = *(undefined8 *)(this + 0xb1c);
          local_98 = 0;
          if ((_notification(int)::{lambda()#3}::operator()()::sname == '\0') &&
             (iVar10 = __cxa_guard_acquire(&_notification(int)::{lambda()#3}::operator()()::sname),
             iVar10 != 0)) {
            _scs_create((char *)&_notification(int)::{lambda()#3}::operator()()::sname,true);
            __cxa_atexit(StringName::~StringName,
                         &_notification(int)::{lambda()#3}::operator()()::sname,&__dso_handle);
            __cxa_guard_release(&_notification(int)::{lambda()#3}::operator()()::sname);
          }
          cVar7 = Control::has_theme_color
                            ((StringName *)this,
                             (StringName *)&_notification(int)::{lambda()#3}::operator()()::sname);
          if ((StringName::configured != '\0') && (local_98 != 0)) {
            StringName::unref();
          }
          if (cVar7 != '\0') {
            local_78 = *(undefined8 *)(this + 0xb98);
            uStack_70 = *(undefined8 *)(this + 0xba0);
          }
        }
        else {
          local_88 = *(undefined8 *)(this + 0xb24);
          uStack_80 = *(undefined8 *)(this + 0xb2c);
          local_98 = 0;
          if ((_notification(int)::{lambda()#2}::operator()()::sname == '\0') &&
             (iVar10 = __cxa_guard_acquire(&_notification(int)::{lambda()#2}::operator()()::sname),
             iVar10 != 0)) {
            _scs_create((char *)&_notification(int)::{lambda()#2}::operator()()::sname,true);
            __cxa_atexit(StringName::~StringName,
                         &_notification(int)::{lambda()#2}::operator()()::sname,&__dso_handle);
            __cxa_guard_release(&_notification(int)::{lambda()#2}::operator()()::sname);
          }
          cVar7 = Control::has_theme_color
                            ((StringName *)this,
                             (StringName *)&_notification(int)::{lambda()#2}::operator()()::sname);
          if ((StringName::configured != '\0') && (local_98 != 0)) {
            StringName::unref();
          }
          if (cVar7 != '\0') {
            local_78 = *(undefined8 *)(this + 0xba8);
            uStack_70 = *(undefined8 *)(this + 0xbb0);
          }
        }
        break;
      case 1:
        local_98 = 0;
        if ((_notification(int)::{lambda()#5}::operator()()::sname == '\0') &&
           (iVar10 = __cxa_guard_acquire(&_notification(int)::{lambda()#5}::operator()()::sname),
           iVar10 != 0)) {
          _scs_create((char *)&_notification(int)::{lambda()#5}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_notification(int)::{lambda()#5}::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&_notification(int)::{lambda()#5}::operator()()::sname);
        }
        cVar7 = Control::has_theme_color
                          ((StringName *)this,
                           (StringName *)&_notification(int)::{lambda()#5}::operator()()::sname);
        if ((StringName::configured != '\0') && (local_98 != 0)) {
          StringName::unref();
        }
        if (cVar7 == '\0') {
          local_88 = *(undefined8 *)(this + 0xb14);
          uStack_80 = *(undefined8 *)(this + 0xb1c);
        }
        else {
          local_88 = *(undefined8 *)(this + 0xb34);
          uStack_80 = *(undefined8 *)(this + 0xb3c);
        }
        local_98 = 0;
        if ((_notification(int)::{lambda()#6}::operator()()::sname == '\0') &&
           (iVar10 = __cxa_guard_acquire(&_notification(int)::{lambda()#6}::operator()()::sname),
           iVar10 != 0)) {
          _scs_create((char *)&_notification(int)::{lambda()#6}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_notification(int)::{lambda()#6}::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&_notification(int)::{lambda()#6}::operator()()::sname);
        }
        cVar7 = Control::has_theme_color
                          ((StringName *)this,
                           (StringName *)&_notification(int)::{lambda()#6}::operator()()::sname);
        if ((StringName::configured != '\0') && (local_98 != 0)) {
          StringName::unref();
        }
        if (cVar7 != '\0') {
          local_78 = *(undefined8 *)(this + 3000);
          uStack_70 = *(undefined8 *)(this + 0xbc0);
        }
        break;
      case 2:
        local_88 = *(undefined8 *)(this + 0xb44);
        uStack_80 = *(undefined8 *)(this + 0xb4c);
        local_98 = 0;
        if ((_notification(int)::{lambda()#7}::operator()()::sname == '\0') &&
           (iVar10 = __cxa_guard_acquire(&_notification(int)::{lambda()#7}::operator()()::sname),
           iVar10 != 0)) {
          _scs_create((char *)&_notification(int)::{lambda()#7}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_notification(int)::{lambda()#7}::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&_notification(int)::{lambda()#7}::operator()()::sname);
        }
        cVar7 = Control::has_theme_color
                          ((StringName *)this,
                           (StringName *)&_notification(int)::{lambda()#7}::operator()()::sname);
        if ((StringName::configured != '\0') && (local_98 != 0)) {
          StringName::unref();
        }
        if (cVar7 != '\0') {
          local_78 = *(undefined8 *)(this + 0xbc8);
          uStack_70 = *(undefined8 *)(this + 0xbd0);
        }
        break;
      case 3:
        local_88 = *(undefined8 *)(this + 0xb64);
        uStack_80 = *(undefined8 *)(this + 0xb6c);
        local_98 = 0;
        if ((_notification(int)::{lambda()#8}::operator()()::sname == '\0') &&
           (iVar10 = __cxa_guard_acquire(&_notification(int)::{lambda()#8}::operator()()::sname),
           iVar10 != 0)) {
          _scs_create((char *)&_notification(int)::{lambda()#8}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_notification(int)::{lambda()#8}::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&_notification(int)::{lambda()#8}::operator()()::sname);
        }
        cVar7 = Control::has_theme_color
                          ((StringName *)this,
                           (StringName *)&_notification(int)::{lambda()#8}::operator()()::sname);
        if ((StringName::configured != '\0') && (local_98 != 0)) {
          StringName::unref();
        }
        if (cVar7 == '\0') {
          uStack_70 = CONCAT44(0x3ecccccd,(undefined4)uStack_70);
        }
        else {
          local_78 = *(undefined8 *)(this + 0xbe8);
          uStack_70 = *(undefined8 *)(this + 0xbf0);
        }
        break;
      case 4:
        local_88 = *(undefined8 *)(this + 0xb54);
        uStack_80 = *(undefined8 *)(this + 0xb5c);
        local_98 = 0;
        if ((_notification(int)::{lambda()#4}::operator()()::sname == '\0') &&
           (iVar10 = __cxa_guard_acquire(&_notification(int)::{lambda()#4}::operator()()::sname),
           iVar10 != 0)) {
          _scs_create((char *)&_notification(int)::{lambda()#4}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_notification(int)::{lambda()#4}::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&_notification(int)::{lambda()#4}::operator()()::sname);
        }
        cVar7 = Control::has_theme_color
                          ((StringName *)this,
                           (StringName *)&_notification(int)::{lambda()#4}::operator()()::sname);
        if ((StringName::configured != '\0') && (local_98 != 0)) {
          StringName::unref();
        }
        if (cVar7 != '\0') {
          local_78 = *(undefined8 *)(this + 0xbd8);
          uStack_70 = *(undefined8 *)(this + 0xbe0);
        }
      }
      BVar14 = this[0xa81];
      if ((BVar14 == (Button)0x0) && (BVar14 = (Button)0x1, *(int *)(this + 0xa70) == 0)) {
        BVar14 = (Button)(*(int *)(this + 0xa6c) != 0);
      }
      fVar23 = fVar21;
      fVar5 = fVar25;
      if (local_a0 == (Object *)0x0) {
        lVar11 = *(long *)(this + 0xa50);
        if (lVar11 != 0) goto LAB_00105390;
      }
      else {
        local_90 = 0;
        (**(code **)(*(long *)local_a0 + 0x1d8))();
        fVar17 = extraout_XMM0_Da;
        fVar24 = extraout_XMM0_Db;
        if (this[0xa80] != (Button)0x0) {
          local_90._0_4_ = extraout_XMM0_Da;
          local_90._4_4_ = extraout_XMM0_Db;
          uVar20 = TextParagraph::get_size();
          fVar22 = fVar21;
          if (((BVar14 != (Button)0x1) && (uVar13 != 1)) && (0.0 < (float)uVar20)) {
            fVar22 = fVar21 - ((float)uVar20 + (float)iVar9);
          }
          fVar24 = fVar25;
          if (*(int *)(this + 0xa8c) != 1) {
            fVar24 = fVar25 - (float)((ulong)uVar20 >> 0x20);
          }
          fVar17 = ((float)local_90 * fVar24) / local_90._4_4_;
          if (fVar22 < fVar17) {
            fVar24 = (local_90._4_4_ * fVar22) / (float)local_90;
            fVar17 = fVar22;
          }
        }
        local_90._0_4_ = fVar17;
        if ((0 < *(int *)(this + 0xc04)) &&
           (fVar22 = (float)*(int *)(this + 0xc04), fVar22 < fVar17)) {
          fVar24 = (fVar24 * fVar22) / fVar17;
          local_90._0_4_ = fVar22;
        }
        local_90._4_4_ = fVar24;
        uVar20 = Vector2::round();
        local_90._0_4_ = (float)uVar20;
        fVar24 = 0.0;
        if (0.0 < (float)local_90) {
          local_68 = 0;
          if (uVar13 == 2) {
            local_68 = (ulong)(uint)((((float)uVar19 - local_b4) - fVar16) - (float)local_90);
          }
          else {
            if (uVar13 < 3) {
              if (uVar13 != 0) {
                fVar24 = (fVar21 - (float)local_90) * _LC88;
              }
            }
            else {
              if (uVar13 != 3) goto LAB_00105290;
              fVar24 = 0.0;
            }
            local_68 = (ulong)(uint)(fVar24 + local_d4 + fVar15);
          }
LAB_00105290:
          uVar1 = *(uint *)(this + 0xa8c);
          local_90._4_4_ = (float)((ulong)uVar20 >> 0x20);
          if (uVar1 == 2) {
            local_68 = CONCAT44((fVar18 - local_b8) - local_90._4_4_,(undefined4)local_68);
          }
          else {
            if (uVar1 < 3) {
              fVar16 = 0.0;
              if (uVar1 != 0) {
                fVar16 = (fVar25 - local_90._4_4_) * _LC88;
              }
            }
            else {
              if (uVar1 != 3) goto LAB_001052d4;
              fVar16 = 0.0;
            }
            local_68 = CONCAT44(fVar16 + local_dc,(undefined4)local_68);
          }
LAB_001052d4:
          local_90 = uVar20;
          local_68 = Vector2::floor();
          uStack_50 = local_90;
          local_58 = local_68;
          CanvasItem::draw_texture_rect
                    ((Ref *)this,(Rect2 *)&local_a0,SUB81(&local_58,0),(Color *)0x0,
                     SUB81(&local_78,0));
          uVar20 = local_90;
        }
        local_90 = uVar20;
        lVar11 = *(long *)(this + 0xa50);
        if ((lVar11 != 0) && (1 < *(uint *)(lVar11 + -8))) {
          if (uVar13 != 1) {
            fVar23 = fVar21 - ((float)iVar9 + (float)local_90);
          }
          if (*(int *)(this + 0xa8c) != 1) {
            fVar5 = fVar25 - local_90._4_4_;
          }
LAB_00105390:
          if (1 < *(uint *)(lVar11 + -8)) {
            TextParagraph::set_alignment(*(undefined8 *)(this + 0xa58),local_d8);
            fVar16 = _LC77;
            if ((_LC77 <= fVar23) && (fVar16 = fVar23, (float)((uint)fVar23 & _LC91) < _LC89)) {
              fVar16 = (float)((uint)((float)(-(uint)((float)(int)fVar23 < fVar23) & (uint)_LC77) +
                                     (float)(int)fVar23) | ~_LC91 & (uint)fVar23);
            }
            if ((*(int *)(this + 0xa6c) != 0) &&
               (fVar18 = (float)TextParagraph::get_width(), fVar18 != fVar16)) {
              fVar24 = _LC78;
              if (_LC78 <= ABS(fVar16) * _LC78) {
                fVar24 = ABS(fVar16) * _LC78;
              }
              if (fVar24 <= ABS(fVar16 - fVar18)) {
                Control::update_minimum_size();
              }
            }
            TextParagraph::set_width(fVar16);
            fVar18 = _LC88;
            local_90 = 0;
            if (local_d8 == 1) {
              fVar16 = (fVar23 - fVar16) * _LC88;
LAB_0010542b:
              fVar15 = fVar15 + fVar16 + local_d4;
              if (uVar13 == 0) {
                local_90 = (ulong)(uint)((fVar21 - fVar23) + fVar15);
              }
              else {
                local_90 = (ulong)(uint)fVar15;
              }
            }
            else {
              if (local_d8 < 2) {
                fVar16 = 0.0;
                goto LAB_0010542b;
              }
              fVar16 = 0.0;
              if (local_d8 - 2 < 2) goto LAB_0010542b;
            }
            TextParagraph::get_size();
            local_dc = (fVar5 - extraout_XMM0_Db_00) * fVar18 + local_dc;
            if (*(int *)(this + 0xa8c) == 0) {
              local_dc = (fVar25 - fVar5) + local_dc;
            }
            local_90 = CONCAT44(local_dc,(float)local_90);
            local_68 = *(ulong *)(this + 0xb88);
            uStack_60 = *(undefined8 *)(this + 0xb90);
            if ((0 < *(int *)(this + 0xb84)) &&
               (uStack_60._4_4_ = (float)((ulong)uStack_60 >> 0x20), bVar4 = 0.0 < uStack_60._4_4_,
               bVar4)) {
              local_58 = __LC79;
              uStack_50 = _UNK_0011ac88;
              TextParagraph::draw_outline
                        (*(undefined8 *)(this + 0xa58),uVar3,&local_90,*(int *)(this + 0xb84),
                         &local_68,&local_58);
            }
            local_58 = __LC79;
            uStack_50 = _UNK_0011ac88;
            TextParagraph::draw(*(undefined8 *)(this + 0xa58),uVar3,&local_90,&local_88,&local_58);
          }
        }
      }
    }
    Ref<Texture2D>::unref((Ref<Texture2D> *)&local_a0);
    Ref<StyleBox>::unref((Ref<StyleBox> *)&local_a8);
LAB_00104c80:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    if (param_1 != 0x31) {
      if (param_1 != 0x7da) goto LAB_00104c80;
      StringName::StringName((StringName *)&local_a8,"",false);
      cVar7 = Node::can_auto_translate();
      if (cVar7 == '\0') {
        local_a0 = (Object *)0x0;
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,(CowData *)(this + 0xa48));
      }
      else {
        StringName::StringName((StringName *)&local_98,(CowData *)(this + 0xa48),false);
        Object::tr((StringName *)&local_a0,(StringName *)this);
        if ((StringName::configured != '\0') && (local_98 != 0)) {
          StringName::unref();
        }
      }
      if (*(Object **)(this + 0xa50) != local_a0) {
        CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xa50));
        pOVar12 = local_a0;
        local_a0 = (Object *)0x0;
        *(Object **)(this + 0xa50) = pOVar12;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
      if ((StringName::configured != '\0') && (local_a8 != (long *)0x0)) {
        StringName::unref();
      }
      local_98 = 0;
      String::parse_latin1((String *)&local_98,"");
      local_a0 = (Object *)0x0;
      _shape(this,(CowData<char32_t> *)&local_a0,(String *)&local_98);
      Ref<TextParagraph>::unref((Ref<TextParagraph> *)&local_a0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      Control::update_minimum_size();
    }
LAB_00104c33:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      CanvasItem::queue_redraw();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Button::_bind_methods() */

void Button::_bind_methods(void)

{
  MethodBind *pMVar1;
  undefined8 uVar2;
  uint uVar3;
  long in_FS_OFFSET;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  long local_a8 [6];
  char *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  code *pcStack_58;
  code *pcStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = 0;
  local_78 = "text";
  uVar3 = (uint)(_Function_base *)&local_68;
  local_68 = &local_78;
  D_METHODP((char *)local_a8,(char ***)"set_text",uVar3);
  uStack_60 = 0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar1 = create_method_bind<Button,String_const&>(set_text);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)local_a8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)local_a8);
  D_METHODP((char *)local_a8,(char ***)"get_text",0);
  uStack_60 = 0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar1 = create_method_bind<Button,String>(get_text);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)local_a8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)local_a8);
  local_70 = 0;
  local_78 = "overrun_behavior";
  local_68 = &local_78;
  D_METHODP((char *)local_a8,(char ***)"set_text_overrun_behavior",uVar3);
  uStack_60 = 0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar1 = create_method_bind<Button,TextServer::OverrunBehavior>(set_text_overrun_behavior);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)local_a8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)local_a8);
  D_METHODP((char *)local_a8,(char ***)"get_text_overrun_behavior",0);
  uStack_60 = 0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar1 = create_method_bind<Button,TextServer::OverrunBehavior>(get_text_overrun_behavior);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)local_a8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)local_a8);
  local_70 = 0;
  local_78 = "autowrap_mode";
  local_68 = &local_78;
  D_METHODP((char *)local_a8,(char ***)"set_autowrap_mode",uVar3);
  uStack_60 = 0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar1 = create_method_bind<Button,TextServer::AutowrapMode>(set_autowrap_mode);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)local_a8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)local_a8);
  D_METHODP((char *)local_a8,(char ***)"get_autowrap_mode",0);
  uStack_60 = 0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar1 = create_method_bind<Button,TextServer::AutowrapMode>(get_autowrap_mode);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)local_a8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)local_a8);
  local_70 = 0;
  local_78 = "direction";
  local_68 = &local_78;
  D_METHODP((char *)local_a8,(char ***)"set_text_direction",uVar3);
  uStack_60 = 0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar1 = create_method_bind<Button,Control::TextDirection>(set_text_direction);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)local_a8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)local_a8);
  D_METHODP((char *)local_a8,(char ***)"get_text_direction",0);
  uStack_60 = 0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar1 = create_method_bind<Button,Control::TextDirection>(get_text_direction);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)local_a8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)local_a8);
  local_70 = 0;
  local_78 = "language";
  local_68 = &local_78;
  D_METHODP((char *)local_a8,(char ***)"set_language",uVar3);
  uStack_60 = 0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar1 = create_method_bind<Button,String_const&>(set_language);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)local_a8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)local_a8);
  D_METHODP((char *)local_a8,(char ***)"get_language",0);
  uStack_60 = 0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar1 = create_method_bind<Button,String>(get_language);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)local_a8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)local_a8);
  local_70 = 0;
  local_78 = "texture";
  local_68 = &local_78;
  D_METHODP((char *)local_a8,(char ***)"set_button_icon",uVar3);
  uStack_60 = 0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar1 = create_method_bind<Button,Ref<Texture2D>const&>(set_button_icon);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)local_a8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)local_a8);
  D_METHODP((char *)local_a8,(char ***)"get_button_icon",0);
  uStack_60 = 0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar1 = create_method_bind<Button,Ref<Texture2D>>(get_button_icon);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)local_a8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)local_a8);
  local_78 = "enabled";
  local_70 = 0;
  local_68 = &local_78;
  D_METHODP((char *)local_a8,(char ***)"set_flat",uVar3);
  uStack_60 = 0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar1 = create_method_bind<Button,bool>(set_flat);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)local_a8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)local_a8);
  D_METHODP((char *)local_a8,(char ***)"is_flat",0);
  uStack_60 = 0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar1 = create_method_bind<Button,bool>(is_flat);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)local_a8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)local_a8);
  local_78 = "enabled";
  local_70 = 0;
  local_68 = &local_78;
  D_METHODP((char *)local_a8,(char ***)"set_clip_text",uVar3);
  uStack_60 = 0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar1 = create_method_bind<Button,bool>(set_clip_text);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)local_a8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)local_a8);
  D_METHODP((char *)local_a8,(char ***)"get_clip_text",0);
  uStack_60 = 0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar1 = create_method_bind<Button,bool>(get_clip_text);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)local_a8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)local_a8);
  local_70 = 0;
  local_78 = "alignment";
  local_68 = &local_78;
  D_METHODP((char *)local_a8,(char ***)"set_text_alignment",uVar3);
  uStack_60 = 0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar1 = create_method_bind<Button,HorizontalAlignment>(set_text_alignment);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)local_a8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)local_a8);
  D_METHODP((char *)local_a8,(char ***)"get_text_alignment",0);
  uStack_60 = 0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar1 = create_method_bind<Button,HorizontalAlignment>(get_text_alignment);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)local_a8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)local_a8);
  local_70 = 0;
  local_78 = "icon_alignment";
  local_68 = &local_78;
  D_METHODP((char *)local_a8,(char ***)"set_icon_alignment",uVar3);
  uStack_60 = 0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar1 = create_method_bind<Button,HorizontalAlignment>(set_icon_alignment);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)local_a8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)local_a8);
  D_METHODP((char *)local_a8,(char ***)"get_icon_alignment",0);
  uStack_60 = 0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar1 = create_method_bind<Button,HorizontalAlignment>(get_icon_alignment);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)local_a8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)local_a8);
  local_70 = 0;
  local_78 = "vertical_icon_alignment";
  local_68 = &local_78;
  D_METHODP((char *)local_a8,(char ***)"set_vertical_icon_alignment",uVar3);
  uStack_60 = 0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar1 = create_method_bind<Button,VerticalAlignment>(set_vertical_icon_alignment);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)local_a8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)local_a8);
  D_METHODP((char *)local_a8,(char ***)"get_vertical_icon_alignment",0);
  uStack_60 = 0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar1 = create_method_bind<Button,VerticalAlignment>(get_vertical_icon_alignment);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)local_a8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)local_a8);
  local_78 = "enabled";
  local_70 = 0;
  local_68 = &local_78;
  D_METHODP((char *)local_a8,(char ***)"set_expand_icon",uVar3);
  uStack_60 = 0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar1 = create_method_bind<Button,bool>(set_expand_icon);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)local_a8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)local_a8);
  D_METHODP((char *)local_a8,(char ***)"is_expand_icon",0);
  uStack_60 = 0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar1 = create_method_bind<Button,bool>(is_expand_icon);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)local_a8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)local_a8);
  _scs_create((char *)&local_b8,true);
  _scs_create((char *)&local_c0,true);
  local_c8 = 0;
  local_d0 = 0;
  String::parse_latin1((String *)&local_d0,"");
  local_d8 = 0;
  String::parse_latin1((String *)&local_d8,"text");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_a8,4,(String *)&local_d8,0x12,(String *)&local_d0,6,&local_c8);
  local_e0 = 0;
  String::parse_latin1((String *)&local_e0,"Button");
  StringName::StringName((StringName *)&local_b0,(String *)&local_e0,false);
  ClassDB::add_property
            ((StringName *)&local_b0,(PropertyInfo *)local_a8,(StringName *)&local_c0,
             (StringName *)&local_b8,-1);
  if ((StringName::configured != '\0') && (local_b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  if (StringName::configured != '\0') {
    if (local_c8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00106d51;
    }
    if (local_c0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00106d51;
    }
    if (local_b8 != 0) {
      StringName::unref();
    }
  }
LAB_00106d51:
  _scs_create((char *)&local_b8,true);
  _scs_create((char *)&local_c0,true);
  local_c8 = 0;
  local_d0 = 0;
  String::parse_latin1((String *)&local_d0,"Texture2D");
  local_d8 = 0;
  String::parse_latin1((String *)&local_d8,"icon");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_a8,0x18,(String *)&local_d8,0x11,(String *)&local_d0,6,&local_c8)
  ;
  local_e0 = 0;
  String::parse_latin1((String *)&local_e0,"Button");
  StringName::StringName((StringName *)&local_b0,(String *)&local_e0,false);
  ClassDB::add_property
            ((StringName *)&local_b0,(PropertyInfo *)local_a8,(StringName *)&local_c0,
             (StringName *)&local_b8,-1);
  if ((StringName::configured != '\0') && (local_b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  if (StringName::configured != '\0') {
    if (local_c8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00106ea2;
    }
    if (local_c0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00106ea2;
    }
    if (local_b8 != 0) {
      StringName::unref();
    }
  }
LAB_00106ea2:
  _scs_create((char *)&local_b8,true);
  _scs_create((char *)&local_c0,true);
  local_c8 = 0;
  local_d0 = 0;
  String::parse_latin1((String *)&local_d0,"");
  local_d8 = 0;
  String::parse_latin1((String *)&local_d8,"flat");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_a8,1,(String *)&local_d8,0,(String *)&local_d0,6,&local_c8);
  local_e0 = 0;
  String::parse_latin1((String *)&local_e0,"Button");
  StringName::StringName((StringName *)&local_b0,(String *)&local_e0,false);
  ClassDB::add_property
            ((StringName *)&local_b0,(PropertyInfo *)local_a8,(StringName *)&local_c0,
             (StringName *)&local_b8,-1);
  if ((StringName::configured != '\0') && (local_b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  if (StringName::configured != '\0') {
    if (local_c8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00106ff1;
    }
    if (local_c0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00106ff1;
    }
    if (local_b8 != 0) {
      StringName::unref();
    }
  }
LAB_00106ff1:
  local_a8[0] = 0;
  String::parse_latin1((String *)local_a8,"");
  local_b0 = 0;
  String::parse_latin1((String *)&local_b0,"Text Behavior");
  local_c0 = 0;
  String::parse_latin1((String *)&local_c0,"Button");
  StringName::StringName((StringName *)&local_b8,(String *)&local_c0,false);
  ClassDB::add_property_group((StringName *)&local_b8,(String *)&local_b0,(String *)local_a8,0);
  if ((StringName::configured != '\0') && (local_b8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  _scs_create((char *)&local_b8,true);
  _scs_create((char *)&local_c0,true);
  local_c8 = 0;
  local_d0 = 0;
  String::parse_latin1((String *)&local_d0,"Left,Center,Right");
  local_d8 = 0;
  String::parse_latin1((String *)&local_d8,"alignment");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_a8,2,(String *)&local_d8,2,(String *)&local_d0,6,&local_c8);
  local_e0 = 0;
  String::parse_latin1((String *)&local_e0,"Button");
  StringName::StringName((StringName *)&local_b0,(String *)&local_e0,false);
  ClassDB::add_property
            ((StringName *)&local_b0,(PropertyInfo *)local_a8,(StringName *)&local_c0,
             (StringName *)&local_b8,-1);
  if ((StringName::configured != '\0') && (local_b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  if (StringName::configured != '\0') {
    if (local_c8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001071da;
    }
    if (local_c0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001071da;
    }
    if (local_b8 != 0) {
      StringName::unref();
    }
  }
LAB_001071da:
  _scs_create((char *)&local_b8,true);
  _scs_create((char *)&local_c0,true);
  local_c8 = 0;
  local_d0 = 0;
  String::parse_latin1
            ((String *)&local_d0,"Trim Nothing,Trim Characters,Trim Words,Ellipsis,Word Ellipsis");
  local_d8 = 0;
  String::parse_latin1((String *)&local_d8,"text_overrun_behavior");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_a8,2,(String *)&local_d8,2,(String *)&local_d0,6,&local_c8);
  local_e0 = 0;
  String::parse_latin1((String *)&local_e0,"Button");
  StringName::StringName((StringName *)&local_b0,(String *)&local_e0,false);
  ClassDB::add_property
            ((StringName *)&local_b0,(PropertyInfo *)local_a8,(StringName *)&local_c0,
             (StringName *)&local_b8,-1);
  if ((StringName::configured != '\0') && (local_b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  if (StringName::configured != '\0') {
    if (local_c8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010732c;
    }
    if (local_c0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010732c;
    }
    if (local_b8 != 0) {
      StringName::unref();
    }
  }
LAB_0010732c:
  _scs_create((char *)&local_b8,true);
  _scs_create((char *)&local_c0,true);
  local_c8 = 0;
  local_d0 = 0;
  String::parse_latin1((String *)&local_d0,"Off,Arbitrary,Word,Word (Smart)");
  local_d8 = 0;
  String::parse_latin1((String *)&local_d8,"autowrap_mode");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_a8,2,(String *)&local_d8,2,(String *)&local_d0,6,&local_c8);
  local_e0 = 0;
  String::parse_latin1((String *)&local_e0,"Button");
  StringName::StringName((StringName *)&local_b0,(String *)&local_e0,false);
  ClassDB::add_property
            ((StringName *)&local_b0,(PropertyInfo *)local_a8,(StringName *)&local_c0,
             (StringName *)&local_b8,-1);
  if ((StringName::configured != '\0') && (local_b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  if (StringName::configured != '\0') {
    if (local_c8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010747d;
    }
    if (local_c0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010747d;
    }
    if (local_b8 != 0) {
      StringName::unref();
    }
  }
LAB_0010747d:
  _scs_create((char *)&local_b8,true);
  _scs_create((char *)&local_c0,true);
  local_c8 = 0;
  local_d0 = 0;
  String::parse_latin1((String *)&local_d0,"");
  local_d8 = 0;
  String::parse_latin1((String *)&local_d8,"clip_text");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_a8,1,(String *)&local_d8,0,(String *)&local_d0,6,&local_c8);
  local_e0 = 0;
  String::parse_latin1((String *)&local_e0,"Button");
  StringName::StringName((StringName *)&local_b0,(String *)&local_e0,false);
  ClassDB::add_property
            ((StringName *)&local_b0,(PropertyInfo *)local_a8,(StringName *)&local_c0,
             (StringName *)&local_b8,-1);
  if ((StringName::configured != '\0') && (local_b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  if (StringName::configured != '\0') {
    if (local_c8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001075cb;
    }
    if (local_c0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001075cb;
    }
    if (local_b8 != 0) {
      StringName::unref();
    }
  }
LAB_001075cb:
  local_a8[0] = 0;
  String::parse_latin1((String *)local_a8,"");
  local_b0 = 0;
  String::parse_latin1((String *)&local_b0,"Icon Behavior");
  local_c0 = 0;
  String::parse_latin1((String *)&local_c0,"Button");
  StringName::StringName((StringName *)&local_b8,(String *)&local_c0,false);
  ClassDB::add_property_group((StringName *)&local_b8,(String *)&local_b0,(String *)local_a8,0);
  if ((StringName::configured != '\0') && (local_b8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  _scs_create((char *)&local_b8,true);
  _scs_create((char *)&local_c0,true);
  local_c8 = 0;
  local_d0 = 0;
  String::parse_latin1((String *)&local_d0,"Left,Center,Right");
  local_d8 = 0;
  String::parse_latin1((String *)&local_d8,"icon_alignment");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_a8,2,(String *)&local_d8,2,(String *)&local_d0,6,&local_c8);
  local_e0 = 0;
  String::parse_latin1((String *)&local_e0,"Button");
  StringName::StringName((StringName *)&local_b0,(String *)&local_e0,false);
  ClassDB::add_property
            ((StringName *)&local_b0,(PropertyInfo *)local_a8,(StringName *)&local_c0,
             (StringName *)&local_b8,-1);
  if ((StringName::configured != '\0') && (local_b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  if (StringName::configured != '\0') {
    if (local_c8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001077b3;
    }
    if (local_c0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001077b3;
    }
    if (local_b8 != 0) {
      StringName::unref();
    }
  }
LAB_001077b3:
  _scs_create((char *)&local_b8,true);
  _scs_create((char *)&local_c0,true);
  local_c8 = 0;
  local_d0 = 0;
  String::parse_latin1((String *)&local_d0,"Top,Center,Bottom");
  local_d8 = 0;
  String::parse_latin1((String *)&local_d8,"vertical_icon_alignment");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_a8,2,(String *)&local_d8,2,(String *)&local_d0,6,&local_c8);
  local_e0 = 0;
  String::parse_latin1((String *)&local_e0,"Button");
  StringName::StringName((StringName *)&local_b0,(String *)&local_e0,false);
  ClassDB::add_property
            ((StringName *)&local_b0,(PropertyInfo *)local_a8,(StringName *)&local_c0,
             (StringName *)&local_b8,-1);
  if ((StringName::configured != '\0') && (local_b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  if (StringName::configured != '\0') {
    if (local_c8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107906;
    }
    if (local_c0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107906;
    }
    if (local_b8 != 0) {
      StringName::unref();
    }
  }
LAB_00107906:
  _scs_create((char *)&local_b8,true);
  _scs_create((char *)&local_c0,true);
  local_c8 = 0;
  local_d0 = 0;
  String::parse_latin1((String *)&local_d0,"");
  local_d8 = 0;
  String::parse_latin1((String *)&local_d8,"expand_icon");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_a8,1,(String *)&local_d8,0,(String *)&local_d0,6,&local_c8);
  local_e0 = 0;
  String::parse_latin1((String *)&local_e0,"Button");
  StringName::StringName((StringName *)&local_b0,(String *)&local_e0,false);
  ClassDB::add_property
            ((StringName *)&local_b0,(PropertyInfo *)local_a8,(StringName *)&local_c0,
             (StringName *)&local_b8,-1);
  if ((StringName::configured != '\0') && (local_b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  if (StringName::configured != '\0') {
    if (local_c8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107a55;
    }
    if (local_c0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107a55;
    }
    if (local_b8 != 0) {
      StringName::unref();
    }
  }
LAB_00107a55:
  local_a8[0] = 0;
  String::parse_latin1((String *)local_a8,"");
  local_b0 = 0;
  String::parse_latin1((String *)&local_b0,"BiDi");
  local_c0 = 0;
  String::parse_latin1((String *)&local_c0,"Button");
  StringName::StringName((StringName *)&local_b8,(String *)&local_c0,false);
  ClassDB::add_property_group((StringName *)&local_b8,(String *)&local_b0,(String *)local_a8,0);
  if ((StringName::configured != '\0') && (local_b8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  _scs_create((char *)&local_b8,true);
  _scs_create((char *)&local_c0,true);
  local_c8 = 0;
  local_d0 = 0;
  String::parse_latin1((String *)&local_d0,"Auto,Left-to-Right,Right-to-Left,Inherited");
  local_d8 = 0;
  String::parse_latin1((String *)&local_d8,"text_direction");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_a8,2,(String *)&local_d8,2,(String *)&local_d0,6,&local_c8);
  local_e0 = 0;
  String::parse_latin1((String *)&local_e0,"Button");
  StringName::StringName((StringName *)&local_b0,(String *)&local_e0,false);
  ClassDB::add_property
            ((StringName *)&local_b0,(PropertyInfo *)local_a8,(StringName *)&local_c0,
             (StringName *)&local_b8,-1);
  if ((StringName::configured != '\0') && (local_b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  if (StringName::configured != '\0') {
    if (local_c8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107c3c;
    }
    if (local_c0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107c3c;
    }
    if (local_b8 != 0) {
      StringName::unref();
    }
  }
LAB_00107c3c:
  _scs_create((char *)&local_b8,true);
  _scs_create((char *)&local_c0,true);
  local_c8 = 0;
  local_d0 = 0;
  String::parse_latin1((String *)&local_d0,"");
  local_d8 = 0;
  String::parse_latin1((String *)&local_d8,"language");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_a8,4,(String *)&local_d8,0x20,(String *)&local_d0,6,&local_c8);
  local_e0 = 0;
  String::parse_latin1((String *)&local_e0,"Button");
  StringName::StringName((StringName *)&local_b0,(String *)&local_e0,false);
  ClassDB::add_property
            ((StringName *)&local_b0,(PropertyInfo *)local_a8,(StringName *)&local_c0,
             (StringName *)&local_b8,-1);
  if ((StringName::configured != '\0') && (local_b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  if (StringName::configured != '\0') {
    if (local_c8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107d8d;
    }
    if (local_c0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107d8d;
    }
    if (local_b8 != 0) {
      StringName::unref();
    }
  }
LAB_00107d8d:
  uVar2 = ThemeDB::get_singleton();
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  uStack_60 = 0;
  pcStack_58 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#1}>
               ::_M_manager;
  pcStack_50 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#1}>
               ::_M_invoke;
  StringName::StringName((StringName *)local_a8,"normal",false);
  StringName::StringName((StringName *)&local_b0,"normal",false);
  local_c0 = 0;
  String::parse_latin1((String *)&local_c0,"Button");
  StringName::StringName((StringName *)&local_b8,(String *)&local_c0,false);
  ThemeDB::bind_class_item
            (uVar2,5,(StringName *)&local_b8,(StringName *)&local_b0,(MethodDefinition *)local_a8,
             (_Function_base *)&local_68);
  if ((StringName::configured != '\0') && (local_b8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if (StringName::configured != '\0') {
    if (local_b0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107e78;
    }
    if (local_a8[0] != 0) {
      StringName::unref();
    }
  }
LAB_00107e78:
  std::_Function_base::~_Function_base((_Function_base *)&local_68);
  uVar2 = ThemeDB::get_singleton();
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  uStack_60 = 0;
  pcStack_58 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#2}>
               ::_M_manager;
  pcStack_50 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#2}>
               ::_M_invoke;
  StringName::StringName((StringName *)local_a8,"normal_mirrored",false);
  StringName::StringName((StringName *)&local_b0,"normal_mirrored",false);
  local_c0 = 0;
  String::parse_latin1((String *)&local_c0,"Button");
  StringName::StringName((StringName *)&local_b8,(String *)&local_c0,false);
  ThemeDB::bind_class_item
            (uVar2,5,(StringName *)&local_b8,(StringName *)&local_b0,(MethodDefinition *)local_a8,
             (_Function_base *)&local_68);
  if ((StringName::configured != '\0') && (local_b8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if (StringName::configured != '\0') {
    if (local_b0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107f6b;
    }
    if (local_a8[0] != 0) {
      StringName::unref();
    }
  }
LAB_00107f6b:
  std::_Function_base::~_Function_base((_Function_base *)&local_68);
  uVar2 = ThemeDB::get_singleton();
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  uStack_60 = 0;
  pcStack_58 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#3}>
               ::_M_manager;
  pcStack_50 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#3}>
               ::_M_invoke;
  StringName::StringName((StringName *)local_a8,"pressed",false);
  StringName::StringName((StringName *)&local_b0,"pressed",false);
  local_c0 = 0;
  String::parse_latin1((String *)&local_c0,"Button");
  StringName::StringName((StringName *)&local_b8,(String *)&local_c0,false);
  ThemeDB::bind_class_item
            (uVar2,5,(StringName *)&local_b8,(StringName *)&local_b0,(MethodDefinition *)local_a8,
             (_Function_base *)&local_68);
  if ((StringName::configured != '\0') && (local_b8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if (StringName::configured != '\0') {
    if (local_b0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010805e;
    }
    if (local_a8[0] != 0) {
      StringName::unref();
    }
  }
LAB_0010805e:
  std::_Function_base::~_Function_base((_Function_base *)&local_68);
  uVar2 = ThemeDB::get_singleton();
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  uStack_60 = 0;
  pcStack_58 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#4}>
               ::_M_manager;
  pcStack_50 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#4}>
               ::_M_invoke;
  StringName::StringName((StringName *)local_a8,"pressed_mirrored",false);
  StringName::StringName((StringName *)&local_b0,"pressed_mirrored",false);
  local_c0 = 0;
  String::parse_latin1((String *)&local_c0,"Button");
  StringName::StringName((StringName *)&local_b8,(String *)&local_c0,false);
  ThemeDB::bind_class_item
            (uVar2,5,(StringName *)&local_b8,(StringName *)&local_b0,(MethodDefinition *)local_a8,
             (_Function_base *)&local_68);
  if ((StringName::configured != '\0') && (local_b8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if (StringName::configured != '\0') {
    if (local_b0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00108151;
    }
    if (local_a8[0] != 0) {
      StringName::unref();
    }
  }
LAB_00108151:
  std::_Function_base::~_Function_base((_Function_base *)&local_68);
  uVar2 = ThemeDB::get_singleton();
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  uStack_60 = 0;
  pcStack_58 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#5}>
               ::_M_manager;
  pcStack_50 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#5}>
               ::_M_invoke;
  StringName::StringName((StringName *)local_a8,"hover",false);
  StringName::StringName((StringName *)&local_b0,"hover",false);
  local_c0 = 0;
  String::parse_latin1((String *)&local_c0,"Button");
  StringName::StringName((StringName *)&local_b8,(String *)&local_c0,false);
  ThemeDB::bind_class_item
            (uVar2,5,(StringName *)&local_b8,(StringName *)&local_b0,(MethodDefinition *)local_a8,
             (_Function_base *)&local_68);
  if ((StringName::configured != '\0') && (local_b8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if (StringName::configured != '\0') {
    if (local_b0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00108244;
    }
    if (local_a8[0] != 0) {
      StringName::unref();
    }
  }
LAB_00108244:
  std::_Function_base::~_Function_base((_Function_base *)&local_68);
  uVar2 = ThemeDB::get_singleton();
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  uStack_60 = 0;
  pcStack_58 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#6}>
               ::_M_manager;
  pcStack_50 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#6}>
               ::_M_invoke;
  StringName::StringName((StringName *)local_a8,"hover_mirrored",false);
  StringName::StringName((StringName *)&local_b0,"hover_mirrored",false);
  local_c0 = 0;
  String::parse_latin1((String *)&local_c0,"Button");
  StringName::StringName((StringName *)&local_b8,(String *)&local_c0,false);
  ThemeDB::bind_class_item
            (uVar2,5,(StringName *)&local_b8,(StringName *)&local_b0,(MethodDefinition *)local_a8,
             (_Function_base *)&local_68);
  if ((StringName::configured != '\0') && (local_b8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if (StringName::configured != '\0') {
    if (local_b0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00108337;
    }
    if (local_a8[0] != 0) {
      StringName::unref();
    }
  }
LAB_00108337:
  std::_Function_base::~_Function_base((_Function_base *)&local_68);
  uVar2 = ThemeDB::get_singleton();
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  uStack_60 = 0;
  pcStack_58 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#7}>
               ::_M_manager;
  pcStack_50 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#7}>
               ::_M_invoke;
  StringName::StringName((StringName *)local_a8,"hover_pressed",false);
  StringName::StringName((StringName *)&local_b0,"hover_pressed",false);
  local_c0 = 0;
  String::parse_latin1((String *)&local_c0,"Button");
  StringName::StringName((StringName *)&local_b8,(String *)&local_c0,false);
  ThemeDB::bind_class_item
            (uVar2,5,(StringName *)&local_b8,(StringName *)&local_b0,(MethodDefinition *)local_a8,
             (_Function_base *)&local_68);
  if ((StringName::configured != '\0') && (local_b8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if (StringName::configured != '\0') {
    if (local_b0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010842a;
    }
    if (local_a8[0] != 0) {
      StringName::unref();
    }
  }
LAB_0010842a:
  std::_Function_base::~_Function_base((_Function_base *)&local_68);
  uVar2 = ThemeDB::get_singleton();
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  uStack_60 = 0;
  pcStack_58 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#8}>
               ::_M_manager;
  pcStack_50 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#8}>
               ::_M_invoke;
  StringName::StringName((StringName *)local_a8,"hover_pressed_mirrored",false);
  StringName::StringName((StringName *)&local_b0,"hover_pressed_mirrored",false);
  local_c0 = 0;
  String::parse_latin1((String *)&local_c0,"Button");
  StringName::StringName((StringName *)&local_b8,(String *)&local_c0,false);
  ThemeDB::bind_class_item
            (uVar2,5,(StringName *)&local_b8,(StringName *)&local_b0,(MethodDefinition *)local_a8,
             (_Function_base *)&local_68);
  if ((StringName::configured != '\0') && (local_b8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if (StringName::configured != '\0') {
    if (local_b0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010851d;
    }
    if (local_a8[0] != 0) {
      StringName::unref();
    }
  }
LAB_0010851d:
  std::_Function_base::~_Function_base((_Function_base *)&local_68);
  uVar2 = ThemeDB::get_singleton();
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  uStack_60 = 0;
  pcStack_58 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#9}>
               ::_M_manager;
  pcStack_50 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#9}>
               ::_M_invoke;
  StringName::StringName((StringName *)local_a8,"disabled",false);
  StringName::StringName((StringName *)&local_b0,"disabled",false);
  local_c0 = 0;
  String::parse_latin1((String *)&local_c0,"Button");
  StringName::StringName((StringName *)&local_b8,(String *)&local_c0,false);
  ThemeDB::bind_class_item
            (uVar2,5,(StringName *)&local_b8,(StringName *)&local_b0,(MethodDefinition *)local_a8,
             (_Function_base *)&local_68);
  if ((StringName::configured != '\0') && (local_b8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if (StringName::configured != '\0') {
    if (local_b0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00108610;
    }
    if (local_a8[0] != 0) {
      StringName::unref();
    }
  }
LAB_00108610:
  std::_Function_base::~_Function_base((_Function_base *)&local_68);
  uVar2 = ThemeDB::get_singleton();
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  uStack_60 = 0;
  pcStack_58 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#10}>
               ::_M_manager;
  pcStack_50 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#10}>
               ::_M_invoke;
  StringName::StringName((StringName *)local_a8,"disabled_mirrored",false);
  StringName::StringName((StringName *)&local_b0,"disabled_mirrored",false);
  local_c0 = 0;
  String::parse_latin1((String *)&local_c0,"Button");
  StringName::StringName((StringName *)&local_b8,(String *)&local_c0,false);
  ThemeDB::bind_class_item
            (uVar2,5,(StringName *)&local_b8,(StringName *)&local_b0,(MethodDefinition *)local_a8,
             (_Function_base *)&local_68);
  if ((StringName::configured != '\0') && (local_b8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if (StringName::configured != '\0') {
    if (local_b0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00108703;
    }
    if (local_a8[0] != 0) {
      StringName::unref();
    }
  }
LAB_00108703:
  std::_Function_base::~_Function_base((_Function_base *)&local_68);
  uVar2 = ThemeDB::get_singleton();
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  uStack_60 = 0;
  pcStack_58 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#11}>
               ::_M_manager;
  pcStack_50 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#11}>
               ::_M_invoke;
  StringName::StringName((StringName *)local_a8,"focus",false);
  StringName::StringName((StringName *)&local_b0,"focus",false);
  local_c0 = 0;
  String::parse_latin1((String *)&local_c0,"Button");
  StringName::StringName((StringName *)&local_b8,(String *)&local_c0,false);
  ThemeDB::bind_class_item
            (uVar2,5,(StringName *)&local_b8,(StringName *)&local_b0,(MethodDefinition *)local_a8,
             (_Function_base *)&local_68);
  if ((StringName::configured != '\0') && (local_b8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if (StringName::configured != '\0') {
    if (local_b0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001087f6;
    }
    if (local_a8[0] != 0) {
      StringName::unref();
    }
  }
LAB_001087f6:
  std::_Function_base::~_Function_base((_Function_base *)&local_68);
  uVar2 = ThemeDB::get_singleton();
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  uStack_60 = 0;
  pcStack_58 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#12}>
               ::_M_manager;
  pcStack_50 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#12}>
               ::_M_invoke;
  StringName::StringName((StringName *)local_a8,"font_color",false);
  StringName::StringName((StringName *)&local_b0,"font_color",false);
  local_c0 = 0;
  String::parse_latin1((String *)&local_c0,"Button");
  StringName::StringName((StringName *)&local_b8,(String *)&local_c0,false);
  ThemeDB::bind_class_item
            (uVar2,0,(StringName *)&local_b8,(StringName *)&local_b0,(MethodDefinition *)local_a8,
             (_Function_base *)&local_68);
  if ((StringName::configured != '\0') && (local_b8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if (StringName::configured != '\0') {
    if (local_b0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001088e6;
    }
    if (local_a8[0] != 0) {
      StringName::unref();
    }
  }
LAB_001088e6:
  std::_Function_base::~_Function_base((_Function_base *)&local_68);
  uVar2 = ThemeDB::get_singleton();
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  uStack_60 = 0;
  pcStack_58 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#13}>
               ::_M_manager;
  pcStack_50 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#13}>
               ::_M_invoke;
  StringName::StringName((StringName *)local_a8,"font_focus_color",false);
  StringName::StringName((StringName *)&local_b0,"font_focus_color",false);
  local_c0 = 0;
  String::parse_latin1((String *)&local_c0,"Button");
  StringName::StringName((StringName *)&local_b8,(String *)&local_c0,false);
  ThemeDB::bind_class_item
            (uVar2,0,(StringName *)&local_b8,(StringName *)&local_b0,(MethodDefinition *)local_a8,
             (_Function_base *)&local_68);
  if ((StringName::configured != '\0') && (local_b8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if (StringName::configured != '\0') {
    if (local_b0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001089d6;
    }
    if (local_a8[0] != 0) {
      StringName::unref();
    }
  }
LAB_001089d6:
  std::_Function_base::~_Function_base((_Function_base *)&local_68);
  uVar2 = ThemeDB::get_singleton();
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  uStack_60 = 0;
  pcStack_58 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#14}>
               ::_M_manager;
  pcStack_50 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#14}>
               ::_M_invoke;
  StringName::StringName((StringName *)local_a8,"font_pressed_color",false);
  StringName::StringName((StringName *)&local_b0,"font_pressed_color",false);
  local_c0 = 0;
  String::parse_latin1((String *)&local_c0,"Button");
  StringName::StringName((StringName *)&local_b8,(String *)&local_c0,false);
  ThemeDB::bind_class_item
            (uVar2,0,(StringName *)&local_b8,(StringName *)&local_b0,(MethodDefinition *)local_a8,
             (_Function_base *)&local_68);
  if ((StringName::configured != '\0') && (local_b8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if (StringName::configured != '\0') {
    if (local_b0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00108ac6;
    }
    if (local_a8[0] != 0) {
      StringName::unref();
    }
  }
LAB_00108ac6:
  std::_Function_base::~_Function_base((_Function_base *)&local_68);
  uVar2 = ThemeDB::get_singleton();
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  uStack_60 = 0;
  pcStack_58 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#15}>
               ::_M_manager;
  pcStack_50 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#15}>
               ::_M_invoke;
  StringName::StringName((StringName *)local_a8,"font_hover_color",false);
  StringName::StringName((StringName *)&local_b0,"font_hover_color",false);
  local_c0 = 0;
  String::parse_latin1((String *)&local_c0,"Button");
  StringName::StringName((StringName *)&local_b8,(String *)&local_c0,false);
  ThemeDB::bind_class_item
            (uVar2,0,(StringName *)&local_b8,(StringName *)&local_b0,(MethodDefinition *)local_a8,
             (_Function_base *)&local_68);
  if ((StringName::configured != '\0') && (local_b8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if (StringName::configured != '\0') {
    if (local_b0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00108bb6;
    }
    if (local_a8[0] != 0) {
      StringName::unref();
    }
  }
LAB_00108bb6:
  std::_Function_base::~_Function_base((_Function_base *)&local_68);
  uVar2 = ThemeDB::get_singleton();
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  uStack_60 = 0;
  pcStack_58 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#16}>
               ::_M_manager;
  pcStack_50 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#16}>
               ::_M_invoke;
  StringName::StringName((StringName *)local_a8,"font_hover_pressed_color",false);
  StringName::StringName((StringName *)&local_b0,"font_hover_pressed_color",false);
  local_c0 = 0;
  String::parse_latin1((String *)&local_c0,"Button");
  StringName::StringName((StringName *)&local_b8,(String *)&local_c0,false);
  ThemeDB::bind_class_item
            (uVar2,0,(StringName *)&local_b8,(StringName *)&local_b0,(MethodDefinition *)local_a8,
             (_Function_base *)&local_68);
  if ((StringName::configured != '\0') && (local_b8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if (StringName::configured != '\0') {
    if (local_b0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00108ca6;
    }
    if (local_a8[0] != 0) {
      StringName::unref();
    }
  }
LAB_00108ca6:
  std::_Function_base::~_Function_base((_Function_base *)&local_68);
  uVar2 = ThemeDB::get_singleton();
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  uStack_60 = 0;
  pcStack_58 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#17}>
               ::_M_manager;
  pcStack_50 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#17}>
               ::_M_invoke;
  StringName::StringName((StringName *)local_a8,"font_disabled_color",false);
  StringName::StringName((StringName *)&local_b0,"font_disabled_color",false);
  local_c0 = 0;
  String::parse_latin1((String *)&local_c0,"Button");
  StringName::StringName((StringName *)&local_b8,(String *)&local_c0,false);
  ThemeDB::bind_class_item
            (uVar2,0,(StringName *)&local_b8,(StringName *)&local_b0,(MethodDefinition *)local_a8,
             (_Function_base *)&local_68);
  if ((StringName::configured != '\0') && (local_b8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if (StringName::configured != '\0') {
    if (local_b0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00108d96;
    }
    if (local_a8[0] != 0) {
      StringName::unref();
    }
  }
LAB_00108d96:
  std::_Function_base::~_Function_base((_Function_base *)&local_68);
  uVar2 = ThemeDB::get_singleton();
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  uStack_60 = 0;
  pcStack_58 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#18}>
               ::_M_manager;
  pcStack_50 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#18}>
               ::_M_invoke;
  StringName::StringName((StringName *)local_a8,"font",false);
  StringName::StringName((StringName *)&local_b0,"font",false);
  local_c0 = 0;
  String::parse_latin1((String *)&local_c0,"Button");
  StringName::StringName((StringName *)&local_b8,(String *)&local_c0,false);
  ThemeDB::bind_class_item
            (uVar2,2,(StringName *)&local_b8,(StringName *)&local_b0,(MethodDefinition *)local_a8,
             (_Function_base *)&local_68);
  if ((StringName::configured != '\0') && (local_b8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if (StringName::configured != '\0') {
    if (local_b0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00108e89;
    }
    if (local_a8[0] != 0) {
      StringName::unref();
    }
  }
LAB_00108e89:
  std::_Function_base::~_Function_base((_Function_base *)&local_68);
  uVar2 = ThemeDB::get_singleton();
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  uStack_60 = 0;
  pcStack_58 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#19}>
               ::_M_manager;
  pcStack_50 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#19}>
               ::_M_invoke;
  StringName::StringName((StringName *)local_a8,"font_size",false);
  StringName::StringName((StringName *)&local_b0,"font_size",false);
  local_c0 = 0;
  String::parse_latin1((String *)&local_c0,"Button");
  StringName::StringName((StringName *)&local_b8,(String *)&local_c0,false);
  ThemeDB::bind_class_item
            (uVar2,3,(StringName *)&local_b8,(StringName *)&local_b0,(MethodDefinition *)local_a8,
             (_Function_base *)&local_68);
  if ((StringName::configured != '\0') && (local_b8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if (StringName::configured != '\0') {
    if (local_b0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00108f7c;
    }
    if (local_a8[0] != 0) {
      StringName::unref();
    }
  }
LAB_00108f7c:
  std::_Function_base::~_Function_base((_Function_base *)&local_68);
  uVar2 = ThemeDB::get_singleton();
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  uStack_60 = 0;
  pcStack_58 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#20}>
               ::_M_manager;
  pcStack_50 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#20}>
               ::_M_invoke;
  StringName::StringName((StringName *)local_a8,"outline_size",false);
  StringName::StringName((StringName *)&local_b0,"outline_size",false);
  local_c0 = 0;
  String::parse_latin1((String *)&local_c0,"Button");
  StringName::StringName((StringName *)&local_b8,(String *)&local_c0,false);
  ThemeDB::bind_class_item
            (uVar2,1,(StringName *)&local_b8,(StringName *)&local_b0,(MethodDefinition *)local_a8,
             (_Function_base *)&local_68);
  if ((StringName::configured != '\0') && (local_b8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if (StringName::configured != '\0') {
    if (local_b0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010906f;
    }
    if (local_a8[0] != 0) {
      StringName::unref();
    }
  }
LAB_0010906f:
  std::_Function_base::~_Function_base((_Function_base *)&local_68);
  uVar2 = ThemeDB::get_singleton();
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  uStack_60 = 0;
  pcStack_58 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#21}>
               ::_M_manager;
  pcStack_50 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#21}>
               ::_M_invoke;
  StringName::StringName((StringName *)local_a8,"font_outline_color",false);
  StringName::StringName((StringName *)&local_b0,"font_outline_color",false);
  local_c0 = 0;
  String::parse_latin1((String *)&local_c0,"Button");
  StringName::StringName((StringName *)&local_b8,(String *)&local_c0,false);
  ThemeDB::bind_class_item
            (uVar2,0,(StringName *)&local_b8,(StringName *)&local_b0,(MethodDefinition *)local_a8,
             (_Function_base *)&local_68);
  if ((StringName::configured != '\0') && (local_b8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if (StringName::configured != '\0') {
    if (local_b0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010915f;
    }
    if (local_a8[0] != 0) {
      StringName::unref();
    }
  }
LAB_0010915f:
  std::_Function_base::~_Function_base((_Function_base *)&local_68);
  uVar2 = ThemeDB::get_singleton();
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  uStack_60 = 0;
  pcStack_58 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#22}>
               ::_M_manager;
  pcStack_50 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#22}>
               ::_M_invoke;
  StringName::StringName((StringName *)local_a8,"icon_normal_color",false);
  StringName::StringName((StringName *)&local_b0,"icon_normal_color",false);
  local_c0 = 0;
  String::parse_latin1((String *)&local_c0,"Button");
  StringName::StringName((StringName *)&local_b8,(String *)&local_c0,false);
  ThemeDB::bind_class_item
            (uVar2,0,(StringName *)&local_b8,(StringName *)&local_b0,(MethodDefinition *)local_a8,
             (_Function_base *)&local_68);
  if ((StringName::configured != '\0') && (local_b8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if (StringName::configured != '\0') {
    if (local_b0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010924f;
    }
    if (local_a8[0] != 0) {
      StringName::unref();
    }
  }
LAB_0010924f:
  std::_Function_base::~_Function_base((_Function_base *)&local_68);
  uVar2 = ThemeDB::get_singleton();
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  uStack_60 = 0;
  pcStack_58 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#23}>
               ::_M_manager;
  pcStack_50 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#23}>
               ::_M_invoke;
  StringName::StringName((StringName *)local_a8,"icon_focus_color",false);
  StringName::StringName((StringName *)&local_b0,"icon_focus_color",false);
  local_c0 = 0;
  String::parse_latin1((String *)&local_c0,"Button");
  StringName::StringName((StringName *)&local_b8,(String *)&local_c0,false);
  ThemeDB::bind_class_item
            (uVar2,0,(StringName *)&local_b8,(StringName *)&local_b0,(MethodDefinition *)local_a8,
             (_Function_base *)&local_68);
  if ((StringName::configured != '\0') && (local_b8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if (StringName::configured != '\0') {
    if (local_b0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010933f;
    }
    if (local_a8[0] != 0) {
      StringName::unref();
    }
  }
LAB_0010933f:
  std::_Function_base::~_Function_base((_Function_base *)&local_68);
  uVar2 = ThemeDB::get_singleton();
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  uStack_60 = 0;
  pcStack_58 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#24}>
               ::_M_manager;
  pcStack_50 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#24}>
               ::_M_invoke;
  StringName::StringName((StringName *)local_a8,"icon_pressed_color",false);
  StringName::StringName((StringName *)&local_b0,"icon_pressed_color",false);
  local_c0 = 0;
  String::parse_latin1((String *)&local_c0,"Button");
  StringName::StringName((StringName *)&local_b8,(String *)&local_c0,false);
  ThemeDB::bind_class_item
            (uVar2,0,(StringName *)&local_b8,(StringName *)&local_b0,(MethodDefinition *)local_a8,
             (_Function_base *)&local_68);
  if ((StringName::configured != '\0') && (local_b8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if (StringName::configured != '\0') {
    if (local_b0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010942f;
    }
    if (local_a8[0] != 0) {
      StringName::unref();
    }
  }
LAB_0010942f:
  std::_Function_base::~_Function_base((_Function_base *)&local_68);
  uVar2 = ThemeDB::get_singleton();
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  uStack_60 = 0;
  pcStack_58 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#25}>
               ::_M_manager;
  pcStack_50 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#25}>
               ::_M_invoke;
  StringName::StringName((StringName *)local_a8,"icon_hover_color",false);
  StringName::StringName((StringName *)&local_b0,"icon_hover_color",false);
  local_c0 = 0;
  String::parse_latin1((String *)&local_c0,"Button");
  StringName::StringName((StringName *)&local_b8,(String *)&local_c0,false);
  ThemeDB::bind_class_item
            (uVar2,0,(StringName *)&local_b8,(StringName *)&local_b0,(MethodDefinition *)local_a8,
             (_Function_base *)&local_68);
  if ((StringName::configured != '\0') && (local_b8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if (StringName::configured != '\0') {
    if (local_b0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010951f;
    }
    if (local_a8[0] != 0) {
      StringName::unref();
    }
  }
LAB_0010951f:
  std::_Function_base::~_Function_base((_Function_base *)&local_68);
  uVar2 = ThemeDB::get_singleton();
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  uStack_60 = 0;
  pcStack_58 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#26}>
               ::_M_manager;
  pcStack_50 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#26}>
               ::_M_invoke;
  StringName::StringName((StringName *)local_a8,"icon_hover_pressed_color",false);
  StringName::StringName((StringName *)&local_b0,"icon_hover_pressed_color",false);
  local_c0 = 0;
  String::parse_latin1((String *)&local_c0,"Button");
  StringName::StringName((StringName *)&local_b8,(String *)&local_c0,false);
  ThemeDB::bind_class_item
            (uVar2,0,(StringName *)&local_b8,(StringName *)&local_b0,(MethodDefinition *)local_a8,
             (_Function_base *)&local_68);
  if ((StringName::configured != '\0') && (local_b8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if (StringName::configured != '\0') {
    if (local_b0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010960f;
    }
    if (local_a8[0] != 0) {
      StringName::unref();
    }
  }
LAB_0010960f:
  std::_Function_base::~_Function_base((_Function_base *)&local_68);
  uVar2 = ThemeDB::get_singleton();
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  uStack_60 = 0;
  pcStack_58 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#27}>
               ::_M_manager;
  pcStack_50 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#27}>
               ::_M_invoke;
  StringName::StringName((StringName *)local_a8,"icon_disabled_color",false);
  StringName::StringName((StringName *)&local_b0,"icon_disabled_color",false);
  local_c0 = 0;
  String::parse_latin1((String *)&local_c0,"Button");
  StringName::StringName((StringName *)&local_b8,(String *)&local_c0,false);
  ThemeDB::bind_class_item
            (uVar2,0,(StringName *)&local_b8,(StringName *)&local_b0,(MethodDefinition *)local_a8,
             (_Function_base *)&local_68);
  if ((StringName::configured != '\0') && (local_b8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if (StringName::configured != '\0') {
    if (local_b0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001096ff;
    }
    if (local_a8[0] != 0) {
      StringName::unref();
    }
  }
LAB_001096ff:
  std::_Function_base::~_Function_base((_Function_base *)&local_68);
  uVar2 = ThemeDB::get_singleton();
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  uStack_60 = 0;
  pcStack_58 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#28}>
               ::_M_manager;
  pcStack_50 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#28}>
               ::_M_invoke;
  StringName::StringName((StringName *)local_a8,"icon",false);
  StringName::StringName((StringName *)&local_b0,"icon",false);
  local_c0 = 0;
  String::parse_latin1((String *)&local_c0,"Button");
  StringName::StringName((StringName *)&local_b8,(String *)&local_c0,false);
  ThemeDB::bind_class_item
            (uVar2,4,(StringName *)&local_b8,(StringName *)&local_b0,(MethodDefinition *)local_a8,
             (_Function_base *)&local_68);
  if ((StringName::configured != '\0') && (local_b8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if (StringName::configured != '\0') {
    if (local_b0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001097f2;
    }
    if (local_a8[0] != 0) {
      StringName::unref();
    }
  }
LAB_001097f2:
  std::_Function_base::~_Function_base((_Function_base *)&local_68);
  uVar2 = ThemeDB::get_singleton();
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  uStack_60 = 0;
  pcStack_58 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#29}>
               ::_M_manager;
  pcStack_50 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#29}>
               ::_M_invoke;
  StringName::StringName((StringName *)local_a8,"h_separation",false);
  StringName::StringName((StringName *)&local_b0,"h_separation",false);
  local_c0 = 0;
  String::parse_latin1((String *)&local_c0,"Button");
  StringName::StringName((StringName *)&local_b8,(String *)&local_c0,false);
  ThemeDB::bind_class_item
            (uVar2,1,(StringName *)&local_b8,(StringName *)&local_b0,(MethodDefinition *)local_a8,
             (_Function_base *)&local_68);
  if ((StringName::configured != '\0') && (local_b8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if (StringName::configured != '\0') {
    if (local_b0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001098e5;
    }
    if (local_a8[0] != 0) {
      StringName::unref();
    }
  }
LAB_001098e5:
  std::_Function_base::~_Function_base((_Function_base *)&local_68);
  uVar2 = ThemeDB::get_singleton();
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  uStack_60 = 0;
  pcStack_58 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#30}>
               ::_M_manager;
  pcStack_50 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#30}>
               ::_M_invoke;
  StringName::StringName((StringName *)local_a8,"icon_max_width",false);
  StringName::StringName((StringName *)&local_b0,"icon_max_width",false);
  local_c0 = 0;
  String::parse_latin1((String *)&local_c0,"Button");
  StringName::StringName((StringName *)&local_b8,(String *)&local_c0,false);
  ThemeDB::bind_class_item
            (uVar2,1,(StringName *)&local_b8,(StringName *)&local_b0,(MethodDefinition *)local_a8,
             (_Function_base *)&local_68);
  if ((StringName::configured != '\0') && (local_b8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if (StringName::configured != '\0') {
    if (local_b0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001099d8;
    }
    if (local_a8[0] != 0) {
      StringName::unref();
    }
  }
LAB_001099d8:
  std::_Function_base::~_Function_base((_Function_base *)&local_68);
  uVar2 = ThemeDB::get_singleton();
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  uStack_60 = 0;
  pcStack_58 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#31}>
               ::_M_manager;
  pcStack_50 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#31}>
               ::_M_invoke;
  StringName::StringName((StringName *)local_a8,"align_to_largest_stylebox",false);
  StringName::StringName((StringName *)&local_b0,"align_to_largest_stylebox",false);
  local_c0 = 0;
  String::parse_latin1((String *)&local_c0,"Button");
  StringName::StringName((StringName *)&local_b8,(String *)&local_c0,false);
  ThemeDB::bind_class_item
            (uVar2,1,(StringName *)&local_b8,(StringName *)&local_b0,(MethodDefinition *)local_a8,
             (_Function_base *)&local_68);
  if ((StringName::configured != '\0') && (local_b8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if (StringName::configured != '\0') {
    if (local_b0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00109acb;
    }
    if (local_a8[0] != 0) {
      StringName::unref();
    }
  }
LAB_00109acb:
  std::_Function_base::~_Function_base((_Function_base *)&local_68);
  uVar2 = ThemeDB::get_singleton();
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  uStack_60 = 0;
  pcStack_58 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#32}>
               ::_M_manager;
  pcStack_50 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#32}>
               ::_M_invoke;
  StringName::StringName((StringName *)local_a8,"line_spacing",false);
  StringName::StringName((StringName *)&local_b0,"line_spacing",false);
  local_c0 = 0;
  String::parse_latin1((String *)&local_c0,"Button");
  StringName::StringName((StringName *)&local_b8,(String *)&local_c0,false);
  ThemeDB::bind_class_item
            (uVar2,1,(StringName *)&local_b8,(StringName *)&local_b0,(MethodDefinition *)local_a8,
             (_Function_base *)&local_68);
  if ((StringName::configured != '\0') && (local_b8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if (StringName::configured != '\0') {
    if (local_b0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00109bbe;
    }
    if (local_a8[0] != 0) {
      StringName::unref();
    }
  }
LAB_00109bbe:
  std::_Function_base::~_Function_base((_Function_base *)&local_68);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Button::_update_theme_item_cache() */

void __thiscall Button::_update_theme_item_cache(Button *this)

{
  char cVar1;
  char cVar2;
  int iVar3;
  long in_FS_OFFSET;
  undefined4 uVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  long local_40;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  Control::_update_theme_item_cache();
  cVar1 = (**(code **)(*(long *)this + 0x340))(this);
  if (cVar1 == '\0') {
LAB_00109dc3:
    uVar6 = (**(code **)(**(long **)(this + 0xaa0) + 0x1d0))();
    *(undefined8 *)(this + 0xaf8) = uVar6;
    uVar4 = StyleBox::get_margin(*(undefined8 *)(this + 0xaa0),0);
    *(undefined4 *)(this + 0xb00) = uVar4;
    uVar4 = StyleBox::get_margin(*(undefined8 *)(this + 0xaa0),2);
    *(undefined4 *)(this + 0xb04) = uVar4;
    uVar4 = StyleBox::get_margin(*(undefined8 *)(this + 0xaa0),1);
    *(undefined4 *)(this + 0xb08) = uVar4;
    uVar4 = StyleBox::get_margin(*(undefined8 *)(this + 0xaa0),3);
  }
  else {
    local_38 = 0;
    if (_update_theme_item_cache()::{lambda()#1}::operator()()::sname == '\0') {
      iVar3 = __cxa_guard_acquire(&_update_theme_item_cache()::{lambda()#1}::operator()()::sname);
      if (iVar3 != 0) {
        _scs_create((char *)&_update_theme_item_cache()::{lambda()#1}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &_update_theme_item_cache()::{lambda()#1}::operator()()::sname,&__dso_handle);
        __cxa_guard_release(&_update_theme_item_cache()::{lambda()#1}::operator()()::sname);
      }
    }
    cVar2 = Control::has_theme_stylebox
                      ((StringName *)this,
                       (StringName *)&_update_theme_item_cache()::{lambda()#1}::operator()()::sname)
    ;
    if (cVar2 == '\0') {
      if ((StringName::configured != '\0') && (local_38 != 0)) {
        StringName::unref();
      }
      goto LAB_00109dc3;
    }
    if ((StringName::configured != '\0') && (local_38 != 0)) {
      StringName::unref();
    }
    uVar6 = (**(code **)(**(long **)(this + 0xaa8) + 0x1d0))();
    *(undefined8 *)(this + 0xaf8) = uVar6;
    uVar4 = StyleBox::get_margin(*(undefined8 *)(this + 0xaa8),0);
    *(undefined4 *)(this + 0xb00) = uVar4;
    uVar4 = StyleBox::get_margin(*(undefined8 *)(this + 0xaa8),2);
    *(undefined4 *)(this + 0xb04) = uVar4;
    uVar4 = StyleBox::get_margin(*(undefined8 *)(this + 0xaa8),1);
    *(undefined4 *)(this + 0xb08) = uVar4;
    uVar4 = StyleBox::get_margin(*(undefined8 *)(this + 0xaa8),3);
  }
  *(undefined4 *)(this + 0xb0c) = uVar4;
  local_38 = 0;
  StringName::StringName((StringName *)&local_40,"hover_pressed",false);
  cVar2 = Control::has_theme_stylebox((StringName *)this,(StringName *)&local_40);
  if (StringName::configured != '\0') {
    if (local_40 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00109e9e;
    }
    if (local_38 != 0) {
      StringName::unref();
    }
  }
LAB_00109e9e:
  if (cVar2 == '\0') {
LAB_00109f9a:
    if (cVar1 != '\0') goto LAB_0010a4ab;
LAB_00109fa3:
    uVar6 = (**(code **)(**(long **)(this + 0xab0) + 0x1d0))();
    fVar5 = (float)((ulong)uVar6 >> 0x20);
    fVar7 = *(float *)(this + 0xafc);
    if (*(float *)(this + 0xafc) <= fVar5) {
      fVar7 = fVar5;
    }
    fVar5 = *(float *)(this + 0xaf8);
    if (*(float *)(this + 0xaf8) <= (float)uVar6) {
      fVar5 = (float)uVar6;
    }
    *(ulong *)(this + 0xaf8) = CONCAT44(fVar7,fVar5);
    fVar5 = (float)StyleBox::get_margin(*(undefined8 *)(this + 0xab0),0);
    fVar7 = *(float *)(this + 0xb00);
    if (*(float *)(this + 0xb00) <= fVar5) {
      fVar7 = fVar5;
    }
    *(float *)(this + 0xb00) = fVar7;
    fVar5 = (float)StyleBox::get_margin(*(undefined8 *)(this + 0xab0),2);
    fVar7 = *(float *)(this + 0xb04);
    if (*(float *)(this + 0xb04) <= fVar5) {
      fVar7 = fVar5;
    }
    *(float *)(this + 0xb04) = fVar7;
    fVar5 = (float)StyleBox::get_margin(*(undefined8 *)(this + 0xab0),1);
    fVar7 = *(float *)(this + 0xb08);
    if (*(float *)(this + 0xb08) <= fVar5) {
      fVar7 = fVar5;
    }
    *(float *)(this + 0xb08) = fVar7;
    fVar5 = (float)StyleBox::get_margin(*(undefined8 *)(this + 0xab0),3);
    fVar7 = *(float *)(this + 0xb0c);
    if (*(float *)(this + 0xb0c) <= fVar5) {
      fVar7 = fVar5;
    }
    *(float *)(this + 0xb0c) = fVar7;
    if (cVar1 != '\0') goto LAB_0010a5e3;
LAB_0010a096:
    uVar6 = (**(code **)(**(long **)(this + 0xac0) + 0x1d0))();
    fVar5 = (float)((ulong)uVar6 >> 0x20);
    fVar7 = *(float *)(this + 0xafc);
    if (*(float *)(this + 0xafc) <= fVar5) {
      fVar7 = fVar5;
    }
    fVar5 = *(float *)(this + 0xaf8);
    if (*(float *)(this + 0xaf8) <= (float)uVar6) {
      fVar5 = (float)uVar6;
    }
    *(ulong *)(this + 0xaf8) = CONCAT44(fVar7,fVar5);
    fVar5 = (float)StyleBox::get_margin(*(undefined8 *)(this + 0xac0),0);
    fVar7 = *(float *)(this + 0xb00);
    if (*(float *)(this + 0xb00) <= fVar5) {
      fVar7 = fVar5;
    }
    *(float *)(this + 0xb00) = fVar7;
    fVar5 = (float)StyleBox::get_margin(*(undefined8 *)(this + 0xac0),2);
    fVar7 = *(float *)(this + 0xb04);
    if (*(float *)(this + 0xb04) <= fVar5) {
      fVar7 = fVar5;
    }
    *(float *)(this + 0xb04) = fVar7;
    fVar5 = (float)StyleBox::get_margin(*(undefined8 *)(this + 0xac0),1);
    fVar7 = *(float *)(this + 0xb08);
    if (*(float *)(this + 0xb08) <= fVar5) {
      fVar7 = fVar5;
    }
    *(float *)(this + 0xb08) = fVar7;
    fVar5 = (float)StyleBox::get_margin(*(undefined8 *)(this + 0xac0),3);
    fVar7 = *(float *)(this + 0xb0c);
    if (*(float *)(this + 0xb0c) <= fVar5) {
      fVar7 = fVar5;
    }
    *(float *)(this + 0xb0c) = fVar7;
    if (cVar1 != '\0') goto LAB_0010a71b;
  }
  else {
    if (cVar1 == '\0') {
LAB_00109eb0:
      uVar6 = (**(code **)(**(long **)(this + 0xad0) + 0x1d0))();
      fVar5 = (float)((ulong)uVar6 >> 0x20);
      fVar7 = *(float *)(this + 0xafc);
      if (*(float *)(this + 0xafc) <= fVar5) {
        fVar7 = fVar5;
      }
      fVar5 = *(float *)(this + 0xaf8);
      if (*(float *)(this + 0xaf8) <= (float)uVar6) {
        fVar5 = (float)uVar6;
      }
      *(ulong *)(this + 0xaf8) = CONCAT44(fVar7,fVar5);
      fVar5 = (float)StyleBox::get_margin(*(undefined8 *)(this + 0xad0),0);
      fVar7 = *(float *)(this + 0xb00);
      if (*(float *)(this + 0xb00) <= fVar5) {
        fVar7 = fVar5;
      }
      *(float *)(this + 0xb00) = fVar7;
      fVar5 = (float)StyleBox::get_margin(*(undefined8 *)(this + 0xad0),2);
      fVar7 = *(float *)(this + 0xb04);
      if (*(float *)(this + 0xb04) <= fVar5) {
        fVar7 = fVar5;
      }
      *(float *)(this + 0xb04) = fVar7;
      fVar5 = (float)StyleBox::get_margin(*(undefined8 *)(this + 0xad0),1);
      fVar7 = *(float *)(this + 0xb08);
      if (*(float *)(this + 0xb08) <= fVar5) {
        fVar7 = fVar5;
      }
      *(float *)(this + 0xb08) = fVar7;
      fVar5 = (float)StyleBox::get_margin(*(undefined8 *)(this + 0xad0),3);
      fVar7 = *(float *)(this + 0xb0c);
      if (*(float *)(this + 0xb0c) <= fVar5) {
        fVar7 = fVar5;
      }
      *(float *)(this + 0xb0c) = fVar7;
      goto LAB_00109f9a;
    }
    local_38 = 0;
    if (_update_theme_item_cache()::{lambda()#2}::operator()()::sname == '\0') {
      iVar3 = __cxa_guard_acquire(&_update_theme_item_cache()::{lambda()#2}::operator()()::sname);
      if (iVar3 != 0) {
        _scs_create((char *)&_update_theme_item_cache()::{lambda()#2}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &_update_theme_item_cache()::{lambda()#2}::operator()()::sname,&__dso_handle);
        __cxa_guard_release(&_update_theme_item_cache()::{lambda()#2}::operator()()::sname);
      }
    }
    cVar2 = Control::has_theme_stylebox
                      ((StringName *)this,
                       (StringName *)&_update_theme_item_cache()::{lambda()#2}::operator()()::sname)
    ;
    if (cVar2 == '\0') {
      if ((StringName::configured != '\0') && (local_38 != 0)) {
        StringName::unref();
      }
      goto LAB_00109eb0;
    }
    if ((StringName::configured != '\0') && (local_38 != 0)) {
      StringName::unref();
    }
    uVar6 = (**(code **)(**(long **)(this + 0xad8) + 0x1d0))();
    fVar5 = (float)((ulong)uVar6 >> 0x20);
    fVar7 = *(float *)(this + 0xafc);
    if (*(float *)(this + 0xafc) <= fVar5) {
      fVar7 = fVar5;
    }
    fVar5 = *(float *)(this + 0xaf8);
    if (*(float *)(this + 0xaf8) <= (float)uVar6) {
      fVar5 = (float)uVar6;
    }
    *(ulong *)(this + 0xaf8) = CONCAT44(fVar7,fVar5);
    fVar5 = (float)StyleBox::get_margin(*(undefined8 *)(this + 0xad8),0);
    fVar7 = *(float *)(this + 0xb00);
    if (*(float *)(this + 0xb00) <= fVar5) {
      fVar7 = fVar5;
    }
    *(float *)(this + 0xb00) = fVar7;
    fVar5 = (float)StyleBox::get_margin(*(undefined8 *)(this + 0xad8),2);
    fVar7 = *(float *)(this + 0xb04);
    if (*(float *)(this + 0xb04) <= fVar5) {
      fVar7 = fVar5;
    }
    *(float *)(this + 0xb04) = fVar7;
    fVar5 = (float)StyleBox::get_margin(*(undefined8 *)(this + 0xad8),1);
    fVar7 = *(float *)(this + 0xb08);
    if (*(float *)(this + 0xb08) <= fVar5) {
      fVar7 = fVar5;
    }
    *(float *)(this + 0xb08) = fVar7;
    fVar5 = (float)StyleBox::get_margin(*(undefined8 *)(this + 0xad8),3);
    fVar7 = *(float *)(this + 0xb0c);
    if (*(float *)(this + 0xb0c) <= fVar5) {
      fVar7 = fVar5;
    }
    *(float *)(this + 0xb0c) = fVar7;
LAB_0010a4ab:
    local_38 = 0;
    if (_update_theme_item_cache()::{lambda()#3}::operator()()::sname == '\0') {
      iVar3 = __cxa_guard_acquire(&_update_theme_item_cache()::{lambda()#3}::operator()()::sname);
      if (iVar3 != 0) {
        _scs_create((char *)&_update_theme_item_cache()::{lambda()#3}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &_update_theme_item_cache()::{lambda()#3}::operator()()::sname,&__dso_handle);
        __cxa_guard_release(&_update_theme_item_cache()::{lambda()#3}::operator()()::sname);
      }
    }
    cVar2 = Control::has_theme_stylebox
                      ((StringName *)this,
                       (StringName *)&_update_theme_item_cache()::{lambda()#3}::operator()()::sname)
    ;
    if (cVar2 == '\0') {
      if ((StringName::configured != '\0') && (local_38 != 0)) {
        StringName::unref();
      }
      goto LAB_00109fa3;
    }
    if ((StringName::configured != '\0') && (local_38 != 0)) {
      StringName::unref();
    }
    uVar6 = (**(code **)(**(long **)(this + 0xab8) + 0x1d0))();
    fVar5 = (float)((ulong)uVar6 >> 0x20);
    fVar7 = *(float *)(this + 0xafc);
    if (*(float *)(this + 0xafc) <= fVar5) {
      fVar7 = fVar5;
    }
    fVar5 = *(float *)(this + 0xaf8);
    if (*(float *)(this + 0xaf8) <= (float)uVar6) {
      fVar5 = (float)uVar6;
    }
    *(ulong *)(this + 0xaf8) = CONCAT44(fVar7,fVar5);
    fVar5 = (float)StyleBox::get_margin(*(undefined8 *)(this + 0xab8),0);
    fVar7 = *(float *)(this + 0xb00);
    if (*(float *)(this + 0xb00) <= fVar5) {
      fVar7 = fVar5;
    }
    *(float *)(this + 0xb00) = fVar7;
    fVar5 = (float)StyleBox::get_margin(*(undefined8 *)(this + 0xab8),2);
    fVar7 = *(float *)(this + 0xb04);
    if (*(float *)(this + 0xb04) <= fVar5) {
      fVar7 = fVar5;
    }
    *(float *)(this + 0xb04) = fVar7;
    fVar5 = (float)StyleBox::get_margin(*(undefined8 *)(this + 0xab8),1);
    fVar7 = *(float *)(this + 0xb08);
    if (*(float *)(this + 0xb08) <= fVar5) {
      fVar7 = fVar5;
    }
    *(float *)(this + 0xb08) = fVar7;
    fVar5 = (float)StyleBox::get_margin(*(undefined8 *)(this + 0xab8),3);
    fVar7 = *(float *)(this + 0xb0c);
    if (*(float *)(this + 0xb0c) <= fVar5) {
      fVar7 = fVar5;
    }
    *(float *)(this + 0xb0c) = fVar7;
LAB_0010a5e3:
    local_38 = 0;
    if (_update_theme_item_cache()::{lambda()#4}::operator()()::sname == '\0') {
      iVar3 = __cxa_guard_acquire(&_update_theme_item_cache()::{lambda()#4}::operator()()::sname);
      if (iVar3 != 0) {
        _scs_create((char *)&_update_theme_item_cache()::{lambda()#4}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &_update_theme_item_cache()::{lambda()#4}::operator()()::sname,&__dso_handle);
        __cxa_guard_release(&_update_theme_item_cache()::{lambda()#4}::operator()()::sname);
      }
    }
    cVar2 = Control::has_theme_stylebox
                      ((StringName *)this,
                       (StringName *)&_update_theme_item_cache()::{lambda()#4}::operator()()::sname)
    ;
    if (cVar2 == '\0') {
      if ((StringName::configured != '\0') && (local_38 != 0)) {
        StringName::unref();
      }
      goto LAB_0010a096;
    }
    if ((StringName::configured != '\0') && (local_38 != 0)) {
      StringName::unref();
    }
    uVar6 = (**(code **)(**(long **)(this + 0xac8) + 0x1d0))();
    fVar5 = (float)((ulong)uVar6 >> 0x20);
    fVar7 = *(float *)(this + 0xafc);
    if (*(float *)(this + 0xafc) <= fVar5) {
      fVar7 = fVar5;
    }
    fVar5 = *(float *)(this + 0xaf8);
    if (*(float *)(this + 0xaf8) <= (float)uVar6) {
      fVar5 = (float)uVar6;
    }
    *(ulong *)(this + 0xaf8) = CONCAT44(fVar7,fVar5);
    fVar5 = (float)StyleBox::get_margin(*(undefined8 *)(this + 0xac8),0);
    fVar7 = *(float *)(this + 0xb00);
    if (*(float *)(this + 0xb00) <= fVar5) {
      fVar7 = fVar5;
    }
    *(float *)(this + 0xb00) = fVar7;
    fVar5 = (float)StyleBox::get_margin(*(undefined8 *)(this + 0xac8),2);
    fVar7 = *(float *)(this + 0xb04);
    if (*(float *)(this + 0xb04) <= fVar5) {
      fVar7 = fVar5;
    }
    *(float *)(this + 0xb04) = fVar7;
    fVar5 = (float)StyleBox::get_margin(*(undefined8 *)(this + 0xac8),1);
    fVar7 = *(float *)(this + 0xb08);
    if (*(float *)(this + 0xb08) <= fVar5) {
      fVar7 = fVar5;
    }
    *(float *)(this + 0xb08) = fVar7;
    fVar5 = (float)StyleBox::get_margin(*(undefined8 *)(this + 0xac8),3);
    fVar7 = *(float *)(this + 0xb0c);
    if (*(float *)(this + 0xb0c) <= fVar5) {
      fVar7 = fVar5;
    }
    *(float *)(this + 0xb0c) = fVar7;
LAB_0010a71b:
    local_38 = 0;
    if (_update_theme_item_cache()::{lambda()#5}::operator()()::sname == '\0') {
      iVar3 = __cxa_guard_acquire(&_update_theme_item_cache()::{lambda()#5}::operator()()::sname);
      if (iVar3 != 0) {
        _scs_create((char *)&_update_theme_item_cache()::{lambda()#5}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &_update_theme_item_cache()::{lambda()#5}::operator()()::sname,&__dso_handle);
        __cxa_guard_release(&_update_theme_item_cache()::{lambda()#5}::operator()()::sname);
      }
    }
    cVar1 = Control::has_theme_stylebox
                      ((StringName *)this,
                       (StringName *)&_update_theme_item_cache()::{lambda()#5}::operator()()::sname)
    ;
    if (cVar1 != '\0') {
      if ((StringName::configured != '\0') && (local_38 != 0)) {
        StringName::unref();
      }
      uVar6 = (**(code **)(**(long **)(this + 0xae8) + 0x1d0))();
      fVar5 = (float)((ulong)uVar6 >> 0x20);
      fVar7 = *(float *)(this + 0xafc);
      if (*(float *)(this + 0xafc) <= fVar5) {
        fVar7 = fVar5;
      }
      fVar5 = *(float *)(this + 0xaf8);
      if (*(float *)(this + 0xaf8) <= (float)uVar6) {
        fVar5 = (float)uVar6;
      }
      *(ulong *)(this + 0xaf8) = CONCAT44(fVar7,fVar5);
      fVar5 = (float)StyleBox::get_margin(*(undefined8 *)(this + 0xae8),0);
      fVar7 = *(float *)(this + 0xb00);
      if (*(float *)(this + 0xb00) <= fVar5) {
        fVar7 = fVar5;
      }
      *(float *)(this + 0xb00) = fVar7;
      fVar5 = (float)StyleBox::get_margin(*(undefined8 *)(this + 0xae8),2);
      fVar7 = *(float *)(this + 0xb04);
      if (*(float *)(this + 0xb04) <= fVar5) {
        fVar7 = fVar5;
      }
      *(float *)(this + 0xb04) = fVar7;
      fVar5 = (float)StyleBox::get_margin(*(undefined8 *)(this + 0xae8),1);
      uVar6 = *(undefined8 *)(this + 0xae8);
      fVar7 = *(float *)(this + 0xb08);
      if (*(float *)(this + 0xb08) <= fVar5) {
        fVar7 = fVar5;
      }
      *(float *)(this + 0xb08) = fVar7;
      goto LAB_0010a252;
    }
    if ((StringName::configured != '\0') && (local_38 != 0)) {
      StringName::unref();
    }
  }
  uVar6 = (**(code **)(**(long **)(this + 0xae0) + 0x1d0))();
  fVar5 = (float)((ulong)uVar6 >> 0x20);
  fVar7 = *(float *)(this + 0xafc);
  if (*(float *)(this + 0xafc) <= fVar5) {
    fVar7 = fVar5;
  }
  fVar5 = *(float *)(this + 0xaf8);
  if (*(float *)(this + 0xaf8) <= (float)uVar6) {
    fVar5 = (float)uVar6;
  }
  *(ulong *)(this + 0xaf8) = CONCAT44(fVar7,fVar5);
  fVar5 = (float)StyleBox::get_margin(*(undefined8 *)(this + 0xae0),0);
  fVar7 = *(float *)(this + 0xb00);
  if (*(float *)(this + 0xb00) <= fVar5) {
    fVar7 = fVar5;
  }
  *(float *)(this + 0xb00) = fVar7;
  fVar5 = (float)StyleBox::get_margin(*(undefined8 *)(this + 0xae0),2);
  fVar7 = *(float *)(this + 0xb04);
  if (*(float *)(this + 0xb04) <= fVar5) {
    fVar7 = fVar5;
  }
  *(float *)(this + 0xb04) = fVar7;
  fVar5 = (float)StyleBox::get_margin(*(undefined8 *)(this + 0xae0),1);
  uVar6 = *(undefined8 *)(this + 0xae0);
  fVar7 = *(float *)(this + 0xb08);
  if (*(float *)(this + 0xb08) <= fVar5) {
    fVar7 = fVar5;
  }
  *(float *)(this + 0xb08) = fVar7;
LAB_0010a252:
  fVar5 = (float)StyleBox::get_margin(uVar6,3);
  fVar7 = *(float *)(this + 0xb0c);
  if (*(float *)(this + 0xb0c) <= fVar5) {
    fVar7 = fVar5;
  }
  *(float *)(this + 0xb0c) = fVar7;
  fVar5 = *(float *)(this + 0xafc);
  if (*(float *)(this + 0xafc) <= fVar7 + *(float *)(this + 0xb08)) {
    fVar5 = fVar7 + *(float *)(this + 0xb08);
  }
  fVar7 = *(float *)(this + 0xaf8);
  if (*(float *)(this + 0xaf8) <= *(float *)(this + 0xb00) + *(float *)(this + 0xb04)) {
    fVar7 = *(float *)(this + 0xb00) + *(float *)(this + 0xb04);
  }
  *(ulong *)(this + 0xaf8) = CONCAT44(fVar5,fVar7);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
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



/* Button::is_class_ptr(void*) const */

uint Button::is_class_ptr(void *param_1)

{
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  return (uint)CONCAT71(0x11ac,in_RSI == &BaseButton::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x11ab,in_RSI == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x11ac,in_RSI == &Control::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x11ac,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x11ac,in_RSI == &Node::get_class_ptr_static()::ptr) |
         CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
}



/* CallableCustomMethodPointer<Button, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Button,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Button,void> *this)

{
  return;
}



/* MethodBindTRC<VerticalAlignment>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<VerticalAlignment>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<VerticalAlignment>::get_argument_meta(int) const */

undefined8 MethodBindTRC<VerticalAlignment>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<VerticalAlignment>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<VerticalAlignment>::_gen_argument_type(MethodBindT<VerticalAlignment> *this,int param_1)

{
  return (param_1 == 0) * '\x02';
}



/* MethodBindT<VerticalAlignment>::get_argument_meta(int) const */

undefined8 MethodBindT<VerticalAlignment>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<HorizontalAlignment>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<HorizontalAlignment>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<HorizontalAlignment>::get_argument_meta(int) const */

undefined8 MethodBindTRC<HorizontalAlignment>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<HorizontalAlignment>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<HorizontalAlignment>::_gen_argument_type
          (MethodBindT<HorizontalAlignment> *this,int param_1)

{
  return (param_1 == 0) * '\x02';
}



/* MethodBindT<HorizontalAlignment>::get_argument_meta(int) const */

undefined8 MethodBindT<HorizontalAlignment>::get_argument_meta(int param_1)

{
  return 0;
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



/* MethodBindTRC<Ref<Texture2D>>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<Ref<Texture2D>>::_gen_argument_type(int param_1)

{
  return 0x18;
}



/* MethodBindTRC<Ref<Texture2D>>::get_argument_meta(int) const */

undefined8 MethodBindTRC<Ref<Texture2D>>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Ref<Texture2D> const&>::_gen_argument_type(int) const */

byte __thiscall
MethodBindT<Ref<Texture2D>const&>::_gen_argument_type
          (MethodBindT<Ref<Texture2D>const&> *this,int param_1)

{
  return -(param_1 == 0) & 0x18;
}



/* MethodBindT<Ref<Texture2D> const&>::get_argument_meta(int) const */

undefined8 MethodBindT<Ref<Texture2D>const&>::get_argument_meta(int param_1)

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



/* MethodBindTRC<TextServer::AutowrapMode>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<TextServer::AutowrapMode>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<TextServer::AutowrapMode>::get_argument_meta(int) const */

undefined8 MethodBindTRC<TextServer::AutowrapMode>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<TextServer::AutowrapMode>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<TextServer::AutowrapMode>::_gen_argument_type
          (MethodBindT<TextServer::AutowrapMode> *this,int param_1)

{
  return (param_1 == 0) * '\x02';
}



/* MethodBindT<TextServer::AutowrapMode>::get_argument_meta(int) const */

undefined8 MethodBindT<TextServer::AutowrapMode>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<TextServer::OverrunBehavior>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<TextServer::OverrunBehavior>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<TextServer::OverrunBehavior>::get_argument_meta(int) const */

undefined8 MethodBindTRC<TextServer::OverrunBehavior>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<TextServer::OverrunBehavior>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<TextServer::OverrunBehavior>::_gen_argument_type
          (MethodBindT<TextServer::OverrunBehavior> *this,int param_1)

{
  return (param_1 == 0) * '\x02';
}



/* MethodBindT<TextServer::OverrunBehavior>::get_argument_meta(int) const */

undefined8 MethodBindT<TextServer::OverrunBehavior>::get_argument_meta(int param_1)

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



/* CallableCustomMethodPointer<Button, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<Button,void>::get_argument_count
          (CallableCustomMethodPointer<Button,void> *this,bool *param_1)

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



/* CallableCustomMethodPointer<Button, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Button,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Button,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* MethodBindT<TextServer::OverrunBehavior>::~MethodBindT() */

void __thiscall
MethodBindT<TextServer::OverrunBehavior>::~MethodBindT
          (MethodBindT<TextServer::OverrunBehavior> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011a6c0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<TextServer::OverrunBehavior>::~MethodBindT() */

void __thiscall
MethodBindT<TextServer::OverrunBehavior>::~MethodBindT
          (MethodBindT<TextServer::OverrunBehavior> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011a6c0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<TextServer::OverrunBehavior>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<TextServer::OverrunBehavior>::~MethodBindTRC
          (MethodBindTRC<TextServer::OverrunBehavior> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011a720;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<TextServer::OverrunBehavior>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<TextServer::OverrunBehavior>::~MethodBindTRC
          (MethodBindTRC<TextServer::OverrunBehavior> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011a720;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<TextServer::AutowrapMode>::~MethodBindT() */

void __thiscall
MethodBindT<TextServer::AutowrapMode>::~MethodBindT(MethodBindT<TextServer::AutowrapMode> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011a780;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<TextServer::AutowrapMode>::~MethodBindT() */

void __thiscall
MethodBindT<TextServer::AutowrapMode>::~MethodBindT(MethodBindT<TextServer::AutowrapMode> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011a780;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<TextServer::AutowrapMode>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<TextServer::AutowrapMode>::~MethodBindTRC
          (MethodBindTRC<TextServer::AutowrapMode> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011a7e0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<TextServer::AutowrapMode>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<TextServer::AutowrapMode>::~MethodBindTRC
          (MethodBindTRC<TextServer::AutowrapMode> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011a7e0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Control::TextDirection>::~MethodBindT() */

void __thiscall
MethodBindT<Control::TextDirection>::~MethodBindT(MethodBindT<Control::TextDirection> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011a840;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Control::TextDirection>::~MethodBindT() */

void __thiscall
MethodBindT<Control::TextDirection>::~MethodBindT(MethodBindT<Control::TextDirection> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011a840;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Control::TextDirection>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Control::TextDirection>::~MethodBindTRC(MethodBindTRC<Control::TextDirection> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011a8a0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Control::TextDirection>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Control::TextDirection>::~MethodBindTRC(MethodBindTRC<Control::TextDirection> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011a8a0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<String const&>::~MethodBindT() */

void __thiscall MethodBindT<String_const&>::~MethodBindT(MethodBindT<String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011a600;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<String const&>::~MethodBindT() */

void __thiscall MethodBindT<String_const&>::~MethodBindT(MethodBindT<String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011a600;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<String>::~MethodBindTRC() */

void __thiscall MethodBindTRC<String>::~MethodBindTRC(MethodBindTRC<String> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011a660;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<String>::~MethodBindTRC() */

void __thiscall MethodBindTRC<String>::~MethodBindTRC(MethodBindTRC<String> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011a660;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Ref<Texture2D> const&>::~MethodBindT() */

void __thiscall
MethodBindT<Ref<Texture2D>const&>::~MethodBindT(MethodBindT<Ref<Texture2D>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011a900;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Ref<Texture2D> const&>::~MethodBindT() */

void __thiscall
MethodBindT<Ref<Texture2D>const&>::~MethodBindT(MethodBindT<Ref<Texture2D>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011a900;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Ref<Texture2D>>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Ref<Texture2D>>::~MethodBindTRC(MethodBindTRC<Ref<Texture2D>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011a960;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Ref<Texture2D>>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Ref<Texture2D>>::~MethodBindTRC(MethodBindTRC<Ref<Texture2D>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011a960;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<HorizontalAlignment>::~MethodBindT() */

void __thiscall
MethodBindT<HorizontalAlignment>::~MethodBindT(MethodBindT<HorizontalAlignment> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011aa80;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<HorizontalAlignment>::~MethodBindT() */

void __thiscall
MethodBindT<HorizontalAlignment>::~MethodBindT(MethodBindT<HorizontalAlignment> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011aa80;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<HorizontalAlignment>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<HorizontalAlignment>::~MethodBindTRC(MethodBindTRC<HorizontalAlignment> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011aae0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<HorizontalAlignment>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<HorizontalAlignment>::~MethodBindTRC(MethodBindTRC<HorizontalAlignment> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011aae0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<VerticalAlignment>::~MethodBindT() */

void __thiscall MethodBindT<VerticalAlignment>::~MethodBindT(MethodBindT<VerticalAlignment> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011ab40;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<VerticalAlignment>::~MethodBindT() */

void __thiscall MethodBindT<VerticalAlignment>::~MethodBindT(MethodBindT<VerticalAlignment> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011ab40;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<VerticalAlignment>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<VerticalAlignment>::~MethodBindTRC(MethodBindTRC<VerticalAlignment> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011aba0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<VerticalAlignment>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<VerticalAlignment>::~MethodBindTRC(MethodBindTRC<VerticalAlignment> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011aba0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<bool>::~MethodBindT() */

void __thiscall MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011a9c0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<bool>::~MethodBindT() */

void __thiscall MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011a9c0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011aa20;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011aa20;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* Button::_property_get_revertv(StringName const&, Variant&) const */

undefined8 Button::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* Button::_property_can_revertv(StringName const&) const */

undefined8 Button::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00120008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* CallableCustomMethodPointer<Button, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<Button,void>::get_object(CallableCustomMethodPointer<Button,void> *this)

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
      goto LAB_0010b67d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010b67d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010b67d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* Button::_validate_propertyv(PropertyInfo&) const */

void Button::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  if ((code *)PTR__validate_property_00120010 == CanvasItem::_validate_property) {
    return;
  }
  Control::_validate_property(param_1);
  return;
}



/* Button::_setv(StringName const&, Variant const&) */

undefined8 Button::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_00120018 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x0010b838) */
/* Button::_getv(StringName const&, Variant&) const */

undefined8 Button::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00120020 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   Button::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#18}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#18}>
     ::_M_invoke(_Any_data *param_1,Node **param_2,StringName *param_3,StringName *param_4)

{
  code *pcVar1;
  
  Control::get_theme_item();
  Variant::get_validated_object();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   Button::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#13}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#13}>
     ::_M_invoke(_Any_data *param_1,Node **param_2,StringName *param_3,StringName *param_4)

{
  code *pcVar1;
  undefined8 in_XMM1_Qa;
  
  Control::get_theme_item();
  _DAT_00000b24 = Variant::operator_cast_to_Color((Variant *)&stack0x00000000);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  _DAT_00000b2c = in_XMM1_Qa;
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   Button::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#24}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#24}>
     ::_M_invoke(_Any_data *param_1,Node **param_2,StringName *param_3,StringName *param_4)

{
  code *pcVar1;
  undefined8 in_XMM1_Qa;
  
  Control::get_theme_item();
  _DAT_00000bb8 = Variant::operator_cast_to_Color((Variant *)&stack0x00000000);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  _DAT_00000bc0 = in_XMM1_Qa;
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   Button::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#27}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#27}>
     ::_M_invoke(_Any_data *param_1,Node **param_2,StringName *param_3,StringName *param_4)

{
  code *pcVar1;
  undefined8 in_XMM1_Qa;
  
  Control::get_theme_item();
  _DAT_00000be8 = Variant::operator_cast_to_Color((Variant *)&stack0x00000000);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  _DAT_00000bf0 = in_XMM1_Qa;
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   Button::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#25}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#25}>
     ::_M_invoke(_Any_data *param_1,Node **param_2,StringName *param_3,StringName *param_4)

{
  code *pcVar1;
  undefined8 in_XMM1_Qa;
  
  Control::get_theme_item();
  _DAT_00000bc8 = Variant::operator_cast_to_Color((Variant *)&stack0x00000000);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  _DAT_00000bd0 = in_XMM1_Qa;
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   Button::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#26}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#26}>
     ::_M_invoke(_Any_data *param_1,Node **param_2,StringName *param_3,StringName *param_4)

{
  code *pcVar1;
  undefined8 in_XMM1_Qa;
  
  Control::get_theme_item();
  _DAT_00000bd8 = Variant::operator_cast_to_Color((Variant *)&stack0x00000000);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  _DAT_00000be0 = in_XMM1_Qa;
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   Button::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#16}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#16}>
     ::_M_invoke(_Any_data *param_1,Node **param_2,StringName *param_3,StringName *param_4)

{
  code *pcVar1;
  undefined8 in_XMM1_Qa;
  
  Control::get_theme_item();
  _DAT_00000b54 = Variant::operator_cast_to_Color((Variant *)&stack0x00000000);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  _DAT_00000b5c = in_XMM1_Qa;
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   Button::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#14}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#14}>
     ::_M_invoke(_Any_data *param_1,Node **param_2,StringName *param_3,StringName *param_4)

{
  code *pcVar1;
  undefined8 in_XMM1_Qa;
  
  Control::get_theme_item();
  _DAT_00000b34 = Variant::operator_cast_to_Color((Variant *)&stack0x00000000);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  _DAT_00000b3c = in_XMM1_Qa;
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   Button::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#12}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#12}>
     ::_M_invoke(_Any_data *param_1,Node **param_2,StringName *param_3,StringName *param_4)

{
  code *pcVar1;
  undefined8 in_XMM1_Qa;
  
  Control::get_theme_item();
  _DAT_00000b14 = Variant::operator_cast_to_Color((Variant *)&stack0x00000000);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  _DAT_00000b1c = in_XMM1_Qa;
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   Button::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#23}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#23}>
     ::_M_invoke(_Any_data *param_1,Node **param_2,StringName *param_3,StringName *param_4)

{
  code *pcVar1;
  undefined8 in_XMM1_Qa;
  
  Control::get_theme_item();
  _DAT_00000ba8 = Variant::operator_cast_to_Color((Variant *)&stack0x00000000);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  _DAT_00000bb0 = in_XMM1_Qa;
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   Button::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#21}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#21}>
     ::_M_invoke(_Any_data *param_1,Node **param_2,StringName *param_3,StringName *param_4)

{
  code *pcVar1;
  undefined8 in_XMM1_Qa;
  
  Control::get_theme_item();
  _DAT_00000b88 = Variant::operator_cast_to_Color((Variant *)&stack0x00000000);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  _DAT_00000b90 = in_XMM1_Qa;
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   Button::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#17}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#17}>
     ::_M_invoke(_Any_data *param_1,Node **param_2,StringName *param_3,StringName *param_4)

{
  code *pcVar1;
  undefined8 in_XMM1_Qa;
  
  Control::get_theme_item();
  _DAT_00000b64 = Variant::operator_cast_to_Color((Variant *)&stack0x00000000);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  _DAT_00000b6c = in_XMM1_Qa;
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   Button::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#22}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#22}>
     ::_M_invoke(_Any_data *param_1,Node **param_2,StringName *param_3,StringName *param_4)

{
  code *pcVar1;
  undefined8 in_XMM1_Qa;
  
  Control::get_theme_item();
  _DAT_00000b98 = Variant::operator_cast_to_Color((Variant *)&stack0x00000000);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  _DAT_00000ba0 = in_XMM1_Qa;
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   Button::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#15}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#15}>
     ::_M_invoke(_Any_data *param_1,Node **param_2,StringName *param_3,StringName *param_4)

{
  code *pcVar1;
  undefined8 in_XMM1_Qa;
  
  Control::get_theme_item();
  _DAT_00000b44 = Variant::operator_cast_to_Color((Variant *)&stack0x00000000);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  _DAT_00000b4c = in_XMM1_Qa;
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   Button::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#20}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#20}>
     ::_M_invoke(_Any_data *param_1,Node **param_2,StringName *param_3,StringName *param_4)

{
  code *pcVar1;
  
  Control::get_theme_item();
  Variant::operator_cast_to_int((Variant *)&stack0x00000000);
  _DAT_00000b84 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   Button::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#29}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#29}>
     ::_M_invoke(_Any_data *param_1,Node **param_2,StringName *param_3,StringName *param_4)

{
  code *pcVar1;
  
  Control::get_theme_item();
  Variant::operator_cast_to_int((Variant *)&stack0x00000000);
  _DAT_00000c00 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   Button::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#19}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#19}>
     ::_M_invoke(_Any_data *param_1,Node **param_2,StringName *param_3,StringName *param_4)

{
  code *pcVar1;
  
  Control::get_theme_item();
  Variant::operator_cast_to_int((Variant *)&stack0x00000000);
  _DAT_00000b80 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   Button::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#30}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#30}>
     ::_M_invoke(_Any_data *param_1,Node **param_2,StringName *param_3,StringName *param_4)

{
  code *pcVar1;
  
  Control::get_theme_item();
  Variant::operator_cast_to_int((Variant *)&stack0x00000000);
  _DAT_00000c04 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   Button::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#32}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#32}>
     ::_M_invoke(_Any_data *param_1,Node **param_2,StringName *param_3,StringName *param_4)

{
  code *pcVar1;
  
  Control::get_theme_item();
  Variant::operator_cast_to_int((Variant *)&stack0x00000000);
  _DAT_00000c08 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   Button::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#31}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#31}>
     ::_M_invoke(_Any_data *param_1,Node **param_2,StringName *param_3,StringName *param_4)

{
  code *pcVar1;
  
  Control::get_theme_item();
  Variant::operator_cast_to_bool((Variant *)&stack0x00000000);
  DAT_00000b10 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   Button::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#2}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#2}>
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
   Button::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#28}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#28}>
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
   Button::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#3}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#3}>
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
   Button::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#10}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#10}>
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
   Button::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#9}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#9}>
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
   Button::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#1}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#1}>
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
   Button::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#4}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#4}>
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
   Button::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#11}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#11}>
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
   Button::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#5}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#5}>
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
   Button::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#8}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#8}>
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
   Button::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#6}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#6}>
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
   Button::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#7}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),Button::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#7}>
     ::_M_invoke(_Any_data *param_1,Node **param_2,StringName *param_3,StringName *param_4)

{
  code *pcVar1;
  
  Control::get_theme_item();
  Variant::get_validated_object();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* Button::get_minimum_size_for_text_and_icon(String const&, Ref<Texture2D>) const [clone .cold] */

void Button::get_minimum_size_for_text_and_icon(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* Button::_notification(int) [clone .cold] */

void Button::_notification(int param_1)

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



/* Button::_get_class_namev() const */

undefined8 * Button::_get_class_namev(void)

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
LAB_0010bea3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010bea3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"Button");
      goto LAB_0010bf0e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"Button");
LAB_0010bf0e:
  return &_get_class_namev()::_class_name_static;
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



/* Button::get_class() const */

void Button::get_class(void)

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



/* MethodBindTRC<Ref<Texture2D>>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Ref<Texture2D>>::_gen_argument_type_info(int param_1)

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
  local_50 = 0;
  local_58 = 0;
  local_48 = "Texture2D";
  local_40 = 9;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 0x18;
  puVar3[6] = 0x11;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar3[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_58);
    puVar3[10] = 6;
    if (puVar3[6] != 0x11) {
      StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
      goto LAB_0010c1f0;
    }
  }
  StringName::StringName((StringName *)&local_48,(CowData<char32_t> *)(puVar3 + 8),false);
  if (*(char **)(puVar3 + 4) == local_48) {
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  else {
    StringName::unref();
    *(char **)(puVar3 + 4) = local_48;
  }
LAB_0010c1f0:
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
  local_48 = &_LC37;
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
      StringName::StringName((StringName *)&local_48,(CowData<char32_t> *)(puVar3 + 8),false);
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
      goto joined_r0x0010c40c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010c40c:
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
  local_48 = &_LC37;
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
      StringName::StringName((StringName *)&local_48,(CowData<char32_t> *)(puVar3 + 8),false);
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
      goto joined_r0x0010c58c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010c58c:
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
    StringName::StringName((StringName *)&local_48,(CowData<char32_t> *)(this + 0x20),false);
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
            if (lVar5 == 0) goto LAB_0010c85f;
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
LAB_0010c85f:
    cVar6 = String::operator==((String *)param_1,(StrRange *)&local_60);
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
    if (cVar6 != '\0') goto LAB_0010c913;
  }
  cVar6 = String::operator==((String *)param_1,"CanvasItem");
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
      cVar6 = String::operator==((String *)param_1,(StrRange *)&local_60);
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
      if (cVar6 != '\0') goto LAB_0010c913;
    }
    cVar6 = String::operator==((String *)param_1,"Node");
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
                if (lVar5 == 0) goto LAB_0010caa3;
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
LAB_0010caa3:
        cVar6 = String::operator==((String *)param_1,(StrRange *)&local_60);
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
        if (cVar6 != '\0') goto LAB_0010c913;
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = String::operator==((String *)param_1,"Object");
        return uVar7;
      }
      goto LAB_0010cb4c;
    }
  }
LAB_0010c913:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010cb4c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* std::_Function_base::~_Function_base() */

void __thiscall std::_Function_base::~_Function_base(_Function_base *this)

{
  if (*(code **)(this + 0x10) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0010cb75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this + 0x10))(this,this,3);
    return;
  }
  return;
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



/* void Ref<TextParagraph>::instantiate<>() */

void __thiscall Ref<TextParagraph>::instantiate<>(Ref<TextParagraph> *this)

{
  char cVar1;
  TextParagraph *this_00;
  Object *pOVar2;
  Object *pOVar3;
  
  this_00 = (TextParagraph *)operator_new(0x220,"");
  TextParagraph::TextParagraph(this_00);
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
    this_00 = (TextParagraph *)0x0;
    cVar1 = predelete_handler(pOVar3);
    if (cVar1 == '\0') {
      return;
    }
  }
  else {
    pOVar3 = *(Object **)this;
    pOVar2 = pOVar3;
    if (this_00 == (TextParagraph *)pOVar3) goto LAB_0010da15;
    *(TextParagraph **)this = this_00;
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *(undefined8 *)this = 0;
    }
    pOVar2 = (Object *)this_00;
    if (((pOVar3 == (Object *)0x0) || (cVar1 = RefCounted::unreference(), cVar1 == '\0')) ||
       (cVar1 = predelete_handler(pOVar3), cVar1 == '\0')) goto LAB_0010da15;
  }
  (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
  Memory::free_static(pOVar3,false);
  pOVar2 = (Object *)this_00;
  if (this_00 == (TextParagraph *)0x0) {
    return;
  }
LAB_0010da15:
  cVar1 = RefCounted::unreference();
  if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar2), cVar1 != '\0')) {
    (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
    Memory::free_static(pOVar2,false);
    return;
  }
  return;
}



/* Callable create_custom_callable_function_pointer<Button>(Button*, char const*, void
   (Button::*)()) */

Button * create_custom_callable_function_pointer<Button>
                   (Button *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC37;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_0011a570;
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



/* godot::details::enum_qualified_name_to_class_info_name(String const&) */

details * __thiscall
godot::details::enum_qualified_name_to_class_info_name(details *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long in_FS_OFFSET;
  undefined8 local_60;
  char local_58 [8];
  long *local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  String::split(local_58,SUB81(param_1,0),0x10db9d);
  if ((local_50 != (long *)0x0) && (2 < local_50[-1])) {
    local_60 = 0;
    local_48 = &_LC49;
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
        goto LAB_0010dc6a;
      }
    }
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,lVar6,lVar7,"p_index","size()","",false,true)
    ;
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  local_60 = 0;
  local_48 = &_LC49;
  local_40 = 1;
  String::parse_latin1((StrRange *)&local_60);
  String::join((Vector *)this);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
LAB_0010dc6a:
  plVar4 = local_50;
  if (local_50 != (long *)0x0) {
    LOCK();
    plVar5 = local_50 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_50 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar7 = local_50[-1];
      local_50 = (long *)0x0;
      if (lVar7 != 0) {
        lVar6 = 0;
        plVar5 = plVar4;
        do {
          if (*plVar5 != 0) {
            LOCK();
            plVar1 = (long *)(*plVar5 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar2 = *plVar5;
              *plVar5 = 0;
              Memory::free_static((void *)(lVar2 + -0x10),false);
            }
          }
          lVar6 = lVar6 + 1;
          plVar5 = plVar5 + 1;
        } while (lVar7 != lVar6);
      }
      Memory::free_static(plVar4 + -2,false);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<Button, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<Button,void>::call
          (CallableCustomMethodPointer<Button,void> *this,Variant **param_1,int param_2,
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
      goto LAB_0010e0bf;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_0010e0bf;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010e098. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_0010e181;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0010e0bf:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC61,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0010e181:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
    local_60._0_8_ = 0x16;
    local_68 = "Control::TextDirection";
    String::parse_latin1((StrRange *)&local_80);
    godot::details::enum_qualified_name_to_class_info_name(local_78,(StrRange *)&local_80);
    StringName::StringName((StringName *)&local_70,local_78,false);
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
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Button::is_class(String const&) const */

undefined8 __thiscall Button::is_class(Button *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
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
            if (lVar3 == 0) goto LAB_0010e40f;
            LOCK();
            lVar8 = *plVar1;
            bVar9 = lVar3 == lVar8;
            if (bVar9) {
              *plVar1 = lVar3 + 1;
              lVar8 = lVar3;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar8 != -1) {
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
LAB_0010e40f:
    cVar6 = String::operator==((String *)param_1,(StrRange *)&local_60);
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
    if (cVar6 != '\0') goto LAB_0010e4c3;
  }
  cVar6 = String::operator==((String *)param_1,"Button");
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
          plVar1 = (long *)(*(long *)(lVar5 + 0x10) + -0x10);
          if (*(long *)(lVar5 + 0x10) != 0) {
            do {
              lVar3 = *plVar1;
              if (lVar3 == 0) goto LAB_0010e5ab;
              LOCK();
              lVar8 = *plVar1;
              bVar9 = lVar3 == lVar8;
              if (bVar9) {
                *plVar1 = lVar3 + 1;
                lVar8 = lVar3;
              }
              UNLOCK();
            } while (!bVar9);
            if (lVar8 != -1) {
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
LAB_0010e5ab:
      cVar6 = String::operator==((String *)param_1,(StrRange *)&local_60);
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
      if (cVar6 != '\0') goto LAB_0010e4c3;
    }
    cVar6 = String::operator==((String *)param_1,"BaseButton");
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
        cVar6 = String::operator==((String *)param_1,(StrRange *)&local_60);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        if (cVar6 != '\0') goto LAB_0010e4c3;
      }
      cVar6 = String::operator==((String *)param_1,"Control");
      if (cVar6 == '\0') {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar7 = CanvasItem::is_class((CanvasItem *)this,param_1);
          return uVar7;
        }
        goto LAB_0010e6de;
      }
    }
  }
LAB_0010e4c3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010e6de:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<HorizontalAlignment>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<HorizontalAlignment>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  details local_50 [8];
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  local_48 = "HorizontalAlignment";
  local_40 = 0x13;
  String::parse_latin1((StrRange *)&local_58);
  godot::details::enum_qualified_name_to_class_info_name(local_50,(StrRange *)&local_58);
  StringName::StringName((StringName *)&local_48,local_50,false);
  *puVar3 = 2;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  puVar3[10] = 0x10006;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  local_60 = 0;
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_48);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
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



/* MethodBindTRC<VerticalAlignment>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<VerticalAlignment>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  details local_50 [8];
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  local_48 = "VerticalAlignment";
  local_40 = 0x11;
  String::parse_latin1((StrRange *)&local_58);
  godot::details::enum_qualified_name_to_class_info_name(local_50,(StrRange *)&local_58);
  StringName::StringName((StringName *)&local_48,local_50,false);
  *puVar3 = 2;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  puVar3[10] = 0x10006;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  local_60 = 0;
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_48);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
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



/* MethodBindTRC<Control::TextDirection>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Control::TextDirection>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  details local_50 [8];
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  local_48 = "Control::TextDirection";
  local_40 = 0x16;
  String::parse_latin1((StrRange *)&local_58);
  godot::details::enum_qualified_name_to_class_info_name(local_50,(StrRange *)&local_58);
  StringName::StringName((StringName *)&local_48,local_50,false);
  *puVar3 = 2;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  puVar3[10] = 0x10006;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  local_60 = 0;
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_48);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
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



/* MethodBindTRC<TextServer::OverrunBehavior>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<TextServer::OverrunBehavior>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  local_48 = "TextServer::OverrunBehavior";
  local_40 = 0x1b;
  String::parse_latin1((StrRange *)&local_58);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_50,(StrRange *)&local_58)
  ;
  StringName::StringName((StringName *)&local_48,(details *)&local_50,false);
  *puVar3 = 2;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  puVar3[10] = 0x10006;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  local_60 = 0;
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_48);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
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



/* MethodBindTRC<TextServer::AutowrapMode>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<TextServer::AutowrapMode>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  undefined8 local_60;
  undefined8 local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  local_48 = "TextServer::AutowrapMode";
  local_40 = 0x18;
  String::parse_latin1((StrRange *)&local_58);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_50,(StrRange *)&local_58)
  ;
  StringName::StringName((StringName *)&local_48,(details *)&local_50,false);
  *puVar3 = 2;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  puVar3[10] = 0x10006;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  local_60 = 0;
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_48);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
  if (in_EDX != 0) goto LAB_0010edab;
  local_78 = 0;
  local_80 = 0;
  local_68 = &_LC37;
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
LAB_0010eea0:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_0010eea0;
    StringName::StringName((StringName *)&local_70,(CowData<char32_t> *)&local_48,false);
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
LAB_0010edab:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
}



/* MethodBindT<Ref<Texture2D> const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<Ref<Texture2D>const&>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  long lVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  undefined8 local_88;
  long local_80;
  long local_78;
  long local_70;
  char *local_68;
  undefined1 local_60 [16];
  int local_50;
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
  if (in_EDX != 0) goto LAB_0010efeb;
  local_78 = 0;
  local_80 = 0;
  local_68 = "Texture2D";
  local_60._0_8_ = 9;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (char *)CONCAT44(local_68._4_4_,0x18);
  local_50 = 0x11;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_0010f185:
    local_40 = 6;
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
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 == 0x11) goto LAB_0010f185;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
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
  puVar4[6] = local_50;
  if (*(long *)(puVar4 + 8) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar4 + 8));
    lVar3 = local_48;
    local_48 = 0;
    *(long *)(puVar4 + 8) = lVar3;
  }
  puVar4[10] = local_40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
LAB_0010efeb:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar4;
}



/* MethodBindT<String const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<String_const&>::_gen_argument_type_info(int param_1)

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
  if (in_EDX != 0) goto LAB_0010f23b;
  local_78 = 0;
  local_80 = 0;
  local_68 = &_LC37;
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
LAB_0010f330:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_0010f330;
    StringName::StringName((StringName *)&local_70,(CowData<char32_t> *)&local_48,false);
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
LAB_0010f23b:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
}



/* MethodBindT<TextServer::OverrunBehavior>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<TextServer::OverrunBehavior>::_gen_argument_type_info(int param_1)

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
    local_60._0_8_ = 0x1b;
    local_68 = "TextServer::OverrunBehavior";
    String::parse_latin1((StrRange *)&local_80);
    godot::details::enum_qualified_name_to_class_info_name(local_78,(StrRange *)&local_80);
    StringName::StringName((StringName *)&local_70,local_78,false);
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
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<HorizontalAlignment>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<HorizontalAlignment>::_gen_argument_type_info(int param_1)

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
    local_60._0_8_ = 0x13;
    local_68 = "HorizontalAlignment";
    String::parse_latin1((StrRange *)&local_80);
    godot::details::enum_qualified_name_to_class_info_name(local_78,(StrRange *)&local_80);
    StringName::StringName((StringName *)&local_70,local_78,false);
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
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<VerticalAlignment>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<VerticalAlignment>::_gen_argument_type_info(int param_1)

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
    local_60._0_8_ = 0x11;
    local_68 = "VerticalAlignment";
    String::parse_latin1((StrRange *)&local_80);
    godot::details::enum_qualified_name_to_class_info_name(local_78,(StrRange *)&local_80);
    StringName::StringName((StringName *)&local_70,local_78,false);
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
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<TextServer::AutowrapMode>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<TextServer::AutowrapMode>::_gen_argument_type_info(int param_1)

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
    local_60._0_8_ = 0x18;
    local_68 = "TextServer::AutowrapMode";
    String::parse_latin1((StrRange *)&local_80);
    godot::details::enum_qualified_name_to_class_info_name(local_78,(StrRange *)&local_80);
    StringName::StringName((StringName *)&local_70,local_78,false);
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
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CanvasItem::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall CanvasItem::_get_property_listv(CanvasItem *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  CowData<char32_t> *local_b8;
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
    local_80 = 0;
    local_88 = 0;
    local_78 = "Node";
    local_70 = 4;
    String::parse_latin1((StrRange *)&local_88);
    local_78 = "Node";
    local_90 = 0;
    local_70 = 4;
    String::parse_latin1((StrRange *)&local_90);
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
               &local_80);
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    if ((StringName::configured != '\0') && (local_68 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_78,"Node",false);
    ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
    if ((StringName::configured != '\0') && (local_78 != (undefined *)0x0)) {
      StringName::unref();
    }
  }
  local_a8 = (CowData<char32_t> *)&local_70;
  local_b8 = (CowData<char32_t> *)&local_58;
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
    CowData<char32_t>::_ref(local_b8,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
      StringName::StringName((StringName *)&local_80,local_b8,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_0010fd5f;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010fd5f:
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b8);
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
  if ((StringName::configured != '\0') && (local_78 != (undefined *)0x0)) {
    StringName::unref();
  }
  if ((code *)PTR__get_property_list_00120028 != Object::_get_property_list) {
    CanvasItem::_get_property_list((List *)this);
  }
  if (param_2) {
    local_80 = 0;
    local_78 = "Node";
    local_88 = 0;
    local_70 = 4;
    String::parse_latin1((StrRange *)&local_88);
    local_78 = "Node";
    local_90 = 0;
    local_70 = 4;
    String::parse_latin1((StrRange *)&local_90);
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
               &local_80);
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
    CowData<char32_t>::_unref(local_b8);
    if ((StringName::configured != '\0') && (local_68 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref(local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_78,"Node",false);
    ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
    if ((StringName::configured != '\0') && (local_78 != (undefined *)0x0)) {
      StringName::unref();
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
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
LAB_0011029d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0011029d;
    StringName::StringName((StringName *)&local_80,(CowData<char32_t> *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x001102bf;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x001102bf:
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
  if ((code *)PTR__get_property_list_00120030 != CanvasItem::_get_property_list) {
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



/* BaseButton::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall BaseButton::_get_property_listv(BaseButton *this,List *param_1,bool param_2)

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
  local_78 = "BaseButton";
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "BaseButton";
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
LAB_0011068d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0011068d;
    StringName::StringName((StringName *)&local_80,(CowData<char32_t> *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x001106af;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x001106af:
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
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 == 0) {
LAB_00110a6d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00110a6d;
    StringName::StringName((StringName *)&local_80,(CowData<char32_t> *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00110a8f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00110a8f:
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



/* Ref<TextParagraph>::unref() */

void __thiscall Ref<TextParagraph>::unref(Ref<TextParagraph> *this)

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



/* WARNING: Removing unreachable block (ram,0x00110e90) */
/* Button::_notificationv(int, bool) */

void __thiscall Button::_notificationv(Button *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    _notification(this,param_1);
    if ((code *)PTR__notification_00120038 != Control::_notification) {
      BaseButton::_notification(iVar1);
    }
    Control::_notification(iVar1);
    CanvasItem::_notification(iVar1);
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  CanvasItem::_notification(iVar1);
  Control::_notification(iVar1);
  if ((code *)PTR__notification_00120038 != Control::_notification) {
    BaseButton::_notification(iVar1);
  }
  _notification(this,param_1);
  return;
}



/* MethodBind* create_method_bind<Button, String const&>(void (Button::*)(String const&)) */

MethodBind * create_method_bind<Button,String_const&>(_func_void_String_ptr *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_0011a600;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "Button";
  local_30 = 6;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(StrRange *)&local_40,false);
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



/* MethodBind* create_method_bind<Button, String>(String (Button::*)() const) */

MethodBind * create_method_bind<Button,String>(_func_String *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_0011a660;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "Button";
  local_30 = 6;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(StrRange *)&local_40,false);
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



/* MethodBind* create_method_bind<Button, TextServer::OverrunBehavior>(void
   (Button::*)(TextServer::OverrunBehavior)) */

MethodBind *
create_method_bind<Button,TextServer::OverrunBehavior>(_func_void_OverrunBehavior *param_1)

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
  *(_func_void_OverrunBehavior **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011a6c0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "Button";
  local_30 = 6;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(StrRange *)&local_40,false);
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



/* MethodBind* create_method_bind<Button, TextServer::OverrunBehavior>(TextServer::OverrunBehavior
   (Button::*)() const) */

MethodBind * create_method_bind<Button,TextServer::OverrunBehavior>(_func_OverrunBehavior *param_1)

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
  *(_func_OverrunBehavior **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011a720;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "Button";
  local_30 = 6;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(StrRange *)&local_40,false);
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



/* MethodBind* create_method_bind<Button, TextServer::AutowrapMode>(void
   (Button::*)(TextServer::AutowrapMode)) */

MethodBind * create_method_bind<Button,TextServer::AutowrapMode>(_func_void_AutowrapMode *param_1)

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
  *(_func_void_AutowrapMode **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011a780;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "Button";
  local_30 = 6;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(StrRange *)&local_40,false);
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



/* MethodBind* create_method_bind<Button, TextServer::AutowrapMode>(TextServer::AutowrapMode
   (Button::*)() const) */

MethodBind * create_method_bind<Button,TextServer::AutowrapMode>(_func_AutowrapMode *param_1)

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
  *(_func_AutowrapMode **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011a7e0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "Button";
  local_30 = 6;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(StrRange *)&local_40,false);
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



/* MethodBind* create_method_bind<Button, Control::TextDirection>(void
   (Button::*)(Control::TextDirection)) */

MethodBind * create_method_bind<Button,Control::TextDirection>(_func_void_TextDirection *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_0011a840;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "Button";
  local_30 = 6;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(StrRange *)&local_40,false);
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



/* MethodBind* create_method_bind<Button, Control::TextDirection>(Control::TextDirection
   (Button::*)() const) */

MethodBind * create_method_bind<Button,Control::TextDirection>(_func_TextDirection *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_0011a8a0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "Button";
  local_30 = 6;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(StrRange *)&local_40,false);
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



/* MethodBind* create_method_bind<Button, Ref<Texture2D> const&>(void (Button::*)(Ref<Texture2D>
   const&)) */

MethodBind * create_method_bind<Button,Ref<Texture2D>const&>(_func_void_Ref_ptr *param_1)

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
  *(_func_void_Ref_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011a900;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "Button";
  local_30 = 6;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(StrRange *)&local_40,false);
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



/* MethodBind* create_method_bind<Button, Ref<Texture2D>>(Ref<Texture2D> (Button::*)() const) */

MethodBind * create_method_bind<Button,Ref<Texture2D>>(_func_Ref *param_1)

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
  *(_func_Ref **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011a960;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "Button";
  local_30 = 6;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(StrRange *)&local_40,false);
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



/* MethodBind* create_method_bind<Button, bool>(void (Button::*)(bool)) */

MethodBind * create_method_bind<Button,bool>(_func_void_bool *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_0011a9c0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "Button";
  local_30 = 6;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(StrRange *)&local_40,false);
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



/* MethodBind* create_method_bind<Button, bool>(bool (Button::*)() const) */

MethodBind * create_method_bind<Button,bool>(_func_bool *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_0011aa20;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "Button";
  local_30 = 6;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(StrRange *)&local_40,false);
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



/* MethodBind* create_method_bind<Button, HorizontalAlignment>(void
   (Button::*)(HorizontalAlignment)) */

MethodBind * create_method_bind<Button,HorizontalAlignment>(_func_void_HorizontalAlignment *param_1)

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
  *(_func_void_HorizontalAlignment **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011aa80;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "Button";
  local_30 = 6;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(StrRange *)&local_40,false);
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



/* MethodBind* create_method_bind<Button, HorizontalAlignment>(HorizontalAlignment (Button::*)()
   const) */

MethodBind * create_method_bind<Button,HorizontalAlignment>(_func_HorizontalAlignment *param_1)

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
  *(_func_HorizontalAlignment **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011aae0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "Button";
  local_30 = 6;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(StrRange *)&local_40,false);
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



/* MethodBind* create_method_bind<Button, VerticalAlignment>(void (Button::*)(VerticalAlignment)) */

MethodBind * create_method_bind<Button,VerticalAlignment>(_func_void_VerticalAlignment *param_1)

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
  *(_func_void_VerticalAlignment **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011ab40;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "Button";
  local_30 = 6;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(StrRange *)&local_40,false);
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



/* MethodBind* create_method_bind<Button, VerticalAlignment>(VerticalAlignment (Button::*)() const)
    */

MethodBind * create_method_bind<Button,VerticalAlignment>(_func_VerticalAlignment *param_1)

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
  *(_func_VerticalAlignment **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011aba0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "Button";
  local_30 = 6;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(StrRange *)&local_40,false);
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



/* Button::_initialize_classv() */

void Button::_initialize_classv(void)

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
    if (BaseButton::initialize_class()::initialized == '\0') {
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
            if ((code *)PTR__bind_methods_00120050 != Node::_bind_methods) {
              Node::_bind_methods();
            }
            Node::initialize_class()::initialized = '\x01';
          }
          local_58 = "Node";
          local_68 = 0;
          local_50 = 4;
          String::parse_latin1((StrRange *)&local_68);
          StringName::StringName((StringName *)&local_60,(StrRange *)&local_68,false);
          local_58 = "CanvasItem";
          local_70 = 0;
          local_50 = 10;
          String::parse_latin1((StrRange *)&local_70);
          StringName::StringName((StringName *)&local_58,(StrRange *)&local_70,false);
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
          if ((code *)PTR__bind_compatibility_methods_00120040 !=
              Object::_bind_compatibility_methods) {
            CanvasItem::_bind_compatibility_methods();
          }
          CanvasItem::initialize_class()::initialized = '\x01';
        }
        local_68 = 0;
        local_58 = "CanvasItem";
        local_50 = 10;
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(StrRange *)&local_68,false);
        local_58 = "Control";
        local_70 = 0;
        local_50 = 7;
        String::parse_latin1((StrRange *)&local_70);
        StringName::StringName((StringName *)&local_58,(StrRange *)&local_70,false);
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
      StringName::StringName((StringName *)&local_60,(StrRange *)&local_68,false);
      local_58 = "BaseButton";
      local_70 = 0;
      local_50 = 10;
      String::parse_latin1((StrRange *)&local_70);
      StringName::StringName((StringName *)&local_58,(StrRange *)&local_70,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      if ((code *)PTR__bind_methods_00120048 != Control::_bind_methods) {
        BaseButton::_bind_methods();
      }
      BaseButton::initialize_class()::initialized = '\x01';
    }
    local_58 = "BaseButton";
    local_68 = 0;
    local_50 = 10;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(StrRange *)&local_68,false);
    local_58 = "Button";
    local_70 = 0;
    local_50 = 6;
    String::parse_latin1((StrRange *)&local_70);
    StringName::StringName((StringName *)&local_58,(StrRange *)&local_70,false);
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



/* WARNING: Removing unreachable block (ram,0x00112868) */
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



/* MethodBindTRC<VerticalAlignment>::call(Object*, Variant const**, int, Callable::CallError&) const
    */

Object * MethodBindTRC<VerticalAlignment>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  int iVar2;
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
      _err_print_error(&_LC61,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00112be0;
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
      iVar2 = (*(code *)pVVar3)();
      Variant::Variant((Variant *)local_48,iVar2);
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
LAB_00112be0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<VerticalAlignment>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<VerticalAlignment>::validated_call
          (MethodBindTRC<VerticalAlignment> *this,Object *param_1,Variant **param_2,Variant *param_3
          )

{
  uint uVar1;
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
      goto LAB_00112e84;
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
  *(ulong *)(param_3 + 8) = (ulong)uVar1;
LAB_00112e84:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<VerticalAlignment>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<VerticalAlignment>::ptrcall
          (MethodBindTRC<VerticalAlignment> *this,Object *param_1,void **param_2,void *param_3)

{
  uint uVar1;
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
      goto LAB_00113043;
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
  *(ulong *)param_3 = (ulong)uVar1;
LAB_00113043:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<VerticalAlignment>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<VerticalAlignment>::validated_call
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
      goto LAB_00113381;
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
                    /* WARNING: Could not recover jumptable at 0x0011320c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_00113381:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<VerticalAlignment>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<VerticalAlignment>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_00113561;
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
                    /* WARNING: Could not recover jumptable at 0x001133eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_00113561:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<HorizontalAlignment>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindTRC<HorizontalAlignment>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  int iVar2;
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
      _err_print_error(&_LC61,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00113630;
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
      iVar2 = (*(code *)pVVar3)();
      Variant::Variant((Variant *)local_48,iVar2);
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
LAB_00113630:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<HorizontalAlignment>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<HorizontalAlignment>::validated_call
          (MethodBindTRC<HorizontalAlignment> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  uint uVar1;
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
      goto LAB_00113844;
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
  *(ulong *)(param_3 + 8) = (ulong)uVar1;
LAB_00113844:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<HorizontalAlignment>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<HorizontalAlignment>::ptrcall
          (MethodBindTRC<HorizontalAlignment> *this,Object *param_1,void **param_2,void *param_3)

{
  uint uVar1;
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
      goto LAB_001139f3;
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
  *(ulong *)param_3 = (ulong)uVar1;
LAB_001139f3:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<HorizontalAlignment>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<HorizontalAlignment>::validated_call
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
      goto LAB_00113d31;
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
                    /* WARNING: Could not recover jumptable at 0x00113bbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_00113d31:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<HorizontalAlignment>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<HorizontalAlignment>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_00113f11;
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
                    /* WARNING: Could not recover jumptable at 0x00113d9b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_00113f11:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
      _err_print_error(&_LC61,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00113fe0;
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
LAB_00113fe0:
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
      goto LAB_001141f2;
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
LAB_001141f2:
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
      goto LAB_001143a1;
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
LAB_001143a1:
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
      goto LAB_001146e1;
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
                    /* WARNING: Could not recover jumptable at 0x0011456d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined1 *)(*(long *)param_3 + 8));
    return;
  }
LAB_001146e1:
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
      goto LAB_001148c9;
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
                    /* WARNING: Could not recover jumptable at 0x00114752. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3 != '\0');
    return;
  }
LAB_001148c9:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Control::TextDirection>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindTRC<Control::TextDirection>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  int iVar2;
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
      _err_print_error(&_LC61,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00114990;
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
      iVar2 = (*(code *)pVVar3)();
      Variant::Variant((Variant *)local_48,iVar2);
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
LAB_00114990:
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
  uint uVar1;
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
      goto LAB_00114ba4;
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
  *(ulong *)(param_3 + 8) = (ulong)uVar1;
LAB_00114ba4:
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
  uint uVar1;
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
      goto LAB_00114d53;
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
  *(ulong *)param_3 = (ulong)uVar1;
LAB_00114d53:
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
      goto LAB_00115091;
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
                    /* WARNING: Could not recover jumptable at 0x00114f1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_00115091:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Control::TextDirection>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Control::TextDirection>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_00115271;
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
                    /* WARNING: Could not recover jumptable at 0x001150fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_00115271:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<TextServer::AutowrapMode>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTRC<TextServer::AutowrapMode>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  int iVar2;
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
      _err_print_error(&_LC61,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00115340;
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
      iVar2 = (*(code *)pVVar3)();
      Variant::Variant((Variant *)local_48,iVar2);
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
LAB_00115340:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<TextServer::AutowrapMode>::validated_call(Object*, Variant const**, Variant*) const
    */

void __thiscall
MethodBindTRC<TextServer::AutowrapMode>::validated_call
          (MethodBindTRC<TextServer::AutowrapMode> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  uint uVar1;
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
      goto LAB_00115554;
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
  *(ulong *)(param_3 + 8) = (ulong)uVar1;
LAB_00115554:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<TextServer::AutowrapMode>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<TextServer::AutowrapMode>::ptrcall
          (MethodBindTRC<TextServer::AutowrapMode> *this,Object *param_1,void **param_2,
          void *param_3)

{
  uint uVar1;
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
      goto LAB_00115703;
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
  *(ulong *)param_3 = (ulong)uVar1;
LAB_00115703:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<TextServer::AutowrapMode>::validated_call(Object*, Variant const**, Variant*) const
    */

void MethodBindT<TextServer::AutowrapMode>::validated_call
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
      goto LAB_00115a41;
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
                    /* WARNING: Could not recover jumptable at 0x001158cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_00115a41:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<TextServer::AutowrapMode>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<TextServer::AutowrapMode>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_00115c21;
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
                    /* WARNING: Could not recover jumptable at 0x00115aab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_00115c21:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<TextServer::OverrunBehavior>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTRC<TextServer::OverrunBehavior>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  int iVar2;
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
      _err_print_error(&_LC61,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00115cf0;
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
      iVar2 = (*(code *)pVVar3)();
      Variant::Variant((Variant *)local_48,iVar2);
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
LAB_00115cf0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<TextServer::OverrunBehavior>::validated_call(Object*, Variant const**, Variant*)
   const */

void __thiscall
MethodBindTRC<TextServer::OverrunBehavior>::validated_call
          (MethodBindTRC<TextServer::OverrunBehavior> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  uint uVar1;
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
      goto LAB_00115f04;
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
  *(ulong *)(param_3 + 8) = (ulong)uVar1;
LAB_00115f04:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<TextServer::OverrunBehavior>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<TextServer::OverrunBehavior>::ptrcall
          (MethodBindTRC<TextServer::OverrunBehavior> *this,Object *param_1,void **param_2,
          void *param_3)

{
  uint uVar1;
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
      goto LAB_001160b3;
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
  *(ulong *)param_3 = (ulong)uVar1;
LAB_001160b3:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<TextServer::OverrunBehavior>::validated_call(Object*, Variant const**, Variant*)
   const */

void MethodBindT<TextServer::OverrunBehavior>::validated_call
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
      goto LAB_001163f1;
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
                    /* WARNING: Could not recover jumptable at 0x0011627c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_001163f1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<TextServer::OverrunBehavior>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<TextServer::OverrunBehavior>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_001165d1;
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
                    /* WARNING: Could not recover jumptable at 0x0011645b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_001165d1:
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
      _err_print_error(&_LC61,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_001166b0;
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
LAB_001166b0:
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
      local_48 = (Variant **)0x112a38;
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
      goto LAB_001168ec;
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
LAB_001168ec:
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
      local_48 = (void **)0x112a38;
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
      goto LAB_00116abd;
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
LAB_00116abd:
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
      goto LAB_00116df1;
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
                    /* WARNING: Could not recover jumptable at 0x00116c7d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8);
    return;
  }
LAB_00116df1:
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
      goto LAB_00116fd1;
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
                    /* WARNING: Could not recover jumptable at 0x00116e59. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3);
    return;
  }
LAB_00116fd1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<Texture2D>>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<Ref<Texture2D>>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Object *pOVar2;
  char cVar3;
  Variant *pVVar4;
  long *plVar5;
  undefined4 in_register_00000014;
  long *plVar6;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  Object *local_58;
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
    if (local_58 == (Object *)*plVar5) {
      if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = (Object *)0x112a38;
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC61,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_001170f0;
    }
    if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
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
      (*(code *)pVVar4)(&local_58);
      Variant::Variant((Variant *)local_48,local_58);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
      if (local_58 != (Object *)0x0) {
        cVar3 = RefCounted::unreference();
        pOVar2 = local_58;
        if (cVar3 != '\0') {
          cVar3 = predelete_handler(local_58);
          if (cVar3 != '\0') {
            (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
            Memory::free_static(pOVar2,false);
          }
        }
      }
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
LAB_001170f0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<Texture2D>>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Ref<Texture2D>>::ptrcall
          (MethodBindTRC<Ref<Texture2D>> *this,Object *param_1,void **param_2,void *param_3)

{
  char cVar1;
  code *pcVar2;
  Object *pOVar3;
  long *plVar4;
  Object *extraout_RDX;
  Object *pOVar5;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  Object *local_48;
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
    if (local_48 == (Object *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Object *)0x112a38;
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
      goto LAB_00117376;
    }
    param_2 = (void **)local_48;
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
      param_2 = (void **)extraout_RDX;
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    param_2 = *(void ***)(param_1 + *(long *)(this + 0x60));
    pcVar2 = *(code **)((Object *)((long)param_2 + -1) + (long)pcVar2);
  }
  (*pcVar2)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  if (local_48 == (Object *)0x0) {
                    /* WARNING: Load size is inaccurate */
    pOVar5 = *param_3;
    if (pOVar5 == (Object *)0x0) goto LAB_00117376;
    *(undefined8 *)param_3 = 0;
    goto LAB_001173b9;
  }
  pOVar3 = (Object *)__dynamic_cast(local_48,&Object::typeinfo,&RefCounted::typeinfo,0);
                    /* WARNING: Load size is inaccurate */
  pOVar5 = *param_3;
  if (pOVar5 != pOVar3) {
    *(Object **)param_3 = pOVar3;
    if (pOVar3 == (Object *)0x0) {
      if (pOVar5 != (Object *)0x0) goto LAB_001173b9;
    }
    else {
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        *(undefined8 *)param_3 = 0;
      }
      if (pOVar5 != (Object *)0x0) {
LAB_001173b9:
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(pOVar5);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
      if (local_48 == (Object *)0x0) goto LAB_00117376;
    }
  }
  cVar1 = RefCounted::unreference();
  pOVar5 = local_48;
  if (cVar1 != '\0') {
    cVar1 = predelete_handler(local_48);
    if (cVar1 != '\0') {
      (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
      Memory::free_static(pOVar5,false);
    }
  }
LAB_00117376:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<Texture2D> const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Ref<Texture2D>const&>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  Object *pOVar2;
  char cVar3;
  Object *pOVar4;
  Variant *pVVar5;
  code *pcVar6;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  Object *local_58;
  undefined8 local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar5 = param_2[0x23];
      if (pVVar5 == (Variant *)0x0) {
        pVVar5 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar5 = param_2[1] + 0x20;
    }
    if (local_58 == (Object *)*(long *)pVVar5) {
      if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = (Object *)0x112a38;
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00117678;
    }
    if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar6 = *(code **)(param_1 + 0x58);
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar6 & 1) != 0) {
    pcVar6 = *(code **)(pcVar6 + *(long *)((long)param_2 + lVar1) + -1);
  }
  Variant::Variant((Variant *)local_48,*(Object **)(*(long *)param_3 + 0x10));
  local_58 = (Object *)0x0;
  pOVar4 = (Object *)Variant::get_validated_object();
  pOVar2 = local_58;
  if (pOVar4 != local_58) {
    if (pOVar4 == (Object *)0x0) {
      if (local_58 != (Object *)0x0) {
        local_58 = (Object *)0x0;
LAB_00117636:
        cVar3 = RefCounted::unreference();
        if (cVar3 != '\0') {
          cVar3 = predelete_handler(pOVar2);
          if (cVar3 != '\0') {
            (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
            Memory::free_static(pOVar2,false);
          }
        }
      }
    }
    else {
      pOVar4 = (Object *)__dynamic_cast(pOVar4,&Object::typeinfo,&Texture2D::typeinfo,0);
      if (pOVar2 != pOVar4) {
        local_58 = pOVar4;
        if (pOVar4 != (Object *)0x0) {
          cVar3 = RefCounted::reference();
          if (cVar3 == '\0') {
            local_58 = (Object *)0x0;
          }
        }
        if (pOVar2 != (Object *)0x0) goto LAB_00117636;
      }
    }
  }
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  (*pcVar6)((long *)((long)param_2 + lVar1));
  if (local_58 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    pOVar2 = local_58;
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_58);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
LAB_00117678:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<Texture2D> const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Ref<Texture2D>const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  Object *pOVar2;
  char cVar3;
  long *plVar4;
  code *pcVar5;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  Object *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar4 = (long *)param_2[0x23];
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar4 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (Object *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Object *)0x112a38;
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
      goto LAB_0011793c;
    }
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar5 = *(code **)(param_1 + 0x58);
                    /* WARNING: Load size is inaccurate */
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar5 & 1) != 0) {
    pcVar5 = *(code **)(pcVar5 + *(long *)((long)param_2 + lVar1) + -1);
  }
  if ((*param_3 == (long *)0x0) || (local_48 = (Object *)**param_3, local_48 == (Object *)0x0)) {
LAB_00117918:
    local_48 = (Object *)0x0;
  }
  else {
    cVar3 = RefCounted::init_ref();
    if (cVar3 == '\0') goto LAB_00117918;
  }
  (*pcVar5)((long *)((long)param_2 + lVar1));
  if (local_48 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    pOVar2 = local_48;
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_48);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
LAB_0011793c:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<Texture2D> const&>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindT<Ref<Texture2D>const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  Object *pOVar5;
  char cVar6;
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
  long local_58;
  undefined8 local_50;
  Object *local_48;
  undefined8 local_40;
  long local_30;
  
  plVar11 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar11 != (long *)0x0) && (plVar11[1] != 0)) && (*(char *)(plVar11[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (plVar11[1] == 0) {
      plVar9 = (long *)plVar11[0x23];
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)(**(code **)(*plVar11 + 0x40))(plVar11);
      }
    }
    else {
      plVar9 = (long *)(plVar11[1] + 0x20);
    }
    if (local_48 == (Object *)*plVar9) {
      if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Object *)0x112a38;
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC61,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00117d20;
    }
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pVVar13 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (1 < in_R8D) {
    uVar7 = 3;
LAB_00117d15:
    *in_R9 = uVar7;
    in_R9[2] = 1;
    goto LAB_00117d20;
  }
  pVVar12 = param_2[5];
  if (pVVar12 == (Variant *)0x0) {
    if (in_R8D != 1) goto LAB_00117d70;
LAB_00117d60:
    pVVar12 = *(Variant **)param_4;
  }
  else {
    lVar2 = *(long *)(pVVar12 + -8);
    if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00117d70:
      uVar7 = 4;
      goto LAB_00117d15;
    }
    if (in_R8D == 1) goto LAB_00117d60;
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
  cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar12);
  uVar4 = _LC169;
  if (cVar6 == '\0') {
    *in_R9 = 2;
    *(undefined8 *)(in_R9 + 1) = uVar4;
  }
  local_48 = (Object *)0x0;
  pOVar8 = (Object *)Variant::get_validated_object();
  pOVar5 = local_48;
  if (pOVar8 != local_48) {
    if (pOVar8 == (Object *)0x0) {
      if (local_48 != (Object *)0x0) {
        local_48 = (Object *)0x0;
LAB_00117e8d:
        cVar6 = RefCounted::unreference();
        if (cVar6 != '\0') {
          cVar6 = predelete_handler(pOVar5);
          if (cVar6 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
    }
    else {
      pOVar8 = (Object *)__dynamic_cast(pOVar8,&Object::typeinfo,&Texture2D::typeinfo,0);
      if (pOVar5 != pOVar8) {
        local_48 = pOVar8;
        if (pOVar8 != (Object *)0x0) {
          cVar6 = RefCounted::reference();
          if (cVar6 == '\0') {
            local_48 = (Object *)0x0;
          }
        }
        if (pOVar5 != (Object *)0x0) goto LAB_00117e8d;
      }
    }
  }
  (*(code *)pVVar13)((Variant *)((long)plVar11 + (long)pVVar1));
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
LAB_00117d20:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
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
      _err_print_error(&_LC61,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001180d0;
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
      if (in_R8D != 1) goto LAB_00118120;
LAB_00118110:
      pVVar10 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar10 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00118120:
        uVar6 = 4;
        goto LAB_001180c5;
      }
      if (in_R8D == 1) goto LAB_00118110;
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
    uVar4 = _LC170;
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
LAB_001180c5:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_001180d0:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<Texture2D>>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Ref<Texture2D>>::validated_call
          (MethodBindTRC<Ref<Texture2D>> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  Object *pOVar1;
  char cVar2;
  code *pcVar3;
  long *plVar4;
  Variant **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  Object *local_50;
  Variant **local_48;
  Object *local_40;
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
      local_48 = (Variant **)0x112a38;
      local_50 = (Object *)0x0;
      local_40 = (Object *)0x35;
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
      goto LAB_00118366;
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
  (*pcVar3)(&local_50,param_1 + *(long *)(this + 0x60),param_2);
  if (local_50 == (Object *)0x0) {
    Variant::ObjData::unref();
  }
  else {
    local_48 = *(Variant ***)(local_50 + 0x60);
    local_40 = local_50;
    Variant::ObjData::ref((ObjData *)(param_3 + 8));
  }
  if (local_50 != (Object *)0x0) {
    cVar2 = RefCounted::unreference();
    pOVar1 = local_50;
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(local_50);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
LAB_00118366:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, VerticalAlignment>(__UnexistingClass*, void
   (__UnexistingClass::*)(VerticalAlignment), Variant const**, int, Callable::CallError&,
   Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,VerticalAlignment>
               (__UnexistingClass *param_1,_func_void_VerticalAlignment *param_2,Variant **param_3,
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
    goto LAB_0011860d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_00118670;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_00118670:
      uVar6 = 4;
LAB_0011860d:
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
      goto LAB_0011858b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0011858b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_VerticalAlignment **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC171;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_long(this);
                    /* WARNING: Could not recover jumptable at 0x001185e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)((char)(param_1 + (long)param_3));
  return;
}



/* MethodBindT<VerticalAlignment>::call(Object*, Variant const**, int, Callable::CallError&) const
    */

Object * MethodBindT<VerticalAlignment>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

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
      _err_print_error(&_LC61,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_001186d6;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,VerticalAlignment>
            (p_Var2,(_func_void_VerticalAlignment *)param_2[0xb],(Variant **)param_2[0xc],
             (int)param_4,in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_001186d6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, HorizontalAlignment>(__UnexistingClass*, void
   (__UnexistingClass::*)(HorizontalAlignment), Variant const**, int, Callable::CallError&,
   Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,HorizontalAlignment>
               (__UnexistingClass *param_1,_func_void_HorizontalAlignment *param_2,Variant **param_3
               ,int param_4,CallError *param_5,Vector *param_6)

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
    goto LAB_0011899d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_00118a00;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_00118a00:
      uVar6 = 4;
LAB_0011899d:
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
      goto LAB_0011891b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0011891b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_HorizontalAlignment **)
               (param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC171;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_long(this);
                    /* WARNING: Could not recover jumptable at 0x00118976. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)((char)(param_1 + (long)param_3));
  return;
}



/* MethodBindT<HorizontalAlignment>::call(Object*, Variant const**, int, Callable::CallError&) const
    */

Object * MethodBindT<HorizontalAlignment>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

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
      _err_print_error(&_LC61,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00118a66;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,HorizontalAlignment>
            (p_Var2,(_func_void_HorizontalAlignment *)param_2[0xb],(Variant **)param_2[0xc],
             (int)param_4,in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00118a66:
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
    goto LAB_00118d2d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_00118d90;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_00118d90:
      uVar6 = 4;
LAB_00118d2d:
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
      goto LAB_00118cab;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_00118cab:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_bool **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,1);
  uVar4 = _LC172;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_bool(this);
                    /* WARNING: Could not recover jumptable at 0x00118d07. Too many branches */
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
      _err_print_error(&_LC61,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00118df6;
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
LAB_00118df6:
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
    goto LAB_001190bd;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_00119120;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_00119120:
      uVar6 = 4;
LAB_001190bd:
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
      goto LAB_0011903b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0011903b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_TextDirection **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC171;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_long(this);
                    /* WARNING: Could not recover jumptable at 0x00119096. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)((char)(param_1 + (long)param_3));
  return;
}



/* MethodBindT<Control::TextDirection>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindT<Control::TextDirection>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

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
      _err_print_error(&_LC61,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00119186;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,Control::TextDirection>
            (p_Var2,(_func_void_TextDirection *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,
             in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00119186:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, TextServer::AutowrapMode>(__UnexistingClass*,
   void (__UnexistingClass::*)(TextServer::AutowrapMode), Variant const**, int,
   Callable::CallError&, Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,TextServer::AutowrapMode>
               (__UnexistingClass *param_1,_func_void_AutowrapMode *param_2,Variant **param_3,
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
    goto LAB_0011944d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_001194b0;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_001194b0:
      uVar6 = 4;
LAB_0011944d:
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
      goto LAB_001193cb;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_001193cb:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_AutowrapMode **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC171;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_long(this);
                    /* WARNING: Could not recover jumptable at 0x00119426. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)((char)(param_1 + (long)param_3));
  return;
}



/* MethodBindT<TextServer::AutowrapMode>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindT<TextServer::AutowrapMode>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

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
      _err_print_error(&_LC61,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00119516;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,TextServer::AutowrapMode>
            (p_Var2,(_func_void_AutowrapMode *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,
             in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00119516:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass,
   TextServer::OverrunBehavior>(__UnexistingClass*, void
   (__UnexistingClass::*)(TextServer::OverrunBehavior), Variant const**, int, Callable::CallError&,
   Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,TextServer::OverrunBehavior>
               (__UnexistingClass *param_1,_func_void_OverrunBehavior *param_2,Variant **param_3,
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
    goto LAB_001197dd;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_00119840;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_00119840:
      uVar6 = 4;
LAB_001197dd:
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
      goto LAB_0011975b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0011975b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_OverrunBehavior **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC171;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_long(this);
                    /* WARNING: Could not recover jumptable at 0x001197b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)((char)(param_1 + (long)param_3));
  return;
}



/* MethodBindT<TextServer::OverrunBehavior>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<TextServer::OverrunBehavior>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

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
      _err_print_error(&_LC61,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_001198a6;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,TextServer::OverrunBehavior>
            (p_Var2,(_func_void_OverrunBehavior *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4
             ,in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_001198a6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodDefinition::~MethodDefinition() */

void __thiscall MethodDefinition::~MethodDefinition(MethodDefinition *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* std::_Function_base::~_Function_base() */

void __thiscall std::_Function_base::~_Function_base(_Function_base *this)

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
/* MethodBindTRC<VerticalAlignment>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<VerticalAlignment>::~MethodBindTRC(MethodBindTRC<VerticalAlignment> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<VerticalAlignment>::~MethodBindT() */

void __thiscall MethodBindT<VerticalAlignment>::~MethodBindT(MethodBindT<VerticalAlignment> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<HorizontalAlignment>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<HorizontalAlignment>::~MethodBindTRC(MethodBindTRC<HorizontalAlignment> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<HorizontalAlignment>::~MethodBindT() */

void __thiscall
MethodBindT<HorizontalAlignment>::~MethodBindT(MethodBindT<HorizontalAlignment> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Ref<Texture2D>>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Ref<Texture2D>>::~MethodBindTRC(MethodBindTRC<Ref<Texture2D>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Ref<Texture2D> const&>::~MethodBindT() */

void __thiscall
MethodBindT<Ref<Texture2D>const&>::~MethodBindT(MethodBindT<Ref<Texture2D>const&> *this)

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
/* MethodBindTRC<TextServer::AutowrapMode>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<TextServer::AutowrapMode>::~MethodBindTRC
          (MethodBindTRC<TextServer::AutowrapMode> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<TextServer::AutowrapMode>::~MethodBindT() */

void __thiscall
MethodBindT<TextServer::AutowrapMode>::~MethodBindT(MethodBindT<TextServer::AutowrapMode> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<TextServer::OverrunBehavior>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<TextServer::OverrunBehavior>::~MethodBindTRC
          (MethodBindTRC<TextServer::OverrunBehavior> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<TextServer::OverrunBehavior>::~MethodBindT() */

void __thiscall
MethodBindT<TextServer::OverrunBehavior>::~MethodBindT
          (MethodBindT<TextServer::OverrunBehavior> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<Button, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Button,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Button,void> *this)

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



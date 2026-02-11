
/* TabContainer::get_tab_bar() const */

undefined8 __thiscall TabContainer::get_tab_bar(TabContainer *this)

{
  return *(undefined8 *)(this + 0xa00);
}



/* TabContainer::get_tabs_position() const */

undefined4 __thiscall TabContainer::get_tabs_position(TabContainer *this)

{
  return *(undefined4 *)(this + 0xa0c);
}



/* TabContainer::are_tabs_visible() const */

TabContainer __thiscall TabContainer::are_tabs_visible(TabContainer *this)

{
  return this[0xa08];
}



/* TabContainer::is_all_tabs_in_front() const */

TabContainer __thiscall TabContainer::is_all_tabs_in_front(TabContainer *this)

{
  return this[0xa09];
}



/* TabContainer::set_drag_to_rearrange_enabled(bool) */

void __thiscall TabContainer::set_drag_to_rearrange_enabled(TabContainer *this,bool param_1)

{
  this[0xa38] = (TabContainer)param_1;
  return;
}



/* TabContainer::get_drag_to_rearrange_enabled() const */

TabContainer __thiscall TabContainer::get_drag_to_rearrange_enabled(TabContainer *this)

{
  return this[0xa38];
}



/* TabContainer::get_use_hidden_tabs_for_min_size() const */

TabContainer __thiscall TabContainer::get_use_hidden_tabs_for_min_size(TabContainer *this)

{
  return this[0xa20];
}



/* TabContainer::get_allowed_size_flags_vertical() const */

TabContainer * __thiscall TabContainer::get_allowed_size_flags_vertical(TabContainer *this)

{
  *(undefined8 *)(this + 8) = 0;
  return this;
}



/* TabContainer::get_popup() const */

long __thiscall TabContainer::get_popup(TabContainer *this)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  ulong *puVar5;
  long in_FS_OFFSET;
  bool bVar6;
  
  uVar1 = *(ulong *)(this + 0xa18);
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  if (uVar1 != 0) {
    uVar4 = (uint)uVar1 & 0xffffff;
    if (uVar4 < (uint)ObjectDB::slot_max) {
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
      if ((uVar1 >> 0x18 & 0x7fffffffff) == (*puVar5 & 0x7fffffffff)) {
        uVar1 = puVar5[1];
        ObjectDB::spin_lock._0_1_ = '\0';
        if ((uVar1 != 0) &&
           (lVar3 = __dynamic_cast(uVar1,&Object::typeinfo,&Popup::typeinfo,0), lVar3 != 0))
        goto LAB_00100133;
      }
      else {
        ObjectDB::spin_lock._0_1_ = '\0';
      }
    }
    else {
      _err_print_error("get_instance","./core/object/object.h",0x418,
                       "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
    }
    _err_print_error("get_popup","scene/gui/tab_container.cpp",0x3bf,
                     "Popup assigned to TabContainer is gone!",0,0);
    *(undefined8 *)(this + 0xa18) = 0;
  }
  lVar3 = 0;
LAB_00100133:
  if (lVar2 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar3;
}



/* TabContainer::set_use_hidden_tabs_for_min_size(bool) */

void __thiscall TabContainer::set_use_hidden_tabs_for_min_size(TabContainer *this,bool param_1)

{
  if (this[0xa20] != (TabContainer)param_1) {
    this[0xa20] = (TabContainer)param_1;
    Control::update_minimum_size();
    return;
  }
  return;
}



/* TabContainer::get_tab_icon_max_width(int) const */

void TabContainer::get_tab_icon_max_width(int param_1)

{
  undefined4 in_register_0000003c;
  
  TabBar::get_tab_icon_max_width
            ((int)*(undefined8 *)(CONCAT44(in_register_0000003c,param_1) + 0xa00));
  return;
}



/* TabContainer::get_tab_count() const */

void TabContainer::get_tab_count(void)

{
  TabBar::get_tab_count();
  return;
}



/* TabContainer::get_current_tab() const */

void TabContainer::get_current_tab(void)

{
  TabBar::get_current_tab();
  return;
}



/* TabContainer::get_previous_tab() const */

void TabContainer::get_previous_tab(void)

{
  TabBar::get_previous_tab();
  return;
}



/* TabContainer::select_previous_available() */

void TabContainer::select_previous_available(void)

{
  TabBar::select_previous_available();
  return;
}



/* TabContainer::select_next_available() */

void TabContainer::select_next_available(void)

{
  TabBar::select_next_available();
  return;
}



/* TabContainer::set_deselect_enabled(bool) */

void TabContainer::set_deselect_enabled(bool param_1)

{
  undefined7 in_register_00000039;
  
  TabBar::set_deselect_enabled
            (SUB81(*(undefined8 *)(CONCAT71(in_register_00000039,param_1) + 0xa00),0));
  return;
}



/* TabContainer::get_deselect_enabled() const */

void TabContainer::get_deselect_enabled(void)

{
  TabBar::get_deselect_enabled();
  return;
}



/* TabContainer::get_tab_idx_at_point(Vector2 const&) const */

void TabContainer::get_tab_idx_at_point(Vector2 *param_1)

{
  TabBar::get_tab_idx_at_point(*(Vector2 **)(param_1 + 0xa00));
  return;
}



/* TabContainer::get_tab_alignment() const */

void TabContainer::get_tab_alignment(void)

{
  TabBar::get_tab_alignment();
  return;
}



/* TabContainer::set_tab_focus_mode(Control::FocusMode) */

void TabContainer::set_tab_focus_mode(long param_1)

{
  Control::set_focus_mode(*(undefined8 *)(param_1 + 0xa00));
  return;
}



/* TabContainer::get_tab_focus_mode() const */

void TabContainer::get_tab_focus_mode(void)

{
  Control::get_focus_mode();
  return;
}



/* TabContainer::set_clip_tabs(bool) */

void TabContainer::set_clip_tabs(bool param_1)

{
  undefined7 in_register_00000039;
  
  TabBar::set_clip_tabs(SUB81(*(undefined8 *)(CONCAT71(in_register_00000039,param_1) + 0xa00),0));
  return;
}



/* TabContainer::get_clip_tabs() const */

void TabContainer::get_clip_tabs(void)

{
  TabBar::get_clip_tabs();
  return;
}



/* TabContainer::get_tab_title(int) const */

undefined8 TabContainer::get_tab_title(int param_1)

{
  long lVar1;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  TabBar::get_tab_title(param_1);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return CONCAT44(in_register_0000003c,param_1);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TabContainer::set_tab_tooltip(int, String const&) */

void TabContainer::set_tab_tooltip(int param_1,String *param_2)

{
  undefined4 in_register_0000003c;
  
  TabBar::set_tab_tooltip
            ((int)*(undefined8 *)(CONCAT44(in_register_0000003c,param_1) + 0xa00),param_2);
  return;
}



/* TabContainer::get_tab_tooltip(int) const */

undefined8 TabContainer::get_tab_tooltip(int param_1)

{
  long lVar1;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  TabBar::get_tab_tooltip(param_1);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return CONCAT44(in_register_0000003c,param_1);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TabContainer::get_tab_icon(int) const */

undefined8 TabContainer::get_tab_icon(int param_1)

{
  long lVar1;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  TabBar::get_tab_icon(param_1);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return CONCAT44(in_register_0000003c,param_1);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TabContainer::is_tab_disabled(int) const */

void TabContainer::is_tab_disabled(int param_1)

{
  undefined4 in_register_0000003c;
  
  TabBar::is_tab_disabled((int)*(undefined8 *)(CONCAT44(in_register_0000003c,param_1) + 0xa00));
  return;
}



/* TabContainer::is_tab_hidden(int) const */

void TabContainer::is_tab_hidden(int param_1)

{
  undefined4 in_register_0000003c;
  
  TabBar::is_tab_hidden((int)*(undefined8 *)(CONCAT44(in_register_0000003c,param_1) + 0xa00));
  return;
}



/* TabContainer::set_tab_metadata(int, Variant const&) */

void TabContainer::set_tab_metadata(int param_1,Variant *param_2)

{
  undefined4 in_register_0000003c;
  
  TabBar::set_tab_metadata
            ((int)*(undefined8 *)(CONCAT44(in_register_0000003c,param_1) + 0xa00),param_2);
  return;
}



/* TabContainer::get_tab_metadata(int) const */

undefined8 TabContainer::get_tab_metadata(int param_1)

{
  long lVar1;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  TabBar::get_tab_metadata(param_1);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return CONCAT44(in_register_0000003c,param_1);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TabContainer::get_tab_button_icon(int) const */

undefined8 TabContainer::get_tab_button_icon(int param_1)

{
  long lVar1;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  TabBar::get_tab_button_icon(param_1);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return CONCAT44(in_register_0000003c,param_1);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TabContainer::set_tabs_rearrange_group(int) */

void TabContainer::set_tabs_rearrange_group(int param_1)

{
  undefined4 in_register_0000003c;
  
  TabBar::set_tabs_rearrange_group
            ((int)*(undefined8 *)(CONCAT44(in_register_0000003c,param_1) + 0xa00));
  return;
}



/* TabContainer::get_tabs_rearrange_group() const */

void TabContainer::get_tabs_rearrange_group(void)

{
  TabBar::get_tabs_rearrange_group();
  return;
}



/* TabContainer::_on_mouse_exited() */

void __thiscall TabContainer::_on_mouse_exited(TabContainer *this)

{
  if (this[0xa10] == (TabContainer)0x0) {
    return;
  }
  this[0xa10] = (TabContainer)0x0;
  CanvasItem::queue_redraw();
  return;
}



/* TabContainer::set_all_tabs_in_front(bool) */

void __thiscall TabContainer::set_all_tabs_in_front(TabContainer *this,bool param_1)

{
  if (this[0xa09] != (TabContainer)param_1) {
    this[0xa09] = (TabContainer)param_1;
    Node::remove_child((Node *)this);
    Node::add_child(this,*(undefined8 *)(this + 0xa00),0,2 - (uint)(byte)this[0xa09]);
    *(byte *)(*(long *)(this + 0xa00) + 0x2fa) = *(byte *)(*(long *)(this + 0xa00) + 0x2fa) | 2;
    return;
  }
  return;
}



/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   TabContainer::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#26}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#26}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &TabContainer::_bind_methods()::
                {lambda(Node*,StringName_const&,StringName_const&)#26}::typeinfo;
    return 0;
  }
  if (param_3 != 1) {
    return 0;
  }
  *param_1 = param_2;
  return 0;
}



/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   TabContainer::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#25}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#25}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &TabContainer::_bind_methods()::
                {lambda(Node*,StringName_const&,StringName_const&)#25}::typeinfo;
    return 0;
  }
  if (param_3 != 1) {
    return 0;
  }
  *param_1 = param_2;
  return 0;
}



/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   TabContainer::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#24}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#24}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &TabContainer::_bind_methods()::
                {lambda(Node*,StringName_const&,StringName_const&)#24}::typeinfo;
    return 0;
  }
  if (param_3 != 1) {
    return 0;
  }
  *param_1 = param_2;
  return 0;
}



/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   TabContainer::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#23}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#23}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &TabContainer::_bind_methods()::
                {lambda(Node*,StringName_const&,StringName_const&)#23}::typeinfo;
    return 0;
  }
  if (param_3 != 1) {
    return 0;
  }
  *param_1 = param_2;
  return 0;
}



/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   TabContainer::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#22}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#22}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &TabContainer::_bind_methods()::
                {lambda(Node*,StringName_const&,StringName_const&)#22}::typeinfo;
    return 0;
  }
  if (param_3 != 1) {
    return 0;
  }
  *param_1 = param_2;
  return 0;
}



/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   TabContainer::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#21}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#21}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &TabContainer::_bind_methods()::
                {lambda(Node*,StringName_const&,StringName_const&)#21}::typeinfo;
    return 0;
  }
  if (param_3 != 1) {
    return 0;
  }
  *param_1 = param_2;
  return 0;
}



/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   TabContainer::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#20}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#20}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &TabContainer::_bind_methods()::
                {lambda(Node*,StringName_const&,StringName_const&)#20}::typeinfo;
    return 0;
  }
  if (param_3 != 1) {
    return 0;
  }
  *param_1 = param_2;
  return 0;
}



/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   TabContainer::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#19}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#19}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &TabContainer::_bind_methods()::
                {lambda(Node*,StringName_const&,StringName_const&)#19}::typeinfo;
    return 0;
  }
  if (param_3 != 1) {
    return 0;
  }
  *param_1 = param_2;
  return 0;
}



/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   TabContainer::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#18}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#18}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &TabContainer::_bind_methods()::
                {lambda(Node*,StringName_const&,StringName_const&)#18}::typeinfo;
    return 0;
  }
  if (param_3 != 1) {
    return 0;
  }
  *param_1 = param_2;
  return 0;
}



/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   TabContainer::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#17}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#17}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &TabContainer::_bind_methods()::
                {lambda(Node*,StringName_const&,StringName_const&)#17}::typeinfo;
    return 0;
  }
  if (param_3 != 1) {
    return 0;
  }
  *param_1 = param_2;
  return 0;
}



/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   TabContainer::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#16}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#16}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &TabContainer::_bind_methods()::
                {lambda(Node*,StringName_const&,StringName_const&)#16}::typeinfo;
    return 0;
  }
  if (param_3 != 1) {
    return 0;
  }
  *param_1 = param_2;
  return 0;
}



/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   TabContainer::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#15}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#15}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &TabContainer::_bind_methods()::
                {lambda(Node*,StringName_const&,StringName_const&)#15}::typeinfo;
    return 0;
  }
  if (param_3 != 1) {
    return 0;
  }
  *param_1 = param_2;
  return 0;
}



/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   TabContainer::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#14}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#14}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &TabContainer::_bind_methods()::
                {lambda(Node*,StringName_const&,StringName_const&)#14}::typeinfo;
    return 0;
  }
  if (param_3 != 1) {
    return 0;
  }
  *param_1 = param_2;
  return 0;
}



/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   TabContainer::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#13}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#13}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &TabContainer::_bind_methods()::
                {lambda(Node*,StringName_const&,StringName_const&)#13}::typeinfo;
    return 0;
  }
  if (param_3 != 1) {
    return 0;
  }
  *param_1 = param_2;
  return 0;
}



/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   TabContainer::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#12}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#12}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &TabContainer::_bind_methods()::
                {lambda(Node*,StringName_const&,StringName_const&)#12}::typeinfo;
    return 0;
  }
  if (param_3 != 1) {
    return 0;
  }
  *param_1 = param_2;
  return 0;
}



/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   TabContainer::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#11}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#11}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &TabContainer::_bind_methods()::
                {lambda(Node*,StringName_const&,StringName_const&)#11}::typeinfo;
    return 0;
  }
  if (param_3 != 1) {
    return 0;
  }
  *param_1 = param_2;
  return 0;
}



/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   TabContainer::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#10}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#10}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &TabContainer::_bind_methods()::
                {lambda(Node*,StringName_const&,StringName_const&)#10}::typeinfo;
    return 0;
  }
  if (param_3 != 1) {
    return 0;
  }
  *param_1 = param_2;
  return 0;
}



/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   TabContainer::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#9}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#9}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#9}
                ::typeinfo;
    return 0;
  }
  if (param_3 != 1) {
    return 0;
  }
  *param_1 = param_2;
  return 0;
}



/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   TabContainer::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#8}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#8}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#8}
                ::typeinfo;
    return 0;
  }
  if (param_3 != 1) {
    return 0;
  }
  *param_1 = param_2;
  return 0;
}



/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   TabContainer::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#7}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#7}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#7}
                ::typeinfo;
    return 0;
  }
  if (param_3 != 1) {
    return 0;
  }
  *param_1 = param_2;
  return 0;
}



/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   TabContainer::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#6}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#6}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#6}
                ::typeinfo;
    return 0;
  }
  if (param_3 != 1) {
    return 0;
  }
  *param_1 = param_2;
  return 0;
}



/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   TabContainer::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#5}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#5}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#5}
                ::typeinfo;
    return 0;
  }
  if (param_3 != 1) {
    return 0;
  }
  *param_1 = param_2;
  return 0;
}



/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   TabContainer::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#4}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#4}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#4}
                ::typeinfo;
    return 0;
  }
  if (param_3 != 1) {
    return 0;
  }
  *param_1 = param_2;
  return 0;
}



/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   TabContainer::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#3}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#3}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#3}
                ::typeinfo;
    return 0;
  }
  if (param_3 != 1) {
    return 0;
  }
  *param_1 = param_2;
  return 0;
}



/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   TabContainer::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#2}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#2}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#2}
                ::typeinfo;
    return 0;
  }
  if (param_3 != 1) {
    return 0;
  }
  *param_1 = param_2;
  return 0;
}



/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   TabContainer::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#1}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#1}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#1}
                ::typeinfo;
    return 0;
  }
  if (param_3 != 1) {
    return 0;
  }
  *param_1 = param_2;
  return 0;
}



/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   TabContainer::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#24}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#24}>
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
  lVar4 = __dynamic_cast(*param_2,&Object::typeinfo,&TabContainer::typeinfo,0);
  Control::get_theme_item(local_48,lVar4,2,param_3,param_4);
  pOVar5 = (Object *)Variant::get_validated_object();
  pOVar1 = *(Object **)(lVar4 + 0xb30);
  if (pOVar5 == pOVar1) goto LAB_00100b20;
  if (pOVar5 == (Object *)0x0) {
    if (pOVar1 == (Object *)0x0) goto LAB_00100b20;
    *(undefined8 *)(lVar4 + 0xb30) = 0;
  }
  else {
    pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&Font::typeinfo,0);
    if (pOVar1 == pOVar5) goto LAB_00100b20;
    *(Object **)(lVar4 + 0xb30) = pOVar5;
    if (pOVar5 != (Object *)0x0) {
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        *(undefined8 *)(lVar4 + 0xb30) = 0;
      }
    }
    if (pOVar1 == (Object *)0x0) goto LAB_00100b20;
  }
  cVar3 = RefCounted::unreference();
  if (cVar3 != '\0') {
    cVar3 = predelete_handler(pOVar1);
    if (cVar3 != '\0') {
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      Memory::free_static(pOVar1,false);
    }
  }
LAB_00100b20:
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TabContainer::set_current_tab(int) */

void __thiscall TabContainer::set_current_tab(TabContainer *this,int param_1)

{
  if (((byte)this[0x2fa] & 0x40) == 0) {
    *(int *)(this + 0xa3c) = param_1;
    return;
  }
  TabBar::set_current_tab((int)*(undefined8 *)(this + 0xa00));
  return;
}



/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   TabContainer::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#12}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#12}>
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
  lVar4 = __dynamic_cast(*param_2,&Object::typeinfo,&TabContainer::typeinfo,0);
  Control::get_theme_item(local_48,lVar4,5,param_3,param_4);
  pOVar5 = (Object *)Variant::get_validated_object();
  pOVar1 = *(Object **)(lVar4 + 0xaa0);
  if (pOVar5 == pOVar1) goto LAB_00100ca0;
  if (pOVar5 == (Object *)0x0) {
    if (pOVar1 == (Object *)0x0) goto LAB_00100ca0;
    *(undefined8 *)(lVar4 + 0xaa0) = 0;
  }
  else {
    pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&StyleBox::typeinfo,0);
    if (pOVar1 == pOVar5) goto LAB_00100ca0;
    *(Object **)(lVar4 + 0xaa0) = pOVar5;
    if (pOVar5 != (Object *)0x0) {
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        *(undefined8 *)(lVar4 + 0xaa0) = 0;
      }
    }
    if (pOVar1 == (Object *)0x0) goto LAB_00100ca0;
  }
  cVar3 = RefCounted::unreference();
  if (cVar3 != '\0') {
    cVar3 = predelete_handler(pOVar1);
    if (cVar3 != '\0') {
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      Memory::free_static(pOVar1,false);
    }
  }
LAB_00100ca0:
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
   TabContainer::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#22}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#22}>
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
    _DAT_00000b10 = Variant::operator_cast_to_Color((Variant *)local_48);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    _DAT_00000b18 = in_XMM1_Qa;
    (*pcVar1)();
  }
  lVar2 = __dynamic_cast(*param_2,&Object::typeinfo,&TabContainer::typeinfo,0);
  Control::get_theme_item(local_48,lVar2,0,param_3,param_4);
  uVar3 = Variant::operator_cast_to_Color((Variant *)local_48);
  *(undefined8 *)(lVar2 + 0xb10) = uVar3;
  *(undefined8 *)(lVar2 + 0xb18) = in_XMM1_Qa;
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
   TabContainer::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#20}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#20}>
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
    _DAT_00000af0 = Variant::operator_cast_to_Color((Variant *)local_48);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    _DAT_00000af8 = in_XMM1_Qa;
    (*pcVar1)();
  }
  lVar2 = __dynamic_cast(*param_2,&Object::typeinfo,&TabContainer::typeinfo,0);
  Control::get_theme_item(local_48,lVar2,0,param_3,param_4);
  uVar3 = Variant::operator_cast_to_Color((Variant *)local_48);
  *(undefined8 *)(lVar2 + 0xaf0) = uVar3;
  *(undefined8 *)(lVar2 + 0xaf8) = in_XMM1_Qa;
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
   TabContainer::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#18}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#18}>
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
    _DAT_00000ad0 = Variant::operator_cast_to_Color((Variant *)local_48);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    _DAT_00000ad8 = in_XMM1_Qa;
    (*pcVar1)();
  }
  lVar2 = __dynamic_cast(*param_2,&Object::typeinfo,&TabContainer::typeinfo,0);
  Control::get_theme_item(local_48,lVar2,0,param_3,param_4);
  uVar3 = Variant::operator_cast_to_Color((Variant *)local_48);
  *(undefined8 *)(lVar2 + 0xad0) = uVar3;
  *(undefined8 *)(lVar2 + 0xad8) = in_XMM1_Qa;
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
   TabContainer::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#21}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#21}>
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
    _DAT_00000b00 = Variant::operator_cast_to_Color((Variant *)local_48);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    _DAT_00000b08 = in_XMM1_Qa;
    (*pcVar1)();
  }
  lVar2 = __dynamic_cast(*param_2,&Object::typeinfo,&TabContainer::typeinfo,0);
  Control::get_theme_item(local_48,lVar2,0,param_3,param_4);
  uVar3 = Variant::operator_cast_to_Color((Variant *)local_48);
  *(undefined8 *)(lVar2 + 0xb00) = uVar3;
  *(undefined8 *)(lVar2 + 0xb08) = in_XMM1_Qa;
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
   TabContainer::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#19}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#19}>
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
    _DAT_00000ae0 = Variant::operator_cast_to_Color((Variant *)local_48);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    _DAT_00000ae8 = in_XMM1_Qa;
    (*pcVar1)();
  }
  lVar2 = __dynamic_cast(*param_2,&Object::typeinfo,&TabContainer::typeinfo,0);
  Control::get_theme_item(local_48,lVar2,0,param_3,param_4);
  uVar3 = Variant::operator_cast_to_Color((Variant *)local_48);
  *(undefined8 *)(lVar2 + 0xae0) = uVar3;
  *(undefined8 *)(lVar2 + 0xae8) = in_XMM1_Qa;
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
   TabContainer::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#23}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#23}>
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
    _DAT_00000b20 = Variant::operator_cast_to_Color((Variant *)local_48);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    _DAT_00000b28 = in_XMM1_Qa;
    (*pcVar1)();
  }
  lVar2 = __dynamic_cast(*param_2,&Object::typeinfo,&TabContainer::typeinfo,0);
  Control::get_theme_item(local_48,lVar2,0,param_3,param_4);
  uVar3 = Variant::operator_cast_to_Color((Variant *)local_48);
  *(undefined8 *)(lVar2 + 0xb20) = uVar3;
  *(undefined8 *)(lVar2 + 0xb28) = in_XMM1_Qa;
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
   TabContainer::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#25}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#25}>
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
    _DAT_00000b38 = 0;
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  lVar3 = __dynamic_cast(*param_2,&Object::typeinfo,&TabContainer::typeinfo,0);
  Control::get_theme_item(local_48,lVar3,3,param_3,param_4);
  iVar2 = Variant::operator_cast_to_int((Variant *)local_48);
  *(int *)(lVar3 + 0xb38) = iVar2;
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
   TabContainer::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#7}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#7}>
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
    _DAT_00000a74 = 0;
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  lVar3 = __dynamic_cast(*param_2,&Object::typeinfo,&TabContainer::typeinfo,0);
  Control::get_theme_item(local_48,lVar3,1,param_3,param_4);
  iVar2 = Variant::operator_cast_to_int((Variant *)local_48);
  *(int *)(lVar3 + 0xa74) = iVar2;
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
   TabContainer::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#26}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#26}>
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
    _DAT_00000a78 = 0;
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  lVar3 = __dynamic_cast(*param_2,&Object::typeinfo,&TabContainer::typeinfo,0);
  Control::get_theme_item(local_48,lVar3,1,param_3,param_4);
  iVar2 = Variant::operator_cast_to_int((Variant *)local_48);
  *(int *)(lVar3 + 0xa78) = iVar2;
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
   TabContainer::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#6}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#6}>
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
    _DAT_00000a70 = 0;
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  lVar3 = __dynamic_cast(*param_2,&Object::typeinfo,&TabContainer::typeinfo,0);
  Control::get_theme_item(local_48,lVar3,1,param_3,param_4);
  iVar2 = Variant::operator_cast_to_int((Variant *)local_48);
  *(int *)(lVar3 + 0xa70) = iVar2;
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
   TabContainer::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#1}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#1}>
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
    _DAT_00000a48 = 0;
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  lVar3 = __dynamic_cast(*param_2,&Object::typeinfo,&TabContainer::typeinfo,0);
  Control::get_theme_item(local_48,lVar3,1,param_3,param_4);
  iVar2 = Variant::operator_cast_to_int((Variant *)local_48);
  *(int *)(lVar3 + 0xa48) = iVar2;
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TabContainer::_on_active_tab_rearranged(int) */

void __thiscall TabContainer::_on_active_tab_rearranged(TabContainer *this,int param_1)

{
  char cVar1;
  int iVar2;
  long in_FS_OFFSET;
  Variant *local_78 [2];
  int local_68 [6];
  undefined8 local_50;
  undefined1 local_48 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((_on_active_tab_rearranged(int)::{lambda()#1}::operator()()::sname == '\0') &&
     (iVar2 = __cxa_guard_acquire(&_on_active_tab_rearranged(int)::{lambda()#1}::operator()()::sname
                                 ), iVar2 != 0)) {
    _scs_create((char *)&_on_active_tab_rearranged(int)::{lambda()#1}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &_on_active_tab_rearranged(int)::{lambda()#1}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&_on_active_tab_rearranged(int)::{lambda()#1}::operator()()::sname);
  }
  Variant::Variant((Variant *)local_68,param_1);
  local_50 = 0;
  local_48 = (undefined1  [16])0x0;
  local_78[0] = (Variant *)local_68;
  (**(code **)(*(long *)this + 0xd0))
            (this,&_on_active_tab_rearranged(int)::{lambda()#1}::operator()()::sname,local_78,1);
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



/* TabContainer::_on_tab_hovered(int) */

void __thiscall TabContainer::_on_tab_hovered(TabContainer *this,int param_1)

{
  char cVar1;
  int iVar2;
  long in_FS_OFFSET;
  Variant *local_78 [2];
  int local_68 [6];
  undefined8 local_50;
  undefined1 local_48 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((_on_tab_hovered(int)::{lambda()#1}::operator()()::sname == '\0') &&
     (iVar2 = __cxa_guard_acquire(&_on_tab_hovered(int)::{lambda()#1}::operator()()::sname),
     iVar2 != 0)) {
    _scs_create((char *)&_on_tab_hovered(int)::{lambda()#1}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_on_tab_hovered(int)::{lambda()#1}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_on_tab_hovered(int)::{lambda()#1}::operator()()::sname);
  }
  Variant::Variant((Variant *)local_68,param_1);
  local_50 = 0;
  local_48 = (undefined1  [16])0x0;
  local_78[0] = (Variant *)local_68;
  (**(code **)(*(long *)this + 0xd0))
            (this,&_on_tab_hovered(int)::{lambda()#1}::operator()()::sname,local_78,1);
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



/* TabContainer::_on_tab_clicked(int) */

void __thiscall TabContainer::_on_tab_clicked(TabContainer *this,int param_1)

{
  char cVar1;
  int iVar2;
  long in_FS_OFFSET;
  Variant *local_78 [2];
  int local_68 [6];
  undefined8 local_50;
  undefined1 local_48 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((_on_tab_clicked(int)::{lambda()#1}::operator()()::sname == '\0') &&
     (iVar2 = __cxa_guard_acquire(&_on_tab_clicked(int)::{lambda()#1}::operator()()::sname),
     iVar2 != 0)) {
    _scs_create((char *)&_on_tab_clicked(int)::{lambda()#1}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_on_tab_clicked(int)::{lambda()#1}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_on_tab_clicked(int)::{lambda()#1}::operator()()::sname);
  }
  Variant::Variant((Variant *)local_68,param_1);
  local_50 = 0;
  local_48 = (undefined1  [16])0x0;
  local_78[0] = (Variant *)local_68;
  (**(code **)(*(long *)this + 0xd0))
            (this,&_on_tab_clicked(int)::{lambda()#1}::operator()()::sname,local_78,1);
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



/* TabContainer::_on_tab_button_pressed(int) */

void __thiscall TabContainer::_on_tab_button_pressed(TabContainer *this,int param_1)

{
  char cVar1;
  int iVar2;
  long in_FS_OFFSET;
  Variant *local_78 [2];
  int local_68 [6];
  undefined8 local_50;
  undefined1 local_48 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((_on_tab_button_pressed(int)::{lambda()#1}::operator()()::sname == '\0') &&
     (iVar2 = __cxa_guard_acquire(&_on_tab_button_pressed(int)::{lambda()#1}::operator()()::sname),
     iVar2 != 0)) {
    _scs_create((char *)&_on_tab_button_pressed(int)::{lambda()#1}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &_on_tab_button_pressed(int)::{lambda()#1}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&_on_tab_button_pressed(int)::{lambda()#1}::operator()()::sname);
  }
  Variant::Variant((Variant *)local_68,param_1);
  local_50 = 0;
  local_48 = (undefined1  [16])0x0;
  local_78[0] = (Variant *)local_68;
  (**(code **)(*(long *)this + 0xd0))
            (this,&_on_tab_button_pressed(int)::{lambda()#1}::operator()()::sname,local_78,1);
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



/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   TabContainer::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#2}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#2}>
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
  lVar4 = __dynamic_cast(*param_2,&Object::typeinfo,&TabContainer::typeinfo,0);
  Control::get_theme_item(local_48,lVar4,5,param_3,param_4);
  pOVar5 = (Object *)Variant::get_validated_object();
  pOVar1 = *(Object **)(lVar4 + 0xa50);
  if (pOVar5 == pOVar1) goto LAB_00101b20;
  if (pOVar5 == (Object *)0x0) {
    if (pOVar1 == (Object *)0x0) goto LAB_00101b20;
    *(undefined8 *)(lVar4 + 0xa50) = 0;
  }
  else {
    pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&StyleBox::typeinfo,0);
    if (pOVar1 == pOVar5) goto LAB_00101b20;
    *(Object **)(lVar4 + 0xa50) = pOVar5;
    if (pOVar5 != (Object *)0x0) {
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        *(undefined8 *)(lVar4 + 0xa50) = 0;
      }
    }
    if (pOVar1 == (Object *)0x0) goto LAB_00101b20;
  }
  cVar3 = RefCounted::unreference();
  if (cVar3 != '\0') {
    cVar3 = predelete_handler(pOVar1);
    if (cVar3 != '\0') {
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      Memory::free_static(pOVar1,false);
    }
  }
LAB_00101b20:
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
   TabContainer::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#10}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#10}>
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
  lVar4 = __dynamic_cast(*param_2,&Object::typeinfo,&TabContainer::typeinfo,0);
  Control::get_theme_item(local_48,lVar4,5,param_3,param_4);
  pOVar5 = (Object *)Variant::get_validated_object();
  pOVar1 = *(Object **)(lVar4 + 0xa90);
  if (pOVar5 == pOVar1) goto LAB_00101c70;
  if (pOVar5 == (Object *)0x0) {
    if (pOVar1 == (Object *)0x0) goto LAB_00101c70;
    *(undefined8 *)(lVar4 + 0xa90) = 0;
  }
  else {
    pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&StyleBox::typeinfo,0);
    if (pOVar1 == pOVar5) goto LAB_00101c70;
    *(Object **)(lVar4 + 0xa90) = pOVar5;
    if (pOVar5 != (Object *)0x0) {
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        *(undefined8 *)(lVar4 + 0xa90) = 0;
      }
    }
    if (pOVar1 == (Object *)0x0) goto LAB_00101c70;
  }
  cVar3 = RefCounted::unreference();
  if (cVar3 != '\0') {
    cVar3 = predelete_handler(pOVar1);
    if (cVar3 != '\0') {
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      Memory::free_static(pOVar1,false);
    }
  }
LAB_00101c70:
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
   TabContainer::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#3}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#3}>
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
  lVar4 = __dynamic_cast(*param_2,&Object::typeinfo,&TabContainer::typeinfo,0);
  Control::get_theme_item(local_48,lVar4,5,param_3,param_4);
  pOVar5 = (Object *)Variant::get_validated_object();
  pOVar1 = *(Object **)(lVar4 + 0xa58);
  if (pOVar5 == pOVar1) goto LAB_00101dc0;
  if (pOVar5 == (Object *)0x0) {
    if (pOVar1 == (Object *)0x0) goto LAB_00101dc0;
    *(undefined8 *)(lVar4 + 0xa58) = 0;
  }
  else {
    pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&StyleBox::typeinfo,0);
    if (pOVar1 == pOVar5) goto LAB_00101dc0;
    *(Object **)(lVar4 + 0xa58) = pOVar5;
    if (pOVar5 != (Object *)0x0) {
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        *(undefined8 *)(lVar4 + 0xa58) = 0;
      }
    }
    if (pOVar1 == (Object *)0x0) goto LAB_00101dc0;
  }
  cVar3 = RefCounted::unreference();
  if (cVar3 != '\0') {
    cVar3 = predelete_handler(pOVar1);
    if (cVar3 != '\0') {
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      Memory::free_static(pOVar1,false);
    }
  }
LAB_00101dc0:
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
   TabContainer::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#8}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#8}>
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
  lVar4 = __dynamic_cast(*param_2,&Object::typeinfo,&TabContainer::typeinfo,0);
  Control::get_theme_item(local_48,lVar4,5,param_3,param_4);
  pOVar5 = (Object *)Variant::get_validated_object();
  pOVar1 = *(Object **)(lVar4 + 0xa80);
  if (pOVar5 == pOVar1) goto LAB_00101f10;
  if (pOVar5 == (Object *)0x0) {
    if (pOVar1 == (Object *)0x0) goto LAB_00101f10;
    *(undefined8 *)(lVar4 + 0xa80) = 0;
  }
  else {
    pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&StyleBox::typeinfo,0);
    if (pOVar1 == pOVar5) goto LAB_00101f10;
    *(Object **)(lVar4 + 0xa80) = pOVar5;
    if (pOVar5 != (Object *)0x0) {
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        *(undefined8 *)(lVar4 + 0xa80) = 0;
      }
    }
    if (pOVar1 == (Object *)0x0) goto LAB_00101f10;
  }
  cVar3 = RefCounted::unreference();
  if (cVar3 != '\0') {
    cVar3 = predelete_handler(pOVar1);
    if (cVar3 != '\0') {
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      Memory::free_static(pOVar1,false);
    }
  }
LAB_00101f10:
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
   TabContainer::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#11}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#11}>
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
  lVar4 = __dynamic_cast(*param_2,&Object::typeinfo,&TabContainer::typeinfo,0);
  Control::get_theme_item(local_48,lVar4,5,param_3,param_4);
  pOVar5 = (Object *)Variant::get_validated_object();
  pOVar1 = *(Object **)(lVar4 + 0xa98);
  if (pOVar5 == pOVar1) goto LAB_00102060;
  if (pOVar5 == (Object *)0x0) {
    if (pOVar1 == (Object *)0x0) goto LAB_00102060;
    *(undefined8 *)(lVar4 + 0xa98) = 0;
  }
  else {
    pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&StyleBox::typeinfo,0);
    if (pOVar1 == pOVar5) goto LAB_00102060;
    *(Object **)(lVar4 + 0xa98) = pOVar5;
    if (pOVar5 != (Object *)0x0) {
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        *(undefined8 *)(lVar4 + 0xa98) = 0;
      }
    }
    if (pOVar1 == (Object *)0x0) goto LAB_00102060;
  }
  cVar3 = RefCounted::unreference();
  if (cVar3 != '\0') {
    cVar3 = predelete_handler(pOVar1);
    if (cVar3 != '\0') {
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      Memory::free_static(pOVar1,false);
    }
  }
LAB_00102060:
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
   TabContainer::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#9}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#9}>
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
  lVar4 = __dynamic_cast(*param_2,&Object::typeinfo,&TabContainer::typeinfo,0);
  Control::get_theme_item(local_48,lVar4,5,param_3,param_4);
  pOVar5 = (Object *)Variant::get_validated_object();
  pOVar1 = *(Object **)(lVar4 + 0xa88);
  if (pOVar5 == pOVar1) goto LAB_001021b0;
  if (pOVar5 == (Object *)0x0) {
    if (pOVar1 == (Object *)0x0) goto LAB_001021b0;
    *(undefined8 *)(lVar4 + 0xa88) = 0;
  }
  else {
    pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&StyleBox::typeinfo,0);
    if (pOVar1 == pOVar5) goto LAB_001021b0;
    *(Object **)(lVar4 + 0xa88) = pOVar5;
    if (pOVar5 != (Object *)0x0) {
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        *(undefined8 *)(lVar4 + 0xa88) = 0;
      }
    }
    if (pOVar1 == (Object *)0x0) goto LAB_001021b0;
  }
  cVar3 = RefCounted::unreference();
  if (cVar3 != '\0') {
    cVar3 = predelete_handler(pOVar1);
    if (cVar3 != '\0') {
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      Memory::free_static(pOVar1,false);
    }
  }
LAB_001021b0:
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
   TabContainer::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#16}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#16}>
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
  lVar4 = __dynamic_cast(*param_2,&Object::typeinfo,&TabContainer::typeinfo,0);
  Control::get_theme_item(local_48,lVar4,4,param_3,param_4);
  pOVar5 = (Object *)Variant::get_validated_object();
  pOVar1 = *(Object **)(lVar4 + 0xac0);
  if (pOVar5 == pOVar1) goto LAB_00102300;
  if (pOVar5 == (Object *)0x0) {
    if (pOVar1 == (Object *)0x0) goto LAB_00102300;
    *(undefined8 *)(lVar4 + 0xac0) = 0;
  }
  else {
    pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&Texture2D::typeinfo,0);
    if (pOVar1 == pOVar5) goto LAB_00102300;
    *(Object **)(lVar4 + 0xac0) = pOVar5;
    if (pOVar5 != (Object *)0x0) {
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        *(undefined8 *)(lVar4 + 0xac0) = 0;
      }
    }
    if (pOVar1 == (Object *)0x0) goto LAB_00102300;
  }
  cVar3 = RefCounted::unreference();
  if (cVar3 != '\0') {
    cVar3 = predelete_handler(pOVar1);
    if (cVar3 != '\0') {
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      Memory::free_static(pOVar1,false);
    }
  }
LAB_00102300:
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
   TabContainer::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#15}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#15}>
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
  lVar4 = __dynamic_cast(*param_2,&Object::typeinfo,&TabContainer::typeinfo,0);
  Control::get_theme_item(local_48,lVar4,4,param_3,param_4);
  pOVar5 = (Object *)Variant::get_validated_object();
  pOVar1 = *(Object **)(lVar4 + 0xab8);
  if (pOVar5 == pOVar1) goto LAB_00102450;
  if (pOVar5 == (Object *)0x0) {
    if (pOVar1 == (Object *)0x0) goto LAB_00102450;
    *(undefined8 *)(lVar4 + 0xab8) = 0;
  }
  else {
    pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&Texture2D::typeinfo,0);
    if (pOVar1 == pOVar5) goto LAB_00102450;
    *(Object **)(lVar4 + 0xab8) = pOVar5;
    if (pOVar5 != (Object *)0x0) {
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        *(undefined8 *)(lVar4 + 0xab8) = 0;
      }
    }
    if (pOVar1 == (Object *)0x0) goto LAB_00102450;
  }
  cVar3 = RefCounted::unreference();
  if (cVar3 != '\0') {
    cVar3 = predelete_handler(pOVar1);
    if (cVar3 != '\0') {
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      Memory::free_static(pOVar1,false);
    }
  }
LAB_00102450:
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
   TabContainer::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#13}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#13}>
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
  lVar4 = __dynamic_cast(*param_2,&Object::typeinfo,&TabContainer::typeinfo,0);
  Control::get_theme_item(local_48,lVar4,4,param_3,param_4);
  pOVar5 = (Object *)Variant::get_validated_object();
  pOVar1 = *(Object **)(lVar4 + 0xaa8);
  if (pOVar5 == pOVar1) goto LAB_001025a0;
  if (pOVar5 == (Object *)0x0) {
    if (pOVar1 == (Object *)0x0) goto LAB_001025a0;
    *(undefined8 *)(lVar4 + 0xaa8) = 0;
  }
  else {
    pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&Texture2D::typeinfo,0);
    if (pOVar1 == pOVar5) goto LAB_001025a0;
    *(Object **)(lVar4 + 0xaa8) = pOVar5;
    if (pOVar5 != (Object *)0x0) {
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        *(undefined8 *)(lVar4 + 0xaa8) = 0;
      }
    }
    if (pOVar1 == (Object *)0x0) goto LAB_001025a0;
  }
  cVar3 = RefCounted::unreference();
  if (cVar3 != '\0') {
    cVar3 = predelete_handler(pOVar1);
    if (cVar3 != '\0') {
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      Memory::free_static(pOVar1,false);
    }
  }
LAB_001025a0:
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
   TabContainer::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#17}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#17}>
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
  lVar4 = __dynamic_cast(*param_2,&Object::typeinfo,&TabContainer::typeinfo,0);
  Control::get_theme_item(local_48,lVar4,4,param_3,param_4);
  pOVar5 = (Object *)Variant::get_validated_object();
  pOVar1 = *(Object **)(lVar4 + 0xac8);
  if (pOVar5 == pOVar1) goto LAB_001026f0;
  if (pOVar5 == (Object *)0x0) {
    if (pOVar1 == (Object *)0x0) goto LAB_001026f0;
    *(undefined8 *)(lVar4 + 0xac8) = 0;
  }
  else {
    pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&Texture2D::typeinfo,0);
    if (pOVar1 == pOVar5) goto LAB_001026f0;
    *(Object **)(lVar4 + 0xac8) = pOVar5;
    if (pOVar5 != (Object *)0x0) {
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        *(undefined8 *)(lVar4 + 0xac8) = 0;
      }
    }
    if (pOVar1 == (Object *)0x0) goto LAB_001026f0;
  }
  cVar3 = RefCounted::unreference();
  if (cVar3 != '\0') {
    cVar3 = predelete_handler(pOVar1);
    if (cVar3 != '\0') {
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      Memory::free_static(pOVar1,false);
    }
  }
LAB_001026f0:
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
   TabContainer::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#14}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#14}>
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
  lVar4 = __dynamic_cast(*param_2,&Object::typeinfo,&TabContainer::typeinfo,0);
  Control::get_theme_item(local_48,lVar4,4,param_3,param_4);
  pOVar5 = (Object *)Variant::get_validated_object();
  pOVar1 = *(Object **)(lVar4 + 0xab0);
  if (pOVar5 == pOVar1) goto LAB_00102840;
  if (pOVar5 == (Object *)0x0) {
    if (pOVar1 == (Object *)0x0) goto LAB_00102840;
    *(undefined8 *)(lVar4 + 0xab0) = 0;
  }
  else {
    pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&Texture2D::typeinfo,0);
    if (pOVar1 == pOVar5) goto LAB_00102840;
    *(Object **)(lVar4 + 0xab0) = pOVar5;
    if (pOVar5 != (Object *)0x0) {
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        *(undefined8 *)(lVar4 + 0xab0) = 0;
      }
    }
    if (pOVar1 == (Object *)0x0) goto LAB_00102840;
  }
  cVar3 = RefCounted::unreference();
  if (cVar3 != '\0') {
    cVar3 = predelete_handler(pOVar1);
    if (cVar3 != '\0') {
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      Memory::free_static(pOVar1,false);
    }
  }
LAB_00102840:
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
   TabContainer::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#4}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#4}>
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
  lVar4 = __dynamic_cast(*param_2,&Object::typeinfo,&TabContainer::typeinfo,0);
  Control::get_theme_item(local_48,lVar4,4,param_3,param_4);
  pOVar5 = (Object *)Variant::get_validated_object();
  pOVar1 = *(Object **)(lVar4 + 0xa60);
  if (pOVar5 == pOVar1) goto LAB_00102990;
  if (pOVar5 == (Object *)0x0) {
    if (pOVar1 == (Object *)0x0) goto LAB_00102990;
    *(undefined8 *)(lVar4 + 0xa60) = 0;
  }
  else {
    pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&Texture2D::typeinfo,0);
    if (pOVar1 == pOVar5) goto LAB_00102990;
    *(Object **)(lVar4 + 0xa60) = pOVar5;
    if (pOVar5 != (Object *)0x0) {
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        *(undefined8 *)(lVar4 + 0xa60) = 0;
      }
    }
    if (pOVar1 == (Object *)0x0) goto LAB_00102990;
  }
  cVar3 = RefCounted::unreference();
  if (cVar3 != '\0') {
    cVar3 = predelete_handler(pOVar1);
    if (cVar3 != '\0') {
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      Memory::free_static(pOVar1,false);
    }
  }
LAB_00102990:
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
   TabContainer::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#5}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#5}>
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
  lVar4 = __dynamic_cast(*param_2,&Object::typeinfo,&TabContainer::typeinfo,0);
  Control::get_theme_item(local_48,lVar4,4,param_3,param_4);
  pOVar5 = (Object *)Variant::get_validated_object();
  pOVar1 = *(Object **)(lVar4 + 0xa68);
  if (pOVar5 == pOVar1) goto LAB_00102ae0;
  if (pOVar5 == (Object *)0x0) {
    if (pOVar1 == (Object *)0x0) goto LAB_00102ae0;
    *(undefined8 *)(lVar4 + 0xa68) = 0;
  }
  else {
    pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&Texture2D::typeinfo,0);
    if (pOVar1 == pOVar5) goto LAB_00102ae0;
    *(Object **)(lVar4 + 0xa68) = pOVar5;
    if (pOVar5 != (Object *)0x0) {
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        *(undefined8 *)(lVar4 + 0xa68) = 0;
      }
    }
    if (pOVar1 == (Object *)0x0) goto LAB_00102ae0;
  }
  cVar3 = RefCounted::unreference();
  if (cVar3 != '\0') {
    cVar3 = predelete_handler(pOVar1);
    if (cVar3 != '\0') {
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      Memory::free_static(pOVar1,false);
    }
  }
LAB_00102ae0:
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



/* TabContainer::_can_drop_data_fw(Vector2 const&, Variant const&, Control*) const */

ulong TabContainer::_can_drop_data_fw(Vector2 *param_1,Variant *param_2,Control *param_3)

{
  long *plVar1;
  String *pSVar2;
  long lVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar4 = (ulong)(byte)param_1[0xa38];
  if (param_1[0xa38] != (Vector2)0x0) {
    pSVar2 = *(String **)(param_1 + 0xa00);
    local_50 = 0;
    local_48 = "tab_container_tab";
    local_40 = 0x11;
    String::parse_latin1((StrRange *)&local_50);
    uVar4 = TabBar::_handle_can_drop_data(pSVar2,(Vector2 *)&local_50,param_2);
    lVar3 = local_50;
    if (local_50 != 0) {
      LOCK();
      plVar1 = (long *)(local_50 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
        uVar4 = uVar4 & 0xff;
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TabContainer::_drop_data_fw(Vector2 const&, Variant const&, Control*) */

void TabContainer::_drop_data_fw(Vector2 *param_1,Variant *param_2,Control *param_3)

{
  long *plVar1;
  String *pSVar2;
  undefined8 uVar3;
  long lVar4;
  CallableCustom *pCVar5;
  long in_FS_OFFSET;
  long local_80;
  Callable local_78 [16];
  Callable local_68 [16];
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1[0xa38] != (Vector2)0x0) {
    pSVar2 = *(String **)(param_1 + 0xa00);
    pCVar5 = (CallableCustom *)operator_new(0x48,"");
    CallableCustom::CallableCustom(pCVar5);
    *(undefined **)(pCVar5 + 0x20) = &_LC41;
    *(undefined1 (*) [16])(pCVar5 + 0x30) = (undefined1  [16])0x0;
    *(undefined8 *)(pCVar5 + 0x40) = 0;
    uVar3 = *(undefined8 *)(param_1 + 0x60);
    *(undefined ***)pCVar5 = &PTR_hash_0012a908;
    *(undefined8 *)(pCVar5 + 0x30) = uVar3;
    *(code **)(pCVar5 + 0x38) = _drag_move_tab_from;
    *(undefined8 *)(pCVar5 + 0x10) = 0;
    *(Vector2 **)(pCVar5 + 0x28) = param_1;
    CallableCustomMethodPointerBase::_setup((uint *)pCVar5,(int)pCVar5 + 0x28);
    *(char **)(pCVar5 + 0x20) = "TabContainer::_drag_move_tab_from";
    Callable::Callable(local_78,pCVar5);
    pCVar5 = (CallableCustom *)operator_new(0x48,"");
    CallableCustom::CallableCustom(pCVar5);
    *(undefined **)(pCVar5 + 0x20) = &_LC41;
    *(undefined1 (*) [16])(pCVar5 + 0x30) = (undefined1  [16])0x0;
    *(undefined8 *)(pCVar5 + 0x40) = 0;
    uVar3 = *(undefined8 *)(param_1 + 0x60);
    *(undefined ***)pCVar5 = &PTR_hash_0012a878;
    *(undefined8 *)(pCVar5 + 0x30) = uVar3;
    *(code **)(pCVar5 + 0x38) = _drag_move_tab;
    *(undefined8 *)(pCVar5 + 0x10) = 0;
    *(Vector2 **)(pCVar5 + 0x28) = param_1;
    CallableCustomMethodPointerBase::_setup((uint *)pCVar5,(int)pCVar5 + 0x28);
    *(char **)(pCVar5 + 0x20) = "TabContainer::_drag_move_tab";
    Callable::Callable(local_68,pCVar5);
    local_58 = "tab_container_tab";
    local_80 = 0;
    local_50 = 0x11;
    String::parse_latin1((StrRange *)&local_80);
    TabBar::_handle_drop_data(pSVar2,(Vector2 *)&local_80,param_2,param_3,local_68);
    lVar4 = local_80;
    if (local_80 != 0) {
      LOCK();
      plVar1 = (long *)(local_80 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_80 = 0;
        Memory::free_static((void *)(lVar4 + -0x10),false);
        Callable::~Callable(local_68);
        Callable::~Callable(local_78);
        goto LAB_00102e0b;
      }
    }
    Callable::~Callable(local_68);
    Callable::~Callable(local_78);
  }
LAB_00102e0b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TabContainer::_get_drag_data_fw(Vector2 const&, Control*) */

Vector2 * TabContainer::_get_drag_data_fw(Vector2 *param_1,Control *param_2)

{
  long *plVar1;
  Vector2 *pVVar2;
  long lVar3;
  long in_FS_OFFSET;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2[0xa38] == (Control)0x0) {
    *(undefined4 *)param_1 = 0;
    *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  }
  else {
    pVVar2 = *(Vector2 **)(param_2 + 0xa00);
    local_50 = 0;
    local_48 = "tab_container_tab";
    local_40 = 0x11;
    String::parse_latin1((StrRange *)&local_50);
    TabBar::_handle_get_drag_data((String *)param_1,pVVar2);
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
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* TabContainer::_get_tab_height() const */

int __thiscall TabContainer::_get_tab_height(TabContainer *this)

{
  int iVar1;
  float extraout_XMM0_Db;
  
  if (this[0xa08] == (TabContainer)0x0) {
    return 0;
  }
  iVar1 = TabBar::get_tab_count();
  if (0 < iVar1) {
    (**(code **)(**(long **)(this + 0xa00) + 0x2f8))();
    return (int)extraout_XMM0_Db;
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TabContainer::gui_input(Ref<InputEvent> const&) */

void __thiscall TabContainer::gui_input(TabContainer *this,Ref *param_1)

{
  bool bVar1;
  undefined1 auVar2 [16];
  char cVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  Object *pOVar7;
  long *plVar8;
  Object *pOVar9;
  int extraout_var;
  long lVar10;
  long in_FS_OFFSET;
  float fVar11;
  float extraout_XMM0_Da;
  undefined8 uVar12;
  undefined8 uVar13;
  float extraout_XMM0_Db;
  double dVar14;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)param_1 == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("gui_input","scene/gui/tab_container.cpp",0x2d,
                       "Condition \"p_event.is_null()\" is true.",0,0);
      return;
    }
    goto LAB_0010391b;
  }
  pOVar7 = (Object *)
           __dynamic_cast(*(long *)param_1,&Object::typeinfo,&InputEventMouseButton::typeinfo,0);
  if (pOVar7 == (Object *)0x0) {
    plVar8 = (long *)get_popup(this);
    lVar10 = *(long *)param_1;
    if (lVar10 == 0) goto LAB_001032e0;
LAB_00103329:
    pOVar9 = (Object *)__dynamic_cast(lVar10,&Object::typeinfo,&InputEventMouseMotion::typeinfo,0);
    if ((pOVar9 != (Object *)0x0) && (cVar3 = RefCounted::reference(), cVar3 != '\0')) {
      uVar12 = InputEventMouse::get_position();
      fVar4 = (float)((ulong)uVar12 >> 0x20);
      uVar13 = Control::get_size();
      iVar5 = *(int *)(this + 0xa0c);
      if (iVar5 == 0) {
        iVar5 = _get_tab_height(this);
        if (fVar4 <= (float)iVar5) {
          iVar5 = *(int *)(this + 0xa0c);
          goto joined_r0x001036ac;
        }
LAB_001036d4:
        if (this[0xa10] != (TabContainer)0x0) {
          this[0xa10] = (TabContainer)0x0;
          CanvasItem::queue_redraw();
        }
      }
      else {
joined_r0x001036ac:
        if ((iVar5 == 1) &&
           (iVar5 = _get_tab_height(this), fVar4 < (float)((ulong)uVar13 >> 0x20) - (float)iVar5))
        goto LAB_001036d4;
        if (plVar8 != (long *)0x0) {
          cVar3 = (**(code **)(*(long *)this + 0x340))(this);
          if (cVar3 == '\0') {
            iVar5 = (**(code **)(**(long **)(this + 0xa60) + 0x1c8))();
            if ((float)uVar12 < (float)uVar13 - (float)iVar5) goto LAB_001036d4;
          }
          else {
            iVar5 = (**(code **)(**(long **)(this + 0xa60) + 0x1c8))();
            if ((float)iVar5 < (float)uVar12) goto LAB_001036d4;
          }
          if (this[0xa10] == (TabContainer)0x0) {
            this[0xa10] = (TabContainer)0x1;
            CanvasItem::queue_redraw();
          }
        }
      }
      cVar3 = RefCounted::unreference();
      if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar9), cVar3 != '\0')) {
        (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
        Memory::free_static(pOVar9,false);
      }
    }
    if (pOVar7 != (Object *)0x0) {
LAB_00103353:
      cVar3 = RefCounted::unreference();
      if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar7), cVar3 != '\0')) {
        (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          Memory::free_static(pOVar7,false);
          return;
        }
        goto LAB_0010391b;
      }
    }
  }
  else {
    cVar3 = RefCounted::reference();
    if (cVar3 != '\0') {
      plVar8 = (long *)get_popup(this);
      cVar3 = InputEvent::is_pressed();
      if ((cVar3 == '\0') || (iVar5 = InputEventMouseButton::get_button_index(), iVar5 != 1))
      goto LAB_00103320;
      uVar12 = InputEventMouse::get_position();
      fVar4 = (float)((ulong)uVar12 >> 0x20);
      uVar13 = Control::get_size();
      iVar6 = _get_tab_height(this);
      iVar5 = *(int *)(this + 0xa0c);
      fVar11 = (float)((ulong)uVar13 >> 0x20) - (float)iVar6;
      if (iVar5 == 0) {
        iVar5 = _get_tab_height(this);
        if (fVar4 <= (float)iVar5) {
          iVar5 = *(int *)(this + 0xa0c);
          goto LAB_00103502;
        }
      }
      else {
LAB_00103502:
        if ((iVar5 != 1) || (fVar11 <= fVar4)) {
          if (plVar8 != (long *)0x0) {
            cVar3 = (**(code **)(*(long *)this + 0x340))(this);
            if (cVar3 == '\0') {
              iVar5 = (**(code **)(**(long **)(this + 0xa60) + 0x1c8))();
              bVar1 = (float)uVar13 - (float)iVar5 < (float)uVar12;
            }
            else {
              iVar5 = (**(code **)(**(long **)(this + 0xa60) + 0x1c8))();
              bVar1 = (float)uVar12 < (float)iVar5;
            }
            if (bVar1) {
              if ((gui_input(Ref<InputEvent>const&)::{lambda()#1}::operator()()::sname == '\0') &&
                 (iVar5 = __cxa_guard_acquire(&gui_input(Ref<InputEvent>const&)::{lambda()#1}::
                                               operator()()::sname), iVar5 != 0)) {
                _scs_create((char *)&gui_input(Ref<InputEvent>const&)::{lambda()#1}::operator()()::
                                     sname,true);
                __cxa_atexit(StringName::~StringName,
                             &gui_input(Ref<InputEvent>const&)::{lambda()#1}::operator()()::sname,
                             &__dso_handle);
                __cxa_guard_release(&gui_input(Ref<InputEvent>const&)::{lambda()#1}::operator()()::
                                     sname);
              }
              local_50 = (undefined1  [16])0x0;
              local_58 = 0;
              (**(code **)(*(long *)this + 0xd0))
                        (this,&gui_input(Ref<InputEvent>const&)::{lambda()#1}::operator()()::sname,0
                         ,0);
              if (Variant::needs_deinit[(int)local_58] != '\0') {
                Variant::_clear_internal();
              }
              Control::get_screen_position();
              local_60._0_4_ = extraout_XMM0_Da;
              local_60._4_4_ = extraout_XMM0_Db;
              cVar3 = (**(code **)(*(long *)this + 0x340))(this);
              if (cVar3 == '\0') {
                iVar5 = Window::get_size();
                local_60._0_4_ = ((float)uVar13 - (float)iVar5) + (float)local_60;
              }
              iVar5 = _get_tab_height(this);
              local_60._4_4_ = (float)((double)iVar5 * __LC55 + (double)local_60._4_4_);
              if (*(int *)(this + 0xa0c) == 1) {
                local_60._4_4_ = local_60._4_4_ + fVar11;
                Window::get_size();
                local_60._4_4_ = local_60._4_4_ - (float)extraout_var;
                iVar5 = (**(code **)(**(long **)(this + 0xa60) + 0x1d0))();
                dVar14 = (double)local_60._4_4_ - (double)iVar5 * __LC55;
              }
              else {
                iVar5 = (**(code **)(**(long **)(this + 0xa60) + 0x1d0))();
                dVar14 = (double)iVar5 * __LC55 + (double)local_60._4_4_;
              }
              local_60 = CONCAT44((float)dVar14,(float)local_60);
              local_58 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_60);
              Window::set_position((Vector2i *)plVar8);
              local_58 = 0;
              auVar2._8_8_ = 0;
              auVar2._0_8_ = local_50._8_8_;
              local_50 = auVar2 << 0x40;
              (**(code **)(*plVar8 + 0x240))(plVar8);
              goto LAB_00103353;
            }
          }
LAB_00103320:
          lVar10 = *(long *)param_1;
          if (lVar10 != 0) goto LAB_00103329;
        }
      }
      goto LAB_00103353;
    }
    plVar8 = (long *)get_popup(this);
    lVar10 = *(long *)param_1;
    pOVar7 = (Object *)0x0;
    if (lVar10 != 0) goto LAB_00103329;
  }
LAB_001032e0:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010391b:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TabContainer::_update_margins() */

void __thiscall TabContainer::_update_margins(TabContainer *this)

{
  long lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float extraout_XMM1_Da;
  undefined8 uVar9;
  
  iVar3 = (**(code **)(**(long **)(this + 0xa60) + 0x1c8))();
  lVar1 = *(long *)(this + 0xa18);
  iVar4 = TabBar::get_tab_count();
  uVar5 = *(undefined8 *)(this + 0xa00);
  if (iVar4 == 0) {
LAB_00103987:
    uVar9 = 0;
  }
  else {
    iVar4 = TabBar::get_tab_alignment();
    if (iVar4 == 1) {
      uVar5 = *(undefined8 *)(this + 0xa00);
      goto LAB_00103987;
    }
    if (iVar4 == 2) {
      Control::set_offset(0,*(undefined8 *)(this + 0xa00),0);
      if (lVar1 == 0) {
        fVar6 = (float)TabBar::get_tab_rect((int)*(undefined8 *)(this + 0xa00));
        uVar5 = *(undefined8 *)(this + 0xa00);
        TabBar::get_tab_count();
        fVar7 = (float)TabBar::get_tab_rect((int)uVar5);
        cVar2 = TabBar::get_clip_tabs();
        if (cVar2 != '\0') {
          cVar2 = TabBar::get_offset_buttons_visible();
          if (cVar2 != '\0') {
LAB_00103ab0:
            uVar5 = *(undefined8 *)(this + 0xa00);
            uVar9 = 0;
            goto LAB_001039ae;
          }
          iVar3 = TabBar::get_tab_count();
          if (1 < iVar3) {
            iVar3 = *(int *)(this + 0xa48);
            fVar8 = (float)Control::get_size();
            if (fVar8 < (float)((int)((fVar7 - (float)(int)fVar6) + extraout_XMM1_Da) + iVar3))
            goto LAB_00103ab0;
          }
        }
        iVar3 = *(int *)(this + 0xa48);
      }
      uVar5 = *(undefined8 *)(this + 0xa00);
      auVar12._4_12_ = SUB1612((undefined1  [16])0x0,4);
      auVar12._0_4_ = (float)-iVar3;
      uVar9 = auVar12._0_8_;
      goto LAB_001039ae;
    }
    if (iVar4 != 0) {
      return;
    }
    uVar5 = *(undefined8 *)(this + 0xa00);
    auVar11._4_12_ = SUB1612((undefined1  [16])0x0,4);
    auVar11._0_4_ = (float)*(int *)(this + 0xa48);
    uVar9 = auVar11._0_8_;
  }
  Control::set_offset(uVar9,uVar5,0);
  uVar5 = *(undefined8 *)(this + 0xa00);
  uVar9 = 0;
  if (lVar1 != 0) {
    auVar10._4_12_ = SUB1612((undefined1  [16])0x0,4);
    auVar10._0_4_ = (float)-iVar3;
    uVar9 = auVar10._0_8_;
  }
LAB_001039ae:
  Control::set_offset(uVar9,uVar5,2);
  return;
}



/* TabContainer::set_tab_alignment(TabBar::AlignmentMode) */

void __thiscall TabContainer::set_tab_alignment(TabContainer *this,int param_2)

{
  int iVar1;
  
  iVar1 = TabBar::get_tab_alignment();
  if (iVar1 != param_2) {
    TabBar::set_tab_alignment(*(undefined8 *)(this + 0xa00),param_2);
    _update_margins(this);
    return;
  }
  return;
}



/* TabContainer::set_tab_disabled(int, bool) */

void __thiscall TabContainer::set_tab_disabled(TabContainer *this,int param_1,bool param_2)

{
  char cVar1;
  
  cVar1 = TabBar::is_tab_disabled((int)*(undefined8 *)(this + 0xa00));
  if ((bool)cVar1 != param_2) {
    TabBar::set_tab_disabled((int)*(undefined8 *)(this + 0xa00),SUB41(param_1,0));
    _update_margins(this);
    cVar1 = TabBar::get_clip_tabs();
    if (cVar1 == '\0') {
      Control::update_minimum_size();
      return;
    }
  }
  return;
}



/* TabContainer::set_popup(Node*) */

void __thiscall TabContainer::set_popup(TabContainer *this,Node *param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = get_popup(this);
  if (param_1 != (Node *)0x0) {
    param_1 = (Node *)__dynamic_cast(param_1,&Object::typeinfo,&Popup::typeinfo,0);
    if (param_1 != (Node *)0x0) {
      lVar3 = *(long *)(param_1 + 0x60);
      goto LAB_00103be3;
    }
  }
  lVar3 = 0;
LAB_00103be3:
  if ((lVar3 != *(long *)(this + 0xa18)) &&
     (*(long *)(this + 0xa18) = lVar3, (param_1 != (Node *)0x0) != (lVar2 != 0))) {
    CanvasItem::queue_redraw();
    _update_margins(this);
    cVar1 = TabBar::get_clip_tabs();
    if (cVar1 == '\0') {
      Control::update_minimum_size();
      return;
    }
  }
  return;
}



/* TabContainer::_on_tab_changed(int) */

void __thiscall TabContainer::_on_tab_changed(TabContainer *this,int param_1)

{
  char cVar1;
  int iVar2;
  long in_FS_OFFSET;
  TabContainer aTStack_98 [16];
  Variant *local_88 [2];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  create_custom_callable_function_pointer<TabContainer>
            (aTStack_98,(char *)this,(_func_void *)"&TabContainer::_repaint");
  Variant::Variant((Variant *)local_78,0);
  Callable::call_deferredp((Variant **)aTStack_98,0);
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  Callable::~Callable((Callable *)aTStack_98);
  CanvasItem::queue_redraw();
  if ((_on_tab_changed(int)::{lambda()#1}::operator()()::sname == '\0') &&
     (iVar2 = __cxa_guard_acquire(&_on_tab_changed(int)::{lambda()#1}::operator()()::sname),
     iVar2 != 0)) {
    _scs_create((char *)&_on_tab_changed(int)::{lambda()#1}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_on_tab_changed(int)::{lambda()#1}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_on_tab_changed(int)::{lambda()#1}::operator()()::sname);
  }
  Variant::Variant((Variant *)local_78,param_1);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  local_88[0] = (Variant *)local_78;
  (**(code **)(*(long *)this + 0xd0))
            (this,&_on_tab_changed(int)::{lambda()#1}::operator()()::sname,local_88,1);
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
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TabContainer::_on_tab_selected(int) */

void __thiscall TabContainer::_on_tab_selected(TabContainer *this,int param_1)

{
  int iVar1;
  long in_FS_OFFSET;
  TabContainer aTStack_98 [16];
  Variant *local_88 [2];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = TabBar::get_previous_tab();
  if (param_1 != iVar1) {
    create_custom_callable_function_pointer<TabContainer>
              (aTStack_98,(char *)this,(_func_void *)"&TabContainer::_repaint");
    Variant::Variant((Variant *)local_78,0);
    Callable::call_deferredp((Variant **)aTStack_98,0);
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Callable::~Callable((Callable *)aTStack_98);
  }
  if (_on_tab_selected(int)::{lambda()#1}::operator()()::sname == '\0') {
    iVar1 = __cxa_guard_acquire(&_on_tab_selected(int)::{lambda()#1}::operator()()::sname);
    if (iVar1 != 0) {
      _scs_create((char *)&_on_tab_selected(int)::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_on_tab_selected(int)::{lambda()#1}::operator()()::sname
                   ,&__dso_handle);
      __cxa_guard_release(&_on_tab_selected(int)::{lambda()#1}::operator()()::sname);
    }
  }
  Variant::Variant((Variant *)local_78,param_1);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  local_88[0] = (Variant *)local_78;
  (**(code **)(*(long *)this + 0xd0))
            (this,&_on_tab_selected(int)::{lambda()#1}::operator()()::sname,local_88,1);
  if (Variant::needs_deinit[(int)local_60] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TabContainer::set_tabs_position(TabContainer::TabPosition) */

void __thiscall TabContainer::set_tabs_position(TabContainer *this,uint param_2)

{
  long in_FS_OFFSET;
  TabContainer aTStack_48 [16];
  int local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 < 2) {
    if (*(uint *)(this + 0xa0c) != param_2) {
      *(uint *)(this + 0xa0c) = param_2;
      TabBar::set_tab_style_v_flip(SUB81(*(undefined8 *)(this + 0xa00),0));
      create_custom_callable_function_pointer<TabContainer>
                (aTStack_48,(char *)this,(_func_void *)"&TabContainer::_repaint");
      Variant::Variant((Variant *)local_38,0);
      Callable::call_deferredp((Variant **)aTStack_48,0);
      if (Variant::needs_deinit[local_38[0]] != '\0') {
        Variant::_clear_internal();
      }
      Callable::~Callable((Callable *)aTStack_48);
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        CanvasItem::queue_redraw();
        return;
      }
      goto LAB_001040fd;
    }
  }
  else {
    _err_print_index_error
              ("set_tabs_position","scene/gui/tab_container.cpp",0x2c3,(ulong)param_2,2,
               "p_tabs_position","POSITION_MAX","",false,false);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001040fd:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TabContainer::set_tabs_visible(bool) */

void __thiscall TabContainer::set_tabs_visible(TabContainer *this,bool param_1)

{
  long in_FS_OFFSET;
  TabContainer aTStack_48 [16];
  int local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (this[0xa08] == (TabContainer)param_1) {
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    this[0xa08] = (TabContainer)param_1;
    CanvasItem::set_visible(SUB81(*(undefined8 *)(this + 0xa00),0));
    create_custom_callable_function_pointer<TabContainer>
              (aTStack_48,(char *)this,(_func_void *)"&TabContainer::_repaint");
    Variant::Variant((Variant *)local_38,0);
    Callable::call_deferredp((Variant **)aTStack_48,0);
    if (Variant::needs_deinit[local_38[0]] != '\0') {
      Variant::_clear_internal();
    }
    Callable::~Callable((Callable *)aTStack_48);
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      CanvasItem::queue_redraw();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TabContainer::TabContainer() */

void __thiscall TabContainer::TabContainer(TabContainer *this)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  TabBar *this_00;
  CallableCustom *pCVar6;
  long in_FS_OFFSET;
  TabBar local_a8 [16];
  Callable local_98 [16];
  TabBar local_88 [16];
  Callable local_78 [16];
  long local_68 [2];
  Callable local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Container::Container((Container *)this);
  *(undefined2 *)(this + 0xa20) = 0;
  *(undefined ***)this = &PTR__initialize_classv_0012a470;
  *(undefined1 (*) [16])(this + 0xa50) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa60) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa80) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa90) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xaa0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xab0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xac0) = (undefined1  [16])0x0;
  uVar5 = _UNK_0012b898;
  uVar3 = __LC70;
  *(undefined8 *)(this + 0xa00) = 0;
  *(undefined2 *)(this + 0xa08) = 1;
  *(undefined4 *)(this + 0xa0c) = 0;
  this[0xa10] = (TabContainer)0x0;
  *(undefined8 *)(this + 0xa18) = 0;
  *(undefined8 *)(this + 0xa30) = 0;
  this[0xa38] = (TabContainer)0x0;
  *(undefined4 *)(this + 0xa3c) = 0xfffffffe;
  this[0xa40] = (TabContainer)0x0;
  *(undefined4 *)(this + 0xa48) = 0;
  *(undefined8 *)(this + 0xa70) = 0;
  *(undefined4 *)(this + 0xa78) = 0;
  *(undefined8 *)(this + 0xb30) = 0;
  *(undefined8 *)(this + 0xad0) = uVar3;
  *(undefined8 *)(this + 0xad8) = uVar5;
  *(undefined8 *)(this + 0xae0) = uVar3;
  *(undefined8 *)(this + 0xae8) = uVar5;
  *(undefined8 *)(this + 0xaf0) = uVar3;
  *(undefined8 *)(this + 0xaf8) = uVar5;
  *(undefined8 *)(this + 0xb00) = uVar3;
  *(undefined8 *)(this + 0xb08) = uVar5;
  *(undefined8 *)(this + 0xb10) = uVar3;
  *(undefined8 *)(this + 0xb18) = uVar5;
  *(undefined8 *)(this + 0xb20) = uVar3;
  *(undefined8 *)(this + 0xb28) = uVar5;
  this_00 = (TabBar *)operator_new(0xb58,"");
  TabBar::TabBar(this_00);
  postinitialize_handler((Object *)this_00);
  lVar1 = *(long *)this_00;
  *(TabBar **)(this + 0xa00) = this_00;
  pcVar2 = *(code **)(lVar1 + 0x318);
  pCVar6 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar6);
  *(undefined **)(pCVar6 + 0x20) = &_LC41;
  *(undefined1 (*) [16])(pCVar6 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)pCVar6 = &PTR_hash_0012ab48;
  *(undefined8 *)(pCVar6 + 0x40) = 0;
  uVar3 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(pCVar6 + 0x10) = 0;
  *(undefined8 *)(pCVar6 + 0x30) = uVar3;
  *(code **)(pCVar6 + 0x38) = _drop_data_fw;
  *(TabContainer **)(pCVar6 + 0x28) = this;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar6,(int)pCVar6 + 0x28);
  *(char **)(pCVar6 + 0x20) = "TabContainer::_drop_data_fw";
  Callable::Callable(local_58,pCVar6);
  Callable::bind<TabBar*>((TabBar *)local_68);
  pCVar6 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar6);
  *(undefined **)(pCVar6 + 0x20) = &_LC41;
  *(TabContainer **)(pCVar6 + 0x28) = this;
  *(undefined1 (*) [16])(pCVar6 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)pCVar6 = &PTR_hash_0012aab8;
  *(undefined8 *)(pCVar6 + 0x40) = 0;
  uVar3 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(pCVar6 + 0x10) = 0;
  *(undefined8 *)(pCVar6 + 0x30) = uVar3;
  *(code **)(pCVar6 + 0x38) = _can_drop_data_fw;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar6,(int)pCVar6 + 0x28);
  *(char **)(pCVar6 + 0x20) = "TabContainer::_can_drop_data_fw";
  Callable::Callable(local_78,pCVar6);
  Callable::bind<TabBar*>(local_88);
  pCVar6 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar6);
  *(undefined **)(pCVar6 + 0x20) = &_LC41;
  *(TabContainer **)(pCVar6 + 0x28) = this;
  *(undefined1 (*) [16])(pCVar6 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)pCVar6 = &PTR_hash_0012aa28;
  *(undefined8 *)(pCVar6 + 0x40) = 0;
  uVar3 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(pCVar6 + 0x10) = 0;
  *(undefined8 *)(pCVar6 + 0x30) = uVar3;
  *(code **)(pCVar6 + 0x38) = _get_drag_data_fw;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar6,(int)pCVar6 + 0x28);
  *(char **)(pCVar6 + 0x20) = "TabContainer::_get_drag_data_fw";
  Callable::Callable(local_98,pCVar6);
  Callable::bind<TabBar*>(local_a8);
  (*pcVar2)(this_00,local_a8,local_88,(TabBar *)local_68);
  Callable::~Callable((Callable *)local_a8);
  Callable::~Callable(local_98);
  Callable::~Callable((Callable *)local_88);
  Callable::~Callable(local_78);
  Callable::~Callable((Callable *)local_68);
  Callable::~Callable(local_58);
  Node::add_child(this,*(undefined8 *)(this + 0xa00),0,1);
  Control::set_anchors_and_offsets_preset(*(undefined8 *)(this + 0xa00),10,0,0);
  plVar4 = *(long **)(this + 0xa00);
  pcVar2 = *(code **)(*plVar4 + 0x108);
  create_custom_callable_function_pointer<TabContainer,int>
            ((TabContainer *)local_58,(char *)this,
             (_func_void_int *)"&TabContainer::_on_tab_changed");
  StringName::StringName((StringName *)local_68,"tab_changed",false);
  (*pcVar2)(plVar4,(TabBar *)local_68,local_58,0);
  if ((StringName::configured != '\0') && (local_68[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable(local_58);
  plVar4 = *(long **)(this + 0xa00);
  pcVar2 = *(code **)(*plVar4 + 0x108);
  create_custom_callable_function_pointer<TabContainer,int>
            ((TabContainer *)local_58,(char *)this,
             (_func_void_int *)"&TabContainer::_on_tab_clicked");
  StringName::StringName((StringName *)local_68,"tab_clicked",false);
  (*pcVar2)(plVar4,(TabBar *)local_68,local_58,0);
  if ((StringName::configured != '\0') && (local_68[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable(local_58);
  plVar4 = *(long **)(this + 0xa00);
  pcVar2 = *(code **)(*plVar4 + 0x108);
  create_custom_callable_function_pointer<TabContainer,int>
            ((TabContainer *)local_58,(char *)this,
             (_func_void_int *)"&TabContainer::_on_tab_hovered");
  StringName::StringName((StringName *)local_68,"tab_hovered",false);
  (*pcVar2)(plVar4,(TabBar *)local_68,local_58,0);
  if ((StringName::configured != '\0') && (local_68[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable(local_58);
  plVar4 = *(long **)(this + 0xa00);
  pcVar2 = *(code **)(*plVar4 + 0x108);
  create_custom_callable_function_pointer<TabContainer,int>
            ((TabContainer *)local_58,(char *)this,
             (_func_void_int *)"&TabContainer::_on_tab_selected");
  StringName::StringName((StringName *)local_68,"tab_selected",false);
  (*pcVar2)(plVar4,(TabBar *)local_68,local_58,0);
  if ((StringName::configured != '\0') && (local_68[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable(local_58);
  plVar4 = *(long **)(this + 0xa00);
  pcVar2 = *(code **)(*plVar4 + 0x108);
  create_custom_callable_function_pointer<TabContainer,int>
            ((TabContainer *)local_58,(char *)this,
             (_func_void_int *)"&TabContainer::_on_tab_button_pressed");
  StringName::StringName((StringName *)local_68,"tab_button_pressed",false);
  (*pcVar2)(plVar4,(TabBar *)local_68,local_58,0);
  if ((StringName::configured != '\0') && (local_68[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable(local_58);
  plVar4 = *(long **)(this + 0xa00);
  pcVar2 = *(code **)(*plVar4 + 0x108);
  create_custom_callable_function_pointer<TabContainer,int>
            ((TabContainer *)local_58,(char *)this,
             (_func_void_int *)"&TabContainer::_on_active_tab_rearranged");
  StringName::StringName((StringName *)local_68,"active_tab_rearranged",false);
  (*pcVar2)(plVar4,(TabBar *)local_68,local_58,0);
  if ((StringName::configured != '\0') && (local_68[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable(local_58);
  create_custom_callable_function_pointer<TabContainer>
            ((TabContainer *)local_58,(char *)this,(_func_void *)"&TabContainer::_on_mouse_exited");
  Node::connect((StringName *)this,(Callable *)(SceneStringNames::singleton + 0xc0),(uint)local_58);
  Callable::~Callable(local_58);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TabContainer::add_child_notify(Node*) */

void __thiscall TabContainer::add_child_notify(TabContainer *this,Node *param_1)

{
  String *pSVar1;
  char *__s;
  code *pcVar2;
  Object *pOVar3;
  char cVar4;
  int iVar5;
  Object *pOVar6;
  long in_FS_OFFSET;
  long local_b8;
  undefined8 local_b0;
  Object *local_a8 [2];
  char *local_98;
  size_t local_90;
  Variant *local_88;
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Container::add_child_notify((Node *)this);
  if ((*(Node **)(this + 0xa00) == param_1) ||
     (pOVar6 = (Object *)Container::as_sortable_control(this,param_1,2), pOVar6 == (Object *)0x0))
  goto LAB_00104bb8;
  CanvasItem::hide();
  pSVar1 = *(String **)(this + 0xa00);
  local_a8[0] = (Object *)0x0;
  Node::get_name();
  if (local_b8 == 0) {
LAB_00104c79:
    local_b0 = 0;
  }
  else {
    __s = *(char **)(local_b8 + 8);
    local_b0 = 0;
    if (__s == (char *)0x0) {
      if (*(long *)(local_b8 + 0x10) == 0) goto LAB_00104c79;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,(CowData *)(local_b8 + 0x10));
    }
    else {
      local_90 = strlen(__s);
      local_98 = __s;
      String::parse_latin1((StrRange *)&local_b0);
    }
  }
  TabBar::add_tab(pSVar1,(Ref *)&local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  if ((StringName::configured != '\0') && (local_b8 != 0)) {
    StringName::unref();
  }
  if (((local_a8[0] != (Object *)0x0) &&
      (cVar4 = RefCounted::unreference(), pOVar3 = local_a8[0], cVar4 != '\0')) &&
     (cVar4 = predelete_handler(local_a8[0]), cVar4 != '\0')) {
    (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
    Memory::free_static(pOVar3,false);
  }
  pcVar2 = *(code **)(*(long *)pOVar6 + 0xa8);
  iVar5 = TabBar::get_tab_count();
  Variant::Variant((Variant *)local_78,iVar5 + -1);
  StringName::StringName((StringName *)&local_98,"_tab_index",false);
  (*pcVar2)(pOVar6,(StringName *)&local_98,(Variant *)local_78);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  _update_margins(this);
  iVar5 = TabBar::get_tab_count();
  if (iVar5 == 1) {
    CanvasItem::queue_redraw();
  }
  pcVar2 = *(code **)(*(long *)param_1 + 0x108);
  create_custom_callable_function_pointer<TabContainer>
            ((TabContainer *)&local_98,(char *)this,
             (_func_void *)"&TabContainer::_refresh_tab_names");
  StringName::StringName((StringName *)local_a8,"renamed",false);
  (*pcVar2)(param_1,(StringName *)local_a8,(StringName *)&local_98,0);
  if ((StringName::configured != '\0') && (local_a8[0] != (Object *)0x0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_98);
  pcVar2 = *(code **)(*(long *)param_1 + 0x108);
  create_custom_callable_function_pointer<TabContainer,Control*>
            ((TabContainer *)local_a8,(char *)this,
             (_func_void_Control_ptr *)"&TabContainer::_on_tab_visibility_changed");
  Variant::Variant((Variant *)local_78,pOVar6);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  local_88 = (Variant *)local_78;
  Callable::bindp((Variant **)&local_98,(int)(StringName *)local_a8);
  if (Variant::needs_deinit[(int)local_60] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  (*pcVar2)(param_1,SceneStringNames::singleton + 0x18,(StringName *)&local_98,0);
  Callable::~Callable((Callable *)&local_98);
  Callable::~Callable((Callable *)local_a8);
  if (((byte)this[0x2fa] & 0x40) == 0) {
    create_custom_callable_function_pointer<TabContainer>
              ((TabContainer *)&local_98,(char *)this,(_func_void *)"&TabContainer::_repaint");
    Variant::Variant((Variant *)local_78,0);
    Callable::call_deferredp((Variant **)&local_98,0);
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Callable::~Callable((Callable *)&local_98);
  }
LAB_00104bb8:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* TabContainer::_bind_methods() */

void TabContainer::_bind_methods(void)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  int *piVar7;
  MethodBind *pMVar8;
  undefined8 uVar9;
  uint uVar10;
  int *piVar11;
  long lVar12;
  long in_FS_OFFSET;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  long local_220;
  long local_218;
  long local_210;
  long local_208 [6];
  long local_1d8 [2];
  undefined1 local_1c8 [16];
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198 [2];
  int *local_188;
  undefined8 local_180;
  long local_170;
  char *local_168;
  undefined *puStack_160;
  undefined8 local_158;
  char *local_148;
  char *pcStack_140;
  undefined8 local_138;
  char *local_128;
  char *pcStack_120;
  undefined8 local_118;
  char *local_108;
  char *pcStack_100;
  undefined8 local_f8;
  char *local_e8;
  char *pcStack_e0;
  undefined8 local_d8;
  char *local_c8;
  undefined *puStack_c0;
  undefined8 local_b8;
  char *local_a8;
  char *pcStack_a0;
  undefined8 local_98;
  char *local_88;
  char *pcStack_80;
  undefined8 local_78;
  undefined8 local_68;
  char **ppcStack_60;
  code *pcStack_58;
  code *pcStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  D_METHODP((char *)local_1d8,(char ***)"get_tab_count",0);
  ppcStack_60 = (char **)0x0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar8 = create_method_bind<TabContainer,int>(get_tab_count);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)local_1d8);
  D_METHOD<char_const*>((char *)local_1d8,"set_current_tab");
  ppcStack_60 = (char **)0x0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar8 = create_method_bind<TabContainer,int>(set_current_tab);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)local_1d8);
  D_METHODP((char *)local_1d8,(char ***)"get_current_tab",0);
  ppcStack_60 = (char **)0x0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar8 = create_method_bind<TabContainer,int>(get_current_tab);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)local_1d8);
  D_METHODP((char *)local_1d8,(char ***)"get_previous_tab",0);
  ppcStack_60 = (char **)0x0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar8 = create_method_bind<TabContainer,int>(get_previous_tab);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)local_1d8);
  D_METHODP((char *)local_1d8,(char ***)"select_previous_available",0);
  ppcStack_60 = (char **)0x0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar8 = create_method_bind<TabContainer,bool>(select_previous_available);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)local_1d8);
  D_METHODP((char *)local_1d8,(char ***)"select_next_available",0);
  ppcStack_60 = (char **)0x0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar8 = create_method_bind<TabContainer,bool>(select_next_available);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)local_1d8);
  D_METHODP((char *)local_1d8,(char ***)"get_current_tab_control",0);
  ppcStack_60 = (char **)0x0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar8 = create_method_bind<TabContainer,Control*>(get_current_tab_control);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)local_1d8);
  D_METHODP((char *)local_1d8,(char ***)"get_tab_bar",0);
  ppcStack_60 = (char **)0x0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar8 = create_method_bind<TabContainer,TabBar*>(get_tab_bar);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)local_1d8);
  D_METHOD<char_const*>((char *)local_1d8,"get_tab_control");
  ppcStack_60 = (char **)0x0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar8 = create_method_bind<TabContainer,Control*,int>(get_tab_control);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)local_1d8);
  D_METHOD<char_const*>((char *)local_1d8,"set_tab_alignment");
  ppcStack_60 = (char **)0x0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar8 = create_method_bind<TabContainer,TabBar::AlignmentMode>(set_tab_alignment);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)local_1d8);
  D_METHODP((char *)local_1d8,(char ***)"get_tab_alignment",0);
  ppcStack_60 = (char **)0x0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar8 = create_method_bind<TabContainer,TabBar::AlignmentMode>(get_tab_alignment);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)local_1d8);
  D_METHOD<char_const*>((char *)local_1d8,"set_tabs_position");
  ppcStack_60 = (char **)0x0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar8 = create_method_bind<TabContainer,TabContainer::TabPosition>(set_tabs_position);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)local_1d8);
  D_METHODP((char *)local_1d8,(char ***)"get_tabs_position",0);
  ppcStack_60 = (char **)0x0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar8 = create_method_bind<TabContainer,TabContainer::TabPosition>(get_tabs_position);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)local_1d8);
  D_METHOD<char_const*>((char *)local_1d8,"set_clip_tabs");
  ppcStack_60 = (char **)0x0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar8 = create_method_bind<TabContainer,bool>(set_clip_tabs);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)local_1d8);
  D_METHODP((char *)local_1d8,(char ***)"get_clip_tabs",0);
  ppcStack_60 = (char **)0x0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar8 = create_method_bind<TabContainer,bool>(get_clip_tabs);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)local_1d8);
  D_METHOD<char_const*>((char *)local_1d8,"set_tabs_visible");
  ppcStack_60 = (char **)0x0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar8 = create_method_bind<TabContainer,bool>(set_tabs_visible);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)local_1d8);
  D_METHODP((char *)local_1d8,(char ***)"are_tabs_visible",0);
  ppcStack_60 = (char **)0x0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar8 = create_method_bind<TabContainer,bool>(are_tabs_visible);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)local_1d8);
  D_METHOD<char_const*>((char *)local_1d8,"set_all_tabs_in_front");
  ppcStack_60 = (char **)0x0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar8 = create_method_bind<TabContainer,bool>(set_all_tabs_in_front);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)local_1d8);
  D_METHODP((char *)local_1d8,(char ***)"is_all_tabs_in_front",0);
  ppcStack_60 = (char **)0x0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar8 = create_method_bind<TabContainer,bool>(is_all_tabs_in_front);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)local_1d8);
  local_78 = 0;
  local_88 = "tab_idx";
  pcStack_80 = "title";
  uVar10 = (uint)&local_68;
  ppcStack_60 = &pcStack_80;
  local_68 = &local_88;
  D_METHODP((char *)local_1d8,(char ***)"set_tab_title",uVar10);
  ppcStack_60 = (char **)0x0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar8 = create_method_bind<TabContainer,int,String_const&>(set_tab_title);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)local_1d8);
  D_METHOD<char_const*>((char *)local_1d8,"get_tab_title");
  ppcStack_60 = (char **)0x0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar8 = create_method_bind<TabContainer,String,int>(get_tab_title);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)local_1d8);
  local_98 = 0;
  local_a8 = "tab_idx";
  pcStack_a0 = "tooltip";
  ppcStack_60 = &pcStack_a0;
  local_68 = &local_a8;
  D_METHODP((char *)local_1d8,(char ***)"set_tab_tooltip",uVar10);
  ppcStack_60 = (char **)0x0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar8 = create_method_bind<TabContainer,int,String_const&>(set_tab_tooltip);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)local_1d8);
  D_METHOD<char_const*>((char *)local_1d8,"get_tab_tooltip");
  ppcStack_60 = (char **)0x0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar8 = create_method_bind<TabContainer,String,int>(get_tab_tooltip);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)local_1d8);
  local_b8 = 0;
  local_c8 = "tab_idx";
  puStack_c0 = &_LC110;
  ppcStack_60 = &puStack_c0;
  local_68 = &local_c8;
  D_METHODP((char *)local_1d8,(char ***)"set_tab_icon",uVar10);
  ppcStack_60 = (char **)0x0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar8 = create_method_bind<TabContainer,int,Ref<Texture2D>const&>(set_tab_icon);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)local_1d8);
  D_METHOD<char_const*>((char *)local_1d8,"get_tab_icon");
  ppcStack_60 = (char **)0x0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar8 = create_method_bind<TabContainer,Ref<Texture2D>,int>(get_tab_icon);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)local_1d8);
  local_d8 = 0;
  local_e8 = "tab_idx";
  pcStack_e0 = "width";
  ppcStack_60 = &pcStack_e0;
  local_68 = &local_e8;
  D_METHODP((char *)local_1d8,(char ***)"set_tab_icon_max_width",uVar10);
  ppcStack_60 = (char **)0x0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar8 = create_method_bind<TabContainer,int,int>(set_tab_icon_max_width);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)local_1d8);
  D_METHOD<char_const*>((char *)local_1d8,"get_tab_icon_max_width");
  ppcStack_60 = (char **)0x0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar8 = create_method_bind<TabContainer,int,int>(get_tab_icon_max_width);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)local_1d8);
  local_f8 = 0;
  local_108 = "tab_idx";
  pcStack_100 = "disabled";
  ppcStack_60 = &pcStack_100;
  local_68 = &local_108;
  D_METHODP((char *)local_1d8,(char ***)"set_tab_disabled",uVar10);
  ppcStack_60 = (char **)0x0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar8 = create_method_bind<TabContainer,int,bool>(set_tab_disabled);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)local_1d8);
  D_METHOD<char_const*>((char *)local_1d8,"is_tab_disabled");
  ppcStack_60 = (char **)0x0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar8 = create_method_bind<TabContainer,bool,int>(is_tab_disabled);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)local_1d8);
  local_118 = 0;
  local_128 = "tab_idx";
  pcStack_120 = "hidden";
  ppcStack_60 = &pcStack_120;
  local_68 = &local_128;
  D_METHODP((char *)local_1d8,(char ***)"set_tab_hidden",uVar10);
  ppcStack_60 = (char **)0x0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar8 = create_method_bind<TabContainer,int,bool>(set_tab_hidden);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)local_1d8);
  D_METHOD<char_const*>((char *)local_1d8,"is_tab_hidden");
  ppcStack_60 = (char **)0x0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar8 = create_method_bind<TabContainer,bool,int>(is_tab_hidden);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)local_1d8);
  local_138 = 0;
  local_148 = "tab_idx";
  pcStack_140 = "metadata";
  ppcStack_60 = &pcStack_140;
  local_68 = &local_148;
  D_METHODP((char *)local_1d8,(char ***)"set_tab_metadata",uVar10);
  ppcStack_60 = (char **)0x0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar8 = create_method_bind<TabContainer,int,Variant_const&>(set_tab_metadata);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)local_1d8);
  D_METHOD<char_const*>((char *)local_1d8,"get_tab_metadata");
  ppcStack_60 = (char **)0x0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar8 = create_method_bind<TabContainer,Variant,int>(get_tab_metadata);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)local_1d8);
  local_158 = 0;
  local_168 = "tab_idx";
  puStack_160 = &_LC110;
  ppcStack_60 = &puStack_160;
  local_68 = &local_168;
  D_METHODP((char *)local_1d8,(char ***)"set_tab_button_icon",uVar10);
  ppcStack_60 = (char **)0x0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar8 = create_method_bind<TabContainer,int,Ref<Texture2D>const&>(set_tab_button_icon);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)local_1d8);
  D_METHOD<char_const*>((char *)local_1d8,"get_tab_button_icon");
  ppcStack_60 = (char **)0x0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar8 = create_method_bind<TabContainer,Ref<Texture2D>,int>(get_tab_button_icon);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)local_1d8);
  D_METHOD<char_const*>((char *)local_1d8,"get_tab_idx_at_point");
  ppcStack_60 = (char **)0x0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar8 = create_method_bind<TabContainer,int,Vector2_const&>(get_tab_idx_at_point);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)local_1d8);
  D_METHOD<char_const*>((char *)local_1d8,"get_tab_idx_from_control");
  ppcStack_60 = (char **)0x0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar8 = create_method_bind<TabContainer,int,Control*>(get_tab_idx_from_control);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)local_1d8);
  D_METHOD<char_const*>((char *)local_1d8,"set_popup");
  ppcStack_60 = (char **)0x0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar8 = create_method_bind<TabContainer,Node*>(set_popup);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)local_1d8);
  D_METHODP((char *)local_1d8,(char ***)"get_popup",0);
  ppcStack_60 = (char **)0x0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar8 = create_method_bind<TabContainer,Popup*>(get_popup);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)local_1d8);
  D_METHOD<char_const*>((char *)local_1d8,"set_drag_to_rearrange_enabled");
  ppcStack_60 = (char **)0x0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar8 = create_method_bind<TabContainer,bool>(set_drag_to_rearrange_enabled);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)local_1d8);
  D_METHODP((char *)local_1d8,(char ***)"get_drag_to_rearrange_enabled",0);
  ppcStack_60 = (char **)0x0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar8 = create_method_bind<TabContainer,bool>(get_drag_to_rearrange_enabled);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)local_1d8);
  D_METHOD<char_const*>((char *)local_1d8,"set_tabs_rearrange_group");
  ppcStack_60 = (char **)0x0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar8 = create_method_bind<TabContainer,int>(set_tabs_rearrange_group);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)local_1d8);
  D_METHODP((char *)local_1d8,(char ***)"get_tabs_rearrange_group",0);
  ppcStack_60 = (char **)0x0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar8 = create_method_bind<TabContainer,int>(get_tabs_rearrange_group);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)local_1d8);
  D_METHOD<char_const*>((char *)local_1d8,"set_use_hidden_tabs_for_min_size");
  ppcStack_60 = (char **)0x0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar8 = create_method_bind<TabContainer,bool>(set_use_hidden_tabs_for_min_size);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)local_1d8);
  D_METHODP((char *)local_1d8,(char ***)"get_use_hidden_tabs_for_min_size",0);
  ppcStack_60 = (char **)0x0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar8 = create_method_bind<TabContainer,bool>(get_use_hidden_tabs_for_min_size);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)local_1d8);
  D_METHOD<char_const*>((char *)local_1d8,"set_tab_focus_mode");
  ppcStack_60 = (char **)0x0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar8 = create_method_bind<TabContainer,Control::FocusMode>(set_tab_focus_mode);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)local_1d8);
  D_METHODP((char *)local_1d8,(char ***)"get_tab_focus_mode",0);
  ppcStack_60 = (char **)0x0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar8 = create_method_bind<TabContainer,Control::FocusMode>(get_tab_focus_mode);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)local_1d8);
  D_METHOD<char_const*>((char *)local_1d8,"set_deselect_enabled");
  ppcStack_60 = (char **)0x0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar8 = create_method_bind<TabContainer,bool>(set_deselect_enabled);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)local_1d8);
  D_METHODP((char *)local_1d8,(char ***)"get_deselect_enabled",0);
  ppcStack_60 = (char **)0x0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar8 = create_method_bind<TabContainer,bool>(get_deselect_enabled);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)local_1d8);
  local_220 = 0;
  local_228 = 0;
  String::parse_latin1((String *)&local_228,"");
  local_230 = 0;
  String::parse_latin1((String *)&local_230,"idx_to");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_208,2,(String *)&local_230,0,(String *)&local_228,6,
             (String *)&local_220);
  local_218 = 0;
  String::parse_latin1((String *)&local_218,"active_tab_rearranged");
  local_1c8 = (undefined1  [16])0x0;
  local_1d8[0] = 0;
  local_1d8[1] = 0;
  local_1b8 = 0;
  local_1b0 = 0;
  local_1a8 = 6;
  local_1a0 = 1;
  local_198[0] = 0;
  local_188 = (int *)0x0;
  local_180 = 0;
  local_170 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)local_1d8,(CowData *)&local_218);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_198,(PropertyInfo *)local_208);
  local_238 = 0;
  String::parse_latin1((String *)&local_238,"TabContainer");
  StringName::StringName((StringName *)&local_210,(String *)&local_238,false);
  ClassDB::add_signal((StringName *)&local_210,(MethodInfo *)local_1d8);
  if ((StringName::configured != '\0') && (local_210 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_238);
  lVar2 = local_170;
  if (local_170 != 0) {
    LOCK();
    plVar1 = (long *)(local_170 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_170 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  piVar7 = local_188;
  if (local_188 != (int *)0x0) {
    LOCK();
    plVar1 = (long *)(local_188 + -4);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      if (local_188 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = *(long *)(local_188 + -2);
      lVar12 = 0;
      local_188 = (int *)0x0;
      piVar11 = piVar7;
      if (lVar2 != 0) {
        do {
          if (Variant::needs_deinit[*piVar11] != '\0') {
            Variant::_clear_internal();
          }
          lVar12 = lVar12 + 1;
          piVar11 = piVar11 + 6;
        } while (lVar2 != lVar12);
      }
      Memory::free_static(piVar7 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_198);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b0);
  if ((StringName::configured != '\0') && (local_1c8._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_1c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_1d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_218);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_208);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_230);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_228);
  if ((StringName::configured != '\0') && (local_220 != 0)) {
    StringName::unref();
  }
  local_220 = 0;
  local_228 = 0;
  String::parse_latin1((String *)&local_228,"");
  local_230 = 0;
  String::parse_latin1((String *)&local_230,"tab");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_208,2,(String *)&local_230,0,(String *)&local_228,6,
             (String *)&local_220);
  local_218 = 0;
  String::parse_latin1((String *)&local_218,"tab_changed");
  local_1c8 = (undefined1  [16])0x0;
  local_1d8[0] = 0;
  local_1d8[1] = 0;
  local_1b8 = 0;
  local_1b0 = 0;
  local_1a8 = 6;
  local_1a0 = 1;
  local_198[0] = 0;
  local_188 = (int *)0x0;
  local_180 = 0;
  local_170 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)local_1d8,(CowData *)&local_218);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_198,(PropertyInfo *)local_208);
  local_238 = 0;
  String::parse_latin1((String *)&local_238,"TabContainer");
  StringName::StringName((StringName *)&local_210,(String *)&local_238,false);
  ClassDB::add_signal((StringName *)&local_210,(MethodInfo *)local_1d8);
  if ((StringName::configured != '\0') && (local_210 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_238);
  lVar2 = local_170;
  if (local_170 != 0) {
    LOCK();
    plVar1 = (long *)(local_170 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_170 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  piVar7 = local_188;
  if (local_188 != (int *)0x0) {
    LOCK();
    plVar1 = (long *)(local_188 + -4);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      if (local_188 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = *(long *)(local_188 + -2);
      lVar12 = 0;
      local_188 = (int *)0x0;
      piVar11 = piVar7;
      if (lVar2 != 0) {
        do {
          if (Variant::needs_deinit[*piVar11] != '\0') {
            Variant::_clear_internal();
          }
          lVar12 = lVar12 + 1;
          piVar11 = piVar11 + 6;
        } while (lVar2 != lVar12);
      }
      Memory::free_static(piVar7 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_198);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b0);
  if ((StringName::configured != '\0') && (local_1c8._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_1c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_1d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_218);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_208);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_230);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_228);
  if ((StringName::configured != '\0') && (local_220 != 0)) {
    StringName::unref();
  }
  local_220 = 0;
  local_228 = 0;
  String::parse_latin1((String *)&local_228,"");
  local_230 = 0;
  String::parse_latin1((String *)&local_230,"tab");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_208,2,(String *)&local_230,0,(String *)&local_228,6,
             (String *)&local_220);
  local_218 = 0;
  String::parse_latin1((String *)&local_218,"tab_clicked");
  local_1c8 = (undefined1  [16])0x0;
  local_1d8[0] = 0;
  local_1d8[1] = 0;
  local_1b8 = 0;
  local_1b0 = 0;
  local_1a8 = 6;
  local_1a0 = 1;
  local_198[0] = 0;
  local_188 = (int *)0x0;
  local_180 = 0;
  local_170 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)local_1d8,(CowData *)&local_218);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_198,(PropertyInfo *)local_208);
  local_238 = 0;
  String::parse_latin1((String *)&local_238,"TabContainer");
  StringName::StringName((StringName *)&local_210,(String *)&local_238,false);
  ClassDB::add_signal((StringName *)&local_210,(MethodInfo *)local_1d8);
  if ((StringName::configured != '\0') && (local_210 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_238);
  lVar2 = local_170;
  if (local_170 != 0) {
    LOCK();
    plVar1 = (long *)(local_170 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_170 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  piVar7 = local_188;
  if (local_188 != (int *)0x0) {
    LOCK();
    plVar1 = (long *)(local_188 + -4);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      if (local_188 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = *(long *)(local_188 + -2);
      lVar12 = 0;
      local_188 = (int *)0x0;
      piVar11 = piVar7;
      if (lVar2 != 0) {
        do {
          if (Variant::needs_deinit[*piVar11] != '\0') {
            Variant::_clear_internal();
          }
          lVar12 = lVar12 + 1;
          piVar11 = piVar11 + 6;
        } while (lVar2 != lVar12);
      }
      Memory::free_static(piVar7 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_198);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b0);
  if ((StringName::configured != '\0') && (local_1c8._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_1c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_1d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_218);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_208);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_230);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_228);
  if ((StringName::configured != '\0') && (local_220 != 0)) {
    StringName::unref();
  }
  local_220 = 0;
  local_228 = 0;
  String::parse_latin1((String *)&local_228,"");
  local_230 = 0;
  String::parse_latin1((String *)&local_230,"tab");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_208,2,(String *)&local_230,0,(String *)&local_228,6,
             (String *)&local_220);
  local_218 = 0;
  String::parse_latin1((String *)&local_218,"tab_hovered");
  local_1c8 = (undefined1  [16])0x0;
  local_1d8[0] = 0;
  local_1d8[1] = 0;
  local_1b8 = 0;
  local_1b0 = 0;
  local_1a8 = 6;
  local_1a0 = 1;
  local_198[0] = 0;
  local_188 = (int *)0x0;
  local_180 = 0;
  local_170 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)local_1d8,(CowData *)&local_218);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_198,(PropertyInfo *)local_208);
  local_238 = 0;
  String::parse_latin1((String *)&local_238,"TabContainer");
  StringName::StringName((StringName *)&local_210,(String *)&local_238,false);
  ClassDB::add_signal((StringName *)&local_210,(MethodInfo *)local_1d8);
  if ((StringName::configured != '\0') && (local_210 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_238);
  lVar2 = local_170;
  if (local_170 != 0) {
    LOCK();
    plVar1 = (long *)(local_170 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_170 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  piVar7 = local_188;
  if (local_188 != (int *)0x0) {
    LOCK();
    plVar1 = (long *)(local_188 + -4);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      if (local_188 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = *(long *)(local_188 + -2);
      lVar12 = 0;
      local_188 = (int *)0x0;
      piVar11 = piVar7;
      if (lVar2 != 0) {
        do {
          if (Variant::needs_deinit[*piVar11] != '\0') {
            Variant::_clear_internal();
          }
          lVar12 = lVar12 + 1;
          piVar11 = piVar11 + 6;
        } while (lVar2 != lVar12);
      }
      Memory::free_static(piVar7 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_198);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b0);
  if ((StringName::configured != '\0') && (local_1c8._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_1c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_1d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_218);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_208);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_230);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_228);
  if ((StringName::configured != '\0') && (local_220 != 0)) {
    StringName::unref();
  }
  local_220 = 0;
  local_228 = 0;
  String::parse_latin1((String *)&local_228,"");
  local_230 = 0;
  String::parse_latin1((String *)&local_230,"tab");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_208,2,(String *)&local_230,0,(String *)&local_228,6,
             (String *)&local_220);
  local_218 = 0;
  String::parse_latin1((String *)&local_218,"tab_selected");
  local_1c8 = (undefined1  [16])0x0;
  local_1d8[0] = 0;
  local_1d8[1] = 0;
  local_1b8 = 0;
  local_1b0 = 0;
  local_1a8 = 6;
  local_1a0 = 1;
  local_198[0] = 0;
  local_188 = (int *)0x0;
  local_180 = 0;
  local_170 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)local_1d8,(CowData *)&local_218);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_198,(PropertyInfo *)local_208);
  local_238 = 0;
  String::parse_latin1((String *)&local_238,"TabContainer");
  StringName::StringName((StringName *)&local_210,(String *)&local_238,false);
  ClassDB::add_signal((StringName *)&local_210,(MethodInfo *)local_1d8);
  if ((StringName::configured != '\0') && (local_210 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_238);
  lVar2 = local_170;
  if (local_170 != 0) {
    LOCK();
    plVar1 = (long *)(local_170 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_170 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  piVar7 = local_188;
  if (local_188 != (int *)0x0) {
    LOCK();
    plVar1 = (long *)(local_188 + -4);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      if (local_188 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = *(long *)(local_188 + -2);
      lVar12 = 0;
      local_188 = (int *)0x0;
      piVar11 = piVar7;
      if (lVar2 != 0) {
        do {
          if (Variant::needs_deinit[*piVar11] != '\0') {
            Variant::_clear_internal();
          }
          lVar12 = lVar12 + 1;
          piVar11 = piVar11 + 6;
        } while (lVar2 != lVar12);
      }
      Memory::free_static(piVar7 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_198);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b0);
  if ((StringName::configured != '\0') && (local_1c8._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_1c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_1d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_218);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_208);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_230);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_228);
  if ((StringName::configured != '\0') && (local_220 != 0)) {
    StringName::unref();
  }
  local_220 = 0;
  local_228 = 0;
  String::parse_latin1((String *)&local_228,"");
  local_230 = 0;
  String::parse_latin1((String *)&local_230,"tab");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_208,2,(String *)&local_230,0,(String *)&local_228,6,
             (String *)&local_220);
  local_218 = 0;
  String::parse_latin1((String *)&local_218,"tab_button_pressed");
  local_1c8 = (undefined1  [16])0x0;
  local_1d8[0] = 0;
  local_1d8[1] = 0;
  local_1b8 = 0;
  local_1b0 = 0;
  local_1a8 = 6;
  local_1a0 = 1;
  local_198[0] = 0;
  local_188 = (int *)0x0;
  local_180 = 0;
  local_170 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)local_1d8,(CowData *)&local_218);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_198,(PropertyInfo *)local_208);
  local_238 = 0;
  String::parse_latin1((String *)&local_238,"TabContainer");
  StringName::StringName((StringName *)&local_210,(String *)&local_238,false);
  ClassDB::add_signal((StringName *)&local_210,(MethodInfo *)local_1d8);
  if ((StringName::configured != '\0') && (local_210 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_238);
  lVar2 = local_170;
  if (local_170 != 0) {
    LOCK();
    plVar1 = (long *)(local_170 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_170 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  piVar7 = local_188;
  if (local_188 != (int *)0x0) {
    LOCK();
    plVar1 = (long *)(local_188 + -4);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      if (local_188 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = *(long *)(local_188 + -2);
      lVar12 = 0;
      local_188 = (int *)0x0;
      piVar11 = piVar7;
      if (lVar2 != 0) {
        do {
          if (Variant::needs_deinit[*piVar11] != '\0') {
            Variant::_clear_internal();
          }
          lVar12 = lVar12 + 1;
          piVar11 = piVar11 + 6;
        } while (lVar2 != lVar12);
      }
      Memory::free_static(piVar7 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_198);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b0);
  if ((StringName::configured != '\0') && (local_1c8._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_1c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_1d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_218);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_208);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_230);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_228);
  if ((StringName::configured != '\0') && (local_220 != 0)) {
    StringName::unref();
  }
  local_210 = 0;
  String::parse_latin1((String *)&local_210,"pre_popup_pressed");
  local_1c8 = (undefined1  [16])0x0;
  local_1d8[0] = 0;
  local_1d8[1] = 0;
  local_1b8 = 0;
  local_1b0 = 0;
  local_1a8 = 6;
  local_1a0 = 1;
  local_198[0] = 0;
  local_188 = (int *)0x0;
  local_180 = 0;
  local_170 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)local_1d8,(CowData *)&local_210);
  local_218 = 0;
  String::parse_latin1((String *)&local_218,"TabContainer");
  StringName::StringName((StringName *)local_208,(String *)&local_218,false);
  ClassDB::add_signal((StringName *)local_208,(MethodInfo *)local_1d8);
  if ((StringName::configured != '\0') && (local_208[0] != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_218);
  lVar2 = local_170;
  if (local_170 != 0) {
    LOCK();
    plVar1 = (long *)(local_170 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_170 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  piVar7 = local_188;
  if (local_188 != (int *)0x0) {
    LOCK();
    plVar1 = (long *)(local_188 + -4);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      if (local_188 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = *(long *)(local_188 + -2);
      lVar12 = 0;
      local_188 = (int *)0x0;
      piVar11 = piVar7;
      if (lVar2 != 0) {
        do {
          if (Variant::needs_deinit[*piVar11] != '\0') {
            Variant::_clear_internal();
          }
          lVar12 = lVar12 + 1;
          piVar11 = piVar11 + 6;
        } while (lVar2 != lVar12);
      }
      Memory::free_static(piVar7 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_198);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b0);
  if ((StringName::configured != '\0') && (local_1c8._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_1c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_1d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_210);
  _scs_create((char *)&local_210,true);
  _scs_create((char *)&local_218,true);
  local_220 = 0;
  local_228 = 0;
  String::parse_latin1((String *)&local_228,"Left,Center,Right");
  local_230 = 0;
  String::parse_latin1((String *)&local_230,"tab_alignment");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_1d8,2,(String *)&local_230,2,(String *)&local_228,6,
             (String *)&local_220);
  local_238 = 0;
  String::parse_latin1((String *)&local_238,"TabContainer");
  StringName::StringName((StringName *)local_208,(String *)&local_238,false);
  ClassDB::add_property
            ((StringName *)local_208,(PropertyInfo *)local_1d8,(StringName *)&local_218,
             (StringName *)&local_210,-1);
  if ((StringName::configured != '\0') && (local_208[0] != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_238);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_1d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_230);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_228);
  if ((((StringName::configured != '\0') &&
       ((local_220 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_218 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_210 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_210,true);
  _scs_create((char *)&local_218,true);
  local_220 = 0;
  local_228 = 0;
  String::parse_latin1((String *)&local_228,"-1,4096,1");
  local_230 = 0;
  String::parse_latin1((String *)&local_230,"current_tab");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_1d8,2,(String *)&local_230,1,(String *)&local_228,6,
             (String *)&local_220);
  local_238 = 0;
  String::parse_latin1((String *)&local_238,"TabContainer");
  StringName::StringName((StringName *)local_208,(String *)&local_238,false);
  ClassDB::add_property
            ((StringName *)local_208,(PropertyInfo *)local_1d8,(StringName *)&local_218,
             (StringName *)&local_210,-1);
  if ((StringName::configured != '\0') && (local_208[0] != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_238);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_1d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_230);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_228);
  if (((StringName::configured != '\0') &&
      ((local_220 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (((local_218 == 0 || (StringName::unref(), StringName::configured != '\0')) && (local_210 != 0)
      ))) {
    StringName::unref();
  }
  _scs_create((char *)&local_210,true);
  _scs_create((char *)&local_218,true);
  local_220 = 0;
  local_228 = 0;
  String::parse_latin1((String *)&local_228,"Top,Bottom");
  local_230 = 0;
  String::parse_latin1((String *)&local_230,"tabs_position");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_1d8,2,(String *)&local_230,2,(String *)&local_228,6,
             (String *)&local_220);
  local_238 = 0;
  String::parse_latin1((String *)&local_238,"TabContainer");
  StringName::StringName((StringName *)local_208,(String *)&local_238,false);
  ClassDB::add_property
            ((StringName *)local_208,(PropertyInfo *)local_1d8,(StringName *)&local_218,
             (StringName *)&local_210,-1);
  if ((StringName::configured != '\0') && (local_208[0] != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_238);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_1d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_230);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_228);
  if ((((StringName::configured != '\0') &&
       ((local_220 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_218 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_210 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_210,true);
  _scs_create((char *)&local_218,true);
  local_220 = 0;
  local_228 = 0;
  String::parse_latin1((String *)&local_228,"");
  local_230 = 0;
  String::parse_latin1((String *)&local_230,"clip_tabs");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_1d8,1,(String *)&local_230,0,(String *)&local_228,6,
             (String *)&local_220);
  local_238 = 0;
  String::parse_latin1((String *)&local_238,"TabContainer");
  StringName::StringName((StringName *)local_208,(String *)&local_238,false);
  ClassDB::add_property
            ((StringName *)local_208,(PropertyInfo *)local_1d8,(StringName *)&local_218,
             (StringName *)&local_210,-1);
  if ((StringName::configured != '\0') && (local_208[0] != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_238);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_1d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_230);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_228);
  if (((StringName::configured != '\0') &&
      ((local_220 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (((local_218 == 0 || (StringName::unref(), StringName::configured != '\0')) && (local_210 != 0)
      ))) {
    StringName::unref();
  }
  _scs_create((char *)&local_210,true);
  _scs_create((char *)&local_218,true);
  local_220 = 0;
  local_228 = 0;
  String::parse_latin1((String *)&local_228,"");
  local_230 = 0;
  String::parse_latin1((String *)&local_230,"tabs_visible");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_1d8,1,(String *)&local_230,0,(String *)&local_228,6,
             (String *)&local_220);
  local_238 = 0;
  String::parse_latin1((String *)&local_238,"TabContainer");
  StringName::StringName((StringName *)local_208,(String *)&local_238,false);
  ClassDB::add_property
            ((StringName *)local_208,(PropertyInfo *)local_1d8,(StringName *)&local_218,
             (StringName *)&local_210,-1);
  if ((StringName::configured != '\0') && (local_208[0] != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_238);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_1d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_230);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_228);
  if ((((StringName::configured != '\0') &&
       ((local_220 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_218 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_210 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_210,true);
  _scs_create((char *)&local_218,true);
  local_220 = 0;
  local_228 = 0;
  String::parse_latin1((String *)&local_228,"");
  local_230 = 0;
  String::parse_latin1((String *)&local_230,"all_tabs_in_front");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_1d8,1,(String *)&local_230,0,(String *)&local_228,6,
             (String *)&local_220);
  local_238 = 0;
  String::parse_latin1((String *)&local_238,"TabContainer");
  StringName::StringName((StringName *)local_208,(String *)&local_238,false);
  ClassDB::add_property
            ((StringName *)local_208,(PropertyInfo *)local_1d8,(StringName *)&local_218,
             (StringName *)&local_210,-1);
  if ((StringName::configured != '\0') && (local_208[0] != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_238);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_1d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_230);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_228);
  if ((((StringName::configured != '\0') &&
       ((local_220 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_218 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_210 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_210,true);
  _scs_create((char *)&local_218,true);
  local_220 = 0;
  local_228 = 0;
  String::parse_latin1((String *)&local_228,"");
  local_230 = 0;
  String::parse_latin1((String *)&local_230,"drag_to_rearrange_enabled");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_1d8,1,(String *)&local_230,0,(String *)&local_228,6,
             (String *)&local_220);
  local_238 = 0;
  String::parse_latin1((String *)&local_238,"TabContainer");
  StringName::StringName((StringName *)local_208,(String *)&local_238,false);
  ClassDB::add_property
            ((StringName *)local_208,(PropertyInfo *)local_1d8,(StringName *)&local_218,
             (StringName *)&local_210,-1);
  if ((StringName::configured != '\0') && (local_208[0] != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_238);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_1d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_230);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_228);
  if ((((StringName::configured != '\0') &&
       ((local_220 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_218 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_210 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_210,true);
  _scs_create((char *)&local_218,true);
  local_220 = 0;
  local_228 = 0;
  String::parse_latin1((String *)&local_228,"");
  local_230 = 0;
  String::parse_latin1((String *)&local_230,"tabs_rearrange_group");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_1d8,2,(String *)&local_230,0,(String *)&local_228,6,
             (String *)&local_220);
  local_238 = 0;
  String::parse_latin1((String *)&local_238,"TabContainer");
  StringName::StringName((StringName *)local_208,(String *)&local_238,false);
  ClassDB::add_property
            ((StringName *)local_208,(PropertyInfo *)local_1d8,(StringName *)&local_218,
             (StringName *)&local_210,-1);
  if ((StringName::configured != '\0') && (local_208[0] != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_238);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_1d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_230);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_228);
  if (((StringName::configured != '\0') &&
      ((local_220 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (((local_218 == 0 || (StringName::unref(), StringName::configured != '\0')) && (local_210 != 0)
      ))) {
    StringName::unref();
  }
  _scs_create((char *)&local_210,true);
  _scs_create((char *)&local_218,true);
  local_220 = 0;
  local_228 = 0;
  String::parse_latin1((String *)&local_228,"");
  local_230 = 0;
  String::parse_latin1((String *)&local_230,"use_hidden_tabs_for_min_size");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_1d8,1,(String *)&local_230,0,(String *)&local_228,6,
             (String *)&local_220);
  local_238 = 0;
  String::parse_latin1((String *)&local_238,"TabContainer");
  StringName::StringName((StringName *)local_208,(String *)&local_238,false);
  ClassDB::add_property
            ((StringName *)local_208,(PropertyInfo *)local_1d8,(StringName *)&local_218,
             (StringName *)&local_210,-1);
  if ((StringName::configured != '\0') && (local_208[0] != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_238);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_1d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_230);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_228);
  if ((((StringName::configured != '\0') &&
       ((local_220 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_218 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_210 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_210,true);
  _scs_create((char *)&local_218,true);
  local_220 = 0;
  local_228 = 0;
  String::parse_latin1((String *)&local_228,"None,Click,All");
  local_230 = 0;
  String::parse_latin1((String *)&local_230,"tab_focus_mode");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_1d8,2,(String *)&local_230,2,(String *)&local_228,6,
             (String *)&local_220);
  local_238 = 0;
  String::parse_latin1((String *)&local_238,"TabContainer");
  StringName::StringName((StringName *)local_208,(String *)&local_238,false);
  ClassDB::add_property
            ((StringName *)local_208,(PropertyInfo *)local_1d8,(StringName *)&local_218,
             (StringName *)&local_210,-1);
  if ((StringName::configured != '\0') && (local_208[0] != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_238);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_1d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_230);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_228);
  if ((((StringName::configured != '\0') &&
       ((local_220 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_218 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_210 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_210,true);
  _scs_create((char *)&local_218,true);
  local_220 = 0;
  local_228 = 0;
  String::parse_latin1((String *)&local_228,"");
  local_230 = 0;
  String::parse_latin1((String *)&local_230,"deselect_enabled");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_1d8,1,(String *)&local_230,0,(String *)&local_228,6,
             (String *)&local_220);
  local_238 = 0;
  String::parse_latin1((String *)&local_238,"TabContainer");
  StringName::StringName((StringName *)local_208,(String *)&local_238,false);
  ClassDB::add_property
            ((StringName *)local_208,(PropertyInfo *)local_1d8,(StringName *)&local_218,
             (StringName *)&local_210,-1);
  if ((StringName::configured != '\0') && (local_208[0] != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_238);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_1d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_230);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_228);
  if ((((StringName::configured != '\0') &&
       ((local_220 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_218 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_210 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)local_208,"POSITION_TOP",false);
  local_218 = 0;
  String::parse_latin1((String *)&local_218,"POSITION_TOP");
  GetTypeInfo<TabContainer::TabPosition,void>::get_class_info
            ((GetTypeInfo<TabContainer::TabPosition,void> *)local_1d8);
  local_210 = local_1c8._0_8_;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = local_1c8._8_8_;
  local_1c8 = auVar4 << 0x40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_1d8);
  local_220 = 0;
  String::parse_latin1((String *)&local_220,"TabContainer");
  StringName::StringName((StringName *)local_1d8,(String *)&local_220,false);
  ClassDB::bind_integer_constant
            ((StringName *)local_1d8,(StringName *)&local_210,(StringName *)local_208,0,false);
  if ((StringName::configured != '\0') && (local_1d8[0] != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_220);
  if ((StringName::configured != '\0') && (local_210 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_218);
  if ((StringName::configured != '\0') && (local_208[0] != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)local_208,"POSITION_BOTTOM",false);
  local_218 = 0;
  String::parse_latin1((String *)&local_218,"POSITION_BOTTOM");
  GetTypeInfo<TabContainer::TabPosition,void>::get_class_info
            ((GetTypeInfo<TabContainer::TabPosition,void> *)local_1d8);
  local_210 = local_1c8._0_8_;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = local_1c8._8_8_;
  local_1c8 = auVar5 << 0x40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_1d8);
  local_220 = 0;
  String::parse_latin1((String *)&local_220,"TabContainer");
  StringName::StringName((StringName *)local_1d8,(String *)&local_220,false);
  ClassDB::bind_integer_constant
            ((StringName *)local_1d8,(StringName *)&local_210,(StringName *)local_208,1,false);
  if ((StringName::configured != '\0') && (local_1d8[0] != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_220);
  if ((StringName::configured != '\0') && (local_210 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_218);
  if ((StringName::configured != '\0') && (local_208[0] != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)local_208,"POSITION_MAX",false);
  local_218 = 0;
  String::parse_latin1((String *)&local_218,"POSITION_MAX");
  GetTypeInfo<TabContainer::TabPosition,void>::get_class_info
            ((GetTypeInfo<TabContainer::TabPosition,void> *)local_1d8);
  local_210 = local_1c8._0_8_;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = local_1c8._8_8_;
  local_1c8 = auVar6 << 0x40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_1d8);
  local_220 = 0;
  String::parse_latin1((String *)&local_220,"TabContainer");
  StringName::StringName((StringName *)local_1d8,(String *)&local_220,false);
  ClassDB::bind_integer_constant
            ((StringName *)local_1d8,(StringName *)&local_210,(StringName *)local_208,2,false);
  if ((StringName::configured != '\0') && (local_1d8[0] != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_220);
  if ((StringName::configured != '\0') && (local_210 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_218);
  if ((StringName::configured != '\0') && (local_208[0] != 0)) {
    StringName::unref();
  }
  uVar9 = ThemeDB::get_singleton();
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  ppcStack_60 = (char **)0x0;
  pcStack_58 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#1}>
               ::_M_manager;
  pcStack_50 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#1}>
               ::_M_invoke;
  StringName::StringName((StringName *)local_1d8,"side_margin",false);
  StringName::StringName((StringName *)local_208,"side_margin",false);
  local_218 = 0;
  String::parse_latin1((String *)&local_218,"TabContainer");
  StringName::StringName((StringName *)&local_210,(String *)&local_218,false);
  ThemeDB::bind_class_item
            (uVar9,1,(StringName *)&local_210,(PropertyInfo *)local_208,
             (MethodDefinition *)local_1d8,&local_68);
  if ((StringName::configured != '\0') && (local_210 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_218);
  if ((StringName::configured != '\0') &&
     (((local_208[0] == 0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_1d8[0] != 0)))) {
    StringName::unref();
  }
  if (pcStack_58 != (code *)0x0) {
    (*pcStack_58)(&local_68,&local_68,3);
  }
  uVar9 = ThemeDB::get_singleton();
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  ppcStack_60 = (char **)0x0;
  pcStack_58 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#2}>
               ::_M_manager;
  pcStack_50 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#2}>
               ::_M_invoke;
  StringName::StringName((StringName *)local_1d8,"panel",false);
  StringName::StringName((StringName *)local_208,"panel_style",false);
  local_218 = 0;
  String::parse_latin1((String *)&local_218,"TabContainer");
  StringName::StringName((StringName *)&local_210,(String *)&local_218,false);
  ThemeDB::bind_class_item
            (uVar9,5,(StringName *)&local_210,(PropertyInfo *)local_208,
             (MethodDefinition *)local_1d8,&local_68);
  if ((StringName::configured != '\0') && (local_210 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_218);
  if (((StringName::configured != '\0') &&
      ((local_208[0] == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_1d8[0] != 0)) {
    StringName::unref();
  }
  if (pcStack_58 != (code *)0x0) {
    (*pcStack_58)(&local_68,&local_68,3);
  }
  uVar9 = ThemeDB::get_singleton();
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  ppcStack_60 = (char **)0x0;
  pcStack_58 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#3}>
               ::_M_manager;
  pcStack_50 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#3}>
               ::_M_invoke;
  StringName::StringName((StringName *)local_1d8,"tabbar_background",false);
  StringName::StringName((StringName *)local_208,"tabbar_style",false);
  local_218 = 0;
  String::parse_latin1((String *)&local_218,"TabContainer");
  StringName::StringName((StringName *)&local_210,(String *)&local_218,false);
  ThemeDB::bind_class_item
            (uVar9,5,(StringName *)&local_210,(PropertyInfo *)local_208,
             (MethodDefinition *)local_1d8,&local_68);
  if ((StringName::configured != '\0') && (local_210 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_218);
  if ((StringName::configured != '\0') &&
     (((local_208[0] == 0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_1d8[0] != 0)))) {
    StringName::unref();
  }
  if (pcStack_58 != (code *)0x0) {
    (*pcStack_58)(&local_68,&local_68,3);
  }
  uVar9 = ThemeDB::get_singleton();
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  ppcStack_60 = (char **)0x0;
  pcStack_58 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#4}>
               ::_M_manager;
  pcStack_50 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#4}>
               ::_M_invoke;
  StringName::StringName((StringName *)local_1d8,"menu",false);
  StringName::StringName((StringName *)local_208,"menu_icon",false);
  local_218 = 0;
  String::parse_latin1((String *)&local_218,"TabContainer");
  StringName::StringName((StringName *)&local_210,(String *)&local_218,false);
  ThemeDB::bind_class_item
            (uVar9,4,(StringName *)&local_210,(PropertyInfo *)local_208,
             (MethodDefinition *)local_1d8,&local_68);
  if ((StringName::configured != '\0') && (local_210 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_218);
  if (((StringName::configured != '\0') &&
      ((local_208[0] == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_1d8[0] != 0)) {
    StringName::unref();
  }
  if (pcStack_58 != (code *)0x0) {
    (*pcStack_58)(&local_68,&local_68,3);
  }
  uVar9 = ThemeDB::get_singleton();
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  ppcStack_60 = (char **)0x0;
  pcStack_58 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#5}>
               ::_M_manager;
  pcStack_50 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#5}>
               ::_M_invoke;
  StringName::StringName((StringName *)local_1d8,"menu_highlight",false);
  StringName::StringName((StringName *)local_208,"menu_hl_icon",false);
  local_218 = 0;
  String::parse_latin1((String *)&local_218,"TabContainer");
  StringName::StringName((StringName *)&local_210,(String *)&local_218,false);
  ThemeDB::bind_class_item
            (uVar9,4,(StringName *)&local_210,(PropertyInfo *)local_208,
             (MethodDefinition *)local_1d8,&local_68);
  if ((StringName::configured != '\0') && (local_210 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_218);
  if ((StringName::configured != '\0') &&
     (((local_208[0] == 0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_1d8[0] != 0)))) {
    StringName::unref();
  }
  if (pcStack_58 != (code *)0x0) {
    (*pcStack_58)(&local_68,&local_68,3);
  }
  uVar9 = ThemeDB::get_singleton();
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  ppcStack_60 = (char **)0x0;
  pcStack_58 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#6}>
               ::_M_manager;
  pcStack_50 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#6}>
               ::_M_invoke;
  StringName::StringName((StringName *)local_1d8,"icon_separation",false);
  StringName::StringName((StringName *)local_208,"icon_separation",false);
  local_218 = 0;
  String::parse_latin1((String *)&local_218,"TabContainer");
  StringName::StringName((StringName *)&local_210,(String *)&local_218,false);
  ThemeDB::bind_class_item
            (uVar9,1,(StringName *)&local_210,(PropertyInfo *)local_208,
             (MethodDefinition *)local_1d8,&local_68);
  if ((StringName::configured != '\0') && (local_210 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_218);
  if (((StringName::configured != '\0') &&
      ((local_208[0] == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_1d8[0] != 0)) {
    StringName::unref();
  }
  if (pcStack_58 != (code *)0x0) {
    (*pcStack_58)(&local_68,&local_68,3);
  }
  uVar9 = ThemeDB::get_singleton();
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  ppcStack_60 = (char **)0x0;
  pcStack_58 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#7}>
               ::_M_manager;
  pcStack_50 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#7}>
               ::_M_invoke;
  StringName::StringName((StringName *)local_1d8,"icon_max_width",false);
  StringName::StringName((StringName *)local_208,"icon_max_width",false);
  local_218 = 0;
  String::parse_latin1((String *)&local_218,"TabContainer");
  StringName::StringName((StringName *)&local_210,(String *)&local_218,false);
  ThemeDB::bind_class_item
            (uVar9,1,(StringName *)&local_210,(PropertyInfo *)local_208,
             (MethodDefinition *)local_1d8,&local_68);
  if ((StringName::configured != '\0') && (local_210 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_218);
  if ((StringName::configured != '\0') &&
     (((local_208[0] == 0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_1d8[0] != 0)))) {
    StringName::unref();
  }
  if (pcStack_58 != (code *)0x0) {
    (*pcStack_58)(&local_68,&local_68,3);
  }
  uVar9 = ThemeDB::get_singleton();
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  ppcStack_60 = (char **)0x0;
  pcStack_58 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#8}>
               ::_M_manager;
  pcStack_50 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#8}>
               ::_M_invoke;
  StringName::StringName((StringName *)local_1d8,"tab_unselected",false);
  StringName::StringName((StringName *)local_208,"tab_unselected_style",false);
  local_218 = 0;
  String::parse_latin1((String *)&local_218,"TabContainer");
  StringName::StringName((StringName *)&local_210,(String *)&local_218,false);
  ThemeDB::bind_class_item
            (uVar9,5,(StringName *)&local_210,(PropertyInfo *)local_208,
             (MethodDefinition *)local_1d8,&local_68);
  if ((StringName::configured != '\0') && (local_210 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_218);
  if (((StringName::configured != '\0') &&
      ((local_208[0] == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_1d8[0] != 0)) {
    StringName::unref();
  }
  if (pcStack_58 != (code *)0x0) {
    (*pcStack_58)(&local_68,&local_68,3);
  }
  uVar9 = ThemeDB::get_singleton();
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  ppcStack_60 = (char **)0x0;
  pcStack_58 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#9}>
               ::_M_manager;
  pcStack_50 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#9}>
               ::_M_invoke;
  StringName::StringName((StringName *)local_1d8,"tab_hovered",false);
  StringName::StringName((StringName *)local_208,"tab_hovered_style",false);
  local_218 = 0;
  String::parse_latin1((String *)&local_218,"TabContainer");
  StringName::StringName((StringName *)&local_210,(String *)&local_218,false);
  ThemeDB::bind_class_item
            (uVar9,5,(StringName *)&local_210,(PropertyInfo *)local_208,
             (MethodDefinition *)local_1d8,&local_68);
  if ((StringName::configured != '\0') && (local_210 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_218);
  if ((StringName::configured != '\0') &&
     (((local_208[0] == 0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_1d8[0] != 0)))) {
    StringName::unref();
  }
  if (pcStack_58 != (code *)0x0) {
    (*pcStack_58)(&local_68,&local_68,3);
  }
  uVar9 = ThemeDB::get_singleton();
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  ppcStack_60 = (char **)0x0;
  pcStack_58 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#10}>
               ::_M_manager;
  pcStack_50 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#10}>
               ::_M_invoke;
  StringName::StringName((StringName *)local_1d8,"tab_selected",false);
  StringName::StringName((StringName *)local_208,"tab_selected_style",false);
  local_218 = 0;
  String::parse_latin1((String *)&local_218,"TabContainer");
  StringName::StringName((StringName *)&local_210,(String *)&local_218,false);
  ThemeDB::bind_class_item
            (uVar9,5,(StringName *)&local_210,(PropertyInfo *)local_208,
             (MethodDefinition *)local_1d8,&local_68);
  if ((StringName::configured != '\0') && (local_210 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_218);
  if (((StringName::configured != '\0') &&
      ((local_208[0] == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_1d8[0] != 0)) {
    StringName::unref();
  }
  if (pcStack_58 != (code *)0x0) {
    (*pcStack_58)(&local_68,&local_68,3);
  }
  uVar9 = ThemeDB::get_singleton();
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  ppcStack_60 = (char **)0x0;
  pcStack_58 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#11}>
               ::_M_manager;
  pcStack_50 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#11}>
               ::_M_invoke;
  StringName::StringName((StringName *)local_1d8,"tab_disabled",false);
  StringName::StringName((StringName *)local_208,"tab_disabled_style",false);
  local_218 = 0;
  String::parse_latin1((String *)&local_218,"TabContainer");
  StringName::StringName((StringName *)&local_210,(String *)&local_218,false);
  ThemeDB::bind_class_item
            (uVar9,5,(StringName *)&local_210,(PropertyInfo *)local_208,
             (MethodDefinition *)local_1d8,&local_68);
  if ((StringName::configured != '\0') && (local_210 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_218);
  if ((StringName::configured != '\0') &&
     (((local_208[0] == 0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_1d8[0] != 0)))) {
    StringName::unref();
  }
  if (pcStack_58 != (code *)0x0) {
    (*pcStack_58)(&local_68,&local_68,3);
  }
  uVar9 = ThemeDB::get_singleton();
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  ppcStack_60 = (char **)0x0;
  pcStack_58 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#12}>
               ::_M_manager;
  pcStack_50 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#12}>
               ::_M_invoke;
  StringName::StringName((StringName *)local_1d8,"tab_focus",false);
  StringName::StringName((StringName *)local_208,"tab_focus_style",false);
  local_218 = 0;
  String::parse_latin1((String *)&local_218,"TabContainer");
  StringName::StringName((StringName *)&local_210,(String *)&local_218,false);
  ThemeDB::bind_class_item
            (uVar9,5,(StringName *)&local_210,(PropertyInfo *)local_208,
             (MethodDefinition *)local_1d8,&local_68);
  if ((StringName::configured != '\0') && (local_210 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_218);
  if (((StringName::configured != '\0') &&
      ((local_208[0] == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_1d8[0] != 0)) {
    StringName::unref();
  }
  if (pcStack_58 != (code *)0x0) {
    (*pcStack_58)(&local_68,&local_68,3);
  }
  uVar9 = ThemeDB::get_singleton();
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  ppcStack_60 = (char **)0x0;
  pcStack_58 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#13}>
               ::_M_manager;
  pcStack_50 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#13}>
               ::_M_invoke;
  StringName::StringName((StringName *)local_1d8,"increment",false);
  StringName::StringName((StringName *)local_208,"increment_icon",false);
  local_218 = 0;
  String::parse_latin1((String *)&local_218,"TabContainer");
  StringName::StringName((StringName *)&local_210,(String *)&local_218,false);
  ThemeDB::bind_class_item
            (uVar9,4,(StringName *)&local_210,(PropertyInfo *)local_208,
             (MethodDefinition *)local_1d8,&local_68);
  if ((StringName::configured != '\0') && (local_210 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_218);
  if ((StringName::configured != '\0') &&
     (((local_208[0] == 0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_1d8[0] != 0)))) {
    StringName::unref();
  }
  if (pcStack_58 != (code *)0x0) {
    (*pcStack_58)(&local_68,&local_68,3);
  }
  uVar9 = ThemeDB::get_singleton();
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  ppcStack_60 = (char **)0x0;
  pcStack_58 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#14}>
               ::_M_manager;
  pcStack_50 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#14}>
               ::_M_invoke;
  StringName::StringName((StringName *)local_1d8,"increment_highlight",false);
  StringName::StringName((StringName *)local_208,"increment_hl_icon",false);
  local_218 = 0;
  String::parse_latin1((String *)&local_218,"TabContainer");
  StringName::StringName((StringName *)&local_210,(String *)&local_218,false);
  ThemeDB::bind_class_item
            (uVar9,4,(StringName *)&local_210,(PropertyInfo *)local_208,
             (MethodDefinition *)local_1d8,&local_68);
  if ((StringName::configured != '\0') && (local_210 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_218);
  if (((StringName::configured != '\0') &&
      ((local_208[0] == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_1d8[0] != 0)) {
    StringName::unref();
  }
  if (pcStack_58 != (code *)0x0) {
    (*pcStack_58)(&local_68,&local_68,3);
  }
  uVar9 = ThemeDB::get_singleton();
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  ppcStack_60 = (char **)0x0;
  pcStack_58 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#15}>
               ::_M_manager;
  pcStack_50 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#15}>
               ::_M_invoke;
  StringName::StringName((StringName *)local_1d8,"decrement",false);
  StringName::StringName((StringName *)local_208,"decrement_icon",false);
  local_218 = 0;
  String::parse_latin1((String *)&local_218,"TabContainer");
  StringName::StringName((StringName *)&local_210,(String *)&local_218,false);
  ThemeDB::bind_class_item
            (uVar9,4,(StringName *)&local_210,(PropertyInfo *)local_208,
             (MethodDefinition *)local_1d8,&local_68);
  if ((StringName::configured != '\0') && (local_210 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_218);
  if ((StringName::configured != '\0') &&
     (((local_208[0] == 0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_1d8[0] != 0)))) {
    StringName::unref();
  }
  if (pcStack_58 != (code *)0x0) {
    (*pcStack_58)(&local_68,&local_68,3);
  }
  uVar9 = ThemeDB::get_singleton();
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  ppcStack_60 = (char **)0x0;
  pcStack_58 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#16}>
               ::_M_manager;
  pcStack_50 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#16}>
               ::_M_invoke;
  StringName::StringName((StringName *)local_1d8,"decrement_highlight",false);
  StringName::StringName((StringName *)local_208,"decrement_hl_icon",false);
  local_218 = 0;
  String::parse_latin1((String *)&local_218,"TabContainer");
  StringName::StringName((StringName *)&local_210,(String *)&local_218,false);
  ThemeDB::bind_class_item
            (uVar9,4,(StringName *)&local_210,(PropertyInfo *)local_208,
             (MethodDefinition *)local_1d8,&local_68);
  if ((StringName::configured != '\0') && (local_210 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_218);
  if (((StringName::configured != '\0') &&
      ((local_208[0] == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_1d8[0] != 0)) {
    StringName::unref();
  }
  if (pcStack_58 != (code *)0x0) {
    (*pcStack_58)(&local_68,&local_68,3);
  }
  uVar9 = ThemeDB::get_singleton();
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  ppcStack_60 = (char **)0x0;
  pcStack_58 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#17}>
               ::_M_manager;
  pcStack_50 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#17}>
               ::_M_invoke;
  StringName::StringName((StringName *)local_1d8,"drop_mark",false);
  StringName::StringName((StringName *)local_208,"drop_mark_icon",false);
  local_218 = 0;
  String::parse_latin1((String *)&local_218,"TabContainer");
  StringName::StringName((StringName *)&local_210,(String *)&local_218,false);
  ThemeDB::bind_class_item
            (uVar9,4,(StringName *)&local_210,(PropertyInfo *)local_208,
             (MethodDefinition *)local_1d8,&local_68);
  if ((StringName::configured != '\0') && (local_210 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_218);
  if ((StringName::configured != '\0') &&
     (((local_208[0] == 0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_1d8[0] != 0)))) {
    StringName::unref();
  }
  if (pcStack_58 != (code *)0x0) {
    (*pcStack_58)(&local_68,&local_68,3);
  }
  uVar9 = ThemeDB::get_singleton();
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  ppcStack_60 = (char **)0x0;
  pcStack_58 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#18}>
               ::_M_manager;
  pcStack_50 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#18}>
               ::_M_invoke;
  StringName::StringName((StringName *)local_1d8,"drop_mark_color",false);
  StringName::StringName((StringName *)local_208,"drop_mark_color",false);
  local_218 = 0;
  String::parse_latin1((String *)&local_218,"TabContainer");
  StringName::StringName((StringName *)&local_210,(String *)&local_218,false);
  ThemeDB::bind_class_item
            (uVar9,0,(StringName *)&local_210,(PropertyInfo *)local_208,
             (MethodDefinition *)local_1d8,&local_68);
  if ((StringName::configured != '\0') && (local_210 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_218);
  if (((StringName::configured != '\0') &&
      ((local_208[0] == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_1d8[0] != 0)) {
    StringName::unref();
  }
  if (pcStack_58 != (code *)0x0) {
    (*pcStack_58)(&local_68,&local_68,3);
  }
  uVar9 = ThemeDB::get_singleton();
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  ppcStack_60 = (char **)0x0;
  pcStack_58 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#19}>
               ::_M_manager;
  pcStack_50 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#19}>
               ::_M_invoke;
  StringName::StringName((StringName *)local_1d8,"font_selected_color",false);
  StringName::StringName((StringName *)local_208,"font_selected_color",false);
  local_218 = 0;
  String::parse_latin1((String *)&local_218,"TabContainer");
  StringName::StringName((StringName *)&local_210,(String *)&local_218,false);
  ThemeDB::bind_class_item
            (uVar9,0,(StringName *)&local_210,(PropertyInfo *)local_208,
             (MethodDefinition *)local_1d8,&local_68);
  if ((StringName::configured != '\0') && (local_210 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_218);
  if ((StringName::configured != '\0') &&
     (((local_208[0] == 0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_1d8[0] != 0)))) {
    StringName::unref();
  }
  if (pcStack_58 != (code *)0x0) {
    (*pcStack_58)(&local_68,&local_68,3);
  }
  uVar9 = ThemeDB::get_singleton();
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  ppcStack_60 = (char **)0x0;
  pcStack_58 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#20}>
               ::_M_manager;
  pcStack_50 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#20}>
               ::_M_invoke;
  StringName::StringName((StringName *)local_1d8,"font_hovered_color",false);
  StringName::StringName((StringName *)local_208,"font_hovered_color",false);
  local_218 = 0;
  String::parse_latin1((String *)&local_218,"TabContainer");
  StringName::StringName((StringName *)&local_210,(String *)&local_218,false);
  ThemeDB::bind_class_item
            (uVar9,0,(StringName *)&local_210,(PropertyInfo *)local_208,
             (MethodDefinition *)local_1d8,&local_68);
  if ((StringName::configured != '\0') && (local_210 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_218);
  if (((StringName::configured != '\0') &&
      ((local_208[0] == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_1d8[0] != 0)) {
    StringName::unref();
  }
  if (pcStack_58 != (code *)0x0) {
    (*pcStack_58)(&local_68,&local_68,3);
  }
  uVar9 = ThemeDB::get_singleton();
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  ppcStack_60 = (char **)0x0;
  pcStack_58 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#21}>
               ::_M_manager;
  pcStack_50 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#21}>
               ::_M_invoke;
  StringName::StringName((StringName *)local_1d8,"font_unselected_color",false);
  StringName::StringName((StringName *)local_208,"font_unselected_color",false);
  local_218 = 0;
  String::parse_latin1((String *)&local_218,"TabContainer");
  StringName::StringName((StringName *)&local_210,(String *)&local_218,false);
  ThemeDB::bind_class_item
            (uVar9,0,(StringName *)&local_210,(PropertyInfo *)local_208,
             (MethodDefinition *)local_1d8,&local_68);
  if ((StringName::configured != '\0') && (local_210 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_218);
  if ((StringName::configured != '\0') &&
     (((local_208[0] == 0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_1d8[0] != 0)))) {
    StringName::unref();
  }
  if (pcStack_58 != (code *)0x0) {
    (*pcStack_58)(&local_68,&local_68,3);
  }
  uVar9 = ThemeDB::get_singleton();
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  ppcStack_60 = (char **)0x0;
  pcStack_58 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#22}>
               ::_M_manager;
  pcStack_50 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#22}>
               ::_M_invoke;
  StringName::StringName((StringName *)local_1d8,"font_disabled_color",false);
  StringName::StringName((StringName *)local_208,"font_disabled_color",false);
  local_218 = 0;
  String::parse_latin1((String *)&local_218,"TabContainer");
  StringName::StringName((StringName *)&local_210,(String *)&local_218,false);
  ThemeDB::bind_class_item
            (uVar9,0,(StringName *)&local_210,(PropertyInfo *)local_208,
             (MethodDefinition *)local_1d8,&local_68);
  if ((StringName::configured != '\0') && (local_210 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_218);
  if (((StringName::configured != '\0') &&
      ((local_208[0] == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_1d8[0] != 0)) {
    StringName::unref();
  }
  if (pcStack_58 != (code *)0x0) {
    (*pcStack_58)(&local_68,&local_68,3);
  }
  uVar9 = ThemeDB::get_singleton();
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  ppcStack_60 = (char **)0x0;
  pcStack_58 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#23}>
               ::_M_manager;
  pcStack_50 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#23}>
               ::_M_invoke;
  StringName::StringName((StringName *)local_1d8,"font_outline_color",false);
  StringName::StringName((StringName *)local_208,"font_outline_color",false);
  local_218 = 0;
  String::parse_latin1((String *)&local_218,"TabContainer");
  StringName::StringName((StringName *)&local_210,(String *)&local_218,false);
  ThemeDB::bind_class_item
            (uVar9,0,(StringName *)&local_210,(PropertyInfo *)local_208,
             (MethodDefinition *)local_1d8,&local_68);
  if ((StringName::configured != '\0') && (local_210 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_218);
  if ((StringName::configured != '\0') &&
     (((local_208[0] == 0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_1d8[0] != 0)))) {
    StringName::unref();
  }
  if (pcStack_58 != (code *)0x0) {
    (*pcStack_58)(&local_68,&local_68,3);
  }
  uVar9 = ThemeDB::get_singleton();
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  ppcStack_60 = (char **)0x0;
  pcStack_58 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#24}>
               ::_M_manager;
  pcStack_50 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#24}>
               ::_M_invoke;
  StringName::StringName((StringName *)local_1d8,"font",false);
  StringName::StringName((StringName *)local_208,"tab_font",false);
  local_218 = 0;
  String::parse_latin1((String *)&local_218,"TabContainer");
  StringName::StringName((StringName *)&local_210,(String *)&local_218,false);
  ThemeDB::bind_class_item
            (uVar9,2,(StringName *)&local_210,(PropertyInfo *)local_208,
             (MethodDefinition *)local_1d8,&local_68);
  if ((StringName::configured != '\0') && (local_210 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_218);
  if (((StringName::configured != '\0') &&
      ((local_208[0] == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_1d8[0] != 0)) {
    StringName::unref();
  }
  if (pcStack_58 != (code *)0x0) {
    (*pcStack_58)(&local_68,&local_68,3);
  }
  uVar9 = ThemeDB::get_singleton();
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  ppcStack_60 = (char **)0x0;
  pcStack_58 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#25}>
               ::_M_manager;
  pcStack_50 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#25}>
               ::_M_invoke;
  StringName::StringName((StringName *)local_1d8,"font_size",false);
  StringName::StringName((StringName *)local_208,"tab_font_size",false);
  local_218 = 0;
  String::parse_latin1((String *)&local_218,"TabContainer");
  StringName::StringName((StringName *)&local_210,(String *)&local_218,false);
  ThemeDB::bind_class_item
            (uVar9,3,(StringName *)&local_210,(PropertyInfo *)local_208,
             (MethodDefinition *)local_1d8,&local_68);
  if ((StringName::configured != '\0') && (local_210 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_218);
  if ((StringName::configured != '\0') &&
     (((local_208[0] == 0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_1d8[0] != 0)))) {
    StringName::unref();
  }
  if (pcStack_58 != (code *)0x0) {
    (*pcStack_58)(&local_68,&local_68,3);
  }
  uVar9 = ThemeDB::get_singleton();
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  ppcStack_60 = (char **)0x0;
  pcStack_58 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#26}>
               ::_M_manager;
  pcStack_50 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#26}>
               ::_M_invoke;
  StringName::StringName((StringName *)local_1d8,"outline_size",false);
  StringName::StringName((StringName *)local_208,"outline_size",false);
  local_218 = 0;
  String::parse_latin1((String *)&local_218,"TabContainer");
  StringName::StringName((StringName *)&local_210,(String *)&local_218,false);
  ThemeDB::bind_class_item
            (uVar9,1,(StringName *)&local_210,(PropertyInfo *)local_208,
             (MethodDefinition *)local_1d8,&local_68);
  if ((StringName::configured != '\0') && (local_210 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_218);
  if (((StringName::configured != '\0') &&
      ((local_208[0] == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_1d8[0] != 0)) {
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



/* TabContainer::_get_tab_controls() const */

void TabContainer::_get_tab_controls(void)

{
  long lVar1;
  int iVar2;
  Control *pCVar3;
  long lVar4;
  int iVar5;
  long in_RSI;
  Vector<Control*> *in_RDI;
  
  iVar5 = 0;
  *(undefined8 *)(in_RDI + 8) = 0;
  do {
    while( true ) {
      iVar2 = Node::get_child_count(SUB81(in_RSI,0));
      if (iVar2 <= iVar5) {
        return;
      }
      Node::get_child((int)in_RSI,SUB41(iVar5,0));
      pCVar3 = (Control *)Container::as_sortable_control();
      if ((pCVar3 != (Control *)0x0) && (pCVar3 != *(Control **)(in_RSI + 0xa00))) break;
LAB_0010ae0f:
      iVar5 = iVar5 + 1;
    }
    lVar1 = *(long *)(in_RSI + 0xa30);
    if ((lVar1 != 0) && (0 < *(long *)(lVar1 + -8))) {
      lVar4 = 0;
      do {
        if (pCVar3 == *(Control **)(lVar1 + lVar4 * 8)) goto LAB_0010ae0f;
        lVar4 = lVar4 + 1;
      } while (*(long *)(lVar1 + -8) != lVar4);
    }
    iVar5 = iVar5 + 1;
    Vector<Control*>::push_back(in_RDI,pCVar3);
  } while( true );
}



/* TabContainer::_repaint() */

void __thiscall TabContainer::_repaint(TabContainer *this)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long in_FS_OFFSET;
  float fVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  long local_40;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  _get_tab_controls();
  iVar4 = TabBar::get_current_tab();
  if (*(int *)(this + 0xa0c) == 1) {
    Control::set_anchor_and_offset(*(undefined8 *)(this + 0xa00),3,1);
    uVar3 = *(undefined8 *)(this + 0xa00);
    _get_tab_height(this);
    Control::set_anchor_and_offset(uVar3,1,1);
  }
  else {
    uVar3 = *(undefined8 *)(this + 0xa00);
    iVar5 = _get_tab_height(this);
    auVar14._4_12_ = SUB1612((undefined1  [16])0x0,4);
    auVar14._0_4_ = (float)iVar5;
    Control::set_anchor_and_offset(0,auVar14._0_8_,uVar3,3,1);
    Control::set_anchor_and_offset(*(undefined8 *)(this + 0xa00),1,1);
  }
  this[0xa40] = (TabContainer)0x1;
  if (local_40 == 0) {
    this[0xa40] = (TabContainer)0x0;
    if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
      Control::update_minimum_size();
      return;
    }
  }
  else {
    lVar6 = 0;
    if (0 < *(long *)(local_40 + -8)) {
      do {
        while (uVar3 = *(undefined8 *)(local_40 + lVar6 * 8), iVar4 != (int)lVar6) {
          CanvasItem::hide();
          lVar6 = lVar6 + 1;
          if (*(long *)(local_40 + -8) <= lVar6) goto LAB_0010b060;
        }
        CanvasItem::show();
        Control::set_anchors_and_offsets_preset(uVar3,0xf,0,0);
        if (this[0xa08] != (TabContainer)0x0) {
          if (*(int *)(this + 0xa0c) == 1) {
            iVar5 = _get_tab_height(this);
            auVar13._4_12_ = SUB1612((undefined1  [16])0x0,4);
            auVar13._0_4_ = (float)-iVar5;
            Control::set_offset(auVar13._0_8_,uVar3,3);
          }
          else {
            iVar5 = _get_tab_height(this);
            auVar8._4_12_ = SUB1612((undefined1  [16])0x0,4);
            auVar8._0_4_ = (float)iVar5;
            Control::set_offset(auVar8._0_8_,uVar3,1);
          }
        }
        lVar6 = lVar6 + 1;
        fVar7 = (float)Control::get_offset(uVar3,1);
        auVar9._0_8_ = StyleBox::get_margin(*(undefined8 *)(this + 0xa50),1);
        auVar9._8_8_ = extraout_XMM0_Qb;
        auVar10._4_12_ = auVar9._4_12_;
        auVar10._0_4_ = (float)auVar9._0_8_ + fVar7;
        Control::set_offset(auVar10._0_8_,uVar3,1);
        fVar7 = (float)Control::get_offset(uVar3,0);
        auVar11._0_8_ = StyleBox::get_margin(*(undefined8 *)(this + 0xa50),0);
        auVar11._8_8_ = extraout_XMM0_Qb_00;
        auVar12._4_12_ = auVar11._4_12_;
        auVar12._0_4_ = (float)auVar11._0_8_ + fVar7;
        Control::set_offset(auVar12._0_8_,uVar3,0);
        Control::get_offset(uVar3,2);
        StyleBox::get_margin(*(undefined8 *)(this + 0xa50),2);
        Control::set_offset(uVar3,2);
        Control::get_offset(uVar3,3);
        StyleBox::get_margin(*(undefined8 *)(this + 0xa50),3);
        Control::set_offset(uVar3);
      } while (lVar6 < *(long *)(local_40 + -8));
    }
LAB_0010b060:
    this[0xa40] = (TabContainer)0x0;
    Control::update_minimum_size();
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
        Memory::free_static((void *)(local_40 + -0x10),false);
        return;
      }
    }
    else if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TabContainer::_on_theme_changed() */

void __thiscall TabContainer::_on_theme_changed(TabContainer *this)

{
  long lVar1;
  StringName *pSVar2;
  int iVar3;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (this[0xa21] != (TabContainer)0x0) {
    Control::begin_bulk_theme_override();
    pSVar2 = *(StringName **)(this + 0xa00);
    if (_on_theme_changed()::{lambda()#1}::operator()()::sname == '\0') {
      iVar3 = __cxa_guard_acquire(&_on_theme_changed()::{lambda()#1}::operator()()::sname);
      if (iVar3 != 0) {
        _scs_create((char *)&_on_theme_changed()::{lambda()#1}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_on_theme_changed()::{lambda()#1}::operator()()::sname
                     ,&__dso_handle);
        __cxa_guard_release(&_on_theme_changed()::{lambda()#1}::operator()()::sname);
      }
    }
    Control::add_theme_style_override
              (pSVar2,(Ref *)&_on_theme_changed()::{lambda()#1}::operator()()::sname);
    pSVar2 = *(StringName **)(this + 0xa00);
    if (_on_theme_changed()::{lambda()#2}::operator()()::sname == '\0') {
      iVar3 = __cxa_guard_acquire(&_on_theme_changed()::{lambda()#2}::operator()()::sname);
      if (iVar3 != 0) {
        _scs_create((char *)&_on_theme_changed()::{lambda()#2}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_on_theme_changed()::{lambda()#2}::operator()()::sname
                     ,&__dso_handle);
        __cxa_guard_release(&_on_theme_changed()::{lambda()#2}::operator()()::sname);
      }
    }
    Control::add_theme_style_override
              (pSVar2,(Ref *)&_on_theme_changed()::{lambda()#2}::operator()()::sname);
    pSVar2 = *(StringName **)(this + 0xa00);
    if (_on_theme_changed()::{lambda()#3}::operator()()::sname == '\0') {
      iVar3 = __cxa_guard_acquire(&_on_theme_changed()::{lambda()#3}::operator()()::sname);
      if (iVar3 != 0) {
        _scs_create((char *)&_on_theme_changed()::{lambda()#3}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_on_theme_changed()::{lambda()#3}::operator()()::sname
                     ,&__dso_handle);
        __cxa_guard_release(&_on_theme_changed()::{lambda()#3}::operator()()::sname);
      }
    }
    Control::add_theme_style_override
              (pSVar2,(Ref *)&_on_theme_changed()::{lambda()#3}::operator()()::sname);
    pSVar2 = *(StringName **)(this + 0xa00);
    if (_on_theme_changed()::{lambda()#4}::operator()()::sname == '\0') {
      iVar3 = __cxa_guard_acquire(&_on_theme_changed()::{lambda()#4}::operator()()::sname);
      if (iVar3 != 0) {
        _scs_create((char *)&_on_theme_changed()::{lambda()#4}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_on_theme_changed()::{lambda()#4}::operator()()::sname
                     ,&__dso_handle);
        __cxa_guard_release(&_on_theme_changed()::{lambda()#4}::operator()()::sname);
      }
    }
    Control::add_theme_style_override
              (pSVar2,(Ref *)&_on_theme_changed()::{lambda()#4}::operator()()::sname);
    pSVar2 = *(StringName **)(this + 0xa00);
    if (_on_theme_changed()::{lambda()#5}::operator()()::sname == '\0') {
      iVar3 = __cxa_guard_acquire(&_on_theme_changed()::{lambda()#5}::operator()()::sname);
      if (iVar3 != 0) {
        _scs_create((char *)&_on_theme_changed()::{lambda()#5}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_on_theme_changed()::{lambda()#5}::operator()()::sname
                     ,&__dso_handle);
        __cxa_guard_release(&_on_theme_changed()::{lambda()#5}::operator()()::sname);
      }
    }
    Control::add_theme_style_override
              (pSVar2,(Ref *)&_on_theme_changed()::{lambda()#5}::operator()()::sname);
    pSVar2 = *(StringName **)(this + 0xa00);
    if (_on_theme_changed()::{lambda()#6}::operator()()::sname == '\0') {
      iVar3 = __cxa_guard_acquire(&_on_theme_changed()::{lambda()#6}::operator()()::sname);
      if (iVar3 != 0) {
        _scs_create((char *)&_on_theme_changed()::{lambda()#6}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_on_theme_changed()::{lambda()#6}::operator()()::sname
                     ,&__dso_handle);
        __cxa_guard_release(&_on_theme_changed()::{lambda()#6}::operator()()::sname);
      }
    }
    Control::add_theme_icon_override
              (pSVar2,(Ref *)&_on_theme_changed()::{lambda()#6}::operator()()::sname);
    pSVar2 = *(StringName **)(this + 0xa00);
    if (_on_theme_changed()::{lambda()#7}::operator()()::sname == '\0') {
      iVar3 = __cxa_guard_acquire(&_on_theme_changed()::{lambda()#7}::operator()()::sname);
      if (iVar3 != 0) {
        _scs_create((char *)&_on_theme_changed()::{lambda()#7}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_on_theme_changed()::{lambda()#7}::operator()()::sname
                     ,&__dso_handle);
        __cxa_guard_release(&_on_theme_changed()::{lambda()#7}::operator()()::sname);
      }
    }
    Control::add_theme_icon_override
              (pSVar2,(Ref *)&_on_theme_changed()::{lambda()#7}::operator()()::sname);
    pSVar2 = *(StringName **)(this + 0xa00);
    if (_on_theme_changed()::{lambda()#8}::operator()()::sname == '\0') {
      iVar3 = __cxa_guard_acquire(&_on_theme_changed()::{lambda()#8}::operator()()::sname);
      if (iVar3 != 0) {
        _scs_create((char *)&_on_theme_changed()::{lambda()#8}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_on_theme_changed()::{lambda()#8}::operator()()::sname
                     ,&__dso_handle);
        __cxa_guard_release(&_on_theme_changed()::{lambda()#8}::operator()()::sname);
      }
    }
    Control::add_theme_icon_override
              (pSVar2,(Ref *)&_on_theme_changed()::{lambda()#8}::operator()()::sname);
    pSVar2 = *(StringName **)(this + 0xa00);
    if (_on_theme_changed()::{lambda()#9}::operator()()::sname == '\0') {
      iVar3 = __cxa_guard_acquire(&_on_theme_changed()::{lambda()#9}::operator()()::sname);
      if (iVar3 != 0) {
        _scs_create((char *)&_on_theme_changed()::{lambda()#9}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_on_theme_changed()::{lambda()#9}::operator()()::sname
                     ,&__dso_handle);
        __cxa_guard_release(&_on_theme_changed()::{lambda()#9}::operator()()::sname);
      }
    }
    Control::add_theme_icon_override
              (pSVar2,(Ref *)&_on_theme_changed()::{lambda()#9}::operator()()::sname);
    pSVar2 = *(StringName **)(this + 0xa00);
    if (_on_theme_changed()::{lambda()#10}::operator()()::sname == '\0') {
      iVar3 = __cxa_guard_acquire(&_on_theme_changed()::{lambda()#10}::operator()()::sname);
      if (iVar3 != 0) {
        _scs_create((char *)&_on_theme_changed()::{lambda()#10}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &_on_theme_changed()::{lambda()#10}::operator()()::sname,&__dso_handle);
        __cxa_guard_release(&_on_theme_changed()::{lambda()#10}::operator()()::sname);
      }
    }
    Control::add_theme_icon_override
              (pSVar2,(Ref *)&_on_theme_changed()::{lambda()#10}::operator()()::sname);
    pSVar2 = *(StringName **)(this + 0xa00);
    if (_on_theme_changed()::{lambda()#11}::operator()()::sname == '\0') {
      iVar3 = __cxa_guard_acquire(&_on_theme_changed()::{lambda()#11}::operator()()::sname);
      if (iVar3 != 0) {
        _scs_create((char *)&_on_theme_changed()::{lambda()#11}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &_on_theme_changed()::{lambda()#11}::operator()()::sname,&__dso_handle);
        __cxa_guard_release(&_on_theme_changed()::{lambda()#11}::operator()()::sname);
      }
    }
    Control::add_theme_color_override
              (pSVar2,(Color *)&_on_theme_changed()::{lambda()#11}::operator()()::sname);
    pSVar2 = *(StringName **)(this + 0xa00);
    if (_on_theme_changed()::{lambda()#12}::operator()()::sname == '\0') {
      iVar3 = __cxa_guard_acquire(&_on_theme_changed()::{lambda()#12}::operator()()::sname);
      if (iVar3 != 0) {
        _scs_create((char *)&_on_theme_changed()::{lambda()#12}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &_on_theme_changed()::{lambda()#12}::operator()()::sname,&__dso_handle);
        __cxa_guard_release(&_on_theme_changed()::{lambda()#12}::operator()()::sname);
      }
    }
    Control::add_theme_color_override
              (pSVar2,(Color *)&_on_theme_changed()::{lambda()#12}::operator()()::sname);
    pSVar2 = *(StringName **)(this + 0xa00);
    if (_on_theme_changed()::{lambda()#13}::operator()()::sname == '\0') {
      iVar3 = __cxa_guard_acquire(&_on_theme_changed()::{lambda()#13}::operator()()::sname);
      if (iVar3 != 0) {
        _scs_create((char *)&_on_theme_changed()::{lambda()#13}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &_on_theme_changed()::{lambda()#13}::operator()()::sname,&__dso_handle);
        __cxa_guard_release(&_on_theme_changed()::{lambda()#13}::operator()()::sname);
      }
    }
    Control::add_theme_color_override
              (pSVar2,(Color *)&_on_theme_changed()::{lambda()#13}::operator()()::sname);
    pSVar2 = *(StringName **)(this + 0xa00);
    if (_on_theme_changed()::{lambda()#14}::operator()()::sname == '\0') {
      iVar3 = __cxa_guard_acquire(&_on_theme_changed()::{lambda()#14}::operator()()::sname);
      if (iVar3 != 0) {
        _scs_create((char *)&_on_theme_changed()::{lambda()#14}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &_on_theme_changed()::{lambda()#14}::operator()()::sname,&__dso_handle);
        __cxa_guard_release(&_on_theme_changed()::{lambda()#14}::operator()()::sname);
      }
    }
    Control::add_theme_color_override
              (pSVar2,(Color *)&_on_theme_changed()::{lambda()#14}::operator()()::sname);
    pSVar2 = *(StringName **)(this + 0xa00);
    if (_on_theme_changed()::{lambda()#15}::operator()()::sname == '\0') {
      iVar3 = __cxa_guard_acquire(&_on_theme_changed()::{lambda()#15}::operator()()::sname);
      if (iVar3 != 0) {
        _scs_create((char *)&_on_theme_changed()::{lambda()#15}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &_on_theme_changed()::{lambda()#15}::operator()()::sname,&__dso_handle);
        __cxa_guard_release(&_on_theme_changed()::{lambda()#15}::operator()()::sname);
      }
    }
    Control::add_theme_color_override
              (pSVar2,(Color *)&_on_theme_changed()::{lambda()#15}::operator()()::sname);
    pSVar2 = *(StringName **)(this + 0xa00);
    if (_on_theme_changed()::{lambda()#16}::operator()()::sname == '\0') {
      iVar3 = __cxa_guard_acquire(&_on_theme_changed()::{lambda()#16}::operator()()::sname);
      if (iVar3 != 0) {
        _scs_create((char *)&_on_theme_changed()::{lambda()#16}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &_on_theme_changed()::{lambda()#16}::operator()()::sname,&__dso_handle);
        __cxa_guard_release(&_on_theme_changed()::{lambda()#16}::operator()()::sname);
      }
    }
    Control::add_theme_color_override
              (pSVar2,(Color *)&_on_theme_changed()::{lambda()#16}::operator()()::sname);
    Control::add_theme_font_override
              (*(StringName **)(this + 0xa00),(Ref *)(SceneStringNames::singleton + 0xa0));
    Control::add_theme_font_size_override
              (*(StringName **)(this + 0xa00),(int)SceneStringNames::singleton + 0xa8);
    pSVar2 = *(StringName **)(this + 0xa00);
    if (_on_theme_changed()::{lambda()#17}::operator()()::sname == '\0') {
      iVar3 = __cxa_guard_acquire(&_on_theme_changed()::{lambda()#17}::operator()()::sname);
      if (iVar3 != 0) {
        _scs_create((char *)&_on_theme_changed()::{lambda()#17}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &_on_theme_changed()::{lambda()#17}::operator()()::sname,&__dso_handle);
        __cxa_guard_release(&_on_theme_changed()::{lambda()#17}::operator()()::sname);
      }
    }
    Control::add_theme_constant_override(pSVar2,0x10de40);
    pSVar2 = *(StringName **)(this + 0xa00);
    if (_on_theme_changed()::{lambda()#18}::operator()()::sname == '\0') {
      iVar3 = __cxa_guard_acquire(&_on_theme_changed()::{lambda()#18}::operator()()::sname);
      if (iVar3 != 0) {
        _scs_create((char *)&_on_theme_changed()::{lambda()#18}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &_on_theme_changed()::{lambda()#18}::operator()()::sname,&__dso_handle);
        __cxa_guard_release(&_on_theme_changed()::{lambda()#18}::operator()()::sname);
      }
    }
    Control::add_theme_constant_override(pSVar2,0x10de30);
    pSVar2 = *(StringName **)(this + 0xa00);
    if (_on_theme_changed()::{lambda()#19}::operator()()::sname == '\0') {
      iVar3 = __cxa_guard_acquire(&_on_theme_changed()::{lambda()#19}::operator()()::sname);
      if (iVar3 != 0) {
        _scs_create((char *)&_on_theme_changed()::{lambda()#19}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &_on_theme_changed()::{lambda()#19}::operator()()::sname,&__dso_handle);
        __cxa_guard_release(&_on_theme_changed()::{lambda()#19}::operator()()::sname);
      }
    }
    Control::add_theme_constant_override(pSVar2,0x10de20);
    Control::end_bulk_theme_override();
    _update_margins(this);
    iVar3 = TabBar::get_tab_count();
    if (iVar3 < 1) {
      Control::update_minimum_size();
    }
    else {
      _repaint(this);
    }
    CanvasItem::queue_redraw();
    this[0xa21] = (TabContainer)0x0;
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TabContainer::set_tab_icon(int, Ref<Texture2D> const&) */

void __thiscall TabContainer::set_tab_icon(TabContainer *this,int param_1,Ref *param_2)

{
  Object *pOVar1;
  Object *pOVar2;
  char cVar3;
  long in_FS_OFFSET;
  Object *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  TabBar::get_tab_icon((int)&local_48);
  pOVar2 = local_48;
  pOVar1 = *(Object **)param_2;
  if (local_48 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_48);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)local_48 + 0x140))(local_48);
        Memory::free_static(local_48,false);
      }
    }
  }
  if (pOVar2 == pOVar1) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    TabBar::set_tab_icon((int)*(undefined8 *)(this + 0xa00),(Ref *)(ulong)(uint)param_1);
    _update_margins(this);
    _repaint(this);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      CanvasItem::queue_redraw();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TabContainer::set_tab_icon_max_width(int, int) */

void __thiscall TabContainer::set_tab_icon_max_width(TabContainer *this,int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = TabBar::get_tab_icon_max_width((int)*(undefined8 *)(this + 0xa00));
  if (iVar1 != param_2) {
    TabBar::set_tab_icon_max_width((int)*(undefined8 *)(this + 0xa00),param_1);
    _update_margins(this);
    _repaint(this);
    CanvasItem::queue_redraw();
    return;
  }
  return;
}



/* TabContainer::set_tab_button_icon(int, Ref<Texture2D> const&) */

void TabContainer::set_tab_button_icon(int param_1,Ref *param_2)

{
  undefined4 in_register_0000003c;
  TabContainer *this;
  
  this = (TabContainer *)CONCAT44(in_register_0000003c,param_1);
  TabBar::set_tab_button_icon((int)*(undefined8 *)(this + 0xa00),param_2);
  _update_margins(this);
  _repaint(this);
  return;
}



/* TabContainer::_refresh_tab_indices() */

void TabContainer::_refresh_tab_indices(void)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long in_FS_OFFSET;
  long local_70 [2];
  long local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _get_tab_controls();
  lVar3 = local_60;
  if (local_60 != 0) {
    if (0 < *(long *)(local_60 + -8)) {
      lVar4 = 0;
      do {
        while( true ) {
          plVar1 = *(long **)(lVar3 + lVar4 * 8);
          pcVar2 = *(code **)(*plVar1 + 0xa8);
          Variant::Variant((Variant *)local_58,(int)lVar4);
          StringName::StringName((StringName *)local_70,"_tab_index",false);
          (*pcVar2)(plVar1,(StringName *)local_70,(Variant *)local_58);
          if ((StringName::configured != '\0') && (local_70[0] != 0)) {
            StringName::unref();
          }
          if (Variant::needs_deinit[local_58[0]] == '\0') break;
          lVar4 = lVar4 + 1;
          Variant::_clear_internal();
          if (*(long *)(lVar3 + -8) <= lVar4) goto LAB_0010bf30;
        }
        lVar4 = lVar4 + 1;
      } while (lVar4 < *(long *)(lVar3 + -8));
    }
LAB_0010bf30:
    LOCK();
    plVar1 = (long *)(lVar3 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        Memory::free_static((void *)(local_60 + -0x10),false);
        return;
      }
      goto LAB_0010bf8e;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010bf8e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TabContainer::_refresh_tab_names() */

void __thiscall TabContainer::_refresh_tab_names(TabContainer *this)

{
  long *plVar1;
  code *pcVar2;
  char *pcVar3;
  undefined8 uVar4;
  long lVar5;
  char cVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long in_FS_OFFSET;
  bool bVar10;
  long local_88;
  long local_80;
  long local_78;
  long local_70 [2];
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  uVar9 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _get_tab_controls();
  lVar5 = local_60;
  do {
    if (lVar5 == 0) {
LAB_0010c268:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
LAB_0010c3ba:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    if (*(long *)(lVar5 + -8) <= (long)uVar9) {
      LOCK();
      plVar1 = (long *)(lVar5 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          Memory::free_static((void *)(lVar5 + -0x10),false);
          return;
        }
        goto LAB_0010c3ba;
      }
      goto LAB_0010c268;
    }
    plVar1 = *(long **)(lVar5 + uVar9 * 8);
    pcVar2 = *(code **)(*plVar1 + 0xa0);
    local_60 = lVar5;
    StringName::StringName((StringName *)&local_88,"_tab_name",false);
    cVar6 = (*pcVar2)(plVar1);
    if (cVar6 == '\0') {
      TabBar::get_tab_title((int)(StrRange *)local_70);
      lVar7 = *(long *)(lVar5 + -8);
      if (lVar7 <= (long)uVar9) goto LAB_0010c2f6;
      Node::get_name();
      if (local_80 == 0) {
LAB_0010c2e9:
        local_78 = 0;
      }
      else {
        pcVar3 = *(char **)(local_80 + 8);
        local_78 = 0;
        if (pcVar3 == (char *)0x0) {
          plVar1 = (long *)(*(long *)(local_80 + 0x10) + -0x10);
          if (*(long *)(local_80 + 0x10) == 0) goto LAB_0010c2e9;
          do {
            lVar7 = *plVar1;
            if (lVar7 == 0) goto LAB_0010c2e9;
            LOCK();
            lVar8 = *plVar1;
            bVar10 = lVar7 == lVar8;
            if (bVar10) {
              *plVar1 = lVar7 + 1;
              lVar8 = lVar7;
            }
            UNLOCK();
          } while (!bVar10);
          if (lVar8 != -1) {
            local_78 = *(long *)(local_80 + 0x10);
          }
        }
        else {
          local_50 = strlen(pcVar3);
          local_58 = pcVar3;
          String::parse_latin1((StrRange *)&local_78);
        }
      }
      cVar6 = String::operator!=((String *)&local_78,(String *)local_70);
      lVar7 = local_78;
      if (local_78 != 0) {
        LOCK();
        plVar1 = (long *)(local_78 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_78 = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_80 != 0)) {
        StringName::unref();
      }
      lVar7 = local_70[0];
      if (local_70[0] != 0) {
        LOCK();
        plVar1 = (long *)(local_70[0] + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_70[0] = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_88 != 0)) {
        StringName::unref();
      }
      if (cVar6 == '\0') goto LAB_0010c001;
      lVar7 = *(long *)(lVar5 + -8);
      uVar4 = *(undefined8 *)(this + 0xa00);
      if (lVar7 <= (long)uVar9) {
LAB_0010c2f6:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,uVar9,lVar7,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      Node::get_name();
      if (local_78 == 0) {
        local_70[0] = 0;
      }
      else {
        pcVar3 = *(char **)(local_78 + 8);
        local_70[0] = 0;
        if (pcVar3 == (char *)0x0) {
          plVar1 = (long *)(*(long *)(local_78 + 0x10) + -0x10);
          if (*(long *)(local_78 + 0x10) != 0) {
            do {
              lVar5 = *plVar1;
              if (lVar5 == 0) goto LAB_0010c1f4;
              LOCK();
              lVar7 = *plVar1;
              bVar10 = lVar5 == lVar7;
              if (bVar10) {
                *plVar1 = lVar5 + 1;
                lVar7 = lVar5;
              }
              UNLOCK();
            } while (!bVar10);
            if (lVar7 != -1) {
              local_70[0] = *(long *)(local_78 + 0x10);
            }
          }
        }
        else {
          local_50 = strlen(pcVar3);
          local_58 = pcVar3;
          String::parse_latin1((StrRange *)local_70);
        }
      }
LAB_0010c1f4:
      TabBar::set_tab_title((int)uVar4,(String *)(uVar9 & 0xffffffff));
      lVar5 = local_70[0];
      if (local_70[0] != 0) {
        LOCK();
        plVar1 = (long *)(local_70[0] + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_70[0] = 0;
          Memory::free_static((void *)(lVar5 + -0x10),false);
        }
      }
      if ((StringName::configured == '\0') || (local_78 == 0)) goto LAB_0010c001;
      uVar9 = uVar9 + 1;
      StringName::unref();
      lVar5 = local_60;
    }
    else {
      if ((StringName::configured != '\0') && (local_88 != 0)) {
        StringName::unref();
      }
LAB_0010c001:
      uVar9 = uVar9 + 1;
      lVar5 = local_60;
    }
  } while( true );
}



/* TabContainer::_notification(int) */

void __thiscall TabContainer::_notification(TabContainer *this,int param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  int iVar10;
  code *pcVar11;
  long in_FS_OFFSET;
  float fVar12;
  float fVar13;
  int local_88;
  TabContainer local_78 [8];
  long local_70;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 < 0x32) {
    if (9 < param_1) {
      switch(param_1) {
      case 10:
        iVar5 = TabBar::get_tab_count();
        if (0 < iVar5) {
          _refresh_tab_names(this);
        }
        if (-2 < *(int *)(this + 0xa3c)) {
          if (((byte)this[0x2fa] & 0x40) != 0) {
            TabBar::set_current_tab((int)*(undefined8 *)(this + 0xa00));
          }
          *(undefined4 *)(this + 0xa3c) = 0xfffffffe;
        }
        break;
      case 0xd:
      case 0x28:
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          _update_margins(this);
          return;
        }
        goto LAB_0010c871;
      case 0x1e:
        uVar2 = *(undefined8 *)(this + 0x428);
        uStack_50 = Control::get_size();
        if (this[0xa08] == (TabContainer)0x0) {
          local_58 = 0;
          (**(code **)(**(long **)(this + 0xa50) + 0x1d8))(*(long **)(this + 0xa50),uVar2,&local_58)
          ;
        }
        else {
          iVar5 = _get_tab_height(this);
          fVar13 = 0.0;
          if (*(int *)(this + 0xa0c) == 1) {
            fVar13 = _LC241;
          }
          fVar12 = (float)((ulong)uStack_50 >> 0x20) - (float)iVar5;
          uVar3 = (undefined4)uStack_50;
          uStack_50 = CONCAT44((float)iVar5,uVar3);
          iVar10 = (int)(fVar13 * fVar12);
          local_58 = (ulong)(uint)(float)iVar10 << 0x20;
          (**(code **)(**(long **)(this + 0xa58) + 0x1d8))(*(long **)(this + 0xa58),uVar2,&local_58)
          ;
          iVar6 = 0;
          if (*(int *)(this + 0xa0c) == 0) {
            iVar6 = iVar5;
          }
          uStack_50 = CONCAT44(fVar12,uVar3);
          local_58 = (ulong)(uint)(float)iVar6 << 0x20;
          (**(code **)(**(long **)(this + 0xa50) + 0x1d8))(*(long **)(this + 0xa50),uVar2,&local_58)
          ;
          lVar7 = get_popup(this);
          if (lVar7 != 0) {
            cVar4 = (**(code **)(*(long *)this + 0x340))(this);
            local_88 = 0;
            if (cVar4 == '\0') {
              fVar13 = (float)Control::get_size();
              iVar6 = (**(code **)(**(long **)(this + 0xa60) + 0x1c8))();
              local_88 = (int)(fVar13 - (float)iVar6);
            }
            if (this[0xa10] == (TabContainer)0x0) {
              plVar9 = *(long **)(this + 0xa60);
              pcVar11 = *(code **)(*plVar9 + 0x1f0);
              local_58 = CONCAT44(_LC241,_LC241);
              uStack_50 = CONCAT44(_LC241,_LC241);
              iVar6 = (**(code **)(*plVar9 + 0x1d0))(plVar9);
            }
            else {
              plVar9 = *(long **)(this + 0xa68);
              pcVar11 = *(code **)(*plVar9 + 0x1f0);
              local_58 = CONCAT44(_LC241,_LC241);
              uStack_50 = CONCAT44(_LC241,_LC241);
              iVar6 = (**(code **)(*plVar9 + 0x1d0))(plVar9);
            }
            local_60 = CONCAT44((float)((iVar5 - iVar6) / 2 + iVar10),(float)local_88);
            (*pcVar11)(plVar9,*(undefined8 *)(this + 0x428),&local_60,&local_58,0);
          }
        }
        break;
      case 0x1f:
        cVar4 = CanvasItem::is_visible();
        if (cVar4 != '\0') {
          this[0xa40] = (TabContainer)0x1;
          _get_tab_controls();
          if (*(int *)(this + 0xa3c) < -1) {
            TabBar::get_current_tab();
          }
          lVar7 = local_70;
          if (local_70 == 0) {
            this[0xa40] = (TabContainer)0x0;
          }
          else {
            lVar8 = 0;
            if (0 < *(long *)(local_70 + -8)) {
              do {
                lVar1 = lVar8 * 8;
                lVar8 = lVar8 + 1;
                CanvasItem::set_visible(SUB81(*(undefined8 *)(lVar7 + lVar1),0));
              } while (lVar8 < *(long *)(lVar7 + -8));
            }
            this[0xa40] = (TabContainer)0x0;
            LOCK();
            plVar9 = (long *)(lVar7 + -0x10);
            *plVar9 = *plVar9 + -1;
            UNLOCK();
            if (*plVar9 == 0) {
              if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                Memory::free_static((void *)(local_70 + -0x10),false);
                return;
              }
              goto LAB_0010c871;
            }
          }
        }
        break;
      case 0x2d:
      case 0x31:
        goto switchD_0010c40d_caseD_2d;
      }
    }
  }
  else if (param_1 == 0x7da) {
switchD_0010c40d_caseD_2d:
    this[0xa21] = (TabContainer)0x1;
    create_custom_callable_function_pointer<TabContainer>
              (local_78,(char *)this,(_func_void *)"&TabContainer::_on_theme_changed");
    Variant::Variant((Variant *)&local_58,0);
    Callable::call_deferredp((Variant **)local_78,0);
    if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
    }
    Callable::~Callable((Callable *)local_78);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010c871:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TabContainer::get_tab_control(int) const */

long __thiscall TabContainer::get_tab_control(TabContainer *this,int param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long in_FS_OFFSET;
  long local_20;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  _get_tab_controls();
  if (param_1 < 0) {
    lVar3 = local_20;
    if (local_20 == 0) goto LAB_0010c8c8;
LAB_0010c910:
    lVar3 = 0;
  }
  else {
    if (local_20 == 0) {
      lVar3 = 0;
      goto LAB_0010c8c8;
    }
    if (*(long *)(local_20 + -8) <= (long)param_1) goto LAB_0010c910;
    lVar3 = *(long *)(local_20 + (long)param_1 * 8);
  }
  LOCK();
  plVar1 = (long *)(local_20 + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    Memory::free_static((void *)(local_20 + -0x10),false);
  }
LAB_0010c8c8:
  if (lVar2 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar3;
}



/* TabContainer::_drag_move_tab(int, int) */

void __thiscall TabContainer::_drag_move_tab(TabContainer *this,int param_1,int param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = get_tab_control(this,param_2);
  if (*(int *)(lVar2 + 0x21c) == 0) {
    if ((*(long *)(lVar2 + 400) != 0) && (*(char *)(*(long *)(lVar2 + 400) + 0x1d0) != '\0')) {
      Node::_update_children_cache_impl();
    }
  }
  else {
    _err_print_error("get_index","./scene/main/node.h",0x20a,
                     "Condition \"!p_include_internal && data.internal_mode != INTERNAL_MODE_DISABLED\" is true. Returning: -1"
                     ,"Node is internal. Can\'t get index with \'include_internal\' being false.",0,
                     0);
  }
  iVar1 = get_tab_control(this,param_1);
  Node::move_child((Node *)this,iVar1);
  return;
}



/* TabContainer::set_tab_title(int, String const&) */

void __thiscall TabContainer::set_tab_title(TabContainer *this,int param_1,String *param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  char cVar4;
  long *plVar5;
  long in_FS_OFFSET;
  long local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  plVar5 = (long *)get_tab_control(this,param_1);
  if (plVar5 == (long *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("set_tab_title","scene/gui/tab_container.cpp",0x305,
                       "Parameter \"child\" is null.",0,0);
      return;
    }
  }
  else {
    TabBar::get_tab_title((int)(String *)&local_60);
    cVar4 = String::operator==((String *)&local_60,param_2);
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
    if (cVar4 == '\0') {
      TabBar::set_tab_title((int)*(undefined8 *)(this + 0xa00),(String *)(ulong)(uint)param_1);
      Node::get_name();
      cVar4 = operator==(param_2,(StringName *)&local_60);
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      if (cVar4 == '\0') {
        pcVar2 = *(code **)(*plVar5 + 0xa8);
        Variant::Variant((Variant *)local_58,param_2);
        StringName::StringName((StringName *)&local_60,"_tab_name",false);
        (*pcVar2)(plVar5,(String *)&local_60,(Variant *)local_58);
        if ((StringName::configured != '\0') && (local_60 != 0)) {
          StringName::unref();
        }
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
      }
      else {
        pcVar2 = *(code **)(*plVar5 + 0xb0);
        StringName::StringName((StringName *)&local_60,"_tab_name",false);
        (*pcVar2)(plVar5,(String *)&local_60);
        if ((StringName::configured != '\0') && (local_60 != 0)) {
          StringName::unref();
        }
      }
      _repaint(this);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        CanvasItem::queue_redraw();
        return;
      }
    }
    else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TabContainer::set_tab_hidden(int, bool) */

void __thiscall TabContainer::set_tab_hidden(TabContainer *this,int param_1,bool param_2)

{
  char cVar1;
  long lVar2;
  long in_FS_OFFSET;
  TabContainer aTStack_58 [16];
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = get_tab_control(this,param_1);
  if (lVar2 == 0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("set_tab_hidden","scene/gui/tab_container.cpp",0x356,
                       "Parameter \"child\" is null.",0,0);
      return;
    }
  }
  else {
    cVar1 = TabBar::is_tab_hidden((int)*(undefined8 *)(this + 0xa00));
    if ((bool)cVar1 != param_2) {
      TabBar::set_tab_hidden((int)*(undefined8 *)(this + 0xa00),SUB41(param_1,0));
      CanvasItem::hide();
      _update_margins(this);
      cVar1 = TabBar::get_clip_tabs();
      if (cVar1 == '\0') {
        Control::update_minimum_size();
      }
      create_custom_callable_function_pointer<TabContainer>
                (aTStack_58,(char *)this,(_func_void *)"&TabContainer::_repaint");
      Variant::Variant((Variant *)local_48,0);
      Callable::call_deferredp((Variant **)aTStack_58,0);
      if (Variant::needs_deinit[local_48[0]] != '\0') {
        Variant::_clear_internal();
      }
      Callable::~Callable((Callable *)aTStack_58);
    }
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TabContainer::move_tab_from_tab_container(TabContainer*, int, int) */

void __thiscall
TabContainer::move_tab_from_tab_container
          (TabContainer *this,TabContainer *param_1,int param_2,int param_3)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long in_FS_OFFSET;
  CowData<char32_t> local_78 [8];
  CowData<char32_t> local_70 [8];
  Object *local_68;
  Object *local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (TabContainer *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("move_tab_from_tab_container","scene/gui/tab_container.cpp",0x1a1,
                       "Parameter \"p_from\" is null.",0,0);
      return;
    }
  }
  else {
    if ((param_2 < 0) || (iVar4 = TabBar::get_tab_count(), iVar4 <= param_2)) {
      iVar4 = TabBar::get_tab_count();
      _err_print_index_error
                ("move_tab_from_tab_container","scene/gui/tab_container.cpp",0x1a2,(long)param_2,
                 (long)iVar4,"p_from_index","p_from->get_tab_count()","",false,false);
    }
    else if ((param_3 < 0) || (iVar4 = TabBar::get_tab_count(), iVar4 < param_3)) {
      iVar4 = TabBar::get_tab_count();
      _err_print_index_error
                ("move_tab_from_tab_container","scene/gui/tab_container.cpp",0x1a3,(long)param_3,
                 (long)(iVar4 + 1),"p_to_index","get_tab_count() + 1","",false,false);
    }
    else {
      TabBar::get_tab_title((int)local_78);
      TabBar::get_tab_tooltip((int)local_70);
      TabBar::get_tab_icon((int)(Ref *)&local_68);
      TabBar::get_tab_button_icon((int)&local_60);
      bVar1 = (bool)TabBar::is_tab_disabled((int)*(undefined8 *)(param_1 + 0xa00));
      bVar2 = (bool)TabBar::is_tab_hidden((int)*(undefined8 *)(param_1 + 0xa00));
      TabBar::get_tab_metadata((int)local_58);
      TabBar::get_tab_icon_max_width((int)*(undefined8 *)(param_1 + 0xa00));
      uVar5 = get_tab_control(param_1,param_2);
      Node::remove_child((Node *)param_1);
      Node::add_child(this,uVar5,1,0);
      iVar4 = TabBar::get_tab_count();
      if (iVar4 <= param_3) {
        iVar4 = TabBar::get_tab_count();
        param_3 = iVar4 - 1;
      }
      lVar6 = get_tab_control(this,param_3);
      if (*(int *)(lVar6 + 0x21c) == 0) {
        if ((*(long *)(lVar6 + 400) != 0) && (*(char *)(*(long *)(lVar6 + 400) + 0x1d0) != '\0')) {
          Node::_update_children_cache_impl();
        }
      }
      else {
        _err_print_error("get_index","./scene/main/node.h",0x20a,
                         "Condition \"!p_include_internal && data.internal_mode != INTERNAL_MODE_DISABLED\" is true. Returning: -1"
                         ,
                         "Node is internal. Can\'t get index with \'include_internal\' being false."
                         ,0,0);
      }
      Node::move_child((Node *)this,(int)uVar5);
      set_tab_title(this,param_3,(String *)local_78);
      TabBar::set_tab_tooltip((int)*(undefined8 *)(this + 0xa00),(String *)(ulong)(uint)param_3);
      set_tab_icon(this,param_3,(Ref *)&local_68);
      TabBar::set_tab_button_icon((int)*(undefined8 *)(this + 0xa00),(Ref *)(ulong)(uint)param_3);
      _update_margins(this);
      _repaint(this);
      set_tab_disabled(this,param_3,bVar1);
      set_tab_hidden(this,param_3,bVar2);
      TabBar::set_tab_metadata((int)*(undefined8 *)(this + 0xa00),(Variant *)(ulong)(uint)param_3);
      TabBar::set_tab_icon_max_width((int)*(undefined8 *)(this + 0xa00),param_3);
      cVar3 = TabBar::is_tab_disabled((int)*(undefined8 *)(this + 0xa00));
      if (cVar3 == '\0') {
        if (((byte)this[0x2fa] & 0x40) == 0) {
          *(int *)(this + 0xa3c) = param_3;
        }
        else {
          TabBar::set_current_tab((int)*(undefined8 *)(this + 0xa00));
        }
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (((local_60 != (Object *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) &&
         (cVar3 = predelete_handler(local_60), cVar3 != '\0')) {
        (**(code **)(*(long *)local_60 + 0x140))(local_60);
        Memory::free_static(local_60,false);
      }
      if (((local_68 != (Object *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) &&
         (cVar3 = predelete_handler(local_68), cVar3 != '\0')) {
        (**(code **)(*(long *)local_68 + 0x140))(local_68);
        Memory::free_static(local_68,false);
      }
      CowData<char32_t>::_unref(local_70);
      CowData<char32_t>::_unref(local_78);
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TabContainer::_drag_move_tab_from(TabBar*, int, int) */

void __thiscall
TabContainer::_drag_move_tab_from(TabContainer *this,TabBar *param_1,int param_2,int param_3)

{
  long lVar1;
  TabContainer *pTVar2;
  
  lVar1 = Node::get_parent();
  if (lVar1 != 0) {
    pTVar2 = (TabContainer *)__dynamic_cast(lVar1,&Object::typeinfo,&typeinfo,0);
    if (pTVar2 != (TabContainer *)0x0) {
      move_tab_from_tab_container(this,pTVar2,param_2,param_3);
      return;
    }
  }
  return;
}



/* TabContainer::get_tab_idx_from_control(Control*) const */

ulong __thiscall TabContainer::get_tab_idx_from_control(TabContainer *this,Control *param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  TabContainer *pTVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  long local_30;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (Control *)0x0) {
    _err_print_error("get_tab_idx_from_control","scene/gui/tab_container.cpp",0x2a8,
                     "Parameter \"p_child\" is null.",0,0);
  }
  else {
    pTVar4 = (TabContainer *)Node::get_parent();
    if (pTVar4 == this) {
      _get_tab_controls();
      if (local_30 != 0) {
        uVar3 = 0;
        do {
          uVar5 = uVar3;
          if (*(long *)(local_30 + -8) <= (long)uVar5) {
            uVar5 = 0xffffffff;
            break;
          }
          uVar3 = uVar5 + 1;
        } while (*(Control **)(local_30 + uVar5 * 8) != param_1);
        LOCK();
        plVar1 = (long *)(local_30 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_30 + -0x10),false);
          uVar5 = uVar5 & 0xffffffff;
        }
        goto LAB_0010d36e;
      }
    }
    else {
      _err_print_error("get_tab_idx_from_control","scene/gui/tab_container.cpp",0x2a9,
                       "Condition \"p_child->get_parent() != this\" is true. Returning: -1",0,0);
    }
  }
  uVar5 = 0xffffffff;
LAB_0010d36e:
  if (lVar2 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}



/* TabContainer::_on_tab_visibility_changed(Control*) */

void __thiscall TabContainer::_on_tab_visibility_changed(TabContainer *this,Control *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  if (this[0xa40] != (TabContainer)0x0) {
    return;
  }
  iVar2 = get_tab_idx_from_control(this,param_1);
  if (iVar2 == -1) {
    return;
  }
  cVar1 = CanvasItem::is_visible();
  this[0xa40] = (TabContainer)0x1;
  if (cVar1 == '\0') {
    iVar3 = TabBar::get_current_tab();
    if (iVar2 == iVar3) {
      cVar1 = TabBar::get_deselect_enabled();
      if ((cVar1 == '\0') && (iVar2 = TabBar::get_tab_count(), iVar2 != 0)) {
        iVar2 = TabBar::get_tab_count();
        if (iVar2 == 1) {
          CanvasItem::show();
          goto LAB_0010d480;
        }
        cVar1 = TabBar::select_next_available();
        if ((cVar1 != '\0') || (cVar1 = TabBar::select_previous_available(), cVar1 != '\0'))
        goto LAB_0010d480;
      }
      if (((byte)this[0x2fa] & 0x40) == 0) {
        *(undefined4 *)(this + 0xa3c) = 0xffffffff;
      }
      else {
        TabBar::set_current_tab((int)*(undefined8 *)(this + 0xa00));
      }
    }
  }
  else {
    iVar3 = TabBar::get_current_tab();
    if (iVar2 != iVar3) {
      if (((byte)this[0x2fa] & 0x40) == 0) {
        *(int *)(this + 0xa3c) = iVar2;
      }
      else {
        TabBar::set_current_tab((int)*(undefined8 *)(this + 0xa00));
      }
    }
  }
LAB_0010d480:
  this[0xa40] = (TabContainer)0x0;
  return;
}



/* TabContainer::move_child_notify(Node*) */

void __thiscall TabContainer::move_child_notify(TabContainer *this,Node *param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  int iVar3;
  Control *pCVar4;
  long in_FS_OFFSET;
  long local_80;
  undefined8 local_78;
  undefined1 local_70 [16];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Container::move_child_notify((Node *)this);
  if (*(Node **)(this + 0xa00) == param_1) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    pCVar4 = (Control *)Container::as_sortable_control(this,param_1,2);
    if (pCVar4 != (Control *)0x0) {
      uVar1 = *(undefined8 *)(this + 0xa00);
      get_tab_idx_from_control(this,pCVar4);
      local_70 = (undefined1  [16])0x0;
      local_78 = 0;
      pcVar2 = *(code **)(*(long *)pCVar4 + 0xb8);
      StringName::StringName((StringName *)&local_80,"_tab_index",false);
      (*pcVar2)((Variant *)local_58,pCVar4,(StringName *)&local_80,&local_78);
      iVar3 = Variant::operator_cast_to_int((Variant *)local_58);
      TabBar::move_tab((int)uVar1,iVar3);
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
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _refresh_tab_indices();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TabContainer::remove_child_notify(Node*) */

void __thiscall TabContainer::remove_child_notify(TabContainer *this,Node *param_1)

{
  long lVar1;
  code *pcVar2;
  int iVar3;
  Control *pCVar4;
  long lVar5;
  long lVar6;
  long in_FS_OFFSET;
  long local_60;
  long local_58 [2];
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  Container::remove_child_notify((Node *)this);
  if (*(Node **)(this + 0xa00) != param_1) {
    pCVar4 = (Control *)Container::as_sortable_control(this,param_1,2);
    if (pCVar4 != (Control *)0x0) {
      get_tab_idx_from_control(this,pCVar4);
      Vector<Control*>::push_back((Vector<Control*> *)(this + 0xa28),pCVar4);
      TabBar::remove_tab((int)*(undefined8 *)(this + 0xa00));
      _refresh_tab_indices();
      lVar1 = *(long *)(this + 0xa30);
      if ((lVar1 != 0) && (lVar6 = *(long *)(lVar1 + -8), 0 < lVar6)) {
        lVar5 = 0;
        do {
          if (pCVar4 == *(Control **)(lVar1 + lVar5 * 8)) {
            if (lVar5 < lVar6) {
              CowData<Control*>::_copy_on_write((CowData<Control*> *)(this + 0xa30));
              lVar1 = *(long *)(this + 0xa30);
              if (lVar1 == 0) {
                lVar6 = -1;
              }
              else {
                lVar6 = *(long *)(lVar1 + -8) + -1;
                if (lVar5 < lVar6) {
                  memmove((void *)(lVar1 + lVar5 * 8),(void *)(lVar1 + 8 + lVar5 * 8),
                          (lVar6 - lVar5) * 8);
                }
              }
              CowData<Control*>::resize<false>((CowData<Control*> *)(this + 0xa30),lVar6);
            }
            else {
              _err_print_index_error
                        ("remove_at","./core/templates/cowdata.h",0xe4,lVar5,lVar6,"p_index",
                         "size()","",false,false);
            }
            break;
          }
          lVar5 = lVar5 + 1;
        } while (lVar6 != lVar5);
      }
      _update_margins(this);
      iVar3 = TabBar::get_tab_count();
      if (iVar3 == 0) {
        CanvasItem::queue_redraw();
      }
      pcVar2 = *(code **)(*(long *)param_1 + 0xb0);
      StringName::StringName((StringName *)local_58,"_tab_index",false);
      (*pcVar2)(param_1,(StringName *)local_58);
      if ((StringName::configured != '\0') && (local_58[0] != 0)) {
        StringName::unref();
      }
      pcVar2 = *(code **)(*(long *)param_1 + 0xb0);
      StringName::StringName((StringName *)local_58,"_tab_name",false);
      (*pcVar2)(param_1,(StringName *)local_58);
      if ((StringName::configured != '\0') && (local_58[0] != 0)) {
        StringName::unref();
      }
      pcVar2 = *(code **)(*(long *)param_1 + 0x110);
      create_custom_callable_function_pointer<TabContainer>
                ((TabContainer *)local_58,(char *)this,
                 (_func_void *)"&TabContainer::_refresh_tab_names");
      StringName::StringName((StringName *)&local_60,"renamed",false);
      (*pcVar2)(param_1,(StringName *)&local_60,(StringName *)local_58);
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      Callable::~Callable((Callable *)local_58);
      pcVar2 = *(code **)(*(long *)param_1 + 0x110);
      create_custom_callable_function_pointer<TabContainer,Control*>
                ((TabContainer *)local_58,(char *)this,
                 (_func_void_Control_ptr *)"&TabContainer::_on_tab_visibility_changed");
      (*pcVar2)(param_1,SceneStringNames::singleton + 0x18,(StringName *)local_58);
      Callable::~Callable((Callable *)local_58);
      if (((byte)this[0x2fa] & 0x40) == 0) {
        create_custom_callable_function_pointer<TabContainer>
                  ((TabContainer *)local_58,(char *)this,(_func_void *)"&TabContainer::_repaint");
        Variant::Variant((Variant *)local_48,0);
        Callable::call_deferredp((Variant **)local_58,0);
        if (Variant::needs_deinit[local_48[0]] != '\0') {
          Variant::_clear_internal();
        }
        Callable::~Callable((Callable *)local_58);
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TabContainer::get_minimum_size() const */

void __thiscall TabContainer::get_minimum_size(TabContainer *this)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  int iVar4;
  float fVar5;
  long lVar6;
  long in_FS_OFFSET;
  undefined8 uVar7;
  float local_58;
  float local_50;
  long local_40;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (this[0xa08] != (TabContainer)0x0) {
    (**(code **)(**(long **)(this + 0xa00) + 0x2f8))();
    cVar3 = TabBar::get_clip_tabs();
    if (cVar3 == '\0') {
      lVar6 = get_popup(this);
      if (lVar6 != 0) {
        (**(code **)(**(long **)(this + 0xa60) + 0x1c8))();
      }
      if (((0 < *(int *)(this + 0xa48)) && (iVar4 = TabBar::get_tab_alignment(), iVar4 != 1)) &&
         (iVar4 = TabBar::get_tab_alignment(), iVar4 == 2)) {
        get_popup(this);
      }
    }
  }
  _get_tab_controls();
  if (local_40 == 0) {
    (**(code **)(**(long **)(this + 0xa50) + 0x1d0))();
  }
  else {
    if (0 < *(long *)(local_40 + -8)) {
      local_50 = 0.0;
      lVar6 = 0;
      local_58 = 0.0;
      do {
        plVar2 = *(long **)(local_40 + lVar6 * 8);
        cVar3 = CanvasItem::is_visible();
        if ((cVar3 != '\0') || (this[0xa20] != (TabContainer)0x0)) {
          uVar7 = (**(code **)(*plVar2 + 0x300))(plVar2);
          if (local_50 <= (float)uVar7) {
            local_50 = (float)uVar7;
          }
          fVar5 = (float)((ulong)uVar7 >> 0x20);
          if (local_58 <= fVar5) {
            local_58 = fVar5;
          }
        }
        lVar6 = lVar6 + 1;
      } while (lVar6 < *(long *)(local_40 + -8));
    }
    (**(code **)(**(long **)(this + 0xa50) + 0x1d0))();
    LOCK();
    plVar2 = (long *)(local_40 + -0x10);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      Memory::free_static((void *)(local_40 + -0x10),false);
    }
  }
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* TabContainer::get_current_tab_control() const */

long TabContainer::get_current_tab_control(void)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long in_FS_OFFSET;
  long local_30;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = TabBar::get_current_tab();
  _get_tab_controls();
  if (iVar3 < 0) {
    lVar4 = local_30;
    if (local_30 == 0) goto LAB_0010dd57;
LAB_0010dda0:
    lVar4 = 0;
  }
  else {
    if (local_30 == 0) {
      lVar4 = 0;
      goto LAB_0010dd57;
    }
    if (*(long *)(local_30 + -8) <= (long)iVar3) goto LAB_0010dda0;
    lVar4 = *(long *)(local_30 + (long)iVar3 * 8);
  }
  LOCK();
  plVar1 = (long *)(local_30 + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    Memory::free_static((void *)(local_30 + -0x10),false);
  }
LAB_0010dd57:
  if (lVar2 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4;
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



/* TabContainer::is_class_ptr(void*) const */

uint TabContainer::is_class_ptr(void *param_1)

{
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  return (uint)CONCAT71(0x12b7,in_RSI == &Container::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12b6,in_RSI == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12b7,in_RSI == &Control::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12b7,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12b7,in_RSI == &Node::get_class_ptr_static()::ptr) |
         CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
}



/* CallableCustomMethodPointer<TabContainer, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TabContainer,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TabContainer,void,int> *this)

{
  return;
}



/* CallableCustomMethodPointer<TabContainer, void, Vector2 const&, Variant const&,
   Control*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TabContainer,void,Vector2_const&,Variant_const&,Control*>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TabContainer,void,Vector2_const&,Variant_const&,Control*>
           *this)

{
  return;
}



/* CallableCustomMethodPointerC<TabContainer, bool, Vector2 const&, Variant const&,
   Control*>::~CallableCustomMethodPointerC() */

void __thiscall
CallableCustomMethodPointerC<TabContainer,bool,Vector2_const&,Variant_const&,Control*>::
~CallableCustomMethodPointerC
          (CallableCustomMethodPointerC<TabContainer,bool,Vector2_const&,Variant_const&,Control*>
           *this)

{
  return;
}



/* CallableCustomMethodPointer<TabContainer, Variant, Vector2 const&,
   Control*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TabContainer,Variant,Vector2_const&,Control*>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TabContainer,Variant,Vector2_const&,Control*> *this)

{
  return;
}



/* CallableCustomMethodPointer<TabContainer, void, Control*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TabContainer,void,Control*>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TabContainer,void,Control*> *this)

{
  return;
}



/* CallableCustomMethodPointer<TabContainer, void, TabBar*, int,
   int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TabContainer,void,TabBar*,int,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TabContainer,void,TabBar*,int,int> *this)

{
  return;
}



/* CallableCustomMethodPointer<TabContainer, void, int, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TabContainer,void,int,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TabContainer,void,int,int> *this)

{
  return;
}



/* CallableCustomMethodPointer<TabContainer, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TabContainer,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TabContainer,void> *this)

{
  return;
}



/* MethodBindTRC<Control::FocusMode>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<Control::FocusMode>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<Control::FocusMode>::get_argument_meta(int) const */

undefined8 MethodBindTRC<Control::FocusMode>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Control::FocusMode>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<Control::FocusMode>::_gen_argument_type
          (MethodBindT<Control::FocusMode> *this,int param_1)

{
  return (param_1 == 0) * '\x02';
}



/* MethodBindT<Control::FocusMode>::get_argument_meta(int) const */

undefined8 MethodBindT<Control::FocusMode>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<Popup*>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<Popup*>::_gen_argument_type(int param_1)

{
  return 0x18;
}



/* MethodBindTRC<Popup*>::get_argument_meta(int) const */

undefined8 MethodBindTRC<Popup*>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Node*>::_gen_argument_type(int) const */

byte __thiscall MethodBindT<Node*>::_gen_argument_type(MethodBindT<Node*> *this,int param_1)

{
  return -(param_1 == 0) & 0x18;
}



/* MethodBindT<Node*>::get_argument_meta(int) const */

undefined8 MethodBindT<Node*>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<int, Control*>::_gen_argument_type(int) const */

char __thiscall
MethodBindTRC<int,Control*>::_gen_argument_type(MethodBindTRC<int,Control*> *this,int param_1)

{
  return (-(param_1 == 0) & 0x16U) + 2;
}



/* MethodBindTRC<int, Control*>::get_argument_meta(int) const */

uint __thiscall
MethodBindTRC<int,Control*>::get_argument_meta(MethodBindTRC<int,Control*> *this,int param_1)

{
  return param_1 >> 0x1f & 3;
}



/* MethodBindTRC<int, Vector2 const&>::_gen_argument_type(int) const */

char __thiscall
MethodBindTRC<int,Vector2_const&>::_gen_argument_type
          (MethodBindTRC<int,Vector2_const&> *this,int param_1)

{
  return (-(param_1 == 0) & 3U) + 2;
}



/* MethodBindTRC<int, Vector2 const&>::get_argument_meta(int) const */

uint __thiscall
MethodBindTRC<int,Vector2_const&>::get_argument_meta
          (MethodBindTRC<int,Vector2_const&> *this,int param_1)

{
  return param_1 >> 0x1f & 3;
}



/* MethodBindTRC<Variant, int>::_gen_argument_type(int) const */

char __thiscall
MethodBindTRC<Variant,int>::_gen_argument_type(MethodBindTRC<Variant,int> *this,int param_1)

{
  return (param_1 == 0) * '\x02';
}



/* MethodBindTRC<Variant, int>::get_argument_meta(int) const */

byte __thiscall
MethodBindTRC<Variant,int>::get_argument_meta(MethodBindTRC<Variant,int> *this,int param_1)

{
  return -(param_1 == 0) & 3;
}



/* MethodBindT<int, Variant const&>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<int,Variant_const&>::_gen_argument_type
          (MethodBindT<int,Variant_const&> *this,int param_1)

{
  return (param_1 == 0) * '\x02';
}



/* MethodBindT<int, Variant const&>::get_argument_meta(int) const */

byte __thiscall
MethodBindT<int,Variant_const&>::get_argument_meta
          (MethodBindT<int,Variant_const&> *this,int param_1)

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



/* MethodBindTRC<int, int>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<int,int>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<int, int>::get_argument_meta(int) const */

char __thiscall MethodBindTRC<int,int>::get_argument_meta(MethodBindTRC<int,int> *this,int param_1)

{
  return (param_1 < 1) * '\x03';
}



/* MethodBindT<int, int>::_gen_argument_type(int) const */

char __thiscall MethodBindT<int,int>::_gen_argument_type(MethodBindT<int,int> *this,int param_1)

{
  return ((uint)param_1 < 2) * '\x02';
}



/* MethodBindT<int, int>::get_argument_meta(int) const */

byte __thiscall MethodBindT<int,int>::get_argument_meta(MethodBindT<int,int> *this,int param_1)

{
  return -((uint)param_1 < 2) & 3;
}



/* MethodBindTRC<Ref<Texture2D>, int>::_gen_argument_type(int) const */

int __thiscall
MethodBindTRC<Ref<Texture2D>,int>::_gen_argument_type
          (MethodBindTRC<Ref<Texture2D>,int> *this,int param_1)

{
  return (-(uint)(param_1 == 0) & 0xffffffea) + 0x18;
}



/* MethodBindTRC<Ref<Texture2D>, int>::get_argument_meta(int) const */

byte __thiscall
MethodBindTRC<Ref<Texture2D>,int>::get_argument_meta
          (MethodBindTRC<Ref<Texture2D>,int> *this,int param_1)

{
  return -(param_1 == 0) & 3;
}



/* MethodBindT<int, Ref<Texture2D> const&>::_gen_argument_type(int) const */

int __thiscall
MethodBindT<int,Ref<Texture2D>const&>::_gen_argument_type
          (MethodBindT<int,Ref<Texture2D>const&> *this,int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if ((uint)param_1 < 2) {
    iVar1 = (-(uint)(param_1 == 0) & 0xffffffea) + 0x18;
  }
  return iVar1;
}



/* MethodBindT<int, Ref<Texture2D> const&>::get_argument_meta(int) const */

byte __thiscall
MethodBindT<int,Ref<Texture2D>const&>::get_argument_meta
          (MethodBindT<int,Ref<Texture2D>const&> *this,int param_1)

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



/* MethodBindTRC<TabContainer::TabPosition>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<TabContainer::TabPosition>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<TabContainer::TabPosition>::get_argument_meta(int) const */

undefined8 MethodBindTRC<TabContainer::TabPosition>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<TabContainer::TabPosition>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<TabContainer::TabPosition>::_gen_argument_type
          (MethodBindT<TabContainer::TabPosition> *this,int param_1)

{
  return (param_1 == 0) * '\x02';
}



/* MethodBindT<TabContainer::TabPosition>::get_argument_meta(int) const */

undefined8 MethodBindT<TabContainer::TabPosition>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<TabBar::AlignmentMode>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<TabBar::AlignmentMode>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<TabBar::AlignmentMode>::get_argument_meta(int) const */

undefined8 MethodBindTRC<TabBar::AlignmentMode>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<TabBar::AlignmentMode>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<TabBar::AlignmentMode>::_gen_argument_type
          (MethodBindT<TabBar::AlignmentMode> *this,int param_1)

{
  return (param_1 == 0) * '\x02';
}



/* MethodBindT<TabBar::AlignmentMode>::get_argument_meta(int) const */

undefined8 MethodBindT<TabBar::AlignmentMode>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<Control*, int>::_gen_argument_type(int) const */

int __thiscall
MethodBindTRC<Control*,int>::_gen_argument_type(MethodBindTRC<Control*,int> *this,int param_1)

{
  return (-(uint)(param_1 == 0) & 0xffffffea) + 0x18;
}



/* MethodBindTRC<Control*, int>::get_argument_meta(int) const */

byte __thiscall
MethodBindTRC<Control*,int>::get_argument_meta(MethodBindTRC<Control*,int> *this,int param_1)

{
  return -(param_1 == 0) & 3;
}



/* MethodBindTRC<TabBar*>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<TabBar*>::_gen_argument_type(int param_1)

{
  return 0x18;
}



/* MethodBindTRC<TabBar*>::get_argument_meta(int) const */

undefined8 MethodBindTRC<TabBar*>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<Control*>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<Control*>::_gen_argument_type(int param_1)

{
  return 0x18;
}



/* MethodBindTRC<Control*>::get_argument_meta(int) const */

undefined8 MethodBindTRC<Control*>::get_argument_meta(int param_1)

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



/* CallableCustomMethodPointer<TabContainer, void, int>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<TabContainer,void,int>::get_argument_count
          (CallableCustomMethodPointer<TabContainer,void,int> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<TabContainer, void, Vector2 const&, Variant const&,
   Control*>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<TabContainer,void,Vector2_const&,Variant_const&,Control*>::
get_argument_count(CallableCustomMethodPointer<TabContainer,void,Vector2_const&,Variant_const&,Control*>
                   *this,bool *param_1)

{
  *param_1 = true;
  return 3;
}



/* CallableCustomMethodPointerC<TabContainer, bool, Vector2 const&, Variant const&,
   Control*>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointerC<TabContainer,bool,Vector2_const&,Variant_const&,Control*>::
get_argument_count(CallableCustomMethodPointerC<TabContainer,bool,Vector2_const&,Variant_const&,Control*>
                   *this,bool *param_1)

{
  *param_1 = true;
  return 3;
}



/* CallableCustomMethodPointer<TabContainer, Variant, Vector2 const&,
   Control*>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<TabContainer,Variant,Vector2_const&,Control*>::get_argument_count
          (CallableCustomMethodPointer<TabContainer,Variant,Vector2_const&,Control*> *this,
          bool *param_1)

{
  *param_1 = true;
  return 2;
}



/* CallableCustomMethodPointer<TabContainer, void, Control*>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<TabContainer,void,Control*>::get_argument_count
          (CallableCustomMethodPointer<TabContainer,void,Control*> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<TabContainer, void, TabBar*, int, int>::get_argument_count(bool&)
   const */

undefined8 __thiscall
CallableCustomMethodPointer<TabContainer,void,TabBar*,int,int>::get_argument_count
          (CallableCustomMethodPointer<TabContainer,void,TabBar*,int,int> *this,bool *param_1)

{
  *param_1 = true;
  return 3;
}



/* CallableCustomMethodPointer<TabContainer, void, int, int>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<TabContainer,void,int,int>::get_argument_count
          (CallableCustomMethodPointer<TabContainer,void,int,int> *this,bool *param_1)

{
  *param_1 = true;
  return 2;
}



/* CallableCustomMethodPointer<TabContainer, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<TabContainer,void>::get_argument_count
          (CallableCustomMethodPointer<TabContainer,void> *this,bool *param_1)

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



/* CallableCustomMethodPointer<TabContainer, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TabContainer,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TabContainer,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<TabContainer, void, TabBar*, int,
   int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TabContainer,void,TabBar*,int,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TabContainer,void,TabBar*,int,int> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<TabContainer, void, int, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TabContainer,void,int,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TabContainer,void,int,int> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<TabContainer, void, Control*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TabContainer,void,Control*>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TabContainer,void,Control*> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<TabContainer, void, Vector2 const&, Variant const&,
   Control*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TabContainer,void,Vector2_const&,Variant_const&,Control*>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TabContainer,void,Vector2_const&,Variant_const&,Control*>
           *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointerC<TabContainer, bool, Vector2 const&, Variant const&,
   Control*>::~CallableCustomMethodPointerC() */

void __thiscall
CallableCustomMethodPointerC<TabContainer,bool,Vector2_const&,Variant_const&,Control*>::
~CallableCustomMethodPointerC
          (CallableCustomMethodPointerC<TabContainer,bool,Vector2_const&,Variant_const&,Control*>
           *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<TabContainer, Variant, Vector2 const&,
   Control*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TabContainer,Variant,Vector2_const&,Control*>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TabContainer,Variant,Vector2_const&,Control*> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<TabContainer, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TabContainer,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TabContainer,void,int> *this)

{
  operator_delete(this,0x48);
  return;
}



/* MethodBindTR<bool>::~MethodBindTR() */

void __thiscall MethodBindTR<bool>::~MethodBindTR(MethodBindTR<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012ad28;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<bool>::~MethodBindTR() */

void __thiscall MethodBindTR<bool>::~MethodBindTR(MethodBindTR<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012ad28;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Control*>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Control*>::~MethodBindTRC(MethodBindTRC<Control*> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012ad88;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Control*>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Control*>::~MethodBindTRC(MethodBindTRC<Control*> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012ad88;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<TabBar*>::~MethodBindTRC() */

void __thiscall MethodBindTRC<TabBar*>::~MethodBindTRC(MethodBindTRC<TabBar*> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012ade8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<TabBar*>::~MethodBindTRC() */

void __thiscall MethodBindTRC<TabBar*>::~MethodBindTRC(MethodBindTRC<TabBar*> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012ade8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Control*, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Control*,int>::~MethodBindTRC(MethodBindTRC<Control*,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012ae48;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Control*, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Control*,int>::~MethodBindTRC(MethodBindTRC<Control*,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012ae48;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<TabBar::AlignmentMode>::~MethodBindT() */

void __thiscall
MethodBindT<TabBar::AlignmentMode>::~MethodBindT(MethodBindT<TabBar::AlignmentMode> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012aea8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<TabBar::AlignmentMode>::~MethodBindT() */

void __thiscall
MethodBindT<TabBar::AlignmentMode>::~MethodBindT(MethodBindT<TabBar::AlignmentMode> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012aea8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<TabBar::AlignmentMode>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<TabBar::AlignmentMode>::~MethodBindTRC(MethodBindTRC<TabBar::AlignmentMode> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012af08;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<TabBar::AlignmentMode>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<TabBar::AlignmentMode>::~MethodBindTRC(MethodBindTRC<TabBar::AlignmentMode> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012af08;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<TabContainer::TabPosition>::~MethodBindT() */

void __thiscall
MethodBindT<TabContainer::TabPosition>::~MethodBindT(MethodBindT<TabContainer::TabPosition> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012af68;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<TabContainer::TabPosition>::~MethodBindT() */

void __thiscall
MethodBindT<TabContainer::TabPosition>::~MethodBindT(MethodBindT<TabContainer::TabPosition> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012af68;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<TabContainer::TabPosition>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<TabContainer::TabPosition>::~MethodBindTRC
          (MethodBindTRC<TabContainer::TabPosition> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012afc8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<TabContainer::TabPosition>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<TabContainer::TabPosition>::~MethodBindTRC
          (MethodBindTRC<TabContainer::TabPosition> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012afc8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<int, String const&>::~MethodBindT() */

void __thiscall MethodBindT<int,String_const&>::~MethodBindT(MethodBindT<int,String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012b0e8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<int, String const&>::~MethodBindT() */

void __thiscall MethodBindT<int,String_const&>::~MethodBindT(MethodBindT<int,String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012b0e8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<String, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<String,int>::~MethodBindTRC(MethodBindTRC<String,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012b148;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<String, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<String,int>::~MethodBindTRC(MethodBindTRC<String,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012b148;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<int, int>::~MethodBindT() */

void __thiscall MethodBindT<int,int>::~MethodBindT(MethodBindT<int,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012b268;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<int, int>::~MethodBindT() */

void __thiscall MethodBindT<int,int>::~MethodBindT(MethodBindT<int,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012b268;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<int, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int,int>::~MethodBindTRC(MethodBindTRC<int,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012b2c8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<int, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int,int>::~MethodBindTRC(MethodBindTRC<int,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012b2c8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<int, bool>::~MethodBindT() */

void __thiscall MethodBindT<int,bool>::~MethodBindT(MethodBindT<int,bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012b328;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<int, bool>::~MethodBindT() */

void __thiscall MethodBindT<int,bool>::~MethodBindT(MethodBindT<int,bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012b328;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<bool, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool,int>::~MethodBindTRC(MethodBindTRC<bool,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012b388;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<bool, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool,int>::~MethodBindTRC(MethodBindTRC<bool,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012b388;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<int, Variant const&>::~MethodBindT() */

void __thiscall MethodBindT<int,Variant_const&>::~MethodBindT(MethodBindT<int,Variant_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012b3e8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<int, Variant const&>::~MethodBindT() */

void __thiscall MethodBindT<int,Variant_const&>::~MethodBindT(MethodBindT<int,Variant_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012b3e8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Variant, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Variant,int>::~MethodBindTRC(MethodBindTRC<Variant,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012b448;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Variant, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Variant,int>::~MethodBindTRC(MethodBindTRC<Variant,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012b448;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<int, Ref<Texture2D> const&>::~MethodBindT() */

void __thiscall
MethodBindT<int,Ref<Texture2D>const&>::~MethodBindT(MethodBindT<int,Ref<Texture2D>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012b1a8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<int, Ref<Texture2D> const&>::~MethodBindT() */

void __thiscall
MethodBindT<int,Ref<Texture2D>const&>::~MethodBindT(MethodBindT<int,Ref<Texture2D>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012b1a8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Ref<Texture2D>, int>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Ref<Texture2D>,int>::~MethodBindTRC(MethodBindTRC<Ref<Texture2D>,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012b208;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Ref<Texture2D>, int>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Ref<Texture2D>,int>::~MethodBindTRC(MethodBindTRC<Ref<Texture2D>,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012b208;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<int, Vector2 const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<int,Vector2_const&>::~MethodBindTRC(MethodBindTRC<int,Vector2_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012b4a8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<int, Vector2 const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<int,Vector2_const&>::~MethodBindTRC(MethodBindTRC<int,Vector2_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012b4a8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<int, Control*>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int,Control*>::~MethodBindTRC(MethodBindTRC<int,Control*> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012b508;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<int, Control*>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int,Control*>::~MethodBindTRC(MethodBindTRC<int,Control*> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012b508;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Node*>::~MethodBindT() */

void __thiscall MethodBindT<Node*>::~MethodBindT(MethodBindT<Node*> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012b568;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Node*>::~MethodBindT() */

void __thiscall MethodBindT<Node*>::~MethodBindT(MethodBindT<Node*> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012b568;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Popup*>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Popup*>::~MethodBindTRC(MethodBindTRC<Popup*> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012b5c8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Popup*>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Popup*>::~MethodBindTRC(MethodBindTRC<Popup*> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012b5c8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<int>::~MethodBindT() */

void __thiscall MethodBindT<int>::~MethodBindT(MethodBindT<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012acc8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<int>::~MethodBindT() */

void __thiscall MethodBindT<int>::~MethodBindT(MethodBindT<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012acc8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012ac68;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012ac68;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Control::FocusMode>::~MethodBindT() */

void __thiscall MethodBindT<Control::FocusMode>::~MethodBindT(MethodBindT<Control::FocusMode> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012b628;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Control::FocusMode>::~MethodBindT() */

void __thiscall MethodBindT<Control::FocusMode>::~MethodBindT(MethodBindT<Control::FocusMode> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012b628;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Control::FocusMode>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Control::FocusMode>::~MethodBindTRC(MethodBindTRC<Control::FocusMode> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012b688;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Control::FocusMode>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Control::FocusMode>::~MethodBindTRC(MethodBindTRC<Control::FocusMode> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012b688;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<bool>::~MethodBindT() */

void __thiscall MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012b028;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<bool>::~MethodBindT() */

void __thiscall MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012b028;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012b088;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012b088;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* TabContainer::_property_get_revertv(StringName const&, Variant&) const */

undefined8 TabContainer::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* TabContainer::_property_can_revertv(StringName const&) const */

undefined8 TabContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00133008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   TabContainer::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#24}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#24}>
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
   TabContainer::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#12}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#12}>
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
   TabContainer::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#22}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#22}>
     ::_M_invoke(_Any_data *param_1,Node **param_2,StringName *param_3,StringName *param_4)

{
  code *pcVar1;
  undefined8 in_XMM1_Qa;
  
  Control::get_theme_item();
  _DAT_00000b10 = Variant::operator_cast_to_Color((Variant *)&stack0x00000000);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  _DAT_00000b18 = in_XMM1_Qa;
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   TabContainer::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#20}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#20}>
     ::_M_invoke(_Any_data *param_1,Node **param_2,StringName *param_3,StringName *param_4)

{
  code *pcVar1;
  undefined8 in_XMM1_Qa;
  
  Control::get_theme_item();
  _DAT_00000af0 = Variant::operator_cast_to_Color((Variant *)&stack0x00000000);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  _DAT_00000af8 = in_XMM1_Qa;
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   TabContainer::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#18}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#18}>
     ::_M_invoke(_Any_data *param_1,Node **param_2,StringName *param_3,StringName *param_4)

{
  code *pcVar1;
  undefined8 in_XMM1_Qa;
  
  Control::get_theme_item();
  _DAT_00000ad0 = Variant::operator_cast_to_Color((Variant *)&stack0x00000000);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  _DAT_00000ad8 = in_XMM1_Qa;
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   TabContainer::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#21}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#21}>
     ::_M_invoke(_Any_data *param_1,Node **param_2,StringName *param_3,StringName *param_4)

{
  code *pcVar1;
  undefined8 in_XMM1_Qa;
  
  Control::get_theme_item();
  _DAT_00000b00 = Variant::operator_cast_to_Color((Variant *)&stack0x00000000);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  _DAT_00000b08 = in_XMM1_Qa;
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   TabContainer::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#19}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#19}>
     ::_M_invoke(_Any_data *param_1,Node **param_2,StringName *param_3,StringName *param_4)

{
  code *pcVar1;
  undefined8 in_XMM1_Qa;
  
  Control::get_theme_item();
  _DAT_00000ae0 = Variant::operator_cast_to_Color((Variant *)&stack0x00000000);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  _DAT_00000ae8 = in_XMM1_Qa;
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   TabContainer::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#23}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#23}>
     ::_M_invoke(_Any_data *param_1,Node **param_2,StringName *param_3,StringName *param_4)

{
  code *pcVar1;
  undefined8 in_XMM1_Qa;
  
  Control::get_theme_item();
  _DAT_00000b20 = Variant::operator_cast_to_Color((Variant *)&stack0x00000000);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  _DAT_00000b28 = in_XMM1_Qa;
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   TabContainer::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#25}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#25}>
     ::_M_invoke(_Any_data *param_1,Node **param_2,StringName *param_3,StringName *param_4)

{
  code *pcVar1;
  
  Control::get_theme_item();
  Variant::operator_cast_to_int((Variant *)&stack0x00000000);
  _DAT_00000b38 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   TabContainer::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#7}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#7}>
     ::_M_invoke(_Any_data *param_1,Node **param_2,StringName *param_3,StringName *param_4)

{
  code *pcVar1;
  
  Control::get_theme_item();
  Variant::operator_cast_to_int((Variant *)&stack0x00000000);
  _DAT_00000a74 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   TabContainer::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#26}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#26}>
     ::_M_invoke(_Any_data *param_1,Node **param_2,StringName *param_3,StringName *param_4)

{
  code *pcVar1;
  
  Control::get_theme_item();
  Variant::operator_cast_to_int((Variant *)&stack0x00000000);
  _DAT_00000a78 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   TabContainer::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#6}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#6}>
     ::_M_invoke(_Any_data *param_1,Node **param_2,StringName *param_3,StringName *param_4)

{
  code *pcVar1;
  
  Control::get_theme_item();
  Variant::operator_cast_to_int((Variant *)&stack0x00000000);
  _DAT_00000a70 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   TabContainer::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#1}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#1}>
     ::_M_invoke(_Any_data *param_1,Node **param_2,StringName *param_3,StringName *param_4)

{
  code *pcVar1;
  
  Control::get_theme_item();
  Variant::operator_cast_to_int((Variant *)&stack0x00000000);
  _DAT_00000a48 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   TabContainer::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#2}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#2}>
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
   TabContainer::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#10}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#10}>
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
   TabContainer::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#3}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#3}>
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
   TabContainer::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#8}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#8}>
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
   TabContainer::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#11}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#11}>
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
   TabContainer::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#9}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#9}>
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
   TabContainer::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#16}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#16}>
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
   TabContainer::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#15}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#15}>
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
   TabContainer::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#13}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#13}>
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
   TabContainer::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#17}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#17}>
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
   TabContainer::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#14}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#14}>
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
   TabContainer::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#4}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#4}>
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
   TabContainer::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#5}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),TabContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#5}>
     ::_M_invoke(_Any_data *param_1,Node **param_2,StringName *param_3,StringName *param_4)

{
  code *pcVar1;
  
  Control::get_theme_item();
  Variant::get_validated_object();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Control*>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Control*>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* TabContainer::_bind_methods() [clone .cold] */

void TabContainer::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CallableCustomMethodPointer<TabContainer, void, TabBar*, int, int>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<TabContainer,void,TabBar*,int,int>::get_object
          (CallableCustomMethodPointer<TabContainer,void,TabBar*,int,int> *this)

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
      goto LAB_0011029d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0011029d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0011029d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<TabContainer, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<TabContainer,void>::get_object
          (CallableCustomMethodPointer<TabContainer,void> *this)

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
      goto LAB_0011039d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0011039d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0011039d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<TabContainer, void, Control*>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<TabContainer,void,Control*>::get_object
          (CallableCustomMethodPointer<TabContainer,void,Control*> *this)

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
      goto LAB_0011049d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0011049d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0011049d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<TabContainer, void, int>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<TabContainer,void,int>::get_object
          (CallableCustomMethodPointer<TabContainer,void,int> *this)

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
      goto LAB_0011059d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0011059d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0011059d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<TabContainer, void, int, int>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<TabContainer,void,int,int>::get_object
          (CallableCustomMethodPointer<TabContainer,void,int,int> *this)

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
      goto LAB_0011069d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0011069d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0011069d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<TabContainer, Variant, Vector2 const&, Control*>::get_object() const
    */

undefined8 __thiscall
CallableCustomMethodPointer<TabContainer,Variant,Vector2_const&,Control*>::get_object
          (CallableCustomMethodPointer<TabContainer,Variant,Vector2_const&,Control*> *this)

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
      goto LAB_0011079d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0011079d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0011079d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointerC<TabContainer, bool, Vector2 const&, Variant const&,
   Control*>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointerC<TabContainer,bool,Vector2_const&,Variant_const&,Control*>::get_object
          (CallableCustomMethodPointerC<TabContainer,bool,Vector2_const&,Variant_const&,Control*>
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
      goto LAB_0011089d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0011089d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0011089d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<TabContainer, void, Vector2 const&, Variant const&,
   Control*>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<TabContainer,void,Vector2_const&,Variant_const&,Control*>::get_object
          (CallableCustomMethodPointer<TabContainer,void,Vector2_const&,Variant_const&,Control*>
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
      goto LAB_0011099d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0011099d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0011099d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* TabContainer::_validate_propertyv(PropertyInfo&) const */

void TabContainer::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  if ((code *)PTR__validate_property_00133010 == CanvasItem::_validate_property) {
    return;
  }
  Control::_validate_property(param_1);
  return;
}



/* TabContainer::_setv(StringName const&, Variant const&) */

undefined8 TabContainer::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_00133018 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00110b58) */
/* TabContainer::_getv(StringName const&, Variant&) const */

undefined8 TabContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00133020 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
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



/* TabContainer::_get_class_namev() const */

undefined8 * TabContainer::_get_class_namev(void)

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
LAB_00110c23:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00110c23;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"TabContainer");
      goto LAB_00110c8e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"TabContainer");
LAB_00110c8e:
  return &_get_class_namev()::_class_name_static;
}



/* MethodBindTRC<Popup*>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Popup*>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  bool bVar4;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = 0;
  local_30 = 5;
  local_38 = "Popup";
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  *puVar3 = 0x18;
  *(undefined8 *)(puVar3 + 2) = 0;
  StringName::StringName((StringName *)(puVar3 + 4),(StringName *)&local_38);
  bVar4 = StringName::configured != '\0';
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  puVar3[10] = 6;
  if ((bVar4) && (local_38 != (char *)0x0)) {
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
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Control*>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Control*>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  bool bVar4;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = 0;
  local_30 = 7;
  local_38 = "Control";
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  *puVar3 = 0x18;
  *(undefined8 *)(puVar3 + 2) = 0;
  StringName::StringName((StringName *)(puVar3 + 4),(StringName *)&local_38);
  bVar4 = StringName::configured != '\0';
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  puVar3[10] = 6;
  if ((bVar4) && (local_38 != (char *)0x0)) {
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
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<TabBar*>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<TabBar*>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  bool bVar4;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = 0;
  local_30 = 6;
  local_38 = "TabBar";
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  *puVar3 = 0x18;
  *(undefined8 *)(puVar3 + 2) = 0;
  StringName::StringName((StringName *)(puVar3 + 4),(StringName *)&local_38);
  bVar4 = StringName::configured != '\0';
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  puVar3[10] = 6;
  if ((bVar4) && (local_38 != (char *)0x0)) {
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
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TabContainer::get_class() const */

void TabContainer::get_class(void)

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



/* TabContainer::~TabContainer() */

void __thiscall TabContainer::~TabContainer(TabContainer *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  bool bVar5;
  
  *(undefined ***)this = &PTR__initialize_classv_0012a470;
  if (*(long *)(this + 0xb30) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0xb30);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  if (*(long *)(this + 0xac8) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0xac8);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  if (*(long *)(this + 0xac0) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0xac0);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  if (*(long *)(this + 0xab8) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0xab8);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  if (*(long *)(this + 0xab0) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0xab0);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  if (*(long *)(this + 0xaa8) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0xaa8);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  if (*(long *)(this + 0xaa0) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0xaa0);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  if (*(long *)(this + 0xa98) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0xa98);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  if (*(long *)(this + 0xa90) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0xa90);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  if (*(long *)(this + 0xa88) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0xa88);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  if (*(long *)(this + 0xa80) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0xa80);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  if (*(long *)(this + 0xa68) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0xa68);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  if (*(long *)(this + 0xa60) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0xa60);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  if (*(long *)(this + 0xa58) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0xa58);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  if (*(long *)(this + 0xa50) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0xa50);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  if (*(long *)(this + 0xa30) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xa30) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0xa30);
      *(undefined8 *)(this + 0xa30) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  bVar5 = StringName::configured != '\0';
  *(code **)this = TabBar::_handle_can_drop_data;
  if (bVar5) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001112aa;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_001112aa:
  Control::~Control((Control *)this);
  return;
}



/* TabContainer::~TabContainer() */

void __thiscall TabContainer::~TabContainer(TabContainer *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  bool bVar5;
  
  *(undefined ***)this = &PTR__initialize_classv_0012a470;
  if (*(long *)(this + 0xb30) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0xb30);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  if (*(long *)(this + 0xac8) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0xac8);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  if (*(long *)(this + 0xac0) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0xac0);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  if (*(long *)(this + 0xab8) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0xab8);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  if (*(long *)(this + 0xab0) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0xab0);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  if (*(long *)(this + 0xaa8) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0xaa8);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  if (*(long *)(this + 0xaa0) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0xaa0);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  if (*(long *)(this + 0xa98) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0xa98);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  if (*(long *)(this + 0xa90) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0xa90);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  if (*(long *)(this + 0xa88) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0xa88);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  if (*(long *)(this + 0xa80) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0xa80);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  if (*(long *)(this + 0xa68) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0xa68);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  if (*(long *)(this + 0xa60) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0xa60);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  if (*(long *)(this + 0xa58) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0xa58);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  if (*(long *)(this + 0xa50) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0xa50);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  if (*(long *)(this + 0xa30) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xa30) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0xa30);
      *(undefined8 *)(this + 0xa30) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  bVar5 = StringName::configured != '\0';
  *(code **)this = TabBar::_handle_can_drop_data;
  if (bVar5) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011181a;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0011181a:
  Control::~Control((Control *)this);
  operator_delete(this,0xb40);
  return;
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
  local_48 = &_LC41;
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
      goto joined_r0x00111cec;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x00111cec:
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
  local_48 = &_LC41;
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
      goto joined_r0x00111e6c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x00111e6c:
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
  local_48 = &_LC41;
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
      goto joined_r0x00111fec;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x00111fec:
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
        if (pvVar5 == (void *)0x0) goto LAB_00112184;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_00112184:
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
            if (lVar5 == 0) goto LAB_0011249f;
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
LAB_0011249f:
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
    if (cVar6 != '\0') goto LAB_00112553;
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
          plVar1 = (long *)(*(long *)(lVar4 + 0x10) + -0x10);
          if (*(long *)(lVar4 + 0x10) != 0) {
            do {
              lVar5 = *plVar1;
              if (lVar5 == 0) goto LAB_0011262b;
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
LAB_0011262b:
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
      if (cVar6 != '\0') goto LAB_00112553;
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
                if (lVar5 == 0) goto LAB_0011270b;
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
LAB_0011270b:
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
        if (cVar6 != '\0') goto LAB_00112553;
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = String::operator==(param_1,"Object");
        return uVar7;
      }
      goto LAB_001127b4;
    }
  }
LAB_00112553:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_001127b4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Container::is_class(String const&) const */

undefined8 __thiscall Container::is_class(Container *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_0011283f;
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
LAB_0011283f:
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
    if (cVar6 != '\0') goto LAB_001128f3;
  }
  cVar6 = String::operator==(param_1,"Container");
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
              if (lVar5 == 0) goto LAB_001129b3;
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
LAB_001129b3:
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
      if (cVar6 != '\0') goto LAB_001128f3;
    }
    cVar6 = String::operator==(param_1,"Control");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = CanvasItem::is_class((CanvasItem *)this,param_1);
        return uVar7;
      }
      goto LAB_00112a5c;
    }
  }
LAB_001128f3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00112a5c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TabContainer::is_class(String const&) const */

undefined8 __thiscall TabContainer::is_class(TabContainer *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_00112adf;
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
LAB_00112adf:
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
    if (cVar5 != '\0') goto LAB_00112b93;
  }
  cVar5 = String::operator==(param_1,"TabContainer");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = Container::is_class((Container *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_00112b93:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
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



/* List<PropertyInfo, DefaultAllocator>::~List() */

void __thiscall
List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this)

{
  long *plVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)this;
  if (plVar5 == (long *)0x0) {
    return;
  }
  do {
    pvVar2 = (void *)*plVar5;
    if (pvVar2 == (void *)0x0) {
      if ((int)plVar5[2] != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if (*(long **)((long)pvVar2 + 0x40) == plVar5) {
      lVar4 = *(long *)((long)pvVar2 + 0x30);
      lVar3 = *(long *)((long)pvVar2 + 0x38);
      *plVar5 = lVar4;
      if (pvVar2 == (void *)plVar5[1]) {
        plVar5[1] = lVar3;
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x30) = lVar4;
        lVar4 = *(long *)((long)pvVar2 + 0x30);
      }
      if (lVar4 != 0) {
        *(long *)(lVar4 + 0x38) = lVar3;
      }
      if (*(long *)((long)pvVar2 + 0x20) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)((long)pvVar2 + 0x20) + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar4 = *(long *)((long)pvVar2 + 0x20);
          *(undefined8 *)((long)pvVar2 + 0x20) = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (*(long *)((long)pvVar2 + 0x10) != 0)) {
        StringName::unref();
      }
      if (*(long *)((long)pvVar2 + 8) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)((long)pvVar2 + 8) + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar4 = *(long *)((long)pvVar2 + 8);
          *(undefined8 *)((long)pvVar2 + 8) = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      Memory::free_static(pvVar2,false);
      *(int *)(plVar5 + 2) = (int)plVar5[2] + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    plVar5 = *(long **)this;
  } while ((int)plVar5[2] != 0);
  Memory::free_static(plVar5,false);
  return;
}



/* Callable create_custom_callable_function_pointer<TabContainer>(TabContainer*, char const*, void
   (TabContainer::*)()) */

TabContainer *
create_custom_callable_function_pointer<TabContainer>
          (TabContainer *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC41;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_0012a7e8;
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



/* Callable create_custom_callable_function_pointer<TabContainer, Control*>(TabContainer*, char
   const*, void (TabContainer::*)(Control*)) */

TabContainer *
create_custom_callable_function_pointer<TabContainer,Control*>
          (TabContainer *param_1,char *param_2,_func_void_Control_ptr *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC41;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_0012a998;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_void_Control_ptr **)(this + 0x20) = param_3 + 1;
  Callable::Callable((Callable *)param_1,this);
  return param_1;
}



/* MethodDefinition D_METHOD<char const*>(char const*, char const* const) */

char * D_METHOD<char_const*>(char *param_1,char *param_2)

{
  long in_FS_OFFSET;
  undefined1 local_38 [8];
  undefined8 local_30;
  undefined1 *local_28 [3];
  long local_10;
  
  local_28[0] = local_38;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = 0;
  D_METHODP(param_1,(char ***)param_2,(uint)local_28);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Callable Callable::bind<TabBar*>(TabBar*) const */

TabBar * Callable::bind<TabBar*>(TabBar *param_1)

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



/* Callable create_custom_callable_function_pointer<TabContainer, int>(TabContainer*, char const*,
   void (TabContainer::*)(int)) */

TabContainer *
create_custom_callable_function_pointer<TabContainer,int>
          (TabContainer *param_1,char *param_2,_func_void_int *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC41;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_0012abd8;
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
  String::split(local_58,SUB81(param_1,0),0x11327d);
  if ((local_50 != (long *)0x0) && (2 < local_50[-1])) {
    local_60 = 0;
    local_48 = &_LC84;
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
        goto LAB_0011335d;
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
  local_48 = &_LC84;
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
LAB_0011335d:
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



/* GetTypeInfo<TabContainer::TabPosition, void>::get_class_info() */

GetTypeInfo<TabContainer::TabPosition,void> * __thiscall
GetTypeInfo<TabContainer::TabPosition,void>::get_class_info
          (GetTypeInfo<TabContainer::TabPosition,void> *this)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  local_48 = "TabContainer::TabPosition";
  local_40 = 0x19;
  String::parse_latin1((StrRange *)&local_58);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_50,(String *)&local_58);
  StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
  *(undefined4 *)this = 2;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 0x10006;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_48);
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
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<TabBar::AlignmentMode>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<TabBar::AlignmentMode>::_gen_argument_type_info(int param_1)

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
  local_48 = "TabBar::AlignmentMode";
  local_40 = 0x15;
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



/* MethodBindTRC<Control::FocusMode>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Control::FocusMode>::_gen_argument_type_info(int param_1)

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
  local_48 = "Control::FocusMode";
  local_40 = 0x12;
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



/* MethodBindTRC<TabContainer::TabPosition>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<TabContainer::TabPosition>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = 0;
  local_30 = 0x19;
  local_38 = "TabContainer::TabPosition";
  String::parse_latin1((StrRange *)&local_40);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_38,(String *)&local_40);
  StringName::StringName((StringName *)&local_48,(String *)&local_38,false);
  *puVar4 = 2;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  puVar4[10] = 0x10006;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_48);
  if ((StringName::configured != '\0') && (local_48 != 0)) {
    StringName::unref();
  }
  pcVar3 = local_38;
  if (local_38 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)(local_38 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_38 = (char *)0x0;
      Memory::free_static(pcVar3 + -0x10,false);
    }
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
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<TabContainer, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<TabContainer,void>::call
          (CallableCustomMethodPointer<TabContainer,void> *this,Variant **param_1,int param_2,
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
      goto LAB_00113c2f;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_00113c2f;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00113c08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_00113cf1;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_00113c2f:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC99,"./core/object/callable_method_pointer.h",0x67,
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
LAB_00113cf1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<TabContainer, void, Control*>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<TabContainer,void,Control*>::call
          (CallableCustomMethodPointer<TabContainer,void,Control*> *this,Variant **param_1,
          int param_2,Variant *param_3,CallError *param_4)

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
      goto LAB_00113f35;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar10[1] == 0) goto LAB_00113f35;
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
LAB_00113e40:
          uVar4 = _LC100;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        else {
          this_00 = *param_1;
          pOVar6 = Variant::operator_cast_to_Object_(this_00);
          pOVar7 = Variant::operator_cast_to_Object_(this_00);
          if (((pOVar7 == (Object *)0x0) ||
              (lVar8 = __dynamic_cast(pOVar7,&Object::typeinfo,&Control::typeinfo,0), lVar8 == 0))
             && (pOVar6 != (Object *)0x0)) goto LAB_00113e40;
        }
        pOVar6 = Variant::operator_cast_to_Object_(*param_1);
        if (pOVar6 != (Object *)0x0) {
          pOVar6 = (Object *)__dynamic_cast(pOVar6,&Object::typeinfo,&Control::typeinfo,0);
        }
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00113ea7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),pOVar6);
          return;
        }
        goto LAB_00113ff7;
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
LAB_00113f35:
    local_60 = 0;
    local_58 = "\', can\'t call method.";
    local_50 = 0x15;
    String::parse_latin1((StrRange *)&local_60);
    uitos((ulong)local_70);
    operator+((char *)local_68,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_58,(String *)local_68);
    _err_print_error(&_LC99,"./core/object/callable_method_pointer.h",0x67,
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
LAB_00113ff7:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<TabContainer, Variant, Vector2 const&, Control*>::call(Variant
   const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<TabContainer,Variant,Vector2_const&,Control*>::call
          (CallableCustomMethodPointer<TabContainer,Variant,Vector2_const&,Control*> *this,
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
          goto LAB_001140cc;
        }
        if (param_2 != 2) {
          *(undefined4 *)param_4 = 4;
          *(undefined4 *)(param_4 + 8) = 2;
          goto LAB_001140cc;
        }
        *(undefined4 *)param_4 = 0;
        if (((ulong)pcVar11 & 1) != 0) {
          pcVar11 = *(code **)(pcVar11 + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[1],0x18);
        if (cVar5 == '\0') {
LAB_0011414c:
          uVar4 = _LC101;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        else {
          this_00 = param_1[1];
          pOVar6 = Variant::operator_cast_to_Object_(this_00);
          pOVar7 = Variant::operator_cast_to_Object_(this_00);
          if (((pOVar7 == (Object *)0x0) ||
              (lVar8 = __dynamic_cast(pOVar7,&Object::typeinfo,&Control::typeinfo,0), lVar8 == 0))
             && (pOVar6 != (Object *)0x0)) goto LAB_0011414c;
        }
        pOVar6 = Variant::operator_cast_to_Object_(param_1[1]);
        if (pOVar6 != (Object *)0x0) {
          pOVar6 = (Object *)__dynamic_cast(pOVar6,&Object::typeinfo,&Control::typeinfo,0);
        }
        cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,5);
        uVar4 = _LC102;
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
        goto LAB_001140cc;
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
  _err_print_error(&_LC99,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (String *)&local_78,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref(local_88);
  CowData<char32_t>::_unref(local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
LAB_001140cc:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<TabContainer, void, int, int>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<TabContainer,void,int,int>::call
          (CallableCustomMethodPointer<TabContainer,void,int,int> *this,Variant **param_1,
          int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  ulong *puVar9;
  code *UNRECOVERED_JUMPTABLE;
  long in_FS_OFFSET;
  bool bVar10;
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar8 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar8 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar3 = (ulong)local_48 >> 8;
      local_48 = (char *)(uVar3 << 8);
      LOCK();
      bVar10 = (char)ObjectDB::spin_lock == '\0';
      if (bVar10) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar10) break;
      local_48 = (char *)(uVar3 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar9 = (ulong *)((ulong)uVar8 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar9 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0011453d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar9[1] == 0) goto LAB_0011453d;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if ((uint)param_2 < 3) {
      if (param_2 == 2) {
        *(undefined4 *)param_4 = 0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[1],2);
        uVar4 = _LC103;
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        iVar6 = Variant::operator_cast_to_int(param_1[1]);
        cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,2);
        uVar4 = _LC104;
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        iVar7 = Variant::operator_cast_to_int(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00114516. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),iVar7,iVar6);
          return;
        }
        goto LAB_001145ff;
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
LAB_0011453d:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC99,"./core/object/callable_method_pointer.h",0x67,
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
LAB_001145ff:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<TabContainer, void, int>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<TabContainer,void,int>::call
          (CallableCustomMethodPointer<TabContainer,void,int> *this,Variant **param_1,int param_2,
          Variant *param_3,CallError *param_4)

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
      goto LAB_001147c8;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar8[1] == 0) goto LAB_001147c8;
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
        uVar4 = _LC104;
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        iVar6 = Variant::operator_cast_to_int(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00114777. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),iVar6);
          return;
        }
        goto LAB_0011488a;
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
LAB_001147c8:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC99,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0011488a:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<TabContainer, void, Vector2 const&, Variant const&,
   Control*>::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<TabContainer,void,Vector2_const&,Variant_const&,Control*>::call
          (CallableCustomMethodPointer<TabContainer,void,Vector2_const&,Variant_const&,Control*>
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
          goto LAB_00114955;
        }
        if (param_2 != 3) {
          *(undefined4 *)param_4 = 4;
          *(undefined4 *)(param_4 + 8) = 3;
          goto LAB_00114955;
        }
        *(undefined4 *)param_4 = 0;
        if (((ulong)pcVar11 & 1) != 0) {
          pcVar11 = *(code **)(pcVar11 + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[2],0x18);
        if (cVar5 == '\0') {
LAB_001149df:
          uVar4 = _LC105;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        else {
          this_00 = param_1[2];
          pOVar6 = Variant::operator_cast_to_Object_(this_00);
          pOVar7 = Variant::operator_cast_to_Object_(this_00);
          if (((pOVar7 == (Object *)0x0) ||
              (lVar8 = __dynamic_cast(pOVar7,&Object::typeinfo,&Control::typeinfo,0), lVar8 == 0))
             && (pOVar6 != (Object *)0x0)) goto LAB_001149df;
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
        uVar4 = _LC102;
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        local_60 = Variant::operator_cast_to_Vector2(*param_1);
        (*pcVar11)((long *)(lVar1 + lVar2),&local_60,(Variant *)local_58,pOVar6);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        goto LAB_00114955;
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
  _err_print_error(&_LC99,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (String *)&local_78,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref(local_88);
  CowData<char32_t>::_unref(local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
LAB_00114955:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointerC<TabContainer, bool, Vector2 const&, Variant const&,
   Control*>::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointerC<TabContainer,bool,Vector2_const&,Variant_const&,Control*>::call
          (CallableCustomMethodPointerC<TabContainer,bool,Vector2_const&,Variant_const&,Control*>
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
          goto LAB_00114cd4;
        }
        if (param_2 != 3) {
          *(undefined4 *)param_4 = 4;
          *(undefined4 *)(param_4 + 8) = 3;
          goto LAB_00114cd4;
        }
        *(undefined4 *)param_4 = 0;
        if (((ulong)pcVar11 & 1) != 0) {
          pcVar11 = *(code **)(pcVar11 + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[2],0x18);
        if (cVar5 == '\0') {
LAB_00114d5c:
          uVar4 = _LC105;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        else {
          this_00 = param_1[2];
          pOVar6 = Variant::operator_cast_to_Object_(this_00);
          pOVar7 = Variant::operator_cast_to_Object_(this_00);
          if (((pOVar7 == (Object *)0x0) ||
              (lVar8 = __dynamic_cast(pOVar7,&Object::typeinfo,&Control::typeinfo,0), lVar8 == 0))
             && (pOVar6 != (Object *)0x0)) goto LAB_00114d5c;
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
        uVar4 = _LC102;
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
        goto LAB_00114cd4;
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
  _err_print_error(&_LC99,"./core/object/callable_method_pointer.h",0xad,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (String *)&local_98,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref(local_a8);
  CowData<char32_t>::_unref(local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
LAB_00114cd4:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<TabContainer, void, TabBar*, int, int>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<TabContainer,void,TabBar*,int,int>::call
          (CallableCustomMethodPointer<TabContainer,void,TabBar*,int,int> *this,Variant **param_1,
          int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  Variant *this_00;
  ulong uVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  Object *pOVar8;
  Object *pOVar9;
  long lVar10;
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
      goto LAB_001151f1;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar12[1] == 0) goto LAB_001151f1;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if ((uint)param_2 < 4) {
      if (param_2 == 3) {
        *(undefined4 *)param_4 = 0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[2],2);
        uVar4 = _LC107;
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        iVar6 = Variant::operator_cast_to_int(param_1[2]);
        cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[1],2);
        uVar4 = _LC103;
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        iVar7 = Variant::operator_cast_to_int(param_1[1]);
        cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,0x18);
        if (cVar5 == '\0') {
LAB_0011515f:
          uVar4 = _LC100;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        else {
          this_00 = *param_1;
          pOVar8 = Variant::operator_cast_to_Object_(this_00);
          pOVar9 = Variant::operator_cast_to_Object_(this_00);
          if (((pOVar9 == (Object *)0x0) ||
              (lVar10 = __dynamic_cast(pOVar9,&Object::typeinfo,&TabBar::typeinfo,0), lVar10 == 0))
             && (pOVar8 != (Object *)0x0)) goto LAB_0011515f;
        }
        pOVar8 = Variant::operator_cast_to_Object_(*param_1);
        if (pOVar8 != (Object *)0x0) {
          pOVar8 = (Object *)__dynamic_cast(pOVar8,&Object::typeinfo,&TabBar::typeinfo,0);
        }
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001151ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),pOVar8,iVar7,iVar6);
          return;
        }
        goto LAB_00115304;
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
LAB_001151f1:
    local_60 = 0;
    local_58 = "\', can\'t call method.";
    local_50 = 0x15;
    String::parse_latin1((StrRange *)&local_60);
    uitos((ulong)local_70);
    operator+((char *)local_68,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_58,(String *)local_68);
    _err_print_error(&_LC99,"./core/object/callable_method_pointer.h",0x67,
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
LAB_00115304:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Node*>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<Node*>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  undefined8 local_78;
  long local_70;
  undefined *local_68;
  long local_60;
  long local_58;
  undefined4 local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar3 = 0;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  puVar3[10] = 6;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    local_78 = 0;
    local_68 = &_LC49;
    local_60 = 4;
    String::parse_latin1((StrRange *)&local_78);
    StringName::StringName((StringName *)&local_70,(String *)&local_78,false);
    local_68 = (undefined *)CONCAT44(local_68._4_4_,0x18);
    local_60 = 0;
    StringName::StringName((StringName *)&local_58,(StringName *)&local_70);
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    if ((StringName::configured != '\0') && (local_70 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    *puVar3 = local_68._0_4_;
    if (*(long *)(puVar3 + 2) != local_60) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar3 + 2));
      lVar2 = local_60;
      local_60 = 0;
      *(long *)(puVar3 + 2) = lVar2;
    }
    if (*(long *)(puVar3 + 4) != local_58) {
      StringName::unref();
      lVar2 = local_58;
      local_58 = 0;
      *(long *)(puVar3 + 4) = lVar2;
    }
    lVar2 = local_48;
    puVar3[6] = local_50;
    if (*(long *)(puVar3 + 8) == local_48) {
      puVar3[10] = local_40;
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
    }
    else {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar3 + 8));
      *(long *)(puVar3 + 8) = local_48;
      puVar3[10] = local_40;
    }
    if ((StringName::configured != '\0') && (local_58 != 0)) {
      StringName::unref();
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
  }
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
  if (in_EDX != 0) goto LAB_0011557b;
  local_78 = 0;
  local_80 = 0;
  local_68 = &_LC41;
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
LAB_00115670:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00115670;
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
LAB_0011557b:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
}



/* MethodBindT<TabContainer::TabPosition>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<TabContainer::TabPosition>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  long lVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  long local_90;
  details local_88 [8];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
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
    local_60._0_8_ = 0x19;
    local_68 = "TabContainer::TabPosition";
    String::parse_latin1((StrRange *)&local_80);
    godot::details::enum_qualified_name_to_class_info_name(local_88,(String *)&local_80);
    StringName::StringName((StringName *)&local_90,(String *)local_88,false);
    local_60 = (undefined1  [16])0x0;
    local_78 = 0;
    local_70 = 0;
    local_68 = (char *)0x2;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0x10006;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    if ((StringName::configured != '\0') && (local_90 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
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
  if (in_EDX != 0) goto LAB_001159ab;
  local_78 = 0;
  local_80 = 0;
  local_68 = &_LC41;
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
LAB_00115aa0:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00115aa0;
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
LAB_001159ab:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
}



/* MethodBindT<Control::FocusMode>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<Control::FocusMode>::_gen_argument_type_info(int param_1)

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
    local_60._0_8_ = 0x12;
    local_68 = "Control::FocusMode";
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
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<TabBar::AlignmentMode>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<TabBar::AlignmentMode>::_gen_argument_type_info(int param_1)

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
    local_60._0_8_ = 0x15;
    local_68 = "TabBar::AlignmentMode";
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
  long *plVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
  undefined4 *puVar4;
  long in_FS_OFFSET;
  CowData<char32_t> *local_c0;
  StringName *local_b8;
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
  local_b8 = (StringName *)&local_68;
  local_c0 = (CowData<char32_t> *)&local_70;
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
    CowData<char32_t>::_ref(local_c0,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 == 0) {
LAB_00116118:
    local_50 = 0x80;
    StringName::operator=(local_b8,(StringName *)&local_88);
LAB_00116127:
    lVar2 = *(long *)param_1;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00116118;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 == local_80) {
      if ((StringName::configured != '\0') && (local_80 != 0)) {
        StringName::unref();
      }
      goto LAB_00116127;
    }
    StringName::unref();
    lVar2 = *(long *)param_1;
    local_68 = local_80;
  }
  if (lVar2 == 0) {
    pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar3;
    *(undefined4 *)pauVar3[1] = 0;
    *pauVar3 = (undefined1  [16])0x0;
  }
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
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 2),(CowData *)local_c0);
  }
  StringName::operator=((StringName *)(puVar4 + 4),local_b8);
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
  CowData<char32_t>::_unref(local_c0);
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
  if ((code *)PTR__get_property_list_00133028 != Object::_get_property_list) {
    CanvasItem::_get_property_list((List *)this);
  }
  if (!param_2) goto LAB_001162b4;
  local_88 = 0;
  local_90 = 0;
  local_78 = "Node";
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_98 = 0;
  local_78 = "Node";
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref(local_c0,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 == 0) {
LAB_00116538:
    local_50 = 0x80;
    StringName::operator=(local_b8,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00116538;
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
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref(local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"Node",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
LAB_001162b4:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
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
LAB_001167dd:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001167dd;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x001167ff;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x001167ff:
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
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
  if ((code *)PTR__get_property_list_00133030 != CanvasItem::_get_property_list) {
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
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
  long in_FS_OFFSET;
  StringName *local_a0;
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
LAB_00116c08:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00116c08;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00116c2a;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00116c2a:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  local_a0 = (StringName *)&local_68;
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
  StringName::operator=((StringName *)(puVar5 + 4),local_a0);
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



/* TabContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall TabContainer::_get_property_listv(TabContainer *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
  undefined4 *puVar4;
  long in_FS_OFFSET;
  StringName *local_a0;
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
  local_78 = "TabContainer";
  local_70 = 0xc;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "TabContainer";
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
LAB_00117045:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00117045;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00117067;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00117067:
  if (lVar2 == 0) {
    pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar3;
    *(undefined4 *)pauVar3[1] = 0;
    *pauVar3 = (undefined1  [16])0x0;
  }
  local_a0 = (StringName *)&local_68;
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
  StringName::operator=((StringName *)(puVar4 + 4),local_a0);
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
  StringName::StringName((StringName *)&local_78,"TabContainer",false);
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



/* MethodBindTRC<int, Control*>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<int,Control*>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  undefined8 local_a8;
  long local_a0;
  long local_98;
  undefined1 local_90 [16];
  undefined8 local_80;
  long local_78;
  undefined4 local_70;
  char *local_68;
  long local_60;
  ulong local_58;
  undefined4 local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_98 = 0;
  if (in_EDX == 0) {
    local_80 = 0;
    local_90._0_8_ = 0;
    local_90._8_8_ = 0;
    local_70 = 6;
    local_68 = "Control";
    local_78 = 0;
    local_a8 = 0;
    local_60 = 7;
    String::parse_latin1((StrRange *)&local_a8);
    StringName::StringName((StringName *)&local_a0,(String *)&local_a8,false);
    local_68 = (char *)CONCAT44(local_68._4_4_,0x18);
    local_60 = 0;
    StringName::StringName((StringName *)&local_58,(StringName *)&local_a0);
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    if ((StringName::configured != '\0') && (local_a0 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    local_98 = CONCAT44(local_98._4_4_,local_68._0_4_);
    if (local_90._0_8_ != local_60) {
      CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
      local_90._0_8_ = local_60;
      local_60 = 0;
    }
    if (local_90._8_8_ != local_58) {
      StringName::unref();
      local_90._8_8_ = local_58;
      local_58 = 0;
    }
    local_80 = CONCAT44(local_80._4_4_,local_50);
    if (local_78 != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      local_78 = local_48;
      local_48 = 0;
    }
    local_70 = local_40;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
    uVar3 = local_90._8_8_;
    uVar2 = local_90._0_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_90._8_8_;
    local_90 = auVar1 << 0x40;
    *puVar4 = (undefined4)local_98;
    *(undefined8 *)(puVar4 + 2) = uVar2;
    *(undefined8 *)(puVar4 + 4) = uVar3;
    puVar4[6] = (undefined4)local_80;
    *(long *)(puVar4 + 8) = local_78;
    puVar4[10] = local_70;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
    goto LAB_001175b0;
  }
  local_a0 = 0;
  local_60 = 0;
  local_68 = "";
  String::parse_latin1((StrRange *)&local_a0);
  local_a8 = 0;
  *puVar4 = 2;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (local_a0 == 0) {
    puVar4[10] = 6;
LAB_00117577:
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_98);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_a0);
    puVar4[10] = 6;
    if (puVar4[6] != 0x11) goto LAB_00117577;
    StringName::StringName((StringName *)&local_68,(String *)(puVar4 + 8),false);
    if (*(undefined **)(puVar4 + 4) == local_68) {
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(char **)(puVar4 + 4) = local_68;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  if ((StringName::configured != '\0') && (local_98 != 0)) {
    StringName::unref();
  }
LAB_001175b0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int, Vector2 const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<int,Vector2_const&>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  undefined8 local_b0;
  undefined8 local_a8;
  long local_a0;
  long local_98;
  undefined1 local_90 [16];
  undefined8 local_80;
  long local_78;
  undefined4 local_70;
  undefined *local_68;
  long local_60;
  ulong local_58;
  undefined4 local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_98 = 0;
  if (in_EDX == 0) {
    local_80 = 0;
    local_90._0_8_ = 0;
    local_90._8_8_ = 0;
    local_78 = 0;
    local_70 = 6;
    local_a0 = 0;
    local_a8 = 0;
    local_68 = &_LC41;
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_a8);
    local_b0 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_68,5,(CowData<char32_t> *)&local_b0,0,(StrRange *)&local_a8,6,
               &local_a0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    if ((StringName::configured != '\0') && (local_a0 != 0)) {
      StringName::unref();
    }
    local_98 = CONCAT44(local_98._4_4_,local_68._0_4_);
    if (local_90._0_8_ != local_60) {
      CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
      local_90._0_8_ = local_60;
      local_60 = 0;
    }
    if (local_90._8_8_ != local_58) {
      StringName::unref();
      local_90._8_8_ = local_58;
      local_58 = 0;
    }
    local_80 = CONCAT44(local_80._4_4_,local_50);
    if (local_78 != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      local_78 = local_48;
      local_48 = 0;
    }
    local_70 = local_40;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
    uVar3 = local_90._8_8_;
    uVar2 = local_90._0_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_90._8_8_;
    local_90 = auVar1 << 0x40;
    *puVar4 = (undefined4)local_98;
    *(undefined8 *)(puVar4 + 2) = uVar2;
    *(undefined8 *)(puVar4 + 4) = uVar3;
    puVar4[6] = (undefined4)local_80;
    *(long *)(puVar4 + 8) = local_78;
    puVar4[10] = local_70;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
    goto LAB_001178ca;
  }
  local_a0 = 0;
  local_60 = 0;
  local_68 = &_LC41;
  String::parse_latin1((StrRange *)&local_a0);
  local_a8 = 0;
  *puVar4 = 2;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (local_a0 == 0) {
    puVar4[10] = 6;
LAB_0011788f:
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_98);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_a0);
    puVar4[10] = 6;
    if (puVar4[6] != 0x11) goto LAB_0011788f;
    StringName::StringName((StringName *)&local_68,(String *)(puVar4 + 8),false);
    if (*(undefined **)(puVar4 + 4) == local_68) {
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(undefined **)(puVar4 + 4) = local_68;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  if ((StringName::configured != '\0') && (local_98 != 0)) {
    StringName::unref();
  }
LAB_001178ca:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<int,int>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar5;
  long in_FS_OFFSET;
  undefined8 local_98;
  long local_90;
  long local_88;
  long local_80;
  undefined *local_78;
  undefined1 local_70 [16];
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  puVar5 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar5 = 0;
  puVar5[6] = 0;
  *(undefined8 *)(puVar5 + 8) = 0;
  puVar5[10] = 6;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  if ((in_EDX != 0) && (in_EDX != 1)) goto LAB_00117966;
  local_88 = 0;
  local_90 = 0;
  local_78 = &_LC41;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_70._8_8_;
  local_70 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_90);
  local_98 = 0;
  local_78 = (undefined *)CONCAT44(local_78._4_4_,2);
  local_60 = 0;
  local_58 = 0;
  local_70 = (undefined1  [16])0x0;
  if (local_90 == 0) {
LAB_00117a60:
    local_50 = 6;
    StringName::operator=((StringName *)(local_70 + 8),(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 6;
    if (local_60 != 0x11) goto LAB_00117a60;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_70._8_8_ == local_80) {
      if ((StringName::configured != '\0') && (local_80 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_70._8_8_ = local_80;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  *puVar5 = local_78._0_4_;
  if (*(long *)(puVar5 + 2) != local_70._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar5 + 2));
    uVar3 = local_70._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_70._8_8_;
    local_70 = auVar2 << 0x40;
    *(undefined8 *)(puVar5 + 2) = uVar3;
  }
  if (*(long *)(puVar5 + 4) != local_70._8_8_) {
    StringName::unref();
    uVar3 = local_70._8_8_;
    local_70._8_8_ = 0;
    *(undefined8 *)(puVar5 + 4) = uVar3;
  }
  puVar5[6] = local_60;
  if (*(long *)(puVar5 + 8) != local_58) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar5 + 8));
    lVar4 = local_58;
    local_58 = 0;
    *(long *)(puVar5 + 8) = lVar4;
  }
  puVar5[10] = local_50;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
LAB_00117966:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
}



/* MethodBindT<int, Variant const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<int,Variant_const&>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uVar4;
  long lVar5;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar6;
  long in_FS_OFFSET;
  undefined8 local_98;
  long local_90;
  long local_88;
  long local_80;
  undefined *local_78;
  undefined1 local_70 [16];
  ulong local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  puVar6 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar6 = 0;
  puVar6[6] = 0;
  *(undefined8 *)(puVar6 + 8) = 0;
  puVar6[10] = 6;
  *(undefined1 (*) [16])(puVar6 + 2) = (undefined1  [16])0x0;
  if (in_EDX != 0) {
    if (in_EDX == 1) {
      local_70 = (undefined1  [16])0x0;
      local_80 = 0;
      local_88 = 0;
      local_90 = 0;
      local_78 = (undefined *)0x0;
      local_60 = 0;
      local_58 = 0;
      local_50 = 0x20006;
      StringName::operator=((StringName *)(local_70 + 8),(StringName *)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      if ((StringName::configured != '\0') && (local_80 != 0)) {
        StringName::unref();
      }
      *puVar6 = local_78._0_4_;
      if (*(long *)(puVar6 + 2) != local_70._0_8_) {
        CowData<char32_t>::_unref((CowData<char32_t> *)(puVar6 + 2));
        uVar4 = local_70._0_8_;
        auVar2._8_8_ = 0;
        auVar2._0_8_ = local_70._8_8_;
        local_70 = auVar2 << 0x40;
        *(undefined8 *)(puVar6 + 2) = uVar4;
      }
      if (*(long *)(puVar6 + 4) != local_70._8_8_) {
        StringName::unref();
        uVar4 = local_70._8_8_;
        local_70._8_8_ = 0;
        *(undefined8 *)(puVar6 + 4) = uVar4;
      }
      puVar6[6] = (int)local_60;
      if (*(long *)(puVar6 + 8) != local_58) {
        CowData<char32_t>::_unref((CowData<char32_t> *)(puVar6 + 8));
        lVar5 = local_58;
        local_58 = 0;
        *(long *)(puVar6 + 8) = lVar5;
      }
      puVar6[10] = local_50;
      PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
    }
    goto LAB_00117bba;
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = &_LC41;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_70._8_8_;
  local_70 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_90);
  local_98 = 0;
  local_78 = (undefined *)CONCAT44(local_78._4_4_,2);
  local_60 = local_60 & 0xffffffff00000000;
  local_58 = 0;
  local_70 = (undefined1  [16])0x0;
  if (local_90 == 0) {
LAB_00117dd8:
    local_50 = 6;
    StringName::operator=((StringName *)(local_70 + 8),(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 6;
    if ((int)local_60 != 0x11) goto LAB_00117dd8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_70._8_8_ == local_80) {
      if ((StringName::configured != '\0') && (local_80 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_70._8_8_ = local_80;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  *puVar6 = local_78._0_4_;
  if (*(long *)(puVar6 + 2) != local_70._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar6 + 2));
    uVar4 = local_70._0_8_;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = local_70._8_8_;
    local_70 = auVar3 << 0x40;
    *(undefined8 *)(puVar6 + 2) = uVar4;
  }
  if (*(long *)(puVar6 + 4) != local_70._8_8_) {
    StringName::unref();
    uVar4 = local_70._8_8_;
    local_70._8_8_ = 0;
    *(undefined8 *)(puVar6 + 4) = uVar4;
  }
  puVar6[6] = (int)local_60;
  if (*(long *)(puVar6 + 8) != local_58) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar6 + 8));
    lVar5 = local_58;
    local_58 = 0;
    *(long *)(puVar6 + 8) = lVar5;
  }
  puVar6[10] = local_50;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
LAB_00117bba:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar6;
}



/* MethodBindT<int, String const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<int,String_const&>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uVar4;
  long lVar5;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar6;
  long in_FS_OFFSET;
  undefined8 local_98;
  long local_90;
  long local_88;
  long local_80;
  undefined *local_78;
  undefined1 local_70 [16];
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  puVar6 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar6 = 0;
  puVar6[6] = 0;
  *(undefined8 *)(puVar6 + 8) = 0;
  puVar6[10] = 6;
  *(undefined1 (*) [16])(puVar6 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    local_88 = 0;
    local_90 = 0;
    local_78 = &_LC41;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_70._8_8_;
    local_70 = auVar1 << 0x40;
    String::parse_latin1((StrRange *)&local_90);
    local_78 = (undefined *)CONCAT44(local_78._4_4_,2);
  }
  else {
    if (in_EDX != 1) goto LAB_00117f2a;
    local_88 = 0;
    local_90 = 0;
    local_78 = &_LC41;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = local_70._8_8_;
    local_70 = auVar3 << 0x40;
    String::parse_latin1((StrRange *)&local_90);
    local_78 = (undefined *)CONCAT44(local_78._4_4_,4);
  }
  local_98 = 0;
  local_60 = 0;
  local_58 = 0;
  local_70 = (undefined1  [16])0x0;
  if (local_90 == 0) {
LAB_00118020:
    local_50 = 6;
    StringName::operator=((StringName *)(local_70 + 8),(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 6;
    if (local_60 != 0x11) goto LAB_00118020;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_70._8_8_ == local_80) {
      if ((StringName::configured != '\0') && (local_80 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_70._8_8_ = local_80;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  *puVar6 = local_78._0_4_;
  if (*(long *)(puVar6 + 2) != local_70._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar6 + 2));
    uVar4 = local_70._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_70._8_8_;
    local_70 = auVar2 << 0x40;
    *(undefined8 *)(puVar6 + 2) = uVar4;
  }
  if (*(long *)(puVar6 + 4) != local_70._8_8_) {
    StringName::unref();
    uVar4 = local_70._8_8_;
    local_70._8_8_ = 0;
    *(undefined8 *)(puVar6 + 4) = uVar4;
  }
  puVar6[6] = local_60;
  if (*(long *)(puVar6 + 8) != local_58) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar6 + 8));
    lVar5 = local_58;
    local_58 = 0;
    *(long *)(puVar6 + 8) = lVar5;
  }
  puVar6[10] = local_50;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
LAB_00117f2a:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar6;
}



/* MethodBindT<int, Ref<Texture2D> const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<int,Ref<Texture2D>const&>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar5;
  long in_FS_OFFSET;
  undefined8 local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined1 local_70 [16];
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  puVar5 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar5 = 0;
  puVar5[6] = 0;
  *(undefined8 *)(puVar5 + 8) = 0;
  puVar5[10] = 6;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    local_88 = 0;
    local_90 = 0;
    local_78 = "";
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_70._8_8_;
    local_70 = auVar1 << 0x40;
    String::parse_latin1((StrRange *)&local_90);
    local_98 = 0;
    local_78 = (char *)CONCAT44(local_78._4_4_,2);
    local_60 = 0;
    local_58 = 0;
    local_70 = (undefined1  [16])0x0;
    if ((local_90 != 0) &&
       (CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90),
       local_60 == 0x11)) goto LAB_00118295;
LAB_00118365:
    local_50 = 6;
    StringName::operator=((StringName *)(local_70 + 8),(StringName *)&local_88);
  }
  else {
    if (in_EDX != 1) goto LAB_001181da;
    local_88 = 0;
    local_90 = 0;
    local_78 = "Texture2D";
    local_70._0_8_ = 9;
    String::parse_latin1((StrRange *)&local_90);
    local_98 = 0;
    local_78 = (char *)CONCAT44(local_78._4_4_,0x18);
    local_60 = 0x11;
    local_58 = 0;
    local_70 = (undefined1  [16])0x0;
    if ((local_90 != 0) &&
       (CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90),
       local_60 != 0x11)) goto LAB_00118365;
LAB_00118295:
    local_50 = 6;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_70._8_8_ == local_80) {
      if ((StringName::configured != '\0') && (local_80 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_70._8_8_ = local_80;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  *puVar5 = local_78._0_4_;
  if (*(long *)(puVar5 + 2) != local_70._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar5 + 2));
    uVar3 = local_70._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_70._8_8_;
    local_70 = auVar2 << 0x40;
    *(undefined8 *)(puVar5 + 2) = uVar3;
  }
  if (*(long *)(puVar5 + 4) != local_70._8_8_) {
    StringName::unref();
    uVar3 = local_70._8_8_;
    local_70._8_8_ = 0;
    *(undefined8 *)(puVar5 + 4) = uVar3;
  }
  puVar5[6] = local_60;
  if (*(long *)(puVar5 + 8) != local_58) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar5 + 8));
    lVar4 = local_58;
    local_58 = 0;
    *(long *)(puVar5 + 8) = lVar4;
  }
  puVar5[10] = local_50;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
LAB_001181da:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
}



/* MethodBindT<int, bool>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<int,bool>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uVar4;
  long lVar5;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar6;
  long in_FS_OFFSET;
  undefined8 local_98;
  long local_90;
  long local_88;
  long local_80;
  undefined *local_78;
  undefined1 local_70 [16];
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  puVar6 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar6 = 0;
  puVar6[6] = 0;
  *(undefined8 *)(puVar6 + 8) = 0;
  puVar6[10] = 6;
  *(undefined1 (*) [16])(puVar6 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    local_88 = 0;
    local_90 = 0;
    local_78 = &_LC41;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_70._8_8_;
    local_70 = auVar1 << 0x40;
    String::parse_latin1((StrRange *)&local_90);
    local_78 = (undefined *)CONCAT44(local_78._4_4_,2);
  }
  else {
    if (in_EDX != 1) goto LAB_001184ea;
    local_88 = 0;
    local_90 = 0;
    local_78 = &_LC41;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = local_70._8_8_;
    local_70 = auVar3 << 0x40;
    String::parse_latin1((StrRange *)&local_90);
    local_78 = (undefined *)CONCAT44(local_78._4_4_,1);
  }
  local_98 = 0;
  local_60 = 0;
  local_58 = 0;
  local_70 = (undefined1  [16])0x0;
  if (local_90 == 0) {
LAB_001185e0:
    local_50 = 6;
    StringName::operator=((StringName *)(local_70 + 8),(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 6;
    if (local_60 != 0x11) goto LAB_001185e0;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_70._8_8_ == local_80) {
      if ((StringName::configured != '\0') && (local_80 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_70._8_8_ = local_80;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  *puVar6 = local_78._0_4_;
  if (*(long *)(puVar6 + 2) != local_70._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar6 + 2));
    uVar4 = local_70._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_70._8_8_;
    local_70 = auVar2 << 0x40;
    *(undefined8 *)(puVar6 + 2) = uVar4;
  }
  if (*(long *)(puVar6 + 4) != local_70._8_8_) {
    StringName::unref();
    uVar4 = local_70._8_8_;
    local_70._8_8_ = 0;
    *(undefined8 *)(puVar6 + 4) = uVar4;
  }
  puVar6[6] = local_60;
  if (*(long *)(puVar6 + 8) != local_58) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar6 + 8));
    lVar5 = local_58;
    local_58 = 0;
    *(long *)(puVar6 + 8) = lVar5;
  }
  puVar6[10] = local_50;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
LAB_001184ea:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar6;
}



/* MethodBind* create_method_bind<TabContainer, int>(int (TabContainer::*)() const) */

MethodBind * create_method_bind<TabContainer,int>(_func_int *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_0012ac68;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "TabContainer";
  local_30 = 0xc;
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



/* MethodBind* create_method_bind<TabContainer, int>(void (TabContainer::*)(int)) */

MethodBind * create_method_bind<TabContainer,int>(_func_void_int *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_0012acc8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "TabContainer";
  local_30 = 0xc;
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



/* MethodBind* create_method_bind<TabContainer, bool>(bool (TabContainer::*)()) */

MethodBind * create_method_bind<TabContainer,bool>(_func_bool *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_0012ad28;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "TabContainer";
  local_30 = 0xc;
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



/* MethodBind* create_method_bind<TabContainer, Control*>(Control* (TabContainer::*)() const) */

MethodBind * create_method_bind<TabContainer,Control*>(_func_Control_ptr *param_1)

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
  *(_func_Control_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012ad88;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "TabContainer";
  local_30 = 0xc;
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



/* MethodBind* create_method_bind<TabContainer, TabBar*>(TabBar* (TabContainer::*)() const) */

MethodBind * create_method_bind<TabContainer,TabBar*>(_func_TabBar_ptr *param_1)

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
  *(_func_TabBar_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012ade8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "TabContainer";
  local_30 = 0xc;
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



/* MethodBind* create_method_bind<TabContainer, Control*, int>(Control* (TabContainer::*)(int)
   const) */

MethodBind * create_method_bind<TabContainer,Control*,int>(_func_Control_ptr_int *param_1)

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
  *(_func_Control_ptr_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012ae48;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "TabContainer";
  local_30 = 0xc;
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



/* MethodBind* create_method_bind<TabContainer, TabBar::AlignmentMode>(void
   (TabContainer::*)(TabBar::AlignmentMode)) */

MethodBind *
create_method_bind<TabContainer,TabBar::AlignmentMode>(_func_void_AlignmentMode *param_1)

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
  *(_func_void_AlignmentMode **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012aea8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "TabContainer";
  local_30 = 0xc;
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



/* MethodBind* create_method_bind<TabContainer, TabBar::AlignmentMode>(TabBar::AlignmentMode
   (TabContainer::*)() const) */

MethodBind * create_method_bind<TabContainer,TabBar::AlignmentMode>(_func_AlignmentMode *param_1)

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
  *(_func_AlignmentMode **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012af08;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "TabContainer";
  local_30 = 0xc;
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



/* MethodBind* create_method_bind<TabContainer, TabContainer::TabPosition>(void
   (TabContainer::*)(TabContainer::TabPosition)) */

MethodBind *
create_method_bind<TabContainer,TabContainer::TabPosition>(_func_void_TabPosition *param_1)

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
  *(_func_void_TabPosition **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012af68;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "TabContainer";
  local_30 = 0xc;
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



/* MethodBind* create_method_bind<TabContainer, TabContainer::TabPosition>(TabContainer::TabPosition
   (TabContainer::*)() const) */

MethodBind * create_method_bind<TabContainer,TabContainer::TabPosition>(_func_TabPosition *param_1)

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
  *(_func_TabPosition **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012afc8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "TabContainer";
  local_30 = 0xc;
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



/* MethodBind* create_method_bind<TabContainer, bool>(void (TabContainer::*)(bool)) */

MethodBind * create_method_bind<TabContainer,bool>(_func_void_bool *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_0012b028;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "TabContainer";
  local_30 = 0xc;
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



/* MethodBind* create_method_bind<TabContainer, bool>(bool (TabContainer::*)() const) */

MethodBind * create_method_bind<TabContainer,bool>(_func_bool *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_0012b088;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "TabContainer";
  local_30 = 0xc;
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



/* MethodBind* create_method_bind<TabContainer, int, String const&>(void (TabContainer::*)(int,
   String const&)) */

MethodBind * create_method_bind<TabContainer,int,String_const&>(_func_void_int_String_ptr *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_0012b0e8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "TabContainer";
  local_30 = 0xc;
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



/* MethodBind* create_method_bind<TabContainer, String, int>(String (TabContainer::*)(int) const) */

MethodBind * create_method_bind<TabContainer,String,int>(_func_String_int *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_0012b148;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "TabContainer";
  local_30 = 0xc;
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



/* MethodBind* create_method_bind<TabContainer, int, Ref<Texture2D> const&>(void
   (TabContainer::*)(int, Ref<Texture2D> const&)) */

MethodBind *
create_method_bind<TabContainer,int,Ref<Texture2D>const&>(_func_void_int_Ref_ptr *param_1)

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
  *(_func_void_int_Ref_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012b1a8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "TabContainer";
  local_30 = 0xc;
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



/* MethodBind* create_method_bind<TabContainer, Ref<Texture2D>, int>(Ref<Texture2D>
   (TabContainer::*)(int) const) */

MethodBind * create_method_bind<TabContainer,Ref<Texture2D>,int>(_func_Ref_int *param_1)

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
  *(_func_Ref_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012b208;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "TabContainer";
  local_30 = 0xc;
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



/* MethodBind* create_method_bind<TabContainer, int, int>(void (TabContainer::*)(int, int)) */

MethodBind * create_method_bind<TabContainer,int,int>(_func_void_int_int *param_1)

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
  *(_func_void_int_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012b268;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "TabContainer";
  local_30 = 0xc;
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



/* MethodBind* create_method_bind<TabContainer, int, int>(int (TabContainer::*)(int) const) */

MethodBind * create_method_bind<TabContainer,int,int>(_func_int_int *param_1)

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
  *(_func_int_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012b2c8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "TabContainer";
  local_30 = 0xc;
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



/* MethodBind* create_method_bind<TabContainer, int, bool>(void (TabContainer::*)(int, bool)) */

MethodBind * create_method_bind<TabContainer,int,bool>(_func_void_int_bool *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_0012b328;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "TabContainer";
  local_30 = 0xc;
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



/* MethodBind* create_method_bind<TabContainer, bool, int>(bool (TabContainer::*)(int) const) */

MethodBind * create_method_bind<TabContainer,bool,int>(_func_bool_int *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_0012b388;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "TabContainer";
  local_30 = 0xc;
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



/* MethodBind* create_method_bind<TabContainer, int, Variant const&>(void (TabContainer::*)(int,
   Variant const&)) */

MethodBind *
create_method_bind<TabContainer,int,Variant_const&>(_func_void_int_Variant_ptr *param_1)

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
  *(_func_void_int_Variant_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012b3e8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "TabContainer";
  local_30 = 0xc;
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



/* MethodBind* create_method_bind<TabContainer, Variant, int>(Variant (TabContainer::*)(int) const)
    */

MethodBind * create_method_bind<TabContainer,Variant,int>(_func_Variant_int *param_1)

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
  *(_func_Variant_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012b448;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "TabContainer";
  local_30 = 0xc;
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



/* MethodBind* create_method_bind<TabContainer, int, Vector2 const&>(int (TabContainer::*)(Vector2
   const&) const) */

MethodBind * create_method_bind<TabContainer,int,Vector2_const&>(_func_int_Vector2_ptr *param_1)

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
  *(_func_int_Vector2_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012b4a8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "TabContainer";
  local_30 = 0xc;
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



/* MethodBind* create_method_bind<TabContainer, int, Control*>(int (TabContainer::*)(Control*)
   const) */

MethodBind * create_method_bind<TabContainer,int,Control*>(_func_int_Control_ptr *param_1)

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
  *(_func_int_Control_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012b508;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "TabContainer";
  local_30 = 0xc;
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



/* MethodBind* create_method_bind<TabContainer, Node*>(void (TabContainer::*)(Node*)) */

MethodBind * create_method_bind<TabContainer,Node*>(_func_void_Node_ptr *param_1)

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
  *(_func_void_Node_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012b568;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "TabContainer";
  local_30 = 0xc;
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



/* MethodBind* create_method_bind<TabContainer, Popup*>(Popup* (TabContainer::*)() const) */

MethodBind * create_method_bind<TabContainer,Popup*>(_func_Popup_ptr *param_1)

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
  *(_func_Popup_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012b5c8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "TabContainer";
  local_30 = 0xc;
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



/* MethodBind* create_method_bind<TabContainer, Control::FocusMode>(void
   (TabContainer::*)(Control::FocusMode)) */

MethodBind * create_method_bind<TabContainer,Control::FocusMode>(_func_void_FocusMode *param_1)

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
  *(_func_void_FocusMode **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012b628;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "TabContainer";
  local_30 = 0xc;
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



/* MethodBind* create_method_bind<TabContainer, Control::FocusMode>(Control::FocusMode
   (TabContainer::*)() const) */

MethodBind * create_method_bind<TabContainer,Control::FocusMode>(_func_FocusMode *param_1)

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
  *(_func_FocusMode **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012b688;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "TabContainer";
  local_30 = 0xc;
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



/* TabContainer::_initialize_classv() */

void TabContainer::_initialize_classv(void)

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
    if (Container::initialize_class()::initialized == '\0') {
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
            if ((code *)PTR__bind_methods_00133048 != Node::_bind_methods) {
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
          if ((code *)PTR__bind_compatibility_methods_00133038 !=
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
      if ((code *)PTR__bind_methods_00133040 != Control::_bind_methods) {
        Container::_bind_methods();
      }
      Container::initialize_class()::initialized = '\x01';
    }
    local_58 = "Container";
    local_68 = 0;
    local_50 = 9;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "TabContainer";
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
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
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
LAB_0011b0e0:
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
  if (lVar8 == 0) goto LAB_0011b0e0;
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
        goto LAB_0011aff1;
      }
      uVar6 = _realloc(this,lVar8);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
    }
    puVar7 = *(undefined8 **)this;
    if (puVar7 != (undefined8 *)0x0) {
LAB_0011aff1:
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



/* WARNING: Removing unreachable block (ram,0x0011bac0) */
/* TabContainer::_notificationv(int, bool) */

void __thiscall TabContainer::_notificationv(TabContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    _notification(this,param_1);
    if ((code *)PTR__notification_00133050 != Control::_notification) {
      Container::_notification(iVar1);
    }
    Control::_notification(iVar1);
    CanvasItem::_notification(iVar1);
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  CanvasItem::_notification(iVar1);
  Control::_notification(iVar1);
  if ((code *)PTR__notification_00133050 != Control::_notification) {
    Container::_notification(iVar1);
  }
  _notification(this,param_1);
  return;
}



/* WARNING: Removing unreachable block (ram,0x0011bcc8) */
/* WARNING: Removing unreachable block (ram,0x0011be5d) */
/* WARNING: Removing unreachable block (ram,0x0011be69) */
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



/* MethodBindTRC<Control::FocusMode>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindTRC<Control::FocusMode>::call
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
      _err_print_error(&_LC99,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011c060;
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
LAB_0011c060:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Control::FocusMode>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Control::FocusMode>::validated_call
          (MethodBindTRC<Control::FocusMode> *this,Object *param_1,Variant **param_2,
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
      goto LAB_0011c304;
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
LAB_0011c304:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Control::FocusMode>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Control::FocusMode>::ptrcall
          (MethodBindTRC<Control::FocusMode> *this,Object *param_1,void **param_2,void *param_3)

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
      goto LAB_0011c4c3;
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
LAB_0011c4c3:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Control::FocusMode>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Control::FocusMode>::validated_call
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
      goto LAB_0011c801;
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
                    /* WARNING: Could not recover jumptable at 0x0011c68c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_0011c801:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Control::FocusMode>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Control::FocusMode>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_0011c9e1;
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
                    /* WARNING: Could not recover jumptable at 0x0011c86b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_0011c9e1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Popup*>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<Popup*>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Object *pOVar2;
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
      _err_print_error(&_LC99,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011cab0;
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
      pOVar2 = (Object *)(*(code *)pVVar3)();
      Variant::Variant((Variant *)local_48,pOVar2);
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
LAB_0011cab0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int, Vector2 const&>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<int,Vector2_const&>::validated_call
          (MethodBindTRC<int,Vector2_const&> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  int iVar1;
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
      goto LAB_0011cccb;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  iVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60),*param_2 + 8);
  *(long *)(param_3 + 8) = (long)iVar1;
LAB_0011cccb:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int, Vector2 const&>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<int,Vector2_const&>::ptrcall
          (MethodBindTRC<int,Vector2_const&> *this,Object *param_1,void **param_2,void *param_3)

{
  int iVar1;
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
      goto LAB_0011cea8;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  iVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60),*param_2);
  *(long *)param_3 = (long)iVar1;
LAB_0011cea8:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Variant, int>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Variant,int>::validated_call
          (MethodBindTRC<Variant,int> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_58 == (char *)*plVar2) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011d0ac;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar1)((Variant *)local_48,param_1 + *(long *)(this + 0x60),*(undefined4 *)(*param_2 + 8));
  Variant::operator=(param_3,(Variant *)local_48);
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
LAB_0011d0ac:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Variant, int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Variant,int>::ptrcall
          (MethodBindTRC<Variant,int> *this,Object *param_1,void **param_2,void *param_3)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_58 == (char *)*plVar2) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011d2bb;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  (*pcVar1)((Variant *)local_48,param_1 + *(long *)(this + 0x60),**param_2);
  Variant::operator=((Variant *)param_3,(Variant *)local_48);
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
LAB_0011d2bb:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, Variant const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<int,Variant_const&>::validated_call
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
      goto LAB_0011d639;
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
                    /* WARNING: Could not recover jumptable at 0x0011d4c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8),*(undefined8 *)(param_3 + 8));
    return;
  }
LAB_0011d639:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, Variant const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<int,Variant_const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_0011d819;
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
                    /* WARNING: Could not recover jumptable at 0x0011d6a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3,
               *(undefined8 *)((long)param_3 + 8));
    return;
  }
LAB_0011d819:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
      goto LAB_0011d868;
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
LAB_0011d868:
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
      goto LAB_0011da47;
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
LAB_0011da47:
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
      goto LAB_0011ddc1;
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
                    /* WARNING: Could not recover jumptable at 0x0011dc46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8),*(undefined1 *)(*(long *)(param_3 + 8) + 8));
    return;
  }
LAB_0011ddc1:
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
      goto LAB_0011dfb1;
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
                    /* WARNING: Could not recover jumptable at 0x0011de3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3,
               **(char **)((long)param_3 + 8) != '\0');
    return;
  }
LAB_0011dfb1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int, int>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<int,int>::validated_call
          (MethodBindTRC<int,int> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  int iVar1;
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
      goto LAB_0011e00a;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  iVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60),*(undefined4 *)(*param_2 + 8));
  *(long *)(param_3 + 8) = (long)iVar1;
LAB_0011e00a:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int, int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<int,int>::ptrcall
          (MethodBindTRC<int,int> *this,Object *param_1,void **param_2,void *param_3)

{
  int iVar1;
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
      goto LAB_0011e1e8;
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
  iVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60),**param_2);
  *(long *)param_3 = (long)iVar1;
LAB_0011e1e8:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, int>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<int,int>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

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
      goto LAB_0011e559;
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
                    /* WARNING: Could not recover jumptable at 0x0011e3e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8),*(undefined4 *)(*(long *)(param_3 + 8) + 8));
    return;
  }
LAB_0011e559:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, int>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<int,int>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_0011e739;
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
                    /* WARNING: Could not recover jumptable at 0x0011e5c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3,
               **(undefined4 **)((long)param_3 + 8));
    return;
  }
LAB_0011e739:
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
      goto LAB_0011e7db;
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
LAB_0011e7db:
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
      goto LAB_0011e9f9;
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
LAB_0011e9f9:
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
      goto LAB_0011ed3f;
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
                    /* WARNING: Could not recover jumptable at 0x0011ebe9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8),*(long *)(param_3 + 8) + 8);
    return;
  }
LAB_0011ed3f:
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
      goto LAB_0011ef29;
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
                    /* WARNING: Could not recover jumptable at 0x0011edb2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3,
               *(undefined8 *)((long)param_3 + 8));
    return;
  }
LAB_0011ef29:
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
      _err_print_error(&_LC99,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011eff0;
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
LAB_0011eff0:
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
      goto LAB_0011f202;
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
LAB_0011f202:
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
      goto LAB_0011f3b1;
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
LAB_0011f3b1:
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
      goto LAB_0011f6f1;
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
                    /* WARNING: Could not recover jumptable at 0x0011f57d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined1 *)(*(long *)param_3 + 8));
    return;
  }
LAB_0011f6f1:
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
      goto LAB_0011f8d9;
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
                    /* WARNING: Could not recover jumptable at 0x0011f762. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3 != '\0');
    return;
  }
LAB_0011f8d9:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<TabContainer::TabPosition>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTRC<TabContainer::TabPosition>::call
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
      _err_print_error(&_LC99,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011f9a0;
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
LAB_0011f9a0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<TabContainer::TabPosition>::validated_call(Object*, Variant const**, Variant*)
   const */

void __thiscall
MethodBindTRC<TabContainer::TabPosition>::validated_call
          (MethodBindTRC<TabContainer::TabPosition> *this,Object *param_1,Variant **param_2,
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
      goto LAB_0011fbb4;
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
LAB_0011fbb4:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<TabContainer::TabPosition>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<TabContainer::TabPosition>::ptrcall
          (MethodBindTRC<TabContainer::TabPosition> *this,Object *param_1,void **param_2,
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
      goto LAB_0011fd63;
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
LAB_0011fd63:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<TabContainer::TabPosition>::validated_call(Object*, Variant const**, Variant*) const
    */

void MethodBindT<TabContainer::TabPosition>::validated_call
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
      goto LAB_001200a1;
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
                    /* WARNING: Could not recover jumptable at 0x0011ff2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_001200a1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<TabContainer::TabPosition>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<TabContainer::TabPosition>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_00120281;
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
                    /* WARNING: Could not recover jumptable at 0x0012010b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_00120281:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<TabBar::AlignmentMode>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindTRC<TabBar::AlignmentMode>::call
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
      _err_print_error(&_LC99,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00120350;
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
LAB_00120350:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<TabBar::AlignmentMode>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<TabBar::AlignmentMode>::validated_call
          (MethodBindTRC<TabBar::AlignmentMode> *this,Object *param_1,Variant **param_2,
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
      goto LAB_00120564;
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
LAB_00120564:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<TabBar::AlignmentMode>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<TabBar::AlignmentMode>::ptrcall
          (MethodBindTRC<TabBar::AlignmentMode> *this,Object *param_1,void **param_2,void *param_3)

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
      goto LAB_00120713;
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
LAB_00120713:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<TabBar::AlignmentMode>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<TabBar::AlignmentMode>::validated_call
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
      goto LAB_00120a51;
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
                    /* WARNING: Could not recover jumptable at 0x001208dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_00120a51:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<TabBar::AlignmentMode>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<TabBar::AlignmentMode>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_00120c31;
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
                    /* WARNING: Could not recover jumptable at 0x00120abb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_00120c31:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<TabBar*>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<TabBar*>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Object *pOVar2;
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
      _err_print_error(&_LC99,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00120d00;
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
      pOVar2 = (Object *)(*(code *)pVVar3)();
      Variant::Variant((Variant *)local_48,pOVar2);
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
LAB_00120d00:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Control*>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<Control*>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Object *pOVar2;
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
      _err_print_error(&_LC99,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00120f90;
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
      pOVar2 = (Object *)(*(code *)pVVar3)();
      Variant::Variant((Variant *)local_48,pOVar2);
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
LAB_00120f90:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<bool>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTR<bool>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

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
      _err_print_error(&_LC99,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00121220;
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
LAB_00121220:
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
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00121432;
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
LAB_00121432:
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
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001215e1;
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
LAB_001215e1:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
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
      goto LAB_00121921;
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
                    /* WARNING: Could not recover jumptable at 0x001217ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_00121921:
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
      goto LAB_00121b01;
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
                    /* WARNING: Could not recover jumptable at 0x0012198b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_00121b01:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<int>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

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
      _err_print_error(&_LC99,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00121bd0;
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
LAB_00121bd0:
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
  int iVar1;
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
      goto LAB_00121de4;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  iVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(long *)(param_3 + 8) = (long)iVar1;
LAB_00121de4:
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
  int iVar1;
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
      goto LAB_00121f93;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  iVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(long *)param_3 = (long)iVar1;
LAB_00121f93:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Popup*>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Popup*>::validated_call
          (MethodBindTRC<Popup*> *this,Object *param_1,Variant **param_2,Variant *param_3)

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
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_001222bf;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar1)(param_1 + *(long *)(this + 0x60));
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    Variant::ObjData::ref_pointer((Object *)(param_3 + 8));
    return;
  }
LAB_001222bf:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Popup*>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Popup*>::ptrcall
          (MethodBindTRC<Popup*> *this,Object *param_1,void **param_2,void *param_3)

{
  undefined8 uVar1;
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
      goto LAB_00122311;
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
  *(undefined8 *)param_3 = uVar1;
LAB_00122311:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Node*>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Node*>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

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
      goto LAB_00122651;
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
                    /* WARNING: Could not recover jumptable at 0x001224dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined8 *)(*(long *)param_3 + 0x10));
    return;
  }
LAB_00122651:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Node*>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Node*>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_00122839;
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
                    /* WARNING: Could not recover jumptable at 0x001226c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),plVar1);
    return;
  }
LAB_00122839:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int, Control*>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<int,Control*>::validated_call
          (MethodBindTRC<int,Control*> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  int iVar1;
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
      goto LAB_0012288b;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  iVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60),*(undefined8 *)(*param_2 + 0x10));
  *(long *)(param_3 + 8) = (long)iVar1;
LAB_0012288b:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int, Control*>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<int,Control*>::ptrcall
          (MethodBindTRC<int,Control*> *this,Object *param_1,void **param_2,void *param_3)

{
  int iVar1;
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
      goto LAB_00122a70;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  plVar3 = (long *)*param_2;
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  if (plVar3 != (long *)0x0) {
    plVar3 = (long *)*plVar3;
  }
  iVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60),plVar3);
  *(long *)param_3 = (long)iVar1;
LAB_00122a70:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<Texture2D>, int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Ref<Texture2D>,int>::ptrcall
          (MethodBindTRC<Ref<Texture2D>,int> *this,Object *param_1,void **param_2,void *param_3)

{
  char cVar1;
  code *pcVar2;
  Object *pOVar3;
  long *plVar4;
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
      local_48 = (Object *)0x11beb8;
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
      goto LAB_00122cb9;
    }
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  (*pcVar2)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),**param_2);
  if (local_48 == (Object *)0x0) {
                    /* WARNING: Load size is inaccurate */
    pOVar5 = *param_3;
    if (pOVar5 == (Object *)0x0) goto LAB_00122cb9;
    *(undefined8 *)param_3 = 0;
    goto LAB_00122d01;
  }
  pOVar3 = (Object *)__dynamic_cast(local_48,&Object::typeinfo,&RefCounted::typeinfo,0);
                    /* WARNING: Load size is inaccurate */
  pOVar5 = *param_3;
  if (pOVar5 != pOVar3) {
    *(Object **)param_3 = pOVar3;
    if (pOVar3 == (Object *)0x0) {
      if (pOVar5 != (Object *)0x0) goto LAB_00122d01;
    }
    else {
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        *(undefined8 *)param_3 = 0;
      }
      if (pOVar5 != (Object *)0x0) {
LAB_00122d01:
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(pOVar5);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
      if (local_48 == (Object *)0x0) goto LAB_00122cb9;
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
LAB_00122cb9:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, Ref<Texture2D> const&>::validated_call(Object*, Variant const**, Variant*) const
    */

void MethodBindT<int,Ref<Texture2D>const&>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  Object *pOVar2;
  char cVar3;
  Object *pOVar4;
  Variant *pVVar5;
  code *pcVar6;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  Object *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar5 = param_2[0x23];
      if (pVVar5 == (Variant *)0x0) {
        pVVar5 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar5 = param_2[1] + 0x20;
    }
    if (local_68 == (Object *)*(long *)pVVar5) {
      if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = (Object *)0x11beb8;
      local_60 = 0x35;
      local_70 = 0;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_00122fe9;
    }
    if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar6 = *(code **)(param_1 + 0x58);
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar6 & 1) != 0) {
    pcVar6 = *(code **)(pcVar6 + *(long *)((long)param_2 + lVar1) + -1);
  }
  Variant::Variant((Variant *)local_58,*(Object **)(*(long *)(param_3 + 8) + 0x10));
  local_68 = (Object *)0x0;
  pOVar4 = (Object *)Variant::get_validated_object();
  pOVar2 = local_68;
  if (pOVar4 != local_68) {
    if (pOVar4 == (Object *)0x0) {
      if (local_68 != (Object *)0x0) {
        local_68 = (Object *)0x0;
LAB_00122fa0:
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
        local_68 = pOVar4;
        if (pOVar4 != (Object *)0x0) {
          cVar3 = RefCounted::reference();
          if (cVar3 == '\0') {
            local_68 = (Object *)0x0;
          }
        }
        if (pOVar2 != (Object *)0x0) goto LAB_00122fa0;
      }
    }
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  (*pcVar6)((long *)((long)param_2 + lVar1),*(undefined4 *)(*(long *)param_3 + 8),
            (StringName *)&local_68);
  if (local_68 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    pOVar2 = local_68;
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_68);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
LAB_00122fe9:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, Ref<Texture2D> const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<int,Ref<Texture2D>const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      local_48 = (Object *)0x11beb8;
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
      goto LAB_00123298;
    }
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar5 = *(code **)(param_1 + 0x58);
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar5 & 1) != 0) {
    pcVar5 = *(code **)(pcVar5 + *(long *)((long)param_2 + lVar1) + -1);
  }
  if ((*(long **)((long)param_3 + 8) == (long *)0x0) ||
     (local_48 = (Object *)**(long **)((long)param_3 + 8), local_48 == (Object *)0x0)) {
LAB_0012326d:
    local_48 = (Object *)0x0;
  }
  else {
    cVar3 = RefCounted::init_ref();
    if (cVar3 == '\0') goto LAB_0012326d;
  }
                    /* WARNING: Load size is inaccurate */
  (*pcVar5)((long *)((long)param_2 + lVar1),**param_3,(StringName *)&local_48);
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
LAB_00123298:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Control*>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Control*>::validated_call
          (MethodBindTRC<Control*> *this,Object *param_1,Variant **param_2,Variant *param_3)

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
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_001235ef;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar1)(param_1 + *(long *)(this + 0x60));
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    Variant::ObjData::ref_pointer((Object *)(param_3 + 8));
    return;
  }
LAB_001235ef:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Control*, int>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Control*,int>::validated_call
          (MethodBindTRC<Control*,int> *this,Object *param_1,Variant **param_2,Variant *param_3)

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
      goto LAB_001237e1;
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
LAB_001237e1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Control*>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Control*>::ptrcall
          (MethodBindTRC<Control*> *this,Object *param_1,void **param_2,void *param_3)

{
  undefined8 uVar1;
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
      goto LAB_00123831;
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
  *(undefined8 *)param_3 = uVar1;
LAB_00123831:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Control*, int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Control*,int>::ptrcall
          (MethodBindTRC<Control*,int> *this,Object *param_1,void **param_2,void *param_3)

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
      goto LAB_001239e8;
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
LAB_001239e8:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<TabBar*>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<TabBar*>::validated_call
          (MethodBindTRC<TabBar*> *this,Object *param_1,Variant **param_2,Variant *param_3)

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
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00123d3f;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar1)(param_1 + *(long *)(this + 0x60));
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    Variant::ObjData::ref_pointer((Object *)(param_3 + 8));
    return;
  }
LAB_00123d3f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<TabBar*>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<TabBar*>::ptrcall
          (MethodBindTRC<TabBar*> *this,Object *param_1,void **param_2,void *param_3)

{
  undefined8 uVar1;
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
      goto LAB_00123d91;
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
  *(undefined8 *)param_3 = uVar1;
LAB_00123d91:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Node*>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<Node*>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

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
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  plVar11 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar11 != (long *)0x0) && (plVar11[1] != 0)) && (*(char *)(plVar11[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar11[1] == 0) {
      plVar7 = (long *)plVar11[0x23];
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)(**(code **)(*plVar11 + 0x40))(plVar11);
      }
    }
    else {
      plVar7 = (long *)(plVar11[1] + 0x20);
    }
    if (local_58 == (char *)*plVar7) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC99,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_001240b0;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar13 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (1 < in_R8D) {
    uVar5 = 3;
LAB_001240a5:
    *in_R9 = uVar5;
    in_R9[2] = 1;
    goto LAB_001240b0;
  }
  pVVar12 = param_2[5];
  if (pVVar12 == (Variant *)0x0) {
    if (in_R8D != 1) goto LAB_00124100;
LAB_001240f0:
    pVVar12 = *(Variant **)param_4;
  }
  else {
    lVar9 = *(long *)(pVVar12 + -8);
    if ((int)lVar9 < (int)(in_R8D ^ 1)) {
LAB_00124100:
      uVar5 = 4;
      goto LAB_001240a5;
    }
    if (in_R8D == 1) goto LAB_001240f0;
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
LAB_00124056:
    uVar3 = _LC100;
    *in_R9 = 2;
    *(undefined8 *)(in_R9 + 1) = uVar3;
  }
  else {
    pOVar6 = Variant::operator_cast_to_Object_(pVVar12);
    pOVar8 = Variant::operator_cast_to_Object_(pVVar12);
    if (((pOVar8 == (Object *)0x0) ||
        (lVar9 = __dynamic_cast(pOVar8,&Object::typeinfo,&Node::typeinfo,0), lVar9 == 0)) &&
       (pOVar6 != (Object *)0x0)) goto LAB_00124056;
  }
  pOVar6 = Variant::operator_cast_to_Object_(pVVar12);
  if (pOVar6 != (Object *)0x0) {
    pOVar6 = (Object *)__dynamic_cast(pOVar6,&Object::typeinfo,&Node::typeinfo,0);
  }
  (*(code *)pVVar13)((Variant *)((long)plVar11 + (long)pVVar1),pOVar6);
LAB_001240b0:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTRC<int, Control*>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<int,Control*>::call
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
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar13;
  Variant *pVVar14;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  plVar12 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar12 != (long *)0x0) && (plVar12[1] != 0)) && (*(char *)(plVar12[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar12[1] == 0) {
      plVar8 = (long *)plVar12[0x23];
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*plVar12 + 0x40))(plVar12);
      }
    }
    else {
      plVar8 = (long *)(plVar12[1] + 0x20);
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
      _err_print_error(&_LC99,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_001244a0;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar14 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (1 < in_R8D) {
    uVar6 = 3;
LAB_00124495:
    *in_R9 = uVar6;
    in_R9[2] = 1;
    goto LAB_001244a0;
  }
  pVVar13 = param_2[5];
  if (pVVar13 == (Variant *)0x0) {
    if (in_R8D != 1) goto LAB_001244f0;
LAB_001244e0:
    pVVar13 = *(Variant **)param_4;
  }
  else {
    lVar10 = *(long *)(pVVar13 + -8);
    if ((int)lVar10 < (int)(in_R8D ^ 1)) {
LAB_001244f0:
      uVar6 = 4;
      goto LAB_00124495;
    }
    if (in_R8D == 1) goto LAB_001244e0;
    lVar11 = (long)((int)lVar10 + -1);
    if (lVar10 <= lVar11) {
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
  if (((ulong)pVVar14 & 1) != 0) {
    pVVar14 = *(Variant **)(pVVar14 + *(long *)((long)plVar12 + (long)pVVar1) + -1);
  }
  cVar4 = Variant::can_convert_strict(*(undefined4 *)pVVar13,0x18);
  if (cVar4 == '\0') {
LAB_00124416:
    uVar3 = _LC100;
    *in_R9 = 2;
    *(undefined8 *)(in_R9 + 1) = uVar3;
  }
  else {
    pOVar7 = Variant::operator_cast_to_Object_(pVVar13);
    pOVar9 = Variant::operator_cast_to_Object_(pVVar13);
    if (((pOVar9 == (Object *)0x0) ||
        (lVar10 = __dynamic_cast(pOVar9,&Object::typeinfo,&Control::typeinfo,0), lVar10 == 0)) &&
       (pOVar7 != (Object *)0x0)) goto LAB_00124416;
  }
  pOVar7 = Variant::operator_cast_to_Object_(pVVar13);
  if (pOVar7 != (Object *)0x0) {
    pOVar7 = (Object *)__dynamic_cast(pOVar7,&Object::typeinfo,&Control::typeinfo,0);
  }
  iVar5 = (*(code *)pVVar14)((Variant *)((long)plVar12 + (long)pVVar1),pOVar7);
  Variant::Variant((Variant *)local_58,iVar5);
  if (Variant::needs_deinit[*(int *)param_1] != '\0') {
    Variant::_clear_internal();
  }
  *(undefined4 *)param_1 = local_58[0];
  *(undefined8 *)(param_1 + 8) = local_50;
  *(undefined8 *)(param_1 + 0x10) = uStack_48;
LAB_001244a0:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTRC<int, Vector2 const&>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindTRC<int,Vector2_const&>::call
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
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar10 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
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
      _err_print_error(&_LC99,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_00124870;
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
      if (in_R8D != 1) goto LAB_001248b0;
LAB_001248a0:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_001248b0:
        uVar7 = 4;
        goto LAB_00124865;
      }
      if (in_R8D == 1) goto LAB_001248a0;
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
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar11,5);
    uVar4 = _LC102;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    local_50 = Variant::operator_cast_to_Vector2(pVVar11);
    iVar6 = (*(code *)pVVar12)((Variant *)((long)plVar10 + (long)pVVar1),&local_50);
    Variant::Variant((Variant *)local_48,iVar6);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_48[0];
    *(undefined8 *)(param_1 + 8) = local_40;
    *(undefined8 *)(param_1 + 0x10) = uStack_38;
  }
  else {
    uVar7 = 3;
LAB_00124865:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_00124870:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Control*, int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<Control*,int>::call
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
      _err_print_error(&_LC99,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00124bf0;
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
      if (in_R8D != 1) goto LAB_00124c30;
LAB_00124c20:
      pVVar12 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar12 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00124c30:
        uVar7 = 4;
        goto LAB_00124be5;
      }
      if (in_R8D == 1) goto LAB_00124c20;
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
    uVar4 = _LC104;
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
LAB_00124be5:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_00124bf0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
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
      _err_print_error(&_LC99,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_00124f80;
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
      if (in_R8D != 1) goto LAB_00124fd0;
LAB_00124fc0:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00124fd0:
        uVar7 = 4;
        goto LAB_00124f75;
      }
      if (in_R8D == 1) goto LAB_00124fc0;
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
    uVar4 = _LC104;
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
LAB_00124f75:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_00124f80:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTRC<int, int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<int,int>::call
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
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar10 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar10 != (long *)0x0) && (plVar10[1] != 0)) && (*(char *)(plVar10[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar10[1] == 0) {
      plVar8 = (long *)plVar10[0x23];
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*plVar10 + 0x40))(plVar10);
      }
    }
    else {
      plVar8 = (long *)(plVar10[1] + 0x20);
    }
    if (local_58 == (char *)*plVar8) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC99,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00125310;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar12 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar11 = param_2[5];
    if (pVVar11 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_00125350;
LAB_00125340:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00125350:
        uVar7 = 4;
        goto LAB_00125305;
      }
      if (in_R8D == 1) goto LAB_00125340;
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
    uVar4 = _LC104;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    iVar6 = Variant::operator_cast_to_int(pVVar11);
    iVar6 = (*(code *)pVVar12)((Variant *)((long)plVar10 + (long)pVVar1),iVar6);
    Variant::Variant((Variant *)local_48,iVar6);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_48[0];
    *(undefined8 *)(param_1 + 8) = local_40;
    *(undefined8 *)(param_1 + 0x10) = uStack_38;
  }
  else {
    uVar7 = 3;
LAB_00125305:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_00125310:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
      _err_print_error(&_LC99,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00125690;
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
      if (in_R8D != 1) goto LAB_001256d0;
LAB_001256c0:
      pVVar12 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar12 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_001256d0:
        uVar8 = 4;
        goto LAB_00125685;
      }
      if (in_R8D == 1) goto LAB_001256c0;
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
    uVar4 = _LC104;
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
LAB_00125685:
    *in_R9 = uVar8;
    in_R9[2] = 1;
  }
LAB_00125690:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Variant, int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<Variant,int>::call
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
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar10 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar10 != (long *)0x0) && (plVar10[1] != 0)) && (*(char *)(plVar10[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar10[1] == 0) {
      plVar8 = (long *)plVar10[0x23];
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*plVar10 + 0x40))(plVar10);
      }
    }
    else {
      plVar8 = (long *)(plVar10[1] + 0x20);
    }
    if (local_58 == (char *)*plVar8) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC99,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00125a00;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar12 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar11 = param_2[5];
    if (pVVar11 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_00125a40;
LAB_00125a30:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00125a40:
        uVar7 = 4;
        goto LAB_001259f5;
      }
      if (in_R8D == 1) goto LAB_00125a30;
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
    uVar4 = _LC104;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    iVar6 = Variant::operator_cast_to_int(pVVar11);
    (*(code *)pVVar12)(local_48,(Variant *)((long)plVar10 + (long)pVVar1),iVar6);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_48[0];
    *(undefined8 *)(param_1 + 8) = local_40;
    *(undefined8 *)(param_1 + 0x10) = uStack_38;
  }
  else {
    uVar7 = 3;
LAB_001259f5:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_00125a00:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<Texture2D>, int>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindTRC<Ref<Texture2D>,int>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  Object *pOVar5;
  char cVar6;
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
  Object *local_58;
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
    if (local_58 == (Object *)*plVar9) {
      if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = (Object *)0x11beb8;
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC99,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00125dc0;
    }
    if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pVVar13 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar12 = param_2[5];
    if (pVVar12 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_00125e00;
LAB_00125df0:
      pVVar12 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar12 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00125e00:
        uVar8 = 4;
        goto LAB_00125db5;
      }
      if (in_R8D == 1) goto LAB_00125df0;
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
    cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar12,2);
    uVar4 = _LC104;
    if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    iVar7 = Variant::operator_cast_to_int(pVVar12);
    (*(code *)pVVar13)(&local_58,(Variant *)((long)plVar11 + (long)pVVar1),iVar7);
    Variant::Variant((Variant *)local_48,local_58);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_48[0];
    *(undefined8 *)(param_1 + 8) = local_40;
    *(undefined8 *)(param_1 + 0x10) = uStack_38;
    if (local_58 != (Object *)0x0) {
      cVar6 = RefCounted::unreference();
      pOVar5 = local_58;
      if (cVar6 != '\0') {
        cVar6 = predelete_handler(local_58);
        if (cVar6 != '\0') {
          (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
          Memory::free_static(pOVar5,false);
        }
      }
    }
  }
  else {
    uVar8 = 3;
LAB_00125db5:
    *in_R9 = uVar8;
    in_R9[2] = 1;
  }
LAB_00125dc0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<Texture2D>, int>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Ref<Texture2D>,int>::validated_call
          (MethodBindTRC<Ref<Texture2D>,int> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  Object *pOVar1;
  char cVar2;
  code *pcVar3;
  long *plVar4;
  long in_FS_OFFSET;
  long local_58;
  Object *local_50;
  char *local_48;
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
    if (local_48 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
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
      goto LAB_0012608c;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar3)(&local_50,param_1 + *(long *)(this + 0x60),*(undefined4 *)(*param_2 + 8));
  if (local_50 == (Object *)0x0) {
    Variant::ObjData::unref();
  }
  else {
    local_48 = *(char **)(local_50 + 0x60);
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
LAB_0012608c:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, Control::FocusMode>(__UnexistingClass*, void
   (__UnexistingClass::*)(Control::FocusMode), Variant const**, int, Callable::CallError&,
   Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,Control::FocusMode>
               (__UnexistingClass *param_1,_func_void_FocusMode *param_2,Variant **param_3,
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
    goto LAB_0012634d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_001263b0;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_001263b0:
      uVar6 = 4;
LAB_0012634d:
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
      goto LAB_001262cb;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_001262cb:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_FocusMode **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC104;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_long(this);
                    /* WARNING: Could not recover jumptable at 0x00126326. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)((char)(param_1 + (long)param_3));
  return;
}



/* MethodBindT<Control::FocusMode>::call(Object*, Variant const**, int, Callable::CallError&) const
    */

Object * MethodBindT<Control::FocusMode>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  char *pcVar1;
  long *plVar2;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var3;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var3 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var3 != (__UnexistingClass *)0x0) && (*(long *)(p_Var3 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var3 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var3 + 8) == 0) {
      plVar2 = *(long **)(p_Var3 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)p_Var3 + 0x40))(p_Var3);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(p_Var3 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
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
      _err_print_error(&_LC99,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
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
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00126416;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,Control::FocusMode>
            (p_Var3,(_func_void_FocusMode *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8
             ,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00126416:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, int, Variant const&>(__UnexistingClass*, void
   (__UnexistingClass::*)(int, Variant const&), Variant const**, int, Callable::CallError&,
   Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,int,Variant_const&>
               (__UnexistingClass *param_1,_func_void_int_Variant_ptr *param_2,Variant **param_3,
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
  Variant *pVVar12;
  long in_FS_OFFSET;
  long in_stack_00000008;
  int local_58 [6];
  long local_40;
  
  plVar8 = (long *)CONCAT44(in_register_0000000c,param_4);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar10 = (uint)param_5;
  if (uVar10 < 3) {
    lVar1 = *(long *)(in_stack_00000008 + 8);
    iVar6 = 2 - uVar10;
    if (lVar1 == 0) {
      if (iVar6 != 0) goto LAB_00126748;
      this = (Variant *)*plVar8;
LAB_0012679d:
      pVVar12 = (Variant *)plVar8[1];
    }
    else {
      lVar2 = *(long *)(lVar1 + -8);
      iVar11 = (int)lVar2;
      if (iVar11 < iVar6) {
LAB_00126748:
        uVar7 = 4;
        goto LAB_0012674d;
      }
      if (uVar10 == 0) {
        lVar9 = (long)(iVar11 + -2);
        if (lVar2 <= lVar9) goto LAB_001267b8;
        this = (Variant *)(lVar1 + lVar9 * 0x18);
      }
      else {
        this = (Variant *)*plVar8;
        if (uVar10 == 2) goto LAB_0012679d;
      }
      lVar9 = (long)(int)((uVar10 ^ 1) + (iVar11 - iVar6));
      if (lVar2 <= lVar9) {
LAB_001267b8:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar12 = (Variant *)(lVar1 + lVar9 * 0x18);
    }
    *(undefined4 *)param_6 = 0;
    if (((ulong)param_2 & 1) != 0) {
      param_2 = *(_func_void_int_Variant_ptr **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar12,0);
    if (cVar5 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = 1;
    }
    Variant::Variant((Variant *)local_58,pVVar12);
    cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
    uVar4 = _LC104;
    if (cVar5 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = uVar4;
    }
    iVar6 = Variant::operator_cast_to_int(this);
    (*param_2)((int)(param_1 + (long)param_3),(Variant *)iVar6);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  else {
    uVar7 = 3;
LAB_0012674d:
    *(undefined4 *)param_6 = uVar7;
    *(undefined4 *)(param_6 + 8) = 2;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, Variant const&>::call(Object*, Variant const**, int, Callable::CallError&) const
    */

Object * MethodBindT<int,Variant_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  char *pcVar1;
  long *plVar2;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var3;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var3 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var3 != (__UnexistingClass *)0x0) && (*(long *)(p_Var3 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var3 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var3 + 8) == 0) {
      plVar2 = *(long **)(p_Var3 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)p_Var3 + 0x40))(p_Var3);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(p_Var3 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
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
      _err_print_error(&_LC99,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
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
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00126856;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,int,Variant_const&>
            (p_Var3,(_func_void_int_Variant_ptr *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4
             ,in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00126856:
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
    goto LAB_00126b6d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  iVar6 = 2 - uVar10;
  if (lVar1 == 0) {
    if (iVar6 == 0) {
      this = (Variant *)*plVar8;
LAB_00126b9d:
      this_00 = (Variant *)plVar8[1];
      goto LAB_00126ad5;
    }
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    iVar11 = (int)lVar2;
    if (iVar6 <= iVar11) {
      if (uVar10 == 0) {
        lVar9 = (long)(iVar11 + -2);
        if (lVar2 <= lVar9) goto LAB_00126bb8;
        this = (Variant *)(lVar1 + lVar9 * 0x18);
      }
      else {
        this = (Variant *)*plVar8;
        if (uVar10 == 2) goto LAB_00126b9d;
      }
      lVar9 = (long)(int)((uVar10 ^ 1) + (iVar11 - iVar6));
      if (lVar2 <= lVar9) {
LAB_00126bb8:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this_00 = (Variant *)(lVar1 + lVar9 * 0x18);
LAB_00126ad5:
      *(undefined4 *)param_6 = 0;
      if (((ulong)param_2 & 1) != 0) {
        param_2 = *(_func_void_int_bool **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
      }
      cVar5 = Variant::can_convert_strict(*(undefined4 *)this_00,1);
      uVar4 = _LC272;
      if (cVar5 == '\0') {
        *(undefined4 *)param_6 = 2;
        *(undefined8 *)(param_6 + 4) = uVar4;
      }
      Variant::operator_cast_to_bool(this_00);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
      uVar4 = _LC104;
      if (cVar5 == '\0') {
        *(undefined4 *)param_6 = 2;
        *(undefined8 *)(param_6 + 4) = uVar4;
      }
      iVar6 = Variant::operator_cast_to_int(this);
                    /* WARNING: Could not recover jumptable at 0x00126b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*param_2)((int)(param_1 + (long)param_3),SUB41(iVar6,0));
      return;
    }
  }
  uVar7 = 4;
LAB_00126b6d:
  *(undefined4 *)param_6 = uVar7;
  *(undefined4 *)(param_6 + 8) = 2;
  return;
}



/* MethodBindT<int, bool>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<int,bool>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  char *pcVar1;
  long *plVar2;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var3;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var3 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var3 != (__UnexistingClass *)0x0) && (*(long *)(p_Var3 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var3 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var3 + 8) == 0) {
      plVar2 = *(long **)(p_Var3 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)p_Var3 + 0x40))(p_Var3);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(p_Var3 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
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
      _err_print_error(&_LC99,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
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
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00126c56;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,int,bool>
            (p_Var3,(_func_void_int_bool *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,
             in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00126c56:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, int, int>(__UnexistingClass*, void
   (__UnexistingClass::*)(int, int), Variant const**, int, Callable::CallError&, Vector<Variant>
   const&) */

void call_with_variant_args_dv<__UnexistingClass,int,int>
               (__UnexistingClass *param_1,_func_void_int_int *param_2,Variant **param_3,int param_4
               ,CallError *param_5,Vector *param_6)

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
    goto LAB_00126f6d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  iVar6 = 2 - uVar10;
  if (lVar1 == 0) {
    if (iVar6 == 0) {
      this = (Variant *)*plVar8;
LAB_00126f9d:
      this_00 = (Variant *)plVar8[1];
      goto LAB_00126ed5;
    }
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    iVar11 = (int)lVar2;
    if (iVar6 <= iVar11) {
      if (uVar10 == 0) {
        lVar9 = (long)(iVar11 + -2);
        if (lVar2 <= lVar9) goto LAB_00126fb8;
        this = (Variant *)(lVar1 + lVar9 * 0x18);
      }
      else {
        this = (Variant *)*plVar8;
        if (uVar10 == 2) goto LAB_00126f9d;
      }
      lVar9 = (long)(int)((uVar10 ^ 1) + (iVar11 - iVar6));
      if (lVar2 <= lVar9) {
LAB_00126fb8:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this_00 = (Variant *)(lVar1 + lVar9 * 0x18);
LAB_00126ed5:
      *(undefined4 *)param_6 = 0;
      if (((ulong)param_2 & 1) != 0) {
        param_2 = *(_func_void_int_int **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
      }
      cVar5 = Variant::can_convert_strict(*(undefined4 *)this_00,2);
      uVar4 = _LC103;
      if (cVar5 == '\0') {
        *(undefined4 *)param_6 = 2;
        *(undefined8 *)(param_6 + 4) = uVar4;
      }
      Variant::operator_cast_to_int(this_00);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
      uVar4 = _LC104;
      if (cVar5 == '\0') {
        *(undefined4 *)param_6 = 2;
        *(undefined8 *)(param_6 + 4) = uVar4;
      }
      iVar6 = Variant::operator_cast_to_int(this);
                    /* WARNING: Could not recover jumptable at 0x00126f5b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*param_2)((int)(param_1 + (long)param_3),iVar6);
      return;
    }
  }
  uVar7 = 4;
LAB_00126f6d:
  *(undefined4 *)param_6 = uVar7;
  *(undefined4 *)(param_6 + 8) = 2;
  return;
}



/* MethodBindT<int, int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<int,int>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  char *pcVar1;
  long *plVar2;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var3;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var3 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var3 != (__UnexistingClass *)0x0) && (*(long *)(p_Var3 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var3 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var3 + 8) == 0) {
      plVar2 = *(long **)(p_Var3 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)p_Var3 + 0x40))(p_Var3);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(p_Var3 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
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
      _err_print_error(&_LC99,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
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
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00127056;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,int,int>
            (p_Var3,(_func_void_int_int *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,
             in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00127056:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x00127479) */
/* WARNING: Removing unreachable block (ram,0x00127481) */
/* WARNING: Removing unreachable block (ram,0x00127491) */
/* WARNING: Removing unreachable block (ram,0x001274a1) */
/* void call_with_variant_args_dv<__UnexistingClass, int, Ref<Texture2D> const&>(__UnexistingClass*,
   void (__UnexistingClass::*)(int, Ref<Texture2D> const&), Variant const**, int,
   Callable::CallError&, Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,int,Ref<Texture2D>const&>
               (__UnexistingClass *param_1,_func_void_int_Ref_ptr *param_2,Variant **param_3,
               int param_4,CallError *param_5,Vector *param_6)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  long lVar8;
  Object *pOVar9;
  undefined4 in_register_0000000c;
  long *plVar10;
  long lVar11;
  uint uVar12;
  int iVar13;
  Variant *this;
  undefined4 *puVar14;
  long in_FS_OFFSET;
  long in_stack_00000008;
  Object *local_38;
  
  plVar10 = (long *)CONCAT44(in_register_0000000c,param_4);
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar12 = (uint)param_5;
  if (uVar12 < 3) {
    lVar8 = *(long *)(in_stack_00000008 + 8);
    iVar6 = 2 - uVar12;
    if (lVar8 == 0) {
      if (iVar6 != 0) goto LAB_00127410;
      this = (Variant *)*plVar10;
LAB_0012745d:
      puVar14 = (undefined4 *)plVar10[1];
    }
    else {
      lVar2 = *(long *)(lVar8 + -8);
      iVar13 = (int)lVar2;
      if (iVar13 < iVar6) {
LAB_00127410:
        uVar7 = 4;
        goto LAB_00127415;
      }
      if (uVar12 == 0) {
        lVar11 = (long)(iVar13 + -2);
        if (lVar2 <= lVar11) goto LAB_001274c8;
        this = (Variant *)(lVar8 + lVar11 * 0x18);
      }
      else {
        this = (Variant *)*plVar10;
        if (uVar12 == 2) goto LAB_0012745d;
      }
      lVar11 = (long)(int)((uVar12 ^ 1) + (iVar13 - iVar6));
      if (lVar2 <= lVar11) {
LAB_001274c8:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar11,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      puVar14 = (undefined4 *)(lVar8 + lVar11 * 0x18);
    }
    *(undefined4 *)param_6 = 0;
    if (((ulong)param_2 & 1) != 0) {
      param_2 = *(_func_void_int_Ref_ptr **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
    }
    cVar5 = Variant::can_convert_strict(*puVar14);
    uVar4 = _LC101;
    if (cVar5 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = uVar4;
    }
    local_38 = (Object *)0x0;
    lVar8 = Variant::get_validated_object();
    if ((((lVar8 != 0) && (lVar8 != 0)) &&
        (pOVar9 = (Object *)__dynamic_cast(lVar8,&Object::typeinfo,&Texture2D::typeinfo,0),
        pOVar9 != (Object *)0x0)) &&
       ((local_38 = pOVar9, pOVar9 != (Object *)0x0 &&
        (cVar5 = RefCounted::reference(), cVar5 == '\0')))) {
      local_38 = (Object *)0x0;
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
    uVar4 = _LC104;
    if (cVar5 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = uVar4;
    }
    iVar6 = Variant::operator_cast_to_int(this);
    (*param_2)((int)(param_1 + (long)param_3),(Ref *)iVar6);
    if (((local_38 != (Object *)0x0) && (cVar5 = RefCounted::unreference(), cVar5 != '\0')) &&
       (cVar5 = predelete_handler(local_38), cVar5 != '\0')) {
      (**(code **)(*(long *)local_38 + 0x140))(local_38);
      Memory::free_static(local_38,false);
    }
  }
  else {
    uVar7 = 3;
LAB_00127415:
    *(undefined4 *)param_6 = uVar7;
    *(undefined4 *)(param_6 + 8) = 2;
  }
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindT<int, Ref<Texture2D> const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<int,Ref<Texture2D>const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  char *pcVar1;
  long *plVar2;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var3;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var3 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var3 != (__UnexistingClass *)0x0) && (*(long *)(p_Var3 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var3 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var3 + 8) == 0) {
      plVar2 = *(long **)(p_Var3 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)p_Var3 + 0x40))(p_Var3);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(p_Var3 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
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
      _err_print_error(&_LC99,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
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
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00127566;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,int,Ref<Texture2D>const&>
            (p_Var3,(_func_void_int_Ref_ptr *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,
             in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00127566:
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
  Variant aVStack_48 [8];
  long local_40;
  
  plVar8 = (long *)CONCAT44(in_register_0000000c,param_4);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar10 = (uint)param_5;
  if (uVar10 < 3) {
    lVar1 = *(long *)(in_stack_00000008 + 8);
    iVar6 = 2 - uVar10;
    if (lVar1 == 0) {
      if (iVar6 != 0) goto LAB_00127890;
      this = (Variant *)*plVar8;
LAB_001278dd:
      puVar12 = (undefined4 *)plVar8[1];
    }
    else {
      lVar2 = *(long *)(lVar1 + -8);
      iVar11 = (int)lVar2;
      if (iVar11 < iVar6) {
LAB_00127890:
        uVar7 = 4;
        goto LAB_00127895;
      }
      if (uVar10 == 0) {
        lVar9 = (long)(iVar11 + -2);
        if (lVar2 <= lVar9) goto LAB_001278f8;
        this = (Variant *)(lVar1 + lVar9 * 0x18);
      }
      else {
        this = (Variant *)*plVar8;
        if (uVar10 == 2) goto LAB_001278dd;
      }
      lVar9 = (long)(int)((uVar10 ^ 1) + (iVar11 - iVar6));
      if (lVar2 <= lVar9) {
LAB_001278f8:
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
    uVar4 = _LC273;
    if (cVar5 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = uVar4;
    }
    Variant::operator_cast_to_String(aVStack_48);
    cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
    uVar4 = _LC104;
    if (cVar5 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = uVar4;
    }
    iVar6 = Variant::operator_cast_to_int(this);
    (*param_2)((int)(param_1 + (long)param_3),(String *)iVar6);
    CowData<char32_t>::_unref((CowData<char32_t> *)aVStack_48);
  }
  else {
    uVar7 = 3;
LAB_00127895:
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
  long *plVar2;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var3;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var3 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var3 != (__UnexistingClass *)0x0) && (*(long *)(p_Var3 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var3 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var3 + 8) == 0) {
      plVar2 = *(long **)(p_Var3 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)p_Var3 + 0x40))(p_Var3);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(p_Var3 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
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
      _err_print_error(&_LC99,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar2 = (long *)(local_50 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00127996;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,int,String_const&>
            (p_Var3,(_func_void_int_String_ptr *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,
             in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00127996:
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
    goto LAB_00127c7d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_00127ce0;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_00127ce0:
      uVar6 = 4;
LAB_00127c7d:
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
      goto LAB_00127bfb;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_00127bfb:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_bool **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,1);
  uVar4 = _LC274;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_bool(this);
                    /* WARNING: Could not recover jumptable at 0x00127c57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)(SUB81(param_1 + (long)param_3,0));
  return;
}



/* MethodBindT<bool>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<bool>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long lVar1;
  long *plVar2;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var3;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var3 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var3 != (__UnexistingClass *)0x0) && (*(long *)(p_Var3 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var3 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var3 + 8) == 0) {
      plVar2 = *(long **)(p_Var3 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)p_Var3 + 0x40))(p_Var3);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(p_Var3 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
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
      _err_print_error(&_LC99,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar2 = (long *)(local_50 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00127d46;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,bool>
            (p_Var3,(_func_void_bool *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,
             in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00127d46:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, TabContainer::TabPosition>(__UnexistingClass*,
   void (__UnexistingClass::*)(TabContainer::TabPosition), Variant const**, int,
   Callable::CallError&, Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,TabContainer::TabPosition>
               (__UnexistingClass *param_1,_func_void_TabPosition *param_2,Variant **param_3,
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
    goto LAB_0012802d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_00128090;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_00128090:
      uVar6 = 4;
LAB_0012802d:
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
      goto LAB_00127fab;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_00127fab:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_TabPosition **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC104;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_long(this);
                    /* WARNING: Could not recover jumptable at 0x00128006. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)((char)(param_1 + (long)param_3));
  return;
}



/* MethodBindT<TabContainer::TabPosition>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindT<TabContainer::TabPosition>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  char *pcVar1;
  long *plVar2;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var3;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var3 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var3 != (__UnexistingClass *)0x0) && (*(long *)(p_Var3 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var3 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var3 + 8) == 0) {
      plVar2 = *(long **)(p_Var3 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)p_Var3 + 0x40))(p_Var3);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(p_Var3 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
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
      _err_print_error(&_LC99,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
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
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_001280f6;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,TabContainer::TabPosition>
            (p_Var3,(_func_void_TabPosition *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,
             in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_001280f6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, TabBar::AlignmentMode>(__UnexistingClass*, void
   (__UnexistingClass::*)(TabBar::AlignmentMode), Variant const**, int, Callable::CallError&,
   Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,TabBar::AlignmentMode>
               (__UnexistingClass *param_1,_func_void_AlignmentMode *param_2,Variant **param_3,
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
    goto LAB_001283dd;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_00128440;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_00128440:
      uVar6 = 4;
LAB_001283dd:
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
      goto LAB_0012835b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0012835b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_AlignmentMode **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC104;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_long(this);
                    /* WARNING: Could not recover jumptable at 0x001283b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)((char)(param_1 + (long)param_3));
  return;
}



/* MethodBindT<TabBar::AlignmentMode>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindT<TabBar::AlignmentMode>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  char *pcVar1;
  long *plVar2;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var3;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var3 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var3 != (__UnexistingClass *)0x0) && (*(long *)(p_Var3 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var3 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var3 + 8) == 0) {
      plVar2 = *(long **)(p_Var3 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)p_Var3 + 0x40))(p_Var3);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(p_Var3 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
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
      _err_print_error(&_LC99,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
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
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_001284a6;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,TabBar::AlignmentMode>
            (p_Var3,(_func_void_AlignmentMode *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,
             in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_001284a6:
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
    goto LAB_0012878d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_001287f0;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_001287f0:
      uVar6 = 4;
LAB_0012878d:
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
      goto LAB_0012870b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0012870b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_int **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC104;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_int(this);
                    /* WARNING: Could not recover jumptable at 0x00128766. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)((int)(param_1 + (long)param_3));
  return;
}



/* MethodBindT<int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<int>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  char *pcVar1;
  long *plVar2;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var3;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var3 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var3 != (__UnexistingClass *)0x0) && (*(long *)(p_Var3 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var3 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var3 + 8) == 0) {
      plVar2 = *(long **)(p_Var3 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)p_Var3 + 0x40))(p_Var3);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(p_Var3 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
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
      _err_print_error(&_LC99,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
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
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00128856;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,int>
            (p_Var3,(_func_void_int *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,in_R9
            );
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00128856:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info_helper<int>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<int>(int param_1,int *param_2,PropertyInfo *param_3)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  long lVar6;
  int iVar7;
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
  iVar7 = *param_2;
  if (iVar7 != param_1) goto LAB_00128a77;
  local_78 = 0;
  local_68 = &_LC41;
  local_80 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._8_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,2);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00128b70:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00128b70;
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
    uVar5 = local_60._0_8_;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = local_60._8_8_;
    local_60 = auVar3 << 0x40;
    *(undefined8 *)(param_3 + 8) = uVar5;
  }
  if (*(long *)(param_3 + 0x10) != local_60._8_8_) {
    StringName::unref();
    uVar5 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(param_3 + 0x10) = uVar5;
  }
  lVar6 = local_48;
  *(int *)(param_3 + 0x18) = local_50;
  if (*(long *)(param_3 + 0x20) == local_48) {
    *(undefined4 *)(param_3 + 0x28) = local_40;
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
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 0x20));
    *(long *)(param_3 + 0x20) = local_48;
    *(undefined4 *)(param_3 + 0x28) = local_40;
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
  iVar7 = *param_2;
LAB_00128a77:
  *param_2 = iVar7 + 1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindTRC<Control*, int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Control*,int>::_gen_argument_type_info(int param_1)

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
    local_50._0_8_ = 7;
    local_58 = "Control";
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



/* MethodBindTRC<String, int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<String,int>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined8 uVar4;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar5;
  long in_FS_OFFSET;
  undefined8 local_80;
  long local_78;
  ulong local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar5 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<int>(0,(int *)&local_70,(PropertyInfo *)&local_68);
    uVar3 = local_60._0_8_;
    uVar4 = local_60._8_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_60._8_8_;
    local_60 = auVar1 << 0x40;
    *puVar5 = local_68._0_4_;
    *(undefined8 *)(puVar5 + 2) = uVar3;
    *(undefined8 *)(puVar5 + 4) = uVar4;
    puVar5[6] = (undefined4)local_50;
    *(undefined8 *)(puVar5 + 8) = local_48;
    puVar5[10] = local_40;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
    goto LAB_00128f08;
  }
  local_70 = 0;
  local_78 = 0;
  local_68 = &_LC41;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._0_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_78);
  local_80 = 0;
  *puVar5 = 4;
  puVar5[6] = 0;
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar5[10] = 6;
LAB_00128fef:
    StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_70);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_78);
    puVar5[10] = 6;
    if (puVar5[6] != 0x11) goto LAB_00128fef;
    StringName::StringName((StringName *)&local_68,(String *)(puVar5 + 8),false);
    if (*(undefined **)(puVar5 + 4) == local_68) {
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(undefined **)(puVar5 + 4) = local_68;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_00128f08:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int, int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<int,int>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined8 uVar4;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar5;
  long in_FS_OFFSET;
  undefined8 local_80;
  long local_78;
  ulong local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar5 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<int>(0,(int *)&local_70,(PropertyInfo *)&local_68);
    uVar3 = local_60._0_8_;
    uVar4 = local_60._8_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_60._8_8_;
    local_60 = auVar1 << 0x40;
    *puVar5 = local_68._0_4_;
    *(undefined8 *)(puVar5 + 2) = uVar3;
    *(undefined8 *)(puVar5 + 4) = uVar4;
    puVar5[6] = (undefined4)local_50;
    *(undefined8 *)(puVar5 + 8) = local_48;
    puVar5[10] = local_40;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
    goto LAB_00129108;
  }
  local_70 = 0;
  local_78 = 0;
  local_68 = &_LC41;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._0_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_78);
  local_80 = 0;
  *puVar5 = 2;
  puVar5[6] = 0;
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar5[10] = 6;
LAB_001291ef:
    StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_70);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_78);
    puVar5[10] = 6;
    if (puVar5[6] != 0x11) goto LAB_001291ef;
    StringName::StringName((StringName *)&local_68,(String *)(puVar5 + 8),false);
    if (*(undefined **)(puVar5 + 4) == local_68) {
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(undefined **)(puVar5 + 4) = local_68;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_00129108:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool, int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<bool,int>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined8 uVar4;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar5;
  long in_FS_OFFSET;
  undefined8 local_80;
  long local_78;
  ulong local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar5 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<int>(0,(int *)&local_70,(PropertyInfo *)&local_68);
    uVar3 = local_60._0_8_;
    uVar4 = local_60._8_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_60._8_8_;
    local_60 = auVar1 << 0x40;
    *puVar5 = local_68._0_4_;
    *(undefined8 *)(puVar5 + 2) = uVar3;
    *(undefined8 *)(puVar5 + 4) = uVar4;
    puVar5[6] = (undefined4)local_50;
    *(undefined8 *)(puVar5 + 8) = local_48;
    puVar5[10] = local_40;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
    goto LAB_00129308;
  }
  local_70 = 0;
  local_78 = 0;
  local_68 = &_LC41;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._0_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_78);
  local_80 = 0;
  *puVar5 = 1;
  puVar5[6] = 0;
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar5[10] = 6;
LAB_001293ef:
    StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_70);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_78);
    puVar5[10] = 6;
    if (puVar5[6] != 0x11) goto LAB_001293ef;
    StringName::StringName((StringName *)&local_68,(String *)(puVar5 + 8),false);
    if (*(undefined **)(puVar5 + 4) == local_68) {
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(undefined **)(puVar5 + 4) = local_68;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_00129308:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Variant, int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Variant,int>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  undefined8 local_68;
  ulong local_60;
  long local_58;
  undefined1 local_50 [16];
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  long local_20;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  if (in_EDX == 0) {
    local_40 = 0;
    local_38 = 0;
    local_30 = 6;
    local_60 = local_60 & 0xffffffff00000000;
    local_50 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<int>(0,(int *)&local_60,(PropertyInfo *)&local_58);
    uVar2 = local_50._0_8_;
    uVar3 = local_50._8_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_50._8_8_;
    local_50 = auVar1 << 0x40;
    *puVar4 = (undefined4)local_58;
    *(undefined8 *)(puVar4 + 2) = uVar2;
    *(undefined8 *)(puVar4 + 4) = uVar3;
    puVar4[6] = (undefined4)local_40;
    *(undefined8 *)(puVar4 + 8) = local_38;
    puVar4[10] = local_30;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
  }
  else {
    *puVar4 = 0;
    puVar4[6] = 0;
    *(undefined8 *)(puVar4 + 8) = 0;
    puVar4[10] = 0x20006;
    *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
    local_60 = 0;
    local_68 = 0;
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if ((StringName::configured != '\0') && (local_58 != 0)) {
      StringName::unref();
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<Texture2D>, int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Ref<Texture2D>,int>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  undefined8 local_80;
  long local_78;
  ulong local_70;
  char *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_68 = (char *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<int>(0,(int *)&local_70,(PropertyInfo *)&local_68);
    uVar2 = local_60._0_8_;
    uVar3 = local_60._8_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_60._8_8_;
    local_60 = auVar1 << 0x40;
    *puVar4 = local_68._0_4_;
    *(undefined8 *)(puVar4 + 2) = uVar2;
    *(undefined8 *)(puVar4 + 4) = uVar3;
    puVar4[6] = (undefined4)local_50;
    *(undefined8 *)(puVar4 + 8) = local_48;
    puVar4[10] = local_40;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
    goto LAB_00129658;
  }
  local_70 = 0;
  local_78 = 0;
  local_68 = "Texture2D";
  local_60._8_8_ = local_60._0_8_;
  local_60._0_8_ = 9;
  String::parse_latin1((StrRange *)&local_78);
  local_80 = 0;
  *puVar4 = 0x18;
  puVar4[6] = 0x11;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar4[10] = 6;
LAB_00129757:
    StringName::StringName((StringName *)&local_68,(String *)(puVar4 + 8),false);
    if (*(char **)(puVar4 + 4) == local_68) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(char **)(puVar4 + 4) = local_68;
    }
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_78);
    puVar4[10] = 6;
    if (puVar4[6] == 0x11) goto LAB_00129757;
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_70);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_00129658:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TabContainer::_get_tab_height() const */

void TabContainer::_GLOBAL__sub_I__get_tab_height(void)

{
  if (TabBar::base_property_helper != '\0') {
    return;
  }
  TabBar::base_property_helper = 1;
  TabBar::base_property_helper._56_8_ = 2;
  TabBar::base_property_helper._64_8_ = 0;
  TabBar::base_property_helper._0_16_ = (undefined1  [16])0x0;
  TabBar::base_property_helper._24_16_ = (undefined1  [16])0x0;
  TabBar::base_property_helper._40_16_ = (undefined1  [16])0x0;
  __cxa_atexit(PropertyListHelper::~PropertyListHelper,TabBar::base_property_helper,&__dso_handle);
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
/* PropertyListHelper::~PropertyListHelper() */

void __thiscall PropertyListHelper::~PropertyListHelper(PropertyListHelper *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* TabContainer::~TabContainer() */

void __thiscall TabContainer::~TabContainer(TabContainer *this)

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
/* MethodBindTRC<Control::FocusMode>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Control::FocusMode>::~MethodBindTRC(MethodBindTRC<Control::FocusMode> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Control::FocusMode>::~MethodBindT() */

void __thiscall MethodBindT<Control::FocusMode>::~MethodBindT(MethodBindT<Control::FocusMode> *this)

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
/* MethodBindTRC<Popup*>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Popup*>::~MethodBindTRC(MethodBindTRC<Popup*> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Node*>::~MethodBindT() */

void __thiscall MethodBindT<Node*>::~MethodBindT(MethodBindT<Node*> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<int, Control*>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int,Control*>::~MethodBindTRC(MethodBindTRC<int,Control*> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<int, Vector2 const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<int,Vector2_const&>::~MethodBindTRC(MethodBindTRC<int,Vector2_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Ref<Texture2D>, int>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Ref<Texture2D>,int>::~MethodBindTRC(MethodBindTRC<Ref<Texture2D>,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<int, Ref<Texture2D> const&>::~MethodBindT() */

void __thiscall
MethodBindT<int,Ref<Texture2D>const&>::~MethodBindT(MethodBindT<int,Ref<Texture2D>const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Variant, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Variant,int>::~MethodBindTRC(MethodBindTRC<Variant,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<int, Variant const&>::~MethodBindT() */

void __thiscall MethodBindT<int,Variant_const&>::~MethodBindT(MethodBindT<int,Variant_const&> *this)

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
/* MethodBindTRC<int, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int,int>::~MethodBindTRC(MethodBindTRC<int,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<int, int>::~MethodBindT() */

void __thiscall MethodBindT<int,int>::~MethodBindT(MethodBindT<int,int> *this)

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
/* MethodBindTRC<TabContainer::TabPosition>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<TabContainer::TabPosition>::~MethodBindTRC
          (MethodBindTRC<TabContainer::TabPosition> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<TabContainer::TabPosition>::~MethodBindT() */

void __thiscall
MethodBindT<TabContainer::TabPosition>::~MethodBindT(MethodBindT<TabContainer::TabPosition> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<TabBar::AlignmentMode>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<TabBar::AlignmentMode>::~MethodBindTRC(MethodBindTRC<TabBar::AlignmentMode> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<TabBar::AlignmentMode>::~MethodBindT() */

void __thiscall
MethodBindT<TabBar::AlignmentMode>::~MethodBindT(MethodBindT<TabBar::AlignmentMode> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Control*, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Control*,int>::~MethodBindTRC(MethodBindTRC<Control*,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<TabBar*>::~MethodBindTRC() */

void __thiscall MethodBindTRC<TabBar*>::~MethodBindTRC(MethodBindTRC<TabBar*> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Control*>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Control*>::~MethodBindTRC(MethodBindTRC<Control*> *this)

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
/* CallableCustomMethodPointer<TabContainer, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TabContainer,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TabContainer,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<TabContainer, void, int, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TabContainer,void,int,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TabContainer,void,int,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<TabContainer, void, TabBar*, int,
   int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TabContainer,void,TabBar*,int,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TabContainer,void,TabBar*,int,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<TabContainer, void, Control*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TabContainer,void,Control*>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TabContainer,void,Control*> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<TabContainer, Variant, Vector2 const&,
   Control*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TabContainer,Variant,Vector2_const&,Control*>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TabContainer,Variant,Vector2_const&,Control*> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointerC<TabContainer, bool, Vector2 const&, Variant const&,
   Control*>::~CallableCustomMethodPointerC() */

void __thiscall
CallableCustomMethodPointerC<TabContainer,bool,Vector2_const&,Variant_const&,Control*>::
~CallableCustomMethodPointerC
          (CallableCustomMethodPointerC<TabContainer,bool,Vector2_const&,Variant_const&,Control*>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<TabContainer, void, Vector2 const&, Variant const&,
   Control*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TabContainer,void,Vector2_const&,Variant_const&,Control*>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TabContainer,void,Vector2_const&,Variant_const&,Control*>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<TabContainer, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TabContainer,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TabContainer,void,int> *this)

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



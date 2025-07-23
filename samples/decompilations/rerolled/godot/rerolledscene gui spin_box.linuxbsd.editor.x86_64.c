/* SpinBox::get_minimum_size() const */ulong SpinBox::get_minimum_size(SpinBox *this) {
   ulong uVar1;
   uVar1 = ( **(code**)( **(long**)( this + 0x9f0 ) + 0x300 ) )();
   return uVar1 & 0xffffffff00000000 | ( ulong )(uint)((float)*(int*)( this + 0x9fc ) + (float)uVar1);
}
/* SpinBox::get_line_edit() */undefined8 SpinBox::get_line_edit(SpinBox *this) {
   return *(undefined8*)( this + 0x9f0 );
}
/* SpinBox::get_update_on_text_changed() const */SpinBox SpinBox::get_update_on_text_changed(SpinBox *this) {
   return this[0x9f8];
}
/* SpinBox::set_custom_arrow_step(double) */void SpinBox::set_custom_arrow_step(SpinBox *this, double param_1) {
   *(double*)( this + 0xa48 ) = param_1;
   return;
}
/* SpinBox::get_custom_arrow_step() const */undefined8 SpinBox::get_custom_arrow_step(SpinBox *this) {
   return *(undefined8*)( this + 0xa48 );
}
/* SpinBox::is_select_all_on_focus() const */void SpinBox::is_select_all_on_focus(void) {
   LineEdit::is_select_all_on_focus();
   return;
}
/* SpinBox::set_horizontal_alignment(HorizontalAlignment) */void SpinBox::set_horizontal_alignment(long param_1) {
   LineEdit::set_horizontal_alignment(*(undefined8*)( param_1 + 0x9f0 ));
   return;
}
/* SpinBox::get_horizontal_alignment() const */void SpinBox::get_horizontal_alignment(void) {
   LineEdit::get_horizontal_alignment();
   return;
}
/* SpinBox::set_select_all_on_focus(bool) */void SpinBox::set_select_all_on_focus(bool param_1) {
   undefined7 in_register_00000039;
   LineEdit::set_select_all_on_focus(SUB81(*(undefined8*)( CONCAT71(in_register_00000039, param_1) + 0x9f0 ), 0));
   return;
}
/* SpinBox::set_editable(bool) */void SpinBox::set_editable(bool param_1) {
   undefined7 in_register_00000039;
   LineEdit::set_editable(SUB81(*(undefined8*)( CONCAT71(in_register_00000039, param_1) + 0x9f0 ), 0));
   CanvasItem::queue_redraw();
   return;
}
/* SpinBox::is_editable() const */void SpinBox::is_editable(void) {
   LineEdit::is_editable();
   return;
}
/* SpinBox::_line_edit_input(Ref<InputEvent> const&) */void SpinBox::_line_edit_input(Ref *param_1) {
   if (param_1[0xa61] == (Ref)0x0) {
      return;
   }

   Control::accept_event();
   return;
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   SpinBox::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#31}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#31}>::_M_manager(undefined8 *param_1, undefined8 param_2, int param_3) {
   if (param_3 == 0) {
      *param_1;
      return 0;
   }

   if (param_3 != 1) {
      return 0;
   }

   *param_1 = param_2;
   return 0;
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   SpinBox::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#30}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#30}>::_M_manager(undefined8 *param_1, undefined8 param_2, int param_3) {
   if (param_3 == 0) {
      *param_1;
      return 0;
   }

   if (param_3 != 1) {
      return 0;
   }

   *param_1 = param_2;
   return 0;
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   SpinBox::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#29}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#29}>::_M_manager(undefined8 *param_1, undefined8 param_2, int param_3) {
   if (param_3 == 0) {
      *param_1;
      return 0;
   }

   if (param_3 != 1) {
      return 0;
   }

   *param_1 = param_2;
   return 0;
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   SpinBox::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#28}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#28}>::_M_manager(undefined8 *param_1, undefined8 param_2, int param_3) {
   if (param_3 == 0) {
      *param_1;
      return 0;
   }

   if (param_3 != 1) {
      return 0;
   }

   *param_1 = param_2;
   return 0;
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   SpinBox::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#27}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#27}>::_M_manager(undefined8 *param_1, undefined8 param_2, int param_3) {
   if (param_3 == 0) {
      *param_1;
      return 0;
   }

   if (param_3 != 1) {
      return 0;
   }

   *param_1 = param_2;
   return 0;
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   SpinBox::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#26}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#26}>::_M_manager(undefined8 *param_1, undefined8 param_2, int param_3) {
   if (param_3 == 0) {
      *param_1;
      return 0;
   }

   if (param_3 != 1) {
      return 0;
   }

   *param_1 = param_2;
   return 0;
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   SpinBox::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#25}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#25}>::_M_manager(undefined8 *param_1, undefined8 param_2, int param_3) {
   if (param_3 == 0) {
      *param_1;
      return 0;
   }

   if (param_3 != 1) {
      return 0;
   }

   *param_1 = param_2;
   return 0;
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   SpinBox::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#24}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#24}>::_M_manager(undefined8 *param_1, undefined8 param_2, int param_3) {
   if (param_3 == 0) {
      *param_1;
      return 0;
   }

   if (param_3 != 1) {
      return 0;
   }

   *param_1 = param_2;
   return 0;
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   SpinBox::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#23}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#23}>::_M_manager(undefined8 *param_1, undefined8 param_2, int param_3) {
   if (param_3 == 0) {
      *param_1;
      return 0;
   }

   if (param_3 != 1) {
      return 0;
   }

   *param_1 = param_2;
   return 0;
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   SpinBox::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#22}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#22}>::_M_manager(undefined8 *param_1, undefined8 param_2, int param_3) {
   if (param_3 == 0) {
      *param_1;
      return 0;
   }

   if (param_3 != 1) {
      return 0;
   }

   *param_1 = param_2;
   return 0;
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   SpinBox::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#21}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#21}>::_M_manager(undefined8 *param_1, undefined8 param_2, int param_3) {
   if (param_3 == 0) {
      *param_1;
      return 0;
   }

   if (param_3 != 1) {
      return 0;
   }

   *param_1 = param_2;
   return 0;
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   SpinBox::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#20}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#20}>::_M_manager(undefined8 *param_1, undefined8 param_2, int param_3) {
   if (param_3 == 0) {
      *param_1;
      return 0;
   }

   if (param_3 != 1) {
      return 0;
   }

   *param_1 = param_2;
   return 0;
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   SpinBox::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#19}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#19}>::_M_manager(undefined8 *param_1, undefined8 param_2, int param_3) {
   if (param_3 == 0) {
      *param_1;
      return 0;
   }

   if (param_3 != 1) {
      return 0;
   }

   *param_1 = param_2;
   return 0;
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   SpinBox::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#18}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#18}>::_M_manager(undefined8 *param_1, undefined8 param_2, int param_3) {
   if (param_3 == 0) {
      *param_1;
      return 0;
   }

   if (param_3 != 1) {
      return 0;
   }

   *param_1 = param_2;
   return 0;
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   SpinBox::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#17}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#17}>::_M_manager(undefined8 *param_1, undefined8 param_2, int param_3) {
   if (param_3 == 0) {
      *param_1;
      return 0;
   }

   if (param_3 != 1) {
      return 0;
   }

   *param_1 = param_2;
   return 0;
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   SpinBox::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#16}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#16}>::_M_manager(undefined8 *param_1, undefined8 param_2, int param_3) {
   if (param_3 == 0) {
      *param_1;
      return 0;
   }

   if (param_3 != 1) {
      return 0;
   }

   *param_1 = param_2;
   return 0;
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   SpinBox::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#15}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#15}>::_M_manager(undefined8 *param_1, undefined8 param_2, int param_3) {
   if (param_3 == 0) {
      *param_1;
      return 0;
   }

   if (param_3 != 1) {
      return 0;
   }

   *param_1 = param_2;
   return 0;
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   SpinBox::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#14}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#14}>::_M_manager(undefined8 *param_1, undefined8 param_2, int param_3) {
   if (param_3 == 0) {
      *param_1;
      return 0;
   }

   if (param_3 != 1) {
      return 0;
   }

   *param_1 = param_2;
   return 0;
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   SpinBox::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#13}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#13}>::_M_manager(undefined8 *param_1, undefined8 param_2, int param_3) {
   if (param_3 == 0) {
      *param_1;
      return 0;
   }

   if (param_3 != 1) {
      return 0;
   }

   *param_1 = param_2;
   return 0;
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   SpinBox::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#12}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#12}>::_M_manager(undefined8 *param_1, undefined8 param_2, int param_3) {
   if (param_3 == 0) {
      *param_1;
      return 0;
   }

   if (param_3 != 1) {
      return 0;
   }

   *param_1 = param_2;
   return 0;
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   SpinBox::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#11}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#11}>::_M_manager(undefined8 *param_1, undefined8 param_2, int param_3) {
   if (param_3 == 0) {
      *param_1;
      return 0;
   }

   if (param_3 != 1) {
      return 0;
   }

   *param_1 = param_2;
   return 0;
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   SpinBox::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#10}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#10}>::_M_manager(undefined8 *param_1, undefined8 param_2, int param_3) {
   if (param_3 == 0) {
      *param_1;
      return 0;
   }

   if (param_3 != 1) {
      return 0;
   }

   *param_1 = param_2;
   return 0;
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   SpinBox::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#9}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#9}>::_M_manager(undefined8 *param_1, undefined8 param_2, int param_3) {
   if (param_3 == 0) {
      *param_1;
      return 0;
   }

   if (param_3 != 1) {
      return 0;
   }

   *param_1 = param_2;
   return 0;
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   SpinBox::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#8}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#8}>::_M_manager(undefined8 *param_1, undefined8 param_2, int param_3) {
   if (param_3 == 0) {
      *param_1;
      return 0;
   }

   if (param_3 != 1) {
      return 0;
   }

   *param_1 = param_2;
   return 0;
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   SpinBox::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#7}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#7}>::_M_manager(undefined8 *param_1, undefined8 param_2, int param_3) {
   if (param_3 == 0) {
      *param_1;
      return 0;
   }

   if (param_3 != 1) {
      return 0;
   }

   *param_1 = param_2;
   return 0;
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   SpinBox::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#6}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#6}>::_M_manager(undefined8 *param_1, undefined8 param_2, int param_3) {
   if (param_3 == 0) {
      *param_1;
      return 0;
   }

   if (param_3 != 1) {
      return 0;
   }

   *param_1 = param_2;
   return 0;
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   SpinBox::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#5}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#5}>::_M_manager(undefined8 *param_1, undefined8 param_2, int param_3) {
   if (param_3 == 0) {
      *param_1;
      return 0;
   }

   if (param_3 != 1) {
      return 0;
   }

   *param_1 = param_2;
   return 0;
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   SpinBox::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#4}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#4}>::_M_manager(undefined8 *param_1, undefined8 param_2, int param_3) {
   if (param_3 == 0) {
      *param_1;
      return 0;
   }

   if (param_3 != 1) {
      return 0;
   }

   *param_1 = param_2;
   return 0;
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   SpinBox::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#3}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#3}>::_M_manager(undefined8 *param_1, undefined8 param_2, int param_3) {
   if (param_3 == 0) {
      *param_1;
      return 0;
   }

   if (param_3 != 1) {
      return 0;
   }

   *param_1 = param_2;
   return 0;
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   SpinBox::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#2}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#2}>::_M_manager(undefined8 *param_1, undefined8 param_2, int param_3) {
   if (param_3 == 0) {
      *param_1;
      return 0;
   }

   if (param_3 != 1) {
      return 0;
   }

   *param_1 = param_2;
   return 0;
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   SpinBox::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#1}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#1}>::_M_manager(undefined8 *param_1, undefined8 param_2, int param_3) {
   if (param_3 == 0) {
      *param_1;
      return 0;
   }

   if (param_3 != 1) {
      return 0;
   }

   *param_1 = param_2;
   return 0;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   SpinBox::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#2}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#2}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
   code *pcVar1;
   int iVar2;
   long lVar3;
   long in_FS_OFFSET;
   int local_48[6];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*param_2 == (Node*)0x0) {
      Control::get_theme_item(local_48, 0, 1, param_3, param_4);
      Variant::operator_cast_to_int((Variant*)local_48);
      _DAT_00000b9c = 0;
      /* WARNING: Does not return */
      pcVar1 = (code*)invalidInstructionException();
      ( *pcVar1 )();
   }

   lVar3 = __dynamic_cast(*param_2, &Object::typeinfo, &SpinBox::typeinfo, 0);
   Control::get_theme_item(local_48, lVar3, 1, param_3, param_4);
   iVar2 = Variant::operator_cast_to_int((Variant*)local_48);
   *(int*)( lVar3 + 0xb9c ) = iVar2;
   if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Ref<Texture2D>::TEMPNAMEPLACEHOLDERVALUE(Ref<Texture2D> const&) [clone .isra.0] */void Ref<Texture2D>::operator =(Ref<Texture2D> *this, Ref *param_1) {
   Object *pOVar1;
   char cVar2;
   pOVar1 = *(Object**)this;
   if (pOVar1 != (Object*)param_1) {
      *(Ref**)this = param_1;
      if (param_1 != (Ref*)0x0) {
         cVar2 = RefCounted::reference();
         if (cVar2 == '\0') {
            *(undefined8*)this = 0;
         }

      }

      if (pOVar1 != (Object*)0x0) {
         cVar2 = RefCounted::unreference();
         if (cVar2 != '\0') {
            cVar2 = predelete_handler(pOVar1);
            if (cVar2 != '\0') {
               ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
               Memory::free_static(pOVar1, false);
               return;
            }

         }

      }

   }

   return;
}
/* Ref<StyleBox>::TEMPNAMEPLACEHOLDERVALUE(Ref<StyleBox> const&) [clone .isra.0] */void Ref<StyleBox>::operator =(Ref<StyleBox> *this, Ref *param_1) {
   Object *pOVar1;
   char cVar2;
   pOVar1 = *(Object**)this;
   if (pOVar1 != (Object*)param_1) {
      *(Ref**)this = param_1;
      if (param_1 != (Ref*)0x0) {
         cVar2 = RefCounted::reference();
         if (cVar2 == '\0') {
            *(undefined8*)this = 0;
         }

      }

      if (pOVar1 != (Object*)0x0) {
         cVar2 = RefCounted::unreference();
         if (cVar2 != '\0') {
            cVar2 = predelete_handler(pOVar1);
            if (cVar2 != '\0') {
               ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
               Memory::free_static(pOVar1, false);
               return;
            }

         }

      }

   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   SpinBox::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#24}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#24}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
   code *pcVar1;
   long lVar2;
   long in_FS_OFFSET;
   undefined8 uVar3;
   undefined8 in_XMM1_Qa;
   int local_48[6];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*param_2 == (Node*)0x0) {
      Control::get_theme_item(local_48, 0, 0, param_3, param_4);
      _DAT_00000b28 = Variant::operator_cast_to_Color((Variant*)local_48);
      /* WARNING: Does not return */
      pcVar1 = (code*)invalidInstructionException();
      _DAT_00000b30 = in_XMM1_Qa;
      ( *pcVar1 )();
   }

   lVar2 = __dynamic_cast(*param_2, &Object::typeinfo, &SpinBox::typeinfo, 0);
   Control::get_theme_item(local_48, lVar2, 0, param_3, param_4);
   uVar3 = Variant::operator_cast_to_Color((Variant*)local_48);
   *(undefined8*)( lVar2 + 0xb28 ) = uVar3;
   *(undefined8*)( lVar2 + 0xb30 ) = in_XMM1_Qa;
   if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   SpinBox::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#29}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#29}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
   code *pcVar1;
   long lVar2;
   long in_FS_OFFSET;
   undefined8 uVar3;
   undefined8 in_XMM1_Qa;
   int local_48[6];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*param_2 == (Node*)0x0) {
      Control::get_theme_item(local_48, 0, 0, param_3, param_4);
      _DAT_00000b78 = Variant::operator_cast_to_Color((Variant*)local_48);
      /* WARNING: Does not return */
      pcVar1 = (code*)invalidInstructionException();
      _DAT_00000b80 = in_XMM1_Qa;
      ( *pcVar1 )();
   }

   lVar2 = __dynamic_cast(*param_2, &Object::typeinfo, &SpinBox::typeinfo, 0);
   Control::get_theme_item(local_48, lVar2, 0, param_3, param_4);
   uVar3 = Variant::operator_cast_to_Color((Variant*)local_48);
   *(undefined8*)( lVar2 + 0xb78 ) = uVar3;
   *(undefined8*)( lVar2 + 0xb80 ) = in_XMM1_Qa;
   if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   SpinBox::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#27}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#27}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
   code *pcVar1;
   long lVar2;
   long in_FS_OFFSET;
   undefined8 uVar3;
   undefined8 in_XMM1_Qa;
   int local_48[6];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*param_2 == (Node*)0x0) {
      Control::get_theme_item(local_48, 0, 0, param_3, param_4);
      _DAT_00000b58 = Variant::operator_cast_to_Color((Variant*)local_48);
      /* WARNING: Does not return */
      pcVar1 = (code*)invalidInstructionException();
      _DAT_00000b60 = in_XMM1_Qa;
      ( *pcVar1 )();
   }

   lVar2 = __dynamic_cast(*param_2, &Object::typeinfo, &SpinBox::typeinfo, 0);
   Control::get_theme_item(local_48, lVar2, 0, param_3, param_4);
   uVar3 = Variant::operator_cast_to_Color((Variant*)local_48);
   *(undefined8*)( lVar2 + 0xb58 ) = uVar3;
   *(undefined8*)( lVar2 + 0xb60 ) = in_XMM1_Qa;
   if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   SpinBox::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#25}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#25}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
   code *pcVar1;
   long lVar2;
   long in_FS_OFFSET;
   undefined8 uVar3;
   undefined8 in_XMM1_Qa;
   int local_48[6];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*param_2 == (Node*)0x0) {
      Control::get_theme_item(local_48, 0, 0, param_3, param_4);
      _DAT_00000b38 = Variant::operator_cast_to_Color((Variant*)local_48);
      /* WARNING: Does not return */
      pcVar1 = (code*)invalidInstructionException();
      _DAT_00000b40 = in_XMM1_Qa;
      ( *pcVar1 )();
   }

   lVar2 = __dynamic_cast(*param_2, &Object::typeinfo, &SpinBox::typeinfo, 0);
   Control::get_theme_item(local_48, lVar2, 0, param_3, param_4);
   uVar3 = Variant::operator_cast_to_Color((Variant*)local_48);
   *(undefined8*)( lVar2 + 0xb38 ) = uVar3;
   *(undefined8*)( lVar2 + 0xb40 ) = in_XMM1_Qa;
   if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   SpinBox::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#23}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#23}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
   code *pcVar1;
   long lVar2;
   long in_FS_OFFSET;
   undefined8 uVar3;
   undefined8 in_XMM1_Qa;
   int local_48[6];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*param_2 == (Node*)0x0) {
      Control::get_theme_item(local_48, 0, 0, param_3, param_4);
      _DAT_00000b18 = Variant::operator_cast_to_Color((Variant*)local_48);
      /* WARNING: Does not return */
      pcVar1 = (code*)invalidInstructionException();
      _DAT_00000b20 = in_XMM1_Qa;
      ( *pcVar1 )();
   }

   lVar2 = __dynamic_cast(*param_2, &Object::typeinfo, &SpinBox::typeinfo, 0);
   Control::get_theme_item(local_48, lVar2, 0, param_3, param_4);
   uVar3 = Variant::operator_cast_to_Color((Variant*)local_48);
   *(undefined8*)( lVar2 + 0xb18 ) = uVar3;
   *(undefined8*)( lVar2 + 0xb20 ) = in_XMM1_Qa;
   if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   SpinBox::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#28}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#28}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
   code *pcVar1;
   long lVar2;
   long in_FS_OFFSET;
   undefined8 uVar3;
   undefined8 in_XMM1_Qa;
   int local_48[6];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*param_2 == (Node*)0x0) {
      Control::get_theme_item(local_48, 0, 0, param_3, param_4);
      _DAT_00000b68 = Variant::operator_cast_to_Color((Variant*)local_48);
      /* WARNING: Does not return */
      pcVar1 = (code*)invalidInstructionException();
      _DAT_00000b70 = in_XMM1_Qa;
      ( *pcVar1 )();
   }

   lVar2 = __dynamic_cast(*param_2, &Object::typeinfo, &SpinBox::typeinfo, 0);
   Control::get_theme_item(local_48, lVar2, 0, param_3, param_4);
   uVar3 = Variant::operator_cast_to_Color((Variant*)local_48);
   *(undefined8*)( lVar2 + 0xb68 ) = uVar3;
   *(undefined8*)( lVar2 + 0xb70 ) = in_XMM1_Qa;
   if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   SpinBox::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#22}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#22}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
   code *pcVar1;
   long lVar2;
   long in_FS_OFFSET;
   undefined8 uVar3;
   undefined8 in_XMM1_Qa;
   int local_48[6];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*param_2 == (Node*)0x0) {
      Control::get_theme_item(local_48, 0, 0, param_3, param_4);
      _DAT_00000b08 = Variant::operator_cast_to_Color((Variant*)local_48);
      /* WARNING: Does not return */
      pcVar1 = (code*)invalidInstructionException();
      _DAT_00000b10 = in_XMM1_Qa;
      ( *pcVar1 )();
   }

   lVar2 = __dynamic_cast(*param_2, &Object::typeinfo, &SpinBox::typeinfo, 0);
   Control::get_theme_item(local_48, lVar2, 0, param_3, param_4);
   uVar3 = Variant::operator_cast_to_Color((Variant*)local_48);
   *(undefined8*)( lVar2 + 0xb08 ) = uVar3;
   *(undefined8*)( lVar2 + 0xb10 ) = in_XMM1_Qa;
   if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   SpinBox::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#26}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#26}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
   code *pcVar1;
   long lVar2;
   long in_FS_OFFSET;
   undefined8 uVar3;
   undefined8 in_XMM1_Qa;
   int local_48[6];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*param_2 == (Node*)0x0) {
      Control::get_theme_item(local_48, 0, 0, param_3, param_4);
      _DAT_00000b48 = Variant::operator_cast_to_Color((Variant*)local_48);
      /* WARNING: Does not return */
      pcVar1 = (code*)invalidInstructionException();
      _DAT_00000b50 = in_XMM1_Qa;
      ( *pcVar1 )();
   }

   lVar2 = __dynamic_cast(*param_2, &Object::typeinfo, &SpinBox::typeinfo, 0);
   Control::get_theme_item(local_48, lVar2, 0, param_3, param_4);
   uVar3 = Variant::operator_cast_to_Color((Variant*)local_48);
   *(undefined8*)( lVar2 + 0xb48 ) = uVar3;
   *(undefined8*)( lVar2 + 0xb50 ) = in_XMM1_Qa;
   if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   SpinBox::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#4}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#4}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
   code *pcVar1;
   bool bVar2;
   long lVar3;
   long in_FS_OFFSET;
   int local_48[6];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*param_2 == (Node*)0x0) {
      Control::get_theme_item(local_48, 0, 1, param_3, param_4);
      Variant::operator_cast_to_bool((Variant*)local_48);
      DAT_00000ba4 = 0;
      /* WARNING: Does not return */
      pcVar1 = (code*)invalidInstructionException();
      ( *pcVar1 )();
   }

   lVar3 = __dynamic_cast(*param_2, &Object::typeinfo, &SpinBox::typeinfo, 0);
   Control::get_theme_item(local_48, lVar3, 1, param_3, param_4);
   bVar2 = Variant::operator_cast_to_bool((Variant*)local_48);
   *(bool*)( lVar3 + 0xba4 ) = bVar2;
   if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   SpinBox::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#1}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#1}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
   code *pcVar1;
   int iVar2;
   long lVar3;
   long in_FS_OFFSET;
   int local_48[6];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*param_2 == (Node*)0x0) {
      Control::get_theme_item(local_48, 0, 1, param_3, param_4);
      Variant::operator_cast_to_int((Variant*)local_48);
      _DAT_00000b98 = 0;
      /* WARNING: Does not return */
      pcVar1 = (code*)invalidInstructionException();
      ( *pcVar1 )();
   }

   lVar3 = __dynamic_cast(*param_2, &Object::typeinfo, &SpinBox::typeinfo, 0);
   Control::get_theme_item(local_48, lVar3, 1, param_3, param_4);
   iVar2 = Variant::operator_cast_to_int((Variant*)local_48);
   *(int*)( lVar3 + 0xb98 ) = iVar2;
   if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   SpinBox::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#3}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#3}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
   code *pcVar1;
   int iVar2;
   long lVar3;
   long in_FS_OFFSET;
   int local_48[6];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*param_2 == (Node*)0x0) {
      Control::get_theme_item(local_48, 0, 1, param_3, param_4);
      Variant::operator_cast_to_int((Variant*)local_48);
      _DAT_00000ba0 = 0;
      /* WARNING: Does not return */
      pcVar1 = (code*)invalidInstructionException();
      ( *pcVar1 )();
   }

   lVar3 = __dynamic_cast(*param_2, &Object::typeinfo, &SpinBox::typeinfo, 0);
   Control::get_theme_item(local_48, lVar3, 1, param_3, param_4);
   iVar2 = Variant::operator_cast_to_int((Variant*)local_48);
   *(int*)( lVar3 + 0xba0 ) = iVar2;
   if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   SpinBox::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#5}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#5}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
   Object *pOVar1;
   code *pcVar2;
   char cVar3;
   long lVar4;
   Object *pOVar5;
   long in_FS_OFFSET;
   int local_48[6];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*param_2 == (Node*)0x0) {
      Control::get_theme_item(local_48, 0, 4, param_3, param_4);
      Variant::get_validated_object();
      /* WARNING: Does not return */
      pcVar2 = (code*)invalidInstructionException();
      ( *pcVar2 )();
   }

   lVar4 = __dynamic_cast(*param_2, &Object::typeinfo, &SpinBox::typeinfo, 0);
   Control::get_theme_item(local_48, lVar4, 4, param_3, param_4);
   pOVar5 = (Object*)Variant::get_validated_object();
   pOVar1 = *(Object**)( lVar4 + 0xa80 );
   if (pOVar5 == pOVar1) goto LAB_00101190;
   if (pOVar5 == (Object*)0x0) {
      if (pOVar1 == (Object*)0x0) goto LAB_00101190;
      *(undefined8*)( lVar4 + 0xa80 ) = 0;
   }
 else {
      pOVar5 = (Object*)__dynamic_cast(pOVar5, &Object::typeinfo, &Texture2D::typeinfo, 0);
      if (pOVar1 == pOVar5) goto LAB_00101190;
      *(Object**)( lVar4 + 0xa80 ) = pOVar5;
      if (pOVar5 != (Object*)0x0) {
         cVar3 = RefCounted::reference();
         if (cVar3 == '\0') {
            *(undefined8*)( lVar4 + 0xa80 ) = 0;
         }

      }

      if (pOVar1 == (Object*)0x0) goto LAB_00101190;
   }

   cVar3 = RefCounted::unreference();
   if (cVar3 != '\0') {
      cVar3 = predelete_handler(pOVar1);
      if (cVar3 != '\0') {
         ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
         Memory::free_static(pOVar1, false);
      }

   }

   LAB_00101190:if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   SpinBox::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#18}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#18}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
   Object *pOVar1;
   code *pcVar2;
   char cVar3;
   long lVar4;
   Object *pOVar5;
   long in_FS_OFFSET;
   int local_48[6];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*param_2 == (Node*)0x0) {
      Control::get_theme_item(local_48, 0, 5, param_3, param_4);
      Variant::get_validated_object();
      /* WARNING: Does not return */
      pcVar2 = (code*)invalidInstructionException();
      ( *pcVar2 )();
   }

   lVar4 = __dynamic_cast(*param_2, &Object::typeinfo, &SpinBox::typeinfo, 0);
   Control::get_theme_item(local_48, lVar4, 5, param_3, param_4);
   pOVar5 = (Object*)Variant::get_validated_object();
   pOVar1 = *(Object**)( lVar4 + 0xae8 );
   if (pOVar5 == pOVar1) goto LAB_001012e0;
   if (pOVar5 == (Object*)0x0) {
      if (pOVar1 == (Object*)0x0) goto LAB_001012e0;
      *(undefined8*)( lVar4 + 0xae8 ) = 0;
   }
 else {
      pOVar5 = (Object*)__dynamic_cast(pOVar5, &Object::typeinfo, &StyleBox::typeinfo, 0);
      if (pOVar1 == pOVar5) goto LAB_001012e0;
      *(Object**)( lVar4 + 0xae8 ) = pOVar5;
      if (pOVar5 != (Object*)0x0) {
         cVar3 = RefCounted::reference();
         if (cVar3 == '\0') {
            *(undefined8*)( lVar4 + 0xae8 ) = 0;
         }

      }

      if (pOVar1 == (Object*)0x0) goto LAB_001012e0;
   }

   cVar3 = RefCounted::unreference();
   if (cVar3 != '\0') {
      cVar3 = predelete_handler(pOVar1);
      if (cVar3 != '\0') {
         ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
         Memory::free_static(pOVar1, false);
      }

   }

   LAB_001012e0:if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* SpinBox::_range_click_timeout() */void SpinBox::_range_click_timeout(SpinBox *this) {
   undefined8 uVar1;
   char cVar2;
   bool bVar3;
   float extraout_XMM0_Db;
   float extraout_XMM0_Db_00;
   double dVar4;
   double dVar5;
   double dVar6;
   float fVar7;
   if (this[0xa61] == (SpinBox)0x0) {
      uVar1 = Input::get_singleton();
      cVar2 = Input::is_mouse_button_pressed(uVar1, 1);
      if (cVar2 != '\0') {
         CanvasItem::get_local_mouse_position();
         Control::get_size();
         fVar7 = _LC18 * extraout_XMM0_Db_00;
         dVar4 = (double)Range::get_step();
         dVar6 = *(double*)( this + 0xa48 );
         if (dVar6 == 0.0) {
            dVar6 = (double)Range::get_step();
         }

         bVar3 = SUB81(this, 0);
         Object::set_block_signals(bVar3);
         Range::set_step(dVar6);
         Object::set_block_signals(bVar3);
         dVar5 = (double)Range::get_value();
         if (fVar7 <= extraout_XMM0_Db) {
            dVar6 = (double)( (ulong)dVar6 ^ __LC20 );
         }

         Range::set_value(dVar5 + dVar6);
         Object::set_block_signals(bVar3);
         Range::set_step(dVar4);
         Object::set_block_signals(bVar3);
         this[0xa50] = (SpinBox)0x1;
         cVar2 = Timer::is_one_shot();
         if (cVar2 != '\0') {
            Timer::set_wait_time(_LC21);
            Timer::set_one_shot(SUB81(*(undefined8*)( this + 0xa28 ), 0));
            Timer::start(_LC22);
            return;
         }

         return;
      }

   }

   Timer::stop();
   return;
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   SpinBox::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#11}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#11}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
   Object *pOVar1;
   code *pcVar2;
   char cVar3;
   long lVar4;
   Object *pOVar5;
   long in_FS_OFFSET;
   int local_48[6];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*param_2 == (Node*)0x0) {
      Control::get_theme_item(local_48, 0, 4, param_3, param_4);
      Variant::get_validated_object();
      /* WARNING: Does not return */
      pcVar2 = (code*)invalidInstructionException();
      ( *pcVar2 )();
   }

   lVar4 = __dynamic_cast(*param_2, &Object::typeinfo, &SpinBox::typeinfo, 0);
   Control::get_theme_item(local_48, lVar4, 4, param_3, param_4);
   pOVar5 = (Object*)Variant::get_validated_object();
   pOVar1 = *(Object**)( lVar4 + 0xab0 );
   if (pOVar5 == pOVar1) goto LAB_001015d0;
   if (pOVar5 == (Object*)0x0) {
      if (pOVar1 == (Object*)0x0) goto LAB_001015d0;
      *(undefined8*)( lVar4 + 0xab0 ) = 0;
   }
 else {
      pOVar5 = (Object*)__dynamic_cast(pOVar5, &Object::typeinfo, &Texture2D::typeinfo, 0);
      if (pOVar1 == pOVar5) goto LAB_001015d0;
      *(Object**)( lVar4 + 0xab0 ) = pOVar5;
      if (pOVar5 != (Object*)0x0) {
         cVar3 = RefCounted::reference();
         if (cVar3 == '\0') {
            *(undefined8*)( lVar4 + 0xab0 ) = 0;
         }

      }

      if (pOVar1 == (Object*)0x0) goto LAB_001015d0;
   }

   cVar3 = RefCounted::unreference();
   if (cVar3 != '\0') {
      cVar3 = predelete_handler(pOVar1);
      if (cVar3 != '\0') {
         ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
         Memory::free_static(pOVar1, false);
      }

   }

   LAB_001015d0:if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   SpinBox::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#13}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#13}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
   Object *pOVar1;
   code *pcVar2;
   char cVar3;
   long lVar4;
   Object *pOVar5;
   long in_FS_OFFSET;
   int local_48[6];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*param_2 == (Node*)0x0) {
      Control::get_theme_item(local_48, 0, 4, param_3, param_4);
      Variant::get_validated_object();
      /* WARNING: Does not return */
      pcVar2 = (code*)invalidInstructionException();
      ( *pcVar2 )();
   }

   lVar4 = __dynamic_cast(*param_2, &Object::typeinfo, &SpinBox::typeinfo, 0);
   Control::get_theme_item(local_48, lVar4, 4, param_3, param_4);
   pOVar5 = (Object*)Variant::get_validated_object();
   pOVar1 = *(Object**)( lVar4 + 0xac0 );
   if (pOVar5 == pOVar1) goto LAB_00101720;
   if (pOVar5 == (Object*)0x0) {
      if (pOVar1 == (Object*)0x0) goto LAB_00101720;
      *(undefined8*)( lVar4 + 0xac0 ) = 0;
   }
 else {
      pOVar5 = (Object*)__dynamic_cast(pOVar5, &Object::typeinfo, &Texture2D::typeinfo, 0);
      if (pOVar1 == pOVar5) goto LAB_00101720;
      *(Object**)( lVar4 + 0xac0 ) = pOVar5;
      if (pOVar5 != (Object*)0x0) {
         cVar3 = RefCounted::reference();
         if (cVar3 == '\0') {
            *(undefined8*)( lVar4 + 0xac0 ) = 0;
         }

      }

      if (pOVar1 == (Object*)0x0) goto LAB_00101720;
   }

   cVar3 = RefCounted::unreference();
   if (cVar3 != '\0') {
      cVar3 = predelete_handler(pOVar1);
      if (cVar3 != '\0') {
         ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
         Memory::free_static(pOVar1, false);
      }

   }

   LAB_00101720:if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   SpinBox::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#12}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#12}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
   Object *pOVar1;
   code *pcVar2;
   char cVar3;
   long lVar4;
   Object *pOVar5;
   long in_FS_OFFSET;
   int local_48[6];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*param_2 == (Node*)0x0) {
      Control::get_theme_item(local_48, 0, 4, param_3, param_4);
      Variant::get_validated_object();
      /* WARNING: Does not return */
      pcVar2 = (code*)invalidInstructionException();
      ( *pcVar2 )();
   }

   lVar4 = __dynamic_cast(*param_2, &Object::typeinfo, &SpinBox::typeinfo, 0);
   Control::get_theme_item(local_48, lVar4, 4, param_3, param_4);
   pOVar5 = (Object*)Variant::get_validated_object();
   pOVar1 = *(Object**)( lVar4 + 0xab8 );
   if (pOVar5 == pOVar1) goto LAB_00101870;
   if (pOVar5 == (Object*)0x0) {
      if (pOVar1 == (Object*)0x0) goto LAB_00101870;
      *(undefined8*)( lVar4 + 0xab8 ) = 0;
   }
 else {
      pOVar5 = (Object*)__dynamic_cast(pOVar5, &Object::typeinfo, &Texture2D::typeinfo, 0);
      if (pOVar1 == pOVar5) goto LAB_00101870;
      *(Object**)( lVar4 + 0xab8 ) = pOVar5;
      if (pOVar5 != (Object*)0x0) {
         cVar3 = RefCounted::reference();
         if (cVar3 == '\0') {
            *(undefined8*)( lVar4 + 0xab8 ) = 0;
         }

      }

      if (pOVar1 == (Object*)0x0) goto LAB_00101870;
   }

   cVar3 = RefCounted::unreference();
   if (cVar3 != '\0') {
      cVar3 = predelete_handler(pOVar1);
      if (cVar3 != '\0') {
         ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
         Memory::free_static(pOVar1, false);
      }

   }

   LAB_00101870:if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   SpinBox::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#6}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#6}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
   Object *pOVar1;
   code *pcVar2;
   char cVar3;
   long lVar4;
   Object *pOVar5;
   long in_FS_OFFSET;
   int local_48[6];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*param_2 == (Node*)0x0) {
      Control::get_theme_item(local_48, 0, 4, param_3, param_4);
      Variant::get_validated_object();
      /* WARNING: Does not return */
      pcVar2 = (code*)invalidInstructionException();
      ( *pcVar2 )();
   }

   lVar4 = __dynamic_cast(*param_2, &Object::typeinfo, &SpinBox::typeinfo, 0);
   Control::get_theme_item(local_48, lVar4, 4, param_3, param_4);
   pOVar5 = (Object*)Variant::get_validated_object();
   pOVar1 = *(Object**)( lVar4 + 0xa88 );
   if (pOVar5 == pOVar1) goto LAB_001019c0;
   if (pOVar5 == (Object*)0x0) {
      if (pOVar1 == (Object*)0x0) goto LAB_001019c0;
      *(undefined8*)( lVar4 + 0xa88 ) = 0;
   }
 else {
      pOVar5 = (Object*)__dynamic_cast(pOVar5, &Object::typeinfo, &Texture2D::typeinfo, 0);
      if (pOVar1 == pOVar5) goto LAB_001019c0;
      *(Object**)( lVar4 + 0xa88 ) = pOVar5;
      if (pOVar5 != (Object*)0x0) {
         cVar3 = RefCounted::reference();
         if (cVar3 == '\0') {
            *(undefined8*)( lVar4 + 0xa88 ) = 0;
         }

      }

      if (pOVar1 == (Object*)0x0) goto LAB_001019c0;
   }

   cVar3 = RefCounted::unreference();
   if (cVar3 != '\0') {
      cVar3 = predelete_handler(pOVar1);
      if (cVar3 != '\0') {
         ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
         Memory::free_static(pOVar1, false);
      }

   }

   LAB_001019c0:if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   SpinBox::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#10}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#10}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
   Object *pOVar1;
   code *pcVar2;
   char cVar3;
   long lVar4;
   Object *pOVar5;
   long in_FS_OFFSET;
   int local_48[6];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*param_2 == (Node*)0x0) {
      Control::get_theme_item(local_48, 0, 4, param_3, param_4);
      Variant::get_validated_object();
      /* WARNING: Does not return */
      pcVar2 = (code*)invalidInstructionException();
      ( *pcVar2 )();
   }

   lVar4 = __dynamic_cast(*param_2, &Object::typeinfo, &SpinBox::typeinfo, 0);
   Control::get_theme_item(local_48, lVar4, 4, param_3, param_4);
   pOVar5 = (Object*)Variant::get_validated_object();
   pOVar1 = *(Object**)( lVar4 + 0xaa8 );
   if (pOVar5 == pOVar1) goto LAB_00101b10;
   if (pOVar5 == (Object*)0x0) {
      if (pOVar1 == (Object*)0x0) goto LAB_00101b10;
      *(undefined8*)( lVar4 + 0xaa8 ) = 0;
   }
 else {
      pOVar5 = (Object*)__dynamic_cast(pOVar5, &Object::typeinfo, &Texture2D::typeinfo, 0);
      if (pOVar1 == pOVar5) goto LAB_00101b10;
      *(Object**)( lVar4 + 0xaa8 ) = pOVar5;
      if (pOVar5 != (Object*)0x0) {
         cVar3 = RefCounted::reference();
         if (cVar3 == '\0') {
            *(undefined8*)( lVar4 + 0xaa8 ) = 0;
         }

      }

      if (pOVar1 == (Object*)0x0) goto LAB_00101b10;
   }

   cVar3 = RefCounted::unreference();
   if (cVar3 != '\0') {
      cVar3 = predelete_handler(pOVar1);
      if (cVar3 != '\0') {
         ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
         Memory::free_static(pOVar1, false);
      }

   }

   LAB_00101b10:if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   SpinBox::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#8}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#8}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
   Object *pOVar1;
   code *pcVar2;
   char cVar3;
   long lVar4;
   Object *pOVar5;
   long in_FS_OFFSET;
   int local_48[6];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*param_2 == (Node*)0x0) {
      Control::get_theme_item(local_48, 0, 4, param_3, param_4);
      Variant::get_validated_object();
      /* WARNING: Does not return */
      pcVar2 = (code*)invalidInstructionException();
      ( *pcVar2 )();
   }

   lVar4 = __dynamic_cast(*param_2, &Object::typeinfo, &SpinBox::typeinfo, 0);
   Control::get_theme_item(local_48, lVar4, 4, param_3, param_4);
   pOVar5 = (Object*)Variant::get_validated_object();
   pOVar1 = *(Object**)( lVar4 + 0xa98 );
   if (pOVar5 == pOVar1) goto LAB_00101c60;
   if (pOVar5 == (Object*)0x0) {
      if (pOVar1 == (Object*)0x0) goto LAB_00101c60;
      *(undefined8*)( lVar4 + 0xa98 ) = 0;
   }
 else {
      pOVar5 = (Object*)__dynamic_cast(pOVar5, &Object::typeinfo, &Texture2D::typeinfo, 0);
      if (pOVar1 == pOVar5) goto LAB_00101c60;
      *(Object**)( lVar4 + 0xa98 ) = pOVar5;
      if (pOVar5 != (Object*)0x0) {
         cVar3 = RefCounted::reference();
         if (cVar3 == '\0') {
            *(undefined8*)( lVar4 + 0xa98 ) = 0;
         }

      }

      if (pOVar1 == (Object*)0x0) goto LAB_00101c60;
   }

   cVar3 = RefCounted::unreference();
   if (cVar3 != '\0') {
      cVar3 = predelete_handler(pOVar1);
      if (cVar3 != '\0') {
         ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
         Memory::free_static(pOVar1, false);
      }

   }

   LAB_00101c60:if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   SpinBox::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#7}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#7}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
   Object *pOVar1;
   code *pcVar2;
   char cVar3;
   long lVar4;
   Object *pOVar5;
   long in_FS_OFFSET;
   int local_48[6];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*param_2 == (Node*)0x0) {
      Control::get_theme_item(local_48, 0, 4, param_3, param_4);
      Variant::get_validated_object();
      /* WARNING: Does not return */
      pcVar2 = (code*)invalidInstructionException();
      ( *pcVar2 )();
   }

   lVar4 = __dynamic_cast(*param_2, &Object::typeinfo, &SpinBox::typeinfo, 0);
   Control::get_theme_item(local_48, lVar4, 4, param_3, param_4);
   pOVar5 = (Object*)Variant::get_validated_object();
   pOVar1 = *(Object**)( lVar4 + 0xa90 );
   if (pOVar5 == pOVar1) goto LAB_00101db0;
   if (pOVar5 == (Object*)0x0) {
      if (pOVar1 == (Object*)0x0) goto LAB_00101db0;
      *(undefined8*)( lVar4 + 0xa90 ) = 0;
   }
 else {
      pOVar5 = (Object*)__dynamic_cast(pOVar5, &Object::typeinfo, &Texture2D::typeinfo, 0);
      if (pOVar1 == pOVar5) goto LAB_00101db0;
      *(Object**)( lVar4 + 0xa90 ) = pOVar5;
      if (pOVar5 != (Object*)0x0) {
         cVar3 = RefCounted::reference();
         if (cVar3 == '\0') {
            *(undefined8*)( lVar4 + 0xa90 ) = 0;
         }

      }

      if (pOVar1 == (Object*)0x0) goto LAB_00101db0;
   }

   cVar3 = RefCounted::unreference();
   if (cVar3 != '\0') {
      cVar3 = predelete_handler(pOVar1);
      if (cVar3 != '\0') {
         ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
         Memory::free_static(pOVar1, false);
      }

   }

   LAB_00101db0:if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   SpinBox::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#9}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#9}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
   Object *pOVar1;
   code *pcVar2;
   char cVar3;
   long lVar4;
   Object *pOVar5;
   long in_FS_OFFSET;
   int local_48[6];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*param_2 == (Node*)0x0) {
      Control::get_theme_item(local_48, 0, 4, param_3, param_4);
      Variant::get_validated_object();
      /* WARNING: Does not return */
      pcVar2 = (code*)invalidInstructionException();
      ( *pcVar2 )();
   }

   lVar4 = __dynamic_cast(*param_2, &Object::typeinfo, &SpinBox::typeinfo, 0);
   Control::get_theme_item(local_48, lVar4, 4, param_3, param_4);
   pOVar5 = (Object*)Variant::get_validated_object();
   pOVar1 = *(Object**)( lVar4 + 0xaa0 );
   if (pOVar5 == pOVar1) goto LAB_00101f00;
   if (pOVar5 == (Object*)0x0) {
      if (pOVar1 == (Object*)0x0) goto LAB_00101f00;
      *(undefined8*)( lVar4 + 0xaa0 ) = 0;
   }
 else {
      pOVar5 = (Object*)__dynamic_cast(pOVar5, &Object::typeinfo, &Texture2D::typeinfo, 0);
      if (pOVar1 == pOVar5) goto LAB_00101f00;
      *(Object**)( lVar4 + 0xaa0 ) = pOVar5;
      if (pOVar5 != (Object*)0x0) {
         cVar3 = RefCounted::reference();
         if (cVar3 == '\0') {
            *(undefined8*)( lVar4 + 0xaa0 ) = 0;
         }

      }

      if (pOVar1 == (Object*)0x0) goto LAB_00101f00;
   }

   cVar3 = RefCounted::unreference();
   if (cVar3 != '\0') {
      cVar3 = predelete_handler(pOVar1);
      if (cVar3 != '\0') {
         ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
         Memory::free_static(pOVar1, false);
      }

   }

   LAB_00101f00:if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   SpinBox::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#19}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#19}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
   Object *pOVar1;
   code *pcVar2;
   char cVar3;
   long lVar4;
   Object *pOVar5;
   long in_FS_OFFSET;
   int local_48[6];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*param_2 == (Node*)0x0) {
      Control::get_theme_item(local_48, 0, 5, param_3, param_4);
      Variant::get_validated_object();
      /* WARNING: Does not return */
      pcVar2 = (code*)invalidInstructionException();
      ( *pcVar2 )();
   }

   lVar4 = __dynamic_cast(*param_2, &Object::typeinfo, &SpinBox::typeinfo, 0);
   Control::get_theme_item(local_48, lVar4, 5, param_3, param_4);
   pOVar5 = (Object*)Variant::get_validated_object();
   pOVar1 = *(Object**)( lVar4 + 0xaf0 );
   if (pOVar5 == pOVar1) goto LAB_00102050;
   if (pOVar5 == (Object*)0x0) {
      if (pOVar1 == (Object*)0x0) goto LAB_00102050;
      *(undefined8*)( lVar4 + 0xaf0 ) = 0;
   }
 else {
      pOVar5 = (Object*)__dynamic_cast(pOVar5, &Object::typeinfo, &StyleBox::typeinfo, 0);
      if (pOVar1 == pOVar5) goto LAB_00102050;
      *(Object**)( lVar4 + 0xaf0 ) = pOVar5;
      if (pOVar5 != (Object*)0x0) {
         cVar3 = RefCounted::reference();
         if (cVar3 == '\0') {
            *(undefined8*)( lVar4 + 0xaf0 ) = 0;
         }

      }

      if (pOVar1 == (Object*)0x0) goto LAB_00102050;
   }

   cVar3 = RefCounted::unreference();
   if (cVar3 != '\0') {
      cVar3 = predelete_handler(pOVar1);
      if (cVar3 != '\0') {
         ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
         Memory::free_static(pOVar1, false);
      }

   }

   LAB_00102050:if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   SpinBox::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#16}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#16}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
   Object *pOVar1;
   code *pcVar2;
   char cVar3;
   long lVar4;
   Object *pOVar5;
   long in_FS_OFFSET;
   int local_48[6];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*param_2 == (Node*)0x0) {
      Control::get_theme_item(local_48, 0, 5, param_3, param_4);
      Variant::get_validated_object();
      /* WARNING: Does not return */
      pcVar2 = (code*)invalidInstructionException();
      ( *pcVar2 )();
   }

   lVar4 = __dynamic_cast(*param_2, &Object::typeinfo, &SpinBox::typeinfo, 0);
   Control::get_theme_item(local_48, lVar4, 5, param_3, param_4);
   pOVar5 = (Object*)Variant::get_validated_object();
   pOVar1 = *(Object**)( lVar4 + 0xad8 );
   if (pOVar5 == pOVar1) goto LAB_001021a0;
   if (pOVar5 == (Object*)0x0) {
      if (pOVar1 == (Object*)0x0) goto LAB_001021a0;
      *(undefined8*)( lVar4 + 0xad8 ) = 0;
   }
 else {
      pOVar5 = (Object*)__dynamic_cast(pOVar5, &Object::typeinfo, &StyleBox::typeinfo, 0);
      if (pOVar1 == pOVar5) goto LAB_001021a0;
      *(Object**)( lVar4 + 0xad8 ) = pOVar5;
      if (pOVar5 != (Object*)0x0) {
         cVar3 = RefCounted::reference();
         if (cVar3 == '\0') {
            *(undefined8*)( lVar4 + 0xad8 ) = 0;
         }

      }

      if (pOVar1 == (Object*)0x0) goto LAB_001021a0;
   }

   cVar3 = RefCounted::unreference();
   if (cVar3 != '\0') {
      cVar3 = predelete_handler(pOVar1);
      if (cVar3 != '\0') {
         ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
         Memory::free_static(pOVar1, false);
      }

   }

   LAB_001021a0:if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   SpinBox::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#20}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#20}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
   Object *pOVar1;
   code *pcVar2;
   char cVar3;
   long lVar4;
   Object *pOVar5;
   long in_FS_OFFSET;
   int local_48[6];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*param_2 == (Node*)0x0) {
      Control::get_theme_item(local_48, 0, 5, param_3, param_4);
      Variant::get_validated_object();
      /* WARNING: Does not return */
      pcVar2 = (code*)invalidInstructionException();
      ( *pcVar2 )();
   }

   lVar4 = __dynamic_cast(*param_2, &Object::typeinfo, &SpinBox::typeinfo, 0);
   Control::get_theme_item(local_48, lVar4, 5, param_3, param_4);
   pOVar5 = (Object*)Variant::get_validated_object();
   pOVar1 = *(Object**)( lVar4 + 0xaf8 );
   if (pOVar5 == pOVar1) goto LAB_001022f0;
   if (pOVar5 == (Object*)0x0) {
      if (pOVar1 == (Object*)0x0) goto LAB_001022f0;
      *(undefined8*)( lVar4 + 0xaf8 ) = 0;
   }
 else {
      pOVar5 = (Object*)__dynamic_cast(pOVar5, &Object::typeinfo, &StyleBox::typeinfo, 0);
      if (pOVar1 == pOVar5) goto LAB_001022f0;
      *(Object**)( lVar4 + 0xaf8 ) = pOVar5;
      if (pOVar5 != (Object*)0x0) {
         cVar3 = RefCounted::reference();
         if (cVar3 == '\0') {
            *(undefined8*)( lVar4 + 0xaf8 ) = 0;
         }

      }

      if (pOVar1 == (Object*)0x0) goto LAB_001022f0;
   }

   cVar3 = RefCounted::unreference();
   if (cVar3 != '\0') {
      cVar3 = predelete_handler(pOVar1);
      if (cVar3 != '\0') {
         ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
         Memory::free_static(pOVar1, false);
      }

   }

   LAB_001022f0:if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   SpinBox::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#17}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#17}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
   Object *pOVar1;
   code *pcVar2;
   char cVar3;
   long lVar4;
   Object *pOVar5;
   long in_FS_OFFSET;
   int local_48[6];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*param_2 == (Node*)0x0) {
      Control::get_theme_item(local_48, 0, 5, param_3, param_4);
      Variant::get_validated_object();
      /* WARNING: Does not return */
      pcVar2 = (code*)invalidInstructionException();
      ( *pcVar2 )();
   }

   lVar4 = __dynamic_cast(*param_2, &Object::typeinfo, &SpinBox::typeinfo, 0);
   Control::get_theme_item(local_48, lVar4, 5, param_3, param_4);
   pOVar5 = (Object*)Variant::get_validated_object();
   pOVar1 = *(Object**)( lVar4 + 0xae0 );
   if (pOVar5 == pOVar1) goto LAB_00102440;
   if (pOVar5 == (Object*)0x0) {
      if (pOVar1 == (Object*)0x0) goto LAB_00102440;
      *(undefined8*)( lVar4 + 0xae0 ) = 0;
   }
 else {
      pOVar5 = (Object*)__dynamic_cast(pOVar5, &Object::typeinfo, &StyleBox::typeinfo, 0);
      if (pOVar1 == pOVar5) goto LAB_00102440;
      *(Object**)( lVar4 + 0xae0 ) = pOVar5;
      if (pOVar5 != (Object*)0x0) {
         cVar3 = RefCounted::reference();
         if (cVar3 == '\0') {
            *(undefined8*)( lVar4 + 0xae0 ) = 0;
         }

      }

      if (pOVar1 == (Object*)0x0) goto LAB_00102440;
   }

   cVar3 = RefCounted::unreference();
   if (cVar3 != '\0') {
      cVar3 = predelete_handler(pOVar1);
      if (cVar3 != '\0') {
         ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
         Memory::free_static(pOVar1, false);
      }

   }

   LAB_00102440:if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   SpinBox::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#30}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#30}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
   Object *pOVar1;
   code *pcVar2;
   char cVar3;
   long lVar4;
   Object *pOVar5;
   long in_FS_OFFSET;
   int local_48[6];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*param_2 == (Node*)0x0) {
      Control::get_theme_item(local_48, 0, 5, param_3, param_4);
      Variant::get_validated_object();
      /* WARNING: Does not return */
      pcVar2 = (code*)invalidInstructionException();
      ( *pcVar2 )();
   }

   lVar4 = __dynamic_cast(*param_2, &Object::typeinfo, &SpinBox::typeinfo, 0);
   Control::get_theme_item(local_48, lVar4, 5, param_3, param_4);
   pOVar5 = (Object*)Variant::get_validated_object();
   pOVar1 = *(Object**)( lVar4 + 0xb88 );
   if (pOVar5 == pOVar1) goto LAB_00102590;
   if (pOVar5 == (Object*)0x0) {
      if (pOVar1 == (Object*)0x0) goto LAB_00102590;
      *(undefined8*)( lVar4 + 0xb88 ) = 0;
   }
 else {
      pOVar5 = (Object*)__dynamic_cast(pOVar5, &Object::typeinfo, &StyleBox::typeinfo, 0);
      if (pOVar1 == pOVar5) goto LAB_00102590;
      *(Object**)( lVar4 + 0xb88 ) = pOVar5;
      if (pOVar5 != (Object*)0x0) {
         cVar3 = RefCounted::reference();
         if (cVar3 == '\0') {
            *(undefined8*)( lVar4 + 0xb88 ) = 0;
         }

      }

      if (pOVar1 == (Object*)0x0) goto LAB_00102590;
   }

   cVar3 = RefCounted::unreference();
   if (cVar3 != '\0') {
      cVar3 = predelete_handler(pOVar1);
      if (cVar3 != '\0') {
         ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
         Memory::free_static(pOVar1, false);
      }

   }

   LAB_00102590:if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   SpinBox::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#21}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#21}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
   Object *pOVar1;
   code *pcVar2;
   char cVar3;
   long lVar4;
   Object *pOVar5;
   long in_FS_OFFSET;
   int local_48[6];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*param_2 == (Node*)0x0) {
      Control::get_theme_item(local_48, 0, 5, param_3, param_4);
      Variant::get_validated_object();
      /* WARNING: Does not return */
      pcVar2 = (code*)invalidInstructionException();
      ( *pcVar2 )();
   }

   lVar4 = __dynamic_cast(*param_2, &Object::typeinfo, &SpinBox::typeinfo, 0);
   Control::get_theme_item(local_48, lVar4, 5, param_3, param_4);
   pOVar5 = (Object*)Variant::get_validated_object();
   pOVar1 = *(Object**)( lVar4 + 0xb00 );
   if (pOVar5 == pOVar1) goto LAB_001026e0;
   if (pOVar5 == (Object*)0x0) {
      if (pOVar1 == (Object*)0x0) goto LAB_001026e0;
      *(undefined8*)( lVar4 + 0xb00 ) = 0;
   }
 else {
      pOVar5 = (Object*)__dynamic_cast(pOVar5, &Object::typeinfo, &StyleBox::typeinfo, 0);
      if (pOVar1 == pOVar5) goto LAB_001026e0;
      *(Object**)( lVar4 + 0xb00 ) = pOVar5;
      if (pOVar5 != (Object*)0x0) {
         cVar3 = RefCounted::reference();
         if (cVar3 == '\0') {
            *(undefined8*)( lVar4 + 0xb00 ) = 0;
         }

      }

      if (pOVar1 == (Object*)0x0) goto LAB_001026e0;
   }

   cVar3 = RefCounted::unreference();
   if (cVar3 != '\0') {
      cVar3 = predelete_handler(pOVar1);
      if (cVar3 != '\0') {
         ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
         Memory::free_static(pOVar1, false);
      }

   }

   LAB_001026e0:if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   SpinBox::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#15}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#15}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
   Object *pOVar1;
   code *pcVar2;
   char cVar3;
   long lVar4;
   Object *pOVar5;
   long in_FS_OFFSET;
   int local_48[6];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*param_2 == (Node*)0x0) {
      Control::get_theme_item(local_48, 0, 5, param_3, param_4);
      Variant::get_validated_object();
      /* WARNING: Does not return */
      pcVar2 = (code*)invalidInstructionException();
      ( *pcVar2 )();
   }

   lVar4 = __dynamic_cast(*param_2, &Object::typeinfo, &SpinBox::typeinfo, 0);
   Control::get_theme_item(local_48, lVar4, 5, param_3, param_4);
   pOVar5 = (Object*)Variant::get_validated_object();
   pOVar1 = *(Object**)( lVar4 + 0xad0 );
   if (pOVar5 == pOVar1) goto LAB_00102830;
   if (pOVar5 == (Object*)0x0) {
      if (pOVar1 == (Object*)0x0) goto LAB_00102830;
      *(undefined8*)( lVar4 + 0xad0 ) = 0;
   }
 else {
      pOVar5 = (Object*)__dynamic_cast(pOVar5, &Object::typeinfo, &StyleBox::typeinfo, 0);
      if (pOVar1 == pOVar5) goto LAB_00102830;
      *(Object**)( lVar4 + 0xad0 ) = pOVar5;
      if (pOVar5 != (Object*)0x0) {
         cVar3 = RefCounted::reference();
         if (cVar3 == '\0') {
            *(undefined8*)( lVar4 + 0xad0 ) = 0;
         }

      }

      if (pOVar1 == (Object*)0x0) goto LAB_00102830;
   }

   cVar3 = RefCounted::unreference();
   if (cVar3 != '\0') {
      cVar3 = predelete_handler(pOVar1);
      if (cVar3 != '\0') {
         ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
         Memory::free_static(pOVar1, false);
      }

   }

   LAB_00102830:if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   SpinBox::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#14}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#14}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
   Object *pOVar1;
   code *pcVar2;
   char cVar3;
   long lVar4;
   Object *pOVar5;
   long in_FS_OFFSET;
   int local_48[6];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*param_2 == (Node*)0x0) {
      Control::get_theme_item(local_48, 0, 5, param_3, param_4);
      Variant::get_validated_object();
      /* WARNING: Does not return */
      pcVar2 = (code*)invalidInstructionException();
      ( *pcVar2 )();
   }

   lVar4 = __dynamic_cast(*param_2, &Object::typeinfo, &SpinBox::typeinfo, 0);
   Control::get_theme_item(local_48, lVar4, 5, param_3, param_4);
   pOVar5 = (Object*)Variant::get_validated_object();
   pOVar1 = *(Object**)( lVar4 + 0xac8 );
   if (pOVar5 == pOVar1) goto LAB_00102980;
   if (pOVar5 == (Object*)0x0) {
      if (pOVar1 == (Object*)0x0) goto LAB_00102980;
      *(undefined8*)( lVar4 + 0xac8 ) = 0;
   }
 else {
      pOVar5 = (Object*)__dynamic_cast(pOVar5, &Object::typeinfo, &StyleBox::typeinfo, 0);
      if (pOVar1 == pOVar5) goto LAB_00102980;
      *(Object**)( lVar4 + 0xac8 ) = pOVar5;
      if (pOVar5 != (Object*)0x0) {
         cVar3 = RefCounted::reference();
         if (cVar3 == '\0') {
            *(undefined8*)( lVar4 + 0xac8 ) = 0;
         }

      }

      if (pOVar1 == (Object*)0x0) goto LAB_00102980;
   }

   cVar3 = RefCounted::unreference();
   if (cVar3 != '\0') {
      cVar3 = predelete_handler(pOVar1);
      if (cVar3 != '\0') {
         ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
         Memory::free_static(pOVar1, false);
      }

   }

   LAB_00102980:if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   SpinBox::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#31}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#31}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
   Object *pOVar1;
   code *pcVar2;
   char cVar3;
   long lVar4;
   Object *pOVar5;
   long in_FS_OFFSET;
   int local_48[6];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*param_2 == (Node*)0x0) {
      Control::get_theme_item(local_48, 0, 5, param_3, param_4);
      Variant::get_validated_object();
      /* WARNING: Does not return */
      pcVar2 = (code*)invalidInstructionException();
      ( *pcVar2 )();
   }

   lVar4 = __dynamic_cast(*param_2, &Object::typeinfo, &SpinBox::typeinfo, 0);
   Control::get_theme_item(local_48, lVar4, 5, param_3, param_4);
   pOVar5 = (Object*)Variant::get_validated_object();
   pOVar1 = *(Object**)( lVar4 + 0xb90 );
   if (pOVar5 == pOVar1) goto LAB_00102ad0;
   if (pOVar5 == (Object*)0x0) {
      if (pOVar1 == (Object*)0x0) goto LAB_00102ad0;
      *(undefined8*)( lVar4 + 0xb90 ) = 0;
   }
 else {
      pOVar5 = (Object*)__dynamic_cast(pOVar5, &Object::typeinfo, &StyleBox::typeinfo, 0);
      if (pOVar1 == pOVar5) goto LAB_00102ad0;
      *(Object**)( lVar4 + 0xb90 ) = pOVar5;
      if (pOVar5 != (Object*)0x0) {
         cVar3 = RefCounted::reference();
         if (cVar3 == '\0') {
            *(undefined8*)( lVar4 + 0xb90 ) = 0;
         }

      }

      if (pOVar1 == (Object*)0x0) goto LAB_00102ad0;
   }

   cVar3 = RefCounted::unreference();
   if (cVar3 != '\0') {
      cVar3 = predelete_handler(pOVar1);
      if (cVar3 != '\0') {
         ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
         Memory::free_static(pOVar1, false);
      }

   }

   LAB_00102ad0:if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* CowData<char32_t>::_ref(CowData<char32_t> const&) [clone .part.0] */void CowData<char32_t>::_ref(CowData<char32_t> *this, CowData *param_1) {
   long *plVar1;
   long lVar2;
   long lVar3;
   bool bVar4;
   if (*(long*)this != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)this + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)this;
         *(undefined8*)this = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }
 else {
         *(undefined8*)this = 0;
      }

   }

   plVar1 = (long*)( *(long*)param_1 + -0x10 );
   if (*(long*)param_1 != 0) {
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
      }
 while ( !bVar4 );
      if (lVar3 != -1) {
         *(undefined8*)this = *(undefined8*)param_1;
      }

   }

   return;
}
/* SpinBox::get_suffix() const */void SpinBox::get_suffix(void) {
   long in_RSI;
   CowData<char32_t> *in_RDI;
   *(undefined8*)in_RDI = 0;
   if (*(long*)( in_RSI + 0xa38 ) != 0) {
      CowData<char32_t>::_ref(in_RDI, (CowData*)( in_RSI + 0xa38 ));
   }

   return;
}
/* SpinBox::get_prefix() const */void SpinBox::get_prefix(void) {
   long in_RSI;
   CowData<char32_t> *in_RDI;
   *(undefined8*)in_RDI = 0;
   if (*(long*)( in_RSI + 0xa30 ) != 0) {
      CowData<char32_t>::_ref(in_RDI, (CowData*)( in_RSI + 0xa30 ));
   }

   return;
}
/* SpinBox::_release_mouse_from_drag_mode() */void SpinBox::_release_mouse_from_drag_mode(SpinBox *this) {
   undefined8 uVar1;
   if (this[0xa61] == (SpinBox)0x0) {
      return;
   }

   this[0xa61] = (SpinBox)0x0;
   uVar1 = Input::get_singleton();
   Input::set_mouse_mode(uVar1, 1);
   Control::warp_mouse((Vector2*)this);
   uVar1 = Input::get_singleton();
   Input::set_mouse_mode(uVar1, 0);
   return;
}
/* SpinBox::_mouse_exited() */void SpinBox::_mouse_exited(SpinBox *this) {
   if (( this[0xa78] == (SpinBox)0x0 ) && ( this[0xa7b] == (SpinBox)0x0 )) {
      return;
   }

   this[0xa78] = (SpinBox)0x0;
   this[0xa7b] = (SpinBox)0x0;
   CanvasItem::queue_redraw();
   return;
}
/* SpinBox::_update_buttons_state_for_current_value() */void SpinBox::_update_buttons_state_for_current_value(SpinBox *this) {
   byte bVar1;
   SpinBox SVar2;
   SpinBox SVar3;
   double dVar4;
   double dVar5;
   dVar4 = (double)Range::get_value();
   dVar5 = (double)Range::get_max();
   if (dVar5 == dVar4) {
      bVar1 = Range::is_greater_allowed();
      SVar3 = ( SpinBox )(bVar1 ^ 1);
   }
 else {
      SVar3 = (SpinBox)0x0;
   }

   dVar5 = (double)Range::get_min();
   if (dVar5 == dVar4) {
      bVar1 = Range::is_lesser_allowed();
      SVar2 = ( SpinBox )(bVar1 ^ 1);
   }
 else {
      SVar2 = (SpinBox)0x0;
   }

   if (( this[0xa7a] == SVar3 ) && ( this[0xa7d] == SVar2 )) {
      return;
   }

   this[0xa7a] = SVar3;
   this[0xa7d] = SVar2;
   CanvasItem::queue_redraw();
   return;
}
/* SpinBox::_value_changed(double) */void SpinBox::_value_changed(double param_1) {
   SpinBox *in_RDI;
   _update_buttons_state_for_current_value(in_RDI);
   return;
}
/* SpinBox::_set_step_no_signal(double) */void SpinBox::_set_step_no_signal(SpinBox *this, double param_1) {
   Object::set_block_signals(SUB81(this, 0));
   Range::set_step(param_1);
   Object::set_block_signals(SUB81(this, 0));
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* SpinBox::gui_input(Ref<InputEvent> const&) */void SpinBox::gui_input(SpinBox *this, Ref *param_1) {
   SpinBox SVar1;
   SpinBox SVar2;
   long lVar3;
   char cVar4;
   int iVar5;
   Object *pOVar6;
   Object *pOVar7;
   Object *pOVar8;
   ulong uVar9;
   long lVar10;
   SpinBox SVar11;
   SpinBox SVar12;
   long in_FS_OFFSET;
   float fVar13;
   float fVar14;
   float extraout_XMM0_Db;
   double dVar16;
   double dVar17;
   float fVar18;
   double dVar19;
   float fVar20;
   float fVar21;
   float fVar22;
   double local_70;
   undefined8 uVar15;
   lVar3 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)param_1 == 0) {
      if (lVar3 == *(long*)( in_FS_OFFSET + 0x28 )) {
         _err_print_error("gui_input", "scene/gui/spin_box.cpp", 0xc0, "Condition \"p_event.is_null()\" is true.", 0, 0);
         return;
      }

      goto LAB_00103862;
   }

   cVar4 = LineEdit::is_editable();
   if (cVar4 != '\0') {
      pOVar8 = *(Object**)param_1;
      pOVar6 = pOVar8;
      if (pOVar8 == (Object*)0x0) {
         LAB_00103390:Range::get_step();
      }
 else {
         pOVar6 = (Object*)__dynamic_cast(pOVar8, &Object::typeinfo, &InputEventMouse::typeinfo, 0);
         if (pOVar6 != (Object*)0x0) {
            cVar4 = RefCounted::reference();
            pOVar8 = *(Object**)param_1;
            if (cVar4 == '\0') {
               pOVar6 = (Object*)0x0;
            }

            if (pOVar8 == (Object*)0x0) goto LAB_00103390;
         }

         pOVar7 = (Object*)__dynamic_cast(pOVar8, &Object::typeinfo, &InputEventMouseButton::typeinfo, 0);
         if (pOVar7 == (Object*)0x0) {
            pOVar8 = (Object*)__dynamic_cast(pOVar8, &Object::typeinfo, &InputEventMouseMotion::typeinfo, 0);
            if (pOVar8 == (Object*)0x0) goto LAB_00103390;
            LAB_00102ed8:cVar4 = RefCounted::reference();
            if (cVar4 == '\0') {
               local_70 = (double)Range::get_step();
               pOVar8 = (Object*)0x0;
               joined_r0x00102efc:if (pOVar7 == (Object*)0x0) goto LAB_001030a0;
            }
 else {
               local_70 = (double)Range::get_step();
            }

         }
 else {
            cVar4 = RefCounted::reference();
            if (cVar4 == '\0') {
               lVar10 = *(long*)param_1;
               if (lVar10 == 0) goto LAB_00103390;
               pOVar7 = (Object*)0x0;
               LAB_00102eb8:pOVar8 = (Object*)__dynamic_cast(lVar10, &Object::typeinfo, &InputEventMouseMotion::typeinfo, 0);
               if (pOVar8 != (Object*)0x0) goto LAB_00102ed8;
               local_70 = (double)Range::get_step();
               goto joined_r0x00102efc;
            }

            lVar10 = *(long*)param_1;
            if (lVar10 != 0) goto LAB_00102eb8;
            local_70 = (double)Range::get_step();
            pOVar8 = (Object*)0x0;
         }

         fVar18 = (float)*(int*)( this + 0xa08 );
         iVar5 = *(int*)( this + 0xa14 );
         fVar21 = (float)*(int*)( this + 0xa0c );
         fVar20 = (float)*(int*)( this + 0xa00 );
         fVar22 = (float)*(int*)( this + 0xa10 );
         uVar15 = InputEventMouse::get_position();
         fVar13 = (float)uVar15;
         fVar14 = (float)( (ulong)uVar15 >> 0x20 );
         if (fVar20 < 0.0) {
            _err_print_error("has_point", "./core/math/rect2.h", 0xb9, "Rect2 size is negative, this is not supported. Use Rect2.abs() to get a Rect2 with a positive size.", 0, 0);
            if (( ( fVar13 < fVar18 ) || ( fVar14 < 0.0 ) ) || ( fVar20 + fVar18 <= fVar13 )) {
               LAB_0010342b:SVar12 = (SpinBox)0x0;
            }
 else {
               SVar12 = ( SpinBox )(fVar14 < fVar21 + 0.0);
            }

            LAB_00103430:_err_print_error("has_point", "./core/math/rect2.h", 0xb9, "Rect2 size is negative, this is not supported. Use Rect2.abs() to get a Rect2 with a positive size.", 0, 0);
            LAB_00102fc8:if (fVar13 < fVar18) {
               SVar11 = (SpinBox)0x0;
            }
 else {
               LAB_00102fd1:SVar11 = (SpinBox)0x0;
               if (( (float)iVar5 <= fVar14 ) && ( fVar13 < fVar18 + fVar20 )) {
                  SVar11 = ( SpinBox )(fVar14 < (float)iVar5 + fVar22);
               }

            }

         }
 else {
            if (fVar21 < 0.0) {
               _err_print_error("has_point", "./core/math/rect2.h", 0xb9, "Rect2 size is negative, this is not supported. Use Rect2.abs() to get a Rect2 with a positive size.", 0, 0);
               if (fVar13 < fVar18) goto LAB_00103140;
               if (( fVar14 < 0.0 ) || ( fVar20 + fVar18 <= fVar13 )) goto LAB_00103360;
               LAB_00102fac:SVar12 = ( SpinBox )(fVar14 < fVar21 + 0.0);
               LAB_00102fb9:if (fVar22 < 0.0) goto LAB_00103430;
               goto LAB_00102fc8;
            }

            if (fVar18 <= fVar13) {
               if (fVar14 < 0.0) {
                  LAB_00103360:SVar12 = (SpinBox)0x0;
                  goto LAB_00102fb9;
               }

               if (fVar13 < fVar20 + fVar18) goto LAB_00102fac;
               SVar12 = (SpinBox)0x0;
               if (fVar22 < 0.0) goto LAB_0010342b;
               goto LAB_00102fd1;
            }

            LAB_00103140:if (fVar22 < 0.0) goto LAB_0010342b;
            SVar12 = (SpinBox)0x0;
            SVar11 = (SpinBox)0x0;
         }

         if (pOVar7 == (Object*)0x0) {
            if (pOVar8 != (Object*)0x0) goto LAB_00103027;
         }
 else {
            cVar4 = InputEvent::is_pressed();
            if (cVar4 != '\0') {
               iVar5 = InputEventMouseButton::get_button_index();
               if (iVar5 == 4) {
                  cVar4 = LineEdit::is_editing();
                  if (cVar4 != '\0') {
                     this[0xa50] = (SpinBox)0x0;
                     dVar19 = (double)Range::get_value();
                     fVar14 = (float)InputEventMouseButton::get_factor();
                     Range::set_value((double)fVar14 * local_70 + dVar19);
                     Control::accept_event();
                  }

               }
 else if (iVar5 < 5) {
                  if (iVar5 == 1) {
                     this[0x9f9] = (SpinBox)0x1;
                     Control::grab_focus();
                     if (( SVar12 != (SpinBox)0x0 ) || ( SVar11 != (SpinBox)0x0 )) {
                        dVar19 = *(double*)( this + 0xa48 );
                        if (dVar19 == 0.0) {
                           dVar19 = (double)Range::get_step();
                        }

                        _set_step_no_signal(this, dVar19);
                        dVar16 = (double)Range::get_value();
                        if (SVar12 == (SpinBox)0x0) {
                           dVar19 = (double)( (ulong)dVar19 ^ __LC20 );
                        }

                        Range::set_value(dVar16 + dVar19);
                        _set_step_no_signal(this, local_70);
                        this[0xa50] = (SpinBox)0x1;
                     }

                     this[0xa79] = SVar12;
                     this[0xa7c] = SVar11;
                     CanvasItem::queue_redraw();
                     Timer::set_wait_time(_LC50);
                     Timer::set_one_shot(SUB81(*(undefined8*)( this + 0xa28 ), 0));
                     Timer::start(_LC22);
                     this[0xa60] = (SpinBox)0x1;
                     uVar15 = InputEventMouse::get_position();
                     *(undefined8*)( this + 0xa64 ) = uVar15;
                  }
 else if (( iVar5 == 2 ) && ( ( Control::grab_focus(),SVar12 != (SpinBox)0x0 || ( SVar11 != (SpinBox)0x0 ) ) )) {
                     this[0xa50] = (SpinBox)0x0;
                     if (SVar12 == (SpinBox)0x0) {
                        dVar19 = (double)Range::get_min();
                     }
 else {
                        dVar19 = (double)Range::get_max();
                     }

                     Range::set_value(dVar19);
                  }

               }
 else if (( iVar5 == 5 ) && ( cVar4 = LineEdit::is_editing() ),cVar4 != '\0') {
                  this[0xa50] = (SpinBox)0x0;
                  dVar19 = (double)Range::get_value();
                  fVar14 = (float)InputEventMouseButton::get_factor();
                  Range::set_value(dVar19 - (double)fVar14 * local_70);
                  Control::accept_event();
               }

            }

            cVar4 = InputEvent::is_pressed();
            if (( cVar4 == '\0' ) && ( iVar5 = iVar5 == 1 )) {
               if (( this[0xa79] != (SpinBox)0x0 ) || ( this[0xa7c] != (SpinBox)0x0 )) {
                  this[0xa79] = (SpinBox)0x0;
                  this[0xa7c] = (SpinBox)0x0;
                  CanvasItem::queue_redraw();
               }

               Timer::stop();
               if (this[0xa61] != (SpinBox)0x0) {
                  this[0xa61] = (SpinBox)0x0;
                  uVar15 = Input::get_singleton();
                  Input::set_mouse_mode(uVar15, 1);
                  Control::warp_mouse((Vector2*)this);
                  uVar15 = Input::get_singleton();
                  Input::set_mouse_mode(uVar15);
               }

               this[0xa60] = (SpinBox)0x0;
               LineEdit::clear_pending_select_all_on_focus();
            }

            if (pOVar8 != (Object*)0x0) {
               LAB_00103027:SVar1 = this[0xa7b];
               SVar2 = this[0xa78];
               this[0xa7b] = SVar11;
               this[0xa78] = SVar12;
               if (( SVar1 != SVar11 ) || ( SVar2 != SVar12 )) {
                  CanvasItem::queue_redraw();
               }

               uVar9 = InputEventMouse::get_button_mask();
               if (( uVar9 & 1 ) != 0) {
                  if (this[0xa61] == (SpinBox)0x0) {
                     if (this[0xa60] != (SpinBox)0x0) {
                        InputEventMouse::get_position();
                        fVar14 = (float)Vector2::distance_to((Vector2*)( this + 0xa64 ));
                        if (__LC54 < fVar14) {
                           uVar15 = Input::get_singleton();
                           Input::set_mouse_mode(uVar15);
                           this[0xa61] = (SpinBox)0x1;
                           uVar15 = Range::get_value();
                           *(undefined8*)( this + 0xa70 ) = 0;
                           *(undefined8*)( this + 0xa58 ) = uVar15;
                        }

                     }

                  }
 else {
                     InputEventMouseMotion::get_relative();
                     dVar19 = (double)extraout_XMM0_Db + *(double*)( this + 0xa70 );
                     *(double*)( this + 0xa70 ) = dVar19;
                     if (dVar19 < 0.0) {
                        dVar16 = pow((double)( (ulong)dVar19 ^ __LC20 ), _LC51);
                        dVar16 = _LC52 * dVar16;
                     }
 else {
                        dVar16 = pow(dVar19, _LC51);
                        dVar16 = _LC53 * dVar16;
                        if (dVar19 <= 0.0) {
                           dVar16 = dVar16 * 0.0;
                        }

                     }

                     this[0xa50] = (SpinBox)0x0;
                     dVar17 = (double)Range::get_max();
                     dVar19 = (double)Range::get_min();
                     dVar16 = dVar16 * local_70 + *(double*)( this + 0xa58 );
                     if (( dVar19 <= dVar16 ) && ( dVar19 = dVar16 <= dVar17 )) {
                        dVar19 = dVar16;
                     }

                     Range::set_value(dVar19);
                  }

               }

               cVar4 = RefCounted::unreference();
               if (( cVar4 != '\0' ) && ( cVar4 = predelete_handler(pOVar8) ),cVar4 != '\0') {
                  ( **(code**)( *(long*)pOVar8 + 0x140 ) )(pOVar8);
                  Memory::free_static(pOVar8, false);
               }

               if (pOVar7 == (Object*)0x0) goto LAB_001030a0;
            }

            cVar4 = RefCounted::unreference();
            if (( cVar4 != '\0' ) && ( cVar4 = predelete_handler(pOVar7) ),cVar4 != '\0') {
               ( **(code**)( *(long*)pOVar7 + 0x140 ) )(pOVar7);
               Memory::free_static(pOVar7, false);
            }

         }

      }

      LAB_001030a0:if (( ( pOVar6 != (Object*)0x0 ) && ( cVar4 = RefCounted::unreference() ),cVar4 != '\0' )) &&( cVar4 = cVar4 != '\0' )(**(code**)( *(long*)pOVar6 + 0x140 ))(pOVar6);
      if (lVar3 == *(long*)( in_FS_OFFSET + 0x28 )) {
         Memory::free_static(pOVar6, false);
         return;
      }

      goto LAB_00103862;
   }

}
if (lVar3 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return;
}
LAB_00103862:/* WARNING: Subroutine does not return */__stack_chk_fail();}/* SpinBox::_validate_property(PropertyInfo&) const */void SpinBox::_validate_property(SpinBox *this, PropertyInfo *param_1) {
   char cVar1;
   cVar1 = String::operator ==((String*)( param_1 + 8 ), "exp_edit");
   if (cVar1 != '\0') {
      *(undefined4*)( param_1 + 0x28 ) = 0;
   }

   return;
}
/* SpinBox::set_update_on_text_changed(bool) */void SpinBox::set_update_on_text_changed(SpinBox *this, bool param_1) {
   long *plVar1;
   code *pcVar2;
   long in_FS_OFFSET;
   SpinBox aSStack_38[24];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (this[0x9f8] != (SpinBox)param_1) {
      plVar1 = *(long**)( this + 0x9f0 );
      this[0x9f8] = (SpinBox)param_1;
      if (param_1) {
         pcVar2 = *(code**)( *plVar1 + 0x108 );
         create_custom_callable_function_pointer<SpinBox,String_const&>(aSStack_38, (char*)this, (_func_void_String_ptr*)"&SpinBox::_text_changed");
         ( *pcVar2 )(plVar1, SceneStringNames::singleton + 0x270, aSStack_38, 1);
         Callable::~Callable((Callable*)aSStack_38);
      }
 else {
         pcVar2 = *(code**)( *plVar1 + 0x110 );
         create_custom_callable_function_pointer<SpinBox,String_const&>(aSStack_38, (char*)this, (_func_void_String_ptr*)"&SpinBox::_text_changed");
         ( *pcVar2 )(plVar1, SceneStringNames::singleton + 0x270, aSStack_38);
         Callable::~Callable((Callable*)aSStack_38);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* SpinBox::SpinBox() */void SpinBox::SpinBox(SpinBox *this) {
   StringName *pSVar1;
   long *plVar2;
   code *pcVar3;
   undefined8 uVar4;
   long lVar5;
   undefined8 uVar6;
   LineEdit *this_00;
   CallableCustom *pCVar7;
   Timer *this_01;
   long in_FS_OFFSET;
   long local_60;
   long local_58[3];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Range::Range((Range*)this);
   uVar6 = _UNK_001168f8;
   uVar4 = __LC57;
   *(undefined2*)( this + 0xa60 ) = 0;
   *(undefined***)this = &PTR__initialize_classv_00115d98;
   *(undefined1(*) [16])( this + 0x9fc ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0xa0c ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0xa28 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0xa38 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0xa80 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0xa90 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0xaa0 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0xab0 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0xac0 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0xad0 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0xae0 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0xaf0 ) = (undefined1[16])0x0;
   for (int i = 0; i < 6; i++) {
      *(undefined8*)( this + ( 16*i + 2824 ) ) = uVar4;
      *(undefined8*)( this + ( 16*i + 2832 ) ) = uVar6;
   }

   *(undefined2*)( this + 0xa7c ) = 0;
   *(undefined2*)( this + 0x9f8 ) = 0x100;
   for (int i = 0; i < 3; i++) {
      *(undefined8*)( this + ( 44*i + 2544 ) ) = 0;
   }

   this[0xa50] = (SpinBox)0x0;
   for (int i = 0; i < 3; i++) {
      *(undefined8*)( this + ( 12*i + 2648 ) ) = 0;
   }

   *(undefined4*)( this + 0xa78 ) = 0;
   *(undefined8*)( this + 0xb00 ) = 0;
   *(undefined8*)( this + 0xb68 ) = uVar4;
   *(undefined8*)( this + 0xb70 ) = uVar6;
   *(undefined8*)( this + 0xb98 ) = 0;
   *(undefined4*)( this + 0xba0 ) = 0;
   this[0xba4] = (SpinBox)0x0;
   *(undefined8*)( this + 0xb78 ) = uVar4;
   *(undefined8*)( this + 0xb80 ) = uVar6;
   *(undefined1(*) [16])( this + 0xb88 ) = (undefined1[16])0x0;
   this_00 = (LineEdit*)operator_new(0xbb0, "");
   local_58[0] = 0;
   LineEdit::LineEdit(this_00, (String*)local_58);
   postinitialize_handler((Object*)this_00);
   *(LineEdit**)( this + 0x9f0 ) = this_00;
   CowData<char32_t>::_unref((CowData<char32_t>*)local_58);
   LineEdit::set_emoji_menu_enabled(SUB81(*(undefined8*)( this + 0x9f0 ), 0));
   Node::add_child(this, *(undefined8*)( this + 0x9f0 ), 0, 1);
   pSVar1 = *(StringName**)( this + 0x9f0 );
   StringName::StringName((StringName*)local_58, "SpinBoxInnerLineEdit", false);
   Control::set_theme_type_variation(pSVar1);
   if (( StringName::configured != '\0' ) && ( local_58[0] != 0 )) {
      StringName::unref();
   }

   Control::set_anchors_and_offsets_preset(*(undefined8*)( this + 0x9f0 ), 0xf, 0, 0);
   Control::set_mouse_filter(*(undefined8*)( this + 0x9f0 ), 1);
   LineEdit::set_horizontal_alignment(*(undefined8*)( this + 0x9f0 ), 0);
   plVar2 = *(long**)( this + 0x9f0 );
   pcVar3 = *(code**)( *plVar2 + 0x108 );
   create_custom_callable_function_pointer<SpinBox,String_const&>((SpinBox*)local_58, (char*)this, (_func_void_String_ptr*)"&SpinBox::_text_submitted");
   ( *pcVar3 )(plVar2, SceneStringNames::singleton + 0x278, (CowData<char32_t>*)local_58, 1);
   Callable::~Callable((Callable*)local_58);
   plVar2 = *(long**)( this + 0x9f0 );
   pcVar3 = *(code**)( *plVar2 + 0x108 );
   pCVar7 = (CallableCustom*)operator_new(0x48, "");
   CallableCustom::CallableCustom(pCVar7);
   *(undefined**)( pCVar7 + 0x20 ) = &_LC42;
   *(undefined1(*) [16])( pCVar7 + 0x30 ) = (undefined1[16])0x0;
   *(undefined***)pCVar7 = &PTR_hash_00116228;
   *(undefined8*)( pCVar7 + 0x40 ) = 0;
   uVar4 = *(undefined8*)( this + 0x60 );
   *(undefined8*)( pCVar7 + 0x10 ) = 0;
   *(undefined8*)( pCVar7 + 0x30 ) = uVar4;
   *(code**)( pCVar7 + 0x38 ) = _line_edit_editing_toggled;
   *(SpinBox**)( pCVar7 + 0x28 ) = this;
   CallableCustomMethodPointerBase::_setup((uint*)pCVar7, (int)pCVar7 + 0x28);
   *(char**)( pCVar7 + 0x20 ) = "SpinBox::_line_edit_editing_toggled";
   Callable::Callable((Callable*)local_58, pCVar7);
   StringName::StringName((StringName*)&local_60, "editing_toggled", false);
   ( *pcVar3 )(plVar2, (StringName*)&local_60, (CowData<char32_t>*)local_58, 1);
   if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
      StringName::unref();
   }

   Callable::~Callable((Callable*)local_58);
   plVar2 = *(long**)( this + 0x9f0 );
   pcVar3 = *(code**)( *plVar2 + 0x108 );
   pCVar7 = (CallableCustom*)operator_new(0x48, "");
   CallableCustom::CallableCustom(pCVar7);
   *(undefined**)( pCVar7 + 0x20 ) = &_LC42;
   *(undefined1(*) [16])( pCVar7 + 0x30 ) = (undefined1[16])0x0;
   *(undefined***)pCVar7 = &PTR_hash_001162b8;
   *(undefined8*)( pCVar7 + 0x40 ) = 0;
   uVar4 = *(undefined8*)( this + 0x60 );
   *(undefined8*)( pCVar7 + 0x10 ) = 0;
   *(undefined8*)( pCVar7 + 0x30 ) = uVar4;
   *(code**)( pCVar7 + 0x38 ) = _line_edit_input;
   *(SpinBox**)( pCVar7 + 0x28 ) = this;
   CallableCustomMethodPointerBase::_setup((uint*)pCVar7, (int)pCVar7 + 0x28);
   *(char**)( pCVar7 + 0x20 ) = "SpinBox::_line_edit_input";
   Callable::Callable((Callable*)local_58, pCVar7);
   ( *pcVar3 )(plVar2, SceneStringNames::singleton + 0x28, (CowData<char32_t>*)local_58, 0);
   Callable::~Callable((Callable*)local_58);
   this_01 = (Timer*)operator_new(0x428, "");
   Timer::Timer(this_01);
   postinitialize_handler((Object*)this_01);
   lVar5 = *(long*)this_01;
   *(Timer**)( this + 0xa28 ) = this_01;
   pcVar3 = *(code**)( lVar5 + 0x108 );
   pCVar7 = (CallableCustom*)operator_new(0x48, "");
   CallableCustom::CallableCustom(pCVar7);
   *(undefined**)( pCVar7 + 0x20 ) = &_LC42;
   *(undefined1(*) [16])( pCVar7 + 0x30 ) = (undefined1[16])0x0;
   *(undefined***)pCVar7 = &PTR_hash_00116348;
   *(undefined8*)( pCVar7 + 0x40 ) = 0;
   uVar4 = *(undefined8*)( this + 0x60 );
   *(undefined8*)( pCVar7 + 0x10 ) = 0;
   *(undefined8*)( pCVar7 + 0x30 ) = uVar4;
   *(code**)( pCVar7 + 0x38 ) = _range_click_timeout;
   *(SpinBox**)( pCVar7 + 0x28 ) = this;
   CallableCustomMethodPointerBase::_setup((uint*)pCVar7, (int)pCVar7 + 0x28);
   *(char**)( pCVar7 + 0x20 ) = "SpinBox::_range_click_timeout";
   Callable::Callable((Callable*)local_58, pCVar7);
   StringName::StringName((StringName*)&local_60, "timeout", false);
   ( *pcVar3 )(this_01, (StringName*)&local_60, (CowData<char32_t>*)local_58, 0);
   if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
      StringName::unref();
   }

   Callable::~Callable((Callable*)local_58);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      Node::add_child(this, *(undefined8*)( this + 0xa28 ), 0, 1);
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* SpinBox::_update_text(bool) */void SpinBox::_update_text(SpinBox *this, bool param_1) {
   SpinBox SVar1;
   code *pcVar2;
   char cVar3;
   int iVar4;
   wchar32 wVar5;
   String *pSVar6;
   Object *pOVar7;
   long in_FS_OFFSET;
   double dVar8;
   undefined *local_70;
   undefined8 local_68;
   undefined8 local_60;
   undefined *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   dVar8 = (double)Range::get_step();
   if (( this[0xa50] != (SpinBox)0x0 ) && ( *(double*)( this + 0xa48 ) != 0.0 )) {
      dVar8 = *(double*)( this + 0xa48 );
   }

   Math::range_step_decimals(dVar8);
   dVar8 = (double)Range::get_value();
   String::num(dVar8, (int)(String*)&local_70);
   cVar3 = Control::is_localizing_numeral_system();
   if (cVar3 != '\0') {
      pOVar7 = *(Object**)( TextServerManager::singleton + 0x178 );
      if (pOVar7 == (Object*)0x0) {
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
         pOVar7 = (Object*)0x0;
      }

      pcVar2 = *(code**)( *(long*)pOVar7 + 0x7c0 );
      local_60 = 0;
      local_50 = 0;
      local_58 = &_LC42;
      String::parse_latin1((StrRange*)&local_60);
      ( *pcVar2 )((CowData<char32_t>*)&local_58, pOVar7, (String*)&local_70, (StrRange*)&local_60);
      if (local_70 != local_58) {
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         local_70 = local_58;
         local_58 = (undefined*)0x0;
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      cVar3 = RefCounted::unreference();
      if (( cVar3 != '\0' ) && ( cVar3 = predelete_handler(pOVar7) ),cVar3 != '\0') {
         ( **(code**)( *(long*)pOVar7 + 0x140 ) )(pOVar7);
         Memory::free_static(pOVar7, false);
      }

   }

   if (( param_1 ) && ( cVar3 = String::operator ==((String*)&local_70, (String*)( this + 0xa40 )) ),cVar3 != '\0') goto LAB_00104027;
   if (*(undefined**)( this + 0xa40 ) != local_70) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0xa40 ), (CowData*)&local_70);
   }

   cVar3 = LineEdit::is_editing();
   if (cVar3 == '\0') {
      if (( *(long*)( this + 0xa30 ) != 0 ) && ( 1 < *(uint*)( *(long*)( this + 0xa30 ) + -8 ) )) {
         local_68 = 0;
         local_58 = &_LC81;
         local_50 = 1;
         String::parse_latin1((StrRange*)&local_68);
         String::operator +((String*)&local_60, (String*)( this + 0xa30 ));
         String::operator +((String*)&local_58, (String*)&local_60);
         if (local_70 != local_58) {
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
            local_70 = local_58;
            local_58 = (undefined*)0x0;
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
      }

      if (( *(long*)( this + 0xa38 ) == 0 ) || ( *(uint*)( *(long*)( this + 0xa38 ) + -8 ) < 2 )) goto LAB_0010400f;
      operator+((char *)&
      local_58,(String*)&_LC81;
      String::operator +=((String*)&local_70, (String*)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      SVar1 = this[0x9f9];
      pSVar6 = *(String**)( this + 0x9f0 );
   }
 else {
      LAB_0010400f:SVar1 = this[0x9f9];
      pSVar6 = *(String**)( this + 0x9f0 );
   }

   if (( SVar1 == (SpinBox)0x0 ) && ( this[0x9f8] != (SpinBox)0x0 )) {
      LineEdit::get_text();
      String::replace((char*)&local_58, (char*)&local_60);
      wVar5 = (wchar32)(CowData<char32_t>*)&local_58;
      iVar4 = String::find_char(wVar5, 0x2e);
      if (iVar4 == -1) {
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         dVar8 = (double)Range::get_value();
         String::num(dVar8, wVar5);
         if (local_70 != local_58) {
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
            local_70 = local_58;
            local_58 = (undefined*)0x0;
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         pSVar6 = *(String**)( this + 0x9f0 );
      }
 else {
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         pSVar6 = *(String**)( this + 0x9f0 );
      }

   }

   LineEdit::set_text_with_selection(pSVar6);
   LAB_00104027:CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* SpinBox::set_suffix(String const&) */void SpinBox::set_suffix(SpinBox *this, String *param_1) {
   char cVar1;
   cVar1 = String::operator ==((String*)( this + 0xa38 ), param_1);
   if (cVar1 != '\0') {
      return;
   }

   if (*(long*)( this + 0xa38 ) != *(long*)param_1) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0xa38 ), (CowData*)param_1);
   }

   _update_text(this, false);
   return;
}
/* SpinBox::set_prefix(String const&) */void SpinBox::set_prefix(SpinBox *this, String *param_1) {
   char cVar1;
   cVar1 = String::operator ==((String*)( this + 0xa30 ), param_1);
   if (cVar1 != '\0') {
      return;
   }

   if (*(long*)( this + 0xa30 ) != *(long*)param_1) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0xa30 ), (CowData*)param_1);
   }

   _update_text(this, false);
   return;
}
/* SpinBox::_notification(int) */void SpinBox::_notification(SpinBox *this, int param_1) {
   int iVar1;
   int iVar2;
   int iVar3;
   int iVar4;
   int iVar5;
   int iVar6;
   int iVar7;
   int iVar8;
   int iVar9;
   long *plVar10;
   code *pcVar11;
   char cVar12;
   byte bVar13;
   SpinBox SVar14;
   int iVar15;
   int iVar16;
   int iVar17;
   int iVar18;
   int iVar19;
   int iVar20;
   undefined8 uVar21;
   int extraout_var;
   long in_FS_OFFSET;
   Rect2 *local_f8;
   Rect2 *local_f0;
   long local_b0;
   long local_a8;
   long *local_a0;
   long *local_98[2];
   int local_88;
   int local_84;
   undefined8 local_80;
   undefined8 local_78;
   undefined8 uStack_70;
   undefined8 local_68;
   undefined8 uStack_60;
   undefined8 local_58;
   float fStack_50;
   float fStack_4c;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (0x31 < param_1) {
      if (param_1 == 0x7da) {
         switchD_0010442b_caseD_31:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            LAB_00104497:CanvasItem::queue_redraw();
            return;
         }

         goto LAB_00104605;
      }

      goto switchD_0010442b_caseD_c;
   }

   if (param_1 < 10) goto switchD_0010442b_caseD_c;
   switch (param_1) {
      case 10:
    _compute_sizes(this);
    _update_text(this,false);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _update_buttons_state_for_current_value(this);
      return;
    }
    goto LAB_00104605;
      case 0xb:
    goto switchD_0010442b_caseD_b;
      case 0x1e:
    _update_text(this,true);
    _compute_sizes(this);
    uVar21 = *(undefined8 *)(this + 0x428);
    local_58 = Control::get_size();
    Vector2::operator_cast_to_Vector2i((Vector2 *)&local_58);
    local_b0 = 0;
    if ((*(long *)(this + 0xac8) != 0) &&
       (local_b0 = *(long *)(this + 0xac8), cVar12 = RefCounted::reference(), cVar12 == '\0')) {
      local_b0 = 0;
    }
    local_a8 = 0;
    if ((*(long *)(this + 0xae8) != 0) &&
       (local_a8 = *(long *)(this + 0xae8), cVar12 = RefCounted::reference(), cVar12 == '\0')) {
      local_a8 = 0;
    }
    local_a0 = (long *)0x0;
    Ref<Texture2D>::operator=((Ref<Texture2D> *)&local_a0,*(Ref **)(this + 0xa88));
    local_98[0] = (long *)0x0;
    if ((*(long **)(this + 0xaa8) != (long *)0x0) &&
       (local_98[0] = *(long **)(this + 0xaa8), cVar12 = RefCounted::reference(), cVar12 == '\0')) {
      local_98[0] = (long *)0x0;
    }
    local_78 = *(undefined8 *)(this + 0xb08);
    uStack_70 = *(undefined8 *)(this + 0xb10);
    local_68 = *(undefined8 *)(this + 0xb48);
    uStack_60 = *(undefined8 *)(this + 0xb50);
    bVar13 = LineEdit::is_editable();
    SVar14 = (SpinBox)(bVar13 ^ 1);
    if ((this[0xa7a] == (SpinBox)0x0) && (SVar14 == (SpinBox)0x0)) {
      if (this[0xa79] == (SpinBox)0x0) {
        if ((this[0xa78] == (SpinBox)0x0) || (this[0xa61] != (SpinBox)0x0)) goto LAB_0010474f;
        Ref<StyleBox>::operator=((Ref<StyleBox> *)&local_b0,*(Ref **)(this + 0xad0));
        Ref<Texture2D>::operator=((Ref<Texture2D> *)&local_a0,*(Ref **)(this + 0xa90));
        SVar14 = this[0xa7d];
        local_78 = *(undefined8 *)(this + 0xb18);
        uStack_70 = *(undefined8 *)(this + 0xb20);
      }
      else {
        if (this[0xa61] == (SpinBox)0x0) {
          Ref<StyleBox>::operator=((Ref<StyleBox> *)&local_b0,*(Ref **)(this + 0xad8));
          Ref<Texture2D>::operator=((Ref<Texture2D> *)&local_a0,*(Ref **)(this + 0xa98));
          SVar14 = this[0xa7d];
          local_78 = *(undefined8 *)(this + 0xb28);
          uStack_70 = *(undefined8 *)(this + 0xb30);
          goto joined_r0x00104b6a;
        }
LAB_0010474f:
        SVar14 = this[0xa7d];
      }
      if (SVar14 != (SpinBox)0x0) goto LAB_00104770;
LAB_00104b70:
      if (this[0xa7c] == (SpinBox)0x0) {
        if ((this[0xa7b] != (SpinBox)0x0) && (this[0xa61] == (SpinBox)0x0)) {
          Ref<StyleBox>::operator=((Ref<StyleBox> *)&local_a8,*(Ref **)(this + 0xaf0));
          Ref<Texture2D>::operator=((Ref<Texture2D> *)local_98,*(Ref **)(this + 0xab0));
          local_68 = *(undefined8 *)(this + 0xb58);
          uStack_60 = *(undefined8 *)(this + 0xb60);
        }
      }
      else if (this[0xa61] == (SpinBox)0x0) {
        Ref<StyleBox>::operator=((Ref<StyleBox> *)&local_a8,*(Ref **)(this + 0xaf8));
        Ref<Texture2D>::operator=((Ref<Texture2D> *)local_98,*(Ref **)(this + 0xab8));
        local_68 = *(undefined8 *)(this + 0xb68);
        uStack_60 = *(undefined8 *)(this + 0xb70);
      }
    }
    else {
      Ref<StyleBox>::operator=((Ref<StyleBox> *)&local_b0,*(Ref **)(this + 0xae0));
      Ref<Texture2D>::operator=((Ref<Texture2D> *)&local_a0,*(Ref **)(this + 0xaa0));
      local_78 = *(undefined8 *)(this + 0xb38);
      uStack_70 = *(undefined8 *)(this + 0xb40);
      if (this[0xa7d] == (SpinBox)0x0) {
joined_r0x00104b6a:
        if (SVar14 == (SpinBox)0x0) goto LAB_00104b70;
      }
LAB_00104770:
      Ref<StyleBox>::operator=((Ref<StyleBox> *)&local_a8,*(Ref **)(this + 0xb00));
      Ref<Texture2D>::operator=((Ref<Texture2D> *)local_98,*(Ref **)(this + 0xac0));
      local_68 = *(undefined8 *)(this + 0xb78);
      uStack_60 = *(undefined8 *)(this + 0xb80);
    }
    local_f0 = (Rect2 *)&local_b0;
    local_f8 = (Rect2 *)&local_a8;
    iVar1 = *(int *)(this + 0xa00);
    iVar2 = *(int *)(this + 0xa08);
    iVar15 = (**(code **)(**(long **)(this + 0xa80) + 0x1c8))();
    iVar16 = (**(code **)(**(long **)(this + 0xa80) + 0x1d0))();
    iVar3 = *(int *)(this + 0xa00);
    iVar4 = *(int *)(this + 0xa08);
    iVar17 = (**(code **)(*local_a0 + 0x1c8))();
    iVar5 = *(int *)(this + 0xa0c);
    iVar18 = (**(code **)(*local_a0 + 0x1d0))();
    iVar6 = *(int *)(this + 0xa00);
    iVar7 = *(int *)(this + 0xa08);
    iVar19 = (**(code **)(*local_98[0] + 0x1c8))();
    iVar8 = *(int *)(this + 0xa10);
    iVar9 = *(int *)(this + 0xa14);
    iVar20 = (**(code **)(*local_98[0] + 0x1d0))();
    fStack_50 = (float)(int)*(undefined8 *)(this + 0xa00);
    fStack_4c = (float)*(int *)(this + 0xa04);
    local_58 = CONCAT44((float)*(int *)(this + 0xa18),(float)*(int *)(this + 0xa08));
    CanvasItem::draw_style_box((Ref *)this,(Rect2 *)(this + 0xb90));
    fStack_50 = (float)*(int *)(this + 0xa20);
    local_58 = (ulong)(uint)(float)*(int *)(this + 0xa1c);
    fStack_4c = (float)extraout_var;
    CanvasItem::draw_style_box((Ref *)this,(Rect2 *)(this + 0xb88));
    fStack_4c = (float)*(int *)(this + 0xa0c);
    fStack_50 = (float)*(int *)(this + 0xa00);
    local_58 = (ulong)(uint)(float)*(int *)(this + 0xa08);
    CanvasItem::draw_style_box((Ref *)this,local_f0);
    fStack_50 = (float)*(int *)(this + 0xa00);
    fStack_4c = (float)*(int *)(this + 0xa10);
    local_58 = CONCAT44((float)*(int *)(this + 0xa14),(float)*(int *)(this + 0xa08));
    CanvasItem::draw_style_box((Ref *)this,local_f8);
    plVar10 = *(long **)(this + 0xa80);
    pcVar11 = *(code **)(*plVar10 + 0x1f0);
    local_58 = CONCAT44(_LC86,_LC86);
    fStack_50 = (float)_LC86;
    fStack_4c = (float)_LC86;
    local_84 = (extraout_var - iVar16) / 2;
    local_88 = (iVar1 - iVar15) / 2 + iVar2;
    local_80 = Vector2i::operator_cast_to_Vector2((Vector2i *)&local_88);
    (*pcVar11)(plVar10,uVar21,(Vector2i *)&local_80,(Vector2 *)&local_58,0);
    local_80 = CONCAT44((iVar5 - iVar18) / 2,(iVar3 - iVar17) / 2 + iVar4);
    local_58 = Vector2i::operator_cast_to_Vector2((Vector2i *)&local_80);
    CanvasItem::draw_texture((Ref *)this,(Vector2 *)&local_a0,(Vector2 *)&local_58);
    local_80 = CONCAT44((iVar8 - iVar20) / 2 + iVar9,(iVar6 - iVar19) / 2 + iVar7);
    local_58 = Vector2i::operator_cast_to_Vector2((Vector2i *)&local_80);
    CanvasItem::draw_texture((Ref *)this,(Vector2 *)local_98,(Vector2 *)&local_58);
    Ref<Texture2D>::unref((Ref<Texture2D> *)local_98);
    Ref<Texture2D>::unref((Ref<Texture2D> *)&local_a0);
    Ref<StyleBox>::unref((Ref<StyleBox> *)local_f8);
    Ref<StyleBox>::unref((Ref<StyleBox> *)local_f0);
    break;
      case 0x1f:
    this[0xa60] = (SpinBox)0x0;
switchD_0010442b_caseD_b:
    if (this[0xa61] != (SpinBox)0x0) {
      this[0xa61] = (SpinBox)0x0;
      uVar21 = Input::get_singleton();
      Input::set_mouse_mode(uVar21,1);
      Control::warp_mouse((Vector2 *)this);
      uVar21 = Input::get_singleton();
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        Input::set_mouse_mode(uVar21,0);
        return;
      }
      goto LAB_00104605;
    }
    break;
      case 0x2a:
    if ((this[0xa78] != (SpinBox)0x0) || (this[0xa7b] != (SpinBox)0x0)) {
      this[0xa78] = (SpinBox)0x0;
      this[0xa7b] = (SpinBox)0x0;
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00104605;
      goto LAB_00104497;
    }
    break;
      case 0x2d:
    create_custom_callable_function_pointer<Control>
              ((Control *)local_98,(char *)this,(_func_void *)"&Control::update_minimum_size");
    Variant::Variant((Variant *)&local_58,0);
    Callable::call_deferredp((Variant **)local_98,0);
    if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
    }
    Callable::~Callable((Callable *)local_98);
    create_custom_callable_function_pointer<Control>
              ((Control *)local_98,*(char **)(this + 0x9f0),
               (_func_void *)"&Control::update_minimum_size");
    Variant::Variant((Variant *)&local_58,0);
    Callable::call_deferredp((Variant **)local_98,0);
    if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
    }
    Callable::~Callable((Callable *)local_98);
    break;
      case 0x31:
    goto switchD_0010442b_caseD_31;
   }

   switchD_0010442b_caseD_c:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_00104605:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* SpinBox::_bind_methods() */void SpinBox::_bind_methods(void) {
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
   long local_a8[6];
   char *local_78;
   undefined8 local_70;
   undefined8 local_68;
   undefined8 uStack_60;
   code *pcStack_58;
   code *pcStack_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_70 = 0;
   local_78 = "alignment";
   uVar3 = (uint)(_Function_base*)&local_68;
   local_68 = &local_78;
   D_METHODP((char*)local_a8, (char***)"set_horizontal_alignment", uVar3);
   uStack_60 = 0;
   pcStack_58 = (code*)0x0;
   local_68._0_4_ = 0;
   local_68._4_4_ = 0;
   pMVar1 = create_method_bind<SpinBox,HorizontalAlignment>(set_horizontal_alignment);
   ClassDB::bind_methodfi(1, pMVar1, false, (MethodDefinition*)local_a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_68] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)local_a8);
   D_METHODP((char*)local_a8, (char***)"get_horizontal_alignment", 0);
   uStack_60 = 0;
   pcStack_58 = (code*)0x0;
   local_68._0_4_ = 0;
   local_68._4_4_ = 0;
   pMVar1 = create_method_bind<SpinBox,HorizontalAlignment>(get_horizontal_alignment);
   ClassDB::bind_methodfi(1, pMVar1, false, (MethodDefinition*)local_a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_68] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)local_a8);
   local_70 = 0;
   local_78 = "suffix";
   local_68 = &local_78;
   D_METHODP((char*)local_a8, (char***)"set_suffix", uVar3);
   uStack_60 = 0;
   pcStack_58 = (code*)0x0;
   local_68._0_4_ = 0;
   local_68._4_4_ = 0;
   pMVar1 = create_method_bind<SpinBox,String_const&>(set_suffix);
   ClassDB::bind_methodfi(1, pMVar1, false, (MethodDefinition*)local_a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_68] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)local_a8);
   D_METHODP((char*)local_a8, (char***)"get_suffix", 0);
   uStack_60 = 0;
   pcStack_58 = (code*)0x0;
   local_68._0_4_ = 0;
   local_68._4_4_ = 0;
   pMVar1 = create_method_bind<SpinBox,String>(get_suffix);
   ClassDB::bind_methodfi(1, pMVar1, false, (MethodDefinition*)local_a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_68] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)local_a8);
   local_70 = 0;
   local_78 = "prefix";
   local_68 = &local_78;
   D_METHODP((char*)local_a8, (char***)"set_prefix", uVar3);
   uStack_60 = 0;
   pcStack_58 = (code*)0x0;
   local_68._0_4_ = 0;
   local_68._4_4_ = 0;
   pMVar1 = create_method_bind<SpinBox,String_const&>(set_prefix);
   ClassDB::bind_methodfi(1, pMVar1, false, (MethodDefinition*)local_a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_68] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)local_a8);
   D_METHODP((char*)local_a8, (char***)"get_prefix", 0);
   uStack_60 = 0;
   pcStack_58 = (code*)0x0;
   local_68._0_4_ = 0;
   local_68._4_4_ = 0;
   pMVar1 = create_method_bind<SpinBox,String>(get_prefix);
   ClassDB::bind_methodfi(1, pMVar1, false, (MethodDefinition*)local_a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_68] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)local_a8);
   local_78 = "enabled";
   local_70 = 0;
   local_68 = &local_78;
   D_METHODP((char*)local_a8, (char***)"set_editable", uVar3);
   uStack_60 = 0;
   pcStack_58 = (code*)0x0;
   local_68._0_4_ = 0;
   local_68._4_4_ = 0;
   pMVar1 = create_method_bind<SpinBox,bool>(set_editable);
   ClassDB::bind_methodfi(1, pMVar1, false, (MethodDefinition*)local_a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_68] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)local_a8);
   local_70 = 0;
   local_78 = "arrow_step";
   local_68 = &local_78;
   D_METHODP((char*)local_a8, (char***)"set_custom_arrow_step", uVar3);
   uStack_60 = 0;
   pcStack_58 = (code*)0x0;
   local_68._0_4_ = 0;
   local_68._4_4_ = 0;
   pMVar1 = create_method_bind<SpinBox,double>(set_custom_arrow_step);
   ClassDB::bind_methodfi(1, pMVar1, false, (MethodDefinition*)local_a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_68] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)local_a8);
   D_METHODP((char*)local_a8, (char***)"get_custom_arrow_step", 0);
   uStack_60 = 0;
   pcStack_58 = (code*)0x0;
   local_68._0_4_ = 0;
   local_68._4_4_ = 0;
   pMVar1 = create_method_bind<SpinBox,double>(get_custom_arrow_step);
   ClassDB::bind_methodfi(1, pMVar1, false, (MethodDefinition*)local_a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_68] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)local_a8);
   D_METHODP((char*)local_a8, (char***)"is_editable", 0);
   uStack_60 = 0;
   pcStack_58 = (code*)0x0;
   local_68._0_4_ = 0;
   local_68._4_4_ = 0;
   pMVar1 = create_method_bind<SpinBox,bool>(is_editable);
   ClassDB::bind_methodfi(1, pMVar1, false, (MethodDefinition*)local_a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_68] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)local_a8);
   local_78 = "enabled";
   local_70 = 0;
   local_68 = &local_78;
   D_METHODP((char*)local_a8, (char***)"set_update_on_text_changed", uVar3);
   uStack_60 = 0;
   pcStack_58 = (code*)0x0;
   local_68._0_4_ = 0;
   local_68._4_4_ = 0;
   pMVar1 = create_method_bind<SpinBox,bool>(set_update_on_text_changed);
   ClassDB::bind_methodfi(1, pMVar1, false, (MethodDefinition*)local_a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_68] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)local_a8);
   D_METHODP((char*)local_a8, (char***)"get_update_on_text_changed", 0);
   uStack_60 = 0;
   pcStack_58 = (code*)0x0;
   local_68._0_4_ = 0;
   local_68._4_4_ = 0;
   pMVar1 = create_method_bind<SpinBox,bool>(get_update_on_text_changed);
   ClassDB::bind_methodfi(1, pMVar1, false, (MethodDefinition*)local_a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_68] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)local_a8);
   local_78 = "enabled";
   local_70 = 0;
   local_68 = &local_78;
   D_METHODP((char*)local_a8, (char***)"set_select_all_on_focus", uVar3);
   uStack_60 = 0;
   pcStack_58 = (code*)0x0;
   local_68._0_4_ = 0;
   local_68._4_4_ = 0;
   pMVar1 = create_method_bind<SpinBox,bool>(set_select_all_on_focus);
   ClassDB::bind_methodfi(1, pMVar1, false, (MethodDefinition*)local_a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_68] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)local_a8);
   D_METHODP((char*)local_a8, (char***)"is_select_all_on_focus", 0);
   uStack_60 = 0;
   pcStack_58 = (code*)0x0;
   local_68._0_4_ = 0;
   local_68._4_4_ = 0;
   pMVar1 = create_method_bind<SpinBox,bool>(is_select_all_on_focus);
   ClassDB::bind_methodfi(1, pMVar1, false, (MethodDefinition*)local_a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_68] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)local_a8);
   D_METHODP((char*)local_a8, (char***)"apply", 0);
   uStack_60 = 0;
   pcStack_58 = (code*)0x0;
   local_68._0_4_ = 0;
   local_68._4_4_ = 0;
   pMVar1 = create_method_bind<SpinBox>(apply);
   ClassDB::bind_methodfi(1, pMVar1, false, (MethodDefinition*)local_a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_68] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)local_a8);
   D_METHODP((char*)local_a8, (char***)"get_line_edit", 0);
   uStack_60 = 0;
   pcStack_58 = (code*)0x0;
   local_68._0_4_ = 0;
   local_68._4_4_ = 0;
   pMVar1 = create_method_bind<SpinBox,LineEdit*>(get_line_edit);
   ClassDB::bind_methodfi(1, pMVar1, false, (MethodDefinition*)local_a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_68] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)local_a8);
   _scs_create((char*)&local_b8, true);
   _scs_create((char*)&local_c0, true);
   local_c8 = 0;
   local_d0 = 0;
   String::parse_latin1((String*)&local_d0, "Left,Center,Right,Fill");
   local_d8 = 0;
   String::parse_latin1((String*)&local_d8, "alignment");
   PropertyInfo::PropertyInfo((PropertyInfo*)local_a8, 2, (String*)&local_d8, 2, (String*)&local_d0, 6, &local_c8);
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "SpinBox");
   StringName::StringName((StringName*)&local_b0, (String*)&local_e0, false);
   ClassDB::add_property((StringName*)&local_b0, (PropertyInfo*)local_a8, (StringName*)&local_c0, (StringName*)&local_b8, -1);
   if (( StringName::configured != '\0' ) && ( local_b0 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   PropertyInfo::~PropertyInfo((PropertyInfo*)local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
   if (StringName::configured != '\0') {
      if (local_c8 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010571e;
      }

      if (local_c0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010571e;
      }

      if (local_b8 != 0) {
         StringName::unref();
      }

   }

   LAB_0010571e:_scs_create((char*)&local_b8, true);
   _scs_create((char*)&local_c0, true);
   local_c8 = 0;
   local_d0 = 0;
   String::parse_latin1((String*)&local_d0, "");
   local_d8 = 0;
   String::parse_latin1((String*)&local_d8, "editable");
   PropertyInfo::PropertyInfo((PropertyInfo*)local_a8, 1, (String*)&local_d8, 0, (String*)&local_d0, 6, &local_c8);
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "SpinBox");
   StringName::StringName((StringName*)&local_b0, (String*)&local_e0, false);
   ClassDB::add_property((StringName*)&local_b0, (PropertyInfo*)local_a8, (StringName*)&local_c0, (StringName*)&local_b8, -1);
   if (( StringName::configured != '\0' ) && ( local_b0 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   PropertyInfo::~PropertyInfo((PropertyInfo*)local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
   if (StringName::configured != '\0') {
      if (local_c8 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010586c;
      }

      if (local_c0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010586c;
      }

      if (local_b8 != 0) {
         StringName::unref();
      }

   }

   LAB_0010586c:_scs_create((char*)&local_b8, true);
   _scs_create((char*)&local_c0, true);
   local_c8 = 0;
   local_d0 = 0;
   String::parse_latin1((String*)&local_d0, "");
   local_d8 = 0;
   String::parse_latin1((String*)&local_d8, "update_on_text_changed");
   PropertyInfo::PropertyInfo((PropertyInfo*)local_a8, 1, (String*)&local_d8, 0, (String*)&local_d0, 6, &local_c8);
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "SpinBox");
   StringName::StringName((StringName*)&local_b0, (String*)&local_e0, false);
   ClassDB::add_property((StringName*)&local_b0, (PropertyInfo*)local_a8, (StringName*)&local_c0, (StringName*)&local_b8, -1);
   if (( StringName::configured != '\0' ) && ( local_b0 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   PropertyInfo::~PropertyInfo((PropertyInfo*)local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
   if (StringName::configured != '\0') {
      if (local_c8 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_001059bb;
      }

      if (local_c0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_001059bb;
      }

      if (local_b8 != 0) {
         StringName::unref();
      }

   }

   LAB_001059bb:_scs_create((char*)&local_b8, true);
   _scs_create((char*)&local_c0, true);
   local_c8 = 0;
   local_d0 = 0;
   String::parse_latin1((String*)&local_d0, "");
   local_d8 = 0;
   String::parse_latin1((String*)&local_d8, "prefix");
   PropertyInfo::PropertyInfo((PropertyInfo*)local_a8, 4, (String*)&local_d8, 0, (String*)&local_d0, 6, &local_c8);
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "SpinBox");
   StringName::StringName((StringName*)&local_b0, (String*)&local_e0, false);
   ClassDB::add_property((StringName*)&local_b0, (PropertyInfo*)local_a8, (StringName*)&local_c0, (StringName*)&local_b8, -1);
   if (( StringName::configured != '\0' ) && ( local_b0 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   PropertyInfo::~PropertyInfo((PropertyInfo*)local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
   if (StringName::configured != '\0') {
      if (local_c8 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00105b0b;
      }

      if (local_c0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00105b0b;
      }

      if (local_b8 != 0) {
         StringName::unref();
      }

   }

   LAB_00105b0b:_scs_create((char*)&local_b8, true);
   _scs_create((char*)&local_c0, true);
   local_c8 = 0;
   local_d0 = 0;
   String::parse_latin1((String*)&local_d0, "");
   local_d8 = 0;
   String::parse_latin1((String*)&local_d8, "suffix");
   PropertyInfo::PropertyInfo((PropertyInfo*)local_a8, 4, (String*)&local_d8, 0, (String*)&local_d0, 6, &local_c8);
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "SpinBox");
   StringName::StringName((StringName*)&local_b0, (String*)&local_e0, false);
   ClassDB::add_property((StringName*)&local_b0, (PropertyInfo*)local_a8, (StringName*)&local_c0, (StringName*)&local_b8, -1);
   if (( StringName::configured != '\0' ) && ( local_b0 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   PropertyInfo::~PropertyInfo((PropertyInfo*)local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
   if (StringName::configured != '\0') {
      if (local_c8 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00105c5a;
      }

      if (local_c0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00105c5a;
      }

      if (local_b8 != 0) {
         StringName::unref();
      }

   }

   LAB_00105c5a:_scs_create((char*)&local_b8, true);
   _scs_create((char*)&local_c0, true);
   local_c8 = 0;
   local_d0 = 0;
   String::parse_latin1((String*)&local_d0, "0,10000,0.0001,or_greater");
   local_d8 = 0;
   String::parse_latin1((String*)&local_d8, "custom_arrow_step");
   PropertyInfo::PropertyInfo((PropertyInfo*)local_a8, 3, (String*)&local_d8, 1, (String*)&local_d0, 6, &local_c8);
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "SpinBox");
   StringName::StringName((StringName*)&local_b0, (String*)&local_e0, false);
   ClassDB::add_property((StringName*)&local_b0, (PropertyInfo*)local_a8, (StringName*)&local_c0, (StringName*)&local_b8, -1);
   if (( StringName::configured != '\0' ) && ( local_b0 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   PropertyInfo::~PropertyInfo((PropertyInfo*)local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
   if (StringName::configured != '\0') {
      if (local_c8 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00105dab;
      }

      if (local_c0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00105dab;
      }

      if (local_b8 != 0) {
         StringName::unref();
      }

   }

   LAB_00105dab:_scs_create((char*)&local_b8, true);
   _scs_create((char*)&local_c0, true);
   local_c8 = 0;
   local_d0 = 0;
   String::parse_latin1((String*)&local_d0, "");
   local_d8 = 0;
   String::parse_latin1((String*)&local_d8, "select_all_on_focus");
   PropertyInfo::PropertyInfo((PropertyInfo*)local_a8, 1, (String*)&local_d8, 0, (String*)&local_d0, 6, &local_c8);
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "SpinBox");
   StringName::StringName((StringName*)&local_b0, (String*)&local_e0, false);
   ClassDB::add_property((StringName*)&local_b0, (PropertyInfo*)local_a8, (StringName*)&local_c0, (StringName*)&local_b8, -1);
   if (( StringName::configured != '\0' ) && ( local_b0 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   PropertyInfo::~PropertyInfo((PropertyInfo*)local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
   if (StringName::configured != '\0') {
      if (local_c8 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00105ef9;
      }

      if (local_c0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00105ef9;
      }

      if (local_b8 != 0) {
         StringName::unref();
      }

   }

   LAB_00105ef9:uVar2 = ThemeDB::get_singleton();
   local_68._0_4_ = 0;
   local_68._4_4_ = 0;
   uStack_60 = 0;
   pcStack_58 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#1}>::_M_manager;
   pcStack_50 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#1}>::_M_invoke;
   StringName::StringName((StringName*)local_a8, "buttons_vertical_separation", false);
   StringName::StringName((StringName*)&local_b0, "buttons_vertical_separation", false);
   local_c0 = 0;
   String::parse_latin1((String*)&local_c0, "SpinBox");
   StringName::StringName((StringName*)&local_b8, (String*)&local_c0, false);
   ThemeDB::bind_class_item(uVar2, 1, (StringName*)&local_b8, (StringName*)&local_b0, (MethodDefinition*)local_a8, (_Function_base*)&local_68);
   if (( StringName::configured != '\0' ) && ( local_b8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   if (StringName::configured != '\0') {
      if (local_b0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00105fe4;
      }

      if (local_a8[0] != 0) {
         StringName::unref();
      }

   }

   LAB_00105fe4:std::_Function_base::~_Function_base((_Function_base*)&local_68);
   uVar2 = ThemeDB::get_singleton();
   local_68._0_4_ = 0;
   local_68._4_4_ = 0;
   uStack_60 = 0;
   pcStack_58 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#2}>::_M_manager;
   pcStack_50 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#2}>::_M_invoke;
   StringName::StringName((StringName*)local_a8, "field_and_buttons_separation", false);
   StringName::StringName((StringName*)&local_b0, "field_and_buttons_separation", false);
   local_c0 = 0;
   String::parse_latin1((String*)&local_c0, "SpinBox");
   StringName::StringName((StringName*)&local_b8, (String*)&local_c0, false);
   ThemeDB::bind_class_item(uVar2, 1, (StringName*)&local_b8, (StringName*)&local_b0, (MethodDefinition*)local_a8, (_Function_base*)&local_68);
   if (( StringName::configured != '\0' ) && ( local_b8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   if (StringName::configured != '\0') {
      if (local_b0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_001060d7;
      }

      if (local_a8[0] != 0) {
         StringName::unref();
      }

   }

   LAB_001060d7:std::_Function_base::~_Function_base((_Function_base*)&local_68);
   uVar2 = ThemeDB::get_singleton();
   local_68._0_4_ = 0;
   local_68._4_4_ = 0;
   uStack_60 = 0;
   pcStack_58 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#3}>::_M_manager;
   pcStack_50 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#3}>::_M_invoke;
   StringName::StringName((StringName*)local_a8, "buttons_width", false);
   StringName::StringName((StringName*)&local_b0, "buttons_width", false);
   local_c0 = 0;
   String::parse_latin1((String*)&local_c0, "SpinBox");
   StringName::StringName((StringName*)&local_b8, (String*)&local_c0, false);
   ThemeDB::bind_class_item(uVar2, 1, (StringName*)&local_b8, (StringName*)&local_b0, (MethodDefinition*)local_a8, (_Function_base*)&local_68);
   if (( StringName::configured != '\0' ) && ( local_b8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   if (StringName::configured != '\0') {
      if (local_b0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_001061ca;
      }

      if (local_a8[0] != 0) {
         StringName::unref();
      }

   }

   LAB_001061ca:std::_Function_base::~_Function_base((_Function_base*)&local_68);
   uVar2 = ThemeDB::get_singleton();
   local_68._0_4_ = 0;
   local_68._4_4_ = 0;
   uStack_60 = 0;
   pcStack_58 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#4}>::_M_manager;
   pcStack_50 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#4}>::_M_invoke;
   StringName::StringName((StringName*)local_a8, "set_min_buttons_width_from_icons", false);
   StringName::StringName((StringName*)&local_b0, "set_min_buttons_width_from_icons", false);
   local_c0 = 0;
   String::parse_latin1((String*)&local_c0, "SpinBox");
   StringName::StringName((StringName*)&local_b8, (String*)&local_c0, false);
   ThemeDB::bind_class_item(uVar2, 1, (StringName*)&local_b8, (StringName*)&local_b0, (MethodDefinition*)local_a8, (_Function_base*)&local_68);
   if (( StringName::configured != '\0' ) && ( local_b8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   if (StringName::configured != '\0') {
      if (local_b0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_001062bd;
      }

      if (local_a8[0] != 0) {
         StringName::unref();
      }

   }

   LAB_001062bd:std::_Function_base::~_Function_base((_Function_base*)&local_68);
   uVar2 = ThemeDB::get_singleton();
   local_68._0_4_ = 0;
   local_68._4_4_ = 0;
   uStack_60 = 0;
   pcStack_58 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#5}>::_M_manager;
   pcStack_50 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#5}>::_M_invoke;
   StringName::StringName((StringName*)local_a8, "updown", false);
   StringName::StringName((StringName*)&local_b0, "updown_icon", false);
   local_c0 = 0;
   String::parse_latin1((String*)&local_c0, "SpinBox");
   StringName::StringName((StringName*)&local_b8, (String*)&local_c0, false);
   ThemeDB::bind_class_item(uVar2, 4, (StringName*)&local_b8, (StringName*)&local_b0, (MethodDefinition*)local_a8, (_Function_base*)&local_68);
   if (( StringName::configured != '\0' ) && ( local_b8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   if (StringName::configured != '\0') {
      if (local_b0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_001063b0;
      }

      if (local_a8[0] != 0) {
         StringName::unref();
      }

   }

   LAB_001063b0:std::_Function_base::~_Function_base((_Function_base*)&local_68);
   uVar2 = ThemeDB::get_singleton();
   local_68._0_4_ = 0;
   local_68._4_4_ = 0;
   uStack_60 = 0;
   pcStack_58 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#6}>::_M_manager;
   pcStack_50 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#6}>::_M_invoke;
   StringName::StringName((StringName*)local_a8, "up", false);
   StringName::StringName((StringName*)&local_b0, "up_icon", false);
   local_c0 = 0;
   String::parse_latin1((String*)&local_c0, "SpinBox");
   StringName::StringName((StringName*)&local_b8, (String*)&local_c0, false);
   ThemeDB::bind_class_item(uVar2, 4, (StringName*)&local_b8, (StringName*)&local_b0, (MethodDefinition*)local_a8, (_Function_base*)&local_68);
   if (( StringName::configured != '\0' ) && ( local_b8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   if (StringName::configured != '\0') {
      if (local_b0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_001064a3;
      }

      if (local_a8[0] != 0) {
         StringName::unref();
      }

   }

   LAB_001064a3:std::_Function_base::~_Function_base((_Function_base*)&local_68);
   uVar2 = ThemeDB::get_singleton();
   local_68._0_4_ = 0;
   local_68._4_4_ = 0;
   uStack_60 = 0;
   pcStack_58 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#7}>::_M_manager;
   pcStack_50 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#7}>::_M_invoke;
   StringName::StringName((StringName*)local_a8, "up_hover", false);
   StringName::StringName((StringName*)&local_b0, "up_hover_icon", false);
   local_c0 = 0;
   String::parse_latin1((String*)&local_c0, "SpinBox");
   StringName::StringName((StringName*)&local_b8, (String*)&local_c0, false);
   ThemeDB::bind_class_item(uVar2, 4, (StringName*)&local_b8, (StringName*)&local_b0, (MethodDefinition*)local_a8, (_Function_base*)&local_68);
   if (( StringName::configured != '\0' ) && ( local_b8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   if (StringName::configured != '\0') {
      if (local_b0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00106596;
      }

      if (local_a8[0] != 0) {
         StringName::unref();
      }

   }

   LAB_00106596:std::_Function_base::~_Function_base((_Function_base*)&local_68);
   uVar2 = ThemeDB::get_singleton();
   local_68._0_4_ = 0;
   local_68._4_4_ = 0;
   uStack_60 = 0;
   pcStack_58 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#8}>::_M_manager;
   pcStack_50 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#8}>::_M_invoke;
   StringName::StringName((StringName*)local_a8, "up_pressed", false);
   StringName::StringName((StringName*)&local_b0, "up_pressed_icon", false);
   local_c0 = 0;
   String::parse_latin1((String*)&local_c0, "SpinBox");
   StringName::StringName((StringName*)&local_b8, (String*)&local_c0, false);
   ThemeDB::bind_class_item(uVar2, 4, (StringName*)&local_b8, (StringName*)&local_b0, (MethodDefinition*)local_a8, (_Function_base*)&local_68);
   if (( StringName::configured != '\0' ) && ( local_b8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   if (StringName::configured != '\0') {
      if (local_b0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00106689;
      }

      if (local_a8[0] != 0) {
         StringName::unref();
      }

   }

   LAB_00106689:std::_Function_base::~_Function_base((_Function_base*)&local_68);
   uVar2 = ThemeDB::get_singleton();
   local_68._0_4_ = 0;
   local_68._4_4_ = 0;
   uStack_60 = 0;
   pcStack_58 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#9}>::_M_manager;
   pcStack_50 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#9}>::_M_invoke;
   StringName::StringName((StringName*)local_a8, "up_disabled", false);
   StringName::StringName((StringName*)&local_b0, "up_disabled_icon", false);
   local_c0 = 0;
   String::parse_latin1((String*)&local_c0, "SpinBox");
   StringName::StringName((StringName*)&local_b8, (String*)&local_c0, false);
   ThemeDB::bind_class_item(uVar2, 4, (StringName*)&local_b8, (StringName*)&local_b0, (MethodDefinition*)local_a8, (_Function_base*)&local_68);
   if (( StringName::configured != '\0' ) && ( local_b8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   if (StringName::configured != '\0') {
      if (local_b0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010677c;
      }

      if (local_a8[0] != 0) {
         StringName::unref();
      }

   }

   LAB_0010677c:std::_Function_base::~_Function_base((_Function_base*)&local_68);
   uVar2 = ThemeDB::get_singleton();
   local_68._0_4_ = 0;
   local_68._4_4_ = 0;
   uStack_60 = 0;
   pcStack_58 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#10}>::_M_manager;
   pcStack_50 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#10}>::_M_invoke;
   StringName::StringName((StringName*)local_a8, "down", false);
   StringName::StringName((StringName*)&local_b0, "down_icon", false);
   local_c0 = 0;
   String::parse_latin1((String*)&local_c0, "SpinBox");
   StringName::StringName((StringName*)&local_b8, (String*)&local_c0, false);
   ThemeDB::bind_class_item(uVar2, 4, (StringName*)&local_b8, (StringName*)&local_b0, (MethodDefinition*)local_a8, (_Function_base*)&local_68);
   if (( StringName::configured != '\0' ) && ( local_b8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   if (StringName::configured != '\0') {
      if (local_b0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010686f;
      }

      if (local_a8[0] != 0) {
         StringName::unref();
      }

   }

   LAB_0010686f:std::_Function_base::~_Function_base((_Function_base*)&local_68);
   uVar2 = ThemeDB::get_singleton();
   local_68._0_4_ = 0;
   local_68._4_4_ = 0;
   uStack_60 = 0;
   pcStack_58 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#11}>::_M_manager;
   pcStack_50 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#11}>::_M_invoke;
   StringName::StringName((StringName*)local_a8, "down_hover", false);
   StringName::StringName((StringName*)&local_b0, "down_hover_icon", false);
   local_c0 = 0;
   String::parse_latin1((String*)&local_c0, "SpinBox");
   StringName::StringName((StringName*)&local_b8, (String*)&local_c0, false);
   ThemeDB::bind_class_item(uVar2, 4, (StringName*)&local_b8, (StringName*)&local_b0, (MethodDefinition*)local_a8, (_Function_base*)&local_68);
   if (( StringName::configured != '\0' ) && ( local_b8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   if (StringName::configured != '\0') {
      if (local_b0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00106962;
      }

      if (local_a8[0] != 0) {
         StringName::unref();
      }

   }

   LAB_00106962:std::_Function_base::~_Function_base((_Function_base*)&local_68);
   uVar2 = ThemeDB::get_singleton();
   local_68._0_4_ = 0;
   local_68._4_4_ = 0;
   uStack_60 = 0;
   pcStack_58 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#12}>::_M_manager;
   pcStack_50 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#12}>::_M_invoke;
   StringName::StringName((StringName*)local_a8, "down_pressed", false);
   StringName::StringName((StringName*)&local_b0, "down_pressed_icon", false);
   local_c0 = 0;
   String::parse_latin1((String*)&local_c0, "SpinBox");
   StringName::StringName((StringName*)&local_b8, (String*)&local_c0, false);
   ThemeDB::bind_class_item(uVar2, 4, (StringName*)&local_b8, (StringName*)&local_b0, (MethodDefinition*)local_a8, (_Function_base*)&local_68);
   if (( StringName::configured != '\0' ) && ( local_b8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   if (StringName::configured != '\0') {
      if (local_b0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00106a55;
      }

      if (local_a8[0] != 0) {
         StringName::unref();
      }

   }

   LAB_00106a55:std::_Function_base::~_Function_base((_Function_base*)&local_68);
   uVar2 = ThemeDB::get_singleton();
   local_68._0_4_ = 0;
   local_68._4_4_ = 0;
   uStack_60 = 0;
   pcStack_58 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#13}>::_M_manager;
   pcStack_50 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#13}>::_M_invoke;
   StringName::StringName((StringName*)local_a8, "down_disabled", false);
   StringName::StringName((StringName*)&local_b0, "down_disabled_icon", false);
   local_c0 = 0;
   String::parse_latin1((String*)&local_c0, "SpinBox");
   StringName::StringName((StringName*)&local_b8, (String*)&local_c0, false);
   ThemeDB::bind_class_item(uVar2, 4, (StringName*)&local_b8, (StringName*)&local_b0, (MethodDefinition*)local_a8, (_Function_base*)&local_68);
   if (( StringName::configured != '\0' ) && ( local_b8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   if (StringName::configured != '\0') {
      if (local_b0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00106b48;
      }

      if (local_a8[0] != 0) {
         StringName::unref();
      }

   }

   LAB_00106b48:std::_Function_base::~_Function_base((_Function_base*)&local_68);
   uVar2 = ThemeDB::get_singleton();
   local_68._0_4_ = 0;
   local_68._4_4_ = 0;
   uStack_60 = 0;
   pcStack_58 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#14}>::_M_manager;
   pcStack_50 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#14}>::_M_invoke;
   StringName::StringName((StringName*)local_a8, "up_background", false);
   StringName::StringName((StringName*)&local_b0, "up_base_stylebox", false);
   local_c0 = 0;
   String::parse_latin1((String*)&local_c0, "SpinBox");
   StringName::StringName((StringName*)&local_b8, (String*)&local_c0, false);
   ThemeDB::bind_class_item(uVar2, 5, (StringName*)&local_b8, (StringName*)&local_b0, (MethodDefinition*)local_a8, (_Function_base*)&local_68);
   if (( StringName::configured != '\0' ) && ( local_b8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   if (StringName::configured != '\0') {
      if (local_b0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00106c3b;
      }

      if (local_a8[0] != 0) {
         StringName::unref();
      }

   }

   LAB_00106c3b:std::_Function_base::~_Function_base((_Function_base*)&local_68);
   uVar2 = ThemeDB::get_singleton();
   local_68._0_4_ = 0;
   local_68._4_4_ = 0;
   uStack_60 = 0;
   pcStack_58 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#15}>::_M_manager;
   pcStack_50 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#15}>::_M_invoke;
   StringName::StringName((StringName*)local_a8, "up_background_hovered", false);
   StringName::StringName((StringName*)&local_b0, "up_hover_stylebox", false);
   local_c0 = 0;
   String::parse_latin1((String*)&local_c0, "SpinBox");
   StringName::StringName((StringName*)&local_b8, (String*)&local_c0, false);
   ThemeDB::bind_class_item(uVar2, 5, (StringName*)&local_b8, (StringName*)&local_b0, (MethodDefinition*)local_a8, (_Function_base*)&local_68);
   if (( StringName::configured != '\0' ) && ( local_b8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   if (StringName::configured != '\0') {
      if (local_b0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00106d2e;
      }

      if (local_a8[0] != 0) {
         StringName::unref();
      }

   }

   LAB_00106d2e:std::_Function_base::~_Function_base((_Function_base*)&local_68);
   uVar2 = ThemeDB::get_singleton();
   local_68._0_4_ = 0;
   local_68._4_4_ = 0;
   uStack_60 = 0;
   pcStack_58 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#16}>::_M_manager;
   pcStack_50 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#16}>::_M_invoke;
   StringName::StringName((StringName*)local_a8, "up_background_pressed", false);
   StringName::StringName((StringName*)&local_b0, "up_pressed_stylebox", false);
   local_c0 = 0;
   String::parse_latin1((String*)&local_c0, "SpinBox");
   StringName::StringName((StringName*)&local_b8, (String*)&local_c0, false);
   ThemeDB::bind_class_item(uVar2, 5, (StringName*)&local_b8, (StringName*)&local_b0, (MethodDefinition*)local_a8, (_Function_base*)&local_68);
   if (( StringName::configured != '\0' ) && ( local_b8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   if (StringName::configured != '\0') {
      if (local_b0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00106e21;
      }

      if (local_a8[0] != 0) {
         StringName::unref();
      }

   }

   LAB_00106e21:std::_Function_base::~_Function_base((_Function_base*)&local_68);
   uVar2 = ThemeDB::get_singleton();
   local_68._0_4_ = 0;
   local_68._4_4_ = 0;
   uStack_60 = 0;
   pcStack_58 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#17}>::_M_manager;
   pcStack_50 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#17}>::_M_invoke;
   StringName::StringName((StringName*)local_a8, "up_background_disabled", false);
   StringName::StringName((StringName*)&local_b0, "up_disabled_stylebox", false);
   local_c0 = 0;
   String::parse_latin1((String*)&local_c0, "SpinBox");
   StringName::StringName((StringName*)&local_b8, (String*)&local_c0, false);
   ThemeDB::bind_class_item(uVar2, 5, (StringName*)&local_b8, (StringName*)&local_b0, (MethodDefinition*)local_a8, (_Function_base*)&local_68);
   if (( StringName::configured != '\0' ) && ( local_b8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   if (StringName::configured != '\0') {
      if (local_b0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00106f14;
      }

      if (local_a8[0] != 0) {
         StringName::unref();
      }

   }

   LAB_00106f14:std::_Function_base::~_Function_base((_Function_base*)&local_68);
   uVar2 = ThemeDB::get_singleton();
   local_68._0_4_ = 0;
   local_68._4_4_ = 0;
   uStack_60 = 0;
   pcStack_58 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#18}>::_M_manager;
   pcStack_50 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#18}>::_M_invoke;
   StringName::StringName((StringName*)local_a8, "down_background", false);
   StringName::StringName((StringName*)&local_b0, "down_base_stylebox", false);
   local_c0 = 0;
   String::parse_latin1((String*)&local_c0, "SpinBox");
   StringName::StringName((StringName*)&local_b8, (String*)&local_c0, false);
   ThemeDB::bind_class_item(uVar2, 5, (StringName*)&local_b8, (StringName*)&local_b0, (MethodDefinition*)local_a8, (_Function_base*)&local_68);
   if (( StringName::configured != '\0' ) && ( local_b8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   if (StringName::configured != '\0') {
      if (local_b0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00107007;
      }

      if (local_a8[0] != 0) {
         StringName::unref();
      }

   }

   LAB_00107007:std::_Function_base::~_Function_base((_Function_base*)&local_68);
   uVar2 = ThemeDB::get_singleton();
   local_68._0_4_ = 0;
   local_68._4_4_ = 0;
   uStack_60 = 0;
   pcStack_58 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#19}>::_M_manager;
   pcStack_50 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#19}>::_M_invoke;
   StringName::StringName((StringName*)local_a8, "down_background_hovered", false);
   StringName::StringName((StringName*)&local_b0, "down_hover_stylebox", false);
   local_c0 = 0;
   String::parse_latin1((String*)&local_c0, "SpinBox");
   StringName::StringName((StringName*)&local_b8, (String*)&local_c0, false);
   ThemeDB::bind_class_item(uVar2, 5, (StringName*)&local_b8, (StringName*)&local_b0, (MethodDefinition*)local_a8, (_Function_base*)&local_68);
   if (( StringName::configured != '\0' ) && ( local_b8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   if (StringName::configured != '\0') {
      if (local_b0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_001070fa;
      }

      if (local_a8[0] != 0) {
         StringName::unref();
      }

   }

   LAB_001070fa:std::_Function_base::~_Function_base((_Function_base*)&local_68);
   uVar2 = ThemeDB::get_singleton();
   local_68._0_4_ = 0;
   local_68._4_4_ = 0;
   uStack_60 = 0;
   pcStack_58 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#20}>::_M_manager;
   pcStack_50 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#20}>::_M_invoke;
   StringName::StringName((StringName*)local_a8, "down_background_pressed", false);
   StringName::StringName((StringName*)&local_b0, "down_pressed_stylebox", false);
   local_c0 = 0;
   String::parse_latin1((String*)&local_c0, "SpinBox");
   StringName::StringName((StringName*)&local_b8, (String*)&local_c0, false);
   ThemeDB::bind_class_item(uVar2, 5, (StringName*)&local_b8, (StringName*)&local_b0, (MethodDefinition*)local_a8, (_Function_base*)&local_68);
   if (( StringName::configured != '\0' ) && ( local_b8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   if (StringName::configured != '\0') {
      if (local_b0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_001071ed;
      }

      if (local_a8[0] != 0) {
         StringName::unref();
      }

   }

   LAB_001071ed:std::_Function_base::~_Function_base((_Function_base*)&local_68);
   uVar2 = ThemeDB::get_singleton();
   local_68._0_4_ = 0;
   local_68._4_4_ = 0;
   uStack_60 = 0;
   pcStack_58 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#21}>::_M_manager;
   pcStack_50 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#21}>::_M_invoke;
   StringName::StringName((StringName*)local_a8, "down_background_disabled", false);
   StringName::StringName((StringName*)&local_b0, "down_disabled_stylebox", false);
   local_c0 = 0;
   String::parse_latin1((String*)&local_c0, "SpinBox");
   StringName::StringName((StringName*)&local_b8, (String*)&local_c0, false);
   ThemeDB::bind_class_item(uVar2, 5, (StringName*)&local_b8, (StringName*)&local_b0, (MethodDefinition*)local_a8, (_Function_base*)&local_68);
   if (( StringName::configured != '\0' ) && ( local_b8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   if (StringName::configured != '\0') {
      if (local_b0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_001072e0;
      }

      if (local_a8[0] != 0) {
         StringName::unref();
      }

   }

   LAB_001072e0:std::_Function_base::~_Function_base((_Function_base*)&local_68);
   uVar2 = ThemeDB::get_singleton();
   local_68._0_4_ = 0;
   local_68._4_4_ = 0;
   uStack_60 = 0;
   pcStack_58 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#22}>::_M_manager;
   pcStack_50 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#22}>::_M_invoke;
   StringName::StringName((StringName*)local_a8, "up_icon_modulate", false);
   StringName::StringName((StringName*)&local_b0, "up_icon_modulate", false);
   local_c0 = 0;
   String::parse_latin1((String*)&local_c0, "SpinBox");
   StringName::StringName((StringName*)&local_b8, (String*)&local_c0, false);
   ThemeDB::bind_class_item(uVar2, 0, (StringName*)&local_b8, (StringName*)&local_b0, (MethodDefinition*)local_a8, (_Function_base*)&local_68);
   if (( StringName::configured != '\0' ) && ( local_b8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   if (StringName::configured != '\0') {
      if (local_b0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_001073d0;
      }

      if (local_a8[0] != 0) {
         StringName::unref();
      }

   }

   LAB_001073d0:std::_Function_base::~_Function_base((_Function_base*)&local_68);
   uVar2 = ThemeDB::get_singleton();
   local_68._0_4_ = 0;
   local_68._4_4_ = 0;
   uStack_60 = 0;
   pcStack_58 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#23}>::_M_manager;
   pcStack_50 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#23}>::_M_invoke;
   StringName::StringName((StringName*)local_a8, "up_hover_icon_modulate", false);
   StringName::StringName((StringName*)&local_b0, "up_hover_icon_modulate", false);
   local_c0 = 0;
   String::parse_latin1((String*)&local_c0, "SpinBox");
   StringName::StringName((StringName*)&local_b8, (String*)&local_c0, false);
   ThemeDB::bind_class_item(uVar2, 0, (StringName*)&local_b8, (StringName*)&local_b0, (MethodDefinition*)local_a8, (_Function_base*)&local_68);
   if (( StringName::configured != '\0' ) && ( local_b8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   if (StringName::configured != '\0') {
      if (local_b0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_001074c0;
      }

      if (local_a8[0] != 0) {
         StringName::unref();
      }

   }

   LAB_001074c0:std::_Function_base::~_Function_base((_Function_base*)&local_68);
   uVar2 = ThemeDB::get_singleton();
   local_68._0_4_ = 0;
   local_68._4_4_ = 0;
   uStack_60 = 0;
   pcStack_58 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#24}>::_M_manager;
   pcStack_50 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#24}>::_M_invoke;
   StringName::StringName((StringName*)local_a8, "up_pressed_icon_modulate", false);
   StringName::StringName((StringName*)&local_b0, "up_pressed_icon_modulate", false);
   local_c0 = 0;
   String::parse_latin1((String*)&local_c0, "SpinBox");
   StringName::StringName((StringName*)&local_b8, (String*)&local_c0, false);
   ThemeDB::bind_class_item(uVar2, 0, (StringName*)&local_b8, (StringName*)&local_b0, (MethodDefinition*)local_a8, (_Function_base*)&local_68);
   if (( StringName::configured != '\0' ) && ( local_b8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   if (StringName::configured != '\0') {
      if (local_b0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_001075b0;
      }

      if (local_a8[0] != 0) {
         StringName::unref();
      }

   }

   LAB_001075b0:std::_Function_base::~_Function_base((_Function_base*)&local_68);
   uVar2 = ThemeDB::get_singleton();
   local_68._0_4_ = 0;
   local_68._4_4_ = 0;
   uStack_60 = 0;
   pcStack_58 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#25}>::_M_manager;
   pcStack_50 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#25}>::_M_invoke;
   StringName::StringName((StringName*)local_a8, "up_disabled_icon_modulate", false);
   StringName::StringName((StringName*)&local_b0, "up_disabled_icon_modulate", false);
   local_c0 = 0;
   String::parse_latin1((String*)&local_c0, "SpinBox");
   StringName::StringName((StringName*)&local_b8, (String*)&local_c0, false);
   ThemeDB::bind_class_item(uVar2, 0, (StringName*)&local_b8, (StringName*)&local_b0, (MethodDefinition*)local_a8, (_Function_base*)&local_68);
   if (( StringName::configured != '\0' ) && ( local_b8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   if (StringName::configured != '\0') {
      if (local_b0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_001076a0;
      }

      if (local_a8[0] != 0) {
         StringName::unref();
      }

   }

   LAB_001076a0:std::_Function_base::~_Function_base((_Function_base*)&local_68);
   uVar2 = ThemeDB::get_singleton();
   local_68._0_4_ = 0;
   local_68._4_4_ = 0;
   uStack_60 = 0;
   pcStack_58 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#26}>::_M_manager;
   pcStack_50 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#26}>::_M_invoke;
   StringName::StringName((StringName*)local_a8, "down_icon_modulate", false);
   StringName::StringName((StringName*)&local_b0, "down_icon_modulate", false);
   local_c0 = 0;
   String::parse_latin1((String*)&local_c0, "SpinBox");
   StringName::StringName((StringName*)&local_b8, (String*)&local_c0, false);
   ThemeDB::bind_class_item(uVar2, 0, (StringName*)&local_b8, (StringName*)&local_b0, (MethodDefinition*)local_a8, (_Function_base*)&local_68);
   if (( StringName::configured != '\0' ) && ( local_b8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   if (StringName::configured != '\0') {
      if (local_b0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00107790;
      }

      if (local_a8[0] != 0) {
         StringName::unref();
      }

   }

   LAB_00107790:std::_Function_base::~_Function_base((_Function_base*)&local_68);
   uVar2 = ThemeDB::get_singleton();
   local_68._0_4_ = 0;
   local_68._4_4_ = 0;
   uStack_60 = 0;
   pcStack_58 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#27}>::_M_manager;
   pcStack_50 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#27}>::_M_invoke;
   StringName::StringName((StringName*)local_a8, "down_hover_icon_modulate", false);
   StringName::StringName((StringName*)&local_b0, "down_hover_icon_modulate", false);
   local_c0 = 0;
   String::parse_latin1((String*)&local_c0, "SpinBox");
   StringName::StringName((StringName*)&local_b8, (String*)&local_c0, false);
   ThemeDB::bind_class_item(uVar2, 0, (StringName*)&local_b8, (StringName*)&local_b0, (MethodDefinition*)local_a8, (_Function_base*)&local_68);
   if (( StringName::configured != '\0' ) && ( local_b8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   if (StringName::configured != '\0') {
      if (local_b0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00107880;
      }

      if (local_a8[0] != 0) {
         StringName::unref();
      }

   }

   LAB_00107880:std::_Function_base::~_Function_base((_Function_base*)&local_68);
   uVar2 = ThemeDB::get_singleton();
   local_68._0_4_ = 0;
   local_68._4_4_ = 0;
   uStack_60 = 0;
   pcStack_58 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#28}>::_M_manager;
   pcStack_50 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#28}>::_M_invoke;
   StringName::StringName((StringName*)local_a8, "down_pressed_icon_modulate", false);
   StringName::StringName((StringName*)&local_b0, "down_pressed_icon_modulate", false);
   local_c0 = 0;
   String::parse_latin1((String*)&local_c0, "SpinBox");
   StringName::StringName((StringName*)&local_b8, (String*)&local_c0, false);
   ThemeDB::bind_class_item(uVar2, 0, (StringName*)&local_b8, (StringName*)&local_b0, (MethodDefinition*)local_a8, (_Function_base*)&local_68);
   if (( StringName::configured != '\0' ) && ( local_b8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   if (StringName::configured != '\0') {
      if (local_b0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00107970;
      }

      if (local_a8[0] != 0) {
         StringName::unref();
      }

   }

   LAB_00107970:std::_Function_base::~_Function_base((_Function_base*)&local_68);
   uVar2 = ThemeDB::get_singleton();
   local_68._0_4_ = 0;
   local_68._4_4_ = 0;
   uStack_60 = 0;
   pcStack_58 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#29}>::_M_manager;
   pcStack_50 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#29}>::_M_invoke;
   StringName::StringName((StringName*)local_a8, "down_disabled_icon_modulate", false);
   StringName::StringName((StringName*)&local_b0, "down_disabled_icon_modulate", false);
   local_c0 = 0;
   String::parse_latin1((String*)&local_c0, "SpinBox");
   StringName::StringName((StringName*)&local_b8, (String*)&local_c0, false);
   ThemeDB::bind_class_item(uVar2, 0, (StringName*)&local_b8, (StringName*)&local_b0, (MethodDefinition*)local_a8, (_Function_base*)&local_68);
   if (( StringName::configured != '\0' ) && ( local_b8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   if (StringName::configured != '\0') {
      if (local_b0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00107a60;
      }

      if (local_a8[0] != 0) {
         StringName::unref();
      }

   }

   LAB_00107a60:std::_Function_base::~_Function_base((_Function_base*)&local_68);
   uVar2 = ThemeDB::get_singleton();
   local_68._0_4_ = 0;
   local_68._4_4_ = 0;
   uStack_60 = 0;
   pcStack_58 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#30}>::_M_manager;
   pcStack_50 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#30}>::_M_invoke;
   StringName::StringName((StringName*)local_a8, "field_and_buttons_separator", false);
   StringName::StringName((StringName*)&local_b0, "field_and_buttons_separator", false);
   local_c0 = 0;
   String::parse_latin1((String*)&local_c0, "SpinBox");
   StringName::StringName((StringName*)&local_b8, (String*)&local_c0, false);
   ThemeDB::bind_class_item(uVar2, 5, (StringName*)&local_b8, (StringName*)&local_b0, (MethodDefinition*)local_a8, (_Function_base*)&local_68);
   if (( StringName::configured != '\0' ) && ( local_b8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   if (StringName::configured != '\0') {
      if (local_b0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00107b53;
      }

      if (local_a8[0] != 0) {
         StringName::unref();
      }

   }

   LAB_00107b53:std::_Function_base::~_Function_base((_Function_base*)&local_68);
   uVar2 = ThemeDB::get_singleton();
   local_68._0_4_ = 0;
   local_68._4_4_ = 0;
   uStack_60 = 0;
   pcStack_58 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#31}>::_M_manager;
   pcStack_50 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#31}>::_M_invoke;
   StringName::StringName((StringName*)local_a8, "up_down_buttons_separator", false);
   StringName::StringName((StringName*)&local_b0, "up_down_buttons_separator", false);
   local_c0 = 0;
   String::parse_latin1((String*)&local_c0, "SpinBox");
   StringName::StringName((StringName*)&local_b8, (String*)&local_c0, false);
   ThemeDB::bind_class_item(uVar2, 5, (StringName*)&local_b8, (StringName*)&local_b0, (MethodDefinition*)local_a8, (_Function_base*)&local_68);
   if (( StringName::configured != '\0' ) && ( local_b8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   if (StringName::configured != '\0') {
      if (local_b0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00107c46;
      }

      if (local_a8[0] != 0) {
         StringName::unref();
      }

   }

   LAB_00107c46:std::_Function_base::~_Function_base((_Function_base*)&local_68);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* SpinBox::_text_submitted(String const&) */void SpinBox::_text_submitted(SpinBox *this, String *param_1) {
   code *pcVar1;
   undefined8 uVar2;
   char cVar3;
   int iVar4;
   RefCounted *this_00;
   Object *pOVar5;
   long in_FS_OFFSET;
   double dVar6;
   String *local_d0;
   long local_90;
   undefined8 local_88;
   String local_80[8];
   String local_78[8];
   undefined8 local_70;
   long local_68;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(long*)param_1 == 0 ) || ( *(uint*)( *(long*)param_1 + -8 ) < 2 )) goto LAB_00107dc4;
   local_90 = 0;
   CowData<char32_t>::_ref((CowData<char32_t>*)&local_90, (CowData*)param_1);
   if (this[0x9f8] == (SpinBox)0x0) {
      LAB_00107e25:this_00 = (RefCounted*)operator_new(0x1e8, "");
      RefCounted::RefCounted(this_00);
      *(undefined8*)( this_00 + 0x188 ) = 0;
      *(code**)this_00 = String::trim_prefix;
      *(undefined4*)( this_00 + 400 ) = 0;
      *(undefined8*)( this_00 + 0x198 ) = 0;
      this_00[0x1a0] = (RefCounted)0x0;
      *(undefined4*)( this_00 + 0x1a4 ) = 0;
      this_00[0x1a8] = (RefCounted)0x0;
      *(undefined8*)( this_00 + 0x1b0 ) = 0;
      this_00[0x1b8] = (RefCounted)0x1;
      *(undefined8*)( this_00 + 0x1d8 ) = 0;
      this_00[0x1e0] = (RefCounted)0x0;
      *(undefined1(*) [16])( this_00 + 0x1c0 ) = (undefined1[16])0x0;
      postinitialize_handler((Object*)this_00);
      cVar3 = RefCounted::init_ref();
      local_d0 = (String*)0x0;
      if (cVar3 != '\0') {
         cVar3 = RefCounted::reference();
         local_d0 = (String*)(RefCounted*)0x0;
         if (cVar3 != '\0') {
            local_d0 = (String*)this_00;
         }

         cVar3 = RefCounted::unreference();
         if (( cVar3 != '\0' ) && ( cVar3 = predelete_handler((Object*)this_00) ),cVar3 != '\0') {
            ( **(code**)( *(long*)this_00 + 0x140 ) )(this_00);
            Memory::free_static(this_00, false);
         }

      }

      String::replace((char*)&local_68, (char*)&local_90);
      if (local_90 != local_68) {
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
         local_90 = local_68;
         local_68 = 0;
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
      pOVar5 = *(Object**)( TextServerManager::singleton + 0x178 );
      if (pOVar5 == (Object*)0x0) {
         /* WARNING: Does not return */
         pcVar1 = (code*)invalidInstructionException();
         ( *pcVar1 )();
      }

      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
         pOVar5 = (Object*)0x0;
      }

      pcVar1 = *(code**)( *(long*)pOVar5 + 0x7c8 );
      local_70 = 0;
      String::parse_latin1((String*)&local_70, "");
      ( *pcVar1 )((CowData<char32_t>*)&local_68, pOVar5, (CowData<char32_t>*)&local_90);
      if (local_90 == local_68) {
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      }
 else {
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
         local_90 = local_68;
         local_68 = 0;
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      }

      cVar3 = RefCounted::unreference();
      if (( cVar3 != '\0' ) && ( cVar3 = predelete_handler(pOVar5) ),cVar3 != '\0') {
         ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
         Memory::free_static(pOVar5, false);
      }

      local_88 = 0;
      String::parse_latin1((String*)&local_88, " ");
      String::operator +(local_80, (String*)( this + 0xa30 ));
      String::trim_prefix(local_78);
      operator+((char *)&
      local_70,(String*)&_LC81;
      String::trim_suffix((String*)&local_68);
      if (local_90 != local_68) {
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
         local_90 = local_68;
         local_68 = 0;
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      local_60 = 0;
      iVar4 = Expression::parse(local_d0, (Vector*)&local_90);
      CowData<String>::_unref((CowData<String>*)&local_60);
      this[0xa50] = (SpinBox)0x0;
      if (iVar4 == 0) {
         LAB_001082b5:Array::Array((Array*)&local_68);
         Expression::execute((Array*)local_58, (Object*)local_d0, SUB81((CowData<char32_t>*)&local_68, 0), false);
         Array::~Array((Array*)&local_68);
         if (local_58[0] != 0) {
            dVar6 = Variant::operator_cast_to_double((Variant*)local_58);
            Range::set_value(dVar6);
         }

         _update_text(this, false);
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         cVar3 = RefCounted::unreference();
      }
 else {
         if (local_90 != *(long*)param_1) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_90, (CowData*)param_1);
         }

         pOVar5 = *(Object**)( TextServerManager::singleton + 0x178 );
         if (pOVar5 == (Object*)0x0) {
            /* WARNING: Does not return */
            pcVar1 = (code*)invalidInstructionException();
            ( *pcVar1 )();
         }

         cVar3 = RefCounted::reference();
         if (cVar3 == '\0') {
            pOVar5 = (Object*)0x0;
         }

         pcVar1 = *(code**)( *(long*)pOVar5 + 0x7c8 );
         local_70 = 0;
         String::parse_latin1((String*)&local_70, "");
         ( *pcVar1 )((CowData<char32_t>*)&local_68, pOVar5, (CowData<char32_t>*)&local_90);
         if (local_90 == local_68) {
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         }
 else {
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
            local_90 = local_68;
            local_68 = 0;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         }

         cVar3 = RefCounted::unreference();
         if (( cVar3 != '\0' ) && ( cVar3 = predelete_handler(pOVar5) ),cVar3 != '\0') {
            ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
            Memory::free_static(pOVar5, false);
         }

         local_88 = 0;
         String::parse_latin1((String*)&local_88, " ");
         String::operator +(local_80, (String*)( this + 0xa30 ));
         String::trim_prefix(local_78);
         operator+((char *)&
         local_70,(String*)&_LC81;
         String::trim_suffix((String*)&local_68);
         if (local_90 != local_68) {
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
            local_90 = local_68;
            local_68 = 0;
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_78);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_80);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
         local_60 = 0;
         iVar4 = Expression::parse(local_d0, (Vector*)&local_90);
         CowData<String>::_unref((CowData<String>*)&local_60);
         if (iVar4 == 0) goto LAB_001082b5;
         _update_text(this, false);
         cVar3 = RefCounted::unreference();
      }

      if (( cVar3 != '\0' ) && ( cVar3 = predelete_handler((Object*)local_d0) ),cVar3 != '\0') {
         ( **(code**)( *(long*)local_d0 + 0x140 ) )(local_d0);
         Memory::free_static(local_d0, false);
      }

   }
 else {
      String::replace((char*)&local_68, (char*)param_1);
      if (local_90 != local_68) {
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
         local_90 = local_68;
         local_68 = 0;
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
      cVar3 = String::begins_with((char*)&local_90);
      if (( cVar3 != '\0' ) || ( cVar3 = String::ends_with((char*)param_1) ),cVar3 == '\0') {
         cVar3 = String::begins_with((char*)&local_90);
         if (cVar3 == '\0') goto LAB_00107e25;
         uVar2 = *(undefined8*)( this + 0x9f0 );
         local_68 = 0;
         String::parse_latin1((String*)&local_68, "0.");
         LineEdit::set_text(uVar2, (CowData<char32_t>*)&local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         uVar2 = *(undefined8*)( this + 0x9f0 );
         LineEdit::get_text();
         LineEdit::set_caret_column((int)uVar2);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   LAB_00107dc4:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* SpinBox::_text_changed(String const&) */void SpinBox::_text_changed(SpinBox *this, String *param_1) {
   long *plVar1;
   long lVar2;
   char cVar3;
   long in_FS_OFFSET;
   long local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   this[0x9f9] = (SpinBox)0x0;
   LineEdit::get_caret_column();
   _text_submitted(this, param_1);
   String::replace((char*)&local_38, (char*)param_1);
   if (this[0x9f8] != (SpinBox)0x0) {
      cVar3 = String::begins_with((char*)&local_38);
      if (cVar3 == '\0') {
         LineEdit::set_caret_column((int)*(undefined8*)( this + 0x9f0 ));
      }

   }

   lVar2 = local_38;
   if (local_38 != 0) {
      LOCK();
      plVar1 = (long*)( local_38 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_38 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* SpinBox::_line_edit_editing_toggled(bool) */void SpinBox::_line_edit_editing_toggled(SpinBox *this, bool param_1) {
   char cVar1;
   StringName *pSVar2;
   undefined8 uVar3;
   long in_FS_OFFSET;
   CowData<char32_t> aCStack_48[8];
   long local_40;
   long local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1) {
      LineEdit::get_caret_column();
      _update_text(this, false);
      LineEdit::set_caret_column((int)*(undefined8*)( this + 0x9f0 ));
      cVar1 = LineEdit::is_select_all_on_focus();
      if (cVar1 != '\0') {
         uVar3 = Input::get_singleton();
         cVar1 = Input::is_mouse_button_pressed(uVar3, 1);
         if (cVar1 == '\0') {
            if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
               LineEdit::select_all();
               return;
            }

            goto LAB_001088ae;
         }

      }

      LAB_001086d2:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }
 else {
      this[0x9f9] = (SpinBox)0x1;
      pSVar2 = (StringName*)Input::get_singleton();
      StringName::StringName((StringName*)&local_40, "ui_cancel", false);
      cVar1 = Input::is_action_pressed(pSVar2, SUB81((StringName*)&local_40, 0));
      if (cVar1 == '\0') {
         LineEdit::get_text();
         if (( local_38 != 0 ) && ( 1 < *(uint*)( local_38 + -8 ) )) {
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_38);
            if (( StringName::configured != '\0' ) && ( local_40 != 0 )) {
               StringName::unref();
            }

            uVar3 = *(undefined8*)( this + 0x9f0 );
            LineEdit::get_text();
            String::trim_suffix((char*)&local_40);
            String::trim_suffix((char*)&local_38);
            LineEdit::set_text(uVar3, (CowData<char32_t>*)&local_38);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_38);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
            CowData<char32_t>::_unref(aCStack_48);
            _update_text(this, true);
            LineEdit::get_text();
            _text_submitted(this, (String*)&local_38);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_38);
            goto LAB_001086d2;
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_38);
      }

      if (( StringName::configured != '\0' ) && ( local_40 != 0 )) {
         StringName::unref();
      }

      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         _update_text(this, false);
         return;
      }

   }

   LAB_001088ae:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* SpinBox::apply() */void SpinBox::apply(SpinBox *this) {
   long *plVar1;
   long lVar2;
   long in_FS_OFFSET;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   LineEdit::get_text();
   _text_submitted(this, (String*)&local_28);
   lVar2 = local_28;
   if (local_28 != 0) {
      LOCK();
      plVar1 = (long*)( local_28 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_28 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* DefaultAllocator::alloc(unsigned long) */void DefaultAllocator::alloc(ulong param_1) {
   Memory::alloc_static(param_1, false);
   return;
}
/* StringName::~StringName() */void StringName::~StringName(StringName *this) {
   if (( configured != '\0' ) && ( *(long*)this != 0 )) {
      StringName::unref();
      return;
   }

   return;
}
/* Object::_bind_compatibility_methods() */void Object::_bind_compatibility_methods(void) {
   return;
}
/* Object::_set(StringName const&, Variant const&) */undefined8 Object::_set(StringName *param_1, Variant *param_2) {
   return 0;
}
/* Object::_get(StringName const&, Variant&) const */undefined8 Object::_get(StringName *param_1, Variant *param_2) {
   return 0;
}
/* Object::_get_property_list(List<PropertyInfo, DefaultAllocator>*) const */void Object::_get_property_list(List *param_1) {
   return;
}
/* Object::_validate_property(PropertyInfo&) const */void Object::_validate_property(PropertyInfo *param_1) {
   return;
}
/* Object::_property_can_revert(StringName const&) const */undefined8 Object::_property_can_revert(StringName *param_1) {
   return 0;
}
/* Object::_property_get_revert(StringName const&, Variant&) const */undefined8 Object::_property_get_revert(StringName *param_1, Variant *param_2) {
   return 0;
}
/* Object::_notification(int) */void Object::_notification(int param_1) {
   return;
}
/* Object::get_save_class() const */void Object::get_save_class(void) {
   long lVar1;
   long *in_RSI;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   ( **(code**)( *in_RSI + 0x48 ) )();
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind::is_valid() const */undefined8 MethodBind::is_valid(void) {
   return 1;
}
/* MethodBind::is_vararg() const */undefined8 MethodBind::is_vararg(void) {
   return 0;
}
/* Control::_top_level_changed() */void Control::_top_level_changed(void) {
   return;
}
/* SpinBox::is_class_ptr(void*) const */uint SpinBox::is_class_ptr(void *param_1) {
   undefined4 in_EDX;
   undefined4 *in_RSI;
   return (uint)CONCAT71(0x1167, in_RSI == &Range::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1167, in_RSI == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1167, in_RSI == &Control::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1167, in_RSI == &CanvasItem::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1168, in_RSI == &Node::get_class_ptr_static(), ::ptr) | CONCAT31(( int3 )((uint)in_EDX >> 8), in_RSI == &Object::get_class_ptr_static(), ::ptr);
}
/* CallableCustomMethodPointer<SpinBox, void>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<SpinBox,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<SpinBox,void> *this) {
   return;
}
/* CallableCustomMethodPointer<SpinBox, void, Ref<InputEvent>
   const&>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<SpinBox,void,Ref<InputEvent>const&>::~CallableCustomMethodPointer(CallableCustomMethodPointer<SpinBox,void,Ref<InputEvent>const&> *this) {
   return;
}
/* CallableCustomMethodPointer<SpinBox, void, bool>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<SpinBox,void,bool>::~CallableCustomMethodPointer(CallableCustomMethodPointer<SpinBox,void,bool> *this) {
   return;
}
/* CallableCustomMethodPointer<SpinBox, void, String const&>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<SpinBox,void,String_const&>::~CallableCustomMethodPointer(CallableCustomMethodPointer<SpinBox,void,String_const&> *this) {
   return;
}
/* CallableCustomMethodPointer<Control, void>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<Control,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<Control,void> *this) {
   return;
}
/* MethodBindTR<LineEdit*>::_gen_argument_type(int) const */undefined8 MethodBindTR<LineEdit*>::_gen_argument_type(int param_1) {
   return 0x18;
}
/* MethodBindTR<LineEdit*>::get_argument_meta(int) const */undefined8 MethodBindTR<LineEdit*>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindT<>::_gen_argument_type(int) const */undefined8 MethodBindT<>::_gen_argument_type(int param_1) {
   return 0;
}
/* MethodBindT<>::_gen_argument_type_info(int) const */undefined8 MethodBindT<>::_gen_argument_type_info(int param_1) {
   undefined4 in_register_0000003c;
   *(undefined4*)CONCAT44(in_register_0000003c, param_1) = 0;
   *(undefined4*)( CONCAT44(in_register_0000003c, param_1) + 0x18 ) = 0;
   *(undefined8*)( CONCAT44(in_register_0000003c, param_1) + 0x20 ) = 0;
   *(undefined4*)( CONCAT44(in_register_0000003c, param_1) + 0x28 ) = 6;
   *(undefined1(*) [16])( CONCAT44(in_register_0000003c, param_1) + 8 ) = (undefined1[16])0x0;
   return CONCAT44(in_register_0000003c, param_1);
}
/* MethodBindT<>::get_argument_meta(int) const */undefined8 MethodBindT<>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTRC<bool>::_gen_argument_type(int) const */undefined8 MethodBindTRC<bool>::_gen_argument_type(int param_1) {
   return 1;
}
/* MethodBindTRC<bool>::get_argument_meta(int) const */undefined8 MethodBindTRC<bool>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTRC<double>::_gen_argument_type(int) const */undefined8 MethodBindTRC<double>::_gen_argument_type(int param_1) {
   return 3;
}
/* MethodBindTRC<double>::get_argument_meta(int) const */uint MethodBindTRC<double>::get_argument_meta(MethodBindTRC<double> *this, int param_1) {
   return param_1 >> 0x1f & 10;
}
/* MethodBindT<double>::_gen_argument_type(int) const */byte MethodBindT<double>::_gen_argument_type(MethodBindT<double> *this, int param_1) {
   return -(param_1 == 0) & 3;
}
/* MethodBindT<double>::get_argument_meta(int) const */byte MethodBindT<double>::get_argument_meta(MethodBindT<double> *this, int param_1) {
   return -(param_1 == 0) & 10;
}
/* MethodBindT<bool>::_gen_argument_type(int) const */bool MethodBindT<bool>::_gen_argument_type(MethodBindT<bool> *this, int param_1) {
   return param_1 == 0;
}
/* MethodBindT<bool>::get_argument_meta(int) const */undefined8 MethodBindT<bool>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTRC<String>::_gen_argument_type(int) const */undefined8 MethodBindTRC<String>::_gen_argument_type(int param_1) {
   return 4;
}
/* MethodBindTRC<String>::get_argument_meta(int) const */undefined8 MethodBindTRC<String>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindT<String const&>::_gen_argument_type(int) const */long MethodBindT<String_const&>::_gen_argument_type(MethodBindT<String_const&> *this, int param_1) {
   return ( ulong )(param_1 == 0) << 2;
}
/* MethodBindT<String const&>::get_argument_meta(int) const */undefined8 MethodBindT<String_const&>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTRC<HorizontalAlignment>::_gen_argument_type(int) const */undefined8 MethodBindTRC<HorizontalAlignment>::_gen_argument_type(int param_1) {
   return 2;
}
/* MethodBindTRC<HorizontalAlignment>::get_argument_meta(int) const */undefined8 MethodBindTRC<HorizontalAlignment>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindT<HorizontalAlignment>::_gen_argument_type(int) const */char MethodBindT<HorizontalAlignment>::_gen_argument_type(MethodBindT<HorizontalAlignment> *this, int param_1) {
   return ( param_1 == 0 ) * '\x02';
}
/* MethodBindT<HorizontalAlignment>::get_argument_meta(int) const */undefined8 MethodBindT<HorizontalAlignment>::get_argument_meta(int param_1) {
   return 0;
}
/* CallableCustomMethodPointer<SpinBox, void>::get_argument_count(bool&) const */undefined8 CallableCustomMethodPointer<SpinBox,void>::get_argument_count(CallableCustomMethodPointer<SpinBox,void> *this, bool *param_1) {
   *param_1 = true;
   return 0;
}
/* CallableCustomMethodPointer<SpinBox, void, Ref<InputEvent> const&>::get_argument_count(bool&)
   const */undefined8 CallableCustomMethodPointer<SpinBox,void,Ref<InputEvent>const&>::get_argument_count(CallableCustomMethodPointer<SpinBox,void,Ref<InputEvent>const&> *this, bool *param_1) {
   *param_1 = true;
   return 1;
}
/* CallableCustomMethodPointer<SpinBox, void, bool>::get_argument_count(bool&) const */undefined8 CallableCustomMethodPointer<SpinBox,void,bool>::get_argument_count(CallableCustomMethodPointer<SpinBox,void,bool> *this, bool *param_1) {
   *param_1 = true;
   return 1;
}
/* CallableCustomMethodPointer<SpinBox, void, String const&>::get_argument_count(bool&) const */undefined8 CallableCustomMethodPointer<SpinBox,void,String_const&>::get_argument_count(CallableCustomMethodPointer<SpinBox,void,String_const&> *this, bool *param_1) {
   *param_1 = true;
   return 1;
}
/* CallableCustomMethodPointer<Control, void>::get_argument_count(bool&) const */undefined8 CallableCustomMethodPointer<Control,void>::get_argument_count(CallableCustomMethodPointer<Control,void> *this, bool *param_1) {
   *param_1 = true;
   return 0;
}
/* CallableCustomMethodPointerBase::get_method() const */void CallableCustomMethodPointerBase::get_method(void) {
   long in_RSI;
   StringName *in_RDI;
   StringName::StringName(in_RDI, *(char**)( in_RSI + 0x20 ), false);
   return;
}
/* CallableCustomMethodPointer<Control, void>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<Control,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<Control,void> *this) {
   operator_delete(this, 0x48);
   return;
}
/* CallableCustomMethodPointer<SpinBox, void, String const&>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<SpinBox,void,String_const&>::~CallableCustomMethodPointer(CallableCustomMethodPointer<SpinBox,void,String_const&> *this) {
   operator_delete(this, 0x48);
   return;
}
/* CallableCustomMethodPointer<SpinBox, void, bool>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<SpinBox,void,bool>::~CallableCustomMethodPointer(CallableCustomMethodPointer<SpinBox,void,bool> *this) {
   operator_delete(this, 0x48);
   return;
}
/* CallableCustomMethodPointer<SpinBox, void, Ref<InputEvent>
   const&>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<SpinBox,void,Ref<InputEvent>const&>::~CallableCustomMethodPointer(CallableCustomMethodPointer<SpinBox,void,Ref<InputEvent>const&> *this) {
   operator_delete(this, 0x48);
   return;
}
/* CallableCustomMethodPointer<SpinBox, void>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<SpinBox,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<SpinBox,void> *this) {
   operator_delete(this, 0x48);
   return;
}
/* MethodBindT<HorizontalAlignment>::~MethodBindT() */void MethodBindT<HorizontalAlignment>::~MethodBindT(MethodBindT<HorizontalAlignment> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001163d8;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<HorizontalAlignment>::~MethodBindT() */void MethodBindT<HorizontalAlignment>::~MethodBindT(MethodBindT<HorizontalAlignment> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001163d8;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<HorizontalAlignment>::~MethodBindTRC() */void MethodBindTRC<HorizontalAlignment>::~MethodBindTRC(MethodBindTRC<HorizontalAlignment> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00116438;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<HorizontalAlignment>::~MethodBindTRC() */void MethodBindTRC<HorizontalAlignment>::~MethodBindTRC(MethodBindTRC<HorizontalAlignment> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00116438;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<String const&>::~MethodBindT() */void MethodBindT<String_const&>::~MethodBindT(MethodBindT<String_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00116498;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<String const&>::~MethodBindT() */void MethodBindT<String_const&>::~MethodBindT(MethodBindT<String_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00116498;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<String>::~MethodBindTRC() */void MethodBindTRC<String>::~MethodBindTRC(MethodBindTRC<String> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001164f8;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<String>::~MethodBindTRC() */void MethodBindTRC<String>::~MethodBindTRC(MethodBindTRC<String> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001164f8;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<double>::~MethodBindT() */void MethodBindT<double>::~MethodBindT(MethodBindT<double> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001165b8;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<double>::~MethodBindT() */void MethodBindT<double>::~MethodBindT(MethodBindT<double> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001165b8;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<double>::~MethodBindTRC() */void MethodBindTRC<double>::~MethodBindTRC(MethodBindTRC<double> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00116618;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<double>::~MethodBindTRC() */void MethodBindTRC<double>::~MethodBindTRC(MethodBindTRC<double> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00116618;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<bool>::~MethodBindT() */void MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00116558;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<bool>::~MethodBindT() */void MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00116558;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<bool>::~MethodBindTRC() */void MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00116678;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<bool>::~MethodBindTRC() */void MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00116678;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<>::~MethodBindT() */void MethodBindT<>::~MethodBindT(MethodBindT<> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001166d8;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<>::~MethodBindT() */void MethodBindT<>::~MethodBindT(MethodBindT<> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001166d8;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTR<LineEdit*>::~MethodBindTR() */void MethodBindTR<LineEdit*>::~MethodBindTR(MethodBindTR<LineEdit*> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00116738;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTR<LineEdit*>::~MethodBindTR() */void MethodBindTR<LineEdit*>::~MethodBindTR(MethodBindTR<LineEdit*> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00116738;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* SpinBox::_property_get_revertv(StringName const&, Variant&) const */undefined8 SpinBox::_property_get_revertv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if ((code*)_GLOBAL_OFFSET_TABLE_ != Object::_property_get_revert) {
      uVar1 = Control::_property_get_revert(param_1, param_2);
      return uVar1;
   }

   return 0;
}
/* SpinBox::_property_can_revertv(StringName const&) const */undefined8 SpinBox::_property_can_revertv(StringName *param_1) {
   undefined8 uVar1;
   if ((code*)PTR__property_can_revert_0011b008 != Object::_property_can_revert) {
      uVar1 = Control::_property_can_revert(param_1);
      return uVar1;
   }

   return 0;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   SpinBox::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#2}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#2}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
   code *pcVar1;
   Control::get_theme_item();
   Variant::operator_cast_to_int((Variant*)&stack0x00000000);
   _DAT_00000b9c = 0;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   SpinBox::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#24}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#24}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
   code *pcVar1;
   undefined8 in_XMM1_Qa;
   Control::get_theme_item();
   _DAT_00000b28 = Variant::operator_cast_to_Color((Variant*)&stack0x00000000);
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   _DAT_00000b30 = in_XMM1_Qa;
   ( *pcVar1 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   SpinBox::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#29}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#29}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
   code *pcVar1;
   undefined8 in_XMM1_Qa;
   Control::get_theme_item();
   _DAT_00000b78 = Variant::operator_cast_to_Color((Variant*)&stack0x00000000);
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   _DAT_00000b80 = in_XMM1_Qa;
   ( *pcVar1 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   SpinBox::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#27}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#27}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
   code *pcVar1;
   undefined8 in_XMM1_Qa;
   Control::get_theme_item();
   _DAT_00000b58 = Variant::operator_cast_to_Color((Variant*)&stack0x00000000);
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   _DAT_00000b60 = in_XMM1_Qa;
   ( *pcVar1 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   SpinBox::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#25}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#25}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
   code *pcVar1;
   undefined8 in_XMM1_Qa;
   Control::get_theme_item();
   _DAT_00000b38 = Variant::operator_cast_to_Color((Variant*)&stack0x00000000);
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   _DAT_00000b40 = in_XMM1_Qa;
   ( *pcVar1 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   SpinBox::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#23}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#23}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
   code *pcVar1;
   undefined8 in_XMM1_Qa;
   Control::get_theme_item();
   _DAT_00000b18 = Variant::operator_cast_to_Color((Variant*)&stack0x00000000);
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   _DAT_00000b20 = in_XMM1_Qa;
   ( *pcVar1 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   SpinBox::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#28}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#28}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
   code *pcVar1;
   undefined8 in_XMM1_Qa;
   Control::get_theme_item();
   _DAT_00000b68 = Variant::operator_cast_to_Color((Variant*)&stack0x00000000);
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   _DAT_00000b70 = in_XMM1_Qa;
   ( *pcVar1 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   SpinBox::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#22}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#22}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
   code *pcVar1;
   undefined8 in_XMM1_Qa;
   Control::get_theme_item();
   _DAT_00000b08 = Variant::operator_cast_to_Color((Variant*)&stack0x00000000);
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   _DAT_00000b10 = in_XMM1_Qa;
   ( *pcVar1 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   SpinBox::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#26}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#26}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
   code *pcVar1;
   undefined8 in_XMM1_Qa;
   Control::get_theme_item();
   _DAT_00000b48 = Variant::operator_cast_to_Color((Variant*)&stack0x00000000);
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   _DAT_00000b50 = in_XMM1_Qa;
   ( *pcVar1 )();
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   SpinBox::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#4}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#4}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
   code *pcVar1;
   Control::get_theme_item();
   Variant::operator_cast_to_bool((Variant*)&stack0x00000000);
   DAT_00000ba4 = 0;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   SpinBox::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#1}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#1}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
   code *pcVar1;
   Control::get_theme_item();
   Variant::operator_cast_to_int((Variant*)&stack0x00000000);
   _DAT_00000b98 = 0;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   SpinBox::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#3}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#3}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
   code *pcVar1;
   Control::get_theme_item();
   Variant::operator_cast_to_int((Variant*)&stack0x00000000);
   _DAT_00000ba0 = 0;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   SpinBox::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#5}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#5}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
   code *pcVar1;
   Control::get_theme_item();
   Variant::get_validated_object();
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   SpinBox::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#18}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#18}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
   code *pcVar1;
   Control::get_theme_item();
   Variant::get_validated_object();
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   SpinBox::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#11}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#11}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
   code *pcVar1;
   Control::get_theme_item();
   Variant::get_validated_object();
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   SpinBox::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#13}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#13}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
   code *pcVar1;
   Control::get_theme_item();
   Variant::get_validated_object();
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   SpinBox::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#12}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#12}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
   code *pcVar1;
   Control::get_theme_item();
   Variant::get_validated_object();
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   SpinBox::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#6}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#6}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
   code *pcVar1;
   Control::get_theme_item();
   Variant::get_validated_object();
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   SpinBox::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#10}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#10}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
   code *pcVar1;
   Control::get_theme_item();
   Variant::get_validated_object();
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   SpinBox::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#8}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#8}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
   code *pcVar1;
   Control::get_theme_item();
   Variant::get_validated_object();
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   SpinBox::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#7}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#7}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
   code *pcVar1;
   Control::get_theme_item();
   Variant::get_validated_object();
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   SpinBox::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#9}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#9}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
   code *pcVar1;
   Control::get_theme_item();
   Variant::get_validated_object();
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   SpinBox::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#19}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#19}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
   code *pcVar1;
   Control::get_theme_item();
   Variant::get_validated_object();
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   SpinBox::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#16}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#16}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
   code *pcVar1;
   Control::get_theme_item();
   Variant::get_validated_object();
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   SpinBox::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#20}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#20}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
   code *pcVar1;
   Control::get_theme_item();
   Variant::get_validated_object();
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   SpinBox::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#17}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#17}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
   code *pcVar1;
   Control::get_theme_item();
   Variant::get_validated_object();
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   SpinBox::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#30}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#30}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
   code *pcVar1;
   Control::get_theme_item();
   Variant::get_validated_object();
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   SpinBox::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#21}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#21}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
   code *pcVar1;
   Control::get_theme_item();
   Variant::get_validated_object();
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   SpinBox::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#15}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#15}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
   code *pcVar1;
   Control::get_theme_item();
   Variant::get_validated_object();
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   SpinBox::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#14}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#14}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
   code *pcVar1;
   Control::get_theme_item();
   Variant::get_validated_object();
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   SpinBox::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#31}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),SpinBox::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#31}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
   code *pcVar1;
   Control::get_theme_item();
   Variant::get_validated_object();
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* SpinBox::_update_text(bool) [clone .cold] */void SpinBox::_update_text(bool param_1) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* SpinBox::_text_submitted(String const&) [clone .cold] */void SpinBox::_text_submitted(String *param_1) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CallableCustomMethodPointer<SpinBox, void>::get_object() const */undefined8 CallableCustomMethodPointer<SpinBox,void>::get_object(CallableCustomMethodPointer<SpinBox,void> *this) {
   long lVar1;
   undefined8 uVar2;
   uint uVar3;
   ulong *puVar4;
   long in_FS_OFFSET;
   bool bVar5;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar3 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
   if (uVar3 < (uint)ObjectDB::slot_max) {
      while (true) {
         LOCK();
         bVar5 = (char)ObjectDB::spin_lock == '\0';
         if (bVar5) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar5) break;
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar4 = (ulong*)( (ulong)uVar3 * 0x10 + ObjectDB::object_slots );
      if (( *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff ) != ( *puVar4 & 0x7fffffffff )) {
         uVar2 = 0;
         ObjectDB::spin_lock._0_1_ = '\0';
         goto LAB_0010973d;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_0010973d;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_0010973d:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* CallableCustomMethodPointer<SpinBox, void, bool>::get_object() const */undefined8 CallableCustomMethodPointer<SpinBox,void,bool>::get_object(CallableCustomMethodPointer<SpinBox,void,bool> *this) {
   long lVar1;
   undefined8 uVar2;
   uint uVar3;
   ulong *puVar4;
   long in_FS_OFFSET;
   bool bVar5;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar3 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
   if (uVar3 < (uint)ObjectDB::slot_max) {
      while (true) {
         LOCK();
         bVar5 = (char)ObjectDB::spin_lock == '\0';
         if (bVar5) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar5) break;
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar4 = (ulong*)( (ulong)uVar3 * 0x10 + ObjectDB::object_slots );
      if (( *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff ) != ( *puVar4 & 0x7fffffffff )) {
         uVar2 = 0;
         ObjectDB::spin_lock._0_1_ = '\0';
         goto LAB_0010983d;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_0010983d;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_0010983d:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* CallableCustomMethodPointer<SpinBox, void, String const&>::get_object() const */undefined8 CallableCustomMethodPointer<SpinBox,void,String_const&>::get_object(CallableCustomMethodPointer<SpinBox,void,String_const&> *this) {
   long lVar1;
   undefined8 uVar2;
   uint uVar3;
   ulong *puVar4;
   long in_FS_OFFSET;
   bool bVar5;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar3 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
   if (uVar3 < (uint)ObjectDB::slot_max) {
      while (true) {
         LOCK();
         bVar5 = (char)ObjectDB::spin_lock == '\0';
         if (bVar5) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar5) break;
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar4 = (ulong*)( (ulong)uVar3 * 0x10 + ObjectDB::object_slots );
      if (( *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff ) != ( *puVar4 & 0x7fffffffff )) {
         uVar2 = 0;
         ObjectDB::spin_lock._0_1_ = '\0';
         goto LAB_0010993d;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_0010993d;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_0010993d:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* CallableCustomMethodPointer<SpinBox, void, Ref<InputEvent> const&>::get_object() const */undefined8 CallableCustomMethodPointer<SpinBox,void,Ref<InputEvent>const&>::get_object(CallableCustomMethodPointer<SpinBox,void,Ref<InputEvent>const&> *this) {
   long lVar1;
   undefined8 uVar2;
   uint uVar3;
   ulong *puVar4;
   long in_FS_OFFSET;
   bool bVar5;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar3 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
   if (uVar3 < (uint)ObjectDB::slot_max) {
      while (true) {
         LOCK();
         bVar5 = (char)ObjectDB::spin_lock == '\0';
         if (bVar5) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar5) break;
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar4 = (ulong*)( (ulong)uVar3 * 0x10 + ObjectDB::object_slots );
      if (( *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff ) != ( *puVar4 & 0x7fffffffff )) {
         uVar2 = 0;
         ObjectDB::spin_lock._0_1_ = '\0';
         goto LAB_00109a3d;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_00109a3d;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_00109a3d:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* CallableCustomMethodPointer<Control, void>::get_object() const */undefined8 CallableCustomMethodPointer<Control,void>::get_object(CallableCustomMethodPointer<Control,void> *this) {
   long lVar1;
   undefined8 uVar2;
   uint uVar3;
   ulong *puVar4;
   long in_FS_OFFSET;
   bool bVar5;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar3 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
   if (uVar3 < (uint)ObjectDB::slot_max) {
      while (true) {
         LOCK();
         bVar5 = (char)ObjectDB::spin_lock == '\0';
         if (bVar5) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar5) break;
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar4 = (ulong*)( (ulong)uVar3 * 0x10 + ObjectDB::object_slots );
      if (( *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff ) != ( *puVar4 & 0x7fffffffff )) {
         uVar2 = 0;
         ObjectDB::spin_lock._0_1_ = '\0';
         goto LAB_00109b3d;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_00109b3d;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_00109b3d:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* SpinBox::_setv(StringName const&, Variant const&) */undefined8 SpinBox::_setv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   uVar1 = CanvasItem::_set(param_1, param_2);
   if ((char)uVar1 == '\0') {
      if ((code*)PTR__set_0011b010 != CanvasItem::_set) {
         uVar1 = Control::_set(param_1, param_2);
         return uVar1;
      }

      uVar1 = 0;
   }

   return uVar1;
}
/* WARNING: Removing unreachable block (ram,0x00109c78) *//* SpinBox::_getv(StringName const&, Variant&) const */undefined8 SpinBox::_getv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if (( (code*)PTR__get_0011b018 != CanvasItem::_get ) && ( uVar1 = Control::_get(param_1, param_2) ),(char)uVar1 != '\0') {
      return uVar1;
   }

   uVar1 = CanvasItem::_get(param_1, param_2);
   return uVar1;
}
/* SpinBox::_validate_propertyv(PropertyInfo&) const */void SpinBox::_validate_propertyv(SpinBox *this, PropertyInfo *param_1) {
   char cVar1;
   Node::_validate_property((PropertyInfo*)this);
   CanvasItem::_validate_property((PropertyInfo*)this);
   if ((code*)PTR__validate_property_0011b020 != CanvasItem::_validate_property) {
      Control::_validate_property((PropertyInfo*)this);
   }

   cVar1 = String::operator ==((String*)( param_1 + 8 ), "exp_edit");
   if (cVar1 != '\0') {
      *(undefined4*)( param_1 + 0x28 ) = 0;
   }

   return;
}
/* CallableCustomMethodPointerBase::get_as_text() const */void CallableCustomMethodPointerBase::get_as_text(void) {
   char *__s;
   long lVar1;
   long in_RSI;
   StrRange *in_RDI;
   long in_FS_OFFSET;
   __s = *(char**)( in_RSI + 0x20 );
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)in_RDI = 0;
   if (__s != (char*)0x0) {
      strlen(__s);
   }

   String::parse_latin1(in_RDI);
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* SpinBox::_get_class_namev() const */undefined8 *SpinBox::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00109db3:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00109db3;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "SpinBox");
         goto LAB_00109e1e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "SpinBox");
   LAB_00109e1e:return &_get_class_namev();
}
/* MethodBindTR<LineEdit*>::_gen_argument_type_info(int) const */undefined4 *MethodBindTR<LineEdit*>::_gen_argument_type_info(int param_1) {
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
   puVar3 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_40 = 0;
   local_30 = 8;
   local_38 = "LineEdit";
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
   *puVar3 = 0x18;
   *(undefined8*)( puVar3 + 2 ) = 0;
   StringName::StringName((StringName*)( puVar3 + 4 ), (StringName*)&local_38);
   bVar4 = StringName::configured != '\0';
   puVar3[6] = 0;
   *(undefined8*)( puVar3 + 8 ) = 0;
   puVar3[10] = 6;
   if (( bVar4 ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar2 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* SpinBox::get_class() const */void SpinBox::get_class(void) {
   long lVar1;
   long lVar2;
   char *__s;
   long in_RSI;
   StrRange *in_RDI;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( in_RSI + 8 ) == 0) {
      *(undefined8*)in_RDI = 0;
      String::parse_latin1(in_RDI);
   }
 else {
      lVar2 = *(long*)( *(long*)( in_RSI + 8 ) + 0x20 );
      if (lVar2 == 0) {
         *(undefined8*)in_RDI = 0;
      }
 else {
         __s = *(char**)( lVar2 + 8 );
         *(undefined8*)in_RDI = 0;
         if (__s == (char*)0x0) {
            if (*(long*)( lVar2 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)in_RDI, (CowData*)( lVar2 + 0x10 ));
            }

         }
 else {
            strlen(__s);
            String::parse_latin1(in_RDI);
         }

      }

   }

   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<double>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<double>::_gen_argument_type_info(int param_1) {
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
   puVar3 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = &_LC42;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   *puVar3 = 3;
   puVar3[6] = 0;
   *(undefined8*)( puVar3 + 8 ) = 0;
   *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      puVar3[10] = 6;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 8 ), (CowData*)&local_58);
      puVar3[10] = 6;
      if (puVar3[6] == 0x11) {
         StringName::StringName((StringName*)&local_48, (String*)( puVar3 + 8 ), false);
         if (*(undefined**)( puVar3 + 4 ) == local_48) {
            lVar2 = local_58;
            if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
               StringName::unref();
               lVar2 = local_58;
            }

         }
 else {
            StringName::unref();
            *(undefined**)( puVar3 + 4 ) = local_48;
            lVar2 = local_58;
         }

         goto joined_r0x0010a16c;
      }

   }

   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x0010a16c:local_58 = lVar2;
   if (lVar2 != 0) {
      LOCK();
      plVar1 = (long*)( lVar2 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_58 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
      StringName::unref();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* String::parse_latin1(char const*) */void String::parse_latin1(String *this, char *param_1) {
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 != (char*)0x0) {
      strlen(param_1);
   }

   String::parse_latin1((StrRange*)this);
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* PropertyInfo::~PropertyInfo() */void PropertyInfo::~PropertyInfo(PropertyInfo *this) {
   long *plVar1;
   long lVar2;
   if (*(long*)( this + 0x20 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x20 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x20 );
         *(undefined8*)( this + 0x20 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( *(long*)( this + 0x10 ) != 0 )) {
      StringName::unref();
   }

   if (*(long*)( this + 8 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 8 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 8 );
         *(undefined8*)( this + 8 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
         return;
      }

   }

   return;
}
/* PropertyInfo::PropertyInfo(Variant::Type, String const&, PropertyHint, String const&, unsigned
   int, StringName const&) */void PropertyInfo::PropertyInfo(PropertyInfo *this, undefined4 param_2, CowData *param_3, int param_4, CowData *param_5, undefined4 param_6, StringName *param_7) {
   long lVar1;
   long in_FS_OFFSET;
   long local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)( this + 8 ) = 0;
   lVar1 = *(long*)param_3;
   *(undefined4*)this = param_2;
   if (lVar1 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 8 ), param_3);
   }

   *(undefined8*)( this + 0x20 ) = 0;
   lVar1 = *(long*)param_5;
   *(undefined8*)( this + 0x10 ) = 0;
   *(int*)( this + 0x18 ) = param_4;
   if (lVar1 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x20 ), param_5);
      param_4 = *(int*)( this + 0x18 );
   }

   *(undefined4*)( this + 0x28 ) = param_6;
   if (param_4 == 0x11) {
      StringName::StringName((StringName*)&local_48, (String*)( this + 0x20 ), false);
      if (*(long*)( this + 0x10 ) == local_48) {
         if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         *(long*)( this + 0x10 ) = local_48;
      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      StringName::operator =((StringName*)( this + 0x10 ), param_7);
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* std::_Function_base::~_Function_base() */void std::_Function_base::~_Function_base(_Function_base *this) {
   if (*(code**)( this + 0x10 ) != (code*)0x0) {
      /* WARNING: Could not recover jumptable at 0x0010a3d5. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( **(code**)( this + 0x10 ) )(this, this, 3);
      return;
   }

   return;
}
/* SpinBox::_get_widest_button_icon_width() */int SpinBox::_get_widest_button_icon_width(SpinBox *this) {
   int iVar1;
   int iVar2;
   int iVar3;
   iVar1 = ( **(code**)( **(long**)( this + 0xa80 ) + 0x1c8 ) )();
   iVar2 = ( **(code**)( **(long**)( this + 0xa88 ) + 0x1c8 ) )();
   iVar3 = ( **(code**)( **(long**)( this + 0xa90 ) + 0x1c8 ) )();
   if (iVar2 <= iVar1) {
      iVar2 = iVar1;
   }

   if (iVar2 < 0) {
      iVar2 = 0;
   }

   for (int i = 0; i < 6; i++) {
      if (iVar3 <= iVar2) {
         iVar3 = iVar2;
      }

      iVar2 = ( **(code**)( **(long**)( this + ( 8*i + 2712 ) ) + 456 ) )();
   }

   if (iVar2 < iVar3) {
      iVar2 = iVar3;
   }

   return iVar2;
}
/* SpinBox::_compute_sizes() */void SpinBox::_compute_sizes(SpinBox *this) {
   char cVar1;
   int iVar2;
   undefined8 uVar3;
   int iVar4;
   int iVar5;
   int iVar6;
   long in_FS_OFFSET;
   undefined1 auVar7[16];
   undefined8 local_38;
   long local_30;
   iVar5 = *(int*)( this + 0xb9c ) + *(int*)( this + 0xba0 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar2 = _get_widest_button_icon_width(this);
   if (( ( this[0xba4] != (SpinBox)0x0 ) || ( *(int*)( this + 0xba0 ) < 0 ) ) && ( iVar5 < iVar2 + *(int*)( this + 0xb9c ) )) {
      iVar5 = iVar2 + *(int*)( this + 0xb9c );
   }

   if (*(int*)( this + 0x9fc ) != iVar5) {
      Control::set_offset(0, *(undefined8*)( this + 0x9f0 ), 0);
      auVar7._4_12_ = SUB1612((undefined1[16])0x0, 4);
      auVar7._0_4_ = (float)-iVar5;
      Control::set_offset(auVar7._0_8_, *(undefined8*)( this + 0x9f0 ), 2);
      *(int*)( this + 0x9fc ) = iVar5;
   }

   local_38 = Control::get_size();
   uVar3 = Vector2::operator_cast_to_Vector2i((Vector2*)&local_38);
   iVar2 = *(int*)( this + 0xb98 );
   *(int*)( this + 0xa00 ) = iVar5 - *(int*)( this + 0xb9c );
   iVar6 = (int)( (ulong)uVar3 >> 0x20 );
   iVar5 = iVar6;
   if (iVar2 <= iVar6) {
      iVar5 = iVar2;
   }

   if (iVar2 < 0) {
      iVar5 = 0;
   }

   *(int*)( this + 0xa04 ) = iVar5;
   cVar1 = ( **(code**)( *(long*)this + 0x340 ) )(this);
   iVar5 = 0;
   if (cVar1 == '\0') {
      iVar5 = (int)uVar3 - *(int*)( this + 0xa00 );
   }

   iVar2 = ( iVar6 - *(int*)( this + 0xa04 ) ) / 2;
   *(int*)( this + 0xa18 ) = iVar2;
   iVar4 = ( iVar6 - iVar2 ) - *(int*)( this + 0xa04 );
   *(ulong*)( this + 0xa08 ) = CONCAT44(iVar2, iVar5);
   *(ulong*)( this + 0xa10 ) = CONCAT44(iVar6 - iVar4, iVar4);
   cVar1 = ( **(code**)( *(long*)this + 0x340 ) )(this);
   if (cVar1 == '\0') {
      iVar5 = (int)uVar3 - *(int*)( this + 0x9fc );
   }
 else {
      iVar5 = *(int*)( this + 0xa00 );
   }

   *(ulong*)( this + 0xa1c ) = CONCAT44(*(undefined4*)( this + 0xb9c ), iVar5);
   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* MethodDefinition::~MethodDefinition() */void MethodDefinition::~MethodDefinition(MethodDefinition *this) {
   long *plVar1;
   long lVar2;
   code *pcVar3;
   long *plVar4;
   long lVar5;
   if (*(long*)( this + 0x10 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x10 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         plVar1 = *(long**)( this + 0x10 );
         if (plVar1 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = plVar1[-1];
         *(undefined8*)( this + 0x10 ) = 0;
         if (lVar2 != 0) {
            lVar5 = 0;
            plVar4 = plVar1;
            do {
               if (( StringName::configured != '\0' ) && ( *plVar4 != 0 )) {
                  StringName::unref();
               }

               lVar5 = lVar5 + 1;
               plVar4 = plVar4 + 1;
            }
 while ( lVar2 != lVar5 );
         }

         Memory::free_static(plVar1 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( *(long*)this != 0 )) {
      StringName::unref();
      return;
   }

   return;
}
/* Callable create_custom_callable_function_pointer<Control>(Control*, char const*, void
   (Control::*)()) */Control *create_custom_callable_function_pointer<Control>(Control *param_1, char *param_2, _func_void *param_3) {
   undefined8 uVar1;
   CallableCustom *this;
   undefined8 in_RCX;
   undefined8 in_R8;
   this(CallableCustom * operator_new(0x48, ""));
   CallableCustom::CallableCustom(this);
   *(undefined**)( this + 0x20 ) = &_LC42;
   *(undefined1(*) [16])( this + 0x30 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0x40 ) = 0;
   *(undefined***)this = &PTR_hash_00116108;
   uVar1 = *(undefined8*)( param_2 + 0x60 );
   *(char**)( this + 0x28 ) = param_2;
   *(undefined8*)( this + 0x30 ) = uVar1;
   *(undefined8*)( this + 0x38 ) = in_RCX;
   *(undefined8*)( this + 0x40 ) = in_R8;
   *(undefined8*)( this + 0x10 ) = 0;
   CallableCustomMethodPointerBase::_setup((uint*)this, (int)this + 0x28);
   *(_func_void**)( this + 0x20 ) = param_3 + 1;
   Callable::Callable((Callable*)param_1, this);
   return param_1;
}
/* Callable create_custom_callable_function_pointer<SpinBox, String const&>(SpinBox*, char const*,
   void (SpinBox::*)(String const&)) */SpinBox *create_custom_callable_function_pointer<SpinBox,String_const&>(SpinBox *param_1, char *param_2, _func_void_String_ptr *param_3) {
   undefined8 uVar1;
   CallableCustom *this;
   undefined8 in_RCX;
   undefined8 in_R8;
   this(CallableCustom * operator_new(0x48, ""));
   CallableCustom::CallableCustom(this);
   *(undefined**)( this + 0x20 ) = &_LC42;
   *(undefined1(*) [16])( this + 0x30 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0x40 ) = 0;
   *(undefined***)this = &PTR_hash_00116198;
   uVar1 = *(undefined8*)( param_2 + 0x60 );
   *(char**)( this + 0x28 ) = param_2;
   *(undefined8*)( this + 0x30 ) = uVar1;
   *(undefined8*)( this + 0x38 ) = in_RCX;
   *(undefined8*)( this + 0x40 ) = in_R8;
   *(undefined8*)( this + 0x10 ) = 0;
   CallableCustomMethodPointerBase::_setup((uint*)this, (int)this + 0x28);
   *(_func_void_String_ptr**)( this + 0x20 ) = param_3 + 1;
   Callable::Callable((Callable*)param_1, this);
   return param_1;
}
/* CowData<char32_t>::_unref() */void CowData<char32_t>::_unref(CowData<char32_t> *this) {
   long *plVar1;
   long lVar2;
   if (*(long*)this == 0) {
      return;
   }

   LOCK();
   plVar1 = (long*)( *(long*)this + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 != 0) {
      *(undefined8*)this = 0;
      return;
   }

   lVar2 = *(long*)this;
   *(undefined8*)this = 0;
   Memory::free_static((void*)( lVar2 + -0x10 ), false);
   return;
}
/* MethodBindTRC<String>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<String>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   long lVar2;
   undefined4 in_register_0000003c;
   undefined4 *puVar3;
   long in_FS_OFFSET;
   undefined8 local_60;
   long local_58;
   long local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   puVar3 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = &_LC42;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   local_60 = 0;
   *puVar3 = 4;
   puVar3[6] = 0;
   *(undefined8*)( puVar3 + 8 ) = 0;
   *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      puVar3[10] = 6;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 8 ), (CowData*)&local_58);
      puVar3[10] = 6;
      if (puVar3[6] == 0x11) {
         StringName::StringName((StringName*)&local_48, (String*)( puVar3 + 8 ), false);
         if (*(undefined**)( puVar3 + 4 ) == local_48) {
            if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            *(undefined**)( puVar3 + 4 ) = local_48;
         }

         goto LAB_0010b0f5;
      }

   }

   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
   LAB_0010b0f5:CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   lVar2 = local_58;
   if (local_58 != 0) {
      LOCK();
      plVar1 = (long*)( local_58 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_58 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
      StringName::unref();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* PropertyListHelper::~PropertyListHelper() */void PropertyListHelper::~PropertyListHelper(PropertyListHelper *this) {
   long *plVar1;
   uint uVar2;
   long lVar3;
   long lVar4;
   void *pvVar5;
   pvVar5 = *(void**)( this + 0x18 );
   if (pvVar5 != (void*)0x0) {
      if (*(int*)( this + 0x3c ) != 0) {
         uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x38 ) * 4 );
         if (uVar2 == 0) {
            *(undefined4*)( this + 0x3c ) = 0;
            *(undefined1(*) [16])( this + 0x28 ) = (undefined1[16])0x0;
         }
 else {
            lVar4 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x20 ) + lVar4 ) != 0) {
                  pvVar5 = *(void**)( (long)pvVar5 + lVar4 * 2 );
                  *(int*)( *(long*)( this + 0x20 ) + lVar4 ) = 0;
                  if (Variant::needs_deinit[*(int*)( (long)pvVar5 + 0x48 )] != '\0') {
                     Variant::_clear_internal();
                  }

                  if (*(long*)( (long)pvVar5 + 0x38 ) != 0) {
                     LOCK();
                     plVar1 = (long*)( *(long*)( (long)pvVar5 + 0x38 ) + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        lVar3 = *(long*)( (long)pvVar5 + 0x38 );
                        *(undefined8*)( (long)pvVar5 + 0x38 ) = 0;
                        Memory::free_static((void*)( lVar3 + -0x10 ), false);
                     }

                  }

                  if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar5 + 0x28 ) != 0 )) {
                     StringName::unref();
                  }

                  if (*(long*)( (long)pvVar5 + 0x20 ) != 0) {
                     LOCK();
                     plVar1 = (long*)( *(long*)( (long)pvVar5 + 0x20 ) + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        lVar3 = *(long*)( (long)pvVar5 + 0x20 );
                        *(undefined8*)( (long)pvVar5 + 0x20 ) = 0;
                        Memory::free_static((void*)( lVar3 + -0x10 ), false);
                     }

                  }

                  if (*(long*)( (long)pvVar5 + 0x10 ) != 0) {
                     LOCK();
                     plVar1 = (long*)( *(long*)( (long)pvVar5 + 0x10 ) + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        lVar3 = *(long*)( (long)pvVar5 + 0x10 );
                        *(undefined8*)( (long)pvVar5 + 0x10 ) = 0;
                        Memory::free_static((void*)( lVar3 + -0x10 ), false);
                     }

                  }

                  Memory::free_static(pvVar5, false);
                  pvVar5 = *(void**)( this + 0x18 );
                  *(undefined8*)( (long)pvVar5 + lVar4 * 2 ) = 0;
               }

               lVar4 = lVar4 + 4;
            }
 while ( lVar4 != (ulong)uVar2 << 2 );
            *(undefined4*)( this + 0x3c ) = 0;
            *(undefined1(*) [16])( this + 0x28 ) = (undefined1[16])0x0;
            if (pvVar5 == (void*)0x0) goto LAB_0010b2f4;
         }

      }

      Memory::free_static(pvVar5, false);
      Memory::free_static(*(void**)( this + 0x20 ), false);
   }

   LAB_0010b2f4:CowData<char32_t>::_unref((CowData<char32_t>*)this);
   return;
}
/* SpinBox::~SpinBox() */void SpinBox::~SpinBox(SpinBox *this) {
   Object *pOVar1;
   char cVar2;
   *(undefined***)this = &PTR__initialize_classv_00115d98;
   if (*(long*)( this + 0xb90 ) != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         pOVar1 = *(Object**)( this + 0xb90 );
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }

      }

   }

   if (*(long*)( this + 0xb88 ) != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         pOVar1 = *(Object**)( this + 0xb88 );
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }

      }

   }

   if (*(long*)( this + 0xb00 ) != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         pOVar1 = *(Object**)( this + 0xb00 );
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }

      }

   }

   for (int i = 0; i < 4; i++) {
      if (*(long*)( this + ( -32*i + 2808 ) ) != 0) {
         cVar2 = RefCounted::unreference();
         if (cVar2 != '\0') {
            pOVar1 = *(Object**)( this + ( -32*i + 2808 ) );
            cVar2 = predelete_handler(pOVar1);
            if (cVar2 != '\0') {
               ( **(code**)( *(long*)pOVar1 + 320 ) )(pOVar1);
               Memory::free_static(pOVar1, false);
            }

         }

      }

      if (*(long*)( this + ( -32*i + 2800 ) ) != 0) {
         cVar2 = RefCounted::unreference();
         if (cVar2 != '\0') {
            pOVar1 = *(Object**)( this + ( -32*i + 2800 ) );
            cVar2 = predelete_handler(pOVar1);
            if (cVar2 != '\0') {
               ( **(code**)( *(long*)pOVar1 + 320 ) )(pOVar1);
               Memory::free_static(pOVar1, false);
            }

         }

      }

      if (*(long*)( this + ( -32*i + 2792 ) ) != 0) {
         cVar2 = RefCounted::unreference();
         if (cVar2 != '\0') {
            pOVar1 = *(Object**)( this + ( -32*i + 2792 ) );
            cVar2 = predelete_handler(pOVar1);
            if (cVar2 != '\0') {
               ( **(code**)( *(long*)pOVar1 + 320 ) )(pOVar1);
               Memory::free_static(pOVar1, false);
            }

         }

      }

      if (*(long*)( this + ( -32*i + 2784 ) ) != 0) {
         cVar2 = RefCounted::unreference();
         if (cVar2 != '\0') {
            pOVar1 = *(Object**)( this + ( -32*i + 2784 ) );
            cVar2 = predelete_handler(pOVar1);
            if (cVar2 != '\0') {
               ( **(code**)( *(long*)pOVar1 + 320 ) )(pOVar1);
               Memory::free_static(pOVar1, false);
            }

         }

      }

   }

   for (int i = 0; i < 3; i++) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( this + ( -8*i + 2624 ) ));
   }

   Range::~Range((Range*)this);
   return;
}
/* CallableCustomMethodPointer<SpinBox, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */void CallableCustomMethodPointer<SpinBox,void>::call(CallableCustomMethodPointer<SpinBox,void> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
   long lVar1;
   long lVar2;
   uint uVar3;
   ulong *puVar4;
   code *UNRECOVERED_JUMPTABLE;
   ulong uVar5;
   long in_FS_OFFSET;
   bool bVar6;
   CowData<char32_t> local_60[8];
   CowData<char32_t> local_58[8];
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar3 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
   if (uVar3 < (uint)ObjectDB::slot_max) {
      while (true) {
         uVar5 = (ulong)local_48 >> 8;
         local_48 = (char*)( uVar5 << 8 );
         LOCK();
         bVar6 = (char)ObjectDB::spin_lock == '\0';
         if (bVar6) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar6) break;
         local_48 = (char*)( uVar5 << 8 );
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar4 = (ulong*)( (ulong)uVar3 * 0x10 + ObjectDB::object_slots );
      uVar5 = *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff;
      if (uVar5 != ( *puVar4 & 0x7fffffffff )) {
         ObjectDB::spin_lock._0_1_ = '\0';
         goto LAB_0010bb7f;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] == 0) goto LAB_0010bb7f;
      lVar1 = *(long*)( this + 0x28 );
      UNRECOVERED_JUMPTABLE = *(code**)( this + 0x38 );
      lVar2 = *(long*)( this + 0x40 );
      if (param_2 == 0) {
         *(undefined4*)param_4 = 0;
         if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
            UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( lVar1 + lVar2 ) + -1 );
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Could not recover jumptable at 0x0010bb58. Too many branches */
            /* WARNING: Treating indirect jump as call */
            ( *UNRECOVERED_JUMPTABLE )((long*)( lVar1 + lVar2 ), uVar5, UNRECOVERED_JUMPTABLE);
            return;
         }

         goto LAB_0010bc41;
      }

      *(undefined4*)param_4 = 3;
      *(undefined4*)( param_4 + 8 ) = 0;
   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
      LAB_0010bb7f:local_50 = 0;
      local_48 = "\', can\'t call method.";
      local_40 = 0x15;
      String::parse_latin1((StrRange*)&local_50);
      uitos((ulong)local_60);
      operator+((char *)
      local_58,(String*)"Invalid Object id \'";
      String::operator +((String*)&local_48, (String*)local_58);
      _err_print_error(&_LC72, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", (String*)&local_48, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
      CowData<char32_t>::_unref(local_58);
      CowData<char32_t>::_unref(local_60);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_0010bc41:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* CallableCustomMethodPointer<Control, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */void CallableCustomMethodPointer<Control,void>::call(CallableCustomMethodPointer<Control,void> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
   long lVar1;
   long lVar2;
   uint uVar3;
   ulong *puVar4;
   code *UNRECOVERED_JUMPTABLE;
   ulong uVar5;
   long in_FS_OFFSET;
   bool bVar6;
   CowData<char32_t> local_60[8];
   CowData<char32_t> local_58[8];
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar3 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
   if (uVar3 < (uint)ObjectDB::slot_max) {
      while (true) {
         uVar5 = (ulong)local_48 >> 8;
         local_48 = (char*)( uVar5 << 8 );
         LOCK();
         bVar6 = (char)ObjectDB::spin_lock == '\0';
         if (bVar6) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar6) break;
         local_48 = (char*)( uVar5 << 8 );
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar4 = (ulong*)( (ulong)uVar3 * 0x10 + ObjectDB::object_slots );
      uVar5 = *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff;
      if (uVar5 != ( *puVar4 & 0x7fffffffff )) {
         ObjectDB::spin_lock._0_1_ = '\0';
         goto LAB_0010bd9f;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] == 0) goto LAB_0010bd9f;
      lVar1 = *(long*)( this + 0x28 );
      UNRECOVERED_JUMPTABLE = *(code**)( this + 0x38 );
      lVar2 = *(long*)( this + 0x40 );
      if (param_2 == 0) {
         *(undefined4*)param_4 = 0;
         if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
            UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( lVar1 + lVar2 ) + -1 );
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Could not recover jumptable at 0x0010bd78. Too many branches */
            /* WARNING: Treating indirect jump as call */
            ( *UNRECOVERED_JUMPTABLE )((long*)( lVar1 + lVar2 ), uVar5, UNRECOVERED_JUMPTABLE);
            return;
         }

         goto LAB_0010be61;
      }

      *(undefined4*)param_4 = 3;
      *(undefined4*)( param_4 + 8 ) = 0;
   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
      LAB_0010bd9f:local_50 = 0;
      local_48 = "\', can\'t call method.";
      local_40 = 0x15;
      String::parse_latin1((StrRange*)&local_50);
      uitos((ulong)local_60);
      operator+((char *)
      local_58,(String*)"Invalid Object id \'";
      String::operator +((String*)&local_48, (String*)local_58);
      _err_print_error(&_LC72, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", (String*)&local_48, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
      CowData<char32_t>::_unref(local_58);
      CowData<char32_t>::_unref(local_60);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_0010be61:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* CallableCustomMethodPointer<SpinBox, void, bool>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */void CallableCustomMethodPointer<SpinBox,void,bool>::call(CallableCustomMethodPointer<SpinBox,void,bool> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
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
   CowData<char32_t> local_60[8];
   CowData<char32_t> local_58[8];
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar6 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
   if (uVar6 < (uint)ObjectDB::slot_max) {
      while (true) {
         uVar3 = (ulong)local_48 >> 8;
         local_48 = (char*)( uVar3 << 8 );
         LOCK();
         bVar8 = (char)ObjectDB::spin_lock == '\0';
         if (bVar8) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar8) break;
         local_48 = (char*)( uVar3 << 8 );
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar7 = (ulong*)( (ulong)uVar6 * 0x10 + ObjectDB::object_slots );
      if (( *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff ) != ( *puVar7 & 0x7fffffffff )) {
         ObjectDB::spin_lock._0_1_ = '\0';
         goto LAB_0010c029;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar7[1] == 0) goto LAB_0010c029;
      lVar1 = *(long*)( this + 0x28 );
      UNRECOVERED_JUMPTABLE = *(code**)( this + 0x38 );
      lVar2 = *(long*)( this + 0x40 );
      if ((uint)param_2 < 2) {
         if (param_2 != 0) {
            *(undefined4*)param_4 = 0;
            if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
               UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( lVar1 + lVar2 ) + -1 );
            }

            cVar5 = Variant::can_convert_strict(*(undefined4*)*param_1, 1);
            uVar4 = _LC73;
            if (cVar5 == '\0') {
               *(undefined4*)param_4 = 2;
               *(undefined8*)( param_4 + 4 ) = uVar4;
            }

            bVar8 = Variant::operator_cast_to_bool(*param_1);
            if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
               /* WARNING: Could not recover jumptable at 0x0010bfd8. Too many branches */
               /* WARNING: Treating indirect jump as call */
               ( *UNRECOVERED_JUMPTABLE )((long*)( lVar1 + lVar2 ), bVar8);
               return;
            }

            goto LAB_0010c0eb;
         }

         *(undefined4*)param_4 = 4;
         *(undefined4*)( param_4 + 8 ) = 1;
      }
 else {
         *(undefined4*)param_4 = 3;
         *(undefined4*)( param_4 + 8 ) = 1;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
      LAB_0010c029:local_50 = 0;
      local_48 = "\', can\'t call method.";
      local_40 = 0x15;
      String::parse_latin1((StrRange*)&local_50);
      uitos((ulong)local_60);
      operator+((char *)
      local_58,(String*)"Invalid Object id \'";
      String::operator +((String*)&local_48, (String*)local_58);
      _err_print_error(&_LC72, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", (String*)&local_48, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
      CowData<char32_t>::_unref(local_58);
      CowData<char32_t>::_unref(local_60);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_0010c0eb:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* CallableCustomMethodPointer<SpinBox, void, Ref<InputEvent> const&>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */void CallableCustomMethodPointer<SpinBox,void,Ref<InputEvent>const&>::call(CallableCustomMethodPointer<SpinBox,void,Ref<InputEvent>const&> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
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
   CowData<char32_t> local_60[8];
   CowData<char32_t> local_58[8];
   undefined8 local_50;
   Object *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar8 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
   if (uVar8 < (uint)ObjectDB::slot_max) {
      while (true) {
         uVar3 = (ulong)local_48 >> 8;
         local_48 = (Object*)( uVar3 << 8 );
         LOCK();
         bVar11 = (char)ObjectDB::spin_lock == '\0';
         if (bVar11) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar11) break;
         local_48 = (Object*)( uVar3 << 8 );
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar9 = (ulong*)( (ulong)uVar8 * 0x10 + ObjectDB::object_slots );
      if (( *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff ) == ( *puVar9 & 0x7fffffffff )) {
         ObjectDB::spin_lock._0_1_ = '\0';
         if (puVar9[1] != 0) {
            lVar1 = *(long*)( this + 0x28 );
            pcVar10 = *(code**)( this + 0x38 );
            lVar2 = *(long*)( this + 0x40 );
            if (1 < (uint)param_2) {
               *(undefined4*)param_4 = 3;
               *(undefined4*)( param_4 + 8 ) = 1;
               goto LAB_0010c1be;
            }

            if (param_2 == 0) {
               *(undefined4*)param_4 = 4;
               *(undefined4*)( param_4 + 8 ) = 1;
               goto LAB_0010c1be;
            }

            *(undefined4*)param_4 = 0;
            if (( (ulong)pcVar10 & 1 ) != 0) {
               pcVar10 = *(code**)( pcVar10 + *(long*)( lVar1 + lVar2 ) + -1 );
            }

            cVar6 = Variant::can_convert_strict(*(undefined4*)*param_1);
            uVar4 = _LC74;
            if (cVar6 == '\0') {
               *(undefined4*)param_4 = 2;
               *(undefined8*)( param_4 + 4 ) = uVar4;
            }

            local_48 = (Object*)0x0;
            pOVar7 = (Object*)Variant::get_validated_object();
            pOVar5 = local_48;
            if (pOVar7 != local_48) {
               if (pOVar7 == (Object*)0x0) {
                  if (local_48 != (Object*)0x0) {
                     local_48 = (Object*)0x0;
                     LAB_0010c28d:cVar6 = RefCounted::unreference();
                     if (( cVar6 != '\0' ) && ( cVar6 = predelete_handler(pOVar5) ),cVar6 != '\0') {
                        ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
                        Memory::free_static(pOVar5, false);
                     }

                  }

               }
 else {
                  pOVar7 = (Object*)__dynamic_cast(pOVar7, &Object::typeinfo, &InputEvent::typeinfo, 0);
                  if (pOVar5 != pOVar7) {
                     local_48 = pOVar7;
                     if (( pOVar7 != (Object*)0x0 ) && ( cVar6 = RefCounted::reference() ),cVar6 == '\0') {
                        local_48 = (Object*)0x0;
                     }

                     if (pOVar5 != (Object*)0x0) goto LAB_0010c28d;
                  }

               }

            }

            ( *pcVar10 )((long*)( lVar1 + lVar2 ));
            if (( ( local_48 != (Object*)0x0 ) && ( cVar6 = RefCounted::unreference() ),pOVar5 = local_48,cVar6 != '\0' )) &&( cVar6 = cVar6 != '\0' )(**(code**)( *(long*)pOVar5 + 0x140 ))(pOVar5);
            Memory::free_static(pOVar5, false);
         }

         goto LAB_0010c1be;
      }

   }
 else {
      ObjectDB::spin_lock._0_1_ = '\0';
   }

}
else{_err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);};local_50 = 0;local_48 = (Object*)0x10b98b;local_40 = 0x15;String::parse_latin1((StrRange*)&local_50);uitos((ulong)local_60);operator+((char *)local_58,(String *)"Invalid Object id \'");String::operator +((String*)&local_48, (String*)local_58);_err_print_error(&_LC72, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", (String*)&local_48, 0, 0);CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);CowData<char32_t>::_unref(local_58);CowData<char32_t>::_unref(local_60);CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);LAB_0010c1be:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return;}/* CallableCustomMethodPointer<SpinBox, void, String const&>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */void CallableCustomMethodPointer<SpinBox,void,String_const&>::call(CallableCustomMethodPointer<SpinBox,void,String_const&> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
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
   CowData<char32_t> local_60[8];
   CowData<char32_t> local_58[8];
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar6 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
   if (uVar6 < (uint)ObjectDB::slot_max) {
      while (true) {
         uVar3 = (ulong)local_48 >> 8;
         local_48 = (char*)( uVar3 << 8 );
         LOCK();
         bVar9 = (char)ObjectDB::spin_lock == '\0';
         if (bVar9) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar9) break;
         local_48 = (char*)( uVar3 << 8 );
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar7 = (ulong*)( (ulong)uVar6 * 0x10 + ObjectDB::object_slots );
      if (( *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff ) == ( *puVar7 & 0x7fffffffff )) {
         ObjectDB::spin_lock._0_1_ = '\0';
         if (puVar7[1] != 0) {
            lVar1 = *(long*)( this + 0x28 );
            pcVar8 = *(code**)( this + 0x38 );
            lVar2 = *(long*)( this + 0x40 );
            if ((uint)param_2 < 2) {
               if (param_2 == 0) {
                  *(undefined4*)param_4 = 4;
                  *(undefined4*)( param_4 + 8 ) = 1;
               }
 else {
                  *(undefined4*)param_4 = 0;
                  if (( (ulong)pcVar8 & 1 ) != 0) {
                     pcVar8 = *(code**)( pcVar8 + *(long*)( lVar1 + lVar2 ) + -1 );
                  }

                  cVar5 = Variant::can_convert_strict(*(undefined4*)*param_1, 4);
                  uVar4 = _LC75;
                  if (cVar5 == '\0') {
                     *(undefined4*)param_4 = 2;
                     *(undefined8*)( param_4 + 4 ) = uVar4;
                  }

                  Variant::operator_cast_to_String((Variant*)&local_48);
                  ( *pcVar8 )((long*)( lVar1 + lVar2 ), (Variant*)&local_48);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
               }

            }
 else {
               *(undefined4*)param_4 = 3;
               *(undefined4*)( param_4 + 8 ) = 1;
            }

            goto LAB_0010c53e;
         }

      }
 else {
         ObjectDB::spin_lock._0_1_ = '\0';
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   local_50 = 0;
   local_48 = "\', can\'t call method.";
   local_40 = 0x15;
   String::parse_latin1((StrRange*)&local_50);
   uitos((ulong)local_60);
   operator+((char *)
   local_58,(String*)"Invalid Object id \'";
   String::operator +((String*)&local_48, (String*)local_58);
   _err_print_error(&_LC72, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", (Variant*)&local_48, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   CowData<char32_t>::_unref(local_58);
   CowData<char32_t>::_unref(local_60);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   LAB_0010c53e:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* SpinBox::~SpinBox() */void SpinBox::~SpinBox(SpinBox *this) {
   Object *pOVar1;
   char cVar2;
   *(undefined***)this = &PTR__initialize_classv_00115d98;
   if (*(long*)( this + 0xb90 ) != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         pOVar1 = *(Object**)( this + 0xb90 );
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }

      }

   }

   if (*(long*)( this + 0xb88 ) != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         pOVar1 = *(Object**)( this + 0xb88 );
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }

      }

   }

   if (*(long*)( this + 0xb00 ) != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         pOVar1 = *(Object**)( this + 0xb00 );
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }

      }

   }

   for (int i = 0; i < 4; i++) {
      if (*(long*)( this + ( -32*i + 2808 ) ) != 0) {
         cVar2 = RefCounted::unreference();
         if (cVar2 != '\0') {
            pOVar1 = *(Object**)( this + ( -32*i + 2808 ) );
            cVar2 = predelete_handler(pOVar1);
            if (cVar2 != '\0') {
               ( **(code**)( *(long*)pOVar1 + 320 ) )(pOVar1);
               Memory::free_static(pOVar1, false);
            }

         }

      }

      if (*(long*)( this + ( -32*i + 2800 ) ) != 0) {
         cVar2 = RefCounted::unreference();
         if (cVar2 != '\0') {
            pOVar1 = *(Object**)( this + ( -32*i + 2800 ) );
            cVar2 = predelete_handler(pOVar1);
            if (cVar2 != '\0') {
               ( **(code**)( *(long*)pOVar1 + 320 ) )(pOVar1);
               Memory::free_static(pOVar1, false);
            }

         }

      }

      if (*(long*)( this + ( -32*i + 2792 ) ) != 0) {
         cVar2 = RefCounted::unreference();
         if (cVar2 != '\0') {
            pOVar1 = *(Object**)( this + ( -32*i + 2792 ) );
            cVar2 = predelete_handler(pOVar1);
            if (cVar2 != '\0') {
               ( **(code**)( *(long*)pOVar1 + 320 ) )(pOVar1);
               Memory::free_static(pOVar1, false);
            }

         }

      }

      if (*(long*)( this + ( -32*i + 2784 ) ) != 0) {
         cVar2 = RefCounted::unreference();
         if (cVar2 != '\0') {
            pOVar1 = *(Object**)( this + ( -32*i + 2784 ) );
            cVar2 = predelete_handler(pOVar1);
            if (cVar2 != '\0') {
               ( **(code**)( *(long*)pOVar1 + 320 ) )(pOVar1);
               Memory::free_static(pOVar1, false);
            }

         }

      }

   }

   for (int i = 0; i < 3; i++) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( this + ( -8*i + 2624 ) ));
   }

   Range::~Range((Range*)this);
   operator_delete(this, 0xba8);
   return;
}
/* CanvasItem::is_class(String const&) const */undefined8 CanvasItem::is_class(CanvasItem *this, String *param_1) {
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
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
      lVar5 = *(long*)( lVar2 + 0x20 );
      if (lVar5 == 0) {
         local_60 = 0;
      }
 else {
         pcVar4 = *(char**)( lVar5 + 8 );
         local_60 = 0;
         if (pcVar4 == (char*)0x0) {
            plVar1 = (long*)( *(long*)( lVar5 + 0x10 ) + -0x10 );
            if (*(long*)( lVar5 + 0x10 ) != 0) {
               do {
                  lVar3 = *plVar1;
                  if (lVar3 == 0) goto LAB_0010cdbf;
                  LOCK();
                  lVar7 = *plVar1;
                  bVar9 = lVar3 == lVar7;
                  if (bVar9) {
                     *plVar1 = lVar3 + 1;
                     lVar7 = lVar3;
                  }

                  UNLOCK();
               }
 while ( !bVar9 );
               if (lVar7 != -1) {
                  local_60 = *(long*)( lVar5 + 0x10 );
               }

            }

         }
 else {
            local_50 = strlen(pcVar4);
            local_58 = pcVar4;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      LAB_0010cdbf:cVar6 = String::operator ==(param_1, (String*)&local_60);
      lVar5 = local_60;
      if (local_60 != 0) {
         LOCK();
         plVar1 = (long*)( local_60 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_60 = 0;
            Memory::free_static((void*)( lVar5 + -0x10 ), false);
         }

      }

      if (cVar6 != '\0') goto LAB_0010ce73;
   }

   cVar6 = String::operator ==(param_1, "CanvasItem");
   if (cVar6 == '\0') {
      for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
         lVar5 = *(long*)( lVar2 + 0x20 );
         if (lVar5 == 0) {
            local_60 = 0;
         }
 else {
            pcVar4 = *(char**)( lVar5 + 8 );
            local_60 = 0;
            if (pcVar4 == (char*)0x0) {
               if (*(long*)( lVar5 + 0x10 ) != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar5 + 0x10 ));
               }

            }
 else {
               local_50 = strlen(pcVar4);
               local_58 = pcVar4;
               String::parse_latin1((StrRange*)&local_60);
            }

         }

         cVar6 = String::operator ==(param_1, (String*)&local_60);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (cVar6 != '\0') goto LAB_0010ce73;
      }

      cVar6 = String::operator ==(param_1, "Node");
      if (cVar6 == '\0') {
         for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
            lVar5 = *(long*)( lVar2 + 0x20 );
            if (lVar5 == 0) {
               local_60 = 0;
            }
 else {
               pcVar4 = *(char**)( lVar5 + 8 );
               local_60 = 0;
               if (pcVar4 == (char*)0x0) {
                  if (*(long*)( lVar5 + 0x10 ) != 0) {
                     CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar5 + 0x10 ));
                  }

               }
 else {
                  local_50 = strlen(pcVar4);
                  local_58 = pcVar4;
                  String::parse_latin1((StrRange*)&local_60);
               }

            }

            cVar6 = String::operator ==(param_1, (String*)&local_60);
            lVar5 = local_60;
            if (local_60 != 0) {
               LOCK();
               plVar1 = (long*)( local_60 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_60 = 0;
                  Memory::free_static((void*)( lVar5 + -0x10 ), false);
               }

            }

            if (cVar6 != '\0') goto LAB_0010ce73;
         }

         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar8 = String::operator ==(param_1, "Object");
            return uVar8;
         }

         goto LAB_0010d060;
      }

   }

   LAB_0010ce73:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_0010d060:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* Range::is_class(String const&) const */undefined8 Range::is_class(Range *this, String *param_1) {
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
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
      lVar4 = *(long*)( lVar2 + 0x20 );
      if (lVar4 == 0) {
         local_60 = 0;
      }
 else {
         pcVar3 = *(char**)( lVar4 + 8 );
         local_60 = 0;
         if (pcVar3 == (char*)0x0) {
            plVar1 = (long*)( *(long*)( lVar4 + 0x10 ) + -0x10 );
            if (*(long*)( lVar4 + 0x10 ) != 0) {
               do {
                  lVar5 = *plVar1;
                  if (lVar5 == 0) goto LAB_0010d0ef;
                  LOCK();
                  lVar8 = *plVar1;
                  bVar9 = lVar5 == lVar8;
                  if (bVar9) {
                     *plVar1 = lVar5 + 1;
                     lVar8 = lVar5;
                  }

                  UNLOCK();
               }
 while ( !bVar9 );
               if (lVar8 != -1) {
                  local_60 = *(long*)( lVar4 + 0x10 );
               }

            }

         }
 else {
            local_50 = strlen(pcVar3);
            local_58 = pcVar3;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      LAB_0010d0ef:cVar6 = String::operator ==(param_1, (String*)&local_60);
      lVar4 = local_60;
      if (local_60 != 0) {
         LOCK();
         plVar1 = (long*)( local_60 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_60 = 0;
            Memory::free_static((void*)( lVar4 + -0x10 ), false);
         }

      }

      if (cVar6 != '\0') goto LAB_0010d1a3;
   }

   cVar6 = String::operator ==(param_1, "Range");
   if (cVar6 == '\0') {
      for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
         lVar4 = *(long*)( lVar2 + 0x20 );
         if (lVar4 == 0) {
            local_60 = 0;
         }
 else {
            pcVar3 = *(char**)( lVar4 + 8 );
            local_60 = 0;
            if (pcVar3 == (char*)0x0) {
               plVar1 = (long*)( *(long*)( lVar4 + 0x10 ) + -0x10 );
               if (*(long*)( lVar4 + 0x10 ) != 0) {
                  do {
                     lVar5 = *plVar1;
                     if (lVar5 == 0) goto LAB_0010d263;
                     LOCK();
                     lVar8 = *plVar1;
                     bVar9 = lVar5 == lVar8;
                     if (bVar9) {
                        *plVar1 = lVar5 + 1;
                        lVar8 = lVar5;
                     }

                     UNLOCK();
                  }
 while ( !bVar9 );
                  if (lVar8 != -1) {
                     local_60 = *(long*)( lVar4 + 0x10 );
                  }

               }

            }
 else {
               local_50 = strlen(pcVar3);
               local_58 = pcVar3;
               String::parse_latin1((StrRange*)&local_60);
            }

         }

         LAB_0010d263:cVar6 = String::operator ==(param_1, (String*)&local_60);
         lVar4 = local_60;
         if (local_60 != 0) {
            LOCK();
            plVar1 = (long*)( local_60 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_60 = 0;
               Memory::free_static((void*)( lVar4 + -0x10 ), false);
            }

         }

         if (cVar6 != '\0') goto LAB_0010d1a3;
      }

      cVar6 = String::operator ==(param_1, "Control");
      if (cVar6 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar7 = CanvasItem::is_class((CanvasItem*)this, param_1);
            return uVar7;
         }

         goto LAB_0010d30c;
      }

   }

   LAB_0010d1a3:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_0010d30c:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* SpinBox::is_class(String const&) const */undefined8 SpinBox::is_class(SpinBox *this, String *param_1) {
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
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
      lVar3 = *(long*)( lVar2 + 0x20 );
      if (lVar3 == 0) {
         local_60 = 0;
      }
 else {
         __s = *(char**)( lVar3 + 8 );
         local_60 = 0;
         if (__s == (char*)0x0) {
            plVar1 = (long*)( *(long*)( lVar3 + 0x10 ) + -0x10 );
            if (*(long*)( lVar3 + 0x10 ) != 0) {
               do {
                  lVar4 = *plVar1;
                  if (lVar4 == 0) goto LAB_0010d38f;
                  LOCK();
                  lVar6 = *plVar1;
                  bVar8 = lVar4 == lVar6;
                  if (bVar8) {
                     *plVar1 = lVar4 + 1;
                     lVar6 = lVar4;
                  }

                  UNLOCK();
               }
 while ( !bVar8 );
               if (lVar6 != -1) {
                  local_60 = *(long*)( lVar3 + 0x10 );
               }

            }

         }
 else {
            local_50 = strlen(__s);
            local_58 = __s;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      LAB_0010d38f:cVar5 = String::operator ==(param_1, (String*)&local_60);
      lVar3 = local_60;
      if (local_60 != 0) {
         LOCK();
         plVar1 = (long*)( local_60 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_60 = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
         }

      }

      if (cVar5 != '\0') goto LAB_0010d443;
   }

   cVar5 = String::operator ==(param_1, "SpinBox");
   if (cVar5 == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = Range::is_class((Range*)this, param_1);
         return uVar7;
      }

   }
 else {
      LAB_0010d443:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<bool>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<bool>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   long lVar2;
   undefined4 in_register_0000003c;
   undefined4 *puVar3;
   long in_FS_OFFSET;
   undefined8 local_60;
   long local_58;
   long local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   puVar3 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = &_LC42;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   local_60 = 0;
   *puVar3 = 1;
   puVar3[6] = 0;
   *(undefined8*)( puVar3 + 8 ) = 0;
   *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      puVar3[10] = 6;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 8 ), (CowData*)&local_58);
      puVar3[10] = 6;
      if (puVar3[6] == 0x11) {
         StringName::StringName((StringName*)&local_48, (String*)( puVar3 + 8 ), false);
         if (*(undefined**)( puVar3 + 4 ) == local_48) {
            if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            *(undefined**)( puVar3 + 4 ) = local_48;
         }

         goto LAB_0010d595;
      }

   }

   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
   LAB_0010d595:CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   lVar2 = local_58;
   if (local_58 != 0) {
      LOCK();
      plVar1 = (long*)( local_58 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_58 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
      StringName::unref();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Node::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void Node::_get_property_listv(List *param_1, bool param_2) {
   long *plVar1;
   long lVar2;
   undefined1(*pauVar3)[16];
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
   pLVar5 = (List*)CONCAT71(in_register_00000031, param_2);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_78 = &_LC77;
   local_88 = 0;
   local_90 = 0;
   local_70 = 4;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = &_LC77;
   local_98 = 0;
   local_70 = 4;
   String::parse_latin1((StrRange*)&local_98);
   local_78 = (undefined*)( (ulong)local_78 & 0xffffffff00000000 );
   local_70 = 0;
   if (local_98 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
   }

   local_68 = 0;
   local_60 = 0;
   local_58 = 0;
   if (local_90 == 0) {
      LAB_0010d7cd:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_0010d7cd;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)pLVar5;
         local_68 = local_80;
         goto joined_r0x0010d7ef;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)pLVar5;
   joined_r0x0010d7ef:if (lVar2 == 0) {
      pauVar3 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])pLVar5 = pauVar3;
      *(undefined4*)pauVar3[1] = 0;
      *pauVar3 = (undefined1[16])0x0;
   }

   local_a8 = (StringName*)&local_68;
   puVar4 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
   *(undefined8*)( puVar4 + 8 ) = 0;
   *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
   *puVar4 = 0;
   puVar4[6] = 0;
   puVar4[10] = 6;
   *(undefined8*)( puVar4 + 0x10 ) = 0;
   *(undefined1(*) [16])( puVar4 + 0xc ) = (undefined1[16])0x0;
   *puVar4 = local_78._0_4_;
   if (local_70 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 2 ), (CowData*)&local_70);
   }

   StringName::operator =((StringName*)( puVar4 + 4 ), local_a8);
   puVar4[6] = local_60;
   if (*(long*)( puVar4 + 8 ) != local_58) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 8 ), (CowData*)&local_58);
   }

   puVar4[10] = local_50;
   plVar1 = *(long**)pLVar5;
   lVar2 = plVar1[1];
   *(undefined8*)( puVar4 + 0xc ) = 0;
   *(long**)( puVar4 + 0x10 ) = plVar1;
   *(long*)( puVar4 + 0xe ) = lVar2;
   if (lVar2 != 0) {
      *(undefined4**)( lVar2 + 0x30 ) = puVar4;
   }

   plVar1[1] = (long)puVar4;
   if (*plVar1 == 0) {
      *plVar1 = (long)puVar4;
   }

   *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "Node", false);
   ClassDB::get_property_list((StringName*)&local_78, pLVar5, true, (Object*)param_1);
   if (( StringName::configured != '\0' ) && ( local_78 != (undefined*)0x0 )) {
      StringName::unref();
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* CanvasItem::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void CanvasItem::_get_property_listv(CanvasItem *this, List *param_1, bool param_2) {
   long *plVar1;
   long lVar2;
   undefined1(*pauVar3)[16];
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
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      Node::_get_property_listv((List*)this, SUB81(param_1, 0));
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "CanvasItem";
   local_70 = 10;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "CanvasItem";
   local_98 = 0;
   local_70 = 10;
   String::parse_latin1((StrRange*)&local_98);
   local_78 = (char*)( (ulong)local_78 & 0xffffffff00000000 );
   local_70 = 0;
   if (local_98 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
   }

   local_68 = 0;
   local_60 = 0;
   local_58 = 0;
   if (local_90 == 0) {
      LAB_0010db4d:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_0010db4d;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x0010db6f;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x0010db6f:if (lVar2 == 0) {
      pauVar3 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])param_1 = pauVar3;
      *(undefined4*)pauVar3[1] = 0;
      *pauVar3 = (undefined1[16])0x0;
   }

   local_a8 = (StringName*)&local_68;
   puVar4 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
   *(undefined8*)( puVar4 + 8 ) = 0;
   *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
   *puVar4 = 0;
   puVar4[6] = 0;
   puVar4[10] = 6;
   *(undefined8*)( puVar4 + 0x10 ) = 0;
   *(undefined1(*) [16])( puVar4 + 0xc ) = (undefined1[16])0x0;
   *puVar4 = local_78._0_4_;
   if (local_70 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 2 ), (CowData*)&local_70);
   }

   StringName::operator =((StringName*)( puVar4 + 4 ), local_a8);
   puVar4[6] = local_60;
   if (*(long*)( puVar4 + 8 ) != local_58) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 8 ), (CowData*)&local_58);
   }

   puVar4[10] = local_50;
   plVar1 = *(long**)param_1;
   lVar2 = plVar1[1];
   *(undefined8*)( puVar4 + 0xc ) = 0;
   *(long**)( puVar4 + 0x10 ) = plVar1;
   *(long*)( puVar4 + 0xe ) = lVar2;
   if (lVar2 != 0) {
      *(undefined4**)( lVar2 + 0x30 ) = puVar4;
   }

   plVar1[1] = (long)puVar4;
   if (*plVar1 == 0) {
      *plVar1 = (long)puVar4;
   }

   *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "CanvasItem", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if ((code*)PTR__get_property_list_0011b028 != Object::_get_property_list) {
      CanvasItem::_get_property_list((List*)this);
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         Node::_get_property_listv((List*)this, SUB81(param_1, 0));
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Control::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void Control::_get_property_listv(Control *this, List *param_1, bool param_2) {
   long *plVar1;
   long lVar2;
   undefined1(*pauVar3)[16];
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
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      CanvasItem::_get_property_listv((CanvasItem*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "Control";
   local_70 = 7;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "Control";
   local_98 = 0;
   local_70 = 7;
   String::parse_latin1((StrRange*)&local_98);
   local_78 = (char*)( (ulong)local_78 & 0xffffffff00000000 );
   local_70 = 0;
   if (local_98 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
   }

   local_68 = 0;
   local_60 = 0;
   local_58 = 0;
   if (local_90 == 0) {
      LAB_0010df3d:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_0010df3d;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x0010df5f;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x0010df5f:if (lVar2 == 0) {
      pauVar3 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])param_1 = pauVar3;
      *(undefined4*)pauVar3[1] = 0;
      *pauVar3 = (undefined1[16])0x0;
   }

   local_a8 = (StringName*)&local_68;
   puVar4 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
   *(undefined8*)( puVar4 + 8 ) = 0;
   *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
   *puVar4 = 0;
   puVar4[6] = 0;
   puVar4[10] = 6;
   *(undefined8*)( puVar4 + 0x10 ) = 0;
   *(undefined1(*) [16])( puVar4 + 0xc ) = (undefined1[16])0x0;
   *puVar4 = local_78._0_4_;
   if (local_70 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 2 ), (CowData*)&local_70);
   }

   StringName::operator =((StringName*)( puVar4 + 4 ), local_a8);
   puVar4[6] = local_60;
   if (*(long*)( puVar4 + 8 ) != local_58) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 8 ), (CowData*)&local_58);
   }

   puVar4[10] = local_50;
   plVar1 = *(long**)param_1;
   lVar2 = plVar1[1];
   *(undefined8*)( puVar4 + 0xc ) = 0;
   *(long**)( puVar4 + 0x10 ) = plVar1;
   *(long*)( puVar4 + 0xe ) = lVar2;
   if (lVar2 != 0) {
      *(undefined4**)( lVar2 + 0x30 ) = puVar4;
   }

   plVar1[1] = (long)puVar4;
   if (*plVar1 == 0) {
      *plVar1 = (long)puVar4;
   }

   *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "Control", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if ((code*)PTR__get_property_list_0011b030 != CanvasItem::_get_property_list) {
      Control::_get_property_list((List*)this);
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         CanvasItem::_get_property_listv((CanvasItem*)this, param_1, true);
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Range::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void Range::_get_property_listv(Range *this, List *param_1, bool param_2) {
   long *plVar1;
   long lVar2;
   undefined1(*pauVar3)[16];
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
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      Control::_get_property_listv((Control*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "Range";
   local_70 = 5;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "Range";
   local_98 = 0;
   local_70 = 5;
   String::parse_latin1((StrRange*)&local_98);
   local_78 = (char*)( (ulong)local_78 & 0xffffffff00000000 );
   local_70 = 0;
   if (local_98 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
   }

   local_68 = 0;
   local_60 = 0;
   local_58 = 0;
   if (local_90 == 0) {
      LAB_0010e32d:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_0010e32d;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x0010e34f;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x0010e34f:if (lVar2 == 0) {
      pauVar3 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])param_1 = pauVar3;
      *(undefined4*)pauVar3[1] = 0;
      *pauVar3 = (undefined1[16])0x0;
   }

   local_a8 = (StringName*)&local_68;
   puVar4 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
   *(undefined8*)( puVar4 + 8 ) = 0;
   *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
   *puVar4 = 0;
   puVar4[6] = 0;
   puVar4[10] = 6;
   *(undefined8*)( puVar4 + 0x10 ) = 0;
   *(undefined1(*) [16])( puVar4 + 0xc ) = (undefined1[16])0x0;
   *puVar4 = local_78._0_4_;
   if (local_70 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 2 ), (CowData*)&local_70);
   }

   StringName::operator =((StringName*)( puVar4 + 4 ), local_a8);
   puVar4[6] = local_60;
   if (*(long*)( puVar4 + 8 ) != local_58) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 8 ), (CowData*)&local_58);
   }

   puVar4[10] = local_50;
   plVar1 = *(long**)param_1;
   lVar2 = plVar1[1];
   *(undefined8*)( puVar4 + 0xc ) = 0;
   *(long**)( puVar4 + 0x10 ) = plVar1;
   *(long*)( puVar4 + 0xe ) = lVar2;
   if (lVar2 != 0) {
      *(undefined4**)( lVar2 + 0x30 ) = puVar4;
   }

   plVar1[1] = (long)puVar4;
   if (*plVar1 == 0) {
      *plVar1 = (long)puVar4;
   }

   *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "Range", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         Control::_get_property_listv((Control*)this, param_1, true);
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* SpinBox::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void SpinBox::_get_property_listv(SpinBox *this, List *param_1, bool param_2) {
   long *plVar1;
   long lVar2;
   undefined1(*pauVar3)[16];
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
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      Range::_get_property_listv((Range*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "SpinBox";
   local_70 = 7;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "SpinBox";
   local_98 = 0;
   local_70 = 7;
   String::parse_latin1((StrRange*)&local_98);
   local_78 = (char*)( (ulong)local_78 & 0xffffffff00000000 );
   local_70 = 0;
   if (local_98 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
   }

   local_68 = 0;
   local_60 = 0;
   local_58 = 0;
   if (local_90 == 0) {
      LAB_0010e70d:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_0010e70d;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x0010e72f;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x0010e72f:if (lVar2 == 0) {
      pauVar3 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])param_1 = pauVar3;
      *(undefined4*)pauVar3[1] = 0;
      *pauVar3 = (undefined1[16])0x0;
   }

   local_a8 = (StringName*)&local_68;
   puVar4 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
   *(undefined8*)( puVar4 + 8 ) = 0;
   *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
   *puVar4 = 0;
   puVar4[6] = 0;
   puVar4[10] = 6;
   *(undefined8*)( puVar4 + 0x10 ) = 0;
   *(undefined1(*) [16])( puVar4 + 0xc ) = (undefined1[16])0x0;
   *puVar4 = local_78._0_4_;
   if (local_70 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 2 ), (CowData*)&local_70);
   }

   StringName::operator =((StringName*)( puVar4 + 4 ), local_a8);
   puVar4[6] = local_60;
   if (*(long*)( puVar4 + 8 ) != local_58) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 8 ), (CowData*)&local_58);
   }

   puVar4[10] = local_50;
   plVar1 = *(long**)param_1;
   lVar2 = plVar1[1];
   *(undefined8*)( puVar4 + 0xc ) = 0;
   *(long**)( puVar4 + 0x10 ) = plVar1;
   *(long*)( puVar4 + 0xe ) = lVar2;
   if (lVar2 != 0) {
      *(undefined4**)( lVar2 + 0x30 ) = puVar4;
   }

   plVar1[1] = (long)puVar4;
   if (*plVar1 == 0) {
      *plVar1 = (long)puVar4;
   }

   *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "SpinBox", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         Range::_get_property_listv((Range*)this, param_1, true);
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<double>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<double>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined1 auVar2[16];
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
   undefined1 local_60[16];
   int local_50;
   long local_48;
   undefined4 local_40;
   long local_30;
   puVar5 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *puVar5 = 0;
   puVar5[6] = 0;
   *(undefined8*)( puVar5 + 8 ) = 0;
   puVar5[10] = 6;
   *(undefined1(*) [16])( puVar5 + 2 ) = (undefined1[16])0x0;
   if (in_EDX != 0) goto LAB_0010e999;
   local_78 = 0;
   local_68 = &_LC42;
   local_80 = 0;
   auVar1._8_8_ = 0;
   auVar1._0_8_ = local_60._8_8_;
   local_60 = auVar1 << 0x40;
   String::parse_latin1((StrRange*)&local_80);
   local_88 = 0;
   local_68 = (undefined*)CONCAT44(local_68._4_4_, 3);
   local_50 = 0;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_80 == 0) {
      LAB_0010ea95:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_0010ea95;
      StringName::StringName((StringName*)&local_70, (String*)&local_48, false);
      if (local_60._8_8_ == local_70) {
         if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_60._8_8_ = local_70;
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
      StringName::unref();
   }

   *puVar5 = local_68._0_4_;
   if (*(long*)( puVar5 + 2 ) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar5 + 2 ));
      uVar3 = local_60._0_8_;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_60._8_8_;
      local_60 = auVar2 << 0x40;
      *(undefined8*)( puVar5 + 2 ) = uVar3;
   }

   if (*(long*)( puVar5 + 4 ) != local_60._8_8_) {
      StringName::unref();
      uVar3 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8*)( puVar5 + 4 ) = uVar3;
   }

   puVar5[6] = local_50;
   if (*(long*)( puVar5 + 8 ) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar5 + 8 ));
      lVar4 = local_48;
      local_48 = 0;
      *(long*)( puVar5 + 8 ) = lVar4;
   }

   puVar5[10] = local_40;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_60._8_8_ != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_60);
   LAB_0010e999:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return puVar5;
}
/* MethodBindT<String const&>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<String_const&>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined1 auVar2[16];
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
   undefined1 local_60[16];
   int local_50;
   long local_48;
   undefined4 local_40;
   long local_30;
   puVar5 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *puVar5 = 0;
   puVar5[6] = 0;
   *(undefined8*)( puVar5 + 8 ) = 0;
   puVar5[10] = 6;
   *(undefined1(*) [16])( puVar5 + 2 ) = (undefined1[16])0x0;
   if (in_EDX != 0) goto LAB_0010ec09;
   local_78 = 0;
   local_68 = &_LC42;
   local_80 = 0;
   auVar1._8_8_ = 0;
   auVar1._0_8_ = local_60._8_8_;
   local_60 = auVar1 << 0x40;
   String::parse_latin1((StrRange*)&local_80);
   local_88 = 0;
   local_68 = (undefined*)CONCAT44(local_68._4_4_, 4);
   local_50 = 0;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_80 == 0) {
      LAB_0010ed05:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_0010ed05;
      StringName::StringName((StringName*)&local_70, (String*)&local_48, false);
      if (local_60._8_8_ == local_70) {
         if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_60._8_8_ = local_70;
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
      StringName::unref();
   }

   *puVar5 = local_68._0_4_;
   if (*(long*)( puVar5 + 2 ) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar5 + 2 ));
      uVar3 = local_60._0_8_;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_60._8_8_;
      local_60 = auVar2 << 0x40;
      *(undefined8*)( puVar5 + 2 ) = uVar3;
   }

   if (*(long*)( puVar5 + 4 ) != local_60._8_8_) {
      StringName::unref();
      uVar3 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8*)( puVar5 + 4 ) = uVar3;
   }

   puVar5[6] = local_50;
   if (*(long*)( puVar5 + 8 ) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar5 + 8 ));
      lVar4 = local_48;
      local_48 = 0;
      *(long*)( puVar5 + 8 ) = lVar4;
   }

   puVar5[10] = local_40;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_60._8_8_ != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_60);
   LAB_0010ec09:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return puVar5;
}
/* MethodBindT<bool>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<bool>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined1 auVar2[16];
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
   undefined1 local_60[16];
   int local_50;
   long local_48;
   undefined4 local_40;
   long local_30;
   puVar5 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *puVar5 = 0;
   puVar5[6] = 0;
   *(undefined8*)( puVar5 + 8 ) = 0;
   puVar5[10] = 6;
   *(undefined1(*) [16])( puVar5 + 2 ) = (undefined1[16])0x0;
   if (in_EDX != 0) goto LAB_0010ee79;
   local_78 = 0;
   local_68 = &_LC42;
   local_80 = 0;
   auVar1._8_8_ = 0;
   auVar1._0_8_ = local_60._8_8_;
   local_60 = auVar1 << 0x40;
   String::parse_latin1((StrRange*)&local_80);
   local_88 = 0;
   local_68 = (undefined*)CONCAT44(local_68._4_4_, 1);
   local_50 = 0;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_80 == 0) {
      LAB_0010ef75:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_0010ef75;
      StringName::StringName((StringName*)&local_70, (String*)&local_48, false);
      if (local_60._8_8_ == local_70) {
         if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_60._8_8_ = local_70;
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
      StringName::unref();
   }

   *puVar5 = local_68._0_4_;
   if (*(long*)( puVar5 + 2 ) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar5 + 2 ));
      uVar3 = local_60._0_8_;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_60._8_8_;
      local_60 = auVar2 << 0x40;
      *(undefined8*)( puVar5 + 2 ) = uVar3;
   }

   if (*(long*)( puVar5 + 4 ) != local_60._8_8_) {
      StringName::unref();
      uVar3 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8*)( puVar5 + 4 ) = uVar3;
   }

   puVar5[6] = local_50;
   if (*(long*)( puVar5 + 8 ) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar5 + 8 ));
      lVar4 = local_48;
      local_48 = 0;
      *(long*)( puVar5 + 8 ) = lVar4;
   }

   puVar5[10] = local_40;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_60._8_8_ != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_60);
   LAB_0010ee79:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return puVar5;
}
/* Ref<Texture2D>::unref() */void Ref<Texture2D>::unref(Ref<Texture2D> *this) {
   Object *pOVar1;
   char cVar2;
   if (*(long*)this != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         pOVar1 = *(Object**)this;
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
            *(undefined8*)this = 0;
            return;
         }

      }

   }

   *(undefined8*)this = 0;
   return;
}
/* Ref<StyleBox>::unref() */void Ref<StyleBox>::unref(Ref<StyleBox> *this) {
   Object *pOVar1;
   char cVar2;
   if (*(long*)this != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         pOVar1 = *(Object**)this;
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
            *(undefined8*)this = 0;
            return;
         }

      }

   }

   *(undefined8*)this = 0;
   return;
}
/* WARNING: Removing unreachable block (ram,0x0010fa50) *//* SpinBox::_notificationv(int, bool) */void SpinBox::_notificationv(SpinBox *this, int param_1, bool param_2) {
   int iVar1;
   iVar1 = (int)this;
   if (param_2) {
      _notification(this, param_1);
      if ((code*)PTR__notification_0011b038 != CanvasItem::_notification) {
         Control::_notification(iVar1);
      }

      CanvasItem::_notification(iVar1);
      Node::_notification(iVar1);
      return;
   }

   Node::_notification(iVar1);
   CanvasItem::_notification(iVar1);
   if ((code*)PTR__notification_0011b038 != CanvasItem::_notification) {
      Control::_notification(iVar1);
   }

   _notification(this, param_1);
   return;
}
/* MethodBind* create_method_bind<SpinBox, HorizontalAlignment>(void
   (SpinBox::*)(HorizontalAlignment)) */MethodBind *create_method_bind<SpinBox,HorizontalAlignment>(_func_void_HorizontalAlignment *param_1) {
   long *plVar1;
   long lVar2;
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_void_HorizontalAlignment**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_001163d8;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "SpinBox";
   local_30 = 7;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar2 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<SpinBox, HorizontalAlignment>(HorizontalAlignment (SpinBox::*)()
   const) */MethodBind *create_method_bind<SpinBox,HorizontalAlignment>(_func_HorizontalAlignment *param_1) {
   long *plVar1;
   long lVar2;
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_HorizontalAlignment**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00116438;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "SpinBox";
   local_30 = 7;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar2 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<SpinBox, String const&>(void (SpinBox::*)(String const&)) */MethodBind *create_method_bind<SpinBox,String_const&>(_func_void_String_ptr *param_1) {
   long *plVar1;
   long lVar2;
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_void_String_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00116498;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "SpinBox";
   local_30 = 7;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar2 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<SpinBox, String>(String (SpinBox::*)() const) */MethodBind *create_method_bind<SpinBox,String>(_func_String *param_1) {
   long *plVar1;
   long lVar2;
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_String**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_001164f8;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "SpinBox";
   local_30 = 7;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar2 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<SpinBox, bool>(void (SpinBox::*)(bool)) */MethodBind *create_method_bind<SpinBox,bool>(_func_void_bool *param_1) {
   long *plVar1;
   long lVar2;
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_void_bool**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00116558;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "SpinBox";
   local_30 = 7;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar2 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<SpinBox, double>(void (SpinBox::*)(double)) */MethodBind *create_method_bind<SpinBox,double>(_func_void_double *param_1) {
   long *plVar1;
   long lVar2;
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_void_double**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_001165b8;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "SpinBox";
   local_30 = 7;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar2 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<SpinBox, double>(double (SpinBox::*)() const) */MethodBind *create_method_bind<SpinBox,double>(_func_double *param_1) {
   long *plVar1;
   long lVar2;
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_double**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00116618;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "SpinBox";
   local_30 = 7;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar2 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<SpinBox, bool>(bool (SpinBox::*)() const) */MethodBind *create_method_bind<SpinBox,bool>(_func_bool *param_1) {
   long *plVar1;
   long lVar2;
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_bool**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00116678;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "SpinBox";
   local_30 = 7;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar2 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<SpinBox>(void (SpinBox::*)()) */MethodBind *create_method_bind<SpinBox>(_func_void *param_1) {
   long *plVar1;
   long lVar2;
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_void**)( this + 0x58 ) = param_1;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   *(undefined***)this = &PTR__gen_argument_type_001166d8;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "SpinBox";
   local_30 = 7;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar2 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<SpinBox, LineEdit*>(LineEdit* (SpinBox::*)()) */MethodBind *create_method_bind<SpinBox,LineEdit*>(_func_LineEdit_ptr *param_1) {
   long *plVar1;
   long lVar2;
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_LineEdit_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00116738;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "SpinBox";
   local_30 = 7;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar2 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* SpinBox::_initialize_classv() */void SpinBox::_initialize_classv(void)

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
            if ((code *)PTR__bind_methods_0011b050 != Node::_bind_methods) {
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
          if ((code *)PTR__bind_compatibility_methods_0011b040 !=
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
      if ((code *)PTR__bind_methods_0011b048 != Control::_bind_methods) {
        Range::_bind_methods();
      }
      Range::initialize_class()::initialized = '\x01';
    }
    local_58 = "Range";
    local_68 = 0;
    local_50 = 5;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "SpinBox";
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



/* GetTypeInfo<HorizontalAlignment, void>::get_class_info() */

GetTypeInfo<HorizontalAlignment,void> * __thiscall
GetTypeInfo<HorizontalAlignment,void>::get_class_info(GetTypeInfo<HorizontalAlignment,void> *this)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long in_FS_OFFSET;
  undefined8 local_80;
  Vector local_78 [8];
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = 0;
  local_58 = "HorizontalAlignment";
  local_50 = 0x13;
  String::parse_latin1((StrRange *)&local_80);
  String::split((char *)&local_68,SUB81((StrRange *)&local_80,0),0x110c4e);
  if ((local_60 != 0) && (2 < *(long *)(local_60 + -8))) {
    local_70 = 0;
    local_58 = ".";
    local_50 = 1;
    String::parse_latin1((StrRange *)&local_70);
    if (local_60 == 0) {
      lVar2 = -2;
      lVar3 = 0;
    }
    else {
      lVar3 = *(long *)(local_60 + -8);
      lVar2 = lVar3 + -2;
      if (-1 < lVar2) {
        String::operator+((String *)&local_58,(String *)(local_60 + lVar2 * 8));
        String::operator+((String *)local_78,(String *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        goto LAB_00110d55;
      }
    }
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,lVar2,lVar3,"p_index","size()","",false,true)
    ;
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  local_70 = 0;
  local_58 = ".";
  local_50 = 1;
  String::parse_latin1((StrRange *)&local_70);
  String::join(local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
LAB_00110d55:
  CowData<String>::_unref((CowData<String> *)&local_60);
  StringName::StringName((StringName *)&local_58,(String *)local_78,false);
  *(undefined4 *)this = 2;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 0x10006;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  local_68 = 0;
  local_70 = 0;
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  if ((StringName::configured != '\0') && (local_58 != (undefined *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<HorizontalAlignment>::_gen_argument_type_info(int) const */

undefined8 MethodBindTRC<HorizontalAlignment>::_gen_argument_type_info(int param_1)

{
  long lVar1;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  GetTypeInfo<HorizontalAlignment,void>::get_class_info
            ((GetTypeInfo<HorizontalAlignment,void> *)CONCAT44(in_register_0000003c,param_1));
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return CONCAT44(in_register_0000003c,param_1);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<HorizontalAlignment>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<HorizontalAlignment>::_gen_argument_type_info(int param_1)

{
  long lVar1;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar2;
  long in_FS_OFFSET;
  undefined4 local_48 [2];
  long local_40;
  long local_38;
  undefined4 local_30;
  long local_28;
  undefined4 local_20;
  long local_10;
  
  puVar2 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar2 = 0;
  puVar2[6] = 0;
  *(undefined8 *)(puVar2 + 8) = 0;
  puVar2[10] = 6;
  *(undefined1 (*) [16])(puVar2 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    GetTypeInfo<HorizontalAlignment,void>::get_class_info
              ((GetTypeInfo<HorizontalAlignment,void> *)local_48);
    *puVar2 = local_48[0];
    if (*(long *)(puVar2 + 2) != local_40) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + 2));
      lVar1 = local_40;
      local_40 = 0;
      *(long *)(puVar2 + 2) = lVar1;
    }
    if (*(long *)(puVar2 + 4) != local_38) {
      StringName::unref();
      lVar1 = local_38;
      local_38 = 0;
      *(long *)(puVar2 + 4) = lVar1;
    }
    puVar2[6] = local_30;
    if (*(long *)(puVar2 + 8) != local_28) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + 8));
      lVar1 = local_28;
      local_28 = 0;
      *(long *)(puVar2 + 8) = lVar1;
    }
    puVar2[10] = local_20;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_28);
    if ((StringName::configured != '\0') && (local_38 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x001111f8) */
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



/* MethodBindTR<LineEdit*>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTR<LineEdit*>::call
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
      _err_print_error(&_LC72,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00111570;
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
LAB_00111570:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
      _err_print_error(&_LC72,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00111860;
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
LAB_00111860:
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
      goto LAB_00111c6f;
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
                    /* WARNING: Could not recover jumptable at 0x00111b16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_00111c6f:
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
      goto LAB_00111e2f;
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
                    /* WARNING: Could not recover jumptable at 0x00111cd6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_00111e2f:
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
      _err_print_error(&_LC72,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00111f00;
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
LAB_00111f00:
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
      goto LAB_00112112;
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
LAB_00112112:
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
      goto LAB_001122c1;
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
LAB_001122c1:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<double>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<double>::call
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
  double dVar5;
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
      _err_print_error(&_LC72,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_001124f0;
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
      dVar5 = (double)(*(code *)pVVar2)();
      Variant::Variant((Variant *)local_48,dVar5);
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
LAB_001124f0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<double>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<double>::validated_call
          (MethodBindTRC<double> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  undefined8 uVar3;
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
      goto LAB_00112704;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar3 = (*pcVar1)(param_1 + *(long *)(this + 0x60));
  *(undefined8 *)(param_3 + 8) = uVar3;
LAB_00112704:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<double>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<double>::ptrcall
          (MethodBindTRC<double> *this,Object *param_1,void **param_2,void *param_3)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  undefined8 uVar3;
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
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001128b3;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar3 = (*pcVar1)(param_1 + *(long *)(this + 0x60));
  *(undefined8 *)param_3 = uVar3;
LAB_001128b3:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<double>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<double>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

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
      goto LAB_00112bf1;
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
                    /* WARNING: Could not recover jumptable at 0x00112a7e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              (*(undefined8 *)(*(long *)param_3 + 8),
               (long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_00112bf1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<double>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<double>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_00112dd1;
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
                    /* WARNING: Could not recover jumptable at 0x00112c5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(**param_3,(long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_00112dd1:
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
      goto LAB_00112fb1;
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
                    /* WARNING: Could not recover jumptable at 0x00112e3d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined1 *)(*(long *)param_3 + 8));
    return;
  }
LAB_00112fb1:
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
      goto LAB_00113199;
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
                    /* WARNING: Could not recover jumptable at 0x00113022. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3 != '\0');
    return;
  }
LAB_00113199:
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
      _err_print_error(&_LC72,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00113270;
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
LAB_00113270:
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
      local_48 = (Variant **)0x1113c8;
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
      goto LAB_001134ac;
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
LAB_001134ac:
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
      local_48 = (void **)0x1113c8;
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
      goto LAB_0011367d;
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
LAB_0011367d:
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
      goto LAB_001139b1;
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
                    /* WARNING: Could not recover jumptable at 0x0011383d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8);
    return;
  }
LAB_001139b1:
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
      goto LAB_00113b91;
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
                    /* WARNING: Could not recover jumptable at 0x00113a19. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3);
    return;
  }
LAB_00113b91:
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
      _err_print_error(&_LC72,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00113c60;
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
LAB_00113c60:
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
      goto LAB_00113e74;
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
LAB_00113e74:
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
      goto LAB_00114023;
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
LAB_00114023:
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
      goto LAB_00114361;
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
                    /* WARNING: Could not recover jumptable at 0x001141ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_00114361:
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
      goto LAB_00114541;
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
                    /* WARNING: Could not recover jumptable at 0x001143cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_00114541:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<LineEdit*>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTR<LineEdit*>::validated_call
          (MethodBindTR<LineEdit*> *this,Object *param_1,Variant **param_2,Variant *param_3)

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
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
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
      goto LAB_0011470f;
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
LAB_0011470f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<LineEdit*>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<LineEdit*>::ptrcall
          (MethodBindTR<LineEdit*> *this,Object *param_1,void **param_2,void *param_3)

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
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00114761;
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
LAB_00114761:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
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
      _err_print_error(&_LC72,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001149e0;
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
      if (in_R8D != 1) goto LAB_00114a30;
LAB_00114a20:
      pVVar10 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar10 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00114a30:
        uVar6 = 4;
        goto LAB_001149d5;
      }
      if (in_R8D == 1) goto LAB_00114a20;
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
    uVar4 = _LC75;
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
LAB_001149d5:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_001149e0:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, double>(__UnexistingClass*, void
   (__UnexistingClass::*)(double), Variant const**, int, Callable::CallError&, Vector<Variant>
   const&) */

void call_with_variant_args_dv<__UnexistingClass,double>
               (__UnexistingClass *param_1,_func_void_double *param_2,Variant **param_3,int param_4,
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
  double dVar9;
  long in_stack_00000008;
  
  uVar8 = (uint)param_5;
  if (1 < uVar8) {
    uVar6 = 3;
    goto LAB_00114ced;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_00114d50;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_00114d50:
      uVar6 = 4;
LAB_00114ced:
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
      goto LAB_00114c6b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_00114c6b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_double **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,3);
  uVar4 = _LC186;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  dVar9 = Variant::operator_cast_to_double(this);
                    /* WARNING: Could not recover jumptable at 0x00114cc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)(dVar9);
  return;
}



/* MethodBindT<double>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<double>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

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
      _err_print_error(&_LC72,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00114db6;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,double>
            (p_Var2,(_func_void_double *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,
             in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00114db6:
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
    goto LAB_0011507d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_001150e0;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_001150e0:
      uVar6 = 4;
LAB_0011507d:
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
      goto LAB_00114ffb;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_00114ffb:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_bool **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,1);
  uVar4 = _LC73;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_bool(this);
                    /* WARNING: Could not recover jumptable at 0x00115057. Too many branches */
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
      _err_print_error(&_LC72,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00115146;
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
LAB_00115146:
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
    goto LAB_0011540d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_00115470;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_00115470:
      uVar6 = 4;
LAB_0011540d:
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
      goto LAB_0011538b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0011538b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_HorizontalAlignment **)
               (param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC187;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_long(this);
                    /* WARNING: Could not recover jumptable at 0x001153e6. Too many branches */
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
      _err_print_error(&_LC72,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_001154d6;
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
LAB_001154d6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SpinBox::get_minimum_size() const */

void SpinBox::_GLOBAL__sub_I_get_minimum_size(void)

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
/* SpinBox::~SpinBox() */

void __thiscall SpinBox::~SpinBox(SpinBox *this)

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
/* MethodBindTR<LineEdit*>::~MethodBindTR() */

void __thiscall MethodBindTR<LineEdit*>::~MethodBindTR(MethodBindTR<LineEdit*> *this)

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
/* MethodBindTRC<double>::~MethodBindTRC() */

void __thiscall MethodBindTRC<double>::~MethodBindTRC(MethodBindTRC<double> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<double>::~MethodBindT() */

void __thiscall MethodBindT<double>::~MethodBindT(MethodBindT<double> *this)

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
/* CallableCustomMethodPointer<Control, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Control,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Control,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<SpinBox, void, String const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<SpinBox,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<SpinBox,void,String_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<SpinBox, void, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<SpinBox,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<SpinBox,void,bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<SpinBox, void, Ref<InputEvent>
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<SpinBox,void,Ref<InputEvent>const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<SpinBox,void,Ref<InputEvent>const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<SpinBox, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<SpinBox,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<SpinBox,void> *this)

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

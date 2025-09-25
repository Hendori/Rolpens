/* AnimationNodeStateMachineEditor::_stop_connecting() */void AnimationNodeStateMachineEditor::_stop_connecting(AnimationNodeStateMachineEditor *this) {
   this[0xd60] = (AnimationNodeStateMachineEditor)0x0;
   CanvasItem::queue_redraw();
   return;
}
/* AnimationNodeStateMachineEditor::_update_mode() */void AnimationNodeStateMachineEditor::_update_mode(AnimationNodeStateMachineEditor *this) {
   AnimationNodeStateMachineEditor AVar1;
   char cVar2;
   undefined1 uVar3;
   cVar2 = BaseButton::is_pressed();
   if (cVar2 == '\0') {
      CanvasItem::hide();
      AVar1 = this[0xa18];
   }
 else {
      CanvasItem::show();
      if (*(int*)( this + 0xaac ) == 0) {
         if (( *(long*)( this + 0xda0 ) == 0 ) && ( *(long*)( this + 0xda8 ) == 0 )) {
            uVar3 = ( undefined1 ) * (undefined8*)( this + 0xa50 );
         }
 else {
            uVar3 = ( undefined1 ) * (undefined8*)( this + 0xa50 );
         }

      }
 else {
         uVar3 = ( undefined1 ) * (undefined8*)( this + 0xa50 );
      }

      BaseButton::set_disabled((bool)uVar3);
      AVar1 = this[0xa18];
   }

   if (AVar1 != (AnimationNodeStateMachineEditor)0x0) {
      BaseButton::set_pressed(SUB81(*(undefined8*)( this + 0xa28 ), 0));
      BaseButton::set_pressed(SUB81(*(undefined8*)( this + 0xa30 ), 0));
   }

   cVar2 = BaseButton::is_pressed();
   if (cVar2 != '\0') {
      CanvasItem::show();
      return;
   }

   CanvasItem::hide();
   return;
}
/* AnimationNodeStateMachineEditor::_open_editor(String const&) */void AnimationNodeStateMachineEditor::_open_editor(String *param_1) {
   AnimationTreeEditor::enter_editor(AnimationTreeEditor::singleton);
   return;
}
/* AnimationNodeStateMachineEditor::_scroll_changed(double) */void AnimationNodeStateMachineEditor::_scroll_changed(double param_1) {
   long lVar1;
   Vector2 *pVVar2;
   long in_RDI;
   long in_FS_OFFSET;
   undefined4 uVar3;
   uVar3 = SUB84(param_1, 0);
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(char*)( in_RDI + 0xc80 ) == '\0') {
      pVVar2 = *(Vector2**)( in_RDI + 0xa10 );
      Range::get_value();
      Range::get_value();
      uVar3 = AnimationNodeStateMachine::set_graph_offset(pVVar2);
      if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
         CanvasItem::queue_redraw();
         return;
      }

   }
 else if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail(uVar3);
}
/* AnimationNodeStateMachineEditor::_delete_tree_draw() */void AnimationNodeStateMachineEditor::_delete_tree_draw(AnimationNodeStateMachineEditor *this) {
   bool bVar1;
   long lVar2;
   lVar2 = Tree::get_next_selected(*(TreeItem**)( this + 0xce0 ));
   if (lVar2 != 0) {
      bVar1 = (bool)ConfirmationDialog::get_cancel_button();
      BaseButton::set_disabled(bVar1);
      return;
   }

   bVar1 = (bool)ConfirmationDialog::get_cancel_button();
   BaseButton::set_disabled(bVar1);
   return;
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#40}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#40}>::_M_manager(undefined8 *param_1, undefined8 param_2, int param_3) {
   if (param_3 == 0) {
      *param_1 = &AnimationNodeStateMachineEditor::_bind_methods()::
                {lambda(Node*,StringName_const&,StringName_const&)
      #40
      return 0;
   }

   if (param_3 != 1) {
      return 0;
   }

   *param_1 = param_2;
   return 0;
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#39}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#39}>::_M_manager(undefined8 *param_1, undefined8 param_2, int param_3) {
   if (param_3 == 0) {
      *param_1 = &AnimationNodeStateMachineEditor::_bind_methods()::
                {lambda(Node*,StringName_const&,StringName_const&)
      #39
      return 0;
   }

   if (param_3 != 1) {
      return 0;
   }

   *param_1 = param_2;
   return 0;
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#38}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#38}>::_M_manager(undefined8 *param_1, undefined8 param_2, int param_3) {
   if (param_3 == 0) {
      *param_1 = &AnimationNodeStateMachineEditor::_bind_methods()::
                {lambda(Node*,StringName_const&,StringName_const&)
      #38
      return 0;
   }

   if (param_3 != 1) {
      return 0;
   }

   *param_1 = param_2;
   return 0;
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#37}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#37}>::_M_manager(undefined8 *param_1, undefined8 param_2, int param_3) {
   if (param_3 == 0) {
      *param_1 = &AnimationNodeStateMachineEditor::_bind_methods()::
                {lambda(Node*,StringName_const&,StringName_const&)
      #37
      return 0;
   }

   if (param_3 != 1) {
      return 0;
   }

   *param_1 = param_2;
   return 0;
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#36}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#36}>::_M_manager(undefined8 *param_1, undefined8 param_2, int param_3) {
   if (param_3 == 0) {
      *param_1 = &AnimationNodeStateMachineEditor::_bind_methods()::
                {lambda(Node*,StringName_const&,StringName_const&)
      #36
      return 0;
   }

   if (param_3 != 1) {
      return 0;
   }

   *param_1 = param_2;
   return 0;
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#35}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#35}>::_M_manager(undefined8 *param_1, undefined8 param_2, int param_3) {
   if (param_3 == 0) {
      *param_1 = &AnimationNodeStateMachineEditor::_bind_methods()::
                {lambda(Node*,StringName_const&,StringName_const&)
      #35
      return 0;
   }

   if (param_3 != 1) {
      return 0;
   }

   *param_1 = param_2;
   return 0;
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#34}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#34}>::_M_manager(undefined8 *param_1, undefined8 param_2, int param_3) {
   if (param_3 == 0) {
      *param_1 = &AnimationNodeStateMachineEditor::_bind_methods()::
                {lambda(Node*,StringName_const&,StringName_const&)
      #34
      return 0;
   }

   if (param_3 != 1) {
      return 0;
   }

   *param_1 = param_2;
   return 0;
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#33}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#33}>::_M_manager(undefined8 *param_1, undefined8 param_2, int param_3) {
   if (param_3 == 0) {
      *param_1 = &AnimationNodeStateMachineEditor::_bind_methods()::
                {lambda(Node*,StringName_const&,StringName_const&)
      #33
      return 0;
   }

   if (param_3 != 1) {
      return 0;
   }

   *param_1 = param_2;
   return 0;
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#32}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#32}>::_M_manager(undefined8 *param_1, undefined8 param_2, int param_3) {
   if (param_3 == 0) {
      *param_1 = &AnimationNodeStateMachineEditor::_bind_methods()::
                {lambda(Node*,StringName_const&,StringName_const&)
      #32
      return 0;
   }

   if (param_3 != 1) {
      return 0;
   }

   *param_1 = param_2;
   return 0;
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#31}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#31}>::_M_manager(undefined8 *param_1, undefined8 param_2, int param_3) {
   if (param_3 == 0) {
      *param_1 = &AnimationNodeStateMachineEditor::_bind_methods()::
                {lambda(Node*,StringName_const&,StringName_const&)
      #31
      return 0;
   }

   if (param_3 != 1) {
      return 0;
   }

   *param_1 = param_2;
   return 0;
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#30}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#30}>::_M_manager(undefined8 *param_1, undefined8 param_2, int param_3) {
   if (param_3 == 0) {
      *param_1 = &AnimationNodeStateMachineEditor::_bind_methods()::
                {lambda(Node*,StringName_const&,StringName_const&)
      #30
      return 0;
   }

   if (param_3 != 1) {
      return 0;
   }

   *param_1 = param_2;
   return 0;
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#29}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#29}>::_M_manager(undefined8 *param_1, undefined8 param_2, int param_3) {
   if (param_3 == 0) {
      *param_1 = &AnimationNodeStateMachineEditor::_bind_methods()::
                {lambda(Node*,StringName_const&,StringName_const&)
      #29
      return 0;
   }

   if (param_3 != 1) {
      return 0;
   }

   *param_1 = param_2;
   return 0;
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#28}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#28}>::_M_manager(undefined8 *param_1, undefined8 param_2, int param_3) {
   if (param_3 == 0) {
      *param_1 = &AnimationNodeStateMachineEditor::_bind_methods()::
                {lambda(Node*,StringName_const&,StringName_const&)
      #28
      return 0;
   }

   if (param_3 != 1) {
      return 0;
   }

   *param_1 = param_2;
   return 0;
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#27}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#27}>::_M_manager(undefined8 *param_1, undefined8 param_2, int param_3) {
   if (param_3 == 0) {
      *param_1 = &AnimationNodeStateMachineEditor::_bind_methods()::
                {lambda(Node*,StringName_const&,StringName_const&)
      #27
      return 0;
   }

   if (param_3 != 1) {
      return 0;
   }

   *param_1 = param_2;
   return 0;
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#26}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#26}>::_M_manager(undefined8 *param_1, undefined8 param_2, int param_3) {
   if (param_3 == 0) {
      *param_1 = &AnimationNodeStateMachineEditor::_bind_methods()::
                {lambda(Node*,StringName_const&,StringName_const&)
      #26
      return 0;
   }

   if (param_3 != 1) {
      return 0;
   }

   *param_1 = param_2;
   return 0;
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#25}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#25}>::_M_manager(undefined8 *param_1, undefined8 param_2, int param_3) {
   if (param_3 == 0) {
      *param_1 = &AnimationNodeStateMachineEditor::_bind_methods()::
                {lambda(Node*,StringName_const&,StringName_const&)
      #25
      return 0;
   }

   if (param_3 != 1) {
      return 0;
   }

   *param_1 = param_2;
   return 0;
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#24}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#24}>::_M_manager(undefined8 *param_1, undefined8 param_2, int param_3) {
   if (param_3 == 0) {
      *param_1 = &AnimationNodeStateMachineEditor::_bind_methods()::
                {lambda(Node*,StringName_const&,StringName_const&)
      #24
      return 0;
   }

   if (param_3 != 1) {
      return 0;
   }

   *param_1 = param_2;
   return 0;
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#23}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#23}>::_M_manager(undefined8 *param_1, undefined8 param_2, int param_3) {
   if (param_3 == 0) {
      *param_1 = &AnimationNodeStateMachineEditor::_bind_methods()::
                {lambda(Node*,StringName_const&,StringName_const&)
      #23
      return 0;
   }

   if (param_3 != 1) {
      return 0;
   }

   *param_1 = param_2;
   return 0;
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#22}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#22}>::_M_manager(undefined8 *param_1, undefined8 param_2, int param_3) {
   if (param_3 == 0) {
      *param_1 = &AnimationNodeStateMachineEditor::_bind_methods()::
                {lambda(Node*,StringName_const&,StringName_const&)
      #22
      return 0;
   }

   if (param_3 != 1) {
      return 0;
   }

   *param_1 = param_2;
   return 0;
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#21}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#21}>::_M_manager(undefined8 *param_1, undefined8 param_2, int param_3) {
   if (param_3 == 0) {
      *param_1 = &AnimationNodeStateMachineEditor::_bind_methods()::
                {lambda(Node*,StringName_const&,StringName_const&)
      #21
      return 0;
   }

   if (param_3 != 1) {
      return 0;
   }

   *param_1 = param_2;
   return 0;
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#20}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#20}>::_M_manager(undefined8 *param_1, undefined8 param_2, int param_3) {
   if (param_3 == 0) {
      *param_1 = &AnimationNodeStateMachineEditor::_bind_methods()::
                {lambda(Node*,StringName_const&,StringName_const&)
      #20
      return 0;
   }

   if (param_3 != 1) {
      return 0;
   }

   *param_1 = param_2;
   return 0;
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#19}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#19}>::_M_manager(undefined8 *param_1, undefined8 param_2, int param_3) {
   if (param_3 == 0) {
      *param_1 = &AnimationNodeStateMachineEditor::_bind_methods()::
                {lambda(Node*,StringName_const&,StringName_const&)
      #19
      return 0;
   }

   if (param_3 != 1) {
      return 0;
   }

   *param_1 = param_2;
   return 0;
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#18}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#18}>::_M_manager(undefined8 *param_1, undefined8 param_2, int param_3) {
   if (param_3 == 0) {
      *param_1 = &AnimationNodeStateMachineEditor::_bind_methods()::
                {lambda(Node*,StringName_const&,StringName_const&)
      #18
      return 0;
   }

   if (param_3 != 1) {
      return 0;
   }

   *param_1 = param_2;
   return 0;
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#17}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#17}>::_M_manager(undefined8 *param_1, undefined8 param_2, int param_3) {
   if (param_3 == 0) {
      *param_1 = &AnimationNodeStateMachineEditor::_bind_methods()::
                {lambda(Node*,StringName_const&,StringName_const&)
      #17
      return 0;
   }

   if (param_3 != 1) {
      return 0;
   }

   *param_1 = param_2;
   return 0;
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#16}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#16}>::_M_manager(undefined8 *param_1, undefined8 param_2, int param_3) {
   if (param_3 == 0) {
      *param_1 = &AnimationNodeStateMachineEditor::_bind_methods()::
                {lambda(Node*,StringName_const&,StringName_const&)
      #16
      return 0;
   }

   if (param_3 != 1) {
      return 0;
   }

   *param_1 = param_2;
   return 0;
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#15}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#15}>::_M_manager(undefined8 *param_1, undefined8 param_2, int param_3) {
   if (param_3 == 0) {
      *param_1 = &AnimationNodeStateMachineEditor::_bind_methods()::
                {lambda(Node*,StringName_const&,StringName_const&)
      #15
      return 0;
   }

   if (param_3 != 1) {
      return 0;
   }

   *param_1 = param_2;
   return 0;
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#14}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#14}>::_M_manager(undefined8 *param_1, undefined8 param_2, int param_3) {
   if (param_3 == 0) {
      *param_1 = &AnimationNodeStateMachineEditor::_bind_methods()::
                {lambda(Node*,StringName_const&,StringName_const&)
      #14
      return 0;
   }

   if (param_3 != 1) {
      return 0;
   }

   *param_1 = param_2;
   return 0;
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#13}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#13}>::_M_manager(undefined8 *param_1, undefined8 param_2, int param_3) {
   if (param_3 == 0) {
      *param_1 = &AnimationNodeStateMachineEditor::_bind_methods()::
                {lambda(Node*,StringName_const&,StringName_const&)
      #13
      return 0;
   }

   if (param_3 != 1) {
      return 0;
   }

   *param_1 = param_2;
   return 0;
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#12}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#12}>::_M_manager(undefined8 *param_1, undefined8 param_2, int param_3) {
   if (param_3 == 0) {
      *param_1 = &AnimationNodeStateMachineEditor::_bind_methods()::
                {lambda(Node*,StringName_const&,StringName_const&)
      #12
      return 0;
   }

   if (param_3 != 1) {
      return 0;
   }

   *param_1 = param_2;
   return 0;
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#11}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#11}>::_M_manager(undefined8 *param_1, undefined8 param_2, int param_3) {
   if (param_3 == 0) {
      *param_1 = &AnimationNodeStateMachineEditor::_bind_methods()::
                {lambda(Node*,StringName_const&,StringName_const&)
      #11
      return 0;
   }

   if (param_3 != 1) {
      return 0;
   }

   *param_1 = param_2;
   return 0;
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#10}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#10}>::_M_manager(undefined8 *param_1, undefined8 param_2, int param_3) {
   if (param_3 == 0) {
      *param_1 = &AnimationNodeStateMachineEditor::_bind_methods()::
                {lambda(Node*,StringName_const&,StringName_const&)
      #10
      return 0;
   }

   if (param_3 != 1) {
      return 0;
   }

   *param_1 = param_2;
   return 0;
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#9}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#9}>::_M_manager(undefined8 *param_1, undefined8 param_2, int param_3) {
   if (param_3 == 0) {
      *param_1 = &AnimationNodeStateMachineEditor::_bind_methods()::
                {lambda(Node*,StringName_const&,StringName_const&)
      #9
      return 0;
   }

   if (param_3 != 1) {
      return 0;
   }

   *param_1 = param_2;
   return 0;
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#8}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#8}>::_M_manager(undefined8 *param_1, undefined8 param_2, int param_3) {
   if (param_3 == 0) {
      *param_1 = &AnimationNodeStateMachineEditor::_bind_methods()::
                {lambda(Node*,StringName_const&,StringName_const&)
      #8
      return 0;
   }

   if (param_3 != 1) {
      return 0;
   }

   *param_1 = param_2;
   return 0;
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#7}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#7}>::_M_manager(undefined8 *param_1, undefined8 param_2, int param_3) {
   if (param_3 == 0) {
      *param_1 = &AnimationNodeStateMachineEditor::_bind_methods()::
                {lambda(Node*,StringName_const&,StringName_const&)
      #7
      return 0;
   }

   if (param_3 != 1) {
      return 0;
   }

   *param_1 = param_2;
   return 0;
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#6}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#6}>::_M_manager(undefined8 *param_1, undefined8 param_2, int param_3) {
   if (param_3 == 0) {
      *param_1 = &AnimationNodeStateMachineEditor::_bind_methods()::
                {lambda(Node*,StringName_const&,StringName_const&)
      #6
      return 0;
   }

   if (param_3 != 1) {
      return 0;
   }

   *param_1 = param_2;
   return 0;
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#5}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#5}>::_M_manager(undefined8 *param_1, undefined8 param_2, int param_3) {
   if (param_3 == 0) {
      *param_1 = &AnimationNodeStateMachineEditor::_bind_methods()::
                {lambda(Node*,StringName_const&,StringName_const&)
      #5
      return 0;
   }

   if (param_3 != 1) {
      return 0;
   }

   *param_1 = param_2;
   return 0;
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#4}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#4}>::_M_manager(undefined8 *param_1, undefined8 param_2, int param_3) {
   if (param_3 == 0) {
      *param_1 = &AnimationNodeStateMachineEditor::_bind_methods()::
                {lambda(Node*,StringName_const&,StringName_const&)
      #4
      return 0;
   }

   if (param_3 != 1) {
      return 0;
   }

   *param_1 = param_2;
   return 0;
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#3}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#3}>::_M_manager(undefined8 *param_1, undefined8 param_2, int param_3) {
   if (param_3 == 0) {
      *param_1 = &AnimationNodeStateMachineEditor::_bind_methods()::
                {lambda(Node*,StringName_const&,StringName_const&)
      #3
      return 0;
   }

   if (param_3 != 1) {
      return 0;
   }

   *param_1 = param_2;
   return 0;
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#2}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#2}>::_M_manager(undefined8 *param_1, undefined8 param_2, int param_3) {
   if (param_3 == 0) {
      *param_1 = &AnimationNodeStateMachineEditor::_bind_methods()::
                {lambda(Node*,StringName_const&,StringName_const&)
      #2
      return 0;
   }

   if (param_3 != 1) {
      return 0;
   }

   *param_1 = param_2;
   return 0;
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#1}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#1}>::_M_manager(undefined8 *param_1, undefined8 param_2, int param_3) {
   if (param_3 == 0) {
      *param_1 = &AnimationNodeStateMachineEditor::_bind_methods()::
                {lambda(Node*,StringName_const&,StringName_const&)
      #1
      return 0;
   }

   if (param_3 != 1) {
      return 0;
   }

   *param_1 = param_2;
   return 0;
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#20}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#20}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
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
      Control::get_theme_item(local_48, 0, 2, param_3, param_4);
      Variant::get_validated_object();
      /* WARNING: Does not return */
      pcVar2 = (code*)invalidInstructionException();
      ( *pcVar2 )();
   }

   lVar4 = __dynamic_cast(*param_2, &Object::typeinfo, &AnimationNodeStateMachineEditor::typeinfo, 0);
   Control::get_theme_item(local_48, lVar4, 2, param_3, param_4);
   pOVar5 = (Object*)Variant::get_validated_object();
   pOVar1 = *(Object**)( lVar4 + 0xb80 );
   if (pOVar5 == pOVar1) goto LAB_00100aa0;
   if (pOVar5 == (Object*)0x0) {
      if (pOVar1 == (Object*)0x0) goto LAB_00100aa0;
      *(undefined8*)( lVar4 + 0xb80 ) = 0;
   }
 else {
      pOVar5 = (Object*)__dynamic_cast(pOVar5, &Object::typeinfo, &Font::typeinfo, 0);
      if (pOVar1 == pOVar5) goto LAB_00100aa0;
      *(Object**)( lVar4 + 0xb80 ) = pOVar5;
      if (pOVar5 != (Object*)0x0) {
         cVar3 = RefCounted::reference();
         if (cVar3 == '\0') {
            *(undefined8*)( lVar4 + 0xb80 ) = 0;
         }

      }

      if (pOVar1 == (Object*)0x0) goto LAB_00100aa0;
   }

   cVar3 = RefCounted::unreference();
   if (cVar3 != '\0') {
      cVar3 = predelete_handler(pOVar1);
      if (cVar3 != '\0') {
         ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
         Memory::free_static(pOVar1, false);
      }

   }

   LAB_00100aa0:if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AnimationNodeStateMachineEditor::_update_graph() */void AnimationNodeStateMachineEditor::_update_graph(AnimationNodeStateMachineEditor *this) {
   if (this[0xc80] != (AnimationNodeStateMachineEditor)0x0) {
      return;
   }

   this[0xc80] = (AnimationNodeStateMachineEditor)0x1;
   CanvasItem::queue_redraw();
   this[0xc80] = (AnimationNodeStateMachineEditor)0x0;
   return;
}
/* void Ref<AnimationNodeStateMachine>::TEMPNAMEPLACEHOLDERVALUE(Ref<AnimationNode> const&) [clone
   .isra.0] */void Ref<AnimationNodeStateMachine>::operator =(Ref<AnimationNodeStateMachine> *this, Ref *param_1) {
   Object *pOVar1;
   char cVar2;
   Object *pOVar3;
   pOVar1 = *(Object**)this;
   if (param_1 == (Ref*)0x0) {
      if (pOVar1 == (Object*)0x0) {
         return;
      }

      *(undefined8*)this = 0;
   }
 else {
      pOVar3 = (Object*)__dynamic_cast(param_1, &Object::typeinfo, &AnimationNodeStateMachine::typeinfo, 0);
      if (pOVar3 == pOVar1) {
         return;
      }

      *(Object**)this = pOVar3;
      if (( pOVar3 != (Object*)0x0 ) && ( cVar2 = cVar2 == '\0' )) {
         *(undefined8*)this = 0;
      }

      if (pOVar1 == (Object*)0x0) {
         return;
      }

   }

   cVar2 = RefCounted::unreference();
   if (( cVar2 != '\0' ) && ( cVar2 = cVar2 != '\0' )) {
      ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
      Memory::free_static(pOVar1, false);
      return;
   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#27}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#27}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
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
      _DAT_00000bd0 = Variant::operator_cast_to_Color((Variant*)local_48);
      /* WARNING: Does not return */
      pcVar1 = (code*)invalidInstructionException();
      _DAT_00000bd8 = in_XMM1_Qa;
      ( *pcVar1 )();
   }

   lVar2 = __dynamic_cast(*param_2, &Object::typeinfo, &AnimationNodeStateMachineEditor::typeinfo, 0);
   Control::get_theme_item(local_48, lVar2, 0, param_3, param_4);
   uVar3 = Variant::operator_cast_to_Color((Variant*)local_48);
   *(undefined8*)( lVar2 + 0xbd0 ) = uVar3;
   *(undefined8*)( lVar2 + 0xbd8 ) = in_XMM1_Qa;
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
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#31}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#31}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
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
      _DAT_00000c10 = Variant::operator_cast_to_Color((Variant*)local_48);
      /* WARNING: Does not return */
      pcVar1 = (code*)invalidInstructionException();
      _DAT_00000c18 = in_XMM1_Qa;
      ( *pcVar1 )();
   }

   lVar2 = __dynamic_cast(*param_2, &Object::typeinfo, &AnimationNodeStateMachineEditor::typeinfo, 0);
   Control::get_theme_item(local_48, lVar2, 0, param_3, param_4);
   uVar3 = Variant::operator_cast_to_Color((Variant*)local_48);
   *(undefined8*)( lVar2 + 0xc10 ) = uVar3;
   *(undefined8*)( lVar2 + 0xc18 ) = in_XMM1_Qa;
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
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#25}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#25}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
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
      _DAT_00000bb0 = Variant::operator_cast_to_Color((Variant*)local_48);
      /* WARNING: Does not return */
      pcVar1 = (code*)invalidInstructionException();
      _DAT_00000bb8 = in_XMM1_Qa;
      ( *pcVar1 )();
   }

   lVar2 = __dynamic_cast(*param_2, &Object::typeinfo, &AnimationNodeStateMachineEditor::typeinfo, 0);
   Control::get_theme_item(local_48, lVar2, 0, param_3, param_4);
   uVar3 = Variant::operator_cast_to_Color((Variant*)local_48);
   *(undefined8*)( lVar2 + 0xbb0 ) = uVar3;
   *(undefined8*)( lVar2 + 3000 ) = in_XMM1_Qa;
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
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#39}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#39}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
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
      _DAT_00000c60 = Variant::operator_cast_to_Color((Variant*)local_48);
      /* WARNING: Does not return */
      pcVar1 = (code*)invalidInstructionException();
      _DAT_00000c68 = in_XMM1_Qa;
      ( *pcVar1 )();
   }

   lVar2 = __dynamic_cast(*param_2, &Object::typeinfo, &AnimationNodeStateMachineEditor::typeinfo, 0);
   Control::get_theme_item(local_48, lVar2, 0, param_3, param_4);
   uVar3 = Variant::operator_cast_to_Color((Variant*)local_48);
   *(undefined8*)( lVar2 + 0xc60 ) = uVar3;
   *(undefined8*)( lVar2 + 0xc68 ) = in_XMM1_Qa;
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
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#40}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#40}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
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
      _DAT_00000c70 = Variant::operator_cast_to_Color((Variant*)local_48);
      /* WARNING: Does not return */
      pcVar1 = (code*)invalidInstructionException();
      _DAT_00000c78 = in_XMM1_Qa;
      ( *pcVar1 )();
   }

   lVar2 = __dynamic_cast(*param_2, &Object::typeinfo, &AnimationNodeStateMachineEditor::typeinfo, 0);
   Control::get_theme_item(local_48, lVar2, 0, param_3, param_4);
   uVar3 = Variant::operator_cast_to_Color((Variant*)local_48);
   *(undefined8*)( lVar2 + 0xc70 ) = uVar3;
   *(undefined8*)( lVar2 + 0xc78 ) = in_XMM1_Qa;
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
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#28}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#28}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
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
      _DAT_00000be0 = Variant::operator_cast_to_Color((Variant*)local_48);
      /* WARNING: Does not return */
      pcVar1 = (code*)invalidInstructionException();
      _DAT_00000be8 = in_XMM1_Qa;
      ( *pcVar1 )();
   }

   lVar2 = __dynamic_cast(*param_2, &Object::typeinfo, &AnimationNodeStateMachineEditor::typeinfo, 0);
   Control::get_theme_item(local_48, lVar2, 0, param_3, param_4);
   uVar3 = Variant::operator_cast_to_Color((Variant*)local_48);
   *(undefined8*)( lVar2 + 0xbe0 ) = uVar3;
   *(undefined8*)( lVar2 + 0xbe8 ) = in_XMM1_Qa;
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
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#32}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#32}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
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
      _DAT_00000c20 = Variant::operator_cast_to_Color((Variant*)local_48);
      /* WARNING: Does not return */
      pcVar1 = (code*)invalidInstructionException();
      _DAT_00000c28 = in_XMM1_Qa;
      ( *pcVar1 )();
   }

   lVar2 = __dynamic_cast(*param_2, &Object::typeinfo, &AnimationNodeStateMachineEditor::typeinfo, 0);
   Control::get_theme_item(local_48, lVar2, 0, param_3, param_4);
   uVar3 = Variant::operator_cast_to_Color((Variant*)local_48);
   *(undefined8*)( lVar2 + 0xc20 ) = uVar3;
   *(undefined8*)( lVar2 + 0xc28 ) = in_XMM1_Qa;
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
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#29}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#29}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
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
      _DAT_00000bf0 = Variant::operator_cast_to_Color((Variant*)local_48);
      /* WARNING: Does not return */
      pcVar1 = (code*)invalidInstructionException();
      _DAT_00000bf8 = in_XMM1_Qa;
      ( *pcVar1 )();
   }

   lVar2 = __dynamic_cast(*param_2, &Object::typeinfo, &AnimationNodeStateMachineEditor::typeinfo, 0);
   Control::get_theme_item(local_48, lVar2, 0, param_3, param_4);
   uVar3 = Variant::operator_cast_to_Color((Variant*)local_48);
   *(undefined8*)( lVar2 + 0xbf0 ) = uVar3;
   *(undefined8*)( lVar2 + 0xbf8 ) = in_XMM1_Qa;
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
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#30}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#30}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
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
      _DAT_00000c00 = Variant::operator_cast_to_Color((Variant*)local_48);
      /* WARNING: Does not return */
      pcVar1 = (code*)invalidInstructionException();
      _DAT_00000c08 = in_XMM1_Qa;
      ( *pcVar1 )();
   }

   lVar2 = __dynamic_cast(*param_2, &Object::typeinfo, &AnimationNodeStateMachineEditor::typeinfo, 0);
   Control::get_theme_item(local_48, lVar2, 0, param_3, param_4);
   uVar3 = Variant::operator_cast_to_Color((Variant*)local_48);
   *(undefined8*)( lVar2 + 0xc00 ) = uVar3;
   *(undefined8*)( lVar2 + 0xc08 ) = in_XMM1_Qa;
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
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#26}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#26}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
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
      _DAT_00000bc0 = Variant::operator_cast_to_Color((Variant*)local_48);
      /* WARNING: Does not return */
      pcVar1 = (code*)invalidInstructionException();
      _DAT_00000bc8 = in_XMM1_Qa;
      ( *pcVar1 )();
   }

   lVar2 = __dynamic_cast(*param_2, &Object::typeinfo, &AnimationNodeStateMachineEditor::typeinfo, 0);
   Control::get_theme_item(local_48, lVar2, 0, param_3, param_4);
   uVar3 = Variant::operator_cast_to_Color((Variant*)local_48);
   *(undefined8*)( lVar2 + 0xbc0 ) = uVar3;
   *(undefined8*)( lVar2 + 0xbc8 ) = in_XMM1_Qa;
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
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#22}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#22}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
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
      _DAT_00000b8c = Variant::operator_cast_to_Color((Variant*)local_48);
      /* WARNING: Does not return */
      pcVar1 = (code*)invalidInstructionException();
      _DAT_00000b94 = in_XMM1_Qa;
      ( *pcVar1 )();
   }

   lVar2 = __dynamic_cast(*param_2, &Object::typeinfo, &AnimationNodeStateMachineEditor::typeinfo, 0);
   Control::get_theme_item(local_48, lVar2, 0, param_3, param_4);
   uVar3 = Variant::operator_cast_to_Color((Variant*)local_48);
   *(undefined8*)( lVar2 + 0xb8c ) = uVar3;
   *(undefined8*)( lVar2 + 0xb94 ) = in_XMM1_Qa;
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
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#3}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#3}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
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
      _DAT_00000af0 = Variant::operator_cast_to_Color((Variant*)local_48);
      /* WARNING: Does not return */
      pcVar1 = (code*)invalidInstructionException();
      _DAT_00000af8 = in_XMM1_Qa;
      ( *pcVar1 )();
   }

   lVar2 = __dynamic_cast(*param_2, &Object::typeinfo, &AnimationNodeStateMachineEditor::typeinfo, 0);
   Control::get_theme_item(local_48, lVar2, 0, param_3, param_4);
   uVar3 = Variant::operator_cast_to_Color((Variant*)local_48);
   *(undefined8*)( lVar2 + 0xaf0 ) = uVar3;
   *(undefined8*)( lVar2 + 0xaf8 ) = in_XMM1_Qa;
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
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#21}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#21}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
   code *pcVar1;
   int iVar2;
   long lVar3;
   long in_FS_OFFSET;
   int local_48[6];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*param_2 == (Node*)0x0) {
      Control::get_theme_item(local_48, 0, 3, param_3, param_4);
      Variant::operator_cast_to_int((Variant*)local_48);
      _DAT_00000b88 = 0;
      /* WARNING: Does not return */
      pcVar1 = (code*)invalidInstructionException();
      ( *pcVar1 )();
   }

   lVar3 = __dynamic_cast(*param_2, &Object::typeinfo, &AnimationNodeStateMachineEditor::typeinfo, 0);
   Control::get_theme_item(local_48, lVar3, 3, param_3, param_4);
   iVar2 = Variant::operator_cast_to_int((Variant*)local_48);
   *(int*)( lVar3 + 0xb88 ) = iVar2;
   if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
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
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#12}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#12}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
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

   lVar4 = __dynamic_cast(*param_2, &Object::typeinfo, &AnimationNodeStateMachineEditor::typeinfo, 0);
   Control::get_theme_item(local_48, lVar4, 4, param_3, param_4);
   pOVar5 = (Object*)Variant::get_validated_object();
   pOVar1 = *(Object**)( lVar4 + 0xb40 );
   if (pOVar5 == pOVar1) goto LAB_001016f0;
   if (pOVar5 == (Object*)0x0) {
      if (pOVar1 == (Object*)0x0) goto LAB_001016f0;
      *(undefined8*)( lVar4 + 0xb40 ) = 0;
   }
 else {
      pOVar5 = (Object*)__dynamic_cast(pOVar5, &Object::typeinfo, &Texture2D::typeinfo, 0);
      if (pOVar1 == pOVar5) goto LAB_001016f0;
      *(Object**)( lVar4 + 0xb40 ) = pOVar5;
      if (pOVar5 != (Object*)0x0) {
         cVar3 = RefCounted::reference();
         if (cVar3 == '\0') {
            *(undefined8*)( lVar4 + 0xb40 ) = 0;
         }

      }

      if (pOVar1 == (Object*)0x0) goto LAB_001016f0;
   }

   cVar3 = RefCounted::unreference();
   if (cVar3 != '\0') {
      cVar3 = predelete_handler(pOVar1);
      if (cVar3 != '\0') {
         ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
         Memory::free_static(pOVar1, false);
      }

   }

   LAB_001016f0:if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#16}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#16}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
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

   lVar4 = __dynamic_cast(*param_2, &Object::typeinfo, &AnimationNodeStateMachineEditor::typeinfo, 0);
   Control::get_theme_item(local_48, lVar4, 5, param_3, param_4);
   pOVar5 = (Object*)Variant::get_validated_object();
   pOVar1 = *(Object**)( lVar4 + 0xb60 );
   if (pOVar5 == pOVar1) goto LAB_00101840;
   if (pOVar5 == (Object*)0x0) {
      if (pOVar1 == (Object*)0x0) goto LAB_00101840;
      *(undefined8*)( lVar4 + 0xb60 ) = 0;
   }
 else {
      pOVar5 = (Object*)__dynamic_cast(pOVar5, &Object::typeinfo, &StyleBox::typeinfo, 0);
      if (pOVar1 == pOVar5) goto LAB_00101840;
      *(Object**)( lVar4 + 0xb60 ) = pOVar5;
      if (pOVar5 != (Object*)0x0) {
         cVar3 = RefCounted::reference();
         if (cVar3 == '\0') {
            *(undefined8*)( lVar4 + 0xb60 ) = 0;
         }

      }

      if (pOVar1 == (Object*)0x0) goto LAB_00101840;
   }

   cVar3 = RefCounted::unreference();
   if (cVar3 != '\0') {
      cVar3 = predelete_handler(pOVar1);
      if (cVar3 != '\0') {
         ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
         Memory::free_static(pOVar1, false);
      }

   }

   LAB_00101840:if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AnimationNodeStateMachineEditor::can_edit(Ref<AnimationNode> const&) */undefined4 AnimationNodeStateMachineEditor::can_edit(AnimationNodeStateMachineEditor *this, Ref *param_1) {
   char cVar1;
   undefined4 uVar2;
   Object *pOVar3;
   if (( ( *(long*)param_1 == 0 ) || ( pOVar3 = (Object*)__dynamic_cast(*(long*)param_1, &Object::typeinfo, &AnimationNodeStateMachine::typeinfo, 0) ),pOVar3 == (Object*)0x0 )) {
      return 0;
   }

   cVar1 = RefCounted::unreference();
   if (cVar1 == '\0') {
      return uVar2;
   }

   cVar1 = predelete_handler(pOVar3);
   if (cVar1 == '\0') {
      return uVar2;
   }

   ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
   Memory::free_static(pOVar3, false);
   return uVar2;
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#19}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#19}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
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

   lVar4 = __dynamic_cast(*param_2, &Object::typeinfo, &AnimationNodeStateMachineEditor::typeinfo, 0);
   Control::get_theme_item(local_48, lVar4, 5, param_3, param_4);
   pOVar5 = (Object*)Variant::get_validated_object();
   pOVar1 = *(Object**)( lVar4 + 0xb78 );
   if (pOVar5 == pOVar1) goto LAB_00101a20;
   if (pOVar5 == (Object*)0x0) {
      if (pOVar1 == (Object*)0x0) goto LAB_00101a20;
      *(undefined8*)( lVar4 + 0xb78 ) = 0;
   }
 else {
      pOVar5 = (Object*)__dynamic_cast(pOVar5, &Object::typeinfo, &StyleBox::typeinfo, 0);
      if (pOVar1 == pOVar5) goto LAB_00101a20;
      *(Object**)( lVar4 + 0xb78 ) = pOVar5;
      if (pOVar5 != (Object*)0x0) {
         cVar3 = RefCounted::reference();
         if (cVar3 == '\0') {
            *(undefined8*)( lVar4 + 0xb78 ) = 0;
         }

      }

      if (pOVar1 == (Object*)0x0) goto LAB_00101a20;
   }

   cVar3 = RefCounted::unreference();
   if (cVar3 != '\0') {
      cVar3 = predelete_handler(pOVar1);
      if (cVar3 != '\0') {
         ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
         Memory::free_static(pOVar1, false);
      }

   }

   LAB_00101a20:if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#15}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#15}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
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

   lVar4 = __dynamic_cast(*param_2, &Object::typeinfo, &AnimationNodeStateMachineEditor::typeinfo, 0);
   Control::get_theme_item(local_48, lVar4, 5, param_3, param_4);
   pOVar5 = (Object*)Variant::get_validated_object();
   pOVar1 = *(Object**)( lVar4 + 0xb58 );
   if (pOVar5 == pOVar1) goto LAB_00101b70;
   if (pOVar5 == (Object*)0x0) {
      if (pOVar1 == (Object*)0x0) goto LAB_00101b70;
      *(undefined8*)( lVar4 + 0xb58 ) = 0;
   }
 else {
      pOVar5 = (Object*)__dynamic_cast(pOVar5, &Object::typeinfo, &StyleBox::typeinfo, 0);
      if (pOVar1 == pOVar5) goto LAB_00101b70;
      *(Object**)( lVar4 + 0xb58 ) = pOVar5;
      if (pOVar5 != (Object*)0x0) {
         cVar3 = RefCounted::reference();
         if (cVar3 == '\0') {
            *(undefined8*)( lVar4 + 0xb58 ) = 0;
         }

      }

      if (pOVar1 == (Object*)0x0) goto LAB_00101b70;
   }

   cVar3 = RefCounted::unreference();
   if (cVar3 != '\0') {
      cVar3 = predelete_handler(pOVar1);
      if (cVar3 != '\0') {
         ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
         Memory::free_static(pOVar1, false);
      }

   }

   LAB_00101b70:if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#17}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#17}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
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

   lVar4 = __dynamic_cast(*param_2, &Object::typeinfo, &AnimationNodeStateMachineEditor::typeinfo, 0);
   Control::get_theme_item(local_48, lVar4, 5, param_3, param_4);
   pOVar5 = (Object*)Variant::get_validated_object();
   pOVar1 = *(Object**)( lVar4 + 0xb68 );
   if (pOVar5 == pOVar1) goto LAB_00101cc0;
   if (pOVar5 == (Object*)0x0) {
      if (pOVar1 == (Object*)0x0) goto LAB_00101cc0;
      *(undefined8*)( lVar4 + 0xb68 ) = 0;
   }
 else {
      pOVar5 = (Object*)__dynamic_cast(pOVar5, &Object::typeinfo, &StyleBox::typeinfo, 0);
      if (pOVar1 == pOVar5) goto LAB_00101cc0;
      *(Object**)( lVar4 + 0xb68 ) = pOVar5;
      if (pOVar5 != (Object*)0x0) {
         cVar3 = RefCounted::reference();
         if (cVar3 == '\0') {
            *(undefined8*)( lVar4 + 0xb68 ) = 0;
         }

      }

      if (pOVar1 == (Object*)0x0) goto LAB_00101cc0;
   }

   cVar3 = RefCounted::unreference();
   if (cVar3 != '\0') {
      cVar3 = predelete_handler(pOVar1);
      if (cVar3 != '\0') {
         ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
         Memory::free_static(pOVar1, false);
      }

   }

   LAB_00101cc0:if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#1}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#1}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
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

   lVar4 = __dynamic_cast(*param_2, &Object::typeinfo, &AnimationNodeStateMachineEditor::typeinfo, 0);
   Control::get_theme_item(local_48, lVar4, 5, param_3, param_4);
   pOVar5 = (Object*)Variant::get_validated_object();
   pOVar1 = *(Object**)( lVar4 + 0xae0 );
   if (pOVar5 == pOVar1) goto LAB_00101e10;
   if (pOVar5 == (Object*)0x0) {
      if (pOVar1 == (Object*)0x0) goto LAB_00101e10;
      *(undefined8*)( lVar4 + 0xae0 ) = 0;
   }
 else {
      pOVar5 = (Object*)__dynamic_cast(pOVar5, &Object::typeinfo, &StyleBox::typeinfo, 0);
      if (pOVar1 == pOVar5) goto LAB_00101e10;
      *(Object**)( lVar4 + 0xae0 ) = pOVar5;
      if (pOVar5 != (Object*)0x0) {
         cVar3 = RefCounted::reference();
         if (cVar3 == '\0') {
            *(undefined8*)( lVar4 + 0xae0 ) = 0;
         }

      }

      if (pOVar1 == (Object*)0x0) goto LAB_00101e10;
   }

   cVar3 = RefCounted::unreference();
   if (cVar3 != '\0') {
      cVar3 = predelete_handler(pOVar1);
      if (cVar3 != '\0') {
         ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
         Memory::free_static(pOVar1, false);
      }

   }

   LAB_00101e10:if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#2}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#2}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
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

   lVar4 = __dynamic_cast(*param_2, &Object::typeinfo, &AnimationNodeStateMachineEditor::typeinfo, 0);
   Control::get_theme_item(local_48, lVar4, 5, param_3, param_4);
   pOVar5 = (Object*)Variant::get_validated_object();
   pOVar1 = *(Object**)( lVar4 + 0xae8 );
   if (pOVar5 == pOVar1) goto LAB_00101f60;
   if (pOVar5 == (Object*)0x0) {
      if (pOVar1 == (Object*)0x0) goto LAB_00101f60;
      *(undefined8*)( lVar4 + 0xae8 ) = 0;
   }
 else {
      pOVar5 = (Object*)__dynamic_cast(pOVar5, &Object::typeinfo, &StyleBox::typeinfo, 0);
      if (pOVar1 == pOVar5) goto LAB_00101f60;
      *(Object**)( lVar4 + 0xae8 ) = pOVar5;
      if (pOVar5 != (Object*)0x0) {
         cVar3 = RefCounted::reference();
         if (cVar3 == '\0') {
            *(undefined8*)( lVar4 + 0xae8 ) = 0;
         }

      }

      if (pOVar1 == (Object*)0x0) goto LAB_00101f60;
   }

   cVar3 = RefCounted::unreference();
   if (cVar3 != '\0') {
      cVar3 = predelete_handler(pOVar1);
      if (cVar3 != '\0') {
         ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
         Memory::free_static(pOVar1, false);
      }

   }

   LAB_00101f60:if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#18}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#18}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
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

   lVar4 = __dynamic_cast(*param_2, &Object::typeinfo, &AnimationNodeStateMachineEditor::typeinfo, 0);
   Control::get_theme_item(local_48, lVar4, 5, param_3, param_4);
   pOVar5 = (Object*)Variant::get_validated_object();
   pOVar1 = *(Object**)( lVar4 + 0xb70 );
   if (pOVar5 == pOVar1) goto LAB_001020b0;
   if (pOVar5 == (Object*)0x0) {
      if (pOVar1 == (Object*)0x0) goto LAB_001020b0;
      *(undefined8*)( lVar4 + 0xb70 ) = 0;
   }
 else {
      pOVar5 = (Object*)__dynamic_cast(pOVar5, &Object::typeinfo, &StyleBox::typeinfo, 0);
      if (pOVar1 == pOVar5) goto LAB_001020b0;
      *(Object**)( lVar4 + 0xb70 ) = pOVar5;
      if (pOVar5 != (Object*)0x0) {
         cVar3 = RefCounted::reference();
         if (cVar3 == '\0') {
            *(undefined8*)( lVar4 + 0xb70 ) = 0;
         }

      }

      if (pOVar1 == (Object*)0x0) goto LAB_001020b0;
   }

   cVar3 = RefCounted::unreference();
   if (cVar3 != '\0') {
      cVar3 = predelete_handler(pOVar1);
      if (cVar3 != '\0') {
         ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
         Memory::free_static(pOVar1, false);
      }

   }

   LAB_001020b0:if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* CowData<int>::_copy_on_write() [clone .isra.0] */void CowData<int>::_copy_on_write(CowData<int> *this) {
   long *plVar1;
   long lVar2;
   code *pcVar3;
   undefined8 *puVar4;
   ulong uVar5;
   size_t __n;
   if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
      return;
   }

   if (*(long*)this == 0) {
      /* WARNING: Does not return */
      pcVar3 = (code*)invalidInstructionException();
      ( *pcVar3 )();
   }

   lVar2 = *(long*)( *(long*)this + -8 );
   uVar5 = 0x10;
   __n = lVar2 * 4;
   if (__n != 0) {
      uVar5 = __n - 1 | __n - 1 >> 1;
      uVar5 = uVar5 | uVar5 >> 2;
      uVar5 = uVar5 | uVar5 >> 4;
      uVar5 = uVar5 | uVar5 >> 8;
      uVar5 = uVar5 | uVar5 >> 0x10;
      uVar5 = ( uVar5 | uVar5 >> 0x20 ) + 0x11;
   }

   puVar4 = (undefined8*)Memory::alloc_static(uVar5, false);
   if (puVar4 != (undefined8*)0x0) {
      *puVar4 = 1;
      puVar4[1] = lVar2;
      memcpy(puVar4 + 2, *(void**)this, __n);
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

      }

      *(undefined8**)this = puVar4 + 2;
      return;
   }

   _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
   return;
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#38}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#38}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
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

   lVar4 = __dynamic_cast(*param_2, &Object::typeinfo, &AnimationNodeStateMachineEditor::typeinfo, 0);
   Control::get_theme_item(local_48, lVar4, 4, param_3, param_4);
   pOVar5 = (Object*)Variant::get_validated_object();
   pOVar1 = *(Object**)( lVar4 + 0xc58 );
   if (pOVar5 == pOVar1) goto LAB_00102320;
   if (pOVar5 == (Object*)0x0) {
      if (pOVar1 == (Object*)0x0) goto LAB_00102320;
      *(undefined8*)( lVar4 + 0xc58 ) = 0;
   }
 else {
      pOVar5 = (Object*)__dynamic_cast(pOVar5, &Object::typeinfo, &Texture2D::typeinfo, 0);
      if (pOVar1 == pOVar5) goto LAB_00102320;
      *(Object**)( lVar4 + 0xc58 ) = pOVar5;
      if (pOVar5 != (Object*)0x0) {
         cVar3 = RefCounted::reference();
         if (cVar3 == '\0') {
            *(undefined8*)( lVar4 + 0xc58 ) = 0;
         }

      }

      if (pOVar1 == (Object*)0x0) goto LAB_00102320;
   }

   cVar3 = RefCounted::unreference();
   if (cVar3 != '\0') {
      cVar3 = predelete_handler(pOVar1);
      if (cVar3 != '\0') {
         ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
         Memory::free_static(pOVar1, false);
      }

   }

   LAB_00102320:if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#6}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#6}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
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

   lVar4 = __dynamic_cast(*param_2, &Object::typeinfo, &AnimationNodeStateMachineEditor::typeinfo, 0);
   Control::get_theme_item(local_48, lVar4, 4, param_3, param_4);
   pOVar5 = (Object*)Variant::get_validated_object();
   pOVar1 = *(Object**)( lVar4 + 0xb10 );
   if (pOVar5 == pOVar1) goto LAB_00102470;
   if (pOVar5 == (Object*)0x0) {
      if (pOVar1 == (Object*)0x0) goto LAB_00102470;
      *(undefined8*)( lVar4 + 0xb10 ) = 0;
   }
 else {
      pOVar5 = (Object*)__dynamic_cast(pOVar5, &Object::typeinfo, &Texture2D::typeinfo, 0);
      if (pOVar1 == pOVar5) goto LAB_00102470;
      *(Object**)( lVar4 + 0xb10 ) = pOVar5;
      if (pOVar5 != (Object*)0x0) {
         cVar3 = RefCounted::reference();
         if (cVar3 == '\0') {
            *(undefined8*)( lVar4 + 0xb10 ) = 0;
         }

      }

      if (pOVar1 == (Object*)0x0) goto LAB_00102470;
   }

   cVar3 = RefCounted::unreference();
   if (cVar3 != '\0') {
      cVar3 = predelete_handler(pOVar1);
      if (cVar3 != '\0') {
         ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
         Memory::free_static(pOVar1, false);
      }

   }

   LAB_00102470:if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#14}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#14}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
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

   lVar4 = __dynamic_cast(*param_2, &Object::typeinfo, &AnimationNodeStateMachineEditor::typeinfo, 0);
   Control::get_theme_item(local_48, lVar4, 4, param_3, param_4);
   pOVar5 = (Object*)Variant::get_validated_object();
   pOVar1 = *(Object**)( lVar4 + 0xb50 );
   if (pOVar5 == pOVar1) goto LAB_001025c0;
   if (pOVar5 == (Object*)0x0) {
      if (pOVar1 == (Object*)0x0) goto LAB_001025c0;
      *(undefined8*)( lVar4 + 0xb50 ) = 0;
   }
 else {
      pOVar5 = (Object*)__dynamic_cast(pOVar5, &Object::typeinfo, &Texture2D::typeinfo, 0);
      if (pOVar1 == pOVar5) goto LAB_001025c0;
      *(Object**)( lVar4 + 0xb50 ) = pOVar5;
      if (pOVar5 != (Object*)0x0) {
         cVar3 = RefCounted::reference();
         if (cVar3 == '\0') {
            *(undefined8*)( lVar4 + 0xb50 ) = 0;
         }

      }

      if (pOVar1 == (Object*)0x0) goto LAB_001025c0;
   }

   cVar3 = RefCounted::unreference();
   if (cVar3 != '\0') {
      cVar3 = predelete_handler(pOVar1);
      if (cVar3 != '\0') {
         ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
         Memory::free_static(pOVar1, false);
      }

   }

   LAB_001025c0:if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#23}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#23}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
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

   lVar4 = __dynamic_cast(*param_2, &Object::typeinfo, &AnimationNodeStateMachineEditor::typeinfo, 0);
   Control::get_theme_item(local_48, lVar4, 4, param_3, param_4);
   pOVar5 = (Object*)Variant::get_validated_object();
   pOVar1 = *(Object**)( lVar4 + 0xba0 );
   if (pOVar5 == pOVar1) goto LAB_00102710;
   if (pOVar5 == (Object*)0x0) {
      if (pOVar1 == (Object*)0x0) goto LAB_00102710;
      *(undefined8*)( lVar4 + 0xba0 ) = 0;
   }
 else {
      pOVar5 = (Object*)__dynamic_cast(pOVar5, &Object::typeinfo, &Texture2D::typeinfo, 0);
      if (pOVar1 == pOVar5) goto LAB_00102710;
      *(Object**)( lVar4 + 0xba0 ) = pOVar5;
      if (pOVar5 != (Object*)0x0) {
         cVar3 = RefCounted::reference();
         if (cVar3 == '\0') {
            *(undefined8*)( lVar4 + 0xba0 ) = 0;
         }

      }

      if (pOVar1 == (Object*)0x0) goto LAB_00102710;
   }

   cVar3 = RefCounted::unreference();
   if (cVar3 != '\0') {
      cVar3 = predelete_handler(pOVar1);
      if (cVar3 != '\0') {
         ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
         Memory::free_static(pOVar1, false);
      }

   }

   LAB_00102710:if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#11}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#11}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
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

   lVar4 = __dynamic_cast(*param_2, &Object::typeinfo, &AnimationNodeStateMachineEditor::typeinfo, 0);
   Control::get_theme_item(local_48, lVar4, 4, param_3, param_4);
   pOVar5 = (Object*)Variant::get_validated_object();
   pOVar1 = *(Object**)( lVar4 + 0xb38 );
   if (pOVar5 == pOVar1) goto LAB_00102860;
   if (pOVar5 == (Object*)0x0) {
      if (pOVar1 == (Object*)0x0) goto LAB_00102860;
      *(undefined8*)( lVar4 + 0xb38 ) = 0;
   }
 else {
      pOVar5 = (Object*)__dynamic_cast(pOVar5, &Object::typeinfo, &Texture2D::typeinfo, 0);
      if (pOVar1 == pOVar5) goto LAB_00102860;
      *(Object**)( lVar4 + 0xb38 ) = pOVar5;
      if (pOVar5 != (Object*)0x0) {
         cVar3 = RefCounted::reference();
         if (cVar3 == '\0') {
            *(undefined8*)( lVar4 + 0xb38 ) = 0;
         }

      }

      if (pOVar1 == (Object*)0x0) goto LAB_00102860;
   }

   cVar3 = RefCounted::unreference();
   if (cVar3 != '\0') {
      cVar3 = predelete_handler(pOVar1);
      if (cVar3 != '\0') {
         ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
         Memory::free_static(pOVar1, false);
      }

   }

   LAB_00102860:if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#5}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#5}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
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

   lVar4 = __dynamic_cast(*param_2, &Object::typeinfo, &AnimationNodeStateMachineEditor::typeinfo, 0);
   Control::get_theme_item(local_48, lVar4, 4, param_3, param_4);
   pOVar5 = (Object*)Variant::get_validated_object();
   pOVar1 = *(Object**)( lVar4 + 0xb08 );
   if (pOVar5 == pOVar1) goto LAB_001029b0;
   if (pOVar5 == (Object*)0x0) {
      if (pOVar1 == (Object*)0x0) goto LAB_001029b0;
      *(undefined8*)( lVar4 + 0xb08 ) = 0;
   }
 else {
      pOVar5 = (Object*)__dynamic_cast(pOVar5, &Object::typeinfo, &Texture2D::typeinfo, 0);
      if (pOVar1 == pOVar5) goto LAB_001029b0;
      *(Object**)( lVar4 + 0xb08 ) = pOVar5;
      if (pOVar5 != (Object*)0x0) {
         cVar3 = RefCounted::reference();
         if (cVar3 == '\0') {
            *(undefined8*)( lVar4 + 0xb08 ) = 0;
         }

      }

      if (pOVar1 == (Object*)0x0) goto LAB_001029b0;
   }

   cVar3 = RefCounted::unreference();
   if (cVar3 != '\0') {
      cVar3 = predelete_handler(pOVar1);
      if (cVar3 != '\0') {
         ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
         Memory::free_static(pOVar1, false);
      }

   }

   LAB_001029b0:if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#37}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#37}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
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

   lVar4 = __dynamic_cast(*param_2, &Object::typeinfo, &AnimationNodeStateMachineEditor::typeinfo, 0);
   Control::get_theme_item(local_48, lVar4, 4, param_3, param_4);
   pOVar5 = (Object*)Variant::get_validated_object();
   pOVar1 = *(Object**)( lVar4 + 0xc50 );
   if (pOVar5 == pOVar1) goto LAB_00102b00;
   if (pOVar5 == (Object*)0x0) {
      if (pOVar1 == (Object*)0x0) goto LAB_00102b00;
      *(undefined8*)( lVar4 + 0xc50 ) = 0;
   }
 else {
      pOVar5 = (Object*)__dynamic_cast(pOVar5, &Object::typeinfo, &Texture2D::typeinfo, 0);
      if (pOVar1 == pOVar5) goto LAB_00102b00;
      *(Object**)( lVar4 + 0xc50 ) = pOVar5;
      if (pOVar5 != (Object*)0x0) {
         cVar3 = RefCounted::reference();
         if (cVar3 == '\0') {
            *(undefined8*)( lVar4 + 0xc50 ) = 0;
         }

      }

      if (pOVar1 == (Object*)0x0) goto LAB_00102b00;
   }

   cVar3 = RefCounted::unreference();
   if (cVar3 != '\0') {
      cVar3 = predelete_handler(pOVar1);
      if (cVar3 != '\0') {
         ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
         Memory::free_static(pOVar1, false);
      }

   }

   LAB_00102b00:if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#24}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#24}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
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

   lVar4 = __dynamic_cast(*param_2, &Object::typeinfo, &AnimationNodeStateMachineEditor::typeinfo, 0);
   Control::get_theme_item(local_48, lVar4, 4, param_3, param_4);
   pOVar5 = (Object*)Variant::get_validated_object();
   pOVar1 = *(Object**)( lVar4 + 0xba8 );
   if (pOVar5 == pOVar1) goto LAB_00102c50;
   if (pOVar5 == (Object*)0x0) {
      if (pOVar1 == (Object*)0x0) goto LAB_00102c50;
      *(undefined8*)( lVar4 + 0xba8 ) = 0;
   }
 else {
      pOVar5 = (Object*)__dynamic_cast(pOVar5, &Object::typeinfo, &Texture2D::typeinfo, 0);
      if (pOVar1 == pOVar5) goto LAB_00102c50;
      *(Object**)( lVar4 + 0xba8 ) = pOVar5;
      if (pOVar5 != (Object*)0x0) {
         cVar3 = RefCounted::reference();
         if (cVar3 == '\0') {
            *(undefined8*)( lVar4 + 0xba8 ) = 0;
         }

      }

      if (pOVar1 == (Object*)0x0) goto LAB_00102c50;
   }

   cVar3 = RefCounted::unreference();
   if (cVar3 != '\0') {
      cVar3 = predelete_handler(pOVar1);
      if (cVar3 != '\0') {
         ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
         Memory::free_static(pOVar1, false);
      }

   }

   LAB_00102c50:if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#13}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#13}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
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

   lVar4 = __dynamic_cast(*param_2, &Object::typeinfo, &AnimationNodeStateMachineEditor::typeinfo, 0);
   Control::get_theme_item(local_48, lVar4, 4, param_3, param_4);
   pOVar5 = (Object*)Variant::get_validated_object();
   pOVar1 = *(Object**)( lVar4 + 0xb48 );
   if (pOVar5 == pOVar1) goto LAB_00102da0;
   if (pOVar5 == (Object*)0x0) {
      if (pOVar1 == (Object*)0x0) goto LAB_00102da0;
      *(undefined8*)( lVar4 + 0xb48 ) = 0;
   }
 else {
      pOVar5 = (Object*)__dynamic_cast(pOVar5, &Object::typeinfo, &Texture2D::typeinfo, 0);
      if (pOVar1 == pOVar5) goto LAB_00102da0;
      *(Object**)( lVar4 + 0xb48 ) = pOVar5;
      if (pOVar5 != (Object*)0x0) {
         cVar3 = RefCounted::reference();
         if (cVar3 == '\0') {
            *(undefined8*)( lVar4 + 0xb48 ) = 0;
         }

      }

      if (pOVar1 == (Object*)0x0) goto LAB_00102da0;
   }

   cVar3 = RefCounted::unreference();
   if (cVar3 != '\0') {
      cVar3 = predelete_handler(pOVar1);
      if (cVar3 != '\0') {
         ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
         Memory::free_static(pOVar1, false);
      }

   }

   LAB_00102da0:if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#33}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#33}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
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

   lVar4 = __dynamic_cast(*param_2, &Object::typeinfo, &AnimationNodeStateMachineEditor::typeinfo, 0);
   Control::get_theme_item(local_48, lVar4, 4, param_3, param_4);
   pOVar5 = (Object*)Variant::get_validated_object();
   pOVar1 = *(Object**)( lVar4 + 0xc30 );
   if (pOVar5 == pOVar1) goto LAB_00102ef0;
   if (pOVar5 == (Object*)0x0) {
      if (pOVar1 == (Object*)0x0) goto LAB_00102ef0;
      *(undefined8*)( lVar4 + 0xc30 ) = 0;
   }
 else {
      pOVar5 = (Object*)__dynamic_cast(pOVar5, &Object::typeinfo, &Texture2D::typeinfo, 0);
      if (pOVar1 == pOVar5) goto LAB_00102ef0;
      *(Object**)( lVar4 + 0xc30 ) = pOVar5;
      if (pOVar5 != (Object*)0x0) {
         cVar3 = RefCounted::reference();
         if (cVar3 == '\0') {
            *(undefined8*)( lVar4 + 0xc30 ) = 0;
         }

      }

      if (pOVar1 == (Object*)0x0) goto LAB_00102ef0;
   }

   cVar3 = RefCounted::unreference();
   if (cVar3 != '\0') {
      cVar3 = predelete_handler(pOVar1);
      if (cVar3 != '\0') {
         ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
         Memory::free_static(pOVar1, false);
      }

   }

   LAB_00102ef0:if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#8}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#8}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
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

   lVar4 = __dynamic_cast(*param_2, &Object::typeinfo, &AnimationNodeStateMachineEditor::typeinfo, 0);
   Control::get_theme_item(local_48, lVar4, 4, param_3, param_4);
   pOVar5 = (Object*)Variant::get_validated_object();
   pOVar1 = *(Object**)( lVar4 + 0xb20 );
   if (pOVar5 == pOVar1) goto LAB_00103040;
   if (pOVar5 == (Object*)0x0) {
      if (pOVar1 == (Object*)0x0) goto LAB_00103040;
      *(undefined8*)( lVar4 + 0xb20 ) = 0;
   }
 else {
      pOVar5 = (Object*)__dynamic_cast(pOVar5, &Object::typeinfo, &Texture2D::typeinfo, 0);
      if (pOVar1 == pOVar5) goto LAB_00103040;
      *(Object**)( lVar4 + 0xb20 ) = pOVar5;
      if (pOVar5 != (Object*)0x0) {
         cVar3 = RefCounted::reference();
         if (cVar3 == '\0') {
            *(undefined8*)( lVar4 + 0xb20 ) = 0;
         }

      }

      if (pOVar1 == (Object*)0x0) goto LAB_00103040;
   }

   cVar3 = RefCounted::unreference();
   if (cVar3 != '\0') {
      cVar3 = predelete_handler(pOVar1);
      if (cVar3 != '\0') {
         ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
         Memory::free_static(pOVar1, false);
      }

   }

   LAB_00103040:if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#10}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#10}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
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

   lVar4 = __dynamic_cast(*param_2, &Object::typeinfo, &AnimationNodeStateMachineEditor::typeinfo, 0);
   Control::get_theme_item(local_48, lVar4, 4, param_3, param_4);
   pOVar5 = (Object*)Variant::get_validated_object();
   pOVar1 = *(Object**)( lVar4 + 0xb30 );
   if (pOVar5 == pOVar1) goto LAB_00103190;
   if (pOVar5 == (Object*)0x0) {
      if (pOVar1 == (Object*)0x0) goto LAB_00103190;
      *(undefined8*)( lVar4 + 0xb30 ) = 0;
   }
 else {
      pOVar5 = (Object*)__dynamic_cast(pOVar5, &Object::typeinfo, &Texture2D::typeinfo, 0);
      if (pOVar1 == pOVar5) goto LAB_00103190;
      *(Object**)( lVar4 + 0xb30 ) = pOVar5;
      if (pOVar5 != (Object*)0x0) {
         cVar3 = RefCounted::reference();
         if (cVar3 == '\0') {
            *(undefined8*)( lVar4 + 0xb30 ) = 0;
         }

      }

      if (pOVar1 == (Object*)0x0) goto LAB_00103190;
   }

   cVar3 = RefCounted::unreference();
   if (cVar3 != '\0') {
      cVar3 = predelete_handler(pOVar1);
      if (cVar3 != '\0') {
         ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
         Memory::free_static(pOVar1, false);
      }

   }

   LAB_00103190:if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#35}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#35}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
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

   lVar4 = __dynamic_cast(*param_2, &Object::typeinfo, &AnimationNodeStateMachineEditor::typeinfo, 0);
   Control::get_theme_item(local_48, lVar4, 4, param_3, param_4);
   pOVar5 = (Object*)Variant::get_validated_object();
   pOVar1 = *(Object**)( lVar4 + 0xc40 );
   if (pOVar5 == pOVar1) goto LAB_001032e0;
   if (pOVar5 == (Object*)0x0) {
      if (pOVar1 == (Object*)0x0) goto LAB_001032e0;
      *(undefined8*)( lVar4 + 0xc40 ) = 0;
   }
 else {
      pOVar5 = (Object*)__dynamic_cast(pOVar5, &Object::typeinfo, &Texture2D::typeinfo, 0);
      if (pOVar1 == pOVar5) goto LAB_001032e0;
      *(Object**)( lVar4 + 0xc40 ) = pOVar5;
      if (pOVar5 != (Object*)0x0) {
         cVar3 = RefCounted::reference();
         if (cVar3 == '\0') {
            *(undefined8*)( lVar4 + 0xc40 ) = 0;
         }

      }

      if (pOVar1 == (Object*)0x0) goto LAB_001032e0;
   }

   cVar3 = RefCounted::unreference();
   if (cVar3 != '\0') {
      cVar3 = predelete_handler(pOVar1);
      if (cVar3 != '\0') {
         ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
         Memory::free_static(pOVar1, false);
      }

   }

   LAB_001032e0:if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#34}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#34}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
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

   lVar4 = __dynamic_cast(*param_2, &Object::typeinfo, &AnimationNodeStateMachineEditor::typeinfo, 0);
   Control::get_theme_item(local_48, lVar4, 4, param_3, param_4);
   pOVar5 = (Object*)Variant::get_validated_object();
   pOVar1 = *(Object**)( lVar4 + 0xc38 );
   if (pOVar5 == pOVar1) goto LAB_00103430;
   if (pOVar5 == (Object*)0x0) {
      if (pOVar1 == (Object*)0x0) goto LAB_00103430;
      *(undefined8*)( lVar4 + 0xc38 ) = 0;
   }
 else {
      pOVar5 = (Object*)__dynamic_cast(pOVar5, &Object::typeinfo, &Texture2D::typeinfo, 0);
      if (pOVar1 == pOVar5) goto LAB_00103430;
      *(Object**)( lVar4 + 0xc38 ) = pOVar5;
      if (pOVar5 != (Object*)0x0) {
         cVar3 = RefCounted::reference();
         if (cVar3 == '\0') {
            *(undefined8*)( lVar4 + 0xc38 ) = 0;
         }

      }

      if (pOVar1 == (Object*)0x0) goto LAB_00103430;
   }

   cVar3 = RefCounted::unreference();
   if (cVar3 != '\0') {
      cVar3 = predelete_handler(pOVar1);
      if (cVar3 != '\0') {
         ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
         Memory::free_static(pOVar1, false);
      }

   }

   LAB_00103430:if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#36}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#36}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
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

   lVar4 = __dynamic_cast(*param_2, &Object::typeinfo, &AnimationNodeStateMachineEditor::typeinfo, 0);
   Control::get_theme_item(local_48, lVar4, 4, param_3, param_4);
   pOVar5 = (Object*)Variant::get_validated_object();
   pOVar1 = *(Object**)( lVar4 + 0xc48 );
   if (pOVar5 == pOVar1) goto LAB_00103580;
   if (pOVar5 == (Object*)0x0) {
      if (pOVar1 == (Object*)0x0) goto LAB_00103580;
      *(undefined8*)( lVar4 + 0xc48 ) = 0;
   }
 else {
      pOVar5 = (Object*)__dynamic_cast(pOVar5, &Object::typeinfo, &Texture2D::typeinfo, 0);
      if (pOVar1 == pOVar5) goto LAB_00103580;
      *(Object**)( lVar4 + 0xc48 ) = pOVar5;
      if (pOVar5 != (Object*)0x0) {
         cVar3 = RefCounted::reference();
         if (cVar3 == '\0') {
            *(undefined8*)( lVar4 + 0xc48 ) = 0;
         }

      }

      if (pOVar1 == (Object*)0x0) goto LAB_00103580;
   }

   cVar3 = RefCounted::unreference();
   if (cVar3 != '\0') {
      cVar3 = predelete_handler(pOVar1);
      if (cVar3 != '\0') {
         ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
         Memory::free_static(pOVar1, false);
      }

   }

   LAB_00103580:if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#7}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#7}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
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

   lVar4 = __dynamic_cast(*param_2, &Object::typeinfo, &AnimationNodeStateMachineEditor::typeinfo, 0);
   Control::get_theme_item(local_48, lVar4, 4, param_3, param_4);
   pOVar5 = (Object*)Variant::get_validated_object();
   pOVar1 = *(Object**)( lVar4 + 0xb18 );
   if (pOVar5 == pOVar1) goto LAB_001036d0;
   if (pOVar5 == (Object*)0x0) {
      if (pOVar1 == (Object*)0x0) goto LAB_001036d0;
      *(undefined8*)( lVar4 + 0xb18 ) = 0;
   }
 else {
      pOVar5 = (Object*)__dynamic_cast(pOVar5, &Object::typeinfo, &Texture2D::typeinfo, 0);
      if (pOVar1 == pOVar5) goto LAB_001036d0;
      *(Object**)( lVar4 + 0xb18 ) = pOVar5;
      if (pOVar5 != (Object*)0x0) {
         cVar3 = RefCounted::reference();
         if (cVar3 == '\0') {
            *(undefined8*)( lVar4 + 0xb18 ) = 0;
         }

      }

      if (pOVar1 == (Object*)0x0) goto LAB_001036d0;
   }

   cVar3 = RefCounted::unreference();
   if (cVar3 != '\0') {
      cVar3 = predelete_handler(pOVar1);
      if (cVar3 != '\0') {
         ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
         Memory::free_static(pOVar1, false);
      }

   }

   LAB_001036d0:if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#9}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#9}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
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

   lVar4 = __dynamic_cast(*param_2, &Object::typeinfo, &AnimationNodeStateMachineEditor::typeinfo, 0);
   Control::get_theme_item(local_48, lVar4, 4, param_3, param_4);
   pOVar5 = (Object*)Variant::get_validated_object();
   pOVar1 = *(Object**)( lVar4 + 0xb28 );
   if (pOVar5 == pOVar1) goto LAB_00103820;
   if (pOVar5 == (Object*)0x0) {
      if (pOVar1 == (Object*)0x0) goto LAB_00103820;
      *(undefined8*)( lVar4 + 0xb28 ) = 0;
   }
 else {
      pOVar5 = (Object*)__dynamic_cast(pOVar5, &Object::typeinfo, &Texture2D::typeinfo, 0);
      if (pOVar1 == pOVar5) goto LAB_00103820;
      *(Object**)( lVar4 + 0xb28 ) = pOVar5;
      if (pOVar5 != (Object*)0x0) {
         cVar3 = RefCounted::reference();
         if (cVar3 == '\0') {
            *(undefined8*)( lVar4 + 0xb28 ) = 0;
         }

      }

      if (pOVar1 == (Object*)0x0) goto LAB_00103820;
   }

   cVar3 = RefCounted::unreference();
   if (cVar3 != '\0') {
      cVar3 = predelete_handler(pOVar1);
      if (cVar3 != '\0') {
         ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
         Memory::free_static(pOVar1, false);
      }

   }

   LAB_00103820:if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#4}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#4}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
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

   lVar4 = __dynamic_cast(*param_2, &Object::typeinfo, &AnimationNodeStateMachineEditor::typeinfo, 0);
   Control::get_theme_item(local_48, lVar4, 4, param_3, param_4);
   pOVar5 = (Object*)Variant::get_validated_object();
   pOVar1 = *(Object**)( lVar4 + 0xb00 );
   if (pOVar5 == pOVar1) goto LAB_00103970;
   if (pOVar5 == (Object*)0x0) {
      if (pOVar1 == (Object*)0x0) goto LAB_00103970;
      *(undefined8*)( lVar4 + 0xb00 ) = 0;
   }
 else {
      pOVar5 = (Object*)__dynamic_cast(pOVar5, &Object::typeinfo, &Texture2D::typeinfo, 0);
      if (pOVar1 == pOVar5) goto LAB_00103970;
      *(Object**)( lVar4 + 0xb00 ) = pOVar5;
      if (pOVar5 != (Object*)0x0) {
         cVar3 = RefCounted::reference();
         if (cVar3 == '\0') {
            *(undefined8*)( lVar4 + 0xb00 ) = 0;
         }

      }

      if (pOVar1 == (Object*)0x0) goto LAB_00103970;
   }

   cVar3 = RefCounted::unreference();
   if (cVar3 != '\0') {
      cVar3 = predelete_handler(pOVar1);
      if (cVar3 != '\0') {
         ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
         Memory::free_static(pOVar1, false);
      }

   }

   LAB_00103970:if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AnimationNodeStateMachineEditor::edit(Ref<AnimationNode> const&) */void AnimationNodeStateMachineEditor::edit(AnimationNodeStateMachineEditor *this, Ref *param_1) {
   undefined8 uVar1;
   char cVar2;
   AnimationNodeStateMachineEditor AVar3;
   Object *pOVar4;
   Object *pOVar5;
   long lVar6;
   long lVar7;
   long in_FS_OFFSET;
   Object *local_38;
   long local_30;
   pOVar5 = *(Object**)( this + 0xa10 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)param_1 == 0) {
      if (pOVar5 == (Object*)0x0) {
         this[0xa18] = (AnimationNodeStateMachineEditor)0x0;
         goto LAB_00103cd2;
      }

      *(undefined8*)( this + 0xa10 ) = 0;
      LAB_00103d20:cVar2 = RefCounted::unreference();
      if (( cVar2 != '\0' ) && ( cVar2 = cVar2 != '\0' )) {
         ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
         Memory::free_static(pOVar5, false);
      }

      LAB_00103a7a:pOVar5 = *(Object**)( this + 0xa10 );
   }
 else {
      pOVar4 = (Object*)__dynamic_cast(*(long*)param_1, &Object::typeinfo, &AnimationNodeStateMachine::typeinfo, 0);
      if (pOVar4 != pOVar5) {
         *(Object**)( this + 0xa10 ) = pOVar4;
         if (( pOVar4 != (Object*)0x0 ) && ( cVar2 = cVar2 == '\0' )) {
            *(undefined8*)( this + 0xa10 ) = 0;
         }

         if (pOVar5 != (Object*)0x0) goto LAB_00103d20;
         goto LAB_00103a7a;
      }

   }

   this[0xa18] = (AnimationNodeStateMachineEditor)0x0;
   uVar1 = EditorNode::singleton;
   if (pOVar5 != (Object*)0x0) {
      local_38 = (Object*)0x0;
      pOVar5 = (Object*)__dynamic_cast(pOVar5, &Object::typeinfo, &Resource::typeinfo, 0);
      if (( pOVar5 != (Object*)0x0 ) && ( local_38 = pOVar5 ),cVar2 = RefCounted::reference(),cVar2 == '\0') {
         local_38 = (Object*)0x0;
      }

      AVar3 = (AnimationNodeStateMachineEditor)EditorNode::is_resource_read_only(uVar1, &local_38, 0);
      this[0xa18] = AVar3;
      if (( ( local_38 != (Object*)0x0 ) && ( cVar2 = RefCounted::unreference() ),pOVar5 = local_38,cVar2 != '\0' )) &&( cVar2 = cVar2 != '\0' )(**(code**)( *(long*)pOVar5 + 0x140 ))(pOVar5);
      Memory::free_static(pOVar5, false);
   }

   if (*(long*)( this + 0xda0 ) != 0) {
      StringName::unref();
      *(undefined8*)( this + 0xda0 ) = 0;
   }

   cVar2 = StringName::configured;
   if (*(long*)( this + 0xda8 ) != 0) {
      StringName::unref();
      cVar2 = StringName::configured;
      *(undefined8*)( this + 0xda8 ) = 0;
   }

   *(undefined4*)( this + 0xdb0 ) = 0xffffffff;
   if (*(long*)( this + 0xa80 ) != 0) {
      StringName::unref();
      cVar2 = StringName::configured;
      *(undefined8*)( this + 0xa80 ) = 0;
   }

   lVar7 = *(long*)( this + 0xa88 );
   if (( lVar7 != 0 ) && ( *(int*)( this + 0xaac ) != 0 )) {
      if (( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0xaa8 ) * 4 ) == 0 ) || ( memset(*(void**)( this + 0xaa0 ), 0, ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0xaa8 ) * 4 ) << 2),*(int*)( this + 0xaac ) != 0 )) {
         lVar6 = 0;
         while (true) {
            if (( cVar2 != '\0' ) && ( *(long*)( lVar7 + lVar6 * 8 ) != 0 )) {
               StringName::unref();
            }

            lVar6 = lVar6 + 1;
            if (*(uint*)( this + 0xaac ) <= (uint)lVar6) break;
            lVar7 = *(long*)( this + 0xa88 );
            cVar2 = StringName::configured;
         }
;
      }

      *(undefined4*)( this + 0xaac ) = 0;
   }

   lVar7 = *(long*)( this + 0xe40 );
   if (( lVar7 != 0 ) && ( *(int*)( this + 0xe64 ) != 0 )) {
      if (( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0xe60 ) * 4 ) == 0 ) || ( memset(*(void**)( this + 0xe58 ), 0, ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0xe60 ) * 4 ) << 2),*(int*)( this + 0xe64 ) != 0 )) {
         lVar6 = 0;
         while (true) {
            if (( StringName::configured != '\0' ) && ( *(long*)( lVar7 + lVar6 * 8 ) != 0 )) {
               StringName::unref();
            }

            lVar6 = lVar6 + 1;
            if (*(uint*)( this + 0xe64 ) <= (uint)lVar6) break;
            lVar7 = *(long*)( this + 0xe40 );
         }
;
      }

      *(undefined4*)( this + 0xe64 ) = 0;
   }

   _update_mode(this);
   if (this[0xc80] == (AnimationNodeStateMachineEditor)0x0) {
      this[0xc80] = (AnimationNodeStateMachineEditor)0x1;
      CanvasItem::queue_redraw();
      AVar3 = this[0xa18];
      this[0xc80] = (AnimationNodeStateMachineEditor)0x0;
   }
 else {
      AVar3 = this[0xa18];
   }

   if (AVar3 != (AnimationNodeStateMachineEditor)0x0) {
      BaseButton::set_pressed(SUB81(*(undefined8*)( this + 0xa28 ), 0));
      BaseButton::set_pressed(SUB81(*(undefined8*)( this + 0xa30 ), 0));
   }

}
LAB_00103cd2:BaseButton::set_disabled(SUB81(*(undefined8*)( this + 0xa28 ), 0));if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
   BaseButton::set_disabled(SUB81(*(undefined8*)( this + 0xa30 ), 0));
   return;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* CowData<char32_t>::_ref(CowData<char32_t> const&) [clone .part.0] */void CowData<char32_t>::_ref(CowData<char32_t> *this, CowData *param_1) {
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
/* List<PropertyInfo, DefaultAllocator>::push_back(PropertyInfo const&) [clone .isra.0] */void List<PropertyInfo,DefaultAllocator>::push_back(List<PropertyInfo,DefaultAllocator> *this, PropertyInfo *param_1) {
   long *plVar1;
   long lVar2;
   undefined4 *puVar3;
   undefined1(*pauVar4)[16];
   if (*(long*)this == 0) {
      pauVar4 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])this = pauVar4;
      *(undefined4*)pauVar4[1] = 0;
      *pauVar4 = (undefined1[16])0x0;
   }

   puVar3 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
   *(undefined8*)( puVar3 + 8 ) = 0;
   *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
   lVar2 = *(long*)( param_1 + 8 );
   *puVar3 = 0;
   puVar3[6] = 0;
   puVar3[10] = 6;
   *(undefined8*)( puVar3 + 0x10 ) = 0;
   *(undefined1(*) [16])( puVar3 + 0xc ) = (undefined1[16])0x0;
   *puVar3 = *(undefined4*)param_1;
   if (lVar2 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 2 ), (CowData*)( param_1 + 8 ));
   }

   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)( param_1 + 0x10 ));
   puVar3[6] = *(undefined4*)( param_1 + 0x18 );
   if (*(long*)( puVar3 + 8 ) != *(long*)( param_1 + 0x20 )) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 8 ), (CowData*)( param_1 + 0x20 ));
   }

   puVar3[10] = *(undefined4*)( param_1 + 0x28 );
   plVar1 = *(long**)this;
   lVar2 = plVar1[1];
   *(undefined8*)( puVar3 + 0xc ) = 0;
   *(long**)( puVar3 + 0x10 ) = plVar1;
   *(long*)( puVar3 + 0xe ) = lVar2;
   if (lVar2 != 0) {
      *(undefined4**)( lVar2 + 0x30 ) = puVar3;
   }

   plVar1[1] = (long)puVar3;
   if (*plVar1 != 0) {
      *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
      return;
   }

   *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
   *plVar1 = (long)puVar3;
   return;
}
/* HashSet<StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::erase(StringName const&) [clone .isra.0] */void HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::erase(HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>> *this, StringName *param_1) {
   uint *puVar1;
   undefined4 *puVar2;
   undefined4 *puVar3;
   undefined4 uVar4;
   long lVar5;
   long lVar6;
   long lVar7;
   long lVar8;
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   undefined1 auVar12[16];
   undefined1 auVar13[16];
   undefined1 auVar14[16];
   undefined1 auVar15[16];
   undefined1 auVar16[16];
   undefined1 auVar17[16];
   undefined1 auVar18[16];
   undefined1 auVar19[16];
   undefined1 auVar20[16];
   undefined1 auVar21[16];
   undefined1 auVar22[16];
   undefined1 auVar23[16];
   undefined1 auVar24[16];
   undefined1 auVar25[16];
   undefined1 auVar26[16];
   undefined1 auVar27[16];
   undefined1 auVar28[16];
   uint uVar29;
   uint uVar30;
   uint uVar31;
   int iVar32;
   long lVar33;
   ulong uVar34;
   ulong uVar35;
   ulong uVar36;
   uint *puVar37;
   long lVar38;
   uint *puVar39;
   ulong uVar40;
   uint *puVar41;
   uint uVar42;
   ulong uVar43;
   if (( *(long*)this != 0 ) && ( *(int*)( this + 0x24 ) != 0 )) {
      uVar30 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x20 ) * 4 );
      lVar38 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x20 ) * 8 );
      if (*(long*)param_1 == 0) {
         uVar31 = StringName::get_empty_hash();
      }
 else {
         uVar31 = *(uint*)( *(long*)param_1 + 0x20 );
      }

      uVar36 = CONCAT44(0, uVar30);
      uVar29 = 1;
      if (uVar31 != 0) {
         uVar29 = uVar31;
      }

      auVar9._8_8_ = 0;
      auVar9._0_8_ = (ulong)uVar29 * lVar38;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = uVar36;
      lVar33 = SUB168(auVar9 * auVar19, 8);
      lVar5 = *(long*)( this + 0x18 );
      iVar32 = SUB164(auVar9 * auVar19, 8);
      uVar31 = *(uint*)( lVar5 + lVar33 * 4 );
      if (uVar31 != 0) {
         uVar42 = 0;
         do {
            if (uVar29 == uVar31) {
               lVar6 = *(long*)( this + 8 );
               lVar7 = *(long*)this;
               uVar31 = *(uint*)( lVar6 + lVar33 * 4 );
               uVar34 = (ulong)uVar31;
               if (*(long*)( lVar7 + uVar34 * 8 ) == *(long*)param_1) {
                  lVar33 = *(long*)( this + 0x10 );
                  uVar30 = *(uint*)( lVar33 + uVar34 * 4 );
                  uVar36 = (ulong)uVar30;
                  uVar29 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x20 ) * 4 );
                  uVar43 = CONCAT44(0, uVar29);
                  lVar8 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x20 ) * 8 );
                  auVar13._8_8_ = 0;
                  auVar13._0_8_ = ( ulong )(uVar30 + 1) * lVar8;
                  auVar23._8_8_ = 0;
                  auVar23._0_8_ = uVar43;
                  lVar38 = SUB168(auVar13 * auVar23, 8) * 4;
                  uVar30 = SUB164(auVar13 * auVar23, 8);
                  puVar37 = (uint*)( lVar5 + lVar38 );
                  if (( *puVar37 != 0 ) && ( auVar14._8_8_ = 0 ),auVar14._0_8_ = ( ulong ) * puVar37 * lVar8,auVar24._8_8_ = 0,auVar24._0_8_ = uVar43,auVar15._8_8_ = 0,auVar15._0_8_ = ( ulong )(( uVar29 + uVar30 ) - SUB164(auVar14 * auVar24, 8)) * lVar8,auVar25._8_8_ = 0,auVar25._0_8_ = uVar43,uVar35 = (ulong)uVar30,uVar40 = uVar36,SUB164(auVar15 * auVar25, 8) != 0) {
                     while (true) {
                        uVar36 = uVar35;
                        puVar39 = (uint*)( lVar38 + lVar6 );
                        puVar1 = (uint*)( lVar6 + uVar40 * 4 );
                        puVar41 = (uint*)( uVar40 * 4 + lVar5 );
                        puVar2 = (undefined4*)( lVar33 + ( ulong ) * puVar39 * 4 );
                        puVar3 = (undefined4*)( lVar33 + ( ulong ) * puVar1 * 4 );
                        uVar4 = *puVar3;
                        *puVar3 = *puVar2;
                        *puVar2 = uVar4;
                        uVar30 = *puVar37;
                        *puVar37 = *puVar41;
                        *puVar41 = uVar30;
                        uVar30 = *puVar39;
                        *puVar39 = *puVar1;
                        *puVar1 = uVar30;
                        auVar18._8_8_ = 0;
                        auVar18._0_8_ = ( ulong )((int)uVar36 + 1) * lVar8;
                        auVar28._8_8_ = 0;
                        auVar28._0_8_ = uVar43;
                        uVar35 = SUB168(auVar18 * auVar28, 8);
                        lVar38 = uVar35 * 4;
                        puVar37 = (uint*)( lVar5 + lVar38 );
                        if (( *puVar37 == 0 ) || ( auVar16._8_8_ = 0 ),auVar16._0_8_ = ( ulong ) * puVar37 * lVar8,auVar26._8_8_ = 0,auVar26._0_8_ = uVar43,auVar17._8_8_ = 0,auVar17._0_8_ = ( ulong )(( SUB164(auVar18 * auVar28, 8) + uVar29 ) - SUB164(auVar16 * auVar26, 8)) * lVar8,auVar27._8_8_ = 0,auVar27._0_8_ = uVar43,SUB164(auVar17 * auVar27, 8) == 0) break;
                        uVar35 = uVar35 & 0xffffffff;
                        uVar40 = uVar36;
                     }
;
                  }

                  *(undefined4*)( lVar5 + uVar36 * 4 ) = 0;
                  if (( StringName::configured != '\0' ) && ( *(long*)( lVar7 + uVar34 * 8 ) != 0 )) {
                     StringName::unref();
                  }

                  uVar30 = *(int*)( this + 0x24 ) - 1;
                  *(uint*)( this + 0x24 ) = uVar30;
                  if (uVar30 <= uVar31) {
                     return;
                  }

                  StringName::StringName((StringName*)( *(long*)this + uVar34 * 8 ), (StringName*)( *(long*)this + (ulong)uVar30 * 8 ));
                  uVar36 = ( ulong ) * (uint*)( this + 0x24 );
                  if (( StringName::configured != '\0' ) && ( *(long*)( *(long*)this + uVar36 * 8 ) != 0 )) {
                     StringName::unref();
                     uVar36 = ( ulong ) * (uint*)( this + 0x24 );
                  }

                  lVar38 = *(long*)( this + 0x10 );
                  *(undefined4*)( lVar38 + uVar34 * 4 ) = *(undefined4*)( lVar38 + uVar36 * 4 );
                  *(uint*)( *(long*)( this + 8 ) + ( ulong ) * (uint*)( lVar38 + ( ulong ) * (uint*)( this + 0x24 ) * 4 ) * 4 ) = uVar31;
                  return;
               }

            }

            uVar42 = uVar42 + 1;
            auVar10._8_8_ = 0;
            auVar10._0_8_ = ( ulong )(iVar32 + 1) * lVar38;
            auVar20._8_8_ = 0;
            auVar20._0_8_ = uVar36;
            lVar33 = SUB168(auVar10 * auVar20, 8);
            uVar31 = *(uint*)( lVar5 + lVar33 * 4 );
            iVar32 = SUB164(auVar10 * auVar20, 8);
         }
 while ( ( uVar31 != 0 ) && ( auVar11._8_8_ = 0 ),auVar11._0_8_ = (ulong)uVar31 * lVar38,auVar21._8_8_ = 0,auVar21._0_8_ = uVar36,auVar12._8_8_ = 0,auVar12._0_8_ = ( ulong )(( uVar30 + iVar32 ) - SUB164(auVar11 * auVar21, 8)) * lVar38,auVar22._8_8_ = 0,auVar22._0_8_ = uVar36,uVar42 <= SUB164(auVar12 * auVar22, 8) );
      }

   }

   return;
}
/* AnimationNodeStateMachineEditor::get_cursor_shape(Vector2 const&) const */undefined4 AnimationNodeStateMachineEditor::get_cursor_shape(AnimationNodeStateMachineEditor *this, Vector2 *param_1) {
   code *pcVar1;
   char cVar2;
   undefined4 uVar3;
   long lVar4;
   uint uVar5;
   ulong uVar6;
   long lVar7;
   long in_FS_OFFSET;
   float fVar8;
   float fVar9;
   Transform2D local_98[8];
   Vector2 local_90[24];
   Transform2D local_78[32];
   undefined8 local_58[3];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar3 = Control::get_default_cursor_shape();
   if (this[0xa18] == (AnimationNodeStateMachineEditor)0x0) {
      ( **(code**)( **(long**)( this + 0xac0 ) + 0x290 ) )((Vector2*)local_58);
      ( **(code**)( **(long**)( this + 0xa78 ) + 0x290 ) )(local_78);
      Transform2D::operator *(local_98, local_78);
      local_58[0] = CONCAT44((float)( ( ulong ) * (undefined8*)param_1 >> 0x20 ) - SUB84(local_90._8_8_, 4), (float)*(undefined8*)param_1 - (float)local_90._8_8_);
      fVar8 = (float)Vector2::dot(local_90);
      fVar9 = (float)Vector2::dot((Vector2*)local_98);
      lVar4 = *(long*)( this + 0xd88 );
      local_58[0] = CONCAT44(fVar8, fVar9);
      if (( lVar4 != 0 ) && ( uVar5 = *(int*)( lVar4 + -8 ) - 1 ),-1 < (int)uVar5) {
         uVar6 = (ulong)uVar5;
         do {
            if (lVar4 == 0) {
               LAB_00104480:lVar7 = 0;
               LAB_00104483:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, uVar6, lVar7, "p_index", "size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar1 = (code*)invalidInstructionException();
               ( *pcVar1 )();
            }

            lVar7 = *(long*)( lVar4 + -8 );
            if (lVar7 <= (long)uVar6) goto LAB_00104483;
            lVar4 = lVar4 + uVar6 * 0x50;
            if (( *(float*)( lVar4 + 0x10 ) <= 0.0 && *(float*)( lVar4 + 0x10 ) != 0.0 ) || ( *(float*)( lVar4 + 0x14 ) <= 0.0 && *(float*)( lVar4 + 0x14 ) != 0.0 )) {
               _err_print_error("has_point", "./core/math/rect2.h", 0xb9, "Rect2 size is negative, this is not supported. Use Rect2.abs() to get a Rect2 with a positive size.", 0, 0);
            }

            if (( ( ( *(float*)( lVar4 + 8 ) <= fVar9 ) && ( *(float*)( lVar4 + 0xc ) <= fVar8 ) ) && ( fVar9 < *(float*)( lVar4 + 8 ) + *(float*)( lVar4 + 0x10 ) ) ) && ( fVar8 < *(float*)( lVar4 + 0xc ) + *(float*)( lVar4 + 0x14 ) )) {
               lVar4 = *(long*)( this + 0xd88 );
               if (lVar4 != 0) {
                  lVar7 = *(long*)( lVar4 + -8 );
                  if (lVar7 <= (long)uVar6) goto LAB_00104483;
                  cVar2 = Rect2::has_point((Rect2*)( lVar4 + 0x28 + uVar6 * 0x50 ), (Vector2*)local_58);
                  if (cVar2 == '\0') break;
                  if (*(long*)( this + 0xd88 ) != 0) {
                     lVar7 = *(long*)( *(long*)( this + 0xd88 ) + -8 );
                     if (lVar7 <= (long)uVar6) goto LAB_00104483;
                     cVar2 = AnimationNodeStateMachine::can_edit_node(*(StringName**)( this + 0xa10 ));
                     if (cVar2 != '\0') {
                        uVar3 = 1;
                     }

                     break;
                  }

               }

               goto LAB_00104480;
            }

            uVar6 = uVar6 - 1;
            if ((int)uVar6 < 0) break;
            lVar4 = *(long*)( this + 0xd88 );
         }
 while ( true );
      }

   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar3;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* AnimationNodeStateMachineEditor::_connection_draw(Vector2 const&, Vector2 const&,
   AnimationNodeStateMachineTransition::SwitchMode, bool, bool, bool, float, bool, bool, float) */void AnimationNodeStateMachineEditor::_connection_draw(float param_1_00, float param_2_00, AnimationNodeStateMachineEditor *this, Vector2 *param_1, undefined8 *param_2, int param_6, char param_7, char param_8, char param_9, char param_10, char param_11) {
   Object *pOVar1;
   char cVar2;
   int iVar3;
   long in_FS_OFFSET;
   float fVar4;
   float fVar5;
   undefined8 uVar6;
   Object *local_b0;
   undefined8 local_a8;
   undefined8 uStack_a0;
   undefined8 local_98;
   undefined8 uStack_90;
   undefined8 local_88;
   undefined8 uStack_80;
   undefined8 local_78;
   undefined8 local_70;
   undefined8 local_68;
   undefined8 local_58;
   undefined8 uStack_50;
   undefined8 local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_7 == '\0') {
      local_a8 = *(undefined8*)( this + 0xbc0 );
      uStack_a0 = *(undefined8*)( this + 0xbc8 );
      local_98 = *(undefined8*)( this + 0xbe0 );
      uStack_90 = *(undefined8*)( this + 0xbe8 );
      local_88 = *(undefined8*)( this + 0xc00 );
      uStack_80 = *(undefined8*)( this + 0xc08 );
   }
 else {
      local_a8 = *(undefined8*)( this + 0xbb0 );
      uStack_a0 = *(undefined8*)( this + 3000 );
      local_88 = *(undefined8*)( this + 0xbf0 );
      uStack_80 = *(undefined8*)( this + 0xbf8 );
      local_98 = *(undefined8*)( this + 0xbd0 );
      uStack_90 = *(undefined8*)( this + 0xbd8 );
   }

   uStack_a0 = CONCAT44(uStack_a0._4_4_ * param_2_00, (undefined4)uStack_a0);
   uStack_90 = CONCAT44(uStack_90._4_4_ * param_2_00, (undefined4)uStack_90);
   uStack_80 = CONCAT44(uStack_80._4_4_ * param_2_00, (undefined4)uStack_80);
   if (param_9 != '\0') {
      local_a8 = local_88;
      uStack_a0 = uStack_80;
   }

   if (param_8 != '\0') {
      CanvasItem::draw_line(*(Vector2**)( this + 0xac0 ), param_1, (Color*)param_2, _LC63, SUB81(&local_88, 0));
   }

   CanvasItem::draw_line(*(Vector2**)( this + 0xac0 ), param_1, (Color*)param_2, _LC64, SUB81(&local_a8, 0));
   if (0.0 < param_1_00) {
      local_58 = local_88;
      uStack_50 = uStack_80;
      fVar4 = (float)Color::get_v();
      fVar5 = (float)Color::get_s();
      Color::set_hsv(_LC65, fVar5, fVar4, _LC65);
      fVar4 = (float)*(undefined8*)param_1;
      fVar5 = (float)( ( ulong ) * (undefined8*)param_1 >> 0x20 );
      uStack_50 = CONCAT44(param_2_00 * uStack_50._4_4_, (undefined4)uStack_50);
      local_78 = CONCAT44(( (float)( ( ulong ) * param_2 >> 0x20 ) - fVar5 ) * param_1_00 + fVar5, ( (float)*param_2 - fVar4 ) * param_1_00 + fVar4);
      CanvasItem::draw_line(*(Vector2**)( this + 0xac0 ), param_1, (Color*)&local_78, _LC64, SUB81(&local_58, 0));
   }

   param_6 = param_6 + ( -(uint)(param_10 != '\0') & 3 );
   if (param_6 < 6) {
      local_b0 = (Object*)0x0;
      if (*(Object**)( this + (long)param_6 * 8 + 0xc30 ) != (Object*)0x0) {
         local_b0 = *(Object**)( this + (long)param_6 * 8 + 0xc30 );
         cVar2 = RefCounted::reference();
         if (cVar2 == '\0') {
            local_b0 = (Object*)0x0;
         }

      }

      local_70 = 0x3f80000000000000;
      local_78 = 0x3f800000;
      local_58 = CONCAT44((float)( ( ulong ) * param_2 >> 0x20 ) - (float)( ( ulong ) * (undefined8*)param_1 >> 0x20 ), (float)*param_2 - (float)*(undefined8*)param_1);
      local_68 = 0;
      uVar6 = Vector2::normalized();
      local_78._0_4_ = (uint)uVar6;
      local_78._4_4_ = ( undefined4 )((ulong)uVar6 >> 0x20);
      local_70 = CONCAT44((uint)local_78 ^ __LC69, local_78._4_4_);
      local_78 = uVar6;
      iVar3 = ( **(code**)( *(long*)local_b0 + 0x1d0 ) )();
      fVar4 = (float)iVar3 * (float)local_78 * (float)_LC171;
      fVar5 = (float)iVar3 * (float)( (ulong)local_78 >> 0x20 ) * _LC171._4_4_;
      iVar3 = ( **(code**)( *(long*)local_b0 + 0x1d0 ) )();
      local_68 = CONCAT44(( ( (float)( ( ulong ) * (undefined8*)param_1 >> 0x20 ) + (float)( ( ulong ) * param_2 >> 0x20 ) ) * _LC171._4_4_ - (float)iVar3 * (float)( (ulong)local_70 >> 0x20 ) * _LC171._4_4_ ) - fVar5, ( ( (float)*(undefined8*)param_1 + (float)*param_2 ) * (float)_LC171 - (float)iVar3 * (float)local_70 * (float)_LC171 ) - fVar4);
      CanvasItem::draw_set_transform_matrix(*(Transform2D**)( this + 0xac0 ));
      if (param_11 == '\0') {
         local_58 = 0;
         CanvasItem::draw_texture(*(Ref**)( this + 0xac0 ), (Vector2*)&local_b0, (Color*)&local_58);
      }

      local_58 = 0x3f800000;
      uStack_50 = 0x3f80000000000000;
      local_48 = 0;
      CanvasItem::draw_set_transform_matrix(*(Transform2D**)( this + 0xac0 ));
      if (local_b0 != (Object*)0x0) {
         cVar2 = RefCounted::unreference();
         pOVar1 = local_b0;
         if (cVar2 != '\0') {
            cVar2 = predelete_handler(local_b0);
            if (cVar2 != '\0') {
               ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
               Memory::free_static(pOVar1, false);
            }

         }

      }

   }
 else {
      _err_print_error("_connection_draw", "editor/plugins/animation_state_machine_editor.cpp", 0x3a6, "Condition \"icon_index >= ICON_COUNT\" is true.", 0, 0);
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AnimationNodeStateMachineEditor::_clip_src_line_to_rect(Vector2&, Vector2 const&, Rect2 const&)
    */void AnimationNodeStateMachineEditor::_clip_src_line_to_rect(AnimationNodeStateMachineEditor *this, Vector2 *param_1, Vector2 *param_2, Rect2 *param_3) {
   float fVar1;
   float fVar2;
   long lVar3;
   long in_FS_OFFSET;
   undefined8 extraout_XMM0_Qb;
   undefined1 auVar4[16];
   lVar3 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( (float)*(undefined8*)param_1 != (float)*(undefined8*)param_2 ) || ( (float)( ( ulong ) * (undefined8*)param_1 >> 0x20 ) != (float)( ( ulong ) * (undefined8*)param_2 >> 0x20 ) )) {
      auVar4._0_8_ = Vector2::normalized();
      auVar4._8_8_ = extraout_XMM0_Qb;
      while (true) {
         if (( *(float*)( param_3 + 8 ) <= 0.0 && *(float*)( param_3 + 8 ) != 0.0 ) || ( *(float*)( param_3 + 0xc ) <= 0.0 && *(float*)( param_3 + 0xc ) != 0.0 )) {
            _err_print_error("has_point", "./core/math/rect2.h", 0xb9, "Rect2 size is negative, this is not supported. Use Rect2.abs() to get a Rect2 with a positive size.", 0, 0);
            auVar4._8_8_ = 0;
         }

         fVar2 = *(float*)param_1;
         if (fVar2 < *(float*)param_3) break;
         fVar1 = *(float*)( param_1 + 4 );
         if (( ( fVar1 < *(float*)( param_3 + 4 ) ) || ( *(float*)param_3 + *(float*)( param_3 + 8 ) <= fVar2 ) ) || ( *(float*)( param_3 + 4 ) + *(float*)( param_3 + 0xc ) <= fVar1 )) break;
         *(ulong*)param_1 = CONCAT44(fVar1 + auVar4._4_4_, fVar2 + auVar4._0_4_);
      }
;
   }

   if (lVar3 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AnimationNodeStateMachineEditor::_clip_dst_line_to_rect(Vector2 const&, Vector2&, Rect2 const&)
    */void AnimationNodeStateMachineEditor::_clip_dst_line_to_rect(AnimationNodeStateMachineEditor *this, Vector2 *param_1, Vector2 *param_2, Rect2 *param_3) {
   float fVar1;
   float fVar2;
   long lVar3;
   long in_FS_OFFSET;
   undefined8 extraout_XMM0_Qb;
   undefined1 auVar4[16];
   lVar3 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( (float)*(undefined8*)param_1 != (float)*(undefined8*)param_2 ) || ( (float)( ( ulong ) * (undefined8*)param_1 >> 0x20 ) != (float)( ( ulong ) * (undefined8*)param_2 >> 0x20 ) )) {
      auVar4._0_8_ = Vector2::normalized();
      auVar4._8_8_ = extraout_XMM0_Qb;
      while (true) {
         if (( *(float*)( param_3 + 8 ) <= 0.0 && *(float*)( param_3 + 8 ) != 0.0 ) || ( *(float*)( param_3 + 0xc ) <= 0.0 && *(float*)( param_3 + 0xc ) != 0.0 )) {
            _err_print_error("has_point", "./core/math/rect2.h", 0xb9, "Rect2 size is negative, this is not supported. Use Rect2.abs() to get a Rect2 with a positive size.", 0, 0);
            auVar4._8_8_ = 0;
         }

         fVar2 = *(float*)param_2;
         if (fVar2 < *(float*)param_3) break;
         fVar1 = *(float*)( param_2 + 4 );
         if (( ( fVar1 < *(float*)( param_3 + 4 ) ) || ( *(float*)param_3 + *(float*)( param_3 + 8 ) <= fVar2 ) ) || ( *(float*)( param_3 + 4 ) + *(float*)( param_3 + 0xc ) <= fVar1 )) break;
         *(ulong*)param_2 = CONCAT44(fVar1 - auVar4._4_4_, fVar2 - auVar4._0_4_);
      }
;
   }

   if (lVar3 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AnimationNodeStateMachineEditor::_adjust_stylebox_opacity(Ref<StyleBox>, float) */long *AnimationNodeStateMachineEditor::_adjust_stylebox_opacity(float param_1, undefined8 param_2, long *param_3, undefined8 param_4, undefined8 *param_5) {
   code *pcVar1;
   char cVar2;
   long lVar3;
   Object *pOVar4;
   long in_FS_OFFSET;
   undefined8 local_90;
   Object *local_88;
   undefined8 local_80;
   undefined8 local_78;
   undefined8 local_70;
   undefined8 local_68;
   undefined8 local_60;
   undefined8 local_58;
   undefined4 local_50;
   float fStack_4c;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   ( **(code**)( *(long*)*param_5 + 0x198 ) )(&local_88, (long*)*param_5, 0);
   *param_3 = 0;
   pOVar4 = local_88;
   if (local_88 == (Object*)0x0) goto LAB_00104cc1;
   lVar3 = __dynamic_cast(local_88, &Object::typeinfo, &StyleBox::typeinfo, 0);
   if (lVar3 == 0) {
      LAB_00104cad:cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         cVar2 = predelete_handler(local_88);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)local_88 + 0x140 ) )(local_88);
            Memory::free_static(local_88, false);
         }

      }

   }
 else {
      *param_3 = lVar3;
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
         *param_3 = 0;
      }

      if (local_88 != (Object*)0x0) goto LAB_00104cad;
   }

   pOVar4 = (Object*)*param_3;
   LAB_00104cc1:local_90 = 0;
   pcVar1 = *(code**)( *(long*)pOVar4 + 0x58 );
   local_80 = 0xc;
   local_88 = (Object*)0x11cd1f;
   String::parse_latin1((StrRange*)&local_90);
   cVar2 = ( *pcVar1 )(pOVar4, (StrRange*)&local_90);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   if (cVar2 != '\0') {
      pOVar4 = (Object*)*param_3;
      if (pOVar4 != (Object*)0x0) {
         pOVar4 = (Object*)__dynamic_cast(pOVar4, &Object::typeinfo, &StyleBoxFlat::typeinfo, 0);
         if (pOVar4 != (Object*)0x0) {
            cVar2 = RefCounted::reference();
            if (cVar2 == '\0') {
               pOVar4 = (Object*)0x0;
            }

         }

      }

      local_78 = StyleBoxFlat::get_bg_color();
      local_70 = param_2;
      local_68 = StyleBoxFlat::get_border_color();
      local_60 = param_2;
      local_58 = StyleBoxFlat::get_shadow_color();
      local_70 = CONCAT44(local_70._4_4_ * param_1, (undefined4)local_70);
      fStack_4c = (float)( (ulong)param_2 >> 0x20 );
      local_60 = CONCAT44(local_60._4_4_ * param_1, (undefined4)local_60);
      _local_50 = CONCAT44(param_1 * fStack_4c, (int)param_2);
      StyleBoxFlat::set_bg_color(pOVar4);
      StyleBoxFlat::set_border_color(pOVar4);
      StyleBoxFlat::set_shadow_color(pOVar4);
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         cVar2 = predelete_handler(pOVar4);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar4 + 0x140 ) )(pOVar4);
            Memory::free_static(pOVar4, false);
         }

      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* EditorAnimationMultiTransitionEdit::_get(StringName const&, Variant&) const */uint EditorAnimationMultiTransitionEdit::_get(EditorAnimationMultiTransitionEdit *this, StringName *param_1, Variant *param_2) {
   long lVar1;
   char *pcVar2;
   code *pcVar3;
   int iVar4;
   uint uVar5;
   long lVar6;
   int iVar7;
   wchar32 wVar8;
   long lVar9;
   long in_FS_OFFSET;
   String *local_a8;
   long local_90;
   undefined8 local_88;
   undefined8 local_80;
   String local_78[8];
   undefined8 local_70;
   char *local_68;
   size_t local_60;
   undefined4 local_58[2];
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   lVar1 = *(long*)param_1;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (lVar1 == 0) {
      local_70 = 0;
   }
 else {
      pcVar2 = *(char**)( lVar1 + 8 );
      local_70 = 0;
      if (pcVar2 == (char*)0x0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)( lVar1 + 0x10 ));
      }
 else {
         local_60 = strlen(pcVar2);
         local_68 = pcVar2;
         String::parse_latin1((StrRange*)&local_70);
      }

   }

   iVar7 = (int)(CowData<char32_t>*)&local_70;
   wVar8 = (wchar32)(CowData<char32_t>*)&local_68;
   String::get_slicec(wVar8, iVar7);
   iVar4 = String::to_int();
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   lVar1 = *(long*)param_1;
   if (lVar1 == 0) {
      local_70 = 0;
   }
 else {
      pcVar2 = *(char**)( lVar1 + 8 );
      local_70 = 0;
      if (pcVar2 == (char*)0x0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)( lVar1 + 0x10 ));
      }
 else {
         local_60 = strlen(pcVar2);
         local_68 = pcVar2;
         String::parse_latin1((StrRange*)&local_70);
      }

   }

   String::get_slicec(wVar8, iVar7);
   StringName::StringName((StringName*)&local_90, (String*)&local_68, false);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   uVar5 = StringName::operator ==((StringName*)&local_90, "transition_path");
   lVar6 = (long)iVar4;
   lVar1 = *(long*)( this + 0x188 );
   if ((char)uVar5 == '\0') {
      if (iVar4 < 0) goto LAB_00105260;
      if (lVar1 != 0) {
         lVar9 = *(long*)( lVar1 + -8 );
         if (lVar6 < lVar9) {
            Object::get((StringName*)local_58, *(bool**)( lVar1 + 0x10 + lVar6 * 0x18 ));
            if (Variant::needs_deinit[*(int*)param_2] != '\0') {
               Variant::_clear_internal();
            }

            uVar5 = (uint)(byte)local_68._0_1_;
            *(undefined4*)param_2 = local_58[0];
            *(undefined8*)( param_2 + 8 ) = local_50;
            *(undefined8*)( param_2 + 0x10 ) = uStack_48;
            LAB_001051ea:if (( StringName::configured != '\0' ) && ( local_90 != 0 )) {
               StringName::unref();
            }

            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               return uVar5;
            }

            /* WARNING: Subroutine does not return */
            __stack_chk_fail();
         }

         goto LAB_0010526d;
      }

   }
 else if (lVar6 < 0) {
      LAB_00105260:if (lVar1 != 0) {
         lVar9 = *(long*)( lVar1 + -8 );
         goto LAB_0010526d;
      }

   }
 else if (lVar1 != 0) {
      lVar9 = *(long*)( lVar1 + -8 );
      if (lVar9 <= lVar6) goto LAB_0010526d;
      lVar1 = *(long*)( lVar1 + 8 + lVar6 * 0x18 );
      if (lVar1 == 0) {
         local_70 = 0;
      }
 else {
         local_70 = 0;
         if (*(char**)( lVar1 + 8 ) == (char*)0x0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)( lVar1 + 0x10 ));
         }
 else {
            String::parse_latin1((String*)&local_70, *(char**)( lVar1 + 8 ));
         }

      }

      local_68 = " -> ";
      local_80 = 0;
      local_60 = 4;
      String::parse_latin1((StrRange*)&local_80);
      lVar1 = *(long*)( this + 0x188 );
      if (lVar1 != 0) {
         lVar9 = *(long*)( lVar1 + -8 );
         if (lVar6 < lVar9) {
            lVar1 = *(long*)( lVar1 + lVar6 * 0x18 );
            if (lVar1 == 0) {
               local_88 = 0;
            }
 else {
               local_88 = 0;
               if (*(char**)( lVar1 + 8 ) == (char*)0x0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_88, (CowData*)( lVar1 + 0x10 ));
               }
 else {
                  String::parse_latin1((String*)&local_88, *(char**)( lVar1 + 8 ));
               }

            }

            local_a8 = (String*)&local_88;
            String::operator +(local_78, local_a8);
            String::operator +((String*)&local_68, local_78);
            Variant::Variant((Variant*)local_58, (String*)&local_68);
            if (Variant::needs_deinit[*(int*)param_2] != '\0') {
               Variant::_clear_internal();
            }

            *(undefined4*)param_2 = local_58[0];
            *(undefined8*)( param_2 + 8 ) = local_50;
            *(undefined8*)( param_2 + 0x10 ) = uStack_48;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
            CowData<char32_t>::_unref((CowData<char32_t>*)local_78);
            CowData<char32_t>::_unref((CowData<char32_t>*)local_a8);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
            goto LAB_001051ea;
         }

         goto LAB_0010526d;
      }

   }

   lVar9 = 0;
   LAB_0010526d:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar6, lVar9, "p_index", "size()", "", false, true);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar3 = (code*)invalidInstructionException();
   ( *pcVar3 )();
}
/* WARNING: Removing unreachable block (ram,0x00105763) *//* WARNING: Removing unreachable block (ram,0x00107200) *//* WARNING: Removing unreachable block (ram,0x00107181) *//* WARNING: Removing unreachable block (ram,0x00107270) *//* WARNING: Removing unreachable block (ram,0x00107280) *//* WARNING: Removing unreachable block (ram,0x00107212) *//* WARNING: Removing unreachable block (ram,0x00107232) *//* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* AnimationNodeStateMachineEditor::AnimationNodeStateMachineEditor() */void AnimationNodeStateMachineEditor::AnimationNodeStateMachineEditor(AnimationNodeStateMachineEditor *this) {
   code *pcVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   char cVar5;
   BoxContainer *this_00;
   ButtonGroup *this_01;
   Button *pBVar6;
   BoxContainer *pBVar7;
   VSeparator *pVVar8;
   CallableCustom *pCVar9;
   Label *pLVar10;
   OptionButton *pOVar11;
   PanelContainer *pPVar12;
   Control *pCVar13;
   Object *pOVar14;
   PopupMenu *pPVar15;
   Popup *this_02;
   LineEdit *this_03;
   EditorFileDialog *this_04;
   ConfirmationDialog *this_05;
   Tree *this_06;
   String *pSVar16;
   long *plVar17;
   long in_FS_OFFSET;
   uint uVar18;
   undefined1 auVar19[16];
   undefined1 auVar20[16];
   float fVar21;
   ButtonGroup *local_c0;
   undefined8 local_b8;
   undefined8 local_b0;
   long local_a8[2];
   char *local_98;
   undefined8 local_90;
   Variant *local_88;
   int local_78;
   float local_74;
   undefined8 local_60;
   undefined1 local_58[16];
   long local_40;
   undefined8 extraout_XMM0_Qb;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   BoxContainer::BoxContainer((BoxContainer*)this, true);
   *(undefined***)this = &PTR__initialize_classv_0012c5e0;
   uVar4 = _LC93;
   uVar3 = _UNK_0012d128;
   uVar2 = __LC94;
   *(undefined1(*) [16])( this + 0xa20 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0xa30 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0xaa8 ) = uVar4;
   *(undefined1(*) [16])( this + 0xa40 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0xa50 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0xa60 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0xa70 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0xa80 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0xa90 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0xab0 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0xac0 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0xad0 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0xae0 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0xaf0 ) = uVar2;
   *(undefined8*)( this + 0xaf8 ) = uVar3;
   for (int i = 0; i < 8; i++) {
      *(undefined1(*) [16])( this + ( 16*i + 2816 ) ) = (undefined1[16])0;
   }

   *(undefined8*)( this + 0xb8c ) = uVar2;
   *(undefined8*)( this + 0xb94 ) = uVar3;
   this[0xa0c] = (AnimationNodeStateMachineEditor)0x1;
   *(undefined8*)( this + 0xa10 ) = 0;
   this[0xa18] = (AnimationNodeStateMachineEditor)0x0;
   *(undefined8*)( this + 0xaa0 ) = 0;
   *(undefined8*)( this + 0xb80 ) = 0;
   *(undefined4*)( this + 0xb88 ) = 0;
   *(undefined1(*) [16])( this + 0xba0 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0xc30 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0xc40 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0xc50 ) = (undefined1[16])0x0;
   *(undefined2*)( this + 0xd38 ) = 0;
   *(undefined8*)( this + 0xd30 ) = uVar4;
   *(undefined8*)( this + 0xbb0 ) = uVar2;
   *(undefined8*)( this + 3000 ) = uVar3;
   *(undefined8*)( this + 0xbc0 ) = uVar2;
   *(undefined8*)( this + 0xbc8 ) = uVar3;
   *(undefined8*)( this + 0xbd0 ) = uVar2;
   *(undefined8*)( this + 0xbd8 ) = uVar3;
   *(undefined8*)( this + 0xbe0 ) = uVar2;
   *(undefined8*)( this + 0xbe8 ) = uVar3;
   *(undefined8*)( this + 0xbf0 ) = uVar2;
   *(undefined8*)( this + 0xbf8 ) = uVar3;
   *(undefined8*)( this + 0xc00 ) = uVar2;
   *(undefined8*)( this + 0xc08 ) = uVar3;
   *(undefined8*)( this + 0xc10 ) = uVar2;
   *(undefined8*)( this + 0xc18 ) = uVar3;
   *(undefined8*)( this + 0xc20 ) = uVar2;
   *(undefined8*)( this + 0xc28 ) = uVar3;
   *(undefined8*)( this + 0xc60 ) = uVar2;
   *(undefined8*)( this + 0xc68 ) = uVar3;
   *(undefined8*)( this + 0xc70 ) = uVar2;
   *(undefined8*)( this + 0xc78 ) = uVar3;
   *(undefined1(*) [16])( this + 0xc88 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0xc98 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0xcd8 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0xd10 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0xd20 ) = (undefined1[16])0x0;
   this[0xc80] = (AnimationNodeStateMachineEditor)0x0;
   *(undefined8*)( this + 0xca8 ) = 0;
   *(undefined8*)( this + 0xcb8 ) = 0;
   *(undefined8*)( this + 0xcc8 ) = 0;
   *(undefined8*)( this + 0xcd0 ) = 0;
   this[0xce8] = (AnimationNodeStateMachineEditor)0x0;
   *(undefined8*)( this + 0xcec ) = 0;
   *(undefined8*)( this + 0xcf4 ) = 0;
   *(undefined8*)( this + 0xcfc ) = 0;
   *(undefined8*)( this + 0xd04 ) = 0;
   *(undefined8*)( this + 0xd3c ) = 0;
   *(undefined8*)( this + 0xd44 ) = 0;
   *(undefined1(*) [16])( this + 0xd50 ) = (undefined1[16])0x0;
   *(undefined2*)( this + 0xd60 ) = 0;
   *(undefined8*)( this + 0xd68 ) = 0;
   *(undefined8*)( this + 0xd70 ) = 0;
   *(undefined8*)( this + 0xd78 ) = 0;
   *(undefined8*)( this + 0xd88 ) = 0;
   *(undefined8*)( this + 0xda8 ) = 0;
   *(undefined4*)( this + 0xdb0 ) = 0xffffffff;
   *(undefined8*)( this + 0xdb8 ) = 0;
   *(undefined4*)( this + 0xdc0 ) = 0xffffffff;
   *(undefined8*)( this + 0xdc8 ) = 0;
   this[0xdd0] = (AnimationNodeStateMachineEditor)0x0;
   *(undefined8*)( this + 0xdf0 ) = 0;
   *(undefined8*)( this + 0xe18 ) = 0;
   *(undefined4*)( this + 0xe20 ) = 0;
   *(undefined8*)( this + 0xe58 ) = 0;
   *(undefined8*)( this + 0xe60 ) = uVar4;
   *(undefined1(*) [16])( this + 0xdf8 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0xe08 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0xd98 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0xdd8 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0xe28 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0xe38 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0xe48 ) = (undefined1[16])0x0;
   singleton = this;
   this_00 = (BoxContainer*)operator_new(0xa10, "");
   BoxContainer::BoxContainer(this_00, false);
   this_00[0xa0c] = (BoxContainer)0x1;
   *(undefined***)this_00 = &PTR__initialize_classv_0012bb88;
   postinitialize_handler((Object*)this_00);
   Node::add_child(this, this_00, 0, 0);
   local_c0 = (ButtonGroup*)0x0;
   this_01 = (ButtonGroup*)operator_new(0x270, "");
   ButtonGroup::ButtonGroup(this_01);
   postinitialize_handler((Object*)this_01);
   cVar5 = RefCounted::init_ref();
   if (cVar5 != '\0') {
      pOVar14 = (Object*)0x0;
      if (( this_01 != (ButtonGroup*)0x0 ) && ( cVar5 = RefCounted::reference() ),pOVar14 = (Object*)this_01,local_c0 = this_01,cVar5 == '\0') {
         local_c0 = (ButtonGroup*)0x0;
      }

      cVar5 = RefCounted::unreference();
      if (( cVar5 != '\0' ) && ( cVar5 = cVar5 != '\0' )) {
         ( **(code**)( *(long*)pOVar14 + 0x140 ) )(pOVar14);
         Memory::free_static(pOVar14, false);
      }

   }

   pBVar6 = (Button*)operator_new(0xc10, "");
   local_98 = (char*)0x0;
   Button::Button(pBVar6, (String*)&local_98);
   postinitialize_handler((Object*)pBVar6);
   *(Button**)( this + 0xa20 ) = pBVar6;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   Control::set_theme_type_variation(*(StringName**)( this + 0xa20 ));
   Node::add_child(this_00, *(undefined8*)( this + 0xa20 ), 0, 0);
   BaseButton::set_toggle_mode(SUB81(*(undefined8*)( this + 0xa20 ), 0));
   BaseButton::set_button_group(*(Ref**)( this + 0xa20 ));
   BaseButton::set_pressed(SUB81(*(undefined8*)( this + 0xa20 ), 0));
   local_98 = "";
   local_a8[0] = 0;
   pSVar16 = *(String**)( this + 0xa20 );
   local_90 = 0;
   String::parse_latin1((StrRange*)local_a8);
   local_b0 = 0;
   local_98 = "Select and move nodes.\nRMB: Add node at position clicked.\nShift+LMB+Drag: Connects the selected node with another node or creates a new node if you select an area without nodes.";
   local_90 = 0xb1;
   String::parse_latin1((StrRange*)&local_b0);
   TTR((String*)&local_98, (String*)&local_b0);
   Control::set_tooltip_text(pSVar16);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_a8);
   plVar17 = *(long**)( this + 0xa20 );
   pcVar1 = *(code**)( *plVar17 + 0x108 );
   create_custom_callable_function_pointer<AnimationNodeStateMachineEditor>((AnimationNodeStateMachineEditor*)&local_98, (char*)this, (_func_void*)"&AnimationNodeStateMachineEditor::_update_mode");
   ( *pcVar1 )(plVar17, SceneStringNames::singleton + 0x238, (CowData<char32_t>*)&local_98, 1);
   Callable::~Callable((Callable*)&local_98);
   pBVar6 = (Button*)operator_new(0xc10, "");
   local_98 = (char*)0x0;
   Button::Button(pBVar6, (String*)&local_98);
   postinitialize_handler((Object*)pBVar6);
   *(Button**)( this + 0xa28 ) = pBVar6;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   Control::set_theme_type_variation(*(StringName**)( this + 0xa28 ));
   Node::add_child(this_00, *(undefined8*)( this + 0xa28 ), 0, 0);
   BaseButton::set_toggle_mode(SUB81(*(undefined8*)( this + 0xa28 ), 0));
   BaseButton::set_button_group(*(Ref**)( this + 0xa28 ));
   local_98 = "";
   local_a8[0] = 0;
   pSVar16 = *(String**)( this + 0xa28 );
   local_90 = 0;
   String::parse_latin1((StrRange*)local_a8);
   local_98 = "Create new nodes.";
   local_b0 = 0;
   local_90 = 0x11;
   String::parse_latin1((StrRange*)&local_b0);
   TTR((String*)&local_98, (String*)&local_b0);
   Control::set_tooltip_text(pSVar16);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_a8);
   plVar17 = *(long**)( this + 0xa28 );
   pcVar1 = *(code**)( *plVar17 + 0x108 );
   create_custom_callable_function_pointer<AnimationNodeStateMachineEditor>((AnimationNodeStateMachineEditor*)&local_98, (char*)this, (_func_void*)"&AnimationNodeStateMachineEditor::_update_mode");
   ( *pcVar1 )(plVar17, SceneStringNames::singleton + 0x238, (CowData<char32_t>*)&local_98, 1);
   Callable::~Callable((Callable*)&local_98);
   pBVar6 = (Button*)operator_new(0xc10, "");
   local_98 = (char*)0x0;
   Button::Button(pBVar6, (String*)&local_98);
   postinitialize_handler((Object*)pBVar6);
   *(Button**)( this + 0xa30 ) = pBVar6;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   Control::set_theme_type_variation(*(StringName**)( this + 0xa30 ));
   Node::add_child(this_00, *(undefined8*)( this + 0xa30 ), 0, 0);
   BaseButton::set_toggle_mode(SUB81(*(undefined8*)( this + 0xa30 ), 0));
   BaseButton::set_button_group(*(Ref**)( this + 0xa30 ));
   local_98 = "";
   local_a8[0] = 0;
   pSVar16 = *(String**)( this + 0xa30 );
   local_90 = 0;
   String::parse_latin1((StrRange*)local_a8);
   local_98 = "Connect nodes.";
   local_b0 = 0;
   local_90 = 0xe;
   String::parse_latin1((StrRange*)&local_b0);
   TTR((String*)&local_98, (String*)&local_b0);
   Control::set_tooltip_text(pSVar16);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_a8);
   plVar17 = *(long**)( this + 0xa30 );
   pcVar1 = *(code**)( *plVar17 + 0x108 );
   create_custom_callable_function_pointer<AnimationNodeStateMachineEditor>((AnimationNodeStateMachineEditor*)&local_98, (char*)this, (_func_void*)"&AnimationNodeStateMachineEditor::_update_mode");
   ( *pcVar1 )(plVar17, SceneStringNames::singleton + 0x238, (CowData<char32_t>*)&local_98, 1);
   Callable::~Callable((Callable*)&local_98);
   pBVar7 = (BoxContainer*)operator_new(0xa10, "");
   BoxContainer::BoxContainer(pBVar7, false);
   pBVar7[0xa0c] = (BoxContainer)0x1;
   *(undefined***)pBVar7 = &PTR__initialize_classv_0012bb88;
   postinitialize_handler((Object*)pBVar7);
   *(BoxContainer**)( this + 0xa48 ) = pBVar7;
   Node::add_child(this_00, pBVar7, 0, 0);
   uVar2 = *(undefined8*)( this + 0xa48 );
   pVVar8 = (VSeparator*)operator_new(0x9e0, "");
   VSeparator::VSeparator(pVVar8);
   postinitialize_handler((Object*)pVVar8);
   Node::add_child(uVar2, pVVar8, 0, 0);
   pBVar6 = (Button*)operator_new(0xc10, "");
   local_98 = (char*)0x0;
   Button::Button(pBVar6, (String*)&local_98);
   postinitialize_handler((Object*)pBVar6);
   *(Button**)( this + 0xa50 ) = pBVar6;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   Control::set_theme_type_variation(*(StringName**)( this + 0xa50 ));
   local_98 = "";
   local_a8[0] = 0;
   pSVar16 = *(String**)( this + 0xa50 );
   local_90 = 0;
   String::parse_latin1((StrRange*)local_a8);
   local_98 = "Remove selected node or transition.";
   local_b0 = 0;
   local_90 = 0x23;
   String::parse_latin1((StrRange*)&local_b0);
   TTR((String*)&local_98, (String*)&local_b0);
   Control::set_tooltip_text(pSVar16);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_a8);
   plVar17 = *(long**)( this + 0xa50 );
   pcVar1 = *(code**)( *plVar17 + 0x108 );
   pCVar9 = (CallableCustom*)operator_new(0x48, "");
   CallableCustom::CallableCustom(pCVar9);
   *(undefined**)( pCVar9 + 0x20 ) = &_LC0;
   *(AnimationNodeStateMachineEditor**)( pCVar9 + 0x28 ) = this;
   *(undefined1(*) [16])( pCVar9 + 0x30 ) = (undefined1[16])0x0;
   *(undefined***)pCVar9 = &PTR_hash_0012cb18;
   *(undefined8*)( pCVar9 + 0x40 ) = 0;
   uVar2 = *(undefined8*)( this + 0x60 );
   *(undefined8*)( pCVar9 + 0x10 ) = 0;
   *(undefined8*)( pCVar9 + 0x30 ) = uVar2;
   *(code**)( pCVar9 + 0x38 ) = _erase_selected;
   CallableCustomMethodPointerBase::_setup((uint*)pCVar9, (int)pCVar9 + 0x28);
   *(char**)( pCVar9 + 0x20 ) = "AnimationNodeStateMachineEditor::_erase_selected";
   Callable::Callable((Callable*)&local_98, pCVar9);
   Variant::Variant((Variant*)&local_78, false);
   local_60 = 0;
   local_58 = (undefined1[16])0x0;
   local_88 = (Variant*)&local_78;
   Callable::bindp((Variant**)local_a8, (int)(CowData<char32_t>*)&local_98);
   if (Variant::needs_deinit[(int)local_60] != '\0') {
      Variant::_clear_internal();
   }

   if (Variant::needs_deinit[local_78] != '\0') {
      Variant::_clear_internal();
   }

   ( *pcVar1 )(plVar17, SceneStringNames::singleton + 0x238, (StrRange*)local_a8, 0);
   Callable::~Callable((Callable*)local_a8);
   Callable::~Callable((Callable*)&local_98);
   BaseButton::set_disabled(SUB81(*(undefined8*)( this + 0xa50 ), 0));
   Node::add_child(*(undefined8*)( this + 0xa48 ), *(undefined8*)( this + 0xa50 ), 0, 0);
   pBVar7 = (BoxContainer*)operator_new(0xa10, "");
   BoxContainer::BoxContainer(pBVar7, false);
   pBVar7[0xa0c] = (BoxContainer)0x1;
   *(undefined***)pBVar7 = &PTR__initialize_classv_0012bb88;
   postinitialize_handler((Object*)pBVar7);
   *(BoxContainer**)( this + 0xa58 ) = pBVar7;
   Node::add_child(this_00, pBVar7, 0, 0);
   uVar2 = *(undefined8*)( this + 0xa58 );
   pVVar8 = (VSeparator*)operator_new(0x9e0, "");
   VSeparator::VSeparator(pVVar8);
   postinitialize_handler((Object*)pVVar8);
   Node::add_child(uVar2, pVVar8, 0, 0);
   uVar2 = *(undefined8*)( this + 0xa58 );
   pLVar10 = (Label*)operator_new(0xad8, "");
   local_98 = "";
   local_a8[0] = 0;
   local_90 = 0;
   String::parse_latin1((StrRange*)local_a8);
   local_98 = "Transition:";
   local_b0 = 0;
   local_90 = 0xb;
   String::parse_latin1((StrRange*)&local_b0);
   TTR((String*)&local_98, (String*)&local_b0);
   Label::Label(pLVar10, (String*)&local_98);
   postinitialize_handler((Object*)pLVar10);
   Node::add_child(uVar2, pLVar10, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_a8);
   pOVar11 = (OptionButton*)operator_new(0xd00, "");
   local_98 = (char*)0x0;
   OptionButton::OptionButton(pOVar11, (String*)&local_98);
   postinitialize_handler((Object*)pOVar11);
   *(OptionButton**)( this + 0xa60 ) = pOVar11;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   Node::add_child(*(undefined8*)( this + 0xa58 ), *(undefined8*)( this + 0xa60 ), 0, 0);
   pBVar6 = (Button*)operator_new(0xc10, "");
   local_98 = (char*)0x0;
   Button::Button(pBVar6, (String*)&local_98);
   postinitialize_handler((Object*)pBVar6);
   *(Button**)( this + 0xa68 ) = pBVar6;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   Control::set_theme_type_variation(*(StringName**)( this + 0xa68 ));
   local_98 = "";
   local_a8[0] = 0;
   pSVar16 = *(String**)( this + 0xa68 );
   local_90 = 0;
   String::parse_latin1((StrRange*)local_a8);
   local_98 = "New Transitions Should Auto Advance";
   local_b0 = 0;
   local_90 = 0x23;
   String::parse_latin1((StrRange*)&local_b0);
   TTR((String*)&local_98, (String*)&local_b0);
   Control::set_tooltip_text(pSVar16);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_a8);
   BaseButton::set_toggle_mode(SUB81(*(undefined8*)( this + 0xa68 ), 0));
   BaseButton::set_pressed(SUB81(*(undefined8*)( this + 0xa68 ), 0));
   Node::add_child(*(undefined8*)( this + 0xa58 ), *(undefined8*)( this + 0xa68 ), 0, 0);
   BoxContainer::add_spacer(SUB81(this_00, 0));
   pLVar10 = (Label*)operator_new(0xad8, "");
   local_98 = "";
   local_a8[0] = 0;
   local_90 = 0;
   String::parse_latin1((StrRange*)local_a8);
   local_98 = "Play Mode:";
   local_b0 = 0;
   local_90 = 10;
   String::parse_latin1((StrRange*)&local_b0);
   TTR((String*)&local_98, (String*)&local_b0);
   Label::Label(pLVar10, (String*)&local_98);
   postinitialize_handler((Object*)pLVar10);
   Node::add_child(this_00, pLVar10, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_a8);
   pOVar11 = (OptionButton*)operator_new(0xd00, "");
   local_98 = (char*)0x0;
   OptionButton::OptionButton(pOVar11, (String*)&local_98);
   postinitialize_handler((Object*)pOVar11);
   *(OptionButton**)( this + 0xa70 ) = pOVar11;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   Node::add_child(this_00, *(undefined8*)( this + 0xa70 ), 0, 0);
   pPVar12 = (PanelContainer*)operator_new(0xa08, "");
   PanelContainer::PanelContainer(pPVar12);
   postinitialize_handler((Object*)pPVar12);
   *(PanelContainer**)( this + 0xa78 ) = pPVar12;
   Control::set_clip_contents(SUB81(pPVar12, 0));
   Control::set_mouse_filter(*(undefined8*)( this + 0xa78 ), 1);
   Node::add_child(this, *(undefined8*)( this + 0xa78 ), 0, 0);
   Control::set_v_size_flags(*(undefined8*)( this + 0xa78 ), 3);
   pCVar13 = (Control*)operator_new(0x9c8, "");
   Control::Control(pCVar13);
   postinitialize_handler((Object*)pCVar13);
   *(Control**)( this + 0xac0 ) = pCVar13;
   Node::add_child(*(undefined8*)( this + 0xa78 ), pCVar13, 0, 0);
   plVar17 = *(long**)( this + 0xac0 );
   pcVar1 = *(code**)( *plVar17 + 0x108 );
   pCVar9 = (CallableCustom*)operator_new(0x48, "");
   CallableCustom::CallableCustom(pCVar9);
   *(undefined**)( pCVar9 + 0x20 ) = &_LC0;
   *(AnimationNodeStateMachineEditor**)( pCVar9 + 0x28 ) = this;
   *(undefined1(*) [16])( pCVar9 + 0x30 ) = (undefined1[16])0x0;
   *(undefined***)pCVar9 = &PTR_hash_0012cba8;
   *(undefined8*)( pCVar9 + 0x40 ) = 0;
   uVar2 = *(undefined8*)( this + 0x60 );
   *(undefined8*)( pCVar9 + 0x10 ) = 0;
   *(undefined8*)( pCVar9 + 0x30 ) = uVar2;
   *(code**)( pCVar9 + 0x38 ) = _state_machine_gui_input;
   CallableCustomMethodPointerBase::_setup((uint*)pCVar9, (int)pCVar9 + 0x28);
   *(char**)( pCVar9 + 0x20 ) = "AnimationNodeStateMachineEditor::_state_machine_gui_input";
   Callable::Callable((Callable*)&local_98, pCVar9);
   ( *pcVar1 )(plVar17, SceneStringNames::singleton + 0x28, (CowData<char32_t>*)&local_98, 0);
   Callable::~Callable((Callable*)&local_98);
   plVar17 = *(long**)( this + 0xac0 );
   pcVar1 = *(code**)( *plVar17 + 0x108 );
   create_custom_callable_function_pointer<AnimationNodeStateMachineEditor>((AnimationNodeStateMachineEditor*)&local_98, (char*)this, (_func_void*)"&AnimationNodeStateMachineEditor::_state_machine_draw");
   ( *pcVar1 )(plVar17, SceneStringNames::singleton + 8, (CowData<char32_t>*)&local_98);
   Callable::~Callable((Callable*)&local_98);
   Control::set_focus_mode(*(undefined8*)( this + 0xac0 ), 2);
   Control::set_mouse_filter(*(undefined8*)( this + 0xac0 ), 1);
   pCVar13 = (Control*)operator_new(0x9c8, "");
   Control::Control(pCVar13);
   postinitialize_handler((Object*)pCVar13);
   *(Control**)( this + 0xac8 ) = pCVar13;
   Node::add_child(*(undefined8*)( this + 0xac0 ), pCVar13, 0);
   Control::set_mouse_filter(*(undefined8*)( this + 0xac8 ), 1);
   Control::set_anchors_and_offsets_preset(*(undefined8*)( this + 0xac8 ), 0xf, 0, 0);
   plVar17 = *(long**)( this + 0xac8 );
   pcVar1 = *(code**)( *plVar17 + 0x108 );
   create_custom_callable_function_pointer<AnimationNodeStateMachineEditor>((AnimationNodeStateMachineEditor*)&local_98, (char*)this, (_func_void*)"&AnimationNodeStateMachineEditor::_state_machine_pos_draw_all");
   ( *pcVar1 )(plVar17, SceneStringNames::singleton + 8, (CowData<char32_t>*)&local_98);
   Callable::~Callable((Callable*)&local_98);
   pOVar14 = (Object*)operator_new(0xac8, "");
   ScrollBar::ScrollBar((ScrollBar*)pOVar14);
   *(undefined***)pOVar14 = &PTR__initialize_classv_0012c270;
   Control::set_h_size_flags(pOVar14, 0);
   postinitialize_handler(pOVar14);
   *(Object**)( this + 0xab8 ) = pOVar14;
   Node::add_child(*(undefined8*)( this + 0xac0 ), pOVar14, 0);
   Control::set_anchors_and_offsets_preset(*(undefined8*)( this + 0xab8 ), 0xb, 0, 0);
   plVar17 = *(long**)( this + 0xab8 );
   pcVar1 = *(code**)( *plVar17 + 0x108 );
   create_custom_callable_function_pointer<AnimationNodeStateMachineEditor,double>((AnimationNodeStateMachineEditor*)&local_98, (char*)this, (_func_void_double*)"&AnimationNodeStateMachineEditor::_scroll_changed");
   ( *pcVar1 )(plVar17, SceneStringNames::singleton + 0x280, (CowData<char32_t>*)&local_98);
   Callable::~Callable((Callable*)&local_98);
   pOVar14 = (Object*)operator_new(0xac8, "");
   ScrollBar::ScrollBar((ScrollBar*)pOVar14);
   *(undefined***)pOVar14 = &PTR__initialize_classv_0012bf00;
   Control::set_v_size_flags(pOVar14, 0);
   postinitialize_handler(pOVar14);
   *(Object**)( this + 0xab0 ) = pOVar14;
   Node::add_child(*(undefined8*)( this + 0xac0 ), pOVar14, 0);
   Control::set_anchors_and_offsets_preset(*(undefined8*)( this + 0xab0 ), 0xc, 0, 0);
   uVar2 = *(undefined8*)( this + 0xab0 );
   uVar18 = Control::get_size();
   fVar21 = (float)( uVar18 ^ __LC69 );
   auVar19._0_8_ = EditorScale::get_scale();
   auVar19._8_8_ = extraout_XMM0_Qb;
   auVar20._4_12_ = auVar19._4_12_;
   auVar20._0_4_ = (float)auVar19._0_8_ * fVar21;
   Control::set_offset(auVar20._0_8_, uVar2, 2);
   plVar17 = *(long**)( this + 0xab0 );
   pcVar1 = *(code**)( *plVar17 + 0x108 );
   create_custom_callable_function_pointer<AnimationNodeStateMachineEditor,double>((AnimationNodeStateMachineEditor*)&local_98, (char*)this, (_func_void_double*)"&AnimationNodeStateMachineEditor::_scroll_changed");
   ( *pcVar1 )(plVar17, SceneStringNames::singleton + 0x280, (CowData<char32_t>*)&local_98);
   Callable::~Callable((Callable*)&local_98);
   pPVar12 = (PanelContainer*)operator_new(0xa08, "");
   PanelContainer::PanelContainer(pPVar12);
   postinitialize_handler((Object*)pPVar12);
   *(PanelContainer**)( this + 0xad0 ) = pPVar12;
   Node::add_child(this, pPVar12, 0, 0);
   pLVar10 = (Label*)operator_new(0xad8, "");
   local_98 = (char*)0x0;
   Label::Label(pLVar10, (String*)&local_98);
   postinitialize_handler((Object*)pLVar10);
   *(Label**)( this + 0xad8 ) = pLVar10;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   Node::add_child(*(undefined8*)( this + 0xad0 ), *(undefined8*)( this + 0xad8 ), 0, 0);
   CanvasItem::hide();
   local_74 = (float)EditorScale::get_scale();
   local_74 = local_74 * __LC108;
   local_78 = 0;
   Control::set_custom_minimum_size((Vector2*)this);
   pPVar15 = (PopupMenu*)operator_new(0xfe0, "");
   PopupMenu::PopupMenu(pPVar15);
   postinitialize_handler((Object*)pPVar15);
   *(PopupMenu**)( this + 0xc88 ) = pPVar15;
   Node::add_child(this, pPVar15, 0, 0);
   plVar17 = *(long**)( this + 0xc88 );
   pcVar1 = *(code**)( *plVar17 + 0x108 );
   create_custom_callable_function_pointer<AnimationNodeStateMachineEditor,int>((AnimationNodeStateMachineEditor*)&local_98, (char*)this, (_func_void_int*)"&AnimationNodeStateMachineEditor::_add_menu_type");
   ( *pcVar1 )(plVar17, SceneStringNames::singleton + 0x240, (CowData<char32_t>*)&local_98, 0);
   Callable::~Callable((Callable*)&local_98);
   plVar17 = *(long**)( this + 0xc88 );
   pcVar1 = *(code**)( *plVar17 + 0x108 );
   create_custom_callable_function_pointer<AnimationNodeStateMachineEditor>((AnimationNodeStateMachineEditor*)&local_98, (char*)this, (_func_void*)"&AnimationNodeStateMachineEditor::_stop_connecting");
   StringName::StringName((StringName*)local_a8, "popup_hide", false);
   ( *pcVar1 )(plVar17, (StrRange*)local_a8, (CowData<char32_t>*)&local_98, 0);
   if (( StringName::configured != '\0' ) && ( local_a8[0] != 0 )) {
      StringName::unref();
   }

   Callable::~Callable((Callable*)&local_98);
   pPVar15 = (PopupMenu*)operator_new(0xfe0, "");
   PopupMenu::PopupMenu(pPVar15);
   postinitialize_handler((Object*)pPVar15);
   *(PopupMenu**)( this + 0xca8 ) = pPVar15;
   Node::set_auto_translate_mode(pPVar15, 2);
   Node::add_child(*(undefined8*)( this + 0xc88 ), *(undefined8*)( this + 0xca8 ), 0, 0);
   plVar17 = *(long**)( this + 0xca8 );
   pcVar1 = *(code**)( *plVar17 + 0x108 );
   create_custom_callable_function_pointer<AnimationNodeStateMachineEditor,int>((AnimationNodeStateMachineEditor*)&local_98, (char*)this, (_func_void_int*)"&AnimationNodeStateMachineEditor::_add_animation_type");
   StringName::StringName((StringName*)local_a8, "index_pressed", false);
   ( *pcVar1 )(plVar17, (StrRange*)local_a8, (CowData<char32_t>*)&local_98, 0);
   if (( StringName::configured != '\0' ) && ( local_a8[0] != 0 )) {
      StringName::unref();
   }

   Callable::~Callable((Callable*)&local_98);
   pPVar15 = (PopupMenu*)operator_new(0xfe0, "");
   PopupMenu::PopupMenu(pPVar15);
   postinitialize_handler((Object*)pPVar15);
   *(PopupMenu**)( this + 0xc90 ) = pPVar15;
   Node::add_child(this, pPVar15, 0, 0);
   plVar17 = *(long**)( this + 0xc90 );
   pcVar1 = *(code**)( *plVar17 + 0x108 );
   create_custom_callable_function_pointer<AnimationNodeStateMachineEditor,int>((AnimationNodeStateMachineEditor*)&local_98, (char*)this, (_func_void_int*)"&AnimationNodeStateMachineEditor::_connect_to");
   ( *pcVar1 )(plVar17, SceneStringNames::singleton + 0x240, (CowData<char32_t>*)&local_98, 0);
   Callable::~Callable((Callable*)&local_98);
   plVar17 = *(long**)( this + 0xc90 );
   pcVar1 = *(code**)( *plVar17 + 0x108 );
   create_custom_callable_function_pointer<AnimationNodeStateMachineEditor>((AnimationNodeStateMachineEditor*)&local_98, (char*)this, (_func_void*)"&AnimationNodeStateMachineEditor::_stop_connecting");
   StringName::StringName((StringName*)local_a8, "popup_hide", false);
   ( *pcVar1 )(plVar17, (StrRange*)local_a8, (CowData<char32_t>*)&local_98, 0);
   if (( StringName::configured != '\0' ) && ( local_a8[0] != 0 )) {
      StringName::unref();
   }

   Callable::~Callable((Callable*)&local_98);
   pPVar15 = (PopupMenu*)operator_new(0xfe0, "");
   PopupMenu::PopupMenu(pPVar15);
   postinitialize_handler((Object*)pPVar15);
   *(PopupMenu**)( this + 0xc98 ) = pPVar15;
   local_a8[0] = 0;
   local_98 = "state_machines";
   local_90 = 0xe;
   String::parse_latin1((StrRange*)local_a8);
   Node::set_name((String*)pPVar15);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_a8);
   plVar17 = *(long**)( this + 0xc98 );
   pcVar1 = *(code**)( *plVar17 + 0x108 );
   create_custom_callable_function_pointer<AnimationNodeStateMachineEditor,int>((AnimationNodeStateMachineEditor*)&local_98, (char*)this, (_func_void_int*)"&AnimationNodeStateMachineEditor::_connect_to");
   ( *pcVar1 )(plVar17, SceneStringNames::singleton + 0x240, (CowData<char32_t>*)&local_98, 0);
   Callable::~Callable((Callable*)&local_98);
   Node::add_child(*(undefined8*)( this + 0xc90 ), *(undefined8*)( this + 0xc98 ), 0, 0);
   pPVar15 = (PopupMenu*)operator_new(0xfe0, "");
   PopupMenu::PopupMenu(pPVar15);
   postinitialize_handler((Object*)pPVar15);
   *(PopupMenu**)( this + 0xca0 ) = pPVar15;
   local_a8[0] = 0;
   local_98 = "end_nodes";
   local_90 = 9;
   String::parse_latin1((StrRange*)local_a8);
   Node::set_name((String*)pPVar15);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_a8);
   plVar17 = *(long**)( this + 0xca0 );
   pcVar1 = *(code**)( *plVar17 + 0x108 );
   create_custom_callable_function_pointer<AnimationNodeStateMachineEditor,int>((AnimationNodeStateMachineEditor*)&local_98, (char*)this, (_func_void_int*)"&AnimationNodeStateMachineEditor::_connect_to");
   ( *pcVar1 )(plVar17, SceneStringNames::singleton + 0x240, (CowData<char32_t>*)&local_98, 0);
   Callable::~Callable((Callable*)&local_98);
   Node::add_child(*(undefined8*)( this + 0xc90 ), *(undefined8*)( this + 0xca0 ), 0, 0);
   this_02 = (Popup*)operator_new(0xd80, "");
   Popup::Popup(this_02);
   postinitialize_handler((Object*)this_02);
   *(Popup**)( this + 0xa38 ) = this_02;
   Node::add_child(this, this_02, 0, 0);
   this_03 = (LineEdit*)operator_new(0xbb0, "");
   local_98 = (char*)0x0;
   LineEdit::LineEdit(this_03, (String*)&local_98);
   postinitialize_handler((Object*)this_03);
   *(LineEdit**)( this + 0xa40 ) = this_03;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   Node::add_child(*(undefined8*)( this + 0xa38 ), *(undefined8*)( this + 0xa40 ), 0, 0);
   Control::set_anchors_and_offsets_preset(*(undefined8*)( this + 0xa40 ), 0xf, 0, 0);
   plVar17 = *(long**)( this + 0xa40 );
   pcVar1 = *(code**)( *plVar17 + 0x108 );
   create_custom_callable_function_pointer<AnimationNodeStateMachineEditor,String_const&>((AnimationNodeStateMachineEditor*)&local_98, (char*)this, (_func_void_String_ptr*)"&AnimationNodeStateMachineEditor::_name_edited");
   ( *pcVar1 )(plVar17, SceneStringNames::singleton + 0x278, (CowData<char32_t>*)&local_98, 0);
   Callable::~Callable((Callable*)&local_98);
   plVar17 = *(long**)( this + 0xa40 );
   pcVar1 = *(code**)( *plVar17 + 0x108 );
   create_custom_callable_function_pointer<AnimationNodeStateMachineEditor>((AnimationNodeStateMachineEditor*)&local_98, (char*)this, (_func_void*)"&AnimationNodeStateMachineEditor::_name_edited_focus_out");
   ( *pcVar1 )(plVar17, SceneStringNames::singleton + 0xe0, (CowData<char32_t>*)&local_98, 0);
   Callable::~Callable((Callable*)&local_98);
   this_04 = (EditorFileDialog*)operator_new(0x1108, "");
   EditorFileDialog::EditorFileDialog(this_04);
   postinitialize_handler((Object*)this_04);
   *(EditorFileDialog**)( this + 0xe30 ) = this_04;
   Node::add_child(this, this_04, 0, 0);
   local_98 = "";
   local_a8[0] = 0;
   pSVar16 = *(String**)( this + 0xe30 );
   local_90 = 0;
   String::parse_latin1((StrRange*)local_a8);
   local_98 = "Open Animation Node";
   local_b0 = 0;
   local_90 = 0x13;
   String::parse_latin1((StrRange*)&local_b0);
   TTR((String*)&local_98, (String*)&local_b0);
   Window::set_title(pSVar16);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_a8);
   EditorFileDialog::set_file_mode(*(undefined8*)( this + 0xe30 ), 0);
   plVar17 = *(long**)( this + 0xe30 );
   pcVar1 = *(code**)( *plVar17 + 0x108 );
   create_custom_callable_function_pointer<AnimationNodeStateMachineEditor,String_const&>((AnimationNodeStateMachineEditor*)&local_98, (char*)this, (_func_void_String_ptr*)"&AnimationNodeStateMachineEditor::_file_opened");
   StringName::StringName((StringName*)local_a8, "file_selected", false);
   ( *pcVar1 )(plVar17, (StrRange*)local_a8, (CowData<char32_t>*)&local_98, 0);
   if (( StringName::configured != '\0' ) && ( local_a8[0] != 0 )) {
      StringName::unref();
   }

   Callable::~Callable((Callable*)&local_98);
   this_05 = (ConfirmationDialog*)operator_new(0xdb8, "");
   ConfirmationDialog::ConfirmationDialog(this_05);
   postinitialize_handler((Object*)this_05);
   *(ConfirmationDialog**)( this + 0xcd8 ) = this_05;
   Window::set_flag(this_05, 0, 1);
   Node::add_child(this, *(undefined8*)( this + 0xcd8 ), 0, 0);
   this_06 = (Tree*)operator_new(0xdc8, "");
   Tree::Tree(this_06);
   postinitialize_handler((Object*)this_06);
   *(Tree**)( this + 0xce0 ) = this_06;
   Node::set_auto_translate_mode(this_06, 2);
   Tree::set_hide_root(SUB81(*(undefined8*)( this + 0xce0 ), 0));
   plVar17 = *(long**)( this + 0xce0 );
   pcVar1 = *(code**)( *plVar17 + 0x108 );
   create_custom_callable_function_pointer<AnimationNodeStateMachineEditor>((AnimationNodeStateMachineEditor*)&local_98, (char*)this, (_func_void*)"&AnimationNodeStateMachineEditor::_delete_tree_draw");
   ( *pcVar1 )(plVar17, SceneStringNames::singleton + 8, (CowData<char32_t>*)&local_98, 0);
   Callable::~Callable((Callable*)&local_98);
   Node::add_child(*(undefined8*)( this + 0xcd8 ), *(undefined8*)( this + 0xce0 ), 0, 0);
   pSVar16 = (String*)ConfirmationDialog::get_cancel_button();
   local_98 = "";
   local_a8[0] = 0;
   local_90 = 0;
   String::parse_latin1((StrRange*)local_a8);
   local_98 = "Delete Selected";
   local_b0 = 0;
   local_90 = 0xf;
   String::parse_latin1((StrRange*)&local_b0);
   TTR((String*)&local_98, (String*)&local_b0);
   Button::set_text(pSVar16);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_a8);
   pcVar1 = *(code**)( *(long*)pSVar16 + 0x108 );
   create_custom_callable_function_pointer<AnimationNodeStateMachineEditor>((AnimationNodeStateMachineEditor*)&local_98, (char*)this, (_func_void*)"&AnimationNodeStateMachineEditor::_delete_selected");
   ( *pcVar1 )(pSVar16, SceneStringNames::singleton + 0x238, (CowData<char32_t>*)&local_98, 0);
   Callable::~Callable((Callable*)&local_98);
   local_98 = "";
   local_a8[0] = 0;
   pSVar16 = *(String**)( this + 0xcd8 );
   local_90 = 0;
   String::parse_latin1((StrRange*)local_a8);
   local_98 = "";
   local_b0 = 0;
   local_90 = 0;
   String::parse_latin1((StrRange*)&local_b0);
   local_98 = "Delete All";
   local_b8 = 0;
   local_90 = 10;
   String::parse_latin1((StrRange*)&local_b8);
   TTR((String*)&local_98, (String*)&local_b8);
   plVar17 = (long*)AcceptDialog::add_button(pSVar16, SUB81((CowData<char32_t>*)&local_98, 0), (String*)0x1);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_a8);
   pcVar1 = *(code**)( *plVar17 + 0x108 );
   create_custom_callable_function_pointer<AnimationNodeStateMachineEditor>((AnimationNodeStateMachineEditor*)&local_98, (char*)this, (_func_void*)"&AnimationNodeStateMachineEditor::_delete_all");
   ( *pcVar1 )(plVar17, SceneStringNames::singleton + 0x238, (CowData<char32_t>*)&local_98, 0);
   Callable::~Callable((Callable*)&local_98);
   if (( ( local_c0 != (ButtonGroup*)0x0 ) && ( cVar5 = RefCounted::unreference() ),cVar5 != '\0' )) &&( cVar5 = cVar5 != '\0' )(**(code**)( *(long*)local_c0 + 0x140 ))(local_c0);
   Memory::free_static(local_c0, false);
}
if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* AnimationNodeStateMachineEditor::_name_edited(String const&) */void AnimationNodeStateMachineEditor::_name_edited(AnimationNodeStateMachineEditor *this, String *param_1) {
   Variant *pVVar1;
   String *pSVar2;
   StringName *pSVar3;
   char cVar4;
   int iVar5;
   Object *pOVar6;
   Variant *pVVar7;
   Variant *pVVar8;
   long in_FS_OFFSET;
   undefined *local_d8;
   undefined8 local_d0;
   long local_c8;
   undefined8 local_c0;
   char *local_b8;
   undefined8 local_b0;
   Variant *local_a8;
   Variant *pVStack_a0;
   int local_88[2];
   undefined1 local_80[16];
   Variant local_70[24];
   undefined8 local_58;
   undefined1 local_50[16];
   long local_40[2];
   local_40[0] = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(long*)param_1 != 0 ) && ( 1 < *(uint*)( *(long*)param_1 + -8 ) )) {
      iVar5 = String::find_char((wchar32)param_1, 0x2e);
      if (iVar5 == -1) {
         iVar5 = String::find_char((wchar32)param_1, 0x2f);
         if (iVar5 == -1) {
            pSVar2 = (String*)( this + 0xdc8 );
            cVar4 = String::operator ==(param_1, pSVar2);
            if (cVar4 == '\0') {
               local_d8 = (undefined*)0x0;
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_d8, (CowData*)param_1);
               LAB_00107481:pSVar3 = *(StringName**)( this + 0xa10 );
               StringName::StringName((StringName*)&local_b8, (String*)&local_d8, false);
               cVar4 = AnimationNodeStateMachine::has_node(pSVar3);
               if (( StringName::configured != '\0' ) && ( local_b8 != (undefined*)0x0 )) {
                  StringName::unref();
               }

               if (cVar4 == '\0') {
                  this[0xc80] = (AnimationNodeStateMachineEditor)0x1;
                  pOVar6 = (Object*)EditorUndoRedoManager::get_singleton();
                  local_c0 = 0;
                  local_b0 = 0;
                  local_b8 = "";
                  String::parse_latin1((StrRange*)&local_c0);
                  local_c8 = 0;
                  local_b8 = "Node Renamed";
                  local_b0 = 0xc;
                  String::parse_latin1((StrRange*)&local_c8);
                  TTR((String*)&local_b8, (String*)&local_c8);
                  EditorUndoRedoManager::create_action(pOVar6, (String*)&local_b8, 0, 0, 0);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
                  local_b8 = (char*)0x0;
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_b8, (CowData*)&local_d8);
                  local_c0 = 0;
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_c0, (CowData*)pSVar2);
                  StringName::StringName((StringName*)&local_c8, "rename_node", false);
                  pSVar3 = *(StringName**)( this + 0xa10 );
                  Variant::Variant((Variant*)local_88, (String*)&local_c0);
                  Variant::Variant(local_70, (String*)&local_b8);
                  local_50 = (undefined1[16])0x0;
                  pVVar8 = (Variant*)local_40;
                  local_58 = 0;
                  local_a8 = (Variant*)local_88;
                  pVStack_a0 = local_70;
                  EditorUndoRedoManager::add_do_methodp(pOVar6, pSVar3, (Variant**)&local_c8, (int)&local_a8);
                  pVVar7 = pVVar8;
                  do {
                     pVVar1 = pVVar7 + -0x18;
                     pVVar7 = pVVar7 + -0x18;
                     if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
                        Variant::_clear_internal();
                     }

                  }
 while ( pVVar7 != (Variant*)local_88 );
                  if (( StringName::configured != '\0' ) && ( local_c8 != 0 )) {
                     StringName::unref();
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
                  local_b8 = (undefined*)0x0;
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_b8, (CowData*)pSVar2);
                  local_c0 = 0;
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_c0, (CowData*)&local_d8);
                  StringName::StringName((StringName*)&local_c8, "rename_node", false);
                  pSVar3 = *(StringName**)( this + 0xa10 );
                  Variant::Variant((Variant*)local_88, (String*)&local_c0);
                  Variant::Variant(local_70, (String*)&local_b8);
                  local_50 = (undefined1[16])0x0;
                  local_58 = 0;
                  local_a8 = (Variant*)local_88;
                  pVStack_a0 = local_70;
                  EditorUndoRedoManager::add_undo_methodp(pOVar6, pSVar3, (Variant**)&local_c8, (int)&local_a8);
                  do {
                     pVVar7 = pVVar8 + -0x18;
                     pVVar8 = pVVar8 + -0x18;
                     if (Variant::needs_deinit[*(int*)pVVar7] != '\0') {
                        Variant::_clear_internal();
                     }

                  }
 while ( pVVar8 != (Variant*)local_88 );
                  if (( StringName::configured != '\0' ) && ( local_c8 != 0 )) {
                     StringName::unref();
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
                  StringName::StringName((StringName*)&local_b8, "_update_graph", false);
                  local_88[0] = 0;
                  local_88[1] = 0;
                  local_80 = (undefined1[16])0x0;
                  EditorUndoRedoManager::add_do_methodp(pOVar6, (StringName*)this, (Variant**)&local_b8, 0);
                  if (Variant::needs_deinit[local_88[0]] != '\0') {
                     Variant::_clear_internal();
                  }

                  if (( StringName::configured != '\0' ) && ( local_b8 != (undefined*)0x0 )) {
                     StringName::unref();
                  }

                  StringName::StringName((StringName*)&local_b8, "_update_graph", false);
                  local_88[0] = 0;
                  local_88[1] = 0;
                  local_80 = (undefined1[16])0x0;
                  EditorUndoRedoManager::add_undo_methodp(pOVar6, (StringName*)this, (Variant**)&local_b8, 0);
                  if (Variant::needs_deinit[local_88[0]] != '\0') {
                     Variant::_clear_internal();
                  }

                  if (( StringName::configured != '\0' ) && ( local_b8 != (undefined*)0x0 )) {
                     StringName::unref();
                  }

                  EditorUndoRedoManager::commit_action(SUB81(pOVar6, 0));
                  Window::hide();
                  this[0xc80] = (AnimationNodeStateMachineEditor)0x0;
                  CanvasItem::queue_redraw();
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
               }
 else {
                  cVar4 = String::operator ==((String*)&local_d8, pSVar2);
                  if (cVar4 == '\0') goto code_r0x001073d5;
                  Window::hide();
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
               }

            }

            if (local_40[0] == *(long*)( in_FS_OFFSET + 0x28 )) {
               return;
            }

            goto LAB_001078f1;
         }

      }

   }

   if (local_40[0] == *(long*)( in_FS_OFFSET + 0x28 )) {
      _err_print_error("_name_edited", "editor/plugins/animation_state_machine_editor.cpp", 0x650, "Condition \"new_name.is_empty() || new_name.contains_char(\'.\') || new_name.contains_char(\'/\')\" is true.", 0, 0);
      return;
   }

   LAB_001078f1:/* WARNING: Subroutine does not return */__stack_chk_fail();
   code_r0x001073d5:itos((long)&local_c0);
   local_b8 = " ";
   local_d0 = 0;
   local_b0 = 1;
   String::parse_latin1((StrRange*)&local_d0);
   String::operator +((String*)&local_c8, param_1);
   String::operator +((String*)&local_b8, (String*)&local_c8);
   if (local_d8 != local_b8) {
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
      local_d8 = local_b8;
      local_b8 = (undefined*)0x0;
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   goto LAB_00107481;
}
/* AnimationNodeStateMachineEditor::_name_edited_focus_out() */void AnimationNodeStateMachineEditor::_name_edited_focus_out(AnimationNodeStateMachineEditor *this) {
   long *plVar1;
   long lVar2;
   long in_FS_OFFSET;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (this[0xc80] == (AnimationNodeStateMachineEditor)0x0) {
      LineEdit::get_text();
      _name_edited(this, (String*)&local_28);
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

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AnimationNodeStateMachineEditor::get_tooltip(Vector2 const&) const */AnimationNodeStateMachineEditor * __thiscall
AnimationNodeStateMachineEditor::get_tooltip(AnimationNodeStateMachineEditor *this,Vector2 *param_1){
   long lVar1;
   char *pcVar2;
   long in_FS_OFFSET;
   CowData<char32_t> *local_90;
   undefined8 local_80;
   undefined8 local_78;
   undefined8 local_70;
   String local_68[8];
   char *local_60;
   char *local_58;
   size_t local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar1 = *(long*)( param_1 + 0xdb8 );
   if (lVar1 == 0) {
      Control::get_tooltip((Vector2*)this);
      goto LAB_00107a4a;
   }

   local_80 = 0;
   if (*(int*)( param_1 + 0xdc0 ) == 0) {
      StringName::StringName((StringName*)&local_60, (StringName*)( param_1 + 0xdb8 ));
      local_70 = 0;
      local_58 = "";
      local_50 = 0;
      String::parse_latin1((StrRange*)&local_70);
      local_58 = "Play/Travel to %s";
      local_50 = 0x11;
      LAB_00107ada:local_90 = (CowData<char32_t>*)&local_70;
      local_78 = 0;
      String::parse_latin1((StrRange*)&local_78);
      TTR(local_68, (String*)&local_78);
      vformat<StringName>((CowData<char32_t>*)&local_58, local_68, &local_60);
      pcVar2 = local_58;
      if (local_58 != (char*)0x0) {
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
         local_58 = (char*)0x0;
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      CowData<char32_t>::_unref(local_90);
      if (( StringName::configured != '\0' ) && ( local_60 != (char*)0x0 )) {
         StringName::unref();
      }

   }
 else {
      if (*(int*)( param_1 + 0xdc0 ) == 1) {
         StringName::StringName((StringName*)&local_60, (StringName*)( param_1 + 0xdb8 ));
         local_70 = 0;
         local_58 = "";
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_70);
         local_58 = "Edit %s";
         local_50 = 7;
         goto LAB_00107ada;
      }

      pcVar2 = *(char**)( lVar1 + 8 );
      local_60 = (char*)0x0;
      if (pcVar2 == (char*)0x0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar1 + 0x10 ));
      }
 else {
         local_50 = strlen(pcVar2);
         local_58 = pcVar2;
         String::parse_latin1((StrRange*)&local_60);
      }

      pcVar2 = local_60;
      if (local_60 != (char*)0x0) {
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
         pcVar2 = local_60;
         local_60 = (char*)0x0;
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   }

   *(char**)this = pcVar2;
   LAB_00107a4a:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* EditorAnimationMultiTransitionEdit::_get_property_list(List<PropertyInfo, DefaultAllocator>*)
   const */void EditorAnimationMultiTransitionEdit::_get_property_list(EditorAnimationMultiTransitionEdit *this, List *param_1) {
   long *plVar1;
   String *this_00;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined *puVar4;
   undefined8 uVar5;
   char *pcVar6;
   char cVar7;
   long lVar8;
   undefined4 *puVar9;
   undefined1(*pauVar10)[16];
   long lVar11;
   long in_FS_OFFSET;
   undefined8 *local_d8;
   long local_d0;
   long local_c8;
   long local_c0;
   undefined *local_b8;
   undefined8 local_b0;
   undefined8 local_a8;
   undefined1 local_a0[16];
   undefined8 local_90;
   long local_88;
   undefined4 local_80;
   char *local_78;
   undefined *local_70;
   long local_68;
   undefined4 local_60;
   undefined8 local_58;
   undefined4 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar8 = *(long*)( this + 0x188 );
   if (lVar8 != 0) {
      lVar11 = 0;
      do {
         if (*(long*)( lVar8 + -8 ) <= lVar11) break;
         local_d8 = (undefined8*)0x0;
         Object::get_property_list(*(List**)( lVar8 + 0x10 + lVar11 * 0x18 ), SUB81((List<PropertyInfo,DefaultAllocator>*)&local_d8, 0));
         local_a0 = (undefined1[16])0x0;
         local_78 = "transition_path";
         local_a8 = 4;
         local_90 = 0;
         local_88 = 0;
         local_80 = 6;
         local_b8 = (undefined*)0x0;
         local_70 = (undefined*)0xf;
         String::parse_latin1((StrRange*)&local_b8);
         local_c8 = 0;
         local_78 = "/";
         local_70 = (undefined*)0x1;
         String::parse_latin1((StrRange*)&local_c8);
         itos((long)&local_d0);
         String::operator +((String*)&local_c0, (String*)&local_d0);
         String::operator +((String*)&local_78, (String*)&local_c0);
         pcVar6 = local_78;
         uVar5 = local_a0._0_8_;
         if ((char*)local_a0._0_8_ == local_78) {
            if ((undefined*)local_a0._0_8_ != (undefined*)0x0) {
               LOCK();
               plVar1 = (long*)( local_a0._0_8_ + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_78 = (undefined*)0x0;
                  Memory::free_static(pcVar6 + -0x10, false);
               }

            }

         }
 else {
            if ((undefined*)local_a0._0_8_ != (undefined*)0x0) {
               LOCK();
               plVar1 = (long*)( local_a0._0_8_ + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  auVar2._8_8_ = 0;
                  auVar2._0_8_ = local_a0._8_8_;
                  local_a0 = auVar2 << 0x40;
                  Memory::free_static((undefined*)( uVar5 + -0x10 ), false);
               }

            }

            local_a0._0_8_ = local_78;
         }

         lVar8 = local_c0;
         if (local_c0 != 0) {
            LOCK();
            plVar1 = (long*)( local_c0 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_c0 = 0;
               Memory::free_static((void*)( lVar8 + -0x10 ), false);
            }

         }

         lVar8 = local_d0;
         if (local_d0 != 0) {
            LOCK();
            plVar1 = (long*)( local_d0 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_d0 = 0;
               Memory::free_static((void*)( lVar8 + -0x10 ), false);
            }

         }

         lVar8 = local_c8;
         if (local_c8 != 0) {
            LOCK();
            plVar1 = (long*)( local_c8 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_c8 = 0;
               Memory::free_static((void*)( lVar8 + -0x10 ), false);
            }

         }

         puVar4 = local_b8;
         if (local_b8 != (undefined*)0x0) {
            LOCK();
            plVar1 = (long*)( local_b8 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_b8 = (undefined*)0x0;
               Memory::free_static(puVar4 + -0x10, false);
            }

         }

         if (*(long*)param_1 == 0) {
            pauVar10 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
            *(undefined1(**) [16])param_1 = pauVar10;
            *(undefined4*)pauVar10[1] = 0;
            *pauVar10 = (undefined1[16])0x0;
         }

         puVar9 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
         *(undefined1(*) [16])( puVar9 + 2 ) = (undefined1[16])0x0;
         *puVar9 = 0;
         puVar9[6] = 0;
         *(undefined8*)( puVar9 + 8 ) = 0;
         puVar9[10] = 6;
         *(undefined8*)( puVar9 + 0x10 ) = 0;
         *(undefined1(*) [16])( puVar9 + 0xc ) = (undefined1[16])0x0;
         *puVar9 = (undefined4)local_a8;
         if (local_a0._0_8_ != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)( puVar9 + 2 ), (CowData*)local_a0);
         }

         StringName::operator =((StringName*)( puVar9 + 4 ), (StringName*)( local_a0 + 8 ));
         puVar9[6] = (undefined4)local_90;
         if (*(long*)( puVar9 + 8 ) != local_88) {
            CowData<char32_t>::_ref((CowData<char32_t>*)( puVar9 + 8 ), (CowData*)&local_88);
         }

         puVar9[10] = local_80;
         plVar1 = *(long**)param_1;
         lVar8 = plVar1[1];
         *(undefined8*)( puVar9 + 0xc ) = 0;
         *(long**)( puVar9 + 0x10 ) = plVar1;
         *(long*)( puVar9 + 0xe ) = lVar8;
         if (lVar8 != 0) {
            *(undefined4**)( lVar8 + 0x30 ) = puVar9;
         }

         plVar1[1] = (long)puVar9;
         if (*plVar1 == 0) {
            *plVar1 = (long)puVar9;
         }

         *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
         if (local_d8 != (undefined8*)0x0) {
            for (puVar9 = (undefined4*)*local_d8; puVar9 != (undefined4*)0x0; puVar9 = *(undefined4**)( puVar9 + 0xc )) {
               this_00 = (String*)( puVar9 + 2 );
               cVar7 = String::operator ==(this_00, "script");
               if (( ( ( cVar7 == '\0' ) && ( cVar7 = String::operator ==(this_00, "resource_name") ),cVar7 == '\0' ) ) && ( cVar7 = String::operator ==(this_00, "resource_path") ),cVar7 == '\0') {
                  local_70 = (undefined*)0x0;
                  local_78 = (char*)CONCAT44(local_78._4_4_, *puVar9);
                  if (*(long*)( puVar9 + 2 ) != 0) {
                     CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)this_00);
                  }

                  StringName::StringName((StringName*)&local_68, (StringName*)( puVar9 + 4 ));
                  local_60 = puVar9[6];
                  local_58 = 0;
                  if (*(long*)( puVar9 + 8 ) != 0) {
                     CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)( puVar9 + 8 ));
                  }

                  local_50 = puVar9[10];
                  local_c8 = 0;
                  local_b0 = 1;
                  local_b8 = &_LC165;
                  String::parse_latin1((StrRange*)&local_c8);
                  itos((long)&local_d0);
                  String::operator +((String*)&local_c0, (String*)&local_d0);
                  String::operator +((String*)&local_b8, (String*)&local_c0);
                  if (local_70 != local_b8) {
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
                     local_70 = local_b8;
                     local_b8 = (undefined*)0x0;
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
                  List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
                  if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
                     StringName::unref();
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
               }

            }

         }

         lVar8 = local_88;
         if (local_88 != 0) {
            LOCK();
            plVar1 = (long*)( local_88 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_88 = 0;
               Memory::free_static((void*)( lVar8 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_a0._8_8_ != 0 )) {
            StringName::unref();
         }

         uVar5 = local_a0._0_8_;
         if (local_a0._0_8_ != 0) {
            LOCK();
            plVar1 = (long*)( local_a0._0_8_ + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               auVar3._8_8_ = 0;
               auVar3._0_8_ = local_a0._8_8_;
               local_a0 = auVar3 << 0x40;
               Memory::free_static((void*)( uVar5 + -0x10 ), false);
            }

         }

         lVar11 = lVar11 + 1;
         List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator>*)&local_d8);
         lVar8 = *(long*)( this + 0x188 );
      }
 while ( lVar8 != 0 );
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AnimationNodeStateMachineEditor::_state_machine_pos_draw_individual(String const&, float) */void AnimationNodeStateMachineEditor::_state_machine_pos_draw_individual(AnimationNodeStateMachineEditor *this, String *param_1, float param_2) {
   bool *pbVar1;
   code *pcVar2;
   char cVar3;
   long lVar4;
   Object *pOVar5;
   long lVar6;
   long lVar7;
   long in_FS_OFFSET;
   float fVar8;
   Object *local_98;
   CowData<char32_t> local_90[8];
   undefined8 local_88;
   String local_80[8];
   char *local_78;
   undefined8 local_70;
   undefined8 local_60;
   undefined8 local_58;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   pbVar1 = *(bool**)( AnimationTreeEditor::singleton + 0xa20 );
   if (pbVar1 != (bool*)0x0) {
      local_88 = 0;
      local_70 = 8;
      local_78 = "playback";
      String::parse_latin1((StrRange*)&local_88);
      AnimationTreeEditor::get_base_path();
      String::operator +(local_80, (String*)local_90);
      StringName::StringName((StringName*)&local_78, local_80, false);
      Object::get((StringName*)&local_58, pbVar1);
      local_98 = (Object*)0x0;
      lVar4 = Variant::get_validated_object();
      if (( lVar4 == 0 ) || ( pOVar5 = (Object*)__dynamic_cast(lVar4, &Object::typeinfo, &AnimationNodeStateMachinePlayback::typeinfo, 0) ),pOVar5 == (Object*)0x0) {
         LAB_001083f6:pOVar5 = (Object*)0x0;
      }
 else {
         local_98 = pOVar5;
         cVar3 = RefCounted::reference();
         if (cVar3 == '\0') {
            local_98 = (Object*)0x0;
            goto LAB_001083f6;
         }

      }

      if (Variant::needs_deinit[(int)(float)local_58] != '\0') {
         Variant::_clear_internal();
      }

      if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)local_80);
      CowData<char32_t>::_unref(local_90);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      if (pOVar5 != (Object*)0x0) {
         cVar3 = AnimationNodeStateMachinePlayback::is_playing();
         if (( ( ( ( cVar3 != '\0' ) && ( cVar3 = operator == ( param_1,(StringName*)( SceneStringNames::singleton + 0x288 ) ) ),cVar3 == '\0' ) ) && ( cVar3 = operator == ( param_1,(StringName*)( SceneStringNames::singleton + 0x290 ) ) ),cVar3 == '\0' )) {
            lVar6 = 0;
            do {
               if (*(long*)( lVar4 + -8 ) <= lVar6) break;
               cVar3 = StringName::operator ==((StringName*)( lVar4 + lVar6 * 0x50 ), param_1);
               if (cVar3 != '\0') {
                  lVar6 = (long)(int)lVar6;
                  lVar4 = *(long*)( this + 0xd88 );
                  if (lVar4 == 0) {
                     lVar7 = 0;
                  }
 else {
                     lVar7 = *(long*)( lVar4 + -8 );
                     if (lVar6 < lVar7) {
                        lVar4 = lVar4 + lVar6 * 0x50;
                        if (*(char*)( lVar4 + 0x48 ) == '\0') {
                           local_58._4_4_ = ( *(float*)( lVar4 + 0x1c ) + *(float*)( lVar4 + 0x24 ) + *(float*)( lVar4 + 0xc ) + *(float*)( lVar4 + 0x14 ) ) * (float)_LC171;
                           local_60 = CONCAT44(local_58._4_4_, *(undefined4*)( lVar4 + 0x18 ));
                           if (*(float*)( lVar4 + 0x40 ) == 0.0) {
                              local_58._0_4_ = *(float*)( lVar4 + 0x28 ) + *(float*)( lVar4 + 0x30 );
                           }
 else {
                              local_58._0_4_ = *(float*)( lVar4 + 0x40 ) + *(float*)( lVar4 + 0x38 );
                           }

                           CanvasItem::draw_line(*(Vector2**)( this + 0xac8 ), (Vector2*)&local_60, (StringName*)&local_58, _LC64, (bool)( (char)this + 'p' ));
                           fVar8 = (float)( (ulong)local_60 >> 0x20 );
                           local_58 = CONCAT44(param_2 * ( local_58._4_4_ - fVar8 ) + fVar8, param_2 * ( (float)local_58 - (float)local_60 ) + (float)local_60);
                           CanvasItem::draw_line(*(Vector2**)( this + 0xac8 ), (Vector2*)&local_60, (StringName*)&local_58, _LC64, (bool)( (char)this + '`' ));
                           Ref<AnimationNodeStateMachinePlayback>::unref((Ref<AnimationNodeStateMachinePlayback>*)&local_98);
                           goto LAB_0010847f;
                        }

                        break;
                     }

                  }

                  _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar6, lVar7, "p_index", "size()", "", false, true);
                  _err_flush_stdout();
                  /* WARNING: Does not return */
                  pcVar2 = (code*)invalidInstructionException();
                  ( *pcVar2 )();
               }

               lVar6 = lVar6 + 1;
               lVar4 = *(long*)( this + 0xd88 );
            }
 while ( lVar4 != 0 );
         }

         cVar3 = RefCounted::unreference();
         if (( cVar3 != '\0' ) && ( cVar3 = cVar3 != '\0' )) {
            ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               Memory::free_static(pOVar5, false);
               return;
            }

            goto LAB_001086f0;
         }

      }

   }

   LAB_0010847f:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_001086f0:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* AnimationNodeStateMachineEditor::_state_machine_pos_draw_all() */void AnimationNodeStateMachineEditor::_state_machine_pos_draw_all(AnimationNodeStateMachineEditor *this) {
   float fVar1;
   bool *pbVar2;
   char cVar3;
   Object *pOVar4;
   long in_FS_OFFSET;
   float fVar5;
   float fVar6;
   CowData<char32_t> local_80[8];
   undefined8 local_78;
   long local_70;
   char *local_68;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   pbVar2 = *(bool**)( AnimationTreeEditor::singleton + 0xa20 );
   if (pbVar2 != (bool*)0x0) {
      local_78 = 0;
      local_60 = 8;
      local_68 = "playback";
      String::parse_latin1((StrRange*)&local_78);
      AnimationTreeEditor::get_base_path();
      String::operator +((String*)&local_70, (String*)local_80);
      StringName::StringName((StringName*)&local_68, (String*)&local_70, false);
      Object::get((StringName*)local_58, pbVar2);
      pOVar4 = (Object*)Variant::get_validated_object();
      if (( ( pOVar4 != (Object*)0x0 ) && ( pOVar4 = (Object*)__dynamic_cast(pOVar4, &Object::typeinfo, &AnimationNodeStateMachinePlayback::typeinfo, 0) ),pOVar4 != (Object*)0x0 )) {
         pOVar4 = (Object*)0x0;
      }

      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      CowData<char32_t>::_unref(local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      if (pOVar4 != (Object*)0x0) {
         cVar3 = AnimationNodeStateMachinePlayback::is_playing();
         if (cVar3 != '\0') {
            fVar6 = *(float*)( this + 0xe0c );
            if ((double)*(float*)( this + 0xe0c ) < _LC173) {
               fVar6 = _LC172;
            }

            fVar1 = *(float*)( this + 0xe08 );
            if (fVar1 < 0.0) {
               fVar5 = 0.0;
            }
 else {
               fVar5 = fVar6;
               if (fVar1 <= fVar6) {
                  fVar5 = fVar1;
               }

            }

            AnimationNodeStateMachinePlayback::get_current_node();
            if (local_70 == 0) {
               local_68 = (char*)0x0;
            }
 else {
               local_68 = (char*)0x0;
               if (*(char**)( local_70 + 8 ) == (char*)0x0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_68, (CowData*)( local_70 + 0x10 ));
               }
 else {
                  String::parse_latin1((String*)&local_68, *(char**)( local_70 + 8 ));
               }

            }

            _state_machine_pos_draw_individual(this, (String*)&local_68, fVar5 / fVar6);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
            if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
               StringName::unref();
            }

            fVar6 = *(float*)( this + 0xe00 );
            if ((double)*(float*)( this + 0xe00 ) < _LC173) {
               fVar6 = _LC172;
            }

            fVar1 = *(float*)( this + 0xdfc );
            if (fVar1 < 0.0) {
               fVar5 = 0.0;
            }
 else {
               fVar5 = fVar6;
               if (fVar1 <= fVar6) {
                  fVar5 = fVar1;
               }

            }

            AnimationNodeStateMachinePlayback::get_fading_from_node();
            if (local_70 == 0) {
               local_68 = (char*)0x0;
            }
 else {
               local_68 = (char*)0x0;
               if (*(char**)( local_70 + 8 ) == (char*)0x0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_68, (CowData*)( local_70 + 0x10 ));
               }
 else {
                  String::parse_latin1((String*)&local_68, *(char**)( local_70 + 8 ));
               }

            }

            _state_machine_pos_draw_individual(this, (String*)&local_68, fVar5 / fVar6);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
            if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
               StringName::unref();
            }

         }

         cVar3 = RefCounted::unreference();
         if (( cVar3 != '\0' ) && ( cVar3 = cVar3 != '\0' )) {
            ( **(code**)( *(long*)pOVar4 + 0x140 ) )(pOVar4);
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               Memory::free_static(pOVar4, false);
               return;
            }

            goto LAB_00108acf;
         }

      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_00108acf:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* AnimationNodeStateMachineEditor::_erase_selected(bool) */void AnimationNodeStateMachineEditor::_erase_selected(AnimationNodeStateMachineEditor *this, bool param_1) {
   Variant *pVVar1;
   StringName *pSVar2;
   StringName *pSVar3;
   code *pcVar4;
   char cVar5;
   int iVar6;
   Object *pOVar7;
   long lVar8;
   int iVar9;
   long lVar10;
   int iVar11;
   long lVar12;
   long lVar13;
   Variant *pVVar14;
   Object *pOVar15;
   long in_FS_OFFSET;
   String *local_258;
   HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>> *local_210;
   undefined8 local_1c0;
   Object *local_1b8;
   Object *local_1b0;
   Object *local_1a8;
   long local_1a0;
   Object *local_198;
   size_t local_190;
   Variant *local_188;
   Variant *pVStack_180;
   Variant *local_178;
   Variant local_168[24];
   Variant local_150[24];
   Variant local_138[24];
   undefined8 local_120;
   undefined1 local_118[16];
   Variant local_108[24];
   Variant local_f0[24];
   Variant local_d8[24];
   undefined8 local_c0;
   undefined1 local_b8[16];
   Variant *local_a8;
   undefined1 auStack_a0[16];
   int local_90[2];
   undefined1 local_88[16];
   undefined8 local_78;
   undefined1 local_70[16];
   undefined8 local_60;
   undefined1 local_58[16];
   Variant local_48[8];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(int*)( this + 0xaac ) != 0) {
      if (!param_1) {
         this[0xc80] = (AnimationNodeStateMachineEditor)0x1;
      }

      pOVar7 = (Object*)EditorUndoRedoManager::get_singleton();
      local_1a0 = 0;
      local_198 = (Object*)&_LC0;
      local_190 = 0;
      String::parse_latin1((StrRange*)&local_1a0);
      local_1a8 = (Object*)0x0;
      local_198 = (Object*)0x11ce7e;
      local_190 = 0xc;
      String::parse_latin1((StrRange*)&local_1a8);
      TTR((String*)&local_198, (String*)&local_1a8);
      EditorUndoRedoManager::create_action(pOVar7, (String*)&local_198, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_198);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_1a8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_1a0);
      lVar8 = *(long*)( this + 0xd88 );
      if (lVar8 != 0) {
         lVar13 = 0;
         do {
            if (*(long*)( lVar8 + -8 ) <= lVar13) break;
            lVar10 = lVar13 * 0x50;
            lVar12 = *(long*)( lVar8 + lVar10 );
            if (( *(long*)( SceneStringNames::singleton + 0x288 ) != lVar12 ) && ( lVar12 != *(long*)( SceneStringNames::singleton + 0x290 ) )) {
               local_198 = (Object*)( (ulong)local_198 & 0xffffffff00000000 );
               cVar5 = HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::_lookup_pos((HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>*)( this + 0xa88 ), (StringName*)( lVar8 + lVar10 ), (uint*)&local_198);
               if (cVar5 != '\0') {
                  lVar8 = *(long*)( this + 0xd88 );
                  if (lVar8 != 0) {
                     lVar12 = *(long*)( lVar8 + -8 );
                     if (lVar12 <= lVar13) goto LAB_00109968;
                     StringName::StringName((StringName*)&local_198, (StringName*)( lVar8 + lVar10 ));
                     StringName::StringName((StringName*)&local_1a0, "remove_node", false);
                     pSVar2 = *(StringName**)( this + 0xa10 );
                     Variant::Variant((Variant*)&local_a8, (StringName*)&local_198);
                     local_90[0] = 0;
                     local_90[1] = 0;
                     local_88 = (undefined1[16])0x0;
                     local_188 = (Variant*)&local_a8;
                     EditorUndoRedoManager::add_do_methodp(pOVar7, pSVar2, (Variant**)&local_1a0, (int)(Vector2*)&local_188);
                     if (Variant::needs_deinit[local_90[0]] != '\0') {
                        Variant::_clear_internal();
                     }

                     if (Variant::needs_deinit[(int)local_a8] != '\0') {
                        Variant::_clear_internal();
                     }

                     if (( StringName::configured != '\0' ) && ( ( ( local_1a0 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_198 != (Object*)0x0 ) ) )) {
                        StringName::unref();
                     }

                     if (*(long*)( this + 0xd88 ) != 0) {
                        lVar12 = *(long*)( *(long*)( this + 0xd88 ) + -8 );
                        if (lVar12 <= lVar13) goto LAB_00109968;
                        pVVar14 = (Variant*)AnimationNodeStateMachine::get_node_position(*(StringName**)( this + 0xa10 ));
                        if (*(long*)( this + 0xd88 ) != 0) {
                           lVar12 = *(long*)( *(long*)( this + 0xd88 ) + -8 );
                           if (lVar12 <= lVar13) goto LAB_00109968;
                           AnimationNodeStateMachine::get_node((StringName*)&local_1a8);
                           lVar8 = *(long*)( this + 0xd88 );
                           if (lVar8 != 0) {
                              lVar12 = *(long*)( lVar8 + -8 );
                              if (lVar12 <= lVar13) goto LAB_00109968;
                              StringName::StringName((StringName*)&local_198, (StringName*)( lVar8 + lVar10 ));
                              StringName::StringName((StringName*)&local_1a0, "add_node", false);
                              pSVar2 = *(StringName**)( this + 0xa10 );
                              local_188 = pVVar14;
                              Variant::Variant(local_168, (StringName*)&local_198);
                              Variant::Variant(local_150, local_1a8);
                              Variant::Variant(local_138, (Vector2*)&local_188);
                              local_120 = 0;
                              local_118 = (undefined1[16])0x0;
                              auStack_a0._8_8_ = local_138;
                              auStack_a0._0_8_ = local_150;
                              iVar9 = (int)(Variant*)&local_a8;
                              local_a8 = local_168;
                              EditorUndoRedoManager::add_undo_methodp(pOVar7, pSVar2, (Variant**)&local_1a0, iVar9);
                              pVVar14 = local_108;
                              do {
                                 pVVar1 = pVVar14 + -0x18;
                                 pVVar14 = pVVar14 + -0x18;
                                 if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
                                    Variant::_clear_internal();
                                 }

                              }
 while ( pVVar14 != local_168 );
                              if (( ( StringName::configured != '\0' ) && ( ( local_1a0 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_198 != (Object*)0x0 )) {
                                 StringName::unref();
                              }

                              Ref<AnimationNode>::unref((Ref<AnimationNode>*)&local_1a8);
                              for (iVar11 = 0; iVar6 = AnimationNodeStateMachine::get_transition_count(),iVar11 < iVar6; iVar11 = iVar11 + 1) {
                                 iVar6 = (int)(StrRange*)&local_1a0;
                                 AnimationNodeStateMachine::get_transition_from(iVar6);
                                 if (local_1a0 == 0) {
                                    local_1c0 = 0;
                                 }
 else {
                                    pOVar15 = *(Object**)( local_1a0 + 8 );
                                    local_1c0 = 0;
                                    if (pOVar15 == (Object*)0x0) {
                                       CowData<char32_t>::_ref((CowData<char32_t>*)&local_1c0, (CowData*)( local_1a0 + 0x10 ));
                                    }
 else {
                                       local_190 = strlen((char*)pOVar15);
                                       local_198 = pOVar15;
                                       String::parse_latin1((StrRange*)&local_1c0);
                                    }

                                    if (( StringName::configured != '\0' ) && ( local_1a0 != 0 )) {
                                       StringName::unref();
                                    }

                                 }

                                 AnimationNodeStateMachine::get_transition_to(iVar6);
                                 if (local_1a0 == 0) {
                                    lVar8 = *(long*)( this + 0xd88 );
                                    local_1b8 = (Object*)0x0;
                                    if (lVar8 != 0) goto LAB_00109747;
                                    LAB_00109960:lVar12 = 0;
                                    goto LAB_00109968;
                                 }

                                 pOVar15 = *(Object**)( local_1a0 + 8 );
                                 local_1b8 = (Object*)0x0;
                                 if (pOVar15 == (Object*)0x0) {
                                    CowData<char32_t>::_ref((CowData<char32_t>*)&local_1b8, (CowData*)( local_1a0 + 0x10 ));
                                 }
 else {
                                    local_190 = strlen((char*)pOVar15);
                                    local_198 = pOVar15;
                                    String::parse_latin1((StrRange*)&local_1b8);
                                 }

                                 if (( StringName::configured != '\0' ) && ( local_1a0 != 0 )) {
                                    StringName::unref();
                                 }

                                 lVar8 = *(long*)( this + 0xd88 );
                                 if (lVar8 == 0) goto LAB_00109960;
                                 LAB_00109747:lVar12 = *(long*)( lVar8 + -8 );
                                 if (lVar12 <= lVar13) goto LAB_00109968;
                                 cVar5 = operator == ( (String*)&local_1c0,(StringName*)( lVar8 + lVar10 ) );
                                 if (cVar5 == '\0') {
                                    lVar8 = *(long*)( this + 0xd88 );
                                    if (lVar8 == 0) goto LAB_00109960;
                                    lVar12 = *(long*)( lVar8 + -8 );
                                    if (lVar12 <= lVar13) goto LAB_00109968;
                                    cVar5 = operator == ( (String*)&local_1b8,(StringName*)( lVar8 + lVar10 ) );
                                    if (cVar5 != '\0') goto LAB_001097bb;
                                 }
 else {
                                    LAB_001097bb:AnimationNodeStateMachine::get_transition((int)&local_1b0);
                                    local_198 = (Object*)0x0;
                                    CowData<char32_t>::_ref((CowData<char32_t>*)&local_198, (CowData*)&local_1b8);
                                    local_1a0 = 0;
                                    CowData<char32_t>::_ref((CowData<char32_t>*)&local_1a0, (CowData*)&local_1c0);
                                    StringName::StringName((StringName*)&local_1a8, "add_transition", false);
                                    pSVar2 = *(StringName**)( this + 0xa10 );
                                    Variant::Variant(local_108, (String*)&local_1a0);
                                    Variant::Variant(local_f0, (String*)&local_198);
                                    Variant::Variant(local_d8, local_1b0);
                                    local_b8 = (undefined1[16])0x0;
                                    auStack_a0._8_8_ = local_d8;
                                    auStack_a0._0_8_ = local_f0;
                                    local_c0 = 0;
                                    local_a8 = local_108;
                                    EditorUndoRedoManager::add_undo_methodp(pOVar7, pSVar2, (Variant**)&local_1a8, iVar9);
                                    pVVar14 = (Variant*)&local_a8;
                                    do {
                                       pVVar1 = pVVar14 + -0x18;
                                       pVVar14 = pVVar14 + -0x18;
                                       if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
                                          Variant::_clear_internal();
                                       }

                                    }
 while ( pVVar14 != local_108 );
                                    if (( StringName::configured != '\0' ) && ( local_1a8 != (Object*)0x0 )) {
                                       StringName::unref();
                                    }

                                    CowData<char32_t>::_unref((CowData<char32_t>*)&local_1a0);
                                    CowData<char32_t>::_unref((CowData<char32_t>*)&local_198);
                                    if (( ( local_1b0 != (Object*)0x0 ) && ( cVar5 = RefCounted::unreference() ),pOVar15 = local_1b0,cVar5 != '\0' )) &&( cVar5 = cVar5 != '\0' )(**(code**)( *(long*)pOVar15 + 0x140 ))(pOVar15);
                                    Memory::free_static(pOVar15, false);
                                 }

                              }

                              CowData<char32_t>::_unref((CowData<char32_t>*)&local_1b8);
                              CowData<char32_t>::_unref((CowData<char32_t>*)&local_1c0);
                           }

                           goto LAB_00108cdb;
                        }

                     }

                  }

               }

               lVar12 = 0;
               LAB_00109968:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar13, lVar12, "p_index", "size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar4 = (code*)invalidInstructionException();
               ( *pcVar4 )();
            }

            LAB_00108cdb:lVar8 = *(long*)( this + 0xd88 );
         }
 while ( lVar8 != 0 );
      }

      local_210 = (HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>*)( this + 0xa88 );
      StringName::StringName((StringName*)&local_198, "_update_graph", false);
      EditorUndoRedoManager::add_do_method<>((EditorUndoRedoManager*)pOVar7, (Object*)this, (StringName*)&local_198);
      if (( StringName::configured != '\0' ) && ( local_198 != (Object*)0x0 )) {
         StringName::unref();
      }

      StringName::StringName((StringName*)&local_198, "_update_graph", false);
      EditorUndoRedoManager::add_undo_method<>((EditorUndoRedoManager*)pOVar7, (Object*)this, (StringName*)&local_198);
      if (( StringName::configured != '\0' ) && ( local_198 != (Object*)0x0 )) {
         StringName::unref();
      }

      EditorUndoRedoManager::commit_action(SUB81(pOVar7, 0));
      if (!param_1) {
         this[0xc80] = (AnimationNodeStateMachineEditor)0x0;
      }

      HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::clear(local_210);
   }

   local_1a0 = 0;
   if (( *(long*)( this + 0xda8 ) == 0 ) || ( local_198 = (Object*)0x0 * (long*)( this + 0xda0 ) == 0 )) goto LAB_00109328;
   pSVar2 = (StringName*)( this + 0xda0 );
   cVar5 = AnimationNodeStateMachine::has_transition(*(StringName**)( this + 0xa10 ), pSVar2);
   if (cVar5 == '\0') {
      if (( StringName::configured != '\0' ) && ( ( ( local_198 == (Object*)0x0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_1a0 != 0 ) ) )) {
         StringName::unref();
      }

      goto LAB_00109328;
   }

   if (StringName::configured != '\0') {
      if (local_198 == (Object*)0x0) {
         if (local_1a0 != 0) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         if (( StringName::configured != '\0' ) && ( local_1a0 != 0 )) {
            StringName::unref();
         }

      }

   }

   local_258 = (String*)&local_198;
   AnimationNodeStateMachine::find_transition(*(StringName**)( this + 0xa10 ), pSVar2);
   AnimationNodeStateMachine::get_transition((int)(Ref<AnimationNodeStateMachineTransition>*)&local_1b8);
   if (!param_1) {
      this[0xc80] = (AnimationNodeStateMachineEditor)0x1;
   }

   pOVar7 = (Object*)EditorUndoRedoManager::get_singleton();
   local_1a0 = 0;
   String::parse_latin1((String*)&local_1a0, "");
   local_1a8 = (Object*)0x0;
   String::parse_latin1((String*)&local_1a8, "Transition Removed");
   TTR(local_258, (String*)&local_1a8);
   EditorUndoRedoManager::create_action(pOVar7, local_258, 0, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_258);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1a0);
   StringName::StringName((StringName*)local_258, (StringName*)( this + 0xda8 ));
   StringName::StringName((StringName*)&local_1a0, pSVar2);
   StringName::StringName((StringName*)&local_1a8, "remove_transition", false);
   pSVar3 = *(StringName**)( this + 0xa10 );
   Variant::Variant((Variant*)&local_a8, (StringName*)&local_1a0);
   Variant::Variant((Variant*)local_90, (StringName*)local_258);
   local_70 = (undefined1[16])0x0;
   local_78 = 0;
   pVVar14 = (Variant*)&local_60;
   local_188 = (Variant*)&local_a8;
   pVStack_180 = (Variant*)local_90;
   EditorUndoRedoManager::add_do_methodp(pOVar7, pSVar3, (Variant**)&local_1a8, (int)&local_188);
   do {
      pVVar1 = pVVar14 + -0x18;
      pVVar14 = pVVar14 + -0x18;
      if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
         Variant::_clear_internal();
      }

   }
 while ( pVVar14 != (Variant*)&local_a8 );
   if (( ( ( StringName::configured != '\0' ) && ( ( local_1a8 == (Object*)0x0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_1a0 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_198 != (Object*)0x0 )) {
      StringName::unref();
   }

   pOVar15 = local_1b8;
   if (local_1b8 == (Object*)0x0) {
      LAB_00109089:local_198 = (Object*)0x0;
      pOVar15 = (Object*)0x0;
   }
 else {
      local_198 = local_1b8;
      cVar5 = RefCounted::reference();
      if (cVar5 == '\0') goto LAB_00109089;
   }

   StringName::StringName((StringName*)&local_1a0, (StringName*)( this + 0xda8 ));
   StringName::StringName((StringName*)&local_1a8, pSVar2);
   StringName::StringName((StringName*)&local_1b0, "add_transition", false);
   pSVar2 = *(StringName**)( this + 0xa10 );
   Variant::Variant((Variant*)&local_a8, (StringName*)&local_1a8);
   Variant::Variant((Variant*)local_90, (StringName*)&local_1a0);
   Variant::Variant((Variant*)&local_78, pOVar15);
   local_58 = (undefined1[16])0x0;
   local_60 = 0;
   local_188 = (Variant*)&local_a8;
   pVStack_180 = (Variant*)local_90;
   local_178 = (Variant*)&local_78;
   EditorUndoRedoManager::add_undo_methodp(pOVar7, pSVar2, (Variant**)&local_1b0, (int)&local_188);
   pVVar14 = local_48;
   do {
      pVVar1 = pVVar14 + -0x18;
      pVVar14 = pVVar14 + -0x18;
      if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
         Variant::_clear_internal();
      }

   }
 while ( pVVar14 != (Variant*)&local_a8 );
   if (( ( StringName::configured != '\0' ) && ( ( local_1b0 == (Object*)0x0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( ( local_1a8 == (Object*)0x0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_1a0 != 0 ) ) )) {
      StringName::unref();
   }

   Ref<AnimationNodeStateMachineTransition>::unref((Ref<AnimationNodeStateMachineTransition>*)local_258);
   StringName::StringName((StringName*)local_258, "_update_graph", false);
   local_a8 = (Variant*)0x0;
   auStack_a0 = (undefined1[16])0x0;
   EditorUndoRedoManager::add_do_methodp(pOVar7, (StringName*)this, (Variant**)local_258, 0);
   if (Variant::needs_deinit[(int)local_a8] != '\0') {
      Variant::_clear_internal();
   }

   if (( StringName::configured != '\0' ) && ( local_198 != (Object*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)local_258, "_update_graph", false);
   local_a8 = (Variant*)0x0;
   auStack_a0 = (undefined1[16])0x0;
   EditorUndoRedoManager::add_undo_methodp(pOVar7, (StringName*)this, (Variant**)local_258, 0);
   if (Variant::needs_deinit[(int)local_a8] != '\0') {
      Variant::_clear_internal();
   }

   if (( StringName::configured != '\0' ) && ( local_198 != (Object*)0x0 )) {
      StringName::unref();
   }

   EditorUndoRedoManager::commit_action(SUB81(pOVar7, 0));
   if (!param_1) {
      this[0xc80] = (AnimationNodeStateMachineEditor)0x0;
   }

   if (*(long*)( this + 0xda0 ) != 0) {
      StringName::unref();
      *(undefined8*)( this + 0xda0 ) = 0;
   }

   if (*(long*)( this + 0xda8 ) != 0) {
      StringName::unref();
      *(undefined8*)( this + 0xda8 ) = 0;
   }

   *(undefined4*)( this + 0xdb0 ) = 0xffffffff;
   Ref<AnimationNodeStateMachineTransition>::unref((Ref<AnimationNodeStateMachineTransition>*)&local_1b8);
   LAB_00109328:CanvasItem::queue_redraw();
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* AnimationNodeStateMachineEditor::_delete_all() */void AnimationNodeStateMachineEditor::_delete_all(AnimationNodeStateMachineEditor *this) {
   long *plVar1;
   long lVar2;
   undefined8 uVar3;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this[0xc80] = (AnimationNodeStateMachineEditor)0x1;
   uVar3 = EditorUndoRedoManager::get_singleton();
   local_40 = 0;
   local_30 = 0x15;
   local_38 = "Transition(s) Removed";
   String::parse_latin1((StrRange*)&local_40);
   EditorUndoRedoManager::create_action(uVar3, (StrRange*)&local_40, 0, 0, 0);
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

   _erase_selected(this, true);
   EditorUndoRedoManager::commit_action(SUB81(uVar3, 0));
   this[0xc80] = (AnimationNodeStateMachineEditor)0x0;
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      Window::hide();
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AnimationNodeStateMachineEditor::_add_transition(bool) */void AnimationNodeStateMachineEditor::_add_transition(AnimationNodeStateMachineEditor *this, bool param_1) {
   Variant *pVVar1;
   StringName *pSVar2;
   StringName *pSVar3;
   StringName *pSVar4;
   char cVar5;
   byte bVar6;
   undefined4 uVar7;
   AnimationNodeStateMachineTransition *this_00;
   Object *pOVar8;
   bool bVar9;
   String *pSVar10;
   Variant *pVVar11;
   long in_FS_OFFSET;
   AnimationNodeStateMachineTransition *local_f0;
   long local_e8;
   long local_e0;
   AnimationNodeStateMachineTransition *local_d8;
   String *local_d0;
   Variant *local_c8;
   Variant *pVStack_c0;
   Variant *local_b8;
   int local_a8[2];
   undefined1 local_a0[16];
   Variant local_90[24];
   undefined8 local_78;
   undefined1 local_70[16];
   undefined8 local_60;
   undefined1 local_58[16];
   Variant local_48[8];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(long*)( this + 0xd68 ) != 0 ) && ( *(long*)( this + 0xd78 ) != 0 )) {
      pSVar2 = (StringName*)( this + 0xd68 );
      pSVar3 = (StringName*)( this + 0xd78 );
      cVar5 = AnimationNodeStateMachine::has_transition(*(StringName**)( this + 0xa10 ), pSVar2);
      pSVar10 = EditorNode::singleton;
      if (cVar5 != '\0') {
         local_d0 = (String*)0x0;
         String::parse_latin1((String*)&local_d0, "");
         local_d8 = (AnimationNodeStateMachineTransition*)0x0;
         String::parse_latin1((String*)&local_d8, "Warning!");
         TTR((String*)&local_e0, (String*)&local_d8);
         local_e8 = 0;
         String::parse_latin1((String*)&local_e8, "Transition exists!");
         EditorNode::show_warning(pSVar10, (String*)&local_e8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
         this[0xd60] = (AnimationNodeStateMachineEditor)0x0;
         goto LAB_0010a224;
      }

      local_f0 = (AnimationNodeStateMachineTransition*)0x0;
      this_00 = (AnimationNodeStateMachineTransition*)operator_new(0x280, "");
      AnimationNodeStateMachineTransition::AnimationNodeStateMachineTransition(this_00);
      postinitialize_handler((Object*)this_00);
      local_d0 = (String*)0x0;
      local_d8 = this_00;
      cVar5 = RefCounted::init_ref();
      if (cVar5 == '\0') {
         this_00 = (AnimationNodeStateMachineTransition*)0x0;
         local_d8 = (AnimationNodeStateMachineTransition*)0x0;
         Ref<AnimationNodeStateMachineTransition>::unref((Ref<AnimationNodeStateMachineTransition>*)&local_d0);
      }
 else {
         Ref<AnimationNodeStateMachineTransition>::unref((Ref<AnimationNodeStateMachineTransition>*)&local_d0);
         local_d0 = (String*)0x0;
         local_f0 = this_00;
         cVar5 = RefCounted::reference();
         if (cVar5 == '\0') {
            local_f0 = (AnimationNodeStateMachineTransition*)0x0;
            this_00 = (AnimationNodeStateMachineTransition*)0x0;
         }

         Ref<AnimationNodeStateMachineTransition>::unref((Ref<AnimationNodeStateMachineTransition>*)&local_d0);
      }

      Ref<AnimationNodeStateMachineTransition>::unref((Ref<AnimationNodeStateMachineTransition>*)&local_d8);
      bVar6 = BaseButton::is_pressed();
      AnimationNodeStateMachineTransition::set_advance_mode(this_00, bVar6 + 1);
      uVar7 = OptionButton::get_selected();
      AnimationNodeStateMachineTransition::set_switch_mode(this_00, uVar7);
      pOVar8 = (Object*)EditorUndoRedoManager::get_singleton();
      if (!param_1) {
         this[0xc80] = (AnimationNodeStateMachineEditor)0x1;
         local_d8 = (AnimationNodeStateMachineTransition*)0x0;
         String::parse_latin1((String*)&local_d8, "");
         local_e0 = 0;
         String::parse_latin1((String*)&local_e0, "Add Transition");
         TTR((String*)&local_d0, (String*)&local_e0);
         EditorUndoRedoManager::create_action(pOVar8, (Ref<AnimationNodeStateMachineTransition>*)&local_d0, 0, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
      }

      local_d0 = (String*)this_00;
      cVar5 = RefCounted::reference();
      pSVar10 = (String*)this_00;
      if (cVar5 == '\0') {
         local_d0 = (String*)0x0;
         pSVar10 = (String*)0x0;
      }

      StringName::StringName((StringName*)&local_d8, pSVar3);
      StringName::StringName((StringName*)&local_e0, pSVar2);
      StringName::StringName((StringName*)&local_e8, "add_transition", false);
      pSVar4 = *(StringName**)( this + 0xa10 );
      Variant::Variant((Variant*)local_a8, (StringName*)&local_e0);
      Variant::Variant(local_90, (StringName*)&local_d8);
      Variant::Variant((Variant*)&local_78, (Object*)pSVar10);
      local_58 = (undefined1[16])0x0;
      pVVar11 = local_48;
      local_60 = 0;
      local_c8 = (Variant*)local_a8;
      pVStack_c0 = local_90;
      local_b8 = (Variant*)&local_78;
      EditorUndoRedoManager::add_do_methodp(pOVar8, pSVar4, (Variant**)&local_e8, (int)&local_c8);
      do {
         pVVar1 = pVVar11 + -0x18;
         pVVar11 = pVVar11 + -0x18;
         if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
            Variant::_clear_internal();
         }

      }
 while ( pVVar11 != (Variant*)local_a8 );
      if (StringName::configured != '\0') {
         if (local_e8 != 0) {
            StringName::unref();
            if (StringName::configured == '\0') goto LAB_00109f99;
         }

         if (local_e0 != 0) {
            StringName::unref();
            if (StringName::configured == '\0') goto LAB_00109f99;
         }

         if (local_d8 != (AnimationNodeStateMachineTransition*)0x0) {
            StringName::unref();
         }

      }

      LAB_00109f99:Ref<AnimationNodeStateMachineTransition>::unref((Ref<AnimationNodeStateMachineTransition>*)&local_d0);
      StringName::StringName((StringName*)&local_d0, pSVar3);
      StringName::StringName((StringName*)&local_d8, pSVar2);
      StringName::StringName((StringName*)&local_e0, "remove_transition", false);
      pSVar4 = *(StringName**)( this + 0xa10 );
      Variant::Variant((Variant*)local_a8, (StringName*)&local_d8);
      Variant::Variant(local_90, (StringName*)&local_d0);
      local_70 = (undefined1[16])0x0;
      local_78 = 0;
      pVVar11 = (Variant*)&local_60;
      local_c8 = (Variant*)local_a8;
      pVStack_c0 = local_90;
      EditorUndoRedoManager::add_undo_methodp(pOVar8, pSVar4, (Variant**)&local_e0, (int)&local_c8);
      do {
         pVVar1 = pVVar11 + -0x18;
         pVVar11 = pVVar11 + -0x18;
         if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
            Variant::_clear_internal();
         }

      }
 while ( pVVar11 != (Variant*)local_a8 );
      if (StringName::configured != '\0') {
         if (local_e0 != 0) {
            StringName::unref();
            if (StringName::configured == '\0') goto LAB_0010a0a4;
         }

         if (local_d8 != (AnimationNodeStateMachineTransition*)0x0) {
            StringName::unref();
            if (StringName::configured == '\0') goto LAB_0010a0a4;
         }

         if (local_d0 != (String*)0x0) {
            StringName::unref();
         }

      }

      LAB_0010a0a4:StringName::StringName((StringName*)&local_d0, "_update_graph", false);
      local_a8[0] = 0;
      local_a8[1] = 0;
      local_a0 = (undefined1[16])0x0;
      EditorUndoRedoManager::add_do_methodp(pOVar8, (StringName*)this, (Variant**)&local_d0, 0);
      if (Variant::needs_deinit[local_a8[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (( StringName::configured != '\0' ) && ( local_d0 != (String*)0x0 )) {
         StringName::unref();
      }

      StringName::StringName((StringName*)&local_d0, "_update_graph", false);
      local_a8[0] = 0;
      local_a8[1] = 0;
      local_a0 = (undefined1[16])0x0;
      EditorUndoRedoManager::add_undo_methodp(pOVar8, (StringName*)this, (Variant**)&local_d0, 0);
      if (Variant::needs_deinit[local_a8[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (( StringName::configured != '\0' ) && ( local_d0 != (String*)0x0 )) {
         StringName::unref();
      }

      if (!param_1) {
         EditorUndoRedoManager::commit_action(SUB81(pOVar8, 0));
         this[0xc80] = (AnimationNodeStateMachineEditor)0x0;
      }

      StringName::operator =((StringName*)( this + 0xda0 ), pSVar2);
      StringName::operator =((StringName*)( this + 0xda8 ), pSVar3);
      if (*(long*)( this + 0xd98 ) == 0) {
         uVar7 = 0;
      }
 else {
         uVar7 = *(undefined4*)( *(long*)( this + 0xd98 ) + -8 );
      }

      *(undefined4*)( this + 0xdb0 ) = uVar7;
      cVar5 = AnimationNodeStateMachine::is_transition_across_group((int)*(undefined8*)( this + 0xa10 ));
      pOVar8 = (Object*)EditorNode::singleton;
      local_d0 = (String*)0x0;
      bVar9 = SUB81((Ref<AnimationNodeStateMachineTransition>*)&local_d0, 0);
      if (cVar5 == '\0') {
         String::parse_latin1((String*)&local_d0, "");
         EditorNode::push_item(pOVar8, (String*)this_00, bVar9);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
      }
 else {
         String::parse_latin1((String*)&local_d0, "");
         EditorNode::push_item(pOVar8, (String*)this_00, bVar9);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
         pOVar8 = (Object*)EditorNode::singleton;
         local_d0 = (String*)0x0;
         String::parse_latin1((String*)&local_d0, "");
         EditorNode::push_item(pOVar8, (String*)0x0, bVar9);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
      }

      _update_mode(this);
      Ref<AnimationNodeStateMachineTransition>::unref((Ref<AnimationNodeStateMachineTransition>*)&local_f0);
   }

   this[0xd60] = (AnimationNodeStateMachineEditor)0x0;
   LAB_0010a224:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AnimationNodeStateMachineEditor::_add_animation_type(int) */void AnimationNodeStateMachineEditor::_add_animation_type(AnimationNodeStateMachineEditor *this, int param_1) {
   long *plVar1;
   Variant *pVVar2;
   long lVar3;
   StringName *pSVar4;
   code *pcVar5;
   char *pcVar6;
   char cVar7;
   AnimationNodeAnimation *this_00;
   Object *pOVar8;
   Object *pOVar9;
   Variant *pVVar10;
   long lVar11;
   long lVar12;
   long in_FS_OFFSET;
   StringName *local_140;
   long local_110;
   undefined *local_108;
   undefined8 local_100;
   long local_f8;
   long local_f0;
   char *local_e8;
   undefined8 local_e0;
   undefined8 local_d0;
   Variant *local_c8;
   Variant *pVStack_c0;
   Variant *local_b8;
   int local_a8[6];
   int local_90[2];
   undefined1 local_88[16];
   Variant local_78[24];
   undefined8 local_60;
   undefined1 local_58[16];
   Variant local_48[8];
   long local_40;
   lVar11 = (long)param_1;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   this_00 = (AnimationNodeAnimation*)operator_new(0x3e0, "");
   AnimationNodeAnimation::AnimationNodeAnimation(this_00);
   postinitialize_handler((Object*)this_00);
   cVar7 = RefCounted::init_ref();
   local_140 = (StringName*)0x0;
   if (cVar7 != '\0') {
      cVar7 = RefCounted::reference();
      local_140 = (StringName*)(AnimationNodeAnimation*)0x0;
      if (cVar7 != '\0') {
         local_140 = (StringName*)this_00;
      }

      cVar7 = RefCounted::unreference();
      if (( cVar7 != '\0' ) && ( cVar7 = predelete_handler((Object*)this_00) ),cVar7 != '\0') {
         ( **(code**)( *(long*)this_00 + 0x140 ) )(this_00);
         Memory::free_static(this_00, false);
      }

   }

   lVar3 = *(long*)( this + 0xcb8 );
   if (lVar11 < 0) {
      if (lVar3 != 0) {
         lVar12 = *(long*)( lVar3 + -8 );
         goto LAB_0010aacd;
      }

   }
 else if (lVar3 != 0) {
      lVar12 = *(long*)( lVar3 + -8 );
      if (lVar12 <= lVar11) goto LAB_0010aacd;
      StringName::StringName((StringName*)&local_e8, (String*)( lVar3 + lVar11 * 8 ), false);
      AnimationNodeAnimation::set_animation(local_140);
      if (( StringName::configured != '\0' ) && ( local_e8 != (undefined*)0x0 )) {
         StringName::unref();
      }

      if (*(long*)( this + 0xcb8 ) != 0) {
         lVar12 = *(long*)( *(long*)( this + 0xcb8 ) + -8 );
         if (lVar11 < lVar12) {
            String::validate_node_name();
            local_108 = (undefined*)0x0;
            if (local_110 != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_108, (CowData*)&local_110);
            }

            while (true) {
               pSVar4 = *(StringName**)( this + 0xa10 );
               StringName::StringName((StringName*)&local_e8, (String*)&local_108, false);
               cVar7 = AnimationNodeStateMachine::has_node(pSVar4);
               if (( StringName::configured != '\0' ) && ( local_e8 != (undefined*)0x0 )) {
                  StringName::unref();
               }

               if (cVar7 == '\0') break;
               itos((long)&local_f0);
               local_e8 = " ";
               local_100 = 0;
               local_e0 = 1;
               String::parse_latin1((StrRange*)&local_100);
               String::operator +((String*)&local_f8, (String*)&local_110);
               String::operator +((String*)&local_e8, (String*)&local_f8);
               pcVar6 = local_e8;
               if (local_108 == local_e8) {
                  if (local_e8 != (undefined*)0x0) {
                     LOCK();
                     plVar1 = (long*)( local_e8 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        local_e8 = (undefined*)0x0;
                        Memory::free_static(pcVar6 + -0x10, false);
                     }

                  }

               }
 else {
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
                  local_108 = local_e8;
               }

               lVar11 = local_f8;
               if (local_f8 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_f8 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_f8 = 0;
                     Memory::free_static((void*)( lVar11 + -0x10 ), false);
                  }

               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
               lVar11 = local_f0;
               if (local_f0 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_f0 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_f0 = 0;
                     Memory::free_static((void*)( lVar11 + -0x10 ), false);
                  }

               }

            }
;
            this[0xc80] = (AnimationNodeStateMachineEditor)0x1;
            pOVar8 = (Object*)EditorUndoRedoManager::get_singleton();
            local_f0 = 0;
            local_e8 = "";
            local_e0 = 0;
            String::parse_latin1((StrRange*)&local_f0);
            local_e8 = "Add Node and Transition";
            local_f8 = 0;
            local_e0 = 0x17;
            String::parse_latin1((StrRange*)&local_f8);
            TTR((String*)&local_e8, (String*)&local_f8);
            EditorUndoRedoManager::create_action(pOVar8, (StringName*)&local_e8, 0, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_f0);
            cVar7 = RefCounted::reference();
            local_e8 = (char*)0x0;
            pOVar9 = (Object*)0x0;
            if (cVar7 != '\0') {
               pOVar9 = (Object*)local_140;
            }

            if (local_108 != (undefined*)0x0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_e8, (CowData*)&local_108);
            }

            StringName::StringName((StringName*)&local_f0, "add_node", false);
            pSVar4 = *(StringName**)( this + 0xa10 );
            local_d0 = *(undefined8*)( this + 0xcd0 );
            Variant::Variant((Variant*)local_a8, (String*)&local_e8);
            Variant::Variant((Variant*)local_90, pOVar9);
            Variant::Variant(local_78, (Vector2*)&local_d0);
            local_58 = (undefined1[16])0x0;
            local_60 = 0;
            local_c8 = (Variant*)local_a8;
            pVStack_c0 = (Variant*)local_90;
            local_b8 = local_78;
            EditorUndoRedoManager::add_do_methodp(pOVar8, pSVar4, (Variant**)&local_f0, (int)&local_c8);
            pVVar10 = local_48;
            do {
               pVVar2 = pVVar10 + -0x18;
               pVVar10 = pVVar10 + -0x18;
               if (Variant::needs_deinit[*(int*)pVVar2] != '\0') {
                  Variant::_clear_internal();
               }

            }
 while ( pVVar10 != (Variant*)local_a8 );
            if (( StringName::configured != '\0' ) && ( local_f0 != 0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
            if (( ( pOVar9 != (Object*)0x0 ) && ( cVar7 = RefCounted::unreference() ),cVar7 != '\0' )) &&( cVar7 = cVar7 != '\0' )(**(code**)( *(long*)pOVar9 + 0x140 ))(pOVar9);
            Memory::free_static(pOVar9, false);
         }

         local_e8 = (char*)0x0;
         if (local_108 != (undefined*)0x0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_e8, (CowData*)&local_108);
         }

         StringName::StringName((StringName*)&local_f0, "remove_node", false);
         pSVar4 = *(StringName**)( this + 0xa10 );
         Variant::Variant((Variant*)local_a8, (String*)&local_e8);
         local_90[0] = 0;
         local_90[1] = 0;
         local_88 = (undefined1[16])0x0;
         local_c8 = (Variant*)local_a8;
         EditorUndoRedoManager::add_undo_methodp(pOVar8, pSVar4, (Variant**)&local_f0, (int)&local_c8);
         if (Variant::needs_deinit[local_90[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_a8[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (( StringName::configured != '\0' ) && ( local_f0 != 0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
         StringName::StringName((StringName*)&local_e8, (String*)&local_108, false);
         if ((char*)*(long*)( this + 0xd78 ) == local_e8) {
            if (( StringName::configured != '\0' ) && ( local_e8 != (char*)0x0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            *(char**)( this + 0xd78 ) = local_e8;
         }

         _add_transition(this, true);
         EditorUndoRedoManager::commit_action(SUB81(pOVar8, 0));
         this[0xc80] = (AnimationNodeStateMachineEditor)0x0;
         CanvasItem::queue_redraw();
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
         cVar7 = RefCounted::unreference();
         if (( cVar7 == '\0' ) || ( cVar7 = predelete_handler((Object*)local_140) ),cVar7 == '\0') {
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               return;
            }

         }
 else {
            ( **(code**)( *(long*)local_140 + 0x140 ) )(local_140);
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               Memory::free_static(local_140, false);
               return;
            }

         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      goto LAB_0010aacd;
   }

}
lVar12 = 0;LAB_0010aacd:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar11, lVar12, "p_index", "size()", "", false, true);_err_flush_stdout();/* WARNING: Does not return */pcVar5 = (code*)invalidInstructionException();( *pcVar5 )();}/* AnimationNodeStateMachineEditor::_connect_to(int) */void AnimationNodeStateMachineEditor::_connect_to(AnimationNodeStateMachineEditor *this, int param_1) {
   long lVar1;
   code *pcVar2;
   long lVar3;
   long lVar4;
   long in_FS_OFFSET;
   long local_28;
   long local_20;
   lVar3 = (long)param_1;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar1 = *(long*)( this + 0xcc8 );
   if (lVar3 < 0) {
      if (lVar1 != 0) {
         lVar4 = *(long*)( lVar1 + -8 );
         goto LAB_0010acf9;
      }

   }
 else if (lVar1 != 0) {
      lVar4 = *(long*)( lVar1 + -8 );
      if (lVar3 < lVar4) {
         StringName::StringName((StringName*)&local_28, (String*)( lVar1 + lVar3 * 8 ), false);
         if (*(long*)( this + 0xd78 ) == local_28) {
            if (( StringName::configured != '\0' ) && ( local_28 != 0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            *(long*)( this + 0xd78 ) = local_28;
         }

         if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
            _add_transition(this, false);
            return;
         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      goto LAB_0010acf9;
   }

   lVar4 = 0;
   LAB_0010acf9:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar3, lVar4, "p_index", "size()", "", false, true);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar2 = (code*)invalidInstructionException();
   ( *pcVar2 )();
}
/* AnimationNodeStateMachineEditor::_add_menu_type(int) */void AnimationNodeStateMachineEditor::_add_menu_type(AnimationNodeStateMachineEditor *this, int param_1) {
   Variant *pVVar1;
   StringName *pSVar2;
   String *pSVar3;
   char cVar4;
   long lVar5;
   Object *pOVar6;
   Object *pOVar7;
   Variant *pVVar8;
   long in_FS_OFFSET;
   String *local_150;
   CowData<char32_t> *local_148;
   Object *local_138;
   String *local_130;
   undefined *local_118;
   undefined8 local_110;
   undefined *local_108;
   undefined8 local_100;
   long *local_f8;
   long local_f0;
   char *local_e8;
   undefined8 local_e0;
   undefined8 local_d0;
   Variant *local_c8;
   Variant *pVStack_c0;
   Variant *local_b8;
   int local_a8[6];
   int local_90[2];
   undefined1 local_88[16];
   Variant local_78[24];
   undefined8 local_60;
   undefined1 local_58[16];
   Variant local_48[8];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_118 = (undefined*)0x0;
   if (param_1 == 1000) {
      EditorFileDialog::clear_filters();
      local_f8 = (long*)0x0;
      local_e8 = (undefined*)0x0;
      String::parse_latin1((String*)&local_e8, "AnimationRootNode");
      ResourceLoader::get_recognized_extensions_for_type((String*)&local_e8, (List*)&local_f8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
      if (( local_f8 != (long*)0x0 ) && ( lVar5 = lVar5 != 0 )) {
         do {
            pSVar3 = *(String**)( this + 0xe30 );
            local_f0 = 0;
            local_e8 = "";
            local_e0 = 0;
            String::parse_latin1((StrRange*)&local_f0);
            operator+((char *)&
            local_e8,(String*)&_LC186;
            EditorFileDialog::add_filter(pSVar3, (String*)&local_e8);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_f0);
            lVar5 = *(long*)( lVar5 + 8 );
         }
 while ( lVar5 != 0 );
      }

      EditorFileDialog::popup_file_dialog();
      List<String,DefaultAllocator>::~List((List<String,DefaultAllocator>*)&local_f8);
      goto LAB_0010b436;
   }

   if (param_1 != 0x3ea) {
      if (param_1 != 0x3e9) {
         PopupMenu::get_item_metadata((int)local_a8);
         Variant::operator_cast_to_String((Variant*)&local_f8);
         if (Variant::needs_deinit[local_a8[0]] != '\0') {
            Variant::_clear_internal();
         }

         local_130 = (String*)&local_f8;
         StringName::StringName((StringName*)&local_e8, local_130, false);
         lVar5 = ClassDB::instantiate((StringName*)&local_e8);
         if (( StringName::configured != '\0' ) && ( local_e8 != (undefined*)0x0 )) {
            StringName::unref();
         }

         if (lVar5 == 0) {
            _err_print_error("_add_menu_type", "editor/plugins/animation_state_machine_editor.cpp", 0x319, "Parameter \"obj\" is null.", 0, 0);
         }
 else {
            lVar5 = __dynamic_cast(lVar5, &Object::typeinfo, &AnimationNode::typeinfo, 0);
            if (lVar5 != 0) {
               local_e8 = (undefined*)0x0;
               local_f0 = lVar5;
               cVar4 = RefCounted::init_ref();
               if (cVar4 == '\0') {
                  local_f0 = 0;
                  Ref<AnimationNode>::unref((Ref<AnimationNode>*)&local_e8);
                  LAB_0010b649:local_138 = (Object*)0x0;
               }
 else {
                  Ref<AnimationNode>::unref((Ref<AnimationNode>*)&local_e8);
                  pOVar6 = (Object*)__dynamic_cast(lVar5, &Object::typeinfo, &AnimationRootNode::typeinfo, 0);
                  if (pOVar6 == (Object*)0x0) goto LAB_0010b649;
                  cVar4 = RefCounted::reference();
                  local_138 = (Object*)0x0;
                  if (cVar4 != '\0') {
                     local_138 = pOVar6;
                  }

               }

               Ref<AnimationNode>::unref((Ref<AnimationNode>*)&local_f0);
               String::replace_first((char*)&local_e8, (char*)local_130);
               if (local_118 != local_e8) {
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
                  local_118 = local_e8;
                  local_e8 = (undefined*)0x0;
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
               CowData<char32_t>::_unref((CowData<char32_t>*)local_130);
               goto LAB_0010af28;
            }

            _err_print_error("_add_menu_type", "editor/plugins/animation_state_machine_editor.cpp", 0x31b, "Parameter \"an\" is null.", 0, 0);
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)local_130);
         goto LAB_0010b436;
      }

      lVar5 = EditorSettings::get_singleton();
      pOVar6 = *(Object**)( lVar5 + 0x300 );
      if (( pOVar6 != (Object*)0x0 ) && ( cVar4 = cVar4 != '\0' )) {
         local_138 = (Object*)__dynamic_cast(pOVar6, &Object::typeinfo, &AnimationRootNode::typeinfo, 0);
         if (( local_138 == (Object*)0x0 ) || ( cVar4 = cVar4 == '\0' )) {
            cVar4 = RefCounted::unreference();
            if (( cVar4 == '\0' ) || ( cVar4 = cVar4 == '\0' )) goto LAB_0010b515;
            local_138 = (Object*)0x0;
         }
 else {
            cVar4 = RefCounted::unreference();
            if (( cVar4 == '\0' ) || ( cVar4 = cVar4 == '\0' )) goto LAB_0010af34;
         }

         ( **(code**)( *(long*)pOVar6 + 0x140 ) )(pOVar6);
         Memory::free_static(pOVar6, false);
         LAB_0010af28:if (local_138 != (Object*)0x0) goto LAB_0010af34;
      }

      LAB_0010b515:pSVar3 = EditorNode::singleton;
      local_130 = (String*)&local_f8;
      local_e8 = (undefined*)0x0;
      String::parse_latin1((String*)&local_e8, "");
      local_f0 = 0;
      String::parse_latin1((String*)&local_f0, "Warning!");
      TTR(local_130, (String*)&local_f0);
      local_108 = (undefined*)0x0;
      String::parse_latin1((String*)&local_108, "");
      local_110 = 0;
      String::parse_latin1((String*)&local_110, "This type of node can\'t be used. Only root nodes are allowed.");
      TTR((String*)&local_100, (String*)&local_110);
      EditorNode::show_warning(pSVar3, (String*)&local_100);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_130);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_f0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
      goto LAB_0010b436;
   }

   if (( ( *(long*)( this + 0xe38 ) == 0 ) || ( local_138 = (Object*)__dynamic_cast(*(long*)( this + 0xe38 ), &Object::typeinfo, &AnimationRootNode::typeinfo, 0) ),local_138 == (Object*)0x0 )) {
      Ref<AnimationNode>::unref((Ref<AnimationNode>*)( this + 0xe38 ));
      goto LAB_0010b515;
   }

   Ref<AnimationNode>::unref((Ref<AnimationNode>*)( this + 0xe38 ));
   LAB_0010af34:local_130 = (String*)&local_f8;
   local_148 = (CowData<char32_t>*)&local_118;
   if (( local_118 == (undefined*)0x0 ) || ( *(uint*)( local_118 + -8 ) < 2 )) {
      ( **(code**)( *(long*)local_138 + 0x48 ) )((CowData<char32_t>*)&local_f0);
      String::replace_first((char*)&local_e8, (char*)&local_f0);
      if (local_118 != local_e8) {
         CowData<char32_t>::_unref(local_148);
         local_118 = local_e8;
         local_e8 = (undefined*)0x0;
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_f0);
      local_108 = (undefined*)0x0;
      if (local_118 != (undefined*)0x0) goto LAB_0010afbf;
   }
 else {
      LAB_0010afbf:local_108 = (undefined*)0x0;
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_108, (CowData*)local_148);
   }

   local_150 = (String*)&local_108;
   while (true) {
      pSVar2 = *(StringName**)( this + 0xa10 );
      StringName::StringName((StringName*)&local_e8, local_150, false);
      cVar4 = AnimationNodeStateMachine::has_node(pSVar2);
      if (( StringName::configured != '\0' ) && ( local_e8 != (undefined*)0x0 )) {
         StringName::unref();
      }

      if (cVar4 == '\0') break;
      itos((long)&local_f0);
      local_e8 = " ";
      local_100 = 0;
      local_e0 = 1;
      String::parse_latin1((StrRange*)&local_100);
      String::operator +(local_130, (String*)local_148);
      String::operator +((String*)&local_e8, local_130);
      if (local_108 != local_e8) {
         CowData<char32_t>::_unref((CowData<char32_t>*)local_150);
         local_108 = local_e8;
         local_e8 = (undefined*)0x0;
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_130);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_f0);
   }
;
   this[0xc80] = (AnimationNodeStateMachineEditor)0x1;
   pOVar7 = (Object*)EditorUndoRedoManager::get_singleton();
   local_e8 = "";
   local_f0 = 0;
   local_e0 = 0;
   String::parse_latin1((StrRange*)&local_f0);
   local_e8 = "Add Node and Transition";
   local_f8 = (long*)0x0;
   local_e0 = 0x17;
   String::parse_latin1((StrRange*)local_130);
   TTR((String*)&local_e8, local_130);
   EditorUndoRedoManager::create_action(pOVar7, (CowData<char32_t>*)&local_e8, 0, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_130);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_f0);
   cVar4 = RefCounted::reference();
   local_e8 = (char*)0x0;
   pOVar6 = (Object*)0x0;
   if (cVar4 != '\0') {
      pOVar6 = local_138;
   }

   if (local_108 != (undefined*)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_e8, (CowData*)local_150);
   }

   StringName::StringName((StringName*)&local_f0, "add_node", false);
   pSVar2 = *(StringName**)( this + 0xa10 );
   local_d0 = *(undefined8*)( this + 0xcd0 );
   Variant::Variant((Variant*)local_a8, (String*)&local_e8);
   Variant::Variant((Variant*)local_90, pOVar6);
   Variant::Variant(local_78, (Vector2*)&local_d0);
   local_58 = (undefined1[16])0x0;
   local_60 = 0;
   local_c8 = (Variant*)local_a8;
   pVStack_c0 = (Variant*)local_90;
   local_b8 = local_78;
   EditorUndoRedoManager::add_do_methodp(pOVar7, pSVar2, (Variant**)&local_f0, (int)&local_c8);
   pVVar8 = local_48;
   do {
      pVVar1 = pVVar8 + -0x18;
      pVVar8 = pVVar8 + -0x18;
      if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
         Variant::_clear_internal();
      }

   }
 while ( pVVar8 != (Variant*)local_a8 );
   if (( StringName::configured != '\0' ) && ( local_f0 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   if (( ( pOVar6 != (Object*)0x0 ) && ( cVar4 = RefCounted::unreference() ),cVar4 != '\0' )) &&( cVar4 = cVar4 != '\0' )(**(code**)( *(long*)pOVar6 + 0x140 ))(pOVar6);
   Memory::free_static(pOVar6, false);
}
local_e8 = (undefined*)0x0;if (local_108 != (undefined*)0x0) {
   CowData<char32_t>::_ref((CowData<char32_t>*)&local_e8, (CowData*)local_150);
}
StringName::StringName((StringName*)&local_f0, "remove_node", false);pSVar2 = *(StringName**)( this + 0xa10 );Variant::Variant((Variant*)local_a8, (String*)&local_e8);local_90[0] = 0;local_90[1] = 0;local_88 = (undefined1[16])0x0;local_c8 = (Variant*)local_a8;EditorUndoRedoManager::add_undo_methodp(pOVar7, pSVar2, (Variant**)&local_f0, (int)&local_c8);if (Variant::needs_deinit[local_90[0]] != '\0') {
   Variant::_clear_internal();
}
if (Variant::needs_deinit[local_a8[0]] != '\0') {
   Variant::_clear_internal();
}
if (( StringName::configured != '\0' ) && ( local_f0 != 0 )) {
   StringName::unref();
}
CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);StringName::StringName((StringName*)&local_e8, local_150, false);if (*(undefined**)( this + 0xd78 ) == local_e8) {
   if (( StringName::configured != '\0' ) && ( local_e8 != (undefined*)0x0 )) {
      StringName::unref();
   }

}
 else {
   StringName::unref();
   *(char**)( this + 0xd78 ) = local_e8;
}
_add_transition(this, true);EditorUndoRedoManager::commit_action(SUB81(pOVar7, 0));this[0xc80] = (AnimationNodeStateMachineEditor)0x0;CanvasItem::queue_redraw();CowData<char32_t>::_unref((CowData<char32_t>*)local_150);cVar4 = RefCounted::unreference();if (( cVar4 != '\0' ) && ( cVar4 = cVar4 != '\0' )) {
   ( **(code**)( *(long*)local_138 + 0x140 ) )(local_138);
   Memory::free_static(local_138, false);
}
LAB_0010b436:local_148 = (CowData<char32_t>*)&local_118;CowData<char32_t>::_unref(local_148);if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return;}/* AnimationNodeStateMachineEditor::_file_opened(String const&) */void AnimationNodeStateMachineEditor::_file_opened(AnimationNodeStateMachineEditor *this, String *param_1) {
   String *pSVar1;
   char cVar2;
   Object *pOVar3;
   Object *pOVar4;
   long in_FS_OFFSET;
   undefined8 local_80;
   undefined8 local_78;
   String local_70[8];
   undefined8 local_68;
   undefined8 local_60;
   Object *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_60 = 0;
   local_58 = (Object*)&_LC0;
   local_50 = 0;
   String::parse_latin1((StrRange*)&local_60);
   ResourceLoader::load((String*)&local_58, param_1, (StrRange*)&local_60, 1, 0);
   if (local_58 == (Object*)0x0) {
      pOVar4 = *(Object**)( this + 0xe38 );
      if (pOVar4 == (Object*)0x0) goto LAB_0010ba30;
      *(undefined8*)( this + 0xe38 ) = 0;
      goto LAB_0010badd;
   }

   pOVar3 = (Object*)__dynamic_cast(local_58, &Object::typeinfo, &AnimationNode::typeinfo, 0);
   pOVar4 = *(Object**)( this + 0xe38 );
   if (pOVar4 != pOVar3) {
      *(Object**)( this + 0xe38 ) = pOVar3;
      if (pOVar3 == (Object*)0x0) {
         if (pOVar4 != (Object*)0x0) goto LAB_0010badd;
      }
 else {
         cVar2 = RefCounted::reference();
         if (cVar2 == '\0') {
            *(undefined8*)( this + 0xe38 ) = 0;
         }

         if (pOVar4 != (Object*)0x0) {
            LAB_0010badd:cVar2 = RefCounted::unreference();
            if (cVar2 != '\0') {
               cVar2 = predelete_handler(pOVar4);
               if (cVar2 != '\0') {
                  ( **(code**)( *(long*)pOVar4 + 0x140 ) )(pOVar4);
                  Memory::free_static(pOVar4, false);
               }

            }

         }

         if (local_58 == (Object*)0x0) goto LAB_0010ba30;
      }

   }

   cVar2 = RefCounted::unreference();
   pOVar4 = local_58;
   if (cVar2 != '\0') {
      cVar2 = predelete_handler(local_58);
      if (cVar2 != '\0') {
         ( **(code**)( *(long*)pOVar4 + 0x140 ) )(pOVar4);
         Memory::free_static(pOVar4, false);
      }

   }

   LAB_0010ba30:CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   pSVar1 = EditorNode::singleton;
   if (*(long*)( this + 0xe38 ) == 0) {
      local_58 = (Object*)&_LC0;
      local_60 = 0;
      local_50 = 0;
      String::parse_latin1((StrRange*)&local_60);
      local_58 = (Object*)0x11ceea;
      local_68 = 0;
      local_50 = 8;
      String::parse_latin1((StrRange*)&local_68);
      TTR(local_70, (String*)&local_68);
      local_58 = (Object*)&_LC0;
      local_78 = 0;
      local_50 = 0;
      String::parse_latin1((StrRange*)&local_78);
      local_58 = (Object*)0x11e948;
      local_80 = 0;
      local_50 = 0x42;
      String::parse_latin1((StrRange*)&local_80);
      TTR((String*)&local_58, (String*)&local_80);
      EditorNode::show_warning(pSVar1, (String*)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_70);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      _add_menu_type(this, 0x3ea);
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AnimationNodeStateMachineEditor::_delete_selected() */void AnimationNodeStateMachineEditor::_delete_selected(AnimationNodeStateMachineEditor *this) {
   long *plVar1;
   code *pcVar2;
   long lVar3;
   undefined8 uVar4;
   long lVar5;
   long in_FS_OFFSET;
   long local_60;
   char *local_58;
   String *local_50[2];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar3 = Tree::get_next_selected(*(TreeItem**)( this + 0xce0 ));
   uVar4 = EditorUndoRedoManager::get_singleton();
   while (true) {
      if (lVar3 == 0) {
         if (this[0xc80] != (AnimationNodeStateMachineEditor)0x0) {
            EditorUndoRedoManager::commit_action(SUB81(uVar4, 0));
            this[0xc80] = (AnimationNodeStateMachineEditor)0x0;
         }

         if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Subroutine does not return */
            __stack_chk_fail();
         }

         return;
      }

      if (this[0xc80] == (AnimationNodeStateMachineEditor)0x0) {
         this[0xc80] = (AnimationNodeStateMachineEditor)0x1;
         local_58 = "Transition(s) Removed";
         local_60 = 0;
         local_50[0] = (String*)0x15;
         String::parse_latin1((StrRange*)&local_60);
         EditorUndoRedoManager::create_action(uVar4, (StringName*)&local_60, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      }

      TreeItem::get_text((int)(StringName*)&local_60);
      String::split((char*)&local_58, SUB81((StringName*)&local_60, 0), 0x11cd3c);
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

      if (local_50[0] == (String*)0x0) break;
      lVar3 = *(long*)( local_50[0] + -8 );
      if (lVar3 < 1) goto LAB_0010bef3;
      StringName::StringName((StringName*)&local_60, local_50[0], false);
      if (*(long*)( this + 0xda0 ) != local_60) {
         StringName::unref();
         *(long*)( this + 0xda0 ) = local_60;
         LAB_0010bd62:if (local_50[0] != (String*)0x0) goto LAB_0010bd70;
         LAB_0010be9c:lVar3 = 0;
         LAB_0010be9f:lVar5 = 1;
         goto LAB_0010bf10;
      }

      if (( StringName::configured == '\0' ) || ( local_60 == 0 )) goto LAB_0010bd62;
      StringName::unref();
      if (local_50[0] == (String*)0x0) goto LAB_0010be9c;
      LAB_0010bd70:lVar3 = *(long*)( local_50[0] + -8 );
      if (lVar3 < 2) goto LAB_0010be9f;
      StringName::StringName((StringName*)&local_60, local_50[0] + 8, false);
      if (*(long*)( this + 0xda8 ) == local_60) {
         if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         *(long*)( this + 0xda8 ) = local_60;
      }

      _erase_selected(this, true);
      lVar3 = Tree::get_next_selected(*(TreeItem**)( this + 0xce0 ));
      CowData<String>::_unref((CowData<String>*)local_50);
   }
;
   lVar3 = 0;
   LAB_0010bef3:lVar5 = 0;
   LAB_0010bf10:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar5, lVar3, "p_index", "size()", "", false, true);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar2 = (code*)invalidInstructionException();
   ( *pcVar2 )();
}
/* CowData<String>::_copy_on_write() [clone .isra.0] */void CowData<String>::_copy_on_write(CowData<String> *this) {
   CowData *pCVar1;
   long lVar2;
   long lVar3;
   code *pcVar4;
   undefined8 *puVar5;
   long lVar6;
   ulong uVar7;
   CowData<char32_t> *this_00;
   if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
      return;
   }

   if (*(long*)this == 0) {
      /* WARNING: Does not return */
      pcVar4 = (code*)invalidInstructionException();
      ( *pcVar4 )();
   }

   lVar2 = *(long*)( *(long*)this + -8 );
   uVar7 = 0x10;
   if (lVar2 * 8 != 0) {
      uVar7 = lVar2 * 8 - 1;
      uVar7 = uVar7 | uVar7 >> 1;
      uVar7 = uVar7 | uVar7 >> 2;
      uVar7 = uVar7 | uVar7 >> 4;
      uVar7 = uVar7 | uVar7 >> 8;
      uVar7 = uVar7 | uVar7 >> 0x10;
      uVar7 = ( uVar7 | uVar7 >> 0x20 ) + 0x11;
   }

   puVar5 = (undefined8*)Memory::alloc_static(uVar7, false);
   if (puVar5 != (undefined8*)0x0) {
      lVar6 = 0;
      *puVar5 = 1;
      puVar5[1] = lVar2;
      this_00 = (CowData<char32_t>*)( puVar5 + 2 );
      if (lVar2 != 0) {
         do {
            lVar3 = *(long*)this;
            *(undefined8*)this_00 = 0;
            pCVar1 = (CowData*)( lVar3 + lVar6 * 8 );
            if (*(long*)pCVar1 != 0) {
               CowData<char32_t>::_ref(this_00, pCVar1);
            }

            lVar6 = lVar6 + 1;
            this_00 = this_00 + 8;
         }
 while ( lVar2 != lVar6 );
      }

      _unref(this);
      *(CowData<char32_t>**)this = (CowData<char32_t>*)( puVar5 + 2 );
      return;
   }

   _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
   return;
}
/* AnimationNodeStateMachineEditor::_bind_methods() */void AnimationNodeStateMachineEditor::_bind_methods(void) {
   MethodBind *pMVar1;
   undefined8 uVar2;
   long in_FS_OFFSET;
   undefined8 local_a8;
   long local_a0;
   long local_98;
   long local_90;
   long local_88[2];
   undefined8 local_78[2];
   int local_68[4];
   code *pcStack_58;
   code *pcStack_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_68[2] = 0;
   local_68[3] = 0;
   pcStack_58 = (code*)0x0;
   local_68[0] = 0;
   local_68[1] = 0;
   pMVar1 = create_method_bind<AnimationNodeStateMachineEditor>(_update_graph);
   StringName::StringName((StringName*)local_88, "_update_graph", false);
   local_78[0] = 0;
   ClassDB::bind_methodfi(1, pMVar1, false, (MethodDefinition*)local_88, (Variant**)0x0, 0);
   CowData<StringName>::_unref((CowData<StringName>*)local_78);
   if (( StringName::configured != '\0' ) && ( local_88[0] != 0 )) {
      StringName::unref();
   }

   if (Variant::needs_deinit[local_68[0]] != '\0') {
      Variant::_clear_internal();
   }

   uVar2 = ThemeDB::get_singleton();
   for (int i = 0; i < 4; i++) {
      local_68[i] = 0;
   }

   pcStack_58 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#1}>::_M_manager;
   pcStack_50 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#1}>::_M_invoke;
   StringName::StringName((StringName*)local_88, "GraphStateMachine", false);
   StringName::StringName((StringName*)&local_90, "panel", false);
   StringName::StringName((StringName*)&local_98, "panel_style", false);
   local_a8 = 0;
   String::parse_latin1((String*)&local_a8, "AnimationNodeStateMachineEditor");
   StringName::StringName((StringName*)&local_a0, (String*)&local_a8, false);
   ThemeDB::bind_class_external_item(uVar2, 5, (StringName*)&local_a0, (StringName*)&local_98, (StringName*)&local_90, (StringName*)local_88, (_Function_base*)local_68);
   if (( StringName::configured != '\0' ) && ( local_a0 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   if (StringName::configured != '\0') {
      if (local_98 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010c26d;
      }

      if (local_90 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010c26d;
      }

      if (local_88[0] != 0) {
         StringName::unref();
      }

   }

   LAB_0010c26d:std::_Function_base::~_Function_base((_Function_base*)local_68);
   uVar2 = ThemeDB::get_singleton();
   for (int i = 0; i < 4; i++) {
      local_68[i] = 0;
   }

   pcStack_58 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#2}>::_M_manager;
   pcStack_50 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#2}>::_M_invoke;
   StringName::StringName((StringName*)local_88, "GraphStateMachine", false);
   StringName::StringName((StringName*)&local_90, "error_panel", false);
   StringName::StringName((StringName*)&local_98, "error_panel_style", false);
   local_a8 = 0;
   String::parse_latin1((String*)&local_a8, "AnimationNodeStateMachineEditor");
   StringName::StringName((StringName*)&local_a0, (String*)&local_a8, false);
   ThemeDB::bind_class_external_item(uVar2, 5, (StringName*)&local_a0, (StringName*)&local_98, (StringName*)&local_90, (StringName*)local_88, (_Function_base*)local_68);
   if (( StringName::configured != '\0' ) && ( local_a0 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   if (StringName::configured != '\0') {
      if (local_98 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010c392;
      }

      if (local_90 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010c392;
      }

      if (local_88[0] != 0) {
         StringName::unref();
      }

   }

   LAB_0010c392:std::_Function_base::~_Function_base((_Function_base*)local_68);
   uVar2 = ThemeDB::get_singleton();
   for (int i = 0; i < 4; i++) {
      local_68[i] = 0;
   }

   pcStack_58 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#3}>::_M_manager;
   pcStack_50 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#3}>::_M_invoke;
   StringName::StringName((StringName*)local_88, "GraphStateMachine", false);
   StringName::StringName((StringName*)&local_90, "error_color", false);
   StringName::StringName((StringName*)&local_98, "error_color", false);
   local_a8 = 0;
   String::parse_latin1((String*)&local_a8, "AnimationNodeStateMachineEditor");
   StringName::StringName((StringName*)&local_a0, (String*)&local_a8, false);
   ThemeDB::bind_class_external_item(uVar2, 0, (StringName*)&local_a0, (StringName*)&local_98, (StringName*)&local_90, (StringName*)local_88, (_Function_base*)local_68);
   if (( StringName::configured != '\0' ) && ( local_a0 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   if (StringName::configured != '\0') {
      if (local_98 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010c4b3;
      }

      if (local_90 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010c4b3;
      }

      if (local_88[0] != 0) {
         StringName::unref();
      }

   }

   LAB_0010c4b3:std::_Function_base::~_Function_base((_Function_base*)local_68);
   uVar2 = ThemeDB::get_singleton();
   for (int i = 0; i < 4; i++) {
      local_68[i] = 0;
   }

   pcStack_58 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#4}>::_M_manager;
   pcStack_50 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#4}>::_M_invoke;
   StringName::StringName((StringName*)local_88, "EditorIcons", false);
   StringName::StringName((StringName*)&local_90, "ToolSelect", false);
   StringName::StringName((StringName*)&local_98, "tool_icon_select", false);
   local_a8 = 0;
   String::parse_latin1((String*)&local_a8, "AnimationNodeStateMachineEditor");
   StringName::StringName((StringName*)&local_a0, (String*)&local_a8, false);
   ThemeDB::bind_class_external_item(uVar2, 4, (StringName*)&local_a0, (StringName*)&local_98, (StringName*)&local_90, (StringName*)local_88, (_Function_base*)local_68);
   if (( StringName::configured != '\0' ) && ( local_a0 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   if (StringName::configured != '\0') {
      if (local_98 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010c5d6;
      }

      if (local_90 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010c5d6;
      }

      if (local_88[0] != 0) {
         StringName::unref();
      }

   }

   LAB_0010c5d6:std::_Function_base::~_Function_base((_Function_base*)local_68);
   uVar2 = ThemeDB::get_singleton();
   for (int i = 0; i < 4; i++) {
      local_68[i] = 0;
   }

   pcStack_58 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#5}>::_M_manager;
   pcStack_50 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#5}>::_M_invoke;
   StringName::StringName((StringName*)local_88, "EditorIcons", false);
   StringName::StringName((StringName*)&local_90, "ToolAddNode", false);
   StringName::StringName((StringName*)&local_98, "tool_icon_create", false);
   local_a8 = 0;
   String::parse_latin1((String*)&local_a8, "AnimationNodeStateMachineEditor");
   StringName::StringName((StringName*)&local_a0, (String*)&local_a8, false);
   ThemeDB::bind_class_external_item(uVar2, 4, (StringName*)&local_a0, (StringName*)&local_98, (StringName*)&local_90, (StringName*)local_88, (_Function_base*)local_68);
   if (( StringName::configured != '\0' ) && ( local_a0 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   if (StringName::configured != '\0') {
      if (local_98 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010c6f9;
      }

      if (local_90 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010c6f9;
      }

      if (local_88[0] != 0) {
         StringName::unref();
      }

   }

   LAB_0010c6f9:std::_Function_base::~_Function_base((_Function_base*)local_68);
   uVar2 = ThemeDB::get_singleton();
   for (int i = 0; i < 4; i++) {
      local_68[i] = 0;
   }

   pcStack_58 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#6}>::_M_manager;
   pcStack_50 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#6}>::_M_invoke;
   StringName::StringName((StringName*)local_88, "EditorIcons", false);
   StringName::StringName((StringName*)&local_90, "ToolConnect", false);
   StringName::StringName((StringName*)&local_98, "tool_icon_connect", false);
   local_a8 = 0;
   String::parse_latin1((String*)&local_a8, "AnimationNodeStateMachineEditor");
   StringName::StringName((StringName*)&local_a0, (String*)&local_a8, false);
   ThemeDB::bind_class_external_item(uVar2, 4, (StringName*)&local_a0, (StringName*)&local_98, (StringName*)&local_90, (StringName*)local_88, (_Function_base*)local_68);
   if (( StringName::configured != '\0' ) && ( local_a0 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   if (StringName::configured != '\0') {
      if (local_98 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010c81d;
      }

      if (local_90 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010c81d;
      }

      if (local_88[0] != 0) {
         StringName::unref();
      }

   }

   LAB_0010c81d:std::_Function_base::~_Function_base((_Function_base*)local_68);
   uVar2 = ThemeDB::get_singleton();
   for (int i = 0; i < 4; i++) {
      local_68[i] = 0;
   }

   pcStack_58 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#7}>::_M_manager;
   pcStack_50 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#7}>::_M_invoke;
   StringName::StringName((StringName*)local_88, "EditorIcons", false);
   StringName::StringName((StringName*)&local_90, "Remove", false);
   StringName::StringName((StringName*)&local_98, "tool_icon_erase", false);
   local_a8 = 0;
   String::parse_latin1((String*)&local_a8, "AnimationNodeStateMachineEditor");
   StringName::StringName((StringName*)&local_a0, (String*)&local_a8, false);
   ThemeDB::bind_class_external_item(uVar2, 4, (StringName*)&local_a0, (StringName*)&local_98, (StringName*)&local_90, (StringName*)local_88, (_Function_base*)local_68);
   if (( StringName::configured != '\0' ) && ( local_a0 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   if (StringName::configured != '\0') {
      if (local_98 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010c942;
      }

      if (local_90 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010c942;
      }

      if (local_88[0] != 0) {
         StringName::unref();
      }

   }

   LAB_0010c942:std::_Function_base::~_Function_base((_Function_base*)local_68);
   uVar2 = ThemeDB::get_singleton();
   for (int i = 0; i < 4; i++) {
      local_68[i] = 0;
   }

   pcStack_58 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#8}>::_M_manager;
   pcStack_50 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#8}>::_M_invoke;
   StringName::StringName((StringName*)local_88, "EditorIcons", false);
   StringName::StringName((StringName*)&local_90, "TransitionImmediate", false);
   StringName::StringName((StringName*)&local_98, "transition_icon_immediate", false);
   local_a8 = 0;
   String::parse_latin1((String*)&local_a8, "AnimationNodeStateMachineEditor");
   StringName::StringName((StringName*)&local_a0, (String*)&local_a8, false);
   ThemeDB::bind_class_external_item(uVar2, 4, (StringName*)&local_a0, (StringName*)&local_98, (StringName*)&local_90, (StringName*)local_88, (_Function_base*)local_68);
   if (( StringName::configured != '\0' ) && ( local_a0 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   if (StringName::configured != '\0') {
      if (local_98 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010ca66;
      }

      if (local_90 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010ca66;
      }

      if (local_88[0] != 0) {
         StringName::unref();
      }

   }

   LAB_0010ca66:std::_Function_base::~_Function_base((_Function_base*)local_68);
   uVar2 = ThemeDB::get_singleton();
   for (int i = 0; i < 4; i++) {
      local_68[i] = 0;
   }

   pcStack_58 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#9}>::_M_manager;
   pcStack_50 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#9}>::_M_invoke;
   StringName::StringName((StringName*)local_88, "EditorIcons", false);
   StringName::StringName((StringName*)&local_90, "TransitionSync", false);
   StringName::StringName((StringName*)&local_98, "transition_icon_sync", false);
   local_a8 = 0;
   String::parse_latin1((String*)&local_a8, "AnimationNodeStateMachineEditor");
   StringName::StringName((StringName*)&local_a0, (String*)&local_a8, false);
   ThemeDB::bind_class_external_item(uVar2, 4, (StringName*)&local_a0, (StringName*)&local_98, (StringName*)&local_90, (StringName*)local_88, (_Function_base*)local_68);
   if (( StringName::configured != '\0' ) && ( local_a0 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   if (StringName::configured != '\0') {
      if (local_98 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010cb89;
      }

      if (local_90 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010cb89;
      }

      if (local_88[0] != 0) {
         StringName::unref();
      }

   }

   LAB_0010cb89:std::_Function_base::~_Function_base((_Function_base*)local_68);
   uVar2 = ThemeDB::get_singleton();
   for (int i = 0; i < 4; i++) {
      local_68[i] = 0;
   }

   pcStack_58 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#10}>::_M_manager;
   pcStack_50 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#10}>::_M_invoke;
   StringName::StringName((StringName*)local_88, "EditorIcons", false);
   StringName::StringName((StringName*)&local_90, "TransitionEnd", false);
   StringName::StringName((StringName*)&local_98, "transition_icon_end", false);
   local_a8 = 0;
   String::parse_latin1((String*)&local_a8, "AnimationNodeStateMachineEditor");
   StringName::StringName((StringName*)&local_a0, (String*)&local_a8, false);
   ThemeDB::bind_class_external_item(uVar2, 4, (StringName*)&local_a0, (StringName*)&local_98, (StringName*)&local_90, (StringName*)local_88, (_Function_base*)local_68);
   if (( StringName::configured != '\0' ) && ( local_a0 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   if (StringName::configured != '\0') {
      if (local_98 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010ccac;
      }

      if (local_90 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010ccac;
      }

      if (local_88[0] != 0) {
         StringName::unref();
      }

   }

   LAB_0010ccac:std::_Function_base::~_Function_base((_Function_base*)local_68);
   uVar2 = ThemeDB::get_singleton();
   for (int i = 0; i < 4; i++) {
      local_68[i] = 0;
   }

   pcStack_58 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#11}>::_M_manager;
   pcStack_50 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#11}>::_M_invoke;
   StringName::StringName((StringName*)local_88, "EditorIcons", false);
   StringName::StringName((StringName*)&local_90, "Play", false);
   StringName::StringName((StringName*)&local_98, "play_icon_start", false);
   local_a8 = 0;
   String::parse_latin1((String*)&local_a8, "AnimationNodeStateMachineEditor");
   StringName::StringName((StringName*)&local_a0, (String*)&local_a8, false);
   ThemeDB::bind_class_external_item(uVar2, 4, (StringName*)&local_a0, (StringName*)&local_98, (StringName*)&local_90, (StringName*)local_88, (_Function_base*)local_68);
   if (( StringName::configured != '\0' ) && ( local_a0 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   if (StringName::configured != '\0') {
      if (local_98 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010cdd0;
      }

      if (local_90 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010cdd0;
      }

      if (local_88[0] != 0) {
         StringName::unref();
      }

   }

   LAB_0010cdd0:std::_Function_base::~_Function_base((_Function_base*)local_68);
   uVar2 = ThemeDB::get_singleton();
   for (int i = 0; i < 4; i++) {
      local_68[i] = 0;
   }

   pcStack_58 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#12}>::_M_manager;
   pcStack_50 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#12}>::_M_invoke;
   StringName::StringName((StringName*)local_88, "EditorIcons", false);
   StringName::StringName((StringName*)&local_90, "PlayTravel", false);
   StringName::StringName((StringName*)&local_98, "play_icon_travel", false);
   local_a8 = 0;
   String::parse_latin1((String*)&local_a8, "AnimationNodeStateMachineEditor");
   StringName::StringName((StringName*)&local_a0, (String*)&local_a8, false);
   ThemeDB::bind_class_external_item(uVar2, 4, (StringName*)&local_a0, (StringName*)&local_98, (StringName*)&local_90, (StringName*)local_88, (_Function_base*)local_68);
   if (( StringName::configured != '\0' ) && ( local_a0 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   if (StringName::configured != '\0') {
      if (local_98 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010cef5;
      }

      if (local_90 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010cef5;
      }

      if (local_88[0] != 0) {
         StringName::unref();
      }

   }

   LAB_0010cef5:std::_Function_base::~_Function_base((_Function_base*)local_68);
   uVar2 = ThemeDB::get_singleton();
   for (int i = 0; i < 4; i++) {
      local_68[i] = 0;
   }

   pcStack_58 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#13}>::_M_manager;
   pcStack_50 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#13}>::_M_invoke;
   StringName::StringName((StringName*)local_88, "EditorIcons", false);
   StringName::StringName((StringName*)&local_90, "AutoPlay", false);
   StringName::StringName((StringName*)&local_98, "play_icon_auto", false);
   local_a8 = 0;
   String::parse_latin1((String*)&local_a8, "AnimationNodeStateMachineEditor");
   StringName::StringName((StringName*)&local_a0, (String*)&local_a8, false);
   ThemeDB::bind_class_external_item(uVar2, 4, (StringName*)&local_a0, (StringName*)&local_98, (StringName*)&local_90, (StringName*)local_88, (_Function_base*)local_68);
   if (( StringName::configured != '\0' ) && ( local_a0 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   if (StringName::configured != '\0') {
      if (local_98 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010d019;
      }

      if (local_90 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010d019;
      }

      if (local_88[0] != 0) {
         StringName::unref();
      }

   }

   LAB_0010d019:std::_Function_base::~_Function_base((_Function_base*)local_68);
   uVar2 = ThemeDB::get_singleton();
   for (int i = 0; i < 4; i++) {
      local_68[i] = 0;
   }

   pcStack_58 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#14}>::_M_manager;
   pcStack_50 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#14}>::_M_invoke;
   StringName::StringName((StringName*)local_88, "EditorIcons", false);
   StringName::StringName((StringName*)&local_90, "Animation", false);
   StringName::StringName((StringName*)&local_98, "animation_icon", false);
   local_a8 = 0;
   String::parse_latin1((String*)&local_a8, "AnimationNodeStateMachineEditor");
   StringName::StringName((StringName*)&local_a0, (String*)&local_a8, false);
   ThemeDB::bind_class_external_item(uVar2, 4, (StringName*)&local_a0, (StringName*)&local_98, (StringName*)&local_90, (StringName*)local_88, (_Function_base*)local_68);
   if (( StringName::configured != '\0' ) && ( local_a0 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   if (StringName::configured != '\0') {
      if (local_98 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010d13c;
      }

      if (local_90 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010d13c;
      }

      if (local_88[0] != 0) {
         StringName::unref();
      }

   }

   LAB_0010d13c:std::_Function_base::~_Function_base((_Function_base*)local_68);
   uVar2 = ThemeDB::get_singleton();
   for (int i = 0; i < 4; i++) {
      local_68[i] = 0;
   }

   pcStack_58 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#15}>::_M_manager;
   pcStack_50 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#15}>::_M_invoke;
   StringName::StringName((StringName*)local_88, "GraphStateMachine", false);
   StringName::StringName((StringName*)&local_90, "node_frame", false);
   StringName::StringName((StringName*)&local_98, "node_frame", false);
   local_a8 = 0;
   String::parse_latin1((String*)&local_a8, "AnimationNodeStateMachineEditor");
   StringName::StringName((StringName*)&local_a0, (String*)&local_a8, false);
   ThemeDB::bind_class_external_item(uVar2, 5, (StringName*)&local_a0, (StringName*)&local_98, (StringName*)&local_90, (StringName*)local_88, (_Function_base*)local_68);
   if (( StringName::configured != '\0' ) && ( local_a0 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   if (StringName::configured != '\0') {
      if (local_98 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010d25f;
      }

      if (local_90 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010d25f;
      }

      if (local_88[0] != 0) {
         StringName::unref();
      }

   }

   LAB_0010d25f:std::_Function_base::~_Function_base((_Function_base*)local_68);
   uVar2 = ThemeDB::get_singleton();
   for (int i = 0; i < 4; i++) {
      local_68[i] = 0;
   }

   pcStack_58 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#16}>::_M_manager;
   pcStack_50 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#16}>::_M_invoke;
   StringName::StringName((StringName*)local_88, "GraphStateMachine", false);
   StringName::StringName((StringName*)&local_90, "node_frame_selected", false);
   StringName::StringName((StringName*)&local_98, "node_frame_selected", false);
   local_a8 = 0;
   String::parse_latin1((String*)&local_a8, "AnimationNodeStateMachineEditor");
   StringName::StringName((StringName*)&local_a0, (String*)&local_a8, false);
   ThemeDB::bind_class_external_item(uVar2, 5, (StringName*)&local_a0, (StringName*)&local_98, (StringName*)&local_90, (StringName*)local_88, (_Function_base*)local_68);
   if (( StringName::configured != '\0' ) && ( local_a0 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   if (StringName::configured != '\0') {
      if (local_98 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010d383;
      }

      if (local_90 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010d383;
      }

      if (local_88[0] != 0) {
         StringName::unref();
      }

   }

   LAB_0010d383:std::_Function_base::~_Function_base((_Function_base*)local_68);
   uVar2 = ThemeDB::get_singleton();
   for (int i = 0; i < 4; i++) {
      local_68[i] = 0;
   }

   pcStack_58 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#17}>::_M_manager;
   pcStack_50 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#17}>::_M_invoke;
   StringName::StringName((StringName*)local_88, "GraphStateMachine", false);
   StringName::StringName((StringName*)&local_90, "node_frame_playing", false);
   StringName::StringName((StringName*)&local_98, "node_frame_playing", false);
   local_a8 = 0;
   String::parse_latin1((String*)&local_a8, "AnimationNodeStateMachineEditor");
   StringName::StringName((StringName*)&local_a0, (String*)&local_a8, false);
   ThemeDB::bind_class_external_item(uVar2, 5, (StringName*)&local_a0, (StringName*)&local_98, (StringName*)&local_90, (StringName*)local_88, (_Function_base*)local_68);
   if (( StringName::configured != '\0' ) && ( local_a0 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   if (StringName::configured != '\0') {
      if (local_98 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010d4a8;
      }

      if (local_90 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010d4a8;
      }

      if (local_88[0] != 0) {
         StringName::unref();
      }

   }

   LAB_0010d4a8:std::_Function_base::~_Function_base((_Function_base*)local_68);
   uVar2 = ThemeDB::get_singleton();
   for (int i = 0; i < 4; i++) {
      local_68[i] = 0;
   }

   pcStack_58 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#18}>::_M_manager;
   pcStack_50 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#18}>::_M_invoke;
   StringName::StringName((StringName*)local_88, "GraphStateMachine", false);
   StringName::StringName((StringName*)&local_90, "node_frame_start", false);
   StringName::StringName((StringName*)&local_98, "node_frame_start", false);
   local_a8 = 0;
   String::parse_latin1((String*)&local_a8, "AnimationNodeStateMachineEditor");
   StringName::StringName((StringName*)&local_a0, (String*)&local_a8, false);
   ThemeDB::bind_class_external_item(uVar2, 5, (StringName*)&local_a0, (StringName*)&local_98, (StringName*)&local_90, (StringName*)local_88, (_Function_base*)local_68);
   if (( StringName::configured != '\0' ) && ( local_a0 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   if (StringName::configured != '\0') {
      if (local_98 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010d5cc;
      }

      if (local_90 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010d5cc;
      }

      if (local_88[0] != 0) {
         StringName::unref();
      }

   }

   LAB_0010d5cc:std::_Function_base::~_Function_base((_Function_base*)local_68);
   uVar2 = ThemeDB::get_singleton();
   for (int i = 0; i < 4; i++) {
      local_68[i] = 0;
   }

   pcStack_58 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#19}>::_M_manager;
   pcStack_50 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#19}>::_M_invoke;
   StringName::StringName((StringName*)local_88, "GraphStateMachine", false);
   StringName::StringName((StringName*)&local_90, "node_frame_end", false);
   StringName::StringName((StringName*)&local_98, "node_frame_end", false);
   local_a8 = 0;
   String::parse_latin1((String*)&local_a8, "AnimationNodeStateMachineEditor");
   StringName::StringName((StringName*)&local_a0, (String*)&local_a8, false);
   ThemeDB::bind_class_external_item(uVar2, 5, (StringName*)&local_a0, (StringName*)&local_98, (StringName*)&local_90, (StringName*)local_88, (_Function_base*)local_68);
   if (( StringName::configured != '\0' ) && ( local_a0 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   if (StringName::configured != '\0') {
      if (local_98 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010d6ef;
      }

      if (local_90 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010d6ef;
      }

      if (local_88[0] != 0) {
         StringName::unref();
      }

   }

   LAB_0010d6ef:std::_Function_base::~_Function_base((_Function_base*)local_68);
   uVar2 = ThemeDB::get_singleton();
   for (int i = 0; i < 4; i++) {
      local_68[i] = 0;
   }

   pcStack_58 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#20}>::_M_manager;
   pcStack_50 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#20}>::_M_invoke;
   StringName::StringName((StringName*)local_88, "GraphStateMachine", false);
   StringName::StringName((StringName*)&local_90, "node_title_font", false);
   StringName::StringName((StringName*)&local_98, "node_title_font", false);
   local_a8 = 0;
   String::parse_latin1((String*)&local_a8, "AnimationNodeStateMachineEditor");
   StringName::StringName((StringName*)&local_a0, (String*)&local_a8, false);
   ThemeDB::bind_class_external_item(uVar2, 2, (StringName*)&local_a0, (StringName*)&local_98, (StringName*)&local_90, (StringName*)local_88, (_Function_base*)local_68);
   if (( StringName::configured != '\0' ) && ( local_a0 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   if (StringName::configured != '\0') {
      if (local_98 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010d812;
      }

      if (local_90 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010d812;
      }

      if (local_88[0] != 0) {
         StringName::unref();
      }

   }

   LAB_0010d812:std::_Function_base::~_Function_base((_Function_base*)local_68);
   uVar2 = ThemeDB::get_singleton();
   for (int i = 0; i < 4; i++) {
      local_68[i] = 0;
   }

   pcStack_58 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#21}>::_M_manager;
   pcStack_50 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#21}>::_M_invoke;
   StringName::StringName((StringName*)local_88, "GraphStateMachine", false);
   StringName::StringName((StringName*)&local_90, "node_title_font_size", false);
   StringName::StringName((StringName*)&local_98, "node_title_font_size", false);
   local_a8 = 0;
   String::parse_latin1((String*)&local_a8, "AnimationNodeStateMachineEditor");
   StringName::StringName((StringName*)&local_a0, (String*)&local_a8, false);
   ThemeDB::bind_class_external_item(uVar2, 3, (StringName*)&local_a0, (StringName*)&local_98, (StringName*)&local_90, (StringName*)local_88, (_Function_base*)local_68);
   if (( StringName::configured != '\0' ) && ( local_a0 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   if (StringName::configured != '\0') {
      if (local_98 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010d936;
      }

      if (local_90 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010d936;
      }

      if (local_88[0] != 0) {
         StringName::unref();
      }

   }

   LAB_0010d936:std::_Function_base::~_Function_base((_Function_base*)local_68);
   uVar2 = ThemeDB::get_singleton();
   for (int i = 0; i < 4; i++) {
      local_68[i] = 0;
   }

   pcStack_58 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#22}>::_M_manager;
   pcStack_50 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#22}>::_M_invoke;
   StringName::StringName((StringName*)local_88, "GraphStateMachine", false);
   StringName::StringName((StringName*)&local_90, "node_title_font_color", false);
   StringName::StringName((StringName*)&local_98, "node_title_font_color", false);
   local_a8 = 0;
   String::parse_latin1((String*)&local_a8, "AnimationNodeStateMachineEditor");
   StringName::StringName((StringName*)&local_a0, (String*)&local_a8, false);
   ThemeDB::bind_class_external_item(uVar2, 0, (StringName*)&local_a0, (StringName*)&local_98, (StringName*)&local_90, (StringName*)local_88, (_Function_base*)local_68);
   if (( StringName::configured != '\0' ) && ( local_a0 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   if (StringName::configured != '\0') {
      if (local_98 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010da58;
      }

      if (local_90 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010da58;
      }

      if (local_88[0] != 0) {
         StringName::unref();
      }

   }

   LAB_0010da58:std::_Function_base::~_Function_base((_Function_base*)local_68);
   uVar2 = ThemeDB::get_singleton();
   for (int i = 0; i < 4; i++) {
      local_68[i] = 0;
   }

   pcStack_58 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#23}>::_M_manager;
   pcStack_50 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#23}>::_M_invoke;
   StringName::StringName((StringName*)local_88, "EditorIcons", false);
   StringName::StringName((StringName*)&local_90, "Play", false);
   StringName::StringName((StringName*)&local_98, "play_node", false);
   local_a8 = 0;
   String::parse_latin1((String*)&local_a8, "AnimationNodeStateMachineEditor");
   StringName::StringName((StringName*)&local_a0, (String*)&local_a8, false);
   ThemeDB::bind_class_external_item(uVar2, 4, (StringName*)&local_a0, (StringName*)&local_98, (StringName*)&local_90, (StringName*)local_88, (_Function_base*)local_68);
   if (( StringName::configured != '\0' ) && ( local_a0 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   if (StringName::configured != '\0') {
      if (local_98 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010db7c;
      }

      if (local_90 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010db7c;
      }

      if (local_88[0] != 0) {
         StringName::unref();
      }

   }

   LAB_0010db7c:std::_Function_base::~_Function_base((_Function_base*)local_68);
   uVar2 = ThemeDB::get_singleton();
   for (int i = 0; i < 4; i++) {
      local_68[i] = 0;
   }

   pcStack_58 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#24}>::_M_manager;
   pcStack_50 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#24}>::_M_invoke;
   StringName::StringName((StringName*)local_88, "EditorIcons", false);
   StringName::StringName((StringName*)&local_90, "Edit", false);
   StringName::StringName((StringName*)&local_98, "edit_node", false);
   local_a8 = 0;
   String::parse_latin1((String*)&local_a8, "AnimationNodeStateMachineEditor");
   StringName::StringName((StringName*)&local_a0, (String*)&local_a8, false);
   ThemeDB::bind_class_external_item(uVar2, 4, (StringName*)&local_a0, (StringName*)&local_98, (StringName*)&local_90, (StringName*)local_88, (_Function_base*)local_68);
   if (( StringName::configured != '\0' ) && ( local_a0 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   if (StringName::configured != '\0') {
      if (local_98 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010dc9f;
      }

      if (local_90 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010dc9f;
      }

      if (local_88[0] != 0) {
         StringName::unref();
      }

   }

   LAB_0010dc9f:std::_Function_base::~_Function_base((_Function_base*)local_68);
   uVar2 = ThemeDB::get_singleton();
   for (int i = 0; i < 4; i++) {
      local_68[i] = 0;
   }

   pcStack_58 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#25}>::_M_manager;
   pcStack_50 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#25}>::_M_invoke;
   StringName::StringName((StringName*)local_88, "GraphStateMachine", false);
   StringName::StringName((StringName*)&local_90, "transition_color", false);
   StringName::StringName((StringName*)&local_98, "transition_color", false);
   local_a8 = 0;
   String::parse_latin1((String*)&local_a8, "AnimationNodeStateMachineEditor");
   StringName::StringName((StringName*)&local_a0, (String*)&local_a8, false);
   ThemeDB::bind_class_external_item(uVar2, 0, (StringName*)&local_a0, (StringName*)&local_98, (StringName*)&local_90, (StringName*)local_88, (_Function_base*)local_68);
   if (( StringName::configured != '\0' ) && ( local_a0 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   if (StringName::configured != '\0') {
      if (local_98 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010ddbf;
      }

      if (local_90 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010ddbf;
      }

      if (local_88[0] != 0) {
         StringName::unref();
      }

   }

   LAB_0010ddbf:std::_Function_base::~_Function_base((_Function_base*)local_68);
   uVar2 = ThemeDB::get_singleton();
   for (int i = 0; i < 4; i++) {
      local_68[i] = 0;
   }

   pcStack_58 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#26}>::_M_manager;
   pcStack_50 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#26}>::_M_invoke;
   StringName::StringName((StringName*)local_88, "GraphStateMachine", false);
   StringName::StringName((StringName*)&local_90, "transition_disabled_color", false);
   StringName::StringName((StringName*)&local_98, "transition_disabled_color", false);
   local_a8 = 0;
   String::parse_latin1((String*)&local_a8, "AnimationNodeStateMachineEditor");
   StringName::StringName((StringName*)&local_a0, (String*)&local_a8, false);
   ThemeDB::bind_class_external_item(uVar2, 0, (StringName*)&local_a0, (StringName*)&local_98, (StringName*)&local_90, (StringName*)local_88, (_Function_base*)local_68);
   if (( StringName::configured != '\0' ) && ( local_a0 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   if (StringName::configured != '\0') {
      if (local_98 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010dee0;
      }

      if (local_90 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010dee0;
      }

      if (local_88[0] != 0) {
         StringName::unref();
      }

   }

   LAB_0010dee0:std::_Function_base::~_Function_base((_Function_base*)local_68);
   uVar2 = ThemeDB::get_singleton();
   for (int i = 0; i < 4; i++) {
      local_68[i] = 0;
   }

   pcStack_58 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#27}>::_M_manager;
   pcStack_50 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#27}>::_M_invoke;
   StringName::StringName((StringName*)local_88, "GraphStateMachine", false);
   StringName::StringName((StringName*)&local_90, "transition_icon_color", false);
   StringName::StringName((StringName*)&local_98, "transition_icon_color", false);
   local_a8 = 0;
   String::parse_latin1((String*)&local_a8, "AnimationNodeStateMachineEditor");
   StringName::StringName((StringName*)&local_a0, (String*)&local_a8, false);
   ThemeDB::bind_class_external_item(uVar2, 0, (StringName*)&local_a0, (StringName*)&local_98, (StringName*)&local_90, (StringName*)local_88, (_Function_base*)local_68);
   if (( StringName::configured != '\0' ) && ( local_a0 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   if (StringName::configured != '\0') {
      if (local_98 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010e002;
      }

      if (local_90 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010e002;
      }

      if (local_88[0] != 0) {
         StringName::unref();
      }

   }

   LAB_0010e002:std::_Function_base::~_Function_base((_Function_base*)local_68);
   uVar2 = ThemeDB::get_singleton();
   for (int i = 0; i < 4; i++) {
      local_68[i] = 0;
   }

   pcStack_58 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#28}>::_M_manager;
   pcStack_50 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#28}>::_M_invoke;
   StringName::StringName((StringName*)local_88, "GraphStateMachine", false);
   StringName::StringName((StringName*)&local_90, "transition_icon_disabled_color", false);
   StringName::StringName((StringName*)&local_98, "transition_icon_disabled_color", false);
   local_a8 = 0;
   String::parse_latin1((String*)&local_a8, "AnimationNodeStateMachineEditor");
   StringName::StringName((StringName*)&local_a0, (String*)&local_a8, false);
   ThemeDB::bind_class_external_item(uVar2, 0, (StringName*)&local_a0, (StringName*)&local_98, (StringName*)&local_90, (StringName*)local_88, (_Function_base*)local_68);
   if (( StringName::configured != '\0' ) && ( local_a0 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   if (StringName::configured != '\0') {
      if (local_98 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010e123;
      }

      if (local_90 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010e123;
      }

      if (local_88[0] != 0) {
         StringName::unref();
      }

   }

   LAB_0010e123:std::_Function_base::~_Function_base((_Function_base*)local_68);
   uVar2 = ThemeDB::get_singleton();
   for (int i = 0; i < 4; i++) {
      local_68[i] = 0;
   }

   pcStack_58 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#29}>::_M_manager;
   pcStack_50 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#29}>::_M_invoke;
   StringName::StringName((StringName*)local_88, "GraphStateMachine", false);
   StringName::StringName((StringName*)&local_90, "highlight_color", false);
   StringName::StringName((StringName*)&local_98, "highlight_color", false);
   local_a8 = 0;
   String::parse_latin1((String*)&local_a8, "AnimationNodeStateMachineEditor");
   StringName::StringName((StringName*)&local_a0, (String*)&local_a8, false);
   ThemeDB::bind_class_external_item(uVar2, 0, (StringName*)&local_a0, (StringName*)&local_98, (StringName*)&local_90, (StringName*)local_88, (_Function_base*)local_68);
   if (( StringName::configured != '\0' ) && ( local_a0 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   if (StringName::configured != '\0') {
      if (local_98 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010e243;
      }

      if (local_90 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010e243;
      }

      if (local_88[0] != 0) {
         StringName::unref();
      }

   }

   LAB_0010e243:std::_Function_base::~_Function_base((_Function_base*)local_68);
   uVar2 = ThemeDB::get_singleton();
   for (int i = 0; i < 4; i++) {
      local_68[i] = 0;
   }

   pcStack_58 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#30}>::_M_manager;
   pcStack_50 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#30}>::_M_invoke;
   StringName::StringName((StringName*)local_88, "GraphStateMachine", false);
   StringName::StringName((StringName*)&local_90, "highlight_disabled_color", false);
   StringName::StringName((StringName*)&local_98, "highlight_disabled_color", false);
   local_a8 = 0;
   String::parse_latin1((String*)&local_a8, "AnimationNodeStateMachineEditor");
   StringName::StringName((StringName*)&local_a0, (String*)&local_a8, false);
   ThemeDB::bind_class_external_item(uVar2, 0, (StringName*)&local_a0, (StringName*)&local_98, (StringName*)&local_90, (StringName*)local_88, (_Function_base*)local_68);
   if (( StringName::configured != '\0' ) && ( local_a0 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   if (StringName::configured != '\0') {
      if (local_98 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010e363;
      }

      if (local_90 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010e363;
      }

      if (local_88[0] != 0) {
         StringName::unref();
      }

   }

   LAB_0010e363:std::_Function_base::~_Function_base((_Function_base*)local_68);
   uVar2 = ThemeDB::get_singleton();
   for (int i = 0; i < 4; i++) {
      local_68[i] = 0;
   }

   pcStack_58 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#31}>::_M_manager;
   pcStack_50 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#31}>::_M_invoke;
   StringName::StringName((StringName*)local_88, "GraphStateMachine", false);
   StringName::StringName((StringName*)&local_90, "focus_color", false);
   StringName::StringName((StringName*)&local_98, "focus_color", false);
   local_a8 = 0;
   String::parse_latin1((String*)&local_a8, "AnimationNodeStateMachineEditor");
   StringName::StringName((StringName*)&local_a0, (String*)&local_a8, false);
   ThemeDB::bind_class_external_item(uVar2, 0, (StringName*)&local_a0, (StringName*)&local_98, (StringName*)&local_90, (StringName*)local_88, (_Function_base*)local_68);
   if (( StringName::configured != '\0' ) && ( local_a0 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   if (StringName::configured != '\0') {
      if (local_98 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010e484;
      }

      if (local_90 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010e484;
      }

      if (local_88[0] != 0) {
         StringName::unref();
      }

   }

   LAB_0010e484:std::_Function_base::~_Function_base((_Function_base*)local_68);
   uVar2 = ThemeDB::get_singleton();
   for (int i = 0; i < 4; i++) {
      local_68[i] = 0;
   }

   pcStack_58 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#32}>::_M_manager;
   pcStack_50 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#32}>::_M_invoke;
   StringName::StringName((StringName*)local_88, "GraphStateMachine", false);
   StringName::StringName((StringName*)&local_90, "guideline_color", false);
   StringName::StringName((StringName*)&local_98, "guideline_color", false);
   local_a8 = 0;
   String::parse_latin1((String*)&local_a8, "AnimationNodeStateMachineEditor");
   StringName::StringName((StringName*)&local_a0, (String*)&local_a8, false);
   ThemeDB::bind_class_external_item(uVar2, 0, (StringName*)&local_a0, (StringName*)&local_98, (StringName*)&local_90, (StringName*)local_88, (_Function_base*)local_68);
   if (( StringName::configured != '\0' ) && ( local_a0 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   if (StringName::configured != '\0') {
      if (local_98 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010e5a6;
      }

      if (local_90 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010e5a6;
      }

      if (local_88[0] != 0) {
         StringName::unref();
      }

   }

   LAB_0010e5a6:std::_Function_base::~_Function_base((_Function_base*)local_68);
   uVar2 = ThemeDB::get_singleton();
   for (int i = 0; i < 4; i++) {
      local_68[i] = 0;
   }

   pcStack_58 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#33}>::_M_manager;
   pcStack_50 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#33}>::_M_invoke;
   StringName::StringName((StringName*)local_88, "EditorIcons", false);
   StringName::StringName((StringName*)&local_90, "TransitionImmediateBig", false);
   StringName::StringName((StringName*)&local_98, "transition_icons[0]", false);
   local_a8 = 0;
   String::parse_latin1((String*)&local_a8, "AnimationNodeStateMachineEditor");
   StringName::StringName((StringName*)&local_a0, (String*)&local_a8, false);
   ThemeDB::bind_class_external_item(uVar2, 4, (StringName*)&local_a0, (StringName*)&local_98, (StringName*)&local_90, (StringName*)local_88, (_Function_base*)local_68);
   if (( StringName::configured != '\0' ) && ( local_a0 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   if (StringName::configured != '\0') {
      if (local_98 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010e6ca;
      }

      if (local_90 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010e6ca;
      }

      if (local_88[0] != 0) {
         StringName::unref();
      }

   }

   LAB_0010e6ca:std::_Function_base::~_Function_base((_Function_base*)local_68);
   uVar2 = ThemeDB::get_singleton();
   for (int i = 0; i < 4; i++) {
      local_68[i] = 0;
   }

   pcStack_58 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#34}>::_M_manager;
   pcStack_50 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#34}>::_M_invoke;
   StringName::StringName((StringName*)local_88, "EditorIcons", false);
   StringName::StringName((StringName*)&local_90, "TransitionSyncBig", false);
   StringName::StringName((StringName*)&local_98, "transition_icons[1]", false);
   local_a8 = 0;
   String::parse_latin1((String*)&local_a8, "AnimationNodeStateMachineEditor");
   StringName::StringName((StringName*)&local_a0, (String*)&local_a8, false);
   ThemeDB::bind_class_external_item(uVar2, 4, (StringName*)&local_a0, (StringName*)&local_98, (StringName*)&local_90, (StringName*)local_88, (_Function_base*)local_68);
   if (( StringName::configured != '\0' ) && ( local_a0 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   if (StringName::configured != '\0') {
      if (local_98 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010e7ed;
      }

      if (local_90 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010e7ed;
      }

      if (local_88[0] != 0) {
         StringName::unref();
      }

   }

   LAB_0010e7ed:std::_Function_base::~_Function_base((_Function_base*)local_68);
   uVar2 = ThemeDB::get_singleton();
   for (int i = 0; i < 4; i++) {
      local_68[i] = 0;
   }

   pcStack_58 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#35}>::_M_manager;
   pcStack_50 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#35}>::_M_invoke;
   StringName::StringName((StringName*)local_88, "EditorIcons", false);
   StringName::StringName((StringName*)&local_90, "TransitionEndBig", false);
   StringName::StringName((StringName*)&local_98, "transition_icons[2]", false);
   local_a8 = 0;
   String::parse_latin1((String*)&local_a8, "AnimationNodeStateMachineEditor");
   StringName::StringName((StringName*)&local_a0, (String*)&local_a8, false);
   ThemeDB::bind_class_external_item(uVar2, 4, (StringName*)&local_a0, (StringName*)&local_98, (StringName*)&local_90, (StringName*)local_88, (_Function_base*)local_68);
   if (( StringName::configured != '\0' ) && ( local_a0 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   if (StringName::configured != '\0') {
      if (local_98 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010e910;
      }

      if (local_90 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010e910;
      }

      if (local_88[0] != 0) {
         StringName::unref();
      }

   }

   LAB_0010e910:std::_Function_base::~_Function_base((_Function_base*)local_68);
   uVar2 = ThemeDB::get_singleton();
   for (int i = 0; i < 4; i++) {
      local_68[i] = 0;
   }

   pcStack_58 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#36}>::_M_manager;
   pcStack_50 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#36}>::_M_invoke;
   StringName::StringName((StringName*)local_88, "EditorIcons", false);
   StringName::StringName((StringName*)&local_90, "TransitionImmediateAutoBig", false);
   StringName::StringName((StringName*)&local_98, "transition_icons[3]", false);
   local_a8 = 0;
   String::parse_latin1((String*)&local_a8, "AnimationNodeStateMachineEditor");
   StringName::StringName((StringName*)&local_a0, (String*)&local_a8, false);
   ThemeDB::bind_class_external_item(uVar2, 4, (StringName*)&local_a0, (StringName*)&local_98, (StringName*)&local_90, (StringName*)local_88, (_Function_base*)local_68);
   if (( StringName::configured != '\0' ) && ( local_a0 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   if (StringName::configured != '\0') {
      if (local_98 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010ea34;
      }

      if (local_90 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010ea34;
      }

      if (local_88[0] != 0) {
         StringName::unref();
      }

   }

   LAB_0010ea34:std::_Function_base::~_Function_base((_Function_base*)local_68);
   uVar2 = ThemeDB::get_singleton();
   for (int i = 0; i < 4; i++) {
      local_68[i] = 0;
   }

   pcStack_58 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#37}>::_M_manager;
   pcStack_50 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#37}>::_M_invoke;
   StringName::StringName((StringName*)local_88, "EditorIcons", false);
   StringName::StringName((StringName*)&local_90, "TransitionSyncAutoBig", false);
   StringName::StringName((StringName*)&local_98, "transition_icons[4]", false);
   local_a8 = 0;
   String::parse_latin1((String*)&local_a8, "AnimationNodeStateMachineEditor");
   StringName::StringName((StringName*)&local_a0, (String*)&local_a8, false);
   ThemeDB::bind_class_external_item(uVar2, 4, (StringName*)&local_a0, (StringName*)&local_98, (StringName*)&local_90, (StringName*)local_88, (_Function_base*)local_68);
   if (( StringName::configured != '\0' ) && ( local_a0 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   if (StringName::configured != '\0') {
      if (local_98 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010eb59;
      }

      if (local_90 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010eb59;
      }

      if (local_88[0] != 0) {
         StringName::unref();
      }

   }

   LAB_0010eb59:std::_Function_base::~_Function_base((_Function_base*)local_68);
   uVar2 = ThemeDB::get_singleton();
   for (int i = 0; i < 4; i++) {
      local_68[i] = 0;
   }

   pcStack_58 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#38}>::_M_manager;
   pcStack_50 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#38}>::_M_invoke;
   StringName::StringName((StringName*)local_88, "EditorIcons", false);
   StringName::StringName((StringName*)&local_90, "TransitionEndAutoBig", false);
   StringName::StringName((StringName*)&local_98, "transition_icons[5]", false);
   local_a8 = 0;
   String::parse_latin1((String*)&local_a8, "AnimationNodeStateMachineEditor");
   StringName::StringName((StringName*)&local_a0, (String*)&local_a8, false);
   ThemeDB::bind_class_external_item(uVar2, 4, (StringName*)&local_a0, (StringName*)&local_98, (StringName*)&local_90, (StringName*)local_88, (_Function_base*)local_68);
   if (( StringName::configured != '\0' ) && ( local_a0 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   if (StringName::configured != '\0') {
      if (local_98 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010ec7d;
      }

      if (local_90 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010ec7d;
      }

      if (local_88[0] != 0) {
         StringName::unref();
      }

   }

   LAB_0010ec7d:std::_Function_base::~_Function_base((_Function_base*)local_68);
   uVar2 = ThemeDB::get_singleton();
   for (int i = 0; i < 4; i++) {
      local_68[i] = 0;
   }

   pcStack_58 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#39}>::_M_manager;
   pcStack_50 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#39}>::_M_invoke;
   StringName::StringName((StringName*)local_88, "GraphStateMachine", false);
   StringName::StringName((StringName*)&local_90, "playback_color", false);
   StringName::StringName((StringName*)&local_98, "playback_color", false);
   local_a8 = 0;
   String::parse_latin1((String*)&local_a8, "AnimationNodeStateMachineEditor");
   StringName::StringName((StringName*)&local_a0, (String*)&local_a8, false);
   ThemeDB::bind_class_external_item(uVar2, 0, (StringName*)&local_a0, (StringName*)&local_98, (StringName*)&local_90, (StringName*)local_88, (_Function_base*)local_68);
   if (( StringName::configured != '\0' ) && ( local_a0 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   if (StringName::configured != '\0') {
      if (local_98 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010ed9d;
      }

      if (local_90 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010ed9d;
      }

      if (local_88[0] != 0) {
         StringName::unref();
      }

   }

   LAB_0010ed9d:std::_Function_base::~_Function_base((_Function_base*)local_68);
   uVar2 = ThemeDB::get_singleton();
   for (int i = 0; i < 4; i++) {
      local_68[i] = 0;
   }

   pcStack_58 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#40}>::_M_manager;
   pcStack_50 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#40}>::_M_invoke;
   StringName::StringName((StringName*)local_88, "GraphStateMachine", false);
   StringName::StringName((StringName*)&local_90, "playback_background_color", false);
   StringName::StringName((StringName*)&local_98, "playback_background_color", false);
   local_a8 = 0;
   String::parse_latin1((String*)&local_a8, "AnimationNodeStateMachineEditor");
   StringName::StringName((StringName*)&local_a0, (String*)&local_a8, false);
   ThemeDB::bind_class_external_item(uVar2, 0, (StringName*)&local_a0, (StringName*)&local_98, (StringName*)&local_90, (StringName*)local_88, (_Function_base*)local_68);
   if (( StringName::configured != '\0' ) && ( local_a0 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   if (StringName::configured != '\0') {
      if (local_98 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010eebd;
      }

      if (local_90 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010eebd;
      }

      if (local_88[0] != 0) {
         StringName::unref();
      }

   }

   LAB_0010eebd:std::_Function_base::~_Function_base((_Function_base*)local_68);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AnimationNodeStateMachineEditor::_notification(int) */void AnimationNodeStateMachineEditor::_notification(AnimationNodeStateMachineEditor *this, int param_1) {
   long *plVar1;
   bool *pbVar2;
   Ref *pRVar3;
   Ref *pRVar4;
   code *pcVar5;
   StringName *pSVar6;
   char cVar7;
   bool bVar8;
   AnimationNodeStateMachineEditor AVar9;
   int iVar10;
   long lVar11;
   long lVar12;
   int iVar13;
   int iVar14;
   long lVar15;
   long lVar16;
   long in_FS_OFFSET;
   undefined4 uVar17;
   double dVar18;
   String *local_128;
   Ref<AnimationNodeStateMachinePlayback> *local_f8;
   CowData<StringName> *local_e8;
   Ref *local_d0;
   long local_c8;
   Ref *local_c0;
   Ref *local_b8;
   undefined8 local_b0;
   StringName *local_a8;
   undefined8 local_a0;
   undefined8 local_98;
   long local_90;
   long local_88;
   long local_80;
   long local_78;
   long local_70;
   Ref *local_68;
   long local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 == 0x1f) {
      if (*(long*)( this + 0xdb8 ) != 0) {
         StringName::unref();
         *(undefined8*)( this + 0xdb8 ) = 0;
      }

      *(undefined4*)( this + 0xdc0 ) = 0xffffffff;
      CanvasItem::is_visible_in_tree();
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         Node::set_process(SUB81(this, 0));
         return;
      }

      goto LAB_001104eb;
   }

   if (param_1 == 0x2d) {
      Control::add_theme_style_override(*(StringName**)( this + 0xa78 ), (Ref*)( SceneStringNames::singleton + 600 ));
      Control::add_theme_style_override(*(StringName**)( this + 0xad0 ), (Ref*)( SceneStringNames::singleton + 600 ));
      Control::add_theme_color_override(*(StringName**)( this + 0xad8 ), (Color*)( SceneStringNames::singleton + 0xb0 ));
      for (int i = 0; i < 3; i++) {
         Button::set_button_icon(*(Ref**)( this + ( 8*i + 2592 ) ));
      }

      OptionButton::clear();
      pRVar3 = *(Ref**)( this + 0xa60 );
      local_78 = 0;
      String::parse_latin1((String*)&local_78, "");
      local_80 = 0;
      String::parse_latin1((String*)&local_80, "Immediate");
      TTR((String*)&local_68, (String*)&local_80);
      iVar13 = (int)(String*)&local_68;
      OptionButton::add_icon_item(pRVar3, (String*)( this + 0xb20 ), iVar13);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      pRVar3 = *(Ref**)( this + 0xa60 );
      local_78 = 0;
      String::parse_latin1((String*)&local_78, "");
      local_80 = 0;
      String::parse_latin1((String*)&local_80, "Sync");
      TTR((String*)&local_68, (String*)&local_80);
      OptionButton::add_icon_item(pRVar3, (String*)( this + 0xb28 ), iVar13);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      pRVar3 = *(Ref**)( this + 0xa60 );
      local_78 = 0;
      String::parse_latin1((String*)&local_78, "");
      local_80 = 0;
      String::parse_latin1((String*)&local_80, "At End");
      TTR((String*)&local_68, (String*)&local_80);
      OptionButton::add_icon_item(pRVar3, (String*)( this + 0xb30 ), iVar13);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      Button::set_button_icon(*(Ref**)( this + 0xa68 ));
      Button::set_button_icon(*(Ref**)( this + 0xa50 ));
      OptionButton::clear();
      pRVar3 = *(Ref**)( this + 0xa70 );
      local_78 = 0;
      String::parse_latin1((String*)&local_78, "");
      local_80 = 0;
      String::parse_latin1((String*)&local_80, "Travel");
      TTR((String*)&local_68, (String*)&local_80);
      OptionButton::add_icon_item(pRVar3, (String*)( this + 0xb40 ), iVar13);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      pRVar3 = *(Ref**)( this + 0xa70 );
      local_78 = 0;
      String::parse_latin1((String*)&local_78, "");
      local_80 = 0;
      String::parse_latin1((String*)&local_80, "Immediate");
      TTR((String*)&local_68, (String*)&local_80);
      OptionButton::add_icon_item(pRVar3, (String*)( this + 0xb38 ), iVar13);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   }
 else if (( param_1 == 0x11 ) && ( pbVar2 = *(bool**)( AnimationTreeEditor::singleton + 0xa20 ) ),pbVar2 != (bool*)0x0) {
      local_d0 = (Ref*)0x0;
      local_80 = 0;
      String::parse_latin1((String*)&local_80, "playback");
      AnimationTreeEditor::get_base_path();
      String::operator +((String*)&local_78, (String*)&local_88);
      StringName::StringName((StringName*)&local_68, (String*)&local_78, false);
      Object::get((StringName*)local_58, pbVar2);
      local_c8 = 0;
      Ref<AnimationNodeStateMachinePlayback>::operator =((Ref<AnimationNodeStateMachinePlayback>*)&local_c8, (Variant*)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (( StringName::configured != '\0' ) && ( local_68 != (Ref*)0x0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      if (*(float*)( this + 0xe20 ) <= 0.0) {
         cVar7 = AnimationMixer::is_active();
         if (cVar7 == '\0') {
            local_78 = 0;
            String::parse_latin1((String*)&local_78, "");
            local_80 = 0;
            String::parse_latin1((String*)&local_80, "AnimationTree is inactive.\nActivate to enable playback, check node warnings if activation fails.");
            TTR((String*)&local_68, (String*)&local_80);
            if (local_d0 != local_68) {
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
               local_d0 = local_68;
               local_68 = (Ref*)0x0;
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
         }
 else {
            cVar7 = AnimationTree::is_state_invalid();
            if (cVar7 == '\0') {
               if (local_c8 == 0) {
                  local_80 = 0;
                  String::parse_latin1((String*)&local_80, "playback");
                  AnimationTreeEditor::get_base_path();
                  String::operator +((String*)&local_78, (String*)&local_88);
                  local_98 = 0;
                  String::parse_latin1((String*)&local_98, "");
                  local_a0 = 0;
                  String::parse_latin1((String*)&local_a0, "No playback resource set at path: %s.");
                  TTR((String*)&local_90, (String*)&local_a0);
                  vformat<String>((StringName*)&local_68, (String*)&local_90, (String*)&local_78);
                  if (local_d0 != local_68) {
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
                     local_d0 = local_68;
                     local_68 = (Ref*)0x0;
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
               }

            }
 else {
               AnimationTree::get_invalid_state_reason();
               if (local_d0 != local_68) {
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
                  local_d0 = local_68;
                  local_68 = (Ref*)0x0;
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
            }

         }

      }
 else {
         if (local_d0 != *(Ref**)( this + 0xe28 )) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_d0, (CowData*)( this + 0xe28 ));
         }

         dVar18 = (double)Node::get_process_delta_time();
         *(float*)( this + 0xe20 ) = (float)( (double)*(float*)( this + 0xe20 ) - dVar18 );
      }

      local_128 = (String*)&local_d0;
      Label::get_text();
      cVar7 = String::operator !=(local_128, (String*)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
      if (cVar7 != '\0') {
         Label::set_text(*(String**)( this + 0xad8 ));
         if (( local_d0 == (Ref*)0x0 ) || ( *(uint*)( local_d0 + -8 ) < 2 )) {
            CanvasItem::hide();
         }
 else {
            CanvasItem::show();
         }

      }

      if (*(long*)( this + 0xd98 ) != 0) {
         lVar16 = 0;
         lVar11 = *(long*)( *(long*)( this + 0xd98 ) + -8 );
         LAB_0010f131:if (lVar16 < lVar11) {
            iVar13 = 0;
            lVar15 = lVar16 * 0x50;
            do {
               iVar10 = AnimationNodeStateMachine::get_transition_count();
               if (iVar10 <= iVar13) goto LAB_0010f9f0;
               iVar10 = (int)(String*)&local_78;
               AnimationNodeStateMachine::get_transition_from(iVar10);
               lVar12 = *(long*)( this + 0xd98 );
               if (lVar12 == 0) goto LAB_0010f630;
               lVar11 = *(long*)( lVar12 + -8 );
               if (lVar11 <= lVar16) goto LAB_0010f636;
               if (local_78 == *(long*)( lVar12 + lVar15 )) {
                  iVar14 = (int)(StringName*)&local_68;
                  AnimationNodeStateMachine::get_transition_to(iVar14);
                  lVar12 = *(long*)( this + 0xd98 );
                  if (lVar12 == 0) goto LAB_0010f630;
                  lVar11 = *(long*)( lVar12 + -8 );
                  if (lVar11 <= lVar16) goto LAB_0010f636;
                  if (local_68 == *(Ref**)( lVar12 + 8 + lVar15 )) goto LAB_0010f6d0;
                  if (StringName::configured != '\0') {
                     if (local_68 != (Ref*)0x0) {
                        StringName::unref();
                        goto joined_r0x0010f157;
                     }

                     goto joined_r0x0010f15c;
                  }

               }
 else {
                  joined_r0x0010f157:if (StringName::configured != '\0') {
                     joined_r0x0010f15c:if (local_78 != 0) {
                        StringName::unref();
                     }

                  }

               }

               iVar13 = iVar13 + 1;
            }
 while ( true );
         }

      }

      goto LAB_0010f9ff;
   }

   goto LAB_0010f58d;
   LAB_0010f6d0:if (StringName::configured == '\0') {
      LAB_0010f70d:lVar11 = *(long*)( lVar12 + -8 );
      if (lVar11 <= lVar16) goto LAB_0010f636;
      cVar7 = *(char*)( lVar12 + 0x31 + lVar15 );
      AnimationNodeStateMachine::get_transition(iVar14);
      iVar13 = AnimationNodeStateMachineTransition::get_advance_mode();
      Ref<AnimationNodeStateMachineTransition>::unref((Ref<AnimationNodeStateMachineTransition>*)&local_68);
      if ((bool)cVar7 != ( iVar13 == 0 )) goto LAB_0010f9f0;
      lVar12 = *(long*)( this + 0xd98 );
      if (lVar12 != 0) {
         lVar11 = *(long*)( lVar12 + -8 );
         if (lVar11 <= lVar16) goto LAB_0010f636;
         cVar7 = *(char*)( lVar12 + 0x32 + lVar15 );
         AnimationNodeStateMachine::get_transition(iVar14);
         iVar13 = AnimationNodeStateMachineTransition::get_advance_mode();
         Ref<AnimationNodeStateMachineTransition>::unref((Ref<AnimationNodeStateMachineTransition>*)&local_68);
         if ((bool)cVar7 != ( iVar13 == 2 )) goto LAB_0010f9f0;
         AnimationNodeStateMachine::get_transition(iVar10);
         AnimationNodeStateMachineTransition::get_advance_condition_name();
         pRVar3 = local_68;
         lVar12 = *(long*)( this + 0xd98 );
         if (lVar12 != 0) {
            lVar11 = *(long*)( lVar12 + -8 );
            if (lVar11 <= lVar16) goto LAB_0010f636;
            pRVar4 = *(Ref**)( lVar12 + 0x28 + lVar15 );
            if (( StringName::configured != '\0' ) && ( local_68 != (Ref*)0x0 )) {
               StringName::unref();
            }

            Ref<AnimationNodeStateMachineTransition>::unref((Ref<AnimationNodeStateMachineTransition>*)&local_78);
            if (pRVar4 != pRVar3) goto LAB_0010f9f0;
            lVar12 = *(long*)( this + 0xd98 );
            if (lVar12 != 0) {
               lVar11 = *(long*)( lVar12 + -8 );
               if (lVar11 <= lVar16) goto LAB_0010f636;
               iVar13 = *(int*)( lVar12 + 0x20 + lVar15 );
               AnimationNodeStateMachine::get_transition(iVar14);
               iVar10 = AnimationNodeStateMachineTransition::get_switch_mode();
               Ref<AnimationNodeStateMachineTransition>::unref((Ref<AnimationNodeStateMachineTransition>*)&local_68);
               if (iVar13 != iVar10) goto LAB_0010f9f0;
               lVar12 = *(long*)( this + 0xd98 );
               local_90 = 0;
               if (lVar12 != 0) {
                  lVar11 = *(long*)( lVar12 + -8 );
                  if (lVar11 <= lVar16) goto LAB_0010f636;
                  lVar11 = *(long*)( lVar12 + 0x28 + lVar15 );
                  bVar8 = false;
                  if (lVar11 != 0) {
                     local_80 = 0;
                     if (*(char**)( lVar11 + 8 ) == (char*)0x0) {
                        if (*(long*)( lVar11 + 0x10 ) != 0) {
                           CowData<char32_t>::_ref((CowData<char32_t>*)&local_80, (CowData*)( lVar11 + 0x10 ));
                        }

                     }
 else {
                        String::parse_latin1((String*)&local_80, *(char**)( lVar11 + 8 ));
                     }

                     AnimationTreeEditor::get_base_path();
                     String::operator +((String*)&local_78, (String*)&local_88);
                     StringName::StringName((StringName*)&local_68, (String*)&local_78, false);
                     Object::get((StringName*)local_58, pbVar2);
                     bVar8 = Variant::operator_cast_to_bool((Variant*)local_58);
                     if (Variant::needs_deinit[local_58[0]] != '\0') {
                        Variant::_clear_internal();
                     }

                     if (( StringName::configured != '\0' ) && ( local_68 != (Ref*)0x0 )) {
                        StringName::unref();
                     }

                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
                  }

                  if (( StringName::configured != '\0' ) && ( local_90 != 0 )) {
                     StringName::unref();
                  }

                  lVar12 = *(long*)( this + 0xd98 );
                  if (lVar12 != 0) {
                     lVar11 = *(long*)( lVar12 + -8 );
                     if (lVar16 < lVar11) {
                        lVar16 = lVar16 + 1;
                        if ((bool)*(char*)( lVar12 + 0x30 + lVar15 ) != bVar8) goto LAB_0010f9f0;
                        goto LAB_0010f131;
                     }

                     goto LAB_0010f636;
                  }

               }

            }

         }

      }

   }
 else {
      if (( ( local_68 == (Ref*)0x0 ) || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_78 != 0 )) {
         StringName::unref();
      }

      lVar12 = *(long*)( this + 0xd98 );
      if (lVar12 != 0) goto LAB_0010f70d;
   }

   LAB_0010f630:lVar11 = 0;
   LAB_0010f636:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar16, lVar11, "p_index", "size()", "", false, true);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar5 = (code*)invalidInstructionException();
   ( *pcVar5 )();
   LAB_0010f9f0:CanvasItem::queue_redraw();
   LAB_0010f9ff:local_c0 = (Ref*)0x0;
   local_70 = 0;
   local_b8 = (Ref*)0x0;
   *(undefined8*)( this + 0xe08 ) = 0;
   *(undefined8*)( this + 0xdfc ) = 0;
   *(undefined8*)( this + 0xe18 ) = 0;
   if (local_c8 == 0) {
      lVar11 = *(long*)( this + 0xdf0 );
      AVar9 = (AnimationNodeStateMachineEditor)0x0;
      if (lVar11 != 0) {
         lVar16 = *(long*)( lVar11 + -8 );
         AVar9 = (AnimationNodeStateMachineEditor)0x0;
         LAB_001104db:lVar11 = 0;
         if (lVar16 == 0) goto LAB_0010ffea;
         LAB_0010fff7:CanvasItem::queue_redraw();
         if (( *(long*)( this + 0xdf0 ) != lVar11 ) && ( CowData<StringName>::_unref((CowData<StringName>*)( this + 0xdf0 )),lVar11 != 0 )) goto LAB_0010fbd1;
         goto LAB_0010fbfd;
      }

      LAB_0010ffea:if (( ( ( this[0xdd0] != AVar9 ) || ( *(Ref**)( this + 0xde0 ) != local_c0 ) ) || ( *(Ref**)( this + 0xdd8 ) != local_b8 ) ) || ( ( *(float*)( this + 0xe10 ) != *(float*)( this + 0xe18 ) || ( *(float*)( this + 0xe14 ) != *(float*)( this + 0xe1c ) ) ) )) goto LAB_0010fff7;
   }
 else {
      AnimationNodeStateMachinePlayback::get_travel_path();
      lVar11 = local_60;
      if (local_60 != 0) {
         CowData<StringName>::_unref((CowData<StringName>*)&local_70);
         lVar11 = local_60;
         local_60 = 0;
         local_70 = lVar11;
      }

      CowData<StringName>::_unref((CowData<StringName>*)&local_60);
      AVar9 = (AnimationNodeStateMachineEditor)AnimationNodeStateMachinePlayback::is_playing();
      AnimationNodeStateMachinePlayback::get_current_node();
      if (local_c0 == local_68) {
         if (( StringName::configured != '\0' ) && ( local_68 != (Ref*)0x0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_c0 = local_68;
      }

      AnimationNodeStateMachinePlayback::get_fading_from_node();
      if (local_b8 == local_68) {
         if (( StringName::configured != '\0' ) && ( local_68 != (Ref*)0x0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_b8 = local_68;
      }

      uVar17 = AnimationNodeStateMachinePlayback::get_current_play_pos();
      *(undefined4*)( this + 0xe08 ) = uVar17;
      uVar17 = AnimationNodeStateMachinePlayback::get_current_length();
      *(undefined4*)( this + 0xe0c ) = uVar17;
      uVar17 = AnimationNodeStateMachinePlayback::get_fade_from_play_pos();
      *(undefined4*)( this + 0xdfc ) = uVar17;
      uVar17 = AnimationNodeStateMachinePlayback::get_fade_from_length();
      *(undefined4*)( this + 0xe00 ) = uVar17;
      uVar17 = AnimationNodeStateMachinePlayback::get_fading_time();
      *(undefined4*)( this + 0xe18 ) = uVar17;
      uVar17 = AnimationNodeStateMachinePlayback::get_fading_pos();
      lVar15 = *(long*)( this + 0xdf0 );
      *(undefined4*)( this + 0xe1c ) = uVar17;
      if (lVar15 == 0) {
         if (( lVar11 == 0 ) || ( *(long*)( lVar11 + -8 ) == 0 )) goto LAB_0010ffea;
      }
 else {
         lVar16 = *(long*)( lVar15 + -8 );
         if (lVar11 == 0) goto LAB_001104db;
         if (*(long*)( lVar11 + -8 ) == lVar16) {
            if (0 < lVar16) {
               lVar12 = 0;
               do {
                  if (*(long*)( lVar15 + lVar12 * 8 ) != *(long*)( lVar11 + lVar12 * 8 )) goto LAB_0010fbb0;
                  lVar12 = lVar12 + 1;
               }
 while ( lVar12 != lVar16 );
            }

            goto LAB_0010ffea;
         }

      }

      LAB_0010fbb0:CanvasItem::queue_redraw();
      if (lVar11 != *(long*)( this + 0xdf0 )) {
         CowData<StringName>::_unref((CowData<StringName>*)( this + 0xdf0 ));
         LAB_0010fbd1:plVar1 = (long*)( lVar11 + -0x10 );
         do {
            lVar11 = *plVar1;
            if (lVar11 == 0) goto LAB_0010fbfd;
            LOCK();
            lVar16 = *plVar1;
            bVar8 = lVar11 == lVar16;
            if (bVar8) {
               *plVar1 = lVar11 + 1;
               lVar16 = lVar11;
            }

            UNLOCK();
         }
 while ( !bVar8 );
         if (lVar16 != -1) {
            *(long*)( this + 0xdf0 ) = local_70;
         }

      }

      LAB_0010fbfd:StringName::operator =((StringName*)( this + 0xde0 ), (StringName*)&local_c0);
      this[0xdd0] = AVar9;
      StringName::operator =((StringName*)( this + 0xdd8 ), (StringName*)&local_b8);
      *(undefined8*)( this + 0xe10 ) = *(undefined8*)( this + 0xe18 );
      CanvasItem::queue_redraw();
   }

   local_e8 = (CowData<StringName>*)&local_70;
   local_68 = (Ref*)0x0;
   if (local_c0 != (Ref*)0x0) {
      cVar7 = AnimationNodeStateMachine::has_node(*(StringName**)( this + 0xa10 ));
      if (cVar7 == '\0') {
         if (( StringName::configured != '\0' ) && ( local_68 != (Ref*)0x0 )) {
            StringName::unref();
         }

      }
 else {
         if (( StringName::configured != '\0' ) && ( local_68 != (Ref*)0x0 )) {
            StringName::unref();
         }

         if (local_c0 == (Ref*)0x0) {
            LAB_0011043c:local_b0 = 0;
         }
 else {
            local_b0 = 0;
            if (*(char**)( local_c0 + 8 ) == (char*)0x0) {
               if (*(long*)( local_c0 + 0x10 ) == 0) goto LAB_0011043c;
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_b0, (CowData*)( local_c0 + 0x10 ));
            }
 else {
               String::parse_latin1((String*)&local_b0, *(char**)( local_c0 + 8 ));
            }

         }

         StringName::StringName((StringName*)&local_80, (String*)&local_b0, false);
         AnimationNodeStateMachine::get_node((StringName*)&local_68);
         local_a8 = (StringName*)0x0;
         Ref<AnimationNodeStateMachine>::operator =((Ref<AnimationNodeStateMachine>*)&local_a8, local_68);
         Ref<AnimationNode>::unref((Ref<AnimationNode>*)&local_68);
         if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
            StringName::unref();
         }

         local_a0 = 0;
         if (local_a8 != (StringName*)0x0) {
            do {
               pSVar6 = local_a8;
               local_88 = 0;
               String::parse_latin1((String*)&local_88, "/playback");
               AnimationTreeEditor::get_base_path();
               String::operator +((String*)&local_90, (String*)&local_98);
               String::operator +((String*)&local_80, (String*)&local_90);
               StringName::StringName((StringName*)&local_68, (String*)&local_80, false);
               Object::get((StringName*)local_58, pbVar2);
               Ref<AnimationNodeStateMachinePlayback>::operator =((Ref<AnimationNodeStateMachinePlayback>*)&local_a0, (Variant*)local_58);
               if (Variant::needs_deinit[local_58[0]] != '\0') {
                  Variant::_clear_internal();
               }

               if (( StringName::configured != '\0' ) && ( local_68 != (Ref*)0x0 )) {
                  StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
               AnimationNodeStateMachinePlayback::get_current_node();
               if (local_88 == 0) {
                  local_80 = 0;
               }
 else {
                  local_80 = 0;
                  if (*(char**)( local_88 + 8 ) == (char*)0x0) {
                     if (*(long*)( local_88 + 0x10 ) != 0) {
                        CowData<char32_t>::_ref((CowData<char32_t>*)&local_80, (CowData*)( local_88 + 0x10 ));
                     }

                  }
 else {
                     String::parse_latin1((String*)&local_80, *(char**)( local_88 + 8 ));
                  }

               }

               operator+((char *)&
               local_68,(String*)&_LC165;
               String::operator +=((String*)&local_b0, (String*)&local_68);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
               cVar7 = AnimationNodeStateMachine::has_node(pSVar6);
               if (cVar7 == '\0') {
                  if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
                     StringName::unref();
                  }

                  break;
               }

               AnimationNodeStateMachine::get_node((StringName*)&local_68);
               Ref<AnimationNodeStateMachine>::operator =((Ref<AnimationNodeStateMachine>*)&local_a8, local_68);
               Ref<AnimationNode>::unref((Ref<AnimationNode>*)&local_68);
               if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
                  StringName::unref();
               }

            }
 while ( local_a8 != (StringName*)0x0 );
            uVar17 = AnimationNodeStateMachinePlayback::get_current_play_pos();
            *(undefined4*)( this + 0xe08 ) = uVar17;
            uVar17 = AnimationNodeStateMachinePlayback::get_current_length();
            *(undefined4*)( this + 0xe0c ) = uVar17;
         }

         local_f8 = (Ref<AnimationNodeStateMachinePlayback>*)&local_a0;
         Ref<AnimationNodeStateMachinePlayback>::unref(local_f8);
         Ref<AnimationNodeStateMachine>::unref((Ref<AnimationNodeStateMachine>*)&local_a8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
      }

   }

   if (( *(float*)( this + 0xe08 ) != *(float*)( this + 0xe04 ) ) || ( *(float*)( this + 0xdfc ) != *(float*)( this + 0xdf8 ) )) {
      *(float*)( this + 0xe04 ) = *(float*)( this + 0xe08 );
      *(float*)( this + 0xdf8 ) = *(float*)( this + 0xdfc );
      CanvasItem::queue_redraw();
   }

   if (( StringName::configured != '\0' ) && ( ( ( local_b8 == (Ref*)0x0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_c0 != (Ref*)0x0 ) ) )) {
      StringName::unref();
   }

   CowData<StringName>::_unref(local_e8);
   Ref<AnimationNodeStateMachinePlayback>::unref((Ref<AnimationNodeStateMachinePlayback>*)&local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_128);
   LAB_0010f58d:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_001104eb:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* CowData<StringName>::_copy_on_write() [clone .isra.0] */void CowData<StringName>::_copy_on_write(CowData<StringName> *this) {
   long lVar1;
   long lVar2;
   code *pcVar3;
   undefined8 *puVar4;
   long lVar5;
   ulong uVar6;
   StringName *this_00;
   if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
      return;
   }

   if (*(long*)this == 0) {
      /* WARNING: Does not return */
      pcVar3 = (code*)invalidInstructionException();
      ( *pcVar3 )();
   }

   lVar2 = *(long*)( *(long*)this + -8 );
   uVar6 = 0x10;
   if (lVar2 * 8 != 0) {
      uVar6 = lVar2 * 8 - 1;
      uVar6 = uVar6 | uVar6 >> 1;
      uVar6 = uVar6 | uVar6 >> 2;
      uVar6 = uVar6 | uVar6 >> 4;
      uVar6 = uVar6 | uVar6 >> 8;
      uVar6 = uVar6 | uVar6 >> 0x10;
      uVar6 = ( uVar6 | uVar6 >> 0x20 ) + 0x11;
   }

   puVar4 = (undefined8*)Memory::alloc_static(uVar6, false);
   if (puVar4 != (undefined8*)0x0) {
      lVar5 = 0;
      *puVar4 = 1;
      puVar4[1] = lVar2;
      this_00 = (StringName*)( puVar4 + 2 );
      if (lVar2 != 0) {
         do {
            lVar1 = lVar5 * 8;
            lVar5 = lVar5 + 1;
            StringName::StringName(this_00, (StringName*)( *(long*)this + lVar1 ));
            this_00 = this_00 + 8;
         }
 while ( lVar2 != lVar5 );
      }

      _unref(this);
      *(StringName**)this = (StringName*)( puVar4 + 2 );
      return;
   }

   _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
   return;
}
/* AnimationNodeStateMachineEditor::_update_connected_nodes(StringName const&) */void AnimationNodeStateMachineEditor::_update_connected_nodes(AnimationNodeStateMachineEditor *this, StringName *param_1) {
   long lVar1;
   long lVar2;
   long in_FS_OFFSET;
   StringName local_78[8];
   long local_70;
   StringName local_68[8];
   long local_60;
   StringName local_58[24];
   long local_40;
   lVar2 = *(long*)( this + 0xe40 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( lVar2 != 0 ) && ( *(int*)( this + 0xe64 ) != 0 )) {
      if (( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0xe60 ) * 4 ) == 0 ) || ( memset(*(void**)( this + 0xe58 ), 0, ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0xe60 ) * 4 ) << 2),*(int*)( this + 0xe64 ) != 0 )) {
         lVar1 = 0;
         while (true) {
            if (( StringName::configured != '\0' ) && ( *(long*)( lVar2 + lVar1 * 8 ) != 0 )) {
               StringName::unref();
            }

            lVar1 = lVar1 + 1;
            if (*(uint*)( this + 0xe64 ) <= (uint)lVar1) break;
            lVar2 = *(long*)( this + 0xe40 );
         }
;
      }

      *(undefined4*)( this + 0xe64 ) = 0;
   }

   if (*(long*)param_1 != 0) {
      HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert(local_58);
      AnimationNodeStateMachine::get_nodes_with_transitions_to(local_78);
      CowData<StringName>::_copy_on_write((CowData<StringName>*)&local_70);
      lVar2 = local_70;
      CowData<StringName>::_copy_on_write((CowData<StringName>*)&local_70);
      if (local_70 != 0) {
         local_70 = local_70 + *(long*)( local_70 + -8 ) * 8;
      }

      for (; lVar2 != local_70; lVar2 = lVar2 + 8) {
         HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert(local_58);
      }

      AnimationNodeStateMachine::get_nodes_with_transitions_from(local_68);
      CowData<StringName>::_copy_on_write((CowData<StringName>*)&local_60);
      lVar2 = local_60;
      CowData<StringName>::_copy_on_write((CowData<StringName>*)&local_60);
      if (local_60 != 0) {
         local_60 = local_60 + *(long*)( local_60 + -8 ) * 8;
      }

      for (; lVar2 != local_60; lVar2 = lVar2 + 8) {
         HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert(local_58);
      }

      CowData<StringName>::_unref((CowData<StringName>*)&local_60);
      CowData<StringName>::_unref((CowData<StringName>*)&local_70);
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Vector<String>::push_back(String) [clone .isra.0] */void Vector<String>::push_back(Vector<String> *this, CowData *param_2) {
   CowData<char32_t> *this_00;
   int iVar1;
   long lVar2;
   long lVar3;
   if (*(long*)( this + 8 ) == 0) {
      lVar2 = 1;
   }
 else {
      lVar2 = *(long*)( *(long*)( this + 8 ) + -8 ) + 1;
   }

   iVar1 = CowData<String>::resize<false>((CowData<String>*)( this + 8 ), lVar2);
   if (iVar1 == 0) {
      if (*(long*)( this + 8 ) == 0) {
         lVar3 = -1;
         lVar2 = 0;
      }
 else {
         lVar2 = *(long*)( *(long*)( this + 8 ) + -8 );
         lVar3 = lVar2 + -1;
         if (-1 < lVar3) {
            CowData<String>::_copy_on_write((CowData<String>*)( this + 8 ));
            this_00 = (CowData<char32_t>*)( *(long*)( this + 8 ) + lVar3 * 8 );
            if (*(long*)this_00 == *(long*)param_2) {
               return;
            }

            CowData<char32_t>::_ref(this_00, param_2);
            return;
         }

      }

      _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar3, lVar2, "p_index", "size()", "", false, false);
      return;
   }

   _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
   return;
}
/* AnimationNodeStateMachineEditor::_open_menu(Vector2 const&) */void AnimationNodeStateMachineEditor::_open_menu(AnimationNodeStateMachineEditor *this, Vector2 *param_1) {
   List *pLVar1;
   String *pSVar2;
   long *plVar3;
   char *pcVar4;
   Vector2i *pVVar5;
   Object *pOVar6;
   bool bVar7;
   char cVar8;
   uint uVar9;
   long lVar10;
   Object *pOVar11;
   int iVar12;
   StringName *pSVar13;
   long in_FS_OFFSET;
   undefined4 uVar14;
   undefined8 uVar15;
   float fVar16;
   float fVar19;
   undefined1 auVar17[16];
   undefined1 auVar18[16];
   undefined8 *local_f0;
   undefined8 *local_b0;
   long *local_a8;
   long local_a0;
   undefined8 local_98;
   undefined8 local_90;
   undefined8 local_88;
   undefined8 local_80;
   char *local_78;
   size_t local_70;
   undefined8 local_68;
   undefined8 local_60;
   undefined8 local_58;
   undefined8 local_50;
   undefined8 local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   pLVar1 = *(List**)( AnimationTreeEditor::singleton + 0xa20 );
   if (pLVar1 == (List*)0x0) goto LAB_00110e79;
   PopupMenu::clear(SUB81(*(undefined8*)( this + 0xc88 ), 0));
   PopupMenu::clear(SUB81(*(undefined8*)( this + 0xca8 ), 0));
   CowData<String>::resize<false>((CowData<String>*)( this + 0xcb8 ), 0);
   local_b0 = (undefined8*)0x0;
   AnimationMixer::get_animation_list(pLVar1);
   local_78 = "";
   pSVar2 = *(String**)( this + 0xc88 );
   local_80 = 0;
   uVar15 = *(undefined8*)( this + 0xca8 );
   local_70 = 0;
   String::parse_latin1((StrRange*)&local_80);
   local_88 = 0;
   local_78 = "Add Animation";
   local_70 = 0xd;
   String::parse_latin1((StrRange*)&local_88);
   TTR((String*)&local_78, (String*)&local_88);
   PopupMenu::add_submenu_node_item(pSVar2, (PopupMenu*)&local_78, (int)uVar15);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   if (( local_b0 == (undefined8*)0x0 ) || ( *(int*)( local_b0 + 2 ) == 0 )) {
      pSVar2 = *(String**)( this + 0xc88 );
      local_78 = "";
      local_80 = 0;
      local_70 = 0;
      String::parse_latin1((StrRange*)&local_80);
      local_88 = 0;
      local_78 = "Add Animation";
      local_70 = 0xd;
      String::parse_latin1((StrRange*)&local_88);
      TTR((String*)&local_78, (String*)&local_88);
      bVar7 = (bool)PopupMenu::get_item_idx_from_text(pSVar2);
      PopupMenu::set_item_disabled((int)pSVar2, bVar7);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   }
 else {
      for (plVar3 = (long*)*local_b0; plVar3 != (long*)0x0; plVar3 = (long*)plVar3[1]) {
         lVar10 = *plVar3;
         uVar15 = *(undefined8*)( this + 0xca8 );
         if (lVar10 == 0) {
            local_80 = 0;
         }
 else {
            pcVar4 = *(char**)( lVar10 + 8 );
            local_80 = 0;
            if (pcVar4 == (char*)0x0) {
               if (*(long*)( lVar10 + 0x10 ) != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_80, (CowData*)( lVar10 + 0x10 ));
               }

            }
 else {
               local_70 = strlen(pcVar4);
               local_78 = pcVar4;
               String::parse_latin1((StrRange*)&local_80);
            }

         }

         PopupMenu::add_icon_item(uVar15, this + 0xb50, (StrRange*)&local_80, 0xffffffff, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
         lVar10 = *plVar3;
         if (lVar10 == 0) {
            local_80 = 0;
         }
 else {
            pcVar4 = *(char**)( lVar10 + 8 );
            local_80 = 0;
            if (pcVar4 == (char*)0x0) {
               if (*(long*)( lVar10 + 0x10 ) != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_80, (CowData*)( lVar10 + 0x10 ));
               }

            }
 else {
               local_70 = strlen(pcVar4);
               local_78 = pcVar4;
               String::parse_latin1((StrRange*)&local_80);
            }

         }

         Vector<String>::push_back((Vector<String>*)( this + 0xcb0 ), (StrRange*)&local_80);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      }

   }

   local_a8 = (long*)0x0;
   StringName::StringName((StringName*)&local_78, "AnimationRootNode", false);
   ClassDB::get_inheriters_from_class((StringName*)&local_78, (List*)&local_a8);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   List<StringName,DefaultAllocator>::sort_custom<StringName::AlphCompare>((List<StringName,DefaultAllocator>*)&local_a8);
   if (( local_a8 != (long*)0x0 ) && ( pSVar13 = (StringName*)*local_a8 ),pSVar13 != (StringName*)0x0) {
      do {
         lVar10 = *(long*)pSVar13;
         if (lVar10 == 0) {
            local_80 = 0;
         }
 else {
            pcVar4 = *(char**)( lVar10 + 8 );
            local_80 = 0;
            if (pcVar4 == (char*)0x0) {
               if (*(long*)( lVar10 + 0x10 ) != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_80, (CowData*)( lVar10 + 0x10 ));
               }

            }
 else {
               local_70 = strlen(pcVar4);
               local_78 = pcVar4;
               String::parse_latin1((StrRange*)&local_80);
            }

         }

         String::replace_first((char*)&local_a0, (char*)&local_80);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
         cVar8 = String::operator ==((String*)&local_a0, "Animation");
         if (( ( cVar8 == '\0' ) && ( cVar8 = String::operator ==((String*)&local_a0, "StartState") ),cVar8 == '\0' )) {
            uVar9 = PopupMenu::get_item_count();
            local_80 = 0;
            uVar15 = *(undefined8*)( this + 0xc88 );
            if (local_a0 != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_80, (CowData*)&local_a0);
            }

            local_90 = 0;
            local_78 = "";
            local_70 = 0;
            String::parse_latin1((StrRange*)&local_90);
            local_98 = 0;
            local_78 = "Add %s";
            local_70 = 6;
            String::parse_latin1((StrRange*)&local_98);
            TTR((String*)&local_88, (String*)&local_98);
            vformat<String>((String*)&local_78, (StrRange*)&local_88, (StrRange*)&local_80);
            PopupMenu::add_item(uVar15, (String*)&local_78, uVar9, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
            uVar15 = *(undefined8*)( this + 0xc88 );
            Variant::Variant((Variant*)&local_58, pSVar13);
            PopupMenu::set_item_metadata((int)uVar15, (Variant*)(ulong)uVar9);
            if (Variant::needs_deinit[(int)local_58] != '\0') {
               Variant::_clear_internal();
            }

         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
         pSVar13 = *(StringName**)( pSVar13 + 8 );
      }
 while ( pSVar13 != (StringName*)0x0 );
   }

   local_f0 = &local_58;
   lVar10 = EditorSettings::get_singleton();
   pOVar6 = *(Object**)( lVar10 + 0x300 );
   iVar12 = (int)(String*)&local_78;
   if (( pOVar6 == (Object*)0x0 ) || ( cVar8 = cVar8 == '\0' )) {
      LAB_001112e0:pOVar11 = (Object*)0x0;
   }
 else {
      pOVar11 = (Object*)__dynamic_cast(pOVar6, &Object::typeinfo, &AnimationNode::typeinfo, 0);
      if (( pOVar11 == (Object*)0x0 ) || ( cVar8 = cVar8 == '\0' )) {
         cVar8 = RefCounted::unreference();
         if (( cVar8 != '\0' ) && ( cVar8 = cVar8 != '\0' )) {
            pOVar11 = (Object*)0x0;
            goto LAB_00110baf;
         }

         goto LAB_001112e0;
      }

      cVar8 = RefCounted::unreference();
      if (( cVar8 != '\0' ) && ( cVar8 = cVar8 != '\0' )) {
         LAB_00110baf:( **(code**)( *(long*)pOVar6 + 0x140 ) )(pOVar6);
         Memory::free_static(pOVar6, false);
         if (pOVar11 == (Object*)0x0) goto LAB_001112e0;
      }

      local_78 = (char*)0x0;
      PopupMenu::add_separator(*(String**)( this + 0xc88 ), iVar12);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      local_78 = "";
      uVar15 = *(undefined8*)( this + 0xc88 );
      local_80 = 0;
      local_70 = 0;
      String::parse_latin1((StrRange*)&local_80);
      local_78 = "Paste";
      local_88 = 0;
      local_70 = 5;
      String::parse_latin1((StrRange*)&local_88);
      TTR((String*)&local_78, (String*)&local_88);
      PopupMenu::add_item(uVar15, (String*)&local_78, 0x3e9, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   }

   local_78 = (char*)0x0;
   PopupMenu::add_separator(*(String**)( this + 0xc88 ), iVar12);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   local_78 = "";
   uVar15 = *(undefined8*)( this + 0xc88 );
   local_80 = 0;
   local_70 = 0;
   String::parse_latin1((StrRange*)&local_80);
   local_78 = "Load...";
   local_88 = 0;
   local_70 = 7;
   String::parse_latin1((StrRange*)&local_88);
   TTR((String*)&local_78, (String*)&local_88);
   PopupMenu::add_item(uVar15, (String*)&local_78, 1000, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   pVVar5 = *(Vector2i**)( this + 0xc88 );
   ( **(code**)( **(long**)( this + 0xac0 ) + 0x2b0 ) )(local_f0);
   fVar16 = (float)*(undefined8*)param_1;
   fVar19 = (float)( ( ulong ) * (undefined8*)param_1 >> 0x20 );
   local_68 = CONCAT44(fVar16 * (float)( (ulong)local_58 >> 0x20 ) + fVar19 * (float)( (ulong)local_50 >> 0x20 ) + (float)( (ulong)local_48 >> 0x20 ), fVar16 * (float)local_58 + fVar19 * (float)local_50 + (float)local_48);
   local_60 = Vector2::operator_cast_to_Vector2i((Vector2*)&local_68);
   Window::set_position(pVVar5);
   local_58 = 0;
   local_50 = 0;
   ( **(code**)( **(long**)( this + 0xc88 ) + 0x240 ) )();
   uVar15 = AnimationNodeStateMachine::get_graph_offset();
   uVar14 = EditorScale::get_scale();
   auVar17._8_8_ = 0;
   auVar17._0_8_ = *(ulong*)param_1;
   auVar18._4_4_ = uVar14;
   auVar18._0_4_ = uVar14;
   auVar18._8_4_ = (int)_LC278;
   auVar18._12_4_ = (int)( (ulong)_LC278 >> 0x20 );
   auVar18 = divps(auVar17, auVar18);
   *(ulong*)( this + 0xcd0 ) = CONCAT44(auVar18._4_4_ + (float)( (ulong)uVar15 >> 0x20 ), auVar18._0_4_ + (float)uVar15);
   if (( ( pOVar11 != (Object*)0x0 ) && ( cVar8 = RefCounted::unreference() ),cVar8 != '\0' )) &&( cVar8 = cVar8 != '\0' )(**(code**)( *(long*)pOVar11 + 0x140 ))(pOVar11);
   Memory::free_static(pOVar11, false);
}
List<StringName,DefaultAllocator>::~List((List<StringName,DefaultAllocator>*)&local_a8);List<StringName,DefaultAllocator>::~List((List<StringName,DefaultAllocator>*)&local_b0);LAB_00110e79:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* AnimationNodeStateMachineEditor::_create_submenu(PopupMenu*, Ref<AnimationNodeStateMachine>,
   StringName const&, StringName const&) */char AnimationNodeStateMachineEditor::_create_submenu(AnimationNodeStateMachineEditor *this, undefined8 param_1, undefined8 *param_3, long *param_4, long *param_5) {
   code *pcVar1;
   char *pcVar2;
   undefined8 uVar3;
   Object *pOVar4;
   char cVar5;
   char cVar6;
   PopupMenu *this_00;
   Object *pOVar7;
   long lVar8;
   long *plVar9;
   undefined4 uVar10;
   long in_FS_OFFSET;
   CowData<char32_t> *local_c8;
   char local_99;
   long *local_80;
   long local_78;
   undefined8 local_70;
   undefined8 local_68;
   Object *local_60;
   Object *local_58;
   size_t local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_80 = (long*)0x0;
   AnimationNodeStateMachine::get_node_list((List*)*param_3);
   this_00 = (PopupMenu*)operator_new(0xfe0, "");
   PopupMenu::PopupMenu(this_00);
   postinitialize_handler((Object*)this_00);
   lVar8 = *param_4;
   if (lVar8 != 0) {
      pOVar7 = *(Object**)( lVar8 + 8 );
      local_60 = (Object*)0x0;
      if (pOVar7 != (Object*)0x0) {
         local_50 = strlen((char*)pOVar7);
         local_58 = pOVar7;
         String::parse_latin1((StrRange*)&local_60);
         goto LAB_0011140a;
      }

      if (*(long*)( lVar8 + 0x10 ) != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar8 + 0x10 ));
         goto LAB_0011140a;
      }

   }

   local_60 = (Object*)0x0;
   LAB_0011140a:local_c8 = (CowData<char32_t>*)&local_60;
   Node::set_name((String*)this_00);
   CowData<char32_t>::_unref(local_c8);
   pcVar1 = *(code**)( *(long*)this_00 + 0x108 );
   create_custom_callable_function_pointer<AnimationNodeStateMachineEditor,int>((AnimationNodeStateMachineEditor*)&local_58, (char*)this, (_func_void_int*)"&AnimationNodeStateMachineEditor::_connect_to");
   ( *pcVar1 )(this_00, SceneStringNames::singleton + 0x240, (AnimationNodeStateMachineEditor*)&local_58, 0);
   Callable::~Callable((Callable*)&local_58);
   Node::add_child(param_1, this_00, 0, 0);
   if (local_80 == (long*)0x0) {
      local_99 = '\0';
   }
 else {
      plVar9 = (long*)*local_80;
      local_99 = '\0';
      if (plVar9 != (long*)0x0) {
         do {
            cVar5 = AnimationNodeStateMachine::can_edit_node((StringName*)*param_3);
            if (cVar5 != '\0') {
               AnimationNodeStateMachine::get_node((StringName*)&local_58);
               if (local_58 == (Object*)0x0) {
                  pOVar7 = (Object*)0x0;
               }
 else {
                  pOVar7 = (Object*)__dynamic_cast(local_58, &Object::typeinfo, &AnimationNodeStateMachine::typeinfo, 0);
                  if (pOVar7 != (Object*)0x0) {
                     cVar6 = RefCounted::reference();
                     if (cVar6 == '\0') {
                        pOVar7 = (Object*)0x0;
                     }

                     if (local_58 == (Object*)0x0) goto LAB_001115ba;
                  }

                  cVar6 = RefCounted::unreference();
                  pOVar4 = local_58;
                  if (( cVar6 != '\0' ) && ( cVar6 = cVar6 != '\0' )) {
                     ( **(code**)( *(long*)pOVar4 + 0x140 ) )(pOVar4);
                     Memory::free_static(pOVar4, false);
                  }

               }

               LAB_001115ba:lVar8 = *plVar9;
               if (lVar8 == 0) {
                  local_60 = (Object*)0x0;
               }
 else {
                  pcVar2 = *(char**)( lVar8 + 8 );
                  local_60 = (Object*)0x0;
                  if (pcVar2 == (char*)0x0) {
                     if (*(long*)( lVar8 + 0x10 ) != 0) {
                        CowData<char32_t>::_ref(local_c8, (CowData*)( lVar8 + 0x10 ));
                     }

                  }
 else {
                     local_50 = strlen(pcVar2);
                     local_58 = (Object*)pcVar2;
                     String::parse_latin1((StrRange*)local_c8);
                  }

               }

               local_68 = 0;
               local_58 = (Object*)&_LC165;
               local_50 = 1;
               String::parse_latin1((StrRange*)&local_68);
               lVar8 = *param_5;
               if (lVar8 == 0) {
                  local_70 = 0;
               }
 else {
                  pcVar2 = *(char**)( lVar8 + 8 );
                  local_70 = 0;
                  if (pcVar2 == (char*)0x0) {
                     if (*(long*)( lVar8 + 0x10 ) != 0) {
                        CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)( lVar8 + 0x10 ));
                     }

                  }
 else {
                     local_50 = strlen(pcVar2);
                     local_58 = (Object*)pcVar2;
                     String::parse_latin1((StrRange*)&local_70);
                  }

               }

               String::operator +((String*)&local_58, (String*)&local_70);
               String::operator +((String*)&local_78, (String*)&local_58);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
               CowData<char32_t>::_unref(local_c8);
               if (*(Object**)( this + 0xa10 ) == pOVar7) {
                  uVar3 = *(undefined8*)( this + 0xca0 );
                  if (*(long*)( this + 0xcc8 ) == 0) {
                     uVar10 = 0;
                  }
 else {
                     uVar10 = *(undefined4*)( *(long*)( this + 0xcc8 ) + -8 );
                  }

                  lVar8 = *plVar9;
                  if (lVar8 == 0) {
                     local_58 = (Object*)0x0;
                  }
 else {
                     local_58 = (Object*)0x0;
                     if (*(char**)( lVar8 + 8 ) == (char*)0x0) {
                        if (*(long*)( lVar8 + 0x10 ) != 0) {
                           CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)( lVar8 + 0x10 ));
                        }

                     }
 else {
                        String::parse_latin1((String*)&local_58, *(char**)( lVar8 + 8 ));
                     }

                  }

                  PopupMenu::add_item(uVar3, (AnimationNodeStateMachineEditor*)&local_58, uVar10);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
                  lVar8 = *(long*)( SceneStringNames::singleton + 0x290 );
                  if (lVar8 == 0) {
                     local_58 = (Object*)0x0;
                  }
 else {
                     local_58 = (Object*)0x0;
                     if (*(char**)( lVar8 + 8 ) == (char*)0x0) {
                        if (*(long*)( lVar8 + 0x10 ) != 0) {
                           CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)( lVar8 + 0x10 ));
                        }

                     }
 else {
                        String::parse_latin1((String*)&local_58, *(char**)( lVar8 + 8 ));
                     }

                  }

                  Vector<String>::push_back((Vector<String>*)( this + 0xcc0 ));
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
                  if (pOVar7 == (Object*)0x0) goto LAB_001114be;
               }
 else {
                  lVar8 = *(long*)( this + 0xcc8 );
                  if (pOVar7 == (Object*)0x0) {
                     if (lVar8 == 0) {
                        uVar10 = 0;
                     }
 else {
                        uVar10 = *(undefined4*)( lVar8 + -8 );
                     }

                     lVar8 = *plVar9;
                     if (lVar8 == 0) {
                        local_58 = (Object*)0x0;
                     }
 else {
                        local_58 = (Object*)0x0;
                        if (*(char**)( lVar8 + 8 ) == (char*)0x0) {
                           if (*(long*)( lVar8 + 0x10 ) != 0) {
                              CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)( lVar8 + 0x10 ));
                           }

                        }
 else {
                           String::parse_latin1((String*)&local_58, *(char**)( lVar8 + 8 ));
                        }

                     }

                     PopupMenu::add_item(this_00, (AnimationNodeStateMachineEditor*)&local_58, uVar10);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
                     local_58 = (Object*)0x0;
                     if (local_78 != 0) {
                        CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_78);
                     }

                     Vector<String>::push_back((Vector<String>*)( this + 0xcc0 ), (AnimationNodeStateMachineEditor*)&local_58);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
                     local_99 = cVar5;
                     goto LAB_001114be;
                  }

                  uVar3 = *(undefined8*)( this + 0xc98 );
                  if (lVar8 == 0) {
                     uVar10 = 0;
                  }
 else {
                     uVar10 = *(undefined4*)( lVar8 + -8 );
                  }

                  lVar8 = *plVar9;
                  if (lVar8 == 0) {
                     local_58 = (Object*)0x0;
                  }
 else {
                     local_58 = (Object*)0x0;
                     if (*(char**)( lVar8 + 8 ) == (char*)0x0) {
                        if (*(long*)( lVar8 + 0x10 ) != 0) {
                           CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)( lVar8 + 0x10 ));
                        }

                     }
 else {
                        String::parse_latin1((String*)&local_58, *(char**)( lVar8 + 8 ));
                     }

                  }

                  PopupMenu::add_item(uVar3, (AnimationNodeStateMachineEditor*)&local_58, uVar10, 0);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
                  local_58 = (Object*)0x0;
                  if (local_78 != 0) {
                     CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_78);
                  }

                  Vector<String>::push_back((Vector<String>*)( this + 0xcc0 ), (AnimationNodeStateMachineEditor*)&local_58);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
                  StringName::StringName((StringName*)&local_58, (String*)&local_78, false);
                  local_60 = pOVar7;
                  cVar5 = RefCounted::reference();
                  if (cVar5 == '\0') {
                     local_60 = (Object*)0x0;
                     cVar5 = _create_submenu(this, this_00, local_c8, plVar9, (AnimationNodeStateMachineEditor*)&local_58);
                  }
 else {
                     cVar5 = _create_submenu(this, this_00, local_c8, plVar9, (AnimationNodeStateMachineEditor*)&local_58);
                     cVar6 = RefCounted::unreference();
                     if (( cVar6 != '\0' ) && ( cVar6 = cVar6 != '\0' )) {
                        ( **(code**)( *(long*)pOVar7 + 0x140 ) )(pOVar7);
                        Memory::free_static(pOVar7, false);
                     }

                  }

                  if (( StringName::configured != '\0' ) && ( local_58 != (Object*)0x0 )) {
                     StringName::unref();
                  }

                  if (cVar5 == '\0') {
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
                     goto LAB_001117eb;
                  }

                  lVar8 = *plVar9;
                  if (lVar8 == 0) {
                     local_58 = (Object*)0x0;
                     LAB_00111c19:local_60 = (Object*)0x0;
                  }
 else {
                     local_58 = (Object*)0x0;
                     if (*(char**)( lVar8 + 8 ) == (char*)0x0) {
                        if (*(long*)( lVar8 + 0x10 ) != 0) {
                           CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)( lVar8 + 0x10 ));
                           goto LAB_001118ea;
                        }

                        LAB_00111ba0:local_60 = (Object*)0x0;
                        if (*(long*)( lVar8 + 0x10 ) != 0) {
                           CowData<char32_t>::_ref(local_c8, (CowData*)( lVar8 + 0x10 ));
                        }

                     }
 else {
                        String::parse_latin1((String*)&local_58, *(char**)( lVar8 + 8 ));
                        LAB_001118ea:lVar8 = *plVar9;
                        if (lVar8 == 0) goto LAB_00111c19;
                        if (*(char**)( lVar8 + 8 ) == (char*)0x0) goto LAB_00111ba0;
                        local_60 = (Object*)0x0;
                        String::parse_latin1((String*)local_c8, *(char**)( lVar8 + 8 ));
                     }

                  }

                  PopupMenu::add_submenu_item((String*)this_00, (String*)local_c8, (int)(AnimationNodeStateMachineEditor*)&local_58);
                  CowData<char32_t>::_unref(local_c8);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
                  local_99 = cVar5;
               }

               LAB_001117eb:cVar5 = RefCounted::unreference();
               if (( cVar5 != '\0' ) && ( cVar5 = cVar5 != '\0' )) {
                  ( **(code**)( *(long*)pOVar7 + 0x140 ) )(pOVar7);
                  Memory::free_static(pOVar7, false);
               }

            }

            LAB_001114be:plVar9 = (long*)plVar9[1];
         }
 while ( plVar9 != (long*)0x0 );
      }

   }

   List<StringName,DefaultAllocator>::~List((List<StringName,DefaultAllocator>*)&local_80);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return local_99;
}
/* AnimationNodeStateMachineEditor::_get_root_playback_path(String&) */String *AnimationNodeStateMachineEditor::_get_root_playback_path(String *param_1) {
   CowData *pCVar1;
   undefined8 uVar2;
   code *pcVar3;
   bool bVar4;
   Object *pOVar5;
   char cVar6;
   char cVar7;
   int iVar8;
   Object *pOVar9;
   CowData<char32_t> *in_RDX;
   uint uVar10;
   CowData<char32_t> *this;
   long lVar11;
   long lVar12;
   long in_FS_OFFSET;
   StrRange *local_c8;
   Object *local_90;
   Object *local_88;
   Object *local_80[2];
   long local_70;
   Vector<String> local_68[8];
   long local_60;
   Object *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   AnimationTreeEditor::get_edited_path();
   *(undefined8*)param_1 = 0;
   local_60 = 0;
   if (( local_70 == 0 ) || ( *(long*)( local_70 + -8 ) == 0 )) {
      LAB_00111f80:local_c8 = (StrRange*)local_80;
      local_58 = (Object*)0x0;
      if (*(long*)in_RDX != 0) {
         CowData<char32_t>::_unref(in_RDX);
         *(undefined8*)in_RDX = 0;
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      local_58 = (Object*)0x11ce75;
      local_80[0] = (Object*)0x0;
      local_50 = 8;
      String::parse_latin1(local_c8);
      AnimationTreeEditor::get_base_path();
      String::operator +((String*)&local_58, (String*)&local_88);
      if (*(Object**)param_1 != local_58) {
         CowData<char32_t>::_unref((CowData<char32_t>*)param_1);
         pOVar9 = local_58;
         local_58 = (Object*)0x0;
         *(Object**)param_1 = pOVar9;
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      LAB_00112025:local_c8 = (StrRange*)local_80;
      CowData<char32_t>::_unref((CowData<char32_t>*)local_c8);
      LAB_0011202e:CowData<String>::_unref((CowData<String>*)&local_60);
      CowData<String>::_unref((CowData<String>*)&local_70);
      if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return param_1;
   }

   do {
      local_80[0] = (Object*)0x0;
      local_58 = (Object*)&_LC165;
      local_50 = 1;
      String::parse_latin1((StrRange*)local_80);
      String::join((Vector*)&local_58);
      if (*(Object**)param_1 != local_58) {
         CowData<char32_t>::_unref((CowData<char32_t>*)param_1);
         pOVar9 = local_58;
         local_58 = (Object*)0x0;
         *(Object**)param_1 = pOVar9;
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_80);
      if (( local_70 != 0 ) && ( *(long*)( local_70 + -8 ) != 0 )) {
         AnimationTree::get_root_animation_node();
         AnimationNode::find_node_by_path((String*)&local_58);
         local_90 = (Object*)0x0;
         if (local_58 != (Object*)0x0) {
            bVar4 = true;
            cVar6 = '\0';
            LAB_001121de:local_90 = (Object*)0x0;
            pOVar9 = (Object*)__dynamic_cast(local_58, &Object::typeinfo, &AnimationNodeStateMachine::typeinfo, 0);
            if (pOVar9 == (Object*)0x0) {
               LAB_0011221f:cVar7 = RefCounted::unreference();
               pOVar5 = local_58;
               pOVar9 = local_90;
               if (( cVar7 != '\0' ) && ( cVar7 = predelete_handler(local_58) ),pOVar9 = local_90,cVar7 != '\0') {
                  ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
                  Memory::free_static(pOVar5, false);
               }

            }
 else {
               local_90 = pOVar9;
               cVar7 = RefCounted::reference();
               if (cVar7 == '\0') {
                  local_90 = (Object*)0x0;
               }

               pOVar9 = local_90;
               if (local_58 != (Object*)0x0) goto LAB_0011221f;
            }

            if (( bVar4 ) && ( local_80[0] != (Object*)0x0 )) {
               LAB_0011225a:cVar7 = RefCounted::unreference();
               pOVar5 = local_80[0];
               if (( cVar7 != '\0' ) && ( cVar7 = predelete_handler(local_80[0]) ),cVar7 != '\0') {
                  ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
                  Memory::free_static(pOVar5, false);
               }

            }

            if (cVar6 != '\0') goto LAB_00111e28;
            goto LAB_00111e40;
         }

         if (local_80[0] != (Object*)0x0) {
            cVar6 = '\0';
            pOVar9 = (Object*)0x0;
            goto LAB_0011225a;
         }

         LAB_00111f6e:Ref<AnimationNodeStateMachine>::unref((Ref<AnimationNodeStateMachine>*)&local_90);
         goto LAB_00111f80;
      }

      AnimationTree::get_root_animation_node();
      if (local_88 == (Object*)0x0) {
         LAB_00111e1d:local_90 = (Object*)0x0;
         pOVar9 = (Object*)0x0;
         LAB_00111e28:if (local_88 == (Object*)0x0) goto LAB_00111e40;
      }
 else {
         local_58 = local_88;
         cVar6 = RefCounted::init_ref();
         if (cVar6 == '\0') goto LAB_00111e1d;
         local_90 = (Object*)0x0;
         if (local_58 != (Object*)0x0) {
            bVar4 = false;
            goto LAB_001121de;
         }

         pOVar9 = (Object*)0x0;
         if (local_88 == (Object*)0x0) goto LAB_00111f6e;
      }

      cVar6 = RefCounted::unreference();
      pOVar5 = local_88;
      if (( cVar6 != '\0' ) && ( cVar6 = cVar6 != '\0' )) {
         ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
         Memory::free_static(pOVar5, false);
      }

      LAB_00111e40:if (pOVar9 == (Object*)0x0) goto LAB_00111f6e;
      iVar8 = AnimationNodeStateMachine::get_state_machine_type();
      if (iVar8 != 2) {
         cVar6 = RefCounted::unreference();
         if (( cVar6 != '\0' ) && ( cVar6 = cVar6 != '\0' )) {
            ( **(code**)( *(long*)pOVar9 + 0x140 ) )(pOVar9);
            Memory::free_static(pOVar9, false);
         }

         Vector<String>::reverse(local_68);
         local_80[0] = (Object*)0x0;
         String::parse_latin1((String*)local_80, "/");
         String::join((Vector*)&local_58);
         if (*(Object**)in_RDX != local_58) {
            CowData<char32_t>::_unref(in_RDX);
            pOVar9 = local_58;
            local_58 = (Object*)0x0;
            *(Object**)in_RDX = pOVar9;
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_80);
         if (( local_60 != 0 ) && ( *(long*)( local_60 + -8 ) != 0 )) {
            String::operator +=((String*)in_RDX, "/");
         }

         if (( local_70 != 0 ) && ( *(long*)( local_70 + -8 ) != 0 )) {
            local_80[0] = (Object*)0x0;
            String::parse_latin1((String*)local_80, "/playback");
            String::operator +((String*)&local_88, (String*)&Animation::PARAMETERS_BASE_PATH);
            String::operator +((String*)&local_58, (String*)&local_88);
            if (local_58 != *(Object**)param_1) {
               CowData<char32_t>::_unref((CowData<char32_t>*)param_1);
               pOVar9 = local_58;
               local_58 = (Object*)0x0;
               *(Object**)param_1 = pOVar9;
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
            CowData<char32_t>::_unref((CowData<char32_t>*)local_80);
            goto LAB_0011202e;
         }

         local_80[0] = (Object*)0x0;
         String::parse_latin1((String*)local_80, "playback");
         String::operator +((String*)&local_58, (String*)&Animation::PARAMETERS_BASE_PATH);
         if (*(Object**)param_1 != local_58) {
            CowData<char32_t>::_unref((CowData<char32_t>*)param_1);
            pOVar9 = local_58;
            local_58 = (Object*)0x0;
            *(Object**)param_1 = pOVar9;
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         goto LAB_00112025;
      }

      if (local_70 == 0) {
         lVar11 = 0;
         lVar12 = -1;
         LAB_00112322:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar12, lVar11, "p_index", "size()", "", false, true);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar3 = (code*)invalidInstructionException();
         ( *pcVar3 )();
      }

      lVar11 = *(long*)( local_70 + -8 );
      uVar10 = (int)lVar11 - 1;
      lVar12 = (long)(int)uVar10;
      if (( lVar11 <= lVar12 ) || ( lVar12 < 0 )) goto LAB_00112322;
      local_58 = (Object*)0x0;
      pCVar1 = (CowData*)( local_70 + (ulong)uVar10 * 8 );
      if (*(long*)pCVar1 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, pCVar1);
      }

      Vector<String>::push_back(local_68, (Vector*)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      if (local_70 == 0) {
         lVar11 = 0;
         LAB_0011236b:_err_print_index_error("remove_at", "./core/templates/cowdata.h", 0xe4, lVar12, lVar11, "p_index", "size()", "", false, false);
      }
 else {
         lVar11 = *(long*)( local_70 + -8 );
         if (lVar11 <= lVar12) goto LAB_0011236b;
         CowData<String>::_copy_on_write((CowData<String>*)&local_70);
         if (local_70 == 0) {
            lVar11 = -1;
         }
 else {
            lVar11 = *(long*)( local_70 + -8 ) + -1;
            if (lVar12 < lVar11) {
               this(CowData<char32_t> * )(local_70 + (ulong)uVar10 * 8);
               do {
                  if (*(long*)this != *(long*)( this + 8 )) {
                     CowData<char32_t>::_unref(this);
                     uVar2 = *(undefined8*)( this + 8 );
                     *(undefined8*)( this + 8 ) = 0;
                     *(undefined8*)this = uVar2;
                  }

                  lVar12 = lVar12 + 1;
                  this =
                  this + 8;
               }
 while ( lVar12 != lVar11 );
            }

         }

         CowData<String>::resize<false>((CowData<String>*)&local_70, lVar11);
      }

      cVar6 = RefCounted::unreference();
      if (( cVar6 != '\0' ) && ( cVar6 = cVar6 != '\0' )) {
         ( **(code**)( *(long*)pOVar9 + 0x140 ) )(pOVar9);
         Memory::free_static(pOVar9, false);
      }

   }
 while ( true );
}
/* Vector<int>::push_back(int) [clone .isra.0] */void Vector<int>::push_back(Vector<int> *this, int param_1) {
   int iVar1;
   long lVar2;
   long lVar3;
   if (*(long*)( this + 8 ) == 0) {
      lVar2 = 1;
   }
 else {
      lVar2 = *(long*)( *(long*)( this + 8 ) + -8 ) + 1;
   }

   iVar1 = CowData<int>::resize<false>((CowData<int>*)( this + 8 ), lVar2);
   if (iVar1 == 0) {
      if (*(long*)( this + 8 ) == 0) {
         lVar3 = -1;
         lVar2 = 0;
      }
 else {
         lVar2 = *(long*)( *(long*)( this + 8 ) + -8 );
         lVar3 = lVar2 + -1;
         if (-1 < lVar3) {
            CowData<int>::_copy_on_write((CowData<int>*)( this + 8 ));
            *(int*)( *(long*)( this + 8 ) + lVar3 * 4 ) = param_1;
            return;
         }

      }

      _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar3, lVar2, "p_index", "size()", "", false, false);
      return;
   }

   _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* AnimationNodeStateMachineEditor::_state_machine_gui_input(Ref<InputEvent> const&) */void AnimationNodeStateMachineEditor::_state_machine_gui_input(AnimationNodeStateMachineEditor *this, Ref *param_1) {
   Variant *pVVar1;
   HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>> *this_00;
   int *piVar2;
   float *pfVar3;
   undefined8 *puVar4;
   float fVar5;
   float fVar6;
   bool *pbVar7;
   String *pSVar8;
   StringName *pSVar9;
   Vector2i *pVVar10;
   code *pcVar11;
   char cVar12;
   int iVar13;
   Object *pOVar14;
   Object *pOVar15;
   ulong uVar16;
   Ref *pRVar17;
   long *plVar18;
   bool bVar19;
   ulong uVar20;
   long lVar21;
   long lVar22;
   StringName *pSVar23;
   long lVar24;
   Variant *pVVar25;
   int *piVar26;
   uint uVar27;
   long in_FS_OFFSET;
   float fVar28;
   float fVar29;
   float extraout_XMM0_Da;
   float fVar30;
   undefined4 uVar31;
   double dVar32;
   double dVar33;
   float extraout_XMM0_Db;
   undefined8 uVar34;
   float extraout_XMM0_Db_00;
   undefined8 uVar35;
   float extraout_XMM0_Db_01;
   undefined1 auVar36[16];
   undefined8 uVar37;
   undefined1 auVar38[16];
   undefined1 auVar39[16];
   undefined1 auVar40[16];
   float fVar41;
   Object *local_210;
   CowData<char32_t> *local_1f8;
   Object *local_1d0;
   float local_1c8;
   float local_1c0;
   Vector2 *local_1b0;
   undefined8 local_168;
   StringName *local_160;
   Ref *local_158;
   long local_150;
   long *local_148;
   undefined8 local_140;
   undefined8 local_138;
   String *local_130;
   String *local_128;
   int *local_120;
   undefined8 local_118;
   undefined8 local_100;
   undefined1 local_f8[2][16];
   undefined1 local_d8[16];
   Variant local_c0[24];
   undefined8 local_a8;
   undefined1 local_a0[16];
   Variant local_90[8];
   undefined8 local_88;
   undefined8 local_80;
   int local_70[6];
   undefined8 local_58;
   undefined1 local_50[16];
   long local_40[2];
   local_40[0] = *(long*)( in_FS_OFFSET + 0x28 );
   pbVar7 = *(bool**)( AnimationTreeEditor::singleton + 0xa20 );
   if (pbVar7 == (bool*)0x0) goto LAB_001129f4;
   local_168 = 0;
   _get_root_playback_path((String*)&local_128);
   StringName::StringName((StringName*)&local_118, (String*)&local_128, false);
   Object::get((StringName*)&local_88, pbVar7);
   local_160 = (StringName*)0x0;
   Ref<AnimationNodeStateMachinePlayback>::operator =((Ref<AnimationNodeStateMachinePlayback>*)&local_160, (Variant*)&local_88);
   if (Variant::needs_deinit[(int)(float)local_88] != '\0') {
      Variant::_clear_internal();
   }

   if (( StringName::configured != '\0' ) && ( local_118 != (long*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
   pSVar23 = local_160;
   if (local_160 != (StringName*)0x0) {
      if (( *(long*)param_1 == 0 ) || ( local_1d0 = (Object*)__dynamic_cast(*(long*)param_1, &Object::typeinfo, &InputEventKey::typeinfo) ),local_1d0 == (Object*)0x0) {
         BaseButton::is_pressed();
         LAB_00112a25:local_1d0 = (Object*)0x0;
      }
 else {
         cVar12 = RefCounted::reference();
         if (cVar12 == '\0') {
            BaseButton::is_pressed();
            goto LAB_00112a25;
         }

         cVar12 = BaseButton::is_pressed();
         if (( ( ( ( cVar12 != '\0' ) && ( cVar12 = InputEvent::is_pressed() ),cVar12 != '\0' ) ) && ( iVar13 = InputEventKey::get_keycode() ),iVar13 == 0x400008 )) &&( cVar12 = cVar12 == '\0' ) && ( ( ( *(long*)( this + 0xa80 ) != 0 || ( *(int*)( this + 0xaac ) != 0 ) ) || ( ( *(long*)( this + 0xda8 ) != 0 || ( *(long*)( this + 0xda0 ) != 0 ) ) ) ) )(this[0xa18] == (AnimationNodeStateMachineEditor)0x0);
         {
            _erase_selected(this, false);
         }

         Control::accept_event();
      }

   }

   lVar24 = *(long*)param_1;
   if (lVar24 != 0) {
      local_210 = (Object*)__dynamic_cast(lVar24, &Object::typeinfo, &InputEventMouseButton::typeinfo);
      if (local_210 == (Object*)0x0) {
         LAB_0011286d:pOVar14 = (Object*)__dynamic_cast(lVar24, &Object::typeinfo, &InputEventMouseMotion::typeinfo, 0);
         if (pOVar14 == (Object*)0x0) {
            LAB_001128b1:pOVar15 = (Object*)__dynamic_cast(lVar24, &Object::typeinfo, &InputEventPanGesture::typeinfo, 0);
            if (( pOVar15 != (Object*)0x0 ) && ( cVar12 = cVar12 != '\0' )) {
               dVar32 = (double)Range::get_value();
               dVar33 = (double)Range::get_page();
               fVar28 = (float)InputEventPanGesture::get_delta();
               Range::set_value((double)fVar28 * dVar33 * __LC289 + dVar32);
               dVar32 = (double)Range::get_value();
               dVar33 = (double)Range::get_page();
               InputEventPanGesture::get_delta();
               Range::set_value((double)extraout_XMM0_Db * dVar33 * __LC289 + dVar32);
               cVar12 = RefCounted::unreference();
               if (( cVar12 != '\0' ) && ( cVar12 = cVar12 != '\0' )) {
                  ( **(code**)( *(long*)pOVar15 + 0x140 ) )(pOVar15);
                  Memory::free_static(pOVar15, false);
               }

            }

            if (pOVar14 != (Object*)0x0) {
               LAB_0011299c:cVar12 = RefCounted::unreference();
               if (( cVar12 != '\0' ) && ( cVar12 = cVar12 != '\0' )) {
                  ( **(code**)( *(long*)pOVar14 + 0x140 ) )(pOVar14);
                  Memory::free_static(pOVar14, false);
               }

            }

         }
 else {
            cVar12 = RefCounted::reference();
            if (cVar12 != '\0') {
               uVar16 = InputEventMouse::get_button_mask();
               if (( uVar16 & 4 ) != 0) {
                  dVar32 = (double)Range::get_value();
                  fVar28 = (float)InputEventMouseMotion::get_relative();
                  Range::set_value(dVar32 - (double)fVar28);
                  dVar32 = (double)Range::get_value();
                  InputEventMouseMotion::get_relative();
                  Range::set_value(dVar32 - (double)extraout_XMM0_Db_01);
               }

               if (( this[0xd60] == (AnimationNodeStateMachineEditor)0x0 ) || ( this[0xd61] == (AnimationNodeStateMachineEditor)0x0 )) {
                  LAB_00112b98:if (( this[0xd38] != (AnimationNodeStateMachineEditor)0x0 ) && ( this[0xa18] == (AnimationNodeStateMachineEditor)0x0 )) {
                     this[0xd39] = (AnimationNodeStateMachineEditor)0x1;
                     uVar34 = InputEventMouse::get_position();
                     *(ulong*)( this + 0xd44 ) = CONCAT44((float)( (ulong)uVar34 >> 0x20 ) - (float)( ( ulong ) * (undefined8*)( this + 0xd3c ) >> 0x20 ), (float)uVar34 - (float)*(undefined8*)( this + 0xd3c ));
                     if (*(long*)( this + 0xd50 ) != 0) {
                        StringName::unref();
                        *(undefined8*)( this + 0xd50 ) = 0;
                     }

                     if (*(long*)( this + 0xd58 ) != 0) {
                        StringName::unref();
                        *(undefined8*)( this + 0xd58 ) = 0;
                     }

                     fVar29 = (float)EditorScale::get_scale();
                     fVar28 = *(float*)( this + 0xd48 );
                     fVar41 = *(float*)( this + 0xd44 );
                     uVar34 = AnimationNodeStateMachine::get_node_position(*(StringName**)( this + 0xa10 ));
                     local_118 = (long*)0x0;
                     fVar41 = fVar41 / fVar29 + (float)uVar34;
                     fVar28 = (float)( (ulong)uVar34 >> 0x20 ) + fVar28 / fVar29;
                     AnimationNodeStateMachine::get_node_list(*(List**)( this + 0xa10 ));
                     if (( local_118 != (long*)0x0 ) && ( pSVar23 = (StringName*)*local_118 ),pSVar23 != (StringName*)0x0) {
                        local_1c8 = _LC280;
                        local_1c0 = _LC280;
                        do {
                           if (*(long*)pSVar23 != *(long*)( this + 0xa80 )) {
                              AnimationNodeStateMachine::get_node_position(*(StringName**)( this + 0xa10 ));
                              fVar29 = extraout_XMM0_Da - fVar41;
                              if (fVar29 < 0.0) {
                                 fVar29 = (float)( (uint)fVar29 ^ __LC69 );
                              }

                              if (fVar29 < (float)( ~-(uint)(_LC281 < local_1c8) & (uint)local_1c8 | (uint)_LC281 & -(uint)(_LC281 < local_1c8) )) {
                                 *(float*)( this + 0xd44 ) = *(float*)( this + 0xd44 ) - ( fVar41 - extraout_XMM0_Da );
                                 StringName::operator =((StringName*)( this + 0xd50 ), pSVar23);
                                 local_1c8 = fVar29;
                              }

                              fVar29 = extraout_XMM0_Db_00 - fVar28;
                              if (fVar29 < 0.0) {
                                 fVar29 = (float)( (uint)fVar29 ^ __LC69 );
                              }

                              if (fVar29 < (float)( (uint)_LC281 & -(uint)(_LC281 < local_1c0) | ~-(uint)(_LC281 < local_1c0) & (uint)local_1c0 )) {
                                 *(float*)( this + 0xd48 ) = *(float*)( this + 0xd48 ) - ( fVar28 - extraout_XMM0_Db_00 );
                                 StringName::operator =((StringName*)( this + 0xd58 ), pSVar23);
                                 local_1c0 = fVar29;
                              }

                           }

                           pSVar23 = *(StringName**)( pSVar23 + 8 );
                        }
 while ( pSVar23 != (StringName*)0x0 );
                     }

                     List<StringName,DefaultAllocator>::~List((List<StringName,DefaultAllocator>*)&local_118);
                     CanvasItem::queue_redraw();
                  }

                  LAB_00112a70:if (this[0xce8] != (AnimationNodeStateMachineEditor)0x0) {
                     uVar34 = CanvasItem::get_local_mouse_position();
                     fVar28 = *(float*)( this + 0xcf0 );
                     uVar16 = 0;
                     fVar41 = *(float*)( this + 0xcec );
                     *(undefined8*)( this + 0xcf4 ) = uVar34;
                     fVar29 = *(float*)( this + 0xcf4 );
                     fVar30 = *(float*)( this + 0xcf8 );
                     lVar24 = *(long*)( this + 0xd88 );
                     fVar5 = fVar41;
                     if (fVar29 <= fVar41) {
                        fVar5 = fVar29;
                     }

                     fVar6 = fVar28;
                     if (fVar30 <= fVar28) {
                        fVar6 = fVar30;
                     }

                     *(ulong*)( this + 0xcfc ) = CONCAT44(fVar6, fVar5);
                     *(ulong*)( this + 0xd04 ) = CONCAT44(fVar28 - fVar30, ABS(fVar41 - fVar29)) & 0x7fffffffffffffff;
                     for (; ( lVar24 != 0 && ( (long)uVar16 < *(long*)( lVar24 + -8 ) ) ); uVar16 = uVar16 + 1) {
                        lVar22 = uVar16 * 0x50;
                        lVar21 = lVar24 + lVar22;
                        if (( *(float*)( lVar21 + 0x10 ) <= 0.0 && *(float*)( lVar21 + 0x10 ) != 0.0 ) || ( ( ( *(float*)( lVar21 + 0x14 ) <= 0.0 && *(float*)( lVar21 + 0x14 ) != 0.0 || ( fVar28 = *(float*)( this + 0xd04 ) ),fVar28 < 0.0 ) ) || ( *(float*)( this + 0xd08 ) <= 0.0 && *(float*)( this + 0xd08 ) != 0.0 ) )) {
                           _err_print_error("intersects", "./core/math/rect2.h", 0x39, "Rect2 size is negative, this is not supported. Use Rect2.abs() to get a Rect2 with a positive size.", 0, 0);
                           fVar28 = *(float*)( this + 0xd04 );
                           lVar24 = *(long*)( this + 0xd88 );
                        }

                        if (( fVar28 + *(float*)( this + 0xcfc ) <= *(float*)( lVar21 + 8 ) ) || ( *(float*)( lVar21 + 8 ) + *(float*)( lVar21 + 0x10 ) <= *(float*)( this + 0xcfc ) )) {
                           LAB_00113670:if (lVar24 == 0) goto LAB_00113730;
                           lVar21 = *(long*)( lVar24 + -8 );
                           if (lVar21 <= (long)uVar16) goto LAB_00112b72;
                           local_118 = (long*)( (ulong)local_118._4_4_ << 0x20 );
                           cVar12 = HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::_lookup_pos((HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>*)( this + 0xd10 ), (StringName*)( lVar24 + lVar22 ), (uint*)&local_118);
                        }
 else {
                           if (( *(float*)( this + 0xd08 ) + *(float*)( this + 0xd00 ) <= *(float*)( lVar21 + 0xc ) ) || ( *(float*)( lVar21 + 0xc ) + *(float*)( lVar21 + 0x14 ) <= *(float*)( this + 0xd00 ) )) goto LAB_00113670;
                           if (lVar24 == 0) goto LAB_00113730;
                           lVar21 = *(long*)( lVar24 + -8 );
                           if (lVar21 <= (long)uVar16) goto LAB_00112b72;
                           local_118 = (long*)( (ulong)local_118._4_4_ << 0x20 );
                           cVar12 = HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::_lookup_pos((HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>*)( this + 0xd10 ), (StringName*)( lVar24 + lVar22 ), (uint*)&local_118);
                        }

                        if (cVar12 == '\0') {
                           lVar24 = *(long*)( this + 0xd88 );
                           if (lVar24 == 0) goto LAB_00113730;
                           lVar21 = *(long*)( lVar24 + -8 );
                           if (lVar21 <= (long)uVar16) goto LAB_00112b72;
                           HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::erase((HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>*)( this + 0xa88 ), (StringName*)( lVar24 + lVar22 ));
                        }
 else {
                           if (*(long*)( this + 0xd88 ) == 0) goto LAB_00113730;
                           lVar21 = *(long*)( *(long*)( this + 0xd88 ) + -8 );
                           if (lVar21 <= (long)uVar16) goto LAB_00112b72;
                           HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert((StringName*)&local_118);
                        }

                        lVar24 = *(long*)( this + 0xd88 );
                     }

                     CanvasItem::queue_redraw();
                  }

                  Control::grab_focus();
                  local_148 = (long*)0x0;
                  cVar12 = BaseButton::is_pressed();
                  if (( ( cVar12 == '\0' ) || ( lVar24 = lVar24 == 0 ) ) || ( uVar27 = *(int*)( lVar24 + -8 ) - 1 ),(int)uVar27 < 0) {
                     LAB_00112f50:iVar13 = -1;
                     LAB_00112f56:cVar12 = operator != ( (String*)&local_148,(StringName*)( this + 0xdb8 ) );
                     if (( cVar12 != '\0' ) || ( *(int*)( this + 0xdc0 ) != iVar13 )) {
                        StringName::StringName((StringName*)&local_118, (String*)&local_148, false);
                        if (*(long**)( this + 0xdb8 ) == local_118) {
                           if (( StringName::configured != '\0' ) && ( local_118 != (long*)0x0 )) {
                              StringName::unref();
                           }

                        }
 else {
                           StringName::unref();
                           *(long**)( this + 0xdb8 ) = local_118;
                        }

                        *(int*)( this + 0xdc0 ) = iVar13;
                        CanvasItem::queue_redraw();
                     }

                     cVar12 = BaseButton::is_pressed();
                     if (cVar12 != '\0') {
                        lVar24 = *(long*)( this + 0xd98 );
                        if (lVar24 != 0) {
                           lVar21 = *(long*)( lVar24 + -8 );
                           uVar20 = 0xffffffff;
                           local_1c0 = _LC280;
                           for (uVar16 = 0; auVar39 = local_f8[0],(long)uVar16 < lVar21; uVar16 = uVar16 + 1) {
                              lVar24 = lVar24 + uVar16 * 0x50;
                              local_1f8 = *(CowData<char32_t>**)( lVar24 + 0x10 );
                              uVar34 = *(undefined8*)( lVar24 + 0x18 );
                              fVar41 = SUB84(local_1f8, 0);
                              fVar29 = (float)( (ulong)local_1f8 >> 0x20 );
                              local_f8[0]._4_4_ = (float)( (ulong)uVar34 >> 0x20 ) - fVar29;
                              local_f8[0]._0_4_ = (float)uVar34 - fVar41;
                              uVar37 = local_f8[0]._0_8_;
                              local_f8[0] = auVar39;
                              uVar35 = InputEventMouse::get_position();
                              local_100 = CONCAT44((float)( (ulong)uVar35 >> 0x20 ) - fVar29, (float)uVar35 - fVar41);
                              local_f8[0] = CONCAT88(local_f8[0]._8_8_, uVar37);
                              fVar28 = (float)Vector2::length_squared();
                              if (_LC284 <= fVar28) {
                                 fVar30 = (float)Vector2::dot((Vector2*)local_f8);
                                 fVar30 = fVar30 / fVar28;
                                 if (( 0.0 < fVar30 ) && ( local_1f8 = fVar30 < _LC65 )) {
                                    local_1f8 = (CowData<char32_t>*)CONCAT44(fVar29 + fVar30 * SUB164(local_f8[0], 4), fVar41 + fVar30 * SUB164(local_f8[0], 0));
                                 }

                              }

                              local_100 = local_1f8;
                              uVar34 = InputEventMouse::get_position();
                              local_f8[0]._0_8_ = uVar34;
                              fVar28 = (float)Vector2::distance_to((Vector2*)&local_100);
                              lVar24 = *(long*)( this + 0xd98 );
                              if (lVar24 == 0) goto LAB_00112b51;
                              lVar21 = *(long*)( lVar24 + -8 );
                              if (lVar21 <= (long)uVar16) goto LAB_00112b72;
                              pfVar3 = (float*)( lVar24 + 0x34 + uVar16 * 0x50 );
                              if (( fVar28 < *pfVar3 || fVar28 == *pfVar3 ) && ( fVar28 < local_1c0 )) {
                                 uVar20 = uVar16 & 0xffffffff;
                                 local_1c0 = fVar28;
                              }

                           }

                           if (-1 < (int)uVar20) {
                              uVar16 = (ulong)(int)uVar20;
                              if (lVar21 <= (long)uVar16) goto LAB_00112b72;
                              lVar21 = *(long*)( lVar24 + uVar16 * 0x50 );
                              if (lVar21 == 0) {
                                 local_140 = 0;
                              }
 else {
                                 local_140 = 0;
                                 if (*(char**)( lVar21 + 8 ) == (char*)0x0) {
                                    if (*(long*)( lVar21 + 0x10 ) != 0) {
                                       CowData<char32_t>::_ref((CowData<char32_t>*)&local_140, (CowData*)( lVar21 + 0x10 ));
                                       lVar24 = *(long*)( this + 0xd98 );
                                    }

                                 }
 else {
                                    String::parse_latin1((String*)&local_140, *(char**)( lVar21 + 8 ));
                                    lVar24 = *(long*)( this + 0xd98 );
                                 }

                              }

                              if (lVar24 == 0) goto LAB_00113460;
                              lVar21 = *(long*)( lVar24 + -8 );
                              if (lVar21 <= (long)uVar16) goto LAB_00112b72;
                              lVar24 = *(long*)( lVar24 + 8 + uVar16 * 0x50 );
                              if (lVar24 == 0) {
                                 local_138 = 0;
                              }
 else {
                                 local_138 = 0;
                                 if (*(char**)( lVar24 + 8 ) == (char*)0x0) {
                                    if (*(long*)( lVar24 + 0x10 ) != 0) {
                                       CowData<char32_t>::_ref((CowData<char32_t>*)&local_138, (CowData*)( lVar24 + 0x10 ));
                                    }

                                 }
 else {
                                    String::parse_latin1((String*)&local_138, *(char**)( lVar24 + 8 ));
                                 }

                              }

                              local_1f8 = (CowData<char32_t>*)&local_138;
                              local_128 = (String*)0x0;
                              String::parse_latin1((String*)&local_128, " -> ");
                              String::operator +((String*)&local_118, (String*)&local_140);
                              String::operator +((String*)&local_130, (String*)&local_118);
                              CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
                              CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
                              Control::set_tooltip_text(*(String**)( this + 0xac0 ));
                              CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
                              CowData<char32_t>::_unref(local_1f8);
                              CowData<char32_t>::_unref((CowData<char32_t>*)&local_140);
                              goto LAB_00113c88;
                           }

                        }

                        pSVar8 = *(String**)( this + 0xac0 );
                        local_118 = (long*)0x0;
                        String::parse_latin1((String*)&local_118, "");
                        Control::set_tooltip_text(pSVar8);
                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
                     }

                     LAB_00113c88:CowData<char32_t>::_unref((CowData<char32_t>*)&local_148);
                     lVar24 = *(long*)param_1;
                     if (lVar24 != 0) goto LAB_001128b1;
                     goto LAB_0011299c;
                  }

                  uVar16 = (ulong)uVar27;
                  while (lVar24 != 0) {
                     lVar21 = *(long*)( lVar24 + -8 );
                     if (lVar21 <= (long)uVar16) goto LAB_00112b72;
                     lVar24 = uVar16 * 0x50;
                     cVar12 = AnimationNodeStateMachine::can_edit_node(*(StringName**)( this + 0xa10 ));
                     if (cVar12 != '\0') {
                        lVar22 = *(long*)( this + 0xd88 );
                        if (lVar22 == 0) break;
                        lVar21 = *(long*)( lVar22 + -8 );
                        if (lVar21 <= (long)uVar16) goto LAB_00112b72;
                        uVar34 = InputEventMouse::get_position();
                        local_f8[0]._0_8_ = uVar34;
                        cVar12 = Rect2::has_point((Rect2*)( lVar22 + 8 + lVar24 ), (Vector2*)local_f8);
                        if (cVar12 != '\0') {
                           lVar22 = *(long*)( this + 0xd88 );
                           if (lVar22 != 0) {
                              lVar21 = *(long*)( lVar22 + -8 );
                              if (lVar21 <= (long)uVar16) goto LAB_00112b72;
                              lVar21 = *(long*)( lVar22 + lVar24 );
                              if (lVar21 == 0) {
                                 LAB_001149ef:local_118 = (long*)0x0;
                              }
 else {
                                 local_118 = (long*)0x0;
                                 if (*(char**)( lVar21 + 8 ) == (char*)0x0) {
                                    if (*(long*)( lVar21 + 0x10 ) == 0) goto LAB_001149ef;
                                    CowData<char32_t>::_ref((CowData<char32_t>*)&local_118, (CowData*)( lVar21 + 0x10 ));
                                 }
 else {
                                    String::parse_latin1((String*)&local_118, *(char**)( lVar21 + 8 ));
                                 }

                              }

                              if (local_148 != local_118) {
                                 CowData<char32_t>::_unref((CowData<char32_t>*)&local_148);
                                 local_148 = local_118;
                                 local_118 = (long*)0x0;
                              }

                              CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
                              lVar22 = *(long*)( this + 0xd88 );
                              if (lVar22 != 0) {
                                 lVar21 = *(long*)( lVar22 + -8 );
                                 if (lVar21 <= (long)uVar16) goto LAB_00112b72;
                                 uVar34 = InputEventMouse::get_position();
                                 local_f8[0]._0_8_ = uVar34;
                                 cVar12 = Rect2::has_point((Rect2*)( lVar22 + 0x18 + lVar24 ), (Vector2*)local_f8);
                                 if (cVar12 != '\0') {
                                    iVar13 = 0;
                                    goto LAB_00112f56;
                                 }

                                 lVar22 = *(long*)( this + 0xd88 );
                                 if (lVar22 != 0) {
                                    lVar21 = *(long*)( lVar22 + -8 );
                                    if (lVar21 <= (long)uVar16) goto LAB_00112b72;
                                    iVar13 = 1;
                                    uVar34 = InputEventMouse::get_position();
                                    local_f8[0]._0_8_ = uVar34;
                                    cVar12 = Rect2::has_point((Rect2*)( lVar22 + 0x38 + lVar24 ), (Vector2*)local_f8);
                                    if (cVar12 != '\0') goto LAB_00112f56;
                                    goto LAB_00112f50;
                                 }

                              }

                           }

                           break;
                        }

                     }

                     uVar16 = uVar16 - 1;
                     if ((int)uVar16 < 0) goto LAB_00112f50;
                     lVar24 = *(long*)( this + 0xd88 );
                  }
;
               }
 else {
                  if (this[0xa18] != (AnimationNodeStateMachineEditor)0x0) goto LAB_00112a70;
                  uVar34 = InputEventMouse::get_position();
                  *(undefined8*)( this + 0xd70 ) = uVar34;
                  if (*(long*)( this + 0xd78 ) != 0) {
                     StringName::unref();
                     *(undefined8*)( this + 0xd78 ) = 0;
                  }

                  CanvasItem::queue_redraw();
                  lVar24 = *(long*)( this + 0xd88 );
                  if (( lVar24 == 0 ) || ( uVar27 = *(int*)( lVar24 + -8 ) - 1 ),(int)uVar27 < 0) goto LAB_00112b98;
                  uVar16 = (ulong)uVar27;
                  while (lVar24 != 0) {
                     lVar21 = *(long*)( lVar24 + -8 );
                     if (lVar21 <= (long)uVar16) goto LAB_00112b72;
                     plVar18 = (long*)( lVar24 + uVar16 * 0x50 );
                     if (( *plVar18 != *(long*)( this + 0xd68 ) ) && ( cVar12 = Rect2::has_point((Rect2*)( plVar18 + 1 ), (Vector2*)( this + 0xd70 )) ),cVar12 != '\0') {
                        lVar24 = *(long*)( this + 0xd88 );
                        if (lVar24 != 0) {
                           lVar21 = *(long*)( lVar24 + -8 );
                           if (lVar21 <= (long)uVar16) goto LAB_00112b72;
                           StringName::operator =((StringName*)( this + 0xd78 ), (StringName*)( lVar24 + uVar16 * 0x50 ));
                           cVar12 = RefCounted::unreference();
                           if (( cVar12 != '\0' ) && ( cVar12 = cVar12 != '\0' )) {
                              ( **(code**)( *(long*)pOVar14 + 0x140 ) )(pOVar14);
                              Memory::free_static(pOVar14, false);
                           }

                           goto joined_r0x00114964;
                        }

                        break;
                     }

                     uVar16 = uVar16 - 1;
                     if ((int)uVar16 < 0) goto LAB_00112b98;
                     lVar24 = *(long*)( this + 0xd88 );
                  }
;
               }

               LAB_00112b51:lVar21 = 0;
               goto LAB_00112b72;
            }

            pOVar14 = (Object*)0x0;
            lVar24 = *(long*)param_1;
            if (lVar24 != 0) goto LAB_001128b1;
         }

         joined_r0x00114964:if (local_210 == (Object*)0x0) goto LAB_001129c6;
      }
 else {
         cVar12 = RefCounted::reference();
         if (cVar12 == '\0') {
            local_210 = (Object*)0x0;
            lVar24 = *(long*)param_1;
            if (lVar24 == 0) goto LAB_001129c6;
            goto LAB_0011286d;
         }

         if (( ( ( this[0xa18] == (AnimationNodeStateMachineEditor)0x0 ) && ( cVar12 = InputEvent::is_pressed() ),cVar12 != '\0' ) ) && ( ( this[0xce8] == (AnimationNodeStateMachineEditor)0x0 && ( this[0xd60] == (AnimationNodeStateMachineEditor)0x0 ) ) )) &&( ( ( cVar12 = BaseButton::is_pressed() ),cVar12 != '\0' && ( iVar13 = InputEventMouseButton::get_button_index() ),iVar13 == 2 ) ) || ( ( cVar12 = BaseButton::is_pressed() ),cVar12 != '\0' && ( iVar13 = iVar13 == 1 ) )(*(long*)( this + 0xd68 ) != 0);
         {
            StringName::unref();
            *(undefined8*)( this + 0xd68 ) = 0;
         }

         local_88 = InputEventMouse::get_position();
         _open_menu(this, (Vector2*)&local_88);
      }

      cVar12 = InputEventWithModifiers::is_shift_pressed();
      bVar19 = SUB81((StringName*)&local_118, 0);
      if (( ( ( cVar12 == '\0' ) && ( cVar12 = InputEventWithModifiers::is_command_or_control_pressed() ),cVar12 == '\0' ) ) && ( cVar12 = cVar12 != '\0' )) {
         if (*(long*)( this + 0xda0 ) != 0) {
            StringName::unref();
            *(undefined8*)( this + 0xda0 ) = 0;
         }

         if (*(long*)( this + 0xda8 ) != 0) {
            StringName::unref();
            *(undefined8*)( this + 0xda8 ) = 0;
         }

         pSVar9 = (StringName*)( this + 0xa80 );
         *(undefined4*)( this + 0xdb0 ) = 0xffffffff;
         if (*(long*)( this + 0xa80 ) != 0) {
            StringName::unref();
            *(undefined8*)( this + 0xa80 ) = 0;
         }

         lVar24 = *(long*)( this + 0xd88 );
         if (( lVar24 != 0 ) && ( uVar27 = *(int*)( lVar24 + -8 ) - 1 ),uVar16 = (ulong)uVar27,-1 < (int)uVar27) {
            while (lVar24 != 0) {
               lVar21 = *(long*)( lVar24 + -8 );
               if (lVar21 <= (long)uVar16) goto LAB_00112b72;
               lVar22 = uVar16 * 0x50;
               local_88 = InputEventMouse::get_position();
               cVar12 = Rect2::has_point((Rect2*)( lVar24 + 0x18 + lVar22 ), (Vector2*)&local_88);
               if (cVar12 != '\0') {
                  iVar13 = OptionButton::get_selected();
                  if (( iVar13 == 1 ) || ( cVar12 = AnimationNodeStateMachinePlayback::is_playing() ),cVar12 == '\0') {
                     lVar24 = *(long*)( this + 0xd88 );
                     if (lVar24 == 0) goto LAB_00113730;
                     lVar21 = *(long*)( lVar24 + -8 );
                     if (lVar21 <= (long)uVar16) goto LAB_00112b72;
                     lVar24 = *(long*)( lVar24 + lVar22 );
                     if (lVar24 == 0) {
                        LAB_0011589c:local_130 = (String*)0x0;
                     }
 else {
                        local_130 = (String*)0x0;
                        if (*(char**)( lVar24 + 8 ) == (char*)0x0) {
                           if (*(long*)( lVar24 + 0x10 ) == 0) goto LAB_0011589c;
                           CowData<char32_t>::_ref((CowData<char32_t>*)&local_130, (CowData*)( lVar24 + 0x10 ));
                        }
 else {
                           String::parse_latin1((String*)&local_130, *(char**)( lVar24 + 8 ));
                        }

                     }

                     String::operator +((String*)&local_128, (String*)&local_168);
                     StringName::StringName((StringName*)&local_118, (String*)&local_128, false);
                     AnimationNodeStateMachinePlayback::start(pSVar23, bVar19);
                  }
 else {
                     lVar24 = *(long*)( this + 0xd88 );
                     if (lVar24 == 0) goto LAB_00113730;
                     lVar21 = *(long*)( lVar24 + -8 );
                     if (lVar21 <= (long)uVar16) goto LAB_00112b72;
                     lVar24 = *(long*)( lVar24 + lVar22 );
                     if (lVar24 == 0) {
                        LAB_001156dc:local_130 = (String*)0x0;
                     }
 else {
                        local_130 = (String*)0x0;
                        if (*(char**)( lVar24 + 8 ) == (char*)0x0) {
                           if (*(long*)( lVar24 + 0x10 ) == 0) goto LAB_001156dc;
                           CowData<char32_t>::_ref((CowData<char32_t>*)&local_130, (CowData*)( lVar24 + 0x10 ));
                        }
 else {
                           String::parse_latin1((String*)&local_130, *(char**)( lVar24 + 8 ));
                        }

                     }

                     String::operator +((String*)&local_128, (String*)&local_168);
                     StringName::StringName((StringName*)&local_118, (String*)&local_128, false);
                     AnimationNodeStateMachinePlayback::travel(pSVar23, bVar19);
                  }

                  if (( StringName::configured != '\0' ) && ( local_118 != (long*)0x0 )) {
                     StringName::unref();
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
                  CanvasItem::queue_redraw();
                  goto LAB_001129b4;
               }

               lVar24 = *(long*)( this + 0xd88 );
               if (this[0xa18] == (AnimationNodeStateMachineEditor)0x0) {
                  if (lVar24 == 0) break;
                  lVar21 = *(long*)( lVar24 + -8 );
                  if (lVar21 <= (long)uVar16) goto LAB_00112b72;
                  local_88 = InputEventMouse::get_position();
                  cVar12 = Rect2::has_point((Rect2*)( lVar24 + 0x28 + lVar22 ), (Vector2*)&local_88);
                  if (cVar12 != '\0') {
                     if (*(long*)( this + 0xd88 ) == 0) break;
                     lVar21 = *(long*)( *(long*)( this + 0xd88 ) + -8 );
                     if (lVar21 <= (long)uVar16) goto LAB_00112b72;
                     cVar12 = AnimationNodeStateMachine::can_edit_node(*(StringName**)( this + 0xa10 ));
                     if (cVar12 != '\0') {
                        local_118 = (long*)0x0;
                        Control::get_theme_stylebox((StringName*)&local_128, *(StringName**)( this + 0xa40 ));
                        if (( StringName::configured != '\0' ) && ( local_118 != (long*)0x0 )) {
                           StringName::unref();
                        }

                        lVar24 = *(long*)( this + 0xd88 );
                        if (lVar24 == 0) goto LAB_00113730;
                        lVar21 = *(long*)( lVar24 + -8 );
                        if (lVar21 <= (long)uVar16) goto LAB_00112b72;
                        puVar4 = (undefined8*)( lVar24 + 0x28 + lVar22 );
                        local_d8._0_8_ = *puVar4;
                        local_d8._8_8_ = puVar4[1];
                        uVar34 = StyleBox::get_offset();
                        local_d8._0_8_ = CONCAT44(SUB84(local_d8._0_8_, 4) - (float)( (ulong)uVar34 >> 0x20 ), (float)local_d8._0_8_ - (float)uVar34);
                        uVar34 = ( **(code**)( *(long*)local_128 + 0x1d0 ) )();
                        pVVar10 = *(Vector2i**)( this + 0xa38 );
                        fVar28 = (float)local_d8._8_8_;
                        local_d8._12_4_ = (float)( (ulong)uVar34 >> 0x20 ) + SUB84(local_d8._8_8_, 4);
                        local_d8._8_4_ = (float)uVar34 + fVar28;
                        uVar34 = Control::get_screen_position();
                        local_f8[0]._4_4_ = (float)( (ulong)uVar34 >> 0x20 ) + local_d8._4_4_;
                        local_f8[0]._0_4_ = (float)uVar34 + local_d8._0_4_;
                        local_88 = Vector2::operator_cast_to_Vector2i((Vector2*)local_f8);
                        Window::set_position(pVVar10);
                        pVVar10 = *(Vector2i**)( this + 0xa38 );
                        local_88 = Vector2::operator_cast_to_Vector2i((Vector2*)( local_d8 + 8 ));
                        Window::set_size(pVVar10);
                        lVar24 = *(long*)( this + 0xd88 );
                        uVar34 = *(undefined8*)( this + 0xa40 );
                        if (lVar24 == 0) goto LAB_00113730;
                        lVar21 = *(long*)( lVar24 + -8 );
                        if (lVar21 <= (long)uVar16) goto LAB_00112b72;
                        lVar24 = *(long*)( lVar24 + lVar22 );
                        if (lVar24 == 0) {
                           local_118 = (long*)0x0;
                        }
 else {
                           local_118 = (long*)0x0;
                           if (*(char**)( lVar24 + 8 ) == (char*)0x0) {
                              if (*(long*)( lVar24 + 0x10 ) != 0) {
                                 CowData<char32_t>::_ref((CowData<char32_t>*)&local_118, (CowData*)( lVar24 + 0x10 ));
                              }

                           }
 else {
                              String::parse_latin1((String*)&local_118, *(char**)( lVar24 + 8 ));
                           }

                        }

                        LineEdit::set_text(uVar34, (StringName*)&local_118);
                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
                        local_88 = 0;
                        local_80 = 0;
                        ( **(code**)( **(long**)( this + 0xa38 ) + 0x240 ) )();
                        Control::grab_focus();
                        LineEdit::select_all();
                        lVar24 = *(long*)( this + 0xd88 );
                        if (lVar24 == 0) goto LAB_00113730;
                        lVar21 = *(long*)( lVar24 + -8 );
                        if (lVar21 <= (long)uVar16) goto LAB_00112b72;
                        lVar24 = *(long*)( lVar24 + lVar22 );
                        if (lVar24 == 0) {
                           local_118 = (long*)0x0;
                        }
 else {
                           local_118 = (long*)0x0;
                           if (*(char**)( lVar24 + 8 ) == (char*)0x0) {
                              if (*(long*)( lVar24 + 0x10 ) != 0) {
                                 CowData<char32_t>::_ref((CowData<char32_t>*)&local_118, (CowData*)( lVar24 + 0x10 ));
                              }

                           }
 else {
                              String::parse_latin1((String*)&local_118, *(char**)( lVar24 + 8 ));
                           }

                        }

                        plVar18 = *(long**)( this + 0xdc8 );
                        if (plVar18 != local_118) {
                           if (plVar18 != (long*)0x0) {
                              LOCK();
                              plVar18 = plVar18 + -2;
                              *plVar18 = *plVar18 + -1;
                              UNLOCK();
                              if (*plVar18 == 0) {
                                 lVar24 = *(long*)( this + 0xdc8 );
                                 *(undefined8*)( this + 0xdc8 ) = 0;
                                 Memory::free_static((void*)( lVar24 + -0x10 ), false);
                              }

                           }

                           *(long**)( this + 0xdc8 ) = local_118;
                           local_118 = (long*)0x0;
                        }

                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
                        Ref<StyleBox>::unref((Ref<StyleBox>*)&local_128);
                        goto LAB_001129b4;
                     }

                  }

                  lVar24 = *(long*)( this + 0xd88 );
               }

               if (lVar24 == 0) break;
               lVar21 = *(long*)( lVar24 + -8 );
               if (lVar21 <= (long)uVar16) goto LAB_00112b72;
               local_88 = InputEventMouse::get_position();
               cVar12 = Rect2::has_point((Rect2*)( lVar24 + 0x38 + lVar22 ), (Vector2*)&local_88);
               if (cVar12 != '\0') {
                  create_custom_callable_function_pointer<AnimationNodeStateMachineEditor,String_const&>((AnimationNodeStateMachineEditor*)&local_118, (char*)this, (_func_void_String_ptr*)"&AnimationNodeStateMachineEditor::_open_editor");
                  lVar24 = *(long*)( this + 0xd88 );
                  if (lVar24 == 0) goto LAB_00113730;
                  lVar21 = *(long*)( lVar24 + -8 );
                  if (lVar21 <= (long)uVar16) goto LAB_00112b72;
                  StringName::StringName((StringName*)&local_128, (StringName*)( lVar22 + lVar24 ));
                  Variant::Variant((Variant*)&local_88, (StringName*)&local_128);
                  Variant::Variant((Variant*)local_70, 0);
                  local_d8._0_8_ = (StringName*)&local_88;
                  Callable::call_deferredp((Variant**)&local_118, (int)local_d8);
                  if (Variant::needs_deinit[local_70[0]] != '\0') {
                     Variant::_clear_internal();
                  }

                  if (Variant::needs_deinit[(int)(float)local_88] != '\0') {
                     Variant::_clear_internal();
                  }

                  if (( StringName::configured != '\0' ) && ( local_128 != (String*)0x0 )) {
                     StringName::unref();
                  }

                  Callable::~Callable((Callable*)&local_118);
                  goto LAB_001129b4;
               }

               lVar24 = *(long*)( this + 0xd88 );
               if (lVar24 == 0) break;
               lVar21 = *(long*)( lVar24 + -8 );
               if (lVar21 <= (long)uVar16) goto LAB_00112b72;
               local_88 = InputEventMouse::get_position();
               cVar12 = Rect2::has_point((Rect2*)( lVar24 + 8 + lVar22 ), (Vector2*)&local_88);
               if (cVar12 != '\0') {
                  lVar24 = *(long*)( this + 0xd88 );
                  if (lVar24 == 0) goto LAB_00113730;
                  lVar21 = *(long*)( lVar24 + -8 );
                  if (lVar21 <= (long)uVar16) goto LAB_00112b72;
                  StringName::operator =(pSVar9, (StringName*)( lVar22 + lVar24 ));
                  local_118 = (long*)( (ulong)local_118 & 0xffffffff00000000 );
                  cVar12 = HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::_lookup_pos((HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>*)( this + 0xa88 ), pSVar9, (uint*)&local_118);
                  if (cVar12 == '\0') {
                     HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::clear((HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>*)( this + 0xa88 ));
                  }

                  HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert((StringName*)&local_118);
                  _update_connected_nodes(this, pSVar9);
                  AnimationNodeStateMachine::get_node((StringName*)&local_128);
                  pOVar14 = (Object*)EditorNode::singleton;
                  local_118 = (long*)0x0;
                  String::parse_latin1((String*)&local_118, "");
                  EditorNode::push_item(pOVar14, local_128, bVar19);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
                  CanvasItem::queue_redraw();
                  *(undefined2*)( this + 0xd38 ) = 1;
                  uVar34 = InputEventMouse::get_position();
                  *(undefined8*)( this + 0xd3c ) = uVar34;
                  if (*(long*)( this + 0xd50 ) != 0) {
                     StringName::unref();
                     *(undefined8*)( this + 0xd50 ) = 0;
                  }

                  if (*(long*)( this + 0xd58 ) != 0) {
                     StringName::unref();
                     *(undefined8*)( this + 0xd58 ) = 0;
                  }

                  _update_mode(this);
                  Ref<AnimationNode>::unref((Ref<AnimationNode>*)&local_128);
                  goto LAB_001129b4;
               }

               uVar16 = uVar16 - 1;
               if ((int)uVar16 < 0) goto LAB_00114c11;
               lVar24 = *(long*)( this + 0xd88 );
            }
;
            lVar21 = 0;
            goto LAB_00112b72;
         }

         LAB_00114c11:local_1c8 = 1e+20;
         lVar24 = *(long*)( this + 0xd98 );
         local_120 = (int*)0x0;
         local_1f8._0_4_ = -1;
         for (uVar16 = 0; ( lVar24 != 0 && ( (long)uVar16 < *(long*)( lVar24 + -8 ) ) ); uVar16 = uVar16 + 1) {
            lVar24 = lVar24 + uVar16 * 0x50;
            uVar34 = *(undefined8*)( lVar24 + 0x18 );
            uVar37 = *(undefined8*)( lVar24 + 0x10 );
            fVar41 = (float)uVar37;
            fVar29 = (float)( (ulong)uVar37 >> 0x20 );
            uVar35 = InputEventMouse::get_position();
            local_d8._0_8_ = CONCAT44((float)( (ulong)uVar35 >> 0x20 ) - fVar29, (float)uVar35 - fVar41);
            local_88._0_4_ = (float)uVar34 - fVar41;
            local_88._4_4_ = (float)( (ulong)uVar34 >> 0x20 ) - fVar29;
            fVar28 = (float)Vector2::length_squared();
            if (_LC284 <= fVar28) {
               fVar30 = (float)Vector2::dot((Vector2*)&local_88);
               fVar30 = fVar30 / fVar28;
               if (( 0.0 < fVar30 ) && ( uVar37 = fVar30 < _LC65 )) {
                  uVar37 = CONCAT44(local_88._4_4_ * fVar30 + fVar29, (float)local_88 * fVar30 + fVar41);
               }

            }

            local_1b0 = (Vector2*)local_d8;
            local_d8._0_8_ = uVar37;
            local_88 = InputEventMouse::get_position();
            fVar28 = (float)Vector2::distance_to(local_1b0);
            lVar24 = *(long*)( this + 0xd98 );
            if (lVar24 == 0) goto LAB_00113730;
            lVar21 = *(long*)( lVar24 + -8 );
            if (lVar21 <= (long)uVar16) goto LAB_00112b72;
            pfVar3 = (float*)( lVar24 + 0x34 + uVar16 * 0x50 );
            if (fVar28 < *pfVar3 || fVar28 == *pfVar3) {
               iVar13 = (int)uVar16;
               if (ABS(fVar28 - local_1c8) < _LC64) {
                  Vector<int>::push_back((Vector<int>*)&local_128, iVar13);
                  lVar24 = *(long*)( this + 0xd98 );
               }
 else if (fVar28 < local_1c8) {
                  CowData<int>::resize<false>((CowData<int>*)&local_120, 0);
                  Vector<int>::push_back((Vector<int>*)&local_128, iVar13);
                  lVar24 = *(long*)( this + 0xd98 );
                  local_1c8 = fVar28;
                  local_1f8._0_4_ = iVar13;
               }

            }

         }

         if (( local_120 != (int*)0x0 ) && ( 1 < *(long*)( local_120 + -2 ) )) {
            CowData<int>::_copy_on_write((CowData<int>*)&local_120);
            piVar26 = local_120;
            CowData<int>::_copy_on_write((CowData<int>*)&local_120);
            if (local_120 == (int*)0x0) {
               lVar24 = 0;
            }
 else {
               lVar24 = *(long*)( local_120 + -2 );
            }

            piVar2 = local_120 + lVar24;
            fVar28 = _LC280;
            for (; auVar39 = local_d8,piVar2 != piVar26; piVar26 = piVar26 + 1) {
               iVar13 = *piVar26;
               uVar16 = (ulong)iVar13;
               lVar24 = *(long*)( this + 0xd98 );
               if ((long)uVar16 < 0) {
                  if (lVar24 == 0) goto LAB_00114980;
                  LAB_001158b2:lVar21 = *(long*)( lVar24 + -8 );
                  goto LAB_00112b72;
               }

               if (lVar24 == 0) goto LAB_00114980;
               if (*(long*)( lVar24 + -8 ) <= (long)uVar16) goto LAB_001158b2;
               lVar24 = lVar24 + uVar16 * 0x50;
               uVar34 = *(undefined8*)( lVar24 + 0x10 );
               uVar37 = *(undefined8*)( lVar24 + 0x18 );
               local_d8._4_4_ = ( (float)( (ulong)uVar34 >> 0x20 ) + (float)( (ulong)uVar37 >> 0x20 ) ) * _LC171._4_4_;
               local_d8._0_4_ = ( (float)uVar34 + (float)uVar37 ) * (float)_LC171;
               local_d8._8_8_ = auVar39._8_8_;
               local_88 = InputEventMouse::get_position();
               fVar41 = (float)Vector2::distance_to((Vector2*)local_d8);
               if (fVar28 <= fVar41) {
                  iVar13 = (int)local_1f8;
                  fVar41 = fVar28;
               }

               fVar28 = fVar41;
               local_1f8._0_4_ = iVar13;
            }

         }

         if (-1 < (int)local_1f8) {
            uVar16 = (ulong)(int)local_1f8;
            lVar24 = *(long*)( this + 0xd98 );
            if (lVar24 != 0) {
               lVar21 = *(long*)( lVar24 + -8 );
               if (lVar21 <= (long)uVar16) goto LAB_00112b72;
               StringName::operator =((StringName*)( this + 0xda0 ), (StringName*)( lVar24 + uVar16 * 0x50 ));
               lVar24 = *(long*)( this + 0xd98 );
               if (lVar24 != 0) {
                  lVar21 = *(long*)( lVar24 + -8 );
                  if (lVar21 <= (long)uVar16) goto LAB_00112b72;
                  StringName::operator =((StringName*)( this + 0xda8 ), (StringName*)( lVar24 + 8 + uVar16 * 0x50 ));
                  *(int*)( this + 0xdb0 ) = (int)local_1f8;
                  HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::clear((HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>*)( this + 0xe40 ));
                  HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert((StringName*)&local_118);
                  HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert((StringName*)&local_118);
                  AnimationNodeStateMachine::get_transition((int)(Ref<AnimationNodeStateMachineTransition>*)&local_130);
                  cVar12 = AnimationNodeStateMachine::is_transition_across_group((int)*(undefined8*)( this + 0xa10 ));
                  pOVar14 = (Object*)EditorNode::singleton;
                  if (cVar12 == '\0') {
                     local_118 = (long*)0x0;
                     String::parse_latin1((String*)&local_118, "");
                     EditorNode::push_item(pOVar14, local_130, bVar19);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
                  }
 else {
                     local_118 = (long*)0x0;
                     String::parse_latin1((String*)&local_118, "");
                     EditorNode::push_item(pOVar14, local_130, bVar19);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
                     pOVar14 = (Object*)EditorNode::singleton;
                     local_118 = (long*)0x0;
                     String::parse_latin1((String*)&local_118, "");
                     EditorNode::push_item(pOVar14, (String*)0x0, bVar19);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
                  }

                  Ref<AnimationNodeStateMachineTransition>::unref((Ref<AnimationNodeStateMachineTransition>*)&local_130);
                  goto LAB_001151d5;
               }

            }

            lVar21 = 0;
            goto LAB_00112b72;
         }

         LAB_001151d5:CanvasItem::queue_redraw();
         _update_mode(this);
         if (local_120 != (int*)0x0) {
            LOCK();
            plVar18 = (long*)( local_120 + -4 );
            *plVar18 = *plVar18 + -1;
            UNLOCK();
            if (*plVar18 == 0) {
               Memory::free_static(local_120 + -4, false);
            }

         }

      }

      if (( ( this[0xd38] != (AnimationNodeStateMachineEditor)0x0 ) && ( iVar13 = InputEventMouseButton::get_button_index() ),iVar13 == 1 )) {
         if (this[0xd39] != (AnimationNodeStateMachineEditor)0x0) {
            AnimationNodeStateMachine::get_node((StringName*)&local_138);
            this[0xc80] = (AnimationNodeStateMachineEditor)0x1;
            pOVar14 = (Object*)EditorUndoRedoManager::get_singleton();
            local_128 = (String*)0x0;
            String::parse_latin1((String*)&local_128, "");
            local_130 = (String*)0x0;
            String::parse_latin1((String*)&local_130, "Move Node");
            TTR((String*)&local_118, (String*)&local_130);
            EditorUndoRedoManager::create_action(pOVar14, (StringName*)&local_118, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
            lVar24 = *(long*)( this + 0xd88 );
            if (lVar24 != 0) {
               auVar39._8_8_ = (Variant*)local_70;
               auVar39._0_8_ = (StringName*)&local_88;
               auVar40._8_8_ = local_c0;
               auVar40._0_8_ = (Variant*)local_d8;
               uVar16 = 0;
               do {
                  if (*(long*)( lVar24 + -8 ) <= (long)uVar16) break;
                  local_118 = (long*)( (ulong)local_118 & 0xffffffff00000000 );
                  lVar22 = uVar16 * 0x50;
                  cVar12 = HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::_lookup_pos((HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>*)( this + 0xa88 ), (StringName*)( lVar24 + lVar22 ), (uint*)&local_118);
                  if (cVar12 != '\0') {
                     uVar31 = EditorScale::get_scale();
                     auVar36._8_8_ = 0;
                     auVar36._0_8_ = *(ulong*)( this + 0xd44 );
                     auVar38._4_4_ = uVar31;
                     auVar38._0_4_ = uVar31;
                     auVar38._8_8_ = _LC278;
                     auVar36 = divps(auVar36, auVar38);
                     if (*(long*)( this + 0xd88 ) == 0) goto LAB_00114980;
                     lVar21 = *(long*)( *(long*)( this + 0xd88 ) + -8 );
                     if (lVar21 <= (long)uVar16) goto LAB_00112b72;
                     uVar34 = AnimationNodeStateMachine::get_node_position(*(StringName**)( this + 0xa10 ));
                     lVar24 = *(long*)( this + 0xd88 );
                     if (lVar24 == 0) goto LAB_00114980;
                     lVar21 = *(long*)( lVar24 + -8 );
                     if (lVar21 <= (long)uVar16) goto LAB_00112b72;
                     StringName::StringName((StringName*)&local_118, (StringName*)( lVar24 + lVar22 ));
                     StringName::StringName((StringName*)&local_128, "set_node_position", false);
                     pSVar23 = *(StringName**)( this + 0xa10 );
                     local_100 = CONCAT44(auVar36._4_4_ + (float)( (ulong)uVar34 >> 0x20 ), auVar36._0_4_ + (float)uVar34);
                     Variant::Variant((Variant*)local_d8, (StringName*)&local_118);
                     Variant::Variant(local_c0, (Vector2*)&local_100);
                     pVVar25 = local_90;
                     local_a8 = 0;
                     local_a0 = (undefined1[16])0x0;
                     local_f8[0] = auVar40;
                     EditorUndoRedoManager::add_do_methodp(pOVar14, pSVar23, (Variant**)&local_128, (int)(Vector2*)local_f8);
                     do {
                        pVVar1 = pVVar25 + -0x18;
                        pVVar25 = pVVar25 + -0x18;
                        if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
                           Variant::_clear_internal();
                        }

                     }
 while ( pVVar25 != (Variant*)local_d8 );
                     if (( ( StringName::configured != '\0' ) && ( ( local_128 == (String*)0x0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_118 != (long*)0x0 )) {
                        StringName::unref();
                     }

                     if (*(long*)( this + 0xd88 ) == 0) goto LAB_00114980;
                     lVar21 = *(long*)( *(long*)( this + 0xd88 ) + -8 );
                     if (lVar21 <= (long)uVar16) goto LAB_00112b72;
                     uVar34 = AnimationNodeStateMachine::get_node_position(*(StringName**)( this + 0xa10 ));
                     lVar24 = *(long*)( this + 0xd88 );
                     if (lVar24 == 0) goto LAB_00114980;
                     lVar21 = *(long*)( lVar24 + -8 );
                     if (lVar21 <= (long)uVar16) goto LAB_00112b72;
                     StringName::StringName((StringName*)&local_118, (StringName*)( lVar24 + lVar22 ));
                     StringName::StringName((StringName*)&local_128, "set_node_position", false);
                     local_f8[0]._0_8_ = uVar34;
                     pSVar9 = *(StringName**)( this + 0xa10 );
                     Variant::Variant((Variant*)&local_88, (StringName*)&local_118);
                     Variant::Variant((Variant*)local_70, (Vector2*)local_f8);
                     local_58 = 0;
                     local_50 = (undefined1[16])0x0;
                     pSVar23 = (StringName*)local_40;
                     local_d8 = auVar39;
                     EditorUndoRedoManager::add_undo_methodp(pOVar14, pSVar9, (Variant**)&local_128, (int)(Variant*)local_d8);
                     do {
                        pSVar9 = pSVar23 + -0x18;
                        pSVar23 = pSVar23 + -0x18;
                        if (Variant::needs_deinit[*(int*)pSVar9] != '\0') {
                           Variant::_clear_internal();
                        }

                     }
 while ( pSVar23 != (StringName*)&local_88 );
                     if (( ( StringName::configured != '\0' ) && ( ( local_128 == (String*)0x0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_118 != (long*)0x0 )) {
                        StringName::unref();
                     }

                  }

                  lVar24 = *(long*)( this + 0xd88 );
                  uVar16 = uVar16 + 1;
               }
 while ( lVar24 != 0 );
            }

            StringName::StringName((StringName*)&local_118, "_update_graph", false);
            EditorUndoRedoManager::add_do_method<>((EditorUndoRedoManager*)pOVar14, (Object*)this, (StringName*)&local_118);
            if (( StringName::configured != '\0' ) && ( local_118 != (long*)0x0 )) {
               StringName::unref();
            }

            StringName::StringName((StringName*)&local_118, "_update_graph", false);
            EditorUndoRedoManager::add_undo_method<>((EditorUndoRedoManager*)pOVar14, (Object*)this, (StringName*)&local_118);
            if (( StringName::configured != '\0' ) && ( local_118 != (long*)0x0 )) {
               StringName::unref();
            }

            EditorUndoRedoManager::commit_action(SUB81(pOVar14, 0));
            this[0xc80] = (AnimationNodeStateMachineEditor)0x0;
            Ref<AnimationNode>::unref((Ref<AnimationNode>*)&local_138);
         }

         if (*(long*)( this + 0xd50 ) != 0) {
            StringName::unref();
            *(undefined8*)( this + 0xd50 ) = 0;
         }

         if (*(long*)( this + 0xd58 ) != 0) {
            StringName::unref();
            *(undefined8*)( this + 0xd58 ) = 0;
         }

         *(undefined2*)( this + 0xd38 ) = 0;
         CanvasItem::queue_redraw();
      }

      cVar12 = BaseButton::is_pressed();
      if (( ( ( ( ( cVar12 != '\0' ) && ( cVar12 = InputEventWithModifiers::is_shift_pressed() ),cVar12 != '\0' ) ) || ( cVar12 = BaseButton::is_pressed() ),cVar12 != '\0' ) ) && ( ( iVar13 = InputEventMouseButton::get_button_index() ),iVar13 == 1 && ( cVar12 = InputEvent::is_pressed() ),cVar12 != '\0' )) {
         uVar16 = (ulong)uVar27;
         while (lVar24 != 0) {
            lVar21 = *(long*)( lVar24 + -8 );
            if (lVar21 <= (long)uVar16) goto LAB_00112b72;
            uVar34 = InputEventMouse::get_position();
            local_f8[0]._0_8_ = uVar34;
            cVar12 = Rect2::has_point((Rect2*)( lVar24 + 8 + uVar16 * 0x50 ), (Vector2*)local_f8);
            if (cVar12 != '\0') {
               lVar24 = *(long*)( this + 0xd88 );
               *(undefined2*)( this + 0xd60 ) = 0x101;
               if (lVar24 != 0) {
                  lVar21 = *(long*)( lVar24 + -8 );
                  if (lVar21 <= (long)uVar16) goto LAB_00112b72;
                  StringName::operator =((StringName*)( this + 0xd68 ), (StringName*)( lVar24 + uVar16 * 0x50 ));
                  uVar34 = InputEventMouse::get_position();
                  *(undefined8*)( this + 0xd70 ) = uVar34;
                  if (*(long*)( this + 0xd78 ) != 0) {
                     StringName::unref();
                     *(undefined8*)( this + 0xd78 ) = 0;
                  }

                  goto LAB_001129b4;
               }

               break;
            }

            uVar16 = uVar16 - 1;
            if ((int)uVar16 < 0) goto LAB_00112818;
            lVar24 = *(long*)( this + 0xd88 );
         }
;
         LAB_00113460:lVar21 = 0;
         goto LAB_00112b72;
      }

      LAB_00112818:if (( ( this[0xd60] != (AnimationNodeStateMachineEditor)0x0 ) && ( iVar13 = InputEventMouseButton::get_button_index() ),iVar13 == 1 )) {
         if (*(long*)( this + 0xd78 ) == 0) {
            uVar34 = InputEventMouse::get_position();
            local_f8[0]._0_8_ = uVar34;
            _open_menu(this, (Vector2*)local_f8);
         }
 else {
            AnimationNodeStateMachine::get_node((StringName*)&local_158);
            local_150 = 0;
            Ref<AnimationNodeStateMachine>::operator =((Ref<AnimationNodeStateMachine>*)&local_150, local_158);
            pRVar17 = local_158;
            if (( ( local_158 != (Ref*)0x0 ) && ( pRVar17 = (Ref*)__dynamic_cast(local_158, &Object::typeinfo, &AnimationNodeEndState::typeinfo) ),pRVar17 != (Ref*)0x0 )) {
               pRVar17 = (Ref*)0x0;
            }

            cVar12 = AnimationNodeStateMachine::has_transition(*(StringName**)( this + 0xa10 ), (StringName*)( this + 0xd68 ));
            if (( ( cVar12 == '\0' ) || ( cVar12 = AnimationNodeStateMachine::can_edit_node(*(StringName**)( this + 0xa10 )) ),pSVar8 = EditorNode::singleton,cVar12 == '\0' )) {
               _add_transition(this, false);
            }
 else {
               local_118 = (long*)0x0;
               String::parse_latin1((String*)&local_118, "");
               local_128 = (String*)0x0;
               String::parse_latin1((String*)&local_128, "Warning!");
               TTR((String*)&local_130, (String*)&local_128);
               local_140 = 0;
               String::parse_latin1((String*)&local_140, "");
               local_148 = (long*)0x0;
               String::parse_latin1((String*)&local_148, "Transition exists!");
               TTR((String*)&local_138, (String*)&local_148);
               EditorNode::show_warning(pSVar8, (String*)&local_138);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_148);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_140);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
               this[0xd60] = (AnimationNodeStateMachineEditor)0x0;
            }

            if (( ( pRVar17 != (Ref*)0x0 ) && ( cVar12 = RefCounted::unreference() ),cVar12 != '\0' )) &&( cVar12 = cVar12 != '\0' )(**(code**)( *(long*)pRVar17 + 0x140 ))(pRVar17);
            Memory::free_static(pRVar17, false);
         }

         Ref<AnimationNodeStateMachine>::unref((Ref<AnimationNodeStateMachine>*)&local_150);
         Ref<AnimationNode>::unref((Ref<AnimationNode>*)&local_158);
      }

      if (*(long*)( this + 0xd78 ) != 0) {
         StringName::unref();
         *(undefined8*)( this + 0xd78 ) = 0;
      }

      this[0xd61] = (AnimationNodeStateMachineEditor)0x0;
      CanvasItem::queue_redraw();
   }

   cVar12 = InputEvent::is_pressed();
   if (( ( cVar12 != '\0' ) && ( iVar13 = InputEventMouseButton::get_button_index() ),iVar13 == 1 )) {
      this[0xce8] = (AnimationNodeStateMachineEditor)0x1;
      uVar34 = CanvasItem::get_local_mouse_position();
      *(undefined8*)( this + 0xcec ) = uVar34;
      fVar28 = *(float*)( this + 0xcf0 );
      fVar41 = *(float*)( this + 0xcec );
      *(undefined8*)( this + 0xcf4 ) = uVar34;
      fVar29 = *(float*)( this + 0xcf4 );
      fVar30 = *(float*)( this + 0xcf8 );
      fVar5 = fVar41;
      if (fVar29 <= fVar41) {
         fVar5 = fVar29;
      }

      fVar6 = fVar28;
      if (fVar30 <= fVar28) {
         fVar6 = fVar30;
      }

      *(ulong*)( this + 0xcfc ) = CONCAT44(fVar6, fVar5);
      *(ulong*)( this + 0xd04 ) = CONCAT44(fVar28 - fVar30, ABS(fVar41 - fVar29)) & 0x7fffffffffffffff;
      cVar12 = InputEventWithModifiers::is_command_or_control_pressed();
      if (( cVar12 == '\0' ) && ( cVar12 = InputEventWithModifiers::is_shift_pressed() ),cVar12 == '\0') {
         HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::clear((HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>*)( this + 0xa88 ));
         HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::clear((HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>*)( this + 0xd10 ));
      }
 else {
         HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::operator =((HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>*)( this + 0xd10 ), (HashSet*)( this + 0xa88 ));
      }

   }

   iVar13 = InputEventMouseButton::get_button_index();
   if (( ( iVar13 == 1 ) && ( cVar12 = InputEvent::is_pressed() ),cVar12 == '\0' )) {
      this[0xce8] = (AnimationNodeStateMachineEditor)0x0;
      CanvasItem::queue_redraw();
      _update_mode(this);
   }

   cVar12 = InputEvent::is_pressed();
   if (( cVar12 == '\0' ) || ( iVar13 = iVar13 != 1 )) {
      lVar24 = *(long*)param_1;
      if (lVar24 != 0) goto LAB_0011286d;
   }
 else {
      lVar24 = *(long*)( this + 0xd88 );
      local_130 = (String*)0x0;
      if (( lVar24 != 0 ) && ( uVar27 = *(int*)( lVar24 + -8 ) - 1 ),-1 < (int)uVar27) {
         uVar16 = (ulong)uVar27;
         while (lVar24 != 0) {
            lVar21 = *(long*)( lVar24 + -8 );
            if (lVar21 <= (long)uVar16) goto LAB_00112b72;
            uVar34 = InputEventMouse::get_position();
            local_f8[0]._0_8_ = uVar34;
            cVar12 = Rect2::has_point((Rect2*)( lVar24 + 8 + uVar16 * 0x50 ), (Vector2*)local_f8);
            if (cVar12 != '\0') {
               lVar24 = *(long*)( this + 0xd88 );
               if (lVar24 != 0) {
                  lVar21 = *(long*)( lVar24 + -8 );
                  if (lVar21 <= (long)uVar16) goto LAB_00112b72;
                  StringName::operator =((StringName*)&local_130, (StringName*)( lVar24 + uVar16 * 0x50 ));
                  LAB_001140ca:if (local_130 == (String*)0x0) goto LAB_00114319;
                  this_00 = (HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>*)( this + 0xa88 );
                  local_118 = (long*)( (ulong)local_118 & 0xffffffff00000000 );
                  cVar12 = HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::_lookup_pos(this_00, (StringName*)&local_130, (uint*)&local_118);
                  if (( cVar12 == '\0' ) || ( cVar12 = InputEventWithModifiers::is_shift_pressed() ),cVar12 == '\0') {
                     cVar12 = InputEventWithModifiers::is_shift_pressed();
                     if (cVar12 == '\0') {
                        HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::clear(this_00);
                     }

                     HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert((StringName*)&local_118);
                  }
 else {
                     HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::erase(this_00, (StringName*)&local_130);
                  }

                  StringName::operator =((StringName*)( this + 0xa80 ), (StringName*)&local_130);
                  goto LAB_00114157;
               }

               break;
            }

            uVar16 = uVar16 - 1;
            if ((int)uVar16 < 0) goto LAB_001140ca;
            lVar24 = *(long*)( this + 0xd88 );
         }
;
         goto LAB_00113460;
      }

      LAB_00114319:HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::clear((HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>*)( this + 0xa88 ));
      if (*(long*)( this + 0xa80 ) != 0) {
         StringName::unref();
         *(undefined8*)( this + 0xa80 ) = 0;
      }

      LAB_00114157:_update_connected_nodes(this, (StringName*)( this + 0xa80 ));
      CanvasItem::queue_redraw();
      _update_mode(this);
      if (local_130 != (String*)0x0) {
         AnimationNodeStateMachine::get_node((StringName*)&local_128);
         pOVar14 = (Object*)EditorNode::singleton;
         local_118 = (long*)0x0;
         String::parse_latin1((String*)&local_118, "");
         EditorNode::push_item(pOVar14, local_128, bVar19);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
         *(undefined2*)( this + 0xd38 ) = 1;
         uVar34 = InputEventMouse::get_position();
         *(undefined8*)( this + 0xd3c ) = uVar34;
         if (*(long*)( this + 0xd50 ) != 0) {
            StringName::unref();
            *(undefined8*)( this + 0xd50 ) = 0;
         }

         if (*(long*)( this + 0xd58 ) != 0) {
            StringName::unref();
            *(undefined8*)( this + 0xd58 ) = 0;
         }

         Ref<AnimationNode>::unref((Ref<AnimationNode>*)&local_128);
         if (( StringName::configured != '\0' ) && ( local_130 != (String*)0x0 )) {
            StringName::unref();
         }

      }

   }

}
LAB_001129b4:cVar12 = RefCounted::unreference();if (( cVar12 != '\0' ) && ( cVar12 = cVar12 != '\0' )) {
   ( **(code**)( *(long*)local_210 + 0x140 ) )(local_210);
   Memory::free_static(local_210, false);
}
}LAB_001129c6:if (( ( local_1d0 != (Object*)0x0 ) && ( cVar12 = RefCounted::unreference() ),cVar12 != '\0' )) &&( cVar12 = cVar12 != '\0' )(**(code**)( *(long*)local_1d0 + 0x140 ))(local_1d0);Memory::free_static(local_1d0, false);}
  }Ref<AnimationNodeStateMachinePlayback>::unref((Ref<AnimationNodeStateMachinePlayback>*)&local_160);CowData<char32_t>::_unref((CowData<char32_t>*)&local_168);LAB_001129f4:if (local_40[0] == *(long*)( in_FS_OFFSET + 0x28 )) {
   return;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();LAB_00114980:lVar21 = 0;goto LAB_00112b72;LAB_00113730:lVar21 = 0;LAB_00112b72:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, uVar16, lVar21, "p_index", "size()", "", false, true);_err_flush_stdout();/* WARNING: Does not return */pcVar11 = (code*)invalidInstructionException();( *pcVar11 )();}/* CowData<EditorAnimationMultiTransitionEdit::Transition>::_copy_on_write() [clone .isra.0] */void CowData<EditorAnimationMultiTransitionEdit::Transition>::_copy_on_write(CowData<EditorAnimationMultiTransitionEdit::Transition> *this) {
   long lVar1;
   code *pcVar2;
   char cVar3;
   undefined8 *puVar4;
   StringName *pSVar5;
   ulong uVar6;
   long lVar7;
   StringName *this_00;
   if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
      return;
   }

   if (*(long*)this == 0) {
      /* WARNING: Does not return */
      pcVar2 = (code*)invalidInstructionException();
      ( *pcVar2 )();
   }

   lVar1 = *(long*)( *(long*)this + -8 );
   uVar6 = 0x10;
   if (lVar1 * 0x18 != 0) {
      uVar6 = lVar1 * 0x18 - 1;
      uVar6 = uVar6 | uVar6 >> 1;
      uVar6 = uVar6 | uVar6 >> 2;
      uVar6 = uVar6 | uVar6 >> 4;
      uVar6 = uVar6 | uVar6 >> 8;
      uVar6 = uVar6 | uVar6 >> 0x10;
      uVar6 = ( uVar6 | uVar6 >> 0x20 ) + 0x11;
   }

   puVar4 = (undefined8*)Memory::alloc_static(uVar6, false);
   if (puVar4 != (undefined8*)0x0) {
      lVar7 = 0;
      *puVar4 = 1;
      puVar4[1] = lVar1;
      this_00 = (StringName*)( puVar4 + 2 );
      if (lVar1 != 0) {
         do {
            pSVar5 = this_00 + *(long*)this + ( -0x10 - (long)puVar4 );
            StringName::StringName(this_00, pSVar5);
            StringName::StringName(this_00 + 8, pSVar5 + 8);
            *(undefined8*)( this_00 + 0x10 ) = 0;
            if (*(long*)( pSVar5 + 0x10 ) != 0) {
               *(long*)( this_00 + 0x10 ) = *(long*)( pSVar5 + 0x10 );
               cVar3 = RefCounted::reference();
               if (cVar3 == '\0') {
                  *(undefined8*)( this_00 + 0x10 ) = 0;
               }

            }

            lVar7 = lVar7 + 1;
            this_00 = this_00 + 0x18;
         }
 while ( lVar1 != lVar7 );
      }

      _unref(this);
      *(StringName**)this = (StringName*)( puVar4 + 2 );
      return;
   }

   _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
   return;
}
/* EditorAnimationMultiTransitionEdit::_set(StringName const&, Variant const&) */ulong EditorAnimationMultiTransitionEdit::_set(EditorAnimationMultiTransitionEdit *this, StringName *param_1, Variant *param_2) {
   char *pcVar1;
   code *pcVar2;
   int iVar3;
   ulong uVar4;
   long lVar5;
   int iVar6;
   wchar32 wVar7;
   long lVar8;
   long in_FS_OFFSET;
   long local_68;
   undefined8 local_60;
   char *local_58;
   size_t local_50;
   long local_40;
   lVar8 = *(long*)param_1;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (lVar8 == 0) {
      local_60 = 0;
   }
 else {
      pcVar1 = *(char**)( lVar8 + 8 );
      local_60 = 0;
      if (pcVar1 == (char*)0x0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar8 + 0x10 ));
      }
 else {
         local_50 = strlen(pcVar1);
         local_58 = pcVar1;
         String::parse_latin1((StrRange*)&local_60);
      }

   }

   iVar6 = (int)(CowData<char32_t>*)&local_60;
   wVar7 = (wchar32)(CowData<char32_t>*)&local_58;
   String::get_slicec(wVar7, iVar6);
   iVar3 = String::to_int();
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   lVar8 = *(long*)param_1;
   if (lVar8 == 0) {
      local_60 = 0;
   }
 else {
      pcVar1 = *(char**)( lVar8 + 8 );
      local_60 = 0;
      if (pcVar1 == (char*)0x0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar8 + 0x10 ));
      }
 else {
         local_50 = strlen(pcVar1);
         local_58 = pcVar1;
         String::parse_latin1((StrRange*)&local_60);
      }

   }

   String::get_slicec(wVar7, iVar6);
   lVar5 = (long)iVar3;
   StringName::StringName((StringName*)&local_68, (String*)&local_58, false);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   lVar8 = *(long*)( this + 0x188 );
   if (lVar5 < 0) {
      if (lVar8 != 0) {
         lVar8 = *(long*)( lVar8 + -8 );
         goto LAB_00115c61;
      }

   }
 else if (lVar8 != 0) {
      lVar8 = *(long*)( lVar8 + -8 );
      if (lVar5 < lVar8) {
         CowData<EditorAnimationMultiTransitionEdit::Transition>::_copy_on_write((CowData<EditorAnimationMultiTransitionEdit::Transition>*)( this + 0x188 ));
         Object::set(*(StringName**)( *(long*)( this + 0x188 ) + lVar5 * 0x18 + 0x10 ), (Variant*)&local_68, (bool*)param_2);
         uVar4 = (ulong)local_58 & 0xff;
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return uVar4;
         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      goto LAB_00115c61;
   }

   lVar8 = 0;
   LAB_00115c61:_err_print_index_error("operator[]", "./core/templates/vector.h", 0x38, lVar5, lVar8, "p_index", "((Vector<T> *)(this))->_cowdata.size()", "", false, true);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar2 = (code*)invalidInstructionException();
   ( *pcVar2 )();
}
/* CowData<AnimationNodeStateMachineEditor::NodeRect>::_copy_on_write() [clone .isra.0] */void CowData<AnimationNodeStateMachineEditor::NodeRect>::_copy_on_write(CowData<AnimationNodeStateMachineEditor::NodeRect> *this) {
   StringName SVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   undefined8 uVar6;
   undefined8 uVar7;
   undefined8 uVar8;
   undefined8 uVar9;
   undefined8 uVar10;
   undefined8 *puVar11;
   StringName *this_00;
   ulong uVar12;
   StringName *pSVar13;
   long lVar14;
   if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
      return;
   }

   if (*(long*)this == 0) {
      /* WARNING: Does not return */
      pcVar3 = (code*)invalidInstructionException();
      ( *pcVar3 )();
   }

   lVar2 = *(long*)( *(long*)this + -8 );
   uVar12 = 0x10;
   if (lVar2 * 0x50 != 0) {
      uVar12 = lVar2 * 0x50 - 1;
      uVar12 = uVar12 | uVar12 >> 1;
      uVar12 = uVar12 | uVar12 >> 2;
      uVar12 = uVar12 | uVar12 >> 4;
      uVar12 = uVar12 | uVar12 >> 8;
      uVar12 = uVar12 | uVar12 >> 0x10;
      uVar12 = ( uVar12 | uVar12 >> 0x20 ) + 0x11;
   }

   puVar11 = (undefined8*)Memory::alloc_static(uVar12, false);
   if (puVar11 != (undefined8*)0x0) {
      lVar14 = 0;
      *puVar11 = 1;
      puVar11[1] = lVar2;
      this_00 = (StringName*)( puVar11 + 2 );
      if (lVar2 != 0) {
         do {
            pSVar13 = this_00 + *(long*)this + ( -0x10 - (long)puVar11 );
            lVar14 = lVar14 + 1;
            StringName::StringName(this_00, pSVar13);
            uVar4 = *(undefined8*)( pSVar13 + 0x10 );
            uVar5 = *(undefined8*)( pSVar13 + 0x18 );
            uVar6 = *(undefined8*)( pSVar13 + 0x20 );
            uVar7 = *(undefined8*)( pSVar13 + 0x28 );
            uVar8 = *(undefined8*)( pSVar13 + 0x30 );
            uVar9 = *(undefined8*)( pSVar13 + 0x38 );
            uVar10 = *(undefined8*)( pSVar13 + 0x40 );
            SVar1 = pSVar13[0x48];
            *(undefined8*)( this_00 + 8 ) = *(undefined8*)( pSVar13 + 8 );
            *(undefined8*)( this_00 + 0x10 ) = uVar4;
            *(undefined8*)( this_00 + 0x18 ) = uVar5;
            *(undefined8*)( this_00 + 0x20 ) = uVar6;
            *(undefined8*)( this_00 + 0x28 ) = uVar7;
            *(undefined8*)( this_00 + 0x30 ) = uVar8;
            *(undefined8*)( this_00 + 0x38 ) = uVar9;
            *(undefined8*)( this_00 + 0x40 ) = uVar10;
            this_00[0x48] = SVar1;
            this_00 = this_00 + 0x50;
         }
 while ( lVar2 != lVar14 );
      }

      _unref(this);
      *(StringName**)this = (StringName*)( puVar11 + 2 );
      return;
   }

   _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
   return;
}
/* CowData<AnimationNodeStateMachineEditor::TransitionLine>::_copy_on_write() [clone .isra.0] */void CowData<AnimationNodeStateMachineEditor::TransitionLine>::_copy_on_write(CowData<AnimationNodeStateMachineEditor::TransitionLine> *this) {
   undefined4 uVar1;
   StringName SVar2;
   undefined2 uVar3;
   long lVar4;
   code *pcVar5;
   undefined8 *puVar6;
   StringName *this_00;
   StringName *pSVar7;
   ulong uVar8;
   long lVar9;
   if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
      return;
   }

   if (*(long*)this == 0) {
      /* WARNING: Does not return */
      pcVar5 = (code*)invalidInstructionException();
      ( *pcVar5 )();
   }

   lVar4 = *(long*)( *(long*)this + -8 );
   uVar8 = 0x10;
   if (lVar4 * 0x50 != 0) {
      uVar8 = lVar4 * 0x50 - 1;
      uVar8 = uVar8 | uVar8 >> 1;
      uVar8 = uVar8 | uVar8 >> 2;
      uVar8 = uVar8 | uVar8 >> 4;
      uVar8 = uVar8 | uVar8 >> 8;
      uVar8 = uVar8 | uVar8 >> 0x10;
      uVar8 = ( uVar8 | uVar8 >> 0x20 ) + 0x11;
   }

   puVar6 = (undefined8*)Memory::alloc_static(uVar8, false);
   if (puVar6 != (undefined8*)0x0) {
      lVar9 = 0;
      *puVar6 = 1;
      puVar6[1] = lVar4;
      this_00 = (StringName*)( puVar6 + 2 );
      if (lVar4 != 0) {
         do {
            pSVar7 = this_00 + *(long*)this + ( -0x10 - (long)puVar6 );
            lVar9 = lVar9 + 1;
            StringName::StringName(this_00, pSVar7);
            StringName::StringName(this_00 + 8, pSVar7 + 8);
            *(undefined8*)( this_00 + 0x10 ) = *(undefined8*)( pSVar7 + 0x10 );
            *(undefined8*)( this_00 + 0x18 ) = *(undefined8*)( pSVar7 + 0x18 );
            *(undefined4*)( this_00 + 0x20 ) = *(undefined4*)( pSVar7 + 0x20 );
            StringName::StringName(this_00 + 0x28, pSVar7 + 0x28);
            uVar1 = *(undefined4*)( pSVar7 + 0x34 );
            *(undefined2*)( this_00 + 0x30 ) = *(undefined2*)( pSVar7 + 0x30 );
            SVar2 = pSVar7[0x32];
            *(undefined4*)( this_00 + 0x34 ) = uVar1;
            uVar1 = *(undefined4*)( pSVar7 + 0x3c );
            this_00[0x32] = SVar2;
            uVar3 = *(undefined2*)( pSVar7 + 0x38 );
            *(undefined4*)( this_00 + 0x3c ) = uVar1;
            *(undefined2*)( this_00 + 0x38 ) = uVar3;
            this_00[0x40] = pSVar7[0x40];
            *(undefined4*)( this_00 + 0x44 ) = *(undefined4*)( pSVar7 + 0x44 );
            this_00[0x48] = pSVar7[0x48];
            this_00 = this_00 + 0x50;
         }
 while ( lVar4 != lVar9 );
      }

      _unref(this);
      *(StringName**)this = (StringName*)( puVar6 + 2 );
      return;
   }

   _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* AnimationNodeStateMachineEditor::_state_machine_draw() */void AnimationNodeStateMachineEditor::_state_machine_draw(AnimationNodeStateMachineEditor *this) {
   CowData<AnimationNodeStateMachineEditor::NodeRect> *this_00;
   CowData<AnimationNodeStateMachineEditor::TransitionLine> *this_01;
   undefined8 *puVar1;
   ushort uVar2;
   bool *pbVar3;
   char *__s;
   Rect2 *pRVar4;
   Ref *pRVar5;
   code *pcVar6;
   undefined1 auVar7[16];
   ulong uVar8;
   Object *pOVar9;
   char cVar10;
   char cVar11;
   bool bVar12;
   char cVar13;
   int iVar14;
   int iVar15;
   int iVar16;
   undefined4 uVar17;
   AnimationNodeStateMachineEditor *pAVar18;
   byte bVar19;
   byte bVar20;
   StringName *pSVar21;
   long lVar22;
   StringName *this_02;
   long lVar23;
   StringName SVar24;
   ushort uVar25;
   long *plVar26;
   long lVar27;
   long in_FS_OFFSET;
   float fVar28;
   float fVar29;
   float fVar30;
   float fVar31;
   undefined4 uVar32;
   undefined8 uVar33;
   undefined8 uVar34;
   undefined8 uVar35;
   float extraout_XMM0_Db;
   float extraout_XMM0_Db_00;
   float local_200;
   float local_1fc;
   StringName *local_1f8;
   float local_1e8;
   float local_1d0;
   float local_1cc;
   char local_17d;
   undefined8 *local_178;
   char *local_160;
   char *local_158;
   long local_150;
   long *local_148;
   undefined8 local_140;
   Ref<AnimationNodeStateMachineTransition> local_138[8];
   char *local_130;
   undefined8 local_128;
   Object *local_120[2];
   undefined8 *local_110;
   char *local_108;
   undefined8 *local_100;
   undefined8 local_f8;
   undefined8 local_f0;
   undefined1 local_e8[8];
   undefined8 uStack_e0;
   undefined8 uStack_d8;
   undefined8 uStack_d0;
   ulong uStack_c8;
   undefined8 local_c0;
   undefined8 uStack_b8;
   undefined8 local_b0;
   undefined8 uStack_a8;
   StringName local_a0;
   undefined1 local_98[16];
   undefined8 uStack_88;
   undefined8 local_80;
   ulong uStack_78;
   undefined4 local_70;
   undefined4 uStack_6c;
   undefined4 uStack_68;
   undefined4 uStack_64;
   undefined8 local_60;
   undefined8 uStack_58;
   StringName local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   pbVar3 = *(bool**)( AnimationTreeEditor::singleton + 0xa20 );
   if (pbVar3 == (bool*)0x0) goto LAB_00117940;
   local_160 = (char*)0x0;
   local_158 = (char*)0x0;
   local_110 = (undefined8*)0x0;
   local_128 = 0;
   String::parse_latin1((String*)&local_128, "playback");
   AnimationTreeEditor::get_base_path();
   String::operator +((String*)local_120, (String*)&local_130);
   StringName::StringName((StringName*)&local_108, (String*)local_120, false);
   Object::get((StringName*)local_98, pbVar3);
   local_150 = 0;
   Ref<AnimationNodeStateMachinePlayback>::operator =((Ref<AnimationNodeStateMachinePlayback>*)&local_150, (Variant*)local_98);
   if (Variant::needs_deinit[(int)local_98._0_4_] != '\0') {
      Variant::_clear_internal();
   }

   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_120);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
   local_17d = '\0';
   if (local_150 != 0) {
      local_17d = AnimationNodeStateMachinePlayback::is_playing();
      AnimationNodeStateMachinePlayback::get_current_node();
      if (local_160 == local_108) {
         if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_160 = local_108;
      }

      AnimationNodeStateMachinePlayback::get_fading_from_node();
      if (local_158 == local_108) {
         if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_158 = local_108;
      }

      AnimationNodeStateMachinePlayback::get_travel_path();
      if (local_100 != (undefined8*)0x0) {
         CowData<StringName>::_unref((CowData<StringName>*)&local_110);
         local_110 = local_100;
         local_100 = (undefined8*)0x0;
      }

      CowData<StringName>::_unref((CowData<StringName>*)&local_100);
   }

   cVar10 = Control::has_focus();
   cVar11 = (char)this;
   if (cVar10 != '\0') {
      pRVar4 = *(Rect2**)( this + 0xac0 );
      local_98._8_8_ = Control::get_size();
      local_98._0_8_ = 0;
      CanvasItem::draw_rect(pRVar4, (StringName*)local_98, (bool)( cVar11 + '\x10' ), _LC296, false);
   }

   fVar28 = (float)EditorScale::get_scale();
   local_148 = (long*)0x0;
   iVar14 = (int)( fVar28 * __LC297 );
   AnimationNodeStateMachine::get_node_list(*(List**)( this + 0xa10 ));
   this_00 = (CowData<AnimationNodeStateMachineEditor::NodeRect>*)( this + 0xd88 );
   if (( *(long*)( this + 0xd88 ) != 0 ) && ( *(long*)( *(long*)( this + 0xd88 ) + -8 ) != 0 )) {
      CowData<AnimationNodeStateMachineEditor::NodeRect>::_unref(this_00);
   }

   if (this[0xd39] == (AnimationNodeStateMachineEditor)0x0) {
      LAB_001162e0:if (local_148 == (long*)0x0) goto LAB_001176c0;
      LAB_001162f1:pSVar21 = (StringName*)*local_148;
      local_1fc = 0.0;
      local_200 = 0.0;
      local_1d0 = 0.0;
      local_1cc = 0.0;
      if (pSVar21 != (StringName*)0x0) {
         do {
            lVar23 = *(long*)pSVar21;
            if (lVar23 == 0) {
               local_128 = 0;
            }
 else {
               __s = *(char**)( lVar23 + 8 );
               local_128 = 0;
               if (__s == (char*)0x0) {
                  if (*(long*)( lVar23 + 0x10 ) != 0) {
                     CowData<char32_t>::_ref((CowData<char32_t>*)&local_128, (CowData*)( lVar23 + 0x10 ));
                  }

               }
 else {
                  local_100 = (undefined8*)strlen(__s);
                  local_108 = __s;
                  String::parse_latin1((StrRange*)&local_128);
               }

            }

            fVar28 = (float)( **(code**)( **(long**)( this + 0xb80 ) + 0x288 ) )(*(long**)( this + 0xb80 ), (String*)&local_128, 0, *(undefined4*)( this + 0xb88 ), 3, 0, 0);
            StringName::StringName((StringName*)&local_108, (String*)&local_128, false);
            AnimationNodeStateMachine::get_node((StringName*)local_120);
            if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
               StringName::unref();
            }

            cVar11 = AnimationTreeEditor::can_edit(AnimationTreeEditor::singleton);
            StringName::StringName((StringName*)&local_108, (String*)&local_128, false);
            local_130 = (char*)( (ulong)local_130 & 0xffffffff00000000 );
            cVar10 = HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::_lookup_pos((HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>*)( this + 0xa88 ), (StringName*)&local_108, (uint*)&local_130);
            if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
               StringName::unref();
            }

            pAVar18 = this + 0xb58;
            if (cVar10 != '\0') {
               pAVar18 = this + 0xb60;
            }

            uVar33 = ( **(code**)( **(long**)pAVar18 + 0x1d0 ) )();
            iVar15 = ( **(code**)( **(long**)( this + 0xba0 ) + 0x1d0 ) )();
            fVar29 = (float)( **(code**)( **(long**)( this + 0xb80 ) + 0x218 ) )(*(long**)( this + 0xb80 ), *(undefined4*)( this + 0xb88 ));
            if (fVar29 <= (float)iVar15) {
               fVar29 = (float)iVar15;
            }

            fVar29 = (float)( (ulong)uVar33 >> 0x20 ) + fVar29;
            iVar15 = ( **(code**)( **(long**)( this + 0xba0 ) + 0x1c8 ) )();
            fVar28 = (float)( iVar15 + iVar14 ) + (float)(int)fVar28 + (float)uVar33;
            if (cVar11 != '\0') {
               iVar15 = ( **(code**)( **(long**)( this + 0xba8 ) + 0x1c8 ) )();
               fVar28 = fVar28 + (float)( iVar15 + iVar14 );
            }

            local_f8 = 0;
            fVar30 = (float)EditorScale::get_scale();
            uVar33 = AnimationNodeStateMachine::get_node_position(*(StringName**)( this + 0xa10 ));
            local_108 = (char*)( (ulong)local_108 & 0xffffffff00000000 );
            uVar8 = local_f8 >> 0x20;
            local_f8._0_4_ = (float)local_f8 + (float)uVar33 * fVar30;
            local_f8._4_4_ = (float)uVar8 + (float)( (ulong)uVar33 >> 0x20 ) * fVar30;
            cVar11 = HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::_lookup_pos((HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>*)( this + 0xa88 ), pSVar21, (uint*)&local_108);
            if (( cVar11 != '\0' ) && ( this[0xd39] != (AnimationNodeStateMachineEditor)0x0 )) {
               local_f8._0_4_ = (float)local_f8 + (float)*(undefined8*)( this + 0xd44 );
               local_f8._4_4_ = local_f8._4_4_ + (float)( ( ulong ) * (undefined8*)( this + 0xd44 ) >> 0x20 );
            }

            local_f8 = CONCAT44(local_f8._4_4_ - fVar29 * _LC171._4_4_, (float)local_f8 - fVar28 * (float)_LC171);
            local_f8 = Vector2::floor();
            uStack_d0 = 0;
            uStack_c8 = 0;
            local_c0 = (char*)0x0;
            uStack_b8 = 0;
            local_b0 = 0;
            uStack_a8 = 0;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = local_f8;
            _local_e8 = auVar7 << 0x40;
            uStack_d8 = CONCAT44(fVar29, fVar28);
            StringName::operator =((StringName*)local_e8, pSVar21);
            if (( ( ( local_200 < 0.0 ) || ( local_1fc < 0.0 ) ) || ( (float)uStack_d8 < 0.0 ) ) || ( uStack_d8._4_4_ < 0.0 )) {
               _err_print_error("merge", "./core/math/rect2.h", 0xa8);
            }

            fVar28 = uStack_e0._4_4_;
            if (local_1d0 <= uStack_e0._4_4_) {
               fVar28 = local_1d0;
            }

            fVar29 = (float)uStack_e0;
            if (local_1cc <= (float)uStack_e0) {
               fVar29 = local_1cc;
            }

            fVar30 = uStack_d8._4_4_ + uStack_e0._4_4_;
            if (uStack_d8._4_4_ + uStack_e0._4_4_ <= local_1fc + local_1d0) {
               fVar30 = local_1fc + local_1d0;
            }

            fVar31 = (float)uStack_d8 + (float)uStack_e0;
            if ((float)uStack_d8 + (float)uStack_e0 <= local_200 + local_1cc) {
               fVar31 = local_200 + local_1cc;
            }

            local_1fc = fVar30 - fVar28;
            local_200 = fVar31 - fVar29;
            fVar30 = (float)EditorScale::get_scale();
            uVar33 = AnimationNodeStateMachine::get_graph_offset();
            auVar7 = _local_e8;
            fVar31 = SUB164(_local_e8, 8);
            uStack_e0._4_4_ = SUB164(_local_e8, 0xc) - fVar30 * (float)( (ulong)uVar33 >> 0x20 );
            uStack_e0._0_4_ = fVar31 - fVar30 * (float)uVar33;
            local_e8 = auVar7._0_8_;
            StringName::StringName((StringName*)local_98, (StringName*)local_e8);
            local_50 = local_a0;
            local_98._8_8_ = uStack_e0;
            uStack_88 = uStack_d8;
            local_80 = uStack_d0;
            uStack_78 = uStack_c8;
            local_70 = (undefined4)local_c0;
            uStack_6c = local_c0._4_4_;
            uStack_68 = (undefined4)uStack_b8;
            uStack_64 = uStack_b8._4_4_;
            local_60 = local_b0;
            uStack_58 = uStack_a8;
            if (*(long*)( this + 0xd88 ) == 0) {
               lVar23 = 1;
            }
 else {
               lVar23 = *(long*)( *(long*)( this + 0xd88 ) + -8 ) + 1;
            }

            iVar15 = CowData<AnimationNodeStateMachineEditor::NodeRect>::resize<false>(this_00, lVar23);
            if (iVar15 == 0) {
               if (*(long*)( this + 0xd88 ) == 0) {
                  lVar22 = -1;
                  lVar23 = 0;
               }
 else {
                  lVar23 = *(long*)( *(long*)( this + 0xd88 ) + -8 );
                  lVar22 = lVar23 + -1;
                  if (-1 < lVar22) {
                     CowData<AnimationNodeStateMachineEditor::NodeRect>::_copy_on_write(this_00);
                     this_02 = (StringName*)( lVar22 * 0x50 + *(long*)( this + 0xd88 ) );
                     StringName::operator =(this_02, (StringName*)local_98);
                     this_02[0x48] = local_50;
                     *(undefined8*)( this_02 + 8 ) = local_98._8_8_;
                     *(undefined8*)( this_02 + 0x10 ) = uStack_88;
                     *(undefined8*)( this_02 + 0x18 ) = local_80;
                     *(ulong*)( this_02 + 0x20 ) = uStack_78;
                     *(undefined4*)( this_02 + 0x28 ) = local_70;
                     *(undefined4*)( this_02 + 0x2c ) = uStack_6c;
                     *(undefined4*)( this_02 + 0x30 ) = uStack_68;
                     *(undefined4*)( this_02 + 0x34 ) = uStack_64;
                     *(undefined4*)( this_02 + 0x38 ) = (undefined4)local_60;
                     *(undefined4*)( this_02 + 0x3c ) = local_60._4_4_;
                     *(undefined4*)( this_02 + 0x40 ) = (undefined4)uStack_58;
                     *(undefined4*)( this_02 + 0x44 ) = uStack_58._4_4_;
                     goto LAB_001168a6;
                  }

               }

               _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar22, lVar23, "p_index", "size()", "", false, false);
            }
 else {
               _err_print_error("push_back", "./core/templates/vector.h", 0x142);
            }

            LAB_001168a6:if (( ( StringName::configured != '\0' ) && ( ( local_98._0_8_ == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_e8 != (undefined1[8])0x0 )) {
               StringName::unref();
            }

            if (( ( local_120[0] != (Object*)0x0 ) && ( cVar11 = RefCounted::unreference() ),pOVar9 = local_120[0],cVar11 != '\0' )) &&( cVar11 = cVar11 != '\0' )(**(code**)( *(long*)pOVar9 + 0x140 ))(pOVar9);
            Memory::free_static(pOVar9, false);
         }
 while ( pSVar21 != (StringName*)0x0 );
      }

   }
 else {
      fVar28 = (float)EditorScale::get_scale();
      uVar33 = AnimationNodeStateMachine::get_graph_offset();
      fVar29 = (float)EditorScale::get_scale();
      uVar34 = AnimationNodeStateMachine::get_node_position(*(StringName**)( this + 0xa10 ));
      local_e8._4_4_ = ( (float)( (ulong)uVar34 >> 0x20 ) * fVar29 + (float)( ( ulong ) * (undefined8*)( this + 0xd44 ) >> 0x20 ) ) - fVar28 * (float)( (ulong)uVar33 >> 0x20 );
      local_e8._0_4_ = ( (float)uVar34 * fVar29 + (float)*(undefined8*)( this + 0xd44 ) ) - fVar28 * (float)uVar33;
      if (*(long*)( this + 0xd50 ) != 0) {
         fVar28 = (float)EditorScale::get_scale();
         uVar33 = AnimationNodeStateMachine::get_graph_offset();
         fVar29 = (float)EditorScale::get_scale();
         uVar34 = AnimationNodeStateMachine::get_node_position(*(StringName**)( this + 0xa10 ));
         local_98._0_8_ = CONCAT44((float)( (ulong)uVar34 >> 0x20 ) * fVar29 - fVar28 * (float)( (ulong)uVar33 >> 0x20 ), (float)uVar34 * fVar29 - fVar28 * (float)uVar33);
         CanvasItem::draw_line(*(Vector2**)( this + 0xac0 ), (Vector2*)local_e8, (StringName*)local_98, _LC64, (bool)( cVar11 + ' ' ));
      }

      if (*(long*)( this + 0xd58 ) == 0) goto LAB_001162e0;
      fVar28 = (float)EditorScale::get_scale();
      uVar33 = AnimationNodeStateMachine::get_graph_offset();
      fVar29 = (float)EditorScale::get_scale();
      uVar34 = AnimationNodeStateMachine::get_node_position(*(StringName**)( this + 0xa10 ));
      local_98._0_8_ = CONCAT44((float)( (ulong)uVar34 >> 0x20 ) * fVar29 - fVar28 * (float)( (ulong)uVar33 >> 0x20 ), (float)uVar34 * fVar29 - fVar28 * (float)uVar33);
      CanvasItem::draw_line(*(Vector2**)( this + 0xac0 ), (Vector2*)local_e8, (StringName*)local_98, _LC64, (bool)( cVar11 + ' ' ));
      if (local_148 != (long*)0x0) goto LAB_001162f1;
      LAB_001176c0:local_1fc = 0.0;
      local_200 = 0.0;
      local_1d0 = 0.0;
      local_1cc = 0.0;
   }

   this_01 = (CowData<AnimationNodeStateMachineEditor::TransitionLine>*)( this + 0xd98 );
   if (( *(long*)( this + 0xd98 ) != 0 ) && ( *(long*)( *(long*)( this + 0xd98 ) + -8 ) != 0 )) {
      CowData<AnimationNodeStateMachineEditor::TransitionLine>::_unref(this_01);
   }

   if (this[0xd60] != (AnimationNodeStateMachineEditor)0x0) {
      fVar28 = (float)EditorScale::get_scale();
      uVar33 = AnimationNodeStateMachine::get_graph_offset();
      fVar29 = (float)EditorScale::get_scale();
      uVar34 = AnimationNodeStateMachine::get_node_position(*(StringName**)( this + 0xa10 ));
      auVar7 = _local_e8;
      local_98._0_8_ = 0;
      local_e8._4_4_ = (float)( (ulong)uVar34 >> 0x20 ) * fVar29 - fVar28 * (float)( (ulong)uVar33 >> 0x20 );
      local_e8._0_4_ = (float)uVar34 * fVar29 - fVar28 * (float)uVar33;
      uStack_e0 = auVar7._8_8_;
      if (*(long*)( this + 0xd78 ) == 0) {
         local_98._0_8_ = *(undefined8*)( this + 0xd70 );
      }
 else {
         fVar28 = (float)EditorScale::get_scale();
         uVar33 = AnimationNodeStateMachine::get_graph_offset();
         fVar29 = (float)EditorScale::get_scale();
         uVar34 = AnimationNodeStateMachine::get_node_position(*(StringName**)( this + 0xa10 ));
         local_98._0_8_ = CONCAT44((float)( (ulong)uVar34 >> 0x20 ) * fVar29 - fVar28 * (float)( (ulong)uVar33 >> 0x20 ), (float)uVar34 * fVar29 - fVar28 * (float)uVar33);
      }

      lVar23 = *(long*)( this + 0xd88 );
      lVar22 = 0;
      if (lVar23 != 0) {
         for (; lVar22 < *(long*)( lVar23 + -8 ); lVar22 = lVar22 + 1) {
            plVar26 = (long*)( lVar23 + lVar22 * 0x50 );
            if (*plVar26 == *(long*)( this + 0xd68 )) {
               _clip_src_line_to_rect(this, (Vector2*)local_e8, (Vector2*)local_98, (Rect2*)( plVar26 + 1 ));
               lVar23 = *(long*)( this + 0xd88 );
            }

            if (lVar23 == 0) goto LAB_00116e0b;
            lVar27 = *(long*)( lVar23 + -8 );
            if (lVar27 <= lVar22) goto LAB_00116e2c;
            plVar26 = (long*)( lVar22 * 0x50 + lVar23 );
            if (*(long*)( this + 0xd78 ) == *plVar26) {
               _clip_dst_line_to_rect(this, (Vector2*)local_e8, (Vector2*)local_98, (Rect2*)( plVar26 + 1 ));
               lVar23 = *(long*)( this + 0xd88 );
               if (lVar23 == 0) break;
            }

         }

      }

      uVar17 = OptionButton::get_selected();
      _connection_draw((AnimationNodeStateMachineEditor*)0x0, this, local_e8, (StringName*)local_98, uVar17, 1, 0, 0, 0, 0);
   }

   iVar15 = ( **(code**)( **(long**)( this + 0xc30 ) + 0x1d0 ) )();
   fVar28 = (float)(int)( (double)iVar15 * __LC299 );
   for (iVar15 = 0; iVar16 = AnimationNodeStateMachine::get_transition_count(),iVar15 < iVar16; iVar15 = iVar15 + 1) {
      uStack_d8 = 0;
      uStack_d0 = 0;
      local_c0 = (char*)0x0;
      uStack_b8 = ( uStack_b8 >> 0x18 & 0xff ) << 0x18;
      local_a0 = (StringName)0x0;
      uStack_a8 = CONCAT44(iVar15, (undefined4)uStack_a8);
      _local_e8 = (undefined1[16])0x0;
      iVar16 = (int)(StringName*)&local_108;
      AnimationNodeStateMachine::get_transition_from(iVar16);
      if (local_e8 == (undefined1[8])local_108) {
         if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_e8 = (undefined1[8])local_108;
      }

      if (this[0xd39] == (AnimationNodeStateMachineEditor)0x0) {
         LAB_00116b30:uVar33 = 0;
      }
 else {
         local_108 = (char*)( (ulong)local_108 & 0xffffffff00000000 );
         cVar11 = HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::_lookup_pos((HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>*)( this + 0xa88 ), (StringName*)local_e8, (uint*)&local_108);
         if (cVar11 == '\0') goto LAB_00116b30;
         uVar33 = *(undefined8*)( this + 0xd44 );
      }

      fVar29 = (float)EditorScale::get_scale();
      uVar34 = AnimationNodeStateMachine::get_graph_offset();
      fVar30 = (float)EditorScale::get_scale();
      uVar35 = AnimationNodeStateMachine::get_node_position(*(StringName**)( this + 0xa10 ));
      uStack_d8 = CONCAT44(( (float)( (ulong)uVar35 >> 0x20 ) * fVar30 + (float)( (ulong)uVar33 >> 0x20 ) ) - fVar29 * (float)( (ulong)uVar34 >> 0x20 ), ( (float)uVar35 * fVar30 + (float)uVar33 ) - fVar29 * (float)uVar34);
      AnimationNodeStateMachine::get_transition_to(iVar16);
      if (uStack_e0 == local_108) {
         if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         uStack_e0 = local_108;
      }

      local_1f8 = (StringName*)( local_e8 + 8 );
      if (this[0xd39] == (AnimationNodeStateMachineEditor)0x0) {
         LAB_00116bfd:uVar33 = 0;
      }
 else {
         local_108 = (char*)( (ulong)local_108 & 0xffffffff00000000 );
         cVar11 = HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::_lookup_pos((HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>*)( this + 0xa88 ), local_1f8, (uint*)&local_108);
         if (cVar11 == '\0') goto LAB_00116bfd;
         uVar33 = *(undefined8*)( this + 0xd44 );
      }

      fVar29 = (float)EditorScale::get_scale();
      uVar34 = AnimationNodeStateMachine::get_graph_offset();
      fVar30 = (float)EditorScale::get_scale();
      uVar35 = AnimationNodeStateMachine::get_node_position(*(StringName**)( this + 0xa10 ));
      uStack_d0 = CONCAT44(( (float)( (ulong)uVar35 >> 0x20 ) * fVar30 + (float)( (ulong)uVar33 >> 0x20 ) ) - fVar29 * (float)( (ulong)uVar34 >> 0x20 ), ( (float)uVar35 * fVar30 + (float)uVar33 ) - fVar29 * (float)uVar34);
      AnimationNodeStateMachine::get_transition((int)local_138);
      iVar16 = AnimationNodeStateMachineTransition::get_advance_mode();
      uStack_b8._0_2_ = CONCAT11(iVar16 == 0, (undefined1)uStack_b8);
      iVar16 = AnimationNodeStateMachineTransition::get_advance_mode();
      uStack_b8._0_3_ = CONCAT12(iVar16 == 2, (undefined2)uStack_b8);
      AnimationNodeStateMachineTransition::get_advance_condition_name();
      if (local_c0 == local_108) {
         if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_c0 = local_108;
      }

      uStack_b8 = uStack_b8 & 0xffffffffffffff00;
      uVar17 = AnimationNodeStateMachineTransition::get_switch_mode();
      uStack_c8 = CONCAT44(uStack_c8._4_4_, uVar17);
      local_b0._0_2_ = (ushort)(byte)local_b0;
      local_b0 = local_b0 & 0xffffffff;
      uStack_a8 = uStack_a8 & 0xffffffffffffff00;
      uStack_b8 = CONCAT44(fVar28, (undefined4)uStack_b8);
      local_a0 = (StringName)AnimationNodeStateMachine::is_transition_across_group((int)*(undefined8*)( this + 0xa10 ));
      cVar11 = AnimationNodeStateMachine::has_transition(*(StringName**)( this + 0xa10 ), local_1f8);
      if (cVar11 != '\0') {
         local_98._0_8_ = CONCAT44((float)( (ulong)uStack_d8 >> 0x20 ) - (float)( (ulong)uStack_d0 >> 0x20 ), (float)uStack_d8 - (float)uStack_d0);
         uVar33 = Vector2::normalized();
         fVar29 = (float)( ( uint )((ulong)uVar33 >> 0x20) ^ __LC69 );
         uStack_d8 = CONCAT44((float)uVar33 * fVar28 + uStack_d8._4_4_, fVar29 * fVar28 + (float)uStack_d8);
         uStack_d0 = CONCAT44((float)uVar33 * fVar28 + uStack_d0._4_4_, fVar29 * fVar28 + (float)uStack_d0);
      }

      lVar23 = *(long*)( this + 0xd88 );
      lVar22 = 0;
      if (lVar23 == 0) {
         LAB_00116e7a:;
      }
 else {
         for (; lVar22 < *(long*)( lVar23 + -8 ); lVar22 = lVar22 + 1) {
            puVar1 = (undefined8*)( lVar23 + lVar22 * 0x50 );
            if (( undefined1[8] ) * puVar1 == local_e8) {
               _clip_src_line_to_rect(this, (Vector2*)&uStack_d8, (Vector2*)&uStack_d0, (Rect2*)( puVar1 + 1 ));
               lVar23 = *(long*)( this + 0xd88 );
            }

            if (lVar23 == 0) goto LAB_00116e0b;
            lVar27 = *(long*)( lVar23 + -8 );
            if (lVar27 <= lVar22) goto LAB_00116e2c;
            plVar26 = (long*)( lVar22 * 0x50 + lVar23 );
            if (uStack_e0 == (char*)*plVar26) {
               _clip_dst_line_to_rect(this, (Vector2*)&uStack_d8, (Vector2*)&uStack_d0, (Rect2*)( plVar26 + 1 ));
               lVar23 = *(long*)( this + 0xd88 );
               if (lVar23 == 0) goto LAB_00116e7a;
            }

         }

      }

      uVar8 = local_b0;
      bVar12 = false;
      if (( undefined1[8] ) * (char**)( this + 0xda0 ) == local_e8) {
         bVar12 = *(char**)( this + 0xda8 ) == uStack_e0;
      }

      local_b0 = CONCAT71(local_b0._1_7_, bVar12);
      if (( local_e8 == (undefined1[8])local_158 ) && ( local_160 == uStack_e0 )) {
         local_b0._2_6_ = SUB86(uVar8, 2);
         local_b0._0_2_ = CONCAT11(1, bVar12);
         fVar29 = _LC65;
         if (*(float*)( this + 0xe1c ) / *(float*)( this + 0xe18 ) <= _LC65) {
            fVar29 = *(float*)( this + 0xe1c ) / *(float*)( this + 0xe18 );
         }

         local_b0 = CONCAT44(fVar29, (undefined4)local_b0);
      }

      if (( local_110 != (undefined8*)0x0 ) && ( lVar27 = lVar27 != 0 )) {
         if (local_e8 == (undefined1[8])local_160) {
            if (lVar27 < 1) {
               lVar22 = 0;
               goto LAB_00116e2c;
            }

            if ((char*)*local_110 == uStack_e0) {
               LAB_00116ee4:local_b0._0_2_ = CONCAT11(1, (byte)local_b0);
               goto LAB_00116ef0;
            }

         }

         lVar22 = 1;
         if (1 < lVar27) {
            do {
               if (local_e8 == (undefined1[8])local_110[lVar22 + -1]) {
                  if (lVar27 <= lVar22) goto LAB_00116e2c;
                  if ((char*)local_110[lVar22] == uStack_e0) goto LAB_00116ee4;
               }

               lVar22 = lVar22 + 1;
            }
 while ( lVar22 != lVar27 );
         }

      }

      LAB_00116ef0:if (local_c0 == (char*)0x0) {
         local_120[0] = (Object*)0x0;
      }
 else {
         local_120[0] = (Object*)0x0;
         if (*(char**)( local_c0 + 8 ) == (char*)0x0) {
            if (*(long*)( local_c0 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)local_120, (CowData*)( local_c0 + 0x10 ));
            }

         }
 else {
            String::parse_latin1((String*)local_120, *(char**)( local_c0 + 8 ));
         }

      }

      AnimationTreeEditor::get_base_path();
      String::operator +((String*)&local_108, (String*)&local_128);
      StringName::StringName((StringName*)&local_130, (String*)&local_108, false);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_120);
      local_108 = (char*)0x0;
      if (local_c0 != (char*)0x0) {
         Object::get((StringName*)local_98, pbVar3);
         bVar12 = Variant::operator_cast_to_bool((Variant*)local_98);
         if (Variant::needs_deinit[(int)local_98._0_4_] != '\0') {
            Variant::_clear_internal();
         }

         if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
            StringName::unref();
         }

         uVar8 = uStack_b8;
         if (bVar12) {
            uStack_b8 = CONCAT71(uStack_b8._1_7_, 1);
            uVar33 = uStack_b8;
            uStack_b8._3_5_ = SUB85(uVar8, 3);
            uStack_b8._0_2_ = (undefined2)uVar33;
            uStack_b8._0_3_ = CONCAT12(1, (undefined2)uStack_b8);
         }

      }

      lVar23 = *(long*)( this + 0xd98 );
      if (lVar23 != 0) {
         lVar22 = 0;
         do {
            while (true) {
               if (*(long*)( lVar23 + -8 ) <= lVar22) goto LAB_00117097;
               lVar27 = lVar22 * 0x50;
               plVar26 = (long*)( lVar23 + lVar27 );
               if (( ( undefined1[8] ) * plVar26 != local_e8 ) || ( (char*)plVar26[1] != uStack_e0 )) break;
               uStack_a8 = CONCAT71(uStack_a8._1_7_, 1);
               cVar11 = *(char*)( (long)plVar26 + 0x31 );
               if (*(char*)( (long)plVar26 + 0x31 ) != '\0') {
                  cVar11 = uStack_b8._1_1_;
               }

               lVar22 = lVar22 + 1;
               CowData<AnimationNodeStateMachineEditor::TransitionLine>::_copy_on_write(this_01);
               lVar23 = *(long*)( this + 0xd98 );
               *(char*)( lVar23 + 0x31 + lVar27 ) = cVar11;
               if (lVar23 == 0) goto LAB_00117097;
            }
;
            lVar22 = lVar22 + 1;
         }
 while ( lVar23 != 0 );
      }

      LAB_00117097:StringName::StringName((StringName*)local_98, (StringName*)local_e8);
      StringName::StringName((StringName*)( local_98 + 8 ), local_1f8);
      uStack_88 = uStack_d8;
      local_80 = uStack_d0;
      uStack_78 = CONCAT44(uStack_78._4_4_, (undefined4)uStack_c8);
      StringName::StringName((StringName*)&local_70, (StringName*)&local_c0);
      uStack_64 = uStack_b8._4_4_;
      uStack_68._0_3_ = (undefined3)uStack_b8;
      local_60 = CONCAT44(local_b0._4_4_, (undefined4)local_60);
      local_60 = CONCAT62(local_60._2_6_, (ushort)local_b0);
      uStack_58 = CONCAT71(uStack_58._1_7_, (undefined1)uStack_a8);
      uStack_58 = CONCAT44(uStack_a8._4_4_, (undefined4)uStack_58);
      local_50 = local_a0;
      if (*(long*)( this + 0xd98 ) == 0) {
         lVar23 = 1;
      }
 else {
         lVar23 = *(long*)( *(long*)( this + 0xd98 ) + -8 ) + 1;
      }

      iVar16 = CowData<AnimationNodeStateMachineEditor::TransitionLine>::resize<false>(this_01, lVar23);
      if (iVar16 == 0) {
         if (*(long*)( this + 0xd98 ) == 0) {
            lVar22 = -1;
            lVar23 = 0;
         }
 else {
            lVar23 = *(long*)( *(long*)( this + 0xd98 ) + -8 );
            lVar22 = lVar23 + -1;
            if (-1 < lVar22) {
               CowData<AnimationNodeStateMachineEditor::TransitionLine>::_copy_on_write(this_01);
               pSVar21 = (StringName*)( lVar22 * 0x50 + *(long*)( this + 0xd98 ) );
               StringName::operator =(pSVar21, (StringName*)local_98);
               StringName::operator =(pSVar21 + 8, (StringName*)( local_98 + 8 ));
               *(undefined8*)( pSVar21 + 0x10 ) = uStack_88;
               *(undefined8*)( pSVar21 + 0x18 ) = local_80;
               *(undefined4*)( pSVar21 + 0x20 ) = (undefined4)uStack_78;
               StringName::operator =(pSVar21 + 0x28, (StringName*)&local_70);
               *(undefined2*)( pSVar21 + 0x30 ) = (undefined2)uStack_68;
               *(undefined4*)( pSVar21 + 0x34 ) = uStack_64;
               pSVar21[0x32] = uStack_68._2_1_;
               *(undefined4*)( pSVar21 + 0x3c ) = local_60._4_4_;
               *(undefined2*)( pSVar21 + 0x38 ) = (undefined2)local_60;
               pSVar21[0x40] = uStack_58._0_1_;
               *(undefined4*)( pSVar21 + 0x44 ) = uStack_58._4_4_;
               pSVar21[0x48] = local_50;
               goto LAB_001172b2;
            }

         }

         _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar22, lVar23, "p_index", "size()", "", false, false);
      }
 else {
         _err_print_error("push_back", "./core/templates/vector.h", 0x142);
      }

      LAB_001172b2:TransitionLine::~TransitionLine((TransitionLine*)local_98);
      if (( StringName::configured != '\0' ) && ( local_130 != (char*)0x0 )) {
         StringName::unref();
      }

      Ref<AnimationNodeStateMachineTransition>::unref(local_138);
      TransitionLine::~TransitionLine((TransitionLine*)local_e8);
   }

   lVar23 = *(long*)( this + 0xd98 );
   if (lVar23 != 0) {
      lVar22 = 0;
      do {
         if (*(long*)( lVar23 + -8 ) <= lVar22) break;
         pSVar21 = (StringName*)( lVar23 + lVar22 * 0x50 );
         StringName::StringName((StringName*)local_98, pSVar21);
         StringName::StringName((StringName*)( local_98 + 8 ), pSVar21 + 8);
         uStack_88 = *(undefined8*)( pSVar21 + 0x10 );
         local_80 = *(undefined8*)( pSVar21 + 0x18 );
         uStack_78 = CONCAT44(uStack_78._4_4_, *(undefined4*)( pSVar21 + 0x20 ));
         StringName::StringName((StringName*)&local_70, pSVar21 + 0x28);
         uStack_64 = *(undefined4*)( pSVar21 + 0x34 );
         SVar24 = pSVar21[0x32];
         bVar20 = ( byte )(( ushort ) * (undefined2*)( pSVar21 + 0x30 ) >> 8) & 1;
         uStack_68 = CONCAT13(uStack_68._3_1_, *(undefined3*)( pSVar21 + 0x30 ));
         uVar2 = *(ushort*)( pSVar21 + 0x38 );
         local_60 = CONCAT44(*(undefined4*)( pSVar21 + 0x3c ), (undefined4)local_60);
         local_60 = CONCAT62(local_60._2_6_, uVar2);
         uStack_58 = CONCAT44(*(undefined4*)( pSVar21 + 0x44 ), (undefined4)uStack_58);
         local_50 = pSVar21[0x48];
         uVar25 = uVar2 & 1;
         uStack_58 = CONCAT71(uStack_58._1_7_, pSVar21[0x40]);
         bVar19 = ( byte )(uVar2 >> 8) & 1;
         if (pSVar21[0x40] == (StringName)0x0) {
            if (( ( *(long*)( this + 0xda0 ) == 0 ) || ( *(long*)( this + 0xda8 ) == 0 ) ) && ( *(int*)( this + 0xe64 ) != 0 )) {
               local_108 = (char*)( (ulong)local_108 & 0xffffffff00000000 );
               cVar11 = HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::_lookup_pos((HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>*)( this + 0xe40 ), (StringName*)( this + 0xa80 ), (uint*)&local_108);
               bVar19 = local_60._1_1_;
               SVar24 = uStack_68._2_1_;
               bVar20 = uStack_68._1_1_;
               if (cVar11 == '\0') {
                  uVar25 = (ushort)(byte)local_60;
               }
 else {
                  uVar25 = (ushort)(byte)local_60;
               }

            }

            _connection_draw(this, &uStack_88, &local_80, uStack_78 & 0xffffffff, bVar20 ^ 1, uVar25, bVar19, SVar24, local_50);
         }

         lVar22 = lVar22 + 1;
         TransitionLine::~TransitionLine((TransitionLine*)local_98);
         lVar23 = *(long*)( this + 0xd98 );
      }
 while ( lVar23 != 0 );
   }

   lVar23 = *(long*)( this + 0xd88 );
   if (lVar23 != 0) {
      local_1f8 = (StringName*)0x0;
      do {
         if (*(long*)( lVar23 + -8 ) <= (long)local_1f8) break;
         lVar23 = *(long*)( lVar23 + (long)local_1f8 * 0x50 );
         if (lVar23 == 0) {
            local_140 = 0;
         }
 else {
            local_140 = 0;
            if (*(char**)( lVar23 + 8 ) == (char*)0x0) {
               if (*(long*)( lVar23 + 0x10 ) != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_140, (CowData*)( lVar23 + 0x10 ));
               }

            }
 else {
               String::parse_latin1((String*)&local_140, *(char**)( lVar23 + 8 ));
            }

         }

         fVar28 = (float)( **(code**)( **(long**)( this + 0xb80 ) + 0x288 ) )(*(long**)( this + 0xb80 ), (String*)&local_140, 0, *(undefined4*)( this + 0xb88 ), 3, 0, 0);
         StringName::StringName((StringName*)&local_108, (String*)&local_140, false);
         AnimationNodeStateMachine::get_node((StringName*)local_138);
         if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
            StringName::unref();
         }

         cVar11 = AnimationTreeEditor::can_edit(AnimationTreeEditor::singleton);
         StringName::StringName((StringName*)&local_108, (String*)&local_140, false);
         local_120[0] = (Object*)( (ulong)local_120[0] & 0xffffffff00000000 );
         cVar10 = HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::_lookup_pos((HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>*)( this + 0xa88 ), (StringName*)&local_108, (uint*)local_120);
         if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
            StringName::unref();
         }

         if (*(long*)( this + 0xd88 ) == 0) {
            lVar23 = 0;
            LAB_001187fd:_err_print_index_error("operator[]", "./core/templates/vector.h", 0x38, (long)local_1f8, lVar23, "p_index", "((Vector<T> *)(this))->_cowdata.size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar6 = (code*)invalidInstructionException();
            ( *pcVar6 )();
         }

         lVar23 = *(long*)( *(long*)( this + 0xd88 ) + -8 );
         if (lVar23 <= (long)local_1f8) goto LAB_001187fd;
         CowData<AnimationNodeStateMachineEditor::NodeRect>::_copy_on_write(this_00);
         lVar23 = (long)local_1f8 * 0x50 + *(long*)( this + 0xd88 );
         iVar15 = (int)*(float*)( lVar23 + 0x14 );
         fVar29 = *(float*)( lVar23 + 8 );
         fVar30 = *(float*)( lVar23 + 0xc );
         if (( *(long*)( this + 0xda0 ) == 0 ) || ( *(long*)( this + 0xda8 ) == 0 )) {
            if (*(int*)( this + 0xe64 ) != 0) {
               StringName::StringName((StringName*)&local_108, (String*)&local_140, false);
               local_120[0] = (Object*)( (ulong)local_120[0] & 0xffffffff00000000 );
               cVar13 = HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::_lookup_pos((HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>*)( this + 0xe40 ), (StringName*)&local_108, (uint*)local_120);
               if (cVar13 == '\0') {
                  if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
                     StringName::unref();
                  }

                  goto LAB_0011885c;
               }

               if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
                  StringName::unref();
               }

            }

            LAB_00118151:local_1e8 = 1.0;
         }
 else {
            cVar13 = operator != ( (String*)&local_140,(StringName*)( this + 0xda0 ) );
            if (cVar13 == '\0') goto LAB_00118151;
            cVar13 = operator != ( (String*)&local_140,(StringName*)( this + 0xda8 ) );
            if (cVar13 == '\0') goto LAB_00118151;
            LAB_0011885c:local_1e8 = _LC295;
         }

         local_130 = (char*)0x0;
         pAVar18 = this + 0xb58;
         if (cVar10 != '\0') {
            pAVar18 = this + 0xb60;
         }

         Ref<StyleBox>::operator =((Ref<StyleBox>*)&local_130, *(Ref**)pAVar18);
         local_108 = (char*)0x0;
         if (local_130 != (char*)0x0) {
            local_108 = local_130;
            cVar13 = RefCounted::reference();
            if (cVar13 == '\0') {
               local_108 = (char*)0x0;
            }

         }

         _adjust_stylebox_opacity((String*)&local_128, this, (StringName*)&local_108);
         Ref<StyleBox>::unref((Ref<StyleBox>*)&local_108);
         CanvasItem::draw_style_box(*(Ref**)( this + 0xac0 ), (Rect2*)&local_128);
         if (cVar10 == '\0') {
            cVar10 = StringName::operator ==((StringName*)( SceneStringNames::singleton + 0x288 ), (String*)&local_140);
            if (cVar10 != '\0') {
               local_108 = (char*)0x0;
               Ref<StyleBox>::operator =((Ref<StyleBox>*)&local_108, *(Ref**)( this + 0xb70 ));
               _adjust_stylebox_opacity((String*)local_120, this, (StringName*)&local_108);
               Ref<StyleBox>::unref((Ref<StyleBox>*)&local_108);
               CanvasItem::draw_style_box(*(Ref**)( this + 0xac0 ), (Rect2*)local_120);
               Ref<StyleBox>::unref((Ref<StyleBox>*)local_120);
            }

            cVar10 = StringName::operator ==((StringName*)( SceneStringNames::singleton + 0x290 ), (String*)&local_140);
            if (cVar10 != '\0') {
               local_108 = (char*)0x0;
               Ref<StyleBox>::operator =((Ref<StyleBox>*)&local_108, *(Ref**)( this + 0xb78 ));
               _adjust_stylebox_opacity((String*)local_120, this, (StringName*)&local_108);
               Ref<StyleBox>::unref((Ref<StyleBox>*)&local_108);
               CanvasItem::draw_style_box(*(Ref**)( this + 0xac0 ), (Rect2*)local_120);
               Ref<StyleBox>::unref((Ref<StyleBox>*)local_120);
            }

         }

         if (local_17d != '\0') {
            cVar10 = StringName::operator ==((StringName*)&local_158, (String*)&local_140);
            if (cVar10 == '\0') {
               cVar10 = StringName::operator ==((StringName*)&local_160, (String*)&local_140);
               if (cVar10 == '\0') {
                  StringName::StringName((StringName*)&local_108, (String*)&local_140, false);
                  if (( local_110 != (undefined8*)0x0 ) && ( 0 < (long)local_110[-1] )) {
                     lVar22 = 0;
                     do {
                        if (local_108 == (char*)local_110[lVar22]) {
                           if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
                              StringName::unref();
                           }

                           goto LAB_00118684;
                        }

                        lVar22 = lVar22 + 1;
                     }
 while ( local_110[-1] != lVar22 );
                  }

                  if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
                     StringName::unref();
                  }

                  goto LAB_00118215;
               }

            }

            LAB_00118684:local_108 = (char*)0x0;
            Ref<StyleBox>::operator =((Ref<StyleBox>*)&local_108, *(Ref**)( this + 0xb68 ));
            _adjust_stylebox_opacity((String*)local_120, this, (StringName*)&local_108);
            Ref<StyleBox>::unref((Ref<StyleBox>*)&local_108);
            CanvasItem::draw_style_box(*(Ref**)( this + 0xac0 ), (Rect2*)local_120);
            Ref<StyleBox>::unref((Ref<StyleBox>*)local_120);
         }

         LAB_00118215:fVar31 = (float)StyleBox::get_offset();
         fVar29 = fVar29 + fVar31;
         iVar16 = ( **(code**)( **(long**)( this + 0xba0 ) + 0x1d0 ) )();
         local_98._0_8_ = (ulong)(uint)(float)( ( iVar15 - iVar16 ) / 2 ) << 0x20;
         uVar33 = Vector2::floor();
         lVar22 = **(long**)( this + 0xba0 );
         *(ulong*)( lVar23 + 0x18 ) = CONCAT44((float)( (ulong)uVar33 >> 0x20 ) + fVar30, (float)uVar33 + fVar29);
         uVar33 = ( **(code**)( lVar22 + 0x1d8 ) )();
         local_f8 = _LC278;
         *(undefined8*)( lVar23 + 0x20 ) = uVar33;
         local_f0 = CONCAT44(local_1e8, 0x3f800000);
         cVar10 = StringName::operator ==((StringName*)( this + 0xdb8 ), (String*)&local_140);
         if (( cVar10 == '\0' ) || ( *(int*)( this + 0xdc0 ) != 0 )) {
            CanvasItem::draw_texture(*(Ref**)( this + 0xac0 ), (Vector2*)( this + 0xba0 ), (Color*)( lVar23 + 0x18 ));
         }
 else {
            pRVar5 = *(Ref**)( this + 0xac0 );
            local_98 = Color::operator *((Color*)( this + 0xbf0 ), (Color*)&local_f8);
            CanvasItem::draw_texture(pRVar5, (Vector2*)( this + 0xba0 ), (Color*)( lVar23 + 0x18 ));
         }

         local_178 = &local_f8;
         iVar16 = ( **(code**)( **(long**)( this + 0xba0 ) + 0x1c8 ) )();
         fVar29 = (float)( iVar16 + iVar14 ) + fVar29;
         fVar31 = (float)( **(code**)( **(long**)( this + 0xb80 ) + 0x218 ) )(*(long**)( this + 0xb80 ), *(undefined4*)( this + 0xb88 ));
         local_98._0_8_ = ( ulong )(uint)(( (float)iVar15 - fVar31 ) * (float)_LC171) << 0x20;
         uVar33 = Vector2::floor();
         plVar26 = *(long**)( this + 0xb80 );
         uVar17 = *(undefined4*)( this + 0xb88 );
         lVar22 = *plVar26;
         *(ulong*)( lVar23 + 0x28 ) = CONCAT44((float)( (ulong)uVar33 >> 0x20 ) + fVar30, (float)uVar33 + fVar29);
         uVar32 = ( **(code**)( lVar22 + 0x218 ) )(plVar26, uVar17);
         uVar34 = *(undefined8*)( this + 0xb94 );
         auVar7 = *(undefined1(*) [16])( this + 0xb8c );
         plVar26 = *(long**)( this + 0xb80 );
         uVar17 = *(undefined4*)( this + 0xb88 );
         uVar33 = *(undefined8*)( this + 0xac0 );
         lVar22 = *plVar26;
         *(ulong*)( lVar23 + 0x30 ) = CONCAT44(uVar32, (float)(int)fVar28);
         uStack_e0._4_4_ = (float)( (ulong)uVar34 >> 0x20 );
         _local_e8 = auVar7._0_12_;
         uStack_e0._4_4_ = local_1e8 * uStack_e0._4_4_;
         fVar31 = (float)( **(code**)( lVar22 + 0x220 ) )(plVar26, uVar17);
         local_98._0_8_ = CONCAT44(fVar31 + *(float*)( lVar23 + 0x2c ), *(float*)( lVar23 + 0x28 ) + 0.0);
         CanvasItem::draw_string(uVar33, this + 0xb80, (StringName*)local_98, (String*)&local_140, 0, uVar17, local_e8, 3, 0, 0);
         *(char*)( lVar23 + 0x48 ) = cVar11;
         if (cVar11 != '\0') {
            iVar16 = ( **(code**)( **(long**)( this + 0xba8 ) + 0x1d0 ) )();
            local_98._0_8_ = (ulong)(uint)(float)( ( iVar15 - iVar16 ) / 2 ) << 0x20;
            uVar33 = Vector2::floor();
            lVar22 = **(long**)( this + 0xba8 );
            *(ulong*)( lVar23 + 0x38 ) = CONCAT44(fVar30 + (float)( (ulong)uVar33 >> 0x20 ), (float)( (int)fVar28 + iVar14 ) + fVar29 + (float)uVar33);
            uVar33 = ( **(code**)( lVar22 + 0x1d8 ) )();
            *(undefined8*)( lVar23 + 0x40 ) = uVar33;
            cVar11 = StringName::operator ==((StringName*)( this + 0xdb8 ), (String*)&local_140);
            if (( cVar11 == '\0' ) || ( *(int*)( this + 0xdc0 ) != 1 )) {
               CanvasItem::draw_texture(*(Ref**)( this + 0xac0 ), (Vector2*)( this + 0xba8 ), (Color*)( lVar23 + 0x38 ));
            }
 else {
               pRVar5 = *(Ref**)( this + 0xac0 );
               local_98 = Color::operator *((Color*)( this + 0xbf0 ), (Color*)local_178);
               CanvasItem::draw_texture(pRVar5, (Vector2*)( this + 0xba8 ), (Color*)( lVar23 + 0x38 ));
            }

         }

         Ref<StyleBox>::unref((Ref<StyleBox>*)&local_128);
         Ref<StyleBox>::unref((Ref<StyleBox>*)&local_130);
         Ref<AnimationNode>::unref((Ref<AnimationNode>*)local_138);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_140);
         lVar23 = *(long*)( this + 0xd88 );
         local_1f8 = (StringName*)( (long)local_1f8 + 1 );
      }
 while ( lVar23 != 0 );
   }

   if (this[0xce8] != (AnimationNodeStateMachineEditor)0x0) {
      for (int i = 0; i < 8; i++) {
         local_98[i] = _LC300[i];
      }

      local_98._8_8_ = ram0x0012d138;
      CanvasItem::draw_rect(*(Rect2**)( this + 0xac0 ), this + 0xcfc, SUB81((StringName*)local_98, 0), _LC296, true);
   }

   uVar33 = Control::get_size();
   local_1cc = local_1cc - (float)uVar33;
   local_1d0 = local_1d0 - (float)( (ulong)uVar33 >> 0x20 );
   uVar33 = Control::get_size();
   this[0xc80] = (AnimationNodeStateMachineEditor)0x1;
   fVar28 = (float)( (ulong)uVar33 >> 0x20 );
   Range::set_min((double)local_1cc);
   Range::set_max((double)( (float)uVar33 + (float)uVar33 + local_200 + local_1cc ));
   fVar29 = (float)Control::get_size();
   Range::set_page((double)fVar29);
   fVar29 = (float)AnimationNodeStateMachine::get_graph_offset();
   Range::set_value((double)fVar29);
   Range::set_min((double)local_1d0);
   Range::set_max((double)( local_1fc + fVar28 + fVar28 + local_1d0 ));
   Control::get_size();
   Range::set_page((double)extraout_XMM0_Db);
   AnimationNodeStateMachine::get_graph_offset();
   Range::set_value((double)extraout_XMM0_Db_00);
   this[0xc80] = (AnimationNodeStateMachineEditor)0x0;
   CanvasItem::queue_redraw();
   List<StringName,DefaultAllocator>::~List((List<StringName,DefaultAllocator>*)&local_148);
   Ref<AnimationNodeStateMachinePlayback>::unref((Ref<AnimationNodeStateMachinePlayback>*)&local_150);
   CowData<StringName>::_unref((CowData<StringName>*)&local_110);
   if (StringName::configured != '\0') {
      if (local_158 != (char*)0x0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00117940;
      }

      if (local_160 != (char*)0x0) {
         StringName::unref();
      }

   }

   LAB_00117940:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
   LAB_00116e0b:lVar27 = 0;
   LAB_00116e2c:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar22, lVar27, "p_index", "size()", "", false, true);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar6 = (code*)invalidInstructionException();
   ( *pcVar6 )();
}
/* EditorAnimationMultiTransitionEdit::add_transition(StringName const&, StringName const&,
   Ref<AnimationNodeStateMachineTransition>) */void EditorAnimationMultiTransitionEdit::add_transition(EditorAnimationMultiTransitionEdit *this, StringName *param_1, StringName *param_2, long *param_4) {
   StringName *this_00;
   Object *pOVar1;
   char cVar2;
   int iVar3;
   long lVar4;
   Object *pOVar5;
   long lVar6;
   long in_FS_OFFSET;
   undefined1 local_78[16];
   Object *local_68;
   long local_58;
   long local_50;
   Object *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_78 = (undefined1[16])0x0;
   local_68 = (Object*)0x0;
   StringName::operator =((StringName*)local_78, param_1);
   StringName::operator =((StringName*)( local_78 + 8 ), param_2);
   pOVar1 = local_68;
   pOVar5 = (Object*)*param_4;
   if (pOVar5 != local_68) {
      local_68 = pOVar5;
      if (( pOVar5 != (Object*)0x0 ) && ( cVar2 = cVar2 == '\0' )) {
         local_68 = (Object*)0x0;
      }

      if (( ( pOVar1 != (Object*)0x0 ) && ( cVar2 = RefCounted::unreference() ),cVar2 != '\0' )) &&( cVar2 = cVar2 != '\0' )(**(code**)( *(long*)pOVar1 + 0x140 ))(pOVar1);
      Memory::free_static(pOVar1, false);
   }

}
StringName::StringName((StringName*)&local_58, (StringName*)local_78);StringName::StringName((StringName*)&local_50, (StringName*)( local_78 + 8 ));local_48 = (Object*)0x0;if (local_68 != (Object*)0x0) {
   local_48 = local_68;
   cVar2 = RefCounted::reference();
   if (cVar2 == '\0') {
      local_48 = (Object*)0x0;
   }

}
if (*(long*)( this + 0x188 ) == 0) {
   lVar6 = 1;
}
 else {
   lVar6 = *(long*)( *(long*)( this + 0x188 ) + -8 ) + 1;
}
iVar3 = CowData<EditorAnimationMultiTransitionEdit::Transition>::resize<false>((CowData<EditorAnimationMultiTransitionEdit::Transition>*)( this + 0x188 ), lVar6);if (iVar3 == 0) {
   if (*(long*)( this + 0x188 ) == 0) {
      lVar4 = -1;
      lVar6 = 0;
   }
 else {
      lVar6 = *(long*)( *(long*)( this + 0x188 ) + -8 );
      lVar4 = lVar6 + -1;
      if (-1 < lVar4) {
         CowData<EditorAnimationMultiTransitionEdit::Transition>::_copy_on_write((CowData<EditorAnimationMultiTransitionEdit::Transition>*)( this + 0x188 ));
         this_00 = (StringName*)( *(long*)( this + 0x188 ) + lVar4 * 0x18 );
         StringName::operator =(this_00, (StringName*)&local_58);
         StringName::operator =(this_00 + 8, (StringName*)&local_50);
         pOVar1 = *(Object**)( this_00 + 0x10 );
         pOVar5 = pOVar1;
         if (local_48 != pOVar1) {
            *(Object**)( this_00 + 0x10 ) = local_48;
            if (( local_48 != (Object*)0x0 ) && ( cVar2 = cVar2 == '\0' )) {
               *(undefined8*)( this_00 + 0x10 ) = 0;
            }

            pOVar5 = local_48;
            if (( ( pOVar1 != (Object*)0x0 ) && ( cVar2 = RefCounted::unreference() ),pOVar5 = local_48,cVar2 != '\0' )) {
               ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
               Memory::free_static(pOVar1, false);
               pOVar5 = local_48;
            }

         }

         goto LAB_00118c98;
      }

   }

   _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar4, lVar6, "p_index", "size()", "", false, false);
   pOVar5 = local_48;
}
 else {
   _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
   pOVar5 = local_48;
}
LAB_00118c98:if (( ( pOVar5 != (Object*)0x0 ) && ( cVar2 = RefCounted::unreference() ),pOVar5 = local_48,cVar2 != '\0' )) &&( cVar2 = cVar2 != '\0' )(**(code**)( *(long*)pOVar5 + 0x140 ))(pOVar5);Memory::free_static(pOVar5, false);}if (( ( StringName::configured != '\0' ) && ( ( local_50 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_58 != 0 )) {
   StringName::unref();
}
if (( ( local_68 != (Object*)0x0 ) && ( cVar2 = RefCounted::unreference() ),pOVar5 = local_68,cVar2 != '\0' )) &&( cVar2 = cVar2 != '\0' )(**(code**)( *(long*)pOVar5 + 0x140 ))(pOVar5);Memory::free_static(pOVar5, false);}if (( StringName::configured != '\0' ) && ( ( ( local_78._8_8_ == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_78._0_8_ != 0 ) ) )) {
   StringName::unref();
}
if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return;}/* DefaultAllocator::alloc(unsigned long) */void DefaultAllocator::alloc(ulong param_1) {
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
/* CallableCustomMethodPointer<AnimationNodeStateMachineEditor, void,
   double>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<AnimationNodeStateMachineEditor,void,double>::~CallableCustomMethodPointer(CallableCustomMethodPointer<AnimationNodeStateMachineEditor,void,double> *this) {
   return;
}
/* CallableCustomMethodPointer<AnimationNodeStateMachineEditor, void, Ref<InputEvent>
   const&>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<AnimationNodeStateMachineEditor,void,Ref<InputEvent>const&>::~CallableCustomMethodPointer(CallableCustomMethodPointer<AnimationNodeStateMachineEditor,void,Ref<InputEvent>const&> *this) {
   return;
}
/* CallableCustomMethodPointer<AnimationNodeStateMachineEditor, void,
   bool>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<AnimationNodeStateMachineEditor,void,bool>::~CallableCustomMethodPointer(CallableCustomMethodPointer<AnimationNodeStateMachineEditor,void,bool> *this) {
   return;
}
/* CallableCustomMethodPointer<AnimationNodeStateMachineEditor,
   void>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<AnimationNodeStateMachineEditor,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<AnimationNodeStateMachineEditor,void> *this) {
   return;
}
/* CallableCustomMethodPointer<AnimationNodeStateMachineEditor, void,
   int>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<AnimationNodeStateMachineEditor,void,int>::~CallableCustomMethodPointer(CallableCustomMethodPointer<AnimationNodeStateMachineEditor,void,int> *this) {
   return;
}
/* CallableCustomMethodPointer<AnimationNodeStateMachineEditor, void, String
   const&>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<AnimationNodeStateMachineEditor,void,String_const&>::~CallableCustomMethodPointer(CallableCustomMethodPointer<AnimationNodeStateMachineEditor,void,String_const&> *this) {
   return;
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
/* CallableCustomMethodPointer<AnimationNodeStateMachineEditor, void,
   double>::get_argument_count(bool&) const */undefined8 CallableCustomMethodPointer<AnimationNodeStateMachineEditor,void,double>::get_argument_count(CallableCustomMethodPointer<AnimationNodeStateMachineEditor,void,double> *this, bool *param_1) {
   *param_1 = true;
   return 1;
}
/* CallableCustomMethodPointer<AnimationNodeStateMachineEditor, void, Ref<InputEvent>
   const&>::get_argument_count(bool&) const */undefined8 CallableCustomMethodPointer<AnimationNodeStateMachineEditor,void,Ref<InputEvent>const&>::get_argument_count(CallableCustomMethodPointer<AnimationNodeStateMachineEditor,void,Ref<InputEvent>const&> *this, bool *param_1) {
   *param_1 = true;
   return 1;
}
/* CallableCustomMethodPointer<AnimationNodeStateMachineEditor, void,
   bool>::get_argument_count(bool&) const */undefined8 CallableCustomMethodPointer<AnimationNodeStateMachineEditor,void,bool>::get_argument_count(CallableCustomMethodPointer<AnimationNodeStateMachineEditor,void,bool> *this, bool *param_1) {
   *param_1 = true;
   return 1;
}
/* CallableCustomMethodPointer<AnimationNodeStateMachineEditor, void>::get_argument_count(bool&)
   const */undefined8 CallableCustomMethodPointer<AnimationNodeStateMachineEditor,void>::get_argument_count(CallableCustomMethodPointer<AnimationNodeStateMachineEditor,void> *this, bool *param_1) {
   *param_1 = true;
   return 0;
}
/* CallableCustomMethodPointer<AnimationNodeStateMachineEditor, void,
   int>::get_argument_count(bool&) const */undefined8 CallableCustomMethodPointer<AnimationNodeStateMachineEditor,void,int>::get_argument_count(CallableCustomMethodPointer<AnimationNodeStateMachineEditor,void,int> *this, bool *param_1) {
   *param_1 = true;
   return 1;
}
/* CallableCustomMethodPointer<AnimationNodeStateMachineEditor, void, String
   const&>::get_argument_count(bool&) const */undefined8 CallableCustomMethodPointer<AnimationNodeStateMachineEditor,void,String_const&>::get_argument_count(CallableCustomMethodPointer<AnimationNodeStateMachineEditor,void,String_const&> *this, bool *param_1) {
   *param_1 = true;
   return 1;
}
/* CallableCustomMethodPointerBase::get_method() const */void CallableCustomMethodPointerBase::get_method(void) {
   long in_RSI;
   StringName *in_RDI;
   StringName::StringName(in_RDI, *(char**)( in_RSI + 0x20 ), false);
   return;
}
/* CallableCustomMethodPointer<AnimationNodeStateMachineEditor, void, String
   const&>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<AnimationNodeStateMachineEditor,void,String_const&>::~CallableCustomMethodPointer(CallableCustomMethodPointer<AnimationNodeStateMachineEditor,void,String_const&> *this) {
   operator_delete(this, 0x48);
   return;
}
/* CallableCustomMethodPointer<AnimationNodeStateMachineEditor, void,
   int>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<AnimationNodeStateMachineEditor,void,int>::~CallableCustomMethodPointer(CallableCustomMethodPointer<AnimationNodeStateMachineEditor,void,int> *this) {
   operator_delete(this, 0x48);
   return;
}
/* CallableCustomMethodPointer<AnimationNodeStateMachineEditor, void,
   bool>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<AnimationNodeStateMachineEditor,void,bool>::~CallableCustomMethodPointer(CallableCustomMethodPointer<AnimationNodeStateMachineEditor,void,bool> *this) {
   operator_delete(this, 0x48);
   return;
}
/* CallableCustomMethodPointer<AnimationNodeStateMachineEditor, void, Ref<InputEvent>
   const&>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<AnimationNodeStateMachineEditor,void,Ref<InputEvent>const&>::~CallableCustomMethodPointer(CallableCustomMethodPointer<AnimationNodeStateMachineEditor,void,Ref<InputEvent>const&> *this) {
   operator_delete(this, 0x48);
   return;
}
/* CallableCustomMethodPointer<AnimationNodeStateMachineEditor, void,
   double>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<AnimationNodeStateMachineEditor,void,double>::~CallableCustomMethodPointer(CallableCustomMethodPointer<AnimationNodeStateMachineEditor,void,double> *this) {
   operator_delete(this, 0x48);
   return;
}
/* CallableCustomMethodPointer<AnimationNodeStateMachineEditor,
   void>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<AnimationNodeStateMachineEditor,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<AnimationNodeStateMachineEditor,void> *this) {
   operator_delete(this, 0x48);
   return;
}
/* MethodBindT<>::~MethodBindT() */void MethodBindT<>::~MethodBindT(MethodBindT<> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0012ccc8;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<>::~MethodBindT() */void MethodBindT<>::~MethodBindT(MethodBindT<> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0012ccc8;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* HBoxContainer::_property_get_revertv(StringName const&, Variant&) const */undefined8 HBoxContainer::_property_get_revertv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if ((code*)_GLOBAL_OFFSET_TABLE_ != Object::_property_get_revert) {
      uVar1 = Control::_property_get_revert(param_1, param_2);
      return uVar1;
   }

   return 0;
}
/* HScrollBar::_property_get_revertv(StringName const&, Variant&) const */undefined8 HScrollBar::_property_get_revertv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if ((code*)_GLOBAL_OFFSET_TABLE_ != Object::_property_get_revert) {
      uVar1 = Control::_property_get_revert(param_1, param_2);
      return uVar1;
   }

   return 0;
}
/* VScrollBar::_property_get_revertv(StringName const&, Variant&) const */undefined8 VScrollBar::_property_get_revertv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if ((code*)_GLOBAL_OFFSET_TABLE_ != Object::_property_get_revert) {
      uVar1 = Control::_property_get_revert(param_1, param_2);
      return uVar1;
   }

   return 0;
}
/* AnimationNodeStateMachineEditor::_property_get_revertv(StringName const&, Variant&) const */undefined8 AnimationNodeStateMachineEditor::_property_get_revertv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if ((code*)_GLOBAL_OFFSET_TABLE_ != Object::_property_get_revert) {
      uVar1 = Control::_property_get_revert(param_1, param_2);
      return uVar1;
   }

   return 0;
}
/* HBoxContainer::_property_can_revertv(StringName const&) const */undefined8 HBoxContainer::_property_can_revertv(StringName *param_1) {
   undefined8 uVar1;
   if ((code*)PTR__property_can_revert_00133008 != Object::_property_can_revert) {
      uVar1 = Control::_property_can_revert(param_1);
      return uVar1;
   }

   return 0;
}
/* HScrollBar::_property_can_revertv(StringName const&) const */undefined8 HScrollBar::_property_can_revertv(StringName *param_1) {
   undefined8 uVar1;
   if ((code*)PTR__property_can_revert_00133008 != Object::_property_can_revert) {
      uVar1 = Control::_property_can_revert(param_1);
      return uVar1;
   }

   return 0;
}
/* VScrollBar::_property_can_revertv(StringName const&) const */undefined8 VScrollBar::_property_can_revertv(StringName *param_1) {
   undefined8 uVar1;
   if ((code*)PTR__property_can_revert_00133008 != Object::_property_can_revert) {
      uVar1 = Control::_property_can_revert(param_1);
      return uVar1;
   }

   return 0;
}
/* AnimationNodeStateMachineEditor::_property_can_revertv(StringName const&) const */undefined8 AnimationNodeStateMachineEditor::_property_can_revertv(StringName *param_1) {
   undefined8 uVar1;
   if ((code*)PTR__property_can_revert_00133008 != Object::_property_can_revert) {
      uVar1 = Control::_property_can_revert(param_1);
      return uVar1;
   }

   return 0;
}
/* VScrollBar::~VScrollBar() */void VScrollBar::~VScrollBar(VScrollBar *this) {
   *(undefined***)this = &PTR__initialize_classv_0012c270;
   ScrollBar::~ScrollBar((ScrollBar*)this);
   return;
}
/* VScrollBar::~VScrollBar() */void VScrollBar::~VScrollBar(VScrollBar *this) {
   *(undefined***)this = &PTR__initialize_classv_0012c270;
   ScrollBar::~ScrollBar((ScrollBar*)this);
   operator_delete(this, 0xac8);
   return;
}
/* HScrollBar::~HScrollBar() */void HScrollBar::~HScrollBar(HScrollBar *this) {
   *(undefined***)this = &PTR__initialize_classv_0012bf00;
   ScrollBar::~ScrollBar((ScrollBar*)this);
   return;
}
/* HScrollBar::~HScrollBar() */void HScrollBar::~HScrollBar(HScrollBar *this) {
   *(undefined***)this = &PTR__initialize_classv_0012bf00;
   ScrollBar::~ScrollBar((ScrollBar*)this);
   operator_delete(this, 0xac8);
   return;
}
/* SortArray<List<StringName, DefaultAllocator>::Element*, List<StringName,
   DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>, true>::adjust_heap(long, long,
   long, List<StringName, DefaultAllocator>::Element*, List<StringName,
   DefaultAllocator>::Element**) const [clone .isra.0] */void SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>::adjust_heap(long param_1, long param_2, long param_3, Element *param_4, Element **param_5) {
   byte *pbVar1;
   byte *pbVar2;
   Element *pEVar3;
   uint uVar4;
   byte bVar5;
   long lVar6;
   long lVar7;
   uint uVar8;
   Element **ppEVar9;
   long lVar10;
   Element *pEVar11;
   long lVar12;
   long lVar13;
   byte *pbVar14;
   byte *pbVar15;
   long lVar16;
   lVar12 = param_2 * 2 + 2;
   lVar16 = param_2;
   if (lVar12 < param_3) {
      do {
         lVar10 = lVar12 + -1;
         ppEVar9 = param_5 + lVar10 + param_1;
         pEVar11 = *ppEVar9;
         pEVar3 = param_5[param_1 + lVar12];
         lVar13 = *(long*)pEVar11;
         lVar6 = *(long*)pEVar3;
         if (lVar6 == 0) {
            if (lVar13 != 0) {
               pbVar14 = *(byte**)( lVar13 + 8 );
               uVar8 = 0;
               pbVar15 = &_LC0;
               LAB_00119504:if (pbVar14 == (byte*)0x0) {
                  lVar6 = 0;
                  uVar4 = **(uint**)( lVar13 + 0x10 );
                  if (uVar4 != 0 || uVar8 != 0) {
                     do {
                        if (uVar8 == 0) goto LAB_001194b0;
                        if (uVar4 == 0) break;
                        if (uVar8 < uVar4) goto LAB_001194b0;
                        if (uVar4 < uVar8) break;
                        uVar8 = (uint)(char)pbVar15[lVar6 + 1];
                        uVar4 = ( *(uint**)( lVar13 + 0x10 ) )[lVar6 + 1];
                        lVar6 = lVar6 + 1;
                     }
 while ( uVar8 != 0 || uVar4 != 0 );
                  }

               }
 else {
                  uVar4 = (uint)(char)*pbVar14;
                  bVar5 = (byte)uVar8 | *pbVar14;
                  LAB_00119556:if (bVar5 != 0) {
                     lVar13 = 1;
                     do {
                        if (uVar8 == 0) goto LAB_001194b0;
                        if (uVar4 == 0) break;
                        if (uVar8 < uVar4) goto LAB_001194b0;
                        if (uVar4 < uVar8) break;
                        pbVar1 = pbVar14 + lVar13;
                        uVar4 = (uint)(char)*pbVar1;
                        pbVar2 = pbVar15 + lVar13;
                        uVar8 = (uint)(char)*pbVar2;
                        lVar13 = lVar13 + 1;
                     }
 while ( *pbVar1 != 0 || *pbVar2 != 0 );
                  }

               }

            }

         }
 else {
            pbVar15 = *(byte**)( lVar6 + 8 );
            if (lVar13 == 0) {
               if (pbVar15 != (byte*)0x0) {
                  bVar5 = *pbVar15;
                  uVar8 = (uint)(char)bVar5;
                  pbVar14 = &_LC0;
                  uVar4 = 0;
                  goto LAB_00119556;
               }

               uVar8 = 0;
               pbVar14 = &_LC0;
            }
 else {
               pbVar14 = *(byte**)( lVar13 + 8 );
               if (pbVar15 != (byte*)0x0) {
                  uVar8 = (uint)(char)*pbVar15;
                  goto LAB_00119504;
               }

               if (pbVar14 == (byte*)0x0) {
                  lVar7 = 4;
                  uVar8 = **(uint**)( lVar13 + 0x10 );
                  uVar4 = **(uint**)( lVar6 + 0x10 );
                  if (uVar8 != 0 || uVar4 != 0) {
                     do {
                        if (uVar4 == 0) goto LAB_001194b0;
                        if (uVar8 == 0) break;
                        if (uVar4 < uVar8) goto LAB_001194b0;
                        if (uVar8 < uVar4) break;
                        uVar4 = *(uint*)( (long)*(uint**)( lVar6 + 0x10 ) + lVar7 );
                        uVar8 = *(uint*)( (long)*(uint**)( lVar13 + 0x10 ) + lVar7 );
                        lVar7 = lVar7 + 4;
                     }
 while ( uVar4 != 0 || uVar8 != 0 );
                  }

                  goto LAB_001194d8;
               }

               uVar8 = (uint)(char)*pbVar14;
            }

            lVar13 = 0;
            uVar4 = **(uint**)( lVar6 + 0x10 );
            if (uVar4 != 0 || uVar8 != 0) {
               do {
                  if (uVar4 == 0) goto LAB_001194b0;
                  if (uVar8 == 0) break;
                  if (uVar4 < uVar8) goto LAB_001194b0;
                  if (uVar8 < uVar4) break;
                  uVar4 = ( *(uint**)( lVar6 + 0x10 ) )[lVar13 + 1];
                  uVar8 = (uint)(char)pbVar14[lVar13 + 1];
                  lVar13 = lVar13 + 1;
               }
 while ( uVar4 != 0 || uVar8 != 0 );
            }

         }

         LAB_001194d8:ppEVar9 = param_5 + param_1 + lVar12;
         lVar10 = lVar12;
         pEVar11 = pEVar3;
         lVar12 = lVar12 + 1;
         LAB_001194b0:lVar12 = lVar12 * 2;
         param_5[param_1 + lVar16] = pEVar11;
         lVar16 = lVar10;
      }
 while ( lVar12 < param_3 );
      if (lVar12 == param_3) goto LAB_001198dd;
   }
 else {
      ppEVar9 = param_5 + param_2 + param_1;
      if (lVar12 != param_3) goto LAB_001196da;
      LAB_001198dd:lVar10 = lVar12 + -1;
      *ppEVar9 = param_5[param_1 + lVar10];
      ppEVar9 = param_5 + param_1 + lVar10;
   }

   lVar12 = ( lVar10 + -1 ) - ( lVar10 + -1 >> 0x3f );
   if (param_2 < lVar10) {
      lVar16 = *(long*)param_4;
      while (true) {
         lVar13 = lVar12 >> 1;
         pEVar11 = param_5[param_1 + lVar13];
         lVar12 = *(long*)pEVar11;
         if (lVar12 == 0) break;
         pbVar15 = *(byte**)( lVar12 + 8 );
         if (lVar16 == 0) {
            uVar8 = 0;
            pbVar14 = &_LC0;
            if (pbVar15 != (byte*)0x0) {
               bVar5 = *pbVar15;
               uVar8 = (uint)(char)bVar5;
               uVar4 = 0;
               pbVar14 = &_LC0;
               goto LAB_0011975a;
            }

            LAB_001197ba:uVar4 = **(uint**)( lVar12 + 0x10 );
            if (uVar4 == 0 && uVar8 == 0) goto LAB_001196d0;
            lVar6 = 0;
            while (uVar4 != 0) {
               if (uVar8 == 0) goto LAB_001196d0;
               if (uVar4 < uVar8) break;
               if (uVar8 < uVar4) goto LAB_001196d0;
               uVar4 = ( *(uint**)( lVar12 + 0x10 ) )[lVar6 + 1];
               uVar8 = (uint)(char)pbVar14[lVar6 + 1];
               lVar6 = lVar6 + 1;
               if (uVar4 == 0 && uVar8 == 0) goto LAB_001196d0;
            }
;
         }
 else {
            pbVar14 = *(byte**)( lVar16 + 8 );
            if (pbVar15 == (byte*)0x0) {
               if (pbVar14 != (byte*)0x0) {
                  uVar8 = (uint)(char)*pbVar14;
                  goto LAB_001197ba;
               }

               uVar8 = **(uint**)( lVar16 + 0x10 );
               uVar4 = **(uint**)( lVar12 + 0x10 );
               if (uVar8 == 0 && uVar4 == 0) goto LAB_001196d0;
               lVar6 = 4;
               while (uVar4 != 0) {
                  if (uVar8 == 0) goto LAB_001196d0;
                  if (uVar4 < uVar8) break;
                  if (uVar8 < uVar4) goto LAB_001196d0;
                  uVar4 = *(uint*)( (long)*(uint**)( lVar12 + 0x10 ) + lVar6 );
                  uVar8 = *(uint*)( (long)*(uint**)( lVar16 + 0x10 ) + lVar6 );
                  lVar6 = lVar6 + 4;
                  if (uVar4 == 0 && uVar8 == 0) {
                     param_5[param_1 + lVar10] = param_4;
                     return;
                  }

               }
;
            }
 else {
               uVar4 = (uint)(char)*pbVar15;
               uVar8 = uVar4;
               if (pbVar14 == (byte*)0x0) goto LAB_00119705;
               LAB_00119754:uVar4 = (uint)(char)*pbVar14;
               bVar5 = (byte)uVar8 | *pbVar14;
               LAB_0011975a:if (bVar5 == 0) goto LAB_001196d0;
               lVar12 = 1;
               while (uVar8 != 0) {
                  if (uVar4 == 0) goto LAB_001196d0;
                  if (uVar8 < uVar4) break;
                  if (uVar4 < uVar8) goto LAB_001196d0;
                  pbVar1 = pbVar14 + lVar12;
                  uVar4 = (uint)(char)*pbVar1;
                  pbVar2 = pbVar15 + lVar12;
                  uVar8 = (uint)(char)*pbVar2;
                  lVar12 = lVar12 + 1;
                  if (*pbVar1 == 0 && *pbVar2 == 0) goto LAB_001196d0;
               }
;
            }

         }

         LAB_001196a0:param_5[lVar10 + param_1] = pEVar11;
         lVar12 = ( lVar13 + -1 ) - ( lVar13 + -1 >> 0x3f );
         lVar10 = lVar13;
         if (lVar13 <= param_2) {
            param_5[param_1 + lVar13] = param_4;
            return;
         }

      }
;
      if (lVar16 != 0) {
         pbVar14 = *(byte**)( lVar16 + 8 );
         uVar4 = 0;
         uVar8 = 0;
         pbVar15 = &_LC0;
         if (pbVar14 != (byte*)0x0) goto LAB_00119754;
         LAB_00119705:uVar8 = **(uint**)( lVar16 + 0x10 );
         if (uVar8 != 0 || uVar4 != 0) {
            lVar12 = 0;
            while (uVar4 != 0) {
               if (uVar8 == 0) goto LAB_001196d0;
               if (uVar4 < uVar8) break;
               if (uVar8 < uVar4) goto LAB_001196d0;
               uVar4 = (uint)(char)pbVar15[lVar12 + 1];
               uVar8 = ( *(uint**)( lVar16 + 0x10 ) )[lVar12 + 1];
               lVar12 = lVar12 + 1;
               if (uVar4 == 0 && uVar8 == 0) goto LAB_001196d0;
            }
;
            goto LAB_001196a0;
         }

      }

      LAB_001196d0:ppEVar9 = param_5 + lVar10 + param_1;
   }

   LAB_001196da:*ppEVar9 = param_4;
   return;
}
/* SortArray<List<StringName, DefaultAllocator>::Element*, List<StringName,
   DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,
   true>::unguarded_linear_insert(long, List<StringName, DefaultAllocator>::Element*,
   List<StringName, DefaultAllocator>::Element**) const [clone .isra.0] */void SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>::unguarded_linear_insert(long param_1, Element *param_2, Element **param_3) {
   byte *pbVar1;
   byte *pbVar2;
   long lVar3;
   byte bVar4;
   long lVar5;
   long lVar6;
   uint uVar7;
   uint uVar8;
   byte *pbVar9;
   Element *pEVar10;
   byte *pbVar11;
   lVar3 = *(long*)param_2;
   LAB_001199a0:pEVar10 = param_3[param_1 + -1];
   lVar5 = *(long*)pEVar10;
   if (lVar3 != 0) {
      pbVar9 = *(byte**)( lVar3 + 8 );
      do {
         if (lVar5 == 0) {
            if (pbVar9 != (byte*)0x0) goto code_r0x00119a51;
            uVar7 = 0;
            pbVar11 = &_LC0;
            LAB_001199dc:uVar8 = **(uint**)( lVar3 + 0x10 );
            if (uVar8 == 0 && uVar7 == 0) goto LAB_00119b6b;
            lVar5 = 0;
            while (uVar8 != 0) {
               if (uVar7 == 0) goto LAB_00119b6b;
               if (uVar8 < uVar7) break;
               if (uVar7 < uVar8) goto LAB_00119b6b;
               uVar8 = ( *(uint**)( lVar3 + 0x10 ) )[lVar5 + 1];
               uVar7 = (uint)(char)pbVar11[lVar5 + 1];
               lVar5 = lVar5 + 1;
               if (uVar8 == 0 && uVar7 == 0) goto LAB_00119b6b;
            }
;
         }
 else {
            pbVar11 = *(byte**)( lVar5 + 8 );
            if (pbVar9 != (byte*)0x0) {
               uVar7 = (uint)(char)*pbVar9;
               goto LAB_00119a7c;
            }

            if (pbVar11 != (byte*)0x0) {
               uVar7 = (uint)(char)*pbVar11;
               goto LAB_001199dc;
            }

            uVar7 = **(uint**)( lVar5 + 0x10 );
            uVar8 = **(uint**)( lVar3 + 0x10 );
            if (uVar7 == 0 && uVar8 == 0) goto LAB_00119b6b;
            lVar6 = 4;
            while (uVar8 != 0) {
               if (uVar7 == 0) goto LAB_00119b6b;
               if (uVar8 < uVar7) break;
               if (uVar7 < uVar8) goto LAB_00119b6b;
               uVar8 = *(uint*)( (long)*(uint**)( lVar3 + 0x10 ) + lVar6 );
               uVar7 = *(uint*)( (long)*(uint**)( lVar5 + 0x10 ) + lVar6 );
               lVar6 = lVar6 + 4;
               if (uVar8 == 0 && uVar7 == 0) goto LAB_00119b6b;
            }
;
         }

         if (param_1 == 1) goto LAB_00119b40;
         param_3[param_1] = pEVar10;
         pEVar10 = param_3[param_1 + -2];
         lVar5 = *(long*)pEVar10;
         param_1 = param_1 + -1;
      }
 while ( true );
   }

   if (lVar5 != 0) {
      pbVar11 = *(byte**)( lVar5 + 8 );
      uVar7 = 0;
      pbVar9 = &_LC0;
      LAB_00119a7c:if (pbVar11 != (byte*)0x0) {
         uVar8 = (uint)(char)*pbVar11;
         bVar4 = (byte)uVar7 | *pbVar11;
         goto LAB_00119aef;
      }

      uVar8 = **(uint**)( lVar5 + 0x10 );
      if (uVar8 != 0 || uVar7 != 0) {
         lVar6 = 0;
         while (uVar7 != 0) {
            if (uVar8 == 0) goto LAB_00119b6b;
            if (uVar7 < uVar8) break;
            if (uVar8 < uVar7) goto LAB_00119b6b;
            uVar7 = (uint)(char)pbVar9[lVar6 + 1];
            uVar8 = ( *(uint**)( lVar5 + 0x10 ) )[lVar6 + 1];
            lVar6 = lVar6 + 1;
            if (uVar7 == 0 && uVar8 == 0) goto LAB_00119b6b;
         }
;
         goto LAB_00119ad0;
      }

   }

   goto LAB_00119b6b;
   code_r0x00119a51:bVar4 = *pbVar9;
   uVar7 = (uint)(char)bVar4;
   pbVar11 = &_LC0;
   uVar8 = 0;
   LAB_00119aef:if (bVar4 == 0) goto LAB_00119b6b;
   lVar5 = 1;
   while (uVar7 != 0) {
      if (uVar8 == 0) goto LAB_00119b6b;
      if (uVar7 < uVar8) break;
      if (uVar8 < uVar7) goto LAB_00119b6b;
      pbVar1 = pbVar9 + lVar5;
      uVar7 = (uint)(char)*pbVar1;
      pbVar2 = pbVar11 + lVar5;
      uVar8 = (uint)(char)*pbVar2;
      lVar5 = lVar5 + 1;
      if (*pbVar1 == 0 && *pbVar2 == 0) goto LAB_00119b6b;
   }
;
   LAB_00119ad0:if (param_1 == 1) {
      LAB_00119b40:_err_print_error("unguarded_linear_insert", "./core/templates/sort_array.h", 0xff, "bad comparison function; sorting will be broken", 0, 0);
      param_1 = 1;
      LAB_00119b6b:param_3[param_1] = param_2;
      return;
   }

   param_3[param_1] = pEVar10;
   param_1 = param_1 + -1;
   goto LAB_001199a0;
}
/* SortArray<List<StringName, DefaultAllocator>::Element*, List<StringName,
   DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>, true>::linear_insert(long, long,
   List<StringName, DefaultAllocator>::Element**) const [clone .isra.0] */void SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>::linear_insert(long param_1, long param_2, Element **param_3) {
   Element **__src;
   byte *pbVar1;
   byte *pbVar2;
   Element *pEVar3;
   byte bVar4;
   long lVar5;
   long lVar6;
   long lVar7;
   uint uVar8;
   uint uVar9;
   byte *pbVar10;
   byte *pbVar11;
   __src = param_3 + param_1;
   pEVar3 = param_3[param_2];
   lVar6 = *(long*)pEVar3;
   lVar5 = *(long*)*__src;
   if (lVar6 == 0) {
      if (lVar5 == 0) goto LAB_00119d40;
      pbVar10 = *(byte**)( lVar5 + 8 );
      uVar8 = 0;
      pbVar11 = &_LC0;
      LAB_00119cf4:if (pbVar10 == (byte*)0x0) {
         uVar9 = **(uint**)( lVar5 + 0x10 );
         if (uVar8 != 0 || uVar9 != 0) {
            lVar6 = 0;
            do {
               if (uVar8 == 0) goto LAB_00119c90;
               if (uVar9 == 0) break;
               if (uVar8 < uVar9) goto LAB_00119c90;
               if (uVar9 < uVar8) break;
               uVar8 = (uint)(char)pbVar11[lVar6 + 1];
               uVar9 = ( *(uint**)( lVar5 + 0x10 ) )[lVar6 + 1];
               lVar6 = lVar6 + 1;
            }
 while ( uVar8 != 0 || uVar9 != 0 );
         }

         goto LAB_00119d40;
      }

      uVar9 = (uint)(char)*pbVar10;
      bVar4 = (byte)uVar8 | *pbVar10;
      LAB_00119d67:if (bVar4 != 0) {
         lVar6 = 1;
         do {
            if (uVar8 == 0) goto LAB_00119c90;
            if (uVar9 == 0) break;
            if (uVar8 < uVar9) goto LAB_00119c90;
            if (uVar9 < uVar8) break;
            pbVar2 = pbVar11 + lVar6;
            uVar8 = (uint)(char)*pbVar2;
            pbVar1 = pbVar10 + lVar6;
            uVar9 = (uint)(char)*pbVar1;
            lVar6 = lVar6 + 1;
         }
 while ( *pbVar2 != 0 || *pbVar1 != 0 );
      }

   }
 else {
      pbVar11 = *(byte**)( lVar6 + 8 );
      if (lVar5 == 0) {
         if (pbVar11 != (byte*)0x0) {
            bVar4 = *pbVar11;
            uVar8 = (uint)(char)bVar4;
            pbVar10 = &_LC0;
            uVar9 = 0;
            goto LAB_00119d67;
         }

         uVar8 = 0;
         pbVar10 = &_LC0;
      }
 else {
         pbVar10 = *(byte**)( lVar5 + 8 );
         if (pbVar11 != (byte*)0x0) {
            uVar8 = (uint)(char)*pbVar11;
            goto LAB_00119cf4;
         }

         if (pbVar10 == (byte*)0x0) {
            uVar8 = **(uint**)( lVar5 + 0x10 );
            uVar9 = **(uint**)( lVar6 + 0x10 );
            if (uVar8 != 0 || uVar9 != 0) {
               lVar7 = 4;
               do {
                  if (uVar9 == 0) goto LAB_00119c90;
                  if (uVar8 == 0) break;
                  if (uVar9 < uVar8) goto LAB_00119c90;
                  if (uVar8 < uVar9) break;
                  uVar9 = *(uint*)( (long)*(uint**)( lVar6 + 0x10 ) + lVar7 );
                  uVar8 = *(uint*)( (long)*(uint**)( lVar5 + 0x10 ) + lVar7 );
                  lVar7 = lVar7 + 4;
               }
 while ( uVar9 != 0 || uVar8 != 0 );
            }

            goto LAB_00119d40;
         }

         uVar8 = (uint)(char)*pbVar10;
      }

      uVar9 = **(uint**)( lVar6 + 0x10 );
      if (uVar8 != 0 || uVar9 != 0) {
         lVar5 = 0;
         do {
            if (uVar9 == 0) {
               LAB_00119c90:if (param_1 < param_2) {
                  memmove(param_3 + param_1 + 1, __src, ( param_2 - param_1 ) * 8);
               }

               *__src = pEVar3;
               return;
            }

            if (uVar8 == 0) break;
            if (uVar9 < uVar8) goto LAB_00119c90;
            if (uVar8 < uVar9) break;
            uVar9 = ( *(uint**)( lVar6 + 0x10 ) )[lVar5 + 1];
            uVar8 = (uint)(char)pbVar10[lVar5 + 1];
            lVar5 = lVar5 + 1;
         }
 while ( uVar9 != 0 || uVar8 != 0 );
      }

   }

   LAB_00119d40:unguarded_linear_insert(param_2, pEVar3, param_3);
   return;
}
/* SortArray<List<StringName, DefaultAllocator>::Element*, List<StringName,
   DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,
   true>::median_of_3(List<StringName, DefaultAllocator>::Element* const&, List<StringName,
   DefaultAllocator>::Element* const&, List<StringName, DefaultAllocator>::Element* const&) const
   [clone .isra.0] */Element **SortArray<List<StringName,DefaultAllocator>::Element*,List < StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>byte *pbVar2byte bVar3uint uVar4uint uVar5uint uVar6uint *puVar7long lVar8long lVar9uint *puVar10byte bVar11uint uVar12long lVar13long lVar14byte *pbVar15byte *pbVar16byte *pbVar17lVar8 = *(long*)*param_1;lVar9 = *(long*)*param_3;lVar13 = *(long*)*param_2;if (lVar8 == 0) {
   pbVar15 = &_LC0;
   pbVar16 = &_LC0;
   if (lVar13 == 0) {
      LAB_0011a750:if (lVar9 != 0) {
         pbVar17 = *(byte**)( lVar9 + 8 );
         LAB_0011a01e:uVar5 = (uint)(char)*pbVar16;
         uVar4 = uVar5;
         goto LAB_0011a024;
      }

      uVar5 = (uint)(char)*pbVar16;
      uVar6 = 0;
      uVar12 = 0;
      pbVar17 = &_LC0;
      if (*pbVar16 == 0) goto LAB_0011a319;
      LAB_0011a172:lVar8 = 1;
      do {
         if (uVar5 == 0) {
            return param_1;
         }

         if (uVar6 == 0) break;
         if (uVar5 < uVar6) {
            return param_1;
         }

         if (uVar6 < uVar5) break;
         pbVar2 = pbVar16 + lVar8;
         uVar5 = (uint)(char)*pbVar2;
         pbVar1 = pbVar17 + lVar8;
         uVar6 = (uint)(char)*pbVar1;
         lVar8 = lVar8 + 1;
      }
 while ( *pbVar2 != 0 || *pbVar1 != 0 );
   }
 else {
      pbVar15 = *(byte**)( lVar13 + 8 );
      uVar4 = 0;
      pbVar16 = &_LC0;
      LAB_00119fa2:if (pbVar15 != (byte*)0x0) {
         uVar12 = (uint)(char)*pbVar15;
         bVar11 = *pbVar15 | (byte)uVar4;
         LAB_0011a090:if (bVar11 != 0) {
            lVar14 = 1;
            do {
               if (uVar4 == 0) goto joined_r0x0011a0d8;
               if (uVar12 == 0) break;
               if (uVar4 < uVar12) goto joined_r0x0011a0d8;
               if (uVar12 < uVar4) break;
               pbVar17 = pbVar16 + lVar14;
               uVar4 = (uint)(char)*pbVar17;
               pbVar2 = pbVar15 + lVar14;
               uVar12 = (uint)(char)*pbVar2;
               lVar14 = lVar14 + 1;
            }
 while ( *pbVar17 != 0 || *pbVar2 != 0 );
            goto LAB_0011a008;
         }

         goto LAB_0011a750;
      }

      uVar12 = **(uint**)( lVar13 + 0x10 );
      if (uVar4 != 0 || uVar12 != 0) {
         lVar14 = 0;
         do {
            if (uVar4 == 0) goto joined_r0x0011a0d8;
            if (uVar12 == 0) break;
            if (uVar4 < uVar12) goto joined_r0x0011a0d8;
            if (uVar12 < uVar4) break;
            uVar4 = (uint)(char)pbVar16[lVar14 + 1];
            uVar12 = ( *(uint**)( lVar13 + 0x10 ) )[lVar14 + 1];
            lVar14 = lVar14 + 1;
         }
 while ( uVar4 != 0 || uVar12 != 0 );
         goto LAB_0011a008;
      }

      if (lVar9 == 0) goto LAB_0011a371;
      pbVar17 = *(byte**)( lVar9 + 8 );
      uVar5 = 0;
      LAB_0011a024:if (pbVar17 != (byte*)0x0) {
         uVar6 = (uint)(char)*pbVar17;
         bVar11 = (byte)uVar4 | *pbVar17;
         goto LAB_0011a169;
      }

      puVar10 = *(uint**)( lVar9 + 0x10 );
      uVar4 = *puVar10;
      uVar6 = uVar4 | uVar5;
      if (uVar6 == 0) goto LAB_0011a656;
      lVar8 = 0;
      do {
         if (uVar5 == 0) {
            return param_1;
         }

         if (uVar4 == 0) break;
         if (uVar5 < uVar4) {
            return param_1;
         }

         if (uVar4 < uVar5) break;
         uVar5 = (uint)(char)pbVar16[lVar8 + 1];
         uVar4 = puVar10[lVar8 + 1];
         lVar8 = lVar8 + 1;
      }
 while ( uVar5 != 0 || uVar4 != 0 );
   }

   LAB_0011a300:if (pbVar15 == (byte*)0x0) {
      if (pbVar17 == (byte*)0x0) {
         puVar10 = *(uint**)( lVar9 + 0x10 );
         LAB_0011a65f:uVar4 = *puVar10;
         uVar12 = **(uint**)( lVar13 + 0x10 );
         if (uVar12 == 0 && uVar4 == 0) {
            return param_2;
         }

         lVar8 = 4;
         while (true) {
            if (uVar12 == 0) {
               return param_3;
            }

            if (uVar4 == 0) {
               return param_2;
            }

            if (uVar12 < uVar4) {
               return param_3;
            }

            if (uVar4 < uVar12) break;
            uVar12 = *(uint*)( (long)*(uint**)( lVar13 + 0x10 ) + lVar8 );
            uVar4 = *(uint*)( (long)puVar10 + lVar8 );
            lVar8 = lVar8 + 4;
            if (uVar12 == 0 && uVar4 == 0) {
               return param_2;
            }

         }
;
         return param_2;
      }

      uVar12 = (uint)(char)*pbVar17;
      LAB_0011a4e6:uVar4 = **(uint**)( lVar13 + 0x10 );
      if (uVar4 != 0 || uVar12 != 0) {
         lVar8 = 0;
         do {
            if (uVar4 == 0) {
               return param_3;
            }

            if (uVar12 == 0) {
               return param_2;
            }

            if (uVar4 < uVar12) {
               return param_3;
            }

            if (uVar12 < uVar4) {
               return param_2;
            }

            uVar4 = ( *(uint**)( lVar13 + 0x10 ) )[lVar8 + 1];
            uVar12 = (uint)(char)pbVar17[lVar8 + 1];
            lVar8 = lVar8 + 1;
         }
 while ( uVar4 != 0 || uVar12 != 0 );
      }

      return param_2;
   }

   if (pbVar17 == (byte*)0x0) {
      puVar10 = *(uint**)( lVar9 + 0x10 );
      uVar6 = *puVar10;
      LAB_0011a548:uVar4 = (uint)(char)*pbVar15;
      if (uVar4 == 0 && uVar6 == 0) {
         return param_2;
      }

      lVar8 = 0;
      while (true) {
         if (uVar4 == 0) {
            return param_3;
         }

         if (uVar6 == 0) {
            return param_2;
         }

         if (uVar4 < uVar6) {
            return param_3;
         }

         if (uVar6 < uVar4) break;
         uVar4 = (uint)(char)pbVar15[lVar8 + 1];
         uVar6 = puVar10[lVar8 + 1];
         lVar8 = lVar8 + 1;
         if (uVar4 == 0 && uVar6 == 0) {
            return param_2;
         }

      }
;
      return param_2;
   }

   uVar12 = (uint)(char)*pbVar17;
   uVar5 = uVar12;
}
 else {
   pbVar16 = *(byte**)( lVar8 + 8 );
   if (lVar13 == 0) {
      if (pbVar16 != (byte*)0x0) {
         bVar11 = *pbVar16;
         uVar4 = (uint)(char)bVar11;
         uVar12 = 0;
         pbVar15 = &_LC0;
         goto LAB_0011a090;
      }

      uVar4 = 0;
      pbVar15 = &_LC0;
      LAB_00119e82:uVar12 = **(uint**)( lVar8 + 0x10 );
      if (uVar4 != 0 || uVar12 != 0) {
         lVar14 = 0;
         do {
            if (uVar12 == 0) goto joined_r0x0011a0d8;
            if (uVar4 == 0) break;
            if (uVar12 < uVar4) goto joined_r0x0011a0d8;
            if (uVar4 < uVar12) break;
            uVar12 = ( *(uint**)( lVar8 + 0x10 ) )[lVar14 + 1];
            uVar4 = (uint)(char)pbVar15[lVar14 + 1];
            lVar14 = lVar14 + 1;
         }
 while ( uVar12 != 0 || uVar4 != 0 );
      }

      LAB_0011a008:if (lVar9 != 0) {
         pbVar17 = *(byte**)( lVar9 + 8 );
         if (pbVar16 != (byte*)0x0) goto LAB_0011a01e;
         puVar7 = *(uint**)( lVar8 + 0x10 );
         uVar4 = *puVar7;
         LAB_0011a408:if (pbVar17 != (byte*)0x0) {
            uVar12 = (uint)(char)*pbVar17;
            uVar6 = uVar4 | uVar12;
            goto LAB_0011a6c3;
         }

         puVar10 = *(uint**)( lVar9 + 0x10 );
         uVar12 = *puVar10;
         uVar6 = uVar12 | uVar4;
         if (uVar6 != 0) {
            lVar8 = 4;
            do {
               if (uVar4 == 0) {
                  return param_1;
               }

               if (uVar12 == 0) break;
               if (uVar4 < uVar12) {
                  return param_1;
               }

               if (uVar12 < uVar4) break;
               uVar4 = *(uint*)( (long)puVar7 + lVar8 );
               uVar12 = *(uint*)( (long)puVar10 + lVar8 );
               lVar8 = lVar8 + 4;
            }
 while ( uVar4 != 0 || uVar12 != 0 );
            goto LAB_0011a300;
         }

         LAB_0011a656:if (pbVar15 != (byte*)0x0) goto LAB_0011a548;
         goto LAB_0011a65f;
      }

      if (pbVar16 == (byte*)0x0) {
         puVar7 = *(uint**)( lVar8 + 0x10 );
         goto LAB_0011a721;
      }

      LAB_0011a371:bVar11 = *pbVar16;
      uVar5 = (uint)(char)bVar11;
      uVar6 = 0;
      pbVar17 = &_LC0;
      LAB_0011a169:uVar12 = uVar6;
      if (bVar11 != 0) goto LAB_0011a172;
   }
 else {
      pbVar15 = *(byte**)( lVar13 + 8 );
      if (pbVar16 != (byte*)0x0) {
         uVar4 = (uint)(char)*pbVar16;
         goto LAB_00119fa2;
      }

      if (pbVar15 != (byte*)0x0) {
         uVar4 = (uint)(char)*pbVar15;
         goto LAB_00119e82;
      }

      puVar7 = *(uint**)( lVar8 + 0x10 );
      uVar12 = **(uint**)( lVar13 + 0x10 );
      uVar4 = *puVar7;
      if (uVar12 != 0 || uVar4 != 0) {
         lVar14 = 4;
         do {
            if (uVar4 == 0) {
               LAB_0011a278:pbVar16 = (byte*)0x0;
               goto joined_r0x0011a0d8;
            }

            if (uVar12 == 0) break;
            if (uVar4 < uVar12) goto LAB_0011a278;
            if (uVar12 < uVar4) break;
            uVar4 = *(uint*)( (long)puVar7 + lVar14 );
            uVar12 = *(uint*)( (long)*(uint**)( lVar13 + 0x10 ) + lVar14 );
            lVar14 = lVar14 + 4;
         }
 while ( uVar4 != 0 || uVar12 != 0 );
         pbVar16 = (byte*)0x0;
         goto LAB_0011a008;
      }

      if (lVar9 != 0) {
         pbVar17 = *(byte**)( lVar9 + 8 );
         uVar4 = 0;
         goto LAB_0011a408;
      }

      LAB_0011a721:uVar4 = *puVar7;
      uVar12 = 0;
      pbVar17 = &_LC0;
      uVar6 = uVar4;
      LAB_0011a6c3:if (uVar6 != 0) {
         lVar8 = 0;
         do {
            if (uVar4 == 0) {
               return param_1;
            }

            if (uVar12 == 0) break;
            if (uVar4 < uVar12) {
               return param_1;
            }

            if (uVar12 < uVar4) break;
            uVar4 = puVar7[lVar8 + 1];
            uVar12 = (uint)(char)pbVar17[lVar8 + 1];
            lVar8 = lVar8 + 1;
         }
 while ( uVar4 != 0 || uVar12 != 0 );
         goto LAB_0011a300;
      }

   }

   uVar5 = uVar12;
   if (pbVar15 == (byte*)0x0) goto LAB_0011a4e6;
}
LAB_0011a319:bVar11 = *pbVar15;if (bVar11 == 0 && (char)uVar5 == '\0') {
   return param_2;
}
lVar8 = 1;while (true) {
   uVar4 = (uint)(char)bVar11;
   if (uVar4 == 0) {
      return param_3;
   }

   if (uVar12 == 0) {
      return param_2;
   }

   if (uVar4 < uVar12) {
      return param_3;
   }

   if (uVar12 < uVar4) break;
   bVar11 = pbVar15[lVar8];
   pbVar16 = pbVar17 + lVar8;
   uVar12 = (uint)(char)*pbVar16;
   lVar8 = lVar8 + 1;
   if (bVar11 == 0 && *pbVar16 == 0) {
      return param_2;
   }

}
;return param_2;joined_r0x0011a0d8:if (lVar9 == 0) {
   uVar4 = 0;
   uVar12 = 0;
   bVar11 = 0;
   pbVar17 = &_LC0;
   if (pbVar15 != (byte*)0x0) goto LAB_0011a1c7;
   LAB_0011a0f4:uVar6 = **(uint**)( lVar13 + 0x10 );
   uVar4 = uVar6 | uVar12;
   if (uVar4 != 0) {
      lVar14 = 0;
      do {
         if (uVar6 == 0) {
            return param_2;
         }

         if (uVar12 == 0) break;
         if (uVar6 < uVar12) {
            return param_2;
         }

         if (uVar12 < uVar6) break;
         uVar6 = ( *(uint**)( lVar13 + 0x10 ) )[lVar14 + 1];
         uVar12 = (uint)(char)pbVar17[lVar14 + 1];
         lVar14 = lVar14 + 1;
      }
 while ( uVar6 != 0 || uVar12 != 0 );
      goto LAB_0011a290;
   }

   LAB_0011a75e:bVar11 = (byte)uVar12;
   if (pbVar16 == (byte*)0x0) goto LAB_0011a47e;
}
 else {
   pbVar17 = *(byte**)( lVar9 + 8 );
   if (pbVar15 == (byte*)0x0) {
      if (pbVar17 != (byte*)0x0) {
         uVar12 = (uint)(char)*pbVar17;
         goto LAB_0011a0f4;
      }

      puVar7 = *(uint**)( lVar9 + 0x10 );
      uVar4 = *puVar7;
      uVar6 = **(uint**)( lVar13 + 0x10 );
      uVar12 = uVar4 | uVar6;
      if (uVar12 == 0) goto LAB_0011a5f9;
      lVar14 = 4;
      do {
         if (uVar6 == 0) {
            return param_2;
         }

         if (uVar4 == 0) break;
         if (uVar6 < uVar4) {
            return param_2;
         }

         if (uVar4 < uVar6) break;
         uVar6 = *(uint*)( (long)*(uint**)( lVar13 + 0x10 ) + lVar14 );
         uVar4 = *(uint*)( (long)puVar7 + lVar14 );
         lVar14 = lVar14 + 4;
      }
 while ( uVar6 != 0 || uVar4 != 0 );
   }
 else {
      if (pbVar17 == (byte*)0x0) {
         puVar7 = *(uint**)( lVar9 + 0x10 );
         uVar6 = (uint)(char)*pbVar15;
         uVar4 = *puVar7;
         uVar12 = uVar4 | uVar6;
         if (uVar12 != 0) {
            lVar13 = 0;
            do {
               if (uVar6 == 0) {
                  return param_2;
               }

               if (uVar4 == 0) break;
               if (uVar6 < uVar4) {
                  return param_2;
               }

               if (uVar4 < uVar6) break;
               uVar6 = (uint)(char)pbVar15[lVar13 + 1];
               uVar4 = puVar7[lVar13 + 1];
               lVar13 = lVar13 + 1;
            }
 while ( uVar6 != 0 || uVar4 != 0 );
            goto LAB_0011a290;
         }

         LAB_0011a5f9:if (pbVar16 == (byte*)0x0) goto LAB_0011a5fe;
         goto LAB_0011a5a6;
      }

      bVar11 = *pbVar17;
      uVar4 = (uint)(char)bVar11;
      LAB_0011a1c7:bVar3 = *pbVar15;
      uVar12 = ( uint )(bVar11 | bVar3);
      if (( bVar11 | bVar3 ) == 0) goto LAB_0011a75e;
      lVar13 = 1;
      do {
         uVar12 = (uint)(char)bVar3;
         if (uVar12 == 0) {
            return param_2;
         }

         if (uVar4 == 0) break;
         if (uVar12 < uVar4) {
            return param_2;
         }

         if (uVar4 < uVar12) break;
         bVar3 = pbVar15[lVar13];
         pbVar2 = pbVar17 + lVar13;
         uVar4 = (uint)(char)*pbVar2;
         lVar13 = lVar13 + 1;
      }
 while ( bVar3 != 0 || *pbVar2 != 0 );
   }

   LAB_0011a290:if (pbVar16 == (byte*)0x0) {
      if (pbVar17 == (byte*)0x0) {
         puVar7 = *(uint**)( lVar9 + 0x10 );
         LAB_0011a5fe:uVar4 = *puVar7;
         uVar12 = **(uint**)( lVar8 + 0x10 );
         if (uVar12 == 0 && uVar4 == 0) {
            return param_1;
         }

         lVar9 = 4;
         while (true) {
            if (uVar12 == 0) {
               return param_3;
            }

            if (uVar4 == 0) {
               return param_1;
            }

            if (uVar12 < uVar4) {
               return param_3;
            }

            if (uVar4 < uVar12) break;
            uVar12 = *(uint*)( (long)*(uint**)( lVar8 + 0x10 ) + lVar9 );
            uVar4 = *(uint*)( (long)puVar7 + lVar9 );
            lVar9 = lVar9 + 4;
            if (uVar12 == 0 && uVar4 == 0) {
               return param_1;
            }

         }
;
         return param_1;
      }

      uVar4 = (uint)(char)*pbVar17;
      LAB_0011a47e:uVar12 = **(uint**)( lVar8 + 0x10 );
      if (uVar12 == 0 && uVar4 == 0) {
         return param_1;
      }

      lVar9 = 0;
      while (true) {
         if (uVar12 == 0) {
            return param_3;
         }

         if (uVar4 == 0) {
            return param_1;
         }

         if (uVar12 < uVar4) {
            return param_3;
         }

         if (uVar4 < uVar12) break;
         uVar12 = ( *(uint**)( lVar8 + 0x10 ) )[lVar9 + 1];
         uVar4 = (uint)(char)pbVar17[lVar9 + 1];
         lVar9 = lVar9 + 1;
         if (uVar12 == 0 && uVar4 == 0) {
            return param_1;
         }

      }
;
      return param_1;
   }

   if (pbVar17 == (byte*)0x0) {
      puVar7 = *(uint**)( lVar9 + 0x10 );
      uVar12 = *puVar7;
      LAB_0011a5a6:uVar4 = (uint)(char)*pbVar16;
      if (uVar12 == 0 && uVar4 == 0) {
         return param_1;
      }

      lVar8 = 0;
      while (true) {
         if (uVar4 == 0) {
            return param_3;
         }

         if (uVar12 == 0) {
            return param_1;
         }

         if (uVar4 < uVar12) {
            return param_3;
         }

         if (uVar12 < uVar4) break;
         uVar4 = (uint)(char)pbVar16[lVar8 + 1];
         uVar12 = puVar7[lVar8 + 1];
         lVar8 = lVar8 + 1;
         if (uVar4 == 0 && uVar12 == 0) {
            return param_1;
         }

      }
;
      return param_1;
   }

   bVar11 = *pbVar17;
   uVar4 = (uint)(char)bVar11;
}
bVar3 = *pbVar16;if (bVar3 == 0 && bVar11 == 0) {
   return param_1;
}
lVar8 = 1;while (true) {
   uVar12 = (uint)(char)bVar3;
   if (uVar12 == 0) {
      return param_3;
   }

   if (uVar4 == 0) {
      return param_1;
   }

   if (uVar12 < uVar4) {
      return param_3;
   }

   if (uVar4 < uVar12) break;
   bVar3 = pbVar16[lVar8];
   pbVar15 = pbVar17 + lVar8;
   uVar4 = (uint)(char)*pbVar15;
   lVar8 = lVar8 + 1;
   if (bVar3 == 0 && *pbVar15 == 0) {
      return param_1;
   }

}
;return param_1;}/* SortArray<List<StringName, DefaultAllocator>::Element*, List<StringName,
   DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>, true>::partitioner(long, long,
   List<StringName, DefaultAllocator>::Element*, List<StringName, DefaultAllocator>::Element**)
   const [clone .isra.0] */long SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>::partitioner(long param_1, long param_2, Element *param_3, Element **param_4) {
   byte *pbVar1;
   byte *pbVar2;
   Element *pEVar3;
   Element **ppEVar4;
   uint uVar5;
   byte bVar6;
   long lVar7;
   long lVar8;
   uint uVar9;
   long lVar10;
   long lVar11;
   byte *pbVar12;
   byte *pbVar13;
   long lVar14;
   lVar14 = *(long*)param_3;
   lVar7 = *(long*)param_4[param_1];
   lVar11 = param_1;
   lVar10 = param_2;
   joined_r0x0011a807:if (lVar7 == 0) {
      if (lVar14 == 0) goto LAB_0011a938;
      pbVar13 = *(byte**)( lVar14 + 8 );
      uVar9 = 0;
      pbVar12 = &_LC0;
      LAB_0011a8be:if (pbVar13 == (byte*)0x0) {
         uVar5 = **(uint**)( lVar14 + 0x10 );
         if (uVar5 != 0 || uVar9 != 0) {
            lVar7 = 0;
            do {
               if (uVar9 == 0) goto LAB_0011a888;
               if (uVar5 == 0) break;
               if (uVar9 < uVar5) goto LAB_0011a888;
               if (uVar5 < uVar9) break;
               uVar9 = (uint)(char)pbVar12[lVar7 + 1];
               uVar5 = ( *(uint**)( lVar14 + 0x10 ) )[lVar7 + 1];
               lVar7 = lVar7 + 1;
            }
 while ( uVar9 != 0 || uVar5 != 0 );
         }

         goto LAB_0011a938;
      }

      uVar5 = (uint)(char)*pbVar13;
      bVar6 = (byte)uVar9 | *pbVar13;
      LAB_0011ab85:if (bVar6 != 0) {
         lVar7 = 1;
         do {
            if (uVar9 == 0) goto LAB_0011a888;
            if (uVar5 == 0) break;
            if (uVar9 < uVar5) goto LAB_0011a888;
            if (uVar5 < uVar9) break;
            pbVar1 = pbVar12 + lVar7;
            uVar9 = (uint)(char)*pbVar1;
            pbVar2 = pbVar13 + lVar7;
            uVar5 = (uint)(char)*pbVar2;
            lVar7 = lVar7 + 1;
         }
 while ( *pbVar1 != 0 || *pbVar2 != 0 );
      }

   }
 else {
      pbVar12 = *(byte**)( lVar7 + 8 );
      if (lVar14 == 0) {
         if (pbVar12 != (byte*)0x0) {
            bVar6 = *pbVar12;
            uVar9 = (uint)(char)bVar6;
            uVar5 = 0;
            pbVar13 = &_LC0;
            goto LAB_0011ab85;
         }

         uVar9 = 0;
         pbVar13 = &_LC0;
      }
 else {
         pbVar13 = *(byte**)( lVar14 + 8 );
         if (pbVar12 != (byte*)0x0) {
            uVar9 = (uint)(char)*pbVar12;
            goto LAB_0011a8be;
         }

         if (pbVar13 == (byte*)0x0) {
            uVar9 = **(uint**)( lVar14 + 0x10 );
            uVar5 = **(uint**)( lVar7 + 0x10 );
            if (uVar9 != 0 || uVar5 != 0) {
               lVar8 = 4;
               do {
                  if (uVar5 == 0) goto LAB_0011a888;
                  if (uVar9 == 0) break;
                  if (uVar5 < uVar9) goto LAB_0011a888;
                  if (uVar9 < uVar5) break;
                  uVar5 = *(uint*)( (long)*(uint**)( lVar7 + 0x10 ) + lVar8 );
                  uVar9 = *(uint*)( (long)*(uint**)( lVar14 + 0x10 ) + lVar8 );
                  lVar8 = lVar8 + 4;
               }
 while ( uVar5 != 0 || uVar9 != 0 );
            }

            goto LAB_0011a938;
         }

         uVar9 = (uint)(char)*pbVar13;
      }

      uVar5 = **(uint**)( lVar7 + 0x10 );
      if (uVar5 != 0 || uVar9 != 0) {
         lVar8 = 0;
         do {
            if (uVar5 == 0) goto LAB_0011a888;
            if (uVar9 == 0) break;
            if (uVar5 < uVar9) goto LAB_0011a888;
            if (uVar9 < uVar5) break;
            uVar5 = ( *(uint**)( lVar7 + 0x10 ) )[lVar8 + 1];
            uVar9 = (uint)(char)pbVar13[lVar8 + 1];
            lVar8 = lVar8 + 1;
         }
 while ( uVar5 != 0 || uVar9 != 0 );
      }

   }

   goto LAB_0011a938;
   LAB_0011a888:if (param_2 + -1 == lVar11) {
      _err_print_error("partitioner", "./core/templates/sort_array.h", 0xb2, "bad comparison function; sorting will be broken", 0, 0);
      lVar14 = *(long*)param_3;
      LAB_0011a938:lVar10 = lVar10 + -1;
      lVar7 = *(long*)param_4[lVar10];
      ppEVar4 = param_4 + lVar10;
      do {
         if (lVar14 == 0) {
            if (lVar7 == 0) goto LAB_0011ab38;
            pbVar13 = *(byte**)( lVar7 + 8 );
            uVar5 = 0;
            pbVar12 = &_LC0;
            uVar9 = 0;
            if (pbVar13 == (byte*)0x0) {
               LAB_0011aa0c:uVar9 = **(uint**)( lVar7 + 0x10 );
               if (uVar9 == 0 && uVar5 == 0) goto LAB_0011ab38;
               lVar8 = 0;
               while (uVar5 != 0) {
                  if (uVar9 == 0) goto LAB_0011ab38;
                  if (uVar5 < uVar9) break;
                  if (uVar9 < uVar5) goto LAB_0011ab38;
                  uVar5 = (uint)(char)pbVar12[lVar8 + 1];
                  uVar9 = ( *(uint**)( lVar7 + 0x10 ) )[lVar8 + 1];
                  lVar8 = lVar8 + 1;
                  if (uVar5 == 0 && uVar9 == 0) goto LAB_0011ab38;
               }
;
            }
 else {
               LAB_0011aa6b:uVar5 = (uint)(char)*pbVar13;
               bVar6 = (byte)uVar9 | *pbVar13;
               LAB_0011aa71:if (bVar6 == 0) goto LAB_0011ab38;
               lVar7 = 1;
               while (uVar9 != 0) {
                  if (uVar5 == 0) goto LAB_0011ab38;
                  if (uVar9 < uVar5) break;
                  if (uVar5 < uVar9) goto LAB_0011ab38;
                  pbVar1 = pbVar12 + lVar7;
                  uVar9 = (uint)(char)*pbVar1;
                  pbVar2 = pbVar13 + lVar7;
                  uVar5 = (uint)(char)*pbVar2;
                  lVar7 = lVar7 + 1;
                  if (*pbVar1 == 0 && *pbVar2 == 0) goto LAB_0011ab38;
               }
;
            }

         }
 else {
            pbVar12 = *(byte**)( lVar14 + 8 );
            if (lVar7 == 0) {
               uVar9 = 0;
               pbVar13 = &_LC0;
               if (pbVar12 != (byte*)0x0) {
                  bVar6 = *pbVar12;
                  uVar9 = (uint)(char)bVar6;
                  uVar5 = 0;
                  pbVar13 = &_LC0;
                  goto LAB_0011aa71;
               }

            }
 else {
               pbVar13 = *(byte**)( lVar7 + 8 );
               if (pbVar12 != (byte*)0x0) {
                  uVar5 = (uint)(char)*pbVar12;
                  uVar9 = uVar5;
                  if (pbVar13 == (byte*)0x0) goto LAB_0011aa0c;
                  goto LAB_0011aa6b;
               }

               if (pbVar13 == (byte*)0x0) {
                  uVar9 = **(uint**)( lVar7 + 0x10 );
                  uVar5 = **(uint**)( lVar14 + 0x10 );
                  if (uVar9 != 0 || uVar5 != 0) {
                     lVar8 = 4;
                     while (uVar5 != 0) {
                        if (uVar9 == 0) goto LAB_0011ab38;
                        if (uVar5 < uVar9) break;
                        if (uVar9 < uVar5) goto LAB_0011ab38;
                        uVar5 = *(uint*)( (long)*(uint**)( lVar14 + 0x10 ) + lVar8 );
                        uVar9 = *(uint*)( (long)*(uint**)( lVar7 + 0x10 ) + lVar8 );
                        lVar8 = lVar8 + 4;
                        if (uVar5 == 0 && uVar9 == 0) goto LAB_0011ab38;
                     }
;
                     goto LAB_0011a9d0;
                  }

                  goto LAB_0011ab38;
               }

               uVar9 = (uint)(char)*pbVar13;
            }

            uVar5 = **(uint**)( lVar14 + 0x10 );
            if (uVar5 == 0 && uVar9 == 0) goto LAB_0011ab38;
            lVar7 = 0;
            while (uVar5 != 0) {
               if (uVar9 == 0) goto LAB_0011ab38;
               if (uVar5 < uVar9) break;
               if (uVar9 < uVar5) goto LAB_0011ab38;
               uVar5 = ( *(uint**)( lVar14 + 0x10 ) )[lVar7 + 1];
               uVar9 = (uint)(char)pbVar13[lVar7 + 1];
               lVar7 = lVar7 + 1;
               if (uVar5 == 0 && uVar9 == 0) goto LAB_0011ab38;
            }
;
         }

         LAB_0011a9d0:if (lVar10 == param_1) goto LAB_0011ab10;
         lVar10 = lVar10 + -1;
         lVar7 = *(long*)ppEVar4[-1];
         ppEVar4 = ppEVar4 + -1;
      }
 while ( true );
   }

   LAB_0011a896:lVar11 = lVar11 + 1;
   lVar7 = *(long*)param_4[lVar11];
   goto joined_r0x0011a807;
   LAB_0011ab10:_err_print_error("partitioner", "./core/templates/sort_array.h", 0xb9, "bad comparison function; sorting will be broken", 0, 0);
   LAB_0011ab38:if (lVar10 <= lVar11) {
      return lVar11;
   }

   pEVar3 = param_4[lVar11];
   param_4[lVar11] = *ppEVar4;
   *ppEVar4 = pEVar3;
   lVar14 = *(long*)param_3;
   goto LAB_0011a896;
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#20}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#20}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
   code *pcVar1;
   Control::get_theme_item();
   Variant::get_validated_object();
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#27}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#27}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
   code *pcVar1;
   undefined8 in_XMM1_Qa;
   Control::get_theme_item();
   _DAT_00000bd0 = Variant::operator_cast_to_Color((Variant*)&stack0x00000000);
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   _DAT_00000bd8 = in_XMM1_Qa;
   ( *pcVar1 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#31}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#31}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
   code *pcVar1;
   undefined8 in_XMM1_Qa;
   Control::get_theme_item();
   _DAT_00000c10 = Variant::operator_cast_to_Color((Variant*)&stack0x00000000);
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   _DAT_00000c18 = in_XMM1_Qa;
   ( *pcVar1 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#25}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#25}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
   code *pcVar1;
   undefined8 in_XMM1_Qa;
   Control::get_theme_item();
   _DAT_00000bb0 = Variant::operator_cast_to_Color((Variant*)&stack0x00000000);
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   _DAT_00000bb8 = in_XMM1_Qa;
   ( *pcVar1 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#39}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#39}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
   code *pcVar1;
   undefined8 in_XMM1_Qa;
   Control::get_theme_item();
   _DAT_00000c60 = Variant::operator_cast_to_Color((Variant*)&stack0x00000000);
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   _DAT_00000c68 = in_XMM1_Qa;
   ( *pcVar1 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#40}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#40}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
   code *pcVar1;
   undefined8 in_XMM1_Qa;
   Control::get_theme_item();
   _DAT_00000c70 = Variant::operator_cast_to_Color((Variant*)&stack0x00000000);
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   _DAT_00000c78 = in_XMM1_Qa;
   ( *pcVar1 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#28}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#28}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
   code *pcVar1;
   undefined8 in_XMM1_Qa;
   Control::get_theme_item();
   _DAT_00000be0 = Variant::operator_cast_to_Color((Variant*)&stack0x00000000);
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   _DAT_00000be8 = in_XMM1_Qa;
   ( *pcVar1 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#32}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#32}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
   code *pcVar1;
   undefined8 in_XMM1_Qa;
   Control::get_theme_item();
   _DAT_00000c20 = Variant::operator_cast_to_Color((Variant*)&stack0x00000000);
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   _DAT_00000c28 = in_XMM1_Qa;
   ( *pcVar1 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#29}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#29}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
   code *pcVar1;
   undefined8 in_XMM1_Qa;
   Control::get_theme_item();
   _DAT_00000bf0 = Variant::operator_cast_to_Color((Variant*)&stack0x00000000);
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   _DAT_00000bf8 = in_XMM1_Qa;
   ( *pcVar1 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#30}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#30}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
   code *pcVar1;
   undefined8 in_XMM1_Qa;
   Control::get_theme_item();
   _DAT_00000c00 = Variant::operator_cast_to_Color((Variant*)&stack0x00000000);
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   _DAT_00000c08 = in_XMM1_Qa;
   ( *pcVar1 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#26}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#26}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
   code *pcVar1;
   undefined8 in_XMM1_Qa;
   Control::get_theme_item();
   _DAT_00000bc0 = Variant::operator_cast_to_Color((Variant*)&stack0x00000000);
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   _DAT_00000bc8 = in_XMM1_Qa;
   ( *pcVar1 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#22}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#22}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
   code *pcVar1;
   undefined8 in_XMM1_Qa;
   Control::get_theme_item();
   _DAT_00000b8c = Variant::operator_cast_to_Color((Variant*)&stack0x00000000);
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   _DAT_00000b94 = in_XMM1_Qa;
   ( *pcVar1 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#3}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#3}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
   code *pcVar1;
   undefined8 in_XMM1_Qa;
   Control::get_theme_item();
   _DAT_00000af0 = Variant::operator_cast_to_Color((Variant*)&stack0x00000000);
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   _DAT_00000af8 = in_XMM1_Qa;
   ( *pcVar1 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#21}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#21}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
   code *pcVar1;
   Control::get_theme_item();
   Variant::operator_cast_to_int((Variant*)&stack0x00000000);
   _DAT_00000b88 = 0;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#12}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#12}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
   code *pcVar1;
   Control::get_theme_item();
   Variant::get_validated_object();
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#16}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#16}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
   code *pcVar1;
   Control::get_theme_item();
   Variant::get_validated_object();
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#19}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#19}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
   code *pcVar1;
   Control::get_theme_item();
   Variant::get_validated_object();
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#15}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#15}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
   code *pcVar1;
   Control::get_theme_item();
   Variant::get_validated_object();
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#17}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#17}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
   code *pcVar1;
   Control::get_theme_item();
   Variant::get_validated_object();
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#1}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#1}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
   code *pcVar1;
   Control::get_theme_item();
   Variant::get_validated_object();
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#2}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#2}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
   code *pcVar1;
   Control::get_theme_item();
   Variant::get_validated_object();
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#18}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#18}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
   code *pcVar1;
   Control::get_theme_item();
   Variant::get_validated_object();
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<int>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<int>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#38}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#38}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
   code *pcVar1;
   Control::get_theme_item();
   Variant::get_validated_object();
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#6}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#6}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
   code *pcVar1;
   Control::get_theme_item();
   Variant::get_validated_object();
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#14}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#14}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
   code *pcVar1;
   Control::get_theme_item();
   Variant::get_validated_object();
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#23}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#23}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
   code *pcVar1;
   Control::get_theme_item();
   Variant::get_validated_object();
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#11}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#11}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
   code *pcVar1;
   Control::get_theme_item();
   Variant::get_validated_object();
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#5}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#5}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
   code *pcVar1;
   Control::get_theme_item();
   Variant::get_validated_object();
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#37}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#37}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
   code *pcVar1;
   Control::get_theme_item();
   Variant::get_validated_object();
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#24}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#24}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
   code *pcVar1;
   Control::get_theme_item();
   Variant::get_validated_object();
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#13}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#13}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
   code *pcVar1;
   Control::get_theme_item();
   Variant::get_validated_object();
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#33}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#33}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
   code *pcVar1;
   Control::get_theme_item();
   Variant::get_validated_object();
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#8}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#8}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
   code *pcVar1;
   Control::get_theme_item();
   Variant::get_validated_object();
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#10}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#10}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
   code *pcVar1;
   Control::get_theme_item();
   Variant::get_validated_object();
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#35}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#35}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
   code *pcVar1;
   Control::get_theme_item();
   Variant::get_validated_object();
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#34}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#34}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
   code *pcVar1;
   Control::get_theme_item();
   Variant::get_validated_object();
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#36}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#36}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
   code *pcVar1;
   Control::get_theme_item();
   Variant::get_validated_object();
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#7}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#7}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
   code *pcVar1;
   Control::get_theme_item();
   Variant::get_validated_object();
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#9}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#9}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
   code *pcVar1;
   Control::get_theme_item();
   Variant::get_validated_object();
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#4}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),AnimationNodeStateMachineEditor::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#4}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
   code *pcVar1;
   Control::get_theme_item();
   Variant::get_validated_object();
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<String>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<String>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<StringName>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<StringName>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<EditorAnimationMultiTransitionEdit::Transition>::_copy_on_write() [clone .isra.0] [clone
   .cold] */void CowData<EditorAnimationMultiTransitionEdit::Transition>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<AnimationNodeStateMachineEditor::NodeRect>::_copy_on_write() [clone .isra.0] [clone
   .cold] */void CowData<AnimationNodeStateMachineEditor::NodeRect>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<AnimationNodeStateMachineEditor::TransitionLine>::_copy_on_write() [clone .isra.0] [clone
   .cold] */void CowData<AnimationNodeStateMachineEditor::TransitionLine>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CallableCustomMethodPointer<AnimationNodeStateMachineEditor, void, Ref<InputEvent>
   const&>::get_object() const */undefined8 CallableCustomMethodPointer<AnimationNodeStateMachineEditor,void,Ref<InputEvent>const&>::get_object(CallableCustomMethodPointer<AnimationNodeStateMachineEditor,void,Ref<InputEvent>const&> *this) {
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
         goto LAB_0011b48d;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_0011b48d;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_0011b48d:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* CallableCustomMethodPointer<AnimationNodeStateMachineEditor, void, String const&>::get_object()
   const */undefined8 CallableCustomMethodPointer<AnimationNodeStateMachineEditor,void,String_const&>::get_object(CallableCustomMethodPointer<AnimationNodeStateMachineEditor,void,String_const&> *this) {
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
         goto LAB_0011b58d;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_0011b58d;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_0011b58d:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* CallableCustomMethodPointer<AnimationNodeStateMachineEditor, void, double>::get_object() const */undefined8 CallableCustomMethodPointer<AnimationNodeStateMachineEditor,void,double>::get_object(CallableCustomMethodPointer<AnimationNodeStateMachineEditor,void,double> *this) {
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
         goto LAB_0011b68d;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_0011b68d;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_0011b68d:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* CallableCustomMethodPointer<AnimationNodeStateMachineEditor, void, int>::get_object() const */undefined8 CallableCustomMethodPointer<AnimationNodeStateMachineEditor,void,int>::get_object(CallableCustomMethodPointer<AnimationNodeStateMachineEditor,void,int> *this) {
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
         goto LAB_0011b78d;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_0011b78d;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_0011b78d:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* CallableCustomMethodPointer<AnimationNodeStateMachineEditor, void, bool>::get_object() const */undefined8 CallableCustomMethodPointer<AnimationNodeStateMachineEditor,void,bool>::get_object(CallableCustomMethodPointer<AnimationNodeStateMachineEditor,void,bool> *this) {
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
         goto LAB_0011b88d;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_0011b88d;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_0011b88d:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* CallableCustomMethodPointer<AnimationNodeStateMachineEditor, void>::get_object() const */undefined8 CallableCustomMethodPointer<AnimationNodeStateMachineEditor,void>::get_object(CallableCustomMethodPointer<AnimationNodeStateMachineEditor,void> *this) {
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
         goto LAB_0011b98d;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_0011b98d;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_0011b98d:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* SortArray<List<StringName, DefaultAllocator>::Element*, List<StringName,
   DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>, true>::partial_sort(long, long,
   long, List<StringName, DefaultAllocator>::Element**) const [clone .isra.0] */void SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>::partial_sort(long param_1, long param_2, long param_3, Element **param_4) {
   Element **ppEVar1;
   byte *pbVar2;
   byte *pbVar3;
   Element *pEVar4;
   bool bVar5;
   byte bVar6;
   long lVar7;
   long lVar8;
   long lVar9;
   uint uVar10;
   uint uVar11;
   long lVar12;
   Element **ppEVar13;
   byte *pbVar14;
   byte *pbVar15;
   long lVar16;
   lVar16 = param_3 - param_1;
   ppEVar13 = param_4;
   if (lVar16 < 2) {
      if (param_2 <= param_3) {
         return;
      }

   }
 else {
      for (lVar12 = lVar16 + -2 >> 1; adjust_heap(param_1, lVar12, lVar16, param_4[param_1 + lVar12], ppEVar13),lVar12 != 0; lVar12 = lVar12 + -1) {}
      if (param_2 <= param_3) goto LAB_0011bb3c;
   }

   ppEVar1 = ppEVar13 + param_1;
   lVar12 = param_3;
   LAB_0011ba90:pEVar4 = ppEVar13[lVar12];
   lVar8 = *(long*)pEVar4;
   lVar7 = *(long*)*ppEVar1;
   if (lVar8 == 0) {
      if (lVar7 != 0) {
         pbVar14 = *(byte**)( lVar7 + 8 );
         uVar10 = 0;
         pbVar15 = &_LC0;
         LAB_0011bba4:if (pbVar14 == (byte*)0x0) {
            uVar11 = **(uint**)( lVar7 + 0x10 );
            if (uVar11 != 0 || uVar10 != 0) {
               lVar8 = 0;
               do {
                  if (uVar10 == 0) goto LAB_0011bb10;
                  if (uVar11 == 0) break;
                  if (uVar10 < uVar11) goto LAB_0011bb10;
                  if (uVar11 < uVar10) break;
                  uVar10 = (uint)(char)pbVar15[lVar8 + 1];
                  uVar11 = ( *(uint**)( lVar7 + 0x10 ) )[lVar8 + 1];
                  lVar8 = lVar8 + 1;
               }
 while ( uVar10 != 0 || uVar11 != 0 );
            }

         }
 else {
            uVar11 = (uint)(char)*pbVar14;
            bVar6 = (byte)uVar10 | *pbVar14;
            LAB_0011bc06:if (bVar6 != 0) {
               lVar8 = 1;
               do {
                  if (uVar10 == 0) goto LAB_0011bb10;
                  if (uVar11 == 0) break;
                  if (uVar10 < uVar11) goto LAB_0011bb10;
                  if (uVar11 < uVar10) break;
                  pbVar2 = pbVar14 + lVar8;
                  uVar11 = (uint)(char)*pbVar2;
                  pbVar3 = pbVar15 + lVar8;
                  uVar10 = (uint)(char)*pbVar3;
                  lVar8 = lVar8 + 1;
               }
 while ( *pbVar2 != 0 || *pbVar3 != 0 );
            }

         }

      }

   }
 else {
      pbVar15 = *(byte**)( lVar8 + 8 );
      if (lVar7 == 0) {
         if (pbVar15 != (byte*)0x0) {
            bVar6 = *pbVar15;
            uVar10 = (uint)(char)bVar6;
            pbVar14 = &_LC0;
            uVar11 = 0;
            goto LAB_0011bc06;
         }

         uVar10 = 0;
         pbVar14 = &_LC0;
      }
 else {
         pbVar14 = *(byte**)( lVar7 + 8 );
         if (pbVar15 != (byte*)0x0) {
            uVar10 = (uint)(char)*pbVar15;
            goto LAB_0011bba4;
         }

         if (pbVar14 == (byte*)0x0) {
            uVar10 = **(uint**)( lVar7 + 0x10 );
            uVar11 = **(uint**)( lVar8 + 0x10 );
            if (uVar10 != 0 || uVar11 != 0) {
               lVar9 = 4;
               do {
                  if (uVar11 == 0) goto LAB_0011bb10;
                  if (uVar10 == 0) break;
                  if (uVar11 < uVar10) goto LAB_0011bb10;
                  if (uVar10 < uVar11) break;
                  uVar11 = *(uint*)( (long)*(uint**)( lVar8 + 0x10 ) + lVar9 );
                  uVar10 = *(uint*)( (long)*(uint**)( lVar7 + 0x10 ) + lVar9 );
                  lVar9 = lVar9 + 4;
               }
 while ( uVar11 != 0 || uVar10 != 0 );
            }

            goto LAB_0011bb24;
         }

         uVar10 = (uint)(char)*pbVar14;
      }

      uVar11 = **(uint**)( lVar8 + 0x10 );
      if (uVar11 != 0 || uVar10 != 0) {
         lVar7 = 0;
         do {
            if (uVar11 == 0) goto LAB_0011bb10;
            if (uVar10 == 0) break;
            if (uVar11 < uVar10) goto LAB_0011bb10;
            if (uVar10 < uVar11) break;
            uVar11 = ( *(uint**)( lVar8 + 0x10 ) )[lVar7 + 1];
            uVar10 = (uint)(char)pbVar14[lVar7 + 1];
            lVar7 = lVar7 + 1;
         }
 while ( uVar11 != 0 || uVar10 != 0 );
      }

   }

   goto LAB_0011bb24;
   LAB_0011bb10:ppEVar13[lVar12] = *ppEVar1;
   adjust_heap(param_1, 0, lVar16, pEVar4, ppEVar13);
   LAB_0011bb24:lVar12 = lVar12 + 1;
   if (param_2 <= lVar12) goto code_r0x0011bb31;
   goto LAB_0011ba90;
   code_r0x0011bb31:if (lVar16 < 2) {
      return;
   }

   LAB_0011bb3c:ppEVar1 = ppEVar13 + param_1;
   lVar16 = ( param_3 + -1 ) - param_1;
   do {
      pEVar4 = ppEVar1[lVar16];
      ppEVar1[lVar16] = *ppEVar1;
      adjust_heap(param_1, 0, lVar16, pEVar4, ppEVar13);
      bVar5 = 1 < lVar16;
      lVar16 = lVar16 + -1;
   }
 while ( bVar5 );
   return;
}
/* VScrollBar::_validate_propertyv(PropertyInfo&) const */void VScrollBar::_validate_propertyv(PropertyInfo *param_1) {
   Node::_validate_property(param_1);
   CanvasItem::_validate_property(param_1);
   if ((code*)PTR__validate_property_00133010 == CanvasItem::_validate_property) {
      return;
   }

   Control::_validate_property(param_1);
   return;
}
/* HScrollBar::_validate_propertyv(PropertyInfo&) const */void HScrollBar::_validate_propertyv(PropertyInfo *param_1) {
   Node::_validate_property(param_1);
   CanvasItem::_validate_property(param_1);
   if ((code*)PTR__validate_property_00133010 == CanvasItem::_validate_property) {
      return;
   }

   Control::_validate_property(param_1);
   return;
}
/* HBoxContainer::_validate_propertyv(PropertyInfo&) const */void HBoxContainer::_validate_propertyv(PropertyInfo *param_1) {
   for (int i = 0; i < 3; i++) {
      Node::_validate_property(param_1);
   }

   if ((code*)PTR__validate_property_00133018 == Control::_validate_property) {
      return;
   }

   BoxContainer::_validate_property(param_1);
   return;
}
/* AnimationNodeStateMachineEditor::_validate_propertyv(PropertyInfo&) const */void AnimationNodeStateMachineEditor::_validate_propertyv(PropertyInfo *param_1) {
   for (int i = 0; i < 3; i++) {
      Node::_validate_property(param_1);
   }

   if ((code*)PTR__validate_property_00133018 == Control::_validate_property) {
      return;
   }

   BoxContainer::_validate_property(param_1);
   return;
}
/* VScrollBar::is_class_ptr(void*) const */uint VScrollBar::is_class_ptr(void *param_1) {
   uint uVar1;
   undefined4 in_EDX;
   undefined4 *in_RSI;
   uVar1 = 1;
   if (in_RSI != &get_class_ptr_static()::ptr) {
      uVar1 = (uint)CONCAT71(0x12ce, in_RSI == &Range::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x12ce, in_RSI == &ScrollBar::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x12ce, in_RSI == &Control::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x12ce, in_RSI == &CanvasItem::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x12cf, in_RSI == &Node::get_class_ptr_static(), ::ptr) | CONCAT31(( int3 )((uint)in_EDX >> 8), in_RSI == &Object::get_class_ptr_static(), ::ptr);
   }

   return uVar1;
}
/* HBoxContainer::is_class_ptr(void*) const */uint HBoxContainer::is_class_ptr(void *param_1) {
   uint uVar1;
   undefined4 in_EDX;
   undefined4 *in_RSI;
   uVar1 = 1;
   if (in_RSI != &get_class_ptr_static()::ptr) {
      uVar1 = (uint)CONCAT71(0x12ce, in_RSI == &Container::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x12ce, in_RSI == &BoxContainer::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x12ce, in_RSI == &Control::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x12ce, in_RSI == &CanvasItem::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x12cf, in_RSI == &Node::get_class_ptr_static(), ::ptr) | CONCAT31(( int3 )((uint)in_EDX >> 8), in_RSI == &Object::get_class_ptr_static(), ::ptr);
   }

   return uVar1;
}
/* HScrollBar::is_class_ptr(void*) const */uint HScrollBar::is_class_ptr(void *param_1) {
   uint uVar1;
   undefined4 in_EDX;
   undefined4 *in_RSI;
   uVar1 = 1;
   if (in_RSI != &get_class_ptr_static()::ptr) {
      uVar1 = (uint)CONCAT71(0x12ce, in_RSI == &Range::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x12ce, in_RSI == &ScrollBar::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x12ce, in_RSI == &Control::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x12ce, in_RSI == &CanvasItem::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x12cf, in_RSI == &Node::get_class_ptr_static(), ::ptr) | CONCAT31(( int3 )((uint)in_EDX >> 8), in_RSI == &Object::get_class_ptr_static(), ::ptr);
   }

   return uVar1;
}
/* AnimationNodeStateMachineEditor::is_class_ptr(void*) const */uint AnimationNodeStateMachineEditor::is_class_ptr(void *param_1) {
   byte bVar1;
   uint uVar2;
   undefined4 in_EDX;
   undefined4 *in_RSI;
   uVar2 = (uint)CONCAT71(0x12ce, in_RSI == &AnimationTreeNodeEditorPlugin::get_class_ptr_static(), ::
                                           ptr) | (uint)CONCAT71(0x12cd, in_RSI == &get_class_ptr_static(), ::ptr);
   bVar1= (byte)uVar2 | in_RSI == &VBoxContainer::get_class_ptr_static()::ptr
   ;
   if (bVar1 != 0) {
      return CONCAT31(( int3 )(uVar2 >> 8), bVar1);
   }

   return (uint)CONCAT71(0x12ce, in_RSI == &Container::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x12ce, in_RSI == &BoxContainer::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x12ce, in_RSI == &Control::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x12ce, in_RSI == &CanvasItem::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x12cf, in_RSI == &Node::get_class_ptr_static(), ::ptr) | CONCAT31(( int3 )((uint)in_EDX >> 8), in_RSI == &Object::get_class_ptr_static(), ::ptr);
}
/* AnimationNodeStateMachineEditor::_setv(StringName const&, Variant const&) */undefined8 AnimationNodeStateMachineEditor::_setv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   uVar1 = CanvasItem::_set(param_1, param_2);
   if ((char)uVar1 == '\0') {
      if ((code*)PTR__set_00133020 != CanvasItem::_set) {
         uVar1 = Control::_set(param_1, param_2);
         return uVar1;
      }

      uVar1 = 0;
   }

   return uVar1;
}
/* VScrollBar::_setv(StringName const&, Variant const&) */undefined8 VScrollBar::_setv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   uVar1 = CanvasItem::_set(param_1, param_2);
   if ((char)uVar1 == '\0') {
      if ((code*)PTR__set_00133020 != CanvasItem::_set) {
         uVar1 = Control::_set(param_1, param_2);
         return uVar1;
      }

      uVar1 = 0;
   }

   return uVar1;
}
/* HScrollBar::_setv(StringName const&, Variant const&) */undefined8 HScrollBar::_setv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   uVar1 = CanvasItem::_set(param_1, param_2);
   if ((char)uVar1 == '\0') {
      if ((code*)PTR__set_00133020 != CanvasItem::_set) {
         uVar1 = Control::_set(param_1, param_2);
         return uVar1;
      }

      uVar1 = 0;
   }

   return uVar1;
}
/* HBoxContainer::_setv(StringName const&, Variant const&) */undefined8 HBoxContainer::_setv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   uVar1 = CanvasItem::_set(param_1, param_2);
   if ((char)uVar1 == '\0') {
      if ((code*)PTR__set_00133020 != CanvasItem::_set) {
         uVar1 = Control::_set(param_1, param_2);
         return uVar1;
      }

      uVar1 = 0;
   }

   return uVar1;
}
/* WARNING: Removing unreachable block (ram,0x0011c348) *//* AnimationNodeStateMachineEditor::_getv(StringName const&, Variant&) const */undefined8 AnimationNodeStateMachineEditor::_getv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if (( (code*)PTR__get_00133028 != CanvasItem::_get ) && ( uVar1 = Control::_get(param_1, param_2) ),(char)uVar1 != '\0') {
      return uVar1;
   }

   uVar1 = CanvasItem::_get(param_1, param_2);
   return uVar1;
}
/* WARNING: Removing unreachable block (ram,0x0011c3b8) *//* VScrollBar::_getv(StringName const&, Variant&) const */undefined8 VScrollBar::_getv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if (( (code*)PTR__get_00133028 != CanvasItem::_get ) && ( uVar1 = Control::_get(param_1, param_2) ),(char)uVar1 != '\0') {
      return uVar1;
   }

   uVar1 = CanvasItem::_get(param_1, param_2);
   return uVar1;
}
/* WARNING: Removing unreachable block (ram,0x0011c428) *//* HScrollBar::_getv(StringName const&, Variant&) const */undefined8 HScrollBar::_getv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if (( (code*)PTR__get_00133028 != CanvasItem::_get ) && ( uVar1 = Control::_get(param_1, param_2) ),(char)uVar1 != '\0') {
      return uVar1;
   }

   uVar1 = CanvasItem::_get(param_1, param_2);
   return uVar1;
}
/* WARNING: Removing unreachable block (ram,0x0011c498) *//* HBoxContainer::_getv(StringName const&, Variant&) const */undefined8 HBoxContainer::_getv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if (( (code*)PTR__get_00133028 != CanvasItem::_get ) && ( uVar1 = Control::_get(param_1, param_2) ),(char)uVar1 != '\0') {
      return uVar1;
   }

   uVar1 = CanvasItem::_get(param_1, param_2);
   return uVar1;
}
/* HBoxContainer::~HBoxContainer() */void HBoxContainer::~HBoxContainer(HBoxContainer *this) {
   bool bVar1;
   bVar1 = StringName::configured != '\0';
   *(undefined**)this = &AnimationNodeStateMachine::typeinfo;
   if (bVar1) {
      if (*(long*)( this + 0x9e8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0011c500;
      }

      if (*(long*)( this + 0x9d0 ) != 0) {
         StringName::unref();
      }

   }

   LAB_0011c500:Control::~Control((Control*)this);
   return;
}
/* HBoxContainer::~HBoxContainer() */void HBoxContainer::~HBoxContainer(HBoxContainer *this) {
   bool bVar1;
   bVar1 = StringName::configured != '\0';
   *(undefined**)this = &AnimationNodeStateMachine::typeinfo;
   if (bVar1) {
      if (*(long*)( this + 0x9e8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0011c560;
      }

      if (*(long*)( this + 0x9d0 ) != 0) {
         StringName::unref();
      }

   }

   LAB_0011c560:Control::~Control((Control*)this);
   operator_delete(this, 0xa10);
   return;
}
/* VScrollBar::_notificationv(int, bool) */void VScrollBar::_notificationv(VScrollBar *this, int param_1, bool param_2) {
   int iVar1;
   iVar1 = (int)this;
   if (param_2) {
      if ((code*)PTR__notification_00133030 != Control::_notification) {
         ScrollBar::_notification(iVar1);
      }

      for (int i = 0; i < 3; i++) {
         Control::_notification(iVar1);
      }

      return;
   }

   for (int i = 0; i < 3; i++) {
      Node::_notification(iVar1);
   }

   if ((code*)PTR__notification_00133030 == Control::_notification) {
      return;
   }

   ScrollBar::_notification(iVar1);
   return;
}
/* HScrollBar::_notificationv(int, bool) */void HScrollBar::_notificationv(HScrollBar *this, int param_1, bool param_2) {
   int iVar1;
   iVar1 = (int)this;
   if (param_2) {
      if ((code*)PTR__notification_00133030 != Control::_notification) {
         ScrollBar::_notification(iVar1);
      }

      for (int i = 0; i < 3; i++) {
         Control::_notification(iVar1);
      }

      return;
   }

   for (int i = 0; i < 3; i++) {
      Node::_notification(iVar1);
   }

   if ((code*)PTR__notification_00133030 == Control::_notification) {
      return;
   }

   ScrollBar::_notification(iVar1);
   return;
}
/* HBoxContainer::_notificationv(int, bool) */void HBoxContainer::_notificationv(HBoxContainer *this, int param_1, bool param_2) {
   int iVar1;
   iVar1 = (int)this;
   if (param_2) {
      if ((code*)PTR__notification_00133038 != Container::_notification) {
         BoxContainer::_notification(iVar1);
      }

      for (int i = 0; i < 4; i++) {
         Container::_notification(iVar1);
      }

      return;
   }

   for (int i = 0; i < 4; i++) {
      Node::_notification(iVar1);
   }

   if ((code*)PTR__notification_00133038 == Container::_notification) {
      return;
   }

   BoxContainer::_notification(iVar1);
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
/* HBoxContainer::_get_class_namev() const */undefined8 *HBoxContainer::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_0011c953:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_0011c953;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "HBoxContainer");
         goto LAB_0011c9be;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "HBoxContainer");
   LAB_0011c9be:return &_get_class_namev();
}
/* HScrollBar::_get_class_namev() const */undefined8 *HScrollBar::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_0011ca33:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_0011ca33;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "HScrollBar");
         goto LAB_0011ca9e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "HScrollBar");
   LAB_0011ca9e:return &_get_class_namev();
}
/* VScrollBar::_get_class_namev() const */undefined8 *VScrollBar::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_0011cb13:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_0011cb13;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "VScrollBar");
         goto LAB_0011cb7e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "VScrollBar");
   LAB_0011cb7e:return &_get_class_namev();
}
/* AnimationNodeStateMachineEditor::_get_class_namev() const */undefined8 *AnimationNodeStateMachineEditor::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_0011cc13:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_0011cc13;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "AnimationNodeStateMachineEditor");
         goto LAB_0011cc7e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "AnimationNodeStateMachineEditor");
   LAB_0011cc7e:return &_get_class_namev();
}
/* SortArray<List<StringName, DefaultAllocator>::Element*, List<StringName,
   DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>, true>::introsort(long, long,
   List<StringName, DefaultAllocator>::Element**, long) const [clone .isra.0] */void SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>::introsort(long param_1, long param_2, Element **param_3, long param_4) {
   long lVar1;
   undefined8 *puVar2;
   long lVar3;
   long lVar4;
   long lVar5;
   long lVar6;
   long lVar7;
   long lVar8;
   long lVar9;
   long lVar10;
   long lVar11;
   long lVar12;
   long lVar13;
   long lVar14;
   long lVar15;
   long local_118;
   long local_110;
   long local_108;
   long local_f8;
   lVar1 = param_2 - param_1;
   if (lVar1 < 0x11) {
      return;
   }

   if (param_4 == 0) {
      LAB_0011dd53:partial_sort(param_1, param_2, param_2, param_3);
      return;
   }

   lVar11 = param_2 * 8;
   lVar3 = param_2;
   LAB_0011d4a3:param_4 = param_4 + -1;
   puVar2 = (undefined8*)median_of_3(param_3 + param_1, param_3 + ( lVar1 >> 1 ) + param_1, (Element**)( (long)param_3 + lVar11 + -8 ));
   param_2 = partitioner(param_1, lVar3, (Element*)*puVar2, param_3);
   lVar1 = lVar3 - param_2;
   if (0x10 < lVar1) {
      if (param_4 != 0) {
         lVar11 = param_4;
         lVar4 = lVar3;
         LAB_0011d52c:do {
            lVar11 = lVar11 + -1;
            puVar2 = (undefined8*)median_of_3(param_3 + param_2, param_3 + ( lVar1 >> 1 ) + param_2, param_3 + lVar4 + -1);
            lVar3 = partitioner(param_2, lVar4, (Element*)*puVar2, param_3);
            lVar1 = lVar4 - lVar3;
            if (0x10 < lVar1) {
               if (lVar11 != 0) {
                  local_118 = lVar4;
                  lVar15 = lVar11;
                  LAB_0011d5c4:lVar15 = lVar15 + -1;
                  puVar2 = (undefined8*)median_of_3(param_3 + lVar3, param_3 + ( lVar1 >> 1 ) + lVar3, param_3 + local_118 + -1);
                  lVar4 = partitioner(lVar3, local_118, (Element*)*puVar2, param_3);
                  lVar1 = local_118 - lVar4;
                  if (0x10 < lVar1) goto code_r0x0011d610;
                  LAB_0011daa6:lVar1 = lVar4 - lVar3;
                  if (0x10 < lVar1) goto LAB_0011dab6;
                  goto LAB_0011dc53;
               }

               LAB_0011dcc8:partial_sort(lVar3, lVar4, lVar4, param_3);
            }

            LAB_0011dbdf:lVar1 = lVar3 - param_2;
            if (lVar1 < 0x11) goto joined_r0x0011dc91;
            lVar4 = lVar3;
            if (lVar11 == 0) break;
         }
 while ( true );
      }

      partial_sort(param_2, lVar3, lVar3, param_3);
   }

   lVar1 = param_2 - param_1;
   if (lVar1 < 0x11) {
      return;
   }

   if (param_4 != 0) goto LAB_0011dd2c;
   goto LAB_0011dd53;
   code_r0x0011d610:if (lVar15 != 0) {
      lVar13 = lVar15;
      lVar6 = local_118;
      LAB_0011d64c:do {
         lVar13 = lVar13 + -1;
         puVar2 = (undefined8*)median_of_3(param_3 + lVar4, param_3 + ( lVar1 >> 1 ) + lVar4, param_3 + lVar6 + -1);
         lVar5 = partitioner(lVar4, lVar6, (Element*)*puVar2, param_3);
         lVar1 = lVar6 - lVar5;
         if (0x10 < lVar1) {
            if (lVar13 != 0) {
               lVar7 = lVar6;
               local_f8 = lVar13;
               LAB_0011d6d2:do {
                  local_f8 = local_f8 + -1;
                  puVar2 = (undefined8*)median_of_3(param_3 + lVar5, param_3 + ( lVar1 >> 1 ) + lVar5, param_3 + lVar7 + -1);
                  lVar6 = partitioner(lVar5, lVar7, (Element*)*puVar2, param_3);
                  lVar1 = lVar7 - lVar6;
                  if (0x10 < lVar1) {
                     if (local_f8 != 0) {
                        lVar8 = lVar7;
                        local_110 = local_f8;
                        LAB_0011d753:do {
                           local_110 = local_110 + -1;
                           puVar2 = (undefined8*)median_of_3(param_3 + lVar6, param_3 + ( lVar1 >> 1 ) + lVar6, param_3 + lVar8 + -1);
                           lVar7 = partitioner(lVar6, lVar8, (Element*)*puVar2, param_3);
                           lVar1 = lVar8 - lVar7;
                           if (0x10 < lVar1) {
                              if (local_110 != 0) {
                                 lVar9 = lVar8;
                                 local_118 = local_110;
                                 LAB_0011d7d1:do {
                                    local_118 = local_118 + -1;
                                    puVar2 = (undefined8*)median_of_3(param_3 + lVar7, param_3 + ( lVar1 >> 1 ) + lVar7, param_3 + lVar9 + -1);
                                    lVar8 = partitioner(lVar7, lVar9, (Element*)*puVar2, param_3);
                                    lVar1 = lVar9 - lVar8;
                                    if (0x10 < lVar1) {
                                       if (local_118 != 0) {
                                          lVar10 = lVar9;
                                          local_108 = local_118;
                                          LAB_0011d847:do {
                                             local_108 = local_108 + -1;
                                             puVar2 = (undefined8*)median_of_3(param_3 + lVar8, param_3 + ( lVar1 >> 1 ) + lVar8, param_3 + lVar10 + -1);
                                             lVar9 = partitioner(lVar8, lVar10, (Element*)*puVar2, param_3);
                                             lVar1 = lVar10 - lVar9;
                                             if (0x10 < lVar1) {
                                                if (local_108 != 0) {
                                                   lVar12 = local_108;
                                                   lVar14 = lVar10;
                                                   do {
                                                      lVar12 = lVar12 + -1;
                                                      puVar2 = (undefined8*)median_of_3(param_3 + lVar9, param_3 + ( lVar1 >> 1 ) + lVar9, param_3 + lVar14 + -1);
                                                      lVar10 = partitioner(lVar9, lVar14, (Element*)*puVar2, param_3);
                                                      introsort(lVar10, lVar14, param_3, lVar12);
                                                      lVar1 = lVar10 - lVar9;
                                                      if (lVar1 < 0x11) {
                                                         lVar1 = lVar9 - lVar8;
                                                         lVar10 = lVar9;
                                                         if (lVar1 < 0x11) goto LAB_0011d9dc;
                                                         goto LAB_0011d847;
                                                      }

                                                      lVar14 = lVar10;
                                                   }
 while ( lVar12 != 0 );
                                                }

                                                partial_sort(lVar9, lVar10, lVar10, param_3);
                                             }

                                             lVar1 = lVar9 - lVar8;
                                             if (lVar1 < 0x11) {
                                                lVar1 = lVar8 - lVar7;
                                                lVar9 = lVar8;
                                                if (lVar1 < 0x11) goto joined_r0x0011daf0;
                                                goto LAB_0011d7d1;
                                             }

                                             lVar10 = lVar9;
                                          }
 while ( local_108 != 0 );
                                       }

                                       partial_sort(lVar8, lVar9, lVar9, param_3);
                                    }

                                    LAB_0011d9dc:lVar1 = lVar8 - lVar7;
                                    if (lVar1 < 0x11) {
                                       lVar1 = lVar7 - lVar6;
                                       lVar8 = lVar7;
                                       if (lVar1 < 0x11) goto joined_r0x0011da6b;
                                       goto LAB_0011d753;
                                    }

                                    lVar9 = lVar8;
                                 }
 while ( local_118 != 0 );
                              }

                              partial_sort(lVar7, lVar8, lVar8, param_3);
                           }

                           joined_r0x0011daf0:lVar1 = lVar7 - lVar6;
                           if (lVar1 < 0x11) {
                              lVar1 = lVar6 - lVar5;
                              lVar7 = lVar6;
                              if (lVar1 < 0x11) goto joined_r0x0011db30;
                              goto LAB_0011d6d2;
                           }

                           lVar8 = lVar7;
                        }
 while ( local_110 != 0 );
                     }

                     partial_sort(lVar6, lVar7, lVar7, param_3);
                  }

                  joined_r0x0011da6b:lVar1 = lVar6 - lVar5;
                  if (lVar1 < 0x11) {
                     lVar1 = lVar5 - lVar4;
                     lVar6 = lVar5;
                     if (lVar1 < 0x11) goto LAB_0011daa6;
                     goto LAB_0011d64c;
                  }

                  lVar7 = lVar6;
               }
 while ( local_f8 != 0 );
            }

            partial_sort(lVar5, lVar6, lVar6, param_3);
         }

         joined_r0x0011db30:lVar1 = lVar5 - lVar4;
         if (lVar1 < 0x11) {
            lVar1 = lVar4 - lVar3;
            local_118 = lVar4;
            if (lVar1 < 0x11) goto LAB_0011dbdf;
            goto LAB_0011d5c4;
         }

         lVar6 = lVar5;
         local_118 = lVar5;
      }
 while ( lVar13 != 0 );
   }

   partial_sort(lVar4, local_118, local_118, param_3);
   lVar1 = lVar4 - lVar3;
   if (lVar1 < 0x11) {
      LAB_0011dc53:lVar1 = lVar3 - param_2;
      lVar4 = lVar3;
      if (0x10 < lVar1) goto LAB_0011d52c;
      goto joined_r0x0011dc91;
   }

   LAB_0011dab6:local_118 = lVar4;
   if (lVar15 == 0) goto LAB_0011dcc8;
   goto LAB_0011d5c4;
   joined_r0x0011dc91:lVar1 = param_2 - param_1;
   if (lVar1 < 0x11) {
      return;
   }

   LAB_0011dd2c:lVar11 = param_2 * 8;
   lVar3 = param_2;
   goto LAB_0011d4a3;
}
/* String::~String() */void String::~String(String *this) {
   long *plVar1;
   long lVar2;
   if (*(long*)this != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)this + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)this;
         *(undefined8*)this = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
         return;
      }

   }

   return;
}
/* HScrollBar::get_class() const */void HScrollBar::get_class(void) {
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
/* AnimationNodeStateMachineEditor::get_class() const */void AnimationNodeStateMachineEditor::get_class(void) {
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
/* HBoxContainer::get_class() const */void HBoxContainer::get_class(void) {
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
/* VScrollBar::get_class() const */void VScrollBar::get_class(void) {
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
/* Rect2::has_point(Vector2 const&) const */bool Rect2::has_point(Rect2 *this, Vector2 *param_1) {
   bool bVar1;
   if (( *(float*)( this + 8 ) <= 0.0 && *(float*)( this + 8 ) != 0.0 ) || ( *(float*)( this + 0xc ) <= 0.0 && *(float*)( this + 0xc ) != 0.0 )) {
      _err_print_error("has_point", "./core/math/rect2.h", 0xb9, "Rect2 size is negative, this is not supported. Use Rect2.abs() to get a Rect2 with a positive size.", 0, 0);
   }

   bVar1 = false;
   if (*(float*)this <= *(float*)param_1) {
      if (( *(float*)( this + 4 ) <= *(float*)( param_1 + 4 ) ) && ( *(float*)param_1 < *(float*)this + *(float*)( this + 8 ) )) {
         bVar1 = *(float*)( param_1 + 4 ) < *(float*)( this + 4 ) + *(float*)( this + 0xc );
      }

   }

   return bVar1;
}
/* std::_Function_base::~_Function_base() */void std::_Function_base::~_Function_base(_Function_base *this) {
   if (*(code**)( this + 0x10 ) != (code*)0x0) {
      /* WARNING: Could not recover jumptable at 0x0011e285. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( **(code**)( this + 0x10 ) )(this, this, 3);
      return;
   }

   return;
}
/* WARNING: Removing unreachable block (ram,0x0011e380) *//* BoxContainer::_notificationv(int, bool) */void BoxContainer::_notificationv(BoxContainer *this, int param_1, bool param_2) {
   int iVar1;
   iVar1 = (int)this;
   if (param_2) {
      if ((code*)PTR__notification_00133038 != Container::_notification) {
         BoxContainer::_notification(iVar1);
      }

      for (int i = 0; i < 4; i++) {
         Container::_notification(iVar1);
      }

      return;
   }

   for (int i = 0; i < 4; i++) {
      Node::_notification(iVar1);
   }

   if ((code*)PTR__notification_00133038 == Container::_notification) {
      return;
   }

   BoxContainer::_notification(iVar1);
   return;
}
/* AnimationNodeStateMachineEditor::TransitionLine::~TransitionLine() */void AnimationNodeStateMachineEditor::TransitionLine::~TransitionLine(TransitionLine *this) {
   if (StringName::configured == '\0') {
      return;
   }

   if (( *(long*)( this + 0x28 ) != 0 ) && ( StringName::unref(),StringName::configured == '\0' )) {
      return;
   }

   if (( *(long*)( this + 8 ) != 0 ) && ( StringName::unref(),StringName::configured == '\0' )) {
      return;
   }

   if (*(long*)this == 0) {
      return;
   }

   StringName::unref();
   return;
}
/* CowData<char32_t>::_ref(CowData<char32_t> const&) */void CowData<char32_t>::_ref(CowData<char32_t> *this, CowData *param_1) {
   if (*(long*)this != *(long*)param_1) {
      _ref(this, param_1);
      return;
   }

   return;
}
/* List<StringName, DefaultAllocator>::~List() */void List<StringName,DefaultAllocator>::~List(List<StringName,DefaultAllocator> *this) {
   long *plVar1;
   long lVar2;
   long lVar3;
   long *plVar4;
   plVar4 = *(long**)this;
   if (plVar4 == (long*)0x0) {
      return;
   }

   do {
      plVar1 = (long*)*plVar4;
      if (plVar1 == (long*)0x0) {
         if ((int)plVar4[2] != 0) {
            _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
            return;
         }

         break;
      }

      if ((long*)plVar1[3] == plVar4) {
         lVar3 = plVar1[1];
         lVar2 = plVar1[2];
         *plVar4 = lVar3;
         if (plVar1 == (long*)plVar4[1]) {
            plVar4[1] = lVar2;
         }

         if (lVar2 != 0) {
            *(long*)( lVar2 + 8 ) = lVar3;
            lVar3 = plVar1[1];
         }

         if (lVar3 != 0) {
            *(long*)( lVar3 + 0x10 ) = lVar2;
         }

         if (( StringName::configured != '\0' ) && ( *plVar1 != 0 )) {
            StringName::unref();
         }

         Memory::free_static(plVar1, false);
         *(int*)( plVar4 + 2 ) = (int)plVar4[2] + -1;
      }
 else {
         _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
      }

      plVar4 = *(long**)this;
   }
 while ( (int)plVar4[2] != 0 );
   Memory::free_static(plVar4, false);
   return;
}
/* HashSet<StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName> >::clear() */void HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::clear(HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>> *this) {
   long lVar1;
   long lVar2;
   lVar2 = *(long*)this;
   if (lVar2 == 0) {
      return;
   }

   if (*(int*)( this + 0x24 ) != 0) {
      if (( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x20 ) * 4 ) == 0 ) || ( memset(*(void**)( this + 0x18 ), 0, ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x20 ) * 4 ) << 2),*(int*)( this + 0x24 ) != 0 )) {
         lVar1 = 0;
         while (true) {
            if (( StringName::configured != '\0' ) && ( *(long*)( lVar2 + lVar1 * 8 ) != 0 )) {
               StringName::unref();
            }

            lVar1 = lVar1 + 1;
            if (*(uint*)( this + 0x24 ) <= (uint)lVar1) break;
            lVar2 = *(long*)this;
         }
;
      }

      *(undefined4*)( this + 0x24 ) = 0;
      return;
   }

   return;
}
/* Callable create_custom_callable_function_pointer<AnimationNodeStateMachineEditor, String
   const&>(AnimationNodeStateMachineEditor*, char const*, void
   (AnimationNodeStateMachineEditor::*)(String const&)) */AnimationNodeStateMachineEditor *create_custom_callable_function_pointer<AnimationNodeStateMachineEditor,String_const&>(AnimationNodeStateMachineEditor *param_1, char *param_2, _func_void_String_ptr *param_3) {
   undefined8 uVar1;
   CallableCustom *this;
   undefined8 in_RCX;
   undefined8 in_R8;
   this(CallableCustom * operator_new(0x48, ""));
   CallableCustom::CallableCustom(this);
   *(undefined**)( this + 0x20 ) = &_LC0;
   *(undefined1(*) [16])( this + 0x30 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0x40 ) = 0;
   *(undefined***)this = &PTR_hash_0012c968;
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashSet<StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::insert(StringName const&) */StringName *HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert(StringName *param_1) {
   void *pvVar1;
   void *pvVar2;
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   undefined1 auVar12[16];
   undefined1 auVar13[16];
   undefined1 auVar14[16];
   undefined1 auVar15[16];
   undefined1 auVar16[16];
   undefined1 auVar17[16];
   undefined1 auVar18[16];
   undefined1 auVar19[16];
   undefined1 auVar20[16];
   undefined1 auVar21[16];
   undefined1 auVar22[16];
   undefined1 auVar23[16];
   undefined1 auVar24[16];
   undefined1 auVar25[16];
   undefined1 auVar26[16];
   uint uVar27;
   uint uVar28;
   ulong uVar29;
   long lVar30;
   long lVar31;
   long lVar32;
   int iVar33;
   StringName *in_RDX;
   long lVar34;
   ulong uVar35;
   long lVar36;
   long *in_RSI;
   uint uVar37;
   ulong uVar38;
   undefined4 uVar39;
   uint uVar40;
   ulong uVar41;
   uint uVar42;
   uint *puVar43;
   int iVar44;
   uint local_88;
   long local_68;
   uVar27 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RSI + 4 ) * 4 );
   if (*in_RSI == 0) {
      uVar29 = (ulong)uVar27 * 4;
      lVar30 = Memory::alloc_static(uVar29, false);
      in_RSI[3] = lVar30;
      lVar30 = Memory::alloc_static((ulong)uVar27 * 8, false);
      *in_RSI = lVar30;
      lVar30 = Memory::alloc_static(uVar29, false);
      in_RSI[2] = lVar30;
      lVar30 = Memory::alloc_static(uVar29, false);
      in_RSI[1] = lVar30;
      if (uVar27 != 0) {
         memset((void*)in_RSI[3], 0, uVar29);
      }

      iVar44 = *(int*)( (long)in_RSI + 0x24 );
      if (*in_RSI != 0) goto LAB_0011ef2c;
   }
 else {
      iVar44 = *(int*)( (long)in_RSI + 0x24 );
      LAB_0011ef2c:if (iVar44 != 0) {
         uVar40 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RSI + 4 ) * 4 );
         uVar29 = CONCAT44(0, uVar40);
         lVar30 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( in_RSI + 4 ) * 8 );
         if (*(long*)in_RDX == 0) {
            uVar28 = StringName::get_empty_hash();
            iVar44 = *(int*)( (long)in_RSI + 0x24 );
         }
 else {
            uVar28 = *(uint*)( *(long*)in_RDX + 0x20 );
         }

         if (uVar28 == 0) {
            uVar28 = 1;
         }

         uVar37 = 0;
         auVar3._8_8_ = 0;
         auVar3._0_8_ = (ulong)uVar28 * lVar30;
         auVar15._8_8_ = 0;
         auVar15._0_8_ = uVar29;
         lVar34 = SUB168(auVar3 * auVar15, 8);
         iVar33 = SUB164(auVar3 * auVar15, 8);
         uVar42 = *(uint*)( in_RSI[3] + lVar34 * 4 );
         if (uVar42 != 0) {
            do {
               if (uVar28 == uVar42) {
                  lVar36 = *in_RSI;
                  uVar42 = *(uint*)( in_RSI[1] + lVar34 * 4 );
                  if (*(long*)( lVar36 + (ulong)uVar42 * 8 ) == *(long*)in_RDX) goto LAB_0011f378;
               }

               uVar37 = uVar37 + 1;
               auVar4._8_8_ = 0;
               auVar4._0_8_ = ( ulong )(iVar33 + 1) * lVar30;
               auVar16._8_8_ = 0;
               auVar16._0_8_ = uVar29;
               lVar34 = SUB168(auVar4 * auVar16, 8);
               uVar42 = *(uint*)( in_RSI[3] + lVar34 * 4 );
               iVar33 = SUB164(auVar4 * auVar16, 8);
            }
 while ( ( uVar42 != 0 ) && ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar42 * lVar30,auVar17._8_8_ = 0,auVar17._0_8_ = uVar29,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( uVar40 + iVar33 ) - SUB164(auVar5 * auVar17, 8)) * lVar30,auVar18._8_8_ = 0,auVar18._0_8_ = uVar29,uVar37 <= SUB164(auVar6 * auVar18, 8) );
         }

      }

   }

   if ((float)( iVar44 + 1 ) <= (float)uVar27 * __LC76) {
      lVar30 = *(long*)in_RDX;
      if (lVar30 != 0) goto LAB_0011f255;
      LAB_0011f3b6:uVar27 = StringName::get_empty_hash();
   }
 else {
      if ((int)in_RSI[4] == 0x1c) {
         _err_print_error("_insert", "./core/templates/hash_set.h", 0xbf, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
         uVar42 = 0xffffffff;
         iVar44 = *(int*)( (long)in_RSI + 0x24 );
         lVar36 = *in_RSI;
         goto LAB_0011f378;
      }

      uVar27 = (int)in_RSI[4] + 1;
      uVar29 = (ulong)uVar27;
      if (uVar27 < 2) {
         uVar29 = 2;
      }

      uVar27 = *(uint*)( hash_table_size_primes + uVar29 * 4 );
      *(int*)( in_RSI + 4 ) = (int)uVar29;
      pvVar1 = (void*)in_RSI[3];
      uVar29 = (ulong)uVar27 * 4;
      pvVar2 = (void*)in_RSI[2];
      lVar30 = Memory::alloc_static(uVar29, false);
      in_RSI[3] = lVar30;
      lVar30 = Memory::realloc_static((void*)*in_RSI, (ulong)uVar27 * 8, false);
      *in_RSI = lVar30;
      lVar30 = Memory::alloc_static(uVar29, false);
      in_RSI[2] = lVar30;
      lVar30 = Memory::realloc_static((void*)in_RSI[1], uVar29, false);
      in_RSI[1] = lVar30;
      if (uVar27 != 0) {
         memset((void*)in_RSI[3], 0, uVar29);
      }

      if (*(int*)( (long)in_RSI + 0x24 ) != 0) {
         uVar29 = 0;
         lVar34 = in_RSI[3];
         lVar36 = in_RSI[2];
         do {
            uVar41 = uVar29 & 0xffffffff;
            uVar39 = (undefined4)uVar29;
            uVar42 = 0;
            uVar27 = *(uint*)( (long)pvVar1 + ( ulong ) * (uint*)( (long)pvVar2 + uVar29 * 4 ) * 4 );
            uVar35 = (ulong)uVar27;
            uVar40 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RSI + 4 ) * 4 );
            uVar38 = CONCAT44(0, uVar40);
            lVar31 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( in_RSI + 4 ) * 8 );
            auVar7._8_8_ = 0;
            auVar7._0_8_ = uVar35 * lVar31;
            auVar19._8_8_ = 0;
            auVar19._0_8_ = uVar38;
            lVar32 = SUB168(auVar7 * auVar19, 8) * 4;
            iVar44 = SUB164(auVar7 * auVar19, 8);
            puVar43 = (uint*)( lVar34 + lVar32 );
            uVar28 = *puVar43;
            if (uVar28 == 0) {
               lVar31 = uVar29 * 4;
            }
 else {
               do {
                  auVar8._8_8_ = 0;
                  auVar8._0_8_ = (ulong)uVar28 * lVar31;
                  auVar20._8_8_ = 0;
                  auVar20._0_8_ = uVar38;
                  auVar9._8_8_ = 0;
                  auVar9._0_8_ = ( ulong )(( uVar40 + iVar44 ) - SUB164(auVar8 * auVar20, 8)) * lVar31;
                  auVar21._8_8_ = 0;
                  auVar21._0_8_ = uVar38;
                  local_88 = SUB164(auVar9 * auVar21, 8);
                  if (local_88 < uVar42) {
                     *(int*)( lVar36 + uVar41 * 4 ) = iVar44;
                     uVar27 = *puVar43;
                     *puVar43 = (uint)uVar35;
                     uVar28 = *(uint*)( lVar32 + lVar30 );
                     uVar35 = (ulong)uVar27;
                     *(uint*)( lVar32 + lVar30 ) = (uint)uVar41;
                     uVar41 = (ulong)uVar28;
                     uVar42 = local_88;
                  }

                  uVar39 = (undefined4)uVar41;
                  uVar27 = (uint)uVar35;
                  uVar42 = uVar42 + 1;
                  auVar10._8_8_ = 0;
                  auVar10._0_8_ = ( ulong )(iVar44 + 1) * lVar31;
                  auVar22._8_8_ = 0;
                  auVar22._0_8_ = uVar38;
                  lVar32 = SUB168(auVar10 * auVar22, 8) * 4;
                  iVar44 = SUB164(auVar10 * auVar22, 8);
                  puVar43 = (uint*)( lVar34 + lVar32 );
                  uVar28 = *puVar43;
               }
 while ( uVar28 != 0 );
               lVar31 = uVar41 << 2;
            }

            *puVar43 = uVar27;
            uVar29 = uVar29 + 1;
            *(int*)( lVar36 + lVar31 ) = iVar44;
            *(undefined4*)( lVar30 + lVar32 ) = uVar39;
         }
 while ( (uint)uVar29 < *(uint*)( (long)in_RSI + 0x24 ) );
      }

      Memory::free_static(pvVar1, false);
      Memory::free_static(pvVar2, false);
      lVar30 = *(long*)in_RDX;
      if (lVar30 == 0) goto LAB_0011f3b6;
      LAB_0011f255:uVar27 = *(uint*)( lVar30 + 0x20 );
   }

   if (uVar27 == 0) {
      uVar27 = 1;
   }

   uVar29 = (ulong)uVar27;
   StringName::StringName((StringName*)( *in_RSI + ( ulong ) * (uint*)( (long)in_RSI + 0x24 ) * 8 ), in_RDX);
   uVar40 = *(uint*)( (long)in_RSI + 0x24 );
   lVar34 = in_RSI[3];
   uVar28 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RSI + 4 ) * 4 );
   uVar35 = CONCAT44(0, uVar28);
   lVar36 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( in_RSI + 4 ) * 8 );
   auVar11._8_8_ = 0;
   auVar11._0_8_ = uVar29 * lVar36;
   auVar23._8_8_ = 0;
   auVar23._0_8_ = uVar35;
   lVar30 = SUB168(auVar11 * auVar23, 8) * 4;
   iVar44 = SUB164(auVar11 * auVar23, 8);
   puVar43 = (uint*)( lVar34 + lVar30 );
   uVar42 = *puVar43;
   if (uVar42 == 0) {
      local_68 = in_RSI[2];
      lVar32 = in_RSI[1];
   }
 else {
      uVar37 = 0;
      local_68 = in_RSI[2];
      lVar32 = in_RSI[1];
      do {
         auVar12._8_8_ = 0;
         auVar12._0_8_ = (ulong)uVar42 * lVar36;
         auVar24._8_8_ = 0;
         auVar24._0_8_ = uVar35;
         auVar13._8_8_ = 0;
         auVar13._0_8_ = ( ulong )(( uVar28 + iVar44 ) - SUB164(auVar12 * auVar24, 8)) * lVar36;
         auVar25._8_8_ = 0;
         auVar25._0_8_ = uVar35;
         local_88 = SUB164(auVar13 * auVar25, 8);
         if (local_88 < uVar37) {
            *(int*)( local_68 + (ulong)uVar40 * 4 ) = iVar44;
            uVar27 = *puVar43;
            *puVar43 = (uint)uVar29;
            uVar42 = *(uint*)( lVar30 + lVar32 );
            uVar29 = (ulong)uVar27;
            *(uint*)( lVar30 + lVar32 ) = uVar40;
            uVar40 = uVar42;
            uVar37 = local_88;
         }

         uVar27 = (uint)uVar29;
         uVar37 = uVar37 + 1;
         auVar14._8_8_ = 0;
         auVar14._0_8_ = ( ulong )(iVar44 + 1) * lVar36;
         auVar26._8_8_ = 0;
         auVar26._0_8_ = uVar35;
         lVar30 = SUB168(auVar14 * auVar26, 8) * 4;
         iVar44 = SUB164(auVar14 * auVar26, 8);
         puVar43 = (uint*)( lVar34 + lVar30 );
         uVar42 = *puVar43;
      }
 while ( uVar42 != 0 );
   }

   *puVar43 = uVar27;
   *(int*)( local_68 + (ulong)uVar40 * 4 ) = iVar44;
   *(uint*)( lVar32 + lVar30 ) = uVar40;
   uVar42 = *(uint*)( (long)in_RSI + 0x24 );
   lVar36 = *in_RSI;
   iVar44 = uVar42 + 1;
   *(int*)( (long)in_RSI + 0x24 ) = iVar44;
   LAB_0011f378:*(uint*)( param_1 + 0xc ) = uVar42;
   *(long*)param_1 = lVar36;
   *(int*)( param_1 + 8 ) = iVar44;
   return param_1;
}
/* void EditorUndoRedoManager::add_do_method<>(Object*, StringName const&) */void EditorUndoRedoManager::add_do_method<>(EditorUndoRedoManager *this, Object *param_1, StringName *param_2) {
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   EditorUndoRedoManager::add_do_methodp((Object*)this, (StringName*)param_1, (Variant**)param_2, 0);
   if (Variant::needs_deinit[0] != '\0') {
      Variant::_clear_internal();
   }

   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void EditorUndoRedoManager::add_undo_method<>(Object*, StringName const&) */void EditorUndoRedoManager::add_undo_method<>(EditorUndoRedoManager *this, Object *param_1, StringName *param_2) {
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   EditorUndoRedoManager::add_undo_methodp((Object*)this, (StringName*)param_1, (Variant**)param_2, 0);
   if (Variant::needs_deinit[0] != '\0') {
      Variant::_clear_internal();
   }

   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* HashSet<StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::TEMPNAMEPLACEHOLDERVALUE(HashSet<StringName, HashMapHasherDefault,
   HashMapComparatorDefault<StringName> > const&) */void HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::operator =(HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>> *this, HashSet *param_1) {
   ulong uVar1;
   uint uVar2;
   long lVar3;
   long lVar4;
   long lVar5;
   undefined8 uVar6;
   ulong uVar7;
   long lVar8;
   void *pvVar9;
   if (this == (HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>*)param_1) {
      return;
   }

   pvVar9 = *(void**)this;
   if (pvVar9 != (void*)0x0) {
      if (( *(int*)( this + 0x24 ) != 0 ) && ( ( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x20 ) * 4 ) == 0 || ( memset(*(void**)( this + 0x18 ), 0, ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x20 ) * 4 ) << 2),*(int*)( this + 0x24 ) != 0 ) ) )) {
         lVar8 = 0;
         do {
            if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar9 + lVar8 * 8 ) != 0 )) {
               StringName::unref();
               pvVar9 = *(void**)this;
            }

            lVar8 = lVar8 + 1;
         }
 while ( (uint)lVar8 < *(uint*)( this + 0x24 ) );
         *(undefined4*)( this + 0x24 ) = 0;
         if (pvVar9 == (void*)0x0) goto LAB_0011f654;
      }

      Memory::free_static(pvVar9, false);
      Memory::free_static(*(void**)( this + 0x10 ), false);
      Memory::free_static(*(void**)( this + 8 ), false);
      Memory::free_static(*(void**)( this + 0x18 ), false);
      *(undefined1(*) [16])this = (undefined1[16])0x0;
      *(undefined1(*) [16])( this + 0x10 ) = (undefined1[16])0x0;
   }

   LAB_0011f654:uVar1 = *(ulong*)( param_1 + 0x20 );
   *(ulong*)( this + 0x20 ) = uVar1;
   if ((int)( uVar1 >> 0x20 ) != 0) {
      uVar2 = *(uint*)( hash_table_size_primes + ( uVar1 & 0xffffffff ) * 4 );
      uVar1 = (ulong)uVar2 * 4;
      uVar6 = Memory::alloc_static(uVar1, false);
      lVar8 = 0;
      *(undefined8*)( this + 0x18 ) = uVar6;
      uVar6 = Memory::alloc_static((ulong)uVar2 * 8, false);
      *(undefined8*)this = uVar6;
      uVar6 = Memory::alloc_static(uVar1, false);
      *(undefined8*)( this + 0x10 ) = uVar6;
      uVar6 = Memory::alloc_static(uVar1, false);
      *(undefined8*)( this + 8 ) = uVar6;
      if (*(int*)( this + 0x24 ) != 0) {
         do {
            StringName::StringName((StringName*)( lVar8 * 8 + *(long*)this ), (StringName*)( *(long*)param_1 + lVar8 * 8 ));
            *(undefined4*)( *(long*)( this + 0x10 ) + lVar8 * 4 ) = *(undefined4*)( *(long*)( param_1 + 0x10 ) + lVar8 * 4 );
            lVar8 = lVar8 + 1;
         }
 while ( (uint)lVar8 < *(uint*)( this + 0x24 ) );
      }

      if (uVar2 != 0) {
         lVar8 = *(long*)( param_1 + 0x18 );
         lVar3 = *(long*)( this + 0x18 );
         uVar7 = 0;
         lVar4 = *(long*)( param_1 + 8 );
         lVar5 = *(long*)( this + 8 );
         do {
            *(undefined4*)( lVar3 + uVar7 ) = *(undefined4*)( lVar8 + uVar7 );
            *(undefined4*)( lVar5 + uVar7 ) = *(undefined4*)( lVar4 + uVar7 );
            uVar7 = uVar7 + 4;
         }
 while ( uVar7 != uVar1 );
         return;
      }

   }

   return;
}
/* void List<StringName, DefaultAllocator>::sort_custom<StringName::AlphCompare>() */void List<StringName,DefaultAllocator>::sort_custom<StringName::AlphCompare>(List<StringName,DefaultAllocator> *this) {
   int iVar1;
   long *plVar2;
   Element **ppEVar3;
   undefined8 *puVar4;
   Element **ppEVar5;
   Element **ppEVar6;
   Element *pEVar7;
   long lVar8;
   Element *pEVar9;
   long lVar10;
   Element *pEVar11;
   if (*(long*)this == 0) {
      return;
   }

   iVar1 = *(int*)( *(long*)this + 0x10 );
   if (iVar1 < 2) {
      return;
   }

   pEVar11 = (Element*)(long)iVar1;
   ppEVar3 = (Element**)Memory::alloc_static((long)pEVar11 * 8, true);
   if (ppEVar3 == (Element**)0x0) {
      _err_print_error("memnew_arr_template", "./core/os/memory.h", 0xb6, "Parameter \"mem\" is null.", 0, 0);
   }
 else {
      ppEVar3[-1] = pEVar11;
   }

   if (*(long**)this != (long*)0x0) {
      ppEVar5 = ppEVar3;
      for (pEVar7 = (Element*)**(long**)this; pEVar7 != (Element*)0x0; pEVar7 = *(Element**)( pEVar7 + 8 )) {
         *ppEVar5 = pEVar7;
         ppEVar5 = ppEVar5 + 1;
      }

   }

   lVar10 = 0;
   pEVar7 = pEVar11;
   do {
      pEVar7 = (Element*)( (long)pEVar7 >> 1 );
      lVar10 = lVar10 + 1;
   }
 while ( pEVar7 != (Element*)0x1 );
   lVar10 = lVar10 * 2;
   pEVar7 = (Element*)0x1;
   pEVar9 = pEVar11;
   if ((long)pEVar11 < 0x11) {
      do {
         pEVar9 = pEVar7 + 1;
         SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>::linear_insert(0, (long)pEVar7, ppEVar3);
         pEVar7 = pEVar9;
      }
 while ( pEVar11 != pEVar9 );
   }
 else {
      do {
         lVar10 = lVar10 + -1;
         puVar4 = (undefined8*)SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>::median_of_3(ppEVar3, ppEVar3 + ( (long)pEVar9 >> 1 ), ppEVar3 + (long)( pEVar9 + -1 ));
         pEVar7 = (Element*)SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>::partitioner(0, (long)pEVar9, (Element*)*puVar4, ppEVar3);
         SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>::introsort((long)pEVar7, (long)pEVar9, ppEVar3, lVar10);
         lVar8 = 1;
         if ((long)pEVar7 < 0x11) goto LAB_0011f8f0;
         pEVar9 = pEVar7;
      }
 while ( lVar10 != 0 );
      SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>::partial_sort(0, (long)pEVar7, (long)pEVar7, ppEVar3);
      LAB_0011f8f0:do {
         lVar10 = lVar8 + 1;
         SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>::linear_insert(0, lVar8, ppEVar3);
         lVar8 = lVar10;
      }
 while ( lVar10 != 0x10 );
      pEVar7 = (Element*)0x10;
      do {
         pEVar9 = pEVar7 + 1;
         SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>::unguarded_linear_insert((long)pEVar7, ppEVar3[(long)pEVar7], ppEVar3);
         pEVar7 = pEVar9;
      }
 while ( pEVar11 != pEVar9 );
   }

   plVar2 = *(long**)this;
   pEVar7 = *ppEVar3;
   *plVar2 = (long)pEVar7;
   *(undefined8*)( pEVar7 + 0x10 ) = 0;
   *(Element**)( *ppEVar3 + 8 ) = ppEVar3[1];
   pEVar7 = ppEVar3[(long)( pEVar11 + -1 )];
   plVar2[1] = (long)pEVar7;
   *(Element**)( pEVar7 + 0x10 ) = ppEVar3[(long)( pEVar11 + -2 )];
   *(undefined8*)( ppEVar3[(long)( pEVar11 + -1 )] + 8 ) = 0;
   if (iVar1 != 2) {
      ppEVar5 = ppEVar3;
      do {
         ppEVar6 = ppEVar5 + 1;
         *(Element**)( ppEVar5[1] + 0x10 ) = *ppEVar5;
         *(Element**)( *ppEVar6 + 8 ) = ppEVar5[2];
         ppEVar5 = ppEVar6;
      }
 while ( ppEVar3 + ( iVar1 - 2 ) != ppEVar6 );
   }

   Memory::free_static(ppEVar3, true);
   return;
}
/* Callable create_custom_callable_function_pointer<AnimationNodeStateMachineEditor,
   int>(AnimationNodeStateMachineEditor*, char const*, void
   (AnimationNodeStateMachineEditor::*)(int)) */AnimationNodeStateMachineEditor *create_custom_callable_function_pointer<AnimationNodeStateMachineEditor,int>(AnimationNodeStateMachineEditor *param_1, char *param_2, _func_void_int *param_3) {
   undefined8 uVar1;
   CallableCustom *this;
   undefined8 in_RCX;
   undefined8 in_R8;
   this(CallableCustom * operator_new(0x48, ""));
   CallableCustom::CallableCustom(this);
   *(undefined**)( this + 0x20 ) = &_LC0;
   *(undefined1(*) [16])( this + 0x30 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0x40 ) = 0;
   *(undefined***)this = &PTR_hash_0012c9f8;
   uVar1 = *(undefined8*)( param_2 + 0x60 );
   *(char**)( this + 0x28 ) = param_2;
   *(undefined8*)( this + 0x30 ) = uVar1;
   *(undefined8*)( this + 0x38 ) = in_RCX;
   *(undefined8*)( this + 0x40 ) = in_R8;
   *(undefined8*)( this + 0x10 ) = 0;
   CallableCustomMethodPointerBase::_setup((uint*)this, (int)this + 0x28);
   *(_func_void_int**)( this + 0x20 ) = param_3 + 1;
   Callable::Callable((Callable*)param_1, this);
   return param_1;
}
/* Ref<AnimationNode>::unref() */void Ref<AnimationNode>::unref(Ref<AnimationNode> *this) {
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
/* Ref<AnimationNodeStateMachinePlayback>::TEMPNAMEPLACEHOLDERVALUE(Variant const&) */void Ref<AnimationNodeStateMachinePlayback>::operator =(Ref<AnimationNodeStateMachinePlayback> *this, Variant *param_1) {
   Object *pOVar1;
   char cVar2;
   Object *pOVar3;
   pOVar3 = (Object*)Variant::get_validated_object();
   pOVar1 = *(Object**)this;
   if (pOVar1 == pOVar3) {
      return;
   }

   if (pOVar3 == (Object*)0x0) {
      if (pOVar1 == (Object*)0x0) {
         return;
      }

      *(undefined8*)this = 0;
   }
 else {
      pOVar3 = (Object*)__dynamic_cast(pOVar3, &Object::typeinfo, &AnimationNodeStateMachinePlayback::typeinfo, 0);
      if (pOVar1 == pOVar3) {
         return;
      }

      *(Object**)this = pOVar3;
      if (( pOVar3 != (Object*)0x0 ) && ( cVar2 = cVar2 == '\0' )) {
         *(undefined8*)this = 0;
      }

      if (pOVar1 == (Object*)0x0) {
         return;
      }

   }

   cVar2 = RefCounted::unreference();
   if (( cVar2 != '\0' ) && ( cVar2 = cVar2 != '\0' )) {
      ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
      Memory::free_static(pOVar1, false);
      return;
   }

   return;
}
/* Callable
   create_custom_callable_function_pointer<AnimationNodeStateMachineEditor>(AnimationNodeStateMachineEditor*,
   char const*, void (AnimationNodeStateMachineEditor::*)()) */AnimationNodeStateMachineEditor *create_custom_callable_function_pointer<AnimationNodeStateMachineEditor>(AnimationNodeStateMachineEditor *param_1, char *param_2, _func_void *param_3) {
   undefined8 uVar1;
   CallableCustom *this;
   undefined8 in_RCX;
   undefined8 in_R8;
   this(CallableCustom * operator_new(0x48, ""));
   CallableCustom::CallableCustom(this);
   *(undefined**)( this + 0x20 ) = &_LC0;
   *(undefined1(*) [16])( this + 0x30 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0x40 ) = 0;
   *(undefined***)this = &PTR_hash_0012ca88;
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
/* Callable create_custom_callable_function_pointer<AnimationNodeStateMachineEditor,
   double>(AnimationNodeStateMachineEditor*, char const*, void
   (AnimationNodeStateMachineEditor::*)(double)) */AnimationNodeStateMachineEditor *create_custom_callable_function_pointer<AnimationNodeStateMachineEditor,double>(AnimationNodeStateMachineEditor *param_1, char *param_2, _func_void_double *param_3) {
   undefined8 uVar1;
   CallableCustom *this;
   undefined8 in_RCX;
   undefined8 in_R8;
   this(CallableCustom * operator_new(0x48, ""));
   CallableCustom::CallableCustom(this);
   *(undefined**)( this + 0x20 ) = &_LC0;
   *(undefined1(*) [16])( this + 0x30 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0x40 ) = 0;
   *(undefined***)this = &PTR_hash_0012cc38;
   uVar1 = *(undefined8*)( param_2 + 0x60 );
   *(char**)( this + 0x28 ) = param_2;
   *(undefined8*)( this + 0x30 ) = uVar1;
   *(undefined8*)( this + 0x38 ) = in_RCX;
   *(undefined8*)( this + 0x40 ) = in_R8;
   *(undefined8*)( this + 0x10 ) = 0;
   CallableCustomMethodPointerBase::_setup((uint*)this, (int)this + 0x28);
   *(_func_void_double**)( this + 0x20 ) = param_3 + 1;
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
/* List<PropertyInfo, DefaultAllocator>::~List() */void List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this) {
   void *pvVar1;
   long lVar2;
   long lVar3;
   long *plVar4;
   plVar4 = *(long**)this;
   if (plVar4 == (long*)0x0) {
      return;
   }

   do {
      pvVar1 = (void*)*plVar4;
      if (pvVar1 == (void*)0x0) {
         if ((int)plVar4[2] != 0) {
            _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
            return;
         }

         break;
      }

      if (*(long**)( (long)pvVar1 + 0x40 ) == plVar4) {
         lVar3 = *(long*)( (long)pvVar1 + 0x30 );
         lVar2 = *(long*)( (long)pvVar1 + 0x38 );
         *plVar4 = lVar3;
         if (pvVar1 == (void*)plVar4[1]) {
            plVar4[1] = lVar2;
         }

         if (lVar2 != 0) {
            *(long*)( lVar2 + 0x30 ) = lVar3;
            lVar3 = *(long*)( (long)pvVar1 + 0x30 );
         }

         if (lVar3 != 0) {
            *(long*)( lVar3 + 0x38 ) = lVar2;
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar1 + 0x20 ));
         if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar1 + 0x10 ) != 0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar1 + 8 ));
         Memory::free_static(pvVar1, false);
         *(int*)( plVar4 + 2 ) = (int)plVar4[2] + -1;
      }
 else {
         _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
      }

      plVar4 = *(long**)this;
   }
 while ( (int)plVar4[2] != 0 );
   Memory::free_static(plVar4, false);
   return;
}
/* WARNING: Removing unreachable block (ram,0x001200a8) *//* String vformat<String>(String const&, String const) */undefined8 *vformat<String>(undefined8 *param_1, bool *param_2, String *param_3) {
   char cVar1;
   Variant *this;
   int iVar2;
   long in_FS_OFFSET;
   Array local_c8[8];
   undefined8 local_c0[9];
   int local_78[6];
   undefined8 local_60;
   undefined1 local_58[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant((Variant*)local_78, param_3);
   local_60 = 0;
   local_58 = (undefined1[16])0x0;
   Array::Array(local_c8);
   iVar2 = (int)local_c8;
   Array::resize(iVar2);
   this(Variant * Array::operator [](iVar2));
   Variant::operator =(this, (Variant*)local_78);
   String::sprintf((Array*)local_c0, param_2);
   *param_1 = local_c0[0];
   local_c0[0] = 0;
   CowData<char32_t>::_unref((CowData<char32_t>*)local_c0);
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

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* WARNING: Removing unreachable block (ram,0x001203a8) *//* String vformat<StringName>(String const&, StringName const) */undefined8 *vformat<StringName>(undefined8 *param_1, bool *param_2, StringName *param_3) {
   char cVar1;
   Variant *this;
   int iVar2;
   long in_FS_OFFSET;
   Array local_c8[8];
   undefined8 local_c0[9];
   int local_78[6];
   undefined8 local_60;
   undefined1 local_58[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant((Variant*)local_78, param_3);
   local_60 = 0;
   local_58 = (undefined1[16])0x0;
   Array::Array(local_c8);
   iVar2 = (int)local_c8;
   Array::resize(iVar2);
   this(Variant * Array::operator [](iVar2));
   Variant::operator =(this, (Variant*)local_78);
   String::sprintf((Array*)local_c0, param_2);
   *param_1 = local_c0[0];
   local_c0[0] = 0;
   CowData<char32_t>::_unref((CowData<char32_t>*)local_c0);
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

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
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
            if (pvVar5 == (void*)0x0) goto LAB_001206d4;
         }

      }

      Memory::free_static(pvVar5, false);
      Memory::free_static(*(void**)( this + 0x20 ), false);
   }

   LAB_001206d4:CowData<char32_t>::_unref((CowData<char32_t>*)this);
   return;
}
/* List<String, DefaultAllocator>::~List() */void List<String,DefaultAllocator>::~List(List<String,DefaultAllocator> *this) {
   CowData<char32_t> *this_00;
   long lVar1;
   long lVar2;
   long *plVar3;
   plVar3 = *(long**)this;
   if (plVar3 == (long*)0x0) {
      return;
   }

   do {
      this_00 = (CowData<char32_t>*)*plVar3;
      if (this_00 == (CowData<char32_t>*)0x0) {
         if ((int)plVar3[2] != 0) {
            _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
            return;
         }

         break;
      }

      if (*(long**)( this_00 + 0x18 ) == plVar3) {
         lVar2 = *(long*)( this_00 + 8 );
         lVar1 = *(long*)( this_00 + 0x10 );
         *plVar3 = lVar2;
         if (this_00 == (CowData<char32_t>*)plVar3[1]) {
            plVar3[1] = lVar1;
         }

         if (lVar1 != 0) {
            *(long*)( lVar1 + 8 ) = lVar2;
            lVar2 = *(long*)( this_00 + 8 );
         }

         if (lVar2 != 0) {
            *(long*)( lVar2 + 0x10 ) = lVar1;
         }

         CowData<char32_t>::_unref(this_00);
         Memory::free_static(this_00, false);
         *(int*)( plVar3 + 2 ) = (int)plVar3[2] + -1;
      }
 else {
         _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
      }

      plVar3 = *(long**)this;
   }
 while ( (int)plVar3[2] != 0 );
   Memory::free_static(plVar3, false);
   return;
}
/* MethodBindT<>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindT<>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
   plVar4 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( plVar4 != (long*)0x0 ) && ( plVar4[1] != 0 ) ) && ( *(char*)( plVar4[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_2 + 3 ));
      if (plVar4[1] == 0) {
         plVar3 = (long*)plVar4[0x23];
         if (plVar3 == (long*)0x0) {
            plVar3 = (long*)( **(code**)( *plVar4 + 0x40 ) )(plVar4);
         }

      }
 else {
         plVar3 = (long*)( plVar4[1] + 0x20 );
      }

      if (local_48 == (char*)*plVar3) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error(&_LC134, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00120990;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar2 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D == 0) {
      if (( param_2[5] == (Variant*)0x0 ) || ( -1 < *(int*)( param_2[5] + -8 ) )) {
         *in_R9 = 0;
         if (( (ulong)pVVar2 & 1 ) != 0) {
            pVVar2 = *(Variant**)( pVVar2 + *(long*)( (long)plVar4 + (long)pVVar1 ) + -1 );
         }

         ( *(code*)pVVar2 )();
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

   LAB_00120990:*(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindT<>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
   code *UNRECOVERED_JUMPTABLE;
   Variant *pVVar1;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (Variant**)0x0 ) && ( param_2[1] != (Variant*)0x0 ) ) && ( param_2[1][0x2e] != (Variant)0x0 )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (Variant*)0x0) {
         pVVar1 = param_2[0x23];
         if (pVVar1 == (Variant*)0x0) {
            pVVar1 = (Variant*)( **(code**)( *param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         pVVar1 = param_2[1] + 0x20;
      }

      if (local_48 == *(char**)pVVar1) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x160, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_00120d9f;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
   if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
      UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Could not recover jumptable at 0x00120c46. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ));
      return;
   }

   LAB_00120d9f:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<>::ptrcall(Object*, void const**, void*) const */void MethodBindT<>::ptrcall(Object *param_1, void **param_2, void *param_3) {
   code *UNRECOVERED_JUMPTABLE;
   long *plVar1;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (void**)0x0 ) && ( param_2[1] != (void*)0x0 ) ) && ( *(char*)( (long)param_2[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (void*)0x0) {
         plVar1 = (long*)param_2[0x23];
         if (plVar1 == (long*)0x0) {
            plVar1 = (long*)( **(code**)( (long)*param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         plVar1 = (long*)( (long)param_2[1] + 0x20 );
      }

      if (local_48 == (char*)*plVar1) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x16b, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_00120f5f;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
   if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
      UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Could not recover jumptable at 0x00120e06. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ));
      return;
   }

   LAB_00120f5f:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* CallableCustomMethodPointer<AnimationNodeStateMachineEditor, void>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */void CallableCustomMethodPointer<AnimationNodeStateMachineEditor,void>::call(CallableCustomMethodPointer<AnimationNodeStateMachineEditor,void> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
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
         goto LAB_0012114f;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] == 0) goto LAB_0012114f;
      lVar1 = *(long*)( this + 0x28 );
      UNRECOVERED_JUMPTABLE = *(code**)( this + 0x38 );
      lVar2 = *(long*)( this + 0x40 );
      if (param_2 == 0) {
         *(undefined4*)param_4 = 0;
         if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
            UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( lVar1 + lVar2 ) + -1 );
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Could not recover jumptable at 0x00121128. Too many branches */
            /* WARNING: Treating indirect jump as call */
            ( *UNRECOVERED_JUMPTABLE )((long*)( lVar1 + lVar2 ), uVar5, UNRECOVERED_JUMPTABLE);
            return;
         }

         goto LAB_00121211;
      }

      *(undefined4*)param_4 = 3;
      *(undefined4*)( param_4 + 8 ) = 0;
   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
      LAB_0012114f:local_50 = 0;
      local_48 = "\', can\'t call method.";
      local_40 = 0x15;
      String::parse_latin1((StrRange*)&local_50);
      uitos((ulong)local_60);
      operator+((char *)
      local_58,(String*)"Invalid Object id \'";
      String::operator +((String*)&local_48, (String*)local_58);
      _err_print_error(&_LC134, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", (String*)&local_48, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
      CowData<char32_t>::_unref(local_58);
      CowData<char32_t>::_unref(local_60);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_00121211:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* CallableCustomMethodPointer<AnimationNodeStateMachineEditor, void, double>::call(Variant const**,
   int, Variant&, Callable::CallError&) const */void CallableCustomMethodPointer<AnimationNodeStateMachineEditor,void,double>::call(CallableCustomMethodPointer<AnimationNodeStateMachineEditor,void,double> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
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
         goto LAB_001213d6;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar7[1] == 0) goto LAB_001213d6;
      lVar1 = *(long*)( this + 0x28 );
      UNRECOVERED_JUMPTABLE = *(code**)( this + 0x38 );
      lVar2 = *(long*)( this + 0x40 );
      if ((uint)param_2 < 2) {
         if (param_2 != 0) {
            *(undefined4*)param_4 = 0;
            if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
               UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( lVar1 + lVar2 ) + -1 );
            }

            cVar5 = Variant::can_convert_strict(*(undefined4*)*param_1, 3);
            uVar4 = _LC142;
            if (cVar5 == '\0') {
               *(undefined4*)param_4 = 2;
               *(undefined8*)( param_4 + 4 ) = uVar4;
            }

            Variant::operator_cast_to_double(*param_1);
            if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
               /* WARNING: Could not recover jumptable at 0x00121385. Too many branches */
               /* WARNING: Treating indirect jump as call */
               ( *UNRECOVERED_JUMPTABLE )((long*)( lVar1 + lVar2 ));
               return;
            }

            goto LAB_00121498;
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
      LAB_001213d6:local_50 = 0;
      local_48 = "\', can\'t call method.";
      local_40 = 0x15;
      String::parse_latin1((StrRange*)&local_50);
      uitos((ulong)local_60);
      operator+((char *)
      local_58,(String*)"Invalid Object id \'";
      String::operator +((String*)&local_48, (String*)local_58);
      _err_print_error(&_LC134, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", (String*)&local_48, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
      CowData<char32_t>::_unref(local_58);
      CowData<char32_t>::_unref(local_60);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_00121498:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* CallableCustomMethodPointer<AnimationNodeStateMachineEditor, void, Ref<InputEvent>
   const&>::call(Variant const**, int, Variant&, Callable::CallError&) const */void CallableCustomMethodPointer<AnimationNodeStateMachineEditor,void,Ref<InputEvent>const&>::call(CallableCustomMethodPointer<AnimationNodeStateMachineEditor,void,Ref<InputEvent>const&> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
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
               goto LAB_0012156e;
            }

            if (param_2 == 0) {
               *(undefined4*)param_4 = 4;
               *(undefined4*)( param_4 + 8 ) = 1;
               goto LAB_0012156e;
            }

            *(undefined4*)param_4 = 0;
            if (( (ulong)pcVar10 & 1 ) != 0) {
               pcVar10 = *(code**)( pcVar10 + *(long*)( lVar1 + lVar2 ) + -1 );
            }

            cVar6 = Variant::can_convert_strict(*(undefined4*)*param_1);
            uVar4 = _LC143;
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
                     LAB_0012163d:cVar6 = RefCounted::unreference();
                     if (( cVar6 != '\0' ) && ( cVar6 = cVar6 != '\0' )) {
                        ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
                        Memory::free_static(pOVar5, false);
                     }

                  }

               }
 else {
                  pOVar7 = (Object*)__dynamic_cast(pOVar7, &Object::typeinfo, &InputEvent::typeinfo, 0);
                  if (pOVar5 != pOVar7) {
                     local_48 = pOVar7;
                     if (( pOVar7 != (Object*)0x0 ) && ( cVar6 = cVar6 == '\0' )) {
                        local_48 = (Object*)0x0;
                     }

                     if (pOVar5 != (Object*)0x0) goto LAB_0012163d;
                  }

               }

            }

            ( *pcVar10 )((long*)( lVar1 + lVar2 ));
            if (( ( local_48 != (Object*)0x0 ) && ( cVar6 = RefCounted::unreference() ),pOVar5 = local_48,cVar6 != '\0' )) &&( cVar6 = cVar6 != '\0' )(**(code**)( *(long*)pOVar5 + 0x140 ))(pOVar5);
            Memory::free_static(pOVar5, false);
         }

         goto LAB_0012156e;
      }

   }
 else {
      ObjectDB::spin_lock._0_1_ = '\0';
   }

}
else{_err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);};local_50 = 0;local_48 = (Object*)0x120f64;local_40 = 0x15;String::parse_latin1((StrRange*)&local_50);uitos((ulong)local_60);operator+((char *)local_58,(String *)"Invalid Object id \'");String::operator +((String*)&local_48, (String*)local_58);_err_print_error(&_LC134, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", (String*)&local_48, 0, 0);CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);CowData<char32_t>::_unref(local_58);CowData<char32_t>::_unref(local_60);CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);LAB_0012156e:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return;}/* CallableCustomMethodPointer<AnimationNodeStateMachineEditor, void, bool>::call(Variant const**,
   int, Variant&, Callable::CallError&) const */void CallableCustomMethodPointer<AnimationNodeStateMachineEditor,void,bool>::call(CallableCustomMethodPointer<AnimationNodeStateMachineEditor,void,bool> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
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
         goto LAB_001219d9;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar7[1] == 0) goto LAB_001219d9;
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
            uVar4 = _LC144;
            if (cVar5 == '\0') {
               *(undefined4*)param_4 = 2;
               *(undefined8*)( param_4 + 4 ) = uVar4;
            }

            bVar8 = Variant::operator_cast_to_bool(*param_1);
            if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
               /* WARNING: Could not recover jumptable at 0x00121988. Too many branches */
               /* WARNING: Treating indirect jump as call */
               ( *UNRECOVERED_JUMPTABLE )((long*)( lVar1 + lVar2 ), bVar8);
               return;
            }

            goto LAB_00121a9b;
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
      LAB_001219d9:local_50 = 0;
      local_48 = "\', can\'t call method.";
      local_40 = 0x15;
      String::parse_latin1((StrRange*)&local_50);
      uitos((ulong)local_60);
      operator+((char *)
      local_58,(String*)"Invalid Object id \'";
      String::operator +((String*)&local_48, (String*)local_58);
      _err_print_error(&_LC134, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", (String*)&local_48, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
      CowData<char32_t>::_unref(local_58);
      CowData<char32_t>::_unref(local_60);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_00121a9b:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* CallableCustomMethodPointer<AnimationNodeStateMachineEditor, void, int>::call(Variant const**,
   int, Variant&, Callable::CallError&) const */void CallableCustomMethodPointer<AnimationNodeStateMachineEditor,void,int>::call(CallableCustomMethodPointer<AnimationNodeStateMachineEditor,void,int> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
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
   CowData<char32_t> local_60[8];
   CowData<char32_t> local_58[8];
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar7 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
   if (uVar7 < (uint)ObjectDB::slot_max) {
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
      puVar8 = (ulong*)( (ulong)uVar7 * 0x10 + ObjectDB::object_slots );
      if (( *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff ) != ( *puVar8 & 0x7fffffffff )) {
         ObjectDB::spin_lock._0_1_ = '\0';
         goto LAB_00121c58;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar8[1] == 0) goto LAB_00121c58;
      lVar1 = *(long*)( this + 0x28 );
      UNRECOVERED_JUMPTABLE = *(code**)( this + 0x38 );
      lVar2 = *(long*)( this + 0x40 );
      if ((uint)param_2 < 2) {
         if (param_2 != 0) {
            *(undefined4*)param_4 = 0;
            if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
               UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( lVar1 + lVar2 ) + -1 );
            }

            cVar5 = Variant::can_convert_strict(*(undefined4*)*param_1, 2);
            uVar4 = _LC145;
            if (cVar5 == '\0') {
               *(undefined4*)param_4 = 2;
               *(undefined8*)( param_4 + 4 ) = uVar4;
            }

            iVar6 = Variant::operator_cast_to_int(*param_1);
            if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
               /* WARNING: Could not recover jumptable at 0x00121c07. Too many branches */
               /* WARNING: Treating indirect jump as call */
               ( *UNRECOVERED_JUMPTABLE )((long*)( lVar1 + lVar2 ), iVar6);
               return;
            }

            goto LAB_00121d1a;
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
      LAB_00121c58:local_50 = 0;
      local_48 = "\', can\'t call method.";
      local_40 = 0x15;
      String::parse_latin1((StrRange*)&local_50);
      uitos((ulong)local_60);
      operator+((char *)
      local_58,(String*)"Invalid Object id \'";
      String::operator +((String*)&local_48, (String*)local_58);
      _err_print_error(&_LC134, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", (String*)&local_48, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
      CowData<char32_t>::_unref(local_58);
      CowData<char32_t>::_unref(local_60);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_00121d1a:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* CallableCustomMethodPointer<AnimationNodeStateMachineEditor, void, String const&>::call(Variant
   const**, int, Variant&, Callable::CallError&) const */void CallableCustomMethodPointer<AnimationNodeStateMachineEditor,void,String_const&>::call(CallableCustomMethodPointer<AnimationNodeStateMachineEditor,void,String_const&> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
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
                  uVar4 = _LC146;
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

            goto LAB_00121dee;
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
   _err_print_error(&_LC134, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", (Variant*)&local_48, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   CowData<char32_t>::_unref(local_58);
   CowData<char32_t>::_unref(local_60);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   LAB_00121dee:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* CanvasItem::is_class(String const&) const */undefined8 CanvasItem::is_class(CanvasItem *this, String *param_1) {
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
            if (*(long*)( lVar4 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar4 + 0x10 ));
            }

         }
 else {
            local_50 = strlen(pcVar3);
            local_58 = pcVar3;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      cVar5 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar5 != '\0') goto LAB_001220ab;
   }

   cVar5 = String::operator ==(param_1, "CanvasItem");
   if (cVar5 == '\0') {
      for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
         lVar4 = *(long*)( lVar2 + 0x20 );
         if (lVar4 == 0) {
            local_60 = 0;
         }
 else {
            pcVar3 = *(char**)( lVar4 + 8 );
            local_60 = 0;
            if (pcVar3 == (char*)0x0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar4 + 0x10 ));
            }
 else {
               local_50 = strlen(pcVar3);
               local_58 = pcVar3;
               String::parse_latin1((StrRange*)&local_60);
            }

         }

         cVar5 = String::operator ==(param_1, (String*)&local_60);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (cVar5 != '\0') goto LAB_001220ab;
      }

      cVar5 = String::operator ==(param_1, "Node");
      if (cVar5 == '\0') {
         for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
            lVar4 = *(long*)( lVar2 + 0x20 );
            if (lVar4 == 0) {
               local_60 = 0;
            }
 else {
               pcVar3 = *(char**)( lVar4 + 8 );
               local_60 = 0;
               if (pcVar3 == (char*)0x0) {
                  if (*(long*)( lVar4 + 0x10 ) != 0) {
                     CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar4 + 0x10 ));
                  }

               }
 else {
                  local_50 = strlen(pcVar3);
                  local_58 = pcVar3;
                  String::parse_latin1((StrRange*)&local_60);
               }

            }

            cVar5 = String::operator ==(param_1, (String*)&local_60);
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

            if (cVar5 != '\0') goto LAB_001220ab;
         }

         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar6 = String::operator ==(param_1, "Object");
            return uVar6;
         }

         goto LAB_00122288;
      }

   }

   LAB_001220ab:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_00122288:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* ScrollBar::is_class(String const&) const */undefined8 ScrollBar::is_class(ScrollBar *this, String *param_1) {
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
            if (*(long*)( lVar4 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar4 + 0x10 ));
            }

         }
 else {
            local_50 = strlen(pcVar3);
            local_58 = pcVar3;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      cVar5 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar5 != '\0') goto LAB_001223ab;
   }

   cVar5 = String::operator ==(param_1, "ScrollBar");
   if (cVar5 == '\0') {
      for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
         lVar4 = *(long*)( lVar2 + 0x20 );
         if (lVar4 == 0) {
            local_60 = 0;
         }
 else {
            pcVar3 = *(char**)( lVar4 + 8 );
            local_60 = 0;
            if (pcVar3 == (char*)0x0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar4 + 0x10 ));
            }
 else {
               local_50 = strlen(pcVar3);
               local_58 = pcVar3;
               String::parse_latin1((StrRange*)&local_60);
            }

         }

         cVar5 = String::operator ==(param_1, (String*)&local_60);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (cVar5 != '\0') goto LAB_001223ab;
      }

      cVar5 = String::operator ==(param_1, "Range");
      if (cVar5 == '\0') {
         for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
            lVar4 = *(long*)( lVar2 + 0x20 );
            if (lVar4 == 0) {
               local_60 = 0;
            }
 else {
               pcVar3 = *(char**)( lVar4 + 8 );
               local_60 = 0;
               if (pcVar3 == (char*)0x0) {
                  if (*(long*)( lVar4 + 0x10 ) != 0) {
                     CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar4 + 0x10 ));
                  }

               }
 else {
                  local_50 = strlen(pcVar3);
                  local_58 = pcVar3;
                  String::parse_latin1((StrRange*)&local_60);
               }

            }

            cVar5 = String::operator ==(param_1, (String*)&local_60);
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

            if (cVar5 != '\0') goto LAB_001223ab;
         }

         cVar5 = String::operator ==(param_1, "Control");
         if (cVar5 == '\0') {
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               uVar6 = CanvasItem::is_class((CanvasItem*)this, param_1);
               return uVar6;
            }

            goto LAB_00122598;
         }

      }

   }

   LAB_001223ab:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_00122598:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* VScrollBar::is_class(String const&) const */undefined8 VScrollBar::is_class(VScrollBar *this, String *param_1) {
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
                  if (lVar4 == 0) goto LAB_0012260f;
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

      LAB_0012260f:cVar5 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar5 != '\0') goto LAB_001226c3;
   }

   cVar5 = String::operator ==(param_1, "VScrollBar");
   if (cVar5 == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = ScrollBar::is_class((ScrollBar*)this, param_1);
         return uVar7;
      }

   }
 else {
      LAB_001226c3:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* HScrollBar::is_class(String const&) const */undefined8 HScrollBar::is_class(HScrollBar *this, String *param_1) {
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
                  if (lVar4 == 0) goto LAB_0012278f;
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

      LAB_0012278f:cVar5 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar5 != '\0') goto LAB_00122843;
   }

   cVar5 = String::operator ==(param_1, "HScrollBar");
   if (cVar5 == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = ScrollBar::is_class((ScrollBar*)this, param_1);
         return uVar7;
      }

   }
 else {
      LAB_00122843:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* BoxContainer::is_class(String const&) const */undefined8 BoxContainer::is_class(BoxContainer *this, String *param_1) {
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
            if (*(long*)( lVar4 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar4 + 0x10 ));
            }

         }
 else {
            local_50 = strlen(pcVar3);
            local_58 = pcVar3;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      cVar5 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar5 != '\0') goto LAB_001229bb;
   }

   cVar5 = String::operator ==(param_1, "BoxContainer");
   if (cVar5 == '\0') {
      for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
         lVar4 = *(long*)( lVar2 + 0x20 );
         if (lVar4 == 0) {
            local_60 = 0;
         }
 else {
            pcVar3 = *(char**)( lVar4 + 8 );
            local_60 = 0;
            if (pcVar3 == (char*)0x0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar4 + 0x10 ));
            }
 else {
               local_50 = strlen(pcVar3);
               local_58 = pcVar3;
               String::parse_latin1((StrRange*)&local_60);
            }

         }

         cVar5 = String::operator ==(param_1, (String*)&local_60);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (cVar5 != '\0') goto LAB_001229bb;
      }

      cVar5 = String::operator ==(param_1, "Container");
      if (cVar5 == '\0') {
         for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
            lVar4 = *(long*)( lVar2 + 0x20 );
            if (lVar4 == 0) {
               local_60 = 0;
            }
 else {
               pcVar3 = *(char**)( lVar4 + 8 );
               local_60 = 0;
               if (pcVar3 == (char*)0x0) {
                  if (*(long*)( lVar4 + 0x10 ) != 0) {
                     CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar4 + 0x10 ));
                  }

               }
 else {
                  local_50 = strlen(pcVar3);
                  local_58 = pcVar3;
                  String::parse_latin1((StrRange*)&local_60);
               }

            }

            cVar5 = String::operator ==(param_1, (String*)&local_60);
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

            if (cVar5 != '\0') goto LAB_001229bb;
         }

         cVar5 = String::operator ==(param_1, "Control");
         if (cVar5 == '\0') {
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               uVar6 = CanvasItem::is_class((CanvasItem*)this, param_1);
               return uVar6;
            }

            goto LAB_00122ba8;
         }

      }

   }

   LAB_001229bb:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_00122ba8:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* HBoxContainer::is_class(String const&) const */undefined8 HBoxContainer::is_class(HBoxContainer *this, String *param_1) {
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
                  if (lVar4 == 0) goto LAB_00122c1f;
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

      LAB_00122c1f:cVar5 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar5 != '\0') goto LAB_00122cd3;
   }

   cVar5 = String::operator ==(param_1, "HBoxContainer");
   if (cVar5 == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = BoxContainer::is_class((BoxContainer*)this, param_1);
         return uVar7;
      }

   }
 else {
      LAB_00122cd3:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AnimationNodeStateMachineEditor::is_class(String const&) const */undefined8 AnimationNodeStateMachineEditor::is_class(AnimationNodeStateMachineEditor *this, String *param_1) {
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
            if (*(long*)( lVar4 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar4 + 0x10 ));
            }

         }
 else {
            local_50 = strlen(pcVar3);
            local_58 = pcVar3;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      cVar5 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar5 != '\0') goto LAB_00122e5b;
   }

   cVar5 = String::operator ==(param_1, "AnimationNodeStateMachineEditor");
   if (cVar5 == '\0') {
      for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
         lVar4 = *(long*)( lVar2 + 0x20 );
         if (lVar4 == 0) {
            local_60 = 0;
         }
 else {
            pcVar3 = *(char**)( lVar4 + 8 );
            local_60 = 0;
            if (pcVar3 == (char*)0x0) {
               if (*(long*)( lVar4 + 0x10 ) != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar4 + 0x10 ));
               }

            }
 else {
               local_50 = strlen(pcVar3);
               local_58 = pcVar3;
               String::parse_latin1((StrRange*)&local_60);
            }

         }

         cVar5 = String::operator ==(param_1, (String*)&local_60);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (cVar5 != '\0') goto LAB_00122e5b;
      }

      cVar5 = String::operator ==(param_1, "AnimationTreeNodeEditorPlugin");
      if (cVar5 == '\0') {
         for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
            lVar4 = *(long*)( lVar2 + 0x20 );
            if (lVar4 == 0) {
               local_60 = 0;
            }
 else {
               pcVar3 = *(char**)( lVar4 + 8 );
               local_60 = 0;
               if (pcVar3 == (char*)0x0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar4 + 0x10 ));
               }
 else {
                  local_50 = strlen(pcVar3);
                  local_58 = pcVar3;
                  String::parse_latin1((StrRange*)&local_60);
               }

            }

            cVar5 = String::operator ==(param_1, (String*)&local_60);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            if (cVar5 != '\0') goto LAB_00122e5b;
         }

         cVar5 = String::operator ==(param_1, "VBoxContainer");
         if (cVar5 == '\0') {
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               uVar6 = BoxContainer::is_class((BoxContainer*)this, param_1);
               return uVar6;
            }

            goto LAB_0012301e;
         }

      }

   }

   LAB_00122e5b:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_0012301e:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* HBoxContainer::_initialize_classv() */void HBoxContainer::_initialize_classv(void) {
   long in_FS_OFFSET;
   undefined8 local_70;
   long local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
      if (BoxContainer::initialize_class() == '\0') {
         if (Container::initialize_class() == '\0') {
            if (Control::initialize_class() == '\0') {
               if (CanvasItem::initialize_class() == '\0') {
                  if (Node::initialize_class() == '\0') {
                     Object::initialize_class();
                     local_60 = 0;
                     String::parse_latin1((String*)&local_60, "Object");
                     StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
                     local_70 = 0;
                     String::parse_latin1((String*)&local_70, "Node");
                     StringName::StringName((StringName*)&local_68, (String*)&local_70, false);
                     ClassDB::_add_class2((StringName*)&local_68, (StringName*)&local_58);
                     if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
                        StringName::unref();
                     }

                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
                     if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
                        StringName::unref();
                     }

                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                     if ((code*)PTR__bind_methods_00133050 != Node::_bind_methods) {
                        Node::_bind_methods();
                     }

                     Node::initialize_class()::initialized =
                     '\x01';
                  }

                  local_60 = 0;
                  String::parse_latin1((String*)&local_60, "Node");
                  StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
                  local_70 = 0;
                  String::parse_latin1((String*)&local_70, "CanvasItem");
                  StringName::StringName((StringName*)&local_68, (String*)&local_70, false);
                  ClassDB::_add_class2((StringName*)&local_68, (StringName*)&local_58);
                  if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
                     StringName::unref();
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
                  if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
                     StringName::unref();
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                  CanvasItem::_bind_methods();
                  if ((code*)PTR__bind_compatibility_methods_00133040 != Object::_bind_compatibility_methods) {
                     CanvasItem::_bind_compatibility_methods();
                  }

                  CanvasItem::initialize_class()::initialized =
                  '\x01';
               }

               local_58 = "CanvasItem";
               local_68 = 0;
               local_50 = 10;
               String::parse_latin1((StrRange*)&local_68);
               StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
               local_58 = "Control";
               local_70 = 0;
               local_50 = 7;
               String::parse_latin1((StrRange*)&local_70);
               StringName::StringName((StringName*)&local_58, (String*)&local_70, false);
               ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_60);
               if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
                  StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
               if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
                  StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
               Control::_bind_methods();
               Control::initialize_class()::initialized =
               '\x01';
            }

            local_68 = 0;
            local_58 = "Control";
            local_50 = 7;
            String::parse_latin1((StrRange*)&local_68);
            StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
            local_58 = "Container";
            local_70 = 0;
            local_50 = 9;
            String::parse_latin1((StrRange*)&local_70);
            StringName::StringName((StringName*)&local_58, (String*)&local_70, false);
            ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_60);
            if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
            if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
            Container::_bind_methods();
            Container::initialize_class()::initialized =
            '\x01';
         }

         local_58 = "Container";
         local_68 = 0;
         local_50 = 9;
         String::parse_latin1((StrRange*)&local_68);
         StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
         local_58 = "BoxContainer";
         local_70 = 0;
         local_50 = 0xc;
         String::parse_latin1((StrRange*)&local_70);
         StringName::StringName((StringName*)&local_58, (String*)&local_70, false);
         ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         if ((code*)PTR__bind_methods_00133048 != Container::_bind_methods) {
            BoxContainer::_bind_methods();
         }

         BoxContainer::initialize_class()::initialized =
         '\x01';
      }

      local_58 = "BoxContainer";
      local_68 = 0;
      local_50 = 0xc;
      String::parse_latin1((StrRange*)&local_68);
      StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
      local_58 = "HBoxContainer";
      local_70 = 0;
      local_50 = 0xd;
      String::parse_latin1((StrRange*)&local_70);
      StringName::StringName((StringName*)&local_58, (String*)&local_70, false);
      ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_60);
      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
      initialize_class()::initialized =
      '\x01';
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* HScrollBar::_initialize_classv() */void HScrollBar::_initialize_classv(void) {
   long in_FS_OFFSET;
   undefined8 local_70;
   long local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
      if (ScrollBar::initialize_class() == '\0') {
         if (Range::initialize_class() == '\0') {
            if (Control::initialize_class() == '\0') {
               if (CanvasItem::initialize_class() == '\0') {
                  if (Node::initialize_class() == '\0') {
                     Object::initialize_class();
                     local_60 = 0;
                     String::parse_latin1((String*)&local_60, "Object");
                     StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
                     local_70 = 0;
                     String::parse_latin1((String*)&local_70, "Node");
                     StringName::StringName((StringName*)&local_68, (String*)&local_70, false);
                     ClassDB::_add_class2((StringName*)&local_68, (StringName*)&local_58);
                     if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
                        StringName::unref();
                     }

                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
                     if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
                        StringName::unref();
                     }

                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                     if ((code*)PTR__bind_methods_00133050 != Node::_bind_methods) {
                        Node::_bind_methods();
                     }

                     Node::initialize_class()::initialized =
                     '\x01';
                  }

                  local_60 = 0;
                  String::parse_latin1((String*)&local_60, "Node");
                  StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
                  local_70 = 0;
                  String::parse_latin1((String*)&local_70, "CanvasItem");
                  StringName::StringName((StringName*)&local_68, (String*)&local_70, false);
                  ClassDB::_add_class2((StringName*)&local_68, (StringName*)&local_58);
                  if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
                     StringName::unref();
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
                  if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
                     StringName::unref();
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                  CanvasItem::_bind_methods();
                  if ((code*)PTR__bind_compatibility_methods_00133040 != Object::_bind_compatibility_methods) {
                     CanvasItem::_bind_compatibility_methods();
                  }

                  CanvasItem::initialize_class()::initialized =
                  '\x01';
               }

               local_58 = "CanvasItem";
               local_68 = 0;
               local_50 = 10;
               String::parse_latin1((StrRange*)&local_68);
               StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
               local_58 = "Control";
               local_70 = 0;
               local_50 = 7;
               String::parse_latin1((StrRange*)&local_70);
               StringName::StringName((StringName*)&local_58, (String*)&local_70, false);
               ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_60);
               if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
                  StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
               if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
                  StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
               Control::_bind_methods();
               Control::initialize_class()::initialized =
               '\x01';
            }

            local_68 = 0;
            local_58 = "Control";
            local_50 = 7;
            String::parse_latin1((StrRange*)&local_68);
            StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
            local_58 = "Range";
            local_70 = 0;
            local_50 = 5;
            String::parse_latin1((StrRange*)&local_70);
            StringName::StringName((StringName*)&local_58, (String*)&local_70, false);
            ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_60);
            if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
            if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
            Range::_bind_methods();
            Range::initialize_class()::initialized =
            '\x01';
         }

         local_58 = "Range";
         local_68 = 0;
         local_50 = 5;
         String::parse_latin1((StrRange*)&local_68);
         StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
         local_58 = "ScrollBar";
         local_70 = 0;
         local_50 = 9;
         String::parse_latin1((StrRange*)&local_70);
         StringName::StringName((StringName*)&local_58, (String*)&local_70, false);
         ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         if ((code*)PTR__bind_methods_00133058 != Range::_bind_methods) {
            ScrollBar::_bind_methods();
         }

         ScrollBar::initialize_class()::initialized =
         '\x01';
      }

      local_58 = "ScrollBar";
      local_68 = 0;
      local_50 = 9;
      String::parse_latin1((StrRange*)&local_68);
      StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
      local_58 = "HScrollBar";
      local_70 = 0;
      local_50 = 10;
      String::parse_latin1((StrRange*)&local_70);
      StringName::StringName((StringName*)&local_58, (String*)&local_70, false);
      ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_60);
      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
      initialize_class()::initialized =
      '\x01';
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* VScrollBar::_initialize_classv() */void VScrollBar::_initialize_classv(void) {
   long in_FS_OFFSET;
   undefined8 local_70;
   long local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
      if (ScrollBar::initialize_class() == '\0') {
         if (Range::initialize_class() == '\0') {
            if (Control::initialize_class() == '\0') {
               if (CanvasItem::initialize_class() == '\0') {
                  if (Node::initialize_class() == '\0') {
                     Object::initialize_class();
                     local_60 = 0;
                     String::parse_latin1((String*)&local_60, "Object");
                     StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
                     local_70 = 0;
                     String::parse_latin1((String*)&local_70, "Node");
                     StringName::StringName((StringName*)&local_68, (String*)&local_70, false);
                     ClassDB::_add_class2((StringName*)&local_68, (StringName*)&local_58);
                     if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
                        StringName::unref();
                     }

                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
                     if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
                        StringName::unref();
                     }

                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                     if ((code*)PTR__bind_methods_00133050 != Node::_bind_methods) {
                        Node::_bind_methods();
                     }

                     Node::initialize_class()::initialized =
                     '\x01';
                  }

                  local_60 = 0;
                  String::parse_latin1((String*)&local_60, "Node");
                  StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
                  local_70 = 0;
                  String::parse_latin1((String*)&local_70, "CanvasItem");
                  StringName::StringName((StringName*)&local_68, (String*)&local_70, false);
                  ClassDB::_add_class2((StringName*)&local_68, (StringName*)&local_58);
                  if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
                     StringName::unref();
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
                  if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
                     StringName::unref();
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                  CanvasItem::_bind_methods();
                  if ((code*)PTR__bind_compatibility_methods_00133040 != Object::_bind_compatibility_methods) {
                     CanvasItem::_bind_compatibility_methods();
                  }

                  CanvasItem::initialize_class()::initialized =
                  '\x01';
               }

               local_58 = "CanvasItem";
               local_68 = 0;
               local_50 = 10;
               String::parse_latin1((StrRange*)&local_68);
               StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
               local_58 = "Control";
               local_70 = 0;
               local_50 = 7;
               String::parse_latin1((StrRange*)&local_70);
               StringName::StringName((StringName*)&local_58, (String*)&local_70, false);
               ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_60);
               if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
                  StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
               if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
                  StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
               Control::_bind_methods();
               Control::initialize_class()::initialized =
               '\x01';
            }

            local_68 = 0;
            local_58 = "Control";
            local_50 = 7;
            String::parse_latin1((StrRange*)&local_68);
            StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
            local_58 = "Range";
            local_70 = 0;
            local_50 = 5;
            String::parse_latin1((StrRange*)&local_70);
            StringName::StringName((StringName*)&local_58, (String*)&local_70, false);
            ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_60);
            if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
            if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
            Range::_bind_methods();
            Range::initialize_class()::initialized =
            '\x01';
         }

         local_58 = "Range";
         local_68 = 0;
         local_50 = 5;
         String::parse_latin1((StrRange*)&local_68);
         StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
         local_58 = "ScrollBar";
         local_70 = 0;
         local_50 = 9;
         String::parse_latin1((StrRange*)&local_70);
         StringName::StringName((StringName*)&local_58, (String*)&local_70, false);
         ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         if ((code*)PTR__bind_methods_00133058 != Range::_bind_methods) {
            ScrollBar::_bind_methods();
         }

         ScrollBar::initialize_class()::initialized =
         '\x01';
      }

      local_58 = "ScrollBar";
      local_68 = 0;
      local_50 = 9;
      String::parse_latin1((StrRange*)&local_68);
      StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
      local_58 = "VScrollBar";
      local_70 = 0;
      local_50 = 10;
      String::parse_latin1((StrRange*)&local_70);
      StringName::StringName((StringName*)&local_58, (String*)&local_70, false);
      ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_60);
      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
      initialize_class()::initialized =
      '\x01';
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
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
   local_78 = &_LC148;
   local_88 = 0;
   local_90 = 0;
   local_70 = 4;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = &_LC148;
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
      LAB_0012447d:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_0012447d;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)pLVar5;
         local_68 = local_80;
         goto joined_r0x0012449f;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)pLVar5;
   joined_r0x0012449f:if (lVar2 == 0) {
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
      LAB_001247c2:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_001247c2;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 == local_80) {
         if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_68 = local_80;
      }

   }

   local_b0 = (CowData<char32_t>*)&local_58;
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
   CowData<char32_t>::_unref(local_b0);
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

   if ((code*)PTR__get_property_list_00133060 != Object::_get_property_list) {
      CanvasItem::_get_property_list((List*)this);
   }

   if (!param_2) goto LAB_00124891;
   local_98 = 0;
   local_90 = 0;
   local_78 = "Node";
   local_70 = 4;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "Node";
   local_88 = 0;
   local_70 = 4;
   String::parse_latin1((StrRange*)&local_88);
   local_78 = (char*)( (ulong)local_78 & 0xffffffff00000000 );
   local_70 = 0;
   if (local_88 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_88);
   }

   local_68 = 0;
   local_60 = 0;
   local_58 = 0;
   if (local_90 == 0) {
      LAB_001249d8:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_98);
   }
 else {
      CowData<char32_t>::_ref(local_b0, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_001249d8;
      StringName::StringName((StringName*)&local_80, (String*)local_b0, false);
      if (local_68 == local_80) {
         if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_68 = local_80;
      }

   }

   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
   CowData<char32_t>::_unref(local_b0);
   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   if (( StringName::configured != '\0' ) && ( local_98 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "Node", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   LAB_00124891:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* Control::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void Control::_get_property_listv(Control *this, List *param_1, bool param_2) {
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
   if (local_90 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 == 0x11) {
         StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
         if (local_68 == local_80) {
            if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            local_68 = local_80;
         }

         goto LAB_00124c51;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_00124c51:local_b0 = (CowData<char32_t>*)&local_58;
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
   CowData<char32_t>::_unref(local_b0);
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

   if ((code*)PTR__get_property_list_00133068 != CanvasItem::_get_property_list) {
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
/* Container::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void Container::_get_property_listv(Container *this, List *param_1, bool param_2) {
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
   local_78 = "Container";
   local_70 = 9;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "Container";
   local_98 = 0;
   local_70 = 9;
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
      LAB_00124f4d:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_00124f4d;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x00124f6f;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x00124f6f:if (lVar2 == 0) {
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

   StringName::StringName((StringName*)&local_78, "Container", false);
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
/* BoxContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void BoxContainer::_get_property_listv(BoxContainer *this, List *param_1, bool param_2) {
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
      Container::_get_property_listv((Container*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "BoxContainer";
   local_70 = 0xc;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "BoxContainer";
   local_98 = 0;
   local_70 = 0xc;
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
      LAB_0012532d:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_0012532d;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x0012534f;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x0012534f:if (lVar2 == 0) {
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

   StringName::StringName((StringName*)&local_78, "BoxContainer", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         Container::_get_property_listv((Container*)this, param_1, true);
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* VBoxContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void VBoxContainer::_get_property_listv(VBoxContainer *this, List *param_1, bool param_2) {
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
      BoxContainer::_get_property_listv((BoxContainer*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "VBoxContainer";
   local_70 = 0xd;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "VBoxContainer";
   local_98 = 0;
   local_70 = 0xd;
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
      LAB_0012570d:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_0012570d;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x0012572f;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x0012572f:if (lVar2 == 0) {
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

   StringName::StringName((StringName*)&local_78, "VBoxContainer", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         BoxContainer::_get_property_listv((BoxContainer*)this, param_1, true);
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AnimationTreeNodeEditorPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */void AnimationTreeNodeEditorPlugin::_get_property_listv(AnimationTreeNodeEditorPlugin *this, List *param_1, bool param_2) {
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
      VBoxContainer::_get_property_listv((VBoxContainer*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "AnimationTreeNodeEditorPlugin";
   local_70 = 0x1d;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "AnimationTreeNodeEditorPlugin";
   local_98 = 0;
   local_70 = 0x1d;
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
      LAB_00125aed:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_00125aed;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x00125b0f;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x00125b0f:if (lVar2 == 0) {
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

   StringName::StringName((StringName*)&local_78, "AnimationTreeNodeEditorPlugin", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         VBoxContainer::_get_property_listv((VBoxContainer*)this, param_1, true);
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AnimationNodeStateMachineEditor::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */void AnimationNodeStateMachineEditor::_get_property_listv(AnimationNodeStateMachineEditor *this, List *param_1, bool param_2) {
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
      AnimationTreeNodeEditorPlugin::_get_property_listv((AnimationTreeNodeEditorPlugin*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "AnimationNodeStateMachineEditor";
   local_70 = 0x1f;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "AnimationNodeStateMachineEditor";
   local_98 = 0;
   local_70 = 0x1f;
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
      LAB_00125ecd:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_00125ecd;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x00125eef;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x00125eef:if (lVar2 == 0) {
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

   StringName::StringName((StringName*)&local_78, "AnimationNodeStateMachineEditor", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         AnimationTreeNodeEditorPlugin::_get_property_listv((AnimationTreeNodeEditorPlugin*)this, param_1, true);
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* HBoxContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void HBoxContainer::_get_property_listv(HBoxContainer *this, List *param_1, bool param_2) {
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
      BoxContainer::_get_property_listv((BoxContainer*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "HBoxContainer";
   local_70 = 0xd;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "HBoxContainer";
   local_98 = 0;
   local_70 = 0xd;
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
      LAB_001262ad:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_001262ad;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x001262cf;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x001262cf:if (lVar2 == 0) {
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

   StringName::StringName((StringName*)&local_78, "HBoxContainer", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         BoxContainer::_get_property_listv((BoxContainer*)this, param_1, true);
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
      LAB_0012668d:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_0012668d;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x001266af;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x001266af:if (lVar2 == 0) {
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
/* ScrollBar::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void ScrollBar::_get_property_listv(ScrollBar *this, List *param_1, bool param_2) {
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
   local_78 = "ScrollBar";
   local_70 = 9;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "ScrollBar";
   local_98 = 0;
   local_70 = 9;
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
      LAB_00126a6d:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_00126a6d;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x00126a8f;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x00126a8f:if (lVar2 == 0) {
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

   StringName::StringName((StringName*)&local_78, "ScrollBar", false);
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
/* VScrollBar::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void VScrollBar::_get_property_listv(VScrollBar *this, List *param_1, bool param_2) {
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
      ScrollBar::_get_property_listv((ScrollBar*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "VScrollBar";
   local_70 = 10;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "VScrollBar";
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
      LAB_00126e4d:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_00126e4d;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x00126e6f;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x00126e6f:if (lVar2 == 0) {
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

   StringName::StringName((StringName*)&local_78, "VScrollBar", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         ScrollBar::_get_property_listv((ScrollBar*)this, param_1, true);
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* HScrollBar::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void HScrollBar::_get_property_listv(HScrollBar *this, List *param_1, bool param_2) {
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
      ScrollBar::_get_property_listv((ScrollBar*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "HScrollBar";
   local_70 = 10;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "HScrollBar";
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
      LAB_0012722d:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_0012722d;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x0012724f;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x0012724f:if (lVar2 == 0) {
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

   StringName::StringName((StringName*)&local_78, "HScrollBar", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         ScrollBar::_get_property_listv((ScrollBar*)this, param_1, true);
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
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
/* Ref<AnimationNodeStateMachine>::unref() */void Ref<AnimationNodeStateMachine>::unref(Ref<AnimationNodeStateMachine> *this) {
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
/* Ref<AnimationNodeStateMachinePlayback>::unref() */void Ref<AnimationNodeStateMachinePlayback>::unref(Ref<AnimationNodeStateMachinePlayback> *this) {
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
/* HashSet<StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::_lookup_pos(StringName const&, unsigned int&) const */undefined8 HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::_lookup_pos(HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>> *this, StringName *param_1, uint *param_2) {
   uint uVar1;
   long lVar2;
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   uint uVar11;
   int iVar12;
   long lVar13;
   ulong uVar14;
   uint uVar15;
   uint uVar16;
   if (*(long*)this == 0) {
      return 0;
   }

   if (*(int*)( this + 0x24 ) != 0) {
      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x20 ) * 4 );
      lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x20 ) * 8 );
      if (*(long*)param_1 == 0) {
         uVar11 = StringName::get_empty_hash();
      }
 else {
         uVar11 = *(uint*)( *(long*)param_1 + 0x20 );
      }

      uVar14 = CONCAT44(0, uVar1);
      if (uVar11 == 0) {
         uVar11 = 1;
      }

      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)uVar11 * lVar2;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar14;
      lVar13 = SUB168(auVar3 * auVar7, 8);
      uVar16 = *(uint*)( *(long*)( this + 0x18 ) + lVar13 * 4 );
      iVar12 = SUB164(auVar3 * auVar7, 8);
      if (uVar16 != 0) {
         uVar15 = 0;
         do {
            if (( uVar11 == uVar16 ) && ( uVar16 = *(uint*)( *(long*)( this + 8 ) + lVar13 * 4 ) * (long*)( *(long*)this + (ulong)uVar16 * 8 ) == *(long*)param_1 )) {
               *param_2 = uVar16;
               return 1;
            }

            uVar15 = uVar15 + 1;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = ( ulong )(iVar12 + 1) * lVar2;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar14;
            lVar13 = SUB168(auVar4 * auVar8, 8);
            uVar16 = *(uint*)( *(long*)( this + 0x18 ) + lVar13 * 4 );
            iVar12 = SUB164(auVar4 * auVar8, 8);
         }
 while ( ( uVar16 != 0 ) && ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar16 * lVar2,auVar9._8_8_ = 0,auVar9._0_8_ = uVar14,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( uVar1 + iVar12 ) - SUB164(auVar5 * auVar9, 8)) * lVar2,auVar10._8_8_ = 0,auVar10._0_8_ = uVar14,uVar15 <= SUB164(auVar6 * auVar10, 8) );
      }

   }

   return 0;
}
/* Ref<AnimationNodeStateMachineTransition>::unref() */void Ref<AnimationNodeStateMachineTransition>::unref(Ref<AnimationNodeStateMachineTransition> *this) {
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
/* MethodBind* create_method_bind<AnimationNodeStateMachineEditor>(void
   (AnimationNodeStateMachineEditor::*)()) */MethodBind *create_method_bind<AnimationNodeStateMachineEditor>(_func_void *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_0012ccc8;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "AnimationNodeStateMachineEditor";
   local_30 = 0x1f;
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
/* CowData<String>::_unref() */void CowData<String>::_unref(CowData<String> *this) {
   long *plVar1;
   long *plVar2;
   long lVar3;
   long lVar4;
   code *pcVar5;
   long *plVar6;
   long lVar7;
   if (*(long*)this == 0) {
      return;
   }

   LOCK();
   plVar1 = (long*)( *(long*)this + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 == 0) {
      plVar1 = *(long**)this;
      if (plVar1 != (long*)0x0) {
         lVar3 = plVar1[-1];
         *(undefined8*)this = 0;
         if (lVar3 != 0) {
            lVar7 = 0;
            plVar6 = plVar1;
            do {
               if (*plVar6 != 0) {
                  LOCK();
                  plVar2 = (long*)( *plVar6 + -0x10 );
                  *plVar2 = *plVar2 + -1;
                  UNLOCK();
                  if (*plVar2 == 0) {
                     lVar4 = *plVar6;
                     *plVar6 = 0;
                     Memory::free_static((void*)( lVar4 + -0x10 ), false);
                  }

               }

               lVar7 = lVar7 + 1;
               plVar6 = plVar6 + 1;
            }
 while ( lVar3 != lVar7 );
         }

         Memory::free_static(plVar1 + -2, false);
         return;
      }

      /* WARNING: Does not return */
      pcVar5 = (code*)invalidInstructionException();
      ( *pcVar5 )();
   }

   *(undefined8*)this = 0;
   return;
}
/* Vector<String>::reverse() */void Vector<String>::reverse(Vector<String> *this) {
   long *plVar1;
   long *plVar2;
   long lVar3;
   long lVar4;
   long lVar5;
   lVar3 = *(long*)( this + 8 );
   if (lVar3 == 0) {
      return;
   }

   lVar5 = 0;
   do {
      if (*(long*)( lVar3 + -8 ) / 2 <= lVar5) {
         return;
      }

      CowData<String>::_copy_on_write((CowData<String>*)( this + 8 ));
      lVar3 = *(long*)( this + 8 );
      if (lVar3 == 0) {
         lVar4 = 0;
      }
 else {
         lVar4 = *(long*)( lVar3 + -8 );
      }

      plVar2 = (long*)( lVar3 + -8 + ( lVar4 - lVar5 ) * 8 );
      plVar1 = (long*)( lVar3 + lVar5 * 8 );
      lVar4 = *plVar1;
      *plVar1 = 0;
      if (*plVar2 != 0) {
         *plVar1 = *plVar2;
         *plVar2 = 0;
      }

      if (lVar4 != 0) {
         *plVar2 = lVar4;
      }

      lVar5 = lVar5 + 1;
   }
 while ( lVar3 != 0 );
   return;
}
/* CowData<StringName>::_unref() */void CowData<StringName>::_unref(CowData<StringName> *this) {
   long *plVar1;
   long lVar2;
   code *pcVar3;
   long *plVar4;
   long lVar5;
   if (*(long*)this == 0) {
      return;
   }

   LOCK();
   plVar1 = (long*)( *(long*)this + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 == 0) {
      plVar1 = *(long**)this;
      if (plVar1 != (long*)0x0) {
         lVar2 = plVar1[-1];
         *(undefined8*)this = 0;
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
         return;
      }

      /* WARNING: Does not return */
      pcVar3 = (code*)invalidInstructionException();
      ( *pcVar3 )();
   }

   *(undefined8*)this = 0;
   return;
}
/* AnimationNodeStateMachineEditor::_initialize_classv() */void AnimationNodeStateMachineEditor::_initialize_classv(void) {
   long in_FS_OFFSET;
   undefined8 local_70;
   long local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
      if (AnimationTreeNodeEditorPlugin::initialize_class() == '\0') {
         if (VBoxContainer::initialize_class() == '\0') {
            if (BoxContainer::initialize_class() == '\0') {
               if (Container::initialize_class() == '\0') {
                  if (Control::initialize_class() == '\0') {
                     if (CanvasItem::initialize_class() == '\0') {
                        if (Node::initialize_class() == '\0') {
                           Object::initialize_class();
                           local_60 = 0;
                           String::parse_latin1((String*)&local_60, "Object");
                           StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
                           local_70 = 0;
                           String::parse_latin1((String*)&local_70, "Node");
                           StringName::StringName((StringName*)&local_68, (String*)&local_70, false);
                           ClassDB::_add_class2((StringName*)&local_68, (StringName*)&local_58);
                           if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
                              StringName::unref();
                           }

                           CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
                           if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
                              StringName::unref();
                           }

                           CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                           if ((code*)PTR__bind_methods_00133050 != Node::_bind_methods) {
                              Node::_bind_methods();
                           }

                           Node::initialize_class()::initialized =
                           '\x01';
                        }

                        local_60 = 0;
                        String::parse_latin1((String*)&local_60, "Node");
                        StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
                        local_70 = 0;
                        String::parse_latin1((String*)&local_70, "CanvasItem");
                        StringName::StringName((StringName*)&local_68, (String*)&local_70, false);
                        ClassDB::_add_class2((StringName*)&local_68, (StringName*)&local_58);
                        if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
                           StringName::unref();
                        }

                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
                        if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
                           StringName::unref();
                        }

                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                        CanvasItem::_bind_methods();
                        if ((code*)PTR__bind_compatibility_methods_00133040 != Object::_bind_compatibility_methods) {
                           CanvasItem::_bind_compatibility_methods();
                        }

                        CanvasItem::initialize_class()::initialized =
                        '\x01';
                     }

                     local_60 = 0;
                     String::parse_latin1((String*)&local_60, "CanvasItem");
                     StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
                     local_70 = 0;
                     String::parse_latin1((String*)&local_70, "Control");
                     StringName::StringName((StringName*)&local_68, (String*)&local_70, false);
                     ClassDB::_add_class2((StringName*)&local_68, (StringName*)&local_58);
                     if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
                        StringName::unref();
                     }

                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
                     if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
                        StringName::unref();
                     }

                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                     Control::_bind_methods();
                     Control::initialize_class()::initialized =
                     '\x01';
                  }

                  local_60 = 0;
                  String::parse_latin1((String*)&local_60, "Control");
                  StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
                  local_70 = 0;
                  String::parse_latin1((String*)&local_70, "Container");
                  StringName::StringName((StringName*)&local_68, (String*)&local_70, false);
                  ClassDB::_add_class2((StringName*)&local_68, (StringName*)&local_58);
                  if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
                     StringName::unref();
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
                  if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
                     StringName::unref();
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                  Container::_bind_methods();
                  Container::initialize_class()::initialized =
                  '\x01';
               }

               local_68 = 0;
               String::parse_latin1((String*)&local_68, "Container");
               StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
               local_58 = "BoxContainer";
               local_70 = 0;
               local_50 = 0xc;
               String::parse_latin1((StrRange*)&local_70);
               StringName::StringName((StringName*)&local_58, (String*)&local_70, false);
               ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_60);
               if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
                  StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
               if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
                  StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
               if ((code*)PTR__bind_methods_00133048 != Container::_bind_methods) {
                  BoxContainer::_bind_methods();
               }

               BoxContainer::initialize_class()::initialized =
               '\x01';
            }

            local_68 = 0;
            local_58 = "BoxContainer";
            local_50 = 0xc;
            String::parse_latin1((StrRange*)&local_68);
            StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
            local_58 = "VBoxContainer";
            local_70 = 0;
            local_50 = 0xd;
            String::parse_latin1((StrRange*)&local_70);
            StringName::StringName((StringName*)&local_58, (String*)&local_70, false);
            ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_60);
            if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
            if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
            VBoxContainer::initialize_class()::initialized =
            '\x01';
         }

         local_58 = "VBoxContainer";
         local_68 = 0;
         local_50 = 0xd;
         String::parse_latin1((StrRange*)&local_68);
         StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
         local_58 = "AnimationTreeNodeEditorPlugin";
         local_70 = 0;
         local_50 = 0x1d;
         String::parse_latin1((StrRange*)&local_70);
         StringName::StringName((StringName*)&local_58, (String*)&local_70, false);
         ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         AnimationTreeNodeEditorPlugin::initialize_class()::initialized =
         '\x01';
      }

      local_58 = "AnimationTreeNodeEditorPlugin";
      local_68 = 0;
      local_50 = 0x1d;
      String::parse_latin1((StrRange*)&local_68);
      StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
      local_58 = "AnimationNodeStateMachineEditor";
      local_70 = 0;
      local_50 = 0x1f;
      String::parse_latin1((StrRange*)&local_70);
      StringName::StringName((StringName*)&local_58, (String*)&local_70, false);
      ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_60);
      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
      _bind_methods();
      initialize_class()::initialized =
      '\x01';
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* AnimationNodeStateMachineEditor::_notificationv(int, bool) */void AnimationNodeStateMachineEditor::_notificationv(AnimationNodeStateMachineEditor *this, int param_1, bool param_2) {
   if (param_2) {
      _notification(this, param_1);
      BoxContainer::_notificationv((BoxContainer*)this, param_1, true);
      return;
   }

   BoxContainer::_notificationv((BoxContainer*)this, param_1, false);
   _notification(this, param_1);
   return;
}
/* CowData<String>::_realloc(long) */undefined8 CowData<String>::_realloc(CowData<String> *this, long param_1) {
   undefined8 *puVar1;
   puVar1 = (undefined8*)Memory::realloc_static((void*)( *(long*)this + -0x10 ), param_1 + 0x10, false);
   if (puVar1 != (undefined8*)0x0) {
      *puVar1 = 1;
      *(undefined8**)this = puVar1 + 2;
      return 0;
   }

   _err_print_error("_realloc", "./core/templates/cowdata.h", 0x1a9, "Parameter \"mem_new\" is null.", 0, 0);
   return 6;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<String>::resize<false>(long) */undefined8 CowData<String>::resize<false>(CowData<String> *this, long param_1) {
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
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return 0x1f;
   }

   if (*(long*)this == 0) {
      if (param_1 == 0) {
         return 0;
      }

      _copy_on_write(this);
      lVar4 = 0;
      lVar5 = 0;
   }
 else {
      lVar4 = *(long*)( *(long*)this + -8 );
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
         lVar5 = ( uVar6 | uVar6 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 8 == 0) {
      LAB_00128600:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
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
   if (lVar9 == 0) goto LAB_00128600;
   uVar8 = param_1;
   if (param_1 <= lVar4) {
      while (lVar4 = *(long*)this,lVar4 != 0) {
         if (*(ulong*)( lVar4 + -8 ) <= uVar8) {
            if (lVar9 != lVar5) {
               uVar3 = _realloc(this, lVar9);
               if ((int)uVar3 != 0) {
                  return uVar3;
               }

               lVar4 = *(long*)this;
               if (lVar4 == 0) {
                  _DAT_00000000 = 0;
                  /* WARNING: Does not return */
                  pcVar1 = (code*)invalidInstructionException();
                  ( *pcVar1 )();
               }

            }

            *(long*)( lVar4 + -8 ) = param_1;
            return 0;
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)( lVar4 + uVar8 * 8 ));
         uVar8 = uVar8 + 1;
      }
;
      goto LAB_00128656;
   }

   if (lVar9 == lVar5) {
      LAB_0012857b:puVar7 = *(undefined8**)this;
      if (puVar7 == (undefined8*)0x0) {
         LAB_00128656:/* WARNING: Does not return */pcVar1 = (code*)invalidInstructionException();
         ( *pcVar1 )();
      }

      lVar4 = puVar7[-1];
      if (param_1 <= lVar4) goto LAB_001284ef;
   }
 else {
      if (lVar4 != 0) {
         uVar3 = _realloc(this, lVar9);
         if ((int)uVar3 != 0) {
            return uVar3;
         }

         goto LAB_0012857b;
      }

      puVar2 = (undefined8*)Memory::alloc_static(uVar6 + 0x11, false);
      if (puVar2 == (undefined8*)0x0) {
         _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
         return 6;
      }

      puVar7 = puVar2 + 2;
      *puVar2 = 1;
      puVar2[1] = 0;
      *(undefined8**)this = puVar7;
      lVar4 = 0;
   }

   memset(puVar7 + lVar4, 0, ( param_1 - lVar4 ) * 8);
   LAB_001284ef:puVar7[-1] = param_1;
   return 0;
}
/* CowData<int>::_realloc(long) */undefined8 CowData<int>::_realloc(CowData<int> *this, long param_1) {
   undefined8 *puVar1;
   puVar1 = (undefined8*)Memory::realloc_static((void*)( *(long*)this + -0x10 ), param_1 + 0x10, false);
   if (puVar1 != (undefined8*)0x0) {
      *puVar1 = 1;
      *(undefined8**)this = puVar1 + 2;
      return 0;
   }

   _err_print_error("_realloc", "./core/templates/cowdata.h", 0x1a9, "Parameter \"mem_new\" is null.", 0, 0);
   return 6;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<int>::resize<false>(long) */undefined8 CowData<int>::resize<false>(CowData<int> *this, long param_1) {
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
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return 0x1f;
   }

   lVar3 = *(long*)this;
   if (lVar3 == 0) {
      if (param_1 == 0) {
         return 0;
      }

      _copy_on_write(this);
      lVar9 = 0;
      lVar3 = 0;
   }
 else {
      lVar9 = *(long*)( lVar3 + -8 );
      if (param_1 == lVar9) {
         return 0;
      }

      if (param_1 == 0) {
         LOCK();
         plVar1 = (long*)( lVar3 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 != 0) {
            *(undefined8*)this = 0;
            return 0;
         }

         lVar3 = *(long*)this;
         *(undefined8*)this = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
         return 0;
      }

      _copy_on_write(this);
      lVar3 = lVar9 * 4;
      if (lVar3 != 0) {
         uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
         uVar4 = uVar4 | uVar4 >> 2;
         uVar4 = uVar4 | uVar4 >> 4;
         uVar4 = uVar4 | uVar4 >> 8;
         uVar4 = uVar4 | uVar4 >> 0x10;
         lVar3 = ( uVar4 | uVar4 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 4 == 0) {
      LAB_001288e0:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
      return 6;
   }

   uVar4 = param_1 * 4 - 1;
   uVar4 = uVar4 | uVar4 >> 1;
   uVar4 = uVar4 | uVar4 >> 2;
   uVar4 = uVar4 | uVar4 >> 4;
   uVar4 = uVar4 | uVar4 >> 8;
   uVar4 = uVar4 | uVar4 >> 0x10;
   uVar4 = uVar4 | uVar4 >> 0x20;
   lVar8 = uVar4 + 1;
   if (lVar8 == 0) goto LAB_001288e0;
   if (lVar9 < param_1) {
      if (lVar8 != lVar3) {
         if (lVar9 == 0) {
            puVar5 = (undefined8*)Memory::alloc_static(uVar4 + 0x11, false);
            if (puVar5 == (undefined8*)0x0) {
               _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
               return 6;
            }

            puVar7 = puVar5 + 2;
            *puVar5 = 1;
            puVar5[1] = 0;
            *(undefined8**)this = puVar7;
            goto LAB_001287f1;
         }

         uVar6 = _realloc(this, lVar8);
         if ((int)uVar6 != 0) {
            return uVar6;
         }

      }

      puVar7 = *(undefined8**)this;
      if (puVar7 != (undefined8*)0x0) {
         LAB_001287f1:puVar7[-1] = param_1;
         return 0;
      }

   }
 else {
      if (( lVar8 != lVar3 ) && ( uVar6 = _realloc(this, lVar8) ),(int)uVar6 != 0) {
         return uVar6;
      }

      if (*(long*)this != 0) {
         *(long*)( *(long*)this + -8 ) = param_1;
         return 0;
      }

   }

   _DAT_00000000 = 0;
   /* WARNING: Does not return */
   pcVar2 = (code*)invalidInstructionException();
   ( *pcVar2 )();
}
/* CowData<EditorAnimationMultiTransitionEdit::Transition>::_unref() */void CowData<EditorAnimationMultiTransitionEdit::Transition>::_unref(CowData<EditorAnimationMultiTransitionEdit::Transition> *this) {
   long *plVar1;
   long lVar2;
   Object *pOVar3;
   code *pcVar4;
   char cVar5;
   long *plVar6;
   long lVar7;
   if (*(long*)this == 0) {
      return;
   }

   LOCK();
   plVar1 = (long*)( *(long*)this + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 == 0) {
      plVar1 = *(long**)this;
      if (plVar1 != (long*)0x0) {
         lVar2 = plVar1[-1];
         *(undefined8*)this = 0;
         lVar7 = 0;
         plVar6 = plVar1;
         if (lVar2 != 0) {
            do {
               if (( plVar6[2] != 0 ) && ( cVar5 = cVar5 != '\0' )) {
                  pOVar3 = (Object*)plVar6[2];
                  cVar5 = predelete_handler(pOVar3);
                  if (cVar5 != '\0') {
                     ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
                     Memory::free_static(pOVar3, false);
                  }

               }

               if (( StringName::configured != '\0' ) && ( ( ( plVar6[1] == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( *plVar6 != 0 ) ) )) {
                  StringName::unref();
               }

               lVar7 = lVar7 + 1;
               plVar6 = plVar6 + 3;
            }
 while ( lVar2 != lVar7 );
         }

         Memory::free_static(plVar1 + -2, false);
         return;
      }

      /* WARNING: Does not return */
      pcVar4 = (code*)invalidInstructionException();
      ( *pcVar4 )();
   }

   *(undefined8*)this = 0;
   return;
}
/* CowData<AnimationNodeStateMachineEditor::NodeRect>::_unref() */void CowData<AnimationNodeStateMachineEditor::NodeRect>::_unref(CowData<AnimationNodeStateMachineEditor::NodeRect> *this) {
   long *plVar1;
   long lVar2;
   code *pcVar3;
   long *plVar4;
   long lVar5;
   if (*(long*)this == 0) {
      return;
   }

   LOCK();
   plVar1 = (long*)( *(long*)this + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 == 0) {
      plVar1 = *(long**)this;
      if (plVar1 != (long*)0x0) {
         lVar2 = plVar1[-1];
         *(undefined8*)this = 0;
         if (lVar2 != 0) {
            lVar5 = 0;
            plVar4 = plVar1;
            do {
               if (( StringName::configured != '\0' ) && ( *plVar4 != 0 )) {
                  StringName::unref();
               }

               lVar5 = lVar5 + 1;
               plVar4 = plVar4 + 10;
            }
 while ( lVar2 != lVar5 );
         }

         Memory::free_static(plVar1 + -2, false);
         return;
      }

      /* WARNING: Does not return */
      pcVar3 = (code*)invalidInstructionException();
      ( *pcVar3 )();
   }

   *(undefined8*)this = 0;
   return;
}
/* CowData<AnimationNodeStateMachineEditor::TransitionLine>::_unref() */void CowData<AnimationNodeStateMachineEditor::TransitionLine>::_unref(CowData<AnimationNodeStateMachineEditor::TransitionLine> *this) {
   long *plVar1;
   long lVar2;
   code *pcVar3;
   long *plVar4;
   long lVar5;
   if (*(long*)this == 0) {
      return;
   }

   LOCK();
   plVar1 = (long*)( *(long*)this + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 == 0) {
      plVar1 = *(long**)this;
      if (plVar1 != (long*)0x0) {
         lVar2 = plVar1[-1];
         *(undefined8*)this = 0;
         lVar5 = 0;
         plVar4 = plVar1;
         if (lVar2 != 0) {
            do {
               if (( ( ( StringName::configured != '\0' ) && ( ( plVar4[5] == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( plVar4[1] == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( *plVar4 != 0 )) {
                  StringName::unref();
               }

               lVar5 = lVar5 + 1;
               plVar4 = plVar4 + 10;
            }
 while ( lVar2 != lVar5 );
         }

         Memory::free_static(plVar1 + -2, false);
         return;
      }

      /* WARNING: Does not return */
      pcVar3 = (code*)invalidInstructionException();
      ( *pcVar3 )();
   }

   *(undefined8*)this = 0;
   return;
}
/* AnimationNodeStateMachineEditor::~AnimationNodeStateMachineEditor() */void AnimationNodeStateMachineEditor::~AnimationNodeStateMachineEditor(AnimationNodeStateMachineEditor *this) {
   AnimationNodeStateMachineEditor *pAVar1;
   Object *pOVar2;
   char cVar3;
   long lVar4;
   AnimationNodeStateMachineEditor *pAVar5;
   void *pvVar6;
   bool bVar7;
   pvVar6 = *(void**)( this + 0xe40 );
   *(undefined***)this = &PTR__initialize_classv_0012c5e0;
   if (pvVar6 != (void*)0x0) {
      if (*(int*)( this + 0xe64 ) != 0) {
         if (*(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0xe60 ) * 4 ) != 0) {
            memset(*(void**)( this + 0xe58 ), 0, ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0xe60 ) * 4 ) << 2);
            if (*(int*)( this + 0xe64 ) == 0) goto LAB_00129270;
         }

         lVar4 = 0;
         do {
            if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar6 + lVar4 * 8 ) != 0 )) {
               StringName::unref();
               pvVar6 = *(void**)( this + 0xe40 );
            }

            lVar4 = lVar4 + 1;
         }
 while ( (uint)lVar4 < *(uint*)( this + 0xe64 ) );
         *(undefined4*)( this + 0xe64 ) = 0;
         if (pvVar6 == (void*)0x0) goto LAB_00128c76;
      }

      LAB_00129270:Memory::free_static(pvVar6, false);
      Memory::free_static(*(void**)( this + 0xe50 ), false);
      Memory::free_static(*(void**)( this + 0xe48 ), false);
      Memory::free_static(*(void**)( this + 0xe58 ), false);
   }

   LAB_00128c76:if (*(long*)( this + 0xe38 ) != 0) {
      cVar3 = RefCounted::unreference();
      if (cVar3 != '\0') {
         pOVar2 = *(Object**)( this + 0xe38 );
         cVar3 = predelete_handler(pOVar2);
         if (cVar3 != '\0') {
            ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
            Memory::free_static(pOVar2, false);
         }

      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0xe28 ));
   CowData<StringName>::_unref((CowData<StringName>*)( this + 0xdf0 ));
   if (StringName::configured != '\0') {
      if (*(long*)( this + 0xde0 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00128ce5;
      }

      if (*(long*)( this + 0xdd8 ) != 0) {
         StringName::unref();
      }

   }

   LAB_00128ce5:CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0xdc8 ));
   if (StringName::configured != '\0') {
      if (*(long*)( this + 0xdb8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00128d4e;
      }

      if (*(long*)( this + 0xda8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00128d4e;
      }

      if (*(long*)( this + 0xda0 ) != 0) {
         StringName::unref();
      }

   }

   LAB_00128d4e:CowData<AnimationNodeStateMachineEditor::TransitionLine>::_unref((CowData<AnimationNodeStateMachineEditor::TransitionLine>*)( this + 0xd98 ));
   CowData<AnimationNodeStateMachineEditor::NodeRect>::_unref((CowData<AnimationNodeStateMachineEditor::NodeRect>*)( this + 0xd88 ));
   if (StringName::configured != '\0') {
      if (*(long*)( this + 0xd78 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00128de2;
      }

      if (*(long*)( this + 0xd68 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00128de2;
      }

      if (*(long*)( this + 0xd58 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00128de2;
      }

      if (*(long*)( this + 0xd50 ) != 0) {
         StringName::unref();
      }

   }

   LAB_00128de2:pvVar6 = *(void**)( this + 0xd10 );
   if (pvVar6 != (void*)0x0) {
      if (*(int*)( this + 0xd34 ) != 0) {
         if (*(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0xd30 ) * 4 ) != 0) {
            memset(*(void**)( this + 0xd28 ), 0, ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0xd30 ) * 4 ) << 2);
            if (*(int*)( this + 0xd34 ) == 0) goto LAB_001292b0;
         }

         lVar4 = 0;
         do {
            if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar6 + lVar4 * 8 ) != 0 )) {
               StringName::unref();
               pvVar6 = *(void**)( this + 0xd10 );
            }

            lVar4 = lVar4 + 1;
         }
 while ( (uint)lVar4 < *(uint*)( this + 0xd34 ) );
         *(undefined4*)( this + 0xd34 ) = 0;
         if (pvVar6 == (void*)0x0) goto LAB_00128e7e;
      }

      LAB_001292b0:Memory::free_static(pvVar6, false);
      Memory::free_static(*(void**)( this + 0xd20 ), false);
      Memory::free_static(*(void**)( this + 0xd18 ), false);
      Memory::free_static(*(void**)( this + 0xd28 ), false);
   }

   LAB_00128e7e:pAVar5 = this + 0xc60;
   CowData<String>::_unref((CowData<String>*)( this + 0xcc8 ));
   CowData<String>::_unref((CowData<String>*)( this + 0xcb8 ));
   LAB_00128ea8:if (this + 0xc30 != pAVar5) {
      while (pAVar1 = pAVar5 + -8,pAVar5 = pAVar5 + -8,*(long*)pAVar1 != 0) {
         cVar3 = RefCounted::unreference();
         if (cVar3 == '\0') break;
         pOVar2 = *(Object**)pAVar5;
         cVar3 = predelete_handler(pOVar2);
         if (cVar3 == '\0') break;
         ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
         Memory::free_static(pOVar2, false);
         if (this + 0xc30 == pAVar5) goto LAB_00128ef0;
      }
;
      goto LAB_00128ea8;
   }

   LAB_00128ef0:if (*(long*)( this + 0xba8 ) != 0) {
      cVar3 = RefCounted::unreference();
      if (cVar3 != '\0') {
         pOVar2 = *(Object**)( this + 0xba8 );
         cVar3 = predelete_handler(pOVar2);
         if (cVar3 != '\0') {
            ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
            Memory::free_static(pOVar2, false);
         }

      }

   }

   if (*(long*)( this + 0xba0 ) != 0) {
      cVar3 = RefCounted::unreference();
      if (cVar3 != '\0') {
         pOVar2 = *(Object**)( this + 0xba0 );
         cVar3 = predelete_handler(pOVar2);
         if (cVar3 != '\0') {
            ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
            Memory::free_static(pOVar2, false);
         }

      }

   }

   if (*(long*)( this + 0xb80 ) != 0) {
      cVar3 = RefCounted::unreference();
      if (cVar3 != '\0') {
         pOVar2 = *(Object**)( this + 0xb80 );
         cVar3 = predelete_handler(pOVar2);
         if (cVar3 != '\0') {
            ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
            Memory::free_static(pOVar2, false);
         }

      }

   }

   for (int i = 0; i < 4; i++) {
      if (*(long*)( this + ( -32*i + 2936 ) ) != 0) {
         cVar3 = RefCounted::unreference();
         if (cVar3 != '\0') {
            pOVar2 = *(Object**)( this + ( -32*i + 2936 ) );
            cVar3 = predelete_handler(pOVar2);
            if (cVar3 != '\0') {
               ( **(code**)( *(long*)pOVar2 + 320 ) )(pOVar2);
               Memory::free_static(pOVar2, false);
            }

         }

      }

      if (*(long*)( this + ( -32*i + 2928 ) ) != 0) {
         cVar3 = RefCounted::unreference();
         if (cVar3 != '\0') {
            pOVar2 = *(Object**)( this + ( -32*i + 2928 ) );
            cVar3 = predelete_handler(pOVar2);
            if (cVar3 != '\0') {
               ( **(code**)( *(long*)pOVar2 + 320 ) )(pOVar2);
               Memory::free_static(pOVar2, false);
            }

         }

      }

      if (*(long*)( this + ( -32*i + 2920 ) ) != 0) {
         cVar3 = RefCounted::unreference();
         if (cVar3 != '\0') {
            pOVar2 = *(Object**)( this + ( -32*i + 2920 ) );
            cVar3 = predelete_handler(pOVar2);
            if (cVar3 != '\0') {
               ( **(code**)( *(long*)pOVar2 + 320 ) )(pOVar2);
               Memory::free_static(pOVar2, false);
            }

         }

      }

      if (*(long*)( this + ( -32*i + 2912 ) ) != 0) {
         cVar3 = RefCounted::unreference();
         if (cVar3 != '\0') {
            pOVar2 = *(Object**)( this + ( -32*i + 2912 ) );
            cVar3 = predelete_handler(pOVar2);
            if (cVar3 != '\0') {
               ( **(code**)( *(long*)pOVar2 + 320 ) )(pOVar2);
               Memory::free_static(pOVar2, false);
            }

         }

      }

   }

   if (*(long*)( this + 0xae8 ) != 0) {
      cVar3 = RefCounted::unreference();
      if (cVar3 != '\0') {
         pOVar2 = *(Object**)( this + 0xae8 );
         cVar3 = predelete_handler(pOVar2);
         if (cVar3 != '\0') {
            ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
            Memory::free_static(pOVar2, false);
         }

      }

   }

   if (*(long*)( this + 0xae0 ) != 0) {
      cVar3 = RefCounted::unreference();
      if (cVar3 != '\0') {
         pOVar2 = *(Object**)( this + 0xae0 );
         cVar3 = predelete_handler(pOVar2);
         if (cVar3 != '\0') {
            ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
            Memory::free_static(pOVar2, false);
         }

      }

   }

   pvVar6 = *(void**)( this + 0xa88 );
   if (pvVar6 != (void*)0x0) {
      if (*(int*)( this + 0xaac ) != 0) {
         if (*(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0xaa8 ) * 4 ) != 0) {
            memset(*(void**)( this + 0xaa0 ), 0, ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0xaa8 ) * 4 ) << 2);
            if (*(int*)( this + 0xaac ) == 0) goto LAB_00129230;
         }

         lVar4 = 0;
         do {
            if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar6 + lVar4 * 8 ) != 0 )) {
               StringName::unref();
               pvVar6 = *(void**)( this + 0xa88 );
            }

            lVar4 = lVar4 + 1;
         }
 while ( (uint)lVar4 < *(uint*)( this + 0xaac ) );
         *(undefined4*)( this + 0xaac ) = 0;
         if (pvVar6 == (void*)0x0) goto LAB_00129196;
      }

      LAB_00129230:Memory::free_static(pvVar6, false);
      Memory::free_static(*(void**)( this + 0xa98 ), false);
      Memory::free_static(*(void**)( this + 0xa90 ), false);
      Memory::free_static(*(void**)( this + 0xaa0 ), false);
   }

   LAB_00129196:if (( StringName::configured != '\0' ) && ( *(long*)( this + 0xa80 ) != 0 )) {
      StringName::unref();
   }

   if (*(long*)( this + 0xa10 ) != 0) {
      cVar3 = RefCounted::unreference();
      if (cVar3 != '\0') {
         pOVar2 = *(Object**)( this + 0xa10 );
         cVar3 = predelete_handler(pOVar2);
         if (cVar3 != '\0') {
            ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
            Memory::free_static(pOVar2, false);
         }

      }

   }

   bVar7 = StringName::configured != '\0';
   *(undefined**)this = &AnimationNodeStateMachine::typeinfo;
   if (bVar7) {
      if (*(long*)( this + 0x9e8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00129216;
      }

      if (*(long*)( this + 0x9d0 ) != 0) {
         StringName::unref();
      }

   }

   LAB_00129216:Control::~Control((Control*)this);
   return;
}
/* AnimationNodeStateMachineEditor::~AnimationNodeStateMachineEditor() */void AnimationNodeStateMachineEditor::~AnimationNodeStateMachineEditor(AnimationNodeStateMachineEditor *this) {
   ~AnimationNodeStateMachineEditor(this)
   ;;
   operator_delete(this, 0xe68);
   return;
}
/* CowData<AnimationNodeStateMachineEditor::NodeRect>::_realloc(long) */undefined8 CowData<AnimationNodeStateMachineEditor::NodeRect>::_realloc(CowData<AnimationNodeStateMachineEditor::NodeRect> *this, long param_1) {
   undefined8 *puVar1;
   puVar1 = (undefined8*)Memory::realloc_static((void*)( *(long*)this + -0x10 ), param_1 + 0x10, false);
   if (puVar1 != (undefined8*)0x0) {
      *puVar1 = 1;
      *(undefined8**)this = puVar1 + 2;
      return 0;
   }

   _err_print_error("_realloc", "./core/templates/cowdata.h", 0x1a9, "Parameter \"mem_new\" is null.", 0, 0);
   return 6;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<AnimationNodeStateMachineEditor::NodeRect>::resize<false>(long) */undefined8 CowData<AnimationNodeStateMachineEditor::NodeRect>::resize<false>(CowData<AnimationNodeStateMachineEditor::NodeRect> *this, long param_1) {
   code *pcVar1;
   undefined8 uVar2;
   undefined8 *puVar3;
   undefined8 *puVar4;
   long lVar5;
   undefined8 *puVar6;
   long lVar7;
   ulong uVar8;
   long lVar9;
   if (param_1 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return 0x1f;
   }

   if (*(long*)this == 0) {
      if (param_1 == 0) {
         return 0;
      }

      _copy_on_write(this);
      lVar5 = 0;
      lVar7 = 0;
   }
 else {
      lVar5 = *(long*)( *(long*)this + -8 );
      if (param_1 == lVar5) {
         return 0;
      }

      if (param_1 == 0) {
         _unref(this);
         return 0;
      }

      _copy_on_write(this);
      lVar7 = lVar5 * 0x50;
      if (lVar7 != 0) {
         uVar8 = lVar7 - 1U | lVar7 - 1U >> 1;
         uVar8 = uVar8 | uVar8 >> 2;
         uVar8 = uVar8 | uVar8 >> 4;
         uVar8 = uVar8 | uVar8 >> 8;
         uVar8 = uVar8 | uVar8 >> 0x10;
         lVar7 = ( uVar8 | uVar8 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 0x50 == 0) {
      LAB_00129b80:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
      return 6;
   }

   uVar8 = param_1 * 0x50 - 1;
   uVar8 = uVar8 >> 1 | uVar8;
   uVar8 = uVar8 | uVar8 >> 2;
   uVar8 = uVar8 | uVar8 >> 4;
   uVar8 = uVar8 | uVar8 >> 8;
   uVar8 = uVar8 | uVar8 >> 0x10;
   uVar8 = uVar8 | uVar8 >> 0x20;
   lVar9 = uVar8 + 1;
   if (lVar9 == 0) goto LAB_00129b80;
   if (param_1 <= lVar5) {
      lVar5 = *(long*)this;
      uVar8 = param_1;
      while (lVar5 != 0) {
         if (*(ulong*)( lVar5 + -8 ) <= uVar8) {
            LAB_001299fa:if (lVar9 != lVar7) {
               uVar2 = _realloc(this, lVar9);
               if ((int)uVar2 != 0) {
                  return uVar2;
               }

               lVar5 = *(long*)this;
               if (lVar5 == 0) {
                  _DAT_00000000 = 0;
                  /* WARNING: Does not return */
                  pcVar1 = (code*)invalidInstructionException();
                  ( *pcVar1 )();
               }

            }

            *(long*)( lVar5 + -8 ) = param_1;
            return 0;
         }

         while (( StringName::configured == '\0' || ( *(long*)( uVar8 * 0x50 + lVar5 ) == 0 ) )) {
            uVar8 = uVar8 + 1;
            if (*(ulong*)( lVar5 + -8 ) <= uVar8) goto LAB_001299fa;
         }
;
         StringName::unref();
         uVar8 = uVar8 + 1;
         lVar5 = *(long*)this;
      }
;
      goto LAB_001299c6;
   }

   if (lVar9 == lVar7) {
      LAB_00129af3:puVar6 = *(undefined8**)this;
      if (puVar6 == (undefined8*)0x0) {
         LAB_001299c6:/* WARNING: Does not return */pcVar1 = (code*)invalidInstructionException();
         ( *pcVar1 )();
      }

      lVar5 = puVar6[-1];
      if (param_1 <= lVar5) goto LAB_00129ad0;
   }
 else {
      if (lVar5 != 0) {
         uVar2 = _realloc(this, lVar9);
         if ((int)uVar2 != 0) {
            return uVar2;
         }

         goto LAB_00129af3;
      }

      puVar3 = (undefined8*)Memory::alloc_static(uVar8 + 0x11, false);
      if (puVar3 == (undefined8*)0x0) {
         _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
         return 6;
      }

      puVar6 = puVar3 + 2;
      *puVar3 = 1;
      puVar3[1] = 0;
      *(undefined8**)this = puVar6;
      lVar5 = 0;
   }

   puVar3 = puVar6 + lVar5 * 10;
   do {
      *puVar3 = 0;
      puVar4 = puVar3 + 10;
      for (int i = 0; i < 8; i++) {
         puVar3[( i + 1 )] = 0;
      }

      puVar3 = puVar4;
   }
 while ( puVar4 != puVar6 + param_1 * 10 );
   LAB_00129ad0:puVar6[-1] = param_1;
   return 0;
}
/* CowData<AnimationNodeStateMachineEditor::TransitionLine>::_realloc(long) */undefined8 CowData<AnimationNodeStateMachineEditor::TransitionLine>::_realloc(CowData<AnimationNodeStateMachineEditor::TransitionLine> *this, long param_1) {
   undefined8 *puVar1;
   puVar1 = (undefined8*)Memory::realloc_static((void*)( *(long*)this + -0x10 ), param_1 + 0x10, false);
   if (puVar1 != (undefined8*)0x0) {
      *puVar1 = 1;
      *(undefined8**)this = puVar1 + 2;
      return 0;
   }

   _err_print_error("_realloc", "./core/templates/cowdata.h", 0x1a9, "Parameter \"mem_new\" is null.", 0, 0);
   return 6;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<AnimationNodeStateMachineEditor::TransitionLine>::resize<false>(long) */undefined8 CowData<AnimationNodeStateMachineEditor::TransitionLine>::resize<false>(CowData<AnimationNodeStateMachineEditor::TransitionLine> *this, long param_1) {
   code *pcVar1;
   undefined8 *puVar2;
   undefined1(*pauVar3)[16];
   undefined1(*pauVar4)[16];
   undefined8 *puVar5;
   undefined8 uVar6;
   long *plVar7;
   long lVar8;
   ulong uVar9;
   long lVar10;
   long lVar11;
   if (param_1 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return 0x1f;
   }

   if (*(long*)this == 0) {
      if (param_1 == 0) {
         return 0;
      }

      _copy_on_write(this);
      lVar11 = 0;
      lVar8 = 0;
   }
 else {
      lVar11 = *(long*)( *(long*)this + -8 );
      if (param_1 == lVar11) {
         return 0;
      }

      if (param_1 == 0) {
         _unref(this);
         return 0;
      }

      _copy_on_write(this);
      lVar8 = lVar11 * 0x50;
      if (lVar8 != 0) {
         uVar9 = lVar8 - 1U | lVar8 - 1U >> 1;
         uVar9 = uVar9 | uVar9 >> 2;
         uVar9 = uVar9 | uVar9 >> 4;
         uVar9 = uVar9 | uVar9 >> 8;
         uVar9 = uVar9 | uVar9 >> 0x10;
         lVar8 = ( uVar9 | uVar9 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 0x50 == 0) {
      LAB_00129f50:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
      return 6;
   }

   uVar9 = param_1 * 0x50 - 1;
   uVar9 = uVar9 >> 1 | uVar9;
   uVar9 = uVar9 | uVar9 >> 2;
   uVar9 = uVar9 | uVar9 >> 4;
   uVar9 = uVar9 | uVar9 >> 8;
   uVar9 = uVar9 | uVar9 >> 0x10;
   uVar9 = uVar9 | uVar9 >> 0x20;
   lVar10 = uVar9 + 1;
   if (lVar10 == 0) goto LAB_00129f50;
   if (param_1 <= lVar11) {
      puVar5 = *(undefined8**)this;
      uVar9 = param_1;
      while (puVar5 != (undefined8*)0x0) {
         if ((ulong)puVar5[-1] <= uVar9) {
            if (lVar10 != lVar8) {
               uVar6 = _realloc(this, lVar10);
               if ((int)uVar6 != 0) {
                  return uVar6;
               }

               puVar5 = *(undefined8**)this;
               if (puVar5 == (undefined8*)0x0) {
                  _DAT_00000000 = 0;
                  /* WARNING: Does not return */
                  pcVar1 = (code*)invalidInstructionException();
                  ( *pcVar1 )();
               }

            }

            goto LAB_00129dda;
         }

         plVar7 = puVar5 + uVar9 * 10;
         if (StringName::configured != '\0') {
            if (( ( ( plVar7[5] == 0 ) || ( StringName::unref(),StringName::configured != '\0' ) ) && ( ( plVar7[1] == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( *plVar7 != 0 )) {
               StringName::unref();
            }

            puVar5 = *(undefined8**)this;
         }

         uVar9 = uVar9 + 1;
      }
;
      goto LAB_00129fa6;
   }

   if (lVar10 == lVar8) {
      LAB_00129ecb:puVar5 = *(undefined8**)this;
      if (puVar5 == (undefined8*)0x0) {
         LAB_00129fa6:/* WARNING: Does not return */pcVar1 = (code*)invalidInstructionException();
         ( *pcVar1 )();
      }

      lVar11 = puVar5[-1];
      if (param_1 <= lVar11) goto LAB_00129dda;
   }
 else {
      if (lVar11 != 0) {
         uVar6 = _realloc(this, lVar10);
         if ((int)uVar6 != 0) {
            return uVar6;
         }

         goto LAB_00129ecb;
      }

      puVar2 = (undefined8*)Memory::alloc_static(uVar9 + 0x11, false);
      if (puVar2 == (undefined8*)0x0) {
         _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
         return 6;
      }

      puVar5 = puVar2 + 2;
      *puVar2 = 1;
      puVar2[1] = 0;
      *(undefined8**)this = puVar5;
      lVar11 = 0;
   }

   pauVar3 = (undefined1(*) [16])( puVar5 + lVar11 * 10 );
   do {
      pauVar3[3][2] = 0;
      pauVar4 = pauVar3 + 5;
      *pauVar3 = (undefined1[16])0x0;
      *(undefined8*)pauVar3[1] = 0;
      *(undefined8*)( pauVar3[1] + 8 ) = 0;
      *(undefined8*)( pauVar3[2] + 8 ) = 0;
      *(undefined2*)pauVar3[3] = 0;
      *(undefined4*)( pauVar3[3] + 4 ) = 0;
      pauVar3[4][8] = 0;
      pauVar3 = pauVar4;
   }
 while ( pauVar4 != (undefined1(*) [16])( puVar5 + param_1 * 10 ) );
   LAB_00129dda:puVar5[-1] = param_1;
   return 0;
}
/* CowData<EditorAnimationMultiTransitionEdit::Transition>::_realloc(long) */undefined8 CowData<EditorAnimationMultiTransitionEdit::Transition>::_realloc(CowData<EditorAnimationMultiTransitionEdit::Transition> *this, long param_1) {
   undefined8 *puVar1;
   puVar1 = (undefined8*)Memory::realloc_static((void*)( *(long*)this + -0x10 ), param_1 + 0x10, false);
   if (puVar1 != (undefined8*)0x0) {
      *puVar1 = 1;
      *(undefined8**)this = puVar1 + 2;
      return 0;
   }

   _err_print_error("_realloc", "./core/templates/cowdata.h", 0x1a9, "Parameter \"mem_new\" is null.", 0, 0);
   return 6;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<EditorAnimationMultiTransitionEdit::Transition>::resize<false>(long) */undefined8 CowData<EditorAnimationMultiTransitionEdit::Transition>::resize<false>(CowData<EditorAnimationMultiTransitionEdit::Transition> *this, long param_1) {
   long *plVar1;
   Object *pOVar2;
   code *pcVar3;
   undefined1(*pauVar4)[16];
   char cVar5;
   long lVar6;
   undefined8 *puVar7;
   undefined1(*pauVar8)[16];
   undefined8 uVar9;
   long lVar10;
   undefined8 *puVar11;
   long lVar12;
   ulong uVar13;
   ulong uVar14;
   if (param_1 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return 0x1f;
   }

   if (*(long*)this == 0) {
      if (param_1 == 0) {
         return 0;
      }

      _copy_on_write(this);
      lVar10 = 0;
      lVar12 = 0;
   }
 else {
      lVar10 = *(long*)( *(long*)this + -8 );
      if (param_1 == lVar10) {
         return 0;
      }

      if (param_1 == 0) {
         _unref(this);
         return 0;
      }

      _copy_on_write(this);
      lVar12 = lVar10 * 0x18;
      if (lVar12 != 0) {
         uVar13 = lVar12 - 1U | lVar12 - 1U >> 1;
         uVar13 = uVar13 | uVar13 >> 2;
         uVar13 = uVar13 | uVar13 >> 4;
         uVar13 = uVar13 | uVar13 >> 8;
         uVar13 = uVar13 | uVar13 >> 0x10;
         lVar12 = ( uVar13 | uVar13 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 0x18 == 0) {
      LAB_0012a330:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
      return 6;
   }

   uVar13 = param_1 * 0x18 - 1;
   uVar13 = uVar13 >> 1 | uVar13;
   uVar13 = uVar13 | uVar13 >> 2;
   uVar13 = uVar13 | uVar13 >> 4;
   uVar13 = uVar13 | uVar13 >> 8;
   uVar13 = uVar13 | uVar13 >> 0x10;
   uVar13 = uVar13 | uVar13 >> 0x20;
   lVar6 = uVar13 + 1;
   if (lVar6 == 0) goto LAB_0012a330;
   uVar14 = param_1;
   if (param_1 <= lVar10) {
      while (lVar10 = *(long*)this,lVar10 != 0) {
         if (*(ulong*)( lVar10 + -8 ) <= uVar14) {
            if (lVar6 != lVar12) {
               uVar9 = _realloc(this, lVar6);
               if ((int)uVar9 != 0) {
                  return uVar9;
               }

               lVar10 = *(long*)this;
               if (lVar10 == 0) {
                  _DAT_00000000 = 0;
                  /* WARNING: Does not return */
                  pcVar3 = (code*)invalidInstructionException();
                  ( *pcVar3 )();
               }

            }

            *(long*)( lVar10 + -8 ) = param_1;
            return 0;
         }

         plVar1 = (long*)( lVar10 + uVar14 * 0x18 );
         if (( plVar1[2] != 0 ) && ( cVar5 = cVar5 != '\0' )) {
            pOVar2 = (Object*)plVar1[2];
            cVar5 = predelete_handler(pOVar2);
            if (cVar5 != '\0') {
               ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
               Memory::free_static(pOVar2, false);
            }

         }

         if (( StringName::configured != '\0' ) && ( ( ( plVar1[1] == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( *plVar1 != 0 ) ) )) {
            StringName::unref();
         }

         uVar14 = uVar14 + 1;
      }
;
      goto LAB_0012a386;
   }

   if (lVar6 == lVar12) {
      LAB_0012a265:puVar11 = *(undefined8**)this;
      if (puVar11 == (undefined8*)0x0) {
         LAB_0012a386:/* WARNING: Does not return */pcVar3 = (code*)invalidInstructionException();
         ( *pcVar3 )();
      }

      lVar10 = puVar11[-1];
      if (param_1 <= lVar10) goto LAB_0012a185;
   }
 else {
      if (lVar10 != 0) {
         uVar9 = _realloc(this, lVar6);
         if ((int)uVar9 != 0) {
            return uVar9;
         }

         goto LAB_0012a265;
      }

      puVar7 = (undefined8*)Memory::alloc_static(uVar13 + 0x11, false);
      if (puVar7 == (undefined8*)0x0) {
         _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
         return 6;
      }

      puVar11 = puVar7 + 2;
      *puVar7 = 1;
      puVar7[1] = 0;
      *(undefined8**)this = puVar11;
      lVar10 = 0;
   }

   pauVar8 = (undefined1(*) [16])( puVar11 + lVar10 * 3 );
   do {
      *(undefined8*)pauVar8[1] = 0;
      pauVar4 = pauVar8 + 1;
      *pauVar8 = (undefined1[16])0x0;
      pauVar8 = (undefined1(*) [16])( *pauVar4 + 8 );
   }
 while ( (undefined1(*) [16])( *pauVar4 + 8 ) != (undefined1(*) [16])( puVar11 + param_1 * 3 ) );
   LAB_0012a185:puVar11[-1] = param_1;
   return 0;
}
/* AnimationNodeStateMachineEditor::can_edit(Ref<AnimationNode> const&) */void AnimationNodeStateMachineEditor::_GLOBAL__sub_I_can_edit(void) {
   if (Animation::PARAMETERS_BASE_PATH == '\0') {
      Animation::PARAMETERS_BASE_PATH = '\x01';
      Animation::PARAMETERS_BASE_PATH = 0;
      String::parse_latin1((String*)&Animation::PARAMETERS_BASE_PATH, "parameters/");
      __cxa_atexit(String::~String, &Animation::PARAMETERS_BASE_PATH, &__dso_handle);
   }

   if (AudioStreamRandomizer::base_property_helper == '\0') {
      AudioStreamRandomizer::base_property_helper = '\x01';
      AudioStreamRandomizer::base_property_helper._64_8_ = 0;
      AudioStreamRandomizer::base_property_helper._0_16_ = (undefined1[16])0x0;
      AudioStreamRandomizer::base_property_helper._24_16_ = (undefined1[16])0x0;
      AudioStreamRandomizer::base_property_helper._40_16_ = (undefined1[16])0x0;
      AudioStreamRandomizer::base_property_helper._56_8_ = 2;
      __cxa_atexit(PropertyListHelper::~PropertyListHelper, AudioStreamRandomizer::base_property_helper, &__dso_handle);
   }

   if (PopupMenu::base_property_helper == '\0') {
      PopupMenu::base_property_helper = '\x01';
      PopupMenu::base_property_helper._64_8_ = 0;
      PopupMenu::base_property_helper._0_16_ = (undefined1[16])0x0;
      PopupMenu::base_property_helper._24_16_ = (undefined1[16])0x0;
      PopupMenu::base_property_helper._40_16_ = (undefined1[16])0x0;
      PopupMenu::base_property_helper._56_8_ = 2;
      __cxa_atexit(PropertyListHelper::~PropertyListHelper, PopupMenu::base_property_helper, &__dso_handle);
   }

   if (EditorFileDialog::base_property_helper == '\0') {
      EditorFileDialog::base_property_helper = '\x01';
      EditorFileDialog::base_property_helper._64_8_ = 0;
      EditorFileDialog::base_property_helper._0_16_ = (undefined1[16])0x0;
      EditorFileDialog::base_property_helper._24_16_ = (undefined1[16])0x0;
      EditorFileDialog::base_property_helper._40_16_ = (undefined1[16])0x0;
      EditorFileDialog::base_property_helper._56_8_ = 2;
      __cxa_atexit(PropertyListHelper::~PropertyListHelper, EditorFileDialog::base_property_helper, &__dso_handle);
   }

   if (OptionButton::base_property_helper != '\0') {
      return;
   }

   OptionButton::base_property_helper = 1;
   OptionButton::base_property_helper._56_8_ = 2;
   OptionButton::base_property_helper._64_8_ = 0;
   OptionButton::base_property_helper._0_16_ = (undefined1[16])0x0;
   OptionButton::base_property_helper._24_16_ = (undefined1[16])0x0;
   OptionButton::base_property_helper._40_16_ = (undefined1[16])0x0;
   __cxa_atexit(PropertyListHelper::~PropertyListHelper, OptionButton::base_property_helper, &__dso_handle);
   return;
}
/* WARNING: Control flow encountered bad instruction data *//* List<String, DefaultAllocator>::~List() */void List<String,DefaultAllocator>::~List(List<String,DefaultAllocator> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* PropertyListHelper::~PropertyListHelper() */void PropertyListHelper::~PropertyListHelper(PropertyListHelper *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* List<PropertyInfo, DefaultAllocator>::~List() */void List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* List<StringName, DefaultAllocator>::~List() */void List<StringName,DefaultAllocator>::~List(List<StringName,DefaultAllocator> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* AnimationNodeStateMachineEditor::TransitionLine::~TransitionLine() */void AnimationNodeStateMachineEditor::TransitionLine::~TransitionLine(TransitionLine *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* std::_Function_base::~_Function_base() */void std::_Function_base::~_Function_base(_Function_base *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* String::~String() */void String::~String(String *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* HBoxContainer::~HBoxContainer() */void HBoxContainer::~HBoxContainer(HBoxContainer *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* HScrollBar::~HScrollBar() */void HScrollBar::~HScrollBar(HScrollBar *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* VScrollBar::~VScrollBar() */void VScrollBar::~VScrollBar(VScrollBar *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<>::~MethodBindT() */void MethodBindT<>::~MethodBindT(MethodBindT<> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomMethodPointer<AnimationNodeStateMachineEditor, void, String
   const&>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<AnimationNodeStateMachineEditor,void,String_const&>::~CallableCustomMethodPointer(CallableCustomMethodPointer<AnimationNodeStateMachineEditor,void,String_const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomMethodPointer<AnimationNodeStateMachineEditor, void,
   int>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<AnimationNodeStateMachineEditor,void,int>::~CallableCustomMethodPointer(CallableCustomMethodPointer<AnimationNodeStateMachineEditor,void,int> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomMethodPointer<AnimationNodeStateMachineEditor,
   void>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<AnimationNodeStateMachineEditor,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<AnimationNodeStateMachineEditor,void> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomMethodPointer<AnimationNodeStateMachineEditor, void,
   bool>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<AnimationNodeStateMachineEditor,void,bool>::~CallableCustomMethodPointer(CallableCustomMethodPointer<AnimationNodeStateMachineEditor,void,bool> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomMethodPointer<AnimationNodeStateMachineEditor, void, Ref<InputEvent>
   const&>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<AnimationNodeStateMachineEditor,void,Ref<InputEvent>const&>::~CallableCustomMethodPointer(CallableCustomMethodPointer<AnimationNodeStateMachineEditor,void,Ref<InputEvent>const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomMethodPointer<AnimationNodeStateMachineEditor, void,
   double>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<AnimationNodeStateMachineEditor,void,double>::~CallableCustomMethodPointer(CallableCustomMethodPointer<AnimationNodeStateMachineEditor,void,double> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* StringName::~StringName() */void StringName::~StringName(StringName *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* AnimationNodeStateMachineEditor::~AnimationNodeStateMachineEditor() */void AnimationNodeStateMachineEditor::~AnimationNodeStateMachineEditor(AnimationNodeStateMachineEditor *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}


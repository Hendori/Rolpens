/* LinkButton::get_structured_text_bidi_override() const */undefined4 LinkButton::get_structured_text_bidi_override(LinkButton *this) {
   return *(undefined4*)( this + 0xa74 );
}
/* LinkButton::get_text_direction() const */undefined4 LinkButton::get_text_direction(LinkButton *this) {
   return *(undefined4*)( this + 0xa70 );
}
/* LinkButton::get_underline_mode() const */undefined4 LinkButton::get_underline_mode(LinkButton *this) {
   return *(undefined4*)( this + 0xa58 );
}
/* LinkButton::set_underline_mode(LinkButton::UnderlineMode) */void LinkButton::set_underline_mode(LinkButton *this, int param_2) {
   if (*(int*)( this + 0xa58 ) != param_2) {
      *(int*)( this + 0xa58 ) = param_2;
      CanvasItem::queue_redraw();
      return;
   }

   return;
}
/* LinkButton::get_structured_text_bidi_override_options() const */void LinkButton::get_structured_text_bidi_override_options(void) {
   long in_RSI;
   Array *in_RDI;
   Array::Array(in_RDI, (Array*)( in_RSI + 0xa78 ));
   return;
}
/* LinkButton::get_minimum_size() const */void LinkButton::get_minimum_size(void) {
   TextLine::get_size();
   return;
}
/* LinkButton::pressed() */void LinkButton::pressed(LinkButton *this) {
   long *plVar1;
   if (( *(long*)( this + 0xa60 ) != 0 ) && ( 1 < *(uint*)( *(long*)( this + 0xa60 ) + -8 ) )) {
      plVar1 = (long*)OS::get_singleton();
      /* WARNING: Could not recover jumptable at 0x001000ce. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( **(code**)( *plVar1 + 0x150 ) )(plVar1, this + 0xa60);
      return;
   }

   return;
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   LinkButton::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#12}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<void(Node *, StringName_const &, StringName_const &),LinkButton::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#12}>::_M_manager(undefined8 *param_1, undefined8 param_2, int param_3) {
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
   LinkButton::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#11}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<void(Node *, StringName_const &, StringName_const &),LinkButton::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#11}>::_M_manager(undefined8 *param_1, undefined8 param_2, int param_3) {
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
   LinkButton::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#10}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<void(Node *, StringName_const &, StringName_const &),LinkButton::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#10}>::_M_manager(undefined8 *param_1, undefined8 param_2, int param_3) {
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
   LinkButton::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#9}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<void(Node *, StringName_const &, StringName_const &),LinkButton::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#9}>::_M_manager(undefined8 *param_1, undefined8 param_2, int param_3) {
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
   LinkButton::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#8}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<void(Node *, StringName_const &, StringName_const &),LinkButton::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#8}>::_M_manager(undefined8 *param_1, undefined8 param_2, int param_3) {
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
   LinkButton::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#7}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<void(Node *, StringName_const &, StringName_const &),LinkButton::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#7}>::_M_manager(undefined8 *param_1, undefined8 param_2, int param_3) {
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
   LinkButton::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#6}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<void(Node *, StringName_const &, StringName_const &),LinkButton::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#6}>::_M_manager(undefined8 *param_1, undefined8 param_2, int param_3) {
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
   LinkButton::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#5}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<void(Node *, StringName_const &, StringName_const &),LinkButton::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#5}>::_M_manager(undefined8 *param_1, undefined8 param_2, int param_3) {
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
   LinkButton::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#4}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<void(Node *, StringName_const &, StringName_const &),LinkButton::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#4}>::_M_manager(undefined8 *param_1, undefined8 param_2, int param_3) {
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
   LinkButton::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#3}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<void(Node *, StringName_const &, StringName_const &),LinkButton::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#3}>::_M_manager(undefined8 *param_1, undefined8 param_2, int param_3) {
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
   LinkButton::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#2}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<void(Node *, StringName_const &, StringName_const &),LinkButton::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#2}>::_M_manager(undefined8 *param_1, undefined8 param_2, int param_3) {
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
   LinkButton::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#1}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<void(Node *, StringName_const &, StringName_const &),LinkButton::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#1}>::_M_manager(undefined8 *param_1, undefined8 param_2, int param_3) {
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
   LinkButton::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#1}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),LinkButton::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#1}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
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

   lVar4 = __dynamic_cast(*param_2, &Object::typeinfo, &LinkButton::typeinfo, 0);
   Control::get_theme_item(local_48, lVar4, 5, param_3, param_4);
   pOVar5 = (Object*)Variant::get_validated_object();
   pOVar1 = *(Object**)( lVar4 + 0xa80 );
   if (pOVar5 == pOVar1) goto LAB_001003d0;
   if (pOVar5 == (Object*)0x0) {
      if (pOVar1 == (Object*)0x0) goto LAB_001003d0;
      *(undefined8*)( lVar4 + 0xa80 ) = 0;
   }
 else {
      pOVar5 = (Object*)__dynamic_cast(pOVar5, &Object::typeinfo, &StyleBox::typeinfo, 0);
      if (pOVar1 == pOVar5) goto LAB_001003d0;
      *(Object**)( lVar4 + 0xa80 ) = pOVar5;
      if (pOVar5 != (Object*)0x0) {
         cVar3 = RefCounted::reference();
         if (cVar3 == '\0') {
            *(undefined8*)( lVar4 + 0xa80 ) = 0;
         }

      }

      if (pOVar1 == (Object*)0x0) goto LAB_001003d0;
   }

   cVar3 = RefCounted::unreference();
   if (cVar3 != '\0') {
      cVar3 = predelete_handler(pOVar1);
      if (cVar3 != '\0') {
         ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
         Memory::free_static(pOVar1, false);
      }

   }

   LAB_001003d0:if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   LinkButton::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#4}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),LinkButton::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#4}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
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
      _DAT_00000aa8 = Variant::operator_cast_to_Color((Variant*)local_48);
      /* WARNING: Does not return */
      pcVar1 = (code*)invalidInstructionException();
      _DAT_00000ab0 = in_XMM1_Qa;
      ( *pcVar1 )();
   }

   lVar2 = __dynamic_cast(*param_2, &Object::typeinfo, &LinkButton::typeinfo, 0);
   Control::get_theme_item(local_48, lVar2, 0, param_3, param_4);
   uVar3 = Variant::operator_cast_to_Color((Variant*)local_48);
   *(undefined8*)( lVar2 + 0xaa8 ) = uVar3;
   *(undefined8*)( lVar2 + 0xab0 ) = in_XMM1_Qa;
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
   LinkButton::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#3}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),LinkButton::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#3}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
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
      _DAT_00000a98 = Variant::operator_cast_to_Color((Variant*)local_48);
      /* WARNING: Does not return */
      pcVar1 = (code*)invalidInstructionException();
      _DAT_00000aa0 = in_XMM1_Qa;
      ( *pcVar1 )();
   }

   lVar2 = __dynamic_cast(*param_2, &Object::typeinfo, &LinkButton::typeinfo, 0);
   Control::get_theme_item(local_48, lVar2, 0, param_3, param_4);
   uVar3 = Variant::operator_cast_to_Color((Variant*)local_48);
   *(undefined8*)( lVar2 + 0xa98 ) = uVar3;
   *(undefined8*)( lVar2 + 0xaa0 ) = in_XMM1_Qa;
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
   LinkButton::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#2}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),LinkButton::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#2}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
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
      _DAT_00000a88 = Variant::operator_cast_to_Color((Variant*)local_48);
      /* WARNING: Does not return */
      pcVar1 = (code*)invalidInstructionException();
      _DAT_00000a90 = in_XMM1_Qa;
      ( *pcVar1 )();
   }

   lVar2 = __dynamic_cast(*param_2, &Object::typeinfo, &LinkButton::typeinfo, 0);
   Control::get_theme_item(local_48, lVar2, 0, param_3, param_4);
   uVar3 = Variant::operator_cast_to_Color((Variant*)local_48);
   *(undefined8*)( lVar2 + 0xa88 ) = uVar3;
   *(undefined8*)( lVar2 + 0xa90 ) = in_XMM1_Qa;
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
   LinkButton::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#5}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),LinkButton::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#5}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
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
      _DAT_00000ab8 = Variant::operator_cast_to_Color((Variant*)local_48);
      /* WARNING: Does not return */
      pcVar1 = (code*)invalidInstructionException();
      _DAT_00000ac0 = in_XMM1_Qa;
      ( *pcVar1 )();
   }

   lVar2 = __dynamic_cast(*param_2, &Object::typeinfo, &LinkButton::typeinfo, 0);
   Control::get_theme_item(local_48, lVar2, 0, param_3, param_4);
   uVar3 = Variant::operator_cast_to_Color((Variant*)local_48);
   *(undefined8*)( lVar2 + 0xab8 ) = uVar3;
   *(undefined8*)( lVar2 + 0xac0 ) = in_XMM1_Qa;
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
   LinkButton::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#7}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),LinkButton::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#7}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
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
      _DAT_00000ad8 = Variant::operator_cast_to_Color((Variant*)local_48);
      /* WARNING: Does not return */
      pcVar1 = (code*)invalidInstructionException();
      _DAT_00000ae0 = in_XMM1_Qa;
      ( *pcVar1 )();
   }

   lVar2 = __dynamic_cast(*param_2, &Object::typeinfo, &LinkButton::typeinfo, 0);
   Control::get_theme_item(local_48, lVar2, 0, param_3, param_4);
   uVar3 = Variant::operator_cast_to_Color((Variant*)local_48);
   *(undefined8*)( lVar2 + 0xad8 ) = uVar3;
   *(undefined8*)( lVar2 + 0xae0 ) = in_XMM1_Qa;
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
   LinkButton::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#11}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),LinkButton::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#11}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
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
      _DAT_00000af8 = Variant::operator_cast_to_Color((Variant*)local_48);
      /* WARNING: Does not return */
      pcVar1 = (code*)invalidInstructionException();
      _DAT_00000b00 = in_XMM1_Qa;
      ( *pcVar1 )();
   }

   lVar2 = __dynamic_cast(*param_2, &Object::typeinfo, &LinkButton::typeinfo, 0);
   Control::get_theme_item(local_48, lVar2, 0, param_3, param_4);
   uVar3 = Variant::operator_cast_to_Color((Variant*)local_48);
   *(undefined8*)( lVar2 + 0xaf8 ) = uVar3;
   *(undefined8*)( lVar2 + 0xb00 ) = in_XMM1_Qa;
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
   LinkButton::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#6}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),LinkButton::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#6}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
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
      _DAT_00000ac8 = Variant::operator_cast_to_Color((Variant*)local_48);
      /* WARNING: Does not return */
      pcVar1 = (code*)invalidInstructionException();
      _DAT_00000ad0 = in_XMM1_Qa;
      ( *pcVar1 )();
   }

   lVar2 = __dynamic_cast(*param_2, &Object::typeinfo, &LinkButton::typeinfo, 0);
   Control::get_theme_item(local_48, lVar2, 0, param_3, param_4);
   uVar3 = Variant::operator_cast_to_Color((Variant*)local_48);
   *(undefined8*)( lVar2 + 0xac8 ) = uVar3;
   *(undefined8*)( lVar2 + 0xad0 ) = in_XMM1_Qa;
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
   LinkButton::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#9}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),LinkButton::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#9}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
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
      _DAT_00000af0 = 0;
      /* WARNING: Does not return */
      pcVar1 = (code*)invalidInstructionException();
      ( *pcVar1 )();
   }

   lVar3 = __dynamic_cast(*param_2, &Object::typeinfo, &LinkButton::typeinfo, 0);
   Control::get_theme_item(local_48, lVar3, 3, param_3, param_4);
   iVar2 = Variant::operator_cast_to_int((Variant*)local_48);
   *(int*)( lVar3 + 0xaf0 ) = iVar2;
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
   LinkButton::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#10}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),LinkButton::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#10}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
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
      _DAT_00000af4 = 0;
      /* WARNING: Does not return */
      pcVar1 = (code*)invalidInstructionException();
      ( *pcVar1 )();
   }

   lVar3 = __dynamic_cast(*param_2, &Object::typeinfo, &LinkButton::typeinfo, 0);
   Control::get_theme_item(local_48, lVar3, 1, param_3, param_4);
   iVar2 = Variant::operator_cast_to_int((Variant*)local_48);
   *(int*)( lVar3 + 0xaf4 ) = iVar2;
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
   LinkButton::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#12}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),LinkButton::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#12}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
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
      _DAT_00000b08 = 0;
      /* WARNING: Does not return */
      pcVar1 = (code*)invalidInstructionException();
      ( *pcVar1 )();
   }

   lVar3 = __dynamic_cast(*param_2, &Object::typeinfo, &LinkButton::typeinfo, 0);
   Control::get_theme_item(local_48, lVar3, 1, param_3, param_4);
   iVar2 = Variant::operator_cast_to_int((Variant*)local_48);
   *(int*)( lVar3 + 0xb08 ) = iVar2;
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
   LinkButton::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#8}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),LinkButton::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#8}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
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

   lVar4 = __dynamic_cast(*param_2, &Object::typeinfo, &LinkButton::typeinfo, 0);
   Control::get_theme_item(local_48, lVar4, 2, param_3, param_4);
   pOVar5 = (Object*)Variant::get_validated_object();
   pOVar1 = *(Object**)( lVar4 + 0xae8 );
   if (pOVar5 == pOVar1) goto LAB_00100c70;
   if (pOVar5 == (Object*)0x0) {
      if (pOVar1 == (Object*)0x0) goto LAB_00100c70;
      *(undefined8*)( lVar4 + 0xae8 ) = 0;
   }
 else {
      pOVar5 = (Object*)__dynamic_cast(pOVar5, &Object::typeinfo, &Font::typeinfo, 0);
      if (pOVar1 == pOVar5) goto LAB_00100c70;
      *(Object**)( lVar4 + 0xae8 ) = pOVar5;
      if (pOVar5 != (Object*)0x0) {
         cVar3 = RefCounted::reference();
         if (cVar3 == '\0') {
            *(undefined8*)( lVar4 + 0xae8 ) = 0;
         }

      }

      if (pOVar1 == (Object*)0x0) goto LAB_00100c70;
   }

   cVar3 = RefCounted::unreference();
   if (cVar3 != '\0') {
      cVar3 = predelete_handler(pOVar1);
      if (cVar3 != '\0') {
         ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
         Memory::free_static(pOVar1, false);
      }

   }

   LAB_00100c70:if (Variant::needs_deinit[local_48[0]] != '\0') {
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
/* LinkButton::set_uri(String const&) */void LinkButton::set_uri(LinkButton *this, String *param_1) {
   if (*(long*)( this + 0xa60 ) != *(long*)param_1) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0xa60 ), (CowData*)param_1);
      return;
   }

   return;
}
/* LinkButton::get_language() const */void LinkButton::get_language(void) {
   long in_RSI;
   CowData<char32_t> *in_RDI;
   *(undefined8*)in_RDI = 0;
   if (*(long*)( in_RSI + 0xa68 ) != 0) {
      CowData<char32_t>::_ref(in_RDI, (CowData*)( in_RSI + 0xa68 ));
   }

   return;
}
/* LinkButton::get_uri() const */void LinkButton::get_uri(void) {
   long in_RSI;
   CowData<char32_t> *in_RDI;
   *(undefined8*)in_RDI = 0;
   if (*(long*)( in_RSI + 0xa60 ) != 0) {
      CowData<char32_t>::_ref(in_RDI, (CowData*)( in_RSI + 0xa60 ));
   }

   return;
}
/* LinkButton::get_text() const */void LinkButton::get_text(void) {
   long in_RSI;
   CowData<char32_t> *in_RDI;
   *(undefined8*)in_RDI = 0;
   if (*(long*)( in_RSI + 0xa40 ) != 0) {
      CowData<char32_t>::_ref(in_RDI, (CowData*)( in_RSI + 0xa40 ));
   }

   return;
}
/* LinkButton::_shape() */void LinkButton::_shape(LinkButton *this) {
   uint uVar1;
   undefined8 uVar2;
   code *pcVar3;
   char cVar4;
   byte bVar5;
   Object *pOVar6;
   long in_FS_OFFSET;
   Object *local_70;
   undefined8 local_68;
   Array local_60[8];
   undefined8 local_58;
   undefined1 local_50[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_70 = (Object*)0x0;
   if (*(Object**)( this + 0xae8 ) != (Object*)0x0) {
      local_70 = *(Object**)( this + 0xae8 );
      cVar4 = RefCounted::reference();
      if (cVar4 == '\0') {
         local_70 = (Object*)0x0;
      }

   }

   uVar1 = *(uint*)( this + 0xaf0 );
   TextLine::clear();
   if (*(int*)( this + 0xa70 ) == 3) {
      uVar2 = *(undefined8*)( this + 0xa50 );
      bVar5 = ( **(code**)( *(long*)this + 0x340 ) )(this);
      TextLine::set_direction(uVar2, bVar5 + 1);
   }
 else {
      TextLine::set_direction(*(undefined8*)( this + 0xa50 ));
   }

   pOVar6 = *(Object**)( TextServerManager::singleton + 0x178 );
   if (pOVar6 == (Object*)0x0) {
      /* WARNING: Does not return */
      pcVar3 = (code*)invalidInstructionException();
      ( *pcVar3 )();
   }

   cVar4 = RefCounted::reference();
   if (cVar4 == '\0') {
      pOVar6 = (Object*)0x0;
   }

   pcVar3 = *(code**)( *(long*)pOVar6 + 0x5c0 );
   ( **(code**)( *(long*)this + 0x2e8 ) )(local_60, this, *(undefined4*)( this + 0xa74 ), this + 0xa78, (Ref*)( this + 0xa48 ));
   local_68 = TextLine::get_rid();
   ( *pcVar3 )(pOVar6, &local_68, local_60);
   Array::~Array(local_60);
   cVar4 = RefCounted::unreference();
   if (cVar4 != '\0') {
      cVar4 = predelete_handler(pOVar6);
      if (cVar4 != '\0') {
         ( **(code**)( *(long*)pOVar6 + 0x140 ) )(pOVar6);
         Memory::free_static(pOVar6, false);
      }

   }

   local_58 = 0;
   local_50 = (undefined1[16])0x0;
   TextLine::add_string(*(String**)( this + 0xa50 ), (Ref*)( this + 0xa48 ), (int)&local_70, (String*)(ulong)uVar1, (Variant*)( this + 0xa68 ));
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   if (local_70 != (Object*)0x0) {
      cVar4 = RefCounted::unreference();
      pOVar6 = local_70;
      if (cVar4 != '\0') {
         cVar4 = predelete_handler(local_70);
         if (cVar4 != '\0') {
            ( **(code**)( *(long*)pOVar6 + 0x140 ) )(pOVar6);
            Memory::free_static(pOVar6, false);
         }

      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* LinkButton::set_structured_text_bidi_override(TextServer::StructuredTextParser) */void LinkButton::set_structured_text_bidi_override(LinkButton *this, int param_2) {
   if (*(int*)( this + 0xa74 ) == param_2) {
      return;
   }

   *(int*)( this + 0xa74 ) = param_2;
   _shape(this);
   CanvasItem::queue_redraw();
   return;
}
/* LinkButton::set_structured_text_bidi_override_options(Array) */void LinkButton::set_structured_text_bidi_override_options(LinkButton *this, Array *param_2) {
   Array::operator =((Array*)( this + 0xa78 ), param_2);
   _shape(this);
   CanvasItem::queue_redraw();
   return;
}
/* LinkButton::set_text_direction(Control::TextDirection) */void LinkButton::set_text_direction(LinkButton *this, int param_2) {
   if (( -2 < param_2 ) && ( param_2 < 4 )) {
      if (*(int*)( this + 0xa70 ) == param_2) {
         return;
      }

      *(int*)( this + 0xa70 ) = param_2;
      _shape(this);
      CanvasItem::queue_redraw();
      return;
   }

   _err_print_error("set_text_direction", "scene/gui/link_button.cpp", 0x57, "Condition \"(int)p_text_direction < -1 || (int)p_text_direction > 3\" is true.", 0, 0);
   return;
}
/* LinkButton::set_language(String const&) */void LinkButton::set_language(LinkButton *this, String *param_1) {
   char cVar1;
   cVar1 = String::operator !=((String*)( this + 0xa68 ), param_1);
   if (cVar1 == '\0') {
      return;
   }

   if (*(long*)( this + 0xa68 ) != *(long*)param_1) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0xa68 ), (CowData*)param_1);
   }

   _shape(this);
   CanvasItem::queue_redraw();
   return;
}
/* LinkButton::get_button_font() const */void LinkButton::get_button_font(void) {
   char cVar1;
   long in_RSI;
   long *in_RDI;
   *in_RDI = 0;
   if (*(long*)( in_RSI + 0xae8 ) != 0) {
      *in_RDI = *(long*)( in_RSI + 0xae8 );
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
         *in_RDI = 0;
      }

   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* LinkButton::_notification(int) */void LinkButton::_notification(LinkButton *this, int param_1) {
   code *pcVar1;
   long lVar2;
   char cVar3;
   undefined4 uVar4;
   bool bVar5;
   undefined8 uVar6;
   int iVar7;
   Object *pOVar8;
   long in_FS_OFFSET;
   float fVar9;
   float fVar10;
   float fVar11;
   undefined8 uVar12;
   float fVar13;
   int iVar14;
   long local_90;
   long local_88;
   long local_80;
   undefined8 uStack_78;
   ulong uStack_70;
   undefined8 local_68;
   undefined8 uStack_60;
   undefined8 uStack_58;
   undefined8 uStack_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 == 0x31) {
      LAB_00101241:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         CanvasItem::queue_redraw();
         return;
      }

   }
 else {
      if (param_1 < 0x32) {
         if (param_1 == 0x1e) {
            uVar6 = *(undefined8*)( this + 0x428 );
            uVar12 = Control::get_size();
            fVar13 = (float)uVar12;
            uStack_60 = CONCAT44(_LC29, _UNK_0010e918);
            local_68 = __LC26;
            uVar4 = BaseButton::get_draw_mode();
            switch (uVar4) {
               case 0:
          cVar3 = Control::has_focus();
          if (cVar3 == '\0') {
            local_68 = *(undefined8 *)(this + 0xa88);
            uStack_60 = *(undefined8 *)(this + 0xa90);
          }
          else {
            local_68 = *(undefined8 *)(this + 0xa98);
            uStack_60 = *(undefined8 *)(this + 0xaa0);
          }
          FUN_0010138f();
          return;
               case 1:
               case 4:
          goto switchD_001015e7_caseD_1;
               case 2:
          local_68 = *(undefined8 *)(this + 0xab8);
          uStack_60 = *(undefined8 *)(this + 0xac0);
          FUN_0010138f();
          return;
               case 3:
          local_68 = *(undefined8 *)(this + 0xad8);
          uStack_60 = *(undefined8 *)(this + 0xae0);
          FUN_0010138f();
          return;
               default:
          FUN_0010138f();
          return;
            }

         }

         if (param_1 == 0x2d) {
            LAB_00101231:_shape(this);
            Control::update_minimum_size();
            goto LAB_00101241;
         }

      }
 else if (param_1 == 0x7da) {
         StringName::StringName((StringName*)&local_90, "", false);
         cVar3 = Node::can_auto_translate();
         if (cVar3 == '\0') {
            local_88 = 0;
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_88, (CowData*)( this + 0xa40 ));
         }
 else {
            StringName::StringName((StringName*)&local_80, (String*)( this + 0xa40 ), false);
            Object::tr((StringName*)&local_88, (StringName*)this);
            if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
               StringName::unref();
            }

         }

         if (*(long*)( this + 0xa48 ) != local_88) {
            CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0xa48 ));
            lVar2 = local_88;
            local_88 = 0;
            *(long*)( this + 0xa48 ) = lVar2;
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
         if (( StringName::configured != '\0' ) && ( local_90 != 0 )) {
            StringName::unref();
         }

         goto LAB_00101231;
      }

      LAB_00101570:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
   switchD_001015e7_caseD_1:local_80 = 0;
   if ((_notification(int)::{lambda()
   #1
   (iVar14 = __cxa_guard_acquire(&_notification(int)::{lambda()
   #1
   iVar14 != 0))
   {
      _scs_create((char *)&_notification(int)::{lambda()
      #1
      __cxa_atexit(StringName::~StringName, &_notification(int)::{lambda()#1}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_notification(int)::{lambda()#1}::operator()()::sname);
  }
  cVar3 = Control::has_theme_color
                    ((StringName *)this,
                     (StringName *)&_notification(int)::{lambda()#1}::operator()()::sname);
  if ((StringName::configured != '\0') && (local_80 != 0)) {
    StringName::unref();
  }
  if (cVar3 == '\0') {
    local_68 = *(undefined8 *)(this + 0xa88);
    uStack_60 = *(undefined8 *)(this + 0xa90);
  }
  else {
    local_68 = *(undefined8 *)(this + 0xaa8);
    uStack_60 = *(undefined8 *)(this + 0xab0);
  }
  iVar14 = *(int *)(this + 0xa58);
  cVar3 = Control::has_focus();
  if (cVar3 != '\0'), {
               pOVar8 = *(Object**)( this + 0xa80 );
               if (pOVar8 == (Object*)0x0) {
                  /* WARNING: Does not return */
                  pcVar1 = (code*)invalidInstructionException();
                  ( *pcVar1 )();
               }

               cVar3 = RefCounted::reference();
               if (cVar3 == '\0') {
                  pOVar8 = (Object*)0x0;
               }

               uStack_58 = 0;
               uStack_50 = uVar12;
               ( **(code**)( *(long*)pOVar8 + 0x1d8 ) )(pOVar8, uVar6, &uStack_58);
               cVar3 = RefCounted::unreference();
               if (( cVar3 != '\0' ) && ( cVar3 = cVar3 != '\0' )) {
                  ( **(code**)( *(long*)pOVar8 + 0x140 ) )(pOVar8);
                  Memory::free_static(pOVar8, false);
               }

            }
, fVar9 = (float), TextLine::get_line_width();
      uStack_58 = *(undefined8*)( this + 0xaf8 );
      uStack_50 = *(undefined8*)( this + 0xb00 );
      iVar7 = *(int*)( this + 0xaf4 );
      cVar3 = ( **(code**)( *(long*)this + 0x340 ) )(this);
      if (cVar3 == '\0') {
         if (( 0 < iVar7 ) && ( 0.0 < uStack_50._4_4_ )) {
            uStack_70 = 0;
            TextLine::draw_outline(*(undefined8*)( this + 0xa50 ), *(undefined8*)( this + 0x428 ), &uStack_70, iVar7, &uStack_58);
         }

         uStack_70 = 0;
         uVar6 = *(undefined8*)( this + 0xa50 );
      }
 else {
         fVar10 = fVar13 - (float)(int)fVar9;
         if (( 0 < iVar7 ) && ( 0.0 < uStack_50._4_4_ )) {
            uStack_70 = (ulong)(uint)fVar10;
            TextLine::draw_outline(*(undefined8*)( this + 0xa50 ), *(undefined8*)( this + 0x428 ), &uStack_70, iVar7, &uStack_58);
         }

         uVar6 = *(undefined8*)( this + 0xa50 );
         uStack_70 = (ulong)(uint)fVar10;
      }

      TextLine::draw(uVar6, *(undefined8*)( this + 0x428 ), (Vector2*)&uStack_70, &local_68);
      if (iVar14 != 2) {
         iVar7 = 1;
         iVar14 = *(int*)( this + 0xb08 );
         fVar10 = (float)TextLine::get_line_underline_position();
         fVar11 = (float)TextLine::get_line_ascent();
         iVar14 = (int)( fVar11 + (float)(int)( (float)iVar14 + fVar10 ) );
         fVar10 = (float)TextLine::get_line_underline_thickness();
         if (_LC29 <= fVar10) {
            iVar7 = (int)fVar10;
         }

         cVar3 = ( **(code**)( *(long*)this + 0x340 ) )(this);
         bVar5 = SUB81(&local_68, 0);
         if (cVar3 == '\0') {
            fVar13 = (float)iVar14;
            uStack_78 = CONCAT44(fVar13, (float)(int)fVar9);
            uStack_70 = (ulong)(uint)fVar13 << 0x20;
            CanvasItem::draw_line((Vector2*)this, (Vector2*)&uStack_70, (Color*)&uStack_78, (float)iVar7, bVar5);
         }
 else {
            fVar10 = (float)iVar14;
            uStack_70 = CONCAT44(fVar10, fVar13);
            uStack_78 = CONCAT44(fVar10, fVar13 - (float)(int)fVar9);
            CanvasItem::draw_line((Vector2*)this, (Vector2*)&uStack_78, (Vector2*)&uStack_70, (float)iVar7, bVar5);
         }

      }

      goto LAB_00101570;
   }

   void FUN_0010138f(void) {
      code *pcVar1;
      char cVar2;
      bool bVar3;
      Vector2 *unaff_RBX;
      undefined8 uVar4;
      float unaff_R12D;
      char unaff_R14B;
      int iVar5;
      Object *pOVar6;
      long in_FS_OFFSET;
      float fVar7;
      float fVar8;
      float fVar9;
      int iVar10;
      undefined8 in_stack_00000010;
      undefined8 in_stack_00000040;
      ulong in_stack_00000048;
      undefined8 in_stack_00000060;
      long in_stack_00000078;
      cVar2 = Control::has_focus();
      if (cVar2 != '\0') {
         pOVar6 = *(Object**)( unaff_RBX + 0xa80 );
         if (pOVar6 == (Object*)0x0) {
            /* WARNING: Does not return */
            pcVar1 = (code*)invalidInstructionException();
            ( *pcVar1 )();
         }

         cVar2 = RefCounted::reference();
         if (cVar2 == '\0') {
            pOVar6 = (Object*)0x0;
         }

         in_stack_00000060 = 0;
         ( **(code**)( *(long*)pOVar6 + 0x1d8 ) )(pOVar6);
         cVar2 = RefCounted::unreference();
         if (cVar2 != '\0') {
            cVar2 = predelete_handler(pOVar6);
            if (cVar2 != '\0') {
               ( **(code**)( *(long*)pOVar6 + 0x140 ) )(pOVar6);
               Memory::free_static(pOVar6, false);
            }

         }

      }

      fVar7 = (float)TextLine::get_line_width();
      in_stack_00000060 = *(undefined8*)( unaff_RBX + 0xaf8 );
      uVar4 = *(undefined8*)( unaff_RBX + 0xb00 );
      iVar10 = *(int*)( unaff_RBX + 0xaf4 );
      cVar2 = ( **(code**)( *(long*)unaff_RBX + 0x340 ) )();
      fVar9 = (float)( (ulong)uVar4 >> 0x20 );
      if (cVar2 == '\0') {
         if (( 0 < iVar10 ) && ( 0.0 < fVar9 )) {
            in_stack_00000048 = 0;
            TextLine::draw_outline(*(undefined8*)( unaff_RBX + 0xa50 ), *(undefined8*)( unaff_RBX + 0x428 ), &stack0x00000048, iVar10, &stack0x00000060);
         }

         in_stack_00000048 = 0;
         uVar4 = *(undefined8*)( unaff_RBX + 0xa50 );
      }
 else {
         fVar8 = unaff_R12D - (float)(int)fVar7;
         if (( 0 < iVar10 ) && ( 0.0 < fVar9 )) {
            in_stack_00000048 = (ulong)(uint)fVar8;
            TextLine::draw_outline(*(undefined8*)( unaff_RBX + 0xa50 ), *(undefined8*)( unaff_RBX + 0x428 ), &stack0x00000048, iVar10, &stack0x00000060);
         }

         uVar4 = *(undefined8*)( unaff_RBX + 0xa50 );
         in_stack_00000048 = (ulong)(uint)fVar8;
      }

      TextLine::draw(uVar4, *(undefined8*)( unaff_RBX + 0x428 ), (Vector2*)&stack0x00000048, &stack0x00000050);
      if (unaff_R14B != '\0') {
         iVar5 = 1;
         iVar10 = *(int*)( unaff_RBX + 0xb08 );
         fVar9 = (float)TextLine::get_line_underline_position();
         fVar8 = (float)TextLine::get_line_ascent();
         iVar10 = (int)( fVar8 + (float)(int)( (float)iVar10 + fVar9 ) );
         fVar9 = (float)TextLine::get_line_underline_thickness();
         if (_LC29 <= fVar9) {
            iVar5 = (int)fVar9;
         }

         cVar2 = ( **(code**)( *(long*)unaff_RBX + 0x340 ) )();
         bVar3 = SUB81(&stack0x00000050, 0);
         if (cVar2 == '\0') {
            fVar9 = (float)iVar10;
            in_stack_00000040 = CONCAT44(fVar9, (float)(int)fVar7);
            in_stack_00000048 = (ulong)(uint)fVar9 << 0x20;
            CanvasItem::draw_line(unaff_RBX, (Vector2*)&stack0x00000048, (Color*)&stack0x00000040, (float)iVar5, bVar3);
         }
 else {
            fVar9 = (float)iVar10;
            in_stack_00000048 = CONCAT44(fVar9, unaff_R12D);
            in_stack_00000040 = CONCAT44(fVar9, in_stack_00000010._4_4_ - (float)(int)fVar7);
            CanvasItem::draw_line(unaff_RBX, (Vector2*)&stack0x00000040, (Vector2*)&stack0x00000048, (float)iVar5, bVar3);
         }

      }

      if (in_stack_00000078 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* LinkButton::set_text(String const&) */
   void LinkButton::set_text(LinkButton *this, String *param_1) {
      long *plVar1;
      String *this_00;
      char cVar2;
      long lVar3;
      long lVar4;
      long in_FS_OFFSET;
      bool bVar5;
      long local_48;
      long local_40;
      long local_38;
      long local_30;
      this_00 = (String*)( this + 0xa40 );
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      cVar2 = String::operator ==(this_00, param_1);
      if (cVar2 == '\0') {
         if (*(long*)( this + 0xa40 ) != *(long*)param_1) {
            CowData<char32_t>::_ref((CowData<char32_t>*)this_00, (CowData*)param_1);
         }

         StringName::StringName((StringName*)&local_48, "", false);
         cVar2 = Node::can_auto_translate();
         if (cVar2 == '\0') {
            lVar3 = *(long*)( this + 0xa40 );
            local_40 = 0;
            if (lVar3 != 0) {
               plVar1 = (long*)( lVar3 + -0x10 );
               do {
                  lVar3 = *plVar1;
                  if (lVar3 == 0) goto LAB_00101a28;
                  LOCK();
                  lVar4 = *plVar1;
                  bVar5 = lVar3 == lVar4;
                  if (bVar5) {
                     *plVar1 = lVar3 + 1;
                     lVar4 = lVar3;
                  }

                  UNLOCK();
               }
 while ( !bVar5 );
               if (lVar4 == -1) {
                  LAB_00101a28:lVar3 = 0;
               }
 else {
                  local_40 = *(long*)( this + 0xa40 );
                  lVar3 = local_40;
               }

            }

         }
 else {
            StringName::StringName((StringName*)&local_38, this_00, false);
            Object::tr((StringName*)&local_40, (StringName*)this);
            lVar3 = local_40;
            if (( StringName::configured != '\0' ) && ( local_38 != 0 )) {
               StringName::unref();
               lVar3 = local_40;
            }

         }

         if (lVar3 != *(long*)( this + 0xa48 )) {
            CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0xa48 ));
            lVar3 = local_40;
            local_40 = 0;
            *(long*)( this + 0xa48 ) = lVar3;
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
         if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
            StringName::unref();
         }

         _shape(this);
         Control::update_minimum_size();
         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            CanvasItem::queue_redraw();
            return;
         }

      }
 else if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
   /* LinkButton::LinkButton(String const&) */
   void LinkButton::LinkButton(LinkButton *this, String *param_1) {
      undefined8 uVar1;
      undefined8 uVar2;
      char cVar3;
      TextLine *this_00;
      Object *pOVar4;
      Object *pOVar5;
      BaseButton::BaseButton((BaseButton*)this);
      *(undefined8*)( this + 0xa50 ) = 0;
      *(undefined***)this = &PTR__initialize_classv_0010e168;
      *(undefined4*)( this + 0xa58 ) = 0;
      *(undefined8*)( this + 0xa70 ) = 0;
      *(undefined1(*) [16])( this + 0xa40 ) = (undefined1[16])0x0;
      *(undefined1(*) [16])( this + 0xa60 ) = (undefined1[16])0x0;
      Array::Array((Array*)( this + 0xa78 ));
      uVar2 = _UNK_0010e918;
      uVar1 = __LC26;
      *(undefined8*)( this + 0xa80 ) = 0;
      *(undefined8*)( this + 0xae8 ) = 0;
      *(undefined8*)( this + 0xaf0 ) = 0;
      *(undefined4*)( this + 0xb08 ) = 0;
      for (int i = 0; i < 3; i++) {
         *(undefined8*)( this + ( 32*i + 2696 ) ) = uVar1;
         *(undefined8*)( this + ( 32*i + 2704 ) ) = uVar2;
         *(undefined8*)( this + ( 32*i + 2712 ) ) = uVar1;
         *(undefined8*)( this + ( 32*i + 2720 ) ) = uVar2;
      }

      *(undefined8*)( this + 0xaf8 ) = uVar1;
      *(undefined8*)( this + 0xb00 ) = uVar2;
      this_00 = (TextLine*)operator_new(0x1c0, "");
      TextLine::TextLine(this_00);
      postinitialize_handler((Object*)this_00);
      cVar3 = RefCounted::init_ref();
      if (cVar3 == '\0') {
         pOVar5 = *(Object**)( this + 0xa50 );
         if (pOVar5 == (Object*)0x0) goto LAB_00101b59;
         *(undefined8*)( this + 0xa50 ) = 0;
         cVar3 = RefCounted::unreference();
         if (cVar3 == '\0') goto LAB_00101b59;
         this_00 = (TextLine*)0x0;
         cVar3 = predelete_handler(pOVar5);
         if (cVar3 == '\0') goto LAB_00101b59;
         LAB_00101c13:( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
         Memory::free_static(pOVar5, false);
         pOVar4 = (Object*)this_00;
         if (this_00 == (TextLine*)0x0) goto LAB_00101b59;
      }
 else {
         pOVar5 = *(Object**)( this + 0xa50 );
         pOVar4 = pOVar5;
         if (this_00 != (TextLine*)pOVar5) {
            *(TextLine**)( this + 0xa50 ) = this_00;
            cVar3 = RefCounted::reference();
            if (cVar3 == '\0') {
               *(undefined8*)( this + 0xa50 ) = 0;
            }

            pOVar4 = (Object*)this_00;
            if (( ( pOVar5 != (Object*)0x0 ) && ( cVar3 = RefCounted::unreference() ),cVar3 != '\0' )) goto LAB_00101c13;
         }

      }

      cVar3 = RefCounted::unreference();
      if (( cVar3 != '\0' ) && ( cVar3 = cVar3 != '\0' )) {
         ( **(code**)( *(long*)pOVar4 + 0x140 ) )(pOVar4);
         Memory::free_static(pOVar4, false);
      }

      LAB_00101b59:Control::set_focus_mode(this, 0);
      Control::set_default_cursor_shape(this, 2);
      set_text(this, param_1);
      return;
   }

   /* LinkButton::_bind_methods() */
   void LinkButton::_bind_methods(void) {
      MethodBind *pMVar1;
      undefined8 uVar2;
      uint uVar3;
      long in_FS_OFFSET;
      undefined8 local_e8;
      undefined8 local_e0;
      undefined8 local_d8;
      long local_d0;
      long local_c8;
      long local_c0;
      char *local_b8;
      undefined8 local_b0;
      char *local_a8;
      undefined8 local_a0;
      long local_98;
      char *local_78;
      undefined8 local_70;
      undefined8 local_68;
      undefined8 uStack_60;
      code *pcStack_58;
      code *pcStack_50;
      long local_40;
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      local_70 = 0;
      local_78 = "text";
      uVar3 = ( uint ) & local_68;
      local_68 = &local_78;
      D_METHODP((char*)&local_a8, (char***)"set_text", uVar3);
      uStack_60 = 0;
      pcStack_58 = (code*)0x0;
      local_68._0_4_ = 0;
      local_68._4_4_ = 0;
      pMVar1 = create_method_bind<LinkButton,String_const&>(set_text);
      ClassDB::bind_methodfi(1, pMVar1, false, (MethodDefinition*)&local_a8, (Variant**)0x0, 0);
      if (Variant::needs_deinit[(int)local_68] != '\0') {
         Variant::_clear_internal();
      }

      MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
      D_METHODP((char*)&local_a8, (char***)"get_text", 0);
      uStack_60 = 0;
      pcStack_58 = (code*)0x0;
      local_68._0_4_ = 0;
      local_68._4_4_ = 0;
      pMVar1 = create_method_bind<LinkButton,String>(get_text);
      ClassDB::bind_methodfi(1, pMVar1, false, (MethodDefinition*)&local_a8, (Variant**)0x0, 0);
      if (Variant::needs_deinit[(int)local_68] != '\0') {
         Variant::_clear_internal();
      }

      MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
      local_78 = "direction";
      local_70 = 0;
      local_68 = &local_78;
      D_METHODP((char*)&local_a8, (char***)"set_text_direction", uVar3);
      uStack_60 = 0;
      pcStack_58 = (code*)0x0;
      local_68._0_4_ = 0;
      local_68._4_4_ = 0;
      pMVar1 = create_method_bind<LinkButton,Control::TextDirection>(set_text_direction);
      ClassDB::bind_methodfi(1, pMVar1, false, (MethodDefinition*)&local_a8, (Variant**)0x0, 0);
      if (Variant::needs_deinit[(int)local_68] != '\0') {
         Variant::_clear_internal();
      }

      MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
      D_METHODP((char*)&local_a8, (char***)"get_text_direction", 0);
      uStack_60 = 0;
      pcStack_58 = (code*)0x0;
      local_68._0_4_ = 0;
      local_68._4_4_ = 0;
      pMVar1 = create_method_bind<LinkButton,Control::TextDirection>(get_text_direction);
      ClassDB::bind_methodfi(1, pMVar1, false, (MethodDefinition*)&local_a8, (Variant**)0x0, 0);
      if (Variant::needs_deinit[(int)local_68] != '\0') {
         Variant::_clear_internal();
      }

      MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
      local_78 = "language";
      local_70 = 0;
      local_68 = &local_78;
      D_METHODP((char*)&local_a8, (char***)"set_language", uVar3);
      uStack_60 = 0;
      pcStack_58 = (code*)0x0;
      local_68._0_4_ = 0;
      local_68._4_4_ = 0;
      pMVar1 = create_method_bind<LinkButton,String_const&>(set_language);
      ClassDB::bind_methodfi(1, pMVar1, false, (MethodDefinition*)&local_a8, (Variant**)0x0, 0);
      if (Variant::needs_deinit[(int)local_68] != '\0') {
         Variant::_clear_internal();
      }

      MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
      D_METHODP((char*)&local_a8, (char***)"get_language", 0);
      uStack_60 = 0;
      pcStack_58 = (code*)0x0;
      local_68._0_4_ = 0;
      local_68._4_4_ = 0;
      pMVar1 = create_method_bind<LinkButton,String>(get_language);
      ClassDB::bind_methodfi(1, pMVar1, false, (MethodDefinition*)&local_a8, (Variant**)0x0, 0);
      if (Variant::needs_deinit[(int)local_68] != '\0') {
         Variant::_clear_internal();
      }

      MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
      local_78 = "uri";
      local_70 = 0;
      local_68 = &local_78;
      D_METHODP((char*)&local_a8, (char***)"set_uri", uVar3);
      uStack_60 = 0;
      pcStack_58 = (code*)0x0;
      local_68._0_4_ = 0;
      local_68._4_4_ = 0;
      pMVar1 = create_method_bind<LinkButton,String_const&>(set_uri);
      ClassDB::bind_methodfi(1, pMVar1, false, (MethodDefinition*)&local_a8, (Variant**)0x0, 0);
      if (Variant::needs_deinit[(int)local_68] != '\0') {
         Variant::_clear_internal();
      }

      MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
      D_METHODP((char*)&local_a8, (char***)"get_uri", 0);
      uStack_60 = 0;
      pcStack_58 = (code*)0x0;
      local_68._0_4_ = 0;
      local_68._4_4_ = 0;
      pMVar1 = create_method_bind<LinkButton,String>(get_uri);
      ClassDB::bind_methodfi(1, pMVar1, false, (MethodDefinition*)&local_a8, (Variant**)0x0, 0);
      if (Variant::needs_deinit[(int)local_68] != '\0') {
         Variant::_clear_internal();
      }

      MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
      local_78 = "underline_mode";
      local_70 = 0;
      local_68 = &local_78;
      D_METHODP((char*)&local_a8, (char***)"set_underline_mode", uVar3);
      uStack_60 = 0;
      pcStack_58 = (code*)0x0;
      local_68._0_4_ = 0;
      local_68._4_4_ = 0;
      pMVar1 = create_method_bind<LinkButton,LinkButton::UnderlineMode>(set_underline_mode);
      ClassDB::bind_methodfi(1, pMVar1, false, (MethodDefinition*)&local_a8, (Variant**)0x0, 0);
      if (Variant::needs_deinit[(int)local_68] != '\0') {
         Variant::_clear_internal();
      }

      MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
      D_METHODP((char*)&local_a8, (char***)"get_underline_mode", 0);
      uStack_60 = 0;
      pcStack_58 = (code*)0x0;
      local_68._0_4_ = 0;
      local_68._4_4_ = 0;
      pMVar1 = create_method_bind<LinkButton,LinkButton::UnderlineMode>(get_underline_mode);
      ClassDB::bind_methodfi(1, pMVar1, false, (MethodDefinition*)&local_a8, (Variant**)0x0, 0);
      if (Variant::needs_deinit[(int)local_68] != '\0') {
         Variant::_clear_internal();
      }

      MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
      local_78 = "parser";
      local_70 = 0;
      local_68 = &local_78;
      D_METHODP((char*)&local_a8, (char***)"set_structured_text_bidi_override", uVar3);
      uStack_60 = 0;
      pcStack_58 = (code*)0x0;
      local_68._0_4_ = 0;
      local_68._4_4_ = 0;
      pMVar1 = create_method_bind<LinkButton,TextServer::StructuredTextParser>(set_structured_text_bidi_override);
      ClassDB::bind_methodfi(1, pMVar1, false, (MethodDefinition*)&local_a8, (Variant**)0x0, 0);
      if (Variant::needs_deinit[(int)local_68] != '\0') {
         Variant::_clear_internal();
      }

      MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
      D_METHODP((char*)&local_a8, (char***)"get_structured_text_bidi_override", 0);
      uStack_60 = 0;
      pcStack_58 = (code*)0x0;
      local_68._0_4_ = 0;
      local_68._4_4_ = 0;
      pMVar1 = create_method_bind<LinkButton,TextServer::StructuredTextParser>(get_structured_text_bidi_override);
      ClassDB::bind_methodfi(1, pMVar1, false, (MethodDefinition*)&local_a8, (Variant**)0x0, 0);
      if (Variant::needs_deinit[(int)local_68] != '\0') {
         Variant::_clear_internal();
      }

      MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
      local_78 = "args";
      local_70 = 0;
      local_68 = &local_78;
      D_METHODP((char*)&local_a8, (char***)"set_structured_text_bidi_override_options", uVar3);
      uStack_60 = 0;
      pcStack_58 = (code*)0x0;
      local_68._0_4_ = 0;
      local_68._4_4_ = 0;
      pMVar1 = create_method_bind<LinkButton,Array>(set_structured_text_bidi_override_options);
      ClassDB::bind_methodfi(1, pMVar1, false, (MethodDefinition*)&local_a8, (Variant**)0x0, 0);
      if (Variant::needs_deinit[(int)local_68] != '\0') {
         Variant::_clear_internal();
      }

      MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
      D_METHODP((char*)&local_a8, (char***)"get_structured_text_bidi_override_options", 0);
      uStack_60 = 0;
      pcStack_58 = (code*)0x0;
      local_68._0_4_ = 0;
      local_68._4_4_ = 0;
      pMVar1 = create_method_bind<LinkButton,Array>(get_structured_text_bidi_override_options);
      ClassDB::bind_methodfi(1, pMVar1, false, (MethodDefinition*)&local_a8, (Variant**)0x0, 0);
      if (Variant::needs_deinit[(int)local_68] != '\0') {
         Variant::_clear_internal();
      }

      MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
      StringName::StringName((StringName*)&local_b8, "UNDERLINE_MODE_ALWAYS", false);
      local_c8 = 0;
      String::parse_latin1((String*)&local_c8, "UNDERLINE_MODE_ALWAYS");
      GetTypeInfo<LinkButton::UnderlineMode,void>::get_class_info((GetTypeInfo<LinkButton::UnderlineMode,void>*)&local_a8);
      local_c0 = local_98;
      local_98 = 0;
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
      local_d0 = 0;
      String::parse_latin1((String*)&local_d0, "LinkButton");
      StringName::StringName((StringName*)&local_a8, (String*)&local_d0, false);
      ClassDB::bind_integer_constant((StringName*)&local_a8, (StringName*)&local_c0, (StringName*)&local_b8, 0, false);
      if (( StringName::configured != '\0' ) && ( local_a8 != (char*)0x0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
      if (( StringName::configured != '\0' ) && ( local_c0 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
      if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
         StringName::unref();
      }

      StringName::StringName((StringName*)&local_b8, "UNDERLINE_MODE_ON_HOVER", false);
      local_c8 = 0;
      String::parse_latin1((String*)&local_c8, "UNDERLINE_MODE_ON_HOVER");
      GetTypeInfo<LinkButton::UnderlineMode,void>::get_class_info((GetTypeInfo<LinkButton::UnderlineMode,void>*)&local_a8);
      local_c0 = local_98;
      local_98 = 0;
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
      local_d0 = 0;
      String::parse_latin1((String*)&local_d0, "LinkButton");
      StringName::StringName((StringName*)&local_a8, (String*)&local_d0, false);
      ClassDB::bind_integer_constant((StringName*)&local_a8, (StringName*)&local_c0, (StringName*)&local_b8, 1, false);
      if (( StringName::configured != '\0' ) && ( local_a8 != (char*)0x0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
      if (( StringName::configured != '\0' ) && ( local_c0 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
      if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
         StringName::unref();
      }

      StringName::StringName((StringName*)&local_b8, "UNDERLINE_MODE_NEVER", false);
      local_a8 = "UNDERLINE_MODE_NEVER";
      local_c8 = 0;
      local_a0 = 0x14;
      String::parse_latin1((StrRange*)&local_c8);
      GetTypeInfo<LinkButton::UnderlineMode,void>::get_class_info((GetTypeInfo<LinkButton::UnderlineMode,void>*)&local_a8);
      local_c0 = local_98;
      local_98 = 0;
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
      local_a8 = "LinkButton";
      local_d0 = 0;
      local_a0 = 10;
      String::parse_latin1((StrRange*)&local_d0);
      StringName::StringName((StringName*)&local_a8, (String*)&local_d0, false);
      ClassDB::bind_integer_constant((StringName*)&local_a8, (StringName*)&local_c0, (StringName*)&local_b8, 2, false);
      if (( StringName::configured != '\0' ) && ( local_a8 != (char*)0x0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
      if (( StringName::configured != '\0' ) && ( local_c0 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
      if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
         StringName::unref();
      }

      _scs_create((char*)&local_c0, true);
      _scs_create((char*)&local_c8, true);
      local_d0 = 0;
      local_d8 = 0;
      String::parse_latin1((String*)&local_d8, "");
      local_a8 = "text";
      local_e0 = 0;
      local_a0 = 4;
      String::parse_latin1((StrRange*)&local_e0);
      PropertyInfo::PropertyInfo((PropertyInfo*)&local_a8, 4, (StrRange*)&local_e0, 0, (String*)&local_d8, 6, (String*)&local_d0);
      local_e8 = 0;
      local_b8 = "LinkButton";
      local_b0 = 10;
      String::parse_latin1((StrRange*)&local_e8);
      StringName::StringName((StringName*)&local_b8, (String*)&local_e8, false);
      ClassDB::add_property((StringName*)&local_b8, (PropertyInfo*)&local_a8, (StringName*)&local_c8, (StringName*)&local_c0, -1);
      if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
      if (StringName::configured != '\0') {
         if (local_d0 != 0) {
            StringName::unref();
            if (StringName::configured == '\0') goto LAB_001027f3;
         }

         if (local_c8 != 0) {
            StringName::unref();
            if (StringName::configured == '\0') goto LAB_001027f3;
         }

         if (local_c0 != 0) {
            StringName::unref();
         }

      }

      LAB_001027f3:_scs_create((char*)&local_c0, true);
      _scs_create((char*)&local_c8, true);
      local_d0 = 0;
      local_d8 = 0;
      String::parse_latin1((String*)&local_d8, "Always,On Hover,Never");
      local_e0 = 0;
      String::parse_latin1((String*)&local_e0, "underline");
      PropertyInfo::PropertyInfo((PropertyInfo*)&local_a8, 2, (StrRange*)&local_e0, 2, (String*)&local_d8, 6, (String*)&local_d0);
      local_b8 = "LinkButton";
      local_e8 = 0;
      local_b0 = 10;
      String::parse_latin1((StrRange*)&local_e8);
      StringName::StringName((StringName*)&local_b8, (String*)&local_e8, false);
      ClassDB::add_property((StringName*)&local_b8, (PropertyInfo*)&local_a8, (StringName*)&local_c8, (StringName*)&local_c0, -1);
      if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
      if (StringName::configured != '\0') {
         if (local_d0 != 0) {
            StringName::unref();
            if (StringName::configured == '\0') goto LAB_00102951;
         }

         if (local_c8 != 0) {
            StringName::unref();
            if (StringName::configured == '\0') goto LAB_00102951;
         }

         if (local_c0 != 0) {
            StringName::unref();
         }

      }

      LAB_00102951:_scs_create((char*)&local_c0, true);
      _scs_create((char*)&local_c8, true);
      local_d0 = 0;
      local_d8 = 0;
      String::parse_latin1((String*)&local_d8, "");
      local_e0 = 0;
      String::parse_latin1((String*)&local_e0, "uri");
      PropertyInfo::PropertyInfo((PropertyInfo*)&local_a8, 4, (StrRange*)&local_e0, 0, (String*)&local_d8, 6, (String*)&local_d0);
      local_e8 = 0;
      String::parse_latin1((String*)&local_e8, "LinkButton");
      StringName::StringName((StringName*)&local_b8, (String*)&local_e8, false);
      ClassDB::add_property((StringName*)&local_b8, (PropertyInfo*)&local_a8, (StringName*)&local_c8, (StringName*)&local_c0, -1);
      if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
      if (StringName::configured != '\0') {
         if (local_d0 != 0) {
            StringName::unref();
            if (StringName::configured == '\0') goto LAB_00102a9c;
         }

         if (local_c8 != 0) {
            StringName::unref();
            if (StringName::configured == '\0') goto LAB_00102a9c;
         }

         if (local_c0 != 0) {
            StringName::unref();
         }

      }

      LAB_00102a9c:local_b8 = (char*)0x0;
      local_a8 = "";
      local_a0 = 0;
      String::parse_latin1((StrRange*)&local_b8);
      local_c0 = 0;
      String::parse_latin1((String*)&local_c0, "BiDi");
      local_a8 = "LinkButton";
      local_c8 = 0;
      local_a0 = 10;
      String::parse_latin1((StrRange*)&local_c8);
      StringName::StringName((StringName*)&local_a8, (String*)&local_c8, false);
      ClassDB::add_property_group((StringName*)&local_a8, (String*)&local_c0, (String*)&local_b8, 0);
      if (( StringName::configured != '\0' ) && ( local_a8 != (char*)0x0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
      _scs_create((char*)&local_c0, true);
      _scs_create((char*)&local_c8, false);
      local_d0 = 0;
      local_d8 = 0;
      String::parse_latin1((String*)&local_d8, "Auto,Left-to-Right,Right-to-Left,Inherited");
      local_e0 = 0;
      String::parse_latin1((String*)&local_e0, "text_direction");
      PropertyInfo::PropertyInfo((PropertyInfo*)&local_a8, 2, (StrRange*)&local_e0, 2, (String*)&local_d8, 6, (String*)&local_d0);
      local_b8 = "LinkButton";
      local_e8 = 0;
      local_b0 = 10;
      String::parse_latin1((StrRange*)&local_e8);
      StringName::StringName((StringName*)&local_b8, (String*)&local_e8, false);
      ClassDB::add_property((StringName*)&local_b8, (PropertyInfo*)&local_a8, (StringName*)&local_c8, (StringName*)&local_c0, -1);
      if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
      if (StringName::configured != '\0') {
         if (local_d0 != 0) {
            StringName::unref();
            if (StringName::configured == '\0') goto LAB_00102cb4;
         }

         if (local_c8 != 0) {
            StringName::unref();
            if (StringName::configured == '\0') goto LAB_00102cb4;
         }

         if (local_c0 != 0) {
            StringName::unref();
         }

      }

      LAB_00102cb4:_scs_create((char*)&local_c0, true);
      _scs_create((char*)&local_c8, true);
      local_d0 = 0;
      local_d8 = 0;
      String::parse_latin1((String*)&local_d8, "");
      local_e0 = 0;
      String::parse_latin1((String*)&local_e0, "language");
      PropertyInfo::PropertyInfo((PropertyInfo*)&local_a8, 4, (StrRange*)&local_e0, 0x20, (String*)&local_d8, 6, (String*)&local_d0);
      local_b8 = "LinkButton";
      local_e8 = 0;
      local_b0 = 10;
      String::parse_latin1((StrRange*)&local_e8);
      StringName::StringName((StringName*)&local_b8, (String*)&local_e8, false);
      ClassDB::add_property((StringName*)&local_b8, (PropertyInfo*)&local_a8, (StringName*)&local_c8, (StringName*)&local_c0, -1);
      if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
      if (StringName::configured != '\0') {
         if (local_d0 != 0) {
            StringName::unref();
            if (StringName::configured == '\0') goto LAB_00102e13;
         }

         if (local_c8 != 0) {
            StringName::unref();
            if (StringName::configured == '\0') goto LAB_00102e13;
         }

         if (local_c0 != 0) {
            StringName::unref();
         }

      }

      LAB_00102e13:_scs_create((char*)&local_c0, true);
      _scs_create((char*)&local_c8, true);
      local_d0 = 0;
      local_d8 = 0;
      String::parse_latin1((String*)&local_d8, "Default,URI,File,Email,List,None,Custom");
      local_e0 = 0;
      String::parse_latin1((String*)&local_e0, "structured_text_bidi_override");
      PropertyInfo::PropertyInfo((PropertyInfo*)&local_a8, 2, (StrRange*)&local_e0, 2, (String*)&local_d8, 6, (String*)&local_d0);
      local_e8 = 0;
      String::parse_latin1((String*)&local_e8, "LinkButton");
      StringName::StringName((StringName*)&local_b8, (String*)&local_e8, false);
      ClassDB::add_property((StringName*)&local_b8, (PropertyInfo*)&local_a8, (StringName*)&local_c8, (StringName*)&local_c0, -1);
      if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
      if (StringName::configured != '\0') {
         if (local_d0 != 0) {
            StringName::unref();
            if (StringName::configured == '\0') goto LAB_00102f60;
         }

         if (local_c8 != 0) {
            StringName::unref();
            if (StringName::configured == '\0') goto LAB_00102f60;
         }

         if (local_c0 != 0) {
            StringName::unref();
         }

      }

      LAB_00102f60:_scs_create((char*)&local_c0, true);
      _scs_create((char*)&local_c8, true);
      local_d0 = 0;
      local_d8 = 0;
      String::parse_latin1((String*)&local_d8, "");
      local_e0 = 0;
      local_a8 = "structured_text_bidi_override_options";
      local_a0 = 0x25;
      String::parse_latin1((StrRange*)&local_e0);
      PropertyInfo::PropertyInfo((PropertyInfo*)&local_a8, 0x1c, (StrRange*)&local_e0, 0, (String*)&local_d8, 6, (String*)&local_d0);
      local_e8 = 0;
      String::parse_latin1((String*)&local_e8, "LinkButton");
      StringName::StringName((StringName*)&local_b8, (String*)&local_e8, false);
      ClassDB::add_property((StringName*)&local_b8, (PropertyInfo*)&local_a8, (StringName*)&local_c8, (StringName*)&local_c0, -1);
      if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
      if (StringName::configured != '\0') {
         if (local_d0 != 0) {
            StringName::unref();
            if (StringName::configured == '\0') goto LAB_001030bb;
         }

         if (local_c8 != 0) {
            StringName::unref();
            if (StringName::configured == '\0') goto LAB_001030bb;
         }

         if (local_c0 != 0) {
            StringName::unref();
         }

      }

      LAB_001030bb:uVar2 = ThemeDB::get_singleton();
      local_68._0_4_ = 0;
      local_68._4_4_ = 0;
      uStack_60 = 0;
      pcStack_58 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),LinkButton::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#1}>::_M_manager;
      pcStack_50 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),LinkButton::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#1}>::_M_invoke;
      StringName::StringName((StringName*)&local_a8, "focus", false);
      StringName::StringName((StringName*)&local_b8, "focus", false);
      local_c8 = 0;
      String::parse_latin1((String*)&local_c8, "LinkButton");
      StringName::StringName((StringName*)&local_c0, (String*)&local_c8, false);
      ThemeDB::bind_class_item(uVar2, 5, (String*)&local_c0, (StringName*)&local_b8, (MethodDefinition*)&local_a8, &local_68);
      if (( StringName::configured != '\0' ) && ( local_c0 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
      if (StringName::configured != '\0') {
         if (local_b8 != (char*)0x0) {
            StringName::unref();
            if (StringName::configured == '\0') goto LAB_001031a7;
         }

         if (local_a8 != (char*)0x0) {
            StringName::unref();
         }

      }

      LAB_001031a7:if (pcStack_58 != (code*)0x0) {
         ( *pcStack_58 )(&local_68, &local_68, 3);
      }

      uVar2 = ThemeDB::get_singleton();
      local_68._0_4_ = 0;
      local_68._4_4_ = 0;
      uStack_60 = 0;
      pcStack_58 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),LinkButton::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#2}>::_M_manager;
      pcStack_50 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),LinkButton::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#2}>::_M_invoke;
      StringName::StringName((StringName*)&local_a8, "font_color", false);
      StringName::StringName((StringName*)&local_b8, "font_color", false);
      local_c8 = 0;
      String::parse_latin1((String*)&local_c8, "LinkButton");
      StringName::StringName((StringName*)&local_c0, (String*)&local_c8, false);
      ThemeDB::bind_class_item(uVar2, 0, (String*)&local_c0, (StringName*)&local_b8, (MethodDefinition*)&local_a8, &local_68);
      if (( StringName::configured != '\0' ) && ( local_c0 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
      if (StringName::configured != '\0') {
         if (local_b8 != (char*)0x0) {
            StringName::unref();
            if (StringName::configured == '\0') goto LAB_001032ac;
         }

         if (local_a8 != (char*)0x0) {
            StringName::unref();
         }

      }

      LAB_001032ac:if (pcStack_58 != (code*)0x0) {
         ( *pcStack_58 )(&local_68, &local_68, 3);
      }

      uVar2 = ThemeDB::get_singleton();
      local_68._0_4_ = 0;
      local_68._4_4_ = 0;
      uStack_60 = 0;
      pcStack_58 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),LinkButton::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#3}>::_M_manager;
      pcStack_50 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),LinkButton::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#3}>::_M_invoke;
      StringName::StringName((StringName*)&local_a8, "font_focus_color", false);
      StringName::StringName((StringName*)&local_b8, "font_focus_color", false);
      local_c8 = 0;
      String::parse_latin1((String*)&local_c8, "LinkButton");
      StringName::StringName((StringName*)&local_c0, (String*)&local_c8, false);
      ThemeDB::bind_class_item(uVar2, 0, (String*)&local_c0, (StringName*)&local_b8, (MethodDefinition*)&local_a8, &local_68);
      if (( StringName::configured != '\0' ) && ( local_c0 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
      if (StringName::configured != '\0') {
         if (local_b8 != (char*)0x0) {
            StringName::unref();
            if (StringName::configured == '\0') goto LAB_001033b1;
         }

         if (local_a8 != (char*)0x0) {
            StringName::unref();
         }

      }

      LAB_001033b1:if (pcStack_58 != (code*)0x0) {
         ( *pcStack_58 )(&local_68, &local_68, 3);
      }

      uVar2 = ThemeDB::get_singleton();
      local_68._0_4_ = 0;
      local_68._4_4_ = 0;
      uStack_60 = 0;
      pcStack_58 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),LinkButton::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#4}>::_M_manager;
      pcStack_50 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),LinkButton::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#4}>::_M_invoke;
      StringName::StringName((StringName*)&local_a8, "font_pressed_color", false);
      StringName::StringName((StringName*)&local_b8, "font_pressed_color", false);
      local_c8 = 0;
      String::parse_latin1((String*)&local_c8, "LinkButton");
      StringName::StringName((StringName*)&local_c0, (String*)&local_c8, false);
      ThemeDB::bind_class_item(uVar2, 0, (String*)&local_c0, (StringName*)&local_b8, (MethodDefinition*)&local_a8, &local_68);
      if (( StringName::configured != '\0' ) && ( local_c0 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
      if (StringName::configured != '\0') {
         if (local_b8 != (char*)0x0) {
            StringName::unref();
            if (StringName::configured == '\0') goto LAB_001034b6;
         }

         if (local_a8 != (char*)0x0) {
            StringName::unref();
         }

      }

      LAB_001034b6:if (pcStack_58 != (code*)0x0) {
         ( *pcStack_58 )(&local_68, &local_68, 3);
      }

      uVar2 = ThemeDB::get_singleton();
      local_68._0_4_ = 0;
      local_68._4_4_ = 0;
      uStack_60 = 0;
      pcStack_58 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),LinkButton::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#5}>::_M_manager;
      pcStack_50 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),LinkButton::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#5}>::_M_invoke;
      StringName::StringName((StringName*)&local_a8, "font_hover_color", false);
      StringName::StringName((StringName*)&local_b8, "font_hover_color", false);
      local_c8 = 0;
      String::parse_latin1((String*)&local_c8, "LinkButton");
      StringName::StringName((StringName*)&local_c0, (String*)&local_c8, false);
      ThemeDB::bind_class_item(uVar2, 0, (String*)&local_c0, (StringName*)&local_b8, (MethodDefinition*)&local_a8, &local_68);
      if (( StringName::configured != '\0' ) && ( local_c0 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
      if (StringName::configured != '\0') {
         if (local_b8 != (char*)0x0) {
            StringName::unref();
            if (StringName::configured == '\0') goto LAB_001035bb;
         }

         if (local_a8 != (char*)0x0) {
            StringName::unref();
         }

      }

      LAB_001035bb:if (pcStack_58 != (code*)0x0) {
         ( *pcStack_58 )(&local_68, &local_68, 3);
      }

      uVar2 = ThemeDB::get_singleton();
      local_68._0_4_ = 0;
      local_68._4_4_ = 0;
      uStack_60 = 0;
      pcStack_58 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),LinkButton::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#6}>::_M_manager;
      pcStack_50 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),LinkButton::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#6}>::_M_invoke;
      StringName::StringName((StringName*)&local_a8, "font_hover_pressed_color", false);
      StringName::StringName((StringName*)&local_b8, "font_hover_pressed_color", false);
      local_c8 = 0;
      String::parse_latin1((String*)&local_c8, "LinkButton");
      StringName::StringName((StringName*)&local_c0, (String*)&local_c8, false);
      ThemeDB::bind_class_item(uVar2, 0, (String*)&local_c0, (StringName*)&local_b8, (MethodDefinition*)&local_a8, &local_68);
      if (( StringName::configured != '\0' ) && ( local_c0 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
      if (StringName::configured != '\0') {
         if (local_b8 != (char*)0x0) {
            StringName::unref();
            if (StringName::configured == '\0') goto LAB_001036c0;
         }

         if (local_a8 != (char*)0x0) {
            StringName::unref();
         }

      }

      LAB_001036c0:if (pcStack_58 != (code*)0x0) {
         ( *pcStack_58 )(&local_68, &local_68, 3);
      }

      uVar2 = ThemeDB::get_singleton();
      local_68._0_4_ = 0;
      local_68._4_4_ = 0;
      uStack_60 = 0;
      pcStack_58 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),LinkButton::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#7}>::_M_manager;
      pcStack_50 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),LinkButton::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#7}>::_M_invoke;
      StringName::StringName((StringName*)&local_a8, "font_disabled_color", false);
      StringName::StringName((StringName*)&local_b8, "font_disabled_color", false);
      local_c8 = 0;
      String::parse_latin1((String*)&local_c8, "LinkButton");
      StringName::StringName((StringName*)&local_c0, (String*)&local_c8, false);
      ThemeDB::bind_class_item(uVar2, 0, (String*)&local_c0, (StringName*)&local_b8, (MethodDefinition*)&local_a8, &local_68);
      if (( StringName::configured != '\0' ) && ( local_c0 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
      if (StringName::configured != '\0') {
         if (local_b8 != (char*)0x0) {
            StringName::unref();
            if (StringName::configured == '\0') goto LAB_001037c5;
         }

         if (local_a8 != (char*)0x0) {
            StringName::unref();
         }

      }

      LAB_001037c5:if (pcStack_58 != (code*)0x0) {
         ( *pcStack_58 )(&local_68, &local_68, 3);
      }

      uVar2 = ThemeDB::get_singleton();
      local_68._0_4_ = 0;
      local_68._4_4_ = 0;
      uStack_60 = 0;
      pcStack_58 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),LinkButton::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#8}>::_M_manager;
      pcStack_50 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),LinkButton::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#8}>::_M_invoke;
      StringName::StringName((StringName*)&local_a8, "font", false);
      StringName::StringName((StringName*)&local_b8, "font", false);
      local_c8 = 0;
      String::parse_latin1((String*)&local_c8, "LinkButton");
      StringName::StringName((StringName*)&local_c0, (String*)&local_c8, false);
      ThemeDB::bind_class_item(uVar2, 2, (String*)&local_c0, (StringName*)&local_b8, (MethodDefinition*)&local_a8, &local_68);
      if (( StringName::configured != '\0' ) && ( local_c0 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
      if (StringName::configured != '\0') {
         if (local_b8 != (char*)0x0) {
            StringName::unref();
            if (StringName::configured == '\0') goto LAB_001038cd;
         }

         if (local_a8 != (char*)0x0) {
            StringName::unref();
         }

      }

      LAB_001038cd:if (pcStack_58 != (code*)0x0) {
         ( *pcStack_58 )(&local_68, &local_68, 3);
      }

      uVar2 = ThemeDB::get_singleton();
      local_68._0_4_ = 0;
      local_68._4_4_ = 0;
      uStack_60 = 0;
      pcStack_58 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),LinkButton::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#9}>::_M_manager;
      pcStack_50 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),LinkButton::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#9}>::_M_invoke;
      StringName::StringName((StringName*)&local_b8, "font_size", false);
      StringName::StringName((StringName*)&local_c0, "font_size", false);
      local_a8 = "LinkButton";
      local_c8 = 0;
      local_a0 = 10;
      String::parse_latin1((StrRange*)&local_c8);
      StringName::StringName((StringName*)&local_a8, (String*)&local_c8, false);
      ThemeDB::bind_class_item(uVar2, 3, (MethodDefinition*)&local_a8, (String*)&local_c0, (StringName*)&local_b8, &local_68);
      if (( StringName::configured != '\0' ) && ( local_a8 != (char*)0x0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
      if (StringName::configured != '\0') {
         if (local_c0 != 0) {
            StringName::unref();
            if (StringName::configured == '\0') goto LAB_001039e6;
         }

         if (local_b8 != (char*)0x0) {
            StringName::unref();
         }

      }

      LAB_001039e6:if (pcStack_58 != (code*)0x0) {
         ( *pcStack_58 )(&local_68, &local_68, 3);
      }

      uVar2 = ThemeDB::get_singleton();
      local_68._0_4_ = 0;
      local_68._4_4_ = 0;
      uStack_60 = 0;
      pcStack_58 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),LinkButton::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#10}>::_M_manager;
      pcStack_50 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),LinkButton::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#10}>::_M_invoke;
      StringName::StringName((StringName*)&local_a8, "outline_size", false);
      StringName::StringName((StringName*)&local_b8, "outline_size", false);
      local_c8 = 0;
      String::parse_latin1((String*)&local_c8, "LinkButton");
      StringName::StringName((StringName*)&local_c0, (String*)&local_c8, false);
      ThemeDB::bind_class_item(uVar2, 1, (String*)&local_c0, (StringName*)&local_b8, (MethodDefinition*)&local_a8, &local_68);
      if (( StringName::configured != '\0' ) && ( local_c0 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
      if (StringName::configured != '\0') {
         if (local_b8 != (char*)0x0) {
            StringName::unref();
            if (StringName::configured == '\0') goto LAB_00103aee;
         }

         if (local_a8 != (char*)0x0) {
            StringName::unref();
         }

      }

      LAB_00103aee:if (pcStack_58 != (code*)0x0) {
         ( *pcStack_58 )(&local_68, &local_68, 3);
      }

      uVar2 = ThemeDB::get_singleton();
      local_68._0_4_ = 0;
      local_68._4_4_ = 0;
      uStack_60 = 0;
      pcStack_58 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),LinkButton::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#11}>::_M_manager;
      pcStack_50 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),LinkButton::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#11}>::_M_invoke;
      StringName::StringName((StringName*)&local_a8, "font_outline_color", false);
      StringName::StringName((StringName*)&local_b8, "font_outline_color", false);
      local_c8 = 0;
      String::parse_latin1((String*)&local_c8, "LinkButton");
      StringName::StringName((StringName*)&local_c0, (String*)&local_c8, false);
      ThemeDB::bind_class_item(uVar2, 0, (String*)&local_c0, (StringName*)&local_b8, (MethodDefinition*)&local_a8, &local_68);
      if (( StringName::configured != '\0' ) && ( local_c0 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
      if (StringName::configured != '\0') {
         if (local_b8 != (char*)0x0) {
            StringName::unref();
            if (StringName::configured == '\0') goto LAB_00103bf3;
         }

         if (local_a8 != (char*)0x0) {
            StringName::unref();
         }

      }

      LAB_00103bf3:if (pcStack_58 != (code*)0x0) {
         ( *pcStack_58 )(&local_68, &local_68, 3);
      }

      uVar2 = ThemeDB::get_singleton();
      local_68._0_4_ = 0;
      local_68._4_4_ = 0;
      uStack_60 = 0;
      pcStack_58 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),LinkButton::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#12}>::_M_manager;
      pcStack_50 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),LinkButton::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#12}>::_M_invoke;
      StringName::StringName((StringName*)&local_a8, "underline_spacing", false);
      StringName::StringName((StringName*)&local_b8, "underline_spacing", false);
      local_c8 = 0;
      String::parse_latin1((String*)&local_c8, "LinkButton");
      StringName::StringName((StringName*)&local_c0, (String*)&local_c8, false);
      ThemeDB::bind_class_item(uVar2, 1, (String*)&local_c0, (StringName*)&local_b8, (MethodDefinition*)&local_a8, &local_68);
      if (( StringName::configured != '\0' ) && ( local_c0 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
      if (StringName::configured != '\0') {
         if (local_b8 != (char*)0x0) {
            StringName::unref();
            if (StringName::configured == '\0') goto LAB_00103cfb;
         }

         if (local_a8 != (char*)0x0) {
            StringName::unref();
         }

      }

      LAB_00103cfb:if (pcStack_58 != (code*)0x0) {
         ( *pcStack_58 )(&local_68, &local_68, 3);
      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* DefaultAllocator::alloc(unsigned long) */
   void DefaultAllocator::alloc(ulong param_1) {
      Memory::alloc_static(param_1, false);
      return;
   }

   /* StringName::~StringName() */
   void StringName::~StringName(StringName *this) {
      if (( configured != '\0' ) && ( *(long*)this != 0 )) {
         StringName::unref();
         return;
      }

      return;
   }

   /* Object::_bind_compatibility_methods() */
   void Object::_bind_compatibility_methods(void) {
      return;
   }

   /* Object::_set(StringName const&, Variant const&) */
   undefined8 Object::_set(StringName *param_1, Variant *param_2) {
      return 0;
   }

   /* Object::_get(StringName const&, Variant&) const */
   undefined8 Object::_get(StringName *param_1, Variant *param_2) {
      return 0;
   }

   /* Object::_get_property_list(List<PropertyInfo, DefaultAllocator>*) const */
   void Object::_get_property_list(List *param_1) {
      return;
   }

   /* Object::_validate_property(PropertyInfo&) const */
   void Object::_validate_property(PropertyInfo *param_1) {
      return;
   }

   /* Object::_property_can_revert(StringName const&) const */
   undefined8 Object::_property_can_revert(StringName *param_1) {
      return 0;
   }

   /* Object::_property_get_revert(StringName const&, Variant&) const */
   undefined8 Object::_property_get_revert(StringName *param_1, Variant *param_2) {
      return 0;
   }

   /* Object::_notification(int) */
   void Object::_notification(int param_1) {
      return;
   }

   /* Object::get_save_class() const */
   void Object::get_save_class(void) {
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

   /* MethodBind::is_valid() const */
   undefined8 MethodBind::is_valid(void) {
      return 1;
   }

   /* MethodBind::is_vararg() const */
   undefined8 MethodBind::is_vararg(void) {
      return 0;
   }

   /* Control::_top_level_changed() */
   void Control::_top_level_changed(void) {
      return;
   }

   /* LinkButton::is_class_ptr(void*) const */
   uint LinkButton::is_class_ptr(void *param_1) {
      undefined4 in_EDX;
      undefined4 *in_RSI;
      return (uint)CONCAT71(0x10e8, in_RSI == &BaseButton::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10e8, in_RSI == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10e8, in_RSI == &Control::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10e8, in_RSI == &CanvasItem::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10e8, in_RSI == &Node::get_class_ptr_static(), ::ptr) | CONCAT31(( int3 )((uint)in_EDX >> 8), in_RSI == &Object::get_class_ptr_static(), ::ptr);
   }

   /* MethodBindTRC<Array>::_gen_argument_type(int) const */
   undefined8 MethodBindTRC<Array>::_gen_argument_type(int param_1) {
      return 0x1c;
   }

   /* MethodBindTRC<Array>::get_argument_meta(int) const */
   undefined8 MethodBindTRC<Array>::get_argument_meta(int param_1) {
      return 0;
   }

   /* MethodBindT<Array>::_gen_argument_type(int) const */
   byte MethodBindT<Array>::_gen_argument_type(MethodBindT<Array> *this, int param_1) {
      return -(param_1 == 0) & 0x1c;
   }

   /* MethodBindT<Array>::get_argument_meta(int) const */
   undefined8 MethodBindT<Array>::get_argument_meta(int param_1) {
      return 0;
   }

   /* MethodBindTRC<TextServer::StructuredTextParser>::_gen_argument_type(int) const */
   undefined8 MethodBindTRC<TextServer::StructuredTextParser>::_gen_argument_type(int param_1) {
      return 2;
   }

   /* MethodBindTRC<TextServer::StructuredTextParser>::get_argument_meta(int) const */
   undefined8 MethodBindTRC<TextServer::StructuredTextParser>::get_argument_meta(int param_1) {
      return 0;
   }

   /* MethodBindT<TextServer::StructuredTextParser>::_gen_argument_type(int) const */
   char MethodBindT<TextServer::StructuredTextParser>::_gen_argument_type(MethodBindT<TextServer::StructuredTextParser> *this, int param_1) {
      return ( param_1 == 0 ) * '\x02';
   }

   /* MethodBindT<TextServer::StructuredTextParser>::get_argument_meta(int) const */
   undefined8 MethodBindT<TextServer::StructuredTextParser>::get_argument_meta(int param_1) {
      return 0;
   }

   /* MethodBindTRC<LinkButton::UnderlineMode>::_gen_argument_type(int) const */
   undefined8 MethodBindTRC<LinkButton::UnderlineMode>::_gen_argument_type(int param_1) {
      return 2;
   }

   /* MethodBindTRC<LinkButton::UnderlineMode>::get_argument_meta(int) const */
   undefined8 MethodBindTRC<LinkButton::UnderlineMode>::get_argument_meta(int param_1) {
      return 0;
   }

   /* MethodBindT<LinkButton::UnderlineMode>::_gen_argument_type(int) const */
   char MethodBindT<LinkButton::UnderlineMode>::_gen_argument_type(MethodBindT<LinkButton::UnderlineMode> *this, int param_1) {
      return ( param_1 == 0 ) * '\x02';
   }

   /* MethodBindT<LinkButton::UnderlineMode>::get_argument_meta(int) const */
   undefined8 MethodBindT<LinkButton::UnderlineMode>::get_argument_meta(int param_1) {
      return 0;
   }

   /* MethodBindTRC<Control::TextDirection>::_gen_argument_type(int) const */
   undefined8 MethodBindTRC<Control::TextDirection>::_gen_argument_type(int param_1) {
      return 2;
   }

   /* MethodBindTRC<Control::TextDirection>::get_argument_meta(int) const */
   undefined8 MethodBindTRC<Control::TextDirection>::get_argument_meta(int param_1) {
      return 0;
   }

   /* MethodBindT<Control::TextDirection>::_gen_argument_type(int) const */
   char MethodBindT<Control::TextDirection>::_gen_argument_type(MethodBindT<Control::TextDirection> *this, int param_1) {
      return ( param_1 == 0 ) * '\x02';
   }

   /* MethodBindT<Control::TextDirection>::get_argument_meta(int) const */
   undefined8 MethodBindT<Control::TextDirection>::get_argument_meta(int param_1) {
      return 0;
   }

   /* MethodBindTRC<String>::_gen_argument_type(int) const */
   undefined8 MethodBindTRC<String>::_gen_argument_type(int param_1) {
      return 4;
   }

   /* MethodBindTRC<String>::get_argument_meta(int) const */
   undefined8 MethodBindTRC<String>::get_argument_meta(int param_1) {
      return 0;
   }

   /* MethodBindT<String const&>::_gen_argument_type(int) const */
   long MethodBindT<String_const&>::_gen_argument_type(MethodBindT<String_const&> *this, int param_1) {
      return ( ulong )(param_1 == 0) << 2;
   }

   /* MethodBindT<String const&>::get_argument_meta(int) const */
   undefined8 MethodBindT<String_const&>::get_argument_meta(int param_1) {
      return 0;
   }

   /* MethodBindT<Control::TextDirection>::~MethodBindT() */
   void MethodBindT<Control::TextDirection>::~MethodBindT(MethodBindT<Control::TextDirection> *this) {
      *(undefined***)this = &PTR__gen_argument_type_0010e5a0;
      MethodBind::~MethodBind((MethodBind*)this);
      return;
   }

   /* MethodBindT<Control::TextDirection>::~MethodBindT() */
   void MethodBindT<Control::TextDirection>::~MethodBindT(MethodBindT<Control::TextDirection> *this) {
      *(undefined***)this = &PTR__gen_argument_type_0010e5a0;
      MethodBind::~MethodBind((MethodBind*)this);
      operator_delete(this, 0x68);
      return;
   }

   /* MethodBindTRC<Control::TextDirection>::~MethodBindTRC() */
   void MethodBindTRC<Control::TextDirection>::~MethodBindTRC(MethodBindTRC<Control::TextDirection> *this) {
      *(undefined***)this = &PTR__gen_argument_type_0010e600;
      MethodBind::~MethodBind((MethodBind*)this);
      return;
   }

   /* MethodBindTRC<Control::TextDirection>::~MethodBindTRC() */
   void MethodBindTRC<Control::TextDirection>::~MethodBindTRC(MethodBindTRC<Control::TextDirection> *this) {
      *(undefined***)this = &PTR__gen_argument_type_0010e600;
      MethodBind::~MethodBind((MethodBind*)this);
      operator_delete(this, 0x68);
      return;
   }

   /* MethodBindT<String const&>::~MethodBindT() */
   void MethodBindT<String_const&>::~MethodBindT(MethodBindT<String_const&> *this) {
      *(undefined***)this = &PTR__gen_argument_type_0010e4e0;
      MethodBind::~MethodBind((MethodBind*)this);
      return;
   }

   /* MethodBindT<String const&>::~MethodBindT() */
   void MethodBindT<String_const&>::~MethodBindT(MethodBindT<String_const&> *this) {
      *(undefined***)this = &PTR__gen_argument_type_0010e4e0;
      MethodBind::~MethodBind((MethodBind*)this);
      operator_delete(this, 0x68);
      return;
   }

   /* MethodBindTRC<String>::~MethodBindTRC() */
   void MethodBindTRC<String>::~MethodBindTRC(MethodBindTRC<String> *this) {
      *(undefined***)this = &PTR__gen_argument_type_0010e540;
      MethodBind::~MethodBind((MethodBind*)this);
      return;
   }

   /* MethodBindTRC<String>::~MethodBindTRC() */
   void MethodBindTRC<String>::~MethodBindTRC(MethodBindTRC<String> *this) {
      *(undefined***)this = &PTR__gen_argument_type_0010e540;
      MethodBind::~MethodBind((MethodBind*)this);
      operator_delete(this, 0x68);
      return;
   }

   /* MethodBindT<LinkButton::UnderlineMode>::~MethodBindT() */
   void MethodBindT<LinkButton::UnderlineMode>::~MethodBindT(MethodBindT<LinkButton::UnderlineMode> *this) {
      *(undefined***)this = &PTR__gen_argument_type_0010e660;
      MethodBind::~MethodBind((MethodBind*)this);
      return;
   }

   /* MethodBindT<LinkButton::UnderlineMode>::~MethodBindT() */
   void MethodBindT<LinkButton::UnderlineMode>::~MethodBindT(MethodBindT<LinkButton::UnderlineMode> *this) {
      *(undefined***)this = &PTR__gen_argument_type_0010e660;
      MethodBind::~MethodBind((MethodBind*)this);
      operator_delete(this, 0x68);
      return;
   }

   /* MethodBindTRC<LinkButton::UnderlineMode>::~MethodBindTRC() */
   void MethodBindTRC<LinkButton::UnderlineMode>::~MethodBindTRC(MethodBindTRC<LinkButton::UnderlineMode> *this) {
      *(undefined***)this = &PTR__gen_argument_type_0010e6c0;
      MethodBind::~MethodBind((MethodBind*)this);
      return;
   }

   /* MethodBindTRC<LinkButton::UnderlineMode>::~MethodBindTRC() */
   void MethodBindTRC<LinkButton::UnderlineMode>::~MethodBindTRC(MethodBindTRC<LinkButton::UnderlineMode> *this) {
      *(undefined***)this = &PTR__gen_argument_type_0010e6c0;
      MethodBind::~MethodBind((MethodBind*)this);
      operator_delete(this, 0x68);
      return;
   }

   /* MethodBindT<TextServer::StructuredTextParser>::~MethodBindT() */
   void MethodBindT<TextServer::StructuredTextParser>::~MethodBindT(MethodBindT<TextServer::StructuredTextParser> *this) {
      *(undefined***)this = &PTR__gen_argument_type_0010e720;
      MethodBind::~MethodBind((MethodBind*)this);
      return;
   }

   /* MethodBindT<TextServer::StructuredTextParser>::~MethodBindT() */
   void MethodBindT<TextServer::StructuredTextParser>::~MethodBindT(MethodBindT<TextServer::StructuredTextParser> *this) {
      *(undefined***)this = &PTR__gen_argument_type_0010e720;
      MethodBind::~MethodBind((MethodBind*)this);
      operator_delete(this, 0x68);
      return;
   }

   /* MethodBindTRC<TextServer::StructuredTextParser>::~MethodBindTRC() */
   void MethodBindTRC<TextServer::StructuredTextParser>::~MethodBindTRC(MethodBindTRC<TextServer::StructuredTextParser> *this) {
      *(undefined***)this = &PTR__gen_argument_type_0010e780;
      MethodBind::~MethodBind((MethodBind*)this);
      return;
   }

   /* MethodBindTRC<TextServer::StructuredTextParser>::~MethodBindTRC() */
   void MethodBindTRC<TextServer::StructuredTextParser>::~MethodBindTRC(MethodBindTRC<TextServer::StructuredTextParser> *this) {
      *(undefined***)this = &PTR__gen_argument_type_0010e780;
      MethodBind::~MethodBind((MethodBind*)this);
      operator_delete(this, 0x68);
      return;
   }

   /* MethodBindT<Array>::~MethodBindT() */
   void MethodBindT<Array>::~MethodBindT(MethodBindT<Array> *this) {
      *(undefined***)this = &PTR__gen_argument_type_0010e7e0;
      MethodBind::~MethodBind((MethodBind*)this);
      return;
   }

   /* MethodBindT<Array>::~MethodBindT() */
   void MethodBindT<Array>::~MethodBindT(MethodBindT<Array> *this) {
      *(undefined***)this = &PTR__gen_argument_type_0010e7e0;
      MethodBind::~MethodBind((MethodBind*)this);
      operator_delete(this, 0x68);
      return;
   }

   /* MethodBindTRC<Array>::~MethodBindTRC() */
   void MethodBindTRC<Array>::~MethodBindTRC(MethodBindTRC<Array> *this) {
      *(undefined***)this = &PTR__gen_argument_type_0010e840;
      MethodBind::~MethodBind((MethodBind*)this);
      return;
   }

   /* MethodBindTRC<Array>::~MethodBindTRC() */
   void MethodBindTRC<Array>::~MethodBindTRC(MethodBindTRC<Array> *this) {
      *(undefined***)this = &PTR__gen_argument_type_0010e840;
      MethodBind::~MethodBind((MethodBind*)this);
      operator_delete(this, 0x68);
      return;
   }

   /* LinkButton::_property_get_revertv(StringName const&, Variant&) const */
   undefined8 LinkButton::_property_get_revertv(StringName *param_1, Variant *param_2) {
      undefined8 uVar1;
      if ((code*)_GLOBAL_OFFSET_TABLE_ != Object::_property_get_revert) {
         uVar1 = Control::_property_get_revert(param_1, param_2);
         return uVar1;
      }

      return 0;
   }

   /* LinkButton::_property_can_revertv(StringName const&) const */
   undefined8 LinkButton::_property_can_revertv(StringName *param_1) {
      undefined8 uVar1;
      if ((code*)PTR__property_can_revert_00112008 != Object::_property_can_revert) {
         uVar1 = Control::_property_can_revert(param_1);
         return uVar1;
      }

      return 0;
   }

   /* LinkButton::_validate_propertyv(PropertyInfo&) const */
   void LinkButton::_validate_propertyv(PropertyInfo *param_1) {
      Node::_validate_property(param_1);
      CanvasItem::_validate_property(param_1);
      if ((code*)PTR__validate_property_00112010 == CanvasItem::_validate_property) {
         return;
      }

      Control::_validate_property(param_1);
      return;
   }

   /* LinkButton::_setv(StringName const&, Variant const&) */
   undefined8 LinkButton::_setv(StringName *param_1, Variant *param_2) {
      undefined8 uVar1;
      uVar1 = CanvasItem::_set(param_1, param_2);
      if ((char)uVar1 == '\0') {
         if ((code*)PTR__set_00112018 != CanvasItem::_set) {
            uVar1 = Control::_set(param_1, param_2);
            return uVar1;
         }

         uVar1 = 0;
      }

      return uVar1;
   }

   /* WARNING: Removing unreachable block (ram,0x001045d8) */
   /* LinkButton::_getv(StringName const&, Variant&) const */
   undefined8 LinkButton::_getv(StringName *param_1, Variant *param_2) {
      undefined8 uVar1;
      if (( (code*)PTR__get_00112020 != CanvasItem::_get ) && ( uVar1 = Control::_get(param_1, param_2) ),(char)uVar1 != '\0') {
         return uVar1;
      }

      uVar1 = CanvasItem::_get(param_1, param_2);
      return uVar1;
   }

   /* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   LinkButton::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#1}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */
   void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),LinkButton::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#1}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
      code *pcVar1;
      Control::get_theme_item();
      Variant::get_validated_object();
      /* WARNING: Does not return */
      pcVar1 = (code*)invalidInstructionException();
      ( *pcVar1 )();
   }

   /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
   /* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   LinkButton::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#4}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */
   void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),LinkButton::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#4}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
      code *pcVar1;
      undefined8 in_XMM1_Qa;
      Control::get_theme_item();
      _DAT_00000aa8 = Variant::operator_cast_to_Color((Variant*)&stack0x00000000);
      /* WARNING: Does not return */
      pcVar1 = (code*)invalidInstructionException();
      _DAT_00000ab0 = in_XMM1_Qa;
      ( *pcVar1 )();
   }

   /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
   /* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   LinkButton::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#3}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */
   void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),LinkButton::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#3}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
      code *pcVar1;
      undefined8 in_XMM1_Qa;
      Control::get_theme_item();
      _DAT_00000a98 = Variant::operator_cast_to_Color((Variant*)&stack0x00000000);
      /* WARNING: Does not return */
      pcVar1 = (code*)invalidInstructionException();
      _DAT_00000aa0 = in_XMM1_Qa;
      ( *pcVar1 )();
   }

   /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
   /* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   LinkButton::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#2}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */
   void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),LinkButton::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#2}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
      code *pcVar1;
      undefined8 in_XMM1_Qa;
      Control::get_theme_item();
      _DAT_00000a88 = Variant::operator_cast_to_Color((Variant*)&stack0x00000000);
      /* WARNING: Does not return */
      pcVar1 = (code*)invalidInstructionException();
      _DAT_00000a90 = in_XMM1_Qa;
      ( *pcVar1 )();
   }

   /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
   /* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   LinkButton::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#5}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */
   void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),LinkButton::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#5}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
      code *pcVar1;
      undefined8 in_XMM1_Qa;
      Control::get_theme_item();
      _DAT_00000ab8 = Variant::operator_cast_to_Color((Variant*)&stack0x00000000);
      /* WARNING: Does not return */
      pcVar1 = (code*)invalidInstructionException();
      _DAT_00000ac0 = in_XMM1_Qa;
      ( *pcVar1 )();
   }

   /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
   /* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   LinkButton::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#7}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */
   void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),LinkButton::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#7}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
      code *pcVar1;
      undefined8 in_XMM1_Qa;
      Control::get_theme_item();
      _DAT_00000ad8 = Variant::operator_cast_to_Color((Variant*)&stack0x00000000);
      /* WARNING: Does not return */
      pcVar1 = (code*)invalidInstructionException();
      _DAT_00000ae0 = in_XMM1_Qa;
      ( *pcVar1 )();
   }

   /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
   /* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   LinkButton::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#11}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */
   void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),LinkButton::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#11}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
      code *pcVar1;
      undefined8 in_XMM1_Qa;
      Control::get_theme_item();
      _DAT_00000af8 = Variant::operator_cast_to_Color((Variant*)&stack0x00000000);
      /* WARNING: Does not return */
      pcVar1 = (code*)invalidInstructionException();
      _DAT_00000b00 = in_XMM1_Qa;
      ( *pcVar1 )();
   }

   /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
   /* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   LinkButton::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#6}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */
   void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),LinkButton::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#6}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
      code *pcVar1;
      undefined8 in_XMM1_Qa;
      Control::get_theme_item();
      _DAT_00000ac8 = Variant::operator_cast_to_Color((Variant*)&stack0x00000000);
      /* WARNING: Does not return */
      pcVar1 = (code*)invalidInstructionException();
      _DAT_00000ad0 = in_XMM1_Qa;
      ( *pcVar1 )();
   }

   /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
   /* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   LinkButton::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#9}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */
   void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),LinkButton::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#9}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
      code *pcVar1;
      Control::get_theme_item();
      Variant::operator_cast_to_int((Variant*)&stack0x00000000);
      _DAT_00000af0 = 0;
      /* WARNING: Does not return */
      pcVar1 = (code*)invalidInstructionException();
      ( *pcVar1 )();
   }

   /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
   /* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   LinkButton::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#10}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */
   void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),LinkButton::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#10}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
      code *pcVar1;
      Control::get_theme_item();
      Variant::operator_cast_to_int((Variant*)&stack0x00000000);
      _DAT_00000af4 = 0;
      /* WARNING: Does not return */
      pcVar1 = (code*)invalidInstructionException();
      ( *pcVar1 )();
   }

   /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
   /* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   LinkButton::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#12}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */
   void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),LinkButton::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#12}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
      code *pcVar1;
      Control::get_theme_item();
      Variant::operator_cast_to_int((Variant*)&stack0x00000000);
      _DAT_00000b08 = 0;
      /* WARNING: Does not return */
      pcVar1 = (code*)invalidInstructionException();
      ( *pcVar1 )();
   }

   /* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   LinkButton::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#8}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */
   void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),LinkButton::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#8}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
      code *pcVar1;
      Control::get_theme_item();
      Variant::get_validated_object();
      /* WARNING: Does not return */
      pcVar1 = (code*)invalidInstructionException();
      ( *pcVar1 )();
   }

   /* LinkButton::_shape() [clone .cold] */
   void LinkButton::_shape(void) {
      code *pcVar1;
      /* WARNING: Does not return */
      pcVar1 = (code*)invalidInstructionException();
      ( *pcVar1 )();
   }

   /* LinkButton::_notification(int) [clone .cold] */
   void LinkButton::_notification(int param_1) {
      FUN_0010138f();
      return;
   }

   /* LinkButton::_get_class_namev() const */
   undefined8 *LinkButton::_get_class_namev(void) {
      int iVar1;
      if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
         _get_class_namev()
         __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
         __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
      }

      if (_get_class_namev()::_class_name_static != 0) {
         if (*(long*)( _get_class_namev() ) != 0) {
            LAB_00104873:return &_get_class_namev();
         }

         if (*(long*)( _get_class_namev() ) != 0) {
            if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00104873;
            StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "LinkButton");
            goto LAB_001048de;
         }

      }

      StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "LinkButton");
      LAB_001048de:return &_get_class_namev();
   }

   /* LinkButton::get_class() const */
   void LinkButton::get_class(void) {
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

   /* MethodBindTRC<String>::_gen_argument_type_info(int) const */
   undefined4 *MethodBindTRC<String>::_gen_argument_type_info(int param_1) {
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
      local_48 = &_LC13;
      local_40 = 0;
      String::parse_latin1((StrRange*)&local_58);
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

            goto joined_r0x00104b2c;
         }

      }

      StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
      lVar2 = local_58;
      joined_r0x00104b2c:local_58 = lVar2;
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

   /* MethodBindTRC<Array>::_gen_argument_type_info(int) const */
   undefined4 *MethodBindTRC<Array>::_gen_argument_type_info(int param_1) {
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
      local_48 = &_LC13;
      local_40 = 0;
      String::parse_latin1((StrRange*)&local_58);
      *puVar3 = 0x1c;
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

            goto joined_r0x00104cac;
         }

      }

      StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
      lVar2 = local_58;
      joined_r0x00104cac:local_58 = lVar2;
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

   /* String::parse_latin1(char const*) */
   void String::parse_latin1(String *this, char *param_1) {
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

   /* PropertyInfo::~PropertyInfo() */
   void PropertyInfo::~PropertyInfo(PropertyInfo *this) {
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
   int, StringName const&) */
   void PropertyInfo::PropertyInfo(PropertyInfo *this, undefined4 param_2, CowData *param_3, int param_4, CowData *param_5, undefined4 param_6, StringName *param_7) {
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

   /* Object::is_class(String const&) const */
   ulong Object::is_class(Object *this, String *param_1) {
      long *plVar1;
      long lVar2;
      char *__s;
      long lVar3;
      long lVar4;
      uint uVar5;
      long lVar6;
      ulong uVar7;
      long in_FS_OFFSET;
      bool bVar8;
      long local_50;
      char *local_48;
      size_t local_40;
      long local_30;
      lVar2 = *(long*)( this + 8 );
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      do {
         if (lVar2 == 0) {
            if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
               uVar7 = String::operator ==(param_1, "Object");
               return uVar7;
            }

            LAB_0010505f:/* WARNING: Subroutine does not return */__stack_chk_fail();
         }

         lVar3 = *(long*)( lVar2 + 0x20 );
         if (lVar3 == 0) {
            local_50 = 0;
         }
 else {
            __s = *(char**)( lVar3 + 8 );
            local_50 = 0;
            if (__s == (char*)0x0) {
               plVar1 = (long*)( *(long*)( lVar3 + 0x10 ) + -0x10 );
               if (*(long*)( lVar3 + 0x10 ) != 0) {
                  do {
                     lVar4 = *plVar1;
                     if (lVar4 == 0) goto LAB_00104f73;
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
                     local_50 = *(long*)( lVar3 + 0x10 );
                  }

               }

            }
 else {
               local_40 = strlen(__s);
               local_48 = __s;
               String::parse_latin1((StrRange*)&local_50);
            }

         }

         LAB_00104f73:uVar5 = String::operator ==(param_1, (String*)&local_50);
         lVar3 = local_50;
         if (local_50 != 0) {
            LOCK();
            plVar1 = (long*)( local_50 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_50 = 0;
               Memory::free_static((void*)( lVar3 + -0x10 ), false);
            }

         }

         if ((char)uVar5 != '\0') {
            if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
               return (ulong)uVar5;
            }

            goto LAB_0010505f;
         }

         lVar2 = *(long*)( lVar2 + 8 );
      }
 while ( true );
   }

   /* MethodDefinition::~MethodDefinition() */
   void MethodDefinition::~MethodDefinition(MethodDefinition *this) {
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

   /* CowData<char32_t>::_ref(CowData<char32_t> const&) */
   void CowData<char32_t>::_ref(CowData<char32_t> *this, CowData *param_1) {
      if (*(long*)this != *(long*)param_1) {
         _ref(this, param_1);
         return;
      }

      return;
   }

   /* CowData<char32_t>::_unref() */
   void CowData<char32_t>::_unref(CowData<char32_t> *this) {
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

   /* godot::details::enum_qualified_name_to_class_info_name(String const&) */
   details * __thiscallgodot::details::enum_qualified_name_to_class_info_name(details * this, String * param_1);
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
      char local_58[8];
      long *local_50;
      undefined *local_48;
      undefined8 local_40;
      long local_30;
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      String::split(local_58, SUB81(param_1, 0), 0x10551d);
      if (( local_50 != (long*)0x0 ) && ( 2 < local_50[-1] )) {
         local_60 = 0;
         local_48 = &_LC20;
         local_40 = 1;
         String::parse_latin1((StrRange*)&local_60);
         if (local_50 == (long*)0x0) {
            lVar7 = 0;
            lVar6 = -2;
         }
 else {
            lVar7 = local_50[-1];
            lVar6 = lVar7 + -2;
            if (-1 < lVar6) {
               String::operator +((String*)&local_48, (String*)( local_50 + lVar6 ));
               String::operator +((String*)this, (String*)&local_48);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
               goto LAB_001055ea;
            }

         }

         _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar6, lVar7, "p_index", "size()", "", false, true);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar3 = (code*)invalidInstructionException();
         ( *pcVar3 )();
      }

      local_60 = 0;
      local_48 = &_LC20;
      local_40 = 1;
      String::parse_latin1((StrRange*)&local_60);
      String::join((Vector*)this);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      LAB_001055ea:plVar4 = local_50;
      if (local_50 != (long*)0x0) {
         LOCK();
         plVar5 = local_50 + -2;
         *plVar5 = *plVar5 + -1;
         UNLOCK();
         if (*plVar5 == 0) {
            if (local_50 == (long*)0x0) {
               /* WARNING: Does not return */
               pcVar3 = (code*)invalidInstructionException();
               ( *pcVar3 )();
            }

            lVar7 = local_50[-1];
            local_50 = (long*)0x0;
            if (lVar7 != 0) {
               lVar6 = 0;
               plVar5 = plVar4;
               do {
                  if (*plVar5 != 0) {
                     LOCK();
                     plVar1 = (long*)( *plVar5 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        lVar2 = *plVar5;
                        *plVar5 = 0;
                        Memory::free_static((void*)( lVar2 + -0x10 ), false);
                     }

                  }

                  lVar6 = lVar6 + 1;
                  plVar5 = plVar5 + 1;
               }
 while ( lVar7 != lVar6 );
            }

            Memory::free_static(plVar4 + -2, false);
         }

      }

      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return this;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* GetTypeInfo<LinkButton::UnderlineMode, void>::get_class_info() */
   GetTypeInfo<LinkButton::UnderlineMode,void> * GetTypeInfo<LinkButton::UnderlineMode,void>::get_class_info(GetTypeInfo<LinkButton::UnderlineMode,void> * this);
   {
      long in_FS_OFFSET;
      undefined8 local_60;
      undefined8 local_58;
      details local_50[8];
      char *local_48;
      undefined8 local_40;
      long local_30;
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      local_58 = 0;
      local_48 = "LinkButton::UnderlineMode";
      local_40 = 0x19;
      String::parse_latin1((StrRange*)&local_58);
      godot::details::enum_qualified_name_to_class_info_name(local_50, (String*)&local_58);
      StringName::StringName((StringName*)&local_48, (String*)local_50, false);
      *(undefined4*)this = 2;
      *(undefined4*)( this + 0x18 ) = 0;
      *(undefined8*)( this + 0x20 ) = 0;
      *(undefined4*)( this + 0x28 ) = 0x10006;
      *(undefined1(*) [16])( this + 8 ) = (undefined1[16])0x0;
      local_60 = 0;
      StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)local_50);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return this;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* LinkButton::~LinkButton() */
   void LinkButton::~LinkButton(LinkButton *this) {
      Object *pOVar1;
      char cVar2;
      *(undefined***)this = &PTR__initialize_classv_0010e168;
      if (*(long*)( this + 0xae8 ) != 0) {
         cVar2 = RefCounted::unreference();
         if (cVar2 != '\0') {
            pOVar1 = *(Object**)( this + 0xae8 );
            cVar2 = predelete_handler(pOVar1);
            if (cVar2 != '\0') {
               ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
               Memory::free_static(pOVar1, false);
            }

         }

      }

      if (*(long*)( this + 0xa80 ) != 0) {
         cVar2 = RefCounted::unreference();
         if (cVar2 != '\0') {
            pOVar1 = *(Object**)( this + 0xa80 );
            cVar2 = predelete_handler(pOVar1);
            if (cVar2 != '\0') {
               ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
               Memory::free_static(pOVar1, false);
            }

         }

      }

      Array::~Array((Array*)( this + 0xa78 ));
      CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0xa68 ));
      CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0xa60 ));
      if (*(long*)( this + 0xa50 ) != 0) {
         cVar2 = RefCounted::unreference();
         if (cVar2 != '\0') {
            pOVar1 = *(Object**)( this + 0xa50 );
            cVar2 = predelete_handler(pOVar1);
            if (cVar2 != '\0') {
               ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
               Memory::free_static(pOVar1, false);
            }

         }

      }

      CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0xa48 ));
      CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0xa40 ));
      BaseButton::~BaseButton((BaseButton*)this);
      return;
   }

   /* LinkButton::~LinkButton() */
   void LinkButton::~LinkButton(LinkButton *this) {
      ~LinkButton(this)
      ;;
      operator_delete(this, 0xb10);
      return;
   }

   /* WARNING: Removing unreachable block (ram,0x00105db0) */
   /* LinkButton::_notificationv(int, bool) */
   void LinkButton::_notificationv(LinkButton *this, int param_1, bool param_2) {
      int iVar1;
      iVar1 = (int)this;
      if (param_2) {
         _notification(this, param_1);
         if ((code*)PTR__notification_00112028 != Control::_notification) {
            BaseButton::_notification(iVar1);
         }

         for (int i = 0; i < 3; i++) {
            Control::_notification(iVar1);
         }

         return;
      }

      for (int i = 0; i < 3; i++) {
         Node::_notification(iVar1);
      }

      if ((code*)PTR__notification_00112028 != Control::_notification) {
         BaseButton::_notification(iVar1);
      }

      _notification(this, param_1);
      return;
   }

   /* Control::is_class(String const&) const */
   undefined8 Control::is_class(Control *this, String *param_1) {
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
                     if (lVar3 == 0) goto LAB_00105ebf;
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

         LAB_00105ebf:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

         if (cVar6 != '\0') goto LAB_00105f73;
      }

      cVar6 = String::operator ==(param_1, "Control");
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
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar5 + 0x10 ));
               }
 else {
                  local_50 = strlen(pcVar4);
                  local_58 = pcVar4;
                  String::parse_latin1((StrRange*)&local_60);
               }

            }

            cVar6 = String::operator ==(param_1, (String*)&local_60);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            if (cVar6 != '\0') goto LAB_00105f73;
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
                     CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar5 + 0x10 ));
                  }
 else {
                     local_50 = strlen(pcVar4);
                     local_58 = pcVar4;
                     String::parse_latin1((StrRange*)&local_60);
                  }

               }

               cVar6 = String::operator ==(param_1, (String*)&local_60);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
               if (cVar6 != '\0') goto LAB_00105f73;
            }

            cVar6 = String::operator ==(param_1, "Node");
            if (cVar6 == '\0') {
               if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  uVar8 = Object::is_class((Object*)this, param_1);
                  return uVar8;
               }

               goto LAB_0010612e;
            }

         }

      }

      LAB_00105f73:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

      LAB_0010612e:/* WARNING: Subroutine does not return */__stack_chk_fail();
   }

   /* LinkButton::is_class(String const&) const */
   undefined8 LinkButton::is_class(LinkButton *this, String *param_1) {
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
                     if (lVar5 == 0) goto LAB_001061af;
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

         LAB_001061af:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

         if (cVar6 != '\0') goto LAB_00106263;
      }

      cVar6 = String::operator ==(param_1, "LinkButton");
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
                        if (lVar5 == 0) goto LAB_00106323;
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

            LAB_00106323:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

            if (cVar6 != '\0') goto LAB_00106263;
         }

         cVar6 = String::operator ==(param_1, "BaseButton");
         if (cVar6 == '\0') {
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               uVar7 = Control::is_class((Control*)this, param_1);
               return uVar7;
            }

            goto LAB_001063cc;
         }

      }

      LAB_00106263:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

      LAB_001063cc:/* WARNING: Subroutine does not return */__stack_chk_fail();
   }

   /* MethodBindTRC<Control::TextDirection>::_gen_argument_type_info(int) const */
   undefined4 *MethodBindTRC<Control::TextDirection>::_gen_argument_type_info(int param_1) {
      undefined4 in_register_0000003c;
      undefined4 *puVar1;
      long in_FS_OFFSET;
      undefined8 local_60;
      undefined8 local_58;
      details local_50[8];
      char *local_48;
      undefined8 local_40;
      long local_30;
      puVar1 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      local_58 = 0;
      local_48 = "Control::TextDirection";
      local_40 = 0x16;
      String::parse_latin1((StrRange*)&local_58);
      godot::details::enum_qualified_name_to_class_info_name(local_50, (String*)&local_58);
      StringName::StringName((StringName*)&local_48, (String*)local_50, false);
      *puVar1 = 2;
      puVar1[6] = 0;
      *(undefined8*)( puVar1 + 8 ) = 0;
      puVar1[10] = 0x10006;
      *(undefined1(*) [16])( puVar1 + 2 ) = (undefined1[16])0x0;
      local_60 = 0;
      StringName::operator =((StringName*)( puVar1 + 4 ), (StringName*)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)local_50);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return puVar1;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindTRC<TextServer::StructuredTextParser>::_gen_argument_type_info(int) const */
   undefined4 *MethodBindTRC<TextServer::StructuredTextParser>::_gen_argument_type_info(int param_1) {
      long *plVar1;
      long lVar2;
      undefined4 in_register_0000003c;
      undefined4 *puVar3;
      long in_FS_OFFSET;
      undefined8 local_68;
      undefined8 local_60;
      long local_58;
      details local_50[8];
      char *local_48;
      undefined8 local_40;
      long local_30;
      puVar3 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      local_58 = 0;
      local_48 = "TextServer::StructuredTextParser";
      local_40 = 0x20;
      String::parse_latin1((StrRange*)&local_58);
      godot::details::enum_qualified_name_to_class_info_name(local_50, (String*)&local_58);
      StringName::StringName((StringName*)&local_48, (String*)local_50, false);
      *puVar3 = 2;
      puVar3[6] = 0;
      *(undefined8*)( puVar3 + 8 ) = 0;
      puVar3[10] = 0x10006;
      *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
      local_60 = 0;
      local_68 = 0;
      StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)local_50);
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

      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return puVar3;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindTRC<LinkButton::UnderlineMode>::_gen_argument_type_info(int) const */
   undefined4 *MethodBindTRC<LinkButton::UnderlineMode>::_gen_argument_type_info(int param_1) {
      long *plVar1;
      long lVar2;
      undefined4 in_register_0000003c;
      undefined4 *puVar3;
      long in_FS_OFFSET;
      long local_68;
      details local_60[8];
      long local_58;
      undefined8 local_50;
      char *local_48;
      undefined8 local_40;
      long local_30;
      puVar3 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      local_58 = 0;
      local_48 = "LinkButton::UnderlineMode";
      local_40 = 0x19;
      String::parse_latin1((StrRange*)&local_58);
      godot::details::enum_qualified_name_to_class_info_name(local_60, (String*)&local_58);
      StringName::StringName((StringName*)&local_68, (String*)local_60, false);
      *puVar3 = 2;
      puVar3[6] = 0;
      *(undefined8*)( puVar3 + 8 ) = 0;
      puVar3[10] = 0x10006;
      *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
      local_50 = 0;
      local_48 = (char*)0x0;
      StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
      if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)local_60);
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

      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return puVar3;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* Node::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */
   void Node::_get_property_listv(List *param_1, bool param_2) {
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
      local_78 = &_LC34;
      local_88 = 0;
      local_90 = 0;
      local_70 = 4;
      String::parse_latin1((StrRange*)&local_90);
      local_78 = &_LC34;
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
         LAB_0010692d:local_50 = 0x80;
         StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
      }
 else {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
         local_50 = 0x80;
         if (local_60 != 0x11) goto LAB_0010692d;
         StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
         if (local_68 != local_80) {
            StringName::unref();
            lVar2 = *(long*)pLVar5;
            local_68 = local_80;
            goto joined_r0x0010694f;
         }

         if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
            StringName::unref();
         }

      }

      lVar2 = *(long*)pLVar5;
      joined_r0x0010694f:if (lVar2 == 0) {
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

   /* CanvasItem::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */
   void CanvasItem::_get_property_listv(CanvasItem *this, List *param_1, bool param_2) {
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
         LAB_00106cad:local_50 = 0x80;
         StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
      }
 else {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
         local_50 = 0x80;
         if (local_60 != 0x11) goto LAB_00106cad;
         StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
         if (local_68 != local_80) {
            StringName::unref();
            lVar2 = *(long*)param_1;
            local_68 = local_80;
            goto joined_r0x00106ccf;
         }

         if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
            StringName::unref();
         }

      }

      lVar2 = *(long*)param_1;
      joined_r0x00106ccf:if (lVar2 == 0) {
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

      if ((code*)PTR__get_property_list_00112030 != Object::_get_property_list) {
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

   /* Control::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */
   void Control::_get_property_listv(Control *this, List *param_1, bool param_2) {
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
         LAB_0010709d:local_50 = 0x80;
         StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
      }
 else {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
         local_50 = 0x80;
         if (local_60 != 0x11) goto LAB_0010709d;
         StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
         if (local_68 != local_80) {
            StringName::unref();
            lVar2 = *(long*)param_1;
            local_68 = local_80;
            goto joined_r0x001070bf;
         }

         if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
            StringName::unref();
         }

      }

      lVar2 = *(long*)param_1;
      joined_r0x001070bf:if (lVar2 == 0) {
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

      if ((code*)PTR__get_property_list_00112038 != CanvasItem::_get_property_list) {
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

   /* BaseButton::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */
   void BaseButton::_get_property_listv(BaseButton *this, List *param_1, bool param_2) {
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
      local_78 = "BaseButton";
      local_70 = 10;
      String::parse_latin1((StrRange*)&local_90);
      local_78 = "BaseButton";
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
         LAB_0010748d:local_50 = 0x80;
         StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
      }
 else {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
         local_50 = 0x80;
         if (local_60 != 0x11) goto LAB_0010748d;
         StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
         if (local_68 != local_80) {
            StringName::unref();
            lVar2 = *(long*)param_1;
            local_68 = local_80;
            goto joined_r0x001074af;
         }

         if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
            StringName::unref();
         }

      }

      lVar2 = *(long*)param_1;
      joined_r0x001074af:if (lVar2 == 0) {
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

      StringName::StringName((StringName*)&local_78, "BaseButton", false);
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

   /* LinkButton::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */
   void LinkButton::_get_property_listv(LinkButton *this, List *param_1, bool param_2) {
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
         BaseButton::_get_property_listv((BaseButton*)this, param_1, false);
      }

      local_88 = 0;
      local_90 = 0;
      local_78 = "LinkButton";
      local_70 = 10;
      String::parse_latin1((StrRange*)&local_90);
      local_78 = "LinkButton";
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
         LAB_0010786d:local_50 = 0x80;
         StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
      }
 else {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
         local_50 = 0x80;
         if (local_60 != 0x11) goto LAB_0010786d;
         StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
         if (local_68 != local_80) {
            StringName::unref();
            lVar2 = *(long*)param_1;
            local_68 = local_80;
            goto joined_r0x0010788f;
         }

         if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
            StringName::unref();
         }

      }

      lVar2 = *(long*)param_1;
      joined_r0x0010788f:if (lVar2 == 0) {
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

      StringName::StringName((StringName*)&local_78, "LinkButton", false);
      ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
      if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
         StringName::unref();
      }

      if (param_2) {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            BaseButton::_get_property_listv((BaseButton*)this, param_1, true);
            return;
         }

      }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindT<LinkButton::UnderlineMode>::_gen_argument_type_info(int) const */
   undefined4 *MethodBindT<LinkButton::UnderlineMode>::_gen_argument_type_info(int param_1) {
      long lVar1;
      int in_EDX;
      undefined4 in_register_0000003c;
      undefined4 *puVar2;
      long in_FS_OFFSET;
      undefined4 local_48[2];
      long local_40;
      long local_38;
      undefined4 local_30;
      long local_28;
      undefined4 local_20;
      long local_10;
      puVar2 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
      local_10 = *(long*)( in_FS_OFFSET + 0x28 );
      *puVar2 = 0;
      puVar2[6] = 0;
      *(undefined8*)( puVar2 + 8 ) = 0;
      puVar2[10] = 6;
      *(undefined1(*) [16])( puVar2 + 2 ) = (undefined1[16])0x0;
      if (in_EDX == 0) {
         GetTypeInfo<LinkButton::UnderlineMode,void>::get_class_info((GetTypeInfo<LinkButton::UnderlineMode,void>*)local_48);
         *puVar2 = local_48[0];
         if (*(long*)( puVar2 + 2 ) != local_40) {
            CowData<char32_t>::_unref((CowData<char32_t>*)( puVar2 + 2 ));
            lVar1 = local_40;
            local_40 = 0;
            *(long*)( puVar2 + 2 ) = lVar1;
         }

         if (*(long*)( puVar2 + 4 ) != local_38) {
            StringName::unref();
            lVar1 = local_38;
            local_38 = 0;
            *(long*)( puVar2 + 4 ) = lVar1;
         }

         puVar2[6] = local_30;
         if (*(long*)( puVar2 + 8 ) != local_28) {
            CowData<char32_t>::_unref((CowData<char32_t>*)( puVar2 + 8 ));
            lVar1 = local_28;
            local_28 = 0;
            *(long*)( puVar2 + 8 ) = lVar1;
         }

         puVar2[10] = local_20;
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_28);
         if (( StringName::configured != '\0' ) && ( local_38 != 0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
      }

      if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return puVar2;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindT<Array>::_gen_argument_type_info(int) const */
   undefined4 *MethodBindT<Array>::_gen_argument_type_info(int param_1) {
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
      if (in_EDX != 0) goto LAB_00107c29;
      local_78 = 0;
      local_68 = &_LC13;
      local_80 = 0;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_60._8_8_;
      local_60 = auVar1 << 0x40;
      String::parse_latin1((StrRange*)&local_80);
      local_88 = 0;
      local_68 = (undefined*)CONCAT44(local_68._4_4_, 0x1c);
      local_50 = 0;
      local_48 = 0;
      local_60 = (undefined1[16])0x0;
      if (local_80 == 0) {
         LAB_00107d25:local_40 = 6;
         StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
      }
 else {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
         local_40 = 6;
         if (local_50 != 0x11) goto LAB_00107d25;
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
      LAB_00107c29:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return puVar5;
   }

   /* MethodBindT<String const&>::_gen_argument_type_info(int) const */
   undefined4 *MethodBindT<String_const&>::_gen_argument_type_info(int param_1) {
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
      if (in_EDX != 0) goto LAB_00107e99;
      local_78 = 0;
      local_68 = &_LC13;
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
         LAB_00107f95:local_40 = 6;
         StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
      }
 else {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
         local_40 = 6;
         if (local_50 != 0x11) goto LAB_00107f95;
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
      LAB_00107e99:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return puVar5;
   }

   /* MethodBindT<TextServer::StructuredTextParser>::_gen_argument_type_info(int) const */
   undefined4 *MethodBindT<TextServer::StructuredTextParser>::_gen_argument_type_info(int param_1) {
      undefined1 auVar1[16];
      undefined8 uVar2;
      long lVar3;
      int in_EDX;
      undefined4 in_register_0000003c;
      undefined4 *puVar4;
      long in_FS_OFFSET;
      undefined8 local_90;
      undefined8 local_88;
      undefined8 local_80;
      details local_78[8];
      long local_70;
      char *local_68;
      undefined1 local_60[16];
      undefined8 local_50;
      long local_48;
      undefined4 local_40;
      long local_30;
      puVar4 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      *puVar4 = 0;
      puVar4[6] = 0;
      *(undefined8*)( puVar4 + 8 ) = 0;
      puVar4[10] = 6;
      *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
      if (in_EDX == 0) {
         local_80 = 0;
         local_68 = "TextServer::StructuredTextParser";
         local_60._0_8_ = 0x20;
         String::parse_latin1((StrRange*)&local_80);
         godot::details::enum_qualified_name_to_class_info_name(local_78, (String*)&local_80);
         StringName::StringName((StringName*)&local_70, (String*)local_78, false);
         local_60 = (undefined1[16])0x0;
         local_88 = 0;
         local_90 = 0;
         local_68 = (char*)0x2;
         local_50 = 0;
         local_48 = 0;
         local_40 = 0x10006;
         StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_70);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
         if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)local_78);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
         *puVar4 = local_68._0_4_;
         if (*(long*)( puVar4 + 2 ) != local_60._0_8_) {
            CowData<char32_t>::_unref((CowData<char32_t>*)( puVar4 + 2 ));
            uVar2 = local_60._0_8_;
            auVar1._8_8_ = 0;
            auVar1._0_8_ = local_60._8_8_;
            local_60 = auVar1 << 0x40;
            *(undefined8*)( puVar4 + 2 ) = uVar2;
         }

         if (*(long*)( puVar4 + 4 ) != local_60._8_8_) {
            StringName::unref();
            uVar2 = local_60._8_8_;
            local_60._8_8_ = 0;
            *(undefined8*)( puVar4 + 4 ) = uVar2;
         }

         puVar4[6] = (undefined4)local_50;
         if (*(long*)( puVar4 + 8 ) != local_48) {
            CowData<char32_t>::_unref((CowData<char32_t>*)( puVar4 + 8 ));
            lVar3 = local_48;
            local_48 = 0;
            *(long*)( puVar4 + 8 ) = lVar3;
         }

         puVar4[10] = local_40;
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         if (( StringName::configured != '\0' ) && ( local_60._8_8_ != 0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)local_60);
      }

      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return puVar4;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindT<Control::TextDirection>::_gen_argument_type_info(int) const */
   undefined4 *MethodBindT<Control::TextDirection>::_gen_argument_type_info(int param_1) {
      undefined1 auVar1[16];
      undefined8 uVar2;
      long lVar3;
      int in_EDX;
      undefined4 in_register_0000003c;
      undefined4 *puVar4;
      long in_FS_OFFSET;
      undefined8 local_90;
      undefined8 local_88;
      undefined8 local_80;
      details local_78[8];
      long local_70;
      char *local_68;
      undefined1 local_60[16];
      undefined8 local_50;
      long local_48;
      undefined4 local_40;
      long local_30;
      puVar4 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      *puVar4 = 0;
      puVar4[6] = 0;
      *(undefined8*)( puVar4 + 8 ) = 0;
      puVar4[10] = 6;
      *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
      if (in_EDX == 0) {
         local_80 = 0;
         local_68 = "Control::TextDirection";
         local_60._0_8_ = 0x16;
         String::parse_latin1((StrRange*)&local_80);
         godot::details::enum_qualified_name_to_class_info_name(local_78, (String*)&local_80);
         StringName::StringName((StringName*)&local_70, (String*)local_78, false);
         local_60 = (undefined1[16])0x0;
         local_88 = 0;
         local_90 = 0;
         local_68 = (char*)0x2;
         local_50 = 0;
         local_48 = 0;
         local_40 = 0x10006;
         StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_70);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
         if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)local_78);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
         *puVar4 = local_68._0_4_;
         if (*(long*)( puVar4 + 2 ) != local_60._0_8_) {
            CowData<char32_t>::_unref((CowData<char32_t>*)( puVar4 + 2 ));
            uVar2 = local_60._0_8_;
            auVar1._8_8_ = 0;
            auVar1._0_8_ = local_60._8_8_;
            local_60 = auVar1 << 0x40;
            *(undefined8*)( puVar4 + 2 ) = uVar2;
         }

         if (*(long*)( puVar4 + 4 ) != local_60._8_8_) {
            StringName::unref();
            uVar2 = local_60._8_8_;
            local_60._8_8_ = 0;
            *(undefined8*)( puVar4 + 4 ) = uVar2;
         }

         puVar4[6] = (undefined4)local_50;
         if (*(long*)( puVar4 + 8 ) != local_48) {
            CowData<char32_t>::_unref((CowData<char32_t>*)( puVar4 + 8 ));
            lVar3 = local_48;
            local_48 = 0;
            *(long*)( puVar4 + 8 ) = lVar3;
         }

         puVar4[10] = local_40;
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         if (( StringName::configured != '\0' ) && ( local_60._8_8_ != 0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)local_60);
      }

      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return puVar4;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBind* create_method_bind<LinkButton, String const&>(void (LinkButton::*)(String const&)) */
   MethodBind *create_method_bind<LinkButton,String_const&>(_func_void_String_ptr *param_1) {
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
      *(undefined***)this = &PTR__gen_argument_type_0010e4e0;
      *(undefined8*)( this + 0x60 ) = in_RSI;
      MethodBind::_generate_argument_types((int)this);
      *(undefined4*)( this + 0x34 ) = 1;
      local_40 = 0;
      local_38 = "LinkButton";
      local_30 = 10;
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

   /* MethodBind* create_method_bind<LinkButton, String>(String (LinkButton::*)() const) */
   MethodBind *create_method_bind<LinkButton,String>(_func_String *param_1) {
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
      *(undefined***)this = &PTR__gen_argument_type_0010e540;
      *(undefined8*)( this + 0x60 ) = in_RSI;
      MethodBind::_set_returns(SUB81(this, 0));
      MethodBind::_set_const(SUB81(this, 0));
      MethodBind::_generate_argument_types((int)this);
      *(undefined4*)( this + 0x34 ) = 0;
      local_40 = 0;
      local_38 = "LinkButton";
      local_30 = 10;
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

   /* MethodBind* create_method_bind<LinkButton, Control::TextDirection>(void
   (LinkButton::*)(Control::TextDirection)) */
   MethodBind *create_method_bind<LinkButton,Control::TextDirection>(_func_void_TextDirection *param_1) {
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
      *(_func_void_TextDirection**)( this + 0x58 ) = param_1;
      *(undefined***)this = &PTR__gen_argument_type_0010e5a0;
      *(undefined8*)( this + 0x60 ) = in_RSI;
      MethodBind::_generate_argument_types((int)this);
      *(undefined4*)( this + 0x34 ) = 1;
      local_40 = 0;
      local_38 = "LinkButton";
      local_30 = 10;
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

   /* MethodBind* create_method_bind<LinkButton, Control::TextDirection>(Control::TextDirection
   (LinkButton::*)() const) */
   MethodBind *create_method_bind<LinkButton,Control::TextDirection>(_func_TextDirection *param_1) {
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
      *(_func_TextDirection**)( this + 0x58 ) = param_1;
      *(undefined***)this = &PTR__gen_argument_type_0010e600;
      *(undefined8*)( this + 0x60 ) = in_RSI;
      MethodBind::_set_returns(SUB81(this, 0));
      MethodBind::_set_const(SUB81(this, 0));
      MethodBind::_generate_argument_types((int)this);
      *(undefined4*)( this + 0x34 ) = 0;
      local_40 = 0;
      local_38 = "LinkButton";
      local_30 = 10;
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

   /* MethodBind* create_method_bind<LinkButton, LinkButton::UnderlineMode>(void
   (LinkButton::*)(LinkButton::UnderlineMode)) */
   MethodBind *create_method_bind<LinkButton,LinkButton::UnderlineMode>(_func_void_UnderlineMode *param_1) {
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
      *(_func_void_UnderlineMode**)( this + 0x58 ) = param_1;
      *(undefined***)this = &PTR__gen_argument_type_0010e660;
      *(undefined8*)( this + 0x60 ) = in_RSI;
      MethodBind::_generate_argument_types((int)this);
      *(undefined4*)( this + 0x34 ) = 1;
      local_40 = 0;
      local_38 = "LinkButton";
      local_30 = 10;
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

   /* MethodBind* create_method_bind<LinkButton, LinkButton::UnderlineMode>(LinkButton::UnderlineMode
   (LinkButton::*)() const) */
   MethodBind *create_method_bind<LinkButton,LinkButton::UnderlineMode>(_func_UnderlineMode *param_1) {
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
      *(_func_UnderlineMode**)( this + 0x58 ) = param_1;
      *(undefined***)this = &PTR__gen_argument_type_0010e6c0;
      *(undefined8*)( this + 0x60 ) = in_RSI;
      MethodBind::_set_returns(SUB81(this, 0));
      MethodBind::_set_const(SUB81(this, 0));
      MethodBind::_generate_argument_types((int)this);
      *(undefined4*)( this + 0x34 ) = 0;
      local_40 = 0;
      local_38 = "LinkButton";
      local_30 = 10;
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

   /* MethodBind* create_method_bind<LinkButton, TextServer::StructuredTextParser>(void
   (LinkButton::*)(TextServer::StructuredTextParser)) */
   MethodBind *create_method_bind<LinkButton,TextServer::StructuredTextParser>(_func_void_StructuredTextParser *param_1) {
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
      *(_func_void_StructuredTextParser**)( this + 0x58 ) = param_1;
      *(undefined***)this = &PTR__gen_argument_type_0010e720;
      *(undefined8*)( this + 0x60 ) = in_RSI;
      MethodBind::_generate_argument_types((int)this);
      *(undefined4*)( this + 0x34 ) = 1;
      local_40 = 0;
      local_38 = "LinkButton";
      local_30 = 10;
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

   /* MethodBind* create_method_bind<LinkButton,
   TextServer::StructuredTextParser>(TextServer::StructuredTextParser (LinkButton::*)() const) */
   MethodBind *create_method_bind<LinkButton,TextServer::StructuredTextParser>(_func_StructuredTextParser *param_1) {
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
      *(_func_StructuredTextParser**)( this + 0x58 ) = param_1;
      *(undefined***)this = &PTR__gen_argument_type_0010e780;
      *(undefined8*)( this + 0x60 ) = in_RSI;
      MethodBind::_set_returns(SUB81(this, 0));
      MethodBind::_set_const(SUB81(this, 0));
      MethodBind::_generate_argument_types((int)this);
      *(undefined4*)( this + 0x34 ) = 0;
      local_40 = 0;
      local_38 = "LinkButton";
      local_30 = 10;
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

   /* MethodBind* create_method_bind<LinkButton, Array>(void (LinkButton::*)(Array)) */
   MethodBind *create_method_bind<LinkButton,Array>(_func_void_Array *param_1) {
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
      *(_func_void_Array**)( this + 0x58 ) = param_1;
      *(undefined***)this = &PTR__gen_argument_type_0010e7e0;
      *(undefined8*)( this + 0x60 ) = in_RSI;
      MethodBind::_generate_argument_types((int)this);
      *(undefined4*)( this + 0x34 ) = 1;
      local_40 = 0;
      local_38 = "LinkButton";
      local_30 = 10;
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

   /* MethodBind* create_method_bind<LinkButton, Array>(Array (LinkButton::*)() const) */
   MethodBind *create_method_bind<LinkButton,Array>(_func_Array *param_1) {
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
      *(_func_Array**)( this + 0x58 ) = param_1;
      *(undefined***)this = &PTR__gen_argument_type_0010e840;
      *(undefined8*)( this + 0x60 ) = in_RSI;
      MethodBind::_set_returns(SUB81(this, 0));
      MethodBind::_set_const(SUB81(this, 0));
      MethodBind::_generate_argument_types((int)this);
      *(undefined4*)( this + 0x34 ) = 0;
      local_40 = 0;
      local_38 = "LinkButton";
      local_30 = 10;
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

   /* LinkButton::_initialize_classv() */
   void LinkButton::_initialize_classv(void) {
      long in_FS_OFFSET;
      undefined8 local_70;
      long local_68;
      long local_60;
      char *local_58;
      undefined8 local_50;
      long local_40;
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      if (initialize_class() == '\0') {
         if (BaseButton::initialize_class() == '\0') {
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
                     if ((code*)PTR__bind_methods_00112050 != Node::_bind_methods) {
                        Node::_bind_methods();
                     }

                     Node::initialize_class()::initialized =
                     '\x01';
                  }

                  local_58 = "Node";
                  local_68 = 0;
                  local_50 = 4;
                  String::parse_latin1((StrRange*)&local_68);
                  StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
                  local_58 = "CanvasItem";
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
                  CanvasItem::_bind_methods();
                  if ((code*)PTR__bind_compatibility_methods_00112040 != Object::_bind_compatibility_methods) {
                     CanvasItem::_bind_compatibility_methods();
                  }

                  CanvasItem::initialize_class()::initialized =
                  '\x01';
               }

               local_68 = 0;
               local_58 = "CanvasItem";
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

            local_58 = "Control";
            local_68 = 0;
            local_50 = 7;
            String::parse_latin1((StrRange*)&local_68);
            StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
            local_58 = "BaseButton";
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
            if ((code*)PTR__bind_methods_00112048 != Control::_bind_methods) {
               BaseButton::_bind_methods();
            }

            BaseButton::initialize_class()::initialized =
            '\x01';
         }

         local_58 = "BaseButton";
         local_68 = 0;
         local_50 = 10;
         String::parse_latin1((StrRange*)&local_68);
         StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
         local_58 = "LinkButton";
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

   /* WARNING: Removing unreachable block (ram,0x00109748) */
   /* String vformat<StringName>(String const&, StringName const) */
   undefined8 *vformat<StringName>(undefined8 *param_1, bool *param_2, StringName *param_3) {
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

   /* MethodBindTRC<Array>::call(Object*, Variant const**, int, Callable::CallError&) const */
   Object *MethodBindTRC<Array>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
      undefined4 local_48[2];
      undefined8 local_40;
      undefined8 uStack_38;
      long local_30;
      plVar4 = (long*)CONCAT44(in_register_00000014, param_3);
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      *(undefined4*)param_1 = 0;
      *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
      if (( ( plVar4 != (long*)0x0 ) && ( plVar4[1] != 0 ) ) && ( *(char*)( plVar4[1] + 0x2e ) != '\0' )) {
         StringName::StringName((StringName*)&local_58, (StringName*)( param_2 + 3 ));
         if (plVar4[1] == 0) {
            plVar3 = (long*)plVar4[0x23];
            if (plVar3 == (long*)0x0) {
               plVar3 = (long*)( **(code**)( *plVar4 + 0x40 ) )(plVar4);
            }

         }
 else {
            plVar3 = (long*)( plVar4[1] + 0x20 );
         }

         if (local_58 == (char*)*plVar3) {
            if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
               StringName::unref();
            }

            MethodBind::get_name();
            local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
            local_60 = 0;
            local_50 = 0x35;
            String::parse_latin1((StrRange*)&local_60);
            vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
            _err_print_error(&_LC88, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
               StringName::unref();
            }

            goto LAB_00109ad0;
         }

         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
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

            ( *(code*)pVVar2 )((Array*)&local_58);
            Variant::Variant((Variant*)local_48, (Array*)&local_58);
            if (Variant::needs_deinit[*(int*)param_1] != '\0') {
               Variant::_clear_internal();
            }

            *(undefined4*)param_1 = local_48[0];
            *(undefined8*)( param_1 + 8 ) = local_40;
            *(undefined8*)( param_1 + 0x10 ) = uStack_38;
            Array::~Array((Array*)&local_58);
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

      LAB_00109ad0:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return param_1;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindTRC<Array>::validated_call(Object*, Variant const**, Variant*) const */
   void MethodBindTRC<Array>::validated_call(MethodBindTRC<Array> *this, Object *param_1, Variant **param_2, Variant *param_3) {
      code *pcVar1;
      long *plVar2;
      Variant **extraout_RDX;
      long in_FS_OFFSET;
      long local_58;
      undefined8 local_50;
      Variant **local_48;
      undefined8 local_40;
      long local_30;
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
         StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
         if (*(long*)( param_1 + 8 ) == 0) {
            plVar2 = *(long**)( param_1 + 0x118 );
            if (plVar2 == (long*)0x0) {
               plVar2 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
            }

         }
 else {
            plVar2 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
         }

         if (local_48 == (Variant**)*plVar2) {
            if (( StringName::configured != '\0' ) && ( local_48 != (Variant**)0x0 )) {
               StringName::unref();
            }

            MethodBind::get_name();
            local_48 = (Variant**)0x109918;
            local_40 = 0x35;
            local_50 = 0;
            String::parse_latin1((StrRange*)&local_50);
            vformat<StringName>((Array*)&local_48, (StrRange*)&local_50, &local_58);
            _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (Array*)&local_48, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }

            goto LAB_00109d89;
         }

         param_2 = local_48;
         if (( StringName::configured != '\0' ) && ( local_48 != (Variant**)0x0 )) {
            StringName::unref();
            param_2 = extraout_RDX;
         }

      }

      pcVar1 = *(code**)( this + 0x58 );
      if (( (ulong)pcVar1 & 1 ) != 0) {
         param_2 = *(Variant***)( param_1 + *(long*)( this + 0x60 ) );
         pcVar1 = *(code**)( pcVar1 + (long)param_2 + -1 );
      }

      ( *pcVar1 )((Array*)&local_48, param_1 + *(long*)( this + 0x60 ), param_2);
      Array::operator =((Array*)( param_3 + 8 ), (Array*)&local_48);
      Array::~Array((Array*)&local_48);
      LAB_00109d89:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindTRC<Array>::ptrcall(Object*, void const**, void*) const */
   void MethodBindTRC<Array>::ptrcall(MethodBindTRC<Array> *this, Object *param_1, void **param_2, void *param_3) {
      code *pcVar1;
      long *plVar2;
      void **extraout_RDX;
      long in_FS_OFFSET;
      long local_58;
      undefined8 local_50;
      void **local_48;
      undefined8 local_40;
      long local_30;
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
         StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
         if (*(long*)( param_1 + 8 ) == 0) {
            plVar2 = *(long**)( param_1 + 0x118 );
            if (plVar2 == (long*)0x0) {
               plVar2 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
            }

         }
 else {
            plVar2 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
         }

         if (local_48 == (void**)*plVar2) {
            if (( StringName::configured != '\0' ) && ( local_48 != (void**)0x0 )) {
               StringName::unref();
            }

            MethodBind::get_name();
            local_48 = (void**)0x109918;
            local_40 = 0x35;
            local_50 = 0;
            String::parse_latin1((StrRange*)&local_50);
            vformat<StringName>((Array*)&local_48, (StrRange*)&local_50, &local_58);
            _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (Array*)&local_48, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }

            goto LAB_00109f5a;
         }

         param_2 = local_48;
         if (( StringName::configured != '\0' ) && ( local_48 != (void**)0x0 )) {
            StringName::unref();
            param_2 = extraout_RDX;
         }

      }

      pcVar1 = *(code**)( this + 0x58 );
      if (( (ulong)pcVar1 & 1 ) != 0) {
         param_2 = *(void***)( param_1 + *(long*)( this + 0x60 ) );
         pcVar1 = *(code**)( pcVar1 + (long)param_2 + -1 );
      }

      ( *pcVar1 )((Array*)&local_48, param_1 + *(long*)( this + 0x60 ), param_2);
      Array::operator =((Array*)param_3, (Array*)&local_48);
      Array::~Array((Array*)&local_48);
      LAB_00109f5a:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindT<Array>::validated_call(Object*, Variant const**, Variant*) const */
   void MethodBindT<Array>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
      long lVar1;
      Variant *pVVar2;
      code *pcVar3;
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
            pVVar2 = param_2[0x23];
            if (pVVar2 == (Variant*)0x0) {
               pVVar2 = (Variant*)( **(code**)( *param_2 + 0x40 ) )(param_2);
            }

         }
 else {
            pVVar2 = param_2[1] + 0x20;
         }

         if (local_48 == *(char**)pVVar2) {
            if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
               StringName::unref();
            }

            MethodBind::get_name();
            local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
            local_50 = 0;
            local_40 = 0x35;
            String::parse_latin1((StrRange*)&local_50);
            vformat<StringName>((Array*)&local_48, (StrRange*)&local_50, &local_58);
            _err_print_error("validated_call", "./core/object/method_bind.h", 0x160, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (Array*)&local_48, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }

            goto LAB_0010a12c;
         }

         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

      }

      pcVar3 = *(code**)( param_1 + 0x58 );
      lVar1 = *(long*)( param_1 + 0x60 );
      if (( (ulong)pcVar3 & 1 ) != 0) {
         pcVar3 = *(code**)( pcVar3 + *(long*)( (long)param_2 + lVar1 ) + -1 );
      }

      Array::Array((Array*)&local_48, (Array*)( *(long*)param_3 + 8 ));
      ( *pcVar3 )((long*)( (long)param_2 + lVar1 ), (Array*)&local_48);
      Array::~Array((Array*)&local_48);
      LAB_0010a12c:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindT<Array>::ptrcall(Object*, void const**, void*) const */
   void MethodBindT<Array>::ptrcall(Object *param_1, void **param_2, void *param_3) {
      long lVar1;
      long *plVar2;
      code *pcVar3;
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
            plVar2 = (long*)param_2[0x23];
            if (plVar2 == (long*)0x0) {
               plVar2 = (long*)( **(code**)( (long)*param_2 + 0x40 ) )(param_2);
            }

         }
 else {
            plVar2 = (long*)( (long)param_2[1] + 0x20 );
         }

         if (local_48 == (char*)*plVar2) {
            if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
               StringName::unref();
            }

            MethodBind::get_name();
            local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
            local_50 = 0;
            local_40 = 0x35;
            String::parse_latin1((StrRange*)&local_50);
            vformat<StringName>((Array*)&local_48, (StrRange*)&local_50, &local_58);
            _err_print_error("ptrcall", "./core/object/method_bind.h", 0x16b, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (Array*)&local_48, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }

            goto LAB_0010a319;
         }

         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

      }

      pcVar3 = *(code**)( param_1 + 0x58 );
      /* WARNING: Load size is inaccurate */
      lVar1 = *(long*)( param_1 + 0x60 );
      if (( (ulong)pcVar3 & 1 ) != 0) {
         pcVar3 = *(code**)( pcVar3 + *(long*)( (long)param_2 + lVar1 ) + -1 );
      }

      Array::Array((Array*)&local_48, *param_3);
      ( *pcVar3 )((long*)( (long)param_2 + lVar1 ), (Array*)&local_48);
      Array::~Array((Array*)&local_48);
      LAB_0010a319:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindTRC<TextServer::StructuredTextParser>::call(Object*, Variant const**, int,
   Callable::CallError&) const */
   Object *MethodBindTRC<TextServer::StructuredTextParser>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
      undefined4 local_48[2];
      undefined8 local_40;
      undefined8 uStack_38;
      long local_30;
      Variant *pVVar3;
      plVar5 = (long*)CONCAT44(in_register_00000014, param_3);
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      *(undefined4*)param_1 = 0;
      *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
      if (( ( plVar5 != (long*)0x0 ) && ( plVar5[1] != 0 ) ) && ( *(char*)( plVar5[1] + 0x2e ) != '\0' )) {
         StringName::StringName((StringName*)&local_58, (StringName*)( param_2 + 3 ));
         if (plVar5[1] == 0) {
            plVar4 = (long*)plVar5[0x23];
            if (plVar4 == (long*)0x0) {
               plVar4 = (long*)( **(code**)( *plVar5 + 0x40 ) )(plVar5);
            }

         }
 else {
            plVar4 = (long*)( plVar5[1] + 0x20 );
         }

         if (local_58 == (char*)*plVar4) {
            if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
               StringName::unref();
            }

            MethodBind::get_name();
            local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
            local_60 = 0;
            local_50 = 0x35;
            String::parse_latin1((StrRange*)&local_60);
            vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
            _err_print_error(&_LC88, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
               StringName::unref();
            }

            goto LAB_0010a570;
         }

         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

      }

      pVVar3 = param_2[0xb];
      pVVar1 = param_2[0xc];
      if (in_R8D == 0) {
         if (( param_2[5] == (Variant*)0x0 ) || ( -1 < *(int*)( param_2[5] + -8 ) )) {
            *in_R9 = 0;
            if (( (ulong)pVVar3 & 1 ) != 0) {
               pVVar3 = *(Variant**)( pVVar3 + *(long*)( (long)plVar5 + (long)pVVar1 ) + -1 );
            }

            iVar2 = ( *(code*)pVVar3 )();
            Variant::Variant((Variant*)local_48, iVar2);
            if (Variant::needs_deinit[*(int*)param_1] != '\0') {
               Variant::_clear_internal();
            }

            *(undefined4*)param_1 = local_48[0];
            *(undefined8*)( param_1 + 8 ) = local_40;
            *(undefined8*)( param_1 + 0x10 ) = uStack_38;
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

      LAB_0010a570:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return param_1;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindTRC<TextServer::StructuredTextParser>::validated_call(Object*, Variant const**,
   Variant*) const */
   void MethodBindTRC<TextServer::StructuredTextParser>::validated_call(MethodBindTRC<TextServer::StructuredTextParser> *this, Object *param_1, Variant **param_2, Variant *param_3) {
      uint uVar1;
      long *plVar3;
      long in_FS_OFFSET;
      long local_58;
      undefined8 local_50;
      char *local_48;
      undefined8 local_40;
      long local_30;
      code *pcVar2;
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
         StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
         if (*(long*)( param_1 + 8 ) == 0) {
            plVar3 = *(long**)( param_1 + 0x118 );
            if (plVar3 == (long*)0x0) {
               plVar3 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
            }

         }
 else {
            plVar3 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
         }

         if (local_48 == (char*)*plVar3) {
            if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
               StringName::unref();
            }

            MethodBind::get_name();
            local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
            local_40 = 0x35;
            local_50 = 0;
            String::parse_latin1((StrRange*)&local_50);
            vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
            _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }

            goto LAB_0010a784;
         }

         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

      }

      pcVar2 = *(code**)( this + 0x58 );
      if (( (ulong)pcVar2 & 1 ) != 0) {
         pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
      }

      uVar1 = ( *pcVar2 )(param_1 + *(long*)( this + 0x60 ));
      *(ulong*)( param_3 + 8 ) = (ulong)uVar1;
      LAB_0010a784:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindTRC<TextServer::StructuredTextParser>::ptrcall(Object*, void const**, void*) const */
   void MethodBindTRC<TextServer::StructuredTextParser>::ptrcall(MethodBindTRC<TextServer::StructuredTextParser> *this, Object *param_1, void **param_2, void *param_3) {
      uint uVar1;
      long *plVar3;
      long in_FS_OFFSET;
      long local_58;
      undefined8 local_50;
      char *local_48;
      undefined8 local_40;
      long local_30;
      code *pcVar2;
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
         StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
         if (*(long*)( param_1 + 8 ) == 0) {
            plVar3 = *(long**)( param_1 + 0x118 );
            if (plVar3 == (long*)0x0) {
               plVar3 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
            }

         }
 else {
            plVar3 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
         }

         if (local_48 == (char*)*plVar3) {
            if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
               StringName::unref();
            }

            MethodBind::get_name();
            local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
            local_40 = 0x35;
            local_50 = 0;
            String::parse_latin1((StrRange*)&local_50);
            vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
            _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }

            goto LAB_0010a933;
         }

         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

      }

      pcVar2 = *(code**)( this + 0x58 );
      if (( (ulong)pcVar2 & 1 ) != 0) {
         pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
      }

      uVar1 = ( *pcVar2 )(param_1 + *(long*)( this + 0x60 ));
      *(ulong*)param_3 = (ulong)uVar1;
      LAB_0010a933:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindT<TextServer::StructuredTextParser>::validated_call(Object*, Variant const**, Variant*)
   const */
   void MethodBindT<TextServer::StructuredTextParser>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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
            local_50 = 0;
            local_40 = 0x35;
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

            goto LAB_0010ac71;
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
         /* WARNING: Could not recover jumptable at 0x0010aafc. Too many branches */
         /* WARNING: Treating indirect jump as call */
         ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(undefined4*)( *(long*)param_3 + 8 ));
         return;
      }

      LAB_0010ac71:/* WARNING: Subroutine does not return */__stack_chk_fail();
   }

   /* MethodBindT<TextServer::StructuredTextParser>::ptrcall(Object*, void const**, void*) const */
   void MethodBindT<TextServer::StructuredTextParser>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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
            local_50 = 0;
            local_40 = 0x35;
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

            goto LAB_0010ae51;
         }

         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

      }

      UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
      /* WARNING: Load size is inaccurate */
      if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
         UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
      }

      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Could not recover jumptable at 0x0010acdb. Too many branches */
         /* WARNING: Treating indirect jump as call */
         ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), **param_3);
         return;
      }

      LAB_0010ae51:/* WARNING: Subroutine does not return */__stack_chk_fail();
   }

   /* MethodBindTRC<LinkButton::UnderlineMode>::call(Object*, Variant const**, int,
   Callable::CallError&) const */
   Object *MethodBindTRC<LinkButton::UnderlineMode>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
      undefined4 local_48[2];
      undefined8 local_40;
      undefined8 uStack_38;
      long local_30;
      Variant *pVVar3;
      plVar5 = (long*)CONCAT44(in_register_00000014, param_3);
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      *(undefined4*)param_1 = 0;
      *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
      if (( ( plVar5 != (long*)0x0 ) && ( plVar5[1] != 0 ) ) && ( *(char*)( plVar5[1] + 0x2e ) != '\0' )) {
         StringName::StringName((StringName*)&local_58, (StringName*)( param_2 + 3 ));
         if (plVar5[1] == 0) {
            plVar4 = (long*)plVar5[0x23];
            if (plVar4 == (long*)0x0) {
               plVar4 = (long*)( **(code**)( *plVar5 + 0x40 ) )(plVar5);
            }

         }
 else {
            plVar4 = (long*)( plVar5[1] + 0x20 );
         }

         if (local_58 == (char*)*plVar4) {
            if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
               StringName::unref();
            }

            MethodBind::get_name();
            local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
            local_60 = 0;
            local_50 = 0x35;
            String::parse_latin1((StrRange*)&local_60);
            vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
            _err_print_error(&_LC88, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
               StringName::unref();
            }

            goto LAB_0010af20;
         }

         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

      }

      pVVar3 = param_2[0xb];
      pVVar1 = param_2[0xc];
      if (in_R8D == 0) {
         if (( param_2[5] == (Variant*)0x0 ) || ( -1 < *(int*)( param_2[5] + -8 ) )) {
            *in_R9 = 0;
            if (( (ulong)pVVar3 & 1 ) != 0) {
               pVVar3 = *(Variant**)( pVVar3 + *(long*)( (long)plVar5 + (long)pVVar1 ) + -1 );
            }

            iVar2 = ( *(code*)pVVar3 )();
            Variant::Variant((Variant*)local_48, iVar2);
            if (Variant::needs_deinit[*(int*)param_1] != '\0') {
               Variant::_clear_internal();
            }

            *(undefined4*)param_1 = local_48[0];
            *(undefined8*)( param_1 + 8 ) = local_40;
            *(undefined8*)( param_1 + 0x10 ) = uStack_38;
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

      LAB_0010af20:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return param_1;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindTRC<LinkButton::UnderlineMode>::validated_call(Object*, Variant const**, Variant*)
   const */
   void MethodBindTRC<LinkButton::UnderlineMode>::validated_call(MethodBindTRC<LinkButton::UnderlineMode> *this, Object *param_1, Variant **param_2, Variant *param_3) {
      uint uVar1;
      long *plVar3;
      long in_FS_OFFSET;
      long local_58;
      undefined8 local_50;
      char *local_48;
      undefined8 local_40;
      long local_30;
      code *pcVar2;
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
         StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
         if (*(long*)( param_1 + 8 ) == 0) {
            plVar3 = *(long**)( param_1 + 0x118 );
            if (plVar3 == (long*)0x0) {
               plVar3 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
            }

         }
 else {
            plVar3 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
         }

         if (local_48 == (char*)*plVar3) {
            if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
               StringName::unref();
            }

            MethodBind::get_name();
            local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
            local_40 = 0x35;
            local_50 = 0;
            String::parse_latin1((StrRange*)&local_50);
            vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
            _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }

            goto LAB_0010b134;
         }

         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

      }

      pcVar2 = *(code**)( this + 0x58 );
      if (( (ulong)pcVar2 & 1 ) != 0) {
         pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
      }

      uVar1 = ( *pcVar2 )(param_1 + *(long*)( this + 0x60 ));
      *(ulong*)( param_3 + 8 ) = (ulong)uVar1;
      LAB_0010b134:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindTRC<LinkButton::UnderlineMode>::ptrcall(Object*, void const**, void*) const */
   void MethodBindTRC<LinkButton::UnderlineMode>::ptrcall(MethodBindTRC<LinkButton::UnderlineMode> *this, Object *param_1, void **param_2, void *param_3) {
      uint uVar1;
      long *plVar3;
      long in_FS_OFFSET;
      long local_58;
      undefined8 local_50;
      char *local_48;
      undefined8 local_40;
      long local_30;
      code *pcVar2;
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
         StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
         if (*(long*)( param_1 + 8 ) == 0) {
            plVar3 = *(long**)( param_1 + 0x118 );
            if (plVar3 == (long*)0x0) {
               plVar3 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
            }

         }
 else {
            plVar3 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
         }

         if (local_48 == (char*)*plVar3) {
            if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
               StringName::unref();
            }

            MethodBind::get_name();
            local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
            local_40 = 0x35;
            local_50 = 0;
            String::parse_latin1((StrRange*)&local_50);
            vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
            _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }

            goto LAB_0010b2e3;
         }

         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

      }

      pcVar2 = *(code**)( this + 0x58 );
      if (( (ulong)pcVar2 & 1 ) != 0) {
         pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
      }

      uVar1 = ( *pcVar2 )(param_1 + *(long*)( this + 0x60 ));
      *(ulong*)param_3 = (ulong)uVar1;
      LAB_0010b2e3:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindT<LinkButton::UnderlineMode>::validated_call(Object*, Variant const**, Variant*) const
    */
   void MethodBindT<LinkButton::UnderlineMode>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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
            local_50 = 0;
            local_40 = 0x35;
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

            goto LAB_0010b621;
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
         /* WARNING: Could not recover jumptable at 0x0010b4ac. Too many branches */
         /* WARNING: Treating indirect jump as call */
         ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(undefined4*)( *(long*)param_3 + 8 ));
         return;
      }

      LAB_0010b621:/* WARNING: Subroutine does not return */__stack_chk_fail();
   }

   /* MethodBindT<LinkButton::UnderlineMode>::ptrcall(Object*, void const**, void*) const */
   void MethodBindT<LinkButton::UnderlineMode>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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
            local_50 = 0;
            local_40 = 0x35;
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

            goto LAB_0010b801;
         }

         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

      }

      UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
      /* WARNING: Load size is inaccurate */
      if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
         UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
      }

      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Could not recover jumptable at 0x0010b68b. Too many branches */
         /* WARNING: Treating indirect jump as call */
         ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), **param_3);
         return;
      }

      LAB_0010b801:/* WARNING: Subroutine does not return */__stack_chk_fail();
   }

   /* MethodBindTRC<Control::TextDirection>::call(Object*, Variant const**, int, Callable::CallError&)
   const */
   Object *MethodBindTRC<Control::TextDirection>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
      undefined4 local_48[2];
      undefined8 local_40;
      undefined8 uStack_38;
      long local_30;
      Variant *pVVar3;
      plVar5 = (long*)CONCAT44(in_register_00000014, param_3);
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      *(undefined4*)param_1 = 0;
      *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
      if (( ( plVar5 != (long*)0x0 ) && ( plVar5[1] != 0 ) ) && ( *(char*)( plVar5[1] + 0x2e ) != '\0' )) {
         StringName::StringName((StringName*)&local_58, (StringName*)( param_2 + 3 ));
         if (plVar5[1] == 0) {
            plVar4 = (long*)plVar5[0x23];
            if (plVar4 == (long*)0x0) {
               plVar4 = (long*)( **(code**)( *plVar5 + 0x40 ) )(plVar5);
            }

         }
 else {
            plVar4 = (long*)( plVar5[1] + 0x20 );
         }

         if (local_58 == (char*)*plVar4) {
            if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
               StringName::unref();
            }

            MethodBind::get_name();
            local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
            local_60 = 0;
            local_50 = 0x35;
            String::parse_latin1((StrRange*)&local_60);
            vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
            _err_print_error(&_LC88, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
               StringName::unref();
            }

            goto LAB_0010b8d0;
         }

         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

      }

      pVVar3 = param_2[0xb];
      pVVar1 = param_2[0xc];
      if (in_R8D == 0) {
         if (( param_2[5] == (Variant*)0x0 ) || ( -1 < *(int*)( param_2[5] + -8 ) )) {
            *in_R9 = 0;
            if (( (ulong)pVVar3 & 1 ) != 0) {
               pVVar3 = *(Variant**)( pVVar3 + *(long*)( (long)plVar5 + (long)pVVar1 ) + -1 );
            }

            iVar2 = ( *(code*)pVVar3 )();
            Variant::Variant((Variant*)local_48, iVar2);
            if (Variant::needs_deinit[*(int*)param_1] != '\0') {
               Variant::_clear_internal();
            }

            *(undefined4*)param_1 = local_48[0];
            *(undefined8*)( param_1 + 8 ) = local_40;
            *(undefined8*)( param_1 + 0x10 ) = uStack_38;
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

      LAB_0010b8d0:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return param_1;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindTRC<Control::TextDirection>::validated_call(Object*, Variant const**, Variant*) const
    */
   void MethodBindTRC<Control::TextDirection>::validated_call(MethodBindTRC<Control::TextDirection> *this, Object *param_1, Variant **param_2, Variant *param_3) {
      uint uVar1;
      long *plVar3;
      long in_FS_OFFSET;
      long local_58;
      undefined8 local_50;
      char *local_48;
      undefined8 local_40;
      long local_30;
      code *pcVar2;
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
         StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
         if (*(long*)( param_1 + 8 ) == 0) {
            plVar3 = *(long**)( param_1 + 0x118 );
            if (plVar3 == (long*)0x0) {
               plVar3 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
            }

         }
 else {
            plVar3 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
         }

         if (local_48 == (char*)*plVar3) {
            if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
               StringName::unref();
            }

            MethodBind::get_name();
            local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
            local_40 = 0x35;
            local_50 = 0;
            String::parse_latin1((StrRange*)&local_50);
            vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
            _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }

            goto LAB_0010bae4;
         }

         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

      }

      pcVar2 = *(code**)( this + 0x58 );
      if (( (ulong)pcVar2 & 1 ) != 0) {
         pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
      }

      uVar1 = ( *pcVar2 )(param_1 + *(long*)( this + 0x60 ));
      *(ulong*)( param_3 + 8 ) = (ulong)uVar1;
      LAB_0010bae4:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindTRC<Control::TextDirection>::ptrcall(Object*, void const**, void*) const */
   void MethodBindTRC<Control::TextDirection>::ptrcall(MethodBindTRC<Control::TextDirection> *this, Object *param_1, void **param_2, void *param_3) {
      uint uVar1;
      long *plVar3;
      long in_FS_OFFSET;
      long local_58;
      undefined8 local_50;
      char *local_48;
      undefined8 local_40;
      long local_30;
      code *pcVar2;
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
         StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
         if (*(long*)( param_1 + 8 ) == 0) {
            plVar3 = *(long**)( param_1 + 0x118 );
            if (plVar3 == (long*)0x0) {
               plVar3 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
            }

         }
 else {
            plVar3 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
         }

         if (local_48 == (char*)*plVar3) {
            if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
               StringName::unref();
            }

            MethodBind::get_name();
            local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
            local_40 = 0x35;
            local_50 = 0;
            String::parse_latin1((StrRange*)&local_50);
            vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
            _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }

            goto LAB_0010bc93;
         }

         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

      }

      pcVar2 = *(code**)( this + 0x58 );
      if (( (ulong)pcVar2 & 1 ) != 0) {
         pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
      }

      uVar1 = ( *pcVar2 )(param_1 + *(long*)( this + 0x60 ));
      *(ulong*)param_3 = (ulong)uVar1;
      LAB_0010bc93:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindT<Control::TextDirection>::validated_call(Object*, Variant const**, Variant*) const */
   void MethodBindT<Control::TextDirection>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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
            local_50 = 0;
            local_40 = 0x35;
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

            goto LAB_0010bfd1;
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
         /* WARNING: Could not recover jumptable at 0x0010be5c. Too many branches */
         /* WARNING: Treating indirect jump as call */
         ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(undefined4*)( *(long*)param_3 + 8 ));
         return;
      }

      LAB_0010bfd1:/* WARNING: Subroutine does not return */__stack_chk_fail();
   }

   /* MethodBindT<Control::TextDirection>::ptrcall(Object*, void const**, void*) const */
   void MethodBindT<Control::TextDirection>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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
            local_50 = 0;
            local_40 = 0x35;
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

            goto LAB_0010c1b1;
         }

         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

      }

      UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
      /* WARNING: Load size is inaccurate */
      if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
         UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
      }

      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Could not recover jumptable at 0x0010c03b. Too many branches */
         /* WARNING: Treating indirect jump as call */
         ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), **param_3);
         return;
      }

      LAB_0010c1b1:/* WARNING: Subroutine does not return */__stack_chk_fail();
   }

   /* MethodBindTRC<String>::call(Object*, Variant const**, int, Callable::CallError&) const */
   Object *MethodBindTRC<String>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
      undefined4 local_48[2];
      undefined8 local_40;
      undefined8 uStack_38;
      long local_30;
      plVar4 = (long*)CONCAT44(in_register_00000014, param_3);
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      *(undefined4*)param_1 = 0;
      *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
      if (( ( plVar4 != (long*)0x0 ) && ( plVar4[1] != 0 ) ) && ( *(char*)( plVar4[1] + 0x2e ) != '\0' )) {
         StringName::StringName((StringName*)&local_58, (StringName*)( param_2 + 3 ));
         if (plVar4[1] == 0) {
            plVar3 = (long*)plVar4[0x23];
            if (plVar3 == (long*)0x0) {
               plVar3 = (long*)( **(code**)( *plVar4 + 0x40 ) )(plVar4);
            }

         }
 else {
            plVar3 = (long*)( plVar4[1] + 0x20 );
         }

         if (local_58 == (char*)*plVar3) {
            if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
               StringName::unref();
            }

            MethodBind::get_name();
            local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
            local_60 = 0;
            local_50 = 0x35;
            String::parse_latin1((StrRange*)&local_60);
            vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
            _err_print_error(&_LC88, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
               StringName::unref();
            }

            goto LAB_0010c290;
         }

         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
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

            ( *(code*)pVVar2 )((CowData<char32_t>*)&local_58);
            Variant::Variant((Variant*)local_48, (String*)&local_58);
            if (Variant::needs_deinit[*(int*)param_1] != '\0') {
               Variant::_clear_internal();
            }

            *(undefined4*)param_1 = local_48[0];
            *(undefined8*)( param_1 + 8 ) = local_40;
            *(undefined8*)( param_1 + 0x10 ) = uStack_38;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
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

      LAB_0010c290:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return param_1;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindTRC<String>::validated_call(Object*, Variant const**, Variant*) const */
   void MethodBindTRC<String>::validated_call(MethodBindTRC<String> *this, Object *param_1, Variant **param_2, Variant *param_3) {
      code *pcVar1;
      long *plVar2;
      Variant **extraout_RDX;
      long in_FS_OFFSET;
      long local_58;
      undefined8 local_50;
      Variant **local_48;
      undefined8 local_40;
      long local_30;
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
         StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
         if (*(long*)( param_1 + 8 ) == 0) {
            plVar2 = *(long**)( param_1 + 0x118 );
            if (plVar2 == (long*)0x0) {
               plVar2 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
            }

         }
 else {
            plVar2 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
         }

         if (local_48 == (Variant**)*plVar2) {
            if (( StringName::configured != '\0' ) && ( local_48 != (Variant**)0x0 )) {
               StringName::unref();
            }

            MethodBind::get_name();
            local_48 = (Variant**)0x109918;
            local_40 = 0x35;
            local_50 = 0;
            String::parse_latin1((StrRange*)&local_50);
            vformat<StringName>((CowData<char32_t>*)&local_48, (StrRange*)&local_50, &local_58);
            _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (CowData<char32_t>*)&local_48, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }

            goto LAB_0010c4cc;
         }

         param_2 = local_48;
         if (( StringName::configured != '\0' ) && ( local_48 != (Variant**)0x0 )) {
            StringName::unref();
            param_2 = extraout_RDX;
         }

      }

      pcVar1 = *(code**)( this + 0x58 );
      if (( (ulong)pcVar1 & 1 ) != 0) {
         param_2 = *(Variant***)( param_1 + *(long*)( this + 0x60 ) );
         pcVar1 = *(code**)( pcVar1 + (long)param_2 + -1 );
      }

      ( *pcVar1 )((CowData<char32_t>*)&local_48, param_1 + *(long*)( this + 0x60 ), param_2);
      if (*(Variant***)( param_3 + 8 ) != local_48) {
         CowData<char32_t>::_ref((CowData<char32_t>*)( param_3 + 8 ), (CowData*)&local_48);
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
      LAB_0010c4cc:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindTRC<String>::ptrcall(Object*, void const**, void*) const */
   void MethodBindTRC<String>::ptrcall(MethodBindTRC<String> *this, Object *param_1, void **param_2, void *param_3) {
      code *pcVar1;
      long *plVar2;
      void **extraout_RDX;
      long in_FS_OFFSET;
      long local_58;
      undefined8 local_50;
      void **local_48;
      undefined8 local_40;
      long local_30;
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
         StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
         if (*(long*)( param_1 + 8 ) == 0) {
            plVar2 = *(long**)( param_1 + 0x118 );
            if (plVar2 == (long*)0x0) {
               plVar2 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
            }

         }
 else {
            plVar2 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
         }

         if (local_48 == (void**)*plVar2) {
            if (( StringName::configured != '\0' ) && ( local_48 != (void**)0x0 )) {
               StringName::unref();
            }

            MethodBind::get_name();
            local_48 = (void**)0x109918;
            local_40 = 0x35;
            local_50 = 0;
            String::parse_latin1((StrRange*)&local_50);
            vformat<StringName>((CowData<char32_t>*)&local_48, (StrRange*)&local_50, &local_58);
            _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (CowData<char32_t>*)&local_48, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }

            goto LAB_0010c69d;
         }

         param_2 = local_48;
         if (( StringName::configured != '\0' ) && ( local_48 != (void**)0x0 )) {
            StringName::unref();
            param_2 = extraout_RDX;
         }

      }

      pcVar1 = *(code**)( this + 0x58 );
      if (( (ulong)pcVar1 & 1 ) != 0) {
         param_2 = *(void***)( param_1 + *(long*)( this + 0x60 ) );
         pcVar1 = *(code**)( pcVar1 + (long)param_2 + -1 );
      }

      ( *pcVar1 )((CowData<char32_t>*)&local_48, param_1 + *(long*)( this + 0x60 ), param_2);
      /* WARNING: Load size is inaccurate */
      if (*param_3 != local_48) {
         CowData<char32_t>::_ref((CowData<char32_t>*)param_3, (CowData*)&local_48);
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
      LAB_0010c69d:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindT<String const&>::validated_call(Object*, Variant const**, Variant*) const */
   void MethodBindT<String_const&>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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
            local_50 = 0;
            local_40 = 0x35;
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

            goto LAB_0010c9d1;
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
         /* WARNING: Could not recover jumptable at 0x0010c85d. Too many branches */
         /* WARNING: Treating indirect jump as call */
         ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(long*)param_3 + 8);
         return;
      }

      LAB_0010c9d1:/* WARNING: Subroutine does not return */__stack_chk_fail();
   }

   /* MethodBindT<String const&>::ptrcall(Object*, void const**, void*) const */
   void MethodBindT<String_const&>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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
            local_50 = 0;
            local_40 = 0x35;
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

            goto LAB_0010cbb1;
         }

         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

      }

      UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
      /* WARNING: Load size is inaccurate */
      if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
         UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
      }

      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Could not recover jumptable at 0x0010ca39. Too many branches */
         /* WARNING: Treating indirect jump as call */
         ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *param_3);
         return;
      }

      LAB_0010cbb1:/* WARNING: Subroutine does not return */__stack_chk_fail();
   }

   /* MethodBindT<Array>::call(Object*, Variant const**, int, Callable::CallError&) const */
   Object *MethodBindT<Array>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
      plVar9 = (long*)CONCAT44(in_register_00000014, param_3);
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      if (( ( plVar9 != (long*)0x0 ) && ( plVar9[1] != 0 ) ) && ( *(char*)( plVar9[1] + 0x2e ) != '\0' )) {
         StringName::StringName((StringName*)&local_48, (StringName*)( param_2 + 3 ));
         if (plVar9[1] == 0) {
            plVar7 = (long*)plVar9[0x23];
            if (plVar7 == (long*)0x0) {
               plVar7 = (long*)( **(code**)( *plVar9 + 0x40 ) )(plVar9);
            }

         }
 else {
            plVar7 = (long*)( plVar9[1] + 0x20 );
         }

         if (local_48 == (char*)*plVar7) {
            if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
               StringName::unref();
            }

            MethodBind::get_name();
            local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
            local_50 = 0;
            local_40 = 0x35;
            String::parse_latin1((StrRange*)&local_50);
            vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
            _err_print_error(&_LC88, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }

            goto LAB_0010cd60;
         }

         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

      }

      pVVar11 = param_2[0xb];
      pVVar1 = param_2[0xc];
      if (in_R8D < 2) {
         pVVar10 = param_2[5];
         if (pVVar10 == (Variant*)0x0) {
            if (in_R8D != 1) goto LAB_0010cdb0;
            LAB_0010cda0:pVVar10 = *(Variant**)param_4;
         }
 else {
            lVar2 = *(long*)( pVVar10 + -8 );
            if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
               LAB_0010cdb0:uVar6 = 4;
               goto LAB_0010cd55;
            }

            if (in_R8D == 1) goto LAB_0010cda0;
            lVar8 = (long)( (int)lVar2 + -1 );
            if (lVar2 <= lVar8) {
               _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar8, lVar2, "p_index", "size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar3 = (code*)invalidInstructionException();
               ( *pcVar3 )();
            }

            pVVar10 = pVVar10 + lVar8 * 0x18;
         }

         *in_R9 = 0;
         if (( (ulong)pVVar11 & 1 ) != 0) {
            pVVar11 = *(Variant**)( pVVar11 + *(long*)( (long)plVar9 + (long)pVVar1 ) + -1 );
         }

         cVar5 = Variant::can_convert_strict(*(undefined4*)pVVar10, 0x1c);
         uVar4 = _LC93;
         if (cVar5 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }

         Variant::operator_cast_to_Array((Variant*)&local_48);
         ( *(code*)pVVar11 )((Variant*)( (long)plVar9 + (long)pVVar1 ), (Variant*)&local_48);
         Array::~Array((Array*)&local_48);
      }
 else {
         uVar6 = 3;
         LAB_0010cd55:*in_R9 = uVar6;
         in_R9[2] = 1;
      }

      LAB_0010cd60:*(undefined4*)param_1 = 0;
      *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return param_1;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindT<String const&>::call(Object*, Variant const**, int, Callable::CallError&) const */
   Object *MethodBindT<String_const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
      plVar9 = (long*)CONCAT44(in_register_00000014, param_3);
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      if (( ( plVar9 != (long*)0x0 ) && ( plVar9[1] != 0 ) ) && ( *(char*)( plVar9[1] + 0x2e ) != '\0' )) {
         StringName::StringName((StringName*)&local_48, (StringName*)( param_2 + 3 ));
         if (plVar9[1] == 0) {
            plVar7 = (long*)plVar9[0x23];
            if (plVar7 == (long*)0x0) {
               plVar7 = (long*)( **(code**)( *plVar9 + 0x40 ) )(plVar9);
            }

         }
 else {
            plVar7 = (long*)( plVar9[1] + 0x20 );
         }

         if (local_48 == (char*)*plVar7) {
            if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
               StringName::unref();
            }

            MethodBind::get_name();
            local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
            local_50 = 0;
            local_40 = 0x35;
            String::parse_latin1((StrRange*)&local_50);
            vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
            _err_print_error(&_LC88, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }

            goto LAB_0010d090;
         }

         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

      }

      pVVar11 = param_2[0xb];
      pVVar1 = param_2[0xc];
      if (in_R8D < 2) {
         pVVar10 = param_2[5];
         if (pVVar10 == (Variant*)0x0) {
            if (in_R8D != 1) goto LAB_0010d0e0;
            LAB_0010d0d0:pVVar10 = *(Variant**)param_4;
         }
 else {
            lVar2 = *(long*)( pVVar10 + -8 );
            if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
               LAB_0010d0e0:uVar6 = 4;
               goto LAB_0010d085;
            }

            if (in_R8D == 1) goto LAB_0010d0d0;
            lVar8 = (long)( (int)lVar2 + -1 );
            if (lVar2 <= lVar8) {
               _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar8, lVar2, "p_index", "size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar3 = (code*)invalidInstructionException();
               ( *pcVar3 )();
            }

            pVVar10 = pVVar10 + lVar8 * 0x18;
         }

         *in_R9 = 0;
         if (( (ulong)pVVar11 & 1 ) != 0) {
            pVVar11 = *(Variant**)( pVVar11 + *(long*)( (long)plVar9 + (long)pVVar1 ) + -1 );
         }

         cVar5 = Variant::can_convert_strict(*(undefined4*)pVVar10, 4);
         uVar4 = _LC95;
         if (cVar5 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }

         Variant::operator_cast_to_String((Variant*)&local_48);
         ( *(code*)pVVar11 )((Variant*)( (long)plVar9 + (long)pVVar1 ), (Variant*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
      }
 else {
         uVar6 = 3;
         LAB_0010d085:*in_R9 = uVar6;
         in_R9[2] = 1;
      }

      LAB_0010d090:*(undefined4*)param_1 = 0;
      *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return param_1;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* void call_with_variant_args_dv<__UnexistingClass,
   TextServer::StructuredTextParser>(__UnexistingClass*, void
   (__UnexistingClass::*)(TextServer::StructuredTextParser), Variant const**, int,
   Callable::CallError&, Vector<Variant> const&) */
   void call_with_variant_args_dv<__UnexistingClass,TextServer::StructuredTextParser>(__UnexistingClass *param_1, _func_void_StructuredTextParser *param_2, Variant **param_3, int param_4, CallError *param_5, Vector *param_6) {
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
         goto LAB_0010d39d;
      }

      lVar1 = *(long*)( in_stack_00000008 + 8 );
      if (lVar1 == 0) {
         if (uVar8 != 1) goto LAB_0010d400;
      }
 else {
         lVar2 = *(long*)( lVar1 + -8 );
         if ((int)lVar2 < (int)( uVar8 ^ 1 )) {
            LAB_0010d400:uVar6 = 4;
            LAB_0010d39d:*(undefined4*)param_6 = uVar6;
            *(undefined4*)( param_6 + 8 ) = 1;
            return;
         }

         if (uVar8 != 1) {
            lVar7 = (long)( (int)lVar2 + -1 );
            if (lVar2 <= lVar7) {
               _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar7, lVar2, "p_index", "size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar3 = (code*)invalidInstructionException();
               ( *pcVar3 )();
            }

            this(Variant * )(lVar1 + lVar7 * 0x18);
            goto LAB_0010d31b;
         }

      }

      this * (Variant**)CONCAT44(in_register_0000000c, param_4);
      LAB_0010d31b:*(undefined4*)param_6 = 0;
      if (( (ulong)param_2 & 1 ) != 0) {
         param_2 = *(_func_void_StructuredTextParser**)( param_2 + *(long*)( param_1 + (long)param_3 ) + -1 );
      }

      cVar5 = Variant::can_convert_strict(*(undefined4*)this, 2);
      uVar4 = _LC96;
      if (cVar5 == '\0') {
         *(undefined4*)param_6 = 2;
         *(undefined8*)( param_6 + 4 ) = uVar4;
      }

      Variant::operator_cast_to_long(this);
      /* WARNING: Could not recover jumptable at 0x0010d376. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *param_2 )((char)( param_1 + (long)param_3 ));
      return;
   }

   /* MethodBindT<TextServer::StructuredTextParser>::call(Object*, Variant const**, int,
   Callable::CallError&) const */
   Object *MethodBindT<TextServer::StructuredTextParser>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
      p_Var2 = (__UnexistingClass*)CONCAT44(in_register_00000014, param_3);
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      if (( ( p_Var2 != (__UnexistingClass*)0x0 ) && ( *(long*)( p_Var2 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( p_Var2 + 8 ) + 0x2e ) != '\0' )) {
         StringName::StringName((StringName*)&local_48, (StringName*)( param_2 + 3 ));
         if (*(long*)( p_Var2 + 8 ) == 0) {
            plVar1 = *(long**)( p_Var2 + 0x118 );
            if (plVar1 == (long*)0x0) {
               plVar1 = (long*)( **(code**)( *(long*)p_Var2 + 0x40 ) )(p_Var2);
            }

         }
 else {
            plVar1 = (long*)( *(long*)( p_Var2 + 8 ) + 0x20 );
         }

         in_R8 = (CallError*)( (ulong)in_R8 & 0xffffffff );
         if (local_48 == (char*)*plVar1) {
            if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
               StringName::unref();
            }

            MethodBind::get_name();
            local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
            local_50 = 0;
            local_40 = 0x35;
            String::parse_latin1((StrRange*)&local_50);
            vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
            _err_print_error(&_LC88, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }

            *(undefined4*)param_1 = 0;
            *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
            goto LAB_0010d466;
         }

         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

      }

      call_with_variant_args_dv<__UnexistingClass,TextServer::StructuredTextParser>(p_Var2, (_func_void_StructuredTextParser*)param_2[0xb], (Variant**)param_2[0xc], (int)param_4, in_R8, in_R9);
      *(undefined4*)param_1 = 0;
      *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
      LAB_0010d466:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return param_1;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* void call_with_variant_args_dv<__UnexistingClass, LinkButton::UnderlineMode>(__UnexistingClass*,
   void (__UnexistingClass::*)(LinkButton::UnderlineMode), Variant const**, int,
   Callable::CallError&, Vector<Variant> const&) */
   void call_with_variant_args_dv<__UnexistingClass,LinkButton::UnderlineMode>(__UnexistingClass *param_1, _func_void_UnderlineMode *param_2, Variant **param_3, int param_4, CallError *param_5, Vector *param_6) {
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
         goto LAB_0010d72d;
      }

      lVar1 = *(long*)( in_stack_00000008 + 8 );
      if (lVar1 == 0) {
         if (uVar8 != 1) goto LAB_0010d790;
      }
 else {
         lVar2 = *(long*)( lVar1 + -8 );
         if ((int)lVar2 < (int)( uVar8 ^ 1 )) {
            LAB_0010d790:uVar6 = 4;
            LAB_0010d72d:*(undefined4*)param_6 = uVar6;
            *(undefined4*)( param_6 + 8 ) = 1;
            return;
         }

         if (uVar8 != 1) {
            lVar7 = (long)( (int)lVar2 + -1 );
            if (lVar2 <= lVar7) {
               _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar7, lVar2, "p_index", "size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar3 = (code*)invalidInstructionException();
               ( *pcVar3 )();
            }

            this(Variant * )(lVar1 + lVar7 * 0x18);
            goto LAB_0010d6ab;
         }

      }

      this * (Variant**)CONCAT44(in_register_0000000c, param_4);
      LAB_0010d6ab:*(undefined4*)param_6 = 0;
      if (( (ulong)param_2 & 1 ) != 0) {
         param_2 = *(_func_void_UnderlineMode**)( param_2 + *(long*)( param_1 + (long)param_3 ) + -1 );
      }

      cVar5 = Variant::can_convert_strict(*(undefined4*)this, 2);
      uVar4 = _LC96;
      if (cVar5 == '\0') {
         *(undefined4*)param_6 = 2;
         *(undefined8*)( param_6 + 4 ) = uVar4;
      }

      Variant::operator_cast_to_long(this);
      /* WARNING: Could not recover jumptable at 0x0010d706. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *param_2 )((char)( param_1 + (long)param_3 ));
      return;
   }

   /* MethodBindT<LinkButton::UnderlineMode>::call(Object*, Variant const**, int, Callable::CallError&)
   const */
   Object *MethodBindT<LinkButton::UnderlineMode>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
      p_Var2 = (__UnexistingClass*)CONCAT44(in_register_00000014, param_3);
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      if (( ( p_Var2 != (__UnexistingClass*)0x0 ) && ( *(long*)( p_Var2 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( p_Var2 + 8 ) + 0x2e ) != '\0' )) {
         StringName::StringName((StringName*)&local_48, (StringName*)( param_2 + 3 ));
         if (*(long*)( p_Var2 + 8 ) == 0) {
            plVar1 = *(long**)( p_Var2 + 0x118 );
            if (plVar1 == (long*)0x0) {
               plVar1 = (long*)( **(code**)( *(long*)p_Var2 + 0x40 ) )(p_Var2);
            }

         }
 else {
            plVar1 = (long*)( *(long*)( p_Var2 + 8 ) + 0x20 );
         }

         in_R8 = (CallError*)( (ulong)in_R8 & 0xffffffff );
         if (local_48 == (char*)*plVar1) {
            if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
               StringName::unref();
            }

            MethodBind::get_name();
            local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
            local_50 = 0;
            local_40 = 0x35;
            String::parse_latin1((StrRange*)&local_50);
            vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
            _err_print_error(&_LC88, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }

            *(undefined4*)param_1 = 0;
            *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
            goto LAB_0010d7f6;
         }

         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

      }

      call_with_variant_args_dv<__UnexistingClass,LinkButton::UnderlineMode>(p_Var2, (_func_void_UnderlineMode*)param_2[0xb], (Variant**)param_2[0xc], (int)param_4, in_R8, in_R9);
      *(undefined4*)param_1 = 0;
      *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
      LAB_0010d7f6:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return param_1;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* void call_with_variant_args_dv<__UnexistingClass, Control::TextDirection>(__UnexistingClass*,
   void (__UnexistingClass::*)(Control::TextDirection), Variant const**, int, Callable::CallError&,
   Vector<Variant> const&) */
   void call_with_variant_args_dv<__UnexistingClass,Control::TextDirection>(__UnexistingClass *param_1, _func_void_TextDirection *param_2, Variant **param_3, int param_4, CallError *param_5, Vector *param_6) {
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
         goto LAB_0010dabd;
      }

      lVar1 = *(long*)( in_stack_00000008 + 8 );
      if (lVar1 == 0) {
         if (uVar8 != 1) goto LAB_0010db20;
      }
 else {
         lVar2 = *(long*)( lVar1 + -8 );
         if ((int)lVar2 < (int)( uVar8 ^ 1 )) {
            LAB_0010db20:uVar6 = 4;
            LAB_0010dabd:*(undefined4*)param_6 = uVar6;
            *(undefined4*)( param_6 + 8 ) = 1;
            return;
         }

         if (uVar8 != 1) {
            lVar7 = (long)( (int)lVar2 + -1 );
            if (lVar2 <= lVar7) {
               _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar7, lVar2, "p_index", "size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar3 = (code*)invalidInstructionException();
               ( *pcVar3 )();
            }

            this(Variant * )(lVar1 + lVar7 * 0x18);
            goto LAB_0010da3b;
         }

      }

      this * (Variant**)CONCAT44(in_register_0000000c, param_4);
      LAB_0010da3b:*(undefined4*)param_6 = 0;
      if (( (ulong)param_2 & 1 ) != 0) {
         param_2 = *(_func_void_TextDirection**)( param_2 + *(long*)( param_1 + (long)param_3 ) + -1 );
      }

      cVar5 = Variant::can_convert_strict(*(undefined4*)this, 2);
      uVar4 = _LC96;
      if (cVar5 == '\0') {
         *(undefined4*)param_6 = 2;
         *(undefined8*)( param_6 + 4 ) = uVar4;
      }

      Variant::operator_cast_to_long(this);
      /* WARNING: Could not recover jumptable at 0x0010da96. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *param_2 )((char)( param_1 + (long)param_3 ));
      return;
   }

   /* MethodBindT<Control::TextDirection>::call(Object*, Variant const**, int, Callable::CallError&)
   const */
   Object *MethodBindT<Control::TextDirection>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
      p_Var2 = (__UnexistingClass*)CONCAT44(in_register_00000014, param_3);
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      if (( ( p_Var2 != (__UnexistingClass*)0x0 ) && ( *(long*)( p_Var2 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( p_Var2 + 8 ) + 0x2e ) != '\0' )) {
         StringName::StringName((StringName*)&local_48, (StringName*)( param_2 + 3 ));
         if (*(long*)( p_Var2 + 8 ) == 0) {
            plVar1 = *(long**)( p_Var2 + 0x118 );
            if (plVar1 == (long*)0x0) {
               plVar1 = (long*)( **(code**)( *(long*)p_Var2 + 0x40 ) )(p_Var2);
            }

         }
 else {
            plVar1 = (long*)( *(long*)( p_Var2 + 8 ) + 0x20 );
         }

         in_R8 = (CallError*)( (ulong)in_R8 & 0xffffffff );
         if (local_48 == (char*)*plVar1) {
            if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
               StringName::unref();
            }

            MethodBind::get_name();
            local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
            local_50 = 0;
            local_40 = 0x35;
            String::parse_latin1((StrRange*)&local_50);
            vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
            _err_print_error(&_LC88, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }

            *(undefined4*)param_1 = 0;
            *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
            goto LAB_0010db86;
         }

         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

      }

      call_with_variant_args_dv<__UnexistingClass,Control::TextDirection>(p_Var2, (_func_void_TextDirection*)param_2[0xb], (Variant**)param_2[0xc], (int)param_4, in_R8, in_R9);
      *(undefined4*)param_1 = 0;
      *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
      LAB_0010db86:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return param_1;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* LinkButton::~LinkButton() */
   void LinkButton::~LinkButton(LinkButton *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* MethodDefinition::~MethodDefinition() */
   void MethodDefinition::~MethodDefinition(MethodDefinition *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* PropertyInfo::PropertyInfo(Variant::Type, String const&, PropertyHint, String const&, unsigned
   int, StringName const&) */
   void PropertyInfo::PropertyInfo(void) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* PropertyInfo::~PropertyInfo() */
   void PropertyInfo::~PropertyInfo(PropertyInfo *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* MethodBindTRC<Array>::~MethodBindTRC() */
   void MethodBindTRC<Array>::~MethodBindTRC(MethodBindTRC<Array> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* MethodBindT<Array>::~MethodBindT() */
   void MethodBindT<Array>::~MethodBindT(MethodBindT<Array> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* MethodBindTRC<TextServer::StructuredTextParser>::~MethodBindTRC() */
   void MethodBindTRC<TextServer::StructuredTextParser>::~MethodBindTRC(MethodBindTRC<TextServer::StructuredTextParser> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* MethodBindT<TextServer::StructuredTextParser>::~MethodBindT() */
   void MethodBindT<TextServer::StructuredTextParser>::~MethodBindT(MethodBindT<TextServer::StructuredTextParser> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* MethodBindTRC<LinkButton::UnderlineMode>::~MethodBindTRC() */
   void MethodBindTRC<LinkButton::UnderlineMode>::~MethodBindTRC(MethodBindTRC<LinkButton::UnderlineMode> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* MethodBindT<LinkButton::UnderlineMode>::~MethodBindT() */
   void MethodBindT<LinkButton::UnderlineMode>::~MethodBindT(MethodBindT<LinkButton::UnderlineMode> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* MethodBindTRC<String>::~MethodBindTRC() */
   void MethodBindTRC<String>::~MethodBindTRC(MethodBindTRC<String> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* MethodBindT<String const&>::~MethodBindT() */
   void MethodBindT<String_const&>::~MethodBindT(MethodBindT<String_const&> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* MethodBindTRC<Control::TextDirection>::~MethodBindTRC() */
   void MethodBindTRC<Control::TextDirection>::~MethodBindTRC(MethodBindTRC<Control::TextDirection> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* MethodBindT<Control::TextDirection>::~MethodBindT() */
   void MethodBindT<Control::TextDirection>::~MethodBindT(MethodBindT<Control::TextDirection> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* StringName::~StringName() */
   void StringName::~StringName(StringName *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

}


/* ProgressBar::get_fill_mode() */undefined4 ProgressBar::get_fill_mode(ProgressBar *this) {
   return *(undefined4*)( this + 0xa44 );
}
/* ProgressBar::is_percentage_shown() const */ProgressBar ProgressBar::is_percentage_shown(ProgressBar *this) {
   return this[0x9f0];
}
/* ProgressBar::is_indeterminate() const */ProgressBar ProgressBar::is_indeterminate(ProgressBar *this) {
   return this[0x9f1];
}
/* ProgressBar::is_editor_preview_indeterminate_enabled() const */ProgressBar ProgressBar::is_editor_preview_indeterminate_enabled(ProgressBar *this) {
   return this[0x9f2];
}
/* ProgressBar::set_fill_mode(int) */void ProgressBar::set_fill_mode(ProgressBar *this, int param_1) {
   if ((uint)param_1 < 4) {
      *(int*)( this + 0xa44 ) = param_1;
      *(undefined4*)( this + 0xa40 ) = 0;
      CanvasItem::queue_redraw();
      return;
   }

   _err_print_index_error("set_fill_mode", "scene/gui/progress_bar.cpp", 0xbe, (long)param_1, 4, "p_fill", "FILL_MODE_MAX", "", false, false);
   return;
}
/* ProgressBar::set_show_percentage(bool) */void ProgressBar::set_show_percentage(ProgressBar *this, bool param_1) {
   if (this[0x9f0] != (ProgressBar)param_1) {
      this[0x9f0] = (ProgressBar)param_1;
      Control::update_minimum_size();
      CanvasItem::queue_redraw();
      return;
   }

   return;
}
/* ProgressBar::set_editor_preview_indeterminate(bool) */void ProgressBar::set_editor_preview_indeterminate(ProgressBar *this, bool param_1) {
   char cVar1;
   if (this[0x9f2] == (ProgressBar)param_1) {
      return;
   }

   this[0x9f2] = (ProgressBar)param_1;
   cVar1 = Node::is_part_of_edited_scene();
   if (cVar1 != '\0') {
      *(undefined4*)( this + 0xa40 ) = 0;
      Node::set_process_internal(SUB81(this, 0));
      CanvasItem::queue_redraw();
      return;
   }

   return;
}
/* ProgressBar::set_indeterminate(bool) */void ProgressBar::set_indeterminate(ProgressBar *this, bool param_1) {
   if (this[0x9f1] != (ProgressBar)param_1) {
      this[0x9f1] = (ProgressBar)param_1;
      *(undefined4*)( this + 0xa40 ) = 0;
      Node::is_part_of_edited_scene();
      Node::set_process_internal(SUB81(this, 0));
      Object::notify_property_list_changed();
      Control::update_minimum_size();
      CanvasItem::queue_redraw();
      return;
   }

   return;
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   ProgressBar::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#7}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<void(Node *, StringName_const &, StringName_const &),ProgressBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#7}>::_M_manager(undefined8 *param_1, undefined8 param_2, int param_3) {
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
   ProgressBar::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#6}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<void(Node *, StringName_const &, StringName_const &),ProgressBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#6}>::_M_manager(undefined8 *param_1, undefined8 param_2, int param_3) {
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
   ProgressBar::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#5}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<void(Node *, StringName_const &, StringName_const &),ProgressBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#5}>::_M_manager(undefined8 *param_1, undefined8 param_2, int param_3) {
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
   ProgressBar::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#4}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<void(Node *, StringName_const &, StringName_const &),ProgressBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#4}>::_M_manager(undefined8 *param_1, undefined8 param_2, int param_3) {
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
   ProgressBar::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#3}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<void(Node *, StringName_const &, StringName_const &),ProgressBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#3}>::_M_manager(undefined8 *param_1, undefined8 param_2, int param_3) {
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
   ProgressBar::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#2}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<void(Node *, StringName_const &, StringName_const &),ProgressBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#2}>::_M_manager(undefined8 *param_1, undefined8 param_2, int param_3) {
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
   ProgressBar::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#1}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<void(Node *, StringName_const &, StringName_const &),ProgressBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#1}>::_M_manager(undefined8 *param_1, undefined8 param_2, int param_3) {
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
   ProgressBar::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#3}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),ProgressBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#3}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
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

   lVar4 = __dynamic_cast(*param_2, &Object::typeinfo, &ProgressBar::typeinfo, 0);
   Control::get_theme_item(local_48, lVar4, 2, param_3, param_4);
   pOVar5 = (Object*)Variant::get_validated_object();
   pOVar1 = *(Object**)( lVar4 + 0xa08 );
   if (pOVar5 == pOVar1) goto LAB_001003e0;
   if (pOVar5 == (Object*)0x0) {
      if (pOVar1 == (Object*)0x0) goto LAB_001003e0;
      *(undefined8*)( lVar4 + 0xa08 ) = 0;
   }
 else {
      pOVar5 = (Object*)__dynamic_cast(pOVar5, &Object::typeinfo, &Font::typeinfo, 0);
      if (pOVar1 == pOVar5) goto LAB_001003e0;
      *(Object**)( lVar4 + 0xa08 ) = pOVar5;
      if (pOVar5 != (Object*)0x0) {
         cVar3 = RefCounted::reference();
         if (cVar3 == '\0') {
            *(undefined8*)( lVar4 + 0xa08 ) = 0;
         }

      }

      if (pOVar1 == (Object*)0x0) goto LAB_001003e0;
   }

   cVar3 = RefCounted::unreference();
   if (cVar3 != '\0') {
      cVar3 = predelete_handler(pOVar1);
      if (cVar3 != '\0') {
         ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
         Memory::free_static(pOVar1, false);
      }

   }

   LAB_001003e0:if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   ProgressBar::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#5}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),ProgressBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#5}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
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
      _DAT_00000a14 = Variant::operator_cast_to_Color((Variant*)local_48);
      /* WARNING: Does not return */
      pcVar1 = (code*)invalidInstructionException();
      _DAT_00000a1c = in_XMM1_Qa;
      ( *pcVar1 )();
   }

   lVar2 = __dynamic_cast(*param_2, &Object::typeinfo, &ProgressBar::typeinfo, 0);
   Control::get_theme_item(local_48, lVar2, 0, param_3, param_4);
   uVar3 = Variant::operator_cast_to_Color((Variant*)local_48);
   *(undefined8*)( lVar2 + 0xa14 ) = uVar3;
   *(undefined8*)( lVar2 + 0xa1c ) = in_XMM1_Qa;
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
   ProgressBar::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#7}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),ProgressBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#7}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
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
      _DAT_00000a28 = Variant::operator_cast_to_Color((Variant*)local_48);
      /* WARNING: Does not return */
      pcVar1 = (code*)invalidInstructionException();
      _DAT_00000a30 = in_XMM1_Qa;
      ( *pcVar1 )();
   }

   lVar2 = __dynamic_cast(*param_2, &Object::typeinfo, &ProgressBar::typeinfo, 0);
   Control::get_theme_item(local_48, lVar2, 0, param_3, param_4);
   uVar3 = Variant::operator_cast_to_Color((Variant*)local_48);
   *(undefined8*)( lVar2 + 0xa28 ) = uVar3;
   *(undefined8*)( lVar2 + 0xa30 ) = in_XMM1_Qa;
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
   ProgressBar::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#6}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),ProgressBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#6}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
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
      _DAT_00000a24 = 0;
      /* WARNING: Does not return */
      pcVar1 = (code*)invalidInstructionException();
      ( *pcVar1 )();
   }

   lVar3 = __dynamic_cast(*param_2, &Object::typeinfo, &ProgressBar::typeinfo, 0);
   Control::get_theme_item(local_48, lVar3, 1, param_3, param_4);
   iVar2 = Variant::operator_cast_to_int((Variant*)local_48);
   *(int*)( lVar3 + 0xa24 ) = iVar2;
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
   ProgressBar::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#4}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),ProgressBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#4}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
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
      _DAT_00000a10 = 0;
      /* WARNING: Does not return */
      pcVar1 = (code*)invalidInstructionException();
      ( *pcVar1 )();
   }

   lVar3 = __dynamic_cast(*param_2, &Object::typeinfo, &ProgressBar::typeinfo, 0);
   Control::get_theme_item(local_48, lVar3, 3, param_3, param_4);
   iVar2 = Variant::operator_cast_to_int((Variant*)local_48);
   *(int*)( lVar3 + 0xa10 ) = iVar2;
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
   ProgressBar::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#1}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),ProgressBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#1}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
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

   lVar4 = __dynamic_cast(*param_2, &Object::typeinfo, &ProgressBar::typeinfo, 0);
   Control::get_theme_item(local_48, lVar4, 5, param_3, param_4);
   pOVar5 = (Object*)Variant::get_validated_object();
   pOVar1 = *(Object**)( lVar4 + 0x9f8 );
   if (pOVar5 == pOVar1) goto LAB_00100810;
   if (pOVar5 == (Object*)0x0) {
      if (pOVar1 == (Object*)0x0) goto LAB_00100810;
      *(undefined8*)( lVar4 + 0x9f8 ) = 0;
   }
 else {
      pOVar5 = (Object*)__dynamic_cast(pOVar5, &Object::typeinfo, &StyleBox::typeinfo, 0);
      if (pOVar1 == pOVar5) goto LAB_00100810;
      *(Object**)( lVar4 + 0x9f8 ) = pOVar5;
      if (pOVar5 != (Object*)0x0) {
         cVar3 = RefCounted::reference();
         if (cVar3 == '\0') {
            *(undefined8*)( lVar4 + 0x9f8 ) = 0;
         }

      }

      if (pOVar1 == (Object*)0x0) goto LAB_00100810;
   }

   cVar3 = RefCounted::unreference();
   if (cVar3 != '\0') {
      cVar3 = predelete_handler(pOVar1);
      if (cVar3 != '\0') {
         ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
         Memory::free_static(pOVar1, false);
      }

   }

   LAB_00100810:if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   ProgressBar::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#2}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),ProgressBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#2}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
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

   lVar4 = __dynamic_cast(*param_2, &Object::typeinfo, &ProgressBar::typeinfo, 0);
   Control::get_theme_item(local_48, lVar4, 5, param_3, param_4);
   pOVar5 = (Object*)Variant::get_validated_object();
   pOVar1 = *(Object**)( lVar4 + 0xa00 );
   if (pOVar5 == pOVar1) goto LAB_00100960;
   if (pOVar5 == (Object*)0x0) {
      if (pOVar1 == (Object*)0x0) goto LAB_00100960;
      *(undefined8*)( lVar4 + 0xa00 ) = 0;
   }
 else {
      pOVar5 = (Object*)__dynamic_cast(pOVar5, &Object::typeinfo, &StyleBox::typeinfo, 0);
      if (pOVar1 == pOVar5) goto LAB_00100960;
      *(Object**)( lVar4 + 0xa00 ) = pOVar5;
      if (pOVar5 != (Object*)0x0) {
         cVar3 = RefCounted::reference();
         if (cVar3 == '\0') {
            *(undefined8*)( lVar4 + 0xa00 ) = 0;
         }

      }

      if (pOVar1 == (Object*)0x0) goto LAB_00100960;
   }

   cVar3 = RefCounted::unreference();
   if (cVar3 != '\0') {
      cVar3 = predelete_handler(pOVar1);
      if (cVar3 != '\0') {
         ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
         Memory::free_static(pOVar1, false);
      }

   }

   LAB_00100960:if (Variant::needs_deinit[local_48[0]] != '\0') {
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
/* ProgressBar::_validate_property(PropertyInfo&) const */void ProgressBar::_validate_property(ProgressBar *this, PropertyInfo *param_1) {
   char cVar1;
   if (this[0x9f1] != (ProgressBar)0x0) {
      cVar1 = String::operator ==((String*)( param_1 + 8 ), "show_percentage");
      if (cVar1 != '\0') {
         *(uint*)( param_1 + 0x28 ) = *(uint*)( param_1 + 0x28 ) | 0x10000000;
      }

      if (this[0x9f1] != (ProgressBar)0x0) {
         return;
      }

   }

   cVar1 = String::operator ==((String*)( param_1 + 8 ), "editor_preview_indeterminate");
   if (cVar1 != '\0') {
      *(undefined4*)( param_1 + 0x28 ) = 0;
   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* ProgressBar::ProgressBar() */void ProgressBar::ProgressBar(ProgressBar *this) {
   undefined8 uVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   Range::Range((Range*)this);
   *(undefined1(*) [16])( this + 0x9f8 ) = (undefined1[16])0x0;
   uVar2 = _UNK_00109a58;
   uVar1 = __LC21;
   *(undefined***)this = &PTR__initialize_classv_001094f0;
   *(undefined2*)( this + 0x9f0 ) = 1;
   uVar3 = _LC22;
   this[0x9f2] = (ProgressBar)0x0;
   *(undefined8*)( this + 0xa08 ) = 0;
   *(undefined8*)( this + 0xa10 ) = 0;
   *(undefined8*)( this + 0xa18 ) = 0;
   *(undefined8*)( this + 0xa20 ) = 0x3f800000;
   *(undefined8*)( this + 0xa38 ) = uVar3;
   *(undefined8*)( this + 0xa40 ) = 0;
   *(undefined8*)( this + 0xa28 ) = uVar1;
   *(undefined8*)( this + 0xa30 ) = uVar2;
   Control::set_v_size_flags(this, 0);
   Range::set_step(_LC23);
   return;
}
/* ProgressBar::_bind_methods() */void ProgressBar::_bind_methods(void) {
   long lVar1;
   code *pcVar2;
   long *plVar3;
   MethodBind *pMVar4;
   undefined8 uVar5;
   uint uVar6;
   long lVar7;
   long *plVar8;
   long in_FS_OFFSET;
   undefined8 local_e0;
   long local_d8;
   undefined8 local_d0;
   long local_c8;
   long local_c0;
   long local_b8;
   long *local_b0;
   long local_a8[2];
   long *local_98;
   char *local_78;
   undefined8 local_70;
   undefined8 local_68;
   undefined8 uStack_60;
   code *pcStack_58;
   code *pcStack_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_70 = 0;
   local_78 = "mode";
   uVar6 = ( uint ) & local_68;
   local_68 = &local_78;
   D_METHODP((char*)local_a8, (char***)"set_fill_mode", uVar6);
   uStack_60 = 0;
   pcStack_58 = (code*)0x0;
   local_68._0_4_ = 0;
   local_68._4_4_ = 0;
   pMVar4 = create_method_bind<ProgressBar,int>(set_fill_mode);
   ClassDB::bind_methodfi(1, pMVar4, false, (MethodDefinition*)local_a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_68] != '\0') {
      Variant::_clear_internal();
   }

   plVar3 = local_98;
   if (local_98 != (long*)0x0) {
      LOCK();
      plVar8 = local_98 + -2;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
         if (local_98 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = local_98[-1];
         lVar7 = 0;
         local_98 = (long*)0x0;
         plVar8 = plVar3;
         if (lVar1 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar8 != 0 )) {
                  StringName::unref();
               }

               lVar7 = lVar7 + 1;
               plVar8 = plVar8 + 1;
            }
 while ( lVar1 != lVar7 );
         }

         Memory::free_static(plVar3 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_a8[0] != 0 )) {
      StringName::unref();
   }

   D_METHODP((char*)local_a8, (char***)"get_fill_mode", 0);
   uStack_60 = 0;
   pcStack_58 = (code*)0x0;
   local_68._0_4_ = 0;
   local_68._4_4_ = 0;
   pMVar4 = create_method_bind<ProgressBar,int>(get_fill_mode);
   ClassDB::bind_methodfi(1, pMVar4, false, (MethodDefinition*)local_a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_68] != '\0') {
      Variant::_clear_internal();
   }

   plVar3 = local_98;
   if (local_98 != (long*)0x0) {
      LOCK();
      plVar8 = local_98 + -2;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
         if (local_98 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = local_98[-1];
         lVar7 = 0;
         local_98 = (long*)0x0;
         plVar8 = plVar3;
         if (lVar1 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar8 != 0 )) {
                  StringName::unref();
               }

               lVar7 = lVar7 + 1;
               plVar8 = plVar8 + 1;
            }
 while ( lVar1 != lVar7 );
         }

         Memory::free_static(plVar3 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_a8[0] != 0 )) {
      StringName::unref();
   }

   local_78 = "visible";
   local_70 = 0;
   local_68 = &local_78;
   D_METHODP((char*)local_a8, (char***)"set_show_percentage", uVar6);
   uStack_60 = 0;
   pcStack_58 = (code*)0x0;
   local_68._0_4_ = 0;
   local_68._4_4_ = 0;
   pMVar4 = create_method_bind<ProgressBar,bool>(set_show_percentage);
   ClassDB::bind_methodfi(1, pMVar4, false, (MethodDefinition*)local_a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_68] != '\0') {
      Variant::_clear_internal();
   }

   plVar3 = local_98;
   if (local_98 != (long*)0x0) {
      LOCK();
      plVar8 = local_98 + -2;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
         if (local_98 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = local_98[-1];
         lVar7 = 0;
         local_98 = (long*)0x0;
         plVar8 = plVar3;
         if (lVar1 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar8 != 0 )) {
                  StringName::unref();
               }

               lVar7 = lVar7 + 1;
               plVar8 = plVar8 + 1;
            }
 while ( lVar1 != lVar7 );
         }

         Memory::free_static(plVar3 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_a8[0] != 0 )) {
      StringName::unref();
   }

   D_METHODP((char*)local_a8, (char***)"is_percentage_shown", 0);
   uStack_60 = 0;
   pcStack_58 = (code*)0x0;
   local_68._0_4_ = 0;
   local_68._4_4_ = 0;
   pMVar4 = create_method_bind<ProgressBar,bool>(is_percentage_shown);
   ClassDB::bind_methodfi(1, pMVar4, false, (MethodDefinition*)local_a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_68] != '\0') {
      Variant::_clear_internal();
   }

   plVar3 = local_98;
   if (local_98 != (long*)0x0) {
      LOCK();
      plVar8 = local_98 + -2;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
         if (local_98 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = local_98[-1];
         lVar7 = 0;
         local_98 = (long*)0x0;
         plVar8 = plVar3;
         if (lVar1 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar8 != 0 )) {
                  StringName::unref();
               }

               lVar7 = lVar7 + 1;
               plVar8 = plVar8 + 1;
            }
 while ( lVar1 != lVar7 );
         }

         Memory::free_static(plVar3 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_a8[0] != 0 )) {
      StringName::unref();
   }

   local_78 = "indeterminate";
   local_70 = 0;
   local_68 = &local_78;
   D_METHODP((char*)local_a8, (char***)"set_indeterminate", uVar6);
   uStack_60 = 0;
   pcStack_58 = (code*)0x0;
   local_68._0_4_ = 0;
   local_68._4_4_ = 0;
   pMVar4 = create_method_bind<ProgressBar,bool>(set_indeterminate);
   ClassDB::bind_methodfi(1, pMVar4, false, (MethodDefinition*)local_a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_68] != '\0') {
      Variant::_clear_internal();
   }

   plVar3 = local_98;
   if (local_98 != (long*)0x0) {
      LOCK();
      plVar8 = local_98 + -2;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
         if (local_98 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = local_98[-1];
         lVar7 = 0;
         local_98 = (long*)0x0;
         plVar8 = plVar3;
         if (lVar1 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar8 != 0 )) {
                  StringName::unref();
               }

               lVar7 = lVar7 + 1;
               plVar8 = plVar8 + 1;
            }
 while ( lVar1 != lVar7 );
         }

         Memory::free_static(plVar3 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_a8[0] != 0 )) {
      StringName::unref();
   }

   D_METHODP((char*)local_a8, (char***)"is_indeterminate", 0);
   uStack_60 = 0;
   pcStack_58 = (code*)0x0;
   local_68._0_4_ = 0;
   local_68._4_4_ = 0;
   pMVar4 = create_method_bind<ProgressBar,bool>(is_indeterminate);
   ClassDB::bind_methodfi(1, pMVar4, false, (MethodDefinition*)local_a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_68] != '\0') {
      Variant::_clear_internal();
   }

   plVar3 = local_98;
   if (local_98 != (long*)0x0) {
      LOCK();
      plVar8 = local_98 + -2;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
         if (local_98 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = local_98[-1];
         lVar7 = 0;
         local_98 = (long*)0x0;
         plVar8 = plVar3;
         if (lVar1 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar8 != 0 )) {
                  StringName::unref();
               }

               lVar7 = lVar7 + 1;
               plVar8 = plVar8 + 1;
            }
 while ( lVar1 != lVar7 );
         }

         Memory::free_static(plVar3 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_a8[0] != 0 )) {
      StringName::unref();
   }

   local_78 = "preview_indeterminate";
   local_70 = 0;
   local_68 = &local_78;
   D_METHODP((char*)local_a8, (char***)"set_editor_preview_indeterminate", uVar6);
   uStack_60 = 0;
   pcStack_58 = (code*)0x0;
   local_68._0_4_ = 0;
   local_68._4_4_ = 0;
   pMVar4 = create_method_bind<ProgressBar,bool>(set_editor_preview_indeterminate);
   ClassDB::bind_methodfi(1, pMVar4, false, (MethodDefinition*)local_a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_68] != '\0') {
      Variant::_clear_internal();
   }

   plVar3 = local_98;
   if (local_98 != (long*)0x0) {
      LOCK();
      plVar8 = local_98 + -2;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
         if (local_98 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = local_98[-1];
         lVar7 = 0;
         local_98 = (long*)0x0;
         plVar8 = plVar3;
         if (lVar1 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar8 != 0 )) {
                  StringName::unref();
               }

               lVar7 = lVar7 + 1;
               plVar8 = plVar8 + 1;
            }
 while ( lVar1 != lVar7 );
         }

         Memory::free_static(plVar3 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_a8[0] != 0 )) {
      StringName::unref();
   }

   D_METHODP((char*)local_a8, (char***)"is_editor_preview_indeterminate_enabled", 0);
   uStack_60 = 0;
   pcStack_58 = (code*)0x0;
   local_68._0_4_ = 0;
   local_68._4_4_ = 0;
   pMVar4 = create_method_bind<ProgressBar,bool>(is_editor_preview_indeterminate_enabled);
   ClassDB::bind_methodfi(1, pMVar4, false, (MethodDefinition*)local_a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_68] != '\0') {
      Variant::_clear_internal();
   }

   plVar3 = local_98;
   if (local_98 != (long*)0x0) {
      LOCK();
      plVar8 = local_98 + -2;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
         if (local_98 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = local_98[-1];
         lVar7 = 0;
         local_98 = (long*)0x0;
         plVar8 = plVar3;
         if (lVar1 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar8 != 0 )) {
                  StringName::unref();
               }

               lVar7 = lVar7 + 1;
               plVar8 = plVar8 + 1;
            }
 while ( lVar1 != lVar7 );
         }

         Memory::free_static(plVar3 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_a8[0] != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_b8, true);
   _scs_create((char*)&local_c0, true);
   local_c8 = 0;
   local_d0 = 0;
   String::parse_latin1((String*)&local_d0, "Begin to End,End to Begin,Top to Bottom,Bottom to Top");
   local_d8 = 0;
   String::parse_latin1((String*)&local_d8, "fill_mode");
   PropertyInfo::PropertyInfo((PropertyInfo*)local_a8, 2, (String*)&local_d8, 2, (String*)&local_d0, 6, (CowData<char32_t>*)&local_c8);
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "ProgressBar");
   StringName::StringName((StringName*)&local_b0, (String*)&local_e0, false);
   ClassDB::add_property((StringName*)&local_b0, (PropertyInfo*)local_a8, (StringName*)&local_c0, (StringName*)&local_b8, -1);
   if (( StringName::configured != '\0' ) && ( local_b0 != (long*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   PropertyInfo::~PropertyInfo((PropertyInfo*)local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_c8 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_c0 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_b8 != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_b8, true);
   _scs_create((char*)&local_c0, true);
   local_c8 = 0;
   local_d0 = 0;
   String::parse_latin1((String*)&local_d0, "");
   local_d8 = 0;
   String::parse_latin1((String*)&local_d8, "show_percentage");
   PropertyInfo::PropertyInfo((PropertyInfo*)local_a8, 1, (String*)&local_d8, 0, (String*)&local_d0, 6, (CowData<char32_t>*)&local_c8);
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "ProgressBar");
   StringName::StringName((StringName*)&local_b0, (String*)&local_e0, false);
   ClassDB::add_property((StringName*)&local_b0, (PropertyInfo*)local_a8, (StringName*)&local_c0, (StringName*)&local_b8, -1);
   if (( StringName::configured != '\0' ) && ( local_b0 != (long*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   PropertyInfo::~PropertyInfo((PropertyInfo*)local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
   if (( ( StringName::configured != '\0' ) && ( ( local_c8 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( ( local_c0 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_b8 != 0 ) ) )) {
      StringName::unref();
   }

   _scs_create((char*)&local_b8, true);
   _scs_create((char*)&local_c0, true);
   local_c8 = 0;
   local_d0 = 0;
   String::parse_latin1((String*)&local_d0, "");
   local_d8 = 0;
   String::parse_latin1((String*)&local_d8, "indeterminate");
   PropertyInfo::PropertyInfo((PropertyInfo*)local_a8, 1, (String*)&local_d8, 0, (String*)&local_d0, 6, (CowData<char32_t>*)&local_c8);
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "ProgressBar");
   StringName::StringName((StringName*)&local_b0, (String*)&local_e0, false);
   ClassDB::add_property((StringName*)&local_b0, (PropertyInfo*)local_a8, (StringName*)&local_c0, (StringName*)&local_b8, -1);
   if (( StringName::configured != '\0' ) && ( local_b0 != (long*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   PropertyInfo::~PropertyInfo((PropertyInfo*)local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_c8 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_c0 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_b8 != 0 )) {
      StringName::unref();
   }

   local_a8[0] = 0;
   String::parse_latin1((String*)local_a8, "editor_");
   local_b0 = (long*)0x0;
   String::parse_latin1((String*)&local_b0, "Editor");
   local_c0 = 0;
   String::parse_latin1((String*)&local_c0, "ProgressBar");
   StringName::StringName((StringName*)&local_b8, (String*)&local_c0, false);
   ClassDB::add_property_group((StringName*)&local_b8, (String*)&local_b0, (String*)local_a8, 0);
   if (( StringName::configured != '\0' ) && ( local_b8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_a8);
   _scs_create((char*)&local_b8, true);
   _scs_create((char*)&local_c0, true);
   local_c8 = 0;
   local_d0 = 0;
   String::parse_latin1((String*)&local_d0, "");
   local_d8 = 0;
   String::parse_latin1((String*)&local_d8, "editor_preview_indeterminate");
   PropertyInfo::PropertyInfo((PropertyInfo*)local_a8, 1, (String*)&local_d8, 0, (String*)&local_d0, 6, (CowData<char32_t>*)&local_c8);
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "ProgressBar");
   StringName::StringName((StringName*)&local_b0, (String*)&local_e0, false);
   ClassDB::add_property((StringName*)&local_b0, (PropertyInfo*)local_a8, (StringName*)&local_c0, (StringName*)&local_b8, -1);
   if (( StringName::configured != '\0' ) && ( local_b0 != (long*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   PropertyInfo::~PropertyInfo((PropertyInfo*)local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
   if (( ( StringName::configured != '\0' ) && ( ( local_c8 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( ( local_c0 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_b8 != 0 ) ) )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_d8, "FILL_BEGIN_TO_END", false);
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "FILL_BEGIN_TO_END");
   local_c0 = 0;
   String::parse_latin1((String*)&local_c0, "ProgressBar::FillMode");
   godot::details::enum_qualified_name_to_class_info_name((details*)&local_b8, (String*)&local_c0);
   StringName::StringName((StringName*)&local_b0, (String*)&local_b8, false);
   local_c8 = 0;
   local_d0 = 0;
   PropertyInfo::PropertyInfo((PropertyInfo*)local_a8, 2, (String*)&local_d0, 0, (CowData<char32_t>*)&local_c8, 0x10006, (StringName*)&local_b0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   if (( StringName::configured != '\0' ) && ( local_b0 != (long*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   local_b0 = local_98;
   local_98 = (long*)0x0;
   PropertyInfo::~PropertyInfo((PropertyInfo*)local_a8);
   local_b8 = 0;
   String::parse_latin1((String*)&local_b8, "ProgressBar");
   StringName::StringName((StringName*)local_a8, (String*)&local_b8, false);
   ClassDB::bind_integer_constant((StringName*)local_a8, (StringName*)&local_b0, (StringName*)&local_d8, 0, false);
   if (( StringName::configured != '\0' ) && ( local_a8[0] != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
   if (( StringName::configured != '\0' ) && ( local_b0 != (long*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   if (( StringName::configured != '\0' ) && ( local_d8 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_d8, "FILL_END_TO_BEGIN", false);
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "FILL_END_TO_BEGIN");
   local_c0 = 0;
   String::parse_latin1((String*)&local_c0, "ProgressBar::FillMode");
   godot::details::enum_qualified_name_to_class_info_name((details*)&local_b8, (String*)&local_c0);
   StringName::StringName((StringName*)&local_b0, (String*)&local_b8, false);
   local_c8 = 0;
   local_d0 = 0;
   PropertyInfo::PropertyInfo((PropertyInfo*)local_a8, 2, (String*)&local_d0, 0, (CowData<char32_t>*)&local_c8, 0x10006, (StringName*)&local_b0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   if (( StringName::configured != '\0' ) && ( local_b0 != (long*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   local_b0 = local_98;
   local_98 = (long*)0x0;
   PropertyInfo::~PropertyInfo((PropertyInfo*)local_a8);
   local_b8 = 0;
   String::parse_latin1((String*)&local_b8, "ProgressBar");
   StringName::StringName((StringName*)local_a8, (String*)&local_b8, false);
   ClassDB::bind_integer_constant((StringName*)local_a8, (StringName*)&local_b0, (StringName*)&local_d8, 1, false);
   if (( StringName::configured != '\0' ) && ( local_a8[0] != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
   if (( StringName::configured != '\0' ) && ( local_b0 != (long*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   if (( StringName::configured != '\0' ) && ( local_d8 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_d8, "FILL_TOP_TO_BOTTOM", false);
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "FILL_TOP_TO_BOTTOM");
   local_c0 = 0;
   String::parse_latin1((String*)&local_c0, "ProgressBar::FillMode");
   godot::details::enum_qualified_name_to_class_info_name((details*)&local_b8, (String*)&local_c0);
   StringName::StringName((StringName*)&local_b0, (String*)&local_b8, false);
   local_c8 = 0;
   local_d0 = 0;
   PropertyInfo::PropertyInfo((PropertyInfo*)local_a8, 2, (String*)&local_d0, 0, (CowData<char32_t>*)&local_c8, 0x10006, (StringName*)&local_b0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   if (( StringName::configured != '\0' ) && ( local_b0 != (long*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   local_b0 = local_98;
   local_98 = (long*)0x0;
   PropertyInfo::~PropertyInfo((PropertyInfo*)local_a8);
   local_b8 = 0;
   String::parse_latin1((String*)&local_b8, "ProgressBar");
   StringName::StringName((StringName*)local_a8, (String*)&local_b8, false);
   ClassDB::bind_integer_constant((StringName*)local_a8, (StringName*)&local_b0, (StringName*)&local_d8, 2, false);
   if (( StringName::configured != '\0' ) && ( local_a8[0] != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
   if (( StringName::configured != '\0' ) && ( local_b0 != (long*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   if (( StringName::configured != '\0' ) && ( local_d8 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_d8, "FILL_BOTTOM_TO_TOP", false);
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "FILL_BOTTOM_TO_TOP");
   local_c0 = 0;
   String::parse_latin1((String*)&local_c0, "ProgressBar::FillMode");
   godot::details::enum_qualified_name_to_class_info_name((details*)&local_b8, (String*)&local_c0);
   StringName::StringName((StringName*)&local_b0, (String*)&local_b8, false);
   local_c8 = 0;
   local_d0 = 0;
   PropertyInfo::PropertyInfo((PropertyInfo*)local_a8, 2, (String*)&local_d0, 0, (CowData<char32_t>*)&local_c8, 0x10006, (StringName*)&local_b0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   if (( StringName::configured != '\0' ) && ( local_b0 != (long*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   local_b0 = local_98;
   local_98 = (long*)0x0;
   PropertyInfo::~PropertyInfo((PropertyInfo*)local_a8);
   local_b8 = 0;
   String::parse_latin1((String*)&local_b8, "ProgressBar");
   StringName::StringName((StringName*)local_a8, (String*)&local_b8, false);
   ClassDB::bind_integer_constant((StringName*)local_a8, (StringName*)&local_b0, (StringName*)&local_d8, 3, false);
   if (( StringName::configured != '\0' ) && ( local_a8[0] != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
   if (( StringName::configured != '\0' ) && ( local_b0 != (long*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   if (( StringName::configured != '\0' ) && ( local_d8 != 0 )) {
      StringName::unref();
   }

   uVar5 = ThemeDB::get_singleton();
   local_68._0_4_ = 0;
   local_68._4_4_ = 0;
   uStack_60 = 0;
   pcStack_58 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),ProgressBar::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#1}>::_M_manager;
   pcStack_50 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),ProgressBar::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#1}>::_M_invoke;
   StringName::StringName((StringName*)local_a8, "background", false);
   StringName::StringName((StringName*)&local_b0, "background_style", false);
   local_c0 = 0;
   String::parse_latin1((String*)&local_c0, "ProgressBar");
   StringName::StringName((StringName*)&local_b8, (String*)&local_c0, false);
   ThemeDB::bind_class_item(uVar5, 5, (StringName*)&local_b8, (StringName*)&local_b0, (MethodDefinition*)local_a8, &local_68);
   if (( StringName::configured != '\0' ) && ( local_b8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   if (( StringName::configured != '\0' ) && ( ( ( local_b0 == (long*)0x0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_a8[0] != 0 ) ) )) {
      StringName::unref();
   }

   if (pcStack_58 != (code*)0x0) {
      ( *pcStack_58 )(&local_68, &local_68, 3);
   }

   uVar5 = ThemeDB::get_singleton();
   local_68._0_4_ = 0;
   local_68._4_4_ = 0;
   uStack_60 = 0;
   pcStack_58 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),ProgressBar::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#2}>::_M_manager;
   pcStack_50 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),ProgressBar::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#2}>::_M_invoke;
   StringName::StringName((StringName*)local_a8, "fill", false);
   StringName::StringName((StringName*)&local_b0, "fill_style", false);
   local_c0 = 0;
   String::parse_latin1((String*)&local_c0, "ProgressBar");
   StringName::StringName((StringName*)&local_b8, (String*)&local_c0, false);
   ThemeDB::bind_class_item(uVar5, 5, (StringName*)&local_b8, (StringName*)&local_b0, (MethodDefinition*)local_a8, &local_68);
   if (( StringName::configured != '\0' ) && ( local_b8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   if (( ( StringName::configured != '\0' ) && ( ( local_b0 == (long*)0x0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_a8[0] != 0 )) {
      StringName::unref();
   }

   if (pcStack_58 != (code*)0x0) {
      ( *pcStack_58 )(&local_68, &local_68, 3);
   }

   uVar5 = ThemeDB::get_singleton();
   local_68._0_4_ = 0;
   local_68._4_4_ = 0;
   uStack_60 = 0;
   pcStack_58 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),ProgressBar::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#3}>::_M_manager;
   pcStack_50 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),ProgressBar::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#3}>::_M_invoke;
   StringName::StringName((StringName*)local_a8, "font", false);
   StringName::StringName((StringName*)&local_b0, "font", false);
   local_c0 = 0;
   String::parse_latin1((String*)&local_c0, "ProgressBar");
   StringName::StringName((StringName*)&local_b8, (String*)&local_c0, false);
   ThemeDB::bind_class_item(uVar5, 2, (StringName*)&local_b8, (StringName*)&local_b0, (MethodDefinition*)local_a8, &local_68);
   if (( StringName::configured != '\0' ) && ( local_b8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   if (( StringName::configured != '\0' ) && ( ( ( local_b0 == (long*)0x0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_a8[0] != 0 ) ) )) {
      StringName::unref();
   }

   if (pcStack_58 != (code*)0x0) {
      ( *pcStack_58 )(&local_68, &local_68, 3);
   }

   uVar5 = ThemeDB::get_singleton();
   local_68._0_4_ = 0;
   local_68._4_4_ = 0;
   uStack_60 = 0;
   pcStack_58 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),ProgressBar::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#4}>::_M_manager;
   pcStack_50 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),ProgressBar::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#4}>::_M_invoke;
   StringName::StringName((StringName*)local_a8, "font_size", false);
   StringName::StringName((StringName*)&local_b0, "font_size", false);
   local_c0 = 0;
   String::parse_latin1((String*)&local_c0, "ProgressBar");
   StringName::StringName((StringName*)&local_b8, (String*)&local_c0, false);
   ThemeDB::bind_class_item(uVar5, 3, (StringName*)&local_b8, (StringName*)&local_b0, (MethodDefinition*)local_a8, &local_68);
   if (( StringName::configured != '\0' ) && ( local_b8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   if (( ( StringName::configured != '\0' ) && ( ( local_b0 == (long*)0x0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_a8[0] != 0 )) {
      StringName::unref();
   }

   if (pcStack_58 != (code*)0x0) {
      ( *pcStack_58 )(&local_68, &local_68, 3);
   }

   uVar5 = ThemeDB::get_singleton();
   local_68._0_4_ = 0;
   local_68._4_4_ = 0;
   uStack_60 = 0;
   pcStack_58 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),ProgressBar::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#5}>::_M_manager;
   pcStack_50 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),ProgressBar::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#5}>::_M_invoke;
   StringName::StringName((StringName*)local_a8, "font_color", false);
   StringName::StringName((StringName*)&local_b0, "font_color", false);
   local_c0 = 0;
   String::parse_latin1((String*)&local_c0, "ProgressBar");
   StringName::StringName((StringName*)&local_b8, (String*)&local_c0, false);
   ThemeDB::bind_class_item(uVar5, 0, (StringName*)&local_b8, (StringName*)&local_b0, (MethodDefinition*)local_a8, &local_68);
   if (( StringName::configured != '\0' ) && ( local_b8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   if (( StringName::configured != '\0' ) && ( ( ( local_b0 == (long*)0x0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_a8[0] != 0 ) ) )) {
      StringName::unref();
   }

   if (pcStack_58 != (code*)0x0) {
      ( *pcStack_58 )(&local_68, &local_68, 3);
   }

   uVar5 = ThemeDB::get_singleton();
   local_68._0_4_ = 0;
   local_68._4_4_ = 0;
   uStack_60 = 0;
   pcStack_58 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),ProgressBar::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#6}>::_M_manager;
   pcStack_50 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),ProgressBar::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#6}>::_M_invoke;
   StringName::StringName((StringName*)local_a8, "outline_size", false);
   StringName::StringName((StringName*)&local_b0, "font_outline_size", false);
   local_c0 = 0;
   String::parse_latin1((String*)&local_c0, "ProgressBar");
   StringName::StringName((StringName*)&local_b8, (String*)&local_c0, false);
   ThemeDB::bind_class_item(uVar5, 1, (StringName*)&local_b8, (StringName*)&local_b0, (MethodDefinition*)local_a8, &local_68);
   if (( StringName::configured != '\0' ) && ( local_b8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   if (( ( StringName::configured != '\0' ) && ( ( local_b0 == (long*)0x0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_a8[0] != 0 )) {
      StringName::unref();
   }

   if (pcStack_58 != (code*)0x0) {
      ( *pcStack_58 )(&local_68, &local_68, 3);
   }

   uVar5 = ThemeDB::get_singleton();
   local_68._0_4_ = 0;
   local_68._4_4_ = 0;
   uStack_60 = 0;
   pcStack_58 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),ProgressBar::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#7}>::_M_manager;
   pcStack_50 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),ProgressBar::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#7}>::_M_invoke;
   StringName::StringName((StringName*)local_a8, "font_outline_color", false);
   StringName::StringName((StringName*)&local_b0, "font_outline_color", false);
   local_c0 = 0;
   String::parse_latin1((String*)&local_c0, "ProgressBar");
   StringName::StringName((StringName*)&local_b8, (String*)&local_c0, false);
   ThemeDB::bind_class_item(uVar5, 0, (StringName*)&local_b8, (StringName*)&local_b0, (MethodDefinition*)local_a8, &local_68);
   if (( StringName::configured != '\0' ) && ( local_b8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   if (( StringName::configured != '\0' ) && ( ( ( local_b0 == (long*)0x0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_a8[0] != 0 ) ) )) {
      StringName::unref();
   }

   if (pcStack_58 != (code*)0x0) {
      ( *pcStack_58 )(&local_68, &local_68, 3);
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* ProgressBar::get_minimum_size() const */void ProgressBar::get_minimum_size(ProgressBar *this) {
   long in_FS_OFFSET;
   float fVar1;
   float fVar2;
   undefined8 local_218;
   undefined8 local_210;
   undefined *local_208;
   undefined8 local_200;
   TextLine local_1f8[456];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   fVar1 = (float)( **(code**)( **(long**)( this + 0x9f8 ) + 0x1d0 ) )();
   fVar2 = (float)( **(code**)( **(long**)( this + 0xa00 ) + 0x1d0 ) )();
   if (fVar1 <= fVar2) {
      fVar1 = fVar2;
   }

   if (this[0x9f0] == (ProgressBar)0x0) {
      if (fVar1 <= _LC81) {
         fVar1 = _LC81;
      }

   }
 else {
      local_208 = &_LC82;
      local_218 = 0;
      local_200 = 4;
      String::parse_latin1((StrRange*)&local_218);
      local_208 = &_LC3;
      local_210 = 0;
      local_200 = 0;
      String::parse_latin1((StrRange*)&local_210);
      TextLine::TextLine(local_1f8, (StrRange*)&local_218, this + 0xa08, *(undefined4*)( this + 0xa10 ), (StrRange*)&local_210, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_210);
      ( **(code**)( **(long**)( this + 0x9f8 ) + 0x1d0 ) )();
      TextLine::get_size();
      TextLine::~TextLine(local_1f8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_218);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail(fVar1);
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* ProgressBar::_notification(int) */void ProgressBar::_notification(ProgressBar *this, int param_1) {
   uint uVar1;
   code *pcVar2;
   char cVar3;
   uint uVar4;
   int iVar5;
   Object *pOVar6;
   Object *pOVar7;
   long in_FS_OFFSET;
   float fVar8;
   undefined4 uVar9;
   float fVar10;
   float extraout_XMM0_Da;
   double dVar11;
   float extraout_XMM0_Db;
   float extraout_XMM0_Db_00;
   float extraout_XMM0_Db_01;
   double dVar12;
   float extraout_XMM0_Db_02;
   undefined4 extraout_XMM0_Db_03;
   float extraout_XMM0_Db_04;
   float extraout_XMM0_Db_05;
   float extraout_XMM0_Db_06;
   float extraout_XMM0_Db_07;
   float extraout_XMM0_Db_08;
   undefined4 extraout_XMM0_Db_09;
   double dVar13;
   float fVar14;
   undefined8 local_268;
   long local_258;
   undefined8 local_250;
   String local_248[8];
   undefined8 local_240;
   CowData<char32_t> local_238[8];
   long local_230;
   ulong local_228;
   float local_220;
   float local_21c;
   undefined8 local_218;
   undefined8 local_210;
   undefined1 local_208[8];
   undefined8 local_200;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 == 0x19) {
      cVar3 = CanvasItem::is_visible_in_tree();
      if (cVar3 != '\0') {
         dVar11 = (double)Node::get_process_delta_time();
         Control::get_size();
         fVar14 = (float)Control::get_size();
         if (fVar14 <= extraout_XMM0_Db_02) {
            fVar14 = extraout_XMM0_Db_02;
         }

         dVar12 = *(double*)( this + 0xa38 );
         if (*(double*)( this + 0xa38 ) <= (double)( fVar14 * _LC86 )) {
            dVar12 = (double)( fVar14 * _LC86 );
         }

         *(float*)( this + 0xa40 ) = (float)( (double)*(float*)( this + 0xa40 ) + dVar12 * dVar11 );
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            CanvasItem::queue_redraw();
            return;
         }

         goto LAB_0010381c;
      }

   }
 else if (param_1 == 0x1e) {
      local_200 = Control::get_size();
      local_208 = (undefined1[8])0x0;
      CanvasItem::draw_style_box((Ref*)this, (Rect2*)( this + 0x9f8 ));
      if (this[0x9f1] == (ProgressBar)0x0) {
         dVar11 = (double)Range::get_as_ratio();
         fVar14 = (float)dVar11;
         if (*(uint*)( this + 0xa44 ) < 2) {
            fVar8 = (float)( **(code**)( **(long**)( this + 0xa00 ) + 0x1d0 ) )();
            fVar10 = (float)Control::get_size();
            fVar10 = roundf(( fVar10 - (float)(int)fVar8 ) * fVar14);
            uVar1 = *(uint*)( this + 0xa44 );
            iVar5 = (int)fVar10;
            uVar4 = ( **(code**)( *(long*)this + 0x340 ) )(this);
            if (0 < iVar5) {
               if (uVar1 == ( ( uVar4 ^ 1 ) & 0xff )) {
                  dVar11 = _LC85 - (double)fVar14;
                  fVar14 = (float)Control::get_size();
                  dVar11 = round((double)( fVar14 - (float)(int)fVar8 ) * dVar11);
                  Control::get_size();
                  fVar14 = (float)( **(code**)( **(long**)( this + 0xa00 ) + 0x1d0 ) )();
                  local_200 = CONCAT44(extraout_XMM0_Db_09, (float)iVar5 + fVar14);
                  local_208._4_4_ = 0;
                  local_208._0_4_ = (float)(int)dVar11;
                  CanvasItem::draw_style_box((Ref*)this, (Rect2*)( this + 0xa00 ));
               }
 else {
                  Control::get_size();
                  fVar14 = (float)( **(code**)( **(long**)( this + 0xa00 ) + 0x1d0 ) )();
                  local_208 = (undefined1[8])0x0;
                  local_200 = CONCAT44(extraout_XMM0_Db_03, (float)iVar5 + fVar14);
                  CanvasItem::draw_style_box((Ref*)this, (Rect2*)( this + 0xa00 ));
               }

            }

         }
 else if (*(uint*)( this + 0xa44 ) - 2 < 2) {
            ( **(code**)( **(long**)( this + 0xa00 ) + 0x1d0 ) )();
            Control::get_size();
            fVar8 = roundf(( extraout_XMM0_Db_00 - (float)(int)extraout_XMM0_Db ) * fVar14);
            iVar5 = (int)fVar8;
            if (0 < iVar5) {
               if (*(int*)( this + 0xa44 ) == 2) {
                  ( **(code**)( **(long**)( this + 0xa00 ) + 0x1d0 ) )();
                  uVar9 = Control::get_size();
                  local_200 = CONCAT44((float)iVar5 + extraout_XMM0_Db_01, uVar9);
                  local_208 = (undefined1[8])0x0;
                  CanvasItem::draw_style_box((Ref*)this, (Rect2*)( this + 0xa00 ));
               }
 else {
                  dVar11 = _LC85 - (double)fVar14;
                  Control::get_size();
                  dVar11 = round((double)( extraout_XMM0_Db_07 - (float)(int)extraout_XMM0_Db ) * dVar11);
                  ( **(code**)( **(long**)( this + 0xa00 ) + 0x1d0 ) )();
                  uVar9 = Control::get_size();
                  local_200 = CONCAT44((float)iVar5 + extraout_XMM0_Db_08, uVar9);
                  local_208 = ( undefined1[8] )((ulong)(uint)(float)(int)dVar11 << 0x20);
                  CanvasItem::draw_style_box((Ref*)this, (Rect2*)( this + 0xa00 ));
               }

            }

         }

         if (this[0x9f0] != (ProgressBar)0x0) {
            dVar11 = (double)Range::get_min();
            dVar12 = (double)Range::get_max();
            if (dVar11 != dVar12) {
               dVar13 = _LC83;
               if (_LC83 <= ABS(dVar12) * _LC83) {
                  dVar13 = ABS(dVar12) * _LC83;
               }

               if (dVar13 <= ABS(dVar12 - dVar11)) {
                  cVar3 = Range::is_ratio_exp();
                  if (( ( cVar3 == '\0' ) || ( dVar11 = (double)Range::get_min() ),dVar11 < 0.0 )) {
                     Range::get_value();
                     Range::get_min();
                     Range::get_max();
                     Range::get_min();
                     cVar3 = Range::is_greater_allowed();
                     if (cVar3 == '\0') {
                        Range::is_lesser_allowed();
                     }
 else {
                        Range::is_lesser_allowed();
                     }

                  }
 else {
                     dVar11 = (double)Range::get_min();
                     if (dVar11 != 0.0) {
                        dVar11 = (double)Range::get_min();
                        log(dVar11);
                     }

                     dVar11 = (double)Range::get_max();
                     log(dVar11);
                     dVar11 = (double)Range::get_value();
                     if (dVar11 != 0.0) {
                        dVar11 = (double)Range::get_value();
                        log(dVar11);
                     }

                     cVar3 = Range::is_greater_allowed();
                     if (cVar3 == '\0') {
                        Range::is_lesser_allowed();
                     }
 else {
                        Range::is_lesser_allowed();
                     }

                  }

               }

            }

            itos((long)&local_258);
            cVar3 = Control::is_localizing_numeral_system();
            if (cVar3 == '\0') {
               local_230 = 0;
               String::parse_latin1((String*)&local_230, "%");
               String::operator +=((String*)&local_258, (String*)&local_230);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_230);
            }
 else {
               pOVar6 = *(Object**)( TextServerManager::singleton + 0x178 );
               if (pOVar6 == (Object*)0x0) {
                  ProgressBar__notification:/* WARNING: Does not return */pcVar2 = (code*)invalidInstructionException();
                  ( *pcVar2 )();
               }

               cVar3 = RefCounted::reference();
               if (cVar3 == '\0') {
                  pOVar6 = (Object*)0x0;
               }

               local_240 = 0;
               pcVar2 = *(code**)( *(long*)pOVar6 + 2000 );
               String::parse_latin1((String*)&local_240, "");
               ( *pcVar2 )(local_238, pOVar6, (String*)&local_240);
               pOVar7 = *(Object**)( TextServerManager::singleton + 0x178 );
               if (pOVar7 == (Object*)0x0) goto ProgressBar__notification;
               cVar3 = RefCounted::reference();
               if (cVar3 == '\0') {
                  pOVar7 = (Object*)0x0;
               }

               local_250 = 0;
               pcVar2 = *(code**)( *(long*)pOVar7 + 0x7c0 );
               String::parse_latin1((String*)&local_250, "");
               ( *pcVar2 )(local_248, pOVar7, (CowData<char32_t>*)&local_258, (String*)&local_250);
               String::operator +((String*)&local_230, local_248);
               if (local_258 != local_230) {
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_258);
                  local_258 = local_230;
                  local_230 = 0;
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_230);
               CowData<char32_t>::_unref((CowData<char32_t>*)local_248);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_250);
               cVar3 = RefCounted::unreference();
               if (( cVar3 != '\0' ) && ( cVar3 = predelete_handler(pOVar7) ),cVar3 != '\0') {
                  ( **(code**)( *(long*)pOVar7 + 0x140 ) )(pOVar7);
                  Memory::free_static(pOVar7, false);
               }

               CowData<char32_t>::_unref(local_238);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_240);
               cVar3 = RefCounted::unreference();
               if (( cVar3 != '\0' ) && ( cVar3 = predelete_handler(pOVar6) ),cVar3 != '\0') {
                  ( **(code**)( *(long*)pOVar6 + 0x140 ) )(pOVar6);
                  Memory::free_static(pOVar6, false);
               }

            }

            local_230 = 0;
            String::parse_latin1((String*)&local_230, "");
            TextLine::TextLine((TextLine*)local_208, (CowData<char32_t>*)&local_258, this + 0xa08, *(undefined4*)( this + 0xa10 ), (String*)&local_230, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_230);
            Control::get_size();
            TextLine::get_size();
            fVar14 = (float)Control::get_size();
            fVar8 = (float)TextLine::get_size();
            local_228 = CONCAT44(( extraout_XMM0_Db_05 - extraout_XMM0_Db_06 ) * _UNK_00109ab4, ( fVar14 - fVar8 ) * _LC86);
            local_218 = Vector2::round();
            if (( 0 < *(int*)( this + 0xa24 ) ) && ( 0.0 < *(float*)( this + 0xa34 ) )) {
               TextLine::draw_outline((TextLine*)local_208, *(undefined8*)( this + 0x428 ), &local_218, *(int*)( this + 0xa24 ), this + 0xa28);
            }

            TextLine::draw((TextLine*)local_208, *(undefined8*)( this + 0x428 ), &local_218, this + 0xa14);
            TextLine::~TextLine((TextLine*)local_208);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_258);
         }

      }
 else {
         Control::get_size();
         local_268 = CONCAT44(extraout_XMM0_Db_04, extraout_XMM0_Da);
         fVar14 = extraout_XMM0_Da;
         if (extraout_XMM0_Db_04 <= extraout_XMM0_Da) {
            fVar14 = extraout_XMM0_Db_04;
         }

         fVar14 = fVar14 + fVar14;
         cVar3 = Node::is_part_of_edited_scene();
         if (( cVar3 != '\0' ) && ( this[0x9f2] == (ProgressBar)0x0 )) {
            fVar8 = extraout_XMM0_Da;
            if (extraout_XMM0_Da <= extraout_XMM0_Db_04) {
               fVar8 = extraout_XMM0_Db_04;
            }

            *(float*)( this + 0xa40 ) = fVar8 * _LC86 + _LC86 * fVar14;
         }

         uVar1 = *(uint*)( this + 0xa44 );
         if (uVar1 == 2) {
            fVar8 = *(float*)( this + 0xa40 );
            if (extraout_XMM0_Db_04 + fVar14 < fVar8) {
               *(undefined4*)( this + 0xa40 ) = 0;
               fVar8 = 0.0;
            }

            fVar8 = fVar8 - fVar14;
            LAB_001031ce:local_228 = (ulong)(uint)fVar8 << 0x20;
            local_220 = extraout_XMM0_Da;
            local_21c = fVar14;
         }
 else {
            if (2 < uVar1) {
               if (uVar1 != 3) goto LAB_00102b39;
               fVar8 = fVar14 + extraout_XMM0_Db_04;
               if (fVar8 < *(float*)( this + 0xa40 )) {
                  *(uint*)( this + 0xa40 ) = (uint)fVar14 ^ __LC87;
               }
 else {
                  fVar8 = extraout_XMM0_Db_04 - *(float*)( this + 0xa40 );
               }

               goto LAB_001031ce;
            }

            uVar4 = ( **(code**)( *(long*)this + 0x340 ) )(this);
            fVar8 = *(float*)( this + 0xa40 );
            uVar4 = ( uVar4 ^ 1 ) & 0xff;
            fVar10 = fVar14 + extraout_XMM0_Da;
            if (fVar8 <= fVar10) {
               if (uVar1 != uVar4) goto LAB_001032a1;
               fVar10 = extraout_XMM0_Da - fVar8;
            }
 else if (uVar1 == uVar4) {
               *(uint*)( this + 0xa40 ) = (uint)fVar14 ^ __LC87;
            }
 else {
               *(undefined4*)( this + 0xa40 ) = 0;
               fVar8 = 0.0;
               LAB_001032a1:fVar10 = fVar8 - fVar14;
            }

            local_228 = (ulong)(uint)fVar10;
            local_220 = fVar14;
            local_21c = extraout_XMM0_Db_04;
         }

         local_210 = local_268;
         local_218 = 0;
         _local_208 = Rect2::intersection((Rect2*)&local_228, (Rect2*)&local_218);
         CanvasItem::draw_style_box((Ref*)this, (Rect2*)( this + 0xa00 ));
      }

   }

   LAB_00102b39:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_0010381c:/* WARNING: Subroutine does not return */__stack_chk_fail();
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
/* ProgressBar::is_class_ptr(void*) const */uint ProgressBar::is_class_ptr(void *param_1) {
   undefined4 in_EDX;
   undefined4 *in_RSI;
   return (uint)CONCAT71(0x1099, in_RSI == &Range::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1099, in_RSI == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1099, in_RSI == &Control::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1099, in_RSI == &CanvasItem::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x109a, in_RSI == &Node::get_class_ptr_static(), ::ptr) | CONCAT31(( int3 )((uint)in_EDX >> 8), in_RSI == &Object::get_class_ptr_static(), ::ptr);
}
/* MethodBindTRC<bool>::_gen_argument_type(int) const */undefined8 MethodBindTRC<bool>::_gen_argument_type(int param_1) {
   return 1;
}
/* MethodBindTRC<bool>::get_argument_meta(int) const */undefined8 MethodBindTRC<bool>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindT<bool>::_gen_argument_type(int) const */bool MethodBindT<bool>::_gen_argument_type(MethodBindT<bool> *this, int param_1) {
   return param_1 == 0;
}
/* MethodBindT<bool>::get_argument_meta(int) const */undefined8 MethodBindT<bool>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTR<int>::_gen_argument_type(int) const */undefined8 MethodBindTR<int>::_gen_argument_type(int param_1) {
   return 2;
}
/* MethodBindTR<int>::get_argument_meta(int) const */uint MethodBindTR<int>::get_argument_meta(MethodBindTR<int> *this, int param_1) {
   return param_1 >> 0x1f & 3;
}
/* MethodBindT<int>::_gen_argument_type(int) const */char MethodBindT<int>::_gen_argument_type(MethodBindT<int> *this, int param_1) {
   return ( param_1 == 0 ) * '\x02';
}
/* MethodBindT<int>::get_argument_meta(int) const */byte MethodBindT<int>::get_argument_meta(MethodBindT<int> *this, int param_1) {
   return -(param_1 == 0) & 3;
}
/* MethodBindT<int>::~MethodBindT() */void MethodBindT<int>::~MethodBindT(MethodBindT<int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00109860;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<int>::~MethodBindT() */void MethodBindT<int>::~MethodBindT(MethodBindT<int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00109860;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTR<int>::~MethodBindTR() */void MethodBindTR<int>::~MethodBindTR(MethodBindTR<int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001098c0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTR<int>::~MethodBindTR() */void MethodBindTR<int>::~MethodBindTR(MethodBindTR<int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001098c0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<bool>::~MethodBindT() */void MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00109920;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<bool>::~MethodBindT() */void MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00109920;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<bool>::~MethodBindTRC() */void MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00109980;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<bool>::~MethodBindTRC() */void MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00109980;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* ProgressBar::_property_get_revertv(StringName const&, Variant&) const */undefined8 ProgressBar::_property_get_revertv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if ((code*)_GLOBAL_OFFSET_TABLE_ != Object::_property_get_revert) {
      uVar1 = Control::_property_get_revert(param_1, param_2);
      return uVar1;
   }

   return 0;
}
/* ProgressBar::_property_can_revertv(StringName const&) const */undefined8 ProgressBar::_property_can_revertv(StringName *param_1) {
   undefined8 uVar1;
   if ((code*)PTR__property_can_revert_0010d008 != Object::_property_can_revert) {
      uVar1 = Control::_property_can_revert(param_1);
      return uVar1;
   }

   return 0;
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   ProgressBar::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#3}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),ProgressBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#3}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
   code *pcVar1;
   Control::get_theme_item();
   Variant::get_validated_object();
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   ProgressBar::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#5}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),ProgressBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#5}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
   code *pcVar1;
   undefined8 in_XMM1_Qa;
   Control::get_theme_item();
   _DAT_00000a14 = Variant::operator_cast_to_Color((Variant*)&stack0x00000000);
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   _DAT_00000a1c = in_XMM1_Qa;
   ( *pcVar1 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   ProgressBar::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#7}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),ProgressBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#7}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
   code *pcVar1;
   undefined8 in_XMM1_Qa;
   Control::get_theme_item();
   _DAT_00000a28 = Variant::operator_cast_to_Color((Variant*)&stack0x00000000);
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   _DAT_00000a30 = in_XMM1_Qa;
   ( *pcVar1 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   ProgressBar::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#6}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),ProgressBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#6}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
   code *pcVar1;
   Control::get_theme_item();
   Variant::operator_cast_to_int((Variant*)&stack0x00000000);
   _DAT_00000a24 = 0;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   ProgressBar::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#4}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),ProgressBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#4}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
   code *pcVar1;
   Control::get_theme_item();
   Variant::operator_cast_to_int((Variant*)&stack0x00000000);
   _DAT_00000a10 = 0;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   ProgressBar::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#1}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),ProgressBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#1}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
   code *pcVar1;
   Control::get_theme_item();
   Variant::get_validated_object();
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   ProgressBar::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#2}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),ProgressBar::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#2}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
   code *pcVar1;
   Control::get_theme_item();
   Variant::get_validated_object();
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* ProgressBar::_bind_methods() [clone .cold] */void ProgressBar::_bind_methods(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* ProgressBar::_notification(int) [clone .cold] */void ProgressBar::_notification(int param_1) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* ProgressBar::_setv(StringName const&, Variant const&) */undefined8 ProgressBar::_setv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   uVar1 = CanvasItem::_set(param_1, param_2);
   if ((char)uVar1 == '\0') {
      if ((code*)PTR__set_0010d010 != CanvasItem::_set) {
         uVar1 = Control::_set(param_1, param_2);
         return uVar1;
      }

      uVar1 = 0;
   }

   return uVar1;
}
/* WARNING: Removing unreachable block (ram,0x00104028) *//* ProgressBar::_getv(StringName const&, Variant&) const */undefined8 ProgressBar::_getv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if (( (code*)PTR__get_0010d018 != CanvasItem::_get ) && ( uVar1 = Control::_get(param_1, param_2) ),(char)uVar1 != '\0') {
      return uVar1;
   }

   uVar1 = CanvasItem::_get(param_1, param_2);
   return uVar1;
}
/* ProgressBar::~ProgressBar() */void ProgressBar::~ProgressBar(ProgressBar *this) {
   Object *pOVar1;
   char cVar2;
   *(undefined***)this = &PTR__initialize_classv_001094f0;
   for (int i = 0; i < 3; i++) {
      if (*(long*)( this + ( -8*i + 2568 ) ) != 0) {
         cVar2 = RefCounted::unreference();
         if (cVar2 != '\0') {
            pOVar1 = *(Object**)( this + ( -8*i + 2568 ) );
            cVar2 = predelete_handler(pOVar1);
            if (cVar2 != '\0') {
               ( **(code**)( *(long*)pOVar1 + 320 ) )(pOVar1);
               Memory::free_static(pOVar1, false);
            }

         }

      }

   }

   Range::~Range((Range*)this);
   operator_delete(this, 0xa48);
   return;
}
/* ProgressBar::~ProgressBar() */void ProgressBar::~ProgressBar(ProgressBar *this) {
   Object *pOVar1;
   char cVar2;
   *(undefined***)this = &PTR__initialize_classv_001094f0;
   if (*(long*)( this + 0xa08 ) != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         pOVar1 = *(Object**)( this + 0xa08 );
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }

      }

   }

   if (*(long*)( this + 0xa00 ) != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         pOVar1 = *(Object**)( this + 0xa00 );
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }

      }

   }

   if (*(long*)( this + 0x9f8 ) != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         pOVar1 = *(Object**)( this + 0x9f8 );
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
            Range::~Range((Range*)this);
            return;
         }

      }

   }

   Range::~Range((Range*)this);
   return;
}
/* ProgressBar::_get_class_namev() const */undefined8 *ProgressBar::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_001042c3:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_001042c3;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "ProgressBar");
         goto LAB_0010432e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "ProgressBar");
   LAB_0010432e:return &_get_class_namev();
}
/* ProgressBar::get_class() const */void ProgressBar::get_class(void) {
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
/* Rect2::intersection(Rect2 const&) const */undefined1  [16] __thiscallRect2::intersection(Rect2 *this, Rect2 *param_1) {
   float fVar1;
   float fVar2;
   undefined1 auVar3[16];
   float fVar4;
   float fVar5;
   float fVar6;
   float fVar7;
   float fVar8;
   fVar6 = *(float*)param_1;
   fVar8 = *(float*)( param_1 + 4 );
   fVar4 = *(float*)( param_1 + 8 );
   fVar5 = *(float*)( param_1 + 0xc );
   if (( ( ( *(float*)( this + 8 ) <= 0.0 && *(float*)( this + 8 ) != 0.0 ) || ( *(float*)( this + 0xc ) <= 0.0 && *(float*)( this + 0xc ) != 0.0 ) ) || ( fVar4 < 0.0 ) ) || ( fVar5 < 0.0 )) {
      _err_print_error("intersects", "./core/math/rect2.h", 0x39, "Rect2 size is negative, this is not supported. Use Rect2.abs() to get a Rect2 with a positive size.", 0, 0);
   }

   fVar1 = *(float*)this;
   if (( ( fVar1 < fVar4 + fVar6 ) && ( fVar4 = *(float*)( this + 8 ) + fVar1 ),fVar6 < fVar4 )) {
      fVar8 = *(float*)( param_1 + 4 );
      fVar2 = *(float*)param_1;
      fVar7 = fVar8;
      if (fVar8 <= fVar6) {
         fVar7 = fVar6;
      }

      fVar6 = fVar8 + *(float*)( param_1 + 0xc );
      if (fVar5 <= fVar8 + *(float*)( param_1 + 0xc )) {
         fVar6 = fVar5;
      }

      fVar8 = fVar2;
      if (fVar2 <= fVar1) {
         fVar8 = fVar1;
      }

      fVar5 = fVar2 + *(float*)( param_1 + 8 );
      if (fVar4 <= fVar2 + *(float*)( param_1 + 8 )) {
         fVar5 = fVar4;
      }

      auVar3._4_4_ = fVar7;
      auVar3._0_4_ = fVar8;
      auVar3._8_4_ = fVar5 - fVar8;
      auVar3._12_4_ = fVar6 - fVar7;
      return auVar3;
   }

   return ZEXT816(0);
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
/* Object::is_class(String const&) const */ulong Object::is_class(Object *this, String *param_1) {
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

         LAB_0010499f:/* WARNING: Subroutine does not return */__stack_chk_fail();
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
                  if (lVar4 == 0) goto LAB_001048b3;
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

      LAB_001048b3:uVar5 = String::operator ==(param_1, (String*)&local_50);
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

         goto LAB_0010499f;
      }

      lVar2 = *(long*)( lVar2 + 8 );
   }
 while ( true );
}
/* ProgressBar::_validate_propertyv(PropertyInfo&) const */void ProgressBar::_validate_propertyv(ProgressBar *this, PropertyInfo *param_1) {
   Node::_validate_property((PropertyInfo*)this);
   CanvasItem::_validate_property((PropertyInfo*)this);
   if ((code*)PTR__validate_property_0010d020 != CanvasItem::_validate_property) {
      Control::_validate_property((PropertyInfo*)this);
   }

   _validate_property(this, param_1);
   return;
}
/* CowData<char32_t>::_ref(CowData<char32_t> const&) */void CowData<char32_t>::_ref(CowData<char32_t> *this, CowData *param_1) {
   if (*(long*)this != *(long*)param_1) {
      _ref(this, param_1);
      return;
   }

   return;
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
/* godot::details::enum_qualified_name_to_class_info_name(String const&) */details * __thiscall
godot::details::enum_qualified_name_to_class_info_name(details *this,String *param_1){
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
   String::split(local_58, SUB81(param_1, 0), 0x104a7d);
   if (( local_50 != (long*)0x0 ) && ( 2 < local_50[-1] )) {
      local_60 = 0;
      local_48 = &_LC26;
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
            goto LAB_00104b4a;
         }

      }

      _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar6, lVar7, "p_index", "size()", "", false, true);
      _err_flush_stdout();
      /* WARNING: Does not return */
      pcVar3 = (code*)invalidInstructionException();
      ( *pcVar3 )();
   }

   local_60 = 0;
   local_48 = &_LC26;
   local_40 = 1;
   String::parse_latin1((StrRange*)&local_60);
   String::join((Vector*)this);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   LAB_00104b4a:plVar4 = local_50;
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
/* MethodBindTRC<bool>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<bool>::_gen_argument_type_info(int param_1) {
   undefined4 in_register_0000003c;
   undefined4 *puVar1;
   long in_FS_OFFSET;
   undefined8 local_60;
   long local_58;
   long local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   puVar1 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = &_LC3;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   local_60 = 0;
   *puVar1 = 1;
   puVar1[6] = 0;
   *(undefined8*)( puVar1 + 8 ) = 0;
   *(undefined1(*) [16])( puVar1 + 2 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      puVar1[10] = 6;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar1 + 8 ), (CowData*)&local_58);
      puVar1[10] = 6;
      if (puVar1[6] == 0x11) {
         StringName::StringName((StringName*)&local_48, (String*)( puVar1 + 8 ), false);
         if (*(undefined**)( puVar1 + 4 ) == local_48) {
            if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            *(undefined**)( puVar1 + 4 ) = local_48;
         }

         goto LAB_00104dc5;
      }

   }

   StringName::operator =((StringName*)( puVar1 + 4 ), (StringName*)&local_50);
   LAB_00104dc5:CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
      StringName::unref();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<int>::_gen_argument_type_info(int) const */undefined4 *MethodBindTR<int>::_gen_argument_type_info(int param_1) {
   undefined4 in_register_0000003c;
   undefined4 *puVar1;
   long in_FS_OFFSET;
   undefined8 local_60;
   long local_58;
   long local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   puVar1 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = &_LC3;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   local_60 = 0;
   *puVar1 = 2;
   puVar1[6] = 0;
   *(undefined8*)( puVar1 + 8 ) = 0;
   *(undefined1(*) [16])( puVar1 + 2 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      puVar1[10] = 6;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar1 + 8 ), (CowData*)&local_58);
      puVar1[10] = 6;
      if (puVar1[6] == 0x11) {
         StringName::StringName((StringName*)&local_48, (String*)( puVar1 + 8 ), false);
         if (*(undefined**)( puVar1 + 4 ) == local_48) {
            if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            *(undefined**)( puVar1 + 4 ) = local_48;
         }

         goto LAB_00104f25;
      }

   }

   StringName::operator =((StringName*)( puVar1 + 4 ), (StringName*)&local_50);
   LAB_00104f25:CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
      StringName::unref();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Control::is_class(String const&) const */undefined8 Control::is_class(Control *this, String *param_1) {
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
                  if (lVar3 == 0) goto LAB_0010501f;
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

      LAB_0010501f:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar6 != '\0') goto LAB_001050d3;
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
         if (cVar6 != '\0') goto LAB_001050d3;
      }

      cVar6 = String::operator ==(param_1, "CanvasItem");
      if (cVar6 == '\0') {
         for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
            lVar5 = *(long*)( lVar2 + 0x20 );
            if (lVar5 == 0) {
               local_58 = (char*)0x0;
            }
 else {
               local_58 = (char*)0x0;
               if (*(char**)( lVar5 + 8 ) == (char*)0x0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)( lVar5 + 0x10 ));
               }
 else {
                  String::parse_latin1((String*)&local_58, *(char**)( lVar5 + 8 ));
               }

            }

            cVar6 = String::operator ==(param_1, (String*)&local_58);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
            if (cVar6 != '\0') goto LAB_001050d3;
         }

         cVar6 = String::operator ==(param_1, "Node");
         if (cVar6 == '\0') {
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               uVar8 = Object::is_class((Object*)this, param_1);
               return uVar8;
            }

            goto LAB_0010526e;
         }

      }

   }

   LAB_001050d3:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_0010526e:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* ProgressBar::is_class(String const&) const */undefined8 ProgressBar::is_class(ProgressBar *this, String *param_1) {
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
                  if (lVar3 == 0) goto LAB_001052ef;
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

      LAB_001052ef:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar6 != '\0') goto LAB_001053a3;
   }

   cVar6 = String::operator ==(param_1, "ProgressBar");
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
         if (cVar6 != '\0') goto LAB_001053a3;
      }

      cVar6 = String::operator ==(param_1, "Range");
      if (cVar6 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar8 = Control::is_class((Control*)this, param_1);
            return uVar8;
         }

         goto LAB_001054ae;
      }

   }

   LAB_001053a3:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_001054ae:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* Node::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void Node::_get_property_listv(List *param_1, bool param_2) {
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
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_78 = &_LC33;
   local_88 = 0;
   local_90 = 0;
   local_70 = 4;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = &_LC33;
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

         goto LAB_0010561c;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_0010561c:List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)CONCAT71(in_register_00000031, param_2), (PropertyInfo*)&local_78);
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
   ClassDB::get_property_list((StringName*)&local_78, (List*)CONCAT71(in_register_00000031, param_2), true, (Object*)param_1);
   if (( StringName::configured != '\0' ) && ( local_78 != (undefined*)0x0 )) {
      StringName::unref();
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
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

         goto LAB_00105881;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_00105881:local_b0 = (CowData<char32_t>*)&local_58;
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

   if ((code*)PTR__get_property_list_0010d028 != Object::_get_property_list) {
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

         goto LAB_00105b51;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_00105b51:local_b0 = (CowData<char32_t>*)&local_58;
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

   if ((code*)PTR__get_property_list_0010d030 != CanvasItem::_get_property_list) {
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

         goto LAB_00105e21;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_00105e21:local_b0 = (CowData<char32_t>*)&local_58;
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
/* ProgressBar::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void ProgressBar::_get_property_listv(ProgressBar *this, List *param_1, bool param_2) {
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
      Range::_get_property_listv((Range*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "ProgressBar";
   local_70 = 0xb;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "ProgressBar";
   local_98 = 0;
   local_70 = 0xb;
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

         goto LAB_001060d1;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_001060d1:local_b0 = (CowData<char32_t>*)&local_58;
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

   StringName::StringName((StringName*)&local_78, "ProgressBar", false);
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
   if (in_EDX != 0) goto LAB_00106259;
   local_78 = 0;
   local_68 = &_LC3;
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
      LAB_00106355:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_00106355;
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
   LAB_00106259:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return puVar5;
}
/* MethodBindT<int>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<int>::_gen_argument_type_info(int param_1) {
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
   if (in_EDX != 0) goto LAB_001064c9;
   local_78 = 0;
   local_68 = &_LC3;
   local_80 = 0;
   auVar1._8_8_ = 0;
   auVar1._0_8_ = local_60._8_8_;
   local_60 = auVar1 << 0x40;
   String::parse_latin1((StrRange*)&local_80);
   local_88 = 0;
   local_68 = (undefined*)CONCAT44(local_68._4_4_, 2);
   local_50 = 0;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_80 == 0) {
      LAB_001065c5:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_001065c5;
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
   LAB_001064c9:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return puVar5;
}
/* MethodBind* create_method_bind<ProgressBar, int>(void (ProgressBar::*)(int)) */MethodBind *create_method_bind<ProgressBar,int>(_func_void_int *param_1) {
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
   *(_func_void_int**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00109860;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "ProgressBar";
   local_30 = 0xb;
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
/* MethodBind* create_method_bind<ProgressBar, int>(int (ProgressBar::*)()) */MethodBind *create_method_bind<ProgressBar,int>(_func_int *param_1) {
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   undefined8 local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_int**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_001098c0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "ProgressBar";
   local_30 = 0xb;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<ProgressBar, bool>(void (ProgressBar::*)(bool)) */MethodBind *create_method_bind<ProgressBar,bool>(_func_void_bool *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_00109920;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "ProgressBar";
   local_30 = 0xb;
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
/* MethodBind* create_method_bind<ProgressBar, bool>(bool (ProgressBar::*)() const) */MethodBind *create_method_bind<ProgressBar,bool>(_func_bool *param_1) {
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   undefined8 local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_bool**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00109980;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "ProgressBar";
   local_30 = 0xb;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ProgressBar::_initialize_classv() */void ProgressBar::_initialize_classv(void)

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
            if ((code *)PTR__bind_methods_0010d048 != Node::_bind_methods) {
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
          if ((code *)PTR__bind_compatibility_methods_0010d038 !=
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
      if ((code *)PTR__bind_methods_0010d040 != Control::_bind_methods) {
        Range::_bind_methods();
      }
      Range::initialize_class()::initialized = '\x01';
    }
    local_58 = "Range";
    local_68 = 0;
    local_50 = 5;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "ProgressBar";
    local_70 = 0;
    local_50 = 0xb;
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



/* WARNING: Removing unreachable block (ram,0x00107288) */
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
      _err_print_error(&_LC74,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00107600;
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
LAB_00107600:
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
      goto LAB_001078a2;
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
LAB_001078a2:
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
      goto LAB_00107a61;
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
LAB_00107a61:
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
      goto LAB_00107da1;
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
                    /* WARNING: Could not recover jumptable at 0x00107c2d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined1 *)(*(long *)param_3 + 8));
    return;
  }
LAB_00107da1:
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
      goto LAB_00107f89;
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
                    /* WARNING: Could not recover jumptable at 0x00107e12. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3 != '\0');
    return;
  }
LAB_00107f89:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTR<int>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

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
      _err_print_error(&_LC74,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00108050;
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
LAB_00108050:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<int>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTR<int>::validated_call
          (MethodBindTR<int> *this,Object *param_1,Variant **param_2,Variant *param_3)

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
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00108264;
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
LAB_00108264:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<int>::ptrcall(MethodBindTR<int> *this,Object *param_1,void **param_2,void *param_3)

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
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00108413;
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
LAB_00108413:
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
      goto LAB_00108751;
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
                    /* WARNING: Could not recover jumptable at 0x001085dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_00108751:
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
      goto LAB_00108931;
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
                    /* WARNING: Could not recover jumptable at 0x001087bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_00108931:
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
    goto LAB_00108a2d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_00108a90;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_00108a90:
      uVar6 = 4;
LAB_00108a2d:
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
      goto LAB_001089ab;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_001089ab:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_bool **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,1);
  uVar4 = _LC78;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_bool(this);
                    /* WARNING: Could not recover jumptable at 0x00108a07. Too many branches */
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
      _err_print_error(&_LC74,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00108b86;
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
LAB_00108b86:
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
    goto LAB_00108e4d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_00108eb0;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_00108eb0:
      uVar6 = 4;
LAB_00108e4d:
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
      goto LAB_00108dcb;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_00108dcb:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_int **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC80;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_int(this);
                    /* WARNING: Could not recover jumptable at 0x00108e26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)((int)(param_1 + (long)param_3));
  return;
}



/* MethodBindT<int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<int>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

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
      _err_print_error(&_LC74,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00108f16;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,int>
            (p_Var2,(_func_void_int *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,in_R9
            );
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00108f16:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x00109160) */
/* ProgressBar::_notificationv(int, bool) */

void __thiscall ProgressBar::_notificationv(ProgressBar *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    _notification(this,param_1);
    if ((code *)PTR__notification_0010d050 != CanvasItem::_notification) {
      Control::_notification(iVar1);
    }
    CanvasItem::_notification(iVar1);
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  CanvasItem::_notification(iVar1);
  if ((code *)PTR__notification_0010d050 != CanvasItem::_notification) {
    Control::_notification(iVar1);
  }
  _notification(this,param_1);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* StringName::~StringName() */

void __thiscall StringName::~StringName(StringName *this)

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
/* ProgressBar::~ProgressBar() */

void __thiscall ProgressBar::~ProgressBar(ProgressBar *this)

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
/* MethodBindTR<int>::~MethodBindTR() */

void __thiscall MethodBindTR<int>::~MethodBindTR(MethodBindTR<int> *this)

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

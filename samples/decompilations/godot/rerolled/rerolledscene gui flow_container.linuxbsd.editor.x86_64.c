/* FlowContainer::get_line_count() const */undefined4 FlowContainer::get_line_count(FlowContainer *this) {
   return *(undefined4*)( this + 0xa04 );
}
/* FlowContainer::get_alignment() const */undefined4 FlowContainer::get_alignment(FlowContainer *this) {
   return *(undefined4*)( this + 0xa14 );
}
/* FlowContainer::get_last_wrap_alignment() const */undefined4 FlowContainer::get_last_wrap_alignment(FlowContainer *this) {
   return *(undefined4*)( this + 0xa18 );
}
/* FlowContainer::is_vertical() const */FlowContainer FlowContainer::is_vertical(FlowContainer *this) {
   return this[0xa10];
}
/* FlowContainer::is_reverse_fill() const */FlowContainer FlowContainer::is_reverse_fill(FlowContainer *this) {
   return this[0xa11];
}
/* FlowContainer::get_minimum_size() const */void FlowContainer::get_minimum_size(FlowContainer *this) {
   int iVar1;
   undefined8 uVar2;
   long *plVar3;
   int iVar4;
   long in_FS_OFFSET;
   int local_30[2];
   undefined8 local_28;
   long local_20;
   iVar4 = 0;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_30[0] = 0;
   local_30[1] = 0;
   while (true) {
      iVar1 = Node::get_child_count(SUB81(this, 0));
      if (iVar1 <= iVar4) break;
      uVar2 = Node::get_child((int)this, SUB41(iVar4, 0));
      plVar3 = (long*)Container::as_sortable_control(this, uVar2, 0);
      if (plVar3 != (long*)0x0) {
         local_28 = ( **(code**)( *plVar3 + 0x300 ) )(plVar3);
         uVar2 = Vector2::operator_cast_to_Vector2i((Vector2*)&local_28);
         if (this[0xa10] == (FlowContainer)0x0) {
            if (local_30[0] < (int)uVar2) {
               local_30[0] = (int)uVar2;
            }

            iVar1 = *(int*)( this + 0xa00 );
         }
 else {
            iVar1 = (int)( (ulong)uVar2 >> 0x20 );
            if (iVar1 < local_30[1]) {
               iVar1 = local_30[1];
            }

            local_30[0] = *(int*)( this + 0xa00 );
         }

         local_30[1] = iVar1;
      }

      iVar4 = iVar4 + 1;
   }
;
   Vector2i::operator_cast_to_Vector2((Vector2i*)local_30);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   FlowContainer::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#2}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<void(Node *, StringName_const &, StringName_const &),FlowContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#2}>::_M_manager(undefined8 *param_1, undefined8 param_2, int param_3) {
   if (param_3 == 0) {
      *param_1 = &FlowContainer::_bind_methods()::
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
   FlowContainer::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#1}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<void(Node *, StringName_const &, StringName_const &),FlowContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#1}>::_M_manager(undefined8 *param_1, undefined8 param_2, int param_3) {
   if (param_3 == 0) {
      *param_1 = &FlowContainer::_bind_methods()::
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   FlowContainer::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#1}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),FlowContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#1}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
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
      _DAT_00000a1c = 0;
      /* WARNING: Does not return */
      pcVar1 = (code*)invalidInstructionException();
      ( *pcVar1 )();
   }

   lVar3 = __dynamic_cast(*param_2, &Object::typeinfo, &FlowContainer::typeinfo, 0);
   Control::get_theme_item(local_48, lVar3, 1, param_3, param_4);
   iVar2 = Variant::operator_cast_to_int((Variant*)local_48);
   *(int*)( lVar3 + 0xa1c ) = iVar2;
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
   FlowContainer::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#2}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),FlowContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#2}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
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
      _DAT_00000a20 = 0;
      /* WARNING: Does not return */
      pcVar1 = (code*)invalidInstructionException();
      ( *pcVar1 )();
   }

   lVar3 = __dynamic_cast(*param_2, &Object::typeinfo, &FlowContainer::typeinfo, 0);
   Control::get_theme_item(local_48, lVar3, 1, param_3, param_4);
   iVar2 = Variant::operator_cast_to_int((Variant*)local_48);
   *(int*)( lVar3 + 0xa20 ) = iVar2;
   if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* CowData<_LineData>::_copy_on_write() [clone .isra.0] */void CowData<_LineData>::_copy_on_write(CowData<_LineData> *this) {
   long *plVar1;
   long lVar2;
   code *pcVar3;
   undefined8 *puVar4;
   size_t __n;
   ulong uVar5;
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
   __n = lVar2 * 0x18;
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
/* FlowContainer::_validate_property(PropertyInfo&) const */void FlowContainer::_validate_property(FlowContainer *this, PropertyInfo *param_1) {
   char cVar1;
   if (this[0xa24] == (FlowContainer)0x0) {
      return;
   }

   cVar1 = String::operator ==((String*)( param_1 + 8 ), "vertical");
   if (cVar1 != '\0') {
      *(undefined4*)( param_1 + 0x28 ) = 0;
   }

   return;
}
/* FlowContainer::get_line_max_child_count() const */undefined4 FlowContainer::get_line_max_child_count(FlowContainer *this) {
   return *(undefined4*)( this + 0xa08 );
}
/* FlowContainer::FlowContainer(bool) */void FlowContainer::FlowContainer(FlowContainer *this, bool param_1) {
   Container::Container((Container*)this);
   this[0xa11] = (FlowContainer)0x0;
   *(undefined***)this = &PTR__initialize_classv_0010c198;
   *(undefined8*)( this + 0xa14 ) = 0;
   *(undefined8*)( this + 0xa1c ) = 0;
   this[0xa24] = (FlowContainer)0x0;
   this[0xa10] = (FlowContainer)param_1;
   *(undefined1(*) [16])( this + 0xa00 ) = (undefined1[16])0x0;
   return;
}
/* FlowContainer::_bind_methods() */void FlowContainer::_bind_methods(void) {
   long lVar1;
   code *pcVar2;
   long *plVar3;
   MethodBind *pMVar4;
   undefined8 uVar5;
   uint uVar6;
   long *plVar7;
   long lVar8;
   long in_FS_OFFSET;
   undefined8 local_e8;
   long local_e0;
   long local_d8;
   long local_d0;
   long local_c8;
   long *local_c0;
   char *local_b8;
   undefined8 local_b0;
   char *local_a8;
   undefined8 local_a0;
   long *local_98;
   int local_90;
   undefined8 local_88;
   undefined4 local_80;
   char *local_78;
   undefined8 local_70;
   undefined8 local_68;
   undefined8 uStack_60;
   code *pcStack_58;
   code *pcStack_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   D_METHODP((char*)&local_a8, (char***)"get_line_count", 0);
   uStack_60 = 0;
   pcStack_58 = (code*)0x0;
   local_68._0_4_ = 0;
   local_68._4_4_ = 0;
   pMVar4 = create_method_bind<FlowContainer,int>(get_line_count);
   ClassDB::bind_methodfi(1, pMVar4, false, (MethodDefinition*)&local_a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_68] != '\0') {
      Variant::_clear_internal();
   }

   plVar3 = local_98;
   if (local_98 != (long*)0x0) {
      LOCK();
      plVar7 = local_98 + -2;
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (*plVar7 == 0) {
         if (local_98 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = local_98[-1];
         lVar8 = 0;
         local_98 = (long*)0x0;
         plVar7 = plVar3;
         if (lVar1 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar7 != 0 )) {
                  StringName::unref();
               }

               lVar8 = lVar8 + 1;
               plVar7 = plVar7 + 1;
            }
 while ( lVar1 != lVar8 );
         }

         Memory::free_static(plVar3 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_a8 != (char*)0x0 )) {
      StringName::unref();
   }

   local_70 = 0;
   local_78 = "alignment";
   uVar6 = ( uint ) & local_68;
   local_68 = &local_78;
   D_METHODP((char*)&local_a8, (char***)"set_alignment", uVar6);
   uStack_60 = 0;
   pcStack_58 = (code*)0x0;
   local_68._0_4_ = 0;
   local_68._4_4_ = 0;
   pMVar4 = create_method_bind<FlowContainer,FlowContainer::AlignmentMode>(set_alignment);
   ClassDB::bind_methodfi(1, pMVar4, false, (MethodDefinition*)&local_a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_68] != '\0') {
      Variant::_clear_internal();
   }

   plVar3 = local_98;
   if (local_98 != (long*)0x0) {
      LOCK();
      plVar7 = local_98 + -2;
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (*plVar7 == 0) {
         if (local_98 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = local_98[-1];
         lVar8 = 0;
         local_98 = (long*)0x0;
         plVar7 = plVar3;
         if (lVar1 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar7 != 0 )) {
                  StringName::unref();
               }

               lVar8 = lVar8 + 1;
               plVar7 = plVar7 + 1;
            }
 while ( lVar1 != lVar8 );
         }

         Memory::free_static(plVar3 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_a8 != (char*)0x0 )) {
      StringName::unref();
   }

   D_METHODP((char*)&local_a8, (char***)"get_alignment", 0);
   uStack_60 = 0;
   pcStack_58 = (code*)0x0;
   local_68._0_4_ = 0;
   local_68._4_4_ = 0;
   pMVar4 = create_method_bind<FlowContainer,FlowContainer::AlignmentMode>(get_alignment);
   ClassDB::bind_methodfi(1, pMVar4, false, (MethodDefinition*)&local_a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_68] != '\0') {
      Variant::_clear_internal();
   }

   plVar3 = local_98;
   if (local_98 != (long*)0x0) {
      LOCK();
      plVar7 = local_98 + -2;
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (*plVar7 == 0) {
         if (local_98 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = local_98[-1];
         lVar8 = 0;
         local_98 = (long*)0x0;
         plVar7 = plVar3;
         if (lVar1 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar7 != 0 )) {
                  StringName::unref();
               }

               lVar8 = lVar8 + 1;
               plVar7 = plVar7 + 1;
            }
 while ( lVar1 != lVar8 );
         }

         Memory::free_static(plVar3 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_a8 != (char*)0x0 )) {
      StringName::unref();
   }

   local_78 = "last_wrap_alignment";
   local_70 = 0;
   local_68 = &local_78;
   D_METHODP((char*)&local_a8, (char***)"set_last_wrap_alignment", uVar6);
   uStack_60 = 0;
   pcStack_58 = (code*)0x0;
   local_68._0_4_ = 0;
   local_68._4_4_ = 0;
   pMVar4 = create_method_bind<FlowContainer,FlowContainer::LastWrapAlignmentMode>(set_last_wrap_alignment);
   ClassDB::bind_methodfi(1, pMVar4, false, (MethodDefinition*)&local_a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_68] != '\0') {
      Variant::_clear_internal();
   }

   plVar3 = local_98;
   if (local_98 != (long*)0x0) {
      LOCK();
      plVar7 = local_98 + -2;
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (*plVar7 == 0) {
         if (local_98 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = local_98[-1];
         lVar8 = 0;
         local_98 = (long*)0x0;
         plVar7 = plVar3;
         if (lVar1 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar7 != 0 )) {
                  StringName::unref();
               }

               lVar8 = lVar8 + 1;
               plVar7 = plVar7 + 1;
            }
 while ( lVar1 != lVar8 );
         }

         Memory::free_static(plVar3 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_a8 != (char*)0x0 )) {
      StringName::unref();
   }

   D_METHODP((char*)&local_a8, (char***)"get_last_wrap_alignment", 0);
   uStack_60 = 0;
   pcStack_58 = (code*)0x0;
   local_68._0_4_ = 0;
   local_68._4_4_ = 0;
   pMVar4 = create_method_bind<FlowContainer,FlowContainer::LastWrapAlignmentMode>(get_last_wrap_alignment);
   ClassDB::bind_methodfi(1, pMVar4, false, (MethodDefinition*)&local_a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_68] != '\0') {
      Variant::_clear_internal();
   }

   plVar3 = local_98;
   if (local_98 != (long*)0x0) {
      LOCK();
      plVar7 = local_98 + -2;
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (*plVar7 == 0) {
         if (local_98 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = local_98[-1];
         lVar8 = 0;
         local_98 = (long*)0x0;
         plVar7 = plVar3;
         if (lVar1 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar7 != 0 )) {
                  StringName::unref();
               }

               lVar8 = lVar8 + 1;
               plVar7 = plVar7 + 1;
            }
 while ( lVar1 != lVar8 );
         }

         Memory::free_static(plVar3 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_a8 != (char*)0x0 )) {
      StringName::unref();
   }

   local_78 = "vertical";
   local_70 = 0;
   local_68 = &local_78;
   D_METHODP((char*)&local_a8, (char***)"set_vertical", uVar6);
   uStack_60 = 0;
   pcStack_58 = (code*)0x0;
   local_68._0_4_ = 0;
   local_68._4_4_ = 0;
   pMVar4 = create_method_bind<FlowContainer,bool>(set_vertical);
   ClassDB::bind_methodfi(1, pMVar4, false, (MethodDefinition*)&local_a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_68] != '\0') {
      Variant::_clear_internal();
   }

   plVar3 = local_98;
   if (local_98 != (long*)0x0) {
      LOCK();
      plVar7 = local_98 + -2;
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (*plVar7 == 0) {
         if (local_98 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = local_98[-1];
         lVar8 = 0;
         local_98 = (long*)0x0;
         plVar7 = plVar3;
         if (lVar1 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar7 != 0 )) {
                  StringName::unref();
               }

               lVar8 = lVar8 + 1;
               plVar7 = plVar7 + 1;
            }
 while ( lVar1 != lVar8 );
         }

         Memory::free_static(plVar3 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_a8 != (char*)0x0 )) {
      StringName::unref();
   }

   D_METHODP((char*)&local_a8, (char***)"is_vertical", 0);
   uStack_60 = 0;
   pcStack_58 = (code*)0x0;
   local_68._0_4_ = 0;
   local_68._4_4_ = 0;
   pMVar4 = create_method_bind<FlowContainer,bool>(is_vertical);
   ClassDB::bind_methodfi(1, pMVar4, false, (MethodDefinition*)&local_a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_68] != '\0') {
      Variant::_clear_internal();
   }

   plVar3 = local_98;
   if (local_98 != (long*)0x0) {
      LOCK();
      plVar7 = local_98 + -2;
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (*plVar7 == 0) {
         if (local_98 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = local_98[-1];
         lVar8 = 0;
         local_98 = (long*)0x0;
         plVar7 = plVar3;
         if (lVar1 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar7 != 0 )) {
                  StringName::unref();
               }

               lVar8 = lVar8 + 1;
               plVar7 = plVar7 + 1;
            }
 while ( lVar1 != lVar8 );
         }

         Memory::free_static(plVar3 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_a8 != (char*)0x0 )) {
      StringName::unref();
   }

   local_78 = "reverse_fill";
   local_70 = 0;
   local_68 = &local_78;
   D_METHODP((char*)&local_a8, (char***)"set_reverse_fill", uVar6);
   uStack_60 = 0;
   pcStack_58 = (code*)0x0;
   local_68._0_4_ = 0;
   local_68._4_4_ = 0;
   pMVar4 = create_method_bind<FlowContainer,bool>(set_reverse_fill);
   ClassDB::bind_methodfi(1, pMVar4, false, (MethodDefinition*)&local_a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_68] != '\0') {
      Variant::_clear_internal();
   }

   plVar3 = local_98;
   if (local_98 != (long*)0x0) {
      LOCK();
      plVar7 = local_98 + -2;
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (*plVar7 == 0) {
         if (local_98 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = local_98[-1];
         lVar8 = 0;
         local_98 = (long*)0x0;
         plVar7 = plVar3;
         if (lVar1 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar7 != 0 )) {
                  StringName::unref();
               }

               lVar8 = lVar8 + 1;
               plVar7 = plVar7 + 1;
            }
 while ( lVar1 != lVar8 );
         }

         Memory::free_static(plVar3 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_a8 != (char*)0x0 )) {
      StringName::unref();
   }

   D_METHODP((char*)&local_a8, (char***)"is_reverse_fill", 0);
   uStack_60 = 0;
   pcStack_58 = (code*)0x0;
   local_68._0_4_ = 0;
   local_68._4_4_ = 0;
   pMVar4 = create_method_bind<FlowContainer,bool>(is_reverse_fill);
   ClassDB::bind_methodfi(1, pMVar4, false, (MethodDefinition*)&local_a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_68] != '\0') {
      Variant::_clear_internal();
   }

   plVar3 = local_98;
   if (local_98 != (long*)0x0) {
      LOCK();
      plVar7 = local_98 + -2;
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (*plVar7 == 0) {
         if (local_98 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = local_98[-1];
         lVar8 = 0;
         local_98 = (long*)0x0;
         plVar7 = plVar3;
         if (lVar1 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar7 != 0 )) {
                  StringName::unref();
               }

               lVar8 = lVar8 + 1;
               plVar7 = plVar7 + 1;
            }
 while ( lVar1 != lVar8 );
         }

         Memory::free_static(plVar3 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_a8 != (char*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_b8, "ALIGNMENT_BEGIN", false);
   local_a8 = "ALIGNMENT_BEGIN";
   local_c8 = 0;
   local_a0 = 0xf;
   String::parse_latin1((StrRange*)&local_c8);
   GetTypeInfo<FlowContainer::AlignmentMode,void>::get_class_info((GetTypeInfo<FlowContainer::AlignmentMode,void>*)&local_a8);
   local_c0 = local_98;
   local_98 = (long*)0x0;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
   local_a8 = "FlowContainer";
   local_d0 = 0;
   local_a0 = 0xd;
   String::parse_latin1((StrRange*)&local_d0);
   StringName::StringName((StringName*)&local_a8, (String*)&local_d0, false);
   ClassDB::bind_integer_constant((StringName*)&local_a8, (StringName*)&local_c0, (StringName*)&local_b8, 0, false);
   if (( StringName::configured != '\0' ) && ( local_a8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
   if (( StringName::configured != '\0' ) && ( local_c0 != (long*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_b8, "ALIGNMENT_CENTER", false);
   local_a8 = "ALIGNMENT_CENTER";
   local_c8 = 0;
   local_a0 = 0x10;
   String::parse_latin1((StrRange*)&local_c8);
   GetTypeInfo<FlowContainer::AlignmentMode,void>::get_class_info((GetTypeInfo<FlowContainer::AlignmentMode,void>*)&local_a8);
   local_c0 = local_98;
   local_98 = (long*)0x0;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
   local_a8 = "FlowContainer";
   local_d0 = 0;
   local_a0 = 0xd;
   String::parse_latin1((StrRange*)&local_d0);
   StringName::StringName((StringName*)&local_a8, (String*)&local_d0, false);
   ClassDB::bind_integer_constant((StringName*)&local_a8, (StringName*)&local_c0, (StringName*)&local_b8, 1, false);
   if (( StringName::configured != '\0' ) && ( local_a8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
   if (( StringName::configured != '\0' ) && ( local_c0 != (long*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_b8, "ALIGNMENT_END", false);
   local_a8 = "ALIGNMENT_END";
   local_c8 = 0;
   local_a0 = 0xd;
   String::parse_latin1((StrRange*)&local_c8);
   GetTypeInfo<FlowContainer::AlignmentMode,void>::get_class_info((GetTypeInfo<FlowContainer::AlignmentMode,void>*)&local_a8);
   local_c0 = local_98;
   local_98 = (long*)0x0;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
   local_a8 = "FlowContainer";
   local_d0 = 0;
   local_a0 = 0xd;
   String::parse_latin1((StrRange*)&local_d0);
   StringName::StringName((StringName*)&local_a8, (String*)&local_d0, false);
   ClassDB::bind_integer_constant((StringName*)&local_a8, (StringName*)&local_c0, (StringName*)&local_b8, 2, false);
   if (( StringName::configured != '\0' ) && ( local_a8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
   if (( StringName::configured != '\0' ) && ( local_c0 != (long*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_b8, "LAST_WRAP_ALIGNMENT_INHERIT", false);
   local_a8 = "LAST_WRAP_ALIGNMENT_INHERIT";
   local_c8 = 0;
   local_a0 = 0x1b;
   String::parse_latin1((StrRange*)&local_c8);
   GetTypeInfo<FlowContainer::LastWrapAlignmentMode,void>::get_class_info((GetTypeInfo<FlowContainer::LastWrapAlignmentMode,void>*)&local_a8);
   local_c0 = local_98;
   local_98 = (long*)0x0;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
   local_a8 = "FlowContainer";
   local_d0 = 0;
   local_a0 = 0xd;
   String::parse_latin1((StrRange*)&local_d0);
   StringName::StringName((StringName*)&local_a8, (String*)&local_d0, false);
   ClassDB::bind_integer_constant((StringName*)&local_a8, (StringName*)&local_c0, (StringName*)&local_b8, 0, false);
   if (( StringName::configured != '\0' ) && ( local_a8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
   if (( StringName::configured != '\0' ) && ( local_c0 != (long*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_b8, "LAST_WRAP_ALIGNMENT_BEGIN", false);
   local_a8 = "LAST_WRAP_ALIGNMENT_BEGIN";
   local_c8 = 0;
   local_a0 = 0x19;
   String::parse_latin1((StrRange*)&local_c8);
   GetTypeInfo<FlowContainer::LastWrapAlignmentMode,void>::get_class_info((GetTypeInfo<FlowContainer::LastWrapAlignmentMode,void>*)&local_a8);
   local_c0 = local_98;
   local_98 = (long*)0x0;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
   local_a8 = "FlowContainer";
   local_d0 = 0;
   local_a0 = 0xd;
   String::parse_latin1((StrRange*)&local_d0);
   StringName::StringName((StringName*)&local_a8, (String*)&local_d0, false);
   ClassDB::bind_integer_constant((StringName*)&local_a8, (StringName*)&local_c0, (StringName*)&local_b8, 1, false);
   if (( StringName::configured != '\0' ) && ( local_a8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
   if (( StringName::configured != '\0' ) && ( local_c0 != (long*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_b8, "LAST_WRAP_ALIGNMENT_CENTER", false);
   local_a8 = "LAST_WRAP_ALIGNMENT_CENTER";
   local_c8 = 0;
   local_a0 = 0x1a;
   String::parse_latin1((StrRange*)&local_c8);
   GetTypeInfo<FlowContainer::LastWrapAlignmentMode,void>::get_class_info((GetTypeInfo<FlowContainer::LastWrapAlignmentMode,void>*)&local_a8);
   local_c0 = local_98;
   local_98 = (long*)0x0;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
   local_a8 = "FlowContainer";
   local_d0 = 0;
   local_a0 = 0xd;
   String::parse_latin1((StrRange*)&local_d0);
   StringName::StringName((StringName*)&local_a8, (String*)&local_d0, false);
   ClassDB::bind_integer_constant((StringName*)&local_a8, (StringName*)&local_c0, (StringName*)&local_b8, 2, false);
   if (( StringName::configured != '\0' ) && ( local_a8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
   if (( StringName::configured != '\0' ) && ( local_c0 != (long*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_b8, "LAST_WRAP_ALIGNMENT_END", false);
   local_a8 = "LAST_WRAP_ALIGNMENT_END";
   local_c8 = 0;
   local_a0 = 0x17;
   String::parse_latin1((StrRange*)&local_c8);
   GetTypeInfo<FlowContainer::LastWrapAlignmentMode,void>::get_class_info((GetTypeInfo<FlowContainer::LastWrapAlignmentMode,void>*)&local_a8);
   local_c0 = local_98;
   local_98 = (long*)0x0;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
   local_a8 = "FlowContainer";
   local_d0 = 0;
   local_a0 = 0xd;
   String::parse_latin1((StrRange*)&local_d0);
   StringName::StringName((StringName*)&local_a8, (String*)&local_d0, false);
   ClassDB::bind_integer_constant((StringName*)&local_a8, (StringName*)&local_c0, (StringName*)&local_b8, 3, false);
   if (( StringName::configured != '\0' ) && ( local_a8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
   if (( StringName::configured != '\0' ) && ( local_c0 != (long*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_c0, true);
   _scs_create((char*)&local_c8, true);
   local_d0 = 0;
   local_a8 = "Begin,Center,End";
   local_d8 = 0;
   local_a0 = 0x10;
   String::parse_latin1((StrRange*)&local_d8);
   local_e0 = 0;
   local_a8 = "alignment";
   local_a0 = 9;
   String::parse_latin1((StrRange*)&local_e0);
   local_a8 = (char*)CONCAT44(local_a8._4_4_, 2);
   local_a0 = 0;
   if (local_e0 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_a0, (CowData*)&local_e0);
   }

   local_98 = (long*)0x0;
   local_90 = 2;
   local_88 = 0;
   if (local_d8 == 0) {
      LAB_001018f3:local_80 = 6;
      StringName::operator =((StringName*)&local_98, (StringName*)&local_d0);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_88, (CowData*)&local_d8);
      local_80 = 6;
      if (local_90 != 0x11) goto LAB_001018f3;
      StringName::StringName((StringName*)&local_b8, (String*)&local_88, false);
      if (local_98 == (long*)local_b8) {
         if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_98 = (long*)local_b8;
      }

   }

   local_b8 = "FlowContainer";
   local_e8 = 0;
   local_b0 = 0xd;
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
   if (( ( ( StringName::configured != '\0' ) && ( ( local_d0 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_c8 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_c0 != (long*)0x0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_c0, true);
   _scs_create((char*)&local_c8, true);
   local_a8 = "Inherit,Begin,Center,End";
   local_d0 = 0;
   local_d8 = 0;
   local_a0 = 0x18;
   String::parse_latin1((StrRange*)&local_d8);
   local_e0 = 0;
   local_a8 = "last_wrap_alignment";
   local_a0 = 0x13;
   String::parse_latin1((StrRange*)&local_e0);
   local_a8 = (char*)CONCAT44(local_a8._4_4_, 2);
   local_a0 = 0;
   if (local_e0 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_a0, (CowData*)&local_e0);
   }

   local_98 = (long*)0x0;
   local_90 = 2;
   local_88 = 0;
   if (local_d8 == 0) {
      LAB_00101b2b:local_80 = 6;
      StringName::operator =((StringName*)&local_98, (StringName*)&local_d0);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_88, (CowData*)&local_d8);
      local_80 = 6;
      if (local_90 != 0x11) goto LAB_00101b2b;
      StringName::StringName((StringName*)&local_b8, (String*)&local_88, false);
      if (local_98 == (long*)local_b8) {
         if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_98 = (long*)local_b8;
      }

   }

   local_b8 = "FlowContainer";
   local_e8 = 0;
   local_b0 = 0xd;
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
   if (( ( StringName::configured != '\0' ) && ( ( local_d0 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( ( local_c8 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_c0 != (long*)0x0 ) ) )) {
      StringName::unref();
   }

   _scs_create((char*)&local_c0, true);
   _scs_create((char*)&local_c8, true);
   local_a8 = "";
   local_d0 = 0;
   local_d8 = 0;
   local_a0 = 0;
   String::parse_latin1((StrRange*)&local_d8);
   local_e0 = 0;
   local_a8 = "vertical";
   local_a0 = 8;
   String::parse_latin1((StrRange*)&local_e0);
   local_a8 = (char*)CONCAT44(local_a8._4_4_, 1);
   local_a0 = 0;
   if (local_e0 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_a0, (CowData*)&local_e0);
   }

   local_98 = (long*)0x0;
   local_90 = 0;
   local_88 = 0;
   if (local_d8 == 0) {
      LAB_00101d5b:local_80 = 6;
      StringName::operator =((StringName*)&local_98, (StringName*)&local_d0);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_88, (CowData*)&local_d8);
      local_80 = 6;
      if (local_90 != 0x11) goto LAB_00101d5b;
      StringName::StringName((StringName*)&local_b8, (String*)&local_88, false);
      if (local_98 == (long*)local_b8) {
         if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_98 = (long*)local_b8;
      }

   }

   local_b8 = "FlowContainer";
   local_e8 = 0;
   local_b0 = 0xd;
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
   if (( ( ( StringName::configured != '\0' ) && ( ( local_d0 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_c8 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_c0 != (long*)0x0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_c0, true);
   _scs_create((char*)&local_c8, true);
   local_a8 = "";
   local_d0 = 0;
   local_d8 = 0;
   local_a0 = 0;
   String::parse_latin1((StrRange*)&local_d8);
   local_e0 = 0;
   local_a8 = "reverse_fill";
   local_a0 = 0xc;
   String::parse_latin1((StrRange*)&local_e0);
   local_a8 = (char*)CONCAT44(local_a8._4_4_, 1);
   local_a0 = 0;
   if (local_e0 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_a0, (CowData*)&local_e0);
   }

   local_98 = (long*)0x0;
   local_90 = 0;
   local_88 = 0;
   if (local_d8 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_88, (CowData*)&local_d8);
      local_80 = 6;
      if (local_90 == 0x11) {
         StringName::StringName((StringName*)&local_b8, (String*)&local_88, false);
         if (local_98 == (long*)local_b8) {
            if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            local_98 = (long*)local_b8;
         }

         goto LAB_00101f9b;
      }

   }

   local_80 = 6;
   StringName::operator =((StringName*)&local_98, (StringName*)&local_d0);
   LAB_00101f9b:local_b8 = "FlowContainer";
   local_e8 = 0;
   local_b0 = 0xd;
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
   if (( ( StringName::configured != '\0' ) && ( ( local_d0 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( ( local_c8 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_c0 != (long*)0x0 ) ) )) {
      StringName::unref();
   }

   uVar5 = ThemeDB::get_singleton();
   local_68._0_4_ = 0;
   local_68._4_4_ = 0;
   uStack_60 = 0;
   pcStack_58 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),FlowContainer::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#1}>::_M_manager;
   pcStack_50 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),FlowContainer::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#1}>::_M_invoke;
   StringName::StringName((StringName*)&local_b8, "h_separation", false);
   StringName::StringName((StringName*)&local_c0, "h_separation", false);
   local_a8 = "FlowContainer";
   local_c8 = 0;
   local_a0 = 0xd;
   String::parse_latin1((StrRange*)&local_c8);
   StringName::StringName((StringName*)&local_a8, (String*)&local_c8, false);
   ThemeDB::bind_class_item(uVar5, 1, (MethodDefinition*)&local_a8, (StringName*)&local_c0, (StringName*)&local_b8, &local_68);
   if (( StringName::configured != '\0' ) && ( local_a8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   if (( StringName::configured != '\0' ) && ( ( ( local_c0 == (long*)0x0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_b8 != (char*)0x0 ) ) )) {
      StringName::unref();
   }

   if (pcStack_58 != (code*)0x0) {
      ( *pcStack_58 )(&local_68, &local_68, 3);
   }

   uVar5 = ThemeDB::get_singleton();
   local_68._0_4_ = 0;
   local_68._4_4_ = 0;
   uStack_60 = 0;
   pcStack_58 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),FlowContainer::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#2}>::_M_manager;
   pcStack_50 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),FlowContainer::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#2}>::_M_invoke;
   StringName::StringName((StringName*)&local_b8, "v_separation", false);
   StringName::StringName((StringName*)&local_c0, "v_separation", false);
   local_a8 = "FlowContainer";
   local_c8 = 0;
   local_a0 = 0xd;
   String::parse_latin1((StrRange*)&local_c8);
   StringName::StringName((StringName*)&local_a8, (String*)&local_c8, false);
   ThemeDB::bind_class_item(uVar5, 1, (MethodDefinition*)&local_a8, (StringName*)&local_c0, (StringName*)&local_b8, &local_68);
   if (( StringName::configured != '\0' ) && ( local_a8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   if (( ( StringName::configured != '\0' ) && ( ( local_c0 == (long*)0x0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_b8 != (char*)0x0 )) {
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
/* FlowContainer::get_allowed_size_flags_vertical() const */void FlowContainer::get_allowed_size_flags_vertical(void) {
   long in_RSI;
   Vector<int> *in_RDI;
   *(undefined8*)( in_RDI + 8 ) = 0;
   Vector<int>::push_back(in_RDI, 1);
   if (*(char*)( in_RSI + 0xa10 ) != '\0') {
      Vector<int>::push_back(in_RDI, 2);
   }

   for (int i = 0; i < 3; i++) {
      Vector<int>::push_back(in_RDI, ( 4*i ));
   }

   return;
}
/* FlowContainer::get_allowed_size_flags_horizontal() const */void FlowContainer::get_allowed_size_flags_horizontal(void) {
   long in_RSI;
   Vector<int> *in_RDI;
   *(undefined8*)( in_RDI + 8 ) = 0;
   Vector<int>::push_back(in_RDI, 1);
   if (*(char*)( in_RSI + 0xa10 ) == '\0') {
      Vector<int>::push_back(in_RDI, 2);
   }

   for (int i = 0; i < 3; i++) {
      Vector<int>::push_back(in_RDI, ( 4*i ));
   }

   return;
}
/* Vector<_LineData>::push_back(_LineData) [clone .isra.0] */void Vector<_LineData>::push_back(long param_1) {
   undefined8 *puVar1;
   int iVar2;
   long lVar3;
   long lVar4;
   undefined8 in_stack_00000008;
   undefined8 in_stack_00000010;
   undefined5 in_stack_00000018;
   if (*(long*)( param_1 + 8 ) == 0) {
      lVar3 = 1;
   }
 else {
      lVar3 = *(long*)( *(long*)( param_1 + 8 ) + -8 ) + 1;
   }

   iVar2 = CowData<_LineData>::resize<false>((CowData<_LineData>*)( param_1 + 8 ), lVar3);
   if (iVar2 == 0) {
      if (*(long*)( param_1 + 8 ) == 0) {
         lVar4 = -1;
         lVar3 = 0;
      }
 else {
         lVar3 = *(long*)( *(long*)( param_1 + 8 ) + -8 );
         lVar4 = lVar3 + -1;
         if (-1 < lVar4) {
            CowData<_LineData>::_copy_on_write((CowData<_LineData>*)( param_1 + 8 ));
            puVar1 = (undefined8*)( *(long*)( param_1 + 8 ) + lVar4 * 0x18 );
            *puVar1 = in_stack_00000008;
            puVar1[1] = in_stack_00000010;
            *(ulong*)( (long)puVar1 + 0xd ) = CONCAT53(in_stack_00000018, in_stack_00000010._5_3_);
            return;
         }

      }

      _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar4, lVar3, "p_index", "size()", "", false, false);
      return;
   }

   _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* FlowContainer::_resort() [clone .part.0] */void FlowContainer::_resort(FlowContainer *this) {
   long *plVar1;
   int *piVar2;
   code *pcVar3;
   FlowContainer FVar4;
   undefined4 *puVar5;
   undefined8 uVar6;
   FlowContainer FVar7;
   int iVar8;
   int iVar9;
   undefined4 uVar10;
   ulong *puVar11;
   undefined8 uVar12;
   Control *pCVar13;
   ulong uVar14;
   ulong uVar15;
   Rect2 *pRVar16;
   undefined8 *puVar17;
   char cVar18;
   long lVar19;
   long lVar20;
   int *piVar21;
   int iVar22;
   long lVar23;
   int iVar24;
   uint uVar25;
   ulong uVar26;
   int iVar27;
   Control *pCVar28;
   long in_FS_OFFSET;
   float fVar29;
   float fVar30;
   float extraout_XMM0_Db;
   float extraout_XMM0_Db_00;
   double dVar31;
   float extraout_XMM1_Da;
   float extraout_XMM1_Db;
   uint uVar32;
   float local_138;
   float local_134;
   Rect2 *local_110;
   undefined1 local_108[8];
   undefined4 *local_100;
   Control *local_f8;
   undefined5 uStack_f0;
   undefined3 uStack_eb;
   float fStack_e8;
   undefined1 uStack_e4;
   undefined8 local_d8;
   undefined5 uStack_d0;
   undefined3 uStack_cb;
   float fStack_c8;
   undefined1 uStack_c4;
   undefined8 local_b8;
   undefined5 uStack_b0;
   undefined3 uStack_ab;
   float fStack_a8;
   undefined1 uStack_a4;
   HashMap<Control*,Vector2i,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,Vector2i>>> local_98[8];
   undefined1 local_90[16];
   undefined1 local_80[16];
   undefined8 local_70;
   undefined8 local_68;
   undefined8 local_60;
   undefined8 local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   FVar7 = ( FlowContainer )(**(code**)( *(long*)this + 0x340 ))();
   local_70 = 2;
   local_100 = (undefined4*)0x0;
   local_68._0_4_ = 0;
   local_68._4_4_ = 0;
   local_90 = (undefined1[16])0x0;
   local_80 = (undefined1[16])0x0;
   if (this[0xa10] == (FlowContainer)0x0) {
      fVar29 = (float)Control::get_size();
   }
 else {
      Control::get_size();
      fVar29 = extraout_XMM0_Db;
   }

   local_138 = (float)(int)fVar29;
   iVar24 = 0;
   pCVar28 = (Control*)0x0;
   uVar26 = 0;
   local_134 = 0.0;
   iVar9 = 0;
   while (true) {
      uVar25 = (uint)uVar26;
      iVar8 = Node::get_child_count(SUB81(this, 0));
      iVar27 = local_68._4_4_;
      iVar22 = (int)local_68;
      if (iVar8 <= iVar24) break;
      uVar12 = Node::get_child((int)this, SUB41(iVar24, 0));
      pCVar13 = (Control*)Container::as_sortable_control(this, uVar12, 1);
      iVar22 = iVar9;
      local_f8 = pCVar13;
      if (pCVar13 != (Control*)0x0) {
         local_58 = ( **(code**)( *(long*)pCVar13 + 0x300 ) )(pCVar13);
         uVar14 = Vector2::operator_cast_to_Vector2i((Vector2*)&local_58);
         iVar27 = (int)uVar14;
         uVar32 = ( uint )(uVar14 >> 0x20);
         if (this[0xa10] == (FlowContainer)0x0) {
            if (0 < iVar9) {
               local_68._0_4_ = (int)local_68 + *(int*)( this + 0xa1c );
            }

            if ((int)local_138 < iVar27 + (int)local_68) {
               uStack_c4 = 1;
               iVar8 = (int)local_138 - ( (int)local_68 - *(int*)( this + 0xa1c ) );
               local_d8 = CONCAT44(uVar25, iVar9);
               iVar22 = 1;
               fStack_c8 = local_134;
               uStack_d0 = (undefined5)CONCAT44(iVar8, (int)local_68 - *(int*)( this + 0xa1c ));
               uStack_cb = ( undefined3 )((uint)iVar8 >> 8);
               Vector<_LineData>::push_back(local_108);
               local_68._4_4_ = local_68._4_4_ + uVar25 + *(int*)( this + 0xa20 );
               local_68._0_4_ = 0;
               uVar25 = 0;
               local_134 = 0.0;
            }
 else {
               iVar22 = iVar9 + 1;
            }

            if ((int)uVar25 < (int)uVar32) {
               uVar25 = uVar32;
            }

            uVar26 = (ulong)uVar25;
            uVar15 = Control::get_h_size_flags();
            if (( uVar15 & 2 ) != 0) {
               fVar29 = (float)Control::get_stretch_ratio();
               local_134 = fVar29 + local_134;
            }

            local_68._0_4_ = (int)local_68 + iVar27;
         }
 else {
            if (0 < iVar9) {
               local_68._4_4_ = local_68._4_4_ + *(int*)( this + 0xa20 );
            }

            if ((int)local_138 < (int)( uVar32 + local_68._4_4_ )) {
               iVar22 = 1;
               uStack_a4 = 1;
               iVar8 = (int)local_138 - ( local_68._4_4_ - *(int*)( this + 0xa20 ) );
               local_b8 = CONCAT44(uVar25, iVar9);
               uStack_b0 = (undefined5)CONCAT44(iVar8, local_68._4_4_ - *(int*)( this + 0xa20 ));
               uStack_ab = ( undefined3 )((uint)iVar8 >> 8);
               fStack_a8 = local_134;
               Vector<_LineData>::push_back(local_108);
               local_68._0_4_ = (int)local_68 + uVar25 + *(int*)( this + 0xa1c );
               local_68._4_4_ = 0;
               uVar25 = 0;
               local_134 = 0.0;
            }
 else {
               iVar22 = iVar9 + 1;
            }

            uVar26 = (ulong)uVar25;
            if ((int)uVar25 < iVar27) {
               uVar26 = uVar14 & 0xffffffff;
            }

            uVar15 = Control::get_v_size_flags();
            if (( uVar15 & 2 ) != 0) {
               fVar29 = (float)Control::get_stretch_ratio();
               local_134 = fVar29 + local_134;
            }

            local_68._4_4_ = local_68._4_4_ + uVar32;
         }

         puVar11 = (ulong*)HashMap<Control*,Vector2i,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,Vector2i>>>::operator [](local_98, &local_f8);
         *puVar11 = uVar14;
         pCVar28 = pCVar13;
      }

      iVar24 = iVar24 + 1;
      iVar9 = iVar22;
   }
;
   if (this[0xa10] == (FlowContainer)0x0) {
      uStack_e4 = false;
      if (pCVar28 == (Control*)0x0) goto LAB_00102adc;
      fVar29 = (float)( **(code**)( *(long*)pCVar28 + 0x300 ) )(pCVar28);
   }
 else {
      uStack_e4 = false;
      iVar22 = local_68._4_4_;
      if (pCVar28 == (Control*)0x0) goto LAB_00102adc;
      ( **(code**)( *(long*)pCVar28 + 0x300 ) )(pCVar28);
      iVar22 = iVar27;
      fVar29 = extraout_XMM0_Db_00;
   }

   uStack_e4 = (float)(int)local_138 < (float)iVar22 + fVar29;
   LAB_00102adc:iVar27 = 0;
   iVar24 = 0;
   local_f8 = (Control*)CONCAT44(uVar25, iVar9);
   fStack_e8 = local_134;
   uStack_f0 = (undefined5)CONCAT44((int)local_138 - iVar22, iVar22);
   uStack_eb = ( undefined3 )(( uint )((int)local_138 - iVar22) >> 8);
   Vector<_LineData>::push_back(local_108);
   local_68 = 0;
   iVar9 = 0;
   do {
      iVar22 = Node::get_child_count(SUB81(this, 0));
      puVar5 = local_100;
      if (iVar22 <= iVar27) {
         if (this[0xa10] == (FlowContainer)0x0) {
            iVar9 = local_68._4_4_;
         }
 else {
            iVar9 = (int)local_68;
         }

         *(uint*)( this + 0xa00 ) = uVar25 + iVar9;
         if (local_100 == (undefined4*)0x0) {
            *(undefined8*)( this + 0xa04 ) = 0;
         }
 else {
            lVar19 = *(long*)( local_100 + -2 );
            *(int*)( this + 0xa04 ) = (int)lVar19;
            if (lVar19 < 1) {
               uVar10 = 0;
            }
 else {
               uVar10 = *local_100;
            }

            *(undefined4*)( this + 0xa08 ) = uVar10;
            LOCK();
            plVar1 = (long*)( local_100 + -4 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               Memory::free_static(local_100 + -4, false);
            }

         }

         uVar12 = local_90._0_8_;
         if ((undefined8*)local_90._0_8_ != (undefined8*)0x0) {
            uVar6 = local_90._8_8_;
            if (( local_70._4_4_ != 0 ) && ( *(uint*)( hash_table_size_primes + ( local_70 & 0xffffffff ) * 4 ) != 0 )) {
               piVar2 = (int*)( local_90._8_8_ + ( ulong ) * (uint*)( hash_table_size_primes + ( local_70 & 0xffffffff ) * 4 ) * 4 );
               piVar21 = (int*)local_90._8_8_;
               puVar17 = (undefined8*)local_90._0_8_;
               do {
                  if (*piVar21 != 0) {
                     *piVar21 = 0;
                     Memory::free_static((void*)*puVar17, false);
                     *puVar17 = 0;
                  }

                  piVar21 = piVar21 + 1;
                  puVar17 = puVar17 + 1;
               }
 while ( piVar2 != piVar21 );
            }

            Memory::free_static((void*)uVar12, false);
            Memory::free_static((void*)uVar6, false);
         }

         if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Subroutine does not return */
            __stack_chk_fail();
         }

         return;
      }

      uVar12 = Node::get_child((int)this, SUB41(iVar27, 0));
      pRVar16 = (Rect2*)Container::as_sortable_control(this, uVar12, 1);
      local_110 = pRVar16;
      if (pRVar16 != (Rect2*)0x0) {
         puVar17 = (undefined8*)HashMap<Control*,Vector2i,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,Vector2i>>>::operator [](local_98, (Control**)&local_110);
         lVar19 = (long)iVar24;
         local_60 = *puVar17;
         if (puVar5 == (undefined4*)0x0) {
            lVar23 = 0;
         }
 else {
            lVar23 = *(long*)( puVar5 + -2 );
         }

         lVar20 = lVar19;
         if (lVar23 <= lVar19) goto LAB_00102ef8;
         piVar2 = puVar5 + lVar19 * 6;
         local_134 = (float)piVar2[3];
         local_138 = (float)piVar2[4];
         iVar22 = piVar2[1];
         cVar18 = (char)piVar2[5];
         if (iVar9 < *piVar2) {
            if (iVar9 != 0) {
               iVar9 = iVar9 + 1;
               goto LAB_00102cb8;
            }

            if (local_138 != 0.0) goto LAB_00102c82;
            LAB_00102e05:if (iVar24 == 0) {
               LAB_00102e0e:if (*(int*)( this + 0xa14 ) == 1) {
                  LAB_001031a0:dVar31 = (double)(int)local_134 * __LC64;
                  LAB_001031b2:fVar30 = (float)(int)dVar31;
               }
 else {
                  fVar30 = (float)0;
                  if (*(int*)( this + 0xa14 ) == 2) {
                     fVar30 = local_134;
                  }

               }

            }
 else {
               LAB_00102f70:if (cVar18 != '\0') goto LAB_00102e0e;
               lVar20 = (long)( iVar24 + -1 );
               if (lVar23 <= lVar20) {
                  LAB_00102ef8:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar20, lVar23, "p_index", "size()", "", false, true);
                  _err_flush_stdout();
                  /* WARNING: Does not return */
                  pcVar3 = (code*)invalidInstructionException();
                  ( *pcVar3 )();
               }

               iVar9 = puVar5[lVar20 * 6 + 3];
               fVar29 = (float)iVar9;
               iVar8 = *(int*)( this + 0xa14 );
               if (iVar8 != 0) {
                  if (iVar8 != 1) {
                     if (iVar8 != 2) goto LAB_001033f0;
                     iVar8 = *(int*)( this + 0xa18 );
                     fVar30 = local_134;
                     if (( iVar8 != 0 ) && ( iVar8 != 3 )) {
                        if (iVar8 == 1) {
                           fVar30 = (float)(int)fVar29;
                        }
 else {
                           fVar30 = (float)(int)( (double)iVar9 + (double)( (float)(int)local_134 - fVar29 ) * __LC64 );
                        }

                     }

                     goto LAB_00102e2a;
                  }

                  if (( *(uint*)( this + 0xa18 ) & 0xfffffffd ) == 0) goto LAB_001031a0;
                  dVar31 = (double)iVar9 * __LC64;
                  if (*(uint*)( this + 0xa18 ) == 3) {
                     fVar30 = (float)(int)( (double)(int)local_134 - dVar31 );
                     goto LAB_00102e2a;
                  }

                  goto LAB_001031b2;
               }

               iVar9 = *(int*)( this + 0xa18 );
               if (iVar9 == 0) {
                  LAB_001033f0:fVar30 = (float)0;
               }
 else if (iVar9 == 3) {
                  fVar30 = (float)(int)( (float)(int)local_134 - fVar29 );
               }
 else {
                  fVar30 = (float)0;
                  if (iVar9 == 2) {
                     fVar30 = (float)(int)( (double)( (float)(int)local_134 - fVar29 ) * __LC64 );
                  }

               }

            }

            LAB_00102e2a:if (this[0xa10] != (FlowContainer)0x0) {
               local_68 = CONCAT44(local_68._4_4_ + (int)fVar30, (int)local_68);
               if (puVar5 != (undefined4*)0x0) {
                  LAB_00102e43:iVar9 = 1;
                  goto LAB_00102cbd;
               }

               iVar9 = 1;
               goto LAB_00102d05;
            }

            local_68 = CONCAT44(local_68._4_4_, (int)local_68 + (int)fVar30);
            if (puVar5 != (undefined4*)0x0) goto LAB_00102e43;
            iVar9 = 1;
            LAB_00102ec0:uVar26 = Control::get_v_size_flags();
            if (( ( ( uVar26 & 1 ) != 0 ) || ( uVar26 = Control::get_v_size_flags()(uVar26 & 4) != 0 ) ) || ( uVar26 = Control::get_v_size_flags()(uVar26 & 8) != 0 )) {
               local_60 = CONCAT44(iVar22, (int)local_60);
            }

            uVar26 = Control::get_h_size_flags();
            if (( uVar26 & 2 ) != 0) {
               fVar29 = (float)Control::get_stretch_ratio();
               local_60 = CONCAT44(local_60._4_4_, (int)local_60 + (int)( ( fVar29 * (float)(int)local_134 ) / local_138 ));
            }

         }
 else {
            iVar24 = iVar24 + 1;
            if (this[0xa10] == (FlowContainer)0x0) {
               iVar9 = 0;
               iVar8 = iVar22 + *(int*)( this + 0xa20 ) + local_68._4_4_;
            }
 else {
               iVar8 = 0;
               iVar9 = *(int*)( this + 0xa1c ) + iVar22 + (int)local_68;
            }

            lVar20 = (long)iVar24;
            local_68 = CONCAT44(iVar8, iVar9);
            if (lVar23 <= lVar20) goto LAB_00102ef8;
            local_138 = (float)puVar5[lVar19 * 6 + 10];
            local_134 = (float)puVar5[lVar19 * 6 + 9];
            iVar22 = puVar5[lVar19 * 6 + 7];
            cVar18 = *(char*)( puVar5 + lVar19 * 6 + 0xb );
            if (local_138 == 0.0) goto LAB_00102f70;
            LAB_00102c82:fVar30 = _LC62 * ABS(local_138);
            fVar29 = _LC62;
            if (_LC62 <= fVar30) {
               fVar29 = fVar30;
            }

            if (ABS(local_138) < fVar29) goto LAB_00102e05;
            iVar9 = 1;
            LAB_00102cb8:if (puVar5 == (undefined4*)0x0) {
               LAB_00102cf8:if (this[0xa10] == (FlowContainer)0x0) goto LAB_00102ec0;
               LAB_00102d05:uVar26 = Control::get_h_size_flags();
               if (( ( ( uVar26 & 1 ) != 0 ) || ( uVar26 = Control::get_h_size_flags()(uVar26 & 4) != 0 ) ) || ( uVar26 = Control::get_h_size_flags()(uVar26 & 8) != 0 )) {
                  local_60 = CONCAT44(local_60._4_4_, iVar22);
               }

               uVar26 = Control::get_v_size_flags();
               if (( uVar26 & 2 ) != 0) {
                  fVar29 = (float)Control::get_stretch_ratio();
                  local_60 = CONCAT44(local_60._4_4_ + (int)( ( fVar29 * (float)(int)local_134 ) / local_138 ), (int)local_60);
               }

            }
 else {
               LAB_00102cbd:if (( ( *(long*)( puVar5 + -2 ) < 2 ) || ( lVar19 = __dynamic_cast(pRVar16, &Object::typeinfo, &TextureRect::typeinfo, 0) ),lVar19 == 0 )) goto LAB_00102cf8;
               if (_resort()::first_print != '\0') {
                  _err_print_error("_resort", "scene/gui/flow_container.cpp", 0xdd, "TextureRects with Fit Expand Modes are currently not supported inside FlowContainers with multiple lines", 0, 1);
                  _resort()::first_print =
                  '\0';
               }

               local_58 = Control::get_size();
               local_60 = Vector2::operator_cast_to_Vector2i((Vector2*)&local_58);
            }

         }

         uVar12 = Vector2i::operator_cast_to_Vector2((Vector2i*)&local_60);
         local_58 = Vector2i::operator_cast_to_Vector2((Vector2i*)&local_68);
         local_50 = uVar12;
         FVar4 = FVar7;
         if (this[0xa11] == (FlowContainer)0x0) {
            joined_r0x00102e55:if (FVar4 != (FlowContainer)0x0) {
               LAB_00102e5b:Control::get_rect();
               local_58 = CONCAT44(local_58._4_4_, ( extraout_XMM1_Da - (float)local_58 ) - (float)local_50);
            }

         }
 else {
            if (this[0xa10] == (FlowContainer)0x0) {
               Control::get_rect();
               local_58 = CONCAT44(( extraout_XMM1_Db - local_58._4_4_ ) - local_50._4_4_, (float)local_58);
               if (FVar7 == (FlowContainer)0x0) goto LAB_00102d8a;
               if (this[0xa10] != (FlowContainer)0x0) goto LAB_001030c0;
               goto LAB_00102e5b;
            }

            if (FVar7 == (FlowContainer)0x0) {
               LAB_00102d8a:if (this[0xa11] != (FlowContainer)0x0) {
                  FVar4 = this[0xa10];
                  goto joined_r0x00102e55;
               }

            }
 else {
               LAB_001030c0:if (this[0xa11] == (FlowContainer)0x0) goto LAB_00102e5b;
            }

         }

         Container::fit_child_in_rect((Control*)this, pRVar16);
         if (this[0xa10] == (FlowContainer)0x0) {
            local_68 = CONCAT44(local_68._4_4_, (int)local_68 + *(int*)( this + 0xa1c ) + (int)local_60);
         }
 else {
            local_68 = CONCAT44(local_68._4_4_ + *(int*)( this + 0xa20 ) + local_60._4_4_, (int)local_68);
         }

      }

      iVar27 = iVar27 + 1;
   }
 while ( true );
}
/* FlowContainer::_resort() */void FlowContainer::_resort(FlowContainer *this) {
   char cVar1;
   cVar1 = CanvasItem::is_visible_in_tree();
   if (cVar1 != '\0') {
      _resort(this);
      return;
   }

   return;
}
/* FlowContainer::set_reverse_fill(bool) */void FlowContainer::set_reverse_fill(FlowContainer *this, bool param_1) {
   char cVar1;
   if (this[0xa11] == (FlowContainer)param_1) {
      return;
   }

   this[0xa11] = (FlowContainer)param_1;
   cVar1 = CanvasItem::is_visible_in_tree();
   if (cVar1 != '\0') {
      _resort(this);
      return;
   }

   return;
}
/* FlowContainer::set_alignment(FlowContainer::AlignmentMode) */void FlowContainer::set_alignment(FlowContainer *this, int param_2) {
   char cVar1;
   if (*(int*)( this + 0xa14 ) == param_2) {
      return;
   }

   *(int*)( this + 0xa14 ) = param_2;
   cVar1 = CanvasItem::is_visible_in_tree();
   if (cVar1 != '\0') {
      _resort(this);
      return;
   }

   return;
}
/* FlowContainer::set_last_wrap_alignment(FlowContainer::LastWrapAlignmentMode) */void FlowContainer::set_last_wrap_alignment(FlowContainer *this, int param_2) {
   char cVar1;
   if (*(int*)( this + 0xa18 ) == param_2) {
      return;
   }

   *(int*)( this + 0xa18 ) = param_2;
   cVar1 = CanvasItem::is_visible_in_tree();
   if (cVar1 != '\0') {
      _resort(this);
      return;
   }

   return;
}
/* FlowContainer::set_vertical(bool) */void FlowContainer::set_vertical(FlowContainer *this, bool param_1) {
   char cVar1;
   long in_FS_OFFSET;
   String local_60[8];
   undefined8 local_58;
   CowData<char32_t> local_50[8];
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (this[0xa24] == (FlowContainer)0x0) {
      this[0xa10] = (FlowContainer)param_1;
      Control::update_minimum_size();
      cVar1 = CanvasItem::is_visible_in_tree();
      if (cVar1 != '\0') {
         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            _resort(this);
            return;
         }

         goto LAB_00103631;
      }

   }
 else {
      local_58 = 0;
      local_40 = 1;
      local_48 = &_LC17;
      String::parse_latin1((StrRange*)&local_58);
      ( **(code**)( *(long*)this + 0x48 ) )((CowData<char32_t>*)&local_48, this);
      operator+((char *)
      local_50,(String*)"Can\'t change orientation of ";
      String::operator +(local_60, (String*)local_50);
      _err_print_error("set_vertical", "scene/gui/flow_container.cpp", 0x174, "Condition \"is_fixed\" is true.", local_60, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_60);
      CowData<char32_t>::_unref(local_50);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_00103631:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* FlowContainer::_notification(int) */void FlowContainer::_notification(FlowContainer *this, int param_1) {
   char cVar1;
   if (param_1 != 0x33) {
      if (param_1 < 0x34) {
         if (param_1 == 0x2d) goto LAB_00103689;
         if (param_1 == 0x31) goto LAB_00103668;
      }
 else if (param_1 == 0x7da) {
         LAB_00103668:Container::queue_sort();
         return;
      }

      return;
   }

   cVar1 = CanvasItem::is_visible_in_tree();
   if (cVar1 != '\0') {
      _resort(this);
   }

   LAB_00103689:Control::update_minimum_size();
   return;
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
/* FlowContainer::is_class_ptr(void*) const */uint FlowContainer::is_class_ptr(void *param_1) {
   undefined4 in_EDX;
   undefined4 *in_RSI;
   return (uint)CONCAT71(0x10c7, in_RSI == &Container::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10c7, in_RSI == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10c7, in_RSI == &Control::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10c7, in_RSI == &CanvasItem::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10c7, in_RSI == &Node::get_class_ptr_static(), ::ptr) | CONCAT31(( int3 )((uint)in_EDX >> 8), in_RSI == &Object::get_class_ptr_static(), ::ptr);
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
/* MethodBindTRC<FlowContainer::LastWrapAlignmentMode>::_gen_argument_type(int) const */undefined8 MethodBindTRC<FlowContainer::LastWrapAlignmentMode>::_gen_argument_type(int param_1) {
   return 2;
}
/* MethodBindTRC<FlowContainer::LastWrapAlignmentMode>::get_argument_meta(int) const */undefined8 MethodBindTRC<FlowContainer::LastWrapAlignmentMode>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindT<FlowContainer::LastWrapAlignmentMode>::_gen_argument_type(int) const */char MethodBindT<FlowContainer::LastWrapAlignmentMode>::_gen_argument_type(MethodBindT<FlowContainer::LastWrapAlignmentMode> *this, int param_1) {
   return ( param_1 == 0 ) * '\x02';
}
/* MethodBindT<FlowContainer::LastWrapAlignmentMode>::get_argument_meta(int) const */undefined8 MethodBindT<FlowContainer::LastWrapAlignmentMode>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTRC<FlowContainer::AlignmentMode>::_gen_argument_type(int) const */undefined8 MethodBindTRC<FlowContainer::AlignmentMode>::_gen_argument_type(int param_1) {
   return 2;
}
/* MethodBindTRC<FlowContainer::AlignmentMode>::get_argument_meta(int) const */undefined8 MethodBindTRC<FlowContainer::AlignmentMode>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindT<FlowContainer::AlignmentMode>::_gen_argument_type(int) const */char MethodBindT<FlowContainer::AlignmentMode>::_gen_argument_type(MethodBindT<FlowContainer::AlignmentMode> *this, int param_1) {
   return ( param_1 == 0 ) * '\x02';
}
/* MethodBindT<FlowContainer::AlignmentMode>::get_argument_meta(int) const */undefined8 MethodBindT<FlowContainer::AlignmentMode>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTRC<int>::_gen_argument_type(int) const */undefined8 MethodBindTRC<int>::_gen_argument_type(int param_1) {
   return 2;
}
/* MethodBindTRC<int>::get_argument_meta(int) const */uint MethodBindTRC<int>::get_argument_meta(MethodBindTRC<int> *this, int param_1) {
   return param_1 >> 0x1f & 3;
}
/* MethodBindTRC<int>::~MethodBindTRC() */void MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010c510;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<int>::~MethodBindTRC() */void MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010c510;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<FlowContainer::AlignmentMode>::~MethodBindT() */void MethodBindT<FlowContainer::AlignmentMode>::~MethodBindT(MethodBindT<FlowContainer::AlignmentMode> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010c570;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<FlowContainer::AlignmentMode>::~MethodBindT() */void MethodBindT<FlowContainer::AlignmentMode>::~MethodBindT(MethodBindT<FlowContainer::AlignmentMode> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010c570;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<FlowContainer::AlignmentMode>::~MethodBindTRC() */void MethodBindTRC<FlowContainer::AlignmentMode>::~MethodBindTRC(MethodBindTRC<FlowContainer::AlignmentMode> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010c5d0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<FlowContainer::AlignmentMode>::~MethodBindTRC() */void MethodBindTRC<FlowContainer::AlignmentMode>::~MethodBindTRC(MethodBindTRC<FlowContainer::AlignmentMode> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010c5d0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<FlowContainer::LastWrapAlignmentMode>::~MethodBindT() */void MethodBindT<FlowContainer::LastWrapAlignmentMode>::~MethodBindT(MethodBindT<FlowContainer::LastWrapAlignmentMode> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010c630;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<FlowContainer::LastWrapAlignmentMode>::~MethodBindT() */void MethodBindT<FlowContainer::LastWrapAlignmentMode>::~MethodBindT(MethodBindT<FlowContainer::LastWrapAlignmentMode> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010c630;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<FlowContainer::LastWrapAlignmentMode>::~MethodBindTRC() */void MethodBindTRC<FlowContainer::LastWrapAlignmentMode>::~MethodBindTRC(MethodBindTRC<FlowContainer::LastWrapAlignmentMode> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010c690;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<FlowContainer::LastWrapAlignmentMode>::~MethodBindTRC() */void MethodBindTRC<FlowContainer::LastWrapAlignmentMode>::~MethodBindTRC(MethodBindTRC<FlowContainer::LastWrapAlignmentMode> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010c690;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<bool>::~MethodBindT() */void MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010c6f0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<bool>::~MethodBindT() */void MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010c6f0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<bool>::~MethodBindTRC() */void MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010c750;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<bool>::~MethodBindTRC() */void MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010c750;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* FlowContainer::_property_get_revertv(StringName const&, Variant&) const */undefined8 FlowContainer::_property_get_revertv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if ((code*)_GLOBAL_OFFSET_TABLE_ != Object::_property_get_revert) {
      uVar1 = Control::_property_get_revert(param_1, param_2);
      return uVar1;
   }

   return 0;
}
/* FlowContainer::_property_can_revertv(StringName const&) const */undefined8 FlowContainer::_property_can_revertv(StringName *param_1) {
   undefined8 uVar1;
   if ((code*)PTR__property_can_revert_00110008 != Object::_property_can_revert) {
      uVar1 = Control::_property_can_revert(param_1);
      return uVar1;
   }

   return 0;
}
/* CowData<int>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<int>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   FlowContainer::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#1}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),FlowContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#1}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
   code *pcVar1;
   Control::get_theme_item();
   Variant::operator_cast_to_int((Variant*)&stack0x00000000);
   _DAT_00000a1c = 0;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   FlowContainer::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#2}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),FlowContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#2}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
   code *pcVar1;
   Control::get_theme_item();
   Variant::operator_cast_to_int((Variant*)&stack0x00000000);
   _DAT_00000a20 = 0;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<_LineData>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<_LineData>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* FlowContainer::_bind_methods() [clone .cold] */void FlowContainer::_bind_methods(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* FlowContainer::_setv(StringName const&, Variant const&) */undefined8 FlowContainer::_setv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   uVar1 = CanvasItem::_set(param_1, param_2);
   if ((char)uVar1 == '\0') {
      if ((code*)PTR__set_00110010 != CanvasItem::_set) {
         uVar1 = Control::_set(param_1, param_2);
         return uVar1;
      }

      uVar1 = 0;
   }

   return uVar1;
}
/* FlowContainer::_validate_propertyv(PropertyInfo&) const */void FlowContainer::_validate_propertyv(FlowContainer *this, PropertyInfo *param_1) {
   char cVar1;
   Node::_validate_property((PropertyInfo*)this);
   CanvasItem::_validate_property((PropertyInfo*)this);
   if ((code*)PTR__validate_property_00110018 != CanvasItem::_validate_property) {
      Control::_validate_property((PropertyInfo*)this);
   }

   if (( this[0xa24] != (FlowContainer)0x0 ) && ( cVar1 = String::operator ==((String*)( param_1 + 8 ), "vertical") ),cVar1 != '\0') {
      *(undefined4*)( param_1 + 0x28 ) = 0;
      return;
   }

   return;
}
/* WARNING: Removing unreachable block (ram,0x00104038) *//* FlowContainer::_getv(StringName const&, Variant&) const */undefined8 FlowContainer::_getv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if (( (code*)PTR__get_00110020 != CanvasItem::_get ) && ( uVar1 = Control::_get(param_1, param_2) ),(char)uVar1 != '\0') {
      return uVar1;
   }

   uVar1 = CanvasItem::_get(param_1, param_2);
   return uVar1;
}
/* FlowContainer::~FlowContainer() */void FlowContainer::~FlowContainer(FlowContainer *this) {
   bool bVar1;
   bVar1 = StringName::configured != '\0';
   *(code**)this = __cxa_guard_acquire;
   if (bVar1) {
      if (*(long*)( this + 0x9e8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_001040a0;
      }

      if (*(long*)( this + 0x9d0 ) != 0) {
         StringName::unref();
      }

   }

   LAB_001040a0:Control::~Control((Control*)this);
   return;
}
/* FlowContainer::~FlowContainer() */void FlowContainer::~FlowContainer(FlowContainer *this) {
   bool bVar1;
   bVar1 = StringName::configured != '\0';
   *(code**)this = __cxa_guard_acquire;
   if (bVar1) {
      if (*(long*)( this + 0x9e8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00104100;
      }

      if (*(long*)( this + 0x9d0 ) != 0) {
         StringName::unref();
      }

   }

   LAB_00104100:Control::~Control((Control*)this);
   operator_delete(this, 0xa28);
   return;
}
/* FlowContainer::_get_class_namev() const */undefined8 *FlowContainer::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00104163:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00104163;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "FlowContainer");
         goto LAB_001041ce;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "FlowContainer");
   LAB_001041ce:return &_get_class_namev();
}
/* FlowContainer::get_class() const */void FlowContainer::get_class(void) {
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
/* MethodBindTRC<int>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<int>::_gen_argument_type_info(int param_1) {
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
   local_48 = &_LC9;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   *puVar3 = 2;
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

         goto joined_r0x0010441c;
      }

   }

   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x0010441c:local_58 = lVar2;
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
/* MethodBindTRC<bool>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<bool>::_gen_argument_type_info(int param_1) {
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
   local_48 = &_LC9;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
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

         goto joined_r0x0010459c;
      }

   }

   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x0010459c:local_58 = lVar2;
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
/* CowData<char32_t>::_ref(CowData<char32_t> const&) */void CowData<char32_t>::_ref(CowData<char32_t> *this, CowData *param_1) {
   if (*(long*)this != *(long*)param_1) {
      _ref(this, param_1);
      return;
   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<Control*, Vector2i, HashMapHasherDefault, HashMapComparatorDefault<Control*>,
   DefaultTypedAllocator<HashMapElement<Control*, Vector2i> > >::operator[](Control* const&) */undefined1 * __thiscallHashMap<Control*,Vector2i,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,Vector2i>>>::operator [](HashMap<Control*,Vector2i,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,Vector2i>>> * this, Control * *param_1) * puVar1 ;undefined8 *puVar2long lVar3long lVar4void *pvVar5void *__sundefined1 auVar6[16]undefined1 auVar7[16]undefined1 auVar8[16]undefined1 auVar9[16]undefined1 auVar10[16]undefined1 auVar11[16]undefined1 auVar12[16]undefined1 auVar13[16]undefined1 auVar14[16]undefined1 auVar15[16]undefined1 auVar16[16]undefined1 auVar17[16]undefined1 auVar18[16]undefined1 auVar19[16]undefined1 auVar20[16]undefined1 auVar21[16]undefined1 auVar22[16]undefined1 auVar23[16]undefined1 auVar24[16]undefined1 auVar25[16]undefined1 auVar26[16]undefined1 auVar27[16]undefined1 auVar28[16]undefined1 auVar29[16]undefined1 auVar30[16]undefined1 auVar31[16]undefined1 auVar32[16]undefined1 auVar33[16]undefined1 auVar34[16]undefined1 auVar35[16]undefined1 auVar36[16]undefined1 auVar37[16]undefined1(*pauVar38)[16];uint uVar39ulong uVar40ulong uVar41undefined8 uVar42void *__s_00undefined1(*pauVar43)[16];uint uVar44int iVar45long lVar46long lVar47undefined8 uVar48Control *pCVar49uint uVar50uint uVar51uint uVar52uint uVar53ulong uVar54long lVar55ulong uVar56ulong uVar57undefined1(*pauVar58)[16];long in_FS_OFFSETvoid *local_a8local_a8 = *(void**)( this + 8 );pCVar49 = *param_1;lVar3 = *(long*)( in_FS_OFFSET + 0x28 );uVar41 = ( ulong ) * (uint*)( this + 0x28 );uVar50 = *(uint*)( hash_table_size_primes + uVar41 * 4 );uVar57 = CONCAT44(0, uVar50);if (local_a8 == (void*)0x0) {
   uVar41 = uVar57 * 4;
   uVar40 = uVar57 * 8;
   uVar42 = Memory::alloc_static(uVar41, false);
   *(undefined8*)( this + 0x10 ) = uVar42;
   local_a8 = (void*)Memory::alloc_static(uVar40, false);
   *(void**)( this + 8 ) = local_a8;
   if (uVar50 == 0) {
      iVar45 = *(int*)( this + 0x2c );
      pCVar49 = *param_1;
      if (local_a8 == (void*)0x0) goto LAB_00104a33;
   }
 else {
      pvVar5 = *(void**)( this + 0x10 );
      if (( pvVar5 < (void*)( (long)local_a8 + uVar40 ) ) && ( local_a8 < (void*)( (long)pvVar5 + uVar41 ) )) {
         uVar41 = 0;
         do {
            *(undefined4*)( (long)pvVar5 + uVar41 * 4 ) = 0;
            *(undefined8*)( (long)local_a8 + uVar41 * 8 ) = 0;
            uVar41 = uVar41 + 1;
         }
 while ( uVar57 != uVar41 );
         iVar45 = *(int*)( this + 0x2c );
         pCVar49 = *param_1;
      }
 else {
         memset(pvVar5, 0, uVar41);
         memset(local_a8, 0, uVar40);
         iVar45 = *(int*)( this + 0x2c );
         pCVar49 = *param_1;
      }

   }

   if (iVar45 != 0) {
      uVar41 = ( ulong ) * (uint*)( this + 0x28 );
      lVar55 = *(long*)( this + 0x10 );
      goto LAB_0010492c;
   }

}
 else {
   iVar45 = *(int*)( this + 0x2c );
   if (iVar45 != 0) {
      lVar55 = *(long*)( this + 0x10 );
      lVar4 = *(long*)( hash_table_size_primes_inv + uVar41 * 8 );
      uVar40 = (long)pCVar49 * 0x3ffff - 1;
      uVar40 = ( uVar40 ^ uVar40 >> 0x1f ) * 0x15;
      uVar40 = ( uVar40 ^ uVar40 >> 0xb ) * 0x41;
      uVar40 = uVar40 >> 0x16 ^ uVar40;
      uVar54 = uVar40 & 0xffffffff;
      if ((int)uVar40 == 0) {
         uVar54 = 1;
      }

      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar54 * lVar4;
      auVar22._8_8_ = 0;
      auVar22._0_8_ = uVar57;
      lVar46 = SUB168(auVar6 * auVar22, 8);
      uVar44 = *(uint*)( lVar55 + lVar46 * 4 );
      uVar53 = SUB164(auVar6 * auVar22, 8);
      if (uVar44 != 0) {
         uVar52 = 0;
         do {
            if (( (uint)uVar54 == uVar44 ) && ( pCVar49 == *(Control**)( *(long*)( (long)local_a8 + lVar46 * 8 ) + 0x10 ) )) {
               pauVar43 = *(undefined1(**) [16])( (long)local_a8 + (ulong)uVar53 * 8 );
               goto LAB_001048f3;
            }

            uVar52 = uVar52 + 1;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = ( ulong )(uVar53 + 1) * lVar4;
            auVar23._8_8_ = 0;
            auVar23._0_8_ = uVar57;
            lVar46 = SUB168(auVar7 * auVar23, 8);
            uVar44 = *(uint*)( lVar55 + lVar46 * 4 );
            uVar53 = SUB164(auVar7 * auVar23, 8);
         }
 while ( ( uVar44 != 0 ) && ( auVar8._8_8_ = 0 ),auVar8._0_8_ = (ulong)uVar44 * lVar4,auVar24._8_8_ = 0,auVar24._0_8_ = uVar57,auVar9._8_8_ = 0,auVar9._0_8_ = ( ulong )(( uVar53 + uVar50 ) - SUB164(auVar8 * auVar24, 8)) * lVar4,auVar25._8_8_ = 0,auVar25._0_8_ = uVar57,uVar52 <= SUB164(auVar9 * auVar25, 8) );
      }

      LAB_0010492c:uVar54 = CONCAT44(0, *(uint*)( hash_table_size_primes + uVar41 * 4 ));
      lVar4 = *(long*)( hash_table_size_primes_inv + uVar41 * 8 );
      uVar40 = (long)pCVar49 * 0x3ffff - 1;
      uVar40 = ( uVar40 ^ uVar40 >> 0x1f ) * 0x15;
      uVar40 = ( uVar40 ^ uVar40 >> 0xb ) * 0x41;
      uVar40 = uVar40 >> 0x16 ^ uVar40;
      uVar56 = uVar40 & 0xffffffff;
      if ((int)uVar40 == 0) {
         uVar56 = 1;
      }

      auVar10._8_8_ = 0;
      auVar10._0_8_ = uVar56 * lVar4;
      auVar26._8_8_ = 0;
      auVar26._0_8_ = uVar54;
      lVar46 = SUB168(auVar10 * auVar26, 8);
      uVar50 = *(uint*)( lVar55 + lVar46 * 4 );
      uVar44 = SUB164(auVar10 * auVar26, 8);
      if (uVar50 != 0) {
         uVar53 = 0;
         do {
            if (( (uint)uVar56 == uVar50 ) && ( *(Control**)( *(long*)( (long)local_a8 + lVar46 * 8 ) + 0x10 ) == pCVar49 )) {
               pauVar43 = *(undefined1(**) [16])( (long)local_a8 + (ulong)uVar44 * 8 );
               *(undefined8*)( pauVar43[1] + 8 ) = 0;
               goto LAB_001048f3;
            }

            uVar53 = uVar53 + 1;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = ( ulong )(uVar44 + 1) * lVar4;
            auVar27._8_8_ = 0;
            auVar27._0_8_ = uVar54;
            lVar46 = SUB168(auVar11 * auVar27, 8);
            uVar50 = *(uint*)( lVar55 + lVar46 * 4 );
            uVar44 = SUB164(auVar11 * auVar27, 8);
         }
 while ( ( uVar50 != 0 ) && ( auVar12._8_8_ = 0 ),auVar12._0_8_ = (ulong)uVar50 * lVar4,auVar28._8_8_ = 0,auVar28._0_8_ = uVar54,auVar13._8_8_ = 0,auVar13._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + uVar41 * 4 ) + uVar44 ) - SUB164(auVar12 * auVar28, 8)) * lVar4,auVar29._8_8_ = 0,auVar29._0_8_ = uVar54,uVar53 <= SUB164(auVar13 * auVar29, 8) );
      }

   }

}
LAB_00104a33:if ((float)uVar57 * __LC10 < (float)( iVar45 + 1 )) {
   uVar50 = *(uint*)( this + 0x28 );
   if (uVar50 == 0x1c) {
      pauVar43 = (undefined1(*) [16])0x0;
      _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
      goto LAB_001048f3;
   }

   uVar41 = ( ulong )(uVar50 + 1);
   *(undefined4*)( this + 0x2c ) = 0;
   uVar44 = *(uint*)( hash_table_size_primes + (ulong)uVar50 * 4 );
   if (uVar50 + 1 < 2) {
      uVar41 = 2;
   }

   uVar50 = *(uint*)( hash_table_size_primes + uVar41 * 4 );
   uVar40 = (ulong)uVar50;
   *(int*)( this + 0x28 ) = (int)uVar41;
   pvVar5 = *(void**)( this + 0x10 );
   uVar41 = uVar40 * 4;
   uVar57 = uVar40 * 8;
   uVar42 = Memory::alloc_static(uVar41, false);
   *(undefined8*)( this + 0x10 ) = uVar42;
   __s_00 = (void*)Memory::alloc_static(uVar57, false);
   *(void**)( this + 8 ) = __s_00;
   if (uVar50 != 0) {
      __s = *(void**)( this + 0x10 );
      if (( __s < (void*)( (long)__s_00 + uVar57 ) ) && ( __s_00 < (void*)( (long)__s + uVar41 ) )) {
         uVar41 = 0;
         do {
            *(undefined4*)( (long)__s + uVar41 * 4 ) = 0;
            *(undefined8*)( (long)__s_00 + uVar41 * 8 ) = 0;
            uVar41 = uVar41 + 1;
         }
 while ( uVar40 != uVar41 );
      }
 else {
         memset(__s, 0, uVar41);
         memset(__s_00, 0, uVar57);
      }

   }

   if (uVar44 != 0) {
      uVar41 = 0;
      do {
         uVar50 = *(uint*)( (long)pvVar5 + uVar41 * 4 );
         if (uVar50 != 0) {
            lVar55 = *(long*)( this + 0x10 );
            uVar51 = 0;
            uVar53 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
            uVar57 = CONCAT44(0, uVar53);
            lVar4 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
            auVar14._8_8_ = 0;
            auVar14._0_8_ = (ulong)uVar50 * lVar4;
            auVar30._8_8_ = 0;
            auVar30._0_8_ = uVar57;
            lVar46 = SUB168(auVar14 * auVar30, 8);
            puVar1 = (uint*)( lVar55 + lVar46 * 4 );
            iVar45 = SUB164(auVar14 * auVar30, 8);
            uVar52 = *puVar1;
            uVar42 = *(undefined8*)( (long)local_a8 + uVar41 * 8 );
            while (uVar52 != 0) {
               auVar15._8_8_ = 0;
               auVar15._0_8_ = (ulong)uVar52 * lVar4;
               auVar31._8_8_ = 0;
               auVar31._0_8_ = uVar57;
               auVar16._8_8_ = 0;
               auVar16._0_8_ = ( ulong )(( uVar53 + iVar45 ) - SUB164(auVar15 * auVar31, 8)) * lVar4;
               auVar32._8_8_ = 0;
               auVar32._0_8_ = uVar57;
               uVar39 = SUB164(auVar16 * auVar32, 8);
               uVar48 = uVar42;
               if (uVar39 < uVar51) {
                  *puVar1 = uVar50;
                  puVar2 = (undefined8*)( (long)__s_00 + lVar46 * 8 );
                  uVar48 = *puVar2;
                  *puVar2 = uVar42;
                  uVar50 = uVar52;
                  uVar51 = uVar39;
               }

               uVar51 = uVar51 + 1;
               auVar17._8_8_ = 0;
               auVar17._0_8_ = ( ulong )(iVar45 + 1) * lVar4;
               auVar33._8_8_ = 0;
               auVar33._0_8_ = uVar57;
               lVar46 = SUB168(auVar17 * auVar33, 8);
               puVar1 = (uint*)( lVar55 + lVar46 * 4 );
               iVar45 = SUB164(auVar17 * auVar33, 8);
               uVar42 = uVar48;
               uVar52 = *puVar1;
            }
;
            *(undefined8*)( (long)__s_00 + lVar46 * 8 ) = uVar42;
            *puVar1 = uVar50;
            *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
         }

         uVar41 = uVar41 + 1;
      }
 while ( uVar41 != uVar44 );
      Memory::free_static(local_a8, false);
      Memory::free_static(pvVar5, false);
   }

}
pCVar49 = *param_1;pauVar43 = (undefined1(*) [16])operator_new(0x20, "");*pauVar43 = (undefined1[16])0x0;*(Control**)pauVar43[1] = pCVar49;*(undefined8*)( pauVar43[1] + 8 ) = 0;puVar2 = *(undefined8**)( this + 0x20 );if (puVar2 == (undefined8*)0x0) {
   *(undefined1(**) [16])( this + 0x18 ) = pauVar43;
}
 else {
   *puVar2 = pauVar43;
   *(undefined8**)( *pauVar43 + 8 ) = puVar2;
}
lVar55 = *(long*)( this + 0x10 );*(undefined1(**) [16])( this + 0x20 ) = pauVar43;uVar41 = (long)*param_1 * 0x3ffff - 1;uVar41 = ( uVar41 ^ uVar41 >> 0x1f ) * 0x15;uVar41 = ( uVar41 ^ uVar41 >> 0xb ) * 0x41;uVar41 = uVar41 >> 0x16 ^ uVar41;uVar57 = uVar41 & 0xffffffff;if ((int)uVar41 == 0) {
   uVar57 = 1;
}
uVar52 = 0;lVar4 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );uVar53 = (uint)uVar57;uVar50 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );uVar41 = CONCAT44(0, uVar50);auVar18._8_8_ = 0;auVar18._0_8_ = uVar57 * lVar4;auVar34._8_8_ = 0;auVar34._0_8_ = uVar41;lVar47 = SUB168(auVar18 * auVar34, 8);lVar46 = *(long*)( this + 8 );puVar1 = (uint*)( lVar55 + lVar47 * 4 );iVar45 = SUB164(auVar18 * auVar34, 8);uVar44 = *puVar1;pauVar38 = pauVar43;while (uVar44 != 0) {
   auVar19._8_8_ = 0;
   auVar19._0_8_ = (ulong)uVar44 * lVar4;
   auVar35._8_8_ = 0;
   auVar35._0_8_ = uVar41;
   auVar20._8_8_ = 0;
   auVar20._0_8_ = ( ulong )(( uVar50 + iVar45 ) - SUB164(auVar19 * auVar35, 8)) * lVar4;
   auVar36._8_8_ = 0;
   auVar36._0_8_ = uVar41;
   uVar53 = SUB164(auVar20 * auVar36, 8);
   pauVar58 = pauVar38;
   if (uVar53 < uVar52) {
      *puVar1 = (uint)uVar57;
      uVar57 = (ulong)uVar44;
      puVar2 = (undefined8*)( lVar46 + lVar47 * 8 );
      pauVar58 = (undefined1(*) [16])*puVar2;
      *puVar2 = pauVar38;
      uVar52 = uVar53;
   }

   uVar53 = (uint)uVar57;
   uVar52 = uVar52 + 1;
   auVar21._8_8_ = 0;
   auVar21._0_8_ = ( ulong )(iVar45 + 1) * lVar4;
   auVar37._8_8_ = 0;
   auVar37._0_8_ = uVar41;
   lVar47 = SUB168(auVar21 * auVar37, 8);
   puVar1 = (uint*)( lVar55 + lVar47 * 4 );
   iVar45 = SUB164(auVar21 * auVar37, 8);
   pauVar38 = pauVar58;
   uVar44 = *puVar1;
}
;*(undefined1(**) [16])( lVar46 + lVar47 * 8 ) = pauVar38;*puVar1 = uVar53;*(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;LAB_001048f3:if (lVar3 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return pauVar43[1] + 8;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* CowData<char32_t>::_unref() */void CowData<char32_t>::_unref(CowData<char32_t> *this) {
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
   String::split(local_58, SUB81(param_1, 0), 0x104fad);
   if (( local_50 != (long*)0x0 ) && ( 2 < local_50[-1] )) {
      local_60 = 0;
      local_48 = &_LC17;
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
            goto LAB_0010506a;
         }

      }

      _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar6, lVar7, "p_index", "size()", "", false, true);
      _err_flush_stdout();
      /* WARNING: Does not return */
      pcVar3 = (code*)invalidInstructionException();
      ( *pcVar3 )();
   }

   local_60 = 0;
   local_48 = &_LC17;
   local_40 = 1;
   String::parse_latin1((StrRange*)&local_60);
   String::join((Vector*)this);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   LAB_0010506a:plVar4 = local_50;
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
/* GetTypeInfo<FlowContainer::AlignmentMode, void>::get_class_info() */GetTypeInfo<FlowContainer::AlignmentMode,void> * __thiscall
GetTypeInfo<FlowContainer::AlignmentMode,void>::get_class_info
          (GetTypeInfo<FlowContainer::AlignmentMode,void> *this){
   long *plVar1;
   long lVar2;
   long in_FS_OFFSET;
   undefined8 local_60;
   long local_58;
   details local_50[8];
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_58 = 0;
   local_48 = "FlowContainer::AlignmentMode";
   local_40 = 0x1c;
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
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GetTypeInfo<FlowContainer::LastWrapAlignmentMode, void>::get_class_info() */GetTypeInfo<FlowContainer::LastWrapAlignmentMode,void> * __thiscall
GetTypeInfo<FlowContainer::LastWrapAlignmentMode,void>::get_class_info
          (GetTypeInfo<FlowContainer::LastWrapAlignmentMode,void> *this){
   long in_FS_OFFSET;
   undefined8 local_60;
   undefined8 local_58;
   details local_50[8];
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_58 = 0;
   local_48 = "FlowContainer::LastWrapAlignmentMode";
   local_40 = 0x24;
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
/* Control::is_class(String const&) const */undefined8 Control::is_class(Control *this, String *param_1) {
   long *plVar1;
   long lVar2;
   long lVar3;
   long lVar4;
   char *pcVar5;
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
      lVar4 = *(long*)( lVar2 + 0x20 );
      if (lVar4 == 0) {
         local_60 = 0;
      }
 else {
         pcVar5 = *(char**)( lVar4 + 8 );
         local_60 = 0;
         if (pcVar5 == (char*)0x0) {
            plVar1 = (long*)( *(long*)( lVar4 + 0x10 ) + -0x10 );
            if (*(long*)( lVar4 + 0x10 ) != 0) {
               do {
                  lVar3 = *plVar1;
                  if (lVar3 == 0) goto LAB_001054ef;
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
                  local_60 = *(long*)( lVar4 + 0x10 );
               }

            }

         }
 else {
            local_50 = strlen(pcVar5);
            local_58 = pcVar5;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      LAB_001054ef:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar6 != '\0') goto LAB_001055a3;
   }

   cVar6 = String::operator ==(param_1, "Control");
   if (cVar6 == '\0') {
      for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
         lVar4 = *(long*)( lVar2 + 0x20 );
         if (lVar4 == 0) {
            local_60 = 0;
         }
 else {
            pcVar5 = *(char**)( lVar4 + 8 );
            local_60 = 0;
            if (pcVar5 == (char*)0x0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar4 + 0x10 ));
            }
 else {
               local_50 = strlen(pcVar5);
               local_58 = pcVar5;
               String::parse_latin1((StrRange*)&local_60);
            }

         }

         cVar6 = String::operator ==(param_1, (String*)&local_60);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (cVar6 != '\0') goto LAB_001055a3;
      }

      cVar6 = String::operator ==(param_1, "CanvasItem");
      if (cVar6 == '\0') {
         for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
            lVar4 = *(long*)( lVar2 + 0x20 );
            if (lVar4 == 0) {
               local_60 = 0;
            }
 else {
               pcVar5 = *(char**)( lVar4 + 8 );
               local_60 = 0;
               if (pcVar5 == (char*)0x0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar4 + 0x10 ));
               }
 else {
                  local_50 = strlen(pcVar5);
                  local_58 = pcVar5;
                  String::parse_latin1((StrRange*)&local_60);
               }

            }

            cVar6 = String::operator ==(param_1, (String*)&local_60);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            if (cVar6 != '\0') goto LAB_001055a3;
         }

         cVar6 = String::operator ==(param_1, "Node");
         if (cVar6 == '\0') {
            for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
               lVar4 = *(long*)( lVar2 + 0x20 );
               if (lVar4 == 0) {
                  local_58 = (char*)0x0;
               }
 else {
                  local_58 = (char*)0x0;
                  if (*(char**)( lVar4 + 8 ) == (char*)0x0) {
                     CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)( lVar4 + 0x10 ));
                  }
 else {
                     String::parse_latin1((String*)&local_58, *(char**)( lVar4 + 8 ));
                  }

               }

               cVar6 = String::operator ==(param_1, (String*)&local_58);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
               if (cVar6 != '\0') goto LAB_001055a3;
            }

            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               uVar8 = String::operator ==(param_1, "Object");
               return uVar8;
            }

            goto LAB_001057dc;
         }

      }

   }

   LAB_001055a3:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_001057dc:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* FlowContainer::is_class(String const&) const */undefined8 FlowContainer::is_class(FlowContainer *this, String *param_1) {
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
                  if (lVar5 == 0) goto LAB_0010585f;
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

      LAB_0010585f:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar6 != '\0') goto LAB_00105913;
   }

   cVar6 = String::operator ==(param_1, "FlowContainer");
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
                     if (lVar5 == 0) goto LAB_001059d3;
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

         LAB_001059d3:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

         if (cVar6 != '\0') goto LAB_00105913;
      }

      cVar6 = String::operator ==(param_1, "Container");
      if (cVar6 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar7 = Control::is_class((Control*)this, param_1);
            return uVar7;
         }

         goto LAB_00105a7c;
      }

   }

   LAB_00105913:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_00105a7c:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindTRC<FlowContainer::LastWrapAlignmentMode>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<FlowContainer::LastWrapAlignmentMode>::_gen_argument_type_info(int param_1) {
   undefined4 in_register_0000003c;
   undefined4 *puVar1;
   long in_FS_OFFSET;
   long local_60;
   details local_58[8];
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   puVar1 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_40 = 0x24;
   local_48 = "FlowContainer::LastWrapAlignmentMode";
   String::parse_latin1((StrRange*)&local_50);
   godot::details::enum_qualified_name_to_class_info_name(local_58, (String*)&local_50);
   StringName::StringName((StringName*)&local_60, (String*)local_58, false);
   *puVar1 = 2;
   puVar1[6] = 0;
   *(undefined8*)( puVar1 + 8 ) = 0;
   puVar1[10] = 0x10006;
   *(undefined1(*) [16])( puVar1 + 2 ) = (undefined1[16])0x0;
   local_48 = (char*)0x0;
   StringName::operator =((StringName*)( puVar1 + 4 ), (StringName*)&local_60);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_58);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<FlowContainer::AlignmentMode>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<FlowContainer::AlignmentMode>::_gen_argument_type_info(int param_1) {
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
   local_48 = "FlowContainer::AlignmentMode";
   local_40 = 0x1c;
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
   local_78 = &_LC25;
   local_88 = 0;
   local_90 = 0;
   local_70 = 4;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = &_LC25;
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
      LAB_00105e6d:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_00105e6d;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)pLVar5;
         local_68 = local_80;
         goto joined_r0x00105e8f;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)pLVar5;
   joined_r0x00105e8f:if (lVar2 == 0) {
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
      LAB_001061ed:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_001061ed;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x0010620f;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x0010620f:if (lVar2 == 0) {
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

   if ((code*)PTR__get_property_list_00110028 != Object::_get_property_list) {
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
      LAB_001065dd:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_001065dd;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x001065ff;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x001065ff:if (lVar2 == 0) {
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

   if ((code*)PTR__get_property_list_00110030 != CanvasItem::_get_property_list) {
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
      LAB_001069cd:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_001069cd;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x001069ef;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x001069ef:if (lVar2 == 0) {
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
/* FlowContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void FlowContainer::_get_property_listv(FlowContainer *this, List *param_1, bool param_2) {
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
   local_78 = "FlowContainer";
   local_70 = 0xd;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "FlowContainer";
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
      LAB_00106dad:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_00106dad;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x00106dcf;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x00106dcf:if (lVar2 == 0) {
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

   StringName::StringName((StringName*)&local_78, "FlowContainer", false);
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
/* MethodBindT<FlowContainer::LastWrapAlignmentMode>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<FlowContainer::LastWrapAlignmentMode>::_gen_argument_type_info(int param_1) {
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
      GetTypeInfo<FlowContainer::LastWrapAlignmentMode,void>::get_class_info((GetTypeInfo<FlowContainer::LastWrapAlignmentMode,void>*)local_48);
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
/* MethodBindT<FlowContainer::AlignmentMode>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<FlowContainer::AlignmentMode>::_gen_argument_type_info(int param_1) {
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
      GetTypeInfo<FlowContainer::AlignmentMode,void>::get_class_info((GetTypeInfo<FlowContainer::AlignmentMode,void>*)local_48);
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
   if (in_EDX != 0) goto LAB_00107299;
   local_78 = 0;
   local_68 = &_LC9;
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
      LAB_00107395:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_00107395;
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
   LAB_00107299:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return puVar5;
}
/* MethodBind* create_method_bind<FlowContainer, int>(int (FlowContainer::*)() const) */MethodBind *create_method_bind<FlowContainer,int>(_func_int *param_1) {
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
   *(_func_int**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0010c510;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "FlowContainer";
   local_30 = 0xd;
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
/* MethodBind* create_method_bind<FlowContainer, FlowContainer::AlignmentMode>(void
   (FlowContainer::*)(FlowContainer::AlignmentMode)) */MethodBind *create_method_bind<FlowContainer,FlowContainer::AlignmentMode>(_func_void_AlignmentMode *param_1) {
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
   *(_func_void_AlignmentMode**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0010c570;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "FlowContainer";
   local_30 = 0xd;
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
/* MethodBind* create_method_bind<FlowContainer,
   FlowContainer::AlignmentMode>(FlowContainer::AlignmentMode (FlowContainer::*)() const) */MethodBind *create_method_bind<FlowContainer,FlowContainer::AlignmentMode>(_func_AlignmentMode *param_1) {
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
   *(_func_AlignmentMode**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0010c5d0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "FlowContainer";
   local_30 = 0xd;
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
/* MethodBind* create_method_bind<FlowContainer, FlowContainer::LastWrapAlignmentMode>(void
   (FlowContainer::*)(FlowContainer::LastWrapAlignmentMode)) */MethodBind *create_method_bind<FlowContainer,FlowContainer::LastWrapAlignmentMode>(_func_void_LastWrapAlignmentMode *param_1) {
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
   *(_func_void_LastWrapAlignmentMode**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0010c630;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "FlowContainer";
   local_30 = 0xd;
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
/* MethodBind* create_method_bind<FlowContainer,
   FlowContainer::LastWrapAlignmentMode>(FlowContainer::LastWrapAlignmentMode (FlowContainer::*)()
   const) */MethodBind *create_method_bind<FlowContainer,FlowContainer::LastWrapAlignmentMode>(_func_LastWrapAlignmentMode *param_1) {
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
   *(_func_LastWrapAlignmentMode**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0010c690;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "FlowContainer";
   local_30 = 0xd;
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
/* MethodBind* create_method_bind<FlowContainer, bool>(void (FlowContainer::*)(bool)) */MethodBind *create_method_bind<FlowContainer,bool>(_func_void_bool *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_0010c6f0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "FlowContainer";
   local_30 = 0xd;
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
/* MethodBind* create_method_bind<FlowContainer, bool>(bool (FlowContainer::*)() const) */MethodBind *create_method_bind<FlowContainer,bool>(_func_bool *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_0010c750;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "FlowContainer";
   local_30 = 0xd;
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
/* FlowContainer::_initialize_classv() */void FlowContainer::_initialize_classv(void) {
   long in_FS_OFFSET;
   undefined8 local_70;
   long local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
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
                  if ((code*)PTR__bind_methods_00110048 != Node::_bind_methods) {
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
               if ((code*)PTR__bind_compatibility_methods_00110038 != Object::_bind_compatibility_methods) {
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
         if ((code*)PTR__bind_methods_00110040 != Control::_bind_methods) {
            Container::_bind_methods();
         }

         Container::initialize_class()::initialized =
         '\x01';
      }

      local_58 = "Container";
      local_68 = 0;
      local_50 = 9;
      String::parse_latin1((StrRange*)&local_68);
      StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
      local_58 = "FlowContainer";
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
      LAB_00108560:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
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
   if (lVar8 == 0) goto LAB_00108560;
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
            goto LAB_00108471;
         }

         uVar6 = _realloc(this, lVar8);
         if ((int)uVar6 != 0) {
            return uVar6;
         }

      }

      puVar7 = *(undefined8**)this;
      if (puVar7 != (undefined8*)0x0) {
         LAB_00108471:puVar7[-1] = param_1;
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
/* CowData<_LineData>::_realloc(long) */undefined8 CowData<_LineData>::_realloc(CowData<_LineData> *this, long param_1) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<_LineData>::resize<false>(long) */undefined8 CowData<_LineData>::resize<false>(CowData<_LineData> *this, long param_1) {
   long *plVar1;
   code *pcVar2;
   undefined1(*pauVar3)[16];
   long lVar4;
   ulong uVar5;
   undefined8 *puVar6;
   undefined1(*pauVar7)[16];
   undefined8 uVar8;
   undefined8 *puVar9;
   long lVar10;
   long lVar11;
   if (param_1 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return 0x1f;
   }

   lVar4 = *(long*)this;
   if (lVar4 == 0) {
      if (param_1 == 0) {
         return 0;
      }

      _copy_on_write(this);
      lVar11 = 0;
      lVar4 = 0;
   }
 else {
      lVar11 = *(long*)( lVar4 + -8 );
      if (param_1 == lVar11) {
         return 0;
      }

      if (param_1 == 0) {
         LOCK();
         plVar1 = (long*)( lVar4 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 != 0) {
            *(undefined8*)this = 0;
            return 0;
         }

         lVar4 = *(long*)this;
         *(undefined8*)this = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
         return 0;
      }

      _copy_on_write(this);
      lVar4 = lVar11 * 0x18;
      if (lVar4 != 0) {
         uVar5 = lVar4 - 1U | lVar4 - 1U >> 1;
         uVar5 = uVar5 | uVar5 >> 2;
         uVar5 = uVar5 | uVar5 >> 4;
         uVar5 = uVar5 | uVar5 >> 8;
         uVar5 = uVar5 | uVar5 >> 0x10;
         lVar4 = ( uVar5 | uVar5 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 0x18 == 0) {
      LAB_00108930:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
      return 6;
   }

   uVar5 = param_1 * 0x18 - 1;
   uVar5 = uVar5 >> 1 | uVar5;
   uVar5 = uVar5 | uVar5 >> 2;
   uVar5 = uVar5 | uVar5 >> 4;
   uVar5 = uVar5 | uVar5 >> 8;
   uVar5 = uVar5 | uVar5 >> 0x10;
   uVar5 = uVar5 | uVar5 >> 0x20;
   lVar10 = uVar5 + 1;
   if (lVar10 == 0) goto LAB_00108930;
   if (param_1 <= lVar11) {
      if (( lVar10 != lVar4 ) && ( uVar8 = _realloc(this, lVar10) ),(int)uVar8 != 0) {
         return uVar8;
      }

      if (*(long*)this != 0) {
         *(long*)( *(long*)this + -8 ) = param_1;
         return 0;
      }

      _DAT_00000000 = 0;
      /* WARNING: Does not return */
      pcVar2 = (code*)invalidInstructionException();
      ( *pcVar2 )();
   }

   if (lVar10 == lVar4) {
      LAB_0010889c:puVar9 = *(undefined8**)this;
      if (puVar9 == (undefined8*)0x0) {
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

      lVar4 = puVar9[-1];
      if (param_1 <= lVar4) goto LAB_00108828;
   }
 else {
      if (lVar11 != 0) {
         uVar8 = _realloc(this, lVar10);
         if ((int)uVar8 != 0) {
            return uVar8;
         }

         goto LAB_0010889c;
      }

      puVar6 = (undefined8*)Memory::alloc_static(uVar5 + 0x11, false);
      if (puVar6 == (undefined8*)0x0) {
         _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
         return 6;
      }

      puVar9 = puVar6 + 2;
      *puVar6 = 1;
      puVar6[1] = 0;
      *(undefined8**)this = puVar9;
      lVar4 = 0;
   }

   pauVar7 = (undefined1(*) [16])( puVar9 + lVar4 * 3 );
   do {
      *(undefined4*)pauVar7[1] = 0;
      pauVar3 = pauVar7 + 1;
      *pauVar7 = (undefined1[16])0x0;
      pauVar7[1][4] = 0;
      pauVar7 = (undefined1(*) [16])( *pauVar3 + 8 );
   }
 while ( (undefined1(*) [16])( *pauVar3 + 8 ) != (undefined1(*) [16])( puVar9 + param_1 * 3 ) );
   LAB_00108828:puVar9[-1] = param_1;
   return 0;
}
/* FlowContainer::_notificationv(int, bool) */void FlowContainer::_notificationv(FlowContainer *this, int param_1, bool param_2) {
   char cVar1;
   int iVar2;
   iVar2 = (int)this;
   if (param_2) {
      if (param_1 != 0x33) {
         if (param_1 < 0x34) {
            if (param_1 == 0x2d) goto LAB_001089d3;
            if (param_1 != 0x31) goto LAB_001089db;
         }
 else if (param_1 != 0x7da) goto LAB_001089db;
         Container::queue_sort();
         goto LAB_001089db;
      }

      cVar1 = CanvasItem::is_visible_in_tree();
      if (cVar1 == '\0') {
         LAB_001089d3:Control::update_minimum_size();
         goto LAB_001089db;
      }

   }
 else {
      for (int i = 0; i < 3; i++) {
         Node::_notification(iVar2);
      }

      if ((code*)PTR__notification_00110050 != Control::_notification) {
         Container::_notification(iVar2);
      }

      if (param_1 != 0x33) {
         if (param_1 < 0x34) {
            if (param_1 == 0x2d) goto LAB_00108b40;
            if (param_1 != 0x31) {
               return;
            }

         }
 else if (param_1 != 0x7da) {
            return;
         }

         Container::queue_sort();
         return;
      }

      cVar1 = CanvasItem::is_visible_in_tree();
      if (cVar1 == '\0') {
         LAB_00108b40:Control::update_minimum_size();
         return;
      }

   }

   _resort(this);
   Control::update_minimum_size();
   if (!param_2) {
      return;
   }

   LAB_001089db:if ((code*)PTR__notification_00110050 != Control::_notification) {
      Container::_notification(iVar2);
   }

   for (int i = 0; i < 3; i++) {
      Control::_notification(iVar2);
   }

   return;
}
/* WARNING: Removing unreachable block (ram,0x00108cf8) *//* String vformat<StringName>(String const&, StringName const) */undefined8 *vformat<StringName>(undefined8 *param_1, bool *param_2, StringName *param_3) {
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
/* MethodBindTRC<bool>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindTRC<bool>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
         _err_print_error(&_LC78, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_00109070;
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

         bVar2 = (bool)( *(code*)pVVar3 )();
         Variant::Variant((Variant*)local_48, bVar2);
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

   LAB_00109070:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<bool>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRC<bool>::validated_call(MethodBindTRC<bool> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   Variant VVar1;
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

         goto LAB_00109312;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   VVar1 = ( Variant )(*pcVar2)(param_1 + *(long*)( this + 0x60 ));
   param_3[8] = VVar1;
   LAB_00109312:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<bool>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<bool>::ptrcall(MethodBindTRC<bool> *this, Object *param_1, void **param_2, void *param_3) {
   undefined1 uVar1;
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

         goto LAB_001094d1;
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
   *(undefined1*)param_3 = uVar1;
   LAB_001094d1:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<bool>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindT<bool>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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

         goto LAB_00109811;
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
      /* WARNING: Could not recover jumptable at 0x0010969d. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(undefined1*)( *(long*)param_3 + 8 ));
      return;
   }

   LAB_00109811:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<bool>::ptrcall(Object*, void const**, void*) const */void MethodBindT<bool>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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

         goto LAB_001099f9;
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
      /* WARNING: Could not recover jumptable at 0x00109882. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), **param_3 != '\0');
      return;
   }

   LAB_001099f9:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindTRC<FlowContainer::LastWrapAlignmentMode>::call(Object*, Variant const**, int,
   Callable::CallError&) const */Object *MethodBindTRC<FlowContainer::LastWrapAlignmentMode>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
         _err_print_error(&_LC78, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_00109ac0;
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

   LAB_00109ac0:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<FlowContainer::LastWrapAlignmentMode>::validated_call(Object*, Variant const**,
   Variant*) const */void MethodBindTRC<FlowContainer::LastWrapAlignmentMode>::validated_call(MethodBindTRC<FlowContainer::LastWrapAlignmentMode> *this, Object *param_1, Variant **param_2, Variant *param_3) {
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

         goto LAB_00109cd4;
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
   LAB_00109cd4:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<FlowContainer::LastWrapAlignmentMode>::ptrcall(Object*, void const**, void*) const
    */void MethodBindTRC<FlowContainer::LastWrapAlignmentMode>::ptrcall(MethodBindTRC<FlowContainer::LastWrapAlignmentMode> *this, Object *param_1, void **param_2, void *param_3) {
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

         goto LAB_00109e83;
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
   LAB_00109e83:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<FlowContainer::LastWrapAlignmentMode>::validated_call(Object*, Variant const**,
   Variant*) const */void MethodBindT<FlowContainer::LastWrapAlignmentMode>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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

         goto LAB_0010a1c1;
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
      /* WARNING: Could not recover jumptable at 0x0010a04c. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(undefined4*)( *(long*)param_3 + 8 ));
      return;
   }

   LAB_0010a1c1:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<FlowContainer::LastWrapAlignmentMode>::ptrcall(Object*, void const**, void*) const */void MethodBindT<FlowContainer::LastWrapAlignmentMode>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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

         goto LAB_0010a3a1;
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
      /* WARNING: Could not recover jumptable at 0x0010a22b. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), **param_3);
      return;
   }

   LAB_0010a3a1:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindTRC<FlowContainer::AlignmentMode>::call(Object*, Variant const**, int,
   Callable::CallError&) const */Object *MethodBindTRC<FlowContainer::AlignmentMode>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
         _err_print_error(&_LC78, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010a470;
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

   LAB_0010a470:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<FlowContainer::AlignmentMode>::validated_call(Object*, Variant const**, Variant*)
   const */void MethodBindTRC<FlowContainer::AlignmentMode>::validated_call(MethodBindTRC<FlowContainer::AlignmentMode> *this, Object *param_1, Variant **param_2, Variant *param_3) {
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

         goto LAB_0010a684;
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
   LAB_0010a684:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<FlowContainer::AlignmentMode>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<FlowContainer::AlignmentMode>::ptrcall(MethodBindTRC<FlowContainer::AlignmentMode> *this, Object *param_1, void **param_2, void *param_3) {
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

         goto LAB_0010a833;
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
   LAB_0010a833:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<FlowContainer::AlignmentMode>::validated_call(Object*, Variant const**, Variant*)
   const */void MethodBindT<FlowContainer::AlignmentMode>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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

         goto LAB_0010ab71;
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
      /* WARNING: Could not recover jumptable at 0x0010a9fc. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(undefined4*)( *(long*)param_3 + 8 ));
      return;
   }

   LAB_0010ab71:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<FlowContainer::AlignmentMode>::ptrcall(Object*, void const**, void*) const */void MethodBindT<FlowContainer::AlignmentMode>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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

         goto LAB_0010ad51;
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
      /* WARNING: Could not recover jumptable at 0x0010abdb. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), **param_3);
      return;
   }

   LAB_0010ad51:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindTRC<int>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindTRC<int>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
         _err_print_error(&_LC78, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010ae20;
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

   LAB_0010ae20:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<int>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRC<int>::validated_call(MethodBindTRC<int> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   int iVar1;
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

         goto LAB_0010b034;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   iVar1 = ( *pcVar2 )(param_1 + *(long*)( this + 0x60 ));
   *(long*)( param_3 + 8 ) = (long)iVar1;
   LAB_0010b034:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<int>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<int>::ptrcall(MethodBindTRC<int> *this, Object *param_1, void **param_2, void *param_3) {
   int iVar1;
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

         goto LAB_0010b1e3;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   iVar1 = ( *pcVar2 )(param_1 + *(long*)( this + 0x60 ));
   *(long*)param_3 = (long)iVar1;
   LAB_0010b1e3:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void call_with_variant_args_dv<__UnexistingClass, bool>(__UnexistingClass*, void
   (__UnexistingClass::*)(bool), Variant const**, int, Callable::CallError&, Vector<Variant> const&)
    */void call_with_variant_args_dv<__UnexistingClass,bool>(__UnexistingClass *param_1, _func_void_bool *param_2, Variant **param_3, int param_4, CallError *param_5, Vector *param_6) {
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
      goto LAB_0010b43d;
   }

   lVar1 = *(long*)( in_stack_00000008 + 8 );
   if (lVar1 == 0) {
      if (uVar8 != 1) goto LAB_0010b4a0;
   }
 else {
      lVar2 = *(long*)( lVar1 + -8 );
      if ((int)lVar2 < (int)( uVar8 ^ 1 )) {
         LAB_0010b4a0:uVar6 = 4;
         LAB_0010b43d:*(undefined4*)param_6 = uVar6;
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
         goto LAB_0010b3bb;
      }

   }

   this * (Variant**)CONCAT44(in_register_0000000c, param_4);
   LAB_0010b3bb:*(undefined4*)param_6 = 0;
   if (( (ulong)param_2 & 1 ) != 0) {
      param_2 = *(_func_void_bool**)( param_2 + *(long*)( param_1 + (long)param_3 ) + -1 );
   }

   cVar5 = Variant::can_convert_strict(*(undefined4*)this, 1);
   uVar4 = _LC82;
   if (cVar5 == '\0') {
      *(undefined4*)param_6 = 2;
      *(undefined8*)( param_6 + 4 ) = uVar4;
   }

   Variant::operator_cast_to_bool(this);
   /* WARNING: Could not recover jumptable at 0x0010b417. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( *param_2 )(SUB81(param_1 + (long)param_3, 0));
   return;
}
/* MethodBindT<bool>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindT<bool>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
         _err_print_error(&_LC78, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         *(undefined4*)param_1 = 0;
         *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
         goto LAB_0010b596;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   call_with_variant_args_dv<__UnexistingClass,bool>(p_Var2, (_func_void_bool*)param_2[0xb], (Variant**)param_2[0xc], (int)param_4, in_R8, in_R9);
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   LAB_0010b596:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void call_with_variant_args_dv<__UnexistingClass,
   FlowContainer::LastWrapAlignmentMode>(__UnexistingClass*, void
   (__UnexistingClass::*)(FlowContainer::LastWrapAlignmentMode), Variant const**, int,
   Callable::CallError&, Vector<Variant> const&) */void call_with_variant_args_dv<__UnexistingClass,FlowContainer::LastWrapAlignmentMode>(__UnexistingClass *param_1, _func_void_LastWrapAlignmentMode *param_2, Variant **param_3, int param_4, CallError *param_5, Vector *param_6) {
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
      goto LAB_0010b85d;
   }

   lVar1 = *(long*)( in_stack_00000008 + 8 );
   if (lVar1 == 0) {
      if (uVar8 != 1) goto LAB_0010b8c0;
   }
 else {
      lVar2 = *(long*)( lVar1 + -8 );
      if ((int)lVar2 < (int)( uVar8 ^ 1 )) {
         LAB_0010b8c0:uVar6 = 4;
         LAB_0010b85d:*(undefined4*)param_6 = uVar6;
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
         goto LAB_0010b7db;
      }

   }

   this * (Variant**)CONCAT44(in_register_0000000c, param_4);
   LAB_0010b7db:*(undefined4*)param_6 = 0;
   if (( (ulong)param_2 & 1 ) != 0) {
      param_2 = *(_func_void_LastWrapAlignmentMode**)( param_2 + *(long*)( param_1 + (long)param_3 ) + -1 );
   }

   cVar5 = Variant::can_convert_strict(*(undefined4*)this, 2);
   uVar4 = _LC84;
   if (cVar5 == '\0') {
      *(undefined4*)param_6 = 2;
      *(undefined8*)( param_6 + 4 ) = uVar4;
   }

   Variant::operator_cast_to_long(this);
   /* WARNING: Could not recover jumptable at 0x0010b836. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( *param_2 )((char)( param_1 + (long)param_3 ));
   return;
}
/* MethodBindT<FlowContainer::LastWrapAlignmentMode>::call(Object*, Variant const**, int,
   Callable::CallError&) const */Object *MethodBindT<FlowContainer::LastWrapAlignmentMode>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
         _err_print_error(&_LC78, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         *(undefined4*)param_1 = 0;
         *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
         goto LAB_0010b926;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   call_with_variant_args_dv<__UnexistingClass,FlowContainer::LastWrapAlignmentMode>(p_Var2, (_func_void_LastWrapAlignmentMode*)param_2[0xb], (Variant**)param_2[0xc], (int)param_4, in_R8, in_R9);
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   LAB_0010b926:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void call_with_variant_args_dv<__UnexistingClass,
   FlowContainer::AlignmentMode>(__UnexistingClass*, void
   (__UnexistingClass::*)(FlowContainer::AlignmentMode), Variant const**, int, Callable::CallError&,
   Vector<Variant> const&) */void call_with_variant_args_dv<__UnexistingClass,FlowContainer::AlignmentMode>(__UnexistingClass *param_1, _func_void_AlignmentMode *param_2, Variant **param_3, int param_4, CallError *param_5, Vector *param_6) {
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
      goto LAB_0010bbed;
   }

   lVar1 = *(long*)( in_stack_00000008 + 8 );
   if (lVar1 == 0) {
      if (uVar8 != 1) goto LAB_0010bc50;
   }
 else {
      lVar2 = *(long*)( lVar1 + -8 );
      if ((int)lVar2 < (int)( uVar8 ^ 1 )) {
         LAB_0010bc50:uVar6 = 4;
         LAB_0010bbed:*(undefined4*)param_6 = uVar6;
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
         goto LAB_0010bb6b;
      }

   }

   this * (Variant**)CONCAT44(in_register_0000000c, param_4);
   LAB_0010bb6b:*(undefined4*)param_6 = 0;
   if (( (ulong)param_2 & 1 ) != 0) {
      param_2 = *(_func_void_AlignmentMode**)( param_2 + *(long*)( param_1 + (long)param_3 ) + -1 );
   }

   cVar5 = Variant::can_convert_strict(*(undefined4*)this, 2);
   uVar4 = _LC84;
   if (cVar5 == '\0') {
      *(undefined4*)param_6 = 2;
      *(undefined8*)( param_6 + 4 ) = uVar4;
   }

   Variant::operator_cast_to_long(this);
   /* WARNING: Could not recover jumptable at 0x0010bbc6. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( *param_2 )((char)( param_1 + (long)param_3 ));
   return;
}
/* MethodBindT<FlowContainer::AlignmentMode>::call(Object*, Variant const**, int,
   Callable::CallError&) const */Object *MethodBindT<FlowContainer::AlignmentMode>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
         _err_print_error(&_LC78, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         *(undefined4*)param_1 = 0;
         *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
         goto LAB_0010bcb6;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   call_with_variant_args_dv<__UnexistingClass,FlowContainer::AlignmentMode>(p_Var2, (_func_void_AlignmentMode*)param_2[0xb], (Variant**)param_2[0xc], (int)param_4, in_R8, in_R9);
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   LAB_0010bcb6:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Control flow encountered bad instruction data *//* FlowContainer::~FlowContainer() */void FlowContainer::~FlowContainer(FlowContainer *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<bool>::~MethodBindTRC() */void MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<bool>::~MethodBindT() */void MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<FlowContainer::LastWrapAlignmentMode>::~MethodBindTRC() */void MethodBindTRC<FlowContainer::LastWrapAlignmentMode>::~MethodBindTRC(MethodBindTRC<FlowContainer::LastWrapAlignmentMode> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<FlowContainer::LastWrapAlignmentMode>::~MethodBindT() */void MethodBindT<FlowContainer::LastWrapAlignmentMode>::~MethodBindT(MethodBindT<FlowContainer::LastWrapAlignmentMode> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<FlowContainer::AlignmentMode>::~MethodBindTRC() */void MethodBindTRC<FlowContainer::AlignmentMode>::~MethodBindTRC(MethodBindTRC<FlowContainer::AlignmentMode> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<FlowContainer::AlignmentMode>::~MethodBindT() */void MethodBindT<FlowContainer::AlignmentMode>::~MethodBindT(MethodBindT<FlowContainer::AlignmentMode> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<int>::~MethodBindTRC() */void MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* StringName::~StringName() */void StringName::~StringName(StringName *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* PropertyInfo::~PropertyInfo() */void PropertyInfo::~PropertyInfo(PropertyInfo *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}


/* ThemeOwner::_owner_context_changed() */void ThemeOwner::_owner_context_changed(ThemeOwner *this) {
   long lVar1;
   long lVar2;
   lVar2 = *(long*)( this + 0x178 );
   if (( *(byte*)( lVar2 + 0x2fa ) & 0x40 ) != 0) {
      lVar1 = __dynamic_cast(lVar2, &Object::typeinfo, &Control::typeinfo, 0);
      if (lVar1 != 0) {
         Object::notification((int)lVar1, true);
         return;
      }
      lVar2 = __dynamic_cast(lVar2, &Object::typeinfo, &Window::typeinfo, 0);
      if (lVar2 != 0) {
         Object::notification((int)lVar2, true);
         return;
      }
   }
   return;
}/* ThemeOwner::set_owner_node(Node*) */void ThemeOwner::set_owner_node(ThemeOwner *this, Node *param_1) {
   long lVar1;
   *(undefined1(*) [16])( this + 0x180 ) = (undefined1[16])0x0;
   if (param_1 == (Node*)0x0) {
      return;
   }
   lVar1 = __dynamic_cast(param_1, &Object::typeinfo, &Control::typeinfo, 0);
   if (lVar1 == 0) {
      lVar1 = __dynamic_cast(param_1, &Object::typeinfo, &Window::typeinfo, 0);
      if (lVar1 != 0) {
         *(long*)( this + 0x188 ) = lVar1;
         return;
      }
   } else {
      *(long*)( this + 0x180 ) = lVar1;
   }
   return;
}/* ThemeOwner::get_owner_node() const */long ThemeOwner::get_owner_node(ThemeOwner *this) {
   if (*(long*)( this + 0x180 ) != 0) {
      return *(long*)( this + 0x180 );
   }
   return *(long*)( this + 0x188 );
}/* ThemeOwner::has_owner_node() const */bool ThemeOwner::has_owner_node(ThemeOwner *this) {
   if (*(long*)( this + 0x180 ) != 0) {
      return true;
   }
   return *(long*)( this + 0x188 ) != 0;
}/* ThemeOwner::_get_active_owner_context() const */void ThemeOwner::_get_active_owner_context(ThemeOwner *this) {
   if (*(long*)( this + 400 ) != 0) {
      return;
   }
   ThemeDB::get_singleton();
   ThemeDB::get_default_theme_context();
   return;
}/* ThemeOwner::propagate_theme_changed(Node*, Node*, bool, bool) */void ThemeOwner::propagate_theme_changed(ThemeOwner *this, Node *param_1, Node *param_2, bool param_3, bool param_4) {
   long lVar1;
   char cVar2;
   int iVar3;
   Node *pNVar4;
   int iVar5;
   long in_FS_OFFSET;
   Object *local_48;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 == (Node*)0x0) goto LAB_001002a0;
   pNVar4 = (Node*)__dynamic_cast(param_1, &Object::typeinfo, &Control::typeinfo, 0);
   if (pNVar4 == (Node*)0x0) {
      pNVar4 = (Node*)__dynamic_cast(param_1, &Object::typeinfo, &Window::typeinfo);
      if (pNVar4 == (Node*)0x0) goto LAB_001002a0;
      if (param_2 == pNVar4) {
         LAB_00100368:if (!param_4) goto LAB_00100328;
         Window::set_theme_owner_node(pNVar4);
      } else {
         Window::get_theme();
         if (local_48 == (Object*)0x0) goto LAB_00100368;
         cVar2 = RefCounted::unreference();
         if (cVar2 != '\0') {
            cVar2 = predelete_handler(local_48);
            if (cVar2 != '\0') {
               ( **(code**)( *(long*)local_48 + 0x140 ) )(local_48);
               Memory::free_static(local_48, false);
            }
         }
         LAB_00100328:param_4 = false;
      }
      if (param_3) {
         Object::notification((int)pNVar4, true);
      }
   } else {
      if (param_2 == pNVar4) {
         LAB_001002c8:if (!param_4) goto LAB_0010023c;
         Control::set_theme_owner_node(pNVar4);
      } else {
         Control::get_theme();
         if (local_48 == (Object*)0x0) goto LAB_001002c8;
         cVar2 = RefCounted::unreference();
         if (cVar2 != '\0') {
            cVar2 = predelete_handler(local_48);
            if (cVar2 != '\0') {
               ( **(code**)( *(long*)local_48 + 0x140 ) )(local_48);
               Memory::free_static(local_48, false);
            }
         }
         LAB_0010023c:param_4 = false;
      }
      if (param_3) {
         Object::notification((int)pNVar4, true);
      }
   }
   iVar5 = 0;
   while (true) {
      iVar3 = Node::get_child_count(SUB81(param_1, 0));
      if (iVar3 <= iVar5) break;
      pNVar4 = (Node*)Node::get_child((int)param_1, SUB41(iVar5, 0));
      propagate_theme_changed(this, pNVar4, param_2, param_3, param_4);
      iVar5 = iVar5 + 1;
   };
   LAB_001002a0:if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* ThemeOwner::assign_theme_on_parented(Node*) */void ThemeOwner::assign_theme_on_parented(ThemeOwner *this, Node *param_1) {
   long lVar1;
   char cVar2;
   long lVar3;
   Node *pNVar4;
   lVar3 = Node::get_parent();
   if (lVar3 != 0) {
      lVar1 = __dynamic_cast(lVar3, &Object::typeinfo, &Control::typeinfo);
      if (lVar1 != 0) {
         cVar2 = Control::has_theme_owner_node();
         if (cVar2 != '\0') {
            pNVar4 = (Node*)Control::get_theme_owner_node();
            goto LAB_001004a0;
         }
      }
      lVar3 = __dynamic_cast(lVar3, &Object::typeinfo, &Window::typeinfo);
      if (lVar3 != 0) {
         cVar2 = Window::has_theme_owner_node();
         if (cVar2 != '\0') {
            pNVar4 = (Node*)Window::get_theme_owner_node();
            LAB_001004a0:propagate_theme_changed(this, param_1, pNVar4, false, true);
            return;
         }
      }
   }
   return;
}/* ThemeOwner::clear_theme_on_unparented(Node*) */void ThemeOwner::clear_theme_on_unparented(ThemeOwner *this, Node *param_1) {
   long lVar1;
   char cVar2;
   long lVar3;
   lVar3 = Node::get_parent();
   if (lVar3 != 0) {
      lVar1 = __dynamic_cast(lVar3, &Object::typeinfo, &Control::typeinfo);
      if (lVar1 != 0) {
         cVar2 = Control::has_theme_owner_node();
         if (cVar2 != '\0') goto LAB_00100550;
      }
      lVar3 = __dynamic_cast(lVar3, &Object::typeinfo, &Window::typeinfo);
      if (lVar3 != 0) {
         cVar2 = Window::has_theme_owner_node();
         if (cVar2 != '\0') {
            LAB_00100550:propagate_theme_changed(this, param_1, (Node*)0x0, false, true);
            return;
         }
      }
   }
   return;
}/* ThemeOwner::_get_owner_node_theme(Node*) const */Node *ThemeOwner::_get_owner_node_theme(Node *param_1) {
   long lVar1;
   long lVar2;
   long in_RDX;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (in_RDX != 0) {
      for (int i_493 = 0; i_493 < 2; i_493++) {
         lVar2 = __dynamic_cast();
         if (lVar2 != 0) {
            Control::get_theme();
            goto LAB_001005c2;
         }
      }
   }
   *(undefined8*)param_1 = 0;
   LAB_001005c2:if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* ThemeOwner::_get_next_owner_node(Node*) const */undefined8 ThemeOwner::_get_next_owner_node(Node *param_1) {
   long lVar1;
   long lVar2;
   undefined8 uVar3;
   lVar1 = Node::get_parent();
   if (lVar1 != 0) {
      lVar2 = __dynamic_cast(lVar1, &Object::typeinfo, &Control::typeinfo, 0);
      if (lVar2 != 0) {
         uVar3 = Control::get_theme_owner_node();
         return uVar3;
      }
      lVar1 = __dynamic_cast(lVar1, &Object::typeinfo, &Window::typeinfo, 0);
      if (lVar1 != 0) {
         uVar3 = Window::get_theme_owner_node();
         return uVar3;
      }
   }
   return 0;
}/* ThemeOwner::set_owner_context(ThemeContext*, bool) */void ThemeOwner::set_owner_context(ThemeOwner *this, ThemeContext *param_1, bool param_2) {
   long *plVar1;
   code *pcVar2;
   char cVar3;
   long *plVar4;
   long in_FS_OFFSET;
   ThemeOwner local_58[24];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   ThemeDB::get_singleton();
   plVar4 = (long*)ThemeDB::get_default_theme_context();
   plVar1 = *(long**)( this + 400 );
   if (plVar1 == (long*)0x0) {
      LAB_00100850:pcVar2 = *(code**)( *plVar4 + 0x118 );
      create_custom_callable_function_pointer<ThemeOwner>(local_58, (char*)this, (_func_void*)"&ThemeOwner::_owner_context_changed");
      cVar3 = ( *pcVar2 )(plVar4, CoreStringNames::singleton + 8, local_58);
      Callable::~Callable((Callable*)local_58);
      if (cVar3 != '\0') {
         pcVar2 = *(code**)( *plVar4 + 0x110 );
         create_custom_callable_function_pointer<ThemeOwner>(local_58, (char*)this, (_func_void*)"&ThemeOwner::_owner_context_changed");
         ( *pcVar2 )(plVar4, CoreStringNames::singleton + 8, local_58);
         Callable::~Callable((Callable*)local_58);
         *(ThemeContext**)( this + 400 ) = param_1;
         goto joined_r0x001008f3;
      }
   } else {
      pcVar2 = *(code**)( *plVar1 + 0x118 );
      create_custom_callable_function_pointer<ThemeOwner>(local_58, (char*)this, (_func_void*)"&ThemeOwner::_owner_context_changed");
      cVar3 = ( *pcVar2 )(plVar1, CoreStringNames::singleton + 8, local_58);
      Callable::~Callable((Callable*)local_58);
      if (cVar3 == '\0') goto LAB_00100850;
      plVar1 = *(long**)( this + 400 );
      pcVar2 = *(code**)( *plVar1 + 0x110 );
      create_custom_callable_function_pointer<ThemeOwner>(local_58, (char*)this, (_func_void*)"&ThemeOwner::_owner_context_changed");
      ( *pcVar2 )(plVar1, CoreStringNames::singleton + 8, local_58);
      Callable::~Callable((Callable*)local_58);
   }
   *(ThemeContext**)( this + 400 ) = param_1;
   joined_r0x001008f3:if (param_1 == (ThemeContext*)0x0) {
      pcVar2 = *(code**)( *plVar4 + 0x108 );
      create_custom_callable_function_pointer<ThemeOwner>(local_58, (char*)this, (_func_void*)"&ThemeOwner::_owner_context_changed");
      ( *pcVar2 )(plVar4, CoreStringNames::singleton + 8, local_58, 0);
      Callable::~Callable((Callable*)local_58);
   } else {
      pcVar2 = *(code**)( *(long*)param_1 + 0x108 );
      create_custom_callable_function_pointer<ThemeOwner>(local_58, (char*)this, (_func_void*)"&ThemeOwner::_owner_context_changed");
      ( *pcVar2 )(param_1, CoreStringNames::singleton + 8, local_58, 0);
      Callable::~Callable((Callable*)local_58);
   }
   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         _owner_context_changed(this);
         return;
      }
   } else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* ThemeOwner::get_theme_type_dependencies(Node const*, StringName const&, Vector<StringName>&)
   const */void ThemeOwner::get_theme_type_dependencies(Node *param_1, StringName *param_2, Vector *param_3) {
   StringName *pSVar1;
   char cVar2;
   long lVar3;
   long lVar4;
   StringName *pSVar5;
   long *plVar6;
   long in_FS_OFFSET;
   StringName *local_78;
   StringName *local_70;
   StringName *local_68;
   StringName *local_60;
   StringName *local_58;
   long *local_50[2];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_2 != (StringName*)0x0) {
      lVar3 = __dynamic_cast(param_2, &Object::typeinfo, &Control::typeinfo, 0);
      lVar4 = __dynamic_cast(param_2, &Object::typeinfo, &Window::typeinfo, 0);
      if (lVar3 != 0 || lVar4 != 0) {
         if (*(long*)( param_2 + 8 ) == 0) {
            pSVar5 = *(StringName**)( param_2 + 0x118 );
            if (pSVar5 == (StringName*)0x0) {
               pSVar5 = (StringName*)( **(code**)( *(long*)param_2 + 0x40 ) )(param_2);
            }
         } else {
            pSVar5 = (StringName*)( *(long*)( param_2 + 8 ) + 0x20 );
         }
         StringName::StringName((StringName*)&local_78, pSVar5);
         local_70 = (StringName*)0x0;
         if (lVar3 == 0) {
            if (lVar4 != 0) {
               Window::get_theme_type_variation();
               if (local_70 == local_58) goto LAB_00100d41;
               goto LAB_00100a4c;
            }
         } else {
            Control::get_theme_type_variation();
            if (local_70 == local_58) {
               LAB_00100d41:if (( StringName::configured != '\0' ) && ( local_58 != (StringName*)0x0 )) {
                  StringName::unref();
               }
            } else {
               LAB_00100a4c:StringName::unref();
               local_70 = local_58;
            }
         }
         pSVar5 = *(StringName**)param_3;
         if (( ( pSVar5 == (StringName*)0x0 ) || ( pSVar5 == local_78 ) ) || ( pSVar5 == local_70 )) {
            if (( *(long*)( param_1 + 0x180 ) != 0 ) || ( *(long*)( param_1 + 0x188 ) != 0 )) {
               do {
                  while (true) {
                     _get_owner_node_theme((Node*)&local_68);
                     if (local_68 != (StringName*)0x0) {
                        local_58 = (StringName*)0x0;
                        Theme::get_type_variation_base((StringName*)&local_60);
                        pSVar1 = local_58;
                        pSVar5 = local_60;
                        if (( ( StringName::configured != '\0' ) && ( ( local_60 == (StringName*)0x0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_58 != (StringName*)0x0 )) {
                           StringName::unref();
                        }
                        if (pSVar5 != pSVar1) {
                           Theme::get_type_dependencies(local_68, (StringName*)&local_78, (Vector*)&local_70);
                           if (( ( local_68 != (StringName*)0x0 ) && ( cVar2 = RefCounted::unreference() ),cVar2 != '\0' )) &&( cVar2 = cVar2 != '\0' )(**(code**)( *(long*)local_68 + 0x140 ))(local_68);
                           Memory::free_static(local_68, false);
                        }
                        goto joined_r0x00100e0e;
                     }
                  };
                  lVar3 = _get_next_owner_node(param_1);
                  if (( ( local_68 != (StringName*)0x0 ) && ( cVar2 = RefCounted::unreference() ),pSVar5 = local_68,cVar2 != '\0' )) &&( cVar2 = cVar2 != '\0' );
                  if (lVar3 == 0) goto LAB_00100c30;
               } while ( lVar3 != 0 );
            }
            LAB_00100c30:if (*(long*)( param_1 + 400 ) == 0) {
               ThemeDB::get_singleton();
               ThemeDB::get_default_theme_context();
            }
            ThemeContext::get_themes();
            if (( local_50[0] != (long*)0x0 ) && ( lVar3 = local_50[0][-1] ),local_50[0] + lVar3 != local_50[0]) {
               plVar6 = local_50[0];
               do {
                  if (*plVar6 != 0) {
                     local_60 = (StringName*)0x0;
                     Theme::get_type_variation_base((StringName*)&local_68);
                     pSVar1 = local_60;
                     pSVar5 = local_68;
                     if (( StringName::configured != '\0' ) && ( ( ( local_68 == (StringName*)0x0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_60 != (StringName*)0x0 ) ) )) {
                        StringName::unref();
                     }
                     if (pSVar5 != pSVar1) {
                        Theme::get_type_dependencies((StringName*)*plVar6, (StringName*)&local_78, (Vector*)&local_70);
                        CowData<Ref<Theme>>::_unref((CowData<Ref<Theme>>*)local_50);
                        goto joined_r0x00100e0e;
                     }
                  }
                  plVar6 = plVar6 + 1;
               } while ( local_50[0] + lVar3 != plVar6 );
            }
            CowData<Ref<Theme>>::_unref((CowData<Ref<Theme>>*)local_50);
            pSVar5 = (StringName*)ThemeDB::get_singleton();
            ThemeDB::get_native_type_dependencies(pSVar5, (Vector*)&local_78);
         } else {
            pSVar5 = (StringName*)ThemeDB::get_singleton();
            ThemeDB::get_native_type_dependencies(pSVar5, param_3);
         }
         joined_r0x00100e0e:if (( ( StringName::configured != '\0' ) && ( ( local_70 == (StringName*)0x0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_78 != (StringName*)0x0 )) {
            StringName::unref();
         }
         goto LAB_00100ace;
      }
   }
   _err_print_error("get_theme_type_dependencies", "scene/theme/theme_owner.cpp", 0xcd, "Condition \"!for_c && !for_w\" is true.", "Only Control and Window nodes and derivatives can be polled for theming.", 0, 0);
   LAB_00100ace:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* ThemeOwner::get_theme_item_in_types(Theme::DataType, StringName const&, Vector<StringName>
   const&) */undefined4 *ThemeOwner::get_theme_item_in_types(undefined4 *param_1, Node *param_2, undefined4 param_3, undefined8 param_4, long param_5) {
   long lVar1;
   Object *pOVar2;
   char cVar3;
   long lVar4;
   long *plVar5;
   long lVar6;
   long lVar7;
   long in_FS_OFFSET;
   Object *local_60;
   Object *local_58;
   long *local_50[2];
   long local_40;
   lVar4 = *(long*)( param_5 + 8 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (lVar4 == 0) {
      _err_print_error("get_theme_item_in_types", "scene/theme/theme_owner.cpp", 0xfd, "Condition \"p_theme_types.is_empty()\" is true. Returning: Variant()", "At least one theme type must be specified.", 0, 0);
      *param_1 = 0;
      *(undefined1(*) [16])( param_1 + 2 ) = (undefined1[16])0x0;
   } else {
      if (( *(long*)( param_2 + 0x180 ) != 0 ) || ( *(long*)( param_2 + 0x188 ) != 0 )) {
         do {
            if (lVar4 != 0) {
               lVar6 = lVar4 + *(long*)( lVar4 + -8 ) * 8;
               for (; lVar4 != lVar6; lVar4 = lVar4 + 8) {
                  while (_get_owner_node_theme((Node*)&local_58),local_58 != (Object*)0x0) {
                     cVar3 = Theme::has_theme_item(local_58, param_3, param_4, lVar4);
                     if (cVar3 != '\0') {
                        Theme::get_theme_item(param_1, local_58, param_3, param_4, lVar4);
                        if (( ( local_58 == (Object*)0x0 ) || ( cVar3 = RefCounted::unreference() ),local_60 = local_58,cVar3 == '\0' )) goto LAB_00100fd7;
                        goto LAB_00101105;
                     }
                     if (( ( local_58 == (Object*)0x0 ) || ( cVar3 = RefCounted::unreference() ),pOVar2 = local_58,cVar3 == '\0' )) break;
                     lVar4 = lVar4 + 8;
                     ( **(code**)( *(long*)pOVar2 + 0x140 ) )();
                     Memory::free_static(pOVar2, false);
                     if (lVar6 == lVar4) goto LAB_00100f80;
                  };
               }
            }
            LAB_00100f80:lVar4 = _get_next_owner_node(param_2);
            if (lVar4 == 0) break;
            lVar4 = *(long*)( param_5 + 8 );
         } while ( true );
      }
      if (*(long*)( param_2 + 400 ) == 0) {
         ThemeDB::get_singleton();
         ThemeDB::get_default_theme_context();
      }
      ThemeContext::get_themes();
      if (local_50[0] != (long*)0x0) {
         lVar4 = local_50[0][-1];
         for (plVar5 = local_50[0]; local_50[0] + lVar4 != plVar5; plVar5 = plVar5 + 1) {
            lVar6 = *plVar5;
            if (( ( lVar6 != 0 ) && ( lVar7 = *(long*)( param_5 + 8 ) ),lVar7 != 0 )) {
               while (true) {
                  cVar3 = Theme::has_theme_item(lVar6, param_3, param_4, lVar7);
                  if (cVar3 != '\0') {
                     Theme::get_theme_item(param_1, *plVar5, param_3, param_4, lVar7);
                     CowData<Ref<Theme>>::_unref((CowData<Ref<Theme>>*)local_50);
                     goto LAB_00100fd7;
                  }
                  lVar7 = lVar7 + 8;
                  if (lVar1 == lVar7) break;
                  lVar6 = *plVar5;
               };
            }
         }
      }
      CowData<Ref<Theme>>::_unref((CowData<Ref<Theme>>*)local_50);
      ThemeContext::get_fallback_theme();
      local_58 = (Object*)0x0;
      Theme::get_theme_item(param_1, local_60, param_3, param_4, (Node*)&local_58);
      if (( StringName::configured != '\0' ) && ( local_58 != (Object*)0x0 )) {
         StringName::unref();
      }
      if (( ( local_60 != (Object*)0x0 ) && ( cVar3 = RefCounted::unreference() ),cVar3 != '\0' )) {
         LAB_00101105:( **(code**)( *(long*)local_60 + 0x140 ) )(local_60);
         Memory::free_static(local_60, false);
      }
   }
   LAB_00100fd7:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return param_1;
}/* ThemeOwner::has_theme_item_in_types(Theme::DataType, StringName const&, Vector<StringName>
   const&) */undefined8 ThemeOwner::has_theme_item_in_types(ThemeOwner *this, undefined4 param_2, undefined8 param_3, long param_4) {
   long lVar1;
   Object *pOVar2;
   char cVar3;
   long lVar4;
   undefined8 uVar5;
   long *plVar6;
   long lVar7;
   long lVar8;
   long in_FS_OFFSET;
   Object *local_58;
   long *local_50[2];
   long local_40;
   lVar4 = *(long*)( param_4 + 8 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (lVar4 == 0) {
      _err_print_error("has_theme_item_in_types", "scene/theme/theme_owner.cpp", 0x121, "Condition \"p_theme_types.is_empty()\" is true. Returning: false", "At least one theme type must be specified.", 0, 0);
      uVar5 = 0;
   } else {
      if (( *(long*)( this + 0x180 ) != 0 ) || ( *(long*)( this + 0x188 ) != 0 )) {
         do {
            if (lVar4 != 0) {
               lVar7 = lVar4 + *(long*)( lVar4 + -8 ) * 8;
               for (; lVar7 != lVar4; lVar4 = lVar4 + 8) {
                  while (_get_owner_node_theme((Node*)&local_58),local_58 != (Object*)0x0) {
                     cVar3 = Theme::has_theme_item(local_58, param_2, param_3, lVar4);
                     if (cVar3 != '\0') {
                        if (( ( local_58 != (Object*)0x0 ) && ( cVar3 = RefCounted::unreference() ),cVar3 != '\0' )) &&( cVar3 = cVar3 != '\0' )(**(code**)( *(long*)local_58 + 0x140 ))(local_58);
                        Memory::free_static(local_58, false);
                     }
                     goto LAB_0010132a;
                  };
                  if (( ( local_58 == (Object*)0x0 ) || ( cVar3 = RefCounted::unreference() ),pOVar2 = local_58,cVar3 == '\0' )) break;
                  lVar4 = lVar4 + 8;
                  ( **(code**)( *(long*)pOVar2 + 0x140 ) )();
                  Memory::free_static(pOVar2, false);
                  if (lVar7 == lVar4) goto LAB_001012f0;
               }
            }
         } while ( true );
      }
      if (*(long*)( this + 400 ) == 0) {
         ThemeDB::get_singleton();
         ThemeDB::get_default_theme_context();
      }
      ThemeContext::get_themes();
      if (local_50[0] != (long*)0x0) {
         lVar4 = local_50[0][-1];
         for (plVar6 = local_50[0]; local_50[0] + lVar4 != plVar6; plVar6 = plVar6 + 1) {
            lVar7 = *plVar6;
            if (( ( lVar7 != 0 ) && ( lVar8 = *(long*)( param_4 + 8 ) ),lVar8 != 0 )) {
               do {
                  cVar3 = Theme::has_theme_item(lVar7, param_2, param_3, lVar8);
                  if (cVar3 != '\0') {
                     CowData<Ref<Theme>>::_unref((CowData<Ref<Theme>>*)local_50);
                     LAB_0010132a:uVar5 = 1;
                     goto LAB_0010132f;
                  }
                  lVar8 = lVar8 + 8;
                  if (lVar1 == lVar8) break;
                  lVar7 = *plVar6;
               } while ( true );
            }
         }
      }
      CowData<Ref<Theme>>::_unref((CowData<Ref<Theme>>*)local_50);
      uVar5 = 0;
   }
   LAB_0010132f:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return uVar5;
}/* ThemeOwner::get_theme_default_base_scale() */void ThemeOwner::get_theme_default_base_scale(ThemeOwner *this) {
   Object *pOVar1;
   char cVar2;
   long lVar3;
   long *plVar4;
   long in_FS_OFFSET;
   undefined4 uVar5;
   Object *local_48;
   long *local_40[2];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( this + 0x180 ) != 0) goto LAB_001014d5;
   lVar3 = *(long*)( this + 0x188 );
   while (lVar3 != 0) {
      LAB_001014d5:while (true) {
         _get_owner_node_theme((Node*)&local_48);
         if (( local_48 != (Object*)0x0 ) && ( cVar2 = Theme::has_default_base_scale() ),cVar2 != '\0') {
            uVar5 = Theme::get_default_base_scale();
            if (( local_48 != (Object*)0x0 ) && ( ( cVar2 = RefCounted::unreference() ),cVar2 != '\0' && ( cVar2 = predelete_handler(local_48) ),cVar2 != '\0' )) {
               ( **(code**)( *(long*)local_48 + 0x140 ) )(uVar5, local_48);
               Memory::free_static(local_48, false);
            }
            goto LAB_00101619;
         }
         lVar3 = _get_next_owner_node((Node*)this);
         if (( ( local_48 != (Object*)0x0 ) && ( cVar2 = RefCounted::unreference() ),pOVar1 = local_48,cVar2 != '\0' )) &&( cVar2 = cVar2 != '\0' );
         if (lVar3 == 0) goto LAB_00101550;
      };
      ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
      Memory::free_static(pOVar1, false);
   };
   LAB_00101550:if (*(long*)( this + 400 ) == 0) {
      ThemeDB::get_singleton();
      ThemeDB::get_default_theme_context();
   }
   ThemeContext::get_themes();
   if (local_40[0] != (long*)0x0) {
      lVar3 = local_40[0][-1];
      for (plVar4 = local_40[0]; local_40[0] + lVar3 != plVar4; plVar4 = plVar4 + 1) {
         if (( *plVar4 != 0 ) && ( cVar2 = Theme::has_default_base_scale() ),cVar2 != '\0') {
            uVar5 = Theme::get_default_base_scale();
            CowData<Ref<Theme>>::_unref((CowData<Ref<Theme>>*)local_40);
            LAB_00101619:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
               return;
            }
            goto LAB_001016ad;
         }
      }
   }
   CowData<Ref<Theme>>::_unref((CowData<Ref<Theme>>*)local_40);
   uVar5 = ThemeDB::get_singleton();
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      ThemeDB::get_fallback_base_scale();
      return;
   }
   LAB_001016ad:/* WARNING: Subroutine does not return */__stack_chk_fail(uVar5);
}/* ThemeOwner::get_theme_default_font() */void ThemeOwner::get_theme_default_font(void) {
   Object *pOVar1;
   char cVar2;
   long lVar3;
   long *plVar4;
   Node *in_RSI;
   long in_FS_OFFSET;
   Object *local_48;
   long *local_40[2];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( in_RSI + 0x180 ) != 0) goto LAB_00101705;
   lVar3 = *(long*)( in_RSI + 0x188 );
   while (lVar3 != 0) {
      LAB_00101705:while (true) {
         _get_owner_node_theme((Node*)&local_48);
         if (( local_48 != (Object*)0x0 ) && ( cVar2 = Theme::has_default_font() ),cVar2 != '\0') {
            Theme::get_default_font();
            if (( local_48 != (Object*)0x0 ) && ( ( cVar2 = RefCounted::unreference() ),cVar2 != '\0' && ( cVar2 = predelete_handler(local_48) ),cVar2 != '\0' )) {
               ( **(code**)( *(long*)local_48 + 0x140 ) )(local_48);
               Memory::free_static(local_48, false);
            }
            goto LAB_001017e8;
         }
         lVar3 = _get_next_owner_node(in_RSI);
         if (( ( local_48 != (Object*)0x0 ) && ( cVar2 = RefCounted::unreference() ),pOVar1 = local_48,cVar2 != '\0' )) &&( cVar2 = cVar2 != '\0' );
         if (lVar3 == 0) goto LAB_00101778;
      };
      ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
      Memory::free_static(pOVar1, false);
   };
   LAB_00101778:if (*(long*)( in_RSI + 400 ) == 0) {
      ThemeDB::get_singleton();
      ThemeDB::get_default_theme_context();
   }
   ThemeContext::get_themes();
   if (local_40[0] != (long*)0x0) {
      lVar3 = local_40[0][-1];
      for (plVar4 = local_40[0]; local_40[0] + lVar3 != plVar4; plVar4 = plVar4 + 1) {
         if (( *plVar4 != 0 ) && ( cVar2 = Theme::has_default_font() ),cVar2 != '\0') {
            Theme::get_default_font();
            CowData<Ref<Theme>>::_unref((CowData<Ref<Theme>>*)local_40);
            goto LAB_001017e8;
         }
      }
   }
   CowData<Ref<Theme>>::_unref((CowData<Ref<Theme>>*)local_40);
   ThemeDB::get_singleton();
   ThemeDB::get_fallback_font();
   LAB_001017e8:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return;
}/* ThemeOwner::get_theme_default_font_size() */ulong ThemeOwner::get_theme_default_font_size(ThemeOwner *this) {
   Object *pOVar1;
   char cVar2;
   uint uVar3;
   long lVar4;
   ulong uVar5;
   long *plVar6;
   long in_FS_OFFSET;
   Object *local_48;
   long *local_40[2];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( this + 0x180 ) != 0) goto LAB_001018fd;
   lVar4 = *(long*)( this + 0x188 );
   while (lVar4 != 0) {
      LAB_001018fd:while (true) {
         _get_owner_node_theme((Node*)&local_48);
         if (( local_48 != (Object*)0x0 ) && ( cVar2 = Theme::has_default_font_size() ),cVar2 != '\0') {
            uVar3 = Theme::get_default_font_size();
            uVar5 = (ulong)uVar3;
            if (( local_48 != (Object*)0x0 ) && ( ( cVar2 = RefCounted::unreference() ),cVar2 != '\0' && ( cVar2 = predelete_handler(local_48) ),cVar2 != '\0' )) {
               ( **(code**)( *(long*)local_48 + 0x140 ) )(local_48);
               Memory::free_static(local_48, false);
            }
            goto LAB_00101a2d;
         }
         lVar4 = _get_next_owner_node((Node*)this);
         if (( ( local_48 != (Object*)0x0 ) && ( cVar2 = RefCounted::unreference() ),pOVar1 = local_48,cVar2 != '\0' )) &&( cVar2 = cVar2 != '\0' );
         if (lVar4 == 0) goto LAB_00101970;
      };
      ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
      Memory::free_static(pOVar1, false);
   };
   LAB_00101970:if (*(long*)( this + 400 ) == 0) {
      ThemeDB::get_singleton();
      ThemeDB::get_default_theme_context();
   }
   ThemeContext::get_themes();
   if (local_40[0] != (long*)0x0) {
      lVar4 = local_40[0][-1];
      for (plVar6 = local_40[0]; local_40[0] + lVar4 != plVar6; plVar6 = plVar6 + 1) {
         if (( *plVar6 != 0 ) && ( cVar2 = Theme::has_default_font_size() ),cVar2 != '\0') {
            uVar3 = Theme::get_default_font_size();
            uVar5 = (ulong)uVar3;
            CowData<Ref<Theme>>::_unref((CowData<Ref<Theme>>*)local_40);
            LAB_00101a2d:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
               return uVar5;
            }
            goto LAB_00101ab1;
         }
      }
   }
   CowData<Ref<Theme>>::_unref((CowData<Ref<Theme>>*)local_40);
   ThemeDB::get_singleton();
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      uVar5 = ThemeDB::get_fallback_font_size();
      return uVar5;
   }
   LAB_00101ab1:/* WARNING: Subroutine does not return */__stack_chk_fail();
}/* CallableCustomMethodPointer<ThemeOwner, void>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<ThemeOwner,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<ThemeOwner,void> *this) {
   return;
}/* CallableCustomMethodPointer<ThemeOwner, void>::get_argument_count(bool&) const */undefined8 CallableCustomMethodPointer<ThemeOwner,void>::get_argument_count(CallableCustomMethodPointer<ThemeOwner,void> *this, bool *param_1) {
   *param_1 = true;
   return 0;
}/* CallableCustomMethodPointer<ThemeOwner, void>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<ThemeOwner,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<ThemeOwner,void> *this) {
   operator_delete(this, 0x48);
   return;
}/* CallableCustomMethodPointerBase::get_method() const */void CallableCustomMethodPointerBase::get_method(void) {
   long in_RSI;
   StringName *in_RDI;
   StringName::StringName(in_RDI, *(char**)( in_RSI + 0x20 ), false);
   return;
}/* CallableCustomMethodPointer<ThemeOwner, void>::get_object() const */undefined8 CallableCustomMethodPointer<ThemeOwner,void>::get_object(CallableCustomMethodPointer<ThemeOwner,void> *this) {
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
      };
      puVar4 = (ulong*)( (ulong)uVar3 * 0x10 + ObjectDB::object_slots );
      if (( *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff ) != ( *puVar4 & 0x7fffffffff )) {
         uVar2 = 0;
         ObjectDB::spin_lock._0_1_ = '\0';
         goto LAB_00101bfd;
      }
      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_00101bfd;
      }
   } else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }
   uVar2 = 0;
   LAB_00101bfd:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return uVar2;
}/* CallableCustomMethodPointerBase::get_as_text() const */void CallableCustomMethodPointerBase::get_as_text(void) {
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
}/* CallableCustomMethodPointer<ThemeOwner, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */void CallableCustomMethodPointer<ThemeOwner,void>::call(CallableCustomMethodPointer<ThemeOwner,void> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
   long *plVar1;
   long lVar2;
   long lVar3;
   char *pcVar4;
   uint uVar5;
   ulong *puVar6;
   code *UNRECOVERED_JUMPTABLE;
   ulong uVar7;
   long in_FS_OFFSET;
   bool bVar8;
   long local_60;
   long local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar5 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
   if (uVar5 < (uint)ObjectDB::slot_max) {
      while (true) {
         uVar7 = (ulong)local_48 >> 8;
         local_48 = (char*)( uVar7 << 8 );
         LOCK();
         bVar8 = (char)ObjectDB::spin_lock == '\0';
         if (bVar8) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }
         UNLOCK();
         if (bVar8) break;
         local_48 = (char*)( uVar7 << 8 );
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      };
      puVar6 = (ulong*)( (ulong)uVar5 * 0x10 + ObjectDB::object_slots );
      uVar7 = *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff;
      if (uVar7 != ( *puVar6 & 0x7fffffffff )) {
         ObjectDB::spin_lock._0_1_ = '\0';
         goto LAB_00101ecf;
      }
      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar6[1] == 0) goto LAB_00101ecf;
      lVar2 = *(long*)( this + 0x28 );
      UNRECOVERED_JUMPTABLE = *(code**)( this + 0x38 );
      lVar3 = *(long*)( this + 0x40 );
      if (param_2 == 0) {
         *(undefined4*)param_4 = 0;
         if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
            UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( lVar2 + lVar3 ) + -1 );
         }
         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            for (int i_494 = 0; i_494 < 2; i_494++) {
               /* WARNING: Could not recover jumptable at 0x00101ea8. Too many branches */
            }
            ( *UNRECOVERED_JUMPTABLE )((long*)( lVar2 + lVar3 ), uVar7, UNRECOVERED_JUMPTABLE);
            return;
         }
         goto LAB_00102035;
      }
      *(undefined4*)param_4 = 3;
      *(undefined4*)( param_4 + 8 ) = 0;
   } else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
      LAB_00101ecf:local_50 = 0;
      local_48 = "\', can\'t call method.";
      local_40 = 0x15;
      String::parse_latin1((StrRange*)&local_50);
      uitos(( ulong ) & local_60);
      operator+((char *)&
      local_58,(String*)"Invalid Object id \'";
      String::operator +((String*)&local_48, (String*)&local_58);
      _err_print_error(&_LC7, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", (String*)&local_48, 0, 0);
      pcVar4 = local_48;
      if (local_48 != (char*)0x0) {
         LOCK();
         plVar1 = (long*)( local_48 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_48 = (char*)0x0;
            Memory::free_static(pcVar4 + -0x10, false);
         }
      }
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
      lVar2 = local_60;
      if (local_60 != 0) {
         LOCK();
         plVar1 = (long*)( local_60 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_60 = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }
      }
      lVar2 = local_50;
      if (local_50 != 0) {
         LOCK();
         plVar1 = (long*)( local_50 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_50 = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }
      }
   }
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   LAB_00102035:/* WARNING: Subroutine does not return */__stack_chk_fail();
}/* Callable create_custom_callable_function_pointer<ThemeOwner>(ThemeOwner*, char const*, void
   (ThemeOwner::*)()) */ThemeOwner *create_custom_callable_function_pointer<ThemeOwner>(ThemeOwner *param_1, char *param_2, _func_void *param_3) {
   undefined8 uVar1;
   CallableCustom *this;
   undefined8 in_RCX;
   undefined8 in_R8;
   this(CallableCustom * operator_new(0x48, ""));
   CallableCustom::CallableCustom(this);
   *(undefined**)( this + 0x20 ) = &_LC8;
   *(undefined1(*) [16])( this + 0x30 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0x40 ) = 0;
   *(undefined***)this = &PTR_hash_001023f8;
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
}/* CowData<Ref<Theme> >::_unref() */void CowData<Ref<Theme>>::_unref(CowData<Ref<Theme>> *this) {
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
   if (*plVar1 != 0) {
      *(undefined8*)this = 0;
      return;
   }
   plVar1 = *(long**)this;
   if (plVar1 == (long*)0x0) {
      /* WARNING: Does not return */
      pcVar4 = (code*)invalidInstructionException();
      ( *pcVar4 )();
   }
   lVar2 = plVar1[-1];
   *(undefined8*)this = 0;
   if (lVar2 != 0) {
      lVar7 = 0;
      plVar6 = plVar1;
      LAB_001022ad:do {
         if (*plVar6 != 0) {
            cVar5 = RefCounted::unreference();
            if (cVar5 != '\0') {
               pOVar3 = (Object*)*plVar6;
               cVar5 = predelete_handler(pOVar3);
               if (cVar5 != '\0') {
                  lVar7 = lVar7 + 1;
                  plVar6 = plVar6 + 1;
                  ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
                  Memory::free_static(pOVar3, false);
                  if (lVar2 == lVar7) break;
                  goto LAB_001022ad;
               }
            }
         }
         lVar7 = lVar7 + 1;
         plVar6 = plVar6 + 1;
      } while ( lVar2 != lVar7 );
   }
   Memory::free_static(plVar1 + -2, false);
   return;
}/* WARNING: Control flow encountered bad instruction data *//* CallableCustomMethodPointer<ThemeOwner, void>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<ThemeOwner,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<ThemeOwner,void> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
